Title: Внешние ресурсы

# Внешние ресурсы

Внешние ресурсы для графического модуля представлены в виде доступа к БД, сетевого интерфейса и внешних загружаемых ресурсов.

## Сетевой интерфейс

Модуль `xenolith_resources_network` предоставляет интерфейс для выполнения сетевых запросов в выделенном потоке (`network::Controller`).

Запрос реализуется классом `network::Request`. Пример использования:

```cpp
auto req = Rc<network::Request>::create([&] (network::Handle &handle) {
	handle.init(network::Method::Get, "https://geobase.stappler.org/");
	return true;
}, this);

req->perform(controller, [this] (const network::Request &req, bool success) {
	StringStream stream;
	auto data = data::read<Interface>(req.getData());

	stream << data::EncodeFormat::Pretty << data << "\n";
});
```

Для работы необходимо, чтобы контроллер был подключен как расширение `Application`.

## Базы данных

Модуль `xenolith_resources_storage` предоставляет интерфейс к БД в выделенном потоке (`storage::Server`). Параметры запуска соотвествуют передаваемым к драйверу БД. Сервер подключается к `Application` как расширение.

Для определения схем данных используется тип `storage::Component`. Для доступа к компонентам со стороны приложения используется `storage::ComponentContainer`. Контейнеры могут быть созданы и отключены в любой момент (например. привязаны к узлу сцены).

Пример использования:

```cpp
#include "XLStorageComponent.h"

class UtilsStorageTestComponent : public storage::Component {
public:
	static constexpr auto DbPasswordSalt = "UtilsStorageTestComponent";

	virtual ~UtilsStorageTestComponent() { }

	UtilsStorageTestComponent(storage::ComponentLoader &loader)
	: Component(loader, "UtilsStorageTest") {
		using namespace db;

		loader.exportScheme(_users.define({
			Field::Text("name", MinLength(2), MaxLength(32), Transform::Identifier, Flags::Indexed),
			Field::Password("password", MinLength(2), MaxLength(32), PasswordSalt(DbPasswordSalt))
		}));
	}

	virtual void handleChildInit(const storage::Server &serv, const db::Transaction &t) override {
		Component::handleChildInit(serv, t);
	}
	virtual void handleChildRelease(const storage::Server &serv, const db::Transaction &t) override {
		Component::handleChildRelease(serv, t);
	}

	virtual void handleStorageTransaction(db::Transaction &t) override {
		Component::handleStorageTransaction(t);
	}
	virtual void handleHeartbeat(const storage::Server &serv) override {
		Component::handleHeartbeat(serv);
	}

	const db::Scheme &getUsers() const { return _users; }

protected:
	db::Scheme _users = db::Scheme("test_users");
};

class UtilsStorageTestComponentContainer : public storage::ComponentContainer {
public:
	virtual ~UtilsStorageTestComponentContainer() { }

	virtual bool init();

	virtual void handleStorageInit(storage::ComponentLoader &loader) override;
	virtual void handleStorageDisposed(const db::Transaction &t) override;

	virtual void handleComponentsLoaded(const storage::Server &serv) override;
	virtual void handleComponentsUnloaded(const storage::Server &serv) override;

	bool getAll(Function<void(Value &&)> &&, Ref *ref);
	bool createUser(StringView name, StringView password, Function<void(Value &&)> &&, Ref * = nullptr);
	bool checkUser(StringView name, StringView password, Function<void(Value &&)> &&, Ref * = nullptr);

protected:
	using storage::ComponentContainer::init;

	UtilsStorageTestComponent *_component = nullptr;
};

bool UtilsStorageTestComponentContainer::init() {
	return ComponentContainer::init("UtilsStorageTest");
}

void UtilsStorageTestComponentContainer::handleStorageInit(storage::ComponentLoader &loader) {
	std::cout << "handleStorageInit\n";
	ComponentContainer::handleStorageInit(loader);
	_component = new UtilsStorageTestComponent(loader);
}
void UtilsStorageTestComponentContainer::handleStorageDisposed(const db::Transaction &t) {
	_component = nullptr;
	ComponentContainer::handleStorageDisposed(t);
	std::cout << "handleStorageDisposed\n";
}

void UtilsStorageTestComponentContainer::handleComponentsLoaded(const storage::Server &serv) {
	ComponentContainer::handleComponentsLoaded(serv);
	std::cout << "handleComponentsLoaded\n";
}
void UtilsStorageTestComponentContainer::handleComponentsUnloaded(const storage::Server &serv) {
	std::cout << "handleComponentsUnloaded\n";
	ComponentContainer::handleComponentsUnloaded(serv);
}

bool UtilsStorageTestComponentContainer::getAll(Function<void(Value &&)> &&cb, Ref *ref) {
	return perform([this, cb = move(cb), ref] (const storage::Server &serv, const db::Transaction &t) mutable {
		db::Value val;
		auto users = _component->getUsers().select(t, db::Query());
		for (auto &it : users.asArray()) {
			val.addString(it.getString("name"));
		}

		serv.getApplication()->performOnMainThread([cb = move(cb), val = Value(val)] () mutable {
			cb(move(val));
		}, ref);

		return true;
	}, ref);
}

bool UtilsStorageTestComponentContainer::createUser(StringView name, StringView password, Function<void(Value &&)> &&cb, Ref *ref) {
	return perform([this, cb = move(cb), name = name.str<Interface>(), password = password.str<Interface>(), ref] (const storage::Server &serv, const db::Transaction &t) mutable {
		db::Value val;
		auto u = _component->getUsers().select(t, db::Query().select("name", db::Value(name))).getValue(0);
		if (u) {
			val = _component->getUsers().update(t, u, db::Value({
				pair("password", db::Value(password)),
			}));
		} else {
			val = _component->getUsers().create(t, db::Value({
				pair("name", db::Value(name)),
				pair("password", db::Value(password)),
			}));
		}

		serv.getApplication()->performOnMainThread([cb = move(cb), val = Value(val)] () mutable {
			cb(move(val));
		}, ref);

		return true;
	}, ref);
}

bool UtilsStorageTestComponentContainer::checkUser(StringView name, StringView password, Function<void(Value &&)> &&cb, Ref *ref) {
	return perform([this, cb = move(cb), name = name.str<Interface>(), password = password.str<Interface>(), ref] (const storage::Server &serv, const db::Transaction &t) mutable {
		db::Value val;
		auto u = _component->getUsers().select(t, db::Query().select("name", db::Value(name))).getValue(0);
		if (u) {
			if (!valid::validatePassord(password, u.getBytes("password"), UtilsStorageTestComponent::DbPasswordSalt)) {
				val = db::Value("invalid_password");
			} else {
				val = move(u);
			}
		}

		serv.getApplication()->performOnMainThread([cb = move(cb), val = Value(val)] () mutable {
			cb(move(val));
		}, ref);

		return true;
	}, ref);
}
```

