Title: XL2dScrollViewBase.h


# XENOLITH_RENDERER_BASIC2D_XL2DSCROLLVIEWBASE_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::basic2d::ScrollViewBase

## BRIEF

## CONTENT

Базовые классы:
* DynamicStateNode


# ::stappler::xenolith::basic2d::ScrollViewBase::ScrollFilterCallback

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::basic2d::ScrollViewBase::ScrollCallback

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::basic2d::ScrollViewBase::OverscrollCallback

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::basic2d::ScrollViewBase::Layout

## BRIEF

## CONTENT

Доступ: public

Значения:
* Vertical
* Horizontal


# ::stappler::xenolith::basic2d::ScrollViewBase::~ScrollViewBase()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::basic2d::ScrollViewBase::init(stappler::xenolith::basic2d::ScrollViewBase::Layout)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::basic2d::ScrollViewBase::Layout

Возвращает:
* bool

# ::stappler::xenolith::basic2d::ScrollViewBase::setLayout(stappler::xenolith::basic2d::ScrollViewBase::Layout)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::basic2d::ScrollViewBase::Layout


# ::stappler::xenolith::basic2d::ScrollViewBase::visitDraw(stappler::xenolith::FrameInfo&,stappler::xenolith::NodeFlags)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::FrameInfo&
* stappler::xenolith::NodeFlags

Возвращает:
* bool

# ::stappler::xenolith::basic2d::ScrollViewBase::onEnter(stappler::xenolith::Scene*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Scene*


# ::stappler::xenolith::basic2d::ScrollViewBase::isVertical() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::basic2d::ScrollViewBase::isHorizontal() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::basic2d::ScrollViewBase::getLayout() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::basic2d::ScrollViewBase::Layout

# ::stappler::xenolith::basic2d::ScrollViewBase::onContentSizeDirty()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::basic2d::ScrollViewBase::onTransformDirty(const stappler::geom::Mat4&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* const stappler::geom::Mat4&


# ::stappler::xenolith::basic2d::ScrollViewBase::setEnabled(bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* bool


# ::stappler::xenolith::basic2d::ScrollViewBase::isEnabled() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::basic2d::ScrollViewBase::isInMotion() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::basic2d::ScrollViewBase::isMoved() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::basic2d::ScrollViewBase::setScrollCallback(stappler::xenolith::basic2d::ScrollViewBase::ScrollCallback const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::basic2d::ScrollViewBase::ScrollCallback const&


# ::stappler::xenolith::basic2d::ScrollViewBase::getScrollCallback() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* ScrollCallback&

# ::stappler::xenolith::basic2d::ScrollViewBase::setOverscrollCallback(stappler::xenolith::basic2d::ScrollViewBase::OverscrollCallback const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::basic2d::ScrollViewBase::OverscrollCallback const&


# ::stappler::xenolith::basic2d::ScrollViewBase::getOverscrollCallback() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* OverscrollCallback&

# ::stappler::xenolith::basic2d::ScrollViewBase::getRoot() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::Node*

# ::stappler::xenolith::basic2d::ScrollViewBase::getInputListener() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::InputListener*

# ::stappler::xenolith::basic2d::ScrollViewBase::addComponentItem(stappler::xenolith::Component*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Component*

Возвращает:
* bool

# ::stappler::xenolith::basic2d::ScrollViewBase::setController<typename>(Rc<T> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename T

Параметры:
* Rc<T> const&

Возвращает:
* T*

# ::stappler::xenolith::basic2d::ScrollViewBase::setController(stappler::xenolith::basic2d::ScrollController*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::basic2d::ScrollController*


# ::stappler::xenolith::basic2d::ScrollViewBase::getController()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::basic2d::ScrollController*

# ::stappler::xenolith::basic2d::ScrollViewBase::setPadding(const stappler::geom::Padding&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* const stappler::geom::Padding&


# ::stappler::xenolith::basic2d::ScrollViewBase::getPadding() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* const stappler::geom::Padding&

# ::stappler::xenolith::basic2d::ScrollViewBase::setSpaceLimit(float,float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float
* float


# ::stappler::xenolith::basic2d::ScrollViewBase::getSpaceLimit() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* float

# ::stappler::xenolith::basic2d::ScrollViewBase::getSpacePadding() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* float

# ::stappler::xenolith::basic2d::ScrollViewBase::getScrollableAreaOffset() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* float

# ::stappler::xenolith::basic2d::ScrollViewBase::getScrollableAreaSize() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* float

# ::stappler::xenolith::basic2d::ScrollViewBase::getPositionForNode(float) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float

Возвращает:
* stappler::geom::Vec2

# ::stappler::xenolith::basic2d::ScrollViewBase::getContentSizeForNode(float) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float

Возвращает:
* stappler::geom::Size2

# ::stappler::xenolith::basic2d::ScrollViewBase::getAnchorPointForNode() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::geom::Vec2

# ::stappler::xenolith::basic2d::ScrollViewBase::getNodeScrollSize(stappler::geom::Size2) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::geom::Size2

Возвращает:
* float

