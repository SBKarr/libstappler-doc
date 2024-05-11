Title: SPWebSession.h


# EXTRA_WEBSERVER_WEBSERVER_REQUEST_SPWEBSESSION_H_

## BRIEF

Заголовок пользовательской сессии

## CONTENT

Заголовок пользовательской сессии

# ::stappler::web::Session

## BRIEF

Тип пользовательской сессии

## CONTENT

Тип пользовательской сессии. Этот тип предназначен для краткосрочных сессий с усиленной авторизацией. Сессия использует два ключа: один передаётся через Cookie, второй в строке запроса. Для долгосрочной авторизации стоит использовать тип ExternalSession.

Базовые классы:
* data::WrapperTemplate<Interface>


# ::stappler::web::Session::Token

## BRIEF

Базовый токен сессии

## CONTENT

Доступ: public

Базовый токен сессии


# ::stappler::web::Session::create(stappler::web::Request const&)

## BRIEF

Создаёт или загружает сессию для запроса

## CONTENT

Доступ: public

Создаёт или загружает сессию для запроса

Параметры:
* stappler::web::Request const&

Возвращает:
* stappler::web::Session*

# ::stappler::web::Session::Session(stappler::web::Request const&,bool)

## BRIEF

Конструктор

## CONTENT

Доступ: public

Конструктор

Параметры:
* stappler::web::Request const&
* bool - true если необходимо сообщать пользователю об ошибке


# ::stappler::web::Session::Session(stappler::web::Request const&,db::User*,stappler::TimeInterval)

## BRIEF

Конструктор

## CONTENT

Доступ: public

Конструктор

Параметры:
* stappler::web::Request const&
* db::User* - пользователь
* stappler::TimeInterval - время жизни сессии


# ::stappler::web::Session::~Session()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор


# ::stappler::web::Session::init(db::User*,stappler::TimeInterval)

## BRIEF

Инициализирует сессию

## CONTENT

Доступ: public

Инициализирует сессию

Параметры:
* db::User* - пользователь
* stappler::TimeInterval - время жизни сессии

Возвращает:
* bool - true если успешно

# ::stappler::web::Session::init(bool)

## BRIEF

Инициализирует сессию

## CONTENT

Доступ: public

Инициализирует сессию

Параметры:
* bool - true если необходимо сообщать пользователю об ошибке

Возвращает:
* bool

# ::stappler::web::Session::isValid() const

## BRIEF

Проверяет сессию на работоспособность

## CONTENT

Доступ: public

Проверяет сессию на работоспособность

Возвращает:
* bool

# ::stappler::web::Session::getSessionToken() const

## BRIEF

Возвращает токен для передачи в строке запроса

## CONTENT

Доступ: public

Возвращает токен для передачи в строке запроса

Возвращает:
* Token&

# ::stappler::web::Session::getCookieToken() const

## BRIEF

Возвращает токен для передачи в Cookie

## CONTENT

Доступ: public

Возвращает токен для передачи в Cookie

Возвращает:
* Token&

# ::stappler::web::Session::getSessionUuid() const

## BRIEF

Возвращает идентификатор сессии в БД

## CONTENT

Доступ: public

Возвращает идентификатор сессии в БД

Возвращает:
* memory::uuid const&

# ::stappler::web::Session::getUser() const

## BRIEF

Возвращает пользователя

## CONTENT

Доступ: public

Возвращает пользователя

Возвращает:
* db::User*

# ::stappler::web::Session::getMaxAge() const

## BRIEF

Возвращает срок жизни

## CONTENT

Доступ: public

Возвращает срок жизни

Возвращает:
* stappler::TimeInterval

# ::stappler::web::Session::write()

## BRIEF

Записывает сессию в запрос

## CONTENT

Доступ: public

Записывает сессию в запрос

Возвращает:
* bool

# ::stappler::web::Session::save()

## BRIEF

Сохраняет сессию в БД

## CONTENT

Доступ: public

Сохраняет сессию в БД

Возвращает:
* bool

# ::stappler::web::Session::cancel()

## BRIEF

Завершает сессию

## CONTENT

Доступ: public

Завершает сессию

Возвращает:
* bool

# ::stappler::web::Session::touch(stappler::TimeInterval)

## BRIEF

Обновляет сессию

## CONTENT