Добавление и удаление контейнера:

```cpp
bool UtilsStorageTest::init() {
	if (!LayoutTest::init(LayoutName::UtilsStorageTest, "")) {
		return false;
	}

	_container = Rc<UtilsStorageTestComponentContainer>::create();

	// ...

	return true;
}

void UtilsStorageTest::onEnter(Scene *scene) {
	LayoutTest::onEnter(scene);

	auto serv = _director->getApplication()->getExtension<storage::Server>();
	serv->addComponentContainer(_container);
}

void UtilsStorageTest::onExit() {
	auto serv = _director->getApplication()->getExtension<storage::Server>();
	serv->removeComponentContainer(_container);

	LayoutTest::onExit();
}
```

## Внешние загружаемые ресурсы

Модуль `xenolith_resources_assets` определяет интерфейс загружаемых ресурсов на основе сетевого интерфейса и интерфейса БД. Используется встроенная БД, в которой хранятся данные ресурсов.

Для работы необходимо создать и добавить расширение `storage::AssetLibrary`.

Для создания используется `storage::AssetLibrary::acquireAsset`. Ресурсы хранятся в БД по их url и id.

После получения `storage::Asset`, можно подписаться на его обновления, начать загрузку, попробовать получить загружаемую версию.

Загруженную версию можно заблокировать через получение и хранение `storage::AssetLock`. Пока приложение хранит блокировку, эта версия ресурса будет существовать и будет доступна для чтения. ресурсы автоматически запрашивают обновление по сети после того, как были единожды загружены.

Пример использования:

```cpp
class UtilsAssetTest : public LayoutTest {
public:
	virtual ~UtilsAssetTest() { }

	virtual bool init() override;

	virtual void onEnter(Scene *) override;
	virtual void onExit() override;

protected:
	using LayoutTest::init;

	void handleAssetUpdate(SubscriptionFlags);

	// ...

	DataListener<storage::Asset> *_listener = nullptr;
};

bool UtilsAssetTest::init() {
	if (!LayoutTest::init(LayoutName::UtilsAssetTest, "")) {
		return false;
	}

	// ...

	_listener = addComponent(Rc<DataListener<storage::Asset>>::create([this] (SubscriptionFlags flags) {
		handleAssetUpdate(flags);
	}));

	return true;
}

void UtilsAssetTest::onEnter(Scene *scene) {
	LayoutTest::onEnter(scene);

	auto lib = _director->getApplication()->getExtension<storage::AssetLibrary>();
	lib->acquireAsset("https://apps.stappler.org/api/v2/issues/id80417/content", [this] (const Rc<storage::Asset> &asset) {
		if (_running) {
			// ...
		}
	}, TimeInterval::seconds(60 * 60), this);
}

void UtilsAssetTest::onExit() {
	LayoutTest::onExit();

	_listener->setSubscription(nullptr);
}

void UtilsAssetTest::handleAssetUpdate(SubscriptionFlags flags) {
	if (storage::Asset *a = _listener->getSubscription()) {
		if (a->isDownloadInProgress()) {
			// ...
		} else {
			if (a->lockReadableVersion()) {
				// ...
			} else {
				// ...
			}
		}
	}
}
```