Title: SPJsonWebToken.h


# STAPPLER_CRYPTO_SPJSONWEBTOKEN_H_

## BRIEF

Заголовок поддержки JsonWebToken и связанных технологий

## CONTENT

Заголовок поддержки JsonWebToken и связанных технологий. Поддержка расширена, добавлено кодирование через CBOR и шифрование ключами ГОСТ.


# ::stappler::JsonWebToken<typename>

## BRIEF

Тип для использования Json Web Token

## CONTENT

Тип для использования Json Web Token

Параметры шаблона:
* typename Interface - используемый интерфейс памяти


# ::stappler::JsonWebToken<typename>::String

## BRIEF

Тип строки

## CONTENT

Тип строки

# ::stappler::JsonWebToken<typename>::Bytes

## BRIEF

Тип байтового хранилища

## CONTENT

Тип байтового хранилища

# ::stappler::JsonWebToken<typename>::Value

## BRIEF

Тип нетипизированного значения

## CONTENT

Тип нетипизированного значения

# ::stappler::JsonWebToken<typename>::SigAlg

## BRIEF

Алгоритм подписи

## CONTENT

Алгоритм подписи

Значения:
* None
* HS256 - HMAC SHA2-256
* HS512 - HMAC SHA2-512
* RS256 - RSA 256
* RS512 - RSA 512
* ES256 - ECDSA 256
* ES512 - ECDSA 512
* GS256 - ГОСТ 256
* GS512 - ГОСТ 512


# ::stappler::JsonWebToken<typename>::getAlg(stappler::StringView)

## BRIEF

Возвращает алгоритм подписи по имени

## CONTENT

Возвращает алгоритм подписи по имени

Параметры:
* stappler::StringView

Возвращает:
* stappler::JsonWebToken::SigAlg

# ::stappler::JsonWebToken<typename>::getAlgName(stappler::JsonWebToken::SigAlg const&)

## BRIEF

Возвращает имя алгоритма подписи

## CONTENT

Возвращает имя алгоритма подписи

Параметры:
* stappler::JsonWebToken::SigAlg const&

Возвращает:
* stappler::StringView

# ::stappler::JsonWebToken<typename>::make(stappler::StringView,stappler::StringView,stappler::TimeInterval,stappler::StringView)

## BRIEF

Создаёт новый токен

## CONTENT

Создаёт новый токен

Параметры:
* stappler::StringView - выпускающий токен
* stappler::StringView - получатель токена
* stappler::TimeInterval - срок жизни токена
* stappler::StringView - собственный идентификатор токена

Возвращает:
* JsonWebToken<Interface>

# ::stappler::JsonWebToken<typename>::validate(stappler::StringView) const

## BRIEF

Валидирует подпись токена с помощью ключа

## CONTENT

Валидирует подпись токена с помощью ключа

Параметры:
* stappler::StringView

Возвращает:
* bool

# ::stappler::JsonWebToken<typename>::validate(stappler::BytesView) const

## BRIEF

Валидирует подпись токена с помощью ключа

## CONTENT

Валидирует подпись токена с помощью ключа

Параметры:
* stappler::BytesView

Возвращает:
* bool

# ::stappler::JsonWebToken<typename>::validate(crypto::PublicKey const&) const

## BRIEF

Валидирует подпись токена с помощью ключа

## CONTENT

Валидирует подпись токена с помощью ключа

Параметры:
* crypto::PublicKey const&

Возвращает:
* bool

# ::stappler::JsonWebToken<typename>::validatePayload(stappler::StringView,stappler::StringView) const

## BRIEF

Валидирует полезную нагрузку токена и его дату выпуска

## CONTENT

Валидирует полезную нагрузку токена и его дату выпуска

Параметры:
* stappler::StringView - выпускающий токен (iss)
* stappler::StringView - принимающий токен (aud)

Возвращает:
* bool

# ::stappler::JsonWebToken<typename>::validatePayload() const

## BRIEF

Валидирует полезную нагрузку токена и его дату выпуска

## CONTENT

Валидирует полезную нагрузку токена и его дату выпуска

Возвращает:
* bool

# ::stappler::JsonWebToken<typename>::setMaxAge(stappler::TimeInterval)

