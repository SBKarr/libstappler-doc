Title: SPSearchDistance.h


# STAPPLER_SEARCH_SPSEARCHDISTANCE_H_

## BRIEF

Заголовок функции расстояния Левенштейна

## CONTENT

Заголовок функции расстояния Левенштейна


# ::stappler::search::Distance

## BRIEF

Структура для вычисления расстояния Левенштейна

## CONTENT

Структура для вычисления расстояния Левенштейна. Используется для сравнения "похожести" слов в полнотекстовом поиске.

Базовые классы:
* memory::AllocPool


# ::stappler::search::Distance::Value

## BRIEF

Значение единицы расстояния

## CONTENT

Доступ: public

Значение единицы расстояния. Единица расстояния это одно из четырёх значений, показывающих способ изменения для кратчайшего получения одной строки из другой.

При кодировании единица расстояния занимает два бита. Таким образом, в байте кодируется 4 единицы.

Значения:
* Match - соотвествие
* Insert - вставка
* Delete - удаление
* Replace - замена


# ::stappler::search::Distance::Storage

## BRIEF

Структура для хранения расстояния Левенштейна

## CONTENT

Доступ: public

Структура для хранения расстояния Левенштейна

Базовые классы:
* memory::AllocPool


# ::stappler::search::Distance::Storage::Struct

## BRIEF

Единичная структура для хранения расстояния

## CONTENT

Доступ: public

Единичная структура для хранения расстояния. Кодирует 4 единицы расстояния. Занимает 1 байт.


# ::stappler::search::Distance::Storage::Struct::v1

## BRIEF

Первое значение расстояния

## CONTENT

Первое значение расстояния

Тип: uint8_t

# ::stappler::search::Distance::Storage::Struct::v2

## BRIEF

Второе значение расстояния

## CONTENT

Второе значение расстояния

Тип: uint8_t


# ::stappler::search::Distance::Storage::Struct::v3

## BRIEF

Третье значение расстояния

## CONTENT

Третье значение расстояния

Тип: uint8_t


# ::stappler::search::Distance::Storage::Struct::v4

## BRIEF

Четвёртое значение расстояния

## CONTENT

Четвёртое значение расстояния

Тип: uint8_t


# ::stappler::search::Distance::Storage::Struct::set(uint8_t,stappler::search::Distance::Value)

## BRIEF

Устанавливает значение расстояния по индексу

## CONTENT

Устанавливает значение расстояния по индексу

Параметры:
* uint8_t - индекс [0-3]
* stappler::search::Distance::Value - значение


# ::stappler::search::Distance::Storage::Struct::get(uint8_t) const

## BRIEF

Получает значение расстояния

## CONTENT

Получает значение расстояния

Параметры:
* uint8_t - индекс [0-3]

Возвращает:
* stappler::search::Distance::Value

# ::stappler::search::Distance::Storage::Size

## BRIEF

Значени размера для вектора расстояния Левенштейна

## CONTENT

Доступ: public

Значени размера для вектора расстояния Левенштейна


# ::stappler::search::Distance::Storage::Size::size

## BRIEF

Число элементов размера

## CONTENT

Число элементов размера

Тип: size_t


# ::stappler::search::Distance::Storage::Size::vec

## BRIEF

Флаг использования вектора для хранения данных

## CONTENT

Флаг использования вектора для хранения данных. Используется либо вектор динамического размера, либо статический массив в рамках оптимизации малых объектов. Для малых размером динамическая память не используется.

Тип: size_t


# ::stappler::search::Distance::Storage::Array

## BRIEF

Тип хранимого статического массива

## CONTENT

Доступ: public

Тип хранимого статического массива


# ::stappler::search::Distance::Storage::Vec

## BRIEF

Тип хранимого динамического вектора

## CONTENT

Доступ: public

Тип хранимого динамического вектора


# ::stappler::search::Distance::Storage::merge(stappler::search::Distance::Storage const&,stappler::search::Distance::Storage const&)

## BRIEF

Соединяет два хранилища элементов расстояния

## CONTENT

Доступ: public

Соединяет два хранилища элементов расстояния

Параметры:
* stappler::search::Distance::Storage const&
* stappler::search::Distance::Storage const&

Возвращает:
* stappler::search::Distance::Storage - новое хранилище элементов вектора

# ::stappler::search::Distance::Storage::Storage()

## BRIEF

Конструктор по умолчанию

## CONTENT

