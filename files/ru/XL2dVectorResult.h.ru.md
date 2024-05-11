Title: XL2dVectorResult.h


# XENOLITH_RENDERER_BASIC2D_XL2DVECTORRESULT_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::basic2d::VectorImageData

## BRIEF

## CONTENT


# ::stappler::xenolith::basic2d::VectorImage

## BRIEF

## CONTENT


# ::stappler::xenolith::basic2d::VectorPathRef

## BRIEF

## CONTENT


# ::stappler::xenolith::basic2d::PathWriter

## BRIEF

## CONTENT


# ::stappler::xenolith::basic2d::VectorCanvasResult

## BRIEF

## CONTENT

Базовые классы:
* Ref


# ::stappler::xenolith::basic2d::VectorCanvasResult::data

## BRIEF

## CONTENT

Тип: Vector<stappler::xenolith::basic2d::TransformVertexData>


# ::stappler::xenolith::basic2d::VectorCanvasResult::mut

## BRIEF

## CONTENT

Тип: Vector<stappler::xenolith::basic2d::TransformVertexData>


# ::stappler::xenolith::basic2d::VectorCanvasResult::targetColor

## BRIEF

## CONTENT

Тип: stappler::geom::Color4F


# ::stappler::xenolith::basic2d::VectorCanvasResult::targetSize

## BRIEF

## CONTENT

Тип: stappler::geom::Size2


# ::stappler::xenolith::basic2d::VectorCanvasResult::targetTransform

## BRIEF

## CONTENT

Тип: stappler::geom::Mat4


# ::stappler::xenolith::basic2d::VectorCanvasResult::updateColor(const stappler::geom::Color4F&)

## BRIEF

## CONTENT

Параметры:
* const stappler::geom::Color4F&


# ::stappler::xenolith::basic2d::VectorCanvasDeferredResult

## BRIEF

## CONTENT

Базовые классы:
* DeferredVertexResult


# ::stappler::xenolith::basic2d::VectorCanvasDeferredResult::~VectorCanvasDeferredResult()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::basic2d::VectorCanvasDeferredResult::init(std::future<Rc<VectorCanvasResult>>&&,bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* std::future<Rc<VectorCanvasResult>>&&
* bool

Возвращает:
* bool

# ::stappler::xenolith::basic2d::VectorCanvasDeferredResult::getData()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* SpanView<stappler::xenolith::basic2d::TransformVertexData>

# ::stappler::xenolith::basic2d::VectorCanvasDeferredResult::handleReady(Rc<stappler::xenolith::basic2d::VectorCanvasResult>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Rc<stappler::xenolith::basic2d::VectorCanvasResult>&&


# ::stappler::xenolith::basic2d::VectorCanvasDeferredResult::updateColor(const stappler::geom::Color4F&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* const stappler::geom::Color4F&


# ::stappler::xenolith::basic2d::VectorCanvasDeferredResult::getResult() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Rc<stappler::xenolith::basic2d::VectorCanvasResult>

# ::stappler::xenolith::basic2d::VectorCanvasDeferredResult::_mutex

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::mem_std::Mutex


# ::stappler::xenolith::basic2d::VectorCanvasDeferredResult::_result

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::xenolith::basic2d::VectorCanvasResult>


# ::stappler::xenolith::basic2d::VectorCanvasDeferredResult::_future

## BRIEF

## CONTENT

Доступ: protected

Тип: std::future<Rc<VectorCanvasResult>>*
