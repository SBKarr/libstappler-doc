Title: SPSql.h


# MODULES_SQL_SQLQUERY_H_

## BRIEF

## CONTENT


# ::stappler::sql::Profile

## BRIEF

## CONTENT

Значения:
* Postgres
* Sqlite


# ::stappler::sql::Comparation

## BRIEF

## CONTENT

Значения:
* Invalid
* LessThen
* LessOrEqual
* Equal
* NotEqual
* GreatherOrEqual
* GreatherThen
* BetweenValues
* BetweenEquals
* NotBetweenValues
* NotBetweenEquals
* Includes
* Between
* In
* NotIn
* IsNull
* IsNotNull
* Prefix
* Suffix
* WordPart


# ::stappler::sql::Ordering

## BRIEF

## CONTENT

Значения:
* Ascending
* Descending


# ::stappler::sql::Nulls

## BRIEF

## CONTENT

Значения:
* None
* First
* Last


# ::stappler::sql::Operator

## BRIEF

## CONTENT

Значения:
* And
* Or


# ::stappler::sql::encodeComparation(stappler::sql::Comparation)

## BRIEF

## CONTENT

Параметры:
* stappler::sql::Comparation

Возвращает:
* Pair<stappler::StringView, bool>

# ::stappler::sql::decodeComparation(stappler::StringView)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView

Возвращает:
* Pair<stappler::sql::Comparation, bool>

# ::stappler::sql::PatternComparator<typename>

## BRIEF

## CONTENT

Параметры шаблона:
* typename T


# ::stappler::sql::PatternComparator<typename>::Type

## BRIEF

## CONTENT


# ::stappler::sql::PatternComparator<typename>::cmp

## BRIEF

## CONTENT

Тип: stappler::sql::Comparation


# ::stappler::sql::PatternComparator<typename>::value

## BRIEF

## CONTENT

Тип: Type*


# ::stappler::sql::SimpleBinder<typename>

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface

Базовые классы:
* Interface::AllocBaseType


# ::stappler::sql::SimpleBinder<typename>::writeBind(std::ostream&,data::ValueTemplate<Interface> const&)

## BRIEF

## CONTENT

Параметры:
* std::ostream&
* data::ValueTemplate<Interface> const&


# ::stappler::sql::SimpleBinder<typename>::writeBind(std::ostream&,const typename Interface::StringType&)

## BRIEF

## CONTENT

Параметры:
* std::ostream&
* const typename Interface::StringType&


# ::stappler::sql::SimpleBinder<typename>::writeBind(std::ostream&,const typename Interface::BytesType&)

## BRIEF

## CONTENT

Параметры:
* std::ostream&
* const typename Interface::BytesType&


# ::stappler::sql::SimpleBinder<typename>::writeBind(std::ostream&,PatternComparator<data::ValueTemplate<Interface>> const&)

## BRIEF

## CONTENT

Параметры:
* std::ostream&
* PatternComparator<data::ValueTemplate<Interface>> const&


# ::stappler::sql::Query<typename,typename>

## BRIEF

## CONTENT

Параметры шаблона:
* typename Binder
* typename Interface

Базовые классы:
* Interface::AllocBaseType


# ::stappler::sql::Query<typename,typename>::Stream

## BRIEF

## CONTENT

Доступ: public


# ::stappler::sql::Query<typename,typename>::String

## BRIEF

## CONTENT

Доступ: public


# ::stappler::sql::Query<typename,typename>::Distinct

## BRIEF

## CONTENT

Доступ: public

Значения:
* Distinct
* None


# ::stappler::sql::Query<typename,typename>::State

## BRIEF

## CONTENT

Доступ: public

Значения:
* None
* Init
* Some


# ::stappler::sql::Query<typename,typename>::FinalizationState

## BRIEF

## CONTENT

Доступ: public

Значения:
* None
* Parentesis
* Quote
* DoubleQuote
* Finalized


# ::stappler::sql::Query<typename,typename>::RawString

## BRIEF

## CONTENT

Доступ: public


# ::stappler::sql::Query<typename,typename>::RawString::data

## BRIEF

## CONTENT

Тип: stappler::sql::Query::String


# ::stappler::sql::Query<typename,typename>::RawStringView

## BRIEF

## CONTENT

Доступ: public


# ::stappler::sql::Query<typename,typename>::RawStringView::data

## BRIEF

## CONTENT

Тип: stappler::StringView


# ::stappler::sql::Query<typename,typename>::Field

## BRIEF

## CONTENT

Доступ: public


# ::stappler::sql::Query<typename,typename>::Field::all()

## BRIEF

## CONTENT

Возвращает:
* stappler::sql::Query::Field

# ::stappler::sql::Query<typename,typename>::Field::all(stappler::StringView const&)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView const&

Возвращает:
* stappler::sql::Query::Field

# ::stappler::sql::Query<typename,typename>::Field::Field(stappler::StringView const&)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView const&


# ::stappler::sql::Query<typename,typename>::Field::Field(char const*)

## BRIEF

## CONTENT

Параметры:
* char const*


# ::stappler::sql::Query<typename,typename>::Field::Field(std::string const&)

## BRIEF

## CONTENT

Параметры:
* std::string const&


# ::stappler::sql::Query<typename,typename>::Field::Field(memory::string const&)

## BRIEF

## CONTENT

Параметры:
* memory::string const&


# ::stappler::sql::Query<typename,typename>::Field::Field(stappler::StringView const&,bool)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView const&
* bool


