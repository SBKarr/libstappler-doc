Title: STSqliteHandle.h


# MODULES_DB_SQLITE_STSQLITEHANDLE_H_

## BRIEF

## CONTENT


# ::stappler::db::sqlite::TransactionLevel

## BRIEF

## CONTENT

Значения:
* Deferred
* Immediate
* Exclusive


# ::stappler::db::sqlite::Handle

## BRIEF

## CONTENT

Базовые классы:
* db::sql::SqlHandle


# ::stappler::db::sqlite::Handle::Handle(stappler::db::sqlite::Driver const*,Driver::Handle)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::sqlite::Driver const*
* Driver::Handle


# ::stappler::db::sqlite::Handle::Handle(stappler::db::sqlite::Handle const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::sqlite::Handle const&


# ::stappler::db::sqlite::Handle::operator=(stappler::db::sqlite::Handle const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::sqlite::Handle const&

Возвращает:
* stappler::db::sqlite::Handle&

# ::stappler::db::sqlite::Handle::Handle(stappler::db::sqlite::Handle&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::sqlite::Handle&&


# ::stappler::db::sqlite::Handle::operator=(stappler::db::sqlite::Handle&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::sqlite::Handle&&

Возвращает:
* stappler::db::sqlite::Handle&

# ::stappler::db::sqlite::Handle::operator bool() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::db::sqlite::Handle::getDriver() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::db::sqlite::Driver const*

# ::stappler::db::sqlite::Handle::getHandle() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Driver::Handle

# ::stappler::db::sqlite::Handle::getConnection() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Driver::Connection

# ::stappler::db::sqlite::Handle::makeQuery(Callback<void (sql::SqlQuery &)> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Callback<void (sql::SqlQuery &)> const&


# ::stappler::db::sqlite::Handle::selectQuery(db::sql::SqlQuery const&,Callback<bool (sql::Result &)> const&,Callback<void (const stappler::mem_pool::Value &)> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* db::sql::SqlQuery const&
* Callback<bool (sql::Result &)> const&
* Callback<void (const stappler::mem_pool::Value &)> const&

Возвращает:
* bool

# ::stappler::db::sqlite::Handle::performSimpleQuery(stappler::StringView const&,Callback<void (const stappler::mem_pool::Value &)> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView const&
* Callback<void (const stappler::mem_pool::Value &)> const&

Возвращает:
* bool

# ::stappler::db::sqlite::Handle::performSimpleSelect(stappler::StringView const&,Callback<void (sql::Result &)> const&,Callback<void (const stappler::mem_pool::Value &)> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView const&
* Callback<void (sql::Result &)> const&
* Callback<void (const stappler::mem_pool::Value &)> const&

Возвращает:
* bool

# ::stappler::db::sqlite::Handle::isSuccess() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::db::sqlite::Handle::close()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::db::sqlite::Handle::init(BackendInterface::Config const&,Map<stappler::StringView, const stappler::db::sql::SqlHandle::Scheme *> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* BackendInterface::Config const&
* Map<stappler::StringView, const stappler::db::sql::SqlHandle::Scheme *> const&

Возвращает:
* bool

# ::stappler::db::sqlite::Handle::beginTransaction()

## BRIEF

## CONTENT

Доступ: protected

Возвращает:
* bool

# ::stappler::db::sqlite::Handle::endTransaction()

## BRIEF

## CONTENT

Доступ: protected

Возвращает:
* bool

# ::stappler::db::sqlite::Handle::ViewIdVec

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::db::sqlite::Handle::driver

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::db::sqlite::Driver const*


# ::stappler::db::sqlite::Handle::handle

## BRIEF

## CONTENT

Доступ: protected

Тип: Driver::Handle


# ::stappler::db::sqlite::Handle::conn

## BRIEF

## CONTENT

Доступ: protected

Тип: Driver::Connection


# ::stappler::db::sqlite::Handle::lastError

## BRIEF

## CONTENT

Доступ: protected

Тип: int


# ::stappler::db::sqlite::Handle::level

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::db::sqlite::TransactionLevel


# ::stappler::db::sqlite::Handle::_profile

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::sql::Profile
