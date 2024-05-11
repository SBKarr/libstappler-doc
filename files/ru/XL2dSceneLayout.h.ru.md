Title: XL2dSceneLayout.h


# XENOLITH_RENDERER_BASIC2D_XL2DSCENELAYOUT_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::basic2d::DecorationMask

## BRIEF

## CONTENT

Значения:
* None
* Top
* Bottom
* Left
* Right
* Vertical
* Horizontal
* All


# ::stappler::xenolith::basic2d::operator|(stappler::xenolith::basic2d::DecorationMask const&,stappler::xenolith::basic2d::DecorationMask const&)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::basic2d::DecorationMask const&
* stappler::xenolith::basic2d::DecorationMask const&

Возвращает:
* stappler::xenolith::basic2d::DecorationMask

# ::stappler::xenolith::basic2d::operator&(stappler::xenolith::basic2d::DecorationMask const&,stappler::xenolith::basic2d::DecorationMask const&)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::basic2d::DecorationMask const&
* stappler::xenolith::basic2d::DecorationMask const&

Возвращает:
* stappler::xenolith::basic2d::DecorationMask

# ::stappler::xenolith::basic2d::operator^(stappler::xenolith::basic2d::DecorationMask const&,stappler::xenolith::basic2d::DecorationMask const&)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::basic2d::DecorationMask const&
* stappler::xenolith::basic2d::DecorationMask const&

Возвращает:
* stappler::xenolith::basic2d::DecorationMask

# ::stappler::xenolith::basic2d::operator|=(stappler::xenolith::basic2d::DecorationMask&,stappler::xenolith::basic2d::DecorationMask const&)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::basic2d::DecorationMask&
* stappler::xenolith::basic2d::DecorationMask const&

Возвращает:
* stappler::xenolith::basic2d::DecorationMask&

# ::stappler::xenolith::basic2d::operator&=(stappler::xenolith::basic2d::DecorationMask&,stappler::xenolith::basic2d::DecorationMask const&)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::basic2d::DecorationMask&
* stappler::xenolith::basic2d::DecorationMask const&

Возвращает:
* stappler::xenolith::basic2d::DecorationMask&

# ::stappler::xenolith::basic2d::operator^=(stappler::xenolith::basic2d::DecorationMask&,stappler::xenolith::basic2d::DecorationMask const&)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::basic2d::DecorationMask&
* stappler::xenolith::basic2d::DecorationMask const&

Возвращает:
* stappler::xenolith::basic2d::DecorationMask&

# ::stappler::xenolith::basic2d::operator==(stappler::xenolith::basic2d::DecorationMask const&,std::underlying_type<DecorationMask>::type const&)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::basic2d::DecorationMask const&
* std::underlying_type<DecorationMask>::type const&

Возвращает:
* bool

# ::stappler::xenolith::basic2d::operator==(std::underlying_type<DecorationMask>::type const&,stappler::xenolith::basic2d::DecorationMask const&)

## BRIEF

## CONTENT

Параметры:
* std::underlying_type<DecorationMask>::type const&
* stappler::xenolith::basic2d::DecorationMask const&

Возвращает:
* bool

# ::stappler::xenolith::basic2d::operator!=(stappler::xenolith::basic2d::DecorationMask const&,std::underlying_type<DecorationMask>::type const&)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::basic2d::DecorationMask const&
* std::underlying_type<DecorationMask>::type const&

Возвращает:
* bool

# ::stappler::xenolith::basic2d::operator!=(std::underlying_type<DecorationMask>::type const&,stappler::xenolith::basic2d::DecorationMask const&)

## BRIEF

## CONTENT

Параметры:
* std::underlying_type<DecorationMask>::type const&
* stappler::xenolith::basic2d::DecorationMask const&

Возвращает:
* bool

# ::stappler::xenolith::basic2d::operator~(stappler::xenolith::basic2d::DecorationMask const&)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::basic2d::DecorationMask const&

Возвращает:
* stappler::xenolith::basic2d::DecorationMask

# ::stappler::xenolith::basic2d::DecorationStatus

## BRIEF

## CONTENT

Значения:
* DontCare
* Visible
* Hidden


# ::stappler::xenolith::basic2d::SceneLayout2d

## BRIEF

## CONTENT

Базовые классы:
* DynamicStateNode


# ::stappler::xenolith::basic2d::SceneLayout2d::BackButtonCallback

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::basic2d::SceneLayout2d::Transition

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::basic2d::SceneLayout2d::~SceneLayout2d()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::basic2d::SceneLayout2d::setDecorationMask(stappler::xenolith::basic2d::DecorationMask)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::basic2d::DecorationMask


# ::stappler::xenolith::basic2d::SceneLayout2d::getDecodationMask() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::basic2d::DecorationMask

