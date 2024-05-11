Title: SPWebRequest.h


# EXTRA_WEBSERVER_WEBSERVER_REQUEST_SPWEBREQUEST_H_

## BRIEF

Заголовок типа запроса

## CONTENT

Заголовок типа запроса

# ::stappler::web::Request

## BRIEF

Тип запроса

## CONTENT

Тип запроса. Используется для настройки заголовков и вывода в запрос. Является обёрткой вокруг контроллера и собственных данных не имеет.

Базовые классы:
* std::basic_ostream<char,std::char_traits<char>>
* AllocBase


# ::stappler::web::Request::char_type

## BRIEF

Тип символа для вывода

## CONTENT

Доступ: public

Тип символа для вывода


# ::stappler::web::Request::traits_type

## BRIEF

Тип вспомогательных символных функций

## CONTENT

Доступ: public

Тип вспомогательных символных функций


# ::stappler::web::Request::ostream_type

## BRIEF

Тип выходного потока

## CONTENT

Доступ: public

Тип выходного потока


# ::stappler::web::Request::Require

## BRIEF

Требуемые для ввода данные

## CONTENT

Доступ: public

Требуемые для ввода данные


# ::stappler::web::Request::getCurrent()

## BRIEF

Возвращает текущий запрос из контекста

## CONTENT

Доступ: public

Возвращает текущий запрос из контекста

Возвращает:
* stappler::web::Request

# ::stappler::web::Request::Request()

## BRIEF

Конструктор

## CONTENT

Доступ: public

Конструктор

# ::stappler::web::Request::Request(stappler::web::RequestController*)

## BRIEF

Конструктор

## CONTENT

Доступ: public

Конструктор

Параметры:
* stappler::web::RequestController*


# ::stappler::web::Request::operator=(stappler::web::RequestController*)

## BRIEF

Назначает контроллер

## CONTENT

Доступ: public

Назначает контроллер

Параметры:
* stappler::web::RequestController*

Возвращает:
* stappler::web::Request&

# ::stappler::web::Request::Request(stappler::web::Request&&)

## BRIEF

Конструктор перемещения

## CONTENT

Доступ: public

Конструктор перемещения

Параметры:
* stappler::web::Request&&


# ::stappler::web::Request::operator=(stappler::web::Request&&)

## BRIEF

Оператор перемещения

## CONTENT

Доступ: public

Оператор перемещения

Параметры:
* stappler::web::Request&&

Возвращает:
* stappler::web::Request&

# ::stappler::web::Request::Request(stappler::web::Request const&)

## BRIEF

Конструктор копирования

## CONTENT

Доступ: public

Конструктор копирования

Параметры:
* stappler::web::Request const&


# ::stappler::web::Request::operator=(stappler::web::Request const&)

## BRIEF

Оператор копирования

## CONTENT

Доступ: public

Оператор копирования

Параметры:
* stappler::web::Request const&

Возвращает:
* stappler::web::Request&

# ::stappler::web::Request::getController() const

## BRIEF

Возвращает контроллер

## CONTENT

Доступ: public

Возвращает контроллер

Возвращает:
* stappler::web::RequestController*

# ::stappler::web::Request::operator bool() const

## BRIEF

Проверяет, назначен ли контроллер

## CONTENT

Доступ: public

Проверяет, назначен ли контроллер

Возвращает:
* bool

# ::stappler::web::Request::getInfo() const

## BRIEF

Возвращает данные запроса

## CONTENT

Доступ: public

Возвращает данные запроса

Возвращает:
* stappler::web::RequestInfo const&

# ::stappler::web::Request::getRequestHeader(stappler::StringView) const

## BRIEF

Возвращает заголовок запроса

## CONTENT

Доступ: public

Возвращает заголовок запроса

Параметры:
* stappler::StringView

Возвращает:
* stappler::StringView

# ::stappler::web::Request::foreachRequestHeaders(Callback<void (stappler::StringView, stappler::StringView)> const&) const

## BRIEF

Перебирает заголовки запроса

## CONTENT

Доступ: public

Перебирает заголовки запроса

Параметры:
* Callback<void (stappler::StringView, stappler::StringView)> const&


# ::stappler::web::Request::getResponseHeader(stappler::StringView) const

## BRIEF

Возвращает заголовок ответа

## CONTENT

Доступ: public

Возвращает заголовок ответа

Параметры:
* stappler::StringView

Возвращает:
* stappler::StringView

