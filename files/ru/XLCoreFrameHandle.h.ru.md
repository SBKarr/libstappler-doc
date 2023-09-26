Title: XLCoreFrameHandle.h


# XENOLITH_CORE_XLCOREFRAMEHANDLE_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::core::FrameHandle

## BRIEF

## CONTENT

Базовые классы:
* Ref


# ::stappler::xenolith::core::FrameHandle::FrameRequest

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::FrameHandle::GetActiveFramesCount()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint32_t

# ::stappler::xenolith::core::FrameHandle::DescribeActiveFrames()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::FrameHandle::~FrameHandle()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::FrameHandle::init(stappler::xenolith::core::Loop&,stappler::xenolith::core::Device&,Rc<stappler::xenolith::core::FrameHandle::FrameRequest>&&,uint64_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::Loop&
* stappler::xenolith::core::Device&
* Rc<stappler::xenolith::core::FrameHandle::FrameRequest>&&
* uint64_t

Возвращает:
* bool

# ::stappler::xenolith::core::FrameHandle::update(bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* bool


# ::stappler::xenolith::core::FrameHandle::getTimeStart() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint64_t

# ::stappler::xenolith::core::FrameHandle::getTimeEnd() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint64_t

# ::stappler::xenolith::core::FrameHandle::getOrder() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint64_t

# ::stappler::xenolith::core::FrameHandle::getGen() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint64_t

# ::stappler::xenolith::core::FrameHandle::getSubmissionTime() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint64_t

# ::stappler::xenolith::core::FrameHandle::getLoop() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::core::Loop*

# ::stappler::xenolith::core::FrameHandle::getDevice() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::core::Device*

# ::stappler::xenolith::core::FrameHandle::getEmitter() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Rc<stappler::xenolith::core::FrameEmitter> const&

# ::stappler::xenolith::core::FrameHandle::getQueue() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Rc<stappler::xenolith::core::Queue> const&

# ::stappler::xenolith::core::FrameHandle::getFrameConstraints() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::core::FrameContraints const&

# ::stappler::xenolith::core::FrameHandle::getPool() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Rc<stappler::xenolith::PoolRef> const&

# ::stappler::xenolith::core::FrameHandle::getRequest() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Rc<stappler::xenolith::core::FrameHandle::FrameRequest> const&

# ::stappler::xenolith::core::FrameHandle::getImageSpecialization(stappler::xenolith::core::ImageAttachment const*) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::ImageAttachment const*

Возвращает:
* stappler::xenolith::core::ImageInfoData const*

# ::stappler::xenolith::core::FrameHandle::getOutputBinding(stappler::xenolith::core::Attachment const*) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::Attachment const*

Возвращает:
* stappler::xenolith::core::FrameOutputBinding const*

# ::stappler::xenolith::core::FrameHandle::getOutputBinding(stappler::xenolith::core::AttachmentData const*) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::AttachmentData const*

Возвращает:
* stappler::xenolith::core::FrameOutputBinding const*

# ::stappler::xenolith::core::FrameHandle::getRenderTarget(stappler::xenolith::core::Attachment const*) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::Attachment const*

Возвращает:
* Rc<stappler::xenolith::core::ImageStorage>

# ::stappler::xenolith::core::FrameHandle::getRenderTarget(stappler::xenolith::core::AttachmentData const*) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::AttachmentData const*

Возвращает:
* Rc<stappler::xenolith::core::ImageStorage>

# ::stappler::xenolith::core::FrameHandle::getSignalDependencies() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Vector<Rc<stappler::xenolith::core::DependencyEvent>> const&

# ::stappler::xenolith::core::FrameHandle::getFrameQueues() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Vector<Rc<stappler::xenolith::core::FrameQueue>> const&

# ::stappler::xenolith::core::FrameHandle::schedule(Function<bool (stappler::xenolith::core::FrameHandle &)>&&,stappler::StringView)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Function<bool (stappler::xenolith::core::FrameHandle &)>&&
* stappler::StringView


# ::stappler::xenolith::core::FrameHandle::performInQueue(Function<void (stappler::xenolith::core::FrameHandle &)>&&,stappler::mem_std::Ref*,stappler::StringView)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Function<void (stappler::xenolith::core::FrameHandle &)>&&
* stappler::mem_std::Ref*
* stappler::StringView


# ::stappler::xenolith::core::FrameHandle::performInQueue(Function<bool (stappler::xenolith::core::FrameHandle &)>&&,Function<void (stappler::xenolith::core::FrameHandle &, bool)>&&,stappler::mem_std::Ref*,stappler::StringView)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Function<bool (stappler::xenolith::core::FrameHandle &)>&&
* Function<void (stappler::xenolith::core::FrameHandle &, bool)>&&
* stappler::mem_std::Ref*
* stappler::StringView


# ::stappler::xenolith::core::FrameHandle::performOnGlThread(Function<void (stappler::xenolith::core::FrameHandle &)>&&,stappler::mem_std::Ref*,bool,stappler::StringView)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Function<void (stappler::xenolith::core::FrameHandle &)>&&
* stappler::mem_std::Ref*
* bool
* stappler::StringView


# ::stappler::xenolith::core::FrameHandle::performRequiredTask(Function<bool (stappler::xenolith::core::FrameHandle &)>&&,stappler::mem_std::Ref*,stappler::StringView)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Function<bool (stappler::xenolith::core::FrameHandle &)>&&
* stappler::mem_std::Ref*
* stappler::StringView


