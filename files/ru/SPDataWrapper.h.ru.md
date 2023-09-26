Title: SPDataWrapper.h


# STAPPLER_DATA_SPDATAWRAPPER_H_

## BRIEF

Заголовок обёртки вокруг нетипизированного значения

## CONTENT

Заголовок обёртки вокруг нетипизированного значения

# ::stappler::data::WrapperTemplate<typename>

## BRIEF

Обёртка вокруг нетипизированного значения

## CONTENT

Обёртка вокруг нетипизированного значения. Используется для реализации типов данных, имеющих встроенное хранилище, как то - данные сеанса, реалинация JWT.

Параметры шаблона:
* typename Interface - интерфейс памяти

Базовые классы:
* Interface::AllocBaseType


# ::stappler::data::WrapperTemplate<typename>::Value

## BRIEF

Тип внутреннего значения

## CONTENT

Доступ: public

Тип внутреннего значения


# ::stappler::data::WrapperTemplate<typename>::Array

## BRIEF

Тип массива

## CONTENT

Доступ: public

Тип массива


# ::stappler::data::WrapperTemplate<typename>::Dictionary

## BRIEF

Тип словаря

## CONTENT

Доступ: public

Тип словаря


# ::stappler::data::WrapperTemplate<typename>::String

## BRIEF

Тип символьной строки

## CONTENT

Доступ: public

Тип символьной строки


# ::stappler::data::WrapperTemplate<typename>::Bytes

## BRIEF

Тип байтовой строки

## CONTENT

Доступ: public

Тип байтовой строки


# ::stappler::data::WrapperTemplate<typename>::Type

## BRIEF

Тип хранимого значения

## CONTENT

Доступ: public

Тип хранимого значения


# ::stappler::data::WrapperTemplate<typename>::Iterator<class>

## BRIEF

Класс итератора вокруг обёртки нетипизированного значения

## CONTENT

Доступ: public

Класс итератора вокруг обёртки нетипизированного значения. Итератор использует контрольную схему для того, чтобы ограничить чтение определённых значений.

Схема должна определять методы `isProtected` для проверки необходимости пропускать некоторые поля, и `isFieldProtected(Iter)`, проверяющий поле на защищённость.

Параметры шаблона:
* class Scheme - контрольная схема итератора


# ::stappler::data::WrapperTemplate<typename>::Iterator<class>::value_type

## BRIEF

Тип значения итератора

## CONTENT

Доступ: public

Тип значения итератора


# ::stappler::data::WrapperTemplate<typename>::Iterator<class>::reference

## BRIEF

Тип ссылки на значение итератора

## CONTENT

Доступ: public

Тип ссылки на значение итератора


# ::stappler::data::WrapperTemplate<typename>::Iterator<class>::pointer

## BRIEF

Тип указателя на значение итератора

## CONTENT

Доступ: public

Тип указателя на значение итератора


# ::stappler::data::WrapperTemplate<typename>::Iterator<class>::Iterator()

## BRIEF

Инициализация итератора

## CONTENT

Доступ: public

Инициализация итератора


# ::stappler::data::WrapperTemplate<typename>::Iterator<class>::Iterator(Scheme*)

## BRIEF

Инициализация итератора со схемой

## CONTENT

Доступ: public

Инициализация итератора со схемой

Параметры:
* Scheme*


# ::stappler::data::WrapperTemplate<typename>::Iterator<class>::Iterator(Scheme*,typename Dictionary::iterator)

## BRIEF

Инициализация итератора со схемой и итератором словаря

## CONTENT

Доступ: public

Инициализация итератора со схемой и итератором словаря

Параметры:
* Scheme*
* typename Dictionary::iterator


# ::stappler::data::WrapperTemplate<typename>::Iterator<class>::Iterator(const Iterator<Scheme>&)

## BRIEF

Конструктор копирования итератора

## CONTENT

Доступ: public

Конструктор копирования итератора

