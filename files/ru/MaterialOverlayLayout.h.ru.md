Title: MaterialOverlayLayout.h


# XENOLITH_RENDERER_MATERIAL2D_LAYOUT_MATERIALOVERLAYLAYOUT_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::material2d::OverlayLayout

## BRIEF

## CONTENT

Базовые классы:
* SceneLayout2d


# ::stappler::xenolith::material2d::OverlayLayout::Binding

## BRIEF

## CONTENT

Доступ: public

Значения:
* Relative
* OriginLeft
* OriginRight
* Anchor


# ::stappler::xenolith::material2d::OverlayLayout::~OverlayLayout()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::material2d::OverlayLayout::init(const stappler::geom::Vec2&,stappler::xenolith::material2d::OverlayLayout::Binding,stappler::xenolith::material2d::Surface*,stappler::geom::Size2)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* const stappler::geom::Vec2&
* stappler::xenolith::material2d::OverlayLayout::Binding
* stappler::xenolith::material2d::Surface*
* stappler::geom::Size2

Возвращает:
* bool

# ::stappler::xenolith::material2d::OverlayLayout::onContentSizeDirty()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::material2d::OverlayLayout::onPushTransitionEnded(stappler::xenolith::basic2d::SceneContent2d*,bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::basic2d::SceneContent2d*
* bool


# ::stappler::xenolith::material2d::OverlayLayout::onPopTransitionBegan(stappler::xenolith::basic2d::SceneContent2d*,bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::basic2d::SceneContent2d*
* bool


# ::stappler::xenolith::material2d::OverlayLayout::makeExitTransition(stappler::xenolith::basic2d::SceneContent2d*) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::basic2d::SceneContent2d*

Возвращает:
* Rc<stappler::xenolith::basic2d::SceneLayout2d::Transition>

# ::stappler::xenolith::material2d::OverlayLayout::setReadyCallback(Function<void (bool)>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Function<void (bool)>&&


# ::stappler::xenolith::material2d::OverlayLayout::setCloseCallback(Function<void ()>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Function<void ()>&&


# ::stappler::xenolith::material2d::OverlayLayout::emplaceNode(const stappler::geom::Vec2&,stappler::xenolith::material2d::OverlayLayout::Binding)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* const stappler::geom::Vec2&
* stappler::xenolith::material2d::OverlayLayout::Binding


# ::stappler::xenolith::material2d::OverlayLayout::_surface

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::material2d::Surface*


# ::stappler::xenolith::material2d::OverlayLayout::_globalOrigin

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::geom::Vec2


# ::stappler::xenolith::material2d::OverlayLayout::_fullSize

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::geom::Size2


# ::stappler::xenolith::material2d::OverlayLayout::_initSize

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::geom::Size2


# ::stappler::xenolith::material2d::OverlayLayout::_binding

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::material2d::OverlayLayout::Binding


# ::stappler::xenolith::material2d::OverlayLayout::_readyCallback

## BRIEF

## CONTENT

Доступ: protected

Тип: Function<void (bool)>


# ::stappler::xenolith::material2d::OverlayLayout::_closeCallback

## BRIEF

## CONTENT

Доступ: protected

Тип: Function<void ()>
