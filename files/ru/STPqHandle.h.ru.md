Title: STPqHandle.h


# STAPPLER_DB_PQ_STPGHANDLE_H_

## BRIEF

Заголовок типа соединения для PostgreSQL

## CONTENT

Заголовок типа соединения для PostgreSQL


# ::stappler::db::pq::TransactionLevel

## BRIEF

Перечисление уровней транзации PostgreSQL

## CONTENT

Перечисление уровней транзации PostgreSQL

Значения:
* ReadCommited
* RepeatableRead
* Serialized


# ::stappler::db::pq::Handle

## BRIEF

Тип для соединения PostgreSQL

## CONTENT

Тип для соединения PostgreSQL. Основан на стандартном соединении SQL.

Базовые классы:
* db::sql::SqlHandle


# ::stappler::db::pq::Handle::Handle(stappler::db::pq::Driver const*,Driver::Handle)

## BRIEF

Создаёт соединение из драйвера и непрозрачного манипулятора

## CONTENT

Доступ: public

Создаёт соединение из драйвера и непрозрачного манипулятора

Параметры:
* stappler::db::pq::Driver const*
* Driver::Handle


# ::stappler::db::pq::Handle::Handle(stappler::db::pq::Handle const&)

## BRIEF

Запрет копирования

## CONTENT

Доступ: public

Запрет копирования

Параметры:
* stappler::db::pq::Handle const&


# ::stappler::db::pq::Handle::operator=(stappler::db::pq::Handle const&)

## BRIEF

Запрет копирования

## CONTENT

Доступ: public

Запрет копирования

Параметры:
* stappler::db::pq::Handle const&

Возвращает:
* stappler::db::pq::Handle&

# ::stappler::db::pq::Handle::Handle(stappler::db::pq::Handle&&)

## BRIEF

Конструктор перемещения

## CONTENT

Доступ: public

Конструктор перемещения

Параметры:
* stappler::db::pq::Handle&&


# ::stappler::db::pq::Handle::operator=(stappler::db::pq::Handle&&)

## BRIEF

Оператор перемещения

## CONTENT

Доступ: public

Оператор перемещения

Параметры:
* stappler::db::pq::Handle&&

Возвращает:
* stappler::db::pq::Handle&

# ::stappler::db::pq::Handle::operator bool() const

## BRIEF

Проверяет соединение на активность

## CONTENT

Доступ: public

Проверяет соединение на активность

Возвращает:
* bool

# ::stappler::db::pq::Handle::getDriver() const

## BRIEF

Возвращает драйвер

## CONTENT

Доступ: public

Возвращает драйвер

Возвращает:
* stappler::db::pq::Driver const*

# ::stappler::db::pq::Handle::getHandle() const

## BRIEF

Возвращает непрозрачный манипулятор

## CONTENT

Доступ: public

Возвращает непрозрачный манипулятор

Возвращает:
* Driver::Handle

# ::stappler::db::pq::Handle::getConnection() const

## BRIEF

Возвращает манипулятор соединения

## CONTENT

Доступ: public

Возвращает манипулятор соединения

Возвращает:
* Driver::Connection

# ::stappler::db::pq::Handle::isNotificationsSupported() const

## BRIEF

Проверяет, поддерживаются ли серверные уведомления БД

## CONTENT

Доступ: public

Проверяет, поддерживаются ли серверные уведомления БД

Возвращает:
* bool

# ::stappler::db::pq::Handle::makeQuery(Callback<void (sql::SqlQuery &)> const&)

## BRIEF

Создаёт запрос

## CONTENT

Доступ: public

Создаёт запрос

Параметры:
* Callback<void (sql::SqlQuery &)> const& - функция будет вызвана с новым запросом для выполнения


# ::stappler::db::pq::Handle::selectQuery(db::sql::SqlQuery const&,Callback<bool (stappler::db::Result &)> const&,Callback<void (const stappler::mem_pool::Value &)> const&)

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

# ::stappler::db::pq::Handle::performSimpleQuery(stappler::StringView const&,Callback<void (const stappler::mem_pool::Value &)> const&)

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


# ::stappler::db::pq::Handle::performSimpleSelect(stappler::StringView const&,Callback<void (stappler::db::Result &)> const&,Callback<void (const stappler::mem_pool::Value &)> const&)

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

# ::stappler::db::pq::Handle::isSuccess() const

## BRIEF

Проверяет, выполнен ли последний запрос успешно

## CONTENT

