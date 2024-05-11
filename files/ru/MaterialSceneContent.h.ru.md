Title: MaterialSceneContent.h


# XENOLITH_RENDERER_MATERIAL2D_LAYOUT_MATERIALSCENECONTENT_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::material2d::SceneContent

## BRIEF

## CONTENT

Базовые классы:
* SceneContent2d


# ::stappler::xenolith::material2d::SceneContent::~SceneContent()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::material2d::SceneContent::init()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::material2d::SceneContent::onContentSizeDirty()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::material2d::SceneContent::visitDraw(stappler::xenolith::FrameInfo&,stappler::xenolith::NodeFlags)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::FrameInfo&
* stappler::xenolith::NodeFlags

Возвращает:
* bool

# ::stappler::xenolith::material2d::SceneContent::showSnackbar(stappler::xenolith::material2d::SnackbarData&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::material2d::SnackbarData&&


# ::stappler::xenolith::material2d::SceneContent::getSnackbarString() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::mem_std::String const&

# ::stappler::xenolith::material2d::SceneContent::clearSnackbar()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::material2d::SceneContent::isNavigationAvailable() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::material2d::SceneContent::setNavigationEnabled(bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* bool


# ::stappler::xenolith::material2d::SceneContent::setNavigationMenuSource(stappler::xenolith::material2d::MenuSource*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::material2d::MenuSource*


# ::stappler::xenolith::material2d::SceneContent::setNavigationStyle(stappler::xenolith::material2d::SurfaceStyle const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::material2d::SurfaceStyle const&


# ::stappler::xenolith::material2d::SceneContent::openNavigation()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::material2d::SceneContent::closeNavigation()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::material2d::SceneContent::getMaxDepthIndex() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* float

# ::stappler::xenolith::material2d::SceneContent::onBackButton()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::material2d::SceneContent::updateNodesVisibility()

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::material2d::SceneContent::handleBackgroundTransition(bool)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* bool


# ::stappler::xenolith::material2d::SceneContent::_snackbarRoot

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::Node*


# ::stappler::xenolith::material2d::SceneContent::_snackbar

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::material2d::Snackbar*


# ::stappler::xenolith::material2d::SceneContent::_navigation

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::material2d::NavigationDrawer*
