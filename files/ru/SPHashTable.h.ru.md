Title: SPHashTable.h


# STAPPLER_CORE_UTILS_SPHASHTABLE_H_

## BRIEF

Заголовок хэш-таблицы

## CONTENT

Заголовок хэш-таблицы


# ::stappler::NamedRef

## BRIEF

Тип именованной ссылки для использования в хэш-таблице

## CONTENT

Тип именованной ссылки для использования в хэш-таблице

Базовые классы:
* RefBase<memory::StandartInterface>


# ::stappler::NamedRef::~NamedRef()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор


# ::stappler::NamedRef::getName() const

## BRIEF

Виртуальная функция получения имени

## CONTENT

Доступ: public

Виртуальная функция получения имени

Возвращает:
* stappler::StringView

# ::stappler::NamedMem

## BRIEF

Структура именованного блока памяти для использования в хэш-таблице

## CONTENT

Структура именованного блока памяти для использования в хэш-таблице

Базовые классы:
* memory::AllocPool


# ::stappler::NamedMem::~NamedMem()

## BRIEF

Деструктор

## CONTENT

Деструктор


# ::stappler::NamedMem::key

## BRIEF

Имя блока памяти

## CONTENT

Имя блока памяти

Тип: stappler::StringView


# ::stappler::HashFunc

## BRIEF

Тип хэш-функции для таблицы

## CONTENT

Тип хэш-функции для таблицы

# ::stappler::HashTraits<NamedRef*>::HashTraits<NamedRef*>

## BRIEF

Вспомогательный тип для определения хэша объекта именованной ссылки

## CONTENT

Вспомогательный тип для определения хэша объекта именованной ссылки

# ::stappler::HashTraits<NamedRef*>::hash(uint32_t,stappler::NamedRef const*)

## BRIEF

Функция хэша

## CONTENT

Функция хэша. Возвращает хэш имени на основе инициализирующего значения.

Параметры:
* uint32_t - инициализирующее значение
* stappler::NamedRef const* - именованная ссылка

Возвращает:
* uint32_t - значение хэша

# ::stappler::HashTraits<NamedRef*>::equal(stappler::NamedRef const*,stappler::NamedRef const*)

## BRIEF

Функция сравнения двух ссылок

## CONTENT

Функция сравнения двух ссылок

Параметры:
* stappler::NamedRef const*
* stappler::NamedRef const*

Возвращает:
* bool - true если имена совпадают

# ::stappler::HashTraits<Rc<NamedRef>>::HashTraits<Rc<NamedRef>>

## BRIEF

Вспомогательный тип для определения хэша объекта именованной ссылки

## CONTENT

Вспомогательный тип для определения хэша объекта именованной ссылки

# ::stappler::HashTraits<Rc<NamedRef>>::hash(uint32_t,stappler::NamedRef const*)

## BRIEF

Функция хэша

## CONTENT

Функция хэша. Возвращает хэш имени на основе инициализирующего значения.

Параметры:
* uint32_t - инициализирующее значение
* stappler::NamedRef const* - именованная ссылка

Возвращает:
* uint32_t - значение хэша

# ::stappler::HashTraits<Rc<NamedRef>>::hash(uint32_t,stappler::StringView)

## BRIEF

Функция хэша

## CONTENT

Функция хэша. Возвращает хэш имени на основе инициализирующего значения.

Параметры:
* uint32_t - инициализирующее значение
* stappler::StringView - имя ссылки

Возвращает:
* uint32_t - значение хэша

# ::stappler::HashTraits<Rc<NamedRef>>::equal(stappler::NamedRef const*,stappler::NamedRef const*)

## BRIEF

Функция сравнения двух ссылок

## CONTENT

Функция сравнения двух ссылок

Параметры:
* stappler::NamedRef const*
* stappler::NamedRef const*

Возвращает:
* bool - true если имена совпадают


# ::stappler::HashTraits<Rc<NamedRef>>::equal(stappler::NamedRef const*,stappler::StringView)

## BRIEF

