Title: STSqlDriver.h


# STAPPLER_DB_SQL_STSQLDRIVER_H_

## BRIEF

Заголовок стандартного драйвера для SQL-совместимых БД

## CONTENT

Заголовок стандартного драйвера для SQL-совместимых БД


# ::stappler::db::sql::Driver

## BRIEF

Стандартный драйвер  для SQL-совместимых БД

## CONTENT

Стандартный драйвер  для SQL-совместимых БД. Служит основой для драйверов конкретных БД

Базовые классы:
* AllocBase


# ::stappler::db::sql::Driver::Handle

## BRIEF

Непрозрачный тип для общего соединения

## CONTENT

Доступ: public

Непрозрачный тип для общего соединения


# ::stappler::db::sql::Driver::Result

## BRIEF

Непрозрачный тип для результата запроса

## CONTENT

Доступ: public

Непрозрачный тип для результата запроса


# ::stappler::db::sql::Driver::Connection

## BRIEF

Непрозрачный тип для текущего соединения

## CONTENT

Доступ: public

Непрозрачный тип для текущего соединения


# ::stappler::db::sql::Driver::open(stappler::mempool::base::pool_t*,stappler::StringView,void const*)

## BRIEF

Создаёт новый драйвер

## CONTENT

Доступ: public

Создаёт новый драйвер, привязанный к пулу памяти

Драйвер распознаёт имя и пытается загрузить известный драйвер, соотвествующий имени

Параметры:
* stappler::mempool::base::pool_t*
* stappler::StringView - имя драйвера
* void const* - дополнительные данные для создания драйвера

Возвращает:
* stappler::db::sql::Driver*

# ::stappler::db::sql::Driver::~Driver()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор


# ::stappler::db::sql::Driver::getDriverName() const

## BRIEF

Возвращает имя драйвера

## CONTENT

Доступ: public

Возвращает имя драйвера

Возвращает:
* stappler::StringView

# ::stappler::db::sql::Driver::init(stappler::db::sql::Driver::Handle,Vector<stappler::StringView> const&)

## BRIEF

Инициализирует первое соединение в сессии приложения

## CONTENT

Доступ: public

Инициализирует первое соединение в сессии приложения

Параметры:
* stappler::db::sql::Driver::Handle
* Vector<stappler::StringView> const& - список имён баз данных, ожидаемых к существованию

Возвращает:
* bool - true при успешной инициализации

# ::stappler::db::sql::Driver::performWithStorage(stappler::db::sql::Driver::Handle,Callback<void (const db::Adapter &)> const&) const

## BRIEF

Запускает соединение с БД и позволяет выполнять в нём операции с помощью адаптера

## CONTENT

Доступ: public

Запускает соединение с БД и позволяет выполнять в нём операции с помощью адаптера

Параметры:
* stappler::db::sql::Driver::Handle - соединение с БД
* Callback<void (const db::Adapter &)> const& - функция, которая будет вызвана при доступности адаптера


# ::stappler::db::sql::Driver::acquireInterface(stappler::db::sql::Driver::Handle,stappler::mempool::base::pool_t*) const

## BRIEF

Создаёт интерфейс БД, ассоциированный с пулом памяти

## CONTENT

Доступ: public

Создаёт интерфейс БД, ассоциированный с пулом памяти. Интерфейс будет уничтожен вместе с пулом памяти.

Параметры:
* stappler::db::sql::Driver::Handle - соединение с БД
* stappler::mempool::base::pool_t*

Возвращает:
* stappler::db::BackendInterface*

# ::stappler::db::sql::Driver::connect(Map<stappler::StringView, stappler::StringView> const&) const

## BRIEF

Создаёт новое соединение с БД на основе параметров

## CONTENT

Доступ: public

Создаёт новое соединение с БД на основе параметров

Параметры:
* Map<stappler::StringView, stappler::StringView> const&

Возвращает:
* Handle

# ::stappler::db::sql::Driver::finish(stappler::db::sql::Driver::Handle) const

## BRIEF

Завершает соединение с БД

## CONTENT

Доступ: public

Завершает соединение с БД

Параметры:
* stappler::db::sql::Driver::Handle


# ::stappler::db::sql::Driver::getConnection(stappler::db::sql::Driver::Handle) const

## BRIEF

Возвращает текущее соединение для общего

## CONTENT

Доступ: public

Возвращает текущее соединение для общего

Параметры:
* stappler::db::sql::Driver::Handle

Возвращает:
* Connection

# ::stappler::db::sql::Driver::isValid(stappler::db::sql::Driver::Handle) const

## BRIEF

Проверяет соединение на активность

## CONTENT

Доступ: public

Проверяет соединение на активность

Параметры:
* stappler::db::sql::Driver::Handle

Возвращает:
* bool

# ::stappler::db::sql::Driver::isValid(stappler::db::sql::Driver::Connection) const

## BRIEF

Проверяет соединение на активность

## CONTENT

Доступ: public

Проверяет соединение на активность

Параметры:
* stappler::db::sql::Driver::Connection

Возвращает:
* bool

# ::stappler::db::sql::Driver::isIdle(stappler::db::sql::Driver::Connection) const

## BRIEF

Проверяет, что у соединения нет активных транзакций

## CONTENT

Доступ: public

Проверяет, что у соединения нет активных транзакций

Параметры:
* stappler::db::sql::Driver::Connection

Возвращает:
* bool

# ::stappler::db::sql::Driver::listenForNotifications(stappler::db::sql::Driver::Handle) const

## BRIEF

Подключает систему серверных уведомлений для соединения

## CONTENT

Доступ: public

Подключает систему серверных уведомлений для соединения

Параметры:
* stappler::db::sql::Driver::Handle

Возвращает:
* int - файловый дескриптор для ожидания уведомлений

# ::stappler::db::sql::Driver::consumeNotifications(stappler::db::sql::Driver::Handle,Callback<void (stappler::StringView)> const&) const

## BRIEF

Читает ожидающие уведомления из соединения

## CONTENT

Доступ: public

Читает ожидающие уведомления из соединения

Параметры:
* stappler::db::sql::Driver::Handle
* Callback<void (stappler::StringView)> const&

Возвращает:
* bool

# ::stappler::db::sql::Driver::isNotificationsSupported() const

## BRIEF

Проверяет, поддерживает ли БД серверные уведомбления

## CONTENT

Доступ: public

Проверяет, поддерживает ли БД серверные уведомбления

Возвращает:
* bool

# ::stappler::db::sql::Driver::setDbCtrl(Function<void (bool)>&&)

## BRIEF

Устанавливает функцию счётчика открытых соединений

## CONTENT

Доступ: public

Устанавливает функцию счётчика открытых соединений

Параметры:
* Function<void (bool)>&& - функция вызывается с true при открытии соединения и false при закрытии


# ::stappler::db::sql::Driver::_driverPath

## BRIEF

Путь к драйверу БД

## CONTENT

Доступ: protected

Путь к драйверу БД

Тип: stappler::StringView


# ::stappler::db::sql::Driver::_dbCtrl

## BRIEF

Функция счётчика открытых соединений

## CONTENT

Доступ: protected

Функция счётчика открытых соединений

Тип: Function<void (bool)>
