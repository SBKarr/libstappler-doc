Title: STPqDriver.h


# MODULES_DB_PQ_SPDBPQDRIVER_H_

## BRIEF

## CONTENT


# ::stappler::db::pq::Driver

## BRIEF

## CONTENT

Базовые классы:
* sql::Driver


# ::stappler::db::pq::Driver::Status

## BRIEF

## CONTENT

Доступ: public

Значения:
* Empty
* CommandOk
* TuplesOk
* CopyOut
* CopyIn
* BadResponse
* NonfatalError
* FatalError
* CopyBoth
* SingleTuple


# ::stappler::db::pq::Driver::TransactionStatus

## BRIEF

## CONTENT

Доступ: public

Значения:
* Idle
* Active
* InTrans
* InError
* Unknown


# ::stappler::db::pq::Driver::open(stappler::StringView,void const*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView
* void const*

Возвращает:
* stappler::db::pq::Driver*

# ::stappler::db::pq::Driver::~Driver()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::db::pq::Driver::init(stappler::db::sql::Driver::Handle,Vector<stappler::StringView> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::sql::Driver::Handle
* Vector<stappler::StringView> const&

Возвращает:
* bool

# ::stappler::db::pq::Driver::performWithStorage(stappler::db::sql::Driver::Handle,Callback<void (const db::Adapter &)> const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::sql::Driver::Handle
* Callback<void (const db::Adapter &)> const&


# ::stappler::db::pq::Driver::acquireInterface(stappler::db::sql::Driver::Handle,stappler::mempool::base::pool_t*) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::sql::Driver::Handle
* stappler::mempool::base::pool_t*

Возвращает:
* stappler::db::BackendInterface*

# ::stappler::db::pq::Driver::connect(Map<stappler::StringView, stappler::StringView> const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Map<stappler::StringView, stappler::StringView> const&

Возвращает:
* stappler::db::sql::Driver::Handle

# ::stappler::db::pq::Driver::finish(stappler::db::sql::Driver::Handle) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::sql::Driver::Handle


# ::stappler::db::pq::Driver::getConnection(stappler::db::sql::Driver::Handle) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::sql::Driver::Handle

Возвращает:
* stappler::db::sql::Driver::Connection

# ::stappler::db::pq::Driver::isValid(stappler::db::sql::Driver::Handle) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::sql::Driver::Handle

Возвращает:
* bool

# ::stappler::db::pq::Driver::isValid(stappler::db::sql::Driver::Connection) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::sql::Driver::Connection

Возвращает:
* bool

# ::stappler::db::pq::Driver::isIdle(stappler::db::sql::Driver::Connection) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::sql::Driver::Connection

Возвращает:
* bool

# ::stappler::db::pq::Driver::listenForNotifications(stappler::db::sql::Driver::Handle) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::sql::Driver::Handle

Возвращает:
* int

# ::stappler::db::pq::Driver::consumeNotifications(stappler::db::sql::Driver::Handle,Callback<void (stappler::StringView)> const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::sql::Driver::Handle
* Callback<void (stappler::StringView)> const&

Возвращает:
* bool

# ::stappler::db::pq::Driver::isNotificationsSupported() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::db::pq::Driver::getTransactionStatus(stappler::db::sql::Driver::Connection) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::sql::Driver::Connection

Возвращает:
* stappler::db::pq::Driver::TransactionStatus

# ::stappler::db::pq::Driver::getStatus(stappler::db::sql::Driver::Result) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::sql::Driver::Result

Возвращает:
* stappler::db::pq::Driver::Status

# ::stappler::db::pq::Driver::isBinaryFormat(stappler::db::sql::Driver::Result,size_t) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::sql::Driver::Result
* size_t

Возвращает:
* bool

# ::stappler::db::pq::Driver::isNull(stappler::db::sql::Driver::Result,size_t,size_t) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::sql::Driver::Result
* size_t
* size_t

Возвращает:
* bool

# ::stappler::db::pq::Driver::getValue(stappler::db::sql::Driver::Result,size_t,size_t) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::sql::Driver::Result
* size_t
* size_t

Возвращает:
* char*

# ::stappler::db::pq::Driver::getLength(stappler::db::sql::Driver::Result,size_t,size_t) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::sql::Driver::Result
* size_t
* size_t

Возвращает:
* size_t

# ::stappler::db::pq::Driver::getName(stappler::db::sql::Driver::Result,size_t) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::sql::Driver::Result
* size_t

Возвращает:
* char*

# ::stappler::db::pq::Driver::getType(stappler::db::sql::Driver::Result,size_t) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::sql::Driver::Result
* size_t

Возвращает:
* unsigned int

# ::stappler::db::pq::Driver::getNTuples(stappler::db::sql::Driver::Result) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::sql::Driver::Result

Возвращает:
* size_t

# ::stappler::db::pq::Driver::getNFields(stappler::db::sql::Driver::Result) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::sql::Driver::Result

Возвращает:
* size_t

# ::stappler::db::pq::Driver::getCmdTuples(stappler::db::sql::Driver::Result) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::sql::Driver::Result

