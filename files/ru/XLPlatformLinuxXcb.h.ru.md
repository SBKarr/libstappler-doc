Title: XLPlatformLinuxXcb.h


# XENOLITH_PLATFORM_LINUX_XLPLATFORMLINUXXCB_H_

## BRIEF

## CONTENT


# XL_X11_DEBUG

## BRIEF

## CONTENT


# ::stappler::xenolith::platform::XcbLibrary

## BRIEF

## CONTENT

Базовые классы:
* Ref


# ::stappler::xenolith::platform::XcbLibrary::RANDR_MAJOR_VERSION

## BRIEF

## CONTENT

Доступ: public

Тип: int const


# ::stappler::xenolith::platform::XcbLibrary::RANDR_MINOR_VERSION

## BRIEF

## CONTENT

Доступ: public

Тип: int const


# ::stappler::xenolith::platform::XcbLibrary::ConnectionData

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::platform::XcbLibrary::ConnectionData::screen_nbr

## BRIEF

## CONTENT

Тип: int


# ::stappler::xenolith::platform::XcbLibrary::ConnectionData::connection

## BRIEF

## CONTENT

Тип: xcb_connection_t*


# ::stappler::xenolith::platform::XcbLibrary::ConnectionData::setup

## BRIEF

## CONTENT

Тип: xcb_setup_t const*


# ::stappler::xenolith::platform::XcbLibrary::ConnectionData::screen

## BRIEF

## CONTENT

Тип: xcb_screen_t*


# ::stappler::xenolith::platform::XcbLibrary::getInstance()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::platform::XcbLibrary*

# ::stappler::xenolith::platform::XcbLibrary::XcbLibrary()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::platform::XcbLibrary::~XcbLibrary()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::platform::XcbLibrary::init()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::platform::XcbLibrary::open(stappler::Dso&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::Dso&

Возвращает:
* bool

# ::stappler::xenolith::platform::XcbLibrary::close()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::platform::XcbLibrary::hasRandr() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::platform::XcbLibrary::hasKeysyms() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::platform::XcbLibrary::hasXkb() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::platform::XcbLibrary::xcb_connect

## BRIEF

## CONTENT

Доступ: public

Тип: xcb_connection_t*(*)(char const*,int*)


# ::stappler::xenolith::platform::XcbLibrary::xcb_get_setup

## BRIEF

## CONTENT

Доступ: public

Тип: xcb_setup_t const*(*)(xcb_connection_t*)


# ::stappler::xenolith::platform::XcbLibrary::xcb_setup_roots_iterator

## BRIEF

## CONTENT

Доступ: public

Тип: xcb_screen_iterator_t(*)(xcb_setup_t const*)


# ::stappler::xenolith::platform::XcbLibrary::xcb_screen_next

## BRIEF

## CONTENT

Доступ: public

Тип: void(*)(xcb_screen_iterator_t*)


# ::stappler::xenolith::platform::XcbLibrary::xcb_connection_has_error

## BRIEF

## CONTENT

Доступ: public

Тип: int(*)(xcb_connection_t*)


# ::stappler::xenolith::platform::XcbLibrary::xcb_get_file_descriptor

## BRIEF

## CONTENT

Доступ: public

Тип: int(*)(xcb_connection_t*)


# ::stappler::xenolith::platform::XcbLibrary::xcb_generate_id

## BRIEF

## CONTENT

Доступ: public

Тип: uint32_t(*)(xcb_connection_t*)


# ::stappler::xenolith::platform::XcbLibrary::xcb_flush

## BRIEF

## CONTENT

Доступ: public

Тип: int(*)(xcb_connection_t*)


# ::stappler::xenolith::platform::XcbLibrary::xcb_disconnect

## BRIEF

## CONTENT

Доступ: public

Тип: void(*)(xcb_connection_t*)


# ::stappler::xenolith::platform::XcbLibrary::xcb_poll_for_event

## BRIEF

## CONTENT

Доступ: public

Тип: xcb_generic_event_t*(*)(xcb_connection_t*)


# ::stappler::xenolith::platform::XcbLibrary::xcb_send_event

## BRIEF

## CONTENT

