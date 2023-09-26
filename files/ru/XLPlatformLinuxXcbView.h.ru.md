Title: XLPlatformLinuxXcbView.h


# XENOLITH_PLATFORM_LINUX_XLPLATFORMLINUXXCBVIEW_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::platform::XcbView

## BRIEF

## CONTENT

Базовые классы:
* LinuxViewInterface


# ::stappler::xenolith::platform::XcbView::ScreenInfo

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::platform::XcbView::ScreenInfo::width

## BRIEF

## CONTENT

Тип: uint16_t


# ::stappler::xenolith::platform::XcbView::ScreenInfo::height

## BRIEF

## CONTENT

Тип: uint16_t


# ::stappler::xenolith::platform::XcbView::ScreenInfo::mwidth

## BRIEF

## CONTENT

Тип: uint16_t


# ::stappler::xenolith::platform::XcbView::ScreenInfo::mheight

## BRIEF

## CONTENT

Тип: uint16_t


# ::stappler::xenolith::platform::XcbView::ScreenInfo::rates

## BRIEF

## CONTENT

Тип: Vector<uint16_t>


# ::stappler::xenolith::platform::XcbView::ReportError(int)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* int


# ::stappler::xenolith::platform::XcbView::XcbView(stappler::xenolith::platform::XcbLibrary*,stappler::xenolith::platform::ViewInterface*,stappler::StringView,stappler::StringView,stappler::xenolith::URect)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::platform::XcbLibrary*
* stappler::xenolith::platform::ViewInterface*
* stappler::StringView
* stappler::StringView
* stappler::xenolith::URect


# ::stappler::xenolith::platform::XcbView::~XcbView()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::platform::XcbView::valid() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::platform::XcbView::poll(bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* bool

Возвращает:
* bool

# ::stappler::xenolith::platform::XcbView::getSocketFd() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* int

# ::stappler::xenolith::platform::XcbView::getScreenFrameInterval() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint64_t

# ::stappler::xenolith::platform::XcbView::mapWindow()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::platform::XcbView::getConnection() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* xcb_connection_t*

# ::stappler::xenolith::platform::XcbView::getWindow() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint32_t

# ::stappler::xenolith::platform::XcbView::getScreenInfo() const

## BRIEF

## CONTENT

Доступ: protected

Возвращает:
* Vector<stappler::xenolith::platform::XcbView::ScreenInfo>

# ::stappler::xenolith::platform::XcbView::initXkb()

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::platform::XcbView::updateXkbMapping()

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::platform::XcbView::updateKeysymMapping()

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::platform::XcbView::getKeysym(xcb_keycode_t,uint16_t,bool)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* xcb_keycode_t
* uint16_t
* bool

Возвращает:
* xcb_keysym_t

# ::stappler::xenolith::platform::XcbView::composeSymbol(xkb_keysym_t,core::InputKeyComposeState&) const

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* xkb_keysym_t
* core::InputKeyComposeState&

Возвращает:
* xkb_keysym_t

# ::stappler::xenolith::platform::XcbView::updateXkbKey(xcb_keycode_t)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* xcb_keycode_t


# ::stappler::xenolith::platform::XcbView::getKeyCode(xcb_keycode_t) const

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* xcb_keycode_t

Возвращает:
* core::InputKeyCode

# ::stappler::xenolith::platform::XcbView::getKeysymCode(xcb_keysym_t) const

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* xcb_keysym_t

Возвращает:
* core::InputKeyCode

# ::stappler::xenolith::platform::XcbView::_xcb

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::xenolith::platform::XcbLibrary>


# ::stappler::xenolith::platform::XcbView::_xkb

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::xenolith::platform::XkbLibrary>


# ::stappler::xenolith::platform::XcbView::_view

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::platform::ViewInterface*


# ::stappler::xenolith::platform::XcbView::_connection

## BRIEF

## CONTENT

Доступ: protected

Тип: xcb_connection_t*


# ::stappler::xenolith::platform::XcbView::_defaultScreen

## BRIEF

## CONTENT

Доступ: protected

Тип: xcb_screen_t*


# ::stappler::xenolith::platform::XcbView::_keysyms

## BRIEF

## CONTENT

Доступ: protected

Тип: xcb_key_symbols_t*


# ::stappler::xenolith::platform::XcbView::_window

## BRIEF

## CONTENT

Доступ: protected

Тип: uint32_t


# ::stappler::xenolith::platform::XcbView::_atoms

## BRIEF

## CONTENT

Доступ: protected

Тип: xcb_atom_t[4]


# ::stappler::xenolith::platform::XcbView::_width

## BRIEF

## CONTENT

Доступ: protected

Тип: uint16_t


# ::stappler::xenolith::platform::XcbView::_height

## BRIEF

## CONTENT

Доступ: protected

Тип: uint16_t


# ::stappler::xenolith::platform::XcbView::_rate

## BRIEF

## CONTENT

Доступ: protected

Тип: uint16_t


# ::stappler::xenolith::platform::XcbView::_socket

## BRIEF

## CONTENT

Доступ: protected

Тип: int


# ::stappler::xenolith::platform::XcbView::_numlock

## BRIEF

## CONTENT

Доступ: protected

Тип: uint16_t


# ::stappler::xenolith::platform::XcbView::_shiftlock

## BRIEF

## CONTENT

Доступ: protected

Тип: uint16_t


# ::stappler::xenolith::platform::XcbView::_capslock

## BRIEF

## CONTENT

Доступ: protected

Тип: uint16_t


# ::stappler::xenolith::platform::XcbView::_modeswitch

## BRIEF

## CONTENT

Доступ: protected

Тип: uint16_t


# ::stappler::xenolith::platform::XcbView::_xcbSetup

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::platform::XcbView::_xkbDeviceId

## BRIEF

## CONTENT

Доступ: protected

Тип: int32_t


# ::stappler::xenolith::platform::XcbView::_xkbFirstEvent

## BRIEF

## CONTENT

Доступ: protected

Тип: uint8_t


# ::stappler::xenolith::platform::XcbView::_xkbFirstError

## BRIEF

## CONTENT

Доступ: protected

Тип: uint8_t


# ::stappler::xenolith::platform::XcbView::_xkbKeymap

## BRIEF

## CONTENT

Доступ: protected

Тип: xkb_keymap*


# ::stappler::xenolith::platform::XcbView::_xkbState

## BRIEF

## CONTENT

Доступ: protected

Тип: xkb_state*


# ::stappler::xenolith::platform::XcbView::_xkbCompose

## BRIEF

## CONTENT

Доступ: protected

Тип: xkb_compose_state*


# ::stappler::xenolith::platform::XcbView::_keycodes

## BRIEF

## CONTENT

Доступ: protected

Тип: core::InputKeyCode[256]


# ::stappler::xenolith::platform::XcbView::_wmClass

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::mem_std::String
