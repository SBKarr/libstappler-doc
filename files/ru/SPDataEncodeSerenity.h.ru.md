Title: SPDataEncodeSerenity.h


# MODULES_DATA_SPDATAENCODESERENITY_H_

## BRIEF

## CONTENT


# ::stappler::data::serenity::shouldEncodePercent(char)

## BRIEF

## CONTENT

Параметры:
* char

Возвращает:
* bool

# ::stappler::data::serenity::encodeString<typename>(std::ostream&,StringType const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename StringType

Параметры:
* std::ostream&
* StringType const&


# ::stappler::data::serenity::RawEncoder<typename>

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface

Базовые классы:
* Interface::AllocBaseType


# ::stappler::data::serenity::RawEncoder<typename>::InterfaceType

## BRIEF

## CONTENT


# ::stappler::data::serenity::RawEncoder<typename>::ValueType

## BRIEF

## CONTENT


# ::stappler::data::serenity::RawEncoder<typename>::Type

## BRIEF

## CONTENT

Значения:
* Dict
* Array
* Plain


# ::stappler::data::serenity::RawEncoder<typename>::RawEncoder(std::ostream*)

## BRIEF

## CONTENT

Параметры:
* std::ostream*


# ::stappler::data::serenity::RawEncoder<typename>::write(stappler::nullptr_t)

## BRIEF

## CONTENT

Параметры:
* stappler::nullptr_t


# ::stappler::data::serenity::RawEncoder<typename>::write(bool)

## BRIEF

## CONTENT

Параметры:
* bool


# ::stappler::data::serenity::RawEncoder<typename>::write(int64_t)

## BRIEF

## CONTENT

Параметры:
* int64_t


# ::stappler::data::serenity::RawEncoder<typename>::write(double)

## BRIEF

## CONTENT

Параметры:
* double


# ::stappler::data::serenity::RawEncoder<typename>::write(const typename ValueType::StringType&)

## BRIEF

## CONTENT

Параметры:
* const typename ValueType::StringType&


# ::stappler::data::serenity::RawEncoder<typename>::write(const typename ValueType::BytesType&)

## BRIEF

## CONTENT

Параметры:
* const typename ValueType::BytesType&


# ::stappler::data::serenity::RawEncoder<typename>::onBeginArray(const typename ValueType::ArrayType&)

## BRIEF

## CONTENT

Параметры:
* const typename ValueType::ArrayType&


# ::stappler::data::serenity::RawEncoder<typename>::onEndArray(const typename ValueType::ArrayType&)

## BRIEF

## CONTENT

Параметры:
* const typename ValueType::ArrayType&


# ::stappler::data::serenity::RawEncoder<typename>::onBeginDict(const typename ValueType::DictionaryType&)

## BRIEF

## CONTENT

Параметры:
* const typename ValueType::DictionaryType&


# ::stappler::data::serenity::RawEncoder<typename>::onEndDict(const typename ValueType::DictionaryType&)

## BRIEF

## CONTENT

Параметры:
* const typename ValueType::DictionaryType&


# ::stappler::data::serenity::RawEncoder<typename>::onKey(const typename ValueType::StringType&)

## BRIEF

## CONTENT

Параметры:
* const typename ValueType::StringType&


# ::stappler::data::serenity::RawEncoder<typename>::onNextValue()

## BRIEF

## CONTENT


# ::stappler::data::serenity::RawEncoder<typename>::onArrayValue(stappler::data::serenity::RawEncoder::ValueType const&)

## BRIEF

## CONTENT

Параметры:
* stappler::data::serenity::RawEncoder::ValueType const&


# ::stappler::data::serenity::RawEncoder<typename>::onKeyValuePair(const typename ValueType::StringType&,stappler::data::serenity::RawEncoder::ValueType const&)

## BRIEF

## CONTENT

Параметры:
* const typename ValueType::StringType&
* stappler::data::serenity::RawEncoder::ValueType const&


# ::stappler::data::serenity::RawEncoder<typename>::preventKey

## BRIEF

## CONTENT

Тип: bool


# ::stappler::data::serenity::RawEncoder<typename>::stream

## BRIEF

## CONTENT

Тип: std::ostream*


# ::stappler::data::serenity::RawEncoder<typename>::type

## BRIEF

## CONTENT

Тип: stappler::data::serenity::RawEncoder::Type


# ::stappler::data::serenity::PrettyEncoder<typename>

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface

Базовые классы:
* Interface::AllocBaseType


# ::stappler::data::serenity::PrettyEncoder<typename>::InterfaceType

## BRIEF

## CONTENT


# ::stappler::data::serenity::PrettyEncoder<typename>::ValueType

## BRIEF

## CONTENT


# ::stappler::data::serenity::PrettyEncoder<typename>::Type

## BRIEF

## CONTENT

Значения:
* Dict
* Array
* Plain


# ::stappler::data::serenity::PrettyEncoder<typename>::PrettyEncoder(std::ostream*)

## BRIEF

## CONTENT

Параметры:
* std::ostream*


