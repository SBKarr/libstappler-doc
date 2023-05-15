Title: STStorageWorker.h


# MODULES_DB_STSTORAGEWORKER_H_

## BRIEF

## CONTENT


# ::stappler::db::UpdateFlags

## BRIEF

## CONTENT

Значения:
* None
* Protected
* NoReturn
* GetAll
* GetForUpdate
* Cached


# ::stappler::db::operator|(stappler::db::UpdateFlags const&,stappler::db::UpdateFlags const&)

## BRIEF

## CONTENT

Параметры:
* stappler::db::UpdateFlags const&
* stappler::db::UpdateFlags const&

Возвращает:
* stappler::db::UpdateFlags

# ::stappler::db::operator&(stappler::db::UpdateFlags const&,stappler::db::UpdateFlags const&)

## BRIEF

## CONTENT

Параметры:
* stappler::db::UpdateFlags const&
* stappler::db::UpdateFlags const&

Возвращает:
* stappler::db::UpdateFlags

# ::stappler::db::operator^(stappler::db::UpdateFlags const&,stappler::db::UpdateFlags const&)

## BRIEF

## CONTENT

Параметры:
* stappler::db::UpdateFlags const&
* stappler::db::UpdateFlags const&

Возвращает:
* stappler::db::UpdateFlags

# ::stappler::db::operator|=(stappler::db::UpdateFlags&,stappler::db::UpdateFlags const&)

## BRIEF

## CONTENT

Параметры:
* stappler::db::UpdateFlags&
* stappler::db::UpdateFlags const&

Возвращает:
* stappler::db::UpdateFlags&

# ::stappler::db::operator&=(stappler::db::UpdateFlags&,stappler::db::UpdateFlags const&)

## BRIEF

## CONTENT

Параметры:
* stappler::db::UpdateFlags&
* stappler::db::UpdateFlags const&

Возвращает:
* stappler::db::UpdateFlags&

# ::stappler::db::operator^=(stappler::db::UpdateFlags&,stappler::db::UpdateFlags const&)

## BRIEF

## CONTENT

Параметры:
* stappler::db::UpdateFlags&
* stappler::db::UpdateFlags const&

Возвращает:
* stappler::db::UpdateFlags&

# ::stappler::db::operator==(stappler::db::UpdateFlags const&,std::underlying_type<UpdateFlags>::type const&)

## BRIEF

## CONTENT

Параметры:
* stappler::db::UpdateFlags const&
* std::underlying_type<UpdateFlags>::type const&

Возвращает:
* bool

# ::stappler::db::operator==(std::underlying_type<UpdateFlags>::type const&,stappler::db::UpdateFlags const&)

## BRIEF

## CONTENT

Параметры:
* std::underlying_type<UpdateFlags>::type const&
* stappler::db::UpdateFlags const&

Возвращает:
* bool

# ::stappler::db::operator!=(stappler::db::UpdateFlags const&,std::underlying_type<UpdateFlags>::type const&)

## BRIEF

## CONTENT

Параметры:
* stappler::db::UpdateFlags const&
* std::underlying_type<UpdateFlags>::type const&

Возвращает:
* bool

# ::stappler::db::operator!=(std::underlying_type<UpdateFlags>::type const&,stappler::db::UpdateFlags const&)

## BRIEF

## CONTENT

Параметры:
* std::underlying_type<UpdateFlags>::type const&
* stappler::db::UpdateFlags const&

Возвращает:
* bool

# ::stappler::db::operator~(stappler::db::UpdateFlags const&)

## BRIEF

## CONTENT

Параметры:
* stappler::db::UpdateFlags const&

Возвращает:
* stappler::db::UpdateFlags

# ::stappler::db::Conflict

## BRIEF

## CONTENT


# ::stappler::db::Conflict::Flags

## BRIEF

## CONTENT

Значения:
* None
* DoNothing
* WithoutCondition


# ::stappler::db::Conflict::update(stappler::StringView)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView

Возвращает:
* stappler::db::Conflict

# ::stappler::db::Conflict::field

## BRIEF

## CONTENT

Тип: stappler::mem_pool::String


# ::stappler::db::Conflict::condition

## BRIEF

## CONTENT

Тип: Query::Select


# ::stappler::db::Conflict::mask

## BRIEF

## CONTENT

