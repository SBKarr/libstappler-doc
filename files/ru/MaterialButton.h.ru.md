Title: MaterialButton.h


# XENOLITH_RENDERER_MATERIAL2D_COMPONENTS_BUTTON_MATERIALBUTTON_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::material2d::Button

## BRIEF

## CONTENT

Базовые классы:
* Surface


# ::stappler::xenolith::material2d::Button::NodeMask

## BRIEF

## CONTENT

Доступ: public

Значения:
* None
* LabelText
* LabelValue
* LeadingIcon
* TrailingIcon
* Labels
* Icons
* All


# ::stappler::xenolith::material2d::Button::LongPressInterval

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::TimeInterval const


# ::stappler::xenolith::material2d::Button::~Button()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::material2d::Button::init(stappler::xenolith::material2d::NodeStyle,stappler::xenolith::material2d::ColorRole,uint32_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::material2d::NodeStyle
* stappler::xenolith::material2d::ColorRole
* uint32_t

Возвращает:
* bool

# ::stappler::xenolith::material2d::Button::init(stappler::xenolith::material2d::SurfaceStyle const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::material2d::SurfaceStyle const&

Возвращает:
* bool

# ::stappler::xenolith::material2d::Button::onContentSizeDirty()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::material2d::Button::setFollowContentSize(bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* bool


# ::stappler::xenolith::material2d::Button::isFollowContentSize() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::material2d::Button::setSwallowEvents(bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* bool


# ::stappler::xenolith::material2d::Button::isSwallowEvents() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::material2d::Button::setEnabled(bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* bool


# ::stappler::xenolith::material2d::Button::isEnabled() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::material2d::Button::isMenuSourceButtonEnabled() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::material2d::Button::setNodeMask(stappler::xenolith::material2d::Button::NodeMask)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::material2d::Button::NodeMask


# ::stappler::xenolith::material2d::Button::getNodeMask() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::material2d::Button::NodeMask

# ::stappler::xenolith::material2d::Button::setSelected(bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* bool


# ::stappler::xenolith::material2d::Button::isSelected() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::material2d::Button::setText(stappler::StringView)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView


# ::stappler::xenolith::material2d::Button::getText() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::StringView

# ::stappler::xenolith::material2d::Button::setTextValue(stappler::StringView)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView


# ::stappler::xenolith::material2d::Button::getTextValue() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::StringView

# ::stappler::xenolith::material2d::Button::setIconSize(float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float


# ::stappler::xenolith::material2d::Button::getIconSize() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* float

# ::stappler::xenolith::material2d::Button::setLeadingIconName(stappler::xenolith::IconName,float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::IconName
* float


# ::stappler::xenolith::material2d::Button::getLeadingIconName() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::IconName

# ::stappler::xenolith::material2d::Button::setLeadingIconProgress(float,float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float
* float


# ::stappler::xenolith::material2d::Button::getLeadingIconProgress() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* float

# ::stappler::xenolith::material2d::Button::setTrailingIconName(stappler::xenolith::IconName)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::IconName


# ::stappler::xenolith::material2d::Button::getTrailingIconName() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::IconName

# ::stappler::xenolith::material2d::Button::setTrailingIconProgress(float,float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float
* float


# ::stappler::xenolith::material2d::Button::getTrailingIconProgress() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* float

# ::stappler::xenolith::material2d::Button::setTapCallback(Function<void ()>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Function<void ()>&&


# ::stappler::xenolith::material2d::Button::getTapCallback() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Function<void ()> const&

# ::stappler::xenolith::material2d::Button::setLongPressCallback(Function<void ()>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Function<void ()>&&


# ::stappler::xenolith::material2d::Button::getLongPressCallback() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Function<void ()> const&

# ::stappler::xenolith::material2d::Button::setDoubleTapCallback(Function<void ()>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Function<void ()>&&


# ::stappler::xenolith::material2d::Button::getDoubleTapCallback() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Function<void ()> const&

# ::stappler::xenolith::material2d::Button::setMenuSourceButton(Rc<stappler::xenolith::material2d::MenuSourceButton>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Rc<stappler::xenolith::material2d::MenuSourceButton>&&


# ::stappler::xenolith::material2d::Button::getMenuSourceButton() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::material2d::MenuSourceButton*

# ::stappler::xenolith::material2d::Button::setBlendColor(stappler::xenolith::material2d::ColorRole,float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::material2d::ColorRole
* float


# ::stappler::xenolith::material2d::Button::setBlendColor(const stappler::geom::Color4F&,float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* const stappler::geom::Color4F&
* float


# ::stappler::xenolith::material2d::Button::getBlendColorRule() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::material2d::ColorRole

# ::stappler::xenolith::material2d::Button::getBlendColor() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* const stappler::geom::Color4F&

# ::stappler::xenolith::material2d::Button::getBlendColorValue() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* float

# ::stappler::xenolith::material2d::Button::getLabelTextNode() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::material2d::TypescaleLabel*

# ::stappler::xenolith::material2d::Button::getLabelValueNode() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::material2d::TypescaleLabel*

# ::stappler::xenolith::material2d::Button::getLeadingIconNode() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::material2d::IconSprite*

# ::stappler::xenolith::material2d::Button::getTrailingIconNode() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::material2d::IconSprite*

# ::stappler::xenolith::material2d::Button::getInputListener() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::InputListener*

# ::stappler::xenolith::material2d::Button::getMenuButtonListener() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* DataListener<stappler::xenolith::material2d::MenuSourceButton>*

