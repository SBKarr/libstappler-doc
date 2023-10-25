Title: XL2dInputLabel.h


# XENOLITH_RENDERER_GUI2D_XL2DINPUTLABEL_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::gui2d::InputLabelError

## BRIEF

## CONTENT

Значения:
* OverflowChars
* InvalidChar


# ::stappler::xenolith::gui2d::InputLabelDelegate

## BRIEF

## CONTENT


# ::stappler::xenolith::gui2d::InputLabelDelegate::Error

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::gui2d::InputLabelDelegate::Handler

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::gui2d::InputLabelDelegate::Cursor

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::gui2d::InputLabelDelegate::~InputLabelDelegate()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::gui2d::InputLabelDelegate::handleInputChar(char16_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* char16_t

Возвращает:
* bool

# ::stappler::xenolith::gui2d::InputLabelDelegate::handleInputString(stappler::WideStringView const&,stappler::xenolith::gui2d::InputLabelDelegate::Cursor const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::WideStringView const&
* stappler::xenolith::gui2d::InputLabelDelegate::Cursor const&

Возвращает:
* bool

# ::stappler::xenolith::gui2d::InputLabelDelegate::handleCursor(stappler::xenolith::gui2d::InputLabelDelegate::Cursor const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::gui2d::InputLabelDelegate::Cursor const&


# ::stappler::xenolith::gui2d::InputLabelDelegate::handleInput()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::gui2d::InputLabelDelegate::handleActivated(bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* bool


# ::stappler::xenolith::gui2d::InputLabelDelegate::handleError(stappler::xenolith::gui2d::InputLabelDelegate::Error)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::gui2d::InputLabelDelegate::Error


# ::stappler::xenolith::gui2d::InputLabelDelegate::handlePointer(bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* bool


# ::stappler::xenolith::gui2d::InputLabelContainer

## BRIEF

## CONTENT

Базовые классы:
* DynamicStateNode


# ::stappler::xenolith::gui2d::InputLabelContainer::setLabel<typename,typename>(Rc<T> const&,Args &&...)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename T
* typename Args

Параметры:
* Rc<T> const&
* Args &&...

Возвращает:
* auto

# ::stappler::xenolith::gui2d::InputLabelContainer::setLabel(Rc<stappler::xenolith::gui2d::InputLabel>&&,stappler::xenolith::ZOrder)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Rc<stappler::xenolith::gui2d::InputLabel>&&
* stappler::xenolith::ZOrder


# ::stappler::xenolith::gui2d::InputLabelContainer::getLabel() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::gui2d::InputLabel*

# ::stappler::xenolith::gui2d::InputLabelContainer::update(stappler::xenolith::UpdateTime const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::UpdateTime const&


# ::stappler::xenolith::gui2d::InputLabelContainer::onCursor()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::gui2d::InputLabelContainer::onInput()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::gui2d::InputLabelContainer::onSwipeBegin(stappler::xenolith::Vec2 const&,stappler::xenolith::Vec2 const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Vec2 const&
* stappler::xenolith::Vec2 const&

Возвращает:
* bool

# ::stappler::xenolith::gui2d::InputLabelContainer::onSwipe(stappler::xenolith::Vec2 const&,stappler::xenolith::Vec2 const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Vec2 const&
* stappler::xenolith::Vec2 const&

Возвращает:
* bool

# ::stappler::xenolith::gui2d::InputLabelContainer::onSwipeEnd(stappler::xenolith::Vec2 const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Vec2 const&

Возвращает:
* bool

# ::stappler::xenolith::gui2d::InputLabelContainer::Adjust

## BRIEF

## CONTENT

Доступ: protected

Значения:
* None
* Left
* Right


# ::stappler::xenolith::gui2d::InputLabelContainer::onLabelPosition()

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::gui2d::InputLabelContainer::runAdjust(float)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* float


# ::stappler::xenolith::gui2d::InputLabelContainer::scheduleAdjust(stappler::xenolith::gui2d::InputLabelContainer::Adjust,stappler::xenolith::Vec2 const&,float)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::gui2d::InputLabelContainer::Adjust
* stappler::xenolith::Vec2 const&
* float


# ::stappler::xenolith::gui2d::InputLabelContainer::_label

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::gui2d::InputLabel*


# ::stappler::xenolith::gui2d::InputLabelContainer::_adjust

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::gui2d::InputLabelContainer::Adjust


# ::stappler::xenolith::gui2d::InputLabelContainer::_adjustValue

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::Vec2


# ::stappler::xenolith::gui2d::InputLabelContainer::_adjustPosition

## BRIEF

## CONTENT

Доступ: protected

Тип: float


# ::stappler::xenolith::gui2d::InputLabelContainer::_swipeCaptured

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::gui2d::InputLabel

## BRIEF

## CONTENT

Базовые классы:
* Label


# ::stappler::xenolith::gui2d::InputLabel::PasswordMode

## BRIEF

## CONTENT

Доступ: public

Значения:
* NotPassword
* ShowAll
* ShowChar
* ShowNone


# ::stappler::xenolith::gui2d::InputLabel::Error

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::gui2d::InputLabel::Handler

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::gui2d::InputLabel::Cursor

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::gui2d::InputLabel::InputType

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::gui2d::InputLabel::Selection

## BRIEF

## CONTENT

Доступ: public

Базовые классы:
* Sprite


# ::stappler::xenolith::gui2d::InputLabel::Selection::~Selection()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::gui2d::InputLabel::Selection::init()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::gui2d::InputLabel::Selection::clear()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::gui2d::InputLabel::Selection::emplaceRect(stappler::xenolith::Rect const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Rect const&


# ::stappler::xenolith::gui2d::InputLabel::Selection::updateColor()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::gui2d::InputLabel::init()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::gui2d::InputLabel::init(stappler::StringView)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView

Возвращает:
* bool

# ::stappler::xenolith::gui2d::InputLabel::init(stappler::StringView,float,stappler::xenolith::basic2d::Label::TextAlign)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView
* float
* stappler::xenolith::basic2d::Label::TextAlign

Возвращает:
* bool

# ::stappler::xenolith::gui2d::InputLabel::init(font::FontController*,stappler::xenolith::font::LabelBase::DescriptionStyle const&,stappler::StringView,float,stappler::xenolith::basic2d::Label::TextAlign)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* font::FontController*
* stappler::xenolith::font::LabelBase::DescriptionStyle const&
* stappler::StringView
* float
* stappler::xenolith::basic2d::Label::TextAlign

Возвращает:
* bool

# ::stappler::xenolith::gui2d::InputLabel::init(stappler::xenolith::font::LabelBase::DescriptionStyle const&,stappler::StringView,float,stappler::xenolith::basic2d::Label::TextAlign)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::font::LabelBase::DescriptionStyle const&
* stappler::StringView
* float
* stappler::xenolith::basic2d::Label::TextAlign

Возвращает:
* bool

# ::stappler::xenolith::gui2d::InputLabel::visitGeometry(stappler::xenolith::FrameInfo&,stappler::xenolith::NodeFlags)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::FrameInfo&
* stappler::xenolith::NodeFlags

Возвращает:
* bool

# ::stappler::xenolith::gui2d::InputLabel::onContentSizeDirty()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::gui2d::InputLabel::onExit()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::gui2d::InputLabel::getCursorMarkPosition() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::Vec2

# ::stappler::xenolith::gui2d::InputLabel::setCursorColor(stappler::xenolith::Color const&,bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Color const&
* bool


# ::stappler::xenolith::gui2d::InputLabel::getCursorColor() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::Color const&

# ::stappler::xenolith::gui2d::InputLabel::setPointerColor(stappler::xenolith::Color const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Color const&


# ::stappler::xenolith::gui2d::InputLabel::getPointerColor() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::Color const&

# ::stappler::xenolith::gui2d::InputLabel::setString(stappler::StringView const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView const&


# ::stappler::xenolith::gui2d::InputLabel::setString(stappler::WideStringView const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::WideStringView const&


# ::stappler::xenolith::gui2d::InputLabel::getString() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::WideStringView

# ::stappler::xenolith::gui2d::InputLabel::setCursor(stappler::xenolith::gui2d::InputLabel::Cursor const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::gui2d::InputLabel::Cursor const&


# ::stappler::xenolith::gui2d::InputLabel::getCursor() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Cursor&

# ::stappler::xenolith::gui2d::InputLabel::setInputType(stappler::xenolith::gui2d::InputLabel::InputType)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::gui2d::InputLabel::InputType


# ::stappler::xenolith::gui2d::InputLabel::getInputType() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* InputType

# ::stappler::xenolith::gui2d::InputLabel::setPasswordMode(stappler::xenolith::gui2d::InputLabel::PasswordMode)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::gui2d::InputLabel::PasswordMode


# ::stappler::xenolith::gui2d::InputLabel::getPasswordMode()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::gui2d::InputLabel::PasswordMode

# ::stappler::xenolith::gui2d::InputLabel::setDelegate(stappler::xenolith::gui2d::InputLabelDelegate*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::gui2d::InputLabelDelegate*


# ::stappler::xenolith::gui2d::InputLabel::getDelegate() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::gui2d::InputLabelDelegate*

# ::stappler::xenolith::gui2d::InputLabel::setEnabled(bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* bool


# ::stappler::xenolith::gui2d::InputLabel::isEnabled() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::gui2d::InputLabel::setRangeAllowed(bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* bool


# ::stappler::xenolith::gui2d::InputLabel::isRangeAllowed() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::gui2d::InputLabel::setAllowMultiline(bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* bool


# ::stappler::xenolith::gui2d::InputLabel::isAllowMultiline() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::gui2d::InputLabel::setAllowAutocorrect(bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* bool


# ::stappler::xenolith::gui2d::InputLabel::isAllowAutocorrect() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::gui2d::InputLabel::setCursorAnchor(float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float


# ::stappler::xenolith::gui2d::InputLabel::getCursorAnchor() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* float

# ::stappler::xenolith::gui2d::InputLabel::acquireInput()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::gui2d::InputLabel::releaseInput()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::gui2d::InputLabel::empty() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::gui2d::InputLabel::isActive() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::gui2d::InputLabel::isPointerEnabled() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::gui2d::InputLabel::getSelectedString() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::mem_std::String

# ::stappler::xenolith::gui2d::InputLabel::pasteString(stappler::mem_std::String const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::mem_std::String const&


# ::stappler::xenolith::gui2d::InputLabel::pasteString(stappler::mem_std::WideString const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::mem_std::WideString const&


# ::stappler::xenolith::gui2d::InputLabel::eraseSelection()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::gui2d::InputLabel::getTouchedCursor(stappler::xenolith::Vec2 const&,float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Vec2 const&
* float

Возвращает:
* stappler::xenolith::basic2d::VectorSprite*

# ::stappler::xenolith::gui2d::InputLabel::onPressBegin(stappler::xenolith::Vec2 const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Vec2 const&

Возвращает:
* bool

# ::stappler::xenolith::gui2d::InputLabel::onLongPress(stappler::xenolith::Vec2 const&,stappler::TimeInterval const&,int)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Vec2 const&
* stappler::TimeInterval const&
* int

Возвращает:
* bool

# ::stappler::xenolith::gui2d::InputLabel::onPressEnd(stappler::xenolith::Vec2 const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Vec2 const&

Возвращает:
* bool

# ::stappler::xenolith::gui2d::InputLabel::onPressCancel(stappler::xenolith::Vec2 const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Vec2 const&

Возвращает:
* bool

# ::stappler::xenolith::gui2d::InputLabel::onSwipeBegin(stappler::xenolith::Vec2 const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Vec2 const&

Возвращает:
* bool

# ::stappler::xenolith::gui2d::InputLabel::onSwipe(stappler::xenolith::Vec2 const&,stappler::xenolith::Vec2 const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Vec2 const&
* stappler::xenolith::Vec2 const&

Возвращает:
* bool

# ::stappler::xenolith::gui2d::InputLabel::onSwipeEnd(stappler::xenolith::Vec2 const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Vec2 const&

Возвращает:
* bool

# ::stappler::xenolith::gui2d::InputLabel::getCursorLayer() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::basic2d::Layer*

# ::stappler::xenolith::gui2d::InputLabel::getCursorPointer() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::basic2d::VectorSprite*

# ::stappler::xenolith::gui2d::InputLabel::getCursorStart() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::basic2d::VectorSprite*

# ::stappler::xenolith::gui2d::InputLabel::getCursorEnd() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::basic2d::VectorSprite*

# ::stappler::xenolith::gui2d::InputLabel::onText(stappler::WideStringView const&,stappler::xenolith::gui2d::InputLabel::Cursor const&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::WideStringView const&
* stappler::xenolith::gui2d::InputLabel::Cursor const&


# ::stappler::xenolith::gui2d::InputLabel::onKeyboard(bool,stappler::xenolith::Rect const&,float)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* bool
* stappler::xenolith::Rect const&
* float


# ::stappler::xenolith::gui2d::InputLabel::onInput(bool)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* bool


# ::stappler::xenolith::gui2d::InputLabel::onEnded()

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::gui2d::InputLabel::onError(stappler::xenolith::gui2d::InputLabel::Error)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::gui2d::InputLabel::Error


# ::stappler::xenolith::gui2d::InputLabel::updateCursor()

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::gui2d::InputLabel::updateString(stappler::WideStringView const&,stappler::xenolith::gui2d::InputLabel::Cursor const&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::WideStringView const&
* stappler::xenolith::gui2d::InputLabel::Cursor const&

Возвращает:
* bool

# ::stappler::xenolith::gui2d::InputLabel::updateFocus()

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::gui2d::InputLabel::showLastChar()

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::gui2d::InputLabel::hideLastChar()

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::gui2d::InputLabel::scheduleCursorPointer()

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::gui2d::InputLabel::unscheduleCursorPointer()

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::gui2d::InputLabel::setPointerEnabled(bool)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* bool


# ::stappler::xenolith::gui2d::InputLabel::updatePointer()

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::gui2d::InputLabel::getInputTypeValue() const

## BRIEF

## CONTENT

Доступ: protected

Возвращает:
* stappler::xenolith::TextInputType

# ::stappler::xenolith::gui2d::InputLabel::_enabled

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::gui2d::InputLabel::_inputEnabled

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::gui2d::InputLabel::_rangeAllowed

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::gui2d::InputLabel::_isLongPress

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::gui2d::InputLabel::_pointerEnabled

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::gui2d::InputLabel::_cursorDirty

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::gui2d::InputLabel::_allowMultiline

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::gui2d::InputLabel::_allowAutocorrect

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::gui2d::InputLabel::_cursorAnchor

## BRIEF

## CONTENT

Доступ: protected

Тип: float


# ::stappler::xenolith::gui2d::InputLabel::_selectionColor

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::Color


# ::stappler::xenolith::gui2d::InputLabel::_cursorColor

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::Color


# ::stappler::xenolith::gui2d::InputLabel::_inputString

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::mem_std::WideString


# ::stappler::xenolith::gui2d::InputLabel::_selectedCursor

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::basic2d::VectorSprite*


# ::stappler::xenolith::gui2d::InputLabel::_cursorLayer

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::basic2d::Layer*


# ::stappler::xenolith::gui2d::InputLabel::_cursorPointer

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::basic2d::VectorSprite*


# ::stappler::xenolith::gui2d::InputLabel::_cursorStart

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::basic2d::VectorSprite*


# ::stappler::xenolith::gui2d::InputLabel::_cursorEnd

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::basic2d::VectorSprite*


# ::stappler::xenolith::gui2d::InputLabel::_cursorSelection

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::gui2d::InputLabel::Selection*


# ::stappler::xenolith::gui2d::InputLabel::_inputType

## BRIEF

## CONTENT

Доступ: protected

Тип: InputType


# ::stappler::xenolith::gui2d::InputLabel::_cursor

## BRIEF

## CONTENT

Доступ: protected

Тип: Cursor


# ::stappler::xenolith::gui2d::InputLabel::_handler

## BRIEF

## CONTENT

Доступ: protected

Тип: Handler


# ::stappler::xenolith::gui2d::InputLabel::_password

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::gui2d::InputLabel::PasswordMode


# ::stappler::xenolith::gui2d::InputLabel::_delegate

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::gui2d::InputLabelDelegate*
