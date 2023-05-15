Title: SPMemAlloc.h


# LIBSTAPPLER_COMMON_MEMORY_SPMEMALLOC_H_

## BRIEF

## CONTENT


# ::stappler::memory::AllocBase

## BRIEF

## CONTENT


# ::stappler::memory::AllocBase::operator new(size_t)

## BRIEF

## CONTENT

Параметры:
* size_t

Возвращает:
* void*

# ::stappler::memory::AllocBase::operator new(size_t,std::nothrow_t const&)

## BRIEF

## CONTENT

Параметры:
* size_t
* std::nothrow_t const&

Возвращает:
* void*

# ::stappler::memory::AllocBase::operator new(size_t,void*)

## BRIEF

## CONTENT

Параметры:
* size_t
* void*

Возвращает:
* void*

# ::stappler::memory::AllocBase::operator delete(void*)

## BRIEF

## CONTENT

Параметры:
* void*


# ::stappler::memory::AllocPool

## BRIEF

## CONTENT


# ::stappler::memory::AllocPool::operator new(size_t)

## BRIEF

## CONTENT

Параметры:
* size_t

Возвращает:
* void*

# ::stappler::memory::AllocPool::operator new(size_t,stappler::mempool::base::pool_t*)

## BRIEF

## CONTENT

Параметры:
* size_t
* stappler::mempool::base::pool_t*

Возвращает:
* void*

# ::stappler::memory::AllocPool::operator new(size_t,void*)

## BRIEF

## CONTENT

Параметры:
* size_t
* void*

Возвращает:
* void*

# ::stappler::memory::AllocPool::operator delete(void*)

## BRIEF

## CONTENT

Параметры:
* void*


# ::stappler::memory::AllocPool::getCurrentPool()

## BRIEF

## CONTENT

Возвращает:
* stappler::mempool::base::pool_t*

# ::stappler::memory::AllocPool::isCustomPool(stappler::mempool::base::pool_t*)

## BRIEF

## CONTENT

Параметры:
* stappler::mempool::base::pool_t*

Возвращает:
* bool

# ::stappler::memory::AllocPool::cleanupObjectFromPool<typename>(void*)

## BRIEF

## CONTENT

Параметры шаблона:
* typename T

Параметры:
* void*

Возвращает:
* stappler::mempool::base::status_t

# ::stappler::memory::AllocPool::registerCleanupDestructor<typename>(T*,stappler::mempool::base::pool_t*)

## BRIEF

## CONTENT

Параметры шаблона:
* typename T

Параметры:
* T*
* stappler::mempool::base::pool_t*


# ::stappler::memory::Allocator_SelectFirst<A,Args...>::Allocator_SelectFirst<A,Args...>

## BRIEF

## CONTENT

Параметры шаблона:
* class A
* class Args


# ::stappler::memory::Allocator_SelectFirst<A,Args...>::type

## BRIEF

## CONTENT


# ::stappler::memory::Allocator<class>

## BRIEF

## CONTENT

Параметры шаблона:
* class T


# ::stappler::memory::Allocator<class>::pointer

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::Allocator<class>::const_pointer

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::Allocator<class>::void_pointer

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::Allocator<class>::const_void_pointer

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::Allocator<class>::reference

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::Allocator<class>::const_reference

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::Allocator<class>::value_type

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::Allocator<class>::size_type

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::Allocator<class>::difference_type

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::Allocator<class>::rebind<class>

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class U


# ::stappler::memory::Allocator<class>::rebind<class>::other

## BRIEF

## CONTENT


# ::stappler::memory::Allocator<class>::AllocFlag

## BRIEF

## CONTENT

Доступ: public

Значения:
* FirstFlag
* SecondFlag
* ThirdFlag
* BitMask


# ::stappler::memory::Allocator<class>::pool_ptr(stappler::mempool::base::pool_t*)

## BRIEF

## CONTENT

Доступ: private

Параметры:
* stappler::mempool::base::pool_t*

Возвращает:
* stappler::mempool::base::pool_t*

# ::stappler::memory::Allocator<class>::Allocator()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::Allocator<class>::Allocator(stappler::mempool::base::pool_t*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::mempool::base::pool_t*


# ::stappler::memory::Allocator<class>::Allocator<class>(Allocator<B> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class B

Параметры:
* Allocator<B> const&


# ::stappler::memory::Allocator<class>::Allocator<class>(Allocator<B>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class B

Параметры:
* Allocator<B>&&


# ::stappler::memory::Allocator<class>::operator=<class>(Allocator<B> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class B

Параметры:
* Allocator<B> const&

Возвращает:
* Allocator<T>&

# ::stappler::memory::Allocator<class>::operator=<class>(Allocator<B>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class B

Параметры:
* Allocator<B>&&

Возвращает:
* Allocator<T>&

# ::stappler::memory::Allocator<class>::allocate(size_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* size_t

Возвращает:
* T*

# ::stappler::memory::Allocator<class>::__allocate(size_t&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* size_t&

Возвращает:
* T*

