Title: STFieldTextArray.h


# MODULES_DB_EXTENSIONS_STFIELDTEXTARRAY_H_

## BRIEF

## CONTENT


# ::stappler::db::FieldTextArray

## BRIEF

## CONTENT

Базовые классы:
* db::FieldCustom


# ::stappler::db::FieldTextArray::FieldTextArray<typename>(stappler::mem_pool::String&&,Args &&...)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Args

Параметры:
* stappler::mem_pool::String&&
* Args &&...


# ::stappler::db::FieldTextArray::transformValue(db::Scheme const&,stappler::mem_pool::Value const&,stappler::mem_pool::Value&,bool) const

## BRIEF

## CONTENT

Параметры:
* db::Scheme const&
* stappler::mem_pool::Value const&
* stappler::mem_pool::Value&
* bool

Возвращает:
* bool

# ::stappler::db::FieldTextArray::readFromStorage(db::ResultCursor const&,size_t) const

## BRIEF

## CONTENT

Параметры:
* db::ResultCursor const&
* size_t

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::FieldTextArray::writeToStorage(db::QueryInterface&,stappler::mem_pool::StringStream&,stappler::mem_pool::Value const&) const

## BRIEF

## CONTENT

Параметры:
* db::QueryInterface&
* stappler::mem_pool::StringStream&
* stappler::mem_pool::Value const&

Возвращает:
* bool

# ::stappler::db::FieldTextArray::getTypeName() const

## BRIEF

## CONTENT

Возвращает:
* stappler::StringView

# ::stappler::db::FieldTextArray::isSimpleLayout() const

## BRIEF

## CONTENT

Возвращает:
* bool

# ::stappler::db::FieldTextArray::getIndexName() const

## BRIEF

## CONTENT

Возвращает:
* stappler::mem_pool::String

# ::stappler::db::FieldTextArray::getIndexField() const

## BRIEF

## CONTENT

Возвращает:
* stappler::mem_pool::String

# ::stappler::db::FieldTextArray::isComparationAllowed(db::Comparation) const

## BRIEF

## CONTENT

Параметры:
* db::Comparation

Возвращает:
* bool

# ::stappler::db::FieldTextArray::writeQuery(db::Scheme const&,stappler::sql::Query<db::Binder, Interface>::WhereContinue&,stappler::sql::Operator,stappler::StringView const&,stappler::sql::Comparation,stappler::mem_pool::Value const&,stappler::mem_pool::Value const&) const

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
