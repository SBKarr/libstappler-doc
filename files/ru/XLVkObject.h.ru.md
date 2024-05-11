Title: XLVkObject.h


# XENOLITH_BACKEND_VK_XLVKOBJECT_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::vk::DeviceMemoryInfo

## BRIEF

## CONTENT


# ::stappler::xenolith::vk::DeviceMemoryInfo::size

## BRIEF

## CONTENT

Тип: VkDeviceSize


# ::stappler::xenolith::vk::DeviceMemoryInfo::alignment

## BRIEF

## CONTENT

Тип: VkDeviceSize


# ::stappler::xenolith::vk::DeviceMemoryInfo::memoryType

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::xenolith::vk::DeviceMemoryInfo::dedicated

## BRIEF

## CONTENT

Тип: bool


# ::stappler::xenolith::vk::DeviceMemoryAccess

## BRIEF

## CONTENT

Значения:
* None
* Invalidate
* Flush
* Full


# ::stappler::xenolith::vk::operator|(stappler::xenolith::vk::DeviceMemoryAccess const&,stappler::xenolith::vk::DeviceMemoryAccess const&)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::vk::DeviceMemoryAccess const&
* stappler::xenolith::vk::DeviceMemoryAccess const&

Возвращает:
* stappler::xenolith::vk::DeviceMemoryAccess

# ::stappler::xenolith::vk::operator&(stappler::xenolith::vk::DeviceMemoryAccess const&,stappler::xenolith::vk::DeviceMemoryAccess const&)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::vk::DeviceMemoryAccess const&
* stappler::xenolith::vk::DeviceMemoryAccess const&

Возвращает:
* stappler::xenolith::vk::DeviceMemoryAccess

# ::stappler::xenolith::vk::operator^(stappler::xenolith::vk::DeviceMemoryAccess const&,stappler::xenolith::vk::DeviceMemoryAccess const&)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::vk::DeviceMemoryAccess const&
* stappler::xenolith::vk::DeviceMemoryAccess const&

Возвращает:
* stappler::xenolith::vk::DeviceMemoryAccess

# ::stappler::xenolith::vk::operator|=(stappler::xenolith::vk::DeviceMemoryAccess&,stappler::xenolith::vk::DeviceMemoryAccess const&)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::vk::DeviceMemoryAccess&
* stappler::xenolith::vk::DeviceMemoryAccess const&

Возвращает:
* stappler::xenolith::vk::DeviceMemoryAccess&

# ::stappler::xenolith::vk::operator&=(stappler::xenolith::vk::DeviceMemoryAccess&,stappler::xenolith::vk::DeviceMemoryAccess const&)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::vk::DeviceMemoryAccess&
* stappler::xenolith::vk::DeviceMemoryAccess const&

Возвращает:
* stappler::xenolith::vk::DeviceMemoryAccess&

# ::stappler::xenolith::vk::operator^=(stappler::xenolith::vk::DeviceMemoryAccess&,stappler::xenolith::vk::DeviceMemoryAccess const&)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::vk::DeviceMemoryAccess&
* stappler::xenolith::vk::DeviceMemoryAccess const&

Возвращает:
* stappler::xenolith::vk::DeviceMemoryAccess&

# ::stappler::xenolith::vk::operator==(stappler::xenolith::vk::DeviceMemoryAccess const&,std::underlying_type<DeviceMemoryAccess>::type const&)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::vk::DeviceMemoryAccess const&
* std::underlying_type<DeviceMemoryAccess>::type const&

Возвращает:
* bool

# ::stappler::xenolith::vk::operator==(std::underlying_type<DeviceMemoryAccess>::type const&,stappler::xenolith::vk::DeviceMemoryAccess const&)

## BRIEF

## CONTENT

Параметры:
* std::underlying_type<DeviceMemoryAccess>::type const&
* stappler::xenolith::vk::DeviceMemoryAccess const&

Возвращает:
* bool

# ::stappler::xenolith::vk::operator!=(stappler::xenolith::vk::DeviceMemoryAccess const&,std::underlying_type<DeviceMemoryAccess>::type const&)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::vk::DeviceMemoryAccess const&
* std::underlying_type<DeviceMemoryAccess>::type const&

Возвращает:
* bool

