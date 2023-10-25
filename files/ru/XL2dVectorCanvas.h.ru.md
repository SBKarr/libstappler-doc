Title: XL2dVectorCanvas.h


# XENOLITH_RENDERER_BASIC2D_XL2DVECTORCANVAS_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::basic2d::VectorPath

## BRIEF

## CONTENT


# ::stappler::xenolith::basic2d::VectorCanvas

## BRIEF

## CONTENT

Базовые классы:
* Ref


# ::stappler::xenolith::basic2d::VectorCanvas::getInstance(bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* bool

Возвращает:
* Rc<stappler::xenolith::basic2d::VectorCanvas>

# ::stappler::xenolith::basic2d::VectorCanvas::~VectorCanvas()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::basic2d::VectorCanvas::init(bool,float,stappler::xenolith::Color4F)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* bool
* float
* stappler::xenolith::Color4F

Возвращает:
* bool

# ::stappler::xenolith::basic2d::VectorCanvas::setColor(stappler::xenolith::Color4F)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Color4F


# ::stappler::xenolith::basic2d::VectorCanvas::getColor() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::Color4F

# ::stappler::xenolith::basic2d::VectorCanvas::setQuality(float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float


# ::stappler::xenolith::basic2d::VectorCanvas::getQuality() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* float

# ::stappler::xenolith::basic2d::VectorCanvas::draw(Rc<stappler::xenolith::basic2d::VectorImageData>&&,stappler::xenolith::Size2)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Rc<stappler::xenolith::basic2d::VectorImageData>&&
* stappler::xenolith::Size2

Возвращает:
* Rc<stappler::xenolith::basic2d::VectorCanvasResult>

# ::stappler::xenolith::basic2d::VectorCanvas::_data

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::basic2d::VectorCanvas::Data*
