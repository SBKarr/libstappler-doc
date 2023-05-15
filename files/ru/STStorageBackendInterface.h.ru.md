Title: STStorageBackendInterface.h


# MODULES_DB_STSTORAGEINTERFACE_H_

## BRIEF

## CONTENT


# ::stappler::db::DeltaAction

## BRIEF

## CONTENT

Значения:
* Create
* Update
* Delete
* Append
* Erase


# ::stappler::db::BackendInterface

## BRIEF

## CONTENT

Базовые классы:
* AllocBase


# ::stappler::db::BackendInterface::StorageType

## BRIEF

## CONTENT

Доступ: public

Значения:
* Unknown
* Bool
* Char
* Float4
* Float8
* Int2
* Int4
* Int8
* Text
* VarChar
* Numeric
* Bytes
* TsVector


# ::stappler::db::BackendInterface::Config

## BRIEF

## CONTENT

Доступ: public


# ::stappler::db::BackendInterface::Config::name

## BRIEF

## CONTENT

Тип: stappler::StringView


# ::stappler::db::BackendInterface::Config::fileScheme

## BRIEF

## CONTENT

Тип: stappler::db::Scheme const*


# ::stappler::db::BackendInterface::~BackendInterface()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::db::BackendInterface::set(stappler::CoderSource const&,stappler::mem_pool::Value const&,stappler::TimeInterval)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::CoderSource const&
* stappler::mem_pool::Value const&
* stappler::TimeInterval

Возвращает:
* bool

# ::stappler::db::BackendInterface::get(stappler::CoderSource const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::CoderSource const&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::BackendInterface::clear(stappler::CoderSource const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::CoderSource const&

Возвращает:
* bool

# ::stappler::db::BackendInterface::performQueryListForIds(stappler::db::QueryList const&,size_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::QueryList const&
* size_t

Возвращает:
* Vector<int64_t>

