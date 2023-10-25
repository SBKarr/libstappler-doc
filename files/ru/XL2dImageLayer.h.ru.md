Title: XL2dImageLayer.h


# XENOLITH_RENDERER_GUI2D_XL2DIMAGELAYER_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::gui2d::ImageLayer

## BRIEF

## CONTENT

Базовые классы:
* Node


# ::stappler::xenolith::gui2d::ImageLayer::GetMaxScaleFactor()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* float

# ::stappler::xenolith::gui2d::ImageLayer::~ImageLayer()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::gui2d::ImageLayer::init()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::gui2d::ImageLayer::onContentSizeDirty()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::gui2d::ImageLayer::onTransformDirty(stappler::xenolith::Mat4 const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Mat4 const&


# ::stappler::xenolith::gui2d::ImageLayer::setTexture(Rc<stappler::xenolith::Texture>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Rc<stappler::xenolith::Texture>&&


# ::stappler::xenolith::gui2d::ImageLayer::getTexture() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Rc<stappler::xenolith::Texture> const&

# ::stappler::xenolith::gui2d::ImageLayer::setActionCallback(Function<void ()>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Function<void ()>&&


# ::stappler::xenolith::gui2d::ImageLayer::getTexturePosition() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::Vec2

# ::stappler::xenolith::gui2d::ImageLayer::setScaleDisabled(bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* bool


# ::stappler::xenolith::gui2d::ImageLayer::handleTap(stappler::xenolith::Vec2,int)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Vec2
* int

Возвращает:
* bool

# ::stappler::xenolith::gui2d::ImageLayer::handleSwipeBegin(stappler::xenolith::Vec2)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Vec2

Возвращает:
* bool

# ::stappler::xenolith::gui2d::ImageLayer::handleSwipe(stappler::xenolith::Vec2)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Vec2

Возвращает:
* bool

# ::stappler::xenolith::gui2d::ImageLayer::handleSwipeEnd(stappler::xenolith::Vec2)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Vec2

Возвращает:
* bool

# ::stappler::xenolith::gui2d::ImageLayer::handlePinch(stappler::xenolith::Vec2,float,float,bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Vec2
* float
* float
* bool

Возвращает:
* bool

# ::stappler::xenolith::gui2d::ImageLayer::getCorrectRect(stappler::xenolith::Size2)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::Size2

Возвращает:
* stappler::xenolith::Rect

# ::stappler::xenolith::gui2d::ImageLayer::getCorrectPosition(stappler::xenolith::Size2,stappler::xenolith::Vec2)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::Size2
* stappler::xenolith::Vec2

Возвращает:
* stappler::xenolith::Vec2

# ::stappler::xenolith::gui2d::ImageLayer::getContainerSize() const

## BRIEF

## CONTENT

Доступ: protected

Возвращает:
* stappler::xenolith::Size2

# ::stappler::xenolith::gui2d::ImageLayer::getContainerSizeForScale(float) const

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* float

Возвращает:
* stappler::xenolith::Size2

# ::stappler::xenolith::gui2d::ImageLayer::_gestureListener

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::InputListener*


# ::stappler::xenolith::gui2d::ImageLayer::_root

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::Node*


# ::stappler::xenolith::gui2d::ImageLayer::_image

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::basic2d::Sprite*


# ::stappler::xenolith::gui2d::ImageLayer::_prevContentSize

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::Size2


# ::stappler::xenolith::gui2d::ImageLayer::_globalScale

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::Vec2


# ::stappler::xenolith::gui2d::ImageLayer::_minScale

## BRIEF

## CONTENT

Доступ: protected

Тип: float


# ::stappler::xenolith::gui2d::ImageLayer::_maxScale

## BRIEF

## CONTENT

Доступ: protected

Тип: float


# ::stappler::xenolith::gui2d::ImageLayer::_scaleSource

## BRIEF

## CONTENT

Доступ: protected

Тип: float


# ::stappler::xenolith::gui2d::ImageLayer::_scaleDisabled

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::gui2d::ImageLayer::_hasPinch

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::gui2d::ImageLayer::_textureDirty

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::gui2d::ImageLayer::_actionCallback

## BRIEF

## CONTENT

Доступ: protected

Тип: Function<void ()>
