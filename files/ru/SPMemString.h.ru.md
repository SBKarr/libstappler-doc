Title: SPMemString.h


# STAPPLER_CORE_MEMORY_SPMEMSTRING_H_

## BRIEF

Заголовок стандартной символьной строки поверх пулов памяти

## CONTENT

Заголовок стандартной символьной строки поверх пулов памяти


# ::stappler::memory::is_char_pointer<typename>

## BRIEF

Интерфейс проверки, что тип является указателем на строковый символ

## CONTENT

Интерфейс проверки, что тип является указателем на строковый символ

Параметры шаблона:
* typename T - тип указателя


# ::stappler::memory::is_char_pointer<const char*>::is_char_pointer<const char*>

## BRIEF

Интерфейс проверки, строкового указателя, специализация для const char*

## CONTENT

Интерфейс проверки, строкового указателя, специализация для const char*


# ::stappler::memory::is_char_pointer<const char*>::Type

## BRIEF

Сигнальный тип

## CONTENT

Сигнальный тип


# ::stappler::memory::is_char_pointer<char*>::is_char_pointer<char*>

## BRIEF

Интерфейс проверки, строкового указателя, специализация для char*

## CONTENT

Интерфейс проверки, строкового указателя, специализация для char*


# ::stappler::memory::is_char_pointer<char*>::Type

## BRIEF

Сигнальный тип

## CONTENT

Сигнальный тип


# ::stappler::memory::is_char_pointer<const char16_t*>::is_char_pointer<const char16_t*>

## BRIEF

Интерфейс проверки, строкового указателя, специализация для const char16_t*

## CONTENT

Интерфейс проверки, строкового указателя, специализация для const char16_t*


# ::stappler::memory::is_char_pointer<const char16_t*>::Type

## BRIEF

Сигнальный тип

## CONTENT

Сигнальный тип


# ::stappler::memory::is_char_pointer<char16_t*>::is_char_pointer<char16_t*>

## BRIEF

Интерфейс проверки, строкового указателя, специализация для char16_t*

## CONTENT

Интерфейс проверки, строкового указателя, специализация для char16_t*


# ::stappler::memory::is_char_pointer<char16_t*>::Type

## BRIEF

Сигнальный тип

## CONTENT

Сигнальный тип


# ::stappler::memory::is_char_pointer<const char32_t*>::is_char_pointer<const char32_t*>

## BRIEF

Интерфейс проверки, строкового указателя, специализация для const char16_t*

## CONTENT

Интерфейс проверки, строкового указателя, специализация для const char16_t*


# ::stappler::memory::is_char_pointer<const char32_t*>::Type

## BRIEF

Сигнальный тип

## CONTENT

Сигнальный тип


# ::stappler::memory::is_char_pointer<char32_t*>::is_char_pointer<char32_t*>

## BRIEF

Интерфейс проверки, строкового указателя, специализация для const char32_t*

## CONTENT

Интерфейс проверки, строкового указателя, специализация для const char32_t*


# ::stappler::memory::is_char_pointer<char32_t*>::Type

## BRIEF

Сигнальный тип

## CONTENT

Сигнальный тип


# ::stappler::memory::basic_string<typename>

## BRIEF

Тип символьной строки поверх пулов памяти

## CONTENT

Тип символьной строки поверх пулов памяти. Аналог `std::basic_sring`.

Параметры шаблона:
* typename CharType - тип символа

Базовые классы:
* AllocPool


# ::stappler::memory::basic_string<typename>::allocator_type

## BRIEF

Тип аллокатора

## CONTENT

Доступ: public

Тип аллокатора


# ::stappler::memory::basic_string<typename>::pointer

## BRIEF

Тип указателя

## CONTENT

Доступ: public

Тип указателя


# ::stappler::memory::basic_string<typename>::const_pointer

## BRIEF

Тип постоянного указателя

## CONTENT

Доступ: public

Тип постоянного указателя


# ::stappler::memory::basic_string<typename>::reference

## BRIEF

Тип ссылки

## CONTENT

Доступ: public

Тип ссылки


# ::stappler::memory::basic_string<typename>::const_reference

## BRIEF

Тип постоянной ссылки

## CONTENT

Доступ: public

Тип постоянной ссылки


# ::stappler::memory::basic_string<typename>::traits_type

## BRIEF

Вспомогательный тип символьных операций.

## CONTENT

Доступ: public

Вспомогательный тип символьных операций. Берётся из std.


# ::stappler::memory::basic_string<typename>::size_type

## BRIEF

Тип размера

## CONTENT

Доступ: public

Тип размера


# ::stappler::memory::basic_string<typename>::charT

## BRIEF

Тип символа

## CONTENT

Доступ: public

Тип символа


# ::stappler::memory::basic_string<typename>::value_type

## BRIEF

Тип значения

## CONTENT

Доступ: public

Тип значения. Аналогичен типу символа


# ::stappler::memory::basic_string<typename>::mem_type

## BRIEF

Тип базового линейного контейнера

## CONTENT

Доступ: public

Тип базового линейного контейнера


# ::stappler::memory::basic_string<typename>::self

## BRIEF

Тип себя

## CONTENT

Доступ: public

Тип себя


# ::stappler::memory::basic_string<typename>::iterator

## BRIEF

Тип итератора

## CONTENT

Доступ: public

Тип итератора


# ::stappler::memory::basic_string<typename>::const_iterator

## BRIEF

Тип постоянного итератора

## CONTENT

Доступ: public

Тип постоянного итератора


# ::stappler::memory::basic_string<typename>::reverse_iterator

## BRIEF

Тип обратного итератора

## CONTENT

Доступ: public

Тип обратного итератора


# ::stappler::memory::basic_string<typename>::const_reverse_iterator

## BRIEF

Тип постоянного обратного итератора

## CONTENT

Доступ: public

Тип постоянного обратного итератора


# ::stappler::memory::basic_string<typename>::npos

## BRIEF

Индикатор недопустимой позиции в строке

## CONTENT

Доступ: public

Индикатор недопустимой позиции в строке. Представлен максимумом типа размера.

Тип: size_type


# ::stappler::memory::basic_string<typename>::basic_string()

## BRIEF

Конструктор по умолчанию

## CONTENT

Доступ: public

Конструктор по умолчанию. Создёт пустую строку. Использует пул памяти из контекста по умолчанию.

# ::stappler::memory::basic_string<typename>::basic_string(stappler::memory::basic_string::allocator_type const&)

## BRIEF

Конструктор строки с аллокатором

## CONTENT

Доступ: public

Конструктор строки с аллокатором

Параметры:
* stappler::memory::basic_string::allocator_type const&


# ::stappler::memory::basic_string<typename>::basic_string(stappler::memory::basic_string::self const&)

## BRIEF

Конструктор копирования

## CONTENT

Доступ: public

Конструктор копирования. Копирует другую строку. Использует пул памяти из текщуего контекста.

Параметры:
* stappler::memory::basic_string::self const&


# ::stappler::memory::basic_string<typename>::basic_string(stappler::memory::basic_string::self const&,stappler::memory::basic_string::allocator_type const&)

## BRIEF

Конструктор копирования

## CONTENT

Доступ: public

Конструктор копирования. Копирует другую строку. Использует указанный пул памяти

Параметры:
* stappler::memory::basic_string::self const&
* stappler::memory::basic_string::allocator_type const&


# ::stappler::memory::basic_string<typename>::basic_string(stappler::memory::basic_string::self const&,stappler::memory::basic_string::size_type,stappler::memory::basic_string::size_type,stappler::memory::basic_string::allocator_type const&)

## BRIEF

Конструктор из части строки

## CONTENT

Доступ: public

Конструктор из части строки

Параметры:
* stappler::memory::basic_string::self const& - другая стока
* stappler::memory::basic_string::size_type - смещение в другой строке
* stappler::memory::basic_string::size_type - число символов для копирования
* stappler::memory::basic_string::allocator_type const& - аллокатор


# ::stappler::memory::basic_string<typename>::basic_string(stappler::memory::basic_string::charT const*,stappler::memory::basic_string::allocator_type const&)

## BRIEF

Создаёт строку, копируя C-строку

## CONTENT

Доступ: public

Создаёт строку, копируя C-строку

Параметры:
* stappler::memory::basic_string::charT const* - C-строка
* stappler::memory::basic_string::allocator_type const& - аллокатор


# ::stappler::memory::basic_string<typename>::basic_string(stappler::memory::basic_string::charT const*,stappler::memory::basic_string::size_type,stappler::memory::basic_string::allocator_type const&)

## BRIEF

Создаёт строку, копируя C-строку

## CONTENT

Доступ: public

Создаёт строку, копируя C-строку

Параметры:
* stappler::memory::basic_string::charT const* - C-строка
* stappler::memory::basic_string::size_type - число символов для копирования
* stappler::memory::basic_string::allocator_type const& - аллокатор


# ::stappler::memory::basic_string<typename>::basic_string(stappler::memory::basic_string::size_type,stappler::memory::basic_string::charT,stappler::memory::basic_string::allocator_type const&)

## BRIEF

Создаёт новую строку и заполняет её символом

## CONTENT

Доступ: public

Создаёт новую строку и заполняет её символом

Параметры:
* stappler::memory::basic_string::size_type - длина строки
* stappler::memory::basic_string::charT - символ для заполнения
* stappler::memory::basic_string::allocator_type const& - аллокатор


# ::stappler::memory::basic_string<typename>::basic_string<class>(InputIterator,InputIterator,stappler::memory::basic_string::allocator_type const&)

## BRIEF

Создаёт строку, копируя символы из диапазона

## CONTENT

Доступ: public

Создаёт строку, копируя символы из диапазона

Параметры шаблона:
* class InputIterator

Параметры:
* InputIterator - начало диапазона
* InputIterator - конец диапазона
* stappler::memory::basic_string::allocator_type const&


# ::stappler::memory::basic_string<typename>::basic_string(InitializerList<stappler::memory::basic_string::charT>,stappler::memory::basic_string::allocator_type const&)

## BRIEF

Создаёт строку из символов списка инициализации

## CONTENT

Доступ: public

Создаёт строку из символов списка инициализации

Параметры:
* InitializerList<stappler::memory::basic_string::charT> - список инициализации
* stappler::memory::basic_string::allocator_type const& - аллокатор


# ::stappler::memory::basic_string<typename>::basic_string(basic_string<CharType>&&)

## BRIEF

Конструктор перемещения

## CONTENT