# ::stappler::xenolith::basic2d::ScrollViewBase::getNodeScrollPosition(stappler::geom::Vec2) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::geom::Vec2

Возвращает:
* float

# ::stappler::xenolith::basic2d::ScrollViewBase::addScrollNode(stappler::xenolith::Node*,stappler::geom::Vec2,stappler::geom::Size2,stappler::xenolith::ZOrder,stappler::StringView)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Node*
* stappler::geom::Vec2
* stappler::geom::Size2
* stappler::xenolith::ZOrder
* stappler::StringView

Возвращает:
* bool

# ::stappler::xenolith::basic2d::ScrollViewBase::updateScrollNode(stappler::xenolith::Node*,stappler::geom::Vec2,stappler::geom::Size2,stappler::xenolith::ZOrder,stappler::StringView)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Node*
* stappler::geom::Vec2
* stappler::geom::Size2
* stappler::xenolith::ZOrder
* stappler::StringView


# ::stappler::xenolith::basic2d::ScrollViewBase::removeScrollNode(stappler::xenolith::Node*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Node*

Возвращает:
* bool

# ::stappler::xenolith::basic2d::ScrollViewBase::getDistanceFromStart() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* float

# ::stappler::xenolith::basic2d::ScrollViewBase::setScrollMaxVelocity(float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float


# ::stappler::xenolith::basic2d::ScrollViewBase::getScrollMaxVelocity() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* float

# ::stappler::xenolith::basic2d::ScrollViewBase::getFrontNode() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::Node*

# ::stappler::xenolith::basic2d::ScrollViewBase::getBackNode() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::Node*

# ::stappler::xenolith::basic2d::ScrollViewBase::convertFromScrollableSpace(const stappler::geom::Vec2&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* const stappler::geom::Vec2&

Возвращает:
* stappler::geom::Vec2

# ::stappler::xenolith::basic2d::ScrollViewBase::convertToScrollableSpace(const stappler::geom::Vec2&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* const stappler::geom::Vec2&

Возвращает:
* stappler::geom::Vec2

# ::stappler::xenolith::basic2d::ScrollViewBase::convertFromScrollableSpace(stappler::xenolith::Node*,stappler::geom::Vec2)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Node*
* stappler::geom::Vec2

Возвращает:
* stappler::geom::Vec2

# ::stappler::xenolith::basic2d::ScrollViewBase::convertToScrollableSpace(stappler::xenolith::Node*,stappler::geom::Vec2)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Node*
* stappler::geom::Vec2

Возвращает:
* stappler::geom::Vec2

# ::stappler::xenolith::basic2d::ScrollViewBase::getScrollMinPosition() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* float

# ::stappler::xenolith::basic2d::ScrollViewBase::getScrollMaxPosition() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* float

# ::stappler::xenolith::basic2d::ScrollViewBase::getScrollLength() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* float

# ::stappler::xenolith::basic2d::ScrollViewBase::getScrollSize() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* float

# ::stappler::xenolith::basic2d::ScrollViewBase::setScrollRelativePosition(float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float


# ::stappler::xenolith::basic2d::ScrollViewBase::getScrollRelativePosition() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* float

# ::stappler::xenolith::basic2d::ScrollViewBase::getScrollRelativePosition(float) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float

Возвращает:
* float

# ::stappler::xenolith::basic2d::ScrollViewBase::setScrollPosition(float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float


# ::stappler::xenolith::basic2d::ScrollViewBase::getScrollPosition() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* float

# ::stappler::xenolith::basic2d::ScrollViewBase::getPointForScrollPosition(float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float

Возвращает:
* stappler::geom::Vec2

# ::stappler::xenolith::basic2d::ScrollViewBase::setScrollDirty(bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* bool


# ::stappler::xenolith::basic2d::ScrollViewBase::updateScrollBounds()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::basic2d::ScrollViewBase::onDelta(float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float


# ::stappler::xenolith::basic2d::ScrollViewBase::onOverscrollPerformed(float,float,float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float
* float
* float


# ::stappler::xenolith::basic2d::ScrollViewBase::onSwipeEventBegin(uint32_t,const stappler::geom::Vec2&,const stappler::geom::Vec2&,const stappler::geom::Vec2&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint32_t
* const stappler::geom::Vec2&
* const stappler::geom::Vec2&
* const stappler::geom::Vec2&

Возвращает:
* bool

# ::stappler::xenolith::basic2d::ScrollViewBase::onSwipeEvent(uint32_t,const stappler::geom::Vec2&,const stappler::geom::Vec2&,const stappler::geom::Vec2&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint32_t
* const stappler::geom::Vec2&
* const stappler::geom::Vec2&
* const stappler::geom::Vec2&

Возвращает:
* bool

# ::stappler::xenolith::basic2d::ScrollViewBase::onSwipeEventEnd(uint32_t,const stappler::geom::Vec2&,const stappler::geom::Vec2&,const stappler::geom::Vec2&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint32_t
* const stappler::geom::Vec2&
* const stappler::geom::Vec2&
* const stappler::geom::Vec2&

Возвращает:
* bool

