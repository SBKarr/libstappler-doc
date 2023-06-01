Title: SPMemSet.h


# STAPPLER_CORE_MEMORY_SPMEMSET_H_

## BRIEF

Макрос защиты заголовка

## CONTENT

Макрос защиты заголовка

# ::stappler::memory::set<typename,typename>

## BRIEF

Ассоциативный упорядоченный контейнер. Аналог `std::set`

## CONTENT

Ассоциативный упорядоченный контейнер. Аналог `std::set` (см. документацию по нему)

Параметры шаблона:
* typename Value - тип хранимого значения
* typename Comp - тип функтора, сравнивающего значения. По умолчанию `std::less<void>`

Базовые классы:
* AllocPool - интерфейс распределения памяти, основанный на пулах памяти


# ::stappler::memory::set<typename,typename>::key_type

## BRIEF

Тип хранимого ключа

## CONTENT

Доступ: public

Тип хранимого ключа, эквивалентен Value

# ::stappler::memory::set<typename,typename>::value_type

## BRIEF

Тих хранимого значения

## CONTENT

Доступ: public

Тип хранимого значения, эквивалентен Value

# ::stappler::memory::set<typename,typename>::key_compare

## BRIEF

Тип функтора сравнения для ключей

## CONTENT

Доступ: public

Тип функтора сравнения для ключей, эквивалентен Comp

# ::stappler::memory::set<typename,typename>::value_compare

## BRIEF

Тип функтора сравнения для значений

## CONTENT

Доступ: public

Тип функтора сравнения для значений, эквивалентен Comp

# ::stappler::memory::set<typename,typename>::allocator_type

## BRIEF

Тип аллокатора

## CONTENT

Доступ: public

Тип аллокатора, используется аллокатор на основе пулов памяти

# ::stappler::memory::set<typename,typename>::pointer

## BRIEF

Тип указателя на хранимое значение

## CONTENT

Доступ: public

Тип указателя на хранимое значение

# ::stappler::memory::set<typename,typename>::const_pointer

## BRIEF

Тип постоянного указателя на хранимое значение

## CONTENT

Доступ: public

Тип постоянного указателя на хранимое значение

# ::stappler::memory::set<typename,typename>::reference

## BRIEF

Тип ссылки на хранимое значение

## CONTENT

Доступ: public

Тип ссылки на хранимое значение

# ::stappler::memory::set<typename,typename>::const_reference

## BRIEF

Тип постоянной ссылки на хранимое значение

## CONTENT

Доступ: public

Тип постоянной ссылки на хранимое значение

# ::stappler::memory::set<typename,typename>::tree_type

## BRIEF

Тип базовой структуры, на которой построен контейнер

## CONTENT

Доступ: public

Тип базовой структуры, на которой построен контейнер (R/B Tree)

# ::stappler::memory::set<typename,typename>::iterator

## BRIEF

Тип итератора

## CONTENT

Доступ: public

Тип итератора

# ::stappler::memory::set<typename,typename>::const_iterator

## BRIEF

Тип постоянного итератора

## CONTENT

Доступ: public

Тип постоянного итератора

# ::stappler::memory::set<typename,typename>::reverse_iterator

## BRIEF

Тип обратного итератора

## CONTENT

Доступ: public

Тип обратного итератора

# ::stappler::memory::set<typename,typename>::const_reverse_iterator

## BRIEF

Тип постоянного обратного итератора

## CONTENT

Доступ: public

Тип постоянного обратного итератора

# ::stappler::memory::set<typename,typename>::size_type

## BRIEF

Тип размерности

## CONTENT

Доступ: public

Тип размерности - `size_t`

# ::stappler::memory::set<typename,typename>::difference_type

## BRIEF

Тип расстояния

## CONTENT

Доступ: public

Тип расстояния - `ptrdiff_t`

# ::stappler::memory::set<typename,typename>::set()

## BRIEF

Конструктор по умолчанию

## CONTENT

Доступ: public

Конструктор по умолчанию создаёт пустой контейнер с параметрами по умолчанию. Аллокатор создаётся из текущего контекста памяти.