Доступ: public

Конструктор перемещения. Перемещение возможно только если аллокаторы совпадают, иначе копирует строку. Аллокатор берёт пул из контекста

Параметры:
* basic_string<CharType>&&


# ::stappler::memory::basic_string<typename>::basic_string(basic_string<CharType>&&,stappler::memory::basic_string::allocator_type const&)

## BRIEF

Конструктор перемещения

## CONTENT

Доступ: public

Конструктор перемещения. Перемещение возможно только если аллокаторы совпадают, иначе копирует строку.

Параметры:
* basic_string<CharType>&&
* stappler::memory::basic_string::allocator_type const&


# ::stappler::memory::basic_string<typename>::operator=(const basic_string<CharType>&)

## BRIEF

Оператор копирования

## CONTENT

Доступ: public

Оператор копирования

Параметры:
* const basic_string<CharType>&

Возвращает:
* basic_string<CharType>&

# ::stappler::memory::basic_string<typename>::operator=(basic_string<CharType>&&)

## BRIEF

Оператор перемещения

## CONTENT

Доступ: public

Оператор перемещения. Перемещение возможно только если аллокаторы совпадают, иначе копирует строку.

Параметры:
* basic_string<CharType>&&

Возвращает:
* basic_string<CharType>&

# ::stappler::memory::basic_string<typename>::operator=(stappler::memory::basic_string::charT const*)

## BRIEF

Оператор копирования C-строки

## CONTENT

Доступ: public

Оператор копирования C-строки

Параметры:
* stappler::memory::basic_string::charT const*

Возвращает:
* basic_string<CharType>&

# ::stappler::memory::basic_string<typename>::operator=(stappler::memory::basic_string::charT)

## BRIEF

Оператор копирования одиночного символа

## CONTENT

Доступ: public

Оператор копирования одиночного символа

Параметры:
* stappler::memory::basic_string::charT

Возвращает:
* basic_string<CharType>&

# ::stappler::memory::basic_string<typename>::operator=(InitializerList<stappler::memory::basic_string::charT>)

## BRIEF

Оператор копирования списка инициализации

## CONTENT

Доступ: public

Оператор копирования списка инициализации

Параметры:
* InitializerList<stappler::memory::basic_string::charT>

Возвращает:
* basic_string<CharType>&

# ::stappler::memory::basic_string<typename>::get_allocator() const

## BRIEF

Возвращает аллокатор

## CONTENT

Доступ: public

Возвращает аллокатор

Возвращает:
* allocator_type

# ::stappler::memory::basic_string<typename>::begin()

## BRIEF

Возвращает начальный итератор

## CONTENT

Доступ: public

Возвращает начальный итератор

Возвращает:
* iterator

# ::stappler::memory::basic_string<typename>::end()

## BRIEF

Возвращает конечный итератор

## CONTENT

Доступ: public

Возвращает конечный итератор

Возвращает:
* iterator

# ::stappler::memory::basic_string<typename>::begin() const

## BRIEF

Возвращает начальный итератор

## CONTENT

Доступ: public

Возвращает начальный итератор

Возвращает:
* const_iterator

# ::stappler::memory::basic_string<typename>::end() const

## BRIEF

Возвращает конечный итератор

## CONTENT

Доступ: public

Возвращает конечный итератор

Возвращает:
* const_iterator

# ::stappler::memory::basic_string<typename>::cbegin() const

## BRIEF

Возвращает начальный итератор

## CONTENT

Доступ: public

Возвращает начальный итератор

Возвращает:
* const_iterator

# ::stappler::memory::basic_string<typename>::cend() const

## BRIEF

Возвращает конечный итератор

## CONTENT

Доступ: public

Возвращает конечный итератор

Возвращает:
* const_iterator

# ::stappler::memory::basic_string<typename>::rbegin()

## BRIEF

Возвращает начальный обратный итератор

## CONTENT

Доступ: public

Возвращает начальный обратный итератор

Возвращает:
* reverse_iterator

# ::stappler::memory::basic_string<typename>::rend()

## BRIEF

Возвращает конечный обратный итератор

## CONTENT

Доступ: public

Возвращает конечный обратный итератор

Возвращает:
* reverse_iterator

# ::stappler::memory::basic_string<typename>::rbegin() const

## BRIEF

Возвращает начальный обратный итератор

## CONTENT

Доступ: public

Возвращает начальный обратный итератор

Возвращает:
* const_reverse_iterator

# ::stappler::memory::basic_string<typename>::rend() const

## BRIEF

Возвращает конечный обратный итератор

## CONTENT

Доступ: public

Возвращает конечный обратный итератор

Возвращает:
* const_reverse_iterator

# ::stappler::memory::basic_string<typename>::crbegin() const

## BRIEF

Возвращает начальный обратный итератор

## CONTENT

Доступ: public

Возвращает начальный обратный итератор

Возвращает:
* const_reverse_iterator

# ::stappler::memory::basic_string<typename>::crend() const

## BRIEF

Возвращает конечный обратный итератор

## CONTENT

Доступ: public

Возвращает конечный обратный итератор

Возвращает:
* const_reverse_iterator

# ::stappler::memory::basic_string<typename>::size() const

## BRIEF

Возвращает длину строки

## CONTENT

Доступ: public

Возвращает длину строки

Возвращает:
* size_type

# ::stappler::memory::basic_string<typename>::length() const

## BRIEF

Возвращает длину строки

## CONTENT

Доступ: public

Возвращает длину строки

Возвращает:
* size_type

# ::stappler::memory::basic_string<typename>::capacity() const

## BRIEF

Возвращает текущую вместимость строки

## CONTENT

Доступ: public

Возвращает текущую вместимость строки

Возвращает:
* size_type

# ::stappler::memory::basic_string<typename>::reserve(stappler::memory::basic_string::size_type)

## BRIEF

Резервирует память под определённое число символов

## CONTENT

Доступ: public

Резервирует память под определённое число символов

Параметры:
* stappler::memory::basic_string::size_type


# ::stappler::memory::basic_string<typename>::resize(stappler::memory::basic_string::size_type)

## BRIEF

Изменяет размер строки

## CONTENT

Доступ: public

Изменяет размер строки. Если строка увеличивается, содержимое новых символов не определено.

Параметры:
* stappler::memory::basic_string::size_type - новый размер строки


# ::stappler::memory::basic_string<typename>::resize(stappler::memory::basic_string::size_type,stappler::memory::basic_string::charT)

## BRIEF

Изменяет размер строки

## CONTENT

Доступ: public

Изменяет размер строки. Если строка увеличивается, новые символы запоняются указанным символом.

Параметры:
* stappler::memory::basic_string::size_type - новый размер строки
* stappler::memory::basic_string::charT - символ для заполнения


# ::stappler::memory::basic_string<typename>::clear()

## BRIEF

Очищает строку

## CONTENT

Доступ: public

Очищает строку


# ::stappler::memory::basic_string<typename>::empty() const

## BRIEF

Проверяет строку на пустоту

## CONTENT

Доступ: public

Проверяет строку на пустоту

Возвращает:
* bool - true если строка пуста

# ::stappler::memory::basic_string<typename>::shrink_to_fit()

## BRIEF

Возвращает системе память, не требуемую для хранения строки

## CONTENT

Доступ: public

Возвращает системе память, не требуемую для хранения строки. Если вместимость превышает длину, предыдущий выделенный блок памяти возвращается системе, под строку выделяется новый.


# ::stappler::memory::basic_string<typename>::operator[](stappler::memory::basic_string::size_type)

## BRIEF

Получает доступ к символу по индексу

## CONTENT

Доступ: public

Получает доступ к символу по индексу. Попытка получить доступ к символу вне строки ведёт к неопределённому поведению.

Параметры:
* stappler::memory::basic_string::size_type

Возвращает:
* reference

# ::stappler::memory::basic_string<typename>::operator[](stappler::memory::basic_string::size_type) const

## BRIEF

Получает доступ к символу по индексу

## CONTENT

Доступ: public

Получает доступ к символу по индексу. Попытка получить доступ к символу вне строки ведёт к неопределённому поведению.

Параметры:
* stappler::memory::basic_string::size_type

Возвращает:
* const_reference

# ::stappler::memory::basic_string<typename>::at(stappler::memory::basic_string::size_type)

## BRIEF

Получает доступ к символу по индексу

## CONTENT

Доступ: public

Получает доступ к символу по индексу. Попытка получить доступ к символу вне строки ведёт к неопределённому поведению.

Параметры:
* stappler::memory::basic_string::size_type

Возвращает:
* reference

# ::stappler::memory::basic_string<typename>::at(stappler::memory::basic_string::size_type) const

## BRIEF

Получает доступ к символу по индексу

## CONTENT

Доступ: public

Получает доступ к символу по индексу. Попытка получить доступ к символу вне строки ведёт к неопределённому поведению.

Параметры:
* stappler::memory::basic_string::size_type

Возвращает:
* const_reference

# ::stappler::memory::basic_string<typename>::back()

## BRIEF

Возвращает ссылку на последний символ строки

## CONTENT

Доступ: public

Возвращает ссылку на последний символ строки. Если строка пуста - ведёт к неопределённому поведению.

Возвращает:
* charT&

# ::stappler::memory::basic_string<typename>::back() const

## BRIEF

Возвращает ссылку на последний символ строки

## CONTENT

Доступ: public

Возвращает ссылку на последний символ строки. Если строка пуста - ведёт к неопределённому поведению.

Возвращает:
* charT&

# ::stappler::memory::basic_string<typename>::front()

## BRIEF

Возвращает ссылку на первый символ строки

## CONTENT

Доступ: public

Возвращает ссылку на первый символ строки. Если строка пуста - ведёт к неопределённому поведению.

Возвращает:
* charT&

# ::stappler::memory::basic_string<typename>::front() const

## BRIEF

Возвращает ссылку на первый символ строки

## CONTENT

Доступ: public

Возвращает ссылку на первый символ строки. Если строка пуста - ведёт к неопределённому поведению.

Возвращает:
* charT&

# ::stappler::memory::basic_string<typename>::append(const basic_string<CharType>&)

## BRIEF

Добавляет содержимое другой строки к строке

## CONTENT

Доступ: public

Добавляет содержимое другой строки к строке

Параметры:
* const basic_string<CharType>&

Возвращает:
* basic_string<CharType>&

# ::stappler::memory::basic_string<typename>::append(const basic_string<CharType>&,stappler::memory::basic_string::size_type,stappler::memory::basic_string::size_type)

