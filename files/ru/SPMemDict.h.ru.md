Title: SPMemDict.h


# LIBSTAPPLER_COMMON_MEMORY_SPMEMDICT_H_

## BRIEF

## CONTENT


# ::stappler::memory::dict<typename,typename,typename>

## BRIEF

## CONTENT

Параметры шаблона:
* typename Key
* typename Value
* typename Comp

Базовые классы:
* AllocPool


# ::stappler::memory::dict<typename,typename,typename>::key_type

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::dict<typename,typename,typename>::mapped_type

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::dict<typename,typename,typename>::value_type

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::dict<typename,typename,typename>::key_compare

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::dict<typename,typename,typename>::comparator_type

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::dict<typename,typename,typename>::allocator_type

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::dict<typename,typename,typename>::pointer

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::dict<typename,typename,typename>::const_pointer

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::dict<typename,typename,typename>::reference

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::dict<typename,typename,typename>::const_reference

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::dict<typename,typename,typename>::vector_type

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::dict<typename,typename,typename>::iterator

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::dict<typename,typename,typename>::const_iterator

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::dict<typename,typename,typename>::reverse_iterator

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::dict<typename,typename,typename>::const_reverse_iterator

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::dict<typename,typename,typename>::size_type

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::dict<typename,typename,typename>::difference_type

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::dict<typename,typename,typename>::value_comparator<typename>

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename T


# ::stappler::memory::dict<typename,typename,typename>::value_comparator<typename>::operator()(stappler::memory::dict::value_type const&,T const&)

## BRIEF

## CONTENT

Параметры:
* stappler::memory::dict::value_type const&
* T const&

Возвращает:
* bool

# ::stappler::memory::dict<typename,typename,typename>::value_comparator<typename>::operator()(T const&,stappler::memory::dict::value_type const&)

## BRIEF

## CONTENT

Параметры:
* T const&
* stappler::memory::dict::value_type const&

Возвращает:
* bool

# ::stappler::memory::dict<typename,typename,typename>::value_comparator<typename>::operator()(stappler::memory::dict::value_type const&,stappler::memory::dict::value_type const&)

## BRIEF

## CONTENT

Параметры:
* stappler::memory::dict::value_type const&
* stappler::memory::dict::value_type const&

Возвращает:
* bool

# ::stappler::memory::dict<typename,typename,typename>::value_comparator<typename>::comp

## BRIEF

## CONTENT

Тип: stappler::memory::dict::comparator_type


# ::stappler::memory::dict<typename,typename,typename>::dict()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::dict<typename,typename,typename>::dict(Comp const&,stappler::memory::dict::allocator_type const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Comp const&
* stappler::memory::dict::allocator_type const&


# ::stappler::memory::dict<typename,typename,typename>::dict(stappler::memory::dict::allocator_type const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::memory::dict::allocator_type const&


# ::stappler::memory::dict<typename,typename,typename>::dict<class>(InputIterator,InputIterator,Comp const&,stappler::memory::dict::allocator_type const&)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class InputIterator

Параметры:
* InputIterator
* InputIterator
* Comp const&
* stappler::memory::dict::allocator_type const&


# ::stappler::memory::dict<typename,typename,typename>::dict<class>(InputIterator,InputIterator,stappler::memory::dict::allocator_type const&)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class InputIterator

Параметры:
* InputIterator
* InputIterator
* stappler::memory::dict::allocator_type const&


# ::stappler::memory::dict<typename,typename,typename>::dict(const dict<Key, Value, Comp>&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* const dict<Key, Value, Comp>&


# ::stappler::memory::dict<typename,typename,typename>::dict(const dict<Key, Value, Comp>&,stappler::memory::dict::allocator_type const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* const dict<Key, Value, Comp>&
* stappler::memory::dict::allocator_type const&


# ::stappler::memory::dict<typename,typename,typename>::dict(dict<Key, Value, Comp>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* dict<Key, Value, Comp>&&


