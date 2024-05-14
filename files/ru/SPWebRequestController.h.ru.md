Title: SPWebRequestController.h


# EXTRA_WEBSERVER_WEBSERVER_REQUEST_SPWEBREQUESTCONFIG_H_

## BRIEF

Заголовок контроллера запроса

## CONTENT

Заголовок контроллера запроса


# ::stappler::web::RequestController

## BRIEF

Контроллер запроса

## CONTENT

Контроллер запроса. Реализует функции работы с запросом. Конкретная реализация вебсервера должна перегрузить этот класс.

Базовые классы:
* AllocBase


# ::stappler::web::RequestController::~RequestController()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор

# ::stappler::web::RequestController::RequestController(stappler::mempool::base::pool_t*,stappler::web::RequestInfo&&)

## BRIEF

Конструктор

## CONTENT

Доступ: public

Конструктор

Параметры:
* stappler::mempool::base::pool_t* - базовый пул
* stappler::web::RequestInfo&& - данные запроса


# ::stappler::web::RequestController::bind(stappler::web::HostController*)

## BRIEF

Связывает запрос с хостом

## CONTENT

Доступ: public

Связывает запрос с хостом

Параметры:
* stappler::web::HostController*


# ::stappler::web::RequestController::init()

## BRIEF

Инициализирует запрос

## CONTENT

Доступ: public

Инициализирует запрос

Возвращает:
* bool

# ::stappler::web::RequestController::getPool() const

## BRIEF

Возвращает базовый пул памяти

## CONTENT

Доступ: public

Возвращает базовый пул памяти

Возвращает:
* stappler::mempool::base::pool_t*

# ::stappler::web::RequestController::getHost() const

## BRIEF

Возвращает хост

## CONTENT

Доступ: public

Возвращает хост

Возвращает:
* stappler::web::HostController*

# ::stappler::web::RequestController::getInfo() const

## BRIEF

Возвращает данные запроса

## CONTENT

Доступ: public

Возвращает данные запроса

Возвращает:
* stappler::web::RequestInfo const&

# ::stappler::web::RequestController::isAcceptable(stappler::StringView) const

## BRIEF

Проверяет, может ли система принять тип данных

## CONTENT

Доступ: public

Проверяет, может ли система принять тип данных

Параметры:
* stappler::StringView

Возвращает:
* float

# ::stappler::web::RequestController::startResponseTransmission()

## BRIEF

Начинает передачу буферезованного ответа

## CONTENT

Доступ: public

Начинает передачу буферезованного ответа


# ::stappler::web::RequestController::getBytesSent() const

## BRIEF

Возвращает число отправленных байт

## CONTENT

Доступ: public

Возвращает число отправленных байт

Возвращает:
* size_t

# ::stappler::web::RequestController::putc(int)

## BRIEF

Записывает символ в запрос

## CONTENT

Доступ: public

Записывает символ в запрос

Параметры:
* int


# ::stappler::web::RequestController::write(uint8_t const*,size_t)

## BRIEF

Записывает данные в запрос

## CONTENT

Доступ: public

Записывает данные в запрос

Параметры:
* uint8_t const*
* size_t

Возвращает:
* size_t

# ::stappler::web::RequestController::flush()

## BRIEF

Записывает данные из буфера в сетевой поток

## CONTENT

Доступ: public

Записывает данные из буфера в сетевой поток


# ::stappler::web::RequestController::isSecureConnection() const

## BRIEF

Проверяет соединение на безопасность

## CONTENT

Доступ: public

Проверяет соединение на безопасность. Соединение безопасно если протокол безопасен или соединение локальное

Возвращает:
* bool

# ::stappler::web::RequestController::isSecureAuthAllowed() const

## BRIEF

Проверяет, допустима ли безопасная авторизация

## CONTENT

Доступ: public

Проверяет, допустима ли безопасная авторизация

Возвращает:
* bool

# ::stappler::web::RequestController::setDocumentRoot(stappler::StringView)

## BRIEF

Устанавливает локальный корень для запроса

## CONTENT

Доступ: public

Устанавливает локальный корень для запроса

Параметры:
* stappler::StringView


# ::stappler::web::RequestController::setContentType(stappler::StringView)

## BRIEF

Устанавливает тип данных

## CONTENT

Доступ: public

Устанавливает тип данных

Параметры:
* stappler::StringView


# ::stappler::web::RequestController::setHandler(stappler::StringView)

## BRIEF

Устанавливает имя обработчика

## CONTENT

Доступ: public

Устанавливает имя обработчика

Параметры:
* stappler::StringView


# ::stappler::web::RequestController::setContentEncoding(stappler::StringView)

## BRIEF

Устанавливает входящую кодировку

