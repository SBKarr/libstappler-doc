Title: SPStringStream.h


# CORE_CORE_STRING_SPSTRINGSTREAM_H_

## BRIEF

Заголовок потокового интерфейса для строк

## CONTENT

Заголовок потокового интерфейса для строк. Описывает быстрый интерфейс `toString` и интерфейс использования функторов как потока.

При определении функтора как `Function<void(StringView)>` его можно использовать как поток и выводить в него данные с помощью `<<`


# ::stappler::string::toUtf16<typename>(stappler::StringView const&)

## BRIEF

Функция конвертации строки в UTF-16

## CONTENT

Функция конвертации строки в UTF-16

Параметры шаблона:
* typename Interface - интерфейс памяти для новой строки

Параметры:
* stappler::StringView const& - исходная строка

Возвращает:
* typename Interface::WideStringType

# ::stappler::string::toUtf16<typename>(char32_t)

## BRIEF

Функция конвертации символа в UTF-16

## CONTENT

Функция конвертации символа в UTF-16

Параметры шаблона:
* typename Interface - интерфейс памяти для новой строки

Параметры:
* char32_t

Возвращает:
* typename Interface::WideStringType

# ::stappler::string::toUtf16Html<typename>(stappler::StringView const&)

## BRIEF

Функция конвертации строки в UTF-16 с разбором HTML-последовательностей

## CONTENT

Функция конвертации строки в UTF-16 с разбором HTML-последовательностей

Параметры шаблона:
* typename Interface - интерфейс памяти для новой строки

Параметры:
* stappler::StringView const&

Возвращает:
* typename Interface::WideStringType

# ::stappler::string::toUtf8<typename>(stappler::WideStringView const&)

## BRIEF

Функция конвертации строки в UTF-8

## CONTENT

Функция конвертации строки в UTF-8

Параметры шаблона:
* typename Interface - интерфейс памяти для новой строки

Параметры:
* stappler::WideStringView const&

Возвращает:
* typename Interface::StringType

# ::stappler::string::toUtf8<typename>(char16_t)

## BRIEF

Функция конвертации символа в UTF-8

## CONTENT

Функция конвертации символа в UTF-8

Параметры шаблона:
* typename Interface - интерфейс памяти для новой строки

Параметры:
* char16_t

Возвращает:
* typename Interface::StringType

# ::stappler::string::toUtf8<typename>(char32_t)

## BRIEF

## BRIEF

Функция конвертации символа в UTF-8

## CONTENT

Функция конвертации символа в UTF-8

Параметры шаблона:
* typename Interface - интерфейс памяти для новой строки

Параметры:
* char32_t

Возвращает:
* typename Interface::StringType

# ::stappler::detail::FunctionalStreamCharTraits<typename>

## BRIEF

Вспомогательный интерфейс для функционального потока

## CONTENT

Вспомогательный интерфейс для функционального потока.

Параметры шаблона:
* typename FunctionalStreamArg


# ::stappler::detail::FunctionalStreamCharTraits<StringViewBase<Char>>::FunctionalStreamCharTraits<StringViewBase<Char>>

## BRIEF

Вспомогательный интерфейс для функционального потока

## CONTENT

Вспомогательный интерфейс для функционального потока.

Параметры шаблона:
* typename Char


# ::stappler::detail::FunctionalStreamCharTraits<StringViewBase<Char>>::CharType

## BRIEF

Тип используемых символов

## CONTENT

Тип используемых символов


# ::stappler::detail::FunctionalStreamCharTraits<StringViewUtf8>::FunctionalStreamCharTraits<StringViewUtf8>

## BRIEF

Вспомогательный интерфейс для функционального потока

## CONTENT

Вспомогательный интерфейс для функционального потока.


# ::stappler::detail::FunctionalStreamCharTraits<StringViewUtf8>::CharType

## BRIEF

Тип используемых символов

## CONTENT

Тип используемых символов


# ::stappler::detail::FunctionalStreamTraits<typename>

## BRIEF

Вспомогательный интерфейс для функционального потока

## CONTENT

Вспомогательный интерфейс для функционального потока.

Параметры шаблона:
* typename FunctionalStream


# ::stappler::detail::FunctionalStreamTraits<Callback<void(Arg)>>::FunctionalStreamTraits<Callback<void(Arg)>>

## BRIEF

Вспомогательный интерфейс для функционального потока

## CONTENT

Вспомогательный интерфейс для функционального потока.

Параметры шаблона:
* typename Arg


# ::stappler::detail::FunctionalStreamTraits<Callback<void(Arg)>>::ArgType

## BRIEF

Тип аргумента

## CONTENT

Тип аргумента

# ::stappler::detail::FunctionalStreamTraits<Callback<void(Arg)>>::CharType

## BRIEF

Тип символа

## CONTENT

Тип символа


# ::stappler::detail::FunctionalStreamTraits<std::function<void(Arg)>>::FunctionalStreamTraits<std::function<void(Arg)>>

## BRIEF

Вспомогательный интерфейс для функционального потока

## CONTENT

Вспомогательный интерфейс для функционального потока.

Параметры шаблона:
* typename Arg


# ::stappler::detail::FunctionalStreamTraits<std::function<void(Arg)>>::ArgType

## BRIEF

Тип аргумента

## CONTENT

Тип аргумента


# ::stappler::detail::FunctionalStreamTraits<std::function<void(Arg)>>::CharType

## BRIEF

Тип символа

## CONTENT

Тип символа


# ::stappler::detail::FunctionalStreamTraits<memory::function<void(Arg)>>::FunctionalStreamTraits<memory::function<void(Arg)>>

## BRIEF

Вспомогательный интерфейс для функционального потока

## CONTENT

Вспомогательный интерфейс для функционального потока.

Параметры шаблона:
* typename Arg


# ::stappler::detail::FunctionalStreamTraits<memory::function<void(Arg)>>::ArgType

## BRIEF

Тип аргумента

## CONTENT

Тип аргумента


# ::stappler::detail::FunctionalStreamTraits<memory::function<void(Arg)>>::CharType

## BRIEF

Тип символа

## CONTENT

Тип символа


# ::stappler::detail::streamWrite<typename>(FunctionalStream const&,typename FunctionalStreamTraits<FunctionalStream>::ArgType)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры шаблона:
* typename FunctionalStream

Параметры:
* FunctionalStream const&
* typename FunctionalStreamTraits<FunctionalStream>::ArgType


# ::stappler::detail::streamWrite<typename>(FunctionalStream const&,const typename FunctionalStreamTraits<FunctionalStream>::CharType*)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры шаблона:
* typename FunctionalStream

Параметры:
* FunctionalStream const&
* const typename FunctionalStreamTraits<FunctionalStream>::CharType*


# ::stappler::detail::streamWrite<typename,size_t>(FunctionalStream const&,const typename FunctionalStreamTraits<FunctionalStream>::CharType[N])

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры шаблона:
* typename FunctionalStream
* size_t N

Параметры:
* FunctionalStream const&
* const typename FunctionalStreamTraits<FunctionalStream>::CharType[N]


# ::stappler::detail::streamWrite<typename>(FunctionalStream const&,double)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры шаблона:
* typename FunctionalStream

Параметры:
* FunctionalStream const&
* double


# ::stappler::detail::streamWrite<typename>(FunctionalStream const&,float)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры шаблона:
* typename FunctionalStream

Параметры:
* FunctionalStream const&
* float


# ::stappler::detail::streamWrite<typename>(FunctionalStream const&,int64_t)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры шаблона:
* typename FunctionalStream

Параметры:
* FunctionalStream const&
* int64_t


# ::stappler::detail::streamWrite<typename>(FunctionalStream const&,uint64_t)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры шаблона:
* typename FunctionalStream

Параметры:
* FunctionalStream const&
* uint64_t


# ::stappler::detail::streamWrite<typename>(FunctionalStream const&,int32_t)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры шаблона:
* typename FunctionalStream

Параметры:
* FunctionalStream const&
* int32_t


# ::stappler::detail::streamWrite<typename>(FunctionalStream const&,uint32_t)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры шаблона:
* typename FunctionalStream

Параметры:
* FunctionalStream const&
* uint32_t


# ::stappler::detail::streamWrite<typename>(FunctionalStream const&,char32_t)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры шаблона:
* typename FunctionalStream

Параметры:
* FunctionalStream const&
* char32_t


# ::stappler::detail::streamWrite<typename>(FunctionalStream const&,char16_t)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры шаблона:
* typename FunctionalStream

Параметры:
* FunctionalStream const&
* char16_t


# ::stappler::detail::streamWrite<typename>(FunctionalStream const&,char)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры шаблона:
* typename FunctionalStream

Параметры:
* FunctionalStream const&
* char


# ::stappler::operator<<(Callback<void (StringViewBase<char>)> const&,StringViewBase<char> const&)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* Callback<void (StringViewBase<char>)> const&
* StringViewBase<char> const&

Возвращает:
* Callback<void (StringViewBase<char>)> const&

# ::stappler::operator<<(Callback<void (StringViewBase<char16_t>)> const&,StringViewBase<char16_t> const&)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* Callback<void (StringViewBase<char16_t>)> const&
* StringViewBase<char16_t> const&

Возвращает:
* Callback<void (StringViewBase<char16_t>)> const&

