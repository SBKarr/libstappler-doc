Title: SPWebRequestHandler.h


# EXTRA_WEBSERVER_WEBSERVER_REQUEST_SPWEBREQUESTHANDLER_H_

## BRIEF

Заголовок обработчика запроса

## CONTENT

Заголовок обработчика запроса


# ::stappler::web::RequestHandler

## BRIEF

Обработчик запроса

## CONTENT

Обработчик запроса

Базовые классы:
* AllocBase


# ::stappler::web::RequestHandler::HandlerCallback

## BRIEF

Функция создания обработчика запроса

## CONTENT

Доступ: public

Функция создания обработчика запроса


# ::stappler::web::RequestHandler::Make<typename,typename>(Args &&...)

## BRIEF

Создаёт обработчик на основе аргументов

## CONTENT

Доступ: public

Создаёт обработчик на основе аргументов

Параметры шаблона:
* typename T - тип нового обработчика
* typename Args - аргументы конструктора

Параметры:
* Args &&...

Возвращает:
* HandlerCallback

# ::stappler::web::RequestHandlerMap::Handler::Make<typename,typename>(Args &&...)

## BRIEF

Создаёт обработчик на основе аргументов

## CONTENT

Доступ: public

Создаёт обработчик на основе аргументов

Параметры шаблона:
* typename T
* typename Args

Параметры:
* Args &&...

Возвращает:
* Function<stappler::web::RequestHandlerMap::Handler *()>

# ::stappler::web::RequestHandler::~RequestHandler()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор


# ::stappler::web::RequestHandler::isRequestPermitted(stappler::web::Request&)

## BRIEF

Функция проверяет, доступна ли обработка запроса

## CONTENT

Доступ: public

Функция проверяет, доступна ли обработка запроса

Параметры:
* stappler::web::Request&

Возвращает:
* bool

# ::stappler::web::RequestHandler::isCorsPermitted(stappler::web::Request&,stappler::StringView const&,bool,stappler::StringView const&,stappler::StringView const&)

## BRIEF

Функция проверяет, доступен ли вызов с помощью CORS

## CONTENT

Доступ: public

Функция проверяет, доступен ли вызов с помощью CORS

Параметры:
* stappler::web::Request& - запрос
* stappler::StringView const& - значение заголовка Origin
* bool - true - является ли запрос предварительным
* stappler::StringView const& - метод предварительного запроса
* stappler::StringView const& - список заголовков предварительного запроса

Возвращает:
* bool - true если CORS допустим

# ::stappler::web::RequestHandler::getCorsAllowMethods(stappler::web::Request&)

## BRIEF

Возвращает список методов, допустимых для CORS

## CONTENT

Доступ: public

Возвращает список методов, допустимых для CORS

Параметры:
* stappler::web::Request&

Возвращает:
* stappler::StringView

# ::stappler::web::RequestHandler::getCorsAllowHeaders(stappler::web::Request&)

## BRIEF

Возвращает список заголовков, допустимых для CORS

## CONTENT

Доступ: public

Возвращает список заголовков, допустимых для CORS

Параметры:
* stappler::web::Request&

Возвращает:
* stappler::StringView

# ::stappler::web::RequestHandler::getCorsMaxAge(stappler::web::Request&)

## BRIEF

Возвращает срок хранения для результатов предварительных запросов CORS

## CONTENT

Доступ: public

Возвращает срок хранения для результатов предварительных запросов CORS

Параметры:
* stappler::web::Request&

Возвращает:
* stappler::StringView

# ::stappler::web::RequestHandler::onRequestRecieved(stappler::web::Request&,stappler::StringView,stappler::StringView,stappler::mem_pool::Value const&)

## BRIEF

Функция вызывается при получении нового запроса

## CONTENT

Доступ: public

Функция вызывается при получении нового запроса. Вызов основной функции обязателен при переопределении.

Параметры:
* stappler::web::Request&
* stappler::StringView - базовый путь запроса
* stappler::StringView - путь внутри запроса
* stappler::mem_pool::Value const& - данные запроса

Возвращает:
* stappler::web::Status

# ::stappler::web::RequestHandler::onPostReadRequest(stappler::web::Request&)

## BRIEF

Обрабатывает событие завершения чтения заголовков запроса

## CONTENT

Доступ: public

Обрабатывает событие завершения чтения заголовков запроса

Параметры:
* stappler::web::Request&

Возвращает:
* stappler::web::Status

# ::stappler::web::RequestHandler::onTranslateName(stappler::web::Request&)

## BRIEF

Обрабатывает событие трансляции имени файла

## CONTENT

Доступ: public

Обрабатывает событие трансляции имени файла

Параметры:
* stappler::web::Request&

Возвращает:
* stappler::web::Status

# ::stappler::web::RequestHandler::onQuickHandler(stappler::web::Request&,int)

## BRIEF

Пытается быстро завершить обработку запроса

## CONTENT

