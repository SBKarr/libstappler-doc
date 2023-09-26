Title: SPDataEncodeSerenity.h


# STAPPLER_DATA_SPDATAENCODESERENITY_H_

## BRIEF

Заголовок, описывающий кодирование данных в формат Serenity

## CONTENT

Заголовок, описывающий кодирование данных в формат Serenity

# ::stappler::data::serenity::shouldEncodePercent(char)

## BRIEF

Проверяет, необходимо ли использовать процентное кодирование для символа

## CONTENT

Проверяет, необходимо ли использовать процентное кодирование для символа

Параметры:
* char

Возвращает:
* bool - true еесли кодирование необходимо

# ::stappler::data::serenity::encodeString<typename>(std::ostream&,StringType const&)

## BRIEF

Кодирует строку в поток

## CONTENT

Кодирует строку в поток, экранирует необходимые символы

Параметры шаблона:
* typename StringType

Параметры:
* std::ostream&
* StringType const&


# ::stappler::data::serenity::RawEncoder<typename>

## BRIEF

Кодировщик для машинночитаемого формата Serenity

## CONTENT

Кодировщик для машинночитаемого формата Serenity

Параметры шаблона:
* typename Interface - интерфейс памяти

Базовые классы:
* Interface::AllocBaseType


# ::stappler::data::serenity::RawEncoder<typename>::InterfaceType

## BRIEF

Тип интерфейса памяти

## CONTENT

Тип интерфейса памяти

# ::stappler::data::serenity::RawEncoder<typename>::ValueType

## BRIEF

Тип исходного значения

## CONTENT

Тип исходного значения

# ::stappler::data::serenity::RawEncoder<typename>::Type

## BRIEF

Тип текущего значения

## CONTENT

Тип текущего значения

Значения:
* Dict
* Array
* Plain


# ::stappler::data::serenity::RawEncoder<typename>::RawEncoder(std::ostream*)

## BRIEF

Инициализирует кодировщик с выходным потоком

## CONTENT

Инициализирует кодировщик с выходным потоком

Параметры:
* std::ostream*


# ::stappler::data::serenity::RawEncoder<typename>::write(stappler::nullptr_t)

## BRIEF

Записывает NULL

## CONTENT

Записывает NULL

Параметры:
* stappler::nullptr_t


# ::stappler::data::serenity::RawEncoder<typename>::write(bool)

## BRIEF

Записывает булево значения

## CONTENT

Записывает булево значения

Параметры:
* bool


# ::stappler::data::serenity::RawEncoder<typename>::write(int64_t)

## BRIEF

Записывает целое число

## CONTENT

Записывает целое число

Параметры:
* int64_t


# ::stappler::data::serenity::RawEncoder<typename>::write(double)

## BRIEF

Записывает число с плавающей точкой

## CONTENT

Записывает число с плавающей точкой

Параметры:
* double


# ::stappler::data::serenity::RawEncoder<typename>::write(const typename ValueType::StringType&)

## BRIEF

Записывает символьную строку

## CONTENT

Записывает символьную строку

Параметры:
* const typename ValueType::StringType&


# ::stappler::data::serenity::RawEncoder<typename>::write(const typename ValueType::BytesType&)

## BRIEF

Записывает байтовую строку

## CONTENT

Записывает байтовую строку

Параметры:
* const typename ValueType::BytesType&


# ::stappler::data::serenity::RawEncoder<typename>::onBeginArray(const typename ValueType::ArrayType&)

## BRIEF

Начинает запись массива

## CONTENT

Начинает запись массива

Параметры:
* const typename ValueType::ArrayType&


# ::stappler::data::serenity::RawEncoder<typename>::onEndArray(const typename ValueType::ArrayType&)

## BRIEF

Заканчивает запись массива

## CONTENT

Заканчивает запись массива

Параметры:
* const typename ValueType::ArrayType&


# ::stappler::data::serenity::RawEncoder<typename>::onBeginDict(const typename ValueType::DictionaryType&)

## BRIEF

Начинает запись словаря

## CONTENT

Начинает запись словаря

Параметры:
* const typename ValueType::DictionaryType&


# ::stappler::data::serenity::RawEncoder<typename>::onEndDict(const typename ValueType::DictionaryType&)

## BRIEF

Заканчивает запись словаря

## CONTENT

Заканчивает запись словаря

Параметры:
* const typename ValueType::DictionaryType&


# ::stappler::data::serenity::RawEncoder<typename>::onKey(const typename ValueType::StringType&)

## BRIEF

Записывает ключ значения словаря

## CONTENT

Записывает ключ значения словаря

Параметры:
* const typename ValueType::StringType&


# ::stappler::data::serenity::RawEncoder<typename>::onNextValue()

## BRIEF

Переходит к следующему значению контейнера

## CONTENT

Переходит к следующему значению контейнера


