Title: SPMemMap.h


# STAPPLER_CORE_MEMORY_SPMEMMAP_H_

## BRIEF

Заголовок ассоциативного контейнера ключ-значение

## CONTENT

Заголовок ассоциативного контейнера ключ-значение. Аналог std::map на пулах памяти


# ::stappler::memory::map<typename,typename,typename>

## BRIEF

Тип ассоциативного контейнера ключ-значение

## CONTENT

Тип ассоциативного контейнера ключ-значение

Параметры шаблона:
* typename Key - тип ключа
* typename Value - тип значения
* typename Comp - тип функтора сравнения ключей

Базовые классы:
* AllocPool


# ::stappler::memory::map<typename,typename,typename>::key_type

## BRIEF

Тип ключа элемента

## CONTENT

Доступ: public

Тип ключа элемента


# ::stappler::memory::map<typename,typename,typename>::mapped_type

## BRIEF

Тип значения элемента

## CONTENT

Доступ: public

Тип значения элемента


# ::stappler::memory::map<typename,typename,typename>::value_type

## BRIEF

Тип хранимого элемента

## CONTENT

Доступ: public

Тип хранимого элемента


# ::stappler::memory::map<typename,typename,typename>::key_compare

## BRIEF

Тип функтора сравнения ключей

## CONTENT

Доступ: public

Тип функтора сравнения ключей


# ::stappler::memory::map<typename,typename,typename>::allocator_type

## BRIEF

Тип аллокатора

## CONTENT

Доступ: public

Тип аллокатора


# ::stappler::memory::map<typename,typename,typename>::pointer

## BRIEF

Тип указателя на хранимое значение

## CONTENT

Доступ: public

Тип указателя на хранимое значение


# ::stappler::memory::map<typename,typename,typename>::const_pointer

## BRIEF

Тип указателя на хранимое значение

## CONTENT

Доступ: public

Тип указателя на хранимое значение


# ::stappler::memory::map<typename,typename,typename>::reference

## BRIEF

Тип ссылки на хранимое значение

## CONTENT

Доступ: public

Тип ссылки на хранимое значение


# ::stappler::memory::map<typename,typename,typename>::const_reference

## BRIEF

Тип ссылки на хранимое значение

## CONTENT

Доступ: public

Тип ссылки на хранимое значение


# ::stappler::memory::map<typename,typename,typename>::tree_type

## BRIEF

Тип низлежащего контейнера

## CONTENT

Доступ: public

Тип низлежащего контейнера - красно-чёрного дерева


# ::stappler::memory::map<typename,typename,typename>::iterator

## BRIEF

Тип итератора

## CONTENT

Доступ: public

Тип итератора


# ::stappler::memory::map<typename,typename,typename>::const_iterator

## BRIEF

Тип постоянного итератора

## CONTENT

Доступ: public

Тип постоянного итератора


# ::stappler::memory::map<typename,typename,typename>::reverse_iterator

## BRIEF

Тип обратного итератора

## CONTENT

Доступ: public

Тип обратного итератора


# ::stappler::memory::map<typename,typename,typename>::const_reverse_iterator

## BRIEF

Тип постоянного обратного итератора

## CONTENT

Доступ: public

Тип постоянного обратного итератора


# ::stappler::memory::map<typename,typename,typename>::size_type

## BRIEF

Тип размера

## CONTENT

Доступ: public

Тип размера


# ::stappler::memory::map<typename,typename,typename>::difference_type

## BRIEF

Тип разницы размеров

## CONTENT

Доступ: public

Тип разницы размеров


# ::stappler::memory::map<typename,typename,typename>::map()

## BRIEF

Создаёт пустой контейнер с аллокатором из текущего контекста

## CONTENT

Доступ: public

Создаёт пустой контейнер с аллокатором из текущего контекста


# ::stappler::memory::map<typename,typename,typename>::map(Comp const&,stappler::memory::map::allocator_type const&)

## BRIEF

Создаёт пустой контейнер с функтором сравнения и аллокатором