## BRIEF

Добавляет фрагмент другой строки к строке

## CONTENT

Доступ: public

Добавляет фрагмент другой строки к строке

Параметры:
* const basic_string<CharType>& - другая строка
* stappler::memory::basic_string::size_type - начало фрагмента
* stappler::memory::basic_string::size_type - длина фрагмента

Возвращает:
* basic_string<CharType>&

# ::stappler::memory::basic_string<typename>::append(stappler::memory::basic_string::charT const*)

## BRIEF

Добавляет C-строку к строке

## CONTENT

Доступ: public

Добавляет C-строку к строке

Параметры:
* stappler::memory::basic_string::charT const*

Возвращает:
* basic_string<CharType>&

# ::stappler::memory::basic_string<typename>::append(stappler::memory::basic_string::charT const*,stappler::memory::basic_string::size_type)

## BRIEF

Добавляет C-строку указанной длины к строке

## CONTENT

Доступ: public

Добавляет C-строку указанной длины к строке

Параметры:
* stappler::memory::basic_string::charT const* - С-строка
* stappler::memory::basic_string::size_type - длина строки

Возвращает:
* basic_string<CharType>&

# ::stappler::memory::basic_string<typename>::append(stappler::memory::basic_string::size_type,stappler::memory::basic_string::charT)

## BRIEF

Добавляет несколько одинаковых символов к строке

## CONTENT

Доступ: public

Добавляет несколько одинаковых символов к строке

Параметры:
* stappler::memory::basic_string::size_type - число новых символов
* stappler::memory::basic_string::charT - символ для запонения

Возвращает:
* basic_string<CharType>&

# ::stappler::memory::basic_string<typename>::append<class>(InputIterator,InputIterator)

## BRIEF

Добавляет диапазон к строке

## CONTENT

Доступ: public

Добавляет диапазон к строке

Параметры шаблона:
* class InputIterator

Параметры:
* InputIterator - начало диапазона
* InputIterator - конец диапазона

Возвращает:
* basic_string<CharType>&

# ::stappler::memory::basic_string<typename>::append(InitializerList<stappler::memory::basic_string::charT>)

## BRIEF

Добавляет символы из списка инициализации к строке

## CONTENT

Доступ: public

Добавляет символы из списка инициализации к строке

Параметры:
* InitializerList<stappler::memory::basic_string::charT>

Возвращает:
* basic_string<CharType>&

# ::stappler::memory::basic_string<typename>::operator+=(const basic_string<CharType>&)

## BRIEF

Добавляет содержимое другой строки к строке

## CONTENT

Доступ: public

Добавляет содержимое другой строки к строке

Параметры:
* const basic_string<CharType>&

Возвращает:
* basic_string<CharType>&

# ::stappler::memory::basic_string<typename>::operator+=(stappler::memory::basic_string::charT const*)

## BRIEF

Добавляет С-строку к строке

## CONTENT

Доступ: public

Добавляет С-строку к строке

Параметры:
* stappler::memory::basic_string::charT const*

Возвращает:
* basic_string<CharType>&

# ::stappler::memory::basic_string<typename>::operator+=(stappler::memory::basic_string::charT)

## BRIEF

Добавляет символ к строке

## CONTENT

Доступ: public

Добавляет символ к строке

Параметры:
* stappler::memory::basic_string::charT

Возвращает:
* basic_string<CharType>&

# ::stappler::memory::basic_string<typename>::operator+=(InitializerList<stappler::memory::basic_string::charT>)

## BRIEF

Добавляет символы из списка инициализации к строке

## CONTENT

Доступ: public

Добавляет символы из списка инициализации к строке

Параметры:
* InitializerList<stappler::memory::basic_string::charT>

Возвращает:
* basic_string<CharType>&

# ::stappler::memory::basic_string<typename>::assign(const basic_string<CharType>&)

## BRIEF

Заменяет строку копией другой

## CONTENT

Доступ: public

Заменяет строку копией другой

Параметры:
* const basic_string<CharType>&

Возвращает:
* basic_string<CharType>&

# ::stappler::memory::basic_string<typename>::assign(const basic_string<CharType>&,stappler::memory::basic_string::size_type,stappler::memory::basic_string::size_type)

## BRIEF

Заменяет строку копией фрагмента другой

## CONTENT

Доступ: public

Заменяет строку копией фрагмента другой

Параметры:
* const basic_string<CharType>& - другая строка
* stappler::memory::basic_string::size_type - смещение фрагмента
* stappler::memory::basic_string::size_type - длина фрагмента

Возвращает:
* basic_string<CharType>&

# ::stappler::memory::basic_string<typename>::assign(stappler::memory::basic_string::charT const*)

## BRIEF

Заменяет строку копией С-строки

## CONTENT

Доступ: public

Заменяет строку копией С-строки

Параметры:
* stappler::memory::basic_string::charT const*

Возвращает:
* basic_string<CharType>&

# ::stappler::memory::basic_string<typename>::assign(stappler::memory::basic_string::charT const*,stappler::memory::basic_string::size_type)

## BRIEF

Заменяет строку копией С-строки определённой длины

## CONTENT

Доступ: public

Заменяет строку копией С-строки определённой длины

Параметры:
* stappler::memory::basic_string::charT const* - С-строка
* stappler::memory::basic_string::size_type - длина строки

Возвращает:
* basic_string<CharType>&

# ::stappler::memory::basic_string<typename>::assign(stappler::memory::basic_string::size_type,stappler::memory::basic_string::charT)

## BRIEF

Заменяет строку фрагментом, заполненным одним символа

## CONTENT

Доступ: public

Параметры:
* stappler::memory::basic_string::size_type - длина фрагмента
* stappler::memory::basic_string::charT - символ для заполнения

Возвращает:
* basic_string<CharType>&

# ::stappler::memory::basic_string<typename>::assign<class>(InputIterator,InputIterator)

## BRIEF

Заменяет строку копией диапазона

## CONTENT

Доступ: public

Заменяет строку копией диапазона

Параметры шаблона:
* class InputIterator

Параметры:
* InputIterator - начало диапазона
* InputIterator - конец диапазона

Возвращает:
* basic_string<CharType>&

# ::stappler::memory::basic_string<typename>::assign(InitializerList<stappler::memory::basic_string::charT>)

## BRIEF

Заменяет строку копией символов из списка инициализации

## CONTENT

Доступ: public

Заменяет строку копией символов из списка инициализации

Параметры:
* InitializerList<stappler::memory::basic_string::charT>

Возвращает:
* basic_string<CharType>&

# ::stappler::memory::basic_string<typename>::assign(basic_string<CharType>&&)

## BRIEF

Заменяет строку перемещённой строкой

## CONTENT

Доступ: public

Заменяет строку перемещённой строкой. Перемещение возможно только если аллокаторы совпадают, иначе копирует строку.

Параметры:
* basic_string<CharType>&&

Возвращает:
* basic_string<CharType>&

# ::stappler::memory::basic_string<typename>::push_back(CharType)

## BRIEF

Добавляет символ в конец строки

## CONTENT

Доступ: public

Добавляет символ в конец строки

Параметры:
* CharType


# ::stappler::memory::basic_string<typename>::emplace_back(CharType)

## BRIEF

Добавляет символ в конец строки

## CONTENT

Доступ: public

Добавляет символ в конец строки

Параметры:
* CharType


# ::stappler::memory::basic_string<typename>::pop_back()

## BRIEF

Убирает последний символ из строки

## CONTENT

Доступ: public

Убирает последний символ из строки. Если строка пуста - поведение не определено

# ::stappler::memory::basic_string<typename>::insert(stappler::memory::basic_string::size_type,const basic_string<CharType>&)

## BRIEF

Вставляет строку по определённой позиции

## CONTENT

Доступ: public

Вставляет строку по определённой позиции. Если позиция вне строки - поведение не определено

Параметры:
* stappler::memory::basic_string::size_type - позиция в текущей строке для вставки
* const basic_string<CharType>& - строка для вставки

Возвращает:
* basic_string<CharType>&

# ::stappler::memory::basic_string<typename>::insert(stappler::memory::basic_string::size_type,const basic_string<CharType>&,stappler::memory::basic_string::size_type,stappler::memory::basic_string::size_type)

## BRIEF

Вставляет фрагмент строки по определённой позиции

## CONTENT

Доступ: public

Вставляет фрагмент строки по определённой позиции. Если позиция вне строки - поведение не определено

Параметры:
* stappler::memory::basic_string::size_type - позиция в текущей строке для вставки
* const basic_string<CharType>& - строка для вставки
* stappler::memory::basic_string::size_type - начало фрагмента
* stappler::memory::basic_string::size_type - длина фрагмента

Возвращает:
* basic_string<CharType>&

# ::stappler::memory::basic_string<typename>::insert(stappler::memory::basic_string::size_type,stappler::memory::basic_string::charT const*)

## BRIEF

Вставляет С-строку по определённой позиции

## CONTENT

Доступ: public

Вставляет С-строку по определённой позиции. Если позиция вне строки - поведение не определено

Параметры:
* stappler::memory::basic_string::size_type - позиция в текущей строке для вставки
* stappler::memory::basic_string::charT const* - С-строка

Возвращает:
* basic_string<CharType>&

# ::stappler::memory::basic_string<typename>::insert(stappler::memory::basic_string::size_type,stappler::memory::basic_string::charT const*,stappler::memory::basic_string::size_type)

## BRIEF

Вставляет С-строку по определённой позиции

## CONTENT

Доступ: public

Вставляет С-строку по определённой позиции. Если позиция вне строки - поведение не определено

Параметры:
* stappler::memory::basic_string::size_type - позиция в текущей строке для вставки
* stappler::memory::basic_string::charT const* - С-строка
* stappler::memory::basic_string::size_type - длина строки

Возвращает:
* basic_string<CharType>&

# ::stappler::memory::basic_string<typename>::insert(stappler::memory::basic_string::size_type,stappler::memory::basic_string::size_type,stappler::memory::basic_string::charT)

## BRIEF

Вставляет строку, заполненную символом, по определённой позиции

## CONTENT

Доступ: public

Вставляет строку, заполненную символом, по определённой позиции. Если позиция вне строки - поведение не определено

Параметры:
* stappler::memory::basic_string::size_type - позиция для вставки
* stappler::memory::basic_string::size_type - длина фрагмента
* stappler::memory::basic_string::charT - символ для заполнения

Возвращает:
* basic_string<CharType>&

