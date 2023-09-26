Title: SPMemDict.h


# STAPPLER_COMMON_MEMORY_SPMEMDICT_H_

## BRIEF

Заголовок типа словаря - линейного ассоциативного контейнера

## CONTENT

Заголовок типа словаря - линейного ассоциативного контейнера


# ::stappler::memory::dict<typename,typename,typename>

## BRIEF

Словарь - линейный ассоциативный контейнер

## CONTENT

Словарь - линейный ассоциативный контейнер, реализованный поверх упорядоченного вектора. Использует подсистему пулов памяти.

Параметры шаблона:
* typename Key - тип ключа
* typename Value - тип значения
* typename Comp - тип функции сравнения ключа

Базовые классы:
* AllocPool


# ::stappler::memory::dict<typename,typename,typename>::key_type

## BRIEF

Тип ключа

## CONTENT

Доступ: public

Тип ключа

# ::stappler::memory::dict<typename,typename,typename>::mapped_type

## BRIEF

Тип значения

## CONTENT

Доступ: public

Тип значения

# ::stappler::memory::dict<typename,typename,typename>::value_type

## BRIEF

Тип хранимого значения

## CONTENT

Доступ: public

Тип хранимого значения

# ::stappler::memory::dict<typename,typename,typename>::key_compare

## BRIEF

Тип функтора сравнения

## CONTENT

Доступ: public

Тип функтора сравнения


# ::stappler::memory::dict<typename,typename,typename>::comparator_type

## BRIEF

Тип функтора сравнения

## CONTENT

Доступ: public

Тип функтора сравнения


# ::stappler::memory::dict<typename,typename,typename>::allocator_type

## BRIEF

Тип аллокатора

## CONTENT

Доступ: public

Тип аллокатора


# ::stappler::memory::dict<typename,typename,typename>::pointer

## BRIEF

Тип указателя на хранимое значение

## CONTENT

Доступ: public

Тип указателя на хранимое значение


# ::stappler::memory::dict<typename,typename,typename>::const_pointer

## BRIEF

Тип указателя на хранимое значение

## CONTENT

Доступ: public

Тип указателя на хранимое значение


# ::stappler::memory::dict<typename,typename,typename>::reference

## BRIEF

Тип ссылки на хранимое значение

## CONTENT

Доступ: public

Тип ссылки на хранимое значение


# ::stappler::memory::dict<typename,typename,typename>::const_reference

## BRIEF

Тип ссылки на хранимое значение

## CONTENT

Доступ: public

Тип ссылки на хранимое значение


# ::stappler::memory::dict<typename,typename,typename>::vector_type

## BRIEF

Тип низлежащего вектора

## CONTENT

Доступ: public

Тип низлежащего вектора


# ::stappler::memory::dict<typename,typename,typename>::iterator

## BRIEF

Тип итератора

## CONTENT

Доступ: public

Тип итератора


# ::stappler::memory::dict<typename,typename,typename>::const_iterator

## BRIEF

Тип итератора

## CONTENT

Доступ: public

Тип итератора


# ::stappler::memory::dict<typename,typename,typename>::reverse_iterator

## BRIEF

Тип обратного итератора

## CONTENT

Доступ: public

Тип обратного итератора


# ::stappler::memory::dict<typename,typename,typename>::const_reverse_iterator

## BRIEF

Тип обратного итератора

## CONTENT

Доступ: public

Тип обратного итератора


# ::stappler::memory::dict<typename,typename,typename>::size_type

## BRIEF

Тип размера

## CONTENT

Доступ: public

Тип размера


# ::stappler::memory::dict<typename,typename,typename>::difference_type

## BRIEF

Тип разности размера

## CONTENT

Доступ: public

Тип разности размера


# ::stappler::memory::dict<typename,typename,typename>::value_comparator<typename>

## BRIEF

Тип сравнения хранимых значений

## CONTENT

Доступ: public

Тип сравнения хранимых значений

Параметры шаблона:
* typename T


# ::stappler::memory::dict<typename,typename,typename>::value_comparator<typename>::operator()(stappler::memory::dict::value_type const&,T const&)

## BRIEF

Сравнивает значение с ключом

## CONTENT

Сравнивает значение с ключом

Параметры:
* stappler::memory::dict::value_type const& - хранимое значение
* T const& - ключ

Возвращает:
* bool - true если ключи совпадают

