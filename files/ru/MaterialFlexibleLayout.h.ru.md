Title: MaterialFlexibleLayout.h


# XENOLITH_RENDERER_MATERIAL2D_LAYOUT_MATERIALFLEXIBLELAYOUT_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::material2d::FlexibleLayout

## BRIEF

## CONTENT

Базовые классы:
* DecoratedLayout


# ::stappler::xenolith::material2d::FlexibleLayout::NodeParams

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::material2d::FlexibleLayout::NodeParams::Mask

## BRIEF

## CONTENT

Значения:
* None
* Position
* ContentSize
* AnchorPoint
* Visibility


# ::stappler::xenolith::material2d::FlexibleLayout::NodeParams::setPosition(float,float)

## BRIEF

## CONTENT

Параметры:
* float
* float


# ::stappler::xenolith::material2d::FlexibleLayout::NodeParams::setPosition(stappler::xenolith::Vec2 const&)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::Vec2 const&


# ::stappler::xenolith::material2d::FlexibleLayout::NodeParams::setAnchorPoint(stappler::xenolith::Vec2 const&)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::Vec2 const&


# ::stappler::xenolith::material2d::FlexibleLayout::NodeParams::setContentSize(stappler::xenolith::Size2 const&)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::Size2 const&


# ::stappler::xenolith::material2d::FlexibleLayout::NodeParams::setVisible(bool)

## BRIEF

## CONTENT

Параметры:
* bool


# ::stappler::xenolith::material2d::FlexibleLayout::NodeParams::apply(stappler::xenolith::Node*) const

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::Node*


# ::stappler::xenolith::material2d::FlexibleLayout::NodeParams::mask

## BRIEF

## CONTENT

Тип: stappler::xenolith::material2d::FlexibleLayout::NodeParams::Mask


# ::stappler::xenolith::material2d::FlexibleLayout::NodeParams::position

## BRIEF

## CONTENT

Тип: stappler::xenolith::Vec2


# ::stappler::xenolith::material2d::FlexibleLayout::NodeParams::anchorPoint

## BRIEF

## CONTENT

Тип: stappler::xenolith::Vec2


# ::stappler::xenolith::material2d::FlexibleLayout::NodeParams::contentSize

## BRIEF

## CONTENT

Тип: stappler::xenolith::Size2


# ::stappler::xenolith::material2d::FlexibleLayout::NodeParams::visible

## BRIEF

## CONTENT

Тип: bool


# ::stappler::xenolith::material2d::FlexibleLayout::HeightFunction

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::material2d::FlexibleLayout::~FlexibleLayout()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::material2d::FlexibleLayout::init()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::material2d::FlexibleLayout::onContentSizeDirty()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::material2d::FlexibleLayout::setBaseNode<typename,typename>(Rc<T> const&,Args &&...)

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

# ::stappler::xenolith::material2d::FlexibleLayout::setFlexibleNode<typename,typename>(Rc<T> const&,Args &&...)

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

# ::stappler::xenolith::material2d::FlexibleLayout::setBaseNode(stappler::xenolith::gui2d::ScrollView*,stappler::xenolith::ZOrder)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::gui2d::ScrollView*
* stappler::xenolith::ZOrder


# ::stappler::xenolith::material2d::FlexibleLayout::setFlexibleNode(stappler::xenolith::Node*,stappler::xenolith::ZOrder)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Node*
* stappler::xenolith::ZOrder


# ::stappler::xenolith::material2d::FlexibleLayout::setFlexibleAutoComplete(bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* bool


# ::stappler::xenolith::material2d::FlexibleLayout::setFlexibleMinHeight(float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float


# ::stappler::xenolith::material2d::FlexibleLayout::getFlexibleMinHeight() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* float

# ::stappler::xenolith::material2d::FlexibleLayout::setFlexibleMaxHeight(float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float


# ::stappler::xenolith::material2d::FlexibleLayout::getFlexibleMaxHeight() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* float

# ::stappler::xenolith::material2d::FlexibleLayout::setFlexibleBaseNode(bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* bool


# ::stappler::xenolith::material2d::FlexibleLayout::isFlexibleBaseNode() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::material2d::FlexibleLayout::setFlexibleHeightFunction(stappler::xenolith::material2d::FlexibleLayout::HeightFunction const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::material2d::FlexibleLayout::HeightFunction const&


