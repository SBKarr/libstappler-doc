Title: XLCoreFrameQueue.h


# XENOLITH_CORE_XLCOREFRAMEQUEUE_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::core::FramePassDataRequired

## BRIEF

## CONTENT


# ::stappler::xenolith::core::FramePassDataRequired::data

## BRIEF

## CONTENT

Тип: stappler::xenolith::core::FramePassData*


# ::stappler::xenolith::core::FramePassDataRequired::requiredState

## BRIEF

## CONTENT

Тип: stappler::xenolith::core::FrameRenderPassState


# ::stappler::xenolith::core::FramePassDataRequired::lockedState

## BRIEF

## CONTENT

Тип: stappler::xenolith::core::FrameRenderPassState


# ::stappler::xenolith::core::FramePassDataRequired::FramePassDataRequired()

## BRIEF

## CONTENT


# ::stappler::xenolith::core::FramePassDataRequired::FramePassDataRequired(stappler::xenolith::core::FramePassData*,stappler::xenolith::core::FrameRenderPassState,stappler::xenolith::core::FrameRenderPassState)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::core::FramePassData*
* stappler::xenolith::core::FrameRenderPassState
* stappler::xenolith::core::FrameRenderPassState


# ::stappler::xenolith::core::FramePassData

## BRIEF

## CONTENT


# ::stappler::xenolith::core::FramePassData::state

## BRIEF

## CONTENT

Тип: stappler::xenolith::core::FrameRenderPassState


# ::stappler::xenolith::core::FramePassData::handle

## BRIEF

## CONTENT

Тип: Rc<stappler::xenolith::core::QueuePassHandle>


# ::stappler::xenolith::core::FramePassData::attachments

## BRIEF

## CONTENT

Тип: Vector<Pair<const stappler::xenolith::core::AttachmentPassData *, stappler::xenolith::core::FrameAttachmentData *>>


# ::stappler::xenolith::core::FramePassData::attachmentMap

## BRIEF

## CONTENT

Тип: HashMap<const stappler::xenolith::core::AttachmentData *, stappler::xenolith::core::FrameAttachmentData *>


# ::stappler::xenolith::core::FramePassData::required

## BRIEF

## CONTENT

Тип: Vector<stappler::xenolith::core::FramePassDataRequired>


# ::stappler::xenolith::core::FramePassData::waiters

## BRIEF

## CONTENT

Тип: HashMap<stappler::xenolith::core::FrameRenderPassState, Vector<stappler::xenolith::core::FramePassData *>>


# ::stappler::xenolith::core::FramePassData::framebuffer

## BRIEF

## CONTENT

Тип: Rc<stappler::xenolith::core::Framebuffer>


# ::stappler::xenolith::core::FramePassData::waitForResult

## BRIEF

## CONTENT

Тип: bool


# ::stappler::xenolith::core::FramePassData::submitTime

## BRIEF

## CONTENT

Тип: uint64_t


# ::stappler::xenolith::core::FrameAttachmentData

## BRIEF

## CONTENT


# ::stappler::xenolith::core::FrameAttachmentData::state

## BRIEF

## CONTENT

Тип: stappler::xenolith::core::FrameAttachmentState


# ::stappler::xenolith::core::FrameAttachmentData::handle

## BRIEF

## CONTENT

Тип: Rc<stappler::xenolith::core::AttachmentHandle>


# ::stappler::xenolith::core::FrameAttachmentData::info

## BRIEF

## CONTENT

Тип: stappler::xenolith::core::ImageInfoData


# ::stappler::xenolith::core::FrameAttachmentData::passes

## BRIEF

## CONTENT

Тип: Vector<stappler::xenolith::core::FramePassData *>


# ::stappler::xenolith::core::FrameAttachmentData::final

## BRIEF

## CONTENT

Тип: stappler::xenolith::core::FrameRenderPassState


# ::stappler::xenolith::core::FrameAttachmentData::image

## BRIEF

## CONTENT

Тип: Rc<stappler::xenolith::core::ImageStorage>


