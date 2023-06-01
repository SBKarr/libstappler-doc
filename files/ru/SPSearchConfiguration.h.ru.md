Title: SPSearchConfiguration.h


# STAPPLER_SEARCH_SPSEARCHCONFIGURATION_H_

## BRIEF

## CONTENT


# ::stappler::search::Configuration

## BRIEF

## CONTENT

Базовые классы:
* memory::AllocPool


# ::stappler::search::Configuration::Map<typename,typename>

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename K
* typename V


# ::stappler::search::Configuration::Vector<typename>

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename T


# ::stappler::search::Configuration::Set<typename>

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename T


# ::stappler::search::Configuration::String

## BRIEF

## CONTENT

Доступ: public


# ::stappler::search::Configuration::StringStream

## BRIEF

## CONTENT

Доступ: public


# ::stappler::search::Configuration::StemmerCallback

## BRIEF

## CONTENT

Доступ: public


# ::stappler::search::Configuration::StemWordCallback

## BRIEF

## CONTENT

Доступ: public


# ::stappler::search::Configuration::PreStemCallback

## BRIEF

## CONTENT

Доступ: public


# ::stappler::search::Configuration::SearchVector

## BRIEF

## CONTENT

Доступ: public


# ::stappler::search::Configuration::WordMap

## BRIEF

## CONTENT

Доступ: public


# ::stappler::search::Configuration::HeadlineConfig

## BRIEF

## CONTENT

Доступ: public


# ::stappler::search::Configuration::HeadlineConfig::DefaultMaxWords

## BRIEF

## CONTENT

Тип: size_t const


# ::stappler::search::Configuration::HeadlineConfig::DefaultMinWords

## BRIEF

## CONTENT

Тип: size_t const


# ::stappler::search::Configuration::HeadlineConfig::DefaultShortWord

## BRIEF

## CONTENT

Тип: size_t const


# ::stappler::search::Configuration::HeadlineConfig::startToken

## BRIEF

## CONTENT

Тип: stappler::StringView


# ::stappler::search::Configuration::HeadlineConfig::stopToken

## BRIEF

## CONTENT

Тип: stappler::StringView


# ::stappler::search::Configuration::HeadlineConfig::startFragment

## BRIEF

## CONTENT

Тип: stappler::StringView


# ::stappler::search::Configuration::HeadlineConfig::stopFragment

## BRIEF

## CONTENT

Тип: stappler::StringView


# ::stappler::search::Configuration::HeadlineConfig::separator

## BRIEF

## CONTENT

Тип: stappler::StringView


# ::stappler::search::Configuration::HeadlineConfig::maxWords

## BRIEF

## CONTENT

Тип: size_t


# ::stappler::search::Configuration::HeadlineConfig::minWords

## BRIEF

## CONTENT

Тип: size_t


# ::stappler::search::Configuration::HeadlineConfig::shortWord

## BRIEF

## CONTENT

Тип: size_t


# ::stappler::search::Configuration::HeadlineConfig::fragmentCallback

## BRIEF

## CONTENT

Тип: Function<void (stappler::StringView, stappler::StringView)>


# ::stappler::search::Configuration::Configuration()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::search::Configuration::Configuration(stappler::search::Language)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::search::Language


# ::stappler::search::Configuration::setLanguage(stappler::search::Language)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::search::Language


# ::stappler::search::Configuration::getLanguage() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::search::Language

# ::stappler::search::Configuration::setStemmer(stappler::search::ParserToken,stappler::search::Configuration::StemmerCallback&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::search::ParserToken
* stappler::search::Configuration::StemmerCallback&&


# ::stappler::search::Configuration::getStemmer(stappler::search::ParserToken) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::search::ParserToken

Возвращает:
* StemmerCallback

# ::stappler::search::Configuration::setCustomStopwords(stappler::StringView const*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView const*


# ::stappler::search::Configuration::getCustomStopwords() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::StringView const*

# ::stappler::search::Configuration::setPreStem(stappler::search::Configuration::PreStemCallback&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::search::Configuration::PreStemCallback&&


# ::stappler::search::Configuration::getPreStem() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* PreStemCallback&