Параметры:
* const Iterator<Scheme>&


# ::stappler::data::WrapperTemplate<typename>::Iterator<class>::operator=(const Iterator<Scheme>&)

## BRIEF

Оператор копирования итератора

## CONTENT

Доступ: public

Оператор копирования итератора

Параметры:
* const Iterator<Scheme>&

Возвращает:
* Iterator<Scheme>&

# ::stappler::data::WrapperTemplate<typename>::Iterator<class>::operator*() const

## BRIEF

Оператор разыменовывания итератора

## CONTENT

Доступ: public

Оператор разыменовывания итератора

Возвращает:
* reference

# ::stappler::data::WrapperTemplate<typename>::Iterator<class>::operator->() const

## BRIEF

Оператор разыменовывания итератора

## CONTENT

Доступ: public

Оператор разыменовывания итератора

Возвращает:
* pointer

# ::stappler::data::WrapperTemplate<typename>::Iterator<class>::operator++()

## BRIEF

Оператор инкремента итератора

## CONTENT

Доступ: public

Оператор инкремента итератора

Возвращает:
* Iterator<Scheme>&

# ::stappler::data::WrapperTemplate<typename>::Iterator<class>::operator++(int)

## BRIEF

Оператор постфиксного инкремента итератора

## CONTENT

Доступ: public

Оператор постфиксного инкремента итератора

Параметры:
* int

Возвращает:
* Iterator<Scheme>

# ::stappler::data::WrapperTemplate<typename>::Iterator<class>::operator==(const Iterator<Scheme>&) const

## BRIEF

Оператор сравнения итераторов

## CONTENT

Доступ: public

Оператор сравнения итераторов

Параметры:
* const Iterator<Scheme>&

Возвращает:
* bool

# ::stappler::data::WrapperTemplate<typename>::Iterator<class>::operator!=(const Iterator<Scheme>&) const

## BRIEF

Оператор сравнения итераторов

## CONTENT

Доступ: public

Оператор сравнения итераторов

Параметры:
* const Iterator<Scheme>&

Возвращает:
* bool

# ::stappler::data::WrapperTemplate<typename>::Iterator<class>::increment()

## BRIEF

Увеличивает значение итератора

## CONTENT

Доступ: protected

Увеличивает значение итератора


# ::stappler::data::WrapperTemplate<typename>::Iterator<class>::skipProtected()

## BRIEF

Пропуск защищённеых полей схемы

## CONTENT

Доступ: protected

Пропуск защищённеых полей схемы

# ::stappler::data::WrapperTemplate<typename>::Iterator<class>::scheme

## BRIEF

Используемая схема защиты

## CONTENT

Доступ: protected

Используемая схема защиты

Тип: Scheme*


# ::stappler::data::WrapperTemplate<typename>::Iterator<class>::iter

## BRIEF

Низлежащий итератор словаря

## CONTENT

Доступ: protected

Низлежащий итератор словаря

Тип: typename Dictionary::iterator


# ::stappler::data::WrapperTemplate<typename>::ConstIterator<class>

## BRIEF

Класс итератора вокруг обёртки нетипизированного значения

## CONTENT

Доступ: public

Класс итератора вокруг обёртки нетипизированного значения. Итератор использует контрольную схему для того, чтобы ограничить чтение определённых значений.

Схема должна определять методы `isProtected` для проверки необходимости пропускать некоторые поля, и `isFieldProtected(Iter)`, проверяющий поле на защищённость.

Параметры шаблона:
* class Scheme - контрольная схема итератора


# ::stappler::data::WrapperTemplate<typename>::ConstIterator<class>::value_type

## BRIEF

Тип значения итератора

## CONTENT

Доступ: public

Тип значения итератора


# ::stappler::data::WrapperTemplate<typename>::ConstIterator<class>::reference

## BRIEF

Тип ссылки на значение итератора

## CONTENT

Доступ: public

