Title: SPWebHost.h


# EXTRA_WEBSERVER_WEBSERVER_SERVER_SPWEBHOST_H_

## BRIEF

Заголовок хоста вебсервера

## CONTENT

Заголовок хоста вебсервера


# ::stappler::web::Host

## BRIEF

Класс хоста вебсервера

## CONTENT

Класс хоста вебсервера. Класс хоста - обёртка вокруг контроллера, не имеющая собственноых данных.

Базовые классы:
* AllocBase


# ::stappler::web::Host::HandlerCallback

## BRIEF

Функция создания обработчика запроса

## CONTENT

Доступ: public

Функция создания обработчика запроса

# ::stappler::web::Host::getCurrent()

## BRIEF

Возвращает текущий хост из контекста потока

## CONTENT

Доступ: public

Возвращает текущий хост из контекста потока

Возвращает:
* stappler::web::Host

# ::stappler::web::Host::Host()

## BRIEF

Конструктор по умолчанию

## CONTENT

Доступ: public

Конструктор по умолчанию, создаёт неопределённый хост.


# ::stappler::web::Host::Host(stappler::web::HostController*)

## BRIEF

Создаёт хост из структуры контроллера

## CONTENT

Доступ: public

Создаёт хост из структуры контроллера

Параметры:
* stappler::web::HostController*


# ::stappler::web::Host::operator=(stappler::web::HostController*)

## BRIEF

Создаёт хост из структуры контроллера

## CONTENT

Доступ: public

Создаёт хост из структуры контроллера

Параметры:
* stappler::web::HostController*

Возвращает:
* stappler::web::Host&

# ::stappler::web::Host::Host(stappler::web::Host&&)

## BRIEF

Конструктор перемещения

## CONTENT

Доступ: public

Конструктор перемещения

Параметры:
* stappler::web::Host&&


# ::stappler::web::Host::operator=(stappler::web::Host&&)

## BRIEF

Оператор перемещения

## CONTENT

Доступ: public

Оператор перемещения

Параметры:
* stappler::web::Host&&

Возвращает:
* stappler::web::Host&

# ::stappler::web::Host::Host(stappler::web::Host const&)

## BRIEF

Конструктор копирования

## CONTENT

Доступ: public

Конструктор копирования

Параметры:
* stappler::web::Host const&


# ::stappler::web::Host::operator=(stappler::web::Host const&)

## BRIEF

Оператор копирования

## CONTENT

Доступ: public

Оператор копирования

Параметры:
* stappler::web::Host const&

Возвращает:
* stappler::web::Host&

# ::stappler::web::Host::checkBroadcasts()

## BRIEF

Проверяет широковещательные сообщения

## CONTENT

Доступ: public

Проверяет широковещательные сообщения. Если сообщения есть - они будут получены компонентами.


# ::stappler::web::Host::handleChildInit(stappler::mempool::base::pool_t*)

## BRIEF

Обрабатывает событие инициализации дочерних объектов вебсервера

## CONTENT

Доступ: public

Обрабатывает событие инициализации дочерних объектов вебсервера

Параметры:
* stappler::mempool::base::pool_t*


# ::stappler::web::Host::handleHeartBeat(stappler::mempool::base::pool_t*)

## BRIEF

Обрабатывает событие контрольного таймера

## CONTENT

Доступ: public

Обрабатывает событие контрольного таймера

Параметры:
* stappler::mempool::base::pool_t*


# ::stappler::web::Host::handleBroadcast(stappler::mem_pool::Value const&)

## BRIEF

Обрабатывает широковещаетльное сообщение

## CONTENT

Доступ: public

Обрабатывает широковещаетльное сообщение

Параметры:
* stappler::mem_pool::Value const&


# ::stappler::web::Host::handleBroadcast(stappler::BytesView const&)

## BRIEF

Обрабатывает широковещаетльное сообщение

## CONTENT

Доступ: public

Обрабатывает широковещаетльное сообщение
Параметры:
* stappler::BytesView const&


# ::stappler::web::Host::handleRequest(stappler::web::Request&)

## BRIEF

Обрабатывает новый запрос

## CONTENT

Доступ: public

Обрабатывает новый запрос

Параметры:
* stappler::web::Request&

Возвращает:
* stappler::web::Status - статус обработки запроса

# ::stappler::web::Host::initTransaction(db::Transaction&)

## BRIEF

Инициализирует новую транзакцию к БД

## CONTENT

Доступ: public

Инициализирует новую транзакцию к БД

Параметры:
* db::Transaction&


