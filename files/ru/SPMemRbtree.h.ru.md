Title: SPMemRbtree.h


# STAPPLER_CORE_MEMORY_SPMEMRBTREE_H_

## BRIEF

Заголовок контейнера вида красно-чёрного дерева

## CONTENT

Заголовок контейнера вида красно-чёрного дерева. Используется для аналогов map и set


# SP_MEM_RBTREE_DEBUG

## BRIEF

Макрос для включения отладочных возожностей

## CONTENT

Макрос для включения отладочных возожностей


# ::stappler::memory::rbtree::NodeColor

## BRIEF

Цвет элеммента дерева

## CONTENT

Цвет элеммента дерева

Значения:
* Red - красный
* Black - чёрный


# ::stappler::memory::rbtree::Storage<typename>

## BRIEF

Тип хранилища элементов дерева

## CONTENT

Тип хранилища элементов дерева

Параметры шаблона:
* typename Value - тип хранимого значения


# ::stappler::memory::rbtree::NodeBase

## BRIEF

Базовый класс элемента дерева

## CONTENT

Базовый класс элемента дерева

Базовые классы:
* AllocPool


# ::stappler::memory::rbtree::NodeBase::Flag

## BRIEF

Набор флагов элемента

## CONTENT

Набор флагов элемента


# ::stappler::memory::rbtree::NodeBase::Flag::color

## BRIEF

Цвет нода

## CONTENT

Цвет нода (0 - красный)

Тип: uintptr_t


# ::stappler::memory::rbtree::NodeBase::Flag::prealloc

## BRIEF

Флаг блоковой преаллокации элемента

## CONTENT

Флаг блоковой преаллокации элемента. Установлен если элемент распределён в составе блока

Тип: uintptr_t


# ::stappler::memory::rbtree::NodeBase::Flag::index

## BRIEF

Индекс блока преаллокации

## CONTENT

Индекс блока преаллокации

Тип: uintptr_t


# ::stappler::memory::rbtree::NodeBase::Flag::size

## BRIEF

Размер блока преаллокации

## CONTENT

Размер блока преаллокации

Тип: uintptr_t


# ::stappler::memory::rbtree::NodeBase::parent

## BRIEF

Родительский элемент

## CONTENT

Родительский элемент

Тип: stappler::memory::rbtree::NodeBase*


# ::stappler::memory::rbtree::NodeBase::left

## BRIEF

Левый элемент

## CONTENT

Левый элемент

Тип: stappler::memory::rbtree::NodeBase*


# ::stappler::memory::rbtree::NodeBase::right

## BRIEF

Правый элемент

## CONTENT

Правый элемент

Тип: stappler::memory::rbtree::NodeBase*


# ::stappler::memory::rbtree::NodeBase::flag

## BRIEF

Флаги элемента

## CONTENT

Флаги элемента

Тип: stappler::memory::rbtree::NodeBase::Flag


# ::stappler::memory::rbtree::NodeBase::NodeBase()

## BRIEF

Конструктор по умолчанию

## CONTENT

Конструктор по умолчанию


# ::stappler::memory::rbtree::NodeBase::NodeBase(stappler::memory::rbtree::NodeColor)

## BRIEF

Конструктор по цвету

## CONTENT

Параметры:
* stappler::memory::rbtree::NodeColor


# ::stappler::memory::rbtree::NodeBase::setColor(stappler::memory::rbtree::NodeColor)

## BRIEF

Устанавливает цвет элемента

## CONTENT

Устанавливает цвет элемента

Параметры:
* stappler::memory::rbtree::NodeColor


# ::stappler::memory::rbtree::NodeBase::getColor() const

## BRIEF

Возвращает цвет элемента

## CONTENT

Возвращает цвет элемента

Возвращает:
* stappler::memory::rbtree::NodeColor

# ::stappler::memory::rbtree::NodeBase::setPrealloc(bool)

## BRIEF

Устанавливает флаг преаллокации

## CONTENT

Устанавливает флаг преаллокации

Параметры:
* bool


# ::stappler::memory::rbtree::NodeBase::isPrealloc() const

## BRIEF

Возвращает флаг преаллокации

## CONTENT

Возвращает флаг преаллокации

Возвращает:
* bool

# ::stappler::memory::rbtree::NodeBase::setSize(uintptr_t)

## BRIEF

Устанавливает размер преаллоцированного блока

## CONTENT

Устанавливает размер преаллоцированного блока

Параметры:
* uintptr_t


# ::stappler::memory::rbtree::NodeBase::getSize() const

## BRIEF

Возвращает размер преаллоцированного блока

## CONTENT

Возвращает размер преаллоцированного блока

Возвращает:
* uintptr_t

# ::stappler::memory::rbtree::NodeBase::setIndex(uintptr_t)

## BRIEF

Устанавливает индекс преаллоцированного блока

## CONTENT

Устанавливает индекс преаллоцированного блока

Параметры:
* uintptr_t


# ::stappler::memory::rbtree::NodeBase::getIndex() const

## BRIEF

Возвращает индекс преаллоцированного блока

## CONTENT

Возвращает индекс преаллоцированного блока

Возвращает:
* uintptr_t

# ::stappler::memory::rbtree::NodeBase::min(stappler::memory::rbtree::NodeBase*)

## BRIEF

Возвращает минимальный следующий элемент

## CONTENT

Возвращает минимальный следующий элемент

Параметры:
* stappler::memory::rbtree::NodeBase*

Возвращает:
* stappler::memory::rbtree::NodeBase*

# ::stappler::memory::rbtree::NodeBase::min(stappler::memory::rbtree::NodeBase const*)

## BRIEF

Возвращает минимальный следующий элемент

## CONTENT

Возвращает минимальный следующий элемент

Параметры:
* stappler::memory::rbtree::NodeBase const*

Возвращает:
* stappler::memory::rbtree::NodeBase const*

# ::stappler::memory::rbtree::NodeBase::max(stappler::memory::rbtree::NodeBase*)

## BRIEF

Возвращает максимальный следующий элемент

## CONTENT

Возвращает максимальный следующий элемент

Параметры:
* stappler::memory::rbtree::NodeBase*

Возвращает:
* stappler::memory::rbtree::NodeBase*

# ::stappler::memory::rbtree::NodeBase::max(stappler::memory::rbtree::NodeBase const*)

## BRIEF

Возвращает максимальный следующий элемент

## CONTENT

Возвращает максимальный следующий элемент

Параметры:
* stappler::memory::rbtree::NodeBase const*

Возвращает:
* stappler::memory::rbtree::NodeBase const*

# ::stappler::memory::rbtree::NodeBase::increment(stappler::memory::rbtree::NodeBase*)

## BRIEF

Возвращает следующий элемент в дереве

## CONTENT

Возвращает следующий элемент в дереве

Параметры:
* stappler::memory::rbtree::NodeBase*

Возвращает:
* stappler::memory::rbtree::NodeBase*

# ::stappler::memory::rbtree::NodeBase::increment(stappler::memory::rbtree::NodeBase const*)

## BRIEF

Возвращает следующий элемент в дереве

## CONTENT

Возвращает следующий элемент в дереве

Параметры:
* stappler::memory::rbtree::NodeBase const*

Возвращает:
* stappler::memory::rbtree::NodeBase const*

# ::stappler::memory::rbtree::NodeBase::decrement(stappler::memory::rbtree::NodeBase*)

## BRIEF

Возвращает предыдущий элемент в дереве

## CONTENT

Возвращает предыдущий элемент в дереве

Параметры:
* stappler::memory::rbtree::NodeBase*

Возвращает:
* stappler::memory::rbtree::NodeBase*

