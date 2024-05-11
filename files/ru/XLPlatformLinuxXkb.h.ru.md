Title: XLPlatformLinuxXkb.h


# XENOLITH_PLATFORM_LINUX_XLPLATFORMLINUXXKB_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::platform::XkbLibrary

## BRIEF

## CONTENT

Базовые классы:
* Ref


# ::stappler::xenolith::platform::XkbLibrary::getInstance()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::platform::XkbLibrary*

# ::stappler::xenolith::platform::XkbLibrary::XkbLibrary()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::platform::XkbLibrary::~XkbLibrary()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::platform::XkbLibrary::init()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::platform::XkbLibrary::close()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::platform::XkbLibrary::hasX11() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::platform::XkbLibrary::getContext() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* xkb_context*

# ::stappler::xenolith::platform::XkbLibrary::xkb_context_new

## BRIEF

## CONTENT

Доступ: public

Тип: xkb_context*(*)(enum xkb_context_flags)


# ::stappler::xenolith::platform::XkbLibrary::xkb_context_ref

## BRIEF

## CONTENT

Доступ: public

Тип: xkb_context*(*)(xkb_context*)


# ::stappler::xenolith::platform::XkbLibrary::xkb_context_unref

## BRIEF

## CONTENT

Доступ: public

Тип: void(*)(xkb_context*)


# ::stappler::xenolith::platform::XkbLibrary::xkb_keymap_unref

## BRIEF

## CONTENT

Доступ: public

Тип: void(*)(xkb_keymap*)


# ::stappler::xenolith::platform::XkbLibrary::xkb_state_unref

## BRIEF

## CONTENT

Доступ: public

Тип: void(*)(xkb_state*)


# ::stappler::xenolith::platform::XkbLibrary::xkb_keymap_new_from_string

## BRIEF

## CONTENT

Доступ: public

Тип: xkb_keymap*(*)(xkb_context*,char const*,enum xkb_keymap_format,enum xkb_keymap_compile_flags)


# ::stappler::xenolith::platform::XkbLibrary::xkb_state_new

## BRIEF

## CONTENT

Доступ: public

Тип: xkb_state*(*)(xkb_keymap*)


# ::stappler::xenolith::platform::XkbLibrary::xkb_state_update_mask

## BRIEF

## CONTENT

Доступ: public

Тип: enum xkb_state_component(*)(xkb_state*,xkb_mod_mask_t,xkb_mod_mask_t,xkb_mod_mask_t,xkb_layout_index_t,xkb_layout_index_t,xkb_layout_index_t)


# ::stappler::xenolith::platform::XkbLibrary::xkb_state_key_get_utf8

## BRIEF

## CONTENT

Доступ: public

Тип: int(*)(xkb_state*,xkb_keycode_t,char*,size_t)


# ::stappler::xenolith::platform::XkbLibrary::xkb_state_key_get_utf32

## BRIEF

## CONTENT

Доступ: public

Тип: uint32_t(*)(xkb_state*,xkb_keycode_t)


# ::stappler::xenolith::platform::XkbLibrary::xkb_state_key_get_one_sym

## BRIEF

## CONTENT

Доступ: public

Тип: xkb_keysym_t(*)(xkb_state*,xkb_keycode_t)


# ::stappler::xenolith::platform::XkbLibrary::xkb_state_mod_index_is_active

## BRIEF

## CONTENT

Доступ: public

Тип: int(*)(xkb_state*,xkb_mod_index_t,enum xkb_state_component)


# ::stappler::xenolith::platform::XkbLibrary::xkb_state_key_get_syms

## BRIEF

## CONTENT

Доступ: public

Тип: int(*)(xkb_state*,xkb_keycode_t,xkb_keysym_t const**)


# ::stappler::xenolith::platform::XkbLibrary::xkb_state_get_keymap

## BRIEF

## CONTENT

Доступ: public

Тип: xkb_keymap*(*)(xkb_state*)


# ::stappler::xenolith::platform::XkbLibrary::xkb_keymap_key_for_each

## BRIEF

## CONTENT

Доступ: public

Тип: void(*)(xkb_keymap*,xkb_keymap_key_iter_t,void*)


