Title: STStorageQuery.h


# MODULES_DB_STSTORAGEQUERY_H_

## BRIEF

## CONTENT


# ::stappler::db::Operator

## BRIEF

## CONTENT


# ::stappler::db::Comparation

## BRIEF

## CONTENT


# ::stappler::db::Ordering

## BRIEF

## CONTENT


# ::stappler::db::Resolve

## BRIEF

## CONTENT

Значения:
* None
* Files
* Sets
* Objects
* Arrays
* Ids
* Basics
* Defaults
* All


# ::stappler::db::operator|(stappler::db::Resolve const&,stappler::db::Resolve const&)

## BRIEF

## CONTENT

Параметры:
* stappler::db::Resolve const&
* stappler::db::Resolve const&

Возвращает:
* stappler::db::Resolve

# ::stappler::db::operator&(stappler::db::Resolve const&,stappler::db::Resolve const&)

## BRIEF

## CONTENT

Параметры:
* stappler::db::Resolve const&
* stappler::db::Resolve const&

Возвращает:
* stappler::db::Resolve

# ::stappler::db::operator^(stappler::db::Resolve const&,stappler::db::Resolve const&)

## BRIEF

## CONTENT

Параметры:
* stappler::db::Resolve const&
* stappler::db::Resolve const&

Возвращает:
* stappler::db::Resolve

# ::stappler::db::operator|=(stappler::db::Resolve&,stappler::db::Resolve const&)

## BRIEF

## CONTENT

Параметры:
* stappler::db::Resolve&
* stappler::db::Resolve const&

Возвращает:
* stappler::db::Resolve&

# ::stappler::db::operator&=(stappler::db::Resolve&,stappler::db::Resolve const&)

## BRIEF

## CONTENT

Параметры:
* stappler::db::Resolve&
* stappler::db::Resolve const&

Возвращает:
* stappler::db::Resolve&

# ::stappler::db::operator^=(stappler::db::Resolve&,stappler::db::Resolve const&)

## BRIEF

## CONTENT

Параметры:
* stappler::db::Resolve&
* stappler::db::Resolve const&

Возвращает:
* stappler::db::Resolve&

# ::stappler::db::operator==(stappler::db::Resolve const&,std::underlying_type<Resolve>::type const&)

## BRIEF

## CONTENT

Параметры:
* stappler::db::Resolve const&
* std::underlying_type<Resolve>::type const&

Возвращает:
* bool

# ::stappler::db::operator==(std::underlying_type<Resolve>::type const&,stappler::db::Resolve const&)

## BRIEF

## CONTENT

Параметры:
* std::underlying_type<Resolve>::type const&
* stappler::db::Resolve const&

Возвращает:
* bool

# ::stappler::db::operator!=(stappler::db::Resolve const&,std::underlying_type<Resolve>::type const&)

## BRIEF

## CONTENT

Параметры:
* stappler::db::Resolve const&
* std::underlying_type<Resolve>::type const&

Возвращает:
* bool

# ::stappler::db::operator!=(std::underlying_type<Resolve>::type const&,stappler::db::Resolve const&)

## BRIEF

## CONTENT

Параметры:
* std::underlying_type<Resolve>::type const&
* stappler::db::Resolve const&

Возвращает:
* bool

# ::stappler::db::operator~(stappler::db::Resolve const&)

## BRIEF

## CONTENT

Параметры:
* stappler::db::Resolve const&

Возвращает:
* stappler::db::Resolve

# ::stappler::db::Query

## BRIEF

## CONTENT

Базовые классы:
* AllocBase


# ::stappler::db::Query::Field

## BRIEF

## CONTENT

Доступ: public

Базовые классы:
* AllocBase


# ::stappler::db::Query::Field::name

## BRIEF

## CONTENT

Тип: stappler::mem_pool::String


# ::stappler::db::Query::Field::fields

## BRIEF

## CONTENT

Тип: Vector<stappler::db::Query::Field>


# ::stappler::db::Query::Field::Field(stappler::db::Query::Field&&)

## BRIEF

## CONTENT

Параметры:
* stappler::db::Query::Field&&


# ::stappler::db::Query::Field::Field(stappler::db::Query::Field const&)

## BRIEF

## CONTENT

Параметры:
* stappler::db::Query::Field const&


# ::stappler::db::Query::Field::operator=(stappler::db::Query::Field&&)

## BRIEF

## CONTENT

Параметры:
* stappler::db::Query::Field&&

Возвращает:
* stappler::db::Query::Field&

# ::stappler::db::Query::Field::operator=(stappler::db::Query::Field const&)

## BRIEF

## CONTENT

Параметры:
* stappler::db::Query::Field const&

