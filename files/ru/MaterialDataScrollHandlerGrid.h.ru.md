Title: MaterialDataScrollHandlerGrid.h


# XENOLITH_RENDERER_MATERIAL2D_COMPONENTS_SCROLL_MATERIALDATASCROLLHANDLERGRID_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::material2d::DataScrollHandlerGrid

## BRIEF

## CONTENT

Базовые классы:
* DataScroll::Handler


# ::stappler::xenolith::material2d::DataScrollHandlerGrid::~DataScrollHandlerGrid()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::material2d::DataScrollHandlerGrid::init(stappler::xenolith::material2d::DataScroll*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::material2d::DataScroll*

Возвращает:
* bool

# ::stappler::xenolith::material2d::DataScrollHandlerGrid::init(stappler::xenolith::material2d::DataScroll*,stappler::xenolith::Padding const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::material2d::DataScroll*
* stappler::xenolith::Padding const&

Возвращает:
* bool

# ::stappler::xenolith::material2d::DataScrollHandlerGrid::run(stappler::xenolith::material2d::DataScroll::Handler::Request,stappler::xenolith::material2d::DataScroll::Handler::DataMap&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::material2d::DataScroll::Handler::Request
* stappler::xenolith::material2d::DataScroll::Handler::DataMap&&

Возвращает:
* DataScroll::ItemMap

# ::stappler::xenolith::material2d::DataScrollHandlerGrid::setCellMinWidth(float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float


# ::stappler::xenolith::material2d::DataScrollHandlerGrid::setCellAspectRatio(float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float


# ::stappler::xenolith::material2d::DataScrollHandlerGrid::setCellHeight(float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float


# ::stappler::xenolith::material2d::DataScrollHandlerGrid::setAutoPaddings(bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* bool


# ::stappler::xenolith::material2d::DataScrollHandlerGrid::isAutoPaddings() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::material2d::DataScrollHandlerGrid::onItem(stappler::mem_std::Value&&,DataSource::Id)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::mem_std::Value&&
* DataSource::Id

Возвращает:
* Rc<DataScroll::Item>

# ::stappler::xenolith::material2d::DataScrollHandlerGrid::_autoPaddings

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::material2d::DataScrollHandlerGrid::_fixedHeight

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::material2d::DataScrollHandlerGrid::_currentWidth

## BRIEF

## CONTENT

Доступ: protected

Тип: float


# ::stappler::xenolith::material2d::DataScrollHandlerGrid::_cellAspectRatio

## BRIEF

## CONTENT

Доступ: protected

Тип: float


# ::stappler::xenolith::material2d::DataScrollHandlerGrid::_cellMinWidth

## BRIEF

## CONTENT

Доступ: protected

Тип: float


# ::stappler::xenolith::material2d::DataScrollHandlerGrid::_cellHeight

## BRIEF

## CONTENT

Доступ: protected

Тип: float


# ::stappler::xenolith::material2d::DataScrollHandlerGrid::_widthPadding

## BRIEF

## CONTENT

Доступ: protected

Тип: float


# ::stappler::xenolith::material2d::DataScrollHandlerGrid::_padding

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::Padding


# ::stappler::xenolith::material2d::DataScrollHandlerGrid::_currentCellSize

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::Size2


# ::stappler::xenolith::material2d::DataScrollHandlerGrid::_currentCols

## BRIEF

## CONTENT

Доступ: protected

Тип: uint32_t
