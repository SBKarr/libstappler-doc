Title: SPMemStorageMemImpl.h


# STAPPLER_CORE_MEMORY_SPMEMSTORAGEMEMIMPL_H_

## BRIEF

Заголовок реализации линейного контейнера

## CONTENT

Заголовок реализации линейного контейнера


# ::stappler::memory::impl::mem_small<typename,size_t>

## BRIEF

Тип линейного контейнера в форме оптимизации для малых обьектов

## CONTENT

Тип линейного контейнера в форме оптимизации для малых обьектов

Параметры шаблона:
* typename Type - хранимый тип
* size_t ByteCount - размер в байтах


# ::stappler::memory::impl::mem_small<typename,size_t>::self

## BRIEF

Тип себя

## CONTENT

Тип себя

# ::stappler::memory::impl::mem_small<typename,size_t>::pointer

## BRIEF

Тип указателя

## CONTENT

Тип указателя


# ::stappler::memory::impl::mem_small<typename,size_t>::const_pointer

## BRIEF

Тип постоянного указателя

## CONTENT

Тип постоянного указателя


# ::stappler::memory::impl::mem_small<typename,size_t>::size_type

## BRIEF

Тип размера

## CONTENT

Тип размера


# ::stappler::memory::impl::mem_small<typename,size_t>::allocator

## BRIEF

Тип аллокатора

## CONTENT

Тип аллокатора


# ::stappler::memory::impl::mem_small<typename,size_t>::max_capacity()

## BRIEF

Возвращает максимальную вместимость

## CONTENT

Возвращает максимальную вместимость

Возвращает:
* size_type

# ::stappler::memory::impl::mem_small<typename,size_t>::assign(stappler::memory::impl::mem_small::allocator&,stappler::memory::impl::mem_small::const_pointer,stappler::memory::impl::mem_small::size_type)

## BRIEF

Копирует элементы внутрь контейнера

## CONTENT

Копирует элементы внутрь контейнера

Параметры:
* stappler::memory::impl::mem_small::allocator& - аллокатор
* stappler::memory::impl::mem_small::const_pointer - указатель на блок памяти
* stappler::memory::impl::mem_small::size_type - число элементов в блоке памяти


# ::stappler::memory::impl::mem_small<typename,size_t>::move_assign(stappler::memory::impl::mem_small::allocator&,stappler::memory::impl::mem_small::pointer,stappler::memory::impl::mem_small::size_type)

## BRIEF

Перемещает элементы внутрь контейнера

## CONTENT

Перемещает элементы внутрь контейнера

Параметры:
* stappler::memory::impl::mem_small::allocator& - аллокатор
* stappler::memory::impl::mem_small::pointer - указатель на блок памяти
* stappler::memory::impl::mem_small::size_type - число элементов в блоке памяти


# ::stappler::memory::impl::mem_small<typename,size_t>::force_clear()

## BRIEF

Принудительно полностью очищает контейнер

## CONTENT

Принудительно полностью очищает контейнер


# ::stappler::memory::impl::mem_small<typename,size_t>::drop_unused()

## BRIEF

Очищает неиспользуемые элементы

## CONTENT

Очищает неиспользуемые элементы


# ::stappler::memory::impl::mem_small<typename,size_t>::set_size(size_t)

## BRIEF

Устанавливает размер контейнера

## CONTENT

Устанавливает размер контейнера

Параметры:
* size_t


# ::stappler::memory::impl::mem_small<typename,size_t>::modify_size(intptr_t)

## BRIEF

Добавляет число к размеру контейнера

## CONTENT

Добавляет число к размеру контейнера

Параметры:
* intptr_t

Возвращает:
* size_t

# ::stappler::memory::impl::mem_small<typename,size_t>::size() const

## BRIEF

Возвращает число элементов в контейнере

## CONTENT

Возвращает число элементов в контейнере

Возвращает:
* size_t

# ::stappler::memory::impl::mem_small<typename,size_t>::capacity() const

## BRIEF

Возвращает вместимость контейнера