# ::stappler::web::Host::addSourceRoot(stappler::StringView)

## BRIEF

Добавляет путь для поиска подключаемых компонентов

## CONTENT

Доступ: public

Добавляет путь для поиска подключаемых компонентов

Параметры:
* stappler::StringView


# ::stappler::web::Host::addComponentByParams(stappler::StringView)

## BRIEF

Добавляет подключаемый компонент по списку параметров

## CONTENT

Доступ: public

Добавляет подключаемый компонент по списку параметров

Формат: <Имя>:<Исходный файл>:<функция для создания>

Параметры:
* stappler::StringView


# ::stappler::web::Host::addWasmComponentByParams(stappler::StringView,stappler::StringView)

## BRIEF

Добавялет компонент WebAssembly

## CONTENT

Доступ: public

Добавялет компонент WebAssembly

Параметры:
* stappler::StringView - путь к файлу
* stappler::StringView - функция создания компонента


# ::stappler::web::Host::addAllow(stappler::StringView)

## BRIEF

Открывает всеобщий доступ к директории хоста

## CONTENT

Доступ: public

Открывает всеобщий доступ к директории хоста

Параметры:
* stappler::StringView


# ::stappler::web::Host::setSessionParams(stappler::StringView)

## BRIEF

Устанавливает параметры сессии

## CONTENT

Доступ: public

Устанавливает параметры сессии

Параметры:
* stappler::StringView


# ::stappler::web::Host::setHostSecret(stappler::StringView)

## BRIEF

Устанавливает секретный ключ сервера

## CONTENT

Доступ: public

Устанавливает секретный ключ сервера

Параметры:
* stappler::StringView


# ::stappler::web::Host::setWebHookParams(stappler::StringView)

## BRIEF

Устанавливает параметры информационного вызова

## CONTENT

Доступ: public

Устанавливает параметры информационного вызова

Параметры:
* stappler::StringView


# ::stappler::web::Host::setForceHttps()

## BRIEF

Устанвливает режим принудительного HTTPS

## CONTENT

Доступ: public

Устанвливает режим принудительного HTTPS


# ::stappler::web::Host::setProtectedList(stappler::StringView)

## BRIEF

Добавляет защищённые пути в список

## CONTENT

Доступ: public

Добавляет защищённые пути в список. Пользователи не могут получать доступ к защищённым путям.

Параметры:
* stappler::StringView


# ::stappler::web::Host::setDbParams(stappler::StringView)

## BRIEF

Устанавливает параметры БД

## CONTENT

Доступ: public

Устанавливает параметры БД. См. параметры драйвера БД.

Параметры:
* stappler::StringView


# ::stappler::web::Host::addProtectedLocation(stappler::StringView const&)

## BRIEF

Добавляет защищённый путь хоста

## CONTENT

Доступ: public

Добавляет защищённый путь хоста. Пользователи не могут получать доступ к защищённым путям.

Параметры:
* stappler::StringView const&


# ::stappler::web::Host::getComponent<typename>(stappler::StringView const&) const

## BRIEF

Получает компонент хоста по его имени и типу

## CONTENT

Доступ: public

Получает компонент хоста по его имени и типу

Параметры шаблона:
* typename Component

Параметры:
* stappler::StringView const&

Возвращает:
* Component*

# ::stappler::web::Host::getComponent<typename>() const

## BRIEF

Получает компонент хоста по его типу

## CONTENT

Доступ: public

Получает компонент хоста по его типу

Параметры шаблона:
* typename Component

Возвращает:
* Component*

# ::stappler::web::Host::addComponent<typename>(Component*)

## BRIEF

Добавляет новый компонент

## CONTENT

Доступ: public

Добавляет новый компонент

Параметры шаблона:
* typename Component

Параметры:
* Component*

Возвращает:
* Component*

# ::stappler::web::Host::getComponents() const

## BRIEF

Возвращает список компонентов

## CONTENT

Доступ: public

Возвращает список компонентов

Возвращает:
* Map<stappler::StringView, stappler::web::HostComponent *> const&

# ::stappler::web::Host::addPreRequest(Function<stappler::web::Status (stappler::web::Request &)>&&) const

## BRIEF

Добавляет функцию предварительной обработки запроса

## CONTENT

Доступ: public

Добавляет функцию предварительной обработки запроса

Параметры:
* Function<stappler::web::Status (stappler::web::Request &)>&&


# ::stappler::web::Host::addHandler(stappler::StringView,stappler::web::Host::HandlerCallback const&,stappler::mem_pool::Value const&) const

