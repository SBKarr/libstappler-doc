Title: XLFontLocale.h


# XENOLITH_FONT_XLFONTLOCALE_H_

## BRIEF

Заголовок интерфейса локализации текстовых полей

## CONTENT

Заголовок интерфейса локализации текстовых полей


# ::stappler::xenolith::operator""_locale<typename,CharType...>()

## BRIEF

Суффикс для создания локализованной строки

## CONTENT

Суффикс для создания локализованной строки. Используется для создания одиночной именованной строки.

Параметры шаблона:
* typename CharType
* CharType Chars

Возвращает:
* auto

# ::stappler::xenolith::operator""_token(char const*,std::size_t)

## BRIEF

Суффикс для создания токена локализованной строки

## CONTENT

Суффикс для создания токена локализованной строки. Токен используется внутри другой строки для локализации.

Параметры:
* char const*
* std::size_t

Возвращает:
* stappler::mem_std::String

# ::stappler::xenolith::localeIndex(size_t)

## BRIEF

Возвращает токен для применения строки по индексу

## CONTENT

Возвращает токен для применения строки по индексу

Параметры:
* size_t

Возвращает:
* stappler::mem_std::String

# ::stappler::xenolith::localeIndex<size_t>()

## BRIEF

Возвращает токен для применения строки по индексу

## CONTENT

Возвращает токен для применения строки по индексу

Параметры шаблона:
* size_t Index

Возвращает:
* auto

# ::stappler::xenolith::locale::LocaleInitList

## BRIEF

Список инициализации именованных локализованных строк

## CONTENT

Список инициализации именованных локализованных строк


# ::stappler::xenolith::locale::LocaleIndexList

## BRIEF

Список инициализации нумерованных локализованных строк

## CONTENT

Список инициализации нумерованных локализованных строк


# ::stappler::xenolith::locale::NumRule

## BRIEF

Правило использования нумерованных склонений строк

## CONTENT

Правило использования нумерованных склонений строк


# ::stappler::xenolith::locale::TimeTokens

## BRIEF

Токены для формирования строки времени

## CONTENT

Токены для формирования строки времени

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

Событие изменения локали

## CONTENT

Событие изменения локали

Тип: stappler::xenolith::EventHeader


# ::stappler::xenolith::locale::define(stappler::StringView const&,stappler::xenolith::locale::LocaleInitList&&)

## BRIEF

Определяет строки для локали

## CONTENT

Определяет строки для локали

Параметры:
* stappler::StringView const& - имя локали
* stappler::xenolith::locale::LocaleInitList&&


# ::stappler::xenolith::locale::define(stappler::StringView const&,stappler::xenolith::locale::LocaleIndexList&&)

## BRIEF

Определяет строки для локали

## CONTENT

Определяет строки для локали

Параметры:
* stappler::StringView const& - имя локали
* stappler::xenolith::locale::LocaleIndexList&&


# ::stappler::xenolith::locale::define(stappler::StringView const&,std::array<StringView, toInt(TimeTokens::Max)> const&)

## BRIEF

Определяет строки для формирования времени

## CONTENT

Определяет строки для формирования времени

Параметры:
* stappler::StringView const& - имя локали
* std::array<StringView, toInt(TimeTokens::Max)> const&


# ::stappler::xenolith::locale::setDefault(stappler::mem_std::String const&)

## BRIEF

Устанавливает локаль по умолчанию

## CONTENT

Устанавливает локаль по умолчанию

Параметры:
* stappler::mem_std::String const&


# ::stappler::xenolith::locale::getDefault()

## BRIEF

Возвращает локаль по умолчанию

## CONTENT

Возвращает локаль по умолчанию

Возвращает:
* stappler::mem_std::String const&

# ::stappler::xenolith::locale::setLocale(stappler::mem_std::String const&)

## BRIEF

Устанавливает текущую локаль

## CONTENT

Устанавливает текущую локаль

Параметры:
* stappler::mem_std::String const&


# ::stappler::xenolith::locale::getLocale()

## BRIEF

Возвращает текущую локаль

## CONTENT

Возвращает текущую локаль

Возвращает:
* stappler::mem_std::String const&

# ::stappler::xenolith::locale::setNumRule(stappler::mem_std::String const&,stappler::xenolith::locale::NumRule&&)

## BRIEF

Устанавливает правило склонения номеров для локали

## CONTENT

