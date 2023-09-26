Title: XLNode.h


# XENOLITH_SCENE_NODES_XLNODE_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::Node

## BRIEF

## CONTENT

Базовые классы:
* Ref


# ::stappler::xenolith::Node::ZOrderTransparent

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::xenolith::ZOrder const


# ::stappler::xenolith::Node::ZOrderMax

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::xenolith::ZOrder const


# ::stappler::xenolith::Node::ZOrderMin

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::xenolith::ZOrder const


# ::stappler::xenolith::Node::isParent(stappler::xenolith::Node*,stappler::xenolith::Node*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Node*
* stappler::xenolith::Node*

Возвращает:
* bool

# ::stappler::xenolith::Node::getChainNodeToParentTransform(stappler::xenolith::Node*,stappler::xenolith::Node*,bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Node*
* stappler::xenolith::Node*
* bool

Возвращает:
* stappler::xenolith::Mat4

# ::stappler::xenolith::Node::getChainParentToNodeTransform(stappler::xenolith::Node*,stappler::xenolith::Node*,bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Node*
* stappler::xenolith::Node*
* bool

Возвращает:
* stappler::xenolith::Mat4

# ::stappler::xenolith::Node::Node()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::Node::~Node()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::Node::init()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::Node::setLocalZOrder(stappler::xenolith::ZOrder)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::ZOrder


# ::stappler::xenolith::Node::getLocalZOrder() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::ZOrder

# ::stappler::xenolith::Node::setScale(float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float


# ::stappler::xenolith::Node::setScale(stappler::xenolith::Vec2 const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Vec2 const&


# ::stappler::xenolith::Node::setScale(stappler::xenolith::Vec3 const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Vec3 const&


# ::stappler::xenolith::Node::setScaleX(float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float


# ::stappler::xenolith::Node::setScaleY(float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float


# ::stappler::xenolith::Node::setScaleZ(float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float


# ::stappler::xenolith::Node::getScale() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::Vec3 const&

# ::stappler::xenolith::Node::setPosition(stappler::xenolith::Vec2 const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Vec2 const&


# ::stappler::xenolith::Node::setPosition(stappler::xenolith::Vec3 const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Vec3 const&


# ::stappler::xenolith::Node::setPositionX(float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float


# ::stappler::xenolith::Node::setPositionY(float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float


# ::stappler::xenolith::Node::setPositionZ(float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float


# ::stappler::xenolith::Node::getPosition() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::Vec3 const&

# ::stappler::xenolith::Node::setSkewX(float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float


# ::stappler::xenolith::Node::setSkewY(float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float


# ::stappler::xenolith::Node::getSkew() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::Vec2 const&

# ::stappler::xenolith::Node::setAnchorPoint(stappler::xenolith::Vec2 const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Vec2 const&


# ::stappler::xenolith::Node::getAnchorPoint() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::Vec2 const&

# ::stappler::xenolith::Node::setContentSize(stappler::xenolith::Size2 const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Size2 const&


# ::stappler::xenolith::Node::getContentSize() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::Size2 const&

# ::stappler::xenolith::Node::setVisible(bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* bool


# ::stappler::xenolith::Node::isVisible() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::Node::setRotation(float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float


# ::stappler::xenolith::Node::setRotation(stappler::xenolith::Vec3 const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Vec3 const&


# ::stappler::xenolith::Node::setRotation(stappler::xenolith::Quaternion const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Quaternion const&


# ::stappler::xenolith::Node::getRotation() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* float

# ::stappler::xenolith::Node::getRotation3D() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::Vec3 const&

# ::stappler::xenolith::Node::getRotationQuat() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::Quaternion const&

# ::stappler::xenolith::Node::addChild<typename,typename>(N*,Args &&...)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename N
* typename Args

Параметры:
* N*
* Args &&...

Возвращает:
* N*

# ::stappler::xenolith::Node::addChild<typename,typename>(Rc<N> const&,Args &&...)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename N
* typename Args

Параметры:
* Rc<N> const&
* Args &&...

Возвращает:
* N*

# ::stappler::xenolith::Node::addChildNode(stappler::xenolith::Node*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Node*


# ::stappler::xenolith::Node::addChildNode(stappler::xenolith::Node*,stappler::xenolith::ZOrder)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Node*
* stappler::xenolith::ZOrder


# ::stappler::xenolith::Node::addChildNode(stappler::xenolith::Node*,stappler::xenolith::ZOrder,uint64_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Node*
* stappler::xenolith::ZOrder
* uint64_t


# ::stappler::xenolith::Node::getChildByTag(uint64_t) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint64_t

Возвращает:
* stappler::xenolith::Node*

# ::stappler::xenolith::Node::getChildren() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Vector<Rc<stappler::xenolith::Node>> const&

# ::stappler::xenolith::Node::getChildrenCount() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* ssize_t

