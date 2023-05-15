Title: SPIOProducer.h


# LIBSTAPPLER_COMMON_IO_SPIOPRODUCER_H_

## BRIEF

## CONTENT


# ::stappler::io::ProducerTraitsStream

## BRIEF

## CONTENT


# ::stappler::io::ProducerTraitsStream::stream_type

## BRIEF

## CONTENT


# ::stappler::io::ProducerTraitsStream::ReadFn(void*,uint8_t*,size_t)

## BRIEF

## CONTENT

Параметры:
* void*
* uint8_t*
* size_t

Возвращает:
* size_t

# ::stappler::io::ProducerTraitsStream::SeekFn(void*,int64_t,stappler::io::Seek)

## BRIEF

## CONTENT

Параметры:
* void*
* int64_t
* stappler::io::Seek

Возвращает:
* size_t

# ::stappler::io::ProducerTraitsStream::TellFn(void*)

## BRIEF

## CONTENT

Параметры:
* void*

Возвращает:
* size_t

# ::stappler::io::ReadFunction<class>(T&,uint8_t*,size_t)

## BRIEF

## CONTENT

Параметры шаблона:
* class T

Параметры:
* T&
* uint8_t*
* size_t

Возвращает:
* size_t

# ::stappler::io::SeekFunction<class>(T&,int64_t,stappler::io::Seek)

## BRIEF

## CONTENT

Параметры шаблона:
* class T

Параметры:
* T&
* int64_t
* stappler::io::Seek

Возвращает:
* size_t

# ::stappler::io::TellFunction<class>(T&)

## BRIEF

## CONTENT

Параметры шаблона:
* class T

Параметры:
* T&

Возвращает:
* size_t

# ::stappler::io::ProducerTraitsOverload<class>

## BRIEF

## CONTENT

Параметры шаблона:
* class T


# ::stappler::io::ProducerTraitsOverload<class>::ReadFn(void*,uint8_t*,size_t)

## BRIEF

## CONTENT

Параметры:
* void*
* uint8_t*
* size_t

Возвращает:
* size_t

# ::stappler::io::ProducerTraitsOverload<class>::SeekFn(void*,int64_t,stappler::io::Seek)

## BRIEF

## CONTENT

Параметры:
* void*
* int64_t
* stappler::io::Seek

Возвращает:
* size_t

# ::stappler::io::ProducerTraitsOverload<class>::TellFn(void*)

## BRIEF

## CONTENT

Параметры:
* void*

Возвращает:
* size_t

# ::stappler::io::ProducerTraitsResolution<typename>

## BRIEF

## CONTENT

Параметры шаблона:
* typename T


# ::stappler::io::ProducerTraitsResolution<typename>::type

## BRIEF

## CONTENT


# ::stappler::io::ProducerTraits<typename>

## BRIEF

## CONTENT

Параметры шаблона:
* typename T


# ::stappler::io::ProducerTraits<typename>::traits_type

## BRIEF

## CONTENT


# ::stappler::io::ProducerTraits<typename>::ReadFn(void*,uint8_t*,size_t)

## BRIEF

## CONTENT

Параметры:
* void*
* uint8_t*
* size_t

Возвращает:
* size_t

# ::stappler::io::ProducerTraits<typename>::SeekFn(void*,int64_t,stappler::io::Seek)

## BRIEF

## CONTENT

Параметры:
* void*
* int64_t
* stappler::io::Seek

Возвращает:
* size_t

# ::stappler::io::ProducerTraits<typename>::TellFn(void*)

## BRIEF

## CONTENT

Параметры:
* void*

Возвращает:
* size_t

# ::stappler::io::Producer

## BRIEF

## CONTENT


# ::stappler::io::Producer::Producer<typename,typename>(T&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename T
* typename Traits

Параметры:
* T&


# ::stappler::io::Producer::read(uint8_t*,size_t) const

## BRIEF

## CONTENT

Параметры:
* uint8_t*
* size_t

Возвращает:
* size_t

# ::stappler::io::Producer::read(stappler::io::Buffer const&,size_t) const

## BRIEF

## CONTENT

Параметры:
* stappler::io::Buffer const&
* size_t

Возвращает:
* size_t

# ::stappler::io::Producer::seek(int64_t,stappler::io::Seek) const

## BRIEF

## CONTENT

Параметры:
* int64_t
* stappler::io::Seek

Возвращает:
* size_t

# ::stappler::io::Producer::seekAndRead<typename>(size_t,T&&,size_t) const

## BRIEF

## CONTENT

Параметры шаблона:
* typename T

Параметры:
* size_t
* T&&
* size_t

Возвращает:
* size_t

# ::stappler::io::Producer::tell() const

## BRIEF

## CONTENT

Возвращает:
* size_t

# ::stappler::io::Producer::ptr

## BRIEF

## CONTENT

Тип: void*


# ::stappler::io::Producer::read_ptr

## BRIEF

## CONTENT

Тип: stappler::io::read_fn


# ::stappler::io::Producer::seek_ptr

## BRIEF

## CONTENT

Тип: stappler::io::seek_fn


# ::stappler::io::Producer::tell_ptr

## BRIEF

## CONTENT

Тип: stappler::io::size_fn


# ::stappler::io::Producer::Producer<typename,typename>(T&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename T
* typename Traits

Параметры:
* T&


# ::stappler::io::Producer::read(uint8_t*,size_t) const

## BRIEF

## CONTENT

Параметры:
* uint8_t*
* size_t

Возвращает:
* size_t

# ::stappler::io::Producer::seek(int64_t,stappler::io::Seek) const

## BRIEF

## CONTENT

Параметры:
* int64_t
* stappler::io::Seek

Возвращает:
* size_t

# ::stappler::io::Producer::seekAndRead<typename>(size_t,T&&,size_t) const

## BRIEF

## CONTENT

Параметры шаблона:
* typename T

Параметры:
* size_t
* T&&
* size_t

Возвращает:
* size_t

# ::stappler::io::Producer::tell() const

## BRIEF

## CONTENT

Возвращает:
* size_t