# ::stappler::memory::dict<typename,typename,typename>::dict(dict<Key, Value, Comp>&&,stappler::memory::dict::allocator_type const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* dict<Key, Value, Comp>&&
* stappler::memory::dict::allocator_type const&


# ::stappler::memory::dict<typename,typename,typename>::dict(InitializerList<stappler::memory::dict::value_type>,Comp const&,stappler::memory::dict::allocator_type const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* InitializerList<stappler::memory::dict::value_type>
* Comp const&
* stappler::memory::dict::allocator_type const&


# ::stappler::memory::dict<typename,typename,typename>::dict(InitializerList<stappler::memory::dict::value_type>,stappler::memory::dict::allocator_type const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* InitializerList<stappler::memory::dict::value_type>
* stappler::memory::dict::allocator_type const&


# ::stappler::memory::dict<typename,typename,typename>::operator=(const dict<Key, Value, Comp>&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* const dict<Key, Value, Comp>&

Возвращает:
* dict<Key, Value, Comp>&

# ::stappler::memory::dict<typename,typename,typename>::operator=(dict<Key, Value, Comp>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* dict<Key, Value, Comp>&&

Возвращает:
* dict<Key, Value, Comp>&

# ::stappler::memory::dict<typename,typename,typename>::operator=(InitializerList<stappler::memory::dict::value_type>)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* InitializerList<stappler::memory::dict::value_type>

Возвращает:
* dict<Key, Value, Comp>&

# ::stappler::memory::dict<typename,typename,typename>::reserve(stappler::memory::dict::size_type)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::memory::dict::size_type


# ::stappler::memory::dict<typename,typename,typename>::get_allocator() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* allocator_type

# ::stappler::memory::dict<typename,typename,typename>::empty() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::memory::dict<typename,typename,typename>::size() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* size_t

# ::stappler::memory::dict<typename,typename,typename>::clear()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::dict<typename,typename,typename>::begin()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* iterator

# ::stappler::memory::dict<typename,typename,typename>::end()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* iterator

# ::stappler::memory::dict<typename,typename,typename>::begin() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* const_iterator

# ::stappler::memory::dict<typename,typename,typename>::end() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* const_iterator

# ::stappler::memory::dict<typename,typename,typename>::cbegin() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* const_iterator

# ::stappler::memory::dict<typename,typename,typename>::cend() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* const_iterator

# ::stappler::memory::dict<typename,typename,typename>::rbegin()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* reverse_iterator

# ::stappler::memory::dict<typename,typename,typename>::rend()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* reverse_iterator

# ::stappler::memory::dict<typename,typename,typename>::rbegin() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* const_reverse_iterator

# ::stappler::memory::dict<typename,typename,typename>::rend() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* const_reverse_iterator

# ::stappler::memory::dict<typename,typename,typename>::crbegin() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* const_reverse_iterator

# ::stappler::memory::dict<typename,typename,typename>::crend() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* const_reverse_iterator

# ::stappler::memory::dict<typename,typename,typename>::insert<class>(P&&)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class P

Параметры:
* P&&

Возвращает:
* Pair<stappler::memory::dict::iterator, bool>

# ::stappler::memory::dict<typename,typename,typename>::insert<class>(stappler::memory::dict::const_iterator,P&&)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class P

Параметры:
* stappler::memory::dict::const_iterator
* P&&

Возвращает:
* iterator

# ::stappler::memory::dict<typename,typename,typename>::insert<class>(InputIt,InputIt)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class InputIt

Параметры:
* InputIt
* InputIt


# ::stappler::memory::dict<typename,typename,typename>::insert(InitializerList<stappler::memory::dict::value_type>)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* InitializerList<stappler::memory::dict::value_type>


# ::stappler::memory::dict<typename,typename,typename>::insert_or_assign<class>(stappler::memory::dict::key_type const&,M&&)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class M