# ::stappler::memory::dict<typename,typename,typename>::value_comparator<typename>::operator()(T const&,stappler::memory::dict::value_type const&)

## BRIEF

Сравнивает значение с ключом

## CONTENT

Сравнивает значение с ключом

Параметры:
* T const& - ключ
* stappler::memory::dict::value_type const& - хранимое значение

Возвращает:
* bool - true если ключи совпадают

# ::stappler::memory::dict<typename,typename,typename>::value_comparator<typename>::operator()(stappler::memory::dict::value_type const&,stappler::memory::dict::value_type const&)

## BRIEF

Сравнивает значения по ключам

## CONTENT

Сравнивает значения по ключам

Параметры:
* stappler::memory::dict::value_type const&
* stappler::memory::dict::value_type const&

Возвращает:
* bool - true если ключи совпадают

# ::stappler::memory::dict<typename,typename,typename>::value_comparator<typename>::comp

## BRIEF

Функтор сравнения

## CONTENT

Функтор сравнения

Тип: stappler::memory::dict::comparator_type


# ::stappler::memory::dict<typename,typename,typename>::dict()

## BRIEF

Коструктор по умолчанию, создаёт пустой словарь

## CONTENT

Доступ: public

Коструктор по умолчанию, создаёт пустой словарь. Использует пул памяти контекста.


# ::stappler::memory::dict<typename,typename,typename>::dict(Comp const&,stappler::memory::dict::allocator_type const&)

## BRIEF

Создаёт пустой словарь с функтором сравнения и аллокатором

## CONTENT

Доступ: public

Создаёт пустой словарь с функтором сравнения и аллокатором

Параметры:
* Comp const& - функтор сравнения ключей
* stappler::memory::dict::allocator_type const& - аллокатор


# ::stappler::memory::dict<typename,typename,typename>::dict(stappler::memory::dict::allocator_type const&)

## BRIEF

Создаёт пустой словарь с конкретным аллоктором

## CONTENT

Доступ: public

Создаёт пустой словарь с конкретным аллоктором

Параметры:
* stappler::memory::dict::allocator_type const&


# ::stappler::memory::dict<typename,typename,typename>::dict<class>(InputIterator,InputIterator,Comp const&,stappler::memory::dict::allocator_type const&)

## BRIEF

Создаёт словарь, загружая элементы по итераторам

## CONTENT

Доступ: public

Создаёт словарь, загружая элементы по итераторам

Параметры шаблона:
* class InputIterator - тип входящего итератора

Параметры:
* InputIterator - итератор начала диапазона
* InputIterator - итератор конца диапазона (не включается в загрузку)
* Comp const& - функтор сравнения
* stappler::memory::dict::allocator_type const& - аллокатор


# ::stappler::memory::dict<typename,typename,typename>::dict<class>(InputIterator,InputIterator,stappler::memory::dict::allocator_type const&)

## BRIEF

Создаёт словарь, загружая элементы по итераторам

## CONTENT

Доступ: public

Создаёт словарь, загружая элементы по итераторам

Параметры шаблона:
* class InputIterator - тип входящего итератора

Параметры:
* InputIterator - итератор начала диапазона
* InputIterator - итератор конца диапазона (не включается в загрузку)
* stappler::memory::dict::allocator_type const& - аллокатор


# ::stappler::memory::dict<typename,typename,typename>::dict(const dict<Key, Value, Comp>&)

## BRIEF

Конструктор копирования

## CONTENT

Доступ: public

Конструктор копирования. Копирует содержимое словаря.

Параметры:
* const dict<Key, Value, Comp>&


# ::stappler::memory::dict<typename,typename,typename>::dict(const dict<Key, Value, Comp>&,stappler::memory::dict::allocator_type const&)

## BRIEF

Конструктор копирования с выделенным аллокатором

## CONTENT

Доступ: public

Конструктор копирования с выделенным аллокатором

Параметры:
* const dict<Key, Value, Comp>&
* stappler::memory::dict::allocator_type const&


# ::stappler::memory::dict<typename,typename,typename>::dict(dict<Key, Value, Comp>&&)

## BRIEF

Конструктор перемещения

## CONTENT

Доступ: public

Конструктор перемещения. Использует пул из контекста в качестве аллокатора. Перемещение возможно только если итераторы совпадают. В противном случае, выполняется копирование.

