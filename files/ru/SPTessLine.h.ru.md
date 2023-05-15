Title: SPTessLine.h


# MODULES_TESS_SPTESSLINE_H_

## BRIEF

## CONTENT


# ::stappler::geom::LineCup

## BRIEF

## CONTENT

Значения:
* Butt
* Round
* Square


# ::stappler::geom::LineJoin

## BRIEF

## CONTENT

Значения:
* Miter
* Round
* Bevel


# ::stappler::geom::DrawStyle

## BRIEF

## CONTENT

Значения:
* None
* Fill
* Stroke
* FillAndStroke


# ::stappler::geom::operator|(stappler::geom::DrawStyle const&,stappler::geom::DrawStyle const&)

## BRIEF

## CONTENT

Параметры:
* stappler::geom::DrawStyle const&
* stappler::geom::DrawStyle const&

Возвращает:
* stappler::geom::DrawStyle

# ::stappler::geom::operator&(stappler::geom::DrawStyle const&,stappler::geom::DrawStyle const&)

## BRIEF

## CONTENT

Параметры:
* stappler::geom::DrawStyle const&
* stappler::geom::DrawStyle const&

Возвращает:
* stappler::geom::DrawStyle

# ::stappler::geom::operator^(stappler::geom::DrawStyle const&,stappler::geom::DrawStyle const&)

## BRIEF

## CONTENT

Параметры:
* stappler::geom::DrawStyle const&
* stappler::geom::DrawStyle const&

Возвращает:
* stappler::geom::DrawStyle

# ::stappler::geom::operator|=(stappler::geom::DrawStyle&,stappler::geom::DrawStyle const&)

## BRIEF

## CONTENT

Параметры:
* stappler::geom::DrawStyle&
* stappler::geom::DrawStyle const&

Возвращает:
* stappler::geom::DrawStyle&

# ::stappler::geom::operator&=(stappler::geom::DrawStyle&,stappler::geom::DrawStyle const&)

## BRIEF

## CONTENT

Параметры:
* stappler::geom::DrawStyle&
* stappler::geom::DrawStyle const&

Возвращает:
* stappler::geom::DrawStyle&

# ::stappler::geom::operator^=(stappler::geom::DrawStyle&,stappler::geom::DrawStyle const&)

## BRIEF

## CONTENT

Параметры:
* stappler::geom::DrawStyle&
* stappler::geom::DrawStyle const&

Возвращает:
* stappler::geom::DrawStyle&

# ::stappler::geom::operator==(stappler::geom::DrawStyle const&,std::underlying_type<DrawStyle>::type const&)

## BRIEF

## CONTENT

Параметры:
* stappler::geom::DrawStyle const&
* std::underlying_type<DrawStyle>::type const&

Возвращает:
* bool

# ::stappler::geom::operator==(std::underlying_type<DrawStyle>::type const&,stappler::geom::DrawStyle const&)

## BRIEF

## CONTENT

Параметры:
* std::underlying_type<DrawStyle>::type const&
* stappler::geom::DrawStyle const&

Возвращает:
* bool

# ::stappler::geom::operator!=(stappler::geom::DrawStyle const&,std::underlying_type<DrawStyle>::type const&)

## BRIEF

## CONTENT

Параметры:
* stappler::geom::DrawStyle const&
* std::underlying_type<DrawStyle>::type const&

Возвращает:
* bool

# ::stappler::geom::operator!=(std::underlying_type<DrawStyle>::type const&,stappler::geom::DrawStyle const&)

## BRIEF

## CONTENT

Параметры:
* std::underlying_type<DrawStyle>::type const&
* stappler::geom::DrawStyle const&

Возвращает:
* bool

# ::stappler::geom::operator~(stappler::geom::DrawStyle const&)

## BRIEF

## CONTENT

Параметры:
* stappler::geom::DrawStyle const&

Возвращает:
* stappler::geom::DrawStyle

# ::stappler::geom::LineDrawer

## BRIEF

## CONTENT


# ::stappler::geom::LineDrawer::LineDrawer(float,Rc<stappler::geom::Tesselator>&&,Rc<stappler::geom::Tesselator>&&,float,stappler::geom::LineJoin,stappler::geom::LineCup)

