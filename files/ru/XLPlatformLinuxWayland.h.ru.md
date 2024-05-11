Title: XLPlatformLinuxWayland.h


# XENOLITH_PLATFORM_LINUX_XLPLATFORMLINUXWAYLAND_H_

## BRIEF

## CONTENT


# XL_WAYLAND_DEBUG

## BRIEF

## CONTENT


# ::stappler::xenolith::platform::WaylandLibrary

## BRIEF

## CONTENT

Базовые классы:
* Ref


# ::stappler::xenolith::platform::WaylandLibrary::ConnectionData

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::platform::WaylandLibrary::ConnectionData::display

## BRIEF

## CONTENT

Тип: wl_display*


# ::stappler::xenolith::platform::WaylandLibrary::getInstance()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::platform::WaylandLibrary*

# ::stappler::xenolith::platform::WaylandLibrary::ownsProxy(wl_proxy*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* wl_proxy*

Возвращает:
* bool

# ::stappler::xenolith::platform::WaylandLibrary::ownsProxy(wl_output*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* wl_output*

Возвращает:
* bool

# ::stappler::xenolith::platform::WaylandLibrary::ownsProxy(wl_surface*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* wl_surface*

Возвращает:
* bool

# ::stappler::xenolith::platform::WaylandLibrary::~WaylandLibrary()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::platform::WaylandLibrary::WaylandLibrary()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::platform::WaylandLibrary::init()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::platform::WaylandLibrary::close()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::platform::WaylandLibrary::wl_registry_interface

## BRIEF

## CONTENT

Доступ: public

Тип: wl_interface const*


# ::stappler::xenolith::platform::WaylandLibrary::wl_compositor_interface

## BRIEF

## CONTENT

Доступ: public

Тип: wl_interface const*


# ::stappler::xenolith::platform::WaylandLibrary::wl_output_interface

## BRIEF

## CONTENT

Доступ: public

Тип: wl_interface const*


# ::stappler::xenolith::platform::WaylandLibrary::wl_seat_interface

## BRIEF

## CONTENT

Доступ: public

Тип: wl_interface const*


# ::stappler::xenolith::platform::WaylandLibrary::wl_surface_interface

## BRIEF

## CONTENT

Доступ: public

Тип: wl_interface const*


# ::stappler::xenolith::platform::WaylandLibrary::wl_region_interface

## BRIEF

## CONTENT

Доступ: public

Тип: wl_interface const*


# ::stappler::xenolith::platform::WaylandLibrary::wl_callback_interface

## BRIEF

## CONTENT

Доступ: public

Тип: wl_interface const*


# ::stappler::xenolith::platform::WaylandLibrary::wl_pointer_interface

## BRIEF

## CONTENT

Доступ: public

Тип: wl_interface const*


# ::stappler::xenolith::platform::WaylandLibrary::wl_keyboard_interface

## BRIEF

## CONTENT

Доступ: public

Тип: wl_interface const*


# ::stappler::xenolith::platform::WaylandLibrary::wl_touch_interface

## BRIEF

## CONTENT

Доступ: public

Тип: wl_interface const*


# ::stappler::xenolith::platform::WaylandLibrary::wl_shm_interface

## BRIEF

## CONTENT

Доступ: public

Тип: wl_interface const*


# ::stappler::xenolith::platform::WaylandLibrary::wl_subcompositor_interface

## BRIEF

## CONTENT

Доступ: public

Тип: wl_interface const*


# ::stappler::xenolith::platform::WaylandLibrary::wl_subsurface_interface

## BRIEF

## CONTENT

Доступ: public

Тип: wl_interface const*


# ::stappler::xenolith::platform::WaylandLibrary::wl_shm_pool_interface

## BRIEF

## CONTENT

Доступ: public

Тип: wl_interface const*


# ::stappler::xenolith::platform::WaylandLibrary::wl_buffer_interface

## BRIEF

## CONTENT

Доступ: public

Тип: wl_interface const*


# ::stappler::xenolith::platform::WaylandLibrary::wp_viewporter_interface

## BRIEF

## CONTENT

Доступ: public

Тип: wl_interface const*


# ::stappler::xenolith::platform::WaylandLibrary::wp_viewport_interface

## BRIEF

## CONTENT

Доступ: public

Тип: wl_interface const*


# ::stappler::xenolith::platform::WaylandLibrary::xdg_wm_base_interface

## BRIEF

## CONTENT

Доступ: public

Тип: wl_interface const*


# ::stappler::xenolith::platform::WaylandLibrary::xdg_positioner_interface

## BRIEF

## CONTENT

Доступ: public

Тип: wl_interface const*


# ::stappler::xenolith::platform::WaylandLibrary::xdg_surface_interface

## BRIEF

## CONTENT

Доступ: public

Тип: wl_interface const*


# ::stappler::xenolith::platform::WaylandLibrary::xdg_toplevel_interface

## BRIEF

## CONTENT

Доступ: public

Тип: wl_interface const*


# ::stappler::xenolith::platform::WaylandLibrary::xdg_popup_interface

## BRIEF

## CONTENT

Доступ: public

Тип: wl_interface const*


# ::stappler::xenolith::platform::WaylandLibrary::wl_display_connect

## BRIEF

## CONTENT

Доступ: public

Тип: wl_display*(*)(char const*)


# ::stappler::xenolith::platform::WaylandLibrary::wl_display_get_fd

## BRIEF

## CONTENT

Доступ: public

Тип: int(*)(wl_display*)


# ::stappler::xenolith::platform::WaylandLibrary::wl_display_dispatch

## BRIEF

## CONTENT

Доступ: public

Тип: int(*)(wl_display*)


# ::stappler::xenolith::platform::WaylandLibrary::wl_display_dispatch_pending

## BRIEF

## CONTENT

Доступ: public

Тип: int(*)(wl_display*)


# ::stappler::xenolith::platform::WaylandLibrary::wl_display_prepare_read

## BRIEF

## CONTENT

Доступ: public

Тип: int(*)(wl_display*)


# ::stappler::xenolith::platform::WaylandLibrary::wl_display_flush

## BRIEF

## CONTENT

Доступ: public

Тип: int(*)(wl_display*)


# ::stappler::xenolith::platform::WaylandLibrary::wl_display_read_events

## BRIEF

## CONTENT

Доступ: public

Тип: int(*)(wl_display*)


# ::stappler::xenolith::platform::WaylandLibrary::wl_display_disconnect

## BRIEF

## CONTENT

Доступ: public

Тип: void(*)(wl_display*)


# ::stappler::xenolith::platform::WaylandLibrary::wl_proxy_marshal_flags

## BRIEF

## CONTENT

Доступ: public

Тип: wl_proxy*(*)(wl_proxy*,uint32_t,wl_interface const*,uint32_t,uint32_t,...)


# ::stappler::xenolith::platform::WaylandLibrary::wl_proxy_get_version

## BRIEF

## CONTENT

Доступ: public

Тип: uint32_t(*)(wl_proxy*)


# ::stappler::xenolith::platform::WaylandLibrary::wl_proxy_add_listener

## BRIEF

## CONTENT

Доступ: public

Тип: int(*)(wl_proxy*,void(**)(),void*)


# ::stappler::xenolith::platform::WaylandLibrary::wl_proxy_set_user_data

## BRIEF

## CONTENT

Доступ: public

Тип: void(*)(wl_proxy*,void*)


# ::stappler::xenolith::platform::WaylandLibrary::wl_proxy_get_user_data

## BRIEF

## CONTENT

Доступ: public

Тип: void*(*)(wl_proxy*)


