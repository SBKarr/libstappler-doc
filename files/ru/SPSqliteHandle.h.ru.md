Title: STSqliteHandle.h


# STAPPLER_DB_SQLITE_SPSQLITEHANDLE_H_

## BRIEF

Заголовок для соединения с БД SQLite

## CONTENT

Заголовок для соединения с БД SQLite


# ::stappler::db::sqlite::TransactionLevel

## BRIEF

Тип уровня транзакции

## CONTENT

Тип уровня транзакции

Значения:
* Deferred
* Immediate
* Exclusive


# ::stappler::db::sqlite::Handle

## BRIEF

Тип соединения с БД SQLite

## CONTENT

Тип соединения с БД SQLite

Базовые классы:
* db::sql::SqlHandle


# ::stappler::db::sqlite::Handle::Handle(stappler::db::sqlite::Driver const*,Driver::Handle)

## BRIEF

Инициализирует соединение

## CONTENT

Доступ: public

Инициализирует соединение

Параметры:
* stappler::db::sqlite::Driver const*
* Driver::Handle


# ::stappler::db::sqlite::Handle::Handle(stappler::db::sqlite::Handle const&)

## BRIEF

Запрет копирования

## CONTENT

Доступ: public

Запрет копирования

Параметры:
* stappler::db::sqlite::Handle const&


# ::stappler::db::sqlite::Handle::operator=(stappler::db::sqlite::Handle const&)

## BRIEF

Запрет копирования

## CONTENT

Доступ: public

Запрет копирования

Параметры:
* stappler::db::sqlite::Handle const&

Возвращает:
* stappler::db::sqlite::Handle&

# ::stappler::db::sqlite::Handle::Handle(stappler::db::sqlite::Handle&&)

## BRIEF

Конструктор перемещения

## CONTENT

Доступ: public

Конструктор перемещения

Параметры:
* stappler::db::sqlite::Handle&&


# ::stappler::db::sqlite::Handle::operator=(stappler::db::sqlite::Handle&&)

## BRIEF

Оператор перемещения

## CONTENT

Доступ: public

Оператор перемещения

Параметры:
* stappler::db::sqlite::Handle&&

Возвращает:
* stappler::db::sqlite::Handle&

# ::stappler::db::sqlite::Handle::operator bool() const

## BRIEF

Проверяет соединение на активность

## CONTENT

Доступ: public

Проверяет соединение на активность

Возвращает:
* bool

# ::stappler::db::sqlite::Handle::getDriver() const

## BRIEF

Возвращает драйвер

## CONTENT

Доступ: public

Возвращает драйвер

Возвращает:
* stappler::db::sqlite::Driver const*

# ::stappler::db::sqlite::Handle::getHandle() const

## BRIEF

Возвращает непрозрачный манипулятор

## CONTENT

Доступ: public

Возвращает непрозрачный манипулятор

Возвращает:
* Driver::Handle

# ::stappler::db::sqlite::Handle::getConnection() const

## BRIEF

Возвращает манипулятор соединения

## CONTENT

Доступ: public

Возвращает манипулятор соединения

Возвращает:
* Driver::Connection

# ::stappler::db::sqlite::Handle::makeQuery(Callback<void (sql::SqlQuery &)> const&,sql::QueryStorageHandle const*)

## BRIEF

Создаёт запрос

## CONTENT

Доступ: public

Создаёт запрос

Параметры:
* Callback<void (sql::SqlQuery &)> const& - функция будет вызвана с новым запросом для выполнения
* sql::QueryStorageHandle const*

# ::stappler::db::sqlite::Handle::selectQuery(db::sql::SqlQuery const&,Callback<bool (sql::Result &)> const&,Callback<void (const stappler::mem_pool::Value &)> const&)

## BRIEF

Выполняет запрос SELECT и получает результат

## CONTENT

Доступ: public

Выполняет запрос SELECT и получает результат

Параметры:
* db::sql::SqlQuery const& - запрос
* Callback<bool (stappler::db::Result &)> const& - функция для получения результата
* Callback<void (const stappler::mem_pool::Value &)> const& - опциональная функция для получения ошибок

