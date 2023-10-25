Title: XLFontController.h


# XENOLITH_FONT_XLFONTCONTROLLER_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::font::FontUpdateRequest

## BRIEF

## CONTENT


# ::stappler::xenolith::font::FontUpdateRequest::object

## BRIEF

## CONTENT

Тип: Rc<font::FontFaceObject>


# ::stappler::xenolith::font::FontUpdateRequest::chars

## BRIEF

## CONTENT

Тип: Vector<char16_t>


# ::stappler::xenolith::font::FontUpdateRequest::persistent

## BRIEF

## CONTENT

Тип: bool


# ::stappler::xenolith::font::FontController

## BRIEF

## CONTENT

Базовые классы:
* ApplicationExtension


# ::stappler::xenolith::font::FontController::onLoaded

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::xenolith::EventHeader


# ::stappler::xenolith::font::FontController::onFontSourceUpdated

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::xenolith::EventHeader


# ::stappler::xenolith::font::FontController::FontSource

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::font::FontController::FontSource::fontFilePath

## BRIEF

## CONTENT

Тип: stappler::mem_std::String


# ::stappler::xenolith::font::FontController::FontSource::fontMemoryData

## BRIEF

## CONTENT

Тип: stappler::mem_std::Bytes


# ::stappler::xenolith::font::FontController::FontSource::fontExternalData

## BRIEF

## CONTENT

Тип: stappler::BytesView


# ::stappler::xenolith::font::FontController::FontSource::fontCallback

## BRIEF

## CONTENT

Тип: Function<stappler::mem_std::Bytes ()>


# ::stappler::xenolith::font::FontController::FontSource::data

## BRIEF

## CONTENT

Тип: Rc<stappler::xenolith::font::FontFaceData>


# ::stappler::xenolith::font::FontController::FontSource::params

## BRIEF

## CONTENT

Тип: stappler::xenolith::font::FontLayoutParameters


# ::stappler::xenolith::font::FontController::FamilyQuery

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::font::FontController::FamilyQuery::family

## BRIEF

## CONTENT

Тип: stappler::mem_std::String


# ::stappler::xenolith::font::FontController::FamilyQuery::sources

## BRIEF

## CONTENT

Тип: Vector<const stappler::xenolith::font::FontController::FontSource *>


# ::stappler::xenolith::font::FontController::FamilySpec

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::font::FontController::FamilySpec::data

## BRIEF

## CONTENT

Тип: Vector<Rc<stappler::xenolith::font::FontFaceData>>


# ::stappler::xenolith::font::FontController::Builder

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::font::FontController::Builder::~Builder()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::font::FontController::Builder::Builder(stappler::StringView)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView


# ::stappler::xenolith::font::FontController::Builder::Builder(stappler::xenolith::font::FontController::Builder&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::font::FontController::Builder&&


# ::stappler::xenolith::font::FontController::Builder::operator=(stappler::xenolith::font::FontController::Builder&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::font::FontController::Builder&&

Возвращает:
* stappler::xenolith::font::FontController::Builder&

# ::stappler::xenolith::font::FontController::Builder::Builder(stappler::xenolith::font::FontController::Builder const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::font::FontController::Builder const&


# ::stappler::xenolith::font::FontController::Builder::operator=(stappler::xenolith::font::FontController::Builder const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::font::FontController::Builder const&

Возвращает:
* stappler::xenolith::font::FontController::Builder&

# ::stappler::xenolith::font::FontController::Builder::getName() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::StringView

# ::stappler::xenolith::font::FontController::Builder::addFontSource(stappler::StringView,stappler::BytesView,stappler::xenolith::font::FontLayoutParameters)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView
* stappler::BytesView
* stappler::xenolith::font::FontLayoutParameters

Возвращает:
* stappler::xenolith::font::FontController::FontSource const*

# ::stappler::xenolith::font::FontController::Builder::addFontSource(stappler::StringView,stappler::mem_std::Bytes&&,stappler::xenolith::font::FontLayoutParameters)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView
* stappler::mem_std::Bytes&&
* stappler::xenolith::font::FontLayoutParameters

Возвращает:
* stappler::xenolith::font::FontController::FontSource const*