Возвращает:
* size_t

# ::stappler::db::pq::Driver::getStatusMessage(stappler::db::pq::Driver::Status) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::pq::Driver::Status

Возвращает:
* char*

# ::stappler::db::pq::Driver::getResultErrorMessage(stappler::db::sql::Driver::Result) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::sql::Driver::Result

Возвращает:
* char*

# ::stappler::db::pq::Driver::clearResult(stappler::db::sql::Driver::Result) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::sql::Driver::Result


# ::stappler::db::pq::Driver::exec(stappler::db::sql::Driver::Connection,char const*) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::sql::Driver::Connection
* char const*

Возвращает:
* stappler::db::sql::Driver::Result

# ::stappler::db::pq::Driver::exec(stappler::db::sql::Driver::Connection,char const*,int,char const* const*,int const*,int const*,int) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::sql::Driver::Connection
* char const*
* int
* char const* const*
* int const*
* int const*
* int

Возвращает:
* stappler::db::sql::Driver::Result

# ::stappler::db::pq::Driver::operator bool() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::db::pq::Driver::getTypeById(uint32_t) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint32_t

Возвращает:
* BackendInterface::StorageType

# ::stappler::db::pq::Driver::getTypeNameById(uint32_t) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint32_t

Возвращает:
* stappler::StringView

# ::stappler::db::pq::Driver::Driver(stappler::StringView,void const*)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::StringView
* void const*


# ::stappler::db::pq::Driver::doConnect(char const* const*,char const* const*,int) const

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* char const* const*
* char const* const*
* int

Возвращает:
* stappler::db::sql::Driver::Handle

# ::stappler::db::pq::Driver::_init

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::db::pq::Driver::_storageTypes

## BRIEF

## CONTENT

Доступ: protected

Тип: Vector<Pair<uint32_t, BackendInterface::StorageType>>


# ::stappler::db::pq::Driver::_customTypes

## BRIEF

## CONTENT

Доступ: protected

Тип: Vector<Pair<uint32_t, stappler::mem_pool::String>>


# ::stappler::db::pq::Driver::_handle

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::db::pq::DriverSym*


# ::stappler::db::pq::Driver::_external

## BRIEF

## CONTENT

Доступ: protected

Тип: void const*


# ::stappler::db::pq::ResultCursor

## BRIEF

## CONTENT

Базовые классы:
* db::ResultCursor


# ::stappler::db::pq::ResultCursor::pgsql_is_success(Driver::Status)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Driver::Status

Возвращает:
* bool

# ::stappler::db::pq::ResultCursor::ResultCursor(stappler::db::pq::Driver const*,Driver::Result)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::pq::Driver const*
* Driver::Result


# ::stappler::db::pq::ResultCursor::~ResultCursor()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::db::pq::ResultCursor::isBinaryFormat(size_t) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* size_t

Возвращает:
* bool

# ::stappler::db::pq::ResultCursor::isNull(size_t) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* size_t

Возвращает:
* bool

# ::stappler::db::pq::ResultCursor::toString(size_t) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* size_t

Возвращает:
* stappler::StringView

# ::stappler::db::pq::ResultCursor::toBytes(size_t) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* size_t

Возвращает:
* stappler::BytesView

# ::stappler::db::pq::ResultCursor::toInteger(size_t) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* size_t

Возвращает:
* int64_t

# ::stappler::db::pq::ResultCursor::toDouble(size_t) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* size_t

Возвращает:
* double

# ::stappler::db::pq::ResultCursor::toBool(size_t) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* size_t

Возвращает:
* bool

# ::stappler::db::pq::ResultCursor::toTypedData(size_t) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* size_t

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::pq::ResultCursor::toId() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* int64_t

# ::stappler::db::pq::ResultCursor::getFieldName(size_t) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* size_t

Возвращает:
* stappler::StringView

# ::stappler::db::pq::ResultCursor::getInfo() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::pq::ResultCursor::clear()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::db::pq::ResultCursor::getError() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Driver::Status

# ::stappler::db::pq::ResultCursor::isSuccess() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::db::pq::ResultCursor::isEmpty() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::db::pq::ResultCursor::isEnded() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::db::pq::ResultCursor::getFieldsCount() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* size_t

# ::stappler::db::pq::ResultCursor::getAffectedRows() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* size_t

# ::stappler::db::pq::ResultCursor::getRowsHint() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* size_t

# ::stappler::db::pq::ResultCursor::next()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::db::pq::ResultCursor::reset()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::db::pq::ResultCursor::driver

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::db::pq::Driver const*


# ::stappler::db::pq::ResultCursor::result

## BRIEF

## CONTENT

Доступ: public

Тип: Driver::Result


# ::stappler::db::pq::ResultCursor::nrows

## BRIEF

## CONTENT

Доступ: public

Тип: size_t


# ::stappler::db::pq::ResultCursor::currentRow

## BRIEF

## CONTENT

Доступ: public

Тип: size_t


# ::stappler::db::pq::ResultCursor::err

## BRIEF

## CONTENT

Доступ: public

Тип: Driver::Status