# ::stappler::xenolith::vk::operator!=(std::underlying_type<DeviceMemoryAccess>::type const&,stappler::xenolith::vk::DeviceMemoryAccess const&)

## BRIEF

## CONTENT

Параметры:
* std::underlying_type<DeviceMemoryAccess>::type const&
* stappler::xenolith::vk::DeviceMemoryAccess const&

Возвращает:
* bool

# ::stappler::xenolith::vk::operator~(stappler::xenolith::vk::DeviceMemoryAccess const&)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::vk::DeviceMemoryAccess const&

Возвращает:
* stappler::xenolith::vk::DeviceMemoryAccess

# ::stappler::xenolith::vk::DeviceMemory

## BRIEF

## CONTENT

Базовые классы:
* core::Object


# ::stappler::xenolith::vk::DeviceMemory::~DeviceMemory()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::vk::DeviceMemory::init(stappler::xenolith::vk::Allocator*,stappler::xenolith::vk::DeviceMemoryInfo,VkDeviceMemory,stappler::xenolith::vk::AllocationUsage)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::vk::Allocator*
* stappler::xenolith::vk::DeviceMemoryInfo
* VkDeviceMemory
* stappler::xenolith::vk::AllocationUsage

Возвращает:
* bool

# ::stappler::xenolith::vk::DeviceMemory::init(stappler::xenolith::vk::DeviceMemoryPool*,Allocator::MemBlock&&,stappler::xenolith::vk::AllocationUsage)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::vk::DeviceMemoryPool*
* Allocator::MemBlock&&
* stappler::xenolith::vk::AllocationUsage

Возвращает:
* bool

# ::stappler::xenolith::vk::DeviceMemory::isPersistentMapped() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::vk::DeviceMemory::getPersistentMappedRegion() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint8_t*

# ::stappler::xenolith::vk::DeviceMemory::getInfo() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::vk::DeviceMemoryInfo const&

# ::stappler::xenolith::vk::DeviceMemory::getMemory() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* VkDeviceMemory

# ::stappler::xenolith::vk::DeviceMemory::getUsage() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::vk::AllocationUsage

# ::stappler::xenolith::vk::DeviceMemory::getPool() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::vk::DeviceMemoryPool*

# ::stappler::xenolith::vk::DeviceMemory::getBlockOffset() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* VkDeviceSize

# ::stappler::xenolith::vk::DeviceMemory::isMappable() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::vk::DeviceMemory::map(Callback<void (uint8_t *, VkDeviceSize)> const&,VkDeviceSize,VkDeviceSize,stappler::xenolith::vk::DeviceMemoryAccess)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Callback<void (uint8_t *, VkDeviceSize)> const&
* VkDeviceSize
* VkDeviceSize
* stappler::xenolith::vk::DeviceMemoryAccess

Возвращает:
* bool

# ::stappler::xenolith::vk::DeviceMemory::invalidateMappedRegion(VkDeviceSize,VkDeviceSize)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* VkDeviceSize
* VkDeviceSize


# ::stappler::xenolith::vk::DeviceMemory::flushMappedRegion(VkDeviceSize,VkDeviceSize)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* VkDeviceSize
* VkDeviceSize


# ::stappler::xenolith::vk::DeviceMemory::calculateMappedMemoryRange(VkDeviceSize,VkDeviceSize) const

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* VkDeviceSize
* VkDeviceSize

Возвращает:
* VkMappedMemoryRange

# ::stappler::xenolith::vk::DeviceMemory::_info

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::vk::DeviceMemoryInfo


# ::stappler::xenolith::vk::DeviceMemory::_pool

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::vk::DeviceMemoryPool*


# ::stappler::xenolith::vk::DeviceMemory::_memory

## BRIEF

## CONTENT

Доступ: protected

Тип: VkDeviceMemory


# ::stappler::xenolith::vk::DeviceMemory::_usage

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::vk::AllocationUsage


# ::stappler::xenolith::vk::DeviceMemory::_memBlock

## BRIEF

## CONTENT

Доступ: protected

Тип: Allocator::MemBlock


# ::stappler::xenolith::vk::DeviceMemory::_allocator

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::xenolith::vk::Allocator>


# ::stappler::xenolith::vk::DeviceMemory::_mappedOffset