# ::stappler::sql::Query<typename,typename>::Field::Field<typename,typename>(SourceString&&,FieldString&&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename SourceString
* typename FieldString

Параметры:
* SourceString&&
* FieldString&&


# ::stappler::sql::Query<typename,typename>::Field::as(char const*)

## BRIEF

## CONTENT

Параметры:
* char const*

Возвращает:
* stappler::sql::Query::Field&

# ::stappler::sql::Query<typename,typename>::Field::as(std::string const&)

## BRIEF

## CONTENT

Параметры:
* std::string const&

Возвращает:
* stappler::sql::Query::Field&

# ::stappler::sql::Query<typename,typename>::Field::as(memory::string const&)

## BRIEF

## CONTENT

Параметры:
* memory::string const&

Возвращает:
* stappler::sql::Query::Field&

# ::stappler::sql::Query<typename,typename>::Field::from(char const*)

## BRIEF

## CONTENT

Параметры:
* char const*

Возвращает:
* stappler::sql::Query::Field&

# ::stappler::sql::Query<typename,typename>::Field::from(std::string const&)

## BRIEF

## CONTENT

Параметры:
* std::string const&

Возвращает:
* stappler::sql::Query::Field&

# ::stappler::sql::Query<typename,typename>::Field::from(memory::string const&)

## BRIEF

## CONTENT

Параметры:
* memory::string const&

Возвращает:
* stappler::sql::Query::Field&

# ::stappler::sql::Query<typename,typename>::Field::source

## BRIEF

## CONTENT

Тип: stappler::StringView


# ::stappler::sql::Query<typename,typename>::Field::name

## BRIEF

## CONTENT

Тип: stappler::StringView


# ::stappler::sql::Query<typename,typename>::Field::alias

## BRIEF

## CONTENT

Тип: stappler::StringView


# ::stappler::sql::Query<typename,typename>::Field::plain

## BRIEF

## CONTENT

Тип: bool


# ::stappler::sql::Query<typename,typename>::Expand<typename>

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename Clause


# ::stappler::sql::Query<typename,typename>::Expand<typename>::fields<typename>(Clause&,stappler::sql::Query::Field const&,VArgs &&...)

## BRIEF

## CONTENT

Параметры шаблона:
* typename VArgs

Параметры:
* Clause&
* stappler::sql::Query::Field const&
* VArgs &&...


# ::stappler::sql::Query<typename,typename>::Expand<typename>::fields(Clause&,stappler::sql::Query::Field const&)

## BRIEF

## CONTENT

Параметры:
* Clause&
* stappler::sql::Query::Field const&


# ::stappler::sql::Query<typename,typename>::Expand<typename>::from<typename>(Clause&,stappler::sql::Query::Field const&,VArgs &&...)

## BRIEF

## CONTENT

Параметры шаблона:
* typename VArgs

Параметры:
* Clause&
* stappler::sql::Query::Field const&
* VArgs &&...


# ::stappler::sql::Query<typename,typename>::Expand<typename>::from(Clause&,stappler::sql::Query::Field const&)

## BRIEF

## CONTENT

Параметры:
* Clause&
* stappler::sql::Query::Field const&


# ::stappler::sql::Query<typename,typename>::Expand<typename>::values<typename,typename>(Clause&,Value&&,VArgs &&...)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Value
* typename VArgs

Параметры:
* Clause&
* Value&&
* VArgs &&...


# ::stappler::sql::Query<typename,typename>::Expand<typename>::values<typename>(Clause&,Value&&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Value

Параметры:
* Clause&
* Value&&


# ::stappler::sql::Query<typename,typename>::Expand<typename>::values(Clause&)

## BRIEF

## CONTENT

Параметры:
* Clause&


# ::stappler::sql::Query<typename,typename>::QueryHandle

## BRIEF

## CONTENT

Доступ: public


# ::stappler::sql::Query<typename,typename>::QueryHandle::query

## BRIEF

## CONTENT

Тип: Query<Binder, Interface>*


# ::stappler::sql::Query<typename,typename>::QueryHandle::state

## BRIEF

## CONTENT

Тип: stappler::sql::Query::State


# ::stappler::sql::Query<typename,typename>::QueryHandle::finalize()

## BRIEF

## CONTENT


# ::stappler::sql::Query<typename,typename>::QueryHandle::QueryHandle(Query<Binder, Interface>*,stappler::sql::Query::State)

## BRIEF

## CONTENT

Параметры:
* Query<Binder, Interface>*
* stappler::sql::Query::State


# ::stappler::sql::Query<typename,typename>::WhereClause<typename>

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename Clause

Базовые классы:
* QueryHandle


# ::stappler::sql::Query<typename,typename>::WhereClause<typename>::where<typename>(stappler::sql::Operator,stappler::sql::Query::Field const&,stappler::sql::Comparation,Value&&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Value

Параметры:
* stappler::sql::Operator
* stappler::sql::Query::Field const&
* stappler::sql::Comparation
* Value&&

Возвращает:
* Clause&

# ::stappler::sql::Query<typename,typename>::WhereClause<typename>::where<typename>(stappler::sql::Operator,stappler::sql::Query::Field const&,stappler::StringView const&,Value&&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Value

Параметры:
* stappler::sql::Operator
* stappler::sql::Query::Field const&
* stappler::StringView const&
* Value&&

Возвращает:
* Clause&

