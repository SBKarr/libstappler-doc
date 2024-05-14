Title: SPWebWebsocketConnection.h


# EXTRA_WEBSERVER_WEBSERVER_WEBSOCKET_SPWEBWEBSOCKETCONNECTION_H_

## BRIEF

Заголовок интерфейса соединения вебсокета

## CONTENT

Заголовок интерфейса соединения вебсокета


# ::stappler::web::WebsocketConnection

## BRIEF

Класс соединения вебсокета

## CONTENT

Класс соединения вебсокета. Реализует интерфейс соединения в отдельном выделенном потоке сокета.

Базовые классы:
* AllocBase


# ::stappler::web::WebsocketConnection::destroy(stappler::web::WebsocketConnection*)

## BRIEF

Уничтожает соединение

## CONTENT

Доступ: public

Уничтожает соединение

Параметры:
* stappler::web::WebsocketConnection*


# ::stappler::web::WebsocketConnection::~WebsocketConnection()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор

# ::stappler::web::WebsocketConnection::isEnabled() const

## BRIEF

Проверяет, активно ли соединение

## CONTENT

Доступ: public

Проверяет, активно ли соединение

Возвращает:
* bool

# ::stappler::web::WebsocketConnection::write(stappler::web::WebsocketFrameType,uint8_t const*,size_t)

## BRIEF

Записывает данные в вебсокет

## CONTENT

Доступ: public

Записывает данные в вебсокет

Параметры:
* stappler::web::WebsocketFrameType
* uint8_t const* - буфер данных
* size_t - размер данных

Возвращает:
* bool - true если успешно

# ::stappler::web::WebsocketConnection::run(stappler::web::WebsocketHandler*,Callback<void ()> const&,Callback<void ()> const&)

## BRIEF

Запускает вебсокет

## CONTENT

Доступ: public

Запускает вебсокет в отдельном потоке

Параметры:
* stappler::web::WebsocketHandler* - обработсик
* Callback<void ()> const& - функция начала работы
* Callback<void ()> const& - функция конца работы

Возвращает:
* bool - true если успешно

# ::stappler::web::WebsocketConnection::wakeup()

## BRIEF

Пробуждает поток вебсокета

## CONTENT

Доступ: public

Пробуждает поток вебсокета

# ::stappler::web::WebsocketConnection::terminate()

## BRIEF

Закрывает вебсокет

## CONTENT

Доступ: public

Закрывает вебсокет


# ::stappler::web::WebsocketConnection::getAccessRole() const

## BRIEF

Возвращает роль БД для соединения вебсокета

## CONTENT

Доступ: public

Возвращает роль БД для соединения вебсокета

Возвращает:
* db::AccessRoleId

# ::stappler::web::WebsocketConnection::setAccessRole(db::AccessRoleId)

## BRIEF

Устанавливает роль пользоваетля БД для сокета

## CONTENT

Доступ: public

Устанавливает роль пользоваетля БД для сокета

Параметры:
* db::AccessRoleId


# ::stappler::web::WebsocketConnection::setStatusCode(stappler::web::WebsocketStatusCode,stappler::StringView)

## BRIEF

Устанавливает код результата для сокета

## CONTENT

Доступ: public

Устанавливает код результата для сокета

Параметры:
* stappler::web::WebsocketStatusCode
* stappler::StringView - строка-комментарий к результату


# ::stappler::web::WebsocketConnection::getPool() const

## BRIEF

Возвращает активный пул памяти

## CONTENT

Доступ: public

Возвращает активный пул памяти

Возвращает:
* stappler::mempool::base::pool_t*

# ::stappler::web::WebsocketConnection::getHandlePool() const

## BRIEF

Возвращает пул памяти, используемый для обработки кадра вебсокета

## CONTENT

Доступ: public

Возвращает пул памяти, используемый для обработки кадра вебсокета

Возвращает:
* stappler::mempool::base::pool_t*

# ::stappler::web::WebsocketConnection::getHost() const

## BRIEF

Возвращает хост

## CONTENT

Доступ: public

Возвращает хост

Возвращает:
* stappler::web::Host

