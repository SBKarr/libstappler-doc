Title: STStorageAdapter.h


# MODULES_DB_STSTORAGEADAPTER_H_

## BRIEF

## CONTENT


# ::stappler::db::Adapter

## BRIEF

## CONTENT

Базовые классы:
* AllocBase


# ::stappler::db::Adapter::FromContext()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::db::Adapter

# ::stappler::db::Adapter::Adapter(stappler::db::BackendInterface*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::BackendInterface*


# ::stappler::db::Adapter::Adapter(stappler::db::Adapter const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::Adapter const&


# ::stappler::db::Adapter::operator=(stappler::db::Adapter const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::Adapter const&

Возвращает:
* stappler::db::Adapter&

# ::stappler::db::Adapter::operator bool() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::db::Adapter::operator==(stappler::db::Adapter const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::Adapter const&

Возвращает:
* bool

# ::stappler::db::Adapter::interface() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::db::BackendInterface*

# ::stappler::db::Adapter::getTransactionKey() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::mem_pool::String

# ::stappler::db::Adapter::set(stappler::CoderSource const&,stappler::mem_pool::Value const&,stappler::TimeInterval) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::CoderSource const&
* stappler::mem_pool::Value const&
* stappler::TimeInterval

Возвращает:
* bool

# ::stappler::db::Adapter::get(stappler::CoderSource const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::CoderSource const&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Adapter::clear(stappler::CoderSource const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::CoderSource const&

Возвращает:
* bool

# ::stappler::db::Adapter::init(BackendInterface::Config const&,Map<stappler::StringView, const stappler::db::Scheme *> const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* BackendInterface::Config const&
* Map<stappler::StringView, const stappler::db::Scheme *> const&

Возвращает:
* bool

# ::stappler::db::Adapter::makeSessionsCleanup() const

## BRIEF

## CONTENT

Доступ: public


# ::stappler::db::Adapter::authorizeUser(stappler::db::Auth const&,stappler::StringView const&,stappler::StringView const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::Auth const&
* stappler::StringView const&
* stappler::StringView const&

Возвращает:
* stappler::db::User*

# ::stappler::db::Adapter::broadcast(stappler::mem_pool::Bytes const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::mem_pool::Bytes const&


# ::stappler::db::Adapter::broadcast(stappler::mem_pool::Value const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::mem_pool::Value const&


# ::stappler::db::Adapter::broadcast(stappler::StringView,stappler::mem_pool::Value&&,bool) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView
* stappler::mem_pool::Value&&
* bool


# ::stappler::db::Adapter::performWithTransaction(Callback<bool (const db::Transaction &)> const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Callback<bool (const db::Transaction &)> const&

Возвращает:
* bool

# ::stappler::db::Adapter::getReferenceParents(stappler::db::Scheme const&,uint64_t,stappler::db::Scheme const*,stappler::db::Field const*) const

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

# ::stappler::db::Adapter::getDatabaseName() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::StringView

# ::stappler::db::Adapter::getDeltaValue(stappler::db::Scheme const&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::db::Scheme const&

Возвращает:
* int64_t

# ::stappler::db::Adapter::getDeltaValue(stappler::db::Scheme const&,stappler::db::FieldView const&,uint64_t)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::db::Scheme const&
* stappler::db::FieldView const&
* uint64_t

Возвращает:
* int64_t

# ::stappler::db::Adapter::performQueryListForIds(stappler::db::QueryList const&,size_t) const

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::db::QueryList const&
* size_t

Возвращает:
* Vector<int64_t>

# ::stappler::db::Adapter::performQueryList(stappler::db::QueryList const&,size_t,bool) const

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::db::QueryList const&
* size_t
* bool

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Adapter::foreach(stappler::db::Worker&,stappler::db::Query const&,Callback<bool (stappler::mem_pool::Value &)> const&) const

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::db::Worker&
* stappler::db::Query const&
* Callback<bool (stappler::mem_pool::Value &)> const&

Возвращает:
* bool

# ::stappler::db::Adapter::select(stappler::db::Worker&,stappler::db::Query const&) const

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::db::Worker&
* stappler::db::Query const&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Adapter::create(stappler::db::Worker&,stappler::mem_pool::Value&) const

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::db::Worker&
* stappler::mem_pool::Value&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Adapter::save(stappler::db::Worker&,uint64_t,stappler::mem_pool::Value const&,Vector<stappler::mem_pool::String> const&) const

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::db::Worker&
* uint64_t
* stappler::mem_pool::Value const&
* Vector<stappler::mem_pool::String> const&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Adapter::patch(stappler::db::Worker&,uint64_t,stappler::mem_pool::Value const&) const

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::db::Worker&
* uint64_t
* stappler::mem_pool::Value const&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Adapter::remove(stappler::db::Worker&,uint64_t) const

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::db::Worker&
* uint64_t

Возвращает:
* bool

# ::stappler::db::Adapter::count(stappler::db::Worker&,stappler::db::Query const&) const

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::db::Worker&
* stappler::db::Query const&

Возвращает:
* size_t

# ::stappler::db::Adapter::scheduleAutoField(stappler::db::Scheme const&,stappler::db::Field const&,uint64_t)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::db::Scheme const&
* stappler::db::Field const&
* uint64_t


# ::stappler::db::Adapter::field(stappler::db::Action,stappler::db::Worker&,uint64_t,stappler::db::Field const&,stappler::mem_pool::Value&&) const

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::db::Action
* stappler::db::Worker&
* uint64_t
* stappler::db::Field const&
* stappler::mem_pool::Value&&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Adapter::field(stappler::db::Action,stappler::db::Worker&,stappler::mem_pool::Value const&,stappler::db::Field const&,stappler::mem_pool::Value&&) const

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::db::Action
* stappler::db::Worker&
* stappler::mem_pool::Value const&
* stappler::db::Field const&
* stappler::mem_pool::Value&&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Adapter::addToView(stappler::db::FieldView const&,stappler::db::Scheme const*,uint64_t,stappler::mem_pool::Value const&) const

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::db::FieldView const&
* stappler::db::Scheme const*
* uint64_t
* stappler::mem_pool::Value const&

Возвращает:
* bool

# ::stappler::db::Adapter::removeFromView(stappler::db::FieldView const&,stappler::db::Scheme const*,uint64_t) const

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::db::FieldView const&
* stappler::db::Scheme const*
* uint64_t

Возвращает:
* bool

# ::stappler::db::Adapter::beginTransaction() const

## BRIEF

## CONTENT

Доступ: protected

Возвращает:
* bool

# ::stappler::db::Adapter::endTransaction() const

## BRIEF

## CONTENT

Доступ: protected

Возвращает:
* bool

# ::stappler::db::Adapter::cancelTransaction() const

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::db::Adapter::isInTransaction() const

## BRIEF

## CONTENT

Доступ: protected

Возвращает:
* bool

# ::stappler::db::Adapter::getTransactionStatus() const

## BRIEF

## CONTENT

Доступ: protected

Возвращает:
* stappler::db::TransactionStatus

# ::stappler::db::Adapter::runAutoFields(stappler::db::Transaction const&,Vector<uint64_t> const&,stappler::db::Scheme const&,stappler::db::Field const&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::db::Transaction const&
* Vector<uint64_t> const&
* stappler::db::Scheme const&
* stappler::db::Field const&


# ::stappler::db::Adapter::_interface

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::db::BackendInterface*
