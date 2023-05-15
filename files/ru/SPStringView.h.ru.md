Title: SPStringView.h


# LIBSTAPPLER_COMMON_STRING_SPSTRINGVIEW_H_

## BRIEF

## CONTENT


# ::stappler::const_char_ptr

## BRIEF

## CONTENT


# ::stappler::const_char16_ptr

## BRIEF

## CONTENT


# ::stappler::StringView_readNumber<typename>(stappler::const_char_ptr&,size_t&,int)

## BRIEF

## CONTENT

Параметры шаблона:
* typename T

Параметры:
* stappler::const_char_ptr&
* size_t&
* int

Возвращает:
* Result<T>

# ::stappler::StringView_readNumber<typename>(stappler::const_char16_ptr&,size_t&,int)

## BRIEF

## CONTENT

Параметры шаблона:
* typename T

Параметры:
* stappler::const_char16_ptr&
* size_t&
* int

Возвращает:
* Result<T>

# ::stappler::ReaderClassBase<typename>

## BRIEF

## CONTENT

Параметры шаблона:
* typename CharType


# ::stappler::ReaderClassBase<typename>::Chars<CharType...>

## BRIEF

## CONTENT

Параметры шаблона:
* CharType Args


# ::stappler::ReaderClassBase<typename>::Range<CharType,CharType>

## BRIEF

## CONTENT

Параметры шаблона:
* CharType First
* CharType Last


# ::stappler::ReaderClassBase<typename>::GroupId

## BRIEF

## CONTENT


# ::stappler::ReaderClassBase<typename>::Group<GroupId>

## BRIEF

## CONTENT

Параметры шаблона:
* GroupId G


# ::stappler::StringViewBase<typename>

## BRIEF

## CONTENT

Параметры шаблона:
* typename _CharType

Базовые классы:
* BytesReader<_CharType>


# ::stappler::StringViewBase<typename>::Self

## BRIEF

## CONTENT

Доступ: public


# ::stappler::StringViewBase<typename>::MatchCharType

## BRIEF

## CONTENT

Доступ: public


# ::stappler::StringViewBase<typename>::CharType

## BRIEF

## CONTENT

Доступ: public


# ::stappler::StringViewBase<typename>::value_type

## BRIEF

## CONTENT

Доступ: public


# ::stappler::StringViewBase<typename>::TraitsType

## BRIEF

## CONTENT

Доступ: public


# ::stappler::StringViewBase<typename>::PoolString

## BRIEF

## CONTENT

Доступ: public


# ::stappler::StringViewBase<typename>::StdString

## BRIEF

## CONTENT

Доступ: public


# ::stappler::StringViewBase<typename>::MatchChars<CharType...>

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* CharType Args


# ::stappler::StringViewBase<typename>::MatchRange<char,char>

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* char First
* char Last


# ::stappler::StringViewBase<typename>::MatchCharGroup<stappler::CharGroupId>

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* stappler::CharGroupId Group


# ::stappler::StringViewBase<typename>::Numbers

## BRIEF

## CONTENT

Доступ: public


# ::stappler::StringViewBase<typename>::Latin

## BRIEF

## CONTENT

Доступ: public


# ::stappler::StringViewBase<typename>::WhiteSpace

## BRIEF

## CONTENT

Доступ: public


# ::stappler::StringViewBase<typename>::LatinLowercase

## BRIEF

## CONTENT

Доступ: public


# ::stappler::StringViewBase<typename>::LatinUppercase

## BRIEF

## CONTENT

Доступ: public


# ::stappler::StringViewBase<typename>::Alphanumeric

## BRIEF

## CONTENT

Доступ: public


# ::stappler::StringViewBase<typename>::Hexadecimial

## BRIEF

## CONTENT

Доступ: public


# ::stappler::StringViewBase<typename>::Base64

## BRIEF

## CONTENT

Доступ: public


# ::stappler::StringViewBase<typename>::merge<typename,typename>(Args &&...)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename Interface
* typename Args

Параметры:
* Args &&...

Возвращает:
* typename Interface::template BasicStringType<stappler::StringViewBase::CharType>

# ::stappler::StringViewBase<typename>::StringViewBase()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::StringViewBase<typename>::StringViewBase(stappler::StringViewBase::CharType const*,size_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringViewBase::CharType const*
* size_t


# ::stappler::StringViewBase<typename>::StringViewBase(stappler::StringViewBase::CharType const*,size_t,size_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringViewBase::CharType const*
* size_t
* size_t


# ::stappler::StringViewBase<typename>::StringViewBase(stappler::StringViewBase::Self const&,size_t,size_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringViewBase::Self const&
* size_t
* size_t


# ::stappler::StringViewBase<typename>::StringViewBase(stappler::StringViewBase::Self const&,size_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringViewBase::Self const&
* size_t


# ::stappler::StringViewBase<typename>::StringViewBase(stappler::StringViewBase::PoolString const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringViewBase::PoolString const&


# ::stappler::StringViewBase<typename>::StringViewBase(stappler::StringViewBase::StdString const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringViewBase::StdString const&


# ::stappler::StringViewBase<typename>::operator=(stappler::StringViewBase::PoolString const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringViewBase::PoolString const&

Возвращает:
* Self&

# ::stappler::StringViewBase<typename>::operator=(stappler::StringViewBase::StdString const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringViewBase::StdString const&

Возвращает:
* Self&

# ::stappler::StringViewBase<typename>::operator=(stappler::StringViewBase::Self const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringViewBase::Self const&

Возвращает:
* Self&

# ::stappler::StringViewBase<typename>::set(stappler::StringViewBase::PoolString const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringViewBase::PoolString const&

Возвращает:
* Self&

# ::stappler::StringViewBase<typename>::set(stappler::StringViewBase::StdString const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringViewBase::StdString const&

Возвращает:
* Self&

# ::stappler::StringViewBase<typename>::set(stappler::StringViewBase::Self const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringViewBase::Self const&

Возвращает:
* Self&

# ::stappler::StringViewBase<typename>::set(stappler::StringViewBase::CharType const*,size_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringViewBase::CharType const*
* size_t

Возвращает:
* Self&

# ::stappler::StringViewBase<typename>::operator==(stappler::StringViewBase::Self const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringViewBase::Self const&

Возвращает:
* bool

# ::stappler::StringViewBase<typename>::operator!=(stappler::StringViewBase::Self const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringViewBase::Self const&

Возвращает:
* bool

# ::stappler::StringViewBase<typename>::is(stappler::StringViewBase::CharType const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringViewBase::CharType const&

Возвращает:
* bool

# ::stappler::StringViewBase<typename>::is(stappler::StringViewBase::CharType const*) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringViewBase::CharType const*

Возвращает:
* bool

# ::stappler::StringViewBase<typename>::is(stappler::StringViewBase::Self const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringViewBase::Self const&

Возвращает:
* bool

# ::stappler::StringViewBase<typename>::is<stappler::StringViewBase::CharType>() const

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* stappler::StringViewBase::CharType C

Возвращает:
* bool

# ::stappler::StringViewBase<typename>::is<stappler::CharGroupId>() const

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* stappler::CharGroupId G

Возвращает:
* bool

# ::stappler::StringViewBase<typename>::is<typename>() const

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename M

Возвращает:
* bool

# ::stappler::StringViewBase<typename>::sub(size_t,size_t) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* size_t
* size_t

Возвращает:
* Self

# ::stappler::StringViewBase<typename>::pdup(memory::pool_t*) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* memory::pool_t*

Возвращает:
* Self

# ::stappler::StringViewBase<typename>::str<typename>() const

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename Interface

Возвращает:
* typename Interface::template BasicStringType<stappler::StringViewBase::CharType>

# ::stappler::StringViewBase<typename>::operator++()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Self&

# ::stappler::StringViewBase<typename>::operator++(int)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* int

Возвращает:
* Self&

# ::stappler::StringViewBase<typename>::operator+=(size_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* size_t

Возвращает:
* Self&

# ::stappler::StringViewBase<typename>::begin() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Self

# ::stappler::StringViewBase<typename>::end() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Self

# ::stappler::StringViewBase<typename>::operator-(stappler::StringViewBase::Self const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringViewBase::Self const&

Возвращает:
* Self

# ::stappler::StringViewBase<typename>::operator-=(stappler::StringViewBase::Self const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringViewBase::Self const&

Возвращает:
* Self&

# ::stappler::StringViewBase<typename>::hash() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint64_t

# ::stappler::StringViewBase<typename>::hash32() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint64_t

# ::stappler::StringViewBase<typename>::readFloat()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Result<float>

# ::stappler::StringViewBase<typename>::readDouble()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Result<double>

# ::stappler::StringViewBase<typename>::readInteger(int)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* int

