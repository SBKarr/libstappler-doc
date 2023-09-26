Title: SPCrypto.h


# STAPPLER_CRYPTO_SPCRYPTO_H_

## BRIEF

Заголовок базовых криптографических функций

## CONTENT


Заголовок базовых криптографических функций. Определяет примитивы личного и публичного ключей, функции блочных шифров.

# ::stappler::crypto::SafeBlockEncoding

## BRIEF

Конфигурационная директива безопасного режима блочных ключей

## CONTENT

Конфигурационная директива безопасного режима блочных ключей. Если true - гарантирует единственность шифротекста для разных бэкэндов в блочных шифрах ценой производетльности. Если выключено - шифротексты могут различаться, но интероперабельность сохраняется. Также небезопасный режим более надёжен криптографически.

Тип: bool const

# ::stappler::crypto::BlockKeySize256

## BRIEF

Размер ключа для блочного шифра с 256-битным ключом

## CONTENT

Размер ключа для блочного шифра с 256-битным ключом. Очевидно, 32 байта.

Тип: size_t const


# ::stappler::crypto::Backend

## BRIEF

Варианты предустановленных криптографических библиотек, поверх которых работают примитивы

## CONTENT

Варианты предустановленных криптографических библиотек, поверх которых работают примитивы

Значения:
* Default - библиотека по умолчанию. Приоритетность выбора: GnuTLS, OpenSSL, MbedTLS
* MbedTLS - легковесная библиотека MbedTLS. Не поддерживает примитивы на основе ГОСТ
* OpenSSL - стандартная криптографическая библиотека большинства открытых систем OpenSSL. В стандартном варианте SDK поставляется с поддержкой ГОСТ на основе стандартной реализации ТК26
* GnuTLS - Криптографическая библиотека проекта GNU. Не поставляется с SDK из-за ограничений лицензии, но может использоваться, если установлена в целевой системе. Поддерживает ГОСТ в собственной реализации.
* Custom - предоставляемая пользователем реализация криптографических функций
* Embedded - встроенные в SDK реализации примитивов. На текущий момент, реализованы только SHA-2 и ГОСТ 34.11-2018 (хэш Стрибог)


# ::stappler::crypto::BackendFlags

## BRIEF

Флаги поддержки функций у библиотек

## CONTENT

Флаги поддержки функций у библиотек

Значения:
* None - нейтральный флаг
* SecureLibrary - функция реализована через библиотеку, проходящую проверки безопасности
* SupportsPKCS1 - поддерживается загрузка и экспорт ключей в формате PKCS#1
* SupportsPKCS8 - поддерживается загрузка и экспорт ключей в формате PKCS#8
* SupportsECDSA - поддерживается эллиптическая криптография
* SupportsAes - поддерживается блочный шифр AES
* SupportsGost3412_2015 - поддерживается блочный шифр Кузнечик (ГОСТ 34.12 2015)
* SupportsGost3410_2012 - поддерживается криптография на основе ключей ГОСТ Р 34.10 2012 / ГОСТ 34.10 2018


# ::stappler::crypto::operator|(stappler::crypto::BackendFlags const&,stappler::crypto::BackendFlags const&)

## BRIEF

Логический оператор флагов (создан автоматически)

## CONTENT

Логический оператор флагов (создан автоматически)

Параметры:
* stappler::crypto::BackendFlags const&
* stappler::crypto::BackendFlags const&

Возвращает:
* stappler::crypto::BackendFlags

# ::stappler::crypto::operator&(stappler::crypto::BackendFlags const&,stappler::crypto::BackendFlags const&)

## BRIEF

Логический оператор флагов (создан автоматически)

## CONTENT

Логический оператор флагов (создан автоматически)

Параметры:
* stappler::crypto::BackendFlags const&
* stappler::crypto::BackendFlags const&

Возвращает:
* stappler::crypto::BackendFlags

# ::stappler::crypto::operator^(stappler::crypto::BackendFlags const&,stappler::crypto::BackendFlags const&)

## BRIEF

Логический оператор флагов (создан автоматически)

## CONTENT

Логический оператор флагов (создан автоматически)

Параметры:
* stappler::crypto::BackendFlags const&
* stappler::crypto::BackendFlags const&

Возвращает:
* stappler::crypto::BackendFlags

# ::stappler::crypto::operator|=(stappler::crypto::BackendFlags&,stappler::crypto::BackendFlags const&)

## BRIEF

Логический оператор флагов (создан автоматически)

## CONTENT

Логический оператор флагов (создан автоматически)

Параметры:
* stappler::crypto::BackendFlags&
* stappler::crypto::BackendFlags const&

Возвращает:
* stappler::crypto::BackendFlags&

# ::stappler::crypto::operator&=(stappler::crypto::BackendFlags&,stappler::crypto::BackendFlags const&)

## BRIEF

Логический оператор флагов (создан автоматически)

## CONTENT

Логический оператор флагов (создан автоматически)

Параметры:
* stappler::crypto::BackendFlags&
* stappler::crypto::BackendFlags const&

Возвращает:
* stappler::crypto::BackendFlags&

# ::stappler::crypto::operator^=(stappler::crypto::BackendFlags&,stappler::crypto::BackendFlags const&)

## BRIEF

Логический оператор флагов (создан автоматически)

## CONTENT

Логический оператор флагов (создан автоматически)

