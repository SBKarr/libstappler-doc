Title: SPWebRoot.h


# EXTRA_WEBSERVER_WEBSERVER_SERVER_SPWEBROOT_H_

## BRIEF

Заголовок корня вебсервера

## CONTENT

Заголовок корня вебсервера


# ::stappler::web::Root

## BRIEF

Корень вебсервера

## CONTENT

Корень вебсервера. Управляет набором хостов, доступом к БД, конфигурацией и асинхронными задачами.

Реализация вебсервера наследует свой корень от этого объекта.

Базовые классы:
* db::ApplicationInterface
* AllocBase


# ::stappler::web::Root::Stat

## BRIEF

Статистика корня вебсервера

## CONTENT

Доступ: public

Статистика корня вебсервера


# ::stappler::web::Root::Stat::requestsReceived

## BRIEF

Число принятых запросов

## CONTENT

Число принятых запросов

Тип: uint64_t


# ::stappler::web::Root::Stat::heartbeatCounter

## BRIEF

Число тактов системного таймера

## CONTENT

Число тактов системного таймера

Тип: uint64_t


# ::stappler::web::Root::Stat::dbQueriesReleased

## BRIEF

Число начатых запросов к БД

## CONTENT

Число начатых запросов к БД

Тип: uint64_t


# ::stappler::web::Root::Stat::dbQueriesPerformed

## BRIEF

Число завершённых запросов к БД

## CONTENT

Число завершённых запросов к БД

Тип: uint64_t


# ::stappler::web::Root::ErrorNotificator

## BRIEF

Структура уведомления об ошибках

## CONTENT

Доступ: public

Структура уведомления об ошибках

Базовые классы:
* AllocBase


# ::stappler::web::Root::ErrorNotificator::error

## BRIEF

Функция сообщения об ошибке

## CONTENT

Функция сообщения об ошибке

Тип: Function<void (stappler::mem_pool::Value &&)>


# ::stappler::web::Root::ErrorNotificator::debug

## BRIEF

Функция отладочного сообщения

## CONTENT

Функция отладочного сообщения

Тип: Function<void (stappler::mem_pool::Value &&)>


# ::stappler::web::Root::ErrorNotificatorKey

## BRIEF

Ключ для хранения интерфейса уведомлений

## CONTENT

Доступ: public

Ключ для хранения интерфейса уведомлений

Тип: char const* const


# ::stappler::web::Root::getCurrent()

## BRIEF

Возвращает текущий корень из контекста потока

## CONTENT

Доступ: public

Возвращает текущий корень из контекста потока

Возвращает:
* stappler::web::Root*

# ::stappler::web::Root::parseParameterList(Map<stappler::StringView, stappler::StringView>&,stappler::StringView)

## BRIEF

Разбирает список параметров вебсервера

## CONTENT

Доступ: public

Разбирает список параметров вебсервера

Параметры:
* Map<stappler::StringView, stappler::StringView>&
* stappler::StringView


# ::stappler::web::Root::setErrorNotification(stappler::mempool::base::pool_t*,Function<void (stappler::mem_pool::Value &&)>,Function<void (stappler::mem_pool::Value &&)>)

## BRIEF

Устанавливает интерфейс уведомления для пула памяти

## CONTENT

Доступ: public

Устанавливает интерфейс уведомления для пула памяти

Параметры:
* stappler::mempool::base::pool_t*
* Function<void (stappler::mem_pool::Value &&)>
* Function<void (stappler::mem_pool::Value &&)>


# ::stappler::web::Root::dumpCurrentState(stappler::StringView)

## BRIEF

Выводит инфомрацию о текущем состоянии

## CONTENT

Доступ: public

Выводит инфомрацию о текущем состоянии

Параметры:
* stappler::StringView


# ::stappler::web::Root::~Root()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор


# ::stappler::web::Root::Root(stappler::mempool::base::pool_t*)

## BRIEF

Конструктор

## CONTENT

Доступ: public

Конструктор

Параметры:
* stappler::mempool::base::pool_t* - базовый пул памяти


# ::stappler::web::Root::getStat() const

## BRIEF

Возвращает статистику

## CONTENT

Доступ: public

Возвращает статистику

Возвращает:
* stappler::web::Root::Stat

# ::stappler::web::Root::getServerNameLine() const

## BRIEF