# ::stappler::xenolith::font::FontController::Builder::addFontSource(stappler::StringView,stappler::FilePath,stappler::xenolith::font::FontLayoutParameters)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView
* stappler::FilePath
* stappler::xenolith::font::FontLayoutParameters

Возвращает:
* stappler::xenolith::font::FontController::FontSource const*

# ::stappler::xenolith::font::FontController::Builder::addFontSource(stappler::StringView,Function<stappler::mem_std::Bytes ()>&&,stappler::xenolith::font::FontLayoutParameters)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView
* Function<stappler::mem_std::Bytes ()>&&
* stappler::xenolith::font::FontLayoutParameters

Возвращает:
* stappler::xenolith::font::FontController::FontSource const*

# ::stappler::xenolith::font::FontController::Builder::getFontSource(stappler::StringView) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView

Возвращает:
* stappler::xenolith::font::FontController::FontSource const*

# ::stappler::xenolith::font::FontController::Builder::addFontFaceQuery(stappler::StringView,stappler::xenolith::font::FontController::FontSource const*,bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView
* stappler::xenolith::font::FontController::FontSource const*
* bool

Возвращает:
* stappler::xenolith::font::FontController::FamilyQuery const*

# ::stappler::xenolith::font::FontController::Builder::addFontFaceQuery(stappler::StringView,Vector<const stappler::xenolith::font::FontController::FontSource *>&&,bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView
* Vector<const stappler::xenolith::font::FontController::FontSource *>&&
* bool

Возвращает:
* stappler::xenolith::font::FontController::FamilyQuery const*

# ::stappler::xenolith::font::FontController::Builder::addAlias(stappler::StringView,stappler::StringView)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView
* stappler::StringView

Возвращает:
* bool

# ::stappler::xenolith::font::FontController::Builder::getFontFamily(stappler::StringView) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView

Возвращает:
* Vector<const stappler::xenolith::font::FontController::FamilyQuery *>

# ::stappler::xenolith::font::FontController::Builder::getDataQueries()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Map<stappler::mem_std::String, stappler::xenolith::font::FontController::FontSource>&

# ::stappler::xenolith::font::FontController::Builder::getFamilyQueries()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Map<stappler::mem_std::String, stappler::xenolith::font::FontController::FamilyQuery>&

# ::stappler::xenolith::font::FontController::Builder::getAliases()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Map<stappler::mem_std::String, stappler::mem_std::String>&

# ::stappler::xenolith::font::FontController::Builder::getData() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::font::FontController::Builder::Data*

# ::stappler::xenolith::font::FontController::Builder::addSources(stappler::xenolith::font::FontController::FamilyQuery*,Vector<const stappler::xenolith::font::FontController::FontSource *>&&,bool)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::font::FontController::FamilyQuery*
* Vector<const stappler::xenolith::font::FontController::FontSource *>&&
* bool


# ::stappler::xenolith::font::FontController::Builder::_data

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::font::FontController::Builder::Data*


# ::stappler::xenolith::font::FontController::~FontController()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::font::FontController::init(Rc<stappler::xenolith::font::FontLibrary> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Rc<stappler::xenolith::font::FontLibrary> const&

Возвращает:
* bool

# ::stappler::xenolith::font::FontController::initialize(stappler::xenolith::Application*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Application*


# ::stappler::xenolith::font::FontController::invalidate(stappler::xenolith::Application*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Application*


# ::stappler::xenolith::font::FontController::addFont(stappler::StringView,Rc<stappler::xenolith::font::FontFaceData>&&,bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView
* Rc<stappler::xenolith::font::FontFaceData>&&
* bool


# ::stappler::xenolith::font::FontController::addFont(stappler::StringView,Vector<Rc<stappler::xenolith::font::FontFaceData>>&&,bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView
* Vector<Rc<stappler::xenolith::font::FontFaceData>>&&
* bool


# ::stappler::xenolith::font::FontController::addAlias(stappler::StringView,stappler::StringView)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView
* stappler::StringView

Возвращает:
* bool

# ::stappler::xenolith::font::FontController::isLoaded() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::font::FontController::getImage() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Rc<core::DynamicImage> const&

