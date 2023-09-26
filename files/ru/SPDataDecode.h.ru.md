Title: SPDataDecode.h


# STAPPLER_DATA_SPDATADECODE_H_

## BRIEF

Общий заголовок для декодирования данных

## CONTENT

Общий заголовок для декодирования данных. Определяет форматы и способы декодирования

# ::stappler::data::DataFormat

## BRIEF

Определяемые форматы для декодирования блока данных

## CONTENT

Определяемые форматы для декодирования блока данных

Значения:
* Unknown - неизвестный тип
* Json - JSON
* Cbor - CBOR
* Serenity - внутренний формат SDK Serenity
* CborBase64 - CBOR, кодированный в base64
* LZ4_Short - сжатый формат на основе LZ4 для коротких сообщений
* LZ4_Word - сжатый формат на основе LZ4
* Brotli_Short - сжатый формат на основе Brotli для коротких сообщений
* Brotli_Word - сжатый формат на основе Brotli


# ::stappler::data::detectDataFormat(uint8_t const*,size_t,uint8_t&)

## BRIEF

Определяет формат данных для декодирования

## CONTENT

Параметры:
* uint8_t const* - указатель на начало блока данных
* size_t - размер блока данных
* uint8_t& - (вывод) значение выравнивания размера блока

Возвращает:
* stappler::data::DataFormat

# ::stappler::data::decompress(uint8_t const*,size_t,uint8_t*,size_t)

## BRIEF

Распаковывает сжатый блок данных

## CONTENT

Распаковывает сжатый блок данных. Определяет формат сжатия автоматически. Если целевой буфер не вмещает достаточно данных - поведение не определено, используйте getDecompressedSize.

Параметры:
* uint8_t const* - указатель на начало исходного блока
* size_t - размер исходного блока
* uint8_t* - указатель на начало памяти для декодирования
* size_t - размер буфера для декодирования

Возвращает:
* size_t - число байт, записанных в буфер декодирования

# ::stappler::data::getDecompressedSize(uint8_t const*,size_t)

## BRIEF

Возвращает потенциальный размер для декодирования сжатых данных

## CONTENT

Возвращает потенциальный размер для декодирования сжатых данных

Параметры:
* uint8_t const* - указатель на начало исходного блока
* size_t - размер исходного блока

Возвращает:
* size_t - максимальный потенциальный размер декодирования

# ::stappler::data::decompressLZ4<typename>(uint8_t const*,size_t,bool)

## BRIEF

Декодирует данные, сжатые с помощью LZ4 

## CONTENT

Декодирует данные, сжатые с помощью LZ4

Параметры шаблона:
* typename Interface - интерфейс памяти

Параметры:
* uint8_t const* - указатель на начало исходного блока
* size_t - размер исходного блока
* bool - true, если предполагается короткий блок.

Возвращает:
* ValueTemplate<Interface>

# ::stappler::data::decompressBrotli<typename>(uint8_t const*,size_t,bool)

## BRIEF

Декодирует данные, сжатые с помощью Brotli 

## CONTENT

Декодирует данные, сжатые с помощью Brotli

Параметры шаблона:
* typename Interface - интерфейс памяти

Параметры:
* uint8_t const* - указатель на начало исходного блока
* size_t - размер исходного блока
* bool - true, если предполагается короткий блок.

Возвращает:
* ValueTemplate<Interface>

# ::stappler::data::decompress<typename>(uint8_t const*,size_t)

## BRIEF

Декодирует сжатые данные

## CONTENT

Декодирует сжатые данные, возвращает байтовый контейнер соотвествующего интерфейса памяти

Параметры шаблона:
* typename Interface - интерфейс памяти

Параметры:
* uint8_t const* - указатель на начало исходного блока
* size_t - размер исходного блока

Возвращает:
* typename Interface::BytesType

# ::stappler::data::read<typename,typename>(StringType const&,stappler::StringView const&)

## BRIEF

Декодирует блок данных

## CONTENT

Декодирует блок данных

Параметры шаблона:
* typename Interface - интерфейс памяти
* typename StringType - тип, хранящий данные (могут быть и типы отображения, и контейнеры обоих интерфейсов памяти, и строковые, и байтовые)

Параметры:
* StringType const& - контейнер данных
* stappler::StringView const& - ключ для декодирования (не используется)

Возвращает:
* ValueTemplate<Interface>

# ::stappler::data::readFile<typename>(stappler::StringView,stappler::StringView const&)

## BRIEF

Читает данные из файла

## CONTENT

Читает данные из файла

Параметры шаблона:
* typename Interface - интерфейс памяти

Параметры:
* stappler::StringView - пут к файлу
* stappler::StringView const& - ключ для декодирования (не используется)

Возвращает:
* ValueTemplate<Interface>