# ::stappler::xenolith::basic2d::SceneLayout2d::setDecorationPadding(stappler::geom::Padding)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::geom::Padding


# ::stappler::xenolith::basic2d::SceneLayout2d::getDecorationPadding() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::geom::Padding

# ::stappler::xenolith::basic2d::SceneLayout2d::setTargetContentSize(const stappler::geom::Size2&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* const stappler::geom::Size2&


# ::stappler::xenolith::basic2d::SceneLayout2d::getTargetContentSize() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::geom::Size2

# ::stappler::xenolith::basic2d::SceneLayout2d::onBackButton()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::basic2d::SceneLayout2d::setBackButtonCallback(stappler::xenolith::basic2d::SceneLayout2d::BackButtonCallback const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::basic2d::SceneLayout2d::BackButtonCallback const&


# ::stappler::xenolith::basic2d::SceneLayout2d::getBackButtonCallback() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* BackButtonCallback&

# ::stappler::xenolith::basic2d::SceneLayout2d::onPush(stappler::xenolith::basic2d::SceneContent2d*,bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::basic2d::SceneContent2d*
* bool


# ::stappler::xenolith::basic2d::SceneLayout2d::onPushTransitionEnded(stappler::xenolith::basic2d::SceneContent2d*,bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::basic2d::SceneContent2d*
* bool


# ::stappler::xenolith::basic2d::SceneLayout2d::onPopTransitionBegan(stappler::xenolith::basic2d::SceneContent2d*,bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::basic2d::SceneContent2d*
* bool


# ::stappler::xenolith::basic2d::SceneLayout2d::onPop(stappler::xenolith::basic2d::SceneContent2d*,bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::basic2d::SceneContent2d*
* bool


# ::stappler::xenolith::basic2d::SceneLayout2d::onBackground(stappler::xenolith::basic2d::SceneContent2d*,stappler::xenolith::basic2d::SceneLayout2d*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::basic2d::SceneContent2d*
* stappler::xenolith::basic2d::SceneLayout2d*


# ::stappler::xenolith::basic2d::SceneLayout2d::onBackgroundTransitionEnded(stappler::xenolith::basic2d::SceneContent2d*,stappler::xenolith::basic2d::SceneLayout2d*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::basic2d::SceneContent2d*
* stappler::xenolith::basic2d::SceneLayout2d*


# ::stappler::xenolith::basic2d::SceneLayout2d::onForegroundTransitionBegan(stappler::xenolith::basic2d::SceneContent2d*,stappler::xenolith::basic2d::SceneLayout2d*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::basic2d::SceneContent2d*
* stappler::xenolith::basic2d::SceneLayout2d*


# ::stappler::xenolith::basic2d::SceneLayout2d::onForeground(stappler::xenolith::basic2d::SceneContent2d*,stappler::xenolith::basic2d::SceneLayout2d*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::basic2d::SceneContent2d*
* stappler::xenolith::basic2d::SceneLayout2d*


# ::stappler::xenolith::basic2d::SceneLayout2d::makeEnterTransition(stappler::xenolith::basic2d::SceneContent2d*) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::basic2d::SceneContent2d*

Возвращает:
* Rc<stappler::xenolith::basic2d::SceneLayout2d::Transition>

# ::stappler::xenolith::basic2d::SceneLayout2d::makeExitTransition(stappler::xenolith::basic2d::SceneContent2d*) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::basic2d::SceneContent2d*

Возвращает:
* Rc<stappler::xenolith::basic2d::SceneLayout2d::Transition>

# ::stappler::xenolith::basic2d::SceneLayout2d::hasBackButtonAction() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::basic2d::SceneLayout2d::setLayoutName(stappler::StringView)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView


# ::stappler::xenolith::basic2d::SceneLayout2d::getLayoutName() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::StringView

# ::stappler::xenolith::basic2d::SceneLayout2d::getDecorationStatus() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::basic2d::DecorationStatus

# ::stappler::xenolith::basic2d::SceneLayout2d::getSceneContent() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::basic2d::SceneContent2d*

# ::stappler::xenolith::basic2d::SceneLayout2d::_decorationMask

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::basic2d::DecorationMask


# ::stappler::xenolith::basic2d::SceneLayout2d::_decorationPadding

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::geom::Padding


# ::stappler::xenolith::basic2d::SceneLayout2d::_inTransition

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::basic2d::SceneLayout2d::_backButtonCallback

## BRIEF

## CONTENT

Доступ: protected

Тип: BackButtonCallback


# ::stappler::xenolith::basic2d::SceneLayout2d::_sceneContent

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::basic2d::SceneContent2d*


# ::stappler::xenolith::basic2d::SceneLayout2d::_name

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::mem_std::String


# ::stappler::xenolith::basic2d::SceneLayout2d::_targetContentSize

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::geom::Size2
