Title: STSqlQuery.h


# MODULES_DB_SQL_STSQLQUERY_H_

## BRIEF

## CONTENT


# ::stappler::db::sql::SqlQuery

## BRIEF

## CONTENT

Базовые классы:
* stappler::sql::Query<db::Binder,Interface>


# ::stappler::db::sql::SqlQuery::Context

## BRIEF

## CONTENT

Доступ: public

Базовые классы:
* FieldResolver


# ::stappler::db::sql::SqlQuery::Context::Context(stappler::db::sql::SqlQuery&,stappler::db::Scheme const&,stappler::db::Worker const&,db::Query const&)

## BRIEF

## CONTENT

Параметры:
* stappler::db::sql::SqlQuery&
* stappler::db::Scheme const&
* stappler::db::Worker const&
* db::Query const&


# ::stappler::db::sql::SqlQuery::Context::_this

## BRIEF

## CONTENT

Тип: stappler::db::sql::SqlQuery*


# ::stappler::db::sql::SqlQuery::Context::hasAltLimit

## BRIEF

## CONTENT

Тип: bool


# ::stappler::db::sql::SqlQuery::Context::softLimitIsFts

## BRIEF

## CONTENT

Тип: bool


# ::stappler::db::sql::SqlQuery::Context::softLimitField

## BRIEF

## CONTENT

Тип: stappler::StringView


# ::stappler::db::sql::SqlQuery::Context::getAlt(stappler::StringView)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView

Возвращает:
* stappler::StringView

# ::stappler::db::sql::SqlQuery::TypeString

## BRIEF

## CONTENT

Доступ: public


# ::stappler::db::sql::SqlQuery::SqlQuery(db::QueryInterface*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* db::QueryInterface*


# ::stappler::db::sql::SqlQuery::clear()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::db::sql::SqlQuery::writeQuery(stappler::db::sql::SqlQuery::Context&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::sql::SqlQuery::Context&

Возвращает:
* bool

# ::stappler::db::sql::SqlQuery::writeQuery(stappler::db::sql::SqlQuery::Context&,db::Scheme const&,uint64_t,db::Field const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::sql::SqlQuery::Context&
* db::Scheme const&
* uint64_t
* db::Field const&

Возвращает:
* bool

# ::stappler::db::sql::SqlQuery::writeWhere(SqlQuery::SelectWhere&,db::Operator,db::Scheme const&,db::Query const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* SqlQuery::SelectWhere&
* db::Operator
* db::Scheme const&
* db::Query const&


# ::stappler::db::sql::SqlQuery::writeWhere(SqlQuery::WhereContinue&,db::Operator,db::Scheme const&,db::Query const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* SqlQuery::WhereContinue&
* db::Operator
* db::Scheme const&
* db::Query const&


# ::stappler::db::sql::SqlQuery::writeWhere(SqlQuery::WhereContinue&,db::Operator,db::Scheme const&,db::Query::Select const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* SqlQuery::WhereContinue&
* db::Operator
* db::Scheme const&
* db::Query::Select const&


# ::stappler::db::sql::SqlQuery::writeWhere(SqlQuery::WhereContinue&,db::Operator,db::Scheme const&,db::Worker::ConditionData const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* SqlQuery::WhereContinue&
* db::Operator
* db::Scheme const&
* db::Worker::ConditionData const&


# ::stappler::db::sql::SqlQuery::writeOrdering(SqlQuery::SelectFrom&,db::Scheme const&,db::Query const&,bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* SqlQuery::SelectFrom&
* db::Scheme const&
* db::Query const&
* bool


# ::stappler::db::sql::SqlQuery::writeSelectFrom(stappler::sql::Query<stappler::db::Binder, stappler::memory::PoolInterface>::GenericQuery&,db::QueryList::Item const&,bool,stappler::StringView const&,stappler::StringView const&,bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::sql::Query<stappler::db::Binder, stappler::memory::PoolInterface>::GenericQuery&
* db::QueryList::Item const&
* bool
* stappler::StringView const&
* stappler::StringView const&
* bool

Возвращает:
* stappler::sql::Query<stappler::db::Binder, stappler::memory::PoolInterface>::SelectFrom

# ::stappler::db::sql::SqlQuery::writeSelectFrom(stappler::sql::Query<stappler::db::Binder, stappler::memory::PoolInterface>::Select&,stappler::db::sql::SqlQuery::Context&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::sql::Query<stappler::db::Binder, stappler::memory::PoolInterface>::Select&
* stappler::db::sql::SqlQuery::Context&

Возвращает:
* stappler::sql::Query<stappler::db::Binder, stappler::memory::PoolInterface>::SelectFrom

# ::stappler::db::sql::SqlQuery::writeQueryReqest(SqlQuery::SelectFrom&,db::QueryList::Item const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* SqlQuery::SelectFrom&
* db::QueryList::Item const&


# ::stappler::db::sql::SqlQuery::writeQueryListItem(stappler::sql::Query<stappler::db::Binder, stappler::memory::PoolInterface>::GenericQuery&,db::QueryList const&,size_t,bool,db::Field const*,bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::sql::Query<stappler::db::Binder, stappler::memory::PoolInterface>::GenericQuery&
* db::QueryList const&
* size_t
* bool
* db::Field const*
* bool


# ::stappler::db::sql::SqlQuery::writeQueryList(db::QueryList const&,bool,size_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* db::QueryList const&
* bool
* size_t


# ::stappler::db::sql::SqlQuery::writeQueryFile(db::QueryList const&,db::Field const*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* db::QueryList const&
* db::Field const*


# ::stappler::db::sql::SqlQuery::writeQueryArray(db::QueryList const&,db::Field const*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* db::QueryList const&
* db::Field const*


# ::stappler::db::sql::SqlQuery::writeQueryDelta(db::Scheme const&,stappler::Time const&,Set<const db::Field *> const&,bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* db::Scheme const&
* stappler::Time const&
* Set<const db::Field *> const&
* bool


# ::stappler::db::sql::SqlQuery::writeQueryViewDelta(db::QueryList const&,stappler::Time const&,Set<const db::Field *> const&,bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* db::QueryList const&
* stappler::Time const&
* Set<const db::Field *> const&
* bool


# ::stappler::db::sql::SqlQuery::getQuery() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::mem_pool::StringStream const&

# ::stappler::db::sql::SqlQuery::getInterface() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* db::QueryInterface*

# ::stappler::db::sql::SqlQuery::writeFullTextRank(stappler::sql::Query<stappler::db::Binder, stappler::memory::PoolInterface>::Select&,db::Scheme const&,db::Query const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::sql::Query<stappler::db::Binder, stappler::memory::PoolInterface>::Select&
* db::Scheme const&
* db::Query const&


# ::stappler::db::sql::SqlQuery::getFullTextQuery(db::Scheme const&,db::Field const&,db::Query::Select const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* db::Scheme const&
* db::Field const&
* db::Query::Select const&

Возвращает:
* stappler::StringView

# ::stappler::db::sql::SqlQuery::_fulltextQueries

## BRIEF

## CONTENT

Доступ: protected

Тип: Map<stappler::sql::Query<stappler::db::Binder, stappler::memory::PoolInterface>::String, stappler::sql::Query<stappler::db::Binder, stappler::memory::PoolInterface>::String>