# ::stappler::memory::basic_string<typename>::insert(stappler::memory::basic_string::const_iterator,stappler::memory::basic_string::size_type,stappler::memory::basic_string::charT)

## BRIEF

Вставляет строку, заполненную символом, по итератору

## CONTENT

Доступ: public

Параметры:
* stappler::memory::basic_string::const_iterator - позиция для вставки
* stappler::memory::basic_string::size_type - длина фрагмента
* stappler::memory::basic_string::charT - символ для заполнения

Возвращает:
* iterator - итератор на месте вставки

# ::stappler::memory::basic_string<typename>::insert(stappler::memory::basic_string::const_iterator,stappler::memory::basic_string::charT)

## BRIEF

Вставляет символ по итератору

## CONTENT

Доступ: public

Вставляет символ по итератору

Параметры:
* stappler::memory::basic_string::const_iterator - позиция для вставки
* stappler::memory::basic_string::charT - символ

Возвращает:
* iterator - итератор на месте вставки

# ::stappler::memory::basic_string<typename>::insert<class>(stappler::memory::basic_string::const_iterator,InputIt,InputIt)

## BRIEF

Вставляет диапазон символов по итератору

## CONTENT

Доступ: public

Вставляет диапазон символов по итератору

Параметры шаблона:
* class InputIt

Параметры:
* stappler::memory::basic_string::const_iterator - позиция для вставки
* InputIt - начало диапазона
* InputIt - конец диапазона

Возвращает:
* iterator - итератор по месту вставки

# ::stappler::memory::basic_string<typename>::insert(stappler::memory::basic_string::const_iterator,std::initializer_list<charT>)

## BRIEF

Вставляет символы из списка инициализации по итератору

## CONTENT

Доступ: public

Вставляет символы из списка инициализации по итератору

Параметры:
* stappler::memory::basic_string::const_iterator - позиция для вставки
* std::initializer_list<charT>

Возвращает:
* iterator - итератор по месту вставки

# ::stappler::memory::basic_string<typename>::erase(stappler::memory::basic_string::size_type,stappler::memory::basic_string::size_type)

## BRIEF

Удаляет символы из строки

## CONTENT

Доступ: public

Удаляет символы из строки. Если сегмент удаления вне строки - поведение не определено

Параметры:
* stappler::memory::basic_string::size_type - начало сегмента
* stappler::memory::basic_string::size_type - длина сегмента

Возвращает:
* basic_string<CharType>&

# ::stappler::memory::basic_string<typename>::erase(stappler::memory::basic_string::const_iterator)

## BRIEF

Удаляет символ из строки по итератору

## CONTENT

Доступ: public

Удаляет символ из строки по итератору

Параметры:
* stappler::memory::basic_string::const_iterator

Возвращает:
* iterator - итератор на позиции удаления

# ::stappler::memory::basic_string<typename>::erase(stappler::memory::basic_string::const_iterator,stappler::memory::basic_string::const_iterator)

## BRIEF

Удаляет диапазон символов по итератору

## CONTENT

Доступ: public

Удаляет диапазон символов по итератору

Параметры:
* stappler::memory::basic_string::const_iterator - начало диапазона
* stappler::memory::basic_string::const_iterator - конец диапазона

Возвращает:
* iterator - итератор на позиции удаления

# ::stappler::memory::basic_string<typename>::replace(stappler::memory::basic_string::size_type,stappler::memory::basic_string::size_type,const basic_string<CharType>&)

## BRIEF

Заменяет символы сегмента строкой

## CONTENT

Доступ: public

Заменяет символы сегмента строкой. Если сегмент вне строки - поведение не определено.

Параметры:
* stappler::memory::basic_string::size_type - начало сегмента для замены
* stappler::memory::basic_string::size_type - конец сегмента для замены
* const basic_string<CharType>& - строка для замены

Возвращает:
* basic_string<CharType>& - ссылка на себя

# ::stappler::memory::basic_string<typename>::replace(stappler::memory::basic_string::const_iterator,stappler::memory::basic_string::const_iterator,const basic_string<CharType>&)

## BRIEF

Заменяет символы диапазона строкой

## CONTENT

Доступ: public

Заменяет символы диапазона строкой

Параметры:
* stappler::memory::basic_string::const_iterator - начало диапазона
* stappler::memory::basic_string::const_iterator - конец диапазона
* const basic_string<CharType>& - строка для замены

Возвращает:
* basic_string<CharType>& - ссылку на себя

# ::stappler::memory::basic_string<typename>::replace(stappler::memory::basic_string::size_type,stappler::memory::basic_string::size_type,const basic_string<CharType>&,stappler::memory::basic_string::size_type,stappler::memory::basic_string::size_type)

## BRIEF

Заменяет символы сегмента фрагментом другой строки

## CONTENT

Доступ: public

Заменяет символы сегмента фрагментом другой строки. Если сегмент вне строки - поведение не определено.

Параметры:
* stappler::memory::basic_string::size_type - начало сегмента для замены
* stappler::memory::basic_string::size_type - длина сегмента для замены
* const basic_string<CharType>& - другая строка
* stappler::memory::basic_string::size_type - начало фрагмента для вставки
* stappler::memory::basic_string::size_type - длина фрагмента для вставки

Возвращает:
* basic_string<CharType>& - ссылка на себя

# ::stappler::memory::basic_string<typename>::replace(stappler::memory::basic_string::size_type,stappler::memory::basic_string::size_type,stappler::memory::basic_string::charT const*)

## BRIEF

Заменяет сегмент С-строкой

## CONTENT

Доступ: public

Заменяет сегмент С-строкой

Параметры:
* stappler::memory::basic_string::size_type - начало сегмента для замены
* stappler::memory::basic_string::size_type - длина сегмента для замены
* stappler::memory::basic_string::charT const* - С-строка

Возвращает:
* basic_string<CharType>& - ссылка на себя

# ::stappler::memory::basic_string<typename>::replace(stappler::memory::basic_string::const_iterator,stappler::memory::basic_string::const_iterator,stappler::memory::basic_string::charT const*)

## BRIEF

Заменяет диапазон С-строкой

## CONTENT

Доступ: public

Заменяет диапазон С-строкой

Параметры:
* stappler::memory::basic_string::const_iterator - начало диапазона
* stappler::memory::basic_string::const_iterator - конец диапазона
* stappler::memory::basic_string::charT const* - С-строка

Возвращает:
* basic_string<CharType>& - ссылка на себя

# ::stappler::memory::basic_string<typename>::replace(stappler::memory::basic_string::size_type,stappler::memory::basic_string::size_type,stappler::memory::basic_string::charT const*,stappler::memory::basic_string::size_type)

## BRIEF

Заменяет сегмент С-строкой

## CONTENT

Доступ: public

Заменяет сегмент С-строкой. Если сегмент вне строки - поведение не определено.

Параметры:
* stappler::memory::basic_string::size_type - начало сегмента для замены
* stappler::memory::basic_string::size_type - длина сегмента для замены
* stappler::memory::basic_string::charT const* - С-строка
* stappler::memory::basic_string::size_type - длина строки

Возвращает:
* basic_string<CharType>& - ссылка на себя

# ::stappler::memory::basic_string<typename>::replace(stappler::memory::basic_string::const_iterator,stappler::memory::basic_string::const_iterator,stappler::memory::basic_string::charT const*,stappler::memory::basic_string::size_type)

## BRIEF

Заменяет диапазон С-строкой

## CONTENT

Доступ: public

Заменяет диапазон С-строкой

Параметры:
* stappler::memory::basic_string::const_iterator - начало диапазона
* stappler::memory::basic_string::const_iterator - конец диапазона
* stappler::memory::basic_string::charT const* - С-строка
* stappler::memory::basic_string::size_type - длина строки

Возвращает:
* basic_string<CharType>& - ссылка на себя

# ::stappler::memory::basic_string<typename>::replace(stappler::memory::basic_string::size_type,stappler::memory::basic_string::size_type,stappler::memory::basic_string::size_type,stappler::memory::basic_string::charT)

## BRIEF

Заменяет сегмент строки блоком, заполненным символом

## CONTENT

Доступ: public

Заменяет сегмент строки блоком, заполненным символом

Параметры:
* stappler::memory::basic_string::size_type - начало сегмента для замены
* stappler::memory::basic_string::size_type - длина сегмента
* stappler::memory::basic_string::size_type - длина блока для вставки
* stappler::memory::basic_string::charT - символ для заполнения блока для вставки

Возвращает:
* basic_string<CharType>& - ссылка на себя

# ::stappler::memory::basic_string<typename>::replace(stappler::memory::basic_string::const_iterator,stappler::memory::basic_string::const_iterator,stappler::memory::basic_string::size_type,stappler::memory::basic_string::charT)

## BRIEF

Заменяет диапазон строки блоком, заполненным символом

## CONTENT

Доступ: public

Заменяет диапазон строки блоком, заполненным символом

Параметры:
* stappler::memory::basic_string::const_iterator - начало диапазона
* stappler::memory::basic_string::const_iterator - конец диапазона
* stappler::memory::basic_string::size_type - длина блока для вставки
* stappler::memory::basic_string::charT - символ для заполнения блока для вставки

Возвращает:
* basic_string<CharType>& - ссылка на себя

# ::stappler::memory::basic_string<typename>::replace<class>(stappler::memory::basic_string::const_iterator,stappler::memory::basic_string::const_iterator,InputIt,InputIt)

## BRIEF

Заменяет диапазон строки диапазоном из итераторов

## CONTENT

Доступ: public

Заменяет диапазон строки диапазоном из итераторов

Параметры шаблона:
* class InputIt

Параметры:
* stappler::memory::basic_string::const_iterator - начало диапазона для замены
* stappler::memory::basic_string::const_iterator - конец диапазона для замены
* InputIt - начало диапазона для вставки
* InputIt - конец диапазона для вставки

Возвращает:
* basic_string<CharType>& - ссылка на себя

# ::stappler::memory::basic_string<typename>::replace(stappler::memory::basic_string::const_iterator,stappler::memory::basic_string::const_iterator,InitializerList<stappler::memory::basic_string::charT>)

## BRIEF

Заменяет диапазон строки символами из списка инициализации

## CONTENT

Доступ: public

Заменяет диапазон строки символами из списка инициализации

Параметры:
* stappler::memory::basic_string::const_iterator - начало диапазона для замены
* stappler::memory::basic_string::const_iterator - конец диапазона для замены
* InitializerList<stappler::memory::basic_string::charT>

