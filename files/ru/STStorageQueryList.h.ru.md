Title: STStorageQueryList.h


# MODULES_DB_STSTORAGEQUERYLIST_H_

## BRIEF

## CONTENT


# ::stappler::db::Action

## BRIEF

## CONTENT

Значения:
* Get
* Set
* Append
* Remove
* Count


# ::stappler::db::TransactionStatus

## BRIEF

## CONTENT

Значения:
* None
* Commit
* Rollback


# ::stappler::db::QueryFieldResolver

## BRIEF

## CONTENT

Базовые классы:
* AllocBase


# ::stappler::db::QueryFieldResolver::Meta

## BRIEF

## CONTENT

Доступ: public

Значения:
* None
* Time
* Action
* View


# ::stappler::db::QueryFieldResolver::QueryFieldResolver()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::db::QueryFieldResolver::QueryFieldResolver(stappler::db::Scheme const&,stappler::db::Query const&,Vector<stappler::mem_pool::String> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::Scheme const&
* stappler::db::Query const&
* Vector<stappler::mem_pool::String> const&


# ::stappler::db::QueryFieldResolver::getField(stappler::mem_pool::String const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::mem_pool::String const&

Возвращает:
* stappler::db::Field const*

# ::stappler::db::QueryFieldResolver::getScheme() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::db::Scheme const*

# ::stappler::db::QueryFieldResolver::getFields() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Map<stappler::mem_pool::String, stappler::db::Field> const*

# ::stappler::db::QueryFieldResolver::getMeta() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::db::QueryFieldResolver::Meta

# ::stappler::db::QueryFieldResolver::getResolves() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Set<const stappler::db::Field *> const&

# ::stappler::db::QueryFieldResolver::getResolvesData() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Set<stappler::StringView> const&

# ::stappler::db::QueryFieldResolver::getIncludeVec() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Query::FieldsVec const*

# ::stappler::db::QueryFieldResolver::getExcludeVec() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Query::FieldsVec const*

# ::stappler::db::QueryFieldResolver::next(stappler::StringView const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView const&

Возвращает:
* stappler::db::QueryFieldResolver

# ::stappler::db::QueryFieldResolver::operator bool() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::db::QueryFieldResolver::Data

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::db::QueryFieldResolver::Data::scheme

## BRIEF

## CONTENT

Тип: stappler::db::Scheme const*


# ::stappler::db::QueryFieldResolver::Data::fields

## BRIEF

## CONTENT

Тип: Map<stappler::mem_pool::String, stappler::db::Field> const*


# ::stappler::db::QueryFieldResolver::Data::include

## BRIEF

## CONTENT

Тип: Query::FieldsVec const*


# ::stappler::db::QueryFieldResolver::Data::exclude

## BRIEF

## CONTENT

Тип: Query::FieldsVec const*


# ::stappler::db::QueryFieldResolver::Data::resolved

## BRIEF

## CONTENT

Тип: Set<const stappler::db::Field *>


# ::stappler::db::QueryFieldResolver::Data::resolvedData

## BRIEF

## CONTENT

Тип: Set<stappler::StringView>


# ::stappler::db::QueryFieldResolver::Data::next

## BRIEF

## CONTENT

Тип: Map<stappler::mem_pool::String, stappler::db::QueryFieldResolver::Data>


# ::stappler::db::QueryFieldResolver::Data::meta

## BRIEF

## CONTENT

Тип: stappler::db::QueryFieldResolver::Meta


# ::stappler::db::QueryFieldResolver::QueryFieldResolver(stappler::db::QueryFieldResolver::Data*)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::db::QueryFieldResolver::Data*


# ::stappler::db::QueryFieldResolver::doResolve(stappler::db::QueryFieldResolver::Data*,Vector<stappler::mem_pool::String> const&,uint16_t,uint16_t)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::db::QueryFieldResolver::Data*
* Vector<stappler::mem_pool::String> const&
* uint16_t
* uint16_t


# ::stappler::db::QueryFieldResolver::doResolveData(stappler::db::QueryFieldResolver::Data*,uint16_t,uint16_t)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::db::QueryFieldResolver::Data*
* uint16_t
* uint16_t


# ::stappler::db::QueryFieldResolver::root

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::db::QueryFieldResolver::Data*


# ::stappler::db::operator|(QueryFieldResolver::Meta const&,QueryFieldResolver::Meta const&)

