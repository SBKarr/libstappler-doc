Title: SPMemPoolInterface.h


# LIBSTAPPLER_COMMON_MEMORY_POOL_SPMEMPOOLINTERFACE_H_

## BRIEF

## CONTENT


# ::stappler::mempool::base::pool_t

## BRIEF

## CONTENT


# ::stappler::mempool::base::status_t

## BRIEF

## CONTENT


# ::stappler::mempool::base::allocator_t

## BRIEF

## CONTENT


# ::stappler::mempool::base::cleanup_fn

## BRIEF

## CONTENT


# ::stappler::mempool::base::PoolFlags

## BRIEF

## CONTENT


# ::stappler::mempool::base::get_mapped_regions_count()

## BRIEF

## CONTENT

Возвращает:
* size_t

# ::stappler::mempool::base::sp_mmap(void*,size_t,int,int,int,off_t)

## BRIEF

## CONTENT

Параметры:
* void*
* size_t
* int
* int
* int
* off_t

Возвращает:
* void*

# ::stappler::mempool::base::sp_munmap(void*,size_t)

## BRIEF

## CONTENT

Параметры:
* void*
* size_t

Возвращает:
* int

# ::stappler::mempool::base::pool::acquire()

## BRIEF

## CONTENT

Возвращает:
* stappler::mempool::base::pool_t*

# ::stappler::mempool::base::pool::info()

## BRIEF

## CONTENT

Возвращает:
* Pair<uint32_t, const void *>

# ::stappler::mempool::base::pool::push(stappler::mempool::base::pool_t*)

## BRIEF

## CONTENT

Параметры:
* stappler::mempool::base::pool_t*


# ::stappler::mempool::base::pool::push(stappler::mempool::base::pool_t*,uint32_t,void const*)

## BRIEF

## CONTENT

Параметры:
* stappler::mempool::base::pool_t*
* uint32_t
* void const*


# ::stappler::mempool::base::pool::pop()

## BRIEF

## CONTENT


# ::stappler::mempool::base::pool::foreach_info(void*,bool(*)(void*,stappler::mempool::base::pool_t*,uint32_t,void const*))

## BRIEF

## CONTENT

Параметры:
* void*
* bool(*)(void*,stappler::mempool::base::pool_t*,uint32_t,void const*)


# ::stappler::mempool::base::allocator::create(bool)

## BRIEF

## CONTENT

Параметры:
* bool

Возвращает:
* stappler::mempool::base::allocator_t*

# ::stappler::mempool::base::allocator::create(void*)

## BRIEF

## CONTENT

Параметры:
* void*

Возвращает:
* stappler::mempool::base::allocator_t*

# ::stappler::mempool::base::allocator::createWithMmap(uint32_t)

## BRIEF

## CONTENT

Параметры:
* uint32_t

Возвращает:
* stappler::mempool::base::allocator_t*

# ::stappler::mempool::base::allocator::owner_set(stappler::mempool::base::allocator_t*,stappler::mempool::base::pool_t*)

## BRIEF

## CONTENT

Параметры:
* stappler::mempool::base::allocator_t*
* stappler::mempool::base::pool_t*


# ::stappler::mempool::base::allocator::owner_get(stappler::mempool::base::allocator_t*)

## BRIEF

## CONTENT

Параметры:
* stappler::mempool::base::allocator_t*

Возвращает:
* stappler::mempool::base::pool_t*

# ::stappler::mempool::base::allocator::max_free_set(stappler::mempool::base::allocator_t*,size_t)

## BRIEF

## CONTENT

Параметры:
* stappler::mempool::base::allocator_t*
* size_t


# ::stappler::mempool::base::allocator::destroy(stappler::mempool::base::allocator_t*)

## BRIEF

## CONTENT

Параметры:
* stappler::mempool::base::allocator_t*


# ::stappler::mempool::base::pool::PoolFlags

## BRIEF

## CONTENT


# ::stappler::mempool::base::pool::Info

## BRIEF

## CONTENT

Значения:
* Pool
* Request
* Connection
* Server
* Template
* Config
* Task
* SharedObject
* Socket
* Broadcast