# ::stappler::xenolith::platform::WaylandLibrary::wl_proxy_set_tag

## BRIEF

## CONTENT

Доступ: public

Тип: void(*)(wl_proxy*,char const* const*)


# ::stappler::xenolith::platform::WaylandLibrary::wl_proxy_get_tag

## BRIEF

## CONTENT

Доступ: public

Тип: char const* const*(*)(wl_proxy*)


# ::stappler::xenolith::platform::WaylandLibrary::wl_proxy_destroy

## BRIEF

## CONTENT

Доступ: public

Тип: void(*)(wl_proxy*)


# ::stappler::xenolith::platform::WaylandLibrary::wl_display_roundtrip

## BRIEF

## CONTENT

Доступ: public

Тип: int(*)(wl_display*)


# ::stappler::xenolith::platform::WaylandLibrary::viewporter

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::xenolith::platform::ViewporterInterface*


# ::stappler::xenolith::platform::WaylandLibrary::xdg

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::xenolith::platform::XdgInterface*


# ::stappler::xenolith::platform::WaylandLibrary::wl_display_get_registry(wl_display*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* wl_display*

Возвращает:
* wl_registry*

# ::stappler::xenolith::platform::WaylandLibrary::wl_registry_bind(wl_registry*,uint32_t,wl_interface const*,uint32_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* wl_registry*
* uint32_t
* wl_interface const*
* uint32_t

Возвращает:
* void*

# ::stappler::xenolith::platform::WaylandLibrary::wl_registry_add_listener(wl_registry*,wl_registry_listener const*,void*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* wl_registry*
* wl_registry_listener const*
* void*

Возвращает:
* int

# ::stappler::xenolith::platform::WaylandLibrary::wl_registry_destroy(wl_registry*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* wl_registry*


# ::stappler::xenolith::platform::WaylandLibrary::wl_shm_create_pool(wl_shm*,int32_t,int32_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* wl_shm*
* int32_t
* int32_t

Возвращает:
* wl_shm_pool*

# ::stappler::xenolith::platform::WaylandLibrary::wl_shm_add_listener(wl_shm*,wl_shm_listener const*,void*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* wl_shm*
* wl_shm_listener const*
* void*

Возвращает:
* int

# ::stappler::xenolith::platform::WaylandLibrary::wl_shm_set_user_data(wl_shm*,void*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* wl_shm*
* void*


# ::stappler::xenolith::platform::WaylandLibrary::wl_shm_get_user_data(wl_shm*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* wl_shm*

Возвращает:
* void*

# ::stappler::xenolith::platform::WaylandLibrary::wl_shm_destroy(wl_shm*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* wl_shm*


# ::stappler::xenolith::platform::WaylandLibrary::wl_shm_pool_destroy(wl_shm_pool*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* wl_shm_pool*


# ::stappler::xenolith::platform::WaylandLibrary::wl_shm_pool_create_buffer(wl_shm_pool*,int32_t,int32_t,int32_t,int32_t,uint32_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* wl_shm_pool*
* int32_t
* int32_t
* int32_t
* int32_t
* uint32_t

Возвращает:
* wl_buffer*

# ::stappler::xenolith::platform::WaylandLibrary::wl_buffer_destroy(wl_buffer*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* wl_buffer*


# ::stappler::xenolith::platform::WaylandLibrary::wl_compositor_create_surface(wl_compositor*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* wl_compositor*

Возвращает:
* wl_surface*

# ::stappler::xenolith::platform::WaylandLibrary::wl_compositor_create_region(wl_compositor*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* wl_compositor*

Возвращает:
* wl_region*

# ::stappler::xenolith::platform::WaylandLibrary::wl_compositor_destroy(wl_compositor*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* wl_compositor*


# ::stappler::xenolith::platform::WaylandLibrary::wl_region_add(wl_region*,int32_t,int32_t,int32_t,int32_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* wl_region*
* int32_t
* int32_t
* int32_t
* int32_t


# ::stappler::xenolith::platform::WaylandLibrary::wl_region_destroy(wl_region*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* wl_region*


# ::stappler::xenolith::platform::WaylandLibrary::wl_surface_add_listener(wl_surface*,wl_surface_listener const*,void*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* wl_surface*
* wl_surface_listener const*
* void*

Возвращает:
* int

# ::stappler::xenolith::platform::WaylandLibrary::wl_surface_attach(wl_surface*,wl_buffer*,int32_t,int32_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* wl_surface*
* wl_buffer*
* int32_t
* int32_t


# ::stappler::xenolith::platform::WaylandLibrary::wl_surface_set_buffer_scale(wl_surface*,int32_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* wl_surface*
* int32_t


# ::stappler::xenolith::platform::WaylandLibrary::wl_surface_commit(wl_surface*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* wl_surface*


# ::stappler::xenolith::platform::WaylandLibrary::wl_surface_damage(wl_surface*,int32_t,int32_t,int32_t,int32_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* wl_surface*
* int32_t
* int32_t
* int32_t
* int32_t


# ::stappler::xenolith::platform::WaylandLibrary::wl_surface_damage_buffer(wl_surface*,int32_t,int32_t,int32_t,int32_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* wl_surface*
* int32_t
* int32_t
* int32_t
* int32_t


# ::stappler::xenolith::platform::WaylandLibrary::wl_surface_set_opaque_region(wl_surface*,wl_region*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* wl_surface*
* wl_region*


# ::stappler::xenolith::platform::WaylandLibrary::wl_surface_set_user_data(wl_surface*,void*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* wl_surface*
* void*


# ::stappler::xenolith::platform::WaylandLibrary::wl_surface_get_user_data(wl_surface*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* wl_surface*

Возвращает:
* void*

# ::stappler::xenolith::platform::WaylandLibrary::wl_surface_destroy(wl_surface*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* wl_surface*


# ::stappler::xenolith::platform::WaylandLibrary::wl_subcompositor_get_subsurface(wl_subcompositor*,wl_surface*,wl_surface*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* wl_subcompositor*
* wl_surface*
* wl_surface*

Возвращает:
* wl_subsurface*

# ::stappler::xenolith::platform::WaylandLibrary::wl_subcompositor_destroy(wl_subcompositor*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* wl_subcompositor*


# ::stappler::xenolith::platform::WaylandLibrary::wl_subsurface_set_position(wl_subsurface*,int32_t,int32_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* wl_subsurface*
* int32_t
* int32_t


# ::stappler::xenolith::platform::WaylandLibrary::wl_subsurface_place_above(wl_subsurface*,wl_surface*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* wl_subsurface*
* wl_surface*


# ::stappler::xenolith::platform::WaylandLibrary::wl_subsurface_place_below(wl_subsurface*,wl_surface*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* wl_subsurface*
* wl_surface*


# ::stappler::xenolith::platform::WaylandLibrary::wl_subsurface_set_sync(wl_subsurface*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* wl_subsurface*


# ::stappler::xenolith::platform::WaylandLibrary::wl_subsurface_set_desync(wl_subsurface*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* wl_subsurface*


# ::stappler::xenolith::platform::WaylandLibrary::wl_subsurface_destroy(wl_subsurface*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* wl_subsurface*


# ::stappler::xenolith::platform::WaylandLibrary::wl_callback_add_listener(wl_callback*,wl_callback_listener const*,void*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* wl_callback*
* wl_callback_listener const*
* void*

Возвращает:
* int

# ::stappler::xenolith::platform::WaylandLibrary::wl_callback_destroy(wl_callback*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* wl_callback*