# ::stappler::web::Request::foreachResponseHeaders(Callback<void (stappler::StringView, stappler::StringView)> const&) const

## BRIEF

Перебирает заголовки ответа

## CONTENT

Доступ: public

Перебирает заголовки ответа

Параметры:
* Callback<void (stappler::StringView, stappler::StringView)> const&


# ::stappler::web::Request::setResponseHeader(stappler::StringView,stappler::StringView) const

## BRIEF

Устанавливает заголовок ответа

## CONTENT

Доступ: public

Устанавливает заголовок ответа

Параметры:
* stappler::StringView - Имя
* stappler::StringView - Значение


# ::stappler::web::Request::clearResponseHeaders() const

## BRIEF

Очищает заголовки ответа

## CONTENT

Доступ: public

Очищает заголовки ответа


# ::stappler::web::Request::getErrorHeader(stappler::StringView) const

## BRIEF

Возвращает заголовок ошибки

## CONTENT

Доступ: public

Возвращает заголовок ошибки. Заголовки ошибки отправляются в случае ошибки сервера и невозможности обработать запрос.

Параметры:
* stappler::StringView

Возвращает:
* stappler::StringView

# ::stappler::web::Request::foreachErrorHeaders(Callback<void (stappler::StringView, stappler::StringView)> const&) const

## BRIEF

Перебирает заголовки ошибки

## CONTENT

Доступ: public

Перебирает заголовки ошибки. Заголовки ошибки отправляются в случае ошибки сервера и невозможности обработать запрос.

Параметры:
* Callback<void (stappler::StringView, stappler::StringView)> const&


# ::stappler::web::Request::setErrorHeader(stappler::StringView,stappler::StringView) const

## BRIEF

Устанавливает заголовок ошибки

## CONTENT

Доступ: public

Устанавливает заголовок ошибки. Заголовки ошибки отправляются в случае ошибки сервера и невозможности обработать запрос.

Параметры:
* stappler::StringView - Имя
* stappler::StringView - Значение


# ::stappler::web::Request::clearErrorHeaders() const

## BRIEF

Очищает заголовки ошибки

## CONTENT

Доступ: public

Очищает заголовки ошибки. Заголовки ошибки отправляются в случае ошибки сервера и невозможности обработать запрос.


# ::stappler::web::Request::setRequestHandler(stappler::web::RequestHandler*)

## BRIEF

Устанавливает обработчик

## CONTENT

Доступ: public

Устанавливает обработчик

Параметры:
* stappler::web::RequestHandler*


# ::stappler::web::Request::getRequestHandler() const

## BRIEF

Возвращает обработчик запроса

## CONTENT

Доступ: public

Возвращает обработчик запроса

Возвращает:
* stappler::web::RequestHandler*

# ::stappler::web::Request::writeData(stappler::mem_pool::Value const&,bool)

## BRIEF

Записывает данные в запрос

## CONTENT

Доступ: public

Записывает данные в запрос

Параметры:
* stappler::mem_pool::Value const&
* bool - true если разрешён режим JSON-P


# ::stappler::web::Request::setDocumentRoot(stappler::StringView)

## BRIEF

Устанавливает корневую директорию для текущего запроса

## CONTENT

Доступ: public

Устанавливает корневую директорию для текущего запроса

Параметры:
* stappler::StringView


# ::stappler::web::Request::setContentType(stappler::StringView)

## BRIEF

Устанавливает тип данных запроса

## CONTENT

Доступ: public

Устанавливает тип данных запроса

Параметры:
* stappler::StringView


# ::stappler::web::Request::setHandler(stappler::StringView)

## BRIEF

Устанавливает имя обработчика

## CONTENT

Доступ: public

Устанавливает имя обработчика

Параметры:
* stappler::StringView


# ::stappler::web::Request::setContentEncoding(stappler::StringView)

## BRIEF

Устанавливает кодировку запроса

## CONTENT

Доступ: public

Устанавливает кодировку запроса

Параметры:
* stappler::StringView


# ::stappler::web::Request::setFilename(stappler::StringView,bool,stappler::Time)

## BRIEF

Устанавливает имя файла для ответа

## CONTENT

Доступ: public

Устанавливает имя файла для ответа

Параметры:
* stappler::StringView - путь к файлу
* bool - true если необходимо обновить параметры файла в запросе
* stappler::Time - (опционально) альтернативное время изменения файла


# ::stappler::web::Request::setStatus(stappler::web::Status,stappler::StringView)

