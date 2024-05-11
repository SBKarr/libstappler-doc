Title: SPSearchParser.h


# STAPPLER_SEARCH_SPSEARCHPARSER_H_

## BRIEF

Заголовок описания для полнотектового парсера

## CONTENT

Заголовок описания для полнотектового парсера.

Описывает две стадии работы с полнотекстовым поиском.

1. Парсер разбирает фразу на токены, присваивает каждому из них категорию для дальнейшего разбора. Некоторые слова в фразе могут представлять более одного токена, например, URL или слова с дефизом в корне (в таком случае, будет минимум три токена на слово)

2. Стеммер принимает на вход токен пармера и выделяет из него неизменную основу

# ::stappler::search::ParserToken

## BRIEF

Тип слова при парсинге

## CONTENT

Тип слова при парсинге. Основаны на типах, поддерживаемых PostgreSQL

Значения:
* AsciiWord
* Word
* NumWord
* Email
* Url
* ScientificFloat
* Version
* Blank
* NumHyphenatedWord
* AsciiHyphenatedWord
* HyphenatedWord
* Path
* Float
* Integer
* XMLEntity
* Custom
* HyphenatedWord_NumPart
* HyphenatedWord_Part
* HyphenatedWord_AsciiPart


# ::stappler::search::UrlToken

## BRIEF

Тип токена внутри URL-адреса

## CONTENT

Тип токена внутри URL-адреса

Значения:
* Scheme
* User
* Password
* Host
* Port
* Path
* Query
* Fragment
* Blank


# ::stappler::search::Language

## BRIEF

Поддерживаемые языки стемминга

## CONTENT

Поддерживаемые языки стемминга. Основаны на доступных скриптах Snowball.

Значения:
* Unknown
* Arabic
* Danish
* Dutch
* English
* Finnish
* French
* German
* Greek
* Hungarian
* Indonesian
* Irish
* Italian
* Lithuanian
* Nepali
* Norwegian
* Portuguese
* Romanian
* Russian
* Spanish
* Swedish
* Tamil
* Turkish
* Simple


# ::stappler::search::ParserStatus

## BRIEF

Текущий статус разбора

## CONTENT

Текущий статус разбора

Значения:
* Continue - продолжать
* PreventSubdivide - продолжать без глубокого разбора слова
* Stop - остановить разбор


# ::stappler::search::SearchData

## BRIEF

Блок данных для поискового токена

## CONTENT

Блок данных для поискового токена


# ::stappler::search::SearchData::Language

## BRIEF

Тип языка токена

## CONTENT

Тип языка токена


# ::stappler::search::SearchRank

## BRIEF

Поисковой ранг/вес

## CONTENT

Поисковой ранг/вес. Основано на принципах PostgreSQL

Значения:
* A
* B
* C
* D
* Unknown

# ::stappler::search::SearchData::Rank

## BRIEF

Псевдоним типа ранга поискового токена

## CONTENT

Псевдоним типа ранга поискового токена

# ::stappler::search::SearchData::Type

## BRIEF

Способ передачи данных библиотеке СУБД

## CONTENT

Способ передачи данных библиотеке СУБД

Значения:
* Parse - использовать функцию внутреннего разбора поисковых токенов СУБД
* Cast - преобразовать к полнотекстовому типу СУБД (строка должна соотвествовать типу)
* ForceCast - преобразовать к полнотекстовому типу СУБД в обход модификаций и проверок точности (строка должна соотвествовать типу). Используется, когда способ разбивки на токены противоречит принципам СУБД


# ::stappler::search::SearchData::buffer

## BRIEF

Хранимый строковый буфер токена

## CONTENT

Хранимый строковый буфер токена

Тип: stappler::mem_pool::String


# ::stappler::search::SearchData::language

## BRIEF

Основной язык токена

## CONTENT

Основной язык токена

Тип: Language


# ::stappler::search::SearchData::rank

## BRIEF

Ранг/вес токена

## CONTENT

Ранг/вес токена

Тип: stappler::search::SearchData::Rank


# ::stappler::search::SearchData::getLanguage() const

## BRIEF

Возвращает язык токена в текстовой форме

## CONTENT

Возвращает язык токена в текстовой форме

Возвращает:
* stappler::StringView

# ::stappler::search::SearchOp

## BRIEF

Операция в узле дерева поискового запроса

## CONTENT

Операция в узле дерева поискового запроса

Значения:
* None - нет операции (примитивный запрос соответствия)
* Not - отрицание вхождения
* And - логическое И
* Or - логическое ИЛИ
* Follow - операция следования слов


# ::stappler::search::isStopword(stappler::StringView const&,stappler::search::Language)

## BRIEF

Проверяет слово на исключённость для языка

## CONTENT

Проверяет слово на исключённость для языка

Параметры:
* stappler::StringView const&
* stappler::search::Language

Возвращает:
* bool

# ::stappler::search::isStopword(stappler::StringView const&,stappler::search::StemmerEnv*)

## BRIEF

