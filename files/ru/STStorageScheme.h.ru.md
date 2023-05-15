Title: STStorageScheme.h


# MODULES_DB_STSTORAGESCHEME_H_

## BRIEF

## CONTENT


# ::stappler::db::Scheme

## BRIEF

## CONTENT

Базовые классы:
* AllocBase


# ::stappler::db::Scheme::Options

## BRIEF

## CONTENT

Доступ: public

Значения:
* None
* WithDelta
* Detouched
* Compressed


# ::stappler::db::Scheme::ViewScheme

## BRIEF

## CONTENT

Доступ: public

Базовые классы:
* AllocBase


# ::stappler::db::Scheme::ViewScheme::scheme

## BRIEF

## CONTENT

Тип: stappler::db::Scheme const*


# ::stappler::db::Scheme::ViewScheme::viewField

## BRIEF

## CONTENT

Тип: stappler::db::Field const*


# ::stappler::db::Scheme::ViewScheme::fields

## BRIEF

## CONTENT

Тип: Set<const stappler::db::Field *>


# ::stappler::db::Scheme::ViewScheme::autoLink

## BRIEF

## CONTENT

Тип: stappler::db::Field const*


# ::stappler::db::Scheme::ViewScheme::autoField

## BRIEF

## CONTENT

Тип: stappler::db::AutoFieldScheme const*


# ::stappler::db::Scheme::ViewScheme::ViewScheme(stappler::db::Scheme const*,stappler::db::Field const*,stappler::db::FieldView const&)

## BRIEF

## CONTENT

Параметры:
* stappler::db::Scheme const*
* stappler::db::Field const*
* stappler::db::FieldView const&


# ::stappler::db::Scheme::ViewScheme::ViewScheme(stappler::db::Scheme const*,stappler::db::Field const*,stappler::db::AutoFieldScheme const&)

## BRIEF

## CONTENT

Параметры:
* stappler::db::Scheme const*
* stappler::db::Field const*
* stappler::db::AutoFieldScheme const&


# ::stappler::db::Scheme::ParentScheme

## BRIEF

## CONTENT

Доступ: public

Базовые классы:
* AllocPool


# ::stappler::db::Scheme::ParentScheme::scheme

## BRIEF

## CONTENT

Тип: stappler::db::Scheme const*


# ::stappler::db::Scheme::ParentScheme::pointerField

## BRIEF

## CONTENT

Тип: stappler::db::Field const*


# ::stappler::db::Scheme::ParentScheme::backReference

## BRIEF

## CONTENT

Тип: stappler::db::Field const*


# ::stappler::db::Scheme::ParentScheme::ParentScheme(stappler::db::Scheme const*,stappler::db::Field const*)

## BRIEF

## CONTENT

Параметры:
* stappler::db::Scheme const*
* stappler::db::Field const*


# ::stappler::db::Scheme::UniqueConstraint

## BRIEF

## CONTENT

Доступ: public


# ::stappler::db::Scheme::UniqueConstraint::name

## BRIEF

## CONTENT

Тип: stappler::StringView


# ::stappler::db::Scheme::UniqueConstraint::fields

## BRIEF

## CONTENT

Тип: Vector<const stappler::db::Field *>


# ::stappler::db::Scheme::UniqueConstraint::UniqueConstraint(stappler::StringView,Vector<const stappler::db::Field *>&&)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView
* Vector<const stappler::db::Field *>&&


# ::stappler::db::Scheme::TransformAction

## BRIEF

## CONTENT

Доступ: public

Значения:
* Create
* Update
* Compare
* ProtectedCreate
* ProtectedUpdate
* Touch


# ::stappler::db::Scheme::FieldVec

## BRIEF

## CONTENT

Доступ: public


# ::stappler::db::Scheme::AccessTable

## BRIEF

## CONTENT

Доступ: public


# ::stappler::db::Scheme::EmptyFieldList()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* FieldVec

# ::stappler::db::Scheme::initSchemes(Map<stappler::StringView, const stappler::db::Scheme *> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Map<stappler::StringView, const stappler::db::Scheme *> const&

Возвращает:
* bool