# ::stappler::memory::rbtree::NodeBase::decrement(stappler::memory::rbtree::NodeBase const*)

## BRIEF

Возвращает предыдущий элемент в дереве

## CONTENT

Возвращает предыдущий элемент в дереве

Параметры:
* stappler::memory::rbtree::NodeBase const*

Возвращает:
* stappler::memory::rbtree::NodeBase const*

# ::stappler::memory::rbtree::NodeBase::replace(stappler::memory::rbtree::NodeBase*,stappler::memory::rbtree::NodeBase*)

## BRIEF

Заменяет элемент на его позиции в дереве

## CONTENT

Заменяет элемент на его позиции в дереве

Параметры:
* stappler::memory::rbtree::NodeBase* - старый элемент
* stappler::memory::rbtree::NodeBase* - новый элемент

Возвращает:
* stappler::memory::rbtree::NodeBase*

# ::stappler::memory::rbtree::NodeBase::insert(stappler::memory::rbtree::NodeBase*,stappler::memory::rbtree::NodeBase*)

## BRIEF

Добавляет элемент в дерево

## CONTENT

Добавляет элемент в дерево

Параметры:
* stappler::memory::rbtree::NodeBase*
* stappler::memory::rbtree::NodeBase*


# ::stappler::memory::rbtree::NodeBase::remove(stappler::memory::rbtree::NodeBase*,stappler::memory::rbtree::NodeBase*)

## BRIEF

Удаляет элемент из дерева

## CONTENT

Удаляет элемент из дерева

Параметры:
* stappler::memory::rbtree::NodeBase*
* stappler::memory::rbtree::NodeBase*


# ::stappler::memory::rbtree::Node<typename>

## BRIEF

Тип конкретного элемента в дереве

## CONTENT

Тип конкретного элемента в дереве

Параметры шаблона:
* typename Value - тип хранимого значения

Базовые классы:
* NodeBase


# ::stappler::memory::rbtree::Node<typename>::value

## BRIEF

Хранимое значение

## CONTENT

Хранимое значение

Тип: Storage<Value>


# ::stappler::memory::rbtree::Node<typename>::cast(stappler::memory::rbtree::NodeBase*)

## BRIEF

Возвращает указатель на значение в элементе

## CONTENT

Возвращает указатель на значение в элементе

Параметры:
* stappler::memory::rbtree::NodeBase*

Возвращает:
* Value*

# ::stappler::memory::rbtree::Node<typename>::cast(stappler::memory::rbtree::NodeBase const*)

## BRIEF

Возвращает указатель на значение в элементе

## CONTENT

Возвращает указатель на значение в элементе

Параметры:
* stappler::memory::rbtree::NodeBase const*

Возвращает:
* Value const*

# ::stappler::memory::rbtree::TreeIterator<typename>

## BRIEF

Итератор дерева

## CONTENT

Итератор дерева

Параметры шаблона:
* typename Value - тип хранимого значения


# ::stappler::memory::rbtree::TreeIterator<typename>::iterator_category

## BRIEF

Категория итератора для стандартной библиотеки

## CONTENT

Категория итератора для стандартной библиотеки


# ::stappler::memory::rbtree::TreeIterator<typename>::node_type

## BRIEF

Тип элемента итератора

## CONTENT

Тип элемента итератора


# ::stappler::memory::rbtree::TreeIterator<typename>::value_type

## BRIEF

Тип значения итератора

## CONTENT

Тип значения итератора


# ::stappler::memory::rbtree::TreeIterator<typename>::reference

## BRIEF

Тип ссылки на значение

## CONTENT

Тип ссылки на значение


# ::stappler::memory::rbtree::TreeIterator<typename>::pointer

## BRIEF

Тип указателя на значение

## CONTENT

Тип указателя на значение



# ::stappler::memory::rbtree::TreeIterator<typename>::difference_type

## BRIEF

Тип разницы размеров

## CONTENT

Тип разницы размеров


# ::stappler::memory::rbtree::TreeIterator<typename>::self

## BRIEF

Тип себя

## CONTENT

Тип себя


# ::stappler::memory::rbtree::TreeIterator<typename>::node_ptr

## BRIEF

Тип указателя на элемент

## CONTENT

Тип указателя на элемент


# ::stappler::memory::rbtree::TreeIterator<typename>::link_ptr

## BRIEF

Тип указателя на ссылку

## CONTENT

Тип указателя на ссылку


# ::stappler::memory::rbtree::TreeIterator<typename>::TreeIterator()

## BRIEF

Конструктор по умолчанию

## CONTENT

Конструктор по умолчанию


# ::stappler::memory::rbtree::TreeIterator<typename>::TreeIterator(stappler::memory::rbtree::TreeIterator::node_ptr)

## BRIEF

Конструктор из указателя на элемент

## CONTENT

Конструктор из указателя на элемент

Параметры:
* stappler::memory::rbtree::TreeIterator::node_ptr


# ::stappler::memory::rbtree::TreeIterator<typename>::operator*() const

## BRIEF

Разыменование итератора

## CONTENT

Разыменование итератора

Возвращает:
* reference

# ::stappler::memory::rbtree::TreeIterator<typename>::operator->() const

## BRIEF

Разыменование итератора

## CONTENT

Разыменование итератора

Возвращает:
* pointer

# ::stappler::memory::rbtree::TreeIterator<typename>::operator++()

## BRIEF

Переходит к следующему элементу

## CONTENT

Переходит к следующему элементу

Возвращает:
* self&

# ::stappler::memory::rbtree::TreeIterator<typename>::operator++(int)

## BRIEF

Переходит к следующему элементу постфиксно

## CONTENT

Переходит к следующему элементу постфиксно

Параметры:
* int

Возвращает:
* self

# ::stappler::memory::rbtree::TreeIterator<typename>::operator--()

## BRIEF

Переходит к предыдущему элементу

## CONTENT

Переходит к предыдущему элементу

Возвращает:
* self&

# ::stappler::memory::rbtree::TreeIterator<typename>::operator--(int)

## BRIEF

Переходит к предыдущему элементу постфиксно

## CONTENT

Переходит к предыдущему элементу постфиксно

Параметры:
* int

Возвращает:
* self

# ::stappler::memory::rbtree::TreeIterator<typename>::operator==(stappler::memory::rbtree::TreeIterator::self const&) const

## BRIEF

Сравнивает итераторы

## CONTENT

Сравнивает итераторы

Параметры:
* stappler::memory::rbtree::TreeIterator::self const&

Возвращает:
* bool

# ::stappler::memory::rbtree::TreeIterator<typename>::operator!=(stappler::memory::rbtree::TreeIterator::self const&) const

## BRIEF

Сравнивает итераторы

## CONTENT

Сравнивает итераторы

Параметры:
* stappler::memory::rbtree::TreeIterator::self const&

Возвращает:
* bool

# ::stappler::memory::rbtree::TreeIterator<typename>::_node

## BRIEF

Указатель на элемент в дереве

## CONTENT

Указатель на элемент в дереве

Тип: node_ptr


# ::stappler::memory::rbtree::TreeConstIterator<typename>

## BRIEF

Тип постоянного итератора дерева

## CONTENT

Тип постоянного итератора дерева

Параметры шаблона:
* typename Value - тип значения дерева


# ::stappler::memory::rbtree::TreeConstIterator<typename>::iterator_category

## BRIEF

Категория итератора для стандартной библиотеки

## CONTENT

Категория итератора для стандартной библиотеки


# ::stappler::memory::rbtree::TreeConstIterator<typename>::node_type

## BRIEF

Тип элемента дерева

## CONTENT

Тип элемента дерева


