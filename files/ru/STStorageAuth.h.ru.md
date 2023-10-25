Title: STStorageAuth.h


# STAPPLER_DB_STSTORAGEAUTH_H_

## BRIEF

Заголовок схемы авторизации

## CONTENT

Заголовок схемы авторизации


# ::stappler::db::Auth

## BRIEF

Структура схемы авторизации

## CONTENT

Структура схемы авторизации

Базовые классы:
* AllocBase


# ::stappler::db::Auth::NameFieldCallback

## BRIEF

Функция, возвращающая поле для имени пользователя на основании запроса

## CONTENT

Доступ: public

Функция, возвращающая поле для имени пользователя на основании запроса


# ::stappler::db::Auth::Auth(stappler::db::Scheme const&)

## BRIEF

Инициализирует схему авторизации для схемы данных

## CONTENT

Доступ: public

Инициализирует схему авторизации для схемы данных

Параметры:
* stappler::db::Scheme const&


# ::stappler::db::Auth::Auth(stappler::db::Scheme const&,stappler::StringView const&,stappler::StringView const&)

## BRIEF

Инициализирует схему авторизации для схемы данных

## CONTENT

Доступ: public

Инициализирует схему авторизации для схемы данных

Параметры:
* stappler::db::Scheme const&
* stappler::StringView const& - поле для имени пользователя
* stappler::StringView const& - поле для пароля


# ::stappler::db::Auth::Auth(stappler::db::Scheme const&,stappler::db::Field const*,stappler::db::Field const*)

## BRIEF

Инициализирует схему авторизации для схемы данных

## CONTENT

Доступ: public

Инициализирует схему авторизации для схемы данных

Параметры:
* stappler::db::Scheme const&
* stappler::db::Field const* - поле для имени пользователя
* stappler::db::Field const* - поле для пароля


# ::stappler::db::Auth::Auth(stappler::db::Scheme const&,stappler::db::Auth::NameFieldCallback const&,stappler::db::Field const*)

## BRIEF

Инициализирует схему авторизации для схемы данных

## CONTENT

Доступ: public

Инициализирует схему авторизации для схемы данных

Параметры:
* stappler::db::Scheme const&
* stappler::db::Auth::NameFieldCallback const& - функция для определения поля имени
* stappler::db::Field const* - поле для пароля


# ::stappler::db::Auth::Auth(stappler::db::Scheme const&,stappler::db::Auth::NameFieldCallback const&,stappler::StringView const&)

## BRIEF

Инициализирует схему авторизации для схемы данных

## CONTENT

Доступ: public

Инициализирует схему авторизации для схемы данных

Параметры:
* stappler::db::Scheme const&
* stappler::db::Auth::NameFieldCallback const&- функция для определения поля имени
* stappler::StringView const& - поле для пароля


# ::stappler::db::Auth::getScheme() const

## BRIEF

Возвращает схему данных

## CONTENT

Доступ: public

Возвращает схему данных

Возвращает:
* stappler::db::Scheme const&

# ::stappler::db::Auth::getNameField(stappler::StringView const&) const

## BRIEF

Возвращает поле для имени пользователя на основании строки запроса

## CONTENT

Доступ: public

Возвращает поле для имени пользователя на основании строки запроса

Параметры:
* stappler::StringView const&

Возвращает:
* stappler::Pair<const Field *, String>

# ::stappler::db::Auth::getPasswordField() const

## BRIEF

Возвращает поле для пароля

## CONTENT

Доступ: public

Возвращает поле для пароля

Возвращает:
* stappler::db::Field const*

# ::stappler::db::Auth::authorizeWithPassword(stappler::StringView const&,stappler::mem_pool::Bytes const&,size_t) const

## BRIEF

Проверяет правильность пароля

## CONTENT

Доступ: public

Проверяет правильность пароля

Параметры:
* stappler::StringView const& - переданный пароль
* stappler::mem_pool::Bytes const& - пароль в БД
* size_t - число попыток

Возвращает:
* bool - true если успешно

# ::stappler::db::Auth::detectPasswordField(stappler::db::Scheme const&)

## BRIEF

Находит поле для пароля в схеме данных

## CONTENT

Доступ: protected

Находит поле для пароля в схеме данных

Параметры:
* stappler::db::Scheme const&

Возвращает:
* stappler::db::Field const*

# ::stappler::db::Auth::_password

## BRIEF

Поле для пароля

## CONTENT

Доступ: protected

Поле для пароля

Тип: stappler::db::Field const*


# ::stappler::db::Auth::_name

## BRIEF

Поле для имени пользователя

## CONTENT

Доступ: protected

Поле для имени пользователя

Тип: stappler::db::Field const*


# ::stappler::db::Auth::_nameFieldCallback

## BRIEF

Функция для поиска поля для имени пользователя

## CONTENT

Доступ: protected

Функция для поиска поля для имени пользователя

Тип: NameFieldCallback


# ::stappler::db::Auth::_scheme

## BRIEF

Схема данных

## CONTENT

Доступ: protected

Схема данных

Тип: stappler::db::Scheme const*
