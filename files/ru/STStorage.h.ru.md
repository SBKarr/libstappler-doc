Title: STStorage.h


# STAPPLER_DB_STSTORAGE_H_

## BRIEF

Основной заголовок системы хранения данных и интерфейсов к БД

## CONTENT

Основной заголовок системы хранения данных и интерфейсов к БД.

Система хранения данных использует только интерфейс пулов памяти, поскольку может выделять множетство небольших сегментов памяти (отдельные поля, их имена) в ходе работы. Этим обусловлены особенности API.

В частности, подсистема пулов памяти не позволяет передать в другой пул данные, не имея к этому полу доступа заранее, и не может передавать пулы из непотокобезопасного аллокатора между потоками.

Представленные интерфейсы выполняют роль строительных блоков для реальной системы, не предлагая готову работоспособную реализацию, поскольку реальное использование может иметь разные цели и задачи, от хранения данных для мобильного приложения до веб-сервера, обслуживающего пользовательские запросы. Для реальной реализации используйте соотвествующий модуль SDK, сообразный назначению приложения.


# ::stappler::db::internals::RequestData

## BRIEF

Структура, идентифицирующая источник запроса к данным

## CONTENT

Структура, идентифицирующая источник запроса к данным


# ::stappler::db::internals::RequestData::exists

## BRIEF

Флаг устанавливается если данные заданы и запрос не является локальным

## CONTENT

Флаг устанавливается если данные заданы и запрос не является локальным

Тип: bool


# ::stappler::db::internals::RequestData::address

## BRIEF

Адрес. от которого пришёл запрос

## CONTENT

Адрес. от которого пришёл запрос. IP-адрес или другой способ идентифицировать клиента в системе. Структура устанавливается для текущего пула памяти и позволяет опознать клиента, который запрашивает данные.

Тип: stappler::StringView


# ::stappler::db::internals::RequestData::hostname

## BRIEF

Имя хоста, принявшего запрос

## CONTENT

Имя хоста, принявшего запрос

Тип: stappler::StringView


# ::stappler::db::internals::RequestData::uri

## BRIEF

URL, принявший запрос

## CONTENT

URL, принявший запрос

Тип: stappler::StringView


# ::stappler::db::internals::RequestData::operator bool()

## BRIEF

Проверяет, заполнена ли структура

## CONTENT

Проверяет, заполнена ли структура

Возвращает:
* bool

# ::stappler::db::internals::getAdapterFromContext()

## BRIEF

Возвращает адаптер БД для текущего пула памяти, если он есть

## CONTENT

Возвращает адаптер БД для текущего пула памяти, если он есть

Возвращает:
* stappler::db::Adapter

# ::stappler::db::internals::scheduleAyncDbTask(Callback<Function<void (const stappler::db::Transaction &)> (memory::pool_t *)> const&)

## BRIEF

Функция для подготовки асинхронного вызова

## CONTENT

Функция для подготовки асинхронного вызова. Асинхронная задача может выполняться в другом потоке либо в одном потоке во время его простоя. Вызывает переданную функцию обратного вызова в контексте пула памяти, который будет использоваться для асинхронного вызова. Пользователь должен вернуть функцию, реализующую сам асиннхронный вызов.

Параметры:
* Callback<Function<void (const stappler::db::Transaction &)> (memory::pool_t *)> const&


# ::stappler::db::internals::isAdministrative()

## BRIEF

Проверяет, что текущий контекст является административным

## CONTENT

Проверяет, что текущий контекст является административным. В административном контексте не требуется контроль доступа. Контекст привязан к активному пулу памяти

Возвращает:
* bool

# ::stappler::db::internals::getDocuemntRoot()

## BRIEF

Возвращает путь для хранения локументов

## CONTENT

Возвращает путь для хранения локументов

Возвращает:
* stappler::mem_pool::String

# ::stappler::db::internals::getFileScheme()

## BRIEF

Возвращает схему данных для хранения внешних файлов

## CONTENT

Возвращает схему данных для хранения внешних файлов

Возвращает:
* stappler::db::Scheme const*

# ::stappler::db::internals::getUserScheme()

## BRIEF