Параметры:
* stappler::crypto::BackendFlags&
* stappler::crypto::BackendFlags const&

Возвращает:
* stappler::crypto::BackendFlags&

# ::stappler::crypto::operator==(stappler::crypto::BackendFlags const&,std::underlying_type<BackendFlags>::type const&)

## BRIEF

Логический оператор флагов (создан автоматически)

## CONTENT

Логический оператор флагов (создан автоматически)

Параметры:
* stappler::crypto::BackendFlags const&
* std::underlying_type<BackendFlags>::type const&

Возвращает:
* bool

# ::stappler::crypto::operator==(std::underlying_type<BackendFlags>::type const&,stappler::crypto::BackendFlags const&)

## BRIEF

Логический оператор флагов (создан автоматически)

## CONTENT

Логический оператор флагов (создан автоматически)

Параметры:
* std::underlying_type<BackendFlags>::type const&
* stappler::crypto::BackendFlags const&

Возвращает:
* bool

# ::stappler::crypto::operator!=(stappler::crypto::BackendFlags const&,std::underlying_type<BackendFlags>::type const&)

## BRIEF

Логический оператор флагов (создан автоматически)

## CONTENT

Логический оператор флагов (создан автоматически)

Параметры:
* stappler::crypto::BackendFlags const&
* std::underlying_type<BackendFlags>::type const&

Возвращает:
* bool

# ::stappler::crypto::operator!=(std::underlying_type<BackendFlags>::type const&,stappler::crypto::BackendFlags const&)

## BRIEF

Логический оператор флагов (создан автоматически)

## CONTENT

Логический оператор флагов (создан автоматически)

Параметры:
* std::underlying_type<BackendFlags>::type const&
* stappler::crypto::BackendFlags const&

Возвращает:
* bool

# ::stappler::crypto::operator~(stappler::crypto::BackendFlags const&)

## BRIEF

Логический оператор флагов (создан автоматически)

## CONTENT

Логический оператор флагов (создан автоматически)

Параметры:
* stappler::crypto::BackendFlags const&

Возвращает:
* stappler::crypto::BackendFlags

# ::stappler::crypto::BlockCipher

## BRIEF

Варианты поддерживаемых блочных шифров на уровне примитивов

## CONTENT

Варианты поддерживаемых блочных шифров на уровне примитивов

Значения:
* AES_CBC - AES в режиме CBC
* AES_CFB8 - AES в режиме CFB8
* Gost3412_2015_CTR_ACPKM - Кузнечик в режиме CTR_ACPKM


# ::stappler::crypto::KeyType

## BRIEF

Тип ключа

## CONTENT

Тип ключа

Значения:
* Unknown
* RSA
* DSA
* ECDSA
* GOST3410_2012_256
* GOST3410_2012_512
* EDDSA_ED448


# ::stappler::crypto::HashFunction

## BRIEF

Тип хеш-функции

## CONTENT

Тип хеш-функции

Значения:
* SHA_2
* GOST_3411

# ::stappler::crypto::SignAlgorithm

## BRIEF

Алгоритм подписи для примитива

## CONTENT

Алгоритм подписи для примитива

Значения:
* RSA_SHA256
* RSA_SHA512
* ECDSA_SHA256
* ECDSA_SHA512
* GOST_256
* GOST_512


# ::stappler::crypto::KeyBits

## BRIEF

Размер ключа RSA в битах

## CONTENT

Размер ключа RSA в битах

Значения:
* _1024
* _2048
* _4096


# ::stappler::crypto::KeyFormat

## BRIEF

Формат сохранения ключей

## CONTENT

Формат сохранения ключей

Значения:
* PKCS1 - формат PKCS#1, поддерживаются только RSA ключи
* PKCS8 - формат PKCS#8
* RSA - аналогично PKCS1


# ::stappler::crypto::KeyContext

## BRIEF

Структура внутреннего контекста ключа

## CONTENT

Структура внутреннего контекста ключа

# ::stappler::crypto::KeyContext::cryptoCtx

## BRIEF

Внутренний контекст криптографической библиотеки

## CONTENT

Внутренний контекст криптографической библиотеки

Тип: void*


# ::stappler::crypto::KeyContext::keyCtx

## BRIEF

Контекст примитива ключа из библиотеки

## CONTENT

Контекст примитива ключа из библиотеки

Тип: void*


# ::stappler::crypto::KeyContext::backendCtx

## BRIEF

Контекст библиотеки из SDK

## CONTENT

Контекст библиотеки из SDK

Тип: void*


# ::stappler::crypto::KeyContext::type

## BRIEF

Тип ключа

## CONTENT

Тип ключа

Тип: stappler::crypto::KeyType


# ::stappler::crypto::BlockKey256

## BRIEF

Структура блочного ключа для примитива шифроблока

## CONTENT

Структура блочного ключа для примитива шифроблока

# ::stappler::crypto::BlockKey256::data

## BRIEF

Блочный ключ в виде байт

## CONTENT

Блочный ключ в виде байт

Тип: std::array<uint8_t, BlockKeySize256>


# ::stappler::crypto::BlockKey256::version

## BRIEF

Версия механизма шифроблока

## CONTENT

Версия механизма шифроблока

Тип: uint16_t


# ::stappler::crypto::BlockKey256::cipher

## BRIEF

Используемый блочный шифр

