Title: XLInputListener.h


# XENOLITH_SCENE_INPUT_XLINPUTLISTENER_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::InputListener

## BRIEF

## CONTENT

Базовые классы:
* Ref


# ::stappler::xenolith::InputListener::EventMask

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::InputListener::ButtonMask

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::InputListener::KeyMask

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::InputListener::InputCallback<typename>

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename T


# ::stappler::xenolith::InputListener::DefaultEventFilter

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::InputListener::EventFilter

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::InputListener::EventMaskTouch

## BRIEF

## CONTENT

Доступ: public

Тип: EventMask


# ::stappler::xenolith::InputListener::EventMaskKeyboard

## BRIEF

## CONTENT

Доступ: public

Тип: EventMask


# ::stappler::xenolith::InputListener::makeButtonMask(std::initializer_list<InputMouseButton>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* std::initializer_list<InputMouseButton>&&

Возвращает:
* ButtonMask

# ::stappler::xenolith::InputListener::makeEventMask(std::initializer_list<InputEventName>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* std::initializer_list<InputEventName>&&

Возвращает:
* EventMask

# ::stappler::xenolith::InputListener::makeKeyMask(std::initializer_list<InputKeyCode>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* std::initializer_list<InputKeyCode>&&

Возвращает:
* KeyMask

# ::stappler::xenolith::InputListener::InputListener()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::InputListener::~InputListener()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::InputListener::init(int32_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* int32_t

Возвращает:
* bool

# ::stappler::xenolith::InputListener::onEnter(stappler::xenolith::Scene*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Scene*


# ::stappler::xenolith::InputListener::onExit()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::InputListener::update(stappler::xenolith::UpdateTime)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::UpdateTime


# ::stappler::xenolith::InputListener::isRunning() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::InputListener::setEnabled(bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* bool


# ::stappler::xenolith::InputListener::isEnabled() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::InputListener::setOwner(stappler::xenolith::Node*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Node*


# ::stappler::xenolith::InputListener::getOwner() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::Node*

# ::stappler::xenolith::InputListener::setPriority(int32_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* int32_t


# ::stappler::xenolith::InputListener::getPriority() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* int32_t

# ::stappler::xenolith::InputListener::setDedicatedFocus(uint32_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint32_t


# ::stappler::xenolith::InputListener::getDedicatedFocus() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint32_t

# ::stappler::xenolith::InputListener::setOpacityFilter(float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float


# ::stappler::xenolith::InputListener::getOpacityFilter() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* float

# ::stappler::xenolith::InputListener::setTouchPadding(float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float


# ::stappler::xenolith::InputListener::getTouchPadding() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* float

# ::stappler::xenolith::InputListener::setDensity(float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float


# ::stappler::xenolith::InputListener::getDensity() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* float

# ::stappler::xenolith::InputListener::setExclusive()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::InputListener::setExclusiveForTouch(uint32_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint32_t


# ::stappler::xenolith::InputListener::setSwallowEvents(stappler::xenolith::InputListener::EventMask&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::InputListener::EventMask&&


# ::stappler::xenolith::InputListener::setSwallowEvents(stappler::xenolith::InputListener::EventMask const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::InputListener::EventMask const&


# ::stappler::xenolith::InputListener::setSwallowAllEvents()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::InputListener::setSwallowEvent(stappler::xenolith::InputEventName)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::InputEventName


# ::stappler::xenolith::InputListener::clearSwallowAllEvents()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::InputListener::clearSwallowEvent(stappler::xenolith::InputEventName)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::InputEventName


# ::stappler::xenolith::InputListener::clearSwallowEvents(stappler::xenolith::InputListener::EventMask const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::InputListener::EventMask const&


# ::stappler::xenolith::InputListener::isSwallowAllEvents() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::InputListener::isSwallowAllEvents(stappler::xenolith::InputListener::EventMask const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::InputListener::EventMask const&

Возвращает:
* bool

# ::stappler::xenolith::InputListener::isSwallowAnyEvents(stappler::xenolith::InputListener::EventMask const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::InputListener::EventMask const&

Возвращает:
* bool

# ::stappler::xenolith::InputListener::isSwallowEvent(stappler::xenolith::InputEventName) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::InputEventName

Возвращает:
* bool

# ::stappler::xenolith::InputListener::setTouchFilter(stappler::xenolith::InputListener::EventFilter const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::InputListener::EventFilter const&


# ::stappler::xenolith::InputListener::shouldSwallowEvent(stappler::xenolith::InputEvent const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::InputEvent const&

Возвращает:
* bool

# ::stappler::xenolith::InputListener::canHandleEvent(stappler::xenolith::InputEvent const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::InputEvent const&

Возвращает:
* bool

# ::stappler::xenolith::InputListener::handleEvent(stappler::xenolith::InputEvent const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::InputEvent const&

Возвращает:
* stappler::xenolith::InputEventState

# ::stappler::xenolith::InputListener::addTouchRecognizer(InputCallback<stappler::xenolith::GestureData>&&,stappler::xenolith::InputListener::ButtonMask&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* InputCallback<stappler::xenolith::GestureData>&&
* stappler::xenolith::InputListener::ButtonMask&&

Возвращает:
* stappler::xenolith::GestureRecognizer*