Возвращает схему данных для хранения пользователей системы

## CONTENT

Возвращает схему данных для хранения пользователей системы. Предполагается, что эти пользователи имеют право управлять частями системы. Для хранения внешних пользователей безопаснее использовать отдельную схему.

Возвращает:
* stappler::db::Scheme const*

# ::stappler::db::internals::getFileFromContext(int64_t)

## BRIEF

Возвращает полученный в запросе файл по его идентификатору

## CONTENT

Возвращает полученный в запросе файл по его идентификатору

Параметры:
* int64_t

Возвращает:
* stappler::db::InputFile*

# ::stappler::db::internals::getRequestData()

## BRIEF

Возвращает данные текущего запроса

## CONTENT

Возвращает данные текущего запроса

Возвращает:
* stappler::db::internals::RequestData

# ::stappler::db::internals::getUserIdFromContext()

## BRIEF

Получает идентификатор активного пользователя

## CONTENT

Получает идентификатор активного пользователя

Возвращает:
* int64_t

# ::stappler::db::messages::isDebugEnabled()

## BRIEF

Проверяет, включен ли отладочный режим в текущем контексте

## CONTENT

Проверяет, включен ли отладочный режим в текущем контексте

Возвращает:
* bool

# ::stappler::db::messages::setDebugEnabled(bool)

## BRIEF

Включает или выключает отладочный резим для текущего контекста

## CONTENT

Включает или выключает отладочный резим для текущего контекста. Отладоный режим выводи и сохраняет в БД отладочные сообщения. Режим позволяет отслеживать ошибки в логике работы БД без отладки самого приложения.

Параметры:
* bool


# ::stappler::db::messages::_addErrorMessage(stappler::mem_pool::Value&&)

## BRIEF

Отправляет сообщение об ошибке текущему пользователю и записывает его в БД

## CONTENT

Отправляет сообщение об ошибке текущему пользователю и записывает его в БД. Работает для уже сформированных сообщений, для простого уведомления используется `_addError`.

Параметры:
* stappler::mem_pool::Value&&


# ::stappler::db::messages::_addDebugMessage(stappler::mem_pool::Value&&)

## BRIEF

Отправляет отладочное сообщение текущему пользователю и записывает его в БД

## CONTENT

Отправляет отладочное сообщение текущему пользователю и записывает его в БД. Работает для уже сформированных сообщений, для простого уведомления используется `_addDebug`.

Параметры:
* stappler::mem_pool::Value&&


# ::stappler::db::messages::broadcast(stappler::mem_pool::Value const&)

## BRIEF

Отправляет широковещательное сообщение для всей системы. Возможно, только если сервер БД поддерживает серверные уведомления.

## CONTENT

Отправляет широковещательное сообщение для всей системы. Возможно, только если сервер БД поддерживает серверные уведомления.

Параметры:
* stappler::mem_pool::Value const&


# ::stappler::db::messages::broadcast(stappler::mem_pool::Bytes const&)

## BRIEF

Отправляет широковещательное сообщение для всей системы. Возможно, только если сервер БД поддерживает серверные уведомления.

## CONTENT

Отправляет широковещательное сообщение для всей системы. Возможно, только если сервер БД поддерживает серверные уведомления.

Параметры:
* stappler::mem_pool::Bytes const&


# ::stappler::db::messages::_addError<typename,typename>(Source&&,Text&&)

## BRIEF

Отправляет сообщение об ошибке текущему пользователю и записывает его в БД

## CONTENT

Отправляет сообщение об ошибке текущему пользователю и записывает его в БД

Параметры шаблона:
* typename Source
* typename Text

Параметры:
* Source&& - идентификатор источника ошибки
* Text&& - текст ошибки


# ::stappler::db::messages::_addError<typename,typename>(Source&&,Text&&,stappler::mem_pool::Value&&)

## BRIEF

Отправляет сообщение об ошибке текущему пользователю и записывает его в БД

## CONTENT

Отправляет сообщение об ошибке текущему пользователю и записывает его в БД

Параметры шаблона:
* typename Source
* typename Text

