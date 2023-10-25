Title: MaterialStyleContainer.h


# XENOLITH_RENDERER_MATERIAL2D_BASE_MATERIALSTYLECONTAINER_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::material2d::StyleContainer

## BRIEF

## CONTENT

Базовые классы:
* Component


# ::stappler::xenolith::material2d::StyleContainer::onColorSchemeUpdate

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::xenolith::EventHeader


# ::stappler::xenolith::material2d::StyleContainer::ComponentFrameTag

## BRIEF

## CONTENT

Доступ: public

Тип: uint64_t


# ::stappler::xenolith::material2d::StyleContainer::PrimarySchemeTag

## BRIEF

## CONTENT

Доступ: public

Тип: uint32_t const


# ::stappler::xenolith::material2d::StyleContainer::~StyleContainer()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::material2d::StyleContainer::init()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::material2d::StyleContainer::onEnter(stappler::xenolith::Scene*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Scene*


# ::stappler::xenolith::material2d::StyleContainer::onExit()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::material2d::StyleContainer::setPrimaryScheme(stappler::xenolith::material2d::ThemeType,stappler::xenolith::material2d::CorePalette const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::material2d::ThemeType
* stappler::xenolith::material2d::CorePalette const&


# ::stappler::xenolith::material2d::StyleContainer::setPrimaryScheme(stappler::xenolith::material2d::ThemeType,stappler::xenolith::Color4F const&,bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::material2d::ThemeType
* stappler::xenolith::Color4F const&
* bool


# ::stappler::xenolith::material2d::StyleContainer::setPrimaryScheme(stappler::xenolith::material2d::ThemeType,stappler::xenolith::material2d::ColorHCT const&,bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::material2d::ThemeType
* stappler::xenolith::material2d::ColorHCT const&
* bool


# ::stappler::xenolith::material2d::StyleContainer::getPrimaryScheme() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::material2d::ColorScheme const&

# ::stappler::xenolith::material2d::StyleContainer::setScheme(uint32_t,stappler::xenolith::material2d::ThemeType,stappler::xenolith::material2d::CorePalette const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint32_t
* stappler::xenolith::material2d::ThemeType
* stappler::xenolith::material2d::CorePalette const&

Возвращает:
* stappler::xenolith::material2d::ColorScheme const*

# ::stappler::xenolith::material2d::StyleContainer::setScheme(uint32_t,stappler::xenolith::material2d::ThemeType,stappler::xenolith::Color4F const&,bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint32_t
* stappler::xenolith::material2d::ThemeType
* stappler::xenolith::Color4F const&
* bool

Возвращает:
* stappler::xenolith::material2d::ColorScheme const*

# ::stappler::xenolith::material2d::StyleContainer::setScheme(uint32_t,stappler::xenolith::material2d::ThemeType,stappler::xenolith::material2d::ColorHCT const&,bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint32_t
* stappler::xenolith::material2d::ThemeType
* stappler::xenolith::material2d::ColorHCT const&
* bool

Возвращает:
* stappler::xenolith::material2d::ColorScheme const*

# ::stappler::xenolith::material2d::StyleContainer::getScheme(uint32_t) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint32_t

Возвращает:
* stappler::xenolith::material2d::ColorScheme const*

# ::stappler::xenolith::material2d::StyleContainer::getScene() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::Scene const*

# ::stappler::xenolith::material2d::StyleContainer::_scene

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::Scene*


# ::stappler::xenolith::material2d::StyleContainer::_schemes

## BRIEF

## CONTENT

Доступ: protected

Тип: Map<uint32_t, stappler::xenolith::material2d::ColorScheme>
