Title: XLVkSwapchain.h


# XENOLITH_BACKEND_VKGUI_XLVKSWAPCHAIN_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::vk::Surface

## BRIEF

## CONTENT

Базовые классы:
* Ref


# ::stappler::xenolith::vk::Surface::~Surface()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::vk::Surface::init(stappler::xenolith::vk::Instance*,VkSurfaceKHR,stappler::mem_std::Ref*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::vk::Instance*
* VkSurfaceKHR
* stappler::mem_std::Ref*

Возвращает:
* bool

# ::stappler::xenolith::vk::Surface::getSurface() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* VkSurfaceKHR

# ::stappler::xenolith::vk::Surface::_window

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::mem_std::Ref>


# ::stappler::xenolith::vk::Surface::_instance

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::xenolith::vk::Instance>


# ::stappler::xenolith::vk::Surface::_surface

## BRIEF

## CONTENT

Доступ: protected

Тип: VkSurfaceKHR


# ::stappler::xenolith::vk::SwapchainHandle

## BRIEF

## CONTENT

Базовые классы:
* core::Object


# ::stappler::xenolith::vk::SwapchainHandle::ImageStorage

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::vk::SwapchainHandle::SwapchainImageData

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::vk::SwapchainHandle::SwapchainImageData::image

## BRIEF

## CONTENT

Тип: Rc<stappler::xenolith::vk::Image>


# ::stappler::xenolith::vk::SwapchainHandle::SwapchainImageData::views

## BRIEF

## CONTENT

Тип: Map<stappler::xenolith::vk::ImageViewInfo, Rc<stappler::xenolith::vk::ImageView>>


# ::stappler::xenolith::vk::SwapchainHandle::SwapchainAcquiredImage

## BRIEF

## CONTENT

Доступ: public

Базовые классы:
* Ref


# ::stappler::xenolith::vk::SwapchainHandle::SwapchainAcquiredImage::imageIndex

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::xenolith::vk::SwapchainHandle::SwapchainAcquiredImage::data

## BRIEF

## CONTENT

Тип: stappler::xenolith::vk::SwapchainHandle::SwapchainImageData const*


# ::stappler::xenolith::vk::SwapchainHandle::SwapchainAcquiredImage::sem

## BRIEF

## CONTENT

Тип: Rc<stappler::xenolith::vk::Semaphore>


# ::stappler::xenolith::vk::SwapchainHandle::SwapchainAcquiredImage::swapchain

## BRIEF

## CONTENT

Тип: Rc<stappler::xenolith::vk::SwapchainHandle>


# ::stappler::xenolith::vk::SwapchainHandle::SwapchainAcquiredImage::SwapchainAcquiredImage(uint32_t,stappler::xenolith::vk::SwapchainHandle::SwapchainImageData const*,Rc<stappler::xenolith::vk::Semaphore>&&,Rc<stappler::xenolith::vk::SwapchainHandle>&&)

## BRIEF

## CONTENT

Параметры:
* uint32_t
* stappler::xenolith::vk::SwapchainHandle::SwapchainImageData const*
* Rc<stappler::xenolith::vk::Semaphore>&&
* Rc<stappler::xenolith::vk::SwapchainHandle>&&


# ::stappler::xenolith::vk::SwapchainHandle::~SwapchainHandle()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::vk::SwapchainHandle::init(stappler::xenolith::vk::Device&,core::SurfaceInfo const&,core::SwapchainConfig const&,stappler::xenolith::vk::ImageInfo&&,core::PresentMode,stappler::xenolith::vk::Surface*,uint32_t[2],stappler::xenolith::vk::SwapchainHandle*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::vk::Device&
* core::SurfaceInfo const&
* core::SwapchainConfig const&
* stappler::xenolith::vk::ImageInfo&&
* core::PresentMode
* stappler::xenolith::vk::Surface*
* uint32_t[2]
* stappler::xenolith::vk::SwapchainHandle*

Возвращает:
* bool

# ::stappler::xenolith::vk::SwapchainHandle::getPresentMode() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* core::PresentMode

# ::stappler::xenolith::vk::SwapchainHandle::getRebuildMode() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* core::PresentMode

# ::stappler::xenolith::vk::SwapchainHandle::getImageInfo() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::vk::ImageInfo const&