Тип ссылки на значение итератора


# ::stappler::data::WrapperTemplate<typename>::ConstIterator<class>::pointer

## BRIEF

Тип указателя на значение итератора

## CONTENT

Доступ: public

Тип указателя на значение итератора


# ::stappler::data::WrapperTemplate<typename>::ConstIterator<class>::ConstIterator()

## BRIEF

Конструктор итератора по умолчанию

## CONTENT

Доступ: public

Конструктор итератора по умолчанию


# ::stappler::data::WrapperTemplate<typename>::ConstIterator<class>::ConstIterator(Scheme const*)

## BRIEF

Инициализирует итератор со схемой

## CONTENT

Доступ: public

Инициализирует итератор со схемой

Параметры:
* Scheme const*


# ::stappler::data::WrapperTemplate<typename>::ConstIterator<class>::ConstIterator(Scheme const*,typename Dictionary::const_iterator)

## BRIEF

Инициализирует итератор со схемой и итератором словаря

## CONTENT

Доступ: public

Инициализирует итератор со схемой и итератором словаря

Параметры:
* Scheme const*
* typename Dictionary::const_iterator


# ::stappler::data::WrapperTemplate<typename>::ConstIterator<class>::ConstIterator(const ConstIterator<Scheme>&)

## BRIEF

Конструткор копирования итератора

## CONTENT

Доступ: public

Конструткор копирования итератора

Параметры:
* const ConstIterator<Scheme>&


# ::stappler::data::WrapperTemplate<typename>::ConstIterator<class>::operator=(const ConstIterator<Scheme>&)

## BRIEF

Оператор копирования итератора

## CONTENT

Доступ: public

Оператор копирования итератора

Параметры:
* const ConstIterator<Scheme>&

Возвращает:
* ConstIterator<Scheme>&

# ::stappler::data::WrapperTemplate<typename>::ConstIterator<class>::operator*() const

## BRIEF

Оператор разыменования итератора

## CONTENT

Доступ: public

Оператор разыменования итератора

Возвращает:
* reference

# ::stappler::data::WrapperTemplate<typename>::ConstIterator<class>::operator->() const

## BRIEF

Оператор разыменования итератора

## CONTENT

Доступ: public

Оператор разыменования итератора

Возвращает:
* pointer

# ::stappler::data::WrapperTemplate<typename>::ConstIterator<class>::operator++()

## BRIEF

Оператор инкремента итератора

## CONTENT

Доступ: public

Оператор инкремента итератора

Возвращает:
* ConstIterator<Scheme>&

# ::stappler::data::WrapperTemplate<typename>::ConstIterator<class>::operator++(int)

## BRIEF

Оператор постфиксного инкремента итератора

## CONTENT

Доступ: public

Оператор постфиксного инкремента итератора

Параметры:
* int

Возвращает:
* ConstIterator<Scheme>

# ::stappler::data::WrapperTemplate<typename>::ConstIterator<class>::operator==(const ConstIterator<Scheme>&) const

## BRIEF

Оператор сравнения итераторов

## CONTENT

Доступ: public

Оператор сравнения итераторов

Параметры:
* const ConstIterator<Scheme>&

Возвращает:
* bool

# ::stappler::data::WrapperTemplate<typename>::ConstIterator<class>::operator!=(const ConstIterator<Scheme>&) const

## BRIEF

Оператор сравнения итераторов

## CONTENT

Доступ: public

Оператор сравнения итераторов

Параметры:
* const ConstIterator<Scheme>&

Возвращает:
* bool

# ::stappler::data::WrapperTemplate<typename>::ConstIterator<class>::increment()

## BRIEF

Увеличивает значение итератора

## CONTENT

Доступ: protected

Увеличивает значение итератора


# ::stappler::data::WrapperTemplate<typename>::ConstIterator<class>::skipProtected()

## BRIEF

Пропускает защищённые поля схемы

