Title: XLFontLibrary.h


# XENOLITH_FONT_XLFONTLIBRARY_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::font::RenderFontInput

## BRIEF

## CONTENT

Базовые классы:
* core::AttachmentInputData


# ::stappler::xenolith::font::RenderFontInput::queue

## BRIEF

## CONTENT

Тип: Rc<thread::TaskQueue>


# ::stappler::xenolith::font::RenderFontInput::image

## BRIEF

## CONTENT

Тип: Rc<core::DynamicImage>


# ::stappler::xenolith::font::RenderFontInput::library

## BRIEF

## CONTENT

Тип: Rc<font::FontLibrary>


# ::stappler::xenolith::font::RenderFontInput::requests

## BRIEF

## CONTENT

Тип: Vector<stappler::xenolith::font::FontUpdateRequest>


# ::stappler::xenolith::font::RenderFontInput::output

## BRIEF

## CONTENT

Тип: Function<void (const core::ImageInfoData &, stappler::BytesView)>


# ::stappler::xenolith::font::FontFaceObjectHandle

## BRIEF

## CONTENT

Базовые классы:
* Ref


# ::stappler::xenolith::font::FontFaceObjectHandle::~FontFaceObjectHandle()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::font::FontFaceObjectHandle::init(Rc<stappler::xenolith::font::FontLibrary> const&,Rc<stappler::xenolith::font::FontFaceObject>&&,Function<void (const stappler::xenolith::font::FontFaceObjectHandle *)>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Rc<stappler::xenolith::font::FontLibrary> const&
* Rc<stappler::xenolith::font::FontFaceObject>&&
* Function<void (const stappler::xenolith::font::FontFaceObjectHandle *)>&&

Возвращает:
* bool

# ::stappler::xenolith::font::FontFaceObjectHandle::getFace() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* FT_Face

# ::stappler::xenolith::font::FontFaceObjectHandle::acquireTexture(char16_t,Callback<void (const stappler::xenolith::font::CharTexture &)> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* char16_t
* Callback<void (const stappler::xenolith::font::CharTexture &)> const&

Возвращает:
* bool

# ::stappler::xenolith::font::FontFaceObjectHandle::_library

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::xenolith::font::FontLibrary>


# ::stappler::xenolith::font::FontFaceObjectHandle::_face

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::xenolith::font::FontFaceObject>


# ::stappler::xenolith::font::FontFaceObjectHandle::_onDestroy

## BRIEF

## CONTENT

Доступ: protected

Тип: Function<void (const stappler::xenolith::font::FontFaceObjectHandle *)>


# ::stappler::xenolith::font::FontLibrary

## BRIEF

## CONTENT

Базовые классы:
* ApplicationExtension


# ::stappler::xenolith::font::FontLibrary::DefaultFontName

## BRIEF

## CONTENT

Доступ: public

Значения:
* None
* RobotoFlex_VariableFont
* RobotoMono_VariableFont
* RobotoMono_Italic_VariableFont


# ::stappler::xenolith::font::FontLibrary::FontData

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::font::FontLibrary::FontData::persistent

## BRIEF

## CONTENT

Тип: bool


# ::stappler::xenolith::font::FontLibrary::FontData::view

## BRIEF

## CONTENT

Тип: stappler::BytesView


# ::stappler::xenolith::font::FontLibrary::FontData::bytes

## BRIEF

## CONTENT

Тип: stappler::mem_std::Bytes


# ::stappler::xenolith::font::FontLibrary::FontData::callback

## BRIEF

## CONTENT

Тип: Function<stappler::mem_std::Bytes ()>


# ::stappler::xenolith::font::FontLibrary::FontData::FontData(stappler::BytesView,bool)

## BRIEF

## CONTENT

Параметры:
* stappler::BytesView
* bool


# ::stappler::xenolith::font::FontLibrary::FontData::FontData(stappler::mem_std::Bytes&&)

## BRIEF

## CONTENT

Параметры:
* stappler::mem_std::Bytes&&


# ::stappler::xenolith::font::FontLibrary::FontData::FontData(Function<stappler::mem_std::Bytes ()>&&)

## BRIEF

## CONTENT

Параметры:
* Function<stappler::mem_std::Bytes ()>&&


# ::stappler::xenolith::font::FontLibrary::getFont(stappler::xenolith::font::FontLibrary::DefaultFontName)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::font::FontLibrary::DefaultFontName

Возвращает:
* stappler::BytesView

# ::stappler::xenolith::font::FontLibrary::getFontName(stappler::xenolith::font::FontLibrary::DefaultFontName)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::font::FontLibrary::DefaultFontName

Возвращает:
* stappler::StringView

# ::stappler::xenolith::font::FontLibrary::FontLibrary()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::font::FontLibrary::~FontLibrary()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::font::FontLibrary::init(Rc<stappler::xenolith::Application>&&,Rc<core::Queue>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Rc<stappler::xenolith::Application>&&
* Rc<core::Queue>&&

Возвращает:
* bool

# ::stappler::xenolith::font::FontLibrary::getMainLoop() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::Application*

# ::stappler::xenolith::font::FontLibrary::getGlLoop() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* core::Loop const*

# ::stappler::xenolith::font::FontLibrary::getQueue() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Rc<core::Queue> const&

