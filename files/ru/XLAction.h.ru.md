Title: XLAction.h


# XENOLITH_SCENE_ACTIONS_XLACTION_H_

## BRIEF

Заголовок типов действий

## CONTENT

Заголовок типов действий. Действия - минимальные примитивы для реализации анимаций. Как правило, действия интерполируют некоторый параметр объекта во времени.


# ::stappler::xenolith::Action

## BRIEF

Базовый тип действия

## CONTENT

Базовый тип действия

Базовые классы:
* Ref


# ::stappler::xenolith::Action::INVALID_TAG

## BRIEF

Константа неназначенного тега

## CONTENT

Доступ: public

Константа неназначенного тега

Тип: uint32_t const


# ::stappler::xenolith::Action::~Action()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор

# ::stappler::xenolith::Action::Action()

## BRIEF

Конструктор

## CONTENT

Доступ: public

Конструктор


# ::stappler::xenolith::Action::isDone() const

## BRIEF

Проверяет, завершено ли действие

## CONTENT

Доступ: public

Проверяет, завершено ли действие

Возвращает:
* bool

# ::stappler::xenolith::Action::invalidate()

## BRIEF

Завершает действие с ошибкой

## CONTENT

Доступ: public

Завершает действие с ошибкой


# ::stappler::xenolith::Action::stop()

## BRIEF

Останавливает действие

## CONTENT

Доступ: public

Останавливает действие


# ::stappler::xenolith::Action::step(float)

## BRIEF

Выполняет сегмент действия

## CONTENT

Доступ: public

Выполняет сегмент действия

Параметры:
* float - сегмент в секундах


# ::stappler::xenolith::Action::update(float)

## BRIEF

Выполняет интерполяцию параметры

## CONTENT

Доступ: public

Выполняет интерполяцию параметры

Параметры:
* float - параметр от 0 до 1


# ::stappler::xenolith::Action::getContainer() const

## BRIEF

Возвращает объект, владеющий действием

## CONTENT

Доступ: public

Возвращает объект, владеющий действием

Возвращает:
* stappler::xenolith::Node*

# ::stappler::xenolith::Action::getTarget() const

## BRIEF

Возвращает целевой объект действия

## CONTENT

Доступ: public

Возвращает целевой объект действия

Возвращает:
* stappler::xenolith::Node*

# ::stappler::xenolith::Action::getTag() const

## BRIEF

Возвращает тег

## CONTENT

Доступ: public

Возвращает тег

Возвращает:
* uint32_t

# ::stappler::xenolith::Action::setTag(uint32_t)

## BRIEF

Устанавливает тег

## CONTENT

Доступ: public

Устанавливает тег

Параметры:
* uint32_t


# ::stappler::xenolith::Action::getDuration() const

## BRIEF

Возвращает длительность действия

## CONTENT

Доступ: public

Возвращает длительность действия

Возвращает:
* float

# ::stappler::xenolith::Action::setDuration(float)

## BRIEF

Устанавливает длительность действия

## CONTENT

Доступ: public

Устанавливает длительность действия

Параметры:
* float


# ::stappler::xenolith::Action::startWithTarget(stappler::xenolith::Node*)

## BRIEF

Начинает действие для объекта

## CONTENT

Доступ: public

Начинает действие для объекта

Параметры:
* stappler::xenolith::Node*


# ::stappler::xenolith::Action::setContainer(stappler::xenolith::Node*)

## BRIEF

Назначает базовый объект для действия

## CONTENT

Доступ: protected

Назначает базовый объект для действия

Параметры:
* stappler::xenolith::Node*


# ::stappler::xenolith::Action::setTarget(stappler::xenolith::Node*)

## BRIEF

Устанавливает цель для действия

## CONTENT

Доступ: protected

Устанавливает цель для действия

Параметры:
* stappler::xenolith::Node*


# ::stappler::xenolith::Action::_container

## BRIEF

Объект, содержащий действие

## CONTENT

Доступ: protected

Объект, содержащий действие

Тип: stappler::xenolith::Node*


# ::stappler::xenolith::Action::_target

## BRIEF

Цель действия

## CONTENT

Доступ: protected

Цель действия

Тип: Rc<stappler::xenolith::Node>


# ::stappler::xenolith::Action::_tag

## BRIEF

Тег

## CONTENT

Доступ: protected

Тег

Тип: uint32_t


# ::stappler::xenolith::Action::_duration

## BRIEF

Длительность действия

## CONTENT

Доступ: protected

Длительность действия

Тип: float


# ::stappler::xenolith::ActionInstant

## BRIEF

Базовый тип для действий, выполняемых мгновенно

## CONTENT

Базовый тип для действий, выполняемых мгновенно

Базовые классы:
* Action


# ::stappler::xenolith::ActionInstant::~ActionInstant()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор


# ::stappler::xenolith::ActionInstant::init(bool)

## BRIEF

Создаёт действие

## CONTENT

Доступ: public

Создаёт действие

Параметры:
* bool - true если запустить действие можно лишь единожды

Возвращает:
* bool

# ::stappler::xenolith::ActionInstant::step(float)

## BRIEF

Запускает сегмент действия

## CONTENT

Доступ: public

Запускает сегмент действия

Параметры:
* float


# ::stappler::xenolith::ActionInstant::_runOnce

## BRIEF

Флаг запуска единожды

## CONTENT

Доступ: protected

Флаг запуска единожды

Тип: bool


# ::stappler::xenolith::ActionInstant::_performed

## BRIEF

Флаг выполнения

## CONTENT

Доступ: protected

Флаг выполнения

Тип: bool


