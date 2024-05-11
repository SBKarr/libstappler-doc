Title: SPWebWebsocketManager.h


# EXTRA_WEBSERVER_WEBSERVER_WEBSOCKET_SPWEBWEBSOCKETMANAGER_H_

## BRIEF

Заголовок интерфейса управления вебсокетами

## CONTENT

Заголовок интерфейса управления вебсокетами


# ::stappler::web::WebsocketManager

## BRIEF

Интерфейс управления вебсокетами

## CONTENT

Интерфейс управления вебсокетами. Обеспечивает взаимодействие между сокетами и выделение потоков для вебсокетов. Объект является частью хоста.

Базовые классы:
* AllocBase


# ::stappler::web::WebsocketManager::makeAcceptKey(stappler::StringView)

## BRIEF

Создаёт ключ для принятия соединения по протоколу вебсокета

## CONTENT

Доступ: public

Создаёт ключ для принятия соединения по протоколу вебсокета

Параметры:
* stappler::StringView

Возвращает:
* stappler::mem_pool::String

# ::stappler::web::WebsocketManager::WebsocketManager(stappler::web::Host const&)

## BRIEF

Конструктор

## CONTENT

Доступ: public

Конструктор

Параметры:
* stappler::web::Host const&


# ::stappler::web::WebsocketManager::~WebsocketManager()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор


# ::stappler::web::WebsocketManager::onAccept(stappler::web::Request const&,stappler::mempool::base::pool_t*)

## BRIEF

Обрабатывает запрос на соединение вебсокета

## CONTENT

Доступ: public

Обрабатывает запрос на соединение вебсокета

Параметры:
* stappler::web::Request const& - запрос
* stappler::mempool::base::pool_t* - пул памяти для вебсокета

Возвращает:
* stappler::web::WebsocketHandler* - новый обработчик вебсокета или nullptr

# ::stappler::web::WebsocketManager::onBroadcast(stappler::mem_pool::Value const&)

## BRIEF

Обрабатывает широковещательное сообщение для вебсокета

## CONTENT

Доступ: public

Обрабатывает широковещательное сообщение для вебсокета

Параметры:
* stappler::mem_pool::Value const&

Возвращает:
* bool

# ::stappler::web::WebsocketManager::size() const

## BRIEF

Число текущих активных вебсокетов

## CONTENT

Доступ: public

Число текущих активных вебсокетов

Возвращает:
* size_t

# ::stappler::web::WebsocketManager::receiveBroadcast(stappler::mem_pool::Value const&)

## BRIEF

Обрабатывает широковещательное сообщение для вебсокета

## CONTENT

Доступ: public

Обрабатывает широковещательное сообщение для вебсокета

Параметры:
* stappler::mem_pool::Value const&


# ::stappler::web::WebsocketManager::accept(stappler::web::Request&)

## BRIEF

Принимает соединение для запроса

## CONTENT

Доступ: public

Принимает соединение для запроса. Если соединение принято успешно, статус ответа не важен, запрос переносится в соединение вебсокета.

Параметры:
* stappler::web::Request&

Возвращает:
* stappler::web::Status - статус ответа по запросу

# ::stappler::web::WebsocketManager::run(stappler::web::WebsocketHandler*)

## BRIEF

Запускает соединение вебсокета в отдельном потоке

## CONTENT

Доступ: public

Запускает соединение вебсокета в отдельном потоке

Параметры:
* stappler::web::WebsocketHandler*


# ::stappler::web::WebsocketManager::host() const

## BRIEF

Возвращает хост

## CONTENT

Доступ: public

Возвращает хост

Возвращает:
* stappler::web::Host const&

# ::stappler::web::WebsocketManager::addHandler(stappler::web::WebsocketHandler*)

## BRIEF

Добавляет новый активный обработчик

## CONTENT

Доступ: protected

Добавляет новый активный обработчик

Параметры:
* stappler::web::WebsocketHandler*


# ::stappler::web::WebsocketManager::removeHandler(stappler::web::WebsocketHandler*)

## BRIEF

Отключает обработчик

## CONTENT

Доступ: protected

Отключает обработчик

Параметры:
* stappler::web::WebsocketHandler*


# ::stappler::web::WebsocketManager::_pool

## BRIEF

Пул памяти

## CONTENT

Доступ: protected

Пул памяти

Тип: stappler::mempool::base::pool_t*


# ::stappler::web::WebsocketManager::_mutex

## BRIEF

Мутекс

## CONTENT

Доступ: protected

Мутекс

Тип: stappler::mem_pool::Mutex


# ::stappler::web::WebsocketManager::_count

## BRIEF

Число активных обработчиков вебсокета

## CONTENT

Доступ: protected

Число активных обработчиков вебсокета

