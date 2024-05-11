Title: MaterialFloatingMenu.h


# XENOLITH_RENDERER_MATERIAL2D_COMPONENTS_MENU_MATERIALFLOATINGMENU_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::material2d::FloatingMenu

## BRIEF

## CONTENT

Базовые классы:
* Menu


# ::stappler::xenolith::material2d::FloatingMenu::CloseCallback

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::material2d::FloatingMenu::Binding

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::material2d::FloatingMenu::push(stappler::xenolith::basic2d::SceneContent2d*,stappler::xenolith::material2d::MenuSource*,const stappler::geom::Vec2&,stappler::xenolith::material2d::FloatingMenu::Binding,stappler::xenolith::material2d::Menu*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::basic2d::SceneContent2d*
* stappler::xenolith::material2d::MenuSource*
* const stappler::geom::Vec2&
* stappler::xenolith::material2d::FloatingMenu::Binding
* stappler::xenolith::material2d::Menu*


# ::stappler::xenolith::material2d::FloatingMenu::init(stappler::xenolith::material2d::MenuSource*,stappler::xenolith::material2d::Menu*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::material2d::MenuSource*
* stappler::xenolith::material2d::Menu*

Возвращает:
* bool

# ::stappler::xenolith::material2d::FloatingMenu::setCloseCallback(stappler::xenolith::material2d::FloatingMenu::CloseCallback const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::material2d::FloatingMenu::CloseCallback const&


# ::stappler::xenolith::material2d::FloatingMenu::getCloseCallback() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* CloseCallback&

# ::stappler::xenolith::material2d::FloatingMenu::close()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::material2d::FloatingMenu::closeRecursive()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::material2d::FloatingMenu::onMenuButton(stappler::xenolith::material2d::MenuButton*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::material2d::MenuButton*


# ::stappler::xenolith::material2d::FloatingMenu::getMenuWidth(stappler::xenolith::Node*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Node*

Возвращает:
* float

# ::stappler::xenolith::material2d::FloatingMenu::getMenuHeight(stappler::xenolith::Node*,float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Node*
* float

Возвращает:
* float

# ::stappler::xenolith::material2d::FloatingMenu::setReady(bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* bool


# ::stappler::xenolith::material2d::FloatingMenu::isReady() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::material2d::FloatingMenu::onCapturedTap()

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::material2d::FloatingMenu::_ready

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::material2d::FloatingMenu::_root

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::material2d::Menu*


# ::stappler::xenolith::material2d::FloatingMenu::_closeCallback

## BRIEF

## CONTENT

Доступ: protected

Тип: CloseCallback