# ::stappler::memory::set<typename,typename>::set(stappler::memory::set::key_compare const&,stappler::memory::set::allocator_type const&)

## BRIEF

Конструктор с явным указанием функтора сравнения и аллокатора

## CONTENT

Доступ: public

Конструктор с явным указанием функтора сравнения и аллокатора

Параметры:
* stappler::memory::set::key_compare const& - функтор сравнения значений
* stappler::memory::set::allocator_type const& - используемый аллокатор (пул памяти). Если опущен - используется аллокатор из текущего контекста.


# ::stappler::memory::set<typename,typename>::set(stappler::memory::set::allocator_type const&)

## BRIEF

Конструктор с явным указанием аллокатора

## CONTENT

Доступ: public

Конструктор с явным указанием аллокатора (пула памяти)

Параметры:
* stappler::memory::set::allocator_type const& - аллокатор (пул памяти)


# ::stappler::memory::set<typename,typename>::set<class>(InputIterator,InputIterator,stappler::memory::set::key_compare const&,stappler::memory::set::allocator_type const&)

## BRIEF

Конструктор на основе итераторов

## CONTENT

Доступ: public

Конструктор на основе итераторов. Создаёт контейнер и заполняет его значениями между итераторами. Последнее значение не используется.

Параметры шаблона:
* class InputIterator - тип итератора

Параметры:
* InputIterator - итератор начала
* InputIterator - итератор конца
* stappler::memory::set::key_compare const& - функтор сравнения значений, если опущен - используется значение по умолчанию
* stappler::memory::set::allocator_type const& - используемый аллокатор (пул памяти), если опущен - используется аллокатор из текущего контекста.


# ::stappler::memory::set<typename,typename>::set<class>(InputIterator,InputIterator,stappler::memory::set::allocator_type const&)

## BRIEF

Конструктор на основе итераторов

## CONTENT

Доступ: public

Конструктор на основе итераторов. Создаёт контейнер и заполняет его значениями между итераторами. Последнее значение не используется. Позволяет явно указать аллокатор без указания функтора сравнения.

Параметры шаблона:
* class InputIterator - тип итератора

Параметры:
* InputIterator - итератор начала
* InputIterator - итератор конца
* stappler::memory::set::allocator_type const& - используемый аллокатор (пул памяти)


# ::stappler::memory::set<typename,typename>::set(const set<Value, Comp>&)

## BRIEF

Конструктор копирования

## CONTENT

Доступ: public

Конструктор копирования. Полностью копирует содержимое контейнера. Аллокатор определяется из текущего контекста памяти.

Параметры:
* const set<Value, Comp>& - контейнер, из которого копируются данные.


# ::stappler::memory::set<typename,typename>::set(const set<Value, Comp>&,stappler::memory::set::allocator_type const&)

## BRIEF

Конструктор копирования с явным указанием аллокатора

## CONTENT

Доступ: public

Конструктор копирования с явным указанием аллокатора

Параметры:
* const set<Value, Comp>& - контейнер, из которого копируются данные
* stappler::memory::set::allocator_type const& - аллокатор (пул памяти)


# ::stappler::memory::set<typename,typename>::set(set<Value, Comp>&&)

## BRIEF

Конструктор перемещения

## CONTENT

Доступ: public

Конструктор перемещения. Если возможно, забирает данные из исходного контейнера без копирования, иначе - аналогичен конструктору копирования. Перемещение возможно только если аллокаторы контейнеров совпадают. Для создания нового контейнера используется аллокатор из текущеего контекста памяти.

Параметры:
* set<Value, Comp>&& - контейнер, из которого забираются данные


# ::stappler::memory::set<typename,typename>::set(set<Value, Comp>&&,stappler::memory::set::allocator_type const&)

## BRIEF

Конструктор перемещения с явным указанием аллокатора

## CONTENT

Доступ: public

