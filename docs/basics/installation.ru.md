Title: Установка и запуск тестов

# Установка и запуск тестов

Если вы используете проект на основе компонентов Xenolith или Serenity - настройка libstappler уже включена в сборку.

В первую очередь, необходимо клонировать репозиторий и получить библиотеки зависимостей:

```sh
git pull https://github.com/SBKarr/libstappler-common
cd libstappler-common
git submodule update --init
```

Для проверки, что фреймворк совместим с вашей текущей системой, необходимо собрать тестовое приложение. Его исходный код хранится в tests/common.

Для сборки тестового приложения необходим системный пакет zlib, содержащий заголовки (например, libz-dev для Ubuntu).

```sh
sudo apt install libz-dev # для Ubuntu/Debian
cd tests/common
make
make install
```

Для запуска тестов:

```sh
stappler-build/host/testapp
```

Для проверки покрытия тестами:

```sh
make host-coverage # собирает приложение в режиме покрытия тестами
make host-report # запускает приложение и подготавливает отчёт
```

После выполнения проверки отчёт будет сгенерирован в `stappler-build/host/gcc/coverage/html`
