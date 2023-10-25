Title: STSqliteDriver.h


# STAPPLER_DB_SQLITE_STSQLITEDRIVER_H_

## BRIEF

Заголовок драйвера SQLite для адаптера БД

## CONTENT

Заголовок драйвера SQLite для адаптера БД


# ::stappler::db::sqlite::Driver

## BRIEF

Структура драйвера SQLite

## CONTENT

Структура драйвера. Основан на стандартном драйвере SQL.

Базовые классы:
* sql::Driver


# ::stappler::db::sqlite::Driver::open(stappler::StringView)

## BRIEF

Создаёт новый драйвер SQLite для текущего пула памяти

## CONTENT

Доступ: public

Создаёт новый драйвер SQLite для текущего пула памяти

Параметры:
* stappler::StringView - используется в качестве имени драйвера

Возвращает:
* stappler::db::sqlite::Driver*

# ::stappler::db::sqlite::Driver::~Driver()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор

# ::stappler::db::sqlite::Driver::init(stappler::db::sql::Driver::Handle,Vector<stappler::StringView> const&)

## BRIEF

Инициализирует манипулятор БД с помощью драйвера

## CONTENT

Доступ: public

Инициализирует манипулятор БД с помощью драйвера

Параметры:
* stappler::db::sql::Driver::Handle
* Vector<stappler::StringView> const& - не используется

Возвращает:
* bool - true при успешной инициализации

# ::stappler::db::sqlite::Driver::performWithStorage(stappler::db::sql::Driver::Handle,Callback<void (const db::Adapter &)> const&) const

## BRIEF

Запускает соединение с БД и позволяет выполнять в нём операции с помощью адаптера

## CONTENT

Доступ: public

Запускает соединение с БД и позволяет выполнять в нём операции с помощью адаптера

Параметры:
* stappler::db::sql::Driver::Handle - соединение с БД
* Callback<void (const db::Adapter &)> const& - функция, которая будет вызвана при доступности адаптера


# ::stappler::db::sqlite::Driver::acquireInterface(stappler::db::sql::Driver::Handle,stappler::mempool::base::pool_t*) const

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

# ::stappler::db::sqlite::Driver::connect(Map<stappler::StringView, stappler::StringView> const&) const

## BRIEF

Открывает новое соединение с БД

## CONTENT

Доступ: public

Открывает новое соединение с БД. Соединение открывается с помощью `sqlite3_open_v2`.

Параметры:
* Map<stappler::StringView, stappler::StringView> const&

Возвращает:
* stappler::db::sql::Driver::Handle

Используемые параметры соединения:
* dbname - путь к файлу БД
* mode - режим открытия файла: ro/rw/rwc/memory (для БД в памяти)
* cache - режим кеширования: shared для SQLITE_OPEN_SHAREDCACHE, private для SQLITE_OPEN_PRIVATECACHE
* threading - serialized для SQLITE_OPEN_FULLMUTEX, multithread для SQLITE_OPEN_NOMUTEX
* journal - режим журналирования: delete, truncate, persist, memory, wal, off

# ::stappler::db::sqlite::Driver::finish(stappler::db::sql::Driver::Handle) const

## BRIEF

Завершает соединение с БД

## CONTENT

Доступ: public

Завершает соединение с БД

Параметры:
* stappler::db::sql::Driver::Handle


# ::stappler::db::sqlite::Driver::getConnection(stappler::db::sql::Driver::Handle) const

## BRIEF

Возвращает текущее соединение для общего соединения

## CONTENT

Доступ: public

Возвращает текущее соединение для общего соединения

Параметры:
* stappler::db::sql::Driver::Handle

Возвращает:
* stappler::db::sql::Driver::Connection

# ::stappler::db::sqlite::Driver::isValid(stappler::db::sql::Driver::Handle) const

## BRIEF

Проверяет соединение на активность

## CONTENT

Доступ: public

Проверяет соединение на активность

Параметры:
* stappler::db::sql::Driver::Handle

Возвращает:
* bool

# ::stappler::db::sqlite::Driver::isValid(stappler::db::sql::Driver::Connection) const

## BRIEF

Проверяет соединение на активность

## CONTENT

Доступ: public

Проверяет соединение на активность

Параметры:
* stappler::db::sql::Driver::Connection

Возвращает:
* bool

# ::stappler::db::sqlite::Driver::isIdle(stappler::db::sql::Driver::Connection) const

## BRIEF

Проверяет, что у соединения нет активных транзакций

## CONTENT

Доступ: public

Проверяет, что у соединения нет активных транзакций