Доступ: public

Пытается быстро завершить обработку запроса

Параметры:
* stappler::web::Request&
* int - последовательный уровень попытки

Возвращает:
* stappler::web::Status

# ::stappler::web::RequestHandler::onInsertFilter(stappler::web::Request&)

## BRIEF

Обрабатывает запрос на назначение фильтра для входящих данных

## CONTENT

Доступ: public

Обрабатывает запрос на назначение фильтра для входящих данных

Параметры:
* stappler::web::Request&


# ::stappler::web::RequestHandler::onHandler(stappler::web::Request&)

## BRIEF

Обрабатывает запрос до обработки входящих данных

## CONTENT

Доступ: public

Обрабатывает запрос до обработки входящих данных. Это финальная функци обработки запроса без данных.

Параметры:
* stappler::web::Request&

Возвращает:
* stappler::web::Status

# ::stappler::web::RequestHandler::onFilterInit(stappler::web::InputFilter*)

## BRIEF

Инициализирует фильтр данных

## CONTENT

Доступ: public

Инициализирует фильтр данных

Параметры:
* stappler::web::InputFilter*


# ::stappler::web::RequestHandler::onFilterUpdate(stappler::web::InputFilter*)

## BRIEF

Получает обновление фильтра данных

## CONTENT

Доступ: public

Получает обновление фильтра данных

Параметры:
* stappler::web::InputFilter*


# ::stappler::web::RequestHandler::onFilterComplete(stappler::web::InputFilter*)

## BRIEF

Завершает обработку данных с помощью фильтра

## CONTENT

Доступ: public

Завершает обработку данных с помощью фильтра. Это последняя функци обработки запроса, имеющего данные.

Параметры:
* stappler::web::InputFilter*


# ::stappler::web::RequestHandler::getOptions() const

## BRIEF

Возвращает дололнительные данные обработчика

## CONTENT

Доступ: public

Возвращает дололнительные данные обработчика

Возвращает:
* stappler::mem_pool::Value const&

# ::stappler::web::RequestHandler::setAccessRole(db::AccessRoleId)

## BRIEF

Устанавливает роль для БД

## CONTENT

Доступ: public

Устанавливает роль для БД

Параметры:
* db::AccessRoleId


# ::stappler::web::RequestHandler::getAccessRole() const

## BRIEF

Получает роль для БД

## CONTENT

Доступ: public

Получает роль для БД

Возвращает:
* db::AccessRoleId

# ::stappler::web::RequestHandler::_request

## BRIEF

Запрос

## CONTENT

Доступ: protected

Запрос

Тип: stappler::web::Request


# ::stappler::web::RequestHandler::_originPath

## BRIEF

Исходный путь запроса

## CONTENT

Доступ: protected

Исходный путь запроса

Тип: stappler::StringView


# ::stappler::web::RequestHandler::_subPath

## BRIEF

Путь внутри запроса

## CONTENT

Доступ: protected

Путь внутри запроса

Тип: stappler::StringView


# ::stappler::web::RequestHandler::_subPathVec

## BRIEF

Разобранный на сегменты путь внутри запроса

## CONTENT

Доступ: protected

Разобранный на сегменты путь внутри запроса

Тип: Vector<stappler::StringView>


# ::stappler::web::RequestHandler::_options

## BRIEF

Дополнительные данные запроса

## CONTENT

Доступ: protected

Дополнительные данные запроса

Тип: stappler::mem_pool::Value


# ::stappler::web::RequestHandler::_accessRole

## BRIEF

Роль для БД

## CONTENT

Доступ: protected

Роль для БД

Тип: db::AccessRoleId


# ::stappler::web::RequestHandler::_transaction

## BRIEF

Текущая транзакция с БД

## CONTENT

Доступ: protected

Текущая транзакция с БД

Тип: db::Transaction


# ::stappler::web::DefaultHandler

## BRIEF

Реализация стандартного обработчика

## CONTENT

Реализация стандартного обработчика. Вызывает функцию обработки вебсервера по умолчанию.

Базовые классы:
* RequestHandler


# ::stappler::web::DefaultHandler::isRequestPermitted(stappler::web::Request&)

## BRIEF

Функция проверки доступа

## CONTENT

Доступ: public

Функция проверки доступа. Возвращает true для всех.

Параметры:
* stappler::web::Request&

Возвращает:
* bool

# ::stappler::web::DataHandler

## BRIEF

Упрощённый обработчик для приёма и отпраки данных в JSON/CBOR

## CONTENT

Упрощённый обработчик для приёма и отпраки данных в JSON/CBOR

Требует только реализаии функции `processDataHandler` и `isRequestPermitted` для работы запроса.

Функция `processDataHandler` получает ссылку на данные результата, и входящие данные от фильтра (при наличии). Её задача - записать результат в вызодной аргумент.

Базовые классы:
* RequestHandler


# ::stappler::web::DataHandler::AllowMethod

## BRIEF

