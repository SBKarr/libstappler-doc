Title: XLGestureRecognizer.h


# XENOLITH_SCENE_INPUT_XLGESTURERECOGNIZER_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::TapDistanceAllowed

## BRIEF

## CONTENT

Тип: float const


# ::stappler::xenolith::TapDistanceAllowedMulti

## BRIEF

## CONTENT

Тип: float const


# ::stappler::xenolith::TapIntervalAllowed

## BRIEF

## CONTENT

Тип: stappler::TimeInterval const


# ::stappler::xenolith::GestureEvent

## BRIEF

## CONTENT

Значения:
* Began
* Activated
* Moved
* OnLongPress
* Repeat
* Ended
* Cancelled


# ::stappler::xenolith::GestureData

## BRIEF

## CONTENT


# ::stappler::xenolith::GestureData::event

## BRIEF

## CONTENT

Тип: stappler::xenolith::GestureEvent


# ::stappler::xenolith::GestureData::input

## BRIEF

## CONTENT

Тип: stappler::xenolith::InputEvent const*


# ::stappler::xenolith::GestureData::location() const

## BRIEF

## CONTENT

Возвращает:
* stappler::xenolith::Vec2

# ::stappler::xenolith::GestureData::getId() const

## BRIEF

## CONTENT

Возвращает:
* uint32_t

# ::stappler::xenolith::GestureScroll

## BRIEF

## CONTENT

Базовые классы:
* GestureData


# ::stappler::xenolith::GestureScroll::pos

## BRIEF

## CONTENT

Тип: stappler::xenolith::Vec2


# ::stappler::xenolith::GestureScroll::amount

## BRIEF

## CONTENT

Тип: stappler::xenolith::Vec2


# ::stappler::xenolith::GestureScroll::location() const

## BRIEF

## CONTENT

Возвращает:
* stappler::xenolith::Vec2 const&

# ::stappler::xenolith::GestureScroll::cleanup()

## BRIEF

## CONTENT


# ::stappler::xenolith::GestureTap

## BRIEF

## CONTENT

Базовые классы:
* GestureData


# ::stappler::xenolith::GestureTap::pos

## BRIEF

## CONTENT

Тип: stappler::xenolith::Vec2


# ::stappler::xenolith::GestureTap::id

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::xenolith::GestureTap::count

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::xenolith::GestureTap::time

## BRIEF

## CONTENT

Тип: stappler::Time


# ::stappler::xenolith::GestureTap::cleanup()

## BRIEF

## CONTENT


# ::stappler::xenolith::GesturePress

## BRIEF

## CONTENT

Базовые классы:
* GestureData


# ::stappler::xenolith::GesturePress::pos

## BRIEF

## CONTENT

Тип: stappler::xenolith::Vec2


# ::stappler::xenolith::GesturePress::id

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::xenolith::GesturePress::limit

## BRIEF

## CONTENT

Тип: stappler::TimeInterval


# ::stappler::xenolith::GesturePress::time

## BRIEF

## CONTENT

Тип: stappler::TimeInterval


# ::stappler::xenolith::GesturePress::tickCount

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::xenolith::GesturePress::cleanup()

## BRIEF

## CONTENT


# ::stappler::xenolith::GestureSwipe

## BRIEF

## CONTENT

Базовые классы:
* GestureData


# ::stappler::xenolith::GestureSwipe::firstTouch

## BRIEF

## CONTENT

Тип: stappler::xenolith::Vec2


# ::stappler::xenolith::GestureSwipe::secondTouch

## BRIEF

## CONTENT

Тип: stappler::xenolith::Vec2


# ::stappler::xenolith::GestureSwipe::midpoint

## BRIEF

## CONTENT

Тип: stappler::xenolith::Vec2


# ::stappler::xenolith::GestureSwipe::delta

## BRIEF

## CONTENT

Тип: stappler::xenolith::Vec2


# ::stappler::xenolith::GestureSwipe::velocity

## BRIEF

## CONTENT

Тип: stappler::xenolith::Vec2


# ::stappler::xenolith::GestureSwipe::density