Параметры:
* dict<Key, Value, Comp>&&


# ::stappler::memory::dict<typename,typename,typename>::dict(dict<Key, Value, Comp>&&,stappler::memory::dict::allocator_type const&)

## BRIEF

Конструктор перемещения с выделенным аллокатором

## CONTENT

Доступ: public

Конструктор перемещения с выделенным аллокатором. Использует пул из контекста в качестве аллокатора. Перемещение возможно только если итераторы совпадают. В противном случае, выполняется копирование.

Параметры:
* dict<Key, Value, Comp>&&
* stappler::memory::dict::allocator_type const&


# ::stappler::memory::dict<typename,typename,typename>::dict(InitializerList<stappler::memory::dict::value_type>,Comp const&,stappler::memory::dict::allocator_type const&)

## BRIEF

Конструктор из списка инициализации

## CONTENT

Доступ: public

Конструктор из списка инициализации

Параметры:
* InitializerList<stappler::memory::dict::value_type> - список инициализации
* Comp const& - функтор сравнения ключей
* stappler::memory::dict::allocator_type const& - тип аллокатора

# ::stappler::memory::dict<typename,typename,typename>::dict(InitializerList<stappler::memory::dict::value_type>,stappler::memory::dict::allocator_type const&)

## BRIEF

Конструктор из списка инициализации

## CONTENT

Доступ: public

Конструктор из списка инициализации

Параметры:
* InitializerList<stappler::memory::dict::value_type>- список инициализации
* stappler::memory::dict::allocator_type const& - тип аллокатора


# ::stappler::memory::dict<typename,typename,typename>::operator=(const dict<Key, Value, Comp>&)

## BRIEF

Оператор копирования

## CONTENT

Доступ: public

Оператор копирования. Копирует содержимое словаря.

Параметры:
* const dict<Key, Value, Comp>&

Возвращает:
* dict<Key, Value, Comp>&

# ::stappler::memory::dict<typename,typename,typename>::operator=(dict<Key, Value, Comp>&&)

## BRIEF

Оператор перемещения

## CONTENT

Доступ: public

Оператор перемещения. Перемещение возможно только если аллокаторы совпадают, в противном случае выполняется копирование.

Параметры:
* dict<Key, Value, Comp>&&

Возвращает:
* dict<Key, Value, Comp>&

# ::stappler::memory::dict<typename,typename,typename>::operator=(InitializerList<stappler::memory::dict::value_type>)

## BRIEF

Оператор присваивания из списка инициализации

## CONTENT

Доступ: public

Оператор присваивания из списка инициализации

Параметры:
* InitializerList<stappler::memory::dict::value_type>

Возвращает:
* dict<Key, Value, Comp>&

# ::stappler::memory::dict<typename,typename,typename>::reserve(stappler::memory::dict::size_type)

## BRIEF

Резервирует память для нескольких элементов

## CONTENT

Доступ: public

Резервирует память для нескольких элементов

Параметры:
* stappler::memory::dict::size_type - число элемментов, для которых нужно зарезервировать память


# ::stappler::memory::dict<typename,typename,typename>::get_allocator() const

## BRIEF

Возвращает аллокатор

## CONTENT

Доступ: public

Возвращает аллокатор

Возвращает:
* allocator_type

# ::stappler::memory::dict<typename,typename,typename>::empty() const

## BRIEF

Проверяет контейнер на пустоту

## CONTENT

Доступ: public

Проверяет контейнер на пустоту

Возвращает:
* bool - true если контейнер пустой

# ::stappler::memory::dict<typename,typename,typename>::size() const

## BRIEF

Возвращет число хранимых элементов

## CONTENT

Доступ: public

Возвращет число хранимых элементов

Возвращает:
* size_t

# ::stappler::memory::dict<typename,typename,typename>::clear()

## BRIEF

Очищает контейнер

## CONTENT

Доступ: public

Очищает контейнер

# ::stappler::memory::dict<typename,typename,typename>::begin()

## BRIEF

Возвращает итератор начала контейнера

## CONTENT

Доступ: public

Возвращает итератор начала контейнера

Возвращает:
* iterator

# ::stappler::memory::dict<typename,typename,typename>::end()

## BRIEF

Возвращает итератор конца контейнера

## CONTENT

Доступ: public

Возвращает итератор конца контейнера (то есть, итератор, указывающий на элемент после последнего)