## CONTENT

Доступ: protected

Пропускает защищённые поля схемы


# ::stappler::data::WrapperTemplate<typename>::ConstIterator<class>::scheme

## BRIEF

Схема безопасности

## CONTENT

Доступ: protected

Схема безопасности

Тип: Scheme const*


# ::stappler::data::WrapperTemplate<typename>::ConstIterator<class>::iter

## BRIEF

Низлежащий итератор словаря

## CONTENT

Доступ: protected

Низлежащий итератор словаря

Тип: typename Dictionary::const_iterator


# ::stappler::data::WrapperTemplate<typename>::begin<typename>(Scheme*)

## BRIEF

Функция запуска итератора на основе схемы

## CONTENT

Доступ: public

Функция запуска итератора на основе схемы

Параметры шаблона:
* typename Scheme

Параметры:
* Scheme*

Возвращает:
* auto

# ::stappler::data::WrapperTemplate<typename>::end<typename>(Scheme*)

## BRIEF

Функция остановки итератора на основе схемы

## CONTENT

Доступ: public

Функция остановки итератора на основе схемы

Параметры шаблона:
* typename Scheme

Параметры:
* Scheme*

Возвращает:
* auto

# ::stappler::data::WrapperTemplate<typename>::begin<typename>(Scheme const*)

## BRIEF

Функция запуска итератора на основе схемы

## CONTENT

Доступ: public

Функция запуска итератора на основе схемы

Параметры шаблона:
* typename Scheme

Параметры:
* Scheme const*

Возвращает:
* auto

# ::stappler::data::WrapperTemplate<typename>::end<typename>(Scheme const*)

## BRIEF

Функция остановки итератора на основе схемы

## CONTENT

Доступ: public

Функция остановки итератора на основе схемы

Параметры шаблона:
* typename Scheme

Параметры:
* Scheme const*

Возвращает:
* auto

# ::stappler::data::WrapperTemplate<typename>::WrapperTemplate(stappler::data::WrapperTemplate::Value&&)

## BRIEF

Инициализирует обёртку, перемещая в неё значение

## CONTENT

Доступ: public

Инициализирует обёртку, перемещая в неё значение

Параметры:
* stappler::data::WrapperTemplate::Value&&


# ::stappler::data::WrapperTemplate<typename>::WrapperTemplate()

## BRIEF

Инициализирует пустую обёртку

## CONTENT

Доступ: public

Инициализирует пустую обёртку


# ::stappler::data::WrapperTemplate<typename>::getData()

## BRIEF

Возвращает ссылку на вложенное значение

## CONTENT

Доступ: public

Возвращает ссылку на вложенное значение

Возвращает:
* Value&

# ::stappler::data::WrapperTemplate<typename>::getData() const

## BRIEF

Возвращает ссылку на вложенное значение

## CONTENT

Доступ: public

Возвращает ссылку на вложенное значение

Возвращает:
* Value&

# ::stappler::data::WrapperTemplate<typename>::isModified() const

## BRIEF

Проверяет, установлен ли флаг модификации значения

## CONTENT

Доступ: public

Проверяет, установлен ли флаг модификации значения

Возвращает:
* bool

# ::stappler::data::WrapperTemplate<typename>::setModified(bool)

## BRIEF

Устанавливает флаг модицикации значения

## CONTENT

Доступ: public

Устанавливает флаг модицикации значения

Параметры:
* bool


# ::stappler::data::WrapperTemplate<typename>::setProtected(bool)

## BRIEF

Устанавливает флаг защиты значения

## CONTENT

Доступ: public

Устанавливает флаг защиты значения

Параметры:
* bool


# ::stappler::data::WrapperTemplate<typename>::isProtected() const

## BRIEF

Проверяет, установлен ли флаг защиты значения

## CONTENT

Доступ: public

Проверяет, установлен ли флаг защиты значения

Возвращает:
* bool

