Title: SPWebInfo.h


# EXTRA_WEBSERVER_WEBSERVER_SPWEBINFO_H_

## BRIEF

Заголовок данных вебсервера

## CONTENT

Заголовок данных вебсервера

# ::stappler::web::EtagMode

## BRIEF

Режим работы заголовка ETag

## CONTENT

Режим работы заголовка ETag

Значения:
* AddSuffix
* NoChange
* Remove


# ::stappler::web::CookieFlags

## BRIEF

Флаги заголовка Set-Cookie

## CONTENT

Флаги заголовка Set-Cookie

Значения:
* Secure
* HttpOnly
* SetOnError
* SetOnSuccess
* SameSiteNone
* SameSiteLux
* SameSiteStrict
* Default


# ::stappler::web::operator|(stappler::web::CookieFlags const&,stappler::web::CookieFlags const&)

## BRIEF

Автоматически созданный оператор битовых флагов

## CONTENT

Автоматически созданный оператор битовых флагов

Параметры:
* stappler::web::CookieFlags const&
* stappler::web::CookieFlags const&

Возвращает:
* stappler::web::CookieFlags

# ::stappler::web::operator&(stappler::web::CookieFlags const&,stappler::web::CookieFlags const&)

## BRIEF

Автоматически созданный оператор битовых флагов

## CONTENT

Автоматически созданный оператор битовых флагов

Параметры:
* stappler::web::CookieFlags const&
* stappler::web::CookieFlags const&

Возвращает:
* stappler::web::CookieFlags

# ::stappler::web::operator^(stappler::web::CookieFlags const&,stappler::web::CookieFlags const&)

## BRIEF

Автоматически созданный оператор битовых флагов

## CONTENT

Автоматически созданный оператор битовых флагов

Параметры:
* stappler::web::CookieFlags const&
* stappler::web::CookieFlags const&

Возвращает:
* stappler::web::CookieFlags

# ::stappler::web::operator|=(stappler::web::CookieFlags&,stappler::web::CookieFlags const&)

## BRIEF

Автоматически созданный оператор битовых флагов

## CONTENT

Автоматически созданный оператор битовых флагов

Параметры:
* stappler::web::CookieFlags&
* stappler::web::CookieFlags const&

Возвращает:
* stappler::web::CookieFlags&

# ::stappler::web::operator&=(stappler::web::CookieFlags&,stappler::web::CookieFlags const&)

## BRIEF

Автоматически созданный оператор битовых флагов

## CONTENT

Автоматически созданный оператор битовых флагов

Параметры:
* stappler::web::CookieFlags&
* stappler::web::CookieFlags const&

Возвращает:
* stappler::web::CookieFlags&

# ::stappler::web::operator^=(stappler::web::CookieFlags&,stappler::web::CookieFlags const&)

## BRIEF

Автоматически созданный оператор битовых флагов

## CONTENT

Автоматически созданный оператор битовых флагов

Параметры:
* stappler::web::CookieFlags&
* stappler::web::CookieFlags const&

Возвращает:
* stappler::web::CookieFlags&

# ::stappler::web::operator==(stappler::web::CookieFlags const&,std::underlying_type<CookieFlags>::type const&)

## BRIEF

Автоматически созданный оператор битовых флагов

## CONTENT

Автоматически созданный оператор битовых флагов

Параметры:
* stappler::web::CookieFlags const&
* std::underlying_type<CookieFlags>::type const&

Возвращает:
* bool

# ::stappler::web::operator==(std::underlying_type<CookieFlags>::type const&,stappler::web::CookieFlags const&)

## BRIEF

Автоматически созданный оператор битовых флагов

## CONTENT

Автоматически созданный оператор битовых флагов

Параметры:
* std::underlying_type<CookieFlags>::type const&
* stappler::web::CookieFlags const&

Возвращает:
* bool

# ::stappler::web::operator!=(stappler::web::CookieFlags const&,std::underlying_type<CookieFlags>::type const&)

## BRIEF

Автоматически созданный оператор битовых флагов