## CONTENT

Доступ: public

Создаёт пустой контейнер с функтором сравнения и аллокатором

Параметры:
* Comp const& - функтор сравнения ключей
* stappler::memory::map::allocator_type const& - аллокатор


# ::stappler::memory::map<typename,typename,typename>::map(stappler::memory::map::allocator_type const&)

## BRIEF

Создаёт пустой контейнер с аллокатором

## CONTENT

Доступ: public

Создаёт пустой контейнер с аллокатором

Параметры:
* stappler::memory::map::allocator_type const& - аллокатор


# ::stappler::memory::map<typename,typename,typename>::map<class>(InputIterator,InputIterator,Comp const&,stappler::memory::map::allocator_type const&)

## BRIEF

Создаёт контейнер. копируя значения из диапазона

## CONTENT

Доступ: public

Создаёт контейнер. копируя значения из диапазона

Параметры шаблона:
* class InputIterator - тип входящего итератора

Параметры:
* InputIterator - итератор начала диапазона
* InputIterator - итератор конца диапазона
* Comp const& - функтор сравнения ключей
* stappler::memory::map::allocator_type const& - аллокатор


# ::stappler::memory::map<typename,typename,typename>::map<class>(InputIterator,InputIterator,stappler::memory::map::allocator_type const&)

## BRIEF

Создаёт контейнер. копируя значения из диапазона

## CONTENT

Доступ: public

Создаёт контейнер. копируя значения из диапазона

Параметры шаблона:
* class InputIterator - тип входящего итератора

Параметры:
* InputIterator - итератор начала диапазона
* InputIterator - итератор конца диапазона
* stappler::memory::map::allocator_type const& - аллокатор


# ::stappler::memory::map<typename,typename,typename>::map(const map<Key, Value, Comp>&)

## BRIEF

Создаёт контейнер. копируя значения из другого

## CONTENT

Доступ: public

Создаёт контейнер. копируя значения из другого. Использует аллокатор из контекста

Параметры:
* const map<Key, Value, Comp>&


# ::stappler::memory::map<typename,typename,typename>::map(const map<Key, Value, Comp>&,stappler::memory::map::allocator_type const&)

## BRIEF

Создаёт контейнер. копируя значения из другого

## CONTENT

Доступ: public

Создаёт контейнер. копируя значения из другого

Параметры:
* const map<Key, Value, Comp>&
* stappler::memory::map::allocator_type const& - аллокатор


# ::stappler::memory::map<typename,typename,typename>::map(map<Key, Value, Comp>&&)

## BRIEF

Создаёт контейнер. перемещая значения из другого

## CONTENT

Доступ: public

Создаёт контейнер. перемещая значения из другого. Использует аллокатор из контекста. Перемещение воможно только если аллокаторы совпадают, в противном случае происходит копирование.

Параметры:
* map<Key, Value, Comp>&&


# ::stappler::memory::map<typename,typename,typename>::map(map<Key, Value, Comp>&&,stappler::memory::map::allocator_type const&)

## BRIEF

Создаёт контейнер. перемещая значения из другого

## CONTENT

Доступ: public

Создаёт контейнер. перемещая значения из другого. Перемещение воможно только если аллокаторы совпадают, в противном случае происходит копирование.

Параметры:
* map<Key, Value, Comp>&&
* stappler::memory::map::allocator_type const& - аллокатор


# ::stappler::memory::map<typename,typename,typename>::map(InitializerList<stappler::memory::map::value_type>,Comp const&,stappler::memory::map::allocator_type const&)

## BRIEF

Создаёт контейнер со значениями из списка инициализации

## CONTENT

Доступ: public

Создаёт контейнер со значениями из списка инициализации

Параметры:
* InitializerList<stappler::memory::map::value_type>
* Comp const& - функтор сравнения ключей
* stappler::memory::map::allocator_type const& - аллокатор


# ::stappler::memory::map<typename,typename,typename>::map(InitializerList<stappler::memory::map::value_type>,stappler::memory::map::allocator_type const&)