## BRIEF

Устанавливает срок жизни токена 

## CONTENT

Устанавливает срок жизни токена 

Параметры:
* stappler::TimeInterval


# ::stappler::JsonWebToken<typename>::data() const

## BRIEF

Возвращает полезную нагрузку токена

## CONTENT

Возвращает полезную нагрузку токена

Возвращает:
* Value

# ::stappler::JsonWebToken<typename>::exportPlain(data::EncodeFormat) const

## BRIEF

Экспортирует токен неподписанным

## CONTENT

Экспортирует токен неподписанным

Параметры:
* data::EncodeFormat - формат кодирования данных

Возвращает:
* String

# ::stappler::JsonWebToken<typename>::exportSigned(stappler::JsonWebToken::SigAlg,stappler::StringView,stappler::CoderSource const&,data::EncodeFormat) const

## BRIEF

Экспортирует токен подписанным

## CONTENT

Экспортирует токен подписанным. Если алгоритм не применим к ключу - возвращает пустую строку.

Параметры:
* stappler::JsonWebToken::SigAlg - алгоритм подписи
* stappler::StringView - ключ
* stappler::CoderSource const& - пароль ключа
* data::EncodeFormat - формат кодирования

Возвращает:
* String

# ::stappler::JsonWebToken<typename>::exportSigned(stappler::JsonWebToken::SigAlg,stappler::BytesView,stappler::CoderSource const&,data::EncodeFormat) const

## BRIEF

Экспортирует токен подписанным

## CONTENT

Экспортирует токен подписанным. Если алгоритм не применим к ключу - возвращает пустую строку.

Параметры:
* stappler::JsonWebToken::SigAlg - алгоритм подписи
* stappler::BytesView - ключ
* stappler::CoderSource const& - пароль ключа
* data::EncodeFormat - формат кодирования

Возвращает:
* String

# ::stappler::JsonWebToken<typename>::exportSigned(stappler::JsonWebToken::SigAlg,crypto::PrivateKey const&,data::EncodeFormat) const

## BRIEF

Экспортирует токен подписанным

## CONTENT

Экспортирует токен подписанным. Если алгоритм не применим к ключу - возвращает пустую строку.

Параметры:
* stappler::JsonWebToken::SigAlg - алгоритм подписи
* crypto::PrivateKey const& - ключ
* data::EncodeFormat - формат кодирования

Возвращает:
* String

# ::stappler::JsonWebToken<typename>::exportSigned(crypto::PrivateKey const&,data::EncodeFormat) const

## BRIEF

Экспортирует токен подписанным

## CONTENT

Экспортирует токен подписанным. Определяет алгоритм автоматически.

Параметры:
* crypto::PrivateKey const& - ключ
* data::EncodeFormat - формат кодирования

Возвращает:
* String

# ::stappler::JsonWebToken<typename>::JsonWebToken(stappler::JsonWebToken::Value&&,stappler::TimeInterval)

## BRIEF

Создаёт токен из полезной нагрузки и срока жизни

## CONTENT

Создаёт токен из полезной нагрузки и срока жизни

Параметры:
* stappler::JsonWebToken::Value&&
* stappler::TimeInterval


# ::stappler::JsonWebToken<typename>::JsonWebToken(stappler::StringView const&)

## BRIEF

Декодирует токен из строки

## CONTENT

Декодирует токен из строки

Параметры:
* stappler::StringView const&


# ::stappler::JsonWebToken<typename>::message

## BRIEF

Сообщение для подписи

## CONTENT

Сообщение для подписи

Тип: String


# ::stappler::JsonWebToken<typename>::header

## BRIEF

Данные заголовка

## CONTENT

Данные заголовка

Тип: Value


# ::stappler::JsonWebToken<typename>::payload

## BRIEF

Полезная нагрузка

## CONTENT

Полезная нагрузка

Тип: Value


# ::stappler::JsonWebToken<typename>::sig

## BRIEF

Данные подписи

## CONTENT

Данные подписи

Тип: Bytes


# ::stappler::JsonWebToken<typename>::alg

## BRIEF

Алгоритм подписи

## CONTENT

Алгоритм подписи

Тип: stappler::JsonWebToken::SigAlg