# ::stappler::xenolith::Node::setParent(stappler::xenolith::Node*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Node*


# ::stappler::xenolith::Node::getParent() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::Node*

# ::stappler::xenolith::Node::removeFromParent(bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* bool


# ::stappler::xenolith::Node::removeChild(stappler::xenolith::Node*,bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Node*
* bool


# ::stappler::xenolith::Node::removeChildByTag(uint64_t,bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint64_t
* bool


# ::stappler::xenolith::Node::removeAllChildren(bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* bool


# ::stappler::xenolith::Node::reorderChild(stappler::xenolith::Node*,stappler::xenolith::ZOrder)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Node*
* stappler::xenolith::ZOrder


# ::stappler::xenolith::Node::sortAllChildren()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::Node::runAction<typename>(A*)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename A

Параметры:
* A*

Возвращает:
* A*

# ::stappler::xenolith::Node::runAction<typename>(A*,uint32_t)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename A

Параметры:
* A*
* uint32_t

Возвращает:
* A*

# ::stappler::xenolith::Node::runAction<typename>(Rc<A> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename A

Параметры:
* Rc<A> const&

Возвращает:
* A*

# ::stappler::xenolith::Node::runAction<typename>(Rc<A> const&,uint32_t)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename A

Параметры:
* Rc<A> const&
* uint32_t

Возвращает:
* A*

# ::stappler::xenolith::Node::runActionObject(stappler::xenolith::Action*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Action*


# ::stappler::xenolith::Node::runActionObject(stappler::xenolith::Action*,uint32_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Action*
* uint32_t


# ::stappler::xenolith::Node::stopAllActions()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::Node::stopAction(stappler::xenolith::Action*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Action*


# ::stappler::xenolith::Node::stopActionByTag(uint32_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint32_t


# ::stappler::xenolith::Node::stopAllActionsByTag(uint32_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint32_t


# ::stappler::xenolith::Node::getActionByTag(uint32_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint32_t

Возвращает:
* stappler::xenolith::Action*

# ::stappler::xenolith::Node::getNumberOfRunningActions() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* size_t

# ::stappler::xenolith::Node::addComponent<typename>(C*)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename C

Параметры:
* C*

Возвращает:
* C*

# ::stappler::xenolith::Node::addComponent<typename>(Rc<C> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename C

Параметры:
* Rc<C> const&

Возвращает:
* C*

# ::stappler::xenolith::Node::addComponentItem(stappler::xenolith::Component*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Component*

Возвращает:
* bool

# ::stappler::xenolith::Node::removeComponent(stappler::xenolith::Component*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Component*

Возвращает:
* bool

# ::stappler::xenolith::Node::removeComponentByTag(uint64_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint64_t

Возвращает:
* bool

# ::stappler::xenolith::Node::removeAllComponentByTag(uint64_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint64_t

Возвращает:
* bool

# ::stappler::xenolith::Node::removeAllComponents()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::Node::getComponentByType<typename>() const

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename T

Возвращает:
* T*

# ::stappler::xenolith::Node::getComponentByType<typename>(uint32_t) const

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename T

Параметры:
* uint32_t

Возвращает:
* T*

# ::stappler::xenolith::Node::addInputListener<typename>(C*)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename C

Параметры:
* C*

Возвращает:
* C*

# ::stappler::xenolith::Node::addInputListener<typename>(Rc<C> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename C

Параметры:
* Rc<C> const&

Возвращает:
* C*

# ::stappler::xenolith::Node::addInputListenerItem(stappler::xenolith::InputListener*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::InputListener*

Возвращает:
* bool

# ::stappler::xenolith::Node::removeInputListener(stappler::xenolith::InputListener*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::InputListener*

Возвращает:
* bool

# ::stappler::xenolith::Node::getName() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::StringView

# ::stappler::xenolith::Node::setName(stappler::StringView)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView


# ::stappler::xenolith::Node::getDataValue() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::mem_std::Value const&

# ::stappler::xenolith::Node::setDataValue(stappler::mem_std::Value&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::mem_std::Value&&


# ::stappler::xenolith::Node::getTag() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint64_t

# ::stappler::xenolith::Node::setTag(uint64_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint64_t


# ::stappler::xenolith::Node::isRunning() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::Node::onEnter(stappler::xenolith::Scene*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Scene*


# ::stappler::xenolith::Node::onExit()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::Node::onContentSizeDirty()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::Node::onTransformDirty(stappler::xenolith::Mat4 const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Mat4 const&


# ::stappler::xenolith::Node::onGlobalTransformDirty(stappler::xenolith::Mat4 const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Mat4 const&


# ::stappler::xenolith::Node::onReorderChildDirty()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::Node::cleanup()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::Node::getBoundingBox() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::Rect