Доступ: public

Проверяет, выполнен ли последний запрос успешно

Возвращает:
* bool

# ::stappler::db::pq::Handle::close()

## BRIEF

Закрывает соединение

## CONTENT

Доступ: public

Закрывает соединение


# ::stappler::db::pq::Handle::init(BackendInterface::Config const&,Map<stappler::StringView, const stappler::db::sql::SqlHandle::Scheme *> const&)

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

# ::stappler::db::pq::Handle::beginTransaction()

## BRIEF

Начинает транзакцию

## CONTENT

Доступ: protected

Начинает транзакцию

Возвращает:
* bool - true если успешно

# ::stappler::db::pq::Handle::endTransaction()

## BRIEF

Завершает транзакцию

## CONTENT

Доступ: protected

Завершает транзакцию

Возвращает:
* bool - true если успешно

# ::stappler::db::pq::Handle::beginTransaction_pg(stappler::db::pq::TransactionLevel)

## BRIEF

Начинает транзакцию определённого уровня

## CONTENT

Доступ: protected

Начинает транзакцию определённого уровня

Параметры:
* stappler::db::pq::TransactionLevel

Возвращает:
* bool

# ::stappler::db::pq::Handle::cancelTransaction_pg()

## BRIEF

Завершает транзакцию БД аварийно, откатывает изменения

## CONTENT

Доступ: protected

Завершает транзакцию БД аварийно, откатывает изменения


# ::stappler::db::pq::Handle::endTransaction_pg()

## BRIEF

Успешно завершает транзакцию

## CONTENT

Доступ: protected

Успешно завершает транзакцию

Возвращает:
* bool

# ::stappler::db::pq::Handle::ViewIdVec

## BRIEF

Тип для ассоциации отображений БД с объектами

## CONTENT

Доступ: protected

Тип для ассоциации отображений БД с объектами


# ::stappler::db::pq::Handle::driver

## BRIEF

Драйвер БД

## CONTENT

Доступ: protected

Драйвер БД

Тип: stappler::db::pq::Driver const*


# ::stappler::db::pq::Handle::handle

## BRIEF

Общее соединение с БД

## CONTENT

Доступ: protected

Общее соединение с БД

Тип: Driver::Handle


# ::stappler::db::pq::Handle::conn

## BRIEF

Текущее соединение с БД

## CONTENT

Доступ: protected

Текущее соединение с БД

Тип: Driver::Connection


# ::stappler::db::pq::Handle::lastError

## BRIEF

Последний статус ошибки запроса

## CONTENT

Доступ: protected

Последний статус ошибки запроса

Тип: Driver::Status


# ::stappler::db::pq::Handle::lastErrorInfo

## BRIEF

Последняя информация об ошибке

## CONTENT

Доступ: protected

Последняя информация об ошибке

Тип: stappler::mem_pool::Value


# ::stappler::db::pq::Handle::level

## BRIEF

Текущий уровень транзакции

## CONTENT

Доступ: protected

Текущий уровень транзакции

Тип: stappler::db::pq::TransactionLevel


# ::stappler::db::pq::PgQueryInterface

## BRIEF

Интерфейс для связи данных с запросом PostgreSQL

## CONTENT

Интерфейс для связи данных с запросом PostgreSQL

Базовые классы:
* db::QueryInterface


# ::stappler::db::pq::PgQueryInterface::Binder

## BRIEF

Основной тип интерфейса связывания данных

## CONTENT

Доступ: public

Основной тип интерфейса связывания данных


# ::stappler::db::pq::PgQueryInterface::push(stappler::mem_pool::String&&)

## BRIEF

Добавляет строковый параметр

## CONTENT

Доступ: public

Добавляет строковый параметр, возвращает порядковый номер параметра

Параметры:
* stappler::mem_pool::String&&

Возвращает:
* size_t

# ::stappler::db::pq::PgQueryInterface::push(stappler::StringView const&)

## BRIEF

Добавляет строковый параметр

## CONTENT

Доступ: public

Добавляет строковый параметр, возвращает порядковый номер параметра

Параметры:
* stappler::StringView const&

Возвращает:
* size_t

# ::stappler::db::pq::PgQueryInterface::push(stappler::mem_pool::Bytes&&)

## BRIEF

Добавляет байтовый параметр

## CONTENT

Доступ: public

Добавляет байтовый параметр, возвращает порядковый номер параметра

Параметры:
* stappler::mem_pool::Bytes&&