# ::stappler::xenolith::core::FrameAttachmentData::waitForResult

## BRIEF

## CONTENT

Тип: bool


# ::stappler::xenolith::core::FrameSyncAttachment

## BRIEF

## CONTENT


# ::stappler::xenolith::core::FrameSyncAttachment::attachment

## BRIEF

## CONTENT

Тип: stappler::xenolith::core::AttachmentHandle const*


# ::stappler::xenolith::core::FrameSyncAttachment::semaphore

## BRIEF

## CONTENT

Тип: Rc<stappler::xenolith::core::Semaphore>


# ::stappler::xenolith::core::FrameSyncAttachment::image

## BRIEF

## CONTENT

Тип: stappler::xenolith::core::ImageStorage*


# ::stappler::xenolith::core::FrameSyncAttachment::stages

## BRIEF

## CONTENT

Тип: stappler::xenolith::core::PipelineStage


# ::stappler::xenolith::core::FrameSyncImage

## BRIEF

## CONTENT


# ::stappler::xenolith::core::FrameSyncImage::attachment

## BRIEF

## CONTENT

Тип: stappler::xenolith::core::AttachmentHandle const*


# ::stappler::xenolith::core::FrameSyncImage::image

## BRIEF

## CONTENT

Тип: stappler::xenolith::core::ImageStorage*


# ::stappler::xenolith::core::FrameSyncImage::newLayout

## BRIEF

## CONTENT

Тип: stappler::xenolith::core::AttachmentLayout


# ::stappler::xenolith::core::FrameSync

## BRIEF

## CONTENT

Базовые классы:
* Ref


# ::stappler::xenolith::core::FrameSync::waitAttachments

## BRIEF

## CONTENT

Тип: Vector<stappler::xenolith::core::FrameSyncAttachment>


# ::stappler::xenolith::core::FrameSync::signalAttachments

## BRIEF

## CONTENT

Тип: Vector<stappler::xenolith::core::FrameSyncAttachment>


# ::stappler::xenolith::core::FrameSync::images

## BRIEF

## CONTENT

Тип: Vector<stappler::xenolith::core::FrameSyncImage>


# ::stappler::xenolith::core::FrameQueue

## BRIEF

## CONTENT

Базовые классы:
* Ref


# ::stappler::xenolith::core::FrameQueue::~FrameQueue()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::FrameQueue::init(Rc<stappler::xenolith::PoolRef> const&,Rc<stappler::xenolith::core::Queue> const&,stappler::xenolith::core::FrameHandle&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Rc<stappler::xenolith::PoolRef> const&
* Rc<stappler::xenolith::core::Queue> const&
* stappler::xenolith::core::FrameHandle&

Возвращает:
* bool

# ::stappler::xenolith::core::FrameQueue::setup()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::core::FrameQueue::update()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::FrameQueue::invalidate()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::FrameQueue::isFinalized() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::core::FrameQueue::getFrame() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Rc<stappler::xenolith::core::FrameHandle> const&

# ::stappler::xenolith::core::FrameQueue::getPool() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Rc<stappler::xenolith::PoolRef> const&

# ::stappler::xenolith::core::FrameQueue::getQueue() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Rc<stappler::xenolith::core::Queue> const&

# ::stappler::xenolith::core::FrameQueue::getLoop() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::core::Loop*

# ::stappler::xenolith::core::FrameQueue::getRenderPasses() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* HashMap<const stappler::xenolith::core::QueuePassData *, stappler::xenolith::core::FramePassData> const&

# ::stappler::xenolith::core::FrameQueue::getAttachments() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* HashMap<const stappler::xenolith::core::AttachmentData *, stappler::xenolith::core::FrameAttachmentData> const&

# ::stappler::xenolith::core::FrameQueue::getSubmissionTime() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint64_t

# ::stappler::xenolith::core::FrameQueue::getAttachment(stappler::xenolith::core::AttachmentData const*) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::AttachmentData const*

