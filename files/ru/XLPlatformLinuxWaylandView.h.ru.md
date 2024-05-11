Title: XLPlatformLinuxWaylandView.h


# XENOLITH_PLATFORM_XLPLATFROMLINUXWAYLANDVIEW_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::platform::WaylandView

## BRIEF

## CONTENT

Базовые классы:
* LinuxViewInterface
* WaylandViewInterface


# ::stappler::xenolith::platform::WaylandView::DecorWidth

## BRIEF

## CONTENT

Доступ: public

Тип: auto const


# ::stappler::xenolith::platform::WaylandView::DecorInset

## BRIEF

## CONTENT

Доступ: public

Тип: auto const


# ::stappler::xenolith::platform::WaylandView::DecorOffset

## BRIEF

## CONTENT

Доступ: public

Тип: auto const


# ::stappler::xenolith::platform::WaylandView::IconSize

## BRIEF

## CONTENT

Доступ: public

Тип: auto const


# ::stappler::xenolith::platform::WaylandView::PointerEvent

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::platform::WaylandView::PointerEvent::Event

## BRIEF

## CONTENT

Значения:
* None
* Enter
* Leave
* Motion
* Button
* Axis
* AxisSource
* AxisStop
* AxisDiscrete


# ::stappler::xenolith::platform::WaylandView::PointerEvent::event

## BRIEF

## CONTENT

Тип: stappler::xenolith::platform::WaylandView::PointerEvent::Event


# ::stappler::xenolith::platform::WaylandView::PointerEvent::

## BRIEF

## CONTENT


# ::stappler::xenolith::platform::WaylandView::PointerEvent::

## BRIEF

## CONTENT


# ::stappler::xenolith::platform::WaylandView::PointerEvent::x

## BRIEF

## CONTENT

Тип: wl_fixed_t


# ::stappler::xenolith::platform::WaylandView::PointerEvent::y

## BRIEF

## CONTENT

Тип: wl_fixed_t


# ::stappler::xenolith::platform::WaylandView::PointerEvent::enter

## BRIEF

## CONTENT

Тип: 


# ::stappler::xenolith::platform::WaylandView::PointerEvent::

## BRIEF

## CONTENT


# ::stappler::xenolith::platform::WaylandView::PointerEvent::time

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::xenolith::platform::WaylandView::PointerEvent::x

## BRIEF

## CONTENT

Тип: wl_fixed_t


# ::stappler::xenolith::platform::WaylandView::PointerEvent::y

## BRIEF

## CONTENT

Тип: wl_fixed_t


# ::stappler::xenolith::platform::WaylandView::PointerEvent::motion

## BRIEF

## CONTENT

Тип: 


# ::stappler::xenolith::platform::WaylandView::PointerEvent::

## BRIEF

## CONTENT


# ::stappler::xenolith::platform::WaylandView::PointerEvent::serial

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::xenolith::platform::WaylandView::PointerEvent::time

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::xenolith::platform::WaylandView::PointerEvent::button

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::xenolith::platform::WaylandView::PointerEvent::state

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::xenolith::platform::WaylandView::PointerEvent::button

## BRIEF

## CONTENT

Тип: 


# ::stappler::xenolith::platform::WaylandView::PointerEvent::

## BRIEF

## CONTENT


# ::stappler::xenolith::platform::WaylandView::PointerEvent::time

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::xenolith::platform::WaylandView::PointerEvent::axis

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::xenolith::platform::WaylandView::PointerEvent::value

## BRIEF

## CONTENT

Тип: wl_fixed_t


# ::stappler::xenolith::platform::WaylandView::PointerEvent::axis

## BRIEF

## CONTENT

Тип: 


# ::stappler::xenolith::platform::WaylandView::PointerEvent::

## BRIEF

## CONTENT


# ::stappler::xenolith::platform::WaylandView::PointerEvent::axis_source

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::xenolith::platform::WaylandView::PointerEvent::axisSource

## BRIEF

## CONTENT

Тип: 


# ::stappler::xenolith::platform::WaylandView::PointerEvent::

## BRIEF

## CONTENT


# ::stappler::xenolith::platform::WaylandView::PointerEvent::time

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::xenolith::platform::WaylandView::PointerEvent::axis

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::xenolith::platform::WaylandView::PointerEvent::axisStop

## BRIEF

## CONTENT

Тип: 


# ::stappler::xenolith::platform::WaylandView::PointerEvent::

## BRIEF

## CONTENT


