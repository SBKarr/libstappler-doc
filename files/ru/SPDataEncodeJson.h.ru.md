Title: SPDataEncodeJson.h


# STAPPLER_DATA_SPDATAENCODEJSON_H_

## BRIEF

Заголовок, описывающий кодирование данных в формат JSON

## CONTENT

Заголовок, описывающий кодирование данных в формат JSON

# ::stappler::data::json::encodeString<typename>(std::ostream&,StringType const&)

## BRIEF

Кодирует строку для записи в JSON

## CONTENT

Кодирует строку для записи в JSON, устраняет и заменяет недопустимые символы

Параметры шаблона:
* typename StringType - тип строки

Параметры:
* std::ostream& - выходной поток
* StringType const& - исходная строка


# ::stappler::data::json::RawEncoder<typename>

## BRIEF

Кодировщик для машиночитаемой записи в JSON

## CONTENT

Кодировщик для машиночитаемой записи в JSON

Параметры шаблона:
* typename Interface - интерфейс памяти

Базовые классы:
* Interface::AllocBaseType


# ::stappler::data::json::RawEncoder<typename>::InterfaceType

## BRIEF

Тип интерфейса памяти

## CONTENT

Тип интерфейса памяти

# ::stappler::data::json::RawEncoder<typename>::ValueType

## BRIEF

Тип исходного значения

## CONTENT

Тип исходного значения

# ::stappler::data::json::RawEncoder<typename>::RawEncoder(std::ostream*)

## BRIEF

Инициализирует кодировщик с выходным потоком

## CONTENT

Инициализирует кодировщик с выходным потоком

Параметры:
* std::ostream*


# ::stappler::data::json::RawEncoder<typename>::write(stappler::nullptr_t)

## BRIEF

Записынвает NULL

## CONTENT

Записынвает NULL

Параметры:
* stappler::nullptr_t


# ::stappler::data::json::RawEncoder<typename>::write(bool)

## BRIEF

Записывает булево значение

## CONTENT

Записывает булево значение

Параметры:
* bool


# ::stappler::data::json::RawEncoder<typename>::write(int64_t)

## BRIEF

Записывает целое число

## CONTENT

Записывает целое число

Параметры:
* int64_t


# ::stappler::data::json::RawEncoder<typename>::write(double)

## BRIEF

Записывает число с плавающей точкой

## CONTENT

Записывает число с плавающей точкой

Параметры:
* double


# ::stappler::data::json::RawEncoder<typename>::write(const typename ValueType::StringType&)

## BRIEF

Записывает символьную строку

## CONTENT

Записывает символьную строку

Параметры:
* const typename ValueType::StringType&


# ::stappler::data::json::RawEncoder<typename>::write(const typename ValueType::BytesType&)

## BRIEF

Записывает байтовую строку

## CONTENT

Записывает байтовую строку. Поскольку формат JSON не поддерживает байтовые строки, кодирует строку в base64.

Параметры:
* const typename ValueType::BytesType&


# ::stappler::data::json::RawEncoder<typename>::onBeginArray(const typename ValueType::ArrayType&)

## BRIEF

Начинает запись массиво

## CONTENT

Начинает запись массиво

Параметры:
* const typename ValueType::ArrayType&


# ::stappler::data::json::RawEncoder<typename>::onEndArray(const typename ValueType::ArrayType&)

## BRIEF

Заканчивает запись массива

## CONTENT

Заканчивает запись массива

Параметры:
* const typename ValueType::ArrayType&


# ::stappler::data::json::RawEncoder<typename>::onBeginDict(const typename ValueType::DictionaryType&)

## BRIEF

Начинает запись словаря

## CONTENT

Начинает запись словаря

Параметры:
* const typename ValueType::DictionaryType&


# ::stappler::data::json::RawEncoder<typename>::onEndDict(const typename ValueType::DictionaryType&)

## BRIEF

Заканчивает запись словаря

## CONTENT

Заканчивает запись словаря

Параметры:
* const typename ValueType::DictionaryType&


# ::stappler::data::json::RawEncoder<typename>::onKey(const typename ValueType::StringType&)

## BRIEF

Записывает ключ значения массива

## CONTENT

Записывает ключ значения массива

Параметры:
* const typename ValueType::StringType&


# ::stappler::data::json::RawEncoder<typename>::onNextValue()

## BRIEF

