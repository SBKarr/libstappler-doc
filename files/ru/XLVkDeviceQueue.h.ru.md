Title: XLVkDeviceQueue.h


# XENOLITH_BACKEND_VK_XLVKDEVICEQUEUE_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::vk::PipelineDescriptor

## BRIEF

## CONTENT


# ::stappler::xenolith::vk::DeviceQueueFamily

## BRIEF

## CONTENT


# ::stappler::xenolith::vk::DeviceQueueFamily::FrameHandle

## BRIEF

## CONTENT


# ::stappler::xenolith::vk::DeviceQueueFamily::Waiter

## BRIEF

## CONTENT


# ::stappler::xenolith::vk::DeviceQueueFamily::Waiter::acquireForLoop

## BRIEF

## CONTENT

Тип: Function<void (stappler::xenolith::vk::Loop &, const Rc<stappler::xenolith::vk::DeviceQueue> &)>


# ::stappler::xenolith::vk::DeviceQueueFamily::Waiter::releaseForLoop

## BRIEF

## CONTENT

Тип: Function<void (stappler::xenolith::vk::Loop &)>


# ::stappler::xenolith::vk::DeviceQueueFamily::Waiter::acquireForFrame

## BRIEF

## CONTENT

Тип: Function<void (stappler::xenolith::vk::DeviceQueueFamily::FrameHandle &, const Rc<stappler::xenolith::vk::DeviceQueue> &)>


# ::stappler::xenolith::vk::DeviceQueueFamily::Waiter::releaseForFrame

## BRIEF

## CONTENT

Тип: Function<void (stappler::xenolith::vk::DeviceQueueFamily::FrameHandle &)>


# ::stappler::xenolith::vk::DeviceQueueFamily::Waiter::handle

## BRIEF

## CONTENT

Тип: Rc<stappler::xenolith::vk::DeviceQueueFamily::FrameHandle>


# ::stappler::xenolith::vk::DeviceQueueFamily::Waiter::loop

## BRIEF

## CONTENT

Тип: Rc<stappler::xenolith::vk::Loop>


# ::stappler::xenolith::vk::DeviceQueueFamily::Waiter::ref

## BRIEF

## CONTENT

Тип: Rc<stappler::mem_std::Ref>


# ::stappler::xenolith::vk::DeviceQueueFamily::Waiter::Waiter(Function<void (stappler::xenolith::vk::DeviceQueueFamily::FrameHandle &, const Rc<stappler::xenolith::vk::DeviceQueue> &)>&&,Function<void (stappler::xenolith::vk::DeviceQueueFamily::FrameHandle &)>&&,stappler::xenolith::vk::DeviceQueueFamily::FrameHandle*,Rc<stappler::mem_std::Ref>&&)

## BRIEF

## CONTENT

Параметры:
* Function<void (stappler::xenolith::vk::DeviceQueueFamily::FrameHandle &, const Rc<stappler::xenolith::vk::DeviceQueue> &)>&&
* Function<void (stappler::xenolith::vk::DeviceQueueFamily::FrameHandle &)>&&
* stappler::xenolith::vk::DeviceQueueFamily::FrameHandle*
* Rc<stappler::mem_std::Ref>&&


# ::stappler::xenolith::vk::DeviceQueueFamily::Waiter::Waiter(Function<void (stappler::xenolith::vk::Loop &, const Rc<stappler::xenolith::vk::DeviceQueue> &)>&&,Function<void (stappler::xenolith::vk::Loop &)>&&,stappler::xenolith::vk::Loop*,Rc<stappler::mem_std::Ref>&&)

## BRIEF

## CONTENT

Параметры:
* Function<void (stappler::xenolith::vk::Loop &, const Rc<stappler::xenolith::vk::DeviceQueue> &)>&&
* Function<void (stappler::xenolith::vk::Loop &)>&&
* stappler::xenolith::vk::Loop*
* Rc<stappler::mem_std::Ref>&&


# ::stappler::xenolith::vk::DeviceQueueFamily::index

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::xenolith::vk::DeviceQueueFamily::count

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::xenolith::vk::DeviceQueueFamily::preferred

## BRIEF

## CONTENT

Тип: stappler::xenolith::vk::QueueOperations


# ::stappler::xenolith::vk::DeviceQueueFamily::ops

## BRIEF

## CONTENT

Тип: stappler::xenolith::vk::QueueOperations