# ::stappler::xenolith::platform::WaylandView::PointerEvent::axis

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::xenolith::platform::WaylandView::PointerEvent::discrete

## BRIEF

## CONTENT

Тип: int32_t


# ::stappler::xenolith::platform::WaylandView::PointerEvent::axisDiscrete

## BRIEF

## CONTENT

Тип: 


# ::stappler::xenolith::platform::WaylandView::WaylandView(stappler::xenolith::platform::WaylandLibrary*,stappler::xenolith::platform::ViewInterface*,stappler::StringView,stappler::StringView,stappler::geom::URect)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::platform::WaylandLibrary*
* stappler::xenolith::platform::ViewInterface*
* stappler::StringView
* stappler::StringView
* stappler::geom::URect


# ::stappler::xenolith::platform::WaylandView::~WaylandView()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::platform::WaylandView::poll(bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* bool

Возвращает:
* bool

# ::stappler::xenolith::platform::WaylandView::getSocketFd() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* int

# ::stappler::xenolith::platform::WaylandView::getScreenFrameInterval() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint64_t

# ::stappler::xenolith::platform::WaylandView::mapWindow()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::platform::WaylandView::getDisplay() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::platform::WaylandDisplay*

# ::stappler::xenolith::platform::WaylandView::getSurface() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* wl_surface*

# ::stappler::xenolith::platform::WaylandView::handleSurfaceEnter(wl_surface*,wl_output*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* wl_surface*
* wl_output*


# ::stappler::xenolith::platform::WaylandView::handleSurfaceLeave(wl_surface*,wl_output*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* wl_surface*
* wl_output*


# ::stappler::xenolith::platform::WaylandView::handleSurfaceConfigure(xdg_surface*,uint32_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* xdg_surface*
* uint32_t


# ::stappler::xenolith::platform::WaylandView::handleToplevelConfigure(xdg_toplevel*,int32_t,int32_t,wl_array*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* xdg_toplevel*
* int32_t
* int32_t
* wl_array*


# ::stappler::xenolith::platform::WaylandView::handleToplevelClose(xdg_toplevel*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* xdg_toplevel*


# ::stappler::xenolith::platform::WaylandView::handleToplevelBounds(xdg_toplevel*,int32_t,int32_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* xdg_toplevel*
* int32_t
* int32_t


# ::stappler::xenolith::platform::WaylandView::handleSurfaceFrameDone(wl_callback*,uint32_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* wl_callback*
* uint32_t


# ::stappler::xenolith::platform::WaylandView::handlePointerEnter(wl_fixed_t,wl_fixed_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* wl_fixed_t
* wl_fixed_t


# ::stappler::xenolith::platform::WaylandView::handlePointerLeave()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::platform::WaylandView::handlePointerMotion(uint32_t,wl_fixed_t,wl_fixed_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint32_t
* wl_fixed_t
* wl_fixed_t


# ::stappler::xenolith::platform::WaylandView::handlePointerButton(uint32_t,uint32_t,uint32_t,uint32_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint32_t
* uint32_t
* uint32_t
* uint32_t


# ::stappler::xenolith::platform::WaylandView::handlePointerAxis(uint32_t,uint32_t,wl_fixed_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint32_t
* uint32_t
* wl_fixed_t


# ::stappler::xenolith::platform::WaylandView::handlePointerAxisSource(uint32_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint32_t


# ::stappler::xenolith::platform::WaylandView::handlePointerAxisStop(uint32_t,uint32_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint32_t
* uint32_t


# ::stappler::xenolith::platform::WaylandView::handlePointerAxisDiscrete(uint32_t,int32_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint32_t
* int32_t


# ::stappler::xenolith::platform::WaylandView::handlePointerFrame()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::platform::WaylandView::handleKeyboardEnter(Vector<uint32_t>&&,uint32_t,uint32_t,uint32_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Vector<uint32_t>&&
* uint32_t
* uint32_t
* uint32_t


# ::stappler::xenolith::platform::WaylandView::handleKeyboardLeave()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::platform::WaylandView::handleKey(uint32_t,uint32_t,uint32_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint32_t
* uint32_t
* uint32_t


# ::stappler::xenolith::platform::WaylandView::handleKeyModifiers(uint32_t,uint32_t,uint32_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint32_t
* uint32_t
* uint32_t


