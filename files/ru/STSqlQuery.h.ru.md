Title: STSqlQuery.h


# STAPPLER_DB_SQL_STSQLQUERY_H_

## BRIEF

Заголовок базовой структуры SQL-запроса

## CONTENT

Заголовок базовой структуры SQL-запроса


# ::stappler::db::sql::SqlQuery

## BRIEF

Базовая структура SQL-запроса

## CONTENT

Базовая структура SQL-запроса. Эта структура служит для построениясложных SQL запросов на оснвое требований пользователя. Используется в качестве вспомогательного типа для SQL-соединений.

Базовые классы:
* stappler::sql::Query<db::Binder,Interface>


# ::stappler::db::sql::SqlQuery::Context

## BRIEF

Структура контекста запроса

## CONTENT

Доступ: public

Структура контекста запроса. Содержит данные для раскрытия полей запроса и структуру самого запроса.

Базовые классы:
* FieldResolver


# ::stappler::db::sql::SqlQuery::Context::Context(stappler::db::sql::SqlQuery&,stappler::db::Scheme const&,stappler::db::Worker const&,db::Query const&)

## BRIEF

Создаёт новый контекст

## CONTENT

Создаёт новый контекст

Параметры:
* stappler::db::sql::SqlQuery&
* stappler::db::Scheme const&
* stappler::db::Worker const&
* db::Query const&


# ::stappler::db::sql::SqlQuery::Context::_this

## BRIEF

Запрос для этого контекста

## CONTENT

Запрос для этого контекста

Тип: stappler::db::sql::SqlQuery*


# ::stappler::db::sql::SqlQuery::Context::hasAltLimit

## BRIEF

Флаг наличия альтернативного поля для мягкого лимита

## CONTENT

Флаг наличия альтернативного поля для мягкого лимита

Тип: bool


# ::stappler::db::sql::SqlQuery::Context::softLimitIsFts

## BRIEF

Флаг, показывающий, что для мягкого лимита используется полнотекстовый ранг

## CONTENT

Флаг, показывающий, что для мягкого лимита используется полнотекстовый ранг

Тип: bool


# ::stappler::db::sql::SqlQuery::Context::softLimitField

## BRIEF

Поле для мягкого лимита

## CONTENT

Поле для мягкого лимита

Тип: stappler::StringView


# ::stappler::db::sql::SqlQuery::Context::getAlt(stappler::StringView)

## BRIEF

Возвращает альтернативное поле для мягкого лимита

## CONTENT

Возвращает альтернативное поле для мягкого лимита

Параметры:
* stappler::StringView

Возвращает:
* stappler::StringView

# ::stappler::db::sql::SqlQuery::TypeString

## BRIEF

Типизированная строка в SQL

## CONTENT

Доступ: public

Типизированная строка в SQL

# ::stappler::db::sql::SqlQuery::SqlQuery(db::QueryInterface*)

## BRIEF

Начинает запись запроса для интерфейса

## CONTENT

Доступ: public

Начинает запись запроса для интерфейса

Параметры:
* db::QueryInterface*


# ::stappler::db::sql::SqlQuery::clear()

## BRIEF

Очищает запрос

## CONTENT

Доступ: public

Очищает запрос

# ::stappler::db::sql::SqlQuery::writeQuery(stappler::db::sql::SqlQuery::Context&)

## BRIEF

Записывает запрос для контекста

## CONTENT

Доступ: public

Записывает запрос для контекста

Параметры:
* stappler::db::sql::SqlQuery::Context&

Возвращает:
* bool

# ::stappler::db::sql::SqlQuery::writeQuery(stappler::db::sql::SqlQuery::Context&,db::Scheme const&,uint64_t,db::Field const&)

## BRIEF

Записывает запрос для контекста по отношению к отдельному объекту

## CONTENT

Доступ: public

Записывает запрос для контекста по отношению к отдельному объекту

Параметры:
* stappler::db::sql::SqlQuery::Context&
* db::Scheme const&
* uint64_t
* db::Field const&

Возвращает:
* bool

# ::stappler::db::sql::SqlQuery::writeWhere(SqlQuery::SelectWhere&,db::Operator,db::Scheme const&,db::Query const&)

## BRIEF

Записывает условную часть запроса

## CONTENT

Доступ: public

Записывает условную часть запроса

Параметры:
* SqlQuery::SelectWhere&
* db::Operator
* db::Scheme const&
* db::Query const&


# ::stappler::db::sql::SqlQuery::writeWhere(SqlQuery::WhereContinue&,db::Operator,db::Scheme const&,db::Query const&)

## BRIEF

Записывает условную часть запроса

## CONTENT

Доступ: public

Записывает условную часть запроса

Параметры:
* SqlQuery::WhereContinue&
* db::Operator
* db::Scheme const&
* db::Query const&


# ::stappler::db::sql::SqlQuery::writeWhere(SqlQuery::WhereContinue&,db::Operator,db::Scheme const&,db::Query::Select const&)

## BRIEF

Записывает условную часть запроса

## CONTENT

Доступ: public

Записывает условную часть запроса

Параметры:
* SqlQuery::WhereContinue&
* db::Operator
* db::Scheme const&
* db::Query::Select const&


# ::stappler::db::sql::SqlQuery::writeWhere(SqlQuery::WhereContinue&,db::Operator,db::Scheme const&,db::Worker::ConditionData const&)

## BRIEF

Записывает условную часть запроса

## CONTENT

Доступ: public

Записывает условную часть запроса

Параметры:
* SqlQuery::WhereContinue&
* db::Operator
* db::Scheme const&
* db::Worker::ConditionData const&