## BRIEF

## CONTENT

Доступ: protected

Тип: VkDeviceSize


# ::stappler::xenolith::vk::DeviceMemory::_mappedSize

## BRIEF

## CONTENT

Доступ: protected

Тип: VkDeviceSize


# ::stappler::xenolith::vk::DeviceMemory::_mappingProtectionMutex

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::mem_std::Mutex


# ::stappler::xenolith::vk::Image

## BRIEF

## CONTENT

Базовые классы:
* core::ImageObject


# ::stappler::xenolith::vk::Image::~Image()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::vk::Image::init(stappler::xenolith::vk::Device&,VkImage,stappler::xenolith::vk::ImageInfoData const&,uint32_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::vk::Device&
* VkImage
* stappler::xenolith::vk::ImageInfoData const&
* uint32_t

Возвращает:
* bool

# ::stappler::xenolith::vk::Image::init(stappler::xenolith::vk::Device&,VkImage,stappler::xenolith::vk::ImageInfoData const&,Rc<stappler::xenolith::vk::DeviceMemory>&&,Rc<core::DataAtlas>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::vk::Device&
* VkImage
* stappler::xenolith::vk::ImageInfoData const&
* Rc<stappler::xenolith::vk::DeviceMemory>&&
* Rc<core::DataAtlas>&&

Возвращает:
* bool

# ::stappler::xenolith::vk::Image::init(stappler::xenolith::vk::Device&,uint64_t,VkImage,stappler::xenolith::vk::ImageInfoData const&,Rc<stappler::xenolith::vk::DeviceMemory>&&,Rc<core::DataAtlas>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::vk::Device&
* uint64_t
* VkImage
* stappler::xenolith::vk::ImageInfoData const&
* Rc<stappler::xenolith::vk::DeviceMemory>&&
* Rc<core::DataAtlas>&&

Возвращает:
* bool

# ::stappler::xenolith::vk::Image::getImage() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* VkImage

# ::stappler::xenolith::vk::Image::getMemory() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::vk::DeviceMemory*

# ::stappler::xenolith::vk::Image::setPendingBarrier(stappler::xenolith::vk::ImageMemoryBarrier const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::vk::ImageMemoryBarrier const&


# ::stappler::xenolith::vk::Image::getPendingBarrier() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::vk::ImageMemoryBarrier const*

# ::stappler::xenolith::vk::Image::dropPendingBarrier()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::vk::Image::getAspectMask() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* VkImageAspectFlags

# ::stappler::xenolith::vk::Image::bindMemory(Rc<stappler::xenolith::vk::DeviceMemory>&&,VkDeviceSize)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Rc<stappler::xenolith::vk::DeviceMemory>&&
* VkDeviceSize

Возвращает:
* bool

# ::stappler::xenolith::vk::Image::_memory

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::xenolith::vk::DeviceMemory>


# ::stappler::xenolith::vk::Image::_image

## BRIEF

## CONTENT

Доступ: protected

Тип: VkImage


# ::stappler::xenolith::vk::Image::_barrier

## BRIEF

## CONTENT

Доступ: protected

Тип: std::optional<ImageMemoryBarrier>


# ::stappler::xenolith::vk::Buffer

## BRIEF

## CONTENT

Базовые классы:
* core::BufferObject


# ::stappler::xenolith::vk::Buffer::~Buffer()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::vk::Buffer::init(stappler::xenolith::vk::Device&,VkBuffer,stappler::xenolith::vk::BufferInfo const&,Rc<stappler::xenolith::vk::DeviceMemory>&&,VkDeviceSize)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::vk::Device&
* VkBuffer
* stappler::xenolith::vk::BufferInfo const&
* Rc<stappler::xenolith::vk::DeviceMemory>&&
* VkDeviceSize

Возвращает:
* bool

# ::stappler::xenolith::vk::Buffer::getBuffer() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* VkBuffer

# ::stappler::xenolith::vk::Buffer::getMemory() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::vk::DeviceMemory*

# ::stappler::xenolith::vk::Buffer::setPendingBarrier(stappler::xenolith::vk::BufferMemoryBarrier const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::vk::BufferMemoryBarrier const&


# ::stappler::xenolith::vk::Buffer::getPendingBarrier() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::vk::BufferMemoryBarrier const*