Возвращает:
* stappler::xenolith::core::FrameAttachmentData const*

# ::stappler::xenolith::core::FrameQueue::getRenderPass(stappler::xenolith::core::QueuePassData const*) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::QueuePassData const*

Возвращает:
* stappler::xenolith::core::FramePassData const*

# ::stappler::xenolith::core::FrameQueue::addRequiredPass(stappler::xenolith::core::FramePassData&,stappler::xenolith::core::FramePassData const&,stappler::xenolith::core::FrameAttachmentData const&,stappler::xenolith::core::AttachmentPassData const&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::core::FramePassData&
* stappler::xenolith::core::FramePassData const&
* stappler::xenolith::core::FrameAttachmentData const&
* stappler::xenolith::core::AttachmentPassData const&


# ::stappler::xenolith::core::FrameQueue::isResourcePending(stappler::xenolith::core::FrameAttachmentData const&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::core::FrameAttachmentData const&

Возвращает:
* bool

# ::stappler::xenolith::core::FrameQueue::waitForResource(stappler::xenolith::core::FrameAttachmentData const&,Function<void (bool)>&&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::core::FrameAttachmentData const&
* Function<void (bool)>&&


# ::stappler::xenolith::core::FrameQueue::isResourcePending(stappler::xenolith::core::FramePassData const&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::core::FramePassData const&

Возвращает:
* bool

# ::stappler::xenolith::core::FrameQueue::waitForResource(stappler::xenolith::core::FramePassData const&,Function<void ()>&&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::core::FramePassData const&
* Function<void ()>&&


# ::stappler::xenolith::core::FrameQueue::onAttachmentSetupComplete(stappler::xenolith::core::FrameAttachmentData&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::core::FrameAttachmentData&


# ::stappler::xenolith::core::FrameQueue::onAttachmentInput(stappler::xenolith::core::FrameAttachmentData&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::core::FrameAttachmentData&


# ::stappler::xenolith::core::FrameQueue::onAttachmentAcquire(stappler::xenolith::core::FrameAttachmentData&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::core::FrameAttachmentData&


# ::stappler::xenolith::core::FrameQueue::onAttachmentRelease(stappler::xenolith::core::FrameAttachmentData&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::core::FrameAttachmentData&


# ::stappler::xenolith::core::FrameQueue::isRenderPassReady(stappler::xenolith::core::FramePassData const&) const

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::core::FramePassData const&

Возвращает:
* bool

# ::stappler::xenolith::core::FrameQueue::isRenderPassReadyForState(stappler::xenolith::core::FramePassData const&,stappler::xenolith::core::FrameRenderPassState) const

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::core::FramePassData const&
* stappler::xenolith::core::FrameRenderPassState

Возвращает:
* bool

# ::stappler::xenolith::core::FrameQueue::updateRenderPassState(stappler::xenolith::core::FramePassData&,stappler::xenolith::core::FrameRenderPassState)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::core::FramePassData&
* stappler::xenolith::core::FrameRenderPassState


# ::stappler::xenolith::core::FrameQueue::onRenderPassReady(stappler::xenolith::core::FramePassData&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::core::FramePassData&


# ::stappler::xenolith::core::FrameQueue::onRenderPassOwned(stappler::xenolith::core::FramePassData&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::core::FramePassData&


# ::stappler::xenolith::core::FrameQueue::onRenderPassResourcesAcquired(stappler::xenolith::core::FramePassData&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::core::FramePassData&


# ::stappler::xenolith::core::FrameQueue::onRenderPassPrepared(stappler::xenolith::core::FramePassData&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::core::FramePassData&


# ::stappler::xenolith::core::FrameQueue::onRenderPassSubmission(stappler::xenolith::core::FramePassData&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::core::FramePassData&


# ::stappler::xenolith::core::FrameQueue::onRenderPassSubmitted(stappler::xenolith::core::FramePassData&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::core::FramePassData&


# ::stappler::xenolith::core::FrameQueue::onRenderPassComplete(stappler::xenolith::core::FramePassData&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::core::FramePassData&