# ::stappler::operator<<(Callback<void (stappler::StringViewUtf8)> const&,stappler::StringViewUtf8 const&)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* Callback<void (stappler::StringViewUtf8)> const&
* stappler::StringViewUtf8 const&

Возвращает:
* Callback<void (stappler::StringViewUtf8)> const&

# ::stappler::operator<<(std::function<void (StringViewBase<char>)> const&,StringViewBase<char> const&)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* std::function<void (StringViewBase<char>)> const&
* StringViewBase<char> const&

Возвращает:
* std::function<void (StringViewBase<char>)> const&

# ::stappler::operator<<(std::function<void (StringViewBase<char16_t>)> const&,StringViewBase<char16_t> const&)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* std::function<void (StringViewBase<char16_t>)> const&
* StringViewBase<char16_t> const&

Возвращает:
* std::function<void (StringViewBase<char16_t>)> const&

# ::stappler::operator<<(std::function<void (StringViewUtf8)> const&,stappler::StringViewUtf8 const&)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* std::function<void (StringViewUtf8)> const&
* stappler::StringViewUtf8 const&

Возвращает:
* std::function<void (StringViewUtf8)> const&

# ::stappler::operator<<(memory::function<void (StringViewBase<char>)> const&,StringViewBase<char> const&)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* memory::function<void (StringViewBase<char>)> const&
* StringViewBase<char> const&

Возвращает:
* memory::function<void (StringViewBase<char>)> const&

# ::stappler::operator<<(memory::function<void (StringViewBase<char16_t>)> const&,StringViewBase<char16_t> const&)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* memory::function<void (StringViewBase<char16_t>)> const&
* StringViewBase<char16_t> const&

Возвращает:
* memory::function<void (StringViewBase<char16_t>)> const&

# ::stappler::operator<<(memory::function<void (StringViewUtf8)> const&,stappler::StringViewUtf8 const&)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* memory::function<void (StringViewUtf8)> const&
* stappler::StringViewUtf8 const&

Возвращает:
* memory::function<void (StringViewUtf8)> const&

# ::stappler::operator<<(Callback<void (StringViewBase<char>)> const&,char const*)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* Callback<void (StringViewBase<char>)> const&
* char const*

Возвращает:
* Callback<void (StringViewBase<char>)> const&

# ::stappler::operator<<<size_t>(Callback<void (StringViewBase<char>)> const&,char const[N])

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры шаблона:
* size_t N

Параметры:
* Callback<void (StringViewBase<char>)> const&
* char const[N]

Возвращает:
* Callback<void (StringViewBase<char>)> const&

# ::stappler::operator<<(Callback<void (StringViewBase<char>)> const&,double)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* Callback<void (StringViewBase<char>)> const&
* double

Возвращает:
* Callback<void (StringViewBase<char>)> const&

# ::stappler::operator<<(Callback<void (StringViewBase<char>)> const&,float)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* Callback<void (StringViewBase<char>)> const&
* float

Возвращает:
* Callback<void (StringViewBase<char>)> const&

# ::stappler::operator<<(Callback<void (StringViewBase<char>)> const&,int64_t)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* Callback<void (StringViewBase<char>)> const&
* int64_t

Возвращает:
* Callback<void (StringViewBase<char>)> const&

# ::stappler::operator<<(Callback<void (StringViewBase<char>)> const&,uint64_t)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* Callback<void (StringViewBase<char>)> const&
* uint64_t

Возвращает:
* Callback<void (StringViewBase<char>)> const&

# ::stappler::operator<<(Callback<void (StringViewBase<char>)> const&,int32_t)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* Callback<void (StringViewBase<char>)> const&
* int32_t

Возвращает:
* Callback<void (StringViewBase<char>)> const&

# ::stappler::operator<<(Callback<void (StringViewBase<char>)> const&,uint32_t)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* Callback<void (StringViewBase<char>)> const&
* uint32_t

Возвращает:
* Callback<void (StringViewBase<char>)> const&

# ::stappler::operator<<(Callback<void (StringViewBase<char>)> const&,int16_t)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* Callback<void (StringViewBase<char>)> const&
* int16_t

Возвращает:
* Callback<void (StringViewBase<char>)> const&

# ::stappler::operator<<(Callback<void (StringViewBase<char>)> const&,uint16_t)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* Callback<void (StringViewBase<char>)> const&
* uint16_t

Возвращает:
* Callback<void (StringViewBase<char>)> const&

# ::stappler::operator<<(Callback<void (StringViewBase<char>)> const&,int8_t)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* Callback<void (StringViewBase<char>)> const&
* int8_t

Возвращает:
* Callback<void (StringViewBase<char>)> const&

# ::stappler::operator<<(Callback<void (StringViewBase<char>)> const&,uint8_t)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* Callback<void (StringViewBase<char>)> const&
* uint8_t

Возвращает:
* Callback<void (StringViewBase<char>)> const&

# ::stappler::operator<<(Callback<void (StringViewBase<char>)> const&,char32_t)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* Callback<void (StringViewBase<char>)> const&
* char32_t

Возвращает:
* Callback<void (StringViewBase<char>)> const&

# ::stappler::operator<<(Callback<void (StringViewBase<char>)> const&,char16_t)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* Callback<void (StringViewBase<char>)> const&
* char16_t

Возвращает:
* Callback<void (StringViewBase<char>)> const&

# ::stappler::operator<<(Callback<void (StringViewBase<char>)> const&,char)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* Callback<void (StringViewBase<char>)> const&
* char

Возвращает:
* Callback<void (StringViewBase<char>)> const&

# ::stappler::operator<<(Callback<void (StringViewBase<char16_t>)> const&,char16_t const*)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* Callback<void (StringViewBase<char16_t>)> const&
* char16_t const*

Возвращает:
* Callback<void (StringViewBase<char16_t>)> const&

# ::stappler::operator<<<size_t>(Callback<void (StringViewBase<char16_t>)> const&,char16_t const[N])

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры шаблона:
* size_t N

Параметры:
* Callback<void (StringViewBase<char16_t>)> const&
* char16_t const[N]

Возвращает:
* Callback<void (StringViewBase<char16_t>)> const&

# ::stappler::operator<<(Callback<void (StringViewBase<char16_t>)> const&,double)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* Callback<void (StringViewBase<char16_t>)> const&
* double

Возвращает:
* Callback<void (StringViewBase<char16_t>)> const&

# ::stappler::operator<<(Callback<void (StringViewBase<char16_t>)> const&,float)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* Callback<void (StringViewBase<char16_t>)> const&
* float

Возвращает:
* Callback<void (StringViewBase<char16_t>)> const&

# ::stappler::operator<<(Callback<void (StringViewBase<char16_t>)> const&,int64_t)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* Callback<void (StringViewBase<char16_t>)> const&
* int64_t

Возвращает:
* Callback<void (StringViewBase<char16_t>)> const&

# ::stappler::operator<<(Callback<void (StringViewBase<char16_t>)> const&,uint64_t)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* Callback<void (StringViewBase<char16_t>)> const&
* uint64_t

Возвращает:
* Callback<void (StringViewBase<char16_t>)> const&

# ::stappler::operator<<(Callback<void (StringViewBase<char16_t>)> const&,int32_t)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* Callback<void (StringViewBase<char16_t>)> const&
* int32_t

Возвращает:
* Callback<void (StringViewBase<char16_t>)> const&

# ::stappler::operator<<(Callback<void (StringViewBase<char16_t>)> const&,uint32_t)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* Callback<void (StringViewBase<char16_t>)> const&
* uint32_t

Возвращает:
* Callback<void (StringViewBase<char16_t>)> const&

# ::stappler::operator<<(Callback<void (StringViewBase<char16_t>)> const&,int16_t)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* Callback<void (StringViewBase<char16_t>)> const&
* int16_t

Возвращает:
* Callback<void (StringViewBase<char16_t>)> const&

# ::stappler::operator<<(Callback<void (StringViewBase<char16_t>)> const&,uint16_t)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* Callback<void (StringViewBase<char16_t>)> const&
* uint16_t

Возвращает:
* Callback<void (StringViewBase<char16_t>)> const&

# ::stappler::operator<<(Callback<void (StringViewBase<char16_t>)> const&,int8_t)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* Callback<void (StringViewBase<char16_t>)> const&
* int8_t

Возвращает:
* Callback<void (StringViewBase<char16_t>)> const&

# ::stappler::operator<<(Callback<void (StringViewBase<char16_t>)> const&,uint8_t)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* Callback<void (StringViewBase<char16_t>)> const&
* uint8_t

Возвращает:
* Callback<void (StringViewBase<char16_t>)> const&

# ::stappler::operator<<(Callback<void (StringViewBase<char16_t>)> const&,char32_t)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* Callback<void (StringViewBase<char16_t>)> const&
* char32_t

Возвращает:
* Callback<void (StringViewBase<char16_t>)> const&

# ::stappler::operator<<(Callback<void (StringViewBase<char16_t>)> const&,char16_t)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* Callback<void (StringViewBase<char16_t>)> const&
* char16_t

Возвращает:
* Callback<void (StringViewBase<char16_t>)> const&

# ::stappler::operator<<(Callback<void (StringViewBase<char16_t>)> const&,char)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* Callback<void (StringViewBase<char16_t>)> const&
* char

