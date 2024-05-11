Title: MaterialLayerSurface.h


# XENOLITH_RENDERER_MATERIAL2D_BASE_MATERIALLAYERSURFACE_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::material2d::LayerSurface

## BRIEF

## CONTENT

Базовые классы:
* Layer


# ::stappler::xenolith::material2d::LayerSurface::TransitionActionTag

## BRIEF

## CONTENT

Доступ: public

Тип: uint32_t const


# ::stappler::xenolith::material2d::LayerSurface::~LayerSurface()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::material2d::LayerSurface::init(stappler::xenolith::material2d::SurfaceStyle const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::material2d::SurfaceStyle const&

Возвращает:
* bool

# ::stappler::xenolith::material2d::LayerSurface::getStyleOrigin() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::material2d::SurfaceStyle const&

# ::stappler::xenolith::material2d::LayerSurface::getStyleTarget() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::material2d::SurfaceStyle const&

# ::stappler::xenolith::material2d::LayerSurface::getStyleCurrent() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::material2d::SurfaceStyleData const&

# ::stappler::xenolith::material2d::LayerSurface::setStyle(stappler::xenolith::material2d::SurfaceStyle const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::material2d::SurfaceStyle const&


# ::stappler::xenolith::material2d::LayerSurface::setStyle(stappler::xenolith::material2d::SurfaceStyle const&,float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::material2d::SurfaceStyle const&
* float


# ::stappler::xenolith::material2d::LayerSurface::setColorRole(stappler::xenolith::material2d::ColorRole)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::material2d::ColorRole


# ::stappler::xenolith::material2d::LayerSurface::setElevation(stappler::xenolith::material2d::Elevation)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::material2d::Elevation


# ::stappler::xenolith::material2d::LayerSurface::setShapeFamily(stappler::xenolith::material2d::ShapeFamily)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::material2d::ShapeFamily


# ::stappler::xenolith::material2d::LayerSurface::setShapeStyle(stappler::xenolith::material2d::ShapeStyle)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::material2d::ShapeStyle


# ::stappler::xenolith::material2d::LayerSurface::setNodeStyle(stappler::xenolith::material2d::NodeStyle)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::material2d::NodeStyle


# ::stappler::xenolith::material2d::LayerSurface::setActivityState(stappler::xenolith::material2d::ActivityState)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::material2d::ActivityState


# ::stappler::xenolith::material2d::LayerSurface::setStyleDirtyCallback(Function<void (const stappler::xenolith::material2d::SurfaceStyleData &)>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Function<void (const stappler::xenolith::material2d::SurfaceStyleData &)>&&


# ::stappler::xenolith::material2d::LayerSurface::getStyleDirtyCallback() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Function<void (const stappler::xenolith::material2d::SurfaceStyleData &)> const&

# ::stappler::xenolith::material2d::LayerSurface::visitDraw(stappler::xenolith::FrameInfo&,stappler::xenolith::NodeFlags)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::FrameInfo&
* stappler::xenolith::NodeFlags

Возвращает:
* bool

# ::stappler::xenolith::material2d::LayerSurface::applyStyle(stappler::xenolith::material2d::SurfaceStyleData const&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::material2d::SurfaceStyleData const&


# ::stappler::xenolith::material2d::LayerSurface::getStyleContainerForFrame(stappler::xenolith::FrameInfo&) const

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::FrameInfo&

Возвращает:
* stappler::xenolith::material2d::StyleContainer*

# ::stappler::xenolith::material2d::LayerSurface::getSurfaceInteriorForFrame(stappler::xenolith::FrameInfo&) const

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::FrameInfo&

Возвращает:
* stappler::xenolith::material2d::SurfaceInterior*

# ::stappler::xenolith::material2d::LayerSurface::getRealRenderingLevel() const

## BRIEF

## CONTENT

Доступ: protected

Возвращает:
* stappler::xenolith::RenderingLevel

# ::stappler::xenolith::material2d::LayerSurface::_interior

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::material2d::SurfaceInterior*


# ::stappler::xenolith::material2d::LayerSurface::_styleOrigin

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::material2d::SurfaceStyle


# ::stappler::xenolith::material2d::LayerSurface::_styleTarget

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::material2d::SurfaceStyle


# ::stappler::xenolith::material2d::LayerSurface::_styleDataOrigin

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::material2d::SurfaceStyleData


# ::stappler::xenolith::material2d::LayerSurface::_styleDataTarget

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::material2d::SurfaceStyleData


# ::stappler::xenolith::material2d::LayerSurface::_styleDataCurrent

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::material2d::SurfaceStyleData


# ::stappler::xenolith::material2d::LayerSurface::_styleDirtyCallback

## BRIEF

## CONTENT

Доступ: protected

Тип: Function<void (const stappler::xenolith::material2d::SurfaceStyleData &)>


# ::stappler::xenolith::material2d::LayerSurface::_styleProgress

## BRIEF

## CONTENT

Доступ: protected

Тип: float


# ::stappler::xenolith::material2d::LayerSurface::_styleDirty

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::material2d::LayerSurface::_inTransition

## BRIEF

## CONTENT

Доступ: protected

Тип: bool
