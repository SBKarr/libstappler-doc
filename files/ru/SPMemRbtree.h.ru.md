Title: SPMemRbtree.h


# LIBSTAPPLER_COMMON_MEMORY_SPMEMRBTREE_H_

## BRIEF

## CONTENT


# ::stappler::memory::rbtree::NodeColor

## BRIEF

## CONTENT

Значения:
* Red
* Black


# ::stappler::memory::rbtree::Storage<typename>

## BRIEF

## CONTENT

Параметры шаблона:
* typename Value


# ::stappler::memory::rbtree::NodeBase

## BRIEF

## CONTENT

Базовые классы:
* AllocPool


# ::stappler::memory::rbtree::NodeBase::Flag

## BRIEF

## CONTENT


# ::stappler::memory::rbtree::NodeBase::Flag::color

## BRIEF

## CONTENT

Тип: uintptr_t


# ::stappler::memory::rbtree::NodeBase::Flag::prealloc

## BRIEF

## CONTENT

Тип: uintptr_t


# ::stappler::memory::rbtree::NodeBase::Flag::index

## BRIEF

## CONTENT

Тип: uintptr_t


# ::stappler::memory::rbtree::NodeBase::Flag::size

## BRIEF

## CONTENT

Тип: uintptr_t


# ::stappler::memory::rbtree::NodeBase::parent

## BRIEF

## CONTENT

Тип: stappler::memory::rbtree::NodeBase*


# ::stappler::memory::rbtree::NodeBase::left

## BRIEF

## CONTENT

Тип: stappler::memory::rbtree::NodeBase*


# ::stappler::memory::rbtree::NodeBase::right

## BRIEF

## CONTENT

Тип: stappler::memory::rbtree::NodeBase*


# ::stappler::memory::rbtree::NodeBase::flag

## BRIEF

## CONTENT

Тип: stappler::memory::rbtree::NodeBase::Flag


# ::stappler::memory::rbtree::NodeBase::NodeBase()

## BRIEF

## CONTENT


# ::stappler::memory::rbtree::NodeBase::NodeBase(stappler::memory::rbtree::NodeColor)

## BRIEF

## CONTENT

Параметры:
* stappler::memory::rbtree::NodeColor


# ::stappler::memory::rbtree::NodeBase::setColor(stappler::memory::rbtree::NodeColor)

## BRIEF

## CONTENT

Параметры:
* stappler::memory::rbtree::NodeColor


# ::stappler::memory::rbtree::NodeBase::getColor() const

## BRIEF

## CONTENT

Возвращает:
* stappler::memory::rbtree::NodeColor

# ::stappler::memory::rbtree::NodeBase::setPrealloc(bool)

## BRIEF

## CONTENT

Параметры:
* bool


# ::stappler::memory::rbtree::NodeBase::isPrealloc() const

## BRIEF

## CONTENT

Возвращает:
* bool

# ::stappler::memory::rbtree::NodeBase::setSize(uintptr_t)

## BRIEF

## CONTENT

Параметры:
* uintptr_t


# ::stappler::memory::rbtree::NodeBase::getSize() const

## BRIEF

## CONTENT

Возвращает:
* uintptr_t

# ::stappler::memory::rbtree::NodeBase::setIndex(uintptr_t)

## BRIEF

## CONTENT

Параметры:
* uintptr_t


# ::stappler::memory::rbtree::NodeBase::getIndex() const

## BRIEF

## CONTENT

Возвращает:
* uintptr_t

# ::stappler::memory::rbtree::NodeBase::min(stappler::memory::rbtree::NodeBase*)

## BRIEF

## CONTENT

Параметры:
* stappler::memory::rbtree::NodeBase*

Возвращает:
* stappler::memory::rbtree::NodeBase*

# ::stappler::memory::rbtree::NodeBase::min(stappler::memory::rbtree::NodeBase const*)

## BRIEF

## CONTENT

Параметры:
* stappler::memory::rbtree::NodeBase const*

Возвращает:
* stappler::memory::rbtree::NodeBase const*

# ::stappler::memory::rbtree::NodeBase::max(stappler::memory::rbtree::NodeBase*)

## BRIEF

## CONTENT

Параметры:
* stappler::memory::rbtree::NodeBase*

Возвращает:
* stappler::memory::rbtree::NodeBase*

# ::stappler::memory::rbtree::NodeBase::max(stappler::memory::rbtree::NodeBase const*)

## BRIEF

## CONTENT

Параметры:
* stappler::memory::rbtree::NodeBase const*

Возвращает:
* stappler::memory::rbtree::NodeBase const*

