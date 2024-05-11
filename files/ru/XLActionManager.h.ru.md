Title: XLActionManager.h


# XENOLITH_SCENE_ACTIONS_XLACTIONMANAGER_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::ActionContainer

## BRIEF

## CONTENT

Базовые классы:
* RefContainer<Action>


# ::stappler::xenolith::ActionContainer::target

## BRIEF

## CONTENT

Тип: Rc<stappler::xenolith::Node>


# ::stappler::xenolith::ActionContainer::paused

## BRIEF

## CONTENT

Тип: bool


# ::stappler::xenolith::ActionContainer::~ActionContainer()

## BRIEF

## CONTENT


# ::stappler::xenolith::ActionContainer::ActionContainer(stappler::xenolith::Node*)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::Node*


# ::stappler::xenolith::HashTraitActionContainer

## BRIEF

## CONTENT


# ::stappler::xenolith::HashTraitActionContainer::hash(uint32_t,stappler::xenolith::ActionContainer const&)

## BRIEF

## CONTENT

Параметры:
* uint32_t
* stappler::xenolith::ActionContainer const&

Возвращает:
* uint32_t

# ::stappler::xenolith::HashTraitActionContainer::hash(uint32_t,stappler::xenolith::Node const*)

## BRIEF

## CONTENT

Параметры:
* uint32_t
* stappler::xenolith::Node const*

Возвращает:
* uint32_t

# ::stappler::xenolith::HashTraitActionContainer::equal(stappler::xenolith::ActionContainer const&,stappler::xenolith::ActionContainer const&)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::ActionContainer const&
* stappler::xenolith::ActionContainer const&

Возвращает:
* bool

# ::stappler::xenolith::HashTraitActionContainer::equal(stappler::xenolith::ActionContainer const&,stappler::xenolith::Node const*)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::ActionContainer const&
* stappler::xenolith::Node const*

Возвращает:
* bool

# ::stappler::HashTraitDiscovery<xenolith::ActionContainer>::HashTraitDiscovery<xenolith::ActionContainer>

## BRIEF

## CONTENT


# ::stappler::HashTraitDiscovery<xenolith::ActionContainer>::type

## BRIEF

## CONTENT


# ::stappler::xenolith::ActionManager

## BRIEF

## CONTENT

Базовые классы:
* Ref


# ::stappler::xenolith::ActionManager::~ActionManager()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::ActionManager::ActionManager()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::ActionManager::init()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::ActionManager::addAction(stappler::xenolith::Action*,stappler::xenolith::Node*,bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Action*
* stappler::xenolith::Node*
* bool


# ::stappler::xenolith::ActionManager::removeAllActions()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::ActionManager::removeAllActionsFromTarget(stappler::xenolith::Node*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Node*


# ::stappler::xenolith::ActionManager::removeAction(stappler::xenolith::Action*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Action*


# ::stappler::xenolith::ActionManager::removeActionByTag(uint32_t,stappler::xenolith::Node*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint32_t
* stappler::xenolith::Node*


# ::stappler::xenolith::ActionManager::removeAllActionsByTag(uint32_t,stappler::xenolith::Node*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint32_t
* stappler::xenolith::Node*


# ::stappler::xenolith::ActionManager::getActionByTag(uint32_t,stappler::xenolith::Node const*) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint32_t
* stappler::xenolith::Node const*

Возвращает:
* stappler::xenolith::Action*

# ::stappler::xenolith::ActionManager::getNumberOfRunningActionsInTarget(stappler::xenolith::Node const*) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Node const*

Возвращает:
* size_t

# ::stappler::xenolith::ActionManager::pauseTarget(stappler::xenolith::Node*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Node*


# ::stappler::xenolith::ActionManager::resumeTarget(stappler::xenolith::Node*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Node*


# ::stappler::xenolith::ActionManager::pauseAllRunningActions()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Vector<stappler::xenolith::Node *>

# ::stappler::xenolith::ActionManager::resumeTargets(Vector<stappler::xenolith::Node *> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Vector<stappler::xenolith::Node *> const&


# ::stappler::xenolith::ActionManager::update(stappler::xenolith::UpdateTime const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::UpdateTime const&


# ::stappler::xenolith::ActionManager::empty() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::ActionManager::PendingAction

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::ActionManager::PendingAction::action

## BRIEF

## CONTENT

Тип: Rc<stappler::xenolith::Action>


# ::stappler::xenolith::ActionManager::PendingAction::target

## BRIEF

## CONTENT

Тип: Rc<stappler::xenolith::Node>


# ::stappler::xenolith::ActionManager::PendingAction::paused

## BRIEF

## CONTENT

Тип: bool


# ::stappler::xenolith::ActionManager::_inUpdate

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::ActionManager::_current

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::ActionContainer*


# ::stappler::xenolith::ActionManager::_actions

## BRIEF

## CONTENT

Доступ: protected

Тип: HashTable<stappler::xenolith::ActionContainer>


# ::stappler::xenolith::ActionManager::_pending

## BRIEF

## CONTENT

Доступ: protected

Тип: Vector<stappler::xenolith::ActionManager::PendingAction>
