Title: STStorageObject.h


# STAPPLER_DB_STSTORAGEOBJECT_H_

## BRIEF

Заголовок для структуры объекта БД

## CONTENT

Заголовок для структуры объекта БД


# ::stappler::db::Object

## BRIEF

Структура обёртки вокруг данных БД, представляющая отдельный объект

## CONTENT

Структура обёртки вокруг данных БД, представляющая отдельный объект. Позволяет контролировать изменение объекта и записывать его назад, в БД.

Базовые классы:
* stappler::data::WrapperTemplate<Interface>


# ::stappler::db::Object::Object(stappler::data::WrapperTemplate<stappler::memory::PoolInterface>::Value&&,stappler::db::Scheme const&)

## BRIEF

Создаёт новый объект

## CONTENT

Доступ: public

Создаёт новый объект

Параметры:
* stappler::data::WrapperTemplate<stappler::memory::PoolInterface>::Value&&
* stappler::db::Scheme const&


# ::stappler::db::Object::getScheme() const

## BRIEF

Возвращает схему данных для объекта

## CONTENT

Доступ: public

Возвращает схему данных для объекта

Возвращает:
* stappler::db::Scheme const&

# ::stappler::db::Object::getObjectId() const

## BRIEF

Возвращает ид объекта

## CONTENT

Доступ: public

Возвращает ид объекта

Возвращает:
* uint64_t

# ::stappler::db::Object::lockProperty(stappler::StringView const&)

## BRIEF

Блокирует запись поля

## CONTENT

Доступ: public

Блокирует запись поля

Параметры:
* stappler::StringView const&


# ::stappler::db::Object::unlockProperty(stappler::StringView const&)

## BRIEF

Разблокирует запись поля

## CONTENT

Доступ: public

Разблокирует запись поля

Параметры:
* stappler::StringView const&


# ::stappler::db::Object::isPropertyLocked(stappler::StringView const&) const

## BRIEF

Проверяет, заблокирована ли запись поля

## CONTENT

Доступ: public

Проверяет, заблокирована ли запись поля

Параметры:
* stappler::StringView const&

Возвращает:
* bool

# ::stappler::db::Object::isFieldProtected(stappler::StringView const&) const

## BRIEF

Проверяет, является ли поле защищённым от пользователя

## CONTENT

Доступ: public

Проверяет, является ли поле защищённым от пользователя

Параметры:
* stappler::StringView const&

Возвращает:
* bool

# ::stappler::db::Object::begin()

## BRIEF

Начинает обход поля

## CONTENT

Доступ: public

Начинает обход поля

Возвращает:
* auto

# ::stappler::db::Object::end()

## BRIEF

Заканчивает обход поля

## CONTENT

Доступ: public

Заканчивает обход поля

Возвращает:
* auto

# ::stappler::db::Object::begin() const

## BRIEF

Начинает обход поля

## CONTENT

Доступ: public

Начинает обход поля

Возвращает:
* auto

# ::stappler::db::Object::end() const

## BRIEF

Заканчивает обход поля

## CONTENT

Доступ: public

Заканчивает обход поля

Возвращает:
* auto

# ::stappler::db::Object::save(stappler::db::Adapter const&,bool)

## BRIEF

Сохраняет изменённый объект в БД

## CONTENT

Доступ: public

Сохраняет изменённый объект в БД

Параметры:
* stappler::db::Adapter const&
* bool

Возвращает:
* bool

# ::stappler::db::Object::_oid

## BRIEF

Идентификатор объекта

## CONTENT

Доступ: protected

Идентификатор объекта

Тип: uint64_t


# ::stappler::db::Object::_locked

## BRIEF

Список заблокированных полей

## CONTENT

Доступ: protected

Список заблокированных полей

Тип: Set<stappler::data::WrapperTemplate<stappler::memory::PoolInterface>::String>


# ::stappler::db::Object::_scheme

## BRIEF

Схема данных для объекта

## CONTENT

Доступ: protected

Схема данных для объекта

Тип: stappler::db::Scheme const&