# ::stappler::data::serenity::RawEncoder<typename>::onArrayValue(stappler::data::serenity::RawEncoder::ValueType const&)

## BRIEF

Записывает значение массива

## CONTENT

Записывает значение массива

Параметры:
* stappler::data::serenity::RawEncoder::ValueType const&


# ::stappler::data::serenity::RawEncoder<typename>::onKeyValuePair(const typename ValueType::StringType&,stappler::data::serenity::RawEncoder::ValueType const&)

## BRIEF

Записывает ключ и значение словаря

## CONTENT

Записывает ключ и значение словаря

Параметры:
* const typename ValueType::StringType&
* stappler::data::serenity::RawEncoder::ValueType const&


# ::stappler::data::serenity::RawEncoder<typename>::preventKey

## BRIEF

Препятствует интерпретации следующего записанного значения как ключа словаря

## CONTENT

Препятствует интерпретации следующего записанного значения как ключа словаря

Тип: bool


# ::stappler::data::serenity::RawEncoder<typename>::stream

## BRIEF

Выходной поток

## CONTENT

Выходной поток

Тип: std::ostream*


# ::stappler::data::serenity::RawEncoder<typename>::type

## BRIEF

Тип текущего значения

## CONTENT

Тип текущего значения

Тип: stappler::data::serenity::RawEncoder::Type


# ::stappler::data::serenity::PrettyEncoder<typename>

## BRIEF

Кодировщик для записи человекочитаемого формата Serenity

## CONTENT

Кодировщик для записи человекочитаемого формата Serenity

Параметры шаблона:
* typename Interface - интерфейс памяти

Базовые классы:
* Interface::AllocBaseType


# ::stappler::data::serenity::PrettyEncoder<typename>::InterfaceType

## BRIEF

Тип интерфейса памяти

## CONTENT

Тип интерфейса памяти

# ::stappler::data::serenity::PrettyEncoder<typename>::ValueType

## BRIEF

Тип исходного значения

## CONTENT

Тип исходного значения

# ::stappler::data::serenity::PrettyEncoder<typename>::Type

## BRIEF

Тип текущего значения

## CONTENT

Тип текущего значения

Значения:
* Dict
* Array
* Plain


# ::stappler::data::serenity::PrettyEncoder<typename>::PrettyEncoder(std::ostream*)

## BRIEF

Инициализирует кодировщик с выходным потоком

## CONTENT

Инициализирует кодировщик с выходным потоком

Параметры:
* std::ostream*


# ::stappler::data::serenity::PrettyEncoder<typename>::write(stappler::nullptr_t)

## BRIEF

Записывает NULL

## CONTENT

Записывает NULL

Параметры:
* stappler::nullptr_t


# ::stappler::data::serenity::PrettyEncoder<typename>::write(bool)

## BRIEF

Записывает булево значение

## CONTENT

Записывает булево значение

Параметры:
* bool


# ::stappler::data::serenity::PrettyEncoder<typename>::write(int64_t)

## BRIEF

Записывает целое число

## CONTENT

Записывает целое число

Параметры:
* int64_t


# ::stappler::data::serenity::PrettyEncoder<typename>::write(double)

## BRIEF

Записывает число с плавающей точкой

## CONTENT

Записывает число с плавающей точкой

Параметры:
* double


# ::stappler::data::serenity::PrettyEncoder<typename>::write(const typename ValueType::StringType&)

## BRIEF

Записывает символьную строку

## CONTENT

Записывает символьную строку

Параметры:
* const typename ValueType::StringType&


# ::stappler::data::serenity::PrettyEncoder<typename>::write(const typename ValueType::BytesType&)

## BRIEF

Записывает байтовую строку

## CONTENT

Записывает байтовую строку

Параметры:
* const typename ValueType::BytesType&


# ::stappler::data::serenity::PrettyEncoder<typename>::isObjectArray(const typename ValueType::ArrayType&)

## BRIEF

Определяет, является ли значение вложенным в массив объектом

## CONTENT

Определяет, является ли значение вложенным в массив объектом

Параметры:
* const typename ValueType::ArrayType&

Возвращает:
* bool

# ::stappler::data::serenity::PrettyEncoder<typename>::onBeginArray(const typename ValueType::ArrayType&)

## BRIEF

Начинает запись массива

## CONTENT

Начинает запись массива

Параметры:
* const typename ValueType::ArrayType&


# ::stappler::data::serenity::PrettyEncoder<typename>::onEndArray(const typename ValueType::ArrayType&)

## BRIEF

Заканчивает запись массива

## CONTENT

Заканчивает запись массива

Параметры:
* const typename ValueType::ArrayType&


# ::stappler::data::serenity::PrettyEncoder<typename>::onBeginDict(const typename ValueType::DictionaryType&)

## BRIEF

Начинает запись словаря

## CONTENT

