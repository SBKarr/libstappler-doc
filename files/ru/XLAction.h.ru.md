Title: XLAction.h


# XENOLITH_SCENE_ACTIONS_XLACTION_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::Action

## BRIEF

## CONTENT

Базовые классы:
* Ref


# ::stappler::xenolith::Action::INVALID_TAG

## BRIEF

## CONTENT

Доступ: public

Тип: uint32_t const


# ::stappler::xenolith::Action::~Action()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::Action::Action()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::Action::isDone() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::Action::invalidate()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::Action::stop()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::Action::step(float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float


# ::stappler::xenolith::Action::update(float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float


# ::stappler::xenolith::Action::getContainer() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::Node*

# ::stappler::xenolith::Action::getTarget() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::Node*

# ::stappler::xenolith::Action::getTag() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint32_t

# ::stappler::xenolith::Action::setTag(uint32_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint32_t


# ::stappler::xenolith::Action::getDuration() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* float

# ::stappler::xenolith::Action::setDuration(float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float


# ::stappler::xenolith::Action::startWithTarget(stappler::xenolith::Node*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Node*


# ::stappler::xenolith::Action::setContainer(stappler::xenolith::Node*)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::Node*


# ::stappler::xenolith::Action::setTarget(stappler::xenolith::Node*)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::Node*


# ::stappler::xenolith::Action::_container

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::Node*


# ::stappler::xenolith::Action::_target

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::xenolith::Node>


# ::stappler::xenolith::Action::_tag

## BRIEF

## CONTENT

Доступ: protected

Тип: uint32_t


# ::stappler::xenolith::Action::_duration

## BRIEF

## CONTENT

Доступ: protected

Тип: float


# ::stappler::xenolith::ActionInstant

## BRIEF

## CONTENT

Базовые классы:
* Action


# ::stappler::xenolith::ActionInstant::~ActionInstant()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::ActionInstant::init(bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* bool

Возвращает:
* bool

# ::stappler::xenolith::ActionInstant::step(float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float


# ::stappler::xenolith::ActionInstant::_runOnce

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::ActionInstant::_performed

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::Show

## BRIEF

## CONTENT

Базовые классы:
* ActionInstant


# ::stappler::xenolith::Show::~Show()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::Show::update(float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float


# ::stappler::xenolith::Hide

## BRIEF

## CONTENT

Базовые классы:
* ActionInstant


# ::stappler::xenolith::Hide::~Hide()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::Hide::update(float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float


# ::stappler::xenolith::ToggleVisibility

## BRIEF

## CONTENT

Базовые классы:
* ActionInstant


# ::stappler::xenolith::ToggleVisibility::~ToggleVisibility()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::ToggleVisibility::update(float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float


# ::stappler::xenolith::RemoveSelf

## BRIEF

## CONTENT

Базовые классы:
* ActionInstant


# ::stappler::xenolith::RemoveSelf::~RemoveSelf()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::RemoveSelf::init(bool,bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* bool
* bool

Возвращает:
* bool

# ::stappler::xenolith::RemoveSelf::update(float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float


# ::stappler::xenolith::RemoveSelf::_isNeedCleanUp

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::Place

## BRIEF

## CONTENT

Базовые классы:
* ActionInstant


# ::stappler::xenolith::Place::~Place()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::Place::init(stappler::xenolith::Vec2 const&,bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Vec2 const&
* bool

Возвращает:
* bool

# ::stappler::xenolith::Place::update(float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float


# ::stappler::xenolith::Place::_position

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::Vec2


# ::stappler::xenolith::CallFunc

## BRIEF

## CONTENT

Базовые классы:
* ActionInstant


# ::stappler::xenolith::CallFunc::~CallFunc()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::CallFunc::init(Function<void ()>&&,bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Function<void ()>&&
* bool

Возвращает:
* bool

# ::stappler::xenolith::CallFunc::update(float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float


# ::stappler::xenolith::CallFunc::_callback

## BRIEF

## CONTENT

Доступ: protected

Тип: Function<void ()>


# ::stappler::xenolith::ActionInterval

## BRIEF

## CONTENT

Базовые классы:
* Action


# ::stappler::xenolith::ActionInterval::~ActionInterval()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::ActionInterval::init(float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float

Возвращает:
* bool

# ::stappler::xenolith::ActionInterval::getElapsed()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* float

# ::stappler::xenolith::ActionInterval::isDone() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::ActionInterval::step(float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float


# ::stappler::xenolith::ActionInterval::setDuration(float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float


