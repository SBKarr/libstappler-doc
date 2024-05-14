Title: SPWebHostController.h


# EXTRA_WEBSERVER_WEBSERVER_SERVER_SPWEBHOSTCONTROLLER_H_

## BRIEF

Заголовок контроллера хоста

## CONTENT

Заголовок контроллера хоста

# ::stappler::web::HostController

## BRIEF

Контроллер хоста

## CONTENT

Контроллер хоста. Управляет поведением хоста. Интерфейс реального вебсервера перегружает контроллер для своих нужд.

Базовые классы:
* AllocBase


# ::stappler::web::HostController::~HostController()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор

# ::stappler::web::HostController::HostController(stappler::web::Root*,stappler::mempool::base::pool_t*)

## BRIEF

Конструктор

## CONTENT

Доступ: public

Конструктор

Параметры:
* stappler::web::Root* - корень вебсервера
* stappler::mempool::base::pool_t* - базовый пул памяти


# ::stappler::web::HostController::loadComponent(stappler::web::Host const&,stappler::web::HostComponentInfo const&)

## BRIEF

Загружает компонент

## CONTENT

Доступ: public

Загружает компонент

Параметры:
* stappler::web::Host const& - хост
* stappler::web::HostComponentInfo const& - данные компонента

Возвращает:
* bool - true если компонент загружен

# ::stappler::web::HostController::makeUserScheme() const

## BRIEF

Создаёт схему пользователей

## CONTENT

Доступ: public

Создаёт схему пользователей

Возвращает:
* db::Scheme

# ::stappler::web::HostController::makeFileScheme() const

## BRIEF

Создаёт схему файлов

## CONTENT

Доступ: public

Создаёт схему файлов

Возвращает:
* db::Scheme

# ::stappler::web::HostController::makeErrorScheme() const

## BRIEF

Создаёт схему ошибок

## CONTENT

Доступ: public

Создаёт схему ошибок

Возвращает:
* db::Scheme

# ::stappler::web::HostController::initComponents(stappler::web::Host const&,Vector<stappler::web::HostComponentInfo> const&)

## BRIEF

Загружает и инициализирует компоненты

## CONTENT

Доступ: public

Загружает и инициализирует компоненты

Параметры:
* stappler::web::Host const&
* Vector<stappler::web::HostComponentInfo> const&


# ::stappler::web::HostController::initSession(stappler::mem_pool::Value const&)

## BRIEF

Инициализирует сессию

## CONTENT

Доступ: public

Инициализирует сессию

Параметры:
* stappler::mem_pool::Value const&


# ::stappler::web::HostController::initWebhook(stappler::mem_pool::Value const&)

## BRIEF

Инициализирует внешний интерфейс

## CONTENT

Доступ: public

Инициализирует внешний интерфейс

Параметры:
* stappler::mem_pool::Value const&


# ::stappler::web::HostController::setSessionParam(stappler::StringView,stappler::StringView)

## BRIEF

Устанавливает параметры сессии

## CONTENT

Доступ: public

Устанавливает параметры сессии

Параметры:
* stappler::StringView
* stappler::StringView


# ::stappler::web::HostController::setWebhookParam(stappler::StringView,stappler::StringView)

## BRIEF

Устанавливает параметры внешнего интерфейса

## CONTENT

Доступ: public

Устанавливает параметры внешнего интерфейса

Параметры:
* stappler::StringView
* stappler::StringView


# ::stappler::web::HostController::setForceHttps()

## BRIEF

Устанавливает принудительный HTTPS

## CONTENT

Доступ: public

Устанавливает принудительный HTTPS


# ::stappler::web::HostController::setHostSecret(stappler::StringView)

## BRIEF

Устанавливает секретный ключ хоста

## CONTENT

Доступ: public

Устанавливает секретный ключ хоста

Параметры:
* stappler::StringView


# ::stappler::web::HostController::setHostKey(crypto::PrivateKey&&)

## BRIEF

Устанавливает закрытый ключ хоста

## CONTENT

Доступ: public

Устанавливает закрытый ключ хоста

Параметры:
* crypto::PrivateKey&&


# ::stappler::web::HostController::addAllowed(stappler::StringView)

## BRIEF

Добавляет разрешённый путь хоста

## CONTENT

Доступ: public

Добавляет разрешённый путь хоста