# ::stappler::xenolith::platform::WaylandLibrary::wl_output_add_listener(wl_output*,wl_output_listener const*,void*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* wl_output*
* wl_output_listener const*
* void*

Возвращает:
* int

# ::stappler::xenolith::platform::WaylandLibrary::wl_surface_frame(wl_surface*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* wl_surface*

Возвращает:
* wl_callback*

# ::stappler::xenolith::platform::WaylandLibrary::wl_output_set_user_data(wl_output*,void*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* wl_output*
* void*


# ::stappler::xenolith::platform::WaylandLibrary::wl_output_get_user_data(wl_output*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* wl_output*

Возвращает:
* void*

# ::stappler::xenolith::platform::WaylandLibrary::wl_output_destroy(wl_output*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* wl_output*


# ::stappler::xenolith::platform::WaylandLibrary::wl_seat_add_listener(wl_seat*,wl_seat_listener const*,void*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* wl_seat*
* wl_seat_listener const*
* void*

Возвращает:
* int

# ::stappler::xenolith::platform::WaylandLibrary::wl_seat_set_user_data(wl_seat*,void*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* wl_seat*
* void*


# ::stappler::xenolith::platform::WaylandLibrary::wl_seat_get_user_data(wl_seat*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* wl_seat*

Возвращает:
* void*

# ::stappler::xenolith::platform::WaylandLibrary::wl_seat_get_pointer(wl_seat*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* wl_seat*

Возвращает:
* wl_pointer*

# ::stappler::xenolith::platform::WaylandLibrary::wl_seat_get_keyboard(wl_seat*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* wl_seat*

Возвращает:
* wl_keyboard*

# ::stappler::xenolith::platform::WaylandLibrary::wl_seat_get_touch(wl_seat*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* wl_seat*

Возвращает:
* wl_touch*

# ::stappler::xenolith::platform::WaylandLibrary::wl_seat_destroy(wl_seat*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* wl_seat*


# ::stappler::xenolith::platform::WaylandLibrary::wl_pointer_add_listener(wl_pointer*,wl_pointer_listener const*,void*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* wl_pointer*
* wl_pointer_listener const*
* void*

Возвращает:
* int

# ::stappler::xenolith::platform::WaylandLibrary::wl_pointer_set_cursor(wl_pointer*,uint32_t,wl_surface*,int32_t,int32_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* wl_pointer*
* uint32_t
* wl_surface*
* int32_t
* int32_t


# ::stappler::xenolith::platform::WaylandLibrary::wl_pointer_release(wl_pointer*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* wl_pointer*


# ::stappler::xenolith::platform::WaylandLibrary::wl_keyboard_add_listener(wl_keyboard*,wl_keyboard_listener const*,void*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* wl_keyboard*
* wl_keyboard_listener const*
* void*

Возвращает:
* int

# ::stappler::xenolith::platform::WaylandLibrary::wl_keyboard_release(wl_keyboard*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* wl_keyboard*


# ::stappler::xenolith::platform::WaylandLibrary::wl_touch_add_listener(wl_touch*,wl_touch_listener const*,void*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* wl_touch*
* wl_touch_listener const*
* void*

Возвращает:
* int

# ::stappler::xenolith::platform::WaylandLibrary::wl_touch_release(wl_touch*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* wl_touch*


# ::stappler::xenolith::platform::WaylandLibrary::wp_viewporter_get_viewport(wp_viewporter*,wl_surface*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* wp_viewporter*
* wl_surface*

Возвращает:
* wp_viewport*

# ::stappler::xenolith::platform::WaylandLibrary::wp_viewporter_destroy(wp_viewporter*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* wp_viewporter*


# ::stappler::xenolith::platform::WaylandLibrary::wp_viewport_set_source(wp_viewport*,wl_fixed_t,wl_fixed_t,wl_fixed_t,wl_fixed_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* wp_viewport*
* wl_fixed_t
* wl_fixed_t
* wl_fixed_t
* wl_fixed_t


# ::stappler::xenolith::platform::WaylandLibrary::wp_viewport_set_destination(wp_viewport*,int32_t,int32_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* wp_viewport*
* int32_t
* int32_t


# ::stappler::xenolith::platform::WaylandLibrary::wp_viewport_destroy(wp_viewport*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* wp_viewport*


# ::stappler::xenolith::platform::WaylandLibrary::xdg_wm_base_add_listener(xdg_wm_base*,xdg_wm_base_listener const*,void*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* xdg_wm_base*
* xdg_wm_base_listener const*
* void*

Возвращает:
* int

# ::stappler::xenolith::platform::WaylandLibrary::xdg_wm_base_pong(xdg_wm_base*,uint32_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* xdg_wm_base*
* uint32_t


# ::stappler::xenolith::platform::WaylandLibrary::xdg_surface_ack_configure(xdg_surface*,uint32_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* xdg_surface*
* uint32_t


# ::stappler::xenolith::platform::WaylandLibrary::xdg_wm_base_get_xdg_surface(xdg_wm_base*,wl_surface*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* xdg_wm_base*
* wl_surface*

Возвращает:
* xdg_surface*

# ::stappler::xenolith::platform::WaylandLibrary::xdg_surface_add_listener(xdg_surface*,xdg_surface_listener const*,void*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* xdg_surface*
* xdg_surface_listener const*
* void*

Возвращает:
* int

# ::stappler::xenolith::platform::WaylandLibrary::xdg_surface_get_toplevel(xdg_surface*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* xdg_surface*

Возвращает:
* xdg_toplevel*

# ::stappler::xenolith::platform::WaylandLibrary::xdg_surface_set_window_geometry(xdg_surface*,int32_t,int32_t,int32_t,int32_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* xdg_surface*
* int32_t
* int32_t
* int32_t
* int32_t


# ::stappler::xenolith::platform::WaylandLibrary::xdg_surface_destroy(xdg_surface*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* xdg_surface*


# ::stappler::xenolith::platform::WaylandLibrary::xdg_toplevel_set_title(xdg_toplevel*,char const*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* xdg_toplevel*
* char const*


# ::stappler::xenolith::platform::WaylandLibrary::xdg_toplevel_set_app_id(xdg_toplevel*,char const*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* xdg_toplevel*
* char const*


# ::stappler::xenolith::platform::WaylandLibrary::xdg_toplevel_add_listener(xdg_toplevel*,xdg_toplevel_listener const*,void*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* xdg_toplevel*
* xdg_toplevel_listener const*
* void*

Возвращает:
* int

# ::stappler::xenolith::platform::WaylandLibrary::xdg_toplevel_move(xdg_toplevel*,wl_seat*,uint32_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* xdg_toplevel*
* wl_seat*
* uint32_t


# ::stappler::xenolith::platform::WaylandLibrary::xdg_toplevel_resize(xdg_toplevel*,wl_seat*,uint32_t,uint32_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* xdg_toplevel*
* wl_seat*
* uint32_t
* uint32_t


# ::stappler::xenolith::platform::WaylandLibrary::xdg_toplevel_set_max_size(xdg_toplevel*,int32_t,int32_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* xdg_toplevel*
* int32_t
* int32_t


# ::stappler::xenolith::platform::WaylandLibrary::xdg_toplevel_set_min_size(xdg_toplevel*,int32_t,int32_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* xdg_toplevel*
* int32_t
* int32_t


# ::stappler::xenolith::platform::WaylandLibrary::xdg_toplevel_set_maximized(xdg_toplevel*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* xdg_toplevel*


# ::stappler::xenolith::platform::WaylandLibrary::xdg_toplevel_unset_maximized(xdg_toplevel*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* xdg_toplevel*


