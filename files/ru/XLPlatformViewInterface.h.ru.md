Title: XLPlatformViewInterface.h


# XENOLITH_PLATFORM_XLPLATFORMVIEWINTERFACE_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::platform::ViewInterface

## BRIEF

## CONTENT


# ::stappler::xenolith::platform::ViewInterface::~ViewInterface()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::platform::ViewInterface::update(bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* bool


# ::stappler::xenolith::platform::ViewInterface::end()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::platform::ViewInterface::handleInputEvent(core::InputEventData const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* core::InputEventData const&


# ::stappler::xenolith::platform::ViewInterface::handleInputEvents(Vector<core::InputEventData>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Vector<core::InputEventData>&&


# ::stappler::xenolith::platform::ViewInterface::getExtent() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::geom::Extent2

# ::stappler::xenolith::platform::ViewInterface::isInputEnabled() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::platform::ViewInterface::deprecateSwapchain(bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* bool


# ::stappler::xenolith::platform::ViewInterface::retainView()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint64_t

# ::stappler::xenolith::platform::ViewInterface::releaseView(uint64_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint64_t


# ::stappler::xenolith::platform::ViewInterface::setReadyForNextFrame()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::platform::ViewInterface::linkWithNativeWindow(void*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* void*


# ::stappler::xenolith::platform::ViewInterface::stopNativeWindow()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::platform::ViewInterface::setContentPadding(const stappler::geom::Padding&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* const stappler::geom::Padding&


# ::stappler::xenolith::platform::ViewInterface::getBackButtonCounter() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint64_t

# ::stappler::xenolith::platform::ViewInterface::readFromClipboard(Function<void (stappler::BytesView, stappler::StringView)>&&,stappler::mem_std::Ref*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Function<void (stappler::BytesView, stappler::StringView)>&&
* stappler::mem_std::Ref*


# ::stappler::xenolith::platform::ViewInterface::writeToClipboard(stappler::BytesView,stappler::StringView)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::BytesView
* stappler::StringView


# ::stappler::xenolith::platform::ViewInterfaceRef

## BRIEF

## CONTENT


# ::stappler::xenolith::platform::ViewInterfaceRef::~ViewInterfaceRef()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::platform::ViewInterfaceRef::ViewInterfaceRef()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::platform::ViewInterfaceRef::ViewInterfaceRef(stappler::xenolith::platform::ViewInterface*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::platform::ViewInterface*


# ::stappler::xenolith::platform::ViewInterfaceRef::ViewInterfaceRef(stappler::xenolith::platform::ViewInterfaceRef const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::platform::ViewInterfaceRef const&


# ::stappler::xenolith::platform::ViewInterfaceRef::ViewInterfaceRef(stappler::xenolith::platform::ViewInterfaceRef&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::platform::ViewInterfaceRef&&


# ::stappler::xenolith::platform::ViewInterfaceRef::operator=(stappler::xenolith::platform::ViewInterface*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::platform::ViewInterface*

Возвращает:
* stappler::xenolith::platform::ViewInterfaceRef&

# ::stappler::xenolith::platform::ViewInterfaceRef::operator=(stappler::xenolith::platform::ViewInterfaceRef const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::platform::ViewInterfaceRef const&

Возвращает:
* stappler::xenolith::platform::ViewInterfaceRef&

# ::stappler::xenolith::platform::ViewInterfaceRef::operator=(stappler::xenolith::platform::ViewInterfaceRef&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::platform::ViewInterfaceRef&&

Возвращает:
* stappler::xenolith::platform::ViewInterfaceRef&

# ::stappler::xenolith::platform::ViewInterfaceRef::get() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::platform::ViewInterface*

# ::stappler::xenolith::platform::ViewInterfaceRef::operator ViewInterface*() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::platform::ViewInterface*

# ::stappler::xenolith::platform::ViewInterfaceRef::operator bool() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::platform::ViewInterfaceRef::operator->() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::platform::ViewInterface*

# ::stappler::xenolith::platform::ViewInterfaceRef::set(stappler::xenolith::platform::ViewInterface*)

## BRIEF

## CONTENT

Доступ: private

Параметры:
* stappler::xenolith::platform::ViewInterface*


# ::stappler::xenolith::platform::ViewInterfaceRef::refId

## BRIEF

## CONTENT

Доступ: private

Тип: uint64_t


# ::stappler::xenolith::platform::ViewInterfaceRef::ref

## BRIEF

## CONTENT

Доступ: private

Тип: stappler::xenolith::platform::ViewInterface*
