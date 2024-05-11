Title: XL2dScrollController.h


# XENOLITH_RENDERER_BASIC2D_XL2DSCROLLCONTROLLER_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::basic2d::ScrollController

## BRIEF

## CONTENT

Базовые классы:
* Component


# ::stappler::xenolith::basic2d::ScrollController::NodeFunction

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::basic2d::ScrollController::RebuildCallback

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::basic2d::ScrollController::Item

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::basic2d::ScrollController::Item::Item(stappler::xenolith::basic2d::ScrollController::NodeFunction&&,stappler::geom::Vec2,stappler::geom::Size2,stappler::xenolith::ZOrder,stappler::StringView)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::basic2d::ScrollController::NodeFunction&&
* stappler::geom::Vec2
* stappler::geom::Size2
* stappler::xenolith::ZOrder
* stappler::StringView


# ::stappler::xenolith::basic2d::ScrollController::Item::nodeFunction

## BRIEF

## CONTENT

Тип: stappler::xenolith::basic2d::ScrollController::NodeFunction


# ::stappler::xenolith::basic2d::ScrollController::Item::size

## BRIEF

## CONTENT

Тип: stappler::geom::Size2


# ::stappler::xenolith::basic2d::ScrollController::Item::pos

## BRIEF

## CONTENT

Тип: stappler::geom::Vec2


# ::stappler::xenolith::basic2d::ScrollController::Item::zIndex

## BRIEF

## CONTENT

Тип: stappler::xenolith::ZOrder


# ::stappler::xenolith::basic2d::ScrollController::Item::name

## BRIEF

## CONTENT

Тип: stappler::mem_std::String


# ::stappler::xenolith::basic2d::ScrollController::Item::node

## BRIEF

## CONTENT

Тип: stappler::xenolith::Node*


# ::stappler::xenolith::basic2d::ScrollController::Item::handle

## BRIEF

## CONTENT

Тип: stappler::xenolith::basic2d::ScrollItemHandle*


# ::stappler::xenolith::basic2d::ScrollController::~ScrollController()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::basic2d::ScrollController::onAdded(stappler::xenolith::Node*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Node*


# ::stappler::xenolith::basic2d::ScrollController::onRemoved()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::basic2d::ScrollController::onContentSizeDirty()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::basic2d::ScrollController::onScrollPosition(bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* bool


# ::stappler::xenolith::basic2d::ScrollController::onScroll(float,bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float
* bool


# ::stappler::xenolith::basic2d::ScrollController::onOverscroll(float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float


# ::stappler::xenolith::basic2d::ScrollController::getScrollMin()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* float

# ::stappler::xenolith::basic2d::ScrollController::getScrollMax()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* float

# ::stappler::xenolith::basic2d::ScrollController::getRoot() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::Node*

# ::stappler::xenolith::basic2d::ScrollController::getScroll() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::basic2d::ScrollViewBase*

# ::stappler::xenolith::basic2d::ScrollController::clear()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::basic2d::ScrollController::update(float,float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float
* float


# ::stappler::xenolith::basic2d::ScrollController::reset(float,float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float
* float


# ::stappler::xenolith::basic2d::ScrollController::setScrollableArea(float,float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float
* float

Возвращает:
* bool

# ::stappler::xenolith::basic2d::ScrollController::getScrollableAreaOffset() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* float

# ::stappler::xenolith::basic2d::ScrollController::getScrollableAreaSize() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* float

# ::stappler::xenolith::basic2d::ScrollController::rebuildObjects()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::basic2d::ScrollController::size() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* size_t

# ::stappler::xenolith::basic2d::ScrollController::addItem(stappler::xenolith::basic2d::ScrollController::NodeFunction&&,stappler::geom::Size2,stappler::geom::Vec2,stappler::xenolith::ZOrder,stappler::StringView)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::basic2d::ScrollController::NodeFunction&&
* stappler::geom::Size2
* stappler::geom::Vec2
* stappler::xenolith::ZOrder
* stappler::StringView

Возвращает:
* size_t

# ::stappler::xenolith::basic2d::ScrollController::addItem(stappler::xenolith::basic2d::ScrollController::NodeFunction&&,float,float,stappler::xenolith::ZOrder,stappler::StringView)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::basic2d::ScrollController::NodeFunction&&
* float
* float
* stappler::xenolith::ZOrder
* stappler::StringView

Возвращает:
* size_t

# ::stappler::xenolith::basic2d::ScrollController::addItem(stappler::xenolith::basic2d::ScrollController::NodeFunction&&,float,stappler::xenolith::ZOrder,stappler::StringView)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::basic2d::ScrollController::NodeFunction&&
* float
* stappler::xenolith::ZOrder
* stappler::StringView

Возвращает:
* size_t

# ::stappler::xenolith::basic2d::ScrollController::addPlaceholder(stappler::geom::Size2,stappler::geom::Vec2)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::geom::Size2
* stappler::geom::Vec2

Возвращает:
* size_t

# ::stappler::xenolith::basic2d::ScrollController::addPlaceholder(float,float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float
* float

Возвращает:
* size_t

# ::stappler::xenolith::basic2d::ScrollController::addPlaceholder(float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float

Возвращает:
* size_t

# ::stappler::xenolith::basic2d::ScrollController::getItem(size_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* size_t