## BRIEF

## CONTENT

Тип: float


# ::stappler::xenolith::GestureSwipe::cleanup()

## BRIEF

## CONTENT


# ::stappler::xenolith::GesturePinch

## BRIEF

## CONTENT

Базовые классы:
* GestureData


# ::stappler::xenolith::GesturePinch::first

## BRIEF

## CONTENT

Тип: stappler::xenolith::Vec2


# ::stappler::xenolith::GesturePinch::second

## BRIEF

## CONTENT

Тип: stappler::xenolith::Vec2


# ::stappler::xenolith::GesturePinch::center

## BRIEF

## CONTENT

Тип: stappler::xenolith::Vec2


# ::stappler::xenolith::GesturePinch::startDistance

## BRIEF

## CONTENT

Тип: float


# ::stappler::xenolith::GesturePinch::prevDistance

## BRIEF

## CONTENT

Тип: float


# ::stappler::xenolith::GesturePinch::distance

## BRIEF

## CONTENT

Тип: float


# ::stappler::xenolith::GesturePinch::scale

## BRIEF

## CONTENT

Тип: float


# ::stappler::xenolith::GesturePinch::velocity

## BRIEF

## CONTENT

Тип: float


# ::stappler::xenolith::GesturePinch::density

## BRIEF

## CONTENT

Тип: float


# ::stappler::xenolith::GesturePinch::cleanup()

## BRIEF

## CONTENT


# ::stappler::xenolith::GestureRecognizer

## BRIEF

## CONTENT

Базовые классы:
* Ref


