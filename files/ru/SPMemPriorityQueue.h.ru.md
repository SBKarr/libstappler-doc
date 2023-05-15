Title: SPMemPriorityQueue.h


# LIBSTAPPLER_COMMON_MEMORY_SPMEMPRIORITYQUEUE_H_

## BRIEF

## CONTENT


# SP_PRIORITY_QUEUE_RANGE_DEBUG

## BRIEF

## CONTENT


# ::stappler::memory::PriorityQueue_lock_noOp(void*)

## BRIEF

## CONTENT

Параметры:
* void*


# ::stappler::memory::PriorityQueue_lock_std_mutex(void*)

## BRIEF

## CONTENT

Параметры:
* void*


# ::stappler::memory::PriorityQueue_unlock_std_mutex(void*)

## BRIEF

## CONTENT

Параметры:
* void*


# ::stappler::memory::PriorityQueue<typename>

## BRIEF

## CONTENT

Параметры шаблона:
* typename Value


# ::stappler::memory::PriorityQueue<typename>::PreallocatedNodes

## BRIEF

## CONTENT

Доступ: public

Тип: size_t const


# ::stappler::memory::PriorityQueue<typename>::StorageNodes

## BRIEF

## CONTENT

Доступ: public

Тип: size_t const


# ::stappler::memory::PriorityQueue<typename>::LockFnPtr

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::PriorityQueue<typename>::PriorityType

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::PriorityQueue<typename>::AlignedStorage

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::PriorityQueue<typename>::AlignedStorage::buffer

## BRIEF

## CONTENT

Тип: uint8_t[sizeof(_Tp)]


# ::stappler::memory::PriorityQueue<typename>::Node

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::PriorityQueue<typename>::Node::storage

## BRIEF

## CONTENT

Тип: stappler::memory::PriorityQueue::AlignedStorage


# ::stappler::memory::PriorityQueue<typename>::Node::next

## BRIEF

## CONTENT

Тип: stappler::memory::PriorityQueue::Node*


# ::stappler::memory::PriorityQueue<typename>::Node::block

## BRIEF

## CONTENT

Тип: stappler::memory::PriorityQueue::StorageBlock*


# ::stappler::memory::PriorityQueue<typename>::Node::priority

## BRIEF

## CONTENT

Тип: stappler::memory::PriorityQueue::PriorityType


# ::stappler::memory::PriorityQueue<typename>::StorageBlock

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::PriorityQueue<typename>::StorageBlock::nodes

## BRIEF

## CONTENT

Тип: std::array<Node, StorageNodes>


# ::stappler::memory::PriorityQueue<typename>::StorageBlock::used

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::memory::PriorityQueue<typename>::LockInterface

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::PriorityQueue<typename>::LockInterface::lockPtr

## BRIEF

## CONTENT

Тип: void*


# ::stappler::memory::PriorityQueue<typename>::LockInterface::lockFn

## BRIEF

## CONTENT

Тип: stappler::memory::PriorityQueue::LockFnPtr


# ::stappler::memory::PriorityQueue<typename>::LockInterface::unlockFn

## BRIEF

## CONTENT

Тип: stappler::memory::PriorityQueue::LockFnPtr


# ::stappler::memory::PriorityQueue<typename>::LockInterface::clear()

## BRIEF

## CONTENT


# ::stappler::memory::PriorityQueue<typename>::LockInterface::lock()

## BRIEF

## CONTENT


# ::stappler::memory::PriorityQueue<typename>::LockInterface::unlock()

## BRIEF

## CONTENT


# ::stappler::memory::PriorityQueue<typename>::LockInterface::operator==(stappler::memory::PriorityQueue::LockInterface const&) const

## BRIEF

## CONTENT

Параметры:
* stappler::memory::PriorityQueue::LockInterface const&

Возвращает:
* bool

# ::stappler::memory::PriorityQueue<typename>::LockInterface::operator!=(stappler::memory::PriorityQueue::LockInterface const&) const

## BRIEF

## CONTENT

Параметры:
* stappler::memory::PriorityQueue::LockInterface const&

Возвращает:
* bool

# ::stappler::memory::PriorityQueue<typename>::NodeInterface

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::PriorityQueue<typename>::NodeInterface::first

## BRIEF

## CONTENT

Тип: stappler::memory::PriorityQueue::Node*


# ::stappler::memory::PriorityQueue<typename>::NodeInterface::last

## BRIEF

## CONTENT

Тип: stappler::memory::PriorityQueue::Node*


# ::stappler::memory::PriorityQueue<typename>::NodeInterface::lock

## BRIEF

## CONTENT

Тип: stappler::memory::PriorityQueue::LockInterface


# ::stappler::memory::PriorityQueue<typename>::PriorityQueue()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::PriorityQueue<typename>::~PriorityQueue()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::PriorityQueue<typename>::PriorityQueue(const PriorityQueue<Value>&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* const PriorityQueue<Value>&


# ::stappler::memory::PriorityQueue<typename>::operator=(const PriorityQueue<Value>&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* const PriorityQueue<Value>&

Возвращает:
* PriorityQueue<Value>&

# ::stappler::memory::PriorityQueue<typename>::PriorityQueue(PriorityQueue<Value>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* PriorityQueue<Value>&&


