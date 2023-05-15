Title: STSqlHandle.h


# MODULES_DB_SQL_STSQLHANDLE_H_

## BRIEF

## CONTENT


# ::stappler::db::sql::Result

## BRIEF

## CONTENT


# ::stappler::db::sql::SqlHandle

## BRIEF

## CONTENT

Базовые классы:
* db::BackendInterface


# ::stappler::db::sql::SqlHandle::Scheme

## BRIEF

## CONTENT

Доступ: public


# ::stappler::db::sql::SqlHandle::Worker

## BRIEF

## CONTENT

Доступ: public


# ::stappler::db::sql::SqlHandle::Field

## BRIEF

## CONTENT

Доступ: public


# ::stappler::db::sql::SqlHandle::Operator

## BRIEF

## CONTENT

Доступ: public


# ::stappler::db::sql::SqlHandle::Comparation

## BRIEF

## CONTENT

Доступ: public


# ::stappler::db::sql::SqlHandle::QueryList

## BRIEF

## CONTENT

Доступ: public


# ::stappler::db::sql::SqlHandle::getKeyValueSchemeName()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::StringView

# ::stappler::db::sql::SqlHandle::getNameForDelta(stappler::db::sql::SqlHandle::Scheme const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::sql::SqlHandle::Scheme const&

Возвращает:
* stappler::mem_pool::String

# ::stappler::db::sql::SqlHandle::set(stappler::CoderSource const&,stappler::mem_pool::Value const&,stappler::TimeInterval)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::CoderSource const&
* stappler::mem_pool::Value const&
* stappler::TimeInterval

Возвращает:
* bool

# ::stappler::db::sql::SqlHandle::get(stappler::CoderSource const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::CoderSource const&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::sql::SqlHandle::clear(stappler::CoderSource const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::CoderSource const&

Возвращает:
* bool

# ::stappler::db::sql::SqlHandle::authorizeUser(db::Auth const&,stappler::StringView const&,stappler::StringView const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* db::Auth const&
* stappler::StringView const&
* stappler::StringView const&

Возвращает:
* db::User*

# ::stappler::db::sql::SqlHandle::isNotificationsSupported() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::db::sql::SqlHandle::makeSessionsCleanup()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::db::sql::SqlHandle::finalizeBroadcast()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::db::sql::SqlHandle::processBroadcasts(Callback<void (stappler::BytesView)> const&,int64_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Callback<void (stappler::BytesView)> const&
* int64_t

Возвращает:
* int64_t

# ::stappler::db::sql::SqlHandle::broadcast(stappler::mem_pool::Bytes const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::mem_pool::Bytes const&


# ::stappler::db::sql::SqlHandle::getDeltaValue(stappler::db::sql::SqlHandle::Scheme const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::sql::SqlHandle::Scheme const&

Возвращает:
* int64_t

# ::stappler::db::sql::SqlHandle::getDeltaValue(stappler::db::sql::SqlHandle::Scheme const&,db::FieldView const&,uint64_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::sql::SqlHandle::Scheme const&
* db::FieldView const&
* uint64_t

Возвращает:
* int64_t

