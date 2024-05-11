Title: MaterialMultiViewLayout.h


# XENOLITH_RENDERER_MATERIAL2D_LAYOUT_MATERIALMULTIVIEWLAYOUT_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::material2d::MultiViewLayout

## BRIEF

## CONTENT

Базовые классы:
* FlexibleLayout


# ::stappler::xenolith::material2d::MultiViewLayout::Generator

## BRIEF

## CONTENT

Доступ: public

Базовые классы:
* Component


# ::stappler::xenolith::material2d::MultiViewLayout::Generator::IndexViewCallback

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::material2d::MultiViewLayout::Generator::SequenceViewCallback

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::material2d::MultiViewLayout::Generator::ViewCallback

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::material2d::MultiViewLayout::Generator::ProgressCallback

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::material2d::MultiViewLayout::Generator::~Generator()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::material2d::MultiViewLayout::Generator::init()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::material2d::MultiViewLayout::Generator::init(size_t,stappler::xenolith::material2d::MultiViewLayout::Generator::IndexViewCallback const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* size_t
* stappler::xenolith::material2d::MultiViewLayout::Generator::IndexViewCallback const&

Возвращает:
* bool

# ::stappler::xenolith::material2d::MultiViewLayout::Generator::init(stappler::xenolith::material2d::MultiViewLayout::Generator::SequenceViewCallback const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::material2d::MultiViewLayout::Generator::SequenceViewCallback const&

Возвращает:
* bool

# ::stappler::xenolith::material2d::MultiViewLayout::Generator::isViewLocked(stappler::xenolith::basic2d::ScrollView*,int64_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::basic2d::ScrollView*
* int64_t

Возвращает:
* bool

# ::stappler::xenolith::material2d::MultiViewLayout::Generator::makeIndexView(int64_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* int64_t

Возвращает:
* Rc<stappler::xenolith::basic2d::ScrollView>

# ::stappler::xenolith::material2d::MultiViewLayout::Generator::makeNextView(stappler::xenolith::basic2d::ScrollView*,int64_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::basic2d::ScrollView*
* int64_t

Возвращает:
* Rc<stappler::xenolith::basic2d::ScrollView>

# ::stappler::xenolith::material2d::MultiViewLayout::Generator::makePrevView(stappler::xenolith::basic2d::ScrollView*,int64_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::basic2d::ScrollView*
* int64_t

Возвращает:
* Rc<stappler::xenolith::basic2d::ScrollView>

# ::stappler::xenolith::material2d::MultiViewLayout::Generator::isInfinite() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::material2d::MultiViewLayout::Generator::getViewCount() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* int64_t

# ::stappler::xenolith::material2d::MultiViewLayout::Generator::setViewSelectedCallback(stappler::xenolith::material2d::MultiViewLayout::Generator::ViewCallback const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::material2d::MultiViewLayout::Generator::ViewCallback const&


# ::stappler::xenolith::material2d::MultiViewLayout::Generator::setViewCreatedCallback(stappler::xenolith::material2d::MultiViewLayout::Generator::ViewCallback const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::material2d::MultiViewLayout::Generator::ViewCallback const&


# ::stappler::xenolith::material2d::MultiViewLayout::Generator::setApplyViewCallback(stappler::xenolith::material2d::MultiViewLayout::Generator::ViewCallback const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::material2d::MultiViewLayout::Generator::ViewCallback const&


# ::stappler::xenolith::material2d::MultiViewLayout::Generator::setApplyProgressCallback(stappler::xenolith::material2d::MultiViewLayout::Generator::ProgressCallback const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::material2d::MultiViewLayout::Generator::ProgressCallback const&


# ::stappler::xenolith::material2d::MultiViewLayout::Generator::onViewSelected(stappler::xenolith::basic2d::ScrollView*,int64_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::basic2d::ScrollView*
* int64_t


# ::stappler::xenolith::material2d::MultiViewLayout::Generator::onViewCreated(stappler::xenolith::basic2d::ScrollView*,int64_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::basic2d::ScrollView*
* int64_t


# ::stappler::xenolith::material2d::MultiViewLayout::Generator::onApplyView(stappler::xenolith::basic2d::ScrollView*,int64_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::basic2d::ScrollView*
* int64_t


# ::stappler::xenolith::material2d::MultiViewLayout::Generator::onApplyProgress(stappler::xenolith::basic2d::ScrollView*,stappler::xenolith::basic2d::ScrollView*,float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::basic2d::ScrollView*
* stappler::xenolith::basic2d::ScrollView*
* float


# ::stappler::xenolith::material2d::MultiViewLayout::Generator::getLayout()

## BRIEF

## CONTENT

Доступ: protected

Возвращает:
* stappler::xenolith::material2d::MultiViewLayout*

# ::stappler::xenolith::material2d::MultiViewLayout::Generator::_viewCount

## BRIEF

## CONTENT

Доступ: protected

Тип: size_t


# ::stappler::xenolith::material2d::MultiViewLayout::Generator::_makeViewByIndex

## BRIEF

## CONTENT

Доступ: protected

Тип: IndexViewCallback


# ::stappler::xenolith::material2d::MultiViewLayout::Generator::_makeViewSeq

## BRIEF

## CONTENT

Доступ: protected

Тип: SequenceViewCallback


# ::stappler::xenolith::material2d::MultiViewLayout::Generator::_viewSelectedCallback

## BRIEF

## CONTENT

Доступ: protected

Тип: ViewCallback


# ::stappler::xenolith::material2d::MultiViewLayout::Generator::_viewCreatedCallback

## BRIEF

## CONTENT

Доступ: protected

Тип: ViewCallback


# ::stappler::xenolith::material2d::MultiViewLayout::Generator::_applyViewCallback

## BRIEF

## CONTENT

Доступ: protected

Тип: ViewCallback


# ::stappler::xenolith::material2d::MultiViewLayout::Generator::_applyProgressCallback

## BRIEF

## CONTENT

Доступ: protected

Тип: ProgressCallback


# ::stappler::xenolith::material2d::MultiViewLayout::~MultiViewLayout()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::material2d::MultiViewLayout::init(stappler::xenolith::material2d::MultiViewLayout::Generator*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::material2d::MultiViewLayout::Generator*

Возвращает:
* bool

# ::stappler::xenolith::material2d::MultiViewLayout::onPush(stappler::xenolith::basic2d::SceneContent2d*,bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::basic2d::SceneContent2d*
* bool


# ::stappler::xenolith::material2d::MultiViewLayout::setGenerator(stappler::xenolith::material2d::MultiViewLayout::Generator*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::material2d::MultiViewLayout::Generator*


# ::stappler::xenolith::material2d::MultiViewLayout::getGenerator() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::material2d::MultiViewLayout::Generator*

# ::stappler::xenolith::material2d::MultiViewLayout::getCurrentIndex() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* int64_t

# ::stappler::xenolith::material2d::MultiViewLayout::showNextView(float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float


# ::stappler::xenolith::material2d::MultiViewLayout::showPrevView(float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float


# ::stappler::xenolith::material2d::MultiViewLayout::showIndexView(int64_t,float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* int64_t
* float


# ::stappler::xenolith::material2d::MultiViewLayout::makeInitialView()

## BRIEF

## CONTENT

Доступ: protected

Возвращает:
* Rc<stappler::xenolith::basic2d::ScrollView>

# ::stappler::xenolith::material2d::MultiViewLayout::onSwipeProgress()

## BRIEF

## CONTENT

Доступ: protected

Возвращает:
* bool

# ::stappler::xenolith::material2d::MultiViewLayout::beginSwipe(const stappler::geom::Vec2&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* const stappler::geom::Vec2&

Возвращает:
* bool

# ::stappler::xenolith::material2d::MultiViewLayout::setSwipeProgress(const stappler::geom::Vec2&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* const stappler::geom::Vec2&

Возвращает:
* bool

# ::stappler::xenolith::material2d::MultiViewLayout::endSwipeProgress(const stappler::geom::Vec2&,const stappler::geom::Vec2&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* const stappler::geom::Vec2&
* const stappler::geom::Vec2&

Возвращает:
* bool

# ::stappler::xenolith::material2d::MultiViewLayout::onSwipeAction(stappler::xenolith::Node*)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::Node*


# ::stappler::xenolith::material2d::MultiViewLayout::setNextView(int64_t,float)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* int64_t
* float


# ::stappler::xenolith::material2d::MultiViewLayout::setPrevView(int64_t,float)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* int64_t
* float


# ::stappler::xenolith::material2d::MultiViewLayout::onViewSelected(stappler::xenolith::basic2d::ScrollView*,int64_t)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::basic2d::ScrollView*
* int64_t


# ::stappler::xenolith::material2d::MultiViewLayout::onPrevViewCreated(stappler::xenolith::basic2d::ScrollView*,stappler::xenolith::basic2d::ScrollView*)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::basic2d::ScrollView*
* stappler::xenolith::basic2d::ScrollView*


# ::stappler::xenolith::material2d::MultiViewLayout::onNextViewCreated(stappler::xenolith::basic2d::ScrollView*,stappler::xenolith::basic2d::ScrollView*)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::basic2d::ScrollView*
* stappler::xenolith::basic2d::ScrollView*


# ::stappler::xenolith::material2d::MultiViewLayout::applyView(stappler::xenolith::basic2d::ScrollView*)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::basic2d::ScrollView*


# ::stappler::xenolith::material2d::MultiViewLayout::applyViewProgress(stappler::xenolith::basic2d::ScrollView*,stappler::xenolith::basic2d::ScrollView*,float)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::basic2d::ScrollView*
* stappler::xenolith::basic2d::ScrollView*
* float


# ::stappler::xenolith::material2d::MultiViewLayout::onBaseNode(stappler::xenolith::material2d::FlexibleLayout::NodeParams const&,const stappler::geom::Padding&,float)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::material2d::FlexibleLayout::NodeParams const&
* const stappler::geom::Padding&
* float


# ::stappler::xenolith::material2d::MultiViewLayout::_currentPos

## BRIEF

## CONTENT

Доступ: protected

Тип: float


# ::stappler::xenolith::material2d::MultiViewLayout::_swipeProgress

## BRIEF

## CONTENT

Доступ: protected

Тип: float


# ::stappler::xenolith::material2d::MultiViewLayout::_currentViewIndex

## BRIEF

## CONTENT

Доступ: protected

Тип: int64_t


# ::stappler::xenolith::material2d::MultiViewLayout::_currentView

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::basic2d::ScrollView*


# ::stappler::xenolith::material2d::MultiViewLayout::_nextView

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::basic2d::ScrollView*


# ::stappler::xenolith::material2d::MultiViewLayout::_prevView

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::basic2d::ScrollView*


# ::stappler::xenolith::material2d::MultiViewLayout::_swipeListener

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::InputListener*


# ::stappler::xenolith::material2d::MultiViewLayout::_generator

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::material2d::MultiViewLayout::Generator*
