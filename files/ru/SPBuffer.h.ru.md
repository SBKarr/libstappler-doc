Title: SPBuffer.h


# LIBSTAPPLER_COMMON_UTILS_SPBUFFER_H_

## BRIEF

## CONTENT


# ::stappler::BufferTemplate<typename>

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface

Базовые классы:
* Interface::AllocBaseType


# ::stappler::BufferTemplate<typename>::byte_type

## BRIEF

## CONTENT

Доступ: public


# ::stappler::BufferTemplate<typename>::defsize

## BRIEF

## CONTENT

Доступ: public

Тип: size_t const


# ::stappler::BufferTemplate<typename>::BufferTemplate(size_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* size_t


# ::stappler::BufferTemplate<typename>::BufferTemplate(const BufferTemplate<Interface>&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* const BufferTemplate<Interface>&


# ::stappler::BufferTemplate<typename>::BufferTemplate(BufferTemplate<Interface>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* BufferTemplate<Interface>&&


# ::stappler::BufferTemplate<typename>::operator=(const BufferTemplate<Interface>&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* const BufferTemplate<Interface>&

Возвращает:
* BufferTemplate<Interface>&

# ::stappler::BufferTemplate<typename>::operator=(BufferTemplate<Interface>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* BufferTemplate<Interface>&&

Возвращает:
* BufferTemplate<Interface>&

# ::stappler::BufferTemplate<typename>::put<typename,typename std::enable_if<sizeof(CharType) == 1>::type*>(CharType const*,size_t)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename CharType
* typename std::enable_if<sizeof(CharType) == 1>::type* 

Параметры:
* CharType const*
* size_t

Возвращает:
* size_t

# ::stappler::BufferTemplate<typename>::putc(char16_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* char16_t

Возвращает:
* size_t

# ::stappler::BufferTemplate<typename>::putc(char)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* char

Возвращает:
* size_t

# ::stappler::BufferTemplate<typename>::get<typename>() const

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename Reader

Возвращает:
* Reader

# ::stappler::BufferTemplate<typename>::pop<typename>(size_t)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename Reader

Параметры:
* size_t

Возвращает:
* Reader

# ::stappler::BufferTemplate<typename>::read<typename>(size_t)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename Reader

Параметры:
* size_t

Возвращает:
* Reader

# ::stappler::BufferTemplate<typename>::clear()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::BufferTemplate<typename>::seek(size_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* size_t

Возвращает:
* bool

# ::stappler::BufferTemplate<typename>::capacity() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* size_t

# ::stappler::BufferTemplate<typename>::size() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* size_t

# ::stappler::BufferTemplate<typename>::input() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* size_t

# ::stappler::BufferTemplate<typename>::empty() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::BufferTemplate<typename>::str() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* typename Interface::StringType

# ::stappler::BufferTemplate<typename>::data()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint8_t*

# ::stappler::BufferTemplate<typename>::prepare(size_t&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* size_t&

Возвращает:
* uint8_t*

# ::stappler::BufferTemplate<typename>::save(uint8_t*,size_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint8_t*
* size_t


# ::stappler::BufferTemplate<typename>::overflow()

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::BufferTemplate<typename>::overflow(size_t)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* size_t


# ::stappler::BufferTemplate<typename>::_buffer

## BRIEF

## CONTENT

Доступ: protected

Тип: typename Interface::BytesType


# ::stappler::BufferTemplate<typename>::_ptr

## BRIEF

## CONTENT

Доступ: protected

Тип: uint8_t*


# ::stappler::BufferTemplate<typename>::_end

## BRIEF

## CONTENT

Доступ: protected

Тип: uint8_t*


# ::stappler::BufferTemplate<typename>::_input

## BRIEF

## CONTENT

Доступ: protected

Тип: size_t


# ::stappler::StackBuffer<size_t>

## BRIEF

## CONTENT

Параметры шаблона:
* size_t Size


# ::stappler::StackBuffer<size_t>::StackBuffer()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::StackBuffer<size_t>::StackBuffer(const StackBuffer<Size>&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* const StackBuffer<Size>&


# ::stappler::StackBuffer<size_t>::StackBuffer(StackBuffer<Size>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* StackBuffer<Size>&&


# ::stappler::StackBuffer<size_t>::operator=(const StackBuffer<Size>&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* const StackBuffer<Size>&

Возвращает:
* StackBuffer<Size>&

# ::stappler::StackBuffer<size_t>::operator=(StackBuffer<Size>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* StackBuffer<Size>&&

Возвращает:
* StackBuffer<Size>&

# ::stappler::StackBuffer<size_t>::operator[](size_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* size_t

Возвращает:
* uint8_t&

# ::stappler::StackBuffer<size_t>::operator[](size_t) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* size_t

Возвращает:
* uint8_t const&