Тип: Vector<stappler::mem_pool::String>


# ::stappler::db::Conflict::flags

## BRIEF

## CONTENT

Тип: stappler::db::Conflict::Flags


# ::stappler::db::Conflict::Conflict(Conflict::Flags)

## BRIEF

## CONTENT

Параметры:
* Conflict::Flags


# ::stappler::db::Conflict::Conflict(stappler::StringView,Query::Select&&,stappler::db::Conflict::Flags)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView
* Query::Select&&
* stappler::db::Conflict::Flags


# ::stappler::db::Conflict::Conflict(stappler::StringView,Query::Select&&,Vector<stappler::mem_pool::String>&&)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView
* Query::Select&&
* Vector<stappler::mem_pool::String>&&


# ::stappler::db::Conflict::setFlags(stappler::db::Conflict::Flags)

## BRIEF

## CONTENT

Параметры:
* stappler::db::Conflict::Flags

Возвращает:
* stappler::db::Conflict&

# ::stappler::db::operator|(Conflict::Flags const&,Conflict::Flags const&)

## BRIEF

## CONTENT

Параметры:
* Conflict::Flags const&
* Conflict::Flags const&

Возвращает:
* Conflict::Flags

# ::stappler::db::operator&(Conflict::Flags const&,Conflict::Flags const&)

## BRIEF

## CONTENT

Параметры:
* Conflict::Flags const&
* Conflict::Flags const&

Возвращает:
* Conflict::Flags

# ::stappler::db::operator^(Conflict::Flags const&,Conflict::Flags const&)

## BRIEF

## CONTENT

Параметры:
* Conflict::Flags const&
* Conflict::Flags const&

Возвращает:
* Conflict::Flags

# ::stappler::db::operator|=(Conflict::Flags&,Conflict::Flags const&)

## BRIEF

## CONTENT

Параметры:
* Conflict::Flags&
* Conflict::Flags const&

Возвращает:
* Conflict::Flags&

# ::stappler::db::operator&=(Conflict::Flags&,Conflict::Flags const&)

## BRIEF

## CONTENT

Параметры:
* Conflict::Flags&
* Conflict::Flags const&

Возвращает:
* Conflict::Flags&

# ::stappler::db::operator^=(Conflict::Flags&,Conflict::Flags const&)

## BRIEF

## CONTENT

Параметры:
* Conflict::Flags&
* Conflict::Flags const&

Возвращает:
* Conflict::Flags&

# ::stappler::db::operator==(Conflict::Flags const&,std::underlying_type<Conflict::Flags>::type const&)

## BRIEF

## CONTENT

Параметры:
* Conflict::Flags const&
* std::underlying_type<Conflict::Flags>::type const&

Возвращает:
* bool

# ::stappler::db::operator==(std::underlying_type<Conflict::Flags>::type const&,Conflict::Flags const&)

## BRIEF

## CONTENT

Параметры:
* std::underlying_type<Conflict::Flags>::type const&
* Conflict::Flags const&

Возвращает:
* bool

# ::stappler::db::operator!=(Conflict::Flags const&,std::underlying_type<Conflict::Flags>::type const&)

## BRIEF

## CONTENT

Параметры:
* Conflict::Flags const&
* std::underlying_type<Conflict::Flags>::type const&

Возвращает:
* bool

# ::stappler::db::operator!=(std::underlying_type<Conflict::Flags>::type const&,Conflict::Flags const&)

## BRIEF

## CONTENT

Параметры:
* std::underlying_type<Conflict::Flags>::type const&
* Conflict::Flags const&

Возвращает:
* bool

# ::stappler::db::operator~(Conflict::Flags const&)

## BRIEF

## CONTENT

Параметры:
* Conflict::Flags const&

Возвращает:
* Conflict::Flags

# ::stappler::db::Worker

## BRIEF

## CONTENT

Базовые классы:
* AllocBase


# ::stappler::db::Worker::FieldCallback

## BRIEF

## CONTENT

Доступ: public


# ::stappler::db::Worker::RequiredFields

## BRIEF

## CONTENT

Доступ: public


# ::stappler::db::Worker::RequiredFields::scheme

## BRIEF

## CONTENT

Тип: stappler::db::Scheme const*


# ::stappler::db::Worker::RequiredFields::includeFields

## BRIEF

## CONTENT