Возвращает:
* iterator

# ::stappler::memory::dict<typename,typename,typename>::begin() const

## BRIEF

Возвращает итератор начала контейнера

## CONTENT

Доступ: public

Возвращает итератор начала контейнера

Возвращает:
* const_iterator

# ::stappler::memory::dict<typename,typename,typename>::end() const

## BRIEF

Возвращает итератор конца контейнера

## CONTENT

Доступ: public

Возвращает итератор конца контейнера (то есть, итератор, указывающий на элемент после последнего)

Возвращает:
* const_iterator

# ::stappler::memory::dict<typename,typename,typename>::cbegin() const

## BRIEF

Возвращает итератор начала контейнера

## CONTENT

Доступ: public

Возвращает итератор начала контейнера

Возвращает:
* const_iterator

# ::stappler::memory::dict<typename,typename,typename>::cend() const

## BRIEF

Возвращает итератор конца контейнера

## CONTENT

Доступ: public

Возвращает итератор конца контейнера (то есть, итератор, указывающий на элемент после последнего)

Возвращает:
* const_iterator

# ::stappler::memory::dict<typename,typename,typename>::rbegin()

## BRIEF

Возвращает начальный обратный итератор

## CONTENT

Доступ: public

Возвращает начальный обратный итератор

Возвращает:
* reverse_iterator

# ::stappler::memory::dict<typename,typename,typename>::rend()

## BRIEF

Возвращает конечный обратный итератор

## CONTENT

Доступ: public

Возвращает конечный обратный итератор

Возвращает:
* reverse_iterator

# ::stappler::memory::dict<typename,typename,typename>::rbegin() const

## BRIEF

Возвращает начальный обратный итератор

## CONTENT

Доступ: public

Возвращает начальный обратный итератор

Возвращает:
* const_reverse_iterator

# ::stappler::memory::dict<typename,typename,typename>::rend() const

## BRIEF

Возвращает конечный обратный итератор

## CONTENT

Доступ: public

Возвращает конечный обратный итератор

Возвращает:
* const_reverse_iterator

# ::stappler::memory::dict<typename,typename,typename>::crbegin() const

## BRIEF

Возвращает начальный обратный итератор

## CONTENT

Доступ: public

Возвращает начальный обратный итератор

Возвращает:
* const_reverse_iterator

# ::stappler::memory::dict<typename,typename,typename>::crend() const

## BRIEF

Возвращает конечный обратный итератор

## CONTENT

Доступ: public

Возвращает конечный обратный итератор

Возвращает:
* const_reverse_iterator

# ::stappler::memory::dict<typename,typename,typename>::insert<class>(P&&)

## BRIEF

Добавляет элемент в контейнер

## CONTENT

Доступ: public

Добавляет элемент в контейнер. Если элемент с таким ключом уже есть - возвращает указатель на него, не изменяет элемент.

Параметры шаблона:
* class P - тип элемента

Параметры:
* P&& - значение элемента

Возвращает:
* Pair<stappler::memory::dict::iterator, bool> - итератор, указывающий на элемент и true, если элемент был добавлен


# ::stappler::memory::dict<typename,typename,typename>::insert<class>(stappler::memory::dict::const_iterator,P&&)

## BRIEF

Добавляет элемент в контейнер, с использованием итератора для указания позиции

## CONTENT

Доступ: public

Добавляет элемент в контейнер, с использованием итератора для указания позиции. Если элемент с таким ключом уже есть - возвращает указатель на него, не изменяет элемент.

Параметры шаблона:
* class P - тип элемента

Параметры:
* stappler::memory::dict::const_iterator - итератор позиции вставки
* P&& - значение элемента

Возвращает:
* iterator - указатель на место вставки или существующий элемент

# ::stappler::memory::dict<typename,typename,typename>::insert<class>(InputIt,InputIt)

## BRIEF

Добавляет элементы из диапазона

## CONTENT

Доступ: public

Добавляет элементы из диапазона. Если элемент с таким ключом уже существует - игнорирует вставку.

Параметры шаблона:
* class InputIt - тип входящего итератора

Параметры:
* InputIt - итератор начала
* InputIt - итератор конца


# ::stappler::memory::dict<typename,typename,typename>::insert(InitializerList<stappler::memory::dict::value_type>)

## BRIEF

