Title: MaterialSurfaceStyle.h


# XENOLITH_RENDERER_MATERIAL2D_BASE_MATERIALSURFACESTYLE_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::material2d::Elevation

## BRIEF

## CONTENT

Значения:
* Level0
* Level1
* Level2
* Level3
* Level4
* Level5


# ::stappler::xenolith::material2d::ShapeFamily

## BRIEF

## CONTENT

Значения:
* RoundedCorners
* CutCorners


# ::stappler::xenolith::material2d::ShapeStyle

## BRIEF

## CONTENT

Значения:
* None
* ExtraSmall
* Small
* Medium
* Large
* ExtraLarge
* Full


# ::stappler::xenolith::material2d::NodeStyle

## BRIEF

## CONTENT

Значения:
* SurfaceTonal
* SurfaceTonalElevated
* Elevated
* Filled
* FilledElevated
* FilledTonal
* FilledTonalElevated
* Outlined
* Text


# ::stappler::xenolith::material2d::ActivityState

## BRIEF

## CONTENT

Значения:
* Enabled
* Disabled
* Hovered
* Focused
* Pressed


# ::stappler::xenolith::material2d::SurfaceStyle

## BRIEF

## CONTENT


# ::stappler::xenolith::material2d::SurfaceStyle::Background

## BRIEF

## CONTENT

Тип: stappler::xenolith::material2d::SurfaceStyle


# ::stappler::xenolith::material2d::SurfaceStyle::PrimarySchemeTag

## BRIEF

## CONTENT

Тип: uint32_t const


# ::stappler::xenolith::material2d::SurfaceStyle::SurfaceStyle()

## BRIEF

## CONTENT


# ::stappler::xenolith::material2d::SurfaceStyle::SurfaceStyle<typename>(Args &&...)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Args

Параметры:
* Args &&...


# ::stappler::xenolith::material2d::SurfaceStyle::setup(stappler::xenolith::material2d::SurfaceStyle const&)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::material2d::SurfaceStyle const&


# ::stappler::xenolith::material2d::SurfaceStyle::setup(uint32_t)

## BRIEF

## CONTENT

Параметры:
* uint32_t


# ::stappler::xenolith::material2d::SurfaceStyle::setup(stappler::xenolith::material2d::ColorRole)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::material2d::ColorRole


# ::stappler::xenolith::material2d::SurfaceStyle::setup(stappler::xenolith::material2d::Elevation)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::material2d::Elevation


# ::stappler::xenolith::material2d::SurfaceStyle::setup(stappler::xenolith::material2d::ShapeFamily)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::material2d::ShapeFamily


# ::stappler::xenolith::material2d::SurfaceStyle::setup(stappler::xenolith::material2d::ShapeStyle)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::material2d::ShapeStyle


# ::stappler::xenolith::material2d::SurfaceStyle::setup(stappler::xenolith::material2d::NodeStyle)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::material2d::NodeStyle


# ::stappler::xenolith::material2d::SurfaceStyle::setup(stappler::xenolith::material2d::ActivityState)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::material2d::ActivityState


# ::stappler::xenolith::material2d::SurfaceStyle::define<typename>(T&&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename T

Параметры:
* T&&


# ::stappler::xenolith::material2d::SurfaceStyle::define<typename,typename>(T&&,Args &&...)

## BRIEF

## CONTENT

Параметры шаблона:
* typename T
* typename Args

Параметры:
* T&&
* Args &&...


# ::stappler::xenolith::material2d::SurfaceStyle::apply(stappler::xenolith::material2d::SurfaceStyleData&,stappler::xenolith::Size2 const&,stappler::xenolith::material2d::StyleContainer const*,stappler::xenolith::material2d::SurfaceInterior const*)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::material2d::SurfaceStyleData&
* stappler::xenolith::Size2 const&
* stappler::xenolith::material2d::StyleContainer const*
* stappler::xenolith::material2d::SurfaceInterior const*

Возвращает:
* bool

# ::stappler::xenolith::material2d::SurfaceStyle::operator==(stappler::xenolith::material2d::SurfaceStyle const&) const

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::material2d::SurfaceStyle const&

Возвращает:
* bool

# ::stappler::xenolith::material2d::SurfaceStyle::operator!=(stappler::xenolith::material2d::SurfaceStyle const&) const

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::material2d::SurfaceStyle const&

