Title: MaterialColorScheme.h


# XENOLITH_RENDERER_MATERIAL2D_BASE_MATERIALCOLORSCHEME_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::material2d::ThemeType

## BRIEF

## CONTENT

Значения:
* LightTheme
* DarkTheme
* Custom


# ::stappler::xenolith::material2d::ColorRole

## BRIEF

## CONTENT

Значения:
* Primary
* OnPrimary
* PrimaryContainer
* OnPrimaryContainer
* Secondary
* OnSecondary
* SecondaryContainer
* OnSecondaryContainer
* Tertiary
* OnTertiary
* TertiaryContainer
* OnTertiaryContainer
* Error
* OnError
* ErrorContainer
* OnErrorContainer
* Background
* OnBackground
* Surface
* OnSurface
* SurfaceVariant
* OnSurfaceVariant
* Outline
* OutlineVariant
* Shadow
* Scrim
* InverseSurface
* InverseOnSurface
* InversePrimary
* Undefined
* Max


# ::stappler::xenolith::material2d::TonalPalette

## BRIEF

## CONTENT


# ::stappler::xenolith::material2d::TonalPalette::TonalPalette()

## BRIEF

## CONTENT


# ::stappler::xenolith::material2d::TonalPalette::TonalPalette(const stappler::geom::Color4F&)

## BRIEF

## CONTENT

Параметры:
* const stappler::geom::Color4F&


# ::stappler::xenolith::material2d::TonalPalette::TonalPalette(geom::Cam16 const&)

## BRIEF

## CONTENT

Параметры:
* geom::Cam16 const&


# ::stappler::xenolith::material2d::TonalPalette::TonalPalette(geom::Cam16Float,geom::Cam16Float)

## BRIEF

## CONTENT

Параметры:
* geom::Cam16Float
* geom::Cam16Float


# ::stappler::xenolith::material2d::TonalPalette::get(geom::Cam16Float,float) const

## BRIEF

## CONTENT

Параметры:
* geom::Cam16Float
* float

Возвращает:
* stappler::geom::Color4F

# ::stappler::xenolith::material2d::TonalPalette::hct(geom::Cam16Float,float) const

## BRIEF

## CONTENT

Параметры:
* geom::Cam16Float
* float

Возвращает:
* stappler::geom::ColorHCT

# ::stappler::xenolith::material2d::TonalPalette::values(geom::Cam16Float,float) const

## BRIEF

## CONTENT

Параметры:
* geom::Cam16Float
* float

Возвращает:
* ColorHCT::Values

# ::stappler::xenolith::material2d::TonalPalette::hue

## BRIEF

## CONTENT

Тип: geom::Cam16Float


# ::stappler::xenolith::material2d::TonalPalette::chroma

## BRIEF

## CONTENT

Тип: geom::Cam16Float


# ::stappler::xenolith::material2d::CorePalette

## BRIEF

## CONTENT


# ::stappler::xenolith::material2d::CorePalette::CorePalette()

## BRIEF

## CONTENT


# ::stappler::xenolith::material2d::CorePalette::CorePalette(const stappler::geom::Color4F&,bool)

## BRIEF

## CONTENT

Параметры:
* const stappler::geom::Color4F&
* bool


# ::stappler::xenolith::material2d::CorePalette::CorePalette(geom::Cam16 const&,bool)

## BRIEF

## CONTENT

Параметры:
* geom::Cam16 const&
* bool


# ::stappler::xenolith::material2d::CorePalette::CorePalette(geom::Cam16Float,geom::Cam16Float,bool)

## BRIEF

## CONTENT

Параметры:
* geom::Cam16Float
* geom::Cam16Float
* bool


# ::stappler::xenolith::material2d::CorePalette::primary

## BRIEF

## CONTENT

Тип: stappler::xenolith::material2d::TonalPalette


# ::stappler::xenolith::material2d::CorePalette::secondary

## BRIEF

## CONTENT

Тип: stappler::xenolith::material2d::TonalPalette