Возвращает:
* stappler::xenolith::basic2d::ScrollController::Item const*

# ::stappler::xenolith::basic2d::ScrollController::getItem(stappler::xenolith::Node*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Node*

Возвращает:
* stappler::xenolith::basic2d::ScrollController::Item const*

# ::stappler::xenolith::basic2d::ScrollController::getItem(stappler::StringView)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView

Возвращает:
* stappler::xenolith::basic2d::ScrollController::Item const*

# ::stappler::xenolith::basic2d::ScrollController::getItemIndex(stappler::xenolith::Node*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Node*

Возвращает:
* size_t

# ::stappler::xenolith::basic2d::ScrollController::getItems() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Vector<stappler::xenolith::basic2d::ScrollController::Item> const&

# ::stappler::xenolith::basic2d::ScrollController::getItems()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Vector<stappler::xenolith::basic2d::ScrollController::Item>&

# ::stappler::xenolith::basic2d::ScrollController::setScrollRelativeValue(float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float


# ::stappler::xenolith::basic2d::ScrollController::getNodeByName(stappler::StringView) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView

Возвращает:
* stappler::xenolith::Node*

# ::stappler::xenolith::basic2d::ScrollController::getFrontNode() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::Node*

# ::stappler::xenolith::basic2d::ScrollController::getBackNode() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::Node*

# ::stappler::xenolith::basic2d::ScrollController::getNodes() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Vector<Rc<stappler::xenolith::Node>>

# ::stappler::xenolith::basic2d::ScrollController::getNextItemPosition() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* float

# ::stappler::xenolith::basic2d::ScrollController::setKeepNodes(bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* bool


# ::stappler::xenolith::basic2d::ScrollController::isKeepNodes() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::basic2d::ScrollController::resizeItem(stappler::xenolith::basic2d::ScrollController::Item const*,float,bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::basic2d::ScrollController::Item const*
* float
* bool


# ::stappler::xenolith::basic2d::ScrollController::setAnimationPadding(float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float


# ::stappler::xenolith::basic2d::ScrollController::dropAnimationPadding()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::basic2d::ScrollController::updateAnimationPadding(float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float


# ::stappler::xenolith::basic2d::ScrollController::setRebuildCallback(stappler::xenolith::basic2d::ScrollController::RebuildCallback const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::basic2d::ScrollController::RebuildCallback const&


# ::stappler::xenolith::basic2d::ScrollController::getRebuildCallback() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* RebuildCallback&

# ::stappler::xenolith::basic2d::ScrollController::onNextObject(stappler::xenolith::basic2d::ScrollController::Item&,float,float)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::basic2d::ScrollController::Item&
* float
* float


# ::stappler::xenolith::basic2d::ScrollController::addScrollNode(stappler::xenolith::basic2d::ScrollController::Item&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::basic2d::ScrollController::Item&


# ::stappler::xenolith::basic2d::ScrollController::updateScrollNode(stappler::xenolith::basic2d::ScrollController::Item&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::basic2d::ScrollController::Item&


# ::stappler::xenolith::basic2d::ScrollController::removeScrollNode(stappler::xenolith::basic2d::ScrollController::Item&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::basic2d::ScrollController::Item&


# ::stappler::xenolith::basic2d::ScrollController::_scroll

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::basic2d::ScrollViewBase*


# ::stappler::xenolith::basic2d::ScrollController::_root

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::Node*


# ::stappler::xenolith::basic2d::ScrollController::_scrollAreaOffset

## BRIEF

## CONTENT

Доступ: protected

Тип: float


# ::stappler::xenolith::basic2d::ScrollController::_scrollAreaSize

## BRIEF

## CONTENT

Доступ: protected

Тип: float


# ::stappler::xenolith::basic2d::ScrollController::_currentMin

## BRIEF

## CONTENT

Доступ: protected

Тип: float


# ::stappler::xenolith::basic2d::ScrollController::_currentMax

## BRIEF

## CONTENT

Доступ: protected

Тип: float


# ::stappler::xenolith::basic2d::ScrollController::_windowBegin

## BRIEF

## CONTENT

Доступ: protected

Тип: float


# ::stappler::xenolith::basic2d::ScrollController::_windowEnd

## BRIEF

## CONTENT

Доступ: protected

Тип: float


# ::stappler::xenolith::basic2d::ScrollController::_currentPosition

## BRIEF

## CONTENT

Доступ: protected

Тип: float


# ::stappler::xenolith::basic2d::ScrollController::_currentSize

## BRIEF

## CONTENT

Доступ: protected

Тип: float


# ::stappler::xenolith::basic2d::ScrollController::_nodes

## BRIEF

## CONTENT

Доступ: protected

Тип: Vector<stappler::xenolith::basic2d::ScrollController::Item>


# ::stappler::xenolith::basic2d::ScrollController::_infoDirty

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::basic2d::ScrollController::_keepNodes

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::basic2d::ScrollController::_animationPadding

## BRIEF

## CONTENT

Доступ: protected

Тип: float


# ::stappler::xenolith::basic2d::ScrollController::_savedSize

## BRIEF

## CONTENT

Доступ: protected

Тип: float


# ::stappler::xenolith::basic2d::ScrollController::_callback

## BRIEF

## CONTENT

Доступ: protected

Тип: RebuildCallback