# ::stappler::xenolith::core::FrameHandle::performRequiredTask(Function<bool (stappler::xenolith::core::FrameHandle &)>&&,Function<void (stappler::xenolith::core::FrameHandle &, bool)>&&,stappler::mem_std::Ref*,stappler::StringView)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Function<bool (stappler::xenolith::core::FrameHandle &)>&&
* Function<void (stappler::xenolith::core::FrameHandle &, bool)>&&
* stappler::mem_std::Ref*
* stappler::StringView


# ::stappler::xenolith::core::FrameHandle::isSubmitted() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::core::FrameHandle::isValid() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::core::FrameHandle::isValidFlag() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::core::FrameHandle::isPersistentMapping() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::core::FrameHandle::getInputData(stappler::xenolith::core::AttachmentData const*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::AttachmentData const*

Возвращает:
* Rc<stappler::xenolith::core::AttachmentInputData>

# ::stappler::xenolith::core::FrameHandle::isReadyForSubmit() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::core::FrameHandle::setReadyForSubmit(bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* bool


# ::stappler::xenolith::core::FrameHandle::invalidate()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::FrameHandle::setCompleteCallback(Function<void (stappler::xenolith::core::FrameHandle &)>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Function<void (stappler::xenolith::core::FrameHandle &)>&&


# ::stappler::xenolith::core::FrameHandle::onQueueSubmitted(stappler::xenolith::core::FrameQueue&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::FrameQueue&


# ::stappler::xenolith::core::FrameHandle::onQueueComplete(stappler::xenolith::core::FrameQueue&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::FrameQueue&


# ::stappler::xenolith::core::FrameHandle::onQueueInvalidated(stappler::xenolith::core::FrameQueue&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::FrameQueue&


# ::stappler::xenolith::core::FrameHandle::onOutputAttachment(stappler::xenolith::core::FrameAttachmentData&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::FrameAttachmentData&


# ::stappler::xenolith::core::FrameHandle::onOutputAttachmentInvalidated(stappler::xenolith::core::FrameAttachmentData&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::FrameAttachmentData&


# ::stappler::xenolith::core::FrameHandle::waitForDependencies(Vector<Rc<stappler::xenolith::core::DependencyEvent>> const&,Function<void (stappler::xenolith::core::FrameHandle &, bool)>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Vector<Rc<stappler::xenolith::core::DependencyEvent>> const&
* Function<void (stappler::xenolith::core::FrameHandle &, bool)>&&


# ::stappler::xenolith::core::FrameHandle::waitForInput(stappler::xenolith::core::FrameQueue&,Rc<stappler::xenolith::core::AttachmentHandle> const&,Function<void (bool)>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::FrameQueue&
* Rc<stappler::xenolith::core::AttachmentHandle> const&
* Function<void (bool)>&&


# ::stappler::xenolith::core::FrameHandle::signalDependencies(bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* bool


# ::stappler::xenolith::core::FrameHandle::setup()

## BRIEF

## CONTENT

Доступ: protected

Возвращает:
* bool

# ::stappler::xenolith::core::FrameHandle::onRequiredTaskCompleted(stappler::StringView)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::StringView


# ::stappler::xenolith::core::FrameHandle::tryComplete()

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::core::FrameHandle::onComplete()

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::core::FrameHandle::_loop

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::core::Loop*


# ::stappler::xenolith::core::FrameHandle::_device

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::core::Device*


# ::stappler::xenolith::core::FrameHandle::_pool

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::xenolith::PoolRef>


# ::stappler::xenolith::core::FrameHandle::_request

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::xenolith::core::FrameHandle::FrameRequest>


# ::stappler::xenolith::core::FrameHandle::_timeStart

## BRIEF

## CONTENT

Доступ: protected

Тип: uint64_t


# ::stappler::xenolith::core::FrameHandle::_timeEnd

## BRIEF

## CONTENT

Доступ: protected

Тип: uint64_t


# ::stappler::xenolith::core::FrameHandle::_gen

## BRIEF

## CONTENT

Доступ: protected

Тип: uint64_t


# ::stappler::xenolith::core::FrameHandle::_order

## BRIEF

## CONTENT

Доступ: protected

Тип: uint64_t


# ::stappler::xenolith::core::FrameHandle::_submissionTime

## BRIEF

## CONTENT

Доступ: protected

Тип: uint64_t


# ::stappler::xenolith::core::FrameHandle::_tasksRequired

## BRIEF

## CONTENT

Доступ: protected

Тип: std::atomic<uint32_t>


# ::stappler::xenolith::core::FrameHandle::_tasksCompleted

## BRIEF

## CONTENT

Доступ: protected

Тип: uint32_t


# ::stappler::xenolith::core::FrameHandle::_queuesSubmitted

## BRIEF

## CONTENT

Доступ: protected

Тип: uint32_t


# ::stappler::xenolith::core::FrameHandle::_queuesCompleted

## BRIEF

## CONTENT

Доступ: protected

Тип: uint32_t


# ::stappler::xenolith::core::FrameHandle::_submitted

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::core::FrameHandle::_completed

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::core::FrameHandle::_valid

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::core::FrameHandle::_queues

## BRIEF

## CONTENT

Доступ: protected

Тип: Vector<Rc<stappler::xenolith::core::FrameQueue>>


# ::stappler::xenolith::core::FrameHandle::_complete

## BRIEF

## CONTENT

Доступ: protected

Тип: Function<void (stappler::xenolith::core::FrameHandle &)>
