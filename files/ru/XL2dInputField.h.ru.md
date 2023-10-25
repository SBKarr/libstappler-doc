Title: XL2dInputField.h


# XENOLITH_RENDERER_GUI2D_XL2DINPUTFIELD_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::gui2d::InputField

## BRIEF

## CONTENT

Базовые классы:
* Node
* InputLabelDelegate


# ::stappler::xenolith::gui2d::InputField::Handler

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::gui2d::InputField::Cursor

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::gui2d::InputField::PasswordMode

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::gui2d::InputField::Error

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::gui2d::InputField::Callback

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::gui2d::InputField::CharFilter

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::gui2d::InputField::init()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::gui2d::InputField::onContentSizeDirty()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::gui2d::InputField::visitGeometry(stappler::xenolith::FrameInfo&,stappler::xenolith::NodeFlags)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::FrameInfo&
* stappler::xenolith::NodeFlags

Возвращает:
* bool

# ::stappler::xenolith::gui2d::InputField::onEnter(stappler::xenolith::Scene*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Scene*


# ::stappler::xenolith::gui2d::InputField::onExit()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::gui2d::InputField::setInputCallback(stappler::xenolith::gui2d::InputField::Callback const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::gui2d::InputField::Callback const&


# ::stappler::xenolith::gui2d::InputField::getInputCallback() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Callback&

# ::stappler::xenolith::gui2d::InputField::setMaxChars(size_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* size_t


# ::stappler::xenolith::gui2d::InputField::getMaxChars() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* size_t

# ::stappler::xenolith::gui2d::InputField::setInputType(stappler::xenolith::TextInputType)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::TextInputType


# ::stappler::xenolith::gui2d::InputField::getInputType() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::TextInputType

# ::stappler::xenolith::gui2d::InputField::setPasswordMode(stappler::xenolith::gui2d::InputField::PasswordMode)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::gui2d::InputField::PasswordMode


# ::stappler::xenolith::gui2d::InputField::getPasswordMode()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* PasswordMode

# ::stappler::xenolith::gui2d::InputField::setAllowAutocorrect(bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* bool


# ::stappler::xenolith::gui2d::InputField::isAllowAutocorrect() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::gui2d::InputField::setEnabled(bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* bool


# ::stappler::xenolith::gui2d::InputField::isEnabled() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::gui2d::InputField::setNormalColor(stappler::xenolith::Color const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Color const&


# ::stappler::xenolith::gui2d::InputField::getNormalColor() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::Color const&

# ::stappler::xenolith::gui2d::InputField::setErrorColor(stappler::xenolith::Color const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Color const&


# ::stappler::xenolith::gui2d::InputField::getErrorColor() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::Color const&

# ::stappler::xenolith::gui2d::InputField::empty() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::gui2d::InputField::setPlaceholder(stappler::WideStringView const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::WideStringView const&


# ::stappler::xenolith::gui2d::InputField::setPlaceholder(stappler::StringView const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView const&


# ::stappler::xenolith::gui2d::InputField::getPlaceholder() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::WideStringView

# ::stappler::xenolith::gui2d::InputField::setString(stappler::mem_std::WideString const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::mem_std::WideString const&


# ::stappler::xenolith::gui2d::InputField::setString(stappler::mem_std::String const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::mem_std::String const&


# ::stappler::xenolith::gui2d::InputField::getString() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::WideStringView

# ::stappler::xenolith::gui2d::InputField::getLabel() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::gui2d::InputLabel*

# ::stappler::xenolith::gui2d::InputField::setCharFilter(stappler::xenolith::gui2d::InputField::CharFilter const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::gui2d::InputField::CharFilter const&


# ::stappler::xenolith::gui2d::InputField::getCharFilter() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* CharFilter&

# ::stappler::xenolith::gui2d::InputField::acquireInput()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::gui2d::InputField::releaseInput()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::gui2d::InputField::isInputActive() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::gui2d::InputField::onPressBegin(stappler::xenolith::Vec2 const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Vec2 const&

Возвращает:
* bool

# ::stappler::xenolith::gui2d::InputField::onLongPress(stappler::xenolith::Vec2 const&,stappler::TimeInterval const&,int)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Vec2 const&
* stappler::TimeInterval const&
* int

Возвращает:
* bool

# ::stappler::xenolith::gui2d::InputField::onPressEnd(stappler::xenolith::Vec2 const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Vec2 const&

Возвращает:
* bool

# ::stappler::xenolith::gui2d::InputField::onPressCancel(stappler::xenolith::Vec2 const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Vec2 const&

Возвращает:
* bool

# ::stappler::xenolith::gui2d::InputField::onSwipeBegin(stappler::xenolith::Vec2 const&,stappler::xenolith::Vec2 const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Vec2 const&
* stappler::xenolith::Vec2 const&

Возвращает:
* bool

# ::stappler::xenolith::gui2d::InputField::onSwipe(stappler::xenolith::Vec2 const&,stappler::xenolith::Vec2 const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Vec2 const&
* stappler::xenolith::Vec2 const&

Возвращает:
* bool

# ::stappler::xenolith::gui2d::InputField::onSwipeEnd(stappler::xenolith::Vec2 const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Vec2 const&

Возвращает:
* bool

# ::stappler::xenolith::gui2d::InputField::onMenuCut()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::gui2d::InputField::onMenuCopy()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::gui2d::InputField::onMenuPaste()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::gui2d::InputField::handleInputChar(char16_t)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* char16_t

Возвращает:
* bool

# ::stappler::xenolith::gui2d::InputField::handleActivated(bool)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* bool


# ::stappler::xenolith::gui2d::InputField::handlePointer(bool)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* bool


# ::stappler::xenolith::gui2d::InputField::handleCursor(stappler::xenolith::gui2d::InputField::Cursor const&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::gui2d::InputField::Cursor const&


# ::stappler::xenolith::gui2d::InputField::setMenuPosition(stappler::xenolith::Vec2 const&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::Vec2 const&


# ::stappler::xenolith::gui2d::InputField::updateMenu()

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::gui2d::InputField::onMenuVisible()

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::gui2d::InputField::onMenuHidden()

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::gui2d::InputField::makeLabel()

## BRIEF

## CONTENT

Доступ: protected

Возвращает:
* Rc<stappler::xenolith::gui2d::InputLabel>

# ::stappler::xenolith::gui2d::InputField::_hasSwipe

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::gui2d::InputField::_normalColor

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::Color


# ::stappler::xenolith::gui2d::InputField::_errorColor

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::Color


# ::stappler::xenolith::gui2d::InputField::_inputListener

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::InputListener*


# ::stappler::xenolith::gui2d::InputField::_node

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::gui2d::InputLabelContainer*


# ::stappler::xenolith::gui2d::InputField::_label

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::gui2d::InputLabel*


# ::stappler::xenolith::gui2d::InputField::_placeholder

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::basic2d::Label*


# ::stappler::xenolith::gui2d::InputField::_onInput

## BRIEF

## CONTENT

Доступ: protected

Тип: Callback


# ::stappler::xenolith::gui2d::InputField::_charFilter

## BRIEF

## CONTENT

Доступ: protected

Тип: CharFilter


# ::stappler::xenolith::gui2d::InputField::_menuPosition

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::Vec2
