Title: STStorageConfig.h


# STAPPLER_DB_SPDBCONFIG_H_

## BRIEF

Заголовок параметров конфигурации БД

## CONTENT

Заголовок параметров конфигурации БД


# ::stappler::db::config::AUTH_MAX_TIME

## BRIEF

Максимальное время для безопасной авторизации

## CONTENT

Максимальное время для безопасной авторизации. По прошествии срока авторизация отменяется.

Тип: auto const

# ::stappler::db::config::AUTH_MAX_LOGIN_ATTEMPT

## BRIEF

Максимальное число попыток авторизации

## CONTENT

Максимальное число попыток авторизации

Тип: size_t const

# ::stappler::db::config::INPUT_MAX_VAR_SIZE

## BRIEF

Максимальное значение размера переменной при чтении запроса по умолчанию

## CONTENT

Максимальное значение размера переменной при чтении запроса по умолчанию

Тип: size_t const

# ::stappler::db::config::INPUT_MAX_REQUEST_SIZE

## BRIEF

Максимальное значение размера запроса по умолчанию

## CONTENT

Максимальное значение размера запроса по умолчанию

Тип: size_t const

# ::stappler::db::config::INPUT_MAX_FILE_SIZE

## BRIEF

Максимальное значение размера файла в запросе по умолчанию

## CONTENT

Максимальное значение размера файла в запросе по умолчанию

Тип: size_t const

# ::stappler::db::config::INPUT_UPDATE_TIME

## BRIEF

Интервал для обновления прогресса загрузки данных

## CONTENT

Интервал для обновления прогресса загрузки данных

Тип: auto const

# ::stappler::db::config::INPUT_UPDATE_FREQUENCY

## BRIEF

Интервал для обновления на основе доли от загрузки запроса

## CONTENT

Интервал для обновления на основе доли от загрузки запроса. По умолчанию, обновление происходит каждые 10%.

Тип: auto const

# ::stappler::db::config::FIELD_FILE_DEFAULT_MAX_SIZE

## BRIEF

Абсолютный максимум для размера входящего файла

## CONTENT

Абсолютный максимум для размера входящего файла

Тип: size_t const

# ::stappler::db::config::FIELD_EXTRA_DEFAULT_HINT_SIZE

## BRIEF

Предполагаемый размер поля нетипизированных данных при определении лимитов

## CONTENT

Предполагаемый размер поля нетипизированных данных при определении лимитов. Используется, если максимальный размер поля не указан.

Тип: size_t const

# ::stappler::db::config::FIELD_TEXT_DEFAULT_MIN_SIZE

## BRIEF

Минимальный размер текстового поля по умолчанию

## CONTENT

Минимальный размер текстового поля по умолчанию

Тип: auto const

# ::stappler::db::config::FIELD_TEXT_DEFAULT_MAX_SIZE

## BRIEF

Максимальный размер текстового поля по умолчанию

## CONTENT

Максимальный размер текстового поля по умолчанию

Тип: auto const

# ::stappler::db::config::FIELD_PASSWORD_DEFAULT_SALT

## BRIEF

Используемый ключ для сохранения паролей, если ключ не указан явно

## CONTENT

Используемый ключ для сохранения паролей, если ключ не указан явно

Тип: stappler::StringView const

# ::stappler::db::config::STORAGE_DEFAULT_KEY_VALUE_INTERVAL

## BRIEF

Время по умолчанию для хранения в хранилище ключ-значение

## CONTENT

Время по умолчанию для хранения в хранилище ключ-значение

Тип: auto const

# ::stappler::db::config::STORAGE_DEFAULT_INTERNAL_INTERVAL

## BRIEF

Время по умолчанию для хранения сессий и внутренних данных

## CONTENT

Время по умолчанию для хранения сессий и внутренних данных

Тип: auto const

# ::stappler::db::config::STORAGE_INTERFACE_KEY

## BRIEF

Ключ для хранения действующего интерфейса к БД в пуле памяти

## CONTENT

Ключ для хранения действующего интерфейса к БД в пуле памяти

Тип: auto const

# ::stappler::db::config::STORAGE_TRANSACTION_PREFIX

## BRIEF

Префикс для ключа для хранения транзакции в пуле памяти

## CONTENT

Префикс для ключа для хранения транзакции в пуле памяти

Тип: auto const

# ::stappler::db::config::STORAGE_TRANSACTION_STACK_KEY

## BRIEF

Ключ для хранения в пуле памяти стека активных транзакций

## CONTENT

Ключ для хранения в пуле памяти стека активных транзакций

Тип: auto const

# ::stappler::db::config::UPLOAD_TMP_FILE_PREFIX

## BRIEF

Автоматический префикс для временного загружаемого файла

## CONTENT

Автоматический префикс для временного загружаемого файла

Тип: auto const

# ::stappler::db::config::UPLOAD_TMP_IMAGE_PREFIX

## BRIEF

Автоматический префикс для временного изображения для конвертации его размера

## CONTENT

Автоматический префикс для временного изображения для конвертации его размера

Тип: auto const

# ::stappler::db::config::BROADCAST_CHANNEL_NAME

## BRIEF

Имя канала для широковещательных сообщенй на стороне БД

## CONTENT

Имя канала для широковещательных сообщенй на стороне БД

Тип: auto const

# ::stappler::db::config::RESOURCE_RESOLVE_MAX_DEPTH

## BRIEF

Максимальная глубина для иерархического списка запросов

## CONTENT

Максимальная глубина для иерархического списка запросов

Тип: uint16_t const
