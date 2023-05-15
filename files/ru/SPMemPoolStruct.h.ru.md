Title: SPMemPoolStruct.h


# LIBSTAPPLER_COMMON_MEMORY_POOL_SPMEMPOOLSTRUCT_H_

## BRIEF

## CONTENT


# ::stappler::mempool::custom::MemAddr

## BRIEF

## CONTENT


# ::stappler::mempool::custom::MemAddr::size

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::mempool::custom::MemAddr::next

## BRIEF

## CONTENT

Тип: stappler::mempool::custom::MemAddr*


# ::stappler::mempool::custom::MemAddr::address

## BRIEF

## CONTENT

Тип: void*


# ::stappler::mempool::custom::AllocManager

## BRIEF

## CONTENT


# ::stappler::mempool::custom::AllocManager::AllocFn

## BRIEF

## CONTENT


# ::stappler::mempool::custom::AllocManager::pool

## BRIEF

## CONTENT

Тип: void*


# ::stappler::mempool::custom::AllocManager::buffered

## BRIEF

## CONTENT

Тип: stappler::mempool::custom::MemAddr*


# ::stappler::mempool::custom::AllocManager::free_buffered

## BRIEF

## CONTENT

Тип: stappler::mempool::custom::MemAddr*


# ::stappler::mempool::custom::AllocManager::tag

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::mempool::custom::AllocManager::ptr

## BRIEF

## CONTENT

Тип: void const*


# ::stappler::mempool::custom::AllocManager::alloc_buffer

## BRIEF

## CONTENT

Тип: size_t


# ::stappler::mempool::custom::AllocManager::allocated

## BRIEF

## CONTENT

Тип: size_t


# ::stappler::mempool::custom::AllocManager::returned

## BRIEF

## CONTENT

Тип: size_t


# ::stappler::mempool::custom::AllocManager::opts

## BRIEF

## CONTENT

Тип: size_t


# ::stappler::mempool::custom::AllocManager::reset(void*)

## BRIEF

## CONTENT

Параметры:
* void*


# ::stappler::mempool::custom::AllocManager::alloc(size_t&,stappler::mempool::custom::AllocManager::AllocFn)

## BRIEF

## CONTENT

Параметры:
* size_t&
* stappler::mempool::custom::AllocManager::AllocFn

Возвращает:
* void*

# ::stappler::mempool::custom::AllocManager::free(void*,size_t,stappler::mempool::custom::AllocManager::AllocFn)

## BRIEF

## CONTENT

Параметры:
* void*
* size_t
* stappler::mempool::custom::AllocManager::AllocFn


# ::stappler::mempool::custom::AllocManager::increment_alloc(size_t)

## BRIEF

## CONTENT

Параметры:
* size_t


# ::stappler::mempool::custom::AllocManager::increment_return(size_t)

## BRIEF

## CONTENT

Параметры:
* size_t


# ::stappler::mempool::custom::AllocManager::get_alloc()

## BRIEF

## CONTENT

Возвращает:
* size_t

# ::stappler::mempool::custom::AllocManager::get_return()

## BRIEF

## CONTENT

Возвращает:
* size_t

# ::stappler::mempool::custom::MemNode

## BRIEF

## CONTENT


# ::stappler::mempool::custom::MemNode::next

## BRIEF

## CONTENT

Тип: stappler::mempool::custom::MemNode*


# ::stappler::mempool::custom::MemNode::ref

## BRIEF

## CONTENT

Тип: stappler::mempool::custom::MemNode**


# ::stappler::mempool::custom::MemNode::index

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::mempool::custom::MemNode::free_index

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::mempool::custom::MemNode::first_avail

## BRIEF

## CONTENT

Тип: uint8_t*


# ::stappler::mempool::custom::MemNode::endp

## BRIEF

## CONTENT

Тип: uint8_t*


# ::stappler::mempool::custom::MemNode::insert(stappler::mempool::custom::MemNode*)

## BRIEF

## CONTENT

Параметры:
* stappler::mempool::custom::MemNode*


# ::stappler::mempool::custom::MemNode::remove()

## BRIEF

## CONTENT


# ::stappler::mempool::custom::MemNode::free_space() const

## BRIEF

## CONTENT

Возвращает:
* size_t

# ::stappler::mempool::custom::Cleanup

## BRIEF