# ::stappler::memory::rbtree::TreeConstIterator<typename>::value_type

## BRIEF

Тип значения дерева

## CONTENT

Тип значения дерева


# ::stappler::memory::rbtree::TreeConstIterator<typename>::reference

## BRIEF

Тип ссылки на значение

## CONTENT

Тип ссылки на значение


# ::stappler::memory::rbtree::TreeConstIterator<typename>::pointer

## BRIEF

Тип указателя на значение

## CONTENT

Тип указателя на значение


# ::stappler::memory::rbtree::TreeConstIterator<typename>::iterator

## BRIEF

Тип стандартного итератора

## CONTENT

Тип стандартного итератора


# ::stappler::memory::rbtree::TreeConstIterator<typename>::difference_type

## BRIEF

Тип разницы размеров

## CONTENT

Тип разницы размеров


# ::stappler::memory::rbtree::TreeConstIterator<typename>::self

## BRIEF

Тип себя

## CONTENT

Тип себя


# ::stappler::memory::rbtree::TreeConstIterator<typename>::node_ptr

## BRIEF

Тип указателя на элемент

## CONTENT

Тип указателя на элемент


# ::stappler::memory::rbtree::TreeConstIterator<typename>::link_ptr

## BRIEF

Тип указателя на ссылку

## CONTENT

Тип указателя на ссылку


# ::stappler::memory::rbtree::TreeConstIterator<typename>::TreeConstIterator()

## BRIEF

Конструктор по умолчанию

## CONTENT

Конструктор по умолчанию


# ::stappler::memory::rbtree::TreeConstIterator<typename>::TreeConstIterator(stappler::memory::rbtree::TreeConstIterator::node_ptr)

## BRIEF

Конструктор из указателя на элемент дерева

## CONTENT

Конструктор из указателя на элемент дерева

Параметры:
* stappler::memory::rbtree::TreeConstIterator::node_ptr


# ::stappler::memory::rbtree::TreeConstIterator<typename>::TreeConstIterator(stappler::memory::rbtree::TreeConstIterator::iterator const&)

## BRIEF

Конструктор из стандартного итератора

## CONTENT

Конструктор из стандартного итератора

Параметры:
* stappler::memory::rbtree::TreeConstIterator::iterator const&


# ::stappler::memory::rbtree::TreeConstIterator<typename>::constcast() const

## BRIEF

Создаёт стандартный итератор из постоянного

## CONTENT

Создаёт стандартный итератор из постоянного

Возвращает:
* iterator

# ::stappler::memory::rbtree::TreeConstIterator<typename>::operator*() const

## BRIEF

Разыменовывает итератор

## CONTENT

Разыменовывает итератор

Возвращает:
* reference

# ::stappler::memory::rbtree::TreeConstIterator<typename>::operator->() const

## BRIEF

Разыменовывает итератор

## CONTENT

Разыменовывает итератор

Возвращает:
* pointer

# ::stappler::memory::rbtree::TreeConstIterator<typename>::operator++()

## BRIEF

Переходит к следующему элементу

## CONTENT

Переходит к следующему элементу

Возвращает:
* self&

# ::stappler::memory::rbtree::TreeConstIterator<typename>::operator++(int)

## BRIEF

Переходит к следующему элементу постфиксно

## CONTENT

Переходит к следующему элементу постфиксно

Параметры:
* int

Возвращает:
* self

# ::stappler::memory::rbtree::TreeConstIterator<typename>::operator--()

## BRIEF

Переходит к предыдущему элементу

## CONTENT

Переходит к предыдущему элементу

Возвращает:
* self&

# ::stappler::memory::rbtree::TreeConstIterator<typename>::operator--(int)

## BRIEF

Переходит к предыдущему элементу постфиксно

## CONTENT

Переходит к предыдущему элементу постфиксно

Параметры:
* int

Возвращает:
* self

# ::stappler::memory::rbtree::TreeConstIterator<typename>::operator==(stappler::memory::rbtree::TreeConstIterator::self const&) const

## BRIEF

Сравнивает итераторы

## CONTENT

Сравнивает итераторы

Параметры:
* stappler::memory::rbtree::TreeConstIterator::self const&

Возвращает:
* bool

# ::stappler::memory::rbtree::TreeConstIterator<typename>::operator!=(stappler::memory::rbtree::TreeConstIterator::self const&) const

## BRIEF

Сравнивает итераторы

## CONTENT

Сравнивает итераторы

Параметры:
* stappler::memory::rbtree::TreeConstIterator::self const&

Возвращает:
* bool

# ::stappler::memory::rbtree::TreeConstIterator<typename>::_node

## BRIEF

Указатель на элемент дерева

## CONTENT

Указатель на элемент дерева

Тип: node_ptr


# ::stappler::memory::rbtree::operator==<typename>(TreeIterator<Value> const&,TreeConstIterator<Value> const&)

## BRIEF

Сравнивает итераторы

## CONTENT

Сравнивает итераторы

Параметры шаблона:
* typename Value

Параметры:
* TreeIterator<Value> const&
* TreeConstIterator<Value> const&

Возвращает:
* bool

# ::stappler::memory::rbtree::operator!=<typename>(TreeIterator<Value> const&,TreeConstIterator<Value> const&)

## BRIEF

Сравнивает итераторы

## CONTENT

Сравнивает итераторы

Параметры шаблона:
* typename Value

Параметры:
* TreeIterator<Value> const&
* TreeConstIterator<Value> const&

Возвращает:
* bool

# ::stappler::memory::rbtree::TreeKeyExtractor<Key,Key>::TreeKeyExtractor<Key,Key>

## BRIEF

Интерфейс извлечения ключа из одиночного типа

## CONTENT

Интерфейс извлечения ключа из одиночного типа

Параметры шаблона:
* typename Key


# ::stappler::memory::rbtree::TreeKeyExtractor<Key,Key>::extract(Key const&)

## BRIEF

Извлекает ключ из хранимого значения

## CONTENT

Извлекает ключ из хранимого значения

Параметры:
* Key const&

Возвращает:
* Key const&

# ::stappler::memory::rbtree::TreeKeyExtractor<Key,Key>::construct<typename,typename>(A&,Node<Key>*,Key const&,Args &&...)

## BRIEF

Конструирует элемент из ключа и аргументов значения

## CONTENT

Конструирует элемент из ключа и аргументов значения

Параметры шаблона:
* typename A - тип аллокатора
* typename Args - тип аргументов

Параметры:
* A& - аллокатор
* Node<Key>* - целевой элемент
* Key const& - ключ
* Args &&... - аргументы для конструирования значения


# ::stappler::memory::rbtree::TreeKeyExtractor<Key,Key>::construct<typename,typename>(A&,Node<Key>*,Key&&,Args &&...)

## BRIEF

Конструирует элемент из ключа и аргументов значения

## CONTENT

Конструирует элемент из ключа и аргументов значения

Параметры шаблона:
* typename A - тип аллокатора
* typename Args - тип аргументов

Параметры:
* A& - аллокатор
* Node<Key>* - целевой элемент
* Key&& - ключ
* Args &&... - аргументы для конструирования значения


# ::stappler::memory::rbtree::TreeKeyExtractor<Key,Pair<Key,Value>>::TreeKeyExtractor<Key,Pair<Key,Value>>

## BRIEF

Интерфейс извлечения ключа из пары типов

## CONTENT

Параметры шаблона:
* typename Key - тип ключа в паре
* typename Value - тип значения в паре


# ::stappler::memory::rbtree::TreeKeyExtractor<Key,Pair<Key,Value>>::extract(Pair<Key, Value> const&)

## BRIEF

Извлекает ключ из пары значений