Параметры:
* Source&& - идентификатор источника ошибки
* Text&& - текст ошибки
* stappler::mem_pool::Value&& - дополнительные данные ошибки


# ::stappler::db::messages::_addDebug<typename,typename>(Source&&,Text&&)

## BRIEF

Отправляет отладочное сообщение текущему пользователю и записывает его в БД

## CONTENT

Отправляет отладочное сообщение текущему пользователю и записывает его в БД

Параметры шаблона:
* typename Source
* typename Text

Параметры:
* Source&& - идентификатор источника сообщения
* Text&& - текст сообщения


# ::stappler::db::messages::_addDebug<typename,typename>(Source&&,Text&&,stappler::mem_pool::Value&&)

## BRIEF

Отправляет отладочное сообщение текущему пользователю и записывает его в БД

## CONTENT

Отправляет отладочное сообщение текущему пользователю и записывает его в БД

Параметры шаблона:
* typename Source
* typename Text

Параметры:
* Source&& - идентификатор источника сообщения
* Text&& - текст сообщения
* stappler::mem_pool::Value&& - дополнительные данные


# ::stappler::db::messages::_addLocal<typename,typename>(Source&&,Text&&)

## BRIEF

Отправляет сообщение для локального сеанса приложения (через `broadcast`)

## CONTENT

Отправляет сообщение для локального сеанса приложения (через `broadcast`)

Параметры шаблона:
* typename Source
* typename Text

Параметры:
* Source&& - идентификатор источника сообщения
* Text&& - текст сообщения


# ::stappler::db::messages::_addLocal<typename,typename>(Source&&,Text&&,stappler::mem_pool::Value&&)

## BRIEF

Отправляет сообщение для локального сеанса приложения (через `broadcast`)

## CONTENT

Отправляет сообщение для локального сеанса приложения (через `broadcast`)

Параметры шаблона:
* typename Source
* typename Text

Параметры:
* Source&& - идентификатор источника сообщения
* Text&& - текст сообщения
* stappler::mem_pool::Value&& - дополнительные данные


# ::stappler::db::messages::error<typename>(Args &&...)

## BRIEF

Отправляет сообщение об ошибке текущему пользователю и записывает его в БД

## CONTENT

Отправляет сообщение об ошибке текущему пользователю и записывает его в БД

Параметры шаблона:
* typename Args

Параметры:
* Args &&... - набор аргументов, отправляемых в одну из версий `_addError`.


# ::stappler::db::messages::debug<typename>(Args &&...)

## BRIEF

Отправляет отладочное сообщение текущему пользователю и записывает его в БД

## CONTENT

Отправляет отладочное сообщение текущему пользователю и записывает его в БД

Параметры шаблона:
* typename Args

Параметры:
* Args &&... - набор аргументов, отправляемых в одну из версий `_addDebug`.


# ::stappler::db::messages::local<typename>(Args &&...)

## BRIEF

Отправляет сообщение для локального сеанса приложения (через `broadcast`)

## CONTENT

Отправляет сообщение для локального сеанса приложения (через `broadcast`)

Параметры шаблона:
* typename Args

Параметры:
* Args &&... - набор аргументов, отправляемых в одну из версий `_addLocal`.


# ::stappler::db::StorageRoot

## BRIEF

Шаблон для реализации базовой системы взаимодействия приложения с БД

## CONTENT

Шаблон для реализации базовой системы взаимодействия приложения с БД. Реальная система должна унаследоваться от этого шаблона и реализовать требуемые функции (см. `XLStorageServer.h` в Xenolith). Этот класс становится основным для работы БД в потоке приложения.


# ::stappler::db::StorageRoot::~StorageRoot()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор

# ::stappler::db::StorageRoot::isDebugEnabled() const

## BRIEF

Проверяет, включен ли отладочный режим в контексте

## CONTENT

Доступ: public

Проверяет, включен ли отладочный режим в контексте

Возвращает:
* bool

# ::stappler::db::StorageRoot::setDebugEnabled(bool)

## BRIEF

Включает отладочный резим для контекста

## CONTENT

Доступ: public

Включает отладочный резим для контекста. По умолчанию, отладочный резим включается для всей структуры и проходящих через неё запросов.