# ::stappler::xenolith::ActionInterval::startWithTarget(stappler::xenolith::Node*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Node*


# ::stappler::xenolith::ActionInterval::_elapsed

## BRIEF

## CONTENT

Доступ: protected

Тип: float


# ::stappler::xenolith::ActionInterval::_firstTick

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::Speed

## BRIEF

## CONTENT

Базовые классы:
* Action


# ::stappler::xenolith::Speed::~Speed()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::Speed::Speed()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::Speed::init(stappler::xenolith::ActionInterval*,float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::ActionInterval*
* float

Возвращает:
* bool

# ::stappler::xenolith::Speed::getSpeed() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* float

# ::stappler::xenolith::Speed::setSpeed(float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float


# ::stappler::xenolith::Speed::getInnerAction() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::ActionInterval*

# ::stappler::xenolith::Speed::setInnerAction(stappler::xenolith::ActionInterval*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::ActionInterval*


# ::stappler::xenolith::Speed::stop()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::Speed::step(float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float


# ::stappler::xenolith::Speed::isDone() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::Speed::startWithTarget(stappler::xenolith::Node*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Node*


# ::stappler::xenolith::Speed::_speed

## BRIEF

## CONTENT

Доступ: protected

Тип: float


# ::stappler::xenolith::Speed::_innerAction

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::xenolith::ActionInterval>


# ::stappler::xenolith::Sequence

## BRIEF

## CONTENT

Базовые классы:
* ActionInterval


# ::stappler::xenolith::Sequence::~Sequence()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::Sequence::init<typename>(Args &&...)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename Args

Параметры:
* Args &&...

Возвращает:
* bool

# ::stappler::xenolith::Sequence::stop()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::Sequence::update(float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float


# ::stappler::xenolith::Sequence::startWithTarget(stappler::xenolith::Node*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Node*


# ::stappler::xenolith::Sequence::reserve(size_t)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* size_t

Возвращает:
* bool

# ::stappler::xenolith::Sequence::addAction(Function<void ()>&&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* Function<void ()>&&

Возвращает:
* bool

# ::stappler::xenolith::Sequence::addAction(float)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* float

Возвращает:
* bool

# ::stappler::xenolith::Sequence::addAction<typename>(Rc<T> const&)

## BRIEF

## CONTENT

Доступ: protected

Параметры шаблона:
* typename T

Параметры:
* Rc<T> const&

Возвращает:
* bool

# ::stappler::xenolith::Sequence::addAction(stappler::xenolith::Action*)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::Action*

Возвращает:
* bool

# ::stappler::xenolith::Sequence::initWithActions<typename,typename>(T&&,Args &&...)

## BRIEF

## CONTENT

Доступ: protected

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

## CONTENT

Доступ: protected

Параметры шаблона:
* typename T

Параметры:
* T&&

Возвращает:
* bool

# ::stappler::xenolith::Sequence::ActionData

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::Sequence::ActionData::action

## BRIEF

## CONTENT

Тип: Rc<stappler::xenolith::Action>


# ::stappler::xenolith::Sequence::ActionData::minThreshold

## BRIEF

## CONTENT

Тип: float


# ::stappler::xenolith::Sequence::ActionData::maxThreshold

## BRIEF

## CONTENT

Тип: float


# ::stappler::xenolith::Sequence::ActionData::threshold

## BRIEF

## CONTENT

Тип: float


# ::stappler::xenolith::Sequence::_actions

## BRIEF

## CONTENT

Доступ: protected

Тип: Vector<stappler::xenolith::Sequence::ActionData>


# ::stappler::xenolith::Sequence::_prevTime

## BRIEF

## CONTENT

Доступ: protected

Тип: float


# ::stappler::xenolith::Sequence::_currentIdx

## BRIEF

## CONTENT

Доступ: protected

Тип: uint32_t


# ::stappler::xenolith::Spawn

## BRIEF

## CONTENT

Базовые классы:
* ActionInterval


# ::stappler::xenolith::Spawn::~Spawn()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::Spawn::init<typename>(Args &&...)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename Args

Параметры:
* Args &&...

Возвращает:
* bool

# ::stappler::xenolith::Spawn::stop()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::Spawn::update(float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float


# ::stappler::xenolith::Spawn::startWithTarget(stappler::xenolith::Node*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Node*


# ::stappler::xenolith::Spawn::reserve(size_t)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* size_t

Возвращает:
* bool

# ::stappler::xenolith::Spawn::addAction(Function<void ()>&&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* Function<void ()>&&

