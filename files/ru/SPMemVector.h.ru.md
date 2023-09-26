Title: SPMemVector.h


# STAPPLER_CORE_MEMORY_SPMEMVECTOR_H_

## BRIEF

Заголовок динамического вектора на основе пулов памяти

## CONTENT

Заголовок динамического вектора на основе пулов памяти


# ::stappler::memory::vector<typename>

## BRIEF

Структура динамического вектора, аналогичная `std::vector`, на основе пулов памяти

## CONTENT

Структура динамического вектора, аналогичная `std::vector`, на основе пулов памяти

Параметры шаблона:
* typename Type - тип значения вектора

Базовые классы:
* AllocPool


# ::stappler::memory::vector<typename>::allocator_type

## BRIEF

Тип аллокатора

## CONTENT

Доступ: public

Тип аллокатора


# ::stappler::memory::vector<typename>::pointer

## BRIEF

Тип указателя на значение

## CONTENT

Доступ: public

Тип указателя на значение

# ::stappler::memory::vector<typename>::const_pointer

## BRIEF

Тип постоянного указателя на значение

## CONTENT

Доступ: public

Тип постоянного указателя на значение


# ::stappler::memory::vector<typename>::reference

## BRIEF

Тип ссылки на значение

## CONTENT

Доступ: public

Тип ссылки на значение


# ::stappler::memory::vector<typename>::const_reference

## BRIEF

Тип постоянной ссылки на значение

## CONTENT

Доступ: public

Тип постоянной ссылки на значение


# ::stappler::memory::vector<typename>::size_type

## BRIEF

Тип размера

## CONTENT

Доступ: public

Тип размера

# ::stappler::memory::vector<typename>::value_type

## BRIEF

Тип значения

## CONTENT

Доступ: public

Тип значения


# ::stappler::memory::vector<typename>::mem_type

## BRIEF

Тип используемого контейнера для хранения данных вектора

## CONTENT

Доступ: public

Тип используемого контейнера для хранения данных вектора


# ::stappler::memory::vector<typename>::self

## BRIEF

Тип себя

## CONTENT

Доступ: public

Тип себя

# ::stappler::memory::vector<typename>::iterator

## BRIEF

Тип итератора

## CONTENT

Доступ: public

Тип итератора


# ::stappler::memory::vector<typename>::const_iterator

## BRIEF

Тип постоянного итератора

## CONTENT

Доступ: public

Тип постоянного итератора

# ::stappler::memory::vector<typename>::reverse_iterator

## BRIEF

Тип обратного итератора

## CONTENT

Доступ: public

Тип обратного итератора

# ::stappler::memory::vector<typename>::const_reverse_iterator

## BRIEF

Тип постоянного обратного итератора

## CONTENT

Доступ: public

Тип постоянного обратного итератора


# ::stappler::memory::vector<typename>::vector()

## BRIEF

Конструктор по умолчанию

## CONTENT

Доступ: public

Конструктор по умолчанию. Использует пул памяти из текущего контекста

# ::stappler::memory::vector<typename>::vector(stappler::memory::vector::allocator_type const&)

## BRIEF

Конструктор вектора

## CONTENT

Доступ: public

Конструктор вектора

Параметры:
* stappler::memory::vector::allocator_type const& - аллокатор


# ::stappler::memory::vector<typename>::vector(stappler::memory::vector::size_type,Type const&,stappler::memory::vector::allocator_type const&)

## BRIEF

Создаёт вектор и заполняет его значением

## CONTENT

Доступ: public

Создаёт вектор и заполняет его значением

Параметры:
* stappler::memory::vector::size_type - размер вектора
* Type const& - значение для заполнения
* stappler::memory::vector::allocator_type const& - аллокатор


# ::stappler::memory::vector<typename>::vector(stappler::memory::vector::size_type,stappler::memory::vector::allocator_type const&)

## BRIEF

Создаёт вектор и заполняет его пустым значением

## CONTENT

Доступ: public

Создаёт вектор и заполняет его пустым значением

Параметры:
* stappler::memory::vector::size_type - размер вектора
* stappler::memory::vector::allocator_type const& - аллокатор


# ::stappler::memory::vector<typename>::vector<class>(InputIt,InputIt,stappler::memory::vector::allocator_type const&)

## BRIEF

Создаёт вектор, копируя данные из диапазона

## CONTENT

Доступ: public