## CONTENT

Возвращает вместимость контейнера

Возвращает:
* size_t

# ::stappler::memory::impl::mem_small<typename,size_t>::data()

## BRIEF

Возвращает указатель на линейный блок данных контейнера

## CONTENT

Возвращает указатель на линейный блок данных контейнера

Возвращает:
* pointer

# ::stappler::memory::impl::mem_small<typename,size_t>::data() const

## BRIEF

Возвращает указатель на линейный блок данных контейнера

## CONTENT

Возвращает указатель на линейный блок данных контейнера

Возвращает:
* const_pointer

# ::stappler::memory::impl::mem_small<typename,size_t>::storage

## BRIEF

Хранилище данных контейнера

## CONTENT

Хранилище данных контейнера

Тип: std::array<uint8_t, ByteCount>


# ::stappler::memory::impl::mem_large<typename,size_t>

## BRIEF

Тип линейного контейнера в стандартной форме

## CONTENT

Тип линейного контейнера в стандартной форме

Параметры шаблона:
* typename Type - хранимый тип элемента
* size_t Extra - число дополниетльны нулевых байт


# ::stappler::memory::impl::mem_large<typename,size_t>::self

## BRIEF

Тип себя

## CONTENT

Доступ: public

Тип себя


# ::stappler::memory::impl::mem_large<typename,size_t>::pointer

## BRIEF

Тип указателя

## CONTENT

Доступ: public

Тип указателя


# ::stappler::memory::impl::mem_large<typename,size_t>::const_pointer

## BRIEF

Тип постоянного указателя

## CONTENT

Доступ: public

Тип постоянного указателя


# ::stappler::memory::impl::mem_large<typename,size_t>::size_type

## BRIEF

Тип размера

## CONTENT

Доступ: public

Тип размера


# ::stappler::memory::impl::mem_large<typename,size_t>::allocator

## BRIEF

Тип аллокатора

## CONTENT

Доступ: public

Тип аллокатора


# ::stappler::memory::impl::mem_large<typename,size_t>::mem_large()

## BRIEF

Конструктор по умолчанию

## CONTENT

Доступ: public

Конструктор по умолчанию


# ::stappler::memory::impl::mem_large<typename,size_t>::mem_large(stappler::memory::impl::mem_large::self const&)

## BRIEF

Конструктор копирования

## CONTENT

Доступ: public

Конструктор копирования

Параметры:
* stappler::memory::impl::mem_large::self const&


# ::stappler::memory::impl::mem_large<typename,size_t>::operator=(stappler::memory::impl::mem_large::self const&)

## BRIEF

Оператор копирования

## CONTENT

Доступ: public

Оператор копирования

Параметры:
* stappler::memory::impl::mem_large::self const&

Возвращает:
* self&

# ::stappler::memory::impl::mem_large<typename,size_t>::mem_large(stappler::memory::impl::mem_large::self&&)

## BRIEF

Конструктор перемещения

## CONTENT

Доступ: public

Конструктор перемещения. Перемещение возможно только если аллокаторы совпадают, иначе имеет место копирование

Параметры:
* stappler::memory::impl::mem_large::self&&


# ::stappler::memory::impl::mem_large<typename,size_t>::operator=(stappler::memory::impl::mem_large::self&&)

## BRIEF

Оператор перемещения

## CONTENT

Доступ: public

Оператор перемещения. Перемещение возможно только если аллокаторы совпадают, иначе имеет место копирование

Параметры:
* stappler::memory::impl::mem_large::self&&

Возвращает:
* self&

# ::stappler::memory::impl::mem_large<typename,size_t>::assign(stappler::memory::impl::mem_large::allocator&,stappler::memory::impl::mem_large::const_pointer,stappler::memory::impl::mem_large::size_type)

## BRIEF

Копирует значения в контейнер

## CONTENT

Доступ: public

Копирует значения в контейнер

Параметры:
* stappler::memory::impl::mem_large::allocator& - аллокатор
* stappler::memory::impl::mem_large::const_pointer - указатель на значения
* stappler::memory::impl::mem_large::size_type - число элементов


