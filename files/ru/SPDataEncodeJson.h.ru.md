Title: SPDataEncodeJson.h


# MODULES_DATA_SPDATAENCODEJSON_H_

## BRIEF

## CONTENT


# ::stappler::data::json::encodeString<typename>(std::ostream&,StringType const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename StringType

Параметры:
* std::ostream&
* StringType const&


# ::stappler::data::json::RawEncoder<typename>

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface

Базовые классы:
* Interface::AllocBaseType


# ::stappler::data::json::RawEncoder<typename>::InterfaceType

## BRIEF

## CONTENT


# ::stappler::data::json::RawEncoder<typename>::ValueType

## BRIEF

## CONTENT


# ::stappler::data::json::RawEncoder<typename>::RawEncoder(std::ostream*)

## BRIEF

## CONTENT

Параметры:
* std::ostream*


# ::stappler::data::json::RawEncoder<typename>::write(stappler::nullptr_t)

## BRIEF

## CONTENT

Параметры:
* stappler::nullptr_t


# ::stappler::data::json::RawEncoder<typename>::write(bool)

## BRIEF

## CONTENT

Параметры:
* bool


# ::stappler::data::json::RawEncoder<typename>::write(int64_t)

## BRIEF

## CONTENT

Параметры:
* int64_t


# ::stappler::data::json::RawEncoder<typename>::write(double)

## BRIEF

## CONTENT

Параметры:
* double


# ::stappler::data::json::RawEncoder<typename>::write(const typename ValueType::StringType&)

## BRIEF

## CONTENT

Параметры:
* const typename ValueType::StringType&


# ::stappler::data::json::RawEncoder<typename>::write(const typename ValueType::BytesType&)

## BRIEF

## CONTENT

Параметры:
* const typename ValueType::BytesType&


# ::stappler::data::json::RawEncoder<typename>::onBeginArray(const typename ValueType::ArrayType&)

## BRIEF

## CONTENT

Параметры:
* const typename ValueType::ArrayType&


# ::stappler::data::json::RawEncoder<typename>::onEndArray(const typename ValueType::ArrayType&)

## BRIEF

## CONTENT

Параметры:
* const typename ValueType::ArrayType&


# ::stappler::data::json::RawEncoder<typename>::onBeginDict(const typename ValueType::DictionaryType&)

## BRIEF

## CONTENT

Параметры:
* const typename ValueType::DictionaryType&


# ::stappler::data::json::RawEncoder<typename>::onEndDict(const typename ValueType::DictionaryType&)

## BRIEF

## CONTENT

Параметры:
* const typename ValueType::DictionaryType&


# ::stappler::data::json::RawEncoder<typename>::onKey(const typename ValueType::StringType&)

## BRIEF

## CONTENT

Параметры:
* const typename ValueType::StringType&


# ::stappler::data::json::RawEncoder<typename>::onNextValue()

## BRIEF

## CONTENT


# ::stappler::data::json::RawEncoder<typename>::stream

## BRIEF

## CONTENT

Тип: std::ostream*


# ::stappler::data::json::PrettyEncoder<typename>

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface

Базовые классы:
* Interface::AllocBaseType


# ::stappler::data::json::PrettyEncoder<typename>::InterfaceType

## BRIEF

## CONTENT


# ::stappler::data::json::PrettyEncoder<typename>::ValueType

## BRIEF

## CONTENT


# ::stappler::data::json::PrettyEncoder<typename>::PrettyEncoder(std::ostream*,bool)

## BRIEF

## CONTENT

Параметры:
* std::ostream*
* bool


# ::stappler::data::json::PrettyEncoder<typename>::write(stappler::nullptr_t)

## BRIEF

## CONTENT

Параметры:
* stappler::nullptr_t


# ::stappler::data::json::PrettyEncoder<typename>::write(bool)

## BRIEF

## CONTENT

Параметры:
* bool


# ::stappler::data::json::PrettyEncoder<typename>::write(int64_t)

## BRIEF

## CONTENT