# ::stappler::db::sql::SqlQuery::writeOrdering(SqlQuery::SelectFrom&,db::Scheme const&,db::Query const&,bool)

## BRIEF

Записывает упорядочивание запроса

## CONTENT

Доступ: public

Записывает упорядочивание запроса

Параметры:
* SqlQuery::SelectFrom&
* db::Scheme const&
* db::Query const&
* bool


# ::stappler::db::sql::SqlQuery::writeSelectFrom(stappler::sql::Query<stappler::db::Binder, stappler::memory::PoolInterface>::GenericQuery&,db::QueryList::Item const&,bool,stappler::StringView const&,stappler::StringView const&,bool)

## BRIEF

Записывает исходные таблицы для запроса

## CONTENT

Доступ: public

Записывает исходные таблицы для запроса

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

Записывает исходные таблицы для запроса

## CONTENT

Доступ: public

Записывает исходные таблицы для запроса

Параметры:
* stappler::sql::Query<stappler::db::Binder, stappler::memory::PoolInterface>::Select&
* stappler::db::sql::SqlQuery::Context&

Возвращает:
* stappler::sql::Query<stappler::db::Binder, stappler::memory::PoolInterface>::SelectFrom

# ::stappler::db::sql::SqlQuery::writeQueryReqest(SqlQuery::SelectFrom&,db::QueryList::Item const&)

## BRIEF

Записывает подзапрос для иерарзического списка запросов

## CONTENT

Доступ: public

Записывает подзапрос для иерарзического списка запросов

Параметры:
* SqlQuery::SelectFrom&
* db::QueryList::Item const&


# ::stappler::db::sql::SqlQuery::writeQueryListItem(stappler::sql::Query<stappler::db::Binder, stappler::memory::PoolInterface>::GenericQuery&,db::QueryList const&,size_t,bool,db::Field const*,bool)

## BRIEF

Записывает подзапрос для иерарзического списка запросов

## CONTENT

Доступ: public

Записывает подзапрос для иерарзического списка запросов

Параметры:
* stappler::sql::Query<stappler::db::Binder, stappler::memory::PoolInterface>::GenericQuery&
* db::QueryList const&
* size_t
* bool
* db::Field const*
* bool


# ::stappler::db::sql::SqlQuery::writeQueryList(db::QueryList const&,bool,size_t)

## BRIEF

Записывает запрос на основе иерархического списка запросов

## CONTENT

Доступ: public

Записывает запрос на основе иерархического списка запросов

Параметры:
* db::QueryList const&
* bool
* size_t


# ::stappler::db::sql::SqlQuery::writeQueryFile(db::QueryList const&,db::Field const*)

## BRIEF

Записывает запрос к фейловому полю

## CONTENT

Доступ: public

Записывает запрос к фейловому полю

Параметры:
* db::QueryList const&
* db::Field const*


# ::stappler::db::sql::SqlQuery::writeQueryArray(db::QueryList const&,db::Field const*)

## BRIEF

Записывает запрос к полю-массиву

## CONTENT

Доступ: public

Записывает запрос к полю-массиву

Параметры:
* db::QueryList const&
* db::Field const*


# ::stappler::db::sql::SqlQuery::writeQueryDelta(db::Scheme const&,stappler::Time const&,Set<const db::Field *> const&,bool)

## BRIEF

Записывает дельта-запрос

## CONTENT

Доступ: public

Записывает дельта-запрос

Параметры:
* db::Scheme const&
* stappler::Time const&
* Set<const db::Field *> const&
* bool


# ::stappler::db::sql::SqlQuery::writeQueryViewDelta(db::QueryList const&,stappler::Time const&,Set<const db::Field *> const&,bool)

## BRIEF

Записывает дельта-запрос

## CONTENT

Доступ: public

Записывает дельта-запрос

Параметры:
* db::QueryList const&
* stappler::Time const&
* Set<const db::Field *> const&
* bool


# ::stappler::db::sql::SqlQuery::getQuery() const

## BRIEF

Возвращает текст SQL-запроса

## CONTENT

Доступ: public

Возвращает текст SQL-запроса

Возвращает:
* stappler::mem_pool::StringStream const&

# ::stappler::db::sql::SqlQuery::getInterface() const

## BRIEF

Возвращает интерфейс соединения с БД

## CONTENT

Доступ: public

Возвращает интерфейс соединения с БД

Возвращает:
* db::QueryInterface*

# ::stappler::db::sql::SqlQuery::writeFullTextRank(stappler::sql::Query<stappler::db::Binder, stappler::memory::PoolInterface>::Select&,db::Scheme const&,db::Query const&)

## BRIEF

Записывает запрос для полнотекстового поиска

## CONTENT

Доступ: public

Записывает запрос для полнотекстового поиска

Параметры:
* stappler::sql::Query<stappler::db::Binder, stappler::memory::PoolInterface>::Select&
* db::Scheme const&
* db::Query const&


# ::stappler::db::sql::SqlQuery::getFullTextQuery(db::Scheme const&,db::Field const&,db::Query::Select const&)

## BRIEF

Записывает запрос для полнотекстового поиска

## CONTENT

Доступ: public

Записывает запрос для полнотекстового поиска

Параметры:
* db::Scheme const&
* db::Field const&
* db::Query::Select const&

Возвращает:
* stappler::StringView

# ::stappler::db::sql::SqlQuery::_fulltextQueries

## BRIEF

Индексирвоанный список полнотекстовых запросов

## CONTENT

Доступ: protected

Индексирвоанный список полнотекстовых запросов

Тип: Map<stappler::sql::Query<stappler::db::Binder, stappler::memory::PoolInterface>::String, stappler::sql::Query<stappler::db::Binder, stappler::memory::PoolInterface>::String>