Доступ: public

Обновляет сессию

Параметры:
* stappler::TimeInterval

Возвращает:
* bool

# ::stappler::web::Session::getStorageData(stappler::web::Request&,stappler::web::Session::Token const&)

## BRIEF

Получает данные сессии из БД

## CONTENT

Доступ: protected

Получает данные сессии из БД

Параметры:
* stappler::web::Request&
* stappler::web::Session::Token const&

Возвращает:
* stappler::data::WrapperTemplate<stappler::memory::PoolInterface>::Value

# ::stappler::web::Session::getStorageData(stappler::web::Request&,stappler::data::WrapperTemplate<stappler::memory::PoolInterface>::Bytes const&)

## BRIEF

Получает данные сессии из БД

## CONTENT

Доступ: protected

Получает данные сессии из БД

Параметры:
* stappler::web::Request&
* stappler::data::WrapperTemplate<stappler::memory::PoolInterface>::Bytes const&

Возвращает:
* stappler::data::WrapperTemplate<stappler::memory::PoolInterface>::Value

# ::stappler::web::Session::setStorageData(stappler::web::Request&,stappler::web::Session::Token const&,stappler::data::WrapperTemplate<stappler::memory::PoolInterface>::Value const&,stappler::TimeInterval)

## BRIEF

Записывает данные сессии в БД

## CONTENT

Доступ: protected

Записывает данные сессии в БД

Параметры:
* stappler::web::Request&
* stappler::web::Session::Token const&
* stappler::data::WrapperTemplate<stappler::memory::PoolInterface>::Value const&
* stappler::TimeInterval

Возвращает:
* bool

# ::stappler::web::Session::clearStorageData(stappler::web::Request&,stappler::web::Session::Token const&)

## BRIEF

Удаляет сессию из БД

## CONTENT

Доступ: protected

Удаляет сессию из БД

Параметры:
* stappler::web::Request&
* stappler::web::Session::Token const&

Возвращает:
* bool

# ::stappler::web::Session::getStorageUser(stappler::web::Request&,uint64_t)

## BRIEF

Возвращает пользователя для сессии

## CONTENT

Доступ: protected

Возвращает пользователя для сессии

Параметры:
* stappler::web::Request&
* uint64_t

Возвращает:
* db::User*

# ::stappler::web::Session::makeSessionToken(stappler::web::Request&,memory::uuid const&,stappler::StringView const&)

## BRIEF

Создаёт токен сессии

## CONTENT

Доступ: protected

Создаёт токен сессии

Параметры:
* stappler::web::Request&
* memory::uuid const&
* stappler::StringView const&

Возвращает:
* Token

# ::stappler::web::Session::makeCookieToken(stappler::web::Request&,memory::uuid const&,stappler::StringView const&,stappler::data::WrapperTemplate<stappler::memory::PoolInterface>::Bytes const&)

## BRIEF

Создаёт токен для Cookie

## CONTENT

Доступ: protected

Создаёт токен для Cookie

Параметры:
* stappler::web::Request&
* memory::uuid const&
* stappler::StringView const&
* stappler::data::WrapperTemplate<stappler::memory::PoolInterface>::Bytes const&

Возвращает:
* Token

# ::stappler::web::Session::_request

## BRIEF

Запрос

## CONTENT

Доступ: protected

Запрос

Тип: stappler::web::Request


# ::stappler::web::Session::_sessionToken

## BRIEF

Тоекн

## CONTENT

Доступ: protected

Тоекн

Тип: Token


# ::stappler::web::Session::_cookieToken

## BRIEF

Тоекн

## CONTENT

Доступ: protected

Тоекн

Тип: Token


# ::stappler::web::Session::_uuid

## BRIEF

Ид сессии

## CONTENT

Доступ: protected

Ид сессии

Тип: memory::uuid


# ::stappler::web::Session::_maxAge

## BRIEF

Срок жизни сессии

## CONTENT

Доступ: protected

Срок жизни сессии

Тип: stappler::TimeInterval


# ::stappler::web::Session::_user

## BRIEF

Пользователь

## CONTENT

Доступ: protected

Пользователь

Тип: db::User*


# ::stappler::web::Session::_valid

## BRIEF

Флаг работоспособности

## CONTENT

Доступ: protected

Флаг работоспособности

Тип: bool
