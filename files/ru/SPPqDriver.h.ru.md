Title: STPqDriver.h


# STAPPLER_DB_PQ_SPDBPQDRIVER_H_

## BRIEF

Заголовок драйвера PostgreSQL для адаптера БД

## CONTENT

Заголовок драйвера PostgreSQL для адаптера БД


# ::stappler::db::pq::Driver

## BRIEF

Структура драйвера

## CONTENT

Структура драйвера. Основан на стандартном драйвере SQL.

Базовые классы:
* sql::Driver


# ::stappler::db::pq::Driver::Status

## BRIEF

Статус выполнения операции PostgreSQL

## CONTENT

Доступ: public

Статус выполнения операции PostgreSQL

Значения:
* Empty
* CommandOk
* TuplesOk
* CopyOut
* CopyIn
* BadResponse
* NonfatalError
* FatalError
* CopyBoth
* SingleTuple


# ::stappler::db::pq::Driver::TransactionStatus

## BRIEF

Статус транзакции PostgreSQL

## CONTENT

Доступ: public

Статус транзакции PostgreSQL

Значения:
* Idle
* Active
* InTrans
* InError
* Unknown

# ::stappler::db::pq::Driver::open(stappler::mempool::base::pool_t*,stappler::db::ApplicationInterface*,stappler::StringView,void const*)

## BRIEF

Открывает соединение с драйвером

## CONTENT

Доступ: public

Открывает соединение с драйвером

Параметры:
* stappler::mempool::base::pool_t* - базовый пул памяти
* stappler::db::ApplicationInterface* - интерфейс приложения
* stappler::StringView - путь к библиотеке libpq или пустой для автоматического поиска
* void const* - непрозрачный указатель внешнего контекста (для загрузки драйвера из APR)

Возвращает:
* stappler::db::pq::Driver* - указатель на драйвер. ассоциированный с текущим пулом памяти, или nullptr

# ::stappler::db::pq::Driver::~Driver()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор


# ::stappler::db::pq::Driver::init(stappler::db::sql::Driver::Handle,Vector<stappler::StringView> const&)

## BRIEF

Инициализирует манипулятор БД с помощью драйвера

## CONTENT

Доступ: public

Инициализирует манипулятор БД с помощью драйвера. Соединяется с сервером и загружает данные об определённых на сервере типах.

Параметры:
* stappler::db::sql::Driver::Handle
* Vector<stappler::StringView> const& - список БД, требуемых к существованию. Если возможно, драйер их создаст

Возвращает:
* bool - true при успешной инициализации.

# ::stappler::db::pq::Driver::performWithStorage(stappler::db::sql::Driver::Handle,Callback<void (const db::Adapter &)> const&) const

## BRIEF

Запускает соединение с БД и позволяет выполнять в нём операции с помощью адаптера

## CONTENT

Доступ: public

Запускает соединение с БД и позволяет выполнять в нём операции с помощью адаптера

Параметры:
* stappler::db::sql::Driver::Handle - соединение с БД
* Callback<void (const db::Adapter &)> const& - функция, которая будет вызвана при доступности адаптера


# ::stappler::db::pq::Driver::acquireInterface(stappler::db::sql::Driver::Handle,stappler::mempool::base::pool_t*) const

## BRIEF

Создаёт интерфейс БД, ассоциированный с пулом памяти

## CONTENT

Доступ: public

Создаёт интерфейс БД, ассоциированный с пулом памяти. Интерфейс будет уничтожен вместе с пулом памяти.

Параметры:
* stappler::db::sql::Driver::Handle - соединение с БД
* stappler::mempool::base::pool_t*

Возвращает:
* stappler::db::BackendInterface*

# ::stappler::db::pq::Driver::connect(Map<stappler::StringView, stappler::StringView> const&) const

## BRIEF

Соединяется с БД на основе параметров

## CONTENT

Доступ: public