# ::stappler::xenolith::font::FontLibrary::openFontData(stappler::StringView,stappler::xenolith::font::FontLayoutParameters,Callback<stappler::xenolith::font::FontLibrary::FontData ()> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView
* stappler::xenolith::font::FontLayoutParameters
* Callback<stappler::xenolith::font::FontLibrary::FontData ()> const&

Возвращает:
* Rc<stappler::xenolith::font::FontFaceData>

# ::stappler::xenolith::font::FontLibrary::openFontFace(stappler::StringView,stappler::xenolith::font::FontSpecializationVector const&,Callback<stappler::xenolith::font::FontLibrary::FontData ()> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView
* stappler::xenolith::font::FontSpecializationVector const&
* Callback<stappler::xenolith::font::FontLibrary::FontData ()> const&

Возвращает:
* Rc<stappler::xenolith::font::FontFaceObject>

# ::stappler::xenolith::font::FontLibrary::openFontFace(Rc<stappler::xenolith::font::FontFaceData> const&,stappler::xenolith::font::FontSpecializationVector const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Rc<stappler::xenolith::font::FontFaceData> const&
* stappler::xenolith::font::FontSpecializationVector const&

Возвращает:
* Rc<stappler::xenolith::font::FontFaceObject>

# ::stappler::xenolith::font::FontLibrary::initialize(stappler::xenolith::Application*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Application*


# ::stappler::xenolith::font::FontLibrary::invalidate(stappler::xenolith::Application*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Application*


# ::stappler::xenolith::font::FontLibrary::update(stappler::xenolith::Application*,stappler::xenolith::UpdateTime const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Application*
* stappler::xenolith::UpdateTime const&


# ::stappler::xenolith::font::FontLibrary::makeDefaultControllerBuilder(stappler::StringView)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView

Возвращает:
* FontController::Builder

# ::stappler::xenolith::font::FontLibrary::acquireController(FontController::Builder&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* FontController::Builder&&

Возвращает:
* Rc<stappler::xenolith::font::FontController>

# ::stappler::xenolith::font::FontLibrary::updateImage(Rc<core::DynamicImage> const&,Vector<stappler::xenolith::font::FontUpdateRequest>&&,Rc<core::DependencyEvent>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Rc<core::DynamicImage> const&
* Vector<stappler::xenolith::font::FontUpdateRequest>&&
* Rc<core::DependencyEvent>&&


# ::stappler::xenolith::font::FontLibrary::getNextId()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint16_t

# ::stappler::xenolith::font::FontLibrary::releaseId(uint16_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint16_t


# ::stappler::xenolith::font::FontLibrary::makeThreadHandle(Rc<stappler::xenolith::font::FontFaceObject> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Rc<stappler::xenolith::font::FontFaceObject> const&

Возвращает:
* Rc<stappler::xenolith::font::FontFaceObjectHandle>

# ::stappler::xenolith::font::FontLibrary::newFontFace(stappler::BytesView)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::BytesView

Возвращает:
* FT_Face

# ::stappler::xenolith::font::FontLibrary::doneFontFace(FT_Face)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* FT_Face


# ::stappler::xenolith::font::FontLibrary::onActivated()

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::font::FontLibrary::ImageQuery

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::font::FontLibrary::ImageQuery::image

## BRIEF

## CONTENT

Тип: Rc<core::DynamicImage>


# ::stappler::xenolith::font::FontLibrary::ImageQuery::chars

## BRIEF

## CONTENT

Тип: Vector<stappler::xenolith::font::FontUpdateRequest>


# ::stappler::xenolith::font::FontLibrary::ImageQuery::dependency

## BRIEF

## CONTENT

Тип: Rc<core::DependencyEvent>


# ::stappler::xenolith::font::FontLibrary::_active

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::font::FontLibrary::_mutex

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::mem_std::Mutex


# ::stappler::xenolith::font::FontLibrary::_sharedMutex

## BRIEF

## CONTENT

Доступ: protected

Тип: std::shared_mutex


# ::stappler::xenolith::font::FontLibrary::_faces

## BRIEF

## CONTENT

Доступ: protected

Тип: Map<stappler::StringView, Rc<stappler::xenolith::font::FontFaceObject>>


# ::stappler::xenolith::font::FontLibrary::_data

## BRIEF

## CONTENT

Доступ: protected

Тип: Map<stappler::StringView, Rc<stappler::xenolith::font::FontFaceData>>


# ::stappler::xenolith::font::FontLibrary::_threads

## BRIEF

## CONTENT

Доступ: protected

Тип: Map<stappler::xenolith::font::FontFaceObject *, Map<std::thread::id, Rc<stappler::xenolith::font::FontFaceObjectHandle>>>


# ::stappler::xenolith::font::FontLibrary::_library

## BRIEF

## CONTENT

Доступ: protected

Тип: FT_Library


# ::stappler::xenolith::font::FontLibrary::_mainLoop

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::xenolith::Application>


# ::stappler::xenolith::font::FontLibrary::_glLoop

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<core::Loop>


# ::stappler::xenolith::font::FontLibrary::_queue

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<core::Queue>


# ::stappler::xenolith::font::FontLibrary::_pendingImageQueries

## BRIEF

## CONTENT

Доступ: protected

Тип: Vector<stappler::xenolith::font::FontLibrary::ImageQuery>


# ::stappler::xenolith::font::FontLibrary::_fontIds

## BRIEF

## CONTENT

Доступ: protected

Тип: std::bitset<1024 * 16>
