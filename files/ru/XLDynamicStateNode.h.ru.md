Title: XLDynamicStateNode.h


# XENOLITH_SCENE_NODES_XLDYNAMICSTATENODE_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::DynamicStateNode

## BRIEF

## CONTENT

Базовые классы:
* Node


# ::stappler::xenolith::DynamicStateNode::StateApplyMode

## BRIEF

## CONTENT

Доступ: public

Значения:
* DoNotApply
* ApplyForAll
* ApplyForNodesBelow
* ApplyForNodesAbove


# ::stappler::xenolith::DynamicStateNode::init()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::DynamicStateNode::getStateApplyMode() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::DynamicStateNode::StateApplyMode

# ::stappler::xenolith::DynamicStateNode::setStateApplyMode(stappler::xenolith::DynamicStateNode::StateApplyMode)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::DynamicStateNode::StateApplyMode


# ::stappler::xenolith::DynamicStateNode::isIgnoreParentState() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::DynamicStateNode::setIgnoreParentState(bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* bool


# ::stappler::xenolith::DynamicStateNode::visitDraw(stappler::xenolith::FrameInfo&,stappler::xenolith::NodeFlags)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::FrameInfo&
* stappler::xenolith::NodeFlags

Возвращает:
* bool

# ::stappler::xenolith::DynamicStateNode::enableScissor(stappler::geom::Padding)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::geom::Padding


# ::stappler::xenolith::DynamicStateNode::disableScissor()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::DynamicStateNode::isScissorEnabled() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::DynamicStateNode::setScissorOutlone(stappler::geom::Padding)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::geom::Padding


# ::stappler::xenolith::DynamicStateNode::getScissorOutline() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::geom::Padding

# ::stappler::xenolith::DynamicStateNode::updateDynamicState(stappler::xenolith::DrawStateValues const&) const

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::DrawStateValues const&

Возвращает:
* stappler::xenolith::DrawStateValues

# ::stappler::xenolith::DynamicStateNode::_applyMode

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::DynamicStateNode::StateApplyMode


# ::stappler::xenolith::DynamicStateNode::_ignoreParentState

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::DynamicStateNode::_scissorEnabled

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::DynamicStateNode::_scissorOutline

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::geom::Padding
