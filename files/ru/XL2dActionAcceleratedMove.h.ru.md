Title: XL2dActionAcceleratedMove.h


# XENOLITH_RENDERER_BASIC2D_XL2DACTIONACCELERATEDMOVE_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::basic2d::ActionAcceleratedMove

## BRIEF

## CONTENT

Базовые классы:
* ActionInterval


# ::stappler::xenolith::basic2d::ActionAcceleratedMove::createBounce(float,stappler::geom::Vec2,stappler::geom::Vec2,stappler::geom::Vec2,float,Function<void (stappler::xenolith::Node *)>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float
* stappler::geom::Vec2
* stappler::geom::Vec2
* stappler::geom::Vec2
* float
* Function<void (stappler::xenolith::Node *)>&&

Возвращает:
* Rc<stappler::xenolith::ActionInterval>

# ::stappler::xenolith::basic2d::ActionAcceleratedMove::createBounce(float,stappler::geom::Vec2,stappler::geom::Vec2,float,float,Function<void (stappler::xenolith::Node *)>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float
* stappler::geom::Vec2
* stappler::geom::Vec2
* float
* float
* Function<void (stappler::xenolith::Node *)>&&

Возвращает:
* Rc<stappler::xenolith::ActionInterval>

# ::stappler::xenolith::basic2d::ActionAcceleratedMove::createFreeBounce(float,stappler::geom::Vec2,stappler::geom::Vec2,stappler::geom::Vec2,float,Function<void (stappler::xenolith::Node *)>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float
* stappler::geom::Vec2
* stappler::geom::Vec2
* stappler::geom::Vec2
* float
* Function<void (stappler::xenolith::Node *)>&&

Возвращает:
* Rc<stappler::xenolith::ActionInterval>

# ::stappler::xenolith::basic2d::ActionAcceleratedMove::createWithBounds(float,stappler::geom::Vec2,stappler::geom::Vec2,const stappler::geom::Rect&,Function<void (stappler::xenolith::Node *)>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float
* stappler::geom::Vec2
* stappler::geom::Vec2
* const stappler::geom::Rect&
* Function<void (stappler::xenolith::Node *)>&&

Возвращает:
* Rc<stappler::xenolith::ActionInterval>

# ::stappler::xenolith::basic2d::ActionAcceleratedMove::createDecceleration(stappler::geom::Vec2,stappler::geom::Vec2,float,float,Function<void (stappler::xenolith::Node *)>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::geom::Vec2
* stappler::geom::Vec2
* float
* float
* Function<void (stappler::xenolith::Node *)>&&

Возвращает:
* Rc<stappler::xenolith::basic2d::ActionAcceleratedMove>

# ::stappler::xenolith::basic2d::ActionAcceleratedMove::createDecceleration(stappler::geom::Vec2,stappler::geom::Vec2,float,Function<void (stappler::xenolith::Node *)>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::geom::Vec2
* stappler::geom::Vec2
* float
* Function<void (stappler::xenolith::Node *)>&&

Возвращает:
* Rc<stappler::xenolith::basic2d::ActionAcceleratedMove>

# ::stappler::xenolith::basic2d::ActionAcceleratedMove::createAccelerationTo(stappler::geom::Vec2,stappler::geom::Vec2,float,float,float,Function<void (stappler::xenolith::Node *)>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::geom::Vec2
* stappler::geom::Vec2
* float
* float
* float
* Function<void (stappler::xenolith::Node *)>&&

Возвращает:
* Rc<stappler::xenolith::basic2d::ActionAcceleratedMove>

# ::stappler::xenolith::basic2d::ActionAcceleratedMove::createAccelerationTo(stappler::geom::Vec2,stappler::geom::Vec2,float,float,Function<void (stappler::xenolith::Node *)>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::geom::Vec2
* stappler::geom::Vec2
* float
* float
* Function<void (stappler::xenolith::Node *)>&&

Возвращает:
* Rc<stappler::xenolith::basic2d::ActionAcceleratedMove>

# ::stappler::xenolith::basic2d::ActionAcceleratedMove::createWithDuration(float,stappler::geom::Vec2,stappler::geom::Vec2,float,float,Function<void (stappler::xenolith::Node *)>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float
* stappler::geom::Vec2
* stappler::geom::Vec2
* float
* float
* Function<void (stappler::xenolith::Node *)>&&

Возвращает:
* Rc<stappler::xenolith::basic2d::ActionAcceleratedMove>

# ::stappler::xenolith::basic2d::ActionAcceleratedMove::~ActionAcceleratedMove()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::basic2d::ActionAcceleratedMove::initDecceleration(stappler::geom::Vec2,stappler::geom::Vec2,float,float,Function<void (stappler::xenolith::Node *)>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::geom::Vec2
* stappler::geom::Vec2
* float
* float
* Function<void (stappler::xenolith::Node *)>&&

