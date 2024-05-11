Title: MaterialAppBar.h


# XENOLITH_RENDERER_MATERIAL2D_COMPONENTS_APPBAR_MATERIALAPPBAR_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::material2d::AppBarLayout

## BRIEF

## CONTENT

Значения:
* CenterAligned
* Small
* Medium
* Large
* Minified


# ::stappler::xenolith::material2d::AppBar

## BRIEF

## CONTENT

Базовые классы:
* Surface


# ::stappler::xenolith::material2d::AppBar::DefaultAppBarStyle

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::xenolith::material2d::SurfaceStyle const


# ::stappler::xenolith::material2d::AppBar::~AppBar()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::material2d::AppBar::init(stappler::xenolith::material2d::AppBarLayout,stappler::xenolith::material2d::SurfaceStyle const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::material2d::AppBarLayout
* stappler::xenolith::material2d::SurfaceStyle const&

Возвращает:
* bool

# ::stappler::xenolith::material2d::AppBar::onContentSizeDirty()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::material2d::AppBar::setLayout(stappler::xenolith::material2d::AppBarLayout)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::material2d::AppBarLayout


# ::stappler::xenolith::material2d::AppBar::getLayout() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::material2d::AppBarLayout

# ::stappler::xenolith::material2d::AppBar::setTitle(stappler::StringView)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView


# ::stappler::xenolith::material2d::AppBar::getTitle() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::StringView

# ::stappler::xenolith::material2d::AppBar::setNavButtonIcon(stappler::xenolith::IconName,float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::IconName
* float


# ::stappler::xenolith::material2d::AppBar::getNavButtonIcon() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::IconName

# ::stappler::xenolith::material2d::AppBar::setMaxActionIcons(size_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* size_t


# ::stappler::xenolith::material2d::AppBar::getMaxActionIcons() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* size_t

# ::stappler::xenolith::material2d::AppBar::setActionMenuSource(stappler::xenolith::material2d::MenuSource*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::material2d::MenuSource*


# ::stappler::xenolith::material2d::AppBar::replaceActionMenuSource(stappler::xenolith::material2d::MenuSource*,size_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::material2d::MenuSource*
* size_t


# ::stappler::xenolith::material2d::AppBar::getActionMenuSource() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::material2d::MenuSource*

# ::stappler::xenolith::material2d::AppBar::setBasicHeight(float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float


# ::stappler::xenolith::material2d::AppBar::getBasicHeight() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* float

# ::stappler::xenolith::material2d::AppBar::setNavCallback(Function<void ()>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Function<void ()>&&


# ::stappler::xenolith::material2d::AppBar::getNavCallback() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Function<void ()> const&

# ::stappler::xenolith::material2d::AppBar::setSwallowTouches(bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* bool


# ::stappler::xenolith::material2d::AppBar::isSwallowTouches() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::material2d::AppBar::setBarCallback(Function<void ()>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Function<void ()>&&


# ::stappler::xenolith::material2d::AppBar::getBarCallback() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Function<void ()> const&

# ::stappler::xenolith::material2d::AppBar::getNavNode() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::material2d::Button*

# ::stappler::xenolith::material2d::AppBar::handleNavTapped()

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::material2d::AppBar::updateProgress()

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::material2d::AppBar::updateMenu(stappler::xenolith::Node*,stappler::xenolith::material2d::MenuSource*,size_t)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::Node*
* stappler::xenolith::material2d::MenuSource*
* size_t

Возвращает:
* float

# ::stappler::xenolith::material2d::AppBar::layoutSubviews()

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::material2d::AppBar::getBaseLine() const

## BRIEF

## CONTENT

Доступ: protected

Возвращает:
* float

# ::stappler::xenolith::material2d::AppBar::getRealHeight() const

## BRIEF

## CONTENT

Доступ: protected

Возвращает:
* float

# ::stappler::xenolith::material2d::AppBar::updateDefaultHeight()

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::material2d::AppBar::_layout

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::material2d::AppBarLayout


# ::stappler::xenolith::material2d::AppBar::_label

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::material2d::TypescaleLabel*


# ::stappler::xenolith::material2d::AppBar::_navButton

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::material2d::Button*


# ::stappler::xenolith::material2d::AppBar::_maxActionIcons

## BRIEF

## CONTENT

Доступ: protected

Тип: size_t


# ::stappler::xenolith::material2d::AppBar::_scissorNode

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::DynamicStateNode*


# ::stappler::xenolith::material2d::AppBar::_iconsComposer

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::Node*


# ::stappler::xenolith::material2d::AppBar::_prevComposer

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::Node*


# ::stappler::xenolith::material2d::AppBar::_actionMenuSourceListener

## BRIEF

## CONTENT

Доступ: protected

Тип: DataListener<stappler::xenolith::material2d::MenuSource>*


# ::stappler::xenolith::material2d::AppBar::_navCallback

## BRIEF

## CONTENT

Доступ: protected

Тип: Function<void ()>


# ::stappler::xenolith::material2d::AppBar::_barCallback

## BRIEF

## CONTENT

Доступ: protected

Тип: Function<void ()>


# ::stappler::xenolith::material2d::AppBar::_replaceProgress

## BRIEF

## CONTENT

Доступ: protected

Тип: float


# ::stappler::xenolith::material2d::AppBar::_defaultHeight

## BRIEF

## CONTENT

Доступ: protected

Тип: float


# ::stappler::xenolith::material2d::AppBar::_basicHeight

## BRIEF

## CONTENT

Доступ: protected

Тип: float


# ::stappler::xenolith::material2d::AppBar::_iconWidth

## BRIEF

## CONTENT

Доступ: protected

Тип: float


# ::stappler::xenolith::material2d::AppBar::_inputListener

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::InputListener*
