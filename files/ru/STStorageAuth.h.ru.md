Title: STStorageAuth.h


# MODULES_DB_STSTORAGEAUTH_H_

## BRIEF

## CONTENT


# ::stappler::db::Auth

## BRIEF

## CONTENT

Базовые классы:
* AllocBase


# ::stappler::db::Auth::NameFieldCallback

## BRIEF

## CONTENT

Доступ: public


# ::stappler::db::Auth::Auth(stappler::db::Scheme const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::Scheme const&


# ::stappler::db::Auth::Auth(stappler::db::Scheme const&,stappler::StringView const&,stappler::StringView const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::Scheme const&
* stappler::StringView const&
* stappler::StringView const&


# ::stappler::db::Auth::Auth(stappler::db::Scheme const&,stappler::db::Field const*,stappler::db::Field const*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::Scheme const&
* stappler::db::Field const*
* stappler::db::Field const*


# ::stappler::db::Auth::Auth(stappler::db::Scheme const&,stappler::db::Auth::NameFieldCallback const&,stappler::db::Field const*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::Scheme const&
* stappler::db::Auth::NameFieldCallback const&
* stappler::db::Field const*


# ::stappler::db::Auth::Auth(stappler::db::Scheme const&,stappler::db::Auth::NameFieldCallback const&,stappler::StringView const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::Scheme const&
* stappler::db::Auth::NameFieldCallback const&
* stappler::StringView const&


# ::stappler::db::Auth::getScheme() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::db::Scheme const&

# ::stappler::db::Auth::getNameField(stappler::StringView const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView const&

Возвращает:
* stappler::Pair<const Field *, String>

# ::stappler::db::Auth::getPasswordField() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::db::Field const*

# ::stappler::db::Auth::authorizeWithPassword(stappler::StringView const&,stappler::mem_pool::Bytes const&,size_t) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView const&
* stappler::mem_pool::Bytes const&
* size_t

Возвращает:
* bool

# ::stappler::db::Auth::detectPasswordField(stappler::db::Scheme const&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::db::Scheme const&

Возвращает:
* stappler::db::Field const*

# ::stappler::db::Auth::_password

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::db::Field const*


# ::stappler::db::Auth::_name

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::db::Field const*


# ::stappler::db::Auth::_nameFieldCallback

## BRIEF

## CONTENT

Доступ: protected

Тип: NameFieldCallback


# ::stappler::db::Auth::_scheme

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::db::Scheme const*