# ::stappler::xenolith::font::FontController::getTexture() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Rc<stappler::xenolith::Texture> const&

# ::stappler::xenolith::font::FontController::getLayout(stappler::xenolith::font::FontParameters)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::font::FontParameters

Возвращает:
* Rc<stappler::xenolith::font::FontLayout>

# ::stappler::xenolith::font::FontController::getLayoutForString(stappler::xenolith::font::FontParameters const&,stappler::xenolith::font::FontCharString const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::font::FontParameters const&
* stappler::xenolith::font::FontCharString const&

Возвращает:
* Rc<stappler::xenolith::font::FontLayout>

# ::stappler::xenolith::font::FontController::addTextureChars(Rc<stappler::xenolith::font::FontLayout> const&,SpanView<stappler::xenolith::font::CharSpec>)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Rc<stappler::xenolith::font::FontLayout> const&
* SpanView<stappler::xenolith::font::CharSpec>

Возвращает:
* Rc<core::DependencyEvent>

# ::stappler::xenolith::font::FontController::getFamilyIndex(stappler::StringView) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView

Возвращает:
* uint32_t

# ::stappler::xenolith::font::FontController::getFamilyName(uint32_t) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint32_t

Возвращает:
* stappler::StringView

# ::stappler::xenolith::font::FontController::update(stappler::xenolith::Application*,stappler::xenolith::UpdateTime const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Application*
* stappler::xenolith::UpdateTime const&


# ::stappler::xenolith::font::FontController::setImage(Rc<core::DynamicImage>&&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* Rc<core::DynamicImage>&&


# ::stappler::xenolith::font::FontController::setLoaded(bool)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* bool


# ::stappler::xenolith::font::FontController::setAliases(Map<stappler::mem_std::String, stappler::mem_std::String>&&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* Map<stappler::mem_std::String, stappler::mem_std::String>&&


# ::stappler::xenolith::font::FontController::findSpecialization(stappler::xenolith::font::FontController::FamilySpec const&,stappler::xenolith::font::FontParameters const&,Vector<Rc<stappler::xenolith::font::FontFaceData>>*)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::font::FontController::FamilySpec const&
* stappler::xenolith::font::FontParameters const&
* Vector<Rc<stappler::xenolith::font::FontFaceData>>*

Возвращает:
* stappler::xenolith::font::FontSpecializationVector

# ::stappler::xenolith::font::FontController::removeUnusedLayouts()

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::font::FontController::_loaded

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::font::FontController::_clock

## BRIEF

## CONTENT

Доступ: protected

Тип: std::atomic<uint64_t>


# ::stappler::xenolith::font::FontController::_unusedInterval

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::TimeInterval


# ::stappler::xenolith::font::FontController::_defaultFontFamily

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::mem_std::String


# ::stappler::xenolith::font::FontController::_texture

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::xenolith::Texture>


# ::stappler::xenolith::font::FontController::_image

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<core::DynamicImage>


# ::stappler::xenolith::font::FontController::_library

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::xenolith::font::FontLibrary>


# ::stappler::xenolith::font::FontController::_aliases

## BRIEF

## CONTENT

Доступ: protected

Тип: Map<stappler::mem_std::String, stappler::mem_std::String>


# ::stappler::xenolith::font::FontController::_familiesNames

## BRIEF

## CONTENT

Доступ: protected

Тип: Vector<stappler::StringView>


# ::stappler::xenolith::font::FontController::_families

## BRIEF

## CONTENT

Доступ: protected

Тип: Map<stappler::mem_std::String, stappler::xenolith::font::FontController::FamilySpec>


# ::stappler::xenolith::font::FontController::_layouts

## BRIEF

## CONTENT

Доступ: protected

Тип: HashMap<stappler::StringView, Rc<stappler::xenolith::font::FontLayout>>


# ::stappler::xenolith::font::FontController::_dependency

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<core::DependencyEvent>


# ::stappler::xenolith::font::FontController::_dirty

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::font::FontController::_layoutSharedMutex

## BRIEF

## CONTENT

Доступ: protected

Тип: std::shared_mutex
