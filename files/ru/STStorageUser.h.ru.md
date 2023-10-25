Title: STStorageUser.h


# STAPPLER_DB_STSTORAGEUSER_H_

## BRIEF

Заголовок для типа определённого в БД пользователя

## CONTENT

Заголовок для типа определённого в БД пользователя. Предполагается, что это пользователи, имеющие права взаимодействовать с системой напрямую. Для внешних пользователей данную систему использовать опасно.


# ::stappler::db::User

## BRIEF

Струкрута пользователя, хранимого в БД

## CONTENT

Струкрута пользователя, хранимого в БД. Использует базовый класс объекта. Вспомогательная структура для работы с данными объекта.

Базовые классы:
* Object


# ::stappler::db::User::create(stappler::db::Adapter const&,stappler::StringView const&,stappler::StringView const&)

## BRIEF

Создаёт пользователя в базе данных

## CONTENT

Доступ: public

Создаёт пользователя в базе данных

Параметры:
* stappler::db::Adapter const&
* stappler::StringView const& - имя пользователя
* stappler::StringView const& - пароль

Возвращает:
* stappler::db::User*

# ::stappler::db::User::setup(stappler::db::Adapter const&,stappler::StringView const&,stappler::StringView const&)

## BRIEF

Выполняет первонаальную настройку системы с базовым администратором

## CONTENT

Доступ: public

Выполняет первонаальную настройку системы с базовым администратором

Параметры:
* stappler::db::Adapter const&
* stappler::StringView const& - имя пользователя
* stappler::StringView const& - пароль

Возвращает:
* stappler::db::User*

# ::stappler::db::User::create(stappler::db::Adapter const&,stappler::data::WrapperTemplate<stappler::memory::PoolInterface>::Value&&)

## BRIEF

Создаёт пользователя в базе данных

## CONTENT

Доступ: public

Создаёт пользователя в базе данных

Параметры:
* stappler::db::Adapter const&
* stappler::data::WrapperTemplate<stappler::memory::PoolInterface>::Value&& - данные пользователя

Возвращает:
* stappler::db::User*

# ::stappler::db::User::get(stappler::db::Adapter const&,stappler::StringView const&,stappler::StringView const&)

## BRIEF

Получает пользователя из БД

## CONTENT

Доступ: public

Получает пользователя из БД

Параметры:
* stappler::db::Adapter const&
* stappler::StringView const& - имя пользователя
* stappler::StringView const& - пароль для сопоставления

Возвращает:
* stappler::db::User*

# ::stappler::db::User::get(stappler::db::Adapter const&,stappler::db::Scheme const&,stappler::StringView const&,stappler::StringView const&)

## BRIEF

Получает пользователя из БД

## CONTENT

Доступ: public

Получает пользователя из БД

Параметры:
* stappler::db::Adapter const&
* stappler::db::Scheme const& - схема данных
* stappler::StringView const& - имя пользователя
* stappler::StringView const& - пароль для сопоставления

Возвращает:
* stappler::db::User*

# ::stappler::db::User::get(stappler::db::Adapter const&,stappler::db::Scheme const&,stappler::BytesView const&)

## BRIEF

Получает пользователя из БД

## CONTENT

Доступ: public

Получает пользователя из БД

Параметры:
* stappler::db::Adapter const&
* stappler::db::Scheme const& - схема данных
* stappler::BytesView const& - ключ пользователя

Возвращает:
* stappler::db::User*

# ::stappler::db::User::get(stappler::db::Adapter const&,uint64_t)

## BRIEF

Получает пользователя из БД

## CONTENT

Доступ: public

Получает пользователя из БД

Параметры:
* stappler::db::Adapter const&
* uint64_t - ид пользователя

Возвращает:
* stappler::db::User*

# ::stappler::db::User::get(stappler::db::Adapter const&,stappler::db::Scheme const&,uint64_t)

## BRIEF

Получает пользователя из БД

## CONTENT

Доступ: public

Получает пользователя из БД

Параметры:
* stappler::db::Adapter const&
* stappler::db::Scheme const& - схема данных
* uint64_t - ид пользователя

Возвращает:
* stappler::db::User*

# ::stappler::db::User::User(stappler::data::WrapperTemplate<stappler::memory::PoolInterface>::Value&&,stappler::db::Scheme const&)

## BRIEF

Конструирует объект из данных

## CONTENT

Доступ: public

Конструирует объект из данных

Параметры:
* stappler::data::WrapperTemplate<stappler::memory::PoolInterface>::Value&&
* stappler::db::Scheme const&


# ::stappler::db::User::validatePassword(stappler::StringView const&) const

## BRIEF

Проверяет пароль на соотвествие паролю в БД

## CONTENT

Доступ: public

Проверяет пароль на соотвествие паролю в БД

Параметры:
* stappler::StringView const&

Возвращает:
* bool

# ::stappler::db::User::setPassword(stappler::StringView const&)

## BRIEF

Устанавливает новый пароль

## CONTENT

Доступ: public

Устанавливает новый пароль

Параметры:
* stappler::StringView const&


# ::stappler::db::User::isAdmin() const

## BRIEF

Проверяет, является ли пользователель администратором

## CONTENT

Доступ: public

Проверяет, является ли пользователель администратором

Возвращает:
* bool

# ::stappler::db::User::getName() const

## BRIEF

Возвращает имя пользователя

## CONTENT

Доступ: public

Возвращает имя пользователя

Возвращает:
* stappler::StringView