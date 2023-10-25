Title: XL2dScrollController.h


# XENOLITH_RENDERER_GUI2D_XL2DSCROLLCONTROLLER_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::gui2d::ScrollController

## BRIEF

## CONTENT

Базовые классы:
* Component


# ::stappler::xenolith::gui2d::ScrollController::NodeFunction

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::gui2d::ScrollController::RebuildCallback

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::gui2d::ScrollController::Item

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::gui2d::ScrollController::Item::Item(stappler::xenolith::gui2d::ScrollController::NodeFunction&&,stappler::xenolith::Vec2,stappler::xenolith::Size2,stappler::xenolith::ZOrder,stappler::StringView)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::gui2d::ScrollController::NodeFunction&&
* stappler::xenolith::Vec2
* stappler::xenolith::Size2
* stappler::xenolith::ZOrder
* stappler::StringView


# ::stappler::xenolith::gui2d::ScrollController::Item::nodeFunction

## BRIEF

## CONTENT

Тип: stappler::xenolith::gui2d::ScrollController::NodeFunction


# ::stappler::xenolith::gui2d::ScrollController::Item::size

## BRIEF

## CONTENT

Тип: stappler::xenolith::Size2


# ::stappler::xenolith::gui2d::ScrollController::Item::pos

## BRIEF

## CONTENT

Тип: stappler::xenolith::Vec2


# ::stappler::xenolith::gui2d::ScrollController::Item::zIndex

## BRIEF

## CONTENT

Тип: stappler::xenolith::ZOrder


# ::stappler::xenolith::gui2d::ScrollController::Item::name

## BRIEF

## CONTENT

Тип: stappler::mem_std::String


# ::stappler::xenolith::gui2d::ScrollController::Item::node

## BRIEF

## CONTENT

Тип: stappler::xenolith::Node*


# ::stappler::xenolith::gui2d::ScrollController::Item::handle

## BRIEF

## CONTENT

Тип: stappler::xenolith::gui2d::ScrollItemHandle*


# ::stappler::xenolith::gui2d::ScrollController::~ScrollController()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::gui2d::ScrollController::onAdded(stappler::xenolith::Node*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Node*


# ::stappler::xenolith::gui2d::ScrollController::onRemoved()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::gui2d::ScrollController::onContentSizeDirty()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::gui2d::ScrollController::onScrollPosition(bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* bool


# ::stappler::xenolith::gui2d::ScrollController::onScroll(float,bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float
* bool


# ::stappler::xenolith::gui2d::ScrollController::onOverscroll(float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float


# ::stappler::xenolith::gui2d::ScrollController::getScrollMin()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* float

# ::stappler::xenolith::gui2d::ScrollController::getScrollMax()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* float

# ::stappler::xenolith::gui2d::ScrollController::getRoot() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::Node*

# ::stappler::xenolith::gui2d::ScrollController::getScroll() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::gui2d::ScrollViewBase*

# ::stappler::xenolith::gui2d::ScrollController::clear()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::gui2d::ScrollController::update(float,float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float
* float


# ::stappler::xenolith::gui2d::ScrollController::reset(float,float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float
* float


# ::stappler::xenolith::gui2d::ScrollController::setScrollableArea(float,float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float
* float

Возвращает:
* bool

# ::stappler::xenolith::gui2d::ScrollController::getScrollableAreaOffset() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* float

# ::stappler::xenolith::gui2d::ScrollController::getScrollableAreaSize() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* float

# ::stappler::xenolith::gui2d::ScrollController::rebuildObjects()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::gui2d::ScrollController::size() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* size_t

# ::stappler::xenolith::gui2d::ScrollController::addItem(stappler::xenolith::gui2d::ScrollController::NodeFunction&&,stappler::xenolith::Size2,stappler::xenolith::Vec2,stappler::xenolith::ZOrder,stappler::StringView)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::gui2d::ScrollController::NodeFunction&&
* stappler::xenolith::Size2
* stappler::xenolith::Vec2
* stappler::xenolith::ZOrder
* stappler::StringView

Возвращает:
* size_t

# ::stappler::xenolith::gui2d::ScrollController::addItem(stappler::xenolith::gui2d::ScrollController::NodeFunction&&,float,float,stappler::xenolith::ZOrder,stappler::StringView)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::gui2d::ScrollController::NodeFunction&&
* float
* float
* stappler::xenolith::ZOrder
* stappler::StringView

Возвращает:
* size_t

# ::stappler::xenolith::gui2d::ScrollController::addItem(stappler::xenolith::gui2d::ScrollController::NodeFunction&&,float,stappler::xenolith::ZOrder,stappler::StringView)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::gui2d::ScrollController::NodeFunction&&
* float
* stappler::xenolith::ZOrder
* stappler::StringView

Возвращает:
* size_t

# ::stappler::xenolith::gui2d::ScrollController::addPlaceholder(stappler::xenolith::Size2,stappler::xenolith::Vec2)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Size2
* stappler::xenolith::Vec2

Возвращает:
* size_t

# ::stappler::xenolith::gui2d::ScrollController::addPlaceholder(float,float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float
* float

Возвращает:
* size_t

# ::stappler::xenolith::gui2d::ScrollController::addPlaceholder(float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float

Возвращает:
* size_t

# ::stappler::xenolith::gui2d::ScrollController::getItem(size_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* size_t