Функция сравнения ссылки с именем

## CONTENT

Функция сравнения ссылки с именем

Параметры:
* stappler::NamedRef const*
* stappler::StringView

Возвращает:
* bool - true если имя ссылки совпадает с предлагаемым именем


# ::stappler::HashTraits<NamedMem*>::HashTraits<NamedMem*>

## BRIEF

Вспомогательный тип для определения хэша именованной памяти

## CONTENT

Вспомогательный тип для определения хэша именованной памяти


# ::stappler::HashTraits<NamedMem*>::hash(uint32_t,stappler::NamedMem const*)

## BRIEF

Вычисляет хэш имени

## CONTENT

Вычисляет хэш имени

Параметры:
* uint32_t - инициализируюшее значение
* stappler::NamedMem const* - именованная память, имя которой используется

Возвращает:
* uint32_t - значение хэша

# ::stappler::HashTraits<NamedMem*>::hash(uint32_t,stappler::StringView)

## BRIEF

Вычисляет хэш имени

## CONTENT

Вычисляет хэш имени

Параметры:
* uint32_t - инициализируюшее значение
* stappler::StringView - имя блока памяти

Возвращает:
* uint32_t - значение хэша

# ::stappler::HashTraits<NamedMem*>::equal(stappler::NamedMem const*,stappler::NamedMem const*)

## BRIEF

Сравнивает именованную память по имени

## CONTENT

Сравнивает именованную память по имени

Параметры:
* stappler::NamedMem const*
* stappler::NamedMem const*

Возвращает:
* bool - true если имена совпадают

# ::stappler::HashTraits<NamedMem*>::equal(stappler::NamedMem const*,stappler::StringView)

## BRIEF

Сравнивает именованную память с её именем

## CONTENT

Сравнивает именованную память с её именем

Параметры:
* stappler::NamedMem const* - именованная память
* stappler::StringView - предлагаемое имя

Возвращает:
* bool - true если имена совпадают

# ::stappler::HashTraitDiscovery<Rc<Value>>::HashTraitDiscovery<Rc<Value>>

## BRIEF

Вспомогательный тип, вычисляющий тип объекта хэша

## CONTENT

Вспомогательный тип, вычисляющий тип объекта хэша

Параметры шаблона:
* typename Value - тип, хранимый в хэш-таблице


# ::stappler::HashTraitDiscovery<Rc<Value>>::type

## BRIEF

Вычисленный тип вспомогательной структуры хэша

## CONTENT

Вычисленный тип вспомогательной структуры хэша

# ::stappler::HashTraitDiscovery<Value*>::HashTraitDiscovery<Value*>

## BRIEF

Вспомогательный тип, вычисляющий тип объекта хэша

## CONTENT

Вспомогательный тип, вычисляющий тип объекта хэша

Параметры шаблона:
* typename Value - тип, хранимый в хэш-таблице


# ::stappler::HashTraitDiscovery<Value*>::type

## BRIEF

Вычисленный тип вспомогательной структуры хэша

## CONTENT

Вычисленный тип вспомогательной структуры хэша


# ::stappler::HashEntry<typename>

## BRIEF

Структура ячейки хэш-таблицы

## CONTENT

Структура ячейки хэш-таблицы

Параметры шаблона:
* typename Value - хранимый в хэш-таблице тип


# ::stappler::HashEntry<typename>::Type

## BRIEF

Хранимый тип

## CONTENT

Хранимый тип

# ::stappler::HashEntry<typename>::Traits

## BRIEF

Вспомогательный тип вычисления хэша

## CONTENT

Вспомогательный тип вычисления хэша


# ::stappler::HashEntry<typename>::getHash<typename>(uint32_t,Args &&...)

## BRIEF

Вычисляет хэш

## CONTENT

Вычисляет хэш

Параметры шаблона:
* typename Args

Параметры:
* uint32_t - инициализирующее значение
* Args &&...- аргументы для вычисления хэша

Возвращает:
* uint32_t - значение хэша

