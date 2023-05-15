Title: STInputFile.h


# MODULES_DB_STINPUTFILE_H_

## BRIEF

## CONTENT


# ::stappler::db::InputFile

## BRIEF

## CONTENT

Базовые классы:
* AllocBase


# ::stappler::db::InputFile::path

## BRIEF

## CONTENT

Тип: stappler::mem_pool::String


# ::stappler::db::InputFile::name

## BRIEF

## CONTENT

Тип: stappler::mem_pool::String


# ::stappler::db::InputFile::type

## BRIEF

## CONTENT

Тип: stappler::mem_pool::String


# ::stappler::db::InputFile::encoding

## BRIEF

## CONTENT

Тип: stappler::mem_pool::String


# ::stappler::db::InputFile::original

## BRIEF

## CONTENT

Тип: stappler::mem_pool::String


# ::stappler::db::InputFile::file

## BRIEF

## CONTENT

Тип: filesystem::File


# ::stappler::db::InputFile::isBinary

## BRIEF

## CONTENT

Тип: bool


# ::stappler::db::InputFile::writeSize

## BRIEF

## CONTENT

Тип: size_t


# ::stappler::db::InputFile::headerSize

## BRIEF

## CONTENT

Тип: size_t


# ::stappler::db::InputFile::id

## BRIEF

## CONTENT

Тип: int64_t


# ::stappler::db::InputFile::InputFile(stappler::mem_pool::String&&,stappler::mem_pool::String&&,stappler::mem_pool::String&&,stappler::mem_pool::String&&,size_t,int64_t)

## BRIEF

## CONTENT

Параметры:
* stappler::mem_pool::String&&
* stappler::mem_pool::String&&
* stappler::mem_pool::String&&
* stappler::mem_pool::String&&
* size_t
* int64_t


# ::stappler::db::InputFile::~InputFile()

## BRIEF

## CONTENT


# ::stappler::db::InputFile::isOpen() const

## BRIEF

## CONTENT

Возвращает:
* bool

# ::stappler::db::InputFile::write(char const*,size_t)

## BRIEF

## CONTENT

Параметры:
* char const*
* size_t

Возвращает:
* size_t

# ::stappler::db::InputFile::close()

## BRIEF

## CONTENT


# ::stappler::db::InputFile::save(stappler::StringView const&) const

## BRIEF

## CONTENT

Параметры:
* stappler::StringView const&

Возвращает:
* bool

# ::stappler::db::InputFile::readBytes()

## BRIEF

## CONTENT

Возвращает:
* stappler::mem_pool::Bytes

# ::stappler::db::InputFile::readText()

## BRIEF

## CONTENT

Возвращает:
* stappler::mem_pool::String

# ::stappler::db::InputFile::negativeId() const

## BRIEF

## CONTENT

Возвращает:
* int64_t

# ::stappler::db::InputFile::InputFile(stappler::db::InputFile const&)

## BRIEF

## CONTENT

Параметры:
* stappler::db::InputFile const&


# ::stappler::db::InputFile::InputFile(stappler::db::InputFile&&)

## BRIEF

## CONTENT

Параметры:
* stappler::db::InputFile&&


# ::stappler::db::InputFile::operator=(stappler::db::InputFile const&)

## BRIEF

## CONTENT

Параметры:
* stappler::db::InputFile const&

Возвращает:
* stappler::db::InputFile&

# ::stappler::db::InputFile::operator=(stappler::db::InputFile&&)

## BRIEF

## CONTENT

Параметры:
* stappler::db::InputFile&&

Возвращает:
* stappler::db::InputFile&