# ::stappler::sql::Query<typename,typename>::WhereClause<typename>::where<typename>(stappler::sql::Operator,stappler::sql::Query::Field const&,stappler::sql::Comparation,Value&&,Value&&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Value

Параметры:
* stappler::sql::Operator
* stappler::sql::Query::Field const&
* stappler::sql::Comparation
* Value&&
* Value&&

Возвращает:
* Clause&

# ::stappler::sql::Query<typename,typename>::WhereClause<typename>::where<typename>(stappler::sql::Operator,stappler::sql::Query::Field const&,stappler::StringView const&,Value&&,stappler::StringView const&,Value&&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Value

Параметры:
* stappler::sql::Operator
* stappler::sql::Query::Field const&
* stappler::StringView const&
* Value&&
* stappler::StringView const&
* Value&&

Возвращает:
* Clause&

# ::stappler::sql::Query<typename,typename>::WhereClause<typename>::parenthesis<typename>(stappler::sql::Operator,Callback const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Callback

Параметры:
* stappler::sql::Operator
* Callback const&

Возвращает:
* Clause&

# ::stappler::sql::Query<typename,typename>::WhereBegin

## BRIEF

## CONTENT

Доступ: public

Базовые классы:
* QueryHandle


# ::stappler::sql::Query<typename,typename>::WhereBegin::where<typename>(Args &&...)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Args

Параметры:
* Args &&...

Возвращает:
* stappler::sql::Query::WhereContinue

# ::stappler::sql::Query<typename,typename>::WhereBegin::where()

## BRIEF

## CONTENT

Возвращает:
* stappler::sql::Query::WhereContinue

# ::stappler::sql::Query<typename,typename>::WhereBegin::whereParentesis<typename>(Callback const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Callback

Параметры:
* Callback const&

Возвращает:
* stappler::sql::Query::WhereContinue

# ::stappler::sql::Query<typename,typename>::WhereContinue

## BRIEF

## CONTENT

Доступ: public

Базовые классы:
* WhereClause<WhereContinue>


# ::stappler::sql::Query<typename,typename>::SetClause<typename>

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename Clause

Базовые классы:
* QueryHandle


# ::stappler::sql::Query<typename,typename>::SetClause<typename>::set<typename>(stappler::StringView const&,Value&&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Value

Параметры:
* stappler::StringView const&
* Value&&

Возвращает:
* Clause&

# ::stappler::sql::Query<typename,typename>::SetClause<typename>::set<typename>(stappler::StringView const&,stappler::StringView const&,Value&&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Value

Параметры:
* stappler::StringView const&
* stappler::StringView const&
* Value&&

Возвращает:
* Clause&

# ::stappler::sql::Query<typename,typename>::SetClause<typename>::def(stappler::StringView const&)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView const&

Возвращает:
* Clause&

# ::stappler::sql::Query<typename,typename>::FieldsClause<typename>

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename Clause

Базовые классы:
* QueryHandle


# ::stappler::sql::Query<typename,typename>::FieldsClause<typename>::fields<typename>(stappler::sql::Query::Field const&,Args &&...)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Args

Параметры:
* stappler::sql::Query::Field const&
* Args &&...

Возвращает:
* Clause&

# ::stappler::sql::Query<typename,typename>::FieldsClause<typename>::field(stappler::sql::Query::Field const&)

## BRIEF

## CONTENT

Параметры:
* stappler::sql::Query::Field const&

Возвращает:
* Clause&

# ::stappler::sql::Query<typename,typename>::FieldsClause<typename>::aggregate(stappler::StringView const&,stappler::sql::Query::Field const&)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView const&
* stappler::sql::Query::Field const&

Возвращает:
* Clause&

# ::stappler::sql::Query<typename,typename>::GenericQuery

## BRIEF

## CONTENT

Доступ: public

Базовые классы:
* QueryHandle


# ::stappler::sql::Query<typename,typename>::GenericQuery::with<typename>(stappler::StringView const&,Callback const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Callback

Параметры:
* stappler::StringView const&
* Callback const&

Возвращает:
* stappler::sql::Query::GenericQuery&

# ::stappler::sql::Query<typename,typename>::GenericQuery::select(stappler::sql::Query::Distinct)

## BRIEF

## CONTENT

Параметры:
* stappler::sql::Query::Distinct

Возвращает:
* stappler::sql::Query::Select

# ::stappler::sql::Query<typename,typename>::GenericQuery::select<typename>(stappler::sql::Query::Field const&,Args &&...)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Args

Параметры:
* stappler::sql::Query::Field const&
* Args &&...

Возвращает:
* stappler::sql::Query::Select

# ::stappler::sql::Query<typename,typename>::GenericQuery::select<typename>(stappler::sql::Query::Distinct,stappler::sql::Query::Field const&,Args &&...)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Args

Параметры:
* stappler::sql::Query::Distinct
* stappler::sql::Query::Field const&
* Args &&...

Возвращает:
* stappler::sql::Query::Select

# ::stappler::sql::Query<typename,typename>::GenericQuery::insert(stappler::StringView const&)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView const&

Возвращает:
* stappler::sql::Query::Insert

# ::stappler::sql::Query<typename,typename>::GenericQuery::insert(stappler::StringView const&,stappler::StringView const&)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView const&
* stappler::StringView const&

Возвращает:
* stappler::sql::Query::Insert

