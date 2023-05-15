Title: STStorageField.h


# MODULES_DB_STSTORAGEFIELD_H_

## BRIEF

## CONTENT


# ::stappler::db::Type

## BRIEF

## CONTENT

Значения:
* None
* Integer
* Float
* Boolean
* Text
* Bytes
* Data
* Extra
* Object
* Set
* Array
* File
* Image
* View
* FullTextView
* Virtual
* Custom


# ::stappler::db::Flags

## BRIEF

## CONTENT

Значения:
* None
* Required
* Protected
* ReadOnly
* Reference
* Unique
* AutoCTime
* AutoMTime
* AutoUser
* Indexed
* Admin
* ForceInclude
* ForceExclude
* Composed
* Compressed
* Enum
* PatternIndexed
* TrigramIndexed
* TsNormalize_DocLengthLog
* TsNormalize_DocLength
* TsNormalize_UniqueWordsCount
* TsNormalize_UniqueWordsCountLog


# ::stappler::db::operator|(stappler::db::Flags const&,stappler::db::Flags const&)

## BRIEF

## CONTENT

Параметры:
* stappler::db::Flags const&
* stappler::db::Flags const&

Возвращает:
* stappler::db::Flags

# ::stappler::db::operator&(stappler::db::Flags const&,stappler::db::Flags const&)

## BRIEF

## CONTENT

Параметры:
* stappler::db::Flags const&
* stappler::db::Flags const&

Возвращает:
* stappler::db::Flags

# ::stappler::db::operator^(stappler::db::Flags const&,stappler::db::Flags const&)

## BRIEF

## CONTENT

Параметры:
* stappler::db::Flags const&
* stappler::db::Flags const&

Возвращает:
* stappler::db::Flags

# ::stappler::db::operator|=(stappler::db::Flags&,stappler::db::Flags const&)

## BRIEF

## CONTENT

Параметры:
* stappler::db::Flags&
* stappler::db::Flags const&

Возвращает:
* stappler::db::Flags&

# ::stappler::db::operator&=(stappler::db::Flags&,stappler::db::Flags const&)

## BRIEF

## CONTENT

Параметры:
* stappler::db::Flags&
* stappler::db::Flags const&

Возвращает:
* stappler::db::Flags&

# ::stappler::db::operator^=(stappler::db::Flags&,stappler::db::Flags const&)

## BRIEF

## CONTENT

Параметры:
* stappler::db::Flags&
* stappler::db::Flags const&

Возвращает:
* stappler::db::Flags&

# ::stappler::db::operator==(stappler::db::Flags const&,std::underlying_type<Flags>::type const&)

## BRIEF

## CONTENT

Параметры:
* stappler::db::Flags const&
* std::underlying_type<Flags>::type const&

Возвращает:
* bool

# ::stappler::db::operator==(std::underlying_type<Flags>::type const&,stappler::db::Flags const&)

## BRIEF

## CONTENT

Параметры:
* std::underlying_type<Flags>::type const&
* stappler::db::Flags const&

Возвращает:
* bool

# ::stappler::db::operator!=(stappler::db::Flags const&,std::underlying_type<Flags>::type const&)

## BRIEF

## CONTENT

Параметры:
* stappler::db::Flags const&
* std::underlying_type<Flags>::type const&

Возвращает:
* bool

# ::stappler::db::operator!=(std::underlying_type<Flags>::type const&,stappler::db::Flags const&)

## BRIEF

## CONTENT

Параметры:
* std::underlying_type<Flags>::type const&
* stappler::db::Flags const&

Возвращает:
* bool

# ::stappler::db::operator~(stappler::db::Flags const&)

## BRIEF

## CONTENT

Параметры:
* stappler::db::Flags const&

Возвращает:
* stappler::db::Flags

# ::stappler::db::checkIfComparationIsValid(stappler::db::Type,stappler::db::Comparation,stappler::db::Flags)

## BRIEF

## CONTENT

Параметры:
* stappler::db::Type
* stappler::db::Comparation
* stappler::db::Flags

Возвращает:
* bool

# ::stappler::db::Transform

## BRIEF

## CONTENT

Значения:
* None
* Text
* Identifier
* Alias
* Url
* Email
* Number
* Hexadecimial
* Base64
* Uuid
* PublicKey
* Array
* Password


# ::stappler::db::ValidationLevel

## BRIEF

## CONTENT

Значения:
* NamesAndTypes
* Slots
* Full


# ::stappler::db::Linkage

## BRIEF

## CONTENT

Значения:
* Auto
* Manual
* None


# ::stappler::db::MinLength

## BRIEF

## CONTENT


# ::stappler::db::MaxLength

## BRIEF

## CONTENT


# ::stappler::db::PasswordSalt

## BRIEF

## CONTENT


# ::stappler::db::ForeignLink

## BRIEF

## CONTENT


# ::stappler::db::Documentation

## BRIEF

## CONTENT


# ::stappler::db::ImagePolicy

## BRIEF

## CONTENT

Значения:
* Resize
* Reject


# ::stappler::db::MaxFileSize

## BRIEF

## CONTENT


# ::stappler::db::MaxImageSize

## BRIEF

## CONTENT


# ::stappler::db::MaxImageSize::width

## BRIEF

## CONTENT

Тип: size_t


# ::stappler::db::MaxImageSize::height

## BRIEF

## CONTENT

Тип: size_t


# ::stappler::db::MaxImageSize::policy

## BRIEF

## CONTENT

Тип: stappler::db::ImagePolicy


# ::stappler::db::MaxImageSize::MaxImageSize()

## BRIEF

## CONTENT


# ::stappler::db::MaxImageSize::MaxImageSize(size_t,size_t,stappler::db::ImagePolicy)

## BRIEF

## CONTENT

Параметры:
* size_t
* size_t
* stappler::db::ImagePolicy


# ::stappler::db::MinImageSize

## BRIEF

## CONTENT


# ::stappler::db::MinImageSize::width

## BRIEF

## CONTENT

Тип: size_t


# ::stappler::db::MinImageSize::height

## BRIEF

## CONTENT

Тип: size_t


# ::stappler::db::MinImageSize::policy

## BRIEF

## CONTENT

Тип: stappler::db::ImagePolicy


# ::stappler::db::MinImageSize::MinImageSize()

## BRIEF

## CONTENT


# ::stappler::db::MinImageSize::MinImageSize(size_t,size_t,stappler::db::ImagePolicy)

## BRIEF

## CONTENT

Параметры:
* size_t
* size_t
* stappler::db::ImagePolicy


# ::stappler::db::Thumbnail

## BRIEF

## CONTENT


# ::stappler::db::Thumbnail::width

## BRIEF

## CONTENT

Тип: size_t


# ::stappler::db::Thumbnail::height

## BRIEF

## CONTENT

Тип: size_t


# ::stappler::db::Thumbnail::name

## BRIEF

## CONTENT

Тип: stappler::mem_pool::String


# ::stappler::db::Thumbnail::Thumbnail(stappler::mem_pool::String&&,size_t,size_t)

