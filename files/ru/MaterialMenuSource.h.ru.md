Title: MaterialMenuSource.h


# XENOLITH_RENDERER_MATERIAL2D_BASE_MATERIALMENUSOURCE_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::material2d::MenuSourceItem

## BRIEF

## CONTENT

Базовые классы:
* Subscription


# ::stappler::xenolith::material2d::MenuSourceItem::Type

## BRIEF

## CONTENT

Доступ: public

Значения:
* Separator
* Button
* Custom


# ::stappler::xenolith::material2d::MenuSourceItem::AttachCallback

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::material2d::MenuSourceItem::init()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::material2d::MenuSourceItem::copy() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Rc<stappler::xenolith::material2d::MenuSourceItem>

# ::stappler::xenolith::material2d::MenuSourceItem::setCustomData(stappler::mem_std::Value const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::mem_std::Value const&


# ::stappler::xenolith::material2d::MenuSourceItem::setCustomData(stappler::mem_std::Value&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::mem_std::Value&&


# ::stappler::xenolith::material2d::MenuSourceItem::getCustomData() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::mem_std::Value const&

# ::stappler::xenolith::material2d::MenuSourceItem::setAttachCallback(stappler::xenolith::material2d::MenuSourceItem::AttachCallback const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::material2d::MenuSourceItem::AttachCallback const&

Возвращает:
* stappler::xenolith::material2d::MenuSourceItem*

# ::stappler::xenolith::material2d::MenuSourceItem::setDetachCallback(stappler::xenolith::material2d::MenuSourceItem::AttachCallback const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::material2d::MenuSourceItem::AttachCallback const&

Возвращает:
* stappler::xenolith::material2d::MenuSourceItem*

# ::stappler::xenolith::material2d::MenuSourceItem::getType() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::material2d::MenuSourceItem::Type

# ::stappler::xenolith::material2d::MenuSourceItem::handleNodeAttached(stappler::xenolith::Node*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Node*


# ::stappler::xenolith::material2d::MenuSourceItem::handleNodeDetached(stappler::xenolith::Node*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Node*


# ::stappler::xenolith::material2d::MenuSourceItem::setDirty()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::material2d::MenuSourceItem::_type

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::material2d::MenuSourceItem::Type


# ::stappler::xenolith::material2d::MenuSourceItem::_customData

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::mem_std::Value


# ::stappler::xenolith::material2d::MenuSourceItem::_attachCallback

## BRIEF

## CONTENT

Доступ: protected

Тип: AttachCallback


# ::stappler::xenolith::material2d::MenuSourceItem::_detachCallback

## BRIEF

## CONTENT

Доступ: protected

Тип: AttachCallback


# ::stappler::xenolith::material2d::MenuSourceCustom

## BRIEF

## CONTENT

Базовые классы:
* MenuSourceItem