## CONTENT

Извлекает ключ из пары значений

Параметры:
* Pair<Key, Value> const&

Возвращает:
* Key const&

# ::stappler::memory::rbtree::TreeKeyExtractor<Key,Pair<Key,Value>>::construct<typename,typename>(A&,Node<Pair<Key, Value>>*,Key const&,Args &&...)

## BRIEF

Конструирует элемент из ключа и аргументов значения

## CONTENT

Конструирует элемент из ключа и аргументов значения

Параметры шаблона:
* typename A - тип аллокатора
* typename Args

Параметры:
* A& - аллокатор
* Node<Pair<Key, Value>>* - целевой элемент
* Key const& - ключ
* Args &&... - аргументы для конструирования значения


# ::stappler::memory::rbtree::TreeKeyExtractor<Key,Pair<Key,Value>>::construct<typename,typename>(A&,Node<Pair<Key, Value>>*,Key&&,Args &&...)

## BRIEF

Конструирует элемент из ключа и аргументов значения

## CONTENT

Конструирует элемент из ключа и аргументов значения

Параметры шаблона:
* typename A - тип аллокатора
* typename Args

Параметры:
* A& - аллокатор
* Node<Pair<Key, Value>>* - целевой элемент
* Key&& - ключ
* Args &&... - аргументы для конструирования значения


# ::stappler::memory::rbtree::TreeKeyExtractor<Key,Pair<const Key,Value>>::TreeKeyExtractor<Key,Pair<const Key,Value>>

## BRIEF

Интерфейс извлечения ключа из пары типов

## CONTENT

Параметры шаблона:
* typename Key - тип ключа в паре
* typename Value - тип значения в паре


# ::stappler::memory::rbtree::TreeKeyExtractor<Key,Pair<const Key,Value>>::extract(Pair<const Key, Value> const&)

## BRIEF

Извлекает ключ из пары значений

## CONTENT

Извлекает ключ из пары значений

Параметры:
* Pair<const Key, Value> const&

Возвращает:
* Key const&


# ::stappler::memory::rbtree::TreeKeyExtractor<Key,Pair<const Key,Value>>::construct<typename,typename>(A&,Node<Pair<const Key, Value>>*,Key const&,Args &&...)

## BRIEF

Конструирует элемент из ключа и аргументов значения

## CONTENT

Конструирует элемент из ключа и аргументов значения

Параметры шаблона:
* typename A - тип аллокатора
* typename Args

Параметры:
* A& - аллокатор
* Node<Pair<const Key, Value>>* - целевой элемент
* Key const& - ключ
* Args &&... - аргументы для конструирования значения


# ::stappler::memory::rbtree::TreeKeyExtractor<Key,Pair<const Key,Value>>::construct<typename,typename>(A&,Node<Pair<const Key, Value>>*,Key&&,Args &&...)

## BRIEF

Конструирует элемент из ключа и аргументов значения

## CONTENT

Конструирует элемент из ключа и аргументов значения

Параметры шаблона:
* typename A - тип аллокатора
* typename Args

Параметры:
* A& - аллокатор
* Node<Pair<const Key, Value>>* - целевой элемент
* Key&& - ключ
* Args &&... - аргументы для конструирования значения


# ::stappler::memory::rbtree::TreeComparator<typename,typename,typename>

## BRIEF

Интерфейс сравнения ключей значений

## CONTENT

Интерфейс сравнения ключей значений

Параметры шаблона:
* typename Key - тип ключа
* typename Comp - тип функтора сравнения
* typename Transparent - флаговый параметр прозрачного сравнения


# ::stappler::memory::rbtree::TreeComparator<typename,typename,typename>::compare(Key const&,Key const&,Comp const&)

## BRIEF

Сравнивает ключи

## CONTENT

Сравнивает ключи

Параметры:
* Key const&
* Key const&
* Comp const&

Возвращает:
* bool

# ::stappler::memory::rbtree::TreeComparator<typename,typename,typename>::compare<typename,typename>(A const&,B const&,Comp const&,typename Comp::is_transparent*)

## BRIEF

Сравнивает ключи

## CONTENT

Сравнивает ключи

Параметры шаблона:
* typename A
* typename B

Параметры:
* A const&
* B const&
* Comp const&
* typename Comp::is_transparent*

Возвращает:
* bool

# ::stappler::memory::rbtree::TreeComparator<Key,Comp,typename Comp::is_transparent>::TreeComparator<Key,Comp,typename Comp::is_transparent>

## BRIEF

Интерфейс сравнения ключей значений

## CONTENT

Интерфейс сравнения ключей значений

Параметры шаблона:
* typename Key
* typename Comp


# ::stappler::memory::rbtree::TreeComparator<Key,Comp,typename Comp::is_transparent>::compare<typename,typename>(A const&,B const&,Comp const&)

## BRIEF

Сравнивает ключи

## CONTENT

Сравнивает ключи

Параметры шаблона:
* typename A
* typename B

Параметры:
* A const&
* B const&
* Comp const&

Возвращает:
* bool

# ::stappler::memory::rbtree::Tree<typename,typename,typename>

## BRIEF

Структура красно-чёрного дерева

## CONTENT

Структура красно-чёрного дерева

Параметры шаблона:
* typename Key - тип ключа
* typename Value - тип значения
* typename Comp - тип функтора сравнения

Базовые классы:
* AllocPool


# ::stappler::memory::rbtree::Tree<typename,typename,typename>::value_type

## BRIEF

Тип значения

## CONTENT

Доступ: public

Тип значения


# ::stappler::memory::rbtree::Tree<typename,typename,typename>::node_type

## BRIEF

Тип элеммента

## CONTENT

Доступ: public

Тип элеммента


# ::stappler::memory::rbtree::Tree<typename,typename,typename>::node_ptr

## BRIEF

Тип указателя на элемент

## CONTENT

Доступ: public

Тип указателя на элемент


# ::stappler::memory::rbtree::Tree<typename,typename,typename>::base_type

## BRIEF

Тип базового элемента

## CONTENT

Тип базового элемента

Доступ: public


# ::stappler::memory::rbtree::Tree<typename,typename,typename>::const_node_ptr

## BRIEF

Тип постоянного базового элемента

## CONTENT

Доступ: public

Тип постоянного базового элемента



# ::stappler::memory::rbtree::Tree<typename,typename,typename>::node_allocator_type

## BRIEF

Тип аллокатора элемента

## CONTENT

Доступ: public

Тип аллокатора элемента


# ::stappler::memory::rbtree::Tree<typename,typename,typename>::value_allocator_type

## BRIEF

Тип аллокатора значения

## CONTENT

Доступ: public

Тип аллокатора значения


# ::stappler::memory::rbtree::Tree<typename,typename,typename>::comparator_type

## BRIEF

Тип функтора сравнения

## CONTENT

Доступ: public

Тип функтора сравнения


# ::stappler::memory::rbtree::Tree<typename,typename,typename>::iterator

## BRIEF

Тип итератора

## CONTENT

Доступ: public

Тип итератора


# ::stappler::memory::rbtree::Tree<typename,typename,typename>::const_iterator

## BRIEF

Тип постоянного итератора

## CONTENT

Доступ: public

Тип постоянного итератора


# ::stappler::memory::rbtree::Tree<typename,typename,typename>::reverse_iterator

## BRIEF

Тип обратного итератора

## CONTENT

Доступ: public

Тип обратного итератора


# ::stappler::memory::rbtree::Tree<typename,typename,typename>::const_reverse_iterator

## BRIEF

Тип постоянного обратного итератора

## CONTENT

Доступ: public

Тип постоянного обратного итератора