# ::stappler::xenolith::material2d::Button::getTouchLocation() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::geom::Vec2

# ::stappler::xenolith::material2d::Button::hasContent() const

## BRIEF

## CONTENT

Доступ: protected

Возвращает:
* bool

# ::stappler::xenolith::material2d::Button::updateSizeFromContent()

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::material2d::Button::updateActivityState()

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::material2d::Button::handleTap()

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::material2d::Button::handleLongPress()

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::material2d::Button::handleDoubleTap()

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::material2d::Button::getWidthForContent() const

## BRIEF

## CONTENT

Доступ: protected

Возвращает:
* float

# ::stappler::xenolith::material2d::Button::updateMenuButtonSource()

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::material2d::Button::layoutContent()

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::material2d::Button::_inputListener

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::InputListener*


# ::stappler::xenolith::material2d::Button::_labelText

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::material2d::TypescaleLabel*


# ::stappler::xenolith::material2d::Button::_labelValue

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::material2d::TypescaleLabel*


# ::stappler::xenolith::material2d::Button::_leadingIcon

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::material2d::IconSprite*


# ::stappler::xenolith::material2d::Button::_trailingIcon

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::material2d::IconSprite*


# ::stappler::xenolith::material2d::Button::_floatingMenuSource

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::xenolith::material2d::MenuSource>


# ::stappler::xenolith::material2d::Button::_menuButtonListener

## BRIEF

## CONTENT

Доступ: protected

Тип: DataListener<stappler::xenolith::material2d::MenuSourceButton>*


# ::stappler::xenolith::material2d::Button::_callbackTap

## BRIEF

## CONTENT

Доступ: protected

Тип: Function<void ()>


# ::stappler::xenolith::material2d::Button::_callbackLongPress

## BRIEF

## CONTENT

Доступ: protected

Тип: Function<void ()>


# ::stappler::xenolith::material2d::Button::_callbackDoubleTap

## BRIEF

## CONTENT

Доступ: protected

Тип: Function<void ()>


# ::stappler::xenolith::material2d::Button::_touchLocation

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::geom::Vec2


# ::stappler::xenolith::material2d::Button::_activityAnimationDuration

## BRIEF

## CONTENT

Доступ: protected

Тип: float


# ::stappler::xenolith::material2d::Button::_nodeMask

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::material2d::Button::NodeMask


# ::stappler::xenolith::material2d::Button::_followContentSize

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::material2d::Button::_mouseOver

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::material2d::Button::_enabled

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::material2d::Button::_focused

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::material2d::Button::_pressed

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::material2d::Button::_selected

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::material2d::Button::_longPressInit

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::material2d::operator|(Button::NodeMask const&,Button::NodeMask const&)

## BRIEF

## CONTENT

Параметры:
* Button::NodeMask const&
* Button::NodeMask const&

Возвращает:
* Button::NodeMask

# ::stappler::xenolith::material2d::operator&(Button::NodeMask const&,Button::NodeMask const&)

## BRIEF

## CONTENT

Параметры:
* Button::NodeMask const&
* Button::NodeMask const&

Возвращает:
* Button::NodeMask

# ::stappler::xenolith::material2d::operator^(Button::NodeMask const&,Button::NodeMask const&)

## BRIEF

## CONTENT

Параметры:
* Button::NodeMask const&
* Button::NodeMask const&

Возвращает:
* Button::NodeMask

# ::stappler::xenolith::material2d::operator|=(Button::NodeMask&,Button::NodeMask const&)

## BRIEF

## CONTENT

Параметры:
* Button::NodeMask&
* Button::NodeMask const&

Возвращает:
* Button::NodeMask&

# ::stappler::xenolith::material2d::operator&=(Button::NodeMask&,Button::NodeMask const&)

## BRIEF

## CONTENT

Параметры:
* Button::NodeMask&
* Button::NodeMask const&

Возвращает:
* Button::NodeMask&

# ::stappler::xenolith::material2d::operator^=(Button::NodeMask&,Button::NodeMask const&)

## BRIEF

## CONTENT

Параметры:
* Button::NodeMask&
* Button::NodeMask const&

Возвращает:
* Button::NodeMask&

# ::stappler::xenolith::material2d::operator==(Button::NodeMask const&,std::underlying_type<Button::NodeMask>::type const&)

## BRIEF

## CONTENT

Параметры:
* Button::NodeMask const&
* std::underlying_type<Button::NodeMask>::type const&

Возвращает:
* bool

# ::stappler::xenolith::material2d::operator==(std::underlying_type<Button::NodeMask>::type const&,Button::NodeMask const&)

## BRIEF

## CONTENT

Параметры:
* std::underlying_type<Button::NodeMask>::type const&
* Button::NodeMask const&

Возвращает:
* bool

# ::stappler::xenolith::material2d::operator!=(Button::NodeMask const&,std::underlying_type<Button::NodeMask>::type const&)

## BRIEF

## CONTENT

Параметры:
* Button::NodeMask const&
* std::underlying_type<Button::NodeMask>::type const&

Возвращает:
* bool

# ::stappler::xenolith::material2d::operator!=(std::underlying_type<Button::NodeMask>::type const&,Button::NodeMask const&)

## BRIEF

## CONTENT

Параметры:
* std::underlying_type<Button::NodeMask>::type const&
* Button::NodeMask const&

Возвращает:
* bool

# ::stappler::xenolith::material2d::operator~(Button::NodeMask const&)

## BRIEF

## CONTENT

Параметры:
* Button::NodeMask const&

Возвращает:
* Button::NodeMask