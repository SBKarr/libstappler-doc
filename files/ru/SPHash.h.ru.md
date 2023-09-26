Title: SPHash.h


# STAPPLER_CORE_STRING_SPHASH_H_

## BRIEF

Заголовок стандартной хэш-функции XXH-2

## CONTENT

Заголовок стандартной хэш-функции XXH-2. Эта хэш-функция используется как стандартная для хэш-таблиц SDK. Функция реализована в вариантах 32 и 64 бита, поддерживается вычисление на этапе компиляции (constexpr)

# ::stappler::hash::xxh32

## BRIEF

Контекст 32-битного хэша

## CONTENT

Контекст 32-битного хэша

# ::stappler::hash::xxh32::hash(char const*,uint32_t,uint32_t)

## BRIEF

Вычисляет 32-битный хэш данных

## CONTENT

Вычисляет 32-битный хэш данных

Доступ: public

Параметры:
* char const* - исходный блок данных
* uint32_t - размер блока данных
* uint32_t - инициализирующее значение

Возвращает:
* uint32_t - значение хэша

# ::stappler::hash::xxh32::PRIME1

## BRIEF

Значение PRIME1

## CONTENT

Доступ: private

Значение PRIME1

Тип: uint32_t const


# ::stappler::hash::xxh32::PRIME2

## BRIEF

Значение PRIME2

## CONTENT

Доступ: private

Значение PRIME2

Тип: uint32_t const


# ::stappler::hash::xxh32::PRIME3

## BRIEF

Значение PRIME3

## CONTENT

Доступ: private

Значение PRIME3

Тип: uint32_t const


# ::stappler::hash::xxh32::PRIME4

## BRIEF

Значение PRIME4

## CONTENT

Доступ: private

Значение PRIME4

Тип: uint32_t const


# ::stappler::hash::xxh32::PRIME5

## BRIEF

Значение PRIME5

## CONTENT

Доступ: private

Значение PRIME5

Тип: uint32_t const


# ::stappler::hash::xxh32::rotl(uint32_t,int)

## BRIEF

Рабочая функция

## CONTENT

Доступ: private

Рабочая функция

Параметры:
* uint32_t
* int

Возвращает:
* uint32_t

# ::stappler::hash::xxh32::round(uint32_t,uint32_t const)

## BRIEF

Рабочая функция

## CONTENT

Доступ: private

Рабочая функция

Параметры:
* uint32_t
* uint32_t const

Возвращает:
* uint32_t

# ::stappler::hash::xxh32::avalanche_step(uint32_t const,int const,uint32_t const)

## BRIEF

Рабочая функция

## CONTENT

Доступ: private

Рабочая функция

Параметры:
* uint32_t const
* int const
* uint32_t const

Возвращает:
* uint32_t

# ::stappler::hash::xxh32::avalanche(uint32_t const)

## BRIEF

Рабочая функция

## CONTENT

Доступ: private

Рабочая функция

Параметры:
* uint32_t const

Возвращает:
* uint32_t

# ::stappler::hash::xxh32::endian32(char const*)

## BRIEF

Рабочая функция

## CONTENT

Доступ: private

Рабочая функция

Параметры:
* char const*

Возвращает:
* uint32_t

# ::stappler::hash::xxh32::fetch32(char const*,uint32_t const)

## BRIEF

Рабочая функция

## CONTENT

Доступ: private

Рабочая функция

Параметры:
* char const*
* uint32_t const

Возвращает:
* uint32_t

# ::stappler::hash::xxh32::finalize(uint32_t,char const*,uint32_t)

## BRIEF

Рабочая функция

## CONTENT

Доступ: private

Рабочая функция

Параметры:
* uint32_t
* char const*
* uint32_t

Возвращает:
* uint32_t

# ::stappler::hash::xxh32::h16bytes(char const*,uint32_t,uint32_t,uint32_t,uint32_t,uint32_t)

## BRIEF

Рабочая функция

## CONTENT

Доступ: private

Рабочая функция

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

Рабочая функция

## CONTENT

Доступ: private

Рабочая функция

Параметры:
* char const*
* uint32_t
* uint32_t const

Возвращает:
* uint32_t

# ::stappler::hash::xxh64

## BRIEF

Контекст 64-битного хэша

## CONTENT

Контекст 64-битного хэша


# ::stappler::hash::xxh64::hash(char const*,uint64_t,uint64_t)

## BRIEF

Вычисляет 64-битный хэш данных

## CONTENT

Вычисляет 64-битный хэш данных

Доступ: public

Параметры:
* char const* - исходный блок данных
* uint64_t - размер блока данных
* uint64_t - инициализирующее значение

Возвращает:
* uint64_t - значение хэша

# ::stappler::hash::xxh64::PRIME1

## BRIEF

Значение PRIME1

