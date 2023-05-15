Title: SPDataCbor.h


# MODULES_DATA_SPDATACBOR_H_

## BRIEF

## CONTENT


# ::stappler::data::cbor::MajorType

## BRIEF

## CONTENT

Значения:
* Unsigned
* Negative
* ByteString
* CharString
* Array
* Map
* Tag
* Simple


# ::stappler::data::cbor::SimpleValue

## BRIEF

## CONTENT

Значения:
* False
* True
* Null
* Undefined


# ::stappler::data::cbor::Flags

## BRIEF

## CONTENT

Значения:
* Null
* Interrupt
* MajorTypeShift
* MajorTypeMask
* MajorTypeMaskEncoded
* AdditionalInfoMask
* MaxAdditionalNumber
* AdditionalNumber8Bit
* AdditionalNumber16Bit
* AdditionalNumber32Bit
* AdditionalNumber64Bit
* Simple8Bit
* AdditionalFloat16Bit
* AdditionalFloat32Bit
* AdditionalFloat64Bit
* Unassigned1
* Unassigned2
* Unassigned3
* UndefinedLength


# ::stappler::data::cbor::MajorTypeEncoded

## BRIEF

## CONTENT

Значения:
* Unsigned
* Negative
* ByteString
* CharString
* Array
* Map
* Tag
* Simple


# ::stappler::data::cbor::Tag

## BRIEF

## CONTENT

Значения:
* DateTime
* EpochTime
* PositiveBignum
* NegativeBignum
* DecimalFraction
* BigFloat
* ExpectedBase64Url
* ExpectedBase64
* ExpectedBase16
* EmbeddedCbor
* StringReference
* SerializedPerl
* SerializedObject
* SharedValue
* ValueReference
* RationalNumber
* HintHintUri
* HintBase64Url
* HintBase64
* HintRegularExpression
* HintMimeMessage
* BinaryUuid
* LanguageTaggedString
* Identifier
* StringMark
* BinaryMimeMessage
* DecimalFractionFixed
* BigFloatFixed
* HintIndirection
* CborMagick


# ::stappler::data::cbor::operator<<(stappler::data::cbor::MajorType,stappler::data::cbor::Flags)

## BRIEF

## CONTENT

Параметры:
* stappler::data::cbor::MajorType
* stappler::data::cbor::Flags

Возвращает:
* stappler::data::cbor::MajorTypeEncoded

# ::stappler::data::cbor::operator==(uint8_t,stappler::data::cbor::MajorTypeEncoded)

## BRIEF

## CONTENT

Параметры:
* uint8_t
* stappler::data::cbor::MajorTypeEncoded

Возвращает:
* bool

# ::stappler::data::cbor::operator==(uint8_t,stappler::data::cbor::MajorType)

## BRIEF

## CONTENT

Параметры:
* uint8_t
* stappler::data::cbor::MajorType

Возвращает:
* bool

# ::stappler::data::cbor::operator==(uint8_t,stappler::data::cbor::Flags)

## BRIEF

## CONTENT

Параметры:
* uint8_t
* stappler::data::cbor::Flags

Возвращает:
* bool

# ::stappler::data::cbor::type(uint8_t)

## BRIEF

## CONTENT

Параметры:
* uint8_t

Возвращает:
* stappler::data::cbor::MajorType

# ::stappler::data::cbor::data(uint8_t)

## BRIEF

## CONTENT

Параметры:
* uint8_t

Возвращает:
* uint8_t

# ::stappler::data::cbor::flags(uint8_t)

## BRIEF

## CONTENT

Параметры:
* uint8_t

Возвращает:
* stappler::data::cbor::Flags

# ::stappler::data::cbor::_writeId<class>(Writer&)

## BRIEF

## CONTENT

Параметры шаблона:
* class Writer

Параметры:
* Writer&


# ::stappler::data::cbor::_writeNumeric<class,class>(Writer&,T,stappler::data::cbor::MajorTypeEncoded,stappler::data::cbor::Flags)

## BRIEF

## CONTENT

Параметры шаблона:
* class Writer
* class T

Параметры:
* Writer&
* T
* stappler::data::cbor::MajorTypeEncoded
* stappler::data::cbor::Flags