# ::stappler::data::WrapperTemplate<typename>::emplace<class>(Key&&)

## BRIEF

Добавляет значение по ключу (см. ValueTemplate)

## CONTENT

Доступ: public

Добавляет значение по ключу (см. ValueTemplate)

Параметры шаблона:
* class Key

Параметры:
* Key&&

Возвращает:
* Value&

# ::stappler::data::WrapperTemplate<typename>::hasValue<class>(Key&&) const

## BRIEF

Проверяет существование значения по ключу (см. ValueTemplate)

## CONTENT

Доступ: public

Проверяет существование значения по ключу (см. ValueTemplate)

Параметры шаблона:
* class Key

Параметры:
* Key&&

Возвращает:
* bool

# ::stappler::data::WrapperTemplate<typename>::setValue<class,class>(Val&&,Key&&)

## BRIEF

Устанавливает значение по ключу (см. ValueTemplate)

## CONTENT

Доступ: public

Устанавливает значение по ключу (см. ValueTemplate)

Параметры шаблона:
* class Val
* class Key

Параметры:
* Val&&
* Key&&

Возвращает:
* Value&

# ::stappler::data::WrapperTemplate<typename>::getValue<class>(Key&&) const

## BRIEF

Получает значение по ключу (см. ValueTemplate)

## CONTENT

Доступ: public

Получает значение по ключу (см. ValueTemplate)

Параметры шаблона:
* class Key

Параметры:
* Key&&

Возвращает:
* Value&

# ::stappler::data::WrapperTemplate<typename>::setNull<class>(Key&&)

## BRIEF

Устанавливает пустое значение для ключа (см. ValueTemplate)

## CONTENT

Доступ: public

Устанавливает пустое значение для ключа (см. ValueTemplate)

Параметры шаблона:
* class Key

Параметры:
* Key&&


# ::stappler::data::WrapperTemplate<typename>::setBool<class>(bool,Key&&)

## BRIEF

Устанавливает булево значение для ключа (см. ValueTemplate)

## CONTENT

Доступ: public

Устанавливает булево значение для ключа (см. ValueTemplate)

Параметры шаблона:
* class Key

Параметры:
* bool
* Key&&


# ::stappler::data::WrapperTemplate<typename>::setInteger<class>(int64_t,Key&&)

## BRIEF

Устанавливает целочисленное значение для ключа (см. ValueTemplate)

## CONTENT

Доступ: public

Устанавливает целочисленное значение для ключа (см. ValueTemplate)

Параметры шаблона:
* class Key

Параметры:
* int64_t
* Key&&


# ::stappler::data::WrapperTemplate<typename>::setDouble<class>(double,Key&&)

## BRIEF

Устанавливает значение с плавающей точкой для ключа (см. ValueTemplate)

## CONTENT

Доступ: public

Устанавливает значение с плавающей точкой для ключа (см. ValueTemplate)

Параметры шаблона:
* class Key

Параметры:
* double
* Key&&


# ::stappler::data::WrapperTemplate<typename>::setString<class>(stappler::data::WrapperTemplate::String const&,Key&&)

## BRIEF

Устанавливает строковое значение для ключа (см. ValueTemplate)

## CONTENT

Доступ: public

Устанавливает строковое значение для ключа (см. ValueTemplate)

Параметры шаблона:
* class Key

Параметры:
* stappler::data::WrapperTemplate::String const&
* Key&&


# ::stappler::data::WrapperTemplate<typename>::setString<class>(stappler::data::WrapperTemplate::String&&,Key&&)

## BRIEF

Перемещает строковое значение для ключа (см. ValueTemplate)

## CONTENT

Доступ: public

Перемещает строковое значение для ключа (см. ValueTemplate)

Параметры шаблона:
* class Key

Параметры:
* stappler::data::WrapperTemplate::String&&
* Key&&


# ::stappler::data::WrapperTemplate<typename>::setString<class>(stappler::StringView,Key&&)

