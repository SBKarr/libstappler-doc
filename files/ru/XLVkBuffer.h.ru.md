Title: XLVkBuffer.h


# XENOLITH_BACKEND_VK_XLVKBUFFER_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::vk::DeviceBuffer

## BRIEF

## CONTENT

Базовые классы:
* Buffer


# ::stappler::xenolith::vk::DeviceBuffer::MappedRegion

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::vk::DeviceBuffer::MappedRegion::ptr

## BRIEF

## CONTENT

Тип: uint8_t*


# ::stappler::xenolith::vk::DeviceBuffer::MappedRegion::offset

## BRIEF

## CONTENT

Тип: VkDeviceSize


# ::stappler::xenolith::vk::DeviceBuffer::MappedRegion::size

## BRIEF

## CONTENT

Тип: VkDeviceSize


# ::stappler::xenolith::vk::DeviceBuffer::~DeviceBuffer()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::vk::DeviceBuffer::init(stappler::xenolith::vk::DeviceMemoryPool*,VkBuffer,Allocator::MemBlock&&,stappler::xenolith::vk::AllocationUsage,stappler::xenolith::vk::BufferInfo const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::vk::DeviceMemoryPool*
* VkBuffer
* Allocator::MemBlock&&
* stappler::xenolith::vk::AllocationUsage
* stappler::xenolith::vk::BufferInfo const&

Возвращает:
* bool

# ::stappler::xenolith::vk::DeviceBuffer::invalidate(stappler::xenolith::vk::Device&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::vk::Device&


# ::stappler::xenolith::vk::DeviceBuffer::setData(stappler::BytesView,VkDeviceSize)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::BytesView
* VkDeviceSize

Возвращает:
* bool

# ::stappler::xenolith::vk::DeviceBuffer::getData(VkDeviceSize,VkDeviceSize)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* VkDeviceSize
* VkDeviceSize

Возвращает:
* stappler::mem_std::Bytes

# ::stappler::xenolith::vk::DeviceBuffer::map(VkDeviceSize,VkDeviceSize,bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* VkDeviceSize
* VkDeviceSize
* bool

Возвращает:
* stappler::xenolith::vk::DeviceBuffer::MappedRegion

# ::stappler::xenolith::vk::DeviceBuffer::unmap(stappler::xenolith::vk::DeviceBuffer::MappedRegion const&,bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::vk::DeviceBuffer::MappedRegion const&
* bool


# ::stappler::xenolith::vk::DeviceBuffer::getBuffer() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* VkBuffer

# ::stappler::xenolith::vk::DeviceBuffer::getSize() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* VkDeviceSize

# ::stappler::xenolith::vk::DeviceBuffer::getUsage() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::vk::BufferInfo const&

# ::stappler::xenolith::vk::DeviceBuffer::reserveBlock(uint64_t,uint64_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint64_t
* uint64_t

Возвращает:
* uint64_t

# ::stappler::xenolith::vk::DeviceBuffer::getReservedSize() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint64_t

# ::stappler::xenolith::vk::DeviceBuffer::_targetOffset

## BRIEF

## CONTENT

Доступ: protected

Тип: std::atomic<uint64_t>


# ::stappler::xenolith::vk::DeviceBuffer::_usage

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::vk::AllocationUsage


# ::stappler::xenolith::vk::DeviceBuffer::_memory

## BRIEF

## CONTENT

Доступ: protected

Тип: Allocator::MemBlock


# ::stappler::xenolith::vk::DeviceBuffer::_needInvalidate

## BRIEF

## CONTENT

Доступ: protected

Тип: bool