# ::stappler::memory::rbtree::Tree<typename,typename,typename>::Tree(Comp const&,stappler::memory::rbtree::Tree::value_allocator_type const&)

## BRIEF

Конструктор дерева

## CONTENT

Доступ: public

Конструктор дерева

Параметры:
* Comp const& - функтор сравнения значений
* stappler::memory::rbtree::Tree::value_allocator_type const& - аллокатор


# ::stappler::memory::rbtree::Tree<typename,typename,typename>::Tree(const Tree<Key, Value, Comp>&,stappler::memory::rbtree::Tree::value_allocator_type const&)

## BRIEF

Конструктор копирования дерева

## CONTENT

Доступ: public

Конструктор копирования дерева

Параметры:
* const Tree<Key, Value, Comp>&
* stappler::memory::rbtree::Tree::value_allocator_type const&


# ::stappler::memory::rbtree::Tree<typename,typename,typename>::Tree(Tree<Key, Value, Comp>&&,stappler::memory::rbtree::Tree::value_allocator_type const&)

## BRIEF

Конструктор перемещения дерева

## CONTENT

Доступ: public

Конструктор перемещения дерева. Перемещение возможно, если алокаторы совпадают, в противном случае элементы копируются

Параметры:
* Tree<Key, Value, Comp>&&
* stappler::memory::rbtree::Tree::value_allocator_type const&


# ::stappler::memory::rbtree::Tree<typename,typename,typename>::operator=(const Tree<Key, Value, Comp>&)

## BRIEF

Оператор копирования

## CONTENT

Доступ: public

Оператор копирования

Параметры:
* const Tree<Key, Value, Comp>&

Возвращает:
* Tree<Key, Value, Comp>&

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::operator=(Tree<Key, Value, Comp>&&)

## BRIEF

Оператор перемещения

## CONTENT

Доступ: public

Оператор перемещения. Перемещение возможно, если алокаторы совпадают, в противном случае элементы копируются

Параметры:
* Tree<Key, Value, Comp>&&

Возвращает:
* Tree<Key, Value, Comp>&

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::~Tree()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор


# ::stappler::memory::rbtree::Tree<typename,typename,typename>::get_allocator() const

## BRIEF

Возвращает аллокатор

## CONTENT

Доступ: public

Возвращает аллокатор

Возвращает:
* value_allocator_type&

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::emplace<typename>(Args &&...)

## BRIEF

Добавляет элемент в дерево

## CONTENT

Доступ: public

Добавляет элемент в дерево. Если элемент с таким ключом уже есть - не делает ничего.

Параметры шаблона:
* typename Args

Параметры:
* Args &&... - аргументы для конструирования элемента

Возвращает:
* Pair<stappler::memory::rbtree::Tree::iterator, bool> - итератор на месте вставки или существующего элемента, true если элемент был добавлен

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::emplace_hint<typename>(stappler::memory::rbtree::Tree::const_iterator,Args &&...)

## BRIEF

Добавляет элемент с вспомогательным итератором

## CONTENT

Доступ: public

Добавляет элемент с вспомогательным итератором. Если элемент с таким ключом уже есть - не делает ничего.

Параметры шаблона:
* typename Args

Параметры:
* stappler::memory::rbtree::Tree::const_iterator - вспомогательный итератор на месте вставки
* Args &&... - аргументы для конструирования элемента

Возвращает:
* iterator - итератор на месте вставки или существующего элемента

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::try_emplace<typename,typename>(K&&,Args &&...)

## BRIEF

Пытается добавить элемент в дерево

## CONTENT

Доступ: public

Пытается добавить элемент в дерево. Если элемент с таким ключом уже есть - не делает ничего

Параметры шаблона:
* typename K - тип ключа
* typename Args

Параметры:
* K&& - ключ
* Args &&... - аргументы для конструирования значения

Возвращает:
* Pair<stappler::memory::rbtree::Tree::iterator, bool> - итератор на месте вставки или существующего элемента, true если элемент был добавлен

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::try_emplace<typename,typename>(stappler::memory::rbtree::Tree::const_iterator,K&&,Args &&...)

## BRIEF

Пытается добавить элемент в дерево со вспомогательным итератором

## CONTENT

Доступ: public

Пытается добавить элемент в дерево со вспомогательным итератором. Если элемент с таким ключом уже есть - не делает ничего

Параметры шаблона:
* typename K - тип ключа
* typename Args

Параметры:
* stappler::memory::rbtree::Tree::const_iterator - вспомогательный итератор на месте вставки
* K&& - ключ
* Args &&... - аргументы для конструирования значения

Возвращает:
* iterator - итератор на месте вставки или существующего элемента

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::insert_or_assign<typename,class>(K&&,M&&)

## BRIEF

Добавляет или назначает новое значение элементу

## CONTENT

Доступ: public

Добавляет или назначает новое значение элементу

Параметры шаблона:
* typename K - тип ключа
* class M - тип значения

Параметры:
* K&& - ключ
* M&& - значение

Возвращает:
* Pair<stappler::memory::rbtree::Tree::iterator, bool> - итератор на месте вставки или существующего элемента, true если элемент был добавлен

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::insert_or_assign<typename,class>(stappler::memory::rbtree::Tree::const_iterator,K&&,M&&)

## BRIEF

Добавляет или назначает новое значение элементу. Использует вспомогательный итератор.

## CONTENT

Доступ: public

Добавляет или назначает новое значение элементу. Использует вспомогательный итератор.

Параметры шаблона:
* typename K - тип ключа
* class M - тип значения

Параметры:
* stappler::memory::rbtree::Tree::const_iterator - вспомогательный итератор на месте вставки
* K&& - ключ
* M&& - значение

Возвращает:
* iterator - итератор на месте вставки или существующего элемента

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::erase(stappler::memory::rbtree::Tree::const_iterator)

## BRIEF

Удаляет элемент по итератору

## CONTENT

Доступ: public

Удаляет элемент по итератору

Параметры:
* stappler::memory::rbtree::Tree::const_iterator

Возвращает:
* iterator - итератор на месте удаления

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::erase(stappler::memory::rbtree::Tree::const_iterator,stappler::memory::rbtree::Tree::const_iterator)

## BRIEF

Удаляет элемент по диапазону итераторов

## CONTENT

Доступ: public

Удаляет элемент по диапазону итераторов

Параметры:
* stappler::memory::rbtree::Tree::const_iterator
* stappler::memory::rbtree::Tree::const_iterator

Возвращает:
* iterator - итератор на месте удаления

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::erase_unique(Key const&)

## BRIEF

Удаляет уникальное значение по ключу

## CONTENT

Доступ: public

Удаляет уникальное значение по ключу

Параметры:
* Key const& - ключ

Возвращает:
* size_t - число удалённых элементов

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::begin()

## BRIEF

Возвращает начальный итератор

## CONTENT

Доступ: public

Возвращает начальный итератор

Возвращает:
* iterator

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::end()

## BRIEF

Возвращает конечный итератор

## CONTENT

Доступ: public

Возвращает конечный итератор

Возвращает:
* iterator

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::begin() const

## BRIEF

Возвращает начальный итератор

## CONTENT

Доступ: public

Возвращает начальный итератор

Возвращает:
* const_iterator

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::end() const

## BRIEF

Возвращает конечный итератор

## CONTENT

Доступ: public

Возвращает конечный итератор

Возвращает:
* const_iterator

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::rbegin()

## BRIEF

Возвращает начальный обратный итератор

## CONTENT

Доступ: public

Возвращает начальный обратный итератор

Возвращает:
* reverse_iterator

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::rend()

## BRIEF

Возвращает конечный обратный итератор