## BRIEF

Создаёт контейнер со значениями из списка инициализации

## CONTENT

Доступ: public

Создаёт контейнер со значениями из списка инициализации

Параметры:
* InitializerList<stappler::memory::map::value_type>
* stappler::memory::map::allocator_type const& - аллокатор


# ::stappler::memory::map<typename,typename,typename>::operator=(const map<Key, Value, Comp>&)

## BRIEF

Копирует значения из другого контейнера

## CONTENT

Доступ: public

Копирует значения из другого контейнера

Параметры:
* const map<Key, Value, Comp>&

Возвращает:
* map<Key, Value, Comp>&

# ::stappler::memory::map<typename,typename,typename>::operator=(map<Key, Value, Comp>&&)

## BRIEF

Перемещает значения из другого контейнера

## CONTENT

Доступ: public

Перемещает значения из другого контейнера. Перемещение возможно только если итераторы совпадают, в противном случае происходит копирование.

Параметры:
* map<Key, Value, Comp>&&

Возвращает:
* map<Key, Value, Comp>&

# ::stappler::memory::map<typename,typename,typename>::operator=(InitializerList<stappler::memory::map::value_type>)

## BRIEF

Назначает контейнеру значения из списка инициализации

## CONTENT

Доступ: public

Назначает контейнеру значения из списка инициализации

Параметры:
* InitializerList<stappler::memory::map::value_type>

Возвращает:
* map<Key, Value, Comp>&

# ::stappler::memory::map<typename,typename,typename>::get_allocator() const

## BRIEF

Возвращает текущий аллокатор

## CONTENT

Доступ: public

Возвращает текущий аллокатор

Возвращает:
* allocator_type

# ::stappler::memory::map<typename,typename,typename>::empty() const

## BRIEF

Проверяет контейрен на пустоту

## CONTENT

Доступ: public

Проверяет контейрен на пустоту

Возвращает:
* bool - true если контейнер пуст

# ::stappler::memory::map<typename,typename,typename>::size() const

## BRIEF

Возвращает число элементов в контейнере

## CONTENT

Доступ: public

Возвращает число элементов в контейнере

Возвращает:
* size_t - число элементов в контейнере

# ::stappler::memory::map<typename,typename,typename>::capacity() const

## BRIEF

Возвращает текущую вместимость контейнера

## CONTENT

Доступ: public

Возвращает текущую вместимость контейнера

Возвращает:
* size_t

# ::stappler::memory::map<typename,typename,typename>::clear()

## BRIEF

Очищает контейнер

## CONTENT

Доступ: public

Очищает контейнер

# ::stappler::memory::map<typename,typename,typename>::shrink_to_fit()

## BRIEF

Возвращает излишнюю выделенную память

## CONTENT

Доступ: public

Возвращает излишнюю выделенную память


# ::stappler::memory::map<typename,typename,typename>::set_memory_persistent(bool)

## BRIEF

Устанавливает флаг постоянного хранения памяти

## CONTENT

Доступ: public

Устанавливает флаг постоянного хранения памяти. Если флаг установлен, память под удалённые элементы хранится для распределения новых элементов без обращения к аллокатору.

Параметры:
* bool - предыдущее значение флага


# ::stappler::memory::map<typename,typename,typename>::memory_persistent() const

## BRIEF

Првоеряет, установлен ли флаг постоянства памяти

## CONTENT

Првоеряет, установлен ли флаг постоянства памяти

Доступ: public

Возвращает:
* bool - текущее значение флага


# ::stappler::memory::map<typename,typename,typename>::at(Key const&)

## BRIEF

Возвращает значение по ключу

## CONTENT

Доступ: public

Возвращает значение по ключу. Доступ к несуществующему значению ведёт к ошибке.

Параметры:
* Key const&

Возвращает:
* Value&

# ::stappler::memory::map<typename,typename,typename>::at(Key const&) const

## BRIEF

Возвращает значение по ключу