Тип: std::atomic<size_t>


# ::stappler::web::WebsocketManager::_handlers

## BRIEF

Активные соединения

## CONTENT

Доступ: protected

Активные соединения

Тип: Vector<stappler::web::WebsocketHandler *>


# ::stappler::web::WebsocketManager::_host

## BRIEF

Хост

## CONTENT

Доступ: protected

Хост

Тип: stappler::web::Host


# ::stappler::web::WebsocketHandler

## BRIEF

Класс обработчика

## CONTENT

Класс обработчика. Переопределяется для работы с сокетом.

Базовые классы:
* AllocBase


# ::stappler::web::WebsocketHandler::WebsocketHandler(stappler::web::WebsocketManager*,stappler::mempool::base::pool_t*,stappler::StringView,stappler::TimeInterval,size_t)

## BRIEF

Конструктор

## CONTENT

Доступ: public

Конструктор

Параметры:
* stappler::web::WebsocketManager*
* stappler::mempool::base::pool_t* - базовый пул паммяти
* stappler::StringView - базовый URL
* stappler::TimeInterval - максимальное время простоя
* size_t - максимальный размер фрейма


# ::stappler::web::WebsocketHandler::~WebsocketHandler()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор


# ::stappler::web::WebsocketHandler::handleBegin()

## BRIEF

Обрабатывает начало соединения

## CONTENT

Доступ: public

Обрабатывает начало соединения


# ::stappler::web::WebsocketHandler::handleFrame(stappler::web::WebsocketFrameType,stappler::mem_pool::Bytes const&)

## BRIEF

Обрабатывает полученный фрейм

## CONTENT

Доступ: public

Обрабатывает полученный фрейм

Параметры:
* stappler::web::WebsocketFrameType
* stappler::mem_pool::Bytes const&

Возвращает:
* bool - true если успешно, false для завершения соединения

# ::stappler::web::WebsocketHandler::handleMessage(stappler::mem_pool::Value const&)

## BRIEF

Обрабатывает широковещательное сообщение

## CONTENT

Доступ: public

Обрабатывает широковещательное сообщение

Параметры:
* stappler::mem_pool::Value const&

Возвращает:
* bool - true если успешно, false для завершения соединения

# ::stappler::web::WebsocketHandler::handleEnd()

## BRIEF

Обрабатывает закрытие соединения

## CONTENT

Доступ: public

Обрабатывает закрытие соединения


# ::stappler::web::WebsocketHandler::sendBroadcast(stappler::mem_pool::Value&&) const

## BRIEF

Отправляет широковещательное сообщение

## CONTENT

Доступ: public

Отправляет широковещательное сообщение

Параметры:
* stappler::mem_pool::Value&&


# ::stappler::web::WebsocketHandler::setEncodeFormat(data::EncodeFormat const&)

## BRIEF

Устанавливает формат кодирования данных по умолчанию

## CONTENT

Доступ: public

Устанавливает формат кодирования данных по умолчанию

Параметры:
* data::EncodeFormat const&


# ::stappler::web::WebsocketHandler::send(stappler::StringView)

## BRIEF

Отправляет текстовую строку

## CONTENT

Доступ: public

Отправляет текстовую строку

Параметры:
* stappler::StringView

Возвращает:
* bool

# ::stappler::web::WebsocketHandler::send(stappler::BytesView)

## BRIEF

Отправляет бинарные данные

## CONTENT

Доступ: public

Отправляет бинарные данные

Параметры:
* stappler::BytesView

Возвращает:
* bool

# ::stappler::web::WebsocketHandler::send(stappler::mem_pool::Value const&)

## BRIEF

Отправляет нетипизированные данные

## CONTENT

Доступ: public

Отправляет нетипизированные данные. Использует формат кодирования, установленный ранее.

Параметры:
* stappler::mem_pool::Value const&

Возвращает:
* bool

# ::stappler::web::WebsocketHandler::manager() const

## BRIEF

Вохвращает менеджер

## CONTENT

Доступ: public

Вохвращает менеджер

Возвращает:
* stappler::web::WebsocketManager*

# ::stappler::web::WebsocketHandler::connection() const

## BRIEF

Возвращает соединение

## CONTENT

Доступ: public

Возвращает соединение

Возвращает:
* stappler::web::WebsocketConnection*

# ::stappler::web::WebsocketHandler::pool() const

## BRIEF

Возвращает рабочий пул памяти

## CONTENT

Доступ: public

Возвращает рабочий пул памяти

Возвращает:
* stappler::mempool::base::pool_t*

# ::stappler::web::WebsocketHandler::getUrl() const

## BRIEF

Возвращает адрес вебсокета

## CONTENT

Доступ: public

Возвращает адрес вебсокета