Возвращает:
* bool - true если запрос выполнен успешно

# ::stappler::db::sqlite::Handle::performSimpleQuery(stappler::StringView const&,Callback<void (const stappler::mem_pool::Value &)> const&)

## BRIEF

Выполняет простой текстовый запрос

## CONTENT

Доступ: public

Выполняет простой текстовый запрос

Параметры:
* stappler::StringView const& - SQL-запрос
* Callback<void (const stappler::mem_pool::Value &)> const& - опциональная функция для получения ошибок

Возвращает:
* bool - true если запрос выполнен успешно

# ::stappler::db::sqlite::Handle::performSimpleSelect(stappler::StringView const&,Callback<void (sql::Result &)> const&,Callback<void (const stappler::mem_pool::Value &)> const&)

## BRIEF

Выполняет простой текстовый SELECT-запрос

## CONTENT

Доступ: public

Выполняет простой текстовый SELECT-запрос

Параметры:
* stappler::StringView const& - SQL-запрос
* Callback<bool (stappler::db::Result &)> const& - функция для получения результата
* Callback<void (const stappler::mem_pool::Value &)> const& - опциональная функция для получения ошибок

Возвращает:
* bool - true если запрос выполнен успешно


# ::stappler::db::sqlite::Handle::isSuccess() const

## BRIEF

Проверяет, выполнен ли последний запрос успешно

## CONTENT

Доступ: public

Проверяет, выполнен ли последний запрос успешно

Возвращает:
* bool

# ::stappler::db::sqlite::Handle::close()

## BRIEF

Закрывает соединение

## CONTENT

Доступ: public

Закрывает соединение

# ::stappler::db::sqlite::Handle::init(BackendInterface::Config const&,Map<stappler::StringView, const stappler::db::sql::SqlHandle::Scheme *> const&)

## BRIEF

Инициализирует новую сессию приложения для работы с БД

## CONTENT

Доступ: public

Инициализирует новую сессию приложения для работы с БД. Создаёт и обновляет требуемые схемы данных.

Параметры:
* BackendInterface::Config const& - конфигурация соединения
* Map<stappler::StringView, const stappler::db::sql::SqlHandle::Scheme *> const& - список схем данных для работы

Возвращает:
* bool - true если инициализация успешна

# ::stappler::db::sqlite::Handle::beginTransaction()

## BRIEF

Начинает транзакцию

## CONTENT

Доступ: protected

Начинает транзакцию

Возвращает:
* bool - true если успешно

# ::stappler::db::sqlite::Handle::endTransaction()

## BRIEF

Завершает транзакцию

## CONTENT

Доступ: protected

Завершает транзакцию

Возвращает:
* bool - true если успешно

# ::stappler::db::sqlite::Handle::ViewIdVec

## BRIEF

Тип для ассоциации отображений БД с объектами

## CONTENT

Доступ: protected

Тип для ассоциации отображений БД с объектами

# ::stappler::db::sqlite::Handle::driver

## BRIEF

Драйвер БД

## CONTENT

Доступ: protected

Драйвер БД

Тип: stappler::db::sqlite::Driver const*


# ::stappler::db::sqlite::Handle::handle

## BRIEF

Общее соединение с БД

## CONTENT

Доступ: protected

Общее соединение с БД

Тип: Driver::Handle


# ::stappler::db::sqlite::Handle::conn

## BRIEF

Текущее соединение с БД

## CONTENT

Доступ: protected

Текущее соединение с БД

Тип: Driver::Connection


# ::stappler::db::sqlite::Handle::lastError

## BRIEF

Последний статус ошибки запроса

## CONTENT

Доступ: protected

Последний статус ошибки запроса

Тип: int


# ::stappler::db::sqlite::Handle::level

## BRIEF

Текущий уровень транзакции

## CONTENT

Доступ: protected

Текущий уровень транзакции

Тип: stappler::db::sqlite::TransactionLevel


