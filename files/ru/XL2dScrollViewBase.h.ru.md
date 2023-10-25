Title: XL2dScrollViewBase.h


# XENOLITH_RENDERER_GUI2D_XL2DSCROLLVIEWBASE_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::gui2d::ScrollViewBase

## BRIEF

## CONTENT

Базовые классы:
* DynamicStateNode


# ::stappler::xenolith::gui2d::ScrollViewBase::ScrollFilterCallback

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::gui2d::ScrollViewBase::ScrollCallback

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::gui2d::ScrollViewBase::OverscrollCallback

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::gui2d::ScrollViewBase::Layout

## BRIEF

## CONTENT

Доступ: public

Значения:
* Vertical
* Horizontal


# ::stappler::xenolith::gui2d::ScrollViewBase::~ScrollViewBase()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::gui2d::ScrollViewBase::init(stappler::xenolith::gui2d::ScrollViewBase::Layout)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::gui2d::ScrollViewBase::Layout

Возвращает:
* bool

# ::stappler::xenolith::gui2d::ScrollViewBase::setLayout(stappler::xenolith::gui2d::ScrollViewBase::Layout)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::gui2d::ScrollViewBase::Layout


# ::stappler::xenolith::gui2d::ScrollViewBase::visitDraw(stappler::xenolith::FrameInfo&,stappler::xenolith::NodeFlags)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::FrameInfo&
* stappler::xenolith::NodeFlags

Возвращает:
* bool

# ::stappler::xenolith::gui2d::ScrollViewBase::onEnter(stappler::xenolith::Scene*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Scene*


# ::stappler::xenolith::gui2d::ScrollViewBase::isVertical() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::gui2d::ScrollViewBase::isHorizontal() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::gui2d::ScrollViewBase::getLayout() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::gui2d::ScrollViewBase::Layout

# ::stappler::xenolith::gui2d::ScrollViewBase::onContentSizeDirty()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::gui2d::ScrollViewBase::onTransformDirty(stappler::xenolith::Mat4 const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Mat4 const&


# ::stappler::xenolith::gui2d::ScrollViewBase::setEnabled(bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* bool


# ::stappler::xenolith::gui2d::ScrollViewBase::isEnabled() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::gui2d::ScrollViewBase::isInMotion() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::gui2d::ScrollViewBase::isMoved() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::gui2d::ScrollViewBase::setScrollCallback(stappler::xenolith::gui2d::ScrollViewBase::ScrollCallback const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::gui2d::ScrollViewBase::ScrollCallback const&


# ::stappler::xenolith::gui2d::ScrollViewBase::getScrollCallback() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* ScrollCallback&

# ::stappler::xenolith::gui2d::ScrollViewBase::setOverscrollCallback(stappler::xenolith::gui2d::ScrollViewBase::OverscrollCallback const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::gui2d::ScrollViewBase::OverscrollCallback const&


# ::stappler::xenolith::gui2d::ScrollViewBase::getOverscrollCallback() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* OverscrollCallback&

# ::stappler::xenolith::gui2d::ScrollViewBase::getRoot() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::Node*

# ::stappler::xenolith::gui2d::ScrollViewBase::getInputListener() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::InputListener*

# ::stappler::xenolith::gui2d::ScrollViewBase::addComponentItem(stappler::xenolith::Component*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Component*

Возвращает:
* bool

# ::stappler::xenolith::gui2d::ScrollViewBase::setController<typename>(Rc<T> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename T

Параметры:
* Rc<T> const&

Возвращает:
* T*

# ::stappler::xenolith::gui2d::ScrollViewBase::setController(stappler::xenolith::gui2d::ScrollController*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::gui2d::ScrollController*


# ::stappler::xenolith::gui2d::ScrollViewBase::getController()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::gui2d::ScrollController*

# ::stappler::xenolith::gui2d::ScrollViewBase::setPadding(stappler::xenolith::Padding const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Padding const&


# ::stappler::xenolith::gui2d::ScrollViewBase::getPadding() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::Padding const&

# ::stappler::xenolith::gui2d::ScrollViewBase::setSpaceLimit(float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float


# ::stappler::xenolith::gui2d::ScrollViewBase::getSpaceLimit() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* float

# ::stappler::xenolith::gui2d::ScrollViewBase::getScrollableAreaOffset() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* float

# ::stappler::xenolith::gui2d::ScrollViewBase::getScrollableAreaSize() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* float

# ::stappler::xenolith::gui2d::ScrollViewBase::getPositionForNode(float) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float

Возвращает:
* stappler::xenolith::Vec2

# ::stappler::xenolith::gui2d::ScrollViewBase::getContentSizeForNode(float) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float

Возвращает:
* stappler::xenolith::Size2

# ::stappler::xenolith::gui2d::ScrollViewBase::getAnchorPointForNode() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::Vec2

# ::stappler::xenolith::gui2d::ScrollViewBase::getNodeScrollSize(stappler::xenolith::Size2) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Size2

Возвращает:
* float

# ::stappler::xenolith::gui2d::ScrollViewBase::getNodeScrollPosition(stappler::xenolith::Vec2) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Vec2

