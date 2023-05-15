Title: STContinueToken.h


# MODULES_DB_STCONTINUETOKEN_H_

## BRIEF

## CONTENT


# ::stappler::db::ContinueToken

## BRIEF

## CONTENT


# ::stappler::db::ContinueToken::Flags

## BRIEF

## CONTENT

Доступ: public

Значения:
* None
* Initial
* Reverse
* Inverted


# ::stappler::db::ContinueToken::ContinueToken()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::db::ContinueToken::ContinueToken(stappler::StringView const&,size_t,bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView const&
* size_t
* bool


# ::stappler::db::ContinueToken::ContinueToken(stappler::StringView const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView const&


# ::stappler::db::ContinueToken::ContinueToken(stappler::db::ContinueToken const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::ContinueToken const&


# ::stappler::db::ContinueToken::ContinueToken(stappler::db::ContinueToken&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::ContinueToken&&


# ::stappler::db::ContinueToken::operator=(stappler::db::ContinueToken const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::ContinueToken const&

Возвращает:
* stappler::db::ContinueToken&

# ::stappler::db::ContinueToken::operator=(stappler::db::ContinueToken&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::ContinueToken&&

Возвращает:
* stappler::db::ContinueToken&

# ::stappler::db::ContinueToken::operator bool() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::db::ContinueToken::hasPrev() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::db::ContinueToken::hasNext() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::db::ContinueToken::isInit() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::db::ContinueToken::encode() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::mem_pool::String