# ::stappler::mempool::base::pool::initialize()

## BRIEF

## CONTENT


# ::stappler::mempool::base::pool::terminate()

## BRIEF

## CONTENT


# ::stappler::mempool::base::pool::create(stappler::mempool::base::pool::PoolFlags)

## BRIEF

## CONTENT

Параметры:
* stappler::mempool::base::pool::PoolFlags

Возвращает:
* stappler::mempool::base::pool_t*

# ::stappler::mempool::base::pool::create(stappler::mempool::base::allocator_t*,stappler::mempool::base::pool::PoolFlags)

## BRIEF

## CONTENT

Параметры:
* stappler::mempool::base::allocator_t*
* stappler::mempool::base::pool::PoolFlags

Возвращает:
* stappler::mempool::base::pool_t*

# ::stappler::mempool::base::pool::create(stappler::mempool::base::pool_t*)

## BRIEF

## CONTENT

Параметры:
* stappler::mempool::base::pool_t*

Возвращает:
* stappler::mempool::base::pool_t*

# ::stappler::mempool::base::pool::createTagged(char const*,stappler::mempool::base::pool::PoolFlags)

## BRIEF

## CONTENT

Параметры:
* char const*
* stappler::mempool::base::pool::PoolFlags

Возвращает:
* stappler::mempool::base::pool_t*

# ::stappler::mempool::base::pool::createTagged(stappler::mempool::base::pool_t*,char const*)

## BRIEF

## CONTENT

Параметры:
* stappler::mempool::base::pool_t*
* char const*

Возвращает:
* stappler::mempool::base::pool_t*

# ::stappler::mempool::base::pool::destroy(stappler::mempool::base::pool_t*)

## BRIEF

## CONTENT

Параметры:
* stappler::mempool::base::pool_t*


# ::stappler::mempool::base::pool::clear(stappler::mempool::base::pool_t*)

## BRIEF

## CONTENT

Параметры:
* stappler::mempool::base::pool_t*


# ::stappler::mempool::base::pool::alloc(stappler::mempool::base::pool_t*,size_t&)

## BRIEF

## CONTENT

Параметры:
* stappler::mempool::base::pool_t*
* size_t&

Возвращает:
* void*

# ::stappler::mempool::base::pool::palloc(stappler::mempool::base::pool_t*,size_t)

## BRIEF

## CONTENT

Параметры:
* stappler::mempool::base::pool_t*
* size_t

Возвращает:
* void*

# ::stappler::mempool::base::pool::calloc(stappler::mempool::base::pool_t*,size_t,size_t)

## BRIEF

## CONTENT

Параметры:
* stappler::mempool::base::pool_t*
* size_t
* size_t

Возвращает:
* void*

# ::stappler::mempool::base::pool::free(stappler::mempool::base::pool_t*,void*,size_t)

## BRIEF

## CONTENT

Параметры:
* stappler::mempool::base::pool_t*
* void*
* size_t


# ::stappler::mempool::base::pool::cleanup_kill(stappler::mempool::base::pool_t*,void*,stappler::mempool::base::cleanup_fn)

## BRIEF

## CONTENT

Параметры:
* stappler::mempool::base::pool_t*
* void*
* stappler::mempool::base::cleanup_fn


# ::stappler::mempool::base::pool::cleanup_register(stappler::mempool::base::pool_t*,void*,stappler::mempool::base::cleanup_fn)

## BRIEF

## CONTENT

Параметры:
* stappler::mempool::base::pool_t*
* void*
* stappler::mempool::base::cleanup_fn


# ::stappler::mempool::base::pool::cleanup_register(stappler::mempool::base::pool_t*,memory::function<void ()>&&)

## BRIEF

## CONTENT

Параметры:
* stappler::mempool::base::pool_t*
* memory::function<void ()>&&


# ::stappler::mempool::base::pool::foreach_info(void*,bool(*)(void*,stappler::mempool::base::pool_t*,uint32_t,void const*))

## BRIEF

## CONTENT

Параметры:
* void*
* bool(*)(void*,stappler::mempool::base::pool_t*,uint32_t,void const*)