# ::stappler::HashEntry<typename>::isEqual<typename>(Value const&,Args &&...)

## BRIEF

Сравнивает значения на равенство

## CONTENT

Сравнивает значения на равенство

Параметры шаблона:
* typename Args

Параметры:
* Value const& - значение в таблице
* Args &&... - аргуметны для сравнения

Возвращает:
* bool - true при совпадении

# ::stappler::HashEntry<typename>::next

## BRIEF

Следующая ячейка таблицы

## CONTENT

Следующая ячейка таблицы

Тип: HashEntry<Value>*


# ::stappler::HashEntry<typename>::hash

## BRIEF

Значение хэша

## CONTENT

Значение хэша

Тип: uint32_t


# ::stappler::HashEntry<typename>::data

## BRIEF

Хранимое значение

## CONTENT

Хранимое значение

Тип: std::array<uint8_t, sizeof(Value)>


# ::stappler::HashEntry<typename>::get()

## BRIEF

Возвращает указатель на значение

## CONTENT

Возвращает указатель на значение

Возвращает:
* Value*

# ::stappler::HashEntry<typename>::get() const

## BRIEF

Возвращает указатель на значение

## CONTENT

Возвращает указатель на значение

Возвращает:
* Value const*

# ::stappler::HashIndex<typename>

## BRIEF

Структура индекса-итератора хэш-таблицы

## CONTENT

Структура индекса-итератора хэш-таблицы

Параметры шаблона:
* typename Value - тип значения таблицы


# ::stappler::HashIndex<typename>::Type

## BRIEF

Тип значения в таблице

## CONTENT

Тип значения в таблице


# ::stappler::HashIndex<typename>::ht

## BRIEF

Указатель на таблицу

## CONTENT

Указатель на таблицу

Тип: HashTable<Value>*


# ::stappler::HashIndex<typename>::_bucket

## BRIEF

Указатель на текущую ячейку в таблице

## CONTENT

Указатель на текущую ячейку в таблице

Тип: HashEntry<stappler::HashIndex::Type>**


# ::stappler::HashIndex<typename>::_self

## BRIEF

Текущая ячейка итерации

## CONTENT

Текущая ячейка итерации

Тип: HashEntry<stappler::HashIndex::Type>*


# ::stappler::HashIndex<typename>::_next

## BRIEF

Следующая ячейка итерации

## CONTENT

Следующая ячейка итерации

Тип: HashEntry<stappler::HashIndex::Type>*


# ::stappler::HashIndex<typename>::index

## BRIEF

Текущий индекс в таблице

## CONTENT

Текущий индекс в таблице

Тип: uint32_t


# ::stappler::HashIndex<typename>::next()

## BRIEF

Смещает итератор на следующее значение

## CONTENT

Смещает итератор на следующее значение

Возвращает:
* HashIndex<Value>*

# ::stappler::HashIndex<typename>::operator==(const HashIndex<Value>&) const

## BRIEF

Сравнивает итераторы

## CONTENT

Сравнивает итераторы

Параметры:
* const HashIndex<Value>&

Возвращает:
* bool

# ::stappler::HashIndex<typename>::operator!=(const HashIndex<Value>&) const

## BRIEF

Сравнивает итераторы

## CONTENT

Сравнивает итераторы

Параметры:
* const HashIndex<Value>&

Возвращает:
* bool

# ::stappler::HashIndex<typename>::operator++()

## BRIEF

Переходит к следующему значению

## CONTENT

Переходит к следующему значению

Возвращает:
* HashIndex<Value>&

# ::stappler::HashIndex<typename>::operator++(int)

## BRIEF

Переходит к следующему значению постфиксно

## CONTENT

Переходит к следующему значению постфиксно

Параметры:
* int

Возвращает:
* HashIndex<Value>

# ::stappler::HashIndex<typename>::operator*() const

## BRIEF

Разыменовывает итератор

## CONTENT

Разыменовывает итератор

Возвращает:
* Type&

# ::stappler::HashIndex<typename>::operator->() const