# ::stappler::memory::impl::mem_large<typename,size_t>::move_assign(stappler::memory::impl::mem_large::allocator&,stappler::memory::impl::mem_large::pointer,stappler::memory::impl::mem_large::size_type)

## BRIEF

Перемещает значения в контейнер

## CONTENT

Доступ: public

Перемещает значения в контейнер

Параметры:
* stappler::memory::impl::mem_large::allocator& - аллокатор
* stappler::memory::impl::mem_large::pointer - указатель на значения
* stappler::memory::impl::mem_large::size_type - число элементов


# ::stappler::memory::impl::mem_large<typename,size_t>::assign_weak(stappler::memory::impl::mem_large::pointer,stappler::memory::impl::mem_large::size_type)

## BRIEF

Назначает контейнеру значения без копирования

## CONTENT

Доступ: public

Назначает контейнеру значения без копирования. Реализует принцип Copy-on-write

Параметры:
* stappler::memory::impl::mem_large::pointer - указатель на элементы
* stappler::memory::impl::mem_large::size_type - число элементов


# ::stappler::memory::impl::mem_large<typename,size_t>::assign_weak(stappler::memory::impl::mem_large::const_pointer,stappler::memory::impl::mem_large::size_type)

## BRIEF

Назначает контейнеру значения без копирования

## CONTENT

Доступ: public

Назначает контейнеру значения без копирования. Реализует принцип Copy-on-write

Параметры:
* stappler::memory::impl::mem_large::const_pointer - указатель на элементы
* stappler::memory::impl::mem_large::size_type - число элементов


# ::stappler::memory::impl::mem_large<typename,size_t>::assign_mem(stappler::memory::impl::mem_large::pointer,stappler::memory::impl::mem_large::size_type,stappler::memory::impl::mem_large::size_type)

## BRIEF

Назначает контейнеру значения без копирования

## CONTENT

Доступ: public

Назначает контейнеру значения без копирования

Параметры:
* stappler::memory::impl::mem_large::pointer - указатель на элементы
* stappler::memory::impl::mem_large::size_type - число элементов
* stappler::memory::impl::mem_large::size_type - вместимость блока памяти


# ::stappler::memory::impl::mem_large<typename,size_t>::is_weak() const

## BRIEF

Проверяет, владеет ли контейнер текущим блоком памяти

## CONTENT

Доступ: public

Проверяет, владеет ли контейнер текущим блоком памяти

Возвращает:
* bool

# ::stappler::memory::impl::mem_large<typename,size_t>::reserve(stappler::memory::impl::mem_large::allocator&,stappler::memory::impl::mem_large::size_type)

## BRIEF

Резервирует память под элементы

## CONTENT

Доступ: public

Резервирует память под элементы

Параметры:
* stappler::memory::impl::mem_large::allocator& - аллокатор
* stappler::memory::impl::mem_large::size_type - число элементов


# ::stappler::memory::impl::mem_large<typename,size_t>::clear_dealloc(stappler::memory::impl::mem_large::allocator&)

## BRIEF

Очищает контейнер и освобождает блок памяти

## CONTENT

Доступ: public

Очищает контейнер и освобождает блок памяти

Параметры:
* stappler::memory::impl::mem_large::allocator&


# ::stappler::memory::impl::mem_large<typename,size_t>::force_clear()

## BRIEF

Принудительно освобождает контейнер

## CONTENT

Доступ: public

Принудительно освобождает контейнер


# ::stappler::memory::impl::mem_large<typename,size_t>::extract()

## BRIEF

Извлекает блок данных из контейнера

## CONTENT

Доступ: public

Извлекает блок данных из контейнера. После вызова контейнер не владеет блоком памяти

Возвращает:
* pointer

# ::stappler::memory::impl::mem_large<typename,size_t>::drop_unused()

## BRIEF

Очищает неиспользуемые элементы

## CONTENT

Доступ: public

Очищает неиспользуемые элементы