Параметры:
* stappler::db::sql::Driver::Connection

Возвращает:
* bool

# ::stappler::db::sqlite::Driver::isNotificationsSupported() const

## BRIEF

Проверяет, доступны ли серверные уведомления

## CONTENT

Доступ: public

Проверяет, доступны ли серверные уведомления. SQLite не поддерживает серверные уведомления в силу отсутствия сервера.

Возвращает:
* bool

# ::stappler::db::sqlite::Driver::getDbName(stappler::db::sql::Driver::Handle) const

## BRIEF

Возвращает имя БД для соединения

## CONTENT

Доступ: public

Возвращает имя БД для соединения

Параметры:
* stappler::db::sql::Driver::Handle

Возвращает:
* stappler::StringView

# ::stappler::db::sqlite::Driver::getInfo(stappler::db::sql::Driver::Connection,int) const

## BRIEF

Возвращает отладочные данные о соединении

## CONTENT

Доступ: public

Возвращает отладочные данные о соединении

Параметры:
* stappler::db::sql::Driver::Connection
* int

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::sqlite::Driver::setUserId(stappler::db::sql::Driver::Handle,int64_t) const

## BRIEF

Устанавливает идентификатор текущего пользователя

## CONTENT

Доступ: public

Устанавливает идентификатор текущего пользователя

Параметры:
* stappler::db::sql::Driver::Handle
* int64_t


# ::stappler::db::sqlite::Driver::Driver(stappler::StringView)

## BRIEF

Создаёт новый драйвер

## CONTENT

Доступ: protected

Создаёт новый драйвер

Параметры:
* stappler::StringView


# ::stappler::db::sqlite::Driver::_init

## BRIEF

Флаг инициализации

## CONTENT

Доступ: protected

Флаг инициализации

Тип: bool


# ::stappler::db::sqlite::ResultCursor

## BRIEF

Курсор для чтения результата запроса

## CONTENT

Курсор для чтения результата запроса

Базовые классы:
* db::ResultCursor


# ::stappler::db::sqlite::ResultCursor::statusIsSuccess(int)

## BRIEF

Проверяет, что статус запроса означает успешность выполнения

## CONTENT

Доступ: public

Проверяет, что статус запроса означает успешность выполнения

Параметры:
* int

Возвращает:
* bool

# ::stappler::db::sqlite::ResultCursor::ResultCursor(stappler::db::sqlite::Driver const*,Driver::Connection,Driver::Result,int)

## BRIEF

Инициализирует курсор из соединения и результата запроса

## CONTENT

Доступ: public

Инициализирует курсор из соединения и результата запроса

Параметры:
* stappler::db::sqlite::Driver const*
* Driver::Connection
* Driver::Result
* int - статус запроса


# ::stappler::db::sqlite::ResultCursor::~ResultCursor()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор


# ::stappler::db::sqlite::ResultCursor::isBinaryFormat(size_t) const

## BRIEF

Проверяет, что поле испольует бинарный формат кодирования

## CONTENT

Доступ: public

Проверяет, что поле испольует бинарный формат кодирования. SQLite всегда использует бинарный формат.

Параметры:
* size_t - индекс поля

Возвращает:
* bool

# ::stappler::db::sqlite::ResultCursor::getType(size_t) const

## BRIEF

Возвращает тип значения для поля

## CONTENT

Доступ: public

Возвращает тип значения для поля

Параметры:
* size_t - индекс поля

Возвращает:
* BackendInterface::StorageType

# ::stappler::db::sqlite::ResultCursor::isNull(size_t) const

## BRIEF

Проверяет поле в текущей строке на NULL

## CONTENT

Доступ: public

Проверяет поле в текущей строке на NULL

Параметры:
* size_t - индекс поля

Возвращает:
* bool

# ::stappler::db::sqlite::ResultCursor::toString(size_t) const

## BRIEF

Конвертирует поле к строковому значению

## CONTENT

Доступ: public

Конвертирует поле к строковому значению

Параметры:
* size_t - индекс поля

Возвращает:
* stappler::StringView

# ::stappler::db::sqlite::ResultCursor::toBytes(size_t) const

## BRIEF

Конвертирует поле к байтовому значению

## CONTENT

Доступ: public

Конвертирует поле к байтовому значению

Параметры:
* size_t - индекс поля

Возвращает:
* stappler::BytesView

# ::stappler::db::sqlite::ResultCursor::toInteger(size_t) const

## BRIEF

Конвертирует поле к целочисленному значению

## CONTENT

Доступ: public