Проверяет слово на исключённость для стеммера

## CONTENT

Проверяет слово на исключённость для стеммера

Параметры:
* stappler::StringView const&
* stappler::search::StemmerEnv*

Возвращает:
* bool

# ::stappler::search::isStopword(stappler::StringView const&,stappler::StringView const*)

## BRIEF

Проверяет слово на исключённость для дополнительного списка

## CONTENT

Проверяет слово на исключённость для дополнительного списка

Параметры:
* stappler::StringView const&
* stappler::StringView const*

Возвращает:
* bool

# ::stappler::search::getLanguageName(stappler::search::Language)

## BRIEF

Возвращает каноническое текстовое название языка

## CONTENT

Возвращает каноническое текстовое название языка

Параметры:
* stappler::search::Language

Возвращает:
* stappler::StringView

# ::stappler::search::parseLanguage(stappler::StringView const&)

## BRIEF

Возвращает значение языка по каноническому имени

## CONTENT

Возвращает значение языка по каноническому имени

Параметры:
* stappler::StringView const&

Возвращает:
* stappler::search::Language

# ::stappler::search::detectLanguage(stappler::StringView const&)

## BRIEF

Пытается распознать используемый язык по строке текста

## CONTENT

Пытается распознать используемый язык по строке текста

Параметры:
* stappler::StringView const&

Возвращает:
* stappler::search::Language

# ::stappler::search::getParserTokenName(stappler::search::ParserToken)

## BRIEF

Возвращает текстовое название токена

## CONTENT

Возвращает текстовое название токена

Параметры:
* stappler::search::ParserToken

Возвращает:
* stappler::StringView

# ::stappler::search::isWordPart(stappler::search::ParserToken)

## BRIEF

Проверяет, является ли токен частью слова, а не полным словом

## CONTENT

Проверяет, является ли токен частью слова, а не полным словом

Параметры:
* stappler::search::ParserToken

Возвращает:
* bool

# ::stappler::search::isComplexWord(stappler::search::ParserToken)

## BRIEF

Проверяет, является ли токен составным словом (то есть, может содержать части)

## CONTENT

Проверяет, является ли токен составным словом (то есть, может содержать части)

Параметры:
* stappler::search::ParserToken

Возвращает:
* bool

# ::stappler::search::parseHtml(stappler::StringView,Callback<void (stappler::StringView)> const&)

## BRIEF

Разбирает HTML на слова для поиска

## CONTENT

Разбирает HTML на слова для поиска

Параметры:
* stappler::StringView
* Callback<void (stappler::StringView)> const&


# ::stappler::search::parseUrl(stappler::StringView&,Callback<void (stappler::StringViewUtf8, stappler::search::UrlToken)> const&)

## BRIEF

Разбирает URL а части

## CONTENT

Разбирает URL а части. Смещает исходную строку на конец успешно распознанных элементов.

Параметры:
* stappler::StringView&
* Callback<void (stappler::StringViewUtf8, stappler::search::UrlToken)> const&

Возвращает:
* bool

# ::stappler::search::parsePhrase(stappler::StringView,Callback<stappler::search::ParserStatus (stappler::StringView, stappler::search::ParserToken)> const&)

## BRIEF

Разбирает фразу на токены

## CONTENT

Разбирает фразу на токены

Параметры:
* stappler::StringView - исходная фраза
* Callback<stappler::search::ParserStatus (stappler::StringView, stappler::search::ParserToken)> const& - функция получения результата

Возвращает:
* bool - true если фраза разобрана полностью


# ::stappler::search::getStemmer(stappler::search::Language)

## BRIEF

Возвращает контекст стемера для потока по языку

## CONTENT

Возвращает контекст стемера для потока по языку

Параметры:
* stappler::search::Language

Возвращает:
* stappler::search::StemmerEnv*

# ::stappler::search::stemWord(stappler::StringView,Callback<void (stappler::StringView)> const&,stappler::search::StemmerEnv*)

## BRIEF

Запускает стеммер для слова

## CONTENT

Запускает стеммер для слова

Параметры:
* stappler::StringView - исходное слово
* Callback<void (stappler::StringView)> const& - функция получения результата
* stappler::search::StemmerEnv* - контекст стеммера

Возвращает:
* bool - true если слово разобрано

# ::stappler::search::stemWord(stappler::StringView,Callback<void (stappler::StringView)> const&,stappler::search::Language)

## BRIEF

Запускает стеммер для слова

## CONTENT

Запускает стеммер для слова

Параметры:
* stappler::StringView - исходное слово
* Callback<void (stappler::StringView)> const& - функция получения результата
* stappler::search::Language - язык слова

Возвращает:
* bool - true если слово разобрано

# ::stappler::search::normalizeWord(stappler::StringView const&)

## BRIEF

Нормализует слово

## CONTENT

Нормализует слово. Приводит к нижнему регистру, удаляет дополниетльную разметку юникода внутри слова.

Параметры:
* stappler::StringView const&

Возвращает:
* stappler::mem_pool::String