# ::stappler::xenolith::material2d::MenuSourceCustom::FactoryFunction

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::material2d::MenuSourceCustom::HeightFunction

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::material2d::MenuSourceCustom::init()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::material2d::MenuSourceCustom::init(float,stappler::xenolith::material2d::MenuSourceCustom::FactoryFunction const&,float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float
* stappler::xenolith::material2d::MenuSourceCustom::FactoryFunction const&
* float

Возвращает:
* bool

# ::stappler::xenolith::material2d::MenuSourceCustom::init(stappler::xenolith::material2d::MenuSourceCustom::HeightFunction const&,stappler::xenolith::material2d::MenuSourceCustom::FactoryFunction const&,float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::material2d::MenuSourceCustom::HeightFunction const&
* stappler::xenolith::material2d::MenuSourceCustom::FactoryFunction const&
* float

Возвращает:
* bool

# ::stappler::xenolith::material2d::MenuSourceCustom::copy() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Rc<stappler::xenolith::material2d::MenuSourceItem>

# ::stappler::xenolith::material2d::MenuSourceCustom::getMinWidth() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* float

# ::stappler::xenolith::material2d::MenuSourceCustom::getHeight(stappler::xenolith::Node*,float) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Node*
* float

Возвращает:
* float

# ::stappler::xenolith::material2d::MenuSourceCustom::getHeightFunction() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* HeightFunction&

# ::stappler::xenolith::material2d::MenuSourceCustom::getFactoryFunction() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* FactoryFunction&

# ::stappler::xenolith::material2d::MenuSourceCustom::_minWidth

## BRIEF

## CONTENT

Доступ: protected

Тип: float


# ::stappler::xenolith::material2d::MenuSourceCustom::_heightFunction

## BRIEF

## CONTENT

Доступ: protected

Тип: HeightFunction


# ::stappler::xenolith::material2d::MenuSourceCustom::_function

## BRIEF

## CONTENT

Доступ: protected

Тип: FactoryFunction


# ::stappler::xenolith::material2d::MenuSource

## BRIEF

## CONTENT

Базовые классы:
* Subscription


# ::stappler::xenolith::material2d::MenuSource::Callback

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::material2d::MenuSource::FactoryFunction

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::material2d::MenuSource::HeightFunction

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::material2d::MenuSource::init()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::material2d::MenuSource::~MenuSource()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::material2d::MenuSource::setHintCount(size_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* size_t


# ::stappler::xenolith::material2d::MenuSource::getHintCount() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* size_t

# ::stappler::xenolith::material2d::MenuSource::copy() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Rc<stappler::xenolith::material2d::MenuSource>

# ::stappler::xenolith::material2d::MenuSource::addItem(stappler::xenolith::material2d::MenuSourceItem*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::material2d::MenuSourceItem*


# ::stappler::xenolith::material2d::MenuSource::addButton(stappler::StringView,stappler::xenolith::material2d::MenuSource::Callback&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView
* stappler::xenolith::material2d::MenuSource::Callback&&

Возвращает:
* stappler::xenolith::material2d::MenuSourceButton*

# ::stappler::xenolith::material2d::MenuSource::addButton(stappler::StringView,stappler::xenolith::IconName,stappler::xenolith::material2d::MenuSource::Callback&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView
* stappler::xenolith::IconName
* stappler::xenolith::material2d::MenuSource::Callback&&

Возвращает:
* stappler::xenolith::material2d::MenuSourceButton*

# ::stappler::xenolith::material2d::MenuSource::addButton(stappler::StringView,stappler::xenolith::IconName,Rc<stappler::xenolith::material2d::MenuSource>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView
* stappler::xenolith::IconName
* Rc<stappler::xenolith::material2d::MenuSource>&&

Возвращает:
* stappler::xenolith::material2d::MenuSourceButton*

# ::stappler::xenolith::material2d::MenuSource::addCustom(float,stappler::xenolith::material2d::MenuSource::FactoryFunction const&,float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float
* stappler::xenolith::material2d::MenuSource::FactoryFunction const&
* float

Возвращает:
* stappler::xenolith::material2d::MenuSourceCustom*

# ::stappler::xenolith::material2d::MenuSource::addCustom(stappler::xenolith::material2d::MenuSource::HeightFunction const&,stappler::xenolith::material2d::MenuSource::FactoryFunction const&,float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::material2d::MenuSource::HeightFunction const&
* stappler::xenolith::material2d::MenuSource::FactoryFunction const&
* float

Возвращает:
* stappler::xenolith::material2d::MenuSourceCustom*

# ::stappler::xenolith::material2d::MenuSource::addSeparator()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::material2d::MenuSourceItem*

# ::stappler::xenolith::material2d::MenuSource::clear()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::material2d::MenuSource::count()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint32_t

# ::stappler::xenolith::material2d::MenuSource::getItems() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Vector<Rc<stappler::xenolith::material2d::MenuSourceItem>> const&

# ::stappler::xenolith::material2d::MenuSource::_items

## BRIEF

## CONTENT

Доступ: protected

Тип: Vector<Rc<stappler::xenolith::material2d::MenuSourceItem>>


# ::stappler::xenolith::material2d::MenuSource::_hintCount

## BRIEF

## CONTENT

Доступ: protected

Тип: size_t


# ::stappler::xenolith::material2d::MenuSourceButton

## BRIEF

## CONTENT

Базовые классы:
* MenuSourceItem


# ::stappler::xenolith::material2d::MenuSourceButton::Callback

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::material2d::MenuSourceButton::~MenuSourceButton()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::material2d::MenuSourceButton::init(stappler::StringView,stappler::xenolith::IconName,stappler::xenolith::material2d::MenuSourceButton::Callback&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView
* stappler::xenolith::IconName
* stappler::xenolith::material2d::MenuSourceButton::Callback&&

Возвращает:
* bool

# ::stappler::xenolith::material2d::MenuSourceButton::init(stappler::StringView,stappler::xenolith::IconName,Rc<stappler::xenolith::material2d::MenuSource>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView
* stappler::xenolith::IconName
* Rc<stappler::xenolith::material2d::MenuSource>&&

Возвращает:
* bool

# ::stappler::xenolith::material2d::MenuSourceButton::init()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::material2d::MenuSourceButton::copy() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Rc<stappler::xenolith::material2d::MenuSourceItem>

# ::stappler::xenolith::material2d::MenuSourceButton::setName(stappler::StringView)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView


# ::stappler::xenolith::material2d::MenuSourceButton::getName() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::mem_std::String const&

# ::stappler::xenolith::material2d::MenuSourceButton::setValue(stappler::StringView)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView


# ::stappler::xenolith::material2d::MenuSourceButton::getValue() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::mem_std::String const&

# ::stappler::xenolith::material2d::MenuSourceButton::setNameIcon(stappler::xenolith::IconName)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::IconName


# ::stappler::xenolith::material2d::MenuSourceButton::getNameIcon() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::IconName

# ::stappler::xenolith::material2d::MenuSourceButton::setValueIcon(stappler::xenolith::IconName)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::IconName


# ::stappler::xenolith::material2d::MenuSourceButton::getValueIcon() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::IconName

# ::stappler::xenolith::material2d::MenuSourceButton::setCallback(stappler::xenolith::material2d::MenuSourceButton::Callback&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::material2d::MenuSourceButton::Callback&&


# ::stappler::xenolith::material2d::MenuSourceButton::getCallback() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Callback&

# ::stappler::xenolith::material2d::MenuSourceButton::setNextMenu(stappler::xenolith::material2d::MenuSource*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::material2d::MenuSource*


# ::stappler::xenolith::material2d::MenuSourceButton::getNextMenu() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::material2d::MenuSource*

# ::stappler::xenolith::material2d::MenuSourceButton::setSelected(bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* bool


# ::stappler::xenolith::material2d::MenuSourceButton::isSelected() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::material2d::MenuSourceButton::_name

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::mem_std::String


# ::stappler::xenolith::material2d::MenuSourceButton::_value

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::mem_std::String


# ::stappler::xenolith::material2d::MenuSourceButton::_nameIcon

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::IconName


# ::stappler::xenolith::material2d::MenuSourceButton::_valueIcon

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::IconName


# ::stappler::xenolith::material2d::MenuSourceButton::_nextMenu

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::xenolith::material2d::MenuSource>


# ::stappler::xenolith::material2d::MenuSourceButton::_callback

## BRIEF

## CONTENT

Доступ: protected

Тип: Callback


# ::stappler::xenolith::material2d::MenuSourceButton::_selected

## BRIEF

## CONTENT

Доступ: protected

Тип: bool
