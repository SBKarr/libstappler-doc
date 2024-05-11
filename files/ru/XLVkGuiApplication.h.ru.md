Title: XLVkGuiApplication.h


# XENOLITH_BACKEND_VKGUI_XLVKGUIAPPLICATION_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::vk::GuiApplication

## BRIEF

## CONTENT

Базовые классы:
* Application


# ::stappler::xenolith::vk::GuiApplication::VulkanInstanceData

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::vk::GuiApplication::VulkanInstanceInfo

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::vk::GuiApplication::~GuiApplication()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::vk::GuiApplication::init(stappler::xenolith::Application::CommonInfo&&,Rc<core::Instance>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Application::CommonInfo&&
* Rc<core::Instance>&&

Возвращает:
* bool

# ::stappler::xenolith::vk::GuiApplication::init(stappler::xenolith::Application::CommonInfo&&,Callback<bool (stappler::xenolith::vk::GuiApplication::VulkanInstanceData &, const stappler::xenolith::vk::GuiApplication::VulkanInstanceInfo &)> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Application::CommonInfo&&
* Callback<bool (stappler::xenolith::vk::GuiApplication::VulkanInstanceData &, const stappler::xenolith::vk::GuiApplication::VulkanInstanceInfo &)> const&

Возвращает:
* bool

# ::stappler::xenolith::vk::GuiApplication::run(stappler::xenolith::Application::CallbackInfo const&,uint32_t,stappler::TimeInterval)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Application::CallbackInfo const&
* uint32_t
* stappler::TimeInterval


# ::stappler::xenolith::vk::GuiApplication::run(stappler::xenolith::Application::CallbackInfo const&,core::LoopInfo&&,uint32_t,stappler::TimeInterval)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Application::CallbackInfo const&
* core::LoopInfo&&
* uint32_t
* stappler::TimeInterval


# ::stappler::xenolith::vk::BootstrapApplication

## BRIEF

## CONTENT

Базовые классы:
* GuiApplication


# ::stappler::xenolith::vk::BootstrapApplication::onSwapchainConfig

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::xenolith::EventHeader


# ::stappler::xenolith::vk::BootstrapApplication::~BootstrapApplication()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::vk::BootstrapApplication::init(stappler::xenolith::ViewCommandLineData&&,void*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::ViewCommandLineData&&
* void*

Возвращает:
* bool

# ::stappler::xenolith::vk::BootstrapApplication::run(Function<void ()>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Function<void ()>&&


# ::stappler::xenolith::vk::BootstrapApplication::getSurfaceInfo() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* core::SurfaceInfo const&

# ::stappler::xenolith::vk::BootstrapApplication::getSwapchainConfig() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* core::SwapchainConfig const&

# ::stappler::xenolith::vk::BootstrapApplication::setPreferredPresentMode(core::PresentMode)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* core::PresentMode


# ::stappler::xenolith::vk::BootstrapApplication::createSceneForView(vk::View&,core::FrameContraints const&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* vk::View&
* core::FrameContraints const&

Возвращает:
* Rc<stappler::xenolith::Scene>

# ::stappler::xenolith::vk::BootstrapApplication::finalizeView(vk::View&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* vk::View&


# ::stappler::xenolith::vk::BootstrapApplication::selectConfig(vk::View&,core::SurfaceInfo const&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* vk::View&
* core::SurfaceInfo const&

Возвращает:
* core::SwapchainConfig

# ::stappler::xenolith::vk::BootstrapApplication::_storageParams

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::mem_std::Value


# ::stappler::xenolith::vk::BootstrapApplication::_data

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::ViewCommandLineData


# ::stappler::xenolith::vk::BootstrapApplication::_configMutex

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::mem_std::Mutex


# ::stappler::xenolith::vk::BootstrapApplication::_preferredPresentMode

## BRIEF

## CONTENT

Доступ: protected

Тип: core::PresentMode


# ::stappler::xenolith::vk::BootstrapApplication::_surfaceInfo

## BRIEF

## CONTENT

Доступ: protected

Тип: core::SurfaceInfo


# ::stappler::xenolith::vk::BootstrapApplication::_swapchainConfig

## BRIEF

## CONTENT

Доступ: protected

Тип: core::SwapchainConfig


# ::stappler::xenolith::vk::BootstrapApplication::getNetworkController() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* xenolith::network::Controller*

# ::stappler::xenolith::vk::BootstrapApplication::_networkController

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<xenolith::network::Controller>


# ::stappler::xenolith::vk::BootstrapApplication::getStorageServer() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* xenolith::storage::Server*

# ::stappler::xenolith::vk::BootstrapApplication::_storageServer

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<xenolith::storage::Server>


# ::stappler::xenolith::vk::BootstrapApplication::getAssetLibrary() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* xenolith::storage::AssetLibrary*

# ::stappler::xenolith::vk::BootstrapApplication::_assetLibrary

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<xenolith::storage::AssetLibrary>