## BRIEF

## CONTENT

Параметры:
* stappler::mem_pool::String&&
* size_t
* size_t


# ::stappler::db::RemovePolicy

## BRIEF

## CONTENT

Значения:
* Cascade
* Restrict
* Reference
* StrongReference
* Null


# ::stappler::db::FilterFn

## BRIEF

## CONTENT


# ::stappler::db::DefaultFn

## BRIEF

## CONTENT


# ::stappler::db::ReadFilterFn

## BRIEF

## CONTENT


# ::stappler::db::WriteFilterFn

## BRIEF

## CONTENT


# ::stappler::db::ReplaceFilterFn

## BRIEF

## CONTENT


# ::stappler::db::ViewLinkageFn

## BRIEF

## CONTENT


# ::stappler::db::ViewFn

## BRIEF

## CONTENT


# ::stappler::db::FullTextViewFn

## BRIEF

## CONTENT


# ::stappler::db::FullTextQueryFn

## BRIEF

## CONTENT


# ::stappler::db::VirtualReadFn

## BRIEF

## CONTENT


# ::stappler::db::VirtualWriteFn

## BRIEF

## CONTENT


# ::stappler::db::AutoFieldScheme

## BRIEF

## CONTENT

Базовые классы:
* AllocBase


# ::stappler::db::AutoFieldScheme::ReqVec

## BRIEF

## CONTENT


# ::stappler::db::AutoFieldScheme::scheme

## BRIEF

## CONTENT

Тип: stappler::db::Scheme const&


# ::stappler::db::AutoFieldScheme::requiresForAuto

## BRIEF

## CONTENT

Тип: ReqVec


# ::stappler::db::AutoFieldScheme::linkage

## BRIEF

## CONTENT

Тип: stappler::db::ViewLinkageFn


# ::stappler::db::AutoFieldScheme::requiresForLinking

## BRIEF

## CONTENT

Тип: ReqVec


# ::stappler::db::AutoFieldScheme::AutoFieldScheme(stappler::db::Scheme const&,stappler::db::AutoFieldScheme::ReqVec&&,stappler::db::ViewLinkageFn&&,stappler::db::AutoFieldScheme::ReqVec&&)

## BRIEF

## CONTENT

Параметры:
* stappler::db::Scheme const&
* stappler::db::AutoFieldScheme::ReqVec&&
* stappler::db::ViewLinkageFn&&
* stappler::db::AutoFieldScheme::ReqVec&&


# ::stappler::db::AutoFieldScheme::AutoFieldScheme(stappler::db::Scheme const&,stappler::db::AutoFieldScheme::ReqVec&&,stappler::db::AutoFieldScheme::ReqVec&&)

## BRIEF

## CONTENT

Параметры:
* stappler::db::Scheme const&
* stappler::db::AutoFieldScheme::ReqVec&&
* stappler::db::AutoFieldScheme::ReqVec&&


# ::stappler::db::AutoFieldDef

## BRIEF

## CONTENT


# ::stappler::db::AutoFieldDef::schemes

## BRIEF

## CONTENT

Тип: Vector<stappler::db::AutoFieldScheme>


# ::stappler::db::AutoFieldDef::defaultFn

## BRIEF

## CONTENT

Тип: stappler::db::DefaultFn


# ::stappler::db::AutoFieldDef::requireFields

## BRIEF

## CONTENT

Тип: Vector<stappler::mem_pool::String>


# ::stappler::db::UniqueConstraintDef

## BRIEF

## CONTENT


# ::stappler::db::UniqueConstraintDef::name

## BRIEF

## CONTENT

Тип: stappler::StringView


# ::stappler::db::UniqueConstraintDef::fields

## BRIEF

## CONTENT

Тип: Vector<stappler::StringView>


# ::stappler::db::Field

## BRIEF

## CONTENT

Базовые классы:
* AllocBase


# ::stappler::db::Field::Data<typename>(stappler::mem_pool::String&&,Args &&...)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename Args

Параметры:
* stappler::mem_pool::String&&
* Args &&...

Возвращает:
* stappler::db::Field

# ::stappler::db::Field::Integer<typename>(stappler::mem_pool::String&&,Args &&...)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename Args

Параметры:
* stappler::mem_pool::String&&
* Args &&...

Возвращает:
* stappler::db::Field

# ::stappler::db::Field::Float<typename>(stappler::mem_pool::String&&,Args &&...)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename Args

Параметры:
* stappler::mem_pool::String&&
* Args &&...

Возвращает:
* stappler::db::Field

# ::stappler::db::Field::Boolean<typename>(stappler::mem_pool::String&&,Args &&...)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename Args

Параметры:
* stappler::mem_pool::String&&
* Args &&...

Возвращает:
* stappler::db::Field

# ::stappler::db::Field::Text<typename>(stappler::mem_pool::String&&,Args &&...)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename Args

Параметры:
* stappler::mem_pool::String&&
* Args &&...

Возвращает:
* stappler::db::Field

# ::stappler::db::Field::Bytes<typename>(stappler::mem_pool::String&&,Args &&...)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename Args

Параметры:
* stappler::mem_pool::String&&
* Args &&...

Возвращает:
* stappler::db::Field

# ::stappler::db::Field::Password<typename>(stappler::mem_pool::String&&,Args &&...)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename Args

Параметры:
* stappler::mem_pool::String&&
* Args &&...

Возвращает:
* stappler::db::Field

# ::stappler::db::Field::Extra<typename>(stappler::mem_pool::String&&,Args &&...)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename Args

Параметры:
* stappler::mem_pool::String&&
* Args &&...

Возвращает:
* stappler::db::Field

# ::stappler::db::Field::Extra<typename>(stappler::mem_pool::String&&,stappler::InitializerList<Field>&&,Args &&...)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename Args

Параметры:
* stappler::mem_pool::String&&
* stappler::InitializerList<Field>&&
* Args &&...

Возвращает:
* stappler::db::Field

# ::stappler::db::Field::File<typename>(stappler::mem_pool::String&&,Args &&...)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename Args

Параметры:
* stappler::mem_pool::String&&
* Args &&...

Возвращает:
* stappler::db::Field

# ::stappler::db::Field::Image<typename>(stappler::mem_pool::String&&,Args &&...)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename Args

Параметры:
* stappler::mem_pool::String&&
* Args &&...

Возвращает:
* stappler::db::Field

# ::stappler::db::Field::Object<typename>(stappler::mem_pool::String&&,Args &&...)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename Args

Параметры:
* stappler::mem_pool::String&&
* Args &&...

Возвращает:
* stappler::db::Field

# ::stappler::db::Field::Set<typename>(stappler::mem_pool::String&&,Args &&...)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename Args

Параметры:
* stappler::mem_pool::String&&
* Args &&...

Возвращает:
* stappler::db::Field

# ::stappler::db::Field::Array<typename>(stappler::mem_pool::String&&,Args &&...)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename Args