## CONTENT

Автоматически созданный оператор битовых флагов

Параметры:
* stappler::web::CookieFlags const&
* std::underlying_type<CookieFlags>::type const&

Возвращает:
* bool

# ::stappler::web::operator!=(std::underlying_type<CookieFlags>::type const&,stappler::web::CookieFlags const&)

## BRIEF

Автоматически созданный оператор битовых флагов

## CONTENT

Автоматически созданный оператор битовых флагов

Параметры:
* std::underlying_type<CookieFlags>::type const&
* stappler::web::CookieFlags const&

Возвращает:
* bool

# ::stappler::web::operator~(stappler::web::CookieFlags const&)

## BRIEF

Автоматически созданный оператор битовых флагов

## CONTENT

Автоматически созданный оператор битовых флагов

Параметры:
* stappler::web::CookieFlags const&

Возвращает:
* stappler::web::CookieFlags

# ::stappler::web::RequestMethod

## BRIEF

Методы HTTP для запроса

## CONTENT

Методы HTTP для запроса

Значения:
* Get
* Put
* Post
* Delete
* Connect
* Options
* Trace
* Patch
* Propfind
* Proppatch
* MkCol
* Copy
* Move
* Lock
* Unlock
* VersionControl
* Checkout
* Uncheckout
* Checkin
* Update
* Label
* Report
* MkWorkspace
* MkActivity
* BaselineControl
* Merge
* Invalid


# ::stappler::web::Status

## BRIEF

Статус обработки HTTP-запроса

## CONTENT

Статус обработки HTTP-запроса

Значения:
* OK - запрос обработан
* DECLINED - обработчик не может обрабатывать запрос
* DONE - запрос обработан полностью и готов к ответу
* SUSPENDED - обработка приостановлена
* HTTP_CONTINUE
* HTTP_SWITCHING_PROTOCOLS
* HTTP_PROCESSING
* HTTP_OK
* HTTP_CREATED
* HTTP_ACCEPTED
* HTTP_NON_AUTHORITATIVE
* HTTP_NO_CONTENT
* HTTP_RESET_CONTENT
* HTTP_PARTIAL_CONTENT
* HTTP_MULTI_STATUS
* HTTP_ALREADY_REPORTED
* HTTP_IM_USED
* HTTP_MULTIPLE_CHOICES
* HTTP_MOVED_PERMANENTLY
* HTTP_MOVED_TEMPORARILY
* HTTP_SEE_OTHER
* HTTP_NOT_MODIFIED
* HTTP_USE_PROXY
* HTTP_TEMPORARY_REDIRECT
* HTTP_PERMANENT_REDIRECT
* HTTP_BAD_REQUEST
* HTTP_UNAUTHORIZED
* HTTP_PAYMENT_REQUIRED
* HTTP_FORBIDDEN
* HTTP_NOT_FOUND
* HTTP_METHOD_NOT_ALLOWED
* HTTP_NOT_ACCEPTABLE
* HTTP_PROXY_AUTHENTICATION_REQUIRED
* HTTP_REQUEST_TIME_OUT
* HTTP_CONFLICT
* HTTP_GONE
* HTTP_LENGTH_REQUIRED
* HTTP_PRECONDITION_FAILED
* HTTP_REQUEST_ENTITY_TOO_LARGE
* HTTP_REQUEST_URI_TOO_LARGE
* HTTP_UNSUPPORTED_MEDIA_TYPE
* HTTP_RANGE_NOT_SATISFIABLE
* HTTP_EXPECTATION_FAILED
* HTTP_MISDIRECTED_REQUEST
* HTTP_UNPROCESSABLE_ENTITY
* HTTP_LOCKED
* HTTP_FAILED_DEPENDENCY
* HTTP_UPGRADE_REQUIRED
* HTTP_PRECONDITION_REQUIRED
* HTTP_TOO_MANY_REQUESTS
* HTTP_REQUEST_HEADER_FIELDS_TOO_LARGE
* HTTP_UNAVAILABLE_FOR_LEGAL_REASONS
* HTTP_INTERNAL_SERVER_ERROR
* HTTP_NOT_IMPLEMENTED
* HTTP_BAD_GATEWAY
* HTTP_SERVICE_UNAVAILABLE
* HTTP_GATEWAY_TIME_OUT
* HTTP_VERSION_NOT_SUPPORTED
* HTTP_VARIANT_ALSO_VARIES
* HTTP_INSUFFICIENT_STORAGE
* HTTP_LOOP_DETECTED
* HTTP_NOT_EXTENDED
* HTTP_NETWORK_AUTHENTICATION_REQUIRED