## CONTENT

Используемый блочный шифр

Тип: stappler::crypto::BlockCipher


# ::stappler::crypto::BlockKey256::operator==(stappler::crypto::BlockKey256 const&) const

## BRIEF

Оператор сравнения ключа шифроблока по умолчанию

## CONTENT

Оператор сравнения ключа шифроблока по умолчанию

Параметры:
* stappler::crypto::BlockKey256 const&

Возвращает:
* bool - true если ключи совпадают

# ::stappler::crypto::BlockKey256::operator!=(stappler::crypto::BlockKey256 const&) const

## BRIEF

Оператор сравнения ключа шифроблока по умолчанию

## CONTENT

Оператор сравнения ключа шифроблока по умолчанию

Параметры:
* stappler::crypto::BlockKey256 const&

Возвращает:
* bool - true если ключи не совпадают

# ::stappler::crypto::BlockCryptoHeader

## BRIEF

Структура заголовка шифроблока

## CONTENT

Структура заголовка шифроблока. Соотвествует размеру одного стандартного блока шифрования (16 байт)

# ::stappler::crypto::BlockCryptoHeader::size

## BRIEF

Размер закодированных данных

## CONTENT

Размер закодированных данных

Тип: uint64_t


# ::stappler::crypto::BlockCryptoHeader::version

## BRIEF

Версия механизма шифроблоков

## CONTENT

Версия механизма шифроблоков

Тип: uint16_t


# ::stappler::crypto::BlockCryptoHeader::cipher

## BRIEF

Используемый блочный шифр

## CONTENT

Используемый блочный шифр

Тип: uint16_t


# ::stappler::crypto::BlockCryptoHeader::padding

## BRIEF

Зарезервированное пустое место

## CONTENT

Зарезервированное пустое место

Тип: uint32_t


# ::stappler::crypto::BlockInfo

## BRIEF

Структура информации о шифроблоке

## CONTENT

Структура информации о шифроблоке

# ::stappler::crypto::BlockInfo::dataSize

## BRIEF

Размер данных

## CONTENT

Размер данных

Тип: uint64_t


# ::stappler::crypto::BlockInfo::version

## BRIEF

Версия механизма шифроблока

## CONTENT

Версия механизма шифроблока

Тип: uint16_t


# ::stappler::crypto::BlockInfo::cipher

## BRIEF

Используемый блочный шифр

## CONTENT

Используемый блочный шифр

Тип: stappler::crypto::BlockCipher


# ::stappler::crypto::PrivateKey

## BRIEF

Примитив личного ключа

## CONTENT

Примитив личного ключа. Позволяет выполнять операции подписи, валидации подписи, загрузать и экспортировать ключи.

# ::stappler::crypto::PrivateKey::PrivateKey(stappler::crypto::Backend)

## BRIEF

Создаёт новый пустой ключ

## CONTENT

Доступ: public

Создаёт новый пустой ключ

Параметры:
* stappler::crypto::Backend - используемая криптографическая библиотека


# ::stappler::crypto::PrivateKey::PrivateKey(stappler::crypto::Backend,stappler::BytesView,stappler::CoderSource const&)

## BRIEF

Загрузает ключ из данных

## CONTENT

Доступ: public

Загрузает ключ из данных

Параметры:
* stappler::crypto::Backend - используемая криптографическая библиотека
* stappler::BytesView - данные ключа
* stappler::CoderSource const& - пароль от ключа, если есть


# ::stappler::crypto::PrivateKey::PrivateKey(stappler::BytesView,stappler::CoderSource const&)

## BRIEF

Загрузает ключ из данных

## CONTENT

Доступ: public

Загрузает ключ из данных. Использует библиотеку по умолчанию.

Параметры:
* stappler::BytesView - данные ключа
* stappler::CoderSource const& - пароль от ключа, если есть


# ::stappler::crypto::PrivateKey::~PrivateKey()

## BRIEF

Уничтожает структуру ключа

## CONTENT

Доступ: public

Уничтожает структуру ключа

# ::stappler::crypto::PrivateKey::PrivateKey(stappler::crypto::PrivateKey const&)

## BRIEF

Запрет копирования ключа

## CONTENT

Доступ: public

Запрет копирования ключа

Параметры:
* stappler::crypto::PrivateKey const&


# ::stappler::crypto::PrivateKey::operator=(stappler::crypto::PrivateKey const&)

## BRIEF

Запрет копирования ключа

## CONTENT

Доступ: public

Запрет копирования ключа

Параметры:
* stappler::crypto::PrivateKey const&

Возвращает:
* stappler::crypto::PrivateKey&

# ::stappler::crypto::PrivateKey::generate(stappler::crypto::KeyBits)

## BRIEF

Создаёт новый RSA ключ

## CONTENT

Доступ: public

Создаёт новый RSA ключ

Параметры:
* stappler::crypto::KeyBits - длина ключа

Возвращает:
* bool - true если ключ успешно создан

# ::stappler::crypto::PrivateKey::import(stappler::BytesView,stappler::CoderSource const&)

## BRIEF

Импортирует личный ключ из данных

## CONTENT

Доступ: public

Импортирует личный ключ из данных

Параметры:
* stappler::BytesView - данные ключа
* stappler::CoderSource const& - пароль от ключа, если есть

Возвращает:
* bool - true если ключ успешно загружен