Добавляет элементы из списка инициализации

## CONTENT

Доступ: public

Добавляет элементы из списка инициализации. Если элемент с таким ключом уже существует - игнорирует вставку.

Параметры:
* InitializerList<stappler::memory::dict::value_type>


# ::stappler::memory::dict<typename,typename,typename>::insert_or_assign<class>(stappler::memory::dict::key_type const&,M&&)

## BRIEF

Добавляет или обновляет элемент

## CONTENT

Доступ: public

Добавляет или обновляет элемент. Копирует ключ.

Параметры шаблона:
* class M - тип значения элемента

Параметры:
* stappler::memory::dict::key_type const& - ключ элемента
* M&& - значение элемента

Возвращает:
* Pair<stappler::memory::dict::iterator, bool> - итератор на позиции вставки или существующем элементе, и true если элемент был добавлен

# ::stappler::memory::dict<typename,typename,typename>::insert_or_assign<class>(stappler::memory::dict::key_type&&,M&&)

## BRIEF

Добавляет или обновляет элемент

## CONTENT

Доступ: public

Добавляет или обновляет элемент. Перемещает ключ.

Параметры шаблона:
* class M - тип значения элемента

Параметры:
* stappler::memory::dict::key_type&& - ключ элемента
* M&& - значение элемента

Возвращает:
* Pair<stappler::memory::dict::iterator, bool> - итератор на позиции вставки или существующем элементе, и true если элемент был добавлен

# ::stappler::memory::dict<typename,typename,typename>::insert_or_assign<class>(stappler::memory::dict::const_iterator,stappler::memory::dict::key_type const&,M&&)

## BRIEF

Добавляет или обновляет элемент с уточняющим итератором

## CONTENT

Доступ: public

Добавляет или обновляет элемент с уточняющим итератором. Копирует ключ.

Параметры шаблона:
* class M - тип значения элемента

Параметры:
* stappler::memory::dict::const_iterator - уточняющий итератор на позиции вставки
* stappler::memory::dict::key_type const& - ключ элемента
* M&& - значение элемента

Возвращает:
* iterator - итератор по месту вставки или существующего элемента

# ::stappler::memory::dict<typename,typename,typename>::insert_or_assign<class>(stappler::memory::dict::const_iterator,stappler::memory::dict::key_type&&,M&&)

## BRIEF

Добавляет или обновляет элемент с уточняющим итератором

## CONTENT

Доступ: public

Добавляет или обновляет элемент с уточняющим итератором. Копирует ключ.

Параметры шаблона:
* class M - тип значения элемента

Параметры:
* stappler::memory::dict::const_iterator - уточняющий итератор на позиции вставки
* stappler::memory::dict::key_type&&- ключ элемента
* M&& - значение элемента

Возвращает:
* iterator - итератор по месту вставки или существующего элемента


# ::stappler::memory::dict<typename,typename,typename>::emplace<class>(Args &&...)

## BRIEF

Добавляет элемент, конструируя его на месте вставки

## CONTENT

Доступ: public

Добавляет элемент, конструируя его на месте вставки. Если элемент для ключа уже существует - не обновляет его, возвращает итератор

Параметры шаблона:
* class Args

Параметры:
* Args &&... - аргументы для создания элемента

Возвращает:
* Pair<stappler::memory::dict::iterator, bool> - итератор на позиции вставки или существующем элементе, и true если элемент был добавлен


# ::stappler::memory::dict<typename,typename,typename>::emplace_hint<class>(stappler::memory::dict::const_iterator,Args &&...)

## BRIEF

Добавляет элемент, конструируя его на месте вставки, используя вспомогательный итератор

## CONTENT

Доступ: public

Добавляет элемент, конструируя его на месте вставки, используя вспомогательный итератор. Если элемент для ключа уже существует - не обновляет его, возвращает итератор.

Параметры шаблона:
* class Args

Параметры:
* stappler::memory::dict::const_iterator - вспомогательный итератор на месте вставки
* Args &&... - аргументы для создания элемента

Возвращает:
* iterator - итератор на месте вставки или существующем элементе

# ::stappler::memory::dict<typename,typename,typename>::try_emplace<class>(stappler::memory::dict::key_type const&,Args &&...)

## BRIEF

Добавляет элемент, если его нет в контейнере, конструируя его на месте вставки

## CONTENT

Доступ: public

