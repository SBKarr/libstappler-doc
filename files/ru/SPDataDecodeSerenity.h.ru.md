Title: SPDataDecodeSerenity.h


# MODULES_DATA_SPDATADECODESERENITY_H_

## BRIEF

## CONTENT


# ::stappler::data::serenity::Decoder<typename>

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface

Базовые классы:
* Interface::AllocBaseType


# ::stappler::data::serenity::Decoder<typename>::InterfaceType

## BRIEF

## CONTENT


# ::stappler::data::serenity::Decoder<typename>::ValueType

## BRIEF

## CONTENT


# ::stappler::data::serenity::Decoder<typename>::StringType

## BRIEF

## CONTENT


# ::stappler::data::serenity::Decoder<typename>::BytesType

## BRIEF

## CONTENT


# ::stappler::data::serenity::Decoder<typename>::BackType

## BRIEF

## CONTENT

Значения:
* BackIsPlain
* BackIsPlainList
* BackIsPlainStop
* BackIsArray
* BackIsDict
* BackIsGeneric


# ::stappler::data::serenity::Decoder<typename>::TokenType

## BRIEF

## CONTENT

Значения:
* Generic


# ::stappler::data::serenity::Decoder<typename>::Decoder(stappler::StringView&)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView&


# ::stappler::data::serenity::Decoder<typename>::parseBufferString(stappler::data::serenity::Decoder::StringType&)

## BRIEF

## CONTENT

Параметры:
* stappler::data::serenity::Decoder::StringType&


# ::stappler::data::serenity::Decoder<typename>::parseNumber(stappler::StringView&,stappler::data::serenity::Decoder::ValueType&)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView&
* stappler::data::serenity::Decoder::ValueType&


# ::stappler::data::serenity::Decoder<typename>::parsePlainToken(stappler::data::serenity::Decoder::ValueType&,stappler::StringView)

## BRIEF

## CONTENT

Параметры:
* stappler::data::serenity::Decoder::ValueType&
* stappler::StringView


# ::stappler::data::serenity::Decoder<typename>::transformToDict(stappler::data::serenity::Decoder::ValueType&)

## BRIEF

## CONTENT

Параметры:
* stappler::data::serenity::Decoder::ValueType&


# ::stappler::data::serenity::Decoder<typename>::parse(stappler::data::serenity::Decoder::ValueType&)

## BRIEF

## CONTENT

Параметры:
* stappler::data::serenity::Decoder::ValueType&


# ::stappler::data::serenity::Decoder<typename>::push(stappler::data::serenity::Decoder::BackType,stappler::data::serenity::Decoder::ValueType*)

## BRIEF

## CONTENT

Параметры:
* stappler::data::serenity::Decoder::BackType
* stappler::data::serenity::Decoder::ValueType*


# ::stappler::data::serenity::Decoder<typename>::pop()

## BRIEF

## CONTENT


# ::stappler::data::serenity::Decoder<typename>::stop

## BRIEF

## CONTENT

Тип: bool


# ::stappler::data::serenity::Decoder<typename>::backType

## BRIEF

## CONTENT

Тип: stappler::data::serenity::Decoder::BackType


# ::stappler::data::serenity::Decoder<typename>::r

## BRIEF

## CONTENT

Тип: stappler::StringView


# ::stappler::data::serenity::Decoder<typename>::back

## BRIEF

## CONTENT

Тип: ValueType*


# ::stappler::data::serenity::Decoder<typename>::stack

## BRIEF

## CONTENT

Тип: typename InterfaceType::template ArrayType<Pair<stappler::data::serenity::Decoder::BackType, stappler::data::serenity::Decoder::ValueType *>>


# ::stappler::data::serenity::Decoder<typename>::parseNumber(stappler::StringView&,stappler::data::serenity::Decoder::ValueType&)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView&
* stappler::data::serenity::Decoder::ValueType&


# ::stappler::data::serenity::Decoder<typename>::parsePlainToken(stappler::data::serenity::Decoder::ValueType&,stappler::StringView)

## BRIEF

## CONTENT

Параметры:
* stappler::data::serenity::Decoder::ValueType&
* stappler::StringView


# ::stappler::data::serenity::Decoder<typename>::transformToDict(stappler::data::serenity::Decoder::ValueType&)

## BRIEF

## CONTENT

Параметры:
* stappler::data::serenity::Decoder::ValueType&


# ::stappler::data::serenity::TokenSpecials

## BRIEF

## CONTENT


# ::stappler::data::serenity::Decoder<typename>::parse(stappler::data::serenity::Decoder::ValueType&)

## BRIEF

## CONTENT

Параметры:
* stappler::data::serenity::Decoder::ValueType&


# ::stappler::data::serenity::read<typename>(stappler::StringView&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface

Параметры:
* stappler::StringView&

Возвращает:
* ValueTemplate<Interface>

# ::stappler::data::serenity::read<typename>(stappler::StringView const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface

Параметры:
* stappler::StringView const&

Возвращает:
* ValueTemplate<Interface>