Перехходит к следующему значению в контейнере

## CONTENT

Перехходит к следующему значению в контейнере

# ::stappler::data::json::RawEncoder<typename>::stream

## BRIEF

Выходной поток

## CONTENT

Выходной поток

Тип: std::ostream*


# ::stappler::data::json::PrettyEncoder<typename>

## BRIEF

Кодировщик для человекочитаемой записи в JSON

## CONTENT

Кодировщик для человекочитаемой записи в JSON

Параметры шаблона:
* typename Interface - интерфейс памяти

Базовые классы:
* Interface::AllocBaseType


# ::stappler::data::json::PrettyEncoder<typename>::InterfaceType

## BRIEF

Тип интерфейса памяти

## CONTENT

Тип интерфейса памяти

# ::stappler::data::json::PrettyEncoder<typename>::ValueType

## BRIEF

Тип исходного значения

## CONTENT

Тип исходного значения

# ::stappler::data::json::PrettyEncoder<typename>::PrettyEncoder(std::ostream*,bool)

## BRIEF

Инициализирует кодировщик с выходным потоком

## CONTENT

Инициализирует кодировщик с выходным потоком

Параметры:
* std::ostream* - выходной поток
* bool - true если необходимо интерпретировать значения времени

# ::stappler::data::json::RawEncoder<typename>::writeData(char const*,size_t)

## BRIEF

Записывает блок данных в поток

## CONTENT

Записывает блок данных в поток

Параметры:
* char const* - указатель на начало блока
* size_t - длина блока

# ::stappler::data::json::RawEncoder<typename>::writeData(char const*)

## BRIEF

Записывает блок данных в поток

## CONTENT

Записывает блок данных в поток

Параметры:
* char const* - указатель на начало блока, длина вычисляется как strlen

# ::stappler::data::json::RawEncoder<typename>::writeChar(char)

## BRIEF

Записывает символ в поток

## CONTENT

Записывает символ в поток

Параметры:
* char

# ::stappler::data::json::PrettyEncoder<typename>::write(stappler::nullptr_t)

## BRIEF

Записывает NULL

## CONTENT

Записывает NULL

Параметры:
* stappler::nullptr_t


# ::stappler::data::json::PrettyEncoder<typename>::write(bool)

## BRIEF

Записывает булево значение

## CONTENT

Записывает булево значение

Параметры:
* bool


# ::stappler::data::json::PrettyEncoder<typename>::write(int64_t)

## BRIEF

Записывает целое число

## CONTENT

Записывает целое число

Параметры:
* int64_t


# ::stappler::data::json::PrettyEncoder<typename>::write(double)

## BRIEF

Записывает число с плавающей точкой

## CONTENT

Записывает число с плавающей точкой

Параметры:
* double


# ::stappler::data::json::PrettyEncoder<typename>::write(const typename ValueType::StringType&)

## BRIEF

Записывает символьную строку

## CONTENT

Записывает символьную строку

Параметры:
* const typename ValueType::StringType&


# ::stappler::data::json::PrettyEncoder<typename>::write(const typename ValueType::BytesType&)

## BRIEF

Записывает байтовую строку

## CONTENT

Записывает байтовую строку. Поскольку формат JSON не поддерживает байтовые строки, кодирует строку в base64.

Параметры:
* const typename ValueType::BytesType&


# ::stappler::data::json::PrettyEncoder<typename>::isObjectArray(const typename ValueType::ArrayType&)

## BRIEF

Проверяет объект на вложенность в массив

## CONTENT

Проверяет объект на вложенность в массив

Параметры:
* const typename ValueType::ArrayType&

Возвращает:
* bool - true если объект вложен в массив

# ::stappler::data::json::PrettyEncoder<typename>::onBeginArray(const typename ValueType::ArrayType&)

## BRIEF

Начинает запись массива

## CONTENT

Начинает запись массива

Параметры:
* const typename ValueType::ArrayType&


# ::stappler::data::json::PrettyEncoder<typename>::onEndArray(const typename ValueType::ArrayType&)

## BRIEF

Заканчивает запись массива

## CONTENT

Заканчивает запись массива

Параметры:
* const typename ValueType::ArrayType&


# ::stappler::data::json::PrettyEncoder<typename>::onBeginDict(const typename ValueType::DictionaryType&)

## BRIEF

Начинает запись словаря

## CONTENT

