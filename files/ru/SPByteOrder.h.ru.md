Title: SPByteOrder.h


# STAPPLER_CORE_STRING_SPBYTEORDER_H_

## BRIEF

Заголовок для конвертации порядка байт в целых числах

## CONTENT

Заголовок для конвертации порядка байт в целых числах


# ::stappler::byteorder::bswap16(uint16_t)

## BRIEF

Обменивает местами байты в 16-битном числе

## CONTENT

Обменивает местами байты в 16-битном числе

Параметры:
* uint16_t

Возвращает:
* uint16_t

# ::stappler::byteorder::bswap32(uint32_t)

## BRIEF

Обменивает местами байты в 32-битном числе

## CONTENT

Обменивает местами байты в 32-битном числе

Параметры:
* uint32_t

Возвращает:
* uint32_t

# ::stappler::byteorder::bswap64(uint64_t)

## BRIEF

Обменивает местами байты в 64-битном числе

## CONTENT

Обменивает местами байты в 64-битном числе

Параметры:
* uint64_t

Возвращает:
* uint64_t

# ::stappler::Endian

## BRIEF

Перечисление порядка байт

## CONTENT

Перечисление порядка байт

Значения:
* Big - big-endian
* Little - little-endian
* Mixed - смешанный порядок
* Network - сетевой порядок (little-endian)
* Host - порядок текущей машины


# ::stappler::byteorder::ShouldSwap

## BRIEF

Шаблон проверки необходимости смены порядка байт

## CONTENT

Шаблон проверки необходимости смены порядка байт

Значения:
* NoSwap
* DoSwap
* CustomSwap


# ::stappler::byteorder::Bit8Size

## BRIEF

Размер 8-битного числа

## CONTENT

Размер 8-битного числа

Тип: size_t const


# ::stappler::byteorder::Bit16Size

## BRIEF

Размер 16-битного числа

## CONTENT

Размер 16-битного числа

Тип: size_t const


# ::stappler::byteorder::Bit32Size

## BRIEF

Размер 32-битного числа

## CONTENT

Размер 32-битного числа

Тип: size_t const


# ::stappler::byteorder::Bit64Size

## BRIEF

Размер 64-битного числа

## CONTENT

Размер 64-битного числа

Тип: size_t const


# ::stappler::byteorder::Converter<T,ShouldSwap::DoSwap,Bit8Size>::Converter<T,ShouldSwap::DoSwap,Bit8Size>

## BRIEF

Тип для конвертации порядка байт

## CONTENT

Тип для конвертации порядка байт

Параметры шаблона:
* class T


# ::stappler::byteorder::Converter<T,ShouldSwap::DoSwap,Bit8Size>::Swap(T)

## BRIEF

Изменяет порядок байт числа

## CONTENT

Изменяет порядок байт числа

Параметры:
* T

Возвращает:
* T

# ::stappler::byteorder::Converter<T,ShouldSwap::DoSwap,Bit16Size>::Converter<T,ShouldSwap::DoSwap,Bit16Size>

## BRIEF

Тип для конвертации порядка байт

## CONTENT

Тип для конвертации порядка байт

Параметры шаблона:
* class T


# ::stappler::byteorder::Converter<T,ShouldSwap::DoSwap,Bit16Size>::Swap(T)

## BRIEF

Изменяет порядок байт числа

## CONTENT

Изменяет порядок байт числа

Параметры:
* T

Возвращает:
* T

# ::stappler::byteorder::Converter<T,ShouldSwap::DoSwap,Bit32Size>::Converter<T,ShouldSwap::DoSwap,Bit32Size>

## BRIEF

Тип для конвертации порядка байт

## CONTENT

Тип для конвертации порядка байт

Параметры шаблона:
* class T


# ::stappler::byteorder::Converter<T,ShouldSwap::DoSwap,Bit32Size>::Swap(T)

## BRIEF

Изменяет порядок байт числа

## CONTENT

Изменяет порядок байт числа

Параметры:
* T

Возвращает:
* T

# ::stappler::byteorder::Converter<T,ShouldSwap::DoSwap,Bit64Size>::Converter<T,ShouldSwap::DoSwap,Bit64Size>

## BRIEF

Тип для конвертации порядка байт

## CONTENT

Тип для конвертации порядка байт

Параметры шаблона:
* class T


# ::stappler::byteorder::Converter<T,ShouldSwap::DoSwap,Bit64Size>::Swap(T)

## BRIEF

Изменяет порядок байт числа

## CONTENT

Изменяет порядок байт числа

Параметры:
* T

Возвращает:
* T

# ::stappler::byteorder::Converter<T,ShouldSwap::DoSwap,Size>::Converter<T,ShouldSwap::DoSwap,Size>

## BRIEF

Тип для конвертации порядка байт

## CONTENT

Тип для конвертации порядка байт

