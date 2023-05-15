Title: SPMemUuid.h


# LIBSTAPPLER_COMMON_MEMORY_SPMEMUUID_H_

## BRIEF

## CONTENT


# ::stappler::memory::uuid

## BRIEF

## CONTENT

Базовые классы:
* AllocPool


# ::stappler::memory::uuid::FormattedLength

## BRIEF

## CONTENT

Тип: size_t const


# ::stappler::memory::uuid::uuid_t

## BRIEF

## CONTENT


# ::stappler::memory::uuid::parse(stappler::memory::uuid::uuid_t&,char const*)

## BRIEF

## CONTENT

Параметры:
* stappler::memory::uuid::uuid_t&
* char const*

Возвращает:
* bool

# ::stappler::memory::uuid::format(char*,stappler::memory::uuid::uuid_t const&)

## BRIEF

## CONTENT

Параметры:
* char*
* stappler::memory::uuid::uuid_t const&


# ::stappler::memory::uuid::generate()

## BRIEF

## CONTENT

Возвращает:
* stappler::memory::uuid

# ::stappler::memory::uuid::uuid()

## BRIEF

## CONTENT


# ::stappler::memory::uuid::uuid(stappler::StringView)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView


# ::stappler::memory::uuid::uuid(stappler::BytesView)

## BRIEF

## CONTENT

Параметры:
* stappler::BytesView


# ::stappler::memory::uuid::uuid(stappler::memory::uuid::uuid_t const&)

## BRIEF

## CONTENT

Параметры:
* stappler::memory::uuid::uuid_t const&


# ::stappler::memory::uuid::uuid(stappler::memory::uuid const&)

## BRIEF

## CONTENT

Параметры:
* stappler::memory::uuid const&


# ::stappler::memory::uuid::operator=(stappler::memory::uuid const&)

## BRIEF

## CONTENT

Параметры:
* stappler::memory::uuid const&

Возвращает:
* stappler::memory::uuid&

# ::stappler::memory::uuid::operator=(memory::string const&)

## BRIEF

## CONTENT

Параметры:
* memory::string const&

Возвращает:
* stappler::memory::uuid&

# ::stappler::memory::uuid::operator=(std::string const&)

## BRIEF

## CONTENT

Параметры:
* std::string const&

Возвращает:
* stappler::memory::uuid&

# ::stappler::memory::uuid::operator=(memory::vector<uint8_t> const&)

## BRIEF

## CONTENT

Параметры:
* memory::vector<uint8_t> const&

Возвращает:
* stappler::memory::uuid&

# ::stappler::memory::uuid::operator=(std::vector<uint8_t> const&)

## BRIEF

## CONTENT

Параметры:
* std::vector<uint8_t> const&

Возвращает:
* stappler::memory::uuid&

# ::stappler::memory::uuid::str<typename>() const

## BRIEF

## CONTENT

Параметры шаблона:
* typename Str

Возвращает:
* Str

# ::stappler::memory::uuid::bytes<typename>() const

## BRIEF

## CONTENT

Параметры шаблона:
* typename B

Возвращает:
* B

# ::stappler::memory::uuid::array() const

## BRIEF

## CONTENT

Возвращает:
* uuid_t

# ::stappler::memory::uuid::data() const

## BRIEF

## CONTENT

Возвращает:
* uint8_t const*

# ::stappler::memory::uuid::size() const

## BRIEF

## CONTENT

Возвращает:
* size_t

# ::stappler::memory::uuid::_uuid

## BRIEF

## CONTENT

Тип: uuid_t
