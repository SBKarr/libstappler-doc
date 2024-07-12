Title: WebAssembly

# WebAssembly

**Важно: WebAssembly используется не в качестве компонентов WASI, а в качестве скриптовой машины. Это значит, что, несмотря на использование инфраструктуры компонентов и WIT, модули не обязаны быть компонентами WASI, лишь следовать соглашениям о вызовах WIT. В контексте WASI, если модуль представлен компонентом, это должен быть компонент типа reactor.**

## Установка

Для работы с WebAssembly необходимы:

* [WASI SDK](https://github.com/WebAssembly/wasi-sdk) (переменная сборки `WASI_SDK=<путь к установке SDK>`)
* [wit-bindgen](https://github.com/bytecodealliance/wit-bindgen) (переменная сборки `WIT_BINDGEN=<app>`)

wit-bindgen ьщжно установить из [cargo](https://doc.rust-lang.org/cargo/getting-started/installation.html):

```
sudo apt-get install curl
# Следуйте инструкциям по установке в терминале, включая добавление в PATH для текущего терминала в конце
curl https://sh.rustup.rs -sSf | sh
cargo install wit-bindgen-cli
```

Пример установки WASI SDK для Linux:

```
wget https://github.com/WebAssembly/wasi-sdk/releases/download/wasi-sdk-22/wasi-sdk-22.0-linux.tar.gz
tar -xf wasi-sdk-22.0-linux.tar.gz
sudo mv wasi-sdk-22.0 /opt/wasi-sdk
```

## Сборка

Гостевой язык C/C++ уже встроен в систему сборки SDK. Управлять сборкой можно переменными проекта:

`LOCAL_WASM_MODULE`: название собираемого модуля WebAssembly

`LOCAL_WASM_DIRS`: пути для поиска исходных файлов WebAssembly

`LOCAL_WASM_OBJS`: файля для сборки в WebAssembly

`LOCAL_WASM_INCLUDES_DIRS`: пути для рекурсивного поиска заголовков WebAssembly

`LOCAL_WASM_INCLUDES_OBJS`: пути для поиска заголовков WebAssembly

`LOCAL_WASM_CFLAGS`: дополнительные флаги сборки C WebAssembly

`LOCAL_WASM_CXXFLAGS`: дополнительные флаги сборки C++ WebAssembly

Для использования других гостевых языков, всё равно необходимо объявить и собрать модуль с помощью `LOCAL_WASM_MODULE`.

После сборки такого базового модуля, будет сгенерирован код для wit-bindgen, расположенный по адресу `<build-dir>/<target>/<build-type>/wit-bindgen/wit`. (Например, `<build-dir>/host/debug/wit-bindgen/wit`). Использование `wit-bindgen` для этой директории сгенерирует код для гостевого языка. Далее, следуйте документации языка. Итоговый модуль можно будет запускать стандартным образом.

## Отладка

Для отдадки также понадобиться модифицированная версия lldb для платформы из [поставки WAMR](https://github.com/bytecodealliance/wasm-micro-runtime/releases/tag/WAMR-2.1.0)

Для отладки WebAssembly необходимо установить флаг сборки `GLOBAL_WASM_DEBUG=1` (желательно, в Makefile проекта, чтобы его изменение автоматически вызывало пересборку).

После запуска приложения с таким флагом, как только код WebAssembly начинает исполняться, приложение останавливается в ожидании подключения отладчика WebAssembly.

Далее, см. [руководство по отладке WAMR](https://github.com/bytecodealliance/wasm-micro-runtime/blob/main/doc/source_debugging.md)