Возвращает:
* bool

# ::stappler::xenolith::Spawn::addAction(float)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* float

Возвращает:
* bool

# ::stappler::xenolith::Spawn::addAction<typename>(Rc<T> const&)

## BRIEF

## CONTENT

Доступ: protected

Параметры шаблона:
* typename T

Параметры:
* Rc<T> const&

Возвращает:
* bool

# ::stappler::xenolith::Spawn::addAction(stappler::xenolith::Action*)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::Action*

Возвращает:
* bool

# ::stappler::xenolith::Spawn::initWithActions<typename,typename>(T&&,Args &&...)

## BRIEF

## CONTENT

Доступ: protected

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

## CONTENT

Доступ: protected

Параметры шаблона:
* typename T

Параметры:
* T&&

Возвращает:
* bool

# ::stappler::xenolith::Spawn::ActionData

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::Spawn::ActionData::action

## BRIEF

## CONTENT

Тип: Rc<stappler::xenolith::Action>


# ::stappler::xenolith::Spawn::ActionData::threshold

## BRIEF

## CONTENT

Тип: float


# ::stappler::xenolith::Spawn::_actions

## BRIEF

## CONTENT

Доступ: protected

Тип: Vector<stappler::xenolith::Spawn::ActionData>


# ::stappler::xenolith::Spawn::_prevTime

## BRIEF

## CONTENT

Доступ: protected

Тип: float


# ::stappler::xenolith::Spawn::_currentIdx

## BRIEF

## CONTENT

Доступ: protected

Тип: uint32_t


# ::stappler::xenolith::DelayTime

## BRIEF

## CONTENT

Базовые классы:
* ActionInterval


# ::stappler::xenolith::DelayTime::~DelayTime()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::DelayTime::update(float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float


# ::stappler::xenolith::TintTo

## BRIEF

## CONTENT

Базовые классы:
* ActionInterval


# ::stappler::xenolith::TintTo::~TintTo()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::TintTo::init(float,stappler::xenolith::Color4F const&,stappler::xenolith::ColorMask)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float
* stappler::xenolith::Color4F const&
* stappler::xenolith::ColorMask

Возвращает:
* bool

# ::stappler::xenolith::TintTo::update(float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float


# ::stappler::xenolith::TintTo::startWithTarget(stappler::xenolith::Node*)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::Node*


# ::stappler::xenolith::TintTo::_mask

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::ColorMask


# ::stappler::xenolith::TintTo::_to

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::Color4F


# ::stappler::xenolith::TintTo::_from

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::Color4F


# ::stappler::xenolith::ActionProgress

## BRIEF

## CONTENT

Базовые классы:
* ActionInterval


