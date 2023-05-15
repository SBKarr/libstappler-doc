Title: SPValid.h


# LIBSTAPPLER_COMMON_UTILS_SPVALID_H_

## BRIEF

## CONTENT


# ::stappler::valid::validateIdentifier(stappler::StringView)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView

Возвращает:
* bool

# ::stappler::valid::validateText(stappler::StringView)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView

Возвращает:
* bool

# ::stappler::valid::validateEmailWithoutNormalization(stappler::StringView)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView

Возвращает:
* bool

# ::stappler::valid::validateEmail(memory::PoolInterface::StringType&)

## BRIEF

## CONTENT

Параметры:
* memory::PoolInterface::StringType&

Возвращает:
* bool

# ::stappler::valid::validateEmail(memory::StandartInterface::StringType&)

## BRIEF

## CONTENT

Параметры:
* memory::StandartInterface::StringType&

Возвращает:
* bool

# ::stappler::valid::validateUrl(memory::PoolInterface::StringType&)

## BRIEF

## CONTENT

Параметры:
* memory::PoolInterface::StringType&

Возвращает:
* bool

# ::stappler::valid::validateUrl(memory::StandartInterface::StringType&)

## BRIEF

## CONTENT

Параметры:
* memory::StandartInterface::StringType&

Возвращает:
* bool

# ::stappler::valid::validateNumber(stappler::StringView const&)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView const&

Возвращает:
* bool

# ::stappler::valid::validateHexadecimial(stappler::StringView const&)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView const&

Возвращает:
* bool

# ::stappler::valid::validateBase64(stappler::StringView const&)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView const&

Возвращает:
* bool

# ::stappler::valid::makeRandomBytes(uint8_t*,size_t)

## BRIEF

## CONTENT

Параметры:
* uint8_t*
* size_t


# ::stappler::valid::makeRandomBytes<typename>(size_t)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface

Параметры:
* size_t

Возвращает:
* typename Interface::BytesType

# ::stappler::valid::makePassword<typename>(stappler::StringView const&,stappler::StringView const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface

Параметры:
* stappler::StringView const&
* stappler::StringView const&

Возвращает:
* typename Interface::BytesType

# ::stappler::valid::validatePassord(stappler::StringView const&,stappler::BytesView const&,stappler::StringView const&)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView const&
* stappler::BytesView const&
* stappler::StringView const&

Возвращает:
* bool

# ::stappler::valid::generatePassword<typename>(size_t)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface

Параметры:
* size_t

Возвращает:
* typename Interface::StringType

# ::stappler::valid::readIp(stappler::StringView)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView

Возвращает:
* uint32_t

# ::stappler::valid::readIp(stappler::StringView,bool&)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView
* bool&

Возвращает:
* uint32_t

# ::stappler::valid::readIpRange(stappler::StringView)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView

Возвращает:
* Pair<uint32_t, uint32_t>