# ::stappler::web::WebsocketConnection::performAsync(Callback<void (stappler::web::AsyncTask &)> const&) const

## BRIEF

Выполняет асинхронную задачу для вебсокета

## CONTENT

Доступ: public

Выполняет асинхронную задачу для вебсокета

Параметры:
* Callback<void (stappler::web::AsyncTask &)> const&

Возвращает:
* bool - true если задача закончена

# ::stappler::web::WebsocketConnection::resolveStatus(stappler::web::WebsocketStatusCode)

## BRIEF

ВОзвращает статус результата, соотвествующий принятому статусу клиента

## CONTENT

Доступ: protected

ВОзвращает статус результата, соотвествующий принятому статусу клиента

Параметры:
* stappler::web::WebsocketStatusCode

Возвращает:
* stappler::web::WebsocketStatusCode

# ::stappler::web::WebsocketConnection::WebsocketConnection(stappler::mempool::base::allocator_t*,stappler::mempool::base::pool_t*,stappler::web::HostController*)

## BRIEF

Конструктор

## CONTENT

Доступ: protected

Конструктор

Параметры:
* stappler::mempool::base::allocator_t*
* stappler::mempool::base::pool_t*
* stappler::web::HostController*


# ::stappler::web::WebsocketConnection::_allocator

## BRIEF

Аллокатор

## CONTENT

Доступ: protected

Аллокатор

Тип: stappler::mempool::base::allocator_t*


# ::stappler::web::WebsocketConnection::_pool

## BRIEF

Пул памяти соединения

## CONTENT

Доступ: protected

Пул памяти соединения

Тип: stappler::mempool::base::pool_t*


# ::stappler::web::WebsocketConnection::_mutex

## BRIEF

Мутекс

## CONTENT

Доступ: protected

Мутекс

Тип: stappler::mem_pool::Mutex


# ::stappler::web::WebsocketConnection::_shouldTerminate

## BRIEF

Флаг требования закрытия соединения

## CONTENT

Доступ: protected

Флаг требования закрытия соединения

Тип: std::atomic_flag


# ::stappler::web::WebsocketConnection::_enabled

## BRIEF

Флаг активности соединения

## CONTENT

Доступ: protected

Флаг активности соединения

Тип: bool


# ::stappler::web::WebsocketConnection::_connected

## BRIEF

Флаг соединения клиента

## CONTENT

Доступ: protected

Флаг соединения клиента

Тип: bool


# ::stappler::web::WebsocketConnection::_serverReason

## BRIEF

Причина закрытия соединения

## CONTENT

Доступ: protected

Причина закрытия соединения

Тип: stappler::mem_pool::String


# ::stappler::web::WebsocketConnection::_clientCloseCode

## BRIEF

Код закрытия клиента

## CONTENT

Доступ: protected

Код закрытия клиента

Тип: stappler::web::WebsocketStatusCode


# ::stappler::web::WebsocketConnection::_serverCloseCode

## BRIEF

Код закрытия сервера

## CONTENT

Доступ: protected

Код закрытия сервера (себя)

Тип: stappler::web::WebsocketStatusCode


# ::stappler::web::WebsocketConnection::_accessRole

## BRIEF

Уровень доступа пользователя соединения с БД

## CONTENT

Доступ: protected

Уровень доступа пользователя соединения с БД

Тип: db::AccessRoleId


# ::stappler::web::WebsocketConnection::_group

## BRIEF

Асинхронная группа задач для выполнения с сокетом

## CONTENT

Доступ: protected

Асинхронная группа задач для выполнения с сокетом

Тип: stappler::web::AsyncTaskGroup


# ::stappler::web::WebsocketConnection::_commonReader

## BRIEF

Интерфейс чтения

## CONTENT

Доступ: protected

Интерфейс чтения

Тип: stappler::web::WebsocketFrameReader*


# ::stappler::web::WebsocketConnection::_commonWriter

## BRIEF

Интерфейс записи

## CONTENT

Доступ: protected

Интерфейс записи

Тип: stappler::web::WebsocketFrameWriter*
