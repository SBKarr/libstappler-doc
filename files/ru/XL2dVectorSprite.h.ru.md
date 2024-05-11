Title: XL2dVectorSprite.h


# XENOLITH_RENDERER_BASIC2D_XL2DVECTORSPRITE_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::basic2d::VectorSprite

## BRIEF

## CONTENT

Базовые классы:
* Sprite


# ::stappler::xenolith::basic2d::VectorSprite::QualityWorst

## BRIEF

## CONTENT

Доступ: public

Тип: float const


# ::stappler::xenolith::basic2d::VectorSprite::QualityLow

## BRIEF

## CONTENT

Доступ: public

Тип: float const


# ::stappler::xenolith::basic2d::VectorSprite::QualityNormal

## BRIEF

## CONTENT

Доступ: public

Тип: float const


# ::stappler::xenolith::basic2d::VectorSprite::QualityHigh

## BRIEF

## CONTENT

Доступ: public

Тип: float const


# ::stappler::xenolith::basic2d::VectorSprite::QualityPerfect

## BRIEF

## CONTENT

Доступ: public

Тип: float const


# ::stappler::xenolith::basic2d::VectorSprite::~VectorSprite()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::basic2d::VectorSprite::VectorSprite()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::basic2d::VectorSprite::init(Rc<stappler::xenolith::basic2d::VectorImage>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Rc<stappler::xenolith::basic2d::VectorImage>&&

Возвращает:
* bool

# ::stappler::xenolith::basic2d::VectorSprite::init(stappler::geom::Size2,stappler::StringView)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::geom::Size2
* stappler::StringView

Возвращает:
* bool

# ::stappler::xenolith::basic2d::VectorSprite::init(stappler::geom::Size2,stappler::xenolith::basic2d::VectorPath&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::geom::Size2
* stappler::xenolith::basic2d::VectorPath&&

Возвращает:
* bool

# ::stappler::xenolith::basic2d::VectorSprite::init(stappler::geom::Size2)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::geom::Size2

Возвращает:
* bool

# ::stappler::xenolith::basic2d::VectorSprite::init(stappler::StringView)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView

Возвращает:
* bool

# ::stappler::xenolith::basic2d::VectorSprite::init(stappler::BytesView)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::BytesView

Возвращает:
* bool

# ::stappler::xenolith::basic2d::VectorSprite::init(stappler::FilePath)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::FilePath

Возвращает:
* bool

# ::stappler::xenolith::basic2d::VectorSprite::addPath(stappler::StringView,stappler::StringView,stappler::geom::Mat4)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView
* stappler::StringView
* stappler::geom::Mat4

Возвращает:
* Rc<stappler::xenolith::basic2d::VectorPathRef>

# ::stappler::xenolith::basic2d::VectorSprite::addPath(stappler::xenolith::basic2d::VectorPath const&,stappler::StringView,stappler::StringView,stappler::geom::Mat4)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::basic2d::VectorPath const&
* stappler::StringView
* stappler::StringView
* stappler::geom::Mat4

Возвращает:
* Rc<stappler::xenolith::basic2d::VectorPathRef>

# ::stappler::xenolith::basic2d::VectorSprite::addPath(stappler::xenolith::basic2d::VectorPath&&,stappler::StringView,stappler::StringView,stappler::geom::Mat4)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::basic2d::VectorPath&&
* stappler::StringView
* stappler::StringView
* stappler::geom::Mat4

Возвращает:
* Rc<stappler::xenolith::basic2d::VectorPathRef>

# ::stappler::xenolith::basic2d::VectorSprite::getPath(stappler::StringView)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView

Возвращает:
* Rc<stappler::xenolith::basic2d::VectorPathRef>

# ::stappler::xenolith::basic2d::VectorSprite::removePath(Rc<stappler::xenolith::basic2d::VectorPathRef> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Rc<stappler::xenolith::basic2d::VectorPathRef> const&


# ::stappler::xenolith::basic2d::VectorSprite::removePath(stappler::StringView)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView


# ::stappler::xenolith::basic2d::VectorSprite::clear()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::basic2d::VectorSprite::setImage(Rc<stappler::xenolith::basic2d::VectorImage>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Rc<stappler::xenolith::basic2d::VectorImage>&&


# ::stappler::xenolith::basic2d::VectorSprite::getImage() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Rc<stappler::xenolith::basic2d::VectorImage> const&

# ::stappler::xenolith::basic2d::VectorSprite::setQuality(float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float


# ::stappler::xenolith::basic2d::VectorSprite::getQuality() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* float

# ::stappler::xenolith::basic2d::VectorSprite::onTransformDirty(const stappler::geom::Mat4&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* const stappler::geom::Mat4&


# ::stappler::xenolith::basic2d::VectorSprite::visitDraw(stappler::xenolith::FrameInfo&,stappler::xenolith::NodeFlags)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::FrameInfo&
* stappler::xenolith::NodeFlags

Возвращает:
* bool

# ::stappler::xenolith::basic2d::VectorSprite::getTrianglesCount() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint32_t

# ::stappler::xenolith::basic2d::VectorSprite::getVertexesCount() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint32_t

# ::stappler::xenolith::basic2d::VectorSprite::setDeferred(bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* bool


# ::stappler::xenolith::basic2d::VectorSprite::isDeferred() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::basic2d::VectorSprite::setWaitDeferred(bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* bool


# ::stappler::xenolith::basic2d::VectorSprite::isWaitDeferred() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::basic2d::VectorSprite::pushShadowCommands(stappler::xenolith::FrameInfo&,stappler::xenolith::NodeFlags,const stappler::geom::Mat4&,SpanView<stappler::xenolith::basic2d::TransformVertexData>)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::FrameInfo&
* stappler::xenolith::NodeFlags
* const stappler::geom::Mat4&
* SpanView<stappler::xenolith::basic2d::TransformVertexData>


# ::stappler::xenolith::basic2d::VectorSprite::pushCommands(stappler::xenolith::FrameInfo&,stappler::xenolith::NodeFlags)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::FrameInfo&
* stappler::xenolith::NodeFlags


# ::stappler::xenolith::basic2d::VectorSprite::initVertexes()

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::basic2d::VectorSprite::updateVertexes()

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::basic2d::VectorSprite::updateVertexesColor()

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::basic2d::VectorSprite::getRealRenderingLevel() const

## BRIEF

## CONTENT

Доступ: protected

Возвращает:
* stappler::xenolith::RenderingLevel

# ::stappler::xenolith::basic2d::VectorSprite::_deferred

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::basic2d::VectorSprite::_waitDeferred

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::basic2d::VectorSprite::_imageIsSolid

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::basic2d::VectorSprite::_asyncJobId

## BRIEF

## CONTENT

Доступ: protected

Тип: uint64_t


# ::stappler::xenolith::basic2d::VectorSprite::_targetSize

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::geom::Size2


# ::stappler::xenolith::basic2d::VectorSprite::_targetTransform

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::geom::Mat4


# ::stappler::xenolith::basic2d::VectorSprite::_image

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::xenolith::basic2d::VectorImage>


# ::stappler::xenolith::basic2d::VectorSprite::_quality

## BRIEF

## CONTENT

Доступ: protected

Тип: float


# ::stappler::xenolith::basic2d::VectorSprite::_result

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::xenolith::basic2d::VectorCanvasResult>


# ::stappler::xenolith::basic2d::VectorSprite::_deferredResult

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::xenolith::basic2d::VectorCanvasDeferredResult>