Конструктор перемещения с явным указанием аллокатора. Если возможно, забирает данные из исходного контейнера без копирования, иначе - аналогичен конструктору копирования. Перемещение возможно только если аллокаторы контейнеров совпадают.

Параметры:
* set<Value, Comp>&& - контейнер, из которого забираются данные
* stappler::memory::set::allocator_type const& - аллокатор (пул памяти)

# ::stappler::memory::set<typename,typename>::set(InitializerList<stappler::memory::set::value_type>,stappler::memory::set::key_compare const&,stappler::memory::set::allocator_type const&)

## BRIEF

Конструктор на основе статического списка инициализации

## CONTENT

Доступ: public

Конструктор на основе статического списка инициализации

Параметры:
* InitializerList<stappler::memory::set::value_type> - список значений, которые будут помещены в контейнер
* stappler::memory::set::key_compare const& - функтор сравнения значений. Если опущен - используется конструктор функтора по умолчанию
* stappler::memory::set::allocator_type const& - аллокатор (пул памяти). Если опущен - используется аллокатор из текущего контекста памяти

# ::stappler::memory::set<typename,typename>::set(InitializerList<stappler::memory::set::value_type>,stappler::memory::set::allocator_type const&)

## BRIEF

Конструктор на основе статического списка инициализации

## CONTENT

Доступ: public

Конструктор на основе статического списка инициализации

Параметры:
* InitializerList<stappler::memory::set::value_type>- список значений, которые будут помещены в контейнер
* stappler::memory::set::allocator_type const& - аллокатор (пул памяти). Если опущен - используется аллокатор из текущего контекста памяти


# ::stappler::memory::set<typename,typename>::operator=(const set<Value, Comp>&)

## BRIEF

Оператор копирования

## CONTENT

Доступ: public

Оператор копирования, полностью копирует данные другого контейнера, предварительно очистив себя

Параметры:
* const set<Value, Comp>& - контейнер, из которого копируются данные

Возвращает:
* set<Value, Comp>& - ссылка на себя

# ::stappler::memory::set<typename,typename>::operator=(set<Value, Comp>&&)

## BRIEF

Оператор перемещения

## CONTENT

Доступ: public

Оператор перемещения, пытается переместить данные из другого контейнера без копирования, если это возможно. Иначе - копирует данные. Перемещение возможно только если аллокаторы контейнеров совпадают.

Параметры:
* set<Value, Comp>&& - контейнер. из которого перемещаются данные

Возвращает:
* set<Value, Comp>& - ссылка на себя

# ::stappler::memory::set<typename,typename>::operator=(InitializerList<stappler::memory::set::value_type>)

## BRIEF

Оператор копирования из списка инициализаци

## CONTENT

Доступ: public

Оператор копирования из списка инициализаци. Очищает себя и заполняет себя значениями из списка.

Параметры:
* InitializerList<stappler::memory::set::value_type> - список инициализации

Возвращает:
* set<Value, Comp>& - ссылка на себя

# ::stappler::memory::set<typename,typename>::get_allocator() const

## BRIEF

Возвраает аллокатор

## CONTENT

Доступ: public

Возвраает аллокатор. Аллокатор неизменен всё время существования объекта.

Возвращает:
* allocator_type - аллокатор

# ::stappler::memory::set<typename,typename>::empty() const

## BRIEF

Проверяет контейнер на пустоту

## CONTENT

Доступ: public

Проверяет контейнер на пустоту

Возвращает:
* bool - true если контейнер пуст, false иначе

# ::stappler::memory::set<typename,typename>::size() const

## BRIEF

Возвращает текущее количество хранимых значений

## CONTENT

Доступ: public

Возвращает текущее количество хранимых значений

Возвращает:
* size_t - текущее количество хранимых значений

# ::stappler::memory::set<typename,typename>::capacity() const

## BRIEF

Возвращает текущую вместимость контйнера

## CONTENT

Доступ: public

Возвращает текущую вместимость контйнера

Возвращает:
* size_t - текущая вместимость контейнера

# ::stappler::memory::set<typename,typename>::clear()

## BRIEF

Очищает контейнер

## CONTENT