Параметры:
* bool


# ::stappler::db::StorageRoot::addErrorMessage(stappler::mem_pool::Value&&) const

## BRIEF

Отправляет пользователю и записывает в БД сообщение об ошибке

## CONTENT

Доступ: public

Отправляет пользователю и записывает в БД сообщение об ошибке

Параметры:
* stappler::mem_pool::Value&&


# ::stappler::db::StorageRoot::addDebugMessage(stappler::mem_pool::Value&&) const

## BRIEF

Отправляет пользователю и записывает в БД отладочное сообщение

## CONTENT

Доступ: public

Отправляет пользователю и записывает в БД отладочное сообщение

Параметры:
* stappler::mem_pool::Value&&


# ::stappler::db::StorageRoot::broadcast(stappler::mem_pool::Value const&)

## BRIEF

Отправляет широковещательное сообщение

## CONTENT

Доступ: public

Отправляет широковещательное сообщение

Параметры:
* stappler::mem_pool::Value const&


# ::stappler::db::StorageRoot::broadcast(stappler::mem_pool::Bytes const&)

## BRIEF

Отправляет широковещательное сообщение

## CONTENT

Доступ: public

Отправляет широковещательное сообщение

Параметры:
* stappler::mem_pool::Bytes const&


# ::stappler::db::StorageRoot::acquireTransaction(stappler::db::Adapter const&)

## BRIEF

Возвразает активную транзакцию для адаптера БД

## CONTENT

Доступ: public

Возвразает активную транзакцию для адаптера БД, если есть

Параметры:
* stappler::db::Adapter const&

Возвращает:
* stappler::db::Transaction

# ::stappler::db::StorageRoot::getAdapterFromContext()

## BRIEF

Возвращает адаптер БД для текущего контекста

## CONTENT

Доступ: public

Возвращает адаптер БД для текущего контекста

Возвращает:
* stappler::db::Adapter

# ::stappler::db::StorageRoot::scheduleAyncDbTask(Callback<Function<void (const stappler::db::Transaction &)> (stappler::mempool::base::pool_t *)> const&)

## BRIEF

Функция для подготовки асинхронного вызова

## CONTENT

Доступ: public

Функция для подготовки асинхронного вызова. Асинхронная задача может выполняться в другом потоке либо в одном потоке во время его простоя. Вызывает переданную функцию обратного вызова в контексте пула памяти, который будет использоваться для асинхронного вызова. Пользователь должен вернуть функцию, реализующую сам асиннхронный вызов.

Параметры:
* Callback<Function<void (const stappler::db::Transaction &)> (stappler::mempool::base::pool_t *)> const&


# ::stappler::db::StorageRoot::isAdministrative() const

## BRIEF

Проверяет, что текущий контекст является административным

## CONTENT

Доступ: public

Проверяет, что текущий контекст является административным. В административном контексте отключены проверки прав доступа.

Возвращает:
* bool

# ::stappler::db::StorageRoot::getDocuemntRoot() const

## BRIEF

Возвращает путь для хранения файлов системы

## CONTENT

Доступ: public

Возвращает путь для хранения файлов системы

Возвращает:
* stappler::mem_pool::String

# ::stappler::db::StorageRoot::getFileScheme() const

## BRIEF

Возвращает схему данных для внешних файлов

## CONTENT

Доступ: public

Возвращает схему данных для внешних файлов

Возвращает:
* stappler::db::Scheme const*

# ::stappler::db::StorageRoot::getUserScheme() const

## BRIEF

Возвращает схему данных для пользователей

## CONTENT

Доступ: public

Возвращает схему данных для пользователей

Возвращает:
* stappler::db::Scheme const*

# ::stappler::db::StorageRoot::getFileFromContext(int64_t) const

## BRIEF

Получает внешний файл по его идентификатору из контекста

## CONTENT

Доступ: public

Получает внешний файл по его идентификатору из контекста

Параметры:
* int64_t

Возвращает:
* stappler::db::InputFile*

# ::stappler::db::StorageRoot::getRequestData() const

## BRIEF

Получает данные текущего запроса

## CONTENT

Доступ: public

Получает данные текущего запроса