# ::stappler::sql::Query<typename,typename>::GenericQuery::update(stappler::StringView const&)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView const&

Возвращает:
* stappler::sql::Query::Update

# ::stappler::sql::Query<typename,typename>::GenericQuery::update(stappler::StringView const&,stappler::StringView const&)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView const&
* stappler::StringView const&

Возвращает:
* stappler::sql::Query::Update

# ::stappler::sql::Query<typename,typename>::GenericQuery::remove(stappler::StringView const&)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView const&

Возвращает:
* stappler::sql::Query::Delete

# ::stappler::sql::Query<typename,typename>::GenericQuery::remove(stappler::StringView const&,stappler::StringView const&)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView const&
* stappler::StringView const&

Возвращает:
* stappler::sql::Query::Delete

# ::stappler::sql::Query<typename,typename>::Select

## BRIEF

## CONTENT

Доступ: public

Базовые классы:
* FieldsClause<Select>


# ::stappler::sql::Query<typename,typename>::Select::all()

## BRIEF

## CONTENT

Возвращает:
* stappler::sql::Query::Select&

# ::stappler::sql::Query<typename,typename>::Select::count()

## BRIEF

## CONTENT

Возвращает:
* stappler::sql::Query::Select&

# ::stappler::sql::Query<typename,typename>::Select::count(stappler::sql::Query::String const&)

## BRIEF

## CONTENT

Параметры:
* stappler::sql::Query::String const&

Возвращает:
* stappler::sql::Query::Select&

# ::stappler::sql::Query<typename,typename>::Select::from()

## BRIEF

## CONTENT

Возвращает:
* stappler::sql::Query::SelectFrom

# ::stappler::sql::Query<typename,typename>::Select::from(stappler::sql::Query::Field const&)

## BRIEF

## CONTENT

Параметры:
* stappler::sql::Query::Field const&

Возвращает:
* stappler::sql::Query::SelectFrom

# ::stappler::sql::Query<typename,typename>::Select::from<typename>(stappler::sql::Query::Field const&,Args &&...)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Args

Параметры:
* stappler::sql::Query::Field const&
* Args &&...

Возвращает:
* stappler::sql::Query::SelectFrom

# ::stappler::sql::Query<typename,typename>::SelectFrom

## BRIEF

## CONTENT

Доступ: public

Базовые классы:
* QueryHandle


# ::stappler::sql::Query<typename,typename>::SelectFrom::from(stappler::sql::Query::Field const&)

## BRIEF

## CONTENT

Параметры:
* stappler::sql::Query::Field const&

Возвращает:
* stappler::sql::Query::SelectFrom&

# ::stappler::sql::Query<typename,typename>::SelectFrom::from<typename>(stappler::sql::Query::Field const&,Args &&...)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Args

Параметры:
* stappler::sql::Query::Field const&
* Args &&...

Возвращает:
* stappler::sql::Query::SelectFrom&

# ::stappler::sql::Query<typename,typename>::SelectFrom::innerJoinOn<typename>(stappler::StringView const&,Callback const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Callback

Параметры:
* stappler::StringView const&
* Callback const&

Возвращает:
* stappler::sql::Query::SelectFrom&

# ::stappler::sql::Query<typename,typename>::SelectFrom::leftJoinOn<typename>(stappler::StringView const&,Callback const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Callback

Параметры:
* stappler::StringView const&
* Callback const&

Возвращает:
* stappler::sql::Query::SelectFrom&

# ::stappler::sql::Query<typename,typename>::SelectFrom::rightJoinOn<typename>(stappler::StringView const&,Callback const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Callback

Параметры:
* stappler::StringView const&
* Callback const&

Возвращает:
* stappler::sql::Query::SelectFrom&

# ::stappler::sql::Query<typename,typename>::SelectFrom::fullJoinOn<typename>(stappler::StringView const&,Callback const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Callback

Параметры:
* stappler::StringView const&
* Callback const&

Возвращает:
* stappler::sql::Query::SelectFrom&

# ::stappler::sql::Query<typename,typename>::SelectFrom::where<typename>(Args &&...)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Args

Параметры:
* Args &&...

Возвращает:
* stappler::sql::Query::SelectWhere

# ::stappler::sql::Query<typename,typename>::SelectFrom::where()

## BRIEF

## CONTENT

Возвращает:
* stappler::sql::Query::SelectWhere

# ::stappler::sql::Query<typename,typename>::SelectFrom::group(stappler::sql::Query::Field const&)

## BRIEF

## CONTENT

Параметры:
* stappler::sql::Query::Field const&

Возвращает:
* stappler::sql::Query::SelectGroup

# ::stappler::sql::Query<typename,typename>::SelectFrom::order(stappler::sql::Ordering,stappler::sql::Query::Field const&,stappler::sql::Nulls)

## BRIEF

## CONTENT

Параметры:
* stappler::sql::Ordering
* stappler::sql::Query::Field const&
* stappler::sql::Nulls

Возвращает:
* stappler::sql::Query::SelectOrder

# ::stappler::sql::Query<typename,typename>::SelectFrom::forUpdate()

## BRIEF

## CONTENT


# ::stappler::sql::Query<typename,typename>::SelectGroup

## BRIEF

## CONTENT

Доступ: public

Базовые классы:
* QueryHandle


# ::stappler::sql::Query<typename,typename>::SelectGroup::fields<typename>(stappler::sql::Query::Field const&,Args &&...)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Args