Параметры:
* stappler::mem_pool::String&&
* Args &&...

Возвращает:
* stappler::db::Field

# ::stappler::db::Field::View<typename>(stappler::mem_pool::String&&,Args &&...)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename Args

Параметры:
* stappler::mem_pool::String&&
* Args &&...

Возвращает:
* stappler::db::Field

# ::stappler::db::Field::FullTextView<typename>(stappler::mem_pool::String&&,Args &&...)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename Args

Параметры:
* stappler::mem_pool::String&&
* Args &&...

Возвращает:
* stappler::db::Field

# ::stappler::db::Field::Virtual<typename>(stappler::mem_pool::String&&,Args &&...)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename Args

Параметры:
* stappler::mem_pool::String&&
* Args &&...

Возвращает:
* stappler::db::Field

# ::stappler::db::Field::Custom<typename>(stappler::db::FieldCustom*)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename Args

Параметры:
* stappler::db::FieldCustom*

Возвращает:
* stappler::db::Field

# ::stappler::db::Field::Slot

## BRIEF

## CONTENT

Доступ: public

Базовые классы:
* AllocBase


# ::stappler::db::Field::Slot::setOptions<typename,typename>(F&,T&&)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename F
* typename T

Параметры:
* F&
* T&&


# ::stappler::db::Field::Slot::setOptions<typename,typename,typename>(F&,T&&,Args &&...)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename F
* typename T
* typename Args

Параметры:
* F&
* T&&
* Args &&...


# ::stappler::db::Field::Slot::init<typename>(F&)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename F

Параметры:
* F&


# ::stappler::db::Field::Slot::init<typename,typename>(F&,Args &&...)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename F
* typename Args

Параметры:
* F&
* Args &&...


# ::stappler::db::Field::Slot::Slot(stappler::mem_pool::String&&,stappler::db::Type)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::mem_pool::String&&
* stappler::db::Type


# ::stappler::db::Field::Slot::getName() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::StringView

# ::stappler::db::Field::Slot::hasFlag(stappler::db::Flags) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::Flags

Возвращает:
* bool

# ::stappler::db::Field::Slot::getType() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::db::Type

# ::stappler::db::Field::Slot::isProtected() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::db::Field::Slot::getTransform() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::db::Transform

# ::stappler::db::Field::Slot::isSimpleLayout() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::db::Field::Slot::isDataLayout() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::db::Field::Slot::isIndexed() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::db::Field::Slot::isFile() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::db::Field::Slot::hasDefault() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::db::Field::Slot::getDefault(stappler::mem_pool::Value const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::mem_pool::Value const&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Field::Slot::transformValue(stappler::db::Scheme const&,stappler::mem_pool::Value const&,stappler::mem_pool::Value&,bool) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::Scheme const&
* stappler::mem_pool::Value const&
* stappler::mem_pool::Value&
* bool

Возвращает:
* bool

# ::stappler::db::Field::Slot::hash(stappler::mem_pool::StringStream&,stappler::db::ValidationLevel) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::mem_pool::StringStream&
* stappler::db::ValidationLevel


# ::stappler::db::Field::Slot::def

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::mem_pool::Value


# ::stappler::db::Field::Slot::name

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::mem_pool::String


# ::stappler::db::Field::Slot::documentation

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::mem_pool::String


# ::stappler::db::Field::Slot::flags

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::db::Flags


# ::stappler::db::Field::Slot::type

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::db::Type


# ::stappler::db::Field::Slot::transform

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::db::Transform


# ::stappler::db::Field::Slot::defaultFn

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::db::DefaultFn


# ::stappler::db::Field::Slot::readFilterFn

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::db::ReadFilterFn


# ::stappler::db::Field::Slot::writeFilterFn

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::db::WriteFilterFn


# ::stappler::db::Field::Slot::replaceFilterFn

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::db::ReplaceFilterFn


# ::stappler::db::Field::Slot::autoField

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::db::AutoFieldDef


# ::stappler::db::Field::Slot::owner

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::db::Scheme const*


# ::stappler::db::Field::Slot::root

## BRIEF

## CONTENT

Доступ: public

Тип: Field::Slot const*


# ::stappler::db::Field::getName() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::StringView

# ::stappler::db::Field::getType() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::db::Type

# ::stappler::db::Field::getFlags() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::db::Flags

# ::stappler::db::Field::getTransform() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::db::Transform

# ::stappler::db::Field::getDefault(stappler::mem_pool::Value const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::mem_pool::Value const&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Field::hasFlag(stappler::db::Flags) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::Flags

Возвращает:
* bool

# ::stappler::db::Field::hasDefault() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::db::Field::isProtected() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::db::Field::isSimpleLayout() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::db::Field::isDataLayout() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::db::Field::isIndexed() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::db::Field::isFile() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::db::Field::isReference() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::db::Field::getForeignScheme() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::db::Scheme const*

# ::stappler::db::Field::hash(stappler::mem_pool::StringStream&,stappler::db::ValidationLevel) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::mem_pool::StringStream&
* stappler::db::ValidationLevel


# ::stappler::db::Field::transform(stappler::db::Scheme const&,int64_t,stappler::mem_pool::Value&,bool) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::Scheme const&
* int64_t
* stappler::mem_pool::Value&
* bool

Возвращает:
* bool

# ::stappler::db::Field::transform(stappler::db::Scheme const&,stappler::mem_pool::Value const&,stappler::mem_pool::Value&,bool) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::Scheme const&
* stappler::mem_pool::Value const&
* stappler::mem_pool::Value&
* bool

Возвращает:
* bool

# ::stappler::db::Field::operator bool() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::db::Field::getSlot<typename>() const

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename SlotType

Возвращает:
* SlotType const*

# ::stappler::db::Field::getTypeDesc() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Field::Field(stappler::db::Field::Slot const*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::Field::Slot const*


# ::stappler::db::Field::Field(stappler::db::Field const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::Field const&


# ::stappler::db::Field::operator=(stappler::db::Field const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::Field const&

Возвращает:
* stappler::db::Field&

# ::stappler::db::Field::Field(stappler::db::Field&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::Field&&


# ::stappler::db::Field::operator=(stappler::db::Field&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::Field&&

Возвращает:
* stappler::db::Field&

# ::stappler::db::Field::slot

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::db::Field::Slot const*


# ::stappler::db::FieldText

## BRIEF

## CONTENT

Базовые классы:
* Field::Slot


# ::stappler::db::FieldText::~FieldText()

## BRIEF

## CONTENT


# ::stappler::db::FieldText::FieldText<typename>(stappler::mem_pool::String&&,stappler::db::Type,Args &&...)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Args

Параметры:
* stappler::mem_pool::String&&
* stappler::db::Type
* Args &&...


# ::stappler::db::FieldText::transformValue(stappler::db::Scheme const&,stappler::mem_pool::Value const&,stappler::mem_pool::Value&,bool) const

## BRIEF

## CONTENT

