Title: SPDataDecodeJson.h


# MODULES_DATA_SPDATADECODEJSON_H_

## BRIEF

## CONTENT


# ::stappler::data::json::decodeNumber(stappler::StringView&,bool&)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView&
* bool&

Возвращает:
* stappler::StringView

# ::stappler::data::json::Decoder<typename>

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface

Базовые классы:
* Interface::AllocBaseType


# ::stappler::data::json::Decoder<typename>::InterfaceType

## BRIEF

## CONTENT


# ::stappler::data::json::Decoder<typename>::ValueType

## BRIEF

## CONTENT


# ::stappler::data::json::Decoder<typename>::StringType

## BRIEF

## CONTENT


# ::stappler::data::json::Decoder<typename>::BackType

## BRIEF

## CONTENT

Значения:
* BackIsArray
* BackIsDict
* BackIsEmpty


# ::stappler::data::json::Decoder<typename>::Decoder(stappler::StringView&,bool)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView&
* bool


# ::stappler::data::json::Decoder<typename>::parseBufferString(stappler::data::json::Decoder::StringType&)

## BRIEF

## CONTENT

Параметры:
* stappler::data::json::Decoder::StringType&


# ::stappler::data::json::Decoder<typename>::parseJsonNumber(stappler::data::json::Decoder::ValueType&)

## BRIEF

## CONTENT

Параметры:
* stappler::data::json::Decoder::ValueType&


# ::stappler::data::json::Decoder<typename>::parseValue(stappler::data::json::Decoder::ValueType&)

## BRIEF

## CONTENT

Параметры:
* stappler::data::json::Decoder::ValueType&


# ::stappler::data::json::Decoder<typename>::parseJson(stappler::data::json::Decoder::ValueType&)

## BRIEF

## CONTENT

Параметры:
* stappler::data::json::Decoder::ValueType&


# ::stappler::data::json::Decoder<typename>::push(stappler::data::json::Decoder::BackType,stappler::data::json::Decoder::ValueType*)

## BRIEF

## CONTENT

Параметры:
* stappler::data::json::Decoder::BackType
* stappler::data::json::Decoder::ValueType*


# ::stappler::data::json::Decoder<typename>::pop()

## BRIEF

## CONTENT


# ::stappler::data::json::Decoder<typename>::validate

## BRIEF

## CONTENT

Тип: bool


# ::stappler::data::json::Decoder<typename>::stop

## BRIEF

## CONTENT

Тип: bool


# ::stappler::data::json::Decoder<typename>::backType

## BRIEF

## CONTENT

Тип: stappler::data::json::Decoder::BackType


# ::stappler::data::json::Decoder<typename>::r

## BRIEF

## CONTENT

Тип: stappler::StringView


# ::stappler::data::json::Decoder<typename>::back

## BRIEF

## CONTENT

Тип: ValueType*


# ::stappler::data::json::Decoder<typename>::buf

## BRIEF

## CONTENT

Тип: StringType


# ::stappler::data::json::Decoder<typename>::stack

## BRIEF

## CONTENT

Тип: typename InterfaceType::template ArrayType<stappler::data::json::Decoder::ValueType *>


# ::stappler::data::json::Decoder<typename>::parseBufferString(stappler::data::json::Decoder::StringType&)

## BRIEF

## CONTENT

Параметры:
* stappler::data::json::Decoder::StringType&


# ::stappler::data::json::Decoder<typename>::parseJsonNumber(stappler::data::json::Decoder::ValueType&)

## BRIEF

## CONTENT

Параметры:
* stappler::data::json::Decoder::ValueType&


# ::stappler::data::json::Decoder<typename>::parseValue(stappler::data::json::Decoder::ValueType&)

## BRIEF

## CONTENT

Параметры:
* stappler::data::json::Decoder::ValueType&


# ::stappler::data::json::Decoder<typename>::parseJson(stappler::data::json::Decoder::ValueType&)

## BRIEF

## CONTENT

Параметры:
* stappler::data::json::Decoder::ValueType&


# ::stappler::data::json::read<typename>(stappler::StringView&,bool)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface

Параметры:
* stappler::StringView&
* bool

Возвращает:
* ValueTemplate<Interface>

# ::stappler::data::json::read<typename>(stappler::StringView const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface

Параметры:
* stappler::StringView const&

Возвращает:
* ValueTemplate<Interface>