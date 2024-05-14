Title: XLTextInputManager.h


# XENOLITH_SCENE_INPUT_XLTEXTINPUTMANAGER_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::TextInputHandler

## BRIEF

## CONTENT


# ::stappler::xenolith::TextInputHandler::onText

## BRIEF

## CONTENT

Тип: Function<void (stappler::WideStringView, stappler::xenolith::TextCursor, stappler::xenolith::TextCursor)>


# ::stappler::xenolith::TextInputHandler::onKeyboard

## BRIEF

## CONTENT

Тип: Function<void (bool, const stappler::geom::Rect &, float)>


# ::stappler::xenolith::TextInputHandler::onInput

## BRIEF

## CONTENT

Тип: Function<void (bool)>


# ::stappler::xenolith::TextInputHandler::manager

## BRIEF

## CONTENT

Тип: Rc<stappler::xenolith::TextInputManager>


# ::stappler::xenolith::TextInputHandler::~TextInputHandler()

## BRIEF

## CONTENT


# ::stappler::xenolith::TextInputHandler::run(stappler::xenolith::TextInputManager*,stappler::WideStringView,stappler::xenolith::TextCursor,stappler::xenolith::TextCursor,stappler::xenolith::TextInputType)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::TextInputManager*
* stappler::WideStringView
* stappler::xenolith::TextCursor
* stappler::xenolith::TextCursor
* stappler::xenolith::TextInputType

Возвращает:
* bool

# ::stappler::xenolith::TextInputHandler::cancel()

## BRIEF

## CONTENT


# ::stappler::xenolith::TextInputHandler::setString(stappler::WideStringView,stappler::xenolith::TextCursor,stappler::xenolith::TextCursor)

## BRIEF

## CONTENT

Параметры:
* stappler::WideStringView
* stappler::xenolith::TextCursor
* stappler::xenolith::TextCursor

Возвращает:
* bool

# ::stappler::xenolith::TextInputHandler::setCursor(stappler::xenolith::TextCursor)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::TextCursor

Возвращает:
* bool

# ::stappler::xenolith::TextInputHandler::setMarked(stappler::xenolith::TextCursor)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::TextCursor

Возвращает:
* bool

# ::stappler::xenolith::TextInputHandler::getString() const

## BRIEF

## CONTENT

Возвращает:
* stappler::WideStringView

# ::stappler::xenolith::TextInputHandler::getCursor() const

## BRIEF

## CONTENT

Возвращает:
* stappler::xenolith::TextCursor

# ::stappler::xenolith::TextInputHandler::getMarked() const

## BRIEF

## CONTENT

Возвращает:
* stappler::xenolith::TextCursor

# ::stappler::xenolith::TextInputHandler::isInputEnabled() const

## BRIEF

## CONTENT

Возвращает:
* bool

# ::stappler::xenolith::TextInputHandler::isActive() const

## BRIEF

## CONTENT

Возвращает:
* bool

# ::stappler::xenolith::TextInputManager

## BRIEF

## CONTENT

Базовые классы:
* Ref


# ::stappler::xenolith::TextInputManager::TextInputManager()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::TextInputManager::init(stappler::xenolith::TextInputViewInterface*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::TextInputViewInterface*

Возвращает:
* bool

# ::stappler::xenolith::TextInputManager::insertText(stappler::WideStringView,bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::WideStringView
* bool


# ::stappler::xenolith::TextInputManager::insertText(stappler::WideStringView,stappler::xenolith::TextCursor)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::WideStringView
* stappler::xenolith::TextCursor


# ::stappler::xenolith::TextInputManager::setMarkedText(stappler::WideStringView,stappler::xenolith::TextCursor,stappler::xenolith::TextCursor)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::WideStringView
* stappler::xenolith::TextCursor
* stappler::xenolith::TextCursor


# ::stappler::xenolith::TextInputManager::deleteBackward()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::TextInputManager::deleteForward()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::TextInputManager::unmarkText()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::TextInputManager::hasText()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::TextInputManager::textChanged(stappler::WideStringView,stappler::xenolith::TextCursor,stappler::xenolith::TextCursor)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::WideStringView
* stappler::xenolith::TextCursor
* stappler::xenolith::TextCursor


# ::stappler::xenolith::TextInputManager::cursorChanged(stappler::xenolith::TextCursor)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::TextCursor


# ::stappler::xenolith::TextInputManager::markedChanged(stappler::xenolith::TextCursor)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::TextCursor


# ::stappler::xenolith::TextInputManager::setInputEnabled(bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* bool


# ::stappler::xenolith::TextInputManager::onTextChanged()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::TextInputManager::run(stappler::xenolith::TextInputHandler*,stappler::WideStringView,stappler::xenolith::TextCursor,stappler::xenolith::TextCursor,stappler::xenolith::TextInputType)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::TextInputHandler*
* stappler::WideStringView
* stappler::xenolith::TextCursor
* stappler::xenolith::TextCursor
* stappler::xenolith::TextInputType

Возвращает:
* bool

# ::stappler::xenolith::TextInputManager::setString(stappler::WideStringView,stappler::xenolith::TextCursor,stappler::xenolith::TextCursor)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::WideStringView
* stappler::xenolith::TextCursor
* stappler::xenolith::TextCursor


# ::stappler::xenolith::TextInputManager::setCursor(stappler::xenolith::TextCursor)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::TextCursor


# ::stappler::xenolith::TextInputManager::setMarked(stappler::xenolith::TextCursor)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::TextCursor


# ::stappler::xenolith::TextInputManager::getStringByRange(stappler::xenolith::TextCursor)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::TextCursor

Возвращает:
* stappler::WideStringView

# ::stappler::xenolith::TextInputManager::getString() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::WideStringView

# ::stappler::xenolith::TextInputManager::getCursor() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::TextCursor

# ::stappler::xenolith::TextInputManager::getMarked() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::TextCursor

# ::stappler::xenolith::TextInputManager::cancel()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::TextInputManager::isRunning() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::TextInputManager::isInputEnabled() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::TextInputManager::getHandler() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::TextInputHandler*

# ::stappler::xenolith::TextInputManager::canHandleInputEvent(stappler::xenolith::InputEventData const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::InputEventData const&

Возвращает:
* bool

# ::stappler::xenolith::TextInputManager::handleInputEvent(stappler::xenolith::InputEventData const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::InputEventData const&

Возвращает:
* bool

# ::stappler::xenolith::TextInputManager::doInsertText(stappler::WideStringView,bool)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::WideStringView
* bool

Возвращает:
* bool

# ::stappler::xenolith::TextInputManager::_view

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::TextInputViewInterface*


# ::stappler::xenolith::TextInputManager::_handler

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::TextInputHandler*


# ::stappler::xenolith::TextInputManager::_isInputEnabled

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::TextInputManager::_running

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::TextInputManager::_type

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::TextInputType


# ::stappler::xenolith::TextInputManager::_string

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::mem_std::WideString


# ::stappler::xenolith::TextInputManager::_cursor

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::TextCursor


# ::stappler::xenolith::TextInputManager::_marked

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::TextCursor


# ::stappler::xenolith::TextInputManager::_compose

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::InputKeyComposeState