Возвращает:
* basic_string<CharType>& - ссылка на себя

# ::stappler::memory::basic_string<typename>::c_str() const

## BRIEF

Возвращает указатель на данные строки

## CONTENT

Доступ: public

Возвращает указатель на данные строки

Возвращает:
* charT*

# ::stappler::memory::basic_string<typename>::data() const

## BRIEF

Возвращает указатель на данные строки

## CONTENT

Доступ: public

Возвращает указатель на данные строки

Возвращает:
* charT*

# ::stappler::memory::basic_string<typename>::data()

## BRIEF

Возвращает указатель на данные строки

## CONTENT

Доступ: public

Возвращает указатель на данные строки

Возвращает:
* charT*

# ::stappler::memory::basic_string<typename>::copy(stappler::memory::basic_string::charT*,stappler::memory::basic_string::size_type,stappler::memory::basic_string::size_type) const

## BRIEF

Копирует фрагмент строки в подготовленный буфер

## CONTENT

Доступ: public

Копирует фрагмент строки в подготовленный буфер. Длины буфера должно быть достаточно для копирования. Если фрагмент вне строки - поведение не определено.

Параметры:
* stappler::memory::basic_string::charT* - буфер для копирования
* stappler::memory::basic_string::size_type - начало фрагмента
* stappler::memory::basic_string::size_type - длина фрагмента

Возвращает:
* size_type

# ::stappler::memory::basic_string<typename>::substr(stappler::memory::basic_string::size_type,stappler::memory::basic_string::size_type) const

## BRIEF

Возвращает подстроку

## CONTENT

Доступ: public

Возвращает подстроку. Если фрагмент для подстроки вне строки - поведение не определено

Параметры:
* stappler::memory::basic_string::size_type - начало подстроки
* stappler::memory::basic_string::size_type - длина подстроки

Возвращает:
* basic_string<CharType>

# ::stappler::memory::basic_string<typename>::find(stappler::memory::basic_string::charT const*,stappler::memory::basic_string::size_type,stappler::memory::basic_string::size_type) const

## BRIEF

Ищет подстроку, начиная с позиции

## CONTENT

Доступ: public

Ищет подстроку, начиная с позиции

Параметры:
* stappler::memory::basic_string::charT const* - начало подстроки для поиска
* stappler::memory::basic_string::size_type - начальная позиция поиска
* stappler::memory::basic_string::size_type - длина строки для поиска

Возвращает:
* size_type - позиция подстроки в строке или npos

# ::stappler::memory::basic_string<typename>::find(stappler::memory::basic_string::charT,stappler::memory::basic_string::size_type) const

## BRIEF

Ищет символ, начиная с позиции

## CONTENT

Доступ: public

Ищет символ, начиная с позиции

Параметры:
* stappler::memory::basic_string::charT - символ для поиска
* stappler::memory::basic_string::size_type - начальная позиция поиска

Возвращает:
* size_type - позиция символа в строке или npos

# ::stappler::memory::basic_string<typename>::rfind(stappler::memory::basic_string::charT const*,stappler::memory::basic_string::size_type,stappler::memory::basic_string::size_type) const

## BRIEF

Ищет подстроку, начиная с определённой позиции, в обратном порядке

## CONTENT

Доступ: public

Ищет подстроку, начиная с определённой позиции, в обратном порядке

Параметры:
* stappler::memory::basic_string::charT const* - строка для поиска
* stappler::memory::basic_string::size_type - начальная позиция поиска. Поиск проводится в подстроке до этой позиции
* stappler::memory::basic_string::size_type - длина строки для поиска

Возвращает:
* size_type- позиция подстроки в строке или npos

# ::stappler::memory::basic_string<typename>::rfind(stappler::memory::basic_string::charT,stappler::memory::basic_string::size_type) const

## BRIEF

Ищет символ, начиная с позиции, в обратном порядке

## CONTENT

Доступ: public

Ищет символ, начиная с позиции, в обратном порядке

Параметры:
* stappler::memory::basic_string::charT - символ для поиска
* stappler::memory::basic_string::size_type - начальная позиция поиска. Поиск проводится в подстроке до этой позиции

Возвращает:
* size_type - позиция символа в строке или npos

# ::stappler::memory::basic_string<typename>::find_first_of(stappler::memory::basic_string::charT const*,stappler::memory::basic_string::size_type,stappler::memory::basic_string::size_type) const

## BRIEF

Находит первый символ, равный одному из символов переданной последовательности

## CONTENT

Доступ: public

Находит первый символ, равный одному из символов переданной последовательности

Параметры:
* stappler::memory::basic_string::charT const* - указатель на последовательность символов
* stappler::memory::basic_string::size_type - начальная позиция поиска
* stappler::memory::basic_string::size_type - длина последовательности

Возвращает:
* size_type - позиция символа в строке или npos

# ::stappler::memory::basic_string<typename>::find_last_of(stappler::memory::basic_string::charT const*,stappler::memory::basic_string::size_type,stappler::memory::basic_string::size_type) const

## BRIEF

Находит последний символ, равный одному из символов переданной последовательности

## CONTENT

Доступ: public

Находит последний символ, равный одному из символов переданной последовательности. Поиск работает в обратную сторону, то есть, начальная позиция поиска - конец подстроки для поиска.

Параметры:
* stappler::memory::basic_string::charT const* - указатель на последовательность символов
* stappler::memory::basic_string::size_type - начальная позиция поиска
* stappler::memory::basic_string::size_type - длина последовательности

Возвращает:
* size_type - позиция символа в строке или npos

# ::stappler::memory::basic_string<typename>::find_first_not_of(stappler::memory::basic_string::charT const*,stappler::memory::basic_string::size_type,stappler::memory::basic_string::size_type) const

## BRIEF

Находит первый символ, которого нет в переданной последовательности

## CONTENT

Доступ: public

Находит первый символ, которого нет в переданной последовательности

Параметры:
* stappler::memory::basic_string::charT const* - указатель на последовательность символов
* stappler::memory::basic_string::size_type - начальная позиция поиска
* stappler::memory::basic_string::size_type - длина последовательности

Возвращает:
* size_type - позиция символа в строке или npos

# ::stappler::memory::basic_string<typename>::find_first_not_of(stappler::memory::basic_string::charT,stappler::memory::basic_string::size_type) const

## BRIEF

Находит первый символ, не равный переданному

## CONTENT

Доступ: public

Находит первый символ, не равный переданному

Параметры:
* stappler::memory::basic_string::charT - символ для проверки
* stappler::memory::basic_string::size_type - начальная позиция поиска

Возвращает:
* size_type

# ::stappler::memory::basic_string<typename>::find_last_not_of(stappler::memory::basic_string::charT const*,stappler::memory::basic_string::size_type,stappler::memory::basic_string::size_type) const

## BRIEF

Находит последний символ, которого нет в переданной последовательности символов.

## CONTENT

Доступ: public

Находит последний символ, которого нет в переданной последовательности символов. Поиск работает в обратную сторону, то есть, начальная позиция поиска - конец подстроки для поиска.

Параметры:
* stappler::memory::basic_string::charT const* - указатель на последовательность символов
* stappler::memory::basic_string::size_type - начальная позиция поиска
* stappler::memory::basic_string::size_type - длина последовательности

Возвращает:
* size_type - позиция символа в строке или npos

# ::stappler::memory::basic_string<typename>::find_last_not_of(stappler::memory::basic_string::charT,stappler::memory::basic_string::size_type) const

## BRIEF

Находит последний символ, не равный переданному

## CONTENT

Доступ: public

Находит последний символ, не равный переданному. Поиск работает в обратную сторону, то есть, начальная позиция поиска - конец подстроки для поиска.

Параметры:
* stappler::memory::basic_string::charT - символ для проверки
* stappler::memory::basic_string::size_type - начальная позиция поиска

Возвращает:
* size_type - позиция символа в строке или npos

# ::stappler::memory::basic_string<typename>::find(const basic_string<CharType>&,stappler::memory::basic_string::size_type) const

## BRIEF

Находит вхождение подстроки в строке

## CONTENT

Доступ: public

Находит вхождение подстроки в строке

Параметры:
* const basic_string<CharType>& - подстрока для поиска
* stappler::memory::basic_string::size_type - начальная позиция поиска

Возвращает:
* size_type - позиция символа в строке или npos

# ::stappler::memory::basic_string<typename>::find(stappler::memory::basic_string::charT const*,stappler::memory::basic_string::size_type) const

## BRIEF

Находит вхождение подстроки в строке

## CONTENT

Доступ: public

Находит вхождение подстроки в строке

Параметры:
* stappler::memory::basic_string::charT const* - подстрока для поиска
* stappler::memory::basic_string::size_type - начальная позиция поиска

Возвращает:
* size_type - позиция символа в строке или npos
* 

# ::stappler::memory::basic_string<typename>::rfind(const basic_string<CharType>&,stappler::memory::basic_string::size_type) const

## BRIEF

Находит вхождение подстроки в строке в обратном порядке

## CONTENT

Доступ: public

Находит вхождение подстроки в строке в обратном порядке. Поиск ведётся от начальной позиции поиска к началу строки.

Параметры:
* const basic_string<CharType>& - подстрока для поиска
* stappler::memory::basic_string::size_type - начальная позиция

Возвращает:
* size_type- позиция символа в строке или npos 

# ::stappler::memory::basic_string<typename>::rfind(stappler::memory::basic_string::charT const*,stappler::memory::basic_string::size_type) const

## BRIEF

Находит вхождение подстроки в строке в обратном порядке

## CONTENT

Доступ: public

Находит вхождение подстроки в строке в обратном порядке. Поиск ведётся от начальной позиции поиска к началу строки.

Параметры:
* stappler::memory::basic_string::charT const*- подстрока для поиска
* stappler::memory::basic_string::size_type - начальная позиция

Возвращает:
* size_type- позиция символа в строке или npos 

# ::stappler::memory::basic_string<typename>::find_first_of(const basic_string<CharType>&,stappler::memory::basic_string::size_type) const

## BRIEF

Находит первый символ, входящий в переданную последовательность

## CONTENT

Доступ: public

Находит первый символ, входящий в переданную последовательность

Параметры:
* const basic_string<CharType>& - последовательность для поиска
* stappler::memory::basic_string::size_type - начальная позиция поиска

Возвращает:
* size_type- позиция символа в строке или npos 