Возвращает:
* Callback<void (StringViewBase<char16_t>)> const&

# ::stappler::operator<<(Callback<void (stappler::StringViewUtf8)> const&,char const*)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* Callback<void (stappler::StringViewUtf8)> const&
* char const*

Возвращает:
* Callback<void (stappler::StringViewUtf8)> const&

# ::stappler::operator<<<size_t>(Callback<void (stappler::StringViewUtf8)> const&,char const[N])

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры шаблона:
* size_t N

Параметры:
* Callback<void (stappler::StringViewUtf8)> const&
* char const[N]

Возвращает:
* Callback<void (stappler::StringViewUtf8)> const&

# ::stappler::operator<<(Callback<void (stappler::StringViewUtf8)> const&,double)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* Callback<void (stappler::StringViewUtf8)> const&
* double

Возвращает:
* Callback<void (stappler::StringViewUtf8)> const&

# ::stappler::operator<<(Callback<void (stappler::StringViewUtf8)> const&,float)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* Callback<void (stappler::StringViewUtf8)> const&
* float

Возвращает:
* Callback<void (stappler::StringViewUtf8)> const&

# ::stappler::operator<<(Callback<void (stappler::StringViewUtf8)> const&,int64_t)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* Callback<void (stappler::StringViewUtf8)> const&
* int64_t

Возвращает:
* Callback<void (stappler::StringViewUtf8)> const&

# ::stappler::operator<<(Callback<void (stappler::StringViewUtf8)> const&,uint64_t)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* Callback<void (stappler::StringViewUtf8)> const&
* uint64_t

Возвращает:
* Callback<void (stappler::StringViewUtf8)> const&

# ::stappler::operator<<(Callback<void (stappler::StringViewUtf8)> const&,int32_t)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* Callback<void (stappler::StringViewUtf8)> const&
* int32_t

Возвращает:
* Callback<void (stappler::StringViewUtf8)> const&

# ::stappler::operator<<(Callback<void (stappler::StringViewUtf8)> const&,uint32_t)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* Callback<void (stappler::StringViewUtf8)> const&
* uint32_t

Возвращает:
* Callback<void (stappler::StringViewUtf8)> const&

# ::stappler::operator<<(Callback<void (stappler::StringViewUtf8)> const&,int16_t)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* Callback<void (stappler::StringViewUtf8)> const&
* int16_t

Возвращает:
* Callback<void (stappler::StringViewUtf8)> const&

# ::stappler::operator<<(Callback<void (stappler::StringViewUtf8)> const&,uint16_t)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* Callback<void (stappler::StringViewUtf8)> const&
* uint16_t

Возвращает:
* Callback<void (stappler::StringViewUtf8)> const&

# ::stappler::operator<<(Callback<void (stappler::StringViewUtf8)> const&,int8_t)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* Callback<void (stappler::StringViewUtf8)> const&
* int8_t

Возвращает:
* Callback<void (stappler::StringViewUtf8)> const&

# ::stappler::operator<<(Callback<void (stappler::StringViewUtf8)> const&,uint8_t)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* Callback<void (stappler::StringViewUtf8)> const&
* uint8_t

Возвращает:
* Callback<void (stappler::StringViewUtf8)> const&

# ::stappler::operator<<(Callback<void (stappler::StringViewUtf8)> const&,char32_t)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* Callback<void (stappler::StringViewUtf8)> const&
* char32_t

Возвращает:
* Callback<void (stappler::StringViewUtf8)> const&

# ::stappler::operator<<(Callback<void (stappler::StringViewUtf8)> const&,char16_t)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* Callback<void (stappler::StringViewUtf8)> const&
* char16_t

Возвращает:
* Callback<void (stappler::StringViewUtf8)> const&

# ::stappler::operator<<(Callback<void (stappler::StringViewUtf8)> const&,char)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* Callback<void (stappler::StringViewUtf8)> const&
* char

Возвращает:
* Callback<void (stappler::StringViewUtf8)> const&

# ::stappler::operator<<(std::function<void (StringViewBase<char>)> const&,char const*)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* std::function<void (StringViewBase<char>)> const&
* char const*

Возвращает:
* std::function<void (StringViewBase<char>)> const&

# ::stappler::operator<<<size_t>(std::function<void (StringViewBase<char>)> const&,char const[N])

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры шаблона:
* size_t N

Параметры:
* std::function<void (StringViewBase<char>)> const&
* char const[N]

Возвращает:
* std::function<void (StringViewBase<char>)> const&

# ::stappler::operator<<(std::function<void (StringViewBase<char>)> const&,double)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* std::function<void (StringViewBase<char>)> const&
* double

Возвращает:
* std::function<void (StringViewBase<char>)> const&

# ::stappler::operator<<(std::function<void (StringViewBase<char>)> const&,float)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* std::function<void (StringViewBase<char>)> const&
* float

Возвращает:
* std::function<void (StringViewBase<char>)> const&

# ::stappler::operator<<(std::function<void (StringViewBase<char>)> const&,int64_t)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* std::function<void (StringViewBase<char>)> const&
* int64_t

Возвращает:
* std::function<void (StringViewBase<char>)> const&

# ::stappler::operator<<(std::function<void (StringViewBase<char>)> const&,uint64_t)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* std::function<void (StringViewBase<char>)> const&
* uint64_t

Возвращает:
* std::function<void (StringViewBase<char>)> const&

# ::stappler::operator<<(std::function<void (StringViewBase<char>)> const&,int32_t)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* std::function<void (StringViewBase<char>)> const&
* int32_t

Возвращает:
* std::function<void (StringViewBase<char>)> const&

# ::stappler::operator<<(std::function<void (StringViewBase<char>)> const&,uint32_t)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* std::function<void (StringViewBase<char>)> const&
* uint32_t

Возвращает:
* std::function<void (StringViewBase<char>)> const&

# ::stappler::operator<<(std::function<void (StringViewBase<char>)> const&,int16_t)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* std::function<void (StringViewBase<char>)> const&
* int16_t

Возвращает:
* std::function<void (StringViewBase<char>)> const&

# ::stappler::operator<<(std::function<void (StringViewBase<char>)> const&,uint16_t)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* std::function<void (StringViewBase<char>)> const&
* uint16_t

Возвращает:
* std::function<void (StringViewBase<char>)> const&

# ::stappler::operator<<(std::function<void (StringViewBase<char>)> const&,int8_t)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* std::function<void (StringViewBase<char>)> const&
* int8_t

Возвращает:
* std::function<void (StringViewBase<char>)> const&

# ::stappler::operator<<(std::function<void (StringViewBase<char>)> const&,uint8_t)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* std::function<void (StringViewBase<char>)> const&
* uint8_t

Возвращает:
* std::function<void (StringViewBase<char>)> const&

# ::stappler::operator<<(std::function<void (StringViewBase<char>)> const&,char32_t)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* std::function<void (StringViewBase<char>)> const&
* char32_t

Возвращает:
* std::function<void (StringViewBase<char>)> const&

# ::stappler::operator<<(std::function<void (StringViewBase<char>)> const&,char16_t)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* std::function<void (StringViewBase<char>)> const&
* char16_t

Возвращает:
* std::function<void (StringViewBase<char>)> const&

# ::stappler::operator<<(std::function<void (StringViewBase<char>)> const&,char)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* std::function<void (StringViewBase<char>)> const&
* char

Возвращает:
* std::function<void (StringViewBase<char>)> const&

# ::stappler::operator<<(std::function<void (StringViewBase<char16_t>)> const&,char16_t const*)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* std::function<void (StringViewBase<char16_t>)> const&
* char16_t const*

Возвращает:
* std::function<void (StringViewBase<char16_t>)> const&

# ::stappler::operator<<<size_t>(std::function<void (StringViewBase<char16_t>)> const&,char16_t const[N])

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры шаблона:
* size_t N

Параметры:
* std::function<void (StringViewBase<char16_t>)> const&
* char16_t const[N]

Возвращает:
* std::function<void (StringViewBase<char16_t>)> const&

# ::stappler::operator<<(std::function<void (StringViewBase<char16_t>)> const&,double)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* std::function<void (StringViewBase<char16_t>)> const&
* double

Возвращает:
* std::function<void (StringViewBase<char16_t>)> const&

# ::stappler::operator<<(std::function<void (StringViewBase<char16_t>)> const&,float)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* std::function<void (StringViewBase<char16_t>)> const&
* float

Возвращает:
* std::function<void (StringViewBase<char16_t>)> const&

# ::stappler::operator<<(std::function<void (StringViewBase<char16_t>)> const&,int64_t)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* std::function<void (StringViewBase<char16_t>)> const&
* int64_t

Возвращает:
* std::function<void (StringViewBase<char16_t>)> const&

# ::stappler::operator<<(std::function<void (StringViewBase<char16_t>)> const&,uint64_t)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* std::function<void (StringViewBase<char16_t>)> const&
* uint64_t

Возвращает:
* std::function<void (StringViewBase<char16_t>)> const&

# ::stappler::operator<<(std::function<void (StringViewBase<char16_t>)> const&,int32_t)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* std::function<void (StringViewBase<char16_t>)> const&
* int32_t

Возвращает:
* std::function<void (StringViewBase<char16_t>)> const&

