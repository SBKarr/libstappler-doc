Title: XL2dRoundedProgress.h


# XENOLITH_RENDERER_GUI2D_XL2DROUNDEDPROGRESS_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::gui2d::RoundedProgress

## BRIEF

## CONTENT

Базовые классы:
* LayerRounded


# ::stappler::xenolith::gui2d::RoundedProgress::Layout

## BRIEF

## CONTENT

Доступ: public

Значения:
* Auto
* Vertical
* Horizontal


# ::stappler::xenolith::gui2d::RoundedProgress::~RoundedProgress()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::gui2d::RoundedProgress::init(stappler::xenolith::gui2d::RoundedProgress::Layout)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::gui2d::RoundedProgress::Layout

Возвращает:
* bool

# ::stappler::xenolith::gui2d::RoundedProgress::onContentSizeDirty()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::gui2d::RoundedProgress::setLayout(stappler::xenolith::gui2d::RoundedProgress::Layout)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::gui2d::RoundedProgress::Layout


# ::stappler::xenolith::gui2d::RoundedProgress::getLayout() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::gui2d::RoundedProgress::Layout

# ::stappler::xenolith::gui2d::RoundedProgress::setInverted(bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* bool


# ::stappler::xenolith::gui2d::RoundedProgress::isInverted() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::gui2d::RoundedProgress::setBorderRadius(float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float


# ::stappler::xenolith::gui2d::RoundedProgress::setProgress(float,float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float
* float


# ::stappler::xenolith::gui2d::RoundedProgress::getProgress() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* float

# ::stappler::xenolith::gui2d::RoundedProgress::setBarScale(float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float


# ::stappler::xenolith::gui2d::RoundedProgress::getBarScale() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* float

# ::stappler::xenolith::gui2d::RoundedProgress::setLineColor(stappler::xenolith::Color4F const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Color4F const&


# ::stappler::xenolith::gui2d::RoundedProgress::setLineOpacity(float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float


# ::stappler::xenolith::gui2d::RoundedProgress::setBarColor(stappler::xenolith::Color4F const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Color4F const&


# ::stappler::xenolith::gui2d::RoundedProgress::setBarOpacity(float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float


# ::stappler::xenolith::gui2d::RoundedProgress::_layout

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::gui2d::RoundedProgress::Layout


# ::stappler::xenolith::gui2d::RoundedProgress::_inverted

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::gui2d::RoundedProgress::_barScale

## BRIEF

## CONTENT

Доступ: protected

Тип: float


# ::stappler::xenolith::gui2d::RoundedProgress::_progress

## BRIEF

## CONTENT

Доступ: protected

Тип: float


# ::stappler::xenolith::gui2d::RoundedProgress::_bar

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::gui2d::LayerRounded*