Соединяется с БД на основе параметров. Параметры определяются для функции `PQconnectdbParams`

Параметры:
* Map<stappler::StringView, stappler::StringView> const& - параметры для соединения

Возвращает:
* stappler::db::sql::Driver::Handle

# ::stappler::db::pq::Driver::finish(stappler::db::sql::Driver::Handle) const

## BRIEF

Закрывает соединение с БД

## CONTENT

Доступ: public

Закрывает соединение с БД

Параметры:
* stappler::db::sql::Driver::Handle


# ::stappler::db::pq::Driver::getConnection(stappler::db::sql::Driver::Handle) const

## BRIEF

Возвращает объект соединения из общего манипулятора

## CONTENT

Доступ: public

Возвращает объект соединения из общего манипулятора

Параметры:
* stappler::db::sql::Driver::Handle

Возвращает:
* stappler::db::sql::Driver::Connection

# ::stappler::db::pq::Driver::isValid(stappler::db::sql::Driver::Handle) const

## BRIEF

Проверяет соединение на активность

## CONTENT

Доступ: public

Проверяет соединение на активность

Параметры:
* stappler::db::sql::Driver::Handle

Возвращает:
* bool

# ::stappler::db::pq::Driver::isValid(stappler::db::sql::Driver::Connection) const

## BRIEF

Проверяет соединение на активность

## CONTENT

Доступ: public

Проверяет соединение на активность

Параметры:
* stappler::db::sql::Driver::Connection

Возвращает:
* bool

# ::stappler::db::pq::Driver::isIdle(stappler::db::sql::Driver::Connection) const

## BRIEF

Проверяет, что в соединении нет открытой транзакции

## CONTENT

Доступ: public

Проверяет, что в соединении нет открытой транзакции

Параметры:
* stappler::db::sql::Driver::Connection

Возвращает:
* bool

# ::stappler::db::pq::Driver::listenForNotifications(stappler::db::sql::Driver::Handle) const

## BRIEF

Запускает механизм серверных уведомлений для соединения

## CONTENT

Доступ: public

Запускает механизм серверных уведомлений для соединения

Параметры:
* stappler::db::sql::Driver::Handle

Возвращает:
* int - файловый дескриптор для получения уведомлений

# ::stappler::db::pq::Driver::consumeNotifications(stappler::db::sql::Driver::Handle,Callback<void (stappler::StringView)> const&) const

## BRIEF

Читает уведомления из ранее подписанного соединения

## CONTENT

Доступ: public

Читает уведомления из ранее подписанного соединения

Параметры:
* stappler::db::sql::Driver::Handle
* Callback<void (stappler::StringView)> const& - функция, вызываемая для активного уведомления

Возвращает:
* bool - true если уведомления получены

# ::stappler::db::pq::Driver::isNotificationsSupported() const

## BRIEF

Проверяет статус поддержки серверных ведомлений

## CONTENT

Доступ: public

Проверяет статус поддержки серверных ведомлений

Возвращает:
* bool

# ::stappler::db::pq::Driver::getTransactionStatus(stappler::db::sql::Driver::Connection) const

## BRIEF

Возвращает статус транзакции для соединения

## CONTENT

Доступ: public

Возвращает статус транзакции для соединения

Параметры:
* stappler::db::sql::Driver::Connection

Возвращает:
* stappler::db::pq::Driver::TransactionStatus

# ::stappler::db::pq::Driver::getStatus(stappler::db::sql::Driver::Result) const

## BRIEF

Получает статус выполнения запроса

## CONTENT

Доступ: public

Получает статус выполнения запроса

Параметры:
* stappler::db::sql::Driver::Result

Возвращает:
* stappler::db::pq::Driver::Status

# ::stappler::db::pq::Driver::isBinaryFormat(stappler::db::sql::Driver::Result,size_t) const

## BRIEF

Проверяет, испольуется ли бинарный формат для поля