Создаёт вектор, копируя данные из диапазона

Параметры шаблона:
* class InputIt

Параметры:
* InputIt - начало диапазона
* InputIt - конец диапазона
* stappler::memory::vector::allocator_type const& - аллокатор


# ::stappler::memory::vector<typename>::vector(const vector<Type>&)

## BRIEF

Конструктор копирования

## CONTENT

Доступ: public

Конструктор копирования

Параметры:
* const vector<Type>&


# ::stappler::memory::vector<typename>::vector(const vector<Type>&,stappler::memory::vector::allocator_type const&)

## BRIEF

Конструктор копирования

## CONTENT

Доступ: public

Конструктор копирования

Параметры:
* const vector<Type>&
* stappler::memory::vector::allocator_type const&


# ::stappler::memory::vector<typename>::vector(vector<Type>&&)

## BRIEF

Конструктор перемещения

## CONTENT

Доступ: public

Конструктор перемещения. Перемещение возможно только если аллокаторы совпадают, иначе происходит копирование.

Параметры:
* vector<Type>&&


# ::stappler::memory::vector<typename>::vector(vector<Type>&&,stappler::memory::vector::allocator_type const&)

## BRIEF

Конструктор перемещения

## CONTENT

Доступ: public

Конструктор перемещения. Перемещение возможно только если аллокаторы совпадают, иначе происходит копирование.

Параметры:
* vector<Type>&&
* stappler::memory::vector::allocator_type const&


# ::stappler::memory::vector<typename>::vector(InitializerList<Type>,stappler::memory::vector::allocator_type const&)

## BRIEF

Конструктор из списка инициализации

## CONTENT

Доступ: public

Конструктор из списка инициализации

Параметры:
* InitializerList<Type>
* stappler::memory::vector::allocator_type const&


# ::stappler::memory::vector<typename>::operator=(const vector<Type>&)

## BRIEF

Оператор копирования

## CONTENT

Доступ: public

Оператор копирования

Параметры:
* const vector<Type>&

Возвращает:
* vector<Type>&

# ::stappler::memory::vector<typename>::operator=(vector<Type>&&)

## BRIEF

Оператор перемещения

## CONTENT

Доступ: public

Оператор перемещения. Перемещение возможно только если аллокаторы совпадают, иначе происходит копирование.

Параметры:
* vector<Type>&&

Возвращает:
* vector<Type>&

# ::stappler::memory::vector<typename>::operator=(InitializerList<Type>)

## BRIEF

Оператор копирования из списка инициализации

## CONTENT

Доступ: public

Оператор копирования из списка инициализации

Параметры:
* InitializerList<Type>

Возвращает:
* vector<Type>&

# ::stappler::memory::vector<typename>::assign(stappler::memory::vector::size_type,Type const&)

## BRIEF

Замещает значение вектора заполненным блоком

## CONTENT

Доступ: public

Замещает значение вектора заполненным блоком

Параметры:
* stappler::memory::vector::size_type - размер блока
* Type const& - значение для заполнения


# ::stappler::memory::vector<typename>::assign<class>(InputIt,InputIt)

## BRIEF

Замещает значение вектора копией диапазона

## CONTENT

Доступ: public

Замещает значение вектора копией диапазона

Параметры шаблона:
* class InputIt

Параметры:
* InputIt - начало диапазона
* InputIt - конец диапазона


# ::stappler::memory::vector<typename>::assign(InitializerList<Type>)

## BRIEF

Замещает значение вектора копией из списка инициализации

## CONTENT

Доступ: public

Замещает значение вектора копией из списка инициализации

Параметры:
* InitializerList<Type>


# ::stappler::memory::vector<typename>::assign_strong(Type*,stappler::memory::vector::size_type)

## BRIEF

Замещает значение вектора другим блоком памяти

## CONTENT

Доступ: public

Замещает значение вектора другим блоком памяти

Параметры:
* Type* - указатель на начало блока памяти
* stappler::memory::vector::size_type - размер блока памяти в объектах


# ::stappler::memory::vector<typename>::get_allocator() const

## BRIEF

Возвращает аллокатор

## CONTENT

Доступ: public

Возвращает аллокатор

Возвращает:
* allocator_type

# ::stappler::memory::vector<typename>::at(stappler::memory::vector::size_type)

## BRIEF

Получает доступ к объекту по его индексу.

## CONTENT

Доступ: public

