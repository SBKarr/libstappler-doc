Title: XLVkDevice.h


# XENOLITH_BACKEND_VK_XLVKDEVICE_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::vk::DeviceFrameHandle

## BRIEF

## CONTENT

Базовые классы:
* core::FrameHandle


# ::stappler::xenolith::vk::DeviceFrameHandle::~DeviceFrameHandle()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::vk::DeviceFrameHandle::init(stappler::xenolith::vk::Loop&,stappler::xenolith::vk::Device&,Rc<stappler::xenolith::core::FrameHandle::FrameRequest>&&,uint64_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::vk::Loop&
* stappler::xenolith::vk::Device&
* Rc<stappler::xenolith::core::FrameHandle::FrameRequest>&&
* uint64_t

Возвращает:
* bool

# ::stappler::xenolith::vk::DeviceFrameHandle::getAllocator() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Rc<stappler::xenolith::vk::Allocator> const&

# ::stappler::xenolith::vk::DeviceFrameHandle::getMemPool(void*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* void*

Возвращает:
* Rc<stappler::xenolith::vk::DeviceMemoryPool> const&

# ::stappler::xenolith::vk::DeviceFrameHandle::_allocator

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::xenolith::vk::Allocator>


# ::stappler::xenolith::vk::DeviceFrameHandle::_mutex

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::mem_std::Mutex


# ::stappler::xenolith::vk::DeviceFrameHandle::_memPools

## BRIEF

## CONTENT

Доступ: protected

Тип: Map<void *, Rc<stappler::xenolith::vk::DeviceMemoryPool>>


# ::stappler::xenolith::vk::Device

## BRIEF

## CONTENT

Базовые классы:
* core::Device


