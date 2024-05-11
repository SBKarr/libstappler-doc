Title: XL2dRoundedProgress.h


# XENOLITH_RENDERER_BASIC2D_XL2DROUNDEDPROGRESS_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::basic2d::RoundedProgress

## BRIEF

## CONTENT

Базовые классы:
* LayerRounded


# ::stappler::xenolith::basic2d::RoundedProgress::Layout

## BRIEF

## CONTENT

Доступ: public

Значения:
* Auto
* Vertical
* Horizontal


# ::stappler::xenolith::basic2d::RoundedProgress::~RoundedProgress()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::basic2d::RoundedProgress::init(stappler::xenolith::basic2d::RoundedProgress::Layout)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::basic2d::RoundedProgress::Layout

Возвращает:
* bool

# ::stappler::xenolith::basic2d::RoundedProgress::onContentSizeDirty()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::basic2d::RoundedProgress::setLayout(stappler::xenolith::basic2d::RoundedProgress::Layout)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::basic2d::RoundedProgress::Layout


# ::stappler::xenolith::basic2d::RoundedProgress::getLayout() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::basic2d::RoundedProgress::Layout

# ::stappler::xenolith::basic2d::RoundedProgress::setInverted(bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* bool


# ::stappler::xenolith::basic2d::RoundedProgress::isInverted() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::basic2d::RoundedProgress::setBorderRadius(float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float


# ::stappler::xenolith::basic2d::RoundedProgress::setProgress(float,float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float
* float


# ::stappler::xenolith::basic2d::RoundedProgress::getProgress() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* float

# ::stappler::xenolith::basic2d::RoundedProgress::setBarScale(float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float


# ::stappler::xenolith::basic2d::RoundedProgress::getBarScale() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* float

# ::stappler::xenolith::basic2d::RoundedProgress::setLineColor(const stappler::geom::Color4F&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* const stappler::geom::Color4F&


# ::stappler::xenolith::basic2d::RoundedProgress::setLineOpacity(float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float


# ::stappler::xenolith::basic2d::RoundedProgress::setBarColor(const stappler::geom::Color4F&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* const stappler::geom::Color4F&


# ::stappler::xenolith::basic2d::RoundedProgress::setBarOpacity(float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float


# ::stappler::xenolith::basic2d::RoundedProgress::_layout

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::basic2d::RoundedProgress::Layout


# ::stappler::xenolith::basic2d::RoundedProgress::_inverted

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::basic2d::RoundedProgress::_barScale

## BRIEF

## CONTENT

Доступ: protected

Тип: float


# ::stappler::xenolith::basic2d::RoundedProgress::_progress

## BRIEF

## CONTENT

Доступ: protected

Тип: float


# ::stappler::xenolith::basic2d::RoundedProgress::_bar

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::basic2d::LayerRounded*
