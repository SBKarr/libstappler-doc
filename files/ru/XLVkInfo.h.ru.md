Title: XLVkInfo.h


# XENOLITH_BACKEND_VK_XLVKINFO_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::vk::DeviceInfo

## BRIEF

## CONTENT


# ::stappler::xenolith::vk::DeviceInfo::Features

## BRIEF

## CONTENT


# ::stappler::xenolith::vk::DeviceInfo::Features::getRequired()

## BRIEF

## CONTENT

Возвращает:
* stappler::xenolith::vk::DeviceInfo::Features

# ::stappler::xenolith::vk::DeviceInfo::Features::getOptional()

## BRIEF

## CONTENT

Возвращает:
* stappler::xenolith::vk::DeviceInfo::Features

# ::stappler::xenolith::vk::DeviceInfo::Features::device16bitStorage

## BRIEF

## CONTENT

Тип: VkPhysicalDevice16BitStorageFeaturesKHR


# ::stappler::xenolith::vk::DeviceInfo::Features::device8bitStorage

## BRIEF

## CONTENT

Тип: VkPhysicalDevice8BitStorageFeaturesKHR


# ::stappler::xenolith::vk::DeviceInfo::Features::deviceShaderFloat16Int8

## BRIEF

## CONTENT

Тип: VkPhysicalDeviceShaderFloat16Int8FeaturesKHR


# ::stappler::xenolith::vk::DeviceInfo::Features::deviceDescriptorIndexing

## BRIEF

## CONTENT

Тип: VkPhysicalDeviceDescriptorIndexingFeaturesEXT


# ::stappler::xenolith::vk::DeviceInfo::Features::deviceBufferDeviceAddress

## BRIEF

## CONTENT

Тип: VkPhysicalDeviceBufferDeviceAddressFeaturesKHR


# ::stappler::xenolith::vk::DeviceInfo::Features::device13

## BRIEF

## CONTENT

Тип: VkPhysicalDeviceVulkan12Features


# ::stappler::xenolith::vk::DeviceInfo::Features::device12

## BRIEF

## CONTENT

Тип: VkPhysicalDeviceVulkan12Features


# ::stappler::xenolith::vk::DeviceInfo::Features::device11

## BRIEF

## CONTENT

Тип: VkPhysicalDeviceVulkan11Features


# ::stappler::xenolith::vk::DeviceInfo::Features::device10

## BRIEF

## CONTENT

Тип: VkPhysicalDeviceFeatures2KHR


# ::stappler::xenolith::vk::DeviceInfo::Features::flags

## BRIEF

## CONTENT

Тип: stappler::xenolith::vk::ExtensionFlags


# ::stappler::xenolith::vk::DeviceInfo::Features::canEnable(stappler::xenolith::vk::DeviceInfo::Features const&,uint32_t) const

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::vk::DeviceInfo::Features const&
* uint32_t

Возвращает:
* bool

# ::stappler::xenolith::vk::DeviceInfo::Features::enableFromFeatures(stappler::xenolith::vk::DeviceInfo::Features const&)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::vk::DeviceInfo::Features const&


# ::stappler::xenolith::vk::DeviceInfo::Features::disableFromFeatures(stappler::xenolith::vk::DeviceInfo::Features const&)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::vk::DeviceInfo::Features const&


# ::stappler::xenolith::vk::DeviceInfo::Features::updateFrom13()

## BRIEF

## CONTENT


# ::stappler::xenolith::vk::DeviceInfo::Features::updateFrom12()

## BRIEF

## CONTENT


# ::stappler::xenolith::vk::DeviceInfo::Features::updateTo12(bool)

## BRIEF

## CONTENT

Параметры:
* bool


# ::stappler::xenolith::vk::DeviceInfo::Features::clear()

## BRIEF

## CONTENT


# ::stappler::xenolith::vk::DeviceInfo::Features::Features()

## BRIEF

## CONTENT


# ::stappler::xenolith::vk::DeviceInfo::Features::Features(stappler::xenolith::vk::DeviceInfo::Features const&)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::vk::DeviceInfo::Features const&


# ::stappler::xenolith::vk::DeviceInfo::Features::operator=(stappler::xenolith::vk::DeviceInfo::Features const&)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::vk::DeviceInfo::Features const&

Возвращает:
* stappler::xenolith::vk::DeviceInfo::Features&

# ::stappler::xenolith::vk::DeviceInfo::Properties

## BRIEF

## CONTENT


# ::stappler::xenolith::vk::DeviceInfo::Properties::deviceDescriptorIndexing

## BRIEF

## CONTENT

Тип: VkPhysicalDeviceDescriptorIndexingPropertiesEXT


# ::stappler::xenolith::vk::DeviceInfo::Properties::deviceMaintenance3

## BRIEF

## CONTENT

Тип: VkPhysicalDeviceMaintenance3PropertiesKHR


# ::stappler::xenolith::vk::DeviceInfo::Properties::device10

## BRIEF

## CONTENT

Тип: VkPhysicalDeviceProperties2KHR


# ::stappler::xenolith::vk::DeviceInfo::Properties::Properties()

## BRIEF

## CONTENT


# ::stappler::xenolith::vk::DeviceInfo::Properties::Properties(stappler::xenolith::vk::DeviceInfo::Properties const&)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::vk::DeviceInfo::Properties const&


