Title: XLVkInstance.h


# XENOLITH_BACKEND_VK_XLVKINSTANCE_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::vk::LoopData

## BRIEF

## CONTENT

Базовые классы:
* Ref


# ::stappler::xenolith::vk::LoopData::DeviceSupportCallback

## BRIEF

## CONTENT


# ::stappler::xenolith::vk::LoopData::DeviceExtensionsCallback

## BRIEF

## CONTENT


# ::stappler::xenolith::vk::LoopData::DeviceFeaturesCallback

## BRIEF

## CONTENT


# ::stappler::xenolith::vk::LoopData::deviceSupportCallback

## BRIEF

## CONTENT

Тип: DeviceSupportCallback


# ::stappler::xenolith::vk::LoopData::deviceExtensionsCallback

## BRIEF

## CONTENT

Тип: DeviceExtensionsCallback


# ::stappler::xenolith::vk::LoopData::deviceFeaturesCallback

## BRIEF

## CONTENT

Тип: DeviceFeaturesCallback


# ::stappler::xenolith::vk::Instance

## BRIEF

## CONTENT

Базовые классы:
* core::Instance
* InstanceTable


# ::stappler::xenolith::vk::Instance::PresentSupportCallback

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::vk::Instance::Instance(VkInstance,PFN_vkGetInstanceProcAddr const,uint32_t,Vector<stappler::StringView>&&,stappler::Dso&&,stappler::xenolith::core::Instance::TerminateCallback&&,stappler::xenolith::vk::Instance::PresentSupportCallback&&,bool,Rc<stappler::mem_std::Ref>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* VkInstance
* PFN_vkGetInstanceProcAddr const
* uint32_t
* Vector<stappler::StringView>&&
* stappler::Dso&&
* stappler::xenolith::core::Instance::TerminateCallback&&
* stappler::xenolith::vk::Instance::PresentSupportCallback&&
* bool
* Rc<stappler::mem_std::Ref>&&


# ::stappler::xenolith::vk::Instance::~Instance()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::vk::Instance::makeLoop(core::LoopInfo&&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* core::LoopInfo&&

Возвращает:
* Rc<core::Loop>

# ::stappler::xenolith::vk::Instance::makeDevice(core::LoopInfo const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* core::LoopInfo const&

Возвращает:
* Rc<stappler::xenolith::vk::Device>

# ::stappler::xenolith::vk::Instance::getSurfaceOptions(VkSurfaceKHR,VkPhysicalDevice) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* VkSurfaceKHR
* VkPhysicalDevice

Возвращает:
* core::SurfaceInfo

# ::stappler::xenolith::vk::Instance::getSurfaceExtent(VkSurfaceKHR,VkPhysicalDevice) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* VkSurfaceKHR
* VkPhysicalDevice

Возвращает:
* VkExtent2D

# ::stappler::xenolith::vk::Instance::getInstance() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* VkInstance

# ::stappler::xenolith::vk::Instance::printDevicesInfo(std::ostream&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* std::ostream&


# ::stappler::xenolith::vk::Instance::getVersion() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint32_t

# ::stappler::xenolith::vk::Instance::makeFontQueue(stappler::StringView) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView

Возвращает:
* Rc<core::Queue>

# ::stappler::xenolith::vk::Instance::makeView(stappler::xenolith::Application&,core::Device const&,stappler::xenolith::ViewInfo&&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Application&
* core::Device const&
* stappler::xenolith::ViewInfo&&

Возвращает:
* Rc<xenolith::View>

# ::stappler::xenolith::vk::Instance::getDeviceFeatures(VkPhysicalDevice const&,DeviceInfo::Features&,stappler::xenolith::vk::ExtensionFlags,uint32_t) const

## BRIEF

## CONTENT

Доступ: private

Параметры:
* VkPhysicalDevice const&
* DeviceInfo::Features&
* stappler::xenolith::vk::ExtensionFlags
* uint32_t


# ::stappler::xenolith::vk::Instance::getDeviceProperties(VkPhysicalDevice const&,DeviceInfo::Properties&,stappler::xenolith::vk::ExtensionFlags,uint32_t) const

## BRIEF

## CONTENT

Доступ: private

Параметры:
* VkPhysicalDevice const&
* DeviceInfo::Properties&
* stappler::xenolith::vk::ExtensionFlags
* uint32_t


# ::stappler::xenolith::vk::Instance::getDeviceInfo(VkPhysicalDevice) const

## BRIEF

## CONTENT

Доступ: private

Параметры:
* VkPhysicalDevice

Возвращает:
* stappler::xenolith::vk::DeviceInfo

# ::stappler::xenolith::vk::Instance::_instance

## BRIEF

## CONTENT

Доступ: private

Тип: VkInstance


# ::stappler::xenolith::vk::Instance::_version

## BRIEF

## CONTENT

Доступ: private

Тип: uint32_t


# ::stappler::xenolith::vk::Instance::_optionals

## BRIEF

## CONTENT

Доступ: private

Тип: Vector<stappler::StringView>


# ::stappler::xenolith::vk::Instance::_devices

## BRIEF

## CONTENT

Доступ: private

Тип: Vector<stappler::xenolith::vk::DeviceInfo>


# ::stappler::xenolith::vk::Instance::_checkPresentSupport

## BRIEF

## CONTENT

Доступ: private

Тип: PresentSupportCallback


# ::stappler::xenolith::vk::Instance::debugMessenger

## BRIEF

## CONTENT

Доступ: private

Тип: VkDebugUtilsMessengerEXT
