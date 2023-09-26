Title: SPBytesReader.h


# STAPPLER_CORE_STRING_SPBYTESREADER_H_

## BRIEF

Интерфейс отображения байтового хранилища

## CONTENT

Интерфейс отображения байтового хранилища. На основе этого интерфейса реализованы отображения StringView и BytesView

# ::stappler::BytesReader<typename>

## BRIEF

Класс байтового отображения

## CONTENT

Класс байтового отображения

Параметры шаблона:
* typename _CharType - тип хранимого символа


# ::stappler::BytesReader<typename>::CharType

## BRIEF

Тип хранимого символа

## CONTENT

Доступ: public

Тип хранимого символа

# ::stappler::BytesReader<typename>::Chars<CharType...>

## BRIEF

Тип композиции набора символов для этого отображения

## CONTENT

Доступ: public

Тип композиции набора символов для этого отображения

Параметры шаблона:
* CharType Args - символы набора


# ::stappler::BytesReader<typename>::Range<CharType,CharType>

## BRIEF

Тип композиции диапазона символов для этого отображения

## CONTENT

Доступ: public

Тип композиции диапазона символов для этого отображения

Параметры шаблона:
* CharType First - первый символ диапазона
* CharType Last - последний включнный символ диапазона


# ::stappler::BytesReader<typename>::CharGroup<stappler::CharGroupId>

## BRIEF

Тип группы символов для этого отображения

## CONTENT

Доступ: public

Тип группы символов для этого отображения

Параметры шаблона:
* stappler::CharGroupId Group - группа символов


# ::stappler::BytesReader<typename>::Compose<typename>

## BRIEF

Общий тип композиционной группы для этого отображения

## CONTENT

Доступ: public

Общий тип композиционной группы для этого отображения

Параметры шаблона:
* typename Args - аргументы для композиции


# ::stappler::BytesReader<typename>::BytesReader()

## BRIEF

Конструктор по умолчанию

## CONTENT

Доступ: public

Конструктор по умолчанию, создаёт пустое отображение

# ::stappler::BytesReader<typename>::BytesReader(stappler::BytesReader::CharType const*,size_t)

## BRIEF

Конструктор из блока памяти

## CONTENT

Доступ: public

Конструктор из блока памяти

Параметры:
* stappler::BytesReader::CharType const* - указатель на блок памяти
* size_t - размер блока памяти в символах


# ::stappler::BytesReader<typename>::set(stappler::BytesReader::CharType const*,size_t)

## BRIEF

Устанавливает указатель на блок памяти

## CONTENT

Доступ: public

Устанавливает указатель на блок памяти

Параметры:
* stappler::BytesReader::CharType const* - указатель на блок памяти
* size_t - размер блока памяти в символах

Возвращает:
* BytesReader<_CharType>& - ссылка на себя

# ::stappler::BytesReader<typename>::offset(size_t)

## BRIEF

Сдвигает внутренний указатель

## CONTENT

Доступ: public

Сдвигает внутренний указатель

Параметры:
* size_t - число символов для сдвига


# ::stappler::BytesReader<typename>::compare(stappler::BytesReader::CharType const*,size_t) const

## BRIEF

Сравнивает отображение с блоком памяти

## CONTENT

Доступ: public

Сравнивает отображение с блоком памяти

Параметры:
* stappler::BytesReader::CharType const* - указатель на блок памяти
* size_t - размер блока памяти в символах

Возвращает:
* bool - true если данные совпадают

# ::stappler::BytesReader<typename>::compare(stappler::BytesReader::CharType const*) const

## BRIEF

Сравнивает отображение с блоком памяти

## CONTENT

Доступ: public

Сравнивает отображение с блоком памяти

Параметры:
* stappler::BytesReader::CharType const* - указатель на блок памяти, длина определяется как дилна строки с \0 в конце

Возвращает:
* bool - true если данные совпадают

# ::stappler::BytesReader<typename>::prefix(stappler::BytesReader::CharType const*,size_t) const

## BRIEF

Сравнивает начало отображения с блоком пкамяти

## CONTENT

Доступ: public

Сравнивает начало отображения с блоком пкамяти

Параметры:
* stappler::BytesReader::CharType const* - указатель на блок памяти
* size_t - размер блока памяти в символах

Возвращает:
* bool - true если данные совпадают

# ::stappler::BytesReader<typename>::starts_with(BytesReader<stappler::BytesReader::CharType> const&) const

## BRIEF

Сравнивает начало отображения с другим отображением

## CONTENT

Доступ: public

Сравнивает начало отображения с другим отображением

Параметры:
* BytesReader<stappler::BytesReader::CharType> const&

Возвращает:
* bool - true если данные совпадают

# ::stappler::BytesReader<typename>::starts_with(stappler::BytesReader::CharType const*,size_t) const

## BRIEF

Сравнивает начало отображения с блоком пкамяти

## CONTENT

Доступ: public

Сравнивает начало отображения с блоком пкамяти