# ::stappler::xenolith::vk::DeviceQueueFamily::transferGranularity

## BRIEF

## CONTENT

Тип: VkExtent3D


# ::stappler::xenolith::vk::DeviceQueueFamily::queues

## BRIEF

## CONTENT

Тип: Vector<Rc<stappler::xenolith::vk::DeviceQueue>>


# ::stappler::xenolith::vk::DeviceQueueFamily::pools

## BRIEF

## CONTENT

Тип: Vector<Rc<stappler::xenolith::vk::CommandPool>>


# ::stappler::xenolith::vk::DeviceQueueFamily::waiters

## BRIEF

## CONTENT

Тип: Vector<stappler::xenolith::vk::DeviceQueueFamily::Waiter>


# ::stappler::xenolith::vk::DeviceQueue

## BRIEF

## CONTENT

Базовые классы:
* Ref


# ::stappler::xenolith::vk::DeviceQueue::IdleMode

## BRIEF

## CONTENT

Доступ: public

Значения:
* None
* Queue
* Device


# ::stappler::xenolith::vk::DeviceQueue::FrameSync

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::vk::DeviceQueue::FrameHandle

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::vk::DeviceQueue::~DeviceQueue()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::vk::DeviceQueue::init(stappler::xenolith::vk::Device&,VkQueue,uint32_t,stappler::xenolith::vk::QueueOperations)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::vk::Device&
* VkQueue
* uint32_t
* stappler::xenolith::vk::QueueOperations

Возвращает:
* bool

# ::stappler::xenolith::vk::DeviceQueue::submit(stappler::xenolith::vk::DeviceQueue::FrameSync const&,stappler::xenolith::vk::Fence&,stappler::xenolith::vk::CommandPool&,SpanView<const stappler::xenolith::vk::CommandBuffer *>,stappler::xenolith::vk::DeviceQueue::IdleMode)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::vk::DeviceQueue::FrameSync const&
* stappler::xenolith::vk::Fence&
* stappler::xenolith::vk::CommandPool&
* SpanView<const stappler::xenolith::vk::CommandBuffer *>
* stappler::xenolith::vk::DeviceQueue::IdleMode

Возвращает:
* bool

# ::stappler::xenolith::vk::DeviceQueue::submit(stappler::xenolith::vk::Fence&,stappler::xenolith::vk::CommandBuffer const*,stappler::xenolith::vk::DeviceQueue::IdleMode)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::vk::Fence&
* stappler::xenolith::vk::CommandBuffer const*
* stappler::xenolith::vk::DeviceQueue::IdleMode

Возвращает:
* bool

# ::stappler::xenolith::vk::DeviceQueue::submit(stappler::xenolith::vk::Fence&,SpanView<const stappler::xenolith::vk::CommandBuffer *>,stappler::xenolith::vk::DeviceQueue::IdleMode)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::vk::Fence&
* SpanView<const stappler::xenolith::vk::CommandBuffer *>
* stappler::xenolith::vk::DeviceQueue::IdleMode

Возвращает:
* bool

# ::stappler::xenolith::vk::DeviceQueue::waitIdle()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::vk::DeviceQueue::getActiveFencesCount()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint32_t

# ::stappler::xenolith::vk::DeviceQueue::retainFence(stappler::xenolith::vk::Fence const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::vk::Fence const&


# ::stappler::xenolith::vk::DeviceQueue::releaseFence(stappler::xenolith::vk::Fence const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::vk::Fence const&


# ::stappler::xenolith::vk::DeviceQueue::getIndex() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint32_t

# ::stappler::xenolith::vk::DeviceQueue::getFrameIndex() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint64_t

# ::stappler::xenolith::vk::DeviceQueue::getQueue() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* VkQueue

# ::stappler::xenolith::vk::DeviceQueue::getOps() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::vk::QueueOperations

# ::stappler::xenolith::vk::DeviceQueue::getResult() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* VkResult

# ::stappler::xenolith::vk::DeviceQueue::setOwner(stappler::xenolith::vk::DeviceQueue::FrameHandle&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::vk::DeviceQueue::FrameHandle&


# ::stappler::xenolith::vk::DeviceQueue::reset()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::vk::DeviceQueue::_device

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::vk::Device*


# ::stappler::xenolith::vk::DeviceQueue::_index

## BRIEF

## CONTENT

Доступ: protected

