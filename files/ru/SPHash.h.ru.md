Title: SPHash.h


# LIBSTAPPLER_COMMON_STRING_SPHASH_H_

## BRIEF

## CONTENT


# ::stappler::hash::xxh32

## BRIEF

## CONTENT


# ::stappler::hash::xxh32::hash(char const*,uint32_t,uint32_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* char const*
* uint32_t
* uint32_t

Возвращает:
* uint32_t

# ::stappler::hash::xxh32::PRIME1

## BRIEF

## CONTENT

Доступ: private

Тип: uint32_t const


# ::stappler::hash::xxh32::PRIME2

## BRIEF

## CONTENT

Доступ: private

Тип: uint32_t const


# ::stappler::hash::xxh32::PRIME3

## BRIEF

## CONTENT

Доступ: private

Тип: uint32_t const


# ::stappler::hash::xxh32::PRIME4

## BRIEF

## CONTENT

Доступ: private

Тип: uint32_t const


# ::stappler::hash::xxh32::PRIME5

## BRIEF

## CONTENT

Доступ: private

Тип: uint32_t const


# ::stappler::hash::xxh32::rotl(uint32_t,int)

## BRIEF

## CONTENT

Доступ: private

Параметры:
* uint32_t
* int

Возвращает:
* uint32_t

# ::stappler::hash::xxh32::round(uint32_t,uint32_t const)

## BRIEF

## CONTENT

Доступ: private

Параметры:
* uint32_t
* uint32_t const

Возвращает:
* uint32_t

# ::stappler::hash::xxh32::avalanche_step(uint32_t const,int const,uint32_t const)

## BRIEF

## CONTENT

Доступ: private

Параметры:
* uint32_t const
* int const
* uint32_t const

Возвращает:
* uint32_t

# ::stappler::hash::xxh32::avalanche(uint32_t const)

## BRIEF

## CONTENT

Доступ: private

Параметры:
* uint32_t const

Возвращает:
* uint32_t

# ::stappler::hash::xxh32::endian32(char const*)

## BRIEF

## CONTENT

Доступ: private

Параметры:
* char const*

Возвращает:
* uint32_t

# ::stappler::hash::xxh32::fetch32(char const*,uint32_t const)

## BRIEF

## CONTENT

Доступ: private

Параметры:
* char const*
* uint32_t const

Возвращает:
* uint32_t

# ::stappler::hash::xxh32::finalize(uint32_t,char const*,uint32_t)

## BRIEF

## CONTENT

Доступ: private

Параметры:
* uint32_t
* char const*
* uint32_t

Возвращает:
* uint32_t

# ::stappler::hash::xxh32::h16bytes(char const*,uint32_t,uint32_t,uint32_t,uint32_t,uint32_t)

## BRIEF

## CONTENT

Доступ: private

Параметры:
* char const*
* uint32_t
* uint32_t
* uint32_t
* uint32_t
* uint32_t

Возвращает:
* uint32_t

# ::stappler::hash::xxh32::h16bytes(char const*,uint32_t,uint32_t const)

## BRIEF

## CONTENT

Доступ: private

Параметры:
* char const*
* uint32_t
* uint32_t const

Возвращает:
* uint32_t

# ::stappler::hash::xxh64

## BRIEF

## CONTENT


# ::stappler::hash::xxh64::hash(char const*,uint64_t,uint64_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* char const*
* uint64_t
* uint64_t

Возвращает:
* uint64_t

# ::stappler::hash::xxh64::PRIME1

## BRIEF

## CONTENT

Доступ: private

Тип: uint64_t const


# ::stappler::hash::xxh64::PRIME2

## BRIEF

## CONTENT

Доступ: private

Тип: uint64_t const


# ::stappler::hash::xxh64::PRIME3

## BRIEF

## CONTENT

Доступ: private

Тип: uint64_t const


# ::stappler::hash::xxh64::PRIME4

## BRIEF

## CONTENT

Доступ: private

Тип: uint64_t const


# ::stappler::hash::xxh64::PRIME5

## BRIEF

## CONTENT

Доступ: private

Тип: uint64_t const


# ::stappler::hash::xxh64::rotl(uint64_t,int)

## BRIEF

## CONTENT

Доступ: private

Параметры:
* uint64_t
* int

Возвращает:
* uint64_t

# ::stappler::hash::xxh64::mix1(uint64_t const,uint64_t const,int)

## BRIEF

## CONTENT

Доступ: private

Параметры:
* uint64_t const
* uint64_t const
* int

Возвращает:
* uint64_t

# ::stappler::hash::xxh64::mix2(uint64_t const,uint64_t const)

## BRIEF

## CONTENT

Доступ: private

Параметры:
* uint64_t const
* uint64_t const

Возвращает:
* uint64_t

# ::stappler::hash::xxh64::mix3(uint64_t const,uint64_t const)

## BRIEF

## CONTENT

Доступ: private

Параметры:
* uint64_t const
* uint64_t const

Возвращает:
* uint64_t

# ::stappler::hash::xxh64::endian32(char const*)

## BRIEF

## CONTENT

Доступ: private

Параметры:
* char const*

Возвращает:
* uint32_t

# ::stappler::hash::xxh64::endian64(char const*)

## BRIEF

## CONTENT

Доступ: private

Параметры:
* char const*

Возвращает:
* uint64_t

# ::stappler::hash::xxh64::fetch64(char const*,uint64_t const)

## BRIEF

## CONTENT

Доступ: private

Параметры:
* char const*
* uint64_t const

Возвращает:
* uint64_t

# ::stappler::hash::xxh64::fetch32(char const*)

## BRIEF

## CONTENT

Доступ: private

Параметры:
* char const*

Возвращает:
* uint64_t

# ::stappler::hash::xxh64::finalize(uint64_t,char const*,uint64_t)

## BRIEF

## CONTENT

Доступ: private

Параметры:
* uint64_t
* char const*
* uint64_t

Возвращает:
* uint64_t

# ::stappler::hash::xxh64::h32bytes(char const*,uint64_t,uint64_t,uint64_t,uint64_t,uint64_t)

## BRIEF

## CONTENT

Доступ: private

Параметры:
* char const*
* uint64_t
* uint64_t
* uint64_t
* uint64_t
* uint64_t

Возвращает:
* uint64_t

# ::stappler::hash::xxh64::h32bytes(char const*,uint64_t,uint64_t const)

## BRIEF

## CONTENT

Доступ: private

Параметры:
* char const*
* uint64_t
* uint64_t const

Возвращает:
* uint64_t

# ::stappler::hash::hash32(char const*,uint32_t,uint32_t)

## BRIEF

## CONTENT

Параметры:
* char const*
* uint32_t
* uint32_t

Возвращает:
* uint32_t

# ::stappler::hash::hash64(char const*,size_t,uint64_t)

## BRIEF

## CONTENT

Параметры:
* char const*
* size_t
* uint64_t

Возвращает:
* uint64_t

# ::stappler::hash::hashSize(char const*,size_t,uint64_t)

## BRIEF

## CONTENT

Параметры:
* char const*
* size_t
* uint64_t

Возвращает:
* size_t

# SP_HASH_INLINE

## BRIEF

## CONTENT
