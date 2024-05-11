Title: SPMemUuid.h


# STAPPLER_CORE_MEMORY_SPMEMUUID_H_

## BRIEF

Заголовок типа для работы с UUID

## CONTENT

Заголовок типа для работы с UUID


# ::stappler::memory::uuid

## BRIEF

Тип, представляющий UUID

## CONTENT

Тип, представляющий UUID

Базовые классы:
* AllocPool


# ::stappler::memory::uuid::FormattedLength

## BRIEF

Размер значения в форматированном виде

## CONTENT

Размер значения в форматированном виде - 36 байт

Тип: size_t const


# ::stappler::memory::uuid::uuid_t

## BRIEF

Тип хранимого в памяти значения

## CONTENT

Тип хранимого в памяти значения - массив из 16 байт

# ::stappler::memory::uuid::parse(stappler::memory::uuid::uuid_t&,char const*)

## BRIEF

Читает UUID из строки

## CONTENT

Читает UUID из строки

Параметры:
* stappler::memory::uuid::uuid_t& - (выход) значение для записи UUID
* char const* - исходная строка

Возвращает:
* bool - true при успешном чтении

# ::stappler::memory::uuid::format(char*,stappler::memory::uuid::uuid_t const&)

## BRIEF

Записывает форматированный UUID в строку

## CONTENT

Записывает форматированный UUID в строку

Параметры:
* char* - указатель на буфер строки. Должен быть не меньше FormattedLength. FormattedLength байт будет записано
* stappler::memory::uuid::uuid_t const& - записываемый UUID


# ::stappler::memory::uuid::generate()

## BRIEF

Создаёт новый UUID

## CONTENT

Создаёт новый UUID

Возвращает:
* stappler::memory::uuid

# ::stappler::memory::uuid::uuid()

## BRIEF

Создаёт нулевой UUID

## CONTENT

Создаёт нулевой UUID


# ::stappler::memory::uuid::uuid(stappler::StringView)

## BRIEF

Читает UUID из форматированной строки

## CONTENT

Читает UUID из форматированной строки. При неудаче UUID будет нулевым

Параметры:
* stappler::StringView


# ::stappler::memory::uuid::uuid(stappler::BytesView)

## BRIEF

Читает UUID из байтов

## CONTENT

Читает UUID из байтов. Блок должен быть размером 16 байт.

Параметры:
* stappler::BytesView


# ::stappler::memory::uuid::uuid(stappler::memory::uuid::uuid_t const&)

## BRIEF

Копирует UUID

## CONTENT

Копирует UUID

Параметры:
* stappler::memory::uuid::uuid_t const&


# ::stappler::memory::uuid::uuid(stappler::memory::uuid const&)

## BRIEF

Копирует UUID

## CONTENT

Копирует UUID

Параметры:
* stappler::memory::uuid const&


# ::stappler::memory::uuid::operator=(stappler::memory::uuid const&)

## BRIEF

Копирует UUID

## CONTENT

Копирует UUID

Параметры:
* stappler::memory::uuid const&

Возвращает:
* stappler::memory::uuid&

# ::stappler::memory::uuid::operator=(memory::string const&)

## BRIEF

Читает UUID из строки

## CONTENT

Читает UUID из строки

Параметры:
* memory::string const&

Возвращает:
* stappler::memory::uuid&

# ::stappler::memory::uuid::operator=(std::string const&)

## BRIEF

Читает UUID из строки

## CONTENT

Читает UUID из строки

Параметры:
* std::string const&

Возвращает:
* stappler::memory::uuid&

# ::stappler::memory::uuid::operator=(memory::vector<uint8_t> const&)

## BRIEF

Читает UUID из байт

## CONTENT

Читает UUID из байт

Параметры:
* memory::vector<uint8_t> const&

Возвращает:
* stappler::memory::uuid&

# ::stappler::memory::uuid::operator=(std::vector<uint8_t> const&)

## BRIEF

Читает UUID из байт

## CONTENT

Читает UUID из байт

Параметры:
* std::vector<uint8_t> const&

Возвращает:
* stappler::memory::uuid&

# ::stappler::memory::uuid::str<typename>() const

## BRIEF

Конвертирует UUID в форматированную строку

## CONTENT

Конвертирует UUID в форматированную строку

Параметры шаблона:
* typename Str - тип строки

Возвращает:
* Str

# ::stappler::memory::uuid::bytes<typename>() const

## BRIEF

Конвертирует UUID в байтовое значение

## CONTENT

Конвертирует UUID в байтовое значение

Параметры шаблона:
* typename B - тип байтовой строки

Возвращает:
* B

# ::stappler::memory::uuid::array() const

## BRIEF

Конвертирует UUID в массив байт

## CONTENT

Конвертирует UUID в массив байт

Возвращает:
* uuid_t

# ::stappler::memory::uuid::data() const

## BRIEF

Возвращает указатель на данные

## CONTENT

Возвращает указатель на данные

Возвращает:
* uint8_t const*

# ::stappler::memory::uuid::size() const

## BRIEF

Возвращает размер данных (16 байт)

## CONTENT

Возвращает размер данных (16 байт)

Возвращает:
* size_t

# ::stappler::memory::uuid::_uuid

## BRIEF

Хранилище UUID

## CONTENT

Хранилище UUID

Тип: uuid_t

# ::stappler::memory::uuid::view() const

## BRIEF

Возвращает отображение для данных UUID

## CONTENT

Возвращает отображение для данных UUID

Возвращает:
* stappler::BytesView