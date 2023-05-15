Title: SPDataEncode.h


# MODULES_DATA_SPDATAENCODE_H_

## BRIEF

## CONTENT


# ::stappler::data::EncodeFormat

## BRIEF

## CONTENT


# ::stappler::data::EncodeFormat::EncodeStreamIndex

## BRIEF

## CONTENT

Тип: int


# ::stappler::data::EncodeFormat::Format

## BRIEF

## CONTENT

Значения:
* Json
* Pretty
* Cbor
* DefaultFormat
* Serenity
* SerenityPretty
* PrettyTime


# ::stappler::data::EncodeFormat::Compression

## BRIEF

## CONTENT

Значения:
* NoCompression
* LZ4Compression
* LZ4HCCompression
* Brotli
* DefaultCompress


# ::stappler::data::EncodeFormat::Encryption

## BRIEF

## CONTENT

Значения:
* Unencrypted
* Encrypted


# ::stappler::data::EncodeFormat::CborCompressed

## BRIEF

## CONTENT

Тип: stappler::data::EncodeFormat


# ::stappler::data::EncodeFormat::JsonCompressed

## BRIEF

## CONTENT

Тип: stappler::data::EncodeFormat


# ::stappler::data::EncodeFormat::EncodeFormat(stappler::data::EncodeFormat::Format,stappler::data::EncodeFormat::Compression,stappler::data::EncodeFormat::Encryption,stappler::StringView)

## BRIEF

## CONTENT

Параметры:
* stappler::data::EncodeFormat::Format
* stappler::data::EncodeFormat::Compression
* stappler::data::EncodeFormat::Encryption
* stappler::StringView


# ::stappler::data::EncodeFormat::EncodeFormat(long)

## BRIEF

## CONTENT

Параметры:
* long


# ::stappler::data::EncodeFormat::EncodeFormat(stappler::data::EncodeFormat const&)

## BRIEF

## CONTENT

Параметры:
* stappler::data::EncodeFormat const&


# ::stappler::data::EncodeFormat::operator=(stappler::data::EncodeFormat const&)

## BRIEF

## CONTENT

Параметры:
* stappler::data::EncodeFormat const&

Возвращает:
* stappler::data::EncodeFormat&

# ::stappler::data::EncodeFormat::isRaw() const

## BRIEF

## CONTENT

Возвращает:
* bool

# ::stappler::data::EncodeFormat::isTextual() const

## BRIEF

## CONTENT

Возвращает:
* bool

# ::stappler::data::EncodeFormat::flag() const

## BRIEF

## CONTENT

Возвращает:
* int

# ::stappler::data::EncodeFormat::format

## BRIEF

## CONTENT

Тип: stappler::data::EncodeFormat::Format


# ::stappler::data::EncodeFormat::compression

## BRIEF

## CONTENT

Тип: stappler::data::EncodeFormat::Compression


# ::stappler::data::EncodeFormat::encryption

## BRIEF

## CONTENT

Тип: stappler::data::EncodeFormat::Encryption


# ::stappler::data::getLZ4EncodeState()

## BRIEF

## CONTENT

Возвращает:
* uint8_t*

# ::stappler::data::compressData(uint8_t const*,size_t,uint8_t*,size_t,EncodeFormat::Compression)

## BRIEF

## CONTENT

Параметры:
* uint8_t const*
* size_t
* uint8_t*
* size_t
* EncodeFormat::Compression

Возвращает:
* size_t

# ::stappler::data::writeCompressionMark(uint8_t*,size_t,EncodeFormat::Compression)

## BRIEF

## CONTENT

Параметры:
* uint8_t*
* size_t
* EncodeFormat::Compression


# ::stappler::data::compress<typename>(uint8_t const*,size_t,EncodeFormat::Compression,bool)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface

Параметры:
* uint8_t const*
* size_t
* EncodeFormat::Compression
* bool

Возвращает:
* typename Interface::BytesType

# ::stappler::data::getCompressBounds(size_t,EncodeFormat::Compression)

## BRIEF

## CONTENT

Параметры:
* size_t
* EncodeFormat::Compression