## CONTENT


# ::stappler::mempool::custom::Cleanup::Callback

## BRIEF

## CONTENT


# ::stappler::mempool::custom::Cleanup::next

## BRIEF

## CONTENT

Тип: stappler::mempool::custom::Cleanup*


# ::stappler::mempool::custom::Cleanup::data

## BRIEF

## CONTENT

Тип: void const*


# ::stappler::mempool::custom::Cleanup::fn

## BRIEF

## CONTENT

Тип: Callback


# ::stappler::mempool::custom::Cleanup::run(stappler::mempool::custom::Cleanup**)

## BRIEF

## CONTENT

Параметры:
* stappler::mempool::custom::Cleanup**


# ::stappler::mempool::custom::Allocator

## BRIEF

## CONTENT


# ::stappler::mempool::custom::Allocator::AllocMutex

## BRIEF

## CONTENT


# ::stappler::mempool::custom::Allocator::last

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::mempool::custom::Allocator::max

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::mempool::custom::Allocator::current

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::mempool::custom::Allocator::owner

## BRIEF

## CONTENT

Тип: stappler::mempool::custom::Pool*


# ::stappler::mempool::custom::Allocator::mutex

## BRIEF

## CONTENT

Тип: AllocMutex*


# ::stappler::mempool::custom::Allocator::buf

## BRIEF

## CONTENT

Тип: std::array<MemNode *, MAX_INDEX>


# ::stappler::mempool::custom::Allocator::allocated

## BRIEF

## CONTENT

Тип: std::atomic<size_t>


# ::stappler::mempool::custom::Allocator::getAllocatorsCount()

## BRIEF

## CONTENT

Возвращает:
* size_t

# ::stappler::mempool::custom::Allocator::Allocator(bool)

## BRIEF

## CONTENT

Параметры:
* bool


# ::stappler::mempool::custom::Allocator::~Allocator()

## BRIEF

## CONTENT


# ::stappler::mempool::custom::Allocator::set_max(uint32_t)

## BRIEF

## CONTENT

Параметры:
* uint32_t


# ::stappler::mempool::custom::Allocator::alloc(uint32_t)

## BRIEF

## CONTENT

Параметры:
* uint32_t

Возвращает:
* stappler::mempool::custom::MemNode*

# ::stappler::mempool::custom::Allocator::free(stappler::mempool::custom::MemNode*)

## BRIEF

## CONTENT

Параметры:
* stappler::mempool::custom::MemNode*


# ::stappler::mempool::custom::Allocator::lock()

## BRIEF

## CONTENT


# ::stappler::mempool::custom::Allocator::unlock()

## BRIEF

## CONTENT


# ::stappler::mempool::custom::Allocator::mmapdes

## BRIEF

## CONTENT

Тип: int


# ::stappler::mempool::custom::Allocator::mmapPtr

## BRIEF

## CONTENT

Тип: void*


# ::stappler::mempool::custom::Allocator::mmapCurrent

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::mempool::custom::Allocator::mmapMax

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::mempool::custom::Allocator::run_mmap(uint64_t)

## BRIEF

## CONTENT

Параметры:
* uint64_t

Возвращает:
* bool

# ::stappler::mempool::custom::Allocator::allocationTracker

## BRIEF

## CONTENT

Тип: AllocManager::AllocFn


# ::stappler::mempool::custom::Pool

## BRIEF

## CONTENT


# ::stappler::mempool::custom::Pool::tag

## BRIEF

## CONTENT

Тип: char const*


# ::stappler::mempool::custom::Pool::parent

## BRIEF

## CONTENT

Тип: stappler::mempool::custom::Pool*


# ::stappler::mempool::custom::Pool::child

## BRIEF

## CONTENT

Тип: stappler::mempool::custom::Pool*


# ::stappler::mempool::custom::Pool::sibling

## BRIEF

## CONTENT

Тип: stappler::mempool::custom::Pool*


# ::stappler::mempool::custom::Pool::ref

## BRIEF

## CONTENT

Тип: stappler::mempool::custom::Pool**


# ::stappler::mempool::custom::Pool::cleanups

## BRIEF

## CONTENT

Тип: stappler::mempool::custom::Cleanup*


# ::stappler::mempool::custom::Pool::free_cleanups

## BRIEF

## CONTENT

