Title: SPCrypto.h


# MODULES_CRYPTO_SPCRYPTO_H_

## BRIEF

## CONTENT


# ::mbedtls_pk_context

## BRIEF

## CONTENT


# ::sp_pk_context

## BRIEF

## CONTENT


# ::sp_pk_context::info

## BRIEF

## CONTENT

Тип: void*


# ::sp_pk_context::ctx

## BRIEF

## CONTENT

Тип: void*


# ::sp_pk_context::operator mbedtls_pk_context() const

## BRIEF

## CONTENT

Возвращает:
* mbedtls_pk_context

# ::sp_pubkey_t

## BRIEF

## CONTENT


# ::sp_privkey_t

## BRIEF

## CONTENT


# ::stappler::crypto::SignAlgorithm

## BRIEF

## CONTENT

Значения:
* RSA_SHA256
* RSA_SHA512
* ECDSA_SHA256
* ECDSA_SHA512


# ::stappler::crypto::KeyBits

## BRIEF

## CONTENT

Значения:
* _1024
* _2048
* _4096


# ::stappler::crypto::KeyFormat

## BRIEF

## CONTENT

Значения:
* PKCS1
* PKCS8
* RSA


# ::stappler::crypto::AesKey

## BRIEF

## CONTENT


# ::stappler::crypto::AesKey::data

## BRIEF

## CONTENT

Тип: std::array<uint8_t, 32>


# ::stappler::crypto::AesKey::version

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::crypto::PrivateKey

## BRIEF

## CONTENT


# ::stappler::crypto::PrivateKey::PrivateKey()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::crypto::PrivateKey::PrivateKey(stappler::BytesView,stappler::CoderSource const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::BytesView
* stappler::CoderSource const&


# ::stappler::crypto::PrivateKey::~PrivateKey()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::crypto::PrivateKey::PrivateKey(stappler::crypto::PrivateKey const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::crypto::PrivateKey const&


# ::stappler::crypto::PrivateKey::operator=(stappler::crypto::PrivateKey const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::crypto::PrivateKey const&

Возвращает:
* stappler::crypto::PrivateKey&

# ::stappler::crypto::PrivateKey::generate(stappler::crypto::KeyBits)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::crypto::KeyBits

Возвращает:
* bool

# ::stappler::crypto::PrivateKey::import(stappler::BytesView,stappler::CoderSource const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::BytesView
* stappler::CoderSource const&

Возвращает:
* bool

# ::stappler::crypto::PrivateKey::exportPublic() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::crypto::PublicKey

# ::stappler::crypto::PrivateKey::getKey() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* sp_privkey_t

# ::stappler::crypto::PrivateKey::operator bool() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::crypto::PrivateKey::exportPem(Callback<void (const uint8_t *, size_t)> const&,stappler::crypto::KeyFormat,stappler::CoderSource) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Callback<void (const uint8_t *, size_t)> const&
* stappler::crypto::KeyFormat
* stappler::CoderSource

Возвращает:
* bool

# ::stappler::crypto::PrivateKey::exportDer(Callback<void (const uint8_t *, size_t)> const&,stappler::crypto::KeyFormat,stappler::CoderSource) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Callback<void (const uint8_t *, size_t)> const&
* stappler::crypto::KeyFormat
* stappler::CoderSource

Возвращает:
* bool

# ::stappler::crypto::PrivateKey::sign(Callback<void (const uint8_t *, size_t)> const&,stappler::CoderSource,stappler::crypto::SignAlgorithm) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Callback<void (const uint8_t *, size_t)> const&
* stappler::CoderSource
* stappler::crypto::SignAlgorithm

Возвращает:
* bool

# ::stappler::crypto::PrivateKey::verify(stappler::CoderSource,stappler::BytesView,stappler::crypto::SignAlgorithm) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::CoderSource
* stappler::BytesView
* stappler::crypto::SignAlgorithm

Возвращает:
* bool

# ::stappler::crypto::PrivateKey::isSupported(stappler::crypto::KeyFormat) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::crypto::KeyFormat

Возвращает:
* bool

# ::stappler::crypto::PrivateKey::_loaded

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::crypto::PrivateKey::_valid

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::crypto::PrivateKey::_key

## BRIEF

## CONTENT

Доступ: protected

Тип: sp_privkey_t


# ::stappler::crypto::PublicKey

## BRIEF

## CONTENT


# ::stappler::crypto::PublicKey::PublicKey()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::crypto::PublicKey::PublicKey(stappler::BytesView)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::BytesView


# ::stappler::crypto::PublicKey::PublicKey(stappler::crypto::PrivateKey const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::crypto::PrivateKey const&


# ::stappler::crypto::PublicKey::~PublicKey()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::crypto::PublicKey::PublicKey(stappler::crypto::PublicKey const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::crypto::PublicKey const&


# ::stappler::crypto::PublicKey::operator=(stappler::crypto::PublicKey const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::crypto::PublicKey const&

Возвращает:
* stappler::crypto::PublicKey&

# ::stappler::crypto::PublicKey::import(stappler::BytesView)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::BytesView

Возвращает:
* bool

# ::stappler::crypto::PublicKey::importOpenSSH(stappler::StringView)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView

Возвращает:
* bool

# ::stappler::crypto::PublicKey::getKey() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* sp_pubkey_t

# ::stappler::crypto::PublicKey::operator bool() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::crypto::PublicKey::exportPem(Callback<void (const uint8_t *, size_t)> const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Callback<void (const uint8_t *, size_t)> const&

Возвращает:
* bool

# ::stappler::crypto::PublicKey::exportDer(Callback<void (const uint8_t *, size_t)> const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Callback<void (const uint8_t *, size_t)> const&

Возвращает:
* bool

# ::stappler::crypto::PublicKey::verify(stappler::CoderSource,stappler::BytesView,stappler::crypto::SignAlgorithm) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::CoderSource
* stappler::BytesView
* stappler::crypto::SignAlgorithm

Возвращает:
* bool

# ::stappler::crypto::PublicKey::_loaded

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::crypto::PublicKey::_valid

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::crypto::PublicKey::_key

## BRIEF

## CONTENT

Доступ: protected

Тип: sp_pubkey_t


# ::stappler::crypto::encryptAes(stappler::crypto::AesKey const&,stappler::BytesView,Callback<void (const uint8_t *, size_t)> const&)

## BRIEF

## CONTENT

Параметры:
* stappler::crypto::AesKey const&
* stappler::BytesView
* Callback<void (const uint8_t *, size_t)> const&

Возвращает:
* bool

# ::stappler::crypto::decryptAes(stappler::crypto::AesKey const&,stappler::BytesView,Callback<void (const uint8_t *, size_t)> const&)

## BRIEF

## CONTENT

Параметры:
* stappler::crypto::AesKey const&
* stappler::BytesView
* Callback<void (const uint8_t *, size_t)> const&

Возвращает:
* bool

# ::stappler::crypto::makeAesKey(stappler::BytesView,stappler::BytesView,uint32_t)

## BRIEF

## CONTENT

Параметры:
* stappler::BytesView
* stappler::BytesView
* uint32_t

Возвращает:
* stappler::crypto::AesKey

# ::stappler::crypto::makeAesKey(stappler::crypto::PrivateKey const&,stappler::BytesView,uint32_t)

## BRIEF

## CONTENT

Параметры:
* stappler::crypto::PrivateKey const&
* stappler::BytesView
* uint32_t

Возвращает:
* stappler::crypto::AesKey

# ::stappler::crypto::getAesVersion(stappler::BytesView)

## BRIEF

## CONTENT

Параметры:
* stappler::BytesView

Возвращает:
* uint32_t