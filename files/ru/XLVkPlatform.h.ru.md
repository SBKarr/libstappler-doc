Title: XLVkPlatform.h


# XENOLITH_BACKEND_VK_XLVKPLATFORM_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::vk::platform::VulkanInstanceInfo

## BRIEF

## CONTENT


# ::stappler::xenolith::vk::platform::VulkanInstanceInfo::targetVersion

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::xenolith::vk::platform::VulkanInstanceInfo::availableLayers

## BRIEF

## CONTENT

Тип: SpanView<VkLayerProperties>


# ::stappler::xenolith::vk::platform::VulkanInstanceInfo::availableExtensions

## BRIEF

## CONTENT

Тип: SpanView<VkExtensionProperties>


# ::stappler::xenolith::vk::platform::VulkanInstanceData

## BRIEF

## CONTENT


# ::stappler::xenolith::vk::platform::VulkanInstanceData::targetVulkanVersion

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::xenolith::vk::platform::VulkanInstanceData::applicationVersion

## BRIEF

## CONTENT

Тип: stappler::StringView


# ::stappler::xenolith::vk::platform::VulkanInstanceData::applicationName

## BRIEF

## CONTENT

Тип: stappler::StringView


# ::stappler::xenolith::vk::platform::VulkanInstanceData::layersToEnable

## BRIEF

## CONTENT

Тип: Vector<const char *>


# ::stappler::xenolith::vk::platform::VulkanInstanceData::extensionsToEnable

## BRIEF

## CONTENT

Тип: Vector<const char *>


# ::stappler::xenolith::vk::platform::VulkanInstanceData::checkPresentationSupport

## BRIEF

## CONTENT

Тип: Function<uint32_t (const vk::Instance *, VkPhysicalDevice, uint32_t)>


# ::stappler::xenolith::vk::platform::VulkanInstanceData::userdata

## BRIEF

## CONTENT

Тип: Rc<stappler::mem_std::Ref>


# ::stappler::xenolith::vk::platform::FunctionTable

## BRIEF

## CONTENT

Базовые классы:
* vk::LoaderTable


# ::stappler::xenolith::vk::platform::FunctionTable::createInstance(Callback<bool (stappler::xenolith::vk::platform::VulkanInstanceData &, const stappler::xenolith::vk::platform::VulkanInstanceInfo &)> const&,stappler::Dso&&,Instance::TerminateCallback&&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Callback<bool (stappler::xenolith::vk::platform::VulkanInstanceData &, const stappler::xenolith::vk::platform::VulkanInstanceInfo &)> const&
* stappler::Dso&&
* Instance::TerminateCallback&&

Возвращает:
* Rc<stappler::xenolith::vk::Instance>

# ::stappler::xenolith::vk::platform::FunctionTable::operator bool() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::vk::platform::FunctionTable::loadInfo() const

## BRIEF

## CONTENT

Доступ: private

Возвращает:
* stappler::xenolith::vk::platform::VulkanInstanceInfo

# ::stappler::xenolith::vk::platform::FunctionTable::prepareData(stappler::xenolith::vk::platform::VulkanInstanceData&,stappler::xenolith::vk::platform::VulkanInstanceInfo const&) const

## BRIEF

## CONTENT

Доступ: private

Параметры:
* stappler::xenolith::vk::platform::VulkanInstanceData&
* stappler::xenolith::vk::platform::VulkanInstanceInfo const&

Возвращает:
* bool

# ::stappler::xenolith::vk::platform::FunctionTable::validateData(stappler::xenolith::vk::platform::VulkanInstanceData&,stappler::xenolith::vk::platform::VulkanInstanceInfo const&) const

## BRIEF

## CONTENT

Доступ: private

Параметры:
* stappler::xenolith::vk::platform::VulkanInstanceData&
* stappler::xenolith::vk::platform::VulkanInstanceInfo const&

Возвращает:
* bool

# ::stappler::xenolith::vk::platform::FunctionTable::doCreateInstance(stappler::xenolith::vk::platform::VulkanInstanceData&,stappler::Dso&&,Instance::TerminateCallback&&) const

## BRIEF

## CONTENT

Доступ: private

Параметры:
* stappler::xenolith::vk::platform::VulkanInstanceData&
* stappler::Dso&&
* Instance::TerminateCallback&&

Возвращает:
* Rc<stappler::xenolith::vk::Instance>

# ::stappler::xenolith::vk::platform::createInstance(Callback<bool (stappler::xenolith::vk::platform::VulkanInstanceData &, const stappler::xenolith::vk::platform::VulkanInstanceInfo &)> const&)

## BRIEF

## CONTENT

Параметры:
* Callback<bool (stappler::xenolith::vk::platform::VulkanInstanceData &, const stappler::xenolith::vk::platform::VulkanInstanceInfo &)> const&

Возвращает:
* Rc<core::Instance>