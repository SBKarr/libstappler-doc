Title: SPMemPoolConfig.h


# LIBSTAPPLER_COMMON_MEMORY_POOL_SPMEMPOOLCONFIG_H_

## BRIEF

## CONTENT


# ::stappler::mempool::apr::SPAprDefined

## BRIEF

## CONTENT

Тип: int const


# ::stappler::mempool::custom::Status

## BRIEF

## CONTENT


# ::stappler::mempool::custom::BlockThreshold

## BRIEF

## CONTENT

Тип: uint32_t const


# ::stappler::mempool::custom::SPALIGN(size_t,uint32_t)

## BRIEF

## CONTENT

Параметры:
* size_t
* uint32_t

Возвращает:
* size_t

# ::stappler::mempool::custom::SPALIGN_DEFAULT(size_t)

## BRIEF

## CONTENT

Параметры:
* size_t

Возвращает:
* size_t

# ::stappler::mempool::custom::BOUNDARY_INDEX

## BRIEF

## CONTENT

Тип: uint32_t const


# ::stappler::mempool::custom::BOUNDARY_SIZE

## BRIEF

## CONTENT

Тип: uint32_t const


# ::stappler::mempool::custom::MIN_ALLOC

## BRIEF

## CONTENT

Тип: uint32_t const


# ::stappler::mempool::custom::MAX_INDEX

## BRIEF

## CONTENT

Тип: uint32_t const


# ::stappler::mempool::custom::ALLOCATOR_MAX_FREE_UNLIMITED

## BRIEF

## CONTENT

Тип: uint32_t const


# ::stappler::mempool::custom::ALLOCATOR_MMAP_RESERVED

## BRIEF

## CONTENT

Тип: size_t const


# ::stappler::mempool::custom::SUCCESS

## BRIEF

## CONTENT

Тип: Status


# ::stappler::mempool::custom::POOL_MAGIC

## BRIEF

## CONTENT

Тип: uint64_t const


# ::stappler::mempool::custom::PoolFlags

## BRIEF

## CONTENT

Значения:
* None
* ThreadSafePool
* ThreadSafeAllocator
* Custom
* Default


# ::stappler::mempool::custom::operator|(stappler::mempool::custom::PoolFlags const&,stappler::mempool::custom::PoolFlags const&)

## BRIEF

## CONTENT

Параметры:
* stappler::mempool::custom::PoolFlags const&
* stappler::mempool::custom::PoolFlags const&

Возвращает:
* stappler::mempool::custom::PoolFlags

# ::stappler::mempool::custom::operator&(stappler::mempool::custom::PoolFlags const&,stappler::mempool::custom::PoolFlags const&)

## BRIEF

## CONTENT

Параметры:
* stappler::mempool::custom::PoolFlags const&
* stappler::mempool::custom::PoolFlags const&

Возвращает:
* stappler::mempool::custom::PoolFlags

# ::stappler::mempool::custom::operator^(stappler::mempool::custom::PoolFlags const&,stappler::mempool::custom::PoolFlags const&)

## BRIEF

## CONTENT

Параметры:
* stappler::mempool::custom::PoolFlags const&
* stappler::mempool::custom::PoolFlags const&

Возвращает:
* stappler::mempool::custom::PoolFlags

# ::stappler::mempool::custom::operator|=(stappler::mempool::custom::PoolFlags&,stappler::mempool::custom::PoolFlags const&)

## BRIEF

## CONTENT

Параметры:
* stappler::mempool::custom::PoolFlags&
* stappler::mempool::custom::PoolFlags const&

Возвращает:
* stappler::mempool::custom::PoolFlags&

# ::stappler::mempool::custom::operator&=(stappler::mempool::custom::PoolFlags&,stappler::mempool::custom::PoolFlags const&)

## BRIEF

## CONTENT

Параметры:
* stappler::mempool::custom::PoolFlags&
* stappler::mempool::custom::PoolFlags const&

Возвращает:
* stappler::mempool::custom::PoolFlags&

# ::stappler::mempool::custom::operator^=(stappler::mempool::custom::PoolFlags&,stappler::mempool::custom::PoolFlags const&)

## BRIEF

## CONTENT

Параметры:
* stappler::mempool::custom::PoolFlags&
* stappler::mempool::custom::PoolFlags const&

Возвращает:
* stappler::mempool::custom::PoolFlags&

# ::stappler::mempool::custom::operator==(stappler::mempool::custom::PoolFlags const&,std::underlying_type<PoolFlags>::type const&)

## BRIEF

## CONTENT

Параметры:
* stappler::mempool::custom::PoolFlags const&
* std::underlying_type<PoolFlags>::type const&

Возвращает:
* bool

# ::stappler::mempool::custom::operator==(std::underlying_type<PoolFlags>::type const&,stappler::mempool::custom::PoolFlags const&)

## BRIEF

## CONTENT

Параметры:
* std::underlying_type<PoolFlags>::type const&
* stappler::mempool::custom::PoolFlags const&

Возвращает:
* bool

# ::stappler::mempool::custom::operator!=(stappler::mempool::custom::PoolFlags const&,std::underlying_type<PoolFlags>::type const&)

## BRIEF

## CONTENT

Параметры:
* stappler::mempool::custom::PoolFlags const&
* std::underlying_type<PoolFlags>::type const&

Возвращает:
* bool

# ::stappler::mempool::custom::operator!=(std::underlying_type<PoolFlags>::type const&,stappler::mempool::custom::PoolFlags const&)

## BRIEF

## CONTENT

Параметры:
* std::underlying_type<PoolFlags>::type const&
* stappler::mempool::custom::PoolFlags const&

Возвращает:
* bool

# ::stappler::mempool::custom::operator~(stappler::mempool::custom::PoolFlags const&)

## BRIEF

## CONTENT

Параметры:
* stappler::mempool::custom::PoolFlags const&

Возвращает:
* stappler::mempool::custom::PoolFlags