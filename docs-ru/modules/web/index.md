Title: Модуль веб-сервера

# Модуль веб-сервера

Основной рабочий процесс `stappler_webserver_httpd` основан на модуле, загружаемом в веб-сервер Apache HTTPD. Модуль загружается с помощью конфигурации сервера:

```
LoadModule stappler_web_module <путь к модулю>/libstappler_web_module.so
```

Пример `examples/web` использует базовый шаблон конфигурации. См. [документацию Apache HTTPD](https://httpd.apache.org/docs/2.4/configuring.html) для подробностей. Пример предполагает, что вебсервер собран с модулями в статическом режиме `--enable-mods-static=most`.

```
StartServers 2
DirectoryIndex index.html
LogLevel warn
LogFormat "%h %l %u %t \"%r\" %>s %b" common

SSLRandomSeed startup builtin
SSLRandomSeed connect builtin
SSLCipherSuite HIGH:MEDIUM:!aNULL:!MD5
SSLProtocol all -SSLv2 -SSLv3
SSLPassPhraseDialog  builtin
SSLSessionCache "shmcb:/home/httpd/server/logs/ssl_scache(512000)"
SSLSessionCacheTimeout 300

# Загрузка основного модуля
LoadModule stappler_web_module $(abspath $(BUILD_SHARED_LIBRARY))

# Минимальное и максимальное число потоков для асинхронных задач (меньше - удобно для отладки)
StapplerRootThreadsCount 1 2

ServerRoot "$(LOCAL_DIR)"
ErrorLog "logs/error_log"
CustomLog "logs/access_log" common

# Путь к скомпилированным компонентам
StapplerSourceRoot "$(LOCAL_OUTDIR)/host"

Include $(LOCAL_DIR)/conf/httpd.conf
```

Реальная конфигурация зависит от нужд конечного приложения. Возможно, для установки будет использоваться средство `apxs` из поставки веб-сервера.

Модуль веб-сервера добавляет следующие параметры конфигурации:

```
# Путь, по которому система будет искать библиотеки компонентов, задаётся на верхнем уровне
StapplerSourceRoot <Путь к директории>

# Загружает компонент из модуля (для сервера)
StapplerComponent "<Имя функции загрузки>" [параметр=значение]

# Загружает компонент из динамической библиотеки (для сервера)
StapplerComponent "<Имя файла>:<Имя функции загрузки>:<Имя компонента>" [параметр=значение]

# Загружает компонент WebAssembly. Имя функции передаётся в формает WIT (например: stappler:wasm/app#make-component)
StapplerWasmComponent "<путь к файлу>" "<функция для вызова>"

# Параметры сеанса в cookies
StapplerSession name=<Имя переменной> key=<Хэш-ключ> maxage=<срок в секундах> secure=<флаг защиты>

# Параметры подключения к БД. Переменные передаются напрямую в загрузку драйвера (см. модуль БД SDK)
StapplerDbParams driver=<имя драйвера> <параметр>=<значение>

# Уникальный ключ сервера, используется для целей криптографической защиты
# Мы используем для генерации `base64 < /dev/urandom | tr -d 'O0Il1+/' | head -c 44; printf '\n'`
StapplerHostSecret NX68nXCaeH6srdevZN5PCcgwgeeAp73ppdLKvNmyKcac
```

Модуль может использовать как собственное подключение к БД, так и подключение, созданное `mod_dbd`.

## Компоненты

Для работы создаются компоненты веб-сервера `web::HostComponent`.

Пример компонента:

```cpp
class TestComponent : public HostComponent {
public:
	TestComponent(const Host &serv, const HostComponentInfo &info);
	virtual ~TestComponent() { }

	virtual void handleChildInit(const Host &) override;
	virtual void initTransaction(db::Transaction &) override;

protected:
	Scheme _objects = Scheme("objects");
};

TestComponent::TestComponent(const Host &serv, const HostComponentInfo &info)
: HostComponent(serv, info) {
	// Экспортирует схему данных
	exportValues(_objects);

	using namespace db;

	_objects.define(Vector<Field>{
		Field::Text("text", MinLength(3)),
		Field::Extra("data", Vector<Field>{
			Field::Array("strings", Field::Text("")),
		}),
		Field::File("image", MaxFileSize(1_MiB)),
		Field::Text("alias", Transform::Alias),
		Field::Integer("mtime", Flags::AutoMTime | Flags::Indexed),
		Field::Integer("index", Flags::Indexed),
	},
	AccessRole::Admin(AccessRoleId::Authorized));
}

void TestComponent::handleChildInit(const Host &serv) {
	// Добавляет автоматический ресурс для схемы данных
	serv.addResourceHandler("/objects/", _objects);

	// Добавляет команду для консоли администратора
	addOutputCommand("test", [&] (StringView str, const Callback<void(const Value &)> &cb) -> bool {
		if (auto t = db::Transaction::acquireIfExists()) {
			cb(Value("test"));
		}
		return true;
	}, " - test");
}

void TestComponent::initTransaction(db::Transaction &t) {
	// Функция создания новой транзакции к БД
	t.setRole(db::AccessRoleId::Authorized);
}

// Экспортируемая точка входа
SP_EXTERN_C HostComponent * CreateTestComponent(const Host &serv, const HostComponentInfo &info) {
	return new TestComponent(serv, info);
}
```

Компоннент экспортирует схемы данных для хоста и определяет карту доступа к ресурсам и обработчикам запросов.

## Обработчики запросов

Пример простого обработчика запроса:

```cpp
class TestRequestHandler : public RequestHandler {
public:
	virtual bool isRequestPermitted(Request & rctx) override {
		return true;
	}

	virtual Status onTranslateName(Request &rctx) override {
		return HTTP_NOT_FOUND;
	}
};

// Для добавления в handleChildInit компонента
serv.addHandler("/test", RequestHandler::Make<TestRequestHandler>());
```

Тип `RequestHandler` предоставляет основные точки перегрузки:
* `onRequestRecieved` - получение нового запроса. Обязательно нужно вызвать родительскую функци ине игнорировать её результат
* `onPostReadRequest` - обработка прочитанного заголовка запроса
* `onTranslateName` - обработка доступа по пути запроса
* `onQuickHandler` - попытка быстрой обработки запроса
* `onInsertFilter` - добавление фильтра
* `onHandler` - окончательная обработка запроса
* `onFilterInit` - начало работы фильтра
* `onFilterUpdate` - обновление фильтра
* `onFilterComplete` - завершение работы фильтра

В качестве основного типа возврата используется `Status` (аналогично Apache HTTPD). Статусы `HTTP_*` означают завершение обработки запроса с соотвествующим кодом. Статус `OK` означает, что запрос обработан на текущей фазе. Статус `DDNE` означает, что обработка запроса закончена, и необходимо вернуть окончательный ответ, код ответа вычисляется и контекста. `DECLINED` - обработчик отказывается от обработки.

Для обработки запроса с содержимым нужно добавить фильтр на фазе `onInsertFilter`. Если фильтр добавлен, запрос должен продолжать обработку после `onHandler`. Встроенный фильтр (`web::InputFilter`, `SPWebInputFilter.h`) распознает форматы JSON, CBOR, передачу файлов и стандартные форматы форм веб-сайта.

Тип `DataHandler` - упрощённый интерфейс для работы REST интерфейсов. Он позволяет обрабатывать GET и POST запросы, перегружая функцию `processDataHandler`.

Тип `RequestHandlerMap` позволяет декларативно выстраивать сложную карту запросов с параметрами, например:

```cpp
class TestHandlerMap : public RequestHandlerMap {
public:
	TestHandlerMap() {
		addHandler("Variant1", RequestMethod::Get, "/:id/:page", Handler::Make<TestHandlerMapVariant1>())
				.addQueryFields({
			db::Field::Integer("intValue", db::Flags::Required),
			db::Field::Integer("mtime", db::Flags::AutoMTime),
		});

		addHandler("Variant1Post", RequestMethod::Post, "/:id/:page", Handler::Make<TestHandlerMapVariant1>())
				.addQueryFields({
			db::Field::Integer("intValue", db::Flags::Required),
			db::Field::Integer("mtime", db::Flags::AutoMTime),
		}).addInputFields({
			db::Field::Text("text", db::Flags::Required),
			db::Field::File("file", db::MaxFileSize(2_MiB)),
			db::Field::Data("data"),
		}).setInputConfig(db::InputConfig{
			db::InputConfig::Require::Body | db::InputConfig::Require::Data | db::InputConfig::Require::Files | db::InputConfig::Require::FilesAsData,
			2_MiB,
			2_MiB,
			2_MiB,
		});

		addHandler("Variant2Post", RequestMethod::Post, "/urlencoded", Handler::Make<TestHandlerMapVariant2>())
				.addInputFields({
			db::Field::Text("text", db::Flags::Required),
			db::Field::Data("dict"),
			db::Field::Data("arr"),
			db::Field::Data("array space"),
		}).setInputConfig(db::InputConfig{
			db::InputConfig::Require::Data,
			2_MiB,
			2_MiB,
			2_MiB,
		});
		addHandler("Variant3Post", RequestMethod::Post, "/files", Handler::Make<TestHandlerMapVariant3>())
				.setInputConfig(db::InputConfig{
			db::InputConfig::Require::Files | db::InputConfig::Require::Body,
			2_MiB,
			2_MiB,
			2_MiB,
		});
	}
};
```

## Вебсокеты

Для работы с вебсокетами необходимо определить класс, наследуемый от `WebsocketManager`, который будет создавать наследников `WebsocketHandler`.

В классе `WebsocketManager` необходимо перегрузить функцию `onAccept` для принятия соединения.

В классе `WebsocketHandler` перегружается функция `handleFrame` для обработки входящих данных.