## BRIEF

Добавялет обработчик запроса

## CONTENT

Доступ: public

Добавялет обработчик запроса

Параметры:
* stappler::StringView - путь для запроса
* stappler::web::Host::HandlerCallback const& - функция создания обработчика
* stappler::mem_pool::Value const& - дополнительные данные


# ::stappler::web::Host::addHandler(std::initializer_list<StringView>,stappler::web::Host::HandlerCallback const&,stappler::mem_pool::Value const&) const

## BRIEF

Добавялет обработчик запроса

## CONTENT

Доступ: public

Добавялет обработчик запроса

Параметры:
* std::initializer_list<StringView> - список путей для запроса
* stappler::web::Host::HandlerCallback const& - функция создания обработчика
* stappler::mem_pool::Value const& - дополнительные данные


# ::stappler::web::Host::addHandler(stappler::StringView,stappler::web::RequestHandlerMap const*) const

## BRIEF

Добавялет обработчик запроса в виде карты обработки

## CONTENT

Доступ: public

Добавялет обработчик запроса в виде карты обработки

Параметры:
* stappler::StringView - путь для запроса
* stappler::web::RequestHandlerMap const* - карта обработки


# ::stappler::web::Host::addHandler(std::initializer_list<StringView>,stappler::web::RequestHandlerMap const*) const

## BRIEF

Добавялет обработчик запроса в виде карты обработки

## CONTENT

Доступ: public

Добавялет обработчик запроса в виде карты обработки

Параметры:
* std::initializer_list<StringView> - список путей для запроса
* stappler::web::RequestHandlerMap const* - карта обработки


# ::stappler::web::Host::addResourceHandler(stappler::StringView,db::Scheme const&) const

## BRIEF

Добавляет автоматический интерфейс схемы данных к пути запроса

## CONTENT

Доступ: public

Добавляет автоматический интерфейс схемы данных к пути запроса

Параметры:
* stappler::StringView
* db::Scheme const&


# ::stappler::web::Host::addResourceHandler(stappler::StringView,db::Scheme const&,stappler::mem_pool::Value const&) const

## BRIEF

Добавляет автоматический интерфейс схемы данных к пути запроса

## CONTENT

Доступ: public

Добавляет автоматический интерфейс схемы данных к пути запроса

Параметры:
* stappler::StringView
* db::Scheme const&
* stappler::mem_pool::Value const& - дополнительные данные


# ::stappler::web::Host::addMultiResourceHandler(stappler::StringView,std::initializer_list<Pair<const StringView, const db::Scheme *>>&&) const

## BRIEF

Добавляет автоматический интерфейс схемы данных к пути запроса

## CONTENT

Доступ: public

Добавляет автоматический интерфейс схемы данных к пути запроса

Параметры:
* stappler::StringView - путь запроса
* std::initializer_list<Pair<const StringView, const db::Scheme *>>&& - список схем и их названий


# ::stappler::web::Host::addWebsocket(stappler::StringView,stappler::web::WebsocketManager*) const

## BRIEF

Добавляет обработчик вебсокета

## CONTENT

Доступ: public

Добавляет обработчик вебсокета

Параметры:
* stappler::StringView - путь запроса
* stappler::web::WebsocketManager*


# ::stappler::web::Host::exportScheme(db::Scheme const&) const

## BRIEF

Экспортирует схему данных для БД

## CONTENT

Доступ: public

Экспортирует схему данных для БД

Параметры:
* db::Scheme const&

Возвращает:
* db::Scheme const*

# ::stappler::web::Host::getScheme(stappler::StringView const&) const

## BRIEF

Возвращает схему данных по имени

## CONTENT

Доступ: public

Возвращает схему данных по имени

Параметры:
* stappler::StringView const&

Возвращает:
* db::Scheme const*

# ::stappler::web::Host::getFileScheme() const

## BRIEF

Возвращает схему данных файла

## CONTENT

Доступ: public

Возвращает схему данных файла

Возвращает:
* db::Scheme const*

# ::stappler::web::Host::getUserScheme() const

## BRIEF

Возвращает схему данных пользователя

## CONTENT

Доступ: public

Возвращает схему данных пользователя

Возвращает:
* db::Scheme const*

# ::stappler::web::Host::getErrorScheme() const

## BRIEF

Возвращает схему данных ошибок

## CONTENT

Доступ: public

Возвращает схему данных ошибок

Возвращает:
* db::Scheme const*

# ::stappler::web::Host::getMutable(db::Scheme const*) const

