Title: STStorageObject.h


# MODULES_DB_STSTORAGEOBJECT_H_

## BRIEF

## CONTENT


# ::stappler::db::Object

## BRIEF

## CONTENT

Базовые классы:
* stappler::data::WrapperTemplate<Interface>


# ::stappler::db::Object::Object(stappler::data::WrapperTemplate<stappler::memory::PoolInterface>::Value&&,stappler::db::Scheme const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::data::WrapperTemplate<stappler::memory::PoolInterface>::Value&&
* stappler::db::Scheme const&


# ::stappler::db::Object::getScheme() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::db::Scheme const&

# ::stappler::db::Object::getObjectId() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint64_t

# ::stappler::db::Object::lockProperty(stappler::StringView const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView const&


# ::stappler::db::Object::unlockProperty(stappler::StringView const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView const&


# ::stappler::db::Object::isPropertyLocked(stappler::StringView const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView const&

Возвращает:
* bool

# ::stappler::db::Object::isFieldProtected(stappler::StringView const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView const&

Возвращает:
* bool

# ::stappler::db::Object::begin()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* auto

# ::stappler::db::Object::end()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* auto

# ::stappler::db::Object::begin() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* auto

# ::stappler::db::Object::end() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* auto

# ::stappler::db::Object::save(stappler::db::Adapter const&,bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::Adapter const&
* bool

Возвращает:
* bool

# ::stappler::db::Object::_oid

## BRIEF

## CONTENT

Доступ: protected

Тип: uint64_t


# ::stappler::db::Object::_locked

## BRIEF

## CONTENT

Доступ: protected

Тип: Set<stappler::data::WrapperTemplate<stappler::memory::PoolInterface>::String>


# ::stappler::db::Object::_scheme

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::db::Scheme const&