Доступ: public

Конструктор по умолчанию


# ::stappler::search::Distance::Storage::~Storage()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор


# ::stappler::search::Distance::Storage::Storage(stappler::search::Distance::Storage const&)

## BRIEF

Конструктор копирования

## CONTENT

Доступ: public

Конструктор копирования

Параметры:
* stappler::search::Distance::Storage const&


# ::stappler::search::Distance::Storage::Storage(stappler::search::Distance::Storage&&)

## BRIEF

Конструктор перемещения

## CONTENT

Доступ: public

Конструктор перемещения

Параметры:
* stappler::search::Distance::Storage&&


# ::stappler::search::Distance::Storage::operator=(stappler::search::Distance::Storage const&)

## BRIEF

Оператор копирования

## CONTENT

Доступ: public

Оператор копирования

Параметры:
* stappler::search::Distance::Storage const&

Возвращает:
* stappler::search::Distance::Storage&

# ::stappler::search::Distance::Storage::operator=(stappler::search::Distance::Storage&&)

## BRIEF

Оператор перемещения

## CONTENT

Доступ: public

Оператор перемещения

Параметры:
* stappler::search::Distance::Storage&&

Возвращает:
* stappler::search::Distance::Storage&

# ::stappler::search::Distance::Storage::empty() const

## BRIEF

Проверяет хрнилище на пустоту

## CONTENT

Доступ: public

Проверяет хрнилище на пустоту

Возвращает:
* bool - true если хранилище пустое

# ::stappler::search::Distance::Storage::size() const

## BRIEF

Возвращет число элементов расстояния

## CONTENT

Доступ: public

Возвращет число элементов расстояния

Возвращает:
* size_t

# ::stappler::search::Distance::Storage::capacity() const

## BRIEF

Возвращает текущую вместимость хранилища

## CONTENT

Доступ: public

Возвращает текущую вместимость хранилища

Возвращает:
* size_t

# ::stappler::search::Distance::Storage::reserve(size_t)

## BRIEF

Резервирует память под хранение элементов

## CONTENT

Доступ: public

Резервирует память под хранение элементов

Параметры:
* size_t


# ::stappler::search::Distance::Storage::emplace_back(stappler::search::Distance::Value)

## BRIEF

Добавляет элемент расстояния

## CONTENT

Доступ: public

Добавляет элемент расстояния

Параметры:
* stappler::search::Distance::Value


# ::stappler::search::Distance::Storage::reverse()

## BRIEF

Инвертирует элементы расстояния

## CONTENT

Доступ: public

Инвертирует элементы расстояния


# ::stappler::search::Distance::Storage::at(size_t) const

## BRIEF

Возвращет элемент расстояния по индексу

## CONTENT

Доступ: public

Возвращет элемент расстояния по индексу. Если индекс вне хранилища - поведение не определено

Параметры:
* size_t

Возвращает:
* stappler::search::Distance::Value

# ::stappler::search::Distance::Storage::set(size_t,stappler::search::Distance::Value)

## BRIEF

Устанавливает элемент расстояния по индексу

## CONTENT

Доступ: public

Устанавливает элемент расстояния по индексу. Если индекс вне хранилища - поведение не определено

Параметры:
* size_t
* stappler::search::Distance::Value


# ::stappler::search::Distance::Storage::clear()

## BRIEF

Очищает хранилище

## CONTENT

Доступ: public

Очищает хранилище


# ::stappler::search::Distance::Storage::isVecStorage() const

## BRIEF

Проверяет, используется ли динамический вектор для хранилища

## CONTENT

Доступ: protected

Проверяет, используется ли динамический вектор для хранилища

Возвращает:
* bool

# ::stappler::search::Distance::Storage::isVecStorage(size_t) const

## BRIEF

Проверяет, будет ли использоваться динамический вектор для хранилища при определённом размере

## CONTENT

Доступ: protected

Проверяет, будет ли использоваться динамический вектор для хранилища при определённом размере

Параметры:
* size_t

Возвращает:
* bool

# ::stappler::search::Distance::Storage::_size

## BRIEF

Число элементов в хранилище

## CONTENT

Доступ: protected

Число элементов в хранилище

Тип: stappler::search::Distance::Storage::Size


# ::stappler::search::Distance::Storage::

## BRIEF

Анонимное объединение типа хранилища

## CONTENT

Доступ: protected

Анонимное объединение типа хранилища