## CONTENT

Доступ: public

Проверяет, испольуется ли бинарный формат для поля

Параметры:
* stappler::db::sql::Driver::Result
* size_t - индекс поля

Возвращает:
* bool - true если используется бинарный формат


# ::stappler::db::pq::Driver::isNull(stappler::db::sql::Driver::Result,size_t,size_t) const

## BRIEF

Проверяет, содержится ли NULL в результате

## CONTENT

Доступ: public

Проверяет, содержится ли NULL в результате

Параметры:
* stappler::db::sql::Driver::Result
* size_t - индекс строки
* size_t - индекс поля

Возвращает:
* bool

# ::stappler::db::pq::Driver::getValue(stappler::db::sql::Driver::Result,size_t,size_t) const

## BRIEF

Читает текстовое значение из поля

## CONTENT

Доступ: public

Читает текстовое значение из поля

Параметры:
* stappler::db::sql::Driver::Result
* size_t - индекс строки
* size_t - индекс поля

Возвращает:
* char*

# ::stappler::db::pq::Driver::getLength(stappler::db::sql::Driver::Result,size_t,size_t) const

## BRIEF

Читает длину значения поля

## CONTENT

Доступ: public

Читает длину значения поля

Параметры:
* stappler::db::sql::Driver::Result
* size_t - индекс строки
* size_t - индекс поля

Возвращает:
* size_t

# ::stappler::db::pq::Driver::getName(stappler::db::sql::Driver::Result,size_t) const

## BRIEF

Получает имя поля

## CONTENT

Доступ: public

Получает имя поля

Параметры:
* stappler::db::sql::Driver::Result
* size_t - индекс поля

Возвращает:
* char*

# ::stappler::db::pq::Driver::getType(stappler::db::sql::Driver::Result,size_t) const

## BRIEF

Получает идентификатор типа поля

## CONTENT

Доступ: public

Получает идентификатор типа поля

Параметры:
* stappler::db::sql::Driver::Result
* size_t - индекс поля

Возвращает:
* unsigned int

# ::stappler::db::pq::Driver::getNTuples(stappler::db::sql::Driver::Result) const

## BRIEF

Получает число строк результата

## CONTENT

Доступ: public

Получает число строк результата

Параметры:
* stappler::db::sql::Driver::Result

Возвращает:
* size_t

# ::stappler::db::pq::Driver::getNFields(stappler::db::sql::Driver::Result) const

## BRIEF

Получает число полей в результате

## CONTENT

Доступ: public

Получает число полей в результате

Параметры:
* stappler::db::sql::Driver::Result

Возвращает:
* size_t

# ::stappler::db::pq::Driver::getCmdTuples(stappler::db::sql::Driver::Result) const

## BRIEF

Получает число изменённых строк для команды

## CONTENT

Доступ: public

Получает число изменённых строк для команды

Параметры:
* stappler::db::sql::Driver::Result

Возвращает:
* size_t

# ::stappler::db::pq::Driver::getStatusMessage(stappler::db::pq::Driver::Status) const

## BRIEF

Получает текстовое описание статуса

## CONTENT

Доступ: public

Получает текстовое описание статуса

Параметры:
* stappler::db::pq::Driver::Status

Возвращает:
* char*

# ::stappler::db::pq::Driver::getResultErrorMessage(stappler::db::sql::Driver::Result) const

## BRIEF

Получает текст ошибки запроса

## CONTENT

Доступ: public

Получает текст ошибки запроса

Параметры:
* stappler::db::sql::Driver::Result

Возвращает:
* char*

# ::stappler::db::pq::Driver::clearResult(stappler::db::sql::Driver::Result) const

## BRIEF

Очищает результат запроса

## CONTENT

Доступ: public

Очищает результат запроса

Параметры:
* stappler::db::sql::Driver::Result


# ::stappler::db::pq::Driver::exec(stappler::db::sql::Driver::Connection,char const*) const

