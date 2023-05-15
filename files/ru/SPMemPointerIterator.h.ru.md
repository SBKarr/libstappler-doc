Title: SPMemPointerIterator.h


# LIBSTAPPLER_COMMON_MEMORY_SPMEMPOINTERITERATOR_H_

## BRIEF

## CONTENT


# ::stappler::memory::pointer_iterator<class,class,class>

## BRIEF

## CONTENT

Параметры шаблона:
* class Type
* class Pointer
* class Reference


# ::stappler::memory::pointer_iterator<class,class,class>::iterator_category

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::pointer_iterator<class,class,class>::size_type

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::pointer_iterator<class,class,class>::pointer

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::pointer_iterator<class,class,class>::reference

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::pointer_iterator<class,class,class>::iterator

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::pointer_iterator<class,class,class>::difference_type

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::pointer_iterator<class,class,class>::value_type

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::pointer_iterator<class,class,class>::pointer_iterator()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::pointer_iterator<class,class,class>::pointer_iterator(stappler::memory::pointer_iterator::iterator const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::memory::pointer_iterator::iterator const&


# ::stappler::memory::pointer_iterator<class,class,class>::pointer_iterator(stappler::memory::pointer_iterator::pointer)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::memory::pointer_iterator::pointer


# ::stappler::memory::pointer_iterator<class,class,class>::operator=(stappler::memory::pointer_iterator::iterator const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::memory::pointer_iterator::iterator const&

Возвращает:
* iterator&

# ::stappler::memory::pointer_iterator<class,class,class>::operator==(stappler::memory::pointer_iterator::iterator const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::memory::pointer_iterator::iterator const&

Возвращает:
* bool

# ::stappler::memory::pointer_iterator<class,class,class>::operator!=(stappler::memory::pointer_iterator::iterator const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::memory::pointer_iterator::iterator const&

Возвращает:
* bool

# ::stappler::memory::pointer_iterator<class,class,class>::operator<(stappler::memory::pointer_iterator::iterator const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::memory::pointer_iterator::iterator const&

Возвращает:
* bool

# ::stappler::memory::pointer_iterator<class,class,class>::operator>(stappler::memory::pointer_iterator::iterator const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::memory::pointer_iterator::iterator const&

Возвращает:
* bool

# ::stappler::memory::pointer_iterator<class,class,class>::operator<=(stappler::memory::pointer_iterator::iterator const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::memory::pointer_iterator::iterator const&

Возвращает:
* bool

# ::stappler::memory::pointer_iterator<class,class,class>::operator>=(stappler::memory::pointer_iterator::iterator const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::memory::pointer_iterator::iterator const&

Возвращает:
* bool

# ::stappler::memory::pointer_iterator<class,class,class>::operator++()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* iterator&

# ::stappler::memory::pointer_iterator<class,class,class>::operator++(int)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* int

Возвращает:
* iterator

# ::stappler::memory::pointer_iterator<class,class,class>::operator--()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* iterator&

# ::stappler::memory::pointer_iterator<class,class,class>::operator--(int)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* int

Возвращает:
* iterator

# ::stappler::memory::pointer_iterator<class,class,class>::operator+=(stappler::memory::pointer_iterator::size_type)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::memory::pointer_iterator::size_type

Возвращает:
* iterator&

# ::stappler::memory::pointer_iterator<class,class,class>::operator-=(stappler::memory::pointer_iterator::size_type)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::memory::pointer_iterator::size_type

Возвращает:
* iterator&

# ::stappler::memory::pointer_iterator<class,class,class>::operator-(stappler::memory::pointer_iterator::iterator const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::memory::pointer_iterator::iterator const&

Возвращает:
* difference_type

# ::stappler::memory::pointer_iterator<class,class,class>::operator*() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* reference

# ::stappler::memory::pointer_iterator<class,class,class>::operator->() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* pointer

# ::stappler::memory::pointer_iterator<class,class,class>::operator[](stappler::memory::pointer_iterator::size_type) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::memory::pointer_iterator::size_type

Возвращает:
* reference

# ::stappler::memory::pointer_iterator<class,class,class>::operator-(stappler::memory::pointer_iterator::pointer) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::memory::pointer_iterator::pointer

Возвращает:
* size_type

# ::stappler::memory::pointer_iterator<class,class,class>::operator pointer_iterator<value_type,const value_type*,const value_type&>() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* pointer_iterator<stappler::memory::pointer_iterator::value_type, const stappler::memory::pointer_iterator::value_type *, const stappler::memory::pointer_iterator::value_type &>

# ::stappler::memory::pointer_iterator<class,class,class>::current

## BRIEF

## CONTENT

Доступ: protected

Тип: pointer
