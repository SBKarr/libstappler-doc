Title: SPDataEncode.h


# STAPPLER_DATA_SPDATAENCODE_H_

## BRIEF

Заголовок, описывюащий функции кодирования данных

## CONTENT

Заголовок, описывюащий функции кодирования данных

# ::stappler::data::EncodeFormat

## BRIEF

Определение комплексного формата кодирования

## CONTENT

Определение комплексного формата кодирования

# ::stappler::data::EncodeFormat::EncodeStreamIndex

## BRIEF

Статический индекс, позволяющий определять индивидуальный текущий формат кодирования для std::ostream

## CONTENT

Статический индекс, позволяющий определять индивидуальный текущий формат кодирования для std::ostream (см std::ios_base::xalloc)

Тип: int


# ::stappler::data::EncodeFormat::Format

## BRIEF

Формат кодирования

## CONTENT

Формат кодирования

Значения:
* Json
* Pretty - JSON в человекочитаемом виде
* Cbor
* DefaultFormat - CBOR
* Serenity
* SerenityPretty - Serenity в человекочитаемом виде
* PrettyTime - JSON в человекочитаемом виде с комментариями для строк и чисел, содержащих время


# ::stappler::data::EncodeFormat::Compression

## BRIEF

Формат сжатия

## CONTENT

Формат сжатия

Значения:
* NoCompression - без сжатия
* LZ4Compression - LZ4
* LZ4HCCompression - LZ4 с высоким сжатием
* Brotli - Brotli
* DefaultCompress - без сжатия


# ::stappler::data::EncodeFormat::Encryption

## BRIEF

Формат шифрования (не реализован)

## CONTENT

Формат шифрования (не реализован)

Значения:
* Unencrypted
* Encrypted


# ::stappler::data::EncodeFormat::CborCompressed

## BRIEF

Статически определённый формат сжатого CBOR

## CONTENT

Статически определённый формат сжатого CBOR

Тип: stappler::data::EncodeFormat


# ::stappler::data::EncodeFormat::JsonCompressed

## BRIEF

Статически определённый формат сжатого JSON

## CONTENT

Статически определённый формат сжатого JSON

Тип: stappler::data::EncodeFormat


# ::stappler::data::EncodeFormat::EncodeFormat(stappler::data::EncodeFormat::Format,stappler::data::EncodeFormat::Compression,stappler::data::EncodeFormat::Encryption,stappler::StringView)

## BRIEF

Конструктор комплексного формата кодирования

## CONTENT

Параметры:
* stappler::data::EncodeFormat::Format - основной формат кодирования
* stappler::data::EncodeFormat::Compression - формат сжатия
* stappler::data::EncodeFormat::Encryption - формат шифрования (не используется)
* stappler::StringView - ключ шифрования


# ::stappler::data::EncodeFormat::EncodeFormat(stappler::data::EncodeFormat const&)

## BRIEF

Конструктор копирования по умолчанию

## CONTENT

Конструктор копирования по умолчанию

Параметры:
* stappler::data::EncodeFormat const&


# ::stappler::data::EncodeFormat::operator=(stappler::data::EncodeFormat const&)

## BRIEF

Оператор копирования по умолчанию

## CONTENT

Оператор копирования по умолчанию

Параметры:
* stappler::data::EncodeFormat const&

Возвращает:
* stappler::data::EncodeFormat&

# ::stappler::data::EncodeFormat::isRaw() const

## BRIEF

Проверяет, используется ли сжатие и шифрование в формате

## CONTENT

Возвращает:
* bool - true, если шифрование и сжатие не используются

# ::stappler::data::EncodeFormat::isTextual() const

## BRIEF

Проверяет, пригоден ли формат для вывода в строку

## CONTENT

Проверяет, пригоден ли формат для вывода в строку

Возвращает:
* bool - true если пригоден для вывода в строку

# ::stappler::data::EncodeFormat::flag() const

## BRIEF

Кодирует формат в число (флаг)

## CONTENT

Кодирует формат в число (флаг)

Возвращает:
* int

# ::stappler::data::EncodeFormat::format

## BRIEF

Основной формат

## CONTENT

Основной формат

Тип: stappler::data::EncodeFormat::Format


# ::stappler::data::EncodeFormat::compression

## BRIEF

Формат сжатия

## CONTENT

Формат сжатия

Тип: stappler::data::EncodeFormat::Compression


# ::stappler::data::EncodeFormat::encryption

## BRIEF

Формат шифрования

## CONTENT

Формат шифрования

Тип: stappler::data::EncodeFormat::Encryption


# ::stappler::data::getLZ4EncodeState()

## BRIEF

Возвращает разделяемое состояние процессора LZ4

## CONTENT

Возвращает разделяемое состояние процессора LZ4 (потокобезопасно)

