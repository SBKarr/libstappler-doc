Title: SPMemStringStream.h


# LIBSTAPPLER_COMMON_MEMORY_SPMEMSTRINGSTREAM_H_

## BRIEF

## CONTENT


# ::stappler::memory::basic_ostringbuf_bufsize

## BRIEF

## CONTENT

Тип: size_t const


# ::stappler::memory::basic_ostringbuf<typename>

## BRIEF

## CONTENT

Параметры шаблона:
* typename CharType

Базовые классы:
* std::basic_streambuf<CharType,std::char_traits<CharType>>
* AllocPool


# ::stappler::memory::basic_ostringbuf<typename>::storage_type

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::basic_ostringbuf<typename>::allocator_type

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::basic_ostringbuf<typename>::storage_allocator_type

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::basic_ostringbuf<typename>::traits_type

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::basic_ostringbuf<typename>::size_type

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::basic_ostringbuf<typename>::string_type

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::basic_ostringbuf<typename>::mem_type

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::basic_ostringbuf<typename>::char_type

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::basic_ostringbuf<typename>::int_type

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::basic_ostringbuf<typename>::streambuf_type

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::basic_ostringbuf<typename>::basic_ostringbuf(stappler::memory::basic_ostringbuf::size_type,stappler::memory::basic_ostringbuf::allocator_type const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::memory::basic_ostringbuf::size_type
* stappler::memory::basic_ostringbuf::allocator_type const&


# ::stappler::memory::basic_ostringbuf<typename>::basic_ostringbuf(CharType*,stappler::memory::basic_ostringbuf::size_type,stappler::memory::basic_ostringbuf::allocator_type const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* CharType*
* stappler::memory::basic_ostringbuf::size_type
* stappler::memory::basic_ostringbuf::allocator_type const&


# ::stappler::memory::basic_ostringbuf<typename>::basic_ostringbuf(basic_ostringbuf<CharType>&&,stappler::memory::basic_ostringbuf::allocator_type const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* basic_ostringbuf<CharType>&&
* stappler::memory::basic_ostringbuf::allocator_type const&


# ::stappler::memory::basic_ostringbuf<typename>::operator=(basic_ostringbuf<CharType>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* basic_ostringbuf<CharType>&&

Возвращает:
* basic_ostringbuf<CharType>&

# ::stappler::memory::basic_ostringbuf<typename>::~basic_ostringbuf()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::basic_ostringbuf<typename>::empty() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::memory::basic_ostringbuf<typename>::size() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* size_type

# ::stappler::memory::basic_ostringbuf<typename>::data()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* CharType*

# ::stappler::memory::basic_ostringbuf<typename>::data() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* CharType const*

# ::stappler::memory::basic_ostringbuf<typename>::str() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* string_type

# ::stappler::memory::basic_ostringbuf<typename>::clear()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::basic_ostringbuf<typename>::reserve(size_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* size_t


# ::stappler::memory::basic_ostringbuf<typename>::basic_ostringbuf(const basic_ostringbuf<CharType>&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* const basic_ostringbuf<CharType>&


# ::stappler::memory::basic_ostringbuf<typename>::operator=(const basic_ostringbuf<CharType>&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* const basic_ostringbuf<CharType>&

Возвращает:
* basic_ostringbuf<CharType>&

# ::stappler::memory::basic_ostringbuf<typename>::get_allocator() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* allocator_type&

# ::stappler::memory::basic_ostringbuf<typename>::make_flush()

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::memory::basic_ostringbuf<typename>::overflow(stappler::memory::basic_ostringbuf::int_type)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::memory::basic_ostringbuf::int_type

Возвращает:
* int_type

# ::stappler::memory::basic_ostringbuf<typename>::sync()

## BRIEF

## CONTENT

Доступ: protected

Возвращает:
* int

# ::stappler::memory::basic_ostringbuf<typename>::_buf

## BRIEF

## CONTENT

Доступ: protected

Тип: mem_type


# ::stappler::memory::basic_ostringstream<typename>

## BRIEF

## CONTENT

Параметры шаблона:
* typename CharType

Базовые классы:
* std::basic_ostream<CharType>
* AllocPool


# ::stappler::memory::basic_ostringstream<typename>::char_type

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::basic_ostringstream<typename>::traits_type

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::basic_ostringstream<typename>::allocator_type

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::basic_ostringstream<typename>::int_type

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::basic_ostringstream<typename>::pos_type

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::basic_ostringstream<typename>::off_type

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::basic_ostringstream<typename>::size_type

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::basic_ostringstream<typename>::string_type

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::basic_ostringstream<typename>::stringbuf_type

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::basic_ostringstream<typename>::ostream_type

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::basic_ostringstream<typename>::_buf

## BRIEF

## CONTENT

Доступ: private

Тип: stringbuf_type


# ::stappler::memory::basic_ostringstream<typename>::basic_ostringstream(stappler::memory::basic_ostringstream::size_type,stappler::memory::basic_ostringstream::allocator_type const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::memory::basic_ostringstream::size_type
* stappler::memory::basic_ostringstream::allocator_type const&


# ::stappler::memory::basic_ostringstream<typename>::basic_ostringstream(CharType*,stappler::memory::basic_ostringstream::size_type,stappler::memory::basic_ostringstream::allocator_type const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* CharType*
* stappler::memory::basic_ostringstream::size_type
* stappler::memory::basic_ostringstream::allocator_type const&


# ::stappler::memory::basic_ostringstream<typename>::basic_ostringstream(basic_ostringstream<CharType>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* basic_ostringstream<CharType>&&


# ::stappler::memory::basic_ostringstream<typename>::operator=(basic_ostringstream<CharType>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* basic_ostringstream<CharType>&&

Возвращает:
* basic_ostringstream<CharType>&

# ::stappler::memory::basic_ostringstream<typename>::~basic_ostringstream()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::basic_ostringstream<typename>::basic_ostringstream(const basic_ostringstream<CharType>&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* const basic_ostringstream<CharType>&


# ::stappler::memory::basic_ostringstream<typename>::operator=(const basic_ostringstream<CharType>&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* const basic_ostringstream<CharType>&

Возвращает:
* basic_ostringstream<CharType>&

# ::stappler::memory::basic_ostringstream<typename>::swap(basic_ostringstream<CharType>&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* basic_ostringstream<CharType>&


# ::stappler::memory::basic_ostringstream<typename>::rdbuf() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stringbuf_type*

# ::stappler::memory::basic_ostringstream<typename>::str() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* string_type

# ::stappler::memory::basic_ostringstream<typename>::weak() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* string_type

# ::stappler::memory::basic_ostringstream<typename>::clear()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::basic_ostringstream<typename>::empty() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::memory::basic_ostringstream<typename>::size() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* size_t

# ::stappler::memory::basic_ostringstream<typename>::data()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* CharType*

# ::stappler::memory::basic_ostringstream<typename>::data() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* CharType const*

# ::stappler::memory::basic_ostringstream<typename>::reserve(size_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* size_t


# ::stappler::memory::basic_ostringstream<typename>::get_allocator() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* allocator_type&

# ::stappler::memory::ostringstream

## BRIEF

## CONTENT


# ::stappler::memory::operator<<<typename>(std::basic_ostream<CharType>&,basic_ostringstream<CharType> const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename CharType

Параметры:
* std::basic_ostream<CharType>&
* basic_ostringstream<CharType> const&

Возвращает:
* std::basic_ostream<CharType>&