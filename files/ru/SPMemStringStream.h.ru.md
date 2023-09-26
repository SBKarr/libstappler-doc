Title: SPMemStringStream.h


# STAPPLER_CORE_MEMORY_SPMEMSTRINGSTREAM_H_

## BRIEF

Заголовок реализации `std::basic_ostrinstream` поверх пулов памяти

## CONTENT

Заголовок реализации `std::basic_ostrinstream` поверх пулов памяти


# ::stappler::memory::basic_ostringbuf_bufsize

## BRIEF

Размер буфера по умолчанию

## CONTENT

Размер буфера по умолчанию

Тип: size_t const


# ::stappler::memory::basic_ostringbuf<typename>

## BRIEF

Реализация буфера для выходного потока

## CONTENT

Реализация буфера для выходного потока

Параметры шаблона:
* typename CharType - используемый тип символов

Базовые классы:
* std::basic_streambuf<CharType,std::char_traits<CharType>>
* AllocPool


# ::stappler::memory::basic_ostringbuf<typename>::storage_type

## BRIEF

Тип контейнера для хранения данных

## CONTENT

Доступ: public

Тип контейнера для хранения данных

# ::stappler::memory::basic_ostringbuf<typename>::allocator_type

## BRIEF

Тип аллокатора для символов

## CONTENT

Доступ: public

Тип аллокатора для символов


# ::stappler::memory::basic_ostringbuf<typename>::storage_allocator_type

## BRIEF

Тип аллокатора для хранилища данных

## CONTENT

Доступ: public

Тип аллокатора для хранилища данных


# ::stappler::memory::basic_ostringbuf<typename>::traits_type

## BRIEF

Тип интерфейса символьных операций

## CONTENT

Доступ: public

Тип интерфейса символьных операций. Наследуется из `std`


# ::stappler::memory::basic_ostringbuf<typename>::size_type

## BRIEF

Тип размера

## CONTENT

Доступ: public

Тип размера

# ::stappler::memory::basic_ostringbuf<typename>::string_type

## BRIEF

Тип итоговой строки

## CONTENT

Доступ: public

Тип итоговой строки

# ::stappler::memory::basic_ostringbuf<typename>::mem_type

## BRIEF

Тип хранилища

## CONTENT

Доступ: public

Тип хранилища


# ::stappler::memory::basic_ostringbuf<typename>::char_type

## BRIEF

Тип символа

## CONTENT

Доступ: public

Тип символа


# ::stappler::memory::basic_ostringbuf<typename>::int_type

## BRIEF

Тип целого числа

## CONTENT

Доступ: public

Тип целого числа

# ::stappler::memory::basic_ostringbuf<typename>::streambuf_type

## BRIEF

Тип размера буфера

## CONTENT

Доступ: public

Тип размера буфера


# ::stappler::memory::basic_ostringbuf<typename>::basic_ostringbuf(stappler::memory::basic_ostringbuf::size_type,stappler::memory::basic_ostringbuf::allocator_type const&)

## BRIEF

Конструктор буфера для выходного потока

## CONTENT

Доступ: public

Конструктор буфера для выходного потока

Параметры:
* stappler::memory::basic_ostringbuf::size_type - исходный размер буфера
* stappler::memory::basic_ostringbuf::allocator_type const& - аллокатор


# ::stappler::memory::basic_ostringbuf<typename>::basic_ostringbuf(CharType*,stappler::memory::basic_ostringbuf::size_type,stappler::memory::basic_ostringbuf::allocator_type const&)

## BRIEF

Конструктор буфера для выходного потока

## CONTENT

Доступ: public

Конструктор буфера для выходного потока

Параметры:
* CharType* - начальное содержимое буфера
* stappler::memory::basic_ostringbuf::size_type - исходный размер буфера
* stappler::memory::basic_ostringbuf::allocator_type const& - аллокатор


# ::stappler::memory::basic_ostringbuf<typename>::basic_ostringbuf(basic_ostringbuf<CharType>&&,stappler::memory::basic_ostringbuf::allocator_type const&)

