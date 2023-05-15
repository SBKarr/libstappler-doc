Title: SPMemMap.h


# LIBSTAPPLER_COMMON_MEMORY_SPMEMMAP_H_

## BRIEF

## CONTENT


# ::stappler::memory::map<typename,typename,typename>

## BRIEF

## CONTENT

Параметры шаблона:
* typename Key
* typename Value
* typename Comp

Базовые классы:
* AllocPool


# ::stappler::memory::map<typename,typename,typename>::key_type

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::map<typename,typename,typename>::mapped_type

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::map<typename,typename,typename>::value_type

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::map<typename,typename,typename>::key_compare

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::map<typename,typename,typename>::allocator_type

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::map<typename,typename,typename>::pointer

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::map<typename,typename,typename>::const_pointer

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::map<typename,typename,typename>::reference

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::map<typename,typename,typename>::const_reference

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::map<typename,typename,typename>::tree_type

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::map<typename,typename,typename>::iterator

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::map<typename,typename,typename>::const_iterator

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::map<typename,typename,typename>::reverse_iterator

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::map<typename,typename,typename>::const_reverse_iterator

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::map<typename,typename,typename>::size_type

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::map<typename,typename,typename>::difference_type

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::map<typename,typename,typename>::map()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::map<typename,typename,typename>::map(Comp const&,stappler::memory::map::allocator_type const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Comp const&
* stappler::memory::map::allocator_type const&


# ::stappler::memory::map<typename,typename,typename>::map(stappler::memory::map::allocator_type const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::memory::map::allocator_type const&


# ::stappler::memory::map<typename,typename,typename>::map<class>(InputIterator,InputIterator,Comp const&,stappler::memory::map::allocator_type const&)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class InputIterator

Параметры:
* InputIterator
* InputIterator
* Comp const&
* stappler::memory::map::allocator_type const&


# ::stappler::memory::map<typename,typename,typename>::map<class>(InputIterator,InputIterator,stappler::memory::map::allocator_type const&)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class InputIterator

Параметры:
* InputIterator
* InputIterator
* stappler::memory::map::allocator_type const&


# ::stappler::memory::map<typename,typename,typename>::map(const map<Key, Value, Comp>&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* const map<Key, Value, Comp>&


# ::stappler::memory::map<typename,typename,typename>::map(const map<Key, Value, Comp>&,stappler::memory::map::allocator_type const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* const map<Key, Value, Comp>&
* stappler::memory::map::allocator_type const&


# ::stappler::memory::map<typename,typename,typename>::map(map<Key, Value, Comp>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* map<Key, Value, Comp>&&


# ::stappler::memory::map<typename,typename,typename>::map(map<Key, Value, Comp>&&,stappler::memory::map::allocator_type const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* map<Key, Value, Comp>&&
* stappler::memory::map::allocator_type const&


# ::stappler::memory::map<typename,typename,typename>::map(InitializerList<stappler::memory::map::value_type>,Comp const&,stappler::memory::map::allocator_type const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* InitializerList<stappler::memory::map::value_type>
* Comp const&
* stappler::memory::map::allocator_type const&


# ::stappler::memory::map<typename,typename,typename>::map(InitializerList<stappler::memory::map::value_type>,stappler::memory::map::allocator_type const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* InitializerList<stappler::memory::map::value_type>
* stappler::memory::map::allocator_type const&


# ::stappler::memory::map<typename,typename,typename>::operator=(const map<Key, Value, Comp>&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* const map<Key, Value, Comp>&

Возвращает:
* map<Key, Value, Comp>&

# ::stappler::memory::map<typename,typename,typename>::operator=(map<Key, Value, Comp>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* map<Key, Value, Comp>&&

Возвращает:
* map<Key, Value, Comp>&

# ::stappler::memory::map<typename,typename,typename>::operator=(InitializerList<stappler::memory::map::value_type>)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* InitializerList<stappler::memory::map::value_type>

Возвращает:
* map<Key, Value, Comp>&

# ::stappler::memory::map<typename,typename,typename>::get_allocator() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* allocator_type

# ::stappler::memory::map<typename,typename,typename>::empty() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::memory::map<typename,typename,typename>::size() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* size_t

# ::stappler::memory::map<typename,typename,typename>::capacity() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* size_t

# ::stappler::memory::map<typename,typename,typename>::clear()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::map<typename,typename,typename>::shrink_to_fit()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::map<typename,typename,typename>::set_memory_persistent(bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* bool


# ::stappler::memory::map<typename,typename,typename>::memory_persistent() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::memory::map<typename,typename,typename>::at(Key const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Key const&

Возвращает:
* Value&

# ::stappler::memory::map<typename,typename,typename>::at(Key const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Key const&

Возвращает:
* Value const&

# ::stappler::memory::map<typename,typename,typename>::operator[](Key const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Key const&

Возвращает:
* Value&

# ::stappler::memory::map<typename,typename,typename>::operator[](Key&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Key&&

Возвращает:
* Value&

# ::stappler::memory::map<typename,typename,typename>::begin()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* iterator

# ::stappler::memory::map<typename,typename,typename>::end()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* iterator

# ::stappler::memory::map<typename,typename,typename>::begin() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* const_iterator

# ::stappler::memory::map<typename,typename,typename>::end() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* const_iterator

# ::stappler::memory::map<typename,typename,typename>::cbegin() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* const_iterator

# ::stappler::memory::map<typename,typename,typename>::cend() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* const_iterator

# ::stappler::memory::map<typename,typename,typename>::rbegin()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* reverse_iterator

# ::stappler::memory::map<typename,typename,typename>::rend()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* reverse_iterator

# ::stappler::memory::map<typename,typename,typename>::rbegin() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* const_reverse_iterator

# ::stappler::memory::map<typename,typename,typename>::rend() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* const_reverse_iterator

# ::stappler::memory::map<typename,typename,typename>::crbegin() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* const_reverse_iterator

# ::stappler::memory::map<typename,typename,typename>::crend() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* const_reverse_iterator

# ::stappler::memory::map<typename,typename,typename>::swap(map<Key, Value, Comp>&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* map<Key, Value, Comp>&


# ::stappler::memory::map<typename,typename,typename>::insert<class>(P&&)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class P

Параметры:
* P&&

Возвращает:
* Pair<stappler::memory::map::iterator, bool>

# ::stappler::memory::map<typename,typename,typename>::insert<class>(stappler::memory::map::const_iterator,P&&)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class P

Параметры:
* stappler::memory::map::const_iterator
* P&&

Возвращает:
* iterator

# ::stappler::memory::map<typename,typename,typename>::insert<class>(InputIt,InputIt)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class InputIt

Параметры:
* InputIt
* InputIt


# ::stappler::memory::map<typename,typename,typename>::insert(InitializerList<stappler::memory::map::value_type>)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* InitializerList<stappler::memory::map::value_type>


# ::stappler::memory::map<typename,typename,typename>::insert_or_assign<class>(stappler::memory::map::key_type const&,M&&)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class M

Параметры:
* stappler::memory::map::key_type const&
* M&&

Возвращает:
* Pair<stappler::memory::map::iterator, bool>

# ::stappler::memory::map<typename,typename,typename>::insert_or_assign<class>(stappler::memory::map::key_type&&,M&&)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class M

Параметры:
* stappler::memory::map::key_type&&
* M&&

Возвращает:
* Pair<stappler::memory::map::iterator, bool>

# ::stappler::memory::map<typename,typename,typename>::insert_or_assign<class>(stappler::memory::map::const_iterator,stappler::memory::map::key_type const&,M&&)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class M

Параметры:
* stappler::memory::map::const_iterator
* stappler::memory::map::key_type const&
* M&&

Возвращает:
* iterator

# ::stappler::memory::map<typename,typename,typename>::insert_or_assign<class>(stappler::memory::map::const_iterator,stappler::memory::map::key_type&&,M&&)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class M

Параметры:
* stappler::memory::map::const_iterator
* stappler::memory::map::key_type&&
* M&&

Возвращает:
* iterator

# ::stappler::memory::map<typename,typename,typename>::emplace<class>(Args &&...)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class Args

Параметры:
* Args &&...

Возвращает:
* Pair<stappler::memory::map::iterator, bool>

# ::stappler::memory::map<typename,typename,typename>::emplace_hint<class>(stappler::memory::map::const_iterator,Args &&...)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class Args

Параметры:
* stappler::memory::map::const_iterator
* Args &&...

Возвращает:
* iterator

# ::stappler::memory::map<typename,typename,typename>::try_emplace<class>(stappler::memory::map::key_type const&,Args &&...)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class Args

Параметры:
* stappler::memory::map::key_type const&
* Args &&...

Возвращает:
* Pair<stappler::memory::map::iterator, bool>

# ::stappler::memory::map<typename,typename,typename>::try_emplace<class>(stappler::memory::map::key_type&&,Args &&...)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class Args

Параметры:
* stappler::memory::map::key_type&&
* Args &&...

Возвращает:
* Pair<stappler::memory::map::iterator, bool>

# ::stappler::memory::map<typename,typename,typename>::try_emplace<class>(stappler::memory::map::const_iterator,stappler::memory::map::key_type const&,Args &&...)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class Args

Параметры:
* stappler::memory::map::const_iterator
* stappler::memory::map::key_type const&
* Args &&...

Возвращает:
* iterator

# ::stappler::memory::map<typename,typename,typename>::try_emplace<class>(stappler::memory::map::const_iterator,stappler::memory::map::key_type&&,Args &&...)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class Args

Параметры:
* stappler::memory::map::const_iterator
* stappler::memory::map::key_type&&
* Args &&...

Возвращает:
* iterator

# ::stappler::memory::map<typename,typename,typename>::erase(stappler::memory::map::const_iterator)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::memory::map::const_iterator

Возвращает:
* iterator

# ::stappler::memory::map<typename,typename,typename>::erase(stappler::memory::map::const_iterator,stappler::memory::map::const_iterator)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::memory::map::const_iterator
* stappler::memory::map::const_iterator

Возвращает:
* iterator

# ::stappler::memory::map<typename,typename,typename>::erase(stappler::memory::map::key_type const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::memory::map::key_type const&

Возвращает:
* size_type

# ::stappler::memory::map<typename,typename,typename>::find<class>(K const&)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class K

Параметры:
* K const&

Возвращает:
* iterator

# ::stappler::memory::map<typename,typename,typename>::find<class>(K const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class K

Параметры:
* K const&

Возвращает:
* const_iterator

# ::stappler::memory::map<typename,typename,typename>::lower_bound<class>(K const&)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class K

Параметры:
* K const&

Возвращает:
* iterator

# ::stappler::memory::map<typename,typename,typename>::lower_bound<class>(K const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class K

Параметры:
* K const&

Возвращает:
* const_iterator

# ::stappler::memory::map<typename,typename,typename>::upper_bound<class>(K const&)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class K

Параметры:
* K const&

Возвращает:
* iterator

# ::stappler::memory::map<typename,typename,typename>::upper_bound<class>(K const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class K

Параметры:
* K const&

Возвращает:
* const_iterator

# ::stappler::memory::map<typename,typename,typename>::equal_range<class>(K const&)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class K

Параметры:
* K const&

Возвращает:
* Pair<stappler::memory::map::iterator, stappler::memory::map::iterator>

# ::stappler::memory::map<typename,typename,typename>::equal_range<class>(K const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class K

Параметры:
* K const&

Возвращает:
* Pair<stappler::memory::map::const_iterator, stappler::memory::map::const_iterator>

# ::stappler::memory::map<typename,typename,typename>::count<class>(K const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class K

Параметры:
* K const&

Возвращает:
* size_t

# ::stappler::memory::map<typename,typename,typename>::reserve(size_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* size_t


# ::stappler::memory::map<typename,typename,typename>::do_insert<class,class>(Pair<A, B> const&)

## BRIEF

## CONTENT

Доступ: protected

Параметры шаблона:
* class A
* class B

Параметры:
* Pair<A, B> const&

Возвращает:
* Pair<stappler::memory::map::iterator, bool>

# ::stappler::memory::map<typename,typename,typename>::do_insert<class,class>(Pair<A, B>&&)

## BRIEF

## CONTENT

Доступ: protected

Параметры шаблона:
* class A
* class B

Параметры:
* Pair<A, B>&&

Возвращает:
* Pair<stappler::memory::map::iterator, bool>

# ::stappler::memory::map<typename,typename,typename>::do_insert<class,class>(stappler::memory::map::const_iterator,Pair<A, B> const&)

## BRIEF

## CONTENT

Доступ: protected

Параметры шаблона:
* class A
* class B

Параметры:
* stappler::memory::map::const_iterator
* Pair<A, B> const&

Возвращает:
* iterator

# ::stappler::memory::map<typename,typename,typename>::do_insert<class,class>(stappler::memory::map::const_iterator,Pair<A, B>&&)

## BRIEF

## CONTENT

Доступ: protected

Параметры шаблона:
* class A
* class B

Параметры:
* stappler::memory::map::const_iterator
* Pair<A, B>&&

Возвращает:
* iterator

# ::stappler::memory::map<typename,typename,typename>::do_assign<class,class>(stappler::memory::map::iterator,T&&,Args &&...)

## BRIEF

## CONTENT

Доступ: protected

Параметры шаблона:
* class T
* class Args

Параметры:
* stappler::memory::map::iterator
* T&&
* Args &&...


# ::stappler::memory::map<typename,typename,typename>::_tree

## BRIEF

## CONTENT

Доступ: protected

Тип: rbtree::Tree<Key, Pair<const Key, Value>, Comp>


# ::stappler::memory::operator==<typename,typename,typename>(map<Key, Value, Comp> const&,map<Key, Value, Comp> const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Key
* typename Value
* typename Comp

Параметры:
* map<Key, Value, Comp> const&
* map<Key, Value, Comp> const&

Возвращает:
* bool

# ::stappler::memory::operator<<typename,typename,typename>(map<Key, Value, Comp> const&,map<Key, Value, Comp> const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Key
* typename Value
* typename Comp

Параметры:
* map<Key, Value, Comp> const&
* map<Key, Value, Comp> const&

Возвращает:
* bool

# ::stappler::memory::operator!=<typename,typename,typename>(map<Key, Value, Comp> const&,map<Key, Value, Comp> const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Key
* typename Value
* typename Comp

Параметры:
* map<Key, Value, Comp> const&
* map<Key, Value, Comp> const&

Возвращает:
* bool

# ::stappler::memory::operator><typename,typename,typename>(map<Key, Value, Comp> const&,map<Key, Value, Comp> const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Key
* typename Value
* typename Comp

Параметры:
* map<Key, Value, Comp> const&
* map<Key, Value, Comp> const&

Возвращает:
* bool

# ::stappler::memory::operator<=<typename,typename,typename>(map<Key, Value, Comp> const&,map<Key, Value, Comp> const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Key
* typename Value
* typename Comp

Параметры:
* map<Key, Value, Comp> const&
* map<Key, Value, Comp> const&

Возвращает:
* bool

# ::stappler::memory::operator>=<typename,typename,typename>(map<Key, Value, Comp> const&,map<Key, Value, Comp> const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Key
* typename Value
* typename Comp

Параметры:
* map<Key, Value, Comp> const&
* map<Key, Value, Comp> const&

Возвращает:
* bool