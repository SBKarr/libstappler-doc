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

Тип: stappler::xenolith::Vec2


# ::stappler::xenolith::InputEvent::currentLocation

## BRIEF

## CONTENT

Тип: stappler::xenolith::Vec2


# ::stappler::xenolith::InputEvent::previousLocation

## BRIEF

## CONTENT

Тип: stappler::xenolith::Vec2


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


# ::stappler::xenolith::TextCursorPosition

## BRIEF

## CONTENT


# ::stappler::xenolith::TextCursorLength

## BRIEF

## CONTENT


# ::stappler::xenolith::TextInputType

## BRIEF

## CONTENT

Значения:
* Empty
* Date_Date
* Date_DateTime
* Date_Time
* Date
* Number_Numbers
* Number_Decimial
* Number_Signed
* Number
* Phone
* Text_Text
* Text_Search
* Text_Punctuation
* Text_Email
* Text_Url
* Text
* Default
* ClassMask
* PasswordBit
* MultiLineBit
* AutoCorrectionBit
* ReturnKeyMask
* ReturnKeyDefault
* ReturnKeyGo
* ReturnKeyGoogle
* ReturnKeyJoin
* ReturnKeyNext
* ReturnKeyRoute
* ReturnKeySearch
* ReturnKeySend
* ReturnKeyYahoo
* ReturnKeyDone
* ReturnKeyEmergencyCall


# ::stappler::xenolith::operator|(stappler::xenolith::TextInputType const&,stappler::xenolith::TextInputType const&)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::TextInputType const&
* stappler::xenolith::TextInputType const&

Возвращает:
* stappler::xenolith::TextInputType

# ::stappler::xenolith::operator&(stappler::xenolith::TextInputType const&,stappler::xenolith::TextInputType const&)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::TextInputType const&
* stappler::xenolith::TextInputType const&

Возвращает:
* stappler::xenolith::TextInputType

# ::stappler::xenolith::operator^(stappler::xenolith::TextInputType const&,stappler::xenolith::TextInputType const&)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::TextInputType const&
* stappler::xenolith::TextInputType const&

Возвращает:
* stappler::xenolith::TextInputType

# ::stappler::xenolith::operator|=(stappler::xenolith::TextInputType&,stappler::xenolith::TextInputType const&)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::TextInputType&
* stappler::xenolith::TextInputType const&

Возвращает:
* stappler::xenolith::TextInputType&

# ::stappler::xenolith::operator&=(stappler::xenolith::TextInputType&,stappler::xenolith::TextInputType const&)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::TextInputType&
* stappler::xenolith::TextInputType const&

Возвращает:
* stappler::xenolith::TextInputType&

# ::stappler::xenolith::operator^=(stappler::xenolith::TextInputType&,stappler::xenolith::TextInputType const&)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::TextInputType&
* stappler::xenolith::TextInputType const&

Возвращает:
* stappler::xenolith::TextInputType&

# ::stappler::xenolith::operator==(stappler::xenolith::TextInputType const&,std::underlying_type<TextInputType>::type const&)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::TextInputType const&
* std::underlying_type<TextInputType>::type const&

Возвращает:
* bool

# ::stappler::xenolith::operator==(std::underlying_type<TextInputType>::type const&,stappler::xenolith::TextInputType const&)

## BRIEF

## CONTENT

Параметры:
* std::underlying_type<TextInputType>::type const&
* stappler::xenolith::TextInputType const&

Возвращает:
* bool

# ::stappler::xenolith::operator!=(stappler::xenolith::TextInputType const&,std::underlying_type<TextInputType>::type const&)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::TextInputType const&
* std::underlying_type<TextInputType>::type const&

Возвращает:
* bool

# ::stappler::xenolith::operator!=(std::underlying_type<TextInputType>::type const&,stappler::xenolith::TextInputType const&)

## BRIEF

## CONTENT

Параметры:
* std::underlying_type<TextInputType>::type const&
* stappler::xenolith::TextInputType const&

Возвращает:
* bool

# ::stappler::xenolith::operator~(stappler::xenolith::TextInputType const&)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::TextInputType const&

Возвращает:
* stappler::xenolith::TextInputType

# ::stappler::xenolith::TextCursor

## BRIEF

## CONTENT


# ::stappler::xenolith::TextCursor::InvalidCursor

## BRIEF

## CONTENT

Тип: stappler::xenolith::TextCursor const


# ::stappler::xenolith::TextCursor::start

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::xenolith::TextCursor::length

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::xenolith::TextCursor::TextCursor()

## BRIEF

## CONTENT


# ::stappler::xenolith::TextCursor::TextCursor(uint32_t)

## BRIEF

## CONTENT

Параметры:
* uint32_t


# ::stappler::xenolith::TextCursor::TextCursor(uint32_t,uint32_t)

## BRIEF

## CONTENT

Параметры:
* uint32_t
* uint32_t


# ::stappler::xenolith::TextCursor::TextCursor(stappler::xenolith::TextCursorPosition)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::TextCursorPosition


# ::stappler::xenolith::TextCursor::TextCursor(stappler::xenolith::TextCursorPosition,stappler::xenolith::TextCursorLength)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::TextCursorPosition
* stappler::xenolith::TextCursorLength


# ::stappler::xenolith::TextCursor::TextCursor(stappler::xenolith::TextCursorPosition,stappler::xenolith::TextCursorPosition)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::TextCursorPosition
* stappler::xenolith::TextCursorPosition


# ::stappler::xenolith::TextCursor::operator==(stappler::xenolith::TextCursor const&) const

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::TextCursor const&

Возвращает:
* bool

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


# ::stappler::xenolith::TextCursor::InvalidCursor

## BRIEF

## CONTENT

Тип: stappler::xenolith::TextCursor const


# ::std::hash<stappler::xenolith::InputEventData>::hash<stappler::xenolith::InputEventData>

## BRIEF

## CONTENT


# ::std::hash<stappler::xenolith::InputEventData>::operator()(stappler::xenolith::InputEventData const&) const

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::InputEventData const&

Возвращает:
* std::size_t