Начинает запись словаря

Параметры:
* const typename ValueType::DictionaryType&


# ::stappler::data::json::PrettyEncoder<typename>::onEndDict(const typename ValueType::DictionaryType&)

## BRIEF

Заканчивает запись словаря

## CONTENT

Заканчивает запись словаря

Параметры:
* const typename ValueType::DictionaryType&


# ::stappler::data::json::PrettyEncoder<typename>::onKey(const typename ValueType::StringType&)

## BRIEF

Записывает ключ значения словаря

## CONTENT

Записывает ключ значения словаря

Параметры:
* const typename ValueType::StringType&


# ::stappler::data::json::PrettyEncoder<typename>::onNextValue()

## BRIEF

Переходит к следующему значению контейнера

## CONTENT


# ::stappler::data::json::PrettyEncoder<typename>::onValue(stappler::data::json::PrettyEncoder::ValueType const&)

## BRIEF

Записывает значение контейнера

## CONTENT

Записывает значение контейнера

Параметры:
* stappler::data::json::PrettyEncoder::ValueType const&


# ::stappler::data::json::PrettyEncoder<typename>::depth

## BRIEF

Текущая глубина вложенности

## CONTENT

Тип: size_t


# ::stappler::data::json::PrettyEncoder<typename>::popComplex

## BRIEF

Является ли текущее читаемое значение составным

## CONTENT

Является ли текущее читаемое значение составным

Тип: bool


# ::stappler::data::json::PrettyEncoder<typename>::offsetted

## BRIEF

Записано ли смещение для текущего значения

## CONTENT

Записано ли смещение для текущего значения

Тип: bool


# ::stappler::data::json::PrettyEncoder<typename>::timeMarkers

## BRIEF

Необходимо ле интерпретировать маркеры времени

## CONTENT

Необходимо ле интерпретировать маркеры времени

Тип: bool


# ::stappler::data::json::PrettyEncoder<typename>::stream

## BRIEF

Выходной поток

## CONTENT

Выходной поток

Тип: std::ostream*


# ::stappler::data::json::PrettyEncoder<typename>::lastKey

## BRIEF

Последний прочитанный ключ словаря

## CONTENT

Последний прочитанный ключ словаря

Тип: stappler::StringView


# ::stappler::data::json::PrettyEncoder<typename>::bstack

## BRIEF

Стек, показывающий тип вложенных значений

## CONTENT

Стек, показывающий тип вложенных значений

Тип: typename Interface::template ArrayType<bool>


# ::stappler::data::json::write<typename>(std::ostream&,ValueTemplate<Interface> const&,bool,bool)

## BRIEF

Записывает значение в поток

## CONTENT

Записывает значение в поток

Параметры шаблона:
* typename Interface - интерфейс памяти

Параметры:
* std::ostream& - выходной поток
* ValueTemplate<Interface> const& - значение для записи
* bool - true если использовать человекочитаемый формат
* bool - true если интерпретировать маркеры времени


# ::stappler::data::json::write<typename>(ValueTemplate<Interface> const&,bool,bool)

## BRIEF

Записывает значение в строку

## CONTENT

Записывает значение в строку

Параметры шаблона:
* typename Interface - интерфейс памяти

Параметры:
* ValueTemplate<Interface> const& - значение для записи
* bool - true если использовать человекочитаемый формат
* bool - true если интерпретировать маркеры времени

Возвращает:
* typename Interface::StringType - строка с записанным значением

# ::stappler::data::json::save<typename>(ValueTemplate<Interface> const&,stappler::StringView,bool,bool)

## BRIEF

Записывает значение в файл

## CONTENT

Записывает значение в файл

Параметры шаблона:
* typename Interface

Параметры:
* ValueTemplate<Interface> const& - значение для записи
* stappler::StringView - путь к файлу
* bool - true если использовать человекочитаемый формат
* bool - true если интерпретировать маркеры времени

Возвращает:
* bool - true если запись успешна

# ::stappler::data::json::toString<typename>(ValueTemplate<Interface> const&,bool)

## BRIEF

Записывает значение в строку

## CONTENT

Параметры шаблона:
* typename Interface - интерфейс памяти

Параметры:
* ValueTemplate<Interface> const& - значение для записи
* bool - true если использовать человекочитаемый формат

Возвращает:
* typename Interface::StringType - строка с записанным значением