# ::stappler::xenolith::InputListener::addTapRecognizer(InputCallback<stappler::xenolith::GestureTap>&&,stappler::xenolith::InputListener::ButtonMask&&,uint32_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* InputCallback<stappler::xenolith::GestureTap>&&
* stappler::xenolith::InputListener::ButtonMask&&
* uint32_t

Возвращает:
* stappler::xenolith::GestureRecognizer*

# ::stappler::xenolith::InputListener::addPressRecognizer(InputCallback<stappler::xenolith::GesturePress>&&,stappler::TimeInterval,bool,stappler::xenolith::InputListener::ButtonMask&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* InputCallback<stappler::xenolith::GesturePress>&&
* stappler::TimeInterval
* bool
* stappler::xenolith::InputListener::ButtonMask&&

Возвращает:
* stappler::xenolith::GestureRecognizer*

# ::stappler::xenolith::InputListener::addSwipeRecognizer(InputCallback<stappler::xenolith::GestureSwipe>&&,float,bool,stappler::xenolith::InputListener::ButtonMask&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* InputCallback<stappler::xenolith::GestureSwipe>&&
* float
* bool
* stappler::xenolith::InputListener::ButtonMask&&

Возвращает:
* stappler::xenolith::GestureRecognizer*

# ::stappler::xenolith::InputListener::addPinchRecognizer(InputCallback<stappler::xenolith::GesturePinch>&&,stappler::xenolith::InputListener::ButtonMask&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* InputCallback<stappler::xenolith::GesturePinch>&&
* stappler::xenolith::InputListener::ButtonMask&&

Возвращает:
* stappler::xenolith::GestureRecognizer*

# ::stappler::xenolith::InputListener::addScrollRecognizer(InputCallback<stappler::xenolith::GestureScroll>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* InputCallback<stappler::xenolith::GestureScroll>&&

Возвращает:
* stappler::xenolith::GestureRecognizer*

# ::stappler::xenolith::InputListener::addMoveRecognizer(InputCallback<stappler::xenolith::GestureData>&&,bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* InputCallback<stappler::xenolith::GestureData>&&
* bool

Возвращает:
* stappler::xenolith::GestureRecognizer*

# ::stappler::xenolith::InputListener::addMouseOverRecognizer(InputCallback<stappler::xenolith::GestureData>&&,float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* InputCallback<stappler::xenolith::GestureData>&&
* float

Возвращает:
* stappler::xenolith::GestureRecognizer*

# ::stappler::xenolith::InputListener::addKeyRecognizer(InputCallback<stappler::xenolith::GestureData>&&,stappler::xenolith::InputListener::KeyMask&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* InputCallback<stappler::xenolith::GestureData>&&
* stappler::xenolith::InputListener::KeyMask&&

Возвращает:
* stappler::xenolith::GestureKeyRecognizer*

# ::stappler::xenolith::InputListener::setPointerEnterCallback(Function<bool (bool)>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Function<bool (bool)>&&


# ::stappler::xenolith::InputListener::setBackgroudCallback(Function<bool (bool)>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Function<bool (bool)>&&


# ::stappler::xenolith::InputListener::setFocusCallback(Function<bool (bool)>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Function<bool (bool)>&&


# ::stappler::xenolith::InputListener::clear()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::InputListener::shouldProcessEvent(stappler::xenolith::InputEvent const&) const

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::InputEvent const&

Возвращает:
* bool

# ::stappler::xenolith::InputListener::_shouldProcessEvent(stappler::xenolith::InputEvent const&) const

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::InputEvent const&

Возвращает:
* bool

# ::stappler::xenolith::InputListener::addEventMask(stappler::xenolith::InputListener::EventMask const&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::InputListener::EventMask const&


# ::stappler::xenolith::InputListener::addRecognizer(stappler::xenolith::GestureRecognizer*)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::GestureRecognizer*

Возвращает:
* stappler::xenolith::GestureRecognizer*

# ::stappler::xenolith::InputListener::_priority

## BRIEF

## CONTENT

Доступ: protected

Тип: int32_t


# ::stappler::xenolith::InputListener::_dedicatedFocus

## BRIEF

## CONTENT

Доступ: protected

Тип: uint32_t


# ::stappler::xenolith::InputListener::_enabled

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::InputListener::_running

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::InputListener::_owner

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::Node*


# ::stappler::xenolith::InputListener::_eventMask

## BRIEF

## CONTENT

Доступ: protected

Тип: EventMask


# ::stappler::xenolith::InputListener::_swallowEvents

## BRIEF

## CONTENT

Доступ: protected

Тип: EventMask


# ::stappler::xenolith::InputListener::_touchPadding

## BRIEF

## CONTENT

Доступ: protected

Тип: float


# ::stappler::xenolith::InputListener::_opacityFilter

## BRIEF

## CONTENT

Доступ: protected

Тип: float


# ::stappler::xenolith::InputListener::_density

## BRIEF

## CONTENT

Доступ: protected

Тип: float


# ::stappler::xenolith::InputListener::_scene

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::Scene*


# ::stappler::xenolith::InputListener::_eventFilter

## BRIEF

## CONTENT

Доступ: protected

Тип: EventFilter


# ::stappler::xenolith::InputListener::_recognizers

## BRIEF

## CONTENT

Доступ: protected

Тип: Vector<Rc<stappler::xenolith::GestureRecognizer>>


# ::stappler::xenolith::InputListener::_callbacks

## BRIEF

## CONTENT

Доступ: protected

Тип: Map<stappler::xenolith::InputEventName, Function<bool (bool)>>
