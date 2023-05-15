Title: SPSqlWhere.hpp


# MODULES_SQL_SPSQLWHERE_HPP_

## BRIEF

## CONTENT


# ::stappler::sql::Query_writeOperator<typename>(Stream&,stappler::sql::Operator)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Stream

Параметры:
* Stream&
* stappler::sql::Operator


# ::stappler::sql::Query_writeFieldName<typename>(typename Interface::StringStreamType&,stappler::StringView const&,bool)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface

Параметры:
* typename Interface::StringStreamType&
* stappler::StringView const&
* bool

Возвращает:
* typename Interface::StringStreamType&

# ::stappler::sql::Query_writeComparationStr<typename,typename,typename>(Query<Binder, Interface>&,typename Interface::StringStreamType&,const typename Query<Binder, Interface>::Field&,stappler::StringView const&,Value1&&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Binder
* typename Interface
* typename Value1

Параметры:
* Query<Binder, Interface>&
* typename Interface::StringStreamType&
* const typename Query<Binder, Interface>::Field&
* stappler::StringView const&
* Value1&&


# ::stappler::sql::Query_writeComparationStr<typename,typename,typename,typename>(Query<Binder, Interface>&,typename Interface::StringStreamType&,const typename Query<Binder, Interface>::Field&,stappler::StringView const&,Value1&&,stappler::StringView const&,Value2&&,stappler::StringView const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Binder
* typename Interface
* typename Value1
* typename Value2

Параметры:
* Query<Binder, Interface>&
* typename Interface::StringStreamType&
* const typename Query<Binder, Interface>::Field&
* stappler::StringView const&
* Value1&&
* stappler::StringView const&
* Value2&&
* stappler::StringView const&


# ::stappler::sql::Query_writeComparationBetween<typename,typename,typename,typename>(Query<Binder, Interface>&,typename Interface::StringStreamType&,const typename Query<Binder, Interface>::Field&,Value1&&,Value2&&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Binder
* typename Interface
* typename Value1
* typename Value2

Параметры:
* Query<Binder, Interface>&
* typename Interface::StringStreamType&
* const typename Query<Binder, Interface>::Field&
* Value1&&
* Value2&&


# ::stappler::sql::Query_writeComparationStrNoArg<typename,typename>(Query<Binder, Interface>&,typename Interface::StringStreamType&,const typename Query<Binder, Interface>::Field&,stappler::StringView const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Binder
* typename Interface

Параметры:
* Query<Binder, Interface>&
* typename Interface::StringStreamType&
* const typename Query<Binder, Interface>::Field&
* stappler::StringView const&


# ::stappler::sql::Query_writeComparation<typename,typename,typename>(Query<Binder, Interface>&,typename Interface::StringStreamType&,const typename Query<Binder, Interface>::Field&,stappler::sql::Comparation,Value1&&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Binder
* typename Interface
* typename Value1

Параметры:
* Query<Binder, Interface>&
* typename Interface::StringStreamType&
* const typename Query<Binder, Interface>::Field&
* stappler::sql::Comparation
* Value1&&


# ::stappler::sql::makePatternComparator<typename>(stappler::sql::Comparation,T&&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename T

Параметры:
* stappler::sql::Comparation
* T&&

Возвращает:
* PatternComparator<T>

# ::stappler::sql::Query_writeComparation<typename,typename,typename,typename>(Query<Binder, Interface>&,typename Interface::StringStreamType&,const typename Query<Binder, Interface>::Field&,stappler::sql::Comparation,Value1&&,Value2&&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Binder
* typename Interface
* typename Value1
* typename Value2

Параметры:
* Query<Binder, Interface>&
* typename Interface::StringStreamType&
* const typename Query<Binder, Interface>::Field&
* stappler::sql::Comparation
* Value1&&
* Value2&&


# ::stappler::sql::WhereClause<typename>::where<typename,typename,typename,typename>(stappler::sql::Operator,stappler::sql::Query::Field const&,stappler::sql::Comparation,Value&&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Value
* typename Binder
* typename Interface
* typename Clause

Параметры:
* stappler::sql::Operator
* stappler::sql::Query::Field const&
* stappler::sql::Comparation
* Value&&

Возвращает:
* Clause&

# ::stappler::sql::WhereClause<typename>::where<typename,typename,typename,typename>(stappler::sql::Operator,stappler::sql::Query::Field const&,stappler::StringView const&,Value&&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Value
* typename Binder
* typename Interface
* typename Clause

Параметры:
* stappler::sql::Operator
* stappler::sql::Query::Field const&
* stappler::StringView const&
* Value&&

Возвращает:
* Clause&

# ::stappler::sql::WhereClause<typename>::where<typename,typename,typename,typename>(stappler::sql::Operator,stappler::sql::Query::Field const&,stappler::sql::Comparation,Value&&,Value&&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Value
* typename Binder
* typename Interface
* typename Clause

Параметры:
* stappler::sql::Operator
* stappler::sql::Query::Field const&
* stappler::sql::Comparation
* Value&&
* Value&&

Возвращает:
* Clause&

# ::stappler::sql::WhereClause<typename>::where<typename,typename,typename,typename>(stappler::sql::Operator,stappler::sql::Query::Field const&,stappler::StringView const&,Value&&,stappler::StringView const&,Value&&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Value
* typename Binder
* typename Interface
* typename Clause

Параметры:
* stappler::sql::Operator
* stappler::sql::Query::Field const&
* stappler::StringView const&
* Value&&
* stappler::StringView const&
* Value&&

Возвращает:
* Clause&

# ::stappler::sql::WhereClause<typename>::parenthesis<typename,typename,typename,typename>(stappler::sql::Operator,Callback const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Callback
* typename Binder
* typename Interface
* typename Clause

Параметры:
* stappler::sql::Operator
* Callback const&

Возвращает:
* Clause&

# ::stappler::sql::WhereBegin::where<typename,typename,typename>(Args &&...)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Args
* typename Binder
* typename Interface

Параметры:
* Args &&...

Возвращает:
* stappler::sql::Query::WhereContinue

# ::stappler::sql::WhereBegin::where()

## BRIEF

## CONTENT

Возвращает:
* stappler::sql::Query::WhereContinue

# ::stappler::sql::WhereBegin::whereParentesis<typename,typename,typename>(Callback const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Callback
* typename Binder
* typename Interface

Параметры:
* Callback const&

Возвращает:
* stappler::sql::Query::WhereContinue

# ::stappler::sql::SetClause<typename>::set<typename,typename,typename,typename>(stappler::StringView const&,Value&&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Value
* typename Binder
* typename Interface
* typename Clause

Параметры:
* stappler::StringView const&
* Value&&

Возвращает:
* Clause&

# ::stappler::sql::SetClause<typename>::set<typename,typename,typename,typename>(stappler::StringView const&,stappler::StringView const&,Value&&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Value
* typename Binder
* typename Interface
* typename Clause

Параметры:
* stappler::StringView const&
* stappler::StringView const&
* Value&&

Возвращает:
* Clause&

# ::stappler::sql::SetClause<typename>::def(stappler::StringView const&)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView const&

Возвращает:
* Clause&