# ::stappler::xenolith::vk::DeviceInfo::Properties::operator=(stappler::xenolith::vk::DeviceInfo::Properties const&)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::vk::DeviceInfo::Properties const&

Возвращает:
* stappler::xenolith::vk::DeviceInfo::Properties&

# ::stappler::xenolith::vk::DeviceInfo::QueueFamilyInfo

## BRIEF

## CONTENT


# ::stappler::xenolith::vk::DeviceInfo::QueueFamilyInfo::ops

## BRIEF

## CONTENT

Тип: stappler::xenolith::vk::QueueOperations


# ::stappler::xenolith::vk::DeviceInfo::QueueFamilyInfo::index

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::xenolith::vk::DeviceInfo::QueueFamilyInfo::count

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::xenolith::vk::DeviceInfo::QueueFamilyInfo::used

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::xenolith::vk::DeviceInfo::QueueFamilyInfo::minImageTransferGranularity

## BRIEF

## CONTENT

Тип: VkExtent3D


# ::stappler::xenolith::vk::DeviceInfo::QueueFamilyInfo::presentSurfaceMask

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::xenolith::vk::DeviceInfo::device

## BRIEF

## CONTENT

Тип: VkPhysicalDevice


# ::stappler::xenolith::vk::DeviceInfo::graphicsFamily

## BRIEF

## CONTENT

Тип: stappler::xenolith::vk::DeviceInfo::QueueFamilyInfo


# ::stappler::xenolith::vk::DeviceInfo::presentFamily

## BRIEF

## CONTENT

Тип: stappler::xenolith::vk::DeviceInfo::QueueFamilyInfo


# ::stappler::xenolith::vk::DeviceInfo::transferFamily

## BRIEF

## CONTENT

Тип: stappler::xenolith::vk::DeviceInfo::QueueFamilyInfo


# ::stappler::xenolith::vk::DeviceInfo::computeFamily

## BRIEF

## CONTENT

Тип: stappler::xenolith::vk::DeviceInfo::QueueFamilyInfo


# ::stappler::xenolith::vk::DeviceInfo::optionalExtensions

## BRIEF

## CONTENT

Тип: Vector<stappler::StringView>


# ::stappler::xenolith::vk::DeviceInfo::promotedExtensions

## BRIEF

## CONTENT

Тип: Vector<stappler::StringView>


# ::stappler::xenolith::vk::DeviceInfo::availableExtensions

## BRIEF

## CONTENT

Тип: Vector<stappler::mem_std::String>


# ::stappler::xenolith::vk::DeviceInfo::properties

## BRIEF

## CONTENT

Тип: stappler::xenolith::vk::DeviceInfo::Properties


# ::stappler::xenolith::vk::DeviceInfo::features

## BRIEF

## CONTENT

Тип: stappler::xenolith::vk::DeviceInfo::Features


# ::stappler::xenolith::vk::DeviceInfo::requiredExtensionsExists

## BRIEF

## CONTENT

Тип: bool


# ::stappler::xenolith::vk::DeviceInfo::requiredFeaturesExists

## BRIEF

## CONTENT

Тип: bool


# ::stappler::xenolith::vk::DeviceInfo::DeviceInfo()

## BRIEF

## CONTENT


# ::stappler::xenolith::vk::DeviceInfo::DeviceInfo(VkPhysicalDevice,stappler::xenolith::vk::DeviceInfo::QueueFamilyInfo,stappler::xenolith::vk::DeviceInfo::QueueFamilyInfo,stappler::xenolith::vk::DeviceInfo::QueueFamilyInfo,stappler::xenolith::vk::DeviceInfo::QueueFamilyInfo,Vector<stappler::StringView>&&,Vector<stappler::StringView>&&)

## BRIEF

## CONTENT

Параметры:
* VkPhysicalDevice
* stappler::xenolith::vk::DeviceInfo::QueueFamilyInfo
* stappler::xenolith::vk::DeviceInfo::QueueFamilyInfo
* stappler::xenolith::vk::DeviceInfo::QueueFamilyInfo
* stappler::xenolith::vk::DeviceInfo::QueueFamilyInfo
* Vector<stappler::StringView>&&
* Vector<stappler::StringView>&&


# ::stappler::xenolith::vk::DeviceInfo::DeviceInfo(stappler::xenolith::vk::DeviceInfo const&)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::vk::DeviceInfo const&


# ::stappler::xenolith::vk::DeviceInfo::operator=(stappler::xenolith::vk::DeviceInfo const&)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::vk::DeviceInfo const&

Возвращает:
* stappler::xenolith::vk::DeviceInfo&

# ::stappler::xenolith::vk::DeviceInfo::DeviceInfo(stappler::xenolith::vk::DeviceInfo&&)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::vk::DeviceInfo&&


# ::stappler::xenolith::vk::DeviceInfo::operator=(stappler::xenolith::vk::DeviceInfo&&)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::vk::DeviceInfo&&

Возвращает:
* stappler::xenolith::vk::DeviceInfo&

# ::stappler::xenolith::vk::DeviceInfo::supportsPresentation() const

## BRIEF

## CONTENT

Возвращает:
* bool

# ::stappler::xenolith::vk::DeviceInfo::description() const

## BRIEF

## CONTENT

Возвращает:
* stappler::mem_std::String