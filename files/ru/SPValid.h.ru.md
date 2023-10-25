Title: SPValid.h


# STAPPLER_CORE_UTILS_SPVALID_H_

## BRIEF

Заголовок функций валидации различных строк

## CONTENT

Заголовок функций валидации различных строк


# ::stappler::valid::validateIdentifier(stappler::StringView)

## BRIEF

Проверяет, является ли строка допустимым С-идентификатором

## CONTENT

Проверяет, является ли строка допустимым С-идентификатором

Параметры:
* stappler::StringView

Возвращает:
* bool

# ::stappler::valid::validateText(stappler::StringView)

## BRIEF

Проверяет, что строка не содержит контрольных символов

## CONTENT

Проверяет, что строка не содержит контрольных символов

Параметры:
* stappler::StringView

Возвращает:
* bool

# ::stappler::valid::validateEmailWithoutNormalization(stappler::StringView)

## BRIEF

Проверяет, что строка является адресом электронной почты

## CONTENT

Проверяет, что строка является адресом электронной почты. Не нормализует его.

Параметры:
* stappler::StringView

Возвращает:
* bool

# ::stappler::valid::validateEmail(memory::PoolInterface::StringType&)

## BRIEF

Проверяет, что строка является адресом электронной почты

## CONTENT

Проверяет, что строка является адресом электронной почты. Если является, то нормализует его, удаляя комментарии и конвертируя интернациональный домен, записывает результат в исходную строку.

Параметры:
* memory::PoolInterface::StringType&

Возвращает:
* bool

# ::stappler::valid::validateEmail(memory::StandartInterface::StringType&)

## BRIEF

Проверяет, что строка является адресом электронной почты

## CONTENT

Проверяет, что строка является адресом электронной почты. Если является, то нормализует его, удаляя комментарии и конвертируя интернациональный домен, записывает результат в исходную строку.

Параметры:
* memory::StandartInterface::StringType&

Возвращает:
* bool

# ::stappler::valid::validateUrl(memory::PoolInterface::StringType&)

## BRIEF

Проверяет, что строка является URL

## CONTENT

Проверяет, что строка является URL. Если является, то нормализует его, записывая в исходную строку результат

Параметры:
* memory::PoolInterface::StringType&

Возвращает:
* bool

# ::stappler::valid::validateUrl(memory::StandartInterface::StringType&)

## BRIEF

Проверяет, что строка является URL

## CONTENT

Проверяет, что строка является URL. Если является, то нормализует его, записывая в исходную строку результат

Параметры:
* memory::StandartInterface::StringType&

Возвращает:
* bool

# ::stappler::valid::validateNumber(stappler::StringView const&)

## BRIEF

Проверяет, что строка содержит только числа

## CONTENT

Проверяет, что строка содержит только числа

Параметры:
* stappler::StringView const&

Возвращает:
* bool

# ::stappler::valid::validateHexadecimial(stappler::StringView const&)

## BRIEF

Проверяет, что строка содержит только шестнадцатиричные числа

## CONTENT

Проверяет, что строка содержит только шестнадцатиричные числа

Параметры:
* stappler::StringView const&

Возвращает:
* bool

# ::stappler::valid::validateBase64(stappler::StringView const&)

## BRIEF

Проверяет, что строка содержит только base64/base64url

## CONTENT

Проверяет, что строка содержит только base64/base64url

Параметры:
* stappler::StringView const&

Возвращает:
* bool

# ::stappler::valid::makeRandomBytes(uint8_t*,size_t)

## BRIEF

Генерирует случайные байты

## CONTENT

Генерирует случайные байты. Использует небезопасный ГПСЧ.

Параметры:
* uint8_t* - целевой буфер
* size_t - число байт для генерации


# ::stappler::valid::makeRandomBytes<typename>(size_t)

## BRIEF

Генерирует случайные байты

## CONTENT

Генерирует случайные байты. Использует небезопасный ГПСЧ.

Параметры шаблона:
* typename Interface - интерфейс памяти для байтовой строки

Параметры:
* size_t - число байт для генерации

Возвращает:
* typename Interface::BytesType

# ::stappler::valid::makePassword<typename>(stappler::StringView const&,stappler::StringView const&)

## BRIEF

Упаковывает пароль для его хранения

## CONTENT

Упаковывает пароль для его хранения. Использует алгоритм на основе случайной соли, переданного ключа и Sha-512. ГПСЧ для соли может не быть безопасным.

Параметры шаблона:
* typename Interface

Параметры:
* stappler::StringView const& - пароль для кодирования
* stappler::StringView const& - ключ для пароля

Возвращает:
* typename Interface::BytesType - набор байт для безопасного хранения пароля

# ::stappler::valid::validatePassord(stappler::StringView const&,stappler::BytesView const&,stappler::StringView const&)

## BRIEF

Сопоставляет пароль с его хранимой версией. Не декодирует пароль.

## CONTENT

Сопоставляет пароль с его хранимой версией. Не декодирует пароль.

Параметры:
* stappler::StringView const& - проверяемый пароль
* stappler::BytesView const& - исходный пароль
* stappler::StringView const& - ключ пароля

Возвращает:
* bool - true если пароли совпадают

# ::stappler::valid::generatePassword<typename>(size_t)

## BRIEF

Генерирует пароль заданной длины

## CONTENT

Генерирует пароль заданной длины (не менее 3). В пароле гарантированно будут содержаться число и латинские символы в двух регистрах. ГПСЧ может не быть безопасным

Параметры шаблона:
* typename Interface - интерфейс памяти для новой строки

Параметры:
* size_t - длина генерируемого пароля, не менее 3.

Возвращает:
* typename Interface::StringType

# ::stappler::valid::readIp(stappler::StringView)

## BRIEF

Читает ip-адрес (v4) в 32-битное число

## CONTENT

Читает ip-адрес (v4) в 32-битное число

Параметры:
* stappler::StringView

Возвращает:
* uint32_t

# ::stappler::valid::readIp(stappler::StringView,bool&)

## BRIEF

Читает ip-адрес (v4) в 32-битное число

## CONTENT

Читает ip-адрес (v4) в 32-битное число

Параметры:
* stappler::StringView
* bool& - устанавливается в false при ошибке

Возвращает:
* uint32_t

# ::stappler::valid::readIpRange(stappler::StringView)

## BRIEF

Читает диапазон ip-адресов (v4)

## CONTENT

Читает диапазон ip-адресов (v4)

Параметры:
* stappler::StringView

Возвращает:
* Pair<uint32_t, uint32_t>