## BRIEF

## CONTENT

Параметры:
* QueryFieldResolver::Meta const&
* QueryFieldResolver::Meta const&

Возвращает:
* QueryFieldResolver::Meta

# ::stappler::db::operator&(QueryFieldResolver::Meta const&,QueryFieldResolver::Meta const&)

## BRIEF

## CONTENT

Параметры:
* QueryFieldResolver::Meta const&
* QueryFieldResolver::Meta const&

Возвращает:
* QueryFieldResolver::Meta

# ::stappler::db::operator^(QueryFieldResolver::Meta const&,QueryFieldResolver::Meta const&)

## BRIEF

## CONTENT

Параметры:
* QueryFieldResolver::Meta const&
* QueryFieldResolver::Meta const&

Возвращает:
* QueryFieldResolver::Meta

# ::stappler::db::operator|=(QueryFieldResolver::Meta&,QueryFieldResolver::Meta const&)

## BRIEF

## CONTENT

Параметры:
* QueryFieldResolver::Meta&
* QueryFieldResolver::Meta const&

Возвращает:
* QueryFieldResolver::Meta&

# ::stappler::db::operator&=(QueryFieldResolver::Meta&,QueryFieldResolver::Meta const&)

## BRIEF

## CONTENT

Параметры:
* QueryFieldResolver::Meta&
* QueryFieldResolver::Meta const&

Возвращает:
* QueryFieldResolver::Meta&

# ::stappler::db::operator^=(QueryFieldResolver::Meta&,QueryFieldResolver::Meta const&)

## BRIEF

## CONTENT

Параметры:
* QueryFieldResolver::Meta&
* QueryFieldResolver::Meta const&

Возвращает:
* QueryFieldResolver::Meta&

# ::stappler::db::operator==(QueryFieldResolver::Meta const&,std::underlying_type<QueryFieldResolver::Meta>::type const&)

## BRIEF

## CONTENT

Параметры:
* QueryFieldResolver::Meta const&
* std::underlying_type<QueryFieldResolver::Meta>::type const&

Возвращает:
* bool

# ::stappler::db::operator==(std::underlying_type<QueryFieldResolver::Meta>::type const&,QueryFieldResolver::Meta const&)

## BRIEF

## CONTENT

Параметры:
* std::underlying_type<QueryFieldResolver::Meta>::type const&
* QueryFieldResolver::Meta const&

Возвращает:
* bool

# ::stappler::db::operator!=(QueryFieldResolver::Meta const&,std::underlying_type<QueryFieldResolver::Meta>::type const&)

## BRIEF

## CONTENT

Параметры:
* QueryFieldResolver::Meta const&
* std::underlying_type<QueryFieldResolver::Meta>::type const&

Возвращает:
* bool

# ::stappler::db::operator!=(std::underlying_type<QueryFieldResolver::Meta>::type const&,QueryFieldResolver::Meta const&)

## BRIEF

## CONTENT

Параметры:
* std::underlying_type<QueryFieldResolver::Meta>::type const&
* QueryFieldResolver::Meta const&

Возвращает:
* bool

# ::stappler::db::operator~(QueryFieldResolver::Meta const&)

## BRIEF

## CONTENT

Параметры:
* QueryFieldResolver::Meta const&

Возвращает:
* QueryFieldResolver::Meta

# ::stappler::db::FullTextData

## BRIEF

## CONTENT


# ::stappler::db::QueryList

## BRIEF

## CONTENT

Базовые классы:
* AllocBase


# ::stappler::db::QueryList::FieldCallback

## BRIEF

## CONTENT

Доступ: public


# ::stappler::db::QueryList::DefaultSoftLimit

## BRIEF

## CONTENT

Доступ: public

Тип: int64_t const


# ::stappler::db::QueryList::MinSoftLimit

## BRIEF

## CONTENT

Доступ: public

Тип: int64_t const


# ::stappler::db::QueryList::MaxSoftLimit

## BRIEF

## CONTENT

Доступ: public

Тип: int64_t const


# ::stappler::db::QueryList::Flags

## BRIEF

## CONTENT

Доступ: public

Значения:
* None
* SimpleGet


# ::stappler::db::QueryList::Item

## BRIEF

## CONTENT

Доступ: public


# ::stappler::db::QueryList::Item::scheme

## BRIEF

## CONTENT

Тип: stappler::db::Scheme const*