Тип: Vector<const stappler::db::Field *>


# ::stappler::db::Worker::RequiredFields::excludeFields

## BRIEF

## CONTENT

Тип: Vector<const stappler::db::Field *>


# ::stappler::db::Worker::RequiredFields::includeNone

## BRIEF

## CONTENT

Тип: bool


# ::stappler::db::Worker::RequiredFields::includeAll

## BRIEF

## CONTENT

Тип: bool


# ::stappler::db::Worker::RequiredFields::clear()

## BRIEF

## CONTENT


# ::stappler::db::Worker::RequiredFields::reset(stappler::db::Scheme const&)

## BRIEF

## CONTENT

Параметры:
* stappler::db::Scheme const&


# ::stappler::db::Worker::RequiredFields::include(std::initializer_list<StringView>)

## BRIEF

## CONTENT

Параметры:
* std::initializer_list<StringView>


# ::stappler::db::Worker::RequiredFields::include(Set<const stappler::db::Field *> const&)

## BRIEF

## CONTENT

Параметры:
* Set<const stappler::db::Field *> const&


# ::stappler::db::Worker::RequiredFields::include(stappler::StringView const&)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView const&


# ::stappler::db::Worker::RequiredFields::include(stappler::db::Field const*)

## BRIEF

## CONTENT

Параметры:
* stappler::db::Field const*


# ::stappler::db::Worker::RequiredFields::exclude(std::initializer_list<StringView>)

## BRIEF

## CONTENT

Параметры:
* std::initializer_list<StringView>


# ::stappler::db::Worker::RequiredFields::exclude(Set<const stappler::db::Field *> const&)

## BRIEF

## CONTENT

Параметры:
* Set<const stappler::db::Field *> const&


# ::stappler::db::Worker::RequiredFields::exclude(stappler::StringView const&)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView const&


# ::stappler::db::Worker::RequiredFields::exclude(stappler::db::Field const*)

## BRIEF

## CONTENT

Параметры:
* stappler::db::Field const*


# ::stappler::db::Worker::ConditionData

## BRIEF

## CONTENT

Доступ: public


# ::stappler::db::Worker::ConditionData::compare

## BRIEF

## CONTENT

Тип: stappler::db::Comparation


# ::stappler::db::Worker::ConditionData::value1

## BRIEF

## CONTENT

Тип: stappler::mem_pool::Value


# ::stappler::db::Worker::ConditionData::value2

## BRIEF

## CONTENT

Тип: stappler::mem_pool::Value


# ::stappler::db::Worker::ConditionData::field

## BRIEF

## CONTENT

Тип: stappler::db::Field const*


# ::stappler::db::Worker::ConditionData::ConditionData()

## BRIEF

## CONTENT


# ::stappler::db::Worker::ConditionData::ConditionData(Query::Select const&,stappler::db::Field const*)

## BRIEF

## CONTENT

Параметры:
* Query::Select const&
* stappler::db::Field const*


# ::stappler::db::Worker::ConditionData::ConditionData(Query::Select&&,stappler::db::Field const*)

## BRIEF

## CONTENT

Параметры:
* Query::Select&&
* stappler::db::Field const*


# ::stappler::db::Worker::ConditionData::set(Query::Select&&,stappler::db::Field const*)

## BRIEF

## CONTENT

Параметры:
* Query::Select&&
* stappler::db::Field const*


# ::stappler::db::Worker::ConditionData::set(Query::Select const&,stappler::db::Field const*)

## BRIEF

## CONTENT

Параметры:
* Query::Select const&
* stappler::db::Field const*


# ::stappler::db::Worker::ConflictData

## BRIEF

## CONTENT

Доступ: public


# ::stappler::db::Worker::ConflictData::field

## BRIEF

## CONTENT

Тип: stappler::db::Field const*


# ::stappler::db::Worker::ConflictData::condition

## BRIEF

## CONTENT

Тип: stappler::db::Worker::ConditionData


# ::stappler::db::Worker::ConflictData::mask

## BRIEF

## CONTENT

Тип: Vector<const stappler::db::Field *>


# ::stappler::db::Worker::ConflictData::flags

## BRIEF

## CONTENT

Тип: Conflict::Flags


# ::stappler::db::Worker::ConflictData::isDoNothing() const

## BRIEF

## CONTENT