# ::stappler::crypto::PrivateKey::exportPublic() const

## BRIEF

Экспортирует публичный ключ из личного ключа

## CONTENT

Доступ: public

Экспортирует публичный ключ из личного ключа

Возвращает:
* stappler::crypto::PublicKey - экспортированный публичный ключ

# ::stappler::crypto::PrivateKey::getBackend() const

## BRIEF

Возвращает используемую криптобиблиотеку

## CONTENT

Доступ: public

Возвращает используемую криптобиблиотеку

Возвращает:
* stappler::crypto::Backend

# ::stappler::crypto::PrivateKey::getKey() const

## BRIEF

Возвращает внутренний контекст ключа

## CONTENT

Доступ: public

Возвращает внутренний контекст ключа

Возвращает:
* stappler::crypto::KeyContext

# ::stappler::crypto::PrivateKey::getType() const

## BRIEF

Возвращает тип ключа

## CONTENT

Возвращает тип ключа

Доступ: public

Возвращает:
* stappler::crypto::KeyType

# ::stappler::crypto::PrivateKey::operator bool() const

## BRIEF

Проверяет примитив ключа на работоспособность

## CONTENT

Доступ: public

Проверяет примитив ключа на работоспособность

Возвращает:
* bool - true если ключ пригоден к работе

# ::stappler::crypto::PrivateKey::exportPem(Callback<void (const uint8_t *, size_t)> const&,stappler::crypto::KeyFormat,stappler::CoderSource const&) const

## BRIEF

Экспортирует ключ в формате PEM

## CONTENT

Экспортирует ключ в формате PEM

Доступ: public

Параметры:
* Callback<void (const uint8_t *, size_t)> const& - обратный вызов, в который будет передан результат экспорта (указатель на данные и их размер)
* stappler::crypto::KeyFormat - Формат ключа PKCS
* stappler::CoderSource const& - Пароль для шифрования ключа (постой - не шифровать ключ)

Возвращает:
* bool - true если ключ успешно экспортирован

# ::stappler::crypto::PrivateKey::exportPem(Callback<void (const uint8_t *, size_t)> const&,stappler::CoderSource const&) const

## BRIEF

Экспортирует ключ в формате PEM

## CONTENT

Доступ: public

Экспортирует ключ в формате PEM, использует PKCS8

Параметры:
* Callback<void (const uint8_t *, size_t)> const& - обратный вызов, в который будет передан результат экспорта (указатель на данные и их размер)
* stappler::CoderSource const& - Пароль для шифрования ключа (постой - не шифровать ключ)

Возвращает:
* bool - true если ключ успешно экспортирован

# ::stappler::crypto::PrivateKey::exportDer(Callback<void (const uint8_t *, size_t)> const&,stappler::crypto::KeyFormat,stappler::CoderSource const&) const

## BRIEF

Экспортирует ключ в формате DER

## CONTENT

Доступ: public

Экспортирует ключ в формате DER

Параметры:
* Callback<void (const uint8_t *, size_t)> const& - обратный вызов, в который будет передан результат экспорта (указатель на данные и их размер)
* stappler::crypto::KeyFormat - Формат ключа PKCS
* stappler::CoderSource const& - Пароль для шифрования ключа (постой - не шифровать ключ)

Возвращает:
* bool - true если ключ успешно экспортирован

# ::stappler::crypto::PrivateKey::exportDer(Callback<void (const uint8_t *, size_t)> const&,stappler::CoderSource const&) const

## BRIEF

Экспортирует ключ в формате DER

## CONTENT

Доступ: public

Экспортирует ключ в формате DER, использует PKCS8

Параметры:
* Callback<void (const uint8_t *, size_t)> const& - обратный вызов, в который будет передан результат экспорта (указатель на данные и их размер)
* stappler::CoderSource const& - Пароль для шифрования ключа (постой - не шифровать ключ)

Возвращает:
* bool - true если ключ успешно экспортирован

# ::stappler::crypto::PrivateKey::sign(Callback<void (const uint8_t *, size_t)> const&,stappler::CoderSource const&,stappler::crypto::SignAlgorithm) const

## BRIEF

Генерирует подпись для блока данных

## CONTENT

Доступ: public

Генерирует подпись для блока данных

Параметры:
* Callback<void (const uint8_t *, size_t)> const& - обратный вызов, в который будет передан результат подписи (указатель на данные и их размер)
* stappler::CoderSource const& - данные для подписи
* stappler::crypto::SignAlgorithm - алгоритм подписи

Возвращает:
* bool - true если подпись успешна

# ::stappler::crypto::PrivateKey::verify(stappler::CoderSource const&,stappler::BytesView,stappler::crypto::SignAlgorithm) const

## BRIEF

Верифицирует подпись для данных

## CONTENT

Доступ: public

Верифицирует подпись для данных

Параметры:
* stappler::CoderSource const& - данные для проверки
* stappler::BytesView - данные подписи
* stappler::crypto::SignAlgorithm - алгоритм подписи

Возвращает:
* bool - true если подпись верна

# ::stappler::crypto::PrivateKey::fingerprint(Callback<void (const uint8_t *, size_t)> const&,stappler::CoderSource const&) const

## BRIEF

Подписывает данные, используя характерный отпечаток ключа и данных

## CONTENT

Доступ: public