# ::stappler::xenolith::vk::SwapchainHandle::getConfig() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* core::SwapchainConfig const&

# ::stappler::xenolith::vk::SwapchainHandle::getSurfaceInfo() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* core::SurfaceInfo const&

# ::stappler::xenolith::vk::SwapchainHandle::getSwapchain() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* VkSwapchainKHR

# ::stappler::xenolith::vk::SwapchainHandle::getAcquiredImagesCount() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint32_t

# ::stappler::xenolith::vk::SwapchainHandle::getPresentedFramesCount() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint64_t

# ::stappler::xenolith::vk::SwapchainHandle::getImages() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Vector<stappler::xenolith::vk::SwapchainHandle::SwapchainImageData> const&

# ::stappler::xenolith::vk::SwapchainHandle::isDeprecated()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::vk::SwapchainHandle::isOptimal() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::vk::SwapchainHandle::deprecate(bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* bool

Возвращает:
* bool

# ::stappler::xenolith::vk::SwapchainHandle::acquire(bool,Rc<stappler::xenolith::vk::Fence> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* bool
* Rc<stappler::xenolith::vk::Fence> const&

Возвращает:
* Rc<stappler::xenolith::vk::SwapchainHandle::SwapchainAcquiredImage>

# ::stappler::xenolith::vk::SwapchainHandle::present(stappler::xenolith::vk::DeviceQueue&,Rc<stappler::xenolith::vk::SwapchainHandle::ImageStorage> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::vk::DeviceQueue&
* Rc<stappler::xenolith::vk::SwapchainHandle::ImageStorage> const&

Возвращает:
* VkResult

# ::stappler::xenolith::vk::SwapchainHandle::invalidateImage(stappler::xenolith::vk::SwapchainHandle::ImageStorage const*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::vk::SwapchainHandle::ImageStorage const*


# ::stappler::xenolith::vk::SwapchainHandle::acquireSemaphore()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Rc<stappler::xenolith::vk::Semaphore>

# ::stappler::xenolith::vk::SwapchainHandle::releaseSemaphore(Rc<stappler::xenolith::vk::Semaphore>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Rc<stappler::xenolith::vk::Semaphore>&&


# ::stappler::xenolith::vk::SwapchainHandle::makeView(Rc<core::ImageObject> const&,stappler::xenolith::vk::ImageViewInfo const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Rc<core::ImageObject> const&
* stappler::xenolith::vk::ImageViewInfo const&

Возвращает:
* Rc<core::ImageView>

# ::stappler::xenolith::vk::SwapchainHandle::getSwapchainImageViewInfo(stappler::xenolith::vk::ImageInfo const&) const

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::vk::ImageInfo const&

Возвращает:
* stappler::xenolith::vk::ImageViewInfo

# ::stappler::xenolith::vk::SwapchainHandle::_device

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::vk::Device*


# ::stappler::xenolith::vk::SwapchainHandle::_deprecated

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::vk::SwapchainHandle::_presentMode

## BRIEF

## CONTENT

Доступ: protected

Тип: core::PresentMode


# ::stappler::xenolith::vk::SwapchainHandle::_imageInfo

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::vk::ImageInfo


# ::stappler::xenolith::vk::SwapchainHandle::_surfaceInfo

## BRIEF

## CONTENT

Доступ: protected

Тип: core::SurfaceInfo


# ::stappler::xenolith::vk::SwapchainHandle::_config

## BRIEF

## CONTENT

Доступ: protected

Тип: core::SwapchainConfig


# ::stappler::xenolith::vk::SwapchainHandle::_swapchain

## BRIEF

## CONTENT

Доступ: protected

Тип: VkSwapchainKHR


# ::stappler::xenolith::vk::SwapchainHandle::_images

## BRIEF

## CONTENT

Доступ: protected

Тип: Vector<stappler::xenolith::vk::SwapchainHandle::SwapchainImageData>


# ::stappler::xenolith::vk::SwapchainHandle::_acquiredImages

## BRIEF

## CONTENT

Доступ: protected

Тип: uint32_t


# ::stappler::xenolith::vk::SwapchainHandle::_presentedFrames

## BRIEF

## CONTENT

Доступ: protected

Тип: uint64_t


# ::stappler::xenolith::vk::SwapchainHandle::_presentTime