# ::stappler::operator<<(std::function<void (StringViewBase<char16_t>)> const&,uint32_t)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* std::function<void (StringViewBase<char16_t>)> const&
* uint32_t

Возвращает:
* std::function<void (StringViewBase<char16_t>)> const&

# ::stappler::operator<<(std::function<void (StringViewBase<char16_t>)> const&,int16_t)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* std::function<void (StringViewBase<char16_t>)> const&
* int16_t

Возвращает:
* std::function<void (StringViewBase<char16_t>)> const&

# ::stappler::operator<<(std::function<void (StringViewBase<char16_t>)> const&,uint16_t)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* std::function<void (StringViewBase<char16_t>)> const&
* uint16_t

Возвращает:
* std::function<void (StringViewBase<char16_t>)> const&

# ::stappler::operator<<(std::function<void (StringViewBase<char16_t>)> const&,int8_t)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* std::function<void (StringViewBase<char16_t>)> const&
* int8_t

Возвращает:
* std::function<void (StringViewBase<char16_t>)> const&

# ::stappler::operator<<(std::function<void (StringViewBase<char16_t>)> const&,uint8_t)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* std::function<void (StringViewBase<char16_t>)> const&
* uint8_t

Возвращает:
* std::function<void (StringViewBase<char16_t>)> const&

# ::stappler::operator<<(std::function<void (StringViewBase<char16_t>)> const&,char32_t)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* std::function<void (StringViewBase<char16_t>)> const&
* char32_t

Возвращает:
* std::function<void (StringViewBase<char16_t>)> const&

# ::stappler::operator<<(std::function<void (StringViewBase<char16_t>)> const&,char16_t)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* std::function<void (StringViewBase<char16_t>)> const&
* char16_t

Возвращает:
* std::function<void (StringViewBase<char16_t>)> const&

# ::stappler::operator<<(std::function<void (StringViewBase<char16_t>)> const&,char)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* std::function<void (StringViewBase<char16_t>)> const&
* char

Возвращает:
* std::function<void (StringViewBase<char16_t>)> const&

# ::stappler::operator<<(std::function<void (StringViewUtf8)> const&,char const*)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* std::function<void (StringViewUtf8)> const&
* char const*

Возвращает:
* std::function<void (StringViewUtf8)> const&

# ::stappler::operator<<<size_t>(std::function<void (StringViewUtf8)> const&,char const[N])

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры шаблона:
* size_t N

Параметры:
* std::function<void (StringViewUtf8)> const&
* char const[N]

Возвращает:
* std::function<void (StringViewUtf8)> const&

# ::stappler::operator<<(std::function<void (StringViewUtf8)> const&,double)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* std::function<void (StringViewUtf8)> const&
* double

Возвращает:
* std::function<void (StringViewUtf8)> const&

# ::stappler::operator<<(std::function<void (StringViewUtf8)> const&,float)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* std::function<void (StringViewUtf8)> const&
* float

Возвращает:
* std::function<void (StringViewUtf8)> const&

# ::stappler::operator<<(std::function<void (StringViewUtf8)> const&,int64_t)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* std::function<void (StringViewUtf8)> const&
* int64_t

Возвращает:
* std::function<void (StringViewUtf8)> const&

# ::stappler::operator<<(std::function<void (StringViewUtf8)> const&,uint64_t)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* std::function<void (StringViewUtf8)> const&
* uint64_t

Возвращает:
* std::function<void (StringViewUtf8)> const&

# ::stappler::operator<<(std::function<void (StringViewUtf8)> const&,int32_t)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* std::function<void (StringViewUtf8)> const&
* int32_t

Возвращает:
* std::function<void (StringViewUtf8)> const&

# ::stappler::operator<<(std::function<void (StringViewUtf8)> const&,uint32_t)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* std::function<void (StringViewUtf8)> const&
* uint32_t

Возвращает:
* std::function<void (StringViewUtf8)> const&

# ::stappler::operator<<(std::function<void (StringViewUtf8)> const&,int16_t)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* std::function<void (StringViewUtf8)> const&
* int16_t

Возвращает:
* std::function<void (StringViewUtf8)> const&

# ::stappler::operator<<(std::function<void (StringViewUtf8)> const&,uint16_t)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* std::function<void (StringViewUtf8)> const&
* uint16_t

Возвращает:
* std::function<void (StringViewUtf8)> const&

# ::stappler::operator<<(std::function<void (StringViewUtf8)> const&,int8_t)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* std::function<void (StringViewUtf8)> const&
* int8_t

Возвращает:
* std::function<void (StringViewUtf8)> const&

# ::stappler::operator<<(std::function<void (StringViewUtf8)> const&,uint8_t)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* std::function<void (StringViewUtf8)> const&
* uint8_t

Возвращает:
* std::function<void (StringViewUtf8)> const&

# ::stappler::operator<<(std::function<void (StringViewUtf8)> const&,char32_t)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* std::function<void (StringViewUtf8)> const&
* char32_t

Возвращает:
* std::function<void (StringViewUtf8)> const&

# ::stappler::operator<<(std::function<void (StringViewUtf8)> const&,char16_t)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* std::function<void (StringViewUtf8)> const&
* char16_t

Возвращает:
* std::function<void (StringViewUtf8)> const&

# ::stappler::operator<<(std::function<void (StringViewUtf8)> const&,char)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* std::function<void (StringViewUtf8)> const&
* char

Возвращает:
* std::function<void (StringViewUtf8)> const&

# ::stappler::operator<<(memory::function<void (StringViewBase<char>)> const&,char const*)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* memory::function<void (StringViewBase<char>)> const&
* char const*

Возвращает:
* memory::function<void (StringViewBase<char>)> const&

# ::stappler::operator<<<size_t>(memory::function<void (StringViewBase<char>)> const&,char const[N])

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры шаблона:
* size_t N

Параметры:
* memory::function<void (StringViewBase<char>)> const&
* char const[N]

Возвращает:
* memory::function<void (StringViewBase<char>)> const&

# ::stappler::operator<<(memory::function<void (StringViewBase<char>)> const&,double)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* memory::function<void (StringViewBase<char>)> const&
* double

Возвращает:
* memory::function<void (StringViewBase<char>)> const&

# ::stappler::operator<<(memory::function<void (StringViewBase<char>)> const&,float)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* memory::function<void (StringViewBase<char>)> const&
* float

Возвращает:
* memory::function<void (StringViewBase<char>)> const&

# ::stappler::operator<<(memory::function<void (StringViewBase<char>)> const&,int64_t)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* memory::function<void (StringViewBase<char>)> const&
* int64_t

Возвращает:
* memory::function<void (StringViewBase<char>)> const&

# ::stappler::operator<<(memory::function<void (StringViewBase<char>)> const&,uint64_t)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* memory::function<void (StringViewBase<char>)> const&
* uint64_t

Возвращает:
* memory::function<void (StringViewBase<char>)> const&

# ::stappler::operator<<(memory::function<void (StringViewBase<char>)> const&,int32_t)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* memory::function<void (StringViewBase<char>)> const&
* int32_t

Возвращает:
* memory::function<void (StringViewBase<char>)> const&

# ::stappler::operator<<(memory::function<void (StringViewBase<char>)> const&,uint32_t)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* memory::function<void (StringViewBase<char>)> const&
* uint32_t

Возвращает:
* memory::function<void (StringViewBase<char>)> const&

# ::stappler::operator<<(memory::function<void (StringViewBase<char>)> const&,int16_t)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* memory::function<void (StringViewBase<char>)> const&
* int16_t

Возвращает:
* memory::function<void (StringViewBase<char>)> const&

# ::stappler::operator<<(memory::function<void (StringViewBase<char>)> const&,uint16_t)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* memory::function<void (StringViewBase<char>)> const&
* uint16_t

Возвращает:
* memory::function<void (StringViewBase<char>)> const&

# ::stappler::operator<<(memory::function<void (StringViewBase<char>)> const&,int8_t)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* memory::function<void (StringViewBase<char>)> const&
* int8_t

Возвращает:
* memory::function<void (StringViewBase<char>)> const&

# ::stappler::operator<<(memory::function<void (StringViewBase<char>)> const&,uint8_t)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* memory::function<void (StringViewBase<char>)> const&
* uint8_t

Возвращает:
* memory::function<void (StringViewBase<char>)> const&

# ::stappler::operator<<(memory::function<void (StringViewBase<char>)> const&,char32_t)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* memory::function<void (StringViewBase<char>)> const&
* char32_t

Возвращает:
* memory::function<void (StringViewBase<char>)> const&

# ::stappler::operator<<(memory::function<void (StringViewBase<char>)> const&,char16_t)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* memory::function<void (StringViewBase<char>)> const&
* char16_t

Возвращает:
* memory::function<void (StringViewBase<char>)> const&

# ::stappler::operator<<(memory::function<void (StringViewBase<char>)> const&,char)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* memory::function<void (StringViewBase<char>)> const&
* char

Возвращает:
* memory::function<void (StringViewBase<char>)> const&

# ::stappler::operator<<(memory::function<void (StringViewBase<char16_t>)> const&,char16_t const*)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* memory::function<void (StringViewBase<char16_t>)> const&
* char16_t const*

Возвращает:
* memory::function<void (StringViewBase<char16_t>)> const&

# ::stappler::operator<<<size_t>(memory::function<void (StringViewBase<char16_t>)> const&,char16_t const[N])

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры шаблона:
* size_t N