# ::stappler::xenolith::Show

## BRIEF

Действие: изменяет видимость объекта, показывает его

## CONTENT

Действие: изменяет видимость объекта, показывает его

Базовые классы:
* ActionInstant


# ::stappler::xenolith::Show::~Show()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор


# ::stappler::xenolith::Show::update(float)

## BRIEF

Функция интерполяции

## CONTENT

Доступ: public

Функция интерполяции

Параметры:
* float


# ::stappler::xenolith::Hide

## BRIEF

Действие: изменяет видимость объекта, скрывает его

## CONTENT

Действие: изменяет видимость объекта, скрывает его

Базовые классы:
* ActionInstant


# ::stappler::xenolith::Hide::~Hide()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор


# ::stappler::xenolith::Hide::update(float)

## BRIEF

Функция интерполяции

## CONTENT

Доступ: public

Функция интерполяции

Параметры:
* float


# ::stappler::xenolith::ToggleVisibility

## BRIEF

Действие: переключает видимость объекта

## CONTENT

Действие: переключает видимость объекта

Базовые классы:
* ActionInstant


# ::stappler::xenolith::ToggleVisibility::~ToggleVisibility()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор


# ::stappler::xenolith::ToggleVisibility::update(float)

## BRIEF

Функция интерполяции

## CONTENT

Доступ: public

Функция интерполяции

Параметры:
* float


# ::stappler::xenolith::RemoveSelf

## BRIEF

Действие: удаляет объект

## CONTENT

Действие: удаляет объект

Базовые классы:
* ActionInstant


# ::stappler::xenolith::RemoveSelf::~RemoveSelf()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор


# ::stappler::xenolith::RemoveSelf::init(bool,bool)

## BRIEF

Создаёт действие

## CONTENT

Доступ: public

Создаёт действие

Параметры:
* bool - флаг требования очистки
* bool - флаг единственности выполнения

Возвращает:
* bool

# ::stappler::xenolith::RemoveSelf::update(float)

## BRIEF

Функция интерполяции

## CONTENT

Доступ: public

Функция интерполяции

Параметры:
* float


# ::stappler::xenolith::RemoveSelf::_isNeedCleanUp

## BRIEF

Флаг необходимости очистки

## CONTENT

Доступ: protected

Флаг необходимости очистки

Тип: bool


# ::stappler::xenolith::Place

## BRIEF

Действие: перемещает объект на позицию

## CONTENT

Действие: перемещает объект на позицию

Базовые классы:
* ActionInstant


# ::stappler::xenolith::Place::~Place()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор


# ::stappler::xenolith::Place::init(const stappler::geom::Vec2&,bool)

## BRIEF

Создаёт действие

## CONTENT

Доступ: public

Создаёт действие

Параметры:
* const stappler::geom::Vec2& - позиция
* bool - флаг единственного вызова

Возвращает:
* bool

# ::stappler::xenolith::Place::update(float)

## BRIEF

Функция интерполяции

## CONTENT

Доступ: public

Функция интерполяции

Параметры:
* float


# ::stappler::xenolith::Place::_position

## BRIEF

Позиция для перемещения

## CONTENT

Доступ: protected

Позиция для перемещения

Тип: stappler::geom::Vec2


# ::stappler::xenolith::CallFunc

## BRIEF

Действие: вызывает функцию

## CONTENT

Действие: вызывает функцию

Базовые классы:
* ActionInstant


# ::stappler::xenolith::CallFunc::~CallFunc()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор


# ::stappler::xenolith::CallFunc::init(Function<void ()>&&,bool)

## BRIEF

Создаёт действие

## CONTENT

Доступ: public

Создаёт действие

Параметры:
* Function<void ()>&& - функция для вызова
* bool - флаг единственного вызова

Возвращает:
* bool

# ::stappler::xenolith::CallFunc::update(float)

## BRIEF

Функция интерполяции

## CONTENT

Доступ: public

Функция интерполяции

Параметры:
* float


# ::stappler::xenolith::CallFunc::_callback

## BRIEF

Функция для вызова

## CONTENT

Доступ: protected

Функция для вызова

Тип: Function<void ()>


# ::stappler::xenolith::ActionInterval

## BRIEF

Базовый тип для действия с длительностью

## CONTENT

Базовый тип для действия с длительностью

Базовые классы:
* Action


# ::stappler::xenolith::ActionInterval::~ActionInterval()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор


# ::stappler::xenolith::ActionInterval::init(float)

## BRIEF

Создаёт действие

## CONTENT

Доступ: public

Создаёт действие

Параметры:
* float - длительность

Возвращает:
* bool

# ::stappler::xenolith::ActionInterval::getElapsed()

## BRIEF

Возвращает долю прошедшего действия

## CONTENT

Доступ: public

Возвращает долю прошедшего действия

Возвращает:
* float

# ::stappler::xenolith::ActionInterval::stop()

## BRIEF

Останавливает действие

## CONTENT

Доступ: public

Останавливает действие


# ::stappler::xenolith::ActionInterval::isDone() const

## BRIEF

Проверяет, завершено ли действие

## CONTENT

Доступ: public

Проверяет, завершено ли действие

Возвращает:
* bool

# ::stappler::xenolith::ActionInterval::step(float)

## BRIEF

Выполняет сегмент действия

## CONTENT

Доступ: public

Выполняет сегмент действия

Параметры:
* float


# ::stappler::xenolith::ActionInterval::setDuration(float)

## BRIEF

Устанавливает длительность действия

## CONTENT

Доступ: public

Устанавливает длительность действия

Параметры:
* float