Доступ: public

Тип: xcb_void_cookie_t(*)(xcb_connection_t*,uint8_t,xcb_window_t,uint32_t,char const*)


# ::stappler::xenolith::platform::XcbLibrary::xcb_get_extension_data

## BRIEF

## CONTENT

Доступ: public

Тип: xcb_query_extension_reply_t const*(*)(xcb_connection_t*,xcb_extension_t*)


# ::stappler::xenolith::platform::XcbLibrary::xcb_map_window

## BRIEF

## CONTENT

Доступ: public

Тип: xcb_void_cookie_t(*)(xcb_connection_t*,xcb_window_t)


# ::stappler::xenolith::platform::XcbLibrary::xcb_create_window

## BRIEF

## CONTENT

Доступ: public

Тип: xcb_void_cookie_t(*)(xcb_connection_t*,uint8_t,xcb_window_t,xcb_window_t,int16_t,int16_t,uint16_t,uint16_t,uint16_t,uint16_t,xcb_visualid_t,uint32_t,void const*)


# ::stappler::xenolith::platform::XcbLibrary::xcb_change_property

## BRIEF

## CONTENT

Доступ: public

Тип: xcb_void_cookie_t(*)(xcb_connection_t*,uint8_t,xcb_window_t,xcb_atom_t,xcb_atom_t,uint8_t,uint32_t,void const*)


# ::stappler::xenolith::platform::XcbLibrary::xcb_intern_atom

## BRIEF

## CONTENT

Доступ: public

Тип: xcb_intern_atom_cookie_t(*)(xcb_connection_t*,uint8_t,uint16_t,char const*)


# ::stappler::xenolith::platform::XcbLibrary::xcb_intern_atom_reply

## BRIEF

## CONTENT

Доступ: public

Тип: xcb_intern_atom_reply_t*(*)(xcb_connection_t*,xcb_intern_atom_cookie_t,xcb_generic_error_t**)


# ::stappler::xenolith::platform::XcbLibrary::xcb_get_property_reply

## BRIEF

## CONTENT

Доступ: public

Тип: xcb_get_property_reply_t*(*)(xcb_connection_t*,xcb_get_property_cookie_t,xcb_generic_error_t**)


# ::stappler::xenolith::platform::XcbLibrary::xcb_get_property

## BRIEF

## CONTENT

Доступ: public

Тип: xcb_get_property_cookie_t(*)(xcb_connection_t*,uint8_t,xcb_window_t,xcb_atom_t,xcb_atom_t,uint32_t,uint32_t)


# ::stappler::xenolith::platform::XcbLibrary::xcb_get_property_value

## BRIEF

## CONTENT

Доступ: public

Тип: void*(*)(xcb_get_property_reply_t const*)


# ::stappler::xenolith::platform::XcbLibrary::xcb_get_property_value_length

## BRIEF

## CONTENT

Доступ: public

Тип: int(*)(xcb_get_property_reply_t const*)


# ::stappler::xenolith::platform::XcbLibrary::xcb_wait_for_reply

## BRIEF

## CONTENT

Доступ: public

Тип: void*(*)(xcb_connection_t*,unsigned int,xcb_generic_error_t**)


# ::stappler::xenolith::platform::XcbLibrary::xcb_get_modifier_mapping_unchecked

## BRIEF

## CONTENT

Доступ: public

Тип: xcb_get_modifier_mapping_cookie_t(*)(xcb_connection_t*)


# ::stappler::xenolith::platform::XcbLibrary::xcb_get_modifier_mapping_reply

## BRIEF

## CONTENT

Доступ: public

Тип: xcb_get_modifier_mapping_reply_t*(*)(xcb_connection_t*,xcb_get_modifier_mapping_cookie_t,xcb_generic_error_t**)


# ::stappler::xenolith::platform::XcbLibrary::xcb_get_modifier_mapping_keycodes

## BRIEF

## CONTENT

Доступ: public

Тип: xcb_keycode_t*(*)(xcb_get_modifier_mapping_reply_t const*)


# ::stappler::xenolith::platform::XcbLibrary::xcb_convert_selection

## BRIEF