# ::stappler::xenolith::GestureRecognizer::EventMask

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::GestureRecognizer::ButtonMask

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::GestureRecognizer::~GestureRecognizer()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::GestureRecognizer::init()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::GestureRecognizer::canHandleEvent(stappler::xenolith::InputEvent const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::InputEvent const&

Возвращает:
* bool

# ::stappler::xenolith::GestureRecognizer::handleInputEvent(stappler::xenolith::InputEvent const&,float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::InputEvent const&
* float

Возвращает:
* bool

# ::stappler::xenolith::GestureRecognizer::onEnter(stappler::xenolith::InputListener*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::InputListener*


# ::stappler::xenolith::GestureRecognizer::onExit()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::GestureRecognizer::getEventCount() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint32_t

# ::stappler::xenolith::GestureRecognizer::hasEvent(stappler::xenolith::InputEvent const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::InputEvent const&

Возвращает:
* bool

# ::stappler::xenolith::GestureRecognizer::getEventMask() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* EventMask

# ::stappler::xenolith::GestureRecognizer::update(uint64_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint64_t


# ::stappler::xenolith::GestureRecognizer::getLocation() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::Vec2

# ::stappler::xenolith::GestureRecognizer::cancel()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::GestureRecognizer::setMaxEvents(size_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* size_t


# ::stappler::xenolith::GestureRecognizer::getMaxEvents() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* size_t

# ::stappler::xenolith::GestureRecognizer::addEvent(stappler::xenolith::InputEvent const&,float)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::InputEvent const&
* float

Возвращает:
* bool

# ::stappler::xenolith::GestureRecognizer::removeEvent(stappler::xenolith::InputEvent const&,bool,float)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::InputEvent const&
* bool
* float

Возвращает:
* bool

# ::stappler::xenolith::GestureRecognizer::renewEvent(stappler::xenolith::InputEvent const&,float)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::InputEvent const&
* float

Возвращает:
* bool

# ::stappler::xenolith::GestureRecognizer::getTouchById(uint32_t,uint32_t*)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* uint32_t
* uint32_t*

Возвращает:
* stappler::xenolith::InputEvent*

# ::stappler::xenolith::GestureRecognizer::_events

## BRIEF

## CONTENT

Доступ: protected

Тип: Vector<stappler::xenolith::InputEvent>


# ::stappler::xenolith::GestureRecognizer::_maxEvents

## BRIEF

## CONTENT

Доступ: protected

Тип: size_t


# ::stappler::xenolith::GestureRecognizer::_eventMask

## BRIEF

## CONTENT

Доступ: protected

Тип: EventMask


# ::stappler::xenolith::GestureRecognizer::_buttonMask

## BRIEF

## CONTENT

Доступ: protected

Тип: ButtonMask


# ::stappler::xenolith::GestureRecognizer::_density

## BRIEF

## CONTENT

Доступ: protected

Тип: float


# ::stappler::xenolith::GestureTouchRecognizer

## BRIEF

## CONTENT

Базовые классы:
* GestureRecognizer


# ::stappler::xenolith::GestureTouchRecognizer::InputCallback

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::GestureTouchRecognizer::~GestureTouchRecognizer()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::GestureTouchRecognizer::init(stappler::xenolith::GestureTouchRecognizer::InputCallback&&,stappler::xenolith::GestureRecognizer::ButtonMask&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::GestureTouchRecognizer::InputCallback&&
* stappler::xenolith::GestureRecognizer::ButtonMask&&

Возвращает:
* bool

# ::stappler::xenolith::GestureTouchRecognizer::canHandleEvent(stappler::xenolith::InputEvent const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::InputEvent const&

Возвращает:
* bool

# ::stappler::xenolith::GestureTouchRecognizer::removeRecognizedEvent(uint32_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint32_t


# ::stappler::xenolith::GestureTouchRecognizer::addEvent(stappler::xenolith::InputEvent const&,float)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::InputEvent const&
* float

Возвращает:
* bool

# ::stappler::xenolith::GestureTouchRecognizer::removeEvent(stappler::xenolith::InputEvent const&,bool,float)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::InputEvent const&
* bool
* float

Возвращает:
* bool

# ::stappler::xenolith::GestureTouchRecognizer::renewEvent(stappler::xenolith::InputEvent const&,float)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::InputEvent const&
* float

Возвращает:
* bool

# ::stappler::xenolith::GestureTouchRecognizer::_event

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::GestureData


# ::stappler::xenolith::GestureTouchRecognizer::_callback

## BRIEF

## CONTENT

Доступ: protected

Тип: InputCallback


# ::stappler::xenolith::GestureTapRecognizer

## BRIEF

## CONTENT

Базовые классы:
* GestureRecognizer


# ::stappler::xenolith::GestureTapRecognizer::InputCallback

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::GestureTapRecognizer::ButtonMask

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::GestureTapRecognizer::~GestureTapRecognizer()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::GestureTapRecognizer::init(stappler::xenolith::GestureTapRecognizer::InputCallback&&,stappler::xenolith::GestureTapRecognizer::ButtonMask&&,uint32_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::GestureTapRecognizer::InputCallback&&
* stappler::xenolith::GestureTapRecognizer::ButtonMask&&
* uint32_t

Возвращает:
* bool

# ::stappler::xenolith::GestureTapRecognizer::update(uint64_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint64_t


# ::stappler::xenolith::GestureTapRecognizer::cancel()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::GestureTapRecognizer::addEvent(stappler::xenolith::InputEvent const&,float)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::InputEvent const&
* float

Возвращает:
* bool

# ::stappler::xenolith::GestureTapRecognizer::removeEvent(stappler::xenolith::InputEvent const&,bool,float)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::InputEvent const&
* bool
* float

Возвращает:
* bool

# ::stappler::xenolith::GestureTapRecognizer::renewEvent(stappler::xenolith::InputEvent const&,float)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::InputEvent const&
* float

Возвращает:
* bool

# ::stappler::xenolith::GestureTapRecognizer::registerTap()

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::GestureTapRecognizer::_gesture

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::GestureTap


# ::stappler::xenolith::GestureTapRecognizer::_callback

## BRIEF

## CONTENT

Доступ: protected

Тип: InputCallback


# ::stappler::xenolith::GestureTapRecognizer::_maxTapCount

## BRIEF

## CONTENT

Доступ: protected

Тип: uint32_t


# ::stappler::xenolith::GesturePressRecognizer

## BRIEF

## CONTENT

Базовые классы:
* GestureRecognizer


# ::stappler::xenolith::GesturePressRecognizer::InputCallback

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::GesturePressRecognizer::~GesturePressRecognizer()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::GesturePressRecognizer::init(stappler::xenolith::GesturePressRecognizer::InputCallback&&,stappler::TimeInterval,bool,stappler::xenolith::GestureRecognizer::ButtonMask&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::GesturePressRecognizer::InputCallback&&
* stappler::TimeInterval
* bool
* stappler::xenolith::GestureRecognizer::ButtonMask&&

Возвращает:
* bool

# ::stappler::xenolith::GesturePressRecognizer::update(uint64_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint64_t


# ::stappler::xenolith::GesturePressRecognizer::cancel()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::GesturePressRecognizer::addEvent(stappler::xenolith::InputEvent const&,float)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::InputEvent const&
* float

Возвращает:
* bool

# ::stappler::xenolith::GesturePressRecognizer::removeEvent(stappler::xenolith::InputEvent const&,bool,float)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::InputEvent const&
* bool
* float

Возвращает:
* bool

# ::stappler::xenolith::GesturePressRecognizer::renewEvent(stappler::xenolith::InputEvent const&,float)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::InputEvent const&
* float

Возвращает:
* bool

# ::stappler::xenolith::GesturePressRecognizer::_lastTime

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::Time


# ::stappler::xenolith::GesturePressRecognizer::_notified

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::GesturePressRecognizer::_gesture

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::GesturePress


# ::stappler::xenolith::GesturePressRecognizer::_callback

## BRIEF

## CONTENT

Доступ: protected

Тип: InputCallback


# ::stappler::xenolith::GesturePressRecognizer::_interval

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::TimeInterval


# ::stappler::xenolith::GesturePressRecognizer::_continuous

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::GestureSwipeRecognizer

## BRIEF

## CONTENT

Базовые классы:
* GestureRecognizer


# ::stappler::xenolith::GestureSwipeRecognizer::InputCallback

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::GestureSwipeRecognizer::~GestureSwipeRecognizer()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::GestureSwipeRecognizer::init(stappler::xenolith::GestureSwipeRecognizer::InputCallback&&,float,bool,stappler::xenolith::GestureRecognizer::ButtonMask&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::GestureSwipeRecognizer::InputCallback&&
* float
* bool
* stappler::xenolith::GestureRecognizer::ButtonMask&&

Возвращает:
* bool

# ::stappler::xenolith::GestureSwipeRecognizer::cancel()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::GestureSwipeRecognizer::addEvent(stappler::xenolith::InputEvent const&,float)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::InputEvent const&
* float

Возвращает:
* bool

# ::stappler::xenolith::GestureSwipeRecognizer::removeEvent(stappler::xenolith::InputEvent const&,bool,float)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::InputEvent const&
* bool
* float

Возвращает:
* bool

# ::stappler::xenolith::GestureSwipeRecognizer::renewEvent(stappler::xenolith::InputEvent const&,float)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::InputEvent const&
* float

Возвращает:
* bool

# ::stappler::xenolith::GestureSwipeRecognizer::_lastTime

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::Time


# ::stappler::xenolith::GestureSwipeRecognizer::_velocityX

## BRIEF

## CONTENT

Доступ: protected

Тип: math::MovingAverage<3>


# ::stappler::xenolith::GestureSwipeRecognizer::_velocityY

## BRIEF

## CONTENT

Доступ: protected

Тип: math::MovingAverage<3>


# ::stappler::xenolith::GestureSwipeRecognizer::_swipeBegin

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::GestureSwipeRecognizer::_currentTouch

## BRIEF

## CONTENT

Доступ: protected

Тип: uint32_t


# ::stappler::xenolith::GestureSwipeRecognizer::_gesture

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::GestureSwipe


# ::stappler::xenolith::GestureSwipeRecognizer::_callback

## BRIEF

## CONTENT

Доступ: protected

Тип: InputCallback


# ::stappler::xenolith::GestureSwipeRecognizer::_threshold

## BRIEF

## CONTENT

Доступ: protected

Тип: float


# ::stappler::xenolith::GestureSwipeRecognizer::_includeThreshold

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::GesturePinchRecognizer

## BRIEF

## CONTENT

Базовые классы:
* GestureRecognizer


# ::stappler::xenolith::GesturePinchRecognizer::InputCallback

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::GesturePinchRecognizer::~GesturePinchRecognizer()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::GesturePinchRecognizer::init(stappler::xenolith::GesturePinchRecognizer::InputCallback&&,stappler::xenolith::GestureRecognizer::ButtonMask&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::GesturePinchRecognizer::InputCallback&&
* stappler::xenolith::GestureRecognizer::ButtonMask&&

Возвращает:
* bool

# ::stappler::xenolith::GesturePinchRecognizer::cancel()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::GesturePinchRecognizer::addEvent(stappler::xenolith::InputEvent const&,float)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::InputEvent const&
* float

Возвращает:
* bool

# ::stappler::xenolith::GesturePinchRecognizer::removeEvent(stappler::xenolith::InputEvent const&,bool,float)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::InputEvent const&
* bool
* float

Возвращает:
* bool

# ::stappler::xenolith::GesturePinchRecognizer::renewEvent(stappler::xenolith::InputEvent const&,float)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::InputEvent const&
* float

Возвращает:
* bool

# ::stappler::xenolith::GesturePinchRecognizer::_lastTime

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::Time


# ::stappler::xenolith::GesturePinchRecognizer::_velocity

## BRIEF

## CONTENT

Доступ: protected

Тип: math::MovingAverage<3>


# ::stappler::xenolith::GesturePinchRecognizer::_gesture

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::GesturePinch


# ::stappler::xenolith::GesturePinchRecognizer::_callback

## BRIEF

## CONTENT

Доступ: protected

Тип: InputCallback


# ::stappler::xenolith::GestureScrollRecognizer

## BRIEF

## CONTENT

Базовые классы:
* GestureRecognizer


# ::stappler::xenolith::GestureScrollRecognizer::InputCallback

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::GestureScrollRecognizer::~GestureScrollRecognizer()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::GestureScrollRecognizer::init(stappler::xenolith::GestureScrollRecognizer::InputCallback&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::GestureScrollRecognizer::InputCallback&&

Возвращает:
* bool

# ::stappler::xenolith::GestureScrollRecognizer::handleInputEvent(stappler::xenolith::InputEvent const&,float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::InputEvent const&
* float

Возвращает:
* bool

# ::stappler::xenolith::GestureScrollRecognizer::_gesture

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::GestureScroll


# ::stappler::xenolith::GestureScrollRecognizer::_callback

## BRIEF

## CONTENT

Доступ: protected

Тип: InputCallback


# ::stappler::xenolith::GestureMoveRecognizer

## BRIEF

## CONTENT

Базовые классы:
* GestureRecognizer


# ::stappler::xenolith::GestureMoveRecognizer::InputCallback

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::GestureMoveRecognizer::~GestureMoveRecognizer()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::GestureMoveRecognizer::init(stappler::xenolith::GestureMoveRecognizer::InputCallback&&,bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::GestureMoveRecognizer::InputCallback&&
* bool

Возвращает:
* bool

# ::stappler::xenolith::GestureMoveRecognizer::canHandleEvent(stappler::xenolith::InputEvent const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::InputEvent const&

Возвращает:
* bool

# ::stappler::xenolith::GestureMoveRecognizer::handleInputEvent(stappler::xenolith::InputEvent const&,float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::InputEvent const&
* float

Возвращает:
* bool

# ::stappler::xenolith::GestureMoveRecognizer::onEnter(stappler::xenolith::InputListener*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::InputListener*


# ::stappler::xenolith::GestureMoveRecognizer::onExit()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::GestureMoveRecognizer::_event

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::GestureData


# ::stappler::xenolith::GestureMoveRecognizer::_callback

## BRIEF

## CONTENT

Доступ: protected

Тип: InputCallback


# ::stappler::xenolith::GestureMoveRecognizer::_listener

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::InputListener*


# ::stappler::xenolith::GestureMoveRecognizer::_onlyWithinNode

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::GestureKeyRecognizer

## BRIEF

## CONTENT

Базовые классы:
* GestureRecognizer


# ::stappler::xenolith::GestureKeyRecognizer::InputCallback

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::GestureKeyRecognizer::KeyMask

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::GestureKeyRecognizer::~GestureKeyRecognizer()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::GestureKeyRecognizer::init(stappler::xenolith::GestureKeyRecognizer::InputCallback&&,stappler::xenolith::GestureKeyRecognizer::KeyMask&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::GestureKeyRecognizer::InputCallback&&
* stappler::xenolith::GestureKeyRecognizer::KeyMask&&

Возвращает:
* bool

# ::stappler::xenolith::GestureKeyRecognizer::canHandleEvent(stappler::xenolith::InputEvent const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::InputEvent const&

Возвращает:
* bool

# ::stappler::xenolith::GestureKeyRecognizer::isKeyPressed(stappler::xenolith::InputKeyCode) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::InputKeyCode

Возвращает:
* bool

# ::stappler::xenolith::GestureKeyRecognizer::addEvent(stappler::xenolith::InputEvent const&,float)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::InputEvent const&
* float

Возвращает:
* bool

# ::stappler::xenolith::GestureKeyRecognizer::removeEvent(stappler::xenolith::InputEvent const&,bool,float)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::InputEvent const&
* bool
* float

Возвращает:
* bool

# ::stappler::xenolith::GestureKeyRecognizer::renewEvent(stappler::xenolith::InputEvent const&,float)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::InputEvent const&
* float

Возвращает:
* bool

# ::stappler::xenolith::GestureKeyRecognizer::_keyMask

## BRIEF

## CONTENT

Доступ: protected

Тип: KeyMask


# ::stappler::xenolith::GestureKeyRecognizer::_pressedKeys

## BRIEF

## CONTENT

Доступ: protected

Тип: KeyMask


# ::stappler::xenolith::GestureKeyRecognizer::_callback

## BRIEF

## CONTENT

Доступ: protected

Тип: InputCallback


# ::stappler::xenolith::GestureMouseOverRecognizer

## BRIEF

## CONTENT

Базовые классы:
* GestureRecognizer


# ::stappler::xenolith::GestureMouseOverRecognizer::InputCallback

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::GestureMouseOverRecognizer::~GestureMouseOverRecognizer()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::GestureMouseOverRecognizer::init(stappler::xenolith::GestureMouseOverRecognizer::InputCallback&&,float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::GestureMouseOverRecognizer::InputCallback&&
* float

Возвращает:
* bool

# ::stappler::xenolith::GestureMouseOverRecognizer::handleInputEvent(stappler::xenolith::InputEvent const&,float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::InputEvent const&
* float

Возвращает:
* bool

# ::stappler::xenolith::GestureMouseOverRecognizer::onEnter(stappler::xenolith::InputListener*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::InputListener*


# ::stappler::xenolith::GestureMouseOverRecognizer::onExit()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::GestureMouseOverRecognizer::updateState(stappler::xenolith::InputEvent const&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::InputEvent const&


# ::stappler::xenolith::GestureMouseOverRecognizer::_event

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::GestureData


# ::stappler::xenolith::GestureMouseOverRecognizer::_viewHasPointer

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::GestureMouseOverRecognizer::_viewHasFocus

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::GestureMouseOverRecognizer::_hasMouseOver

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::GestureMouseOverRecognizer::_value

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::GestureMouseOverRecognizer::_padding

## BRIEF

## CONTENT

Доступ: protected

Тип: float


# ::stappler::xenolith::GestureMouseOverRecognizer::_callback

## BRIEF

## CONTENT

Доступ: protected

Тип: InputCallback


# ::stappler::xenolith::GestureMouseOverRecognizer::_listener

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::InputListener*


# ::stappler::xenolith::operator<<(std::ostream&,stappler::xenolith::GestureEvent)

## BRIEF

## CONTENT

Параметры:
* std::ostream&
* stappler::xenolith::GestureEvent

Возвращает:
* std::ostream&