# ::stappler::db::BackendInterface::performQueryList(stappler::db::QueryList const&,size_t,bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::QueryList const&
* size_t
* bool

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::BackendInterface::init(stappler::db::BackendInterface::Config const&,Map<stappler::StringView, const stappler::db::Scheme *> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::BackendInterface::Config const&
* Map<stappler::StringView, const stappler::db::Scheme *> const&

Возвращает:
* bool

# ::stappler::db::BackendInterface::makeSessionsCleanup()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::db::BackendInterface::processBroadcasts(Callback<void (stappler::BytesView)> const&,int64_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Callback<void (stappler::BytesView)> const&
* int64_t

Возвращает:
* int64_t

# ::stappler::db::BackendInterface::foreach(stappler::db::Worker&,stappler::db::Query const&,Callback<bool (stappler::mem_pool::Value &)> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::Worker&
* stappler::db::Query const&
* Callback<bool (stappler::mem_pool::Value &)> const&

Возвращает:
* bool

# ::stappler::db::BackendInterface::select(stappler::db::Worker&,stappler::db::Query const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::Worker&
* stappler::db::Query const&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::BackendInterface::create(stappler::db::Worker&,stappler::mem_pool::Value&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::Worker&
* stappler::mem_pool::Value&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::BackendInterface::save(stappler::db::Worker&,uint64_t,stappler::mem_pool::Value const&,Vector<stappler::mem_pool::String> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::Worker&
* uint64_t
* stappler::mem_pool::Value const&
* Vector<stappler::mem_pool::String> const&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::BackendInterface::patch(stappler::db::Worker&,uint64_t,stappler::mem_pool::Value const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::Worker&
* uint64_t
* stappler::mem_pool::Value const&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::BackendInterface::remove(stappler::db::Worker&,uint64_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::Worker&
* uint64_t

Возвращает:
* bool

# ::stappler::db::BackendInterface::count(stappler::db::Worker&,stappler::db::Query const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::Worker&
* stappler::db::Query const&

Возвращает:
* size_t

# ::stappler::db::BackendInterface::field(stappler::db::Action,stappler::db::Worker&,uint64_t,stappler::db::Field const&,stappler::mem_pool::Value&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::Action
* stappler::db::Worker&
* uint64_t
* stappler::db::Field const&
* stappler::mem_pool::Value&&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::BackendInterface::field(stappler::db::Action,stappler::db::Worker&,stappler::mem_pool::Value const&,stappler::db::Field const&,stappler::mem_pool::Value&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::Action
* stappler::db::Worker&
* stappler::mem_pool::Value const&
* stappler::db::Field const&
* stappler::mem_pool::Value&&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::BackendInterface::addToView(stappler::db::FieldView const&,stappler::db::Scheme const*,uint64_t,stappler::mem_pool::Value const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::FieldView const&
* stappler::db::Scheme const*
* uint64_t
* stappler::mem_pool::Value const&

Возвращает:
* bool

# ::stappler::db::BackendInterface::removeFromView(stappler::db::FieldView const&,stappler::db::Scheme const*,uint64_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::FieldView const&
* stappler::db::Scheme const*
* uint64_t

Возвращает:
* bool

# ::stappler::db::BackendInterface::getReferenceParents(stappler::db::Scheme const&,uint64_t,stappler::db::Scheme const*,stappler::db::Field const*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::Scheme const&
* uint64_t
* stappler::db::Scheme const*
* stappler::db::Field const*

Возвращает:
* Vector<int64_t>

# ::stappler::db::BackendInterface::beginTransaction()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::db::BackendInterface::endTransaction()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::db::BackendInterface::authorizeUser(stappler::db::Auth const&,stappler::StringView const&,stappler::StringView const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::Auth const&
* stappler::StringView const&
* stappler::StringView const&

Возвращает:
* stappler::db::User*

# ::stappler::db::BackendInterface::broadcast(stappler::mem_pool::Bytes const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::mem_pool::Bytes const&


# ::stappler::db::BackendInterface::getDeltaValue(stappler::db::Scheme const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::Scheme const&

Возвращает:
* int64_t

# ::stappler::db::BackendInterface::getDeltaValue(stappler::db::Scheme const&,stappler::db::FieldView const&,uint64_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::Scheme const&
* stappler::db::FieldView const&
* uint64_t

Возвращает:
* int64_t

# ::stappler::db::BackendInterface::cancelTransaction()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::db::BackendInterface::isInTransaction() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::db::BackendInterface::getTransactionStatus() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::db::TransactionStatus

# ::stappler::db::BackendInterface::getDatabaseName() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::StringView

# ::stappler::db::BackendInterface::getTransactionKey() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::mem_pool::String

# ::stappler::db::BackendInterface::dbName

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::StringView


# ::stappler::db::BackendInterface::transactionStatus

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::db::TransactionStatus


# ::stappler::db::Binder

## BRIEF

## CONTENT


# ::stappler::db::Binder::DataField

## BRIEF

## CONTENT

Доступ: public


# ::stappler::db::Binder::DataField::field

## BRIEF

## CONTENT

Тип: db::Field const*


# ::stappler::db::Binder::DataField::data

## BRIEF

## CONTENT

Тип: stappler::mem_pool::Value const&


# ::stappler::db::Binder::DataField::force

## BRIEF

## CONTENT

Тип: bool


# ::stappler::db::Binder::DataField::compress

## BRIEF

## CONTENT

Тип: bool


# ::stappler::db::Binder::FullTextField

## BRIEF

## CONTENT

Доступ: public


# ::stappler::db::Binder::FullTextField::data

## BRIEF

## CONTENT

Тип: stappler::mem_pool::Value const&


# ::stappler::db::Binder::FullTextRank

## BRIEF

## CONTENT

Доступ: public


# ::stappler::db::Binder::FullTextRank::scheme

## BRIEF

## CONTENT

Тип: stappler::StringView


# ::stappler::db::Binder::FullTextRank::field

## BRIEF

## CONTENT

Тип: stappler::db::Field const*


# ::stappler::db::Binder::FullTextRank::query

## BRIEF

## CONTENT

Тип: stappler::StringView


# ::stappler::db::Binder::TypeString

## BRIEF

## CONTENT

Доступ: public


# ::stappler::db::Binder::TypeString::str

## BRIEF

## CONTENT

Тип: stappler::StringView


# ::stappler::db::Binder::TypeString::type

## BRIEF

## CONTENT

Тип: stappler::StringView


# ::stappler::db::Binder::TypeString::TypeString<typename,typename>(Str&&,Type&&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Str
* typename Type

Параметры:
* Str&&
* Type&&


# ::stappler::db::Binder::setInterface(stappler::db::QueryInterface*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::QueryInterface*


# ::stappler::db::Binder::getInterface() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::db::QueryInterface*

# ::stappler::db::Binder::writeBind(stappler::mem_pool::StringStream&,int64_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::mem_pool::StringStream&
* int64_t


# ::stappler::db::Binder::writeBind(stappler::mem_pool::StringStream&,uint64_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::mem_pool::StringStream&
* uint64_t


# ::stappler::db::Binder::writeBind(stappler::mem_pool::StringStream&,double)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::mem_pool::StringStream&
* double


# ::stappler::db::Binder::writeBind(stappler::mem_pool::StringStream&,stappler::Time)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::mem_pool::StringStream&
* stappler::Time


# ::stappler::db::Binder::writeBind(stappler::mem_pool::StringStream&,stappler::TimeInterval)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::mem_pool::StringStream&
* stappler::TimeInterval


# ::stappler::db::Binder::writeBind(stappler::mem_pool::StringStream&,stappler::mem_pool::String const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::mem_pool::StringStream&
* stappler::mem_pool::String const&


# ::stappler::db::Binder::writeBind(stappler::mem_pool::StringStream&,stappler::mem_pool::String&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::mem_pool::StringStream&
* stappler::mem_pool::String&&


# ::stappler::db::Binder::writeBind(stappler::mem_pool::StringStream&,stappler::StringView const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::mem_pool::StringStream&
* stappler::StringView const&


# ::stappler::db::Binder::writeBind(stappler::mem_pool::StringStream&,stappler::mem_pool::Bytes const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::mem_pool::StringStream&
* stappler::mem_pool::Bytes const&


# ::stappler::db::Binder::writeBind(stappler::mem_pool::StringStream&,stappler::mem_pool::Bytes&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::mem_pool::StringStream&
* stappler::mem_pool::Bytes&&


# ::stappler::db::Binder::writeBind(stappler::mem_pool::StringStream&,stappler::CoderSource const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::mem_pool::StringStream&
* stappler::CoderSource const&


# ::stappler::db::Binder::writeBind(stappler::mem_pool::StringStream&,stappler::mem_pool::Value const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::mem_pool::StringStream&
* stappler::mem_pool::Value const&


# ::stappler::db::Binder::writeBind(stappler::mem_pool::StringStream&,stappler::db::Binder::DataField const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::mem_pool::StringStream&
* stappler::db::Binder::DataField const&


# ::stappler::db::Binder::writeBind(stappler::mem_pool::StringStream&,stappler::db::Binder::TypeString const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::mem_pool::StringStream&
* stappler::db::Binder::TypeString const&


# ::stappler::db::Binder::writeBind(stappler::mem_pool::StringStream&,stappler::db::Binder::FullTextField const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::mem_pool::StringStream&
* stappler::db::Binder::FullTextField const&


# ::stappler::db::Binder::writeBind(stappler::mem_pool::StringStream&,stappler::db::Binder::FullTextRank const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::mem_pool::StringStream&
* stappler::db::Binder::FullTextRank const&


# ::stappler::db::Binder::writeBind(stappler::mem_pool::StringStream&,stappler::db::FullTextData const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::mem_pool::StringStream&
* stappler::db::FullTextData const&


# ::stappler::db::Binder::writeBind(stappler::mem_pool::StringStream&,stappler::sql::PatternComparator<const Value &> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::mem_pool::StringStream&
* stappler::sql::PatternComparator<const Value &> const&


# ::stappler::db::Binder::writeBind(stappler::mem_pool::StringStream&,stappler::sql::PatternComparator<const StringView &> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::mem_pool::StringStream&
* stappler::sql::PatternComparator<const StringView &> const&


# ::stappler::db::Binder::writeBind(stappler::mem_pool::StringStream&,Vector<int64_t> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::mem_pool::StringStream&
* Vector<int64_t> const&


# ::stappler::db::Binder::writeBind(stappler::mem_pool::StringStream&,Vector<double> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::mem_pool::StringStream&
* Vector<double> const&


# ::stappler::db::Binder::writeBind(stappler::mem_pool::StringStream&,Vector<stappler::StringView> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::mem_pool::StringStream&
* Vector<stappler::StringView> const&


# ::stappler::db::Binder::clear()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::db::Binder::_iface

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::db::QueryInterface*


# ::stappler::db::QueryInterface

## BRIEF

## CONTENT


# ::stappler::db::QueryInterface::~QueryInterface()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::db::QueryInterface::bindInt(stappler::db::Binder&,stappler::mem_pool::StringStream&,int64_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::Binder&
* stappler::mem_pool::StringStream&
* int64_t


# ::stappler::db::QueryInterface::bindUInt(stappler::db::Binder&,stappler::mem_pool::StringStream&,uint64_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::Binder&
* stappler::mem_pool::StringStream&
* uint64_t


# ::stappler::db::QueryInterface::bindDouble(stappler::db::Binder&,stappler::mem_pool::StringStream&,double)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::Binder&
* stappler::mem_pool::StringStream&
* double


# ::stappler::db::QueryInterface::bindString(stappler::db::Binder&,stappler::mem_pool::StringStream&,stappler::mem_pool::String const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::Binder&
* stappler::mem_pool::StringStream&
* stappler::mem_pool::String const&


# ::stappler::db::QueryInterface::bindMoveString(stappler::db::Binder&,stappler::mem_pool::StringStream&,stappler::mem_pool::String&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::Binder&
* stappler::mem_pool::StringStream&
* stappler::mem_pool::String&&


# ::stappler::db::QueryInterface::bindStringView(stappler::db::Binder&,stappler::mem_pool::StringStream&,stappler::StringView const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::Binder&
* stappler::mem_pool::StringStream&
* stappler::StringView const&


# ::stappler::db::QueryInterface::bindBytes(stappler::db::Binder&,stappler::mem_pool::StringStream&,stappler::mem_pool::Bytes const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::Binder&
* stappler::mem_pool::StringStream&
* stappler::mem_pool::Bytes const&


# ::stappler::db::QueryInterface::bindMoveBytes(stappler::db::Binder&,stappler::mem_pool::StringStream&,stappler::mem_pool::Bytes&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::Binder&
* stappler::mem_pool::StringStream&
* stappler::mem_pool::Bytes&&


# ::stappler::db::QueryInterface::bindCoderSource(stappler::db::Binder&,stappler::mem_pool::StringStream&,stappler::CoderSource const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::Binder&
* stappler::mem_pool::StringStream&
* stappler::CoderSource const&


# ::stappler::db::QueryInterface::bindValue(stappler::db::Binder&,stappler::mem_pool::StringStream&,stappler::mem_pool::Value const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::Binder&
* stappler::mem_pool::StringStream&
* stappler::mem_pool::Value const&


# ::stappler::db::QueryInterface::bindDataField(stappler::db::Binder&,stappler::mem_pool::StringStream&,Binder::DataField const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::Binder&
* stappler::mem_pool::StringStream&
* Binder::DataField const&


# ::stappler::db::QueryInterface::bindTypeString(stappler::db::Binder&,stappler::mem_pool::StringStream&,Binder::TypeString const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::Binder&
* stappler::mem_pool::StringStream&
* Binder::TypeString const&


# ::stappler::db::QueryInterface::bindFullText(stappler::db::Binder&,stappler::mem_pool::StringStream&,Binder::FullTextField const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::Binder&
* stappler::mem_pool::StringStream&
* Binder::FullTextField const&


# ::stappler::db::QueryInterface::bindFullTextRank(stappler::db::Binder&,stappler::mem_pool::StringStream&,Binder::FullTextRank const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::Binder&
* stappler::mem_pool::StringStream&
* Binder::FullTextRank const&


# ::stappler::db::QueryInterface::bindFullTextData(stappler::db::Binder&,stappler::mem_pool::StringStream&,stappler::db::FullTextData const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::Binder&
* stappler::mem_pool::StringStream&
* stappler::db::FullTextData const&


# ::stappler::db::QueryInterface::bindIntVector(stappler::db::Binder&,stappler::mem_pool::StringStream&,Vector<int64_t> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::Binder&
* stappler::mem_pool::StringStream&
* Vector<int64_t> const&


# ::stappler::db::QueryInterface::bindDoubleVector(stappler::db::Binder&,stappler::mem_pool::StringStream&,Vector<double> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::Binder&
* stappler::mem_pool::StringStream&
* Vector<double> const&


# ::stappler::db::QueryInterface::bindStringVector(stappler::db::Binder&,stappler::mem_pool::StringStream&,Vector<stappler::StringView> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::Binder&
* stappler::mem_pool::StringStream&
* Vector<stappler::StringView> const&


# ::stappler::db::QueryInterface::clear()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::db::ResultCursor

## BRIEF

## CONTENT


# ::stappler::db::ResultCursor::~ResultCursor()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::db::ResultCursor::isBinaryFormat(size_t) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* size_t

Возвращает:
* bool

# ::stappler::db::ResultCursor::isNull(size_t) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* size_t

Возвращает:
* bool

# ::stappler::db::ResultCursor::toString(size_t) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* size_t

Возвращает:
* stappler::StringView

# ::stappler::db::ResultCursor::toBytes(size_t) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* size_t

Возвращает:
* stappler::BytesView

# ::stappler::db::ResultCursor::toInteger(size_t) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* size_t

Возвращает:
* int64_t

# ::stappler::db::ResultCursor::toDouble(size_t) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* size_t

Возвращает:
* double

# ::stappler::db::ResultCursor::toBool(size_t) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* size_t

Возвращает:
* bool

# ::stappler::db::ResultCursor::toTypedData(size_t) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* size_t

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::ResultCursor::toId() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* int64_t

# ::stappler::db::ResultCursor::getFieldName(size_t) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* size_t

Возвращает:
* stappler::StringView

# ::stappler::db::ResultCursor::isSuccess() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::db::ResultCursor::isEmpty() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::db::ResultCursor::isEnded() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::db::ResultCursor::getFieldsCount() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* size_t

# ::stappler::db::ResultCursor::getAffectedRows() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* size_t

# ::stappler::db::ResultCursor::getRowsHint() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* size_t

# ::stappler::db::ResultCursor::getInfo() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::ResultCursor::next()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::db::ResultCursor::reset()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::db::ResultCursor::clear()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::db::ResultRow

## BRIEF

## CONTENT


# ::stappler::db::ResultRow::ResultRow(db::ResultCursor const*,size_t)

## BRIEF

## CONTENT

Параметры:
* db::ResultCursor const*
* size_t


# ::stappler::db::ResultRow::ResultRow(stappler::db::ResultRow const&)

## BRIEF

## CONTENT

Параметры:
* stappler::db::ResultRow const&


# ::stappler::db::ResultRow::operator=(stappler::db::ResultRow const&)

## BRIEF

## CONTENT

Параметры:
* stappler::db::ResultRow const&

Возвращает:
* stappler::db::ResultRow&

# ::stappler::db::ResultRow::size() const

## BRIEF

## CONTENT

Возвращает:
* size_t

# ::stappler::db::ResultRow::toData(db::Scheme const&,Map<stappler::mem_pool::String, db::Field> const&,Vector<const stappler::db::Field *> const&)

## BRIEF

## CONTENT

Параметры:
* db::Scheme const&
* Map<stappler::mem_pool::String, db::Field> const&
* Vector<const stappler::db::Field *> const&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::ResultRow::front() const

## BRIEF

## CONTENT

Возвращает:
* stappler::StringView

# ::stappler::db::ResultRow::back() const

## BRIEF

## CONTENT

Возвращает:
* stappler::StringView

# ::stappler::db::ResultRow::isNull(size_t) const

## BRIEF

## CONTENT

Параметры:
* size_t

Возвращает:
* bool

# ::stappler::db::ResultRow::at(size_t) const

## BRIEF

## CONTENT

Параметры:
* size_t

Возвращает:
* stappler::StringView

# ::stappler::db::ResultRow::toString(size_t) const

## BRIEF

## CONTENT

Параметры:
* size_t

Возвращает:
* stappler::StringView

# ::stappler::db::ResultRow::toBytes(size_t) const

## BRIEF

## CONTENT

Параметры:
* size_t

Возвращает:
* stappler::BytesView

# ::stappler::db::ResultRow::toInteger(size_t) const

## BRIEF

## CONTENT

Параметры:
* size_t

Возвращает:
* int64_t

# ::stappler::db::ResultRow::toDouble(size_t) const

## BRIEF

## CONTENT

Параметры:
* size_t

Возвращает:
* double

# ::stappler::db::ResultRow::toBool(size_t) const

## BRIEF

## CONTENT

Параметры:
* size_t

Возвращает:
* bool

# ::stappler::db::ResultRow::toTypedData(size_t) const

## BRIEF

## CONTENT

Параметры:
* size_t

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::ResultRow::toData(size_t,db::Field const&)

## BRIEF

## CONTENT

Параметры:
* size_t
* db::Field const&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::ResultRow::result

## BRIEF

## CONTENT

Тип: db::ResultCursor const*


# ::stappler::db::ResultRow::row

## BRIEF

## CONTENT

Тип: size_t


# ::stappler::db::Result

## BRIEF

## CONTENT


# ::stappler::db::Result::Iter

## BRIEF

## CONTENT

Доступ: public


# ::stappler::db::Result::Iter::Iter()

## BRIEF

## CONTENT


# ::stappler::db::Result::Iter::Iter(stappler::db::Result*,size_t)

## BRIEF

## CONTENT

Параметры:
* stappler::db::Result*
* size_t


# ::stappler::db::Result::Iter::operator=(stappler::db::Result::Iter const&)

## BRIEF

## CONTENT

Параметры:
* stappler::db::Result::Iter const&

Возвращает:
* stappler::db::Result::Iter&

# ::stappler::db::Result::Iter::operator==(stappler::db::Result::Iter const&) const

## BRIEF

## CONTENT

Параметры:
* stappler::db::Result::Iter const&

Возвращает:
* bool

# ::stappler::db::Result::Iter::operator!=(stappler::db::Result::Iter const&) const

## BRIEF

## CONTENT

Параметры:
* stappler::db::Result::Iter const&

Возвращает:
* bool

# ::stappler::db::Result::Iter::operator<(stappler::db::Result::Iter const&) const

## BRIEF

## CONTENT

Параметры:
* stappler::db::Result::Iter const&

Возвращает:
* bool

# ::stappler::db::Result::Iter::operator>(stappler::db::Result::Iter const&) const

## BRIEF

## CONTENT

Параметры:
* stappler::db::Result::Iter const&

Возвращает:
* bool

# ::stappler::db::Result::Iter::operator<=(stappler::db::Result::Iter const&) const

## BRIEF

## CONTENT

Параметры:
* stappler::db::Result::Iter const&

Возвращает:
* bool

# ::stappler::db::Result::Iter::operator>=(stappler::db::Result::Iter const&) const

## BRIEF

## CONTENT

Параметры:
* stappler::db::Result::Iter const&

Возвращает:
* bool

# ::stappler::db::Result::Iter::operator++()

## BRIEF

## CONTENT

Возвращает:
* stappler::db::Result::Iter&

# ::stappler::db::Result::Iter::operator*() const

## BRIEF

## CONTENT

Возвращает:
* stappler::db::ResultRow

# ::stappler::db::Result::Iter::result

## BRIEF

## CONTENT

Тип: stappler::db::Result*


# ::stappler::db::Result::Iter::row

## BRIEF

## CONTENT

Тип: size_t


# ::stappler::db::Result::Result()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::db::Result::Result(db::ResultCursor*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* db::ResultCursor*


# ::stappler::db::Result::~Result()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::db::Result::Result(stappler::db::Result const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::Result const&


# ::stappler::db::Result::operator=(stappler::db::Result const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::Result const&

Возвращает:
* stappler::db::Result&

# ::stappler::db::Result::Result(stappler::db::Result&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::Result&&


# ::stappler::db::Result::operator=(stappler::db::Result&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::Result&&

Возвращает:
* stappler::db::Result&

# ::stappler::db::Result::operator bool() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::db::Result::success() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::db::Result::info() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Result::empty() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::db::Result::nrows() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* size_t

# ::stappler::db::Result::nfields() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* size_t

# ::stappler::db::Result::getRowsHint() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* size_t

# ::stappler::db::Result::getAffectedRows() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* size_t

# ::stappler::db::Result::readId()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* int64_t

# ::stappler::db::Result::clear()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::db::Result::begin()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::db::Result::Iter

# ::stappler::db::Result::end()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::db::Result::Iter

# ::stappler::db::Result::current() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::db::ResultRow

# ::stappler::db::Result::next()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::db::Result::name(size_t) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* size_t

Возвращает:
* stappler::StringView

# ::stappler::db::Result::decode(db::Scheme const&,Vector<const stappler::db::Field *> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* db::Scheme const&
* Vector<const stappler::db::Field *> const&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Result::decode(db::Field const&,Vector<const stappler::db::Field *> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* db::Field const&
* Vector<const stappler::db::Field *> const&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Result::decode(db::FieldView const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* db::FieldView const&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Result::_cursor

## BRIEF

## CONTENT

Доступ: protected

Тип: db::ResultCursor*


# ::stappler::db::Result::_row

## BRIEF

## CONTENT

Доступ: protected

Тип: size_t


# ::stappler::db::Result::_success

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::db::Result::_nfields

## BRIEF

## CONTENT

Доступ: protected

Тип: size_t