# ::stappler::xenolith::material2d::FlexibleLayout::getFlexibleHeightFunction() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* HeightFunction&

# ::stappler::xenolith::material2d::FlexibleLayout::getFlexibleLevel() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* float

# ::stappler::xenolith::material2d::FlexibleLayout::setFlexibleLevel(float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float


# ::stappler::xenolith::material2d::FlexibleLayout::setFlexibleLevelAnimated(float,float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float
* float


# ::stappler::xenolith::material2d::FlexibleLayout::setFlexibleHeight(float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float


# ::stappler::xenolith::material2d::FlexibleLayout::setBaseNodePadding(float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float


# ::stappler::xenolith::material2d::FlexibleLayout::getBaseNodePadding() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* float

# ::stappler::xenolith::material2d::FlexibleLayout::getCurrentFlexibleHeight() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* float

# ::stappler::xenolith::material2d::FlexibleLayout::getCurrentFlexibleMax() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* float

# ::stappler::xenolith::material2d::FlexibleLayout::onPush(stappler::xenolith::basic2d::SceneContent2d*,bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::basic2d::SceneContent2d*
* bool


# ::stappler::xenolith::material2d::FlexibleLayout::onForegroundTransitionBegan(stappler::xenolith::basic2d::SceneContent2d*,stappler::xenolith::basic2d::SceneLayout2d*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::basic2d::SceneContent2d*
* stappler::xenolith::basic2d::SceneLayout2d*


# ::stappler::xenolith::material2d::FlexibleLayout::setSafeTrigger(bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* bool


# ::stappler::xenolith::material2d::FlexibleLayout::isSafeTrigger() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::material2d::FlexibleLayout::expandFlexibleNode(float,float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float
* float


# ::stappler::xenolith::material2d::FlexibleLayout::clearFlexibleExpand(float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float


# ::stappler::xenolith::material2d::FlexibleLayout::updateFlexParams()

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::material2d::FlexibleLayout::onScroll(float,bool)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* float
* bool


# ::stappler::xenolith::material2d::FlexibleLayout::onDecorNode(stappler::xenolith::material2d::FlexibleLayout::NodeParams const&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::material2d::FlexibleLayout::NodeParams const&


# ::stappler::xenolith::material2d::FlexibleLayout::onFlexibleNode(stappler::xenolith::material2d::FlexibleLayout::NodeParams const&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::material2d::FlexibleLayout::NodeParams const&


# ::stappler::xenolith::material2d::FlexibleLayout::onBaseNode(stappler::xenolith::material2d::FlexibleLayout::NodeParams const&,stappler::xenolith::Padding const&,float)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::material2d::FlexibleLayout::NodeParams const&
* stappler::xenolith::Padding const&
* float


# ::stappler::xenolith::material2d::FlexibleLayout::AutoCompleteTag()

## BRIEF

## CONTENT

Доступ: protected

Возвращает:
* int

# ::stappler::xenolith::material2d::FlexibleLayout::_flexibleAutoComplete

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::material2d::FlexibleLayout::_flexibleBaseNode

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::material2d::FlexibleLayout::_safeTrigger

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::material2d::FlexibleLayout::_flexibleLevel

## BRIEF

## CONTENT

Доступ: protected

Тип: float


# ::stappler::xenolith::material2d::FlexibleLayout::_flexibleMinHeight

## BRIEF

## CONTENT

Доступ: protected

Тип: float


# ::stappler::xenolith::material2d::FlexibleLayout::_flexibleMaxHeight

## BRIEF

## CONTENT

Доступ: protected

Тип: float


# ::stappler::xenolith::material2d::FlexibleLayout::_baseNodePadding

## BRIEF

## CONTENT

Доступ: protected

Тип: float


# ::stappler::xenolith::material2d::FlexibleLayout::_flexibleExtraSpace

## BRIEF

## CONTENT

Доступ: protected

Тип: float


# ::stappler::xenolith::material2d::FlexibleLayout::_flexibleHeightFunction

## BRIEF

## CONTENT

Доступ: protected

Тип: HeightFunction


# ::stappler::xenolith::material2d::FlexibleLayout::_flexibleNode

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::Node*


# ::stappler::xenolith::material2d::FlexibleLayout::_baseNode

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::gui2d::ScrollView*