## CONTENT

Доступ: public

Тип: xcb_void_cookie_t(*)(xcb_connection_t*,xcb_window_t,xcb_atom_t,xcb_atom_t,xcb_atom_t,xcb_timestamp_t)


# ::stappler::xenolith::platform::XcbLibrary::xcb_set_selection_owner

## BRIEF

## CONTENT

Доступ: public

Тип: xcb_void_cookie_t(*)(xcb_connection_t*,xcb_window_t,xcb_atom_t,xcb_timestamp_t)


# ::stappler::xenolith::platform::XcbLibrary::xcb_get_selection_owner

## BRIEF

## CONTENT

Доступ: public

Тип: xcb_get_selection_owner_cookie_t(*)(xcb_connection_t*,xcb_atom_t)


# ::stappler::xenolith::platform::XcbLibrary::xcb_get_selection_owner_reply

## BRIEF

## CONTENT

Доступ: public

Тип: xcb_get_selection_owner_reply_t*(*)(xcb_connection_t*,xcb_get_selection_owner_cookie_t,xcb_generic_error_t**)


# ::stappler::xenolith::platform::XcbLibrary::xcb_get_keyboard_mapping

## BRIEF

## CONTENT

Доступ: public

Тип: xcb_get_keyboard_mapping_cookie_t(*)(xcb_connection_t*,xcb_keycode_t,uint8_t)


# ::stappler::xenolith::platform::XcbLibrary::xcb_get_keyboard_mapping_reply

## BRIEF

## CONTENT

Доступ: public

Тип: xcb_get_keyboard_mapping_reply_t*(*)(xcb_connection_t*,xcb_get_keyboard_mapping_cookie_t,xcb_generic_error_t**)


# ::stappler::xenolith::platform::XcbLibrary::xcb_randr_id

## BRIEF

## CONTENT

Доступ: public

Тип: xcb_extension_t*


# ::stappler::xenolith::platform::XcbLibrary::xcb_randr_query_version

## BRIEF

## CONTENT

Доступ: public

Тип: xcb_randr_query_version_cookie_t(*)(xcb_connection_t*,uint32_t,uint32_t)


# ::stappler::xenolith::platform::XcbLibrary::xcb_randr_query_version_reply

## BRIEF

## CONTENT

Доступ: public

Тип: xcb_randr_query_version_reply_t*(*)(xcb_connection_t*,xcb_randr_query_version_cookie_t,xcb_generic_error_t**)


# ::stappler::xenolith::platform::XcbLibrary::xcb_randr_get_screen_info_unchecked

## BRIEF

## CONTENT

Доступ: public

Тип: xcb_randr_get_screen_info_cookie_t(*)(xcb_connection_t*,xcb_window_t)


# ::stappler::xenolith::platform::XcbLibrary::xcb_randr_get_screen_info_reply

## BRIEF

## CONTENT

Доступ: public

Тип: xcb_randr_get_screen_info_reply_t*(*)(xcb_connection_t*,xcb_randr_get_screen_info_cookie_t,xcb_generic_error_t**)


# ::stappler::xenolith::platform::XcbLibrary::xcb_randr_get_screen_info_sizes

## BRIEF

## CONTENT

Доступ: public

Тип: xcb_randr_screen_size_t*(*)(xcb_randr_get_screen_info_reply_t const*)


# ::stappler::xenolith::platform::XcbLibrary::xcb_randr_get_screen_info_sizes_length

## BRIEF

## CONTENT

Доступ: public

Тип: int(*)(xcb_randr_get_screen_info_reply_t const*)


# ::stappler::xenolith::platform::XcbLibrary::xcb_randr_get_screen_info_sizes_iterator

## BRIEF

## CONTENT

Доступ: public

Тип: xcb_randr_screen_size_iterator_t(*)(xcb_randr_get_screen_info_reply_t const*)


# ::stappler::xenolith::platform::XcbLibrary::xcb_randr_get_screen_info_rates_length

## BRIEF

## CONTENT

Доступ: public

Тип: int(*)(xcb_randr_get_screen_info_reply_t const*)


# ::stappler::xenolith::platform::XcbLibrary::xcb_randr_get_screen_info_rates_iterator

