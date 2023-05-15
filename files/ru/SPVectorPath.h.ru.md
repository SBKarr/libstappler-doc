Title: SPVectorPath.h


# MODULES_VG_SPVECTORPATH_H_

## BRIEF

## CONTENT


# ::stappler::vg::Interface

## BRIEF

## CONTENT


# ::stappler::vg::PathXRef

## BRIEF

## CONTENT


# ::stappler::vg::PathXRef::id

## BRIEF

## CONTENT

Тип: Interface::StringType


# ::stappler::vg::PathXRef::cacheId

## BRIEF

## CONTENT

Тип: Interface::StringType


# ::stappler::vg::PathXRef::mat

## BRIEF

## CONTENT

Тип: stappler::geom::Mat4


# ::stappler::vg::VectorPath

## BRIEF

## CONTENT

Базовые классы:
* RefBase<Interface>


# ::stappler::vg::VectorPath::DrawStyle

## BRIEF

## CONTENT

Доступ: public


# ::stappler::vg::VectorPath::Winding

## BRIEF

## CONTENT

Доступ: public


# ::stappler::vg::VectorPath::LineCup

## BRIEF

## CONTENT

Доступ: public


# ::stappler::vg::VectorPath::LineJoin

## BRIEF

## CONTENT

Доступ: public


# ::stappler::vg::VectorPath::Params

## BRIEF

## CONTENT

Доступ: public


# ::stappler::vg::VectorPath::Params::transform

## BRIEF

## CONTENT

Тип: stappler::geom::Mat4


# ::stappler::vg::VectorPath::Params::fillColor

## BRIEF

## CONTENT

Тип: stappler::geom::Color4B


# ::stappler::vg::VectorPath::Params::strokeColor

## BRIEF

## CONTENT

Тип: stappler::geom::Color4B


# ::stappler::vg::VectorPath::Params::style

## BRIEF

## CONTENT

Тип: stappler::vg::VectorPath::DrawStyle


# ::stappler::vg::VectorPath::Params::strokeWidth

## BRIEF

## CONTENT

Тип: float


# ::stappler::vg::VectorPath::Params::winding

## BRIEF

## CONTENT

Тип: stappler::vg::VectorPath::Winding


# ::stappler::vg::VectorPath::Params::lineCup

## BRIEF

## CONTENT

Тип: stappler::vg::VectorPath::LineCup


# ::stappler::vg::VectorPath::Params::lineJoin

## BRIEF

## CONTENT

Тип: stappler::vg::VectorPath::LineJoin


# ::stappler::vg::VectorPath::Params::miterLimit

## BRIEF

## CONTENT

Тип: float


# ::stappler::vg::VectorPath::Params::isAntialiased

## BRIEF

## CONTENT

Тип: bool


# ::stappler::vg::VectorPath::CommandData

## BRIEF

## CONTENT

Доступ: public


# ::stappler::vg::VectorPath::CommandData::

## BRIEF

## CONTENT


# ::stappler::vg::VectorPath::CommandData::x

## BRIEF

## CONTENT

Тип: float


# ::stappler::vg::VectorPath::CommandData::y

## BRIEF

## CONTENT

Тип: float


# ::stappler::vg::VectorPath::CommandData::p

## BRIEF

## CONTENT

Тип: 


# ::stappler::vg::VectorPath::CommandData::

## BRIEF

## CONTENT


# ::stappler::vg::VectorPath::CommandData::v

## BRIEF

## CONTENT

Тип: float


# ::stappler::vg::VectorPath::CommandData::a

## BRIEF

## CONTENT

Тип: bool


# ::stappler::vg::VectorPath::CommandData::b

## BRIEF

## CONTENT

Тип: bool


# ::stappler::vg::VectorPath::CommandData::f

## BRIEF

## CONTENT

Тип: 


# ::stappler::vg::VectorPath::CommandData::CommandData(float,float)

## BRIEF

## CONTENT

Параметры:
* float
* float


# ::stappler::vg::VectorPath::CommandData::CommandData(float,bool,bool)

## BRIEF

## CONTENT

Параметры:
* float
* bool
* bool


# ::stappler::vg::VectorPath::Command

## BRIEF

## CONTENT

Доступ: public

Значения:
* MoveTo
* LineTo
* QuadTo
* CubicTo
* ArcTo
* ClosePath


# ::stappler::vg::VectorPath::VectorPath()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::vg::VectorPath::VectorPath(size_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* size_t


# ::stappler::vg::VectorPath::VectorPath(stappler::vg::VectorPath const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::vg::VectorPath const&


# ::stappler::vg::VectorPath::operator=(stappler::vg::VectorPath const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::vg::VectorPath const&

Возвращает:
* stappler::vg::VectorPath&