## BRIEF

Разыменовывает итератор

## CONTENT

Разыменовывает итератор

Возвращает:
* Type*

# ::stappler::ConstHashIndex<typename>

## BRIEF

Структура индекса-итератора хэш-таблицы

## CONTENT

Структура индекса-итератора хэш-таблицы

Параметры шаблона:
* typename Value - тип значения таблицы

# ::stappler::ConstHashIndex<typename>::Type

## BRIEF

Тип значения в таблице

## CONTENT

Тип значения в таблице


# ::stappler::ConstHashIndex<typename>::ht

## BRIEF

Указатель на таблицу

## CONTENT

Указатель на таблицу

Тип: HashTable<Value>*


# ::stappler::ConstHashIndex<typename>::_bucket

## BRIEF

Указатель на текущую ячейку в таблице

## CONTENT

Указатель на текущую ячейку в таблице

Тип: HashEntry<stappler::HashIndex::Type>**


# ::stappler::ConstHashIndex<typename>::_self

## BRIEF

Текущая ячейка итерации

## CONTENT

Текущая ячейка итерации

Тип: HashEntry<stappler::HashIndex::Type>*


# ::stappler::ConstHashIndex<typename>::_next

## BRIEF

Следующая ячейка итерации

## CONTENT

Следующая ячейка итерации

Тип: HashEntry<stappler::HashIndex::Type>*


# ::stappler::ConstHashIndex<typename>::index

## BRIEF

Текущий индекс в таблице

## CONTENT

Текущий индекс в таблице

Тип: uint32_t


# ::stappler::ConstHashIndex<typename>::next()

## BRIEF

Переходит к следующему значению

## CONTENT

Переходит к следующему значению

Возвращает:
* ConstHashIndex<Value>*

# ::stappler::ConstHashIndex<typename>::operator==(const ConstHashIndex<Value>&) const

## BRIEF

Сравнивает итераторы

## CONTENT

Сравнивает итераторы

Параметры:
* const ConstHashIndex<Value>&

Возвращает:
* bool

# ::stappler::ConstHashIndex<typename>::operator!=(const ConstHashIndex<Value>&) const

## BRIEF

Сравнивает итераторы

## CONTENT

Сравнивает итераторы

Параметры:
* const ConstHashIndex<Value>&

Возвращает:
* bool

# ::stappler::ConstHashIndex<typename>::operator++()

## BRIEF

Переходит к следующему значению

## CONTENT

Переходит к следующему значению

Возвращает:
* ConstHashIndex<Value>&

# ::stappler::ConstHashIndex<typename>::operator++(int)

## BRIEF

Переходит к следующему значению постфиксно

## CONTENT

Переходит к следующему значению постфиксно

Параметры:
* int

Возвращает:
* ConstHashIndex<Value>

# ::stappler::ConstHashIndex<typename>::operator*() const

## BRIEF

Разыменовывает итератор

## CONTENT

Разыменовывает итератор

Возвращает:
* Type&

# ::stappler::ConstHashIndex<typename>::operator->() const

## BRIEF

Разыменовывает итератор

## CONTENT

Разыменовывает итератор

Возвращает:
* Type*

# ::stappler::HashTable<typename>

## BRIEF

Тип хэш-таблицы

## CONTENT

Тип хэш-таблицы

Параметры шаблона:
* typename Value - тип хранимого значения


# ::stappler::HashTable<typename>::Pool

## BRIEF

Тип используемого пула памяти

## CONTENT

Тип используемого пула памяти

Доступ: public


# ::stappler::HashTable<typename>::ValueType

## BRIEF

Тип ячейки зранения

## CONTENT

Доступ: public

Тип ячейки зранения

# ::stappler::HashTable<typename>::merge_fn

## BRIEF

Функция объединения двух значений

## CONTENT

Доступ: public

Функция объединения двух значений


# ::stappler::HashTable<typename>::foreach_fn

## BRIEF

Функция пречисления значений

## CONTENT

Доступ: public

Функция пречисления значений


