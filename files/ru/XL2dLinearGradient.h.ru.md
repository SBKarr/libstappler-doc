Title: XL2dLinearGradient.h


# XENOLITH_RENDERER_BASIC2D_XL2DLINEARGRADIENT_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::basic2d::GradientStep

## BRIEF

## CONTENT


# ::stappler::xenolith::basic2d::GradientStep::value

## BRIEF

## CONTENT

Тип: float


# ::stappler::xenolith::basic2d::GradientStep::factor

## BRIEF

## CONTENT

Тип: float


# ::stappler::xenolith::basic2d::GradientStep::color

## BRIEF

## CONTENT

Тип: stappler::geom::Color4F


# ::stappler::xenolith::basic2d::GradientStep::GradientStep()

## BRIEF

## CONTENT


# ::stappler::xenolith::basic2d::GradientStep::GradientStep(float,stappler::geom::Color4F)

## BRIEF

## CONTENT

Параметры:
* float
* stappler::geom::Color4F


# ::stappler::xenolith::basic2d::GradientStep::GradientStep(float,float,stappler::geom::Color4F)

## BRIEF

## CONTENT

Параметры:
* float
* float
* stappler::geom::Color4F


# ::stappler::xenolith::basic2d::GradientStep::GradientStep(stappler::xenolith::basic2d::GradientStep const&)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::basic2d::GradientStep const&


# ::stappler::xenolith::basic2d::GradientStep::operator=(stappler::xenolith::basic2d::GradientStep const&)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::basic2d::GradientStep const&

Возвращает:
* stappler::xenolith::basic2d::GradientStep&

# ::stappler::xenolith::basic2d::LinearGradientData

## BRIEF

## CONTENT

Базовые классы:
* Ref


# ::stappler::xenolith::basic2d::LinearGradientData::~LinearGradientData()

## BRIEF

## CONTENT


# ::stappler::xenolith::basic2d::LinearGradientData::start

## BRIEF

## CONTENT

Тип: stappler::geom::Vec2


# ::stappler::xenolith::basic2d::LinearGradientData::end

## BRIEF

## CONTENT

Тип: stappler::geom::Vec2


# ::stappler::xenolith::basic2d::LinearGradientData::steps

## BRIEF

## CONTENT

Тип: Vector<stappler::xenolith::basic2d::GradientStep>


# ::stappler::xenolith::basic2d::LinearGradientData::LinearGradientData()

## BRIEF

## CONTENT


# ::stappler::xenolith::basic2d::LinearGradientData::LinearGradientData(stappler::xenolith::basic2d::LinearGradientData const&)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::basic2d::LinearGradientData const&


# ::stappler::xenolith::basic2d::LinearGradientData::LinearGradientData(stappler::xenolith::basic2d::LinearGradientData&&)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::basic2d::LinearGradientData&&


# ::stappler::xenolith::basic2d::LinearGradient

## BRIEF

## CONTENT

Базовые классы:
* Ref


# ::stappler::xenolith::basic2d::LinearGradient::~LinearGradient()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::basic2d::LinearGradient::init(const stappler::geom::Vec2&,const stappler::geom::Vec2&,Vector<stappler::xenolith::basic2d::GradientStep>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* const stappler::geom::Vec2&
* const stappler::geom::Vec2&
* Vector<stappler::xenolith::basic2d::GradientStep>&&

Возвращает:
* bool

# ::stappler::xenolith::basic2d::LinearGradient::init(const stappler::geom::Vec2&,float,float,Vector<stappler::xenolith::basic2d::GradientStep>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* const stappler::geom::Vec2&
* float
* float
* Vector<stappler::xenolith::basic2d::GradientStep>&&

Возвращает:
* bool

# ::stappler::xenolith::basic2d::LinearGradient::updateWithData(const stappler::geom::Vec2&,const stappler::geom::Vec2&,Vector<stappler::xenolith::basic2d::GradientStep>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* const stappler::geom::Vec2&
* const stappler::geom::Vec2&
* Vector<stappler::xenolith::basic2d::GradientStep>&&

Возвращает:
* bool

# ::stappler::xenolith::basic2d::LinearGradient::updateWithData(const stappler::geom::Vec2&,float,float,Vector<stappler::xenolith::basic2d::GradientStep>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* const stappler::geom::Vec2&
* float
* float
* Vector<stappler::xenolith::basic2d::GradientStep>&&

Возвращает:
* bool

# ::stappler::xenolith::basic2d::LinearGradient::getStart() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* const stappler::geom::Vec2&

# ::stappler::xenolith::basic2d::LinearGradient::getEnd() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* const stappler::geom::Vec2&

# ::stappler::xenolith::basic2d::LinearGradient::getSteps() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Vector<stappler::xenolith::basic2d::GradientStep> const&

# ::stappler::xenolith::basic2d::LinearGradient::pop()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Rc<stappler::xenolith::basic2d::LinearGradientData>

# ::stappler::xenolith::basic2d::LinearGradient::dup()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Rc<stappler::xenolith::basic2d::LinearGradientData>

# ::stappler::xenolith::basic2d::LinearGradient::copy()

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::basic2d::LinearGradient::_copyOnWrite

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::basic2d::LinearGradient::_data

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::xenolith::basic2d::LinearGradientData>
