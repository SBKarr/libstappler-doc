Title: SPVectorImage.h


# MODULES_VG_SPVECTORIMAGE_H_

## BRIEF

## CONTENT


# ::stappler::vg::VectorPathRef

## BRIEF

## CONTENT

Базовые классы:
* RefBase<Interface>


# ::stappler::vg::VectorPathRef::String

## BRIEF

## CONTENT

Доступ: public


# ::stappler::vg::VectorPathRef::~VectorPathRef()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::vg::VectorPathRef::init(stappler::vg::VectorImage*,stappler::vg::VectorPathRef::String const&,Rc<stappler::vg::VectorPath> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::vg::VectorImage*
* stappler::vg::VectorPathRef::String const&
* Rc<stappler::vg::VectorPath> const&

Возвращает:
* bool

# ::stappler::vg::VectorPathRef::init(stappler::vg::VectorImage*,stappler::vg::VectorPathRef::String const&,Rc<stappler::vg::VectorPath>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::vg::VectorImage*
* stappler::vg::VectorPathRef::String const&
* Rc<stappler::vg::VectorPath>&&

Возвращает:
* bool

# ::stappler::vg::VectorPathRef::count() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* size_t

# ::stappler::vg::VectorPathRef::setPath(stappler::BytesView)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::BytesView

Возвращает:
* stappler::vg::VectorPathRef&

# ::stappler::vg::VectorPathRef::setPath(stappler::StringView)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView

Возвращает:
* stappler::vg::VectorPathRef&

# ::stappler::vg::VectorPathRef::moveTo(float,float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float
* float

Возвращает:
* stappler::vg::VectorPathRef&

# ::stappler::vg::VectorPathRef::moveTo(stappler::geom::Vec2 const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::geom::Vec2 const&

Возвращает:
* stappler::vg::VectorPathRef&

# ::stappler::vg::VectorPathRef::lineTo(float,float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float
* float

Возвращает:
* stappler::vg::VectorPathRef&

# ::stappler::vg::VectorPathRef::lineTo(stappler::geom::Vec2 const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::geom::Vec2 const&

Возвращает:
* stappler::vg::VectorPathRef&

# ::stappler::vg::VectorPathRef::quadTo(float,float,float,float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float
* float
* float
* float

Возвращает:
* stappler::vg::VectorPathRef&

# ::stappler::vg::VectorPathRef::quadTo(stappler::geom::Vec2 const&,stappler::geom::Vec2 const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::geom::Vec2 const&
* stappler::geom::Vec2 const&

Возвращает:
* stappler::vg::VectorPathRef&

# ::stappler::vg::VectorPathRef::cubicTo(float,float,float,float,float,float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float
* float
* float
* float
* float
* float

Возвращает:
* stappler::vg::VectorPathRef&

# ::stappler::vg::VectorPathRef::cubicTo(stappler::geom::Vec2 const&,stappler::geom::Vec2 const&,stappler::geom::Vec2 const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::geom::Vec2 const&
* stappler::geom::Vec2 const&
* stappler::geom::Vec2 const&

Возвращает:
* stappler::vg::VectorPathRef&

# ::stappler::vg::VectorPathRef::arcTo(float,float,float,bool,bool,float,float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float
* float
* float
* bool
* bool
* float
* float

Возвращает:
* stappler::vg::VectorPathRef&

# ::stappler::vg::VectorPathRef::arcTo(stappler::geom::Vec2 const&,float,bool,bool,stappler::geom::Vec2 const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::geom::Vec2 const&
* float
* bool
* bool
* stappler::geom::Vec2 const&

Возвращает:
* stappler::vg::VectorPathRef&

# ::stappler::vg::VectorPathRef::closePath()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::vg::VectorPathRef&

# ::stappler::vg::VectorPathRef::addRect(stappler::geom::Rect const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::geom::Rect const&

Возвращает:
* stappler::vg::VectorPathRef&

# ::stappler::vg::VectorPathRef::addRect(stappler::geom::Rect const&,float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::geom::Rect const&
* float

Возвращает:
* stappler::vg::VectorPathRef&

# ::stappler::vg::VectorPathRef::addOval(stappler::geom::Rect const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::geom::Rect const&

Возвращает:
* stappler::vg::VectorPathRef&