## BRIEF

Устанавливает строковое значение для ключа (см. ValueTemplate)

## CONTENT

Доступ: public

Устанавливает строковое значение для ключа (см. ValueTemplate)

Параметры шаблона:
* class Key

Параметры:
* stappler::StringView
* Key&&


# ::stappler::data::WrapperTemplate<typename>::setBytes<class>(stappler::data::WrapperTemplate::Bytes const&,Key&&)

## BRIEF

Устанавливает байтовое значение для ключа (см. ValueTemplate)

## CONTENT

Доступ: public

Устанавливает байтовое значение для ключа (см. ValueTemplate)

Параметры шаблона:
* class Key

Параметры:
* stappler::data::WrapperTemplate::Bytes const&
* Key&&


# ::stappler::data::WrapperTemplate<typename>::setBytes<class>(stappler::data::WrapperTemplate::Bytes&&,Key&&)

## BRIEF

Перемещает байтовое значение для ключа (см. ValueTemplate)

## CONTENT

Доступ: public

Перемещает байтовое значение для ключа (см. ValueTemplate)

Параметры шаблона:
* class Key

Параметры:
* stappler::data::WrapperTemplate::Bytes&&
* Key&&


# ::stappler::data::WrapperTemplate<typename>::setBytes<class>(stappler::BytesView,Key&&)

## BRIEF

Устанавливает байтовое значение для ключа (см. ValueTemplate)

## CONTENT

Доступ: public

Устанавливает байтовое значение для ключа (см. ValueTemplate)

Параметры шаблона:
* class Key

Параметры:
* stappler::BytesView
* Key&&


# ::stappler::data::WrapperTemplate<typename>::setArray<class>(stappler::data::WrapperTemplate::Array const&,Key&&)

## BRIEF

Устанавливает значение массива для ключа (см. ValueTemplate)

## CONTENT

Доступ: public

Устанавливает значение массива для ключа (см. ValueTemplate)

Параметры шаблона:
* class Key

Параметры:
* stappler::data::WrapperTemplate::Array const&
* Key&&


# ::stappler::data::WrapperTemplate<typename>::setArray<class>(stappler::data::WrapperTemplate::Array&&,Key&&)

## BRIEF

Перемещает значение массива для ключа (см. ValueTemplate)

## CONTENT

Доступ: public

Перемещает значение массива для ключа (см. ValueTemplate)

Параметры шаблона:
* class Key

Параметры:
* stappler::data::WrapperTemplate::Array&&
* Key&&


# ::stappler::data::WrapperTemplate<typename>::setDict<class>(stappler::data::WrapperTemplate::Dictionary const&,Key&&)

## BRIEF

Устанавливает значение словаря для ключа (см. ValueTemplate)

## CONTENT

Доступ: public

Устанавливает значение словаря для ключа (см. ValueTemplate)

Параметры шаблона:
* class Key

Параметры:
* stappler::data::WrapperTemplate::Dictionary const&
* Key&&


# ::stappler::data::WrapperTemplate<typename>::setDict<class>(stappler::data::WrapperTemplate::Dictionary&&,Key&&)

## BRIEF

Перемещает значение словаря для ключа (см. ValueTemplate)

## CONTENT

Доступ: public

Перемещает значение словаря для ключа (см. ValueTemplate)

Параметры шаблона:
* class Key

Параметры:
* stappler::data::WrapperTemplate::Dictionary&&
* Key&&


# ::stappler::data::WrapperTemplate<typename>::getBool<class>(Key&&) const

## BRIEF

Получает булево значение для ключа (см. ValueTemplate)

## CONTENT

Доступ: public

Получает булево значение для ключа (см. ValueTemplate)

Параметры шаблона:
* class Key

Параметры:
* Key&&

Возвращает:
* bool

# ::stappler::data::WrapperTemplate<typename>::getInteger<class>(Key&&,int64_t) const