Возвращает строку имени сервера

## CONTENT

Доступ: public

Возвращает строку имени сервера

Возвращает:
* stappler::StringView

# ::stappler::web::Root::isDebugEnabled() const

## BRIEF

Проверяет, включен ли режим отладки

## CONTENT

Доступ: public

Проверяет, включен ли режим отладки

Возвращает:
* bool

# ::stappler::web::Root::setDebugEnabled(bool)

## BRIEF

Включает и выключает режим отладки

## CONTENT

Доступ: public

Включает и выключает режим отладки. В режиме отлажки отладочные сообщения сохраняются.

Параметры:
* bool


# ::stappler::web::Root::performTask(stappler::web::Host const&,stappler::web::AsyncTask*,bool)

## BRIEF

Выполняет асинхронную задачу

## CONTENT

Доступ: public

Выполняет асинхронную задачу

Параметры:
* stappler::web::Host const&
* stappler::web::AsyncTask*
* bool

Возвращает:
* bool

# ::stappler::web::Root::scheduleTask(stappler::web::Host const&,stappler::web::AsyncTask*,stappler::TimeInterval)

## BRIEF

Планирует выполнение асинхронной задачи с задержкой

## CONTENT

Доступ: public

Планирует выполнение асинхронной задачи с задержкой

Параметры:
* stappler::web::Host const&
* stappler::web::AsyncTask*
* stappler::TimeInterval

Возвращает:
* bool

# ::stappler::web::Root::foreachHost(Callback<void (stappler::web::Host &)> const&)

## BRIEF

Перебирает хосты

## CONTENT

Доступ: public

Перебирает хосты

Параметры:
* Callback<void (stappler::web::Host &)> const&


# ::stappler::web::Root::isSecureConnection(stappler::web::Request const&) const

## BRIEF

Проверяет, что соединение запроса защищённое

## CONTENT

Доступ: public

Проверяет, что соединение запроса защищённое

Параметры:
* stappler::web::Request const&

Возвращает:
* bool

# ::stappler::web::Root::getDbDriver(stappler::StringView)

## BRIEF

Возвращает драйвер БД по имени

## CONTENT

Доступ: public

Возвращает драйвер БД по имени

Параметры:
* stappler::StringView

Возвращает:
* db::sql::Driver*

# ::stappler::web::Root::dbdOpen(stappler::mempool::base::pool_t*,stappler::web::Host const&)

## BRIEF

Открывает новое соединение к БД

## CONTENT

Доступ: public

Открывает новое соединение к БД

Параметры:
* stappler::mempool::base::pool_t*
* stappler::web::Host const&

Возвращает:
* db::sql::Driver::Handle

# ::stappler::web::Root::dbdClose(stappler::web::Host const&,db::sql::Driver::Handle)

## BRIEF

Закрывает соединение к БД

## CONTENT

Доступ: public

Закрывает соединение к БД

Параметры:
* stappler::web::Host const&
* db::sql::Driver::Handle


# ::stappler::web::Root::dbdAcquire(stappler::web::Request const&)

## BRIEF

Запрашивает соединение с БД для запроса

## CONTENT

Доступ: public

Запрашивает соединение с БД для запроса

Параметры:
* stappler::web::Request const&

Возвращает:
* db::sql::Driver::Handle

# ::stappler::web::Root::addDb(stappler::StringView)

## BRIEF

Добавляет имя необходимой для работы БД

## CONTENT

Доступ: public

Добавляет имя необходимой для работы БД. Если возможно, она будет создана при запуске.

Параметры:
* stappler::StringView


# ::stappler::web::Root::setDbParams(stappler::StringView)

## BRIEF

Читает параметры БД из строки

## CONTENT

Доступ: public

Читает параметры БД из строки

Параметры:
* stappler::StringView


# ::stappler::web::Root::setThreadsCount(stappler::StringView,stappler::StringView)

## BRIEF

Читает минимальное и максимальное число потоков из строки

## CONTENT

Доступ: public

Читает минимальное и максимальное число потоков из строки

Параметры:
* stappler::StringView
* stappler::StringView


# ::stappler::web::Root::handleHeartbeat(stappler::mempool::base::pool_t*)

## BRIEF

Обрабатывает событие контрольного таймера

## CONTENT

Доступ: public

Обрабатывает событие контрольного таймера

