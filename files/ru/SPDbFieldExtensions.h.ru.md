Title: SPDbFieldExtensions.h

# STAPPLER_DB_SPDBFIELDEXTENSIONS_H_

## BRIEF

Заголовок предустановленных пользовательских полей для БД

## CONTENT

Заголовок предустановленных пользовательских полей для БД


# ::stappler::db::FieldIntArray

## BRIEF

Поле массива целых чисел

## CONTENT

Поле массива целых чисел

Базовые классы:
* db::FieldCustom


# ::stappler::db::FieldIntArray::FIELD_NAME

## BRIEF

Стандартное имя поля в БД

## CONTENT

Стандартное имя поля в БД

Тип: auto const


# ::stappler::db::FieldIntArray::registerForPostgres(stappler::db::CustomFieldInfo&)

## BRIEF

Регистрирует поле для БД PostgreSQL

## CONTENT

Регистрирует поле для БД PostgreSQL

Параметры:
* stappler::db::CustomFieldInfo&

Возвращает:
* bool

# ::stappler::db::FieldIntArray::registerForSqlite(stappler::db::CustomFieldInfo&)

## BRIEF

Регистрирует поле для БД SQlite

## CONTENT

Регистрирует поле для БД SQlite

Параметры:
* stappler::db::CustomFieldInfo&

Возвращает:
* bool

# ::stappler::db::FieldIntArray::FieldIntArray<typename>(stappler::mem_pool::String&&,Args &&...)

## BRIEF

Конструктор поля с параметрами поля

## CONTENT

Конструктор поля с параметрами поля

Параметры шаблона:
* typename Args

Параметры:
* stappler::mem_pool::String&&
* Args &&...


# ::stappler::db::FieldIntArray::getDriverTypeName() const

## BRIEF

Возвращает имя типа поля для регистрации в драйвере

## CONTENT

Возвращает имя типа поля для регистрации в драйвере

Возвращает:
* stappler::StringView

# ::stappler::db::FieldIntArray::transformValue(db::Scheme const&,stappler::mem_pool::Value const&,stappler::mem_pool::Value&,bool) const

## BRIEF

Трансформирует входящие значение для сохранения его в БД

## CONTENT

Трансформирует входящие значение для сохранения его в БД

Параметры:
* db::Scheme const&
* stappler::mem_pool::Value const&
* stappler::mem_pool::Value&
* bool

Возвращает:
* bool

# ::stappler::db::FieldIntArray::isSimpleLayout() const

## BRIEF

Проверяет, использует ли поле одноуровневую укладку

## CONTENT

Проверяет, использует ли поле одноуровневую укладку. Одноуровневая укладка допускает обновление поля без его получения.

Возвращает:
* bool


# ::stappler::db::FieldPoint

## BRIEF

Поле точки в пространстве

## CONTENT

Поле точки в пространстве

Базовые классы:
* db::FieldCustom


# ::stappler::db::FieldPoint::FIELD_NAME

## BRIEF

Стандартное имя поля в БД

## CONTENT

Стандартное имя поля в БД

Тип: auto const


# ::stappler::db::FieldPoint::registerForPostgres(stappler::db::CustomFieldInfo&)

## BRIEF

Регистрирует поле для БД PostgreSQL

## CONTENT

Регистрирует поле для БД PostgreSQL

Параметры:
* stappler::db::CustomFieldInfo&

Возвращает:
* bool

# ::stappler::db::FieldPoint::registerForSqlite(stappler::db::CustomFieldInfo&)

## BRIEF

Регистрирует поле для БД SQlite

## CONTENT

Регистрирует поле для БД SQlite

Параметры:
* stappler::db::CustomFieldInfo&

Возвращает:
* bool

# ::stappler::db::FieldPoint::FieldPoint<typename>(stappler::mem_pool::String&&,Args &&...)

## BRIEF

Конструктор поля с параметрами поля

## CONTENT

Конструктор поля с параметрами поля

Параметры шаблона:
* typename Args

Параметры:
* stappler::mem_pool::String&&
* Args &&...


# ::stappler::db::FieldPoint::getDriverTypeName() const

## BRIEF

Возвращает имя типа поля для регистрации в драйвере

## CONTENT

Возвращает имя типа поля для регистрации в драйвере

Возвращает:
* stappler::StringView

# ::stappler::db::FieldPoint::transformValue(db::Scheme const&,stappler::mem_pool::Value const&,stappler::mem_pool::Value&,bool) const

## BRIEF

Трансформирует входящие значение для сохранения его в БД

## CONTENT

Трансформирует входящие значение для сохранения его в БД

Параметры:
* db::Scheme const&
* stappler::mem_pool::Value const&
* stappler::mem_pool::Value&
* bool

Возвращает:
* bool

# ::stappler::db::FieldPoint::isSimpleLayout() const

## BRIEF

Проверяет, использует ли поле одноуровневую укладку

## CONTENT