# ::stappler::memory::impl::mem_large<typename,size_t>::grow_alloc(stappler::memory::impl::mem_large::allocator&,stappler::memory::impl::mem_large::size_type)

## BRIEF

Увеличивает размер контейнера, распределяя новый блок памяти

## CONTENT

Доступ: public

Увеличивает размер контейнера, распределяя новый блок памяти

Параметры:
* stappler::memory::impl::mem_large::allocator&
* stappler::memory::impl::mem_large::size_type - размер нового блока памяти


# ::stappler::memory::impl::mem_large<typename,size_t>::modify_size(intptr_t)

## BRIEF

Изменяет размер контейнера на значение

## CONTENT

Доступ: public

Изменяет размер контейнера на значение

Параметры:
* intptr_t

Возвращает:
* size_t

# ::stappler::memory::impl::mem_large<typename,size_t>::set_size(size_t)

## BRIEF

Устанавливает размер контейнера

## CONTENT

Доступ: public

Устанавливает размер контейнера

Параметры:
* size_t


# ::stappler::memory::impl::mem_large<typename,size_t>::size() const

## BRIEF

Возвращает размер контейнера

## CONTENT

Доступ: public

Возвращает размер контейнера

Возвращает:
* size_t

# ::stappler::memory::impl::mem_large<typename,size_t>::capacity() const

## BRIEF

Возвращает текущую вместимость контейнера

## CONTENT

Доступ: public

Возвращает текущую вместимость контейнера

Возвращает:
* size_t

# ::stappler::memory::impl::mem_large<typename,size_t>::data()

## BRIEF

Возвращает указатель на блок данных контейнера

## CONTENT

Доступ: public

Возвращает указатель на блок данных контейнера

Возвращает:
* pointer

# ::stappler::memory::impl::mem_large<typename,size_t>::data() const

## BRIEF

Возвращает указатель на блок данных контейнера

## CONTENT

Доступ: public

Возвращает указатель на блок данных контейнера

Возвращает:
* const_pointer

# ::stappler::memory::impl::mem_large<typename,size_t>::empty() const

## BRIEF

Проверяет контейнер на пустоту

## CONTENT

Доступ: public

Проверяет контейнер на пустоту

Возвращает:
* bool - true если контейнер пуст

# ::stappler::memory::impl::mem_large<typename,size_t>::_ptr

## BRIEF

Указатель на блок памяти контейнера

## CONTENT

Доступ: protected

Указатель на блок памяти контейнера

Тип: pointer


# ::stappler::memory::impl::mem_large<typename,size_t>::_used

## BRIEF

Число используемых элементов

## CONTENT

Доступ: protected

Число используемых элементов

Тип: size_type


# ::stappler::memory::impl::mem_large<typename,size_t>::_allocated

## BRIEF

Число доступных к заполнению элементов

## CONTENT

Доступ: protected

Число доступных к заполнению элементов

Тип: size_type


# ::stappler::memory::impl::mem_soo_iface<Type,Extra,false>::mem_soo_iface<Type,Extra,false>

## BRIEF

Интерфейс линейного контейнера с отключенной оптимизацией малых объектов

## CONTENT

Интерфейс линейного контейнера с отключенной оптимизацией малых объектов

Параметры шаблона:
* typename Type
* size_t Extra

Базовые классы:
* mem_large<Type,Extra>


# ::stappler::memory::impl::mem_soo_iface<Type,Extra,false>::base

## BRIEF

Тип базового класса

## CONTENT

Доступ: public

Тип базового класса


# ::stappler::memory::impl::mem_soo_iface<Type,Extra,false>::pointer

## BRIEF

Тип указателя

## CONTENT

Доступ: public

Тип указателя


# ::stappler::memory::impl::mem_soo_iface<Type,Extra,false>::const_pointer

## BRIEF

Тип постоянного указателя

## CONTENT

Доступ: public

Тип постоянного указателя


# ::stappler::memory::impl::mem_soo_iface<Type,Extra,false>::size_type

## BRIEF

