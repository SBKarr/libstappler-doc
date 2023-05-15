Title: SPSha.h


# LIBSTAPPLER_COMMON_STRING_SPCRYPTO_H_

## BRIEF

## CONTENT


# ::stappler::CoderSource

## BRIEF

## CONTENT


# ::stappler::CoderSource::CoderSource(uint8_t const*,size_t)

## BRIEF

## CONTENT

Параметры:
* uint8_t const*
* size_t


# ::stappler::CoderSource::CoderSource(char const*,size_t)

## BRIEF

## CONTENT

Параметры:
* char const*
* size_t


# ::stappler::CoderSource::CoderSource(char const*)

## BRIEF

## CONTENT

Параметры:
* char const*


# ::stappler::CoderSource::CoderSource(stappler::StringView const&)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView const&


# ::stappler::CoderSource::CoderSource(typename memory::PoolInterface::BytesType const&)

## BRIEF

## CONTENT

Параметры:
* typename memory::PoolInterface::BytesType const&


# ::stappler::CoderSource::CoderSource(typename memory::StandartInterface::BytesType const&)

## BRIEF

## CONTENT

Параметры:
* typename memory::StandartInterface::BytesType const&


# ::stappler::CoderSource::CoderSource(typename memory::PoolInterface::StringType const&)

## BRIEF

## CONTENT

Параметры:
* typename memory::PoolInterface::StringType const&


# ::stappler::CoderSource::CoderSource(typename memory::StandartInterface::StringType const&)

## BRIEF

## CONTENT

Параметры:
* typename memory::StandartInterface::StringType const&


# ::stappler::CoderSource::CoderSource<stappler::Endian>(BytesViewTemplate<Order> const&)

## BRIEF

## CONTENT

Параметры шаблона:
* stappler::Endian Order

Параметры:
* BytesViewTemplate<Order> const&


# ::stappler::CoderSource::CoderSource(BytesReader<uint8_t> const&)

## BRIEF

## CONTENT

Параметры:
* BytesReader<uint8_t> const&


# ::stappler::CoderSource::CoderSource(BytesReader<char> const&)

## BRIEF

## CONTENT

Параметры:
* BytesReader<char> const&


# ::stappler::CoderSource::CoderSource<size_t>(std::array<uint8_t, Size> const&)

## BRIEF

## CONTENT

Параметры шаблона:
* size_t Size

Параметры:
* std::array<uint8_t, Size> const&


# ::stappler::CoderSource::CoderSource<typename>(Container const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Container

Параметры:
* Container const&


# ::stappler::CoderSource::CoderSource()

## BRIEF

## CONTENT


# ::stappler::CoderSource::_data

## BRIEF

## CONTENT

Тип: BytesViewTemplate<Endian::Network>


# ::stappler::CoderSource::_offset

## BRIEF

## CONTENT

Тип: size_t


# ::stappler::CoderSource::CoderSource(stappler::CoderSource const&)

## BRIEF

## CONTENT

Параметры:
* stappler::CoderSource const&


# ::stappler::CoderSource::CoderSource(stappler::CoderSource&&)

## BRIEF

## CONTENT

Параметры:
* stappler::CoderSource&&


# ::stappler::CoderSource::operator=(stappler::CoderSource const&)

## BRIEF

## CONTENT

Параметры:
* stappler::CoderSource const&

Возвращает:
* stappler::CoderSource&

# ::stappler::CoderSource::operator=(stappler::CoderSource&&)

## BRIEF

## CONTENT

Параметры:
* stappler::CoderSource&&

Возвращает:
* stappler::CoderSource&

# ::stappler::CoderSource::data() const

## BRIEF

## CONTENT

Возвращает:
* uint8_t const*

# ::stappler::CoderSource::size() const

## BRIEF

## CONTENT

Возвращает:
* size_t

# ::stappler::CoderSource::empty() const

## BRIEF

## CONTENT

Возвращает:
* bool

# ::stappler::CoderSource::view() const

## BRIEF

## CONTENT

Возвращает:
* BytesViewTemplate<Endian::Network>