# ::stappler::xenolith::Node::resume()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::Node::pause()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::Node::update(stappler::xenolith::UpdateTime const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::UpdateTime const&


# ::stappler::xenolith::Node::updateChildrenTransform()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::Node::getNodeToParentTransform() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::Mat4 const&

# ::stappler::xenolith::Node::setNodeToParentTransform(stappler::xenolith::Mat4 const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Mat4 const&


# ::stappler::xenolith::Node::getParentToNodeTransform() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::Mat4 const&

# ::stappler::xenolith::Node::getNodeToWorldTransform() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::Mat4

# ::stappler::xenolith::Node::getWorldToNodeTransform() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::Mat4

# ::stappler::xenolith::Node::convertToNodeSpace(stappler::xenolith::Vec2 const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Vec2 const&

Возвращает:
* stappler::xenolith::Vec2

# ::stappler::xenolith::Node::convertToWorldSpace(stappler::xenolith::Vec2 const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Vec2 const&

Возвращает:
* stappler::xenolith::Vec2

# ::stappler::xenolith::Node::convertToNodeSpaceAR(stappler::xenolith::Vec2 const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Vec2 const&

Возвращает:
* stappler::xenolith::Vec2

# ::stappler::xenolith::Node::convertToWorldSpaceAR(stappler::xenolith::Vec2 const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Vec2 const&

Возвращает:
* stappler::xenolith::Vec2

# ::stappler::xenolith::Node::isCascadeOpacityEnabled() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::Node::isCascadeColorEnabled() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::Node::setCascadeOpacityEnabled(bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* bool


# ::stappler::xenolith::Node::setCascadeColorEnabled(bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* bool


# ::stappler::xenolith::Node::getOpacity() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* float

# ::stappler::xenolith::Node::getDisplayedOpacity() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* float

# ::stappler::xenolith::Node::setOpacity(float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float


# ::stappler::xenolith::Node::setOpacity(stappler::xenolith::OpacityValue)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::OpacityValue


# ::stappler::xenolith::Node::updateDisplayedOpacity(float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float


# ::stappler::xenolith::Node::getColor() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::Color4F

# ::stappler::xenolith::Node::getDisplayedColor() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::Color4F

# ::stappler::xenolith::Node::setColor(stappler::xenolith::Color4F const&,bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Color4F const&
* bool


# ::stappler::xenolith::Node::updateDisplayedColor(stappler::xenolith::Color4F const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Color4F const&


# ::stappler::xenolith::Node::setOpacityModifyRGB(bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* bool


# ::stappler::xenolith::Node::isOpacityModifyRGB() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::Node::setDepthIndex(float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float


# ::stappler::xenolith::Node::getDepthIndex() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* float

# ::stappler::xenolith::Node::draw(stappler::xenolith::FrameInfo&,stappler::xenolith::NodeFlags)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::FrameInfo&
* stappler::xenolith::NodeFlags


# ::stappler::xenolith::Node::visitGeometry(stappler::xenolith::FrameInfo&,stappler::xenolith::NodeFlags)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::FrameInfo&
* stappler::xenolith::NodeFlags

Возвращает:
* bool

# ::stappler::xenolith::Node::visitDraw(stappler::xenolith::FrameInfo&,stappler::xenolith::NodeFlags)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::FrameInfo&
* stappler::xenolith::NodeFlags

Возвращает:
* bool

# ::stappler::xenolith::Node::scheduleUpdate()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::Node::unscheduleUpdate()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::Node::isTouched(stappler::xenolith::Vec2 const&,float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Vec2 const&
* float

Возвращает:
* bool

# ::stappler::xenolith::Node::isTouchedNodeSpace(stappler::xenolith::Vec2 const&,float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Vec2 const&
* float

Возвращает:
* bool

# ::stappler::xenolith::Node::setOnEnterCallback(Function<void (stappler::xenolith::Scene *)>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Function<void (stappler::xenolith::Scene *)>&&


# ::stappler::xenolith::Node::setOnExitCallback(Function<void ()>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Function<void ()>&&


# ::stappler::xenolith::Node::setOnContentSizeDirtyCallback(Function<void ()>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Function<void ()>&&


# ::stappler::xenolith::Node::setOnTransformDirtyCallback(Function<void (const stappler::xenolith::Mat4 &)>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Function<void (const stappler::xenolith::Mat4 &)>&&


# ::stappler::xenolith::Node::setOnReorderChildDirtyCallback(Function<void ()>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Function<void ()>&&


# ::stappler::xenolith::Node::getInputDensity() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* float

# ::stappler::xenolith::Node::getDirector() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::Director*

# ::stappler::xenolith::Node::getScheduler() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::Scheduler*

# ::stappler::xenolith::Node::getActionManager() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::ActionManager*

# ::stappler::xenolith::Node::getFrameContext() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::FrameContext*