# ::stappler::memory::rbtree::NodeBase::increment(stappler::memory::rbtree::NodeBase*)

## BRIEF

## CONTENT

Параметры:
* stappler::memory::rbtree::NodeBase*

Возвращает:
* stappler::memory::rbtree::NodeBase*

# ::stappler::memory::rbtree::NodeBase::increment(stappler::memory::rbtree::NodeBase const*)

## BRIEF

## CONTENT

Параметры:
* stappler::memory::rbtree::NodeBase const*

Возвращает:
* stappler::memory::rbtree::NodeBase const*

# ::stappler::memory::rbtree::NodeBase::decrement(stappler::memory::rbtree::NodeBase*)

## BRIEF

## CONTENT

Параметры:
* stappler::memory::rbtree::NodeBase*

Возвращает:
* stappler::memory::rbtree::NodeBase*

# ::stappler::memory::rbtree::NodeBase::decrement(stappler::memory::rbtree::NodeBase const*)

## BRIEF

## CONTENT

Параметры:
* stappler::memory::rbtree::NodeBase const*

Возвращает:
* stappler::memory::rbtree::NodeBase const*

# ::stappler::memory::rbtree::NodeBase::replace(stappler::memory::rbtree::NodeBase*,stappler::memory::rbtree::NodeBase*)

## BRIEF

## CONTENT

Параметры:
* stappler::memory::rbtree::NodeBase*
* stappler::memory::rbtree::NodeBase*

Возвращает:
* stappler::memory::rbtree::NodeBase*

# ::stappler::memory::rbtree::NodeBase::insert(stappler::memory::rbtree::NodeBase*,stappler::memory::rbtree::NodeBase*)

## BRIEF

## CONTENT

Параметры:
* stappler::memory::rbtree::NodeBase*
* stappler::memory::rbtree::NodeBase*


# ::stappler::memory::rbtree::NodeBase::remove(stappler::memory::rbtree::NodeBase*,stappler::memory::rbtree::NodeBase*)

## BRIEF

## CONTENT

Параметры:
* stappler::memory::rbtree::NodeBase*
* stappler::memory::rbtree::NodeBase*


# ::stappler::memory::rbtree::Node<typename>

## BRIEF

## CONTENT

Параметры шаблона:
* typename Value

Базовые классы:
* NodeBase


# ::stappler::memory::rbtree::Node<typename>::value

## BRIEF

## CONTENT

Тип: Storage<Value>


# ::stappler::memory::rbtree::Node<typename>::cast(stappler::memory::rbtree::NodeBase*)

## BRIEF

## CONTENT

Параметры:
* stappler::memory::rbtree::NodeBase*

Возвращает:
* Value*

# ::stappler::memory::rbtree::Node<typename>::cast(stappler::memory::rbtree::NodeBase const*)

## BRIEF

## CONTENT

Параметры:
* stappler::memory::rbtree::NodeBase const*

Возвращает:
* Value const*

# ::stappler::memory::rbtree::TreeIterator<typename>

## BRIEF

## CONTENT

Параметры шаблона:
* typename Value


# ::stappler::memory::rbtree::TreeIterator<typename>::iterator_category

## BRIEF

## CONTENT


# ::stappler::memory::rbtree::TreeIterator<typename>::node_type

## BRIEF

## CONTENT


# ::stappler::memory::rbtree::TreeIterator<typename>::value_type

## BRIEF

## CONTENT


# ::stappler::memory::rbtree::TreeIterator<typename>::reference

## BRIEF

## CONTENT


# ::stappler::memory::rbtree::TreeIterator<typename>::pointer

## BRIEF

## CONTENT


# ::stappler::memory::rbtree::TreeIterator<typename>::difference_type

## BRIEF

## CONTENT


# ::stappler::memory::rbtree::TreeIterator<typename>::self

## BRIEF

## CONTENT


# ::stappler::memory::rbtree::TreeIterator<typename>::node_ptr

## BRIEF

## CONTENT


# ::stappler::memory::rbtree::TreeIterator<typename>::link_ptr

## BRIEF

## CONTENT


# ::stappler::memory::rbtree::TreeIterator<typename>::TreeIterator()

## BRIEF

## CONTENT


# ::stappler::memory::rbtree::TreeIterator<typename>::TreeIterator(stappler::memory::rbtree::TreeIterator::node_ptr)

## BRIEF

## CONTENT

Параметры:
* stappler::memory::rbtree::TreeIterator::node_ptr


# ::stappler::memory::rbtree::TreeIterator<typename>::operator*() const

## BRIEF

## CONTENT

Возвращает:
* reference

# ::stappler::memory::rbtree::TreeIterator<typename>::operator->() const