# ::stappler::db::ContinueToken::perform(stappler::db::Scheme const&,stappler::db::Transaction const&,stappler::db::Query&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::Scheme const&
* stappler::db::Transaction const&
* stappler::db::Query&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::ContinueToken::perform(stappler::db::Scheme const&,stappler::db::Transaction const&,stappler::db::Query&,stappler::db::Ordering)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::Scheme const&
* stappler::db::Transaction const&
* stappler::db::Query&
* stappler::db::Ordering

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::ContinueToken::performOrdered(stappler::db::Scheme const&,stappler::db::Transaction const&,stappler::db::Query&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::Scheme const&
* stappler::db::Transaction const&
* stappler::db::Query&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::ContinueToken::refresh(stappler::db::Scheme const&,stappler::db::Transaction const&,stappler::db::Query&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::Scheme const&
* stappler::db::Transaction const&
* stappler::db::Query&


# ::stappler::db::ContinueToken::encodeNext() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::mem_pool::String

# ::stappler::db::ContinueToken::encodePrev() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::mem_pool::String

# ::stappler::db::ContinueToken::getStart() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* size_t

# ::stappler::db::ContinueToken::getEnd() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* size_t

# ::stappler::db::ContinueToken::getTotal() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* size_t

# ::stappler::db::ContinueToken::getCount() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* size_t

# ::stappler::db::ContinueToken::getFetched() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* size_t

# ::stappler::db::ContinueToken::getField() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::StringView

# ::stappler::db::ContinueToken::getNumResults() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* size_t

# ::stappler::db::ContinueToken::hasFlag(stappler::db::ContinueToken::Flags) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::ContinueToken::Flags

Возвращает:
* bool

# ::stappler::db::ContinueToken::setFlag(stappler::db::ContinueToken::Flags)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::ContinueToken::Flags


# ::stappler::db::ContinueToken::unsetFlag(stappler::db::ContinueToken::Flags)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::ContinueToken::Flags


# ::stappler::db::ContinueToken::getFirstVec() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::mem_pool::Value const&

# ::stappler::db::ContinueToken::getLastVec() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::mem_pool::Value const&

# ::stappler::db::ContinueToken::hasPrevImpl() const

## BRIEF

## CONTENT

Доступ: protected

Возвращает:
* bool

# ::stappler::db::ContinueToken::hasNextImpl() const

## BRIEF

## CONTENT

Доступ: protected

Возвращает:
* bool

# ::stappler::db::ContinueToken::encodeNextImpl() const

## BRIEF

## CONTENT

Доступ: protected

Возвращает:
* stappler::mem_pool::String

# ::stappler::db::ContinueToken::encodePrevImpl() const

## BRIEF

## CONTENT

Доступ: protected

Возвращает:
* stappler::mem_pool::String

# ::stappler::db::ContinueToken::_init

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::db::ContinueToken::_numResults

## BRIEF

## CONTENT

Доступ: protected

Тип: size_t


# ::stappler::db::ContinueToken::field

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::mem_pool::String


# ::stappler::db::ContinueToken::initVec

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::mem_pool::Value


# ::stappler::db::ContinueToken::firstVec

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::mem_pool::Value


# ::stappler::db::ContinueToken::lastVec

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::mem_pool::Value


# ::stappler::db::ContinueToken::count

## BRIEF

## CONTENT

Доступ: protected

Тип: size_t


# ::stappler::db::ContinueToken::fetched

## BRIEF

## CONTENT

Доступ: protected

Тип: size_t


# ::stappler::db::ContinueToken::total

## BRIEF

## CONTENT

Доступ: protected

Тип: size_t


# ::stappler::db::ContinueToken::flags

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::db::ContinueToken::Flags


# ::stappler::db::operator|(ContinueToken::Flags const&,ContinueToken::Flags const&)

## BRIEF

## CONTENT

Параметры:
* ContinueToken::Flags const&
* ContinueToken::Flags const&

Возвращает:
* ContinueToken::Flags

# ::stappler::db::operator&(ContinueToken::Flags const&,ContinueToken::Flags const&)

## BRIEF

## CONTENT

Параметры:
* ContinueToken::Flags const&
* ContinueToken::Flags const&

Возвращает:
* ContinueToken::Flags

# ::stappler::db::operator^(ContinueToken::Flags const&,ContinueToken::Flags const&)

## BRIEF

## CONTENT

Параметры:
* ContinueToken::Flags const&
* ContinueToken::Flags const&

Возвращает:
* ContinueToken::Flags

# ::stappler::db::operator|=(ContinueToken::Flags&,ContinueToken::Flags const&)

## BRIEF

## CONTENT

Параметры:
* ContinueToken::Flags&
* ContinueToken::Flags const&

Возвращает:
* ContinueToken::Flags&

# ::stappler::db::operator&=(ContinueToken::Flags&,ContinueToken::Flags const&)

## BRIEF

## CONTENT

Параметры:
* ContinueToken::Flags&
* ContinueToken::Flags const&

Возвращает:
* ContinueToken::Flags&

# ::stappler::db::operator^=(ContinueToken::Flags&,ContinueToken::Flags const&)

## BRIEF

## CONTENT

Параметры:
* ContinueToken::Flags&
* ContinueToken::Flags const&

Возвращает:
* ContinueToken::Flags&

# ::stappler::db::operator==(ContinueToken::Flags const&,std::underlying_type<ContinueToken::Flags>::type const&)

## BRIEF

## CONTENT

Параметры:
* ContinueToken::Flags const&
* std::underlying_type<ContinueToken::Flags>::type const&

Возвращает:
* bool

# ::stappler::db::operator==(std::underlying_type<ContinueToken::Flags>::type const&,ContinueToken::Flags const&)

## BRIEF

## CONTENT

Параметры:
* std::underlying_type<ContinueToken::Flags>::type const&
* ContinueToken::Flags const&

Возвращает:
* bool

# ::stappler::db::operator!=(ContinueToken::Flags const&,std::underlying_type<ContinueToken::Flags>::type const&)

## BRIEF

## CONTENT

Параметры:
* ContinueToken::Flags const&
* std::underlying_type<ContinueToken::Flags>::type const&

Возвращает:
* bool

# ::stappler::db::operator!=(std::underlying_type<ContinueToken::Flags>::type const&,ContinueToken::Flags const&)

## BRIEF

## CONTENT

Параметры:
* std::underlying_type<ContinueToken::Flags>::type const&
* ContinueToken::Flags const&

Возвращает:
* bool

# ::stappler::db::operator~(ContinueToken::Flags const&)

## BRIEF

## CONTENT

Параметры:
* ContinueToken::Flags const&

Возвращает:
* ContinueToken::Flags