# ::stappler::memory::Allocator<class>::__allocate(size_t,size_t&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* size_t
* size_t&

Возвращает:
* T*

# ::stappler::memory::Allocator<class>::deallocate(T*,size_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* T*
* size_t


# ::stappler::memory::Allocator<class>::__deallocate(T*,size_t,size_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* T*
* size_t
* size_t


# ::stappler::memory::Allocator<class>::operator==<class>(Allocator<B> const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class B

Параметры:
* Allocator<B> const&

Возвращает:
* bool

# ::stappler::memory::Allocator<class>::operator!=<class>(Allocator<B> const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class B

Параметры:
* Allocator<B> const&

Возвращает:
* bool

# ::stappler::memory::Allocator<class>::address(stappler::memory::Allocator::reference) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::memory::Allocator::reference

Возвращает:
* pointer

# ::stappler::memory::Allocator<class>::address(stappler::memory::Allocator::const_reference) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::memory::Allocator::const_reference

Возвращает:
* const_pointer

# ::stappler::memory::Allocator<class>::max_size() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* size_type

# ::stappler::memory::Allocator<class>::construct<typename>(stappler::memory::Allocator::pointer,Args &&...)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename Args

Параметры:
* stappler::memory::Allocator::pointer
* Args &&...


# ::stappler::memory::Allocator<class>::destroy(stappler::memory::Allocator::pointer)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::memory::Allocator::pointer


# ::stappler::memory::Allocator<class>::destroy(stappler::memory::Allocator::pointer,size_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::memory::Allocator::pointer
* size_t


# ::stappler::memory::Allocator<class>::operator pool_t*() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::mempool::base::pool_t*

# ::stappler::memory::Allocator<class>::getPool() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::mempool::base::pool_t*

# ::stappler::memory::Allocator<class>::copy(T*,T const*,size_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* T*
* T const*
* size_t


# ::stappler::memory::Allocator<class>::copy_rewrite(T*,size_t,T const*,size_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* T*
* size_t
* T const*
* size_t


# ::stappler::memory::Allocator<class>::move(T*,T*,size_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* T*
* T*
* size_t


# ::stappler::memory::Allocator<class>::move_rewrite(T*,size_t,T*,size_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* T*
* size_t
* T*
* size_t


# ::stappler::memory::Allocator<class>::test(stappler::memory::Allocator::AllocFlag) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::memory::Allocator::AllocFlag

Возвращает:
* bool

# ::stappler::memory::Allocator<class>::set(stappler::memory::Allocator::AllocFlag)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::memory::Allocator::AllocFlag


# ::stappler::memory::Allocator<class>::reset(stappler::memory::Allocator::AllocFlag)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::memory::Allocator::AllocFlag


# ::stappler::memory::Allocator<class>::flip(stappler::memory::Allocator::AllocFlag)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::memory::Allocator::AllocFlag


# ::stappler::memory::Allocator<class>::pool

## BRIEF

## CONTENT

Доступ: private

Тип: stappler::mempool::base::pool_t*


# ::stappler::memory::Storage<typename>

## BRIEF

## CONTENT

Параметры шаблона:
* typename Value


# ::stappler::memory::Storage<typename>::Image

## BRIEF

## CONTENT


# ::stappler::memory::Storage<typename>::Image::_value

## BRIEF

## CONTENT

Тип: Value


# ::stappler::memory::Storage<typename>::_storage

## BRIEF

## CONTENT

Тип: uint8_t[sizeof(_Tp)]


# ::stappler::memory::Storage<typename>::Storage()

## BRIEF

## CONTENT


# ::stappler::memory::Storage<typename>::Storage(stappler::nullptr_t)

## BRIEF

## CONTENT

Параметры:
* stappler::nullptr_t


# ::stappler::memory::Storage<typename>::addr()

## BRIEF

## CONTENT

Возвращает:
* void*

# ::stappler::memory::Storage<typename>::addr() const

## BRIEF

## CONTENT

Возвращает:
* void const*

# ::stappler::memory::Storage<typename>::ptr()

## BRIEF

## CONTENT

Возвращает:
* Value*

# ::stappler::memory::Storage<typename>::ptr() const

## BRIEF

## CONTENT

Возвращает:
* Value const*

# ::stappler::memory::Storage<typename>::ref()

## BRIEF

## CONTENT

Возвращает:
* Value&

# ::stappler::memory::Storage<typename>::ref() const

## BRIEF

## CONTENT

Возвращает:
* Value const&

# ::stappler::memory::AllocPool::cleanupObjectFromPool<typename>(void*)

## BRIEF

## CONTENT

Параметры шаблона:
* typename T

Параметры:
* void*

Возвращает:
* stappler::mempool::base::status_t

# ::stappler::memory::AllocPool::registerCleanupDestructor<typename>(T*,stappler::mempool::base::pool_t*)

## BRIEF

## CONTENT

Параметры шаблона:
* typename T

Параметры:
* T*
* stappler::mempool::base::pool_t*