Начинает запись словаря

Параметры:
* const typename ValueType::DictionaryType&


# ::stappler::data::serenity::PrettyEncoder<typename>::onEndDict(const typename ValueType::DictionaryType&)

## BRIEF

Заканчивает запись словаря

## CONTENT

Заканчивает запись словаря

Параметры:
* const typename ValueType::DictionaryType&


# ::stappler::data::serenity::PrettyEncoder<typename>::onKey(const typename ValueType::StringType&)

## BRIEF

Записывает ключ значения словаря

## CONTENT

Записывает ключ значения словаря

Параметры:
* const typename ValueType::StringType&


# ::stappler::data::serenity::PrettyEncoder<typename>::onNextValue()

## BRIEF

Переходит к следующему значению контейнера

## CONTENT

Переходит к следующему значению контейнера

# ::stappler::data::serenity::PrettyEncoder<typename>::onValue(stappler::data::serenity::PrettyEncoder::ValueType const&)

## BRIEF

Записывает значение контейнера

## CONTENT

Записывает значение контейнера

Параметры:
* stappler::data::serenity::PrettyEncoder::ValueType const&


# ::stappler::data::serenity::PrettyEncoder<typename>::onArrayValue(stappler::data::serenity::PrettyEncoder::ValueType const&)

## BRIEF

Записывает значение массива

## CONTENT

Записывает значение массива

Параметры:
* stappler::data::serenity::PrettyEncoder::ValueType const&


# ::stappler::data::serenity::PrettyEncoder<typename>::onKeyValuePair(const typename ValueType::StringType&,stappler::data::serenity::PrettyEncoder::ValueType const&)

## BRIEF

Записывает ключ и значение словаря

## CONTENT

Записывает ключ и значение словаря

Параметры:
* const typename ValueType::StringType&
* stappler::data::serenity::PrettyEncoder::ValueType const&


# ::stappler::data::serenity::PrettyEncoder<typename>::depth

## BRIEF

Текущая глубина контейнера

## CONTENT

Текущая глубина контейнера

Тип: size_t


# ::stappler::data::serenity::PrettyEncoder<typename>::popComplex

## BRIEF

Является ли текущее значение составным

## CONTENT

Является ли текущее значение составным

Тип: bool


# ::stappler::data::serenity::PrettyEncoder<typename>::offsetted

## BRIEF

Записано ли смещение для текущего значения

## CONTENT

Записано ли смещение для текущего значения

Тип: bool


# ::stappler::data::serenity::PrettyEncoder<typename>::stream

## BRIEF

Выходной поток

## CONTENT

Выходной поток

Тип: std::ostream*


# ::stappler::data::serenity::PrettyEncoder<typename>::bstack

## BRIEF

Стек типа контейнера

## CONTENT

Стек типа контейнера

Тип: typename Interface::template ArrayType<bool>


# ::stappler::data::serenity::PrettyEncoder<typename>::type

## BRIEF

Тип текущего значения

## CONTENT

Тип текущего значения

Тип: stappler::data::serenity::PrettyEncoder::Type


# ::stappler::data::serenity::write<typename>(std::ostream&,ValueTemplate<Interface> const&,bool)

## BRIEF

Записывает значение в поток

## CONTENT

Записывает значение в поток

Параметры шаблона:
* typename Interface - интерфейс памяти

Параметры:
* std::ostream& - выходной поток
* ValueTemplate<Interface> const& - записываемое значение
* bool - true если запрошена человекочитаемая запись


# ::stappler::data::serenity::write<typename>(ValueTemplate<Interface> const&,bool)

## BRIEF

Записывает значение в строку

## CONTENT

Записывает значение в строку

Параметры шаблона:
* typename Interface - интерфейс памяти

Параметры:
* ValueTemplate<Interface> const& - записываемое значение
* bool - true если запрошена человекочитаемая запись

Возвращает:
* typename Interface::StringType - строка с записанным значением

# ::stappler::data::serenity::save<typename>(ValueTemplate<Interface> const&,stappler::StringView,bool)

## BRIEF

Записывает значение в файл

## CONTENT

Записывает значение в файл

Параметры шаблона:
* typename Interface - интерфейс памяти

Параметры:
* ValueTemplate<Interface> const& - записываемое значение
* stappler::StringView - путь к файлу
* bool - true если запрошена человекочитаемая запись

Возвращает:
* bool - true если запись успешна

# ::stappler::data::serenity::toString<typename>(ValueTemplate<Interface> const&,bool)

## BRIEF

Записывает значение в строку

## CONTENT

Записывает значение в строку

Параметры шаблона:
* typename Interface - интерфейс памяти

Параметры:
* ValueTemplate<Interface> const& - записываемое значение
* bool - true если запрошена человекочитаемая запись

Возвращает:
* typename Interface::StringType - строка с записанным значением