Флаги допустимых методов

## CONTENT

Доступ: public

Флаги допустимых методов

Значения:
* None
* Get
* Post
* Put
* Delete
* All


# ::stappler::web::DataHandler::~DataHandler()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор

# ::stappler::web::DataHandler::processDataHandler(stappler::web::Request&,stappler::mem_pool::Value&,stappler::mem_pool::Value&)

## BRIEF

Функция обработки запроса

## CONTENT

Доступ: public

Функция обработки запроса. Точка переопределения.

Параметры:
* stappler::web::Request&
* stappler::mem_pool::Value& - данные результата
* stappler::mem_pool::Value& - входящие данные

Возвращает:
* bool - true при успешной обработке

# ::stappler::web::DataHandler::onTranslateName(stappler::web::Request&)

## BRIEF

Обработка события

## CONTENT

Доступ: public

Обработка события

Параметры:
* stappler::web::Request&

Возвращает:
* stappler::web::Status

# ::stappler::web::DataHandler::onInsertFilter(stappler::web::Request&)

## BRIEF

Обработка события

## CONTENT

Доступ: public

Обработка события

Параметры:
* stappler::web::Request&


# ::stappler::web::DataHandler::onHandler(stappler::web::Request&)

## BRIEF

Обработка события

## CONTENT

Доступ: public

Обработка события

Параметры:
* stappler::web::Request&

Возвращает:
* stappler::web::Status

# ::stappler::web::DataHandler::onFilterComplete(stappler::web::InputFilter*)

## BRIEF

Обработка события

## CONTENT

Доступ: public

Обработка события

Параметры:
* stappler::web::InputFilter*


# ::stappler::web::DataHandler::allowJsonP()

## BRIEF

Проверяет, разрешен ли режим JSON-P

## CONTENT

Доступ: protected

Проверяет, разрешен ли режим JSON-P

Возвращает:
* bool

# ::stappler::web::DataHandler::writeResult(stappler::mem_pool::Value&)

## BRIEF

Записывает результат работы функции

## CONTENT

Доступ: protected

Записывает результат работы функции

Параметры:
* stappler::mem_pool::Value&

Возвращает:
* stappler::web::Status

# ::stappler::web::DataHandler::_allow

## BRIEF

Флаги допустимых методов

## CONTENT

Доступ: protected

Флаги допустимых методов

Тип: stappler::web::DataHandler::AllowMethod


# ::stappler::web::DataHandler::_config

## BRIEF

Конфигурация входящих данных

## CONTENT

Доступ: protected

Конфигурация входящих данных

Тип: db::InputConfig


# ::stappler::web::DataHandler::_filter

## BRIEF

Фильтр данных

## CONTENT

Доступ: protected

Фильтр данных

Тип: stappler::web::InputFilter*


# ::stappler::web::operator|(DataHandler::AllowMethod const&,DataHandler::AllowMethod const&)

## BRIEF

Автоматически созданный оператор битового флага

## CONTENT

Автоматически созданный оператор битового флага

Параметры:
* DataHandler::AllowMethod const&
* DataHandler::AllowMethod const&

Возвращает:
* DataHandler::AllowMethod

# ::stappler::web::operator&(DataHandler::AllowMethod const&,DataHandler::AllowMethod const&)

## BRIEF

Автоматически созданный оператор битового флага

## CONTENT

Автоматически созданный оператор битового флага

Параметры:
* DataHandler::AllowMethod const&
* DataHandler::AllowMethod const&

Возвращает:
* DataHandler::AllowMethod

# ::stappler::web::operator^(DataHandler::AllowMethod const&,DataHandler::AllowMethod const&)

## BRIEF

Автоматически созданный оператор битового флага

## CONTENT

Автоматически созданный оператор битового флага

Параметры:
* DataHandler::AllowMethod const&
* DataHandler::AllowMethod const&

Возвращает:
* DataHandler::AllowMethod

# ::stappler::web::operator|=(DataHandler::AllowMethod&,DataHandler::AllowMethod const&)

## BRIEF

Автоматически созданный оператор битового флага

## CONTENT

Автоматически созданный оператор битового флага

Параметры:
* DataHandler::AllowMethod&
* DataHandler::AllowMethod const&

Возвращает:
* DataHandler::AllowMethod&

# ::stappler::web::operator&=(DataHandler::AllowMethod&,DataHandler::AllowMethod const&)

## BRIEF

Автоматически созданный оператор битового флага

## CONTENT

Автоматически созданный оператор битового флага

Параметры:
* DataHandler::AllowMethod&
* DataHandler::AllowMethod const&

Возвращает:
* DataHandler::AllowMethod&

# ::stappler::web::operator^=(DataHandler::AllowMethod&,DataHandler::AllowMethod const&)

## BRIEF

Автоматически созданный оператор битового флага

## CONTENT

Автоматически созданный оператор битового флага