# ::stappler::memory::basic_string<typename>::find_first_of(stappler::memory::basic_string::charT const*,stappler::memory::basic_string::size_type) const

## BRIEF

Находит первый символ, входящий в переданную последовательность

## CONTENT

Доступ: public

Находит первый символ, входящий в переданную последовательность

Параметры:
* stappler::memory::basic_string::charT const* - последовательность для поиска
* stappler::memory::basic_string::size_type - начальная позиция поиска

Возвращает:
* size_type - позиция символа в строке или npos 

# ::stappler::memory::basic_string<typename>::find_first_of(stappler::memory::basic_string::charT,stappler::memory::basic_string::size_type) const

## BRIEF

Находит первый символ, равный переданному

## CONTENT

Доступ: public

Находит первый символ, равный переданному

Параметры:
* stappler::memory::basic_string::charT - символ для поиска
* stappler::memory::basic_string::size_type - начальная позиция поиска

Возвращает:
* size_type - позиция символа в строке или npos 

# ::stappler::memory::basic_string<typename>::find_last_of(const basic_string<CharType>&,stappler::memory::basic_string::size_type) const

## BRIEF

Находит последний символ, входящий в последовательность

## CONTENT

Доступ: public

Находит последний символ, входящий в последовательность. Поиск работает в обратном порядке, то есть, от начальной позиции к началу строки.

Параметры:
* const basic_string<CharType>& - последовательность для поиска
* stappler::memory::basic_string::size_type - начальная позиция поиска

Возвращает:
* size_type - позиция символа в строке или npos 


# ::stappler::memory::basic_string<typename>::find_last_of(stappler::memory::basic_string::charT const*,stappler::memory::basic_string::size_type) const

## BRIEF

Находит последний символ, входящий в последовательность

## CONTENT

Доступ: public

Находит последний символ, входящий в последовательность. Поиск работает в обратном порядке, то есть, от начальной позиции к началу строки.

Параметры:
* stappler::memory::basic_string::charT const* - последовательность для поиска
* stappler::memory::basic_string::size_type - начальная позиция поиска

Возвращает:
* size_type - позиция символа в строке или npos 

# ::stappler::memory::basic_string<typename>::find_last_of(stappler::memory::basic_string::charT,stappler::memory::basic_string::size_type) const

## BRIEF

Находит последний символ, равный переданному

## CONTENT

Доступ: public

Находит последний символ, равный переданному. Поиск работает в обратном порядке, то есть, от начальной позиции к началу строки.

Параметры:
* stappler::memory::basic_string::charT - символ для поиска
* stappler::memory::basic_string::size_type - начальная позиция поиска

Возвращает:
* size_type - позиция символа в строке или npos 

# ::stappler::memory::basic_string<typename>::find_first_not_of(const basic_string<CharType>&,stappler::memory::basic_string::size_type) const

## BRIEF

Находит первый символ, не входящий в переданную последовательность

## CONTENT

Доступ: public

Находит первый символ, не входящий в переданную последовательность

Параметры:
* const basic_string<CharType>& - последовательность символов для поиска
* stappler::memory::basic_string::size_type - начальная позиция поиска

Возвращает:
* size_type - позиция символа в строке или npos 

# ::stappler::memory::basic_string<typename>::find_first_not_of(stappler::memory::basic_string::charT const*,stappler::memory::basic_string::size_type) const

## BRIEF

Находит первый символ, не входящий в переданную последовательность

## CONTENT

Доступ: public

Находит первый символ, не входящий в переданную последовательность

Параметры:
* stappler::memory::basic_string::charT const* - последовательность символов для поиска
* stappler::memory::basic_string::size_type - начальная позиция поиска

Возвращает:
* size_type - позиция символа в строке или npos 

# ::stappler::memory::basic_string<typename>::find_last_not_of(const basic_string<CharType>&,stappler::memory::basic_string::size_type) const

## BRIEF

Находит последний символ, не входящий в переданную последовательность

## CONTENT

Доступ: public

Находит последний символ, не входящий в переданную последовательность. Поиск работает в обратном порядке, то есть, от начальной позиции к началу строки.

Параметры:
* const basic_string<CharType>& - последовательность символов для поиска
* stappler::memory::basic_string::size_type - начальная позиция поиска

Возвращает:
* size_type - позиция символа в строке или npos 

# ::stappler::memory::basic_string<typename>::find_last_not_of(stappler::memory::basic_string::charT const*,stappler::memory::basic_string::size_type) const

## BRIEF

Находит последний символ, не входящий в переданную последовательность

## CONTENT

Доступ: public

Находит последний символ, не входящий в переданную последовательность. Поиск работает в обратном порядке, то есть, от начальной позиции к началу строки.

Параметры:
* stappler::memory::basic_string::charT const* - последовательность символов для поиска
* stappler::memory::basic_string::size_type - начальная позиция поиска

Возвращает:
* size_type - позиция символа в строке или npos


# ::stappler::memory::basic_string<typename>::compare(const basic_string<CharType>&) const

## BRIEF

Лексикографически сравнивает две строки

## CONTENT

Доступ: public

Лексикографически сравнивает две строки. Использует `traits_type::compare`

Параметры:
* const basic_string<CharType>&

Возвращает:
* int - 0 если строки равны, -1 если текущая меньше, +1 если текущая больше

# ::stappler::memory::basic_string<typename>::compare(stappler::memory::basic_string::size_type,stappler::memory::basic_string::size_type,const basic_string<CharType>&) const

## BRIEF

Лексикографически сравнивает фрагмент строки с другой строкой

## CONTENT

Доступ: public

Лексикографически сравнивает фрагмент строки с другой строкой. Если фрагмент вне строки - поведение не определено

Параметры:
* stappler::memory::basic_string::size_type - начало фрагмента
* stappler::memory::basic_string::size_type - длина фрагмента
* const basic_string<CharType>& - другая строка

Возвращает:
* int - 0 если строки равны, -1 если текущая меньше, +1 если текущая больше

# ::stappler::memory::basic_string<typename>::compare(stappler::memory::basic_string::size_type,stappler::memory::basic_string::size_type,const basic_string<CharType>&,stappler::memory::basic_string::size_type,stappler::memory::basic_string::size_type) const

## BRIEF

Лексикографически сравнивает фрагменты строк

## CONTENT

Доступ: public

Лексикографически сравнивает фрагменты строк. Если фрагменты вне строки - поведение не определено

Параметры:
* stappler::memory::basic_string::size_type - начало фрагмента текущей строки
* stappler::memory::basic_string::size_type - длина фрагмента текущей строки
* const basic_string<CharType>& - другая строка
* stappler::memory::basic_string::size_type - начало фрагмента другой строки
* stappler::memory::basic_string::size_type - длина фрагмента другой строки

Возвращает:
* int - 0 если строки равны, -1 если текущая меньше, +1 если текущая больше

# ::stappler::memory::basic_string<typename>::compare(stappler::memory::basic_string::charT const*) const

## BRIEF

Лексикографически сравнивает текущую строку с С-строкой

## CONTENT

Доступ: public

Лексикографически сравнивает текущую строку с С-строкой

Параметры:
* stappler::memory::basic_string::charT const*

Возвращает:
* int - 0 если строки равны, -1 если текущая меньше, +1 если текущая больше

# ::stappler::memory::basic_string<typename>::compare(stappler::memory::basic_string::size_type,stappler::memory::basic_string::size_type,stappler::memory::basic_string::charT const*) const

## BRIEF

Лексикографически сравнивает фрагмент строки с С-строкой

## CONTENT

Доступ: public

Лексикографически сравнивает фрагмент строки с С-строкой. Если фрагмент вне строки - поведение не определено

Параметры:
* stappler::memory::basic_string::size_type - начало фрагмента
* stappler::memory::basic_string::size_type - длина фрагмента
* stappler::memory::basic_string::charT const* - С-строка

Возвращает:
* int - 0 если строки равны, -1 если текущая меньше, +1 если текущая больше

# ::stappler::memory::basic_string<typename>::compare(stappler::memory::basic_string::size_type,stappler::memory::basic_string::size_type,stappler::memory::basic_string::charT const*,stappler::memory::basic_string::size_type) const

## BRIEF

Лексикографически сравнивает фрагмент строки с С-строкой

## CONTENT

Доступ: public

Лексикографически сравнивает фрагмент строки с С-строкой. Если фрагмент вне строки - поведение не определено

Параметры:
* stappler::memory::basic_string::size_type - начало фрагмента
* stappler::memory::basic_string::size_type - длина фрагмента
* stappler::memory::basic_string::charT const* - С-строка
* stappler::memory::basic_string::size_type - длина С-строки

Возвращает:
* int - 0 если строки равны, -1 если текущая меньше, +1 если текущая больше

# ::stappler::memory::basic_string<typename>::make_weak(CharType const*,stappler::memory::basic_string::allocator_type const&)

## BRIEF

Создаёт невладеющую строку, присваивая другой блок памяти

## CONTENT

Доступ: public

Создаёт невладеющую строку, присваивая другой блок памяти. Такая строка работает по принципу Copy-on-write.

Параметры:
* CharType const* - присваиваемый блок памяти
* stappler::memory::basic_string::allocator_type const& - аллокатор для строки

Возвращает:
* const basic_string<CharType> - невладеющая строка

# ::stappler::memory::basic_string<typename>::make_weak(CharType const*,stappler::memory::basic_string::size_type,stappler::memory::basic_string::allocator_type const&)

## BRIEF

Создаёт невладеющую строку, присваивая другой блок памяти

## CONTENT

Доступ: public

Создаёт невладеющую строку, присваивая другой блок памяти. Такая строка работает по принципу Copy-on-write.

Параметры:
* CharType const* - присваиваемый блок памяти
* stappler::memory::basic_string::size_type - размер присваиваемого блока памяти
* stappler::memory::basic_string::allocator_type const& - аллокатор для строки

Возвращает:
* const basic_string<CharType> - невладеющая строка

# ::stappler::memory::basic_string<typename>::assign_weak(CharType const*,stappler::memory::basic_string::size_type)

## BRIEF

Присваивает себе блок памяти, делая из текущей строки невладеющую.

## CONTENT

Доступ: public

Присваивает себе блок памяти, делая из текущей строки невладеющую. Такая строка работает по принципу Copy-on-write.

Параметры:
* CharType const* - присваиваемый блок памяти
* stappler::memory::basic_string::size_type - размер строки

Возвращает:
* basic_string<CharType>& - ссылка на себя