## BRIEF

## CONTENT

Параметры:
* float
* Rc<stappler::geom::Tesselator>&&
* Rc<stappler::geom::Tesselator>&&
* float
* stappler::geom::LineJoin
* stappler::geom::LineCup


# ::stappler::geom::LineDrawer::drawBegin(float,float)

## BRIEF

## CONTENT

Параметры:
* float
* float


# ::stappler::geom::LineDrawer::drawLine(float,float)

## BRIEF

## CONTENT

Параметры:
* float
* float


# ::stappler::geom::LineDrawer::drawQuadBezier(float,float,float,float)

## BRIEF

## CONTENT

Параметры:
* float
* float
* float
* float


# ::stappler::geom::LineDrawer::drawCubicBezier(float,float,float,float,float,float)

## BRIEF

## CONTENT

Параметры:
* float
* float
* float
* float
* float
* float


# ::stappler::geom::LineDrawer::drawArc(float,float,float,bool,bool,float,float)

## BRIEF

## CONTENT

Параметры:
* float
* float
* float
* bool
* bool
* float
* float


# ::stappler::geom::LineDrawer::drawClose(bool)

## BRIEF

## CONTENT

Параметры:
* bool


# ::stappler::geom::LineDrawer::push(float,float)

## BRIEF

## CONTENT

Параметры:
* float
* float


# ::stappler::geom::LineDrawer::pushStroke(stappler::geom::Vec2 const&,stappler::geom::Vec2 const&,stappler::geom::Vec2 const&)

## BRIEF

## CONTENT

Параметры:
* stappler::geom::Vec2 const&
* stappler::geom::Vec2 const&
* stappler::geom::Vec2 const&


# ::stappler::geom::LineDrawer::BufferNode

## BRIEF

## CONTENT


# ::stappler::geom::LineDrawer::BufferNode::next

## BRIEF

## CONTENT

Тип: stappler::geom::LineDrawer::BufferNode*


# ::stappler::geom::LineDrawer::BufferNode::prev

## BRIEF

## CONTENT

Тип: stappler::geom::LineDrawer::BufferNode*


# ::stappler::geom::LineDrawer::BufferNode::point

## BRIEF

## CONTENT

Тип: stappler::geom::Vec2


# ::stappler::geom::LineDrawer::style

## BRIEF

## CONTENT

Тип: stappler::geom::DrawStyle


# ::stappler::geom::LineDrawer::lineJoin

## BRIEF

## CONTENT

Тип: stappler::geom::LineJoin


# ::stappler::geom::LineDrawer::lineCup

## BRIEF

## CONTENT

Тип: stappler::geom::LineCup


# ::stappler::geom::LineDrawer::distanceError

## BRIEF

## CONTENT

Тип: float


# ::stappler::geom::LineDrawer::angularError

## BRIEF

## CONTENT

Тип: float


# ::stappler::geom::LineDrawer::strokeWidth

## BRIEF

## CONTENT

Тип: float


# ::stappler::geom::LineDrawer::count

## BRIEF

## CONTENT

Тип: size_t


# ::stappler::geom::LineDrawer::origin

## BRIEF

## CONTENT

Тип: stappler::geom::Vec2[2]


# ::stappler::geom::LineDrawer::buffer

## BRIEF

## CONTENT

Тип: stappler::geom::LineDrawer::BufferNode[3]


# ::stappler::geom::LineDrawer::target

## BRIEF

## CONTENT

Тип: stappler::geom::LineDrawer::BufferNode*


# ::stappler::geom::LineDrawer::fill

## BRIEF

## CONTENT

Тип: Rc<stappler::geom::Tesselator>


# ::stappler::geom::LineDrawer::fillCursor

## BRIEF

## CONTENT

Тип: Tesselator::Cursor


# ::stappler::geom::LineDrawer::stroke

## BRIEF

## CONTENT

Тип: Rc<stappler::geom::Tesselator>


# ::stappler::geom::LineDrawer::strokeCursor

## BRIEF

## CONTENT

Тип: Tesselator::Cursor


# ::stappler::geom::LineDrawer::_miterLimit

## BRIEF

## CONTENT

Тип: float