# ::stappler::xenolith::platform::WaylandView::handleKeyRepeat()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::platform::WaylandView::handleDecorationPress(stappler::xenolith::platform::WaylandDecoration*,uint32_t,bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::platform::WaylandDecoration*
* uint32_t
* bool


# ::stappler::xenolith::platform::WaylandView::scheduleFrame()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::platform::WaylandView::onSurfaceInfo(core::SurfaceInfo&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* core::SurfaceInfo&


# ::stappler::xenolith::platform::WaylandView::commit(uint32_t,uint32_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint32_t
* uint32_t


# ::stappler::xenolith::platform::WaylandView::readFromClipboard(Function<void (stappler::BytesView, stappler::StringView)>&&,stappler::mem_std::Ref*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Function<void (stappler::BytesView, stappler::StringView)>&&
* stappler::mem_std::Ref*


# ::stappler::xenolith::platform::WaylandView::writeToClipboard(stappler::BytesView,stappler::StringView)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::BytesView
* stappler::StringView


# ::stappler::xenolith::platform::WaylandView::createDecorations()

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::platform::WaylandView::_view

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::platform::ViewInterface*


# ::stappler::xenolith::platform::WaylandView::_xdgSurface

## BRIEF

## CONTENT

Доступ: protected

Тип: xdg_surface*


# ::stappler::xenolith::platform::WaylandView::_toplevel

## BRIEF

## CONTENT

Доступ: protected

Тип: xdg_toplevel*


# ::stappler::xenolith::platform::WaylandView::_currentExtent

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::geom::Extent2


# ::stappler::xenolith::platform::WaylandView::_commitedExtent

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::geom::Extent2


# ::stappler::xenolith::platform::WaylandView::_continuousRendering

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::platform::WaylandView::_scheduleNext

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::platform::WaylandView::_clientSizeDecoration

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::platform::WaylandView::_shouldClose

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::platform::WaylandView::_surfaceDirty

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::platform::WaylandView::_fullscreen

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::platform::WaylandView::_pointerInit

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::platform::WaylandView::_activeOutputs

## BRIEF

## CONTENT

Доступ: protected

Тип: Set<stappler::xenolith::platform::WaylandOutput *>


# ::stappler::xenolith::platform::WaylandView::_surfaceX

## BRIEF

## CONTENT

Доступ: protected

Тип: double


# ::stappler::xenolith::platform::WaylandView::_surfaceY

## BRIEF

## CONTENT

Доступ: protected

Тип: double


# ::stappler::xenolith::platform::WaylandView::_activeModifiers

## BRIEF

## CONTENT

Доступ: protected

Тип: core::InputModifier


# ::stappler::xenolith::platform::WaylandView::_pointerEvents

## BRIEF

## CONTENT

Доступ: protected

Тип: Vector<stappler::xenolith::platform::WaylandView::PointerEvent>


# ::stappler::xenolith::platform::WaylandView::_state

## BRIEF

## CONTENT

Доступ: protected

Тип: std::bitset<size_t(XDG_TOPLEVEL_STATE_TILED_BOTTOM + 1)>


# ::stappler::xenolith::platform::WaylandView::_decors

## BRIEF

## CONTENT

Доступ: protected

Тип: Vector<Rc<stappler::xenolith::platform::WaylandDecoration>>


# ::stappler::xenolith::platform::WaylandView::_iconMaximized

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::xenolith::platform::WaylandDecoration>


# ::stappler::xenolith::platform::WaylandView::_configureSerial

## BRIEF

## CONTENT

Доступ: protected

Тип: uint32_t


# ::stappler::xenolith::platform::WaylandView::_screenFrameInterval

## BRIEF

## CONTENT

Доступ: protected

Тип: uint64_t


# ::stappler::xenolith::platform::WaylandView::KeyData

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::platform::WaylandView::KeyData::scancode

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::xenolith::platform::WaylandView::KeyData::codepoint

## BRIEF

## CONTENT

Тип: char32_t


# ::stappler::xenolith::platform::WaylandView::KeyData::time

## BRIEF

## CONTENT

Тип: uint64_t


# ::stappler::xenolith::platform::WaylandView::KeyData::repeats

## BRIEF

## CONTENT

Тип: bool


# ::stappler::xenolith::platform::WaylandView::KeyData::lastRepeat

## BRIEF

## CONTENT

Тип: uint64_t


# ::stappler::xenolith::platform::WaylandView::_keys

## BRIEF

## CONTENT

Доступ: protected

Тип: Map<uint32_t, stappler::xenolith::platform::WaylandView::KeyData>