Подписывает данные, используя характерный отпечаток ключа и данных. Для алгоритмов RSA идентично обычной подписи с соотвествующим ключу алгоритмом.

Эллиптическая криптография (в т.ч. ГОСТ) предполагает случайность данных подписи. В этом случае блок энтропии генерируется на основе данных ключа и исходных данных для подписи, чтобы этот блок энтропии мог быть восстановлен при необходимости.

Такая подпись не должна использоваться для целей верификации, только для цели подтвержения владения ключом при расшифровке криптоблоков. Использовние такй подписи для целей верификации с алгоритмами эллиптической криптографии может скомпрометировать личный ключ.

Параметры:
* Callback<void (const uint8_t *, size_t)> const& - обратный вызов, в который будет передан результат подписи (указатель на данные и их размер)
* stappler::CoderSource const& - данные для подписи

Возвращает:
* bool - true если подпись успешна

# ::stappler::crypto::PrivateKey::isSupported(stappler::crypto::KeyFormat) const

## BRIEF

Проверяет, поддерживается ли PKCS формат

## CONTENT

Доступ: public

Проверяет, поддерживается ли PKCS формат

Параметры:
* stappler::crypto::KeyFormat

Возвращает:
* bool

# ::stappler::crypto::PrivateKey::encrypt(Callback<void (const uint8_t *, size_t)> const&,stappler::CoderSource const&)

## BRIEF

Зашифровать блок данных с использованием ключа

## CONTENT

Доступ: public

Зашифровать блок данных с использованием ключа. Такое шифрование для RSA крайне затратно, а для эллиптической криптографии ограничено блоком в 32 байта для шифрования бочного ключа.

Используется для согласования блочных ключей

Параметры:
* Callback<void (const uint8_t *, size_t)> const& - обратный вызов, в который будет передан результат шифрования (указатель на данные и их размер)
* stappler::CoderSource const& - данные для шифрования

Возвращает:
* bool - true если шифрование успешно

# ::stappler::crypto::PrivateKey::decrypt(Callback<void (const uint8_t *, size_t)> const&,stappler::CoderSource const&)

## BRIEF

Расшифровать блок данных с использованием ключа

## CONTENT

Доступ: public

Расшифровать блок данных с использованием ключа

Параметры:
* Callback<void (const uint8_t *, size_t)> const& - обратный вызов, в который будет передан результат расшифровки (указатель на данные и их размер)
* stappler::CoderSource const& - данные для расшифровки

Возвращает:
* bool - true если расшифровка успешна (в т.ч. даже если ключ неверен)

# ::stappler::crypto::PrivateKey::_loaded

## BRIEF

Флаг, показывающий, что ключ загружен

## CONTENT

Доступ: protected

Флаг, показывающий, что ключ загружен

Тип: bool


# ::stappler::crypto::PrivateKey::_valid

## BRIEF

Флаг, показывающий, что ключ действителен

## CONTENT

Доступ: protected

Флаг, показывающий, что ключ действителен

Тип: bool


# ::stappler::crypto::PrivateKey::_key

## BRIEF

Структура контекста ключа

## CONTENT

Доступ: protected

Структура контекста ключа

Тип: stappler::crypto::KeyContext


# ::stappler::crypto::PublicKey

## BRIEF

Примитив публичного ключа

## CONTENT

Примитив публичного ключа. Позволяет верифицировать подписанные данные

# ::stappler::crypto::PublicKey::PublicKey(stappler::crypto::Backend)

## BRIEF

Создаёт неинициализированный ключ

## CONTENT

Доступ: public

Создаёт неинициализированный ключ

Параметры:
* stappler::crypto::Backend - используемая библиотека


# ::stappler::crypto::PublicKey::PublicKey(stappler::crypto::Backend,stappler::BytesView)

## BRIEF

Читает ключ из блока данных

## CONTENT

Доступ: public

Читает ключ из блока данных

Параметры:
* stappler::crypto::Backend - используемая библиотека
* stappler::BytesView - данные ключа в памяти


# ::stappler::crypto::PublicKey::PublicKey(stappler::BytesView)

## BRIEF

Читает ключ из блока данных

## CONTENT

Доступ: public

Читает ключ из блока данных. Используется библиотек по умолчанию.

Параметры:
* stappler::BytesView - данные ключа в памяти


# ::stappler::crypto::PublicKey::PublicKey(stappler::crypto::PrivateKey const&)

## BRIEF

Создаёт публичный ключ из личного ключа

## CONTENT

Доступ: public

Создаёт публичный ключ из личного ключа

Параметры:
* stappler::crypto::PrivateKey const&


# ::stappler::crypto::PublicKey::~PublicKey()

## BRIEF

Удаляет ключ

## CONTENT

Доступ: public

Удаляет ключ

# ::stappler::crypto::PublicKey::PublicKey(stappler::crypto::PublicKey const&)

## BRIEF

Запрет копирования ключа

## CONTENT

Доступ: public

Запрет копирования ключа

Параметры:
* stappler::crypto::PublicKey const&


# ::stappler::crypto::PublicKey::operator=(stappler::crypto::PublicKey const&)

## BRIEF

Запрет копирования ключа

## CONTENT

Доступ: public

Запрет копирования ключа

Параметры:
* stappler::crypto::PublicKey const&

Возвращает:
* stappler::crypto::PublicKey&

# ::stappler::crypto::PublicKey::import(stappler::BytesView)

