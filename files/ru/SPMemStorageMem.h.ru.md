Title: SPMemStorageMem.h


# STAPPLER_CORE_MEMORY_SPMEMSTORAGEMEM_H_

## BRIEF

Заголовок метаконтейнера линейной памяти

## CONTENT

Заголовок метаконтейнера линейной памяти. Этот контейнер используется в качестве основе для векторов и строк.


# ::stappler::memory::mem_sso_test<typename>

## BRIEF

Интерфейс проверки доступности оптимизации малых объектов для типа

## CONTENT

Интерфейс проверки доступности оптимизации малых объектов для типа

Параметры шаблона:
* typename Type


# ::stappler::memory::mem_sso_test<typename>::value

## BRIEF

Значение, показывающее, доступна ли оптимизация

## CONTENT

Значение, показывающее, доступна ли оптимизация

Тип: bool const


# ::stappler::memory::storage_mem_soo<typename,size_t>

## BRIEF

Базовый тип линейного контейнера с оптимизацией малых объектах

## CONTENT

Базовый тип линейного контейнера с оптимизацией малых объектах

Параметры шаблона:
* typename Type - тип хранимого нчения
* size_t Extra - число дополнительных нулевых элементов

Базовые классы:
* impl::mem_soo_iface<Type,Extra,mem_sso_test<Type>::value> - класс, зависящий от доступности оптимизации малых объектов


# ::stappler::memory::storage_mem_soo<typename,size_t>::base

## BRIEF

Базовый класс

## CONTENT

Доступ: public

Базовый класс


# ::stappler::memory::storage_mem_soo<typename,size_t>::self

## BRIEF

Тип себя

## CONTENT

Тип себя

Доступ: public


# ::stappler::memory::storage_mem_soo<typename,size_t>::pointer

## BRIEF

Тип указателя на значение

## CONTENT

Доступ: public

Тип указателя на значение


# ::stappler::memory::storage_mem_soo<typename,size_t>::const_pointer

## BRIEF

Тип постоянного указателя на значение

## CONTENT

Доступ: public

Тип постоянного указателя на значение


# ::stappler::memory::storage_mem_soo<typename,size_t>::reference

## BRIEF

Тип ссылки на значение

## CONTENT

Доступ: public

Тип ссылки на значение


# ::stappler::memory::storage_mem_soo<typename,size_t>::const_reference

## BRIEF

Тип постоянной ссылки на значение

## CONTENT

Доступ: public

Тип постоянной ссылки на значение


# ::stappler::memory::storage_mem_soo<typename,size_t>::size_type

## BRIEF

Тип размера

## CONTENT

Доступ: public

Тип размера


# ::stappler::memory::storage_mem_soo<typename,size_t>::allocator

## BRIEF

Тип аллокатора

## CONTENT

Доступ: public

Тип аллокатора


# ::stappler::memory::storage_mem_soo<typename,size_t>::iterator

## BRIEF

Тип итератора

## CONTENT

Доступ: public

Тип итератора


# ::stappler::memory::storage_mem_soo<typename,size_t>::const_iterator

## BRIEF

Тип постоянного итератора

## CONTENT

Доступ: public

Тип постоянного итератора


# ::stappler::memory::storage_mem_soo<typename,size_t>::reverse_iterator

## BRIEF

Тип обратного итератора

## CONTENT

Доступ: public

Тип обратного итератора


# ::stappler::memory::storage_mem_soo<typename,size_t>::const_reverse_iterator

## BRIEF

Тип постоянного обратного итератора

## CONTENT

Доступ: public

Тип постоянного обратного итератора


# ::stappler::memory::storage_mem_soo<typename,size_t>::storage_mem_soo(stappler::memory::storage_mem_soo::allocator const&)

## BRIEF

Конструктор контейнера

## CONTENT

Доступ: public

Конструктор контейнера

Параметры:
* stappler::memory::storage_mem_soo::allocator const& - аллокатор


# ::stappler::memory::storage_mem_soo<typename,size_t>::storage_mem_soo(stappler::memory::storage_mem_soo::pointer,stappler::memory::storage_mem_soo::size_type,stappler::memory::storage_mem_soo::allocator const&)