Получает доступ к объекту по его индексу. Если индекс за пределами контейнера - поведение не определено.

Параметры:
* stappler::memory::vector::size_type

Возвращает:
* reference

# ::stappler::memory::vector<typename>::at(stappler::memory::vector::size_type) const

## BRIEF

Получает доступ к объекту по его индексу.

## CONTENT

Доступ: public

Получает доступ к объекту по его индексу. Если индекс за пределами контейнера - поведение не определено.

Параметры:
* stappler::memory::vector::size_type

Возвращает:
* const_reference

# ::stappler::memory::vector<typename>::operator[](stappler::memory::vector::size_type)

## BRIEF

Получает доступ к объекту по его индексу.

## CONTENT

Доступ: public

Получает доступ к объекту по его индексу. Если индекс за пределами контейнера - поведение не определено.

Параметры:
* stappler::memory::vector::size_type

Возвращает:
* reference

# ::stappler::memory::vector<typename>::operator[](stappler::memory::vector::size_type) const

## BRIEF

Получает доступ к объекту по его индексу.

## CONTENT

Доступ: public

Получает доступ к объекту по его индексу. Если индекс за пределами контейнера - поведение не определено.

Параметры:
* stappler::memory::vector::size_type

Возвращает:
* const_reference

# ::stappler::memory::vector<typename>::front()

## BRIEF

Возвращает ссылку на первый объект в контейнере

## CONTENT

Доступ: public

Возвращает ссылку на первый объект в контейнере. Если контейрен пуст - поведение не определено.

Возвращает:
* reference

# ::stappler::memory::vector<typename>::front() const

## BRIEF

Возвращает ссылку на первый объект в контейнере

## CONTENT

Доступ: public

Возвращает ссылку на первый объект в контейнере. Если контейрен пуст - поведение не определено.

Возвращает:
* const_reference

# ::stappler::memory::vector<typename>::back()

## BRIEF

Возвращает ссылку на последний объект в контейнере

## CONTENT

Доступ: public

Возвращает ссылку на последний объект в контейнере. Если контейрен пуст - поведение не определено.

Возвращает:
* reference

# ::stappler::memory::vector<typename>::back() const

## BRIEF

Возвращает ссылку на последний объект в контейнере

## CONTENT

Доступ: public

Возвращает ссылку на последний объект в контейнере. Если контейрен пуст - поведение не определено.

Возвращает:
* const_reference

# ::stappler::memory::vector<typename>::data()

## BRIEF

Возвращает указатель на данные контейнера

## CONTENT

Доступ: public

Возвращает указатель на данные контейнера

Возвращает:
* pointer

# ::stappler::memory::vector<typename>::data() const

## BRIEF

Возвращает указатель на данные контейнера

## CONTENT

Доступ: public

Возвращает указатель на данные контейнера

Возвращает:
* const_pointer

# ::stappler::memory::vector<typename>::begin()

## BRIEF

Возвращает начальный итератор

## CONTENT

Доступ: public

Возвращает начальный итератор

Возвращает:
* iterator

# ::stappler::memory::vector<typename>::end()

## BRIEF

Возвращает конечный итератор

## CONTENT

Доступ: public

Возвращает конечный итератор

Возвращает:
* iterator

# ::stappler::memory::vector<typename>::begin() const

## BRIEF

Возвращает начальный итератор

## CONTENT

Доступ: public

Возвращает начальный итератор

Возвращает:
* const_iterator

# ::stappler::memory::vector<typename>::end() const

## BRIEF

Возвращает конечный итератор

## CONTENT

Доступ: public

Возвращает конечный итератор

Возвращает:
* const_iterator

# ::stappler::memory::vector<typename>::cbegin() const

## BRIEF

Возвращает начальный итератор

## CONTENT

Доступ: public

Возвращает начальный итератор

Возвращает:
* const_iterator

# ::stappler::memory::vector<typename>::cend() const

## BRIEF

Возвращает конечный итератор

## CONTENT

Доступ: public

Возвращает конечный итератор

Возвращает:
* const_iterator

# ::stappler::memory::vector<typename>::rbegin()

## BRIEF

Возвращает начальный обратный итератор

## CONTENT

Доступ: public

Возвращает начальный обратный итератор

Возвращает:
* reverse_iterator

# ::stappler::memory::vector<typename>::rend()

## BRIEF

Возвращает конечный обратный итератор

## CONTENT