## CONTENT

Доступ: public

Возвращает значение по ключу. Доступ к несуществующему значению ведёт к ошибке.

Параметры:
* Key const&

Возвращает:
* Value const&

# ::stappler::memory::map<typename,typename,typename>::operator[](Key const&)

## BRIEF

Возвращает значение по ключу

## CONTENT

Доступ: public

Возвращает значение по ключу. Доступ к несуществующему значению ведёт к ошибке.

Параметры:
* Key const&

Возвращает:
* Value&

# ::stappler::memory::map<typename,typename,typename>::operator[](Key&&)

## BRIEF

Возвращает значение по ключу

## CONTENT

Доступ: public

Возвращает значение по ключу. Доступ к несуществующему значению ведёт к ошибке.

Параметры:
* Key&&

Возвращает:
* Value&

# ::stappler::memory::map<typename,typename,typename>::begin()

## BRIEF

Возвращает начальный итератор контейнера

## CONTENT

Доступ: public

Возвращает начальный итератор контейнера

Возвращает:
* iterator

# ::stappler::memory::map<typename,typename,typename>::end()

## BRIEF

Возвращает конечный итератор контейнера

## CONTENT

Доступ: public

Возвращает конечный итератор контейнера

Возвращает:
* iterator

# ::stappler::memory::map<typename,typename,typename>::begin() const

## BRIEF

Возвращает начальный итератор контейнера

## CONTENT

Доступ: public

Возвращает начальный итератор контейнера

Возвращает:
* const_iterator

# ::stappler::memory::map<typename,typename,typename>::end() const

## BRIEF

Возвращает конечный итератор контейнера

## CONTENT

Доступ: public

Возвращает конечный итератор контейнера

Возвращает:
* const_iterator

# ::stappler::memory::map<typename,typename,typename>::cbegin() const

## BRIEF

Возвращает начальный итератор контейнера

## CONTENT

Доступ: public

Возвращает начальный итератор контейнера

Возвращает:
* const_iterator

# ::stappler::memory::map<typename,typename,typename>::cend() const

## BRIEF

Возвращает конечный итератор контейнера

## CONTENT

Доступ: public

Возвращает конечный итератор контейнера

Возвращает:
* const_iterator

# ::stappler::memory::map<typename,typename,typename>::rbegin()

## BRIEF

Возвращает начальный обратный итератор контейнера

## CONTENT

Доступ: public

Возвращает начальный обратный итератор контейнера

Возвращает:
* reverse_iterator

# ::stappler::memory::map<typename,typename,typename>::rend()

## BRIEF

Возвращает конечный обратный итератор контейнера

## CONTENT

Доступ: public

Возвращает конечный обратный итератор контейнера

Возвращает:
* reverse_iterator

# ::stappler::memory::map<typename,typename,typename>::rbegin() const

## BRIEF

Возвращает начальный обратный итератор контейнера

## CONTENT

Доступ: public

Возвращает начальный обратный итератор контейнера

Возвращает:
* const_reverse_iterator

# ::stappler::memory::map<typename,typename,typename>::rend() const

## BRIEF

Возвращает конечный обратный итератор контейнера

## CONTENT

Доступ: public

Возвращает конечный обратный итератор контейнера

Возвращает:
* const_reverse_iterator

# ::stappler::memory::map<typename,typename,typename>::crbegin() const

## BRIEF

Возвращает начальный обратный итератор контейнера

## CONTENT

Доступ: public

Возвращает начальный обратный итератор контейнера

Возвращает:
* const_reverse_iterator

# ::stappler::memory::map<typename,typename,typename>::crend() const

## BRIEF

Возвращает конечный обратный итератор контейнера

## CONTENT

Доступ: public

Возвращает конечный обратный итератор контейнера

Возвращает:
* const_reverse_iterator

# ::stappler::memory::map<typename,typename,typename>::swap(map<Key, Value, Comp>&)

## BRIEF

Обменивает контейнеры значениями

## CONTENT

Доступ: public