## BRIEF

Возвращает схему данных, которую можно изменять

## CONTENT

Доступ: public

Возвращает схему данных, которую можно изменять

Параметры:
* db::Scheme const*

Возвращает:
* db::Scheme* - схема или nullptr если изменения невозможны


# ::stappler::web::Host::getResourcePath(db::Scheme const&) const

## BRIEF

Возвращает путь к автоматическому ресурсу для схемы, если зарегистрирован.

## CONTENT

Доступ: public

Возвращает путь к автоматическому ресурсу для схемы, если зарегистрирован.

Параметры:
* db::Scheme const&

Возвращает:
* stappler::StringView

# ::stappler::web::Host::getSchemes() const

## BRIEF

Возвращает схемы данных хоста

## CONTENT

Доступ: public

Возвращает схемы данных хоста

Возвращает:
* Map<stappler::StringView, const db::Scheme *> const&

# ::stappler::web::Host::getResources() const

## BRIEF

Возвращает автоматические ресурсы

## CONTENT

Доступ: public

Возвращает автоматические ресурсы

Возвращает:
* Map<const db::Scheme *, stappler::web::ResourceSchemeInfo> const&

# ::stappler::web::Host::getRequestHandlers() const

## BRIEF

Возвращает список обработчиков запроса

## CONTENT

Доступ: public

Возвращает список обработчиков запроса

Возвращает:
* Map<stappler::StringView, stappler::web::RequestSchemeInfo> const&

# ::stappler::web::Host::reportError(stappler::mem_pool::Value const&)

## BRIEF

Сообщает об ошибке

## CONTENT

Доступ: public

Сообщает об ошибке

Параметры:
* stappler::mem_pool::Value const&


# ::stappler::web::Host::performTask(stappler::web::AsyncTask*,bool) const

## BRIEF

Выполняет задачу на хосте

## CONTENT

Доступ: public

Выполняет задачу на хосте

Параметры:
* stappler::web::AsyncTask*
* bool - true если задачу следует добавлять первой среди задач с аналогичным приоритетом

Возвращает:
* bool - true если задача запущена

# ::stappler::web::Host::scheduleTask(stappler::web::AsyncTask*,stappler::TimeInterval) const

## BRIEF

Выполняет задачу на хосте

## CONTENT

Доступ: public

Выполняет задачу на хосте

Параметры:
* stappler::web::AsyncTask*
* stappler::TimeInterval - время, через которое следует начать выполнение

Возвращает:
* bool - true если задача запущена

# ::stappler::web::Host::performWithStorage(Callback<void (const db::Transaction &)> const&,bool) const

## BRIEF

Запрашивает транзакцию БД и выполняет функцию с ней

## CONTENT

Доступ: public

Запрашивает транзакцию БД и выполняет функцию с ней

Параметры:
* Callback<void (const db::Transaction &)> const&
* bool - true если всегда начинать новую транзакцию


# ::stappler::web::Host::acquireDbForRequest(stappler::web::Request const&) const

## BRIEF

Запрашивает интерфейс к БД ддля запроса

## CONTENT

Доступ: public

Запрашивает интерфейс к БД ддля запроса

Параметры:
* stappler::web::Request const&

Возвращает:
* db::BackendInterface*

# ::stappler::web::Host::operator bool() const

## BRIEF

Проверяет, что хост связан с контроллером

## CONTENT

Доступ: public

Проверяет, что хост связан с контроллером

Возвращает:
* bool

# ::stappler::web::Host::getThreadPool() const

## BRIEF

Возвращает базовый потокобезопасный пул

## CONTENT

Доступ: public

Возвращает базовый потокобезопасный пул

Возвращает:
* stappler::mempool::base::pool_t*

# ::stappler::web::Host::next() const

## BRIEF

Возвращает следующий хост на сервере

## CONTENT

Доступ: public

Возвращает следующий хост на сервере

Возвращает:
* stappler::web::Host

# ::stappler::web::Host::getHostInfo() const

## BRIEF

Возвращает информацию о хосте

## CONTENT

Доступ: public

Возвращает информацию о хосте

Возвращает:
* stappler::web::HostInfo const&

# ::stappler::web::Host::getSessionInfo() const

## BRIEF

Возвращает информацию о сессии

## CONTENT

Доступ: public

Возвращает информацию о сессии

Возвращает:
* stappler::web::SessionInfo const&

# ::stappler::web::Host::getController() const

## BRIEF

Возвращает контроллер

## CONTENT