Тип размера

## CONTENT

Доступ: public

Тип размера


# ::stappler::memory::impl::mem_soo_iface<Type,Extra,false>::allocator

## BRIEF

Тип аллокатора

## CONTENT

Доступ: public

Тип аллокатора


# ::stappler::memory::impl::mem_soo_iface<Type,Extra,false>::get_soo_size()

## BRIEF

Возвращает предел размера буфера малых объектов

## CONTENT

Доступ: public

Возвращает предел размера буфера малых объектов

Возвращает:
* size_type

# ::stappler::memory::impl::mem_soo_iface<Type,Extra,false>::mem_soo_iface(stappler::memory::impl::mem_soo_iface<type-parameter-0-0, Extra, false>::allocator const&)

## BRIEF

Конструктор с аллокатором

## CONTENT

Доступ: public

Конструктор с аллокатором

Параметры:
* stappler::memory::impl::mem_soo_iface<type-parameter-0-0, Extra, false>::allocator const&


# ::stappler::memory::impl::mem_soo_iface<Type,Extra,false>::~mem_soo_iface()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор


# ::stappler::memory::impl::mem_soo_iface<Type,Extra,false>::assign(stappler::memory::impl::mem_soo_iface<type-parameter-0-0, Extra, false>::const_pointer,stappler::memory::impl::mem_soo_iface<type-parameter-0-0, Extra, false>::size_type)

## BRIEF

Копирует элементы в контейнер

## CONTENT

Доступ: public

Копирует элементы в контейнер, заменяя его содержимое

Параметры:
* stappler::memory::impl::mem_soo_iface<type-parameter-0-0, Extra, false>::const_pointer - указатель на блок памяти
* stappler::memory::impl::mem_soo_iface<type-parameter-0-0, Extra, false>::size_type - число элементов



# ::stappler::memory::impl::mem_soo_iface<Type,Extra,false>::reserve_block_optimal()

## BRIEF

Резервирует размер, удобный для возвратной оптимизации пулов памяти

## CONTENT

Доступ: public

Резервирует размер, удобный для возвратной оптимизации пулов памяти

Возвращает:
* pointer - указатель внутреннюю память


# ::stappler::memory::impl::mem_soo_iface<Type,Extra,false>::reserve(stappler::memory::impl::mem_soo_iface<type-parameter-0-0, Extra, false>::size_type,bool)

## BRIEF

Резервирует память под элементы

## CONTENT

Доступ: public

Резервирует память под элементы

Параметры:
* stappler::memory::impl::mem_soo_iface<type-parameter-0-0, Extra, false>::size_type - требуемая вместимость
* bool - true - использовать алгоритм увеличения размера контейнера вместо точного назначения размера

Возвращает:
* pointer- указатель внутреннюю память

# ::stappler::memory::impl::mem_soo_iface<Type,Extra,false>::clear()

## BRIEF

Очищает контейнер

## CONTENT

Доступ: public

Очищает контейнер


# ::stappler::memory::impl::mem_soo_iface<Type,Extra,false>::perform_move(mem_soo_iface<type-parameter-0-0, Extra, false>&&)

## BRIEF

Выполняет перемещение данных в этот контейнер

## CONTENT

Доступ: protected

Выполняет перемещение данных в этот контейнер

Параметры:
* mem_soo_iface<type-parameter-0-0, Extra, false>&&


# ::stappler::memory::impl::mem_soo_iface<Type,Extra,false>::_allocator

## BRIEF

Аллокатор для контейнера

## CONTENT

Доступ: protected

Аллокатор для контейнера

Тип: allocator


# ::stappler::memory::impl::mem_soo_iface<Type,Extra,true>::mem_soo_iface<Type,Extra,true>

## BRIEF

Интерфейс линейного контейнера с активной оптимизацией малых объектов

## CONTENT

Интерфейс линейного контейнера с активной оптимизацией малых объектов. Этот интерфейс может переключаться между стандартным и малым режимом в зависимости от содержимого.

Параметры шаблона:
* typename Type
* size_t Extra