## BRIEF

Выполняет простой SQL-запрос из строки

## CONTENT

Доступ: public

Выполняет простой SQL-запрос из строки

Параметры:
* stappler::db::sql::Driver::Connection
* char const*

Возвращает:
* stappler::db::sql::Driver::Result

# ::stappler::db::pq::Driver::exec(stappler::db::sql::Driver::Connection,char const*,int,char const* const*,int const*,int const*,int) const

## BRIEF

Выполняет SQL-запрос со связанными параметрами

## CONTENT

Доступ: public

Выполняет SQL-запрос со связанными параметрами

Параметры:
* stappler::db::sql::Driver::Connection
* char const* - SQL-запрос
* int - число параметров
* char const* const* - значения параметров
* int const* - длины параметров
* int const* - типы кодирвоания параметров
* int - формат результата (текстовый/бинарный)

Возвращает:
* stappler::db::sql::Driver::Result

# ::stappler::db::pq::Driver::operator bool() const

## BRIEF

Проверяет драйвер на работоспособность

## CONTENT

Доступ: public

Проверяет драйвер на работоспособность

Возвращает:
* bool

# ::stappler::db::pq::Driver::getTypeById(uint32_t) const

## BRIEF

Возвращает тип значения по идентификатору

## CONTENT

Доступ: public

Возвращает тип значения по идентификатору

Параметры:
* uint32_t

Возвращает:
* BackendInterface::StorageType

# ::stappler::db::pq::Driver::getTypeNameById(uint32_t) const

## BRIEF

Возвращает имя типа по идентификатору

## CONTENT

Доступ: public

Возвращает имя типа по идентификатору

Параметры:
* uint32_t

Возвращает:
* stappler::StringView

# ::stappler::db::pq::Driver::Driver(stappler::mempool::base::pool_t*,stappler::db::ApplicationInterface*,stappler::StringView,void const*)

## BRIEF

Создаёт драйвер по параметрам

## CONTENT

Доступ: protected

Создаёт драйвер по параметрам

Параметры:
* stappler::mempool::base::pool_t* - базовый пул памяти
* stappler::db::ApplicationInterface* - интерфейс приложения
* stappler::StringView
* void const*


# ::stappler::db::pq::Driver::doConnect(char const* const*,char const* const*,int) const

## BRIEF

Выполняет запрос на соединение

## CONTENT

Доступ: protected

Выполняет запрос на соединение

Параметры:
* char const* const* - список имён параметров
* char const* const* - список значений параметров
* int - число параметров

Возвращает:
* stappler::db::sql::Driver::Handle

# ::stappler::db::pq::Driver::_init

## BRIEF

Флаг инициализации драйвера

## CONTENT

Доступ: protected

Флаг инициализации драйвера

Тип: bool


# ::stappler::db::pq::Driver::_storageTypes

## BRIEF

Карта для трансляции идентификаторов в типы

## CONTENT

Доступ: protected

Карта для трансляции идентификаторов в типы

Тип: Vector<Pair<uint32_t, BackendInterface::StorageType>>


# ::stappler::db::pq::Driver::_customTypes

## BRIEF

Нераспознанные типы в БД

## CONTENT

Доступ: protected

Нераспознанные типы в БД

Тип: Vector<Pair<uint32_t, stappler::mem_pool::String>>


# ::stappler::db::pq::Driver::_handle

## BRIEF

Манипулятор библиотеки для драйвера

## CONTENT

Доступ: protected

Манипулятор библиотеки для драйвера

Тип: stappler::db::pq::DriverSym*


# ::stappler::db::pq::Driver::_external

## BRIEF

Внешний манипулятор библиотеки для драйвера

## CONTENT

Доступ: protected

Внешний манипулятор библиотеки для драйвера

Тип: void const*


# ::stappler::db::pq::ResultCursor

## BRIEF

Курсор для результата запроса

