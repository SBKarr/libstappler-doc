Title: XLVkObject.h


# XENOLITH_BACKEND_VK_XLVKOBJECT_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::vk::DeviceMemory

## BRIEF

## CONTENT

Базовые классы:
* core::Object


# ::stappler::xenolith::vk::DeviceMemory::~DeviceMemory()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::vk::DeviceMemory::init(stappler::xenolith::vk::Device&,VkDeviceMemory)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::vk::Device&
* VkDeviceMemory

Возвращает:
* bool

# ::stappler::xenolith::vk::DeviceMemory::getMemory() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* VkDeviceMemory

# ::stappler::xenolith::vk::DeviceMemory::_memory

## BRIEF

## CONTENT

Доступ: protected

Тип: VkDeviceMemory


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


# ::stappler::xenolith::vk::Buffer::init(stappler::xenolith::vk::Device&,VkBuffer,stappler::xenolith::vk::BufferInfo const&,Rc<stappler::xenolith::vk::DeviceMemory>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::vk::Device&
* VkBuffer
* stappler::xenolith::vk::BufferInfo const&
* Rc<stappler::xenolith::vk::DeviceMemory>&&

Возвращает:
* bool

# ::stappler::xenolith::vk::Buffer::getBuffer() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* VkBuffer

# ::stappler::xenolith::vk::Buffer::getPool() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::vk::DeviceMemoryPool*

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


# ::stappler::xenolith::vk::Buffer::_memory

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::xenolith::vk::DeviceMemory>


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


# ::stappler::xenolith::vk::Buffer::_pool

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::vk::DeviceMemoryPool*


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
