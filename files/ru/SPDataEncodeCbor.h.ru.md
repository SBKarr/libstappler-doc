Title: SPDataEncodeCbor.h


# STAPPLER_DATA_SPDATAENCODECBOR_H_

## BRIEF

Заголовок, описывающий кодирование данных в формат CBOR

## CONTENT

Заголовок, описывающий кодирование данных в формат CBOR

# ::stappler::data::cbor::Encoder<typename>

## BRIEF

Класс кодировщика в CBOR

## CONTENT

Класс кодировщика в CBOR

Параметры шаблона:
* typename Interface - интерфейс памяти

Базовые классы:
* Interface::AllocBaseType


# ::stappler::data::cbor::Encoder<typename>::InterfaceType

## BRIEF

Тип интерфейса памяти

## CONTENT

Тип интерфейса памяти

# ::stappler::data::cbor::Encoder<typename>::ValueType

## BRIEF

Тип принимаемого значения

## CONTENT

Тип принимаемого значения

# ::stappler::data::cbor::Encoder<typename>::Type

## BRIEF

Тип кодирования

## CONTENT

Тип кодирования

Значения:
* None
* File - в файл
* Buffered - в буфер
* Vector - в вектор
* Stream - в поток


# ::stappler::data::cbor::Encoder<typename>::encode(const typename ValueType::ArrayType&)

## BRIEF

Кодирует массив в статический байтовый контейнер

## CONTENT

Кодирует массив в статический байтовый контейнер

Параметры:
* const typename ValueType::ArrayType&

Возвращает:
* typename Interface::BytesType

# ::stappler::data::cbor::Encoder<typename>::encode(const typename ValueType::DictionaryType&)

## BRIEF

Кодирует словарь в статический байтовый контейнер

## CONTENT

Кодирует словарь в статический байтовый контейнер

Параметры:
* const typename ValueType::DictionaryType&

Возвращает:
* typename Interface::BytesType

# ::stappler::data::cbor::Encoder<typename>::Encoder(stappler::StringView)

## BRIEF

Инициализирует кодировщик именем файла

## CONTENT

Инициализирует кодировщик именем файла

Параметры:
* stappler::StringView - имя файла для записи


# ::stappler::data::cbor::Encoder<typename>::Encoder(std::ostream*)

## BRIEF

Инициализирует кодировщик с выходным потоком

## CONTENT

Инициализирует кодировщик с выходным потоком

Параметры:
* std::ostream* - выходной поток


# ::stappler::data::cbor::Encoder<typename>::Encoder(bool,size_t)

## BRIEF

Инициализирует кодировщик с внутренним буфером

## CONTENT

Инициализирует кодировщик с внутренним буфером

Параметры:
* bool - true если кодирование не начато и необходимо записать флаговое значение
* size_t - размер для резервирование внутреннего буфера

# ::stappler::data::cbor::Encoder<typename>::~Encoder()

## BRIEF

Деинициализирует кодировщик

## CONTENT

Деинициализирует кодировщик

# ::stappler::data::cbor::Encoder<typename>::emplace(uint8_t)

## BRIEF

Записывает байт в выходной интерфейс

## CONTENT

Записывает байт в выходной интерфейс

Параметры:
* uint8_t


# ::stappler::data::cbor::Encoder<typename>::emplace(uint8_t const*,size_t)

## BRIEF

Записывает блок памяти в выходной интерфейс

## CONTENT

Записывает блок памяти в выходной интерфейс

Параметры:
* uint8_t const* - указатель на наачало блока памяти
* size_t - размер блока памяти


# ::stappler::data::cbor::Encoder<typename>::switchBuffer(size_t)

## BRIEF

Переключает запись с внутреннего буфера на динамический вектор

## CONTENT

Переключает запись с внутреннего буфера на динамический вектор, при переполнении внутреннего буфера

Параметры:
* size_t - целевой размер вектора


# ::stappler::data::cbor::Encoder<typename>::isOpen() const

## BRIEF

Проверяет, доступен ли интерфейс для записи

## CONTENT

Проверяет, доступен ли интерфейс для записи

Возвращает:
* bool - true если интерфейс доступен для записи

# ::stappler::data::cbor::Encoder<typename>::data()

## BRIEF

Возвращает результат кодирования

## CONTENT

Возвращает результат кодирования

Возвращает:
* typename ValueType::BytesType

# ::stappler::data::cbor::Encoder<typename>::write(stappler::nullptr_t)

## BRIEF

Записывает NULL

## CONTENT

Доступ: public

Записывает NULL

Параметры:
* stappler::nullptr_t


# ::stappler::data::cbor::Encoder<typename>::write(bool)

