Title: STSqliteDriver.h


# MODULES_DB_SQLITE_STSQLITEDRIVER_H_

## BRIEF

## CONTENT


# ::stappler::db::sqlite::Driver

## BRIEF

## CONTENT

Базовые классы:
* sql::Driver


# ::stappler::db::sqlite::Driver::open(stappler::StringView)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView

Возвращает:
* stappler::db::sqlite::Driver*

# ::stappler::db::sqlite::Driver::~Driver()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::db::sqlite::Driver::init(stappler::db::sql::Driver::Handle,Vector<stappler::StringView> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::sql::Driver::Handle
* Vector<stappler::StringView> const&

Возвращает:
* bool

# ::stappler::db::sqlite::Driver::performWithStorage(stappler::db::sql::Driver::Handle,Callback<void (const db::Adapter &)> const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::sql::Driver::Handle
* Callback<void (const db::Adapter &)> const&


# ::stappler::db::sqlite::Driver::acquireInterface(stappler::db::sql::Driver::Handle,stappler::mempool::base::pool_t*) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::sql::Driver::Handle
* stappler::mempool::base::pool_t*

Возвращает:
* stappler::db::BackendInterface*

# ::stappler::db::sqlite::Driver::connect(Map<stappler::StringView, stappler::StringView> const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Map<stappler::StringView, stappler::StringView> const&

Возвращает:
* stappler::db::sql::Driver::Handle

# ::stappler::db::sqlite::Driver::finish(stappler::db::sql::Driver::Handle) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::sql::Driver::Handle


# ::stappler::db::sqlite::Driver::getConnection(stappler::db::sql::Driver::Handle) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::sql::Driver::Handle

Возвращает:
* stappler::db::sql::Driver::Connection

# ::stappler::db::sqlite::Driver::isValid(stappler::db::sql::Driver::Handle) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::sql::Driver::Handle

Возвращает:
* bool

# ::stappler::db::sqlite::Driver::isValid(stappler::db::sql::Driver::Connection) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::sql::Driver::Connection

Возвращает:
* bool

# ::stappler::db::sqlite::Driver::isIdle(stappler::db::sql::Driver::Connection) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::sql::Driver::Connection

Возвращает:
* bool

# ::stappler::db::sqlite::Driver::isNotificationsSupported() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::db::sqlite::Driver::getDbName(stappler::db::sql::Driver::Handle) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::sql::Driver::Handle

Возвращает:
* stappler::StringView

# ::stappler::db::sqlite::Driver::getInfo(stappler::db::sql::Driver::Connection,int) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::sql::Driver::Connection
* int

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::sqlite::Driver::setUserId(stappler::db::sql::Driver::Handle,int64_t) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::sql::Driver::Handle
* int64_t


# ::stappler::db::sqlite::Driver::Driver(stappler::StringView)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::StringView


# ::stappler::db::sqlite::Driver::_init

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::db::sqlite::ResultCursor

## BRIEF

## CONTENT

Базовые классы:
* db::ResultCursor


# ::stappler::db::sqlite::ResultCursor::statusIsSuccess(int)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* int

Возвращает:
* bool

# ::stappler::db::sqlite::ResultCursor::ResultCursor(stappler::db::sqlite::Driver const*,Driver::Connection,Driver::Result,int)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::sqlite::Driver const*
* Driver::Connection
* Driver::Result
* int


# ::stappler::db::sqlite::ResultCursor::~ResultCursor()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::db::sqlite::ResultCursor::isBinaryFormat(size_t) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* size_t

Возвращает:
* bool

# ::stappler::db::sqlite::ResultCursor::getType(size_t) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* size_t

Возвращает:
* BackendInterface::StorageType

# ::stappler::db::sqlite::ResultCursor::isNull(size_t) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* size_t

Возвращает:
* bool

# ::stappler::db::sqlite::ResultCursor::toString(size_t) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* size_t

Возвращает:
* stappler::StringView

# ::stappler::db::sqlite::ResultCursor::toBytes(size_t) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* size_t

Возвращает:
* stappler::BytesView

# ::stappler::db::sqlite::ResultCursor::toInteger(size_t) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* size_t

Возвращает:
* int64_t

# ::stappler::db::sqlite::ResultCursor::toDouble(size_t) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* size_t

Возвращает:
* double

# ::stappler::db::sqlite::ResultCursor::toBool(size_t) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* size_t

Возвращает:
* bool

# ::stappler::db::sqlite::ResultCursor::toTypedData(size_t) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* size_t

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::sqlite::ResultCursor::toId() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* int64_t

# ::stappler::db::sqlite::ResultCursor::getFieldName(size_t) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* size_t

Возвращает:
* stappler::StringView

# ::stappler::db::sqlite::ResultCursor::isSuccess() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::db::sqlite::ResultCursor::isEmpty() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::db::sqlite::ResultCursor::isEnded() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::db::sqlite::ResultCursor::getFieldsCount() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* size_t

# ::stappler::db::sqlite::ResultCursor::getAffectedRows() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* size_t

# ::stappler::db::sqlite::ResultCursor::getRowsHint() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* size_t

# ::stappler::db::sqlite::ResultCursor::getInfo() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::sqlite::ResultCursor::next()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::db::sqlite::ResultCursor::reset()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::db::sqlite::ResultCursor::clear()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::db::sqlite::ResultCursor::getError() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* int

# ::stappler::db::sqlite::ResultCursor::driver

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::db::sqlite::Driver const*


# ::stappler::db::sqlite::ResultCursor::conn

## BRIEF

## CONTENT

Доступ: public

Тип: Driver::Connection


# ::stappler::db::sqlite::ResultCursor::result

## BRIEF

## CONTENT

Доступ: public

Тип: Driver::Result


# ::stappler::db::sqlite::ResultCursor::err

## BRIEF

## CONTENT

Доступ: public

Тип: int
