Title: MaterialMenu.h


# XENOLITH_RENDERER_MATERIAL2D_COMPONENTS_MENU_MATERIALMENU_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::material2d::MenuItemInterface

## BRIEF

## CONTENT


# ::stappler::xenolith::material2d::MenuItemInterface::~MenuItemInterface()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::material2d::MenuItemInterface::setMenu(stappler::xenolith::material2d::Menu*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::material2d::Menu*


# ::stappler::xenolith::material2d::MenuItemInterface::getMenu() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::material2d::Menu*

# ::stappler::xenolith::material2d::MenuItemInterface::_menu

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::material2d::Menu*


# ::stappler::xenolith::material2d::Menu

## BRIEF

## CONTENT

Базовые классы:
* Surface


# ::stappler::xenolith::material2d::Menu::MenuVerticalPadding

## BRIEF

## CONTENT

Доступ: public

Тип: float const


# ::stappler::xenolith::material2d::Menu::MenuItemHeight

## BRIEF

## CONTENT

Доступ: public

Тип: float const


# ::stappler::xenolith::material2d::Menu::MenuHorizontalIncrement

## BRIEF

## CONTENT

Доступ: public

Тип: float const


# ::stappler::xenolith::material2d::Menu::MenuLeadingHeight

## BRIEF

## CONTENT

Доступ: public

Тип: float const


# ::stappler::xenolith::material2d::Menu::MenuTrailingHeight

## BRIEF

## CONTENT

Доступ: public

Тип: float const


# ::stappler::xenolith::material2d::Menu::ButtonCallback

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::material2d::Menu::~Menu()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::material2d::Menu::init()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::material2d::Menu::init(stappler::xenolith::material2d::MenuSource*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::material2d::MenuSource*

Возвращает:
* bool

# ::stappler::xenolith::material2d::Menu::setMenuSource(stappler::xenolith::material2d::MenuSource*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::material2d::MenuSource*


# ::stappler::xenolith::material2d::Menu::getMenuSource() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::material2d::MenuSource*

# ::stappler::xenolith::material2d::Menu::setEnabled(bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* bool


# ::stappler::xenolith::material2d::Menu::isEnabled() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::material2d::Menu::setMenuButtonCallback(stappler::xenolith::material2d::Menu::ButtonCallback const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::material2d::Menu::ButtonCallback const&


# ::stappler::xenolith::material2d::Menu::getMenuButtonCallback()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* ButtonCallback&

# ::stappler::xenolith::material2d::Menu::onMenuButtonPressed(stappler::xenolith::material2d::MenuButton*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::material2d::MenuButton*


# ::stappler::xenolith::material2d::Menu::layoutSubviews()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::material2d::Menu::onContentSizeDirty()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::material2d::Menu::getScroll() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::basic2d::ScrollView*

# ::stappler::xenolith::material2d::Menu::getDataListener() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* DataListener<stappler::xenolith::material2d::MenuSource>*

# ::stappler::xenolith::material2d::Menu::rebuildMenu()

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::material2d::Menu::createButton(stappler::xenolith::material2d::Menu*,stappler::xenolith::material2d::MenuSourceButton*)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::material2d::Menu*
* stappler::xenolith::material2d::MenuSourceButton*

Возвращает:
* Rc<stappler::xenolith::material2d::MenuButton>

# ::stappler::xenolith::material2d::Menu::createSeparator(stappler::xenolith::material2d::Menu*,stappler::xenolith::material2d::MenuSourceItem*)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::material2d::Menu*
* stappler::xenolith::material2d::MenuSourceItem*

Возвращает:
* Rc<stappler::xenolith::material2d::MenuSeparator>

# ::stappler::xenolith::material2d::Menu::handleSourceDirty()

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::material2d::Menu::_scroll

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::basic2d::ScrollView*


# ::stappler::xenolith::material2d::Menu::_controller

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::basic2d::ScrollController*


# ::stappler::xenolith::material2d::Menu::_menuListener

## BRIEF

## CONTENT

Доступ: protected

Тип: DataListener<stappler::xenolith::material2d::MenuSource>*


# ::stappler::xenolith::material2d::Menu::_callback

## BRIEF

## CONTENT

Доступ: protected

Тип: ButtonCallback