# ::stappler::memory::impl::mem_soo_iface<Type,Extra,true>::pointer

## BRIEF

Тип указателя

## CONTENT

Доступ: public

Тип указателя


# ::stappler::memory::impl::mem_soo_iface<Type,Extra,true>::const_pointer

## BRIEF

Тип постоянного указателя

## CONTENT

Доступ: public

Тип постоянного указателя


# ::stappler::memory::impl::mem_soo_iface<Type,Extra,true>::size_type

## BRIEF

Тип размера

## CONTENT

Доступ: public

Тип размера


# ::stappler::memory::impl::mem_soo_iface<Type,Extra,true>::allocator

## BRIEF

Тип аллокатора

## CONTENT

Доступ: public

Тип аллокатора


# ::stappler::memory::impl::mem_soo_iface<Type,Extra,true>::large_mem

## BRIEF

Тип стандартного режима контейнера

## CONTENT

Доступ: public

Тип стандартного режима контейнера


# ::stappler::memory::impl::mem_soo_iface<Type,Extra,true>::small_mem

## BRIEF

Тип малого режима контейнера

## CONTENT

Доступ: public

Тип малого режима контейнера


# ::stappler::memory::impl::mem_soo_iface<Type,Extra,true>::get_soo_size()

## BRIEF

Возвращает предел размера для малого режима контейнера

## CONTENT

Доступ: public

Возвращает предел размера для малого режима контейнера

Возвращает:
* size_type

# ::stappler::memory::impl::mem_soo_iface<Type,Extra,true>::mem_soo_iface(stappler::memory::impl::mem_soo_iface<type-parameter-0-0, Extra, true>::allocator const&)

## BRIEF

Конструктор с аллокатором

## CONTENT

Доступ: public

Конструктор с аллокатором

Параметры:
* stappler::memory::impl::mem_soo_iface<type-parameter-0-0, Extra, true>::allocator const&


# ::stappler::memory::impl::mem_soo_iface<Type,Extra,true>::~mem_soo_iface()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор


# ::stappler::memory::impl::mem_soo_iface<Type,Extra,true>::assign(stappler::memory::impl::mem_soo_iface<type-parameter-0-0, Extra, true>::const_pointer,stappler::memory::impl::mem_soo_iface<type-parameter-0-0, Extra, true>::size_type)

## BRIEF

Копирует элементы в контейнер

## CONTENT

Доступ: public

Копирует элементы в контейнер. Заменяет существующее содержимое

Параметры:
* stappler::memory::impl::mem_soo_iface<type-parameter-0-0, Extra, true>::const_pointer - указатель на новые элементы
* stappler::memory::impl::mem_soo_iface<type-parameter-0-0, Extra, true>::size_type - число элементов


# ::stappler::memory::impl::mem_soo_iface<Type,Extra,true>::assign_weak(stappler::memory::impl::mem_soo_iface<type-parameter-0-0, Extra, true>::pointer,stappler::memory::impl::mem_soo_iface<type-parameter-0-0, Extra, true>::size_type)

## BRIEF

Назначает содержимое без копирования блока памяти.

## CONTENT

Доступ: public

Назначает содержимое без копирования блока памяти. Реализует Copy-on-write по возможности

Параметры:
* stappler::memory::impl::mem_soo_iface<type-parameter-0-0, Extra, true>::pointer - указатель на новые элементы
* stappler::memory::impl::mem_soo_iface<type-parameter-0-0, Extra, true>::size_type - число элементов


# ::stappler::memory::impl::mem_soo_iface<Type,Extra,true>::assign_weak(stappler::memory::impl::mem_soo_iface<type-parameter-0-0, Extra, true>::const_pointer,stappler::memory::impl::mem_soo_iface<type-parameter-0-0, Extra, true>::size_type)

## BRIEF

Назначает содержимое без копирования блока памяти.

## CONTENT

Назначает содержимое без копирования блока памяти. Реализует Copy-on-write по возможности

Доступ: public

