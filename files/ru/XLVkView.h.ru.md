Title: XLVkView.h


# XENOLITH_BACKEND_VKGUI_XLVKVIEW_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::vk::View

## BRIEF

## CONTENT

Базовые классы:
* xenolith::View


# ::stappler::xenolith::vk::View::EngineOptions

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::vk::View::EngineOptions::waitOnSwapchainPassFence

## BRIEF

## CONTENT

Тип: bool


# ::stappler::xenolith::vk::View::EngineOptions::acquireImageImmediately

## BRIEF

## CONTENT

Тип: bool


# ::stappler::xenolith::vk::View::EngineOptions::flattenFrameRate

## BRIEF

## CONTENT

Тип: bool


# ::stappler::xenolith::vk::View::EngineOptions::followDisplayLink

## BRIEF

## CONTENT

Тип: bool


# ::stappler::xenolith::vk::View::EngineOptions::enableFrameEmitterBarrier

## BRIEF

## CONTENT

Тип: bool


# ::stappler::xenolith::vk::View::EngineOptions::renderImageOffscreen

## BRIEF

## CONTENT

Тип: bool


# ::stappler::xenolith::vk::View::EngineOptions::presentImmediate

## BRIEF

## CONTENT

Тип: bool


# ::stappler::xenolith::vk::View::EngineOptions::renderOnDemand

## BRIEF

## CONTENT

Тип: bool


# ::stappler::xenolith::vk::View::~View()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::vk::View::init(stappler::xenolith::Application&,stappler::xenolith::vk::Device const&,stappler::xenolith::ViewInfo&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Application&
* stappler::xenolith::vk::Device const&
* stappler::xenolith::ViewInfo&&

Возвращает:
* bool

# ::stappler::xenolith::vk::View::threadInit()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::vk::View::threadDispose()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::vk::View::update(bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* bool


# ::stappler::xenolith::vk::View::run()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::vk::View::runWithQueue(Rc<stappler::xenolith::View::RenderQueue> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Rc<stappler::xenolith::View::RenderQueue> const&


# ::stappler::xenolith::vk::View::onAdded(stappler::xenolith::vk::Device&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::vk::Device&


# ::stappler::xenolith::vk::View::onRemoved()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::vk::View::deprecateSwapchain(bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* bool


# ::stappler::xenolith::vk::View::present(Rc<stappler::xenolith::View::ImageStorage>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Rc<stappler::xenolith::View::ImageStorage>&&

Возвращает:
* bool

# ::stappler::xenolith::vk::View::presentImmediate(Rc<stappler::xenolith::View::ImageStorage>&&,Function<void (bool)>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Rc<stappler::xenolith::View::ImageStorage>&&
* Function<void (bool)>&&

Возвращает:
* bool

# ::stappler::xenolith::vk::View::invalidateTarget(Rc<stappler::xenolith::View::ImageStorage>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Rc<stappler::xenolith::View::ImageStorage>&&


# ::stappler::xenolith::vk::View::getSwapchainHandle() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Rc<stappler::mem_std::Ref>

# ::stappler::xenolith::vk::View::captureImage(stappler::StringView,Rc<core::ImageObject> const&,stappler::xenolith::View::AttachmentLayout) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView
* Rc<core::ImageObject> const&
* stappler::xenolith::View::AttachmentLayout


# ::stappler::xenolith::vk::View::captureImage(Function<void (const stappler::xenolith::vk::ImageInfoData &, stappler::BytesView)>&&,Rc<core::ImageObject> const&,stappler::xenolith::View::AttachmentLayout) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Function<void (const stappler::xenolith::vk::ImageInfoData &, stappler::BytesView)>&&
* Rc<core::ImageObject> const&
* stappler::xenolith::View::AttachmentLayout


# ::stappler::xenolith::vk::View::scheduleFence(Rc<stappler::xenolith::vk::Fence>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Rc<stappler::xenolith::vk::Fence>&&


# ::stappler::xenolith::vk::View::getUpdateInterval() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint64_t

# ::stappler::xenolith::vk::View::mapWindow()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::vk::View::getDevice() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* vk::Device*

# ::stappler::xenolith::vk::View::setReadyForNextFrame()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::vk::View::ScheduleImageMode

## BRIEF

## CONTENT

Доступ: protected

Значения:
* AcquireSwapchainImageAsync
* AcquireSwapchainImageImmediate
* AcquireOffscreenImage


# ::stappler::xenolith::vk::View::pollInput(bool)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* bool

Возвращает:
* bool

# ::stappler::xenolith::vk::View::getSurfaceOptions() const

## BRIEF

## CONTENT

Доступ: protected

Возвращает:
* core::SurfaceInfo

# ::stappler::xenolith::vk::View::invalidate()

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::vk::View::scheduleNextImage(uint64_t,bool)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* uint64_t
* bool


# ::stappler::xenolith::vk::View::scheduleSwapchainImage(uint64_t,stappler::xenolith::vk::View::ScheduleImageMode)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* uint64_t
* stappler::xenolith::vk::View::ScheduleImageMode


