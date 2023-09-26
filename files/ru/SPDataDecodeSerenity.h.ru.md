Title: SPDataDecodeSerenity.h


# STAPPLER_DATA_SPDATADECODESERENITY_H_

## BRIEF

Заголовок декодирования формата SDK Serenity

## CONTENT

Заголовок декодирования формата SDK Serenity

# ::stappler::data::serenity::Decoder<typename>

## BRIEF

Декодировщик формата Serenity

## CONTENT

Декодировщик формата Serenity

Параметры шаблона:
* typename Interface - интерфейс памяти

Базовые классы:
* Interface::AllocBaseType


# ::stappler::data::serenity::Decoder<typename>::InterfaceType

## BRIEF

Тип интерфейса памяти

## CONTENT

Тип интерфейса памяти

# ::stappler::data::serenity::Decoder<typename>::ValueType

## BRIEF

Тип выходного значения

## CONTENT

Тип выходного значения

# ::stappler::data::serenity::Decoder<typename>::StringType

## BRIEF

Тип строкового контейнера

## CONTENT

Тип строкового контейнера

# ::stappler::data::serenity::Decoder<typename>::BytesType

## BRIEF

Тип байтового контейнера

## CONTENT

Тип байтового контейнера

# ::stappler::data::serenity::Decoder<typename>::BackType

## BRIEF

Тип значения на вершине стека

## CONTENT

Тип значения на вершине стека

Значения:
* BackIsPlain
* BackIsPlainList
* BackIsPlainStop
* BackIsArray
* BackIsDict
* BackIsGeneric


# ::stappler::data::serenity::Decoder<typename>::Decoder(stappler::StringView&)

## BRIEF

Инициализирует декодировщик со строкой для разбора

## CONTENT

Инициализирует декодировщик со строкой для разбора

Параметры:
* stappler::StringView& - строка для разбора


# ::stappler::data::serenity::Decoder<typename>::parseBufferString(stappler::data::serenity::Decoder::StringType&)

## BRIEF

Разбирает строку, предварительно прочитанную в буфер

## CONTENT

Разбирает строку, предварительно прочитанную в буфер

Параметры:
* stappler::data::serenity::Decoder::StringType& - строка в буфере


# ::stappler::data::serenity::Decoder<typename>::parseNumber(stappler::StringView&,stappler::data::serenity::Decoder::ValueType&)

## BRIEF

Разбирает численное значение

## CONTENT

Разбирает численное значение

Параметры:
* stappler::StringView& - текущий токен, содержащий значение
* stappler::data::serenity::Decoder::ValueType& - выходное значение


# ::stappler::data::serenity::Decoder<typename>::parsePlainToken(stappler::data::serenity::Decoder::ValueType&,stappler::StringView)

## BRIEF

Разбирает токен неизвестного типа

## CONTENT

Разбирает токен неизвестного типа

Параметры:
* stappler::data::serenity::Decoder::ValueType& - выходное значение
* stappler::StringView - разбираемый токен


# ::stappler::data::serenity::Decoder<typename>::transformToDict(stappler::data::serenity::Decoder::ValueType&)

## BRIEF

Трансформирует значение на вершине стека в словарь

## CONTENT

Трансформирует значение на вершине стека в словарь

Параметры:
* stappler::data::serenity::Decoder::ValueType& - выходное значение


# ::stappler::data::serenity::Decoder<typename>::parse(stappler::data::serenity::Decoder::ValueType&)

## BRIEF

Начинает процесс разбора

## CONTENT

Начинает процесс разбора

Параметры:
* stappler::data::serenity::Decoder::ValueType& - выходное значение


# ::stappler::data::serenity::Decoder<typename>::push(stappler::data::serenity::Decoder::BackType,stappler::data::serenity::Decoder::ValueType*)

## BRIEF

Добавляет значение на стек разбора

## CONTENT

Добавляет значение на стек разбора

Параметры:
* stappler::data::serenity::Decoder::BackType - тип значения
* stappler::data::serenity::Decoder::ValueType* - указатель на значение


# ::stappler::data::serenity::Decoder<typename>::pop()

## BRIEF

Убирает значение со стека разбора

## CONTENT


# ::stappler::data::serenity::Decoder<typename>::stop

## BRIEF

Флаг принудительной остановки разбора

## CONTENT

Флаг принудительной остановки разбора. true если разбор был остановлен

Тип: bool


# ::stappler::data::serenity::Decoder<typename>::backType

## BRIEF

Тип значения на вершине стека

## CONTENT

Тип значения на вершине стека

Тип: stappler::data::serenity::Decoder::BackType


# ::stappler::data::serenity::Decoder<typename>::r

## BRIEF

Текущая строка для разбора

## CONTENT

Текущая строка для разбора

Тип: stappler::StringView


# ::stappler::data::serenity::Decoder<typename>::back

## BRIEF

Значение на вершине стека

## CONTENT

Значение на вершине стека

Тип: ValueType*


# ::stappler::data::serenity::Decoder<typename>::stack

## BRIEF

Стек контейнеров для разбора

## CONTENT

Стек контейнеров для разбора

Тип: typename InterfaceType::template ArrayType<Pair<stappler::data::serenity::Decoder::BackType, stappler::data::serenity::Decoder::ValueType *>>


# ::stappler::data::serenity::TokenSpecials

## BRIEF

Набор символов, испольуемых в качестве специальных

## CONTENT

Набор символов, испольуемых в качестве специальных


# ::stappler::data::serenity::read<typename>(stappler::StringView&)

## BRIEF

Читает значение из кодированной строки

## CONTENT

Читает значение из кодированной строки

Параметры шаблона:
* typename Interface - интерфейс памяти

Параметры:
* stappler::StringView& - значение для разбора. Смещает переданную строку, пропуская успешно разобранные данные.

Возвращает:
* ValueTemplate<Interface>

# ::stappler::data::serenity::read<typename>(stappler::StringView const&)

## BRIEF

Читает значение из кодированной строки

## CONTENT

Читает значение из кодированной строки

Параметры шаблона:
* typename Interface - интерфейс памяти

Параметры:
* stappler::StringView const& - значение для разбора

Возвращает:
* ValueTemplate<Interface>