Title: XLPlatformLinuxDbus.h


# XENOLITH_PLATFORM_LINUX_XLPLATFORMLINUXDBUS_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::platform::NMState

## BRIEF

## CONTENT

Значения:
* NM_STATE_UNKNOWN
* NM_STATE_ASLEEP
* NM_STATE_DISCONNECTED
* NM_STATE_DISCONNECTING
* NM_STATE_CONNECTING
* NM_STATE_CONNECTED_LOCAL
* NM_STATE_CONNECTED_SITE
* NM_STATE_CONNECTED_GLOBAL


# ::stappler::xenolith::platform::NMConnectivityState

## BRIEF

## CONTENT

Значения:
* NM_CONNECTIVITY_UNKNOWN
* NM_CONNECTIVITY_NONE
* NM_CONNECTIVITY_PORTAL
* NM_CONNECTIVITY_LIMITED
* NM_CONNECTIVITY_FULL


# ::stappler::xenolith::platform::NMMetered

## BRIEF

## CONTENT

Значения:
* NM_METERED_UNKNOWN
* NM_METERED_YES
* NM_METERED_NO
* NM_METERED_GUESS_YES
* NM_METERED_GUESS_NO


# ::stappler::xenolith::platform::InterfaceThemeInfo

## BRIEF

## CONTENT


# ::stappler::xenolith::platform::InterfaceThemeInfo::DefaultCursorTheme

## BRIEF

## CONTENT

Тип: auto const


# ::stappler::xenolith::platform::InterfaceThemeInfo::DefaultCursorSize

## BRIEF

## CONTENT

Тип: uint16_t const


# ::stappler::xenolith::platform::InterfaceThemeInfo::cursorTheme

## BRIEF

## CONTENT

Тип: stappler::mem_std::String


# ::stappler::xenolith::platform::InterfaceThemeInfo::cursorSize

## BRIEF

## CONTENT

Тип: uint16_t


# ::stappler::xenolith::platform::InterfaceThemeInfo::operator==(stappler::xenolith::platform::InterfaceThemeInfo const&) const

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::platform::InterfaceThemeInfo const&

Возвращает:
* bool

# ::stappler::xenolith::platform::InterfaceThemeInfo::operator!=(stappler::xenolith::platform::InterfaceThemeInfo const&) const

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::platform::InterfaceThemeInfo const&

Возвращает:
* bool

# ::stappler::xenolith::platform::NetworkState

## BRIEF

## CONTENT


# ::stappler::xenolith::platform::NetworkState::networkingEnabled

## BRIEF

## CONTENT

Тип: bool


# ::stappler::xenolith::platform::NetworkState::wirelessEnabled

## BRIEF

## CONTENT

Тип: bool


# ::stappler::xenolith::platform::NetworkState::wwanEnabled

## BRIEF

## CONTENT

Тип: bool


# ::stappler::xenolith::platform::NetworkState::wimaxEnabled

## BRIEF

## CONTENT

Тип: bool


# ::stappler::xenolith::platform::NetworkState::metered

## BRIEF

## CONTENT

Тип: stappler::xenolith::platform::NMMetered


# ::stappler::xenolith::platform::NetworkState::state

## BRIEF

## CONTENT

Тип: stappler::xenolith::platform::NMState


# ::stappler::xenolith::platform::NetworkState::connectivity

## BRIEF

## CONTENT

Тип: stappler::xenolith::platform::NMConnectivityState


# ::stappler::xenolith::platform::NetworkState::primaryConnectionType

## BRIEF

## CONTENT

Тип: stappler::mem_std::String


# ::stappler::xenolith::platform::NetworkState::capabilities

## BRIEF

## CONTENT

Тип: Vector<uint32_t>


# ::stappler::xenolith::platform::NetworkState::operator==(stappler::xenolith::platform::NetworkState const&) const

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::platform::NetworkState const&

Возвращает:
* bool

# ::stappler::xenolith::platform::NetworkState::operator!=(stappler::xenolith::platform::NetworkState const&) const

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::platform::NetworkState const&

Возвращает:
* bool

# ::stappler::xenolith::platform::NetworkState::description() const

## BRIEF

## CONTENT

Возвращает:
* stappler::mem_std::String

# ::stappler::xenolith::platform::DBusLibrary

## BRIEF

## CONTENT


# ::stappler::xenolith::platform::DBusLibrary::get()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::platform::DBusLibrary

# ::stappler::xenolith::platform::DBusLibrary::isAvailable() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::platform::DBusLibrary::getCurrentInterfaceTheme() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::platform::InterfaceThemeInfo

# ::stappler::xenolith::platform::DBusLibrary::addNetworkConnectionCallback(void*,Function<void (const stappler::xenolith::platform::NetworkState &)>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* void*
* Function<void (const stappler::xenolith::platform::NetworkState &)>&&


# ::stappler::xenolith::platform::DBusLibrary::removeNetworkConnectionCallback(void*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* void*


# ::stappler::xenolith::platform::DBusLibrary::DBusLibrary(stappler::xenolith::platform::DBusInterface*)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::platform::DBusInterface*


# ::stappler::xenolith::platform::DBusLibrary::_connection

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::platform::DBusInterface*
