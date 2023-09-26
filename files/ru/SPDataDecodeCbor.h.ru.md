Title: SPDataDecodeCbor.h


# STAPPLER_DATA_SPDATADECODECBOR_H_

## BRIEF

Заголовок для декодирования данных CBOR

## CONTENT

Заголовок для декодирования данных CBOR

# ::stappler::data::cbor::Decoder<typename>

## BRIEF

Тип декодировщика для CBOR

## CONTENT

Тип декодировщика для CBOR

Параметры шаблона:
* typename Interface - интерфейс памяти

Базовые классы:
* Interface::AllocBaseType


# ::stappler::data::cbor::Decoder<typename>::InterfaceType

## BRIEF

Тип интерфейса памяти

## CONTENT

Тип интерфейса памяти


# ::stappler::data::cbor::Decoder<typename>::ValueType

## BRIEF

Тип значения для хранения данных

## CONTENT

Тип значения для хранения данных

# ::stappler::data::cbor::Decoder<typename>::StringType

## BRIEF

Строковый контейнер

## CONTENT

Строковый контейнер

# ::stappler::data::cbor::Decoder<typename>::BytesType

## BRIEF

Байтовый контейнер

## CONTENT

Байтовый контейнер


# ::stappler::data::cbor::Decoder<typename>::ArrayType

## BRIEF

Тип массива данных

## CONTENT

Тип массива данных

# ::stappler::data::cbor::Decoder<typename>::DictionaryType

## BRIEF

Тип ассоциативного хранилища данных

## CONTENT

Тип ассоциативного хранилища данных

# ::stappler::data::cbor::Decoder<typename>::Decoder(BytesViewTemplate<Endian::Network>&)

## BRIEF

Инициализирует декодировщик данными для декодирования

## CONTENT

Инициализирует декодировщик данными для декодирования

Параметры:
* BytesViewTemplate<Endian::Network>& - байты для декодирования


# ::stappler::data::cbor::Decoder<typename>::decodePositiveInt(uint8_t,stappler::data::cbor::Decoder::ValueType&)

## BRIEF

Декодирует натуральное число

## CONTENT

Декодирует натуральное число

Параметры:
* uint8_t - кодированный тип
* stappler::data::cbor::Decoder::ValueType& - выходное значение


# ::stappler::data::cbor::Decoder<typename>::decodeNegativeInt(uint8_t,stappler::data::cbor::Decoder::ValueType&)

## BRIEF

Декодирует отрицательное число

## CONTENT

Декодирует отрицательное число

Параметры:
* uint8_t - кодированный тип
* stappler::data::cbor::Decoder::ValueType& - выходное значение


# ::stappler::data::cbor::Decoder<typename>::decodeByteString(uint8_t,stappler::data::cbor::Decoder::ValueType&)

## BRIEF

Декодирует байтовую строку

## CONTENT

Декодирует байтовую строку

Параметры:
* uint8_t - кодированный тип
* stappler::data::cbor::Decoder::ValueType& - выходное значение


# ::stappler::data::cbor::Decoder<typename>::decodeCharString(uint8_t,stappler::data::cbor::Decoder::ValueType&)

## BRIEF

Декодирует символьную строку

## CONTENT

Декодирует символьную строку

Параметры:
* uint8_t - кодированный тип
* stappler::data::cbor::Decoder::ValueType& - выходное значение


# ::stappler::data::cbor::Decoder<typename>::decodeArray(uint8_t,stappler::data::cbor::Decoder::ValueType&)

## BRIEF

Декодирует массив

## CONTENT

Декодирует массив

Параметры:
* uint8_t - кодированный тип
* stappler::data::cbor::Decoder::ValueType& - выходное значение


# ::stappler::data::cbor::Decoder<typename>::decodeMap(uint8_t,stappler::data::cbor::Decoder::ValueType&)

## BRIEF

Декодирует ассоциативный массив

## CONTENT

Декодирует ассоциативный массив

Параметры:
* uint8_t - кодированный тип
* stappler::data::cbor::Decoder::ValueType& - выходное значение