# ::stappler::memory::PriorityQueue<typename>::operator=(PriorityQueue<Value>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* PriorityQueue<Value>&&

Возвращает:
* PriorityQueue<Value>&

# ::stappler::memory::PriorityQueue<typename>::capacity() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* size_t

# ::stappler::memory::PriorityQueue<typename>::free_capacity()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* size_t

# ::stappler::memory::PriorityQueue<typename>::setQueueLocking(stappler::memory::PriorityQueue::LockFnPtr,stappler::memory::PriorityQueue::LockFnPtr,void*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::memory::PriorityQueue::LockFnPtr
* stappler::memory::PriorityQueue::LockFnPtr
* void*


# ::stappler::memory::PriorityQueue<typename>::setFreeLocking(stappler::memory::PriorityQueue::LockFnPtr,stappler::memory::PriorityQueue::LockFnPtr,void*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::memory::PriorityQueue::LockFnPtr
* stappler::memory::PriorityQueue::LockFnPtr
* void*


# ::stappler::memory::PriorityQueue<typename>::setLocking(stappler::memory::PriorityQueue::LockFnPtr,stappler::memory::PriorityQueue::LockFnPtr,void*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::memory::PriorityQueue::LockFnPtr
* stappler::memory::PriorityQueue::LockFnPtr
* void*


# ::stappler::memory::PriorityQueue<typename>::setQueueLocking(std::mutex&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* std::mutex&


# ::stappler::memory::PriorityQueue<typename>::setFreeLocking(std::mutex&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* std::mutex&


# ::stappler::memory::PriorityQueue<typename>::setLocking(std::mutex&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* std::mutex&


# ::stappler::memory::PriorityQueue<typename>::clear()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::PriorityQueue<typename>::empty()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::memory::PriorityQueue<typename>::empty<class>(std::unique_lock<T>&)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class T

Параметры:
* std::unique_lock<T>&

Возвращает:
* bool

# ::stappler::memory::PriorityQueue<typename>::push<typename>(stappler::memory::PriorityQueue::PriorityType,bool,Args &&...)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename Args

Параметры:
* stappler::memory::PriorityQueue::PriorityType
* bool
* Args &&...


# ::stappler::memory::PriorityQueue<typename>::pop_prefix(callback<void (stappler::memory::PriorityQueue::PriorityType, Value &&)> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* callback<void (stappler::memory::PriorityQueue::PriorityType, Value &&)> const&

Возвращает:
* bool

# ::stappler::memory::PriorityQueue<typename>::pop_direct(callback<void (stappler::memory::PriorityQueue::PriorityType, Value &&)> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* callback<void (stappler::memory::PriorityQueue::PriorityType, Value &&)> const&

Возвращает:
* bool

# ::stappler::memory::PriorityQueue<typename>::foreach(callback<void (stappler::memory::PriorityQueue::PriorityType, const Value &)> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* callback<void (stappler::memory::PriorityQueue::PriorityType, const Value &)> const&


# ::stappler::memory::PriorityQueue<typename>::initNodes(stappler::memory::PriorityQueue::Node*,stappler::memory::PriorityQueue::Node*,stappler::memory::PriorityQueue::StorageBlock*)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::memory::PriorityQueue::Node*
* stappler::memory::PriorityQueue::Node*
* stappler::memory::PriorityQueue::StorageBlock*


# ::stappler::memory::PriorityQueue<typename>::popNode()

## BRIEF

## CONTENT

Доступ: protected

Возвращает:
* stappler::memory::PriorityQueue::Node*

# ::stappler::memory::PriorityQueue<typename>::pushNode(stappler::memory::PriorityQueue::Node*,bool)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::memory::PriorityQueue::Node*
* bool


# ::stappler::memory::PriorityQueue<typename>::allocateNode()

## BRIEF

## CONTENT

Доступ: protected

Возвращает:
* stappler::memory::PriorityQueue::Node*

# ::stappler::memory::PriorityQueue<typename>::freeNode(stappler::memory::PriorityQueue::Node*)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::memory::PriorityQueue::Node*


# ::stappler::memory::PriorityQueue<typename>::allocateBlock(std::unique_lock<LockInterface>&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* std::unique_lock<LockInterface>&

Возвращает:
* stappler::memory::PriorityQueue::StorageBlock*

# ::stappler::memory::PriorityQueue<typename>::deallocateBlock(std::unique_lock<LockInterface>&,stappler::memory::PriorityQueue::StorageBlock*)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* std::unique_lock<LockInterface>&
* stappler::memory::PriorityQueue::StorageBlock*


# ::stappler::memory::PriorityQueue<typename>::_preallocated

## BRIEF

## CONTENT

Доступ: protected

Тип: std::array<Node, PreallocatedNodes>


# ::stappler::memory::PriorityQueue<typename>::_queue

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::memory::PriorityQueue::NodeInterface


# ::stappler::memory::PriorityQueue<typename>::_free

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::memory::PriorityQueue::NodeInterface


# ::stappler::memory::PriorityQueue<typename>::_capacity

## BRIEF

## CONTENT

Доступ: protected

Тип: size_t