Устанавливает правило склонения номеров для локали

Параметры:
* stappler::mem_std::String const&
* stappler::xenolith::locale::NumRule&&


# ::stappler::xenolith::locale::string(stappler::WideStringView const&)

## BRIEF

Возвращает локализованную строку по имени

## CONTENT

Возвращает локализованную строку по имени

Параметры:
* stappler::WideStringView const&

Возвращает:
* stappler::WideStringView

# ::stappler::xenolith::locale::string(size_t)

## BRIEF

Возвращает локализованную строку по индексу

## CONTENT

Возвращает локализованную строку по индексу

Параметры:
* size_t

Возвращает:
* stappler::WideStringView

# ::stappler::xenolith::locale::string<char...>(metastring::metastring<Chars...> const&)

## BRIEF

Возвращает локализованную строку по имени

## CONTENT

Возвращает локализованную строку по имени

Параметры шаблона:
* char Chars

Параметры:
* metastring::metastring<Chars...> const&

Возвращает:
* stappler::WideStringView

# ::stappler::xenolith::locale::numeric(stappler::WideStringView const&,uint32_t)

## BRIEF

Возвращает строку, требующую склонения для числа

## CONTENT

Возвращает строку, требующую склонения для числа

Параметры:
* stappler::WideStringView const&
* uint32_t

Возвращает:
* stappler::WideStringView

# ::stappler::xenolith::locale::numeric<char...>(metastring::metastring<Chars...> const&,uint32_t)

## BRIEF

Возвращает строку, требующую склонения для числа

## CONTENT

Возвращает строку, требующую склонения для числа

Параметры шаблона:
* char Chars

Параметры:
* metastring::metastring<Chars...> const&
* uint32_t

Возвращает:
* stappler::WideStringView

# ::stappler::xenolith::locale::hasLocaleTagsFast(stappler::WideStringView const&)

## BRIEF

Быстро проверяет строку на наличие токенов локализации

## CONTENT

Быстро проверяет строку на наличие токенов локализации

Параметры:
* stappler::WideStringView const&

Возвращает:
* bool

# ::stappler::xenolith::locale::hasLocaleTags(stappler::WideStringView const&)

## BRIEF

Проверяет строку на наличие токенов локализации

## CONTENT

Проверяет строку на наличие токенов локализации

Параметры:
* stappler::WideStringView const&

Возвращает:
* bool

# ::stappler::xenolith::locale::resolveLocaleTags(stappler::WideStringView const&)

## BRIEF

Конвертирует строку с токенами локали

## CONTENT

Конвертирует строку с токенами локали

Параметры:
* stappler::WideStringView const&

Возвращает:
* stappler::mem_std::WideString

# ::stappler::xenolith::locale::language(stappler::StringView const&)

## BRIEF

Возвращает имя языка для локали (в разработке)

## CONTENT

Возвращает имя языка для локали (в разработке)

Параметры:
* stappler::StringView const&

Возвращает:
* stappler::mem_std::String

# ::stappler::xenolith::locale::common(stappler::StringView const&)

## BRIEF

Возвращает стандартное имя локали

## CONTENT

Возвращает стандартное имя локали

Параметры:
* stappler::StringView const&

Возвращает:
* stappler::mem_std::String

# ::stappler::xenolith::locale::timeToken(stappler::xenolith::locale::TimeTokens)

## BRIEF

Возвращает токен времени

## CONTENT

Возвращает токен времени

Параметры:
* stappler::xenolith::locale::TimeTokens

Возвращает:
* stappler::StringView

# ::stappler::xenolith::locale::timeTokenTable()

## BRIEF

Возвращает таблицу токенов времени

## CONTENT

Возвращает таблицу токенов времени

Возвращает:
* std::array<memory::string, toInt(TimeTokens::Max)> const&

# ::stappler::xenolith::locale::localDate(stappler::Time)

## BRIEF

Возвращает локализованную дату

## CONTENT

Возвращает локализованную дату

Параметры:
* stappler::Time

Возвращает:
* stappler::mem_std::String

# ::stappler::xenolith::locale::localDate(std::array<StringView, toInt(TimeTokens::Max)> const&,stappler::Time)

## BRIEF

Возвращает локализованную дату

## CONTENT

Возвращает локализованную дату

Параметры:
* std::array<StringView, toInt(TimeTokens::Max)> const&
* stappler::Time

Возвращает:
* stappler::mem_std::String