Параметры:
* stappler::StringView


# ::stappler::web::HostController::init(stappler::web::Host const&)

## BRIEF

Инициализирует компонент

## CONTENT

Доступ: public

Инициализирует компонент

Параметры:
* stappler::web::Host const&


# ::stappler::web::HostController::initKeyPair(stappler::web::Host const&,db::Adapter const&,stappler::BytesView)

## BRIEF

Создаёт новую пару ключей для сервера

## CONTENT

Доступ: public

Создаёт новую пару ключей для сервера

Параметры:
* stappler::web::Host const& - хост
* db::Adapter const& - адаптер БД
* stappler::BytesView - секретный ключ

Возвращает:
* bool

# ::stappler::web::HostController::initHostKeys(stappler::web::Host const&,db::Adapter const&)

## BRIEF

Инициализирует ключи сервера

## CONTENT

Доступ: public

Инициализирует ключи сервера

Параметры:
* stappler::web::Host const&
* db::Adapter const&


# ::stappler::web::HostController::handleChildInit(stappler::web::Host const&,stappler::mempool::base::pool_t*)

## BRIEF

Обрабатывает событие инициализации вебсервера

## CONTENT

Доступ: public

Обрабатывает событие инициализации вебсервера

Параметры:
* stappler::web::Host const&
* stappler::mempool::base::pool_t*


# ::stappler::web::HostController::initTransaction(db::Transaction&)

## BRIEF

Инициализирует транзакцию БД

## CONTENT

Доступ: public

Инициализирует транзакцию БД

Параметры:
* db::Transaction&


# ::stappler::web::HostController::setDbParams(stappler::StringView)

## BRIEF

Устанавливает параметры БД

## CONTENT

Доступ: public

Устанавливает параметры БД

Параметры:
* stappler::StringView


# ::stappler::web::HostController::getSessionInfo() const

## BRIEF

Возвращает данные сессии

## CONTENT

Доступ: public

Возвращает данные сессии

Возвращает:
* stappler::web::SessionInfo const&

# ::stappler::web::HostController::getWebhookInfo() const

## BRIEF

Возвращает информацию о внешнем интерфейсе

## CONTENT

Доступ: public

Возвращает информацию о внешнем интерфейсе

Возвращает:
* stappler::web::WebhookInfo const&

# ::stappler::web::HostController::getHostInfo() const

## BRIEF

Возвращает информацию о хосте

## CONTENT

Доступ: public

Возвращает информацию о хосте

Возвращает:
* stappler::web::HostInfo const&

# ::stappler::web::HostController::getRoot() const

## BRIEF

Возвращает корневой объект вебсервера

## CONTENT

Доступ: public

Возвращает корневой объект вебсервера

Возвращает:
* stappler::web::Root*

# ::stappler::web::HostController::getDbParams() const

## BRIEF

Возвращает параметры БД

## CONTENT

Доступ: public

Возвращает параметры БД

Возвращает:
* Map<stappler::StringView, stappler::StringView> const&

# ::stappler::web::HostController::openConnection(stappler::mempool::base::pool_t*,bool) const

## BRIEF

Открывает соединение с БД

## CONTENT

Доступ: public

Открывает соединение с БД

Параметры:
* stappler::mempool::base::pool_t*
* bool

Возвращает:
* db::sql::Driver::Handle

# ::stappler::web::HostController::closeConnection(db::sql::Driver::Handle) const

## BRIEF

Закрывает соединение с БД

## CONTENT

Доступ: public

Закрывает соединение с БД

Параметры:
* db::sql::Driver::Handle


# ::stappler::web::HostController::openInternalDriver(db::sql::Driver::Handle)

## BRIEF

Открывает соединение с внутренним драйвером вебсервера (если он есть)

## CONTENT

Доступ: protected

Открывает соединение с внутренним драйвером вебсервера (если он есть)

Параметры:
* db::sql::Driver::Handle

Возвращает:
* db::sql::Driver*

# ::stappler::web::HostController::loadDsoComponent(stappler::web::Host const&,stappler::web::HostComponentInfo const&)

## BRIEF

Загружает компонент из динамического модуля

## CONTENT

Доступ: protected

Загружает компонент из динамического модуля

Параметры:
* stappler::web::Host const&
* stappler::web::HostComponentInfo const&

Возвращает:
* bool