# ::stappler::xenolith::platform::WaylandLibrary::xdg_toplevel_set_fullscreen(xdg_toplevel*,wl_output*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* xdg_toplevel*
* wl_output*


# ::stappler::xenolith::platform::WaylandLibrary::xdg_toplevel_unset_fullscreen(xdg_toplevel*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* xdg_toplevel*


# ::stappler::xenolith::platform::WaylandLibrary::xdg_toplevel_set_minimized(xdg_toplevel*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* xdg_toplevel*


# ::stappler::xenolith::platform::WaylandLibrary::xdg_toplevel_destroy(xdg_toplevel*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* xdg_toplevel*


# ::stappler::xenolith::platform::WaylandLibrary::xdg_wm_base_destroy(xdg_wm_base*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* xdg_wm_base*


# ::stappler::xenolith::platform::WaylandLibrary::wl_cursor_theme_load

## BRIEF

## CONTENT

Доступ: public

Тип: wl_cursor_theme*(*)(char const*,int,wl_shm*)


# ::stappler::xenolith::platform::WaylandLibrary::wl_cursor_theme_destroy

## BRIEF

## CONTENT

Доступ: public

Тип: void(*)(wl_cursor_theme*)


# ::stappler::xenolith::platform::WaylandLibrary::wl_cursor_theme_get_cursor

## BRIEF

## CONTENT

Доступ: public

Тип: wl_cursor*(*)(wl_cursor_theme*,char const*)


# ::stappler::xenolith::platform::WaylandLibrary::wl_cursor_image_get_buffer

## BRIEF

## CONTENT

Доступ: public

Тип: wl_buffer*(*)(wl_cursor_image*)


# ::stappler::xenolith::platform::WaylandLibrary::acquireConnection()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::platform::WaylandLibrary::ConnectionData

# ::stappler::xenolith::platform::WaylandLibrary::getActiveConnection() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::platform::WaylandLibrary::ConnectionData

# ::stappler::xenolith::platform::WaylandLibrary::hasWaylandCursor() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::platform::WaylandLibrary::open(stappler::Dso&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::Dso&

Возвращает:
* bool

# ::stappler::xenolith::platform::WaylandLibrary::openWaylandCursor(stappler::Dso&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::Dso&

Возвращает:
* bool

# ::stappler::xenolith::platform::WaylandLibrary::openConnection(stappler::xenolith::platform::WaylandLibrary::ConnectionData&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::platform::WaylandLibrary::ConnectionData&


# ::stappler::xenolith::platform::WaylandLibrary::_handle

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::Dso


# ::stappler::xenolith::platform::WaylandLibrary::_cursor

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::Dso


# ::stappler::xenolith::platform::WaylandLibrary::_pending

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::platform::WaylandLibrary::ConnectionData


# ::stappler::xenolith::platform::WaylandLibrary::_current

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::platform::WaylandLibrary::ConnectionData


# ::stappler::xenolith::platform::WaylandDisplay

## BRIEF

## CONTENT

Базовые классы:
* Ref


# ::stappler::xenolith::platform::WaylandDisplay::~WaylandDisplay()

## BRIEF

## CONTENT


# ::stappler::xenolith::platform::WaylandDisplay::init(Rc<stappler::xenolith::platform::WaylandLibrary> const&)

## BRIEF

## CONTENT

Параметры:
* Rc<stappler::xenolith::platform::WaylandLibrary> const&

Возвращает:
* bool

# ::stappler::xenolith::platform::WaylandDisplay::createSurface(stappler::xenolith::platform::WaylandViewInterface*)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::platform::WaylandViewInterface*

Возвращает:
* wl_surface*

# ::stappler::xenolith::platform::WaylandDisplay::destroySurface(wl_surface*)

## BRIEF

## CONTENT

Параметры:
* wl_surface*


# ::stappler::xenolith::platform::WaylandDisplay::createDecorationSurface(stappler::xenolith::platform::WaylandDecoration*)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::platform::WaylandDecoration*

Возвращает:
* wl_surface*

# ::stappler::xenolith::platform::WaylandDisplay::destroyDecorationSurface(wl_surface*)

## BRIEF

## CONTENT

Параметры:
* wl_surface*


# ::stappler::xenolith::platform::WaylandDisplay::ownsSurface(wl_surface*) const

## BRIEF

## CONTENT

Параметры:
* wl_surface*

Возвращает:
* bool

# ::stappler::xenolith::platform::WaylandDisplay::isDecoration(wl_surface*) const

## BRIEF

## CONTENT

Параметры:
* wl_surface*

Возвращает:
* bool

# ::stappler::xenolith::platform::WaylandDisplay::flush()

## BRIEF

## CONTENT

Возвращает:
* bool

# ::stappler::xenolith::platform::WaylandDisplay::getSocketFd() const

## BRIEF

## CONTENT

Возвращает:
* int

# ::stappler::xenolith::platform::WaylandDisplay::wayland

## BRIEF

## CONTENT

Тип: Rc<stappler::xenolith::platform::WaylandLibrary>


# ::stappler::xenolith::platform::WaylandDisplay::display

## BRIEF

## CONTENT

Тип: wl_display*


# ::stappler::xenolith::platform::WaylandDisplay::shm

## BRIEF

## CONTENT

Тип: Rc<stappler::xenolith::platform::WaylandShm>


# ::stappler::xenolith::platform::WaylandDisplay::seat

## BRIEF

## CONTENT

Тип: Rc<stappler::xenolith::platform::WaylandSeat>


# ::stappler::xenolith::platform::WaylandDisplay::xkb

## BRIEF

## CONTENT

Тип: Rc<stappler::xenolith::platform::XkbLibrary>


# ::stappler::xenolith::platform::WaylandDisplay::outputs

## BRIEF

## CONTENT

Тип: Vector<Rc<stappler::xenolith::platform::WaylandOutput>>


# ::stappler::xenolith::platform::WaylandDisplay::compositor

## BRIEF

## CONTENT

Тип: wl_compositor*


# ::stappler::xenolith::platform::WaylandDisplay::subcompositor

## BRIEF

## CONTENT

Тип: wl_subcompositor*


# ::stappler::xenolith::platform::WaylandDisplay::viewporter

## BRIEF

## CONTENT

Тип: wp_viewporter*


# ::stappler::xenolith::platform::WaylandDisplay::xdgWmBase

## BRIEF

## CONTENT

Тип: xdg_wm_base*


# ::stappler::xenolith::platform::WaylandDisplay::surfaces

## BRIEF

## CONTENT

Тип: Set<wl_surface *>


# ::stappler::xenolith::platform::WaylandDisplay::decorations

## BRIEF

## CONTENT

Тип: Set<wl_surface *>


# ::stappler::xenolith::platform::WaylandDisplay::seatDirty

## BRIEF

## CONTENT

Тип: bool


# ::stappler::xenolith::platform::WaylandCursorImage

## BRIEF

## CONTENT

Значения:
* LeftPtr
* EResize
* NEResize
* NResize
* NWResize
* SEResize
* SResize
* SWResize
* WResize
* RightSide
* TopRigntCorner
* TopSide
* TopLeftCorner
* BottomRightCorner
* BottomSide
* BottomLeftCorner
* LeftSide
* Max


# ::stappler::xenolith::platform::WaylandDecorationName

## BRIEF

## CONTENT

Значения:
* RightSide
* TopRigntCorner
* TopSide
* TopLeftCorner
* BottomRightCorner
* BottomSide
* BottomLeftCorner
* LeftSide
* HeaderLeft
* HeaderRight
* HeaderCenter
* HeaderBottom
* IconClose
* IconMaximize
* IconMinimize
* IconRestore