Параметры:
* memory::function<void (StringViewBase<char16_t>)> const&
* char16_t const[N]

Возвращает:
* memory::function<void (StringViewBase<char16_t>)> const&

# ::stappler::operator<<(memory::function<void (StringViewBase<char16_t>)> const&,double)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* memory::function<void (StringViewBase<char16_t>)> const&
* double

Возвращает:
* memory::function<void (StringViewBase<char16_t>)> const&

# ::stappler::operator<<(memory::function<void (StringViewBase<char16_t>)> const&,float)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* memory::function<void (StringViewBase<char16_t>)> const&
* float

Возвращает:
* memory::function<void (StringViewBase<char16_t>)> const&

# ::stappler::operator<<(memory::function<void (StringViewBase<char16_t>)> const&,int64_t)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* memory::function<void (StringViewBase<char16_t>)> const&
* int64_t

Возвращает:
* memory::function<void (StringViewBase<char16_t>)> const&

# ::stappler::operator<<(memory::function<void (StringViewBase<char16_t>)> const&,uint64_t)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* memory::function<void (StringViewBase<char16_t>)> const&
* uint64_t

Возвращает:
* memory::function<void (StringViewBase<char16_t>)> const&

# ::stappler::operator<<(memory::function<void (StringViewBase<char16_t>)> const&,int32_t)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* memory::function<void (StringViewBase<char16_t>)> const&
* int32_t

Возвращает:
* memory::function<void (StringViewBase<char16_t>)> const&

# ::stappler::operator<<(memory::function<void (StringViewBase<char16_t>)> const&,uint32_t)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* memory::function<void (StringViewBase<char16_t>)> const&
* uint32_t

Возвращает:
* memory::function<void (StringViewBase<char16_t>)> const&

# ::stappler::operator<<(memory::function<void (StringViewBase<char16_t>)> const&,int16_t)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* memory::function<void (StringViewBase<char16_t>)> const&
* int16_t

Возвращает:
* memory::function<void (StringViewBase<char16_t>)> const&

# ::stappler::operator<<(memory::function<void (StringViewBase<char16_t>)> const&,uint16_t)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* memory::function<void (StringViewBase<char16_t>)> const&
* uint16_t

Возвращает:
* memory::function<void (StringViewBase<char16_t>)> const&

# ::stappler::operator<<(memory::function<void (StringViewBase<char16_t>)> const&,int8_t)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* memory::function<void (StringViewBase<char16_t>)> const&
* int8_t

Возвращает:
* memory::function<void (StringViewBase<char16_t>)> const&

# ::stappler::operator<<(memory::function<void (StringViewBase<char16_t>)> const&,uint8_t)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* memory::function<void (StringViewBase<char16_t>)> const&
* uint8_t

Возвращает:
* memory::function<void (StringViewBase<char16_t>)> const&

# ::stappler::operator<<(memory::function<void (StringViewBase<char16_t>)> const&,char32_t)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* memory::function<void (StringViewBase<char16_t>)> const&
* char32_t

Возвращает:
* memory::function<void (StringViewBase<char16_t>)> const&

# ::stappler::operator<<(memory::function<void (StringViewBase<char16_t>)> const&,char16_t)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* memory::function<void (StringViewBase<char16_t>)> const&
* char16_t

Возвращает:
* memory::function<void (StringViewBase<char16_t>)> const&

# ::stappler::operator<<(memory::function<void (StringViewBase<char16_t>)> const&,char)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* memory::function<void (StringViewBase<char16_t>)> const&
* char

Возвращает:
* memory::function<void (StringViewBase<char16_t>)> const&

# ::stappler::operator<<(memory::function<void (StringViewUtf8)> const&,char const*)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* memory::function<void (StringViewUtf8)> const&
* char const*

Возвращает:
* memory::function<void (StringViewUtf8)> const&

# ::stappler::operator<<<size_t>(memory::function<void (StringViewUtf8)> const&,char const[N])

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры шаблона:
* size_t N

Параметры:
* memory::function<void (StringViewUtf8)> const&
* char const[N]

Возвращает:
* memory::function<void (StringViewUtf8)> const&

# ::stappler::operator<<(memory::function<void (StringViewUtf8)> const&,double)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* memory::function<void (StringViewUtf8)> const&
* double

Возвращает:
* memory::function<void (StringViewUtf8)> const&

# ::stappler::operator<<(memory::function<void (StringViewUtf8)> const&,float)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* memory::function<void (StringViewUtf8)> const&
* float

Возвращает:
* memory::function<void (StringViewUtf8)> const&

# ::stappler::operator<<(memory::function<void (StringViewUtf8)> const&,int64_t)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* memory::function<void (StringViewUtf8)> const&
* int64_t

Возвращает:
* memory::function<void (StringViewUtf8)> const&

# ::stappler::operator<<(memory::function<void (StringViewUtf8)> const&,uint64_t)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* memory::function<void (StringViewUtf8)> const&
* uint64_t

Возвращает:
* memory::function<void (StringViewUtf8)> const&

# ::stappler::operator<<(memory::function<void (StringViewUtf8)> const&,int32_t)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* memory::function<void (StringViewUtf8)> const&
* int32_t

Возвращает:
* memory::function<void (StringViewUtf8)> const&

# ::stappler::operator<<(memory::function<void (StringViewUtf8)> const&,uint32_t)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* memory::function<void (StringViewUtf8)> const&
* uint32_t

Возвращает:
* memory::function<void (StringViewUtf8)> const&

# ::stappler::operator<<(memory::function<void (StringViewUtf8)> const&,int16_t)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* memory::function<void (StringViewUtf8)> const&
* int16_t

Возвращает:
* memory::function<void (StringViewUtf8)> const&

# ::stappler::operator<<(memory::function<void (StringViewUtf8)> const&,uint16_t)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* memory::function<void (StringViewUtf8)> const&
* uint16_t

Возвращает:
* memory::function<void (StringViewUtf8)> const&

# ::stappler::operator<<(memory::function<void (StringViewUtf8)> const&,int8_t)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* memory::function<void (StringViewUtf8)> const&
* int8_t

Возвращает:
* memory::function<void (StringViewUtf8)> const&

# ::stappler::operator<<(memory::function<void (StringViewUtf8)> const&,uint8_t)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* memory::function<void (StringViewUtf8)> const&
* uint8_t

Возвращает:
* memory::function<void (StringViewUtf8)> const&

# ::stappler::operator<<(memory::function<void (StringViewUtf8)> const&,char32_t)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* memory::function<void (StringViewUtf8)> const&
* char32_t

Возвращает:
* memory::function<void (StringViewUtf8)> const&

# ::stappler::operator<<(memory::function<void (StringViewUtf8)> const&,char16_t)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* memory::function<void (StringViewUtf8)> const&
* char16_t

Возвращает:
* memory::function<void (StringViewUtf8)> const&

# ::stappler::operator<<(memory::function<void (StringViewUtf8)> const&,char)

## BRIEF

Записывает аргумент в функциональный поток

## CONTENT

Записывает аргумент в функциональный поток

Параметры:
* memory::function<void (StringViewUtf8)> const&
* char

Возвращает:
* memory::function<void (StringViewUtf8)> const&

# ::stappler::string::detail::toStringValue(char*,double)

## BRIEF

Записывает значение в строковый буфер

## CONTENT

Записывает значение в строковый буфер

Параметры:
* char*
* double

Возвращает:
* size_t

# ::stappler::string::detail::toStringValue(char*,float)

## BRIEF

Записывает значение в строковый буфер

## CONTENT

Записывает значение в строковый буфер

Параметры:
* char*
* float

Возвращает:
* size_t

# ::stappler::string::detail::toStringValue(char*,int64_t)

## BRIEF

Записывает значение в строковый буфер

## CONTENT

Записывает значение в строковый буфер

Параметры:
* char*
* int64_t

Возвращает:
* size_t

# ::stappler::string::detail::toStringValue(char*,uint64_t)

## BRIEF

Записывает значение в строковый буфер

## CONTENT

Записывает значение в строковый буфер

Параметры:
* char*
* uint64_t

Возвращает:
* size_t

# ::stappler::string::detail::toStringValue(char*,int32_t)

## BRIEF

Записывает значение в строковый буфер

## CONTENT

Записывает значение в строковый буфер

Параметры:
* char*
* int32_t

Возвращает:
* size_t

# ::stappler::string::detail::toStringValue(char*,uint32_t)

## BRIEF

Записывает значение в строковый буфер

## CONTENT

Записывает значение в строковый буфер

Параметры:
* char*
* uint32_t

Возвращает:
* size_t

# ::stappler::string::detail::toStringValue(char*,char32_t)

## BRIEF

Записывает значение в строковый буфер

## CONTENT

Записывает значение в строковый буфер

Параметры:
* char*
* char32_t

Возвращает:
* size_t

# ::stappler::string::detail::toStringValue(char*,char16_t)

## BRIEF

Записывает значение в строковый буфер

## CONTENT

Записывает значение в строковый буфер

Параметры:
* char*
* char16_t

Возвращает:
* size_t

# ::stappler::string::detail::toStringValue(char*,char)

## BRIEF

Записывает значение в строковый буфер

## CONTENT

Записывает значение в строковый буфер

