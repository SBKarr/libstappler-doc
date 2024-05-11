Title: MaterialTabBar.h


# XENOLITH_RENDERER_MATERIAL2D_COMPONENTS_MENU_MATERIALTABBAR_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::material2d::TabBar

## BRIEF

## CONTENT

Базовые классы:
* Surface


# ::stappler::xenolith::material2d::TabBar::ButtonStyle

## BRIEF

## CONTENT

Доступ: public

Значения:
* Title
* Icon
* TitleIcon


# ::stappler::xenolith::material2d::TabBar::BarStyle

## BRIEF

## CONTENT

Доступ: public

Значения:
* Layout
* Scroll


# ::stappler::xenolith::material2d::TabBar::Alignment

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::material2d::TabBar::~TabBar()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::material2d::TabBar::init(stappler::xenolith::material2d::MenuSource*,stappler::xenolith::material2d::TabBar::ButtonStyle,stappler::xenolith::material2d::TabBar::BarStyle,stappler::xenolith::material2d::TabBar::Alignment)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::material2d::MenuSource*
* stappler::xenolith::material2d::TabBar::ButtonStyle
* stappler::xenolith::material2d::TabBar::BarStyle
* stappler::xenolith::material2d::TabBar::Alignment

Возвращает:
* bool

# ::stappler::xenolith::material2d::TabBar::onContentSizeDirty()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::material2d::TabBar::setMenuSource(stappler::xenolith::material2d::MenuSource*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::material2d::MenuSource*


# ::stappler::xenolith::material2d::TabBar::getMenuSource() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::material2d::MenuSource*

# ::stappler::xenolith::material2d::TabBar::setAccentColor(stappler::xenolith::material2d::ColorRole const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::material2d::ColorRole const&


# ::stappler::xenolith::material2d::TabBar::getAccentColor() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::material2d::ColorRole

# ::stappler::xenolith::material2d::TabBar::setButtonStyle(stappler::xenolith::material2d::TabBar::ButtonStyle const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::material2d::TabBar::ButtonStyle const&


# ::stappler::xenolith::material2d::TabBar::getButtonStyle() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::material2d::TabBar::ButtonStyle const&

# ::stappler::xenolith::material2d::TabBar::setBarStyle(stappler::xenolith::material2d::TabBar::BarStyle const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::material2d::TabBar::BarStyle const&


# ::stappler::xenolith::material2d::TabBar::getBarStyle() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::material2d::TabBar::BarStyle const&

# ::stappler::xenolith::material2d::TabBar::setAlignment(stappler::xenolith::material2d::TabBar::Alignment const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::material2d::TabBar::Alignment const&


# ::stappler::xenolith::material2d::TabBar::getAlignment() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Alignment&

# ::stappler::xenolith::material2d::TabBar::setSelectedIndex(size_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* size_t


# ::stappler::xenolith::material2d::TabBar::getSelectedIndex() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* size_t

# ::stappler::xenolith::material2d::TabBar::setProgress(float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float


# ::stappler::xenolith::material2d::TabBar::setSelectedTabIndex(size_t)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* size_t


# ::stappler::xenolith::material2d::TabBar::onMenuSource()

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::material2d::TabBar::onScrollPosition()

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::material2d::TabBar::onScrollPositionProgress(float)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* float


# ::stappler::xenolith::material2d::TabBar::getItemSize(stappler::mem_std::String const&,bool,bool) const

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::mem_std::String const&
* bool
* bool

Возвращает:
* float

# ::stappler::xenolith::material2d::TabBar::onItem(stappler::xenolith::material2d::MenuSourceButton*,bool)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::material2d::MenuSourceButton*
* bool

Возвращает:
* Rc<stappler::xenolith::Node>

# ::stappler::xenolith::material2d::TabBar::onTabButton(stappler::xenolith::material2d::Button*,stappler::xenolith::material2d::MenuSourceButton*)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::material2d::Button*
* stappler::xenolith::material2d::MenuSourceButton*