Возвращает:
* internals::RequestData

# ::stappler::db::StorageRoot::getUserIdFromContext() const

## BRIEF

Получает идентификатор текущего пользователя

## CONTENT

Доступ: public

Получает идентификатор текущего пользователя

Возвращает:
* int64_t

# ::stappler::db::StorageRoot::onLocalBroadcast(stappler::mem_pool::Value const&)

## BRIEF

Вызывается при получении локального широковещательного сообщения

## CONTENT

Доступ: protected

Вызывается при получении локального широковещательного сообщения

Параметры:
* stappler::mem_pool::Value const&


# ::stappler::db::StorageRoot::onStorageTransaction(stappler::db::Transaction&)

## BRIEF

Вызывается при инициализации новой транзакции БД

## CONTENT

Доступ: protected

Вызывается при инициализации новой транзакции БД

Параметры:
* stappler::db::Transaction&


# ::stappler::db::StorageRoot::_debugMutex

## BRIEF

Мутекс для отладочных сообщений

## CONTENT

Доступ: protected

Мутекс для отладочных сообщений

Тип: std::mutex


# ::stappler::db::StorageRoot::_debug

## BRIEF

Флаг отладочного режима

## CONTENT

Доступ: protected

Флаг отладочного режима

Тип: std::atomic<bool>


# ::stappler::db::InputConfig

## BRIEF

Конфигурация для защиты от переполнения при запросах к данным

## CONTENT

Конфигурация для защиты от переполнения при запросах к данным. Позволяет определить, какой обьем и каких данных ожидает схема данных от входящего запроса, и на этом основании фильтровать запросы.

# ::stappler::db::InputConfig::Require

## BRIEF

Требуемые данные в запросе

## CONTENT

Требуемые данные в запросе

Значения:
* None
* Data - структурированные данные схемы
* Files - входящие файлы
* Body - тело запроса
* FilesAsData - входящие файлы как структурированные данные схемы


# ::stappler::db::InputConfig::InputConfig()

## BRIEF

Конструктор по умолчанию

## CONTENT

Конструктор по умолчанию

# ::stappler::db::InputConfig::InputConfig(stappler::db::InputConfig const&)

## BRIEF

Конструктор копирования

## CONTENT

Конструктор копирования

Параметры:
* stappler::db::InputConfig const&


# ::stappler::db::InputConfig::operator=(stappler::db::InputConfig const&)

## BRIEF

Оператор копирования

## CONTENT

Оператор копирования

Параметры:
* stappler::db::InputConfig const&

Возвращает:
* stappler::db::InputConfig&

# ::stappler::db::InputConfig::InputConfig(stappler::db::InputConfig&&)

## BRIEF

Конструктор перемещения

## CONTENT

Конструктор перемещения

Параметры:
* stappler::db::InputConfig&&


# ::stappler::db::InputConfig::operator=(stappler::db::InputConfig&&)

## BRIEF

Оператор перемещения

## CONTENT

Оператор перемещения

Параметры:
* stappler::db::InputConfig&&

Возвращает:
* stappler::db::InputConfig&

# ::stappler::db::InputConfig::updateLimits(Map<stappler::mem_pool::String, stappler::db::Field> const&)

## BRIEF

Обновляет лимиты по данным из спииска полей схемы

## CONTENT

Обновляет лимиты по данным из спииска полей схемы

Параметры:
* Map<stappler::mem_pool::String, stappler::db::Field> const&


# ::stappler::db::InputConfig::required

## BRIEF

Требуемые ресурсы от запроса

## CONTENT

Требуемые ресурсы от запроса

Тип: stappler::db::InputConfig::Require


# ::stappler::db::InputConfig::maxRequestSize

## BRIEF

Максимально доспутимая длина запроса

## CONTENT

Максимально доспутимая длина запроса

Тип: size_t


# ::stappler::db::InputConfig::maxVarSize

## BRIEF

Максимальная длина переменной в структурированных данных

## CONTENT

Максимальная длина переменной в структурированных данных

Тип: size_t


# ::stappler::db::InputConfig::maxFileSize

## BRIEF

Максимальный размер файла в запросе