# ::stappler::xenolith::vk::Device::Features

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::vk::Device::Properties

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::vk::Device::FrameHandle

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::vk::Device::Device()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::vk::Device::~Device()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::vk::Device::init(vk::Instance const*,stappler::xenolith::vk::DeviceInfo&&,stappler::xenolith::vk::Device::Features const&,Vector<stappler::StringView> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* vk::Instance const*
* stappler::xenolith::vk::DeviceInfo&&
* stappler::xenolith::vk::Device::Features const&
* Vector<stappler::StringView> const&

Возвращает:
* bool

# ::stappler::xenolith::vk::Device::getInstance() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::vk::Instance const*

# ::stappler::xenolith::vk::Device::getDevice() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* VkDevice

# ::stappler::xenolith::vk::Device::getPhysicalDevice() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* VkPhysicalDevice

# ::stappler::xenolith::vk::Device::begin(stappler::xenolith::vk::Loop&,thread::TaskQueue&,Function<void (bool)>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::vk::Loop&
* thread::TaskQueue&
* Function<void (bool)>&&


# ::stappler::xenolith::vk::Device::end()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::vk::Device::getInfo() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::vk::DeviceInfo const&

# ::stappler::xenolith::vk::Device::getTable() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::vk::DeviceTable const*

# ::stappler::xenolith::vk::Device::getAllocator() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Rc<stappler::xenolith::vk::Allocator> const&

# ::stappler::xenolith::vk::Device::getQueueFamily(uint32_t) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint32_t

Возвращает:
* stappler::xenolith::vk::DeviceQueueFamily const*

# ::stappler::xenolith::vk::Device::getQueueFamily(stappler::xenolith::vk::QueueOperations) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::vk::QueueOperations

Возвращает:
* stappler::xenolith::vk::DeviceQueueFamily const*

# ::stappler::xenolith::vk::Device::getQueueFamily(core::PassType) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* core::PassType

Возвращает:
* stappler::xenolith::vk::DeviceQueueFamily const*

# ::stappler::xenolith::vk::Device::getQueueFamilies() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Vector<stappler::xenolith::vk::DeviceQueueFamily> const&

# ::stappler::xenolith::vk::Device::acquireQueue(stappler::xenolith::vk::QueueOperations,stappler::xenolith::vk::Device::FrameHandle&,Function<void (stappler::xenolith::vk::Device::FrameHandle &, const Rc<stappler::xenolith::vk::DeviceQueue> &)>&&,Function<void (stappler::xenolith::vk::Device::FrameHandle &)>&&,Rc<stappler::mem_std::Ref>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::vk::QueueOperations
* stappler::xenolith::vk::Device::FrameHandle&
* Function<void (stappler::xenolith::vk::Device::FrameHandle &, const Rc<stappler::xenolith::vk::DeviceQueue> &)>&&
* Function<void (stappler::xenolith::vk::Device::FrameHandle &)>&&
* Rc<stappler::mem_std::Ref>&&

Возвращает:
* bool

# ::stappler::xenolith::vk::Device::acquireQueue(stappler::xenolith::vk::QueueOperations,stappler::xenolith::vk::Loop&,Function<void (stappler::xenolith::vk::Loop &, const Rc<stappler::xenolith::vk::DeviceQueue> &)>&&,Function<void (stappler::xenolith::vk::Loop &)>&&,Rc<stappler::mem_std::Ref>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::vk::QueueOperations
* stappler::xenolith::vk::Loop&
* Function<void (stappler::xenolith::vk::Loop &, const Rc<stappler::xenolith::vk::DeviceQueue> &)>&&
* Function<void (stappler::xenolith::vk::Loop &)>&&
* Rc<stappler::mem_std::Ref>&&

Возвращает:
* bool

# ::stappler::xenolith::vk::Device::releaseQueue(Rc<stappler::xenolith::vk::DeviceQueue>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Rc<stappler::xenolith::vk::DeviceQueue>&&


# ::stappler::xenolith::vk::Device::tryAcquireQueueSync(stappler::xenolith::vk::QueueOperations,bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::vk::QueueOperations
* bool

Возвращает:
* Rc<stappler::xenolith::vk::DeviceQueue>

# ::stappler::xenolith::vk::Device::acquireCommandPool(stappler::xenolith::vk::QueueOperations,uint32_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::vk::QueueOperations
* uint32_t

Возвращает:
* Rc<stappler::xenolith::vk::CommandPool>

# ::stappler::xenolith::vk::Device::acquireCommandPool(uint32_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint32_t

Возвращает:
* Rc<stappler::xenolith::vk::CommandPool>

# ::stappler::xenolith::vk::Device::releaseCommandPool(core::Loop&,Rc<stappler::xenolith::vk::CommandPool>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* core::Loop&
* Rc<stappler::xenolith::vk::CommandPool>&&


# ::stappler::xenolith::vk::Device::releaseCommandPoolUnsafe(Rc<stappler::xenolith::vk::CommandPool>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Rc<stappler::xenolith::vk::CommandPool>&&


# ::stappler::xenolith::vk::Device::getTextureSetLayout() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Rc<stappler::xenolith::vk::TextureSetLayout> const&

# ::stappler::xenolith::vk::Device::emplaceConstant(core::PredefinedConstant,stappler::mem_std::Bytes&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* core::PredefinedConstant
* stappler::mem_std::Bytes&

Возвращает:
* stappler::BytesView

# ::stappler::xenolith::vk::Device::supportsUpdateAfterBind(stappler::xenolith::core::Device::DescriptorType) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::Device::DescriptorType

Возвращает:
* bool

# ::stappler::xenolith::vk::Device::getEmptyImageObject() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Rc<core::ImageObject>

# ::stappler::xenolith::vk::Device::getSolidImageObject() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Rc<core::ImageObject>

# ::stappler::xenolith::vk::Device::makeFramebuffer(core::QueuePassData const*,SpanView<Rc<core::ImageView>>)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* core::QueuePassData const*
* SpanView<Rc<core::ImageView>>

Возвращает:
* Rc<core::Framebuffer>

# ::stappler::xenolith::vk::Device::makeImage(stappler::xenolith::vk::ImageInfoData const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::vk::ImageInfoData const&

Возвращает:
* Rc<stappler::xenolith::core::Device::ImageStorage>

# ::stappler::xenolith::vk::Device::makeSemaphore()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Rc<core::Semaphore>

# ::stappler::xenolith::vk::Device::makeImageView(Rc<core::ImageObject> const&,stappler::xenolith::vk::ImageViewInfo const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Rc<core::ImageObject> const&
* stappler::xenolith::vk::ImageViewInfo const&

Возвращает:
* Rc<core::ImageView>

# ::stappler::xenolith::vk::Device::makeApiCall<typename>(Callback const&)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename Callback

Параметры:
* Callback const&


# ::stappler::xenolith::vk::Device::hasNonSolidFillMode() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::vk::Device::hasDynamicIndexedBuffers() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::vk::Device::waitIdle() const

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::vk::Device::compileImage(stappler::xenolith::vk::Loop const&,Rc<core::DynamicImage> const&,Function<void (bool)>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::vk::Loop const&
* Rc<core::DynamicImage> const&
* Function<void (bool)>&&


# ::stappler::xenolith::vk::Device::compileSamplers(thread::TaskQueue&,bool)

## BRIEF

## CONTENT

Доступ: private

Параметры:
* thread::TaskQueue&
* bool


# ::stappler::xenolith::vk::Device::setup(stappler::xenolith::vk::Instance const*,VkPhysicalDevice,stappler::xenolith::vk::Device::Properties const&,Vector<stappler::xenolith::vk::DeviceQueueFamily> const&,stappler::xenolith::vk::Device::Features const&,Vector<stappler::StringView> const&)

## BRIEF

## CONTENT

Доступ: private

Параметры:
* stappler::xenolith::vk::Instance const*
* VkPhysicalDevice
* stappler::xenolith::vk::Device::Properties const&
* Vector<stappler::xenolith::vk::DeviceQueueFamily> const&
* stappler::xenolith::vk::Device::Features const&
* Vector<stappler::StringView> const&

Возвращает:
* bool

# ::stappler::xenolith::vk::Device::_vkInstance

## BRIEF

## CONTENT

Доступ: private

Тип: vk::Instance const*


# ::stappler::xenolith::vk::Device::_table

## BRIEF

## CONTENT

Доступ: private

Тип: stappler::xenolith::vk::DeviceTable const*


# ::stappler::xenolith::vk::Device::_device

## BRIEF

## CONTENT

Доступ: private

Тип: VkDevice


# ::stappler::xenolith::vk::Device::_info

## BRIEF

## CONTENT

Доступ: private

Тип: stappler::xenolith::vk::DeviceInfo


# ::stappler::xenolith::vk::Device::_enabledFeatures

## BRIEF

## CONTENT

Доступ: private

Тип: Features


# ::stappler::xenolith::vk::Device::_allocator

## BRIEF

## CONTENT

Доступ: private

Тип: Rc<stappler::xenolith::vk::Allocator>


# ::stappler::xenolith::vk::Device::_textureSetLayout

## BRIEF

## CONTENT

Доступ: private

Тип: Rc<stappler::xenolith::vk::TextureSetLayout>


# ::stappler::xenolith::vk::Device::_families

## BRIEF

## CONTENT

Доступ: private

Тип: Vector<stappler::xenolith::vk::DeviceQueueFamily>


# ::stappler::xenolith::vk::Device::_finished

## BRIEF

## CONTENT

Доступ: private

Тип: bool


# ::stappler::xenolith::vk::Device::_immutableSamplers

## BRIEF

## CONTENT

Доступ: private

Тип: Vector<VkSampler>


# ::stappler::xenolith::vk::Device::_samplers

## BRIEF

## CONTENT

Доступ: private

Тип: Vector<Rc<stappler::xenolith::vk::Sampler>>


# ::stappler::xenolith::vk::Device::_compiledSamplers

## BRIEF

## CONTENT

Доступ: private

Тип: size_t


# ::stappler::xenolith::vk::Device::_samplersCompiled

## BRIEF

## CONTENT

Доступ: private

Тип: std::atomic<bool>


# ::stappler::xenolith::vk::Device::_formats

## BRIEF

## CONTENT

Доступ: private

Тип: std::unordered_map<VkFormat, VkFormatProperties>


# ::stappler::xenolith::vk::Device::_resourceMutex

## BRIEF

## CONTENT

Доступ: private

Тип: stappler::mem_std::Mutex


# ::stappler::xenolith::vk::Device::_resourceQueueWaiters

## BRIEF

## CONTENT

Доступ: private

Тип: uint32_t


# ::stappler::xenolith::vk::Device::_resourceQueueCond

## BRIEF

## CONTENT

Доступ: private

Тип: std::condition_variable


# ::stappler::xenolith::vk::Device::_apiMutex

## BRIEF

## CONTENT

Доступ: private

Тип: stappler::mem_std::Mutex
