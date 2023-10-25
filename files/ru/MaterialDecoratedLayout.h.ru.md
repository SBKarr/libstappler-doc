Title: MaterialDecoratedLayout.h


# XENOLITH_RENDERER_MATERIAL2D_LAYOUT_MATERIALDECORATEDLAYOUT_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::material2d::DecoratedLayout

## BRIEF

## CONTENT

Базовые классы:
* SceneLayout2d


# ::stappler::xenolith::material2d::DecoratedLayout::~DecoratedLayout()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::material2d::DecoratedLayout::init(stappler::xenolith::material2d::ColorRole)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::material2d::ColorRole

Возвращает:
* bool

# ::stappler::xenolith::material2d::DecoratedLayout::onContentSizeDirty()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::material2d::DecoratedLayout::setDecorationColorRole(stappler::xenolith::material2d::ColorRole)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::material2d::ColorRole


# ::stappler::xenolith::material2d::DecoratedLayout::getDecorationColorRole() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::material2d::ColorRole

# ::stappler::xenolith::material2d::DecoratedLayout::setViewDecorationTracked(bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* bool


# ::stappler::xenolith::material2d::DecoratedLayout::isViewDecorationTracked() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::material2d::DecoratedLayout::onForeground(stappler::xenolith::basic2d::SceneContent2d*,stappler::xenolith::basic2d::SceneLayout2d*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::basic2d::SceneContent2d*
* stappler::xenolith::basic2d::SceneLayout2d*


# ::stappler::xenolith::material2d::DecoratedLayout::getBackground() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::material2d::LayerSurface*

# ::stappler::xenolith::material2d::DecoratedLayout::updateStatusBar(stappler::xenolith::material2d::SurfaceStyleData const&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::material2d::SurfaceStyleData const&


# ::stappler::xenolith::material2d::DecoratedLayout::_decorationLeft

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::material2d::LayerSurface*


# ::stappler::xenolith::material2d::DecoratedLayout::_decorationRight

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::material2d::LayerSurface*


# ::stappler::xenolith::material2d::DecoratedLayout::_decorationTop

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::material2d::LayerSurface*


# ::stappler::xenolith::material2d::DecoratedLayout::_decorationBottom

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::material2d::LayerSurface*


# ::stappler::xenolith::material2d::DecoratedLayout::_background

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::material2d::LayerSurface*


# ::stappler::xenolith::material2d::DecoratedLayout::_viewDecorationTracked

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::material2d::DecoratedLayout::_decorationStyleTracked

## BRIEF

## CONTENT

Доступ: protected

Тип: bool
