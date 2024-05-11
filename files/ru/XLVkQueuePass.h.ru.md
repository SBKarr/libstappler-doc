Title: XLVkQueuePass.h


# XENOLITH_BACKEND_VK_XLVKQUEUEPASS_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::vk::MaterialBuffers

## BRIEF

## CONTENT


# ::stappler::xenolith::vk::MaterialBuffers::stagingBuffer

## BRIEF

## CONTENT

Тип: Rc<stappler::xenolith::vk::Buffer>


# ::stappler::xenolith::vk::MaterialBuffers::targetBuffer

## BRIEF

## CONTENT

Тип: Rc<stappler::xenolith::vk::Buffer>


# ::stappler::xenolith::vk::MaterialBuffers::ordering

## BRIEF

## CONTENT

Тип: HashMap<core::MaterialId, uint32_t>


# ::stappler::xenolith::vk::QueuePass

## BRIEF

## CONTENT

Базовые классы:
* core::QueuePass


# ::stappler::xenolith::vk::QueuePass::~QueuePass()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::vk::QueuePass::init(stappler::xenolith::core::QueuePass::QueuePassBuilder&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::QueuePass::QueuePassBuilder&

Возвращает:
* bool

# ::stappler::xenolith::vk::QueuePass::invalidate()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::vk::QueuePass::getQueueOps() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::vk::QueueOperations

# ::stappler::xenolith::vk::QueuePass::_queueOps

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::vk::QueueOperations


# ::stappler::xenolith::vk::QueuePassHandle

## BRIEF

## CONTENT

Базовые классы:
* core::QueuePassHandle


# ::stappler::xenolith::vk::QueuePassHandle::rotateScissor(core::FrameContraints const&,const stappler::geom::URect&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* core::FrameContraints const&
* const stappler::geom::URect&

Возвращает:
* VkRect2D

# ::stappler::xenolith::vk::QueuePassHandle::ImageInputOutputBarrier

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::vk::QueuePassHandle::ImageInputOutputBarrier::input

## BRIEF

## CONTENT

Тип: vk::ImageMemoryBarrier


# ::stappler::xenolith::vk::QueuePassHandle::ImageInputOutputBarrier::output

## BRIEF

## CONTENT

Тип: vk::ImageMemoryBarrier


# ::stappler::xenolith::vk::QueuePassHandle::ImageInputOutputBarrier::inputFrom

## BRIEF

## CONTENT

Тип: core::PipelineStage


# ::stappler::xenolith::vk::QueuePassHandle::ImageInputOutputBarrier::inputTo

## BRIEF

## CONTENT

Тип: core::PipelineStage


# ::stappler::xenolith::vk::QueuePassHandle::ImageInputOutputBarrier::outputFrom

## BRIEF

## CONTENT

Тип: core::PipelineStage


# ::stappler::xenolith::vk::QueuePassHandle::ImageInputOutputBarrier::outputTo

## BRIEF

## CONTENT

Тип: core::PipelineStage


# ::stappler::xenolith::vk::QueuePassHandle::BufferInputOutputBarrier

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::vk::QueuePassHandle::BufferInputOutputBarrier::input

## BRIEF

## CONTENT

Тип: vk::BufferMemoryBarrier


# ::stappler::xenolith::vk::QueuePassHandle::BufferInputOutputBarrier::output

## BRIEF

## CONTENT

Тип: vk::BufferMemoryBarrier


# ::stappler::xenolith::vk::QueuePassHandle::BufferInputOutputBarrier::inputFrom

## BRIEF

## CONTENT

Тип: core::PipelineStage


# ::stappler::xenolith::vk::QueuePassHandle::BufferInputOutputBarrier::inputTo

## BRIEF

## CONTENT

Тип: core::PipelineStage


# ::stappler::xenolith::vk::QueuePassHandle::BufferInputOutputBarrier::outputFrom

## BRIEF

## CONTENT

Тип: core::PipelineStage


# ::stappler::xenolith::vk::QueuePassHandle::BufferInputOutputBarrier::outputTo

## BRIEF

## CONTENT

Тип: core::PipelineStage


# ::stappler::xenolith::vk::QueuePassHandle::~QueuePassHandle()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::vk::QueuePassHandle::invalidate()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::vk::QueuePassHandle::prepare(stappler::xenolith::core::QueuePassHandle::FrameQueue&,Function<void (bool)>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::QueuePassHandle::FrameQueue&
* Function<void (bool)>&&

Возвращает:
* bool

# ::stappler::xenolith::vk::QueuePassHandle::submit(stappler::xenolith::core::QueuePassHandle::FrameQueue&,Rc<stappler::xenolith::core::QueuePassHandle::FrameSync>&&,Function<void (bool)>&&,Function<void (bool)>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::QueuePassHandle::FrameQueue&
* Rc<stappler::xenolith::core::QueuePassHandle::FrameSync>&&
* Function<void (bool)>&&
* Function<void (bool)>&&


# ::stappler::xenolith::vk::QueuePassHandle::finalize(stappler::xenolith::core::QueuePassHandle::FrameQueue&,bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::QueuePassHandle::FrameQueue&
* bool


# ::stappler::xenolith::vk::QueuePassHandle::getQueueOps() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::vk::QueueOperations

# ::stappler::xenolith::vk::QueuePassHandle::getImageInputOutputBarrier(stappler::xenolith::vk::Device*,stappler::xenolith::vk::Image*,stappler::xenolith::vk::ImageAttachmentHandle&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::vk::Device*
* stappler::xenolith::vk::Image*
* stappler::xenolith::vk::ImageAttachmentHandle&