# ::stappler::StackBuffer<size_t>::at(size_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* size_t

Возвращает:
* uint8_t&

# ::stappler::StackBuffer<size_t>::at(size_t) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* size_t

Возвращает:
* uint8_t const&

# ::stappler::StackBuffer<size_t>::size() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* size_t

# ::stappler::StackBuffer<size_t>::capacity() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* size_t

# ::stappler::StackBuffer<size_t>::remains() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* size_t

# ::stappler::StackBuffer<size_t>::empty() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::StackBuffer<size_t>::full() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::StackBuffer<size_t>::soft_clear()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::StackBuffer<size_t>::clear()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::StackBuffer<size_t>::data()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint8_t*

# ::stappler::StackBuffer<size_t>::data() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint8_t const*

# ::stappler::StackBuffer<size_t>::put(uint8_t const*,size_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint8_t const*
* size_t

Возвращает:
* size_t

# ::stappler::StackBuffer<size_t>::putc(uint8_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint8_t

Возвращает:
* size_t

# ::stappler::StackBuffer<size_t>::get<typename>() const

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename Reader

Возвращает:
* Reader

# ::stappler::StackBuffer<size_t>::prepare(size_t&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* size_t&

Возвращает:
* uint8_t*

# ::stappler::StackBuffer<size_t>::prepare_preserve(size_t&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* size_t&

Возвращает:
* uint8_t*

# ::stappler::StackBuffer<size_t>::save(uint8_t*,size_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint8_t*
* size_t


# ::stappler::StackBuffer<size_t>::_size

## BRIEF

## CONTENT

Доступ: protected

Тип: size_t


# ::stappler::StackBuffer<size_t>::_buf

## BRIEF

## CONTENT

Доступ: protected

Тип: std::array<uint8_t, Size>


# ::stappler::io::BufferTraits<stappler::BufferTemplate<Interface>>::BufferTraits<stappler::BufferTemplate<Interface>>

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface


# ::stappler::io::BufferTraits<stappler::BufferTemplate<Interface>>::type

## BRIEF

## CONTENT


# ::stappler::io::BufferTraits<stappler::BufferTemplate<Interface>>::PrepareFn(void*,size_t&)

## BRIEF

## CONTENT

Параметры:
* void*
* size_t&

Возвращает:
* uint8_t*

# ::stappler::io::BufferTraits<stappler::BufferTemplate<Interface>>::SaveFn(void*,uint8_t*,size_t,size_t)

## BRIEF

## CONTENT

Параметры:
* void*
* uint8_t*
* size_t
* size_t


# ::stappler::io::BufferTraits<stappler::BufferTemplate<Interface>>::SizeFn(void*)

## BRIEF

## CONTENT

Параметры:
* void*

Возвращает:
* size_t

# ::stappler::io::BufferTraits<stappler::BufferTemplate<Interface>>::CapacityFn(void*)

## BRIEF

## CONTENT

Параметры:
* void*

Возвращает:
* size_t

# ::stappler::io::BufferTraits<stappler::BufferTemplate<Interface>>::DataFn(void*)

## BRIEF

## CONTENT

Параметры:
* void*

Возвращает:
* uint8_t*

# ::stappler::io::BufferTraits<stappler::BufferTemplate<Interface>>::ClearFn(void*)

## BRIEF

## CONTENT

Параметры:
* void*


# ::stappler::io::BufferTraits<StackBuffer<Size>>::BufferTraits<StackBuffer<Size>>

## BRIEF

## CONTENT

Параметры шаблона:
* size_t Size


# ::stappler::io::BufferTraits<StackBuffer<Size>>::type

## BRIEF

## CONTENT


# ::stappler::io::BufferTraits<StackBuffer<Size>>::PrepareFn(void*,size_t&)

## BRIEF

## CONTENT

Параметры:
* void*
* size_t&

Возвращает:
* uint8_t*

# ::stappler::io::BufferTraits<StackBuffer<Size>>::SaveFn(void*,uint8_t*,size_t,size_t)

## BRIEF

## CONTENT

Параметры:
* void*
* uint8_t*
* size_t
* size_t


# ::stappler::io::BufferTraits<StackBuffer<Size>>::SizeFn(void*)

## BRIEF

## CONTENT

Параметры:
* void*

Возвращает:
* size_t

# ::stappler::io::BufferTraits<StackBuffer<Size>>::CapacityFn(void*)

## BRIEF

## CONTENT

Параметры:
* void*

Возвращает:
* size_t

# ::stappler::io::BufferTraits<StackBuffer<Size>>::DataFn(void*)

## BRIEF

## CONTENT

Параметры:
* void*

Возвращает:
* uint8_t*

# ::stappler::io::BufferTraits<StackBuffer<Size>>::ClearFn(void*)

## BRIEF

## CONTENT

Параметры:
* void*