# ::stappler::db::Scheme::Scheme(stappler::StringView const&,bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView const&
* bool


# ::stappler::db::Scheme::Scheme(stappler::StringView const&,stappler::db::Scheme::Options)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView const&
* stappler::db::Scheme::Options


# ::stappler::db::Scheme::Scheme(stappler::StringView const&,std::initializer_list<Field>,bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView const&
* std::initializer_list<Field>
* bool


# ::stappler::db::Scheme::Scheme(stappler::StringView const&,std::initializer_list<Field>,stappler::db::Scheme::Options)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView const&
* std::initializer_list<Field>
* stappler::db::Scheme::Options


# ::stappler::db::Scheme::Scheme(stappler::db::Scheme const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::Scheme const&


# ::stappler::db::Scheme::operator=(stappler::db::Scheme const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::Scheme const&

Возвращает:
* stappler::db::Scheme&

# ::stappler::db::Scheme::Scheme(stappler::db::Scheme&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::Scheme&&


# ::stappler::db::Scheme::operator=(stappler::db::Scheme&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::Scheme&&

Возвращает:
* stappler::db::Scheme&

# ::stappler::db::Scheme::hasDelta() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::db::Scheme::isDetouched() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::db::Scheme::isCompressed() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::db::Scheme::define(std::initializer_list<Field>)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* std::initializer_list<Field>

Возвращает:
* stappler::db::Scheme const&

# ::stappler::db::Scheme::define(Vector<stappler::db::Field>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Vector<stappler::db::Field>&&

Возвращает:
* stappler::db::Scheme const&

# ::stappler::db::Scheme::define(stappler::db::AccessRole&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::AccessRole&&

Возвращает:
* stappler::db::Scheme const&

# ::stappler::db::Scheme::define(stappler::db::UniqueConstraintDef&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::UniqueConstraintDef&&

Возвращает:
* stappler::db::Scheme const&

# ::stappler::db::Scheme::define(stappler::mem_pool::Bytes&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::mem_pool::Bytes&&

Возвращает:
* stappler::db::Scheme const&

# ::stappler::db::Scheme::define<typename,typename>(T&&,Args &&...)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename T
* typename Args

Параметры:
* T&&
* Args &&...

Возвращает:
* stappler::db::Scheme const&

# ::stappler::db::Scheme::addFlags(stappler::db::Scheme::Options)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::Scheme::Options


# ::stappler::db::Scheme::cloneFrom(stappler::db::Scheme*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::Scheme*


# ::stappler::db::Scheme::getName() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::StringView

# ::stappler::db::Scheme::hasAliases() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::db::Scheme::isProtected(stappler::StringView const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView const&

Возвращает:
* bool

# ::stappler::db::Scheme::save(stappler::db::Transaction const&,stappler::db::Object*) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::Transaction const&
* stappler::db::Object*

Возвращает:
* bool

# ::stappler::db::Scheme::hasFiles() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::db::Scheme::hasForceExclude() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::db::Scheme::hasAccessControl() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::db::Scheme::hasVirtuals() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::db::Scheme::getForceInclude() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Set<const stappler::db::Field *> const&

# ::stappler::db::Scheme::getFields() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Map<stappler::mem_pool::String, stappler::db::Field> const&

# ::stappler::db::Scheme::getField(stappler::StringView const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView const&

Возвращает:
* stappler::db::Field const*

# ::stappler::db::Scheme::getUnique() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Vector<stappler::db::Scheme::UniqueConstraint> const&

# ::stappler::db::Scheme::getCompressDict() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::BytesView

# ::stappler::db::Scheme::getForeignLink(stappler::db::FieldObject const*) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::FieldObject const*

Возвращает:
* stappler::db::Field const*

# ::stappler::db::Scheme::getForeignLink(stappler::db::Field const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::Field const&

Возвращает:
* stappler::db::Field const*

# ::stappler::db::Scheme::getForeignLink(stappler::StringView const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView const&

Возвращает:
* stappler::db::Field const*

# ::stappler::db::Scheme::setConfig(stappler::db::InputConfig)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::InputConfig


# ::stappler::db::Scheme::getConfig() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::db::InputConfig const&