# ::stappler::vg::VectorPath::VectorPath(stappler::vg::VectorPath&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::vg::VectorPath&&


# ::stappler::vg::VectorPath::operator=(stappler::vg::VectorPath&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::vg::VectorPath&&

Возвращает:
* stappler::vg::VectorPath&

# ::stappler::vg::VectorPath::init()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::vg::VectorPath::init(stappler::StringView const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView const&

Возвращает:
* bool

# ::stappler::vg::VectorPath::init(stappler::FilePath&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::FilePath&&

Возвращает:
* bool

# ::stappler::vg::VectorPath::init(stappler::BytesView)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::BytesView

Возвращает:
* bool

# ::stappler::vg::VectorPath::addPath(stappler::vg::VectorPath const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::vg::VectorPath const&

Возвращает:
* stappler::vg::VectorPath&

# ::stappler::vg::VectorPath::addPath(stappler::BytesView)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::BytesView

Возвращает:
* stappler::vg::VectorPath&

# ::stappler::vg::VectorPath::addPath(stappler::StringView)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView

Возвращает:
* stappler::vg::VectorPath&

# ::stappler::vg::VectorPath::count() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* size_t

# ::stappler::vg::VectorPath::moveTo(float,float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float
* float

Возвращает:
* stappler::vg::VectorPath&

# ::stappler::vg::VectorPath::moveTo(stappler::geom::Vec2 const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::geom::Vec2 const&

Возвращает:
* stappler::vg::VectorPath&

# ::stappler::vg::VectorPath::lineTo(float,float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float
* float

Возвращает:
* stappler::vg::VectorPath&

# ::stappler::vg::VectorPath::lineTo(stappler::geom::Vec2 const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::geom::Vec2 const&

Возвращает:
* stappler::vg::VectorPath&

# ::stappler::vg::VectorPath::quadTo(float,float,float,float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float
* float
* float
* float

Возвращает:
* stappler::vg::VectorPath&

# ::stappler::vg::VectorPath::quadTo(stappler::geom::Vec2 const&,stappler::geom::Vec2 const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::geom::Vec2 const&
* stappler::geom::Vec2 const&

Возвращает:
* stappler::vg::VectorPath&

# ::stappler::vg::VectorPath::cubicTo(float,float,float,float,float,float)

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
* stappler::vg::VectorPath&

# ::stappler::vg::VectorPath::cubicTo(stappler::geom::Vec2 const&,stappler::geom::Vec2 const&,stappler::geom::Vec2 const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::geom::Vec2 const&
* stappler::geom::Vec2 const&
* stappler::geom::Vec2 const&

Возвращает:
* stappler::vg::VectorPath&

# ::stappler::vg::VectorPath::arcTo(float,float,float,bool,bool,float,float)

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
* stappler::vg::VectorPath&

# ::stappler::vg::VectorPath::arcTo(stappler::geom::Vec2 const&,float,bool,bool,stappler::geom::Vec2 const&)

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
* stappler::vg::VectorPath&

# ::stappler::vg::VectorPath::closePath()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::vg::VectorPath&

# ::stappler::vg::VectorPath::addRect(stappler::geom::Rect const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::geom::Rect const&

Возвращает:
* stappler::vg::VectorPath&

# ::stappler::vg::VectorPath::addRect(stappler::geom::Rect const&,float,float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::geom::Rect const&
* float
* float

Возвращает:
* stappler::vg::VectorPath&

# ::stappler::vg::VectorPath::addRect(float,float,float,float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float
* float
* float
* float

Возвращает:
* stappler::vg::VectorPath&

# ::stappler::vg::VectorPath::addOval(stappler::geom::Rect const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::geom::Rect const&

Возвращает:
* stappler::vg::VectorPath&

# ::stappler::vg::VectorPath::addCircle(float,float,float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float
* float
* float

Возвращает:
* stappler::vg::VectorPath&

# ::stappler::vg::VectorPath::addEllipse(float,float,float,float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float
* float
* float
* float

Возвращает:
* stappler::vg::VectorPath&

# ::stappler::vg::VectorPath::addArc(stappler::geom::Rect const&,float,float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::geom::Rect const&
* float
* float

Возвращает:
* stappler::vg::VectorPath&

# ::stappler::vg::VectorPath::addRect(float,float,float,float,float,float)

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
* stappler::vg::VectorPath&

# ::stappler::vg::VectorPath::setFillColor(stappler::geom::Color4B const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::geom::Color4B const&

Возвращает:
* stappler::vg::VectorPath&

# ::stappler::vg::VectorPath::setFillColor(stappler::geom::Color3B const&,bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::geom::Color3B const&
* bool

Возвращает:
* stappler::vg::VectorPath&

# ::stappler::vg::VectorPath::setFillColor(stappler::geom::Color const&,bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::geom::Color const&
* bool