Тип: stappler::mempool::custom::Cleanup*


# ::stappler::mempool::custom::Pool::allocator

## BRIEF

## CONTENT

Тип: stappler::mempool::custom::Allocator*


# ::stappler::mempool::custom::Pool::active

## BRIEF

## CONTENT

Тип: stappler::mempool::custom::MemNode*


# ::stappler::mempool::custom::Pool::self

## BRIEF

## CONTENT

Тип: stappler::mempool::custom::MemNode*


# ::stappler::mempool::custom::Pool::self_first_avail

## BRIEF

## CONTENT

Тип: uint8_t*


# ::stappler::mempool::custom::Pool::pre_cleanups

## BRIEF

## CONTENT

Тип: stappler::mempool::custom::Cleanup*


# ::stappler::mempool::custom::Pool::user_data

## BRIEF

## CONTENT

Тип: stappler::mempool::custom::HashTable*


# ::stappler::mempool::custom::Pool::allocmngr

## BRIEF

## CONTENT

Тип: stappler::mempool::custom::AllocManager


# ::stappler::mempool::custom::Pool::threadSafe

## BRIEF

## CONTENT

Тип: bool


# ::stappler::mempool::custom::Pool::create(stappler::mempool::custom::Allocator*,stappler::mempool::custom::PoolFlags)

## BRIEF

## CONTENT

Параметры:
* stappler::mempool::custom::Allocator*
* stappler::mempool::custom::PoolFlags

Возвращает:
* stappler::mempool::custom::Pool*

# ::stappler::mempool::custom::Pool::destroy(stappler::mempool::custom::Pool*)

## BRIEF

## CONTENT

Параметры:
* stappler::mempool::custom::Pool*


# ::stappler::mempool::custom::Pool::getPoolsCount()

## BRIEF

## CONTENT

Возвращает:
* size_t

# ::stappler::mempool::custom::Pool::Pool()

## BRIEF

## CONTENT


# ::stappler::mempool::custom::Pool::Pool(stappler::mempool::custom::Allocator*,stappler::mempool::custom::MemNode*,bool)

## BRIEF

## CONTENT

Параметры:
* stappler::mempool::custom::Allocator*
* stappler::mempool::custom::MemNode*
* bool


# ::stappler::mempool::custom::Pool::Pool(stappler::mempool::custom::Pool*,stappler::mempool::custom::Allocator*,stappler::mempool::custom::MemNode*,bool)

## BRIEF

## CONTENT

Параметры:
* stappler::mempool::custom::Pool*
* stappler::mempool::custom::Allocator*
* stappler::mempool::custom::MemNode*
* bool


# ::stappler::mempool::custom::Pool::~Pool()

## BRIEF

## CONTENT


# ::stappler::mempool::custom::Pool::alloc(size_t&)

## BRIEF

## CONTENT

Параметры:
* size_t&

Возвращает:
* void*

# ::stappler::mempool::custom::Pool::free(void*,size_t)

## BRIEF

## CONTENT

Параметры:
* void*
* size_t


# ::stappler::mempool::custom::Pool::palloc(size_t)

## BRIEF

## CONTENT

Параметры:
* size_t

Возвращает:
* void*

# ::stappler::mempool::custom::Pool::calloc(size_t,size_t)

## BRIEF

## CONTENT

Параметры:
* size_t
* size_t

Возвращает:
* void*

# ::stappler::mempool::custom::Pool::pmemdup(void const*,size_t)

## BRIEF

## CONTENT

Параметры:
* void const*
* size_t

Возвращает:
* void*

# ::stappler::mempool::custom::Pool::pstrdup(char const*)

## BRIEF

## CONTENT

Параметры:
* char const*

Возвращает:
* char*

# ::stappler::mempool::custom::Pool::clear()

## BRIEF

## CONTENT


# ::stappler::mempool::custom::Pool::make_child()

## BRIEF

## CONTENT

Возвращает:
* stappler::mempool::custom::Pool*

# ::stappler::mempool::custom::Pool::make_child(stappler::mempool::custom::Allocator*)

## BRIEF

## CONTENT

Параметры:
* stappler::mempool::custom::Allocator*

Возвращает:
* stappler::mempool::custom::Pool*

# ::stappler::mempool::custom::Pool::cleanup_register(void const*,Cleanup::Callback)

## BRIEF