Возвращает:
* stappler::db::Query::Field&

# ::stappler::db::Query::Field::Field<typename>(Str&&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Str

Параметры:
* Str&&


# ::stappler::db::Query::Field::Field<typename>(Str&&,Vector<stappler::mem_pool::String>&&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Str

Параметры:
* Str&&
* Vector<stappler::mem_pool::String>&&


# ::stappler::db::Query::Field::Field<typename>(Str&&,std::initializer_list<String>&&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Str

Параметры:
* Str&&
* std::initializer_list<String>&&


# ::stappler::db::Query::Field::Field<typename>(Str&&,Vector<stappler::db::Query::Field>&&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Str

Параметры:
* Str&&
* Vector<stappler::db::Query::Field>&&


# ::stappler::db::Query::Field::Field<typename>(Str&&,std::initializer_list<Field>&&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Str

Параметры:
* Str&&
* std::initializer_list<Field>&&


# ::stappler::db::Query::Field::setName(char const*)

## BRIEF

## CONTENT

Параметры:
* char const*


# ::stappler::db::Query::Field::setName(stappler::StringView const&)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView const&


# ::stappler::db::Query::Field::setName(stappler::mem_pool::String const&)

## BRIEF

## CONTENT

Параметры:
* stappler::mem_pool::String const&


# ::stappler::db::Query::Field::setName(stappler::mem_pool::String&&)

## BRIEF

## CONTENT

Параметры:
* stappler::mem_pool::String&&


# ::stappler::db::Query::Field::setName(stappler::db::Query::Field const&)

## BRIEF

## CONTENT

Параметры:
* stappler::db::Query::Field const&


# ::stappler::db::Query::Field::setName(stappler::db::Query::Field&&)

## BRIEF

## CONTENT

Параметры:
* stappler::db::Query::Field&&


# ::stappler::db::Query::FieldsVec

## BRIEF

## CONTENT

Доступ: public


# ::stappler::db::Query::Select

## BRIEF

## CONTENT

Доступ: public

Базовые классы:
* AllocBase


# ::stappler::db::Query::Select::compare

## BRIEF

## CONTENT

Тип: stappler::db::Comparation


# ::stappler::db::Query::Select::value1

## BRIEF

## CONTENT

Тип: stappler::mem_pool::Value


# ::stappler::db::Query::Select::value2

## BRIEF

## CONTENT

Тип: stappler::mem_pool::Value


# ::stappler::db::Query::Select::field

## BRIEF

## CONTENT

Тип: stappler::mem_pool::String


# ::stappler::db::Query::Select::searchData

## BRIEF

## CONTENT

Тип: Vector<stappler::search::SearchData>


# ::stappler::db::Query::Select::Select()

## BRIEF

## CONTENT


# ::stappler::db::Query::Select::Select(stappler::StringView const&,stappler::db::Comparation,stappler::mem_pool::Value&&,stappler::mem_pool::Value&&)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView const&
* stappler::db::Comparation
* stappler::mem_pool::Value&&
* stappler::mem_pool::Value&&


# ::stappler::db::Query::Select::Select(stappler::StringView const&,stappler::db::Comparation,int64_t,int64_t)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView const&
* stappler::db::Comparation
* int64_t
* int64_t


# ::stappler::db::Query::Select::Select(stappler::StringView const&,stappler::db::Comparation,stappler::mem_pool::String const&)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView const&
* stappler::db::Comparation
* stappler::mem_pool::String const&


# ::stappler::db::Query::Select::Select(stappler::StringView const&,stappler::db::Comparation,stappler::StringView const&)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView const&
* stappler::db::Comparation
* stappler::StringView const&


# ::stappler::db::Query::Select::Select(stappler::StringView const&,stappler::db::Comparation,Vector<stappler::search::SearchData>&&)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView const&
* stappler::db::Comparation
* Vector<stappler::search::SearchData>&&


# ::stappler::db::Query::SoftLimit

## BRIEF

## CONTENT

Доступ: public


# ::stappler::db::Query::SoftLimit::field

## BRIEF

## CONTENT

Тип: stappler::mem_pool::String


# ::stappler::db::Query::SoftLimit::limit

## BRIEF

## CONTENT

Тип: size_t


# ::stappler::db::Query::SoftLimit::offset

## BRIEF

## CONTENT

Тип: stappler::mem_pool::Value


# ::stappler::db::Query::all()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::db::Query

# ::stappler::db::Query::field(int64_t,stappler::StringView const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* int64_t
* stappler::StringView const&

Возвращает:
* stappler::db::Query

# ::stappler::db::Query::field(int64_t,stappler::StringView const&,stappler::db::Query const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* int64_t
* stappler::StringView const&
* stappler::db::Query const&

