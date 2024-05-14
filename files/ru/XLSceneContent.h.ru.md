Title: XLSceneContent.h


# XENOLITH_SCENE_NODES_XLSCENECONTENT_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::SceneContent

## BRIEF

## CONTENT

Базовые классы:
* DynamicStateNode


# ::stappler::xenolith::SceneContent::~SceneContent()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::SceneContent::init()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::SceneContent::onEnter(stappler::xenolith::Scene*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Scene*


# ::stappler::xenolith::SceneContent::onExit()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::SceneContent::onContentSizeDirty()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::SceneContent::onBackButton()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::SceneContent::setHandlesViewDecoration(bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* bool


# ::stappler::xenolith::SceneContent::isHandlesViewDecoration() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::SceneContent::showViewDecoration()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::SceneContent::hideViewDecoration()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::SceneContent::getDecorationPadding() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::geom::Padding

# ::stappler::xenolith::SceneContent::setDecorationPadding(stappler::geom::Padding)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::geom::Padding


# ::stappler::xenolith::SceneContent::updateBackButtonStatus()

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::SceneContent::handleBackgroundTransition(bool)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* bool


# ::stappler::xenolith::SceneContent::_decorationPadding

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::geom::Padding


# ::stappler::xenolith::SceneContent::_inputListener

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::InputListener*


# ::stappler::xenolith::SceneContent::_retainBackButton

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::SceneContent::_backButtonRetained

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::SceneContent::_handlesViewDecoration

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::SceneContent::_decorationVisible

## BRIEF

## CONTENT

Доступ: protected

Тип: bool