# ::stappler::db::QueryList::Item::ref

## BRIEF

## CONTENT

Тип: stappler::db::Field const*


# ::stappler::db::QueryList::Item::field

## BRIEF

## CONTENT

Тип: stappler::db::Field const*


# ::stappler::db::QueryList::Item::all

## BRIEF

## CONTENT

Тип: bool


# ::stappler::db::QueryList::Item::resolved

## BRIEF

## CONTENT

Тип: bool


# ::stappler::db::QueryList::Item::query

## BRIEF

## CONTENT

Тип: stappler::db::Query


# ::stappler::db::QueryList::Item::fields

## BRIEF

## CONTENT

Тип: stappler::db::QueryFieldResolver


# ::stappler::db::QueryList::Item::getQueryFields() const

## BRIEF

## CONTENT

Возвращает:
* Set<const stappler::db::Field *> const&

# ::stappler::db::QueryList::QueryList(stappler::db::Scheme const*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::Scheme const*


# ::stappler::db::QueryList::selectById(stappler::db::Scheme const*,uint64_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::Scheme const*
* uint64_t

Возвращает:
* bool

# ::stappler::db::QueryList::selectByName(stappler::db::Scheme const*,stappler::StringView const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::Scheme const*
* stappler::StringView const&

Возвращает:
* bool

# ::stappler::db::QueryList::selectByQuery(stappler::db::Scheme const*,Query::Select&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::Scheme const*
* Query::Select&&

Возвращает:
* bool

# ::stappler::db::QueryList::order(stappler::db::Scheme const*,stappler::StringView const&,db::Ordering)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::Scheme const*
* stappler::StringView const&
* db::Ordering

Возвращает:
* bool

# ::stappler::db::QueryList::first(stappler::db::Scheme const*,stappler::StringView const&,size_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::Scheme const*
* stappler::StringView const&
* size_t

Возвращает:
* bool

# ::stappler::db::QueryList::last(stappler::db::Scheme const*,stappler::StringView const&,size_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::Scheme const*
* stappler::StringView const&
* size_t

Возвращает:
* bool

# ::stappler::db::QueryList::limit(stappler::db::Scheme const*,size_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::Scheme const*
* size_t

Возвращает:
* bool

# ::stappler::db::QueryList::offset(stappler::db::Scheme const*,size_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::Scheme const*
* size_t

Возвращает:
* bool

# ::stappler::db::QueryList::setFullTextQuery(stappler::db::Field const*,Vector<stappler::db::FullTextData>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::Field const*
* Vector<stappler::db::FullTextData>&&

Возвращает:
* bool

# ::stappler::db::QueryList::setAll()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::db::QueryList::setField(stappler::db::Scheme const*,stappler::db::Field const*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::Scheme const*
* stappler::db::Field const*

Возвращает:
* bool

# ::stappler::db::QueryList::setProperty(stappler::db::Field const*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::Field const*

Возвращает:
* bool

# ::stappler::db::QueryList::setQueryAsMtime()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::StringView

# ::stappler::db::QueryList::clearFlags()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::db::QueryList::addFlag(stappler::db::QueryList::Flags)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::QueryList::Flags


# ::stappler::db::QueryList::hasFlag(stappler::db::QueryList::Flags) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::QueryList::Flags

Возвращает:
* bool

# ::stappler::db::QueryList::isAll() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::db::QueryList::isRefSet() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::db::QueryList::isObject() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::db::QueryList::isView() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::db::QueryList::empty() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::db::QueryList::isDeltaApplicable() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::db::QueryList::apply(stappler::mem_pool::Value const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::mem_pool::Value const&

Возвращает:
* bool

# ::stappler::db::QueryList::resolve(Vector<stappler::mem_pool::String> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Vector<stappler::mem_pool::String> const&


# ::stappler::db::QueryList::getResolveDepth() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint16_t

# ::stappler::db::QueryList::setResolveDepth(uint16_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint16_t


# ::stappler::db::QueryList::setDelta(stappler::Time)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::Time


# ::stappler::db::QueryList::getDelta() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::Time

# ::stappler::db::QueryList::size() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* size_t

# ::stappler::db::QueryList::getPrimaryScheme() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::db::Scheme const*

# ::stappler::db::QueryList::getSourceScheme() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::db::Scheme const*

# ::stappler::db::QueryList::getScheme() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::db::Scheme const*

# ::stappler::db::QueryList::getField() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::db::Field const*

