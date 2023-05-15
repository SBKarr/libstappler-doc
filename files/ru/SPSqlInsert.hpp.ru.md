Title: SPSqlInsert.hpp


# MODULES_SQL_SPSQLINSERT_HPP_

## BRIEF

## CONTENT


# ::stappler::sql::Insert::values<typename,typename,typename>(Args &&...)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Args
* typename Binder
* typename Interface

Параметры:
* Args &&...

Возвращает:
* stappler::sql::Query::InsertValues

# ::stappler::sql::InsertValues::values<typename,typename,typename>(Args &&...)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Args
* typename Binder
* typename Interface

Параметры:
* Args &&...

Возвращает:
* stappler::sql::Query::InsertValues&

# ::stappler::sql::InsertValues::value<typename,typename,typename>(Value&&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Value
* typename Binder
* typename Interface

Параметры:
* Value&&

Возвращает:
* stappler::sql::Query::InsertValues&

# ::stappler::sql::InsertValues::def()

## BRIEF

## CONTENT

Возвращает:
* stappler::sql::Query::InsertValues&

# ::stappler::sql::InsertValues::onConflict(stappler::StringView const&)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView const&

Возвращает:
* stappler::sql::Query::InsertConflict

# ::stappler::sql::InsertValues::onConflictDoNothing()

## BRIEF

## CONTENT

Возвращает:
* stappler::sql::Query::InsertPostConflict

# ::stappler::sql::InsertValues::returning()

## BRIEF

## CONTENT

Возвращает:
* stappler::sql::Query::Returning

# ::stappler::sql::InsertValues::next()

## BRIEF

## CONTENT

Возвращает:
* stappler::sql::Query::InsertValues

# ::stappler::sql::InsertConflict::doNothing()

## BRIEF

## CONTENT

Возвращает:
* stappler::sql::Query::InsertPostConflict

# ::stappler::sql::InsertConflict::doUpdate()

## BRIEF

## CONTENT

Возвращает:
* stappler::sql::Query::InsertUpdateValues

# ::stappler::sql::InsertUpdateValues::excluded(stappler::StringView)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView

Возвращает:
* stappler::sql::Query::InsertUpdateValues&

# ::stappler::sql::InsertUpdateValues::excluded(stappler::StringView,stappler::StringView)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView
* stappler::StringView

Возвращает:
* stappler::sql::Query::InsertUpdateValues&

# ::stappler::sql::InsertUpdateValues::where<typename,typename,typename>(Args &&...)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Args
* typename Binder
* typename Interface

Параметры:
* Args &&...

Возвращает:
* stappler::sql::Query::InsertWhereValues

# ::stappler::sql::InsertUpdateValues::where()

## BRIEF

## CONTENT

Возвращает:
* stappler::sql::Query::InsertWhereValues

# ::stappler::sql::InsertUpdateValues::returning()

## BRIEF

## CONTENT

Возвращает:
* stappler::sql::Query::Returning

# ::stappler::sql::InsertWhereValues::returning()

## BRIEF

## CONTENT

Возвращает:
* stappler::sql::Query::Returning

# ::stappler::sql::InsertPostConflict::returning()

## BRIEF

## CONTENT

Возвращает:
* stappler::sql::Query::Returning

# ::stappler::sql::Returning::all()

## BRIEF

## CONTENT

Возвращает:
* stappler::sql::Query::Returning&

# ::stappler::sql::Returning::count()

## BRIEF

## CONTENT

Возвращает:
* stappler::sql::Query::Returning&

# ::stappler::sql::Returning::count(stappler::StringView const&)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView const&

Возвращает:
* stappler::sql::Query::Returning&

# ::stappler::sql::Query<typename,typename>::insert(stappler::StringView const&)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView const&

Возвращает:
* stappler::sql::Query::Insert

# ::stappler::sql::Query<typename,typename>::insert(stappler::StringView const&,stappler::StringView const&)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView const&
* stappler::StringView const&

Возвращает:
* stappler::sql::Query::Insert