Title: XLActionManager.h


# XENOLITH_SCENE_ACTIONS_XLACTIONMANAGER_H_

## BRIEF

Заголовок объекта управления действиями

## CONTENT

Заголовок объекта управления действиями


# ::stappler::xenolith::ActionContainer

## BRIEF

Контейнер для хранения действия и параметров

## CONTENT

Контейнер для хранения действия и параметров

Базовые классы:
* RefContainer<Action>


# ::stappler::xenolith::ActionContainer::target

## BRIEF

Целевой объект

## CONTENT

Целевой объект

Тип: Rc<stappler::xenolith::Node>


# ::stappler::xenolith::ActionContainer::paused

## BRIEF

Флаг временной остановки

## CONTENT

Флаг временной остановки

Тип: bool


# ::stappler::xenolith::ActionContainer::~ActionContainer()

## BRIEF

Деструктор

## CONTENT

Деструктор

# ::stappler::xenolith::ActionContainer::ActionContainer(stappler::xenolith::Node*)

## BRIEF

Создаёт контейнер

## CONTENT

Создаёт контейнер

Параметры:
* stappler::xenolith::Node*


# ::stappler::xenolith::HashTraitActionContainer

## BRIEF

Параметры вычисления хеша для контейнера

## CONTENT

Параметры вычисления хеша для контейнера

# ::stappler::xenolith::HashTraitActionContainer::hash(uint32_t,stappler::xenolith::ActionContainer const&)

## BRIEF

Вычисляет хеш

## CONTENT

Вычисляет хеш

Параметры:
* uint32_t
* stappler::xenolith::ActionContainer const&

Возвращает:
* uint32_t

# ::stappler::xenolith::HashTraitActionContainer::hash(uint32_t,stappler::xenolith::Node const*)

## BRIEF

Вычисляет хеш

## CONTENT

Вычисляет хеш

Параметры:
* uint32_t
* stappler::xenolith::Node const*

Возвращает:
* uint32_t

# ::stappler::xenolith::HashTraitActionContainer::equal(stappler::xenolith::ActionContainer const&,stappler::xenolith::ActionContainer const&)

## BRIEF

Проверяет объекты на равенство

## CONTENT

Проверяет объекты на равенство

Параметры:
* stappler::xenolith::ActionContainer const&
* stappler::xenolith::ActionContainer const&

Возвращает:
* bool

# ::stappler::xenolith::HashTraitActionContainer::equal(stappler::xenolith::ActionContainer const&,stappler::xenolith::Node const*)

## BRIEF

Проверяет объекты на равенство

## CONTENT

Проверяет объекты на равенство

Параметры:
* stappler::xenolith::ActionContainer const&
* stappler::xenolith::Node const*

Возвращает:
* bool

# ::stappler::HashTraitDiscovery<xenolith::ActionContainer>::HashTraitDiscovery<xenolith::ActionContainer>

## BRIEF

Интерфейс поиска хеша для типа

## CONTENT

Интерфейс поиска хеша для типа


# ::stappler::HashTraitDiscovery<xenolith::ActionContainer>::type

## BRIEF

Искомый тип

## CONTENT

Искомый тип

# ::stappler::xenolith::ActionManager

## BRIEF

Тип управления действиями

## CONTENT

Тип управления действиями

Базовые классы:
* Ref


# ::stappler::xenolith::ActionManager::~ActionManager()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор

# ::stappler::xenolith::ActionManager::ActionManager()

## BRIEF

Конструктор

## CONTENT

Доступ: public

Конструктор


# ::stappler::xenolith::ActionManager::init()

## BRIEF

Инициализирует управляющий объект

## CONTENT

Доступ: public

Инициализирует управляющий объект

Возвращает:
* bool

# ::stappler::xenolith::ActionManager::addAction(stappler::xenolith::Action*,stappler::xenolith::Node*,bool)

## BRIEF

Добавляет действие

## CONTENT

Доступ: public

Добавляет действие

Параметры:
* stappler::xenolith::Action*
* stappler::xenolith::Node*
* bool


# ::stappler::xenolith::ActionManager::removeAllActions()

## BRIEF

Удаляет все активные действия

## CONTENT

Доступ: public

Удаляет все активные действия


# ::stappler::xenolith::ActionManager::removeAllActionsFromTarget(stappler::xenolith::Node*)

## BRIEF

Удаляет все действия для целевого объекта

## CONTENT

Доступ: public

Удаляет все действия для целевого объекта

Параметры:
* stappler::xenolith::Node*


# ::stappler::xenolith::ActionManager::removeAction(stappler::xenolith::Action*)

## BRIEF

Удаляет действие