## BRIEF

Конструктор контейнера из блока памяти

## CONTENT

Доступ: public

Конструктор контейнера из блока памяти

Параметры:
* stappler::memory::storage_mem_soo::pointer - начало блока памяти
* stappler::memory::storage_mem_soo::size_type - размер блока памяти в элементах
* stappler::memory::storage_mem_soo::allocator const& - аллокатор


# ::stappler::memory::storage_mem_soo<typename,size_t>::storage_mem_soo(stappler::memory::storage_mem_soo::const_pointer,stappler::memory::storage_mem_soo::size_type,stappler::memory::storage_mem_soo::allocator const&)

## BRIEF

Конструктор контейнера из блока памяти

## CONTENT

Доступ: public

Конструктор контейнера из блока памяти

Параметры:
* stappler::memory::storage_mem_soo::const_pointer- начало блока памяти
* stappler::memory::storage_mem_soo::size_type - размер блока памяти в элементах
* stappler::memory::storage_mem_soo::allocator const& - аллокатор


# ::stappler::memory::storage_mem_soo<typename,size_t>::storage_mem_soo(stappler::memory::storage_mem_soo::self const&,stappler::memory::storage_mem_soo::size_type,stappler::memory::storage_mem_soo::size_type,stappler::memory::storage_mem_soo::allocator const&)

## BRIEF

Конструктор из части другого контейнера

## CONTENT

Доступ: public

Конструктор из части другого контейнера

Параметры:
* stappler::memory::storage_mem_soo::self const& - другой контейнер
* stappler::memory::storage_mem_soo::size_type - смещение внутри контейнера
* stappler::memory::storage_mem_soo::size_type - чисто элементов
* stappler::memory::storage_mem_soo::allocator const& - аллокатор


# ::stappler::memory::storage_mem_soo<typename,size_t>::storage_mem_soo(stappler::memory::storage_mem_soo::self const&,stappler::memory::storage_mem_soo::allocator const&)

## BRIEF

Конструктор копирования

## CONTENT

Доступ: public

Конструктор копирования

Параметры:
* stappler::memory::storage_mem_soo::self const&
* stappler::memory::storage_mem_soo::allocator const&


# ::stappler::memory::storage_mem_soo<typename,size_t>::storage_mem_soo(stappler::memory::storage_mem_soo::self&&,stappler::memory::storage_mem_soo::allocator const&)

## BRIEF

Конструктор перемещения

## CONTENT

Доступ: public

Конструктор перемещения. Перемещение работает только если аллокаторы совпадают, иначе происходит копирование

Параметры:
* stappler::memory::storage_mem_soo::self&&
* stappler::memory::storage_mem_soo::allocator const&


# ::stappler::memory::storage_mem_soo<typename,size_t>::operator=(stappler::memory::storage_mem_soo::self const&)

## BRIEF

Оператор копирования

## CONTENT

Доступ: public

Оператор копирования

Параметры:
* stappler::memory::storage_mem_soo::self const&

Возвращает:
* storage_mem_soo<Type, Extra>&

# ::stappler::memory::storage_mem_soo<typename,size_t>::operator=(stappler::memory::storage_mem_soo::self&&)

## BRIEF

Оператор перемещения

## CONTENT

Доступ: public

Оператор перемещения. Перемещение работает только если аллокаторы совпадают, иначе происходит копирование.

Параметры:
* stappler::memory::storage_mem_soo::self&&

Возвращает:
* storage_mem_soo<Type, Extra>&

# ::stappler::memory::storage_mem_soo<typename,size_t>::assign(stappler::memory::storage_mem_soo::self const&)

## BRIEF

Копирует содержимое из другого контейнера

## CONTENT

Доступ: public

Копирует содержимое из другого контейнера

Параметры:
* stappler::memory::storage_mem_soo::self const&


# ::stappler::memory::storage_mem_soo<typename,size_t>::assign(stappler::memory::storage_mem_soo::self const&,stappler::memory::storage_mem_soo::size_type,stappler::memory::storage_mem_soo::size_type)