Обменивает контейнеры значениями. Обмен эффективен только если аллокаторы совпадают.

Параметры:
* map<Key, Value, Comp>&


# ::stappler::memory::map<typename,typename,typename>::insert<class>(P&&)

## BRIEF

Добавляет элемент в контейнер

## CONTENT

Доступ: public

Добавляет элемент в контейнер. Если элемент с таким ключом существует -не делает ничего.

Параметры шаблона:
* class P

Параметры:
* P&&

Возвращает:
* Pair<stappler::memory::map::iterator, bool> - итератор на позиции вставки или существующего элемента, и true если элемент был добавлен

# ::stappler::memory::map<typename,typename,typename>::insert<class>(stappler::memory::map::const_iterator,P&&)

## BRIEF

Добавляет элемент в контейнер со вспомогательным итератором

## CONTENT

Доступ: public

Добавляет элемент в контейнер со вспомогательным итератором. Если элемент с таким ключом существует -не делает ничего.

Параметры шаблона:
* class P

Параметры:
* stappler::memory::map::const_iterator - вспомогательный итератор на позиции вставки
* P&&

Возвращает:
* iterator - итератор на позиции вставки


# ::stappler::memory::map<typename,typename,typename>::insert<class>(InputIt,InputIt)

## BRIEF

Добавляет элементы из диапазона

## CONTENT

Доступ: public

Добавляет элементы из диапазона. Элементы с существующими ключами игнорируются.

Параметры шаблона:
* class InputIt

Параметры:
* InputIt
* InputIt


# ::stappler::memory::map<typename,typename,typename>::insert(InitializerList<stappler::memory::map::value_type>)

## BRIEF

Добавляет элементы из списка инициализации. Элементы с существующими ключами игнорируются.

## CONTENT

Доступ: public

Параметры:
* InitializerList<stappler::memory::map::value_type>


# ::stappler::memory::map<typename,typename,typename>::insert_or_assign<class>(stappler::memory::map::key_type const&,M&&)

## BRIEF

Добавляет или обновляет элементы по ключу

## CONTENT

Доступ: public

Добавляет или обновляет элементы по ключу. Копирует ключ.

Параметры шаблона:
* class M

Параметры:
* stappler::memory::map::key_type const&
* M&&

Возвращает:
* Pair<stappler::memory::map::iterator, bool> - итератор на позиции вставки или существующего элемента, и true если элемент был добавлен


# ::stappler::memory::map<typename,typename,typename>::insert_or_assign<class>(stappler::memory::map::key_type&&,M&&)

## BRIEF

Добавляет или обновляет элементы по ключу

## CONTENT

Доступ: public

Добавляет или обновляет элементы по ключу. Перемещает ключ.

Параметры шаблона:
* class M

Параметры:
* stappler::memory::map::key_type&&
* M&&

Возвращает:
* Pair<stappler::memory::map::iterator, bool> - итератор на позиции вставки или существующего элемента, и true если элемент был добавлен


# ::stappler::memory::map<typename,typename,typename>::insert_or_assign<class>(stappler::memory::map::const_iterator,stappler::memory::map::key_type const&,M&&)

## BRIEF

Добавляет или обновляет элементы по ключу со вспомогательным итератором

## CONTENT

Доступ: public

Добавляет или обновляет элементы по ключу со вспомогательным итератором. Копирует ключ.

Параметры шаблона:
* class M

Параметры:
* stappler::memory::map::const_iterator - вспомогательный итератор на месте вставки
* stappler::memory::map::key_type const&
* M&&

Возвращает:
* iterator - итератор на месте вставки

# ::stappler::memory::map<typename,typename,typename>::insert_or_assign<class>(stappler::memory::map::const_iterator,stappler::memory::map::key_type&&,M&&)

## BRIEF

Добавляет или обновляет элементы по ключу со вспомогательным итератором

## CONTENT

Доступ: public

Добавляет или обновляет элементы по ключу со вспомогательным итератором. Перемещает ключ.

