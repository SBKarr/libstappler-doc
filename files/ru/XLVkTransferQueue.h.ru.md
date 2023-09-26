Title: XLVkTransferQueue.h


# XENOLITH_BACKEND_VK_XLVKTRANSFERQUEUE_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::vk::TransferResource

## BRIEF

## CONTENT

Базовые классы:
* core::AttachmentInputData


# ::stappler::xenolith::vk::TransferResource::BufferAllocInfo

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::vk::TransferResource::BufferAllocInfo::data

## BRIEF

## CONTENT

Тип: core::BufferData*


# ::stappler::xenolith::vk::TransferResource::BufferAllocInfo::info

## BRIEF

## CONTENT

Тип: VkBufferCreateInfo


# ::stappler::xenolith::vk::TransferResource::BufferAllocInfo::req

## BRIEF

## CONTENT

Тип: stappler::xenolith::vk::MemoryRequirements


# ::stappler::xenolith::vk::TransferResource::BufferAllocInfo::buffer

## BRIEF

## CONTENT

Тип: VkBuffer


# ::stappler::xenolith::vk::TransferResource::BufferAllocInfo::offset

## BRIEF

## CONTENT

Тип: VkDeviceSize


# ::stappler::xenolith::vk::TransferResource::BufferAllocInfo::stagingOffset

## BRIEF

## CONTENT

Тип: VkDeviceSize


# ::stappler::xenolith::vk::TransferResource::BufferAllocInfo::dedicated

## BRIEF

## CONTENT

Тип: VkDeviceMemory


# ::stappler::xenolith::vk::TransferResource::BufferAllocInfo::dedicatedMemType

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::xenolith::vk::TransferResource::BufferAllocInfo::barrier

## BRIEF

## CONTENT

Тип: std::optional<VkBufferMemoryBarrier>


# ::stappler::xenolith::vk::TransferResource::BufferAllocInfo::useStaging

## BRIEF

## CONTENT

Тип: bool


# ::stappler::xenolith::vk::TransferResource::BufferAllocInfo::BufferAllocInfo()

## BRIEF

## CONTENT


# ::stappler::xenolith::vk::TransferResource::BufferAllocInfo::BufferAllocInfo(core::BufferData*)

## BRIEF

## CONTENT

Параметры:
* core::BufferData*


# ::stappler::xenolith::vk::TransferResource::ImageAllocInfo

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::vk::TransferResource::ImageAllocInfo::data

## BRIEF

## CONTENT

Тип: core::ImageData*


# ::stappler::xenolith::vk::TransferResource::ImageAllocInfo::info

## BRIEF

## CONTENT

Тип: VkImageCreateInfo


# ::stappler::xenolith::vk::TransferResource::ImageAllocInfo::req

## BRIEF

## CONTENT

Тип: stappler::xenolith::vk::MemoryRequirements


# ::stappler::xenolith::vk::TransferResource::ImageAllocInfo::image

## BRIEF

## CONTENT

Тип: VkImage


# ::stappler::xenolith::vk::TransferResource::ImageAllocInfo::offset

## BRIEF

## CONTENT

Тип: VkDeviceSize


# ::stappler::xenolith::vk::TransferResource::ImageAllocInfo::stagingOffset

## BRIEF

## CONTENT

Тип: VkDeviceSize


# ::stappler::xenolith::vk::TransferResource::ImageAllocInfo::dedicated

## BRIEF

## CONTENT

Тип: VkDeviceMemory


# ::stappler::xenolith::vk::TransferResource::ImageAllocInfo::dedicatedMemType

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::xenolith::vk::TransferResource::ImageAllocInfo::barrier

## BRIEF

## CONTENT

Тип: std::optional<VkImageMemoryBarrier>


# ::stappler::xenolith::vk::TransferResource::ImageAllocInfo::useStaging

## BRIEF

## CONTENT

Тип: bool


# ::stappler::xenolith::vk::TransferResource::ImageAllocInfo::ImageAllocInfo()

## BRIEF

## CONTENT


# ::stappler::xenolith::vk::TransferResource::ImageAllocInfo::ImageAllocInfo(core::ImageData*)