## CONTENT

Доступ: public

Удаляет действие

Параметры:
* stappler::xenolith::Action*


# ::stappler::xenolith::ActionManager::removeActionByTag(uint32_t,stappler::xenolith::Node*)

## BRIEF

Удаляет одиночное действие по тегу

## CONTENT

Доступ: public

Удаляет одиночное действие по тегу

Параметры:
* uint32_t
* stappler::xenolith::Node*


# ::stappler::xenolith::ActionManager::removeAllActionsByTag(uint32_t,stappler::xenolith::Node*)

## BRIEF

Удаляет все действия по тегу

## CONTENT

Доступ: public

Удаляет все действия по тегу

Параметры:
* uint32_t
* stappler::xenolith::Node*


# ::stappler::xenolith::ActionManager::getActionByTag(uint32_t,stappler::xenolith::Node const*) const

## BRIEF

Получает действие по тегу

## CONTENT

Доступ: public

Получает действие по тегу

Параметры:
* uint32_t
* stappler::xenolith::Node const*

Возвращает:
* stappler::xenolith::Action*

# ::stappler::xenolith::ActionManager::getNumberOfRunningActionsInTarget(stappler::xenolith::Node const*) const

## BRIEF

Возвращает число запущенных действий для цели

## CONTENT

Доступ: public

Возвращает число запущенных действий для цели

Параметры:
* stappler::xenolith::Node const*

Возвращает:
* size_t

# ::stappler::xenolith::ActionManager::pauseTarget(stappler::xenolith::Node*)

## BRIEF

Приостанавливает действия для цели

## CONTENT

Доступ: public

Приостанавливает действия для цели

Параметры:
* stappler::xenolith::Node*


# ::stappler::xenolith::ActionManager::resumeTarget(stappler::xenolith::Node*)

## BRIEF

Возобновляет действия для цели

## CONTENT

Доступ: public

Возобновляет действия для цели

Параметры:
* stappler::xenolith::Node*


# ::stappler::xenolith::ActionManager::pauseAllRunningActions()

## BRIEF

Приостанавоивает все действия

## CONTENT

Доступ: public

Приостанавоивает все действия

Возвращает:
* Vector<stappler::xenolith::Node *> - набор активных целей

# ::stappler::xenolith::ActionManager::resumeTargets(Vector<stappler::xenolith::Node *> const&)

## BRIEF

Возобновляет действия для целей

## CONTENT

Доступ: public

Возобновляет действия для целей

Параметры:
* Vector<stappler::xenolith::Node *> const& - набор целей


# ::stappler::xenolith::ActionManager::update(stappler::xenolith::UpdateTime const&)

## BRIEF

Обновляет объект, выполняет действия

## CONTENT

Доступ: public

Обновляет объект, выполняет действия

Параметры:
* stappler::xenolith::UpdateTime const&


# ::stappler::xenolith::ActionManager::empty() const

## BRIEF

Проверяет объект на пустоту

## CONTENT

Доступ: public

Проверяет объект на пустоту

Возвращает:
* bool

# ::stappler::xenolith::ActionManager::PendingAction

## BRIEF

Структура ожидающего действия

## CONTENT

Доступ: protected

Структура ожидающего действия. Хранит действие до запуска объекта, потом запускает его


# ::stappler::xenolith::ActionManager::PendingAction::action

## BRIEF

Действие

## CONTENT

Действие

Тип: Rc<stappler::xenolith::Action>


# ::stappler::xenolith::ActionManager::PendingAction::target

## BRIEF

Цель действия

## CONTENT

Цель действия

Тип: Rc<stappler::xenolith::Node>


# ::stappler::xenolith::ActionManager::PendingAction::paused

## BRIEF

Флаг приостановки

## CONTENT

Флаг приостановки

Тип: bool


# ::stappler::xenolith::ActionManager::_inUpdate

## BRIEF

Индикатор текущего обновления

## CONTENT

Доступ: protected

Индикатор текущего обновления

Тип: bool


# ::stappler::xenolith::ActionManager::_current

## BRIEF

Текущее действие в обновлении

## CONTENT

Доступ: protected

Текущее действие в обновлении

Тип: stappler::xenolith::ActionContainer*


# ::stappler::xenolith::ActionManager::_actions

## BRIEF

Активные действия

## CONTENT

Доступ: protected

Активные действия

Тип: HashTable<stappler::xenolith::ActionContainer>


# ::stappler::xenolith::ActionManager::_pending

## BRIEF

Действия, ожидающие добавления

## CONTENT

Доступ: protected

Действия, ожидающие добавления

Тип: Vector<stappler::xenolith::ActionManager::PendingAction>