Возвращает:
* stappler::db::Query

# ::stappler::db::Query::decodeResolve(stappler::StringView const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView const&

Возвращает:
* stappler::db::Resolve

# ::stappler::db::Query::encodeResolve(stappler::db::Resolve)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::Resolve

Возвращает:
* stappler::mem_pool::String

# ::stappler::db::Query::select(stappler::StringView const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView const&

Возвращает:
* stappler::db::Query&

# ::stappler::db::Query::select(int64_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* int64_t

Возвращает:
* stappler::db::Query&

# ::stappler::db::Query::select(stappler::mem_pool::Value const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::mem_pool::Value const&

Возвращает:
* stappler::db::Query&

# ::stappler::db::Query::select(Vector<int64_t>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Vector<int64_t>&&

Возвращает:
* stappler::db::Query&

# ::stappler::db::Query::select(SpanView<int64_t>)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* SpanView<int64_t>

Возвращает:
* stappler::db::Query&

# ::stappler::db::Query::select(std::initializer_list<int64_t>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* std::initializer_list<int64_t>&&

Возвращает:
* stappler::db::Query&

# ::stappler::db::Query::select(stappler::StringView const&,stappler::db::Comparation,stappler::mem_pool::Value const&,stappler::mem_pool::Value const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView const&
* stappler::db::Comparation
* stappler::mem_pool::Value const&
* stappler::mem_pool::Value const&

Возвращает:
* stappler::db::Query&

# ::stappler::db::Query::select(stappler::StringView const&,stappler::mem_pool::Value const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView const&
* stappler::mem_pool::Value const&

Возвращает:
* stappler::db::Query&

# ::stappler::db::Query::select(stappler::StringView const&,stappler::db::Comparation,int64_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView const&
* stappler::db::Comparation
* int64_t

Возвращает:
* stappler::db::Query&

# ::stappler::db::Query::select(stappler::StringView const&,stappler::db::Comparation,int64_t,int64_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView const&
* stappler::db::Comparation
* int64_t
* int64_t

Возвращает:
* stappler::db::Query&

# ::stappler::db::Query::select(stappler::StringView const&,stappler::mem_pool::String const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView const&
* stappler::mem_pool::String const&

Возвращает:
* stappler::db::Query&

# ::stappler::db::Query::select(stappler::StringView const&,stappler::mem_pool::String&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView const&
* stappler::mem_pool::String&&

Возвращает:
* stappler::db::Query&

# ::stappler::db::Query::select(stappler::StringView const&,stappler::mem_pool::Bytes const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView const&
* stappler::mem_pool::Bytes const&

Возвращает:
* stappler::db::Query&

# ::stappler::db::Query::select(stappler::StringView const&,stappler::mem_pool::Bytes&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView const&
* stappler::mem_pool::Bytes&&

Возвращает:
* stappler::db::Query&

# ::stappler::db::Query::select(stappler::StringView const&,Vector<stappler::search::SearchData>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView const&
* Vector<stappler::search::SearchData>&&

Возвращает:
* stappler::db::Query&

# ::stappler::db::Query::select(stappler::db::Query::Select&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::Query::Select&&

Возвращает:
* stappler::db::Query&

# ::stappler::db::Query::order(stappler::StringView const&,stappler::db::Ordering,size_t,size_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView const&
* stappler::db::Ordering
* size_t
* size_t

Возвращает:
* stappler::db::Query&

# ::stappler::db::Query::softLimit(stappler::StringView const&,stappler::db::Ordering,size_t,stappler::mem_pool::Value&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView const&
* stappler::db::Ordering
* size_t
* stappler::mem_pool::Value&&

Возвращает:
* stappler::db::Query&

# ::stappler::db::Query::first(stappler::StringView const&,size_t,size_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView const&
* size_t
* size_t

Возвращает:
* stappler::db::Query&

# ::stappler::db::Query::last(stappler::StringView const&,size_t,size_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView const&
* size_t
* size_t

Возвращает:
* stappler::db::Query&

# ::stappler::db::Query::limit(size_t,size_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* size_t
* size_t

Возвращает:
* stappler::db::Query&

# ::stappler::db::Query::limit(size_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* size_t

Возвращает:
* stappler::db::Query&

# ::stappler::db::Query::offset(size_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* size_t

Возвращает:
* stappler::db::Query&

# ::stappler::db::Query::delta(uint64_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint64_t

Возвращает:
* stappler::db::Query&

# ::stappler::db::Query::delta(stappler::StringView const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView const&

Возвращает:
* stappler::db::Query&

# ::stappler::db::Query::include<typename>(stappler::db::Query::Field&&,Args &&...)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename Args