Возвращает:
* Result<int64_t>

# ::stappler::StringViewBase<typename>::skipChars<typename>()

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename Args


# ::stappler::StringViewBase<typename>::skipUntil<typename>()

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename Args


# ::stappler::StringViewBase<typename>::backwardSkipChars<typename>()

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename Args


# ::stappler::StringViewBase<typename>::backwardSkipUntil<typename>()

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename Args


# ::stappler::StringViewBase<typename>::skipString(stappler::StringViewBase::Self const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringViewBase::Self const&

Возвращает:
* bool

# ::stappler::StringViewBase<typename>::skipUntilString(stappler::StringViewBase::Self const&,bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringViewBase::Self const&
* bool

Возвращает:
* bool

# ::stappler::StringViewBase<typename>::readChars<typename>()

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename Args

Возвращает:
* Self

# ::stappler::StringViewBase<typename>::readUntil<typename>()

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename Args

Возвращает:
* Self

# ::stappler::StringViewBase<typename>::backwardReadChars<typename>()

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename Args

Возвращает:
* Self

# ::stappler::StringViewBase<typename>::backwardReadUntil<typename>()

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename Args

Возвращает:
* Self

# ::stappler::StringViewBase<typename>::readUntilString(stappler::StringViewBase::Self const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringViewBase::Self const&

Возвращает:
* Self

# ::stappler::StringViewBase<typename>::split<typename,typename>(Callback const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename Separator
* typename Callback

Параметры:
* Callback const&


# ::stappler::StringViewBase<typename>::trimChars<typename>()

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename Args


# ::stappler::StringViewBase<typename>::trimUntil<typename>()

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename Args


# ::stappler::StringViewBase<typename>::__size<typename>(T const&)

## BRIEF

## CONTENT

Доступ: protected

Параметры шаблона:
* typename T

Параметры:
* T const&

Возвращает:
* size_t

# ::stappler::StringViewBase<typename>::__size(stappler::StringViewBase::CharType const*)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::StringViewBase::CharType const*

Возвращает:
* size_t

# ::stappler::StringViewBase<typename>::_size<typename,typename>(T&&)

## BRIEF

## CONTENT

Доступ: protected

Параметры шаблона:
* typename T
* typename Args

Параметры:
* T&&

Возвращает:
* size_t

# ::stappler::StringViewBase<typename>::_size<typename,typename>(T&&,Args &&...)

## BRIEF

## CONTENT

Доступ: protected

Параметры шаблона:
* typename T
* typename Args

Параметры:
* T&&
* Args &&...

Возвращает:
* size_t

# ::stappler::StringViewBase<typename>::__merge<typename,typename>(Buf&,T const&)

## BRIEF

## CONTENT

Доступ: protected

Параметры шаблона:
* typename Buf
* typename T

Параметры:
* Buf&
* T const&


# ::stappler::StringViewBase<typename>::__merge<typename>(Buf&,stappler::StringViewBase::CharType const*)

## BRIEF

## CONTENT

Доступ: protected

Параметры шаблона:
* typename Buf

Параметры:
* Buf&
* stappler::StringViewBase::CharType const*


# ::stappler::StringViewBase<typename>::_merge<typename,typename,typename>(Buf&,T&&,Args &&...)

## BRIEF

## CONTENT

Доступ: protected

Параметры шаблона:
* typename Buf
* typename T
* typename Args

Параметры:
* Buf&
* T&&
* Args &&...


# ::stappler::StringViewBase<typename>::_merge<typename,typename>(Buf&,T&&)

## BRIEF

## CONTENT

Доступ: protected

Параметры шаблона:
* typename Buf
* typename T

Параметры:
* Buf&
* T&&


# ::stappler::StringViewBase<typename>::match<typename>(stappler::StringViewBase::CharType)

## BRIEF

## CONTENT

Доступ: protected

Параметры шаблона:
* typename Args

Параметры:
* stappler::StringViewBase::CharType

Возвращает:
* bool

# ::stappler::StringViewUtf8

## BRIEF

## CONTENT

Базовые классы:
* BytesReader<char>


# ::stappler::StringViewUtf8::Self

## BRIEF

## CONTENT

Доступ: public


# ::stappler::StringViewUtf8::MatchCharType

## BRIEF

## CONTENT

Доступ: public


# ::stappler::StringViewUtf8::CharType

## BRIEF

## CONTENT

Доступ: public


# ::stappler::StringViewUtf8::value_type

## BRIEF

## CONTENT

Доступ: public


# ::stappler::StringViewUtf8::TraitsType

## BRIEF

## CONTENT

Доступ: public


# ::stappler::StringViewUtf8::PoolString

## BRIEF

## CONTENT

Доступ: public


# ::stappler::StringViewUtf8::StdString

## BRIEF

## CONTENT

Доступ: public


# ::stappler::StringViewUtf8::MatchChars<MatchCharType...>

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* MatchCharType Args


# ::stappler::StringViewUtf8::MatchRange<char,char>

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* char First
* char Last


# ::stappler::StringViewUtf8::MatchCharGroup<stappler::CharGroupId>

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* stappler::CharGroupId Group


# ::stappler::StringViewUtf8::MatchCompose<typename>

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename Args


# ::stappler::StringViewUtf8::Chars<MatchCharType...>

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* MatchCharType Args


# ::stappler::StringViewUtf8::Range<char,char>

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* char First
* char Last


# ::stappler::StringViewUtf8::CharGroup<stappler::CharGroupId>

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* stappler::CharGroupId Group


# ::stappler::StringViewUtf8::Compose<typename>

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename Args


# ::stappler::StringViewUtf8::Numbers

## BRIEF

## CONTENT

Доступ: public


# ::stappler::StringViewUtf8::Latin

## BRIEF

## CONTENT

Доступ: public


# ::stappler::StringViewUtf8::WhiteSpace

## BRIEF

## CONTENT

Доступ: public


# ::stappler::StringViewUtf8::LatinLowercase

## BRIEF

## CONTENT

Доступ: public


# ::stappler::StringViewUtf8::LatinUppercase

## BRIEF

## CONTENT

Доступ: public


# ::stappler::StringViewUtf8::Alphanumeric

## BRIEF

## CONTENT

Доступ: public


# ::stappler::StringViewUtf8::Hexadecimial

## BRIEF

## CONTENT

Доступ: public


# ::stappler::StringViewUtf8::Base64

## BRIEF

## CONTENT

Доступ: public


# ::stappler::StringViewUtf8::StringViewUtf8()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::StringViewUtf8::StringViewUtf8(char const*,size_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* char const*
* size_t


# ::stappler::StringViewUtf8::StringViewUtf8(char const*,size_t,size_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* char const*
* size_t
* size_t


# ::stappler::StringViewUtf8::StringViewUtf8(stappler::StringViewUtf8 const&,size_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringViewUtf8 const&
* size_t


# ::stappler::StringViewUtf8::StringViewUtf8(stappler::StringViewUtf8 const&,size_t,size_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringViewUtf8 const&
* size_t
* size_t


# ::stappler::StringViewUtf8::StringViewUtf8(stappler::StringViewUtf8::PoolString const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringViewUtf8::PoolString const&


# ::stappler::StringViewUtf8::StringViewUtf8(stappler::StringViewUtf8::StdString const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringViewUtf8::StdString const&


# ::stappler::StringViewUtf8::StringViewUtf8(StringViewBase<char> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* StringViewBase<char> const&


# ::stappler::StringViewUtf8::operator=(stappler::StringViewUtf8::PoolString const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringViewUtf8::PoolString const&

Возвращает:
* Self&

# ::stappler::StringViewUtf8::operator=(stappler::StringViewUtf8::StdString const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringViewUtf8::StdString const&

Возвращает:
* Self&

# ::stappler::StringViewUtf8::operator=(stappler::StringViewUtf8::Self const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringViewUtf8::Self const&

Возвращает:
* Self&

# ::stappler::StringViewUtf8::set(stappler::StringViewUtf8::PoolString const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringViewUtf8::PoolString const&

Возвращает:
* Self&

# ::stappler::StringViewUtf8::set(stappler::StringViewUtf8::StdString const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringViewUtf8::StdString const&

Возвращает:
* Self&

# ::stappler::StringViewUtf8::set(stappler::StringViewUtf8::Self const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringViewUtf8::Self const&

Возвращает:
* Self&

# ::stappler::StringViewUtf8::set(char const*,size_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* char const*
* size_t

Возвращает:
* Self&

# ::stappler::StringViewUtf8::operator==(stappler::StringViewUtf8::Self const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringViewUtf8::Self const&

Возвращает:
* bool

# ::stappler::StringViewUtf8::operator!=(stappler::StringViewUtf8::Self const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringViewUtf8::Self const&