# ::stappler::xenolith::core::FrameQueue::makeRenderPassSync(stappler::xenolith::core::FramePassData&) const

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::core::FramePassData&

Возвращает:
* Rc<stappler::xenolith::core::FrameSync>

# ::stappler::xenolith::core::FrameQueue::getWaitStageForAttachment(stappler::xenolith::core::FramePassData&,stappler::xenolith::core::AttachmentHandle const*) const

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::core::FramePassData&
* stappler::xenolith::core::AttachmentHandle const*

Возвращает:
* stappler::xenolith::core::PipelineStage

# ::stappler::xenolith::core::FrameQueue::onComplete()

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::core::FrameQueue::onFinalized()

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::core::FrameQueue::invalidate(stappler::xenolith::core::FrameAttachmentData&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::core::FrameAttachmentData&


# ::stappler::xenolith::core::FrameQueue::invalidate(stappler::xenolith::core::FramePassData&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::core::FramePassData&


# ::stappler::xenolith::core::FrameQueue::tryReleaseFrame()

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::core::FrameQueue::finalizeAttachment(stappler::xenolith::core::FrameAttachmentData&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::core::FrameAttachmentData&


# ::stappler::xenolith::core::FrameQueue::_pool

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::xenolith::PoolRef>


# ::stappler::xenolith::core::FrameQueue::_queue

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::xenolith::core::Queue>


# ::stappler::xenolith::core::FrameQueue::_frame

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::xenolith::core::FrameHandle>


# ::stappler::xenolith::core::FrameQueue::_loop

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::core::Loop*


# ::stappler::xenolith::core::FrameQueue::_order

## BRIEF

## CONTENT

Доступ: protected

Тип: uint64_t


# ::stappler::xenolith::core::FrameQueue::_finalized

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::core::FrameQueue::_success

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::core::FrameQueue::_renderPasses

## BRIEF

## CONTENT

Доступ: protected

Тип: HashMap<const stappler::xenolith::core::QueuePassData *, stappler::xenolith::core::FramePassData>


# ::stappler::xenolith::core::FrameQueue::_attachments

## BRIEF

## CONTENT

Доступ: protected

Тип: HashMap<const stappler::xenolith::core::AttachmentData *, stappler::xenolith::core::FrameAttachmentData>


# ::stappler::xenolith::core::FrameQueue::_renderPassesInitial

## BRIEF

## CONTENT

Доступ: protected

Тип: HashSet<stappler::xenolith::core::FramePassData *>


# ::stappler::xenolith::core::FrameQueue::_renderPassesPrepared

## BRIEF

## CONTENT

Доступ: protected

Тип: HashSet<stappler::xenolith::core::FramePassData *>


# ::stappler::xenolith::core::FrameQueue::_attachmentsInitial

## BRIEF

## CONTENT

Доступ: protected

Тип: HashSet<stappler::xenolith::core::FrameAttachmentData *>


# ::stappler::xenolith::core::FrameQueue::_autorelease

## BRIEF

## CONTENT

Доступ: protected

Тип: std::forward_list<Rc<Ref>>


# ::stappler::xenolith::core::FrameQueue::_renderPassSubmitted

## BRIEF

## CONTENT

Доступ: protected

Тип: uint32_t


# ::stappler::xenolith::core::FrameQueue::_renderPassCompleted

## BRIEF

## CONTENT

Доступ: protected

Тип: uint32_t


# ::stappler::xenolith::core::FrameQueue::_finalizedObjects

## BRIEF

## CONTENT

Доступ: protected

Тип: uint32_t


# ::stappler::xenolith::core::FrameQueue::_submissionTime

## BRIEF

## CONTENT

Доступ: protected

Тип: uint64_t


# ::stappler::xenolith::core::FrameQueue::_awaitPasses

## BRIEF

## CONTENT

Доступ: protected

Тип: Vector<Pair<stappler::xenolith::core::FramePassData *, stappler::xenolith::core::FrameRenderPassState>>