Параметры:
* stappler::memory::impl::mem_soo_iface<type-parameter-0-0, Extra, true>::const_pointer - указатель на новые элементы
* stappler::memory::impl::mem_soo_iface<type-parameter-0-0, Extra, true>::size_type - число элементов


# ::stappler::memory::impl::mem_soo_iface<Type,Extra,true>::assign_mem(stappler::memory::impl::mem_soo_iface<type-parameter-0-0, Extra, true>::pointer,stappler::memory::impl::mem_soo_iface<type-parameter-0-0, Extra, true>::size_type,stappler::memory::impl::mem_soo_iface<type-parameter-0-0, Extra, true>::size_type)

## BRIEF

Назначает новый блок памяти контейнеру

## CONTENT

Доступ: public

Назначает новый блок памяти контейнеру

Параметры:
* stappler::memory::impl::mem_soo_iface<type-parameter-0-0, Extra, true>::pointer - указатель на новые элементы
* stappler::memory::impl::mem_soo_iface<type-parameter-0-0, Extra, true>::size_type - число элементов
* stappler::memory::impl::mem_soo_iface<type-parameter-0-0, Extra, true>::size_type - вместимость блока памяти


# ::stappler::memory::impl::mem_soo_iface<Type,Extra,true>::is_weak() const

## BRIEF

Проверяет, владеет ли контейнер блоком памяти

## CONTENT

Доступ: public

Проверяет, владеет ли контейнер блоком памяти

Возвращает:
* bool

# ::stappler::memory::impl::mem_soo_iface<Type,Extra,true>::reserve(stappler::memory::impl::mem_soo_iface<type-parameter-0-0, Extra, true>::size_type,bool)

## BRIEF

Резервирует блок памяти

## CONTENT

Доступ: public

Резервирует блок памяти

Параметры:
* stappler::memory::impl::mem_soo_iface<type-parameter-0-0, Extra, true>::size_type - требуемая вместимость
* bool - true - использовать алгоритм увеличения размера контейнера вместо точного назначения размера

Возвращает:
* pointer

# ::stappler::memory::impl::mem_soo_iface<Type,Extra,true>::clear()

## BRIEF

Очищает контейнер

## CONTENT

Доступ: public

Очищает контейнер

# ::stappler::memory::impl::mem_soo_iface<Type,Extra,true>::force_clear()

## BRIEF

Принудительно очищает контейнер

## CONTENT

Доступ: public

Принудительно очищает контейнер


# ::stappler::memory::impl::mem_soo_iface<Type,Extra,true>::extract()

## BRIEF

Извлекает блок памяти из контейнера

## CONTENT

Доступ: public

Извлекает блок памяти из контейнера. После вызова контейнер больше не владеет блоком памяти.

Возвращает:
* pointer - извлечённый блок памяти

# ::stappler::memory::impl::mem_soo_iface<Type,Extra,true>::data()

## BRIEF

Возвращает указатель на данные контейнера

## CONTENT

Доступ: public

Возвращает указатель на данные контейнера

Возвращает:
* pointer

# ::stappler::memory::impl::mem_soo_iface<Type,Extra,true>::data() const

## BRIEF

Возвращает указатель на данные контейнера

## CONTENT

Доступ: public

Возвращает указатель на данные контейнера

Возвращает:
* const_pointer

# ::stappler::memory::impl::mem_soo_iface<Type,Extra,true>::size() const

## BRIEF

Возвращает размер контейнера

## CONTENT

Доступ: public

Возвращает размер контейнера

Возвращает:
* size_type

# ::stappler::memory::impl::mem_soo_iface<Type,Extra,true>::capacity() const

## BRIEF

Возвращает вместимость контейнера

## CONTENT

Доступ: public

Возвращает вместимость контейнера

Возвращает:
* size_type

# ::stappler::memory::impl::mem_soo_iface<Type,Extra,true>::empty() const

## BRIEF

Проверяет контейнер на пустоту

## CONTENT

Доступ: public

Проверяет контейнер на пустоту

