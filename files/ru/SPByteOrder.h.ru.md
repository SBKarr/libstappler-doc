Title: SPByteOrder.h


# LIBSTAPPLER_COMMON_STRING_SPBYTEORDER_H_

## BRIEF

## CONTENT


# SPINLINE

## BRIEF

## CONTENT


# ::stappler::byteorder::bswap16(uint16_t)

## BRIEF

## CONTENT

Параметры:
* uint16_t

Возвращает:
* uint16_t

# ::stappler::byteorder::bswap32(uint32_t)

## BRIEF

## CONTENT

Параметры:
* uint32_t

Возвращает:
* uint32_t

# ::stappler::byteorder::bswap64(uint64_t)

## BRIEF

## CONTENT

Параметры:
* uint64_t

Возвращает:
* uint64_t

# ::stappler::Endian

## BRIEF

## CONTENT

Значения:
* Big
* Little
* Mixed
* Network
* Host


# ::stappler::byteorder::ShouldSwap

## BRIEF

## CONTENT

Значения:
* NoSwap
* DoSwap
* CustomSwap


# ::stappler::byteorder::Bit8Size

## BRIEF

## CONTENT

Тип: size_t const


# ::stappler::byteorder::Bit16Size

## BRIEF

## CONTENT

Тип: size_t const


# ::stappler::byteorder::Bit32Size

## BRIEF

## CONTENT

Тип: size_t const


# ::stappler::byteorder::Bit64Size

## BRIEF

## CONTENT

Тип: size_t const


# ::stappler::byteorder::Converter<T,ShouldSwap::DoSwap,Bit8Size>::Converter<T,ShouldSwap::DoSwap,Bit8Size>

## BRIEF

## CONTENT

Параметры шаблона:
* class T


# ::stappler::byteorder::Converter<T,ShouldSwap::DoSwap,Bit8Size>::Swap(T)

## BRIEF

## CONTENT

Параметры:
* T

Возвращает:
* T

# ::stappler::byteorder::Converter<T,ShouldSwap::DoSwap,Bit16Size>::Converter<T,ShouldSwap::DoSwap,Bit16Size>

## BRIEF

## CONTENT

Параметры шаблона:
* class T


# ::stappler::byteorder::Converter<T,ShouldSwap::DoSwap,Bit16Size>::Swap(T)

## BRIEF

## CONTENT

Параметры:
* T

Возвращает:
* T

# ::stappler::byteorder::Converter<T,ShouldSwap::DoSwap,Bit32Size>::Converter<T,ShouldSwap::DoSwap,Bit32Size>

## BRIEF

## CONTENT

Параметры шаблона:
* class T


# ::stappler::byteorder::Converter<T,ShouldSwap::DoSwap,Bit32Size>::Swap(T)

## BRIEF

## CONTENT

Параметры:
* T

Возвращает:
* T

# ::stappler::byteorder::Converter<T,ShouldSwap::DoSwap,Bit64Size>::Converter<T,ShouldSwap::DoSwap,Bit64Size>

## BRIEF

## CONTENT

Параметры шаблона:
* class T


# ::stappler::byteorder::Converter<T,ShouldSwap::DoSwap,Bit64Size>::Swap(T)

## BRIEF

## CONTENT

Параметры:
* T

Возвращает:
* T

# ::stappler::byteorder::Converter<T,ShouldSwap::DoSwap,Size>::Converter<T,ShouldSwap::DoSwap,Size>

## BRIEF

## CONTENT

Параметры шаблона:
* class T
* size_t Size


# ::stappler::byteorder::Converter<T,ShouldSwap::DoSwap,Size>::Swap(T)

## BRIEF

## CONTENT

Параметры:
* T

Возвращает:
* T

# ::stappler::byteorder::Converter<T,ShouldSwap::NoSwap,Size>::Converter<T,ShouldSwap::NoSwap,Size>

## BRIEF

## CONTENT

Параметры шаблона:
* class T
* size_t Size


# ::stappler::byteorder::Converter<T,ShouldSwap::NoSwap,Size>::Swap(T)

## BRIEF

## CONTENT

Параметры:
* T

Возвращает:
* T

# ::stappler::byteorder::hostToNetwork()

## BRIEF

## CONTENT

Возвращает:
* stappler::byteorder::ShouldSwap

# ::stappler::byteorder::hostToLittle()

## BRIEF

## CONTENT

Возвращает:
* stappler::byteorder::ShouldSwap

# ::stappler::byteorder::hostToBig()

## BRIEF

## CONTENT

Возвращает:
* stappler::byteorder::ShouldSwap

# ::stappler::byteorder::isLittleEndian()

## BRIEF

## CONTENT

Возвращает:
* bool

# ::stappler::byteorder::NetworkConverter<class>

## BRIEF

## CONTENT

Параметры шаблона:
* class T


# ::stappler::byteorder::LittleConverter<class>

## BRIEF

## CONTENT

Параметры шаблона:
* class T


# ::stappler::byteorder::BigConverter<class>

## BRIEF

## CONTENT

Параметры шаблона:
* class T


# ::stappler::byteorder::HostConverter<class>

## BRIEF

## CONTENT

Параметры шаблона:
* class T


# ::stappler::byteorder::HostToNetwork<class>(T)

## BRIEF

## CONTENT

Параметры шаблона:
* class T

Параметры:
* T

Возвращает:
* T

# ::stappler::byteorder::NetworkToHost<class>(T)

## BRIEF

## CONTENT

Параметры шаблона:
* class T

Параметры:
* T

Возвращает:
* T

# ::stappler::byteorder::HostToLittle<class>(T)

## BRIEF

## CONTENT

Параметры шаблона:
* class T

Параметры:
* T

Возвращает:
* T

# ::stappler::byteorder::LittleToHost<class>(T)

## BRIEF

## CONTENT

Параметры шаблона:
* class T

Параметры:
* T

Возвращает:
* T

# ::stappler::byteorder::HostToBig<class>(T)

## BRIEF

## CONTENT

Параметры шаблона:
* class T

Параметры:
* T

Возвращает:
* T

# ::stappler::byteorder::BigToHost<class>(T)

## BRIEF

## CONTENT

Параметры шаблона:
* class T

Параметры:
* T

Возвращает:
* T

# ::stappler::byteorder::ConverterTraits<Endian::Big,T>::ConverterTraits<Endian::Big,T>

## BRIEF

## CONTENT

Параметры шаблона:
* typename T

Базовые классы:
* BigConverter<T>


# ::stappler::byteorder::ConverterTraits<Endian::Little,T>::ConverterTraits<Endian::Little,T>

## BRIEF

## CONTENT

Параметры шаблона:
* typename T

Базовые классы:
* LittleConverter<T>
