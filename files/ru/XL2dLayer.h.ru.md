Title: XL2dLayer.h


# XENOLITH_RENDERER_BASIC2D_XL2DLAYER_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::basic2d::SimpleGradient

## BRIEF

## CONTENT


# ::stappler::xenolith::basic2d::SimpleGradient::Color

## BRIEF

## CONTENT


# ::stappler::xenolith::basic2d::SimpleGradient::ColorRef

## BRIEF

## CONTENT


# ::stappler::xenolith::basic2d::SimpleGradient::Vertical

## BRIEF

## CONTENT

Тип: const stappler::geom::Vec2


# ::stappler::xenolith::basic2d::SimpleGradient::Horizontal

## BRIEF

## CONTENT

Тип: const stappler::geom::Vec2


# ::stappler::xenolith::basic2d::SimpleGradient::progress(stappler::xenolith::basic2d::SimpleGradient const&,stappler::xenolith::basic2d::SimpleGradient const&,float)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::basic2d::SimpleGradient const&
* stappler::xenolith::basic2d::SimpleGradient const&
* float

Возвращает:
* stappler::xenolith::basic2d::SimpleGradient

# ::stappler::xenolith::basic2d::SimpleGradient::SimpleGradient()

## BRIEF

## CONTENT


# ::stappler::xenolith::basic2d::SimpleGradient::SimpleGradient(stappler::xenolith::basic2d::SimpleGradient::ColorRef)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::basic2d::SimpleGradient::ColorRef


# ::stappler::xenolith::basic2d::SimpleGradient::SimpleGradient(stappler::xenolith::basic2d::SimpleGradient::ColorRef,stappler::xenolith::basic2d::SimpleGradient::ColorRef,const stappler::geom::Vec2&)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::basic2d::SimpleGradient::ColorRef
* stappler::xenolith::basic2d::SimpleGradient::ColorRef
* const stappler::geom::Vec2&


# ::stappler::xenolith::basic2d::SimpleGradient::SimpleGradient(stappler::xenolith::basic2d::SimpleGradient::ColorRef,stappler::xenolith::basic2d::SimpleGradient::ColorRef,stappler::xenolith::basic2d::SimpleGradient::ColorRef,stappler::xenolith::basic2d::SimpleGradient::ColorRef)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::basic2d::SimpleGradient::ColorRef
* stappler::xenolith::basic2d::SimpleGradient::ColorRef
* stappler::xenolith::basic2d::SimpleGradient::ColorRef
* stappler::xenolith::basic2d::SimpleGradient::ColorRef


# ::stappler::xenolith::basic2d::SimpleGradient::hasAlpha() const

## BRIEF

## CONTENT

Возвращает:
* bool

# ::stappler::xenolith::basic2d::SimpleGradient::isMono() const

## BRIEF

## CONTENT

Возвращает:
* bool

# ::stappler::xenolith::basic2d::SimpleGradient::operator==(stappler::xenolith::basic2d::SimpleGradient const&) const

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::basic2d::SimpleGradient const&

Возвращает:
* bool

# ::stappler::xenolith::basic2d::SimpleGradient::operator!=(stappler::xenolith::basic2d::SimpleGradient const&) const

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::basic2d::SimpleGradient const&

Возвращает:
* bool

# ::stappler::xenolith::basic2d::SimpleGradient::colors

## BRIEF

## CONTENT

Тип: stappler::geom::Color4B[4]


# ::stappler::xenolith::basic2d::Layer

## BRIEF

## CONTENT

Базовые классы:
* Sprite


# ::stappler::xenolith::basic2d::Layer::~Layer()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::basic2d::Layer::init()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::basic2d::Layer::init(const stappler::geom::Color4F&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* const stappler::geom::Color4F&

Возвращает:
* bool

# ::stappler::xenolith::basic2d::Layer::init(stappler::xenolith::basic2d::SimpleGradient const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::basic2d::SimpleGradient const&

Возвращает:
* bool

# ::stappler::xenolith::basic2d::Layer::onContentSizeDirty()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::basic2d::Layer::setGradient(stappler::xenolith::basic2d::SimpleGradient const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::basic2d::SimpleGradient const&


# ::stappler::xenolith::basic2d::Layer::getGradient() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::basic2d::SimpleGradient const&

# ::stappler::xenolith::basic2d::Layer::updateVertexes()

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::basic2d::Layer::updateVertexesColor()

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::basic2d::Layer::getRealRenderingLevel() const

## BRIEF

## CONTENT

Доступ: protected

Возвращает:
* stappler::xenolith::RenderingLevel

# ::stappler::xenolith::basic2d::Layer::pushShadowCommands(stappler::xenolith::FrameInfo&,stappler::xenolith::NodeFlags,const stappler::geom::Mat4&,SpanView<stappler::xenolith::basic2d::TransformVertexData>)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::FrameInfo&
* stappler::xenolith::NodeFlags
* const stappler::geom::Mat4&
* SpanView<stappler::xenolith::basic2d::TransformVertexData>


# ::stappler::xenolith::basic2d::Layer::_gradient

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::basic2d::SimpleGradient


# ::stappler::progress(xenolith::basic2d::SimpleGradient const&,xenolith::basic2d::SimpleGradient const&,float)

## BRIEF

## CONTENT

Параметры:
* xenolith::basic2d::SimpleGradient const&
* xenolith::basic2d::SimpleGradient const&
* float

Возвращает:
* xenolith::basic2d::SimpleGradient