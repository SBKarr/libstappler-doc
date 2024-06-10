Title: Установка и запуск

# Установка и запуск

## Зависимости

### Сборка и компиляция

* Make 4.0+ (gmake для MacOS)
* GCC 11+ или Clang 14+ (16+ для Windows), lcc 1.26+ для e2k (рекомендуется 1.28+)

### Базы данных

PostgreSQL или PostgresPro версии от 12. SQLite входит в поставку.

### Для Vulkan:

* Заголовки Vulkan в система или Vulkan SDK (Переменная `VULKAN_SDK_PREFIX`)
* glslangValidator (входит в SDK, переменная `GLSLC`)
* spirv-link (входит в SDK, переменная `SPIRV_LINK`)

### Для WebAssembly

* WASI SDK (`WASI_SDK ?= /opt/wasi-sdk`)
* wit-bindgen (`WIT_BINDGEN ?= wit-bindgen`)

### Для вебсервера

* Apache HTTPD
* Заголовки в системе (`APACHE_HTTPD_INCLUDE ?= /usr/local/include/apache`)

## Установка

```sh
git clone git@github.com:libstappler/libstappler-root.git
cd libstappler-root
git submodule update --init
```

Запуск первого примера

```sh
cd examples/commandline
make && make install
stappler-build/host/genpasswd
```

Тесты

```sh
cd tests/common
make && make install
stappler-build/host/testapp
```

## Первое приложение

Структура приложения:
* Makefile - корневой Mekafile проекта
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