## BRIEF

Копирует часть содержимого из другого контейнера

## CONTENT

Доступ: public

Копирует часть содержимого из другого контейнера

Параметры:
* stappler::memory::storage_mem_soo::self const& - другой контейнер
* stappler::memory::storage_mem_soo::size_type - смещение внутри контейнера
* stappler::memory::storage_mem_soo::size_type - число копируемых элементов


# ::stappler::memory::storage_mem_soo<typename,size_t>::emplace_back<typename>(Args &&...)

## BRIEF

Добавляет элемент в конец контейнера с конструированием на месте

## CONTENT

Доступ: public

Добавляет элемент в конец контейнера с конструированием на месте

Параметры шаблона:
* typename Args

Параметры:
* Args &&...

Возвращает:
* reference - ссылка на новый элемент

# ::stappler::memory::storage_mem_soo<typename,size_t>::pop_back()

## BRIEF

Убирает элемент из конца контейнера

## CONTENT

Доступ: public

Убирает элемент из конца контейнера


# ::stappler::memory::storage_mem_soo<typename,size_t>::emplace_back_unsafe<typename>(Args &&...)

## BRIEF

Добавляет элемент в конец контейнера с конструированием на месте, не проверяет достаточность размера контейнера

## CONTENT

Доступ: public

Добавляет элемент в конец контейнера с конструированием на месте, не проверяет достаточность размера контейнера. Используется в алгоритмах контейнеров, реализуемых над этим.

Параметры шаблона:
* typename Args

Параметры:
* Args &&...

Возвращает:
* reference - ссылка на новое значение

# ::stappler::memory::storage_mem_soo<typename,size_t>::emplace<typename>(stappler::memory::storage_mem_soo::const_iterator,Args &&...)

## BRIEF

Добавляет элемент в контейнер с конструированием на месте по итератору

## CONTENT

Доступ: public

Добавляет элемент в контейнер с конструированием на месте по итератору. Может смещать другие элементы линейного контейнера

Параметры шаблона:
* typename Args

Параметры:
* stappler::memory::storage_mem_soo::const_iterator
* Args &&...

Возвращает:
* iterator - итератор на месте добавления

# ::stappler::memory::storage_mem_soo<typename,size_t>::emplace_safe<typename>(stappler::memory::storage_mem_soo::const_iterator,Args &&...)

## BRIEF

Добавляет элемент в контейнер с конструированием на месте по итератору

## CONTENT

Доступ: public

Добавляет элемент в контейнер с конструированием на месте по итератору. Может смещать другие элементы линейного контейнера. Использует безопасный алгоритм через распределение дополниетльной ячейки в конце контейнера.

Параметры шаблона:
* typename Args

Параметры:
* stappler::memory::storage_mem_soo::const_iterator
* Args &&...

Возвращает:
* iterator - итератор на месте нового элемента

# ::stappler::memory::storage_mem_soo<typename,size_t>::insert_back(stappler::memory::storage_mem_soo::const_pointer,stappler::memory::storage_mem_soo::size_type)

## BRIEF

Копирует новые элеенты в конец контейнера

## CONTENT

Доступ: public

Копирует новые элеенты в конец контейнера

Параметры:
* stappler::memory::storage_mem_soo::const_pointer
* stappler::memory::storage_mem_soo::size_type


# ::stappler::memory::storage_mem_soo<typename,size_t>::insert_back(stappler::memory::storage_mem_soo::self const&)

## BRIEF

Копирует новый элемент в конец контейнера

## CONTENT

Доступ: public

Копирует новый элемент в конец контейнера

Параметры:
* stappler::memory::storage_mem_soo::self const&


# ::stappler::memory::storage_mem_soo<typename,size_t>::insert_back(stappler::memory::storage_mem_soo::self const&,stappler::memory::storage_mem_soo::size_type,stappler::memory::storage_mem_soo::size_type)

## BRIEF

Копирует новые элеенты из другого контейнера в конец

## CONTENT

Доступ: public

Копирует новые элеенты из другого контейнера в конец