## BRIEF

## CONTENT

Возвращает:
* pointer

# ::stappler::memory::rbtree::TreeIterator<typename>::operator++()

## BRIEF

## CONTENT

Возвращает:
* self&

# ::stappler::memory::rbtree::TreeIterator<typename>::operator++(int)

## BRIEF

## CONTENT

Параметры:
* int

Возвращает:
* self

# ::stappler::memory::rbtree::TreeIterator<typename>::operator--()

## BRIEF

## CONTENT

Возвращает:
* self&

# ::stappler::memory::rbtree::TreeIterator<typename>::operator--(int)

## BRIEF

## CONTENT

Параметры:
* int

Возвращает:
* self

# ::stappler::memory::rbtree::TreeIterator<typename>::operator==(stappler::memory::rbtree::TreeIterator::self const&) const

## BRIEF

## CONTENT

Параметры:
* stappler::memory::rbtree::TreeIterator::self const&

Возвращает:
* bool

# ::stappler::memory::rbtree::TreeIterator<typename>::operator!=(stappler::memory::rbtree::TreeIterator::self const&) const

## BRIEF

## CONTENT

Параметры:
* stappler::memory::rbtree::TreeIterator::self const&

Возвращает:
* bool

# ::stappler::memory::rbtree::TreeIterator<typename>::_node

## BRIEF

## CONTENT

Тип: node_ptr


# ::stappler::memory::rbtree::TreeConstIterator<typename>

## BRIEF

## CONTENT

Параметры шаблона:
* typename Value


# ::stappler::memory::rbtree::TreeConstIterator<typename>::iterator_category

## BRIEF

## CONTENT


# ::stappler::memory::rbtree::TreeConstIterator<typename>::node_type

## BRIEF

## CONTENT


# ::stappler::memory::rbtree::TreeConstIterator<typename>::value_type

## BRIEF

## CONTENT


# ::stappler::memory::rbtree::TreeConstIterator<typename>::reference

## BRIEF

## CONTENT


# ::stappler::memory::rbtree::TreeConstIterator<typename>::pointer

## BRIEF

## CONTENT


# ::stappler::memory::rbtree::TreeConstIterator<typename>::iterator

## BRIEF

## CONTENT


# ::stappler::memory::rbtree::TreeConstIterator<typename>::difference_type

## BRIEF

## CONTENT


# ::stappler::memory::rbtree::TreeConstIterator<typename>::self

## BRIEF

## CONTENT


# ::stappler::memory::rbtree::TreeConstIterator<typename>::node_ptr

## BRIEF

## CONTENT


# ::stappler::memory::rbtree::TreeConstIterator<typename>::link_ptr

## BRIEF

## CONTENT


# ::stappler::memory::rbtree::TreeConstIterator<typename>::TreeConstIterator()

## BRIEF

## CONTENT


# ::stappler::memory::rbtree::TreeConstIterator<typename>::TreeConstIterator(stappler::memory::rbtree::TreeConstIterator::node_ptr)

## BRIEF

## CONTENT

Параметры:
* stappler::memory::rbtree::TreeConstIterator::node_ptr


# ::stappler::memory::rbtree::TreeConstIterator<typename>::TreeConstIterator(stappler::memory::rbtree::TreeConstIterator::iterator const&)

## BRIEF

## CONTENT

Параметры:
* stappler::memory::rbtree::TreeConstIterator::iterator const&


# ::stappler::memory::rbtree::TreeConstIterator<typename>::constcast() const

## BRIEF

## CONTENT

Возвращает:
* iterator

# ::stappler::memory::rbtree::TreeConstIterator<typename>::operator*() const

## BRIEF

## CONTENT

Возвращает:
* reference

# ::stappler::memory::rbtree::TreeConstIterator<typename>::operator->() const

## BRIEF

## CONTENT

Возвращает:
* pointer

# ::stappler::memory::rbtree::TreeConstIterator<typename>::operator++()

## BRIEF

## CONTENT

Возвращает:
* self&

# ::stappler::memory::rbtree::TreeConstIterator<typename>::operator++(int)

## BRIEF

## CONTENT

Параметры:
* int

Возвращает:
* self

# ::stappler::memory::rbtree::TreeConstIterator<typename>::operator--()

## BRIEF

## CONTENT

Возвращает:
* self&

# ::stappler::memory::rbtree::TreeConstIterator<typename>::operator--(int)

## BRIEF

## CONTENT

Параметры:
* int

Возвращает:
* self

# ::stappler::memory::rbtree::TreeConstIterator<typename>::operator==(stappler::memory::rbtree::TreeConstIterator::self const&) const