## BRIEF

Конструктор перемещения буфера

## CONTENT

Доступ: public

Конструктор перемещения буфера

Параметры:
* basic_ostringbuf<CharType>&& - другой буфер
* stappler::memory::basic_ostringbuf::allocator_type const& - аллокатор


# ::stappler::memory::basic_ostringbuf<typename>::operator=(basic_ostringbuf<CharType>&&)

## BRIEF

Оператор перемещения для буфера

## CONTENT

Доступ: public

Оператор перемещения для буфера

Параметры:
* basic_ostringbuf<CharType>&& - другой буфер

Возвращает:
* basic_ostringbuf<CharType>&

# ::stappler::memory::basic_ostringbuf<typename>::~basic_ostringbuf()

## BRIEF

Деструктор буфера

## CONTENT

Доступ: public

Деструктор буфера

# ::stappler::memory::basic_ostringbuf<typename>::empty() const

## BRIEF

Проверяет буфер на пустоту

## CONTENT

Доступ: public

Проверяет буфер на пустоту

Возвращает:
* bool - true если буфер пуст

# ::stappler::memory::basic_ostringbuf<typename>::size() const

## BRIEF

Возвращает объём данных в буфере

## CONTENT

Доступ: public

Возвращает объём данных в буфере

Возвращает:
* size_type

# ::stappler::memory::basic_ostringbuf<typename>::data()

## BRIEF

Возвращает указатель на данные буфера

## CONTENT

Доступ: public

Возвращает указатель на данные буфера

Возвращает:
* CharType*

# ::stappler::memory::basic_ostringbuf<typename>::data() const

## BRIEF

Возвращает указатель на данные буфера

## CONTENT

Доступ: public

Возвращает указатель на данные буфера

Возвращает:
* CharType const*

# ::stappler::memory::basic_ostringbuf<typename>::str() const

## BRIEF

Возвращает строку из данных буфера

## CONTENT

Доступ: public

Возвращает строку из данных буфера

Возвращает:
* string_type

# ::stappler::memory::basic_ostringbuf<typename>::clear()

## BRIEF

Очищает буфер

## CONTENT

Доступ: public

Очищает буфер

# ::stappler::memory::basic_ostringbuf<typename>::reserve(size_t)

## BRIEF

Резервирует память для буфера

## CONTENT

Доступ: public

Резервирует память для буфера

Параметры:
* size_t


# ::stappler::memory::basic_ostringbuf<typename>::basic_ostringbuf(const basic_ostringbuf<CharType>&)

## BRIEF

Запрет копирования

## CONTENT

Доступ: public

Запрет копирования

Параметры:
* const basic_ostringbuf<CharType>&


# ::stappler::memory::basic_ostringbuf<typename>::operator=(const basic_ostringbuf<CharType>&)

## BRIEF

Запрет копирования

## CONTENT

Доступ: public

Запрет копирования

Параметры:
* const basic_ostringbuf<CharType>&

Возвращает:
* basic_ostringbuf<CharType>&

# ::stappler::memory::basic_ostringbuf<typename>::get_allocator() const

## BRIEF

Возвращает аллокатор

## CONTENT

Доступ: public

Возвращает аллокатор

Возвращает:
* allocator_type&

# ::stappler::memory::basic_ostringbuf<typename>::make_flush()

## BRIEF

Синхронизирует состояние хранилища с состоянием буфера

## CONTENT

Доступ: protected

Синхронизирует состояние хранилища с состоянием буфера

# ::stappler::memory::basic_ostringbuf<typename>::overflow(stappler::memory::basic_ostringbuf::int_type)

## BRIEF

Наращивает буфер при недостатке места

## CONTENT

Доступ: protected

Наращивает буфер при недостатке места

Параметры:
* stappler::memory::basic_ostringbuf::int_type - требуемый размер буфера

Возвращает:
* int_type - новый размер буфера

# ::stappler::memory::basic_ostringbuf<typename>::sync()

## BRIEF

Синхронизирует состояние хранилища с состоянием буфера