# ::stappler::web::InputFilterAccept

## BRIEF

Тип принимаемых данных для фильтра

## CONTENT

Тип принимаемых данных для фильтра

Значения:
* None
* Urlencoded
* Multipart
* Json
* Files


# ::stappler::web::ResourceType

## BRIEF

Тип автоматического ресурса БД

## CONTENT

Тип автоматического ресурса БД

Значения:
* ResourceList
* ReferenceSet
* ObjectField
* Object
* Set
* View
* File
* Array
* Search


# ::stappler::web::HostComponentType

## BRIEF

Тип компонента

## CONTENT

Тип компонента

Значения:
* Dso
* Wasm


# ::stappler::web::CompressionInfo

## BRIEF

Данные для модуля сжатия

## CONTENT

Данные для модуля сжатия


# ::stappler::web::CompressionInfo::enabled

## BRIEF

Флаг доступности

## CONTENT

Флаг доступности

Тип: bool


# ::stappler::web::CompressionInfo::quality

## BRIEF

Уровень качества

## CONTENT

Уровень качества

Тип: int


# ::stappler::web::CompressionInfo::lgwin

## BRIEF

Параметр алгоритма

## CONTENT

Параметр алгоритма

Тип: int


# ::stappler::web::CompressionInfo::lgblock

## BRIEF

Параметр алгоритма

## CONTENT

Параметр алгоритма

Тип: int


# ::stappler::web::CompressionInfo::etag_mode

## BRIEF

Режим ETag

## CONTENT

Режим ETag

Тип: stappler::web::EtagMode


# ::stappler::web::CompressionInfo::note_input_name

## BRIEF

Имя блока данных в запросе

## CONTENT

Имя блока данных в запросе

Тип: char const*


# ::stappler::web::CompressionInfo::note_output_name

## BRIEF

Имя блока данных в запросе

## CONTENT

Имя блока данных в запросе

Тип: char const*


# ::stappler::web::CompressionInfo::note_ratio_name

## BRIEF

Имя блока данных в запросе

## CONTENT

Имя блока данных в запросе

Тип: char const*


# ::stappler::web::SessionInfo

## BRIEF

Параметры сессии

## CONTENT

Параметры сессии

# ::stappler::web::SessionInfo::name

## BRIEF

Имя сессии

## CONTENT

Имя сессии

Тип: stappler::mem_pool::String


# ::stappler::web::SessionInfo::key

## BRIEF

Ключ сессии

## CONTENT

Ключ сессии

Тип: stappler::mem_pool::String


# ::stappler::web::SessionInfo::maxAge

## BRIEF

Срок годности сессии

## CONTENT

Срок годности сессии

Тип: stappler::TimeInterval


# ::stappler::web::SessionInfo::secure

## BRIEF

Защищённость сессии

## CONTENT

Защищённость сессии

Тип: bool


# ::stappler::web::SessionInfo::init(stappler::mem_pool::Value const&)

## BRIEF

Загружает инфомрацию из данных

## CONTENT

Загружает инфомрацию из данных

Параметры:
* stappler::mem_pool::Value const&


# ::stappler::web::SessionInfo::setParam(stappler::StringView,stappler::StringView)

## BRIEF

Устанавливает параметр сессии по ключу

## CONTENT

Устанавливает параметр сессии по ключу

Параметры:
* stappler::StringView
* stappler::StringView


