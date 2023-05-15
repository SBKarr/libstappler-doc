Title: SPDataDecodeCbor.h


# MODULES_DATA_SPDATADECODECBOR_H_

## BRIEF

## CONTENT


# ::stappler::data::cbor::Decoder<typename>

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface

Базовые классы:
* Interface::AllocBaseType


# ::stappler::data::cbor::Decoder<typename>::InterfaceType

## BRIEF

## CONTENT


# ::stappler::data::cbor::Decoder<typename>::ValueType

## BRIEF

## CONTENT


# ::stappler::data::cbor::Decoder<typename>::StringType

## BRIEF

## CONTENT


# ::stappler::data::cbor::Decoder<typename>::BytesType

## BRIEF

## CONTENT


# ::stappler::data::cbor::Decoder<typename>::ArrayType

## BRIEF

## CONTENT


# ::stappler::data::cbor::Decoder<typename>::DictionaryType

## BRIEF

## CONTENT


# ::stappler::data::cbor::Decoder<typename>::Decoder(BytesViewTemplate<Endian::Network>&)

## BRIEF

## CONTENT

Параметры:
* BytesViewTemplate<Endian::Network>&


# ::stappler::data::cbor::Decoder<typename>::decodePositiveInt(uint8_t,stappler::data::cbor::Decoder::ValueType&)

## BRIEF

## CONTENT

Параметры:
* uint8_t
* stappler::data::cbor::Decoder::ValueType&


# ::stappler::data::cbor::Decoder<typename>::decodeNegativeInt(uint8_t,stappler::data::cbor::Decoder::ValueType&)

## BRIEF

## CONTENT

Параметры:
* uint8_t
* stappler::data::cbor::Decoder::ValueType&


# ::stappler::data::cbor::Decoder<typename>::decodeByteString(uint8_t,stappler::data::cbor::Decoder::ValueType&)

## BRIEF

## CONTENT

Параметры:
* uint8_t
* stappler::data::cbor::Decoder::ValueType&


# ::stappler::data::cbor::Decoder<typename>::decodeCharString(uint8_t,stappler::data::cbor::Decoder::ValueType&)

## BRIEF

## CONTENT

Параметры:
* uint8_t
* stappler::data::cbor::Decoder::ValueType&


# ::stappler::data::cbor::Decoder<typename>::decodeArray(uint8_t,stappler::data::cbor::Decoder::ValueType&)

## BRIEF

## CONTENT

Параметры:
* uint8_t
* stappler::data::cbor::Decoder::ValueType&


# ::stappler::data::cbor::Decoder<typename>::decodeMap(uint8_t,stappler::data::cbor::Decoder::ValueType&)

## BRIEF

## CONTENT

Параметры:
* uint8_t
* stappler::data::cbor::Decoder::ValueType&


# ::stappler::data::cbor::Decoder<typename>::decodeTaggedValue(uint8_t,stappler::data::cbor::Decoder::ValueType&)

## BRIEF

## CONTENT

Параметры:
* uint8_t
* stappler::data::cbor::Decoder::ValueType&


# ::stappler::data::cbor::Decoder<typename>::decodeSimpleValue(uint8_t,stappler::data::cbor::Decoder::ValueType&)

## BRIEF

## CONTENT

Параметры:
* uint8_t
* stappler::data::cbor::Decoder::ValueType&


# ::stappler::data::cbor::Decoder<typename>::decode(stappler::data::cbor::MajorTypeEncoded,uint8_t,stappler::data::cbor::Decoder::ValueType&)

## BRIEF

## CONTENT

Параметры:
* stappler::data::cbor::MajorTypeEncoded
* uint8_t
* stappler::data::cbor::Decoder::ValueType&


# ::stappler::data::cbor::Decoder<typename>::decode(stappler::data::cbor::Decoder::ValueType&)

## BRIEF

## CONTENT

Параметры:
* stappler::data::cbor::Decoder::ValueType&


# ::stappler::data::cbor::Decoder<typename>::decodeUndefinedLength<typename>(Container&,stappler::data::cbor::MajorTypeEncoded)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Container

Параметры:
* Container&
* stappler::data::cbor::MajorTypeEncoded


# ::stappler::data::cbor::Decoder<typename>::parseNumber(stappler::data::cbor::Decoder::ValueType&)