Параметры:
* DataHandler::AllowMethod&
* DataHandler::AllowMethod const&

Возвращает:
* DataHandler::AllowMethod&

# ::stappler::web::operator==(DataHandler::AllowMethod const&,std::underlying_type<DataHandler::AllowMethod>::type const&)

## BRIEF

Автоматически созданный оператор битового флага

## CONTENT

Автоматически созданный оператор битового флага

Параметры:
* DataHandler::AllowMethod const&
* std::underlying_type<DataHandler::AllowMethod>::type const&

Возвращает:
* bool

# ::stappler::web::operator==(std::underlying_type<DataHandler::AllowMethod>::type const&,DataHandler::AllowMethod const&)

## BRIEF

Автоматически созданный оператор битового флага

## CONTENT

Автоматически созданный оператор битового флага

Параметры:
* std::underlying_type<DataHandler::AllowMethod>::type const&
* DataHandler::AllowMethod const&

Возвращает:
* bool

# ::stappler::web::operator!=(DataHandler::AllowMethod const&,std::underlying_type<DataHandler::AllowMethod>::type const&)

## BRIEF

Автоматически созданный оператор битового флага

## CONTENT

Автоматически созданный оператор битового флага

Параметры:
* DataHandler::AllowMethod const&
* std::underlying_type<DataHandler::AllowMethod>::type const&

Возвращает:
* bool

# ::stappler::web::operator!=(std::underlying_type<DataHandler::AllowMethod>::type const&,DataHandler::AllowMethod const&)

## BRIEF

Автоматически созданный оператор битового флага

## CONTENT

Автоматически созданный оператор битового флага

Параметры:
* std::underlying_type<DataHandler::AllowMethod>::type const&
* DataHandler::AllowMethod const&

Возвращает:
* bool

# ::stappler::web::operator~(DataHandler::AllowMethod const&)

## BRIEF

Автоматически созданный оператор битового флага

## CONTENT

Автоматически созданный оператор битового флага

Параметры:
* DataHandler::AllowMethod const&

Возвращает:
* DataHandler::AllowMethod

# ::stappler::web::FilesystemHandler

## BRIEF

Обработчик, возвращающий файл из файловой системы

## CONTENT

Обработчик, возвращающий файл из файловой системы

Базовые классы:
* RequestHandler


# ::stappler::web::FilesystemHandler::FilesystemHandler(stappler::mem_pool::String const&,size_t)

## BRIEF

Конструктор

## CONTENT

Доступ: public

Конструктор

Параметры:
* stappler::mem_pool::String const& - путь к файлу
* size_t - время кеширования в секундах


# ::stappler::web::FilesystemHandler::FilesystemHandler(stappler::mem_pool::String const&,stappler::mem_pool::String const&,size_t)

## BRIEF

Конструктор

## CONTENT

Доступ: public

Конструктор

Параметры:
* stappler::mem_pool::String const& - путь к файлу
* stappler::mem_pool::String const& - тип данных
* size_t - время кеширования в секундах


# ::stappler::web::FilesystemHandler::isRequestPermitted(stappler::web::Request&)

## BRIEF

Проверяет запрос на доступность

## CONTENT

Доступ: public

Проверяет запрос на доступность

Параметры:
* stappler::web::Request&

Возвращает:
* bool

# ::stappler::web::FilesystemHandler::onTranslateName(stappler::web::Request&)

## BRIEF

Обработчик события

## CONTENT

Доступ: public

Обработчик события

Параметры:
* stappler::web::Request&

Возвращает:
* stappler::web::Status

# ::stappler::web::FilesystemHandler::_path

## BRIEF

Путь к файлу

## CONTENT

Доступ: protected

Путь к файлу

Тип: stappler::mem_pool::String


# ::stappler::web::FilesystemHandler::_contentType

## BRIEF

Тип содержимого

## CONTENT

Доступ: protected

Тип содержимого

Тип: stappler::mem_pool::String


# ::stappler::web::FilesystemHandler::_cacheTime

## BRIEF

Время кеширования

## CONTENT

Доступ: protected

Время кеширования

Тип: size_t


# ::stappler::web::RequestHandlerMap

## BRIEF

Карта обработки запроса

## CONTENT

Карта обработки запроса. Карта позволяет выстраивать схему подзапросов, определять и формализовать параметры запросов.

Базовые классы:
* AllocBase


# ::stappler::web::RequestHandlerMap::Handler

## BRIEF

Обработчик запроса для карты

## CONTENT

Доступ: public

Обработчик запроса для карты. Реализует упрощённый интерфейс для переопределения.

Базовые классы:
* RequestHandler


# ::stappler::web::RequestHandlerMap::Handler::isPermitted()

## BRIEF

Упрощённая функция проверки доступа

## CONTENT

Доступ: public

Упрощённая функция проверки доступа. Точка переопределения.

Возвращает:
* bool

# ::stappler::web::RequestHandlerMap::Handler::onRequest()

## BRIEF

