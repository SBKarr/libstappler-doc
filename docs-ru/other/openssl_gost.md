Title: OpenSSL

# OpenSSL

SDK использует собственную сборку OpenSSL. Это необходимо для совместимости с пакетом [openssl-gost-engine](https://github.com/gost-engine/engine). Текущую версию OpenSSL в комплекте SDK можно узнать [здесь](https://github.com/libstappler/libstappler-deps/blob/master/Makefile) (поиск по OpenSSL). Использутся версии от 3.3 и в перспективе 3.4 для поддержки протокола QUIC и HTTP/3.

Конфигурация OpenSSL для платформ описана подобно [такому](https://github.com/libstappler/libstappler-deps/blob/master/android/openssl.mk).

Стандартная конфигурация отключает поддержку внешних динамических библиотек, автоматическую загрузку конфигурации и собирает библиотеку как статическую.

Также, стоит помнить, что SDK запрещает OpenSSL загружать конфигурационный файл самостоятельно, и использует второй виртуальный движок, подменяя некоторые функции ГОСТ для работы механизма криптоконтейнеров. Приложения, требующие нестандартной конфигурации, должны быть изолированы от SDK.

Движок ГОСТ использует [альтернативный](https://github.com/libstappler/libstappler-deps/blob/master/replacements/openssl-gost-engine/CMakeLists.txt) файл сборки.

## Linux

Для Linux SDK добавляет библиотеку libgost как зависимость openssl для статического подключения ГОСТ-шифров. При использовании самостоятельно собранной *динамической* библиотеки openssl-gost-engine так делать не нужно. Вместо этого, путь указывается в конфигурации.

Для проверки работы можно использовать собранный исполняемый файл openssl. Для его работы нужно добавить в конфигурацию поддержку openssl-gost-engine, добавив в конфигурационный файл `openssl.cnf` (узнать его расположение можно командой `openssl version -d`):

```
# ДОБАВЛЯТЬ В КОНЕЦ ФАЙЛА
# Если engine_section уже есть, совместить, а не заменять
[engine_section]
gost = gost_section

[gost_section]
engine_id = gost
# Необходимо, только если используется динамическая библиотека openssl-gost-engine,
# для статически скомпилированной версии указывать не нужно
dynamic_path = <путь к openssl-gost-engine>/gost.so
default_algorithms = ALL
CRYPT_PARAMS = id-Gost28147-89-CryptoPro-A-ParamSet
```

Создание закрытого ключа

```sh
openssl genpkey -algorithm gost2012_512 -pkeyopt paramset:A -out ca.key
```

Создание самоподписанного сертификата

```sh
openssl req -new -x509 -md_gost12_512 -days 365 -key ca.key -out ca.cer \
  -subj "/C=RU/ST=Russia/L=Moscow/O=StAppler/OU=StAppler CA/CN=StAppler CA Root"
```

Проверка сертификата

```sh
openssl x509 -in ca.cer -text -noout
```

Проверка подписи (используется новый ключ server.key и подписанный с помощью ca.cer сертификат server.cer)

```sh
openssl cms -sign -in ca.cer -out test.sig -outform PEM -CAfile ca.cer -signer server.cer -md md_gost12_512 -inkey server.key

openssl cms -verify -signer server.cer -md md_gost12_512 -content ca.cer -inform PEM -in test.sig -CAfile ca.cer
```
 
Проверяем клиент и сервер

```sh
openssl s_server -key server.key -cert server.cer
# В другом терминале
openssl s_client -connect localhost:4433 -showcerts
```

При успешном соединении клиент должен получить данные сертификата, а сервер сообщить о поддерживаемых наборах шифров. Последнее может понадобиться при настройке Apache HTTPD для работы с ГОСТ-шифрами.

## e2k

Для работы новых версий OpenSSL с e2k необходимо изменять [файл](https://github.com/libstappler/libstappler-deps/blob/master/replacements/openssl/async_posix.c). Система сборки зависимостей делает это автоматически.

# Windows

Для сборки с помощью clang для Stappler SDK необходимо добавить новую [конфигурацию сборки](https://github.com/libstappler/libstappler-deps/blob/master/windows/replacements/openssl/49-xwin-clang.conf) в файлы OpenSSL.

# Android

Сборка для Android следует стандартным конфигурациям. Для архитектуры armeabi-v7a обнаружен и успешно избегнут баг с невозможностью использовать статическую сборку openssl в составе приложения: ассемблерные вставки оключены.