## BRIEF

Записывает булево значение

## CONTENT

Доступ: public

Записывает булево значение

Параметры:
* bool


# ::stappler::data::cbor::Encoder<typename>::write(int64_t)

## BRIEF

Записывает целое число

## CONTENT

Доступ: public

Записывает целое число

Параметры:
* int64_t


# ::stappler::data::cbor::Encoder<typename>::write(double)

## BRIEF

Записывает число с плавающей точкой

## CONTENT

Доступ: public

Записывает число с плавающей точкой

Параметры:
* double


# ::stappler::data::cbor::Encoder<typename>::write(const typename ValueType::StringType&)

## BRIEF

Записывает символьную строку

## CONTENT

Доступ: public

Записывает символьную строку

Параметры:
* const typename ValueType::StringType&


# ::stappler::data::cbor::Encoder<typename>::write(const typename ValueType::BytesType&)

## BRIEF

Записывает байтовую строку

## CONTENT

Доступ: public

Записывает байтовую строку

Параметры:
* const typename ValueType::BytesType&


# ::stappler::data::cbor::Encoder<typename>::onBeginArray(const typename ValueType::ArrayType&)

## BRIEF

Записывает массив

## CONTENT

Доступ: public

Записывает массив

Параметры:
* const typename ValueType::ArrayType&


# ::stappler::data::cbor::Encoder<typename>::onBeginDict(const typename ValueType::DictionaryType&)

## BRIEF

Записывает словарь

## CONTENT

Доступ: public

Записывает словарь

Параметры:
* const typename ValueType::DictionaryType&


# ::stappler::data::cbor::Encoder<typename>::

## BRIEF

Безымянное объединение интерфейсов для кодирования

## CONTENT

Безымянное объединение интерфейсов для кодирования


# ::stappler::data::cbor::Encoder<typename>::buffer

## BRIEF

Внутренний буфер или динамический вектор для записи

## CONTENT

Внутренний буфер или динамический вектор для записи

Тип: typename ValueType::BytesType*


# ::stappler::data::cbor::Encoder<typename>::file

## BRIEF

Выходной поток для записи файла

## CONTENT

Выходной поток для записи файла

Тип: std::ofstream*


# ::stappler::data::cbor::Encoder<typename>::stream

## BRIEF

Поток для записи

## CONTENT

Поток для записи

Тип: std::ostream*


# ::stappler::data::cbor::Encoder<typename>::type

## BRIEF

Тип текущего интерфейса

## CONTENT

Доступ: private

Тип текущего интерфейса

Тип: stappler::data::cbor::Encoder::Type


# ::stappler::data::cbor::writeArray<typename>(const typename ValueTemplate<Interface>::ArrayType&)

## BRIEF

Записывает массив в байтовый контейнер

## CONTENT

Записывает массив в байтовый контейнер

Параметры шаблона:
* typename Interface - интерфейс памяти

Параметры:
* const typename ValueTemplate<Interface>::ArrayType&

Возвращает:
* typename Interface::BytesType

# ::stappler::data::cbor::writeObject<typename>(const typename ValueTemplate<Interface>::DictionaryType&)

## BRIEF

Записывает словарь в байтовый контейнер

## CONTENT

Записывает словарь в байтовый контейнер

Параметры шаблона:
* typename Interface - интерфейс памяти

Параметры:
* const typename ValueTemplate<Interface>::DictionaryType&

Возвращает:
* typename Interface::BytesType

# ::stappler::data::cbor::write<typename>(ValueTemplate<Interface> const&,size_t)

## BRIEF

Записывает значение в байтовый контейнер

## CONTENT

Записывает значение в байтовый контейнер

Параметры шаблона:
* typename Interface - интерфейс памяти

Параметры:
* ValueTemplate<Interface> const&
* size_t - размер блока для резервирования памяти

Возвращает:
* typename Interface::BytesType

# ::stappler::data::cbor::write<typename>(std::ostream&,ValueTemplate<Interface> const&)

## BRIEF

Записывает значение в поток

## CONTENT

Записывает значение в поток

Параметры шаблона:
* typename Interface - интерфейс памяти

Параметры:
* std::ostream& - выходной поток
* ValueTemplate<Interface> const&

Возвращает:
* bool - true если запись успешна

# ::stappler::data::cbor::save<typename>(ValueTemplate<Interface> const&,stappler::StringView)

## BRIEF

Записывает значение в файл

## CONTENT

Записывает значение в файл

Параметры шаблона:
* typename Interface - интерфейс памяти

Параметры:
* ValueTemplate<Interface> const&
* stappler::StringView - имя файла

Возвращает:
* bool - true если запись успешна