# ::stappler::web::WebhookInfo

## BRIEF

Данные внешнего интерфейса

## CONTENT

Данные внешнего интерфейса


# ::stappler::web::WebhookInfo::url

## BRIEF

Внешний URL

## CONTENT

Внешний URL

Тип: stappler::mem_pool::String


# ::stappler::web::WebhookInfo::name

## BRIEF

Имя источника

## CONTENT

Имя источника

Тип: stappler::mem_pool::String


# ::stappler::web::WebhookInfo::format

## BRIEF

Имя формата

## CONTENT

Имя формата

Тип: stappler::mem_pool::String


# ::stappler::web::WebhookInfo::extra

## BRIEF

Дополнительные данные

## CONTENT

Дополнительные данные

Тип: stappler::mem_pool::Value


# ::stappler::web::WebhookInfo::init(stappler::mem_pool::Value const&)

## BRIEF

Инициализирует данные

## CONTENT

Инициализирует данные

Параметры:
* stappler::mem_pool::Value const&


# ::stappler::web::WebhookInfo::setParam(stappler::StringView,stappler::StringView)

## BRIEF

Устанавливает параметры по ключу

## CONTENT

Устанавливает параметры по ключу

Параметры:
* stappler::StringView
* stappler::StringView


# ::stappler::web::ResourceSchemeInfo

## BRIEF

Данные ресурса БД

## CONTENT

Данные ресурса БД


# ::stappler::web::ResourceSchemeInfo::path

## BRIEF

Путь к ресурсу

## CONTENT

Путь к ресурсу

Тип: stappler::StringView


# ::stappler::web::ResourceSchemeInfo::data

## BRIEF

Дополнительные данные

## CONTENT

Дополнительные данные

Тип: stappler::mem_pool::Value


# ::stappler::web::RequestSchemeInfo

## BRIEF

Данные обработчика запроса

## CONTENT

Данные обработчика запроса


# ::stappler::web::RequestSchemeInfo::HandlerCallback

## BRIEF

Тип функции создания обработчика

## CONTENT

Тип функции создания обработчика


# ::stappler::web::RequestSchemeInfo::component

## BRIEF

Исходный компонент

## CONTENT

Исходный компонент

Тип: stappler::StringView


# ::stappler::web::RequestSchemeInfo::callback

## BRIEF

Функция создания обработчика

## CONTENT

Функция создания обработчика

Тип: HandlerCallback


# ::stappler::web::RequestSchemeInfo::data

## BRIEF

Дополнительные данные

## CONTENT

Дополнительные данные

Тип: stappler::mem_pool::Value


# ::stappler::web::RequestSchemeInfo::scheme

## BRIEF

Ассоциированная схема данных

## CONTENT

Ассоциированная схема данных

Тип: db::Scheme const*


# ::stappler::web::RequestSchemeInfo::map

## BRIEF

Карта обработки, если установлена

## CONTENT

Карта обработки, если установлена

Тип: stappler::web::RequestHandlerMap const*


# ::stappler::web::HostInfo

## BRIEF

Данные хоста

## CONTENT

Данные хоста

# ::stappler::web::HostInfo::hostname

## BRIEF

Имя хоста

## CONTENT

Имя хоста

Тип: stappler::StringView


# ::stappler::web::HostInfo::documentRoot

## BRIEF

Путь к корню системы хоста

## CONTENT

Путь к корню системы хоста

Тип: stappler::StringView


# ::stappler::web::HostInfo::scheme

## BRIEF

Схема работы (http|s)

## CONTENT

Схема работы (http|s)

Тип: stappler::StringView


# ::stappler::web::HostInfo::admin

## BRIEF

Адрес администратора

## CONTENT

Адрес администратора

Тип: stappler::StringView


# ::stappler::web::HostInfo::timeout

## BRIEF

Максимальный срок ожидания запроса

## CONTENT

Максимальный срок ожидания запроса

Тип: stappler::TimeInterval


# ::stappler::web::HostInfo::keepAlive