# ::stappler::vg::VectorPathRef::addCircle(float,float,float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float
* float
* float

Возвращает:
* stappler::vg::VectorPathRef&

# ::stappler::vg::VectorPathRef::addArc(stappler::geom::Rect const&,float,float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::geom::Rect const&
* float
* float

Возвращает:
* stappler::vg::VectorPathRef&

# ::stappler::vg::VectorPathRef::setFillColor(stappler::geom::Color4B const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::geom::Color4B const&

Возвращает:
* stappler::vg::VectorPathRef&

# ::stappler::vg::VectorPathRef::getFillColor() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::geom::Color4B const&

# ::stappler::vg::VectorPathRef::setStrokeColor(stappler::geom::Color4B const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::geom::Color4B const&

Возвращает:
* stappler::vg::VectorPathRef&

# ::stappler::vg::VectorPathRef::getStrokeColor() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::geom::Color4B const&

# ::stappler::vg::VectorPathRef::setFillOpacity(uint8_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint8_t

Возвращает:
* stappler::vg::VectorPathRef&

# ::stappler::vg::VectorPathRef::getFillOpacity() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint8_t

# ::stappler::vg::VectorPathRef::setStrokeOpacity(uint8_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint8_t

Возвращает:
* stappler::vg::VectorPathRef&

# ::stappler::vg::VectorPathRef::getStrokeOpacity() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint8_t

# ::stappler::vg::VectorPathRef::setStrokeWidth(float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float

Возвращает:
* stappler::vg::VectorPathRef&

# ::stappler::vg::VectorPathRef::getStrokeWidth() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* float

# ::stappler::vg::VectorPathRef::setWindingRule(vg::Winding)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* vg::Winding

Возвращает:
* stappler::vg::VectorPathRef&

# ::stappler::vg::VectorPathRef::getWindingRule() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* vg::Winding

# ::stappler::vg::VectorPathRef::setStyle(vg::DrawStyle)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* vg::DrawStyle

Возвращает:
* stappler::vg::VectorPathRef&

# ::stappler::vg::VectorPathRef::getStyle() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* vg::DrawStyle

# ::stappler::vg::VectorPathRef::setTransform(stappler::geom::Mat4 const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::geom::Mat4 const&

Возвращает:
* stappler::vg::VectorPathRef&

# ::stappler::vg::VectorPathRef::applyTransform(stappler::geom::Mat4 const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::geom::Mat4 const&

Возвращает:
* stappler::vg::VectorPathRef&

# ::stappler::vg::VectorPathRef::getTransform() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::geom::Mat4 const&

# ::stappler::vg::VectorPathRef::setAntialiased(bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* bool

Возвращает:
* stappler::vg::VectorPathRef&

# ::stappler::vg::VectorPathRef::isAntialiased() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::vg::VectorPathRef::clear()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::vg::VectorPathRef&

# ::stappler::vg::VectorPathRef::getId() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::StringView

# ::stappler::vg::VectorPathRef::empty() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::vg::VectorPathRef::valid() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::vg::VectorPathRef::operator bool() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::vg::VectorPathRef::setPath(Rc<stappler::vg::VectorPath>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Rc<stappler::vg::VectorPath>&&


# ::stappler::vg::VectorPathRef::getPath() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::vg::VectorPath*

# ::stappler::vg::VectorPathRef::markCopyOnWrite()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::vg::VectorPathRef::setImage(stappler::vg::VectorImage*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::vg::VectorImage*


# ::stappler::vg::VectorPathRef::copy()

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::vg::VectorPathRef::_copyOnWrite

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::vg::VectorPathRef::_id

## BRIEF

## CONTENT

Доступ: protected

Тип: String


# ::stappler::vg::VectorPathRef::_path

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::vg::VectorPath>


# ::stappler::vg::VectorPathRef::_image

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::vg::VectorImage*


# ::stappler::vg::VectorImageData

## BRIEF

## CONTENT

Базовые классы:
* RefBase<Interface>


# ::stappler::vg::VectorImageData::String

## BRIEF

## CONTENT

Доступ: public


# ::stappler::vg::VectorImageData::~VectorImageData()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::vg::VectorImageData::init(stappler::vg::VectorImage*,stappler::geom::Size2,stappler::geom::Rect,Interface::VectorType<PathXRef>&&,Interface::MapType<String, VectorPath>&&,uint16_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::vg::VectorImage*
* stappler::geom::Size2
* stappler::geom::Rect
* Interface::VectorType<PathXRef>&&
* Interface::MapType<String, VectorPath>&&
* uint16_t