Конвертирует поле к целочисленному значению

Параметры:
* size_t - индекс поля

Возвращает:
* int64_t

# ::stappler::db::sqlite::ResultCursor::toDouble(size_t) const

## BRIEF

Конвертирует поле к значению с плавающей точкой

## CONTENT

Доступ: public

Конвертирует поле к значению с плавающей точкой

Параметры:
* size_t - индекс поля

Возвращает:
* double

# ::stappler::db::sqlite::ResultCursor::toBool(size_t) const

## BRIEF

Конвертирует поле к булеву значению

## CONTENT

Доступ: public

Конвертирует поле к булеву значению

Параметры:
* size_t - индекс поля

Возвращает:
* bool

# ::stappler::db::sqlite::ResultCursor::toTypedData(size_t) const

## BRIEF

Конвертирует поле к нетипизированному значению

## CONTENT

Доступ: public

Конвертирует поле к нетипизированному значению на основе типа поля

Параметры:
* size_t - индекс поля

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::sqlite::ResultCursor::toId() const

## BRIEF

Конвертирует текущую строку к одиночному идентификатору

## CONTENT

Доступ: public

Конвертирует текущую строку к одиночному идентификатору

Возвращает:
* int64_t

# ::stappler::db::sqlite::ResultCursor::getFieldName(size_t) const

## BRIEF

Возвращает имя поля

## CONTENT

Доступ: public

Возвращает имя поля

Параметры:
* size_t - индекс поля

Возвращает:
* stappler::StringView

# ::stappler::db::sqlite::ResultCursor::isSuccess() const

## BRIEF

Проверяет результат запроса на успешность

## CONTENT

Доступ: public

Проверяет результат запроса на успешность

Возвращает:
* bool

# ::stappler::db::sqlite::ResultCursor::isEmpty() const

## BRIEF

Проверяет запрос на пустоту

## CONTENT

Доступ: public

Проверяет запрос на пустоту

Возвращает:
* bool

# ::stappler::db::sqlite::ResultCursor::isEnded() const

## BRIEF

Проверяет, что курсор исчерпан

## CONTENT

Доступ: public

Проверяет, что курсор исчерпан

Возвращает:
* bool

# ::stappler::db::sqlite::ResultCursor::getFieldsCount() const

## BRIEF

Возвращает число полей в результате

## CONTENT

Доступ: public

Возвращает число полей в результате

Возвращает:
* size_t

# ::stappler::db::sqlite::ResultCursor::getAffectedRows() const

## BRIEF

Возвращает число изменённых запросом строк

## CONTENT

Доступ: public

Возвращает число изменённых запросом строк

Возвращает:
* size_t

# ::stappler::db::sqlite::ResultCursor::getRowsHint() const

## BRIEF

Возвращает число строк в результате, если доступно

## CONTENT

Доступ: public

Возвращает число строк в результате, если доступно

Возвращает:
* size_t

# ::stappler::db::sqlite::ResultCursor::getInfo() const

## BRIEF

Возвращает отладочную информацию о запросе

## CONTENT

Доступ: public

Возвращает отладочную информацию о запросе

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::sqlite::ResultCursor::next()

## BRIEF

Переходит к следующей строке

## CONTENT

Доступ: public

Переходит к следующей строке

Возвращает:
* bool

# ::stappler::db::sqlite::ResultCursor::reset()

## BRIEF

Перезагружает курсор, начинает с начала

## CONTENT

Доступ: public

Перезагружает курсор, начинает с начала


# ::stappler::db::sqlite::ResultCursor::clear()

## BRIEF

Очищает курсор

## CONTENT

Доступ: public

Очищает курсор


# ::stappler::db::sqlite::ResultCursor::getError() const

## BRIEF

Возвращает текущий статус

## CONTENT

Доступ: public

Возвращает текущий статус

Возвращает:
* int

# ::stappler::db::sqlite::ResultCursor::driver

## BRIEF

Используемый драйвер

## CONTENT

Доступ: public

Используемый драйвер

Тип: stappler::db::sqlite::Driver const*


# ::stappler::db::sqlite::ResultCursor::conn

## BRIEF

Текущее соединение

## CONTENT

Доступ: public

Текущее соединение

Тип: Driver::Connection


# ::stappler::db::sqlite::ResultCursor::result

## BRIEF

Результат запроса

## CONTENT

Доступ: public

Результат запроса

Тип: Driver::Result


# ::stappler::db::sqlite::ResultCursor::err

## BRIEF

Статус запроса

## CONTENT

Доступ: public

Статус запроса

Тип: int