Параметры:
* stappler::BytesReader::CharType const* - указатель на блок памяти
* size_t - размер блока памяти в символах

Возвращает:
* bool - true если данные совпадают

# ::stappler::BytesReader<typename>::starts_with(stappler::BytesReader::CharType const*) const

## BRIEF

Сравнивает начало отображения с блоком пкамяти

## CONTENT

Доступ: public

Сравнивает начало отображения с блоком пкамяти

Параметры:
* stappler::BytesReader::CharType const* - указатель на блок памяти, длина определяется как дилна строки с \0 в конце

Возвращает:
* bool - true если данные совпадают

# ::stappler::BytesReader<typename>::ends_with(BytesReader<stappler::BytesReader::CharType> const&) const

## BRIEF

Сравнивает конец отображения с другим отображением

## CONTENT

Доступ: public

Сравнивает конец отображения с другим отображением

Параметры:
* BytesReader<stappler::BytesReader::CharType> const&

Возвращает:
* bool - true если данные совпадают

# ::stappler::BytesReader<typename>::ends_with(stappler::BytesReader::CharType const*,size_t) const

## BRIEF

Сравнивает конец отображения с блоком памяти

## CONTENT

Доступ: public

Сравнивает конец отображения с блоком памяти

Параметры:
* stappler::BytesReader::CharType const* - указатель на блок памяти
* size_t - размер блока памяти в символах

Возвращает:
* bool - true если данные совпадают

# ::stappler::BytesReader<typename>::ends_with(stappler::BytesReader::CharType const*) const

## BRIEF

Сравнивает конец отображения с блоком памяти

## CONTENT

Доступ: public

Сравнивает конец отображения с блоком памяти

Параметры:
* stappler::BytesReader::CharType const* - указатель на блок памяти, длина определяется как дилна строки с \0 в конце

Возвращает:
* bool - true если данные совпадают

# ::stappler::BytesReader<typename>::data() const

## BRIEF

Возвращает указатель на данные отображения

## CONTENT

Доступ: public

Возвращает указатель на данные отображения

Возвращает:
* CharType*

# ::stappler::BytesReader<typename>::size() const

## BRIEF

Возвращает размер данных отображения в символах

## CONTENT

Доступ: public

Возвращает размер данных отображения в символах

Возвращает:
* size_t

# ::stappler::BytesReader<typename>::find(stappler::BytesReader::CharType const*,size_t,size_t) const

## BRIEF

Ищет вхождение подстроки в отображении

## CONTENT

Доступ: public

Ищет вхождение подстроки в отображении

Параметры:
* stappler::BytesReader::CharType const* - искомая строка
* size_t - начальная позиция для поиска в символах
* size_t - длина строки в символах

Возвращает:
* size_t - найденная позиция или maxOf<size_t>()

# ::stappler::BytesReader<typename>::find(stappler::BytesReader::CharType,size_t) const

## BRIEF

Ищет символ в отображении

## CONTENT

Доступ: public

Ищет символ в отображении

Параметры:
* stappler::BytesReader::CharType - искомый символ
* size_t - начальная позиция для поиска

Возвращает:
* size_t - найденная позиция или maxOf<size_t>()

# ::stappler::BytesReader<typename>::rfind(stappler::BytesReader::CharType const*,size_t,size_t) const

## BRIEF

Ищет вхождение подстроки в отображении с конца

## CONTENT

Доступ: public

Ищет вхождение подстроки в отображении с конца

Параметры:
* stappler::BytesReader::CharType const* - искомая строка
* size_t - начальная позиция для поиска в символах
* size_t - длина строки в символах

Возвращает:
* size_t - найденная позиция или maxOf<size_t>()

# ::stappler::BytesReader<typename>::rfind(stappler::BytesReader::CharType,size_t) const

## BRIEF

Ищет символ в отображении

## CONTENT

Доступ: public

Ищет символ в отображении

Параметры:
* stappler::BytesReader::CharType - искомый символ
* size_t - начальная позиция для поиска

Возвращает:
* size_t - найденная позиция или maxOf<size_t>()

# ::stappler::BytesReader<typename>::find(BytesReader<stappler::BytesReader::CharType> const&,size_t) const

## BRIEF

Ищет вхождение подстроки из отображения

## CONTENT

Доступ: public

Ищет вхождение подстроки из отображения

Параметры:
* BytesReader<stappler::BytesReader::CharType> const& - искомое отображение строки
* size_t - начальная позиция в символах

Возвращает:
* size_t - найденная позиция или maxOf<size_t>()

# ::stappler::BytesReader<typename>::find(stappler::BytesReader::CharType const*,size_t) const

## BRIEF

Ищет вхождение подстроки в отображении

## CONTENT

Доступ: public

Ищет вхождение подстроки в отображении

Параметры:
* stappler::BytesReader::CharType const* - искомая строка, длина определяется как strlen
* size_t - начальная позиция для поиска в символах

Возвращает:
* size_t - найденная позиция или maxOf<size_t>()

# ::stappler::BytesReader<typename>::rfind(BytesReader<stappler::BytesReader::CharType> const&,size_t) const

