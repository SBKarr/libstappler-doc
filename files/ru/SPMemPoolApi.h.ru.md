Title: SPMemPoolApi.h


# LIBSTAPPLER_COMMON_MEMORY_SPMEMPOOLAPI_H_

## BRIEF

## CONTENT


# ::stappler::memory::SUCCESS

## BRIEF

## CONTENT

Тип: int const


# ::stappler::memory::pool::context<typename>

## BRIEF

## CONTENT

Параметры шаблона:
* typename _Pool


# ::stappler::memory::pool::context<typename>::pool_type

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::pool::context<typename>::context(stappler::memory::pool::context::pool_type&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::memory::pool::context::pool_type&


# ::stappler::memory::pool::context<typename>::context(stappler::memory::pool::context::pool_type&,uint32_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::memory::pool::context::pool_type&
* uint32_t


# ::stappler::memory::pool::context<typename>::~context()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::pool::context<typename>::context(const context<_Pool>&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* const context<_Pool>&


# ::stappler::memory::pool::context<typename>::operator=(const context<_Pool>&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* const context<_Pool>&

Возвращает:
* context<_Pool>&

# ::stappler::memory::pool::context<typename>::context(context<_Pool>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* context<_Pool>&&


# ::stappler::memory::pool::context<typename>::operator=(context<_Pool>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* context<_Pool>&&

Возвращает:
* context<_Pool>&

# ::stappler::memory::pool::context<typename>::push()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::pool::context<typename>::push(uint32_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint32_t


# ::stappler::memory::pool::context<typename>::pop()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::pool::context<typename>::swap(context<_Pool>&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* context<_Pool>&


# ::stappler::memory::pool::context<typename>::owns() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::memory::pool::context<typename>::operator bool() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::memory::pool::context<typename>::pool() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* pool_type*

# ::stappler::memory::pool::context<typename>::_pool

## BRIEF

## CONTENT

Доступ: private

Тип: pool_type*


# ::stappler::memory::pool::context<typename>::_owns

## BRIEF

## CONTENT

Доступ: private

Тип: bool