# ::stappler::CoderSource::operator[](size_t) const

## BRIEF

## CONTENT

Параметры:
* size_t

Возвращает:
* uint8_t

# ::stappler::CoderSource::read(uint8_t*,size_t)

## BRIEF

## CONTENT

Параметры:
* uint8_t*
* size_t

Возвращает:
* size_t

# ::stappler::CoderSource::seek(int64_t,io::Seek)

## BRIEF

## CONTENT

Параметры:
* int64_t
* io::Seek

Возвращает:
* size_t

# ::stappler::CoderSource::tell() const

## BRIEF

## CONTENT

Возвращает:
* size_t

# ::stappler::crypto::Sha512

## BRIEF

## CONTENT


# ::stappler::crypto::Sha512::_Ctx

## BRIEF

## CONTENT


# ::stappler::crypto::Sha512::_Ctx::length

## BRIEF

## CONTENT

Тип: uint64_t


# ::stappler::crypto::Sha512::_Ctx::state

## BRIEF

## CONTENT

Тип: uint64_t[8]


# ::stappler::crypto::Sha512::_Ctx::curlen

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::crypto::Sha512::_Ctx::buf

## BRIEF

## CONTENT

Тип: uint8_t[128]


# ::stappler::crypto::Sha512::Length

## BRIEF

## CONTENT

Тип: uint32_t const


# ::stappler::crypto::Sha512::Buf

## BRIEF

## CONTENT


# ::stappler::crypto::Sha512::make(stappler::CoderSource const&,stappler::StringView const&)

## BRIEF

## CONTENT

Параметры:
* stappler::CoderSource const&
* stappler::StringView const&

Возвращает:
* Buf

# ::stappler::crypto::Sha512::hmac(stappler::CoderSource const&,stappler::CoderSource const&)

## BRIEF

## CONTENT

Параметры:
* stappler::CoderSource const&
* stappler::CoderSource const&

Возвращает:
* Buf

# ::stappler::crypto::Sha512::perform<typename>(Args &&...)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Args

Параметры:
* Args &&...

Возвращает:
* Buf

# ::stappler::crypto::Sha512::Sha512()

## BRIEF

## CONTENT


# ::stappler::crypto::Sha512::init()

## BRIEF

## CONTENT

Возвращает:
* stappler::crypto::Sha512&

# ::stappler::crypto::Sha512::update(uint8_t const*,size_t)

## BRIEF

## CONTENT

Параметры:
* uint8_t const*
* size_t

Возвращает:
* stappler::crypto::Sha512&

# ::stappler::crypto::Sha512::update(stappler::CoderSource const&)

## BRIEF

## CONTENT

Параметры:
* stappler::CoderSource const&

Возвращает:
* stappler::crypto::Sha512&

# ::stappler::crypto::Sha512::_update<typename,typename>(T&&,Args &&...)

## BRIEF

## CONTENT

Параметры шаблона:
* typename T
* typename Args

Параметры:
* T&&
* Args &&...


# ::stappler::crypto::Sha512::_update<typename>(T&&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename T

Параметры:
* T&&


# ::stappler::crypto::Sha512::final()

## BRIEF

## CONTENT

Возвращает:
* Buf

# ::stappler::crypto::Sha512::final(uint8_t*)

## BRIEF

## CONTENT

Параметры:
* uint8_t*


# ::stappler::crypto::Sha512::ctx

## BRIEF

## CONTENT

Тип: stappler::crypto::Sha512::_Ctx


# ::stappler::crypto::Sha256

## BRIEF

## CONTENT


# ::stappler::crypto::Sha256::_Ctx

## BRIEF

## CONTENT


# ::stappler::crypto::Sha256::_Ctx::length

## BRIEF

## CONTENT

Тип: uint64_t


# ::stappler::crypto::Sha256::_Ctx::state

## BRIEF

## CONTENT

Тип: uint32_t[8]


# ::stappler::crypto::Sha256::_Ctx::curlen

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::crypto::Sha256::_Ctx::buf

## BRIEF

## CONTENT

Тип: uint8_t[64]


# ::stappler::crypto::Sha256::Length

