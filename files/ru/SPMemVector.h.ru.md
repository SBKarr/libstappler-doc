Title: SPMemVector.h


# LIBSTAPPLER_COMMON_MEMORY_SPMEMVECTOR_H_

## BRIEF

## CONTENT


# ::stappler::memory::vector<typename>

## BRIEF

## CONTENT

Параметры шаблона:
* typename Type

Базовые классы:
* AllocPool


# ::stappler::memory::vector<typename>::allocator_type

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::vector<typename>::pointer

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::vector<typename>::const_pointer

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::vector<typename>::reference

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::vector<typename>::const_reference

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::vector<typename>::size_type

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::vector<typename>::value_type

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::vector<typename>::mem_type

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::vector<typename>::self

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::vector<typename>::iterator

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::vector<typename>::const_iterator

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::vector<typename>::reverse_iterator

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::vector<typename>::const_reverse_iterator

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::vector<typename>::vector()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::vector<typename>::vector(stappler::memory::vector::allocator_type const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::memory::vector::allocator_type const&


# ::stappler::memory::vector<typename>::vector(stappler::memory::vector::size_type,Type const&,stappler::memory::vector::allocator_type const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::memory::vector::size_type
* Type const&
* stappler::memory::vector::allocator_type const&


# ::stappler::memory::vector<typename>::vector(stappler::memory::vector::size_type,stappler::memory::vector::allocator_type const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::memory::vector::size_type
* stappler::memory::vector::allocator_type const&


# ::stappler::memory::vector<typename>::vector<class>(InputIt,InputIt,stappler::memory::vector::allocator_type const&)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class InputIt

Параметры:
* InputIt
* InputIt
* stappler::memory::vector::allocator_type const&


# ::stappler::memory::vector<typename>::vector(const vector<Type>&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* const vector<Type>&


# ::stappler::memory::vector<typename>::vector(const vector<Type>&,stappler::memory::vector::allocator_type const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* const vector<Type>&
* stappler::memory::vector::allocator_type const&


# ::stappler::memory::vector<typename>::vector(vector<Type>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* vector<Type>&&


# ::stappler::memory::vector<typename>::vector(vector<Type>&&,stappler::memory::vector::allocator_type const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* vector<Type>&&
* stappler::memory::vector::allocator_type const&


# ::stappler::memory::vector<typename>::vector(InitializerList<Type>,stappler::memory::vector::allocator_type const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* InitializerList<Type>
* stappler::memory::vector::allocator_type const&


# ::stappler::memory::vector<typename>::operator=(const vector<Type>&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* const vector<Type>&

Возвращает:
* vector<Type>&

# ::stappler::memory::vector<typename>::operator=(vector<Type>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* vector<Type>&&

Возвращает:
* vector<Type>&

# ::stappler::memory::vector<typename>::operator=(InitializerList<Type>)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* InitializerList<Type>

Возвращает:
* vector<Type>&

# ::stappler::memory::vector<typename>::assign(stappler::memory::vector::size_type,Type const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::memory::vector::size_type
* Type const&


# ::stappler::memory::vector<typename>::assign<class>(InputIt,InputIt)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class InputIt

Параметры:
* InputIt
* InputIt


# ::stappler::memory::vector<typename>::assign(InitializerList<Type>)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* InitializerList<Type>


# ::stappler::memory::vector<typename>::assign_strong(Type*,stappler::memory::vector::size_type)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Type*
* stappler::memory::vector::size_type


# ::stappler::memory::vector<typename>::get_allocator() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* allocator_type

# ::stappler::memory::vector<typename>::at(stappler::memory::vector::size_type)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::memory::vector::size_type

Возвращает:
* reference

# ::stappler::memory::vector<typename>::at(stappler::memory::vector::size_type) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::memory::vector::size_type

Возвращает:
* const_reference

# ::stappler::memory::vector<typename>::operator[](stappler::memory::vector::size_type)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::memory::vector::size_type

Возвращает:
* reference

# ::stappler::memory::vector<typename>::operator[](stappler::memory::vector::size_type) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::memory::vector::size_type

Возвращает:
* const_reference

# ::stappler::memory::vector<typename>::front()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* reference

# ::stappler::memory::vector<typename>::front() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* const_reference

# ::stappler::memory::vector<typename>::back()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* reference

# ::stappler::memory::vector<typename>::back() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* const_reference

# ::stappler::memory::vector<typename>::data()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* pointer

# ::stappler::memory::vector<typename>::data() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* const_pointer

# ::stappler::memory::vector<typename>::begin()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* iterator

# ::stappler::memory::vector<typename>::end()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* iterator

# ::stappler::memory::vector<typename>::begin() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* const_iterator

# ::stappler::memory::vector<typename>::end() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* const_iterator

# ::stappler::memory::vector<typename>::cbegin() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* const_iterator

# ::stappler::memory::vector<typename>::cend() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* const_iterator

# ::stappler::memory::vector<typename>::rbegin()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* reverse_iterator

# ::stappler::memory::vector<typename>::rend()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* reverse_iterator

# ::stappler::memory::vector<typename>::rbegin() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* const_reverse_iterator

# ::stappler::memory::vector<typename>::rend() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* const_reverse_iterator

# ::stappler::memory::vector<typename>::crbegin() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* const_reverse_iterator

# ::stappler::memory::vector<typename>::crend() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* const_reverse_iterator

# ::stappler::memory::vector<typename>::size() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* size_type

# ::stappler::memory::vector<typename>::capacity() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* size_type

# ::stappler::memory::vector<typename>::empty() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::memory::vector<typename>::reserve_block_optimal()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::vector<typename>::reserve(stappler::memory::vector::size_type)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::memory::vector::size_type


# ::stappler::memory::vector<typename>::shrink_to_fit()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::vector<typename>::clear()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::vector<typename>::emplace<class>(stappler::memory::vector::const_iterator,Args &&...)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class Args

Параметры:
* stappler::memory::vector::const_iterator
* Args &&...

Возвращает:
* iterator

# ::stappler::memory::vector<typename>::insert(stappler::memory::vector::const_iterator,Type const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::memory::vector::const_iterator
* Type const&

Возвращает:
* iterator

# ::stappler::memory::vector<typename>::insert(stappler::memory::vector::const_iterator,Type&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::memory::vector::const_iterator
* Type&&

Возвращает:
* iterator

# ::stappler::memory::vector<typename>::insert(stappler::memory::vector::const_iterator,stappler::memory::vector::size_type,Type const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::memory::vector::const_iterator
* stappler::memory::vector::size_type
* Type const&

Возвращает:
* iterator

# ::stappler::memory::vector<typename>::insert<class>(stappler::memory::vector::const_iterator,InputIt,InputIt)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class InputIt

Параметры:
* stappler::memory::vector::const_iterator
* InputIt
* InputIt

Возвращает:
* iterator

# ::stappler::memory::vector<typename>::insert(stappler::memory::vector::const_iterator,InitializerList<Type>)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::memory::vector::const_iterator
* InitializerList<Type>

Возвращает:
* iterator

# ::stappler::memory::vector<typename>::erase(stappler::memory::vector::const_iterator)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::memory::vector::const_iterator

Возвращает:
* iterator

# ::stappler::memory::vector<typename>::erase(stappler::memory::vector::const_iterator,stappler::memory::vector::const_iterator)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::memory::vector::const_iterator
* stappler::memory::vector::const_iterator

Возвращает:
* iterator

# ::stappler::memory::vector<typename>::emplace_back<class>(Args &&...)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class Args

Параметры:
* Args &&...

Возвращает:
* reference

# ::stappler::memory::vector<typename>::push_back(Type const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Type const&


# ::stappler::memory::vector<typename>::push_back(Type&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Type&&


# ::stappler::memory::vector<typename>::pop_back()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::vector<typename>::resize(stappler::memory::vector::size_type)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::memory::vector::size_type


# ::stappler::memory::vector<typename>::resize(stappler::memory::vector::size_type,stappler::memory::vector::value_type const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::memory::vector::size_type
* stappler::memory::vector::value_type const&


# ::stappler::memory::vector<typename>::make_weak(Type const*,stappler::memory::vector::size_type,stappler::memory::vector::allocator_type const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Type const*
* stappler::memory::vector::size_type
* stappler::memory::vector::allocator_type const&

Возвращает:
* const vector<Type>

# ::stappler::memory::vector<typename>::assign_weak(Type const*,stappler::memory::vector::size_type)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Type const*
* stappler::memory::vector::size_type

Возвращает:
* vector<Type>&

# ::stappler::memory::vector<typename>::is_weak() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::memory::vector<typename>::force_clear()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::vector<typename>::_mem

## BRIEF

## CONTENT

Доступ: protected

Тип: mem_type


# ::stappler::memory::bytes

## BRIEF

## CONTENT


# ::stappler::memory::operator==<typename>(vector<_Tp> const&,vector<_Tp> const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename _Tp

Параметры:
* vector<_Tp> const&
* vector<_Tp> const&

Возвращает:
* bool

# ::stappler::memory::operator<<typename>(vector<_Tp> const&,vector<_Tp> const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename _Tp

Параметры:
* vector<_Tp> const&
* vector<_Tp> const&

Возвращает:
* bool

# ::stappler::memory::operator<(vector<uint8_t> const&,vector<uint8_t> const&)

## BRIEF

## CONTENT

Параметры:
* vector<uint8_t> const&
* vector<uint8_t> const&

Возвращает:
* bool

# ::stappler::memory::operator!=<typename>(vector<_Tp> const&,vector<_Tp> const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename _Tp

Параметры:
* vector<_Tp> const&
* vector<_Tp> const&

Возвращает:
* bool

# ::stappler::memory::operator><typename>(vector<_Tp> const&,vector<_Tp> const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename _Tp

Параметры:
* vector<_Tp> const&
* vector<_Tp> const&

Возвращает:
* bool

# ::stappler::memory::operator<=<typename>(vector<_Tp> const&,vector<_Tp> const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename _Tp

Параметры:
* vector<_Tp> const&
* vector<_Tp> const&

Возвращает:
* bool

# ::stappler::memory::operator>=<typename>(vector<_Tp> const&,vector<_Tp> const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename _Tp

Параметры:
* vector<_Tp> const&
* vector<_Tp> const&

Возвращает:
* bool