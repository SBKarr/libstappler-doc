Title: STFieldPoint.h


# MODULES_DB_EXTENSIONS_STFIELDPOINT_H_

## BRIEF

## CONTENT


# ::stappler::db::FieldPoint

## BRIEF

## CONTENT

Базовые классы:
* db::FieldCustom


# ::stappler::db::FieldPoint::FieldPoint<typename>(stappler::mem_pool::String&&,Args &&...)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Args

Параметры:
* stappler::mem_pool::String&&
* Args &&...


# ::stappler::db::FieldPoint::transformValue(db::Scheme const&,stappler::mem_pool::Value const&,stappler::mem_pool::Value&,bool) const

## BRIEF

## CONTENT

Параметры:
* db::Scheme const&
* stappler::mem_pool::Value const&
* stappler::mem_pool::Value&
* bool

Возвращает:
* bool

# ::stappler::db::FieldPoint::readFromStorage(db::ResultCursor const&,size_t) const

## BRIEF

## CONTENT

Параметры:
* db::ResultCursor const&
* size_t

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::FieldPoint::writeToStorage(db::QueryInterface&,stappler::mem_pool::StringStream&,stappler::mem_pool::Value const&) const

## BRIEF

## CONTENT

Параметры:
* db::QueryInterface&
* stappler::mem_pool::StringStream&
* stappler::mem_pool::Value const&

Возвращает:
* bool

# ::stappler::db::FieldPoint::getTypeName() const

## BRIEF

## CONTENT

Возвращает:
* stappler::StringView

# ::stappler::db::FieldPoint::isSimpleLayout() const

## BRIEF

## CONTENT

Возвращает:
* bool

# ::stappler::db::FieldPoint::getIndexName() const

## BRIEF

## CONTENT

Возвращает:
* stappler::mem_pool::String

# ::stappler::db::FieldPoint::getIndexField() const

## BRIEF

## CONTENT

Возвращает:
* stappler::mem_pool::String

# ::stappler::db::FieldPoint::isComparationAllowed(stappler::sql::Comparation) const

## BRIEF

## CONTENT

Параметры:
* stappler::sql::Comparation

Возвращает:
* bool

# ::stappler::db::FieldPoint::writeQuery(db::Scheme const&,stappler::sql::Query<db::Binder, Interface>::WhereContinue&,stappler::sql::Operator,stappler::StringView const&,stappler::sql::Comparation,stappler::mem_pool::Value const&,stappler::mem_pool::Value const&) const

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