Параметры:
* stappler::sql::Query::Field const&
* Args &&...

Возвращает:
* stappler::sql::Query::SelectGroup&

# ::stappler::sql::Query<typename,typename>::SelectGroup::field(stappler::sql::Query::Field const&)

## BRIEF

## CONTENT

Параметры:
* stappler::sql::Query::Field const&

Возвращает:
* stappler::sql::Query::SelectGroup&

# ::stappler::sql::Query<typename,typename>::SelectGroup::order(stappler::sql::Ordering,stappler::sql::Query::Field const&,stappler::sql::Nulls)

## BRIEF

## CONTENT

Параметры:
* stappler::sql::Ordering
* stappler::sql::Query::Field const&
* stappler::sql::Nulls

Возвращает:
* stappler::sql::Query::SelectOrder

# ::stappler::sql::Query<typename,typename>::SelectWhere

## BRIEF

## CONTENT

Доступ: public

Базовые классы:
* WhereClause<SelectWhere>


# ::stappler::sql::Query<typename,typename>::SelectWhere::group(stappler::sql::Query::Field const&)

## BRIEF

## CONTENT

Параметры:
* stappler::sql::Query::Field const&

Возвращает:
* stappler::sql::Query::SelectGroup

# ::stappler::sql::Query<typename,typename>::SelectWhere::order(stappler::sql::Ordering,stappler::sql::Query::Field const&,stappler::sql::Nulls)

## BRIEF

## CONTENT

Параметры:
* stappler::sql::Ordering
* stappler::sql::Query::Field const&
* stappler::sql::Nulls

Возвращает:
* stappler::sql::Query::SelectOrder

# ::stappler::sql::Query<typename,typename>::SelectWhere::forUpdate()

## BRIEF

## CONTENT


# ::stappler::sql::Query<typename,typename>::SelectOrder

## BRIEF

## CONTENT

Доступ: public

Базовые классы:
* QueryHandle


# ::stappler::sql::Query<typename,typename>::SelectOrder::limit(size_t,size_t)

## BRIEF

## CONTENT

Параметры:
* size_t
* size_t

Возвращает:
* stappler::sql::Query::SelectPost

# ::stappler::sql::Query<typename,typename>::SelectOrder::limit(size_t)

## BRIEF

## CONTENT

Параметры:
* size_t

Возвращает:
* stappler::sql::Query::SelectPost

# ::stappler::sql::Query<typename,typename>::SelectOrder::offset(size_t)

## BRIEF

## CONTENT

Параметры:
* size_t

Возвращает:
* stappler::sql::Query::SelectPost

# ::stappler::sql::Query<typename,typename>::SelectOrder::forUpdate()

## BRIEF

## CONTENT


# ::stappler::sql::Query<typename,typename>::SelectPost

## BRIEF

## CONTENT

Доступ: public

Базовые классы:
* QueryHandle


# ::stappler::sql::Query<typename,typename>::SelectPost::forUpdate()

## BRIEF

## CONTENT


# ::stappler::sql::Query<typename,typename>::Insert

## BRIEF

## CONTENT

Доступ: public

Базовые классы:
* FieldsClause<Insert>


# ::stappler::sql::Query<typename,typename>::Insert::values<typename>(Args &&...)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Args

Параметры:
* Args &&...

Возвращает:
* stappler::sql::Query::InsertValues

# ::stappler::sql::Query<typename,typename>::InsertValues

## BRIEF

## CONTENT

Доступ: public

Базовые классы:
* QueryHandle


# ::stappler::sql::Query<typename,typename>::InsertValues::value<typename>(Value&&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Value

Параметры:
* Value&&

Возвращает:
* stappler::sql::Query::InsertValues&

# ::stappler::sql::Query<typename,typename>::InsertValues::def()

## BRIEF

## CONTENT

Возвращает:
* stappler::sql::Query::InsertValues&

# ::stappler::sql::Query<typename,typename>::InsertValues::values<typename>(Args &&...)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Args

Параметры:
* Args &&...

Возвращает:
* stappler::sql::Query::InsertValues&

# ::stappler::sql::Query<typename,typename>::InsertValues::onConflict(stappler::StringView const&)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView const&

Возвращает:
* stappler::sql::Query::InsertConflict

# ::stappler::sql::Query<typename,typename>::InsertValues::onConflictDoNothing()

## BRIEF

## CONTENT

Возвращает:
* stappler::sql::Query::InsertPostConflict

# ::stappler::sql::Query<typename,typename>::InsertValues::returning()

## BRIEF

## CONTENT

Возвращает:
* stappler::sql::Query::Returning

# ::stappler::sql::Query<typename,typename>::InsertValues::next()

## BRIEF

## CONTENT

Возвращает:
* stappler::sql::Query::InsertValues

# ::stappler::sql::Query<typename,typename>::InsertConflict

## BRIEF

## CONTENT

Доступ: public

Базовые классы:
* QueryHandle


# ::stappler::sql::Query<typename,typename>::InsertConflict::doNothing()

## BRIEF

## CONTENT

Возвращает:
* stappler::sql::Query::InsertPostConflict

# ::stappler::sql::Query<typename,typename>::InsertConflict::doUpdate()

## BRIEF

## CONTENT

Возвращает:
* stappler::sql::Query::InsertUpdateValues

# ::stappler::sql::Query<typename,typename>::InsertUpdateValues

## BRIEF

## CONTENT

Доступ: public