Доступ: public

Очищает контейнер, удаляет все значения

# ::stappler::memory::set<typename,typename>::shrink_to_fit()

## BRIEF

Усекает объём контейнера. подгоняя его под текущий размер

## CONTENT

Доступ: public

Усекает объём контейнера. подгоняя его под текущий размер

# ::stappler::memory::set<typename,typename>::set_memory_persistent(bool)

## BRIEF

Устанавливает режим постоянной памяти

## CONTENT

Доступ: public

Устанавливает режим постоянной памяти. По умолчанию, ноды дерева, в которых храняться значения, удаляются, когда значение больше не нужно. В режиме постоянной памяти они сохраняются во внутреннем связном списке, чтобы использоваться повторно для новых значений. Это позволяет ускорить операции по добавлению и удалению значений в среде с малым количеством памяти.

Если при выключении режима постоянные ноды ещё есть - при аллокации новых значений будут использоваться они, пока не иссякнут. Используйте `shrink_to_fit` чтобы вернуть лишнюю память.

Параметры:
* bool - true - всключить режим постоянной памяти, false - выключить.


# ::stappler::memory::set<typename,typename>::memory_persistent() const

## BRIEF

Проверяет, включён ли режим постоянной памяти

## CONTENT

Доступ: public

Возвращает:
* bool - true - режим постоянной памяти включен, false - выключен

# ::stappler::memory::set<typename,typename>::insert(stappler::memory::set::value_type const&)

## BRIEF

Добавляет значение в контейнер, копируя его

## CONTENT

Доступ: public

Добавляет значение в контейнер, копируя его

Параметры:
* stappler::memory::set::value_type const& - новое значение для вставки

Возвращает:
* Pair<stappler::memory::set::iterator, bool> - итератор на месте вставки и индикатор (true если значение было быд добавлено, false если в контейнере уже есть такое же значение)

# ::stappler::memory::set<typename,typename>::insert(stappler::memory::set::value_type&&)

## BRIEF

Добавляет значение в контейнер, перемещая его

## CONTENT

Доступ: public

Добавляет значение в контейнер, перемещая его

Параметры:
* stappler::memory::set::value_type&& - новое значение для вставки

Возвращает:
* Pair<stappler::memory::set::iterator, bool> - итератор на месте вставки и индикатор (true если значение было быд добавлено, false если в контейнере уже есть такое же значение)

# ::stappler::memory::set<typename,typename>::insert(stappler::memory::set::const_iterator,stappler::memory::set::value_type const&)

## BRIEF

Добавляет значение в контейнер, используя подсказку по месту вставки

## CONTENT

Доступ: public

Добавляет значение в контейнер, используя подсказку по месту вставки. Если подсказка точна, вставка происходит быстрее. Если нет - работает как обычная вставка

Параметры:
* stappler::memory::set::const_iterator - подсказка для вставки
* stappler::memory::set::value_type const& - значение для вставки

Возвращает:
* iterator - итератор на месте вставки

# ::stappler::memory::set<typename,typename>::insert(stappler::memory::set::const_iterator,stappler::memory::set::value_type&&)

## BRIEF

Добавляет значение в контейнер, используя подсказку по месту вставки

## CONTENT

Доступ: public

Добавляет значение в контейнер, используя подсказку по месту вставки. Если подсказка точна, вставка происходит быстрее. Если нет - работает как обычная вставка

Параметры:
* stappler::memory::set::const_iterator - подсказка для вставки
* stappler::memory::set::value_type&& - значение для вставки

Возвращает:
* iterator - итератор на месте вставки

# ::stappler::memory::set<typename,typename>::insert<class>(InputIt,InputIt)

## BRIEF

Вставка диапазона элементов между итераторами

## CONTENT

Доступ: public

Вставка диапазона элементов между итераторами. Вставляются элементы, не включая конечный. Если какие-либо элементы совпадают с уже добавленными - неизвестно, какой из элементов будет сохранён.

Параметры шаблона:
* class InputIt - класс итератора

