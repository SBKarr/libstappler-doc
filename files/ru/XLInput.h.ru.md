Title: XLInput.h


# XENOLITH_SCENE_INPUT_XLINPUT_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::InputFlags

## BRIEF

## CONTENT


# ::stappler::xenolith::InputMouseButton

## BRIEF

## CONTENT


# ::stappler::xenolith::InputModifier

## BRIEF

## CONTENT


# ::stappler::xenolith::InputKeyCode

## BRIEF

## CONTENT


# ::stappler::xenolith::InputKeyComposeState

## BRIEF

## CONTENT


# ::stappler::xenolith::InputEventName

## BRIEF

## CONTENT


# ::stappler::xenolith::InputEventData

## BRIEF

## CONTENT


# ::stappler::xenolith::TextInputType

## BRIEF

## CONTENT


# ::stappler::xenolith::TextCursor

## BRIEF

## CONTENT


# ::stappler::xenolith::TextCursorPosition

## BRIEF

## CONTENT


# ::stappler::xenolith::TextCursorLength

## BRIEF

## CONTENT


# ::stappler::xenolith::InputEventState

## BRIEF

## CONTENT

Значения:
* Declined
* Processed
* Captured


# ::stappler::xenolith::InputEvent

## BRIEF

## CONTENT


# ::stappler::xenolith::InputEvent::data

## BRIEF

## CONTENT

Тип: stappler::xenolith::InputEventData


# ::stappler::xenolith::InputEvent::originalLocation

## BRIEF

## CONTENT

Тип: stappler::geom::Vec2


# ::stappler::xenolith::InputEvent::currentLocation

## BRIEF

## CONTENT

Тип: stappler::geom::Vec2


# ::stappler::xenolith::InputEvent::previousLocation

## BRIEF

## CONTENT

Тип: stappler::geom::Vec2


# ::stappler::xenolith::InputEvent::originalTime

## BRIEF

## CONTENT

Тип: uint64_t


# ::stappler::xenolith::InputEvent::currentTime

## BRIEF

## CONTENT

Тип: uint64_t


# ::stappler::xenolith::InputEvent::previousTime

## BRIEF

## CONTENT

Тип: uint64_t


# ::stappler::xenolith::InputEvent::originalModifiers

## BRIEF

## CONTENT

Тип: stappler::xenolith::InputModifier


# ::stappler::xenolith::InputEvent::previousModifiers

## BRIEF

## CONTENT

Тип: stappler::xenolith::InputModifier


# ::stappler::xenolith::TextInputViewInterface

## BRIEF

## CONTENT


# ::stappler::xenolith::TextInputViewInterface::~TextInputViewInterface()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::TextInputViewInterface::updateTextCursor(uint32_t,uint32_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint32_t
* uint32_t


# ::stappler::xenolith::TextInputViewInterface::updateTextInput(stappler::WideStringView,uint32_t,uint32_t,stappler::xenolith::TextInputType)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::WideStringView
* uint32_t
* uint32_t
* stappler::xenolith::TextInputType


# ::stappler::xenolith::TextInputViewInterface::runTextInput(stappler::WideStringView,uint32_t,uint32_t,stappler::xenolith::TextInputType)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::WideStringView
* uint32_t
* uint32_t
* stappler::xenolith::TextInputType


# ::stappler::xenolith::TextInputViewInterface::cancelTextInput()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::TextCursor::InvalidCursor

## BRIEF

## CONTENT

Тип: stappler::xenolith::TextCursor const


# ::std::hash<::stappler::xenolith::InputEventData>::hash<::stappler::xenolith::InputEventData>

## BRIEF

## CONTENT


# ::std::hash<::stappler::xenolith::InputEventData>::operator()(::stappler::xenolith::InputEventData const&) const

## BRIEF

## CONTENT

Параметры:
* ::stappler::xenolith::InputEventData const&

Возвращает:
* std::size_t