## CONTENT

Доступ: public

Устанавливает входящую кодировку

Параметры:
* stappler::StringView


# ::stappler::web::RequestController::setStatus(stappler::web::Status,stappler::StringView)

## BRIEF

Устанавливает статус запроса

## CONTENT

Доступ: public

Устанавливает статус запроса

Параметры:
* stappler::web::Status
* stappler::StringView


# ::stappler::web::RequestController::getCookie(stappler::StringView,bool)

## BRIEF

Получает Cookie

## CONTENT

Доступ: public

Получает Cookie

Параметры:
* stappler::StringView
* bool - true - удаляет данные из общей таблицы

Возвращает:
* stappler::StringView

# ::stappler::web::RequestController::setFilename(stappler::StringView,bool,stappler::Time)

## BRIEF

Устанавливает имя файла для результата

## CONTENT

Доступ: public

Параметры:
* stappler::StringView - путь к файлу
* bool - true если нужно обновить данные в запросе
* stappler::Time - (опционально) альтернативное время обновления файла


# ::stappler::web::RequestController::getRequestHeader(stappler::StringView) const

## BRIEF

Получает заголовок запроса

## CONTENT

Доступ: public

Получает заголовок запроса

Параметры:
* stappler::StringView

Возвращает:
* stappler::StringView

# ::stappler::web::RequestController::foreachRequestHeaders(Callback<void (stappler::StringView, stappler::StringView)> const&) const

## BRIEF

Перебирает заголовки запроса

## CONTENT

Доступ: public

Перебирает заголовки запроса

Параметры:
* Callback<void (stappler::StringView, stappler::StringView)> const&


# ::stappler::web::RequestController::getResponseHeader(stappler::StringView) const

## BRIEF

Получает заголовок ответа

## CONTENT

Доступ: public

Получает заголовок ответа

Параметры:
* stappler::StringView

Возвращает:
* stappler::StringView

# ::stappler::web::RequestController::foreachResponseHeaders(Callback<void (stappler::StringView, stappler::StringView)> const&) const

## BRIEF

Перебирает заголовки ответа

## CONTENT

Доступ: public

Перебирает заголовки ответа

Параметры:
* Callback<void (stappler::StringView, stappler::StringView)> const&


# ::stappler::web::RequestController::setResponseHeader(stappler::StringView,stappler::StringView)

## BRIEF

Устанавливает заголовок ответа

## CONTENT

Доступ: public

Устанавливает заголовок ответа

Параметры:
* stappler::StringView - имя
* stappler::StringView - значение


# ::stappler::web::RequestController::clearResponseHeaders()

## BRIEF

Очищает заголовки ответа

## CONTENT

Доступ: public

Очищает заголовки ответа


# ::stappler::web::RequestController::getErrorHeader(stappler::StringView) const

## BRIEF

Получает заголовок ошибки

## CONTENT

Доступ: public

Получает заголовок ошибки

Параметры:
* stappler::StringView

Возвращает:
* stappler::StringView

# ::stappler::web::RequestController::foreachErrorHeaders(Callback<void (stappler::StringView, stappler::StringView)> const&) const

## BRIEF

Перебирает заголовки ошибки

## CONTENT

Доступ: public

Перебирает заголовки ошибки

Параметры:
* Callback<void (stappler::StringView, stappler::StringView)> const&


# ::stappler::web::RequestController::setErrorHeader(stappler::StringView,stappler::StringView)

## BRIEF

Устанавливает заголовок ошибки

## CONTENT

Доступ: public

Устанавливает заголовок ошибки

Параметры:
* stappler::StringView - имя
* stappler::StringView - значение


# ::stappler::web::RequestController::clearErrorHeaders()

## BRIEF

Очищает заголовки ошибки

## CONTENT

Доступ: public

Очищает заголовки ошибки


# ::stappler::web::RequestController::acquireDatabase()

## BRIEF

Запрашивает адаптер БД для запроса

## CONTENT

Доступ: public

Запрашивает адаптер БД для запроса

Возвращает:
* db::Adapter

# ::stappler::web::RequestController::makeInputFilter(stappler::web::InputFilterAccept)

## BRIEF

Создаёт фильтр входящих данных

## CONTENT

Доступ: public

Создаёт фильтр входящих данных

Параметры:
* stappler::web::InputFilterAccept

Возвращает:
* stappler::web::InputFilter*

# ::stappler::web::RequestController::setInputFilter(stappler::web::InputFilter*)

## BRIEF

Устанавливает фильтр входящих данных

## CONTENT

Доступ: public

Устанавливает фильтр входящих данных

Параметры:
* stappler::web::InputFilter*


# ::stappler::web::RequestController::getInputFilter() const