Возвращает:
* bool

# ::stappler::StringViewUtf8::is(char const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* char const&

Возвращает:
* bool

# ::stappler::StringViewUtf8::is(char16_t const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* char16_t const&

Возвращает:
* bool

# ::stappler::StringViewUtf8::is(char const*) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* char const*

Возвращает:
* bool

# ::stappler::StringViewUtf8::is(stappler::StringViewUtf8::Self const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringViewUtf8::Self const&

Возвращает:
* bool

# ::stappler::StringViewUtf8::is<char16_t>() const

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* char16_t C

Возвращает:
* bool

# ::stappler::StringViewUtf8::is<stappler::CharGroupId>() const

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* stappler::CharGroupId G

Возвращает:
* bool

# ::stappler::StringViewUtf8::is<typename>() const

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename M

Возвращает:
* bool

# ::stappler::StringViewUtf8::sub(size_t,size_t) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* size_t
* size_t

Возвращает:
* Self

# ::stappler::StringViewUtf8::letter<typename>() const

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename Interface

Возвращает:
* typename Interface::StringType

# ::stappler::StringViewUtf8::str<typename>() const

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename Interface

Возвращает:
* typename Interface::StringType

# ::stappler::StringViewUtf8::offset(size_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* size_t


# ::stappler::StringViewUtf8::operator++()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Self&

# ::stappler::StringViewUtf8::operator++(int)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* int

Возвращает:
* Self&

# ::stappler::StringViewUtf8::operator+=(size_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* size_t

Возвращает:
* Self&

# ::stappler::StringViewUtf8::isSpace() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::StringViewUtf8::begin() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Self

# ::stappler::StringViewUtf8::end() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Self

# ::stappler::StringViewUtf8::operator-(stappler::StringViewUtf8::Self const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringViewUtf8::Self const&

Возвращает:
* Self

# ::stappler::StringViewUtf8::operator-=(stappler::StringViewUtf8::Self const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringViewUtf8::Self const&

Возвращает:
* Self&

# ::stappler::StringViewUtf8::operator*() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* MatchCharType

# ::stappler::StringViewUtf8::foreach<typename>(Callback const&)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename Callback

Параметры:
* Callback const&


# ::stappler::StringViewUtf8::code_size() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* size_t

# ::stappler::StringViewUtf8::operator StringViewBase<char>() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* StringViewBase<char>

# ::stappler::StringViewUtf8::hash() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint64_t

# ::stappler::StringViewUtf8::hash32() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint64_t

# ::stappler::StringViewUtf8::readFloat()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Result<float>

# ::stappler::StringViewUtf8::readDouble()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Result<double>

# ::stappler::StringViewUtf8::readInteger(int)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* int

Возвращает:
* Result<int64_t>

# ::stappler::StringViewUtf8::skipChars<typename>()

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename Args


# ::stappler::StringViewUtf8::skipUntil<typename>()

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename Args


# ::stappler::StringViewUtf8::backwardSkipChars<typename>()

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename Args


# ::stappler::StringViewUtf8::backwardSkipUntil<typename>()

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename Args


# ::stappler::StringViewUtf8::skipString(stappler::StringViewUtf8::Self const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringViewUtf8::Self const&

Возвращает:
* bool

# ::stappler::StringViewUtf8::skipUntilString(stappler::StringViewUtf8::Self const&,bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringViewUtf8::Self const&
* bool

Возвращает:
* bool

# ::stappler::StringViewUtf8::readChars<typename>()

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename Args

Возвращает:
* Self

# ::stappler::StringViewUtf8::readUntil<typename>()

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename Args

Возвращает:
* Self

# ::stappler::StringViewUtf8::backwardReadChars<typename>()

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename Args

Возвращает:
* Self

# ::stappler::StringViewUtf8::backwardReadUntil<typename>()

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename Args

Возвращает:
* Self

# ::stappler::StringViewUtf8::readUntilString(stappler::StringViewUtf8::Self const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringViewUtf8::Self const&

Возвращает:
* Self

# ::stappler::StringViewUtf8::split<typename,typename>(Callback const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename Separator
* typename Callback

Параметры:
* Callback const&


# ::stappler::StringViewUtf8::trimChars<typename>()

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename Args


# ::stappler::StringViewUtf8::trimUntil<typename>()

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename Args


# ::stappler::StringViewUtf8::rv_match_utf8<typename>(stappler::StringViewUtf8::CharType const*,size_t,uint8_t&)

## BRIEF

## CONTENT

Доступ: protected

Параметры шаблона:
* typename Args

Параметры:
* stappler::StringViewUtf8::CharType const*
* size_t
* uint8_t&

Возвращает:
* bool

# ::stappler::StringViewUtf8::match<typename>(char16_t)

## BRIEF

## CONTENT

Доступ: protected

Параметры шаблона:
* typename Args

Параметры:
* char16_t

Возвращает:
* bool

# ::stappler::StringView

## BRIEF

## CONTENT


# ::stappler::WideStringView

## BRIEF

## CONTENT


# ::stappler::operator<<<typename>(Callback<void (StringViewBase<Char>)> const&,int64_t,StringViewBase<Char>)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Char

Параметры:
* Callback<void (StringViewBase<Char>)> const&
* int64_t
* StringViewBase<Char>

Возвращает:
* Callback<void (StringViewBase<Char>)> const&

# ::stappler::operator<<<typename>(Callback<void (StringViewBase<Char>)> const&,uint64_t,StringViewBase<Char>)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Char

Параметры:
* Callback<void (StringViewBase<Char>)> const&
* uint64_t
* StringViewBase<Char>

Возвращает:
* Callback<void (StringViewBase<Char>)> const&

# ::stappler::operator<<<typename>(Callback<void (StringViewBase<Char>)> const&,StringViewBase<Char>,StringViewBase<Char>)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Char

Параметры:
* Callback<void (StringViewBase<Char>)> const&
* StringViewBase<Char>
* StringViewBase<Char>

Возвращает:
* Callback<void (StringViewBase<Char>)> const&

# ::stappler::operator<<(Callback<void (stappler::StringViewUtf8)> const&,int64_t)

## BRIEF

## CONTENT

Параметры:
* Callback<void (stappler::StringViewUtf8)> const&
* int64_t

Возвращает:
* Callback<void (stappler::StringViewUtf8)> const&

# ::stappler::operator<<(Callback<void (stappler::StringViewUtf8)> const&,uint64_t)

## BRIEF

## CONTENT

Параметры:
* Callback<void (stappler::StringViewUtf8)> const&
* uint64_t

Возвращает:
* Callback<void (stappler::StringViewUtf8)> const&

# ::stappler::operator<<(Callback<void (stappler::StringViewUtf8)> const&,stappler::StringViewUtf8)

## BRIEF

## CONTENT

Параметры:
* Callback<void (stappler::StringViewUtf8)> const&
* stappler::StringViewUtf8

Возвращает:
* Callback<void (stappler::StringViewUtf8)> const&

# ::stappler::string::compare<typename,typename,typename>(L const&,R const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename L
* typename R
* typename CharType

Параметры:
* L const&
* R const&

Возвращает:
* int

# ::stappler::string::compareCaseInsensivive<typename,typename,typename>(L const&,R const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename L
* typename R
* typename CharType

Параметры:
* L const&
* R const&

Возвращает:
* int

# ::stappler::string::length<typename>(_CharT const*)

## BRIEF

## CONTENT

Параметры шаблона:
* typename _CharT

Параметры:
* _CharT const*

Возвращает:
* size_t

# ::stappler::string::length<typename>(_CharT const*,size_t)

## BRIEF

## CONTENT

Параметры шаблона:
* typename _CharT

Параметры:
* _CharT const*
* size_t

Возвращает:
* size_t

# ::stappler::operator<<<typename>(std::basic_ostream<C>&,StringViewBase<C> const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename C

Параметры:
* std::basic_ostream<C>&
* StringViewBase<C> const&

Возвращает:
* std::basic_ostream<C>&

# ::stappler::operator<<(std::basic_ostream<char>&,stappler::StringViewUtf8 const&)

## BRIEF

## CONTENT

Параметры:
* std::basic_ostream<char>&
* stappler::StringViewUtf8 const&

Возвращает:
* std::basic_ostream<char>&

# ::stappler::operator><typename>(StringViewBase<C> const&,StringViewBase<C> const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename C

Параметры:
* StringViewBase<C> const&
* StringViewBase<C> const&

Возвращает:
* bool

# ::stappler::operator>=<typename>(StringViewBase<C> const&,StringViewBase<C> const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename C

Параметры:
* StringViewBase<C> const&
* StringViewBase<C> const&

Возвращает:
* bool

