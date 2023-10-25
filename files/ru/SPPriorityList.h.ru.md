Title: SPPriorityList.h


# STAPPLER_CORE_UTILS_SPPRIORITYLIST_H_

## BRIEF

Заголовок приоритетного списка

## CONTENT

Заголовок приоритетного списка


# ::stappler::PriorityListEntry<typename>

## BRIEF

Элемент приоритетного списка

## CONTENT

Элемент приоритетного списка

Параметры шаблона:
* typename Value - тип хранимого значения

Базовые классы:
* memory::AllocPool


# ::stappler::PriorityListEntry<typename>::prev

## BRIEF

Предыдущий элемент списка

## CONTENT

Предыдущий элемент списка

Тип: PriorityListEntry<Value>*


# ::stappler::PriorityListEntry<typename>::next

## BRIEF

Следующий элемент списка

## CONTENT

Следующий элемент списка

Тип: PriorityListEntry<Value>*


# ::stappler::PriorityListEntry<typename>::target

## BRIEF

Указатель на хозяина элемента

## CONTENT

Указатель на хозяина элемента

Тип: void*


# ::stappler::PriorityListEntry<typename>::priority

## BRIEF

Приоритет элемента

## CONTENT

Приоритет элемента

Тип: int32_t


# ::stappler::PriorityListEntry<typename>::value

## BRIEF

Хранимое значение

## CONTENT

Хранимое значение

Тип: Value


# ::stappler::HashTraits<PriorityListEntry<Value>*>::HashTraits<PriorityListEntry<Value>*>

## BRIEF

Реализация элемента хэш-таблицы для элеемента приоритетного списка

## CONTENT

Реализация элемента хэш-таблицы для элеемента приоритетного списка

Параметры шаблона:
* typename Value


# ::stappler::HashTraits<PriorityListEntry<Value>*>::Entry

## BRIEF

Тип элемента

## CONTENT

Тип элемента


# ::stappler::HashTraits<PriorityListEntry<Value>*>::ValueSize

## BRIEF

Размер значения

## CONTENT

Размер значения

Тип: auto const


# ::stappler::HashTraits<PriorityListEntry<Value>*>::ValueOffset

## BRIEF

Соответвующее смещение для указателя на последовательно распределённые элементы

## CONTENT

Соответвующее смещение для указателя на последовательно распределённые элементы. С помощью этого значения формируется значимая маска ля ардеса указателя.

Тип: auto const


# ::stappler::HashTraits<PriorityListEntry<Value>*>::hash(uint32_t,stappler::HashTraits<PriorityListEntry<type-parameter-0-0> *>::Entry const*)

## BRIEF

Вычисление хэша для элемента

## CONTENT

Вычисление хэша для элемента

Параметры:
* uint32_t
* stappler::HashTraits<PriorityListEntry<type-parameter-0-0> *>::Entry const*

Возвращает:
* uint32_t

# ::stappler::HashTraits<PriorityListEntry<Value>*>::hash(uint32_t,void const*)

## BRIEF

Вычисление хэша для указателя

## CONTENT

Вычисление хэша для указателя

Параметры:
* uint32_t
* void const*

Возвращает:
* uint32_t

# ::stappler::HashTraits<PriorityListEntry<Value>*>::equal(stappler::HashTraits<PriorityListEntry<type-parameter-0-0> *>::Entry const*,stappler::HashTraits<PriorityListEntry<type-parameter-0-0> *>::Entry const*)

## BRIEF

Сравнение элементов

## CONTENT

Сравнение элементов

Параметры:
* stappler::HashTraits<PriorityListEntry<type-parameter-0-0> *>::Entry const*
* stappler::HashTraits<PriorityListEntry<type-parameter-0-0> *>::Entry const*

Возвращает:
* bool

# ::stappler::HashTraits<PriorityListEntry<Value>*>::equal(stappler::HashTraits<PriorityListEntry<type-parameter-0-0> *>::Entry const*,void const*)

## BRIEF

Сравнение элемента и указателя

## CONTENT

Сравнение элемента и указателя

Параметры:
* stappler::HashTraits<PriorityListEntry<type-parameter-0-0> *>::Entry const*
* void const*

Возвращает:
* bool

# ::stappler::PriorityList<typename>

## BRIEF

Структура списка приоритетов

## CONTENT

Структура списка приоритетов. Этот список позволяет эффективно добавлять и удалять элементы с разными приоритетами, и обходить их в порядке роста приоритета. Использует пул памяти.

Список разделяет значения на три сегмента - высокий приоритет, низкий приоритет и нулевой приоритет. Это обеспечивает возможность быстрой вставки значений с нулевым приоритетом, которые должны встречаться чаще всего.

Параметры шаблона:
* typename Value - тип хранимого значения


# ::stappler::PriorityList<typename>::Pool

## BRIEF

Тип пула памяти

## CONTENT

Доступ: public

Тип пула памяти


# ::stappler::PriorityList<typename>::Entry

## BRIEF

Тип элемента

## CONTENT

Доступ: public

Тип элемента


# ::stappler::PriorityList<typename>::PriorityList(stappler::PriorityList::Pool*)

## BRIEF

Конструирует список с памятью из пула памяти

## CONTENT

Доступ: public

Конструирует список с памятью из пула памяти

