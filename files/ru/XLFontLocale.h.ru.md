Title: XLFontLocale.h


# XENOLITH_FONT_XLFONTLOCALE_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::operator""_locale<typename,CharType...>()

## BRIEF

## CONTENT

Параметры шаблона:
* typename CharType
* CharType Chars

Возвращает:
* auto

# ::stappler::xenolith::operator""_token(char const*,std::size_t)

## BRIEF

## CONTENT

Параметры:
* char const*
* std::size_t

Возвращает:
* stappler::mem_std::String

# ::stappler::xenolith::localeIndex(size_t)

## BRIEF

## CONTENT

Параметры:
* size_t

Возвращает:
* stappler::mem_std::String

# ::stappler::xenolith::localeIndex<size_t>()

## BRIEF

## CONTENT

Параметры шаблона:
* size_t Index

Возвращает:
* auto

# ::stappler::xenolith::locale::LocaleInitList

## BRIEF

## CONTENT


# ::stappler::xenolith::locale::LocaleIndexList

## BRIEF

## CONTENT


# ::stappler::xenolith::locale::NumRule

## BRIEF

## CONTENT


# ::stappler::xenolith::locale::TimeTokens

## BRIEF

## CONTENT

Значения:
* Today
* Yesterday
* Jan
* Feb
* Mar
* Apr
* Nay
* Jun
* jul
* Aug
* Sep
* Oct
* Nov
* Dec
* Max


# ::stappler::xenolith::locale::onLocale

## BRIEF

## CONTENT

Тип: stappler::xenolith::EventHeader


# ::stappler::xenolith::locale::Initializer

## BRIEF

## CONTENT


# ::stappler::xenolith::locale::Initializer::Initializer(stappler::mem_std::String const&,stappler::xenolith::locale::LocaleInitList&&)

## BRIEF

## CONTENT

Параметры:
* stappler::mem_std::String const&
* stappler::xenolith::locale::LocaleInitList&&


# ::stappler::xenolith::locale::define(stappler::StringView const&,stappler::xenolith::locale::LocaleInitList&&)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView const&
* stappler::xenolith::locale::LocaleInitList&&


# ::stappler::xenolith::locale::define(stappler::StringView const&,stappler::xenolith::locale::LocaleIndexList&&)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView const&
* stappler::xenolith::locale::LocaleIndexList&&


# ::stappler::xenolith::locale::define(stappler::StringView const&,std::array<StringView, toInt(TimeTokens::Max)> const&)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView const&
* std::array<StringView, toInt(TimeTokens::Max)> const&


# ::stappler::xenolith::locale::setDefault(stappler::mem_std::String const&)

## BRIEF

## CONTENT

Параметры:
* stappler::mem_std::String const&


# ::stappler::xenolith::locale::getDefault()

## BRIEF

## CONTENT

Возвращает:
* stappler::mem_std::String const&

# ::stappler::xenolith::locale::setLocale(stappler::mem_std::String const&)

## BRIEF

## CONTENT

Параметры:
* stappler::mem_std::String const&


# ::stappler::xenolith::locale::getLocale()

## BRIEF

## CONTENT

Возвращает:
* stappler::mem_std::String const&

# ::stappler::xenolith::locale::setNumRule(stappler::mem_std::String const&,stappler::xenolith::locale::NumRule const&)

## BRIEF

## CONTENT

Параметры:
* stappler::mem_std::String const&
* stappler::xenolith::locale::NumRule const&


# ::stappler::xenolith::locale::string(stappler::WideStringView const&)

## BRIEF

## CONTENT

Параметры:
* stappler::WideStringView const&

Возвращает:
* stappler::WideStringView

# ::stappler::xenolith::locale::string(size_t)

## BRIEF

## CONTENT

Параметры:
* size_t

Возвращает:
* stappler::WideStringView

# ::stappler::xenolith::locale::numeric(stappler::WideStringView const&,size_t)

## BRIEF

## CONTENT

Параметры:
* stappler::WideStringView const&
* size_t

Возвращает:
* stappler::WideStringView

# ::stappler::xenolith::locale::hasLocaleTagsFast(stappler::WideStringView const&)

## BRIEF

## CONTENT

Параметры:
* stappler::WideStringView const&

Возвращает:
* bool

# ::stappler::xenolith::locale::hasLocaleTags(stappler::WideStringView const&)

## BRIEF

## CONTENT

Параметры:
* stappler::WideStringView const&

Возвращает:
* bool

# ::stappler::xenolith::locale::resolveLocaleTags(stappler::WideStringView const&)

## BRIEF

## CONTENT

Параметры:
* stappler::WideStringView const&

Возвращает:
* stappler::mem_std::WideString

# ::stappler::xenolith::locale::language(stappler::mem_std::String const&)

## BRIEF

## CONTENT

Параметры:
* stappler::mem_std::String const&

Возвращает:
* stappler::mem_std::String

# ::stappler::xenolith::locale::common(stappler::mem_std::String const&)

## BRIEF

## CONTENT

Параметры:
* stappler::mem_std::String const&

Возвращает:
* stappler::mem_std::String

# ::stappler::xenolith::locale::timeToken(stappler::xenolith::locale::TimeTokens)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::locale::TimeTokens

Возвращает:
* stappler::StringView

# ::stappler::xenolith::locale::localDate(stappler::Time)

## BRIEF

## CONTENT

Параметры:
* stappler::Time

Возвращает:
* stappler::mem_std::String

# ::stappler::xenolith::locale::localDate(std::array<StringView, toInt(TimeTokens::Max)> const&,stappler::Time)

## BRIEF

## CONTENT

Параметры:
* std::array<StringView, toInt(TimeTokens::Max)> const&
* stappler::Time

Возвращает:
* stappler::mem_std::String