## CONTENT

Доступ: protected

Синхронизирует состояние хранилища с состоянием буфера

Возвращает:
* int

# ::stappler::memory::basic_ostringbuf<typename>::_buf

## BRIEF

Хранилище данных для буфера

## CONTENT

Доступ: protected

Тип: mem_type


# ::stappler::memory::basic_ostringstream<typename>

## BRIEF

Реализация строкового потока вывода поверх пулов памяти

## CONTENT

Реализация строкового потока вывода поверх пулов памяти

Параметры шаблона:
* typename CharType - используемый тип символов

Базовые классы:
* std::basic_ostream<CharType>
* AllocPool


# ::stappler::memory::basic_ostringstream<typename>::char_type

## BRIEF

Тип символов

## CONTENT

Доступ: public

Тип символов

# ::stappler::memory::basic_ostringstream<typename>::traits_type

## BRIEF

Тип символьных операций

## CONTENT

Доступ: public

Тип символьных операций. Используется из `std`

# ::stappler::memory::basic_ostringstream<typename>::allocator_type

## BRIEF

Тип аллокатора

## CONTENT

Доступ: public

Тип аллокатора

# ::stappler::memory::basic_ostringstream<typename>::int_type

## BRIEF

Целочисленный тип

## CONTENT

Доступ: public

Целочисленный тип


# ::stappler::memory::basic_ostringstream<typename>::pos_type

## BRIEF

Тип позиции в строке

## CONTENT

Доступ: public

Тип позиции в строке


# ::stappler::memory::basic_ostringstream<typename>::off_type

## BRIEF

Тип смещения в строке

## CONTENT

Доступ: public

Тип смещения в строке


# ::stappler::memory::basic_ostringstream<typename>::size_type

## BRIEF

Тип размера

## CONTENT

Доступ: public

Тип размера


# ::stappler::memory::basic_ostringstream<typename>::string_type

## BRIEF

Тип результирующей строки

## CONTENT

Доступ: public

Тип результирующей строки


# ::stappler::memory::basic_ostringstream<typename>::stringbuf_type

## BRIEF

Тип строковоого буфера

## CONTENT

Доступ: public

Тип строковоого буфера

# ::stappler::memory::basic_ostringstream<typename>::ostream_type

## BRIEF

Тип себя

## CONTENT

Доступ: public

Тип себя

# ::stappler::memory::basic_ostringstream<typename>::_buf

## BRIEF

Буфер потока

## CONTENT

Доступ: private

Буфер потока

Тип: stringbuf_type


# ::stappler::memory::basic_ostringstream<typename>::basic_ostringstream(stappler::memory::basic_ostringstream::size_type,stappler::memory::basic_ostringstream::allocator_type const&)

## BRIEF

Конструктор потока

## CONTENT

Доступ: public

Конструктор потока

Параметры:
* stappler::memory::basic_ostringstream::size_type - исходный размер буфера
* stappler::memory::basic_ostringstream::allocator_type const& - аллокатор


# ::stappler::memory::basic_ostringstream<typename>::basic_ostringstream(CharType*,stappler::memory::basic_ostringstream::size_type,stappler::memory::basic_ostringstream::allocator_type const&)

## BRIEF

Конструктор потока

## CONTENT

Доступ: public

Конструктор потока

Параметры:
* CharType* - исходное содержимое
* stappler::memory::basic_ostringstream::size_type - исходный размер буфера
* stappler::memory::basic_ostringstream::allocator_type const& - аллокатор


# ::stappler::memory::basic_ostringstream<typename>::basic_ostringstream(basic_ostringstream<CharType>&&)

## BRIEF

Конструктор перемещения потока

## CONTENT

Доступ: public

Конструктор перемещения потока

Параметры:
* basic_ostringstream<CharType>&&


# ::stappler::memory::basic_ostringstream<typename>::operator=(basic_ostringstream<CharType>&&)

## BRIEF

Оператор перемещения потока

## CONTENT

Доступ: public

Оператор перемещения потока