Базовые классы:
* SetClause<InsertUpdateValues>


# ::stappler::sql::Query<typename,typename>::InsertUpdateValues::excluded(stappler::StringView)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView

Возвращает:
* stappler::sql::Query::InsertUpdateValues&

# ::stappler::sql::Query<typename,typename>::InsertUpdateValues::excluded(stappler::StringView,stappler::StringView)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView
* stappler::StringView

Возвращает:
* stappler::sql::Query::InsertUpdateValues&

# ::stappler::sql::Query<typename,typename>::InsertUpdateValues::where<typename>(Args &&...)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Args

Параметры:
* Args &&...

Возвращает:
* stappler::sql::Query::InsertWhereValues

# ::stappler::sql::Query<typename,typename>::InsertUpdateValues::where()

## BRIEF

## CONTENT

Возвращает:
* stappler::sql::Query::InsertWhereValues

# ::stappler::sql::Query<typename,typename>::InsertUpdateValues::returning()

## BRIEF

## CONTENT

Возвращает:
* stappler::sql::Query::Returning

# ::stappler::sql::Query<typename,typename>::InsertWhereValues

## BRIEF

## CONTENT

Доступ: public

Базовые классы:
* WhereClause<InsertWhereValues>


# ::stappler::sql::Query<typename,typename>::InsertWhereValues::returning()

## BRIEF

## CONTENT

Возвращает:
* stappler::sql::Query::Returning

# ::stappler::sql::Query<typename,typename>::InsertPostConflict

## BRIEF

## CONTENT

Доступ: public

Базовые классы:
* QueryHandle


# ::stappler::sql::Query<typename,typename>::InsertPostConflict::returning()

## BRIEF

## CONTENT

Возвращает:
* stappler::sql::Query::Returning

# ::stappler::sql::Query<typename,typename>::Update

## BRIEF

## CONTENT

Доступ: public

Базовые классы:
* SetClause<Update>


# ::stappler::sql::Query<typename,typename>::Update::where<typename>(Args &&...)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Args

Параметры:
* Args &&...

Возвращает:
* stappler::sql::Query::UpdateWhere

# ::stappler::sql::Query<typename,typename>::Update::where()

## BRIEF

## CONTENT

Возвращает:
* stappler::sql::Query::UpdateWhere

# ::stappler::sql::Query<typename,typename>::Update::returning()

## BRIEF

## CONTENT

Возвращает:
* stappler::sql::Query::Returning

# ::stappler::sql::Query<typename,typename>::UpdateWhere

## BRIEF

## CONTENT

Доступ: public

Базовые классы:
* WhereClause<UpdateWhere>


# ::stappler::sql::Query<typename,typename>::UpdateWhere::returning()

## BRIEF

## CONTENT

Возвращает:
* stappler::sql::Query::Returning

# ::stappler::sql::Query<typename,typename>::Delete

## BRIEF

## CONTENT

Доступ: public

Базовые классы:
* QueryHandle


# ::stappler::sql::Query<typename,typename>::Delete::where<typename>(Args &&...)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Args

Параметры:
* Args &&...

Возвращает:
* stappler::sql::Query::DeleteWhere

# ::stappler::sql::Query<typename,typename>::Delete::where()

## BRIEF

## CONTENT

Возвращает:
* stappler::sql::Query::DeleteWhere

# ::stappler::sql::Query<typename,typename>::Delete::returning()

## BRIEF

## CONTENT

Возвращает:
* stappler::sql::Query::Returning

# ::stappler::sql::Query<typename,typename>::DeleteWhere

## BRIEF

## CONTENT

Доступ: public

Базовые классы:
* WhereClause<DeleteWhere>


# ::stappler::sql::Query<typename,typename>::DeleteWhere::returning()

## BRIEF

## CONTENT

Возвращает:
* stappler::sql::Query::Returning

# ::stappler::sql::Query<typename,typename>::Returning

## BRIEF

## CONTENT

Доступ: public

Базовые классы:
* FieldsClause<Returning>


# ::stappler::sql::Query<typename,typename>::Returning::all()

## BRIEF

## CONTENT

Возвращает:
* stappler::sql::Query::Returning&

# ::stappler::sql::Query<typename,typename>::Returning::count()

## BRIEF

## CONTENT

Возвращает:
* stappler::sql::Query::Returning&

# ::stappler::sql::Query<typename,typename>::Returning::count(stappler::StringView const&)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView const&

Возвращает:
* stappler::sql::Query::Returning&

# ::stappler::sql::Query<typename,typename>::Query()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::sql::Query<typename,typename>::setProfile(stappler::sql::Profile)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::sql::Profile


# ::stappler::sql::Query<typename,typename>::with<typename>(stappler::StringView const&,Callback const&)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename Callback

Параметры:
* stappler::StringView const&
* Callback const&

Возвращает:
* stappler::sql::Query::GenericQuery

# ::stappler::sql::Query<typename,typename>::select(stappler::sql::Query::Distinct)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::sql::Query::Distinct

Возвращает:
* stappler::sql::Query::Select

# ::stappler::sql::Query<typename,typename>::select<typename>(stappler::sql::Query::Field const&,Args &&...)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename Args

Параметры:
* stappler::sql::Query::Field const&
* Args &&...

Возвращает:
* stappler::sql::Query::Select

# ::stappler::sql::Query<typename,typename>::select<typename>(stappler::sql::Query::Distinct,stappler::sql::Query::Field const&,Args &&...)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename Args