Возвращает:
* bool

# ::stappler::db::Worker::ConflictData::hasCondition() const

## BRIEF

## CONTENT

Возвращает:
* bool

# ::stappler::db::Worker::Worker(stappler::db::Scheme const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::Scheme const&


# ::stappler::db::Worker::Worker(stappler::db::Scheme const&,stappler::db::Adapter const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::Scheme const&
* stappler::db::Adapter const&


# ::stappler::db::Worker::Worker(stappler::db::Scheme const&,stappler::db::Transaction const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::Scheme const&
* stappler::db::Transaction const&


# ::stappler::db::Worker::Worker(stappler::db::Worker const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::Worker const&


# ::stappler::db::Worker::Worker(stappler::db::Worker&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::Worker&&


# ::stappler::db::Worker::operator=(stappler::db::Worker&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::Worker&&

Возвращает:
* stappler::db::Worker&

# ::stappler::db::Worker::operator=(stappler::db::Worker const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::Worker const&

Возвращает:
* stappler::db::Worker&

# ::stappler::db::Worker::~Worker()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::db::Worker::perform<typename>(Callback const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename Callback

Параметры:
* Callback const&

Возвращает:
* bool

# ::stappler::db::Worker::transaction() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::db::Transaction const&

# ::stappler::db::Worker::scheme() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::db::Scheme const&

# ::stappler::db::Worker::includeNone()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::db::Worker::include<typename>(T&&)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename T

Параметры:
* T&&

Возвращает:
* stappler::db::Worker&

# ::stappler::db::Worker::exclude<typename>(T&&)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename T

Параметры:
* T&&

Возвращает:
* stappler::db::Worker&

# ::stappler::db::Worker::clearRequiredFields()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::db::Worker::shouldIncludeNone() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::db::Worker::shouldIncludeAll() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::db::Worker::asSystem()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::db::Worker&

# ::stappler::db::Worker::isSystem() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::db::Worker::getRequiredFields() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::db::Worker::RequiredFields const&

# ::stappler::db::Worker::getConflicts() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Map<const stappler::db::Field *, stappler::db::Worker::ConflictData> const&

# ::stappler::db::Worker::getConditions() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Vector<stappler::db::Worker::ConditionData> const&

# ::stappler::db::Worker::get(uint64_t,stappler::db::UpdateFlags)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint64_t
* stappler::db::UpdateFlags

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Worker::get(stappler::StringView const&,stappler::db::UpdateFlags)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView const&
* stappler::db::UpdateFlags

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Worker::get(stappler::mem_pool::Value const&,stappler::db::UpdateFlags)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::mem_pool::Value const&
* stappler::db::UpdateFlags

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Worker::get(uint64_t,stappler::StringView,stappler::db::UpdateFlags)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint64_t
* stappler::StringView
* stappler::db::UpdateFlags

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Worker::get(stappler::StringView const&,stappler::StringView,stappler::db::UpdateFlags)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView const&
* stappler::StringView
* stappler::db::UpdateFlags

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Worker::get(stappler::mem_pool::Value const&,stappler::StringView,stappler::db::UpdateFlags)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::mem_pool::Value const&
* stappler::StringView
* stappler::db::UpdateFlags

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Worker::get(uint64_t,std::initializer_list<StringView>&&,stappler::db::UpdateFlags)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint64_t
* std::initializer_list<StringView>&&
* stappler::db::UpdateFlags

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Worker::get(stappler::StringView const&,std::initializer_list<StringView>&&,stappler::db::UpdateFlags)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView const&
* std::initializer_list<StringView>&&
* stappler::db::UpdateFlags

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Worker::get(stappler::mem_pool::Value const&,std::initializer_list<StringView>&&,stappler::db::UpdateFlags)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::mem_pool::Value const&
* std::initializer_list<StringView>&&
* stappler::db::UpdateFlags

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Worker::get(uint64_t,std::initializer_list<const char *>&&,stappler::db::UpdateFlags)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint64_t
* std::initializer_list<const char *>&&
* stappler::db::UpdateFlags

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Worker::get(stappler::StringView const&,std::initializer_list<const char *>&&,stappler::db::UpdateFlags)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView const&
* std::initializer_list<const char *>&&
* stappler::db::UpdateFlags

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Worker::get(stappler::mem_pool::Value const&,std::initializer_list<const char *>&&,stappler::db::UpdateFlags)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::mem_pool::Value const&
* std::initializer_list<const char *>&&
* stappler::db::UpdateFlags

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Worker::get(uint64_t,std::initializer_list<const Field *>&&,stappler::db::UpdateFlags)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint64_t
* std::initializer_list<const Field *>&&
* stappler::db::UpdateFlags

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Worker::get(stappler::StringView const&,std::initializer_list<const Field *>&&,stappler::db::UpdateFlags)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView const&
* std::initializer_list<const Field *>&&
* stappler::db::UpdateFlags

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Worker::get(stappler::mem_pool::Value const&,std::initializer_list<const Field *>&&,stappler::db::UpdateFlags)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::mem_pool::Value const&
* std::initializer_list<const Field *>&&
* stappler::db::UpdateFlags

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Worker::get(uint64_t,SpanView<const stappler::db::Field *>,stappler::db::UpdateFlags)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint64_t
* SpanView<const stappler::db::Field *>
* stappler::db::UpdateFlags

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Worker::get(stappler::StringView const&,SpanView<const stappler::db::Field *>,stappler::db::UpdateFlags)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView const&
* SpanView<const stappler::db::Field *>
* stappler::db::UpdateFlags

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Worker::get(stappler::mem_pool::Value const&,SpanView<const stappler::db::Field *>,stappler::db::UpdateFlags)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::mem_pool::Value const&
* SpanView<const stappler::db::Field *>
* stappler::db::UpdateFlags

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Worker::foreach(stappler::db::Query const&,Callback<bool (stappler::mem_pool::Value &)> const&,stappler::db::UpdateFlags)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::Query const&
* Callback<bool (stappler::mem_pool::Value &)> const&
* stappler::db::UpdateFlags