## BRIEF

Получает целочисленное значение для ключа (см. ValueTemplate)

## CONTENT

Доступ: public

Получает целочисленное значение для ключа (см. ValueTemplate)

Параметры шаблона:
* class Key

Параметры:
* Key&&
* int64_t

Возвращает:
* int64_t

# ::stappler::data::WrapperTemplate<typename>::getDouble<class>(Key&&,double) const

## BRIEF

Получает значение с плавающей точкой для ключа (см. ValueTemplate)

## CONTENT

Доступ: public

Получает значение с плавающей точкой для ключа (см. ValueTemplate)

Параметры шаблона:
* class Key

Параметры:
* Key&&
* double

Возвращает:
* double

# ::stappler::data::WrapperTemplate<typename>::getString<class>(Key&&) const

## BRIEF

Получает строковое значение для ключа (см. ValueTemplate)

## CONTENT

Доступ: public

Получает строковое значение для ключа (см. ValueTemplate)

Параметры шаблона:
* class Key

Параметры:
* Key&&

Возвращает:
* String&

# ::stappler::data::WrapperTemplate<typename>::getBytes<class>(Key&&) const

## BRIEF

Получает байтовое значение для ключа (см. ValueTemplate)

## CONTENT

Доступ: public

Получает байтовое значение для ключа (см. ValueTemplate)

Параметры шаблона:
* class Key

Параметры:
* Key&&

Возвращает:
* Bytes&

# ::stappler::data::WrapperTemplate<typename>::getArray<class>(Key&&) const

## BRIEF

Получает значение массива для ключа (см. ValueTemplate)

## CONTENT

Доступ: public

Получает значение массива для ключа (см. ValueTemplate)

Параметры шаблона:
* class Key

Параметры:
* Key&&

Возвращает:
* Array&

# ::stappler::data::WrapperTemplate<typename>::getDict<class>(Key&&) const

## BRIEF

Получает значение словаря для ключа (см. ValueTemplate)

## CONTENT

Доступ: public

Получает значение словаря для ключа (см. ValueTemplate)

Параметры шаблона:
* class Key

Параметры:
* Key&&

Возвращает:
* Dictionary&

# ::stappler::data::WrapperTemplate<typename>::erase<class>(Key&&)

## BRIEF

Удаляет значение для ключа (см. ValueTemplate)

## CONTENT

Доступ: public

Удаляет значение для ключа (см. ValueTemplate)

Параметры шаблона:
* class Key

Параметры:
* Key&&

Возвращает:
* bool

# ::stappler::data::WrapperTemplate<typename>::newDict<class>(Key&&)

## BRIEF

Создаёт словарь для ключа (см. ValueTemplate)

## CONTENT

Доступ: public

Создаёт словарь для ключа (см. ValueTemplate)

Параметры шаблона:
* class Key

Параметры:
* Key&&

Возвращает:
* Value&

# ::stappler::data::WrapperTemplate<typename>::newArray<class>(Key&&)

## BRIEF

Создаёт массив для ключа (см. ValueTemplate)

## CONTENT

Доступ: public

Создаёт массив для ключа (см. ValueTemplate)

Параметры шаблона:
* class Key

Параметры:
* Key&&

Возвращает:
* Value&

# ::stappler::data::WrapperTemplate<typename>::isNull<class>(Key&&) const

## BRIEF

Проверяет, хранится ли пустое значение для ключа (см. ValueTemplate)

## CONTENT

Доступ: public

Проверяет, хранится ли пустое значение для ключа (см. ValueTemplate)

Параметры шаблона:
* class Key

Параметры:
* Key&&

Возвращает:
* bool

# ::stappler::data::WrapperTemplate<typename>::isBasicType<class>(Key&&) const

## BRIEF

Проверяет, хранится ли значение базового типа для ключа (см. ValueTemplate)

## CONTENT

Доступ: public