## BRIEF

## CONTENT

Параметры:
* stappler::memory::rbtree::TreeConstIterator::self const&

Возвращает:
* bool

# ::stappler::memory::rbtree::TreeConstIterator<typename>::operator!=(stappler::memory::rbtree::TreeConstIterator::self const&) const

## BRIEF

## CONTENT

Параметры:
* stappler::memory::rbtree::TreeConstIterator::self const&

Возвращает:
* bool

# ::stappler::memory::rbtree::TreeConstIterator<typename>::_node

## BRIEF

## CONTENT

Тип: node_ptr


# ::stappler::memory::rbtree::operator==<typename>(TreeIterator<Value> const&,TreeConstIterator<Value> const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Value

Параметры:
* TreeIterator<Value> const&
* TreeConstIterator<Value> const&

Возвращает:
* bool

# ::stappler::memory::rbtree::operator!=<typename>(TreeIterator<Value> const&,TreeConstIterator<Value> const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Value

Параметры:
* TreeIterator<Value> const&
* TreeConstIterator<Value> const&

Возвращает:
* bool

# ::stappler::memory::rbtree::TreeKeyExtractor<Key,Key>::TreeKeyExtractor<Key,Key>

## BRIEF

## CONTENT

Параметры шаблона:
* typename Key


# ::stappler::memory::rbtree::TreeKeyExtractor<Key,Key>::extract(Key const&)

## BRIEF

## CONTENT

Параметры:
* Key const&

Возвращает:
* Key const&

# ::stappler::memory::rbtree::TreeKeyExtractor<Key,Key>::construct<typename,typename>(A&,Node<Key>*,Key const&,Args &&...)

## BRIEF

## CONTENT

Параметры шаблона:
* typename A
* typename Args

Параметры:
* A&
* Node<Key>*
* Key const&
* Args &&...


# ::stappler::memory::rbtree::TreeKeyExtractor<Key,Key>::construct<typename,typename>(A&,Node<Key>*,Key&&,Args &&...)

## BRIEF

## CONTENT

Параметры шаблона:
* typename A
* typename Args

Параметры:
* A&
* Node<Key>*
* Key&&
* Args &&...


# ::stappler::memory::rbtree::TreeKeyExtractor<Key,Pair<Key,Value>>::TreeKeyExtractor<Key,Pair<Key,Value>>

## BRIEF

## CONTENT

Параметры шаблона:
* typename Key
* typename Value


# ::stappler::memory::rbtree::TreeKeyExtractor<Key,Pair<Key,Value>>::extract(Pair<Key, Value> const&)

## BRIEF

## CONTENT

Параметры:
* Pair<Key, Value> const&

Возвращает:
* Key const&

# ::stappler::memory::rbtree::TreeKeyExtractor<Key,Pair<Key,Value>>::construct<typename,typename>(A&,Node<Pair<Key, Value>>*,Key const&,Args &&...)

## BRIEF

## CONTENT

Параметры шаблона:
* typename A
* typename Args

Параметры:
* A&
* Node<Pair<Key, Value>>*
* Key const&
* Args &&...


# ::stappler::memory::rbtree::TreeKeyExtractor<Key,Pair<Key,Value>>::construct<typename,typename>(A&,Node<Pair<Key, Value>>*,Key&&,Args &&...)

## BRIEF

## CONTENT

Параметры шаблона:
* typename A
* typename Args

Параметры:
* A&
* Node<Pair<Key, Value>>*
* Key&&
* Args &&...


# ::stappler::memory::rbtree::TreeKeyExtractor<Key,Pair<constKey,Value>>::TreeKeyExtractor<Key,Pair<constKey,Value>>

## BRIEF

## CONTENT

Параметры шаблона:
* typename Key
* typename Value


# ::stappler::memory::rbtree::TreeKeyExtractor<Key,Pair<constKey,Value>>::extract(Pair<const Key, Value> const&)

## BRIEF

## CONTENT

Параметры:
* Pair<const Key, Value> const&

Возвращает:
* Key const&

# ::stappler::memory::rbtree::TreeKeyExtractor<Key,Pair<constKey,Value>>::construct<typename,typename>(A&,Node<Pair<const Key, Value>>*,Key const&,Args &&...)

## BRIEF

## CONTENT

Параметры шаблона:
* typename A
* typename Args

Параметры:
* A&
* Node<Pair<const Key, Value>>*
* Key const&
* Args &&...


# ::stappler::memory::rbtree::TreeKeyExtractor<Key,Pair<constKey,Value>>::construct<typename,typename>(A&,Node<Pair<const Key, Value>>*,Key&&,Args &&...)

