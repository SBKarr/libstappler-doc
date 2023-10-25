Title: MaterialInputField.h


# XENOLITH_RENDERER_MATERIAL2D_COMPONENTS_INPUT_MATERIALINPUTFIELD_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::material2d::InputFieldStyle

## BRIEF

## CONTENT

Значения:
* Filled
* Outlined


# ::stappler::xenolith::material2d::InputFieldPasswordMode

## BRIEF

## CONTENT

Значения:
* NotPassword
* ShowAll
* ShowChar
* ShowNone


# ::stappler::xenolith::material2d::InputFieldError

## BRIEF

## CONTENT

Значения:
* None
* Overflow
* InvalidChar


# ::stappler::xenolith::material2d::InputField

## BRIEF

## CONTENT

Базовые классы:
* Surface


# ::stappler::xenolith::material2d::InputField::InputEnabledActionTag

## BRIEF

## CONTENT

Доступ: public

Тип: uint32_t const


# ::stappler::xenolith::material2d::InputField::InputEnabledLabelActionTag

## BRIEF

## CONTENT

Доступ: public

Тип: uint32_t const


# ::stappler::xenolith::material2d::InputField::~InputField()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::material2d::InputField::init(stappler::xenolith::material2d::InputFieldStyle)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::material2d::InputFieldStyle

Возвращает:
* bool

# ::stappler::xenolith::material2d::InputField::init(stappler::xenolith::material2d::InputFieldStyle,stappler::xenolith::material2d::SurfaceStyle const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::material2d::InputFieldStyle
* stappler::xenolith::material2d::SurfaceStyle const&

Возвращает:
* bool

# ::stappler::xenolith::material2d::InputField::onContentSizeDirty()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::material2d::InputField::setLabelText(stappler::StringView)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView


# ::stappler::xenolith::material2d::InputField::getLabelText() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::StringView

# ::stappler::xenolith::material2d::InputField::setSupportingText(stappler::StringView)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView


# ::stappler::xenolith::material2d::InputField::getSupportingText() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::StringView

# ::stappler::xenolith::material2d::InputField::setLeadingIconName(stappler::xenolith::IconName)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::IconName


# ::stappler::xenolith::material2d::InputField::getLeadingIconName() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::IconName

# ::stappler::xenolith::material2d::InputField::setTrailingIconName(stappler::xenolith::IconName)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::IconName


# ::stappler::xenolith::material2d::InputField::getTrailingIconName() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::IconName

# ::stappler::xenolith::material2d::InputField::getInputString() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::WideStringView

# ::stappler::xenolith::material2d::InputField::updateActivityState()

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::material2d::InputField::updateInputEnabled()

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::material2d::InputField::acquireInput(stappler::xenolith::Vec2 const&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::Vec2 const&


# ::stappler::xenolith::material2d::InputField::handleTextInput(stappler::WideStringView,stappler::xenolith::TextCursor,stappler::xenolith::TextCursor)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::WideStringView
* stappler::xenolith::TextCursor
* stappler::xenolith::TextCursor


# ::stappler::xenolith::material2d::InputField::handleKeyboardEnabled(bool,stappler::xenolith::Rect const&,float)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* bool
* stappler::xenolith::Rect const&
* float


# ::stappler::xenolith::material2d::InputField::handleInputEnabled(bool)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* bool


# ::stappler::xenolith::material2d::InputField::handleInputChar(char16_t)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* char16_t

Возвращает:
* bool

# ::stappler::xenolith::material2d::InputField::handleError(stappler::xenolith::material2d::InputFieldError)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::material2d::InputFieldError


# ::stappler::xenolith::material2d::InputField::_style

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::material2d::InputFieldStyle


# ::stappler::xenolith::material2d::InputField::_inputListener

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::InputListener*


# ::stappler::xenolith::material2d::InputField::_focusInputListener

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::InputListener*


# ::stappler::xenolith::material2d::InputField::_labelText

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::material2d::TypescaleLabel*


# ::stappler::xenolith::material2d::InputField::_supportingText

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::material2d::TypescaleLabel*


# ::stappler::xenolith::material2d::InputField::_container

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::material2d::InputTextContainer*


# ::stappler::xenolith::material2d::InputField::_leadingIcon

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::material2d::IconSprite*


# ::stappler::xenolith::material2d::InputField::_trailingIcon

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::material2d::IconSprite*


# ::stappler::xenolith::material2d::InputField::_indicator

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::material2d::Surface*


# ::stappler::xenolith::material2d::InputField::_inputString

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::mem_std::WideString


# ::stappler::xenolith::material2d::InputField::_handler

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::TextInputHandler


# ::stappler::xenolith::material2d::InputField::_cursor

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::TextCursor


# ::stappler::xenolith::material2d::InputField::_markedRegion

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::TextCursor


# ::stappler::xenolith::material2d::InputField::_inputType

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::TextInputType


# ::stappler::xenolith::material2d::InputField::_passwordMode

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::material2d::InputFieldPasswordMode


# ::stappler::xenolith::material2d::InputField::_activityAnimationDuration

## BRIEF

## CONTENT

Доступ: protected

Тип: float


# ::stappler::xenolith::material2d::InputField::_mouseOver

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::material2d::InputField::_enabled

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::material2d::InputField::_focused

## BRIEF

## CONTENT

Доступ: protected

Тип: bool