# ::stappler::mempool::base::pool::userdata_set(void const*,char const*,stappler::mempool::base::cleanup_fn,stappler::mempool::base::pool_t*)

## BRIEF

## CONTENT

Параметры:
* void const*
* char const*
* stappler::mempool::base::cleanup_fn
* stappler::mempool::base::pool_t*

Возвращает:
* stappler::mempool::base::status_t

# ::stappler::mempool::base::pool::userdata_setn(void const*,char const*,stappler::mempool::base::cleanup_fn,stappler::mempool::base::pool_t*)

## BRIEF

## CONTENT

Параметры:
* void const*
* char const*
* stappler::mempool::base::cleanup_fn
* stappler::mempool::base::pool_t*

Возвращает:
* stappler::mempool::base::status_t

# ::stappler::mempool::base::pool::userdata_get(void**,char const*,stappler::mempool::base::pool_t*)

## BRIEF

## CONTENT

Параметры:
* void**
* char const*
* stappler::mempool::base::pool_t*

Возвращает:
* stappler::mempool::base::status_t

# ::stappler::mempool::base::pool::userdata_get(void**,char const*,size_t,stappler::mempool::base::pool_t*)

## BRIEF

## CONTENT

Параметры:
* void**
* char const*
* size_t
* stappler::mempool::base::pool_t*

Возвращает:
* stappler::mempool::base::status_t

# ::stappler::mempool::base::pool::get_allocator(stappler::mempool::base::pool_t*)

## BRIEF

## CONTENT

Параметры:
* stappler::mempool::base::pool_t*

Возвращает:
* stappler::mempool::base::allocator_t*

# ::stappler::mempool::base::pool::pmemdup(stappler::mempool::base::pool_t*,void const*,size_t)

## BRIEF

## CONTENT

Параметры:
* stappler::mempool::base::pool_t*
* void const*
* size_t

Возвращает:
* void*

# ::stappler::mempool::base::pool::pstrdup(stappler::mempool::base::pool_t*,char const*)

## BRIEF

## CONTENT

Параметры:
* stappler::mempool::base::pool_t*
* char const*

Возвращает:
* char*

# ::stappler::mempool::base::pool::isThreadSafeForAllocations(stappler::mempool::base::pool_t*)

## BRIEF

## CONTENT

Параметры:
* stappler::mempool::base::pool_t*

Возвращает:
* bool

# ::stappler::mempool::base::pool::isThreadSafeAsParent(stappler::mempool::base::pool_t*)

## BRIEF

## CONTENT

Параметры:
* stappler::mempool::base::pool_t*

Возвращает:
* bool

# ::stappler::mempool::base::pool::get_tag(stappler::mempool::base::pool_t*)

## BRIEF

## CONTENT

Параметры:
* stappler::mempool::base::pool_t*

Возвращает:
* char const*

# ::stappler::mempool::base::pool::get_allocated_bytes(stappler::mempool::base::pool_t*)

## BRIEF

## CONTENT

Параметры:
* stappler::mempool::base::pool_t*

Возвращает:
* size_t

# ::stappler::mempool::base::pool::get_return_bytes(stappler::mempool::base::pool_t*)

## BRIEF

## CONTENT

Параметры:
* stappler::mempool::base::pool_t*

Возвращает:
* size_t

# ::stappler::mempool::base::pool::get_active_count()

## BRIEF

## CONTENT

Возвращает:
* size_t

# ::stappler::mempool::base::pool::debug_begin(stappler::mempool::base::pool_t*)

## BRIEF

## CONTENT

Параметры:
* stappler::mempool::base::pool_t*

Возвращает:
* bool

# ::stappler::mempool::base::pool::debug_end()

## BRIEF

## CONTENT

Возвращает:
* std::map<pool_t *, const char **>

# ::stappler::mempool::base::pool::debug_foreach(void*,void(*)(void*,stappler::mempool::base::pool_t*))

## BRIEF

## CONTENT

Параметры:
* void*
* void(*)(void*,stappler::mempool::base::pool_t*)