Параметры:
* stappler::memory::storage_mem_soo::self const&
* stappler::memory::storage_mem_soo::size_type - смещение внутри контейнера
* stappler::memory::storage_mem_soo::size_type - число копируетмых элементов


# ::stappler::memory::storage_mem_soo<typename,size_t>::insert(stappler::memory::storage_mem_soo::size_type,stappler::memory::storage_mem_soo::const_pointer,stappler::memory::storage_mem_soo::size_type)

## BRIEF

Копирует новые элементы внутрь контейнера по смещению

## CONTENT

Доступ: public

Копирует новые элементы внутрь контейнера по смещению. Смещает элементы внутри при необходиомтси

Параметры:
* stappler::memory::storage_mem_soo::size_type - смещение внутри контейнера для копирования
* stappler::memory::storage_mem_soo::const_pointer - указатель на новые элементы
* stappler::memory::storage_mem_soo::size_type - число новых элементов


# ::stappler::memory::storage_mem_soo<typename,size_t>::insert(stappler::memory::storage_mem_soo::size_type,stappler::memory::storage_mem_soo::self const&)

## BRIEF

Копирует новые элементы внутрь контейнера по смещению

## CONTENT

Доступ: public

Копирует новые элементы внутрь контейнера по смещению. Смещает элементы внутри при необходиомтси

Параметры:
* stappler::memory::storage_mem_soo::size_type - смещение внутри контейнера для копирования
* stappler::memory::storage_mem_soo::self const& - контейнер, из которого брать элементы


# ::stappler::memory::storage_mem_soo<typename,size_t>::insert(stappler::memory::storage_mem_soo::size_type,stappler::memory::storage_mem_soo::self const&,stappler::memory::storage_mem_soo::size_type,stappler::memory::storage_mem_soo::size_type)

## BRIEF

Копирует новые элементы внутрь контейнера по смещению

## CONTENT

Доступ: public

Копирует новые элементы внутрь контейнера по смещению

Параметры:
* stappler::memory::storage_mem_soo::size_type - смещение внутри контейнера для копирования
* stappler::memory::storage_mem_soo::self const& - контейнер, из которого брать элементы
* stappler::memory::storage_mem_soo::size_type - смещение внутри другого контейнера
* stappler::memory::storage_mem_soo::size_type - число элементов для копирования


# ::stappler::memory::storage_mem_soo<typename,size_t>::insert<class>(stappler::memory::storage_mem_soo::size_type,stappler::memory::storage_mem_soo::size_type,Args &&...)

## BRIEF

Создаёт несколько новых элементов по смещению

## CONTENT

Доступ: public

Создаёт несколько новых элементов по смещению

Параметры шаблона:
* class Args

Параметры:
* stappler::memory::storage_mem_soo::size_type - смещение внутри контейнера для создания
* stappler::memory::storage_mem_soo::size_type - число новых элементов
* Args &&... - аргументы для создания новых элементов


# ::stappler::memory::storage_mem_soo<typename,size_t>::insert<class>(stappler::memory::storage_mem_soo::const_iterator,stappler::memory::storage_mem_soo::size_type,Args &&...)

## BRIEF

Создаёт несколько новых элементов по итератору

## CONTENT

Доступ: public

Создаёт несколько новых элементов по итератору

Параметры шаблона:
* class Args

Параметры:
* stappler::memory::storage_mem_soo::const_iterator - итератор на позиции создания
* stappler::memory::storage_mem_soo::size_type - число новых элементов
* Args &&... - аргументы для создания новых элементов

Возвращает:
* iterator - итератор на позиции создания

# ::stappler::memory::storage_mem_soo<typename,size_t>::insert<class>(stappler::memory::storage_mem_soo::const_iterator,InputIt,InputIt)

## BRIEF

Копирует новый диапазон элементов по итератору

## CONTENT

Доступ: public

Копирует новый диапазон элементов по итератору

Параметры шаблона:
* class InputIt

Параметры:
* stappler::memory::storage_mem_soo::const_iterator - итератор на позиции вставки
* InputIt - начало диапазона
* InputIt - конец диапазона

