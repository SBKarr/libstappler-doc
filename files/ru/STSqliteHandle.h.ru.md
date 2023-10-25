Title: STSqliteHandle.h


# STAPPLER_DB_SQLITE_STSQLITEHANDLE_H_

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

# ::stappler::db::sqlite::Handle::makeQuery(Callback<void (sql::SqlQuery &)> const&)

## BRIEF

Создаёт запрос

## CONTENT

Доступ: public

Создаёт запрос

Параметры:
* Callback<void (sql::SqlQuery &)> const& - функция будет вызвана с новым запросом для выполнения


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