# ::stappler::search::Distance::Storage::_array

## BRIEF

Хранилище в виде массива

## CONTENT

Хранилище в виде массива

Тип: stappler::search::Distance::Storage::Array


# ::stappler::search::Distance::Storage::_bytes

## BRIEF

Хранилище в виде динамического вектора

## CONTENT

Хранилище в виде динамического вектора

Тип: stappler::search::Distance::Storage::Vec


# ::stappler::search::Distance::Distance()

## BRIEF

Конструктор по умолчанию

## CONTENT

Доступ: public

Конструктор по умолчанию


# ::stappler::search::Distance::Distance(stappler::StringView const&,stappler::StringView const&,size_t)

## BRIEF

Конструктор из сравнения двух строк

## CONTENT

Доступ: public

Конструктор из сравнения двух строк. Вычисляет вектор сравнения и расстояние Левенштейна на его основании.

Параметры:
* stappler::StringView const& - исходная строка
* stappler::StringView const& - каноническая строка для сравнения
* size_t - максимальный вычисляемый размер (максимальный размер внутреннего хранилища)


# ::stappler::search::Distance::Distance(stappler::search::Distance const&)

## BRIEF

Конструктор копирования

## CONTENT

Доступ: public

Конструктор копирования

Параметры:
* stappler::search::Distance const&


# ::stappler::search::Distance::Distance(stappler::search::Distance&&)

## BRIEF

Конструктор перемещения

## CONTENT

Доступ: public

Конструктор перемещения

Параметры:
* stappler::search::Distance&&


# ::stappler::search::Distance::operator=(stappler::search::Distance const&)

## BRIEF

Оператор копирования

## CONTENT

Доступ: public

Оператор копирования

Параметры:
* stappler::search::Distance const&

Возвращает:
* stappler::search::Distance&

# ::stappler::search::Distance::operator=(stappler::search::Distance&&)

## BRIEF

Оператор перемещения

## CONTENT

Доступ: public

Оператор перемещения

Параметры:
* stappler::search::Distance&&

Возвращает:
* stappler::search::Distance&

# ::stappler::search::Distance::empty() const

## BRIEF

Проверяет хранилище на пустоту

## CONTENT

Доступ: public

Проверяет хранилище на пустоту

Возвращает:
* bool - true если хранилище пустое

# ::stappler::search::Distance::size() const

## BRIEF

Возвращает число элементов в векторе расстояния

## CONTENT

Доступ: public

Возвращает число элементов в векторе расстояния

Возвращает:
* size_t

# ::stappler::search::Distance::diff_original(size_t,bool) const

## BRIEF

Вычисляет численное смещение символа на определённой позиции при трансформации из исходной в каноническую строку

## CONTENT

Доступ: public

Вычисляет численное смещение символа на определённой позиции при трансформации из исходной в каноническую строку

Параметры:
* size_t - позиция символа в исходной строке
* bool - true если необходимо включить символы, удалённые в исходной строке сразу после текущей позиции (использовать максимально сдвинутое вперёд смещение)

Возвращает:
* int32_t - число символов, на которые смещается позиция исходного символа для канонической строки

# ::stappler::search::Distance::diff_canonical(size_t,bool) const

## BRIEF

Вычисляет численное смещение символа на определённой позиции при трансформации из канонической в исходную строку

## CONTENT

Доступ: public

Вычисляет численное смещение символа на определённой позиции при трансформации из канонической в исходную строку

Параметры:
* size_t - позиция символа в канонической строке
* bool - true если необходимо включить символы, добавленные в исходной строке сразу после текущей позиции (использовать максимально сдвинутое вперёд смещение)

Возвращает:
* int32_t - число символов, на которые смещается позиция исходного символа для исходной строки


# ::stappler::search::Distance::nmatch() const

## BRIEF

Возвращает число совпадающих символов в строках

## CONTENT

Доступ: public

Возвращает число совпадающих символов в строках

Возвращает:
* size_t

# ::stappler::search::Distance::info() const

## BRIEF

Возвращает информационную строку, представляющую запись вектора расстояния

## CONTENT

Доступ: public

Возвращает информационную строку, представляющую запись вектора расстояния

Возвращает:
* memory::string

# ::stappler::search::Distance::_storage

## BRIEF

Хранилище вектора расстояния

## CONTENT

Доступ: protected

Хранилище вектора расстояния

Тип: stappler::search::Distance::Storage