# ::stappler::web::HostController::loadWasmComponent(stappler::web::Host const&,stappler::web::HostComponentInfo const&)

## BRIEF

Загружает компонент из модуля WenAssembly

## CONTENT

Доступ: protected

Загружает компонент из модуля WenAssembly

Параметры:
* stappler::web::Host const&
* stappler::web::HostComponentInfo const&

Возвращает:
* bool

# ::stappler::web::HostController::loadWasmModule(stappler::StringView,stappler::StringView)

## BRIEF

Загружает модуль WebAssembly

## CONTENT

Доступ: protected

Загружает модуль WebAssembly

Параметры:
* stappler::StringView
* stappler::StringView

Возвращает:
* wasm::Module*

# ::stappler::web::HostController::resolvePath(stappler::StringView) const

## BRIEF

Находит путь до модуля

## CONTENT

Доступ: protected

Находит путь до модуля

Параметры:
* stappler::StringView

Возвращает:
* stappler::mem_pool::String

# ::stappler::web::HostController::handleTemplateError(stappler::StringView const&)

## BRIEF

Обрабатывает ошибку компиляции шаблона

## CONTENT

Доступ: protected

Обрабатывает ошибку компиляции шаблона

Параметры:
* stappler::StringView const&


# ::stappler::web::HostController::_root

## BRIEF

Корень вебсервера

## CONTENT

Доступ: protected

Корень вебсервера

Тип: stappler::web::Root*


# ::stappler::web::HostController::_rootPool

## BRIEF

Исходный пул памяти

## CONTENT

Доступ: protected

Исходный пул памяти

Тип: stappler::mempool::base::pool_t*


# ::stappler::web::HostController::_defaultUserScheme

## BRIEF

Стандартная схема пользователей

## CONTENT

Доступ: protected

Стандартная схема пользователей

Тип: db::Scheme


# ::stappler::web::HostController::_defaultFileScheme

## BRIEF

Стандартная схема файлов

## CONTENT

Доступ: protected

Стандартная схема файлов

Тип: db::Scheme


# ::stappler::web::HostController::_defaultErrorScheme

## BRIEF

Стандартная схема ошибок

## CONTENT

Доступ: protected

Стандартная схема ошибок

Тип: db::Scheme


# ::stappler::web::HostController::_hostPrivKey

## BRIEF

Закрытый ключ

## CONTENT

Доступ: protected

Закрытый ключ

Тип: crypto::PrivateKey


# ::stappler::web::HostController::_hostPubKey

## BRIEF

Открытый ключ

## CONTENT

Доступ: protected

Открытый ключ

Тип: crypto::PublicKey


# ::stappler::web::HostController::_hostSecret

## BRIEF

Секретный ключ

## CONTENT

Доступ: protected

Секретный ключ

Тип: string::Sha512::Buf


# ::stappler::web::HostController::_componentsToLoad

## BRIEF

Компоенты для загрузки

## CONTENT

Доступ: protected

Компоенты для загрузки

Тип: Vector<stappler::web::HostComponentInfo>


# ::stappler::web::HostController::_sourceRoot

## BRIEF

Пути для поиска компонентов

## CONTENT

Доступ: protected

Пути для поиска компонентов

Тип: Vector<stappler::StringView>


# ::stappler::web::HostController::_currentComponent

## BRIEF

Текущий компонент в контексте

## CONTENT

Доступ: protected

Текущий компонент в контексте

Тип: stappler::StringView


# ::stappler::web::HostController::_preRequest

## BRIEF

Функции предобработки запросов

## CONTENT

Доступ: protected

Функции предобработки запросов

Тип: Vector<Function<stappler::web::Status (stappler::web::Request &)>>


# ::stappler::web::HostController::_components

## BRIEF

Загруенные компоненты

## CONTENT

Доступ: protected

Загруенные компоненты

Тип: Map<stappler::StringView, stappler::web::HostComponent *>


# ::stappler::web::HostController::_typedComponents

## BRIEF

Типизированные компоненты

## CONTENT

Доступ: protected

Типизированные компоненты

Тип: Map<std::type_index, stappler::web::HostComponent *>


# ::stappler::web::HostController::_requests

## BRIEF

Обработчики запросов

## CONTENT

Доступ: protected

Обработчики запросов

Тип: Map<stappler::StringView, stappler::web::RequestSchemeInfo>