# ::stappler::xenolith::ActionInterval::startWithTarget(stappler::xenolith::Node*)

## BRIEF

Запускает действие для цели

## CONTENT

Доступ: public

Запускает действие для цели

Параметры:
* stappler::xenolith::Node*


# ::stappler::xenolith::ActionInterval::_elapsed

## BRIEF

Доля прошедшего действия

## CONTENT

Доступ: protected

Доля прошедшего действия

Тип: float


# ::stappler::xenolith::ActionInterval::_firstTick

## BRIEF

Флаг начального вызова

## CONTENT

Доступ: protected

Флаг начального вызова

Тип: bool


# ::stappler::xenolith::Speed

## BRIEF

Действие изменения скорости действия

## CONTENT

Действие изменения скорости действия

Базовые классы:
* Action


# ::stappler::xenolith::Speed::~Speed()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор


# ::stappler::xenolith::Speed::Speed()

## BRIEF

Конструктор

## CONTENT

Доступ: public

Конструктор


# ::stappler::xenolith::Speed::init(Rc<stappler::xenolith::ActionInterval>&&,float)

## BRIEF

Создаёт действие

## CONTENT

Доступ: public

Создаёт действие

Параметры:
* Rc<stappler::xenolith::ActionInterval>&& - базовое действие
* float - параметр ускорения или замедления

Возвращает:
* bool

# ::stappler::xenolith::Speed::getSpeed() const

## BRIEF

Возвращает параметр

## CONTENT

Доступ: public

Возвращает параметр

Возвращает:
* float

# ::stappler::xenolith::Speed::setSpeed(float)

## BRIEF

Устанавливает параметр

## CONTENT

Доступ: public

Устанавливает параметр

Параметры:
* float


# ::stappler::xenolith::Speed::getInnerAction() const

## BRIEF

Возвращает базовое действие

## CONTENT

Доступ: public

Возвращает базовое действие

Возвращает:
* stappler::xenolith::ActionInterval*

# ::stappler::xenolith::Speed::setInnerAction(Rc<stappler::xenolith::ActionInterval>&&)

## BRIEF

Устанавливает базовое действие

## CONTENT

Доступ: public

Устанавливает базовое действие

Параметры:
* Rc<stappler::xenolith::ActionInterval>&&


# ::stappler::xenolith::Speed::stop()

## BRIEF

Останавливает действие

## CONTENT

Доступ: public

Останавливает действие


# ::stappler::xenolith::Speed::step(float)

## BRIEF

Выполняет сегмент действия

## CONTENT

Доступ: public

Выполняет сегмент действия

Параметры:
* float


# ::stappler::xenolith::Speed::isDone() const

## BRIEF

Проверяет, завершено ли действие

## CONTENT

Доступ: public

Проверяет, завершено ли действие

Возвращает:
* bool

# ::stappler::xenolith::Speed::startWithTarget(stappler::xenolith::Node*)

## BRIEF

Запускает действие

## CONTENT

Доступ: public

Запускает действие

Параметры:
* stappler::xenolith::Node*


# ::stappler::xenolith::Speed::_speed

## BRIEF

Параметр изменения скорости

## CONTENT

Доступ: protected

Параметр изменения скорости

Тип: float


# ::stappler::xenolith::Speed::_innerAction

## BRIEF

Базовое действие

## CONTENT

Доступ: protected

Базовое действие

Тип: Rc<stappler::xenolith::ActionInterval>


# ::stappler::xenolith::Sequence

## BRIEF

Тип последовательности действий

## CONTENT

Тип последовательности действий

Последовательность стабильно работает только по направлению вперёд.

Базовые классы:
* ActionInterval


# ::stappler::xenolith::Sequence::~Sequence()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор

# ::stappler::xenolith::Sequence::init<typename>(Args &&...)

## BRIEF

Создаёт последовательность действий

## CONTENT

Доступ: public

Создаёт последовательность действий

В аргументах допустимо использовать другие действия, время ожидания в виде float, функции для вызова в виде лямбда-функций.

Параметры шаблона:
* typename Args

Параметры:
* Args &&...

Возвращает:
* bool

# ::stappler::xenolith::Sequence::stop()

## BRIEF

Останавливает действие

## CONTENT

Доступ: public

Останавливает действие


# ::stappler::xenolith::Sequence::update(float)

## BRIEF

Функция интерполяции

## CONTENT

Доступ: public

Функция интерполяции

Параметры:
* float


# ::stappler::xenolith::Sequence::startWithTarget(stappler::xenolith::Node*)

## BRIEF

Запускает действие

## CONTENT

Доступ: public

Запускает действие

Параметры:
* stappler::xenolith::Node*


# ::stappler::xenolith::Sequence::reserve(size_t)

## BRIEF

Резервирует место под несколько вложенных действий

## CONTENT

Доступ: protected

Резервирует место под несколько вложенных действий

Параметры:
* size_t

Возвращает:
* bool

# ::stappler::xenolith::Sequence::addAction(Function<void ()>&&)

## BRIEF

Добавляет действие в виде функции вызова

## CONTENT

Доступ: protected

Добавляет действие в виде функции вызова

Параметры:
* Function<void ()>&&

Возвращает:
* bool

# ::stappler::xenolith::Sequence::addAction(float)

## BRIEF

Добавляет время ожидания

## CONTENT

Добавляет время ожидания

Доступ: protected

Параметры:
* float

Возвращает:
* bool

# ::stappler::xenolith::Sequence::addAction(stappler::TimeInterval)

## BRIEF

Добавляет время одижания

## CONTENT

Доступ: protected

