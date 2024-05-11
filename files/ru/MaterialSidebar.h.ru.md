Title: MaterialSidebar.h


# XENOLITH_RENDERER_MATERIAL2D_COMPONENTS_SIDEBAR_MATERIALSIDEBAR_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::material2d::Sidebar

## BRIEF

## CONTENT

Базовые классы:
* Node


# ::stappler::xenolith::material2d::Sidebar::Position

## BRIEF

## CONTENT

Доступ: public

Значения:
* Left
* Right


# ::stappler::xenolith::material2d::Sidebar::WidthCallback

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::material2d::Sidebar::BoolCallback

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::material2d::Sidebar::~Sidebar()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::material2d::Sidebar::init(stappler::xenolith::material2d::Sidebar::Position)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::material2d::Sidebar::Position

Возвращает:
* bool

# ::stappler::xenolith::material2d::Sidebar::onContentSizeDirty()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::material2d::Sidebar::setNode<typename,typename>(Rc<T> const&,Args &&...)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename T
* typename Args

Параметры:
* Rc<T> const&
* Args &&...

Возвращает:
* T*

# ::stappler::xenolith::material2d::Sidebar::setBaseNode(stappler::xenolith::Node*,stappler::xenolith::ZOrder)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Node*
* stappler::xenolith::ZOrder


# ::stappler::xenolith::material2d::Sidebar::getNode() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::Node*

# ::stappler::xenolith::material2d::Sidebar::setNodeWidth(float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float


# ::stappler::xenolith::material2d::Sidebar::getNodeWidth() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* float

# ::stappler::xenolith::material2d::Sidebar::setNodeWidthCallback(stappler::xenolith::material2d::Sidebar::WidthCallback const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::material2d::Sidebar::WidthCallback const&


# ::stappler::xenolith::material2d::Sidebar::getNodeWidthCallback() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* WidthCallback&

# ::stappler::xenolith::material2d::Sidebar::setSwallowTouches(bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* bool


# ::stappler::xenolith::material2d::Sidebar::isSwallowTouches() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::material2d::Sidebar::setEdgeSwipeEnabled(bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* bool


# ::stappler::xenolith::material2d::Sidebar::isEdgeSwipeEnabled() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::material2d::Sidebar::setBackgroundActiveOpacity(float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float


# ::stappler::xenolith::material2d::Sidebar::setBackgroundPassiveOpacity(float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float


# ::stappler::xenolith::material2d::Sidebar::show()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::material2d::Sidebar::hide(float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float


# ::stappler::xenolith::material2d::Sidebar::getProgress() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* float

# ::stappler::xenolith::material2d::Sidebar::isNodeVisible() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::material2d::Sidebar::isNodeEnabled() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::material2d::Sidebar::setNodeVisibleCallback(stappler::xenolith::material2d::Sidebar::BoolCallback&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::material2d::Sidebar::BoolCallback&&


# ::stappler::xenolith::material2d::Sidebar::setNodeEnabledCallback(stappler::xenolith::material2d::Sidebar::BoolCallback&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::material2d::Sidebar::BoolCallback&&


# ::stappler::xenolith::material2d::Sidebar::setEnabled(bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* bool


# ::stappler::xenolith::material2d::Sidebar::isEnabled() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::material2d::Sidebar::setProgress(float)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* float


# ::stappler::xenolith::material2d::Sidebar::onSwipeDelta(float)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* float


# ::stappler::xenolith::material2d::Sidebar::onSwipeFinished(float)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* float


# ::stappler::xenolith::material2d::Sidebar::onNodeEnabled(bool)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* bool


# ::stappler::xenolith::material2d::Sidebar::onNodeVisible(bool)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* bool


# ::stappler::xenolith::material2d::Sidebar::stopNodeActions()

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::material2d::Sidebar::_widthCallback

## BRIEF

## CONTENT

Доступ: protected

Тип: WidthCallback


# ::stappler::xenolith::material2d::Sidebar::_nodeWidth

## BRIEF

## CONTENT

Доступ: protected

Тип: float


# ::stappler::xenolith::material2d::Sidebar::_position

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::material2d::Sidebar::Position


# ::stappler::xenolith::material2d::Sidebar::_swallowTouches

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::material2d::Sidebar::_edgeSwipeEnabled

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::material2d::Sidebar::_backgroundActiveOpacity

## BRIEF

## CONTENT

Доступ: protected

Тип: float


# ::stappler::xenolith::material2d::Sidebar::_backgroundPassiveOpacity

## BRIEF

## CONTENT

Доступ: protected

Тип: float


# ::stappler::xenolith::material2d::Sidebar::_listener

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::InputListener*


# ::stappler::xenolith::material2d::Sidebar::_background

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::basic2d::Layer*


# ::stappler::xenolith::material2d::Sidebar::_node

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::Node*


# ::stappler::xenolith::material2d::Sidebar::_visibleCallback

## BRIEF

## CONTENT

Доступ: protected

Тип: BoolCallback


# ::stappler::xenolith::material2d::Sidebar::_enabledCallback

## BRIEF

## CONTENT

Доступ: protected

Тип: BoolCallback
