Title: XLPlatformLinuxView.h


# XENOLITH_PLATFORM_LINUX_XLPLATFORMLINUXVIEW_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::platform::LinuxViewInterface

## BRIEF

## CONTENT

Базовые классы:
* Ref


# ::stappler::xenolith::platform::LinuxViewInterface::~LinuxViewInterface()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::platform::LinuxViewInterface::getSocketFd() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* int

# ::stappler::xenolith::platform::LinuxViewInterface::poll(bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* bool

Возвращает:
* bool

# ::stappler::xenolith::platform::LinuxViewInterface::getScreenFrameInterval() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint64_t

# ::stappler::xenolith::platform::LinuxViewInterface::mapWindow()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::platform::LinuxViewInterface::scheduleFrame()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::platform::LinuxViewInterface::onSurfaceInfo(core::SurfaceInfo&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* core::SurfaceInfo&


# ::stappler::xenolith::platform::LinuxViewInterface::commit(uint32_t,uint32_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint32_t
* uint32_t


# ::stappler::xenolith::platform::LinuxViewInterface::readFromClipboard(Function<void (stappler::BytesView, stappler::StringView)>&&,stappler::mem_std::Ref*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Function<void (stappler::BytesView, stappler::StringView)>&&
* stappler::mem_std::Ref*


# ::stappler::xenolith::platform::LinuxViewInterface::writeToClipboard(stappler::BytesView,stappler::StringView)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::BytesView
* stappler::StringView