Тип: uint32_t


# ::stappler::xenolith::vk::DeviceQueue::_frameIdx

## BRIEF

## CONTENT

Доступ: protected

Тип: uint64_t


# ::stappler::xenolith::vk::DeviceQueue::_ops

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::vk::QueueOperations


# ::stappler::xenolith::vk::DeviceQueue::_queue

## BRIEF

## CONTENT

Доступ: protected

Тип: VkQueue


# ::stappler::xenolith::vk::DeviceQueue::_nfences

## BRIEF

## CONTENT

Доступ: protected

Тип: std::atomic<uint32_t>


# ::stappler::xenolith::vk::DeviceQueue::_result

## BRIEF

## CONTENT

Доступ: protected

Тип: VkResult


# ::stappler::xenolith::vk::BufferLevel

## BRIEF

## CONTENT

Значения:
* Primary
* Secondary


# ::stappler::xenolith::vk::QueueFamilyTransfer

## BRIEF

## CONTENT


# ::stappler::xenolith::vk::QueueFamilyTransfer::srcQueueFamilyIndex

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::xenolith::vk::QueueFamilyTransfer::dstQueueFamilyIndex

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::xenolith::vk::ImageMemoryBarrier

## BRIEF

## CONTENT


# ::stappler::xenolith::vk::ImageMemoryBarrier::ImageMemoryBarrier()

## BRIEF

## CONTENT


# ::stappler::xenolith::vk::ImageMemoryBarrier::ImageMemoryBarrier(stappler::xenolith::vk::Image*,VkAccessFlags,VkAccessFlags,VkImageLayout,VkImageLayout)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::vk::Image*
* VkAccessFlags
* VkAccessFlags
* VkImageLayout
* VkImageLayout


# ::stappler::xenolith::vk::ImageMemoryBarrier::ImageMemoryBarrier(stappler::xenolith::vk::Image*,VkAccessFlags,VkAccessFlags,VkImageLayout,VkImageLayout,VkImageSubresourceRange)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::vk::Image*
* VkAccessFlags
* VkAccessFlags
* VkImageLayout
* VkImageLayout
* VkImageSubresourceRange


# ::stappler::xenolith::vk::ImageMemoryBarrier::ImageMemoryBarrier(stappler::xenolith::vk::Image*,VkAccessFlags,VkAccessFlags,VkImageLayout,VkImageLayout,stappler::xenolith::vk::QueueFamilyTransfer)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::vk::Image*
* VkAccessFlags
* VkAccessFlags
* VkImageLayout
* VkImageLayout
* stappler::xenolith::vk::QueueFamilyTransfer


# ::stappler::xenolith::vk::ImageMemoryBarrier::ImageMemoryBarrier(stappler::xenolith::vk::Image*,VkAccessFlags,VkAccessFlags,VkImageLayout,VkImageLayout,stappler::xenolith::vk::QueueFamilyTransfer,VkImageSubresourceRange)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::vk::Image*
* VkAccessFlags
* VkAccessFlags
* VkImageLayout
* VkImageLayout
* stappler::xenolith::vk::QueueFamilyTransfer
* VkImageSubresourceRange


# ::stappler::xenolith::vk::ImageMemoryBarrier::ImageMemoryBarrier(VkImageMemoryBarrier const&)

## BRIEF

## CONTENT

Параметры:
* VkImageMemoryBarrier const&


# ::stappler::xenolith::vk::ImageMemoryBarrier::operator bool() const

## BRIEF

## CONTENT

Возвращает:
* bool

# ::stappler::xenolith::vk::ImageMemoryBarrier::srcAccessMask

## BRIEF

## CONTENT

Тип: VkAccessFlags


# ::stappler::xenolith::vk::ImageMemoryBarrier::dstAccessMask

## BRIEF

## CONTENT

Тип: VkAccessFlags


# ::stappler::xenolith::vk::ImageMemoryBarrier::oldLayout

## BRIEF

## CONTENT

Тип: VkImageLayout


# ::stappler::xenolith::vk::ImageMemoryBarrier::newLayout

## BRIEF

## CONTENT

Тип: VkImageLayout


# ::stappler::xenolith::vk::ImageMemoryBarrier::familyTransfer

## BRIEF

## CONTENT

Тип: stappler::xenolith::vk::QueueFamilyTransfer


# ::stappler::xenolith::vk::ImageMemoryBarrier::image