## BRIEF

## CONTENT

Доступ: public

Тип: xcb_randr_refresh_rates_iterator_t(*)(xcb_randr_get_screen_info_reply_t const*)


# ::stappler::xenolith::platform::XcbLibrary::xcb_randr_refresh_rates_next

## BRIEF

## CONTENT

Доступ: public

Тип: void(*)(xcb_randr_refresh_rates_iterator_t*)


# ::stappler::xenolith::platform::XcbLibrary::xcb_randr_refresh_rates_end

## BRIEF

## CONTENT

Доступ: public

Тип: xcb_generic_iterator_t(*)(xcb_randr_refresh_rates_iterator_t)


# ::stappler::xenolith::platform::XcbLibrary::xcb_randr_refresh_rates_rates

## BRIEF

## CONTENT

Доступ: public

Тип: uint16_t*(*)(xcb_randr_refresh_rates_t const*)


# ::stappler::xenolith::platform::XcbLibrary::xcb_randr_refresh_rates_rates_length

## BRIEF

## CONTENT

Доступ: public

Тип: int(*)(xcb_randr_refresh_rates_t const*)


# ::stappler::xenolith::platform::XcbLibrary::xcb_randr_get_screen_resources

## BRIEF

## CONTENT

Доступ: public

Тип: xcb_randr_get_screen_resources_cookie_t(*)(xcb_connection_t*,xcb_window_t)


# ::stappler::xenolith::platform::XcbLibrary::xcb_randr_get_screen_resources_unchecked

## BRIEF

## CONTENT

Доступ: public

Тип: xcb_randr_get_screen_resources_cookie_t(*)(xcb_connection_t*,xcb_window_t)


# ::stappler::xenolith::platform::XcbLibrary::xcb_randr_get_screen_resources_reply

## BRIEF

## CONTENT

Доступ: public

Тип: xcb_randr_get_screen_resources_reply_t*(*)(xcb_connection_t*,xcb_randr_get_screen_resources_cookie_t,xcb_generic_error_t**)


# ::stappler::xenolith::platform::XcbLibrary::xcb_randr_get_screen_resources_modes

## BRIEF

## CONTENT

Доступ: public

Тип: xcb_randr_mode_info_t*(*)(xcb_randr_get_screen_resources_reply_t const*)


# ::stappler::xenolith::platform::XcbLibrary::xcb_randr_get_screen_resources_modes_length

## BRIEF

## CONTENT

Доступ: public

Тип: int(*)(xcb_randr_get_screen_resources_reply_t const*)


# ::stappler::xenolith::platform::XcbLibrary::xcb_randr_get_screen_resources_current

## BRIEF

## CONTENT

Доступ: public

Тип: xcb_randr_get_screen_resources_current_cookie_t(*)(xcb_connection_t*,xcb_window_t)


# ::stappler::xenolith::platform::XcbLibrary::xcb_randr_get_screen_resources_current_unchecked

## BRIEF

## CONTENT

Доступ: public

Тип: xcb_randr_get_screen_resources_current_cookie_t(*)(xcb_connection_t*,xcb_window_t)


# ::stappler::xenolith::platform::XcbLibrary::xcb_randr_get_screen_resources_current_reply

## BRIEF

## CONTENT

Доступ: public

Тип: xcb_randr_get_screen_resources_current_reply_t*(*)(xcb_connection_t*,xcb_randr_get_screen_resources_current_cookie_t,xcb_generic_error_t**)


# ::stappler::xenolith::platform::XcbLibrary::xcb_randr_get_screen_resources_current_outputs

## BRIEF

## CONTENT

Доступ: public

Тип: xcb_randr_output_t*(*)(xcb_randr_get_screen_resources_current_reply_t const*)


# ::stappler::xenolith::platform::XcbLibrary::xcb_randr_get_screen_resources_current_outputs_length

## BRIEF

## CONTENT

Доступ: public

Тип: int(*)(xcb_randr_get_screen_resources_current_reply_t const*)


# ::stappler::xenolith::platform::XcbLibrary::xcb_randr_get_screen_resources_current_modes