## CONTENT

Курсор для результата запроса

Базовые классы:
* db::ResultCursor


# ::stappler::db::pq::ResultCursor::pgsql_is_success(Driver::Status)

## BRIEF

Проверяет статус запроса на успешность запроса

## CONTENT

Доступ: public

Проверяет статус запроса на успешность запроса

Параметры:
* Driver::Status

Возвращает:
* bool

# ::stappler::db::pq::ResultCursor::ResultCursor(stappler::db::pq::Driver const*,Driver::Result)

## BRIEF

Создаёт новый курсор

## CONTENT

Доступ: public

Создаёт новый курсор

Параметры:
* stappler::db::pq::Driver const*
* Driver::Result - результат запроса


# ::stappler::db::pq::ResultCursor::~ResultCursor()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор


# ::stappler::db::pq::ResultCursor::isBinaryFormat(size_t) const

## BRIEF

Проверяет, что поле использует бинарный формат

## CONTENT

Доступ: public

Проверяет, что поле использует бинарный формат

Параметры:
* size_t - индекс поля

Возвращает:
* bool

# ::stappler::db::pq::ResultCursor::isNull(size_t) const

## BRIEF

Проверяет, что в поле в текущей строке записан NULL

## CONTENT

Доступ: public

Проверяет, что в поле в текущей строке записан NULL

Параметры:
* size_t - индекс поля

Возвращает:
* bool

# ::stappler::db::pq::ResultCursor::toString(size_t) const

## BRIEF

Возвращает значение поля в текущей строке как текстовую строку

## CONTENT

Доступ: public

Возвращает значение поля в текущей строке как текстовую строку

Параметры:
* size_t - индекс поля

Возвращает:
* stappler::StringView

# ::stappler::db::pq::ResultCursor::toBytes(size_t) const

## BRIEF

Возвращает значение поля в текущей строке как байтовую строку

## CONTENT

Доступ: public

Возвращает значение поля в текущей строке как байтовую строку

Параметры:
* size_t - индекс поля

Возвращает:
* stappler::BytesView

# ::stappler::db::pq::ResultCursor::toInteger(size_t) const

## BRIEF

Возвращает значение поля в текущей строке как целое число

## CONTENT

Доступ: public

Возвращает значение поля в текущей строке как целое число

Параметры:
* size_t - индекс поля

Возвращает:
* int64_t

# ::stappler::db::pq::ResultCursor::toDouble(size_t) const

## BRIEF

Возвращает значение поля в текущей строке как число с плавающей точкой

## CONTENT

Доступ: public

Возвращает значение поля в текущей строке как число с плавающей точкой

Параметры:
* size_t - индекс поля

Возвращает:
* double

# ::stappler::db::pq::ResultCursor::toBool(size_t) const

## BRIEF

Возвращает значение поля в текущей строке как булево

## CONTENT

Доступ: public

Возвращает значение поля в текущей строке как булево

Параметры:
* size_t - индекс поля

Возвращает:
* bool

# ::stappler::db::pq::ResultCursor::toTypedData(size_t) const

## BRIEF

Возвращает значение поля в текущей строке как данные со слабой типизацией

## CONTENT

Доступ: public

Возвращает значение поля в текущей строке как данные со слабой типизацией. Декодирует на основе типа поля.

Параметры:
* size_t - индекс поля

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::pq::ResultCursor::toId() const

## BRIEF

Конвертирует текущую строку в единичный идентификатор, если возможно

## CONTENT

Доступ: public

Конвертирует текущую строку в единичный идентификатор, если возможно

Возвращает:
* int64_t

# ::stappler::db::pq::ResultCursor::getFieldName(size_t) const

## BRIEF

Возвращает имя поля

## CONTENT

Доступ: public

Возвращает имя поля

Параметры:
* size_t - индекс поля

Возвращает:
* stappler::StringView

# ::stappler::db::pq::ResultCursor::getInfo() const