## BRIEF

Максимальное время поддержания активного соединения

## CONTENT

Максимальное время поддержания активного соединения

Тип: stappler::TimeInterval


# ::stappler::web::HostInfo::maxKeepAlives

## BRIEF

Максимальное число активных соединений

## CONTENT

Максимальное число активных соединений

Тип: uint32_t


# ::stappler::web::HostInfo::port

## BRIEF

Порт доступа к серверу

## CONTENT

Порт доступа к серверу

Тип: uint16_t


# ::stappler::web::HostInfo::useKeepAlive

## BRIEF

Поддерживать ли соединения открытыми

## CONTENT

Поддерживать ли соединения открытыми

Тип: bool


# ::stappler::web::HostInfo::isVirtual

## BRIEF

Является ли виртуальным хостом

## CONTENT

Является ли виртуальным хостом

Тип: bool


# ::stappler::web::CookieStorageInfo

## BRIEF

Информация для Cookie

## CONTENT

Информация для Cookie


# ::stappler::web::CookieStorageInfo::data

## BRIEF

Строка данных

## CONTENT

Строка данных

Тип: stappler::mem_pool::String


# ::stappler::web::CookieStorageInfo::flags

## BRIEF

Флаги

## CONTENT

Флаги

Тип: stappler::web::CookieFlags


# ::stappler::web::CookieStorageInfo::maxAge

## BRIEF

Срок жизни

## CONTENT

Срок жизни

Тип: stappler::TimeInterval


# ::stappler::web::HostComponentInfo

## BRIEF

Данные компонента сервера

## CONTENT

Данные компонента сервера


# ::stappler::web::HostComponentInfo::type

## BRIEF

Тип компонента

## CONTENT

Тип компонента

Тип: stappler::web::HostComponentType


# ::stappler::web::HostComponentInfo::name

## BRIEF

Имя компонента

## CONTENT

Имя компонента

Тип: stappler::StringView


# ::stappler::web::HostComponentInfo::version

## BRIEF

Версия компонента

## CONTENT

Версия компонента

Тип: stappler::StringView


# ::stappler::web::HostComponentInfo::file

## BRIEF

Имя файла

## CONTENT

Имя файла

Тип: stappler::StringView


# ::stappler::web::HostComponentInfo::symbol

## BRIEF

Функция для загрузки

## CONTENT

Функция для загрузки

Тип: stappler::StringView


# ::stappler::web::HostComponentInfo::data

## BRIEF

Дополнительные данные

## CONTENT

Дополнительные данные

Тип: stappler::mem_pool::Value


# ::stappler::web::RequestInfo

## BRIEF

Данные запроса

## CONTENT

Данные запроса


# ::stappler::web::RequestInfo::method

## BRIEF

Метод запроса

## CONTENT

Метод запроса

Тип: stappler::web::RequestMethod


# ::stappler::web::RequestInfo::requestTime

## BRIEF

Время получения запроса

## CONTENT

Время получения запроса

Тип: stappler::Time


# ::stappler::web::RequestInfo::protocolVersion

## BRIEF

Версия протокола

## CONTENT

Версия протокола

Тип: uint32_t


# ::stappler::web::RequestInfo::status

## BRIEF

Текущий статус

## CONTENT

Текущий статус

Тип: stappler::web::Status


# ::stappler::web::RequestInfo::contentLength

## BRIEF

Длина данных запроса

## CONTENT

Длина данных запроса

Тип: off_t


# ::stappler::web::RequestInfo::headerRequest

## BRIEF

Флаг, запрошены ли только заголовки

## CONTENT

Флаг, запрошены ли только заголовки

Тип: bool


# ::stappler::web::RequestInfo::stat

## BRIEF

Данные запрошенного файла

## CONTENT

Данные запрошенного файла

Тип: filesystem::Stat


# ::stappler::web::RequestInfo::requestLine

## BRIEF

Первая строка запроса

## CONTENT

Первая строка запроса

Тип: stappler::StringView


# ::stappler::web::RequestInfo::protocol