Параметры:
* stappler::db::Scheme const&
* stappler::mem_pool::Value const&
* stappler::mem_pool::Value&
* bool

Возвращает:
* bool

# ::stappler::db::FieldText::hash(stappler::mem_pool::StringStream&,stappler::db::ValidationLevel) const

## BRIEF

## CONTENT

Параметры:
* stappler::mem_pool::StringStream&
* stappler::db::ValidationLevel


# ::stappler::db::FieldText::minLength

## BRIEF

## CONTENT

Тип: size_t


# ::stappler::db::FieldText::maxLength

## BRIEF

## CONTENT

Тип: size_t


# ::stappler::db::FieldPassword

## BRIEF

## CONTENT

Базовые классы:
* Field::Slot


# ::stappler::db::FieldPassword::~FieldPassword()

## BRIEF

## CONTENT


# ::stappler::db::FieldPassword::FieldPassword<typename>(stappler::mem_pool::String&&,Args &&...)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Args

Параметры:
* stappler::mem_pool::String&&
* Args &&...


# ::stappler::db::FieldPassword::transformValue(stappler::db::Scheme const&,stappler::mem_pool::Value const&,stappler::mem_pool::Value&,bool) const

## BRIEF

## CONTENT

Параметры:
* stappler::db::Scheme const&
* stappler::mem_pool::Value const&
* stappler::mem_pool::Value&
* bool

Возвращает:
* bool

# ::stappler::db::FieldPassword::hash(stappler::mem_pool::StringStream&,stappler::db::ValidationLevel) const

## BRIEF

## CONTENT

Параметры:
* stappler::mem_pool::StringStream&
* stappler::db::ValidationLevel


# ::stappler::db::FieldPassword::minLength

## BRIEF

## CONTENT

Тип: size_t


# ::stappler::db::FieldPassword::maxLength

## BRIEF

## CONTENT

Тип: size_t


# ::stappler::db::FieldPassword::salt

## BRIEF

## CONTENT

Тип: stappler::mem_pool::String


# ::stappler::db::FieldExtra

## BRIEF

## CONTENT

Базовые классы:
* Field::Slot


# ::stappler::db::FieldExtra::~FieldExtra()

## BRIEF

## CONTENT


# ::stappler::db::FieldExtra::FieldExtra<typename>(stappler::mem_pool::String&&,Args &&...)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Args

Параметры:
* stappler::mem_pool::String&&
* Args &&...


# ::stappler::db::FieldExtra::hasDefault() const

## BRIEF

## CONTENT

Возвращает:
* bool

# ::stappler::db::FieldExtra::getDefault(stappler::mem_pool::Value const&) const

## BRIEF

## CONTENT

Параметры:
* stappler::mem_pool::Value const&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::FieldExtra::transformValue(stappler::db::Scheme const&,stappler::mem_pool::Value const&,stappler::mem_pool::Value&,bool) const

## BRIEF

## CONTENT

Параметры:
* stappler::db::Scheme const&
* stappler::mem_pool::Value const&
* stappler::mem_pool::Value&
* bool

Возвращает:
* bool

# ::stappler::db::FieldExtra::hash(stappler::mem_pool::StringStream&,stappler::db::ValidationLevel) const

## BRIEF

## CONTENT

Параметры:
* stappler::mem_pool::StringStream&
* stappler::db::ValidationLevel


# ::stappler::db::FieldExtra::fields

## BRIEF

## CONTENT

Тип: Map<stappler::mem_pool::String, stappler::db::Field>


# ::stappler::db::FieldFile

## BRIEF

## CONTENT

Базовые классы:
* Field::Slot


# ::stappler::db::FieldFile::~FieldFile()

## BRIEF

## CONTENT


# ::stappler::db::FieldFile::FieldFile<typename>(stappler::mem_pool::String&&,Args &&...)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Args

Параметры:
* stappler::mem_pool::String&&
* Args &&...


# ::stappler::db::FieldFile::hash(stappler::mem_pool::StringStream&,stappler::db::ValidationLevel) const

## BRIEF

## CONTENT

Параметры:
* stappler::mem_pool::StringStream&
* stappler::db::ValidationLevel


# ::stappler::db::FieldFile::maxSize

## BRIEF

## CONTENT

Тип: size_t


# ::stappler::db::FieldFile::allowedTypes

## BRIEF

## CONTENT

Тип: Vector<stappler::mem_pool::String>


# ::stappler::db::FieldImage

## BRIEF

## CONTENT

Базовые классы:
* Field::Slot


# ::stappler::db::FieldImage::~FieldImage()

## BRIEF

## CONTENT


# ::stappler::db::FieldImage::FieldImage<typename>(stappler::mem_pool::String&&,Args &&...)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Args

Параметры:
* stappler::mem_pool::String&&
* Args &&...


# ::stappler::db::FieldImage::hash(stappler::mem_pool::StringStream&,stappler::db::ValidationLevel) const

## BRIEF

## CONTENT

Параметры:
* stappler::mem_pool::StringStream&
* stappler::db::ValidationLevel


# ::stappler::db::FieldImage::maxSize

## BRIEF

## CONTENT

Тип: size_t


# ::stappler::db::FieldImage::allowedTypes

## BRIEF

## CONTENT

Тип: Vector<stappler::mem_pool::String>


# ::stappler::db::FieldImage::maxImageSize

## BRIEF

## CONTENT

Тип: stappler::db::MaxImageSize


# ::stappler::db::FieldImage::minImageSize

## BRIEF

## CONTENT

Тип: stappler::db::MinImageSize


# ::stappler::db::FieldImage::thumbnails

## BRIEF

## CONTENT

Тип: Vector<stappler::db::Thumbnail>


# ::stappler::db::FieldImage::primary

## BRIEF

## CONTENT

Тип: bool


# ::stappler::db::FieldObject

## BRIEF

## CONTENT

Базовые классы:
* Field::Slot


# ::stappler::db::FieldObject::~FieldObject()

## BRIEF

## CONTENT


# ::stappler::db::FieldObject::FieldObject<typename>(stappler::mem_pool::String&&,stappler::db::Type,Args &&...)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Args

Параметры:
* stappler::mem_pool::String&&
* stappler::db::Type
* Args &&...


# ::stappler::db::FieldObject::transformValue(stappler::db::Scheme const&,stappler::mem_pool::Value const&,stappler::mem_pool::Value&,bool) const

## BRIEF

## CONTENT

Параметры:
* stappler::db::Scheme const&
* stappler::mem_pool::Value const&
* stappler::mem_pool::Value&
* bool

Возвращает:
* bool

# ::stappler::db::FieldObject::hash(stappler::mem_pool::StringStream&,stappler::db::ValidationLevel) const

## BRIEF

## CONTENT

Параметры:
* stappler::mem_pool::StringStream&
* stappler::db::ValidationLevel


# ::stappler::db::FieldObject::scheme

## BRIEF

## CONTENT

Тип: stappler::db::Scheme const*


# ::stappler::db::FieldObject::onRemove