Параметры:
* char*
* char

Возвращает:
* size_t

# ::stappler::string::detail::toStringValue(char*,stappler::StringView const&)

## BRIEF

Записывает значение в строковый буфер

## CONTENT

Записывает значение в строковый буфер

Параметры:
* char*
* stappler::StringView const&

Возвращает:
* size_t

# ::stappler::string::detail::toStringValue(char*,char const*)

## BRIEF

Записывает значение в строковый буфер

## CONTENT

Записывает значение в строковый буфер

Параметры:
* char*
* char const*

Возвращает:
* size_t

# ::stappler::string::detail::toStringValue<size_t>(char*,char const[N])

## BRIEF

Записывает значение в строковый буфер

## CONTENT

Записывает значение в строковый буфер

Параметры шаблона:
* size_t N

Параметры:
* char*
* char const[N]

Возвращает:
* size_t

# ::stappler::string::detail::toStringValue(char*,std::string const&)

## BRIEF

Записывает значение в строковый буфер

## CONTENT

Записывает значение в строковый буфер

Параметры:
* char*
* std::string const&

Возвращает:
* size_t

# ::stappler::string::detail::toStringValue(char*,memory::string const&)

## BRIEF

Записывает значение в строковый буфер

## CONTENT

Записывает значение в строковый буфер

Параметры:
* char*
* memory::string const&

Возвращает:
* size_t

# ::stappler::string::detail::toStringValue(char*,stappler::StringViewUtf8 const&)

## BRIEF

Записывает значение в строковый буфер

## CONTENT

Записывает значение в строковый буфер

Параметры:
* char*
* stappler::StringViewUtf8 const&

Возвращает:
* size_t

# ::stappler::string::detail::toStringType<typename>(char16_t const*)

## BRIEF

Вычисляет длину аргумента для записи в строку

## CONTENT

Вычисляет длину аргумента для записи в строку

Параметры шаблона:
* typename Interface

Параметры:
* char16_t const*

Возвращает:
* typename Interface::StringType

# ::stappler::string::detail::toStringType<typename>(stappler::WideStringView const&)

## BRIEF

Вычисляет длину аргумента для записи в строку

## CONTENT

Вычисляет длину аргумента для записи в строку

Параметры шаблона:
* typename Interface

Параметры:
* stappler::WideStringView const&

Возвращает:
* typename Interface::StringType

# ::stappler::string::detail::toStringType<typename>(std::u16string const&)

## BRIEF

Вычисляет длину аргумента для записи в строку

## CONTENT

Вычисляет длину аргумента для записи в строку

Параметры шаблона:
* typename Interface

Параметры:
* std::u16string const&

Возвращает:
* typename Interface::StringType

# ::stappler::string::detail::toStringType<typename>(memory::u16string const&)

## BRIEF

Вычисляет длину аргумента для записи в строку

## CONTENT

Вычисляет длину аргумента для записи в строку

Параметры шаблона:
* typename Interface

Параметры:
* memory::u16string const&

Возвращает:
* typename Interface::StringType

# ::stappler::string::detail::toStringType<typename,typename>(T const&)

## BRIEF

Вычисляет длину аргумента для записи в строку

## CONTENT

Вычисляет длину аргумента для записи в строку

Параметры шаблона:
* typename Interface
* typename T

Параметры:
* T const&

Возвращает:
* typename Interface::StringType

# ::stappler::string::detail::IsFastToStringAvailableValue<typename>

## BRIEF

Вычисляет, доступен ли быстрый алгоритм toString для набора аргументов

## CONTENT

Вычисляет, доступен ли быстрый алгоритм toString для набора аргументов

Параметры шаблона:
* typename T


# ::stappler::string::detail::IsFastToStringAvailableValue<typename>::value

## BRIEF

Вычисляет, доступен ли быстрый алгоритм toString для набора аргументов

## CONTENT

Вычисляет, доступен ли быстрый алгоритм toString для набора аргументов

Тип: bool const


# ::stappler::string::detail::IsFastToStringAvailableValue<char[N]>::IsFastToStringAvailableValue<char[N]>

## BRIEF

Вычисляет, доступен ли быстрый алгоритм toString для набора аргументов

## CONTENT

Вычисляет, доступен ли быстрый алгоритм toString для набора аргументов

Параметры шаблона:
* size_t N


# ::stappler::string::detail::IsFastToStringAvailableValue<char[N]>::value

## BRIEF

Вычисляет, доступен ли быстрый алгоритм toString для набора аргументов

## CONTENT

Вычисляет, доступен ли быстрый алгоритм toString для набора аргументов

Тип: bool const


# ::stappler::string::detail::IsFastToStringAvailableValue<char*>::IsFastToStringAvailableValue<char*>

## BRIEF

Вычисляет, доступен ли быстрый алгоритм toString для набора аргументов

## CONTENT

Вычисляет, доступен ли быстрый алгоритм toString для набора аргументов


# ::stappler::string::detail::IsFastToStringAvailableValue<char*>::value

## BRIEF

Вычисляет, доступен ли быстрый алгоритм toString для набора аргументов

## CONTENT

Вычисляет, доступен ли быстрый алгоритм toString для набора аргументов

Тип: bool const


# ::stappler::string::detail::IsFastToStringAvailableValue<StringView>::IsFastToStringAvailableValue<StringView>

## BRIEF

Вычисляет, доступен ли быстрый алгоритм toString для набора аргументов

## CONTENT

Вычисляет, доступен ли быстрый алгоритм toString для набора аргументов


# ::stappler::string::detail::IsFastToStringAvailableValue<StringView>::value

## BRIEF

Вычисляет, доступен ли быстрый алгоритм toString для набора аргументов

## CONTENT

Вычисляет, доступен ли быстрый алгоритм toString для набора аргументов

Тип: bool const


# ::stappler::string::detail::IsFastToStringAvailableValue<std::string>::IsFastToStringAvailableValue<std::string>

## BRIEF

Вычисляет, доступен ли быстрый алгоритм toString для набора аргументов

## CONTENT

Вычисляет, доступен ли быстрый алгоритм toString для набора аргументов


# ::stappler::string::detail::IsFastToStringAvailableValue<std::string>::value

## BRIEF

Вычисляет, доступен ли быстрый алгоритм toString для набора аргументов

## CONTENT

Вычисляет, доступен ли быстрый алгоритм toString для набора аргументов

Тип: bool const


# ::stappler::string::detail::IsFastToStringAvailableValue<memory::string>::IsFastToStringAvailableValue<memory::string>

## BRIEF

Вычисляет, доступен ли быстрый алгоритм toString для набора аргументов

## CONTENT

Вычисляет, доступен ли быстрый алгоритм toString для набора аргументов


# ::stappler::string::detail::IsFastToStringAvailableValue<memory::string>::value

## BRIEF

Вычисляет, доступен ли быстрый алгоритм toString для набора аргументов

## CONTENT

Вычисляет, доступен ли быстрый алгоритм toString для набора аргументов

Тип: bool const


# ::stappler::string::detail::IsFastToStringAvailableValue<char>::IsFastToStringAvailableValue<char>

## BRIEF

Вычисляет, доступен ли быстрый алгоритм toString для набора аргументов

## CONTENT

Вычисляет, доступен ли быстрый алгоритм toString для набора аргументов


# ::stappler::string::detail::IsFastToStringAvailableValue<char>::value

## BRIEF

Вычисляет, доступен ли быстрый алгоритм toString для набора аргументов

## CONTENT

Вычисляет, доступен ли быстрый алгоритм toString для набора аргументов

Тип: bool const


# ::stappler::string::detail::IsFastToStringAvailableValue<char16_t>::IsFastToStringAvailableValue<char16_t>

## BRIEF

Вычисляет, доступен ли быстрый алгоритм toString для набора аргументов

## CONTENT

Вычисляет, доступен ли быстрый алгоритм toString для набора аргументов


# ::stappler::string::detail::IsFastToStringAvailableValue<char16_t>::value

## BRIEF

Вычисляет, доступен ли быстрый алгоритм toString для набора аргументов

## CONTENT

Вычисляет, доступен ли быстрый алгоритм toString для набора аргументов

Тип: bool const


# ::stappler::string::detail::IsFastToStringAvailableValue<char32_t>::IsFastToStringAvailableValue<char32_t>

## BRIEF

Вычисляет, доступен ли быстрый алгоритм toString для набора аргументов

## CONTENT

Вычисляет, доступен ли быстрый алгоритм toString для набора аргументов


# ::stappler::string::detail::IsFastToStringAvailableValue<char32_t>::value

## BRIEF

Вычисляет, доступен ли быстрый алгоритм toString для набора аргументов

## CONTENT

Вычисляет, доступен ли быстрый алгоритм toString для набора аргументов

Тип: bool const


# ::stappler::string::detail::IsFastToStringAvailableValue<int64_t>::IsFastToStringAvailableValue<int64_t>

## BRIEF

Вычисляет, доступен ли быстрый алгоритм toString для набора аргументов

## CONTENT

Вычисляет, доступен ли быстрый алгоритм toString для набора аргументов


# ::stappler::string::detail::IsFastToStringAvailableValue<int64_t>::value

## BRIEF

Вычисляет, доступен ли быстрый алгоритм toString для набора аргументов

## CONTENT