## CONTENT

Максимальный размер файла в запросе

Тип: size_t


# ::stappler::db::InputConfig::updateTime

## BRIEF

Частота обновления прогресса по времени

## CONTENT

Частота обновления прогресса по времени

Тип: stappler::TimeInterval


# ::stappler::db::InputConfig::updateFrequency

## BRIEF

Частота обновления по доле от размера запроса

## CONTENT

Частота обновления по доле от размера запроса

Тип: float


# ::stappler::db::operator|(InputConfig::Require const&,InputConfig::Require const&)

## BRIEF

Автоматически созданный оператор битового флага

## CONTENT

Автоматически созданный оператор битового флага

Параметры:
* InputConfig::Require const&
* InputConfig::Require const&

Возвращает:
* InputConfig::Require

# ::stappler::db::operator&(InputConfig::Require const&,InputConfig::Require const&)

## BRIEF

Автоматически созданный оператор битового флага

## CONTENT

Автоматически созданный оператор битового флага

Параметры:
* InputConfig::Require const&
* InputConfig::Require const&

Возвращает:
* InputConfig::Require

# ::stappler::db::operator^(InputConfig::Require const&,InputConfig::Require const&)

## BRIEF

Автоматически созданный оператор битового флага

## CONTENT

Автоматически созданный оператор битового флага

Параметры:
* InputConfig::Require const&
* InputConfig::Require const&

Возвращает:
* InputConfig::Require

# ::stappler::db::operator|=(InputConfig::Require&,InputConfig::Require const&)

## BRIEF

Автоматически созданный оператор битового флага

## CONTENT

Автоматически созданный оператор битового флага

Параметры:
* InputConfig::Require&
* InputConfig::Require const&

Возвращает:
* InputConfig::Require&

# ::stappler::db::operator&=(InputConfig::Require&,InputConfig::Require const&)

## BRIEF

Автоматически созданный оператор битового флага

## CONTENT

Автоматически созданный оператор битового флага

Параметры:
* InputConfig::Require&
* InputConfig::Require const&

Возвращает:
* InputConfig::Require&

# ::stappler::db::operator^=(InputConfig::Require&,InputConfig::Require const&)

## BRIEF

Автоматически созданный оператор битового флага

## CONTENT

Автоматически созданный оператор битового флага

Параметры:
* InputConfig::Require&
* InputConfig::Require const&

Возвращает:
* InputConfig::Require&

# ::stappler::db::operator==(InputConfig::Require const&,std::underlying_type<InputConfig::Require>::type const&)

## BRIEF

Автоматически созданный оператор битового флага

## CONTENT

Автоматически созданный оператор битового флага

Параметры:
* InputConfig::Require const&
* std::underlying_type<InputConfig::Require>::type const&

Возвращает:
* bool

# ::stappler::db::operator==(std::underlying_type<InputConfig::Require>::type const&,InputConfig::Require const&)

## BRIEF

Автоматически созданный оператор битового флага

## CONTENT

Автоматически созданный оператор битового флага

Параметры:
* std::underlying_type<InputConfig::Require>::type const&
* InputConfig::Require const&

Возвращает:
* bool

# ::stappler::db::operator!=(InputConfig::Require const&,std::underlying_type<InputConfig::Require>::type const&)

## BRIEF

Автоматически созданный оператор битового флага

## CONTENT

Автоматически созданный оператор битового флага

Параметры:
* InputConfig::Require const&
* std::underlying_type<InputConfig::Require>::type const&

Возвращает:
* bool

# ::stappler::db::operator!=(std::underlying_type<InputConfig::Require>::type const&,InputConfig::Require const&)

## BRIEF

Автоматически созданный оператор битового флага

## CONTENT

Автоматически созданный оператор битового флага

Параметры:
* std::underlying_type<InputConfig::Require>::type const&
* InputConfig::Require const&

Возвращает:
* bool

# ::stappler::db::operator~(InputConfig::Require const&)

## BRIEF

Автоматически созданный оператор битового флага

## CONTENT

Автоматически созданный оператор битового флага

Параметры:
* InputConfig::Require const&

Возвращает:
* InputConfig::Require