Возвращает:
* stappler::StringView

# ::stappler::web::WebsocketHandler::getTtl() const

## BRIEF

Возвращает время ожидания до отказа

## CONTENT

Доступ: public

Возвращает время ожидания до отказа

Возвращает:
* stappler::TimeInterval

# ::stappler::web::WebsocketHandler::getMaxInputFrameSize() const

## BRIEF

Возвращает максимальный размер входящего фрейма

## CONTENT

Доступ: public

Возвращает максимальный размер входящего фрейма

Возвращает:
* size_t

# ::stappler::web::WebsocketHandler::isEnabled() const

## BRIEF

Проверяет, включено ли соединение

## CONTENT

Доступ: public

Проверяет, включено ли соединение

Возвращает:
* bool

# ::stappler::web::WebsocketHandler::sendPendingNotifications(stappler::mempool::base::pool_t*)

## BRIEF

Обрабатывает ожидающие уведомления

## CONTENT

Доступ: public

Обрабатывает ожидающие уведомления

Параметры:
* stappler::mempool::base::pool_t* - пул для копирования уведомлений


# ::stappler::web::WebsocketHandler::performWithStorage(Callback<void (const db::Transaction &)> const&) const

## BRIEF

Выполняет функцию с транзакцией БД

## CONTENT

Доступ: public

Выполняет функцию с транзакцией БД

Параметры:
* Callback<void (const db::Transaction &)> const&


# ::stappler::web::WebsocketHandler::performAsync(Callback<void (stappler::web::AsyncTask &)> const&) const

## BRIEF

Выполняет асинхронную задачу

## CONTENT

Доступ: public

Выполняет асинхронную задачу

Параметры:
* Callback<void (stappler::web::AsyncTask &)> const&

Возвращает:
* bool

# ::stappler::web::WebsocketHandler::processBroadcasts()

## BRIEF

Обрабатывает ожидающие широковещательные сообщения

## CONTENT

Доступ: public

Обрабатывает ожидающие широковещательные сообщения

Возвращает:
* bool

# ::stappler::web::WebsocketHandler::setConnection(stappler::web::WebsocketConnection*)

## BRIEF

Устанавливает соединение

## CONTENT

Доступ: protected

Устанавливает соединение

Параметры:
* stappler::web::WebsocketConnection*


# ::stappler::web::WebsocketHandler::receiveBroadcast(stappler::mem_pool::Value const&)

## BRIEF

Получает широковещательное сообщение

## CONTENT

Доступ: protected

Получает широковещательное сообщение

Параметры:
* stappler::mem_pool::Value const&


# ::stappler::web::WebsocketHandler::_pool

## BRIEF

Основной пул памяти

## CONTENT

Доступ: protected

Основной пул памяти

Тип: stappler::mempool::base::pool_t*


# ::stappler::web::WebsocketHandler::_manager

## BRIEF

Менеджер

## CONTENT

Доступ: protected

Менеджер

Тип: stappler::web::WebsocketManager*


# ::stappler::web::WebsocketHandler::_format

## BRIEF

Формат кодирования

## CONTENT

Доступ: protected

Формат кодирования

Тип: data::EncodeFormat


# ::stappler::web::WebsocketHandler::_url

## BRIEF

Адрес вебсокета

## CONTENT

Доступ: protected

Адрес вебсокета

Тип: stappler::StringView


# ::stappler::web::WebsocketHandler::_ttl

## BRIEF

Предельное время ожидания

## CONTENT

Доступ: protected

Предельное время ожидания

Тип: stappler::TimeInterval


# ::stappler::web::WebsocketHandler::_maxInputFrameSize

## BRIEF

Максимальный размер входящего фрейма

## CONTENT

Доступ: protected

Максимальный размер входящего фрейма

Тип: size_t


# ::stappler::web::WebsocketHandler::_broadcastMutex

## BRIEF

Мутекс широковещательных сообщений

## CONTENT

Доступ: protected

Мутекс широковещательных сообщений

Тип: stappler::mem_pool::Mutex


# ::stappler::web::WebsocketHandler::_broadcastsPool

## BRIEF

Пул щироковещательных сообщений

## CONTENT

Доступ: protected

Пул щироковещательных сообщений

Тип: stappler::mempool::base::pool_t*


# ::stappler::web::WebsocketHandler::_broadcastsMessages

## BRIEF

Ожидающие широковещательные сообщения

## CONTENT

Доступ: protected

Ожидающие широковещательные сообщения

Тип: Vector<stappler::mem_pool::Value>*


# ::stappler::web::WebsocketHandler::_conn

## BRIEF

Соединение

## CONTENT

Доступ: protected

Соединение

Тип: stappler::web::WebsocketConnection*