Добавляет время одижания

Параметры:
* stappler::TimeInterval

Возвращает:
* bool

# ::stappler::xenolith::Sequence::addAction<typename>(Rc<T> const&)

## BRIEF

Добавляет действие

## CONTENT

Доступ: protected

Добавляет действие

Параметры шаблона:
* typename T

Параметры:
* Rc<T> const&

Возвращает:
* bool

# ::stappler::xenolith::Sequence::addAction(stappler::xenolith::Action*)

## BRIEF

Добавляет действие

## CONTENT

Доступ: protected

Добавляет действие

Параметры:
* stappler::xenolith::Action*

Возвращает:
* bool

# ::stappler::xenolith::Sequence::initWithActions<typename,typename>(T&&,Args &&...)

## BRIEF

Создаёт последовательность

## CONTENT

Доступ: protected

Создаёт последовательность

Параметры шаблона:
* typename T
* typename Args

Параметры:
* T&&
* Args &&...

Возвращает:
* bool

# ::stappler::xenolith::Sequence::initWithActions<typename>(T&&)

## BRIEF

Создаёт последовательность

## CONTENT

Доступ: protected

Создаёт последовательность

Параметры шаблона:
* typename T

Параметры:
* T&&

Возвращает:
* bool

# ::stappler::xenolith::Sequence::ActionData

## BRIEF

Данные вложенного действия

## CONTENT

Доступ: protected

Данные вложенного действия


# ::stappler::xenolith::Sequence::ActionData::action

## BRIEF

Действие

## CONTENT

Действие

Тип: Rc<stappler::xenolith::Action>


# ::stappler::xenolith::Sequence::ActionData::minThreshold

## BRIEF

Предел начала действия во времени в единицах интерполяции

## CONTENT

Предел начала действия во времени в единицах интерполяции

Тип: float


# ::stappler::xenolith::Sequence::ActionData::maxThreshold

## BRIEF

Предел конца действия во времени в единицах интерполяции

## CONTENT

Предел конца действия во времени в единицах интерполяции

Тип: float


# ::stappler::xenolith::Sequence::ActionData::threshold

## BRIEF

Длительность в единицах интерполяции

## CONTENT

Длительность в единицах интерполяции

Тип: float


# ::stappler::xenolith::Sequence::_actions

## BRIEF

Вложенные действия

## CONTENT

Доступ: protected

Вложенные действия

Тип: Vector<stappler::xenolith::Sequence::ActionData>


# ::stappler::xenolith::Sequence::_prevTime

## BRIEF

Время предыдущего обновления

## CONTENT

Доступ: protected

Время предыдущего обновления

Тип: float


# ::stappler::xenolith::Sequence::_currentIdx

## BRIEF

Индекс текущего действия

## CONTENT

Доступ: protected

Индекс текущего действия

Тип: uint32_t


# ::stappler::xenolith::Spawn

## BRIEF

Действие, совмещающее несколько действий

## CONTENT

Действие, совмещающее несколько действий

Базовые классы:
* ActionInterval


# ::stappler::xenolith::Spawn::~Spawn()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор

# ::stappler::xenolith::Spawn::init<typename>(Args &&...)

## BRIEF

Создаёт действие из набора

## CONTENT

Доступ: public

Создаёт действие из набора

Параметры шаблона:
* typename Args

Параметры:
* Args &&...

Возвращает:
* bool

# ::stappler::xenolith::Spawn::stop()

## BRIEF

Останавливает действие

## CONTENT

Доступ: public

Останавливает действие

# ::stappler::xenolith::Spawn::update(float)

## BRIEF

Функция интерполяции

## CONTENT

Доступ: public

Функция интерполяции

Параметры:
* float


# ::stappler::xenolith::Spawn::startWithTarget(stappler::xenolith::Node*)

## BRIEF

Запускает действие

## CONTENT

Доступ: public

Запускает действие

Параметры:
* stappler::xenolith::Node*


# ::stappler::xenolith::Spawn::reserve(size_t)

## BRIEF

Резервирует место под действия

## CONTENT

Доступ: protected

Резервирует место под действия

Параметры:
* size_t

Возвращает:
* bool

# ::stappler::xenolith::Spawn::addAction(Function<void ()>&&)

## BRIEF

Добавляет действие

## CONTENT

Доступ: protected

Добавляет действие

Параметры:
* Function<void ()>&&

Возвращает:
* bool

# ::stappler::xenolith::Spawn::addAction(float)

## BRIEF

Добавляет действие

## CONTENT

Доступ: protected

Добавляет действие

Параметры:
* float

Возвращает:
* bool

# ::stappler::xenolith::Spawn::addAction<typename>(Rc<T> const&)

## BRIEF

Добавляет действие

## CONTENT

Доступ: protected

Добавляет действие

Параметры шаблона:
* typename T

Параметры:
* Rc<T> const&

Возвращает:
* bool

# ::stappler::xenolith::Spawn::addAction(stappler::xenolith::Action*)

## BRIEF

Добавляет действие

## CONTENT

Доступ: protected

Добавляет действие

Параметры:
* stappler::xenolith::Action*

Возвращает:
* bool

# ::stappler::xenolith::Spawn::initWithActions<typename,typename>(T&&,Args &&...)

## BRIEF

Создаёт действие

## CONTENT

Доступ: protected

Создаёт действие

Параметры шаблона:
* typename T
* typename Args

Параметры:
* T&&
* Args &&...

Возвращает:
* bool

# ::stappler::xenolith::Spawn::initWithActions<typename>(T&&)

## BRIEF

Создаёт действие

## CONTENT