# ::stappler::JsonWebToken<typename>::kid

## BRIEF

Идентификатор ключа

## CONTENT

Идентификатор ключа

Тип: String


# ::stappler::AesToken<typename>

## BRIEF

Токен, кодируемый блочным шифром

## CONTENT

Токен, кодируемый блочным шифром. Бля получения ключа блочного шифра используется система отпечатка ключа, который дополняется псевдослучайным блоком данных. Для дешифровки получатель должен иметь ключ и возможность восстановить псевдослучайные данные, использованные при создании токена.

Используемый блочный шифр зависит от типа ключей: AES либо ГОСТ.

Параметры шаблона:
* typename Interface - интерфейс памяти

Базовые классы:
* data::WrapperTemplate<Interface>


# ::stappler::AesToken<typename>::String

## BRIEF

Тип строки

## CONTENT

Доступ: public

Тип строки


# ::stappler::AesToken<typename>::Bytes

## BRIEF

Байтовый тип

## CONTENT

Доступ: public

Байтовый тип

# ::stappler::AesToken<typename>::Value

## BRIEF

Нетипизированное значение

## CONTENT

Нетипизированное значение

Доступ: public


# ::stappler::AesToken<typename>::Function<typename>

## BRIEF

Функциональный тип

## CONTENT

Доступ: public

Функциональный тип

Параметры шаблона:
* typename T


# ::stappler::AesToken<typename>::Keys

## BRIEF

Набор ключей

## CONTENT

Доступ: public

Набор ключей

# ::stappler::AesToken<typename>::Keys::pub

## BRIEF

Публичный ключ

## CONTENT

Публичный ключ

Тип: crypto::PublicKey*


# ::stappler::AesToken<typename>::Keys::priv

## BRIEF

Закрытый ключ

## CONTENT

Закрытый ключ

Тип: crypto::PrivateKey*


# ::stappler::AesToken<typename>::Keys::secret

## BRIEF

Вспомогательный секретный блок

## CONTENT

Вспомогательный секретный блок (соль)

Тип: stappler::BytesView


# ::stappler::AesToken<typename>::Fingerprint

## BRIEF

Тип для вычисления отпечатка ключа

## CONTENT

Доступ: public

Тип для вычисления отпечатка ключа

# ::stappler::AesToken<typename>::Fingerprint::func

## BRIEF

Используемая хэш-функция

## CONTENT

Используемая хэш-функция

Тип: crypto::HashFunction


# ::stappler::AesToken<typename>::Fingerprint::fpb

## BRIEF

Данные отпечатка

## CONTENT

Данные отпечатка

Тип: stappler::BytesView


# ::stappler::AesToken<typename>::Fingerprint::cb

## BRIEF

Функция кодирования отпечатка

## CONTENT

Функция кодирования отпечатка

Тип: Function<void (const crypto::HashCoderCallback &)>


# ::stappler::AesToken<typename>::Fingerprint::Fingerprint(crypto::HashFunction,stappler::BytesView)

## BRIEF

Создаёт структуру кодирования отпечатка

## CONTENT

Создаёт структуру кодирования отпечатка

Параметры:
* crypto::HashFunction
* stappler::BytesView


# ::stappler::AesToken<typename>::Fingerprint::Fingerprint(crypto::HashFunction,Function<void (const Callback<void (const stappler::CoderSource &)>)>&&)

## BRIEF

Создаёт структуру кодирования отпечатка

## CONTENT

Создаёт структуру кодирования отпечатка

Параметры:
* crypto::HashFunction
* Function<void (const Callback<void (const stappler::CoderSource &)>)>&&


# ::stappler::AesToken<typename>::parse(stappler::StringView,stappler::AesToken::Fingerprint const&,stappler::StringView,stappler::StringView,stappler::AesToken::Keys)

## BRIEF

Декодирует шифроблок из JsonWebToken

## CONTENT

Доступ: public

Декодирует шифроблок из JsonWebToken

Параметры:
* stappler::StringView - токен
* stappler::AesToken::Fingerprint const& - структура вычисления отпечатка
* stappler::StringView - выпускающий токен
* stappler::StringView - получающий токен
* stappler::AesToken::Keys - набор ключей

