Title: XLCore.h


# XENOLITH_CORE_XLCORE_H_

## BRIEF

## CONTENT


# XL_ASSERT

## BRIEF

## CONTENT

Параметры:
* cond
* msg


# XLASSERT

## BRIEF

## CONTENT

Параметры:
* cond
* msg


# ::stappler::xenolith::Vec2

## BRIEF

## CONTENT


# ::stappler::xenolith::Vec3

## BRIEF

## CONTENT


# ::stappler::xenolith::Vec4

## BRIEF

## CONTENT


# ::stappler::xenolith::Mat4

## BRIEF

## CONTENT


# ::stappler::xenolith::Size2

## BRIEF

## CONTENT


# ::stappler::xenolith::Size3

## BRIEF

## CONTENT


# ::stappler::xenolith::Extent2

## BRIEF

## CONTENT


# ::stappler::xenolith::Extent3

## BRIEF

## CONTENT


# ::stappler::xenolith::Rect

## BRIEF

## CONTENT


# ::stappler::xenolith::URect

## BRIEF

## CONTENT


# ::stappler::xenolith::UVec2

## BRIEF

## CONTENT


# ::stappler::xenolith::Quaternion

## BRIEF

## CONTENT


# ::stappler::xenolith::Color

## BRIEF

## CONTENT


# ::stappler::xenolith::Color3B

## BRIEF

## CONTENT


# ::stappler::xenolith::Color4B

## BRIEF

## CONTENT


# ::stappler::xenolith::Color4F

## BRIEF

## CONTENT


# ::stappler::xenolith::ColorMask

## BRIEF

## CONTENT


# ::stappler::xenolith::Padding

## BRIEF

## CONTENT


# ::stappler::xenolith::Anchor

## BRIEF

## CONTENT


# ::stappler::xenolith::XL_MAKE_API_VERSION(uint32_t,uint32_t,uint32_t,uint32_t)

## BRIEF

## CONTENT

Параметры:
* uint32_t
* uint32_t
* uint32_t
* uint32_t

Возвращает:
* uint32_t

# ::stappler::xenolith::XL_MAKE_API_VERSION(stappler::StringView)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView

Возвращает:
* uint32_t

# ::stappler::xenolith::getVersionDescription(uint32_t)

## BRIEF

## CONTENT

Параметры:
* uint32_t

Возвращает:
* stappler::mem_std::String

# ::stappler::xenolith::PoolRef

## BRIEF

## CONTENT

Базовые классы:
* Ref


# ::stappler::xenolith::PoolRef::~PoolRef()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::PoolRef::PoolRef(memory::pool_t*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* memory::pool_t*


# ::stappler::xenolith::PoolRef::PoolRef(stappler::xenolith::PoolRef*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::PoolRef*


# ::stappler::xenolith::PoolRef::getPool() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* memory::pool_t*

# ::stappler::xenolith::PoolRef::palloc(size_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* size_t

Возвращает:
* void*

# ::stappler::xenolith::PoolRef::perform<typename>(Callable const&)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename Callable

Параметры:
* Callable const&

Возвращает:
* auto

# ::stappler::xenolith::PoolRef::_pool

## BRIEF

## CONTENT

Доступ: protected

Тип: memory::pool_t*


# ::stappler::xenolith::profiling::ProfileData

## BRIEF

## CONTENT


# ::stappler::xenolith::profiling::ProfileData::timestamp

## BRIEF

## CONTENT

Тип: uint64_t


# ::stappler::xenolith::profiling::ProfileData::tag

## BRIEF

## CONTENT

Тип: stappler::StringView


# ::stappler::xenolith::profiling::ProfileData::variant

## BRIEF

## CONTENT

Тип: stappler::StringView


# ::stappler::xenolith::profiling::ProfileData::limit

## BRIEF

## CONTENT

Тип: uint64_t


# ::stappler::xenolith::profiling::begin(stappler::StringView,stappler::StringView,uint64_t)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView
* stappler::StringView
* uint64_t

Возвращает:
* stappler::xenolith::profiling::ProfileData

# ::stappler::xenolith::profiling::end(stappler::xenolith::profiling::ProfileData&)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::profiling::ProfileData&


# ::stappler::xenolith::profiling::store(stappler::xenolith::profiling::ProfileData&)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::profiling::ProfileData&


# XL_PROFILE_DEBUG

## BRIEF

## CONTENT


# XL_PROFILE_BEGIN

## BRIEF

## CONTENT

Параметры:
* name
* tag
* variant
* limit


# XL_PROFILE_END

## BRIEF

## CONTENT

Параметры:
* name