Возвращает:
* stappler::xenolith::vk::QueuePassHandle::ImageInputOutputBarrier

# ::stappler::xenolith::vk::QueuePassHandle::getBufferInputOutputBarrier(stappler::xenolith::vk::Device*,stappler::xenolith::vk::Buffer*,stappler::xenolith::vk::BufferAttachmentHandle&,VkDeviceSize,VkDeviceSize) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::vk::Device*
* stappler::xenolith::vk::Buffer*
* stappler::xenolith::vk::BufferAttachmentHandle&
* VkDeviceSize
* VkDeviceSize

Возвращает:
* stappler::xenolith::vk::QueuePassHandle::BufferInputOutputBarrier

# ::stappler::xenolith::vk::QueuePassHandle::setQueueIdleMode(DeviceQueue::IdleMode)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* DeviceQueue::IdleMode


# ::stappler::xenolith::vk::QueuePassHandle::doPrepareCommands(stappler::xenolith::core::QueuePassHandle::FrameHandle&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::core::QueuePassHandle::FrameHandle&

Возвращает:
* Vector<const stappler::xenolith::vk::CommandBuffer *>

# ::stappler::xenolith::vk::QueuePassHandle::doSubmit(stappler::xenolith::core::QueuePassHandle::FrameHandle&,Function<void (bool)>&&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::core::QueuePassHandle::FrameHandle&
* Function<void (bool)>&&

Возвращает:
* bool

# ::stappler::xenolith::vk::QueuePassHandle::doSubmitted(stappler::xenolith::core::QueuePassHandle::FrameHandle&,Function<void (bool)>&&,bool,Rc<stappler::xenolith::vk::Fence>&&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::core::QueuePassHandle::FrameHandle&
* Function<void (bool)>&&
* bool
* Rc<stappler::xenolith::vk::Fence>&&


# ::stappler::xenolith::vk::QueuePassHandle::doComplete(stappler::xenolith::core::QueuePassHandle::FrameQueue&,Function<void (bool)>&&,bool)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::core::QueuePassHandle::FrameQueue&
* Function<void (bool)>&&
* bool


# ::stappler::xenolith::vk::QueuePassHandle::doFinalizeTransfer(core::MaterialSet*,Vector<stappler::xenolith::vk::ImageMemoryBarrier>&,Vector<stappler::xenolith::vk::BufferMemoryBarrier>&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* core::MaterialSet*
* Vector<stappler::xenolith::vk::ImageMemoryBarrier>&
* Vector<stappler::xenolith::vk::BufferMemoryBarrier>&


# ::stappler::xenolith::vk::QueuePassHandle::updateMaterials(stappler::xenolith::core::QueuePassHandle::FrameHandle&,Rc<core::MaterialSet> const&,Vector<Rc<core::Material>> const&,SpanView<core::MaterialId>,SpanView<core::MaterialId>)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::core::QueuePassHandle::FrameHandle&
* Rc<core::MaterialSet> const&
* Vector<Rc<core::Material>> const&
* SpanView<core::MaterialId>
* SpanView<core::MaterialId>

Возвращает:
* stappler::xenolith::vk::MaterialBuffers

# ::stappler::xenolith::vk::QueuePassHandle::getComputePipelineByName(uint32_t,stappler::StringView) const

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* uint32_t
* stappler::StringView

Возвращает:
* vk::ComputePipeline*

# ::stappler::xenolith::vk::QueuePassHandle::getComputePipelineBySubName(uint32_t,stappler::StringView) const

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* uint32_t
* stappler::StringView

Возвращает:
* vk::ComputePipeline*

# ::stappler::xenolith::vk::QueuePassHandle::getGraphicPipelineByName(uint32_t,stappler::StringView) const

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* uint32_t
* stappler::StringView

Возвращает:
* vk::GraphicPipeline*

# ::stappler::xenolith::vk::QueuePassHandle::getGraphicPipelineBySubName(uint32_t,stappler::StringView) const

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* uint32_t
* stappler::StringView

Возвращает:
* vk::GraphicPipeline*

# ::stappler::xenolith::vk::QueuePassHandle::_queueIdleMode

## BRIEF

## CONTENT

Доступ: protected

Тип: DeviceQueue::IdleMode


# ::stappler::xenolith::vk::QueuePassHandle::_onPrepared

## BRIEF

## CONTENT

Доступ: protected

Тип: Function<void (bool)>


# ::stappler::xenolith::vk::QueuePassHandle::_valid

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::vk::QueuePassHandle::_commandsReady

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::vk::QueuePassHandle::_descriptorsReady

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::vk::QueuePassHandle::_device

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::vk::Device*


# ::stappler::xenolith::vk::QueuePassHandle::_loop

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::vk::Loop*


# ::stappler::xenolith::vk::QueuePassHandle::_fence

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::xenolith::vk::Fence>


# ::stappler::xenolith::vk::QueuePassHandle::_pool

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::xenolith::vk::CommandPool>


# ::stappler::xenolith::vk::QueuePassHandle::_queue

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::xenolith::vk::DeviceQueue>


# ::stappler::xenolith::vk::QueuePassHandle::_buffers

## BRIEF

## CONTENT

Доступ: protected

Тип: Vector<const stappler::xenolith::vk::CommandBuffer *>


# ::stappler::xenolith::vk::QueuePassHandle::_sync

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::xenolith::core::QueuePassHandle::FrameSync>


# ::stappler::xenolith::vk::QueuePassHandle::_constraints

## BRIEF

## CONTENT

Доступ: protected

Тип: core::FrameContraints