Доступ: protected

Создаёт действие

Параметры шаблона:
* typename T

Параметры:
* T&&

Возвращает:
* bool

# ::stappler::xenolith::Spawn::ActionData

## BRIEF

Данные вложенного действия

## CONTENT

Доступ: protected

Данные вложенного действия

# ::stappler::xenolith::Spawn::ActionData::action

## BRIEF

Действие

## CONTENT

Действие

Тип: Rc<stappler::xenolith::Action>


# ::stappler::xenolith::Spawn::ActionData::threshold

## BRIEF

Длительность в единицах интерполяции

## CONTENT

Длительность в единицах интерполяции

Тип: float


# ::stappler::xenolith::Spawn::_actions

## BRIEF

Вложенные действия

## CONTENT

Доступ: protected

Вложенные действия

Тип: Vector<stappler::xenolith::Spawn::ActionData>


# ::stappler::xenolith::Spawn::_prevTime

## BRIEF

Время предыдущего обновления

## CONTENT

Доступ: protected

Время предыдущего обновления

Тип: float


# ::stappler::xenolith::Spawn::_currentIdx

## BRIEF

Индекс текущего активного действия

## CONTENT

Доступ: protected

Индекс текущего активного действия

Тип: uint32_t


# ::stappler::xenolith::Repeat

## BRIEF

Действие: повторяет переданное действие несколько раз

## CONTENT

Действие: повторяет переданное действие несколько раз

Базовые классы:
* ActionInterval


# ::stappler::xenolith::Repeat::~Repeat()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор

# ::stappler::xenolith::Repeat::init(Rc<stappler::xenolith::ActionInterval>&&,uint32_t)

## BRIEF

Создаёт действие

## CONTENT

Доступ: public

Создаёт действие

Параметры:
* Rc<stappler::xenolith::ActionInterval>&& - базовое действие
* uint32_t - число повторений

Возвращает:
* bool

# ::stappler::xenolith::Repeat::setInnerAction(Rc<stappler::xenolith::ActionInterval>&&)

## BRIEF

Устанавливает базовое действие

## CONTENT

Доступ: public

Устанавливает базовое действие

Параметры:
* Rc<stappler::xenolith::ActionInterval>&&


# ::stappler::xenolith::Repeat::getInnerAction() const

## BRIEF

Возвращает базовое действие

## CONTENT

Доступ: public

Возвращает базовое действие

Возвращает:
* stappler::xenolith::ActionInterval*

# ::stappler::xenolith::Repeat::stop()

## BRIEF

Останавливает действие

## CONTENT

Доступ: public

Останавливает действие

# ::stappler::xenolith::Repeat::update(float)

## BRIEF

Функция интерполяции

## CONTENT

Доступ: public

Функция интерполяции

Параметры:
* float


# ::stappler::xenolith::Repeat::startWithTarget(stappler::xenolith::Node*)

## BRIEF

Запускает действие

## CONTENT

Доступ: public

Запускает действие

Параметры:
* stappler::xenolith::Node*


# ::stappler::xenolith::Repeat::isDone() const

## BRIEF

Проверяет, завершено ли действие

## CONTENT

Доступ: public

Проверяет, завершено ли действие

Возвращает:
* bool

# ::stappler::xenolith::Repeat::_times

## BRIEF

Число повторений

## CONTENT

Доступ: protected

Число повторений

Тип: uint32_t


# ::stappler::xenolith::Repeat::_total

## BRIEF

Общее число повторений

## CONTENT

Доступ: protected

Общее число повторений

Тип: uint32_t


# ::stappler::xenolith::Repeat::_nextDt

## BRIEF

Следующий период обновления

## CONTENT

Доступ: protected

Следующий период обновления

Тип: float


# ::stappler::xenolith::Repeat::_actionInstant

## BRIEF

Флаг повторения мгновенного действия

## CONTENT

Доступ: protected

Флаг повторения мгновенного действия

Тип: bool


# ::stappler::xenolith::Repeat::_innerAction

## BRIEF

Вложенное действие

## CONTENT

Доступ: protected

Вложенное действие

Тип: Rc<stappler::xenolith::ActionInterval>


# ::stappler::xenolith::RepeatForever

## BRIEF

Действие: повторяет другое действие до отмены

## CONTENT

Действие: повторяет другое действие до отмены

Базовые классы:
* ActionInterval


# ::stappler::xenolith::RepeatForever::~RepeatForever()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор

# ::stappler::xenolith::RepeatForever::init(stappler::xenolith::ActionInterval*)

## BRIEF

Создаёт действие

## CONTENT

Доступ: public

Создаёт действие

Параметры:
* stappler::xenolith::ActionInterval*

Возвращает:
* bool

# ::stappler::xenolith::RepeatForever::setInnerAction(stappler::xenolith::ActionInterval*)

## BRIEF

Устанавливает вложенное действие

## CONTENT

Доступ: public

Устанавливает вложенное действие

Параметры:
* stappler::xenolith::ActionInterval*


# ::stappler::xenolith::RepeatForever::getInnerAction() const

## BRIEF

Возвращает вложенное действие

## CONTENT

Доступ: public

Возвращает вложенное действие

Возвращает:
* stappler::xenolith::ActionInterval*

# ::stappler::xenolith::RepeatForever::step(float)

## BRIEF

Выполняет сегмент действия

## CONTENT

Доступ: public

Выполняет сегмент действия

Параметры:
* float


# ::stappler::xenolith::RepeatForever::startWithTarget(stappler::xenolith::Node*)

## BRIEF

Запускает действие

## CONTENT

Доступ: public

