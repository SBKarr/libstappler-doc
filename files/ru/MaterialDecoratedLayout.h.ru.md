Title: MaterialDecoratedLayout.h


# XENOLITH_RENDERER_MATERIAL2D_LAYOUT_MATERIALDECORATEDLAYOUT_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::material2d::ViewDecorationFlags

## BRIEF

## CONTENT

Значения:
* None
* Visible
* Tracked


# ::stappler::xenolith::material2d::operator|(stappler::xenolith::material2d::ViewDecorationFlags const&,stappler::xenolith::material2d::ViewDecorationFlags const&)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::material2d::ViewDecorationFlags const&
* stappler::xenolith::material2d::ViewDecorationFlags const&

Возвращает:
* stappler::xenolith::material2d::ViewDecorationFlags

# ::stappler::xenolith::material2d::operator&(stappler::xenolith::material2d::ViewDecorationFlags const&,stappler::xenolith::material2d::ViewDecorationFlags const&)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::material2d::ViewDecorationFlags const&
* stappler::xenolith::material2d::ViewDecorationFlags const&

Возвращает:
* stappler::xenolith::material2d::ViewDecorationFlags

# ::stappler::xenolith::material2d::operator^(stappler::xenolith::material2d::ViewDecorationFlags const&,stappler::xenolith::material2d::ViewDecorationFlags const&)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::material2d::ViewDecorationFlags const&
* stappler::xenolith::material2d::ViewDecorationFlags const&

Возвращает:
* stappler::xenolith::material2d::ViewDecorationFlags

# ::stappler::xenolith::material2d::operator|=(stappler::xenolith::material2d::ViewDecorationFlags&,stappler::xenolith::material2d::ViewDecorationFlags const&)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::material2d::ViewDecorationFlags&
* stappler::xenolith::material2d::ViewDecorationFlags const&

Возвращает:
* stappler::xenolith::material2d::ViewDecorationFlags&

# ::stappler::xenolith::material2d::operator&=(stappler::xenolith::material2d::ViewDecorationFlags&,stappler::xenolith::material2d::ViewDecorationFlags const&)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::material2d::ViewDecorationFlags&
* stappler::xenolith::material2d::ViewDecorationFlags const&

Возвращает:
* stappler::xenolith::material2d::ViewDecorationFlags&

# ::stappler::xenolith::material2d::operator^=(stappler::xenolith::material2d::ViewDecorationFlags&,stappler::xenolith::material2d::ViewDecorationFlags const&)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::material2d::ViewDecorationFlags&
* stappler::xenolith::material2d::ViewDecorationFlags const&

Возвращает:
* stappler::xenolith::material2d::ViewDecorationFlags&

# ::stappler::xenolith::material2d::operator==(stappler::xenolith::material2d::ViewDecorationFlags const&,std::underlying_type<ViewDecorationFlags>::type const&)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::material2d::ViewDecorationFlags const&
* std::underlying_type<ViewDecorationFlags>::type const&

Возвращает:
* bool

# ::stappler::xenolith::material2d::operator==(std::underlying_type<ViewDecorationFlags>::type const&,stappler::xenolith::material2d::ViewDecorationFlags const&)

## BRIEF

## CONTENT

Параметры:
* std::underlying_type<ViewDecorationFlags>::type const&
* stappler::xenolith::material2d::ViewDecorationFlags const&

Возвращает:
* bool

# ::stappler::xenolith::material2d::operator!=(stappler::xenolith::material2d::ViewDecorationFlags const&,std::underlying_type<ViewDecorationFlags>::type const&)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::material2d::ViewDecorationFlags const&
* std::underlying_type<ViewDecorationFlags>::type const&

Возвращает:
* bool

# ::stappler::xenolith::material2d::operator!=(std::underlying_type<ViewDecorationFlags>::type const&,stappler::xenolith::material2d::ViewDecorationFlags const&)

## BRIEF

## CONTENT

Параметры:
* std::underlying_type<ViewDecorationFlags>::type const&
* stappler::xenolith::material2d::ViewDecorationFlags const&

Возвращает:
* bool

# ::stappler::xenolith::material2d::operator~(stappler::xenolith::material2d::ViewDecorationFlags const&)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::material2d::ViewDecorationFlags const&

Возвращает:
* stappler::xenolith::material2d::ViewDecorationFlags

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


# ::stappler::xenolith::material2d::DecoratedLayout::visitDraw(stappler::xenolith::FrameInfo&,stappler::xenolith::NodeFlags)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::FrameInfo&
* stappler::xenolith::NodeFlags

Возвращает:
* bool

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

# ::stappler::xenolith::material2d::DecoratedLayout::setDecorationElevation(stappler::xenolith::material2d::Elevation)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::material2d::Elevation


# ::stappler::xenolith::material2d::DecoratedLayout::getDecorationElevation() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::material2d::Elevation

# ::stappler::xenolith::material2d::DecoratedLayout::setViewDecorationFlags(stappler::xenolith::material2d::ViewDecorationFlags)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::material2d::ViewDecorationFlags


# ::stappler::xenolith::material2d::DecoratedLayout::getViewDecorationFlags() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::material2d::ViewDecorationFlags

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

# ::stappler::xenolith::material2d::DecoratedLayout::getMaxDepthIndex() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* float

# ::stappler::xenolith::material2d::DecoratedLayout::updateStatusBar(stappler::xenolith::material2d::SurfaceStyleData const&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::material2d::SurfaceStyleData const&


# ::stappler::xenolith::material2d::DecoratedLayout::_decorationRoot

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::Node*


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


# ::stappler::xenolith::material2d::DecoratedLayout::_viewDecoration

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::material2d::ViewDecorationFlags