Функция обработки запроса

## CONTENT

Доступ: public

Функция обработки запроса. Точка переопределения.

Возвращает:
* stappler::web::Status

# ::stappler::web::RequestHandlerMap::Handler::onData()

## BRIEF

Функция обработки запроса с возвратом данных

## CONTENT

Доступ: public

Функция обработки запроса с возвратом данных. Точка переопределения. Не вызывается, если переопределена `onRequest`.

Возвращает:
* stappler::mem_pool::Value

# ::stappler::web::RequestHandlerMap::Handler::Handler()

## BRIEF

Конструктор

## CONTENT

Доступ: public

Конструктор


# ::stappler::web::RequestHandlerMap::Handler::~Handler()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор


# ::stappler::web::RequestHandlerMap::Handler::onParams(stappler::web::RequestHandlerMap::HandlerInfo const*,stappler::mem_pool::Value&&)

## BRIEF

Устанавливает разобранные входящие параметры

## CONTENT

Доступ: public

Устанавливает разобранные входящие параметры

Параметры:
* stappler::web::RequestHandlerMap::HandlerInfo const*
* stappler::mem_pool::Value&&


# ::stappler::web::RequestHandlerMap::Handler::isRequestPermitted(stappler::web::Request&)

## BRIEF

Проверка доступа

## CONTENT

Доступ: public

Проверка доступа

Параметры:
* stappler::web::Request&

Возвращает:
* bool

# ::stappler::web::RequestHandlerMap::Handler::onTranslateName(stappler::web::Request&)

## BRIEF

Обработка события

## CONTENT

Доступ: public

Обработка события

Параметры:
* stappler::web::Request&

Возвращает:
* stappler::web::Status

# ::stappler::web::RequestHandlerMap::Handler::onInsertFilter(stappler::web::Request&)

## BRIEF

Обработка события

## CONTENT

Доступ: public

Обработка события

Параметры:
* stappler::web::Request&


# ::stappler::web::RequestHandlerMap::Handler::onHandler(stappler::web::Request&)

## BRIEF

Обработка события

## CONTENT

Доступ: public

Обработка события

Параметры:
* stappler::web::Request&

Возвращает:
* stappler::web::Status

# ::stappler::web::RequestHandlerMap::Handler::onFilterComplete(stappler::web::InputFilter*)

## BRIEF

Обработка события

## CONTENT

Доступ: public

Обработка события

Параметры:
* stappler::web::InputFilter*


# ::stappler::web::RequestHandlerMap::Handler::getRequest() const

## BRIEF

Возвращает запрос

## CONTENT

Доступ: public

Возвращает запрос

Возвращает:
* stappler::web::Request const&

# ::stappler::web::RequestHandlerMap::Handler::getParams() const

## BRIEF

Возвращает параметры строки запроса

## CONTENT

Доступ: public

Возвращает параметры строки запроса

Возвращает:
* stappler::mem_pool::Value const&

# ::stappler::web::RequestHandlerMap::Handler::getQueryFields() const

## BRIEF

Возвращает разобранные поля URI запроса

## CONTENT

Доступ: public

Возвращает разобранные поля URI запроса

Возвращает:
* stappler::mem_pool::Value const&

# ::stappler::web::RequestHandlerMap::Handler::getInputFields() const

## BRIEF

Возвращает разобранные поля тела запроса

## CONTENT

Доступ: public

Возвращает разобранные поля тела запроса

Возвращает:
* stappler::mem_pool::Value const&

# ::stappler::web::RequestHandlerMap::Handler::allowJsonP()

## BRIEF

Проверка на доступность JsonP

## CONTENT

Доступ: protected

Проверка на доступность JsonP

Возвращает:
* bool

# ::stappler::web::RequestHandlerMap::Handler::processQueryFields(stappler::mem_pool::Value&&)

## BRIEF

Обрабатывает поля запроса

## CONTENT

Доступ: protected

Обрабатывает поля запроса

Параметры:
* stappler::mem_pool::Value&&

Возвращает:
* bool

# ::stappler::web::RequestHandlerMap::Handler::processInputFields(stappler::web::InputFilter*)

## BRIEF

Обрабатывает поля запроса

## CONTENT

Доступ: protected

Обрабатывает поля запроса

Параметры:
* stappler::web::InputFilter*

Возвращает:
* bool

# ::stappler::web::RequestHandlerMap::Handler::writeResult(stappler::mem_pool::Value&)

## BRIEF

Записывает данные в результат

## CONTENT

Доступ: protected

Записывает данные в результат

Параметры:
* stappler::mem_pool::Value&

Возвращает:
* stappler::web::Status

# ::stappler::web::RequestHandlerMap::Handler::getInputFile(stappler::StringView const&)

## BRIEF

Возвращает входящий файл по имени поля

## CONTENT

Доступ: protected

Возвращает входящий файл по имени поля

Параметры:
* stappler::StringView const&

