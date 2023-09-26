Title: SPDataDecodeJson.h

# STAPPLER_DATA_SPDATADECODEJSON_H_

## BRIEF

Заголовок для декодирования JSON

## CONTENT

Заголовок для декодирования JSON

# ::stappler::data::json::decodeNumber(stappler::StringView&,bool&)

## BRIEF

Декодирует число из строки

## CONTENT

Декодирует число из строки

Параметры:
* stappler::StringView& - исходная строка
* bool& - (вывод) - прочитано ли число с плавающей точкой

Возвращает:
* stappler::StringView - пригодное для чтения числа отображение

# ::stappler::data::json::Decoder<typename>

## BRIEF

Класс декодировщика JSON

## CONTENT

Класс декодировщика JSON

Параметры шаблона:
* typename Interface - интерфейс памяти

Базовые классы:
* Interface::AllocBaseType


# ::stappler::data::json::Decoder<typename>::InterfaceType

## BRIEF

Тип интерфейса памяти

## CONTENT

Тип интерфейса памяти

# ::stappler::data::json::Decoder<typename>::ValueType

## BRIEF

Тип значения для вывода

## CONTENT

Тип значения для вывода

# ::stappler::data::json::Decoder<typename>::StringType

## BRIEF

Тип строкового контейнера

## CONTENT

Тип строкового контейнера


# ::stappler::data::json::Decoder<typename>::BackType

## BRIEF

Тип значения на вершине стека декодирования

## CONTENT

Тип значения на вершине стека декодирования

Значения:
* BackIsArray - массив
* BackIsDict - словарь
* BackIsEmpty - ничего


# ::stappler::data::json::Decoder<typename>::Decoder(stappler::StringView&,bool)

## BRIEF

Инициализирует декодировщик со строкой для декодирования

## CONTENT

Инициализирует декодировщик со строкой для декодирования

Параметры:
* stappler::StringView& - строка для декодирования, декодировщик смещает её по мере чтения
* bool - true если требуется проверять валидность кодирования. Без этой проверки декодировщик может декодировать значения, где пропущены некоторые ззнаки препинания в контейнерах.


# ::stappler::data::json::Decoder<typename>::parseBufferString(stappler::data::json::Decoder::StringType&)

## BRIEF

Разбирает строку, ранее записанную в буфер

## CONTENT

Разбирает строку, ранее записанную в буфер

Параметры:
* stappler::data::json::Decoder::StringType& - строковый буфер


# ::stappler::data::json::Decoder<typename>::parseJsonNumber(stappler::data::json::Decoder::ValueType&)

## BRIEF

Разбирает численное значение

## CONTENT

Разбирает численное значение

Параметры:
* stappler::data::json::Decoder::ValueType& - значение для записи результата


# ::stappler::data::json::Decoder<typename>::parseValue(stappler::data::json::Decoder::ValueType&)

## BRIEF

Разбирает следующее значение

## CONTENT

Разбирает следующее значение

Параметры:
* stappler::data::json::Decoder::ValueType& - значение для записи результата


# ::stappler::data::json::Decoder<typename>::parseJson(stappler::data::json::Decoder::ValueType&)

## BRIEF

Запускает разбор JSON

## CONTENT

Запускает разбор JSON

Параметры:
* stappler::data::json::Decoder::ValueType& - значение для записи результата


# ::stappler::data::json::Decoder<typename>::push(stappler::data::json::Decoder::BackType,stappler::data::json::Decoder::ValueType*)

## BRIEF

Добавляет значение на стек декодирования

## CONTENT

Добавляет значение на стек декодирования

Параметры:
* stappler::data::json::Decoder::BackType - тип значения
* stappler::data::json::Decoder::ValueType* - объект значения


# ::stappler::data::json::Decoder<typename>::pop()

## BRIEF

Уберает значение со стека декодирования

## CONTENT

Уберает значение со стека декодирования

# ::stappler::data::json::Decoder<typename>::validate

## BRIEF

Флаг необходимости валидировать формат

## CONTENT

Флаг необходимости валидировать формат

Тип: bool


# ::stappler::data::json::Decoder<typename>::stop

## BRIEF

Флаг принудительно остановленного разбора

## CONTENT

Флаг принудительно остановленного разбора

Тип: bool


# ::stappler::data::json::Decoder<typename>::backType

## BRIEF

Тип значения на вершине стека

## CONTENT

Тип значения на вершине стека

Тип: stappler::data::json::Decoder::BackType


# ::stappler::data::json::Decoder<typename>::r

## BRIEF

Строка для разбора

## CONTENT

Строка для разбора

Тип: stappler::StringView


# ::stappler::data::json::Decoder<typename>::back

## BRIEF

Значение на вершине стека

## CONTENT

Значение на вершине стека

Тип: ValueType*


# ::stappler::data::json::Decoder<typename>::buf

## BRIEF

Строковый буфер

## CONTENT

Строковый буфер

Тип: StringType


# ::stappler::data::json::Decoder<typename>::stack

## BRIEF

Стек контейнеров для декодирования

## CONTENT

Стек контейнеров для декодирования

Тип: typename InterfaceType::template ArrayType<stappler::data::json::Decoder::ValueType *>


# ::stappler::data::json::read<typename>(stappler::StringView&,bool)

## BRIEF

Декодирует значение из строки JSON

## CONTENT

Декодирует значение из строки JSON. Смещает переданную строку, пропуская успешно разобранные данные.

Параметры шаблона:
* typename Interface - интерфейс памяти

Параметры:
* stappler::StringView& - строка для разбора
* bool - true если необходимо валидировать формат

Возвращает:
* ValueTemplate<Interface>

# ::stappler::data::json::read<typename>(stappler::StringView const&)

## BRIEF

Декодирует значение из строки JSON

## CONTENT

Декодирует значение из строки JSON

Параметры шаблона:
* typename Interface - интерфейс памяти

Параметры:
* stappler::StringView const& - строка для разбора

Возвращает:
* ValueTemplate<Interface>