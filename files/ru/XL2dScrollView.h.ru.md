Title: XL2dScrollView.h


# XENOLITH_RENDERER_GUI2D_XL2DSCROLLVIEW_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::gui2d::ScrollView

## BRIEF

## CONTENT

Базовые классы:
* ScrollViewBase


# ::stappler::xenolith::gui2d::ScrollView::TapCallback

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::gui2d::ScrollView::AnimationCallback

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::gui2d::ScrollView::Overscroll

## BRIEF

## CONTENT

Доступ: public

Базовые классы:
* VectorSprite


# ::stappler::xenolith::gui2d::ScrollView::Overscroll::Direction

## BRIEF

## CONTENT

Доступ: public

Значения:
* Top
* Left
* Bottom
* Right


# ::stappler::xenolith::gui2d::ScrollView::Overscroll::OverscrollEdge

## BRIEF

## CONTENT

Доступ: public

Тип: float const


# ::stappler::xenolith::gui2d::ScrollView::Overscroll::OverscrollEdgeThreshold

## BRIEF

## CONTENT

Доступ: public

Тип: float const


# ::stappler::xenolith::gui2d::ScrollView::Overscroll::OverscrollScale

## BRIEF

## CONTENT

Доступ: public

Тип: float const


# ::stappler::xenolith::gui2d::ScrollView::Overscroll::OverscrollMaxHeight

## BRIEF

## CONTENT

Доступ: public

Тип: float const


# ::stappler::xenolith::gui2d::ScrollView::Overscroll::~Overscroll()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::gui2d::ScrollView::Overscroll::init()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::gui2d::ScrollView::Overscroll::init(stappler::xenolith::gui2d::ScrollView::Overscroll::Direction)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::gui2d::ScrollView::Overscroll::Direction

Возвращает:
* bool

# ::stappler::xenolith::gui2d::ScrollView::Overscroll::onContentSizeDirty()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::gui2d::ScrollView::Overscroll::update(stappler::xenolith::UpdateTime const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::UpdateTime const&


# ::stappler::xenolith::gui2d::ScrollView::Overscroll::onEnter(stappler::xenolith::Scene*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Scene*


# ::stappler::xenolith::gui2d::ScrollView::Overscroll::onExit()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::gui2d::ScrollView::Overscroll::setDirection(stappler::xenolith::gui2d::ScrollView::Overscroll::Direction)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::gui2d::ScrollView::Overscroll::Direction


# ::stappler::xenolith::gui2d::ScrollView::Overscroll::getDirection() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::gui2d::ScrollView::Overscroll::Direction

# ::stappler::xenolith::gui2d::ScrollView::Overscroll::setProgress(float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float


# ::stappler::xenolith::gui2d::ScrollView::Overscroll::incrementProgress(float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float


# ::stappler::xenolith::gui2d::ScrollView::Overscroll::decrementProgress(float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float


# ::stappler::xenolith::gui2d::ScrollView::Overscroll::updateProgress(stappler::xenolith::basic2d::VectorImage*)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::basic2d::VectorImage*


# ::stappler::xenolith::gui2d::ScrollView::Overscroll::_progressDirty

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::gui2d::ScrollView::Overscroll::_progress

## BRIEF

## CONTENT

Доступ: protected

Тип: float


# ::stappler::xenolith::gui2d::ScrollView::Overscroll::_delayStart

## BRIEF

## CONTENT

Доступ: protected

Тип: uint64_t


# ::stappler::xenolith::gui2d::ScrollView::Overscroll::_direction

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::gui2d::ScrollView::Overscroll::Direction


# ::stappler::xenolith::gui2d::ScrollView::~ScrollView()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::gui2d::ScrollView::init(stappler::xenolith::gui2d::ScrollViewBase::Layout)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::gui2d::ScrollViewBase::Layout

Возвращает:
* bool

# ::stappler::xenolith::gui2d::ScrollView::onContentSizeDirty()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::gui2d::ScrollView::setOverscrollColor(stappler::xenolith::Color4F const&,bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Color4F const&
* bool


# ::stappler::xenolith::gui2d::ScrollView::getOverscrollColor() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::Color4F

# ::stappler::xenolith::gui2d::ScrollView::setOverscrollVisible(bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* bool


# ::stappler::xenolith::gui2d::ScrollView::isOverscrollVisible() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::gui2d::ScrollView::setIndicatorColor(stappler::xenolith::Color4B const&,bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Color4B const&
* bool


# ::stappler::xenolith::gui2d::ScrollView::getIndicatorColor() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::Color4F

# ::stappler::xenolith::gui2d::ScrollView::setIndicatorVisible(bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* bool


# ::stappler::xenolith::gui2d::ScrollView::isIndicatorVisible() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::gui2d::ScrollView::setPadding(stappler::xenolith::Padding const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Padding const&


# ::stappler::xenolith::gui2d::ScrollView::setOverscrollFrontOffset(float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float


# ::stappler::xenolith::gui2d::ScrollView::getOverscrollFrontOffset() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* float

# ::stappler::xenolith::gui2d::ScrollView::setOverscrollBackOffset(float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float


# ::stappler::xenolith::gui2d::ScrollView::getOverscrollBackOffset() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* float

