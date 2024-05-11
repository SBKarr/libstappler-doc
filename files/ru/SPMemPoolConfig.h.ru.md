Title: SPMemPoolConfig.h


# STAPPLER_CORE_MEMORY_POOL_SPMEMPOOLCONFIG_H_

## BRIEF

Заголовок параметров конфигурации системы пулов памяти

## CONTENT

Заголовок параметров конфигурации системы пулов памяти


# ::stappler::mempool::apr::SP_APR_COMPATIBLE

## BRIEF

Определяет, используется ли реализация пулов памяти, совместимая с Apache Portable Runtime

## CONTENT

Определяет, используется ли реализация пулов памяти, совместимая с Apache Portable Runtime

Тип: int const


# ::stappler::mempool::custom::Status

## BRIEF

Тип статуса успеха операции

## CONTENT

Тип статуса успеха операции


# ::stappler::mempool::custom::BlockThreshold

## BRIEF

Предел размера для использования возвратной операции

## CONTENT

Предел размера для использования возвратной операции. Для значений меньше предела оптимизация не испольузется. Эта оптимизация позволяет повторно использовать большие блоки памяти без очищения пула памяти.

Тип: uint32_t const


# ::stappler::mempool::custom::SPALIGN(size_t,uint32_t)

## BRIEF

Функция выравнивания

## CONTENT

Функция выравнивания

Параметры:
* size_t - исходное значение
* uint32_t - значение выравнивания

Возвращает:
* size_t - выровненное значение размера

# ::stappler::mempool::custom::SPALIGN_DEFAULT(size_t)

## BRIEF

Функция выравнивания при распределении памяти из пулов по умолчанию

## CONTENT

Функция выравнивания при распределении памяти из пулов по умолчанию. Для пулов SDK используется выравнивание, совместимое с 128-битными SIMD.

Параметры:
* size_t - исходное значение

Возвращает:
* size_t - выровненное значение размера

# ::stappler::mempool::custom::BOUNDARY_INDEX

## BRIEF

Индекс минимального размера блока пула памяти

## CONTENT

Индекс минимального размера блока пула памяти. Размер вычисляется как 1 << index.

Тип: uint32_t const


# ::stappler::mempool::custom::BOUNDARY_SIZE

## BRIEF

Минимальный размер пула памяти

## CONTENT

Минимальный размер пула памяти

Тип: uint32_t const


# ::stappler::mempool::custom::MIN_ALLOC

## BRIEF

Минимальный размер аллокации для пула памяти

## CONTENT

Минимальный размер аллокации для пула памяти

Тип: uint32_t const


# ::stappler::mempool::custom::MAX_INDEX

## BRIEF

Максимальный постоянно хранимый индекс памяти

## CONTENT

Максимальный постоянно хранимый индекс памяти

Тип: uint32_t const


# ::stappler::mempool::custom::ALLOCATOR_MAX_FREE_UNLIMITED

## BRIEF

Значение, показывающее, что аллокатор пула не должен возвращать память системе

## CONTENT

Значение, показывающее, что аллокатор пула не должен возвращать память системе

Тип: uint32_t const


# ::stappler::mempool::custom::ALLOCATOR_MMAP_RESERVED

## BRIEF

Резерв адресного пространства памяти для использования аллокации через mmap.

## CONTENT

Тип: size_t const

Резерв адресного пространства памяти для использования аллокации через mmap. Не является реальным резервом памяти, только адресного пространства памяти.

# ::stappler::mempool::custom::SUCCESS

## BRIEF

Сигнальное значение успеха операции

## CONTENT

Сигнальное значение успеха операции

Тип: Status


# ::stappler::mempool::custom::POOL_MAGIC

## BRIEF

Магическое значение для различения пулов SDK и APR

## CONTENT

Магическое значение для различения пулов SDK и APR

Тип: uint64_t const


# ::stappler::mempool::custom::PoolFlags

## BRIEF

Флаги создания пула памяти

## CONTENT

Флаги создания пула памяти

Значения:
* None
* ThreadSafePool - обеспечивает потокобезопасность на уровне пула памяти. Медлоенно
* ThreadSafeAllocator - обеспечивает потокобезопасность на уровне аллокатора памяти
* Custom - пул создан SDK (выставляется автоматически)
* Default


# ::stappler::mempool::custom::operator|(stappler::mempool::custom::PoolFlags const&,stappler::mempool::custom::PoolFlags const&)

## BRIEF

Функция логической операции над флагами (создана автоматически)

## CONTENT

Функция логической операции над флагами (создана автоматически)