## BRIEF

Устанавливает статус обработки запроса

## CONTENT

Доступ: public

Параметры:
* stappler::web::Status
* stappler::StringView - (опционально) строка статуса, если не задана - устанавливается автоматически


# ::stappler::web::Request::setCookie(stappler::StringView,stappler::StringView,stappler::TimeInterval,stappler::web::CookieFlags)

## BRIEF

Устанавливает Cookie

## CONTENT

Доступ: public

Устанавливает Cookie

Параметры:
* stappler::StringView - имя
* stappler::StringView - значение
* stappler::TimeInterval - время жизни
* stappler::web::CookieFlags - флаги


# ::stappler::web::Request::removeCookie(stappler::StringView,stappler::web::CookieFlags)

## BRIEF

Удаляет Cookie

## CONTENT

Доступ: public

Удаляет Cookie

Параметры:
* stappler::StringView - имя
* stappler::web::CookieFlags - флаги


# ::stappler::web::Request::getResponseCookies() const

## BRIEF

Возвращает Cookie

## CONTENT

Доступ: public

Возвращает Cookie

Возвращает:
* Map<stappler::StringView, stappler::web::CookieStorageInfo> const

# ::stappler::web::Request::getCookie(stappler::StringView,bool) const

## BRIEF

Получает Cookie по имени

## CONTENT

Доступ: public

Получает Cookie по имени

Параметры:
* stappler::StringView
* bool - true - удаляет из общей таблицы

Возвращает:
* stappler::StringView

# ::stappler::web::Request::redirectTo(stappler::StringView)

## BRIEF

Вызывает переход на другой адрес

## CONTENT

Доступ: public

Вызывает переход на другой адрес. Испольузется как функция выхода из обработчика.

Параметры:
* stappler::StringView - другой адрес

Возвращает:
* stappler::web::Status - статус возврата

# ::stappler::web::Request::sendFile(stappler::StringView,size_t)

## BRIEF

Отправляет файл в качестве ответа

## CONTENT

Доступ: public

Отправляет файл в качестве ответа. Испольузется как функция выхода из обработчика.

Параметры:
* stappler::StringView - путь к файлу
* size_t - (опционаьно) - время в секундах для кеширования

Возвращает:
* stappler::web::Status - статус возврата

# ::stappler::web::Request::sendFile(stappler::StringView,stappler::StringView,size_t)

## BRIEF

Отправляет файл в качестве ответа

## CONTENT

Доступ: public

Отправляет файл в качестве ответа. Испольузется как функция выхода из обработчика.

Параметры:
* stappler::StringView - путь к файлу
* stappler::StringView - тип содержимого 
* size_t - (опционаьно) - время в секундах для кеширования

Возвращает:
* stappler::web::Status - статус возврата

# ::stappler::web::Request::runPug(stappler::StringView const&,Function<bool (pug::Context &, const pug::Template &)> const&)

## BRIEF

Запускает шаблон для вывода в результат

## CONTENT

Доступ: public

Запускает шаблон для вывода в результат. Испольузется как функция выхода из обработчика.

Параметры:
* stappler::StringView const& - путь к шаблону
* Function<bool (pug::Context &, const pug::Template &)> const& - функция подготовки к запуску шаблона

Возвращает:
* stappler::web::Status - статус возврата

# ::stappler::web::Request::getFullHostname(int) const

## BRIEF

Возвращает полное имя хоста

## CONTENT

Доступ: public

Возвращает полное имя хоста

Параметры:
* int - (опционально) альтернативный порт

Возвращает:
* stappler::mem_pool::String

# ::stappler::web::Request::checkCacheHeaders(stappler::Time,stappler::StringView const&)

## BRIEF

Проверяет заголовки кеширования

## CONTENT

Доступ: public

Проверяет заголовки кеширования

Параметры:
* stappler::Time - время последнего изменения
* stappler::StringView const& - ETag

Возвращает:
* bool - true если обновления кеша клиенту не требуется

# ::stappler::web::Request::checkCacheHeaders(stappler::Time,uint32_t)

## BRIEF

Проверяет заголовки кеширования

## CONTENT

Доступ: public

Проверяет заголовки кеширования

Параметры:
* stappler::Time - время последнего изменения
* uint32_t - ид объекта

Возвращает:
* bool - true если обновления кеша клиенту не требуется

# ::stappler::web::Request::getInputConfig() const

## BRIEF

Возвращает конфигурацию для чтения данных