# ::stappler::web::HostController::_resources

## BRIEF

Обработчики ресурсов

## CONTENT

Доступ: protected

Обработчики ресурсов

Тип: Map<const db::Scheme *, stappler::web::ResourceSchemeInfo>


# ::stappler::web::HostController::_schemes

## BRIEF

Схемы данных

## CONTENT

Доступ: protected

Схемы данных

Тип: Map<stappler::StringView, const db::Scheme *>


# ::stappler::web::HostController::_websockets

## BRIEF

Вебсокеты

## CONTENT

Доступ: protected

Вебсокеты

Тип: Map<stappler::StringView, stappler::web::WebsocketManager *>


# ::stappler::web::HostController::_protectedList

## BRIEF

Защищённые пути

## CONTENT

Доступ: protected

Защищённые пути

Тип: Set<stappler::StringView>


# ::stappler::web::HostController::_hostInfo

## BRIEF

Информация о хосте

## CONTENT

Доступ: protected

Информация о хосте

Тип: stappler::web::HostInfo


# ::stappler::web::HostController::_session

## BRIEF

Информация о сессии

## CONTENT

Доступ: protected

Информация о сессии

Тип: stappler::web::SessionInfo


# ::stappler::web::HostController::_webhook

## BRIEF

Информация о внешнем интерфейсе

## CONTENT

Доступ: protected

Информация о внешнем интерфейсе

Тип: stappler::web::WebhookInfo


# ::stappler::web::HostController::_compression

## BRIEF

Данные модуля сжатия

## CONTENT

Доступ: protected

Данные модуля сжатия

Тип: stappler::web::CompressionInfo


# ::stappler::web::HostController::_childInit

## BRIEF

Флаг инициализации объектов

## CONTENT

Доступ: protected

Флаг инициализации объектов

Тип: bool


# ::stappler::web::HostController::_loadingFalled

## BRIEF

Флаг ошибки загрузки

## CONTENT

Доступ: protected

Флаг ошибки загрузки

Тип: bool


# ::stappler::web::HostController::_forceHttps

## BRIEF

Флаг принудительного HTTPS

## CONTENT

Доступ: protected

Флаг принудительного HTTPS

Тип: bool


# ::stappler::web::HostController::_lastDatabaseCleanup

## BRIEF

Время очистки БД

## CONTENT

Доступ: protected

Время очистки БД

Тип: stappler::Time


# ::stappler::web::HostController::_lastTemplateUpdate

## BRIEF

Время обновления шаблонов

## CONTENT

Доступ: protected

Время обновления шаблонов

Тип: stappler::Time


# ::stappler::web::HostController::_broadcastId

## BRIEF

Последнее обработанное широковещательное сообщение

## CONTENT

Доступ: protected

Последнее обработанное широковещательное сообщение

Тип: int64_t


# ::stappler::web::HostController::_pugCache

## BRIEF

Кеш шаблонов

## CONTENT

Доступ: protected

Кеш шаблонов

Тип: pug::Cache


# ::stappler::web::HostController::_allowedIps

## BRIEF

Допустимые адреса для защищённой авторизации

## CONTENT

Доступ: protected

Допустимые адреса для защищённой авторизации

Тип: Vector<Pair<uint32_t, uint32_t>>


# ::stappler::web::HostController::_dbParams

## BRIEF

Параметры БД

## CONTENT

Доступ: protected

Параметры БД

Тип: Map<stappler::StringView, stappler::StringView>


# ::stappler::web::HostController::_customDbd

## BRIEF

Модуль соединений с БД

## CONTENT

Доступ: protected

Модуль соединений с БД

Тип: stappler::web::DbdModule*


# ::stappler::web::HostController::_dbDriver

## BRIEF

Драйвер БД

## CONTENT

Доступ: protected

Драйвер БД

Тип: db::sql::Driver*


# ::stappler::web::HostController::_wasmModules

## BRIEF

Модули WebAssembly

## CONTENT

Доступ: protected

Модули WebAssembly

Тип: Map<stappler::StringView, Rc<wasm::Module>>

# ::stappler::web::HostController::getRootPool() const

## BRIEF

Возвращает базовый пул памяти

## CONTENT

Доступ: public

Возвращает базовый пул памяти

Возвращает:
* stappler::mempool::base::pool_t*