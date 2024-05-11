Title: MaterialInputTextContainer.h


# XENOLITH_RENDERER_MATERIAL2D_COMPONENTS_INPUT_MATERIALINPUTTEXTCONTAINER_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::material2d::InputTextContainer

## BRIEF

## CONTENT

Базовые классы:
* DynamicStateNode


# ::stappler::xenolith::material2d::InputTextContainer::~InputTextContainer()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::material2d::InputTextContainer::init()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::material2d::InputTextContainer::update(stappler::xenolith::UpdateTime const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::UpdateTime const&


# ::stappler::xenolith::material2d::InputTextContainer::onContentSizeDirty()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::material2d::InputTextContainer::visitDraw(stappler::xenolith::FrameInfo&,stappler::xenolith::NodeFlags)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::FrameInfo&
* stappler::xenolith::NodeFlags

Возвращает:
* bool

# ::stappler::xenolith::material2d::InputTextContainer::getLabel() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::material2d::TypescaleLabel*

# ::stappler::xenolith::material2d::InputTextContainer::setEnabled(bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* bool


# ::stappler::xenolith::material2d::InputTextContainer::isEnabled() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::material2d::InputTextContainer::setCursor(stappler::xenolith::TextCursor)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::TextCursor


# ::stappler::xenolith::material2d::InputTextContainer::getCursor() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::TextCursor

# ::stappler::xenolith::material2d::InputTextContainer::handleLabelChanged()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::material2d::InputTextContainer::getCursorForPosition(const stappler::geom::Vec2&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* const stappler::geom::Vec2&

Возвращает:
* stappler::xenolith::TextCursor

# ::stappler::xenolith::material2d::InputTextContainer::hasHorizontalOverflow() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::material2d::InputTextContainer::moveHorizontalOverflow(float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float


# ::stappler::xenolith::material2d::InputTextContainer::getTouchedCursor(const stappler::geom::Vec2&,float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* const stappler::geom::Vec2&
* float

Возвращает:
* stappler::xenolith::material2d::IconSprite*

# ::stappler::xenolith::material2d::InputTextContainer::handleLongPress(const stappler::geom::Vec2&,uint32_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* const stappler::geom::Vec2&
* uint32_t

Возвращает:
* bool

# ::stappler::xenolith::material2d::InputTextContainer::handleSwipeBegin(const stappler::geom::Vec2&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* const stappler::geom::Vec2&

Возвращает:
* bool

# ::stappler::xenolith::material2d::InputTextContainer::handleSwipe(const stappler::geom::Vec2&,const stappler::geom::Vec2&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* const stappler::geom::Vec2&
* const stappler::geom::Vec2&

Возвращает:
* bool

# ::stappler::xenolith::material2d::InputTextContainer::handleSwipeEnd(const stappler::geom::Vec2&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* const stappler::geom::Vec2&

Возвращает:
* bool

# ::stappler::xenolith::material2d::InputTextContainer::touchPointers()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::material2d::InputTextContainer::setCursorCallback(Function<void (stappler::xenolith::TextCursor)>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Function<void (stappler::xenolith::TextCursor)>&&


# ::stappler::xenolith::material2d::InputTextContainer::getCursorCallback() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Function<void (stappler::xenolith::TextCursor)> const&

# ::stappler::xenolith::material2d::InputTextContainer::updateCursorPosition()

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::material2d::InputTextContainer::updateCursorPointers()

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::material2d::InputTextContainer::runAdjustLabel(float)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* float


# ::stappler::xenolith::material2d::InputTextContainer::scheduleCursorPointer()

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::material2d::InputTextContainer::unscheduleCursorPointer()

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::material2d::InputTextContainer::setPointerEnabled(bool)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* bool


# ::stappler::xenolith::material2d::InputTextContainer::_label

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::material2d::TypescaleLabel*


# ::stappler::xenolith::material2d::InputTextContainer::_adjustment

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::geom::Vec2


# ::stappler::xenolith::material2d::InputTextContainer::_caret

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::basic2d::Layer*


# ::stappler::xenolith::material2d::InputTextContainer::_selectedPointer

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::material2d::IconSprite*


# ::stappler::xenolith::material2d::InputTextContainer::_cursorPointer

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::material2d::IconSprite*


# ::stappler::xenolith::material2d::InputTextContainer::_selectionPointerStart

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::material2d::IconSprite*


# ::stappler::xenolith::material2d::InputTextContainer::_selectionPointerEnd

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::material2d::IconSprite*


# ::stappler::xenolith::material2d::InputTextContainer::_cursorAnchor

## BRIEF

## CONTENT

Доступ: protected

Тип: float


# ::stappler::xenolith::material2d::InputTextContainer::_cursor

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::TextCursor


# ::stappler::xenolith::material2d::InputTextContainer::_enabled

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::material2d::InputTextContainer::_cursorDirty

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::material2d::InputTextContainer::_pointerEnabled

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::material2d::InputTextContainer::_cursorCallback

## BRIEF

## CONTENT

Доступ: protected

Тип: Function<void (stappler::xenolith::TextCursor)>