## CONTENT

Доступ: public

Возвращает конфигурацию для чтения данных

Возвращает:
* db::InputConfig const&

# ::stappler::web::Request::setInputConfig(db::InputConfig const&)

## BRIEF

Устанавливает конфигурацию для чтения данных

## CONTENT

Доступ: public

Устанавливает конфигурацию для чтения данных

Параметры:
* db::InputConfig const&


# ::stappler::web::Request::isAdministrative()

## BRIEF

Проверяет, является ли запрос административным

## CONTENT

Доступ: public

Проверяет, является ли запрос административным (отправленным администратором сервера)

Возвращает:
* bool

# ::stappler::web::Request::setUser(db::User*)

## BRIEF

Устанавливает текущего пользователя

## CONTENT

Доступ: public

Устанавливает текущего пользователя

Параметры:
* db::User*


# ::stappler::web::Request::setUser(int64_t)

## BRIEF

Устанавливает альтернативный идентификатор пользователя

## CONTENT

Доступ: public

Устанавливает альтернативный идентификатор пользователя

Параметры:
* int64_t


# ::stappler::web::Request::getUser()

## BRIEF

Возвращает объект пользователя

## CONTENT

Доступ: public

Возвращает объект пользователя. Если не установлен - пытается определить пользователя из контекста и авторизовать его.

Возвращает:
* db::User*

# ::stappler::web::Request::getAuthorizedUser() const

## BRIEF

Возвращает объект пользователя

## CONTENT

Доступ: public

Возвращает объект пользователя. Если не установлен - не делает ничего.

Возвращает:
* db::User*

# ::stappler::web::Request::getUserId() const

## BRIEF

Возвращает идентификатор пользователя

## CONTENT

Доступ: public

Возвращает идентификатор пользователя

Возвращает:
* int64_t

# ::stappler::web::Request::isSecureConnection() const

## BRIEF

Проверяет соединение на безопасность

## CONTENT

Доступ: public

Проверяет соединение на безопасность. Соединение безопасно, если использется безопасный протокол или оно локальное.

Возвращает:
* bool

# ::stappler::web::Request::config() const

## BRIEF

Возвращает контроллер

## CONTENT

Доступ: public

Возвращает контроллер

Возвращает:
* stappler::web::RequestController*

# ::stappler::web::Request::host() const

## BRIEF

Возвращает хост

## CONTENT

Доступ: public

Возвращает хост

Возвращает:
* stappler::web::Host

# ::stappler::web::Request::pool() const

## BRIEF

Возвращает пул запроса

## CONTENT

Доступ: public

Возвращает пул запроса

Возвращает:
* stappler::mempool::base::pool_t*

# ::stappler::web::Request::getAccessRole() const

## BRIEF

Возвращает роль текущего пользователя в БД

## CONTENT

Доступ: public

Возвращает роль текущего пользователя в БД

Возвращает:
* db::AccessRoleId

# ::stappler::web::Request::setAccessRole(db::AccessRoleId) const

## BRIEF

Устанавливает роль екущего пользователя

## CONTENT

Доступ: public

Устанавливает роль екущего пользователя

Параметры:
* db::AccessRoleId


# ::stappler::web::Request::acquireDbTransaction() const

## BRIEF

Запрашивает активную транзакцию в БД

## CONTENT

Доступ: public

Запрашивает активную транзакцию в БД

Возвращает:
* db::Transaction

# ::stappler::web::Request::getDebugMessages() const

## BRIEF

Возвращает собранные отладочные сообщения

## CONTENT

Доступ: public

Возвращает собранные отладочные сообщения

Возвращает:
* Vector<stappler::mem_pool::Value> const&

# ::stappler::web::Request::getErrorMessages() const

## BRIEF

Возвращает собранные сообщения об ошибках

## CONTENT

Доступ: public

Возвращает собранные сообщения об ошибках

Возвращает:
* Vector<stappler::mem_pool::Value> const&

# ::stappler::web::Request::addError<typename,typename>(Source&&,Text&&) const

## BRIEF

Добавляет сообщение об ошибке

## CONTENT

Доступ: public

Добавляет сообщение об ошибке

Параметры шаблона:
* typename Source
* typename Text

Параметры:
* Source&&
* Text&&


# ::stappler::web::Request::addError<typename,typename>(Source&&,Text&&,stappler::mem_pool::Value&&) const

## BRIEF

Добавляет сообщение об ошибке

## CONTENT

Доступ: public

