Title: SPSearchParser.h


# MODULES_SEARCH_SPSEARCHPARSER_H_

## BRIEF

## CONTENT


# ::stappler::search::ParserToken

## BRIEF

## CONTENT

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

## CONTENT

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

## CONTENT

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

## CONTENT

Значения:
* Continue
* PreventSubdivide
* Stop


# ::stappler::search::SearchData

## BRIEF

## CONTENT


# ::stappler::search::SearchData::Language

## BRIEF

## CONTENT


# ::stappler::search::SearchData::Rank

## BRIEF

## CONTENT

Значения:
* A
* B
* C
* D
* Unknown


# ::stappler::search::SearchData::Type

## BRIEF

## CONTENT

Значения:
* Parse
* Cast
* ForceCast


# ::stappler::search::SearchData::buffer

## BRIEF

## CONTENT

Тип: stappler::mem_pool::String


# ::stappler::search::SearchData::language

## BRIEF

## CONTENT

Тип: Language


# ::stappler::search::SearchData::rank

## BRIEF

## CONTENT

Тип: stappler::search::SearchData::Rank


# ::stappler::search::SearchData::type

## BRIEF

## CONTENT

Тип: stappler::search::SearchData::Type


# ::stappler::search::SearchData::getLanguage() const

## BRIEF

## CONTENT

Возвращает:
* stappler::StringView

# ::stappler::search::SearchOp

## BRIEF

## CONTENT

Значения:
* None
* Not
* And
* Or
* Follow


# ::stappler::search::SearchQuery

## BRIEF

## CONTENT


# ::stappler::search::SearchQuery::Block

## BRIEF

## CONTENT

Значения:
* None
* Parentesis
* Quoted


# ::stappler::search::SearchQuery::Format

## BRIEF

## CONTENT

Значения:
* Stappler
* Postgresql


# ::stappler::search::SearchQuery::block

## BRIEF

## CONTENT

Тип: stappler::search::SearchQuery::Block


# ::stappler::search::SearchQuery::offset

## BRIEF

## CONTENT

Тип: size_t


# ::stappler::search::SearchQuery::op

## BRIEF

## CONTENT

Тип: stappler::search::SearchOp


# ::stappler::search::SearchQuery::value

## BRIEF

## CONTENT

Тип: stappler::mem_pool::String


# ::stappler::search::SearchQuery::source

## BRIEF

## CONTENT

Тип: stappler::StringView


# ::stappler::search::SearchQuery::args

## BRIEF

## CONTENT

Тип: Vector<stappler::search::SearchQuery>


# ::stappler::search::SearchQuery::SearchQuery()

## BRIEF

## CONTENT


# ::stappler::search::SearchQuery::SearchQuery(stappler::StringView,size_t,stappler::StringView)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView
* size_t
* stappler::StringView


# ::stappler::search::SearchQuery::SearchQuery(stappler::search::SearchOp,stappler::StringView)

## BRIEF

## CONTENT

Параметры:
* stappler::search::SearchOp
* stappler::StringView


# ::stappler::search::SearchQuery::clear()

## BRIEF

## CONTENT


# ::stappler::search::SearchQuery::encode(Callback<void (stappler::StringView)> const&,stappler::search::SearchQuery::Format) const

## BRIEF

## CONTENT

Параметры:
* Callback<void (stappler::StringView)> const&
* stappler::search::SearchQuery::Format


# ::stappler::search::SearchQuery::describe(std::ostream&,size_t) const

## BRIEF

## CONTENT

Параметры:
* std::ostream&
* size_t


# ::stappler::search::SearchQuery::foreach(Callback<void (stappler::StringView, stappler::StringView)> const&) const

## BRIEF

## CONTENT

Параметры:
* Callback<void (stappler::StringView, stappler::StringView)> const&


# ::stappler::search::isStopword(stappler::StringView const&,stappler::search::Language)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView const&
* stappler::search::Language

Возвращает:
* bool

# ::stappler::search::isStopword(stappler::StringView const&,stappler::search::StemmerEnv*)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView const&
* stappler::search::StemmerEnv*

Возвращает:
* bool

# ::stappler::search::isStopword(stappler::StringView const&,stappler::StringView const*)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView const&
* stappler::StringView const*

Возвращает:
* bool

# ::stappler::search::getLanguageName(stappler::search::Language)

## BRIEF

## CONTENT

Параметры:
* stappler::search::Language

Возвращает:
* stappler::StringView

# ::stappler::search::parseLanguage(stappler::StringView const&)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView const&

Возвращает:
* stappler::search::Language

# ::stappler::search::detectLanguage(stappler::StringView const&)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView const&

Возвращает:
* stappler::search::Language

# ::stappler::search::getParserTokenName(stappler::search::ParserToken)

## BRIEF

## CONTENT

Параметры:
* stappler::search::ParserToken

Возвращает:
* stappler::StringView

# ::stappler::search::isWordPart(stappler::search::ParserToken)

## BRIEF

## CONTENT

Параметры:
* stappler::search::ParserToken

Возвращает:
* bool

# ::stappler::search::isComplexWord(stappler::search::ParserToken)

## BRIEF

## CONTENT

Параметры:
* stappler::search::ParserToken

Возвращает:
* bool

# ::stappler::search::parseHtml(stappler::StringView,Callback<void (stappler::StringView)> const&)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView
* Callback<void (stappler::StringView)> const&


# ::stappler::search::parseUrl(stappler::StringView&,Callback<void (stappler::StringViewUtf8, stappler::search::UrlToken)> const&)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView&
* Callback<void (stappler::StringViewUtf8, stappler::search::UrlToken)> const&

Возвращает:
* bool

# ::stappler::search::parsePhrase(stappler::StringView,Callback<stappler::search::ParserStatus (stappler::StringView, stappler::search::ParserToken)> const&)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView
* Callback<stappler::search::ParserStatus (stappler::StringView, stappler::search::ParserToken)> const&

Возвращает:
* bool

# ::stappler::search::getStemmer(stappler::search::Language)

## BRIEF

## CONTENT

Параметры:
* stappler::search::Language

Возвращает:
* stappler::search::StemmerEnv*

# ::stappler::search::stemWord(stappler::StringView,Callback<void (stappler::StringView)> const&,stappler::search::StemmerEnv*)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView
* Callback<void (stappler::StringView)> const&
* stappler::search::StemmerEnv*

Возвращает:
* bool

# ::stappler::search::stemWord(stappler::StringView,Callback<void (stappler::StringView)> const&,stappler::search::Language)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView
* Callback<void (stappler::StringView)> const&
* stappler::search::Language

Возвращает:
* bool

# ::stappler::search::normalizeWord(stappler::StringView const&)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView const&

Возвращает:
* stappler::mem_pool::String