Возвращает:
* bool

# ::stappler::db::Worker::select(stappler::db::Query const&,stappler::db::UpdateFlags)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::Query const&
* stappler::db::UpdateFlags

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Worker::create(stappler::mem_pool::Value const&,bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::mem_pool::Value const&
* bool

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Worker::create(stappler::mem_pool::Value const&,stappler::db::UpdateFlags)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::mem_pool::Value const&
* stappler::db::UpdateFlags

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Worker::create(stappler::mem_pool::Value const&,stappler::db::UpdateFlags,stappler::db::Conflict const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::mem_pool::Value const&
* stappler::db::UpdateFlags
* stappler::db::Conflict const&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Worker::create(stappler::mem_pool::Value const&,stappler::db::UpdateFlags,Vector<stappler::db::Conflict> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::mem_pool::Value const&
* stappler::db::UpdateFlags
* Vector<stappler::db::Conflict> const&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Worker::create(stappler::mem_pool::Value const&,Conflict::Flags)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::mem_pool::Value const&
* Conflict::Flags

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Worker::create(stappler::mem_pool::Value const&,stappler::db::Conflict const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::mem_pool::Value const&
* stappler::db::Conflict const&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Worker::create(stappler::mem_pool::Value const&,Vector<stappler::db::Conflict> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::mem_pool::Value const&
* Vector<stappler::db::Conflict> const&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Worker::update(uint64_t,stappler::mem_pool::Value const&,bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint64_t
* stappler::mem_pool::Value const&
* bool

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Worker::update(stappler::mem_pool::Value const&,stappler::mem_pool::Value const&,bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::mem_pool::Value const&
* stappler::mem_pool::Value const&
* bool

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Worker::update(uint64_t,stappler::mem_pool::Value const&,stappler::db::UpdateFlags)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint64_t
* stappler::mem_pool::Value const&
* stappler::db::UpdateFlags

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Worker::update(stappler::mem_pool::Value const&,stappler::mem_pool::Value const&,stappler::db::UpdateFlags)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::mem_pool::Value const&
* stappler::mem_pool::Value const&
* stappler::db::UpdateFlags

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Worker::update(uint64_t,stappler::mem_pool::Value const&,stappler::db::UpdateFlags,Query::Select const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint64_t
* stappler::mem_pool::Value const&
* stappler::db::UpdateFlags
* Query::Select const&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Worker::update(stappler::mem_pool::Value const&,stappler::mem_pool::Value const&,stappler::db::UpdateFlags,Query::Select const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::mem_pool::Value const&
* stappler::mem_pool::Value const&
* stappler::db::UpdateFlags
* Query::Select const&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Worker::update(uint64_t,stappler::mem_pool::Value const&,stappler::db::UpdateFlags,Vector<Query::Select> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint64_t
* stappler::mem_pool::Value const&
* stappler::db::UpdateFlags
* Vector<Query::Select> const&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Worker::update(stappler::mem_pool::Value const&,stappler::mem_pool::Value const&,stappler::db::UpdateFlags,Vector<Query::Select> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::mem_pool::Value const&
* stappler::mem_pool::Value const&
* stappler::db::UpdateFlags
* Vector<Query::Select> const&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Worker::update(uint64_t,stappler::mem_pool::Value const&,Query::Select const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint64_t
* stappler::mem_pool::Value const&
* Query::Select const&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Worker::update(stappler::mem_pool::Value const&,stappler::mem_pool::Value const&,Query::Select const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::mem_pool::Value const&
* stappler::mem_pool::Value const&
* Query::Select const&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Worker::update(uint64_t,stappler::mem_pool::Value const&,Vector<Query::Select> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint64_t
* stappler::mem_pool::Value const&
* Vector<Query::Select> const&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Worker::update(stappler::mem_pool::Value const&,stappler::mem_pool::Value const&,Vector<Query::Select> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::mem_pool::Value const&
* stappler::mem_pool::Value const&
* Vector<Query::Select> const&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Worker::remove(uint64_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint64_t

Возвращает:
* bool

# ::stappler::db::Worker::remove(stappler::mem_pool::Value const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::mem_pool::Value const&

Возвращает:
* bool

# ::stappler::db::Worker::count()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* size_t

# ::stappler::db::Worker::count(stappler::db::Query const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::Query const&

Возвращает:
* size_t

# ::stappler::db::Worker::touch(uint64_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint64_t


# ::stappler::db::Worker::touch(stappler::mem_pool::Value const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::mem_pool::Value const&


# ::stappler::db::Worker::getField(uint64_t,stappler::StringView const&,std::initializer_list<StringView>)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint64_t
* stappler::StringView const&
* std::initializer_list<StringView>

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Worker::getField(stappler::mem_pool::Value const&,stappler::StringView const&,std::initializer_list<StringView>)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::mem_pool::Value const&
* stappler::StringView const&
* std::initializer_list<StringView>

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Worker::getField(uint64_t,stappler::StringView const&,Set<const stappler::db::Field *> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint64_t
* stappler::StringView const&
* Set<const stappler::db::Field *> const&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Worker::getField(stappler::mem_pool::Value const&,stappler::StringView const&,Set<const stappler::db::Field *> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::mem_pool::Value const&
* stappler::StringView const&
* Set<const stappler::db::Field *> const&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Worker::setField(uint64_t,stappler::StringView const&,stappler::mem_pool::Value&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint64_t
* stappler::StringView const&
* stappler::mem_pool::Value&&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Worker::setField(stappler::mem_pool::Value const&,stappler::StringView const&,stappler::mem_pool::Value&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::mem_pool::Value const&
* stappler::StringView const&
* stappler::mem_pool::Value&&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Worker::setField(uint64_t,stappler::StringView const&,stappler::db::InputFile&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint64_t
* stappler::StringView const&
* stappler::db::InputFile&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Worker::setField(stappler::mem_pool::Value const&,stappler::StringView const&,stappler::db::InputFile&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::mem_pool::Value const&
* stappler::StringView const&
* stappler::db::InputFile&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Worker::clearField(uint64_t,stappler::StringView const&,stappler::mem_pool::Value&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint64_t
* stappler::StringView const&
* stappler::mem_pool::Value&&

Возвращает:
* bool

# ::stappler::db::Worker::clearField(stappler::mem_pool::Value const&,stappler::StringView const&,stappler::mem_pool::Value&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::mem_pool::Value const&
* stappler::StringView const&
* stappler::mem_pool::Value&&

Возвращает:
* bool

# ::stappler::db::Worker::appendField(uint64_t,stappler::StringView const&,stappler::mem_pool::Value&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint64_t
* stappler::StringView const&
* stappler::mem_pool::Value&&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Worker::appendField(stappler::mem_pool::Value const&,stappler::StringView const&,stappler::mem_pool::Value&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::mem_pool::Value const&
* stappler::StringView const&
* stappler::mem_pool::Value&&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Worker::countField(uint64_t,stappler::StringView const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint64_t
* stappler::StringView const&

Возвращает:
* size_t

# ::stappler::db::Worker::countField(stappler::mem_pool::Value const&,stappler::StringView const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::mem_pool::Value const&
* stappler::StringView const&

Возвращает:
* size_t

# ::stappler::db::Worker::getField(uint64_t,stappler::db::Field const&,std::initializer_list<StringView>)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint64_t
* stappler::db::Field const&
* std::initializer_list<StringView>

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Worker::getField(stappler::mem_pool::Value const&,stappler::db::Field const&,std::initializer_list<StringView>)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::mem_pool::Value const&
* stappler::db::Field const&
* std::initializer_list<StringView>

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Worker::getField(uint64_t,stappler::db::Field const&,Set<const stappler::db::Field *> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint64_t
* stappler::db::Field const&
* Set<const stappler::db::Field *> const&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Worker::getField(stappler::mem_pool::Value const&,stappler::db::Field const&,Set<const stappler::db::Field *> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::mem_pool::Value const&
* stappler::db::Field const&
* Set<const stappler::db::Field *> const&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Worker::setField(uint64_t,stappler::db::Field const&,stappler::mem_pool::Value&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint64_t
* stappler::db::Field const&
* stappler::mem_pool::Value&&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Worker::setField(stappler::mem_pool::Value const&,stappler::db::Field const&,stappler::mem_pool::Value&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::mem_pool::Value const&
* stappler::db::Field const&
* stappler::mem_pool::Value&&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Worker::setField(uint64_t,stappler::db::Field const&,stappler::db::InputFile&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint64_t
* stappler::db::Field const&
* stappler::db::InputFile&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Worker::setField(stappler::mem_pool::Value const&,stappler::db::Field const&,stappler::db::InputFile&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::mem_pool::Value const&
* stappler::db::Field const&
* stappler::db::InputFile&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Worker::clearField(uint64_t,stappler::db::Field const&,stappler::mem_pool::Value&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint64_t
* stappler::db::Field const&
* stappler::mem_pool::Value&&

Возвращает:
* bool

# ::stappler::db::Worker::clearField(stappler::mem_pool::Value const&,stappler::db::Field const&,stappler::mem_pool::Value&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::mem_pool::Value const&
* stappler::db::Field const&
* stappler::mem_pool::Value&&

Возвращает:
* bool

# ::stappler::db::Worker::appendField(uint64_t,stappler::db::Field const&,stappler::mem_pool::Value&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint64_t
* stappler::db::Field const&
* stappler::mem_pool::Value&&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Worker::appendField(stappler::mem_pool::Value const&,stappler::db::Field const&,stappler::mem_pool::Value&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::mem_pool::Value const&
* stappler::db::Field const&
* stappler::mem_pool::Value&&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Worker::countField(uint64_t,stappler::db::Field const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint64_t
* stappler::db::Field const&

Возвращает:
* size_t

# ::stappler::db::Worker::countField(stappler::mem_pool::Value const&,stappler::db::Field const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::mem_pool::Value const&
* stappler::db::Field const&

Возвращает:
* size_t

# ::stappler::db::Worker::getFieldSet(stappler::db::Field const&,std::initializer_list<StringView>) const

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::db::Field const&
* std::initializer_list<StringView>

Возвращает:
* Set<const stappler::db::Field *>

# ::stappler::db::Worker::addConflict(stappler::db::Conflict const&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::db::Conflict const&

Возвращает:
* bool

# ::stappler::db::Worker::addConflict(Vector<stappler::db::Conflict> const&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* Vector<stappler::db::Conflict> const&

Возвращает:
* bool

# ::stappler::db::Worker::addCondition(Query::Select const&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* Query::Select const&

Возвращает:
* bool

# ::stappler::db::Worker::addCondition(Vector<Query::Select> const&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* Vector<Query::Select> const&

Возвращает:
* bool

# ::stappler::db::Worker::reduceGetQuery(stappler::db::Query const&,bool)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::db::Query const&
* bool

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Worker::_conflict

## BRIEF

## CONTENT

Доступ: protected

Тип: Map<const stappler::db::Field *, stappler::db::Worker::ConflictData>


# ::stappler::db::Worker::_conditions

## BRIEF

## CONTENT

Доступ: protected

Тип: Vector<stappler::db::Worker::ConditionData>


# ::stappler::db::Worker::_required

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::db::Worker::RequiredFields


# ::stappler::db::Worker::_scheme

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::db::Scheme const*


# ::stappler::db::Worker::_transaction

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::db::Transaction


# ::stappler::db::Worker::_isSystem

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::db::FieldResolver

## BRIEF

## CONTENT


# ::stappler::db::FieldResolver::FieldResolver(stappler::db::Scheme const&,stappler::db::Worker const&,stappler::db::Query const&)

## BRIEF

## CONTENT

Параметры:
* stappler::db::Scheme const&
* stappler::db::Worker const&
* stappler::db::Query const&


# ::stappler::db::FieldResolver::FieldResolver(stappler::db::Scheme const&,stappler::db::Worker const&)

## BRIEF

## CONTENT

Параметры:
* stappler::db::Scheme const&
* stappler::db::Worker const&


# ::stappler::db::FieldResolver::FieldResolver(stappler::db::Scheme const&,stappler::db::Query const&)

## BRIEF

## CONTENT

Параметры:
* stappler::db::Scheme const&
* stappler::db::Query const&


# ::stappler::db::FieldResolver::FieldResolver(stappler::db::Scheme const&,stappler::db::Query const&,Set<const stappler::db::Field *> const&)

## BRIEF

## CONTENT

Параметры:
* stappler::db::Scheme const&
* stappler::db::Query const&
* Set<const stappler::db::Field *> const&


# ::stappler::db::FieldResolver::FieldResolver(stappler::db::Scheme const&)

## BRIEF

## CONTENT

Параметры:
* stappler::db::Scheme const&


# ::stappler::db::FieldResolver::FieldResolver(stappler::db::Scheme const&,Set<const stappler::db::Field *> const&)

## BRIEF

## CONTENT

Параметры:
* stappler::db::Scheme const&
* Set<const stappler::db::Field *> const&


# ::stappler::db::FieldResolver::shouldResolveFields() const

## BRIEF

## CONTENT

Возвращает:
* bool

# ::stappler::db::FieldResolver::hasIncludesOrExcludes() const

## BRIEF

## CONTENT

Возвращает:
* bool

# ::stappler::db::FieldResolver::shouldIncludeAll() const

## BRIEF

## CONTENT

Возвращает:
* bool

# ::stappler::db::FieldResolver::shouldIncludeField(stappler::db::Field const&) const

## BRIEF

## CONTENT

Параметры:
* stappler::db::Field const&

Возвращает:
* bool

# ::stappler::db::FieldResolver::shouldExcludeField(stappler::db::Field const&) const

## BRIEF

## CONTENT

Параметры:
* stappler::db::Field const&

Возвращает:
* bool

# ::stappler::db::FieldResolver::isFieldRequired(stappler::db::Field const&) const

## BRIEF

## CONTENT

Параметры:
* stappler::db::Field const&

Возвращает:
* bool

# ::stappler::db::FieldResolver::getVirtuals() const

## BRIEF

## CONTENT

Возвращает:
* Vector<const stappler::db::Field *>

# ::stappler::db::FieldResolver::readFields(Worker::FieldCallback const&,bool)

## BRIEF

## CONTENT

Параметры:
* Worker::FieldCallback const&
* bool

Возвращает:
* bool

# ::stappler::db::FieldResolver::include(stappler::StringView)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView


# ::stappler::db::FieldResolver::scheme

## BRIEF

## CONTENT

Тип: stappler::db::Scheme const*


# ::stappler::db::FieldResolver::required

## BRIEF

## CONTENT

Тип: Worker::RequiredFields const*


# ::stappler::db::FieldResolver::query

## BRIEF

## CONTENT

Тип: stappler::db::Query const*


# ::stappler::db::FieldResolver::requiredFields

## BRIEF

## CONTENT

Тип: Vector<const stappler::db::Field *>


# ::stappler::db::Worker::perform<typename>(Callback const&) const

## BRIEF

## CONTENT

Параметры шаблона:
* typename Callback

Параметры:
* Callback const&

Возвращает:
* bool