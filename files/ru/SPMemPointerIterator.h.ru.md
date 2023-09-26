Title: SPMemPointerIterator.h


# STAPPLER_CORE_MEMORY_SPMEMPOINTERITERATOR_H_

## BRIEF

Заголовок интерфейса итератора на основе указателя

## CONTENT

Заголовок интерфейса итератора на основе указателя. Такие итераторы используются для линейных контейнеров


# ::stappler::memory::pointer_iterator<class,class,class>

## BRIEF

Тип итератора на основе указателя

## CONTENT

Тип итератора на основе указателя

Параметры шаблона:
* class Type - исходный тип элемента
* class Pointer - тип указателя
* class Reference - тип ссылки


# ::stappler::memory::pointer_iterator<class,class,class>::iterator_category

## BRIEF

Категория итератора для стандартной библиотеки

## CONTENT

Доступ: public

Категория итератора для стандартной библиотеки


# ::stappler::memory::pointer_iterator<class,class,class>::size_type

## BRIEF

Тип размера

## CONTENT

Доступ: public

Тип размера


# ::stappler::memory::pointer_iterator<class,class,class>::pointer

## BRIEF

Тип указателя

## CONTENT

Доступ: public

Тип указателя


# ::stappler::memory::pointer_iterator<class,class,class>::reference

## BRIEF

Тип ссылки

## CONTENT

Доступ: public

Тип указателя


# ::stappler::memory::pointer_iterator<class,class,class>::iterator

## BRIEF

Тип итератора

## CONTENT

Доступ: public

Тип итератора (себя)

# ::stappler::memory::pointer_iterator<class,class,class>::difference_type

## BRIEF

Тип разницы размеров

## CONTENT

Доступ: public

Тип разницы размеров


# ::stappler::memory::pointer_iterator<class,class,class>::value_type

## BRIEF

Тип значения

## CONTENT

Доступ: public

Тип значения

# ::stappler::memory::pointer_iterator<class,class,class>::pointer_iterator()

## BRIEF

Создаёт пустой итератор

## CONTENT

Доступ: public

Создаёт пустой итератор


# ::stappler::memory::pointer_iterator<class,class,class>::pointer_iterator(stappler::memory::pointer_iterator::iterator const&)

## BRIEF

Копирует итератор

## CONTENT

Доступ: public

Копирует итератор

Параметры:
* stappler::memory::pointer_iterator::iterator const&


# ::stappler::memory::pointer_iterator<class,class,class>::pointer_iterator(stappler::memory::pointer_iterator::pointer)

## BRIEF

Создаёт итератор из указателя

## CONTENT

Доступ: public

Создаёт итератор из указателя

Параметры:
* stappler::memory::pointer_iterator::pointer


# ::stappler::memory::pointer_iterator<class,class,class>::operator=(stappler::memory::pointer_iterator::iterator const&)

## BRIEF

Копирует итератор

## CONTENT

Доступ: public

Копирует итератор

Параметры:
* stappler::memory::pointer_iterator::iterator const&

Возвращает:
* iterator&

# ::stappler::memory::pointer_iterator<class,class,class>::operator==(stappler::memory::pointer_iterator::iterator const&) const

## BRIEF

Сравнивает итераторы

## CONTENT

Доступ: public

Сравнивает итераторы

Параметры:
* stappler::memory::pointer_iterator::iterator const&

Возвращает:
* bool

# ::stappler::memory::pointer_iterator<class,class,class>::operator!=(stappler::memory::pointer_iterator::iterator const&) const

## BRIEF

Сравнивает итераторы

## CONTENT

Доступ: public

Сравнивает итераторы

Параметры:
* stappler::memory::pointer_iterator::iterator const&

Возвращает:
* bool

# ::stappler::memory::pointer_iterator<class,class,class>::operator<(stappler::memory::pointer_iterator::iterator const&) const

## BRIEF

Сравнивает итераторы как указатели

## CONTENT

Доступ: public

Сравнивает итераторы как указатели

Параметры:
* stappler::memory::pointer_iterator::iterator const&

Возвращает:
* bool

# ::stappler::memory::pointer_iterator<class,class,class>::operator>(stappler::memory::pointer_iterator::iterator const&) const

## BRIEF

Сравнивает итераторы как указатели

## CONTENT

Доступ: public

Сравнивает итераторы как указатели

Параметры:
* stappler::memory::pointer_iterator::iterator const&

Возвращает:
* bool

# ::stappler::memory::pointer_iterator<class,class,class>::operator<=(stappler::memory::pointer_iterator::iterator const&) const