Возвращает:
* size_t

# ::stappler::data::EncodeTraits<typename>

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface


# ::stappler::data::EncodeTraits<typename>::InterfaceType

## BRIEF

## CONTENT


# ::stappler::data::EncodeTraits<typename>::ValueType

## BRIEF

## CONTENT


# ::stappler::data::EncodeTraits<typename>::BytesType

## BRIEF

## CONTENT


# ::stappler::data::EncodeTraits<typename>::StringType

## BRIEF

## CONTENT


# ::stappler::data::EncodeTraits<typename>::write(stappler::data::EncodeTraits::ValueType const&,stappler::data::EncodeFormat)

## BRIEF

## CONTENT

Параметры:
* stappler::data::EncodeTraits::ValueType const&
* stappler::data::EncodeFormat

Возвращает:
* BytesType

# ::stappler::data::EncodeTraits<typename>::write(std::ostream&,stappler::data::EncodeTraits::ValueType const&,stappler::data::EncodeFormat)

## BRIEF

## CONTENT

Параметры:
* std::ostream&
* stappler::data::EncodeTraits::ValueType const&
* stappler::data::EncodeFormat

Возвращает:
* bool

# ::stappler::data::EncodeTraits<typename>::save(stappler::data::EncodeTraits::ValueType const&,stappler::StringView const&,stappler::data::EncodeFormat)

## BRIEF

## CONTENT

Параметры:
* stappler::data::EncodeTraits::ValueType const&
* stappler::StringView const&
* stappler::data::EncodeFormat

Возвращает:
* bool

# ::stappler::data::write<typename>(ValueTemplate<Interface> const&,stappler::data::EncodeFormat)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface

Параметры:
* ValueTemplate<Interface> const&
* stappler::data::EncodeFormat

Возвращает:
* typename ValueTemplate<Interface>::BytesType

# ::stappler::data::write<typename>(std::ostream&,ValueTemplate<Interface> const&,stappler::data::EncodeFormat)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface

Параметры:
* std::ostream&
* ValueTemplate<Interface> const&
* stappler::data::EncodeFormat

Возвращает:
* bool

# ::stappler::data::save<typename>(ValueTemplate<Interface> const&,stappler::StringView const&,stappler::data::EncodeFormat)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface

Параметры:
* ValueTemplate<Interface> const&
* stappler::StringView const&
* stappler::data::EncodeFormat

Возвращает:
* bool

# ::stappler::data::toString<typename>(ValueTemplate<Interface> const&,bool)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface

Параметры:
* ValueTemplate<Interface> const&
* bool

Возвращает:
* typename ValueTemplate<Interface>::StringType

# ::stappler::data::toString<typename>(ValueTemplate<Interface> const&,EncodeFormat::Format)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface

Параметры:
* ValueTemplate<Interface> const&
* EncodeFormat::Format

Возвращает:
* typename ValueTemplate<Interface>::StringType

# ::stappler::data::operator<<<typename,typename>(std::basic_ostream<CharT, Traits>&,stappler::data::EncodeFormat)

## BRIEF

## CONTENT

Параметры шаблона:
* typename CharT
* typename Traits

Параметры:
* std::basic_ostream<CharT, Traits>&
* stappler::data::EncodeFormat

Возвращает:
* std::basic_ostream<CharT, Traits>&

# ::stappler::data::operator<<<typename,typename>(std::basic_ostream<CharT, Traits>&,EncodeFormat::Format)

## BRIEF

## CONTENT

Параметры шаблона:
* typename CharT
* typename Traits

Параметры:
* std::basic_ostream<CharT, Traits>&
* EncodeFormat::Format

Возвращает:
* std::basic_ostream<CharT, Traits>&

# ::stappler::data::operator<<<typename,typename,typename>(std::basic_ostream<CharT, Traits>&,ValueTemplate<Interface> const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename CharT
* typename Traits
* typename Interface

Параметры:
* std::basic_ostream<CharT, Traits>&
* ValueTemplate<Interface> const&

Возвращает:
* std::basic_ostream<CharT, Traits>&