## BRIEF

Ищет вхождение подстроки из отображения с конца

## CONTENT

Доступ: public

Ищет вхождение подстроки из отображения с конца

Параметры:
* BytesReader<stappler::BytesReader::CharType> const& - искомое отображение строки
* size_t - начальная позиция в символах

Возвращает:
* size_t - найденная позиция или maxOf<size_t>()

# ::stappler::BytesReader<typename>::rfind(stappler::BytesReader::CharType const*,size_t) const

## BRIEF

Ищет вхождение подстроки в отображении с конца

## CONTENT

Доступ: public

Ищет вхождение подстроки в отображении с конца

Параметры:
* stappler::BytesReader::CharType const* - искомая строка, длина определяется как strlen
* size_t - начальная позиция для поиска в символах

Возвращает:
* size_t - найденная позиция или maxOf<size_t>()

# ::stappler::BytesReader<typename>::is(stappler::BytesReader::CharType const&) const

## BRIEF

Сравнивает отображения

## CONTENT

Доступ: public

Сравнивает отображения. Не сравнивает содержимое.

Параметры:
* stappler::BytesReader::CharType const&

Возвращает:
* bool - true если отображения указывают на один блок памяти

# ::stappler::BytesReader<typename>::operator>(size_t const&) const

## BRIEF

Проверяет, что длина отображения больше указанного числа символов

## CONTENT

Доступ: public

Проверяет, что длина отображения больше указанного числа символов

Параметры:
* size_t const&

Возвращает:
* bool - true если отображение длиннее запроса

# ::stappler::BytesReader<typename>::operator>=(size_t const&) const

## BRIEF

Проверяет, что длина отображения больше или равна указанному числу символов

## CONTENT

Доступ: public

Проверяет, что длина отображения больше или равна указанному числу символов

Параметры:
* size_t const&

Возвращает:
* bool - true если отображение равно или длиннее запроса

# ::stappler::BytesReader<typename>::operator<(size_t const&) const

## BRIEF

Проверяет, что длина отображения меньше указанного числа символов

## CONTENT

Доступ: public

Проверяет, что длина отображения меньше указанного числа символов

Параметры:
* size_t const&

Возвращает:
* bool - true если отображение короче запроса

# ::stappler::BytesReader<typename>::operator<=(size_t const&) const

## BRIEF

Проверяет, что длина отображения меньше или равна указанному числу символов

## CONTENT

Доступ: public

Проверяет, что длина отображения меньше или равна указанному числу символов

Параметры:
* size_t const&

Возвращает:
* bool - true если отображение короче или равно запроса

# ::stappler::BytesReader<typename>::front() const

## BRIEF

Возвращает первый символ отображения

## CONTENT

Доступ: public

Возвращает первый символ отображения

Возвращает:
* CharType&

# ::stappler::BytesReader<typename>::back() const

## BRIEF

Возвращает последний символ отображения

## CONTENT

Доступ: public

Возвращает последний символ отображения

Возвращает:
* CharType&

# ::stappler::BytesReader<typename>::at(size_t const&) const

## BRIEF

Возвращает символ на указанной позиции

## CONTENT

Доступ: public

Возвращает символ на указанной позиции. Поведение не определено, если позиция вне отображения.

Параметры:
* size_t const&

Возвращает:
* CharType&

# ::stappler::BytesReader<typename>::operator[](size_t const&) const

## BRIEF

Возвращает символ на указанной позиции

## CONTENT

Доступ: public

Возвращает символ на указанной позиции. Поведение не определено, если позиция вне отображения.

Параметры:
* size_t const&

Возвращает:
* CharType&

# ::stappler::BytesReader<typename>::operator*() const

## BRIEF

Возвращает первый символ отображения

## CONTENT

Доступ: public

Возвращает первый символ отображения (для реализации range-based for)

Возвращает:
* CharType&

# ::stappler::BytesReader<typename>::clear()

## BRIEF

Очищает отображение

## CONTENT

Доступ: public

Очищает отображение. Не изменяет данные.

# ::stappler::BytesReader<typename>::empty() const

## BRIEF

Проверяет отображение на пустоту

## CONTENT

Доступ: public

Проверяет отображение на пустоту

Возвращает:
* bool - true если отображение пустое

# ::stappler::BytesReader<typename>::terminated() const

## BRIEF

Проверяет, есть ли завершающий 0 в конце отображения

## CONTENT

Доступ: public

Проверяет, есть ли завершающий 0 в конце отображения. Используется для проверки возможности выхова POSIX-функций, не принимающих длины строки.

Возвращает:
* bool - true если отображение заканчивается с \0

# ::stappler::BytesReader<typename>::ptr

## BRIEF

Уазатель на первый символ

## CONTENT

Доступ: protected

Уазатель на первый символ блока памяти

Тип: CharType*


# ::stappler::BytesReader<typename>::len

## BRIEF

Длина отображения

## CONTENT

Доступ: protected

Длина отображения в символах

Тип: size_t