# ::stappler::db::sql::SqlHandle::getHistory(stappler::db::sql::SqlHandle::Scheme const&,stappler::Time const&,bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::sql::SqlHandle::Scheme const&
* stappler::Time const&
* bool

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::sql::SqlHandle::getHistory(db::FieldView const&,stappler::db::sql::SqlHandle::Scheme const*,uint64_t,stappler::Time const&,bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* db::FieldView const&
* stappler::db::sql::SqlHandle::Scheme const*
* uint64_t
* stappler::Time const&
* bool

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::sql::SqlHandle::getDeltaData(stappler::db::sql::SqlHandle::Scheme const&,stappler::Time const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::sql::SqlHandle::Scheme const&
* stappler::Time const&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::sql::SqlHandle::getDeltaData(stappler::db::sql::SqlHandle::Scheme const&,db::FieldView const&,stappler::Time const&,uint64_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::sql::SqlHandle::Scheme const&
* db::FieldView const&
* stappler::Time const&
* uint64_t

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::sql::SqlHandle::makeQuery(stappler::Callback<void (SqlQuery &)> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::Callback<void (SqlQuery &)> const&


# ::stappler::db::sql::SqlHandle::selectQuery(stappler::db::sql::SqlQuery const&,Callback<bool (stappler::db::sql::Result &)> const&,Callback<void (const stappler::mem_pool::Value &)> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::sql::SqlQuery const&
* Callback<bool (stappler::db::sql::Result &)> const&
* Callback<void (const stappler::mem_pool::Value &)> const&

Возвращает:
* bool

# ::stappler::db::sql::SqlHandle::performSimpleQuery(stappler::StringView const&,Callback<void (const stappler::mem_pool::Value &)> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView const&
* Callback<void (const stappler::mem_pool::Value &)> const&

Возвращает:
* bool

# ::stappler::db::sql::SqlHandle::performSimpleSelect(stappler::StringView const&,Callback<void (stappler::db::sql::Result &)> const&,Callback<void (const stappler::mem_pool::Value &)> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView const&
* Callback<void (stappler::db::sql::Result &)> const&
* Callback<void (const stappler::mem_pool::Value &)> const&

Возвращает:
* bool

# ::stappler::db::sql::SqlHandle::isSuccess() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::db::sql::SqlHandle::foreach(stappler::db::sql::SqlHandle::Worker&,stappler::db::Query const&,Callback<bool (stappler::mem_pool::Value &)> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::sql::SqlHandle::Worker&
* stappler::db::Query const&
* Callback<bool (stappler::mem_pool::Value &)> const&

Возвращает:
* bool

# ::stappler::db::sql::SqlHandle::select(stappler::db::sql::SqlHandle::Worker&,db::Query const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::sql::SqlHandle::Worker&
* db::Query const&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::sql::SqlHandle::create(stappler::db::sql::SqlHandle::Worker&,stappler::mem_pool::Value&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::sql::SqlHandle::Worker&
* stappler::mem_pool::Value&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::sql::SqlHandle::save(stappler::db::sql::SqlHandle::Worker&,uint64_t,stappler::mem_pool::Value const&,Vector<stappler::mem_pool::String> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::sql::SqlHandle::Worker&
* uint64_t
* stappler::mem_pool::Value const&
* Vector<stappler::mem_pool::String> const&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::sql::SqlHandle::patch(stappler::db::sql::SqlHandle::Worker&,uint64_t,stappler::mem_pool::Value const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::sql::SqlHandle::Worker&
* uint64_t
* stappler::mem_pool::Value const&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::sql::SqlHandle::remove(stappler::db::sql::SqlHandle::Worker&,uint64_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::sql::SqlHandle::Worker&
* uint64_t

Возвращает:
* bool

# ::stappler::db::sql::SqlHandle::count(stappler::db::sql::SqlHandle::Worker&,db::Query const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::sql::SqlHandle::Worker&
* db::Query const&

Возвращает:
* size_t

# ::stappler::db::sql::SqlHandle::field(db::Action,stappler::db::sql::SqlHandle::Worker&,uint64_t,stappler::db::sql::SqlHandle::Field const&,stappler::mem_pool::Value&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* db::Action
* stappler::db::sql::SqlHandle::Worker&
* uint64_t
* stappler::db::sql::SqlHandle::Field const&
* stappler::mem_pool::Value&&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::sql::SqlHandle::field(db::Action,stappler::db::sql::SqlHandle::Worker&,stappler::mem_pool::Value const&,stappler::db::sql::SqlHandle::Field const&,stappler::mem_pool::Value&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* db::Action
* stappler::db::sql::SqlHandle::Worker&
* stappler::mem_pool::Value const&
* stappler::db::sql::SqlHandle::Field const&
* stappler::mem_pool::Value&&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::sql::SqlHandle::performQueryListForIds(stappler::db::sql::SqlHandle::QueryList const&,size_t)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::db::sql::SqlHandle::QueryList const&
* size_t

Возвращает:
* Vector<int64_t>

# ::stappler::db::sql::SqlHandle::performQueryList(stappler::db::sql::SqlHandle::QueryList const&,size_t,bool)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::db::sql::SqlHandle::QueryList const&
* size_t
* bool

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::sql::SqlHandle::removeFromView(db::FieldView const&,stappler::db::sql::SqlHandle::Scheme const*,uint64_t)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* db::FieldView const&
* stappler::db::sql::SqlHandle::Scheme const*
* uint64_t

Возвращает:
* bool

# ::stappler::db::sql::SqlHandle::addToView(db::FieldView const&,stappler::db::sql::SqlHandle::Scheme const*,uint64_t,stappler::mem_pool::Value const&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* db::FieldView const&
* stappler::db::sql::SqlHandle::Scheme const*
* uint64_t
* stappler::mem_pool::Value const&

Возвращает:
* bool

# ::stappler::db::sql::SqlHandle::getReferenceParents(stappler::db::sql::SqlHandle::Scheme const&,uint64_t,stappler::db::sql::SqlHandle::Scheme const*,stappler::db::sql::SqlHandle::Field const*)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::db::sql::SqlHandle::Scheme const&
* uint64_t
* stappler::db::sql::SqlHandle::Scheme const*
* stappler::db::sql::SqlHandle::Field const*

Возвращает:
* Vector<int64_t>

# ::stappler::db::sql::SqlHandle::selectQueryId(stappler::db::sql::SqlQuery const&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::db::sql::SqlQuery const&

Возвращает:
* int64_t

# ::stappler::db::sql::SqlHandle::performQuery(stappler::db::sql::SqlQuery const&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::db::sql::SqlQuery const&

Возвращает:
* size_t

# ::stappler::db::sql::SqlHandle::selectValueQuery(stappler::db::sql::SqlHandle::Scheme const&,stappler::db::sql::SqlQuery const&,Vector<const stappler::db::sql::SqlHandle::Field *> const&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::db::sql::SqlHandle::Scheme const&
* stappler::db::sql::SqlQuery const&
* Vector<const stappler::db::sql::SqlHandle::Field *> const&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::sql::SqlHandle::selectValueQuery(stappler::db::sql::SqlHandle::Field const&,stappler::db::sql::SqlQuery const&,Vector<const stappler::db::sql::SqlHandle::Field *> const&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::db::sql::SqlHandle::Field const&
* stappler::db::sql::SqlQuery const&
* Vector<const stappler::db::sql::SqlHandle::Field *> const&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::sql::SqlHandle::selectValueQuery(stappler::mem_pool::Value&,stappler::db::FieldView const&,stappler::db::sql::SqlQuery const&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::mem_pool::Value&
* stappler::db::FieldView const&
* stappler::db::sql::SqlQuery const&


# ::stappler::db::sql::SqlHandle::getFileField(stappler::db::sql::SqlHandle::Worker&,stappler::db::sql::SqlQuery&,uint64_t,uint64_t,stappler::db::sql::SqlHandle::Field const&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::db::sql::SqlHandle::Worker&
* stappler::db::sql::SqlQuery&
* uint64_t
* uint64_t
* stappler::db::sql::SqlHandle::Field const&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::sql::SqlHandle::getFileCount(stappler::db::sql::SqlHandle::Worker&,stappler::db::sql::SqlQuery&,uint64_t,uint64_t,stappler::db::sql::SqlHandle::Field const&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::db::sql::SqlHandle::Worker&
* stappler::db::sql::SqlQuery&
* uint64_t
* uint64_t
* stappler::db::sql::SqlHandle::Field const&

Возвращает:
* size_t

# ::stappler::db::sql::SqlHandle::getArrayField(stappler::db::sql::SqlHandle::Worker&,stappler::db::sql::SqlQuery&,uint64_t,stappler::db::sql::SqlHandle::Field const&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::db::sql::SqlHandle::Worker&
* stappler::db::sql::SqlQuery&
* uint64_t
* stappler::db::sql::SqlHandle::Field const&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::sql::SqlHandle::getArrayCount(stappler::db::sql::SqlHandle::Worker&,stappler::db::sql::SqlQuery&,uint64_t,stappler::db::sql::SqlHandle::Field const&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::db::sql::SqlHandle::Worker&
* stappler::db::sql::SqlQuery&
* uint64_t
* stappler::db::sql::SqlHandle::Field const&

Возвращает:
* size_t

# ::stappler::db::sql::SqlHandle::getObjectField(stappler::db::sql::SqlHandle::Worker&,stappler::db::sql::SqlQuery&,uint64_t,uint64_t,stappler::db::sql::SqlHandle::Field const&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::db::sql::SqlHandle::Worker&
* stappler::db::sql::SqlQuery&
* uint64_t
* uint64_t
* stappler::db::sql::SqlHandle::Field const&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::sql::SqlHandle::getObjectCount(stappler::db::sql::SqlHandle::Worker&,stappler::db::sql::SqlQuery&,uint64_t,uint64_t,stappler::db::sql::SqlHandle::Field const&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::db::sql::SqlHandle::Worker&
* stappler::db::sql::SqlQuery&
* uint64_t
* uint64_t
* stappler::db::sql::SqlHandle::Field const&

Возвращает:
* size_t

# ::stappler::db::sql::SqlHandle::getSetField(stappler::db::sql::SqlHandle::Worker&,stappler::db::sql::SqlQuery&,uint64_t,stappler::db::sql::SqlHandle::Field const&,db::Query const&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::db::sql::SqlHandle::Worker&
* stappler::db::sql::SqlQuery&
* uint64_t
* stappler::db::sql::SqlHandle::Field const&
* db::Query const&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::sql::SqlHandle::getSetCount(stappler::db::sql::SqlHandle::Worker&,stappler::db::sql::SqlQuery&,uint64_t,stappler::db::sql::SqlHandle::Field const&,db::Query const&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::db::sql::SqlHandle::Worker&
* stappler::db::sql::SqlQuery&
* uint64_t
* stappler::db::sql::SqlHandle::Field const&
* db::Query const&

Возвращает:
* size_t

# ::stappler::db::sql::SqlHandle::getViewField(stappler::db::sql::SqlHandle::Worker&,stappler::db::sql::SqlQuery&,uint64_t,stappler::db::sql::SqlHandle::Field const&,db::Query const&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::db::sql::SqlHandle::Worker&
* stappler::db::sql::SqlQuery&
* uint64_t
* stappler::db::sql::SqlHandle::Field const&
* db::Query const&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::sql::SqlHandle::getViewCount(stappler::db::sql::SqlHandle::Worker&,stappler::db::sql::SqlQuery&,uint64_t,stappler::db::sql::SqlHandle::Field const&,db::Query const&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::db::sql::SqlHandle::Worker&
* stappler::db::sql::SqlQuery&
* uint64_t
* stappler::db::sql::SqlHandle::Field const&
* db::Query const&

Возвращает:
* size_t

# ::stappler::db::sql::SqlHandle::getSimpleField(stappler::db::sql::SqlHandle::Worker&,stappler::db::sql::SqlQuery&,uint64_t,stappler::db::sql::SqlHandle::Field const&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::db::sql::SqlHandle::Worker&
* stappler::db::sql::SqlQuery&
* uint64_t
* stappler::db::sql::SqlHandle::Field const&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::sql::SqlHandle::getSimpleCount(stappler::db::sql::SqlHandle::Worker&,stappler::db::sql::SqlQuery&,uint64_t,stappler::db::sql::SqlHandle::Field const&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::db::sql::SqlHandle::Worker&
* stappler::db::sql::SqlQuery&
* uint64_t
* stappler::db::sql::SqlHandle::Field const&

Возвращает:
* size_t

# ::stappler::db::sql::SqlHandle::insertIntoSet(stappler::db::sql::SqlQuery&,stappler::db::sql::SqlHandle::Scheme const&,int64_t,db::FieldObject const&,stappler::db::sql::SqlHandle::Field const&,stappler::mem_pool::Value const&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::db::sql::SqlQuery&
* stappler::db::sql::SqlHandle::Scheme const&
* int64_t
* db::FieldObject const&
* stappler::db::sql::SqlHandle::Field const&
* stappler::mem_pool::Value const&

Возвращает:
* bool

# ::stappler::db::sql::SqlHandle::insertIntoArray(stappler::db::sql::SqlQuery&,stappler::db::sql::SqlHandle::Scheme const&,int64_t,stappler::db::sql::SqlHandle::Field const&,stappler::mem_pool::Value&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::db::sql::SqlQuery&
* stappler::db::sql::SqlHandle::Scheme const&
* int64_t
* stappler::db::sql::SqlHandle::Field const&
* stappler::mem_pool::Value&

Возвращает:
* bool

# ::stappler::db::sql::SqlHandle::insertIntoRefSet(stappler::db::sql::SqlQuery&,stappler::db::sql::SqlHandle::Scheme const&,int64_t,stappler::db::sql::SqlHandle::Field const&,Vector<int64_t> const&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::db::sql::SqlQuery&
* stappler::db::sql::SqlHandle::Scheme const&
* int64_t
* stappler::db::sql::SqlHandle::Field const&
* Vector<int64_t> const&

Возвращает:
* bool

# ::stappler::db::sql::SqlHandle::cleanupRefSet(stappler::db::sql::SqlQuery&,stappler::db::sql::SqlHandle::Scheme const&,uint64_t,stappler::db::sql::SqlHandle::Field const&,Vector<int64_t> const&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::db::sql::SqlQuery&
* stappler::db::sql::SqlHandle::Scheme const&
* uint64_t
* stappler::db::sql::SqlHandle::Field const&
* Vector<int64_t> const&

Возвращает:
* bool

# ::stappler::db::sql::SqlHandle::performPostUpdate(db::Transaction const&,stappler::db::sql::SqlQuery&,stappler::db::sql::SqlHandle::Scheme const&,stappler::mem_pool::Value&,int64_t,stappler::mem_pool::Value const&,bool)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* db::Transaction const&
* stappler::db::sql::SqlQuery&
* stappler::db::sql::SqlHandle::Scheme const&
* stappler::mem_pool::Value&
* int64_t
* stappler::mem_pool::Value const&
* bool


# ::stappler::db::sql::SqlHandle::_bcasts

## BRIEF

## CONTENT

Доступ: protected

Тип: Vector<stappler::Pair<stappler::Time, Bytes>>
