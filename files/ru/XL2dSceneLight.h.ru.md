Title: XL2dSceneLight.h


# XENOLITH_RENDERER_BASIC2D_XL2DSCENELIGHT_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::basic2d::SceneLightType

## BRIEF

## CONTENT

Значения:
* Ambient
* Direct


# ::stappler::xenolith::basic2d::SceneLight

## BRIEF

## CONTENT

Базовые классы:
* Ref


# ::stappler::xenolith::basic2d::SceneLight::~SceneLight()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::basic2d::SceneLight::init(stappler::xenolith::basic2d::SceneLightType,const stappler::geom::Vec4&,const stappler::geom::Color4F&,const stappler::geom::Vec4&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::basic2d::SceneLightType
* const stappler::geom::Vec4&
* const stappler::geom::Color4F&
* const stappler::geom::Vec4&

Возвращает:
* bool

# ::stappler::xenolith::basic2d::SceneLight::init(stappler::xenolith::basic2d::SceneLightType,const stappler::geom::Vec2&,float,const stappler::geom::Color4F&,const stappler::geom::Vec4&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::basic2d::SceneLightType
* const stappler::geom::Vec2&
* float
* const stappler::geom::Color4F&
* const stappler::geom::Vec4&

Возвращает:
* bool

# ::stappler::xenolith::basic2d::SceneLight::onEnter(stappler::xenolith::Scene*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Scene*


# ::stappler::xenolith::basic2d::SceneLight::onExit()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::basic2d::SceneLight::getType() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::basic2d::SceneLightType

# ::stappler::xenolith::basic2d::SceneLight::setNormal(const stappler::geom::Vec4&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* const stappler::geom::Vec4&


# ::stappler::xenolith::basic2d::SceneLight::getNormal() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* const stappler::geom::Vec4&

# ::stappler::xenolith::basic2d::SceneLight::setColor(const stappler::geom::Color4F&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* const stappler::geom::Color4F&


# ::stappler::xenolith::basic2d::SceneLight::getColor() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* const stappler::geom::Color4F&

# ::stappler::xenolith::basic2d::SceneLight::setData(const stappler::geom::Vec4&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* const stappler::geom::Vec4&


# ::stappler::xenolith::basic2d::SceneLight::getData() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* const stappler::geom::Vec4&

# ::stappler::xenolith::basic2d::SceneLight::getName() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::StringView

# ::stappler::xenolith::basic2d::SceneLight::getTag() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint64_t

# ::stappler::xenolith::basic2d::SceneLight::getScene() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::Scene*

# ::stappler::xenolith::basic2d::SceneLight::isRunning() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::basic2d::SceneLight::setSoftShadow(bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* bool


# ::stappler::xenolith::basic2d::SceneLight::isSoftShadow() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::basic2d::SceneLight::setName(stappler::StringView)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView


# ::stappler::xenolith::basic2d::SceneLight::setTag(uint64_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint64_t


# ::stappler::xenolith::basic2d::SceneLight::_type

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::basic2d::SceneLightType


# ::stappler::xenolith::basic2d::SceneLight::_normal

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::geom::Vec4


# ::stappler::xenolith::basic2d::SceneLight::_color

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::geom::Color4F


# ::stappler::xenolith::basic2d::SceneLight::_data

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::geom::Vec4


# ::stappler::xenolith::basic2d::SceneLight::_softShadow

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::basic2d::SceneLight::_enable2dNormal

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::basic2d::SceneLight::_2dNormal

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::geom::Vec2


# ::stappler::xenolith::basic2d::SceneLight::_k

## BRIEF

## CONTENT

Доступ: protected

Тип: float


# ::stappler::xenolith::basic2d::SceneLight::_name

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::mem_std::String


# ::stappler::xenolith::basic2d::SceneLight::_tag

## BRIEF

## CONTENT

Доступ: protected

Тип: uint64_t


# ::stappler::xenolith::basic2d::SceneLight::_running

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::basic2d::SceneLight::_scene

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::Scene*