Добавляет элемент, если его нет в контейнере, конструируя его на месте вставки. Если элемент для ключа уже существует - не обновляет его, возвращает итератор. Копирует ключ.

Параметры шаблона:
* class Args

Параметры:
* stappler::memory::dict::key_type const& - ключ элемента
* Args &&... - аргументы для конструирования значения элемента

Возвращает:
* Pair<stappler::memory::dict::iterator, bool> - итератор на позиции вставки или существующем элементе, и true если элемент был добавлен

# ::stappler::memory::dict<typename,typename,typename>::try_emplace<class>(stappler::memory::dict::key_type&&,Args &&...)

## BRIEF

Добавляет элемент, если его нет в контейнере, конструируя его на месте вставки

## CONTENT

Доступ: public

Добавляет элемент, если его нет в контейнере, конструируя его на месте вставки. Если элемент для ключа уже существует - не обновляет его, возвращает итератор. Перемищает ключ.

Параметры шаблона:
* class Args

Параметры:
* stappler::memory::dict::key_type&& - ключ элемента
* Args &&... - аргументы для конструирования значения элемента

Возвращает:
* Pair<stappler::memory::dict::iterator, bool> - итератор на позиции вставки или существующем элементе, и true если элемент был добавлен

# ::stappler::memory::dict<typename,typename,typename>::try_emplace<class>(stappler::memory::dict::const_iterator,stappler::memory::dict::key_type const&,Args &&...)

## BRIEF

Добавляет элемент, если его нет в контейнере, конструируя его на месте вставки, с использованием вспомогательного итератора

## CONTENT

Доступ: public

Добавляет элемент, если его нет в контейнере, конструируя его на месте вставки, с использованием вспомогательного итератора. Если элемент для ключа уже существует - не обновляет его, возвращает итератор. Копирует ключ.

Параметры шаблона:
* class Args

Параметры:
* stappler::memory::dict::const_iterator - вспомогательный итератор
* stappler::memory::dict::key_type const& - ключ элемента
* Args &&... - аргументы для конструирования значения элемента

Возвращает:
* iterator - итератор на месте вставки или существующего элемента

# ::stappler::memory::dict<typename,typename,typename>::try_emplace<class>(stappler::memory::dict::const_iterator,stappler::memory::dict::key_type&&,Args &&...)

## BRIEF

Добавляет элемент, если его нет в контейнере, конструируя его на месте вставки, с использованием вспомогательного итератора

## CONTENT

Доступ: public

Добавляет элемент, если его нет в контейнере, конструируя его на месте вставки, с использованием вспомогательного итератора. Если элемент для ключа уже существует - не обновляет его, возвращает итератор. Перемищает ключ.

Параметры шаблона:
* class Args

Параметры:
* stappler::memory::dict::const_iterator - вспомогательный итератор
* stappler::memory::dict::key_type&& - ключ элемента
* Args &&... - аргументы для конструирования значения элемента

Возвращает:
* iterator - итератор на месте вставки или существующего элемента

# ::stappler::memory::dict<typename,typename,typename>::erase(stappler::memory::dict::iterator)

## BRIEF

Удаляет элемент по итератору

## CONTENT

Доступ: public

Удаляет элемент по итератору

Параметры:
* stappler::memory::dict::iterator

Возвращает:
* iterator - итератор на месте удаления

# ::stappler::memory::dict<typename,typename,typename>::erase(stappler::memory::dict::const_iterator)

## BRIEF

Удаляет элемент по итератору

## CONTENT

Доступ: public

Удаляет элемент по итератору

Параметры:
* stappler::memory::dict::const_iterator

Возвращает:
* iterator - итератор на месте удаления

# ::stappler::memory::dict<typename,typename,typename>::erase(stappler::memory::dict::const_iterator,stappler::memory::dict::const_iterator)

## BRIEF

Удаляет элемменты из диапазона итераторов

## CONTENT

Доступ: public

Удаляет элемменты из диапазона итераторов

Параметры:
* stappler::memory::dict::const_iterator
* stappler::memory::dict::const_iterator

Возвращает:
* iterator - итератор на месте удаления

# ::stappler::memory::dict<typename,typename,typename>::erase<class>(K const&)

## BRIEF

Удаляет элемент по ключу

## CONTENT

Доступ: public

Удаляет элемент по ключу