Возвращает:
* float

# ::stappler::xenolith::gui2d::ScrollViewBase::addScrollNode(stappler::xenolith::Node*,stappler::xenolith::Vec2,stappler::xenolith::Size2,stappler::xenolith::ZOrder,stappler::StringView)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Node*
* stappler::xenolith::Vec2
* stappler::xenolith::Size2
* stappler::xenolith::ZOrder
* stappler::StringView

Возвращает:
* bool

# ::stappler::xenolith::gui2d::ScrollViewBase::updateScrollNode(stappler::xenolith::Node*,stappler::xenolith::Vec2,stappler::xenolith::Size2,stappler::xenolith::ZOrder,stappler::StringView)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Node*
* stappler::xenolith::Vec2
* stappler::xenolith::Size2
* stappler::xenolith::ZOrder
* stappler::StringView


# ::stappler::xenolith::gui2d::ScrollViewBase::removeScrollNode(stappler::xenolith::Node*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Node*

Возвращает:
* bool

# ::stappler::xenolith::gui2d::ScrollViewBase::getDistanceFromStart() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* float

# ::stappler::xenolith::gui2d::ScrollViewBase::setScrollMaxVelocity(float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float


# ::stappler::xenolith::gui2d::ScrollViewBase::getScrollMaxVelocity() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* float

# ::stappler::xenolith::gui2d::ScrollViewBase::getFrontNode() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::Node*

# ::stappler::xenolith::gui2d::ScrollViewBase::getBackNode() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::Node*

# ::stappler::xenolith::gui2d::ScrollViewBase::convertFromScrollableSpace(stappler::xenolith::Vec2 const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Vec2 const&

Возвращает:
* stappler::xenolith::Vec2

# ::stappler::xenolith::gui2d::ScrollViewBase::convertToScrollableSpace(stappler::xenolith::Vec2 const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Vec2 const&

Возвращает:
* stappler::xenolith::Vec2

# ::stappler::xenolith::gui2d::ScrollViewBase::convertFromScrollableSpace(stappler::xenolith::Node*,stappler::xenolith::Vec2)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Node*
* stappler::xenolith::Vec2

Возвращает:
* stappler::xenolith::Vec2

# ::stappler::xenolith::gui2d::ScrollViewBase::convertToScrollableSpace(stappler::xenolith::Node*,stappler::xenolith::Vec2)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Node*
* stappler::xenolith::Vec2

Возвращает:
* stappler::xenolith::Vec2

# ::stappler::xenolith::gui2d::ScrollViewBase::getScrollMinPosition() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* float

# ::stappler::xenolith::gui2d::ScrollViewBase::getScrollMaxPosition() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* float

# ::stappler::xenolith::gui2d::ScrollViewBase::getScrollLength() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* float

# ::stappler::xenolith::gui2d::ScrollViewBase::getScrollSize() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* float

# ::stappler::xenolith::gui2d::ScrollViewBase::setScrollRelativePosition(float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float


# ::stappler::xenolith::gui2d::ScrollViewBase::getScrollRelativePosition() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* float

# ::stappler::xenolith::gui2d::ScrollViewBase::getScrollRelativePosition(float) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float

Возвращает:
* float

# ::stappler::xenolith::gui2d::ScrollViewBase::setScrollPosition(float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float


# ::stappler::xenolith::gui2d::ScrollViewBase::getScrollPosition() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* float

# ::stappler::xenolith::gui2d::ScrollViewBase::getPointForScrollPosition(float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float

Возвращает:
* stappler::xenolith::Vec2

# ::stappler::xenolith::gui2d::ScrollViewBase::setScrollDirty(bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* bool


# ::stappler::xenolith::gui2d::ScrollViewBase::updateScrollBounds()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::gui2d::ScrollViewBase::onDelta(float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float


# ::stappler::xenolith::gui2d::ScrollViewBase::onOverscrollPerformed(float,float,float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float
* float
* float


# ::stappler::xenolith::gui2d::ScrollViewBase::onSwipeEventBegin(uint32_t,stappler::xenolith::Vec2 const&,stappler::xenolith::Vec2 const&,stappler::xenolith::Vec2 const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint32_t
* stappler::xenolith::Vec2 const&
* stappler::xenolith::Vec2 const&
* stappler::xenolith::Vec2 const&

Возвращает:
* bool

# ::stappler::xenolith::gui2d::ScrollViewBase::onSwipeEvent(uint32_t,stappler::xenolith::Vec2 const&,stappler::xenolith::Vec2 const&,stappler::xenolith::Vec2 const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint32_t
* stappler::xenolith::Vec2 const&
* stappler::xenolith::Vec2 const&
* stappler::xenolith::Vec2 const&

Возвращает:
* bool

# ::stappler::xenolith::gui2d::ScrollViewBase::onSwipeEventEnd(uint32_t,stappler::xenolith::Vec2 const&,stappler::xenolith::Vec2 const&,stappler::xenolith::Vec2 const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint32_t
* stappler::xenolith::Vec2 const&
* stappler::xenolith::Vec2 const&
* stappler::xenolith::Vec2 const&