# ::stappler::db::sqlite::Handle::_profile

## BRIEF

Используемое подмножество SQL

## CONTENT

Доступ: protected

Используемое подмножество SQL

Тип: stappler::sql::Profile

# ::stappler::db::sqlite::SqliteQueryInterface

## BRIEF

Интерфейс записи запроса

## CONTENT

Интерфейс записи запроса

Базовые классы:
* db::QueryInterface

# ::stappler::db::sqlite::SqliteQueryInterface::Binder

## BRIEF

Интерфейс связывания параметров запроса

## CONTENT

Доступ: public

Интерфейс связывания параметров запроса

# ::stappler::db::sqlite::SqliteQueryInterface::BindingData

## BRIEF

Тип связанных данных

## CONTENT

Доступ: public

Тип связанных данных

# ::stappler::db::sqlite::SqliteQueryInterface::BindingData::idx

## BRIEF

Индекс поля

## CONTENT

Индекс поля

Тип: uint32_t

# ::stappler::db::sqlite::SqliteQueryInterface::BindingData::data

## BRIEF

Данные запроса

## CONTENT

Данные запроса

Тип: stappler::mem_pool::Bytes

# ::stappler::db::sqlite::SqliteQueryInterface::BindingData::type

## BRIEF

Тип данных

## CONTENT

Тип данных

Тип: stappler::db::Type

# ::stappler::db::sqlite::SqliteQueryInterface::SqliteQueryInterface(sql::Driver const*,sql::QueryStorageHandle const*,Driver::Handle)

## BRIEF

Создаёт интерфейс записи запроса

## CONTENT

Доступ: public

Создаёт интерфейс записи запроса

Параметры:
* sql::Driver const*
* sql::QueryStorageHandle const*
* Driver::Handle

# ::stappler::db::sqlite::SqliteQueryInterface::push(stappler::mem_pool::String&&)

## BRIEF

Записывает строку данных в запрос

## CONTENT

Доступ: public

Записывает строку данных в запрос

Параметры:
* stappler::mem_pool::String&&

Возвращает:
* size_t - индекс строки в хранилище

# ::stappler::db::sqlite::SqliteQueryInterface::push(stappler::StringView const&)

## BRIEF

Записывает строку данных в запрос

## CONTENT

Доступ: public

Записывает строку данных в запрос

Параметры:
* stappler::StringView const&

Возвращает:
* size_t - индекс строки в хранилище

# ::stappler::db::sqlite::SqliteQueryInterface::push(stappler::mem_pool::Bytes&&)

## BRIEF

Записывает байтовую строку в запрос

## CONTENT

Доступ: public

Записывает байтовую строку в запрос

Параметры:
* stappler::mem_pool::Bytes&&

Возвращает:
* size_t - индекс строки в хранилище

# ::stappler::db::sqlite::SqliteQueryInterface::push(stappler::mem_pool::StringStream&,stappler::mem_pool::Value const&,bool,bool)

## BRIEF

Записывает данные в запрос

## CONTENT

Доступ: public

Записывает данные в запрос

Параметры:
* stappler::mem_pool::StringStream&
* stappler::mem_pool::Value const&
* bool
* bool

Возвращает:
* size_t

# ::stappler::db::sqlite::SqliteQueryInterface::bindInt(db::Binder&,stappler::mem_pool::StringStream&,int64_t)

## BRIEF

Записывает данные в запрос

## CONTENT

Доступ: public

Записывает данные в запрос

Параметры:
* db::Binder&
* stappler::mem_pool::StringStream&
* int64_t

# ::stappler::db::sqlite::SqliteQueryInterface::bindUInt(db::Binder&,stappler::mem_pool::StringStream&,uint64_t)

## BRIEF

Записывает данные в запрос

## CONTENT

Доступ: public

Записывает данные в запрос

Параметры:
* db::Binder&
* stappler::mem_pool::StringStream&
* uint64_t

# ::stappler::db::sqlite::SqliteQueryInterface::bindDouble(db::Binder&,stappler::mem_pool::StringStream&,double)