## BRIEF

## CONTENT

Доступ: public

Тип: xcb_randr_mode_info_t*(*)(xcb_randr_get_screen_resources_current_reply_t const*)


# ::stappler::xenolith::platform::XcbLibrary::xcb_randr_get_screen_resources_current_modes_length

## BRIEF

## CONTENT

Доступ: public

Тип: int(*)(xcb_randr_get_screen_resources_current_reply_t const*)


# ::stappler::xenolith::platform::XcbLibrary::xcb_randr_get_screen_resources_current_names

## BRIEF

## CONTENT

Доступ: public

Тип: uint8_t*(*)(xcb_randr_get_screen_resources_current_reply_t const*)


# ::stappler::xenolith::platform::XcbLibrary::xcb_randr_get_screen_resources_current_names_length

## BRIEF

## CONTENT

Доступ: public

Тип: int(*)(xcb_randr_get_screen_resources_current_reply_t const*)


# ::stappler::xenolith::platform::XcbLibrary::xcb_randr_get_screen_resources_current_crtcs

## BRIEF

## CONTENT

Доступ: public

Тип: xcb_randr_crtc_t*(*)(xcb_randr_get_screen_resources_current_reply_t const*)


# ::stappler::xenolith::platform::XcbLibrary::xcb_randr_get_screen_resources_current_crtcs_length

## BRIEF

## CONTENT

Доступ: public

Тип: int(*)(xcb_randr_get_screen_resources_current_reply_t const*)


# ::stappler::xenolith::platform::XcbLibrary::xcb_randr_get_output_primary

## BRIEF

## CONTENT

Доступ: public

Тип: xcb_randr_get_output_primary_cookie_t(*)(xcb_connection_t*,xcb_window_t)


# ::stappler::xenolith::platform::XcbLibrary::xcb_randr_get_output_primary_unchecked

## BRIEF

## CONTENT

Доступ: public

Тип: xcb_randr_get_output_primary_cookie_t(*)(xcb_connection_t*,xcb_window_t)


# ::stappler::xenolith::platform::XcbLibrary::xcb_randr_get_output_primary_reply

## BRIEF

## CONTENT

Доступ: public

Тип: xcb_randr_get_output_primary_reply_t*(*)(xcb_connection_t*,xcb_randr_get_output_primary_cookie_t,xcb_generic_error_t**)


# ::stappler::xenolith::platform::XcbLibrary::xcb_randr_get_output_info

## BRIEF

## CONTENT

Доступ: public

Тип: xcb_randr_get_output_info_cookie_t(*)(xcb_connection_t*,xcb_randr_output_t,xcb_timestamp_t)


# ::stappler::xenolith::platform::XcbLibrary::xcb_randr_get_output_info_unchecked

## BRIEF

## CONTENT

Доступ: public

Тип: xcb_randr_get_output_info_cookie_t(*)(xcb_connection_t*,xcb_randr_output_t,xcb_timestamp_t)


# ::stappler::xenolith::platform::XcbLibrary::xcb_randr_get_output_info_reply

## BRIEF

## CONTENT

Доступ: public

Тип: xcb_randr_get_output_info_reply_t*(*)(xcb_connection_t*,xcb_randr_get_output_info_cookie_t,xcb_generic_error_t**)


# ::stappler::xenolith::platform::XcbLibrary::xcb_randr_get_output_info_crtcs

## BRIEF

## CONTENT

Доступ: public

Тип: xcb_randr_crtc_t*(*)(xcb_randr_get_output_info_reply_t const*)


# ::stappler::xenolith::platform::XcbLibrary::xcb_randr_get_output_info_crtcs_length

## BRIEF

## CONTENT

Доступ: public

Тип: int(*)(xcb_randr_get_output_info_reply_t const*)


# ::stappler::xenolith::platform::XcbLibrary::xcb_randr_get_output_info_crtcs_end

## BRIEF

## CONTENT

Доступ: public

Тип: xcb_generic_iterator_t(*)(xcb_randr_get_output_info_reply_t const*)


# ::stappler::xenolith::platform::XcbLibrary::xcb_randr_get_output_info_modes