Параметры:
* stappler::memory::dict::key_type const&
* M&&

Возвращает:
* Pair<stappler::memory::dict::iterator, bool>

# ::stappler::memory::dict<typename,typename,typename>::insert_or_assign<class>(stappler::memory::dict::key_type&&,M&&)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class M

Параметры:
* stappler::memory::dict::key_type&&
* M&&

Возвращает:
* Pair<stappler::memory::dict::iterator, bool>

# ::stappler::memory::dict<typename,typename,typename>::insert_or_assign<class>(stappler::memory::dict::const_iterator,stappler::memory::dict::key_type const&,M&&)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class M

Параметры:
* stappler::memory::dict::const_iterator
* stappler::memory::dict::key_type const&
* M&&

Возвращает:
* iterator

# ::stappler::memory::dict<typename,typename,typename>::insert_or_assign<class>(stappler::memory::dict::const_iterator,stappler::memory::dict::key_type&&,M&&)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class M

Параметры:
* stappler::memory::dict::const_iterator
* stappler::memory::dict::key_type&&
* M&&

Возвращает:
* iterator

# ::stappler::memory::dict<typename,typename,typename>::emplace<class>(Args &&...)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class Args

Параметры:
* Args &&...

Возвращает:
* Pair<stappler::memory::dict::iterator, bool>

# ::stappler::memory::dict<typename,typename,typename>::emplace_hint<class>(stappler::memory::dict::const_iterator,Args &&...)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class Args

Параметры:
* stappler::memory::dict::const_iterator
* Args &&...

Возвращает:
* iterator

# ::stappler::memory::dict<typename,typename,typename>::try_emplace<class>(stappler::memory::dict::key_type const&,Args &&...)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class Args

Параметры:
* stappler::memory::dict::key_type const&
* Args &&...

Возвращает:
* Pair<stappler::memory::dict::iterator, bool>

# ::stappler::memory::dict<typename,typename,typename>::try_emplace<class>(stappler::memory::dict::key_type&&,Args &&...)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class Args

Параметры:
* stappler::memory::dict::key_type&&
* Args &&...

Возвращает:
* Pair<stappler::memory::dict::iterator, bool>

# ::stappler::memory::dict<typename,typename,typename>::try_emplace<class>(stappler::memory::dict::const_iterator,stappler::memory::dict::key_type const&,Args &&...)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class Args

Параметры:
* stappler::memory::dict::const_iterator
* stappler::memory::dict::key_type const&
* Args &&...

Возвращает:
* iterator

# ::stappler::memory::dict<typename,typename,typename>::try_emplace<class>(stappler::memory::dict::const_iterator,stappler::memory::dict::key_type&&,Args &&...)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class Args

Параметры:
* stappler::memory::dict::const_iterator
* stappler::memory::dict::key_type&&
* Args &&...

Возвращает:
* iterator

# ::stappler::memory::dict<typename,typename,typename>::erase(stappler::memory::dict::iterator)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::memory::dict::iterator

Возвращает:
* iterator

# ::stappler::memory::dict<typename,typename,typename>::erase(stappler::memory::dict::const_iterator)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::memory::dict::const_iterator

Возвращает:
* iterator

# ::stappler::memory::dict<typename,typename,typename>::erase(stappler::memory::dict::const_iterator,stappler::memory::dict::const_iterator)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::memory::dict::const_iterator
* stappler::memory::dict::const_iterator

Возвращает:
* iterator

# ::stappler::memory::dict<typename,typename,typename>::erase<class>(K const&)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class K

Параметры:
* K const&

Возвращает:
* size_type

# ::stappler::memory::dict<typename,typename,typename>::find<class>(K const&)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class K

Параметры:
* K const&

Возвращает:
* iterator

# ::stappler::memory::dict<typename,typename,typename>::find<class>(K const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class K

Параметры:
* K const&