Возвращает:
* bool

# ::stappler::xenolith::gui2d::ScrollViewBase::onSwipeBegin()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::gui2d::ScrollViewBase::onSwipe(float,float,bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float
* float
* bool

Возвращает:
* bool

# ::stappler::xenolith::gui2d::ScrollViewBase::onAnimationFinished()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::gui2d::ScrollViewBase::onSwipeFinalizeAction(float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float

Возвращает:
* Rc<stappler::xenolith::ActionInterval>

# ::stappler::xenolith::gui2d::ScrollViewBase::onScroll(float,bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float
* bool


# ::stappler::xenolith::gui2d::ScrollViewBase::onOverscroll(float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float


# ::stappler::xenolith::gui2d::ScrollViewBase::onPosition()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::gui2d::ScrollViewBase::doSetScrollPosition(float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float


# ::stappler::xenolith::gui2d::ScrollViewBase::fixPosition()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::gui2d::ScrollViewBase::onPressBegin(stappler::xenolith::Vec2 const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Vec2 const&

Возвращает:
* bool

# ::stappler::xenolith::gui2d::ScrollViewBase::onLongPress(stappler::xenolith::Vec2 const&,stappler::TimeInterval const&,int)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Vec2 const&
* stappler::TimeInterval const&
* int

Возвращает:
* bool

# ::stappler::xenolith::gui2d::ScrollViewBase::onPressEnd(stappler::xenolith::Vec2 const&,stappler::TimeInterval const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Vec2 const&
* stappler::TimeInterval const&

Возвращает:
* bool

# ::stappler::xenolith::gui2d::ScrollViewBase::onPressCancel(stappler::xenolith::Vec2 const&,stappler::TimeInterval const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Vec2 const&
* stappler::TimeInterval const&

Возвращает:
* bool

# ::stappler::xenolith::gui2d::ScrollViewBase::onTap(int,stappler::xenolith::Vec2 const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* int
* stappler::xenolith::Vec2 const&


# ::stappler::xenolith::gui2d::ScrollViewBase::_layout

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::gui2d::ScrollViewBase::Layout


# ::stappler::xenolith::gui2d::ScrollViewBase::Movement

## BRIEF

## CONTENT

Доступ: protected

Значения:
* None
* Manual
* Auto
* Overscroll


# ::stappler::xenolith::gui2d::ScrollViewBase::_movement

## BRIEF

## CONTENT

Доступ: protected

Тип: enum Movement


# ::stappler::xenolith::gui2d::ScrollViewBase::_scrollPosition

## BRIEF

## CONTENT

Доступ: protected

Тип: float


# ::stappler::xenolith::gui2d::ScrollViewBase::_scrollSize

## BRIEF

## CONTENT

Доступ: protected

Тип: float


# ::stappler::xenolith::gui2d::ScrollViewBase::_savedRelativePosition

## BRIEF

## CONTENT

Доступ: protected

Тип: float


# ::stappler::xenolith::gui2d::ScrollViewBase::_scrollMin

## BRIEF

## CONTENT

Доступ: protected

Тип: float


# ::stappler::xenolith::gui2d::ScrollViewBase::_scrollMax

## BRIEF

## CONTENT

Доступ: protected

Тип: float


# ::stappler::xenolith::gui2d::ScrollViewBase::_maxVelocity

## BRIEF

## CONTENT

Доступ: protected

Тип: float


# ::stappler::xenolith::gui2d::ScrollViewBase::_scrollSpaceLimit

## BRIEF

## CONTENT

Доступ: protected

Тип: float


# ::stappler::xenolith::gui2d::ScrollViewBase::_globalScale

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::Vec2


# ::stappler::xenolith::gui2d::ScrollViewBase::_root

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::Node*


# ::stappler::xenolith::gui2d::ScrollViewBase::_scrollFilter

## BRIEF

## CONTENT

Доступ: protected

Тип: ScrollFilterCallback


# ::stappler::xenolith::gui2d::ScrollViewBase::_scrollCallback

## BRIEF

## CONTENT

Доступ: protected

Тип: ScrollCallback


# ::stappler::xenolith::gui2d::ScrollViewBase::_overscrollCallback

## BRIEF

## CONTENT

Доступ: protected

Тип: OverscrollCallback


# ::stappler::xenolith::gui2d::ScrollViewBase::_inputListener

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::InputListener*


# ::stappler::xenolith::gui2d::ScrollViewBase::_controller

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::gui2d::ScrollController*


# ::stappler::xenolith::gui2d::ScrollViewBase::_animationAction

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::xenolith::ActionInterval>


# ::stappler::xenolith::gui2d::ScrollViewBase::_movementAction

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::xenolith::gui2d::ActionAcceleratedMove>


# ::stappler::xenolith::gui2d::ScrollViewBase::_bounce

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::gui2d::ScrollViewBase::_scrollDirty

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::gui2d::ScrollViewBase::_animationDirty

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::gui2d::ScrollViewBase::_paddingGlobal

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::Padding