## CONTENT

Доступ: public

Возвращает конечный обратный итератор

Возвращает:
* reverse_iterator

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::rbegin() const

## BRIEF

Возвращает начальный обратный итератор

## CONTENT

Доступ: public

Возвращает начальный обратный итератор

Возвращает:
* const_reverse_iterator

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::rend() const

## BRIEF

Возвращает конечный обратный итератор

## CONTENT

Доступ: public

Возвращает конечный обратный итератор

Возвращает:
* const_reverse_iterator

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::cbegin() const

## BRIEF

Возвращает начальный итератор

## CONTENT

Доступ: public

Возвращает начальный итератор

Возвращает:
* const_iterator

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::cend() const

## BRIEF

Возвращает конечный итератор

## CONTENT

Доступ: public

Возвращает конечный итератор

Возвращает:
* const_iterator

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::crbegin() const

## BRIEF

Возвращает начальный обратный итератор

## CONTENT

Доступ: public

Возвращает начальный обратный итератор

Возвращает:
* const_reverse_iterator

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::crend() const

## BRIEF

Возвращает конечный обратный итератор

## CONTENT

Доступ: public

Возвращает конечный обратный итератор

Возвращает:
* const_reverse_iterator

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::clear()

## BRIEF

Очищает дерево

## CONTENT

Доступ: public

Очищает дерево


# ::stappler::memory::rbtree::Tree<typename,typename,typename>::shrink_to_fit()

## BRIEF

Удаляет невостребованные хранимые свободные элементы

## CONTENT

Доступ: public

Удаляет невостребованные хранимые свободные элементы


# ::stappler::memory::rbtree::Tree<typename,typename,typename>::capacity() const

## BRIEF

Возвращает текущую вместимость дерева

## CONTENT

Доступ: public

Возвращает текущую вместимость дерева

Возвращает:
* size_t

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::size() const

## BRIEF

Возвращает число активных элементов в дереве

## CONTENT

Доступ: public

Возвращает число активных элементов в дереве

Возвращает:
* size_t

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::empty() const

## BRIEF

Проверяет дерево на пустоту

## CONTENT

Доступ: public

Проверяет дерево на пустоту

Возвращает:
* bool - true если дерево пустое

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::set_memory_persistent(bool)

## BRIEF

Устанавливает флаг постоянного хранения элементов

## CONTENT

Доступ: public

Устанавливает флаг постоянного хранения элементов. Если флаг установлен, удаляемые элементы не возвращаются, а добавляются во внутренний связный список, откуда могут использоваться повторно.

Параметры:
* bool - значение флага


# ::stappler::memory::rbtree::Tree<typename,typename,typename>::memory_persistent() const

## BRIEF

Возвращает значение флага постоянной памяти

## CONTENT

Доступ: public

Возвращает значение флага постоянной памяти

Возвращает:
* bool

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::swap(Tree<Key, Value, Comp>&)

## BRIEF

Обменивает деревья значениями

## CONTENT

Доступ: public

Обменивает деревья значениями. Обмен эффективен, если аллокаторы совпадают.

Параметры:
* Tree<Key, Value, Comp>&


# ::stappler::memory::rbtree::Tree<typename,typename,typename>::find<class>(K const&)

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
* iterator

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::find<class>(K const&) const

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
* const_iterator

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::lower_bound<class>(K const&)

## BRIEF

Возвращает нижнюю границу значения по ключу

## CONTENT

Доступ: public

Возвращает нижнюю границу значения по ключу. То есть, указатель на первое значение не меньше ключа

Параметры шаблона:
* class K

Параметры:
* K const&

Возвращает:
* iterator

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::lower_bound<class>(K const&) const

## BRIEF

Возвращает нижнюю границу значения по ключу

## CONTENT

Доступ: public

Возвращает нижнюю границу значения по ключу. То есть, указатель на первое значение не меньше ключа

Параметры шаблона:
* class K

Параметры:
* K const&

Возвращает:
* const_iterator

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::upper_bound<class>(K const&)

## BRIEF

Возвращает верхнюю границу значения по ключу

## CONTENT

Доступ: public

Возвращает верхнюю границу значения по ключу. То есть, указатель на первое значение больше ключа

Параметры шаблона:
* class K

Параметры:
* K const&

Возвращает:
* iterator

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::upper_bound<class>(K const&) const

## BRIEF

Возвращает верхнюю границу значения по ключу

## CONTENT

Доступ: public

Возвращает верхнюю границу значения по ключу. То есть, указатель на первое значение больше ключа

Параметры шаблона:
* class K

Параметры:
* K const&

Возвращает:
* const_iterator

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::equal_range<class>(K const&)

## BRIEF

Возвращает диапазон значений по ключу

## CONTENT

Доступ: public

Возвращает диапазон значений по ключу

Параметры шаблона:
* class K

Параметры:
* K const&

Возвращает:
* Pair<stappler::memory::rbtree::Tree::iterator, stappler::memory::rbtree::Tree::iterator>

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::equal_range<class>(K const&) const

## BRIEF

Возвращает диапазон значений по ключу

## CONTENT

Доступ: public

Возвращает диапазон значений по ключу

Параметры шаблона:
* class K

Параметры:
* K const&

Возвращает:
* Pair<stappler::memory::rbtree::Tree::const_iterator, stappler::memory::rbtree::Tree::const_iterator>

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::count<class>(K const&) const

## BRIEF

Возвращает число элементов для ключа

## CONTENT

Доступ: public

Возвращает число элементов для ключа

Параметры шаблона:
* class K

Параметры:
* K const&

Возвращает:
* size_t

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::count_unique<class>(K const&) const

## BRIEF

Возвращает число элементов для ключа

## CONTENT

Доступ: public

Возвращает число элементов для ключа

Параметры шаблона:
* class K

Параметры:
* K const&

Возвращает:
* size_t

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::reserve(size_t)

## BRIEF

Резервирует память под элементы

## CONTENT

Доступ: public

Резервирует память под элементы. Дополнительная память резервируется и освобождается цельным блоком для оптимизации.

Параметры:
* size_t


# ::stappler::memory::rbtree::Tree<typename,typename,typename>::_header

## BRIEF

Заголовочный элемент дерева

## CONTENT

Доступ: protected

Заголовочный элемент дерева. Указатели имеют специальное значение.

`_header.parent` - ЛЕВЫЙ элемент корня дерева (первый элемент для обхода)

`_header.right` - Правый элемент корня дерева

`_header.left` - Корневой элемент, nullptr если дерево пусто

`&_header` (указатель на заголовок) - последний элемент обхода

`_header.size` - число свободных нолов в связанном списке

`_header.index` - число преаллоцированных блоков

`_header.prealloc` - флаг постоянной памяти

Тип: stappler::memory::rbtree::NodeBase


# ::stappler::memory::rbtree::Tree<typename,typename,typename>::_comp

## BRIEF

Функтор сравнения ключей элементов

## CONTENT

Доступ: protected

Функтор сравнения ключей элементов

Тип: comparator_type


# ::stappler::memory::rbtree::Tree<typename,typename,typename>::_allocator

## BRIEF

Аллокатор

## CONTENT

Доступ: protected

Аллокатор

Тип: value_allocator_type


# ::stappler::memory::rbtree::Tree<typename,typename,typename>::_size

## BRIEF

Текущий размер дерева

## CONTENT

Доступ: protected

Текущий размер дерева

Тип: size_t


# ::stappler::memory::rbtree::Tree<typename,typename,typename>::_tmp

## BRIEF

Связный список свободных элементов

## CONTENT

Доступ: protected

Связный список свободных элементов

Тип: Node<Value>*