## BRIEF

## CONTENT

Параметры:
* core::ImageData*


# ::stappler::xenolith::vk::TransferResource::StagingCopy

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::vk::TransferResource::StagingCopy::sourceOffet

## BRIEF

## CONTENT

Тип: VkDeviceSize


# ::stappler::xenolith::vk::TransferResource::StagingCopy::sourceSize

## BRIEF

## CONTENT

Тип: VkDeviceSize


# ::stappler::xenolith::vk::TransferResource::StagingCopy::targetImage

## BRIEF

## CONTENT

Тип: stappler::xenolith::vk::TransferResource::ImageAllocInfo*


# ::stappler::xenolith::vk::TransferResource::StagingCopy::targetBuffer

## BRIEF

## CONTENT

Тип: stappler::xenolith::vk::TransferResource::BufferAllocInfo*


# ::stappler::xenolith::vk::TransferResource::StagingBuffer

## BRIEF

## CONTENT

Доступ: public

Базовые классы:
* Ref


# ::stappler::xenolith::vk::TransferResource::StagingBuffer::~StagingBuffer()

## BRIEF

## CONTENT


# ::stappler::xenolith::vk::TransferResource::StagingBuffer::memoryTypeIndex

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::xenolith::vk::TransferResource::StagingBuffer::buffer

## BRIEF

## CONTENT

Тип: stappler::xenolith::vk::TransferResource::BufferAllocInfo


# ::stappler::xenolith::vk::TransferResource::StagingBuffer::copyData

## BRIEF

## CONTENT

Тип: Vector<stappler::xenolith::vk::TransferResource::StagingCopy>


# ::stappler::xenolith::vk::TransferResource::~TransferResource()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::vk::TransferResource::invalidate(stappler::xenolith::vk::Device&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::vk::Device&


# ::stappler::xenolith::vk::TransferResource::init(Rc<stappler::xenolith::vk::Allocator> const&,Rc<core::Resource> const&,Function<void (bool)>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Rc<stappler::xenolith::vk::Allocator> const&
* Rc<core::Resource> const&
* Function<void (bool)>&&

Возвращает:
* bool

# ::stappler::xenolith::vk::TransferResource::init(Rc<stappler::xenolith::vk::Allocator> const&,Rc<core::Resource>&&,Function<void (bool)>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Rc<stappler::xenolith::vk::Allocator> const&
* Rc<core::Resource>&&
* Function<void (bool)>&&

Возвращает:
* bool

# ::stappler::xenolith::vk::TransferResource::initialize(stappler::xenolith::vk::AllocationUsage)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::vk::AllocationUsage

Возвращает:
* bool

# ::stappler::xenolith::vk::TransferResource::compile()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::vk::TransferResource::prepareCommands(uint32_t,VkCommandBuffer,Vector<VkImageMemoryBarrier>&,Vector<VkBufferMemoryBarrier>&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint32_t
* VkCommandBuffer
* Vector<VkImageMemoryBarrier>&
* Vector<VkBufferMemoryBarrier>&

Возвращает:
* bool

# ::stappler::xenolith::vk::TransferResource::transfer(Rc<stappler::xenolith::vk::DeviceQueue> const&,Rc<stappler::xenolith::vk::CommandPool> const&,Rc<stappler::xenolith::vk::Fence> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Rc<stappler::xenolith::vk::DeviceQueue> const&
* Rc<stappler::xenolith::vk::CommandPool> const&
* Rc<stappler::xenolith::vk::Fence> const&

Возвращает:
* bool

# ::stappler::xenolith::vk::TransferResource::isValid() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::vk::TransferResource::isStagingRequired() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::vk::TransferResource::allocate()

## BRIEF

## CONTENT

Доступ: protected

Возвращает:
* bool

# ::stappler::xenolith::vk::TransferResource::upload()

## BRIEF

## CONTENT

Доступ: protected

Возвращает:
* bool

# ::stappler::xenolith::vk::TransferResource::allocateDedicated(Rc<stappler::xenolith::vk::Allocator> const&,stappler::xenolith::vk::TransferResource::BufferAllocInfo&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* Rc<stappler::xenolith::vk::Allocator> const&
* stappler::xenolith::vk::TransferResource::BufferAllocInfo&