Параметры:
* int64_t


# ::stappler::data::json::PrettyEncoder<typename>::write(double)

## BRIEF

## CONTENT

Параметры:
* double


# ::stappler::data::json::PrettyEncoder<typename>::write(const typename ValueType::StringType&)

## BRIEF

## CONTENT

Параметры:
* const typename ValueType::StringType&


# ::stappler::data::json::PrettyEncoder<typename>::write(const typename ValueType::BytesType&)

## BRIEF

## CONTENT

Параметры:
* const typename ValueType::BytesType&


# ::stappler::data::json::PrettyEncoder<typename>::isObjectArray(const typename ValueType::ArrayType&)

## BRIEF

## CONTENT

Параметры:
* const typename ValueType::ArrayType&

Возвращает:
* bool

# ::stappler::data::json::PrettyEncoder<typename>::onBeginArray(const typename ValueType::ArrayType&)

## BRIEF

## CONTENT

Параметры:
* const typename ValueType::ArrayType&


# ::stappler::data::json::PrettyEncoder<typename>::onEndArray(const typename ValueType::ArrayType&)

## BRIEF

## CONTENT

Параметры:
* const typename ValueType::ArrayType&


# ::stappler::data::json::PrettyEncoder<typename>::onBeginDict(const typename ValueType::DictionaryType&)

## BRIEF

## CONTENT

Параметры:
* const typename ValueType::DictionaryType&


# ::stappler::data::json::PrettyEncoder<typename>::onEndDict(const typename ValueType::DictionaryType&)

## BRIEF

## CONTENT

Параметры:
* const typename ValueType::DictionaryType&


# ::stappler::data::json::PrettyEncoder<typename>::onKey(const typename ValueType::StringType&)

## BRIEF

## CONTENT

Параметры:
* const typename ValueType::StringType&


# ::stappler::data::json::PrettyEncoder<typename>::onNextValue()

## BRIEF

## CONTENT


# ::stappler::data::json::PrettyEncoder<typename>::onValue(stappler::data::json::PrettyEncoder::ValueType const&)

## BRIEF

## CONTENT

Параметры:
* stappler::data::json::PrettyEncoder::ValueType const&


# ::stappler::data::json::PrettyEncoder<typename>::depth

## BRIEF

## CONTENT

Тип: size_t


# ::stappler::data::json::PrettyEncoder<typename>::popComplex

## BRIEF

## CONTENT

Тип: bool


# ::stappler::data::json::PrettyEncoder<typename>::offsetted

## BRIEF

## CONTENT

Тип: bool


# ::stappler::data::json::PrettyEncoder<typename>::timeMarkers

## BRIEF

## CONTENT

Тип: bool


# ::stappler::data::json::PrettyEncoder<typename>::stream

## BRIEF

## CONTENT

Тип: std::ostream*


# ::stappler::data::json::PrettyEncoder<typename>::lastKey

## BRIEF

## CONTENT

Тип: stappler::StringView


# ::stappler::data::json::PrettyEncoder<typename>::bstack

## BRIEF

## CONTENT

Тип: typename Interface::template ArrayType<bool>


# ::stappler::data::json::write<typename>(std::ostream&,ValueTemplate<Interface> const&,bool,bool)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface

Параметры:
* std::ostream&
* ValueTemplate<Interface> const&
* bool
* bool


# ::stappler::data::json::write<typename>(ValueTemplate<Interface> const&,bool,bool)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface

Параметры:
* ValueTemplate<Interface> const&
* bool
* bool

Возвращает:
* typename Interface::StringType

# ::stappler::data::json::save<typename>(ValueTemplate<Interface> const&,stappler::StringView,bool,bool)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface

Параметры:
* ValueTemplate<Interface> const&
* stappler::StringView
* bool
* bool

Возвращает:
* bool

# ::stappler::data::json::toString<typename>(ValueTemplate<Interface> const&,bool)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface

Параметры:
* ValueTemplate<Interface> const&
* bool

Возвращает:
* typename Interface::StringType