# ::stappler::xenolith::material2d::CorePalette::tertiary

## BRIEF

## CONTENT

Тип: stappler::xenolith::material2d::TonalPalette


# ::stappler::xenolith::material2d::CorePalette::neutral

## BRIEF

## CONTENT

Тип: stappler::xenolith::material2d::TonalPalette


# ::stappler::xenolith::material2d::CorePalette::neutralVariant

## BRIEF

## CONTENT

Тип: stappler::xenolith::material2d::TonalPalette


# ::stappler::xenolith::material2d::CorePalette::error

## BRIEF

## CONTENT

Тип: stappler::xenolith::material2d::TonalPalette


# ::stappler::xenolith::material2d::ColorScheme

## BRIEF

## CONTENT


# ::stappler::xenolith::material2d::ColorScheme::getColorRoleOn(stappler::xenolith::material2d::ColorRole,stappler::xenolith::material2d::ThemeType)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::material2d::ColorRole
* stappler::xenolith::material2d::ThemeType

Возвращает:
* stappler::xenolith::material2d::ColorRole

# ::stappler::xenolith::material2d::ColorScheme::ColorScheme()

## BRIEF

## CONTENT


# ::stappler::xenolith::material2d::ColorScheme::ColorScheme(stappler::xenolith::material2d::ThemeType,stappler::xenolith::material2d::CorePalette const&)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::material2d::ThemeType
* stappler::xenolith::material2d::CorePalette const&


# ::stappler::xenolith::material2d::ColorScheme::ColorScheme(stappler::xenolith::material2d::ThemeType,const stappler::geom::Color4F&,bool)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::material2d::ThemeType
* const stappler::geom::Color4F&
* bool


# ::stappler::xenolith::material2d::ColorScheme::ColorScheme(stappler::xenolith::material2d::ThemeType,const stappler::geom::ColorHCT&,bool)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::material2d::ThemeType
* const stappler::geom::ColorHCT&
* bool


# ::stappler::xenolith::material2d::ColorScheme::set(stappler::xenolith::material2d::ThemeType,stappler::xenolith::material2d::CorePalette const&)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::material2d::ThemeType
* stappler::xenolith::material2d::CorePalette const&


# ::stappler::xenolith::material2d::ColorScheme::set(stappler::xenolith::material2d::ThemeType,const stappler::geom::Color4F&,bool)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::material2d::ThemeType
* const stappler::geom::Color4F&
* bool


# ::stappler::xenolith::material2d::ColorScheme::set(stappler::xenolith::material2d::ThemeType,const stappler::geom::ColorHCT&,bool)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::material2d::ThemeType
* const stappler::geom::ColorHCT&
* bool


# ::stappler::xenolith::material2d::ColorScheme::get(stappler::xenolith::material2d::ColorRole) const

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::material2d::ColorRole

Возвращает:
* stappler::geom::Color4F

# ::stappler::xenolith::material2d::ColorScheme::on(stappler::xenolith::material2d::ColorRole) const

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::material2d::ColorRole

Возвращает:
* stappler::geom::Color4F

# ::stappler::xenolith::material2d::ColorScheme::hct(stappler::xenolith::material2d::ColorRole,float) const

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::material2d::ColorRole
* float

Возвращает:
* stappler::geom::ColorHCT

# ::stappler::xenolith::material2d::ColorScheme::values(stappler::xenolith::material2d::ColorRole,float) const

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::material2d::ColorRole
* float

Возвращает:
* ColorHCT::Values

# ::stappler::xenolith::material2d::ColorScheme::type

## BRIEF

## CONTENT

Тип: stappler::xenolith::material2d::ThemeType


# ::stappler::xenolith::material2d::ColorScheme::colors

## BRIEF

## CONTENT

Тип: std::array<Color4F, toInt(ColorRole::Max)>


# ::stappler::xenolith::material2d::ColorScheme::palette

## BRIEF

## CONTENT

Тип: stappler::xenolith::material2d::CorePalette