## BRIEF

## CONTENT

Параметры шаблона:
* typename A
* typename Args

Параметры:
* A&
* Node<Pair<const Key, Value>>*
* Key&&
* Args &&...


# ::stappler::memory::rbtree::TreeComparator<typename,typename,typename>

## BRIEF

## CONTENT

Параметры шаблона:
* typename Key
* typename Comp
* typename Transparent


# ::stappler::memory::rbtree::TreeComparator<typename,typename,typename>::compare(Key const&,Key const&,Comp const&)

## BRIEF

## CONTENT

Параметры:
* Key const&
* Key const&
* Comp const&

Возвращает:
* bool

# ::stappler::memory::rbtree::TreeComparator<typename,typename,typename>::compare<typename,typename>(A const&,B const&,Comp const&,typename Comp::is_transparent*)

## BRIEF

## CONTENT

Параметры шаблона:
* typename A
* typename B

Параметры:
* A const&
* B const&
* Comp const&
* typename Comp::is_transparent*

Возвращает:
* bool

# ::stappler::memory::rbtree::TreeComparator<Key,Comp,typenameComp::is_transparent>::TreeComparator<Key,Comp,typenameComp::is_transparent>

## BRIEF

## CONTENT

Параметры шаблона:
* typename Key
* typename Comp


# ::stappler::memory::rbtree::TreeComparator<Key,Comp,typenameComp::is_transparent>::compare<typename,typename>(A const&,B const&,Comp const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename A
* typename B

Параметры:
* A const&
* B const&
* Comp const&

Возвращает:
* bool

# ::stappler::memory::rbtree::Tree<typename,typename,typename>

## BRIEF

## CONTENT

Параметры шаблона:
* typename Key
* typename Value
* typename Comp

Базовые классы:
* AllocPool