Возвращает:
* iterator - итератор на позиции создания

# ::stappler::memory::storage_mem_soo<typename,size_t>::erase(stappler::memory::storage_mem_soo::size_type,stappler::memory::storage_mem_soo::size_type)

## BRIEF

Удаляет несколько элементов

## CONTENT

Доступ: public

Удаляет несколько элементов, смещает оставшиеся

Параметры:
* stappler::memory::storage_mem_soo::size_type - позиция для удаления
* stappler::memory::storage_mem_soo::size_type - число элементов для удаления


# ::stappler::memory::storage_mem_soo<typename,size_t>::erase(stappler::memory::storage_mem_soo::const_iterator)

## BRIEF

Удаляет элемент по итератору

## CONTENT

Доступ: public

Удаляет элемент по итератору, смещает остальные

Параметры:
* stappler::memory::storage_mem_soo::const_iterator

Возвращает:
* iterator - итератор на позиции удаления

# ::stappler::memory::storage_mem_soo<typename,size_t>::erase(stappler::memory::storage_mem_soo::const_iterator,stappler::memory::storage_mem_soo::const_iterator)

## BRIEF

Удаляет диапазон элементов

## CONTENT

Доступ: public

Удаляет диапазон элементов, смещает остальные

Параметры:
* stappler::memory::storage_mem_soo::const_iterator - начало диапазона
* stappler::memory::storage_mem_soo::const_iterator - конец диапазона

Возвращает:
* iterator - итератор на позиции удаления

# ::stappler::memory::storage_mem_soo<typename,size_t>::prepare_replace(stappler::memory::storage_mem_soo::size_type,stappler::memory::storage_mem_soo::size_type,stappler::memory::storage_mem_soo::size_type)

## BRIEF

Подготавливает замену элементов

## CONTENT

Доступ: public

Подготавливает замену элементов. Смещает оставшиеся элементы для того, чтобы вместить новые взамен старых.

Параметры:
* stappler::memory::storage_mem_soo::size_type - позиция для замены
* stappler::memory::storage_mem_soo::size_type - число заменяемых элементов
* stappler::memory::storage_mem_soo::size_type - число новых элементов

Возвращает:
* pointer - указатель на блок для замены

# ::stappler::memory::storage_mem_soo<typename,size_t>::replace(stappler::memory::storage_mem_soo::size_type,stappler::memory::storage_mem_soo::size_type,stappler::memory::storage_mem_soo::const_pointer,stappler::memory::storage_mem_soo::size_type)

## BRIEF

Заменяет блок элементов

## CONTENT

Доступ: public

Заменяет блок элементов

Параметры:
* stappler::memory::storage_mem_soo::size_type - позиция для замены
* stappler::memory::storage_mem_soo::size_type - число заменяемых элементов
* stappler::memory::storage_mem_soo::const_pointer - указатель на новые элменты
* stappler::memory::storage_mem_soo::size_type - число новых элементов


# ::stappler::memory::storage_mem_soo<typename,size_t>::replace(stappler::memory::storage_mem_soo::size_type,stappler::memory::storage_mem_soo::size_type,stappler::memory::storage_mem_soo::self const&)

## BRIEF

Заменяет блок элементов

## CONTENT

Доступ: public

Заменяет блок элементов

Параметры:
* stappler::memory::storage_mem_soo::size_type - позиция для замены
* stappler::memory::storage_mem_soo::size_type - число заменяемых элементов
* stappler::memory::storage_mem_soo::self const& - контейнер с элементами для замены


# ::stappler::memory::storage_mem_soo<typename,size_t>::replace(stappler::memory::storage_mem_soo::size_type,stappler::memory::storage_mem_soo::size_type,stappler::memory::storage_mem_soo::self const&,stappler::memory::storage_mem_soo::size_type,stappler::memory::storage_mem_soo::size_type)

## BRIEF

Заменяет блок элементов

## CONTENT

Доступ: public

Заменяет блок элементов