# ::stappler::xenolith::Node::updateCascadeOpacity()

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::Node::disableCascadeOpacity()

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::Node::updateCascadeColor()

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::Node::disableCascadeColor()

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::Node::updateColor()

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::Node::transform(stappler::xenolith::Mat4 const&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::Mat4 const&

Возвращает:
* stappler::xenolith::Mat4

# ::stappler::xenolith::Node::processParentFlags(stappler::xenolith::FrameInfo&,stappler::xenolith::NodeFlags)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::FrameInfo&
* stappler::xenolith::NodeFlags

Возвращает:
* stappler::xenolith::NodeFlags

# ::stappler::xenolith::Node::visitSelf(stappler::xenolith::FrameInfo&,stappler::xenolith::NodeFlags,bool)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::FrameInfo&
* stappler::xenolith::NodeFlags
* bool


# ::stappler::xenolith::Node::_is3d

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::Node::_running

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::Node::_visible

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::Node::_scheduled

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::Node::_paused

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::Node::_cascadeColorEnabled

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::Node::_cascadeOpacityEnabled

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::Node::_contentSizeDirty

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::Node::_reorderChildDirty

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::Node::_transformCacheDirty

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::Node::_transformInverseDirty

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::Node::_transformDirty

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::Node::_name

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::mem_std::String


# ::stappler::xenolith::Node::_dataValue

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::mem_std::Value


# ::stappler::xenolith::Node::_tag

## BRIEF

## CONTENT

Доступ: protected

Тип: uint64_t


# ::stappler::xenolith::Node::_zOrder

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::ZOrder


# ::stappler::xenolith::Node::_skew

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::Vec2


# ::stappler::xenolith::Node::_anchorPoint

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::Vec2


# ::stappler::xenolith::Node::_contentSize

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::Size2


# ::stappler::xenolith::Node::_position

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::Vec3


# ::stappler::xenolith::Node::_scale

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::Vec3


# ::stappler::xenolith::Node::_rotation

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::Vec3


# ::stappler::xenolith::Node::_inputDensity

## BRIEF

## CONTENT

Доступ: protected

Тип: float


# ::stappler::xenolith::Node::_depthIndex

## BRIEF

## CONTENT

Доступ: protected

Тип: float


# ::stappler::xenolith::Node::_displayedColor

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::Color4F


# ::stappler::xenolith::Node::_realColor

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::Color4F


# ::stappler::xenolith::Node::_rotationQuat

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::Quaternion


# ::stappler::xenolith::Node::_transform

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::Mat4


# ::stappler::xenolith::Node::_inverse

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::Mat4


# ::stappler::xenolith::Node::_modelViewTransform

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::Mat4


# ::stappler::xenolith::Node::_children

## BRIEF

## CONTENT

Доступ: protected

Тип: Vector<Rc<stappler::xenolith::Node>>


# ::stappler::xenolith::Node::_parent

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::Node*


# ::stappler::xenolith::Node::_onEnterCallback

## BRIEF

## CONTENT

Доступ: protected

Тип: Function<void (stappler::xenolith::Scene *)>


# ::stappler::xenolith::Node::_onExitCallback

## BRIEF

## CONTENT

Доступ: protected

Тип: Function<void ()>


# ::stappler::xenolith::Node::_onContentSizeDirtyCallback

## BRIEF

## CONTENT

Доступ: protected

Тип: Function<void ()>


# ::stappler::xenolith::Node::_onTransformDirtyCallback

## BRIEF

## CONTENT

Доступ: protected

Тип: Function<void (const stappler::xenolith::Mat4 &)>


# ::stappler::xenolith::Node::_onReorderChildDirtyCallback

## BRIEF

## CONTENT

Доступ: protected

Тип: Function<void ()>


# ::stappler::xenolith::Node::_components

## BRIEF

## CONTENT

Доступ: protected

Тип: Vector<Rc<stappler::xenolith::Component>>


# ::stappler::xenolith::Node::_inputEvents

## BRIEF

## CONTENT

Доступ: protected

Тип: Vector<Rc<stappler::xenolith::InputListener>>


# ::stappler::xenolith::Node::_scene

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::Scene*


# ::stappler::xenolith::Node::_director

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::Director*


# ::stappler::xenolith::Node::_scheduler

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::Scheduler*


# ::stappler::xenolith::Node::_actionManager

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::ActionManager*


# ::stappler::xenolith::Node::_frameContext

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::FrameContext*


# ::stappler::xenolith::Node::getComponentByType<typename>() const

## BRIEF

## CONTENT

Параметры шаблона:
* typename T

Возвращает:
* T*

# ::stappler::xenolith::Node::getComponentByType<typename>(uint32_t) const

## BRIEF

## CONTENT

Параметры шаблона:
* typename T

Параметры:
* uint32_t

Возвращает:
* T*