## BRIEF

## CONTENT

Тип: stappler::db::RemovePolicy


# ::stappler::db::FieldObject::linkage

## BRIEF

## CONTENT

Тип: stappler::db::Linkage


# ::stappler::db::FieldObject::link

## BRIEF

## CONTENT

Тип: stappler::mem_pool::String


# ::stappler::db::FieldArray

## BRIEF

## CONTENT

Базовые классы:
* Field::Slot


# ::stappler::db::FieldArray::~FieldArray()

## BRIEF

## CONTENT


# ::stappler::db::FieldArray::FieldArray<typename>(stappler::mem_pool::String&&,Args &&...)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Args

Параметры:
* stappler::mem_pool::String&&
* Args &&...


# ::stappler::db::FieldArray::transformValue(stappler::db::Scheme const&,stappler::mem_pool::Value const&,stappler::mem_pool::Value&,bool) const

## BRIEF

## CONTENT

Параметры:
* stappler::db::Scheme const&
* stappler::mem_pool::Value const&
* stappler::mem_pool::Value&
* bool

Возвращает:
* bool

# ::stappler::db::FieldArray::hash(stappler::mem_pool::StringStream&,stappler::db::ValidationLevel) const

## BRIEF

## CONTENT

Параметры:
* stappler::mem_pool::StringStream&
* stappler::db::ValidationLevel


# ::stappler::db::FieldArray::tfield

## BRIEF

## CONTENT

Тип: stappler::db::Field


# ::stappler::db::FieldView

## BRIEF

## CONTENT

Базовые классы:
* Field::Slot


# ::stappler::db::FieldView::DeltaOptions

## BRIEF

## CONTENT

Значения:
* Delta


# ::stappler::db::FieldView::~FieldView()

## BRIEF

## CONTENT


# ::stappler::db::FieldView::FieldView<typename>(stappler::mem_pool::String&&,Args &&...)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Args

Параметры:
* stappler::mem_pool::String&&
* Args &&...


# ::stappler::db::FieldView::transformValue(stappler::db::Scheme const&,stappler::mem_pool::Value const&,stappler::mem_pool::Value&,bool) const

## BRIEF

## CONTENT

Параметры:
* stappler::db::Scheme const&
* stappler::mem_pool::Value const&
* stappler::mem_pool::Value&
* bool

Возвращает:
* bool

# ::stappler::db::FieldView::scheme

## BRIEF

## CONTENT

Тип: stappler::db::Scheme const*


# ::stappler::db::FieldView::requireFields

## BRIEF

## CONTENT

Тип: Vector<stappler::mem_pool::String>


# ::stappler::db::FieldView::linkage

## BRIEF

## CONTENT

Тип: stappler::db::ViewLinkageFn


# ::stappler::db::FieldView::viewFn

## BRIEF

## CONTENT

Тип: stappler::db::ViewFn


# ::stappler::db::FieldView::delta

## BRIEF

## CONTENT

Тип: bool


# ::stappler::db::FieldFullTextView

## BRIEF

## CONTENT

Базовые классы:
* Field::Slot


# ::stappler::db::FieldFullTextView::~FieldFullTextView()

## BRIEF

## CONTENT


# ::stappler::db::FieldFullTextView::FieldFullTextView<typename>(stappler::mem_pool::String&&,Args &&...)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Args

Параметры:
* stappler::mem_pool::String&&
* Args &&...


# ::stappler::db::FieldFullTextView::transformValue(stappler::db::Scheme const&,stappler::mem_pool::Value const&,stappler::mem_pool::Value&,bool) const

## BRIEF

## CONTENT

Параметры:
* stappler::db::Scheme const&
* stappler::mem_pool::Value const&
* stappler::mem_pool::Value&
* bool

Возвращает:
* bool

# ::stappler::db::FieldFullTextView::parseQuery(stappler::mem_pool::Value const&) const

## BRIEF

## CONTENT

Параметры:
* stappler::mem_pool::Value const&

Возвращает:
* Vector<stappler::db::FullTextData>

# ::stappler::db::FieldFullTextView::requireFields

## BRIEF

## CONTENT

Тип: Vector<stappler::mem_pool::String>


# ::stappler::db::FieldFullTextView::viewFn

## BRIEF

## CONTENT

Тип: stappler::db::FullTextViewFn


# ::stappler::db::FieldFullTextView::queryFn

## BRIEF

## CONTENT

Тип: stappler::db::FullTextQueryFn


# ::stappler::db::FieldCustom

## BRIEF

## CONTENT

Базовые классы:
* Field::Slot


# ::stappler::db::FieldCustom::~FieldCustom()

## BRIEF

## CONTENT


# ::stappler::db::FieldCustom::FieldCustom<typename>(stappler::mem_pool::String&&,Args &&...)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Args

Параметры:
* stappler::mem_pool::String&&
* Args &&...


# ::stappler::db::FieldCustom::readFromStorage(stappler::db::ResultCursor const&,size_t) const

## BRIEF

## CONTENT

Параметры:
* stappler::db::ResultCursor const&
* size_t

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::FieldCustom::writeToStorage(stappler::db::QueryInterface&,stappler::mem_pool::StringStream&,stappler::mem_pool::Value const&) const

## BRIEF

## CONTENT

Параметры:
* stappler::db::QueryInterface&
* stappler::mem_pool::StringStream&
* stappler::mem_pool::Value const&

Возвращает:
* bool

# ::stappler::db::FieldCustom::getTypeName() const

## BRIEF

## CONTENT

Возвращает:
* stappler::StringView

# ::stappler::db::FieldCustom::getIndexName() const

## BRIEF

## CONTENT

Возвращает:
* stappler::mem_pool::String

# ::stappler::db::FieldCustom::getIndexField() const

## BRIEF

## CONTENT

Возвращает:
* stappler::mem_pool::String

# ::stappler::db::FieldCustom::isComparationAllowed(stappler::db::Comparation) const

## BRIEF

## CONTENT

Параметры:
* stappler::db::Comparation

Возвращает:
* bool

# ::stappler::db::FieldCustom::writeQuery(stappler::db::Scheme const&,stappler::sql::Query<db::Binder, Interface>::WhereContinue&,stappler::sql::Operator,stappler::StringView const&,stappler::sql::Comparation,stappler::mem_pool::Value const&,stappler::mem_pool::Value const&) const

## BRIEF

## CONTENT

Параметры:
* stappler::db::Scheme const&
* stappler::sql::Query<db::Binder, Interface>::WhereContinue&
* stappler::sql::Operator
* stappler::StringView const&
* stappler::sql::Comparation
* stappler::mem_pool::Value const&
* stappler::mem_pool::Value const&


# ::stappler::db::FieldVirtual

## BRIEF

## CONTENT

Базовые классы:
* Field::Slot


# ::stappler::db::FieldVirtual::~FieldVirtual()

## BRIEF

## CONTENT


# ::stappler::db::FieldVirtual::FieldVirtual<typename>(stappler::mem_pool::String&&,Args &&...)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Args