Параметры шаблона:
* class M

Параметры:
* stappler::memory::map::const_iterator - вспомогательный итератор на месте вставки
* stappler::memory::map::key_type&&
* M&&

Возвращает:
* iterator - итератор на месте вставки

# ::stappler::memory::map<typename,typename,typename>::emplace<class>(Args &&...)

## BRIEF

Добавляет элемент, конструируя его на месте вставки

## CONTENT

Доступ: public

Добавляет элемент, конструируя его на месте вставки. Если элемент с таким ключом существует - ничего не делает.

Параметры шаблона:
* class Args

Параметры:
* Args &&... - аргументы для конструирования жлемента

Возвращает:
* Pair<stappler::memory::map::iterator, bool> - итератор на позиции вставки или существующего элемента, и true если элемент был добавлен

# ::stappler::memory::map<typename,typename,typename>::emplace_hint<class>(stappler::memory::map::const_iterator,Args &&...)

## BRIEF

Добавляет элемент, конструируя его на месте вставки, использует вспомогательный итератор

## CONTENT

Доступ: public

Добавляет элемент, конструируя его на месте вставки, использует вспомогательный итератор. Если элемент с таким ключом существует - ничего не делает.

Параметры шаблона:
* class Args

Параметры:
* stappler::memory::map::const_iterator - вспомогательный итератор на месте вставки
* Args &&...

Возвращает:
* iterator - итератор на месте вставки

# ::stappler::memory::map<typename,typename,typename>::try_emplace<class>(stappler::memory::map::key_type const&,Args &&...)

## BRIEF

Добавляет элемент, конструируя его на месте вставки

## CONTENT

Доступ: public

Добавляет элемент, конструируя его на месте вставки. Копирует ключ при вставке. Если элемент с таким ключом существует - ничего не делает.

Параметры шаблона:
* class Args

Параметры:
* stappler::memory::map::key_type const&
* Args &&... - аргументы для конструирования значения элемента

Возвращает:
* Pair<stappler::memory::map::iterator, bool> - итератор на позиции вставки или существующего элемента, и true если элемент был добавлен

# ::stappler::memory::map<typename,typename,typename>::try_emplace<class>(stappler::memory::map::key_type&&,Args &&...)

## BRIEF

Добавляет элемент, конструируя его на месте вставки

## CONTENT

Доступ: public

Добавляет элемент, конструируя его на месте вставки. Перемещает ключ при вставке. Если элемент с таким ключом существует - ничего не делает.

Параметры шаблона:
* class Args

Параметры:
* stappler::memory::map::key_type&&
* Args &&... - аргументы для конструирования значения элемента

Возвращает:
* Pair<stappler::memory::map::iterator, bool> - итератор на позиции вставки или существующего элемента, и true если элемент был добавлен

# ::stappler::memory::map<typename,typename,typename>::try_emplace<class>(stappler::memory::map::const_iterator,stappler::memory::map::key_type const&,Args &&...)

## BRIEF

Добавляет элемент, конструируя его на месте вставки, использует вспомогательный итератор

## CONTENT

Доступ: public

Добавляет элемент, конструируя его на месте вставки, использует вспомогательный итератор. Копирует ключ при вставке. Если элемент с таким ключом существует - ничего не делает.

Параметры шаблона:
* class Args

Параметры:
* stappler::memory::map::const_iterator - вспомогательный итератор на месте вставки
* stappler::memory::map::key_type const&
* Args &&... - аргументы для конструирования значения элемента

Возвращает:
* iterator - итератор на месте вставки

# ::stappler::memory::map<typename,typename,typename>::try_emplace<class>(stappler::memory::map::const_iterator,stappler::memory::map::key_type&&,Args &&...)

## BRIEF

Добавляет элемент, конструируя его на месте вставки, использует вспомогательный итератор

## CONTENT

Доступ: public

Добавляет элемент, конструируя его на месте вставки, использует вспомогательный итератор. Перемещает ключ при вставке. Если элемент с таким ключом существует - ничего не делает.