Параметры шаблона:
* class K - тип ключа

Параметры:
* K const& - значение ключа

Возвращает:
* size_type - число уладённых элементов

# ::stappler::memory::dict<typename,typename,typename>::find<class>(K const&)

## BRIEF

Ищет элемент по ключу

## CONTENT

Доступ: public

Ищет элемент по ключу

Параметры шаблона:
* class K - тип ключа

Параметры:
* K const& - значение ключа

Возвращает:
* iterator - итератор на месте наёденного элемента или end()


# ::stappler::memory::dict<typename,typename,typename>::find<class>(K const&) const

## BRIEF

Ищет элемент по ключу

## CONTENT

Доступ: public

Ищет элемент по ключу

Параметры шаблона:
* class K - тип ключа

Параметры:
* K const& - значение ключа

Возвращает:
* const_iterator - итератор на месте наёденного элемента или end()


# ::stappler::memory::dict<typename,typename,typename>::lower_bound<class>(K const&)

## BRIEF

Ищет нижнюю границу по ключу

## CONTENT

Доступ: public

Ищет нижнюю границу по ключу. То есть, на первый элемент, который не меньше ключа.

Параметры шаблона:
* class K - тип ключа

Параметры:
* K const& - значение ключа

Возвращает:
* iterator- итератор на месте нижней границы элемента или end()

# ::stappler::memory::dict<typename,typename,typename>::lower_bound<class>(K const&) const

## BRIEF

Ищет нижнюю границу по ключу

## CONTENT

Доступ: public

Ищет нижнюю границу по ключу. То есть, на первый элемент, который не меньше ключа.

Параметры шаблона:
* class K - тип ключа

Параметры:
* K const& - значение ключа

Возвращает:
* const_iterator- итератор на месте нижней границы элемента или end()

# ::stappler::memory::dict<typename,typename,typename>::upper_bound<class>(K const&)

## BRIEF

Ищет верхнюю границу по ключу

## CONTENT

Доступ: public

Ищет верхнюю границу по ключу. То есть, на первый элемент больше ключа.

Параметры шаблона:
* class K - тип ключа

Параметры:
* K const& - значение ключа

Возвращает:
* iterator- итератор на месте нижней границы элемента или end()

# ::stappler::memory::dict<typename,typename,typename>::upper_bound<class>(K const&) const

## BRIEF

Ищет верхнюю границу по ключу

## CONTENT

Доступ: public

Ищет верхнюю границу по ключу. То есть, на первый элемент больше ключа.

Параметры шаблона:
* class K - тип ключа

Параметры:
* K const& - значение ключа

Возвращает:
* const_iterator- итератор на месте нижней границы элемента или end()


# ::stappler::memory::dict<typename,typename,typename>::equal_range<class>(K const&)

## BRIEF

Возвращает диапазон значений с равным ключом

## CONTENT

Доступ: public

Возвращает диапазон значений с равным ключом

Параметры шаблона:
* class K - тип ключа

Параметры:
* K const& - значение ключа

Возвращает:
* Pair<stappler::memory::dict::iterator, stappler::memory::dict::iterator> - найденный диапазон

# ::stappler::memory::dict<typename,typename,typename>::equal_range<class>(K const&) const

## BRIEF

Возвращает диапазон значений с равным ключом

## CONTENT

Доступ: public

Возвращает диапазон значений с равным ключом

Параметры шаблона:
* class K - тип ключа

Параметры:
* K const& - значение ключа

Возвращает:
* Pair<stappler::memory::dict::const_iterator, stappler::memory::dict::const_iterator> - найденный диапазон


# ::stappler::memory::dict<typename,typename,typename>::count<class>(K const&) const

## BRIEF

Возвращает число элементов с заданным ключом

## CONTENT

Доступ: public

Возвращает число элементов с заданным ключом

Параметры шаблона:
* class K - тип ключа

Параметры:
* K const& - значение ключа

Возвращает:
* size_t - число элементов с указанным ключом


# ::stappler::memory::dict<typename,typename,typename>::do_equal_check<typename,typename>(L const&,R const&) const

## BRIEF

Проверяет элемент на соотвествие ключу

## CONTENT

Доступ: protected

Проверяет элемент на соотвествие ключу

Параметры шаблона:
* typename L
* typename R

Параметры:
* L const&
* R const&

Возвращает:
* bool - true если ключи совпадают