Параметры:
* InputIt - начало диапазона
* InputIt - конец диапазона


# ::stappler::memory::set<typename,typename>::insert(InitializerList<stappler::memory::set::value_type>)

## BRIEF

Вставка элементов из статического списка инициализации

## CONTENT

Доступ: public

Вставка элементов из статического списка инициализации. Если какие-либо элементы совпадают с уже добавленными - неизвестно, какой из элементов будет сохранён.

Параметры:
* InitializerList<stappler::memory::set::value_type> - список инициализации


# ::stappler::memory::set<typename,typename>::emplace<class>(Args &&...)

## BRIEF

Вставляет элемент с конструированием на месте

## CONTENT

Доступ: public

Вставляет элемент с конструированием на месте. Функция пытается избегать копирования, где возможно.

Параметры шаблона:
* class Args - список типов параметров для вызова конструктоар значения

Параметры:
* Args &&... - список аргументов для вызова конструктора значения

Возвращает:
* Pair<stappler::memory::set::iterator, bool> - итератор на месте вставки и индикатор (true если значение было быд добавлено, false если в контейнере уже есть такое же значение)

# ::stappler::memory::set<typename,typename>::emplace_hint<class>(stappler::memory::set::const_iterator,Args &&...)

## BRIEF

Вставляет элемент с конструированием на месте, используя подсказку

## CONTENT

Доступ: public

Вставляет элемент с конструированием на месте. Функция пытается избегать копирования, где возможно. Если подсказка точна, вставка происходит сразу. Если нет - используется общий алгоритм для поиска места вставки.

Параметры шаблона:
* class Args - список типов параметров для вызова конструктоар значения

Параметры:
* stappler::memory::set::const_iterator - итератор, указывающий на потенциальное место вставки
* Args &&... - список аргументов для вызова конструктора значения

Возвращает:
* iterator - итератор на месте вставки

# ::stappler::memory::set<typename,typename>::erase(stappler::memory::set::const_iterator)

## BRIEF

Удаляет значение из контейнера

## CONTENT

Доступ: public

Удаляет значение из контейнера

Параметры:
* stappler::memory::set::const_iterator - итератор. указывающий на удаляемый элемент

Возвращает:
* iterator - итератор, указывающий на элемент, который замещает удаляемый

# ::stappler::memory::set<typename,typename>::erase(stappler::memory::set::const_iterator,stappler::memory::set::const_iterator)

## BRIEF

Удаляет диапазон значений из контейнера

## CONTENT

Доступ: public

Удаляет диапазон значений из контейнера. Последний элемент не учитывается.

Параметры:
* stappler::memory::set::const_iterator - начало диапазона
* stappler::memory::set::const_iterator - конец диапазона

Возвращает:
* iterator - итератор, указывающий на элемент после удалённого диапазона

# ::stappler::memory::set<typename,typename>::erase(stappler::memory::set::key_type const&)

## BRIEF

Удаляет значение из контейнера по ключу

## CONTENT

Доступ: public

Удаляет значение из контейнера по ключу

Параметры:
* stappler::memory::set::key_type const& - ключ для удаления

Возвращает:
* size_type

# ::stappler::memory::set<typename,typename>::begin()

## BRIEF

Возвращает итератор на начало контейнера

## CONTENT

Доступ: public

Возвращает:
* iterator - итератор, указывающий на начало контейнера

# ::stappler::memory::set<typename,typename>::end()

## BRIEF

Возвращает итератор на конец контейнера

## CONTENT

Доступ: public

Возвращает итератор на конец контейнера (итератор, указывающий на элемент после последнего)

Возвращает:
* iterator - итератор, указывающий на конец контейнера

# ::stappler::memory::set<typename,typename>::begin() const

## BRIEF

Возвращает итератор на начало контейнера

## CONTENT

Доступ: public

Возвращает:
* const_iterator - итератор, указывающий на начало контейнера

# ::stappler::memory::set<typename,typename>::end() const

## BRIEF

Возвращает итератор на конец контейнера

## CONTENT

Доступ: public