Доступ: public

Возвращает конечный обратный итератор

Возвращает:
* reverse_iterator

# ::stappler::memory::vector<typename>::rbegin() const

## BRIEF

Возвращает начальный обратный итератор

## CONTENT

Доступ: public

Возвращает начальный обратный итератор

Возвращает:
* const_reverse_iterator

# ::stappler::memory::vector<typename>::rend() const

## BRIEF

Возвращает конечный обратный итератор

## CONTENT

Доступ: public

Возвращает конечный обратный итератор

Возвращает:
* const_reverse_iterator

# ::stappler::memory::vector<typename>::crbegin() const

## BRIEF

Возвращает начальный обратный итератор

## CONTENT

Доступ: public

Возвращает начальный обратный итератор

Возвращает:
* const_reverse_iterator

# ::stappler::memory::vector<typename>::crend() const

## BRIEF

Возвращает конечный обратный итератор

## CONTENT

Доступ: public

Возвращает конечный обратный итератор

Возвращает:
* const_reverse_iterator

# ::stappler::memory::vector<typename>::size() const

## BRIEF

Возвращает число объектов в контейнере

## CONTENT

Доступ: public

Возвращает число объектов в контейнере

Возвращает:
* size_type

# ::stappler::memory::vector<typename>::capacity() const

## BRIEF

Возвращает вместимость контейнера

## CONTENT

Доступ: public

Возвращает вместимость контейнера

Возвращает:
* size_type

# ::stappler::memory::vector<typename>::empty() const

## BRIEF

Проверяет контейнер на пустоту

## CONTENT

Доступ: public

Проверяет контейнер на пустоту

Возвращает:
* bool - true если контейнер пуст

# ::stappler::memory::vector<typename>::reserve_block_optimal()

## BRIEF

Резервирует размер, оптимальный с позиции возвратной оптимизации пула памяти

## CONTENT

Доступ: public

Резервирует размер, оптимальный с позиции возвратной оптимизации пула памяти


# ::stappler::memory::vector<typename>::reserve(stappler::memory::vector::size_type)

## BRIEF

Резервирует память под несколько объектов

## CONTENT

Доступ: public

Резервирует память под несколько объектов

Параметры:
* stappler::memory::vector::size_type - желаемое число объектов


# ::stappler::memory::vector<typename>::shrink_to_fit()

## BRIEF

Урезает память до необхоимой под текущее число объектов

## CONTENT

Доступ: public

Урезает память до необхоимой под текущее число объектов. Если выделено памяти больше, чем требуется текущим объектам - текущий блок памяти возвращается системе, а под объект выделяется новый, соотвествующий размеру.


# ::stappler::memory::vector<typename>::clear()

## BRIEF

Очищает контейнер

## CONTENT

Доступ: public

Очищает контейнер


# ::stappler::memory::vector<typename>::emplace<class>(stappler::memory::vector::const_iterator,Args &&...)

## BRIEF

Добавялет объект к контейнеру по итератору, конструируя его на месте

## CONTENT

Доступ: public

Добавялет объект к контейнеру по итератору, конструируя его на месте. Другие объекты смещаются.

Параметры шаблона:
* class Args

Параметры:
* stappler::memory::vector::const_iterator - итератор для добавления объекта
* Args &&... - аргументы для конструирования объекта

Возвращает:
* iterator - итератор по месту добавления

# ::stappler::memory::vector<typename>::insert(stappler::memory::vector::const_iterator,Type const&)

## BRIEF

Копирует объект в контейнер по итератору

## CONTENT

Доступ: public

Копирует объект в контейнер по итератору. Другие объекты смещаются.

Параметры:
* stappler::memory::vector::const_iterator - итератор для добавления объекта
* Type const&

Возвращает:
* iterator - итератор по месту добавления

# ::stappler::memory::vector<typename>::insert(stappler::memory::vector::const_iterator,Type&&)

## BRIEF

Перемещает объект в контейнер по итератору

## CONTENT

Доступ: public

Перемещает объект в контейнер по итератору. Другие объекты смещаются.

Параметры:
* stappler::memory::vector::const_iterator - итератор для добавления объекта
* Type&&

Возвращает:
* iterator - итератор по месту добавления

# ::stappler::memory::vector<typename>::insert(stappler::memory::vector::const_iterator,stappler::memory::vector::size_type,Type const&)

## BRIEF