Возвращает:
* AesToken<Interface>

# ::stappler::AesToken<typename>::parse(stappler::AesToken::Value const&,stappler::AesToken::Fingerprint const&,stappler::AesToken::Keys)

## BRIEF

Декодирует шифроблок из полезной нагрузки JsonWebToken

## CONTENT

Доступ: public

Декодирует шифроблок из полезной нагрузки JsonWebToken

Параметры:
* stappler::AesToken::Value const& - полезная нагрузка
* stappler::AesToken::Fingerprint const& - структура вычисления отпечатка
* stappler::AesToken::Keys - набор ключей

Возвращает:
* AesToken<Interface>

# ::stappler::AesToken<typename>::create(stappler::AesToken::Keys)

## BRIEF

Создаёт новый шифроблок

## CONTENT

Доступ: public

Создаёт новый шифроблок

Параметры:
* stappler::AesToken::Keys - набор ключей

Возвращает:
* AesToken<Interface>

# ::stappler::AesToken<typename>::operator bool() const

## BRIEF

Проверяет, что шифроблок работоспособен

## CONTENT

Доступ: public

Проверяет, что шифроблок работоспособен

Возвращает:
* bool

# ::stappler::AesToken<typename>::exportToken(stappler::StringView,stappler::AesToken::Fingerprint const&,stappler::TimeInterval,stappler::StringView) const

## BRIEF

Экспортирует шифроблок как JsonWebToken

## CONTENT

Доступ: public

Экспортирует шифроблок как JsonWebToken

Параметры:
* stappler::StringView - выпускающий токен
* stappler::AesToken::Fingerprint const& - структура создания отпечатка ключа
* stappler::TimeInterval - время действия токена
* stappler::StringView - собственный идентификатор токена

Возвращает:
* String

# ::stappler::AesToken<typename>::exportData(stappler::AesToken::Fingerprint const&) const

## BRIEF

Экспортирует шифроблок как данные

## CONTENT

Доступ: public

Экспортирует шифроблок как данные

Параметры:
* stappler::AesToken::Fingerprint const& - структура создания отпечатка ключа

Возвращает:
* Value

# ::stappler::AesToken<typename>::getFingerprint(stappler::AesToken::Fingerprint const&,stappler::Time,stappler::BytesView)

## BRIEF

Получает блочный ключ из отпечатка

## CONTENT

Доступ: protected

Получает блочный ключ из отпечатка

Параметры:
* stappler::AesToken::Fingerprint const& - структура отпечатка ключа
* stappler::Time - время создания блока
* stappler::BytesView - дополнительный случайный блок

Возвращает:
* std::array<uint8_t, 64>

# ::stappler::AesToken<typename>::encryptAes(crypto::BlockKey256 const&,stappler::AesToken::Value const&) const

## BRIEF

Шифрует данные

## CONTENT

Доступ: protected

Шифрует данные

Параметры:
* crypto::BlockKey256 const&
* stappler::AesToken::Value const&

Возвращает:
* Bytes

# ::stappler::AesToken<typename>::decryptAes(crypto::BlockKey256 const&,stappler::BytesView)

## BRIEF

Дешифрует данные

## CONTENT

Доступ: protected

Дешифрует данные

Параметры:
* crypto::BlockKey256 const&
* stappler::BytesView

Возвращает:
* Value

# ::stappler::AesToken<typename>::AesToken()

## BRIEF

Конструктор

## CONTENT

Доступ: protected

Конструктор

# ::stappler::AesToken<typename>::AesToken(stappler::AesToken::Keys)

## BRIEF

Конструктор с ключами

## CONTENT

Доступ: protected

Конструктор с ключами

Параметры:
* stappler::AesToken::Keys


# ::stappler::AesToken<typename>::AesToken(stappler::AesToken::Value&&,stappler::AesToken::Keys)

## BRIEF

Конструктор с данными и ключами

## CONTENT

Доступ: protected

Конструктор с данными и ключами

Параметры:
* stappler::AesToken::Value&&
* stappler::AesToken::Keys


# ::stappler::AesToken<typename>::_keys

## BRIEF

Ключи

## CONTENT

Доступ: protected

Ключи

Тип: stappler::AesToken::Keys

