Title: MaterialSurfaceInterior.h


# XENOLITH_RENDERER_MATERIAL2D_BASE_MATERIALSURFACEINTERIOR_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::material2d::SurfaceInterior

## BRIEF

## CONTENT

Базовые классы:
* Component


# ::stappler::xenolith::material2d::SurfaceInterior::ComponentFrameTag

## BRIEF

## CONTENT

Доступ: public

Тип: uint64_t


# ::stappler::xenolith::material2d::SurfaceInterior::~SurfaceInterior()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::material2d::SurfaceInterior::init()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::material2d::SurfaceInterior::init(stappler::xenolith::material2d::SurfaceStyle&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::material2d::SurfaceStyle&&

Возвращает:
* bool

# ::stappler::xenolith::material2d::SurfaceInterior::onAdded(stappler::xenolith::Node*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Node*


# ::stappler::xenolith::material2d::SurfaceInterior::visit(stappler::xenolith::FrameInfo&,stappler::xenolith::NodeFlags)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::FrameInfo&
* stappler::xenolith::NodeFlags


# ::stappler::xenolith::material2d::SurfaceInterior::setStyle(stappler::xenolith::material2d::SurfaceStyleData&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::material2d::SurfaceStyleData&&


# ::stappler::xenolith::material2d::SurfaceInterior::getStyle() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::material2d::SurfaceStyleData const&

# ::stappler::xenolith::material2d::SurfaceInterior::isOwnedByMaterialNode() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::material2d::SurfaceInterior::_ownerIsMaterialNode

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::material2d::SurfaceInterior::_assignedStyle

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::material2d::SurfaceStyle


# ::stappler::xenolith::material2d::SurfaceInterior::_interiorStyle

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::material2d::SurfaceStyleData
