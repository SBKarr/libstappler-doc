Title: SPPugLexer.h


# EXTRA_WEBSERVER_PUG_SPPUGLEXER_H_

## BRIEF

Заголовок разбора структуры языка шаблонизатора

## CONTENT

Заголовок разбора структуры языка шаблонизатора

# ::stappler::pug::Lexer

## BRIEF

Структура разбора языка шаблонизатора

## CONTENT

Структура разбора языка шаблонизатора. Читает документ шаблона в дерево токенов.


# ::stappler::pug::Lexer::ErrCb

## BRIEF

Функция сообщения об ошибке

## CONTENT

Функция сообщения об ошибке


# ::stappler::pug::Lexer::Lexer(stappler::StringView const&,stappler::pug::Lexer::ErrCb const&)

## BRIEF

Читает шаблон из строки

## CONTENT

Читает шаблон из строки

Параметры:
* stappler::StringView const&
* stappler::pug::Lexer::ErrCb const&


# ::stappler::pug::Lexer::perform(stappler::pug::Lexer::ErrCb const&)

## BRIEF

Запускает процесс чтения (вызывается автоматически)

## CONTENT

Запускает процесс чтения (вызывается автоматически)

Параметры:
* stappler::pug::Lexer::ErrCb const&

Возвращает:
* bool - true если успешно

# ::stappler::pug::Lexer::parseToken(stappler::pug::Lexer::ErrCb const&,stappler::pug::Token&)

## BRIEF

Разбирает токен шаблона

## CONTENT

Разбирает токен шаблона

Параметры:
* stappler::pug::Lexer::ErrCb const&
* stappler::pug::Token&

Возвращает:
* bool - true если успешно

# ::stappler::pug::Lexer::readAttributes(stappler::pug::Lexer::ErrCb const&,stappler::pug::Token*,stappler::StringView&) const

## BRIEF

Разбирает список шаблонированных HTML-атрибутов

## CONTENT

Разбирает список шаблонированных HTML-атрибутов

Параметры:
* stappler::pug::Lexer::ErrCb const&
* stappler::pug::Token*
* stappler::StringView&

Возвращает:
* bool - true если успешно

# ::stappler::pug::Lexer::readOutputExpression(stappler::pug::Token*,stappler::StringView&) const

## BRIEF

Разбирает выражение вывода результата исполнения скрипта

## CONTENT

Разбирает выражение вывода результата исполнения скрипта

Параметры:
* stappler::pug::Token*
* stappler::StringView&

Возвращает:
* bool - true если успешно

# ::stappler::pug::Lexer::readTagInfo(stappler::pug::Lexer::ErrCb const&,stappler::pug::Token*,stappler::StringView&,bool) const

## BRIEF

Читает HTML-тег из токена

## CONTENT

Читает HTML-тег из токена

Параметры:
* stappler::pug::Lexer::ErrCb const&
* stappler::pug::Token*
* stappler::StringView&
* bool

Возвращает:
* bool - true если успешно

# ::stappler::pug::Lexer::readCode(stappler::pug::Token*,stappler::StringView&) const

## BRIEF

Читает исполняемый код скрипта

## CONTENT

Читает исполняемый код скрипта

Параметры:
* stappler::pug::Token*
* stappler::StringView&

Возвращает:
* bool - true если успешно

# ::stappler::pug::Lexer::readCodeBlock(stappler::pug::Token*,stappler::StringView&) const

## BRIEF

Читает вложенный блок кода

## CONTENT

Читает вложенный блок кода

Параметры:
* stappler::pug::Token*
* stappler::StringView&

Возвращает:
* bool - true если успешно

# ::stappler::pug::Lexer::readPlainTextInterpolation(stappler::pug::Lexer::ErrCb const&,stappler::pug::Token*,stappler::StringView&,bool) const

## BRIEF

Читает вывод текста без форматирования

## CONTENT

Читает вывод текста без форматирования

Параметры:
* stappler::pug::Lexer::ErrCb const&
* stappler::pug::Token*
* stappler::StringView&
* bool

Возвращает:
* bool - true если успешно

# ::stappler::pug::Lexer::readLine(stappler::pug::Lexer::ErrCb const&,stappler::StringView const&,stappler::StringView&,stappler::pug::Token*)

## BRIEF

Читает строку шаблона

## CONTENT

Читает строку шаблона

Параметры:
* stappler::pug::Lexer::ErrCb const&
* stappler::StringView const&
* stappler::StringView&
* stappler::pug::Token*

Возвращает:
* stappler::pug::Token* - результирующий токен

# ::stappler::pug::Lexer::readPlainLine(stappler::pug::Lexer::ErrCb const&,stappler::StringView const&,stappler::StringView&)

## BRIEF

Читает строку прямого вывода в текст

## CONTENT

Читает строку прямого вывода в текст

Параметры:
* stappler::pug::Lexer::ErrCb const&
* stappler::StringView const&
* stappler::StringView&

Возвращает:
* stappler::pug::Token* - результирующий токен

# ::stappler::pug::Lexer::readCommonLine(stappler::pug::Lexer::ErrCb const&,stappler::StringView const&,stappler::StringView&)

## BRIEF

Читает стандартную строку шаблонизатора

## CONTENT

Читает стандартную строку шаблонизатора

Параметры:
* stappler::pug::Lexer::ErrCb const&
* stappler::StringView const&
* stappler::StringView&

Возвращает:
* stappler::pug::Token* - результирующий токен

# ::stappler::pug::Lexer::readKeywordLine(stappler::pug::Lexer::ErrCb const&,stappler::StringView const&,stappler::StringView&)

## BRIEF

Читает специальную строку шаблонизатора

## CONTENT

Читает специальную строку шаблонизатора

Параметры:
* stappler::pug::Lexer::ErrCb const&
* stappler::StringView const&
* stappler::StringView&

Возвращает:
* stappler::pug::Token* - результирующий токен

# ::stappler::pug::Lexer::onError(stappler::pug::Lexer::ErrCb const&,stappler::StringView const&,stappler::StringView const&) const

## BRIEF

Выводит сообщение об ошибке чтения

## CONTENT

Выводит сообщение об ошибке чтения

Параметры:
* stappler::pug::Lexer::ErrCb const&
* stappler::StringView const&
* stappler::StringView const&

Возвращает:
* bool

# ::stappler::pug::Lexer::operator bool() const

## BRIEF

Проверяет на успешность чтения

## CONTENT

Проверяет на успешность чтения

Возвращает:
* bool - true если шаблон прочитан успешно

# ::stappler::pug::Lexer::offset

## BRIEF

Текущее смещение в документе

## CONTENT

Текущее смещение в документе

Тип: uint32_t


# ::stappler::pug::Lexer::lineOffset

## BRIEF

Смещение в текущей строке

## CONTENT

Смещение в текущей строке

Тип: uint32_t


# ::stappler::pug::Lexer::indentStep

## BRIEF

Шаг вложенности

## CONTENT

Шаг вложенности

Тип: uint32_t


# ::stappler::pug::Lexer::indentLevel

## BRIEF

Уровень вложенности

## CONTENT

Уровень вложенности

Тип: uint32_t


# ::stappler::pug::Lexer::success

## BRIEF

Флаг успешности чтения

## CONTENT

Флаг успешности чтения

Тип: bool


# ::stappler::pug::Lexer::content

## BRIEF

Читаемый документ

## CONTENT

Читаемый документ

Тип: stappler::StringView


# ::stappler::pug::Lexer::root

## BRIEF

Базовый токен

## CONTENT

Базовый токен

Тип: stappler::pug::Token
