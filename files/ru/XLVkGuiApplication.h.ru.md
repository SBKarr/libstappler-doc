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