Запускает действие

Параметры:
* stappler::xenolith::Node*


# ::stappler::xenolith::RepeatForever::isDone() const

## BRIEF

Проверяет, завершено ли действие

## CONTENT

Доступ: public

Проверяет, завершено ли действие

Возвращает:
* bool

# ::stappler::xenolith::RepeatForever::_innerAction

## BRIEF

Вложенное действие

## CONTENT

Доступ: protected

Вложенное действие

Тип: Rc<stappler::xenolith::ActionInterval>


# ::stappler::xenolith::DelayTime

## BRIEF

Действие: не делает ничего, реализует задержку

## CONTENT

Действие: не делает ничего, реализует задержку

Базовые классы:
* ActionInterval


# ::stappler::xenolith::DelayTime::~DelayTime()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор

# ::stappler::xenolith::DelayTime::update(float)

## BRIEF

Функция интерполяции

## CONTENT

Доступ: public

Функция интерполяции

Параметры:
* float


# ::stappler::xenolith::TintTo

## BRIEF

Действие: перекрашивает объект

## CONTENT

Действие: перекрашивает объект

Базовые классы:
* ActionInterval


# ::stappler::xenolith::TintTo::~TintTo()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор


# ::stappler::xenolith::TintTo::init(float,const stappler::geom::Color4F&,stappler::geom::ColorMask)

## BRIEF

Создаёт действие

## CONTENT

Доступ: public

Создаёт действие

Параметры:
* float - длительность
* const stappler::geom::Color4F& - новый цвет
* stappler::geom::ColorMask - маска цвета

Возвращает:
* bool

# ::stappler::xenolith::TintTo::update(float)

## BRIEF

Функция интерполяции

## CONTENT

Доступ: public

Функция интерполяции

Параметры:
* float


# ::stappler::xenolith::TintTo::startWithTarget(stappler::xenolith::Node*)

## BRIEF

Запускает действие

## CONTENT

Доступ: protected

Запускает действие

Параметры:
* stappler::xenolith::Node*


# ::stappler::xenolith::TintTo::_mask

## BRIEF

Маска цветов

## CONTENT

Доступ: protected

Маска цветов

Тип: stappler::geom::ColorMask


# ::stappler::xenolith::TintTo::_to

## BRIEF

Цвет для покраски

## CONTENT

Доступ: protected

Цвет для покраски

Тип: stappler::geom::Color4F


# ::stappler::xenolith::TintTo::_from

## BRIEF

Исходный цвет

## CONTENT

Доступ: protected

Исходный цвет

Тип: stappler::geom::Color4F


# ::stappler::xenolith::ActionProgress

## BRIEF

Действие: вызывает функцию интерполяции

## CONTENT

Действие: вызывает функцию интерполяции

Базовые классы:
* ActionInterval


# ::stappler::xenolith::ActionProgress::StartCallback

## BRIEF

Функция запуска действия

## CONTENT

Доступ: public

Функция запуска действия


# ::stappler::xenolith::ActionProgress::UpdateCallback

## BRIEF

Функция интерполяции

## CONTENT

Доступ: public

Функция интерполяции

# ::stappler::xenolith::ActionProgress::StopCallback

## BRIEF

Функция остановки действия

## CONTENT

Доступ: public

Функция остановки действия


# ::stappler::xenolith::ActionProgress::~ActionProgress()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор

# ::stappler::xenolith::ActionProgress::init(float,stappler::xenolith::ActionProgress::UpdateCallback&&,stappler::xenolith::ActionProgress::StartCallback&&,stappler::xenolith::ActionProgress::StopCallback&&)

## BRIEF

Создаёт действие

## CONTENT

Доступ: public

Создаёт действие

Параметры:
* float - длительность
* stappler::xenolith::ActionProgress::UpdateCallback&&
* stappler::xenolith::ActionProgress::StartCallback&&
* stappler::xenolith::ActionProgress::StopCallback&&

Возвращает:
* bool

# ::stappler::xenolith::ActionProgress::init(float,float,stappler::xenolith::ActionProgress::UpdateCallback&&,stappler::xenolith::ActionProgress::StartCallback&&,stappler::xenolith::ActionProgress::StopCallback&&)

## BRIEF

Создаёт действие

## CONTENT

Доступ: public

Создаёт действие

Параметры:
* float
* float - целевой уровень интерполяции
* stappler::xenolith::ActionProgress::UpdateCallback&&
* stappler::xenolith::ActionProgress::StartCallback&&
* stappler::xenolith::ActionProgress::StopCallback&&

Возвращает:
* bool

# ::stappler::xenolith::ActionProgress::init(float,float,float,stappler::xenolith::ActionProgress::UpdateCallback&&,stappler::xenolith::ActionProgress::StartCallback&&,stappler::xenolith::ActionProgress::StopCallback&&)

## BRIEF

Создаёт действие

## CONTENT

Доступ: public

Создаёт действие

Параметры:
* float
* float - исходный уровень интерполяции
* float - целевой уровень интерполяции
* stappler::xenolith::ActionProgress::UpdateCallback&&
* stappler::xenolith::ActionProgress::StartCallback&&
* stappler::xenolith::ActionProgress::StopCallback&&

Возвращает:
* bool

# ::stappler::xenolith::ActionProgress::startWithTarget(stappler::xenolith::Node*)

## BRIEF

Запускает действие

## CONTENT

Доступ: public

Запускает действие

Параметры:
* stappler::xenolith::Node*


# ::stappler::xenolith::ActionProgress::update(float)

## BRIEF

Функция интерполяции

## CONTENT

Доступ: public