Проверяет, использует ли поле одноуровневую укладку. Одноуровневая укладка допускает обновление поля без его получения.

Возвращает:
* bool


# ::stappler::db::FieldTextArray

## BRIEF

Поле массива строк

## CONTENT

Поле массива строк

Базовые классы:
* db::FieldCustom


# ::stappler::db::FieldTextArray::FIELD_NAME

## BRIEF

Стандартное имя поля в БД

## CONTENT

Стандартное имя поля в БД

Тип: auto const


# ::stappler::db::FieldTextArray::registerForPostgres(stappler::db::CustomFieldInfo&)

## BRIEF

Регистрирует поле для БД PostgreSQL

## CONTENT

Регистрирует поле для БД PostgreSQL

Параметры:
* stappler::db::CustomFieldInfo&

Возвращает:
* bool

# ::stappler::db::FieldTextArray::registerForSqlite(stappler::db::CustomFieldInfo&)

## BRIEF

Регистрирует поле для БД SQlite

## CONTENT

Регистрирует поле для БД SQlite

Параметры:
* stappler::db::CustomFieldInfo&

Возвращает:
* bool

# ::stappler::db::FieldTextArray::FieldTextArray<typename>(stappler::mem_pool::String&&,Args &&...)

## BRIEF

Конструктор поля с параметрами поля

## CONTENT

Конструктор поля с параметрами поля

Параметры шаблона:
* typename Args

Параметры:
* stappler::mem_pool::String&&
* Args &&...


# ::stappler::db::FieldTextArray::getDriverTypeName() const

## BRIEF

Возвращает имя типа поля для регистрации в драйвере

## CONTENT

Возвращает имя типа поля для регистрации в драйвере

Возвращает:
* stappler::StringView

# ::stappler::db::FieldTextArray::transformValue(db::Scheme const&,stappler::mem_pool::Value const&,stappler::mem_pool::Value&,bool) const

## BRIEF

Трансформирует входящие значение для сохранения его в БД

## CONTENT

Трансформирует входящие значение для сохранения его в БД

Параметры:
* db::Scheme const&
* stappler::mem_pool::Value const&
* stappler::mem_pool::Value&
* bool

Возвращает:
* bool

# ::stappler::db::FieldTextArray::isSimpleLayout() const

## BRIEF

Проверяет, использует ли поле одноуровневую укладку

## CONTENT

Проверяет, использует ли поле одноуровневую укладку. Одноуровневая укладка допускает обновление поля без его получения.

Возвращает:
* bool


# ::stappler::db::FieldBigIntArray

## BRIEF

Поле массива целых чисел

## CONTENT

Поле массива целых чисел

Базовые классы:
* db::FieldCustom


# ::stappler::db::FieldBigIntArray::FIELD_NAME

## BRIEF

Стандартное имя поля в БД

## CONTENT

Стандартное имя поля в БД

Тип: auto const


# ::stappler::db::FieldBigIntArray::registerForPostgres(stappler::db::CustomFieldInfo&)

## BRIEF

Регистрирует поле для БД PostgreSQL

## CONTENT

Регистрирует поле для БД PostgreSQL

Параметры:
* stappler::db::CustomFieldInfo&

Возвращает:
* bool

# ::stappler::db::FieldBigIntArray::registerForSqlite(stappler::db::CustomFieldInfo&)

## BRIEF

Регистрирует поле для БД SQlite

## CONTENT

Регистрирует поле для БД SQlite

Параметры:
* stappler::db::CustomFieldInfo&

Возвращает:
* bool

# ::stappler::db::FieldBigIntArray::FieldBigIntArray<typename>(stappler::mem_pool::String&&,Args &&...)

## BRIEF

Конструктор поля с параметрами поля

## CONTENT

Конструктор поля с параметрами поля

Параметры шаблона:
* typename Args

Параметры:
* stappler::mem_pool::String&&
* Args &&...


# ::stappler::db::FieldBigIntArray::getDriverTypeName() const

## BRIEF

Возвращает имя типа поля для регистрации в драйвере

## CONTENT

Возвращает имя типа поля для регистрации в драйвере

Возвращает:
* stappler::StringView

# ::stappler::db::FieldBigIntArray::transformValue(db::Scheme const&,stappler::mem_pool::Value const&,stappler::mem_pool::Value&,bool) const

## BRIEF

Трансформирует входящие значение для сохранения его в БД

## CONTENT

Трансформирует входящие значение для сохранения его в БД

Параметры:
* db::Scheme const&
* stappler::mem_pool::Value const&
* stappler::mem_pool::Value&
* bool

Возвращает:
* bool

# ::stappler::db::FieldBigIntArray::isSimpleLayout() const

## BRIEF

Проверяет, использует ли поле одноуровневую укладку

## CONTENT

Проверяет, использует ли поле одноуровневую укладку. Одноуровневая укладка допускает обновление поля без его получения.

Возвращает:
* bool