Проверяет, хранится ли значение базового типа для ключа (см. ValueTemplate)

Параметры шаблона:
* class Key

Параметры:
* Key&&

Возвращает:
* bool

# ::stappler::data::WrapperTemplate<typename>::isArray<class>(Key&&) const

## BRIEF

Проверяет, хранится ли массив для ключа (см. ValueTemplate)

## CONTENT

Доступ: public

Проверяет, хранится ли массив для ключа (см. ValueTemplate)

Параметры шаблона:
* class Key

Параметры:
* Key&&

Возвращает:
* bool

# ::stappler::data::WrapperTemplate<typename>::isDictionary<class>(Key&&) const

## BRIEF

Проверяет, хранится ли словарь для ключа (см. ValueTemplate)

## CONTENT

Доступ: public

Проверяет, хранится ли словарь для ключа (см. ValueTemplate)

Параметры шаблона:
* class Key

Параметры:
* Key&&

Возвращает:
* bool

# ::stappler::data::WrapperTemplate<typename>::isBool<class>(Key&&) const

## BRIEF

Проверяет, хранится ли булево значение для ключа (см. ValueTemplate)

## CONTENT

Доступ: public

Проверяет, хранится ли булево значение для ключа (см. ValueTemplate)

Параметры шаблона:
* class Key

Параметры:
* Key&&

Возвращает:
* bool

# ::stappler::data::WrapperTemplate<typename>::isInteger<class>(Key&&) const

## BRIEF

Проверяет, хранится ли целочисленное значение для ключа (см. ValueTemplate)

## CONTENT

Доступ: public

Проверяет, хранится ли целочисленное значение для ключа (см. ValueTemplate)

Параметры шаблона:
* class Key

Параметры:
* Key&&

Возвращает:
* bool

# ::stappler::data::WrapperTemplate<typename>::isDouble<class>(Key&&) const

## BRIEF

Проверяет, хранится ли значение с плавающей точкой для ключа (см. ValueTemplate)

## CONTENT

Доступ: public

Проверяет, хранится ли значение с плавающей точкой для ключа (см. ValueTemplate)

Параметры шаблона:
* class Key

Параметры:
* Key&&

Возвращает:
* bool

# ::stappler::data::WrapperTemplate<typename>::isString<class>(Key&&) const

## BRIEF

Проверяет, хранится ли символьная строка для ключа (см. ValueTemplate)

## CONTENT

Доступ: public

Проверяет, хранится ли символьная строка для ключа (см. ValueTemplate)

Параметры шаблона:
* class Key

Параметры:
* Key&&

Возвращает:
* bool

# ::stappler::data::WrapperTemplate<typename>::isBytes<class>(Key&&) const

## BRIEF

Проверяет, хранится ли байтовая строка для ключа (см. ValueTemplate)

## CONTENT

Доступ: public

Проверяет, хранится ли байтовая строка для ключа (см. ValueTemplate)

Параметры шаблона:
* class Key

Параметры:
* Key&&

Возвращает:
* bool

# ::stappler::data::WrapperTemplate<typename>::getType<class>(Key&&) const

## BRIEF

Возвращает тип значения для ключа (см. ValueTemplate)

## CONTENT

Доступ: public

Возвращает тип значения для ключа (см. ValueTemplate)

Параметры шаблона:
* class Key

Параметры:
* Key&&

Возвращает:
* Type

# ::stappler::data::WrapperTemplate<typename>::_data

## BRIEF

Вложенное значение

## CONTENT

Доступ: protected

Вложенное значение

Тип: Value


# ::stappler::data::WrapperTemplate<typename>::_protected

## BRIEF

Флаг защиты значения

## CONTENT

Доступ: protected

Флаг защиты значения

Тип: bool


# ::stappler::data::WrapperTemplate<typename>::_modified

## BRIEF

Флаг модификации значения

## CONTENT

Доступ: protected

Флаг модификации значения

Тип: bool
