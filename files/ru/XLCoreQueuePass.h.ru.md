Title: XLCoreQueuePass.h


# XENOLITH_CORE_XLCOREQUEUEPASS_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::core::QueuePass

## BRIEF

## CONTENT

Базовые классы:
* NamedRef


# ::stappler::xenolith::core::QueuePass::Queue

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::QueuePass::FrameQueue

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::QueuePass::RenderOrdering

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::QueuePass::QueuePassBuilder

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::QueuePass::QueuePassHandle

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::QueuePass::PassType

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::QueuePass::AttachmentData

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::QueuePass::~QueuePass()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::QueuePass::init(stappler::xenolith::core::QueuePass::QueuePassBuilder&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::QueuePass::QueuePassBuilder&

Возвращает:
* bool

# ::stappler::xenolith::core::QueuePass::invalidate()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::QueuePass::getName() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::StringView

# ::stappler::xenolith::core::QueuePass::getOrdering() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* RenderOrdering

# ::stappler::xenolith::core::QueuePass::getSubpassCount() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* size_t

# ::stappler::xenolith::core::QueuePass::getType() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* PassType

# ::stappler::xenolith::core::QueuePass::makeFrameHandle(stappler::xenolith::core::QueuePass::FrameQueue const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::QueuePass::FrameQueue const&

Возвращает:
* Rc<stappler::xenolith::core::QueuePass::QueuePassHandle>

# ::stappler::xenolith::core::QueuePass::getOwner() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Rc<stappler::xenolith::core::QueuePass::FrameQueue> const&

# ::stappler::xenolith::core::QueuePass::acquireForFrame(stappler::xenolith::core::QueuePass::FrameQueue&,Function<void (bool)>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::QueuePass::FrameQueue&
* Function<void (bool)>&&

Возвращает:
* bool

# ::stappler::xenolith::core::QueuePass::releaseForFrame(stappler::xenolith::core::QueuePass::FrameQueue&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::QueuePass::FrameQueue&

Возвращает:
* bool

# ::stappler::xenolith::core::QueuePass::getData() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::core::QueuePassData const*

# ::stappler::xenolith::core::QueuePass::prepare(stappler::xenolith::core::Device&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::core::Device&


# ::stappler::xenolith::core::QueuePass::FrameQueueWaiter

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::core::QueuePass::FrameQueueWaiter::queue

## BRIEF

## CONTENT

Тип: Rc<stappler::xenolith::core::QueuePass::FrameQueue>


# ::stappler::xenolith::core::QueuePass::FrameQueueWaiter::acquired

## BRIEF

## CONTENT

Тип: Function<void (bool)>


# ::stappler::xenolith::core::QueuePass::_owner

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::xenolith::core::QueuePass::FrameQueue>


# ::stappler::xenolith::core::QueuePass::_next

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::core::QueuePass::FrameQueueWaiter


# ::stappler::xenolith::core::QueuePass::_frameSizeCallback

## BRIEF

## CONTENT

Доступ: protected

Тип: Function<stappler::xenolith::Extent2 (const stappler::xenolith::core::QueuePass::FrameQueue &)>


# ::stappler::xenolith::core::QueuePass::_data

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::core::QueuePassData const*


# ::stappler::xenolith::core::QueuePassHandle

## BRIEF

## CONTENT

Базовые классы:
* NamedRef


# ::stappler::xenolith::core::QueuePassHandle::QueuePass

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::QueuePassHandle::FrameHandle

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::QueuePassHandle::FrameQueue

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::QueuePassHandle::FrameSync

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::QueuePassHandle::RenderOrdering

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::QueuePassHandle::~QueuePassHandle()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::QueuePassHandle::init(stappler::xenolith::core::QueuePassHandle::QueuePass&,stappler::xenolith::core::QueuePassHandle::FrameQueue const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::QueuePassHandle::QueuePass&
* stappler::xenolith::core::QueuePassHandle::FrameQueue const&

Возвращает:
* bool

# ::stappler::xenolith::core::QueuePassHandle::setQueueData(stappler::xenolith::core::FramePassData&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::FramePassData&


# ::stappler::xenolith::core::QueuePassHandle::getName() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::StringView

# ::stappler::xenolith::core::QueuePassHandle::getData() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::core::QueuePassData const*

# ::stappler::xenolith::core::QueuePassHandle::getQueuePass() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Rc<stappler::xenolith::core::QueuePassHandle::QueuePass> const&

# ::stappler::xenolith::core::QueuePassHandle::getFramebuffer() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Rc<stappler::xenolith::core::Framebuffer> const&

# ::stappler::xenolith::core::QueuePassHandle::isAvailable(stappler::xenolith::core::QueuePassHandle::FrameQueue const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::QueuePassHandle::FrameQueue const&

Возвращает:
* bool

# ::stappler::xenolith::core::QueuePassHandle::isAsync() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::core::QueuePassHandle::isSubmitted() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::core::QueuePassHandle::isCompleted() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::core::QueuePassHandle::isFramebufferRequired() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::core::QueuePassHandle::prepare(stappler::xenolith::core::QueuePassHandle::FrameQueue&,Function<void (bool)>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::QueuePassHandle::FrameQueue&
* Function<void (bool)>&&

Возвращает:
* bool

# ::stappler::xenolith::core::QueuePassHandle::submit(stappler::xenolith::core::QueuePassHandle::FrameQueue&,Rc<stappler::xenolith::core::QueuePassHandle::FrameSync>&&,Function<void (bool)>&&,Function<void (bool)>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::QueuePassHandle::FrameQueue&
* Rc<stappler::xenolith::core::QueuePassHandle::FrameSync>&&
* Function<void (bool)>&&
* Function<void (bool)>&&


# ::stappler::xenolith::core::QueuePassHandle::finalize(stappler::xenolith::core::QueuePassHandle::FrameQueue&,bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::QueuePassHandle::FrameQueue&
* bool


# ::stappler::xenolith::core::QueuePassHandle::getAttachmentHandle(stappler::xenolith::core::AttachmentData const*) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::AttachmentData const*

Возвращает:
* stappler::xenolith::core::AttachmentHandle*

# ::stappler::xenolith::core::QueuePassHandle::autorelease(stappler::mem_std::Ref*) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::mem_std::Ref*


# ::stappler::xenolith::core::QueuePassHandle::getAttachemntData(stappler::xenolith::core::AttachmentData const*) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::AttachmentData const*

Возвращает:
* stappler::xenolith::core::AttachmentPassData const*

# ::stappler::xenolith::core::QueuePassHandle::_isAsync

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::core::QueuePassHandle::_queuePass

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::xenolith::core::QueuePassHandle::QueuePass>


# ::stappler::xenolith::core::QueuePassHandle::_data

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::core::QueuePassData const*


# ::stappler::xenolith::core::QueuePassHandle::_queueData

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::core::FramePassData*


# ::stappler::xenolith::core::QueuePassHandle::_autoreleaseMutex

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::mem_std::Mutex


# ::stappler::xenolith::core::QueuePassHandle::_autorelease

## BRIEF

## CONTENT

Доступ: protected

Тип: Vector<Rc<stappler::mem_std::Ref>>