# ::stappler::memory::basic_string<typename>::assign_weak(CharType const*)

## BRIEF

Присваивает себе блок памяти, делая из текущей строки невладеющую.

## CONTENT

Доступ: public

Присваивает себе блок памяти, делая из текущей строки невладеющую. Такая строка работает по принципу Copy-on-write.

Параметры:
* CharType const* - присваиваемый блок памяти

Возвращает:
* basic_string<CharType>& - ссылка на себя

# ::stappler::memory::basic_string<typename>::is_weak() const

## BRIEF

Проверяет, является ли текущая строка невладеющей

## CONTENT

Доступ: public

Проверяет, является ли текущая строка невладеющей

Возвращает:
* bool - true если текущая строка невладеющая

# ::stappler::memory::basic_string<typename>::basic_string<int>(stappler::memory::basic_string::charT const(&)[N],stappler::memory::basic_string::allocator_type const&)

## BRIEF

Конструктор строки из статического массива символов

## CONTENT

Доступ: public

Конструктор строки из статического массива символов. Создаёт невладеющую строку с Copy-on-write

Параметры шаблона:
* int N - размер статического массива

Параметры:
* stappler::memory::basic_string::charT const(&)[N] - статический массив
* stappler::memory::basic_string::allocator_type const& - аллокатор


# ::stappler::memory::basic_string<typename>::basic_string<int>(stappler::memory::basic_string::charT(&)[N],stappler::memory::basic_string::allocator_type const&)

## BRIEF

Конструктор строки из статического массива символов

## CONTENT

Доступ: public

Конструктор строки из статического массива символов. Создаёт невладеющую строку с Copy-on-write

Параметры шаблона:
* int N - размер статического массива

Параметры:
* stappler::memory::basic_string::charT(&)[N] - статический массив
* stappler::memory::basic_string::allocator_type const& - аллокатор


# ::stappler::memory::basic_string<typename>::wrap(CharType*,stappler::memory::basic_string::allocator_type const&)

## BRIEF

Оборачивает С-строку, распределённую из буфера, в контейнер

## CONTENT

Доступ: public

Оборачивает С-строку, распределённую из буфера, в контейнер. Не копирует строку. Если переданный аллокатор и пул, с которой создавалась строка, не совпадают - поведение не определено. Если блоком памяти владеет другой контейнер - поведение не определено.

Параметры:
* CharType* - исходная строка
* stappler::memory::basic_string::allocator_type const& - аллокатор

Возвращает:
* basic_string<CharType> - новая строка

# ::stappler::memory::basic_string<typename>::wrap(CharType*,stappler::memory::basic_string::size_type,stappler::memory::basic_string::allocator_type const&)

## BRIEF

Оборачивает С-строку, распределённую из буфера, в контейнер

## CONTENT

Доступ: public

Оборачивает С-строку, распределённую из буфера, в контейнер. Не копирует строку. Если переданный аллокатор и пул, с которой создавалась строка, не совпадают - поведение не определено. Если блоком памяти владеет другой контейнер - поведение не определено.

Параметры:
* CharType* - исходная строка
* stappler::memory::basic_string::size_type - длина строки
* stappler::memory::basic_string::allocator_type const& - аллокатор

Возвращает:
* basic_string<CharType> - новая строка

# ::stappler::memory::basic_string<typename>::wrap(CharType*,stappler::memory::basic_string::size_type,stappler::memory::basic_string::size_type,stappler::memory::basic_string::allocator_type const&)

## BRIEF

Оборачивает С-строку, распределённую из буфера, в контейнер

## CONTENT

Доступ: public

Оборачивает С-строку, распределённую из буфера, в контейнер. Не копирует строку. Если переданный аллокатор и пул, с которой создавалась строка, не совпадают - поведение не определено. Если блоком памяти владеет другой контейнер - поведение не определено.

Параметры:
* CharType* - исходная строка
* stappler::memory::basic_string::size_type - длина строки
* stappler::memory::basic_string::size_type - размер распределённого блока памяти в символах
* stappler::memory::basic_string::allocator_type const& - аллокатор

Возвращает:
* basic_string<CharType> - новая строка

# ::stappler::memory::basic_string<typename>::assign_wrap(CharType*,stappler::memory::basic_string::size_type)

## BRIEF

Оборачивает С-строку, распределённую из буфера, в существующий контейнер.

## CONTENT

Доступ: public

Оборачивает С-строку, распределённую из буфера, в существующий контейнер. Не копирует строку. Если аллокатор текущей строки и пул, с которой создавалась строка, не совпадают - поведение не определено. Если блоком памяти владеет другой контейнер - поведение не определено.

Параметры:
* CharType* - исходная строка
* stappler::memory::basic_string::size_type - длина строки

Возвращает:
* basic_string<CharType>& - ссылка на себя

# ::stappler::memory::basic_string<typename>::assign_wrap(CharType*,stappler::memory::basic_string::size_type,stappler::memory::basic_string::size_type)

## BRIEF

Оборачивает С-строку, распределённую из буфера, в существующий контейнер.

## CONTENT

Доступ: public

Оборачивает С-строку, распределённую из буфера, в существующий контейнер. Не копирует строку. Если аллокатор текущей строки и пул, с которой создавалась строка, не совпадают - поведение не определено. Если блоком памяти владеет другой контейнер - поведение не определено.

Параметры:
* CharType* - исходная строка
* stappler::memory::basic_string::size_type - длина строки
* stappler::memory::basic_string::size_type - размер распределённого блока памяти в символах

Возвращает:
* basic_string<CharType>& - ссылка на себя

# ::stappler::memory::basic_string<typename>::extract()

## BRIEF

Изымает блок памяти из контейнера

## CONTENT

Доступ: public

Изымает блок памяти из контейнера. Контейнер при этом очищается, но блок памяти возвращается пользователю. а не системе. Для параметров блока памяти используйте `size` и `capacity`

Возвращает:
* CharType* - изъятый блок памяти.

# ::stappler::memory::basic_string<typename>::compare(stappler::memory::basic_string::charT const*,stappler::memory::basic_string::size_type,stappler::memory::basic_string::charT const*,stappler::memory::basic_string::size_type)

## BRIEF

Лексикографически сравнивает С-строки

## CONTENT

Доступ: protected

Лексикографически сравнивает С-строки

Параметры:
* stappler::memory::basic_string::charT const* - первая строка
* stappler::memory::basic_string::size_type - длина первой строки
* stappler::memory::basic_string::charT const* - вторая строка
* stappler::memory::basic_string::size_type - длина второй сторки

Возвращает:
* int - 0 если строки равны, -1 если первая меньше, 1 если первая больше

# ::stappler::memory::basic_string<typename>::_mem

## BRIEF

Контейнер линейной памяти

## CONTENT

Доступ: protected

Контейнер линейной памяти

Тип: mem_type


# ::stappler::memory::__basic_string_fill<CharType,InputIterator,true>::__basic_string_fill<CharType,InputIterator,true>

## BRIEF

Специализация функции `fill` для случая целочисленных значений

## CONTENT

Специализация функции `fill` для случая целочисленных значений

Параметры шаблона:
* typename CharType
* typename InputIterator


# ::stappler::memory::__basic_string_fill<CharType,InputIterator,true>::fill(basic_string<CharType>&,InputIterator,InputIterator)

## BRIEF

Специализация функции `fill` для случая целочисленных значений

## CONTENT

Специализация функции `fill` для случая целочисленных значений

Параметры:
* basic_string<CharType>&
* InputIterator
* InputIterator


# ::stappler::memory::__basic_string_fill<CharType,InputIterator,false>::__basic_string_fill<CharType,InputIterator,false>

## BRIEF

Специализация функции `fill` для случая итераторов

## CONTENT

Специализация функции `fill` для случая итераторов

Параметры шаблона:
* typename CharType
* typename InputIterator


# ::stappler::memory::__basic_string_fill<CharType,InputIterator,false>::fill(basic_string<CharType>&,InputIterator,InputIterator)

## BRIEF

Специализация функции `fill` для случая итераторов

## CONTENT

Специализация функции `fill` для случая итераторов

Параметры:
* basic_string<CharType>&
* InputIterator
* InputIterator


# ::stappler::memory::operator+<class>(basic_string<CharT> const&,basic_string<CharT> const&)

## BRIEF

Возвращает результат соединения строк

## CONTENT

Возвращает результат соединения строк

Параметры шаблона:
* class CharT

Параметры:
* basic_string<CharT> const&
* basic_string<CharT> const&

Возвращает:
* basic_string<CharT>

# ::stappler::memory::operator+<class>(CharT const*,basic_string<CharT> const&)

## BRIEF

Возвращает результат соединения строк

## CONTENT

Возвращает результат соединения строк

Параметры шаблона:
* class CharT

Параметры:
* CharT const*
* basic_string<CharT> const&

Возвращает:
* basic_string<CharT>

# ::stappler::memory::operator+<class>(CharT,basic_string<CharT> const&)

## BRIEF

Возвращает результат соединения символа и строки

## CONTENT

Возвращает результат соединения символа и строки

Параметры шаблона:
* class CharT

Параметры:
* CharT
* basic_string<CharT> const&

Возвращает:
* basic_string<CharT>

# ::stappler::memory::operator+<class>(basic_string<CharT> const&,CharT const*)

## BRIEF

Возвращает результат соединения строк

## CONTENT

Возвращает результат соединения строк

Параметры шаблона:
* class CharT

Параметры:
* basic_string<CharT> const&
* CharT const*

Возвращает:
* basic_string<CharT>

# ::stappler::memory::operator+<class>(basic_string<CharT> const&,CharT)

## BRIEF

Возвращает результат соединения строки и символа

## CONTENT

Возвращает результат соединения строки и символа

Параметры шаблона:
* class CharT

Параметры:
* basic_string<CharT> const&
* CharT

Возвращает:
* basic_string<CharT>

# ::stappler::memory::operator+<class>(basic_string<CharT>&&,basic_string<CharT> const&)

## BRIEF

Возвращает результат соединения строк

## CONTENT

Возвращает результат соединения строк

Параметры шаблона:
* class CharT

Параметры:
* basic_string<CharT>&&
* basic_string<CharT> const&

Возвращает:
* basic_string<CharT>

# ::stappler::memory::operator+<class>(basic_string<CharT> const&,basic_string<CharT>&&)

## BRIEF

Возвращает результат соединения строк

## CONTENT

Возвращает результат соединения строк

Параметры шаблона:
* class CharT