Возвращает:
* db::InputFile*

# ::stappler::web::RequestHandlerMap::Handler::_info

## BRIEF

Информация об обработчике внутри карты

## CONTENT

Доступ: protected

Информация об обработчике внутри карты

Тип: stappler::web::RequestHandlerMap::HandlerInfo const*


# ::stappler::web::RequestHandlerMap::Handler::_filter

## BRIEF

Фильтр

## CONTENT

Доступ: protected

Фильтр

Тип: stappler::web::InputFilter*


# ::stappler::web::RequestHandlerMap::Handler::_params

## BRIEF

Параметры запроса

## CONTENT

Доступ: protected

Параметры запроса

Тип: stappler::mem_pool::Value


# ::stappler::web::RequestHandlerMap::Handler::_queryFields

## BRIEF

Данные из строки запроса

## CONTENT

Доступ: protected

Данные из строки запроса

Тип: stappler::mem_pool::Value


# ::stappler::web::RequestHandlerMap::Handler::_inputFields

## BRIEF

Данные из тела запроса

## CONTENT

Доступ: protected

Данные из тела запроса

Тип: stappler::mem_pool::Value


# ::stappler::web::RequestHandlerMap::HandlerInfo

## BRIEF

Информация об обработчике подзапроса

## CONTENT

Доступ: public

Информация об обработчике подзапроса

Базовые классы:
* AllocBase


# ::stappler::web::RequestHandlerMap::HandlerInfo::HandlerInfo(stappler::StringView const&,stappler::web::RequestMethod,stappler::StringView const&,Function<stappler::web::RequestHandlerMap::Handler *()>&&,stappler::mem_pool::Value&&)

## BRIEF

Конструктор

## CONTENT

Доступ: public

Конструктор

Параметры:
* stappler::StringView const& - имя обработчика
* stappler::web::RequestMethod - метод обработчика
* stappler::StringView const& - шаблон для данных
* Function<stappler::web::RequestHandlerMap::Handler *()>&&
* stappler::mem_pool::Value&&


# ::stappler::web::RequestHandlerMap::HandlerInfo::addQueryFields(std::initializer_list<db::Field>)

## BRIEF

Добавляет поля, читаемые из строки запроса

## CONTENT

Доступ: public

Добавляет поля, читаемые из строки запроса. Для определения полей используется структура полей из интерфейса БД.

Параметры:
* std::initializer_list<db::Field>

Возвращает:
* stappler::web::RequestHandlerMap::HandlerInfo&

# ::stappler::web::RequestHandlerMap::HandlerInfo::addQueryFields(Vector<db::Field>&&)

## BRIEF

Добавляет поля, читаемые из строки запроса

## CONTENT

Доступ: public

Добавляет поля, читаемые из строки запроса. Для определения полей используется структура полей из интерфейса БД.

Параметры:
* Vector<db::Field>&&

Возвращает:
* stappler::web::RequestHandlerMap::HandlerInfo&

# ::stappler::web::RequestHandlerMap::HandlerInfo::addInputFields(std::initializer_list<db::Field>)

## BRIEF

Добавляет поля, читаемые из тела запроса

## CONTENT

Доступ: public

Добавляет поля, читаемые из тела запроса. Для определения полей используется структура полей из интерфейса БД.

Параметры:
* std::initializer_list<db::Field>

Возвращает:
* stappler::web::RequestHandlerMap::HandlerInfo&

# ::stappler::web::RequestHandlerMap::HandlerInfo::addInputFields(Vector<db::Field>&&)

## BRIEF

Добавляет поля, читаемые из тела запроса

## CONTENT

Доступ: public

Добавляет поля, читаемые из тела запроса. Для определения полей используется структура полей из интерфейса БД.

Параметры:
* Vector<db::Field>&&

Возвращает:
* stappler::web::RequestHandlerMap::HandlerInfo&

# ::stappler::web::RequestHandlerMap::HandlerInfo::setInputConfig(db::InputConfig)

## BRIEF

Устанавливает конфигурацию входящих данных

## CONTENT

Доступ: public

Устанавливает конфигурацию входящих данных

Параметры:
* db::InputConfig

Возвращает:
* stappler::web::RequestHandlerMap::HandlerInfo&

# ::stappler::web::RequestHandlerMap::HandlerInfo::match(stappler::StringView const&,size_t&) const

## BRIEF

Проверяет, подходит ли запрос для обработки URI

## CONTENT

Доступ: public

Проверяет, подходит ли запрос для обработки URI

Параметры:
* stappler::StringView const&
* size_t& - (вывод) - оценка совпадения

Возвращает:
* stappler::mem_pool::Value - параметры строки запроса

# ::stappler::web::RequestHandlerMap::HandlerInfo::onHandler(stappler::mem_pool::Value&&) const

## BRIEF

Создаёт обработчик запроса

## CONTENT

Доступ: public

Создаёт обработчик запроса