Возвращает:
* bool - true, если контейнер пуст

# ::stappler::memory::impl::mem_soo_iface<Type,Extra,true>::perform_move(mem_soo_iface<type-parameter-0-0, Extra, true>&&)

## BRIEF

Выполняет перемещение данных в этот контейнер

## CONTENT

Доступ: protected

Параметры:
* mem_soo_iface<type-parameter-0-0, Extra, true>&&


# ::stappler::memory::impl::mem_soo_iface<Type,Extra,true>::clear_dealloc(stappler::memory::impl::mem_soo_iface<type-parameter-0-0, Extra, true>::allocator&)

## BRIEF

Очищает контейнер и возвращает блок данных

## CONTENT

Доступ: protected

Очищает контейнер и возвращает блок данных

Параметры:
* stappler::memory::impl::mem_soo_iface<type-parameter-0-0, Extra, true>::allocator&


# ::stappler::memory::impl::mem_soo_iface<Type,Extra,true>::modify_size(intptr_t)

## BRIEF

Модифицирует размер на значение

## CONTENT

Доступ: protected

Модифицирует размер на значение

Параметры:
* intptr_t

Возвращает:
* size_type

# ::stappler::memory::impl::mem_soo_iface<Type,Extra,true>::set_size(stappler::memory::impl::mem_soo_iface<type-parameter-0-0, Extra, true>::size_type)

## BRIEF

Устанавливает текущий размер контейнера

## CONTENT

Доступ: protected

Устанавливает текущий размер контейнера

Параметры:
* stappler::memory::impl::mem_soo_iface<type-parameter-0-0, Extra, true>::size_type


# ::stappler::memory::impl::mem_soo_iface<Type,Extra,true>::_allocator

## BRIEF

Аллокатор

## CONTENT

Доступ: protected

Аллокатор

Тип: allocator


# ::stappler::memory::impl::mem_soo_iface<Type,Extra,true>::is_small() const

## BRIEF

Проверяет, используется ли малый режим контейнера

## CONTENT

Доступ: private

Проверяет, используется ли малый режим контейнера

Возвращает:
* bool

# ::stappler::memory::impl::mem_soo_iface<Type,Extra,true>::is_large() const

## BRIEF

Проверяет, используется ли стандартный режим контейнера

## CONTENT

Доступ: private

Проверяет, используется ли стандартный режим контейнера

Возвращает:
* bool

# ::stappler::memory::impl::mem_soo_iface<Type,Extra,true>::set_large_flag()

## BRIEF

Устанавливает флаг стандартного режима для аллокатора

## CONTENT

Доступ: private

Устанавливает флаг стандартного режима для аллокатора


# ::stappler::memory::impl::mem_soo_iface<Type,Extra,true>::set_large_flag_force()

## BRIEF

Принудительно переключает контейнер в стандартный режим, отбрасывает данные

## CONTENT

Доступ: private

Принудительно переключает контейнер в стандартный режим, отбрасывает данные


# ::stappler::memory::impl::mem_soo_iface<Type,Extra,true>::set_small_flag()

## BRIEF

Устанавливает флаг малого режима для аллокатора

## CONTENT

Доступ: private

Устанавливает флаг малого режима для аллокатора

# ::stappler::memory::impl::mem_soo_iface<Type,Extra,true>::

## BRIEF

Анонимное объединение режимов контейнера

## CONTENT

Доступ: private

Анонимное объединение режимов контейнера


# ::stappler::memory::impl::mem_soo_iface<Type,Extra,true>::_large

## BRIEF

Структура стандартного режима контейнера

## CONTENT

Структура стандартного режима контейнера

Тип: stappler::memory::impl::mem_soo_iface<type-parameter-0-0, Extra, true>::large_mem


# ::stappler::memory::impl::mem_soo_iface<Type,Extra,true>::_small

## BRIEF

Структура малого режима контейнера

## CONTENT

Структура малого режима контейнера

Тип: stappler::memory::impl::mem_soo_iface<type-parameter-0-0, Extra, true>::small_mem