Добавляет сообщение об ошибке

Параметры шаблона:
* typename Source
* typename Text

Параметры:
* Source&&
* Text&&
* stappler::mem_pool::Value&&


# ::stappler::web::Request::addDebug<typename,typename>(Source&&,Text&&) const

## BRIEF

Добавляет отладочное сообщение

## CONTENT

Доступ: public

Добавляет отладочное сообщение

Параметры шаблона:
* typename Source
* typename Text

Параметры:
* Source&&
* Text&&


# ::stappler::web::Request::addDebug<typename,typename>(Source&&,Text&&,stappler::mem_pool::Value&&) const

## BRIEF

Добавляет отладочное сообщение

## CONTENT

Доступ: public

Добавляет отладочное сообщение

Параметры шаблона:
* typename Source
* typename Text

Параметры:
* Source&&
* Text&&
* stappler::mem_pool::Value&&


# ::stappler::web::Request::addErrorMessage(stappler::mem_pool::Value&&) const

## BRIEF

Добавляет сообщение об ошибке

## CONTENT

Доступ: public

Добавляет сообщение об ошибке

Параметры:
* stappler::mem_pool::Value&&


# ::stappler::web::Request::addDebugMessage(stappler::mem_pool::Value&&) const

## BRIEF

Добавляет отладочное сообщение

## CONTENT

Доступ: public

Добавляет отладочное сообщение

Параметры:
* stappler::mem_pool::Value&&


# ::stappler::web::Request::addCleanup(Function<void ()>&&) const

## BRIEF

Добавляет функцию, вызываемую при завершении запроса

## CONTENT

Доступ: public

Добавляет функцию, вызываемую при завершении запроса

Параметры:
* Function<void ()>&&


# ::stappler::web::Request::storeObject(void*,stappler::StringView const&,Function<void ()>&&) const

## BRIEF

Сохраняет объект в пуле запроса

## CONTENT

Доступ: public

Сохраняет объект в пуле запроса

Параметры:
* void*
* stappler::StringView const& - ключ для хранения
* Function<void ()>&& - функция удаления объекта


# ::stappler::web::Request::getObject<typename>(stappler::StringView const&) const

## BRIEF

Получает объект из пула запроса

## CONTENT

Доступ: public

Получает объект из пула запроса

Параметры шаблона:
* typename T

Параметры:
* stappler::StringView const& - ключ для хранения

Возвращает:
* T*

# ::stappler::web::Request::performWithStorage(Callback<bool (const db::Transaction &)> const&) const

## BRIEF

Создаёт транзакцию и вызывает функцию с ней

## CONTENT

Доступ: public

Создаёт транзакцию и вызывает функцию с ней. Завершает транзакцию после вызова функции.

Параметры:
* Callback<bool (const db::Transaction &)> const&

Возвращает:
* bool

# ::stappler::web::Request::getSession()

## BRIEF

Возвращает сессию

## CONTENT

Доступ: public

Возвращает сессию

Возвращает:
* stappler::web::Session*

# ::stappler::web::Request::authorizeUser(db::User*,stappler::TimeInterval)

## BRIEF

Авторизует пользователя и создаёт сессию

## CONTENT

Доступ: public

Авторизует пользователя и создаёт сессию

Параметры:
* db::User* - пользователь
* stappler::TimeInterval - срок действия сессии

Возвращает:
* stappler::web::Session*

# ::stappler::web::Request::setInputFilter(stappler::web::InputFilter*)

## BRIEF

Устанавливает фильтр для получения данных

## CONTENT

Доступ: public

Устанавливает фильтр для получения данных

Параметры:
* stappler::web::InputFilter*


# ::stappler::web::Request::getInputFilter() const

## BRIEF

Возвращает фильтр входящих данных

## CONTENT

Доступ: public

Возвращает фильтр входящих данных

Возвращает:
* stappler::web::InputFilter*

# ::stappler::web::Request::initScriptContext(pug::Context&)

## BRIEF

Инициализирует стандартные функции шаблонизатора

## CONTENT

Доступ: protected

Инициализирует стандартные функции шаблонизатора

Параметры:
* pug::Context&


# ::stappler::web::Request::Buffer

## BRIEF

Внутренний буфер для записи данных в запрос

## CONTENT

Доступ: protected

Внутренний буфер для записи данных в запрос

Базовые классы:
* std::basic_streambuf<char,std::char_traits<char>>


# ::stappler::web::Request::Buffer::int_type

