Title: STSqlDriver.h


# STAPPLER_DB_SQL_SPSQLDRIVER_H_

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


# ::stappler::db::sql::Driver::open(stappler::mempool::base::pool_t*,stappler::db::ApplicationInterface*,stappler::StringView,void const*)

## BRIEF

Создаёт новый драйвер

## CONTENT

Доступ: public

Создаёт новый драйвер, привязанный к пулу памяти

Драйвер распознаёт имя и пытается загрузить известный драйвер, соотвествующий имени

Параметры:
* stappler::mempool::base::pool_t*
* stappler::db::ApplicationInterface*
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

# ::stappler::db::sql::QueryStorageHandle

## BRIEF

Тип хранилища данных для запроса

## CONTENT

Тип хранилища данных для запроса

# ::stappler::db::sql::QueryStorageHandle::driver

## BRIEF

Драйвер запроса

## CONTENT

Драйвер запроса

Тип: stappler::db::sql::Driver const*

# ::stappler::db::sql::QueryStorageHandle::name

## BRIEF

Имя хранилища данных

## CONTENT

Имя хранилища данных

Тип: stappler::StringView

# ::stappler::db::sql::QueryStorageHandle::data

## BRIEF

Пользовательские данные

## CONTENT

Пользовательские данные

Тип: Map<stappler::StringView, const void *>*

# ::stappler::db::sql::QueryStorageHandle::QueryStorageHandle(stappler::db::sql::Driver const*,stappler::StringView,Map<stappler::StringView, const void *>*)

## BRIEF

Инициализирует хранилище

## CONTENT

Инициализирует хранилище

Параметры:
* stappler::db::sql::Driver const*
* stappler::StringView
* Map<stappler::StringView, const void *>*

# ::stappler::db::sql::QueryStorageHandle::~QueryStorageHandle()

## BRIEF

Деструктор

## CONTENT

Деструктор

# ::stappler::db::sql::QueryStorageHandle::QueryStorageHandle(stappler::db::sql::QueryStorageHandle const&)

## BRIEF

Конструктор копирования

## CONTENT

Конструктор копирования

Параметры:
* stappler::db::sql::QueryStorageHandle const&

# ::stappler::db::sql::QueryStorageHandle::operator=(stappler::db::sql::QueryStorageHandle const&)

## BRIEF

Оператор копирования

## CONTENT

Оператор копирования

Параметры:
* stappler::db::sql::QueryStorageHandle const&

Возвращает:
* stappler::db::sql::QueryStorageHandle&

# ::stappler::db::sql::QueryStorageHandle::QueryStorageHandle(stappler::db::sql::QueryStorageHandle&&)

## BRIEF

Конструктор перемещения

## CONTENT

Конструктор перемещения

Параметры:
* stappler::db::sql::QueryStorageHandle&&

# ::stappler::db::sql::QueryStorageHandle::operator=(stappler::db::sql::QueryStorageHandle&&)

## BRIEF

Оператор перемещения

## CONTENT

Оператор перемещения

Параметры:
* stappler::db::sql::QueryStorageHandle&&

Возвращает:
* stappler::db::sql::QueryStorageHandle&

# ::stappler::db::sql::QueryStorageHandle::clear()

## BRIEF

Удаляет все данные из хранилища

## CONTENT

Удаляет все данные из хранилища

# ::stappler::db::sql::Driver::getApplicationInterface() const

## BRIEF

Возвращает интерфейс приложения

## CONTENT

Доступ: public

Возвращает интерфейс приложения, связанный с драйвером БД

Возвращает:
* stappler::db::ApplicationInterface*

# ::stappler::db::sql::Driver::getConnectionTime(stappler::db::sql::Driver::Handle) const

## BRIEF

Возвращает время активности соединения

## CONTENT

Доступ: public

Возвращает время активности соединения

Параметры:
* stappler::db::sql::Driver::Handle

Возвращает:
* stappler::Time

# ::stappler::db::sql::Driver::getCustomFieldInfo(stappler::StringView) const

## BRIEF

Возвращает интерфейс для пользовательского типа в БД

## CONTENT

Доступ: public

Возвращает интерфейс для пользовательского типа в БД

Параметры:
* stappler::StringView

Возвращает:
* stappler::db::CustomFieldInfo const*

# ::stappler::db::sql::Driver::makeQueryStorage(stappler::StringView) const

## BRIEF

Создаёт именованное хранилище данных запроса

## CONTENT

Доступ: public

Создаёт именованное хранилище данных запроса

Параметры:
* stappler::StringView

Возвращает:
* stappler::db::sql::QueryStorageHandle

# ::stappler::db::sql::Driver::getQueryStorage(stappler::StringView) const

## BRIEF

Получает текущие данные именованного хранилища запроса

## CONTENT

Доступ: public

Получает текущие данные именованного хранилища запроса

Параметры:
* stappler::StringView

Возвращает:
* Map<stappler::StringView, const void *>*

# ::stappler::db::sql::Driver::getCurrentQueryStorage() const

## BRIEF

Возвращает текущее активное хранилище запроса

## CONTENT

Доступ: public

Возвращает текущее активное хранилище запроса

Возвращает:
* Map<stappler::StringView, const void *>*

# ::stappler::db::sql::Driver::registerQueryStorage(stappler::StringView) const

## BRIEF

Регистрирует новое именованное хранилище запроса для текущего потока

## CONTENT

Доступ: protected

Регистрирует новое именованное хранилище запроса для текущего потока

Параметры:
* stappler::StringView

Возвращает:
* Map<stappler::StringView, const void *>*

# ::stappler::db::sql::Driver::unregisterQueryStorage(stappler::StringView) const

## BRIEF

Удаляет именованное хранилище запроса для текущего потока

## CONTENT

Доступ: protected

Удаляет именованное хранилище запроса для текущего потока

Параметры:
* stappler::StringView

# ::stappler::db::sql::Driver::Driver(stappler::mempool::base::pool_t*,stappler::db::ApplicationInterface*)

## BRIEF

Инициализирует драйвер

## CONTENT

Доступ: protected

Инициализирует драйвер

Параметры:
* stappler::mempool::base::pool_t*
* stappler::db::ApplicationInterface*

# ::stappler::db::sql::Driver::_pool

## BRIEF

Пул памяти драйвера

## CONTENT

Доступ: protected

Пул памяти драйвера

Тип: stappler::mempool::base::pool_t*

# ::stappler::db::sql::Driver::_application

## BRIEF

Интерфейс приложения

## CONTENT

Доступ: protected

Интерфейс приложения

Тип: stappler::db::ApplicationInterface*

# ::stappler::db::sql::Driver::_customFields

## BRIEF

Пользовательские поля

## CONTENT

Доступ: protected

Пользовательские поля

Тип: Map<stappler::StringView, stappler::db::CustomFieldInfo>