Title: STStorageFile.h


# MODULES_DB_STSTORAGEFILE_H_

## BRIEF

## CONTENT


# ::stappler::db::File

## BRIEF

## CONTENT

Базовые классы:
* Object


# ::stappler::db::File::getFilesystemPath(uint64_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint64_t

Возвращает:
* stappler::data::WrapperTemplate<stappler::memory::PoolInterface>::String

# ::stappler::db::File::validateFileField(stappler::db::Field const&,stappler::db::InputFile const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::Field const&
* stappler::db::InputFile const&

Возвращает:
* bool

# ::stappler::db::File::validateFileField(stappler::db::Field const&,stappler::StringView const&,stappler::BytesView const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::Field const&
* stappler::StringView const&
* stappler::BytesView const&

Возвращает:
* bool

# ::stappler::db::File::createFile(stappler::db::Transaction const&,stappler::db::Field const&,stappler::db::InputFile&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::Transaction const&
* stappler::db::Field const&
* stappler::db::InputFile&

Возвращает:
* stappler::data::WrapperTemplate<stappler::memory::PoolInterface>::Value

# ::stappler::db::File::createFile(stappler::db::Transaction const&,stappler::StringView const&,stappler::StringView const&,int64_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::Transaction const&
* stappler::StringView const&
* stappler::StringView const&
* int64_t

Возвращает:
* stappler::data::WrapperTemplate<stappler::memory::PoolInterface>::Value

# ::stappler::db::File::createFile(stappler::db::Transaction const&,stappler::StringView const&,stappler::BytesView const&,int64_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::Transaction const&
* stappler::StringView const&
* stappler::BytesView const&
* int64_t

Возвращает:
* stappler::data::WrapperTemplate<stappler::memory::PoolInterface>::Value

# ::stappler::db::File::createImage(stappler::db::Transaction const&,stappler::db::Field const&,stappler::db::InputFile&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::Transaction const&
* stappler::db::Field const&
* stappler::db::InputFile&

Возвращает:
* stappler::data::WrapperTemplate<stappler::memory::PoolInterface>::Value

# ::stappler::db::File::createImage(stappler::db::Transaction const&,stappler::db::Field const&,stappler::StringView const&,stappler::BytesView const&,int64_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::Transaction const&
* stappler::db::Field const&
* stappler::StringView const&
* stappler::BytesView const&
* int64_t

Возвращает:
* stappler::data::WrapperTemplate<stappler::memory::PoolInterface>::Value

# ::stappler::db::File::getData(stappler::db::Transaction const&,uint64_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::Transaction const&
* uint64_t

Возвращает:
* stappler::data::WrapperTemplate<stappler::memory::PoolInterface>::Value

# ::stappler::db::File::setData(stappler::db::Transaction const&,uint64_t,stappler::data::WrapperTemplate<stappler::memory::PoolInterface>::Value const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::Transaction const&
* uint64_t
* stappler::data::WrapperTemplate<stappler::memory::PoolInterface>::Value const&


# ::stappler::db::File::removeFile(stappler::data::WrapperTemplate<stappler::memory::PoolInterface>::Value const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::data::WrapperTemplate<stappler::memory::PoolInterface>::Value const&

Возвращает:
* bool

# ::stappler::db::File::removeFile(int64_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* int64_t

Возвращает:
* bool

# ::stappler::db::File::purgeFile(stappler::db::Transaction const&,stappler::data::WrapperTemplate<stappler::memory::PoolInterface>::Value const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::Transaction const&
* stappler::data::WrapperTemplate<stappler::memory::PoolInterface>::Value const&

Возвращает:
* bool

# ::stappler::db::File::purgeFile(stappler::db::Transaction const&,int64_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::Transaction const&
* int64_t

Возвращает:
* bool

# ::stappler::db::File::getScheme()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::db::Scheme const*