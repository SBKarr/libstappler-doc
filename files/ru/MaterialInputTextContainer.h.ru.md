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


# ::stappler::xenolith::material2d::InputTextContainer::handleLabelChanged()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::material2d::InputTextContainer::handleLabelPositionChanged()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::material2d::InputTextContainer::updateCursorPosition()

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::material2d::InputTextContainer::runAdjustLabel(float)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* float


# ::stappler::xenolith::material2d::InputTextContainer::_label

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::material2d::TypescaleLabel*


# ::stappler::xenolith::material2d::InputTextContainer::_adjustment

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::Vec2


# ::stappler::xenolith::material2d::InputTextContainer::_caret

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::basic2d::Layer*


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