Возвращает итератор на конец контейнера (итератор, указывающий на элемент после последнего)

Возвращает:
* const_iterator - итератор, указывающий на конец контейнера

# ::stappler::memory::set<typename,typename>::cbegin() const

## BRIEF

Возвращает итератор на начало контейнера

## CONTENT

Доступ: public

Возвращает:
* const_iterator - итератор, указывающий на начало контейнера

# ::stappler::memory::set<typename,typename>::cend() const

## BRIEF

Возвращает итератор на конец контейнера

## CONTENT

Доступ: public

Возвращает итератор на конец контейнера (итератор, указывающий на элемент после последнего)

Возвращает:
* const_iterator - итератор, указывающий на конец контейнера

# ::stappler::memory::set<typename,typename>::rbegin()

## BRIEF

Возвращает начальный обратный итератор

## CONTENT

Доступ: public

Возвращает начальный обратный итератор (итератор, указывающий на конец контейнера для обратной итерации)

Возвращает:
* reverse_iterator - начальный обратный итератор

# ::stappler::memory::set<typename,typename>::rend()

## BRIEF

Возвращает конечный обратный итератор

## CONTENT

Доступ: public

Возвращает конечный обратный итератор (итератор, указывающий на элемент до начала контейнера)

Возвращает:
* reverse_iterator - конечный обратный итератор

# ::stappler::memory::set<typename,typename>::rbegin() const

## BRIEF

Возвращает начальный обратный итератор

## CONTENT

Доступ: public

Возвращает начальный обратный итератор (итератор, указывающий на конец контейнера для обратной итерации)

Возвращает:
* const_reverse_iterator - начальный обратный итератор

# ::stappler::memory::set<typename,typename>::rend() const

## BRIEF

Возвращает конечный обратный итератор

## CONTENT

Доступ: public

Возвращает конечный обратный итератор (итератор, указывающий на элемент до начала контейнера)

Возвращает:
* const_reverse_iterator - конечный обратный итератор

# ::stappler::memory::set<typename,typename>::crbegin() const

## BRIEF

Возвращает начальный обратный итератор

## CONTENT

Доступ: public

Возвращает начальный обратный итератор (итератор, указывающий на конец контейнера для обратной итерации)

Возвращает:
* const_reverse_iterator - начальный обратный итератор

# ::stappler::memory::set<typename,typename>::crend() const

## BRIEF

Возвращает конечный обратный итератор

## CONTENT

Доступ: public

Возвращает конечный обратный итератор (итератор, указывающий на элемент до начала контейнера)

Возвращает:
* const_reverse_iterator - конечный обратный итератор

# ::stappler::memory::set<typename,typename>::swap(set<Value, Comp>&)

## BRIEF

Обменивает значения в двух контейнерах

## CONTENT

Доступ: public

Обменивает значения в двух контейнерах. Если аллокатор совпадает - обмен происходит без копирования. Если нет - начения копируются.

Параметры:
* set<Value, Comp>& - контейнер для обмена значениями


# ::stappler::memory::set<typename,typename>::find<class>(K const&)

## BRIEF

Находит элемент в контейнере по ключу

## CONTENT

Доступ: public

Находит элемент в контейнере по ключу

Параметры шаблона:
* class K - тип ключа, должен быть сравним с типом ключа контейнера

Параметры:
* K const& - значение ключа

Возвращает:
* iterator - итератор, указывающий на найденный объект или `end()`

# ::stappler::memory::set<typename,typename>::find<class>(K const&) const

## BRIEF

Находит элемент в контейнере по ключу

## CONTENT

Доступ: public

Находит элемент в контейнере по ключу

Параметры шаблона:
* class K - тип ключа, должен быть сравним с типом ключа контейнера

Параметры:
* K const& - значение ключа

Возвращает:
* const_iterator - итератор, указывающий на найденный элемент или `end()`

# ::stappler::memory::set<typename,typename>::lower_bound<class>(K const&)

## BRIEF

Находит нижнюю границу для ключа

## CONTENT

Доступ: public