Параметры:
* basic_string<CharT> const&
* basic_string<CharT>&&

Возвращает:
* basic_string<CharT>

# ::stappler::memory::operator+<class>(basic_string<CharT>&&,basic_string<CharT>&&)

## BRIEF

Возвращает результат соединения строк

## CONTENT

Возвращает результат соединения строк

Параметры шаблона:
* class CharT

Параметры:
* basic_string<CharT>&&
* basic_string<CharT>&&

Возвращает:
* basic_string<CharT>

# ::stappler::memory::operator+<class>(CharT const*,basic_string<CharT>&&)

## BRIEF

Возвращает результат соединения строк

## CONTENT

Возвращает результат соединения строк

Параметры шаблона:
* class CharT

Параметры:
* CharT const*
* basic_string<CharT>&&

Возвращает:
* basic_string<CharT>

# ::stappler::memory::operator+<class>(CharT,basic_string<CharT>&&)

## BRIEF

Возвращает результат соединения строк

## CONTENT

Возвращает результат соединения строк

Параметры шаблона:
* class CharT

Параметры:
* CharT
* basic_string<CharT>&&

Возвращает:
* basic_string<CharT>

# ::stappler::memory::operator+<class>(basic_string<CharT>&&,CharT const*)

## BRIEF

Возвращает результат соединения строк

## CONTENT

Возвращает результат соединения строк

Параметры шаблона:
* class CharT

Параметры:
* basic_string<CharT>&&
* CharT const*

Возвращает:
* basic_string<CharT>

# ::stappler::memory::operator+<class>(basic_string<CharT>&&,CharT)

## BRIEF

Возвращает результат соединения строк

## CONTENT

Возвращает результат соединения строк

Параметры шаблона:
* class CharT

Параметры:
* basic_string<CharT>&&
* CharT

Возвращает:
* basic_string<CharT>

# ::stappler::memory::operator==<class>(basic_string<CharT> const&,basic_string<CharT> const&)

## BRIEF

Сравнивает строки

## CONTENT

Сравнивает строки

Параметры шаблона:
* class CharT

Параметры:
* basic_string<CharT> const&
* basic_string<CharT> const&

Возвращает:
* bool

# ::stappler::memory::operator!=<class>(basic_string<CharT> const&,basic_string<CharT> const&)

## BRIEF

Сравнивает строки

## CONTENT

Сравнивает строки

Параметры шаблона:
* class CharT

Параметры:
* basic_string<CharT> const&
* basic_string<CharT> const&

Возвращает:
* bool

# ::stappler::memory::operator<<class>(basic_string<CharT> const&,basic_string<CharT> const&)

## BRIEF

Лексикографически сравнивает строки

## CONTENT

Лексикографически сравнивает строки

Параметры шаблона:
* class CharT

Параметры:
* basic_string<CharT> const&
* basic_string<CharT> const&

Возвращает:
* bool

# ::stappler::memory::operator<=<class>(basic_string<CharT> const&,basic_string<CharT> const&)

## BRIEF

Лексикографически сравнивает строки

## CONTENT

Лексикографически сравнивает строки

Параметры шаблона:
* class CharT

Параметры:
* basic_string<CharT> const&
* basic_string<CharT> const&

Возвращает:
* bool

# ::stappler::memory::operator><class>(basic_string<CharT> const&,basic_string<CharT> const&)

## BRIEF

Лексикографически сравнивает строки

## CONTENT

Лексикографически сравнивает строки

Параметры шаблона:
* class CharT

Параметры:
* basic_string<CharT> const&
* basic_string<CharT> const&

Возвращает:
* bool

# ::stappler::memory::operator>=<class>(basic_string<CharT> const&,basic_string<CharT> const&)

## BRIEF

Лексикографически сравнивает строки

## CONTENT

Лексикографически сравнивает строки

Параметры шаблона:
* class CharT

Параметры:
* basic_string<CharT> const&
* basic_string<CharT> const&

Возвращает:
* bool

# ::stappler::memory::operator==<class>(basic_string<CharT> const&,CharT const*)

## BRIEF

Сравнивает строки

## CONTENT

Сравнивает строки

Параметры шаблона:
* class CharT

Параметры:
* basic_string<CharT> const&
* CharT const*

Возвращает:
* bool

# ::stappler::memory::operator!=<class>(basic_string<CharT> const&,CharT const*)

## BRIEF

Сравнивает строки

## CONTENT

Сравнивает строки

Параметры шаблона:
* class CharT

Параметры:
* basic_string<CharT> const&
* CharT const*

Возвращает:
* bool

# ::stappler::memory::operator<<class>(basic_string<CharT> const&,CharT const*)

## BRIEF

Лексикографически сравнивает строки

## CONTENT

Лексикографически сравнивает строки

Параметры шаблона:
* class CharT

Параметры:
* basic_string<CharT> const&
* CharT const*

Возвращает:
* bool

# ::stappler::memory::operator<=<class>(basic_string<CharT> const&,CharT const*)

## BRIEF

Лексикографически сравнивает строки

## CONTENT

Лексикографически сравнивает строки

Параметры шаблона:
* class CharT

Параметры:
* basic_string<CharT> const&
* CharT const*

Возвращает:
* bool

# ::stappler::memory::operator><class>(basic_string<CharT> const&,CharT const*)

## BRIEF

Лексикографически сравнивает строки

## CONTENT

Лексикографически сравнивает строки

Параметры шаблона:
* class CharT

Параметры:
* basic_string<CharT> const&
* CharT const*

Возвращает:
* bool

# ::stappler::memory::operator>=<class>(basic_string<CharT> const&,CharT const*)

## BRIEF

Лексикографически сравнивает строки

## CONTENT

Лексикографически сравнивает строки

Параметры шаблона:
* class CharT

Параметры:
* basic_string<CharT> const&
* CharT const*

Возвращает:
* bool

# ::stappler::memory::operator==<class>(CharT const*,basic_string<CharT> const&)

## BRIEF

Сравнивает строки

## CONTENT

Сравнивает строки

Параметры шаблона:
* class CharT

Параметры:
* CharT const*
* basic_string<CharT> const&

Возвращает:
* bool

# ::stappler::memory::operator!=<class>(CharT const*,basic_string<CharT> const&)

## BRIEF

Сравнивает строки

## CONTENT

Сравнивает строки

Параметры шаблона:
* class CharT

Параметры:
* CharT const*
* basic_string<CharT> const&

Возвращает:
* bool

# ::stappler::memory::operator<<class>(CharT const*,basic_string<CharT> const&)

## BRIEF

Лексикографически сравнивает строки

## CONTENT

Лексикографически сравнивает строки

Параметры шаблона:
* class CharT

Параметры:
* CharT const*
* basic_string<CharT> const&

Возвращает:
* bool

# ::stappler::memory::operator<=<class>(CharT const*,basic_string<CharT> const&)

## BRIEF

Лексикографически сравнивает строки

## CONTENT

Лексикографически сравнивает строки

Параметры шаблона:
* class CharT

Параметры:
* CharT const*
* basic_string<CharT> const&

Возвращает:
* bool

# ::stappler::memory::operator><class>(CharT const*,basic_string<CharT> const&)

## BRIEF

Лексикографически сравнивает строки

## CONTENT

Лексикографически сравнивает строки

Параметры шаблона:
* class CharT

Параметры:
* CharT const*
* basic_string<CharT> const&

Возвращает:
* bool

# ::stappler::memory::operator>=<class>(CharT const*,basic_string<CharT> const&)

## BRIEF

Лексикографически сравнивает строки

## CONTENT

Лексикографически сравнивает строки

Параметры шаблона:
* class CharT

Параметры:
* CharT const*
* basic_string<CharT> const&

Возвращает:
* bool

# ::stappler::memory::operator<<<typename>(std::basic_ostream<CharType>&,basic_string<CharType> const&)

## BRIEF

Оператор вывода строки в поток

## CONTENT

Оператор вывода строки в поток

Параметры шаблона:
* typename CharType

Параметры:
* std::basic_ostream<CharType>&
* basic_string<CharType> const&

Возвращает:
* std::basic_ostream<CharType>&

# ::stappler::memory::string

## BRIEF

Синоним для 8-битной строки

## CONTENT

Синоним для 8-битной строки

# ::stappler::memory::u16string

## BRIEF

Синоним для 16-битной строки

## CONTENT

Синоним для 16-битной строки


# ::stappler::memory::u32string

## BRIEF

Синоним для 32-битной строки

## CONTENT

Синоним для 32-битной строки


# ::stappler::memory::weak_string

## BRIEF

Синоним для невладеющией 8-битной строки (устаревший)

## CONTENT

Синоним для невладеющией 8-битной строки (устаревший)


# ::operator""_weak(char const*,size_t)

## BRIEF

Оператор объявления невладеющей строки

## CONTENT

Оператор объявления невладеющей строки

Параметры:
* char const*
* size_t

Возвращает:
* stappler::memory::basic_string<char>

# ::std::hash<stappler::memory::basic_string<char>>::hash<stappler::memory::basic_string<char>>

## BRIEF

Специализация стандартной хэш-функции для строки

## CONTENT

Специализация стандартной хэш-функции для строки


# ::std::hash<stappler::memory::basic_string<char>>::operator()(stappler::memory::basic_string<char> const&) const

## BRIEF

Вычисляет хэш строки встроенными средствами SDK

## CONTENT

Вычисляет хэш строки встроенными средствами SDK

Параметры:
* stappler::memory::basic_string<char> const&

Возвращает:
* std::size_t - вычисленный хэш

# ::std::hash<stappler::memory::basic_string<char16_t>>::hash<stappler::memory::basic_string<char16_t>>

## BRIEF

Специализация стандартной хэш-функции для строки

## CONTENT

Специализация стандартной хэш-функции для строки


# ::std::hash<stappler::memory::basic_string<char16_t>>::operator()(stappler::memory::basic_string<char16_t> const&) const

## BRIEF

Вычисляет хэш строки встроенными средствами SDK

## CONTENT

Вычисляет хэш строки встроенными средствами SDK

Параметры:
* stappler::memory::basic_string<char16_t> const&

Возвращает:
* std::size_t - вычисленный хэш


# ::stappler::memory::basic_string<CharType>::npos

## BRIEF

Индикатор недопустимой позиции в строке

## CONTENT

Индикатор недопустимой позиции в строке. Представлен максимумом типа размера.

Тип: typename basic_string<CharType>::size_type const