Title: SPUrl.h


# STAPPLER_CORE_UTILS_SPURL_H_

## BRIEF

Заголовок типа для разбора URL

## CONTENT

Заголовок типа для разбора URL


# ::stappler::UrlView

## BRIEF

Тип для разбора URL

## CONTENT

Тип для разбора URL. Не копирует значений, только выделяет соотвествующие сегменты строки. Для валидации и нормализации используйте функции из `SPValid.h`

Email для этого типа считается допустимым URL.

# ::stappler::UrlView::UrlToken

## BRIEF

Тип сегмента URL

## CONTENT

Тип сегмента URL

Значения:
* Scheme - схема запроса
* User - пользователь
* Password - пароль
* Host - имя хоста
* Port - порт доступа
* Path - путь запроса
* Query - динамическая строка запроса
* Fragment - фрагмент запроса
* Blank - пробельные и контрольные символы


# ::stappler::UrlView::scheme

## BRIEF

Сегмент со схемой доступа

## CONTENT

Сегмент со схемой доступа

Тип: stappler::StringView


# ::stappler::UrlView::user

## BRIEF

Сегмент с именем пользователя

## CONTENT

Сегмент с именем пользователя

Тип: stappler::StringView


# ::stappler::UrlView::password

## BRIEF

Сегмент с паролем

## CONTENT

Сегмент с паролем

Тип: stappler::StringView


# ::stappler::UrlView::host

## BRIEF

Сегмент с именем хоста

## CONTENT

Сегмент с именем хоста

Тип: stappler::StringView


# ::stappler::UrlView::port

## BRIEF

Сегмент с портом доступа

## CONTENT

Сегмент с портом доступа

Тип: stappler::StringView


# ::stappler::UrlView::path

## BRIEF

Сегмент с путём запроса

## CONTENT

Сегмент с путём запроса

Тип: stappler::StringView


# ::stappler::UrlView::query

## BRIEF

Сегмент с запросом

## CONTENT

Сегмент с запросом

Тип: stappler::StringView


# ::stappler::UrlView::fragment

## BRIEF

Сегмент с фрагментом запроса

## CONTENT

Сегмент с фрагментом запроса

Тип: stappler::StringView


# ::stappler::UrlView::url

## BRIEF

Полный сегмент URL

## CONTENT

Полный сегмент URL

Тип: stappler::StringView


# ::stappler::UrlView::isValidIdnTld(stappler::StringView)

## BRIEF

Проверяет, является ли строка допустимым интернационализованным доменом

## CONTENT

Проверяет, является ли строка допустимым интернационализованным доменом

Параметры:
* stappler::StringView

Возвращает:
* bool

# ::stappler::UrlView::parseUrl(stappler::StringView&,Callback<void (stappler::StringViewUtf8, UrlView::UrlToken)> const&)

## BRIEF

Разбирает URL с помощью функции обратного вызова

## CONTENT

Разбирает URL с помощью функции обратного вызова

Параметры:
* stappler::StringView&
* Callback<void (stappler::StringViewUtf8, UrlView::UrlToken)> const&

Возвращает:
* bool - true при успешном разборе

# ::stappler::UrlView::parsePath<typename>(stappler::StringView)

## BRIEF

Разбирает путь на части по разделителю

## CONTENT

Разбирает путь на части по разделителю и возвращает в виде вектора

Параметры шаблона:
* typename Interface - интерфейс памяти для вектора

Параметры:
* stappler::StringView

Возвращает:
* typename Interface::template VectorType<stappler::StringView>

# ::stappler::UrlView::parseArgs<typename>(stappler::StringView,size_t)

## BRIEF

Разбирает аргументы из строки запроса

## CONTENT

Разбирает аргументы из строки запроса (если доступен модуль данных)

Параметры шаблона:
* typename Interface - интерфейс памяти для нетипизированного значения возврата

Параметры:
* stappler::StringView
* size_t - максимальная длина переменной запроса

Возвращает:
* data::ValueTemplate<Interface>

# ::stappler::UrlView::UrlView()

## BRIEF

Конструирует пустой объект

## CONTENT

Конструирует пустой объект


# ::stappler::UrlView::UrlView(stappler::StringView)

## BRIEF

Конструирует объект и разбирает URL

## CONTENT

Конструирует объект и разбирает URL

Параметры:
* stappler::StringView


# ::stappler::UrlView::clear()

## BRIEF

Очищает объект

## CONTENT

Очищает объект


# ::stappler::UrlView::parse(stappler::StringView const&)

## BRIEF

Очищает объект и разбирает новый URL

## CONTENT

Очищает объект и разбирает новый URL

Параметры:
* stappler::StringView const&

Возвращает:
* bool - true при успешном разборе

# ::stappler::UrlView::parse(stappler::StringView&)

## BRIEF

Очищает объект и разбирает новый URL

## CONTENT

Очищает объект и разбирает новый URL. Смещает переданный сегмент на место окончания разбора.

Параметры:
* stappler::StringView&

Возвращает:
* bool - true при успешном разборе

# ::stappler::UrlView::get<typename>() const

## BRIEF

Собирает URL и возвращает в виде строки

## CONTENT

Собирает URL и возвращает в виде строки

Параметры шаблона:
* typename Interface - интерфейс памяти для строки

Возвращает:
* typename Interface::StringType

# ::stappler::UrlView::isEmail() const

## BRIEF

Проверяет, является ли текущий распознанный URL адресом электронной почты

## CONTENT

Проверяет, является ли текущий распознанный URL адресом электронной почты

Возвращает:
* bool

# ::stappler::UrlView::isPath() const

## BRIEF

Проверяет, является ли текущий распознанный URL путём

## CONTENT

Проверяет, является ли текущий распознанный URL путём

Возвращает:
* bool