Параметры:
* stappler::mem_pool::Value&&

Возвращает:
* stappler::web::RequestHandlerMap::Handler*

# ::stappler::web::RequestHandlerMap::HandlerInfo::getMethod() const

## BRIEF

Возвращает метод запроса

## CONTENT

Доступ: public

Возвращает метод запроса

Возвращает:
* stappler::web::RequestMethod

# ::stappler::web::RequestHandlerMap::HandlerInfo::getInputConfig() const

## BRIEF

Возвращает конфигурацию входящих данных

## CONTENT

Доступ: public

Возвращает конфигурацию входящих данных

Возвращает:
* db::InputConfig const&

# ::stappler::web::RequestHandlerMap::HandlerInfo::getName() const

## BRIEF

Возвращает имя обработчика

## CONTENT

Доступ: public

Возвращает имя обработчика

Возвращает:
* stappler::StringView

# ::stappler::web::RequestHandlerMap::HandlerInfo::getPattern() const

## BRIEF

Возвращает шаблон URI

## CONTENT

Доступ: public

Возвращает шаблон URI

Возвращает:
* stappler::StringView

# ::stappler::web::RequestHandlerMap::HandlerInfo::getOptions() const

## BRIEF

Возвращает дополнительные данные

## CONTENT

Доступ: public

Возвращает дополнительные данные

Возвращает:
* stappler::mem_pool::Value const&

# ::stappler::web::RequestHandlerMap::HandlerInfo::getQueryScheme() const

## BRIEF

Возвращает схему данных полей из строки запроса

## CONTENT

Доступ: public

Возвращает схему данных полей из строки запроса

Возвращает:
* db::Scheme const&

# ::stappler::web::RequestHandlerMap::HandlerInfo::getInputScheme() const

## BRIEF

Возвращает схему данных полей из тела запроса

## CONTENT

Доступ: public

Возвращает схему данных полей из тела запроса

Возвращает:
* db::Scheme const&

# ::stappler::web::RequestHandlerMap::HandlerInfo::Fragment

## BRIEF

Фрагмент URI

## CONTENT

Доступ: protected

Фрагмент URI

# ::stappler::web::RequestHandlerMap::HandlerInfo::Fragment::Type

## BRIEF

Тип фрагмента

## CONTENT

Тип фрагмента

Значения:
* Text
* Pattern


# ::stappler::web::RequestHandlerMap::HandlerInfo::Fragment::Fragment(stappler::web::RequestHandlerMap::HandlerInfo::Fragment::Type,stappler::StringView)

## BRIEF

Конструктор

## CONTENT

Конструктор

Параметры:
* stappler::web::RequestHandlerMap::HandlerInfo::Fragment::Type
* stappler::StringView


# ::stappler::web::RequestHandlerMap::HandlerInfo::Fragment::type

## BRIEF

Тип

## CONTENT

Тип

Тип: stappler::web::RequestHandlerMap::HandlerInfo::Fragment::Type


# ::stappler::web::RequestHandlerMap::HandlerInfo::Fragment::string

## BRIEF

Данные фрагмента

## CONTENT

Данные фрагмента

Тип: stappler::mem_pool::String


# ::stappler::web::RequestHandlerMap::HandlerInfo::name

## BRIEF

Имя шаблона

## CONTENT

Доступ: protected

Имя шаблона

Тип: stappler::mem_pool::String


# ::stappler::web::RequestHandlerMap::HandlerInfo::method

## BRIEF

Метод запроса

## CONTENT

Доступ: protected

Метод запроса

Тип: stappler::web::RequestMethod


# ::stappler::web::RequestHandlerMap::HandlerInfo::pattern

## BRIEF

Шаблон URI

## CONTENT

Доступ: protected

Шаблон URI

Тип: stappler::mem_pool::String


# ::stappler::web::RequestHandlerMap::HandlerInfo::handler

## BRIEF

Функция создания обработчика

## CONTENT

Доступ: protected

Функция создания обработчика

Тип: Function<stappler::web::RequestHandlerMap::Handler *()>


# ::stappler::web::RequestHandlerMap::HandlerInfo::options

## BRIEF

Дополнительные данные

## CONTENT

Доступ: protected

Дополнительные данные

Тип: stappler::mem_pool::Value


# ::stappler::web::RequestHandlerMap::HandlerInfo::queryFields

## BRIEF

Схема данных полей из строки запроса

## CONTENT

Доступ: protected

Схема данных полей из строки запроса

Тип: db::Scheme


# ::stappler::web::RequestHandlerMap::HandlerInfo::inputFields

## BRIEF

Схема данных полей из тела запроса

## CONTENT

Доступ: protected

Схема данных полей из тела запроса

Тип: db::Scheme


# ::stappler::web::RequestHandlerMap::HandlerInfo::fragments

## BRIEF

Фрагменты URI

## CONTENT

Доступ: protected

Фрагменты URI