Возвращает:
* uint8_t*

# ::stappler::data::compressData(uint8_t const*,size_t,uint8_t*,size_t,EncodeFormat::Compression)

## BRIEF

Сжимает данные с использвоанием формата сжатия

## CONTENT

Сжимает данные с использвоанием формата сжатия

Параметры:
* uint8_t const* - указатель на начало блока исходных данных
* size_t - длина исходного блока в байтах
* uint8_t* - указатель на начало блока для записи
* size_t - размер блока для записи в байтах
* EncodeFormat::Compression - формат сжатия

Возвращает:
* size_t - число записанных байт

# ::stappler::data::compress<typename>(uint8_t const*,size_t,EncodeFormat::Compression,bool)

## BRIEF

Сжимает данные в байтовый контейнер

## CONTENT

Сжимает данные в байтовый контейнер

Параметры шаблона:
* typename Interface - интерфейс памяти

Параметры:
* uint8_t const* - указатель на начало блока исходных данных
* size_t - длина исходного блока в байтах
* EncodeFormat::Compression - формат сжатия
* bool - true для использования условного сжатия, блок не будет сжат, если сжатый размер не меньше исходного.

Возвращает:
* typename Interface::BytesType - сжатый блок данных

# ::stappler::data::getCompressBounds(size_t,EncodeFormat::Compression)

## BRIEF

Возвращает максимально возможный размер для сжатого блока

## CONTENT

Возвращает максимально возможный размер для сжатого блока

Параметры:
* size_t - размер исходного блока
* EncodeFormat::Compression - формат сжатия

Возвращает:
* size_t - максимально возможный размер для сжатого блока

# ::stappler::data::EncodeTraits<typename>

## BRIEF

Вспомогательная структура для кодирования данных

## CONTENT

Вспомогательная структура для кодирования данных

Параметры шаблона:
* typename Interface - интерфейс памяти


# ::stappler::data::EncodeTraits<typename>::InterfaceType

## BRIEF

Тип интерфейса памяти

## CONTENT

Тип интерфейса памяти

# ::stappler::data::EncodeTraits<typename>::ValueType

## BRIEF

Тип выходного значения

## CONTENT

Тип выходного значения

# ::stappler::data::EncodeTraits<typename>::BytesType

## BRIEF

Тип байтового контейнера

## CONTENT

Тип байтового контейнера


# ::stappler::data::EncodeTraits<typename>::StringType

## BRIEF

Тип строкового контейнера

## CONTENT

Тип строкового контейнера


# ::stappler::data::EncodeTraits<typename>::write(stappler::data::EncodeTraits::ValueType const&,stappler::data::EncodeFormat,size_t)

## BRIEF

Записывает данные в байтовый контейнер с использованием формата

## CONTENT

Записывает данные в байтовый контейнер с использованием формата

Параметры:
* stappler::data::EncodeTraits::ValueType const& - данные для кодирования
* stappler::data::EncodeFormat - комплексный формат кодирования
* size_t - совет для предварительного резервирования памяти для кодирования, в байтах

Возвращает:
* BytesType - байтовый контейнер с кодированными данными

# ::stappler::data::EncodeTraits<typename>::write(Callback<void (stappler::StringView)> const&,stappler::data::EncodeTraits::ValueType const&,stappler::data::EncodeFormat)

## BRIEF

Записывает кодированные данные в поток

## CONTENT

Записывает кодированные данные в поток

Параметры:
* Callback<void (stappler::StringView)> const& - выходной поток
* stappler::data::EncodeTraits::ValueType const& - данные для кодирования
* stappler::data::EncodeFormat - комплексный формат кодирования

Возвращает:
* bool - true при успешной записи

# ::stappler::data::EncodeTraits<typename>::save(stappler::data::EncodeTraits::ValueType const&,stappler::StringView const&,stappler::data::EncodeFormat)

## BRIEF

Сохраняет кодированные данные в файл

## CONTENT

Сохраняет кодированные данные в файл

Параметры:
* stappler::data::EncodeTraits::ValueType const& - данные для кодирования
* stappler::StringView const& - путь к файлу
* stappler::data::EncodeFormat - комплексный формат кодирования

Возвращает:
* bool - true при успешной записи

# ::stappler::data::write<typename>(ValueTemplate<Interface> const&,stappler::data::EncodeFormat,size_t)

## BRIEF

Записывает данные в байтовый контейнер

## CONTENT

Записывает данные в байтовый контейнер

Параметры шаблона:
* typename Interface - интерфейс памяти

Параметры:
* ValueTemplate<Interface> const& - данные для кодирования
* stappler::data::EncodeFormat - комплексный формат кодирования
* size_t - совет для предварительного резервирования памяти для кодирования, в байтах

