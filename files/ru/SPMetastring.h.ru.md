Title: SPMetastring.h


# STAPPLER_COMMON_STRING_SPMETASTRING_H_

## BRIEF

Заголовок интерфейса метастрок

## CONTENT

Заголовок интерфейса метастрок. Метастроки использутся в качестве строк внутри шаблонов.

# ::stappler::metastring::metastring<char...>

## BRIEF

Класс метастроки

## CONTENT

Класс метастроки

Параметры шаблона:
* char Chars - символы в метастроке


# ::stappler::metastring::metastring<char...>::string<typename>()

## BRIEF

Конвертирует в строку

## CONTENT

Конвертирует в строку

Параметры шаблона:
* typename Interface

Возвращает:
* typename Interface::StringType

# ::stappler::metastring::metastring<char...>::std_string()

## BRIEF

Конвертирует в строку

## CONTENT

Конвертирует в строку

Возвращает:
* std::string

# ::stappler::metastring::metastring<char...>::memory_string()

## BRIEF

Конвертирует в строку

## CONTENT

Конвертирует в строку

Возвращает:
* memory::string

# ::stappler::metastring::metastring<char...>::to_string<typename>()

## BRIEF

Конвертирует в строку

## CONTENT

Конвертирует в строку

Параметры шаблона:
* typename Interface

Возвращает:
* const typename Interface::StringType

# ::stappler::metastring::metastring<char...>::to_std_string() const

## BRIEF

Конвертирует в строку

## CONTENT

Конвертирует в строку

Возвращает:
* std::string

# ::stappler::metastring::metastring<char...>::to_memory_string() const

## BRIEF

Конвертирует в строку

## CONTENT

Конвертирует в строку

Возвращает:
* memory::string

# ::stappler::metastring::metastring<char...>::to_array() const

## BRIEF

Конвертирует в массив

## CONTENT

Конвертирует в массив

Возвращает:
* std::array<char, sizeof...(Chars)>

# ::stappler::metastring::metastring<char...>::operator memory::string() const

## BRIEF

Конвертирует в строку

## CONTENT

Конвертирует в строку

Возвращает:
* memory::string

# ::stappler::metastring::metastring<char...>::operator std::string() const

## BRIEF

Конвертирует в строку

## CONTENT

Конвертирует в строку

Возвращает:
* std::string

# ::stappler::metastring::metastring<char...>::size() const

## BRIEF

Возвращает длину строки

## CONTENT

Возвращает длину строки

Возвращает:
* size_t

# ::stappler::metastring::merge<char...,char...>(metastring<Lhs...> const&,metastring<Rhs...> const&)

## BRIEF

Соединяет две метастроки

## CONTENT

Соединяет две метастроки

Параметры шаблона:
* char Lhs
* char Rhs

Параметры:
* metastring<Lhs...> const&
* metastring<Rhs...> const&

Возвращает:
* auto

# ::stappler::metastring::merge<typename,char...,char...>(metastring<Lhs...> const&,metastring<Rhs...> const&,Args &&...)

## BRIEF

Соединяет метастроки

## CONTENT

Соединяет метастроки

Параметры шаблона:
* typename Args
* char Lhs
* char Rhs

Параметры:
* metastring<Lhs...> const&
* metastring<Rhs...> const&
* Args &&...

Возвращает:
* auto

# ::stappler::metastring::merge<char...>(metastring<Lhs...> const&)

## BRIEF

Соединяет метастроки

## CONTENT

Соединяет метастроки

Параметры шаблона:
* char Lhs

Параметры:
* metastring<Lhs...> const&

Возвращает:
* auto

# ::stappler::metastring::merge()

## BRIEF

Соединяет метастроки

## CONTENT

Соединяет метастроки

Возвращает:
* auto

# ::stappler::metastring::num_digits(size_t)

## BRIEF

Вычисляет число символов для числовой метастроки

## CONTENT

Вычисляет число символов для числовой метастроки

Параметры:
* size_t

Возвращает:
* int

# ::stappler::metastring::numeric_builder<int,size_t,char...>

## BRIEF

Собирает числовую метастроку

## CONTENT

Собирает числовую метастроку

Параметры шаблона:
* int size
* size_t x
* char args


# ::stappler::metastring::numeric_builder<int,size_t,char...>::type

## BRIEF

Собирает числовую метастроку

## CONTENT

Собирает числовую метастроку


# ::stappler::metastring::numeric_builder<2,x,args...>::numeric_builder<2,x,args...>

## BRIEF

Собирает числовую метастроку

## CONTENT

Собирает числовую метастроку

Параметры шаблона:
* size_t x
* char args


# ::stappler::metastring::numeric_builder<2,x,args...>::type

## BRIEF

Тип собранной числовой метастроки

## CONTENT

Тип собранной числовой метастроки


# ::stappler::metastring::numeric_builder<1,x,args...>::numeric_builder<1,x,args...>

## BRIEF

Собирает числовую метастроку

## CONTENT

Собирает числовую метастроку

Параметры шаблона:
* size_t x
* char args


# ::stappler::metastring::numeric_builder<1,x,args...>::type

## BRIEF

Тип собранной числовой метастроки

## CONTENT

Тип собранной числовой метастроки


# ::stappler::metastring::numeric<size_t>

## BRIEF

Тип числовой метастроки

## CONTENT

Тип числовой метастроки

Параметры шаблона:
* size_t x


# ::stappler::operator""_meta<typename,CharType...>()

## BRIEF

Суффикс для создания метастроки

## CONTENT

Суффикс для создания метастроки

Параметры шаблона:
* typename CharType
* CharType Chars

Возвращает:
* auto

# ::stappler::metastring::operator<<<char...>(std::basic_ostream<char>&,metastring<Chars...> const&)

## BRIEF

Выводит метастроку в поток

## CONTENT

Выводит метастроку в поток

Параметры шаблона:
* char Chars

Параметры:
* std::basic_ostream<char>&
* metastring<Chars...> const&

Возвращает:
* std::basic_ostream<char>&

# ::stappler::metastring::metastring<char...>::to_std_ustring() const

## BRIEF

Кодирует метастроку в строку UTF-16

## CONTENT

Кодирует метастроку в строку UTF-16

Возвращает:
* std::u16string

# ::stappler::metastring::metastring<char...>::to_memory_ustring() const

## BRIEF

Кодирует метастроку в строку UTF-16

## CONTENT

Кодирует метастроку в строку UTF-16

Возвращает:
* memory::u16string