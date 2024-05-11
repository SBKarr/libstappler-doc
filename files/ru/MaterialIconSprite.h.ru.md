Title: MaterialIconSprite.h


# XENOLITH_RENDERER_MATERIAL2D_BASE_MATERIALICONSPRITE_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::material2d::IconSprite

## BRIEF

## CONTENT

Базовые классы:
* VectorSprite


# ::stappler::xenolith::material2d::IconSprite::~IconSprite()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::material2d::IconSprite::init(stappler::xenolith::IconName)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::IconName

Возвращает:
* bool

# ::stappler::xenolith::material2d::IconSprite::getIconName() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::IconName

# ::stappler::xenolith::material2d::IconSprite::setIconName(stappler::xenolith::IconName)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::IconName


# ::stappler::xenolith::material2d::IconSprite::setProgress(float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float


# ::stappler::xenolith::material2d::IconSprite::getProgress() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* float

# ::stappler::xenolith::material2d::IconSprite::setBlendColor(stappler::xenolith::material2d::ColorRole,float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::material2d::ColorRole
* float


# ::stappler::xenolith::material2d::IconSprite::setBlendColor(const stappler::geom::Color4F&,float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* const stappler::geom::Color4F&
* float


# ::stappler::xenolith::material2d::IconSprite::getBlendColorRule() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::material2d::ColorRole

# ::stappler::xenolith::material2d::IconSprite::getBlendColor() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* const stappler::geom::Color4F&

# ::stappler::xenolith::material2d::IconSprite::getBlendColorValue() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* float

# ::stappler::xenolith::material2d::IconSprite::setPreserveOpacity(bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* bool


# ::stappler::xenolith::material2d::IconSprite::isPreserveOpacity() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::material2d::IconSprite::visitDraw(stappler::xenolith::FrameInfo&,stappler::xenolith::NodeFlags)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::FrameInfo&
* stappler::xenolith::NodeFlags

Возвращает:
* bool

# ::stappler::xenolith::material2d::IconSprite::animate()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::material2d::IconSprite::animate(float,float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float
* float


# ::stappler::xenolith::material2d::IconSprite::updateIcon()

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::material2d::IconSprite::_preserveOpacity

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::material2d::IconSprite::_blendValue

## BRIEF

## CONTENT

Доступ: protected

Тип: float


# ::stappler::xenolith::material2d::IconSprite::_blendColor

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::geom::Color4F


# ::stappler::xenolith::material2d::IconSprite::_blendColorRule

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::material2d::ColorRole


# ::stappler::xenolith::material2d::IconSprite::_iconName

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::IconName


# ::stappler::xenolith::material2d::IconSprite::_progress

## BRIEF

## CONTENT

Доступ: protected

Тип: float