# ::stappler::xenolith::platform::WaylandCursorTheme

## BRIEF

## CONTENT

Базовые классы:
* Ref


# ::stappler::xenolith::platform::WaylandCursorTheme::~WaylandCursorTheme()

## BRIEF

## CONTENT


# ::stappler::xenolith::platform::WaylandCursorTheme::init(stappler::xenolith::platform::WaylandDisplay*,stappler::StringView,int)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::platform::WaylandDisplay*
* stappler::StringView
* int

Возвращает:
* bool

# ::stappler::xenolith::platform::WaylandCursorTheme::setCursor(stappler::xenolith::platform::WaylandSeat*)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::platform::WaylandSeat*


# ::stappler::xenolith::platform::WaylandCursorTheme::setCursor(wl_pointer*,wl_surface*,uint32_t,stappler::xenolith::platform::WaylandCursorImage,int)

## BRIEF

## CONTENT

Параметры:
* wl_pointer*
* wl_surface*
* uint32_t
* stappler::xenolith::platform::WaylandCursorImage
* int


# ::stappler::xenolith::platform::WaylandCursorTheme::wayland

## BRIEF

## CONTENT

Тип: Rc<stappler::xenolith::platform::WaylandLibrary>


# ::stappler::xenolith::platform::WaylandCursorTheme::cursorTheme

## BRIEF

## CONTENT

Тип: wl_cursor_theme*


# ::stappler::xenolith::platform::WaylandCursorTheme::cursorSize

## BRIEF

## CONTENT

Тип: int


# ::stappler::xenolith::platform::WaylandCursorTheme::cursorName

## BRIEF

## CONTENT

Тип: stappler::mem_std::String


# ::stappler::xenolith::platform::WaylandCursorTheme::cursors

## BRIEF

## CONTENT

Тип: Vector<wl_cursor *>


# ::stappler::xenolith::platform::WaylandBuffer

## BRIEF

## CONTENT

Базовые классы:
* Ref


# ::stappler::xenolith::platform::WaylandBuffer::~WaylandBuffer()

## BRIEF

## CONTENT


# ::stappler::xenolith::platform::WaylandBuffer::init(stappler::xenolith::platform::WaylandLibrary*,wl_shm_pool*,int32_t,int32_t,int32_t,int32_t,uint32_t)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::platform::WaylandLibrary*
* wl_shm_pool*
* int32_t
* int32_t
* int32_t
* int32_t
* uint32_t

Возвращает:
* bool

# ::stappler::xenolith::platform::WaylandBuffer::wayland

## BRIEF

## CONTENT

Тип: Rc<stappler::xenolith::platform::WaylandLibrary>


# ::stappler::xenolith::platform::WaylandBuffer::buffer

## BRIEF

## CONTENT

Тип: wl_buffer*


# ::stappler::xenolith::platform::WaylandBuffer::width

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::xenolith::platform::WaylandBuffer::height

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::xenolith::platform::WaylandShm

## BRIEF

## CONTENT

Базовые классы:
* Ref


# ::stappler::xenolith::platform::WaylandShm::Format

## BRIEF

## CONTENT

Значения:
* ARGB
* xRGB


# ::stappler::xenolith::platform::WaylandShm::ShadowBuffers

## BRIEF

## CONTENT


# ::stappler::xenolith::platform::WaylandShm::ShadowBuffers::top

## BRIEF

## CONTENT

Тип: Rc<stappler::xenolith::platform::WaylandBuffer>


# ::stappler::xenolith::platform::WaylandShm::ShadowBuffers::left

## BRIEF

## CONTENT

Тип: Rc<stappler::xenolith::platform::WaylandBuffer>


# ::stappler::xenolith::platform::WaylandShm::ShadowBuffers::bottom

## BRIEF

## CONTENT

Тип: Rc<stappler::xenolith::platform::WaylandBuffer>


# ::stappler::xenolith::platform::WaylandShm::ShadowBuffers::right

## BRIEF

## CONTENT

Тип: Rc<stappler::xenolith::platform::WaylandBuffer>


# ::stappler::xenolith::platform::WaylandShm::ShadowBuffers::topLeft

## BRIEF

## CONTENT

Тип: Rc<stappler::xenolith::platform::WaylandBuffer>


# ::stappler::xenolith::platform::WaylandShm::ShadowBuffers::topRight

## BRIEF

## CONTENT

Тип: Rc<stappler::xenolith::platform::WaylandBuffer>


# ::stappler::xenolith::platform::WaylandShm::ShadowBuffers::bottomLeft

## BRIEF

## CONTENT

Тип: Rc<stappler::xenolith::platform::WaylandBuffer>


# ::stappler::xenolith::platform::WaylandShm::ShadowBuffers::bottomRight

## BRIEF

## CONTENT

Тип: Rc<stappler::xenolith::platform::WaylandBuffer>


# ::stappler::xenolith::platform::WaylandShm::ShadowBuffers::topActive

## BRIEF

## CONTENT

Тип: Rc<stappler::xenolith::platform::WaylandBuffer>


# ::stappler::xenolith::platform::WaylandShm::ShadowBuffers::leftActive

## BRIEF

## CONTENT

Тип: Rc<stappler::xenolith::platform::WaylandBuffer>


# ::stappler::xenolith::platform::WaylandShm::ShadowBuffers::bottomActive

## BRIEF

## CONTENT

Тип: Rc<stappler::xenolith::platform::WaylandBuffer>


# ::stappler::xenolith::platform::WaylandShm::ShadowBuffers::rightActive

## BRIEF

## CONTENT

Тип: Rc<stappler::xenolith::platform::WaylandBuffer>


# ::stappler::xenolith::platform::WaylandShm::ShadowBuffers::topLeftActive

## BRIEF

## CONTENT

Тип: Rc<stappler::xenolith::platform::WaylandBuffer>


# ::stappler::xenolith::platform::WaylandShm::ShadowBuffers::topRightActive

## BRIEF

## CONTENT

Тип: Rc<stappler::xenolith::platform::WaylandBuffer>


# ::stappler::xenolith::platform::WaylandShm::ShadowBuffers::bottomLeftActive

## BRIEF

## CONTENT

Тип: Rc<stappler::xenolith::platform::WaylandBuffer>


# ::stappler::xenolith::platform::WaylandShm::ShadowBuffers::bottomRightActive

## BRIEF

## CONTENT

Тип: Rc<stappler::xenolith::platform::WaylandBuffer>


# ::stappler::xenolith::platform::WaylandShm::ShadowBuffers::headerLeft

## BRIEF

## CONTENT

Тип: Rc<stappler::xenolith::platform::WaylandBuffer>


# ::stappler::xenolith::platform::WaylandShm::ShadowBuffers::headerLeftActive

## BRIEF

## CONTENT

Тип: Rc<stappler::xenolith::platform::WaylandBuffer>


# ::stappler::xenolith::platform::WaylandShm::ShadowBuffers::headerRight

## BRIEF

## CONTENT

Тип: Rc<stappler::xenolith::platform::WaylandBuffer>


# ::stappler::xenolith::platform::WaylandShm::ShadowBuffers::headerRightActive

## BRIEF

## CONTENT

Тип: Rc<stappler::xenolith::platform::WaylandBuffer>


# ::stappler::xenolith::platform::WaylandShm::ShadowBuffers::headerCenter

## BRIEF

## CONTENT

Тип: Rc<stappler::xenolith::platform::WaylandBuffer>


# ::stappler::xenolith::platform::WaylandShm::ShadowBuffers::headerCenterActive

