Title: STStorageUser.h


# MODULES_DB_STSTORAGEUSER_H_

## BRIEF

## CONTENT


# ::stappler::db::User

## BRIEF

## CONTENT

Базовые классы:
* Object


# ::stappler::db::User::create(stappler::db::Adapter const&,stappler::StringView const&,stappler::StringView const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::Adapter const&
* stappler::StringView const&
* stappler::StringView const&

Возвращает:
* stappler::db::User*

# ::stappler::db::User::setup(stappler::db::Adapter const&,stappler::StringView const&,stappler::StringView const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::Adapter const&
* stappler::StringView const&
* stappler::StringView const&

Возвращает:
* stappler::db::User*

# ::stappler::db::User::create(stappler::db::Adapter const&,stappler::data::WrapperTemplate<stappler::memory::PoolInterface>::Value&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::Adapter const&
* stappler::data::WrapperTemplate<stappler::memory::PoolInterface>::Value&&

Возвращает:
* stappler::db::User*

# ::stappler::db::User::get(stappler::db::Adapter const&,stappler::StringView const&,stappler::StringView const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::Adapter const&
* stappler::StringView const&
* stappler::StringView const&

Возвращает:
* stappler::db::User*

# ::stappler::db::User::get(stappler::db::Adapter const&,stappler::db::Scheme const&,stappler::StringView const&,stappler::StringView const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::Adapter const&
* stappler::db::Scheme const&
* stappler::StringView const&
* stappler::StringView const&

Возвращает:
* stappler::db::User*

# ::stappler::db::User::get(stappler::db::Adapter const&,stappler::db::Scheme const&,stappler::BytesView const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::Adapter const&
* stappler::db::Scheme const&
* stappler::BytesView const&

Возвращает:
* stappler::db::User*

# ::stappler::db::User::get(stappler::db::Adapter const&,uint64_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::Adapter const&
* uint64_t

Возвращает:
* stappler::db::User*

# ::stappler::db::User::get(stappler::db::Adapter const&,stappler::db::Scheme const&,uint64_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::Adapter const&
* stappler::db::Scheme const&
* uint64_t

Возвращает:
* stappler::db::User*

# ::stappler::db::User::User(stappler::data::WrapperTemplate<stappler::memory::PoolInterface>::Value&&,stappler::db::Scheme const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::data::WrapperTemplate<stappler::memory::PoolInterface>::Value&&
* stappler::db::Scheme const&


# ::stappler::db::User::validatePassword(stappler::StringView const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView const&

Возвращает:
* bool

# ::stappler::db::User::setPassword(stappler::StringView const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView const&


# ::stappler::db::User::isAdmin() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::db::User::getName() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::StringView