# ::stappler::memory::rbtree::Tree<typename,typename,typename>::value_type

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::rbtree::Tree<typename,typename,typename>::node_type

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::rbtree::Tree<typename,typename,typename>::node_ptr

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::rbtree::Tree<typename,typename,typename>::base_type

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::rbtree::Tree<typename,typename,typename>::const_node_ptr

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::rbtree::Tree<typename,typename,typename>::node_allocator_type

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::rbtree::Tree<typename,typename,typename>::value_allocator_type

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::rbtree::Tree<typename,typename,typename>::comparator_type

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::rbtree::Tree<typename,typename,typename>::iterator

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::rbtree::Tree<typename,typename,typename>::const_iterator

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::rbtree::Tree<typename,typename,typename>::reverse_iterator

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::rbtree::Tree<typename,typename,typename>::const_reverse_iterator

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::rbtree::Tree<typename,typename,typename>::Tree(Comp const&,stappler::memory::rbtree::Tree::value_allocator_type const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Comp const&
* stappler::memory::rbtree::Tree::value_allocator_type const&


# ::stappler::memory::rbtree::Tree<typename,typename,typename>::Tree(const Tree<Key, Value, Comp>&,stappler::memory::rbtree::Tree::value_allocator_type const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* const Tree<Key, Value, Comp>&
* stappler::memory::rbtree::Tree::value_allocator_type const&


# ::stappler::memory::rbtree::Tree<typename,typename,typename>::Tree(Tree<Key, Value, Comp>&&,stappler::memory::rbtree::Tree::value_allocator_type const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Tree<Key, Value, Comp>&&
* stappler::memory::rbtree::Tree::value_allocator_type const&


# ::stappler::memory::rbtree::Tree<typename,typename,typename>::operator=(const Tree<Key, Value, Comp>&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* const Tree<Key, Value, Comp>&

Возвращает:
* Tree<Key, Value, Comp>&

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::operator=(Tree<Key, Value, Comp>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Tree<Key, Value, Comp>&&

Возвращает:
* Tree<Key, Value, Comp>&

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::~Tree()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::rbtree::Tree<typename,typename,typename>::get_allocator() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* value_allocator_type&

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::emplace<typename>(Args &&...)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename Args

Параметры:
* Args &&...

Возвращает:
* Pair<stappler::memory::rbtree::Tree::iterator, bool>

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::emplace_hint<typename>(stappler::memory::rbtree::Tree::const_iterator,Args &&...)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename Args

Параметры:
* stappler::memory::rbtree::Tree::const_iterator
* Args &&...

Возвращает:
* iterator

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::try_emplace<typename,typename>(K&&,Args &&...)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename K
* typename Args

Параметры:
* K&&
* Args &&...

Возвращает:
* Pair<stappler::memory::rbtree::Tree::iterator, bool>

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::try_emplace<typename,typename>(stappler::memory::rbtree::Tree::const_iterator,K&&,Args &&...)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename K
* typename Args

Параметры:
* stappler::memory::rbtree::Tree::const_iterator
* K&&
* Args &&...

Возвращает:
* iterator

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::insert_or_assign<typename,class>(K&&,M&&)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename K
* class M

Параметры:
* K&&
* M&&

Возвращает:
* Pair<stappler::memory::rbtree::Tree::iterator, bool>

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::insert_or_assign<typename,class>(stappler::memory::rbtree::Tree::const_iterator,K&&,M&&)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename K
* class M

Параметры:
* stappler::memory::rbtree::Tree::const_iterator
* K&&
* M&&

Возвращает:
* iterator

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::erase(stappler::memory::rbtree::Tree::const_iterator)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::memory::rbtree::Tree::const_iterator

Возвращает:
* iterator

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::erase(stappler::memory::rbtree::Tree::const_iterator,stappler::memory::rbtree::Tree::const_iterator)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::memory::rbtree::Tree::const_iterator
* stappler::memory::rbtree::Tree::const_iterator

Возвращает:
* iterator

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::erase_unique(Key const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Key const&

Возвращает:
* size_t

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::begin()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* iterator

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::end()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* iterator

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::begin() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* const_iterator

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::end() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* const_iterator

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::rbegin()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* reverse_iterator

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::rend()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* reverse_iterator

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::rbegin() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* const_reverse_iterator

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::rend() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* const_reverse_iterator

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::cbegin() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* const_iterator

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::cend() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* const_iterator

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::crbegin() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* const_reverse_iterator

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::crend() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* const_reverse_iterator

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::clear()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::rbtree::Tree<typename,typename,typename>::shrink_to_fit()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::rbtree::Tree<typename,typename,typename>::capacity() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* size_t

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::size() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* size_t

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::empty() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::set_memory_persistent(bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* bool


# ::stappler::memory::rbtree::Tree<typename,typename,typename>::memory_persistent() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::swap(Tree<Key, Value, Comp>&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Tree<Key, Value, Comp>&


# ::stappler::memory::rbtree::Tree<typename,typename,typename>::find<class>(K const&)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class K

Параметры:
* K const&

Возвращает:
* iterator

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::find<class>(K const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class K

Параметры:
* K const&

Возвращает:
* const_iterator

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::lower_bound<class>(K const&)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class K

Параметры:
* K const&

Возвращает:
* iterator

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::lower_bound<class>(K const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class K

Параметры:
* K const&

Возвращает:
* const_iterator

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::upper_bound<class>(K const&)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class K

Параметры:
* K const&

Возвращает:
* iterator

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::upper_bound<class>(K const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class K

Параметры:
* K const&

Возвращает:
* const_iterator

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::equal_range<class>(K const&)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class K

Параметры:
* K const&

Возвращает:
* Pair<stappler::memory::rbtree::Tree::iterator, stappler::memory::rbtree::Tree::iterator>

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::equal_range<class>(K const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class K

Параметры:
* K const&

Возвращает:
* Pair<stappler::memory::rbtree::Tree::const_iterator, stappler::memory::rbtree::Tree::const_iterator>

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::count<class>(K const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class K

Параметры:
* K const&

Возвращает:
* size_t

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::count_unique<class>(K const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class K

Параметры:
* K const&

Возвращает:
* size_t

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::reserve(size_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* size_t


# ::stappler::memory::rbtree::Tree<typename,typename,typename>::_header

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::memory::rbtree::NodeBase


# ::stappler::memory::rbtree::Tree<typename,typename,typename>::_comp

## BRIEF

## CONTENT

Доступ: protected

Тип: comparator_type


# ::stappler::memory::rbtree::Tree<typename,typename,typename>::_allocator

## BRIEF

## CONTENT

Доступ: protected

Тип: value_allocator_type


# ::stappler::memory::rbtree::Tree<typename,typename,typename>::_size

## BRIEF

## CONTENT

Доступ: protected

Тип: size_t


# ::stappler::memory::rbtree::Tree<typename,typename,typename>::_tmp

## BRIEF

## CONTENT

Доступ: protected

Тип: Node<Value>*


# ::stappler::memory::rbtree::Tree<typename,typename,typename>::root()

## BRIEF

## CONTENT

Доступ: protected

Возвращает:
* node_ptr

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::root() const

## BRIEF

## CONTENT

Доступ: protected

Возвращает:
* const_node_ptr

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::setroot(stappler::memory::rbtree::Tree::base_type)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::memory::rbtree::Tree::base_type


# ::stappler::memory::rbtree::Tree<typename,typename,typename>::left()

## BRIEF

## CONTENT

Доступ: protected

Возвращает:
* node_ptr

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::left() const

## BRIEF

## CONTENT

Доступ: protected

Возвращает:
* const_node_ptr

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::setleft(stappler::memory::rbtree::Tree::base_type)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::memory::rbtree::Tree::base_type


# ::stappler::memory::rbtree::Tree<typename,typename,typename>::right()

## BRIEF

## CONTENT

Доступ: protected

Возвращает:
* node_ptr

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::right() const

## BRIEF

## CONTENT

Доступ: protected

Возвращает:
* const_node_ptr

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::setright(stappler::memory::rbtree::Tree::base_type)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::memory::rbtree::Tree::base_type


# ::stappler::memory::rbtree::Tree<typename,typename,typename>::extract(Value const&) const

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* Value const&

Возвращает:
* Key const&

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::extract(Storage<Value> const&) const

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* Storage<Value> const&

Возвращает:
* Key const&

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::extract(stappler::memory::rbtree::NodeBase const*) const

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::memory::rbtree::NodeBase const*

Возвращает:
* Key const&

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::compareLtTransparent<typename,typename>(A const&,B const&) const

## BRIEF

## CONTENT

Доступ: protected

Параметры шаблона:
* typename A
* typename B

Параметры:
* A const&
* B const&

Возвращает:
* bool

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::compareLtKey(Key const&,Key const&) const

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* Key const&
* Key const&

Возвращает:
* bool

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::compareEqKey(Key const&,Key const&) const

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* Key const&
* Key const&

Возвращает:
* bool

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::compareEqValue(Value const&,Value const&) const

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* Value const&
* Value const&

Возвращает:
* bool

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::compareLtValue(Value const&,Value const&) const

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* Value const&
* Value const&

Возвращает:
* bool

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::InsertData

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::memory::rbtree::Tree<typename,typename,typename>::InsertData::key

## BRIEF

## CONTENT

Тип: Key const*


# ::stappler::memory::rbtree::Tree<typename,typename,typename>::InsertData::val

## BRIEF

## CONTENT

Тип: Node<Value>*


# ::stappler::memory::rbtree::Tree<typename,typename,typename>::InsertData::current

## BRIEF

## CONTENT

Тип: stappler::memory::rbtree::NodeBase*


# ::stappler::memory::rbtree::Tree<typename,typename,typename>::InsertData::parent

## BRIEF

## CONTENT

Тип: stappler::memory::rbtree::NodeBase*


# ::stappler::memory::rbtree::Tree<typename,typename,typename>::InsertData::isLeft

## BRIEF

## CONTENT

Тип: bool


# ::stappler::memory::rbtree::Tree<typename,typename,typename>::constructNode<typename>(Args &&...)

## BRIEF

## CONTENT

Доступ: protected

Параметры шаблона:
* typename Args

Параметры:
* Args &&...

Возвращает:
* stappler::memory::rbtree::Tree::InsertData

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::constructKey(Key const&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* Key const&

Возвращает:
* stappler::memory::rbtree::Tree::InsertData

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::constructKey(Key&&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* Key&&

Возвращает:
* stappler::memory::rbtree::Tree::InsertData

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::constructEmplace<typename,typename>(K&&,Args &&...)

## BRIEF

## CONTENT

Доступ: protected

Параметры шаблона:
* typename K
* typename Args

Параметры:
* K&&
* Args &&...

Возвращает:
* Node<Value>*

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::constructAssign<typename>(Node<Value>*,M const&)

## BRIEF

## CONTENT

Доступ: protected

Параметры шаблона:
* typename M

Параметры:
* Node<Value>*
* M const&


# ::stappler::memory::rbtree::Tree<typename,typename,typename>::constructAssign<typename>(Node<Value>*,M&&)

## BRIEF

## CONTENT

Доступ: protected

Параметры шаблона:
* typename M

Параметры:
* Node<Value>*
* M&&


# ::stappler::memory::rbtree::Tree<typename,typename,typename>::getInsertPositionUnique_search(stappler::memory::rbtree::Tree::InsertData&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::memory::rbtree::Tree::InsertData&

Возвращает:
* bool

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::getInsertPosition_tryRoot(stappler::memory::rbtree::Tree::InsertData&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::memory::rbtree::Tree::InsertData&

Возвращает:
* bool

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::getInsertPositionUnique_tryHint(stappler::memory::rbtree::Tree::InsertData&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::memory::rbtree::Tree::InsertData&

Возвращает:
* bool

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::getInsertPositionUnique_tryLeft(stappler::memory::rbtree::Tree::InsertData&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::memory::rbtree::Tree::InsertData&

Возвращает:
* bool

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::getInsertPositionUnique_tryRight(stappler::memory::rbtree::Tree::InsertData&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::memory::rbtree::Tree::InsertData&

Возвращает:
* bool

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::getInsertPositionUnique(stappler::memory::rbtree::Tree::InsertData&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::memory::rbtree::Tree::InsertData&

Возвращает:
* bool

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::insertNodeUnique<typename>(Args &&...)

## BRIEF

## CONTENT

Доступ: protected

Параметры шаблона:
* typename Args

Параметры:
* Args &&...

Возвращает:
* Pair<Node<Value> *, bool>

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::insertNodeUniqueHint<typename>(stappler::memory::rbtree::Tree::const_iterator,Args &&...)

## BRIEF

## CONTENT

Доступ: protected

Параметры шаблона:
* typename Args

Параметры:
* stappler::memory::rbtree::Tree::const_iterator
* Args &&...

Возвращает:
* Node<Value>*

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::tryInsertNodeUnique<typename,typename>(K&&,Args &&...)

## BRIEF

## CONTENT

Доступ: protected

Параметры шаблона:
* typename K
* typename Args

Параметры:
* K&&
* Args &&...

Возвращает:
* Pair<Node<Value> *, bool>

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::tryInsertNodeUniqueHint<typename,typename>(stappler::memory::rbtree::Tree::const_iterator,K&&,Args &&...)

## BRIEF

## CONTENT

Доступ: protected

Параметры шаблона:
* typename K
* typename Args

Параметры:
* stappler::memory::rbtree::Tree::const_iterator
* K&&
* Args &&...

Возвращает:
* Node<Value>*

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::tryAssignNodeUnique<typename,typename>(K&&,M&&)

## BRIEF

## CONTENT

Доступ: protected

Параметры шаблона:
* typename K
* typename M

Параметры:
* K&&
* M&&

Возвращает:
* Pair<Node<Value> *, bool>

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::tryAssignNodeUniqueHint<typename,typename>(stappler::memory::rbtree::Tree::const_iterator,K&&,M&&)

## BRIEF

## CONTENT

Доступ: protected

Параметры шаблона:
* typename K
* typename M

Параметры:
* stappler::memory::rbtree::Tree::const_iterator
* K&&
* M&&

Возвращает:
* Node<Value>*

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::makeInsert(Node<Value>*,stappler::memory::rbtree::NodeBase*,bool)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* Node<Value>*
* stappler::memory::rbtree::NodeBase*
* bool

Возвращает:
* Node<Value>*

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::deleteNode(stappler::memory::rbtree::NodeBase*)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::memory::rbtree::NodeBase*


# ::stappler::memory::rbtree::Tree<typename,typename,typename>::clear_visit(Node<Value>*)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* Node<Value>*


# ::stappler::memory::rbtree::Tree<typename,typename,typename>::clone_visit(Node<Value> const*,Node<Value>*)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* Node<Value> const*
* Node<Value>*


# ::stappler::memory::rbtree::Tree<typename,typename,typename>::clone(const Tree<Key, Value, Comp>&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* const Tree<Key, Value, Comp>&


# ::stappler::memory::rbtree::Tree<typename,typename,typename>::find_impl<class>(K const&) const

## BRIEF

## CONTENT

Доступ: protected

Параметры шаблона:
* class K

Параметры:
* K const&

Возвращает:
* node_ptr

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::lower_bound_ptr<class>(K const&) const

## BRIEF

## CONTENT

Доступ: protected

Параметры шаблона:
* class K

Параметры:
* K const&

Возвращает:
* node_ptr

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::upper_bound_ptr<class>(K const&) const

## BRIEF

## CONTENT

Доступ: protected

Параметры шаблона:
* class K

Параметры:
* K const&

Возвращает:
* node_ptr

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::count_impl<class>(K const&) const

## BRIEF

## CONTENT

Доступ: protected

Параметры шаблона:
* class K

Параметры:
* K const&

Возвращает:
* size_t

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::destroyNode(Node<Value>*)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* Node<Value>*


# ::stappler::memory::rbtree::Tree<typename,typename,typename>::allocateNode()

## BRIEF

## CONTENT

Доступ: protected

Возвращает:
* Node<Value>*

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::allocateTmp(size_t)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* size_t


# ::stappler::memory::rbtree::Tree<typename,typename,typename>::releaseTmp()

## BRIEF

## CONTENT

Доступ: protected


# MEM_RBTREE_DEBUG

## BRIEF

## CONTENT