## BRIEF

## CONTENT

Тип: stappler::xenolith::vk::Image*


# ::stappler::xenolith::vk::ImageMemoryBarrier::subresourceRange

## BRIEF

## CONTENT

Тип: VkImageSubresourceRange


# ::stappler::xenolith::vk::BufferMemoryBarrier

## BRIEF

## CONTENT


# ::stappler::xenolith::vk::BufferMemoryBarrier::BufferMemoryBarrier()

## BRIEF

## CONTENT


# ::stappler::xenolith::vk::BufferMemoryBarrier::BufferMemoryBarrier(stappler::xenolith::vk::Buffer*,VkAccessFlags,VkAccessFlags)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::vk::Buffer*
* VkAccessFlags
* VkAccessFlags


# ::stappler::xenolith::vk::BufferMemoryBarrier::BufferMemoryBarrier(stappler::xenolith::vk::Buffer*,VkAccessFlags,VkAccessFlags,stappler::xenolith::vk::QueueFamilyTransfer)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::vk::Buffer*
* VkAccessFlags
* VkAccessFlags
* stappler::xenolith::vk::QueueFamilyTransfer


# ::stappler::xenolith::vk::BufferMemoryBarrier::BufferMemoryBarrier(stappler::xenolith::vk::Buffer*,VkAccessFlags,VkAccessFlags,stappler::xenolith::vk::QueueFamilyTransfer,VkDeviceSize,VkDeviceSize)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::vk::Buffer*
* VkAccessFlags
* VkAccessFlags
* stappler::xenolith::vk::QueueFamilyTransfer
* VkDeviceSize
* VkDeviceSize


# ::stappler::xenolith::vk::BufferMemoryBarrier::BufferMemoryBarrier(VkBufferMemoryBarrier const&)

## BRIEF

## CONTENT

Параметры:
* VkBufferMemoryBarrier const&


# ::stappler::xenolith::vk::BufferMemoryBarrier::operator bool() const

## BRIEF

## CONTENT

Возвращает:
* bool

# ::stappler::xenolith::vk::BufferMemoryBarrier::srcAccessMask

## BRIEF

## CONTENT

Тип: VkAccessFlags


# ::stappler::xenolith::vk::BufferMemoryBarrier::dstAccessMask

## BRIEF

## CONTENT

Тип: VkAccessFlags


# ::stappler::xenolith::vk::BufferMemoryBarrier::familyTransfer

## BRIEF

## CONTENT

Тип: stappler::xenolith::vk::QueueFamilyTransfer


# ::stappler::xenolith::vk::BufferMemoryBarrier::buffer

## BRIEF

## CONTENT

Тип: stappler::xenolith::vk::Buffer*


# ::stappler::xenolith::vk::BufferMemoryBarrier::offset

## BRIEF

## CONTENT

Тип: VkDeviceSize


# ::stappler::xenolith::vk::BufferMemoryBarrier::size

## BRIEF

## CONTENT

Тип: VkDeviceSize


# ::stappler::xenolith::vk::DescriptorInfo

## BRIEF

## CONTENT


# ::stappler::xenolith::vk::DescriptorInfo::DescriptorInfo(stappler::xenolith::vk::PipelineDescriptor const*,uint32_t,bool)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::vk::PipelineDescriptor const*
* uint32_t
* bool


# ::stappler::xenolith::vk::DescriptorInfo::descriptor

## BRIEF

## CONTENT

Тип: stappler::xenolith::vk::PipelineDescriptor const*


# ::stappler::xenolith::vk::DescriptorInfo::index

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::xenolith::vk::DescriptorInfo::external

## BRIEF

## CONTENT

Тип: bool


# ::stappler::xenolith::vk::DescriptorImageInfo

## BRIEF

## CONTENT

Базовые классы:
* DescriptorInfo


# ::stappler::xenolith::vk::DescriptorImageInfo::~DescriptorImageInfo()

## BRIEF

## CONTENT


# ::stappler::xenolith::vk::DescriptorImageInfo::DescriptorImageInfo(stappler::xenolith::vk::PipelineDescriptor const*,uint32_t,bool)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::vk::PipelineDescriptor const*
* uint32_t
* bool


# ::stappler::xenolith::vk::DescriptorImageInfo::imageView

## BRIEF

## CONTENT

Тип: Rc<stappler::xenolith::vk::ImageView>