Параметры:
* stappler::sql::Query::Distinct
* stappler::sql::Query::Field const&
* Args &&...

Возвращает:
* stappler::sql::Query::Select

# ::stappler::sql::Query<typename,typename>::insert(stappler::StringView const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView const&

Возвращает:
* stappler::sql::Query::Insert

# ::stappler::sql::Query<typename,typename>::insert(stappler::StringView const&,stappler::StringView const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView const&
* stappler::StringView const&

Возвращает:
* stappler::sql::Query::Insert

# ::stappler::sql::Query<typename,typename>::update(stappler::StringView const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView const&

Возвращает:
* stappler::sql::Query::Update

# ::stappler::sql::Query<typename,typename>::update(stappler::StringView const&,stappler::StringView const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView const&
* stappler::StringView const&

Возвращает:
* stappler::sql::Query::Update

# ::stappler::sql::Query<typename,typename>::remove(stappler::StringView const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView const&

Возвращает:
* stappler::sql::Query::Delete

# ::stappler::sql::Query<typename,typename>::remove(stappler::StringView const&,stappler::StringView const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView const&
* stappler::StringView const&

Возвращает:
* stappler::sql::Query::Delete

# ::stappler::sql::Query<typename,typename>::finalize()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::sql::Query<typename,typename>::writeBind<typename>(Value&&)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename Value

Параметры:
* Value&&


# ::stappler::sql::Query<typename,typename>::writeBind(stappler::sql::Query::RawString const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::sql::Query::RawString const&


# ::stappler::sql::Query<typename,typename>::writeBind(stappler::sql::Query::RawStringView const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::sql::Query::RawStringView const&


# ::stappler::sql::Query<typename,typename>::writeBind(Callback<void (stappler::sql::Query::Select &)> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Callback<void (stappler::sql::Query::Select &)> const&


# ::stappler::sql::Query<typename,typename>::writeBind(stappler::sql::Query::Field const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::sql::Query::Field const&


# ::stappler::sql::Query<typename,typename>::writeBind(stappler::sql::Query::Field const&,bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::sql::Query::Field const&
* bool


# ::stappler::sql::Query<typename,typename>::writeBind(stappler::StringView const&,stappler::sql::Query::Field const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView const&
* stappler::sql::Query::Field const&


# ::stappler::sql::Query<typename,typename>::getStream()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Stream&

# ::stappler::sql::Query<typename,typename>::getBinder()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Binder&

# ::stappler::sql::Query<typename,typename>::getTarget() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::StringView

# ::stappler::sql::Query<typename,typename>::finalization

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::sql::Query::FinalizationState


# ::stappler::sql::Query<typename,typename>::binder

## BRIEF

## CONTENT

Доступ: protected

Тип: Binder


# ::stappler::sql::Query<typename,typename>::stream

## BRIEF

## CONTENT

Доступ: protected

Тип: Stream


# ::stappler::sql::Query<typename,typename>::target

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::StringView


# ::stappler::sql::Query<typename,typename>::subquery

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::sql::Query<typename,typename>::profile

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::sql::Profile


# ::stappler::sql::BinderTraits<typename,typename,typename>

## BRIEF

## CONTENT

Параметры шаблона:
* typename Binder
* typename Interface
* typename Value


# ::stappler::sql::BinderTraits<typename,typename,typename>::writeBind<typename>(Query<Binder, Interface>&,Binder&,V&&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename V

Параметры:
* Query<Binder, Interface>&
* Binder&
* V&&


# ::stappler::sql::BinderTraits<Binder,Interface,typenameQuery<Binder,Interface>::Field>::BinderTraits<Binder,Interface,typenameQuery<Binder,Interface>::Field>

## BRIEF

## CONTENT

Параметры шаблона:
* typename Binder
* typename Interface


# ::stappler::sql::BinderTraits<Binder,Interface,typenameQuery<Binder,Interface>::Field>::writeBind(Query<Binder, Interface>&,Binder&,const typename Query<Binder, Interface>::Field&)

## BRIEF

## CONTENT

Параметры:
* Query<Binder, Interface>&
* Binder&
* const typename Query<Binder, Interface>::Field&


# ::stappler::sql::BinderTraits<Binder,Interface,typenameQuery<Binder,Interface>::RawString>::BinderTraits<Binder,Interface,typenameQuery<Binder,Interface>::RawString>

## BRIEF

## CONTENT

Параметры шаблона:
* typename Binder
* typename Interface


# ::stappler::sql::BinderTraits<Binder,Interface,typenameQuery<Binder,Interface>::RawString>::writeBind(Query<Binder, Interface>&,Binder&,const typename Query<Binder, Interface>::RawString&)

## BRIEF

## CONTENT

Параметры:
* Query<Binder, Interface>&
* Binder&
* const typename Query<Binder, Interface>::RawString&


# ::stappler::sql::BinderTraits<Binder,Interface,typenameQuery<Binder,Interface>::RawStringView>::BinderTraits<Binder,Interface,typenameQuery<Binder,Interface>::RawStringView>

## BRIEF

## CONTENT

Параметры шаблона:
* typename Binder
* typename Interface


# ::stappler::sql::BinderTraits<Binder,Interface,typenameQuery<Binder,Interface>::RawStringView>::writeBind(Query<Binder, Interface>&,Binder&,const typename Query<Binder, Interface>::RawStringView&)

## BRIEF