Параметры:
* stappler::mempool::custom::PoolFlags const&
* stappler::mempool::custom::PoolFlags const&

Возвращает:
* stappler::mempool::custom::PoolFlags

# ::stappler::mempool::custom::operator&(stappler::mempool::custom::PoolFlags const&,stappler::mempool::custom::PoolFlags const&)

## BRIEF

Функция логической операции над флагами (создана автоматически)

## CONTENT

Функция логической операции над флагами (создана автоматически)

Параметры:
* stappler::mempool::custom::PoolFlags const&
* stappler::mempool::custom::PoolFlags const&

Возвращает:
* stappler::mempool::custom::PoolFlags

# ::stappler::mempool::custom::operator^(stappler::mempool::custom::PoolFlags const&,stappler::mempool::custom::PoolFlags const&)

## BRIEF

Функция логической операции над флагами (создана автоматически)

## CONTENT

Функция логической операции над флагами (создана автоматически)

Параметры:
* stappler::mempool::custom::PoolFlags const&
* stappler::mempool::custom::PoolFlags const&

Возвращает:
* stappler::mempool::custom::PoolFlags

# ::stappler::mempool::custom::operator|=(stappler::mempool::custom::PoolFlags&,stappler::mempool::custom::PoolFlags const&)

## BRIEF

Функция логической операции над флагами (создана автоматически)

## CONTENT

Функция логической операции над флагами (создана автоматически)

Параметры:
* stappler::mempool::custom::PoolFlags&
* stappler::mempool::custom::PoolFlags const&

Возвращает:
* stappler::mempool::custom::PoolFlags&

# ::stappler::mempool::custom::operator&=(stappler::mempool::custom::PoolFlags&,stappler::mempool::custom::PoolFlags const&)

## BRIEF

Функция логической операции над флагами (создана автоматически)

## CONTENT

Функция логической операции над флагами (создана автоматически)

Параметры:
* stappler::mempool::custom::PoolFlags&
* stappler::mempool::custom::PoolFlags const&

Возвращает:
* stappler::mempool::custom::PoolFlags&

# ::stappler::mempool::custom::operator^=(stappler::mempool::custom::PoolFlags&,stappler::mempool::custom::PoolFlags const&)

## BRIEF

Функция логической операции над флагами (создана автоматически)

## CONTENT

Функция логической операции над флагами (создана автоматически)

Параметры:
* stappler::mempool::custom::PoolFlags&
* stappler::mempool::custom::PoolFlags const&

Возвращает:
* stappler::mempool::custom::PoolFlags&

# ::stappler::mempool::custom::operator==(stappler::mempool::custom::PoolFlags const&,std::underlying_type<PoolFlags>::type const&)

## BRIEF

Функция логической операции над флагами (создана автоматически)

## CONTENT

Функция логической операции над флагами (создана автоматически)

Параметры:
* stappler::mempool::custom::PoolFlags const&
* std::underlying_type<PoolFlags>::type const&

Возвращает:
* bool

# ::stappler::mempool::custom::operator==(std::underlying_type<PoolFlags>::type const&,stappler::mempool::custom::PoolFlags const&)

## BRIEF

Функция логической операции над флагами (создана автоматически)

## CONTENT

Функция логической операции над флагами (создана автоматически)

Параметры:
* std::underlying_type<PoolFlags>::type const&
* stappler::mempool::custom::PoolFlags const&

Возвращает:
* bool

# ::stappler::mempool::custom::operator!=(stappler::mempool::custom::PoolFlags const&,std::underlying_type<PoolFlags>::type const&)

## BRIEF

Функция логической операции над флагами (создана автоматически)

## CONTENT

Функция логической операции над флагами (создана автоматически)

Параметры:
* stappler::mempool::custom::PoolFlags const&
* std::underlying_type<PoolFlags>::type const&

Возвращает:
* bool

# ::stappler::mempool::custom::operator!=(std::underlying_type<PoolFlags>::type const&,stappler::mempool::custom::PoolFlags const&)

## BRIEF

Функция логической операции над флагами (создана автоматически)

## CONTENT

Функция логической операции над флагами (создана автоматически)

Параметры:
* std::underlying_type<PoolFlags>::type const&
* stappler::mempool::custom::PoolFlags const&

Возвращает:
* bool

# ::stappler::mempool::custom::operator~(stappler::mempool::custom::PoolFlags const&)

## BRIEF

Функция логической операции над флагами (создана автоматически)

## CONTENT

Функция логической операции над флагами (создана автоматически)

Параметры:
* stappler::mempool::custom::PoolFlags const&

Возвращает:
* stappler::mempool::custom::PoolFlags