Параметры:
* stappler::mempool::base::pool_t*


# ::stappler::web::Root::handleBroadcast(stappler::mem_pool::Value const&)

## BRIEF

Обрабатывает широковещательное сообщение

## CONTENT

Доступ: public

Обрабатывает широковещательное сообщение

Параметры:
* stappler::mem_pool::Value const&


# ::stappler::web::Root::handleChildInit(stappler::mempool::base::pool_t*)

## BRIEF

Обрабатывает событие инициализации объектов вебсервера

## CONTENT

Доступ: public

Обрабатывает событие инициализации объектов вебсервера

Параметры:
* stappler::mempool::base::pool_t*


# ::stappler::web::Root::runTypeChecker(stappler::web::Request&)

## BRIEF

Запускает проверку типа данных для запроса

## CONTENT

Доступ: public

Запускает проверку типа данных для запроса

Параметры:
* stappler::web::Request&

Возвращает:
* stappler::web::Status

# ::stappler::web::Root::runPostReadRequest(stappler::web::Request&)

## BRIEF

Запускает разбор запроса после чтения

## CONTENT

Доступ: public

Запускает разбор запроса после чтения

Параметры:
* stappler::web::Request&

Возвращает:
* stappler::web::Status

# ::stappler::web::Root::runTranslateName(stappler::web::Request&)

## BRIEF

Запускает трансляцию строки запроса в имя файла

## CONTENT

Доступ: public

Запускает трансляцию строки запроса в имя файла

Параметры:
* stappler::web::Request&

Возвращает:
* stappler::web::Status

# ::stappler::web::Root::runCheckAccess(stappler::web::Request&)

## BRIEF

Проверяет права доступа для запроса

## CONTENT

Доступ: public

Проверяет права доступа для запроса

Параметры:
* stappler::web::Request&

Возвращает:
* stappler::web::Status

# ::stappler::web::Root::runQuickHandler(stappler::web::Request&,int)

## BRIEF

Пытается быстро завершить обработку запроса

## CONTENT

Доступ: public

Пытается быстро завершить обработку запроса

Параметры:
* stappler::web::Request&
* int

Возвращает:
* stappler::web::Status

# ::stappler::web::Root::runInsertFilter(stappler::web::Request&)

## BRIEF

Запускает выбор фильтра входящих данных

## CONTENT

Доступ: public

Запускает выбор фильтра входящих данных

Параметры:
* stappler::web::Request&


# ::stappler::web::Root::runHandler(stappler::web::Request&)

## BRIEF

Запускает конечный обработчик запроса

## CONTENT

Доступ: public

Запускает конечный обработчик запроса

Параметры:
* stappler::web::Request&

Возвращает:
* stappler::web::Status

# ::stappler::web::Root::handleFilterInit(stappler::web::InputFilter*)

## BRIEF

Инифиализирует фильтр входящих данных

## CONTENT

Доступ: public

Инифиализирует фильтр входящих данных

Параметры:
* stappler::web::InputFilter*


# ::stappler::web::Root::handleFilterUpdate(stappler::web::InputFilter*)

## BRIEF

Обновляет фильтр входящих данных

## CONTENT

Доступ: public

Обновляет фильтр входящих данных

Параметры:
* stappler::web::InputFilter*


# ::stappler::web::Root::handleFilterComplete(stappler::web::InputFilter*)

## BRIEF

Завершает фильтр входящих данных

## CONTENT

Доступ: public

Завершает фильтр входящих данных

Параметры:
* stappler::web::InputFilter*


# ::stappler::web::Root::getAdapterFromContext() const

## BRIEF

Получает адаптер БД из контекста

## CONTENT

Доступ: public

Получает адаптер БД из контекста

Возвращает:
* db::Adapter

# ::stappler::web::Root::scheduleAyncDbTask(Callback<Function<void (const db::Transaction &)> (stappler::mempool::base::pool_t *)> const&) const

## BRIEF

Запускает асинхронную задачу БД

## CONTENT

Доступ: public

Запускает асинхронную задачу БД

Параметры:
* Callback<Function<void (const db::Transaction &)> (stappler::mempool::base::pool_t *)> const&

# ::stappler::web::Root::getFileScheme() const

## BRIEF

Возвращает файловую схему данных

## CONTENT

Доступ: public

Возвращает файловую схему данных