Возвращает:
* bool

# ::stappler::xenolith::vk::TransferResource::allocateDedicated(Rc<stappler::xenolith::vk::Allocator> const&,stappler::xenolith::vk::TransferResource::ImageAllocInfo&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* Rc<stappler::xenolith::vk::Allocator> const&
* stappler::xenolith::vk::TransferResource::ImageAllocInfo&

Возвращает:
* bool

# ::stappler::xenolith::vk::TransferResource::writeData(uint8_t*,stappler::xenolith::vk::TransferResource::BufferAllocInfo&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* uint8_t*
* stappler::xenolith::vk::TransferResource::BufferAllocInfo&

Возвращает:
* size_t

# ::stappler::xenolith::vk::TransferResource::writeData(uint8_t*,stappler::xenolith::vk::TransferResource::ImageAllocInfo&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* uint8_t*
* stappler::xenolith::vk::TransferResource::ImageAllocInfo&

Возвращает:
* size_t

# ::stappler::xenolith::vk::TransferResource::preTransferData()

## BRIEF

## CONTENT

Доступ: protected

Возвращает:
* size_t

# ::stappler::xenolith::vk::TransferResource::createStagingBuffer(stappler::xenolith::vk::TransferResource::StagingBuffer&,size_t) const

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::vk::TransferResource::StagingBuffer&
* size_t

Возвращает:
* bool

# ::stappler::xenolith::vk::TransferResource::writeStaging(stappler::xenolith::vk::TransferResource::StagingBuffer&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::vk::TransferResource::StagingBuffer&

Возвращает:
* bool

# ::stappler::xenolith::vk::TransferResource::dropStaging(stappler::xenolith::vk::TransferResource::StagingBuffer&) const

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::vk::TransferResource::StagingBuffer&


# ::stappler::xenolith::vk::TransferResource::_memType

## BRIEF

## CONTENT

Доступ: protected

Тип: Allocator::MemType*


# ::stappler::xenolith::vk::TransferResource::_requiredMemory

## BRIEF

## CONTENT

Доступ: protected

Тип: VkDeviceSize


# ::stappler::xenolith::vk::TransferResource::_alloc

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::xenolith::vk::Allocator>


# ::stappler::xenolith::vk::TransferResource::_resource

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<core::Resource>


# ::stappler::xenolith::vk::TransferResource::_memory

## BRIEF

## CONTENT

Доступ: protected

Тип: VkDeviceMemory


# ::stappler::xenolith::vk::TransferResource::_buffers

## BRIEF

## CONTENT

Доступ: protected

Тип: Vector<stappler::xenolith::vk::TransferResource::BufferAllocInfo>


# ::stappler::xenolith::vk::TransferResource::_images

## BRIEF

## CONTENT

Доступ: protected

Тип: Vector<stappler::xenolith::vk::TransferResource::ImageAllocInfo>


# ::stappler::xenolith::vk::TransferResource::_nonCoherentAtomSize

## BRIEF

## CONTENT

Доступ: protected

Тип: VkDeviceSize


# ::stappler::xenolith::vk::TransferResource::_stagingBuffer

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::vk::TransferResource::StagingBuffer


# ::stappler::xenolith::vk::TransferResource::_callback

## BRIEF

## CONTENT

Доступ: protected

Тип: Function<void (bool)>


# ::stappler::xenolith::vk::TransferResource::_initialized

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::vk::TransferResource::_targetUsage

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::vk::AllocationUsage


# ::stappler::xenolith::vk::TransferQueue

## BRIEF

## CONTENT

Базовые классы:
* core::Queue


# ::stappler::xenolith::vk::TransferQueue::~TransferQueue()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::vk::TransferQueue::init()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::vk::TransferQueue::makeRequest(Rc<stappler::xenolith::vk::TransferResource>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Rc<stappler::xenolith::vk::TransferResource>&&

Возвращает:
* Rc<stappler::xenolith::core::Queue::FrameRequest>

# ::stappler::xenolith::vk::TransferQueue::_attachment

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::core::Queue::AttachmentData const*
