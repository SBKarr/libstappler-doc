Title: STInputFile.h


# STAPPLER_DB_STINPUTFILE_H_

## BRIEF

Заголовок, определяющий тип файла, переданного для записи в БД

## CONTENT

Заголовок, определяющий тип файла, переданного для записи в БД


# ::stappler::db::InputFile

## BRIEF

Тип файла для записи в структуру БД

## CONTENT

Тип файла для записи в структуру БД. Файлы записываются в структуру БД по их имени в файловой системе. При этом, БД хранит дополнительную информацию для частичного сопоставления файла с его данными.

Базовые классы:
* AllocBase


# ::stappler::db::InputFile::path

## BRIEF

Путь к файлу

## CONTENT

Путь к файлу

Тип: stappler::mem_pool::String


# ::stappler::db::InputFile::name

## BRIEF

Имя поля файла

## CONTENT

Имя поля файла

Тип: stappler::mem_pool::String


# ::stappler::db::InputFile::type

## BRIEF

MIME-тип файла

## CONTENT

MIME-тип файла

Тип: stappler::mem_pool::String


# ::stappler::db::InputFile::encoding

## BRIEF

Способ кодировани файла при передаче

## CONTENT

Способ кодировани файла при передаче (Content-Encoding)

Тип: stappler::mem_pool::String


# ::stappler::db::InputFile::original

## BRIEF

Исходное имя файла в системе пользователя

## CONTENT

Исходное имя файла в системе пользователя

Тип: stappler::mem_pool::String


# ::stappler::db::InputFile::file

## BRIEF

Манипулятор файла

## CONTENT

Манипулятор файла

Тип: filesystem::File


# ::stappler::db::InputFile::isBinary

## BRIEF

Флаг, является ли файл бинарным или текстовым

## CONTENT

Флаг, является ли файл бинарным или текстовым

Тип: bool


# ::stappler::db::InputFile::writeSize

## BRIEF

Число байт, записанных во временный файл

## CONTENT

Число байт, записанных во временный файл

Тип: size_t


# ::stappler::db::InputFile::headerSize

## BRIEF

Число байт, записанных в заголовке файла

## CONTENT

Число байт, записанных в заголовке файла

Тип: size_t


# ::stappler::db::InputFile::id

## BRIEF

Внутренний идентификатор файла в запросе

## CONTENT

Внутренний идентификатор файла в запросе

Тип: int64_t


# ::stappler::db::InputFile::InputFile(stappler::mem_pool::String&&,stappler::mem_pool::String&&,stappler::mem_pool::String&&,stappler::mem_pool::String&&,size_t,int64_t)

## BRIEF

Конструктор файла

## CONTENT

Конструктор файла

Параметры:
* stappler::mem_pool::String&& - имя поля файла
* stappler::mem_pool::String&& - тип файла
* stappler::mem_pool::String&& - кодировка
* stappler::mem_pool::String&& - исходное имя файла
* size_t - число прочитанных байт в заголовке
* int64_t - внутренний идентификатор


# ::stappler::db::InputFile::~InputFile()

## BRIEF

Деструктор

## CONTENT

Деструктор


# ::stappler::db::InputFile::isOpen() const

## BRIEF

Проверяет, открыт ли файл

## CONTENT

Проверяет, открыт ли файл

Возвращает:
* bool

# ::stappler::db::InputFile::write(char const*,size_t)

## BRIEF

Записывает данные во временный файл

## CONTENT

Записывает данные во временный файл

Параметры:
* char const* - указатель на буфер
* size_t - размер буфера в байтах

Возвращает:
* size_t - число записанных байт

# ::stappler::db::InputFile::close()

## BRIEF

Закрывает и удаляет временный файл

## CONTENT

Закрывает и удаляет временный файл

# ::stappler::db::InputFile::save(stappler::StringView const&) const

## BRIEF

Закрывает временный файл и перемещает его по переданному имени

## CONTENT

Закрывает временный файл и перемещает его по переданному имени

Параметры:
* stappler::StringView const&

Возвращает:
* bool - true если перемещение успешно

# ::stappler::db::InputFile::readBytes()

## BRIEF

Читает файл в виде байтовой строки

## CONTENT

Читает файл в виде байтовой строки

Возвращает:
* stappler::mem_pool::Bytes

# ::stappler::db::InputFile::readText()

## BRIEF

Читает файл в виде текстовой строки

## CONTENT

Читает файл в виде текстовой строки

Возвращает:
* stappler::mem_pool::String

# ::stappler::db::InputFile::negativeId() const

## BRIEF

Возвращает отрицательный идентификатор

## CONTENT

Возвращает отрицательный идентификатор. Отрицательный идентификатор используется, чтобы идентифицировать файлы среди идентификаторов БД (положительных)

Возвращает:
* int64_t

# ::stappler::db::InputFile::InputFile(stappler::db::InputFile const&)

## BRIEF

Запрет копирования

## CONTENT

Запрет копирования

Параметры:
* stappler::db::InputFile const&


# ::stappler::db::InputFile::InputFile(stappler::db::InputFile&&)

## BRIEF

Запрет перемещения

## CONTENT

Запрет перемещения

Параметры:
* stappler::db::InputFile&&


# ::stappler::db::InputFile::operator=(stappler::db::InputFile const&)

## BRIEF

Запрет копирования

## CONTENT

Запрет копирования

Параметры:
* stappler::db::InputFile const&

Возвращает:
* stappler::db::InputFile&

# ::stappler::db::InputFile::operator=(stappler::db::InputFile&&)

## BRIEF

Запрет перемещения

## CONTENT

Запрет перемещения

Параметры:
* stappler::db::InputFile&&

Возвращает:
* stappler::db::InputFile&