## BRIEF

Записывает данные в запрос

## CONTENT

Доступ: public

Записывает данные в запрос

Параметры:
* db::Binder&
* stappler::mem_pool::StringStream&
* double

# ::stappler::db::sqlite::SqliteQueryInterface::bindString(db::Binder&,stappler::mem_pool::StringStream&,stappler::mem_pool::String const&)

## BRIEF

Записывает данные в запрос

## CONTENT

Доступ: public

Записывает данные в запрос

Параметры:
* db::Binder&
* stappler::mem_pool::StringStream&
* stappler::mem_pool::String const&

# ::stappler::db::sqlite::SqliteQueryInterface::bindMoveString(db::Binder&,stappler::mem_pool::StringStream&,stappler::mem_pool::String&&)

## BRIEF

Записывает данные в запрос

## CONTENT

Доступ: public

Записывает данные в запрос

Параметры:
* db::Binder&
* stappler::mem_pool::StringStream&
* stappler::mem_pool::String&&

# ::stappler::db::sqlite::SqliteQueryInterface::bindStringView(db::Binder&,stappler::mem_pool::StringStream&,stappler::StringView const&)

## BRIEF

Записывает данные в запрос

## CONTENT

Доступ: public

Записывает данные в запрос

Параметры:
* db::Binder&
* stappler::mem_pool::StringStream&
* stappler::StringView const&

# ::stappler::db::sqlite::SqliteQueryInterface::bindBytes(db::Binder&,stappler::mem_pool::StringStream&,stappler::mem_pool::Bytes const&)

## BRIEF

Записывает данные в запрос

## CONTENT

Доступ: public

Записывает данные в запрос

Параметры:
* db::Binder&
* stappler::mem_pool::StringStream&
* stappler::mem_pool::Bytes const&

# ::stappler::db::sqlite::SqliteQueryInterface::bindMoveBytes(db::Binder&,stappler::mem_pool::StringStream&,stappler::mem_pool::Bytes&&)

## BRIEF

Записывает данные в запрос

## CONTENT

Доступ: public

Записывает данные в запрос

Параметры:
* db::Binder&
* stappler::mem_pool::StringStream&
* stappler::mem_pool::Bytes&&

# ::stappler::db::sqlite::SqliteQueryInterface::bindCoderSource(db::Binder&,stappler::mem_pool::StringStream&,stappler::CoderSource const&)

## BRIEF

Записывает данные в запрос

## CONTENT

Доступ: public

Записывает данные в запрос

Параметры:
* db::Binder&
* stappler::mem_pool::StringStream&
* stappler::CoderSource const&

# ::stappler::db::sqlite::SqliteQueryInterface::bindValue(db::Binder&,stappler::mem_pool::StringStream&,stappler::mem_pool::Value const&)

## BRIEF

Записывает данные в запрос

## CONTENT

Доступ: public

Записывает данные в запрос

Параметры:
* db::Binder&
* stappler::mem_pool::StringStream&
* stappler::mem_pool::Value const&

# ::stappler::db::sqlite::SqliteQueryInterface::bindDataField(db::Binder&,stappler::mem_pool::StringStream&,db::Binder::DataField const&)

## BRIEF

Записывает данные в запрос

## CONTENT

Доступ: public

Записывает данные в запрос

Параметры:
* db::Binder&
* stappler::mem_pool::StringStream&
* db::Binder::DataField const&

# ::stappler::db::sqlite::SqliteQueryInterface::bindTypeString(db::Binder&,stappler::mem_pool::StringStream&,db::Binder::TypeString const&)

## BRIEF

Записывает данные в запрос

## CONTENT

Доступ: public

Записывает данные в запрос

Параметры:
* db::Binder&
* stappler::mem_pool::StringStream&
* db::Binder::TypeString const&

# ::stappler::db::sqlite::SqliteQueryInterface::bindFullText(db::Binder&,stappler::mem_pool::StringStream&,db::Binder::FullTextField const&)

## BRIEF

