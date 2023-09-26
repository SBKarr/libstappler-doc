Title: XLVkGuiViewImpl.h


# XENOLITH_BACKEND_VKGUI_PLATFORM_LINUX_XLVKGUIVIEWIMPL_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::vk::platform::SurfaceType

## BRIEF

## CONTENT

Значения:
* None
* XCB
* Wayland


# ::stappler::xenolith::vk::platform::operator|(stappler::xenolith::vk::platform::SurfaceType const&,stappler::xenolith::vk::platform::SurfaceType const&)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::vk::platform::SurfaceType const&
* stappler::xenolith::vk::platform::SurfaceType const&

Возвращает:
* stappler::xenolith::vk::platform::SurfaceType

# ::stappler::xenolith::vk::platform::operator&(stappler::xenolith::vk::platform::SurfaceType const&,stappler::xenolith::vk::platform::SurfaceType const&)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::vk::platform::SurfaceType const&
* stappler::xenolith::vk::platform::SurfaceType const&

Возвращает:
* stappler::xenolith::vk::platform::SurfaceType

# ::stappler::xenolith::vk::platform::operator^(stappler::xenolith::vk::platform::SurfaceType const&,stappler::xenolith::vk::platform::SurfaceType const&)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::vk::platform::SurfaceType const&
* stappler::xenolith::vk::platform::SurfaceType const&

Возвращает:
* stappler::xenolith::vk::platform::SurfaceType

# ::stappler::xenolith::vk::platform::operator|=(stappler::xenolith::vk::platform::SurfaceType&,stappler::xenolith::vk::platform::SurfaceType const&)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::vk::platform::SurfaceType&
* stappler::xenolith::vk::platform::SurfaceType const&

Возвращает:
* stappler::xenolith::vk::platform::SurfaceType&

# ::stappler::xenolith::vk::platform::operator&=(stappler::xenolith::vk::platform::SurfaceType&,stappler::xenolith::vk::platform::SurfaceType const&)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::vk::platform::SurfaceType&
* stappler::xenolith::vk::platform::SurfaceType const&

Возвращает:
* stappler::xenolith::vk::platform::SurfaceType&

# ::stappler::xenolith::vk::platform::operator^=(stappler::xenolith::vk::platform::SurfaceType&,stappler::xenolith::vk::platform::SurfaceType const&)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::vk::platform::SurfaceType&
* stappler::xenolith::vk::platform::SurfaceType const&

Возвращает:
* stappler::xenolith::vk::platform::SurfaceType&

# ::stappler::xenolith::vk::platform::operator==(stappler::xenolith::vk::platform::SurfaceType const&,std::underlying_type<SurfaceType>::type const&)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::vk::platform::SurfaceType const&
* std::underlying_type<SurfaceType>::type const&

Возвращает:
* bool

# ::stappler::xenolith::vk::platform::operator==(std::underlying_type<SurfaceType>::type const&,stappler::xenolith::vk::platform::SurfaceType const&)

## BRIEF

## CONTENT

Параметры:
* std::underlying_type<SurfaceType>::type const&
* stappler::xenolith::vk::platform::SurfaceType const&

Возвращает:
* bool

# ::stappler::xenolith::vk::platform::operator!=(stappler::xenolith::vk::platform::SurfaceType const&,std::underlying_type<SurfaceType>::type const&)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::vk::platform::SurfaceType const&
* std::underlying_type<SurfaceType>::type const&

Возвращает:
* bool

# ::stappler::xenolith::vk::platform::operator!=(std::underlying_type<SurfaceType>::type const&,stappler::xenolith::vk::platform::SurfaceType const&)

## BRIEF

## CONTENT

Параметры:
* std::underlying_type<SurfaceType>::type const&
* stappler::xenolith::vk::platform::SurfaceType const&

Возвращает:
* bool

# ::stappler::xenolith::vk::platform::operator~(stappler::xenolith::vk::platform::SurfaceType const&)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::vk::platform::SurfaceType const&

Возвращает:
* stappler::xenolith::vk::platform::SurfaceType

# ::stappler::xenolith::vk::platform::ViewImpl

## BRIEF

## CONTENT

Базовые классы:
* vk::View


# ::stappler::xenolith::vk::platform::ViewImpl::ViewImpl()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::vk::platform::ViewImpl::~ViewImpl()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::vk::platform::ViewImpl::init(stappler::xenolith::Application&,core::Device const&,stappler::xenolith::ViewInfo&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Application&
* core::Device const&
* stappler::xenolith::ViewInfo&&

Возвращает:
* bool

# ::stappler::xenolith::vk::platform::ViewImpl::threadInit()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::vk::platform::ViewImpl::threadDispose()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::vk::platform::ViewImpl::worker()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::vk::platform::ViewImpl::wakeup()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::vk::platform::ViewImpl::updateTextCursor(uint32_t,uint32_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint32_t
* uint32_t


# ::stappler::xenolith::vk::platform::ViewImpl::updateTextInput(stappler::WideStringView,uint32_t,uint32_t,stappler::xenolith::TextInputType)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::WideStringView
* uint32_t
* uint32_t
* stappler::xenolith::TextInputType


# ::stappler::xenolith::vk::platform::ViewImpl::runTextInput(stappler::WideStringView,uint32_t,uint32_t,stappler::xenolith::TextInputType)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::WideStringView
* uint32_t
* uint32_t
* stappler::xenolith::TextInputType


# ::stappler::xenolith::vk::platform::ViewImpl::cancelTextInput()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::vk::platform::ViewImpl::presentWithQueue(vk::DeviceQueue&,Rc<stappler::xenolith::View::ImageStorage>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* vk::DeviceQueue&
* Rc<stappler::xenolith::View::ImageStorage>&&


# ::stappler::xenolith::vk::platform::ViewImpl::isInputEnabled() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::vk::platform::ViewImpl::getView() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* xenolith::platform::LinuxViewInterface*

# ::stappler::xenolith::vk::platform::ViewImpl::getDevice() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* vk::Device*

# ::stappler::xenolith::vk::platform::ViewImpl::getUpdateInterval() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint64_t

# ::stappler::xenolith::vk::platform::ViewImpl::mapWindow()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::vk::platform::ViewImpl::linkWithNativeWindow(void*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* void*


# ::stappler::xenolith::vk::platform::ViewImpl::stopNativeWindow()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::vk::platform::ViewImpl::pollInput(bool)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* bool

Возвращает:
* bool

# ::stappler::xenolith::vk::platform::ViewImpl::getSurfaceOptions() const

## BRIEF

## CONTENT

Доступ: protected

Возвращает:
* core::SurfaceInfo

# ::stappler::xenolith::vk::platform::ViewImpl::finalize()

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::vk::platform::ViewImpl::_view

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<xenolith::platform::LinuxViewInterface>


# ::stappler::xenolith::vk::platform::ViewImpl::_eventFd

## BRIEF

## CONTENT

Доступ: protected

Тип: int


# ::stappler::xenolith::vk::platform::ViewImpl::_inputEnabled

## BRIEF

## CONTENT

Доступ: protected

Тип: bool