Возвращает:
* bool

# ::stappler::vg::VectorImageData::init(stappler::vg::VectorImage*,stappler::geom::Size2,stappler::geom::Rect)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::vg::VectorImage*
* stappler::geom::Size2
* stappler::geom::Rect

Возвращает:
* bool

# ::stappler::vg::VectorImageData::init(stappler::vg::VectorImageData&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::vg::VectorImageData&

Возвращает:
* bool

# ::stappler::vg::VectorImageData::setImageSize(stappler::geom::Size2 const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::geom::Size2 const&


# ::stappler::vg::VectorImageData::getImageSize() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::geom::Size2

# ::stappler::vg::VectorImageData::getViewBox() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::geom::Rect

# ::stappler::vg::VectorImageData::getPaths() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Interface::MapType<String, Rc<VectorPath>> const&

# ::stappler::vg::VectorImageData::copyPath(stappler::StringView,Rc<stappler::vg::VectorPath> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView
* Rc<stappler::vg::VectorPath> const&

Возвращает:
* Rc<stappler::vg::VectorPath>

# ::stappler::vg::VectorImageData::getNextId()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint16_t

# ::stappler::vg::VectorImageData::addPath(stappler::StringView,stappler::StringView,stappler::vg::VectorPath&&,stappler::geom::Mat4)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView
* stappler::StringView
* stappler::vg::VectorPath&&
* stappler::geom::Mat4

Возвращает:
* Rc<stappler::vg::VectorPath>

# ::stappler::vg::VectorImageData::removePath(stappler::StringView)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView


# ::stappler::vg::VectorImageData::clear()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::vg::VectorImageData::getDrawOrder() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Interface::VectorType<PathXRef> const&

# ::stappler::vg::VectorImageData::setDrawOrder(Interface::VectorType<PathXRef>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Interface::VectorType<PathXRef>&&


# ::stappler::vg::VectorImageData::resetDrawOrder()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::vg::VectorImageData::setViewBoxTransform(stappler::geom::Mat4 const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::geom::Mat4 const&


# ::stappler::vg::VectorImageData::getViewBoxTransform() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::geom::Mat4 const&

# ::stappler::vg::VectorImageData::setBatchDrawing(bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* bool


# ::stappler::vg::VectorImageData::isBatchDrawing() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::vg::VectorImageData::draw<typename>(Callback const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename Callback

Параметры:
* Callback const&


# ::stappler::vg::VectorImageData::_allowBatchDrawing

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::vg::VectorImageData::_imageSize

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::geom::Size2


# ::stappler::vg::VectorImageData::_viewBox

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::geom::Rect


# ::stappler::vg::VectorImageData::_viewBoxTransform

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::geom::Mat4


# ::stappler::vg::VectorImageData::_order

## BRIEF

## CONTENT

Доступ: protected

Тип: Interface::VectorType<PathXRef>


# ::stappler::vg::VectorImageData::_paths

## BRIEF

## CONTENT

Доступ: protected

Тип: Interface::MapType<String, Rc<VectorPath>>


# ::stappler::vg::VectorImageData::_nextId

## BRIEF

## CONTENT

Доступ: protected

Тип: uint16_t


# ::stappler::vg::VectorImageData::_image

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::vg::VectorImage*


# ::stappler::vg::VectorImage

## BRIEF

## CONTENT

Базовые классы:
* RefBase<Interface>


# ::stappler::vg::VectorImage::String

## BRIEF

## CONTENT

Доступ: public


# ::stappler::vg::VectorImage::isSvg(stappler::StringView)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView

Возвращает:
* bool

# ::stappler::vg::VectorImage::isSvg(stappler::BytesView)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::BytesView

Возвращает:
* bool

# ::stappler::vg::VectorImage::isSvg(stappler::FilePath)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::FilePath

Возвращает:
* bool

# ::stappler::vg::VectorImage::~VectorImage()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::vg::VectorImage::init(stappler::geom::Size2,stappler::StringView)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::geom::Size2
* stappler::StringView

Возвращает:
* bool