## BRIEF

## CONTENT

Тип: Rc<stappler::xenolith::platform::WaylandBuffer>


# ::stappler::xenolith::platform::WaylandShm::ShadowBuffers::iconClose

## BRIEF

## CONTENT

Тип: Rc<stappler::xenolith::platform::WaylandBuffer>


# ::stappler::xenolith::platform::WaylandShm::ShadowBuffers::iconMaximize

## BRIEF

## CONTENT

Тип: Rc<stappler::xenolith::platform::WaylandBuffer>


# ::stappler::xenolith::platform::WaylandShm::ShadowBuffers::iconMinimize

## BRIEF

## CONTENT

Тип: Rc<stappler::xenolith::platform::WaylandBuffer>


# ::stappler::xenolith::platform::WaylandShm::ShadowBuffers::iconRestore

## BRIEF

## CONTENT

Тип: Rc<stappler::xenolith::platform::WaylandBuffer>


# ::stappler::xenolith::platform::WaylandShm::ShadowBuffers::iconCloseActive

## BRIEF

## CONTENT

Тип: Rc<stappler::xenolith::platform::WaylandBuffer>


# ::stappler::xenolith::platform::WaylandShm::ShadowBuffers::iconMaximizeActive

## BRIEF

## CONTENT

Тип: Rc<stappler::xenolith::platform::WaylandBuffer>


# ::stappler::xenolith::platform::WaylandShm::ShadowBuffers::iconMinimizeActive

## BRIEF

## CONTENT

Тип: Rc<stappler::xenolith::platform::WaylandBuffer>


# ::stappler::xenolith::platform::WaylandShm::ShadowBuffers::iconRestoreActive

## BRIEF

## CONTENT

Тип: Rc<stappler::xenolith::platform::WaylandBuffer>


# ::stappler::xenolith::platform::WaylandShm::~WaylandShm()

## BRIEF

## CONTENT


# ::stappler::xenolith::platform::WaylandShm::init(Rc<stappler::xenolith::platform::WaylandLibrary> const&,wl_registry*,uint32_t,uint32_t)

## BRIEF

## CONTENT

Параметры:
* Rc<stappler::xenolith::platform::WaylandLibrary> const&
* wl_registry*
* uint32_t
* uint32_t

Возвращает:
* bool

# ::stappler::xenolith::platform::WaylandShm::allocateDecorations(stappler::xenolith::platform::WaylandShm::ShadowBuffers*,uint32_t,uint32_t,const stappler::geom::Color3B&,const stappler::geom::Color3B&)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::platform::WaylandShm::ShadowBuffers*
* uint32_t
* uint32_t
* const stappler::geom::Color3B&
* const stappler::geom::Color3B&

Возвращает:
* bool

# ::stappler::xenolith::platform::WaylandShm::wayland

## BRIEF

## CONTENT

Тип: Rc<stappler::xenolith::platform::WaylandLibrary>


# ::stappler::xenolith::platform::WaylandShm::id

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::xenolith::platform::WaylandShm::shm

## BRIEF

## CONTENT

Тип: wl_shm*


# ::stappler::xenolith::platform::WaylandShm::format

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::xenolith::platform::WaylandOutput

## BRIEF

## CONTENT

Базовые классы:
* Ref


# ::stappler::xenolith::platform::WaylandOutput::Geometry

## BRIEF

## CONTENT


# ::stappler::xenolith::platform::WaylandOutput::Geometry::x

## BRIEF

## CONTENT

Тип: int32_t


# ::stappler::xenolith::platform::WaylandOutput::Geometry::y

## BRIEF

## CONTENT

Тип: int32_t


# ::stappler::xenolith::platform::WaylandOutput::Geometry::physical_width

## BRIEF

## CONTENT

Тип: int32_t


# ::stappler::xenolith::platform::WaylandOutput::Geometry::physical_height

## BRIEF

## CONTENT

Тип: int32_t


# ::stappler::xenolith::platform::WaylandOutput::Geometry::subpixel

## BRIEF

## CONTENT

Тип: int32_t


# ::stappler::xenolith::platform::WaylandOutput::Geometry::transform

## BRIEF

## CONTENT

Тип: int32_t


# ::stappler::xenolith::platform::WaylandOutput::Geometry::make

## BRIEF

## CONTENT

Тип: stappler::mem_std::String


# ::stappler::xenolith::platform::WaylandOutput::Geometry::model

## BRIEF

## CONTENT

Тип: stappler::mem_std::String


# ::stappler::xenolith::platform::WaylandOutput::Mode

## BRIEF

## CONTENT


# ::stappler::xenolith::platform::WaylandOutput::Mode::flags

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::xenolith::platform::WaylandOutput::Mode::width

## BRIEF

## CONTENT

Тип: int32_t


# ::stappler::xenolith::platform::WaylandOutput::Mode::height

## BRIEF

## CONTENT

Тип: int32_t


# ::stappler::xenolith::platform::WaylandOutput::Mode::refresh

## BRIEF

## CONTENT

Тип: int32_t


# ::stappler::xenolith::platform::WaylandOutput::~WaylandOutput()

## BRIEF

## CONTENT


# ::stappler::xenolith::platform::WaylandOutput::init(Rc<stappler::xenolith::platform::WaylandLibrary> const&,wl_registry*,uint32_t,uint32_t)

## BRIEF

## CONTENT

Параметры:
* Rc<stappler::xenolith::platform::WaylandLibrary> const&
* wl_registry*
* uint32_t
* uint32_t

Возвращает:
* bool

# ::stappler::xenolith::platform::WaylandOutput::description() const

## BRIEF

## CONTENT

Возвращает:
* stappler::mem_std::String

# ::stappler::xenolith::platform::WaylandOutput::wayland

## BRIEF

## CONTENT

Тип: Rc<stappler::xenolith::platform::WaylandLibrary>


# ::stappler::xenolith::platform::WaylandOutput::id

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::xenolith::platform::WaylandOutput::output

## BRIEF

## CONTENT

Тип: wl_output*


# ::stappler::xenolith::platform::WaylandOutput::geometry

## BRIEF

## CONTENT

Тип: stappler::xenolith::platform::WaylandOutput::Geometry


# ::stappler::xenolith::platform::WaylandOutput::mode

## BRIEF

## CONTENT

Тип: stappler::xenolith::platform::WaylandOutput::Mode


# ::stappler::xenolith::platform::WaylandOutput::scale

## BRIEF

## CONTENT

Тип: int32_t


# ::stappler::xenolith::platform::WaylandOutput::name

## BRIEF

## CONTENT

Тип: stappler::mem_std::String


# ::stappler::xenolith::platform::WaylandOutput::desc

## BRIEF

## CONTENT

Тип: stappler::mem_std::String


# ::stappler::xenolith::platform::WaylandSeat

## BRIEF

## CONTENT

Базовые классы:
* Ref


# ::stappler::xenolith::platform::WaylandSeat::KeyState

## BRIEF

## CONTENT


# ::stappler::xenolith::platform::WaylandSeat::KeyState::controlIndex

## BRIEF

## CONTENT

Тип: xkb_mod_index_t


# ::stappler::xenolith::platform::WaylandSeat::KeyState::altIndex

## BRIEF

## CONTENT

Тип: xkb_mod_index_t


# ::stappler::xenolith::platform::WaylandSeat::KeyState::shiftIndex

## BRIEF

## CONTENT

Тип: xkb_mod_index_t


# ::stappler::xenolith::platform::WaylandSeat::KeyState::superIndex

## BRIEF

