Title: SPPugToken.h


# EXTRA_WEBSERVER_PUG_SPPUGTOKEN_H_

## BRIEF

Заголовок структуры токена шаблона

## CONTENT

Заголовок структуры токена шаблона


# ::stappler::pug::Token

## BRIEF

Структура токена шаблона

## CONTENT

Структура токена шаблона. Сегменты шаблона составляются из токенов, товены могут хранить внутри себя исполняемые выражения.

Базовые классы:
* memory::AllocPool


# ::stappler::pug::Token::Type

## BRIEF

Тип токена

## CONTENT

Тип токена

Значения:
* Root
* Line
* LineData
* LinePiped
* LinePlainText
* LineComment
* LineDot
* LineOut
* LineCode
* LineCodeBlock
* PlainText
* Code
* OutputEscaped
* OutputUnescaped
* CommentTemplate
* CommentHtml
* Tag
* TagClassNote
* TagIdNote
* TagAttrList
* TagAttrExpr
* TagTrailingSlash
* TagTrailingDot
* TagTrailingEq
* TagTrailingNEq
* AttrPairEscaped
* AttrPairUnescaped
* AttrName
* AttrValue
* ControlCase
* ControlWhen
* ControlDefault
* ControlIf
* ControlUnless
* ControlElseIf
* ControlElse
* ControlEach
* ControlEachPair
* ControlWhile
* ControlMixin
* ControlEachVariable
* PipeMark
* Include
* Doctype
* MixinCall
* MixinArgs


# ::stappler::pug::Token::Token(stappler::pug::Token::Type,stappler::StringView const&)

## BRIEF

Создаёт токен

## CONTENT

Создаёт токен

Параметры:
* stappler::pug::Token::Type
* stappler::StringView const&


# ::stappler::pug::Token::Token(stappler::pug::Token::Type,stappler::StringView const&,stappler::pug::Expression*)

## BRIEF

Создаёт токен с выражением

## CONTENT

Создаёт токен с выражением

Параметры:
* stappler::pug::Token::Type
* stappler::StringView const&
* stappler::pug::Expression*


# ::stappler::pug::Token::addChild(stappler::pug::Token*)

## BRIEF

Добавляет дочерний токен

## CONTENT

Добавляет дочерний токен

Параметры:
* stappler::pug::Token*


# ::stappler::pug::Token::describe(std::ostream&) const

## BRIEF

Выводит отладочную информацию о токене

## CONTENT

Выводит отладочную информацию о токене

Параметры:
* std::ostream&


# ::stappler::pug::Token::type

## BRIEF

Тип токена

## CONTENT

Тип токена

Тип: stappler::pug::Token::Type


# ::stappler::pug::Token::data

## BRIEF

Строковые данные токена

## CONTENT

Строковые данные токена

Тип: stappler::StringView


# ::stappler::pug::Token::expression

## BRIEF

Выражение в токене

## CONTENT

Выражение в токене

Тип: stappler::pug::Expression*


# ::stappler::pug::Token::prev

## BRIEF

Предыдущий токен в родительском токене

## CONTENT

Предыдущий токен в родительском токене

Тип: stappler::pug::Token*


# ::stappler::pug::Token::next

## BRIEF

Следующий токен в родительском токене

## CONTENT

Следующий токен в родительском токене

Тип: stappler::pug::Token*


# ::stappler::pug::Token::child

## BRIEF

Первый дочерний токен

## CONTENT

Первый дочерний токен

Тип: stappler::pug::Token*


# ::stappler::pug::Token::tail

## BRIEF

Последний дочерний токен

## CONTENT

Последний дочерний токен

Тип: stappler::pug::Token*