# ::stappler::operator<<typename>(StringViewBase<C> const&,StringViewBase<C> const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename C

Параметры:
* StringViewBase<C> const&
* StringViewBase<C> const&

Возвращает:
* bool

# ::stappler::operator<=<typename>(StringViewBase<C> const&,StringViewBase<C> const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename C

Параметры:
* StringViewBase<C> const&
* StringViewBase<C> const&

Возвращает:
* bool

# ::stappler::operator==<typename>(typename memory::StandartInterface::BasicStringType<C> const&,StringViewBase<C> const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename C

Параметры:
* typename memory::StandartInterface::BasicStringType<C> const&
* StringViewBase<C> const&

Возвращает:
* bool

# ::stappler::operator!=<typename>(typename memory::StandartInterface::BasicStringType<C> const&,StringViewBase<C> const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename C

Параметры:
* typename memory::StandartInterface::BasicStringType<C> const&
* StringViewBase<C> const&

Возвращает:
* bool

# ::stappler::operator><typename>(typename memory::StandartInterface::BasicStringType<C> const&,StringViewBase<C> const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename C

Параметры:
* typename memory::StandartInterface::BasicStringType<C> const&
* StringViewBase<C> const&

Возвращает:
* bool

# ::stappler::operator>=<typename>(typename memory::StandartInterface::BasicStringType<C> const&,StringViewBase<C> const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename C

Параметры:
* typename memory::StandartInterface::BasicStringType<C> const&
* StringViewBase<C> const&

Возвращает:
* bool

# ::stappler::operator<<typename>(typename memory::StandartInterface::BasicStringType<C> const&,StringViewBase<C> const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename C

Параметры:
* typename memory::StandartInterface::BasicStringType<C> const&
* StringViewBase<C> const&

Возвращает:
* bool

# ::stappler::operator<=<typename>(typename memory::StandartInterface::BasicStringType<C> const&,StringViewBase<C> const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename C

Параметры:
* typename memory::StandartInterface::BasicStringType<C> const&
* StringViewBase<C> const&

Возвращает:
* bool

# ::stappler::operator==<typename>(StringViewBase<C> const&,typename memory::StandartInterface::BasicStringType<C> const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename C

Параметры:
* StringViewBase<C> const&
* typename memory::StandartInterface::BasicStringType<C> const&

Возвращает:
* bool

# ::stappler::operator!=<typename>(StringViewBase<C> const&,typename memory::StandartInterface::BasicStringType<C> const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename C

Параметры:
* StringViewBase<C> const&
* typename memory::StandartInterface::BasicStringType<C> const&

Возвращает:
* bool

# ::stappler::operator><typename>(StringViewBase<C> const&,typename memory::StandartInterface::BasicStringType<C> const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename C

Параметры:
* StringViewBase<C> const&
* typename memory::StandartInterface::BasicStringType<C> const&

Возвращает:
* bool

# ::stappler::operator>=<typename>(StringViewBase<C> const&,typename memory::StandartInterface::BasicStringType<C> const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename C

Параметры:
* StringViewBase<C> const&
* typename memory::StandartInterface::BasicStringType<C> const&

Возвращает:
* bool

# ::stappler::operator<<typename>(StringViewBase<C> const&,typename memory::StandartInterface::BasicStringType<C> const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename C

Параметры:
* StringViewBase<C> const&
* typename memory::StandartInterface::BasicStringType<C> const&

Возвращает:
* bool

# ::stappler::operator<=<typename>(StringViewBase<C> const&,typename memory::StandartInterface::BasicStringType<C> const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename C

Параметры:
* StringViewBase<C> const&
* typename memory::StandartInterface::BasicStringType<C> const&

Возвращает:
* bool

# ::stappler::operator==<typename>(typename memory::PoolInterface::BasicStringType<C> const&,StringViewBase<C> const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename C

Параметры:
* typename memory::PoolInterface::BasicStringType<C> const&
* StringViewBase<C> const&

Возвращает:
* bool

# ::stappler::operator!=<typename>(typename memory::PoolInterface::BasicStringType<C> const&,StringViewBase<C> const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename C

Параметры:
* typename memory::PoolInterface::BasicStringType<C> const&
* StringViewBase<C> const&

Возвращает:
* bool

# ::stappler::operator><typename>(typename memory::PoolInterface::BasicStringType<C> const&,StringViewBase<C> const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename C

Параметры:
* typename memory::PoolInterface::BasicStringType<C> const&
* StringViewBase<C> const&

Возвращает:
* bool

# ::stappler::operator>=<typename>(typename memory::PoolInterface::BasicStringType<C> const&,StringViewBase<C> const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename C

Параметры:
* typename memory::PoolInterface::BasicStringType<C> const&
* StringViewBase<C> const&

Возвращает:
* bool

# ::stappler::operator<<typename>(typename memory::PoolInterface::BasicStringType<C> const&,StringViewBase<C> const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename C

Параметры:
* typename memory::PoolInterface::BasicStringType<C> const&
* StringViewBase<C> const&

Возвращает:
* bool

# ::stappler::operator<=<typename>(typename memory::PoolInterface::BasicStringType<C> const&,StringViewBase<C> const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename C

Параметры:
* typename memory::PoolInterface::BasicStringType<C> const&
* StringViewBase<C> const&

Возвращает:
* bool

# ::stappler::operator==<typename>(StringViewBase<C> const&,typename memory::PoolInterface::BasicStringType<C> const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename C

Параметры:
* StringViewBase<C> const&
* typename memory::PoolInterface::BasicStringType<C> const&

Возвращает:
* bool

# ::stappler::operator!=<typename>(StringViewBase<C> const&,typename memory::PoolInterface::BasicStringType<C> const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename C

Параметры:
* StringViewBase<C> const&
* typename memory::PoolInterface::BasicStringType<C> const&

Возвращает:
* bool

# ::stappler::operator><typename>(StringViewBase<C> const&,typename memory::PoolInterface::BasicStringType<C> const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename C

Параметры:
* StringViewBase<C> const&
* typename memory::PoolInterface::BasicStringType<C> const&

Возвращает:
* bool

# ::stappler::operator>=<typename>(StringViewBase<C> const&,typename memory::PoolInterface::BasicStringType<C> const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename C

Параметры:
* StringViewBase<C> const&
* typename memory::PoolInterface::BasicStringType<C> const&

Возвращает:
* bool

# ::stappler::operator<<typename>(StringViewBase<C> const&,typename memory::PoolInterface::BasicStringType<C> const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename C

Параметры:
* StringViewBase<C> const&
* typename memory::PoolInterface::BasicStringType<C> const&

Возвращает:
* bool

# ::stappler::operator<=<typename>(StringViewBase<C> const&,typename memory::PoolInterface::BasicStringType<C> const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename C

Параметры:
* StringViewBase<C> const&
* typename memory::PoolInterface::BasicStringType<C> const&

Возвращает:
* bool

# ::stappler::operator+<typename>(typename memory::StandartInterface::BasicStringType<C> const&,StringViewBase<C> const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename C

Параметры:
* typename memory::StandartInterface::BasicStringType<C> const&
* StringViewBase<C> const&

Возвращает:
* typename memory::StandartInterface::BasicStringType<C>

# ::stappler::operator+<typename>(StringViewBase<C> const&,typename memory::StandartInterface::BasicStringType<C> const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename C

Параметры:
* StringViewBase<C> const&
* typename memory::StandartInterface::BasicStringType<C> const&

Возвращает:
* typename memory::StandartInterface::BasicStringType<C>

# ::stappler::operator+<typename>(typename memory::PoolInterface::BasicStringType<C> const&,StringViewBase<C> const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename C

Параметры:
* typename memory::PoolInterface::BasicStringType<C> const&
* StringViewBase<C> const&

Возвращает:
* typename memory::PoolInterface::BasicStringType<C>

# ::stappler::operator+<typename>(StringViewBase<C> const&,typename memory::PoolInterface::BasicStringType<C> const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename C

Параметры:
* StringViewBase<C> const&
* typename memory::PoolInterface::BasicStringType<C> const&

Возвращает:
* typename memory::PoolInterface::BasicStringType<C>

# ::stappler::operator+<typename>(typename memory::StandartInterface::BasicStringType<C>&&,StringViewBase<C> const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename C

Параметры:
* typename memory::StandartInterface::BasicStringType<C>&&
* StringViewBase<C> const&

Возвращает:
* typename memory::StandartInterface::BasicStringType<C>

# ::stappler::operator+<typename>(StringViewBase<C> const&,typename memory::StandartInterface::BasicStringType<C>&&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename C

Параметры:
* StringViewBase<C> const&
* typename memory::StandartInterface::BasicStringType<C>&&