Возвращает:
* const_iterator

# ::stappler::memory::dict<typename,typename,typename>::lower_bound<class>(K const&)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class K

Параметры:
* K const&

Возвращает:
* iterator

# ::stappler::memory::dict<typename,typename,typename>::lower_bound<class>(K const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class K

Параметры:
* K const&

Возвращает:
* const_iterator

# ::stappler::memory::dict<typename,typename,typename>::upper_bound<class>(K const&)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class K

Параметры:
* K const&

Возвращает:
* iterator

# ::stappler::memory::dict<typename,typename,typename>::upper_bound<class>(K const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class K

Параметры:
* K const&

Возвращает:
* const_iterator

# ::stappler::memory::dict<typename,typename,typename>::equal_range<class>(K const&)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class K

Параметры:
* K const&

Возвращает:
* Pair<stappler::memory::dict::iterator, stappler::memory::dict::iterator>

# ::stappler::memory::dict<typename,typename,typename>::equal_range<class>(K const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class K

Параметры:
* K const&

Возвращает:
* Pair<stappler::memory::dict::const_iterator, stappler::memory::dict::const_iterator>

# ::stappler::memory::dict<typename,typename,typename>::count<class>(K const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class K

Параметры:
* K const&

Возвращает:
* size_t

# ::stappler::memory::dict<typename,typename,typename>::do_equal_check<typename,typename>(L const&,R const&) const

## BRIEF

## CONTENT

Доступ: protected

Параметры шаблона:
* typename L
* typename R

Параметры:
* L const&
* R const&

Возвращает:
* bool

# ::stappler::memory::dict<typename,typename,typename>::do_insert_or_assign<typename,class>(K&&,M&&)

## BRIEF

## CONTENT

Доступ: protected

Параметры шаблона:
* typename K
* class M

Параметры:
* K&&
* M&&

Возвращает:
* Pair<stappler::memory::dict::iterator, bool>

# ::stappler::memory::dict<typename,typename,typename>::do_insert_or_assign<typename,class>(stappler::memory::dict::const_iterator,K&&,M&&)

## BRIEF

## CONTENT

Доступ: protected

Параметры шаблона:
* typename K
* class M

Параметры:
* stappler::memory::dict::const_iterator
* K&&
* M&&

Возвращает:
* iterator

# ::stappler::memory::dict<typename,typename,typename>::do_try_emplace<typename,typename>(K&&,Args &&...)

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
* Pair<stappler::memory::dict::iterator, bool>

# ::stappler::memory::dict<typename,typename,typename>::do_try_emplace<typename,typename>(stappler::memory::dict::const_iterator,K&&,Args &&...)

## BRIEF

## CONTENT

Доступ: protected

Параметры шаблона:
* typename K
* typename Args

Параметры:
* stappler::memory::dict::const_iterator
* K&&
* Args &&...

Возвращает:
* Pair<stappler::memory::dict::iterator, bool>

# ::stappler::memory::dict<typename,typename,typename>::do_insert<class,class>(Pair<A, B> const&)

## BRIEF

## CONTENT

Доступ: protected

Параметры шаблона:
* class A
* class B

Параметры:
* Pair<A, B> const&

Возвращает:
* Pair<stappler::memory::dict::iterator, bool>

# ::stappler::memory::dict<typename,typename,typename>::do_insert<class,class>(Pair<A, B>&&)

## BRIEF

## CONTENT

Доступ: protected

Параметры шаблона:
* class A
* class B

Параметры:
* Pair<A, B>&&

Возвращает:
* Pair<stappler::memory::dict::iterator, bool>

# ::stappler::memory::dict<typename,typename,typename>::do_insert<class,class>(stappler::memory::dict::const_iterator,Pair<A, B> const&)

## BRIEF

## CONTENT

Доступ: protected

Параметры шаблона:
* class A
* class B

Параметры:
* stappler::memory::dict::const_iterator
* Pair<A, B> const&