Записывает данные в запрос

## CONTENT

Доступ: public

Записывает данные в запрос

Параметры:
* db::Binder&
* stappler::mem_pool::StringStream&
* db::Binder::FullTextField const&

# ::stappler::db::sqlite::SqliteQueryInterface::bindFullTextFrom(db::Binder&,stappler::mem_pool::StringStream&,db::Binder::FullTextFrom const&)

## BRIEF

Записывает данные в запрос

## CONTENT

Доступ: public

Записывает данные в запрос

Параметры:
* db::Binder&
* stappler::mem_pool::StringStream&
* db::Binder::FullTextFrom const&

# ::stappler::db::sqlite::SqliteQueryInterface::bindFullTextRank(db::Binder&,stappler::mem_pool::StringStream&,db::Binder::FullTextRank const&)

## BRIEF

Записывает данные в запрос

## CONTENT

Доступ: public

Записывает данные в запрос

Параметры:
* db::Binder&
* stappler::mem_pool::StringStream&
* db::Binder::FullTextRank const&

# ::stappler::db::sqlite::SqliteQueryInterface::bindFullTextQuery(db::Binder&,stappler::mem_pool::StringStream&,db::Binder::FullTextQueryRef const&)

## BRIEF

Записывает данные в запрос

## CONTENT

Доступ: public

Записывает данные в запрос

Параметры:
* db::Binder&
* stappler::mem_pool::StringStream&
* db::Binder::FullTextQueryRef const&

# ::stappler::db::sqlite::SqliteQueryInterface::bindIntVector(stappler::db::sqlite::SqliteQueryInterface::Binder&,stappler::mem_pool::StringStream&,Vector<int64_t> const&)

## BRIEF

Записывает данные в запрос

## CONTENT

Доступ: public

Записывает данные в запрос

Параметры:
* stappler::db::sqlite::SqliteQueryInterface::Binder&
* stappler::mem_pool::StringStream&
* Vector<int64_t> const&

# ::stappler::db::sqlite::SqliteQueryInterface::bindDoubleVector(stappler::db::sqlite::SqliteQueryInterface::Binder&,stappler::mem_pool::StringStream&,Vector<double> const&)

## BRIEF

Записывает данные в запрос

## CONTENT

Доступ: public

Записывает данные в запрос

Параметры:
* stappler::db::sqlite::SqliteQueryInterface::Binder&
* stappler::mem_pool::StringStream&
* Vector<double> const&

# ::stappler::db::sqlite::SqliteQueryInterface::bindStringVector(stappler::db::sqlite::SqliteQueryInterface::Binder&,stappler::mem_pool::StringStream&,Vector<stappler::StringView> const&)

## BRIEF

Записывает данные в запрос

## CONTENT

Доступ: public

Записывает данные в запрос

Параметры:
* stappler::db::sqlite::SqliteQueryInterface::Binder&
* stappler::mem_pool::StringStream&
* Vector<stappler::StringView> const&

# ::stappler::db::sqlite::SqliteQueryInterface::clear()

## BRIEF

Очищает запрос

## CONTENT

Доступ: public

Очищает запрос

# ::stappler::db::sqlite::SqliteQueryInterface::driver

## BRIEF

Драйвер запроса

## CONTENT

Доступ: public

Драйвер запроса

Тип: sql::Driver const*

# ::stappler::db::sqlite::SqliteQueryInterface::storage

## BRIEF

Хранилище пользовательских данных запроса

## CONTENT

Доступ: public

Хранилище пользовательских данных запроса

Тип: sql::QueryStorageHandle const*

# ::stappler::db::sqlite::SqliteQueryInterface::handle

## BRIEF

Активное соединение с БД

## CONTENT

Доступ: public

Активное соединение с БД

Тип: Driver::Handle

# ::stappler::db::sqlite::SqliteQueryInterface::params

## BRIEF

Связанные данные

## CONTENT

Доступ: public

Связанные данные

Тип: Vector<stappler::db::sqlite::SqliteQueryInterface::BindingData>