# ::stappler::xenolith::vk::DescriptorImageInfo::sampler

## BRIEF

## CONTENT

Тип: VkSampler


# ::stappler::xenolith::vk::DescriptorImageInfo::layout

## BRIEF

## CONTENT

Тип: VkImageLayout


# ::stappler::xenolith::vk::DescriptorBufferInfo

## BRIEF

## CONTENT

Базовые классы:
* DescriptorInfo


# ::stappler::xenolith::vk::DescriptorBufferInfo::~DescriptorBufferInfo()

## BRIEF

## CONTENT


# ::stappler::xenolith::vk::DescriptorBufferInfo::DescriptorBufferInfo(stappler::xenolith::vk::PipelineDescriptor const*,uint32_t,bool)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::vk::PipelineDescriptor const*
* uint32_t
* bool


# ::stappler::xenolith::vk::DescriptorBufferInfo::buffer

## BRIEF

## CONTENT

Тип: Rc<stappler::xenolith::vk::Buffer>


# ::stappler::xenolith::vk::DescriptorBufferInfo::offset

## BRIEF

## CONTENT

Тип: VkDeviceSize


# ::stappler::xenolith::vk::DescriptorBufferInfo::range

## BRIEF

## CONTENT

Тип: VkDeviceSize


# ::stappler::xenolith::vk::DescriptorBufferViewInfo

## BRIEF

## CONTENT

Базовые классы:
* DescriptorInfo


# ::stappler::xenolith::vk::DescriptorBufferViewInfo::~DescriptorBufferViewInfo()

## BRIEF

## CONTENT


# ::stappler::xenolith::vk::DescriptorBufferViewInfo::DescriptorBufferViewInfo(stappler::xenolith::vk::PipelineDescriptor const*,uint32_t,bool)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::vk::PipelineDescriptor const*
* uint32_t
* bool


# ::stappler::xenolith::vk::DescriptorBufferViewInfo::buffer

## BRIEF

## CONTENT

Тип: Rc<stappler::xenolith::vk::Buffer>


# ::stappler::xenolith::vk::DescriptorBufferViewInfo::target

## BRIEF

## CONTENT

Тип: VkBufferView


# ::stappler::xenolith::vk::CommandBuffer

## BRIEF

## CONTENT

Базовые классы:
* core::CommandBuffer


# ::stappler::xenolith::vk::CommandBuffer::~CommandBuffer()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::vk::CommandBuffer::init(stappler::xenolith::vk::CommandPool const*,stappler::xenolith::vk::DeviceTable const*,VkCommandBuffer)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::vk::CommandPool const*
* stappler::xenolith::vk::DeviceTable const*
* VkCommandBuffer

Возвращает:
* bool

# ::stappler::xenolith::vk::CommandBuffer::invalidate()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::vk::CommandBuffer::cmdPipelineBarrier(VkPipelineStageFlags,VkPipelineStageFlags,VkDependencyFlags,SpanView<stappler::xenolith::vk::ImageMemoryBarrier>)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* VkPipelineStageFlags
* VkPipelineStageFlags
* VkDependencyFlags
* SpanView<stappler::xenolith::vk::ImageMemoryBarrier>


# ::stappler::xenolith::vk::CommandBuffer::cmdPipelineBarrier(VkPipelineStageFlags,VkPipelineStageFlags,VkDependencyFlags,SpanView<stappler::xenolith::vk::BufferMemoryBarrier>)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* VkPipelineStageFlags
* VkPipelineStageFlags
* VkDependencyFlags
* SpanView<stappler::xenolith::vk::BufferMemoryBarrier>


# ::stappler::xenolith::vk::CommandBuffer::cmdPipelineBarrier(VkPipelineStageFlags,VkPipelineStageFlags,VkDependencyFlags,SpanView<stappler::xenolith::vk::BufferMemoryBarrier>,SpanView<stappler::xenolith::vk::ImageMemoryBarrier>)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* VkPipelineStageFlags
* VkPipelineStageFlags
* VkDependencyFlags
* SpanView<stappler::xenolith::vk::BufferMemoryBarrier>
* SpanView<stappler::xenolith::vk::ImageMemoryBarrier>


# ::stappler::xenolith::vk::CommandBuffer::cmdCopyBuffer(stappler::xenolith::vk::Buffer*,stappler::xenolith::vk::Buffer*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::vk::Buffer*
* stappler::xenolith::vk::Buffer*