Возвращает:
* iterator

# ::stappler::memory::dict<typename,typename,typename>::do_insert<class,class>(stappler::memory::dict::const_iterator,Pair<A, B>&&)

## BRIEF

## CONTENT

Доступ: protected

Параметры шаблона:
* class A
* class B

Параметры:
* stappler::memory::dict::const_iterator
* Pair<A, B>&&

Возвращает:
* iterator

# ::stappler::memory::dict<typename,typename,typename>::do_assign<class,class>(stappler::memory::dict::iterator,T&&,Args &&...)

## BRIEF

## CONTENT

Доступ: protected

Параметры шаблона:
* class T
* class Args

Параметры:
* stappler::memory::dict::iterator
* T&&
* Args &&...


# ::stappler::memory::dict<typename,typename,typename>::do_erase<class>(K const&)

## BRIEF

## CONTENT

Доступ: protected

Параметры шаблона:
* class K

Параметры:
* K const&

Возвращает:
* size_type

# ::stappler::memory::dict<typename,typename,typename>::do_find<class>(K const&)

## BRIEF

## CONTENT

Доступ: protected

Параметры шаблона:
* class K

Параметры:
* K const&

Возвращает:
* iterator

# ::stappler::memory::dict<typename,typename,typename>::do_find<class>(K const&) const

## BRIEF

## CONTENT

Доступ: protected

Параметры шаблона:
* class K

Параметры:
* K const&

Возвращает:
* const_iterator

# ::stappler::memory::dict<typename,typename,typename>::do_count<class>(K const&) const

## BRIEF

## CONTENT

Доступ: protected

Параметры шаблона:
* class K

Параметры:
* K const&

Возвращает:
* size_t

# ::stappler::memory::dict<typename,typename,typename>::_data

## BRIEF

## CONTENT

Доступ: protected

Тип: vector_type


# ::stappler::memory::dict<typename,typename,typename>::_comp

## BRIEF

## CONTENT

Доступ: protected

Тип: comparator_type


# ::stappler::memory::operator==<typename,typename,typename>(dict<Key, Value, Comp> const&,dict<Key, Value, Comp> const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Key
* typename Value
* typename Comp

Параметры:
* dict<Key, Value, Comp> const&
* dict<Key, Value, Comp> const&

Возвращает:
* bool

# ::stappler::memory::operator<<typename,typename,typename>(dict<Key, Value, Comp> const&,dict<Key, Value, Comp> const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Key
* typename Value
* typename Comp

Параметры:
* dict<Key, Value, Comp> const&
* dict<Key, Value, Comp> const&

Возвращает:
* bool

# ::stappler::memory::operator!=<typename,typename,typename>(dict<Key, Value, Comp> const&,dict<Key, Value, Comp> const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Key
* typename Value
* typename Comp

Параметры:
* dict<Key, Value, Comp> const&
* dict<Key, Value, Comp> const&

Возвращает:
* bool

# ::stappler::memory::operator><typename,typename,typename>(dict<Key, Value, Comp> const&,dict<Key, Value, Comp> const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Key
* typename Value
* typename Comp

Параметры:
* dict<Key, Value, Comp> const&
* dict<Key, Value, Comp> const&

Возвращает:
* bool

# ::stappler::memory::operator<=<typename,typename,typename>(dict<Key, Value, Comp> const&,dict<Key, Value, Comp> const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Key
* typename Value
* typename Comp

Параметры:
* dict<Key, Value, Comp> const&
* dict<Key, Value, Comp> const&

Возвращает:
* bool

# ::stappler::memory::operator>=<typename,typename,typename>(dict<Key, Value, Comp> const&,dict<Key, Value, Comp> const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Key
* typename Value
* typename Comp

Параметры:
* dict<Key, Value, Comp> const&
* dict<Key, Value, Comp> const&

Возвращает:
* bool