Добавляет блок одинаковых объектов в контейнер по итератору

## CONTENT

Доступ: public

Добавляет блок одинаковых объектов в контейнер по итератору. Другие объекты смещаются.

Параметры:
* stappler::memory::vector::const_iterator - итератор для добавления объектов
* stappler::memory::vector::size_type - число добавляемых объектов
* Type const& - объект для заполнения

Возвращает:
* iterator - итератор по месту добавления

# ::stappler::memory::vector<typename>::insert<class>(stappler::memory::vector::const_iterator,InputIt,InputIt)

## BRIEF

Добавляет диапазон объектов в контейнер по итератору

## CONTENT

Доступ: public

Добавляет диапазон объектов в контейнер по итератору. Другие объекты смещаются.

Параметры шаблона:
* class InputIt

Параметры:
* stappler::memory::vector::const_iterator - итератор для добавления объектов
* InputIt - начало диапазона
* InputIt - конец диапазона

Возвращает:
* iterator - итератор по месту добавления

# ::stappler::memory::vector<typename>::insert(stappler::memory::vector::const_iterator,InitializerList<Type>)

## BRIEF

Добавляет объекты из списка инициализации в контейнер по итератору

## CONTENT

Доступ: public

Добавляет объекты из списка инициализации в контейнер по итератору. Другие объекты смещаются.

Параметры:
* stappler::memory::vector::const_iterator - итератор для добавления объектов
* InitializerList<Type>

Возвращает:
* iterator - итератор по месту добавления

# ::stappler::memory::vector<typename>::erase(stappler::memory::vector::const_iterator)

## BRIEF

Удаляет объект по итератору

## CONTENT

Доступ: public

Удаляет объект по итератору. Смещает другие объекты при необходимости.

Параметры:
* stappler::memory::vector::const_iterator - итератор для удаления

Возвращает:
* iterator - итератор по месту удаления

# ::stappler::memory::vector<typename>::erase(stappler::memory::vector::const_iterator,stappler::memory::vector::const_iterator)

## BRIEF

Удаляет диапазон объектов

## CONTENT

Доступ: public

Удаляет диапазон объектов. Смещает другие объекты при необходимости.

Параметры:
* stappler::memory::vector::const_iterator - начало диапазона
* stappler::memory::vector::const_iterator - конец диапазона

Возвращает:
* iterator - итератор по месту удаления

# ::stappler::memory::vector<typename>::emplace_back<class>(Args &&...)

## BRIEF

Добавляет объект в конец контейнера, конструируя его на месте.

## CONTENT

Доступ: public

Добавляет объект в конец контейнера, конструируя его на месте.

Параметры шаблона:
* class Args

Параметры:
* Args &&... - аргументы для конструирования объекта

Возвращает:
* reference - ссылка на новый объект

# ::stappler::memory::vector<typename>::push_back(Type const&)

## BRIEF

Копирует новый объект в конец контейнера

## CONTENT

Доступ: public

Копирует новый объект в конец контейнера

Параметры:
* Type const&


# ::stappler::memory::vector<typename>::push_back(Type&&)

## BRIEF

Перемещает новый объект в конец контейнера

## CONTENT

Доступ: public

Перемещает новый объект в конец контейнера

Параметры:
* Type&&


# ::stappler::memory::vector<typename>::pop_back()

## BRIEF

Убирает объект из конца контейнера

## CONTENT

Доступ: public

Убирает объект из конца контейнера. Если контейнер пуст - поведение не определено.


# ::stappler::memory::vector<typename>::resize(stappler::memory::vector::size_type)

## BRIEF

Изменяет размер контейнера

## CONTENT

Доступ: public

Изменяет размер контейнера. Если контейнер увеличивается - заполняет его объектами, сконструированными по умолчанию.

Параметры:
* stappler::memory::vector::size_type - новый размер контейнера


# ::stappler::memory::vector<typename>::resize(stappler::memory::vector::size_type,stappler::memory::vector::value_type const&)

## BRIEF

Изменяет размер контейнера, заполняет его при необходимости

## CONTENT

Доступ: public

Изменяет размер контейнера, заполняет его при необходимости

Параметры:
* stappler::memory::vector::size_type - новый размер контейнера
* stappler::memory::vector::value_type const& - объект для заполнения


# ::stappler::memory::vector<typename>::make_weak(Type const*,stappler::memory::vector::size_type,stappler::memory::vector::allocator_type const&)

