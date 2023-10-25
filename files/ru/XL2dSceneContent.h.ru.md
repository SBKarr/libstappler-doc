Title: XL2dSceneContent.h


# XENOLITH_RENDERER_BASIC2D_XL2DSCENECONTENT_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::basic2d::SceneContent2d

## BRIEF

## CONTENT

Базовые классы:
* SceneContent


# ::stappler::xenolith::basic2d::SceneContent2d::~SceneContent2d()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::basic2d::SceneContent2d::init()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::basic2d::SceneContent2d::onEnter(stappler::xenolith::Scene*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Scene*


# ::stappler::xenolith::basic2d::SceneContent2d::onExit()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::basic2d::SceneContent2d::onContentSizeDirty()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::basic2d::SceneContent2d::replaceLayout(stappler::xenolith::basic2d::SceneLayout2d*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::basic2d::SceneLayout2d*


# ::stappler::xenolith::basic2d::SceneContent2d::pushLayout(stappler::xenolith::basic2d::SceneLayout2d*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::basic2d::SceneLayout2d*


# ::stappler::xenolith::basic2d::SceneContent2d::replaceTopLayout(stappler::xenolith::basic2d::SceneLayout2d*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::basic2d::SceneLayout2d*


# ::stappler::xenolith::basic2d::SceneContent2d::popLayout(stappler::xenolith::basic2d::SceneLayout2d*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::basic2d::SceneLayout2d*


# ::stappler::xenolith::basic2d::SceneContent2d::pushOverlay(stappler::xenolith::basic2d::SceneLayout2d*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::basic2d::SceneLayout2d*

Возвращает:
* bool

# ::stappler::xenolith::basic2d::SceneContent2d::popOverlay(stappler::xenolith::basic2d::SceneLayout2d*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::basic2d::SceneLayout2d*

Возвращает:
* bool

# ::stappler::xenolith::basic2d::SceneContent2d::getTopLayout()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::basic2d::SceneLayout2d*

# ::stappler::xenolith::basic2d::SceneContent2d::getPrevLayout()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::basic2d::SceneLayout2d*

# ::stappler::xenolith::basic2d::SceneContent2d::popTopLayout()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::basic2d::SceneContent2d::isActive() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::basic2d::SceneContent2d::onBackButton()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::basic2d::SceneContent2d::getLayoutsCount() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* size_t

# ::stappler::xenolith::basic2d::SceneContent2d::getLayouts() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Vector<Rc<stappler::xenolith::basic2d::SceneLayout2d>> const&

# ::stappler::xenolith::basic2d::SceneContent2d::getOverlays() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Vector<Rc<stappler::xenolith::basic2d::SceneLayout2d>> const&

# ::stappler::xenolith::basic2d::SceneContent2d::getDecorationPadding() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::Padding

# ::stappler::xenolith::basic2d::SceneContent2d::updateLayoutNode(stappler::xenolith::basic2d::SceneLayout2d*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::basic2d::SceneLayout2d*


# ::stappler::xenolith::basic2d::SceneContent2d::addLight(stappler::xenolith::basic2d::SceneLight*,uint64_t,stappler::StringView)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::basic2d::SceneLight*
* uint64_t
* stappler::StringView

Возвращает:
* bool

# ::stappler::xenolith::basic2d::SceneContent2d::getLightByTag(uint64_t) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint64_t

Возвращает:
* stappler::xenolith::basic2d::SceneLight*

# ::stappler::xenolith::basic2d::SceneContent2d::getLightByName(stappler::StringView) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView

Возвращает:
* stappler::xenolith::basic2d::SceneLight*

# ::stappler::xenolith::basic2d::SceneContent2d::removeLight(stappler::xenolith::basic2d::SceneLight*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::basic2d::SceneLight*


# ::stappler::xenolith::basic2d::SceneContent2d::removeLightByTag(uint64_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint64_t


# ::stappler::xenolith::basic2d::SceneContent2d::removeLightByName(stappler::StringView)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView


# ::stappler::xenolith::basic2d::SceneContent2d::removeAllLights()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::basic2d::SceneContent2d::removeAllLightsByType(stappler::xenolith::basic2d::SceneLightType)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::basic2d::SceneLightType


# ::stappler::xenolith::basic2d::SceneContent2d::setGlobalLight(stappler::xenolith::Color4F const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Color4F const&


# ::stappler::xenolith::basic2d::SceneContent2d::getGlobalLight() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::Color4F const&

# ::stappler::xenolith::basic2d::SceneContent2d::draw(stappler::xenolith::FrameInfo&,stappler::xenolith::NodeFlags)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::FrameInfo&
* stappler::xenolith::NodeFlags


# ::stappler::xenolith::basic2d::SceneContent2d::pushNodeInternal(stappler::xenolith::basic2d::SceneLayout2d*,Function<void ()>&&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::basic2d::SceneLayout2d*
* Function<void ()>&&


# ::stappler::xenolith::basic2d::SceneContent2d::eraseLayout(stappler::xenolith::basic2d::SceneLayout2d*)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::basic2d::SceneLayout2d*


# ::stappler::xenolith::basic2d::SceneContent2d::eraseOverlay(stappler::xenolith::basic2d::SceneLayout2d*)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::basic2d::SceneLayout2d*


# ::stappler::xenolith::basic2d::SceneContent2d::replaceNodes()

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::basic2d::SceneContent2d::updateNodesVisibility()

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::basic2d::SceneContent2d::updateBackButtonStatus()

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::basic2d::SceneContent2d::removeLight(Vector<Rc<SceneLight>>::iterator)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* Vector<Rc<SceneLight>>::iterator

Возвращает:
* Vector<Rc<SceneLight>>::iterator

# ::stappler::xenolith::basic2d::SceneContent2d::_layouts

## BRIEF

## CONTENT

Доступ: protected

Тип: Vector<Rc<stappler::xenolith::basic2d::SceneLayout2d>>


# ::stappler::xenolith::basic2d::SceneContent2d::_overlays

## BRIEF

## CONTENT

Доступ: protected

Тип: Vector<Rc<stappler::xenolith::basic2d::SceneLayout2d>>


# ::stappler::xenolith::basic2d::SceneContent2d::_2dContext

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::xenolith::basic2d::FrameContext2d>


# ::stappler::xenolith::basic2d::SceneContent2d::_shadowDensity

## BRIEF

## CONTENT

Доступ: protected

Тип: float


# ::stappler::xenolith::basic2d::SceneContent2d::_lightsAmbientCount

## BRIEF

## CONTENT

Доступ: protected

Тип: uint32_t


# ::stappler::xenolith::basic2d::SceneContent2d::_lightsDirectCount

## BRIEF

## CONTENT

Доступ: protected

Тип: uint32_t


# ::stappler::xenolith::basic2d::SceneContent2d::_lights

## BRIEF

## CONTENT

Доступ: protected

Тип: Vector<Rc<stappler::xenolith::basic2d::SceneLight>>


# ::stappler::xenolith::basic2d::SceneContent2d::_lightsByTag

## BRIEF

## CONTENT

Доступ: protected

Тип: Map<uint64_t, stappler::xenolith::basic2d::SceneLight *>


# ::stappler::xenolith::basic2d::SceneContent2d::_lightsByName

## BRIEF

## CONTENT

Доступ: protected

Тип: Map<stappler::StringView, stappler::xenolith::basic2d::SceneLight *>


# ::stappler::xenolith::basic2d::SceneContent2d::_globalLight

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::Color4F