## BRIEF

Протокол запроса

## CONTENT

Протокол запроса

Тип: stappler::StringView


# ::stappler::web::RequestInfo::methodName

## BRIEF

Имя метода запроса

## CONTENT

Имя метода запроса

Тип: stappler::StringView


# ::stappler::web::RequestInfo::statusLine

## BRIEF

Строка статуса для ответа

## CONTENT

Строка статуса для ответа

Тип: stappler::StringView


# ::stappler::web::RequestInfo::rangeLine

## BRIEF

Строка диапазона для ответа

## CONTENT

Строка диапазона для ответа

Тип: stappler::StringView


# ::stappler::web::RequestInfo::documentRoot

## BRIEF

Путь к корню хоста для запроса

## CONTENT

Путь к корню хоста для запроса

Тип: stappler::StringView


# ::stappler::web::RequestInfo::contentType

## BRIEF

Тип содержимого запроса

## CONTENT

Тип содержимого запроса

Тип: stappler::StringView


# ::stappler::web::RequestInfo::contentEncoding

## BRIEF

Кодировка содержимого

## CONTENT

Кодировка содержимого

Тип: stappler::StringView


# ::stappler::web::RequestInfo::authType

## BRIEF

Способ авторизации

## CONTENT

Способ авторизации

Тип: stappler::StringView


# ::stappler::web::RequestInfo::unparserUri

## BRIEF

URI до начала разбора

## CONTENT

URI до начала разбора

Тип: stappler::StringView


# ::stappler::web::RequestInfo::filename

## BRIEF

Путь к запрошенному файлу

## CONTENT

Путь к запрошенному файлу

Тип: stappler::StringView


# ::stappler::web::RequestInfo::useragentIp

## BRIEF

IP клиента

## CONTENT

IP клиента

Тип: stappler::StringView


# ::stappler::web::RequestInfo::handler

## BRIEF

Имя обработчика

## CONTENT

Имя обработчика

Тип: stappler::StringView


# ::stappler::web::RequestInfo::useragentPort

## BRIEF

Порт клиента

## CONTENT

Порт клиента

Тип: uint16_t


# ::stappler::web::RequestInfo::url

## BRIEF

Запрошенный URL

## CONTENT

Запрошенный URL

Тип: stappler::UrlView


# ::stappler::web::RequestInfo::queryPath

## BRIEF

Разбитый путь запроса

## CONTENT

Разбитый путь запроса

Тип: SpanView<stappler::StringView>


# ::stappler::web::RequestInfo::queryData

## BRIEF

Данные запроса

## CONTENT

Данные запроса

Тип: stappler::mem_pool::Value


# ::stappler::web::RequestInfo::clone(stappler::mempool::base::pool_t*)

## BRIEF

Клонирует данные с использованием пула памяти

## CONTENT

Клонирует данные с использованием пула памяти

Параметры:
* stappler::mempool::base::pool_t*

Возвращает:
* stappler::web::RequestInfo

# ::stappler::web::getRequestMethod(stappler::StringView)

## BRIEF

Получает метод запроса по имени

## CONTENT

Получает метод запроса по имени

Параметры:
* stappler::StringView

Возвращает:
* stappler::web::RequestMethod

# ::stappler::web::getProtocolVersionNumber(stappler::StringView)

## BRIEF

Получает версию протокола по тексту

## CONTENT

Получает версию протокола по тексту

Параметры:
* stappler::StringView

Возвращает:
* uint32_t

# ::stappler::web::extractCharset(stappler::StringView)

## BRIEF

Извлекает кодировку из типа содержимого

## CONTENT

Извлекает кодировку из типа содержимого

Параметры:
* stappler::StringView

Возвращает:
* stappler::StringView

# ::stappler::web::getStatusLine(stappler::web::Status)

## BRIEF

Возвращает стандартную строку статуса для ответа

## CONTENT

Возвращает стандартную строку статуса для ответа

Параметры:
* stappler::web::Status

Возвращает:
* stappler::StringView