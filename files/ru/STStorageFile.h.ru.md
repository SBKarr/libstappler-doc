Title: STStorageFile.h


# STAPPLER_DB_STSTORAGEFILE_H_

## BRIEF

Заголовок для работы с внешними файлами в интерфейсе данных

## CONTENT

Заголовок для работы с внешними файлами в интерфейсе данных


# ::stappler::db::File

## BRIEF

Структура объекта внешнего файла

## CONTENT

Структура объекта внешнего файла

Базовые классы:
* Object


# ::stappler::db::File::getFilesystemPath(uint64_t)

## BRIEF

Возвращает путь в файловой системе для объекта файла

## CONTENT

Доступ: public

Возвращает путь в файловой системе для объекта файла

Параметры:
* uint64_t

Возвращает:
* stappler::data::WrapperTemplate<stappler::memory::PoolInterface>::String

# ::stappler::db::File::validateFileField(stappler::db::Field const&,stappler::db::InputFile const&)

## BRIEF

Проверяет, возможно ли сохранить внешний файл в определённом поле

## CONTENT

Доступ: public

Проверяет, возможно ли сохранить внешний файл в определённом поле

Параметры:
* stappler::db::Field const&
* stappler::db::InputFile const&

Возвращает:
* bool

# ::stappler::db::File::validateFileField(stappler::db::Field const&,stappler::StringView const&,stappler::BytesView const&)

## BRIEF

Проверяет, возможно ли сохранить внешний файл в определённом поле

## CONTENT

Доступ: public

Проверяет, возможно ли сохранить внешний файл в определённом поле

Параметры:
* stappler::db::Field const&
* stappler::StringView const& - тип файла
* stappler::BytesView const& - данные файла

Возвращает:
* bool

# ::stappler::db::File::createFile(stappler::db::Transaction const&,stappler::db::Field const&,stappler::db::InputFile&)

## BRIEF

Создаёт значение для записи внешнего файла в БД

## CONTENT

Доступ: public

Создаёт значение для записи внешнего файла в БД

Параметры:
* stappler::db::Transaction const&
* stappler::db::Field const&
* stappler::db::InputFile&

Возвращает:
* stappler::data::WrapperTemplate<stappler::memory::PoolInterface>::Value

# ::stappler::db::File::createFile(stappler::db::Transaction const&,stappler::StringView const&,stappler::StringView const&,int64_t)

## BRIEF

Создаёт значение для записи внешнего файла в БД

## CONTENT

Доступ: public

Создаёт значение для записи внешнего файла в БД

Параметры:
* stappler::db::Transaction const&
* stappler::StringView const&
* stappler::StringView const&
* int64_t - время изменения файла

Возвращает:
* stappler::data::WrapperTemplate<stappler::memory::PoolInterface>::Value

# ::stappler::db::File::createFile(stappler::db::Transaction const&,stappler::StringView const&,stappler::BytesView const&,int64_t)

## BRIEF

Создаёт значение для записи внешнего файла в БД

## CONTENT

Доступ: public

Создаёт значение для записи внешнего файла в БД

Параметры:
* stappler::db::Transaction const&
* stappler::StringView const& - тип файла
* stappler::BytesView const& - данные файла
* int64_t - время изменения файла

Возвращает:
* stappler::data::WrapperTemplate<stappler::memory::PoolInterface>::Value

# ::stappler::db::File::createImage(stappler::db::Transaction const&,stappler::db::Field const&,stappler::db::InputFile&)

## BRIEF

Создаёт значение для записи внешнего изображения в БД

## CONTENT

Доступ: public

Создаёт значение для записи внешнего изображения в БД

Параметры:
* stappler::db::Transaction const&
* stappler::db::Field const&
* stappler::db::InputFile&

Возвращает:
* stappler::data::WrapperTemplate<stappler::memory::PoolInterface>::Value

# ::stappler::db::File::createImage(stappler::db::Transaction const&,stappler::db::Field const&,stappler::StringView const&,stappler::BytesView const&,int64_t)

## BRIEF

Создаёт значение для записи внешнего изображения в БД

## CONTENT

Доступ: public

Создаёт значение для записи внешнего изображения в БД

Параметры:
* stappler::db::Transaction const&
* stappler::db::Field const&
* stappler::StringView const& - тип изображения
* stappler::BytesView const& - данные изображения
* int64_t - время изменения файла

Возвращает:
* stappler::data::WrapperTemplate<stappler::memory::PoolInterface>::Value

# ::stappler::db::File::getData(stappler::db::Transaction const&,uint64_t)

## BRIEF

Получает данные файла по ид

## CONTENT

Доступ: public

Получает данные файла по ид

Параметры:
* stappler::db::Transaction const&
* uint64_t

Возвращает:
* stappler::data::WrapperTemplate<stappler::memory::PoolInterface>::Value

# ::stappler::db::File::setData(stappler::db::Transaction const&,uint64_t,stappler::data::WrapperTemplate<stappler::memory::PoolInterface>::Value const&)

## BRIEF

Устанавливает данные файла по ид

## CONTENT

Доступ: public

Устанавливает данные файла по ид

Параметры:
* stappler::db::Transaction const&
* uint64_t
* stappler::data::WrapperTemplate<stappler::memory::PoolInterface>::Value const&


# ::stappler::db::File::removeFile(stappler::data::WrapperTemplate<stappler::memory::PoolInterface>::Value const&)

## BRIEF

Удаляет хранимый внешний файл

## CONTENT

Доступ: public

Удаляет хранимый внешний файл

Параметры:
* stappler::data::WrapperTemplate<stappler::memory::PoolInterface>::Value const&

Возвращает:
* bool

# ::stappler::db::File::removeFile(int64_t)

## BRIEF

Удаляет хранимый внешний файл

## CONTENT

Доступ: public

Удаляет хранимый внешний файл

Параметры:
* int64_t

Возвращает:
* bool

# ::stappler::db::File::purgeFile(stappler::db::Transaction const&,stappler::data::WrapperTemplate<stappler::memory::PoolInterface>::Value const&)

## BRIEF

Очищает данные внешнего файла

## CONTENT

Доступ: public

Очищает данные внешнего файла

Параметры:
* stappler::db::Transaction const&
* stappler::data::WrapperTemplate<stappler::memory::PoolInterface>::Value const&

Возвращает:
* bool

# ::stappler::db::File::purgeFile(stappler::db::Transaction const&,int64_t)

## BRIEF

Очищает данные внешнего файла

## CONTENT

Доступ: public

Очищает данные внешнего файла

Параметры:
* stappler::db::Transaction const&
* int64_t

Возвращает:
* bool

# ::stappler::db::File::getScheme()

## BRIEF

Возврашает схему данных для хранения внешних файлов

## CONTENT

Доступ: public

Возврашает схему данных для хранения внешних файлов

Возвращает:
* stappler::db::Scheme const*