# ::stappler::xenolith::vk::Buffer::dropPendingBarrier()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::vk::Buffer::bindMemory(Rc<stappler::xenolith::vk::DeviceMemory>&&,VkDeviceSize)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Rc<stappler::xenolith::vk::DeviceMemory>&&
* VkDeviceSize

Возвращает:
* bool

# ::stappler::xenolith::vk::Buffer::map(Callback<void (uint8_t *, VkDeviceSize)> const&,VkDeviceSize,VkDeviceSize,stappler::xenolith::vk::DeviceMemoryAccess)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Callback<void (uint8_t *, VkDeviceSize)> const&
* VkDeviceSize
* VkDeviceSize
* stappler::xenolith::vk::DeviceMemoryAccess

Возвращает:
* bool

# ::stappler::xenolith::vk::Buffer::getPersistentMappedRegion(bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* bool

Возвращает:
* uint8_t*

# ::stappler::xenolith::vk::Buffer::invalidateMappedRegion(VkDeviceSize,VkDeviceSize)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* VkDeviceSize
* VkDeviceSize


# ::stappler::xenolith::vk::Buffer::flushMappedRegion(VkDeviceSize,VkDeviceSize)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* VkDeviceSize
* VkDeviceSize


# ::stappler::xenolith::vk::Buffer::setData(stappler::BytesView,VkDeviceSize)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::BytesView
* VkDeviceSize

Возвращает:
* bool

# ::stappler::xenolith::vk::Buffer::getData(VkDeviceSize,VkDeviceSize)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* VkDeviceSize
* VkDeviceSize

Возвращает:
* stappler::mem_std::Bytes

# ::stappler::xenolith::vk::Buffer::reserveBlock(uint64_t,uint64_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint64_t
* uint64_t

Возвращает:
* uint64_t

# ::stappler::xenolith::vk::Buffer::getReservedSize() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint64_t

# ::stappler::xenolith::vk::Buffer::_memory

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::xenolith::vk::DeviceMemory>


# ::stappler::xenolith::vk::Buffer::_memoryOffset

## BRIEF

## CONTENT

Доступ: protected

Тип: VkDeviceSize


# ::stappler::xenolith::vk::Buffer::_buffer

## BRIEF

## CONTENT

Доступ: protected

Тип: VkBuffer


# ::stappler::xenolith::vk::Buffer::_barrier

## BRIEF

## CONTENT

Доступ: protected

Тип: std::optional<BufferMemoryBarrier>


# ::stappler::xenolith::vk::Buffer::_targetOffset

## BRIEF

## CONTENT

Доступ: protected

Тип: std::atomic<uint64_t>


# ::stappler::xenolith::vk::ImageView

## BRIEF

## CONTENT

Базовые классы:
* core::ImageView


# ::stappler::xenolith::vk::ImageView::~ImageView()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::vk::ImageView::init(stappler::xenolith::vk::Device&,VkImage,VkFormat)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::vk::Device&
* VkImage
* VkFormat

Возвращает:
* bool

# ::stappler::xenolith::vk::ImageView::init(stappler::xenolith::vk::Device&,stappler::xenolith::vk::Image*,stappler::xenolith::vk::ImageViewInfo const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::vk::Device&
* stappler::xenolith::vk::Image*
* stappler::xenolith::vk::ImageViewInfo const&

Возвращает:
* bool

# ::stappler::xenolith::vk::ImageView::getImageView() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* VkImageView

# ::stappler::xenolith::vk::ImageView::_imageView

## BRIEF

## CONTENT

Доступ: protected

Тип: VkImageView


# ::stappler::xenolith::vk::Sampler

## BRIEF

## CONTENT

Базовые классы:
* core::Sampler


# ::stappler::xenolith::vk::Sampler::~Sampler()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::vk::Sampler::init(stappler::xenolith::vk::Device&,stappler::xenolith::vk::SamplerInfo const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::vk::Device&
* stappler::xenolith::vk::SamplerInfo const&

Возвращает:
* bool

# ::stappler::xenolith::vk::Sampler::getSampler() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* VkSampler

# ::stappler::xenolith::vk::Sampler::_sampler

## BRIEF

## CONTENT

Доступ: protected

Тип: VkSampler