## BRIEF

## CONTENT

Доступ: protected

Тип: uint64_t


# ::stappler::xenolith::vk::SwapchainHandle::_rebuildMode

## BRIEF

## CONTENT

Доступ: protected

Тип: core::PresentMode


# ::stappler::xenolith::vk::SwapchainHandle::_resourceMutex

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::mem_std::Mutex


# ::stappler::xenolith::vk::SwapchainHandle::_semaphores

## BRIEF

## CONTENT

Доступ: protected

Тип: Vector<Rc<stappler::xenolith::vk::Semaphore>>


# ::stappler::xenolith::vk::SwapchainHandle::_presentSemaphores

## BRIEF

## CONTENT

Доступ: protected

Тип: Vector<Rc<stappler::xenolith::vk::Semaphore>>


# ::stappler::xenolith::vk::SwapchainHandle::_surface

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::xenolith::vk::Surface>


# ::stappler::xenolith::vk::SwapchainImage

## BRIEF

## CONTENT

Базовые классы:
* core::ImageStorage


# ::stappler::xenolith::vk::SwapchainImage::State

## BRIEF

## CONTENT

Доступ: public

Значения:
* Initial
* Submitted
* Presented


# ::stappler::xenolith::vk::SwapchainImage::~SwapchainImage()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::vk::SwapchainImage::init(Rc<stappler::xenolith::vk::SwapchainHandle>&&,uint64_t,uint64_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Rc<stappler::xenolith::vk::SwapchainHandle>&&
* uint64_t
* uint64_t

Возвращает:
* bool

# ::stappler::xenolith::vk::SwapchainImage::init(Rc<stappler::xenolith::vk::SwapchainHandle>&&,SwapchainHandle::SwapchainImageData const&,Rc<stappler::xenolith::vk::Semaphore>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Rc<stappler::xenolith::vk::SwapchainHandle>&&
* SwapchainHandle::SwapchainImageData const&
* Rc<stappler::xenolith::vk::Semaphore>&&

Возвращает:
* bool

# ::stappler::xenolith::vk::SwapchainImage::cleanup()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::vk::SwapchainImage::rearmSemaphores(core::Loop&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* core::Loop&


# ::stappler::xenolith::vk::SwapchainImage::releaseSemaphore(core::Semaphore*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* core::Semaphore*


# ::stappler::xenolith::vk::SwapchainImage::isSemaphorePersistent() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::vk::SwapchainImage::getInfo() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::vk::ImageInfoData

# ::stappler::xenolith::vk::SwapchainImage::makeView(stappler::xenolith::vk::ImageViewInfo const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::vk::ImageViewInfo const&

Возвращает:
* Rc<core::ImageView>

# ::stappler::xenolith::vk::SwapchainImage::setImage(Rc<stappler::xenolith::vk::SwapchainHandle>&&,SwapchainHandle::SwapchainImageData const&,Rc<stappler::xenolith::vk::Semaphore> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Rc<stappler::xenolith::vk::SwapchainHandle>&&
* SwapchainHandle::SwapchainImageData const&
* Rc<stappler::xenolith::vk::Semaphore> const&


# ::stappler::xenolith::vk::SwapchainImage::getOrder() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint64_t

# ::stappler::xenolith::vk::SwapchainImage::getPresentWindow() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint64_t

# ::stappler::xenolith::vk::SwapchainImage::setPresented()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::vk::SwapchainImage::isPresented() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::vk::SwapchainImage::isSubmitted() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::vk::SwapchainImage::getSwapchain() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Rc<stappler::xenolith::vk::SwapchainHandle> const&

# ::stappler::xenolith::vk::SwapchainImage::invalidateImage()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::vk::SwapchainImage::invalidateSwapchain()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::vk::SwapchainImage::_order

## BRIEF

## CONTENT

Доступ: protected

Тип: uint64_t


# ::stappler::xenolith::vk::SwapchainImage::_presentWindow

## BRIEF

## CONTENT

Доступ: protected

Тип: uint64_t


# ::stappler::xenolith::vk::SwapchainImage::_state

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::vk::SwapchainImage::State


# ::stappler::xenolith::vk::SwapchainImage::_swapchain

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::xenolith::vk::SwapchainHandle>