# ::stappler::memory::rbtree::Tree<typename,typename,typename>::root()

## BRIEF

Возвращает корень дерева

## CONTENT

Доступ: protected

Возвращает корень дерева

Возвращает:
* node_ptr

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::root() const

## BRIEF

Возвращает корень дерева

## CONTENT

Доступ: protected

Возвращает корень дерева

Возвращает:
* const_node_ptr

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::setroot(stappler::memory::rbtree::Tree::base_type)

## BRIEF

Устанавливает корень дерева

## CONTENT

Доступ: protected

Устанавливает корень дерева

Параметры:
* stappler::memory::rbtree::Tree::base_type


# ::stappler::memory::rbtree::Tree<typename,typename,typename>::left()

## BRIEF

Возвращает левый элемент корня

## CONTENT

Доступ: protected

Возвращает левый элемент корня

Возвращает:
* node_ptr

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::left() const

## BRIEF

Возвращает левый элемент корня

## CONTENT

Доступ: protected

Возвращает левый элемент корня

Возвращает:
* const_node_ptr

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::setleft(stappler::memory::rbtree::Tree::base_type)

## BRIEF

Устанавливает левый элемент корня

## CONTENT

Доступ: protected

Устанавливает левый элемент корня

Параметры:
* stappler::memory::rbtree::Tree::base_type


# ::stappler::memory::rbtree::Tree<typename,typename,typename>::right()

## BRIEF

Возвращает правый элемент корня

## CONTENT

Доступ: protected

Возвращает правый элемент корня

Возвращает:
* node_ptr

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::right() const

## BRIEF

Возвращает правый элемент корня

## CONTENT

Доступ: protected

Возвращает правый элемент корня

Возвращает:
* const_node_ptr

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::setright(stappler::memory::rbtree::Tree::base_type)

## BRIEF

Устанавливает правый элемент корня

## CONTENT

Доступ: protected

Устанавливает правый элемент корня

Параметры:
* stappler::memory::rbtree::Tree::base_type


# ::stappler::memory::rbtree::Tree<typename,typename,typename>::extract(Value const&) const

## BRIEF

Извлекает ключ элемента

## CONTENT

Доступ: protected

Извлекает ключ элемента

Параметры:
* Value const&

Возвращает:
* Key const&

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::extract(Storage<Value> const&) const

## BRIEF

Извлекает ключ элемента

## CONTENT

Доступ: protected

Извлекает ключ элемента

Параметры:
* Storage<Value> const&

Возвращает:
* Key const&

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::extract(stappler::memory::rbtree::NodeBase const*) const

## BRIEF

Извлекает ключ элемента

## CONTENT

Доступ: protected

Извлекает ключ элемента

Параметры:
* stappler::memory::rbtree::NodeBase const*

Возвращает:
* Key const&

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::compareLtTransparent<typename,typename>(A const&,B const&) const

## BRIEF

Проверяет, что один ключ меньше другого

## CONTENT

Доступ: protected

Проверяет, что один ключ меньше другого

Параметры шаблона:
* typename A
* typename B

Параметры:
* A const&
* B const&

Возвращает:
* bool

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::compareLtKey(Key const&,Key const&) const

## BRIEF

Проверяет, что один ключ меньше другого

## CONTENT

Доступ: protected

Проверяет, что один ключ меньше другого

Параметры:
* Key const&
* Key const&

Возвращает:
* bool

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::compareEqKey(Key const&,Key const&) const

## BRIEF

Сравнивает два ключа на равенство

## CONTENT

Доступ: protected

Сравнивает два ключа на равенство

Параметры:
* Key const&
* Key const&

Возвращает:
* bool

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::compareEqValue(Value const&,Value const&) const

## BRIEF

Сравнивает два значения на равенство

## CONTENT

Доступ: protected

Сравнивает два значения на равенство

Параметры:
* Value const&
* Value const&

Возвращает:
* bool

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::compareLtValue(Value const&,Value const&) const

## BRIEF

Проверяет, что одно значение меньше другого

## CONTENT

Доступ: protected

Проверяет, что одно значение меньше другого

Параметры:
* Value const&
* Value const&

Возвращает:
* bool

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::InsertData

## BRIEF

Структура информации для вставки значения

## CONTENT

Доступ: protected

Структура информации для вставки значения


# ::stappler::memory::rbtree::Tree<typename,typename,typename>::InsertData::key

## BRIEF

Ключ

## CONTENT

Ключ

Тип: Key const*


# ::stappler::memory::rbtree::Tree<typename,typename,typename>::InsertData::val

## BRIEF

Элемент для вставки

## CONTENT

Элемент для вставки

Тип: Node<Value>*


# ::stappler::memory::rbtree::Tree<typename,typename,typename>::InsertData::current

## BRIEF

Текущий элеммент обхода

## CONTENT

Текущий элеммент обхода

Тип: stappler::memory::rbtree::NodeBase*


# ::stappler::memory::rbtree::Tree<typename,typename,typename>::InsertData::parent

## BRIEF

Корневой элемент обхода

## CONTENT

Корневой элемент обхода

Тип: stappler::memory::rbtree::NodeBase*


# ::stappler::memory::rbtree::Tree<typename,typename,typename>::InsertData::isLeft

## BRIEF

Флаг, если текущий элемент слева от родителя

## CONTENT

Флаг, если текущий элемент слева от родителя

Тип: bool


# ::stappler::memory::rbtree::Tree<typename,typename,typename>::constructNode<typename>(Args &&...)

## BRIEF

Конструирует новый элемент

## CONTENT

Доступ: protected

Конструирует новый элемент

Параметры шаблона:
* typename Args

Параметры:
* Args &&...

Возвращает:
* stappler::memory::rbtree::Tree::InsertData

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::constructKey(Key const&)

## BRIEF

Конструирует данные вставки на основе ключа

## CONTENT

Доступ: protected

Конструирует данные вставки на основе ключа

Параметры:
* Key const&

Возвращает:
* stappler::memory::rbtree::Tree::InsertData

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::constructKey(Key&&)

## BRIEF

Конструирует данные вставки на основе ключа

## CONTENT

Доступ: protected

Конструирует данные вставки на основе ключа

Параметры:
* Key&&

Возвращает:
* stappler::memory::rbtree::Tree::InsertData

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::constructEmplace<typename,typename>(K&&,Args &&...)

## BRIEF

Конструирует элемент на месте вставки

## CONTENT

Доступ: protected

Конструирует элемент на месте вставки

Параметры шаблона:
* typename K
* typename Args

Параметры:
* K&&
* Args &&...

Возвращает:
* Node<Value>*

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::constructAssign<typename>(Node<Value>*,M const&)

## BRIEF

Назначает элементу значение

## CONTENT

Доступ: protected

Назначает элементу значение

Параметры шаблона:
* typename M

Параметры:
* Node<Value>*
* M const&


# ::stappler::memory::rbtree::Tree<typename,typename,typename>::constructAssign<typename>(Node<Value>*,M&&)

## BRIEF

Назначает элементу значение

## CONTENT

Доступ: protected

Назначает элементу значение

Параметры шаблона:
* typename M

Параметры:
* Node<Value>*
* M&&


# ::stappler::memory::rbtree::Tree<typename,typename,typename>::getInsertPositionUnique_search(stappler::memory::rbtree::Tree::InsertData&)

## BRIEF

Ищет позицию для вставки элемента

## CONTENT

Доступ: protected

Ищет позицию для вставки элемента

Параметры:
* stappler::memory::rbtree::Tree::InsertData&

Возвращает:
* bool

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::getInsertPosition_tryRoot(stappler::memory::rbtree::Tree::InsertData&)