# ::stappler::data::cbor::_writeInt<class>(Writer&,uint64_t,stappler::data::cbor::MajorTypeEncoded)

## BRIEF

## CONTENT

Параметры шаблона:
* class Writer

Параметры:
* Writer&
* uint64_t
* stappler::data::cbor::MajorTypeEncoded


# ::stappler::data::cbor::_writeFloatNaN<class>(Writer&)

## BRIEF

## CONTENT

Параметры шаблона:
* class Writer

Параметры:
* Writer&


# ::stappler::data::cbor::_writeFloatPositiveInf<class>(Writer&)

## BRIEF

## CONTENT

Параметры шаблона:
* class Writer

Параметры:
* Writer&


# ::stappler::data::cbor::_writeFloatNegativeInf<class>(Writer&)

## BRIEF

## CONTENT

Параметры шаблона:
* class Writer

Параметры:
* Writer&


# ::stappler::data::cbor::_writeFloat16<class>(Writer&,uint16_t)

## BRIEF

## CONTENT

Параметры шаблона:
* class Writer

Параметры:
* Writer&
* uint16_t


# ::stappler::data::cbor::_writeFloat32<class>(Writer&,float)

## BRIEF

## CONTENT

Параметры шаблона:
* class Writer

Параметры:
* Writer&
* float


# ::stappler::data::cbor::_writeFloat64<class>(Writer&,double)

## BRIEF

## CONTENT

Параметры шаблона:
* class Writer

Параметры:
* Writer&
* double


# ::stappler::data::cbor::_writeArrayStart<class>(Writer&,size_t)

## BRIEF

## CONTENT

Параметры шаблона:
* class Writer

Параметры:
* Writer&
* size_t


# ::stappler::data::cbor::_writeMapStart<class>(Writer&,size_t)

## BRIEF

## CONTENT

Параметры шаблона:
* class Writer

Параметры:
* Writer&
* size_t


# ::stappler::data::cbor::_writeNull<class>(Writer&,stappler::nullptr_t)

## BRIEF

## CONTENT

Параметры шаблона:
* class Writer

Параметры:
* Writer&
* stappler::nullptr_t


# ::stappler::data::cbor::_writeBool<class>(Writer&,bool)

## BRIEF

## CONTENT

Параметры шаблона:
* class Writer

Параметры:
* Writer&
* bool


# ::stappler::data::cbor::_writeInt<class>(Writer&,int64_t)

## BRIEF

## CONTENT

Параметры шаблона:
* class Writer

Параметры:
* Writer&
* int64_t


# ::stappler::data::cbor::_writeFloat<class>(Writer&,double)

## BRIEF

## CONTENT

Параметры шаблона:
* class Writer

Параметры:
* Writer&
* double


# ::stappler::data::cbor::_writeString<class>(Writer&,stappler::StringView const&)

## BRIEF

## CONTENT

Параметры шаблона:
* class Writer

Параметры:
* Writer&
* stappler::StringView const&


# ::stappler::data::cbor::_writeBytes<class>(Writer&,BytesViewTemplate<Endian::Network> const&)

## BRIEF

## CONTENT

Параметры шаблона:
* class Writer

Параметры:
* Writer&
* BytesViewTemplate<Endian::Network> const&


# ::stappler::data::cbor::_writeNumber<class>(Writer&,float)

## BRIEF

## CONTENT

Параметры шаблона:
* class Writer

Параметры:
* Writer&
* float


# ::stappler::data::cbor::_readIntValue(BytesViewTemplate<Endian::Network>&,uint8_t)

## BRIEF

## CONTENT

Параметры:
* BytesViewTemplate<Endian::Network>&
* uint8_t

Возвращает:
* uint64_t

# ::stappler::data::cbor::_readInt(BytesViewTemplate<Endian::Network>&)

## BRIEF

## CONTENT

Параметры:
* BytesViewTemplate<Endian::Network>&

Возвращает:
* int64_t

# ::stappler::data::cbor::_readNumber(BytesViewTemplate<Endian::Network>&)

## BRIEF

## CONTENT

Параметры:
* BytesViewTemplate<Endian::Network>&

Возвращает:
* float