## BRIEF

Сравнивает итераторы как указатели

## CONTENT

Доступ: public

Сравнивает итераторы как указатели

Параметры:
* stappler::memory::pointer_iterator::iterator const&

Возвращает:
* bool

# ::stappler::memory::pointer_iterator<class,class,class>::operator>=(stappler::memory::pointer_iterator::iterator const&) const

## BRIEF

Сравнивает итераторы как указатели

## CONTENT

Доступ: public

Сравнивает итераторы как указатели

Параметры:
* stappler::memory::pointer_iterator::iterator const&

Возвращает:
* bool

# ::stappler::memory::pointer_iterator<class,class,class>::operator++()

## BRIEF

Перезодит к следующему элементу

## CONTENT

Доступ: public

Перезодит к следующему элементу

Возвращает:
* iterator&

# ::stappler::memory::pointer_iterator<class,class,class>::operator++(int)

## BRIEF

Перезодит к следующему элементу постфиксно

## CONTENT

Доступ: public

Перезодит к следующему элементу постфиксно

Параметры:
* int

Возвращает:
* iterator

# ::stappler::memory::pointer_iterator<class,class,class>::operator--()

## BRIEF

Переходит к предыдущему элементу

## CONTENT

Доступ: public

Переходит к предыдущему элементу

Возвращает:
* iterator&

# ::stappler::memory::pointer_iterator<class,class,class>::operator--(int)

## BRIEF

Переходит к предыдущему элементу постфиксно

## CONTENT

Доступ: public

Переходит к предыдущему элементу постфиксно

Параметры:
* int

Возвращает:
* iterator

# ::stappler::memory::pointer_iterator<class,class,class>::operator+=(stappler::memory::pointer_iterator::size_type)

## BRIEF

Увеличивает итератор на несколько элементов

## CONTENT

Доступ: public

Увеличивает итератор на несколько элементов

Параметры:
* stappler::memory::pointer_iterator::size_type

Возвращает:
* iterator&

# ::stappler::memory::pointer_iterator<class,class,class>::operator-=(stappler::memory::pointer_iterator::size_type)

## BRIEF

Уменьшает итератор на несколько элементов

## CONTENT

Доступ: public

Уменьшает итератор на несколько элементов

Параметры:
* stappler::memory::pointer_iterator::size_type

Возвращает:
* iterator&

# ::stappler::memory::pointer_iterator<class,class,class>::operator-(stappler::memory::pointer_iterator::iterator const&) const

## BRIEF

Вычисляет число лементов между итераторами

## CONTENT

Доступ: public

Вычисляет число лементов между итераторами

Параметры:
* stappler::memory::pointer_iterator::iterator const&

Возвращает:
* difference_type

# ::stappler::memory::pointer_iterator<class,class,class>::operator*() const

## BRIEF

Разыменовывает итератор

## CONTENT

Доступ: public

Разыменовывает итератор

Возвращает:
* reference

# ::stappler::memory::pointer_iterator<class,class,class>::operator->() const

## BRIEF

Разыменовывает итератор

## CONTENT

Доступ: public

Разыменовывает итератор

Возвращает:
* pointer

# ::stappler::memory::pointer_iterator<class,class,class>::operator[](stappler::memory::pointer_iterator::size_type) const

## BRIEF

Разыменовывает итератор со смещением

## CONTENT

Доступ: public

Разыменовывает итератор со смещением

Параметры:
* stappler::memory::pointer_iterator::size_type

Возвращает:
* reference

# ::stappler::memory::pointer_iterator<class,class,class>::operator-(stappler::memory::pointer_iterator::pointer) const

## BRIEF

Вычисляет число элементов между итератором и указателем

## CONTENT

Доступ: public

Вычисляет число элементов между итератором и указателем

Параметры:
* stappler::memory::pointer_iterator::pointer

Возвращает:
* size_type

# ::stappler::memory::pointer_iterator<class,class,class>::operator pointer_iterator<value_type,const value_type*,const value_type&>() const

## BRIEF

Конвертирует указатель в постоянный

## CONTENT

Доступ: public

Конвертирует указатель в постоянный

Возвращает:
* pointer_iterator<stappler::memory::pointer_iterator::value_type, const stappler::memory::pointer_iterator::value_type *, const stappler::memory::pointer_iterator::value_type &>

# ::stappler::memory::pointer_iterator<class,class,class>::current

## BRIEF

Текущий указатель итератора

## CONTENT

Доступ: protected

Текущий указатель итератора

Тип: pointer