Возвращает:
* typename memory::StandartInterface::BasicStringType<C>

# ::stappler::operator+<typename>(typename memory::PoolInterface::BasicStringType<C>&&,StringViewBase<C> const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename C

Параметры:
* typename memory::PoolInterface::BasicStringType<C>&&
* StringViewBase<C> const&

Возвращает:
* typename memory::PoolInterface::BasicStringType<C>

# ::stappler::operator+<typename>(StringViewBase<C> const&,typename memory::PoolInterface::BasicStringType<C>&&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename C

Параметры:
* StringViewBase<C> const&
* typename memory::PoolInterface::BasicStringType<C>&&

Возвращает:
* typename memory::PoolInterface::BasicStringType<C>

# ::stappler::StringViewBase<typename>::merge<typename,typename,typename>(Args &&...)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface
* typename Args
* typename _CharType

Параметры:
* Args &&...

Возвращает:
* typename Interface::template BasicStringType<stappler::StringViewBase::CharType>

# ::stappler::StringViewBase<typename>::__size<typename,typename>(T const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename T
* typename _CharType

Параметры:
* T const&

Возвращает:
* size_t

# ::stappler::StringViewBase<typename>::__size(stappler::StringViewBase::CharType const*)

## BRIEF

## CONTENT

Параметры:
* stappler::StringViewBase::CharType const*

Возвращает:
* size_t

# ::stappler::StringViewBase<typename>::_size<typename,typename,typename>(T&&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename T
* typename Args
* typename _CharType

Параметры:
* T&&

Возвращает:
* size_t

# ::stappler::StringViewBase<typename>::_size<typename,typename,typename>(T&&,Args &&...)

## BRIEF

## CONTENT

Параметры шаблона:
* typename T
* typename Args
* typename _CharType

Параметры:
* T&&
* Args &&...

Возвращает:
* size_t

# ::stappler::StringViewBase<typename>::__merge<typename,typename,typename>(Buf&,T const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Buf
* typename T
* typename _CharType

Параметры:
* Buf&
* T const&


# ::stappler::StringViewBase<typename>::__merge<typename,typename>(Buf&,stappler::StringViewBase::CharType const*)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Buf
* typename _CharType

Параметры:
* Buf&
* stappler::StringViewBase::CharType const*


# ::stappler::StringViewBase<typename>::_merge<typename,typename,typename,typename>(Buf&,T&&,Args &&...)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Buf
* typename T
* typename Args
* typename _CharType

Параметры:
* Buf&
* T&&
* Args &&...


# ::stappler::StringViewBase<typename>::_merge<typename,typename,typename>(Buf&,T&&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Buf
* typename T
* typename _CharType

Параметры:
* Buf&
* T&&


# ::stappler::StringViewBase<typename>::StringViewBase()

## BRIEF

## CONTENT


# ::stappler::StringViewBase<typename>::StringViewBase(stappler::StringViewBase::CharType const*,size_t)

## BRIEF

## CONTENT

Параметры:
* stappler::StringViewBase::CharType const*
* size_t


# ::stappler::StringViewBase<typename>::StringViewBase(stappler::StringViewBase::CharType const*,size_t,size_t)

## BRIEF

## CONTENT

Параметры:
* stappler::StringViewBase::CharType const*
* size_t
* size_t


# ::stappler::StringViewBase<typename>::StringViewBase(stappler::StringViewBase::Self const&,size_t,size_t)

## BRIEF

## CONTENT

Параметры:
* stappler::StringViewBase::Self const&
* size_t
* size_t


# ::stappler::StringViewBase<typename>::StringViewBase(stappler::StringViewBase::Self const&,size_t)

## BRIEF

## CONTENT

Параметры:
* stappler::StringViewBase::Self const&
* size_t


# ::stappler::StringViewBase(char const*,size_t)

## BRIEF

## CONTENT

Параметры:
* char const*
* size_t


# ::stappler::StringViewBase<typename>::StringViewBase(stappler::StringViewBase::PoolString const&)

## BRIEF

## CONTENT

Параметры:
* stappler::StringViewBase::PoolString const&


# ::stappler::StringViewBase<typename>::StringViewBase(stappler::StringViewBase::StdString const&)

## BRIEF

## CONTENT

Параметры:
* stappler::StringViewBase::StdString const&


# ::stappler::StringViewBase<typename>::operator=(stappler::StringViewBase::PoolString const&)

## BRIEF

## CONTENT

Параметры:
* stappler::StringViewBase::PoolString const&

Возвращает:
* Self&

# ::stappler::StringViewBase<typename>::operator=(stappler::StringViewBase::StdString const&)

## BRIEF

## CONTENT

Параметры:
* stappler::StringViewBase::StdString const&

Возвращает:
* Self&

# ::stappler::StringViewBase<typename>::operator=(stappler::StringViewBase::Self const&)

## BRIEF

## CONTENT

Параметры:
* stappler::StringViewBase::Self const&

Возвращает:
* Self&

# ::stappler::StringViewBase<typename>::set(stappler::StringViewBase::PoolString const&)

## BRIEF

## CONTENT

Параметры:
* stappler::StringViewBase::PoolString const&

Возвращает:
* Self&

# ::stappler::StringViewBase<typename>::set(stappler::StringViewBase::StdString const&)

## BRIEF

## CONTENT

Параметры:
* stappler::StringViewBase::StdString const&

Возвращает:
* Self&

# ::stappler::StringViewBase<typename>::set(stappler::StringViewBase::Self const&)

## BRIEF

## CONTENT

Параметры:
* stappler::StringViewBase::Self const&

Возвращает:
* Self&

# ::stappler::StringViewBase<typename>::set(stappler::StringViewBase::CharType const*,size_t)

## BRIEF

## CONTENT

Параметры:
* stappler::StringViewBase::CharType const*
* size_t

Возвращает:
* Self&

# ::stappler::StringViewBase<typename>::operator==(stappler::StringViewBase::Self const&) const

## BRIEF

## CONTENT

Параметры:
* stappler::StringViewBase::Self const&

Возвращает:
* bool

# ::stappler::StringViewBase<typename>::operator!=(stappler::StringViewBase::Self const&) const

## BRIEF

## CONTENT

Параметры:
* stappler::StringViewBase::Self const&

Возвращает:
* bool

# ::stappler::StringViewBase<typename>::pdup(memory::pool_t*) const

## BRIEF

## CONTENT

Параметры:
* memory::pool_t*

Возвращает:
* Self

# ::stappler::StringViewBase<typename>::str<typename,typename>() const

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface
* typename _CharType

Возвращает:
* typename Interface::template BasicStringType<stappler::StringViewBase::CharType>

# ::stappler::StringViewBase<typename>::operator++()

## BRIEF

## CONTENT

Возвращает:
* Self&

# ::stappler::StringViewBase<typename>::operator++(int)

## BRIEF

## CONTENT

Параметры:
* int

Возвращает:
* Self&

# ::stappler::StringViewBase<typename>::operator+=(size_t)

## BRIEF

## CONTENT

Параметры:
* size_t

Возвращает:
* Self&

# ::stappler::StringViewBase<typename>::is(stappler::StringViewBase::CharType const&) const

## BRIEF

## CONTENT

Параметры:
* stappler::StringViewBase::CharType const&

Возвращает:
* bool

# ::stappler::StringViewBase<typename>::is(stappler::StringViewBase::CharType const*) const

## BRIEF

## CONTENT

Параметры:
* stappler::StringViewBase::CharType const*

Возвращает:
* bool

# ::stappler::StringViewBase<typename>::is(stappler::StringViewBase::Self const&) const

## BRIEF

## CONTENT

Параметры:
* stappler::StringViewBase::Self const&

Возвращает:
* bool

# ::stappler::StringViewBase<typename>::is<_CharType,typename>() const

## BRIEF

## CONTENT

Параметры шаблона:
* _CharType C
* typename _CharType

Возвращает:
* bool

# ::stappler::StringViewBase<typename>::is<stappler::CharGroupId,typename>() const

## BRIEF

## CONTENT

Параметры шаблона:
* stappler::CharGroupId G
* typename _CharType

Возвращает:
* bool

# ::stappler::StringViewBase<typename>::is<typename,typename>() const

## BRIEF

## CONTENT

Параметры шаблона:
* typename M
* typename _CharType

Возвращает:
* bool

# ::stappler::StringViewBase<typename>::begin() const

## BRIEF

## CONTENT

Возвращает:
* Self

# ::stappler::StringViewBase<typename>::end() const

## BRIEF

## CONTENT

Возвращает:
* Self

# ::stappler::StringViewBase<typename>::operator-(stappler::StringViewBase::Self const&) const

## BRIEF

## CONTENT

Параметры:
* stappler::StringViewBase::Self const&

Возвращает:
* Self