## BRIEF

## CONTENT

Доступ: public

Тип: xcb_randr_mode_t*(*)(xcb_randr_get_output_info_reply_t const*)


# ::stappler::xenolith::platform::XcbLibrary::xcb_randr_get_output_info_modes_length

## BRIEF

## CONTENT

Доступ: public

Тип: int(*)(xcb_randr_get_output_info_reply_t const*)


# ::stappler::xenolith::platform::XcbLibrary::xcb_randr_get_output_info_name

## BRIEF

## CONTENT

Доступ: public

Тип: uint8_t*(*)(xcb_randr_get_output_info_reply_t const*)


# ::stappler::xenolith::platform::XcbLibrary::xcb_randr_get_output_info_name_length

## BRIEF

## CONTENT

Доступ: public

Тип: int(*)(xcb_randr_get_output_info_reply_t const*)


# ::stappler::xenolith::platform::XcbLibrary::xcb_randr_get_crtc_info

## BRIEF

## CONTENT

Доступ: public

Тип: xcb_randr_get_crtc_info_cookie_t(*)(xcb_connection_t*,xcb_randr_crtc_t,xcb_timestamp_t)


# ::stappler::xenolith::platform::XcbLibrary::xcb_randr_get_crtc_info_unchecked

## BRIEF

## CONTENT

Доступ: public

Тип: xcb_randr_get_crtc_info_cookie_t(*)(xcb_connection_t*,xcb_randr_crtc_t,xcb_timestamp_t)


# ::stappler::xenolith::platform::XcbLibrary::xcb_randr_get_crtc_info_reply

## BRIEF

## CONTENT

Доступ: public

Тип: xcb_randr_get_crtc_info_reply_t*(*)(xcb_connection_t*,xcb_randr_get_crtc_info_cookie_t,xcb_generic_error_t**)


# ::stappler::xenolith::platform::XcbLibrary::xcb_randr_get_crtc_info_outputs

## BRIEF

## CONTENT

Доступ: public

Тип: xcb_randr_output_t*(*)(xcb_randr_get_crtc_info_reply_t const*)


# ::stappler::xenolith::platform::XcbLibrary::xcb_randr_get_crtc_info_outputs_length

## BRIEF

## CONTENT

Доступ: public

Тип: int(*)(xcb_randr_get_crtc_info_reply_t const*)


# ::stappler::xenolith::platform::XcbLibrary::xcb_randr_get_crtc_info_possible

## BRIEF

## CONTENT

Доступ: public

Тип: xcb_randr_output_t*(*)(xcb_randr_get_crtc_info_reply_t const*)


# ::stappler::xenolith::platform::XcbLibrary::xcb_randr_get_crtc_info_possible_length

## BRIEF

## CONTENT

Доступ: public

Тип: int(*)(xcb_randr_get_crtc_info_reply_t const*)


# ::stappler::xenolith::platform::XcbLibrary::xcb_key_symbols_alloc

## BRIEF

## CONTENT

Доступ: public

Тип: xcb_key_symbols_t*(*)(xcb_connection_t*)


# ::stappler::xenolith::platform::XcbLibrary::xcb_key_symbols_free

## BRIEF

## CONTENT

Доступ: public

Тип: void(*)(xcb_key_symbols_t*)


# ::stappler::xenolith::platform::XcbLibrary::xcb_key_symbols_get_keysym

## BRIEF

## CONTENT

Доступ: public

Тип: xcb_keysym_t(*)(xcb_key_symbols_t*,xcb_keycode_t,int)


# ::stappler::xenolith::platform::XcbLibrary::xcb_key_symbols_get_keycode

## BRIEF

## CONTENT

Доступ: public

Тип: xcb_keycode_t*(*)(xcb_key_symbols_t*,xcb_keysym_t)


# ::stappler::xenolith::platform::XcbLibrary::xcb_key_press_lookup_keysym

## BRIEF

## CONTENT

Доступ: public

Тип: xcb_keysym_t(*)(xcb_key_symbols_t*,xcb_key_press_event_t*,int)


# ::stappler::xenolith::platform::XcbLibrary::xcb_key_release_lookup_keysym