## CONTENT

Тип: xkb_mod_index_t


# ::stappler::xenolith::platform::WaylandSeat::KeyState::capsLockIndex

## BRIEF

## CONTENT

Тип: xkb_mod_index_t


# ::stappler::xenolith::platform::WaylandSeat::KeyState::numLockIndex

## BRIEF

## CONTENT

Тип: xkb_mod_index_t


# ::stappler::xenolith::platform::WaylandSeat::KeyState::keyRepeatRate

## BRIEF

## CONTENT

Тип: int32_t


# ::stappler::xenolith::platform::WaylandSeat::KeyState::keyRepeatDelay

## BRIEF

## CONTENT

Тип: int32_t


# ::stappler::xenolith::platform::WaylandSeat::KeyState::keyRepeatInterval

## BRIEF

## CONTENT

Тип: int32_t


# ::stappler::xenolith::platform::WaylandSeat::KeyState::modsDepressed

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::xenolith::platform::WaylandSeat::KeyState::modsLatched

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::xenolith::platform::WaylandSeat::KeyState::modsLocked

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::xenolith::platform::WaylandSeat::KeyState::keycodes

## BRIEF

## CONTENT

Тип: core::InputKeyCode[256]


# ::stappler::xenolith::platform::WaylandSeat::~WaylandSeat()

## BRIEF

## CONTENT


# ::stappler::xenolith::platform::WaylandSeat::init(Rc<stappler::xenolith::platform::WaylandLibrary> const&,stappler::xenolith::platform::WaylandDisplay*,wl_registry*,uint32_t,uint32_t)

## BRIEF

## CONTENT

Параметры:
* Rc<stappler::xenolith::platform::WaylandLibrary> const&
* stappler::xenolith::platform::WaylandDisplay*
* wl_registry*
* uint32_t
* uint32_t

Возвращает:
* bool

# ::stappler::xenolith::platform::WaylandSeat::initCursors()

## BRIEF

## CONTENT


# ::stappler::xenolith::platform::WaylandSeat::tryUpdateCursor()

## BRIEF

## CONTENT


# ::stappler::xenolith::platform::WaylandSeat::update()

## BRIEF

## CONTENT


# ::stappler::xenolith::platform::WaylandSeat::translateKey(uint32_t) const

## BRIEF

## CONTENT

Параметры:
* uint32_t

Возвращает:
* core::InputKeyCode

# ::stappler::xenolith::platform::WaylandSeat::composeSymbol(xkb_keysym_t,core::InputKeyComposeState&) const

## BRIEF

## CONTENT

Параметры:
* xkb_keysym_t
* core::InputKeyComposeState&

Возвращает:
* xkb_keysym_t

# ::stappler::xenolith::platform::WaylandSeat::wayland

## BRIEF

## CONTENT

Тип: Rc<stappler::xenolith::platform::WaylandLibrary>


# ::stappler::xenolith::platform::WaylandSeat::root

## BRIEF

## CONTENT

Тип: stappler::xenolith::platform::WaylandDisplay*


# ::stappler::xenolith::platform::WaylandSeat::id

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::xenolith::platform::WaylandSeat::hasPointerFrames

## BRIEF

## CONTENT

Тип: bool


# ::stappler::xenolith::platform::WaylandSeat::seat

## BRIEF

## CONTENT

Тип: wl_seat*


# ::stappler::xenolith::platform::WaylandSeat::name

## BRIEF

## CONTENT

Тип: stappler::mem_std::String


# ::stappler::xenolith::platform::WaylandSeat::capabilities

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::xenolith::platform::WaylandSeat::pointer

## BRIEF

## CONTENT

Тип: wl_pointer*


# ::stappler::xenolith::platform::WaylandSeat::keyboard

## BRIEF

## CONTENT

Тип: wl_keyboard*


# ::stappler::xenolith::platform::WaylandSeat::touch

## BRIEF

## CONTENT

Тип: wl_touch*


# ::stappler::xenolith::platform::WaylandSeat::pointerScale

## BRIEF

## CONTENT

Тип: int32_t


# ::stappler::xenolith::platform::WaylandSeat::pointerFocus

## BRIEF

## CONTENT

Тип: wl_surface*


# ::stappler::xenolith::platform::WaylandSeat::serial

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::xenolith::platform::WaylandSeat::cursorSurface

## BRIEF

## CONTENT

Тип: wl_surface*


# ::stappler::xenolith::platform::WaylandSeat::state

## BRIEF

## CONTENT

Тип: xkb_state*


# ::stappler::xenolith::platform::WaylandSeat::compose

## BRIEF

## CONTENT

Тип: xkb_compose_state*


# ::stappler::xenolith::platform::WaylandSeat::keyState

## BRIEF

## CONTENT

Тип: stappler::xenolith::platform::WaylandSeat::KeyState


# ::stappler::xenolith::platform::WaylandSeat::cursorTheme

## BRIEF

## CONTENT

Тип: Rc<stappler::xenolith::platform::WaylandCursorTheme>


# ::stappler::xenolith::platform::WaylandSeat::cursorImage

## BRIEF

## CONTENT

Тип: stappler::xenolith::platform::WaylandCursorImage


# ::stappler::xenolith::platform::WaylandSeat::pointerDecorations

## BRIEF

## CONTENT

Тип: Set<stappler::xenolith::platform::WaylandDecoration *>


# ::stappler::xenolith::platform::WaylandSeat::pointerOutputs

## BRIEF

## CONTENT

Тип: Set<stappler::xenolith::platform::WaylandOutput *>


# ::stappler::xenolith::platform::WaylandSeat::pointerViews

## BRIEF

## CONTENT

Тип: Set<stappler::xenolith::platform::WaylandViewInterface *>


# ::stappler::xenolith::platform::WaylandSeat::keyboardViews

## BRIEF

## CONTENT

Тип: Set<stappler::xenolith::platform::WaylandViewInterface *>


# ::stappler::xenolith::platform::WaylandDecoration

## BRIEF

## CONTENT

Базовые классы:
* Ref


# ::stappler::xenolith::platform::WaylandDecoration::~WaylandDecoration()

## BRIEF

## CONTENT


# ::stappler::xenolith::platform::WaylandDecoration::init(stappler::xenolith::platform::WaylandViewInterface*,Rc<stappler::xenolith::platform::WaylandBuffer>&&,Rc<stappler::xenolith::platform::WaylandBuffer>&&,stappler::xenolith::platform::WaylandDecorationName)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::platform::WaylandViewInterface*
* Rc<stappler::xenolith::platform::WaylandBuffer>&&
* Rc<stappler::xenolith::platform::WaylandBuffer>&&
* stappler::xenolith::platform::WaylandDecorationName

Возвращает:
* bool

# ::stappler::xenolith::platform::WaylandDecoration::init(stappler::xenolith::platform::WaylandViewInterface*,Rc<stappler::xenolith::platform::WaylandBuffer>&&,stappler::xenolith::platform::WaylandDecorationName)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::platform::WaylandViewInterface*
* Rc<stappler::xenolith::platform::WaylandBuffer>&&
* stappler::xenolith::platform::WaylandDecorationName

Возвращает:
* bool

# ::stappler::xenolith::platform::WaylandDecoration::setAltBuffers(Rc<stappler::xenolith::platform::WaylandBuffer>&&,Rc<stappler::xenolith::platform::WaylandBuffer>&&)

## BRIEF

## CONTENT

Параметры:
* Rc<stappler::xenolith::platform::WaylandBuffer>&&
* Rc<stappler::xenolith::platform::WaylandBuffer>&&


