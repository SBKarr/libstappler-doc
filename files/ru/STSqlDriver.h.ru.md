Title: STSqlDriver.h


# MODULES_DB_SQL_STSQLDRIVER_H_

## BRIEF

## CONTENT


# ::stappler::db::sql::Driver

## BRIEF

## CONTENT

Базовые классы:
* AllocBase


# ::stappler::db::sql::Driver::Handle

## BRIEF

## CONTENT

Доступ: public


# ::stappler::db::sql::Driver::Result

## BRIEF

## CONTENT

Доступ: public


# ::stappler::db::sql::Driver::Connection

## BRIEF

## CONTENT

Доступ: public


# ::stappler::db::sql::Driver::open(stappler::mempool::base::pool_t*,stappler::StringView,void const*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::mempool::base::pool_t*
* stappler::StringView
* void const*

Возвращает:
* stappler::db::sql::Driver*

# ::stappler::db::sql::Driver::~Driver()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::db::sql::Driver::getDriverName() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::StringView

# ::stappler::db::sql::Driver::init(stappler::db::sql::Driver::Handle,Vector<stappler::StringView> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::sql::Driver::Handle
* Vector<stappler::StringView> const&

Возвращает:
* bool

# ::stappler::db::sql::Driver::performWithStorage(stappler::db::sql::Driver::Handle,Callback<void (const db::Adapter &)> const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::sql::Driver::Handle
* Callback<void (const db::Adapter &)> const&


# ::stappler::db::sql::Driver::acquireInterface(stappler::db::sql::Driver::Handle,stappler::mempool::base::pool_t*) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::sql::Driver::Handle
* stappler::mempool::base::pool_t*

Возвращает:
* stappler::db::BackendInterface*

# ::stappler::db::sql::Driver::connect(Map<stappler::StringView, stappler::StringView> const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Map<stappler::StringView, stappler::StringView> const&

Возвращает:
* Handle

# ::stappler::db::sql::Driver::finish(stappler::db::sql::Driver::Handle) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::sql::Driver::Handle


# ::stappler::db::sql::Driver::getConnection(stappler::db::sql::Driver::Handle) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::sql::Driver::Handle

Возвращает:
* Connection

# ::stappler::db::sql::Driver::isValid(stappler::db::sql::Driver::Handle) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::sql::Driver::Handle

Возвращает:
* bool

# ::stappler::db::sql::Driver::isValid(stappler::db::sql::Driver::Connection) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::sql::Driver::Connection

Возвращает:
* bool

# ::stappler::db::sql::Driver::isIdle(stappler::db::sql::Driver::Connection) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::sql::Driver::Connection

Возвращает:
* bool

# ::stappler::db::sql::Driver::listenForNotifications(stappler::db::sql::Driver::Handle) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::sql::Driver::Handle

Возвращает:
* int

# ::stappler::db::sql::Driver::consumeNotifications(stappler::db::sql::Driver::Handle,Callback<void (stappler::StringView)> const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::sql::Driver::Handle
* Callback<void (stappler::StringView)> const&

Возвращает:
* bool

# ::stappler::db::sql::Driver::isNotificationsSupported() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::db::sql::Driver::setDbCtrl(Function<void (bool)>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Function<void (bool)>&&


# ::stappler::db::sql::Driver::_driverPath

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::StringView


# ::stappler::db::sql::Driver::_dbCtrl

## BRIEF

## CONTENT

Доступ: protected

Тип: Function<void (bool)>