# ::stappler::StringViewBase<typename>::operator-=(stappler::StringViewBase::Self const&) const

## BRIEF

## CONTENT

Параметры:
* stappler::StringViewBase::Self const&

Возвращает:
* Self&

# ::stappler::StringViewBase<typename>::readFloat()

## BRIEF

## CONTENT

Возвращает:
* Result<float>

# ::stappler::StringViewBase<typename>::readDouble()

## BRIEF

## CONTENT

Возвращает:
* Result<double>

# ::stappler::StringViewBase<typename>::readInteger(int)

## BRIEF

## CONTENT

Параметры:
* int

Возвращает:
* Result<int64_t>

# ::stappler::StringViewBase<typename>::skipChars<typename,typename>()

## BRIEF

## CONTENT

Параметры шаблона:
* typename Args
* typename _CharType


# ::stappler::StringViewBase<typename>::skipUntil<typename,typename>()

## BRIEF

## CONTENT

Параметры шаблона:
* typename Args
* typename _CharType


# ::stappler::StringViewBase<typename>::backwardSkipChars<typename,typename>()

## BRIEF

## CONTENT

Параметры шаблона:
* typename Args
* typename _CharType


# ::stappler::StringViewBase<typename>::backwardSkipUntil<typename,typename>()

## BRIEF

## CONTENT

Параметры шаблона:
* typename Args
* typename _CharType


# ::stappler::StringViewBase<typename>::skipString(stappler::StringViewBase::Self const&)

## BRIEF

## CONTENT

Параметры:
* stappler::StringViewBase::Self const&

Возвращает:
* bool

# ::stappler::StringViewBase<typename>::skipUntilString(stappler::StringViewBase::Self const&,bool)

## BRIEF

## CONTENT

Параметры:
* stappler::StringViewBase::Self const&
* bool

Возвращает:
* bool

# ::stappler::StringViewBase<typename>::readChars<typename,typename>()

## BRIEF

## CONTENT

Параметры шаблона:
* typename Args
* typename _CharType

Возвращает:
* Self

# ::stappler::StringViewBase<typename>::readUntil<typename,typename>()

## BRIEF

## CONTENT

Параметры шаблона:
* typename Args
* typename _CharType

Возвращает:
* Self

# ::stappler::StringViewBase<typename>::backwardReadChars<typename,typename>()

## BRIEF

## CONTENT

Параметры шаблона:
* typename Args
* typename _CharType

Возвращает:
* Self

# ::stappler::StringViewBase<typename>::backwardReadUntil<typename,typename>()

## BRIEF

## CONTENT

Параметры шаблона:
* typename Args
* typename _CharType

Возвращает:
* Self

# ::stappler::StringViewBase<typename>::readUntilString(stappler::StringViewBase::Self const&)

## BRIEF

## CONTENT

Параметры:
* stappler::StringViewBase::Self const&

Возвращает:
* Self

# ::stappler::StringViewBase<typename>::split<typename,typename,typename>(Callback const&) const

## BRIEF

## CONTENT

Параметры шаблона:
* typename Separator
* typename Callback
* typename _CharType

Параметры:
* Callback const&


# ::stappler::StringViewBase<typename>::trimChars<typename,typename>()

## BRIEF

## CONTENT

Параметры шаблона:
* typename Args
* typename _CharType


# ::stappler::StringViewBase<typename>::trimUntil<typename,typename>()

## BRIEF

## CONTENT

Параметры шаблона:
* typename Args
* typename _CharType


# ::stappler::StringViewBase<typename>::match<typename,typename>(stappler::StringViewBase::CharType)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Args
* typename _CharType

Параметры:
* stappler::StringViewBase::CharType

Возвращает:
* bool

# ::stappler::StringViewUtf8::StringViewUtf8()

## BRIEF

## CONTENT


# ::stappler::StringViewUtf8::StringViewUtf8(char const*,size_t)

## BRIEF

## CONTENT

Параметры:
* char const*
* size_t


# ::stappler::StringViewUtf8::StringViewUtf8(char const*,size_t,size_t)

## BRIEF

## CONTENT

Параметры:
* char const*
* size_t
* size_t


# ::stappler::StringViewUtf8::StringViewUtf8(stappler::StringViewUtf8 const&,size_t)

## BRIEF

## CONTENT

Параметры:
* stappler::StringViewUtf8 const&
* size_t


# ::stappler::StringViewUtf8::StringViewUtf8(stappler::StringViewUtf8 const&,size_t,size_t)

## BRIEF

## CONTENT

Параметры:
* stappler::StringViewUtf8 const&
* size_t
* size_t


# ::stappler::StringViewUtf8::StringViewUtf8(stappler::StringViewUtf8::PoolString const&)

## BRIEF

## CONTENT

Параметры:
* stappler::StringViewUtf8::PoolString const&


# ::stappler::StringViewUtf8::StringViewUtf8(stappler::StringViewUtf8::StdString const&)

## BRIEF

## CONTENT

Параметры:
* stappler::StringViewUtf8::StdString const&


# ::stappler::StringViewUtf8::StringViewUtf8(StringViewBase<char> const&)

## BRIEF

## CONTENT

Параметры:
* StringViewBase<char> const&


# ::stappler::StringViewUtf8::operator=(stappler::StringViewUtf8::PoolString const&)

## BRIEF

## CONTENT

Параметры:
* stappler::StringViewUtf8::PoolString const&

Возвращает:
* Self&

# ::stappler::StringViewUtf8::operator=(stappler::StringViewUtf8::StdString const&)

## BRIEF

## CONTENT

Параметры:
* stappler::StringViewUtf8::StdString const&

Возвращает:
* Self&

# ::stappler::StringViewUtf8::operator=(stappler::StringViewUtf8::Self const&)

## BRIEF

## CONTENT

Параметры:
* stappler::StringViewUtf8::Self const&

Возвращает:
* Self&

# ::stappler::StringViewUtf8::set(stappler::StringViewUtf8::PoolString const&)

## BRIEF

## CONTENT

Параметры:
* stappler::StringViewUtf8::PoolString const&

Возвращает:
* Self&

# ::stappler::StringViewUtf8::set(stappler::StringViewUtf8::StdString const&)

## BRIEF

## CONTENT

Параметры:
* stappler::StringViewUtf8::StdString const&

Возвращает:
* Self&

# ::stappler::StringViewUtf8::set(stappler::StringViewUtf8::Self const&)

## BRIEF

## CONTENT

Параметры:
* stappler::StringViewUtf8::Self const&

Возвращает:
* Self&

# ::stappler::StringViewUtf8::set(char const*,size_t)

## BRIEF

## CONTENT

Параметры:
* char const*
* size_t

Возвращает:
* Self&

# ::stappler::StringViewUtf8::is(char const&) const

## BRIEF

## CONTENT

Параметры:
* char const&

Возвращает:
* bool

# ::stappler::StringViewUtf8::is(char16_t const&) const

## BRIEF

## CONTENT

Параметры:
* char16_t const&

Возвращает:
* bool

# ::stappler::StringViewUtf8::is(char const*) const

## BRIEF

## CONTENT

Параметры:
* char const*

Возвращает:
* bool

# ::stappler::StringViewUtf8::is(stappler::StringViewUtf8::Self const&) const

## BRIEF

## CONTENT

Параметры:
* stappler::StringViewUtf8::Self const&

Возвращает:
* bool

# ::stappler::StringViewUtf8::is<char16_t>() const

## BRIEF

## CONTENT

Параметры шаблона:
* char16_t C

Возвращает:
* bool

# ::stappler::StringViewUtf8::is<stappler::CharGroupId>() const

## BRIEF

## CONTENT

Параметры шаблона:
* stappler::CharGroupId G

Возвращает:
* bool

# ::stappler::StringViewUtf8::is<typename>() const

## BRIEF

## CONTENT

Параметры шаблона:
* typename M

Возвращает:
* bool

# ::stappler::StringViewUtf8::letter<typename>() const

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface

Возвращает:
* typename Interface::StringType

# ::stappler::StringViewUtf8::str<typename>() const

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface

Возвращает:
* typename Interface::StringType

# ::stappler::StringViewUtf8::operator==(stappler::StringViewUtf8::Self const&) const

## BRIEF

## CONTENT

Параметры:
* stappler::StringViewUtf8::Self const&

Возвращает:
* bool

# ::stappler::StringViewUtf8::operator!=(stappler::StringViewUtf8::Self const&) const

## BRIEF

## CONTENT

Параметры:
* stappler::StringViewUtf8::Self const&

Возвращает:
* bool

# ::stappler::StringViewUtf8::offset(size_t)

## BRIEF

## CONTENT

Параметры:
* size_t


# ::stappler::StringViewUtf8::operator++()

## BRIEF

## CONTENT

Возвращает:
* Self&