# ::stappler::HashTable<typename>::INITIAL_MAX

## BRIEF

Начальный максимальный индекс значения с таблице

## CONTENT

Доступ: public

Начальный максимальный индекс значения с таблице

Тип: auto const


# ::stappler::HashTable<typename>::iterator

## BRIEF

Тип итератора

## CONTENT

Доступ: public

Тип итератора

# ::stappler::HashTable<typename>::const_iterator

## BRIEF

Тип постоянного итератора

## CONTENT

Доступ: public

Тип постоянного итератора

# ::stappler::HashTable<typename>::HashTable(stappler::HashTable::Pool*)

## BRIEF

Создаёт таблицу с пулом памяти

## CONTENT

Доступ: public

Создаёт таблицу с пулом памяти

Параметры:
* stappler::HashTable::Pool* - используемый пул памяти (nullptr - используется из контекста)


# ::stappler::HashTable<typename>::HashTable(const HashTable<Value>&,stappler::HashTable::Pool*)

## BRIEF

Копирует таблицу, используя пул памяти

## CONTENT

Доступ: public

Копирует таблицу, используя пул памяти

Параметры:
* const HashTable<Value>& - другая таблица
* stappler::HashTable::Pool* - используемый пул памяти (nullptr - используется из контекста)


# ::stappler::HashTable<typename>::HashTable(HashTable<Value>&&,stappler::HashTable::Pool*)

## BRIEF

Перемещает таблицу, используя пул памяти

## CONTENT

Доступ: public

Перемещает таблицу, используя пул памяти. Перемещение возможно только если пулы памяти совпадают, в противном случае выполняется копирование

Параметры:
* HashTable<Value>&& - другая таблица
* stappler::HashTable::Pool* - используемый пул памяти (nullptr - используется из контекста)


# ::stappler::HashTable<typename>::~HashTable()

## BRIEF

Деструктор

## CONTENT

Деструктор

Доступ: public


# ::stappler::HashTable<typename>::operator=(const HashTable<Value>&)

## BRIEF

Оператор копирования

## CONTENT

Доступ: public

Оператор копирования

Параметры:
* const HashTable<Value>&

Возвращает:
* HashTable<Value>&

# ::stappler::HashTable<typename>::operator=(HashTable<Value>&&)

## BRIEF

Оператор перемещения

## CONTENT

Доступ: public

Оператор перемещения. Перемещение возможно только если пулы памяти совпадают, в противном случае выполняется копирование

Параметры:
* HashTable<Value>&&

Возвращает:
* HashTable<Value>&

# ::stappler::HashTable<typename>::assign<typename>(Args &&...)

## BRIEF

Присваивает значение ключу

## CONTENT

Доступ: public

Присваивает значение ключу. Заменяет значение, если ключ существует.

Параметры шаблона:
* typename Args

Параметры:
* Args &&... - ключ и аргументы для конструирования значения

Возвращает:
* Pair<stappler::HashTable::iterator, bool> - итератор на новом элементе и true если значение было добавлно, false, если существовало

# ::stappler::HashTable<typename>::emplace<typename>(Args &&...)

## BRIEF

Добавляет значение по ключу

## CONTENT

Доступ: public

Добавляет значение по ключу. Ничего не делает, если значение уже было

Параметры шаблона:
* typename Args

Параметры:
* Args &&... - ключ и аргументы для конструирования значения

Возвращает:
* Pair<stappler::HashTable::iterator, bool> - итератор на новом элементе и true если значение было добавлно, false, если существовало


# ::stappler::HashTable<typename>::contains<typename>(Args &&...) const

## BRIEF

Проверяет, есть ли знначение для ключа

## CONTENT

Доступ: public

Проверяет, есть ли знначение для ключа

Параметры шаблона:
* typename Args

Параметры:
* Args &&... - аргументы для конструирования и сравнения ключа

Возвращает:
* bool - true если значение для ключа есть

# ::stappler::HashTable<typename>::find<typename>(Args &&...)

## BRIEF