## BRIEF

Создаёт вектор, не владеющий содержимым

## CONTENT

Доступ: public

Создаёт вектор, не владеющий содержимым. Реализует Copy-on-write. Блок памяти должен быть распределён тем же пулом, что спользуется в аллокаторе, или быть статическим.

Параметры:
* Type const* - указатель на блок памяти с объектами
* stappler::memory::vector::size_type - число объектов в блоке
* stappler::memory::vector::allocator_type const& - аллокатор

Возвращает:
* const vector<Type>

# ::stappler::memory::vector<typename>::assign_weak(Type const*,stappler::memory::vector::size_type)

## BRIEF

Назначает вектору новый блок памяти, не передавая его во владение

## CONTENT

Доступ: public

Назначает вектору новый блок памяти, не передавая его во владение. Реализует Copy-on-write. Блок памяти должен быть распределён тем же пулом, что спользуется в аллокаторе, или быть статическим.

Параметры:
* Type const* - указатель на блок памяти с объектами
* stappler::memory::vector::size_type - число объектов в блоке

Возвращает:
* vector<Type>&

# ::stappler::memory::vector<typename>::is_weak() const

## BRIEF

Проверяет, владеет ли вектор своими данными

## CONTENT

Доступ: public

Проверяет, владеет ли вектор своими данными

Возвращает:
* bool - true, если вектор не владеет своими данными


# ::stappler::memory::vector<typename>::force_clear()

## BRIEF

Очищает вектор, не возвращая память системе

## CONTENT

Доступ: public

Очищает вектор, не возвращая память системе


# ::stappler::memory::vector<typename>::_mem

## BRIEF

Контейнер, хранящий данные вектора

## CONTENT

Доступ: protected

Контейнер, хранящий данные вектора

Тип: mem_type


# ::stappler::memory::bytes

## BRIEF

Синоним для вектора из байт

## CONTENT

Синоним для вектора из байт


# ::stappler::memory::operator==<typename>(vector<_Tp> const&,vector<_Tp> const&)

## BRIEF

Сравнивает два вектора

## CONTENT

Сравнивает два вектора

Параметры шаблона:
* typename _Tp

Параметры:
* vector<_Tp> const&
* vector<_Tp> const&

Возвращает:
* bool

# ::stappler::memory::operator<<typename>(vector<_Tp> const&,vector<_Tp> const&)

## BRIEF

Сравнивает два вектора лексикографически

## CONTENT

Сравнивает два вектора лексикографически

Параметры шаблона:
* typename _Tp

Параметры:
* vector<_Tp> const&
* vector<_Tp> const&

Возвращает:
* bool

# ::stappler::memory::operator<(vector<uint8_t> const&,vector<uint8_t> const&)

## BRIEF

Сравнивает два вектора лексикографически

## CONTENT

Параметры:
* vector<uint8_t> const&
* vector<uint8_t> const&

Возвращает:
* bool

# ::stappler::memory::operator!=<typename>(vector<_Tp> const&,vector<_Tp> const&)

## BRIEF

Сравнивает два вектора

## CONTENT

Сравнивает два вектора

Параметры шаблона:
* typename _Tp

Параметры:
* vector<_Tp> const&
* vector<_Tp> const&

Возвращает:
* bool

# ::stappler::memory::operator><typename>(vector<_Tp> const&,vector<_Tp> const&)

## BRIEF

Сравнивает два вектора лексикографически

## CONTENT

Сравнивает два вектора лексикографически

Параметры шаблона:
* typename _Tp

Параметры:
* vector<_Tp> const&
* vector<_Tp> const&

Возвращает:
* bool

# ::stappler::memory::operator<=<typename>(vector<_Tp> const&,vector<_Tp> const&)

## BRIEF

Сравнивает два вектора лексикографически

## CONTENT

Сравнивает два вектора лексикографически

Параметры шаблона:
* typename _Tp

Параметры:
* vector<_Tp> const&
* vector<_Tp> const&

Возвращает:
* bool

# ::stappler::memory::operator>=<typename>(vector<_Tp> const&,vector<_Tp> const&)

## BRIEF

Сравнивает два вектора лексикографически

## CONTENT

Сравнивает два вектора лексикографически

Параметры шаблона:
* typename _Tp

Параметры:
* vector<_Tp> const&
* vector<_Tp> const&

Возвращает:
* bool