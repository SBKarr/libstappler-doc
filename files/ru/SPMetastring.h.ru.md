Title: SPMetastring.h


# STAPPLER_COMMON_STRING_SPMETASTRING_H_

## BRIEF

## CONTENT


# ::stappler::metastring::metastring<char...>

## BRIEF

## CONTENT

Параметры шаблона:
* char Chars


# ::stappler::metastring::metastring<char...>::string<typename>()

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface

Возвращает:
* typename Interface::StringType

# ::stappler::metastring::metastring<char...>::std_string()

## BRIEF

## CONTENT

Возвращает:
* std::array<char, sizeof...(Chars)>

# ::stappler::metastring::metastring<char...>::memory_string()

## BRIEF

## CONTENT

Возвращает:
* std::array<char, sizeof...(Chars)>

# ::stappler::metastring::metastring<char...>::to_string<typename>()

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface

Возвращает:
* const typename Interface::StringType

# ::stappler::metastring::metastring<char...>::to_std_string() const

## BRIEF

## CONTENT

Возвращает:
* std::string

# ::stappler::metastring::metastring<char...>::to_memory_string() const

## BRIEF

## CONTENT

Возвращает:
* memory::string

# ::stappler::metastring::metastring<char...>::to_array() const

## BRIEF

## CONTENT

Возвращает:
* std::array<char, sizeof...(Chars)>

# ::stappler::metastring::metastring<char...>::operator memory::string() const

## BRIEF

## CONTENT

Возвращает:
* memory::string

# ::stappler::metastring::metastring<char...>::operator std::string() const

## BRIEF

## CONTENT

Возвращает:
* std::string

# ::stappler::metastring::metastring<char...>::size() const

## BRIEF

## CONTENT

Возвращает:
* size_t

# ::stappler::metastring::merge<char...,char...>(metastring<Lhs...> const&,metastring<Rhs...> const&)

## BRIEF

## CONTENT

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

## CONTENT

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

## CONTENT

Параметры шаблона:
* char Lhs

Параметры:
* metastring<Lhs...> const&

Возвращает:
* auto

# ::stappler::metastring::merge()

## BRIEF

## CONTENT

Возвращает:
* auto

# ::stappler::metastring::num_digits(size_t)

## BRIEF

## CONTENT

Параметры:
* size_t

Возвращает:
* int

# ::stappler::metastring::numeric_builder<int,size_t,char...>

## BRIEF

## CONTENT

Параметры шаблона:
* int size
* size_t x
* char args


# ::stappler::metastring::numeric_builder<int,size_t,char...>::type

## BRIEF

## CONTENT


# ::stappler::metastring::numeric_builder<2,x,args...>::numeric_builder<2,x,args...>

## BRIEF

## CONTENT

Параметры шаблона:
* size_t x
* char args


# ::stappler::metastring::numeric_builder<2,x,args...>::type

## BRIEF

## CONTENT


# ::stappler::metastring::numeric_builder<1,x,args...>::numeric_builder<1,x,args...>

## BRIEF

## CONTENT

Параметры шаблона:
* size_t x
* char args


# ::stappler::metastring::numeric_builder<1,x,args...>::type

## BRIEF

## CONTENT


# ::stappler::metastring::numeric<size_t>

## BRIEF

## CONTENT

Параметры шаблона:
* size_t x


# ::stappler::operator""_meta<typename,CharType...>()

## BRIEF

## CONTENT

Параметры шаблона:
* typename CharType
* CharType Chars

Возвращает:
* auto

# ::stappler::metastring::operator<<<char...>(std::basic_ostream<char>&,metastring<Chars...> const&)

## BRIEF

## CONTENT

Параметры шаблона:
* char Chars

Параметры:
* std::basic_ostream<char>&
* metastring<Chars...> const&

Возвращает:
* std::basic_ostream<char>&