# ::stappler::db::Scheme::getMaxRequestSize() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* size_t

# ::stappler::db::Scheme::getMaxVarSize() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* size_t

# ::stappler::db::Scheme::getMaxFileSize() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* size_t

# ::stappler::db::Scheme::isAtomicPatch(stappler::mem_pool::Value const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::mem_pool::Value const&

Возвращает:
* bool

# ::stappler::db::Scheme::hash(stappler::db::ValidationLevel) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::ValidationLevel

Возвращает:
* uint64_t

# ::stappler::db::Scheme::getViews() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Vector<stappler::db::Scheme::ViewScheme *> const&

# ::stappler::db::Scheme::getPatchFields(stappler::mem_pool::Value const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::mem_pool::Value const&

Возвращает:
* Vector<const stappler::db::Field *>

# ::stappler::db::Scheme::getAccessTable() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* AccessTable&

# ::stappler::db::Scheme::getAccessRole(stappler::db::AccessRoleId) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::AccessRoleId

Возвращает:
* stappler::db::AccessRole const*

# ::stappler::db::Scheme::setAccessRole(stappler::db::AccessRoleId,stappler::db::AccessRole&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::AccessRoleId
* stappler::db::AccessRole&&


# ::stappler::db::Scheme::transform(stappler::mem_pool::Value&,stappler::db::Scheme::TransformAction) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::mem_pool::Value&
* stappler::db::Scheme::TransformAction

Возвращает:
* stappler::mem_pool::Value&

# ::stappler::db::Scheme::get<typename,typename>(Storage&&,_Value&&,stappler::db::UpdateFlags) const

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename Storage
* typename _Value

Параметры:
* Storage&&
* _Value&&
* stappler::db::UpdateFlags

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Scheme::get<typename,typename>(Storage&&,_Value&&,stappler::StringView,stappler::db::UpdateFlags) const

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename Storage
* typename _Value

Параметры:
* Storage&&
* _Value&&
* stappler::StringView
* stappler::db::UpdateFlags

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Scheme::get<typename,typename>(Storage&&,_Value&&,std::initializer_list<StringView>&&,stappler::db::UpdateFlags) const

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename Storage
* typename _Value

Параметры:
* Storage&&
* _Value&&
* std::initializer_list<StringView>&&
* stappler::db::UpdateFlags

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Scheme::get<typename,typename>(Storage&&,_Value&&,std::initializer_list<const char *>&&,stappler::db::UpdateFlags) const

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename Storage
* typename _Value

Параметры:
* Storage&&
* _Value&&
* std::initializer_list<const char *>&&
* stappler::db::UpdateFlags

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Scheme::get<typename,typename>(Storage&&,_Value&&,std::initializer_list<const Field *>&&,stappler::db::UpdateFlags) const

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename Storage
* typename _Value

Параметры:
* Storage&&
* _Value&&
* std::initializer_list<const Field *>&&
* stappler::db::UpdateFlags

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Scheme::get<typename,typename>(Storage&&,_Value&&,SpanView<const stappler::db::Field *>,stappler::db::UpdateFlags) const

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename Storage
* typename _Value

Параметры:
* Storage&&
* _Value&&
* SpanView<const stappler::db::Field *>
* stappler::db::UpdateFlags

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Scheme::foreach<typename>(T&&,stappler::db::Query const&,Callback<bool (stappler::mem_pool::Value &)> const&,stappler::db::UpdateFlags) const

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename T

Параметры:
* T&&
* stappler::db::Query const&
* Callback<bool (stappler::mem_pool::Value &)> const&
* stappler::db::UpdateFlags

Возвращает:
* bool

# ::stappler::db::Scheme::select<typename,typename>(T&&,Args &&...) const

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename T
* typename Args

Параметры:
* T&&
* Args &&...

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Scheme::create<typename,typename>(T&&,Args &&...) const

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename T
* typename Args

Параметры:
* T&&
* Args &&...

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Scheme::update<typename,typename>(T&&,Args &&...) const

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename T
* typename Args

Параметры:
* T&&
* Args &&...

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Scheme::remove<typename,typename>(T&&,Args &&...) const

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename T
* typename Args