# ::stappler::search::Configuration::stemPhrase(stappler::StringView const&,stappler::search::Configuration::StemWordCallback const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView const&
* stappler::search::Configuration::StemWordCallback const&


# ::stappler::search::Configuration::stemHtml(stappler::StringView const&,stappler::search::Configuration::StemWordCallback const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView const&
* stappler::search::Configuration::StemWordCallback const&


# ::stappler::search::Configuration::stemWord(stappler::StringView const&,stappler::search::ParserToken,stappler::search::Configuration::StemWordCallback const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView const&
* stappler::search::ParserToken
* stappler::search::Configuration::StemWordCallback const&

Возвращает:
* bool

# ::stappler::search::Configuration::makeHeadline(stappler::search::Configuration::HeadlineConfig const&,stappler::StringView const&,Vector<stappler::search::Configuration::String> const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::search::Configuration::HeadlineConfig const&
* stappler::StringView const&
* Vector<stappler::search::Configuration::String> const&

Возвращает:
* String

# ::stappler::search::Configuration::makeHtmlHeadlines(stappler::search::Configuration::HeadlineConfig const&,stappler::StringView const&,Vector<stappler::search::Configuration::String> const&,size_t) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::search::Configuration::HeadlineConfig const&
* stappler::StringView const&
* Vector<stappler::search::Configuration::String> const&
* size_t

Возвращает:
* String

# ::stappler::search::Configuration::makeHeadlines(stappler::search::Configuration::HeadlineConfig const&,Callback<void (const Function<bool (const stappler::StringView &, const stappler::StringView &)>)> const&,Vector<stappler::search::Configuration::String> const&,size_t) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::search::Configuration::HeadlineConfig const&
* Callback<void (const Function<bool (const stappler::StringView &, const stappler::StringView &)>)> const&
* Vector<stappler::search::Configuration::String> const&
* size_t

Возвращает:
* String

# ::stappler::search::Configuration::stemQuery(Vector<stappler::search::SearchData> const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Vector<stappler::search::SearchData> const&

Возвращает:
* Vector<stappler::search::Configuration::String>

# ::stappler::search::Configuration::makeSearchVector(stappler::search::Configuration::SearchVector&,stappler::StringView,SearchData::Rank,size_t,Callback<void (stappler::StringView, stappler::StringView, stappler::search::ParserToken)> const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::search::Configuration::SearchVector&
* stappler::StringView
* SearchData::Rank
* size_t
* Callback<void (stappler::StringView, stappler::StringView, stappler::search::ParserToken)> const&

Возвращает:
* size_t

# ::stappler::search::Configuration::encodeSearchVector(stappler::search::Configuration::SearchVector const&,SearchData::Rank) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::search::Configuration::SearchVector const&
* SearchData::Rank

Возвращает:
* String

# ::stappler::search::Configuration::parseQuery(stappler::StringView) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView

Возвращает:
* stappler::search::SearchQuery

# ::stappler::search::Configuration::isMatch(stappler::search::Configuration::SearchVector const&,stappler::StringView) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::search::Configuration::SearchVector const&
* stappler::StringView

Возвращает:
* bool

# ::stappler::search::Configuration::isMatch(stappler::search::Configuration::SearchVector const&,stappler::search::SearchQuery const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::search::Configuration::SearchVector const&
* stappler::search::SearchQuery const&

Возвращает:
* bool

# ::stappler::search::Configuration::getEnvForToken(stappler::search::ParserToken) const

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::search::ParserToken

Возвращает:
* stappler::search::StemmerEnv*

# ::stappler::search::Configuration::_language

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::search::Language


# ::stappler::search::Configuration::_primary

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::search::StemmerEnv*


# ::stappler::search::Configuration::_secondary

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::search::StemmerEnv*


# ::stappler::search::Configuration::_stemmers

## BRIEF

## CONTENT

Доступ: protected

Тип: Map<stappler::search::ParserToken, stappler::search::Configuration::StemmerCallback>


# ::stappler::search::Configuration::_preStem

## BRIEF

## CONTENT

Доступ: protected

Тип: PreStemCallback


# ::stappler::search::Configuration::_customStopwords

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::StringView const*
