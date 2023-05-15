Title: SPSearchDistance.h


# MODULES_SEARCH_SPSEARCHDISTANCE_H_

## BRIEF

## CONTENT


# ::stappler::search::Distance

## BRIEF

## CONTENT

Базовые классы:
* memory::AllocPool


# ::stappler::search::Distance::Value

## BRIEF

## CONTENT

Доступ: public

Значения:
* Match
* Insert
* Delete
* Replace


# ::stappler::search::Distance::Storage

## BRIEF

## CONTENT

Доступ: public

Базовые классы:
* memory::AllocPool


# ::stappler::search::Distance::Storage::Struct

## BRIEF

## CONTENT

Доступ: public


# ::stappler::search::Distance::Storage::Struct::v1

## BRIEF

## CONTENT

Тип: uint8_t


# ::stappler::search::Distance::Storage::Struct::v2

## BRIEF

## CONTENT

Тип: uint8_t


# ::stappler::search::Distance::Storage::Struct::v3

## BRIEF

## CONTENT

Тип: uint8_t


# ::stappler::search::Distance::Storage::Struct::v4

## BRIEF

## CONTENT

Тип: uint8_t


# ::stappler::search::Distance::Storage::Struct::set(uint8_t,stappler::search::Distance::Value)

## BRIEF

## CONTENT

Параметры:
* uint8_t
* stappler::search::Distance::Value


# ::stappler::search::Distance::Storage::Struct::get(uint8_t) const

## BRIEF

## CONTENT

Параметры:
* uint8_t

Возвращает:
* stappler::search::Distance::Value

# ::stappler::search::Distance::Storage::Size

## BRIEF

## CONTENT

Доступ: public


# ::stappler::search::Distance::Storage::Size::size

## BRIEF

## CONTENT

Тип: size_t


# ::stappler::search::Distance::Storage::Size::vec

## BRIEF

## CONTENT

Тип: size_t


# ::stappler::search::Distance::Storage::Array

## BRIEF

## CONTENT

Доступ: public


# ::stappler::search::Distance::Storage::Vec

## BRIEF

## CONTENT

Доступ: public


# ::stappler::search::Distance::Storage::merge(stappler::search::Distance::Storage const&,stappler::search::Distance::Storage const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::search::Distance::Storage const&
* stappler::search::Distance::Storage const&

Возвращает:
* stappler::search::Distance::Storage

# ::stappler::search::Distance::Storage::Storage()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::search::Distance::Storage::~Storage()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::search::Distance::Storage::Storage(stappler::search::Distance::Storage const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::search::Distance::Storage const&


# ::stappler::search::Distance::Storage::Storage(stappler::search::Distance::Storage&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::search::Distance::Storage&&


# ::stappler::search::Distance::Storage::operator=(stappler::search::Distance::Storage const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::search::Distance::Storage const&

Возвращает:
* stappler::search::Distance::Storage&

# ::stappler::search::Distance::Storage::operator=(stappler::search::Distance::Storage&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::search::Distance::Storage&&

Возвращает:
* stappler::search::Distance::Storage&

# ::stappler::search::Distance::Storage::empty() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::search::Distance::Storage::size() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* size_t

# ::stappler::search::Distance::Storage::capacity() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* size_t

# ::stappler::search::Distance::Storage::reserve(size_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* size_t


# ::stappler::search::Distance::Storage::emplace_back(stappler::search::Distance::Value)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::search::Distance::Value


# ::stappler::search::Distance::Storage::reverse()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::search::Distance::Storage::at(size_t) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* size_t

Возвращает:
* stappler::search::Distance::Value

# ::stappler::search::Distance::Storage::set(size_t,stappler::search::Distance::Value)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* size_t
* stappler::search::Distance::Value


# ::stappler::search::Distance::Storage::clear()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::search::Distance::Storage::isVecStorage() const

## BRIEF

## CONTENT

Доступ: protected

Возвращает:
* bool

# ::stappler::search::Distance::Storage::isVecStorage(size_t) const

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* size_t

Возвращает:
* bool

# ::stappler::search::Distance::Storage::_size

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::search::Distance::Storage::Size


# ::stappler::search::Distance::Storage::

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::search::Distance::Storage::_array

## BRIEF

## CONTENT

Тип: stappler::search::Distance::Storage::Array


# ::stappler::search::Distance::Storage::_bytes

## BRIEF

## CONTENT

Тип: stappler::search::Distance::Storage::Vec


# ::stappler::search::Distance::Distance()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::search::Distance::Distance(stappler::StringView const&,stappler::StringView const&,size_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView const&
* stappler::StringView const&
* size_t


# ::stappler::search::Distance::Distance(stappler::search::Distance const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::search::Distance const&


# ::stappler::search::Distance::Distance(stappler::search::Distance&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::search::Distance&&


# ::stappler::search::Distance::operator=(stappler::search::Distance const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::search::Distance const&

Возвращает:
* stappler::search::Distance&

# ::stappler::search::Distance::operator=(stappler::search::Distance&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::search::Distance&&

Возвращает:
* stappler::search::Distance&

# ::stappler::search::Distance::empty() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::search::Distance::size() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* size_t

# ::stappler::search::Distance::diff_original(size_t,bool) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* size_t
* bool

Возвращает:
* int32_t

# ::stappler::search::Distance::diff_canonical(size_t,bool) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* size_t
* bool

Возвращает:
* int32_t

# ::stappler::search::Distance::nmatch() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* size_t

# ::stappler::search::Distance::info() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* memory::string

# ::stappler::search::Distance::_storage

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::search::Distance::Storage