## BRIEF

Проверяет корень дерева на возможность быстрой вставки

## CONTENT

Доступ: protected

Проверяет корень дерева на возможность быстрой вставки

Параметры:
* stappler::memory::rbtree::Tree::InsertData&

Возвращает:
* bool

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::getInsertPositionUnique_tryHint(stappler::memory::rbtree::Tree::InsertData&)

## BRIEF

Проверяет вспомогательный итератор на возможность быстрой вставки

## CONTENT

Доступ: protected

Проверяет вспомогательный итератор на возможность быстрой вставки

Параметры:
* stappler::memory::rbtree::Tree::InsertData&

Возвращает:
* bool

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::getInsertPositionUnique_tryLeft(stappler::memory::rbtree::Tree::InsertData&)

## BRIEF

Проверяет левый элемент дерева на возможность быстрой вставки

## CONTENT

Доступ: protected

Проверяет левый элемент дерева на возможность быстрой вставки

Параметры:
* stappler::memory::rbtree::Tree::InsertData&

Возвращает:
* bool

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::getInsertPositionUnique_tryRight(stappler::memory::rbtree::Tree::InsertData&)

## BRIEF

Проверяет правый элемент дерева на возможность быстрой вставки

## CONTENT

Доступ: protected

Проверяет правый элемент дерева на возможность быстрой вставки

Параметры:
* stappler::memory::rbtree::Tree::InsertData&

Возвращает:
* bool

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::getInsertPositionUnique(stappler::memory::rbtree::Tree::InsertData&)

## BRIEF

Получает позицию для вставки элемента

## CONTENT

Доступ: protected

Получает позицию для вставки элемента

Параметры:
* stappler::memory::rbtree::Tree::InsertData&

Возвращает:
* bool

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::insertNodeUnique<typename>(Args &&...)

## BRIEF

Добавляет новый элемент

## CONTENT

Доступ: protected

Добавляет новый элемент

Параметры шаблона:
* typename Args

Параметры:
* Args &&...

Возвращает:
* Pair<Node<Value> *, bool>

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::insertNodeUniqueHint<typename>(stappler::memory::rbtree::Tree::const_iterator,Args &&...)

## BRIEF

Добавляет новый элемент со вспомогательным итератором

## CONTENT

Доступ: protected

Добавляет новый элемент со вспомогательным итератором

Параметры шаблона:
* typename Args

Параметры:
* stappler::memory::rbtree::Tree::const_iterator
* Args &&...

Возвращает:
* Node<Value>*

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::tryInsertNodeUnique<typename,typename>(K&&,Args &&...)

## BRIEF

Пытается добавить новый элемент

## CONTENT

Доступ: protected

Пытается добавить новый элемент

Параметры шаблона:
* typename K
* typename Args

Параметры:
* K&&
* Args &&...

Возвращает:
* Pair<Node<Value> *, bool>

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::tryInsertNodeUniqueHint<typename,typename>(stappler::memory::rbtree::Tree::const_iterator,K&&,Args &&...)

## BRIEF

Пытается добавить новый элемент со вспомогательным итератором

## CONTENT

Доступ: protected

Пытается добавить новый элемент со вспомогательным итератором

Параметры шаблона:
* typename K
* typename Args

Параметры:
* stappler::memory::rbtree::Tree::const_iterator
* K&&
* Args &&...

Возвращает:
* Node<Value>*

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::tryAssignNodeUnique<typename,typename>(K&&,M&&)

## BRIEF

Пытается добавить или назначить новый элемент

## CONTENT

Доступ: protected

Пытается добавить или назначить новый элемент

Параметры шаблона:
* typename K
* typename M

Параметры:
* K&&
* M&&

Возвращает:
* Pair<Node<Value> *, bool>

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::tryAssignNodeUniqueHint<typename,typename>(stappler::memory::rbtree::Tree::const_iterator,K&&,M&&)

## BRIEF

Пытается добавить или назначить новый элемент со вспомогательным итератором

## CONTENT

Доступ: protected

Пытается добавить или назначить новый элемент со вспомогательным итератором

Параметры шаблона:
* typename K
* typename M

Параметры:
* stappler::memory::rbtree::Tree::const_iterator
* K&&
* M&&

Возвращает:
* Node<Value>*

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::makeInsert(Node<Value>*,stappler::memory::rbtree::NodeBase*,bool)

## BRIEF

Выпоняет действительную вставку элемента в дерево

## CONTENT

Доступ: protected

Выпоняет действительную вставку элемента в дерево

Параметры:
* Node<Value>*
* stappler::memory::rbtree::NodeBase*
* bool

Возвращает:
* Node<Value>*

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::deleteNode(stappler::memory::rbtree::NodeBase*)

## BRIEF

Удаляет элемент из дерева

## CONTENT

Доступ: protected

Удаляет элемент из дерева

Параметры:
* stappler::memory::rbtree::NodeBase*


# ::stappler::memory::rbtree::Tree<typename,typename,typename>::clear_visit(Node<Value>*)

## BRIEF

Обходит элементы для удаления дерева

## CONTENT

Доступ: protected

Обходит элементы для удаления дерева

Параметры:
* Node<Value>*


# ::stappler::memory::rbtree::Tree<typename,typename,typename>::clone_visit(Node<Value> const*,Node<Value>*)

## BRIEF

Обходит элементы для клонирования дерева

## CONTENT

Доступ: protected

Обходит элементы для клонирования дерева

Параметры:
* Node<Value> const*
* Node<Value>*


# ::stappler::memory::rbtree::Tree<typename,typename,typename>::clone(const Tree<Key, Value, Comp>&)

## BRIEF

Клонирует дерево

## CONTENT

Доступ: protected

Клонирует дерево

Параметры:
* const Tree<Key, Value, Comp>&


# ::stappler::memory::rbtree::Tree<typename,typename,typename>::find_impl<class>(K const&) const

## BRIEF

Находит элемент по ключу

## CONTENT

Доступ: protected

Находит элемент по ключу

Параметры шаблона:
* class K

Параметры:
* K const&

Возвращает:
* node_ptr

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::lower_bound_ptr<class>(K const&) const

## BRIEF

Находит нижнюю границу

## CONTENT

Доступ: protected

Находит нижнюю границу

Параметры шаблона:
* class K

Параметры:
* K const&

Возвращает:
* node_ptr

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::upper_bound_ptr<class>(K const&) const

## BRIEF

Находит верхнюю границу

## CONTENT

Доступ: protected

Находит верхнюю границу

Параметры шаблона:
* class K

Параметры:
* K const&

Возвращает:
* node_ptr

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::count_impl<class>(K const&) const

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

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::destroyNode(Node<Value>*)

## BRIEF

Уничтожает элемент

## CONTENT

Доступ: protected

Уничтожает элемент, удаляет его либо добавляет в связный список ожидания

Параметры:
* Node<Value>*


# ::stappler::memory::rbtree::Tree<typename,typename,typename>::allocateNode()

## BRIEF

Распределяет новый элемент

## CONTENT

Доступ: protected

Распределяет новый элемент из пула или связного списка ожидания

Возвращает:
* Node<Value>*

# ::stappler::memory::rbtree::Tree<typename,typename,typename>::allocateTmp(size_t)

## BRIEF

Резервирует новый блок элементов

## CONTENT

Доступ: protected

Резервирует новый блок элементов

Параметры:
* size_t - число элементов в блоке


# ::stappler::memory::rbtree::Tree<typename,typename,typename>::releaseTmp()

## BRIEF

Освобождает свободные элементы дерева

## CONTENT

Доступ: protected

Резервирует новый блок элементов