Возвращает:
* stappler::xenolith::gui2d::ScrollController::Item const*

# ::stappler::xenolith::gui2d::ScrollController::getItem(stappler::xenolith::Node*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Node*

Возвращает:
* stappler::xenolith::gui2d::ScrollController::Item const*

# ::stappler::xenolith::gui2d::ScrollController::getItem(stappler::StringView)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView

Возвращает:
* stappler::xenolith::gui2d::ScrollController::Item const*

# ::stappler::xenolith::gui2d::ScrollController::getItemIndex(stappler::xenolith::Node*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Node*

Возвращает:
* size_t

# ::stappler::xenolith::gui2d::ScrollController::getItems() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Vector<stappler::xenolith::gui2d::ScrollController::Item> const&

# ::stappler::xenolith::gui2d::ScrollController::getItems()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Vector<stappler::xenolith::gui2d::ScrollController::Item>&

# ::stappler::xenolith::gui2d::ScrollController::setScrollRelativeValue(float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float


# ::stappler::xenolith::gui2d::ScrollController::getNodeByName(stappler::StringView) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView

Возвращает:
* stappler::xenolith::Node*

# ::stappler::xenolith::gui2d::ScrollController::getFrontNode() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::Node*

# ::stappler::xenolith::gui2d::ScrollController::getBackNode() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::Node*

# ::stappler::xenolith::gui2d::ScrollController::getNodes() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Vector<Rc<stappler::xenolith::Node>>

# ::stappler::xenolith::gui2d::ScrollController::getNextItemPosition() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* float

# ::stappler::xenolith::gui2d::ScrollController::setKeepNodes(bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* bool


# ::stappler::xenolith::gui2d::ScrollController::isKeepNodes() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::gui2d::ScrollController::resizeItem(stappler::xenolith::gui2d::ScrollController::Item const*,float,bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::gui2d::ScrollController::Item const*
* float
* bool


# ::stappler::xenolith::gui2d::ScrollController::setAnimationPadding(float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float


# ::stappler::xenolith::gui2d::ScrollController::dropAnimationPadding()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::gui2d::ScrollController::updateAnimationPadding(float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float


# ::stappler::xenolith::gui2d::ScrollController::setRebuildCallback(stappler::xenolith::gui2d::ScrollController::RebuildCallback const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::gui2d::ScrollController::RebuildCallback const&


# ::stappler::xenolith::gui2d::ScrollController::getRebuildCallback() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* RebuildCallback&

# ::stappler::xenolith::gui2d::ScrollController::onNextObject(stappler::xenolith::gui2d::ScrollController::Item&,float,float)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::gui2d::ScrollController::Item&
* float
* float


# ::stappler::xenolith::gui2d::ScrollController::addScrollNode(stappler::xenolith::gui2d::ScrollController::Item&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::gui2d::ScrollController::Item&


# ::stappler::xenolith::gui2d::ScrollController::updateScrollNode(stappler::xenolith::gui2d::ScrollController::Item&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::gui2d::ScrollController::Item&


# ::stappler::xenolith::gui2d::ScrollController::removeScrollNode(stappler::xenolith::gui2d::ScrollController::Item&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::gui2d::ScrollController::Item&


# ::stappler::xenolith::gui2d::ScrollController::_scroll

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::gui2d::ScrollViewBase*


# ::stappler::xenolith::gui2d::ScrollController::_root

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::Node*


# ::stappler::xenolith::gui2d::ScrollController::_scrollAreaOffset

## BRIEF

## CONTENT

Доступ: protected

Тип: float


# ::stappler::xenolith::gui2d::ScrollController::_scrollAreaSize

## BRIEF

## CONTENT

Доступ: protected

Тип: float


# ::stappler::xenolith::gui2d::ScrollController::_currentMin

## BRIEF

## CONTENT

Доступ: protected

Тип: float


# ::stappler::xenolith::gui2d::ScrollController::_currentMax

## BRIEF

## CONTENT

Доступ: protected

Тип: float


# ::stappler::xenolith::gui2d::ScrollController::_windowBegin

## BRIEF

## CONTENT

Доступ: protected

Тип: float


# ::stappler::xenolith::gui2d::ScrollController::_windowEnd

## BRIEF

## CONTENT

Доступ: protected

Тип: float


# ::stappler::xenolith::gui2d::ScrollController::_currentPosition

## BRIEF

## CONTENT

Доступ: protected

Тип: float


# ::stappler::xenolith::gui2d::ScrollController::_currentSize

## BRIEF

## CONTENT

Доступ: protected

Тип: float


# ::stappler::xenolith::gui2d::ScrollController::_nodes

## BRIEF

## CONTENT

Доступ: protected

Тип: Vector<stappler::xenolith::gui2d::ScrollController::Item>


# ::stappler::xenolith::gui2d::ScrollController::_infoDirty

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::gui2d::ScrollController::_keepNodes

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::gui2d::ScrollController::_animationPadding

## BRIEF

## CONTENT

Доступ: protected

Тип: float


# ::stappler::xenolith::gui2d::ScrollController::_savedSize

## BRIEF

## CONTENT

Доступ: protected

Тип: float


# ::stappler::xenolith::gui2d::ScrollController::_callback

## BRIEF

## CONTENT

Доступ: protected

Тип: RebuildCallback