Возвращает:
* stappler::vg::VectorPath&

# ::stappler::vg::VectorPath::getFillColor() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::geom::Color4B const&

# ::stappler::vg::VectorPath::setStrokeColor(stappler::geom::Color4B const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::geom::Color4B const&

Возвращает:
* stappler::vg::VectorPath&

# ::stappler::vg::VectorPath::setStrokeColor(stappler::geom::Color3B const&,bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::geom::Color3B const&
* bool

Возвращает:
* stappler::vg::VectorPath&

# ::stappler::vg::VectorPath::setStrokeColor(stappler::geom::Color const&,bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::geom::Color const&
* bool

Возвращает:
* stappler::vg::VectorPath&

# ::stappler::vg::VectorPath::getStrokeColor() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::geom::Color4B const&

# ::stappler::vg::VectorPath::setFillOpacity(uint8_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint8_t

Возвращает:
* stappler::vg::VectorPath&

# ::stappler::vg::VectorPath::getFillOpacity() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint8_t

# ::stappler::vg::VectorPath::setStrokeOpacity(uint8_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint8_t

Возвращает:
* stappler::vg::VectorPath&

# ::stappler::vg::VectorPath::getStrokeOpacity() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint8_t

# ::stappler::vg::VectorPath::setStrokeWidth(float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float

Возвращает:
* stappler::vg::VectorPath&

# ::stappler::vg::VectorPath::getStrokeWidth() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* float

# ::stappler::vg::VectorPath::setWindingRule(stappler::vg::VectorPath::Winding)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::vg::VectorPath::Winding

Возвращает:
* stappler::vg::VectorPath&

# ::stappler::vg::VectorPath::getWindingRule() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Winding

# ::stappler::vg::VectorPath::setLineCup(stappler::vg::VectorPath::LineCup)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::vg::VectorPath::LineCup

Возвращает:
* stappler::vg::VectorPath&

# ::stappler::vg::VectorPath::getLineCup() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* LineCup

# ::stappler::vg::VectorPath::setLineJoin(stappler::vg::VectorPath::LineJoin)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::vg::VectorPath::LineJoin

Возвращает:
* stappler::vg::VectorPath&

# ::stappler::vg::VectorPath::getLineJoin() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* LineJoin

# ::stappler::vg::VectorPath::setMiterLimit(float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float

Возвращает:
* stappler::vg::VectorPath&

# ::stappler::vg::VectorPath::getMiterLimit() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* float

# ::stappler::vg::VectorPath::setStyle(stappler::vg::VectorPath::DrawStyle)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::vg::VectorPath::DrawStyle

Возвращает:
* stappler::vg::VectorPath&

# ::stappler::vg::VectorPath::getStyle() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* DrawStyle

# ::stappler::vg::VectorPath::setAntialiased(bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* bool

Возвращает:
* stappler::vg::VectorPath&

# ::stappler::vg::VectorPath::isAntialiased() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::vg::VectorPath::setTransform(stappler::geom::Mat4 const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::geom::Mat4 const&

Возвращает:
* stappler::vg::VectorPath&

# ::stappler::vg::VectorPath::applyTransform(stappler::geom::Mat4 const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::geom::Mat4 const&

Возвращает:
* stappler::vg::VectorPath&

# ::stappler::vg::VectorPath::getTransform() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::geom::Mat4 const&

# ::stappler::vg::VectorPath::clear()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::vg::VectorPath&

# ::stappler::vg::VectorPath::setParams(stappler::vg::VectorPath::Params const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::vg::VectorPath::Params const&

Возвращает:
* stappler::vg::VectorPath&

# ::stappler::vg::VectorPath::getParams() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::vg::VectorPath::Params

# ::stappler::vg::VectorPath::empty() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::vg::VectorPath::reserve(size_t,size_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* size_t
* size_t


# ::stappler::vg::VectorPath::getCommands() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Interface::VectorType<Command> const&

# ::stappler::vg::VectorPath::getPoints() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Interface::VectorType<CommandData> const&

# ::stappler::vg::VectorPath::operator bool() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::vg::VectorPath::encode() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Interface::BytesType

# ::stappler::vg::VectorPath::toString(bool) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* bool

Возвращает:
* Interface::StringType

# ::stappler::vg::VectorPath::commandsCount() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* size_t

# ::stappler::vg::VectorPath::dataCount() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* size_t

# ::stappler::vg::VectorPath::_points

## BRIEF

## CONTENT

Доступ: protected

Тип: Interface::VectorType<CommandData>


# ::stappler::vg::VectorPath::_commands

## BRIEF

## CONTENT

Доступ: protected

Тип: Interface::VectorType<Command>


# ::stappler::vg::VectorPath::_params

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::vg::VectorPath::Params