# ::stappler::xenolith::vk::View::acquireScheduledImageImmediate(Rc<stappler::xenolith::vk::SwapchainImage> const&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* Rc<stappler::xenolith::vk::SwapchainImage> const&

Возвращает:
* bool

# ::stappler::xenolith::vk::View::acquireScheduledImage()

## BRIEF

## CONTENT

Доступ: protected

Возвращает:
* bool

# ::stappler::xenolith::vk::View::scheduleImage(Rc<stappler::xenolith::vk::SwapchainImage>&&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* Rc<stappler::xenolith::vk::SwapchainImage>&&


# ::stappler::xenolith::vk::View::onSwapchainImageReady(Rc<SwapchainHandle::SwapchainAcquiredImage>&&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* Rc<SwapchainHandle::SwapchainAcquiredImage>&&


# ::stappler::xenolith::vk::View::recreateSwapchain(core::PresentMode)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* core::PresentMode

Возвращает:
* bool

# ::stappler::xenolith::vk::View::createSwapchain(core::SurfaceInfo const&,core::SwapchainConfig&&,core::PresentMode)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* core::SurfaceInfo const&
* core::SwapchainConfig&&
* core::PresentMode

Возвращает:
* bool

# ::stappler::xenolith::vk::View::isImagePresentable(core::ImageObject const&,VkFilter&) const

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* core::ImageObject const&
* VkFilter&

Возвращает:
* bool

# ::stappler::xenolith::vk::View::runScheduledPresent(Rc<stappler::xenolith::vk::SwapchainImage>&&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* Rc<stappler::xenolith::vk::SwapchainImage>&&


# ::stappler::xenolith::vk::View::presentWithQueue(stappler::xenolith::vk::DeviceQueue&,Rc<stappler::xenolith::View::ImageStorage>&&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::vk::DeviceQueue&
* Rc<stappler::xenolith::View::ImageStorage>&&


# ::stappler::xenolith::vk::View::invalidateSwapchainImage(Rc<stappler::xenolith::View::ImageStorage>&&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* Rc<stappler::xenolith::View::ImageStorage>&&


# ::stappler::xenolith::vk::View::updateFrameInterval()

## BRIEF

## CONTENT

Доступ: protected

Возвращает:
* Pair<uint64_t, uint64_t>

# ::stappler::xenolith::vk::View::waitForFences(uint64_t)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* uint64_t


# ::stappler::xenolith::vk::View::finalize()

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::vk::View::updateFences()

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::vk::View::clearImages()

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::vk::View::_options

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::vk::View::EngineOptions


# ::stappler::xenolith::vk::View::_readyForNextFrame

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::vk::View::_blockDeprecation

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::vk::View::_framesInProgress

## BRIEF

## CONTENT

Доступ: protected

Тип: uint64_t


# ::stappler::xenolith::vk::View::_fenceOrder

## BRIEF

## CONTENT

Доступ: protected

Тип: uint64_t


# ::stappler::xenolith::vk::View::_frameOrder

## BRIEF

## CONTENT

Доступ: protected

Тип: uint64_t


# ::stappler::xenolith::vk::View::_onDemandOrder

## BRIEF

## CONTENT

Доступ: protected

Тип: uint64_t


# ::stappler::xenolith::vk::View::_scheduledTime

## BRIEF

## CONTENT

Доступ: protected

Тип: uint64_t


# ::stappler::xenolith::vk::View::_surface

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::xenolith::vk::Surface>


# ::stappler::xenolith::vk::View::_instance

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::xenolith::vk::Instance>


# ::stappler::xenolith::vk::View::_device

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::xenolith::vk::Device>


# ::stappler::xenolith::vk::View::_swapchain

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::xenolith::vk::SwapchainHandle>


# ::stappler::xenolith::vk::View::_threadName

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::mem_std::String


# ::stappler::xenolith::vk::View::_initImage

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<core::ImageStorage>


# ::stappler::xenolith::vk::View::_fences

## BRIEF

## CONTENT

Доступ: protected

Тип: Vector<Rc<stappler::xenolith::vk::Fence>>


# ::stappler::xenolith::vk::View::_fenceImages

## BRIEF

## CONTENT

Доступ: protected

Тип: Vector<Rc<stappler::xenolith::vk::SwapchainImage>>


# ::stappler::xenolith::vk::View::_scheduledImages

## BRIEF

## CONTENT

Доступ: protected

Тип: std::deque<Rc<SwapchainImage>>


# ::stappler::xenolith::vk::View::_scheduledPresent

## BRIEF

## CONTENT

Доступ: protected

Тип: Vector<Rc<stappler::xenolith::vk::SwapchainImage>>


# ::stappler::xenolith::vk::View::_requestedSwapchainImage

## BRIEF

## CONTENT

Доступ: protected

Тип: Set<SwapchainHandle::SwapchainAcquiredImage *>


# ::stappler::xenolith::vk::View::_swapchainImages

## BRIEF

## CONTENT

Доступ: protected

Тип: std::deque<Rc<SwapchainHandle::SwapchainAcquiredImage>>