# ::stappler::db::QueryList::getTopQuery() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::db::Query const&

# ::stappler::db::QueryList::getItems() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Vector<stappler::db::QueryList::Item> const&

# ::stappler::db::QueryList::getIncludeFields() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Query::FieldsVec const&

# ::stappler::db::QueryList::getExcludeFields() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Query::FieldsVec const&

# ::stappler::db::QueryList::getFields() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::db::QueryFieldResolver

# ::stappler::db::QueryList::getExtraData() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::mem_pool::Value const&

# ::stappler::db::QueryList::getContinueToken() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::db::ContinueToken&

# ::stappler::db::QueryList::decodeSelect(stappler::db::Scheme const&,stappler::db::Query&,stappler::mem_pool::Value const&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::db::Scheme const&
* stappler::db::Query&
* stappler::mem_pool::Value const&


# ::stappler::db::QueryList::decodeOrder(stappler::db::Scheme const&,stappler::db::Query&,stappler::mem_pool::String const&,stappler::mem_pool::Value const&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::db::Scheme const&
* stappler::db::Query&
* stappler::mem_pool::String const&
* stappler::mem_pool::Value const&


# ::stappler::db::QueryList::_flags

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::db::QueryList::Flags


# ::stappler::db::QueryList::queries

## BRIEF

## CONTENT

Доступ: protected

Тип: Vector<stappler::db::QueryList::Item>


# ::stappler::db::QueryList::extraData

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::mem_pool::Value


# ::stappler::db::QueryList::token

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::db::ContinueToken


# ::stappler::db::QueryList::failed

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::db::operator|(QueryList::Flags const&,QueryList::Flags const&)

## BRIEF

## CONTENT

Параметры:
* QueryList::Flags const&
* QueryList::Flags const&

Возвращает:
* QueryList::Flags

# ::stappler::db::operator&(QueryList::Flags const&,QueryList::Flags const&)

## BRIEF

## CONTENT

Параметры:
* QueryList::Flags const&
* QueryList::Flags const&

Возвращает:
* QueryList::Flags

# ::stappler::db::operator^(QueryList::Flags const&,QueryList::Flags const&)

## BRIEF

## CONTENT

Параметры:
* QueryList::Flags const&
* QueryList::Flags const&

Возвращает:
* QueryList::Flags

# ::stappler::db::operator|=(QueryList::Flags&,QueryList::Flags const&)

## BRIEF

## CONTENT

Параметры:
* QueryList::Flags&
* QueryList::Flags const&

Возвращает:
* QueryList::Flags&

# ::stappler::db::operator&=(QueryList::Flags&,QueryList::Flags const&)

## BRIEF

## CONTENT

Параметры:
* QueryList::Flags&
* QueryList::Flags const&

Возвращает:
* QueryList::Flags&

# ::stappler::db::operator^=(QueryList::Flags&,QueryList::Flags const&)

## BRIEF

## CONTENT

Параметры:
* QueryList::Flags&
* QueryList::Flags const&

Возвращает:
* QueryList::Flags&

# ::stappler::db::operator==(QueryList::Flags const&,std::underlying_type<QueryList::Flags>::type const&)

## BRIEF

## CONTENT

Параметры:
* QueryList::Flags const&
* std::underlying_type<QueryList::Flags>::type const&

Возвращает:
* bool

# ::stappler::db::operator==(std::underlying_type<QueryList::Flags>::type const&,QueryList::Flags const&)

## BRIEF

## CONTENT

Параметры:
* std::underlying_type<QueryList::Flags>::type const&
* QueryList::Flags const&

Возвращает:
* bool

# ::stappler::db::operator!=(QueryList::Flags const&,std::underlying_type<QueryList::Flags>::type const&)

## BRIEF

## CONTENT

Параметры:
* QueryList::Flags const&
* std::underlying_type<QueryList::Flags>::type const&

Возвращает:
* bool

# ::stappler::db::operator!=(std::underlying_type<QueryList::Flags>::type const&,QueryList::Flags const&)

## BRIEF

## CONTENT

Параметры:
* std::underlying_type<QueryList::Flags>::type const&
* QueryList::Flags const&

Возвращает:
* bool

# ::stappler::db::operator~(QueryList::Flags const&)

## BRIEF

## CONTENT

Параметры:
* QueryList::Flags const&

Возвращает:
* QueryList::Flags