Тип: Vector<stappler::web::RequestHandlerMap::HandlerInfo::Fragment>


# ::stappler::web::RequestHandlerMap::RequestHandlerMap()

## BRIEF

Конструктор

## CONTENT

Доступ: public

Конструктор


# ::stappler::web::RequestHandlerMap::~RequestHandlerMap()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор

# ::stappler::web::RequestHandlerMap::RequestHandlerMap(stappler::web::RequestHandlerMap&&)

## BRIEF

Конструктор перемещения

## CONTENT

Доступ: public

Конструктор перемещения

Параметры:
* stappler::web::RequestHandlerMap&&


# ::stappler::web::RequestHandlerMap::operator=(stappler::web::RequestHandlerMap&&)

## BRIEF

Оператор перемещения

## CONTENT

Доступ: public

Оператор перемещения

Параметры:
* stappler::web::RequestHandlerMap&&

Возвращает:
* stappler::web::RequestHandlerMap&

# ::stappler::web::RequestHandlerMap::RequestHandlerMap(stappler::web::RequestHandlerMap const&)

## BRIEF

Конструктор копирования

## CONTENT

Доступ: public

Конструктор копирования

Параметры:
* stappler::web::RequestHandlerMap const&


# ::stappler::web::RequestHandlerMap::operator=(stappler::web::RequestHandlerMap const&)

## BRIEF

Оператор копирования

## CONTENT

Доступ: public

Оператор копирования

Параметры:
* stappler::web::RequestHandlerMap const&

Возвращает:
* stappler::web::RequestHandlerMap&

# ::stappler::web::RequestHandlerMap::onRequest(stappler::web::Request&,stappler::StringView const&) const

## BRIEF

Обрабатывает новый запрос и возвращает соотвествующий обработчик

## CONTENT

Доступ: public

Обрабатывает новый запрос и возвращает соотвествующий обработчик

Параметры:
* stappler::web::Request&
* stappler::StringView const&

Возвращает:
* stappler::web::RequestHandlerMap::Handler*

# ::stappler::web::RequestHandlerMap::addHandler(stappler::StringView const&,stappler::web::RequestMethod,stappler::StringView const&,Function<stappler::web::RequestHandlerMap::Handler *()>&&,stappler::mem_pool::Value&&)

## BRIEF

Добавляет обработчик в карту

## CONTENT

Доступ: public

Добавляет обработчик в карту. Обработчик добавляется по шаблону URI. Шаблон URI может содержать параметры для подставноки после ":", например, `/uri/:id/mrssages/:message`. Такие параметры передаются обработчеку как ключ-значение.

Возвращает данные обработчика, в которые можно добавить поля для чтения входящих переменных.

Параметры:
* stappler::StringView const& - имя обработчика
* stappler::web::RequestMethod - метод запроса
* stappler::StringView const& - шаблон URI
* Function<stappler::web::RequestHandlerMap::Handler *()>&& - функция создания обработчика
* stappler::mem_pool::Value&& - дополниетльные данные

Возвращает:
* stappler::web::RequestHandlerMap::HandlerInfo& - данные обработчика

# ::stappler::web::RequestHandlerMap::addHandler(stappler::StringView const&,stappler::web::RequestMethod,stappler::StringView const&,Function<bool (stappler::web::RequestHandlerMap::Handler &)>&&,Function<stappler::mem_pool::Value (stappler::web::RequestHandlerMap::Handler &)>&&,stappler::mem_pool::Value&&)

## BRIEF

Добавляет упрощённый обработчик в карту

## CONTENT

Доступ: public

Добавляет упрощённый обработчик в карту. Обработчик добавляется по шаблону URI. Шаблон URI может содержать параметры для подставноки после ":", например, `/uri/:id/mrssages/:message`. Такие параметры передаются обработчеку как ключ-значение.

Возвращает данные обработчика, в которые можно добавить поля для чтения входящих переменных.

Параметры:
* stappler::StringView const& - имя обработчика
* stappler::web::RequestMethod - метод запроса
* stappler::StringView const& - шаблон URI
* Function<bool (stappler::web::RequestHandlerMap::Handler &)>&& - функция контроля доступа
* Function<stappler::mem_pool::Value (stappler::web::RequestHandlerMap::Handler &)>&& - функция возврата данных
* stappler::mem_pool::Value&& - дополнительные данные

Возвращает:
* stappler::web::RequestHandlerMap::HandlerInfo&

# ::stappler::web::RequestHandlerMap::getHandlers() const

## BRIEF

Возвращает вложенные обработчики

## CONTENT

Доступ: public

Возвращает вложенные обработчики

Возвращает:
* Vector<stappler::web::RequestHandlerMap::HandlerInfo> const&

# ::stappler::web::RequestHandlerMap::_handlers

## BRIEF

Вложенные обработчики

## CONTENT

Доступ: protected

Вложенные обработчики

Тип: Vector<stappler::web::RequestHandlerMap::HandlerInfo>