# ::stappler::xenolith::vk::CommandBuffer::cmdCopyBuffer(stappler::xenolith::vk::Buffer*,stappler::xenolith::vk::Buffer*,VkDeviceSize,VkDeviceSize,VkDeviceSize)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::vk::Buffer*
* stappler::xenolith::vk::Buffer*
* VkDeviceSize
* VkDeviceSize
* VkDeviceSize


# ::stappler::xenolith::vk::CommandBuffer::cmdCopyBuffer(stappler::xenolith::vk::Buffer*,stappler::xenolith::vk::Buffer*,SpanView<VkBufferCopy>)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::vk::Buffer*
* stappler::xenolith::vk::Buffer*
* SpanView<VkBufferCopy>


# ::stappler::xenolith::vk::CommandBuffer::cmdCopyImage(stappler::xenolith::vk::Image*,VkImageLayout,stappler::xenolith::vk::Image*,VkImageLayout,VkFilter)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::vk::Image*
* VkImageLayout
* stappler::xenolith::vk::Image*
* VkImageLayout
* VkFilter


# ::stappler::xenolith::vk::CommandBuffer::cmdCopyImage(stappler::xenolith::vk::Image*,VkImageLayout,stappler::xenolith::vk::Image*,VkImageLayout,VkImageCopy const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::vk::Image*
* VkImageLayout
* stappler::xenolith::vk::Image*
* VkImageLayout
* VkImageCopy const&


# ::stappler::xenolith::vk::CommandBuffer::cmdCopyImage(stappler::xenolith::vk::Image*,VkImageLayout,stappler::xenolith::vk::Image*,VkImageLayout,SpanView<VkImageCopy>)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::vk::Image*
* VkImageLayout
* stappler::xenolith::vk::Image*
* VkImageLayout
* SpanView<VkImageCopy>


# ::stappler::xenolith::vk::CommandBuffer::cmdCopyBufferToImage(stappler::xenolith::vk::Buffer*,stappler::xenolith::vk::Image*,VkImageLayout,VkDeviceSize)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::vk::Buffer*
* stappler::xenolith::vk::Image*
* VkImageLayout
* VkDeviceSize


# ::stappler::xenolith::vk::CommandBuffer::cmdCopyBufferToImage(stappler::xenolith::vk::Buffer*,stappler::xenolith::vk::Image*,VkImageLayout,SpanView<VkBufferImageCopy>)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::vk::Buffer*
* stappler::xenolith::vk::Image*
* VkImageLayout
* SpanView<VkBufferImageCopy>


# ::stappler::xenolith::vk::CommandBuffer::cmdCopyImageToBuffer(stappler::xenolith::vk::Image*,VkImageLayout,stappler::xenolith::vk::Buffer*,VkDeviceSize)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::vk::Image*
* VkImageLayout
* stappler::xenolith::vk::Buffer*
* VkDeviceSize


# ::stappler::xenolith::vk::CommandBuffer::cmdCopyImageToBuffer(stappler::xenolith::vk::Image*,VkImageLayout,stappler::xenolith::vk::Buffer*,SpanView<VkBufferImageCopy>)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::vk::Image*
* VkImageLayout
* stappler::xenolith::vk::Buffer*
* SpanView<VkBufferImageCopy>


# ::stappler::xenolith::vk::CommandBuffer::cmdClearColorImage(stappler::xenolith::vk::Image*,VkImageLayout,const stappler::geom::Color4F&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::vk::Image*
* VkImageLayout
* const stappler::geom::Color4F&


# ::stappler::xenolith::vk::CommandBuffer::cmdBeginRenderPass(stappler::xenolith::vk::RenderPass*,stappler::xenolith::vk::Framebuffer*,VkSubpassContents,bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::vk::RenderPass*
* stappler::xenolith::vk::Framebuffer*
* VkSubpassContents
* bool


# ::stappler::xenolith::vk::CommandBuffer::cmdEndRenderPass()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::vk::CommandBuffer::cmdSetViewport(uint32_t,SpanView<VkViewport>)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint32_t
* SpanView<VkViewport>


# ::stappler::xenolith::vk::CommandBuffer::cmdSetScissor(uint32_t,SpanView<VkRect2D>)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint32_t
* SpanView<VkRect2D>