Возвращает:
* size_t

# ::stappler::db::pq::PgQueryInterface::push(stappler::mem_pool::StringStream&,stappler::mem_pool::Value const&,bool,bool)

## BRIEF

Добавляет нетипизированный параметр

## CONTENT

Доступ: public

Добавляет нетипизированный параметр. Если необходимо, связывает параметр и возвращает его порядковый номер.Численные типы и NULL не требуют связывания, если не передан принудительный флаг.

Параметры:
* stappler::mem_pool::StringStream& - поток для записи запроса
* stappler::mem_pool::Value const& - связваемое значение
* bool - флаг принудительного связывания с параметром
* bool - флаг сжатия. Если передан - связываемое значение сжимается

Возвращает:
* size_t

# ::stappler::db::pq::PgQueryInterface::bindInt(db::Binder&,stappler::mem_pool::StringStream&,int64_t)

## BRIEF

Привязывает целочисленное значение к запросу

## CONTENT

Доступ: public

Привязывает целочисленное значение к запросу

Параметры:
* db::Binder&
* stappler::mem_pool::StringStream&
* int64_t


# ::stappler::db::pq::PgQueryInterface::bindUInt(db::Binder&,stappler::mem_pool::StringStream&,uint64_t)

## BRIEF

Привязывает целочисленное значение к запросу

## CONTENT

Доступ: public

Привязывает целочисленное значение к запросу

Параметры:
* db::Binder&
* stappler::mem_pool::StringStream&
* uint64_t


# ::stappler::db::pq::PgQueryInterface::bindDouble(db::Binder&,stappler::mem_pool::StringStream&,double)

## BRIEF

Привязывает значение с плавающей точкой к запросу

## CONTENT

Доступ: public

Привязывает значение с плавающей точкой к запросу

Параметры:
* db::Binder&
* stappler::mem_pool::StringStream&
* double


# ::stappler::db::pq::PgQueryInterface::bindString(db::Binder&,stappler::mem_pool::StringStream&,stappler::mem_pool::String const&)

## BRIEF

Привязывает строку к запросу

## CONTENT

Доступ: public

Привязывает строку к запросу

Параметры:
* db::Binder&
* stappler::mem_pool::StringStream&
* stappler::mem_pool::String const&


# ::stappler::db::pq::PgQueryInterface::bindMoveString(db::Binder&,stappler::mem_pool::StringStream&,stappler::mem_pool::String&&)

## BRIEF

Привязывает строку к запросу

## CONTENT

Доступ: public

Привязывает строку к запросу

Параметры:
* db::Binder&
* stappler::mem_pool::StringStream&
* stappler::mem_pool::String&&


# ::stappler::db::pq::PgQueryInterface::bindStringView(db::Binder&,stappler::mem_pool::StringStream&,stappler::StringView const&)

## BRIEF

Привязывает строку к запросу

## CONTENT

Доступ: public

Привязывает строку к запросу

Параметры:
* db::Binder&
* stappler::mem_pool::StringStream&
* stappler::StringView const&


# ::stappler::db::pq::PgQueryInterface::bindBytes(db::Binder&,stappler::mem_pool::StringStream&,stappler::mem_pool::Bytes const&)

## BRIEF

Привязывает байты к запросу

## CONTENT

Доступ: public

Привязывает байты к запросу

Параметры:
* db::Binder&
* stappler::mem_pool::StringStream&
* stappler::mem_pool::Bytes const&


# ::stappler::db::pq::PgQueryInterface::bindMoveBytes(db::Binder&,stappler::mem_pool::StringStream&,stappler::mem_pool::Bytes&&)

## BRIEF

Привязывает байты к запросу

## CONTENT

Доступ: public

Привязывает байты к запросу

Параметры:
* db::Binder&
* stappler::mem_pool::StringStream&
* stappler::mem_pool::Bytes&&


# ::stappler::db::pq::PgQueryInterface::bindCoderSource(db::Binder&,stappler::mem_pool::StringStream&,stappler::CoderSource const&)

## BRIEF

Привязывает байты к запросу

## CONTENT

Доступ: public

Привязывает байты к запросу

Параметры:
* db::Binder&
* stappler::mem_pool::StringStream&
* stappler::CoderSource const&


# ::stappler::db::pq::PgQueryInterface::bindValue(db::Binder&,stappler::mem_pool::StringStream&,stappler::mem_pool::Value const&)

## BRIEF

Привязывает нетипизированные данные к запросу

