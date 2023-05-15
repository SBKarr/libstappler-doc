Title: STFieldIntArray.h


# MODULES_DB_EXTENSIONS_STFIELDINTARRAY_H_

## BRIEF

## CONTENT


# ::stappler::db::FieldIntArray

## BRIEF

## CONTENT

Базовые классы:
* db::FieldCustom


# ::stappler::db::FieldIntArray::FieldIntArray<typename>(stappler::mem_pool::String&&,Args &&...)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Args

Параметры:
* stappler::mem_pool::String&&
* Args &&...


# ::stappler::db::FieldIntArray::transformValue(db::Scheme const&,stappler::mem_pool::Value const&,stappler::mem_pool::Value&,bool) const

## BRIEF

## CONTENT

Параметры:
* db::Scheme const&
* stappler::mem_pool::Value const&
* stappler::mem_pool::Value&
* bool

Возвращает:
* bool

# ::stappler::db::FieldIntArray::readFromStorage(db::ResultCursor const&,size_t) const

## BRIEF

## CONTENT

Параметры:
* db::ResultCursor const&
* size_t

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::FieldIntArray::writeToStorage(db::QueryInterface&,stappler::mem_pool::StringStream&,stappler::mem_pool::Value const&) const

## BRIEF

## CONTENT

Параметры:
* db::QueryInterface&
* stappler::mem_pool::StringStream&
* stappler::mem_pool::Value const&

Возвращает:
* bool

# ::stappler::db::FieldIntArray::getTypeName() const

## BRIEF

## CONTENT

Возвращает:
* stappler::StringView

# ::stappler::db::FieldIntArray::isSimpleLayout() const

## BRIEF

## CONTENT

Возвращает:
* bool

# ::stappler::db::FieldIntArray::getIndexName() const

## BRIEF

## CONTENT

Возвращает:
* stappler::mem_pool::String

# ::stappler::db::FieldIntArray::getIndexField() const

## BRIEF

## CONTENT

Возвращает:
* stappler::mem_pool::String

# ::stappler::db::FieldIntArray::isComparationAllowed(db::Comparation) const

## BRIEF

## CONTENT

Параметры:
* db::Comparation

Возвращает:
* bool

# ::stappler::db::FieldIntArray::writeQuery(db::Scheme const&,stappler::sql::Query<db::Binder, Interface>::WhereContinue&,stappler::sql::Operator,stappler::StringView const&,stappler::sql::Comparation,stappler::mem_pool::Value const&,stappler::mem_pool::Value const&) const

## BRIEF

## CONTENT

Параметры:
* db::Scheme const&
* stappler::sql::Query<db::Binder, Interface>::WhereContinue&
* stappler::sql::Operator
* stappler::StringView const&
* stappler::sql::Comparation
* stappler::mem_pool::Value const&
* stappler::mem_pool::Value const&


# ::stappler::db::FieldBigIntArray

## BRIEF

## CONTENT

Базовые классы:
* db::FieldCustom


# ::stappler::db::FieldBigIntArray::FieldBigIntArray<typename>(stappler::mem_pool::String&&,Args &&...)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Args

Параметры:
* stappler::mem_pool::String&&
* Args &&...


# ::stappler::db::FieldBigIntArray::transformValue(db::Scheme const&,stappler::mem_pool::Value const&,stappler::mem_pool::Value&,bool) const

## BRIEF

## CONTENT

Параметры:
* db::Scheme const&
* stappler::mem_pool::Value const&
* stappler::mem_pool::Value&
* bool

Возвращает:
* bool

# ::stappler::db::FieldBigIntArray::readFromStorage(db::ResultCursor const&,size_t) const

## BRIEF

## CONTENT

Параметры:
* db::ResultCursor const&
* size_t

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::FieldBigIntArray::writeToStorage(db::QueryInterface&,stappler::mem_pool::StringStream&,stappler::mem_pool::Value const&) const

## BRIEF

## CONTENT

Параметры:
* db::QueryInterface&
* stappler::mem_pool::StringStream&
* stappler::mem_pool::Value const&

Возвращает:
* bool

# ::stappler::db::FieldBigIntArray::getTypeName() const

## BRIEF

## CONTENT

Возвращает:
* stappler::StringView

# ::stappler::db::FieldBigIntArray::isSimpleLayout() const

## BRIEF

## CONTENT

Возвращает:
* bool

# ::stappler::db::FieldBigIntArray::getIndexName() const

## BRIEF

## CONTENT

Возвращает:
* stappler::mem_pool::String

# ::stappler::db::FieldBigIntArray::getIndexField() const

## BRIEF

## CONTENT

Возвращает:
* stappler::mem_pool::String

# ::stappler::db::FieldBigIntArray::isComparationAllowed(db::Comparation) const

## BRIEF

## CONTENT

Параметры:
* db::Comparation

Возвращает:
* bool

# ::stappler::db::FieldBigIntArray::writeQuery(db::Scheme const&,stappler::sql::Query<db::Binder, Interface>::WhereContinue&,stappler::sql::Operator,stappler::StringView const&,stappler::sql::Comparation,stappler::mem_pool::Value const&,stappler::mem_pool::Value const&) const

## BRIEF

## CONTENT

Параметры:
* db::Scheme const&
* stappler::sql::Query<db::Binder, Interface>::WhereContinue&
* stappler::sql::Operator
* stappler::StringView const&
* stappler::sql::Comparation
* stappler::mem_pool::Value const&
* stappler::mem_pool::Value const&