# ::stappler::xenolith::platform::XkbLibrary::xkb_keymap_key_get_name

## BRIEF

## CONTENT

Доступ: public

Тип: char const*(*)(xkb_keymap*,xkb_keycode_t)


# ::stappler::xenolith::platform::XkbLibrary::xkb_keymap_mod_get_index

## BRIEF

## CONTENT

Доступ: public

Тип: xkb_mod_index_t(*)(xkb_keymap*,char const*)


# ::stappler::xenolith::platform::XkbLibrary::xkb_keymap_key_repeats

## BRIEF

## CONTENT

Доступ: public

Тип: int(*)(xkb_keymap*,xkb_keycode_t)


# ::stappler::xenolith::platform::XkbLibrary::xkb_keysym_to_utf32

## BRIEF

## CONTENT

Доступ: public

Тип: uint32_t(*)(xkb_keysym_t)


# ::stappler::xenolith::platform::XkbLibrary::xkb_compose_table_new_from_locale

## BRIEF

## CONTENT

Доступ: public

Тип: xkb_compose_table*(*)(xkb_context*,char const*,enum xkb_compose_compile_flags)


# ::stappler::xenolith::platform::XkbLibrary::xkb_compose_table_unref

## BRIEF

## CONTENT

Доступ: public

Тип: void(*)(xkb_compose_table*)


# ::stappler::xenolith::platform::XkbLibrary::xkb_compose_state_new

## BRIEF

## CONTENT

Доступ: public

Тип: xkb_compose_state*(*)(xkb_compose_table*,enum xkb_compose_state_flags)


# ::stappler::xenolith::platform::XkbLibrary::xkb_compose_state_feed

## BRIEF

## CONTENT

Доступ: public

Тип: enum xkb_compose_feed_result(*)(xkb_compose_state*,xkb_keysym_t)


# ::stappler::xenolith::platform::XkbLibrary::xkb_compose_state_reset

## BRIEF

## CONTENT

Доступ: public

Тип: void(*)(xkb_compose_state*)


# ::stappler::xenolith::platform::XkbLibrary::xkb_compose_state_get_status

## BRIEF

## CONTENT

Доступ: public

Тип: enum xkb_compose_status(*)(xkb_compose_state*)


# ::stappler::xenolith::platform::XkbLibrary::xkb_compose_state_get_one_sym

## BRIEF

## CONTENT

Доступ: public

Тип: xkb_keysym_t(*)(xkb_compose_state*)


# ::stappler::xenolith::platform::XkbLibrary::xkb_compose_state_unref

## BRIEF

## CONTENT

Доступ: public

Тип: void(*)(xkb_compose_state*)


# ::stappler::xenolith::platform::XkbLibrary::xkb_x11_setup_xkb_extension

## BRIEF

## CONTENT

Доступ: public

Тип: int(*)(xcb_connection_t*,uint16_t,uint16_t,enum xkb_x11_setup_xkb_extension_flags,uint16_t*,uint16_t*,uint8_t*,uint8_t*)


# ::stappler::xenolith::platform::XkbLibrary::xkb_x11_get_core_keyboard_device_id

## BRIEF

## CONTENT

Доступ: public

Тип: int32_t(*)(xcb_connection_t*)


# ::stappler::xenolith::platform::XkbLibrary::xkb_x11_keymap_new_from_device

## BRIEF

## CONTENT

Доступ: public

Тип: xkb_keymap*(*)(xkb_context*,xcb_connection_t*,int32_t,enum xkb_keymap_compile_flags)


# ::stappler::xenolith::platform::XkbLibrary::xkb_x11_state_new_from_device

## BRIEF

## CONTENT

Доступ: public

Тип: xkb_state*(*)(xkb_keymap*,xcb_connection_t*,int32_t)


# ::stappler::xenolith::platform::XkbLibrary::open(stappler::Dso&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::Dso&

Возвращает:
* bool

# ::stappler::xenolith::platform::XkbLibrary::openAux()

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::platform::XkbLibrary::_handle

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::Dso


# ::stappler::xenolith::platform::XkbLibrary::_x11

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::Dso


# ::stappler::xenolith::platform::XkbLibrary::_context

## BRIEF

## CONTENT

Доступ: protected

Тип: xkb_context*
