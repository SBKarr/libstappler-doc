Title: STStorageTransaction.h


# MODULES_DB_STSTORAGETRANSACTION_H_

## BRIEF

## CONTENT


# ::stappler::db::AccessRoleId

## BRIEF

## CONTENT

Значения:
* Nobody
* Authorized
* UserDefined1
* UserDefined2
* UserDefined3
* UserDefined4
* UserDefined5
* UserDefined6
* UserDefined7
* UserDefined8
* UserDefined9
* UserDefined10
* UserDefined11
* Admin
* System
* Default
* Max


# ::stappler::db::Transaction

## BRIEF

## CONTENT

Базовые классы:
* AllocBase


# ::stappler::db::Transaction::Op

## BRIEF

## CONTENT

Доступ: public

Значения:
* None
* Id
* Select
* Count
* Remove
* Create
* Save
* Patch
* FieldGet
* FieldSet
* FieldAppend
* FieldClear
* FieldCount
* Delta
* DeltaView
* RemoveFromView
* AddToView
* Max


# ::stappler::db::Transaction::Data

## BRIEF

## CONTENT

Доступ: public

Базовые классы:
* AllocPool


# ::stappler::db::Transaction::Data::adapter

## BRIEF

## CONTENT

Тип: stappler::db::Adapter


# ::stappler::db::Transaction::Data::pool

## BRIEF

## CONTENT

Тип: stappler::mempool::base::pool_t*


# ::stappler::db::Transaction::Data::data

## BRIEF

## CONTENT

Тип: Map<stappler::mem_pool::String, stappler::mem_pool::Value>


# ::stappler::db::Transaction::Data::status

## BRIEF

## CONTENT

Тип: int


# ::stappler::db::Transaction::Data::objects

## BRIEF

## CONTENT

Тип: Map<int64_t, stappler::mem_pool::Value>


# ::stappler::db::Transaction::Data::role

## BRIEF

## CONTENT

Тип: stappler::db::AccessRoleId


# ::stappler::db::Transaction::Data::Data(stappler::db::Adapter const&,memory::pool_t*)

## BRIEF

## CONTENT

Параметры:
* stappler::db::Adapter const&
* memory::pool_t*


# ::stappler::db::Transaction::Stack

## BRIEF

## CONTENT

Доступ: public

Базовые классы:
* AllocPool


# ::stappler::db::Transaction::Stack::stack

## BRIEF

## CONTENT

Тип: Vector<stappler::db::Transaction::Data *>


# ::stappler::db::Transaction::getTransactionOp(stappler::db::Action)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::Action

Возвращает:
* stappler::db::Transaction::Op

# ::stappler::db::Transaction::acquire(stappler::db::Adapter const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::Adapter const&

Возвращает:
* stappler::db::Transaction

# ::stappler::db::Transaction::acquire()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::db::Transaction

# ::stappler::db::Transaction::acquireIfExists()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::db::Transaction

# ::stappler::db::Transaction::acquireIfExists(memory::pool_t*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* memory::pool_t*

Возвращает:
* stappler::db::Transaction

# ::stappler::db::Transaction::Transaction(stappler::nullptr_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::nullptr_t


# ::stappler::db::Transaction::setRole(stappler::db::AccessRoleId) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::AccessRoleId


# ::stappler::db::Transaction::getRole() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::db::AccessRoleId

# ::stappler::db::Transaction::setStatus(int)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* int


# ::stappler::db::Transaction::getStatus() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* int

# ::stappler::db::Transaction::setValue(stappler::StringView const&,stappler::mem_pool::Value&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView const&
* stappler::mem_pool::Value&&

Возвращает:
* stappler::mem_pool::Value const&

# ::stappler::db::Transaction::getValue(stappler::StringView const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView const&

Возвращает:
* stappler::mem_pool::Value const&