Параметры:
* stappler::PriorityList::Pool*


# ::stappler::PriorityList<typename>::~PriorityList()

## BRIEF

Уничтожает список

## CONTENT

Доступ: public

Уничтожает список


# ::stappler::PriorityList<typename>::emplace<typename>(void*,int32_t,Args &&...)

## BRIEF

Добавляет новый элемент в список, конструируя его на месте

## CONTENT

Доступ: public

Добавляет новый элемент в список, конструируя его на месте

Параметры шаблона:
* typename Args

Параметры:
* void* - указатель на хозяина элемента. Позволен только один элемент на хозяина. Элемент с таким же хояином будет заменён.
* int32_t - приоритет элемента. Если элемент уже есть - меняет его приоритет.
* Args &&... - аргументы для конструирования

Возвращает:
* Value* - указатель на новое значение


# ::stappler::PriorityList<typename>::find(void*)

## BRIEF

Ищет элемент по указателю на хозяина

## CONTENT

Доступ: public

Ищет элемент по указателю на хозяина

Параметры:
* void*

Возвращает:
* Value* - найденное значение или nullptr

# ::stappler::PriorityList<typename>::foreach(Callback<bool (void *, int32_t, Value &)> const&)

## BRIEF

Обходит элементы в порядке роста приоритета

## CONTENT

Доступ: public

Обходит элементы в порядке роста приоритета

Параметры:
* Callback<bool (void *, int32_t, Value &)> const&

Параметры функции:
* void * - указатель на хозяина
* int32_t - приоритет
* Value & - хранимое значение


# ::stappler::PriorityList<typename>::erase(void const*)

## BRIEF

Удаляет элемент для хозяина

## CONTENT

Доступ: public

Удаляет элемент для хозяина

Параметры:
* void const*

Возвращает:
* bool

# ::stappler::PriorityList<typename>::clear()

## BRIEF

Очищает список

## CONTENT

Доступ: public

Очищает список


# ::stappler::PriorityList<typename>::empty() const

## BRIEF

Проверяет список на пустоту

## CONTENT

Доступ: public

Проверяет список на пустоту

Возвращает:
* bool - true если список пуст

# ::stappler::PriorityList<typename>::emplace_list<typename>(bool,stappler::PriorityList::Entry**,void*,int32_t,Args &&...)

## BRIEF

Добавляет элемент в конкретный список

## CONTENT

Доступ: protected

Добавляет элемент в конкретный список

Параметры шаблона:
* typename Args

Параметры:
* bool
* stappler::PriorityList::Entry**
* void*
* int32_t
* Args &&...

Возвращает:
* Value*

# ::stappler::PriorityList<typename>::allocate<typename>(void*,int32_t,Args &&...)

## BRIEF

Распределяет новый элемент

## CONTENT

Доступ: protected

Распределяет новый элемент

Параметры шаблона:
* typename Args

Параметры:
* void*
* int32_t
* Args &&...

Возвращает:
* Entry*

# ::stappler::PriorityList<typename>::erase_entry(stappler::PriorityList::Entry*)

## BRIEF

Удаляет элемент

## CONTENT

Доступ: protected

Удаляет элемент

Параметры:
* stappler::PriorityList::Entry*


# ::stappler::PriorityList<typename>::free(stappler::PriorityList::Entry*)

## BRIEF

Деаллоцирует элемент

## CONTENT

Доступ: protected

Деаллоцирует элемент

Параметры:
* stappler::PriorityList::Entry*


# ::stappler::PriorityList<typename>::foreach_list(stappler::PriorityList::Entry*,Callback<bool (void *, int32_t, Value &)> const&)

## BRIEF

Обходит список элементов

## CONTENT

Доступ: protected

Обходит список элементов

Параметры:
* stappler::PriorityList::Entry*
* Callback<bool (void *, int32_t, Value &)> const&


# ::stappler::PriorityList<typename>::_pool

## BRIEF

Пул памяти

## CONTENT

Доступ: protected

Пул памяти

Тип: Pool*


# ::stappler::PriorityList<typename>::_size

## BRIEF

Число элементов в списке

## CONTENT

Доступ: protected

Число элементов в списке

Тип: size_t


# ::stappler::PriorityList<typename>::_negList

## BRIEF

Связный список с отрицательным приоритетом

## CONTENT

Доступ: protected

Связный список с отрицательным приоритетом

Тип: Entry*


# ::stappler::PriorityList<typename>::_zeroList

## BRIEF

Связный список с нулевым приоритетом

## CONTENT

Доступ: protected

Связный список с нулевым приоритетом

Тип: Entry*


# ::stappler::PriorityList<typename>::_posList

## BRIEF

Связный список с положительным приоритетом

## CONTENT

Доступ: protected

Связный список с положительным приоритетом

Тип: Entry*


# ::stappler::PriorityList<typename>::_hash

## BRIEF

Хэш-таблица для определения элемента по хозяину

## CONTENT

Доступ: protected

Хэш-таблица для определения элемента по хозяину

Тип: HashTable<stappler::PriorityList::Entry *>


# ::stappler::PriorityList<typename>::_free

## BRIEF

Связный список свободных элементов для повторного использования

## CONTENT

Доступ: protected

Связный список свободных элементов для повторного использования

Тип: Entry*
