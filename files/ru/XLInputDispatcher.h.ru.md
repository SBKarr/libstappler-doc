Title: XLInputDispatcher.h


# XENOLITH_SCENE_INPUT_XLINPUTDISPATCHER_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::InputListenerStorage

## BRIEF

## CONTENT

Базовые классы:
* PoolRef


# ::stappler::xenolith::InputListenerStorage::~InputListenerStorage()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::InputListenerStorage::InputListenerStorage(stappler::xenolith::PoolRef*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::PoolRef*


# ::stappler::xenolith::InputListenerStorage::clear()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::InputListenerStorage::reserve(stappler::xenolith::InputListenerStorage const*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::InputListenerStorage const*


# ::stappler::xenolith::InputListenerStorage::addListener(stappler::xenolith::InputListener*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::InputListener*


# ::stappler::xenolith::InputListenerStorage::foreach<typename>(Callback const&)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename Callback

Параметры:
* Callback const&

Возвращает:
* bool

# ::stappler::xenolith::InputListenerStorage::_preSceneEvents

## BRIEF

## CONTENT

Доступ: protected

Тип: memory::vector<InputListener *>*


# ::stappler::xenolith::InputListenerStorage::_sceneEvents

## BRIEF

## CONTENT

Доступ: protected

Тип: memory::vector<InputListener *>*


# ::stappler::xenolith::InputListenerStorage::_postSceneEvents

## BRIEF

## CONTENT

Доступ: protected

Тип: memory::vector<InputListener *>*


# ::stappler::xenolith::InputDispatcher

## BRIEF

## CONTENT

Базовые классы:
* Ref


# ::stappler::xenolith::InputDispatcher::~InputDispatcher()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::InputDispatcher::init(stappler::xenolith::PoolRef*,stappler::xenolith::TextInputViewInterface*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::PoolRef*
* stappler::xenolith::TextInputViewInterface*

Возвращает:
* bool

# ::stappler::xenolith::InputDispatcher::update(stappler::xenolith::UpdateTime const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::UpdateTime const&


# ::stappler::xenolith::InputDispatcher::acquireNewStorage()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Rc<stappler::xenolith::InputListenerStorage>

# ::stappler::xenolith::InputDispatcher::commitStorage(Rc<stappler::xenolith::InputListenerStorage>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Rc<stappler::xenolith::InputListenerStorage>&&


# ::stappler::xenolith::InputDispatcher::handleInputEvent(stappler::xenolith::InputEventData const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::InputEventData const&


# ::stappler::xenolith::InputDispatcher::getActiveEvents() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Vector<stappler::xenolith::InputEventData>

# ::stappler::xenolith::InputDispatcher::setListenerExclusive(stappler::xenolith::InputListener const*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::InputListener const*


# ::stappler::xenolith::InputDispatcher::setListenerExclusiveForTouch(stappler::xenolith::InputListener const*,uint32_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::InputListener const*
* uint32_t


# ::stappler::xenolith::InputDispatcher::setListenerExclusiveForKey(stappler::xenolith::InputListener const*,stappler::xenolith::InputKeyCode)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::InputListener const*
* stappler::xenolith::InputKeyCode


# ::stappler::xenolith::InputDispatcher::getTextInputManager() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Rc<stappler::xenolith::TextInputManager> const&

# ::stappler::xenolith::InputDispatcher::isInBackground() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::InputDispatcher::hasFocus() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::InputDispatcher::isPointerWithinWindow() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::InputDispatcher::getEventInfo(stappler::xenolith::InputEventData const&) const

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::InputEventData const&

Возвращает:
* stappler::xenolith::InputEvent

# ::stappler::xenolith::InputDispatcher::updateEventInfo(stappler::xenolith::InputEvent&,stappler::xenolith::InputEventData const&) const

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::InputEvent&
* stappler::xenolith::InputEventData const&


# ::stappler::xenolith::InputDispatcher::EventHandlersInfo

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::InputDispatcher::EventHandlersInfo::event

## BRIEF

## CONTENT

Тип: stappler::xenolith::InputEvent


# ::stappler::xenolith::InputDispatcher::EventHandlersInfo::listeners

## BRIEF

## CONTENT

Тип: Vector<Rc<stappler::xenolith::InputListener>>


# ::stappler::xenolith::InputDispatcher::EventHandlersInfo::exclusive

## BRIEF

## CONTENT

Тип: Rc<stappler::xenolith::InputListener>


# ::stappler::xenolith::InputDispatcher::EventHandlersInfo::processed

## BRIEF

## CONTENT

Тип: Vector<const stappler::xenolith::InputListener *>


# ::stappler::xenolith::InputDispatcher::EventHandlersInfo::handle(bool)

## BRIEF

## CONTENT

Параметры:
* bool


# ::stappler::xenolith::InputDispatcher::EventHandlersInfo::clear(bool)

## BRIEF

## CONTENT

Параметры:
* bool


# ::stappler::xenolith::InputDispatcher::EventHandlersInfo::setExclusive(stappler::xenolith::InputListener const*)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::InputListener const*


# ::stappler::xenolith::InputDispatcher::setListenerExclusive(stappler::xenolith::InputDispatcher::EventHandlersInfo&,stappler::xenolith::InputListener const*) const

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::InputDispatcher::EventHandlersInfo&
* stappler::xenolith::InputListener const*


# ::stappler::xenolith::InputDispatcher::clearKey(stappler::xenolith::InputEventData const&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::InputEventData const&


# ::stappler::xenolith::InputDispatcher::resetKey(stappler::xenolith::InputEventData const&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::InputEventData const&

Возвращает:
* stappler::xenolith::InputDispatcher::EventHandlersInfo*

# ::stappler::xenolith::InputDispatcher::handleKey(stappler::xenolith::InputEventData const&,bool)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::InputEventData const&
* bool


# ::stappler::xenolith::InputDispatcher::_currentTime

## BRIEF

## CONTENT

Доступ: protected

Тип: uint64_t


# ::stappler::xenolith::InputDispatcher::_activeEvents

## BRIEF

## CONTENT

Доступ: protected

Тип: HashMap<uint32_t, stappler::xenolith::InputDispatcher::EventHandlersInfo>


# ::stappler::xenolith::InputDispatcher::_activeKeys

## BRIEF

## CONTENT

Доступ: protected

Тип: HashMap<stappler::xenolith::InputKeyCode, stappler::xenolith::InputDispatcher::EventHandlersInfo>


# ::stappler::xenolith::InputDispatcher::_activeKeySyms

## BRIEF

## CONTENT

Доступ: protected

Тип: HashMap<uint32_t, stappler::xenolith::InputDispatcher::EventHandlersInfo>


# ::stappler::xenolith::InputDispatcher::_events

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::xenolith::InputListenerStorage>


# ::stappler::xenolith::InputDispatcher::_tmpEvents

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::xenolith::InputListenerStorage>


# ::stappler::xenolith::InputDispatcher::_textInput

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::xenolith::TextInputManager>


# ::stappler::xenolith::InputDispatcher::_pool

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::xenolith::PoolRef>


# ::stappler::xenolith::InputDispatcher::_pointerLocation

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::Vec2


# ::stappler::xenolith::InputDispatcher::_inBackground

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::InputDispatcher::_hasFocus

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::InputDispatcher::_pointerInWindow

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::InputListenerStorage::foreach<typename>(Callback const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Callback

Параметры:
* Callback const&

Возвращает:
* bool