Параметры:
* stappler::mem_pool::String&&
* Args &&...


# ::stappler::db::FieldVirtual::hash(stappler::mem_pool::StringStream&,stappler::db::ValidationLevel) const

## BRIEF

## CONTENT

Параметры:
* stappler::mem_pool::StringStream&
* stappler::db::ValidationLevel


# ::stappler::db::FieldVirtual::transformValue(stappler::db::Scheme const&,stappler::mem_pool::Value const&,stappler::mem_pool::Value&,bool) const

## BRIEF

## CONTENT

Параметры:
* stappler::db::Scheme const&
* stappler::mem_pool::Value const&
* stappler::mem_pool::Value&
* bool

Возвращает:
* bool

# ::stappler::db::FieldVirtual::requireFields

## BRIEF

## CONTENT

Тип: Vector<stappler::mem_pool::String>


# ::stappler::db::FieldVirtual::readFn

## BRIEF

## CONTENT

Тип: stappler::db::VirtualReadFn


# ::stappler::db::FieldVirtual::writeFn

## BRIEF

## CONTENT

Тип: stappler::db::VirtualWriteFn


# ::stappler::db::Field::Data<typename>(stappler::mem_pool::String&&,Args &&...)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Args

Параметры:
* stappler::mem_pool::String&&
* Args &&...

Возвращает:
* stappler::db::Field

# ::stappler::db::Field::Integer<typename>(stappler::mem_pool::String&&,Args &&...)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Args

Параметры:
* stappler::mem_pool::String&&
* Args &&...

Возвращает:
* stappler::db::Field

# ::stappler::db::Field::Float<typename>(stappler::mem_pool::String&&,Args &&...)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Args

Параметры:
* stappler::mem_pool::String&&
* Args &&...

Возвращает:
* stappler::db::Field

# ::stappler::db::Field::Boolean<typename>(stappler::mem_pool::String&&,Args &&...)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Args

Параметры:
* stappler::mem_pool::String&&
* Args &&...

Возвращает:
* stappler::db::Field

# ::stappler::db::Field::Text<typename>(stappler::mem_pool::String&&,Args &&...)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Args

Параметры:
* stappler::mem_pool::String&&
* Args &&...

Возвращает:
* stappler::db::Field

# ::stappler::db::Field::Bytes<typename>(stappler::mem_pool::String&&,Args &&...)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Args

Параметры:
* stappler::mem_pool::String&&
* Args &&...

Возвращает:
* stappler::db::Field

# ::stappler::db::Field::Password<typename>(stappler::mem_pool::String&&,Args &&...)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Args

Параметры:
* stappler::mem_pool::String&&
* Args &&...

Возвращает:
* stappler::db::Field

# ::stappler::db::Field::Extra<typename>(stappler::mem_pool::String&&,Args &&...)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Args

Параметры:
* stappler::mem_pool::String&&
* Args &&...

Возвращает:
* stappler::db::Field

# ::stappler::db::Field::Extra<typename>(stappler::mem_pool::String&&,stappler::InitializerList<Field>&&,Args &&...)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Args

Параметры:
* stappler::mem_pool::String&&
* stappler::InitializerList<Field>&&
* Args &&...

Возвращает:
* stappler::db::Field

# ::stappler::db::Field::File<typename>(stappler::mem_pool::String&&,Args &&...)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Args

Параметры:
* stappler::mem_pool::String&&
* Args &&...

Возвращает:
* stappler::db::Field

# ::stappler::db::Field::Image<typename>(stappler::mem_pool::String&&,Args &&...)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Args

Параметры:
* stappler::mem_pool::String&&
* Args &&...

Возвращает:
* stappler::db::Field

# ::stappler::db::Field::Object<typename>(stappler::mem_pool::String&&,Args &&...)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Args

Параметры:
* stappler::mem_pool::String&&
* Args &&...

Возвращает:
* stappler::db::Field

# ::stappler::db::Field::Set<typename>(stappler::mem_pool::String&&,Args &&...)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Args

Параметры:
* stappler::mem_pool::String&&
* Args &&...

Возвращает:
* stappler::db::Field

# ::stappler::db::Field::Array<typename>(stappler::mem_pool::String&&,Args &&...)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Args

Параметры:
* stappler::mem_pool::String&&
* Args &&...

Возвращает:
* stappler::db::Field

# ::stappler::db::Field::View<typename>(stappler::mem_pool::String&&,Args &&...)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Args

Параметры:
* stappler::mem_pool::String&&
* Args &&...

Возвращает:
* stappler::db::Field

# ::stappler::db::Field::FullTextView<typename>(stappler::mem_pool::String&&,Args &&...)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Args

Параметры:
* stappler::mem_pool::String&&
* Args &&...

Возвращает:
* stappler::db::Field

# ::stappler::db::Field::Virtual<typename>(stappler::mem_pool::String&&,Args &&...)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Args

Параметры:
* stappler::mem_pool::String&&
* Args &&...

Возвращает:
* stappler::db::Field

# ::stappler::db::Field::Custom<typename>(stappler::db::FieldCustom*)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Args

Параметры:
* stappler::db::FieldCustom*

Возвращает:
* stappler::db::Field

# ::stappler::db::FieldOption<F,Flags>::FieldOption<F,Flags>

## BRIEF

## CONTENT

Параметры шаблона:
* typename F


# ::stappler::db::FieldOption<F,Flags>::assign(F&,stappler::db::Flags)

## BRIEF

## CONTENT

Параметры:
* F&
* stappler::db::Flags


# ::stappler::db::FieldOption<F,FilterFn>::FieldOption<F,FilterFn>

## BRIEF

## CONTENT

Параметры шаблона:
* typename F


# ::stappler::db::FieldOption<F,FilterFn>::assign(F&,stappler::db::FilterFn const&)

## BRIEF

## CONTENT

Параметры:
* F&
* stappler::db::FilterFn const&


# ::stappler::db::FieldOption<F,WriteFilterFn>::FieldOption<F,WriteFilterFn>

## BRIEF

## CONTENT

Параметры шаблона:
* typename F


# ::stappler::db::FieldOption<F,WriteFilterFn>::assign(F&,stappler::db::WriteFilterFn const&)

## BRIEF

## CONTENT

Параметры:
* F&
* stappler::db::WriteFilterFn const&


# ::stappler::db::FieldOption<F,ReadFilterFn>::FieldOption<F,ReadFilterFn>

## BRIEF

## CONTENT

Параметры шаблона:
* typename F


# ::stappler::db::FieldOption<F,ReadFilterFn>::assign(F&,stappler::db::ReadFilterFn const&)

## BRIEF

## CONTENT

Параметры:
* F&
* stappler::db::ReadFilterFn const&


# ::stappler::db::FieldOption<F,ReplaceFilterFn>::FieldOption<F,ReplaceFilterFn>

## BRIEF

## CONTENT

Параметры шаблона:
* typename F