Возвращает:
* typename ValueTemplate<Interface>::BytesType - выходной байтовый контейнер

# ::stappler::data::write<typename>(Callback<void (stappler::StringView)> const&,ValueTemplate<Interface> const&,stappler::data::EncodeFormat)

## BRIEF

Записывает кодированные данные в поток

## CONTENT

Записывает кодированные данные в поток

Параметры шаблона:
* typename Interface - интерфейс памяти

Параметры:
* Callback<void (stappler::StringView)> const& - выходной поток
* ValueTemplate<Interface> const& - данные для кодирования
* stappler::data::EncodeFormat - комплексный формат кодирования

Возвращает:
* bool - true при успешной записи

# ::stappler::data::save<typename>(ValueTemplate<Interface> const&,stappler::StringView const&,stappler::data::EncodeFormat)

## BRIEF

Сохраняет кодированные данные в файл

## CONTENT

Сохраняет кодированные данные в файл

Параметры шаблона:
* typename Interface - интерфейс памяти

Параметры:
* ValueTemplate<Interface> const& - данные для кодирования
* stappler::StringView const& - путь к файлу
* stappler::data::EncodeFormat - комплексный формат кодирования

Возвращает:
* bool

# ::stappler::data::toString<typename>(ValueTemplate<Interface> const&,bool)

## BRIEF

Записывает данные в строку в формате JSON

## CONTENT

Записывает данные в строку в формате JSON

Параметры шаблона:
* typename Interface - интерфейс памяти

Параметры:
* ValueTemplate<Interface> const& - данные для кодирования
* bool - true - использовать человекочитаемый формат

Возвращает:
* typename ValueTemplate<Interface>::StringType - итоговая строка


# ::stappler::data::toString<typename>(ValueTemplate<Interface> const&,EncodeFormat::Format)

## BRIEF

Записывает данные в строку

## CONTENT

Записывает данные в строку

Параметры шаблона:
* typename Interface - интерфейс памяти

Параметры:
* ValueTemplate<Interface> const& - данные для кодирования
* EncodeFormat::Format - комплексный формат кодирования

Возвращает:
* typename ValueTemplate<Interface>::StringType - итоговая строка

# ::stappler::data::operator<<<typename,typename>(std::basic_ostream<CharT, Traits>&,stappler::data::EncodeFormat)

## BRIEF

Определяет индивидуальный формат кодирования для потока

## CONTENT

Определяет индивидуальный формат кодирования для потока

Параметры шаблона:
* typename CharT - символьный тип потока
* typename Traits - черты потока

Параметры:
* std::basic_ostream<CharT, Traits>& - выходной поток
* stappler::data::EncodeFormat - комплексный формат кодирования

Возвращает:
* std::basic_ostream<CharT, Traits>&

# ::stappler::data::operator<<<typename,typename>(std::basic_ostream<CharT, Traits>&,EncodeFormat::Format)

## BRIEF

Определяет индивидуальный формат кодирования для потока

## CONTENT

Определяет индивидуальный формат кодирования для потока

Параметры шаблона:
* typename CharT - символьный тип потока
* typename Traits - черты потока

Параметры:
* std::basic_ostream<CharT, Traits>& - выходной поток
* EncodeFormat::Format - формат кодирования

Возвращает:
* std::basic_ostream<CharT, Traits>&

# ::stappler::data::operator<<<typename,typename,typename>(std::basic_ostream<CharT, Traits>&,ValueTemplate<Interface> const&)

## BRIEF

Выводит значение в поток с использованием индивидуального формата потока

## CONTENT

Выводит значение в поток с использованием индивидуального формата потока

Параметры шаблона:
* typename CharT - символьный тип потока
* typename Traits - черты потока
* typename Interface - интерфейс памяти

Параметры:
* std::basic_ostream<CharT, Traits>& - поток вывода
* ValueTemplate<Interface> const& - данные для кодирования

Возвращает:
* std::basic_ostream<CharT, Traits>&

# ::stappler::data::EncodeFormat::EncodeFormat(int)

## BRIEF

Загружает формат кодирования из целочисленного флага

## CONTENT

Загружает формат кодирования из целочисленного флага

Параметры:
* int - флаг, в который упакованы формат и тип сжатия данных


# ::stappler::data::writeCompressionMark(uint8_t*,size_t,EncodeFormat::Compression,uint8_t)

## BRIEF

Записывает в блок данных метку о способе сжатия

## CONTENT

Записывает в блок данных метку о способе сжатия. Размер метки - 4 байта.

Параметры:
* uint8_t* - буфер для записи
* size_t - размер сжатых данных
* EncodeFormat::Compression - алгоритм сжатия
* uint8_t - смещение в байтах для выравнивания блока (0-3)