## BRIEF

## CONTENT

Тип: uint32_t const


# ::stappler::crypto::Sha256::Buf

## BRIEF

## CONTENT


# ::stappler::crypto::Sha256::make(stappler::CoderSource const&,stappler::StringView const&)

## BRIEF

## CONTENT

Параметры:
* stappler::CoderSource const&
* stappler::StringView const&

Возвращает:
* Buf

# ::stappler::crypto::Sha256::hmac(stappler::CoderSource const&,stappler::CoderSource const&)

## BRIEF

## CONTENT

Параметры:
* stappler::CoderSource const&
* stappler::CoderSource const&

Возвращает:
* Buf

# ::stappler::crypto::Sha256::perform<typename>(Args &&...)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Args

Параметры:
* Args &&...

Возвращает:
* Buf

# ::stappler::crypto::Sha256::Sha256()

## BRIEF

## CONTENT


# ::stappler::crypto::Sha256::init()

## BRIEF

## CONTENT

Возвращает:
* stappler::crypto::Sha256&

# ::stappler::crypto::Sha256::update(uint8_t const*,size_t)

## BRIEF

## CONTENT

Параметры:
* uint8_t const*
* size_t

Возвращает:
* stappler::crypto::Sha256&

# ::stappler::crypto::Sha256::update(stappler::CoderSource const&)

## BRIEF

## CONTENT

Параметры:
* stappler::CoderSource const&

Возвращает:
* stappler::crypto::Sha256&

# ::stappler::crypto::Sha256::_update<typename,typename>(T&&,Args &&...)

## BRIEF

## CONTENT

Параметры шаблона:
* typename T
* typename Args

Параметры:
* T&&
* Args &&...


# ::stappler::crypto::Sha256::_update<typename>(T&&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename T

Параметры:
* T&&


# ::stappler::crypto::Sha256::final()

## BRIEF

## CONTENT

Возвращает:
* Buf

# ::stappler::crypto::Sha256::final(uint8_t*)

## BRIEF

## CONTENT

Параметры:
* uint8_t*


# ::stappler::crypto::Sha256::ctx

## BRIEF

## CONTENT

Тип: stappler::crypto::Sha256::_Ctx


# ::stappler::crypto::Sha512::perform<typename>(Args &&...)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Args

Параметры:
* Args &&...

Возвращает:
* Sha512::Buf

# ::stappler::crypto::Sha512::_update<typename,typename>(T&&,Args &&...)

## BRIEF

## CONTENT

Параметры шаблона:
* typename T
* typename Args

Параметры:
* T&&
* Args &&...


# ::stappler::crypto::Sha512::_update<typename>(T&&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename T

Параметры:
* T&&


# ::stappler::crypto::Sha256::perform<typename>(Args &&...)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Args

Параметры:
* Args &&...

Возвращает:
* Sha256::Buf

# ::stappler::crypto::Sha256::_update<typename,typename>(T&&,Args &&...)

## BRIEF

## CONTENT

Параметры шаблона:
* typename T
* typename Args

Параметры:
* T&&
* Args &&...


# ::stappler::crypto::Sha256::_update<typename>(T&&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename T

Параметры:
* T&&


# ::stappler::io::ProducerTraits<CoderSource>::ProducerTraits<CoderSource>

## BRIEF

## CONTENT


# ::stappler::io::ProducerTraits<CoderSource>::type

## BRIEF

## CONTENT


# ::stappler::io::ProducerTraits<CoderSource>::ReadFn(void*,uint8_t*,size_t)

## BRIEF

## CONTENT

Параметры:
* void*
* uint8_t*
* size_t

Возвращает:
* size_t

# ::stappler::io::ProducerTraits<CoderSource>::SeekFn(void*,int64_t,stappler::io::Seek)

## BRIEF

## CONTENT

Параметры:
* void*
* int64_t
* stappler::io::Seek

Возвращает:
* size_t

# ::stappler::io::ProducerTraits<CoderSource>::TellFn(void*)

## BRIEF

## CONTENT

Параметры:
* void*

Возвращает:
* size_t