## BRIEF

Импортирует ключ из данных

## CONTENT

Доступ: public

Импортирует ключ из данных

Параметры:
* stappler::BytesView - данные ключа

Возвращает:
* bool - true если ключ успешно импортирован

# ::stappler::crypto::PublicKey::importOpenSSH(stappler::StringView)

## BRIEF

Импортирует ключ из ключа OpenSSH

## CONTENT

Доступ: public

Импортирует ключ из ключа OpenSSH

Параметры:
* stappler::StringView - строка публичного ключа

Возвращает:
* bool - true если ключ успешно импортирован

# ::stappler::crypto::PublicKey::getBackend() const

## BRIEF

Возвращает используемую библиотеку

## CONTENT

Доступ: public

Возвращает используемую библиотеку

Возвращает:
* stappler::crypto::Backend

# ::stappler::crypto::PublicKey::getKey() const

## BRIEF

Возвращает текущий контекст ключа

## CONTENT

Доступ: public

Возвращает текущий контекст ключа

Возвращает:
* stappler::crypto::KeyContext

# ::stappler::crypto::PublicKey::getType() const

## BRIEF

Возвращает тип ключа

## CONTENT

Доступ: public

Возвращает тип ключа

Возвращает:
* stappler::crypto::KeyType

# ::stappler::crypto::PublicKey::operator bool() const

## BRIEF

Проверяет, доступен ли ключ для использования

## CONTENT

Доступ: public

Проверяет, доступен ли ключ для использования

Возвращает:
* bool

# ::stappler::crypto::PublicKey::exportPem(Callback<void (const uint8_t *, size_t)> const&) const

## BRIEF

Экспортирует ключ в формате PEM

## CONTENT

Доступ: public

Экспортирует ключ в формате PEM

Параметры:
* Callback<void (const uint8_t *, size_t)> const& - функция обратного вызова, вызывается с данными экспортированного ключа: указатель на начало данных и длина данных

Возвращает:
* bool - true если ключ успешно экспортирован

# ::stappler::crypto::PublicKey::exportDer(Callback<void (const uint8_t *, size_t)> const&) const

## BRIEF

Экспортирует ключ в формате DER

## CONTENT

Доступ: public

Экспортирует ключ в формате DER

Параметры:
* Callback<void (const uint8_t *, size_t)> const& - функция обратного вызова, вызывается с данными экспортированного ключа: указатель на начало данных и длина данных

Возвращает:
* bool - true если ключ успешно экспортирован

# ::stappler::crypto::PublicKey::verify(stappler::CoderSource const&,stappler::BytesView,stappler::crypto::SignAlgorithm) const

## BRIEF

Верифицирует подпись данных

## CONTENT

Доступ: public

Верифицирует подпись данных

Параметры:
* stappler::CoderSource const& - исходные данные
* stappler::BytesView - данные подписи
* stappler::crypto::SignAlgorithm - алгоритм подписи

Возвращает:
* bool - true если подпись соотвествует ключу

# ::stappler::crypto::PublicKey::encrypt(Callback<void (const uint8_t *, size_t)> const&,stappler::CoderSource const&)

## BRIEF

Шифрует блок данных с использованием ключа

## CONTENT

Доступ: public

Шифрует блок данных с использованием ключа. Такое шифрование для RSA крайне затратно, а для эллиптической криптографии ограничено блоком в 32 байта для шифрования бочного ключа.

Используется для согласования блочных ключей

Параметры:
* Callback<void (const uint8_t *, size_t)> const& - обратный вызов, в который будет передан результат шифрования (указатель на данные и их размер)
* stappler::CoderSource const& - данные для шифрования

Возвращает:
* bool - true если шифрование успешно

# ::stappler::crypto::PublicKey::_loaded

## BRIEF

Флаг, показывающий, что ключ успешно загружен

## CONTENT

Доступ: protected

Флаг, показывающий, что ключ успешно загружен

Тип: bool


# ::stappler::crypto::PublicKey::_valid

## BRIEF

Флаг, показывающий, что ключ можно использовать

## CONTENT

Доступ: protected

Флаг, показывающий, что ключ можно использовать

Тип: bool


# ::stappler::crypto::PublicKey::_key

## BRIEF

Текущий контекст ключа

## CONTENT

Доступ: protected

Текущий контекст ключа

Тип: stappler::crypto::KeyContext


# ::stappler::crypto::getBlockSize(stappler::crypto::BlockCipher)

## BRIEF

Возвращает размер блока для блочного шифра

## CONTENT


Возвращает размер блока для блочного шифра

Параметры:
* stappler::crypto::BlockCipher

Возвращает:
* size_t - размер блока в байтах

# ::stappler::crypto::listBackends(Callback<void (stappler::crypto::Backend, stappler::StringView, stappler::crypto::BackendFlags)> const&)

## BRIEF

Перечисляет доступные криптобиблиотеки и их функции

## CONTENT

Перечисляет доступные криптобиблиотеки и их функции

Параметры:
* Callback<void (stappler::crypto::Backend, stappler::StringView, stappler::crypto::BackendFlags)> const& - вызывается для каждой доступной библиотеки, показыая её тип, название и доступные функции в виде флагов


# ::stappler::crypto::isPemKey(stappler::BytesView)

## BRIEF

Проверяет, содержится ли в данных ключ в формате PEM.

