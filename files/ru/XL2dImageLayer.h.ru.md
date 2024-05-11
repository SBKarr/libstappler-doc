Title: XL2dImageLayer.h


# XENOLITH_RENDERER_BASIC2D_XL2DIMAGELAYER_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::basic2d::ImageLayer

## BRIEF

## CONTENT

Базовые классы:
* Node


# ::stappler::xenolith::basic2d::ImageLayer::GetMaxScaleFactor()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* float

# ::stappler::xenolith::basic2d::ImageLayer::~ImageLayer()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::basic2d::ImageLayer::init()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::basic2d::ImageLayer::onContentSizeDirty()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::basic2d::ImageLayer::onTransformDirty(const stappler::geom::Mat4&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* const stappler::geom::Mat4&


# ::stappler::xenolith::basic2d::ImageLayer::setTexture(Rc<stappler::xenolith::Texture>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Rc<stappler::xenolith::Texture>&&


# ::stappler::xenolith::basic2d::ImageLayer::getTexture() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Rc<stappler::xenolith::Texture> const&

# ::stappler::xenolith::basic2d::ImageLayer::setActionCallback(Function<void ()>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Function<void ()>&&


# ::stappler::xenolith::basic2d::ImageLayer::getTexturePosition() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::geom::Vec2

# ::stappler::xenolith::basic2d::ImageLayer::setScaleDisabled(bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* bool


# ::stappler::xenolith::basic2d::ImageLayer::setImageSize(stappler::geom::Size2)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::geom::Size2


# ::stappler::xenolith::basic2d::ImageLayer::handleTap(stappler::geom::Vec2,int)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::geom::Vec2
* int

Возвращает:
* bool

# ::stappler::xenolith::basic2d::ImageLayer::handleSwipeBegin(stappler::geom::Vec2)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::geom::Vec2

Возвращает:
* bool

# ::stappler::xenolith::basic2d::ImageLayer::handleSwipe(stappler::geom::Vec2)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::geom::Vec2

Возвращает:
* bool

# ::stappler::xenolith::basic2d::ImageLayer::handleSwipeEnd(stappler::geom::Vec2)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::geom::Vec2

Возвращает:
* bool

# ::stappler::xenolith::basic2d::ImageLayer::handlePinch(stappler::geom::Vec2,float,float,bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::geom::Vec2
* float
* float
* bool

Возвращает:
* bool

# ::stappler::xenolith::basic2d::ImageLayer::getRoot() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::Node*

# ::stappler::xenolith::basic2d::ImageLayer::getCorrectRect(stappler::geom::Size2)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::geom::Size2

Возвращает:
* stappler::geom::Rect

# ::stappler::xenolith::basic2d::ImageLayer::getCorrectPosition(stappler::geom::Size2,stappler::geom::Vec2)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::geom::Size2
* stappler::geom::Vec2

Возвращает:
* stappler::geom::Vec2

# ::stappler::xenolith::basic2d::ImageLayer::getContainerSize() const

## BRIEF

## CONTENT

Доступ: protected

Возвращает:
* stappler::geom::Size2

# ::stappler::xenolith::basic2d::ImageLayer::getContainerSizeForScale(float) const

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* float

Возвращает:
* stappler::geom::Size2

# ::stappler::xenolith::basic2d::ImageLayer::_gestureListener

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::InputListener*


# ::stappler::xenolith::basic2d::ImageLayer::_root

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::Node*


# ::stappler::xenolith::basic2d::ImageLayer::_image

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::basic2d::Sprite*


# ::stappler::xenolith::basic2d::ImageLayer::_imageSize

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::geom::Size2


# ::stappler::xenolith::basic2d::ImageLayer::_prevContentSize

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::geom::Size2


# ::stappler::xenolith::basic2d::ImageLayer::_globalScale

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::geom::Vec2


# ::stappler::xenolith::basic2d::ImageLayer::_minScale

## BRIEF

## CONTENT

Доступ: protected

Тип: float


# ::stappler::xenolith::basic2d::ImageLayer::_maxScale

## BRIEF

## CONTENT

Доступ: protected

Тип: float


# ::stappler::xenolith::basic2d::ImageLayer::_scaleSource

## BRIEF

## CONTENT

Доступ: protected

Тип: float


# ::stappler::xenolith::basic2d::ImageLayer::_imageSizePredefined

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::basic2d::ImageLayer::_scaleDisabled

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::basic2d::ImageLayer::_hasPinch

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::basic2d::ImageLayer::_textureDirty

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::basic2d::ImageLayer::_actionCallback

## BRIEF

## CONTENT

Доступ: protected

Тип: Function<void ()>