## BRIEF

Тип целого числа

## CONTENT

Доступ: public

Тип целого числа


# ::stappler::web::Request::Buffer::pos_type

## BRIEF

Тип позиции

## CONTENT

Доступ: public

Тип позиции


# ::stappler::web::Request::Buffer::off_type

## BRIEF

Тип смещения

## CONTENT

Доступ: public

Тип смещения

# ::stappler::web::Request::Buffer::streamsize

## BRIEF

Тип размера потока

## CONTENT

Доступ: public

Тип размера потока


# ::stappler::web::Request::Buffer::streamoff

## BRIEF

Тип смещения потока

## CONTENT

Доступ: public

Тип смещения потока


# ::stappler::web::Request::Buffer::ios_base

## BRIEF

Базовый тип ввода-вывода

## CONTENT

Доступ: public

Базовый тип ввода-вывода


# ::stappler::web::Request::Buffer::Buffer(stappler::web::RequestController*)

## BRIEF

Конструктор

## CONTENT

Доступ: public

Конструктор

Параметры:
* stappler::web::RequestController*


# ::stappler::web::Request::Buffer::Buffer(stappler::web::Request::Buffer&&)

## BRIEF

Конструктор перемещения

## CONTENT

Доступ: public

Конструктор перемещения

Параметры:
* stappler::web::Request::Buffer&&


# ::stappler::web::Request::Buffer::operator=(stappler::web::Request::Buffer&&)

## BRIEF

Оператор перемещения

## CONTENT

Доступ: public

Оператор перемещения

Параметры:
* stappler::web::Request::Buffer&&

Возвращает:
* stappler::web::Request::Buffer&

# ::stappler::web::Request::Buffer::Buffer(stappler::web::Request::Buffer const&)

## BRIEF

Конструктор копирования

## CONTENT

Доступ: public

Конструктор копирования

Параметры:
* stappler::web::Request::Buffer const&


# ::stappler::web::Request::Buffer::operator=(stappler::web::Request::Buffer const&)

## BRIEF

Оператор копирования

## CONTENT

Доступ: public

Оператор копирования

Параметры:
* stappler::web::Request::Buffer const&

Возвращает:
* stappler::web::Request::Buffer&

# ::stappler::web::Request::Buffer::overflow(stappler::web::Request::Buffer::int_type)

## BRIEF

Функция переполнения буфера

## CONTENT

Доступ: protected

Функция переполнения буфера

Параметры:
* stappler::web::Request::Buffer::int_type

Возвращает:
* int_type

# ::stappler::web::Request::Buffer::seekoff(stappler::web::Request::Buffer::off_type,ios_base::seekdir,ios_base::openmode)

## BRIEF

Смещает указатель внутри потока

## CONTENT

Доступ: protected

Смещает указатель внутри потока

Параметры:
* stappler::web::Request::Buffer::off_type
* ios_base::seekdir
* ios_base::openmode

Возвращает:
* pos_type

# ::stappler::web::Request::Buffer::seekpos(stappler::web::Request::Buffer::pos_type,ios_base::openmode)

## BRIEF

Смещает указатель внутри потока

## CONTENT

Доступ: protected

Смещает указатель внутри потока

Параметры:
* stappler::web::Request::Buffer::pos_type
* ios_base::openmode

Возвращает:
* pos_type

# ::stappler::web::Request::Buffer::sync()

## BRIEF

Синхронизирует буферы

## CONTENT

Доступ: protected

Синхронизирует буферы

Возвращает:
* int

# ::stappler::web::Request::Buffer::xsputn(std::basic_streambuf<char>::char_type const*,stappler::web::Request::Buffer::streamsize)

## BRIEF

Записывает данные в ответ на запрос

## CONTENT

Доступ: protected

Записывает данные в ответ на запрос

Параметры:
* std::basic_streambuf<char>::char_type const*
* stappler::web::Request::Buffer::streamsize

Возвращает:
* streamsize

# ::stappler::web::Request::Buffer::_config

## BRIEF

Контроллер

## CONTENT

Доступ: protected

Контроллер

Тип: stappler::web::RequestController*


# ::stappler::web::Request::_buffer

## BRIEF

Буфер вывода

## CONTENT

Доступ: protected

Буфер вывода

Тип: stappler::web::Request::Buffer

# ::stappler::web::Request::_config

## BRIEF

Контроллер

## CONTENT

Доступ: protected

Контроллер

Тип: stappler::web::RequestController*