## BRIEF

Получает фильтр входящих данных

## CONTENT

Доступ: public

Получает фильтр входящих данных

Возвращает:
* stappler::web::InputFilter*

# ::stappler::web::RequestController::getDefaultResult()

## BRIEF

Возвращает данные результата запроса по умолчанию

## CONTENT

Доступ: public

Возвращает данные результата запроса по умолчанию. Этот рзультат возвращается, если для запроса не найдено обработчика или обрабочик отказал в обработке.

Возвращает:
* stappler::mem_pool::Value

# ::stappler::web::RequestController::convertToWebsocket(stappler::web::WebsocketHandler*,stappler::mempool::base::allocator_t*,stappler::mempool::base::pool_t*)

## BRIEF

Конвертирует запрос в вебсокет

## CONTENT

Доступ: public

Конвертирует запрос в вебсокет

Параметры:
* stappler::web::WebsocketHandler*
* stappler::mempool::base::allocator_t*
* stappler::mempool::base::pool_t*

Возвращает:
* stappler::web::WebsocketConnection*

# ::stappler::web::RequestController::_pool

## BRIEF

Пул памяти

## CONTENT

Доступ: protected

Пул памяти

Тип: stappler::mempool::base::pool_t*


# ::stappler::web::RequestController::_info

## BRIEF

Данные запроса

## CONTENT

Доступ: protected

Данные запроса

Тип: stappler::web::RequestInfo


# ::stappler::web::RequestController::_host

## BRIEF

Хост

## CONTENT

Доступ: protected

Хост

Тип: stappler::web::HostController*


# ::stappler::web::RequestController::_inputConfig

## BRIEF

Конфигурация входных данных

## CONTENT

Доступ: protected

Конфигурация входных данных

Тип: db::InputConfig


# ::stappler::web::RequestController::_database

## BRIEF

Интерфейс БД

## CONTENT

Доступ: protected

Интерфейс БД

Тип: db::BackendInterface*


# ::stappler::web::RequestController::_debug

## BRIEF

Отладочные сообщения

## CONTENT

Доступ: protected

Отладочные сообщения

Тип: Vector<stappler::mem_pool::Value>


# ::stappler::web::RequestController::_errors

## BRIEF

Сообщения об ошибках

## CONTENT

Доступ: protected

Сообщения об ошибках

Тип: Vector<stappler::mem_pool::Value>


# ::stappler::web::RequestController::_handler

## BRIEF

Текущий обработчик

## CONTENT

Доступ: protected

Текущий обработчик

Тип: stappler::web::RequestHandler*


# ::stappler::web::RequestController::_user

## BRIEF

Текущий пользователь

## CONTENT

Доступ: protected

Текущий пользователь

Тип: db::User*


# ::stappler::web::RequestController::_userId

## BRIEF

Альтернативный идентификатор пользователя

## CONTENT

Доступ: protected

Альтернативный идентификатор пользователя

Тип: int64_t


# ::stappler::web::RequestController::_session

## BRIEF

Активная сессия пользователя

## CONTENT

Доступ: protected

Активная сессия пользователя

Тип: stappler::web::Session*


# ::stappler::web::RequestController::_filter

## BRIEF

Фильтр входящих данных

## CONTENT

Доступ: protected

Фильтр входящих данных

Тип: stappler::web::InputFilter*


# ::stappler::web::RequestController::_cookies

## BRIEF

Cookies

## CONTENT

Доступ: protected

Cookies

Тип: Map<stappler::StringView, stappler::web::CookieStorageInfo>


# ::stappler::web::RequestController::_accessRole

## BRIEF

Роль текущего пользователя в БД

## CONTENT

Доступ: protected

Роль текущего пользователя в БД

Тип: db::AccessRoleId


# ::stappler::web::RequestController::_acceptList

## BRIEF

Список форматов для получения

## CONTENT

Доступ: protected

Список форматов для получения

Тип: Vector<Pair<stappler::StringView, float>>


# ::stappler::web::RequestController::finalize()

## BRIEF

Завершает работу с запросом

## CONTENT

Доступ: public

Завершает работу с запросом

# ::stappler::web::RequestController::pushErrorMessage(stappler::mem_pool::Value&&)

## BRIEF

Добавляет сообщение об ошибке к запросу

## CONTENT

Доступ: public

Добавляет сообщение об ошибке к запросу

Параметры:
* stappler::mem_pool::Value&&

# ::stappler::web::RequestController::pushDebugMessage(stappler::mem_pool::Value&&)

## BRIEF

Добавляет отладочное сообщение к запросу

## CONTENT

Доступ: public

Добавляет отладочное сообщение к запросу

Параметры:
* stappler::mem_pool::Value&&