Функция интерполяции

Параметры:
* float


# ::stappler::xenolith::ActionProgress::stop()

## BRIEF

Останавливает действие

## CONTENT

Доступ: public

Останавливает действие


# ::stappler::xenolith::ActionProgress::setSourceProgress(float)

## BRIEF

Устанавливает исходный прогресс интерполяции

## CONTENT

Доступ: public

Устанавливает исходный прогресс интерполяции

Параметры:
* float


# ::stappler::xenolith::ActionProgress::getSourceProgress() const

## BRIEF

Возвращает исходный прогресс интерполяции

## CONTENT

Доступ: public

Возвращает исходный прогресс интерполяции

Возвращает:
* float

# ::stappler::xenolith::ActionProgress::setTargetProgress(float)

## BRIEF

Устанавливает целевой прогресс интерполяции

## CONTENT

Доступ: public

Устанавливает целевой прогресс интерполяции

Параметры:
* float


# ::stappler::xenolith::ActionProgress::getTargetProgress() const

## BRIEF

Возвращает целевой прогресс интерполяции

## CONTENT

Доступ: public

Возвращает целевой прогресс интерполяции

Возвращает:
* float

# ::stappler::xenolith::ActionProgress::setStartCallback(stappler::xenolith::ActionProgress::StartCallback&&)

## BRIEF

Устанавливает функцию запуска

## CONTENT

Доступ: public

Устанавливает функцию запуска

Параметры:
* stappler::xenolith::ActionProgress::StartCallback&&


# ::stappler::xenolith::ActionProgress::setUpdateCallback(stappler::xenolith::ActionProgress::UpdateCallback&&)

## BRIEF

Устанавливает функцию интерполяцию

## CONTENT

Доступ: public

Устанавливает функцию интерполяцию

Параметры:
* stappler::xenolith::ActionProgress::UpdateCallback&&


# ::stappler::xenolith::ActionProgress::setStopCallback(stappler::xenolith::ActionProgress::StopCallback&&)

## BRIEF

Устанавливает функцию завершения

## CONTENT

Доступ: public

Устанавливает функцию завершения

Параметры:
* stappler::xenolith::ActionProgress::StopCallback&&


# ::stappler::xenolith::ActionProgress::_stopped

## BRIEF

Флаг остановки

## CONTENT

Доступ: protected

Флаг остановки

Тип: bool


# ::stappler::xenolith::ActionProgress::_sourceProgress

## BRIEF

Исходный прогресс

## CONTENT

Доступ: protected

Исходный прогресс

Тип: float


# ::stappler::xenolith::ActionProgress::_targetProgress

## BRIEF

Целевой прогресс

## CONTENT

Доступ: protected

Целевой прогресс

Тип: float


# ::stappler::xenolith::ActionProgress::_onStart

## BRIEF

Функция запуска

## CONTENT

Доступ: protected

Функция запуска

Тип: StartCallback


# ::stappler::xenolith::ActionProgress::_onUpdate

## BRIEF

Функция интерполяции

## CONTENT

Доступ: protected

Функция интерполяции

Тип: UpdateCallback


# ::stappler::xenolith::ActionProgress::_onStop

## BRIEF

Функция остановки

## CONTENT

Доступ: protected

Функция остановки

Тип: StopCallback


# ::stappler::xenolith::MoveTo

## BRIEF

Действие: перемещение объекта

## CONTENT

Действие: перемещение объекта

Базовые классы:
* ActionInterval


# ::stappler::xenolith::MoveTo::~MoveTo()

## BRIEF

Деструктор

## CONTENT

Деструктор

Доступ: public


# ::stappler::xenolith::MoveTo::init(float,const stappler::geom::Vec2&)

## BRIEF

Создаёт действие

## CONTENT

Доступ: public

Создаёт действие

Параметры:
* float - длительность
* const stappler::geom::Vec2& - позиция

Возвращает:
* bool

# ::stappler::xenolith::MoveTo::init(float,const stappler::geom::Vec3&)

## BRIEF

Создаёт действие

## CONTENT

Доступ: public

Создаёт действие

Параметры:
* float - длительность
* const stappler::geom::Vec3& - позиция

Возвращает:
* bool

# ::stappler::xenolith::MoveTo::startWithTarget(stappler::xenolith::Node*)

## BRIEF

Запускает действие

## CONTENT

Доступ: public

Запускает действие

Параметры:
* stappler::xenolith::Node*


# ::stappler::xenolith::MoveTo::update(float)

## BRIEF

Функция интерполяции

## CONTENT

Доступ: public

Функция интерполяции

Параметры:
* float


# ::stappler::xenolith::MoveTo::_startPosition

## BRIEF

Начальная позция

## CONTENT

Доступ: protected

Начальная позция

Тип: stappler::geom::Vec3


# ::stappler::xenolith::MoveTo::_endPosition

## BRIEF

Конечная позиция

## CONTENT

Доступ: protected

Конечная позиция

Тип: stappler::geom::Vec3


# ::stappler::xenolith::ScaleTo

## BRIEF

Функция изменения относительного размера

## CONTENT

Функция изменения относительного размера

Базовые классы:
* ActionInterval


# ::stappler::xenolith::ScaleTo::~ScaleTo()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор


# ::stappler::xenolith::ScaleTo::init(float,float)

## BRIEF

Создаёт действие

## CONTENT

Доступ: public

Создаёт действие

Параметры:
* float - длительность
* float - относительный размер

Возвращает:
* bool

# ::stappler::xenolith::ScaleTo::init(float,const stappler::geom::Vec3&)

## BRIEF

Создаёт действие