Параметры шаблона:
* class T
* size_t Size


# ::stappler::byteorder::Converter<T,ShouldSwap::DoSwap,Size>::Swap(T)

## BRIEF

Изменяет порядок байт числа

## CONTENT

Изменяет порядок байт числа

Параметры:
* T

Возвращает:
* T

# ::stappler::byteorder::Converter<T,ShouldSwap::NoSwap,Size>::Converter<T,ShouldSwap::NoSwap,Size>

## BRIEF

Тип для конвертации порядка байт

## CONTENT

Тип для конвертации порядка байт

Параметры шаблона:
* class T
* size_t Size


# ::stappler::byteorder::Converter<T,ShouldSwap::NoSwap,Size>::Swap(T)

## BRIEF

Изменяет порядок байт числа

## CONTENT

Изменяет порядок байт числа

Параметры:
* T

Возвращает:
* T

# ::stappler::byteorder::hostToNetwork()

## BRIEF

Проверяет, необходима ли смена порядка байт из текущего в сетевой

## CONTENT

Проверяет, необходима ли смена порядка байт из текущего в сетевой

Возвращает:
* stappler::byteorder::ShouldSwap

# ::stappler::byteorder::hostToLittle()

## BRIEF

Проверяет, необходима ли смена порядка байт из текущего в little

## CONTENT

Проверяет, необходима ли смена порядка байт из текущего в little

Возвращает:
* stappler::byteorder::ShouldSwap

# ::stappler::byteorder::hostToBig()

## BRIEF

Проверяет, необходима ли смена порядка байт из текущего в big

## CONTENT

Проверяет, необходима ли смена порядка байт из текущего в big

Возвращает:
* stappler::byteorder::ShouldSwap

# ::stappler::byteorder::isLittleEndian()

## BRIEF

Проверяет, используется ли порядок байт little

## CONTENT

Проверяет, используется ли порядок байт little

Возвращает:
* bool

# ::stappler::byteorder::NetworkConverter<class>

## BRIEF

Тип для конвертации в сетевой формат

## CONTENT

Тип для конвертации в сетевой формат

Параметры шаблона:
* class T


# ::stappler::byteorder::LittleConverter<class>

## BRIEF

Тип для конвертации в формат little

## CONTENT

Тип для конвертации в формат little

Параметры шаблона:
* class T


# ::stappler::byteorder::BigConverter<class>

## BRIEF

Тип для конвертации в формат big

## CONTENT

Тип для конвертации в формат big

Параметры шаблона:
* class T


# ::stappler::byteorder::HostConverter<class>

## BRIEF

Тип для конвертации в формат текущей машины

## CONTENT

Тип для конвертации в формат текущей машины

Параметры шаблона:
* class T


# ::stappler::byteorder::HostToNetwork<class>(T)

## BRIEF

Конвертирует из текущего в сетевой формат

## CONTENT

Конвертирует из текущего в сетевой формат

Параметры шаблона:
* class T

Параметры:
* T

Возвращает:
* T

# ::stappler::byteorder::NetworkToHost<class>(T)

## BRIEF

Конвертирует из сетевого в текущий формат

## CONTENT

Конвертирует из сетевого в текущий формат

Параметры шаблона:
* class T

Параметры:
* T

Возвращает:
* T

# ::stappler::byteorder::HostToLittle<class>(T)

## BRIEF

Конвертирует из текущего формата

## CONTENT

Конвертирует из текущего формата

Параметры шаблона:
* class T

Параметры:
* T

Возвращает:
* T

# ::stappler::byteorder::LittleToHost<class>(T)

## BRIEF

Конвертирует в текущий формат

## CONTENT

Конвертирует в текущий формат

Параметры шаблона:
* class T

Параметры:
* T

Возвращает:
* T

# ::stappler::byteorder::HostToBig<class>(T)

## BRIEF

Конвертирует из текущего формата

## CONTENT

Конвертирует из текущего формата

Параметры шаблона:
* class T

Параметры:
* T

Возвращает:
* T

# ::stappler::byteorder::BigToHost<class>(T)

## BRIEF

Конвертирует в текущий формат

## CONTENT

Конвертирует в текущий формат

Параметры шаблона:
* class T

Параметры:
* T

Возвращает:
* T

# ::stappler::byteorder::ConverterTraits<Endian::Big,T>::ConverterTraits<Endian::Big,T>

## BRIEF

Параметры конвертации в формат big

## CONTENT

Параметры конвертации в формат big

Параметры шаблона:
* typename T

Базовые классы:
* BigConverter<T>


# ::stappler::byteorder::ConverterTraits<Endian::Little,T>::ConverterTraits<Endian::Little,T>

## BRIEF

Параметры конвертации в формат little

## CONTENT

Параметры конвертации в формат little

Параметры шаблона:
* typename T

Базовые классы:
* LittleConverter<T>