Параметры:
* stappler::db::Query::Field&&
* Args &&...

Возвращает:
* stappler::db::Query&

# ::stappler::db::Query::include(stappler::db::Query::Field&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::Query::Field&&

Возвращает:
* stappler::db::Query&

# ::stappler::db::Query::exclude(stappler::db::Query::Field&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::Query::Field&&

Возвращает:
* stappler::db::Query&

# ::stappler::db::Query::depth(uint16_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint16_t

Возвращает:
* stappler::db::Query&

# ::stappler::db::Query::forUpdate()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::db::Query&

# ::stappler::db::Query::clearFields()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::db::Query&

# ::stappler::db::Query::empty() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::db::Query::getQueryField() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::StringView

# ::stappler::db::Query::getQueryId() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* int64_t

# ::stappler::db::Query::getSingleSelectId() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* int64_t

# ::stappler::db::Query::getSelectIds() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Vector<int64_t> const&

# ::stappler::db::Query::getSelectAlias() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::StringView

# ::stappler::db::Query::getSelectList() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Vector<stappler::db::Query::Select> const&

# ::stappler::db::Query::getOrderField() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::mem_pool::String const&

# ::stappler::db::Query::getOrdering() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::db::Ordering

# ::stappler::db::Query::getLimitValue() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* size_t

# ::stappler::db::Query::getOffsetValue() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* size_t

# ::stappler::db::Query::getSoftLimitValue() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::mem_pool::Value const&

# ::stappler::db::Query::hasSelectName() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::db::Query::hasSelectList() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::db::Query::hasSelect() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::db::Query::hasOrder() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::db::Query::hasLimit() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::db::Query::hasOffset() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::db::Query::hasDelta() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::db::Query::hasFields() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::db::Query::isForUpdate() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::db::Query::isSoftLimit() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::db::Query::getDeltaToken() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint64_t

# ::stappler::db::Query::getResolveDepth() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint16_t

# ::stappler::db::Query::getIncludeFields() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* FieldsVec&

# ::stappler::db::Query::getExcludeFields() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* FieldsVec&

# ::stappler::db::Query::encode() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Query::queryField

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::mem_pool::String


# ::stappler::db::Query::queryId

## BRIEF

## CONTENT

Доступ: protected

Тип: int64_t


# ::stappler::db::Query::selectIds

## BRIEF

## CONTENT

Доступ: protected

Тип: Vector<int64_t>


# ::stappler::db::Query::selectAlias

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::mem_pool::String


# ::stappler::db::Query::selectList

## BRIEF

## CONTENT

Доступ: protected

Тип: Vector<stappler::db::Query::Select>


# ::stappler::db::Query::ordering

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::db::Ordering


# ::stappler::db::Query::orderField

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::mem_pool::String


# ::stappler::db::Query::limitValue

## BRIEF

## CONTENT

Доступ: protected

Тип: size_t


# ::stappler::db::Query::offsetValue

## BRIEF

## CONTENT

Доступ: protected

Тип: size_t


# ::stappler::db::Query::softLimitValue

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::mem_pool::Value


# ::stappler::db::Query::deltaToken

## BRIEF

## CONTENT

Доступ: protected

Тип: uint64_t


# ::stappler::db::Query::resolveDepth

## BRIEF

## CONTENT

Доступ: protected

Тип: uint16_t


# ::stappler::db::Query::fieldsInclude

## BRIEF

## CONTENT

Доступ: protected

Тип: FieldsVec


# ::stappler::db::Query::fieldsExclude

## BRIEF

## CONTENT

Доступ: protected

Тип: FieldsVec


# ::stappler::db::Query::update

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::db::Query::_softLimit

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::db::Query::_selected

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::db::Field::Field<typename>(Str&&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Str

Параметры:
* Str&&


# ::stappler::db::Field::Field<typename>(Str&&,Vector<stappler::mem_pool::String>&&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Str

Параметры:
* Str&&
* Vector<stappler::mem_pool::String>&&


# ::stappler::db::Field::Field<typename>(Str&&,std::initializer_list<String>&&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Str

Параметры:
* Str&&
* std::initializer_list<String>&&


# ::stappler::db::Field::Field<typename>(Str&&,Vector<stappler::db::Query::Field>&&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Str

Параметры:
* Str&&
* Vector<stappler::db::Query::Field>&&


# ::stappler::db::Field::Field<typename>(Str&&,std::initializer_list<Field>&&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Str

Параметры:
* Str&&
* std::initializer_list<Field>&&


# ::stappler::db::Query::include<typename>(stappler::db::Query::Field&&,Args &&...)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Args

Параметры:
* stappler::db::Query::Field&&
* Args &&...

Возвращает:
* stappler::db::Query&