# ::stappler::vg::VectorImage::init(stappler::geom::Size2,stappler::vg::VectorPath&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::geom::Size2
* stappler::vg::VectorPath&&

Возвращает:
* bool

# ::stappler::vg::VectorImage::init(stappler::geom::Size2)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::geom::Size2

Возвращает:
* bool

# ::stappler::vg::VectorImage::init(stappler::StringView)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView

Возвращает:
* bool

# ::stappler::vg::VectorImage::init(stappler::BytesView)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::BytesView

Возвращает:
* bool

# ::stappler::vg::VectorImage::init(stappler::FilePath)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::FilePath

Возвращает:
* bool

# ::stappler::vg::VectorImage::setImageSize(stappler::geom::Size2 const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::geom::Size2 const&


# ::stappler::vg::VectorImage::getImageSize() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::geom::Size2

# ::stappler::vg::VectorImage::getViewBox() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::geom::Rect

# ::stappler::vg::VectorImage::addPath(stappler::vg::VectorPath const&,stappler::StringView,stappler::StringView,stappler::geom::Mat4)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::vg::VectorPath const&
* stappler::StringView
* stappler::StringView
* stappler::geom::Mat4

Возвращает:
* Rc<stappler::vg::VectorPathRef>

# ::stappler::vg::VectorImage::addPath(stappler::vg::VectorPath&&,stappler::StringView,stappler::StringView,stappler::geom::Mat4)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::vg::VectorPath&&
* stappler::StringView
* stappler::StringView
* stappler::geom::Mat4

Возвращает:
* Rc<stappler::vg::VectorPathRef>

# ::stappler::vg::VectorImage::addPath(stappler::StringView,stappler::StringView,stappler::geom::Mat4)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView
* stappler::StringView
* stappler::geom::Mat4

Возвращает:
* Rc<stappler::vg::VectorPathRef>

# ::stappler::vg::VectorImage::getPath(stappler::StringView) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView

Возвращает:
* Rc<stappler::vg::VectorPathRef>

# ::stappler::vg::VectorImage::getPaths() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Interface::MapType<String, Rc<VectorPathRef>> const&

# ::stappler::vg::VectorImage::removePath(Rc<stappler::vg::VectorPathRef> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Rc<stappler::vg::VectorPathRef> const&


# ::stappler::vg::VectorImage::removePath(stappler::StringView)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView


# ::stappler::vg::VectorImage::clear()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::vg::VectorImage::getDrawOrder() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Interface::VectorType<PathXRef> const&

# ::stappler::vg::VectorImage::setDrawOrder(Interface::VectorType<PathXRef> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Interface::VectorType<PathXRef> const&


# ::stappler::vg::VectorImage::setDrawOrder(Interface::VectorType<PathXRef>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Interface::VectorType<PathXRef>&&


# ::stappler::vg::VectorImage::resetDrawOrder()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::vg::VectorImage::setViewBoxTransform(stappler::geom::Mat4 const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::geom::Mat4 const&


# ::stappler::vg::VectorImage::getViewBoxTransform() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::geom::Mat4 const&

# ::stappler::vg::VectorImage::setBatchDrawing(bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* bool


# ::stappler::vg::VectorImage::isBatchDrawing() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::vg::VectorImage::popData()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Rc<stappler::vg::VectorImageData>

# ::stappler::vg::VectorImage::isDirty() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::vg::VectorImage::setDirty()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::vg::VectorImage::clearDirty()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::vg::VectorImage::copy()

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::vg::VectorImage::markCopyOnWrite()

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::vg::VectorImage::copyPath(stappler::StringView,Rc<stappler::vg::VectorPath> const&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::StringView
* Rc<stappler::vg::VectorPath> const&

Возвращает:
* Rc<stappler::vg::VectorPath>

# ::stappler::vg::VectorImage::_dirty

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::vg::VectorImage::_copyOnWrite

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::vg::VectorImage::_data

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::vg::VectorImageData>


# ::stappler::vg::VectorImage::_paths

## BRIEF

## CONTENT

Доступ: protected

Тип: Interface::MapType<String, Rc<VectorPathRef>>


# ::stappler::vg::VectorImageData::draw<typename>(Callback const&) const

## BRIEF

## CONTENT

Параметры шаблона:
* typename Callback

Параметры:
* Callback const&