## CONTENT

Параметры:
* Query<Binder, Interface>&
* Binder&
* const typename Query<Binder, Interface>::RawStringView&


# ::stappler::sql::BinderTraits<Binder,Interface,Callback<void(typenameQuery<Binder,Interface>::Select&)>>::BinderTraits<Binder,Interface,Callback<void(typenameQuery<Binder,Interface>::Select&)>>

## BRIEF

## CONTENT

Параметры шаблона:
* typename Binder
* typename Interface


# ::stappler::sql::BinderTraits<Binder,Interface,Callback<void(typenameQuery<Binder,Interface>::Select&)>>::writeBind(Query<Binder, Interface>&,Binder&,Callback<void (typename Query<Binder, Interface>::Select &)> const&)

## BRIEF

## CONTENT

Параметры:
* Query<Binder, Interface>&
* Binder&
* Callback<void (typename Query<Binder, Interface>::Select &)> const&


# ::stappler::sql::QueryHandle::finalize()

## BRIEF

## CONTENT


# ::stappler::sql::Query<typename,typename>::writeBind<typename,typename,typename>(Value&&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Value
* typename Binder
* typename Interface

Параметры:
* Value&&


# ::stappler::sql::Query<typename,typename>::writeBind(stappler::sql::Query::RawString const&)

## BRIEF

## CONTENT

Параметры:
* stappler::sql::Query::RawString const&


# ::stappler::sql::Query<typename,typename>::writeBind(stappler::sql::Query::RawStringView const&)

## BRIEF

## CONTENT

Параметры:
* stappler::sql::Query::RawStringView const&


# ::stappler::sql::Query<typename,typename>::writeBind(Callback<void (stappler::sql::Query::Select &)> const&)

## BRIEF

## CONTENT

Параметры:
* Callback<void (stappler::sql::Query::Select &)> const&


# ::stappler::sql::Query<typename,typename>::writeBind(stappler::sql::Query::Field const&)

## BRIEF

## CONTENT

Параметры:
* stappler::sql::Query::Field const&


# ::stappler::sql::Query<typename,typename>::writeBind(stappler::sql::Query::Field const&,bool)

## BRIEF

## CONTENT

Параметры:
* stappler::sql::Query::Field const&
* bool


# ::stappler::sql::Query<typename,typename>::writeBind(stappler::StringView const&,stappler::sql::Query::Field const&)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView const&
* stappler::sql::Query::Field const&


# ::stappler::sql::Query<typename,typename>::getStream()

## BRIEF

## CONTENT

Возвращает:
* typename Query<Binder, Interface>::Stream&

# ::stappler::sql::Query<typename,typename>::getBinder()

## BRIEF

## CONTENT

Возвращает:
* Binder&

# ::stappler::sql::Query<typename,typename>::getTarget() const

## BRIEF

## CONTENT

Возвращает:
* stappler::StringView

# ::stappler::sql::Query<typename,typename>::finalize()

## BRIEF

## CONTENT


# ::stappler::sql::Query<typename,typename>::with<typename,typename,typename>(stappler::StringView const&,Callback const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Callback
* typename Binder
* typename Interface

Параметры:
* stappler::StringView const&
* Callback const&

Возвращает:
* stappler::sql::Query::GenericQuery

# ::stappler::sql::GenericQuery::with<typename,typename,typename>(stappler::StringView const&,Callback const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Callback
* typename Binder
* typename Interface

Параметры:
* stappler::StringView const&
* Callback const&

Возвращает:
* stappler::sql::Query::GenericQuery&

# ::stappler::sql::GenericQuery::select(stappler::sql::Query::Distinct)

## BRIEF

## CONTENT

Параметры:
* stappler::sql::Query::Distinct

Возвращает:
* stappler::sql::Query::Select

# ::stappler::sql::GenericQuery::select<typename,typename,typename>(stappler::sql::Query::Field const&,Args &&...)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Args
* typename Binder
* typename Interface

Параметры:
* stappler::sql::Query::Field const&
* Args &&...

Возвращает:
* stappler::sql::Query::Select

# ::stappler::sql::GenericQuery::select<typename,typename,typename>(stappler::sql::Query::Distinct,stappler::sql::Query::Field const&,Args &&...)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Args
* typename Binder
* typename Interface

Параметры:
* stappler::sql::Query::Distinct
* stappler::sql::Query::Field const&
* Args &&...

Возвращает:
* stappler::sql::Query::Select

# ::stappler::sql::GenericQuery::insert(stappler::StringView const&)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView const&

Возвращает:
* stappler::sql::Query::Insert

# ::stappler::sql::GenericQuery::insert(stappler::StringView const&,stappler::StringView const&)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView const&
* stappler::StringView const&

Возвращает:
* stappler::sql::Query::Insert

# ::stappler::sql::GenericQuery::update(stappler::StringView const&)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView const&

Возвращает:
* stappler::sql::Query::Update

# ::stappler::sql::GenericQuery::update(stappler::StringView const&,stappler::StringView const&)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView const&
* stappler::StringView const&

Возвращает:
* stappler::sql::Query::Update

# ::stappler::sql::GenericQuery::remove(stappler::StringView const&)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView const&

Возвращает:
* stappler::sql::Query::Delete

# ::stappler::sql::GenericQuery::remove(stappler::StringView const&,stappler::StringView const&)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView const&
* stappler::StringView const&

Возвращает:
* stappler::sql::Query::Delete