## CONTENT

Проверяет, содержится ли в данных ключ в формате PEM. В противном случае, предполагается ключ в формате DER

Параметры:
* stappler::BytesView

Возвращает:
* bool

# ::stappler::crypto::encryptBlock(stappler::crypto::BlockKey256 const&,stappler::BytesView,Callback<void (const uint8_t *, size_t)> const&)

## BRIEF

Создаёт новый шифроблок на основе ключа

## CONTENT

Создаёт новый шифроблок на основе ключа. Использует библиотеку по умолчанию.

Параметры:
* stappler::crypto::BlockKey256 const& - используемый ключ
* stappler::BytesView - данные для шифрования
* Callback<void (const uint8_t *, size_t)> const& - вызов, возвращающий зашифрованные данные (указатель на начало, размер блока)

Возвращает:
* bool - true если операция успешна

# ::stappler::crypto::encryptBlock(stappler::crypto::Backend,stappler::crypto::BlockKey256 const&,stappler::BytesView,Callback<void (const uint8_t *, size_t)> const&)

## BRIEF

Создаёт новый шифроблок на основе ключа

## CONTENT

Создаёт новый шифроблок на основе ключа

Параметры:
* stappler::crypto::Backend - используемая библиотека
* stappler::crypto::BlockKey256 const& - используемый ключ
* stappler::BytesView - данные для шифрования
* Callback<void (const uint8_t *, size_t)> const& - вызов, возвращающий зашифрованные данные (указатель на начало, размер блока)

Возвращает:
* bool - true если операция успешна

# ::stappler::crypto::decryptBlock(stappler::crypto::BlockKey256 const&,stappler::BytesView,Callback<void (const uint8_t *, size_t)> const&)

## BRIEF

Расшифровывает шифроблок с помощью ключа

## CONTENT

Расшифровывает шифроблок с помощью ключа. Использует библиотеку по умолчанию.

Параметры:
* stappler::crypto::BlockKey256 const& - используемый ключ
* stappler::BytesView - данные шифроблока
* Callback<void (const uint8_t *, size_t)> const& - вызов, возвращающий расшифрованные данные (указатель на начало, размер блока)

Возвращает:
* bool - true если операция успешна

# ::stappler::crypto::decryptBlock(stappler::crypto::Backend,stappler::crypto::BlockKey256 const&,stappler::BytesView,Callback<void (const uint8_t *, size_t)> const&)

## BRIEF

Расшифровывает шифроблок с помощью ключа

## CONTENT

Расшифровывает шифроблок с помощью ключа

Параметры:
* stappler::crypto::Backend - используемая библиотека
* stappler::crypto::BlockKey256 const& - используемый ключ
* stappler::BytesView - данные шифроблока
* Callback<void (const uint8_t *, size_t)> const& - вызов, возвращающий расшифрованные данные (указатель на начало, размер блока)

Возвращает:
* bool - true если операция успешна

# ::stappler::crypto::makeBlockKey(stappler::crypto::Backend,stappler::BytesView,stappler::BytesView,stappler::crypto::BlockCipher,uint32_t)

## BRIEF

Создаёт ключ для шифрования и дешифрования блока.

## CONTENT

Создаёт ключ для шифрования и дешифрования блока.

Функция используется для создания и воссоздания блочного ключа на основе одного и того же личного ключа и дополнительных данных, и позволяет шифровать данные, расшифровать которые можно будет, лишь обладая двумя составными частями алгоритма - личным ключом и дополниетльных характеризующим хэшем.

Параметры:
* stappler::crypto::Backend - используемая библиотека
* stappler::BytesView - данные личного ключа
* stappler::BytesView - уникальный хэш, на основе которого создаётся ключ
* stappler::crypto::BlockCipher - используемый блочный шифр
* uint32_t - используемая версия алгоритма (текущая актуальная - 2)

Возвращает:
* stappler::crypto::BlockKey256

# ::stappler::crypto::makeBlockKey(stappler::BytesView,stappler::BytesView,stappler::crypto::BlockCipher,uint32_t)

## BRIEF

Создаёт ключ для шифрования и дешифрования блока.

## CONTENT

Создаёт ключ для шифрования и дешифрования блока. Испоьзует библиотеку по умолчанию.

Функция используется для создания и воссоздания блочного ключа на основе одного и того же личного ключа и дополнительных данных, и позволяет шифровать данные, расшифровать которые можно будет, лишь обладая двумя составными частями алгоритма - личным ключом и дополниетльных характеризующим хэшем.

Параметры:
* stappler::BytesView - данные личного ключа
* stappler::BytesView - уникальный хэш, на основе которого создаётся ключ
* stappler::crypto::BlockCipher - используемый блочный шифр
* uint32_t - используемая версия алгоритма (текущая актуальная - 2)

Возвращает:
* stappler::crypto::BlockKey256

# ::stappler::crypto::makeBlockKey(stappler::crypto::PrivateKey const&,stappler::BytesView,stappler::crypto::BlockCipher,uint32_t)

## BRIEF

Создаёт ключ для шифрования и дешифрования блока.

## CONTENT

Создаёт ключ для шифрования и дешифрования блока. Использует библиотеку из личного ключа

