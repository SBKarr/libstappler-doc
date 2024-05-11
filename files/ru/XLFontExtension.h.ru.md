Title: XLFontExtension.h


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


# ::stappler::xenolith::font::RenderFontInput::ext

## BRIEF

## CONTENT

Тип: Rc<stappler::xenolith::font::FontExtension>


# ::stappler::xenolith::font::RenderFontInput::requests

## BRIEF

## CONTENT

Тип: Vector<stappler::xenolith::font::FontUpdateRequest>


# ::stappler::xenolith::font::RenderFontInput::output

## BRIEF

## CONTENT

Тип: Function<void (const core::ImageInfoData &, stappler::BytesView)>


# ::stappler::xenolith::font::FontExtension

## BRIEF

## CONTENT

Базовые классы:
* ApplicationExtension


# ::stappler::xenolith::font::FontExtension::DefaultFontName

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::font::FontExtension::~FontExtension()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::font::FontExtension::init(Rc<stappler::xenolith::Application>&&,Rc<core::Queue>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Rc<stappler::xenolith::Application>&&
* Rc<core::Queue>&&

Возвращает:
* bool

# ::stappler::xenolith::font::FontExtension::getMainLoop() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::Application*

# ::stappler::xenolith::font::FontExtension::getGlLoop() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* core::Loop const*

# ::stappler::xenolith::font::FontExtension::getQueue() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Rc<core::Queue> const&

# ::stappler::xenolith::font::FontExtension::getLibrary() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::font::FontLibrary*

# ::stappler::xenolith::font::FontExtension::initialize(stappler::xenolith::Application*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Application*


# ::stappler::xenolith::font::FontExtension::invalidate(stappler::xenolith::Application*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Application*


# ::stappler::xenolith::font::FontExtension::update(stappler::xenolith::Application*,stappler::xenolith::UpdateTime const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Application*
* stappler::xenolith::UpdateTime const&


# ::stappler::xenolith::font::FontExtension::makeDefaultControllerBuilder(stappler::StringView)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView

Возвращает:
* FontController::Builder

# ::stappler::xenolith::font::FontExtension::acquireController(FontController::Builder&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* FontController::Builder&&

Возвращает:
* Rc<stappler::xenolith::font::FontController>

# ::stappler::xenolith::font::FontExtension::updateImage(Rc<core::DynamicImage> const&,Vector<stappler::xenolith::font::FontUpdateRequest>&&,Rc<core::DependencyEvent>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Rc<core::DynamicImage> const&
* Vector<stappler::xenolith::font::FontUpdateRequest>&&
* Rc<core::DependencyEvent>&&


# ::stappler::xenolith::font::FontExtension::onActivated()

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::font::FontExtension::ImageQuery

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::font::FontExtension::ImageQuery::image

## BRIEF

## CONTENT

Тип: Rc<core::DynamicImage>


# ::stappler::xenolith::font::FontExtension::ImageQuery::chars

## BRIEF

## CONTENT

Тип: Vector<stappler::xenolith::font::FontUpdateRequest>


# ::stappler::xenolith::font::FontExtension::ImageQuery::dependency

## BRIEF

## CONTENT

Тип: Rc<core::DependencyEvent>


# ::stappler::xenolith::font::FontExtension::_active

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::font::FontExtension::_library

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::font::FontLibrary>


# ::stappler::xenolith::font::FontExtension::_mainLoop

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::xenolith::Application>


# ::stappler::xenolith::font::FontExtension::_glLoop

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<core::Loop>


# ::stappler::xenolith::font::FontExtension::_queue

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<core::Queue>


# ::stappler::xenolith::font::FontExtension::_pendingImageQueries

## BRIEF

## CONTENT

Доступ: protected

Тип: Vector<stappler::xenolith::font::FontExtension::ImageQuery>