Параметры шаблона:
* class Args

Параметры:
* stappler::memory::map::const_iterator - вспомогательный итератор на месте вставки
* stappler::memory::map::key_type&&
* Args &&... - аргументы для конструирования значения элемента

Возвращает:
* iterator - итератор на месте вставки

# ::stappler::memory::map<typename,typename,typename>::erase(stappler::memory::map::const_iterator)

## BRIEF

Удаляет элемент по итератору

## CONTENT

Доступ: public

Удаляет элемент по итератору

Параметры:
* stappler::memory::map::const_iterator

Возвращает:
* iterator - итератор на месте удаления

# ::stappler::memory::map<typename,typename,typename>::erase(stappler::memory::map::const_iterator,stappler::memory::map::const_iterator)

## BRIEF

Удаляет элементы по диапазону итераторов

## CONTENT

Доступ: public

Удаляет элементы по диапазону итераторов

Параметры:
* stappler::memory::map::const_iterator
* stappler::memory::map::const_iterator

Возвращает:
* iterator - итератор на месте удаления

# ::stappler::memory::map<typename,typename,typename>::erase(stappler::memory::map::key_type const&)

## BRIEF

Удаляет элемент по ключу

## CONTENT

Доступ: public

Удаляет элемент по ключу

Параметры:
* stappler::memory::map::key_type const&

Возвращает:
* size_type - число удалённых элементов

# ::stappler::memory::map<typename,typename,typename>::find<class>(K const&)

## BRIEF

Ищет элемент по ключу

## CONTENT

Доступ: public

Ищет элемент по ключу

Параметры шаблона:
* class K

Параметры:
* K const&

Возвращает:
* iterator - итератор на месте элемента или end()

# ::stappler::memory::map<typename,typename,typename>::find<class>(K const&) const

## BRIEF

Ищет элемент по ключу

## CONTENT

Доступ: public

Ищет элемент по ключу

Параметры шаблона:
* class K

Параметры:
* K const&

Возвращает:
* const_iterator - итератор на месте элемента или end()

# ::stappler::memory::map<typename,typename,typename>::lower_bound<class>(K const&)

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


# ::stappler::memory::map<typename,typename,typename>::lower_bound<class>(K const&) const

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

# ::stappler::memory::map<typename,typename,typename>::upper_bound<class>(K const&)

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

# ::stappler::memory::map<typename,typename,typename>::upper_bound<class>(K const&) const

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

# ::stappler::memory::map<typename,typename,typename>::equal_range<class>(K const&)

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

# ::stappler::memory::map<typename,typename,typename>::equal_range<class>(K const&) const

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

# ::stappler::memory::map<typename,typename,typename>::count<class>(K const&) const

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

# ::stappler::memory::map<typename,typename,typename>::reserve(size_t)

## BRIEF

Резервирует память под элементы

## CONTENT

Доступ: public

Резервирует память под элементы

Параметры:
* size_t - требуемая минимальная вместимость контейнера


# ::stappler::memory::map<typename,typename,typename>::do_insert<class,class>(Pair<A, B> const&)

## BRIEF

Выполняет добавление элемента

## CONTENT

Доступ: protected

Выполняет добавление элемента

Параметры шаблона:
* class A
* class B

Параметры:
* Pair<A, B> const&

Возвращает:
* Pair<stappler::memory::map::iterator, bool>

# ::stappler::memory::map<typename,typename,typename>::do_insert<class,class>(Pair<A, B>&&)

## BRIEF

Выполняет добавление элемента

## CONTENT

Доступ: protected

Выполняет добавление элемента

Параметры шаблона:
* class A
* class B

Параметры:
* Pair<A, B>&&

Возвращает:
* Pair<stappler::memory::map::iterator, bool>

# ::stappler::memory::map<typename,typename,typename>::do_insert<class,class>(stappler::memory::map::const_iterator,Pair<A, B> const&)

## BRIEF

Выполняет добавление элемента

## CONTENT

Доступ: protected