## BRIEF

## CONTENT

Доступ: public

Тип: xcb_keysym_t(*)(xcb_key_symbols_t*,xcb_key_release_event_t*,int)


# ::stappler::xenolith::platform::XcbLibrary::xcb_refresh_keyboard_mapping

## BRIEF

## CONTENT

Доступ: public

Тип: int(*)(xcb_key_symbols_t*,xcb_mapping_notify_event_t*)


# ::stappler::xenolith::platform::XcbLibrary::xcb_is_keypad_key

## BRIEF

## CONTENT

Доступ: public

Тип: int(*)(xcb_keysym_t)


# ::stappler::xenolith::platform::XcbLibrary::xcb_is_private_keypad_key

## BRIEF

## CONTENT

Доступ: public

Тип: int(*)(xcb_keysym_t)


# ::stappler::xenolith::platform::XcbLibrary::xcb_is_cursor_key

## BRIEF

## CONTENT

Доступ: public

Тип: int(*)(xcb_keysym_t)


# ::stappler::xenolith::platform::XcbLibrary::xcb_is_pf_key

## BRIEF

## CONTENT

Доступ: public

Тип: int(*)(xcb_keysym_t)


# ::stappler::xenolith::platform::XcbLibrary::xcb_is_function_key

## BRIEF

## CONTENT

Доступ: public

Тип: int(*)(xcb_keysym_t)


# ::stappler::xenolith::platform::XcbLibrary::xcb_is_misc_function_key

## BRIEF

## CONTENT

Доступ: public

Тип: int(*)(xcb_keysym_t)


# ::stappler::xenolith::platform::XcbLibrary::xcb_is_modifier_key

## BRIEF

## CONTENT

Доступ: public

Тип: int(*)(xcb_keysym_t)


# ::stappler::xenolith::platform::XcbLibrary::xcb_xkb_select_events

## BRIEF

## CONTENT

Доступ: public

Тип: xcb_void_cookie_t(*)(xcb_connection_t*,xcb_xkb_device_spec_t,uint16_t,uint16_t,uint16_t,uint16_t,uint16_t,void const*)


# ::stappler::xenolith::platform::XcbLibrary::acquireConnection()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::platform::XcbLibrary::ConnectionData

# ::stappler::xenolith::platform::XcbLibrary::getActiveConnection() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::platform::XcbLibrary::ConnectionData

# ::stappler::xenolith::platform::XcbLibrary::openAux()

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::platform::XcbLibrary::openConnection(stappler::xenolith::platform::XcbLibrary::ConnectionData&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::platform::XcbLibrary::ConnectionData&


# ::stappler::xenolith::platform::XcbLibrary::_handle

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::Dso


# ::stappler::xenolith::platform::XcbLibrary::_randr

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::Dso


# ::stappler::xenolith::platform::XcbLibrary::_keysyms

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::Dso


# ::stappler::xenolith::platform::XcbLibrary::_xkb

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::Dso


# ::stappler::xenolith::platform::XcbLibrary::_pending

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::platform::XcbLibrary::ConnectionData


# ::stappler::xenolith::platform::XcbLibrary::_current

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::platform::XcbLibrary::ConnectionData


# ::stappler::xenolith::platform::XcbAtomIndex

## BRIEF

## CONTENT

Значения:
* WM_PROTOCOLS
* WM_DELETE_WINDOW
* WM_NAME
* WM_ICON_NAME
* SAVE_TARGETS
* CLIPBOARD
* PRIMARY
* TARGETS
* MULTIPLE
* STRING
* XNULL
* XENOLITH_CLIPBOARD


# ::stappler::xenolith::platform::XcbAtomRequest

## BRIEF

## CONTENT


# ::stappler::xenolith::platform::XcbAtomRequest::name

## BRIEF

## CONTENT

Тип: stappler::StringView


# ::stappler::xenolith::platform::XcbAtomRequest::onlyIfExists

## BRIEF

## CONTENT

Тип: bool


# ::stappler::xenolith::platform::s_atomRequests

## BRIEF

## CONTENT

Тип: stappler::xenolith::platform::XcbAtomRequest[12]
