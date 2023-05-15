Title: SPBytesReader.h


# LIBSTAPPLER_COMMON_STRING_SPBYTESREADER_H_

## BRIEF

## CONTENT


# ::stappler::BytesReader<typename>

## BRIEF

## CONTENT

Параметры шаблона:
* typename _CharType


# ::stappler::BytesReader<typename>::CharType

## BRIEF

## CONTENT

Доступ: public


# ::stappler::BytesReader<typename>::Chars<CharType...>

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* CharType Args


# ::stappler::BytesReader<typename>::Range<char,char>

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* char First
* char Last


# ::stappler::BytesReader<typename>::CharGroup<stappler::CharGroupId>

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* stappler::CharGroupId Group


# ::stappler::BytesReader<typename>::Compose<typename>

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename Args


# ::stappler::BytesReader<typename>::BytesReader()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::BytesReader<typename>::BytesReader(stappler::BytesReader::CharType const*,size_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::BytesReader::CharType const*
* size_t


# ::stappler::BytesReader<typename>::set(uint8_t const*,size_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint8_t const*
* size_t

Возвращает:
* BytesReader<_CharType>&

# ::stappler::BytesReader<typename>::offset(size_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* size_t


# ::stappler::BytesReader<typename>::compare(stappler::BytesReader::CharType const*,size_t) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::BytesReader::CharType const*
* size_t

Возвращает:
* bool

# ::stappler::BytesReader<typename>::compare(stappler::BytesReader::CharType const*) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::BytesReader::CharType const*

Возвращает:
* bool

# ::stappler::BytesReader<typename>::prefix(stappler::BytesReader::CharType const*,size_t) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::BytesReader::CharType const*
* size_t

Возвращает:
* bool

# ::stappler::BytesReader<typename>::starts_with(BytesReader<stappler::BytesReader::CharType> const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* BytesReader<stappler::BytesReader::CharType> const&

Возвращает:
* bool

# ::stappler::BytesReader<typename>::starts_with(stappler::BytesReader::CharType const*,size_t) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::BytesReader::CharType const*
* size_t

Возвращает:
* bool

# ::stappler::BytesReader<typename>::starts_with(stappler::BytesReader::CharType const*) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::BytesReader::CharType const*

Возвращает:
* bool

# ::stappler::BytesReader<typename>::ends_with(BytesReader<stappler::BytesReader::CharType> const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* BytesReader<stappler::BytesReader::CharType> const&

Возвращает:
* bool

# ::stappler::BytesReader<typename>::ends_with(stappler::BytesReader::CharType const*,size_t) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::BytesReader::CharType const*
* size_t

Возвращает:
* bool

# ::stappler::BytesReader<typename>::ends_with(stappler::BytesReader::CharType const*) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::BytesReader::CharType const*

Возвращает:
* bool

# ::stappler::BytesReader<typename>::data() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* CharType*

# ::stappler::BytesReader<typename>::size() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* size_t

# ::stappler::BytesReader<typename>::find(stappler::BytesReader::CharType const*,size_t,size_t) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::BytesReader::CharType const*
* size_t
* size_t

Возвращает:
* size_t

# ::stappler::BytesReader<typename>::find(stappler::BytesReader::CharType,size_t) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::BytesReader::CharType
* size_t

Возвращает:
* size_t

# ::stappler::BytesReader<typename>::rfind(stappler::BytesReader::CharType const*,size_t,size_t) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::BytesReader::CharType const*
* size_t
* size_t

Возвращает:
* size_t

# ::stappler::BytesReader<typename>::rfind(stappler::BytesReader::CharType,size_t) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::BytesReader::CharType
* size_t

Возвращает:
* size_t

# ::stappler::BytesReader<typename>::find(BytesReader<stappler::BytesReader::CharType> const&,size_t) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* BytesReader<stappler::BytesReader::CharType> const&
* size_t

Возвращает:
* size_t

# ::stappler::BytesReader<typename>::find(stappler::BytesReader::CharType const*,size_t) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::BytesReader::CharType const*
* size_t

Возвращает:
* size_t

# ::stappler::BytesReader<typename>::rfind(BytesReader<stappler::BytesReader::CharType> const&,size_t) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* BytesReader<stappler::BytesReader::CharType> const&
* size_t

Возвращает:
* size_t

# ::stappler::BytesReader<typename>::rfind(stappler::BytesReader::CharType const*,size_t) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::BytesReader::CharType const*
* size_t

Возвращает:
* size_t

# ::stappler::BytesReader<typename>::is(stappler::BytesReader::CharType const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::BytesReader::CharType const&

Возвращает:
* bool

# ::stappler::BytesReader<typename>::operator>(size_t const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* size_t const&

Возвращает:
* bool

# ::stappler::BytesReader<typename>::operator>=(size_t const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* size_t const&

Возвращает:
* bool

# ::stappler::BytesReader<typename>::operator<(size_t const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* size_t const&

Возвращает:
* bool

# ::stappler::BytesReader<typename>::operator<=(size_t const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* size_t const&

Возвращает:
* bool

# ::stappler::BytesReader<typename>::front() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* CharType&

# ::stappler::BytesReader<typename>::back() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* CharType&

# ::stappler::BytesReader<typename>::at(size_t const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* size_t const&

Возвращает:
* CharType&

# ::stappler::BytesReader<typename>::operator[](size_t const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* size_t const&

Возвращает:
* CharType&

# ::stappler::BytesReader<typename>::operator*() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* CharType&

# ::stappler::BytesReader<typename>::clear()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::BytesReader<typename>::empty() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::BytesReader<typename>::terminated() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::BytesReader<typename>::ptr

## BRIEF

## CONTENT

Доступ: protected

Тип: CharType*


# ::stappler::BytesReader<typename>::len

## BRIEF

## CONTENT

Доступ: protected

Тип: size_t


# ::stappler::BytesReader<typename>::find(stappler::BytesReader::CharType const*,size_t,size_t) const

## BRIEF

## CONTENT

Параметры:
* stappler::BytesReader::CharType const*
* size_t
* size_t

Возвращает:
* size_t

# ::stappler::BytesReader<typename>::find(stappler::BytesReader::CharType,size_t) const

## BRIEF

## CONTENT

Параметры:
* stappler::BytesReader::CharType
* size_t

Возвращает:
* size_t

# ::stappler::BytesReader<typename>::rfind(stappler::BytesReader::CharType const*,size_t,size_t) const

## BRIEF

## CONTENT

Параметры:
* stappler::BytesReader::CharType const*
* size_t
* size_t

Возвращает:
* size_t

# ::stappler::BytesReader<typename>::rfind(stappler::BytesReader::CharType,size_t) const

## BRIEF

## CONTENT

Параметры:
* stappler::BytesReader::CharType
* size_t

Возвращает:
* size_t