## CONTENT

Параметры:
* void const*
* Cleanup::Callback


# ::stappler::mempool::custom::Pool::pre_cleanup_register(void const*,Cleanup::Callback)

## BRIEF

## CONTENT

Параметры:
* void const*
* Cleanup::Callback


# ::stappler::mempool::custom::Pool::cleanup_kill(void*,Cleanup::Callback)

## BRIEF

## CONTENT

Параметры:
* void*
* Cleanup::Callback


# ::stappler::mempool::custom::Pool::cleanup_run(void*,Cleanup::Callback)

## BRIEF

## CONTENT

Параметры:
* void*
* Cleanup::Callback


# ::stappler::mempool::custom::Pool::userdata_set(void const*,char const*,Cleanup::Callback)

## BRIEF

## CONTENT

Параметры:
* void const*
* char const*
* Cleanup::Callback

Возвращает:
* stappler::mempool::custom::Status

# ::stappler::mempool::custom::Pool::userdata_setn(void const*,char const*,Cleanup::Callback)

## BRIEF

## CONTENT

Параметры:
* void const*
* char const*
* Cleanup::Callback

Возвращает:
* stappler::mempool::custom::Status

# ::stappler::mempool::custom::Pool::userdata_get(void**,char const*)

## BRIEF

## CONTENT

Параметры:
* void**
* char const*

Возвращает:
* stappler::mempool::custom::Status

# ::stappler::mempool::custom::Pool::userdata_get(void**,char const*,size_t)

## BRIEF

## CONTENT

Параметры:
* void**
* char const*
* size_t

Возвращает:
* stappler::mempool::custom::Status

# ::stappler::mempool::custom::Pool::lock()

## BRIEF

## CONTENT


# ::stappler::mempool::custom::Pool::unlock()

## BRIEF

## CONTENT


# ::stappler::mempool::custom::HashFunc

## BRIEF

## CONTENT


# ::stappler::mempool::custom::HashEntry

## BRIEF

## CONTENT


# ::stappler::mempool::custom::HashEntry::next

## BRIEF

## CONTENT

Тип: stappler::mempool::custom::HashEntry*


# ::stappler::mempool::custom::HashEntry::hash

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::mempool::custom::HashEntry::key

## BRIEF

## CONTENT

Тип: void const*


# ::stappler::mempool::custom::HashEntry::klen

## BRIEF

## CONTENT

Тип: size_t


# ::stappler::mempool::custom::HashEntry::val

## BRIEF

## CONTENT

Тип: void const*


# ::stappler::mempool::custom::HashIndex

## BRIEF

## CONTENT


# ::stappler::mempool::custom::HashIndex::ht

## BRIEF

## CONTENT

Тип: stappler::mempool::custom::HashTable*


# ::stappler::mempool::custom::HashIndex::_self

## BRIEF

## CONTENT

Тип: stappler::mempool::custom::HashEntry*


# ::stappler::mempool::custom::HashIndex::_next

## BRIEF

## CONTENT

Тип: stappler::mempool::custom::HashEntry*


# ::stappler::mempool::custom::HashIndex::index

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::mempool::custom::HashIndex::next()

## BRIEF

## CONTENT

Возвращает:
* stappler::mempool::custom::HashIndex*

# ::stappler::mempool::custom::HashIndex::self(void const**,size_t*,void**)

## BRIEF

## CONTENT

Параметры:
* void const**
* size_t*
* void**


# ::stappler::mempool::custom::HashTable

## BRIEF

## CONTENT


# ::stappler::mempool::custom::HashTable::merge_fn

## BRIEF

## CONTENT


# ::stappler::mempool::custom::HashTable::foreach_fn

## BRIEF

## CONTENT


# ::stappler::mempool::custom::HashTable::pool

## BRIEF

## CONTENT

Тип: stappler::mempool::custom::Pool*


# ::stappler::mempool::custom::HashTable::array

## BRIEF

## CONTENT

Тип: stappler::mempool::custom::HashEntry**


# ::stappler::mempool::custom::HashTable::iterator

## BRIEF

## CONTENT

Тип: stappler::mempool::custom::HashIndex


# ::stappler::mempool::custom::HashTable::count

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::mempool::custom::HashTable::max

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::mempool::custom::HashTable::seed

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::mempool::custom::HashTable::hash_func