## CONTENT

Доступ: private

Значение PRIME1

Тип: uint64_t const


# ::stappler::hash::xxh64::PRIME2

## BRIEF

Значение PRIME2

## CONTENT

Доступ: private

Значение PRIME2

Тип: uint64_t const


# ::stappler::hash::xxh64::PRIME3

## BRIEF

Значение PRIME3

## CONTENT

Доступ: private

Значение PRIME3

Тип: uint64_t const


# ::stappler::hash::xxh64::PRIME4

## BRIEF

Значение PRIME4

## CONTENT

Доступ: private

Значение PRIME4

Тип: uint64_t const


# ::stappler::hash::xxh64::PRIME5

## BRIEF

Значение PRIME5

## CONTENT

Доступ: private

Значение PRIME5

Тип: uint64_t const


# ::stappler::hash::xxh64::rotl(uint64_t,int)

## BRIEF

Рабочая функция

## CONTENT

Доступ: private

Рабочая функция

Параметры:
* uint64_t
* int

Возвращает:
* uint64_t

# ::stappler::hash::xxh64::mix1(uint64_t const,uint64_t const,int)

## BRIEF

Рабочая функция

## CONTENT

Доступ: private

Рабочая функция

Параметры:
* uint64_t const
* uint64_t const
* int

Возвращает:
* uint64_t

# ::stappler::hash::xxh64::mix2(uint64_t const,uint64_t const)

## BRIEF

Рабочая функция

## CONTENT

Доступ: private

Рабочая функция

Параметры:
* uint64_t const
* uint64_t const

Возвращает:
* uint64_t

# ::stappler::hash::xxh64::mix3(uint64_t const,uint64_t const)

## BRIEF

Рабочая функция

## CONTENT

Доступ: private

Рабочая функция

Параметры:
* uint64_t const
* uint64_t const

Возвращает:
* uint64_t

# ::stappler::hash::xxh64::endian32(char const*)

## BRIEF

Рабочая функция

## CONTENT

Доступ: private

Рабочая функция

Параметры:
* char const*

Возвращает:
* uint32_t

# ::stappler::hash::xxh64::endian64(char const*)

## BRIEF

Рабочая функция

## CONTENT

Доступ: private

Рабочая функция

Параметры:
* char const*

Возвращает:
* uint64_t

# ::stappler::hash::xxh64::fetch64(char const*,uint64_t const)

## BRIEF

Рабочая функция

## CONTENT

Доступ: private

Рабочая функция

Параметры:
* char const*
* uint64_t const

Возвращает:
* uint64_t

# ::stappler::hash::xxh64::fetch32(char const*)

## BRIEF

Рабочая функция

## CONTENT

Доступ: private

Рабочая функция

Параметры:
* char const*

Возвращает:
* uint64_t

# ::stappler::hash::xxh64::finalize(uint64_t,char const*,uint64_t)

## BRIEF

Рабочая функция

## CONTENT

Доступ: private

Рабочая функция

Параметры:
* uint64_t
* char const*
* uint64_t

Возвращает:
* uint64_t

# ::stappler::hash::xxh64::h32bytes(char const*,uint64_t,uint64_t,uint64_t,uint64_t,uint64_t)

## BRIEF

Рабочая функция

## CONTENT

Доступ: private

Рабочая функция

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

Рабочая функция

## CONTENT

Доступ: private

Рабочая функция

Параметры:
* char const*
* uint64_t
* uint64_t const

Возвращает:
* uint64_t

# ::stappler::hash::hash32(char const*,uint32_t,uint32_t)

## BRIEF

Вычисляет 32-битный хэш данных

## CONTENT

Вычисляет 32-битный хэш данных

Доступ: public

Параметры:
* char const* - исходный блок данных
* uint32_t - размер блока данных
* uint32_t - инициализирующее значение

# ::stappler::hash::hash64(char const*,size_t,uint64_t)

## BRIEF

Вычисляет 64-битный хэш данных

## CONTENT

Вычисляет 64-битный хэш данных

Доступ: public

Параметры:
* char const* - исходный блок данных
* size_t - размер блока данных
* uint64_t - инициализирующее значение

Возвращает:
* uint64_t - значение хэша

# ::stappler::hash::hashSize(char const*,size_t,uint64_t)

## BRIEF

Вычисляет хэш, соотвествующий размеру size_t платформы

## CONTENT

Вычисляет хэш, соотвествующий размеру size_t платформы

Параметры:
* char const* - исходный блок данных
* size_t - размер блока данных
* uint64_t - инициализирующее значение

Возвращает:
* size_t - значение хэша

# SP_HASH_INLINE

## BRIEF

Макрос атрибута вложенности рабочих функций хэша

## CONTENT

Макрос атрибута вложенности рабочих функций хэша