Вычисляет, доступен ли быстрый алгоритм toString для набора аргументов

Тип: bool const


# ::stappler::string::detail::IsFastToStringAvailableValue<uint64_t>::IsFastToStringAvailableValue<uint64_t>

## BRIEF

Вычисляет, доступен ли быстрый алгоритм toString для набора аргументов

## CONTENT

Вычисляет, доступен ли быстрый алгоритм toString для набора аргументов


# ::stappler::string::detail::IsFastToStringAvailableValue<uint64_t>::value

## BRIEF

Вычисляет, доступен ли быстрый алгоритм toString для набора аргументов

## CONTENT

Вычисляет, доступен ли быстрый алгоритм toString для набора аргументов

Тип: bool const


# ::stappler::string::detail::IsFastToStringAvailableValue<int32_t>::IsFastToStringAvailableValue<int32_t>

## BRIEF

Вычисляет, доступен ли быстрый алгоритм toString для набора аргументов

## CONTENT

Вычисляет, доступен ли быстрый алгоритм toString для набора аргументов


# ::stappler::string::detail::IsFastToStringAvailableValue<int32_t>::value

## BRIEF

Вычисляет, доступен ли быстрый алгоритм toString для набора аргументов

## CONTENT

Вычисляет, доступен ли быстрый алгоритм toString для набора аргументов

Тип: bool const


# ::stappler::string::detail::IsFastToStringAvailableValue<uint32_t>::IsFastToStringAvailableValue<uint32_t>

## BRIEF

Вычисляет, доступен ли быстрый алгоритм toString для набора аргументов

## CONTENT

Вычисляет, доступен ли быстрый алгоритм toString для набора аргументов


# ::stappler::string::detail::IsFastToStringAvailableValue<uint32_t>::value

## BRIEF

Вычисляет, доступен ли быстрый алгоритм toString для набора аргументов

## CONTENT

Вычисляет, доступен ли быстрый алгоритм toString для набора аргументов

Тип: bool const


# ::stappler::string::detail::IsFastToStringAvailableValue<int16_t>::IsFastToStringAvailableValue<int16_t>

## BRIEF

Вычисляет, доступен ли быстрый алгоритм toString для набора аргументов

## CONTENT

Вычисляет, доступен ли быстрый алгоритм toString для набора аргументов


# ::stappler::string::detail::IsFastToStringAvailableValue<int16_t>::value

## BRIEF

Вычисляет, доступен ли быстрый алгоритм toString для набора аргументов

## CONTENT

Вычисляет, доступен ли быстрый алгоритм toString для набора аргументов

Тип: bool const


# ::stappler::string::detail::IsFastToStringAvailableValue<uint16_t>::IsFastToStringAvailableValue<uint16_t>

## BRIEF

Вычисляет, доступен ли быстрый алгоритм toString для набора аргументов

## CONTENT

Вычисляет, доступен ли быстрый алгоритм toString для набора аргументов


# ::stappler::string::detail::IsFastToStringAvailableValue<uint16_t>::value

## BRIEF

Вычисляет, доступен ли быстрый алгоритм toString для набора аргументов

## CONTENT

Вычисляет, доступен ли быстрый алгоритм toString для набора аргументов

Тип: bool const


# ::stappler::string::detail::IsFastToStringAvailableValue<int8_t>::IsFastToStringAvailableValue<int8_t>

## BRIEF

Вычисляет, доступен ли быстрый алгоритм toString для набора аргументов

## CONTENT

Вычисляет, доступен ли быстрый алгоритм toString для набора аргументов


# ::stappler::string::detail::IsFastToStringAvailableValue<int8_t>::value

## BRIEF

Вычисляет, доступен ли быстрый алгоритм toString для набора аргументов

## CONTENT

Вычисляет, доступен ли быстрый алгоритм toString для набора аргументов

Тип: bool const


# ::stappler::string::detail::IsFastToStringAvailableValue<uint8_t>::IsFastToStringAvailableValue<uint8_t>

## BRIEF

Вычисляет, доступен ли быстрый алгоритм toString для набора аргументов

## CONTENT

Вычисляет, доступен ли быстрый алгоритм toString для набора аргументов


# ::stappler::string::detail::IsFastToStringAvailableValue<uint8_t>::value

## BRIEF

Вычисляет, доступен ли быстрый алгоритм toString для набора аргументов

## CONTENT

Вычисляет, доступен ли быстрый алгоритм toString для набора аргументов

Тип: bool const


# ::stappler::string::detail::IsFastToStringAvailableValue<double>::IsFastToStringAvailableValue<double>

## BRIEF

Вычисляет, доступен ли быстрый алгоритм toString для набора аргументов

## CONTENT

Вычисляет, доступен ли быстрый алгоритм toString для набора аргументов


# ::stappler::string::detail::IsFastToStringAvailableValue<double>::value

## BRIEF

Вычисляет, доступен ли быстрый алгоритм toString для набора аргументов

## CONTENT

Вычисляет, доступен ли быстрый алгоритм toString для набора аргументов

Тип: bool const


# ::stappler::string::detail::IsFastToStringAvailableValue<float>::IsFastToStringAvailableValue<float>

## BRIEF

Вычисляет, доступен ли быстрый алгоритм toString для набора аргументов

## CONTENT

Вычисляет, доступен ли быстрый алгоритм toString для набора аргументов


# ::stappler::string::detail::IsFastToStringAvailableValue<float>::value

## BRIEF

Вычисляет, доступен ли быстрый алгоритм toString для набора аргументов

## CONTENT

Вычисляет, доступен ли быстрый алгоритм toString для набора аргументов

Тип: bool const


# ::stappler::string::detail::IsFastToStringAvailable<typename>

## BRIEF

Вычисляет, доступен ли быстрый алгоритм toString для набора аргументов

## CONTENT

Вычисляет, доступен ли быстрый алгоритм toString для набора аргументов

Параметры шаблона:
* typename Args


# ::stappler::string::detail::IsFastToStringAvailable<T,Args...>::IsFastToStringAvailable<T,Args...>

## BRIEF

Вычисляет, доступен ли быстрый алгоритм toString для набора аргументов

## CONTENT

Вычисляет, доступен ли быстрый алгоритм toString для набора аргументов

Параметры шаблона:
* typename T
* typename Args


# ::stappler::string::detail::IsFastToStringAvailable<T,Args...>::value

## BRIEF

Вычисляет, доступен ли быстрый алгоритм toString для набора аргументов

## CONTENT

Вычисляет, доступен ли быстрый алгоритм toString для набора аргументов

Тип: bool const


# ::stappler::string::detail::IsFastToStringAvailable<T>::IsFastToStringAvailable<T>

## BRIEF

Вычисляет, доступен ли быстрый алгоритм toString для набора аргументов

## CONTENT

Вычисляет, доступен ли быстрый алгоритм toString для набора аргументов

Параметры шаблона:
* typename T


# ::stappler::string::detail::IsFastToStringAvailable<T>::value

## BRIEF

Вычисляет, доступен ли быстрый алгоритм toString для набора аргументов

## CONTENT

Вычисляет, доступен ли быстрый алгоритм toString для набора аргументов

Тип: bool const


# ::stappler::string::detail::getBufferSizeValue(char const*)

## BRIEF

Вычисляет размер буфера для быстрого toString

## CONTENT

Вычисляет размер буфера для быстрого toString

Параметры:
* char const*

Возвращает:
* size_t

# ::stappler::string::detail::getBufferSizeValue<size_t>(char const[N])

## BRIEF

Вычисляет размер буфера для быстрого toString

## CONTENT

Вычисляет размер буфера для быстрого toString

Параметры шаблона:
* size_t N

Параметры:
* char const[N]

Возвращает:
* size_t

# ::stappler::string::detail::getBufferSizeValue(stappler::StringView const&)

## BRIEF

Вычисляет размер буфера для быстрого toString

## CONTENT

Вычисляет размер буфера для быстрого toString

Параметры:
* stappler::StringView const&

Возвращает:
* size_t

# ::stappler::string::detail::getBufferSizeValue(stappler::StringViewUtf8 const&)

## BRIEF

Вычисляет размер буфера для быстрого toString

## CONTENT

Вычисляет размер буфера для быстрого toString

Параметры:
* stappler::StringViewUtf8 const&

Возвращает:
* size_t

# ::stappler::string::detail::getBufferSizeValue(std::string const&)

## BRIEF

Вычисляет размер буфера для быстрого toString

## CONTENT

Вычисляет размер буфера для быстрого toString

Параметры:
* std::string const&

Возвращает:
* size_t

# ::stappler::string::detail::getBufferSizeValue(memory::string const&)

## BRIEF

Вычисляет размер буфера для быстрого toString

## CONTENT

Вычисляет размер буфера для быстрого toString

Параметры:
* memory::string const&

Возвращает:
* size_t

# ::stappler::string::detail::getBufferSizeValue(char const&)

## BRIEF

Вычисляет размер буфера для быстрого toString

## CONTENT

Вычисляет размер буфера для быстрого toString

Параметры:
* char const&

Возвращает:
* size_t

# ::stappler::string::detail::getBufferSizeValue(char16_t const&)

## BRIEF

Вычисляет размер буфера для быстрого toString

## CONTENT

Вычисляет размер буфера для быстрого toString

Параметры:
* char16_t const&