# ::stappler::data::cbor::Decoder<typename>::decodeTaggedValue(uint8_t,stappler::data::cbor::Decoder::ValueType&)

## BRIEF

Декодирует тегированное значение

## CONTENT

Декодирует тегированное значение

Параметры:
* uint8_t - кодированный тип
* stappler::data::cbor::Decoder::ValueType& - выходное значение


# ::stappler::data::cbor::Decoder<typename>::decodeSimpleValue(uint8_t,stappler::data::cbor::Decoder::ValueType&)

## BRIEF

Декодирует простейшее значение

## CONTENT

Декодирует простейшее значение

Параметры:
* uint8_t - кодированный тип
* stappler::data::cbor::Decoder::ValueType& - выходное значение


# ::stappler::data::cbor::Decoder<typename>::decode(stappler::data::cbor::MajorTypeEncoded,uint8_t,stappler::data::cbor::Decoder::ValueType&)

## BRIEF

Декодирует новое встреченное значение

## CONTENT

Декодирует новое встреченное значение

Параметры:
* stappler::data::cbor::MajorTypeEncoded - определённый кодированный тип
* uint8_t - кодированное флаговое значение
* stappler::data::cbor::Decoder::ValueType& - выходное значение


# ::stappler::data::cbor::Decoder<typename>::decode(stappler::data::cbor::Decoder::ValueType&)

## BRIEF

Декодирует следующее значение

## CONTENT

Декодирует следующее значение

Параметры:
* stappler::data::cbor::Decoder::ValueType& - выходное значение


# ::stappler::data::cbor::Decoder<typename>::decodeUndefinedLength<typename>(Container&,stappler::data::cbor::MajorTypeEncoded)

## BRIEF

Декодирует контейнер неопределённой длины

## CONTENT

Декодирует контейнер неопределённой длины

Параметры шаблона:
* typename Container - тип контейнера (строки или массивы)

Параметры:
* Container& - контейнер для записи
* stappler::data::cbor::MajorTypeEncoded - кодирвоанный тип контейнера


# ::stappler::data::cbor::Decoder<typename>::r

## BRIEF

Текущее состояние отображения для разбора

## CONTENT

Текущее состояние отображения для разбора

Тип: BytesViewTemplate<Endian::Network>


# ::stappler::data::cbor::Decoder<typename>::buf

## BRIEF

Временный строковый буфер

## CONTENT

Временный строковый буфер

Тип: StringType


# ::stappler::data::cbor::Decoder<typename>::back

## BRIEF

Значение, в которое нужно читать следующее значение из блока данных

## CONTENT

Значение, в которое нужно читать следующее значение из блока данных

Тип: ValueType*


# ::stappler::data::cbor::Decoder<typename>::stack

## BRIEF

Стек для декодируемых значений

## CONTENT

Стек для декодируемых значений

Тип: typename InterfaceType::template ArrayType<stappler::data::cbor::Decoder::ValueType *>


# ::stappler::data::cbor::read<typename>(BytesViewTemplate<Endian::Network>&)

## BRIEF

Декодирует блок данных

## CONTENT

Декодирует блок данных

Параметры шаблона:
* typename Interface - интерфейс памяти

Параметры:
* BytesViewTemplate<Endian::Network>& - кодирвоанные данные

Возвращает:
* ValueTemplate<Interface>

# ::stappler::data::cbor::read<typename>(BytesViewTemplate<Endian::Little>&)

## BRIEF

Декодирует блок данных

## CONTENT

Декодирует блок данных. Инициализирует декодер для декодирования в порядке байт от малого к большому.

Параметры шаблона:
* typename Interface - интерфейс памяти

Параметры:
* BytesViewTemplate<Endian::Little>& - кодирвоанные данные

Возвращает:
* ValueTemplate<Interface>

# ::stappler::data::cbor::read<typename,typename>(Container const&)

## BRIEF

Декодирует блок данных

## CONTENT

Параметры шаблона:
* typename Interface - интерфейс памяти
* typename Container - контейнер с данными

Параметры:
* Container const& - контейнер с данными

Возвращает:
* ValueTemplate<Interface>