## BRIEF

## CONTENT

Параметры:
* stappler::data::cbor::Decoder::ValueType&


# ::stappler::data::cbor::Decoder<typename>::parseValue(stappler::data::cbor::Decoder::ValueType&)

## BRIEF

## CONTENT

Параметры:
* stappler::data::cbor::Decoder::ValueType&


# ::stappler::data::cbor::Decoder<typename>::parse(stappler::data::cbor::Decoder::ValueType&)

## BRIEF

## CONTENT

Параметры:
* stappler::data::cbor::Decoder::ValueType&


# ::stappler::data::cbor::Decoder<typename>::r

## BRIEF

## CONTENT

Тип: BytesViewTemplate<Endian::Network>


# ::stappler::data::cbor::Decoder<typename>::buf

## BRIEF

## CONTENT

Тип: StringType


# ::stappler::data::cbor::Decoder<typename>::back

## BRIEF

## CONTENT

Тип: ValueType*


# ::stappler::data::cbor::Decoder<typename>::stack

## BRIEF

## CONTENT

Тип: typename InterfaceType::template ArrayType<stappler::data::cbor::Decoder::ValueType *>


# ::stappler::data::cbor::Decoder<typename>::decodeUndefinedLength<typename,typename>(Container&,stappler::data::cbor::MajorTypeEncoded)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Container
* typename Interface

Параметры:
* Container&
* stappler::data::cbor::MajorTypeEncoded


# ::stappler::data::cbor::Decoder<typename>::decodeByteString(uint8_t,stappler::data::cbor::Decoder::ValueType&)

## BRIEF

## CONTENT

Параметры:
* uint8_t
* stappler::data::cbor::Decoder::ValueType&


# ::stappler::data::cbor::Decoder<typename>::decodeCharString(uint8_t,stappler::data::cbor::Decoder::ValueType&)

## BRIEF

## CONTENT

Параметры:
* uint8_t
* stappler::data::cbor::Decoder::ValueType&


# ::stappler::data::cbor::Decoder<typename>::decodeArray(uint8_t,stappler::data::cbor::Decoder::ValueType&)

## BRIEF

## CONTENT

Параметры:
* uint8_t
* stappler::data::cbor::Decoder::ValueType&


# ::stappler::data::cbor::Decoder<typename>::decodeMap(uint8_t,stappler::data::cbor::Decoder::ValueType&)

## BRIEF

## CONTENT

Параметры:
* uint8_t
* stappler::data::cbor::Decoder::ValueType&


# ::stappler::data::cbor::Decoder<typename>::decodeTaggedValue(uint8_t,stappler::data::cbor::Decoder::ValueType&)

## BRIEF

## CONTENT

Параметры:
* uint8_t
* stappler::data::cbor::Decoder::ValueType&


# ::stappler::data::cbor::Decoder<typename>::decodeSimpleValue(uint8_t,stappler::data::cbor::Decoder::ValueType&)

## BRIEF

## CONTENT

Параметры:
* uint8_t
* stappler::data::cbor::Decoder::ValueType&


# ::stappler::data::cbor::Decoder<typename>::decode(stappler::data::cbor::MajorTypeEncoded,uint8_t,stappler::data::cbor::Decoder::ValueType&)

## BRIEF

## CONTENT

Параметры:
* stappler::data::cbor::MajorTypeEncoded
* uint8_t
* stappler::data::cbor::Decoder::ValueType&


# ::stappler::data::cbor::Decoder<typename>::decode(stappler::data::cbor::Decoder::ValueType&)

## BRIEF

## CONTENT

Параметры:
* stappler::data::cbor::Decoder::ValueType&


# ::stappler::data::cbor::read<typename>(BytesViewTemplate<Endian::Network>&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface

Параметры:
* BytesViewTemplate<Endian::Network>&

Возвращает:
* ValueTemplate<Interface>

# ::stappler::data::cbor::read<typename>(BytesViewTemplate<Endian::Little>&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface

Параметры:
* BytesViewTemplate<Endian::Little>&

Возвращает:
* ValueTemplate<Interface>

# ::stappler::data::cbor::read<typename,typename>(Container const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface
* typename Container

Параметры:
* Container const&

Возвращает:
* ValueTemplate<Interface>