Возвращает:
* size_t

# ::stappler::string::detail::getBufferSizeValue(char32_t const&)

## BRIEF

Вычисляет размер буфера для быстрого toString

## CONTENT

Вычисляет размер буфера для быстрого toString

Параметры:
* char32_t const&

Возвращает:
* size_t

# ::stappler::string::detail::getBufferSizeValue(int64_t const&)

## BRIEF

Вычисляет размер буфера для быстрого toString

## CONTENT

Вычисляет размер буфера для быстрого toString

Параметры:
* int64_t const&

Возвращает:
* size_t

# ::stappler::string::detail::getBufferSizeValue(uint64_t const&)

## BRIEF

Вычисляет размер буфера для быстрого toString

## CONTENT

Вычисляет размер буфера для быстрого toString

Параметры:
* uint64_t const&

Возвращает:
* size_t

# ::stappler::string::detail::getBufferSizeValue(int32_t const&)

## BRIEF

Вычисляет размер буфера для быстрого toString

## CONTENT

Вычисляет размер буфера для быстрого toString

Параметры:
* int32_t const&

Возвращает:
* size_t

# ::stappler::string::detail::getBufferSizeValue(uint32_t const&)

## BRIEF

Вычисляет размер буфера для быстрого toString

## CONTENT

Вычисляет размер буфера для быстрого toString

Параметры:
* uint32_t const&

Возвращает:
* size_t

# ::stappler::string::detail::getBufferSizeValue(int16_t const&)

## BRIEF

Вычисляет размер буфера для быстрого toString

## CONTENT

Вычисляет размер буфера для быстрого toString

Параметры:
* int16_t const&

Возвращает:
* size_t

# ::stappler::string::detail::getBufferSizeValue(uint16_t const&)

## BRIEF

Вычисляет размер буфера для быстрого toString

## CONTENT

Вычисляет размер буфера для быстрого toString

Параметры:
* uint16_t const&

Возвращает:
* size_t

# ::stappler::string::detail::getBufferSizeValue(int8_t const&)

## BRIEF

Вычисляет размер буфера для быстрого toString

## CONTENT

Вычисляет размер буфера для быстрого toString

Параметры:
* int8_t const&

Возвращает:
* size_t

# ::stappler::string::detail::getBufferSizeValue(uint8_t const&)

## BRIEF

Вычисляет размер буфера для быстрого toString

## CONTENT

Вычисляет размер буфера для быстрого toString

Параметры:
* uint8_t const&

Возвращает:
* size_t

# ::stappler::string::detail::getBufferSizeValue(double const&)

## BRIEF

Вычисляет размер буфера для быстрого toString

## CONTENT

Вычисляет размер буфера для быстрого toString

Параметры:
* double const&

Возвращает:
* size_t

# ::stappler::string::detail::getBufferSizeValue(float const&)

## BRIEF

Вычисляет размер буфера для быстрого toString

## CONTENT

Вычисляет размер буфера для быстрого toString

Параметры:
* float const&

Возвращает:
* size_t

# ::stappler::string::detail::getBufferSize()

## BRIEF

Вычисляет размер буфера для быстрого toString

## CONTENT

Вычисляет размер буфера для быстрого toString

Возвращает:
* size_t

# ::stappler::string::detail::getBufferSize<typename>(T const&)

## BRIEF

Вычисляет размер буфера для быстрого toString

## CONTENT

Вычисляет размер буфера для быстрого toString

Параметры шаблона:
* typename T

Параметры:
* T const&

Возвращает:
* size_t

# ::stappler::string::detail::getBufferSize<typename,typename>(T&&,Args &&...)

## BRIEF

Вычисляет размер буфера для быстрого toString

## CONTENT

Вычисляет размер буфера для быстрого toString

Параметры шаблона:
* typename T
* typename Args

Параметры:
* T&&
* Args &&...

Возвращает:
* size_t

# ::stappler::string::detail::writeBuffer(char*)

## BRIEF

Записывает аргументы в буфер

## CONTENT

Записывает аргументы в буфер

Параметры:
* char*

Возвращает:
* size_t

# ::stappler::string::detail::writeBuffer<typename>(char*,T const&)

## BRIEF

Записывает аргументы в буфер

## CONTENT

Записывает аргументы в буфер

Параметры шаблона:
* typename T

Параметры:
* char*
* T const&

Возвращает:
* size_t

# ::stappler::string::detail::writeBuffer<typename,typename>(char*,T&&,Args &&...)

## BRIEF

Записывает аргументы в буфер

## CONTENT

Записывает аргументы в буфер

Параметры шаблона:
* typename T
* typename Args

Параметры:
* char*
* T&&
* Args &&...

Возвращает:
* size_t

# ::stappler::string::detail::toStringStream<typename>(Stream&)

## BRIEF

Записывает аргументы в поток

## CONTENT

Записывает аргументы в поток

Параметры шаблона:
* typename Stream

Параметры:
* Stream&


# ::stappler::string::detail::toStringStream<typename>(Stream&,char16_t)

## BRIEF

Записывает аргументы в поток

## CONTENT

Записывает аргументы в поток

Параметры шаблона:
* typename Stream

Параметры:
* Stream&
* char16_t


# ::stappler::string::detail::toStringStream<typename>(Stream&,char16_t const*)

## BRIEF

Записывает аргументы в поток

## CONTENT

Записывает аргументы в поток

Параметры шаблона:
* typename Stream

Параметры:
* Stream&
* char16_t const*


# ::stappler::string::detail::toStringStream<typename>(Stream&,stappler::WideStringView const&)

## BRIEF

Записывает аргументы в поток

## CONTENT

Записывает аргументы в поток

Параметры шаблона:
* typename Stream

Параметры:
* Stream&
* stappler::WideStringView const&


# ::stappler::string::detail::toStringStream<typename>(Stream&,std::u16string const&)

## BRIEF

Записывает аргументы в поток

## CONTENT

Записывает аргументы в поток

Параметры шаблона:
* typename Stream

Параметры:
* Stream&
* std::u16string const&


# ::stappler::string::detail::toStringStream<typename>(Stream&,memory::u16string const&)

## BRIEF

Записывает аргументы в поток

## CONTENT

Записывает аргументы в поток

Параметры шаблона:
* typename Stream

Параметры:
* Stream&
* memory::u16string const&


# ::stappler::string::detail::toStringStream<typename,typename>(Stream&,T)

## BRIEF

Записывает аргументы в поток

## CONTENT

Записывает аргументы в поток

Параметры шаблона:
* typename Stream
* typename T

Параметры:
* Stream&
* T


# ::stappler::string::detail::toStringStream<typename,typename,typename>(Stream&,T,Args &&...)

## BRIEF

Записывает аргументы в поток

## CONTENT

Записывает аргументы в поток

Параметры шаблона:
* typename Stream
* typename T
* typename Args

Параметры:
* Stream&
* T
* Args &&...


# ::stappler::string::toString<typename,typename>(Args &&...)

## BRIEF

Конвертирует произвольный набор аргументов в строку

## CONTENT

Конвертирует произвольный набор аргументов в строку.

Реализованы два алгоритма.

Быстрый алгоритм не работает для всех видов аргументов, только для основных чисел и строк. Он распределяет буфер заранее известного размера, после чего записывает в него аргументы. Быстрый алгоритм также конвертирует одиночные символы в UTF-8 при необходимости. Быстрый алгоритм не испоьзует дополнительную память.

Если хотя бы один аргумент не может быть использован в быстром алгоритме, используется алгоритм создания строки через строковый поток.

Алгоритм выбирается на этапе компиляции вызова этой функции.

Параметры шаблона:
* typename Interface - используемый интерфейс памяти
* typename Args

Параметры:
* Args &&...

Возвращает:
* typename Interface::StringType - конкатенация всех аргументов в виде строки


# ::stappler::detail::streamWrite<typename>(FunctionalStream const&,int16_t)

## BRIEF

Выводит число в поток

## CONTENT

Выводит число в поток

Параметры шаблона:
* typename FunctionalStream

Параметры:
* FunctionalStream const&
* int16_t


# ::stappler::detail::streamWrite<typename>(FunctionalStream const&,uint16_t)

## BRIEF

Выводит число в поток

## CONTENT

Выводит число в поток

Параметры шаблона:
* typename FunctionalStream

Параметры:
* FunctionalStream const&
* uint16_t


# ::stappler::detail::streamWrite<typename>(FunctionalStream const&,int8_t)

## BRIEF

Выводит число в поток

## CONTENT

Выводит число в поток

Параметры шаблона:
* typename FunctionalStream

Параметры:
* FunctionalStream const&
* int8_t


# ::stappler::detail::streamWrite<typename>(FunctionalStream const&,uint8_t)

## BRIEF

Выводит число в поток

## CONTENT

Выводит число в поток

Параметры шаблона:
* typename FunctionalStream

Параметры:
* FunctionalStream const&
* uint8_t

# ::stappler::operator<<(int const&,int const&)

## BRIEF

Выводит число в поток

## CONTENT

Выводит число в поток

Параметры:
* int const&
* int const&

Возвращает:
* int

# ::stappler::operator<<(int const&,uint8_t const&)

## BRIEF

Выводит число в поток

## CONTENT

Выводит число в поток

Параметры:
* int const&
* uint8_t const&

Возвращает:
* int