Возвращает:
* bool

# ::stappler::xenolith::basic2d::ActionAcceleratedMove::initDecceleration(stappler::geom::Vec2,stappler::geom::Vec2,float,Function<void (stappler::xenolith::Node *)>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::geom::Vec2
* stappler::geom::Vec2
* float
* Function<void (stappler::xenolith::Node *)>&&

Возвращает:
* bool

# ::stappler::xenolith::basic2d::ActionAcceleratedMove::initAccelerationTo(stappler::geom::Vec2,stappler::geom::Vec2,float,float,float,Function<void (stappler::xenolith::Node *)>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::geom::Vec2
* stappler::geom::Vec2
* float
* float
* float
* Function<void (stappler::xenolith::Node *)>&&

Возвращает:
* bool

# ::stappler::xenolith::basic2d::ActionAcceleratedMove::initAccelerationTo(stappler::geom::Vec2,stappler::geom::Vec2,float,float,Function<void (stappler::xenolith::Node *)>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::geom::Vec2
* stappler::geom::Vec2
* float
* float
* Function<void (stappler::xenolith::Node *)>&&

Возвращает:
* bool

# ::stappler::xenolith::basic2d::ActionAcceleratedMove::initWithDuration(float,stappler::geom::Vec2,stappler::geom::Vec2,float,float,Function<void (stappler::xenolith::Node *)>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float
* stappler::geom::Vec2
* stappler::geom::Vec2
* float
* float
* Function<void (stappler::xenolith::Node *)>&&

Возвращает:
* bool

# ::stappler::xenolith::basic2d::ActionAcceleratedMove::getDuration() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* float

# ::stappler::xenolith::basic2d::ActionAcceleratedMove::getPosition(float) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float

Возвращает:
* stappler::geom::Vec2

# ::stappler::xenolith::basic2d::ActionAcceleratedMove::getStartPosition() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* const stappler::geom::Vec2&

# ::stappler::xenolith::basic2d::ActionAcceleratedMove::getEndPosition() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* const stappler::geom::Vec2&

# ::stappler::xenolith::basic2d::ActionAcceleratedMove::getNormal() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* const stappler::geom::Vec2&

# ::stappler::xenolith::basic2d::ActionAcceleratedMove::getStartVelocity() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* float

# ::stappler::xenolith::basic2d::ActionAcceleratedMove::getEndVelocity() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* float

# ::stappler::xenolith::basic2d::ActionAcceleratedMove::getCurrentVelocity() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* float

# ::stappler::xenolith::basic2d::ActionAcceleratedMove::startWithTarget(stappler::xenolith::Node*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Node*


# ::stappler::xenolith::basic2d::ActionAcceleratedMove::update(float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float


# ::stappler::xenolith::basic2d::ActionAcceleratedMove::setCallback(Function<void (stappler::xenolith::Node *)>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Function<void (stappler::xenolith::Node *)>&&


# ::stappler::xenolith::basic2d::ActionAcceleratedMove::_accDuration

## BRIEF

## CONTENT

Доступ: protected

Тип: float


# ::stappler::xenolith::basic2d::ActionAcceleratedMove::_acceleration

## BRIEF

## CONTENT

Доступ: protected

Тип: float


# ::stappler::xenolith::basic2d::ActionAcceleratedMove::_startVelocity

## BRIEF

## CONTENT

Доступ: protected

Тип: float


# ::stappler::xenolith::basic2d::ActionAcceleratedMove::_endVelocity

## BRIEF

## CONTENT

Доступ: protected

Тип: float


# ::stappler::xenolith::basic2d::ActionAcceleratedMove::_normalPoint

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::geom::Vec2


# ::stappler::xenolith::basic2d::ActionAcceleratedMove::_startPoint

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::geom::Vec2


# ::stappler::xenolith::basic2d::ActionAcceleratedMove::_endPoint

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::geom::Vec2


# ::stappler::xenolith::basic2d::ActionAcceleratedMove::computeEndPoint()

## BRIEF

## CONTENT

Доступ: protected

Возвращает:
* stappler::geom::Vec2

# ::stappler::xenolith::basic2d::ActionAcceleratedMove::computeNormalPoint()

## BRIEF

## CONTENT

Доступ: protected

Возвращает:
* stappler::geom::Vec2

# ::stappler::xenolith::basic2d::ActionAcceleratedMove::computeEndVelocity()

## BRIEF

## CONTENT

Доступ: protected

Возвращает:
* float

# ::stappler::xenolith::basic2d::ActionAcceleratedMove::_callback

## BRIEF

## CONTENT

Доступ: protected

Тип: Function<void (stappler::xenolith::Node *)>