## BRIEF

## CONTENT

Тип: stappler::mempool::custom::HashFunc


# ::stappler::mempool::custom::HashTable::free

## BRIEF

## CONTENT

Тип: stappler::mempool::custom::HashEntry*


# ::stappler::mempool::custom::HashTable::init(stappler::mempool::custom::HashTable*,stappler::mempool::custom::Pool*)

## BRIEF

## CONTENT

Параметры:
* stappler::mempool::custom::HashTable*
* stappler::mempool::custom::Pool*


# ::stappler::mempool::custom::HashTable::make(stappler::mempool::custom::Pool*)

## BRIEF

## CONTENT

Параметры:
* stappler::mempool::custom::Pool*

Возвращает:
* stappler::mempool::custom::HashTable*

# ::stappler::mempool::custom::HashTable::make(stappler::mempool::custom::Pool*,stappler::mempool::custom::HashFunc)

## BRIEF

## CONTENT

Параметры:
* stappler::mempool::custom::Pool*
* stappler::mempool::custom::HashFunc

Возвращает:
* stappler::mempool::custom::HashTable*

# ::stappler::mempool::custom::HashTable::first(stappler::mempool::custom::Pool*)

## BRIEF

## CONTENT

Параметры:
* stappler::mempool::custom::Pool*

Возвращает:
* stappler::mempool::custom::HashIndex*

# ::stappler::mempool::custom::HashTable::copy(stappler::mempool::custom::Pool*) const

## BRIEF

## CONTENT

Параметры:
* stappler::mempool::custom::Pool*

Возвращает:
* stappler::mempool::custom::HashTable*

# ::stappler::mempool::custom::HashTable::get(void const*,size_t)

## BRIEF

## CONTENT

Параметры:
* void const*
* size_t

Возвращает:
* void*

# ::stappler::mempool::custom::HashTable::set(void const*,size_t,void const*)

## BRIEF

## CONTENT

Параметры:
* void const*
* size_t
* void const*


# ::stappler::mempool::custom::HashTable::size() const

## BRIEF

## CONTENT

Возвращает:
* size_t

# ::stappler::mempool::custom::HashTable::clear()

## BRIEF

## CONTENT


# ::stappler::mempool::custom::HashTable::merge(stappler::mempool::custom::Pool*,stappler::mempool::custom::HashTable const*) const

## BRIEF

## CONTENT

Параметры:
* stappler::mempool::custom::Pool*
* stappler::mempool::custom::HashTable const*

Возвращает:
* stappler::mempool::custom::HashTable*

# ::stappler::mempool::custom::HashTable::merge(stappler::mempool::custom::Pool*,stappler::mempool::custom::HashTable const*,stappler::mempool::custom::HashTable::merge_fn,void const*) const

## BRIEF

## CONTENT

Параметры:
* stappler::mempool::custom::Pool*
* stappler::mempool::custom::HashTable const*
* stappler::mempool::custom::HashTable::merge_fn
* void const*

Возвращает:
* stappler::mempool::custom::HashTable*

# ::stappler::mempool::custom::HashTable::foreach(stappler::mempool::custom::HashTable::foreach_fn,void*) const

## BRIEF

## CONTENT

Параметры:
* stappler::mempool::custom::HashTable::foreach_fn
* void*

Возвращает:
* bool

# ::stappler::mempool::custom::initialize()

## BRIEF

## CONTENT


# ::stappler::mempool::custom::terminate()

## BRIEF

## CONTENT


# ::stappler::mempool::custom::create(stappler::mempool::custom::Pool*)

## BRIEF

## CONTENT

Параметры:
* stappler::mempool::custom::Pool*

Возвращает:
* stappler::mempool::custom::Pool*

# ::stappler::mempool::custom::destroy(stappler::mempool::custom::Pool*)

## BRIEF

## CONTENT

Параметры:
* stappler::mempool::custom::Pool*


# ::stappler::mempool::custom::clear(stappler::mempool::custom::Pool*)

## BRIEF

## CONTENT

Параметры:
* stappler::mempool::custom::Pool*


# ::stappler::mempool::custom::SIZEOF_MEMNODE

## BRIEF

## CONTENT

Тип: size_t const


# ::stappler::mempool::custom::SIZEOF_POOL

## BRIEF

## CONTENT

Тип: size_t const
