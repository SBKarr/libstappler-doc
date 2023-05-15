Title: STPqHandle.h


# MODULES_DB_PQ_STPGHANDLE_H_

## BRIEF

## CONTENT


# ::stappler::db::pq::TransactionLevel

## BRIEF

## CONTENT

Значения:
* ReadCommited
* RepeatableRead
* Serialized


# ::stappler::db::pq::Handle

## BRIEF

## CONTENT

Базовые классы:
* db::sql::SqlHandle


# ::stappler::db::pq::Handle::Handle(stappler::db::pq::Driver const*,Driver::Handle)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::pq::Driver const*
* Driver::Handle


# ::stappler::db::pq::Handle::Handle(stappler::db::pq::Handle const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::pq::Handle const&


# ::stappler::db::pq::Handle::operator=(stappler::db::pq::Handle const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::pq::Handle const&

Возвращает:
* stappler::db::pq::Handle&

# ::stappler::db::pq::Handle::Handle(stappler::db::pq::Handle&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::pq::Handle&&


# ::stappler::db::pq::Handle::operator=(stappler::db::pq::Handle&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::pq::Handle&&

Возвращает:
* stappler::db::pq::Handle&

# ::stappler::db::pq::Handle::operator bool() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::db::pq::Handle::getDriver() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::db::pq::Driver const*

# ::stappler::db::pq::Handle::getHandle() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Driver::Handle

# ::stappler::db::pq::Handle::getConnection() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Driver::Connection

# ::stappler::db::pq::Handle::isNotificationsSupported() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::db::pq::Handle::makeQuery(Callback<void (sql::SqlQuery &)> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Callback<void (sql::SqlQuery &)> const&


# ::stappler::db::pq::Handle::selectQuery(db::sql::SqlQuery const&,Callback<bool (stappler::db::Result &)> const&,Callback<void (const stappler::mem_pool::Value &)> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* db::sql::SqlQuery const&
* Callback<bool (stappler::db::Result &)> const&
* Callback<void (const stappler::mem_pool::Value &)> const&

Возвращает:
* bool

# ::stappler::db::pq::Handle::performSimpleQuery(stappler::StringView const&,Callback<void (const stappler::mem_pool::Value &)> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView const&
* Callback<void (const stappler::mem_pool::Value &)> const&

Возвращает:
* bool

# ::stappler::db::pq::Handle::performSimpleSelect(stappler::StringView const&,Callback<void (stappler::db::Result &)> const&,Callback<void (const stappler::mem_pool::Value &)> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView const&
* Callback<void (stappler::db::Result &)> const&
* Callback<void (const stappler::mem_pool::Value &)> const&

Возвращает:
* bool

# ::stappler::db::pq::Handle::isSuccess() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::db::pq::Handle::close()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::db::pq::Handle::init(BackendInterface::Config const&,Map<stappler::StringView, const stappler::db::sql::SqlHandle::Scheme *> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* BackendInterface::Config const&
* Map<stappler::StringView, const stappler::db::sql::SqlHandle::Scheme *> const&

Возвращает:
* bool

# ::stappler::db::pq::Handle::beginTransaction()

## BRIEF

## CONTENT

Доступ: protected

Возвращает:
* bool

# ::stappler::db::pq::Handle::endTransaction()

## BRIEF

## CONTENT

Доступ: protected

Возвращает:
* bool

# ::stappler::db::pq::Handle::beginTransaction_pg(stappler::db::pq::TransactionLevel)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::db::pq::TransactionLevel

Возвращает:
* bool

# ::stappler::db::pq::Handle::cancelTransaction_pg()

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::db::pq::Handle::endTransaction_pg()

## BRIEF

## CONTENT

Доступ: protected

Возвращает:
* bool

# ::stappler::db::pq::Handle::ViewIdVec

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::db::pq::Handle::driver

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::db::pq::Driver const*


# ::stappler::db::pq::Handle::handle

## BRIEF

## CONTENT

Доступ: protected

Тип: Driver::Handle


# ::stappler::db::pq::Handle::conn

## BRIEF

## CONTENT

Доступ: protected

Тип: Driver::Connection


# ::stappler::db::pq::Handle::lastError

## BRIEF

## CONTENT

Доступ: protected

Тип: Driver::Status


# ::stappler::db::pq::Handle::lastErrorInfo

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::mem_pool::Value


# ::stappler::db::pq::Handle::level

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::db::pq::TransactionLevel


# ::stappler::db::pq::PgQueryInterface

## BRIEF

## CONTENT

Базовые классы:
* db::QueryInterface


# ::stappler::db::pq::PgQueryInterface::Binder

## BRIEF

## CONTENT

Доступ: public


# ::stappler::db::pq::PgQueryInterface::push(stappler::mem_pool::String&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::mem_pool::String&&

Возвращает:
* size_t

# ::stappler::db::pq::PgQueryInterface::push(stappler::StringView const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView const&

Возвращает:
* size_t

# ::stappler::db::pq::PgQueryInterface::push(stappler::mem_pool::Bytes&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::mem_pool::Bytes&&

Возвращает:
* size_t