# ::stappler::xenolith::vk::CommandBuffer::cmdBindPipeline(stappler::xenolith::vk::GraphicPipeline*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::vk::GraphicPipeline*


# ::stappler::xenolith::vk::CommandBuffer::cmdBindPipeline(stappler::xenolith::vk::ComputePipeline*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::vk::ComputePipeline*


# ::stappler::xenolith::vk::CommandBuffer::cmdBindIndexBuffer(stappler::xenolith::vk::Buffer*,VkDeviceSize,VkIndexType)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::vk::Buffer*
* VkDeviceSize
* VkIndexType


# ::stappler::xenolith::vk::CommandBuffer::cmdBindDescriptorSets(stappler::xenolith::vk::RenderPass*,uint32_t,uint32_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::vk::RenderPass*
* uint32_t
* uint32_t


# ::stappler::xenolith::vk::CommandBuffer::cmdBindDescriptorSets(stappler::xenolith::vk::RenderPass*,uint32_t,SpanView<VkDescriptorSet>,uint32_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::vk::RenderPass*
* uint32_t
* SpanView<VkDescriptorSet>
* uint32_t


# ::stappler::xenolith::vk::CommandBuffer::cmdBindGraphicDescriptorSets(VkPipelineLayout,SpanView<VkDescriptorSet>,uint32_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* VkPipelineLayout
* SpanView<VkDescriptorSet>
* uint32_t


# ::stappler::xenolith::vk::CommandBuffer::cmdBindComputeDescriptorSets(VkPipelineLayout,SpanView<VkDescriptorSet>,uint32_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* VkPipelineLayout
* SpanView<VkDescriptorSet>
* uint32_t


# ::stappler::xenolith::vk::CommandBuffer::cmdDraw(uint32_t,uint32_t,uint32_t,uint32_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint32_t
* uint32_t
* uint32_t
* uint32_t


# ::stappler::xenolith::vk::CommandBuffer::cmdDrawIndexed(uint32_t,uint32_t,uint32_t,int32_t,uint32_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint32_t
* uint32_t
* uint32_t
* int32_t
* uint32_t


# ::stappler::xenolith::vk::CommandBuffer::cmdPushConstants(VkPipelineLayout,VkShaderStageFlags,uint32_t,stappler::BytesView)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* VkPipelineLayout
* VkShaderStageFlags
* uint32_t
* stappler::BytesView


# ::stappler::xenolith::vk::CommandBuffer::cmdPushConstants(VkShaderStageFlags,uint32_t,stappler::BytesView)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* VkShaderStageFlags
* uint32_t
* stappler::BytesView


# ::stappler::xenolith::vk::CommandBuffer::cmdFillBuffer(stappler::xenolith::vk::Buffer*,uint32_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::vk::Buffer*
* uint32_t


# ::stappler::xenolith::vk::CommandBuffer::cmdFillBuffer(stappler::xenolith::vk::Buffer*,VkDeviceSize,VkDeviceSize,uint32_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::vk::Buffer*
* VkDeviceSize
* VkDeviceSize
* uint32_t


# ::stappler::xenolith::vk::CommandBuffer::cmdDispatch(uint32_t,uint32_t,uint32_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint32_t
* uint32_t
* uint32_t


# ::stappler::xenolith::vk::CommandBuffer::cmdDispatchPipeline(stappler::xenolith::vk::ComputePipeline*,uint32_t,uint32_t,uint32_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::vk::ComputePipeline*
* uint32_t
* uint32_t
* uint32_t


# ::stappler::xenolith::vk::CommandBuffer::cmdNextSubpass()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint32_t

# ::stappler::xenolith::vk::CommandBuffer::getBuffer() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* VkCommandBuffer

# ::stappler::xenolith::vk::CommandBuffer::getCurrentSubpass() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint32_t

# ::stappler::xenolith::vk::CommandBuffer::getBoundLayoutIndex() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint32_t

# ::stappler::xenolith::vk::CommandBuffer::getBoundLayout() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* VkPipelineLayout

# ::stappler::xenolith::vk::CommandBuffer::writeImageTransfer(uint32_t,uint32_t,Rc<stappler::xenolith::vk::Buffer> const&,Rc<stappler::xenolith::vk::Image> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint32_t
* uint32_t
* Rc<stappler::xenolith::vk::Buffer> const&
* Rc<stappler::xenolith::vk::Image> const&


