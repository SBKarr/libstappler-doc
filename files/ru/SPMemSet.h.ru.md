Title: SPMemSet.h


# LIBSTAPPLER_COMMON_MEMORY_SPMEMSET_H_

## BRIEF

## CONTENT


# ::stappler::memory::set<typename,typename>

## BRIEF

## CONTENT

Параметры шаблона:
* typename Value
* typename Comp

Базовые классы:
* AllocPool


# ::stappler::memory::set<typename,typename>::key_type

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::set<typename,typename>::value_type

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::set<typename,typename>::key_compare

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::set<typename,typename>::value_compare

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::set<typename,typename>::allocator_type

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::set<typename,typename>::pointer

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::set<typename,typename>::const_pointer

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::set<typename,typename>::reference

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::set<typename,typename>::const_reference

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::set<typename,typename>::tree_type

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::set<typename,typename>::iterator

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::set<typename,typename>::const_iterator

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::set<typename,typename>::reverse_iterator

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::set<typename,typename>::const_reverse_iterator

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::set<typename,typename>::size_type

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::set<typename,typename>::difference_type

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::set<typename,typename>::set()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::set<typename,typename>::set(stappler::memory::set::key_compare const&,stappler::memory::set::allocator_type const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::memory::set::key_compare const&
* stappler::memory::set::allocator_type const&


# ::stappler::memory::set<typename,typename>::set(stappler::memory::set::allocator_type const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::memory::set::allocator_type const&


# ::stappler::memory::set<typename,typename>::set<class>(InputIterator,InputIterator,stappler::memory::set::key_compare const&,stappler::memory::set::allocator_type const&)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class InputIterator

Параметры:
* InputIterator
* InputIterator
* stappler::memory::set::key_compare const&
* stappler::memory::set::allocator_type const&


# ::stappler::memory::set<typename,typename>::set<class>(InputIterator,InputIterator,stappler::memory::set::allocator_type const&)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class InputIterator

Параметры:
* InputIterator
* InputIterator
* stappler::memory::set::allocator_type const&


# ::stappler::memory::set<typename,typename>::set(const set<Value, Comp>&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* const set<Value, Comp>&


# ::stappler::memory::set<typename,typename>::set(const set<Value, Comp>&,stappler::memory::set::allocator_type const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* const set<Value, Comp>&
* stappler::memory::set::allocator_type const&


# ::stappler::memory::set<typename,typename>::set(set<Value, Comp>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* set<Value, Comp>&&


# ::stappler::memory::set<typename,typename>::set(set<Value, Comp>&&,stappler::memory::set::allocator_type const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* set<Value, Comp>&&
* stappler::memory::set::allocator_type const&


# ::stappler::memory::set<typename,typename>::set(InitializerList<stappler::memory::set::value_type>,stappler::memory::set::key_compare const&,stappler::memory::set::allocator_type const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* InitializerList<stappler::memory::set::value_type>
* stappler::memory::set::key_compare const&
* stappler::memory::set::allocator_type const&


# ::stappler::memory::set<typename,typename>::set(InitializerList<stappler::memory::set::value_type>,stappler::memory::set::allocator_type const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* InitializerList<stappler::memory::set::value_type>
* stappler::memory::set::allocator_type const&


# ::stappler::memory::set<typename,typename>::operator=(const set<Value, Comp>&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* const set<Value, Comp>&

Возвращает:
* set<Value, Comp>&

# ::stappler::memory::set<typename,typename>::operator=(set<Value, Comp>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* set<Value, Comp>&&

Возвращает:
* set<Value, Comp>&

# ::stappler::memory::set<typename,typename>::operator=(InitializerList<stappler::memory::set::value_type>)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* InitializerList<stappler::memory::set::value_type>

Возвращает:
* set<Value, Comp>&

# ::stappler::memory::set<typename,typename>::get_allocator() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* allocator_type

# ::stappler::memory::set<typename,typename>::empty() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::memory::set<typename,typename>::size() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* size_t

# ::stappler::memory::set<typename,typename>::capacity() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* size_t

# ::stappler::memory::set<typename,typename>::clear()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::set<typename,typename>::shrink_to_fit()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::set<typename,typename>::set_memory_persistent(bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* bool


# ::stappler::memory::set<typename,typename>::memory_persistent() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::memory::set<typename,typename>::insert(stappler::memory::set::value_type const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::memory::set::value_type const&

Возвращает:
* Pair<stappler::memory::set::iterator, bool>

# ::stappler::memory::set<typename,typename>::insert(stappler::memory::set::value_type&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::memory::set::value_type&&

Возвращает:
* Pair<stappler::memory::set::iterator, bool>

# ::stappler::memory::set<typename,typename>::insert(stappler::memory::set::const_iterator,stappler::memory::set::value_type const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::memory::set::const_iterator
* stappler::memory::set::value_type const&

Возвращает:
* iterator

# ::stappler::memory::set<typename,typename>::insert(stappler::memory::set::const_iterator,stappler::memory::set::value_type&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::memory::set::const_iterator
* stappler::memory::set::value_type&&

Возвращает:
* iterator

# ::stappler::memory::set<typename,typename>::insert<class>(InputIt,InputIt)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class InputIt

Параметры:
* InputIt
* InputIt


# ::stappler::memory::set<typename,typename>::insert(InitializerList<stappler::memory::set::value_type>)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* InitializerList<stappler::memory::set::value_type>


# ::stappler::memory::set<typename,typename>::emplace<class>(Args &&...)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class Args

Параметры:
* Args &&...

Возвращает:
* Pair<stappler::memory::set::iterator, bool>

# ::stappler::memory::set<typename,typename>::emplace_hint<class>(stappler::memory::set::const_iterator,Args &&...)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class Args

Параметры:
* stappler::memory::set::const_iterator
* Args &&...

Возвращает:
* iterator

# ::stappler::memory::set<typename,typename>::erase(stappler::memory::set::const_iterator)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::memory::set::const_iterator

Возвращает:
* iterator

# ::stappler::memory::set<typename,typename>::erase(stappler::memory::set::const_iterator,stappler::memory::set::const_iterator)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::memory::set::const_iterator
* stappler::memory::set::const_iterator

Возвращает:
* iterator

# ::stappler::memory::set<typename,typename>::erase(stappler::memory::set::key_type const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::memory::set::key_type const&

Возвращает:
* size_type

# ::stappler::memory::set<typename,typename>::begin()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* iterator

# ::stappler::memory::set<typename,typename>::end()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* iterator

# ::stappler::memory::set<typename,typename>::begin() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* const_iterator

# ::stappler::memory::set<typename,typename>::end() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* const_iterator

# ::stappler::memory::set<typename,typename>::cbegin() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* const_iterator

# ::stappler::memory::set<typename,typename>::cend() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* const_iterator

# ::stappler::memory::set<typename,typename>::rbegin()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* reverse_iterator

# ::stappler::memory::set<typename,typename>::rend()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* reverse_iterator

# ::stappler::memory::set<typename,typename>::rbegin() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* const_reverse_iterator

# ::stappler::memory::set<typename,typename>::rend() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* const_reverse_iterator

# ::stappler::memory::set<typename,typename>::crbegin() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* const_reverse_iterator

# ::stappler::memory::set<typename,typename>::crend() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* const_reverse_iterator

# ::stappler::memory::set<typename,typename>::swap(set<Value, Comp>&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* set<Value, Comp>&


# ::stappler::memory::set<typename,typename>::find<class>(K const&)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class K

Параметры:
* K const&

Возвращает:
* iterator

# ::stappler::memory::set<typename,typename>::find<class>(K const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class K

Параметры:
* K const&

Возвращает:
* const_iterator

# ::stappler::memory::set<typename,typename>::lower_bound<class>(K const&)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class K

Параметры:
* K const&

Возвращает:
* iterator

# ::stappler::memory::set<typename,typename>::lower_bound<class>(K const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class K

Параметры:
* K const&

Возвращает:
* const_iterator

# ::stappler::memory::set<typename,typename>::upper_bound<class>(K const&)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class K

Параметры:
* K const&

Возвращает:
* iterator

# ::stappler::memory::set<typename,typename>::upper_bound<class>(K const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class K

Параметры:
* K const&

Возвращает:
* const_iterator

# ::stappler::memory::set<typename,typename>::equal_range<class>(K const&)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class K

Параметры:
* K const&

Возвращает:
* Pair<stappler::memory::set::iterator, stappler::memory::set::iterator>

# ::stappler::memory::set<typename,typename>::equal_range<class>(K const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class K

Параметры:
* K const&

Возвращает:
* Pair<stappler::memory::set::const_iterator, stappler::memory::set::const_iterator>

# ::stappler::memory::set<typename,typename>::count<class>(K const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class K

Параметры:
* K const&

Возвращает:
* size_t

# ::stappler::memory::set<typename,typename>::reserve(size_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* size_t


# ::stappler::memory::set<typename,typename>::_tree

## BRIEF

## CONTENT

Доступ: protected

Тип: rbtree::Tree<Value, Value, Comp>


# ::stappler::memory::operator==<typename,typename>(set<_Tp, Comp> const&,set<_Tp, Comp> const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename _Tp
* typename Comp

Параметры:
* set<_Tp, Comp> const&
* set<_Tp, Comp> const&

Возвращает:
* bool

# ::stappler::memory::operator<<typename,typename>(set<_Tp, Comp> const&,set<_Tp, Comp> const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename _Tp
* typename Comp

Параметры:
* set<_Tp, Comp> const&
* set<_Tp, Comp> const&

Возвращает:
* bool

# ::stappler::memory::operator!=<typename,typename>(set<_Tp, Comp> const&,set<_Tp, Comp> const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename _Tp
* typename Comp

Параметры:
* set<_Tp, Comp> const&
* set<_Tp, Comp> const&

Возвращает:
* bool

# ::stappler::memory::operator><typename,typename>(set<_Tp, Comp> const&,set<_Tp, Comp> const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename _Tp
* typename Comp

Параметры:
* set<_Tp, Comp> const&
* set<_Tp, Comp> const&

Возвращает:
* bool

# ::stappler::memory::operator<=<typename,typename>(set<_Tp, Comp> const&,set<_Tp, Comp> const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename _Tp
* typename Comp

Параметры:
* set<_Tp, Comp> const&
* set<_Tp, Comp> const&

Возвращает:
* bool

# ::stappler::memory::operator>=<typename,typename>(set<_Tp, Comp> const&,set<_Tp, Comp> const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename _Tp
* typename Comp

Параметры:
* set<_Tp, Comp> const&
* set<_Tp, Comp> const&

Возвращает:
* bool

# ::stappler::memory::swap<typename,typename>(set<_Tp, Comp>&,set<_Tp, Comp>&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename _Tp
* typename Comp

Параметры:
* set<_Tp, Comp>&
* set<_Tp, Comp>&