# ::stappler::db::Transaction::setObject(int64_t,stappler::mem_pool::Value&&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* int64_t
* stappler::mem_pool::Value&&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Transaction::getObject(int64_t) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* int64_t

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Transaction::setAdapter(stappler::db::Adapter const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::Adapter const&


# ::stappler::db::Transaction::getAdapter() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::db::Adapter const&

# ::stappler::db::Transaction::operator bool() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::db::Transaction::acquireObject(stappler::db::Scheme const&,uint64_t) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::Scheme const&
* uint64_t

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Transaction::perform(Callback<bool ()> const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Callback<bool ()> const&

Возвращает:
* bool

# ::stappler::db::Transaction::performAsSystem(Callback<bool ()> const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Callback<bool ()> const&

Возвращает:
* bool

# ::stappler::db::Transaction::isInTransaction() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::db::Transaction::getTransactionStatus() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::db::TransactionStatus

# ::stappler::db::Transaction::foreach(stappler::db::Worker&,stappler::db::Query const&,Callback<bool (stappler::mem_pool::Value &)> const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::Worker&
* stappler::db::Query const&
* Callback<bool (stappler::mem_pool::Value &)> const&

Возвращает:
* bool

# ::stappler::db::Transaction::select(stappler::db::Worker&,stappler::db::Query const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::Worker&
* stappler::db::Query const&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Transaction::count(stappler::db::Worker&,stappler::db::Query const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::Worker&
* stappler::db::Query const&

Возвращает:
* size_t

# ::stappler::db::Transaction::remove(stappler::db::Worker&,uint64_t) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::Worker&
* uint64_t

Возвращает:
* bool

# ::stappler::db::Transaction::create(stappler::db::Worker&,stappler::mem_pool::Value&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::Worker&
* stappler::mem_pool::Value&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Transaction::save(stappler::db::Worker&,uint64_t,stappler::mem_pool::Value const&,Vector<stappler::mem_pool::String> const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::Worker&
* uint64_t
* stappler::mem_pool::Value const&
* Vector<stappler::mem_pool::String> const&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Transaction::patch(stappler::db::Worker&,uint64_t,stappler::mem_pool::Value&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::Worker&
* uint64_t
* stappler::mem_pool::Value&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Transaction::field(stappler::db::Action,stappler::db::Worker&,uint64_t,stappler::db::Field const&,stappler::mem_pool::Value&&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::Action
* stappler::db::Worker&
* uint64_t
* stappler::db::Field const&
* stappler::mem_pool::Value&&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Transaction::field(stappler::db::Action,stappler::db::Worker&,stappler::mem_pool::Value const&,stappler::db::Field const&,stappler::mem_pool::Value&&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::Action
* stappler::db::Worker&
* stappler::mem_pool::Value const&
* stappler::db::Field const&
* stappler::mem_pool::Value&&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Transaction::removeFromView(stappler::db::Scheme const&,stappler::db::FieldView const&,uint64_t,stappler::mem_pool::Value const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::Scheme const&
* stappler::db::FieldView const&
* uint64_t
* stappler::mem_pool::Value const&

Возвращает:
* bool

# ::stappler::db::Transaction::addToView(stappler::db::Scheme const&,stappler::db::FieldView const&,uint64_t,stappler::mem_pool::Value const&,stappler::mem_pool::Value const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::Scheme const&
* stappler::db::FieldView const&
* uint64_t
* stappler::mem_pool::Value const&
* stappler::mem_pool::Value const&

Возвращает:
* bool

# ::stappler::db::Transaction::getDeltaValue(stappler::db::Scheme const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::Scheme const&

Возвращает:
* int64_t

# ::stappler::db::Transaction::getDeltaValue(stappler::db::Scheme const&,stappler::db::FieldView const&,uint64_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::Scheme const&
* stappler::db::FieldView const&
* uint64_t

Возвращает:
* int64_t

# ::stappler::db::Transaction::performQueryListForIds(stappler::db::QueryList const&,size_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::QueryList const&
* size_t

Возвращает:
* Vector<int64_t>

# ::stappler::db::Transaction::performQueryList(stappler::db::QueryList const&,size_t,bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::QueryList const&
* size_t
* bool

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Transaction::performQueryListField(stappler::db::QueryList const&,stappler::db::Field const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::QueryList const&
* stappler::db::Field const&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Transaction::scheduleAutoField(stappler::db::Scheme const&,stappler::db::Field const&,uint64_t) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::Scheme const&
* stappler::db::Field const&
* uint64_t


# ::stappler::db::Transaction::retain() const

## BRIEF

## CONTENT

Доступ: public


# ::stappler::db::Transaction::release() const

## BRIEF

## CONTENT

Доступ: public


# ::stappler::db::Transaction::TransactionGuard

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::db::Transaction::TransactionGuard::TransactionGuard(stappler::db::Transaction const&)

## BRIEF

## CONTENT

Параметры:
* stappler::db::Transaction const&


# ::stappler::db::Transaction::TransactionGuard::~TransactionGuard()

## BRIEF

## CONTENT


# ::stappler::db::Transaction::TransactionGuard::_t

## BRIEF

## CONTENT

Тип: stappler::db::Transaction const*


# ::stappler::db::Transaction::beginTransaction() const

## BRIEF

## CONTENT

Доступ: protected

Возвращает:
* bool

# ::stappler::db::Transaction::endTransaction() const

## BRIEF

## CONTENT

Доступ: protected

Возвращает:
* bool

# ::stappler::db::Transaction::cancelTransaction() const

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::db::Transaction::clearObjectStorage() const

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::db::Transaction::processReturnObject(stappler::db::Scheme const&,stappler::mem_pool::Value&) const

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::db::Scheme const&
* stappler::mem_pool::Value&

Возвращает:
* bool

# ::stappler::db::Transaction::processReturnField(stappler::db::Scheme const&,stappler::mem_pool::Value const&,stappler::db::Field const&,stappler::mem_pool::Value&) const

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::db::Scheme const&
* stappler::mem_pool::Value const&
* stappler::db::Field const&
* stappler::mem_pool::Value&

Возвращает:
* bool

# ::stappler::db::Transaction::isOpAllowed(stappler::db::Scheme const&,stappler::db::Transaction::Op,stappler::db::Field const*) const

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::db::Scheme const&
* stappler::db::Transaction::Op
* stappler::db::Field const*

Возвращает:
* bool

# ::stappler::db::Transaction::Transaction(stappler::db::Transaction::Data*)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::db::Transaction::Data*


# ::stappler::db::Transaction::_data

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::db::Transaction::Data*


# ::stappler::db::Transaction::perform(Callback<bool ()> const&) const

## BRIEF

## CONTENT

Параметры:
* Callback<bool ()> const&

Возвращает:
* bool

# ::stappler::db::Transaction::performAsSystem(Callback<bool ()> const&) const

## BRIEF

## CONTENT

Параметры:
* Callback<bool ()> const&

Возвращает:
* bool

# ::stappler::db::AccessRole

## BRIEF

## CONTENT

Базовые классы:
* AllocBase


# ::stappler::db::AccessRole::OnSelect

## BRIEF

## CONTENT


# ::stappler::db::AccessRole::OnCount

## BRIEF

## CONTENT


# ::stappler::db::AccessRole::OnCreate

## BRIEF

## CONTENT


# ::stappler::db::AccessRole::OnPatch

## BRIEF

## CONTENT


# ::stappler::db::AccessRole::OnSave

## BRIEF

## CONTENT


# ::stappler::db::AccessRole::OnRemove

## BRIEF

## CONTENT


# ::stappler::db::AccessRole::OnField

## BRIEF

## CONTENT


# ::stappler::db::AccessRole::OnReturn

## BRIEF

## CONTENT


# ::stappler::db::AccessRole::OnReturnField

## BRIEF

## CONTENT


# ::stappler::db::AccessRole::Empty<typename>(Args &&...)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Args

Параметры:
* Args &&...

Возвращает:
* stappler::db::AccessRole

# ::stappler::db::AccessRole::Default<typename>(Args &&...)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Args

Параметры:
* Args &&...

Возвращает:
* stappler::db::AccessRole

# ::stappler::db::AccessRole::Admin<typename>(Args &&...)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Args

Параметры:
* Args &&...

Возвращает:
* stappler::db::AccessRole

# ::stappler::db::AccessRole::define<typename,typename>(T&&,Args &&...)

## BRIEF

## CONTENT

Параметры шаблона:
* typename T
* typename Args

Параметры:
* T&&
* Args &&...

Возвращает:
* stappler::db::AccessRole&

# ::stappler::db::AccessRole::define()

## BRIEF

## CONTENT

Возвращает:
* stappler::db::AccessRole&

# ::stappler::db::AccessRole::define(stappler::db::AccessRoleId)

## BRIEF

## CONTENT

Параметры:
* stappler::db::AccessRoleId

Возвращает:
* stappler::db::AccessRole&

# ::stappler::db::AccessRole::define(Transaction::Op)

## BRIEF

## CONTENT

Параметры:
* Transaction::Op

Возвращает:
* stappler::db::AccessRole&

# ::stappler::db::AccessRole::define(stappler::db::AccessRole::OnSelect&&)

## BRIEF

## CONTENT

Параметры:
* stappler::db::AccessRole::OnSelect&&

Возвращает:
* stappler::db::AccessRole&

# ::stappler::db::AccessRole::define(stappler::db::AccessRole::OnCount&&)

## BRIEF

## CONTENT

Параметры:
* stappler::db::AccessRole::OnCount&&

Возвращает:
* stappler::db::AccessRole&

# ::stappler::db::AccessRole::define(stappler::db::AccessRole::OnCreate&&)

## BRIEF

## CONTENT

Параметры:
* stappler::db::AccessRole::OnCreate&&

Возвращает:
* stappler::db::AccessRole&

# ::stappler::db::AccessRole::define(stappler::db::AccessRole::OnPatch&&)

## BRIEF

## CONTENT

Параметры:
* stappler::db::AccessRole::OnPatch&&

Возвращает:
* stappler::db::AccessRole&

# ::stappler::db::AccessRole::define(stappler::db::AccessRole::OnSave&&)

## BRIEF

## CONTENT

Параметры:
* stappler::db::AccessRole::OnSave&&

Возвращает:
* stappler::db::AccessRole&

# ::stappler::db::AccessRole::define(stappler::db::AccessRole::OnRemove&&)

## BRIEF

## CONTENT

Параметры:
* stappler::db::AccessRole::OnRemove&&

Возвращает:
* stappler::db::AccessRole&

# ::stappler::db::AccessRole::define(stappler::db::AccessRole::OnField&&)

## BRIEF

## CONTENT

Параметры:
* stappler::db::AccessRole::OnField&&

Возвращает:
* stappler::db::AccessRole&

# ::stappler::db::AccessRole::define(stappler::db::AccessRole::OnReturn&&)

## BRIEF

## CONTENT

Параметры:
* stappler::db::AccessRole::OnReturn&&

Возвращает:
* stappler::db::AccessRole&

# ::stappler::db::AccessRole::define(stappler::db::AccessRole::OnReturnField&&)

## BRIEF

## CONTENT

Параметры:
* stappler::db::AccessRole::OnReturnField&&

Возвращает:
* stappler::db::AccessRole&

# ::stappler::db::AccessRole::users

## BRIEF

## CONTENT

Тип: std::bitset<stappler::toInt(AccessRoleId::Max)>


# ::stappler::db::AccessRole::operations

## BRIEF

## CONTENT

Тип: std::bitset<stappler::toInt(Transaction::Op::Max)>


# ::stappler::db::AccessRole::onSelect

## BRIEF

## CONTENT

Тип: Function<bool (stappler::db::Worker &, const stappler::db::Query &)>


# ::stappler::db::AccessRole::onCount

## BRIEF

## CONTENT

Тип: Function<bool (stappler::db::Worker &, const stappler::db::Query &)>


# ::stappler::db::AccessRole::onCreate

## BRIEF

## CONTENT

Тип: Function<bool (stappler::db::Worker &, stappler::mem_pool::Value &)>


# ::stappler::db::AccessRole::onPatch

## BRIEF

## CONTENT

Тип: Function<bool (stappler::db::Worker &, int64_t, stappler::mem_pool::Value &)>


# ::stappler::db::AccessRole::onSave

## BRIEF

## CONTENT

Тип: Function<bool (stappler::db::Worker &, const stappler::mem_pool::Value &, stappler::mem_pool::Value &, Vector<stappler::mem_pool::String> &)>


# ::stappler::db::AccessRole::onRemove

## BRIEF

## CONTENT

Тип: Function<bool (stappler::db::Worker &, const stappler::mem_pool::Value &)>


# ::stappler::db::AccessRole::onField

## BRIEF

## CONTENT

Тип: Function<bool (stappler::db::Action, stappler::db::Worker &, const stappler::mem_pool::Value &, const stappler::db::Field &, stappler::mem_pool::Value &)>


# ::stappler::db::AccessRole::onReturn

## BRIEF

## CONTENT

Тип: Function<bool (const stappler::db::Scheme &, stappler::mem_pool::Value &)>


# ::stappler::db::AccessRole::onReturnField

## BRIEF

## CONTENT

Тип: Function<bool (const stappler::db::Scheme &, const stappler::db::Field &, stappler::mem_pool::Value &)>


# ::stappler::db::AccessRole::define<typename,typename>(T&&,Args &&...)

## BRIEF

## CONTENT

Параметры шаблона:
* typename T
* typename Args

Параметры:
* T&&
* Args &&...

Возвращает:
* stappler::db::AccessRole&

# ::stappler::db::AccessRole::Empty<typename>(Args &&...)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Args

Параметры:
* Args &&...

Возвращает:
* stappler::db::AccessRole

# ::stappler::db::AccessRole::Default<typename>(Args &&...)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Args

Параметры:
* Args &&...

Возвращает:
* stappler::db::AccessRole

# ::stappler::db::AccessRole::Admin<typename>(Args &&...)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Args

Параметры:
* Args &&...

Возвращает:
* stappler::db::AccessRole