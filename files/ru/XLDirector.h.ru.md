Title: XLDirector.h


# XENOLITH_SCENE_DIRECTOR_XLDIRECTOR_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::Director

## BRIEF

## CONTENT

Базовые классы:
* Ref


# ::stappler::xenolith::Director::FrameRequest

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::Director::~Director()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::Director::Director()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::Director::init(stappler::xenolith::Application*,core::FrameContraints const&,stappler::xenolith::View*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Application*
* core::FrameContraints const&
* stappler::xenolith::View*

Возвращает:
* bool

# ::stappler::xenolith::Director::runScene(Rc<stappler::xenolith::Scene>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Rc<stappler::xenolith::Scene>&&


# ::stappler::xenolith::Director::acquireFrame(Rc<stappler::xenolith::Director::FrameRequest> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Rc<stappler::xenolith::Director::FrameRequest> const&

Возвращает:
* bool

# ::stappler::xenolith::Director::update(uint64_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint64_t


# ::stappler::xenolith::Director::end()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::Director::getApplication() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::Application*

# ::stappler::xenolith::Director::getGlLoop() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* core::Loop*

# ::stappler::xenolith::Director::getView() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::View*

# ::stappler::xenolith::Director::getScheduler() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::Scheduler*

# ::stappler::xenolith::Director::getActionManager() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::ActionManager*

# ::stappler::xenolith::Director::getInputDispatcher() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::InputDispatcher*

# ::stappler::xenolith::Director::getTextInputManager() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::TextInputManager*

# ::stappler::xenolith::Director::getScene() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Rc<stappler::xenolith::Scene> const&

# ::stappler::xenolith::Director::getResourceCache() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Rc<stappler::xenolith::ResourceCache> const&

# ::stappler::xenolith::Director::getGeneralProjection() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::Mat4 const&

# ::stappler::xenolith::Director::getFrameConstraints() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* core::FrameContraints const&

# ::stappler::xenolith::Director::pushDrawStat(stappler::xenolith::DrawStat const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::DrawStat const&


# ::stappler::xenolith::Director::getDrawStat() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::DrawStat const&

# ::stappler::xenolith::Director::getFps() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* float

# ::stappler::xenolith::Director::getAvgFps() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* float

# ::stappler::xenolith::Director::getSpf() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* float

# ::stappler::xenolith::Director::getLocalFrameTime() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* float

# ::stappler::xenolith::Director::getDirectorFrameTime() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* float

# ::stappler::xenolith::Director::autorelease(stappler::mem_std::Ref*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::mem_std::Ref*


# ::stappler::xenolith::Director::invalidate()

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::Director::updateGeneralTransform()

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::Director::hasActiveInteractions()

## BRIEF

## CONTENT

Доступ: protected

Возвращает:
* bool

# ::stappler::xenolith::Director::_mainLoop

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::xenolith::Application>


# ::stappler::xenolith::Director::_view

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::View*


# ::stappler::xenolith::Director::_constraints

## BRIEF

## CONTENT

Доступ: protected

Тип: core::FrameContraints


# ::stappler::xenolith::Director::_startTime

## BRIEF

## CONTENT

Доступ: protected

Тип: uint64_t


# ::stappler::xenolith::Director::_time

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::UpdateTime


# ::stappler::xenolith::Director::_drawStat

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::DrawStat


# ::stappler::xenolith::Director::_scene

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::xenolith::Scene>


# ::stappler::xenolith::Director::_nextScene

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::xenolith::Scene>


# ::stappler::xenolith::Director::_generalProjection

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::Mat4


# ::stappler::xenolith::Director::_pool

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::xenolith::PoolRef>


# ::stappler::xenolith::Director::_scheduler

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::xenolith::Scheduler>


# ::stappler::xenolith::Director::_actionManager

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::xenolith::ActionManager>


# ::stappler::xenolith::Director::_inputDispatcher

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::xenolith::InputDispatcher>


# ::stappler::xenolith::Director::_autorelease

## BRIEF

## CONTENT

Доступ: protected

Тип: Vector<Rc<stappler::mem_std::Ref>>


# ::stappler::xenolith::Director::_avgFrameTime

## BRIEF

## CONTENT

Доступ: protected

Тип: math::MovingAverage<20, uint64_t>


# ::stappler::xenolith::Director::_avgFrameTimeValue

## BRIEF

## CONTENT

Доступ: protected

Тип: uint64_t