Ищет значение по ключу

## CONTENT

Доступ: public

Ищет значение по ключу

Параметры шаблона:
* typename Args

Параметры:
* Args &&...- аргументы для конструирования и сравнения ключа

Возвращает:
* iterator - итератор на месте объекта или end()

# ::stappler::HashTable<typename>::find<typename>(Args &&...) const

## BRIEF

Ищет значение по ключу

## CONTENT

Доступ: public

Ищет значение по ключу

Параметры шаблона:
* typename Args

Параметры:
* Args &&... - аргументы для конструирования и сравнения ключа

Возвращает:
* const_iterator - итератор на месте объекта или end()

# ::stappler::HashTable<typename>::get<typename>(Args &&...) const

## BRIEF

Возвращает значение по ключу, если оно есть

## CONTENT

Доступ: public

Возвращает значение по ключу, если оно есть

Параметры шаблона:
* typename Args

Параметры:
* Args &&... - аргументы для конструирования и сравнения ключа

Возвращает:
* const typename ValueType::Type

# ::stappler::HashTable<typename>::erase(stappler::HashTable::iterator)

## BRIEF

Удаляет элемент по итератору

## CONTENT

Доступ: public

Удаляет элемент по итератору

Параметры:
* stappler::HashTable::iterator

Возвращает:
* iterator - итератор на месте удалённого элемента

# ::stappler::HashTable<typename>::erase<typename>(Args &&...)

## BRIEF

Удаляет элемент по ключу

## CONTENT

Доступ: public

Удаляет элемент по ключу

Параметры шаблона:
* typename Args

Параметры:
* Args &&... - аргументы для конструирования и сравнения ключа

Возвращает:
* iterator - итератор на месте удалённого элемента или end()

# ::stappler::HashTable<typename>::size() const

## BRIEF

Возвращает число элементов в таблице

## CONTENT

Доступ: public

Возвращает число элементов в таблице

Возвращает:
* size_t

# ::stappler::HashTable<typename>::empty() const

## BRIEF

Проверяет таблицу на пустоту

## CONTENT

Доступ: public

Проверяет таблицу на пустоту

Возвращает:
* bool - true если таблица пустая

# ::stappler::HashTable<typename>::reserve(size_t)

## BRIEF

Резервирует память для таблицы

## CONTENT

Доступ: public

Резервирует память для таблицы

Параметры:
* size_t - число элементов для резервирования


# ::stappler::HashTable<typename>::clear()

## BRIEF

Удаляет все элементы тыблицы

## CONTENT

Доступ: public

Удаляет все элементы тыблицы


# ::stappler::HashTable<typename>::begin()

## BRIEF

Возвращает итератор начала таблицы

## CONTENT

Доступ: public

Возвращает итератор начала таблицы

Возвращает:
* iterator

# ::stappler::HashTable<typename>::end()

## BRIEF

Возвращает итератор конца таблицы

## CONTENT

Доступ: public

Возвращает итератор конца таблицы

Возвращает:
* iterator

# ::stappler::HashTable<typename>::begin() const

## BRIEF

Возвращает итератор начала таблицы

## CONTENT

Доступ: public

Возвращает итератор начала таблицы

Возвращает:
* const_iterator

# ::stappler::HashTable<typename>::end() const

## BRIEF

Возвращает итератор конца таблицы

## CONTENT

Доступ: public

Возвращает итератор конца таблицы

Возвращает:
* const_iterator

# ::stappler::HashTable<typename>::get_cell_count() const

## BRIEF

Возвращает число активных ячеек таблицы

## CONTENT

Доступ: public

Возвращает число активных ячеек таблицы

Возвращает:
* size_t

# ::stappler::HashTable<typename>::get_free_count() const

## BRIEF

Возвращает число свободных ячеек таблицы

## CONTENT

Доступ: public

Возвращает число свободных ячеек таблицы

Возвращает:
* size_t

# ::stappler::HashTable<typename>::get_seed() const

## BRIEF