Находит нижнюю границу для ключа: итератор, указывающий на первый элемент не меньше ключа.

Параметры шаблона:
* class K - тип ключа, должен быть сравним с типом ключа контейнера

Параметры:
* K const& - значение ключа

Возвращает:
* iterator - итератор, указывающий на найденный элемент или `end()`

# ::stappler::memory::set<typename,typename>::lower_bound<class>(K const&) const

## BRIEF

Находит нижнюю границу для ключа

## CONTENT

Доступ: public

Находит нижнюю границу для ключа: итератор, указывающий на первый элемент не меньше ключа.

Параметры шаблона:
* class K - тип ключа, должен быть сравним с типом ключа контейнера

Параметры:
* K const& - значение ключа

Возвращает:
* const_iterator - итератор, указывающий на найденный элемент или `end()`

# ::stappler::memory::set<typename,typename>::upper_bound<class>(K const&)

## BRIEF

Находит верхнюю границу для ключа

## CONTENT

Доступ: public

Находит верхнюю границу для ключа: первый элемент больше ключа

Параметры шаблона:
* class K - тип ключа, должен быть сравним с типом ключа контейнера

Параметры:
* K const& - значение ключа

Возвращает:
* iterator - итератор, указывающий на найденный элемент или `end()`

# ::stappler::memory::set<typename,typename>::upper_bound<class>(K const&) const

## BRIEF

Находит верхнюю границу для ключа

## CONTENT

Доступ: public

Находит верхнюю границу для ключа: первый элемент больше ключа

Параметры шаблона:
* class K - тип ключа, должен быть сравним с типом ключа контейнера

Параметры:
* K const& - значение ключа

Возвращает:
* const_iterator - итератор, указывающий на найденный элемент или `end()`

# ::stappler::memory::set<typename,typename>::equal_range<class>(K const&)

## BRIEF

Находит диапазон элементов, соотвествующих ключу

## CONTENT

Доступ: public

Находит диапазон элементов, соотвествующих ключу

Параметры шаблона:
* class K - тип ключа, должен быть сравним с типом ключа контейнера

Параметры:
* K const& - значение ключа

Возвращает:
* Pair<stappler::memory::set::iterator, stappler::memory::set::iterator> - итераторы указывающие на нижнюю и верхнюю границу для значения соотвественно

# ::stappler::memory::set<typename,typename>::equal_range<class>(K const&) const

## BRIEF

Находит диапазон элементов, соотвествующих ключу

## CONTENT

Доступ: public

Находит диапазон элементов, соотвествующих ключу

Параметры шаблона:
* class K - тип ключа, должен быть сравним с типом ключа контейнера

Параметры:
* K const& - значение ключа

Возвращает:
* Pair<stappler::memory::set::const_iterator, stappler::memory::set::const_iterator> - итераторы указывающие на нижнюю и верхнюю границу для значения соотвественно

# ::stappler::memory::set<typename,typename>::count<class>(K const&) const

## BRIEF

Возвращает число элементов, соотвествующих ключу

## CONTENT

Доступ: public

Возвращает число элементов, соотвествующих ключу

Параметры шаблона:
* class K - тип ключа, должен быть сравним с типом ключа контейнера

Параметры:
* K const& - значение ключа

Возвращает:
* size_t - число элементов, соотвествующих ключу

# ::stappler::memory::set<typename,typename>::reserve(size_t)

## BRIEF

Резервирует память для элементов

## CONTENT

Доступ: public

Резервирует память для элементов. Если элементов уже больше, чем запрошенное число - ничего не делает.

Параметры:
* size_t - число элементов, под которые резервировать память


# ::stappler::memory::set<typename,typename>::_tree

## BRIEF

Реализация чёрно-красного дерева, обеспечивающего работу контейнера

## CONTENT

Доступ: protected

Тип: rbtree::Tree<Value, Value, Comp>

Реализация чёрно-красного дерева, обеспечивающего работу контейнера

# ::stappler::memory::operator==<typename,typename>(set<_Tp, Comp> const&,set<_Tp, Comp> const&)

