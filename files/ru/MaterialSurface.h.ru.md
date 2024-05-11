Title: MaterialSurface.h


# XENOLITH_RENDERER_MATERIAL2D_BASE_MATERIALSURFACE_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::material2d::Surface

## BRIEF

## CONTENT

Базовые классы:
* VectorSprite


# ::stappler::xenolith::material2d::Surface::TransitionActionTag

## BRIEF

## CONTENT

Доступ: public

Тип: uint32_t const


# ::stappler::xenolith::material2d::Surface::~Surface()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::material2d::Surface::init(stappler::xenolith::material2d::SurfaceStyle const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::material2d::SurfaceStyle const&

Возвращает:
* bool

# ::stappler::xenolith::material2d::Surface::getStyleOrigin() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::material2d::SurfaceStyle const&

# ::stappler::xenolith::material2d::Surface::getStyleTarget() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::material2d::SurfaceStyle const&

# ::stappler::xenolith::material2d::Surface::getStyleCurrent() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::material2d::SurfaceStyleData const&

# ::stappler::xenolith::material2d::Surface::setStyle(stappler::xenolith::material2d::SurfaceStyle const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::material2d::SurfaceStyle const&


# ::stappler::xenolith::material2d::Surface::setStyle(stappler::xenolith::material2d::SurfaceStyle const&,float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::material2d::SurfaceStyle const&
* float


# ::stappler::xenolith::material2d::Surface::setColorRole(stappler::xenolith::material2d::ColorRole)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::material2d::ColorRole


# ::stappler::xenolith::material2d::Surface::setElevation(stappler::xenolith::material2d::Elevation)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::material2d::Elevation


# ::stappler::xenolith::material2d::Surface::setShapeFamily(stappler::xenolith::material2d::ShapeFamily)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::material2d::ShapeFamily


# ::stappler::xenolith::material2d::Surface::setShapeStyle(stappler::xenolith::material2d::ShapeStyle)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::material2d::ShapeStyle


# ::stappler::xenolith::material2d::Surface::setNodeStyle(stappler::xenolith::material2d::NodeStyle)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::material2d::NodeStyle


# ::stappler::xenolith::material2d::Surface::setActivityState(stappler::xenolith::material2d::ActivityState)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::material2d::ActivityState


# ::stappler::xenolith::material2d::Surface::setStyleDirtyCallback(Function<void (const stappler::xenolith::material2d::SurfaceStyleData &)>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Function<void (const stappler::xenolith::material2d::SurfaceStyleData &)>&&


# ::stappler::xenolith::material2d::Surface::getStyleDirtyCallback() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Function<void (const stappler::xenolith::material2d::SurfaceStyleData &)> const&

# ::stappler::xenolith::material2d::Surface::visitDraw(stappler::xenolith::FrameInfo&,stappler::xenolith::NodeFlags)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::FrameInfo&
* stappler::xenolith::NodeFlags

Возвращает:
* bool

# ::stappler::xenolith::material2d::Surface::getHeightLimits(bool) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* bool

Возвращает:
* Pair<float, float>

# ::stappler::xenolith::material2d::Surface::setHeightLimits(float,float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float
* float


# ::stappler::xenolith::material2d::Surface::applyStyle(stappler::xenolith::material2d::StyleContainer*,stappler::xenolith::material2d::SurfaceStyleData const&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::material2d::StyleContainer*
* stappler::xenolith::material2d::SurfaceStyleData const&


# ::stappler::xenolith::material2d::Surface::updateBackgroundImage(stappler::xenolith::basic2d::VectorImage*,stappler::xenolith::material2d::SurfaceStyleData const&,float)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::basic2d::VectorImage*
* stappler::xenolith::material2d::SurfaceStyleData const&
* float


# ::stappler::xenolith::material2d::Surface::getStyleContainerForFrame(stappler::xenolith::FrameInfo&) const

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::FrameInfo&

Возвращает:
* stappler::xenolith::material2d::StyleContainer*

# ::stappler::xenolith::material2d::Surface::getSurfaceInteriorForFrame(stappler::xenolith::FrameInfo&) const

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::FrameInfo&

Возвращает:
* stappler::xenolith::material2d::SurfaceInterior*

# ::stappler::xenolith::material2d::Surface::getRealRenderingLevel() const

## BRIEF

## CONTENT

Доступ: protected

Возвращает:
* stappler::xenolith::RenderingLevel

# ::stappler::xenolith::material2d::Surface::pushShadowCommands(stappler::xenolith::FrameInfo&,stappler::xenolith::NodeFlags,const stappler::geom::Mat4&,SpanView<stappler::xenolith::basic2d::TransformVertexData>)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::FrameInfo&
* stappler::xenolith::NodeFlags
* const stappler::geom::Mat4&
* SpanView<stappler::xenolith::basic2d::TransformVertexData>


# ::stappler::xenolith::material2d::Surface::_interior

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::material2d::SurfaceInterior*


# ::stappler::xenolith::material2d::Surface::_styleOrigin

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::material2d::SurfaceStyle


# ::stappler::xenolith::material2d::Surface::_styleTarget

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::material2d::SurfaceStyle


# ::stappler::xenolith::material2d::Surface::_styleDataOrigin

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::material2d::SurfaceStyleData


# ::stappler::xenolith::material2d::Surface::_styleDataTarget

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::material2d::SurfaceStyleData


# ::stappler::xenolith::material2d::Surface::_styleDataCurrent

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::material2d::SurfaceStyleData


# ::stappler::xenolith::material2d::Surface::_styleDirtyCallback

## BRIEF

## CONTENT

Доступ: protected

Тип: Function<void (const stappler::xenolith::material2d::SurfaceStyleData &)>


# ::stappler::xenolith::material2d::Surface::_realShapeFamily

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::material2d::ShapeFamily


# ::stappler::xenolith::material2d::Surface::_fillValue

## BRIEF

## CONTENT

Доступ: protected

Тип: float


# ::stappler::xenolith::material2d::Surface::_outlineValue

## BRIEF

## CONTENT

Доступ: protected

Тип: float


# ::stappler::xenolith::material2d::Surface::_styleProgress

## BRIEF

## CONTENT

Доступ: protected

Тип: float


# ::stappler::xenolith::material2d::Surface::_realCornerRadius

## BRIEF

## CONTENT

Доступ: protected

Тип: float


# ::stappler::xenolith::material2d::Surface::_styleDirty

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::material2d::Surface::_inTransition

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::material2d::Surface::_minHeight

## BRIEF

## CONTENT

Доступ: protected

Тип: float


# ::stappler::xenolith::material2d::Surface::_maxHeight

## BRIEF

## CONTENT

Доступ: protected

Тип: float


# ::stappler::xenolith::material2d::BackgroundSurface

## BRIEF

## CONTENT

Базовые классы:
* Surface


# ::stappler::xenolith::material2d::BackgroundSurface::~BackgroundSurface()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::material2d::BackgroundSurface::init()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::material2d::BackgroundSurface::init(stappler::xenolith::material2d::SurfaceStyle const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::material2d::SurfaceStyle const&

Возвращает:
* bool

# ::stappler::xenolith::material2d::BackgroundSurface::getStyleContainer() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::material2d::StyleContainer*

# ::stappler::xenolith::material2d::BackgroundSurface::getStyleContainerForFrame(stappler::xenolith::FrameInfo&) const

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::FrameInfo&

Возвращает:
* stappler::xenolith::material2d::StyleContainer*

# ::stappler::xenolith::material2d::BackgroundSurface::_styleContainer

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::material2d::StyleContainer*
