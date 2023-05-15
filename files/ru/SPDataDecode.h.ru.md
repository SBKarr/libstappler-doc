Title: SPDataDecode.h


# MODULES_DATA_SPDATADECODE_H_

## BRIEF

## CONTENT


# ::stappler::data::DataFormat

## BRIEF

## CONTENT

Значения:
* Unknown
* Json
* Cbor
* Serenity
* CborBase64
* LZ4_Short
* LZ4_Word
* Brotli_Short
* Brotli_Word


# ::stappler::data::detectDataFormat(uint8_t const*,size_t,uint8_t&)

## BRIEF

## CONTENT

Параметры:
* uint8_t const*
* size_t
* uint8_t&

Возвращает:
* stappler::data::DataFormat

# ::stappler::data::decompress(uint8_t const*,size_t,uint8_t*,size_t)

## BRIEF

## CONTENT

Параметры:
* uint8_t const*
* size_t
* uint8_t*
* size_t

Возвращает:
* size_t

# ::stappler::data::getDecompressedSize(uint8_t const*,size_t)

## BRIEF

## CONTENT

Параметры:
* uint8_t const*
* size_t

Возвращает:
* size_t

# ::stappler::data::decompressLZ4<typename>(uint8_t const*,size_t,bool)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface

Параметры:
* uint8_t const*
* size_t
* bool

Возвращает:
* ValueTemplate<Interface>

# ::stappler::data::decompressBrotli<typename>(uint8_t const*,size_t,bool)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface

Параметры:
* uint8_t const*
* size_t
* bool

Возвращает:
* ValueTemplate<Interface>

# ::stappler::data::decompress<typename>(uint8_t const*,size_t)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface

Параметры:
* uint8_t const*
* size_t

Возвращает:
* typename Interface::BytesType

# ::stappler::data::read<typename,typename>(StringType const&,stappler::StringView const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface
* typename StringType

Параметры:
* StringType const&
* stappler::StringView const&

Возвращает:
* ValueTemplate<Interface>

# ::stappler::data::readFile<typename>(stappler::StringView,stappler::StringView const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface

Параметры:
* stappler::StringView
* stappler::StringView const&

Возвращает:
* ValueTemplate<Interface>