# ::stappler::db::FieldOption<F,ReplaceFilterFn>::assign(F&,stappler::db::ReplaceFilterFn const&)

## BRIEF

## CONTENT

Параметры:
* F&
* stappler::db::ReplaceFilterFn const&


# ::stappler::db::FieldOption<F,DefaultFn>::FieldOption<F,DefaultFn>

## BRIEF

## CONTENT

Параметры шаблона:
* typename F


# ::stappler::db::FieldOption<F,DefaultFn>::assign(F&,stappler::db::DefaultFn const&)

## BRIEF

## CONTENT

Параметры:
* F&
* stappler::db::DefaultFn const&


# ::stappler::db::FieldOption<F,Function<Value()>>::FieldOption<F,Function<Value()>>

## BRIEF

## CONTENT

Параметры шаблона:
* typename F


# ::stappler::db::FieldOption<F,Function<Value()>>::assign(F&,Function<stappler::mem_pool::Value ()> const&)

## BRIEF

## CONTENT

Параметры:
* F&
* Function<stappler::mem_pool::Value ()> const&


# ::stappler::db::FieldOption<F,Transform>::FieldOption<F,Transform>

## BRIEF

## CONTENT

Параметры шаблона:
* typename F


# ::stappler::db::FieldOption<F,Transform>::assign(F&,stappler::db::Transform)

## BRIEF

## CONTENT

Параметры:
* F&
* stappler::db::Transform


# ::stappler::db::FieldOption<F,Documentation>::FieldOption<F,Documentation>

## BRIEF

## CONTENT

Параметры шаблона:
* typename F


# ::stappler::db::FieldOption<F,Documentation>::assign(F&,stappler::db::Documentation&&)

## BRIEF

## CONTENT

Параметры:
* F&
* stappler::db::Documentation&&


# ::stappler::db::FieldOption<F,MinLength>::FieldOption<F,MinLength>

## BRIEF

## CONTENT

Параметры шаблона:
* typename F


# ::stappler::db::FieldOption<F,MinLength>::assign(F&,stappler::db::MinLength)

## BRIEF

## CONTENT

Параметры:
* F&
* stappler::db::MinLength


# ::stappler::db::FieldOption<F,MaxLength>::FieldOption<F,MaxLength>

## BRIEF

## CONTENT

Параметры шаблона:
* typename F


# ::stappler::db::FieldOption<F,MaxLength>::assign(F&,stappler::db::MaxLength)

## BRIEF

## CONTENT

Параметры:
* F&
* stappler::db::MaxLength


# ::stappler::db::FieldOption<F,Value>::FieldOption<F,Value>

## BRIEF

## CONTENT

Параметры шаблона:
* typename F


# ::stappler::db::FieldOption<F,Value>::assign(F&,stappler::mem_pool::Value&&)

## BRIEF

## CONTENT

Параметры:
* F&
* stappler::mem_pool::Value&&


# ::stappler::db::FieldOption<F,PasswordSalt>::FieldOption<F,PasswordSalt>

## BRIEF

## CONTENT

Параметры шаблона:
* typename F


# ::stappler::db::FieldOption<F,PasswordSalt>::assign(F&,stappler::db::PasswordSalt&&)

## BRIEF

## CONTENT

Параметры:
* F&
* stappler::db::PasswordSalt&&


# ::stappler::db::FieldOption<F,ForeignLink>::FieldOption<F,ForeignLink>

## BRIEF

## CONTENT

Параметры шаблона:
* typename F


# ::stappler::db::FieldOption<F,ForeignLink>::assign(F&,stappler::db::ForeignLink&&)

## BRIEF

## CONTENT

Параметры:
* F&
* stappler::db::ForeignLink&&


# ::stappler::db::FieldOption<F,Vector<Field>>::FieldOption<F,Vector<Field>>

## BRIEF

## CONTENT

Параметры шаблона:
* typename F


# ::stappler::db::FieldOption<F,Vector<Field>>::assign(F&,Vector<stappler::db::Field>&&)

## BRIEF

## CONTENT

Параметры:
* F&
* Vector<stappler::db::Field>&&


# ::stappler::db::FieldOption<F,AutoFieldDef>::FieldOption<F,AutoFieldDef>

## BRIEF

## CONTENT

Параметры шаблона:
* typename F


# ::stappler::db::FieldOption<F,AutoFieldDef>::assign(F&,stappler::db::AutoFieldDef&&)

## BRIEF

## CONTENT

Параметры:
* F&
* stappler::db::AutoFieldDef&&


# ::stappler::db::FieldOption<F,std::initializer_list<Field>>::FieldOption<F,std::initializer_list<Field>>

## BRIEF

## CONTENT

Параметры шаблона:
* typename F


# ::stappler::db::FieldOption<F,std::initializer_list<Field>>::assign(F&,std::initializer_list<Field>&&)

## BRIEF

## CONTENT

Параметры:
* F&
* std::initializer_list<Field>&&


# ::stappler::db::FieldOption<F,MaxFileSize>::FieldOption<F,MaxFileSize>

## BRIEF

## CONTENT

Параметры шаблона:
* typename F


# ::stappler::db::FieldOption<F,MaxFileSize>::assign(F&,stappler::db::MaxFileSize)

## BRIEF

## CONTENT

Параметры:
* F&
* stappler::db::MaxFileSize


# ::stappler::db::FieldOption<F,Vector<String>>::FieldOption<F,Vector<String>>

## BRIEF

## CONTENT

Параметры шаблона:
* typename F


# ::stappler::db::FieldOption<F,Vector<String>>::assign(F&,Vector<stappler::mem_pool::String>&&)

## BRIEF

## CONTENT

Параметры:
* F&
* Vector<stappler::mem_pool::String>&&


# ::stappler::db::FieldOption<F,MaxImageSize>::FieldOption<F,MaxImageSize>

## BRIEF

## CONTENT

Параметры шаблона:
* typename F


# ::stappler::db::FieldOption<F,MaxImageSize>::assign(F&,stappler::db::MaxImageSize&&)

## BRIEF

## CONTENT

Параметры:
* F&
* stappler::db::MaxImageSize&&


# ::stappler::db::FieldOption<F,MinImageSize>::FieldOption<F,MinImageSize>

## BRIEF

## CONTENT

Параметры шаблона:
* typename F


# ::stappler::db::FieldOption<F,MinImageSize>::assign(F&,stappler::db::MinImageSize&&)

## BRIEF

## CONTENT

Параметры:
* F&
* stappler::db::MinImageSize&&


# ::stappler::db::FieldOption<F,Vector<Thumbnail>>::FieldOption<F,Vector<Thumbnail>>

## BRIEF

## CONTENT

Параметры шаблона:
* typename F


# ::stappler::db::FieldOption<F,Vector<Thumbnail>>::assign(F&,Vector<stappler::db::Thumbnail>&&)

## BRIEF

## CONTENT

Параметры:
* F&
* Vector<stappler::db::Thumbnail>&&


# ::stappler::db::FieldOption<F,RemovePolicy>::FieldOption<F,RemovePolicy>