## BRIEF

Возвращает отладочную информацию о запросе

## CONTENT

Доступ: public

Возвращает отладочную информацию о запросе

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::pq::ResultCursor::clear()

## BRIEF

Очищает курсор

## CONTENT

Доступ: public

Очищает курсор


# ::stappler::db::pq::ResultCursor::getError() const

## BRIEF

Возвращает статус ошибки

## CONTENT

Доступ: public

Возвращает статус ошибки

Возвращает:
* Driver::Status

# ::stappler::db::pq::ResultCursor::isSuccess() const

## BRIEF

Проверяет запрос на успешность

## CONTENT

Доступ: public

Проверяет запрос на успешность

Возвращает:
* bool

# ::stappler::db::pq::ResultCursor::isEmpty() const

## BRIEF

Проверяет курсор на пустоту

## CONTENT

Доступ: public

Проверяет курсор на пустоту

Возвращает:
* bool

# ::stappler::db::pq::ResultCursor::isEnded() const

## BRIEF

Проверяет курсор на завершённость

## CONTENT

Доступ: public

Проверяет курсор на завершённость

Возвращает:
* bool

# ::stappler::db::pq::ResultCursor::getFieldsCount() const

## BRIEF

Возвращает число полей в строке

## CONTENT

Доступ: public

Возвращает число полей в строке

Возвращает:
* size_t

# ::stappler::db::pq::ResultCursor::getAffectedRows() const

## BRIEF

Возвращает число изменённых командой строк

## CONTENT

Доступ: public

Возвращает число изменённых командой строк

Возвращает:
* size_t

# ::stappler::db::pq::ResultCursor::getRowsHint() const

## BRIEF

Возвращает число строк в курсоре

## CONTENT

Доступ: public

Возвращает число строк в курсоре

Возвращает:
* size_t

# ::stappler::db::pq::ResultCursor::next()

## BRIEF

Переходит к следующей строке

## CONTENT

Доступ: public

Переходит к следующей строке

Возвращает:
* bool

# ::stappler::db::pq::ResultCursor::reset()

## BRIEF

Перезагружает курсор с начала

## CONTENT

Доступ: public

Перезагружает курсор с начала


# ::stappler::db::pq::ResultCursor::driver

## BRIEF

Драйвер для курсора

## CONTENT

Доступ: public

Драйвер для курсора

Тип: stappler::db::pq::Driver const*


# ::stappler::db::pq::ResultCursor::result

## BRIEF

Результат для курсора

## CONTENT

Доступ: public

Результат для курсора

Тип: Driver::Result


# ::stappler::db::pq::ResultCursor::nrows

## BRIEF

Число строк в результате

## CONTENT

Доступ: public

Число строк в результате

Тип: size_t


# ::stappler::db::pq::ResultCursor::currentRow

## BRIEF

Текущая строка курсора

## CONTENT

Доступ: public

Текущая строка курсора

Тип: size_t


# ::stappler::db::pq::ResultCursor::err

## BRIEF

Статус запроса

## CONTENT

Доступ: public

Статус запроса

Тип: Driver::Status

# ::stappler::db::pq::Driver::getConnectionTime(stappler::db::sql::Driver::Handle) const

## BRIEF

Возвращает общее время активного соединения с БД для драйвера

## CONTENT

Доступ: public

Возвращает общее время активного соединения с БД для драйвера

Параметры:
* stappler::db::sql::Driver::Handle

Возвращает:
* stappler::Time

# ::stappler::db::pq::ResultCursor::toCustomData(size_t,stappler::db::FieldCustom const*) const

## BRIEF

Извлекает данные пользовательского поля

## CONTENT

Доступ: public

Извлекает данные пользовательского поля

Параметры:
* size_t - индекс поля
* stappler::db::FieldCustom const* - поле для экспорта

Возвращает:
* stappler::mem_pool::Value