Возвращает:
* db::Scheme const*

# ::stappler::web::Root::getUserScheme() const

## BRIEF

Возвращает пользовательскую схему данных

## CONTENT

Доступ: public

Возвращает пользовательскую схему данных

Возвращает:
* db::Scheme const*

# ::stappler::web::Root::pushErrorMessage(stappler::mem_pool::Value&&) const

## BRIEF

Добавляет сообщение об ошибке БД

## CONTENT

Доступ: public

Добавляет сообщение об ошибке БД

Параметры:
* stappler::mem_pool::Value&&


# ::stappler::web::Root::pushDebugMessage(stappler::mem_pool::Value&&) const

## BRIEF

Добавляет отладочное сообщение

## CONTENT

Доступ: public

Добавляет отладочное сообщение

Параметры:
* stappler::mem_pool::Value&&


# ::stappler::web::Root::getFileFromContext(int64_t) const

## BRIEF

Получает файл по идентификатору из контекста

## CONTENT

Доступ: public

Получает файл по идентификатору из контекста

Параметры:
* int64_t

Возвращает:
* db::InputFile*

# ::stappler::web::Root::getUserIdFromContext() const

## BRIEF

Возвращает текущий идентификатор пользователя

## CONTENT

Доступ: public

Возвращает текущий идентификатор пользователя

Возвращает:
* int64_t

# ::stappler::web::Root::getRequestData() const

## BRIEF

Возвращает информацию о текущем запросе

## CONTENT

Доступ: public

Возвращает информацию о текущем запросе

Возвращает:
* db::RequestData

# ::stappler::web::Root::initTransaction(db::Transaction&) const

## BRIEF

Инициализирует транзакцию в БД

## CONTENT

Доступ: public

Инициализирует транзакцию в БД

Параметры:
* db::Transaction&


# ::stappler::web::Root::PendingTask

## BRIEF

Структура задачи, ожидающей исполнения

## CONTENT

Доступ: protected

Структура задачи, ожидающей исполнения


# ::stappler::web::Root::PendingTask::host

## BRIEF

Хост

## CONTENT

Хост

Тип: stappler::web::Host


# ::stappler::web::Root::PendingTask::task

## BRIEF

Задача

## CONTENT

Задача

Тип: stappler::web::AsyncTask*


# ::stappler::web::Root::PendingTask::interval

## BRIEF

Интервал ожидания

## CONTENT

Интервал ожидания

Тип: stappler::TimeInterval


# ::stappler::web::Root::PendingTask::performFirst

## BRIEF

Флаг исполнения первым по приоритету

## CONTENT

Флаг исполнения первым по приоритету

Тип: bool


# ::stappler::web::Root::findTypeCheckerContentType(stappler::web::Request&,stappler::StringView) const

## BRIEF

Определяет тип содержимого для запроса

## CONTENT

Доступ: protected

Определяет тип содержимого для запроса

Параметры:
* stappler::web::Request&
* stappler::StringView

Возвращает:
* stappler::StringView

# ::stappler::web::Root::findTypeCheckerCharset(stappler::web::Request&,stappler::StringView) const

## BRIEF

Определяет кодировку для запроса

## CONTENT

Доступ: protected

Определяет кодировку для запроса

Параметры:
* stappler::web::Request&
* stappler::StringView

Возвращает:
* stappler::StringView

# ::stappler::web::Root::findTypeCheckerContentLanguage(stappler::web::Request&,stappler::StringView) const

## BRIEF

Определяет язык для запроса

## CONTENT

Доступ: protected

Определяет язык для запроса

Параметры:
* stappler::web::Request&
* stappler::StringView

Возвращает:
* stappler::StringView

# ::stappler::web::Root::findTypeCheckerContentEncoding(stappler::web::Request&,stappler::StringView) const

## BRIEF

Определяет способ кодирования для запроса

## CONTENT

Доступ: protected

Определяет способ кодирования для запроса

Параметры:
* stappler::web::Request&
* stappler::StringView

Возвращает:
* stappler::StringView

# ::stappler::web::Root::initDatabases()

## BRIEF

Инициализирует БД при старте вебсервера

## CONTENT

Доступ: protected

Инициализирует БД при старте вебсервера


# ::stappler::web::Root::initSignals()

## BRIEF

Инициализирует сигналы ОС

## CONTENT