# ::stappler::StringViewUtf8::operator++(int)

## BRIEF

## CONTENT

Параметры:
* int

Возвращает:
* Self&

# ::stappler::StringViewUtf8::operator+=(size_t)

## BRIEF

## CONTENT

Параметры:
* size_t

Возвращает:
* Self&

# ::stappler::StringViewUtf8::isSpace() const

## BRIEF

## CONTENT

Возвращает:
* bool

# ::stappler::StringViewUtf8::begin() const

## BRIEF

## CONTENT

Возвращает:
* Self

# ::stappler::StringViewUtf8::end() const

## BRIEF

## CONTENT

Возвращает:
* Self

# ::stappler::StringViewUtf8::operator-(stappler::StringViewUtf8::Self const&) const

## BRIEF

## CONTENT

Параметры:
* stappler::StringViewUtf8::Self const&

Возвращает:
* Self

# ::stappler::StringViewUtf8::operator-=(stappler::StringViewUtf8::Self const&)

## BRIEF

## CONTENT

Параметры:
* stappler::StringViewUtf8::Self const&

Возвращает:
* Self&

# ::stappler::StringViewUtf8::operator*() const

## BRIEF

## CONTENT

Возвращает:
* MatchCharType

# ::stappler::StringViewUtf8::foreach<typename>(Callback const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Callback

Параметры:
* Callback const&


# ::stappler::StringViewUtf8::code_size() const

## BRIEF

## CONTENT

Возвращает:
* size_t

# ::stappler::StringViewUtf8::operator StringViewBase<char>() const

## BRIEF

## CONTENT

Возвращает:
* StringViewBase<char>

# ::stappler::StringViewUtf8::readFloat()

## BRIEF

## CONTENT

Возвращает:
* Result<float>

# ::stappler::StringViewUtf8::readDouble()

## BRIEF

## CONTENT

Возвращает:
* Result<double>

# ::stappler::StringViewUtf8::readInteger(int)

## BRIEF

## CONTENT

Параметры:
* int

Возвращает:
* Result<int64_t>

# ::stappler::StringViewUtf8::skipChars<typename>()

## BRIEF

## CONTENT

Параметры шаблона:
* typename Args


# ::stappler::StringViewUtf8::skipUntil<typename>()

## BRIEF

## CONTENT

Параметры шаблона:
* typename Args


# ::stappler::StringViewUtf8::backwardSkipChars<typename>()

## BRIEF

## CONTENT

Параметры шаблона:
* typename Args


# ::stappler::StringViewUtf8::backwardSkipUntil<typename>()

## BRIEF

## CONTENT

Параметры шаблона:
* typename Args


# ::stappler::StringViewUtf8::skipString(stappler::StringViewUtf8::Self const&)

## BRIEF

## CONTENT

Параметры:
* stappler::StringViewUtf8::Self const&

Возвращает:
* bool

# ::stappler::StringViewUtf8::skipUntilString(stappler::StringViewUtf8::Self const&,bool)

## BRIEF

## CONTENT

Параметры:
* stappler::StringViewUtf8::Self const&
* bool

Возвращает:
* bool

# ::stappler::StringViewUtf8::readChars<typename>()

## BRIEF

## CONTENT

Параметры шаблона:
* typename Args

Возвращает:
* Self

# ::stappler::StringViewUtf8::readUntil<typename>()

## BRIEF

## CONTENT

Параметры шаблона:
* typename Args

Возвращает:
* Self

# ::stappler::StringViewUtf8::backwardReadChars<typename>()

## BRIEF

## CONTENT

Параметры шаблона:
* typename Args

Возвращает:
* Self

# ::stappler::StringViewUtf8::backwardReadUntil<typename>()

## BRIEF

## CONTENT

Параметры шаблона:
* typename Args

Возвращает:
* Self

# ::stappler::StringViewUtf8::readUntilString(stappler::StringViewUtf8::Self const&)

## BRIEF

## CONTENT

Параметры:
* stappler::StringViewUtf8::Self const&

Возвращает:
* Self

# ::stappler::StringViewUtf8::split<typename,typename>(Callback const&) const

## BRIEF

## CONTENT

Параметры шаблона:
* typename Separator
* typename Callback

Параметры:
* Callback const&


# ::stappler::StringViewUtf8::trimChars<typename>()

## BRIEF

## CONTENT

Параметры шаблона:
* typename Args


# ::stappler::StringViewUtf8::trimUntil<typename>()

## BRIEF

## CONTENT

Параметры шаблона:
* typename Args


# ::stappler::StringViewUtf8::rv_match_utf8<typename>(stappler::StringViewUtf8::CharType const*,size_t,uint8_t&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Args

Параметры:
* stappler::StringViewUtf8::CharType const*
* size_t
* uint8_t&

Возвращает:
* bool

# ::stappler::StringViewUtf8::match<typename>(char16_t)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Args

Параметры:
* char16_t

Возвращает:
* bool

# ::stappler::operator<<(Callback<void (StringViewBase<char>)> const&,char const*)

## BRIEF

## CONTENT

Параметры:
* Callback<void (StringViewBase<char>)> const&
* char const*

Возвращает:
* Callback<void (StringViewBase<char>)> const&

# ::stappler::operator<<<size_t>(Callback<void (StringViewBase<char>)> const&,char const[N],StringViewBase<char>)

## BRIEF

## CONTENT

Параметры шаблона:
* size_t N

Параметры:
* Callback<void (StringViewBase<char>)> const&
* char const[N]
* StringViewBase<char>

Возвращает:
* Callback<void (StringViewBase<char>)> const&

# ::stappler::operator<<(Callback<void (StringViewBase<char>)> const&,StringViewBase<char>)

## BRIEF

## CONTENT

Параметры:
* Callback<void (StringViewBase<char>)> const&
* StringViewBase<char>

Возвращает:
* Callback<void (StringViewBase<char>)> const&

# ::stappler::operator<<(Callback<void (StringViewBase<char>)> const&,double)

## BRIEF

## CONTENT

Параметры:
* Callback<void (StringViewBase<char>)> const&
* double

Возвращает:
* Callback<void (StringViewBase<char>)> const&

# ::stappler::operator<<(Callback<void (StringViewBase<char>)> const&,int64_t)

## BRIEF

## CONTENT

Параметры:
* Callback<void (StringViewBase<char>)> const&
* int64_t

Возвращает:
* Callback<void (StringViewBase<char>)> const&

# ::stappler::operator<<(Callback<void (StringViewBase<char>)> const&,uint64_t)

## BRIEF

## CONTENT

Параметры:
* Callback<void (StringViewBase<char>)> const&
* uint64_t

Возвращает:
* Callback<void (StringViewBase<char>)> const&

# ::stappler::operator<<(Callback<void (StringViewBase<char16_t>)> const&,StringViewBase<char16_t>)

## BRIEF

## CONTENT

Параметры:
* Callback<void (StringViewBase<char16_t>)> const&
* StringViewBase<char16_t>

Возвращает:
* Callback<void (StringViewBase<char16_t>)> const&

# ::stappler::operator<<(Callback<void (StringViewBase<char16_t>)> const&,int64_t)

## BRIEF

## CONTENT

Параметры:
* Callback<void (StringViewBase<char16_t>)> const&
* int64_t

Возвращает:
* Callback<void (StringViewBase<char16_t>)> const&

# ::stappler::operator<<(Callback<void (StringViewBase<char16_t>)> const&,uint64_t)

## BRIEF

## CONTENT

Параметры:
* Callback<void (StringViewBase<char16_t>)> const&
* uint64_t

Возвращает:
* Callback<void (StringViewBase<char16_t>)> const&

# ::stappler::operator<<(Callback<void (stappler::StringViewUtf8)> const&,stappler::StringViewUtf8)

## BRIEF

## CONTENT

Параметры:
* Callback<void (stappler::StringViewUtf8)> const&
* stappler::StringViewUtf8

Возвращает:
* Callback<void (stappler::StringViewUtf8)> const&

# ::stappler::operator<<(Callback<void (stappler::StringViewUtf8)> const&,int64_t)

## BRIEF

## CONTENT

Параметры:
* Callback<void (stappler::StringViewUtf8)> const&
* int64_t

Возвращает:
* Callback<void (stappler::StringViewUtf8)> const&

# ::stappler::operator<<(Callback<void (stappler::StringViewUtf8)> const&,uint64_t)

## BRIEF

## CONTENT

Параметры:
* Callback<void (stappler::StringViewUtf8)> const&
* uint64_t

Возвращает:
* Callback<void (stappler::StringViewUtf8)> const&

# ::stappler::operator<<(std::function<void (StringViewBase<char>)> const&,char const*)

## BRIEF

## CONTENT

Параметры:
* std::function<void (StringViewBase<char>)> const&
* char const*