## CONTENT

Доступ: public

Привязывает нетипизированные данные к запросу

Параметры:
* db::Binder&
* stappler::mem_pool::StringStream&
* stappler::mem_pool::Value const&


# ::stappler::db::pq::PgQueryInterface::bindDataField(db::Binder&,stappler::mem_pool::StringStream&,db::Binder::DataField const&)

## BRIEF

Привязывает поле данных к запросу

## CONTENT

Доступ: public

Привязывает поле данных к запросу

Параметры:
* db::Binder&
* stappler::mem_pool::StringStream&
* db::Binder::DataField const&


# ::stappler::db::pq::PgQueryInterface::bindTypeString(db::Binder&,stappler::mem_pool::StringStream&,db::Binder::TypeString const&)

## BRIEF

Привязывает типизированную строку к запросу

## CONTENT

Доступ: public

Привязывает типизированную строку к запросу

Параметры:
* db::Binder&
* stappler::mem_pool::StringStream&
* db::Binder::TypeString const&


# ::stappler::db::pq::PgQueryInterface::bindFullText(db::Binder&,stappler::mem_pool::StringStream&,db::Binder::FullTextField const&)

## BRIEF

Привязывает полнотекстовое поле к запросу

## CONTENT

Доступ: public

Привязывает полнотекстовое поле к запросу

Параметры:
* db::Binder&
* stappler::mem_pool::StringStream&
* db::Binder::FullTextField const&


# ::stappler::db::pq::PgQueryInterface::bindFullTextRank(db::Binder&,stappler::mem_pool::StringStream&,db::Binder::FullTextRank const&)

## BRIEF

Привязывает полнотекстовый запрос к запросу

## CONTENT

Доступ: public

Привязывает полнотекстовый запрос к запросу

Параметры:
* db::Binder&
* stappler::mem_pool::StringStream&
* db::Binder::FullTextRank const&


# ::stappler::db::pq::PgQueryInterface::bindFullTextData(db::Binder&,stappler::mem_pool::StringStream&,db::FullTextData const&)

## BRIEF

Привязывает полнотекстовые данные для записи к запросу

## CONTENT

Доступ: public

Привязывает полнотекстовые данные для записи к запросу

Параметры:
* db::Binder&
* stappler::mem_pool::StringStream&
* db::FullTextData const&


# ::stappler::db::pq::PgQueryInterface::bindIntVector(stappler::db::pq::PgQueryInterface::Binder&,stappler::mem_pool::StringStream&,Vector<int64_t> const&)

## BRIEF

Привязывает целочисленный вектор к запросу

## CONTENT

Доступ: public

Привязывает целочисленный вектор к запросу

Параметры:
* stappler::db::pq::PgQueryInterface::Binder&
* stappler::mem_pool::StringStream&
* Vector<int64_t> const&


# ::stappler::db::pq::PgQueryInterface::bindDoubleVector(stappler::db::pq::PgQueryInterface::Binder&,stappler::mem_pool::StringStream&,Vector<double> const&)

## BRIEF

Привязывает вектор из чисел с плавающей точкой к запросу

## CONTENT

Доступ: public

Привязывает вектор из чисел с плавающей точкой к запросу

Параметры:
* stappler::db::pq::PgQueryInterface::Binder&
* stappler::mem_pool::StringStream&
* Vector<double> const&


# ::stappler::db::pq::PgQueryInterface::bindStringVector(stappler::db::pq::PgQueryInterface::Binder&,stappler::mem_pool::StringStream&,Vector<stappler::StringView> const&)

## BRIEF

Привязывает вектор из строк к запросу

## CONTENT

Доступ: public

Привязывает вектор из строк к запросу

Параметры:
* stappler::db::pq::PgQueryInterface::Binder&
* stappler::mem_pool::StringStream&
* Vector<stappler::StringView> const&


# ::stappler::db::pq::PgQueryInterface::clear()

## BRIEF

Очищает привязанные данные

## CONTENT

Доступ: public

Очищает привязанные данные


# ::stappler::db::pq::PgQueryInterface::params

## BRIEF

Данные привязанных параметров

## CONTENT

Доступ: public

Данные привязанных параметров

Тип: Vector<stappler::mem_pool::Bytes>


# ::stappler::db::pq::PgQueryInterface::binary

## BRIEF

Флаги бинарного формата связнных данных

## CONTENT

Доступ: public

Флаги бинарного формата связнных данных

Тип: Vector<bool>