## BRIEF

Проверяет, совпадают ли два контейнера

## CONTENT

Проверяет, совпадают ли два контейнера. Контейнеры совпадают если совпадает число элементов и все элементы внутри них совпадают.

Параметры шаблона:
* typename _Tp - тип значения контейнера
* typename Comp - тип функтора сравнения

Параметры:
* set<_Tp, Comp> const& - первый контейнер
* set<_Tp, Comp> const& - второй контейнер

Возвращает:
* bool - true если контейнеры совпадают

# ::stappler::memory::operator<<typename,typename>(set<_Tp, Comp> const&,set<_Tp, Comp> const&)

## BRIEF

Лексикографически сравнивает два контейнера

## CONTENT

Лексикографически сравнивает два контейнера

Параметры шаблона:
* typename _Tp - тип значения контейнера
* typename Comp - тип функтора сравнения

Параметры:
* set<_Tp, Comp> const& - первый контейнер
* set<_Tp, Comp> const& - второй контейнер

Возвращает:
* bool - true если первый контейнер лексикографически меньше второго

# ::stappler::memory::operator!=<typename,typename>(set<_Tp, Comp> const&,set<_Tp, Comp> const&)

## BRIEF

Проверяет, не совпадают ли два контейнера

## CONTENT

Проверяет, не совпадают ли два контейнера. Контейнеры не совпадают, если содержат хотя бы один отличающийся элемент или разное число элементов.

Параметры шаблона:
* typename _Tp - тип значения контейнера
* typename Comp - тип функтора сравнения

Параметры:
* set<_Tp, Comp> const& - первый контейнер
* set<_Tp, Comp> const& - второй контейнер

Возвращает:
* bool - true если контейнеры не совпадают

# ::stappler::memory::operator><typename,typename>(set<_Tp, Comp> const&,set<_Tp, Comp> const&)

## BRIEF

Лексикографически сравнивает два контейнера

## CONTENT

Лексикографически сравнивает два контейнера

Параметры шаблона:
* typename _Tp - тип значения контейнера
* typename Comp - тип функтора сравнения

Параметры:
* set<_Tp, Comp> const& - первый контейнер
* set<_Tp, Comp> const& - второй контейнер

Возвращает:
* bool - true если первый контейнер лексикографически больше второго

# ::stappler::memory::operator<=<typename,typename>(set<_Tp, Comp> const&,set<_Tp, Comp> const&)

## BRIEF

Лексикографически сравнивает два контейнера

## CONTENT

Лексикографически сравнивает два контейнера

Параметры шаблона:
* typename _Tp - тип значения контейнера
* typename Comp - тип функтора сравнения

Параметры:
* set<_Tp, Comp> const& - первый контейнер
* set<_Tp, Comp> const& - второй контейнер

Возвращает:
* bool - true если первый контейнер лексикографически меньше или равен второму

# ::stappler::memory::operator>=<typename,typename>(set<_Tp, Comp> const&,set<_Tp, Comp> const&)

## BRIEF

Лексикографически сравнивает два контейнера

## CONTENT

Лексикографически сравнивает два контейнера

Параметры шаблона:
* typename _Tp - тип значения контейнера
* typename Comp - тип функтора сравнения

Параметры:
* set<_Tp, Comp> const& - первый контейнер
* set<_Tp, Comp> const& - второй контейнер

Возвращает:
* bool - true если первый контейнер лексикографически больше или равен второму

# ::stappler::memory::swap<typename,typename>(set<_Tp, Comp>&,set<_Tp, Comp>&)

## BRIEF

Обменивает элементы в двух контейнерах

## CONTENT

Обменивает элементы в двух контейнерах. Если аллокаторы совпадают, значения обмениваются без копирования, в противном случае, элементы копируются.

Параметры шаблона:
* typename _Tp- тип значения контейнера
* typename Comp - тип функтора сравнения

Параметры:
* set<_Tp, Comp>& - первый контейнер
* set<_Tp, Comp>& - второй контейнер
