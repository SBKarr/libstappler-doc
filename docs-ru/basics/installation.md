Title: Установка и запуск

# Установка и запуск

## Собранные библиотеки зависимостей

Если по какой-то причине (например, серьёзное несоотвествие версий glibc) предсобранные зависимости не работают, необходимо [собрать их вручную](dependencies.md) для вашей системы.

## Linux

См. общую информацию о поддержке [Linux](../other/linux.md).

Далее, установить пакеты дистрибутива
* git
* make
* gcc
* g++

```
sudo apt-get install git make gcc g++
```

## Android

См. общую информацию о поддержке [Android](../other/android.md).

Необходимо установить [Android NDK](https://developer.android.com/ndk/).

Для запуска приложения потребуется [Android Studio](https://developer.android.com/studio)

## Windows

См. общую информацию о поддержке [Windows](../other/windows.md).

Необходимо установить:
* [Microsoft Visual Studio](https://visualstudio.microsoft.com/ru/downloads/) (только заголовки и библиотеки WinAPI, редакция Community)
* [LLVM/Clang](https://releases.llvm.org/download.html)
* [MSYS2](https://www.msys2.org/)
* из состава msys2: make, xxd (`pacman -S make xxd`)
* Добавить адрес установки приложений msys2 в `PATH`.

В такой конфигурации можно работать из любого эмулятора терминала или открытой IDE.

## Зависимости

### Базы данных

[PostgreSQL](https://www.postgresql.org/download/) или [PostgresPro](https://postgrespro.com/products/download) версии от 12. [SQLite](https://www.sqlite.org/index.html) входит в поставку Stappler SDK.

### Для Vulkan (графические и вычислительные приложения):

См. [Vulkan](../other/vulkan.md) для полной инструкции

* Стандартная утилита xxd (если нет в стандартной поставке дистрибутива)
* Заголовки Vulkan в системе или [Vulkan SDK](https://www.lunarg.com/vulkan-sdk/) (Переменная `VULKAN_SDK_PREFIX`)
* glslangValidator (входит в Vulkan SDK или пакет glslang/glslang-tools, переменная `GLSLC`)
* spirv-link (входит в Vulkan SDK или пакет spirv-tools, переменная `SPIRV_LINK`)

### Для WebAssembly

См. [WebAssembly](../other/webassembly.md) для полной инструкции

* [WASI SDK](https://github.com/WebAssembly/wasi-sdk/releases/tag/wasi-sdk-22) (`WASI_SDK ?= /opt/wasi-sdk`)
* [wit-bindgen](https://github.com/bytecodealliance/wit-bindgen), возможна установка из cargo: `cargo install wit-bindgen-cli` (`WIT_BINDGEN ?= wit-bindgen`)

### Для вебсервера

* [Apache HTTPD](https://httpd.apache.org/download.cgi#apache24)
* Заголовки в системе (`APACHE_HTTPD_INCLUDE ?= /usr/local/include/apache`)

## Установка SDK

```sh
git clone --recurse-submodules git@github.com:libstappler/libstappler-root.git
cd libstappler-root
```

### Варианты установки

#### Из корня репозитория

Основной способ использования SDK - напрямую из корня репозитория libstappler-root. Для этого достаточно просто клонировать репозиторий.

В поставку SDK входят все необходимые компоненты и предсобанные бинарные библиотеки зависимсотей. Для Linux версия glibc и зависимостей могут существенно отличаться, что потребует их [пересобрать](dependencies.md). Скрипты пересборки (использованные для сборки поставляемых бинартных файлов) также есть в поставке SDK.

Для Windows, MacOS, iOS и Android предсобранные библиотеки, чаще всего, пересборки не требуют.

Такая форма установки предназначена для сборки на встраиваемые системы и системы, требующие кросскомпиляции, в том числе для кросскомпиляции на Windows.

Для Android библиотеки собраны с помощью последней доступной версии NDK с длительной поддержкой (LTS).

Для Windows библиотеки собраны с помощью clang и последней доступной в проекте xwin версии Windows SDK.

Для MacOS и iOS репозиторий содержит проекты для фреймворков XCode, которые необходимо подключить к проекту XCode конечного приложения.

Для Linux, такой вариант установки пригоден для сборки приложений в контейнерах и для "полных" пакетов: AppImage, FlatPak, Snap.

#### Установка с общим корнем

Для Linux, SDK может устанавливаться напрямую в систему с использованием динамических библиотек ОС вместо предварительно собранных. В таком случае, SDK собирается в набор динамических библиотек, и эти библиотеки будут использоватся конечным приложением.

Для установки используйте:

```
# из libstappler-root
make
sudo make install <params>
```

Параметры установки:

* prefix (`/usr/local`): основной префикс установки
* libdir (`$prefix/lib`): директория для размещения динамических библиотек
* includedir (`$prefix/include`): директория для размещения заголовоков C/C++
* datadir (`$prefix/share`): директория для размещения скриптов сборки
* `INSTALL_WITH_RPATH=1`: использовать rpath при сборке приложений из этой установки SDK (для нестандартной libdir)

После установки в качестве директории сборки `STAPPLER_BUILD_ROOT` используйте `$datadir/libstappler`, основной сборочный скрипт будет размещён по адресу `$datadir/libstappler/universal.mk`.

Сборка SDK с общим корнем пригодна для создания установочных пакетов для различных дистрибутивов Linux.

Для сборки примеров с использованием общего корня, переопределите в окружении переменную `STAPPLER_BUILD_ROOT` или используйте переопределение в вызове make:

```
make STAPPLER_BUILD_ROOT=/usr/local/share/libstappler host
```

### Запуск примеров

Запуск первого [примера](https://github.com/libstappler/libstappler-root/tree/master/examples/commandline)

```sh
cd examples/commandline
make && make install
stappler-build/host/genpasswd
```

Также, смотрите другие [примеры](https://github.com/libstappler/libstappler-root/tree/master/examples).


Демонстрационно-тестовое приложение графического движка (требует полной установки [Vulkan](../other/vulkan.md)):

```sh
cd xenolith/utils/testapp
make && make install
stappler-build/host/testapp
```


Тесты покрытия (требует полной установки [Vulkan](../other/vulkan.md) и [WebAssembly](../other/webassembly.md), а также GnuTLS на Linux)

```sh
cd tests/common
make && make install
stappler-build/host/testapp
```

## Первое приложение

Структура приложения:
* Makefile - корневой Makefile проекта
* main.cpp - точка входа
* src - директория с исходными кодами

### Makefile

```make
# Путь к SDK
STAPPLER_ROOT ?= <путь к libstappler-root>

# Указание перестаривать проект, если этот файл изменился
LOCAL_MAKEFILE := $(lastword $(MAKEFILE_LIST))

# Название исполняемого файла
LOCAL_EXECUTABLE := helloworld

# Пути к наборам модулей
LOCAL_MODULES_PATHS = \
	$(STAPPLER_ROOT)/core/stappler-modules.mk

# Используемые модули
LOCAL_MODULES := \
	stappler_brotli_lib \
	stappler_data

# Пути к исходным кодам
LOCAL_SRCS_DIRS :=  src
LOCAL_INCLUDES_DIRS := src

# Файл исходного кода, содержащий функцию main
LOCAL_MAIN := main.cpp

# Подключения системы сборки
include $(STAPPLER_ROOT)/build/make/universal.mk
```

### main.cpp

```cpp
// Для функций чтения командной строки
#include "SPData.h"

namespace stappler::app {

// Выбираем стандартную подсистему памяти для текущего пространства имён
using namespace mem_std;

// Строка при запросе помощи по команде
static constexpr auto HELP_STRING(
R"HelpString(helloworld <options> - my first program
Options are one of:
	-h (--help))HelpString");

// Разбор коротких переключателей (-h, -v)
static int parseOptionSwitch(Value &ret, char c, const char *str) {
	if (c == 'h') {
		ret.setBool(true, "help");
	}

	// прочитан только один символ
	return 1;
}

// Разбор строковых переключателей (--help, -verbose)
static int parseOptionString(Value &ret, const StringView &str, int argc, const char * argv[]) {
	if (str == "help") {
		ret.setBool(true, "help");
	}

	// прочитан один параметр
	return 1;
}

SP_EXTERN_C int main(int argc, const char *argv[]) {
	// читаем параметры командной строки

	// возвращает дополнительные параметры и список основных аргументов
	Pair<Value, Vector<String>> opts = data::parseCommandLineOptions<Interface, Value>(
			argc, argv, &parseOptionSwitch, &parseOptionString);

	// проверяем, запрошена ли помощь
	if (opts.first.getBool("help")) {
		std::cout << HELP_STRING << "\n";
		return 0;
	}

	// выполняем в контексте временного пула памяти
	// пример не использует подсистему пулов памяти, но всегда заворачивать выполнение основного
	// потока во временный пул памяти - практика, позволяющая избегать ошибок
	perform_temporary([&] {
		std::cout << "Hello world!" << "\n";
	});

	return 0;
}

}

```