Параметры:
* stappler::memory::storage_mem_soo::size_type - позиция для замены
* stappler::memory::storage_mem_soo::size_type - число заменяемых элементов
* stappler::memory::storage_mem_soo::self const& - контейнер с элементами для замены
* stappler::memory::storage_mem_soo::size_type - смещение в контейнере с новыми элементами
* stappler::memory::storage_mem_soo::size_type - число новых элементов


# ::stappler::memory::storage_mem_soo<typename,size_t>::replace(stappler::memory::storage_mem_soo::size_type,stappler::memory::storage_mem_soo::size_type,stappler::memory::storage_mem_soo::size_type,Type)

## BRIEF

Заменяет блок элементов фиксированным элементом

## CONTENT

Доступ: public

Заменяет блок элементов фиксированным элементом

Параметры:
* stappler::memory::storage_mem_soo::size_type - позиция для замены
* stappler::memory::storage_mem_soo::size_type - число заменяемых элементов
* stappler::memory::storage_mem_soo::size_type - число новых элементов
* Type - значение нового элемента


# ::stappler::memory::storage_mem_soo<typename,size_t>::replace<class>(stappler::memory::storage_mem_soo::const_iterator,stappler::memory::storage_mem_soo::const_iterator,InputIt,InputIt)

## BRIEF

Заменяет элементы значениями из диапазона

## CONTENT

Доступ: public

Заменяет элементы значениями из диапазона

Параметры шаблона:
* class InputIt

Параметры:
* stappler::memory::storage_mem_soo::const_iterator - начало диапазона внутри контейнера
* stappler::memory::storage_mem_soo::const_iterator - конец диапазона внутри контейнера
* InputIt - начало внешнего диапазона
* InputIt - начало внешнего диапазона

Возвращает:
* iterator - итератор на месте вставки

# ::stappler::memory::storage_mem_soo<typename,size_t>::fill<typename>(stappler::memory::storage_mem_soo::size_type,Args &&...)

## BRIEF

Заполняет контейнер фиксированным значением

## CONTENT

Доступ: public

Заполняет контейнер фиксированным значением

Параметры шаблона:
* typename Args

Параметры:
* stappler::memory::storage_mem_soo::size_type - число элементов к заполнению
* Args &&... - аргументы для создания элементов


# ::stappler::memory::storage_mem_soo<typename,size_t>::resize<typename>(stappler::memory::storage_mem_soo::size_type,Args &&...)

## BRIEF

Изменяет размер контейнера, заполняет новые элементы фиксированным значением из аргументов

## CONTENT

Доступ: public

Изменяет размер контейнера, заполняет новые элементы фиксированным значением из аргументов

Параметры шаблона:
* typename Args

Параметры:
* stappler::memory::storage_mem_soo::size_type - новый размер контейнера
* Args &&... - аргументы для создания элементов


# ::stappler::memory::storage_mem_soo<typename,size_t>::at(stappler::memory::storage_mem_soo::size_type)

## BRIEF

Возвращает элемент по его позиции

## CONTENT

Доступ: public

Возвращает элемент по его позиции. Может вести к ошибке, если индекс больше числа элеентов в контейнере

Параметры:
* stappler::memory::storage_mem_soo::size_type

Возвращает:
* reference

# ::stappler::memory::storage_mem_soo<typename,size_t>::at(stappler::memory::storage_mem_soo::size_type) const

## BRIEF

Возвращает элемент по его позиции

## CONTENT

Доступ: public

Возвращает элемент по его позиции. Может вести к ошибке, если индекс больше числа элеентов в контейнере

Параметры:
* stappler::memory::storage_mem_soo::size_type

Возвращает:
* const_reference

# ::stappler::memory::storage_mem_soo<typename,size_t>::back()

## BRIEF

Возвращает последний элемент

## CONTENT

Доступ: public

Возвращает последний элемент. Ведёт к ошибке если контейнер пуст.

Возвращает:
* reference

# ::stappler::memory::storage_mem_soo<typename,size_t>::back() const

## BRIEF

Возвращает последний элемент

## CONTENT

Доступ: public

Возвращает последний элемент. Ведёт к ошибке если контейнер пуст.

Возвращает:
* const_reference