Возвращает инициализирующее значение таблицы

## CONTENT

Доступ: public

Возвращает инициализирующее значение таблицы

Возвращает:
* uint32_t

# ::stappler::HashTable<typename>::allocate_value()

## BRIEF

Распределяет из памяти новое значение для элемента

## CONTENT

Доступ: private

Распределяет из памяти новое значение для элемента

Возвращает:
* ValueType*

# ::stappler::HashTable<typename>::alloc_array(memory::pool_t*,uint32_t)

## BRIEF

Распределяет массив значений для таблицы

## CONTENT

Доступ: private

Распределяет массив значений для таблицы

Параметры:
* memory::pool_t* - пул памяти
* uint32_t - число элементов

Возвращает:
* HashEntry<Value>**

# ::stappler::HashTable<typename>::expand_array(HashTable<Value>*,uint32_t)

## BRIEF

Расширяет массив значений до нового максимума

## CONTENT

Доступ: private

Расширяет массив значений до нового максимума

Параметры:
* HashTable<Value>* = указатель на начало текущего массива
* uint32_t - новый размер массива


# ::stappler::HashTable<typename>::get_value<typename>(stappler::HashTable::ValueType***,Args &&...) const

## BRIEF

Получает значение по ключу

## CONTENT

Доступ: private

Получает значение по ключу

Параметры шаблона:
* typename Args

Параметры:
* stappler::HashTable::ValueType*** - указатель для возврата указателя на ячейку таблицы со значением
* Args &&... - аргументы для конструирования ключа и сравнения значений

Возвращает:
* ValueType* - значение объекта или nullptr

# ::stappler::HashTable<typename>::set_value<typename>(bool,stappler::HashTable::ValueType***,Args &&...)

## BRIEF

Устанавливает значение для ключа

## CONTENT

Доступ: private

Устанавливает значение для ключа

Параметры шаблона:
* typename Args

Параметры:
* bool - true если необходимо перезаписать имеющееся значение
* stappler::HashTable::ValueType***- указатель для возврата указателя на ячейку таблицы со значением
* Args &&... - аргументы для конструирования нового значения

Возвращает:
* Pair<stappler::HashTable::ValueType *, bool> - указательн а новое значение и флаг, был ли доабвлен новый элемент

# ::stappler::HashTable<typename>::do_copy(HashEntry<Value>**,uint32_t)

## BRIEF

Копирует значение текущего массива в новый

## CONTENT

Доступ: private

Копирует значение текущего массива в новый

Параметры:
* HashEntry<Value>** - указатель на начало нового массива
* uint32_t - размер нового массива

Возвращает:
* HashEntry<Value>**

# ::stappler::HashTable<typename>::do_allocate_array(uint32_t)

## BRIEF

Аллоцирует новый массив значений

## CONTENT

Доступ: private

Аллоцирует новый массив значений

Параметры:
* uint32_t - число ячеек в новом массиве


# ::stappler::HashTable<typename>::pool

## BRIEF

Используемый пул памяти

## CONTENT

Доступ: private

Используемый пул памяти

Тип: Pool*


# ::stappler::HashTable<typename>::array

## BRIEF

Текущий массив значений

## CONTENT

Доступ: private

Текущий массив значений

Тип: HashEntry<Value>**


# ::stappler::HashTable<typename>::count

## BRIEF

Число элементов в таблице

## CONTENT

Доступ: private

Число элементов в таблице

Тип: uint32_t


# ::stappler::HashTable<typename>::max

## BRIEF

Максимальное число ячеек

## CONTENT

Доступ: private

Максимальное число ячеек

Тип: uint32_t


# ::stappler::HashTable<typename>::seed

## BRIEF

Инициализирующее значение хэша

## CONTENT

Доступ: private

Инициализирующее значение хэша

Тип: uint32_t


# ::stappler::HashTable<typename>::free

## BRIEF

Указатель на следующий пустой элемент

## CONTENT

Доступ: private

Указатель на следующий пустой элемент

Тип: HashEntry<Value>*