# ::stappler::db::pq::PgQueryInterface::push(stappler::mem_pool::StringStream&,stappler::mem_pool::Value const&,bool,bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::mem_pool::StringStream&
* stappler::mem_pool::Value const&
* bool
* bool

Возвращает:
* size_t

# ::stappler::db::pq::PgQueryInterface::bindInt(db::Binder&,stappler::mem_pool::StringStream&,int64_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* db::Binder&
* stappler::mem_pool::StringStream&
* int64_t


# ::stappler::db::pq::PgQueryInterface::bindUInt(db::Binder&,stappler::mem_pool::StringStream&,uint64_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* db::Binder&
* stappler::mem_pool::StringStream&
* uint64_t


# ::stappler::db::pq::PgQueryInterface::bindDouble(db::Binder&,stappler::mem_pool::StringStream&,double)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* db::Binder&
* stappler::mem_pool::StringStream&
* double


# ::stappler::db::pq::PgQueryInterface::bindString(db::Binder&,stappler::mem_pool::StringStream&,stappler::mem_pool::String const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* db::Binder&
* stappler::mem_pool::StringStream&
* stappler::mem_pool::String const&


# ::stappler::db::pq::PgQueryInterface::bindMoveString(db::Binder&,stappler::mem_pool::StringStream&,stappler::mem_pool::String&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* db::Binder&
* stappler::mem_pool::StringStream&
* stappler::mem_pool::String&&


# ::stappler::db::pq::PgQueryInterface::bindStringView(db::Binder&,stappler::mem_pool::StringStream&,stappler::StringView const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* db::Binder&
* stappler::mem_pool::StringStream&
* stappler::StringView const&


# ::stappler::db::pq::PgQueryInterface::bindBytes(db::Binder&,stappler::mem_pool::StringStream&,stappler::mem_pool::Bytes const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* db::Binder&
* stappler::mem_pool::StringStream&
* stappler::mem_pool::Bytes const&


# ::stappler::db::pq::PgQueryInterface::bindMoveBytes(db::Binder&,stappler::mem_pool::StringStream&,stappler::mem_pool::Bytes&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* db::Binder&
* stappler::mem_pool::StringStream&
* stappler::mem_pool::Bytes&&


# ::stappler::db::pq::PgQueryInterface::bindCoderSource(db::Binder&,stappler::mem_pool::StringStream&,stappler::CoderSource const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* db::Binder&
* stappler::mem_pool::StringStream&
* stappler::CoderSource const&


# ::stappler::db::pq::PgQueryInterface::bindValue(db::Binder&,stappler::mem_pool::StringStream&,stappler::mem_pool::Value const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* db::Binder&
* stappler::mem_pool::StringStream&
* stappler::mem_pool::Value const&


# ::stappler::db::pq::PgQueryInterface::bindDataField(db::Binder&,stappler::mem_pool::StringStream&,db::Binder::DataField const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* db::Binder&
* stappler::mem_pool::StringStream&
* db::Binder::DataField const&


# ::stappler::db::pq::PgQueryInterface::bindTypeString(db::Binder&,stappler::mem_pool::StringStream&,db::Binder::TypeString const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* db::Binder&
* stappler::mem_pool::StringStream&
* db::Binder::TypeString const&


# ::stappler::db::pq::PgQueryInterface::bindFullText(db::Binder&,stappler::mem_pool::StringStream&,db::Binder::FullTextField const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* db::Binder&
* stappler::mem_pool::StringStream&
* db::Binder::FullTextField const&


# ::stappler::db::pq::PgQueryInterface::bindFullTextRank(db::Binder&,stappler::mem_pool::StringStream&,db::Binder::FullTextRank const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* db::Binder&
* stappler::mem_pool::StringStream&
* db::Binder::FullTextRank const&


# ::stappler::db::pq::PgQueryInterface::bindFullTextData(db::Binder&,stappler::mem_pool::StringStream&,db::FullTextData const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* db::Binder&
* stappler::mem_pool::StringStream&
* db::FullTextData const&


# ::stappler::db::pq::PgQueryInterface::bindIntVector(stappler::db::pq::PgQueryInterface::Binder&,stappler::mem_pool::StringStream&,Vector<int64_t> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::pq::PgQueryInterface::Binder&
* stappler::mem_pool::StringStream&
* Vector<int64_t> const&


# ::stappler::db::pq::PgQueryInterface::bindDoubleVector(stappler::db::pq::PgQueryInterface::Binder&,stappler::mem_pool::StringStream&,Vector<double> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::pq::PgQueryInterface::Binder&
* stappler::mem_pool::StringStream&
* Vector<double> const&


# ::stappler::db::pq::PgQueryInterface::bindStringVector(stappler::db::pq::PgQueryInterface::Binder&,stappler::mem_pool::StringStream&,Vector<stappler::StringView> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::pq::PgQueryInterface::Binder&
* stappler::mem_pool::StringStream&
* Vector<stappler::StringView> const&


# ::stappler::db::pq::PgQueryInterface::clear()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::db::pq::PgQueryInterface::params

## BRIEF

## CONTENT

Доступ: public

Тип: Vector<stappler::mem_pool::Bytes>


# ::stappler::db::pq::PgQueryInterface::binary

## BRIEF

## CONTENT

Доступ: public

Тип: Vector<bool>