Функция используется для создания и воссоздания блочного ключа на основе одного и того же личного ключа и дополнительных данных, и позволяет шифровать данные, расшифровать которые можно будет, лишь обладая двумя составными частями алгоритма - личным ключом и дополниетльных характеризующим хэшем.

Параметры:
* stappler::crypto::PrivateKey const& - личный ключ
* stappler::BytesView - уникальный хэш, на основе которого создаётся ключ
* stappler::crypto::BlockCipher - используемый блочный шифр
* uint32_t - используемая версия алгоритма (текущая актуальная - 2)

Возвращает:
* stappler::crypto::BlockKey256

# ::stappler::crypto::getBlockInfo(stappler::BytesView)

## BRIEF

Читает информацию из заголовка шифроблока

## CONTENT

Читает информацию из заголовка шифроблока

Параметры:
* stappler::BytesView - шифроблок

Возвращает:
* stappler::crypto::BlockInfo

# ::stappler::crypto::HashCoderCallback

## BRIEF

Функция, вызываемая для добавления данных в контекст криптографического хэша.

## CONTENT

Функция, вызываемая для добавления данных в контекст криптографического хэша. Используется при создании хэшей в функции обратного вызова.

# ::stappler::crypto::hash256(stappler::crypto::Backend,Callback<void (const stappler::crypto::HashCoderCallback &)> const&,stappler::crypto::HashFunction)

## BRIEF

Вычисляет 256-битный хэш

## CONTENT

Вычисляет 256-битный хэш

Параметры:
* stappler::crypto::Backend - используемая библиотека
* Callback<void (const stappler::crypto::HashCoderCallback &)> const& - функция, которая будет вызвана в контексте хэша, позволяющая добавить в хэш новые данные
* stappler::crypto::HashFunction - тип используемой хэш-функции

Возвращает:
* Sha256::Buf

# ::stappler::crypto::hash256(Callback<void (const stappler::crypto::HashCoderCallback &)> const&,stappler::crypto::HashFunction)

## BRIEF

Вычисляет 256-битный хэш

## CONTENT

Вычисляет 256-битный хэш. Использует библиотеку по умолчанию

Параметры:
* Callback<void (const stappler::crypto::HashCoderCallback &)> const& - функция, которая будет вызвана в контексте хэша, позволяющая добавить в хэш новые данные
* stappler::crypto::HashFunction - тип используемой хэш-функции

Возвращает:
* Sha256::Buf

# ::stappler::crypto::hash256(stappler::crypto::Backend,stappler::CoderSource const&,stappler::crypto::HashFunction)

## BRIEF

Вычисляет 256-битный хэш

## CONTENT

Вычисляет 256-битный хэш

Параметры:
* stappler::crypto::Backend - используемая библиотека
* stappler::CoderSource const& - данные для хэширования
* stappler::crypto::HashFunction - тип используемой хэш-функции

Возвращает:
* Sha256::Buf

# ::stappler::crypto::hash256(stappler::CoderSource const&,stappler::crypto::HashFunction)

## BRIEF

Вычисляет 256-битный хэш

## CONTENT

Вычисляет 256-битный хэш. Использует библиотеку по умолчанию

Параметры:
* stappler::CoderSource const& - данные для хэширования
* stappler::crypto::HashFunction - тип используемой хэш-функции

Возвращает:
* Sha256::Buf

# ::stappler::crypto::hash512(stappler::crypto::Backend,Callback<void (const stappler::crypto::HashCoderCallback &)> const&,stappler::crypto::HashFunction)

## BRIEF

Вычисляет 512-битный хэш

## CONTENT

Вычисляет 512-битный хэш

Параметры:
* stappler::crypto::Backend - используемая библиотека
* Callback<void (const stappler::crypto::HashCoderCallback &)> const& - функция, которая будет вызвана в контексте хэша, позволяющая добавить в хэш новые данные
* stappler::crypto::HashFunction - тип используемой хэш-функции

Возвращает:
* Sha512::Buf

# ::stappler::crypto::hash512(Callback<void (const stappler::crypto::HashCoderCallback &)> const&,stappler::crypto::HashFunction)

## BRIEF

Вычисляет 512-битный хэш

## CONTENT

Вычисляет 512-битный хэш. Использует библиотеку по умолчанию

Параметры:
* Callback<void (const stappler::crypto::HashCoderCallback &)> const& - функция, которая будет вызвана в контексте хэша, позволяющая добавить в хэш новые данные
* stappler::crypto::HashFunction - тип используемой хэш-функции

Возвращает:
* Sha512::Buf

# ::stappler::crypto::hash512(stappler::crypto::Backend,stappler::CoderSource const&,stappler::crypto::HashFunction)

## BRIEF

Вычисляет 512-битный хэш

## CONTENT

Вычисляет 512-битный хэш

Параметры:
* stappler::crypto::Backend - используемая библиотека
* stappler::CoderSource const& - данные для хэширования
* stappler::crypto::HashFunction - тип используемой хэш-функции

Возвращает:
* Sha512::Buf

# ::stappler::crypto::hash512(stappler::CoderSource const&,stappler::crypto::HashFunction)

## BRIEF

Вычисляет 512-битный хэш

## CONTENT

Вычисляет 512-битный хэш. Использует библиотеку по умолчанию

Параметры:
* stappler::CoderSource const& - данные для хэширования
* stappler::crypto::HashFunction - тип используемой хэш-функции

Возвращает:
* Sha512::Buf