# ::stappler::xenolith::basic2d::ScrollViewBase::onSwipeBegin()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::basic2d::ScrollViewBase::onSwipe(float,float,bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float
* float
* bool

Возвращает:
* bool

# ::stappler::xenolith::basic2d::ScrollViewBase::onAnimationFinished()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::basic2d::ScrollViewBase::onSwipeFinalizeAction(float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float

Возвращает:
* Rc<stappler::xenolith::ActionInterval>

# ::stappler::xenolith::basic2d::ScrollViewBase::onScroll(float,bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float
* bool


# ::stappler::xenolith::basic2d::ScrollViewBase::onOverscroll(float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float


# ::stappler::xenolith::basic2d::ScrollViewBase::onPosition()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::basic2d::ScrollViewBase::doSetScrollPosition(float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float


# ::stappler::xenolith::basic2d::ScrollViewBase::fixPosition()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::basic2d::ScrollViewBase::onPressBegin(const stappler::geom::Vec2&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* const stappler::geom::Vec2&

Возвращает:
* bool

# ::stappler::xenolith::basic2d::ScrollViewBase::onLongPress(const stappler::geom::Vec2&,stappler::TimeInterval const&,int)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* const stappler::geom::Vec2&
* stappler::TimeInterval const&
* int

Возвращает:
* bool

# ::stappler::xenolith::basic2d::ScrollViewBase::onPressEnd(const stappler::geom::Vec2&,stappler::TimeInterval const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* const stappler::geom::Vec2&
* stappler::TimeInterval const&

Возвращает:
* bool

# ::stappler::xenolith::basic2d::ScrollViewBase::onPressCancel(const stappler::geom::Vec2&,stappler::TimeInterval const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* const stappler::geom::Vec2&
* stappler::TimeInterval const&

Возвращает:
* bool

# ::stappler::xenolith::basic2d::ScrollViewBase::onTap(int,const stappler::geom::Vec2&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* int
* const stappler::geom::Vec2&


# ::stappler::xenolith::basic2d::ScrollViewBase::_layout

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::basic2d::ScrollViewBase::Layout


# ::stappler::xenolith::basic2d::ScrollViewBase::Movement

## BRIEF

## CONTENT

Доступ: protected

Значения:
* None
* Manual
* Auto
* Overscroll


# ::stappler::xenolith::basic2d::ScrollViewBase::_movement

## BRIEF

## CONTENT

Доступ: protected

Тип: enum Movement


# ::stappler::xenolith::basic2d::ScrollViewBase::_scrollPosition

## BRIEF

## CONTENT

Доступ: protected

Тип: float


# ::stappler::xenolith::basic2d::ScrollViewBase::_scrollSize

## BRIEF

## CONTENT

Доступ: protected

Тип: float


# ::stappler::xenolith::basic2d::ScrollViewBase::_savedRelativePosition

## BRIEF

## CONTENT

Доступ: protected

Тип: float


# ::stappler::xenolith::basic2d::ScrollViewBase::_scrollMin

## BRIEF

## CONTENT

Доступ: protected

Тип: float


# ::stappler::xenolith::basic2d::ScrollViewBase::_scrollMax

## BRIEF

## CONTENT

Доступ: protected

Тип: float


# ::stappler::xenolith::basic2d::ScrollViewBase::_maxVelocity

## BRIEF

## CONTENT

Доступ: protected

Тип: float


# ::stappler::xenolith::basic2d::ScrollViewBase::_scrollSpaceLimit

## BRIEF

## CONTENT

Доступ: protected

Тип: float


# ::stappler::xenolith::basic2d::ScrollViewBase::_scrollSpacePadding

## BRIEF

## CONTENT

Доступ: protected

Тип: float


# ::stappler::xenolith::basic2d::ScrollViewBase::_globalScale

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::geom::Vec2


# ::stappler::xenolith::basic2d::ScrollViewBase::_root

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::Node*


# ::stappler::xenolith::basic2d::ScrollViewBase::_scrollFilter

## BRIEF

## CONTENT

Доступ: protected

Тип: ScrollFilterCallback


# ::stappler::xenolith::basic2d::ScrollViewBase::_scrollCallback

## BRIEF

## CONTENT

Доступ: protected

Тип: ScrollCallback


# ::stappler::xenolith::basic2d::ScrollViewBase::_overscrollCallback

## BRIEF

## CONTENT

Доступ: protected

Тип: OverscrollCallback


# ::stappler::xenolith::basic2d::ScrollViewBase::_inputListener

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::InputListener*


# ::stappler::xenolith::basic2d::ScrollViewBase::_controller

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::basic2d::ScrollController*


# ::stappler::xenolith::basic2d::ScrollViewBase::_animationAction

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::xenolith::ActionInterval>


# ::stappler::xenolith::basic2d::ScrollViewBase::_movementAction

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::xenolith::basic2d::ActionAcceleratedMove>


# ::stappler::xenolith::basic2d::ScrollViewBase::_bounce

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::basic2d::ScrollViewBase::_scrollDirty

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::basic2d::ScrollViewBase::_animationDirty

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::basic2d::ScrollViewBase::_paddingGlobal

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::geom::Padding