## CONTENT

Доступ: public

Создаёт действие

Параметры:
* float - длительность
* const stappler::geom::Vec3& - относительный размер по осям

Возвращает:
* bool

# ::stappler::xenolith::ScaleTo::startWithTarget(stappler::xenolith::Node*)

## BRIEF

Запускает действие

## CONTENT

Доступ: public

Запускает действие

Параметры:
* stappler::xenolith::Node*


# ::stappler::xenolith::ScaleTo::update(float)

## BRIEF

Функция интерполяции

## CONTENT

Доступ: public

Функция интерполяции

Параметры:
* float


# ::stappler::xenolith::ScaleTo::_startScale

## BRIEF

Начальные параметры

## CONTENT

Доступ: protected

Начальные параметры

Тип: stappler::geom::Vec3


# ::stappler::xenolith::ScaleTo::_endScale

## BRIEF

Конечные параметры

## CONTENT

Доступ: protected

Конечные параметры

Тип: stappler::geom::Vec3


# ::stappler::xenolith::ResizeTo

## BRIEF

Действие: изменяет абсолютный размер

## CONTENT

Действие: изменяет абсолютный размер

Базовые классы:
* ActionInterval


# ::stappler::xenolith::ResizeTo::~ResizeTo()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор

# ::stappler::xenolith::ResizeTo::init(float,const stappler::geom::Size2&)

## BRIEF

Создаёт действие

## CONTENT

Доступ: public

Создаёт действие

Параметры:
* float - длительность
* const stappler::geom::Size2& - новый размер

Возвращает:
* bool

# ::stappler::xenolith::ResizeTo::startWithTarget(stappler::xenolith::Node*)

## BRIEF

Запускает действие

## CONTENT

Доступ: public

Запускает действие

Параметры:
* stappler::xenolith::Node*


# ::stappler::xenolith::ResizeTo::update(float)

## BRIEF

Функция интерполяции

## CONTENT

Доступ: public

Функция интерполяции

Параметры:
* float


# ::stappler::xenolith::ResizeTo::_startSize

## BRIEF

Начальный размер

## CONTENT

Доступ: protected

Начальный размер

Тип: stappler::geom::Size2


# ::stappler::xenolith::ResizeTo::_endSize

## BRIEF

Конечный размер

## CONTENT

Доступ: protected

Конечный размер

Тип: stappler::geom::Size2


# ::stappler::xenolith::FadeTo

## BRIEF

Действие: изменяет прозрачность объекта

## CONTENT

Действие: изменяет прозрачность объекта

Базовые классы:
* ActionInterval


# ::stappler::xenolith::FadeTo::~FadeTo()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор


# ::stappler::xenolith::FadeTo::init(float,float)

## BRIEF

Создаёт действие

## CONTENT

Доступ: public

Создаёт действие

Параметры:
* float - длительность
* float - новая прозрачность

Возвращает:
* bool

# ::stappler::xenolith::FadeTo::startWithTarget(stappler::xenolith::Node*)

## BRIEF

Запускает действие

## CONTENT

Доступ: public

Запускает действие

Параметры:
* stappler::xenolith::Node*


# ::stappler::xenolith::FadeTo::update(float)

## BRIEF

Функция интерполяции

## CONTENT

Доступ: public

Функция интерполяции

Параметры:
* float


# ::stappler::xenolith::FadeTo::_startOpacity

## BRIEF

Начальная прозрачность

## CONTENT

Доступ: protected

Начальная прозрачность

Тип: float


# ::stappler::xenolith::FadeTo::_endOpacity

## BRIEF

Конечная прозрачность

## CONTENT

Доступ: protected

Конечная прозрачность

Тип: float


# ::stappler::xenolith::RenderContinuously

## BRIEF

Действие: блокирует систему энергоэффективного рисования до отмены

## CONTENT

Действие: блокирует систему энергоэффективного рисования до отмены

Базовые классы:
* ActionInterval


# ::stappler::xenolith::RenderContinuously::~RenderContinuously()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор

# ::stappler::xenolith::RenderContinuously::init()

## BRIEF

Создаёт действие

## CONTENT

Доступ: public

Создаёт действие

Возвращает:
* bool

# ::stappler::xenolith::RenderContinuously::init(float)

## BRIEF

Создаёт действие

## CONTENT

Доступ: public

Создаёт действие

Параметры:
* float - длительность

Возвращает:
* bool

# ::stappler::xenolith::RenderContinuously::step(float)

## BRIEF

Запускает сегмент действия

## CONTENT

Доступ: public

Запускает сегмент действия

Параметры:
* float


# ::stappler::xenolith::RenderContinuously::update(float)

## BRIEF

Функция интерполяции

## CONTENT

Доступ: public

Функция интерполяции

Параметры:
* float


# ::stappler::xenolith::RenderContinuously::startWithTarget(stappler::xenolith::Node*)

## BRIEF

Запускает действие

## CONTENT

Доступ: public

Запускает действие

Параметры:
* stappler::xenolith::Node*


# ::stappler::xenolith::RenderContinuously::isDone() const

## BRIEF

Проверяет действие на завершение

## CONTENT

Доступ: public

Проверяет действие на завершение

Возвращает:
* bool

# ::stappler::xenolith::RenderContinuously::stop()

## BRIEF

Останавливает действие

## CONTENT

Доступ: public

Останавливает действие


# ::stappler::xenolith::RenderContinuously::_innerAction

## BRIEF

Вложенное действие

## CONTENT

Доступ: protected

Вложенное действие

Тип: Rc<stappler::xenolith::ActionInterval>