Возвращает:
* bool

# ::stappler::xenolith::material2d::SurfaceStyle::schemeTag

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::xenolith::material2d::SurfaceStyle::colorRole

## BRIEF

## CONTENT

Тип: stappler::xenolith::material2d::ColorRole


# ::stappler::xenolith::material2d::SurfaceStyle::elevation

## BRIEF

## CONTENT

Тип: stappler::xenolith::material2d::Elevation


# ::stappler::xenolith::material2d::SurfaceStyle::shapeFamily

## BRIEF

## CONTENT

Тип: stappler::xenolith::material2d::ShapeFamily


# ::stappler::xenolith::material2d::SurfaceStyle::shapeStyle

## BRIEF

## CONTENT

Тип: stappler::xenolith::material2d::ShapeStyle


# ::stappler::xenolith::material2d::SurfaceStyle::nodeStyle

## BRIEF

## CONTENT

Тип: stappler::xenolith::material2d::NodeStyle


# ::stappler::xenolith::material2d::SurfaceStyle::activityState

## BRIEF

## CONTENT

Тип: stappler::xenolith::material2d::ActivityState


# ::stappler::xenolith::material2d::SurfaceStyleData

## BRIEF

## CONTENT


# ::stappler::xenolith::material2d::SurfaceStyleData::progress(stappler::xenolith::material2d::SurfaceStyleData const&,stappler::xenolith::material2d::SurfaceStyleData const&,float)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::material2d::SurfaceStyleData const&
* stappler::xenolith::material2d::SurfaceStyleData const&
* float

Возвращает:
* stappler::xenolith::material2d::SurfaceStyleData

# ::stappler::xenolith::material2d::SurfaceStyleData::schemeTag

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::xenolith::material2d::SurfaceStyleData::shapeFamily

## BRIEF

## CONTENT

Тип: stappler::xenolith::material2d::ShapeFamily


# ::stappler::xenolith::material2d::SurfaceStyleData::themeType

## BRIEF

## CONTENT

Тип: stappler::xenolith::material2d::ThemeType


# ::stappler::xenolith::material2d::SurfaceStyleData::colorScheme

## BRIEF

## CONTENT

Тип: stappler::xenolith::Color4F


# ::stappler::xenolith::material2d::SurfaceStyleData::colorElevation

## BRIEF

## CONTENT

Тип: stappler::xenolith::Color4F


# ::stappler::xenolith::material2d::SurfaceStyleData::colorHCT

## BRIEF

## CONTENT

Тип: stappler::xenolith::material2d::ColorHCT


# ::stappler::xenolith::material2d::SurfaceStyleData::colorBackground

## BRIEF

## CONTENT

Тип: stappler::xenolith::material2d::ColorHCT


# ::stappler::xenolith::material2d::SurfaceStyleData::colorOn

## BRIEF

## CONTENT

Тип: stappler::xenolith::material2d::ColorHCT


# ::stappler::xenolith::material2d::SurfaceStyleData::cornerRadius

## BRIEF

## CONTENT

Тип: float


# ::stappler::xenolith::material2d::SurfaceStyleData::elevationValue

## BRIEF

## CONTENT

Тип: float


# ::stappler::xenolith::material2d::SurfaceStyleData::shadowValue

## BRIEF

## CONTENT

Тип: float


# ::stappler::xenolith::material2d::SurfaceStyleData::outlineValue

## BRIEF

## CONTENT

Тип: float


# ::stappler::xenolith::material2d::SurfaceStyleData::operator==(stappler::xenolith::material2d::SurfaceStyleData const&) const

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::material2d::SurfaceStyleData const&

Возвращает:
* bool

# ::stappler::xenolith::material2d::SurfaceStyleData::operator!=(stappler::xenolith::material2d::SurfaceStyleData const&) const

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::material2d::SurfaceStyleData const&

Возвращает:
* bool

# ::stappler::progress(xenolith::material2d::SurfaceStyleData const&,xenolith::material2d::SurfaceStyleData const&,float)

## BRIEF

## CONTENT

Параметры:
* xenolith::material2d::SurfaceStyleData const&
* xenolith::material2d::SurfaceStyleData const&
* float

Возвращает:
* auto