Выполняет добавление элемента

Параметры шаблона:
* class A
* class B

Параметры:
* stappler::memory::map::const_iterator
* Pair<A, B> const&

Возвращает:
* iterator

# ::stappler::memory::map<typename,typename,typename>::do_insert<class,class>(stappler::memory::map::const_iterator,Pair<A, B>&&)

## BRIEF

Выполняет добавление элемента

## CONTENT

Доступ: protected

Выполняет добавление элемента

Параметры шаблона:
* class A
* class B

Параметры:
* stappler::memory::map::const_iterator
* Pair<A, B>&&

Возвращает:
* iterator

# ::stappler::memory::map<typename,typename,typename>::do_assign<class,class>(stappler::memory::map::iterator,T&&,Args &&...)

## BRIEF

Выполняет назначение значению элемента

## CONTENT

Доступ: protected

Выполняет назначение значению элемента

Параметры шаблона:
* class T
* class Args

Параметры:
* stappler::memory::map::iterator
* T&&
* Args &&...


# ::stappler::memory::map<typename,typename,typename>::_tree

## BRIEF

Низлежащий контейнер дерева

## CONTENT

Доступ: protected

Низлежащий контейнер дерева

Тип: rbtree::Tree<Key, Pair<const Key, Value>, Comp>


# ::stappler::memory::operator==<typename,typename,typename>(map<Key, Value, Comp> const&,map<Key, Value, Comp> const&)

## BRIEF

Сравнивает контейнеры

## CONTENT

Сравнивает контейнеры

Параметры шаблона:
* typename Key
* typename Value
* typename Comp

Параметры:
* map<Key, Value, Comp> const&
* map<Key, Value, Comp> const&

Возвращает:
* bool

# ::stappler::memory::operator<<typename,typename,typename>(map<Key, Value, Comp> const&,map<Key, Value, Comp> const&)

## BRIEF

Сравнивает контейнеры лексикографически

## CONTENT

Сравнивает контейнеры лексикографически

Параметры шаблона:
* typename Key
* typename Value
* typename Comp

Параметры:
* map<Key, Value, Comp> const&
* map<Key, Value, Comp> const&

Возвращает:
* bool

# ::stappler::memory::operator!=<typename,typename,typename>(map<Key, Value, Comp> const&,map<Key, Value, Comp> const&)

## BRIEF

Сравнивает контейнеры

## CONTENT

Сравнивает контейнеры

Параметры шаблона:
* typename Key
* typename Value
* typename Comp

Параметры:
* map<Key, Value, Comp> const&
* map<Key, Value, Comp> const&

Возвращает:
* bool

# ::stappler::memory::operator><typename,typename,typename>(map<Key, Value, Comp> const&,map<Key, Value, Comp> const&)

## BRIEF

Сравнивает контейнеры лексикографически

## CONTENT

Сравнивает контейнеры лексикографически

Параметры шаблона:
* typename Key
* typename Value
* typename Comp

Параметры:
* map<Key, Value, Comp> const&
* map<Key, Value, Comp> const&

Возвращает:
* bool

# ::stappler::memory::operator<=<typename,typename,typename>(map<Key, Value, Comp> const&,map<Key, Value, Comp> const&)

## BRIEF

Сравнивает контейнеры лексикографически

## CONTENT

Сравнивает контейнеры лексикографически

Параметры шаблона:
* typename Key
* typename Value
* typename Comp

Параметры:
* map<Key, Value, Comp> const&
* map<Key, Value, Comp> const&

Возвращает:
* bool

# ::stappler::memory::operator>=<typename,typename,typename>(map<Key, Value, Comp> const&,map<Key, Value, Comp> const&)

## BRIEF

Сравнивает контейнеры лексикографически

## CONTENT

Сравнивает контейнеры лексикографически

Параметры шаблона:
* typename Key
* typename Value
* typename Comp

Параметры:
* map<Key, Value, Comp> const&
* map<Key, Value, Comp> const&

Возвращает:
* bool