# ::stappler::xenolith::ActionProgress::StartCallback

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::ActionProgress::UpdateCallback

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::ActionProgress::StopCallback

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::ActionProgress::~ActionProgress()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::ActionProgress::init(float,stappler::xenolith::ActionProgress::UpdateCallback&&,stappler::xenolith::ActionProgress::StartCallback&&,stappler::xenolith::ActionProgress::StopCallback&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float
* stappler::xenolith::ActionProgress::UpdateCallback&&
* stappler::xenolith::ActionProgress::StartCallback&&
* stappler::xenolith::ActionProgress::StopCallback&&

Возвращает:
* bool

# ::stappler::xenolith::ActionProgress::init(float,float,stappler::xenolith::ActionProgress::UpdateCallback&&,stappler::xenolith::ActionProgress::StartCallback&&,stappler::xenolith::ActionProgress::StopCallback&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float
* float
* stappler::xenolith::ActionProgress::UpdateCallback&&
* stappler::xenolith::ActionProgress::StartCallback&&
* stappler::xenolith::ActionProgress::StopCallback&&

Возвращает:
* bool

# ::stappler::xenolith::ActionProgress::init(float,float,float,stappler::xenolith::ActionProgress::UpdateCallback&&,stappler::xenolith::ActionProgress::StartCallback&&,stappler::xenolith::ActionProgress::StopCallback&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float
* float
* float
* stappler::xenolith::ActionProgress::UpdateCallback&&
* stappler::xenolith::ActionProgress::StartCallback&&
* stappler::xenolith::ActionProgress::StopCallback&&

Возвращает:
* bool

# ::stappler::xenolith::ActionProgress::startWithTarget(stappler::xenolith::Node*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Node*


# ::stappler::xenolith::ActionProgress::update(float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float


# ::stappler::xenolith::ActionProgress::stop()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::ActionProgress::setSourceProgress(float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float


# ::stappler::xenolith::ActionProgress::getSourceProgress() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* float

# ::stappler::xenolith::ActionProgress::setTargetProgress(float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float


# ::stappler::xenolith::ActionProgress::getTargetProgress() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* float

# ::stappler::xenolith::ActionProgress::setStartCallback(stappler::xenolith::ActionProgress::StartCallback&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::ActionProgress::StartCallback&&


# ::stappler::xenolith::ActionProgress::setUpdateCallback(stappler::xenolith::ActionProgress::UpdateCallback&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::ActionProgress::UpdateCallback&&


# ::stappler::xenolith::ActionProgress::setStopCallback(stappler::xenolith::ActionProgress::StopCallback&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::ActionProgress::StopCallback&&


# ::stappler::xenolith::ActionProgress::_stopped

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::ActionProgress::_sourceProgress

## BRIEF

## CONTENT

Доступ: protected

Тип: float


# ::stappler::xenolith::ActionProgress::_targetProgress

## BRIEF

## CONTENT

Доступ: protected

Тип: float


# ::stappler::xenolith::ActionProgress::_onStart

## BRIEF

## CONTENT

Доступ: protected

Тип: StartCallback


# ::stappler::xenolith::ActionProgress::_onUpdate

## BRIEF

## CONTENT

Доступ: protected

Тип: UpdateCallback


# ::stappler::xenolith::ActionProgress::_onStop

## BRIEF

## CONTENT

Доступ: protected

Тип: StopCallback


# ::stappler::xenolith::MoveTo

## BRIEF

## CONTENT

Базовые классы:
* ActionInterval


# ::stappler::xenolith::MoveTo::~MoveTo()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::MoveTo::init(float,stappler::xenolith::Vec2 const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float
* stappler::xenolith::Vec2 const&

Возвращает:
* bool

# ::stappler::xenolith::MoveTo::init(float,stappler::xenolith::Vec3 const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float
* stappler::xenolith::Vec3 const&

Возвращает:
* bool

# ::stappler::xenolith::MoveTo::startWithTarget(stappler::xenolith::Node*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Node*


# ::stappler::xenolith::MoveTo::update(float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float


# ::stappler::xenolith::MoveTo::_startPosition

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::Vec3


# ::stappler::xenolith::MoveTo::_endPosition

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::Vec3


# ::stappler::xenolith::ScaleTo

## BRIEF

## CONTENT

Базовые классы:
* ActionInterval


# ::stappler::xenolith::ScaleTo::~ScaleTo()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::ScaleTo::init(float,float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float
* float

Возвращает:
* bool

# ::stappler::xenolith::ScaleTo::init(float,stappler::xenolith::Vec3 const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float
* stappler::xenolith::Vec3 const&

Возвращает:
* bool

# ::stappler::xenolith::ScaleTo::startWithTarget(stappler::xenolith::Node*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Node*


# ::stappler::xenolith::ScaleTo::update(float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float


# ::stappler::xenolith::ScaleTo::_startScale

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::Vec3


# ::stappler::xenolith::ScaleTo::_endScale

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::Vec3


# ::stappler::xenolith::ResizeTo

## BRIEF

## CONTENT

Базовые классы:
* ActionInterval


# ::stappler::xenolith::ResizeTo::~ResizeTo()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::ResizeTo::init(float,stappler::xenolith::Size2 const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float
* stappler::xenolith::Size2 const&

Возвращает:
* bool

# ::stappler::xenolith::ResizeTo::startWithTarget(stappler::xenolith::Node*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Node*


# ::stappler::xenolith::ResizeTo::update(float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float


# ::stappler::xenolith::ResizeTo::_startSize

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::Size2


# ::stappler::xenolith::ResizeTo::_endSize

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::Size2


# ::stappler::xenolith::FadeTo

## BRIEF

## CONTENT

Базовые классы:
* ActionInterval


# ::stappler::xenolith::FadeTo::~FadeTo()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::FadeTo::init(float,float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float
* float

Возвращает:
* bool

# ::stappler::xenolith::FadeTo::startWithTarget(stappler::xenolith::Node*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Node*


# ::stappler::xenolith::FadeTo::update(float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float


# ::stappler::xenolith::FadeTo::_startOpacity

## BRIEF

## CONTENT

Доступ: protected

Тип: float


# ::stappler::xenolith::FadeTo::_endOpacity

## BRIEF

## CONTENT

Доступ: protected

Тип: float
