Title: XLCoreFrameEmitter.h


# XENOLITH_CORE_XLCOREFRAMEEMITTER_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::core::FrameEmitter

## BRIEF

## CONTENT

Базовые классы:
* Ref


# ::stappler::xenolith::core::FrameEmitter::~FrameEmitter()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::FrameEmitter::init(Rc<stappler::xenolith::core::Loop> const&,uint64_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Rc<stappler::xenolith::core::Loop> const&
* uint64_t

Возвращает:
* bool

# ::stappler::xenolith::core::FrameEmitter::invalidate()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::FrameEmitter::setFrameSubmitted(stappler::xenolith::core::FrameHandle&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::FrameHandle&


# ::stappler::xenolith::core::FrameEmitter::isFrameValid(stappler::xenolith::core::FrameHandle const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::FrameHandle const&

Возвращает:
* bool

# ::stappler::xenolith::core::FrameEmitter::acquireNextFrame()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::FrameEmitter::dropFrameTimeout()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::FrameEmitter::dropFrames()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::FrameEmitter::isValid() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::core::FrameEmitter::setFrameTime(uint64_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint64_t


# ::stappler::xenolith::core::FrameEmitter::getFrameTime() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint64_t

# ::stappler::xenolith::core::FrameEmitter::setFrameInterval(uint64_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint64_t


# ::stappler::xenolith::core::FrameEmitter::getFrameInterval() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint64_t

# ::stappler::xenolith::core::FrameEmitter::getLoop() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Rc<stappler::xenolith::core::Loop> const&

# ::stappler::xenolith::core::FrameEmitter::getLastFrameTime() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint64_t

# ::stappler::xenolith::core::FrameEmitter::getAvgFrameTime() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint64_t

# ::stappler::xenolith::core::FrameEmitter::getAvgFenceTime() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint64_t

# ::stappler::xenolith::core::FrameEmitter::isReadyForSubmit() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::core::FrameEmitter::setEnableBarrier(bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* bool


# ::stappler::xenolith::core::FrameEmitter::makeRequest(stappler::xenolith::core::FrameContraints const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::FrameContraints const&

Возвращает:
* Rc<stappler::xenolith::core::FrameRequest>

# ::stappler::xenolith::core::FrameEmitter::submitNextFrame(Rc<stappler::xenolith::core::FrameRequest>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Rc<stappler::xenolith::core::FrameRequest>&&

Возвращает:
* Rc<stappler::xenolith::core::FrameHandle>

# ::stappler::xenolith::core::FrameEmitter::onFrameEmitted(stappler::xenolith::core::FrameHandle&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::core::FrameHandle&


# ::stappler::xenolith::core::FrameEmitter::onFrameSubmitted(stappler::xenolith::core::FrameHandle&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::core::FrameHandle&


# ::stappler::xenolith::core::FrameEmitter::onFrameComplete(stappler::xenolith::core::FrameHandle&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::core::FrameHandle&


# ::stappler::xenolith::core::FrameEmitter::onFrameTimeout(uint64_t)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* uint64_t


# ::stappler::xenolith::core::FrameEmitter::onFrameRequest(bool)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* bool


# ::stappler::xenolith::core::FrameEmitter::makeFrame(Rc<stappler::xenolith::core::FrameRequest>&&,bool)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* Rc<stappler::xenolith::core::FrameRequest>&&
* bool

Возвращает:
* Rc<stappler::xenolith::core::FrameHandle>

# ::stappler::xenolith::core::FrameEmitter::canStartFrame() const

## BRIEF

## CONTENT

Доступ: protected

Возвращает:
* bool

# ::stappler::xenolith::core::FrameEmitter::scheduleNextFrame(Rc<stappler::xenolith::core::FrameRequest>&&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* Rc<stappler::xenolith::core::FrameRequest>&&


# ::stappler::xenolith::core::FrameEmitter::scheduleFrameTimeout()

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::core::FrameEmitter::_submitted

## BRIEF

## CONTENT

Доступ: protected

Тип: uint64_t


# ::stappler::xenolith::core::FrameEmitter::_order

## BRIEF

## CONTENT

Доступ: protected

Тип: uint64_t


# ::stappler::xenolith::core::FrameEmitter::_gen

## BRIEF

## CONTENT

Доступ: protected

Тип: uint64_t


# ::stappler::xenolith::core::FrameEmitter::_valid

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::core::FrameEmitter::_frame

## BRIEF

## CONTENT

Доступ: protected

Тип: std::atomic<uint64_t>


# ::stappler::xenolith::core::FrameEmitter::_frameInterval

## BRIEF

## CONTENT

Доступ: protected

Тип: uint64_t


# ::stappler::xenolith::core::FrameEmitter::_suboptimal

## BRIEF

## CONTENT

Доступ: protected

Тип: uint64_t


# ::stappler::xenolith::core::FrameEmitter::_frameTimeoutPassed

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::core::FrameEmitter::_nextFrameAcquired

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::core::FrameEmitter::_onDemand

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::core::FrameEmitter::_enableBarrier

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::core::FrameEmitter::_nextFrameRequest

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::xenolith::core::FrameRequest>


# ::stappler::xenolith::core::FrameEmitter::_frames

## BRIEF

## CONTENT

Доступ: protected

Тип: std::deque<Rc<FrameHandle>>


# ::stappler::xenolith::core::FrameEmitter::_framesPending

## BRIEF

## CONTENT

Доступ: protected

Тип: std::deque<Rc<FrameHandle>>


# ::stappler::xenolith::core::FrameEmitter::_loop

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::xenolith::core::Loop>


# ::stappler::xenolith::core::FrameEmitter::_lastSubmit

## BRIEF

## CONTENT

Доступ: protected

Тип: uint64_t


# ::stappler::xenolith::core::FrameEmitter::_lastFrameTime

## BRIEF

## CONTENT

Доступ: protected

Тип: std::atomic<uint64_t>


# ::stappler::xenolith::core::FrameEmitter::_avgFrameTime

## BRIEF

## CONTENT

Доступ: protected

Тип: math::MovingAverage<20, uint64_t>


# ::stappler::xenolith::core::FrameEmitter::_avgFrameTimeValue

## BRIEF

## CONTENT

Доступ: protected

Тип: std::atomic<uint64_t>


# ::stappler::xenolith::core::FrameEmitter::_avgFenceInterval

## BRIEF

## CONTENT

Доступ: protected

Тип: math::MovingAverage<20, uint64_t>


# ::stappler::xenolith::core::FrameEmitter::_avgFenceIntervalValue

## BRIEF

## CONTENT

Доступ: protected

Тип: std::atomic<uint64_t>


# ::stappler::xenolith::core::FrameEmitter::_lastTotalFrameTime

## BRIEF

## CONTENT

Доступ: protected

Тип: uint64_t