# ::stappler::xenolith::gui2d::ScrollView::setIndicatorIgnorePadding(bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* bool


# ::stappler::xenolith::gui2d::ScrollView::isIndicatorIgnorePadding() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::gui2d::ScrollView::setTapCallback(stappler::xenolith::gui2d::ScrollView::TapCallback const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::gui2d::ScrollView::TapCallback const&


# ::stappler::xenolith::gui2d::ScrollView::getTapCallback() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* TapCallback&

# ::stappler::xenolith::gui2d::ScrollView::setAnimationCallback(stappler::xenolith::gui2d::ScrollView::AnimationCallback const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::gui2d::ScrollView::AnimationCallback const&


# ::stappler::xenolith::gui2d::ScrollView::getAnimationCallback() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* AnimationCallback&

# ::stappler::xenolith::gui2d::ScrollView::update(stappler::xenolith::UpdateTime const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::UpdateTime const&


# ::stappler::xenolith::gui2d::ScrollView::Adjust

## BRIEF

## CONTENT

Доступ: public

Значения:
* None
* Front
* Back


# ::stappler::xenolith::gui2d::ScrollView::runAdjustPosition(float,float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float
* float


# ::stappler::xenolith::gui2d::ScrollView::runAdjust(float,float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float
* float


# ::stappler::xenolith::gui2d::ScrollView::scheduleAdjust(stappler::xenolith::gui2d::ScrollView::Adjust,float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::gui2d::ScrollView::Adjust
* float


# ::stappler::xenolith::gui2d::ScrollView::save() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::mem_std::Value

# ::stappler::xenolith::gui2d::ScrollView::load(stappler::mem_std::Value const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::mem_std::Value const&


# ::stappler::xenolith::gui2d::ScrollView::resizeNode(stappler::xenolith::Node*,float,float,Function<void ()>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Node*
* float
* float
* Function<void ()>&&

Возвращает:
* Rc<stappler::xenolith::ActionProgress>

# ::stappler::xenolith::gui2d::ScrollView::resizeNode(ScrollController::Item*,float,float,Function<void ()>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* ScrollController::Item*
* float
* float
* Function<void ()>&&

Возвращает:
* Rc<stappler::xenolith::ActionProgress>

# ::stappler::xenolith::gui2d::ScrollView::removeNode(stappler::xenolith::Node*,float,Function<void ()>&&,bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Node*
* float
* Function<void ()>&&
* bool

Возвращает:
* Rc<stappler::xenolith::ActionProgress>

# ::stappler::xenolith::gui2d::ScrollView::removeNode(ScrollController::Item*,float,Function<void ()>&&,bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* ScrollController::Item*
* float
* Function<void ()>&&
* bool

Возвращает:
* Rc<stappler::xenolith::ActionProgress>

# ::stappler::xenolith::gui2d::ScrollView::doSetScrollPosition(float)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* float


# ::stappler::xenolith::gui2d::ScrollView::onOverscroll(float)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* float


# ::stappler::xenolith::gui2d::ScrollView::onScroll(float,bool)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* float
* bool


# ::stappler::xenolith::gui2d::ScrollView::onTap(int,stappler::xenolith::Vec2 const&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* int
* stappler::xenolith::Vec2 const&


# ::stappler::xenolith::gui2d::ScrollView::onAnimationFinished()

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::gui2d::ScrollView::updateIndicatorPosition()

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::gui2d::ScrollView::updateIndicatorPosition(stappler::xenolith::Node*,float,float,bool,float)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::Node*
* float
* float
* bool
* float


# ::stappler::xenolith::gui2d::ScrollView::getItemForNode(stappler::xenolith::Node*) const

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::Node*

Возвращает:
* ScrollController::Item*

# ::stappler::xenolith::gui2d::ScrollView::_overflowFront

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::gui2d::ScrollView::Overscroll*


# ::stappler::xenolith::gui2d::ScrollView::_overflowBack

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::gui2d::ScrollView::Overscroll*


# ::stappler::xenolith::gui2d::ScrollView::_indicator

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::gui2d::LayerRounded*


# ::stappler::xenolith::gui2d::ScrollView::_indicatorVisible

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::gui2d::ScrollView::_indicatorIgnorePadding

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::gui2d::ScrollView::_overscrollFrontOffset

## BRIEF

## CONTENT

Доступ: protected

Тип: float


# ::stappler::xenolith::gui2d::ScrollView::_overscrollBackOffset

## BRIEF

## CONTENT

Доступ: protected

Тип: float


# ::stappler::xenolith::gui2d::ScrollView::_tapCallback

## BRIEF

## CONTENT

Доступ: protected

Тип: TapCallback


# ::stappler::xenolith::gui2d::ScrollView::_animationCallback

## BRIEF

## CONTENT

Доступ: protected

Тип: AnimationCallback


# ::stappler::xenolith::gui2d::ScrollView::_adjust

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::gui2d::ScrollView::Adjust


# ::stappler::xenolith::gui2d::ScrollView::_adjustValue

## BRIEF

## CONTENT

Доступ: protected

Тип: float


# ::stappler::xenolith::gui2d::ScrollView::_indicatorOpacity

## BRIEF

## CONTENT

Доступ: protected

Тип: float