Возвращает:
* std::function<void (StringViewBase<char>)> const&

# ::stappler::operator<<<size_t>(std::function<void (StringViewBase<char>)> const&,char const[N],StringViewBase<char>)

## BRIEF

## CONTENT

Параметры шаблона:
* size_t N

Параметры:
* std::function<void (StringViewBase<char>)> const&
* char const[N]
* StringViewBase<char>

Возвращает:
* std::function<void (StringViewBase<char>)> const&

# ::stappler::operator<<(std::function<void (StringViewBase<char>)> const&,StringViewBase<char>)

## BRIEF

## CONTENT

Параметры:
* std::function<void (StringViewBase<char>)> const&
* StringViewBase<char>

Возвращает:
* std::function<void (StringViewBase<char>)> const&

# ::stappler::operator<<(std::function<void (StringViewBase<char>)> const&,double)

## BRIEF

## CONTENT

Параметры:
* std::function<void (StringViewBase<char>)> const&
* double

Возвращает:
* std::function<void (StringViewBase<char>)> const&

# ::stappler::operator<<(std::function<void (StringViewBase<char>)> const&,int64_t)

## BRIEF

## CONTENT

Параметры:
* std::function<void (StringViewBase<char>)> const&
* int64_t

Возвращает:
* std::function<void (StringViewBase<char>)> const&

# ::stappler::operator<<(std::function<void (StringViewBase<char>)> const&,uint64_t)

## BRIEF

## CONTENT

Параметры:
* std::function<void (StringViewBase<char>)> const&
* uint64_t

Возвращает:
* std::function<void (StringViewBase<char>)> const&

# ::stappler::operator<<(std::function<void (StringViewBase<char16_t>)> const&,StringViewBase<char16_t>)

## BRIEF

## CONTENT

Параметры:
* std::function<void (StringViewBase<char16_t>)> const&
* StringViewBase<char16_t>

Возвращает:
* std::function<void (StringViewBase<char16_t>)> const&

# ::stappler::operator<<(std::function<void (StringViewBase<char16_t>)> const&,int64_t)

## BRIEF

## CONTENT

Параметры:
* std::function<void (StringViewBase<char16_t>)> const&
* int64_t

Возвращает:
* std::function<void (StringViewBase<char16_t>)> const&

# ::stappler::operator<<(std::function<void (StringViewBase<char16_t>)> const&,uint64_t)

## BRIEF

## CONTENT

Параметры:
* std::function<void (StringViewBase<char16_t>)> const&
* uint64_t

Возвращает:
* std::function<void (StringViewBase<char16_t>)> const&

# ::stappler::operator<<(std::function<void (StringViewUtf8)> const&,stappler::StringViewUtf8)

## BRIEF

## CONTENT

Параметры:
* std::function<void (StringViewUtf8)> const&
* stappler::StringViewUtf8

Возвращает:
* std::function<void (StringViewUtf8)> const&

# ::stappler::operator<<(std::function<void (StringViewUtf8)> const&,int64_t)

## BRIEF

## CONTENT

Параметры:
* std::function<void (StringViewUtf8)> const&
* int64_t

Возвращает:
* std::function<void (StringViewUtf8)> const&

# ::stappler::operator<<(std::function<void (StringViewUtf8)> const&,uint64_t)

## BRIEF

## CONTENT

Параметры:
* std::function<void (StringViewUtf8)> const&
* uint64_t

Возвращает:
* std::function<void (StringViewUtf8)> const&

# ::stappler::operator<<(memory::function<void (StringViewBase<char>)> const&,char const*)

## BRIEF

## CONTENT

Параметры:
* memory::function<void (StringViewBase<char>)> const&
* char const*

Возвращает:
* memory::function<void (StringViewBase<char>)> const&

# ::stappler::operator<<<size_t>(memory::function<void (StringViewBase<char>)> const&,char const[N],StringViewBase<char>)

## BRIEF

## CONTENT

Параметры шаблона:
* size_t N

Параметры:
* memory::function<void (StringViewBase<char>)> const&
* char const[N]
* StringViewBase<char>

Возвращает:
* memory::function<void (StringViewBase<char>)> const&

# ::stappler::operator<<(memory::function<void (StringViewBase<char>)> const&,StringViewBase<char>)

## BRIEF

## CONTENT

Параметры:
* memory::function<void (StringViewBase<char>)> const&
* StringViewBase<char>

Возвращает:
* memory::function<void (StringViewBase<char>)> const&

# ::stappler::operator<<(memory::function<void (StringViewBase<char>)> const&,double)

## BRIEF

## CONTENT

Параметры:
* memory::function<void (StringViewBase<char>)> const&
* double

Возвращает:
* memory::function<void (StringViewBase<char>)> const&

# ::stappler::operator<<(memory::function<void (StringViewBase<char>)> const&,int64_t)

## BRIEF

## CONTENT

Параметры:
* memory::function<void (StringViewBase<char>)> const&
* int64_t

Возвращает:
* memory::function<void (StringViewBase<char>)> const&

# ::stappler::operator<<(memory::function<void (StringViewBase<char>)> const&,uint64_t)

## BRIEF

## CONTENT

Параметры:
* memory::function<void (StringViewBase<char>)> const&
* uint64_t

Возвращает:
* memory::function<void (StringViewBase<char>)> const&

# ::stappler::operator<<(memory::function<void (StringViewBase<char16_t>)> const&,StringViewBase<char16_t>)

## BRIEF

## CONTENT

Параметры:
* memory::function<void (StringViewBase<char16_t>)> const&
* StringViewBase<char16_t>

Возвращает:
* memory::function<void (StringViewBase<char16_t>)> const&

# ::stappler::operator<<(memory::function<void (StringViewBase<char16_t>)> const&,int64_t)

## BRIEF

## CONTENT

Параметры:
* memory::function<void (StringViewBase<char16_t>)> const&
* int64_t

Возвращает:
* memory::function<void (StringViewBase<char16_t>)> const&

# ::stappler::operator<<(memory::function<void (StringViewBase<char16_t>)> const&,uint64_t)

## BRIEF

## CONTENT

Параметры:
* memory::function<void (StringViewBase<char16_t>)> const&
* uint64_t

Возвращает:
* memory::function<void (StringViewBase<char16_t>)> const&

# ::stappler::operator<<(memory::function<void (StringViewUtf8)> const&,stappler::StringViewUtf8)

## BRIEF

## CONTENT

Параметры:
* memory::function<void (StringViewUtf8)> const&
* stappler::StringViewUtf8

Возвращает:
* memory::function<void (StringViewUtf8)> const&

# ::stappler::operator<<(memory::function<void (StringViewUtf8)> const&,int64_t)

## BRIEF

## CONTENT

Параметры:
* memory::function<void (StringViewUtf8)> const&
* int64_t

Возвращает:
* memory::function<void (StringViewUtf8)> const&

# ::stappler::operator<<(memory::function<void (StringViewUtf8)> const&,uint64_t)

## BRIEF

## CONTENT

Параметры:
* memory::function<void (StringViewUtf8)> const&
* uint64_t

Возвращает:
* memory::function<void (StringViewUtf8)> const&

# ::stappler::string::compare<typename,typename,typename>(L const&,R const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename L
* typename R
* typename CharType

Параметры:
* L const&
* R const&

Возвращает:
* int

# ::stappler::string::compareCaseInsensivive<typename,typename,typename>(L const&,R const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename L
* typename R
* typename CharType

Параметры:
* L const&
* R const&

Возвращает:
* int

# ::std::hash<stappler::StringView>::hash<stappler::StringView>

## BRIEF

## CONTENT


# ::std::hash<stappler::StringView>::hash()

## BRIEF

## CONTENT


# ::std::hash<stappler::StringView>::operator()(stappler::StringView const&) const

## BRIEF

## CONTENT

Параметры:
* stappler::StringView const&

Возвращает:
* std::size_t

# ::std::hash<stappler::StringViewUtf8>::hash<stappler::StringViewUtf8>

## BRIEF

## CONTENT


# ::std::hash<stappler::StringViewUtf8>::hash()

## BRIEF

## CONTENT


# ::std::hash<stappler::StringViewUtf8>::operator()(stappler::StringViewUtf8 const&) const

## BRIEF

## CONTENT

Параметры:
* stappler::StringViewUtf8 const&

Возвращает:
* std::size_t

# ::std::hash<stappler::WideStringView>::hash<stappler::WideStringView>

## BRIEF

## CONTENT


# ::std::hash<stappler::WideStringView>::hash()

## BRIEF

## CONTENT


# ::std::hash<stappler::WideStringView>::operator()(stappler::WideStringView const&) const

## BRIEF

## CONTENT

Параметры:
* stappler::WideStringView const&

Возвращает:
* std::size_t