Доступ: protected

Инициализирует сигналы ОС


# ::stappler::web::Root::initThreads()

## BRIEF

Инициализирует потоки

## CONTENT

Доступ: protected

Инициализирует потоки


# ::stappler::web::Root::createDbDriver(stappler::StringView)

## BRIEF

Создаёт драйвер БД

## CONTENT

Доступ: protected

Создаёт драйвер БД

Параметры:
* stappler::StringView

Возвращает:
* db::sql::Driver*

# ::stappler::web::Root::_workerPool

## BRIEF

Рабочий пул памяти

## CONTENT

Доступ: protected

Рабочий пул памяти

Тип: stappler::mempool::base::pool_t*


# ::stappler::web::Root::_configPool

## BRIEF

Пул памяти конфигурации

## CONTENT

Доступ: protected

Пул памяти конфигурации

Тип: stappler::mempool::base::pool_t*


# ::stappler::web::Root::_rootPool

## BRIEF

Корневой пул памяти

## CONTENT

Доступ: protected

Корневой пул памяти

Тип: stappler::mempool::base::pool_t*


# ::stappler::web::Root::_initThreads

## BRIEF

Начальное число потоков

## CONTENT

Доступ: protected

Начальное число потоков

Тип: size_t


# ::stappler::web::Root::_maxThreads

## BRIEF

Максимальное число потоков

## CONTENT

Доступ: protected

Максимальное число потоков

Тип: size_t


# ::stappler::web::Root::_serverNameLine

## BRIEF

Имя сервера

## CONTENT

Доступ: protected

Имя сервера

Тип: stappler::StringView


# ::stappler::web::Root::_requestsReceived

## BRIEF

Число обработанных запросов

## CONTENT

Доступ: protected

Число обработанных запросов

Тип: std::atomic<uint64_t>


# ::stappler::web::Root::_heartbeatCounter

## BRIEF

Число тактов контрольного потока

## CONTENT

Доступ: protected

Число тактов контрольного потока

Тип: std::atomic<uint64_t>


# ::stappler::web::Root::_dbQueriesReleased

## BRIEF

Число начатых запрсоов к БД

## CONTENT

Доступ: protected

Число начатых запрсоов к БД

Тип: std::atomic<uint64_t>


# ::stappler::web::Root::_dbQueriesPerformed

## BRIEF

Число завершённых запросов к БД

## CONTENT

Доступ: protected

Число завершённых запросов к БД

Тип: std::atomic<uint64_t>


# ::stappler::web::Root::_debug

## BRIEF

Флаг отладочного режима

## CONTENT

Доступ: protected

Флаг отладочного режима

Тип: std::atomic<bool>


# ::stappler::web::Root::_pending

## BRIEF

Ожидающие исполнения задачи

## CONTENT

Доступ: protected

Ожидающие исполнения задачи

Тип: Vector<stappler::web::Root::PendingTask>*


# ::stappler::web::Root::_dbParams

## BRIEF

Параметры корневого соединения с БД

## CONTENT

Доступ: protected

Параметры корневого соединения с БД

Тип: Map<stappler::StringView, stappler::StringView>


# ::stappler::web::Root::_dbDrivers

## BRIEF

Загруженные драйвера БД

## CONTENT

Доступ: protected

Загруженные драйвера БД

Тип: Map<stappler::StringView, db::sql::Driver *>


# ::stappler::web::Root::_dbs

## BRIEF

Требуемые для работы БД

## CONTENT

Доступ: protected

Требуемые для работы БД

Тип: Vector<stappler::StringView>


# ::stappler::web::Root::_primaryDriver

## BRIEF

Основной драйвер БД

## CONTENT

Доступ: protected

Основной драйвер БД

Тип: db::sql::Driver*


# ::stappler::web::Root::_mutex

## BRIEF

Мутекс

## CONTENT

Доступ: protected

Мутекс

Тип: stappler::mem_pool::Mutex


# ::stappler::web::Root::_allocator

## BRIEF

Аллокатор

## CONTENT

Доступ: protected

Аллокатор

Тип: memory::allocator_t*

# ::stappler::web::Root::getDocumentRoot() const

## BRIEF

Возвращает корень файловой системы для вебсервера

## CONTENT

Доступ: public

Возвращает корень файловой системы для вебсервера

Возвращает:
* stappler::StringView