# ::stappler::xenolith::platform::WaylandDecoration::handlePress(uint32_t,uint32_t,uint32_t)

## BRIEF

## CONTENT

Параметры:
* uint32_t
* uint32_t
* uint32_t


# ::stappler::xenolith::platform::WaylandDecoration::handleMotion()

## BRIEF

## CONTENT


# ::stappler::xenolith::platform::WaylandDecoration::onEnter()

## BRIEF

## CONTENT


# ::stappler::xenolith::platform::WaylandDecoration::onLeave()

## BRIEF

## CONTENT


# ::stappler::xenolith::platform::WaylandDecoration::setActive(bool)

## BRIEF

## CONTENT

Параметры:
* bool


# ::stappler::xenolith::platform::WaylandDecoration::setVisible(bool)

## BRIEF

## CONTENT

Параметры:
* bool


# ::stappler::xenolith::platform::WaylandDecoration::setAlternative(bool)

## BRIEF

## CONTENT

Параметры:
* bool


# ::stappler::xenolith::platform::WaylandDecoration::setGeometry(int32_t,int32_t,int32_t,int32_t)

## BRIEF

## CONTENT

Параметры:
* int32_t
* int32_t
* int32_t
* int32_t


# ::stappler::xenolith::platform::WaylandDecoration::commit()

## BRIEF

## CONTENT

Возвращает:
* bool

# ::stappler::xenolith::platform::WaylandDecoration::isTouchable() const

## BRIEF

## CONTENT

Возвращает:
* bool

# ::stappler::xenolith::platform::WaylandDecoration::wayland

## BRIEF

## CONTENT

Тип: stappler::xenolith::platform::WaylandLibrary*


# ::stappler::xenolith::platform::WaylandDecoration::display

## BRIEF

## CONTENT

Тип: stappler::xenolith::platform::WaylandDisplay*


# ::stappler::xenolith::platform::WaylandDecoration::root

## BRIEF

## CONTENT

Тип: stappler::xenolith::platform::WaylandViewInterface*


# ::stappler::xenolith::platform::WaylandDecoration::name

## BRIEF

## CONTENT

Тип: stappler::xenolith::platform::WaylandDecorationName


# ::stappler::xenolith::platform::WaylandDecoration::image

## BRIEF

## CONTENT

Тип: stappler::xenolith::platform::WaylandCursorImage


# ::stappler::xenolith::platform::WaylandDecoration::surface

## BRIEF

## CONTENT

Тип: wl_surface*


# ::stappler::xenolith::platform::WaylandDecoration::subsurface

## BRIEF

## CONTENT

Тип: wl_subsurface*


# ::stappler::xenolith::platform::WaylandDecoration::viewport

## BRIEF

## CONTENT

Тип: wp_viewport*


# ::stappler::xenolith::platform::WaylandDecoration::buffer

## BRIEF

## CONTENT

Тип: Rc<stappler::xenolith::platform::WaylandBuffer>


# ::stappler::xenolith::platform::WaylandDecoration::active

## BRIEF

## CONTENT

Тип: Rc<stappler::xenolith::platform::WaylandBuffer>


# ::stappler::xenolith::platform::WaylandDecoration::altBuffer

## BRIEF

## CONTENT

Тип: Rc<stappler::xenolith::platform::WaylandBuffer>


# ::stappler::xenolith::platform::WaylandDecoration::altActive

## BRIEF

## CONTENT

Тип: Rc<stappler::xenolith::platform::WaylandBuffer>


# ::stappler::xenolith::platform::WaylandDecoration::_x

## BRIEF

## CONTENT

Тип: int32_t


# ::stappler::xenolith::platform::WaylandDecoration::_y

## BRIEF

## CONTENT

Тип: int32_t


# ::stappler::xenolith::platform::WaylandDecoration::_width

## BRIEF

## CONTENT

Тип: int32_t


# ::stappler::xenolith::platform::WaylandDecoration::_height

## BRIEF

## CONTENT

Тип: int32_t


# ::stappler::xenolith::platform::WaylandDecoration::lastTouch

## BRIEF

## CONTENT

Тип: uint64_t


# ::stappler::xenolith::platform::WaylandDecoration::serial

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::xenolith::platform::WaylandDecoration::visible

## BRIEF

## CONTENT

Тип: bool


# ::stappler::xenolith::platform::WaylandDecoration::isActive

## BRIEF

## CONTENT

Тип: bool


# ::stappler::xenolith::platform::WaylandDecoration::alternative

## BRIEF

## CONTENT

Тип: bool


# ::stappler::xenolith::platform::WaylandDecoration::dirty

## BRIEF

## CONTENT

Тип: bool


# ::stappler::xenolith::platform::WaylandDecoration::waitForMove

## BRIEF

## CONTENT

Тип: bool


# ::stappler::xenolith::platform::WaylandViewInterface

## BRIEF

## CONTENT


# ::stappler::xenolith::platform::WaylandViewInterface::~WaylandViewInterface()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::platform::WaylandViewInterface::getDisplay() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::platform::WaylandDisplay*

# ::stappler::xenolith::platform::WaylandViewInterface::getSurface() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* wl_surface*

# ::stappler::xenolith::platform::WaylandViewInterface::handlePointerEnter(wl_fixed_t,wl_fixed_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* wl_fixed_t
* wl_fixed_t


# ::stappler::xenolith::platform::WaylandViewInterface::handlePointerLeave()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::platform::WaylandViewInterface::handlePointerMotion(uint32_t,wl_fixed_t,wl_fixed_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint32_t
* wl_fixed_t
* wl_fixed_t


# ::stappler::xenolith::platform::WaylandViewInterface::handlePointerButton(uint32_t,uint32_t,uint32_t,uint32_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint32_t
* uint32_t
* uint32_t
* uint32_t


# ::stappler::xenolith::platform::WaylandViewInterface::handlePointerAxis(uint32_t,uint32_t,wl_fixed_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint32_t
* uint32_t
* wl_fixed_t


# ::stappler::xenolith::platform::WaylandViewInterface::handlePointerAxisSource(uint32_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint32_t


# ::stappler::xenolith::platform::WaylandViewInterface::handlePointerAxisStop(uint32_t,uint32_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint32_t
* uint32_t


# ::stappler::xenolith::platform::WaylandViewInterface::handlePointerAxisDiscrete(uint32_t,int32_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint32_t
* int32_t


# ::stappler::xenolith::platform::WaylandViewInterface::handlePointerFrame()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::platform::WaylandViewInterface::handleKeyboardEnter(Vector<uint32_t>&&,uint32_t,uint32_t,uint32_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Vector<uint32_t>&&
* uint32_t
* uint32_t
* uint32_t


# ::stappler::xenolith::platform::WaylandViewInterface::handleKeyboardLeave()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::platform::WaylandViewInterface::handleKey(uint32_t,uint32_t,uint32_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint32_t
* uint32_t
* uint32_t


# ::stappler::xenolith::platform::WaylandViewInterface::handleKeyModifiers(uint32_t,uint32_t,uint32_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint32_t
* uint32_t
* uint32_t


# ::stappler::xenolith::platform::WaylandViewInterface::handleDecorationPress(stappler::xenolith::platform::WaylandDecoration*,uint32_t,bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::platform::WaylandDecoration*
* uint32_t
* bool


# ::stappler::xenolith::platform::WaylandViewInterface::_display

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::xenolith::platform::WaylandDisplay>


# ::stappler::xenolith::platform::WaylandViewInterface::_surface

## BRIEF

## CONTENT

Доступ: protected

Тип: wl_surface*
