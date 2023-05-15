Title: SPMemStorageMem.h


# LIBSTAPPLER_COMMON_MEMORY_SPMEMSTORAGEMEM_H_

## BRIEF

## CONTENT


# ::stappler::memory::mem_sso_test<typename>

## BRIEF

## CONTENT

Параметры шаблона:
* typename Type


# ::stappler::memory::mem_sso_test<typename>::value

## BRIEF

## CONTENT

Тип: bool const


# ::stappler::memory::storage_mem_soo<typename,size_t>

## BRIEF

## CONTENT

Параметры шаблона:
* typename Type
* size_t Extra

Базовые классы:
* impl::mem_soo_iface<Type,Extra,mem_sso_test<Type>::value>


# ::stappler::memory::storage_mem_soo<typename,size_t>::base

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::storage_mem_soo<typename,size_t>::self

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::storage_mem_soo<typename,size_t>::pointer

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::storage_mem_soo<typename,size_t>::const_pointer

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::storage_mem_soo<typename,size_t>::reference

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::storage_mem_soo<typename,size_t>::const_reference

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::storage_mem_soo<typename,size_t>::size_type

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::storage_mem_soo<typename,size_t>::allocator

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::storage_mem_soo<typename,size_t>::iterator

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::storage_mem_soo<typename,size_t>::const_iterator

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::storage_mem_soo<typename,size_t>::reverse_iterator

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::storage_mem_soo<typename,size_t>::const_reverse_iterator

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::storage_mem_soo<typename,size_t>::storage_mem_soo(stappler::memory::storage_mem_soo::allocator const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::memory::storage_mem_soo::allocator const&


# ::stappler::memory::storage_mem_soo<typename,size_t>::storage_mem_soo(stappler::memory::storage_mem_soo::pointer,stappler::memory::storage_mem_soo::size_type,stappler::memory::storage_mem_soo::allocator const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::memory::storage_mem_soo::pointer
* stappler::memory::storage_mem_soo::size_type
* stappler::memory::storage_mem_soo::allocator const&


# ::stappler::memory::storage_mem_soo<typename,size_t>::storage_mem_soo(stappler::memory::storage_mem_soo::const_pointer,stappler::memory::storage_mem_soo::size_type,stappler::memory::storage_mem_soo::allocator const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::memory::storage_mem_soo::const_pointer
* stappler::memory::storage_mem_soo::size_type
* stappler::memory::storage_mem_soo::allocator const&


# ::stappler::memory::storage_mem_soo<typename,size_t>::storage_mem_soo(stappler::memory::storage_mem_soo::self const&,stappler::memory::storage_mem_soo::size_type,stappler::memory::storage_mem_soo::size_type,stappler::memory::storage_mem_soo::allocator const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::memory::storage_mem_soo::self const&
* stappler::memory::storage_mem_soo::size_type
* stappler::memory::storage_mem_soo::size_type
* stappler::memory::storage_mem_soo::allocator const&


# ::stappler::memory::storage_mem_soo<typename,size_t>::storage_mem_soo(stappler::memory::storage_mem_soo::self const&,stappler::memory::storage_mem_soo::allocator const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::memory::storage_mem_soo::self const&
* stappler::memory::storage_mem_soo::allocator const&


# ::stappler::memory::storage_mem_soo<typename,size_t>::storage_mem_soo(stappler::memory::storage_mem_soo::self&&,stappler::memory::storage_mem_soo::allocator const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::memory::storage_mem_soo::self&&
* stappler::memory::storage_mem_soo::allocator const&


# ::stappler::memory::storage_mem_soo<typename,size_t>::operator=(stappler::memory::storage_mem_soo::self const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::memory::storage_mem_soo::self const&

Возвращает:
* storage_mem_soo<Type, Extra>&

# ::stappler::memory::storage_mem_soo<typename,size_t>::operator=(stappler::memory::storage_mem_soo::self&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::memory::storage_mem_soo::self&&

Возвращает:
* storage_mem_soo<Type, Extra>&

# ::stappler::memory::storage_mem_soo<typename,size_t>::assign(stappler::memory::storage_mem_soo::self const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::memory::storage_mem_soo::self const&


# ::stappler::memory::storage_mem_soo<typename,size_t>::assign(stappler::memory::storage_mem_soo::self const&,stappler::memory::storage_mem_soo::size_type,stappler::memory::storage_mem_soo::size_type)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::memory::storage_mem_soo::self const&
* stappler::memory::storage_mem_soo::size_type
* stappler::memory::storage_mem_soo::size_type


# ::stappler::memory::storage_mem_soo<typename,size_t>::emplace_back<typename>(Args &&...)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename Args

Параметры:
* Args &&...

Возвращает:
* reference

# ::stappler::memory::storage_mem_soo<typename,size_t>::pop_back()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::storage_mem_soo<typename,size_t>::emplace_back_unsafe<typename>(Args &&...)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename Args

Параметры:
* Args &&...

Возвращает:
* reference

# ::stappler::memory::storage_mem_soo<typename,size_t>::emplace<typename>(stappler::memory::storage_mem_soo::const_iterator,Args &&...)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename Args

Параметры:
* stappler::memory::storage_mem_soo::const_iterator
* Args &&...

Возвращает:
* iterator

# ::stappler::memory::storage_mem_soo<typename,size_t>::emplace_safe<typename>(stappler::memory::storage_mem_soo::const_iterator,Args &&...)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename Args

Параметры:
* stappler::memory::storage_mem_soo::const_iterator
* Args &&...

Возвращает:
* iterator

# ::stappler::memory::storage_mem_soo<typename,size_t>::insert_back(stappler::memory::storage_mem_soo::const_pointer,stappler::memory::storage_mem_soo::size_type)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::memory::storage_mem_soo::const_pointer
* stappler::memory::storage_mem_soo::size_type


# ::stappler::memory::storage_mem_soo<typename,size_t>::insert_back(stappler::memory::storage_mem_soo::self const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::memory::storage_mem_soo::self const&


# ::stappler::memory::storage_mem_soo<typename,size_t>::insert_back(stappler::memory::storage_mem_soo::self const&,stappler::memory::storage_mem_soo::size_type,stappler::memory::storage_mem_soo::size_type)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::memory::storage_mem_soo::self const&
* stappler::memory::storage_mem_soo::size_type
* stappler::memory::storage_mem_soo::size_type


# ::stappler::memory::storage_mem_soo<typename,size_t>::insert(stappler::memory::storage_mem_soo::size_type,stappler::memory::storage_mem_soo::const_pointer,stappler::memory::storage_mem_soo::size_type)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::memory::storage_mem_soo::size_type
* stappler::memory::storage_mem_soo::const_pointer
* stappler::memory::storage_mem_soo::size_type


# ::stappler::memory::storage_mem_soo<typename,size_t>::insert(stappler::memory::storage_mem_soo::size_type,stappler::memory::storage_mem_soo::self const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::memory::storage_mem_soo::size_type
* stappler::memory::storage_mem_soo::self const&


# ::stappler::memory::storage_mem_soo<typename,size_t>::insert(stappler::memory::storage_mem_soo::size_type,stappler::memory::storage_mem_soo::self const&,stappler::memory::storage_mem_soo::size_type,stappler::memory::storage_mem_soo::size_type)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::memory::storage_mem_soo::size_type
* stappler::memory::storage_mem_soo::self const&
* stappler::memory::storage_mem_soo::size_type
* stappler::memory::storage_mem_soo::size_type


# ::stappler::memory::storage_mem_soo<typename,size_t>::insert<class>(stappler::memory::storage_mem_soo::size_type,stappler::memory::storage_mem_soo::size_type,Args &&...)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class Args

Параметры:
* stappler::memory::storage_mem_soo::size_type
* stappler::memory::storage_mem_soo::size_type
* Args &&...


# ::stappler::memory::storage_mem_soo<typename,size_t>::insert<class>(stappler::memory::storage_mem_soo::const_iterator,stappler::memory::storage_mem_soo::size_type,Args &&...)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class Args

Параметры:
* stappler::memory::storage_mem_soo::const_iterator
* stappler::memory::storage_mem_soo::size_type
* Args &&...

Возвращает:
* iterator

# ::stappler::memory::storage_mem_soo<typename,size_t>::insert<class>(stappler::memory::storage_mem_soo::const_iterator,InputIt,InputIt)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class InputIt

Параметры:
* stappler::memory::storage_mem_soo::const_iterator
* InputIt
* InputIt

Возвращает:
* iterator

# ::stappler::memory::storage_mem_soo<typename,size_t>::erase(stappler::memory::storage_mem_soo::size_type,stappler::memory::storage_mem_soo::size_type)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::memory::storage_mem_soo::size_type
* stappler::memory::storage_mem_soo::size_type


# ::stappler::memory::storage_mem_soo<typename,size_t>::erase(stappler::memory::storage_mem_soo::const_iterator)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::memory::storage_mem_soo::const_iterator

Возвращает:
* iterator

# ::stappler::memory::storage_mem_soo<typename,size_t>::erase(stappler::memory::storage_mem_soo::const_iterator,stappler::memory::storage_mem_soo::const_iterator)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::memory::storage_mem_soo::const_iterator
* stappler::memory::storage_mem_soo::const_iterator

Возвращает:
* iterator

# ::stappler::memory::storage_mem_soo<typename,size_t>::prepare_replace(stappler::memory::storage_mem_soo::size_type,stappler::memory::storage_mem_soo::size_type,stappler::memory::storage_mem_soo::size_type)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::memory::storage_mem_soo::size_type
* stappler::memory::storage_mem_soo::size_type
* stappler::memory::storage_mem_soo::size_type

Возвращает:
* pointer

# ::stappler::memory::storage_mem_soo<typename,size_t>::replace(stappler::memory::storage_mem_soo::size_type,stappler::memory::storage_mem_soo::size_type,stappler::memory::storage_mem_soo::const_pointer,stappler::memory::storage_mem_soo::size_type)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::memory::storage_mem_soo::size_type
* stappler::memory::storage_mem_soo::size_type
* stappler::memory::storage_mem_soo::const_pointer
* stappler::memory::storage_mem_soo::size_type


# ::stappler::memory::storage_mem_soo<typename,size_t>::replace(stappler::memory::storage_mem_soo::size_type,stappler::memory::storage_mem_soo::size_type,stappler::memory::storage_mem_soo::self const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::memory::storage_mem_soo::size_type
* stappler::memory::storage_mem_soo::size_type
* stappler::memory::storage_mem_soo::self const&


# ::stappler::memory::storage_mem_soo<typename,size_t>::replace(stappler::memory::storage_mem_soo::size_type,stappler::memory::storage_mem_soo::size_type,stappler::memory::storage_mem_soo::self const&,stappler::memory::storage_mem_soo::size_type,stappler::memory::storage_mem_soo::size_type)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::memory::storage_mem_soo::size_type
* stappler::memory::storage_mem_soo::size_type
* stappler::memory::storage_mem_soo::self const&
* stappler::memory::storage_mem_soo::size_type
* stappler::memory::storage_mem_soo::size_type


# ::stappler::memory::storage_mem_soo<typename,size_t>::replace(stappler::memory::storage_mem_soo::size_type,stappler::memory::storage_mem_soo::size_type,stappler::memory::storage_mem_soo::size_type,Type)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::memory::storage_mem_soo::size_type
* stappler::memory::storage_mem_soo::size_type
* stappler::memory::storage_mem_soo::size_type
* Type


# ::stappler::memory::storage_mem_soo<typename,size_t>::replace<class>(stappler::memory::storage_mem_soo::const_iterator,stappler::memory::storage_mem_soo::const_iterator,InputIt,InputIt)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class InputIt

Параметры:
* stappler::memory::storage_mem_soo::const_iterator
* stappler::memory::storage_mem_soo::const_iterator
* InputIt
* InputIt

Возвращает:
* iterator

# ::stappler::memory::storage_mem_soo<typename,size_t>::fill<typename>(stappler::memory::storage_mem_soo::size_type,Args &&...)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename Args

Параметры:
* stappler::memory::storage_mem_soo::size_type
* Args &&...


# ::stappler::memory::storage_mem_soo<typename,size_t>::resize<typename>(stappler::memory::storage_mem_soo::size_type,Args &&...)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename Args

Параметры:
* stappler::memory::storage_mem_soo::size_type
* Args &&...


# ::stappler::memory::storage_mem_soo<typename,size_t>::at(stappler::memory::storage_mem_soo::size_type)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::memory::storage_mem_soo::size_type

Возвращает:
* reference

# ::stappler::memory::storage_mem_soo<typename,size_t>::at(stappler::memory::storage_mem_soo::size_type) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::memory::storage_mem_soo::size_type

Возвращает:
* const_reference

# ::stappler::memory::storage_mem_soo<typename,size_t>::back()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* reference

# ::stappler::memory::storage_mem_soo<typename,size_t>::back() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* const_reference

# ::stappler::memory::storage_mem_soo<typename,size_t>::front()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* reference

# ::stappler::memory::storage_mem_soo<typename,size_t>::front() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* const_reference

# ::stappler::memory::storage_mem_soo<typename,size_t>::begin()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* iterator

# ::stappler::memory::storage_mem_soo<typename,size_t>::end()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* iterator

# ::stappler::memory::storage_mem_soo<typename,size_t>::begin() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* const_iterator

# ::stappler::memory::storage_mem_soo<typename,size_t>::end() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* const_iterator

# ::stappler::memory::storage_mem_soo<typename,size_t>::cbegin() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* const_iterator

# ::stappler::memory::storage_mem_soo<typename,size_t>::cend() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* const_iterator

# ::stappler::memory::storage_mem_soo<typename,size_t>::rbegin()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* reverse_iterator

# ::stappler::memory::storage_mem_soo<typename,size_t>::rend()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* reverse_iterator

# ::stappler::memory::storage_mem_soo<typename,size_t>::rbegin() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* const_reverse_iterator

# ::stappler::memory::storage_mem_soo<typename,size_t>::rend() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* const_reverse_iterator

# ::stappler::memory::storage_mem_soo<typename,size_t>::crbegin() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* const_reverse_iterator

# ::stappler::memory::storage_mem_soo<typename,size_t>::crend() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* const_reverse_iterator

# ::stappler::memory::storage_mem_soo<typename,size_t>::shrink_to_fit()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::storage_mem_soo<typename,size_t>::get_allocator() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* allocator&

# ::stappler::memory::storage_mem<typename,size_t>

## BRIEF

## CONTENT

Параметры шаблона:
* typename Type
* size_t Extra