# ::stappler::xenolith::material2d::TabBar::applyStyle(stappler::xenolith::material2d::StyleContainer*,stappler::xenolith::material2d::SurfaceStyleData const&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::material2d::StyleContainer*
* stappler::xenolith::material2d::SurfaceStyleData const&


# ::stappler::xenolith::material2d::TabBar::_alignment

## BRIEF

## CONTENT

Доступ: protected

Тип: Alignment


# ::stappler::xenolith::material2d::TabBar::_buttonStyle

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::material2d::TabBar::ButtonStyle


# ::stappler::xenolith::material2d::TabBar::_barStyle

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::material2d::TabBar::BarStyle


# ::stappler::xenolith::material2d::TabBar::_accentColor

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::material2d::ColorRole


# ::stappler::xenolith::material2d::TabBar::_scroll

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::basic2d::ScrollView*


# ::stappler::xenolith::material2d::TabBar::_layer

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::basic2d::Layer*


# ::stappler::xenolith::material2d::TabBar::_left

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::material2d::IconSprite*


# ::stappler::xenolith::material2d::TabBar::_right

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::material2d::IconSprite*


# ::stappler::xenolith::material2d::TabBar::_source

## BRIEF

## CONTENT

Доступ: protected

Тип: DataListener<stappler::xenolith::material2d::MenuSource>*


# ::stappler::xenolith::material2d::TabBar::_extra

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::xenolith::material2d::MenuSource>


# ::stappler::xenolith::material2d::TabBar::_buttonCount

## BRIEF

## CONTENT

Доступ: protected

Тип: size_t


# ::stappler::xenolith::material2d::TabBar::_scrollWidth

## BRIEF

## CONTENT

Доступ: protected

Тип: float


# ::stappler::xenolith::material2d::TabBar::_selectedIndex

## BRIEF

## CONTENT

Доступ: protected

Тип: size_t


# ::stappler::xenolith::material2d::TabBar::_positions

## BRIEF

## CONTENT

Доступ: protected

Тип: Vector<Pair<float, float>>


# ::stappler::xenolith::material2d::TabBarButton

## BRIEF

## CONTENT

Базовые классы:
* Button


# ::stappler::xenolith::material2d::TabBarButton::TabButtonCallback

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::material2d::TabBarButton::init(stappler::xenolith::material2d::MenuSourceButton*,stappler::xenolith::material2d::TabBarButton::TabButtonCallback const&,TabBar::ButtonStyle,bool,bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::material2d::MenuSourceButton*
* stappler::xenolith::material2d::TabBarButton::TabButtonCallback const&
* TabBar::ButtonStyle
* bool
* bool

Возвращает:
* bool

# ::stappler::xenolith::material2d::TabBarButton::init(stappler::xenolith::material2d::MenuSource*,stappler::xenolith::material2d::TabBarButton::TabButtonCallback const&,TabBar::ButtonStyle,bool,bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::material2d::MenuSource*
* stappler::xenolith::material2d::TabBarButton::TabButtonCallback const&
* TabBar::ButtonStyle
* bool
* bool

Возвращает:
* bool

# ::stappler::xenolith::material2d::TabBarButton::initialize(stappler::xenolith::material2d::TabBarButton::TabButtonCallback const&,TabBar::ButtonStyle,bool,bool)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::material2d::TabBarButton::TabButtonCallback const&
* TabBar::ButtonStyle
* bool
* bool


# ::stappler::xenolith::material2d::TabBarButton::onTabButton()

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::material2d::TabBarButton::layoutContent()

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::material2d::TabBarButton::_tabStyle

## BRIEF

## CONTENT

Доступ: protected

Тип: TabBar::ButtonStyle


# ::stappler::xenolith::material2d::TabBarButton::_wrapped

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::material2d::TabBarButton::_tabButtonCallback

## BRIEF

## CONTENT

Доступ: protected

Тип: TabButtonCallback