Параметры:
* T&&
* Args &&...

Возвращает:
* bool

# ::stappler::db::Scheme::count<typename,typename>(T&&,Args &&...) const

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename T
* typename Args

Параметры:
* T&&
* Args &&...

Возвращает:
* size_t

# ::stappler::db::Scheme::touch<typename,typename>(T&&,Args &&...) const

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename T
* typename Args

Параметры:
* T&&
* Args &&...


# ::stappler::db::Scheme::getProperty<typename,typename,typename>(_Storage&&,_Value&&,_Field&&,std::initializer_list<StringView>) const

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename _Storage
* typename _Value
* typename _Field

Параметры:
* _Storage&&
* _Value&&
* _Field&&
* std::initializer_list<StringView>

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Scheme::getProperty<typename,typename,typename>(_Storage&&,_Value&&,_Field&&,Set<const stappler::db::Field *> const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename _Storage
* typename _Value
* typename _Field

Параметры:
* _Storage&&
* _Value&&
* _Field&&
* Set<const stappler::db::Field *> const&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Scheme::setProperty<typename,typename>(T&&,Args &&...) const

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename T
* typename Args

Параметры:
* T&&
* Args &&...

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Scheme::appendProperty<typename,typename>(T&&,Args &&...) const

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename T
* typename Args

Параметры:
* T&&
* Args &&...

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Scheme::clearProperty<typename,typename>(T&&,Args &&...) const

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename T
* typename Args

Параметры:
* T&&
* Args &&...

Возвращает:
* bool

# ::stappler::db::Scheme::countProperty<typename,typename>(T&&,Args &&...) const

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename T
* typename Args

Параметры:
* T&&
* Args &&...

Возвращает:
* size_t

# ::stappler::db::Scheme::foreachWithWorker(stappler::db::Worker&,stappler::db::Query const&,Callback<bool (stappler::mem_pool::Value &)> const&) const

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::db::Worker&
* stappler::db::Query const&
* Callback<bool (stappler::mem_pool::Value &)> const&

Возвращает:
* bool

# ::stappler::db::Scheme::selectWithWorker(stappler::db::Worker&,stappler::db::Query const&) const

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::db::Worker&
* stappler::db::Query const&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Scheme::createWithWorker(stappler::db::Worker&,stappler::mem_pool::Value const&,bool) const

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::db::Worker&
* stappler::mem_pool::Value const&
* bool

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Scheme::updateWithWorker(stappler::db::Worker&,uint64_t,stappler::mem_pool::Value const&,bool) const

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::db::Worker&
* uint64_t
* stappler::mem_pool::Value const&
* bool

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Scheme::updateWithWorker(stappler::db::Worker&,stappler::mem_pool::Value const&,stappler::mem_pool::Value const&,bool) const

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::db::Worker&
* stappler::mem_pool::Value const&
* stappler::mem_pool::Value const&
* bool

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Scheme::removeWithWorker(stappler::db::Worker&,uint64_t) const

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::db::Worker&
* uint64_t

Возвращает:
* bool

# ::stappler::db::Scheme::countWithWorker(stappler::db::Worker&,stappler::db::Query const&) const

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::db::Worker&
* stappler::db::Query const&

Возвращает:
* size_t

# ::stappler::db::Scheme::touchWithWorker(stappler::db::Worker&,uint64_t) const

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::db::Worker&
* uint64_t


# ::stappler::db::Scheme::touchWithWorker(stappler::db::Worker&,stappler::mem_pool::Value const&) const

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::db::Worker&
* stappler::mem_pool::Value const&


# ::stappler::db::Scheme::fieldWithWorker(stappler::db::Action,stappler::db::Worker&,uint64_t,stappler::db::Field const&,stappler::mem_pool::Value&&) const

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

# ::stappler::db::Scheme::fieldWithWorker(stappler::db::Action,stappler::db::Worker&,stappler::mem_pool::Value const&,stappler::db::Field const&,stappler::mem_pool::Value&&) const

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

# ::stappler::db::Scheme::setFileWithWorker(stappler::db::Worker&,uint64_t,stappler::db::Field const&,stappler::db::InputFile&) const

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::db::Worker&
* uint64_t
* stappler::db::Field const&
* stappler::db::InputFile&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Scheme::initScheme()

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::db::Scheme::getFieldSet(stappler::db::Field const&,std::initializer_list<StringView>) const

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::db::Field const&
* std::initializer_list<StringView>

Возвращает:
* Set<const stappler::db::Field *>

# ::stappler::db::Scheme::addView(stappler::db::Scheme const*,stappler::db::Field const*)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::db::Scheme const*
* stappler::db::Field const*


# ::stappler::db::Scheme::addAutoField(stappler::db::Scheme const*,stappler::db::Field const*,stappler::db::AutoFieldScheme const&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::db::Scheme const*
* stappler::db::Field const*
* stappler::db::AutoFieldScheme const&


# ::stappler::db::Scheme::addParent(stappler::db::Scheme const*,stappler::db::Field const*)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::db::Scheme const*
* stappler::db::Field const*


# ::stappler::db::Scheme::createFilePatch(stappler::db::Transaction const&,stappler::mem_pool::Value const&,stappler::mem_pool::Value&) const

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::db::Transaction const&
* stappler::mem_pool::Value const&
* stappler::mem_pool::Value&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Scheme::purgeFilePatch(stappler::db::Transaction const&,stappler::mem_pool::Value const&) const

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::db::Transaction const&
* stappler::mem_pool::Value const&


# ::stappler::db::Scheme::mergeValues(stappler::db::Field const&,stappler::mem_pool::Value const&,stappler::mem_pool::Value&,stappler::mem_pool::Value&) const

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::db::Field const&
* stappler::mem_pool::Value const&
* stappler::mem_pool::Value&
* stappler::mem_pool::Value&


# ::stappler::db::Scheme::prepareUpdate(stappler::mem_pool::Value const&,bool) const

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::mem_pool::Value const&
* bool

Возвращает:
* stappler::Pair<bool, Value>

# ::stappler::db::Scheme::updateObject(stappler::db::Worker&,stappler::mem_pool::Value&&,stappler::mem_pool::Value&) const

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::db::Worker&
* stappler::mem_pool::Value&&
* stappler::mem_pool::Value&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Scheme::doPatch(stappler::db::Worker&,stappler::db::Transaction const&,uint64_t,stappler::mem_pool::Value&) const

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::db::Worker&
* stappler::db::Transaction const&
* uint64_t
* stappler::mem_pool::Value&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Scheme::patchOrUpdate(stappler::db::Worker&,uint64_t,stappler::mem_pool::Value&) const

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::db::Worker&
* uint64_t
* stappler::mem_pool::Value&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Scheme::patchOrUpdate(stappler::db::Worker&,stappler::mem_pool::Value const&,stappler::mem_pool::Value&) const

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::db::Worker&
* stappler::mem_pool::Value const&
* stappler::mem_pool::Value&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Scheme::touchParents(stappler::db::Transaction const&,stappler::mem_pool::Value const&) const

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::db::Transaction const&
* stappler::mem_pool::Value const&


# ::stappler::db::Scheme::extractParents(Map<int64_t, const stappler::db::Scheme *>&,stappler::db::Transaction const&,stappler::mem_pool::Value const&,bool) const

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* Map<int64_t, const stappler::db::Scheme *>&
* stappler::db::Transaction const&
* stappler::mem_pool::Value const&
* bool


# ::stappler::db::Scheme::removeField(stappler::db::Transaction const&,stappler::mem_pool::Value&,stappler::db::Field const&,stappler::mem_pool::Value const&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::db::Transaction const&
* stappler::mem_pool::Value&
* stappler::db::Field const&
* stappler::mem_pool::Value const&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Scheme::finalizeField(stappler::db::Transaction const&,stappler::db::Field const&,stappler::mem_pool::Value const&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::db::Transaction const&
* stappler::db::Field const&
* stappler::mem_pool::Value const&


# ::stappler::db::Scheme::createFile(stappler::db::Transaction const&,stappler::db::Field const&,stappler::db::InputFile&) const

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::db::Transaction const&
* stappler::db::Field const&
* stappler::db::InputFile&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Scheme::createFile(stappler::db::Transaction const&,stappler::db::Field const&,stappler::BytesView const&,stappler::StringView const&,int64_t) const

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::db::Transaction const&
* stappler::db::Field const&
* stappler::BytesView const&
* stappler::StringView const&
* int64_t

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Scheme::processFullTextFields(stappler::mem_pool::Value&,Vector<stappler::mem_pool::String>*) const

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::mem_pool::Value&
* Vector<stappler::mem_pool::String>*


# ::stappler::db::Scheme::makeObjectForPatch(stappler::db::Transaction const&,uint64_t,stappler::mem_pool::Value const&,stappler::mem_pool::Value const&) const

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::db::Transaction const&
* uint64_t
* stappler::mem_pool::Value const&
* stappler::mem_pool::Value const&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Scheme::updateLimits()

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::db::Scheme::validateHint(uint64_t,stappler::mem_pool::Value const&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* uint64_t
* stappler::mem_pool::Value const&

Возвращает:
* bool

# ::stappler::db::Scheme::validateHint(stappler::mem_pool::String const&,stappler::mem_pool::Value const&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::mem_pool::String const&
* stappler::mem_pool::Value const&

Возвращает:
* bool

# ::stappler::db::Scheme::validateHint(stappler::mem_pool::Value const&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::mem_pool::Value const&

Возвращает:
* bool

# ::stappler::db::Scheme::getLinkageForView(stappler::mem_pool::Value const&,stappler::db::Scheme::ViewScheme const&) const

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::mem_pool::Value const&
* stappler::db::Scheme::ViewScheme const&

Возвращает:
* Vector<uint64_t>

# ::stappler::db::Scheme::updateView(stappler::db::Transaction const&,stappler::mem_pool::Value const&,stappler::db::Scheme::ViewScheme const*,Vector<uint64_t> const&) const

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::db::Transaction const&
* stappler::mem_pool::Value const&
* stappler::db::Scheme::ViewScheme const*
* Vector<uint64_t> const&


# ::stappler::db::Scheme::fields

## BRIEF

## CONTENT

Доступ: protected

Тип: Map<stappler::mem_pool::String, stappler::db::Field>


# ::stappler::db::Scheme::name

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::mem_pool::String


# ::stappler::db::Scheme::flags

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::db::Scheme::Options


# ::stappler::db::Scheme::config

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::db::InputConfig


# ::stappler::db::Scheme::views

## BRIEF

## CONTENT

Доступ: protected

Тип: Vector<stappler::db::Scheme::ViewScheme *>


# ::stappler::db::Scheme::parents

## BRIEF

## CONTENT

Доступ: protected

Тип: Vector<stappler::db::Scheme::ParentScheme *>


# ::stappler::db::Scheme::forceInclude

## BRIEF

## CONTENT

Доступ: protected

Тип: Set<const stappler::db::Field *>


# ::stappler::db::Scheme::fullTextFields

## BRIEF

## CONTENT

Доступ: protected

Тип: Set<const stappler::db::Field *>


# ::stappler::db::Scheme::autoFieldReq

## BRIEF

## CONTENT

Доступ: protected

Тип: Set<const stappler::db::Field *>


# ::stappler::db::Scheme::_hasFiles

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::db::Scheme::_hasForceExclude

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::db::Scheme::_hasAccessControl

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::db::Scheme::_hasVirtuals

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::db::Scheme::roles

## BRIEF

## CONTENT

Доступ: protected

Тип: AccessTable


# ::stappler::db::Scheme::oidField

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::db::Field


# ::stappler::db::Scheme::unique

## BRIEF

## CONTENT

Доступ: protected

Тип: Vector<stappler::db::Scheme::UniqueConstraint>


# ::stappler::db::Scheme::_compressDict

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::mem_pool::Bytes


# ::stappler::db::operator|(Scheme::Options const&,Scheme::Options const&)

## BRIEF

## CONTENT

Параметры:
* Scheme::Options const&
* Scheme::Options const&

Возвращает:
* Scheme::Options

# ::stappler::db::operator&(Scheme::Options const&,Scheme::Options const&)

## BRIEF

## CONTENT

Параметры:
* Scheme::Options const&
* Scheme::Options const&

Возвращает:
* Scheme::Options

# ::stappler::db::operator^(Scheme::Options const&,Scheme::Options const&)

## BRIEF

## CONTENT

Параметры:
* Scheme::Options const&
* Scheme::Options const&

Возвращает:
* Scheme::Options

# ::stappler::db::operator|=(Scheme::Options&,Scheme::Options const&)

## BRIEF

## CONTENT

Параметры:
* Scheme::Options&
* Scheme::Options const&

Возвращает:
* Scheme::Options&

# ::stappler::db::operator&=(Scheme::Options&,Scheme::Options const&)

## BRIEF

## CONTENT

Параметры:
* Scheme::Options&
* Scheme::Options const&

Возвращает:
* Scheme::Options&

# ::stappler::db::operator^=(Scheme::Options&,Scheme::Options const&)

## BRIEF

## CONTENT

Параметры:
* Scheme::Options&
* Scheme::Options const&

Возвращает:
* Scheme::Options&

# ::stappler::db::operator==(Scheme::Options const&,std::underlying_type<Scheme::Options>::type const&)

## BRIEF

## CONTENT

Параметры:
* Scheme::Options const&
* std::underlying_type<Scheme::Options>::type const&

Возвращает:
* bool

# ::stappler::db::operator==(std::underlying_type<Scheme::Options>::type const&,Scheme::Options const&)

## BRIEF

## CONTENT

Параметры:
* std::underlying_type<Scheme::Options>::type const&
* Scheme::Options const&

Возвращает:
* bool

# ::stappler::db::operator!=(Scheme::Options const&,std::underlying_type<Scheme::Options>::type const&)

## BRIEF

## CONTENT

Параметры:
* Scheme::Options const&
* std::underlying_type<Scheme::Options>::type const&

Возвращает:
* bool

# ::stappler::db::operator!=(std::underlying_type<Scheme::Options>::type const&,Scheme::Options const&)

## BRIEF

## CONTENT

Параметры:
* std::underlying_type<Scheme::Options>::type const&
* Scheme::Options const&

Возвращает:
* bool

# ::stappler::db::operator~(Scheme::Options const&)

## BRIEF

## CONTENT

Параметры:
* Scheme::Options const&

Возвращает:
* Scheme::Options

# ::stappler::db::Scheme::get<typename,typename>(Storage&&,_Value&&,stappler::db::UpdateFlags) const

## BRIEF

## CONTENT

Параметры шаблона:
* typename Storage
* typename _Value

Параметры:
* Storage&&
* _Value&&
* stappler::db::UpdateFlags

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Scheme::get<typename,typename>(Storage&&,_Value&&,stappler::StringView,stappler::db::UpdateFlags) const

## BRIEF

## CONTENT

Параметры шаблона:
* typename Storage
* typename _Value

Параметры:
* Storage&&
* _Value&&
* stappler::StringView
* stappler::db::UpdateFlags

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Scheme::get<typename,typename>(Storage&&,_Value&&,std::initializer_list<StringView>&&,stappler::db::UpdateFlags) const

## BRIEF

## CONTENT

Параметры шаблона:
* typename Storage
* typename _Value

Параметры:
* Storage&&
* _Value&&
* std::initializer_list<StringView>&&
* stappler::db::UpdateFlags

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Scheme::get<typename,typename>(Storage&&,_Value&&,std::initializer_list<const char *>&&,stappler::db::UpdateFlags) const

## BRIEF

## CONTENT

Параметры шаблона:
* typename Storage
* typename _Value

Параметры:
* Storage&&
* _Value&&
* std::initializer_list<const char *>&&
* stappler::db::UpdateFlags

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Scheme::get<typename,typename>(Storage&&,_Value&&,std::initializer_list<const Field *>&&,stappler::db::UpdateFlags) const

## BRIEF

## CONTENT

Параметры шаблона:
* typename Storage
* typename _Value

Параметры:
* Storage&&
* _Value&&
* std::initializer_list<const Field *>&&
* stappler::db::UpdateFlags

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Scheme::get<typename,typename>(Storage&&,_Value&&,SpanView<const stappler::db::Field *>,stappler::db::UpdateFlags) const

## BRIEF

## CONTENT

Параметры шаблона:
* typename Storage
* typename _Value

Параметры:
* Storage&&
* _Value&&
* SpanView<const stappler::db::Field *>
* stappler::db::UpdateFlags

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Scheme::foreach<typename>(Storage&&,stappler::db::Query const&,Callback<bool (stappler::mem_pool::Value &)> const&,stappler::db::UpdateFlags) const

## BRIEF

## CONTENT

Параметры шаблона:
* typename Storage

Параметры:
* Storage&&
* stappler::db::Query const&
* Callback<bool (stappler::mem_pool::Value &)> const&
* stappler::db::UpdateFlags

Возвращает:
* bool

# ::stappler::db::Scheme::select<typename,typename>(T&&,Args &&...) const

## BRIEF

## CONTENT

Параметры шаблона:
* typename T
* typename Args

Параметры:
* T&&
* Args &&...

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Scheme::create<typename,typename>(T&&,Args &&...) const

## BRIEF

## CONTENT

Параметры шаблона:
* typename T
* typename Args

Параметры:
* T&&
* Args &&...

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Scheme::update<typename,typename>(T&&,Args &&...) const

## BRIEF

## CONTENT

Параметры шаблона:
* typename T
* typename Args

Параметры:
* T&&
* Args &&...

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Scheme::remove<typename,typename>(T&&,Args &&...) const

## BRIEF

## CONTENT

Параметры шаблона:
* typename T
* typename Args

Параметры:
* T&&
* Args &&...

Возвращает:
* bool

# ::stappler::db::Scheme::count<typename,typename>(T&&,Args &&...) const

## BRIEF

## CONTENT

Параметры шаблона:
* typename T
* typename Args

Параметры:
* T&&
* Args &&...

Возвращает:
* size_t

# ::stappler::db::Scheme::touch<typename,typename>(T&&,Args &&...) const

## BRIEF

## CONTENT

Параметры шаблона:
* typename T
* typename Args

Параметры:
* T&&
* Args &&...


# ::stappler::db::Scheme::getProperty<typename,typename,typename>(_Storage&&,_Value&&,_Field&&,std::initializer_list<StringView>) const

## BRIEF

## CONTENT

Параметры шаблона:
* typename _Storage
* typename _Value
* typename _Field

Параметры:
* _Storage&&
* _Value&&
* _Field&&
* std::initializer_list<StringView>

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Scheme::getProperty<typename,typename,typename>(_Storage&&,_Value&&,_Field&&,Set<const stappler::db::Field *> const&) const

## BRIEF

## CONTENT

Параметры шаблона:
* typename _Storage
* typename _Value
* typename _Field

Параметры:
* _Storage&&
* _Value&&
* _Field&&
* Set<const stappler::db::Field *> const&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Scheme::setProperty<typename,typename>(T&&,Args &&...) const

## BRIEF

## CONTENT

Параметры шаблона:
* typename T
* typename Args

Параметры:
* T&&
* Args &&...

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Scheme::appendProperty<typename,typename>(T&&,Args &&...) const

## BRIEF

## CONTENT

Параметры шаблона:
* typename T
* typename Args

Параметры:
* T&&
* Args &&...

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Scheme::clearProperty<typename,typename>(T&&,Args &&...) const

## BRIEF

## CONTENT

Параметры шаблона:
* typename T
* typename Args

Параметры:
* T&&
* Args &&...

Возвращает:
* bool

# ::stappler::db::Scheme::countProperty<typename,typename>(T&&,Args &&...) const

## BRIEF

## CONTENT

Параметры шаблона:
* typename T
* typename Args

Параметры:
* T&&
* Args &&...

Возвращает:
* size_t

# ::stappler::db::Scheme::define<typename,typename>(T&&,Args &&...)

## BRIEF

## CONTENT

Параметры шаблона:
* typename T
* typename Args

Параметры:
* T&&
* Args &&...

Возвращает:
* stappler::db::Scheme const&