## BRIEF

## CONTENT

Параметры шаблона:
* typename F


# ::stappler::db::FieldOption<F,RemovePolicy>::assign(F&,stappler::db::RemovePolicy)

## BRIEF

## CONTENT

Параметры:
* F&
* stappler::db::RemovePolicy


# ::stappler::db::FieldOption<F,Linkage>::FieldOption<F,Linkage>

## BRIEF

## CONTENT

Параметры шаблона:
* typename F


# ::stappler::db::FieldOption<F,Linkage>::assign(F&,stappler::db::Linkage)

## BRIEF

## CONTENT

Параметры:
* F&
* stappler::db::Linkage


# ::stappler::db::FieldOption<F,constScheme*>::FieldOption<F,constScheme*>

## BRIEF

## CONTENT

Параметры шаблона:
* typename F


# ::stappler::db::FieldOption<F,constScheme*>::assign(F&,stappler::db::Scheme const*)

## BRIEF

## CONTENT

Параметры:
* F&
* stappler::db::Scheme const*


# ::stappler::db::FieldOption<F,Scheme>::FieldOption<F,Scheme>

## BRIEF

## CONTENT

Параметры шаблона:
* typename F


# ::stappler::db::FieldOption<F,Scheme>::assign(F&,stappler::db::Scheme const&)

## BRIEF

## CONTENT

Параметры:
* F&
* stappler::db::Scheme const&


# ::stappler::db::FieldOption<F,constScheme>::FieldOption<F,constScheme>

## BRIEF

## CONTENT

Параметры шаблона:
* typename F


# ::stappler::db::FieldOption<F,constScheme>::assign(F&,stappler::db::Scheme const&)

## BRIEF

## CONTENT

Параметры:
* F&
* stappler::db::Scheme const&


# ::stappler::db::FieldOption<F,Field>::FieldOption<F,Field>

## BRIEF

## CONTENT

Параметры шаблона:
* typename F


# ::stappler::db::FieldOption<F,Field>::assign(F&,stappler::db::Field&&)

## BRIEF

## CONTENT

Параметры:
* F&
* stappler::db::Field&&


# ::stappler::db::FieldOption<FieldArray,Type>::FieldOption<FieldArray,Type>

## BRIEF

## CONTENT


# ::stappler::db::FieldOption<FieldArray,Type>::assign(stappler::db::FieldArray&,stappler::db::Type)

## BRIEF

## CONTENT

Параметры:
* stappler::db::FieldArray&
* stappler::db::Type


# ::stappler::db::FieldOption<FieldView,Vector<String>>::FieldOption<FieldView,Vector<String>>

## BRIEF

## CONTENT


# ::stappler::db::FieldOption<FieldView,Vector<String>>::assign(stappler::db::FieldView&,Vector<stappler::mem_pool::String>&&)

## BRIEF

## CONTENT

Параметры:
* stappler::db::FieldView&
* Vector<stappler::mem_pool::String>&&


# ::stappler::db::FieldOption<FieldFullTextView,Vector<String>>::FieldOption<FieldFullTextView,Vector<String>>

## BRIEF

## CONTENT


# ::stappler::db::FieldOption<FieldFullTextView,Vector<String>>::assign(stappler::db::FieldFullTextView&,Vector<stappler::mem_pool::String>&&)

## BRIEF

## CONTENT

Параметры:
* stappler::db::FieldFullTextView&
* Vector<stappler::mem_pool::String>&&


# ::stappler::db::FieldOption<F,ViewLinkageFn>::FieldOption<F,ViewLinkageFn>

## BRIEF

## CONTENT

Параметры шаблона:
* typename F


# ::stappler::db::FieldOption<F,ViewLinkageFn>::assign(F&,stappler::db::ViewLinkageFn&&)

## BRIEF

## CONTENT

Параметры:
* F&
* stappler::db::ViewLinkageFn&&


# ::stappler::db::FieldOption<F,ViewFn>::FieldOption<F,ViewFn>

## BRIEF

## CONTENT

Параметры шаблона:
* typename F


# ::stappler::db::FieldOption<F,ViewFn>::assign(F&,stappler::db::ViewFn&&)

## BRIEF

## CONTENT

Параметры:
* F&
* stappler::db::ViewFn&&


# ::stappler::db::FieldOption<F,FullTextViewFn>::FieldOption<F,FullTextViewFn>

## BRIEF

## CONTENT

Параметры шаблона:
* typename F


# ::stappler::db::FieldOption<F,FullTextViewFn>::assign(F&,stappler::db::FullTextViewFn&&)

## BRIEF

## CONTENT

Параметры:
* F&
* stappler::db::FullTextViewFn&&


# ::stappler::db::FieldOption<F,FullTextQueryFn>::FieldOption<F,FullTextQueryFn>

## BRIEF

## CONTENT

Параметры шаблона:
* typename F


# ::stappler::db::FieldOption<F,FullTextQueryFn>::assign(F&,stappler::db::FullTextQueryFn&&)

## BRIEF

## CONTENT

Параметры:
* F&
* stappler::db::FullTextQueryFn&&


# ::stappler::db::FieldOption<F,FieldView::DeltaOptions>::FieldOption<F,FieldView::DeltaOptions>

## BRIEF

## CONTENT

Параметры шаблона:
* typename F


# ::stappler::db::FieldOption<F,FieldView::DeltaOptions>::assign(F&,FieldView::DeltaOptions)

## BRIEF

## CONTENT

Параметры:
* F&
* FieldView::DeltaOptions


# ::stappler::db::FieldOption<FieldVirtual,Vector<String>>::FieldOption<FieldVirtual,Vector<String>>

## BRIEF

## CONTENT


# ::stappler::db::FieldOption<FieldVirtual,Vector<String>>::assign(stappler::db::FieldVirtual&,Vector<stappler::mem_pool::String>&&)

## BRIEF

## CONTENT

Параметры:
* stappler::db::FieldVirtual&
* Vector<stappler::mem_pool::String>&&


# ::stappler::db::FieldOption<FieldVirtual,VirtualReadFn>::FieldOption<FieldVirtual,VirtualReadFn>

## BRIEF

## CONTENT


# ::stappler::db::FieldOption<FieldVirtual,VirtualReadFn>::assign(stappler::db::FieldVirtual&,stappler::db::VirtualReadFn&&)

## BRIEF

## CONTENT

Параметры:
* stappler::db::FieldVirtual&
* stappler::db::VirtualReadFn&&


# ::stappler::db::FieldOption<FieldVirtual,VirtualWriteFn>::FieldOption<FieldVirtual,VirtualWriteFn>

## BRIEF

## CONTENT


# ::stappler::db::FieldOption<FieldVirtual,VirtualWriteFn>::assign(stappler::db::FieldVirtual&,stappler::db::VirtualWriteFn&&)

## BRIEF

## CONTENT

Параметры:
* stappler::db::FieldVirtual&
* stappler::db::VirtualWriteFn&&