Параметры:
* basic_ostringstream<CharType>&&

Возвращает:
* basic_ostringstream<CharType>&

# ::stappler::memory::basic_ostringstream<typename>::~basic_ostringstream()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор


# ::stappler::memory::basic_ostringstream<typename>::basic_ostringstream(const basic_ostringstream<CharType>&)

## BRIEF

Запрет копирования

## CONTENT

Доступ: public

Запрет копирования

Параметры:
* const basic_ostringstream<CharType>&


# ::stappler::memory::basic_ostringstream<typename>::operator=(const basic_ostringstream<CharType>&)

## BRIEF

Запрет копирования

## CONTENT

Доступ: public

Запрет копирования

Параметры:
* const basic_ostringstream<CharType>&

Возвращает:
* basic_ostringstream<CharType>&

# ::stappler::memory::basic_ostringstream<typename>::swap(basic_ostringstream<CharType>&)

## BRIEF

Обменивает два потока

## CONTENT

Доступ: public

Обменивает два потока. Обмен эффективен, если аллокаторы совпадают

Параметры:
* basic_ostringstream<CharType>&


# ::stappler::memory::basic_ostringstream<typename>::rdbuf() const

## BRIEF

Возвращает буфер потока

## CONTENT

Доступ: public

Возвращает буфер потока

Возвращает:
* stringbuf_type*

# ::stappler::memory::basic_ostringstream<typename>::str() const

## BRIEF

Возвращает итоговую строку

## CONTENT

Доступ: public

Возвращает итоговую строку

Возвращает:
* string_type

# ::stappler::memory::basic_ostringstream<typename>::weak() const

## BRIEF

Возвращает итоговую невладеющую строку

## CONTENT

Доступ: public

Возвращает итоговую невладеющую строку. Строка будет повреждена, если использовать поток после её получения.

Возвращает:
* string_type

# ::stappler::memory::basic_ostringstream<typename>::clear()

## BRIEF

Очищает поток

## CONTENT

Доступ: public

Очищает поток

# ::stappler::memory::basic_ostringstream<typename>::empty() const

## BRIEF

Проверяет поток на пустоту

## CONTENT

Доступ: public

Проверяет поток на пустоту

Возвращает:
* bool - true если поток пуст

# ::stappler::memory::basic_ostringstream<typename>::size() const

## BRIEF

Возвращает текущую длину строки в потоке

## CONTENT

Доступ: public

Возвращает текущую длину строки в потоке

Возвращает:
* size_t

# ::stappler::memory::basic_ostringstream<typename>::data()

## BRIEF

Возвращает указатель на данные буфера потока

## CONTENT

Доступ: public

Возвращает указатель на данные буфера потока

Возвращает:
* CharType*

# ::stappler::memory::basic_ostringstream<typename>::data() const

## BRIEF

Возвращает указатель на данные буфера потока

## CONTENT

Доступ: public

Возвращает указатель на данные буфера потока

Возвращает:
* CharType const*

# ::stappler::memory::basic_ostringstream<typename>::reserve(size_t)

## BRIEF

Резервирует память под символы в потоке

## CONTENT

Доступ: public

Резервирует память под символы в потоке

Параметры:
* size_t - желаемый размер в символах


# ::stappler::memory::basic_ostringstream<typename>::get_allocator() const

## BRIEF

Возвращает аллокатор

## CONTENT

Доступ: public

Возвращает аллокатор

Возвращает:
* allocator_type&

# ::stappler::memory::ostringstream

## BRIEF

Синоним для 8-битного символьного потока

## CONTENT

Синоним для 8-битного символьного потока


# ::stappler::memory::operator<<<typename>(std::basic_ostream<CharType>&,basic_ostringstream<CharType> const&)

## BRIEF

Оператор для вывода потока в поток

## CONTENT

Оператор для вывода потока в поток

Параметры шаблона:
* typename CharType

Параметры:
* std::basic_ostream<CharType>&
* basic_ostringstream<CharType> const&

Возвращает:
* std::basic_ostream<CharType>&