Title: Vulkan

# Vulkan

## Установка

*Для работы сборки шейдеров необходима стандартная утилита xxd. Если она не установлена по умолчанию, необходимо установить её из репозитория (msys или linux).*

### Метод 1: Vulkan SDK

Следуйте инструкциям по установке [Vulkan SDK](https://www.lunarg.com/vulkan-sdk/) для вашей системы.

Для сборки приложения, используйте переменную `VULKAN_SDK_PREFIX=<префикс платформы внутри SDK>`.

### Метод 2: Из дистрибутива Linux

Для работы SDK необходимы компоненты:

* vulkan-headers
* glslangValidator
* spirv-link

Важно, чтобы заголовки как минимум соотвествовали версии 1.3.

Для Ubuntu:

```
sudo apt install glslang-tools spirv-tools mesa-vulkan-drivers vulkan-utils libvulkan-dev libwayland-dev libxcb-xkb-dev libxkbcommon-dev libxkbcommon-x11-dev libxcb-randr0-dev libxcb-keysyms1-dev
```

Для Alt Linux:

```
sudo apt-get install glslang vulkan-tools spirv-tools mesa-vulkan-drivers vulkan-headers libxcb-devel libxkbcommon-devel libxkbcommon-x11-devel libxcbutil-keysyms-devel xorg-proto-devel
```

### Android

Заголовки и загрузчик в Vulkan уже содержатся в NDK. Для отладки может потребоваться установить [отладочные слои](https://developer.android.com/ndk/guides/graphics/validation-layer) непосредственно в приложение.

Исходная система всё равно требует наличия glslangValidator и spirv-link, которые не входят в NDK.

## Обновление Stappler SDK

Stappler SDK использует подход, аналогичный проекту volk для генерации таблиц доступных функций Vulkan. Для создания заголовочных файлов используется публичный регистр Vulkan. Для формирования новых таблиц функций используется приложение [headergen](https://github.com/libstappler/libstappler-xenolith/tree/master/utils/headergen).

Обновления нужны только для использования каких-либо функций, не входящих в базовый набор Vulkan, или при выпуске новой базовой версии (например, 1.4).