# ::stappler::xenolith::vk::CommandBuffer::bindBuffer(core::BufferObject*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* core::BufferObject*


# ::stappler::xenolith::vk::CommandBuffer::_boundLayout

## BRIEF

## CONTENT

Доступ: protected

Тип: VkPipelineLayout


# ::stappler::xenolith::vk::CommandBuffer::_pool

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::vk::CommandPool const*


# ::stappler::xenolith::vk::CommandBuffer::_table

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::vk::DeviceTable const*


# ::stappler::xenolith::vk::CommandBuffer::_buffer

## BRIEF

## CONTENT

Доступ: protected

Тип: VkCommandBuffer


# ::stappler::xenolith::vk::CommandBuffer::_descriptorSets

## BRIEF

## CONTENT

Доступ: protected

Тип: Set<Rc<stappler::xenolith::vk::DescriptorSet>>


# ::stappler::xenolith::vk::CommandBuffer::_memPool

## BRIEF

## CONTENT

Доступ: protected

Тип: Set<Rc<stappler::xenolith::vk::DeviceMemoryPool>>


# ::stappler::xenolith::vk::CommandPool

## BRIEF

## CONTENT

Базовые классы:
* Ref


# ::stappler::xenolith::vk::CommandPool::DefaultFlags

## BRIEF

## CONTENT

Доступ: public

Тип: VkCommandBufferUsageFlagBits const


# ::stappler::xenolith::vk::CommandPool::Level

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::vk::CommandPool::~CommandPool()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::vk::CommandPool::init(stappler::xenolith::vk::Device&,uint32_t,stappler::xenolith::vk::QueueOperations,bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::vk::Device&
* uint32_t
* stappler::xenolith::vk::QueueOperations
* bool

Возвращает:
* bool

# ::stappler::xenolith::vk::CommandPool::invalidate(stappler::xenolith::vk::Device&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::vk::Device&


# ::stappler::xenolith::vk::CommandPool::getClass() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::vk::QueueOperations

# ::stappler::xenolith::vk::CommandPool::getFamilyIdx() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint32_t

# ::stappler::xenolith::vk::CommandPool::getCommandPool() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* VkCommandPool

# ::stappler::xenolith::vk::CommandPool::recordBuffer(stappler::xenolith::vk::Device&,Callback<bool (stappler::xenolith::vk::CommandBuffer &)> const&,VkCommandBufferUsageFlagBits,stappler::xenolith::vk::CommandPool::Level)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::vk::Device&
* Callback<bool (stappler::xenolith::vk::CommandBuffer &)> const&
* VkCommandBufferUsageFlagBits
* stappler::xenolith::vk::CommandPool::Level

Возвращает:
* stappler::xenolith::vk::CommandBuffer const*

# ::stappler::xenolith::vk::CommandPool::freeDefaultBuffers(stappler::xenolith::vk::Device&,Vector<VkCommandBuffer>&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::vk::Device&
* Vector<VkCommandBuffer>&


# ::stappler::xenolith::vk::CommandPool::reset(stappler::xenolith::vk::Device&,bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::vk::Device&
* bool


# ::stappler::xenolith::vk::CommandPool::autorelease(Rc<stappler::mem_std::Ref>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Rc<stappler::mem_std::Ref>&&


# ::stappler::xenolith::vk::CommandPool::_familyIdx

## BRIEF

## CONTENT

Доступ: protected

Тип: uint32_t


# ::stappler::xenolith::vk::CommandPool::_currentComplexity

## BRIEF

## CONTENT

Доступ: protected

Тип: uint32_t


# ::stappler::xenolith::vk::CommandPool::_bestComplexity

## BRIEF

## CONTENT

Доступ: protected

Тип: uint32_t


# ::stappler::xenolith::vk::CommandPool::_class

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::vk::QueueOperations


# ::stappler::xenolith::vk::CommandPool::_commandPool

## BRIEF

## CONTENT

Доступ: protected

Тип: VkCommandPool


# ::stappler::xenolith::vk::CommandPool::_autorelease

## BRIEF

## CONTENT

Доступ: protected

Тип: Vector<Rc<stappler::mem_std::Ref>>


# ::stappler::xenolith::vk::CommandPool::_buffers

## BRIEF

## CONTENT

Доступ: protected

Тип: Vector<Rc<stappler::xenolith::vk::CommandBuffer>>