# ::stappler::memory::dict<typename,typename,typename>::do_insert_or_assign<typename,class>(K&&,M&&)

## BRIEF

Вставляет или назначает элемент

## CONTENT

Доступ: protected

Вставляет или назначает элемент

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

Вставляет или назначает элемент

## CONTENT

Доступ: protected

Вставляет или назначает элемент

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

Пытается конструировать элемент на месте

## CONTENT

Доступ: protected

Пытается конструировать элемент на месте

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

Пытается конструировать элемент на месте

## CONTENT

Доступ: protected

Пытается конструировать элемент на месте

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

Вставляет элемент

## CONTENT

Доступ: protected

Вставляет элемент

Параметры шаблона:
* class A
* class B

Параметры:
* Pair<A, B> const&

Возвращает:
* Pair<stappler::memory::dict::iterator, bool>

# ::stappler::memory::dict<typename,typename,typename>::do_insert<class,class>(Pair<A, B>&&)

## BRIEF

Вставляет элемент

## CONTENT

Доступ: protected

Вставляет элемент

Параметры шаблона:
* class A
* class B

Параметры:
* Pair<A, B>&&

Возвращает:
* Pair<stappler::memory::dict::iterator, bool>

# ::stappler::memory::dict<typename,typename,typename>::do_insert<class,class>(stappler::memory::dict::const_iterator,Pair<A, B> const&)

## BRIEF

Вставляет элемент

## CONTENT

Доступ: protected

Вставляет элемент

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

Вставляет элемент

## CONTENT

Доступ: protected

Вставляет элемент

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

Назначает элемент по ключу

## CONTENT

Доступ: protected

Назначает элемент по ключу

Параметры шаблона:
* class T
* class Args

Параметры:
* stappler::memory::dict::iterator
* T&&
* Args &&...


# ::stappler::memory::dict<typename,typename,typename>::do_erase<class>(K const&)

## BRIEF

Удаляет элемент

## CONTENT

Доступ: protected

Удаляет элемент

Параметры шаблона:
* class K

Параметры:
* K const&

Возвращает:
* size_type

# ::stappler::memory::dict<typename,typename,typename>::do_find<class>(K const&)

## BRIEF

Ищет элемент по ключу

## CONTENT

Доступ: protected

Ищет элемент по ключу

Параметры шаблона:
* class K

Параметры:
* K const&

Возвращает:
* iterator

# ::stappler::memory::dict<typename,typename,typename>::do_find<class>(K const&) const

## BRIEF

Ищет элемент по ключу

## CONTENT

Доступ: protected

Ищет элемент по ключу

Параметры шаблона:
* class K

Параметры:
* K const&

Возвращает:
* const_iterator

# ::stappler::memory::dict<typename,typename,typename>::do_count<class>(K const&) const

## BRIEF

Подсчитывает элементы по ключу

## CONTENT

Доступ: protected

Подсчитывает элементы по ключу

Параметры шаблона:
* class K

Параметры:
* K const&

Возвращает:
* size_t

# ::stappler::memory::dict<typename,typename,typename>::_data

## BRIEF

Данные контейнера

## CONTENT

Доступ: protected

Данные контейнера

Тип: vector_type


# ::stappler::memory::dict<typename,typename,typename>::_comp

## BRIEF

Функтор сравнения ключей

## CONTENT

Доступ: protected

Функтор сравнения ключей

Тип: comparator_type


# ::stappler::memory::operator==<typename,typename,typename>(dict<Key, Value, Comp> const&,dict<Key, Value, Comp> const&)

## BRIEF

Сравнивает два словаря

## CONTENT

Сравнивает два словаря

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

Сравнивает два словаря лексикографически

## CONTENT

Сравнивает два словаря лексикографически

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

Сравнивает два словаря

## CONTENT

Сравнивает два словаря

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

Сравнивает два словаря лексикографически

## CONTENT

Сравнивает два словаря лексикографически

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

Сравнивает два словаря лексикографически

## CONTENT

Сравнивает два словаря лексикографически

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

Сравнивает два словаря лексикографически

## CONTENT

Сравнивает два словаря лексикографически

Параметры шаблона:
* typename Key
* typename Value
* typename Comp

Параметры:
* dict<Key, Value, Comp> const&
* dict<Key, Value, Comp> const&

Возвращает:
* bool