# ::stappler::memory::storage_mem_soo<typename,size_t>::front()

## BRIEF

Возвращает первый элемент

## CONTENT

Доступ: public

Возвращает первый элемент. Ведёт к ошибке если контейнер пуст.

Возвращает:
* reference

# ::stappler::memory::storage_mem_soo<typename,size_t>::front() const

## BRIEF

Возвращает первый элемент

## CONTENT

Доступ: public

Возвращает первый элемент. Ведёт к ошибке если контейнер пуст.

Возвращает:
* const_reference

# ::stappler::memory::storage_mem_soo<typename,size_t>::begin()

## BRIEF

Возвращает начальный итератор

## CONTENT

Доступ: public

Возвращает начальный итератор

Возвращает:
* iterator

# ::stappler::memory::storage_mem_soo<typename,size_t>::end()

## BRIEF

Возвращает конечный итератор

## CONTENT

Доступ: public

Возвращает конечный итератор

Возвращает:
* iterator

# ::stappler::memory::storage_mem_soo<typename,size_t>::begin() const

## BRIEF

Возвращает начальный итератор

## CONTENT

Доступ: public

Возвращает начальный итератор

Возвращает:
* const_iterator

# ::stappler::memory::storage_mem_soo<typename,size_t>::end() const

## BRIEF

Возвращает конечный итератор

## CONTENT

Доступ: public

Возвращает конечный итератор

Возвращает:
* const_iterator

# ::stappler::memory::storage_mem_soo<typename,size_t>::cbegin() const

## BRIEF

Возвращает начальный итератор

## CONTENT

Доступ: public

Возвращает начальный итератор

Возвращает:
* const_iterator

# ::stappler::memory::storage_mem_soo<typename,size_t>::cend() const

## BRIEF

Возвращает конечный итератор

## CONTENT

Доступ: public

Возвращает конечный итератор

Возвращает:
* const_iterator

# ::stappler::memory::storage_mem_soo<typename,size_t>::rbegin()

## BRIEF

Возвращает начальный обратный итератор

## CONTENT

Доступ: public

Возвращает начальный обратный итератор

Возвращает:
* reverse_iterator

# ::stappler::memory::storage_mem_soo<typename,size_t>::rend()

## BRIEF

Возвращает конечный обратный итератор

## CONTENT

Доступ: public

Возвращает конечный обратный итератор

Возвращает:
* reverse_iterator

# ::stappler::memory::storage_mem_soo<typename,size_t>::rbegin() const

## BRIEF

Возвращает начальный обратный итератор

## CONTENT

Доступ: public

Возвращает начальный обратный итератор

Возвращает:
* const_reverse_iterator

# ::stappler::memory::storage_mem_soo<typename,size_t>::rend() const

## BRIEF

Возвращает конечный обратный итератор

## CONTENT

Доступ: public

Возвращает конечный обратный итератор

Возвращает:
* const_reverse_iterator

# ::stappler::memory::storage_mem_soo<typename,size_t>::crbegin() const

## BRIEF

Возвращает начальный обратный итератор

## CONTENT

Доступ: public

Возвращает начальный обратный итератор

Возвращает:
* const_reverse_iterator

# ::stappler::memory::storage_mem_soo<typename,size_t>::crend() const

## BRIEF

Возвращает конечный обратный итератор

## CONTENT

Доступ: public

Возвращает конечный обратный итератор

Возвращает:
* const_reverse_iterator

# ::stappler::memory::storage_mem_soo<typename,size_t>::shrink_to_fit()

## BRIEF

Уменьшает размер итератора до реально необходимого размера

## CONTENT

Доступ: public

Уменьшает размер итератора до реально необходимого размера


# ::stappler::memory::storage_mem_soo<typename,size_t>::get_allocator() const

## BRIEF

Возвращает аллокатор

## CONTENT

Доступ: public

Возвращает аллокатор

Возвращает:
* allocator&

# ::stappler::memory::storage_mem<typename,size_t>

## BRIEF

Синоним для линейного контейнера

## CONTENT

Синоним для линейного контейнера

Параметры шаблона:
* typename Type
* size_t Extra