Доступ: public

Возвращает контроллер

Возвращает:
* stappler::web::HostController*

# ::stappler::web::Host::getRoot() const

## BRIEF

Возвращает корень вебсервера

## CONTENT

Доступ: public

Возвращает корень вебсервера

Возвращает:
* stappler::web::Root*

# ::stappler::web::Host::getPugCache() const

## BRIEF

Возвращает кеш шаблонов хоста

## CONTENT

Доступ: public

Возвращает кеш шаблонов хоста

Возвращает:
* pug::Cache*

# ::stappler::web::Host::getDbDriver() const

## BRIEF

Возвращает драйвер БД

## CONTENT

Доступ: public

Возвращает драйвер БД

Возвращает:
* db::sql::Driver*

# ::stappler::web::Host::setHostKey(stappler::BytesView) const

## BRIEF

Устанавливает закрытый ключ хоста

## CONTENT

Доступ: public

Устанавливает закрытый ключ хоста

Параметры:
* stappler::BytesView

Возвращает:
* bool

# ::stappler::web::Host::setHostKey(crypto::PrivateKey&&) const

## BRIEF

Устанавливает закрытый ключ хоста

## CONTENT

Доступ: public

Устанавливает закрытый ключ хоста

Параметры:
* crypto::PrivateKey&&


# ::stappler::web::Host::getHostPublicKey() const

## BRIEF

Возвращает публичный ключ хоста

## CONTENT

Доступ: public

Возвращает публичный ключ хоста

Возвращает:
* crypto::PublicKey const&

# ::stappler::web::Host::getHostPrivateKey() const

## BRIEF

Возвращает закрытый ключ хоста

## CONTENT

Доступ: public

Возвращает закрытый ключ хоста

Возвращает:
* crypto::PrivateKey const&

# ::stappler::web::Host::getHostSecret() const

## BRIEF

Возвращает секретный ключ сервера

## CONTENT

Доступ: public

Возвращает секретный ключ сервера

Возвращает:
* stappler::BytesView

# ::stappler::web::Host::isSecureAuthAllowed(stappler::web::Request const&) const

## BRIEF

Проверяет, доступна ли защищённая серверная авторизация

## CONTENT

Доступ: public

Проверяет, доступна ли защищённая серверная авторизация

Параметры:
* stappler::web::Request const&

Возвращает:
* bool

# ::stappler::web::Host::getCompressionConfig() const

## BRIEF

Возаращет конфигурацию модуля сжатия данных

## CONTENT

Доступ: public

Возаращет конфигурацию модуля сжатия данных

Возвращает:
* stappler::web::CompressionInfo*

# ::stappler::web::Host::getDocumentRootPath(stappler::StringView) const

## BRIEF

Возвращает путь в файловой системе относительно корня хоста

## CONTENT

Доступ: public

Возвращает путь в файловой системе относительно корня хоста

Параметры:
* stappler::StringView

Возвращает:
* stappler::mem_pool::String

# ::stappler::web::Host::processReports() const

## BRIEF

Обрабатывает накопленные отчёты хоста

## CONTENT

Доступ: protected

Обрабатывает накопленные отчёты хоста


# ::stappler::web::Host::addComponentWithName(stappler::StringView const&,stappler::web::HostComponent*)

## BRIEF

Добавляет компонент

## CONTENT

Доступ: protected

Добавляет компонент

Параметры:
* stappler::StringView const&
* stappler::web::HostComponent*


# ::stappler::web::Host::getHostComponent(stappler::StringView const&) const

## BRIEF

Возвращает компонент

## CONTENT

Доступ: protected

Возвращает компонент

Параметры:
* stappler::StringView const&

Возвращает:
* stappler::web::HostComponent*

# ::stappler::web::Host::getHostComponent(std::type_index) const

## BRIEF

Возвращает компонент

## CONTENT

Доступ: protected

Возвращает компонент

Параметры:
* std::type_index

Возвращает:
* stappler::web::HostComponent*

# ::stappler::web::Host::runErrorReportTask(stappler::web::Request const&,Vector<stappler::mem_pool::Value> const&)

## BRIEF

Запускает задачу сообщения об ошибке

## CONTENT

Доступ: protected

Запускает задачу сообщения об ошибке

Параметры:
* stappler::web::Request const&
* Vector<stappler::mem_pool::Value> const&


# ::stappler::web::Host::_config

## BRIEF

Контроллер вебсервера

## CONTENT

Доступ: protected

Контроллер вебсервера

Тип: stappler::web::HostController*