# ::stappler::data::serenity::PrettyEncoder<typename>::write(stappler::nullptr_t)

## BRIEF

## CONTENT

Параметры:
* stappler::nullptr_t


# ::stappler::data::serenity::PrettyEncoder<typename>::write(bool)

## BRIEF

## CONTENT

Параметры:
* bool


# ::stappler::data::serenity::PrettyEncoder<typename>::write(int64_t)

## BRIEF

## CONTENT

Параметры:
* int64_t


# ::stappler::data::serenity::PrettyEncoder<typename>::write(double)

## BRIEF

## CONTENT

Параметры:
* double


# ::stappler::data::serenity::PrettyEncoder<typename>::write(const typename ValueType::StringType&)

## BRIEF

## CONTENT

Параметры:
* const typename ValueType::StringType&


# ::stappler::data::serenity::PrettyEncoder<typename>::write(const typename ValueType::BytesType&)

## BRIEF

## CONTENT

Параметры:
* const typename ValueType::BytesType&


# ::stappler::data::serenity::PrettyEncoder<typename>::isObjectArray(const typename ValueType::ArrayType&)

## BRIEF

## CONTENT

Параметры:
* const typename ValueType::ArrayType&

Возвращает:
* bool

# ::stappler::data::serenity::PrettyEncoder<typename>::onBeginArray(const typename ValueType::ArrayType&)

## BRIEF

## CONTENT

Параметры:
* const typename ValueType::ArrayType&


# ::stappler::data::serenity::PrettyEncoder<typename>::onEndArray(const typename ValueType::ArrayType&)

## BRIEF

## CONTENT

Параметры:
* const typename ValueType::ArrayType&


# ::stappler::data::serenity::PrettyEncoder<typename>::onBeginDict(const typename ValueType::DictionaryType&)

## BRIEF

## CONTENT

Параметры:
* const typename ValueType::DictionaryType&


# ::stappler::data::serenity::PrettyEncoder<typename>::onEndDict(const typename ValueType::DictionaryType&)

## BRIEF

## CONTENT

Параметры:
* const typename ValueType::DictionaryType&


# ::stappler::data::serenity::PrettyEncoder<typename>::onKey(const typename ValueType::StringType&)

## BRIEF

## CONTENT

Параметры:
* const typename ValueType::StringType&


# ::stappler::data::serenity::PrettyEncoder<typename>::onNextValue()

## BRIEF

## CONTENT


# ::stappler::data::serenity::PrettyEncoder<typename>::onValue(stappler::data::serenity::PrettyEncoder::ValueType const&)

## BRIEF

## CONTENT

Параметры:
* stappler::data::serenity::PrettyEncoder::ValueType const&


# ::stappler::data::serenity::PrettyEncoder<typename>::onArrayValue(stappler::data::serenity::PrettyEncoder::ValueType const&)

## BRIEF

## CONTENT

Параметры:
* stappler::data::serenity::PrettyEncoder::ValueType const&


# ::stappler::data::serenity::PrettyEncoder<typename>::onKeyValuePair(const typename ValueType::StringType&,stappler::data::serenity::PrettyEncoder::ValueType const&)

## BRIEF

## CONTENT

Параметры:
* const typename ValueType::StringType&
* stappler::data::serenity::PrettyEncoder::ValueType const&


# ::stappler::data::serenity::PrettyEncoder<typename>::depth

## BRIEF

## CONTENT

Тип: size_t


# ::stappler::data::serenity::PrettyEncoder<typename>::popComplex

## BRIEF

## CONTENT

Тип: bool


# ::stappler::data::serenity::PrettyEncoder<typename>::offsetted

## BRIEF

## CONTENT

Тип: bool


# ::stappler::data::serenity::PrettyEncoder<typename>::stream

## BRIEF

## CONTENT

Тип: std::ostream*


# ::stappler::data::serenity::PrettyEncoder<typename>::bstack

## BRIEF

## CONTENT

Тип: typename Interface::template ArrayType<bool>


# ::stappler::data::serenity::PrettyEncoder<typename>::type

## BRIEF

## CONTENT

Тип: stappler::data::serenity::PrettyEncoder::Type


# ::stappler::data::serenity::write<typename>(std::ostream&,ValueTemplate<Interface> const&,bool)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface

Параметры:
* std::ostream&
* ValueTemplate<Interface> const&
* bool


# ::stappler::data::serenity::write<typename>(ValueTemplate<Interface> const&,bool)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface

Параметры:
* ValueTemplate<Interface> const&
* bool

Возвращает:
* typename Interface::StringType

# ::stappler::data::serenity::save<typename>(ValueTemplate<Interface> const&,stappler::StringView,bool)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface

Параметры:
* ValueTemplate<Interface> const&
* stappler::StringView
* bool

Возвращает:
* bool

# ::stappler::data::serenity::toString<typename>(ValueTemplate<Interface> const&,bool)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface

Параметры:
* ValueTemplate<Interface> const&
* bool

Возвращает:
* typename Interface::StringType