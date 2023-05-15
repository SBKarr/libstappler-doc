Title: SPIOConsumer.h


# LIBSTAPPLER_COMMON_IO_SPIOCONSUMER_H_

## BRIEF

## CONTENT


# ::stappler::io::ConsumerTraitsStream

## BRIEF

## CONTENT


# ::stappler::io::ConsumerTraitsStream::stream_type

## BRIEF

## CONTENT


# ::stappler::io::ConsumerTraitsStream::WriteFn(void*,uint8_t const*,size_t)

## BRIEF

## CONTENT

Параметры:
* void*
* uint8_t const*
* size_t

Возвращает:
* size_t

# ::stappler::io::ConsumerTraitsStream::FlushFn(void*)

## BRIEF

## CONTENT

Параметры:
* void*


# ::stappler::io::WriteFunction<typename>(T&,uint8_t const*,size_t)

## BRIEF

## CONTENT

Параметры шаблона:
* typename T

Параметры:
* T&
* uint8_t const*
* size_t

Возвращает:
* size_t

# ::stappler::io::FlushFunction<typename>(T&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename T

Параметры:
* T&


# ::stappler::io::ConsumerTraitsOverload<class>

## BRIEF

## CONTENT

Параметры шаблона:
* class T


# ::stappler::io::ConsumerTraitsOverload<class>::WriteFn(void*,uint8_t const*,size_t)

## BRIEF

## CONTENT

Параметры:
* void*
* uint8_t const*
* size_t

Возвращает:
* size_t

# ::stappler::io::ConsumerTraitsOverload<class>::FlushFn(void*)

## BRIEF

## CONTENT

Параметры:
* void*


# ::stappler::io::ConsumerTraitsReolution<typename>

## BRIEF

## CONTENT

Параметры шаблона:
* typename T


# ::stappler::io::ConsumerTraitsReolution<typename>::type

## BRIEF

## CONTENT


# ::stappler::io::ConsumerTraits<typename>

## BRIEF

## CONTENT

Параметры шаблона:
* typename T


# ::stappler::io::ConsumerTraits<typename>::traits_type

## BRIEF

## CONTENT


# ::stappler::io::ConsumerTraits<typename>::WriteFn(void*,uint8_t const*,size_t)

## BRIEF

## CONTENT

Параметры:
* void*
* uint8_t const*
* size_t

Возвращает:
* size_t

# ::stappler::io::ConsumerTraits<typename>::FlushFn(void*)

## BRIEF

## CONTENT

Параметры:
* void*


# ::stappler::io::Consumer

## BRIEF

## CONTENT


# ::stappler::io::Consumer::Consumer<typename,typename>(T&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename T
* typename Traits

Параметры:
* T&


# ::stappler::io::Consumer::write(uint8_t const*,size_t) const

## BRIEF

## CONTENT

Параметры:
* uint8_t const*
* size_t

Возвращает:
* size_t

# ::stappler::io::Consumer::write(stappler::io::Buffer const&) const

## BRIEF

## CONTENT

Параметры:
* stappler::io::Buffer const&

Возвращает:
* size_t

# ::stappler::io::Consumer::flush() const

## BRIEF

## CONTENT


# ::stappler::io::Consumer::ptr

## BRIEF

## CONTENT

Тип: void*


# ::stappler::io::Consumer::write_ptr

## BRIEF

## CONTENT

Тип: stappler::io::write_fn


# ::stappler::io::Consumer::flush_ptr

## BRIEF

## CONTENT

Тип: stappler::io::flush_fn


# ::stappler::io::Consumer::Consumer<typename,typename>(T&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename T
* typename Traits

Параметры:
* T&


# ::stappler::io::Consumer::write(uint8_t const*,size_t) const

## BRIEF

## CONTENT

Параметры:
* uint8_t const*
* size_t

Возвращает:
* size_t

# ::stappler::io::Consumer::flush() const

## BRIEF

## CONTENT
