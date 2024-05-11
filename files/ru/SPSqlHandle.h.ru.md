Title: STSqlHandle.h


# STAPPLER_DB_SQL_SPSQLHANDLE_H_

## BRIEF

Заголовок управления соединением для баз данных на основе SQL

## CONTENT

Заголовок управления соединением для баз данных на основе SQL


# ::stappler::db::sql::Result

## BRIEF

Тип результата запроса

## CONTENT

Тип результата запроса


# ::stappler::db::sql::SqlHandle

## BRIEF

Тип соединения для БД на основе SQL

## CONTENT

Тип соединения для БД на основе SQL. Основа для типов соединений конкретных баз данных. Транслирует запросы от адаптера БД SDK в SQL-запросы. Конечный тип должен реализовать только функции для выполнения этих запросов.

Базовые классы:
* db::BackendInterface


# ::stappler::db::sql::SqlHandle::Scheme

## BRIEF

Тип схемы данных

## CONTENT

Доступ: public

Тип схемы данных


# ::stappler::db::sql::SqlHandle::Worker

## BRIEF

Тип исполнителя запроса

## CONTENT

Доступ: public

Тип исполнителя запроса


# ::stappler::db::sql::SqlHandle::Field

## BRIEF

Тип поля схемы данных

## CONTENT

Доступ: public

Тип поля схемы данных


# ::stappler::db::sql::SqlHandle::Operator

## BRIEF

Тип условного оператора

## CONTENT

Доступ: public

Тип условного оператора


# ::stappler::db::sql::SqlHandle::Comparation

## BRIEF

Тип оператора сравнения

## CONTENT

Доступ: public

Тип оператора сравнения


# ::stappler::db::sql::SqlHandle::QueryList

## BRIEF

Тип иерархического списка запросов

## CONTENT

Доступ: public

Тип иерархического списка запросов


# ::stappler::db::sql::SqlHandle::getKeyValueSchemeName()

## BRIEF

Имя схемы данных для хранилища ключ-значение поверх SQL

## CONTENT

Доступ: public

Имя схемы данных для хранилища ключ-значение поверх SQL

Возвращает:
* stappler::StringView

# ::stappler::db::sql::SqlHandle::getNameForDelta(stappler::db::sql::SqlHandle::Scheme const&)

## BRIEF

Возвращает имя таблицы, хранящей данные для дельта-запросов схемы

## CONTENT

Доступ: public

Возвращает имя таблицы, хранящей данные для дельта-запросов схемы

Параметры:
* stappler::db::sql::SqlHandle::Scheme const&

Возвращает:
* stappler::mem_pool::String

# ::stappler::db::sql::SqlHandle::set(stappler::CoderSource const&,stappler::mem_pool::Value const&,stappler::TimeInterval)

## BRIEF

Устанавливает значение для ключа

## CONTENT

Доступ: public

Устанавливает значение для ключа

Параметры:
* stappler::CoderSource const& - ключ
* stappler::mem_pool::Value const& - значение
* stappler::TimeInterval - время жизни значения

Возвращает:
* bool - true если успешно

# ::stappler::db::sql::SqlHandle::get(stappler::CoderSource const&)

## BRIEF

Получает значение для ключа

## CONTENT

Доступ: public

Получает значение для ключа

Параметры:
* stappler::CoderSource const&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::sql::SqlHandle::clear(stappler::CoderSource const&)

## BRIEF

Удаляет значение для ключа

## CONTENT

Доступ: public

Удаляет значение для ключа

Параметры:
* stappler::CoderSource const&

Возвращает:
* bool

# ::stappler::db::sql::SqlHandle::authorizeUser(db::Auth const&,stappler::StringView const&,stappler::StringView const&)

## BRIEF

Вытается авторизовать пользователя

## CONTENT

Доступ: public

Вытается авторизовать пользователя

Параметры:
* db::Auth const& - описание схемы авторизации
* stappler::StringView const& - пользователь
* stappler::StringView const& - ключ или пароль

Возвращает:
* db::User* - структура пользователя или nullptr

# ::stappler::db::sql::SqlHandle::isNotificationsSupported() const

## BRIEF

Проверяет, поддерживаются ли серверные уведомления

## CONTENT

Доступ: public

Проверяет, поддерживаются ли серверные уведомления

Возвращает:
* bool

# ::stappler::db::sql::SqlHandle::makeSessionsCleanup()

## BRIEF

Удаляет просроченные данные ключ-значение и сессий

## CONTENT

Доступ: public

Удаляет просроченные данные ключ-значение и сессий


# ::stappler::db::sql::SqlHandle::finalizeBroadcast()

## BRIEF

Отправляет ожидающие серверные уведомления

## CONTENT

Доступ: public

Отправляет ожидающие серверные уведомления


# ::stappler::db::sql::SqlHandle::processBroadcasts(Callback<void (stappler::BytesView)> const&,int64_t)

## BRIEF

Обрабатывает полученные серверные уведомления

## CONTENT

Доступ: public

Обрабатывает полученные серверные уведомления

Параметры:
* Callback<void (stappler::BytesView)> const&
* int64_t

Возвращает:
* int64_t

# ::stappler::db::sql::SqlHandle::broadcast(stappler::mem_pool::Bytes const&)

## BRIEF

Отправляет данные серверным уведомлением

## CONTENT

Доступ: public

Отправляет данные серверным уведомлением

Параметры:
* stappler::mem_pool::Bytes const&


# ::stappler::db::sql::SqlHandle::getDeltaValue(stappler::db::sql::SqlHandle::Scheme const&)

## BRIEF

Возвращает текущее общее значение дельты для схемы

## CONTENT

Доступ: public

Возвращает текущее общее значение дельты для схемы

Параметры:
* stappler::db::sql::SqlHandle::Scheme const&

Возвращает:
* int64_t

# ::stappler::db::sql::SqlHandle::getDeltaValue(stappler::db::sql::SqlHandle::Scheme const&,db::FieldView const&,uint64_t)

## BRIEF

Возвращает текущее значение дельты для поля отображения в схеме

## CONTENT

Доступ: public

Возвращает текущее значение дельты для поля отображения в схеме

Параметры:
* stappler::db::sql::SqlHandle::Scheme const&
* db::FieldView const& - поле отображения
* uint64_t - идентификатор объекта отображения

Возвращает:
* int64_t

# ::stappler::db::sql::SqlHandle::getHistory(stappler::db::sql::SqlHandle::Scheme const&,stappler::Time const&,bool)

## BRIEF

Возвращает историю изменений для схемы, поддерживающей дельта-запросы

## CONTENT

Доступ: public

Возвращает историю изменений для схемы, поддерживающей дельта-запросы

Параметры:
* stappler::db::sql::SqlHandle::Scheme const&
* stappler::Time const& - время, после которого показывать историю
* bool - true если необходимо преобразовать идентификаторы пользователеей в имена подзапросами

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::sql::SqlHandle::getHistory(db::FieldView const&,stappler::db::sql::SqlHandle::Scheme const*,uint64_t,stappler::Time const&,bool)

## BRIEF

Возвращает историю изменений для отображения в схеме, поддерживающего дельта-запросы

## CONTENT

Доступ: public

Возвращает историю изменений для отображения в схеме, поддерживающего дельта-запросы

Параметры:
* db::FieldView const& - поле отображения
* stappler::db::sql::SqlHandle::Scheme const* - схема данных
* uint64_t - идетификатор обьекта поля
* stappler::Time const& - время, после которого показывать историю
* bool - true если необходимо преобразовать идентификаторы пользователеей в имена подзапросами

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::sql::SqlHandle::getDeltaData(stappler::db::sql::SqlHandle::Scheme const&,stappler::Time const&)

## BRIEF

Возвращает данные об изменившихся объектах для схемы, поддерживающей дельта-запросы

## CONTENT

Доступ: public

Возвращает данные об изменившихся объектах для схемы, поддерживающей дельта-запросы

Параметры:
* stappler::db::sql::SqlHandle::Scheme const&
* stappler::Time const& - время, после которого вычислять изменения

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::sql::SqlHandle::getDeltaData(stappler::db::sql::SqlHandle::Scheme const&,db::FieldView const&,stappler::Time const&,uint64_t)

## BRIEF

Возвращает данные об изменившихся объектах для отображения в схеме, поддерживающего дельта-запросы

## CONTENT

Доступ: public

Возвращает данные об изменившихся объектах для отображения в схеме, поддерживающего дельта-запросы

Параметры:
* stappler::db::sql::SqlHandle::Scheme const&
* db::FieldView const&
* stappler::Time const& - время, после которого вычислять изменения
* uint64_t - идентификатор объекта

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::sql::SqlHandle::makeQuery(stappler::Callback<void (SqlQuery &)> const&,stappler::db::sql::QueryStorageHandle const*)

## BRIEF

Создаёт новый запрос

## CONTENT

Доступ: public

Создаёт новый запрос

Параметры:
* stappler::Callback<void (SqlQuery &)> const& - функция, вызываемая с новым запросов
* stappler::db::sql::QueryStorageHandle const*


# ::stappler::db::sql::SqlHandle::selectQuery(stappler::db::sql::SqlQuery const&,Callback<bool (stappler::db::sql::Result &)> const&,Callback<void (const stappler::mem_pool::Value &)> const&)

## BRIEF

Интерфейс для выполнения запроса

## CONTENT

Доступ: public

Интерфейс для выполнения запроса

Параметры:
* stappler::db::sql::SqlQuery const&
* Callback<bool (stappler::db::sql::Result &)> const&
* Callback<void (const stappler::mem_pool::Value &)> const&

Возвращает:
* bool

# ::stappler::db::sql::SqlHandle::performSimpleQuery(stappler::StringView const&,Callback<void (const stappler::mem_pool::Value &)> const&)

## BRIEF

Интерфейс для простого текстового запроса

## CONTENT

Доступ: public

Интерфейс для простого текстового запроса

Параметры:
* stappler::StringView const&
* Callback<void (const stappler::mem_pool::Value &)> const&

Возвращает:
* bool

# ::stappler::db::sql::SqlHandle::performSimpleSelect(stappler::StringView const&,Callback<void (stappler::db::sql::Result &)> const&,Callback<void (const stappler::mem_pool::Value &)> const&)

## BRIEF

Интерфейс для простого текстового запроса, возвращающего результат

## CONTENT

Доступ: public

Интерфейс для простого текстового запроса, возвращающего результат

Параметры:
* stappler::StringView const&
* Callback<void (stappler::db::sql::Result &)> const&
* Callback<void (const stappler::mem_pool::Value &)> const&

Возвращает:
* bool

# ::stappler::db::sql::SqlHandle::isSuccess() const

## BRIEF

Проверяет, был ли последний запрос успешен

## CONTENT

Доступ: public

Проверяет, был ли последний запрос успешен

Возвращает:
* bool

# ::stappler::db::sql::SqlHandle::foreach(stappler::db::sql::SqlHandle::Worker&,stappler::db::Query const&,Callback<bool (stappler::mem_pool::Value &)> const&)

## BRIEF

Выполняет запрос, читая результат построчно

## CONTENT

Доступ: public

Выполняет запрос, читая результат построчно

Параметры:
* stappler::db::sql::SqlHandle::Worker&
* stappler::db::Query const&
* Callback<bool (stappler::mem_pool::Value &)> const& - функция для построчного чтения

Возвращает:
* bool

# ::stappler::db::sql::SqlHandle::select(stappler::db::sql::SqlHandle::Worker&,db::Query const&)

## BRIEF

Выполняет запрос

## CONTENT

Доступ: public

Выполняет запрос, возвращает результат

Параметры:
* stappler::db::sql::SqlHandle::Worker&
* db::Query const&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::sql::SqlHandle::create(stappler::db::sql::SqlHandle::Worker&,Vector<stappler::db::InputField> const&,Vector<stappler::db::InputRow>&,bool)

## BRIEF

Создаёт новый объект

## CONTENT

Доступ: public

Создаёт новый объект

Параметры:
* stappler::db::sql::SqlHandle::Worker&
* Vector<stappler::db::InputField> const&
* Vector<stappler::db::InputRow>&
* bool

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::sql::SqlHandle::save(stappler::db::sql::SqlHandle::Worker&,uint64_t,stappler::mem_pool::Value const&,Vector<stappler::db::InputField> const&,stappler::db::InputRow&)

## BRIEF

Сохраняет изменения в объекте

## CONTENT

Доступ: public

Сохраняет изменения в объекте

Параметры:
* stappler::db::sql::SqlHandle::Worker&
* uint64_t - ид объекта
* stappler::mem_pool::Value const& - значение для сохранения
* Vector<stappler::db::InputField> const&
* stappler::db::InputRow&

Возвращает:
* stappler::mem_pool::Value - изменённый объект

# ::stappler::db::sql::SqlHandle::remove(stappler::db::sql::SqlHandle::Worker&,uint64_t)

## BRIEF

Удаляет объект

## CONTENT

Доступ: public

Удаляет объект

Параметры:
* stappler::db::sql::SqlHandle::Worker&
* uint64_t - ид объекта

Возвращает:
* bool - true при успехе

# ::stappler::db::sql::SqlHandle::count(stappler::db::sql::SqlHandle::Worker&,db::Query const&)

## BRIEF

Посчитывает число объектов по запросу

## CONTENT

Доступ: public

Посчитывает число объектов по запросу

Параметры:
* stappler::db::sql::SqlHandle::Worker&
* db::Query const&

Возвращает:
* size_t - число объектов

# ::stappler::db::sql::SqlHandle::field(db::Action,stappler::db::sql::SqlHandle::Worker&,uint64_t,stappler::db::sql::SqlHandle::Field const&,stappler::mem_pool::Value&&)

## BRIEF

Выполняет операцию над составным полем объекта

## CONTENT

Доступ: public

Выполняет операцию над составным полем объекта

Параметры:
* db::Action - операция над полем
* stappler::db::sql::SqlHandle::Worker&
* uint64_t - ид объекта
* stappler::db::sql::SqlHandle::Field const& - поле
* stappler::mem_pool::Value&& - значение для операции

Возвращает:
* stappler::mem_pool::Value - текущее значение поля в объекте

# ::stappler::db::sql::SqlHandle::field(db::Action,stappler::db::sql::SqlHandle::Worker&,stappler::mem_pool::Value const&,stappler::db::sql::SqlHandle::Field const&,stappler::mem_pool::Value&&)

## BRIEF

Выполняет операцию над составным полем объекта

## CONTENT

Доступ: public

Выполняет операцию над составным полем объекта

Параметры:
* db::Action - операция над полем
* stappler::db::sql::SqlHandle::Worker&
* stappler::mem_pool::Value const& - исходный объект
* stappler::db::sql::SqlHandle::Field const& - поле
* stappler::mem_pool::Value&& - значение для операции

Возвращает:
* stappler::mem_pool::Value - текущее значение поля в объекте

# ::stappler::db::sql::SqlHandle::performQueryListForIds(stappler::db::sql::SqlHandle::QueryList const&,size_t)

## BRIEF

Возвращает идентификаторы объектов для операций по иерархическому списку запросов

## CONTENT

Доступ: protected

Возвращает идентификаторы объектов для операций по иерархическому списку запросов

Параметры:
* stappler::db::sql::SqlHandle::QueryList const&
* size_t - число используемых запросов из списка

Возвращает:
* Vector<int64_t>

# ::stappler::db::sql::SqlHandle::performQueryList(stappler::db::sql::SqlHandle::QueryList const&,size_t,bool)

## BRIEF

Возвращает объекты для иерархического списка запросов

## CONTENT

Доступ: protected

Возвращает объекты для иерархического списка запросов

Параметры:
* stappler::db::sql::SqlHandle::QueryList const&
* size_t - число используемых запросов из списка
* bool - true - блокирует возвращаемые объекты до конца транзакции или до обновления из транзакции

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::sql::SqlHandle::removeFromView(db::FieldView const&,stappler::db::sql::SqlHandle::Scheme const*,uint64_t)

## BRIEF

Удаляет объект из отображения

## CONTENT

Доступ: protected

Удаляет объект из отображения

Параметры:
* db::FieldView const& - поле отображения
* stappler::db::sql::SqlHandle::Scheme const*
* uint64_t - удаляемый объект

Возвращает:
* bool

# ::stappler::db::sql::SqlHandle::addToView(db::FieldView const&,stappler::db::sql::SqlHandle::Scheme const*,uint64_t,stappler::mem_pool::Value const&)

## BRIEF

Добавляет объект в отображение

## CONTENT

Доступ: protected

Добавляет объект в отображение

Параметры:
* db::FieldView const& - поле отображения
* stappler::db::sql::SqlHandle::Scheme const*
* uint64_t - добавляемый объект
* stappler::mem_pool::Value const& - дополнительные данные поля

Возвращает:
* bool

# ::stappler::db::sql::SqlHandle::getReferenceParents(stappler::db::sql::SqlHandle::Scheme const&,uint64_t,stappler::db::sql::SqlHandle::Scheme const*,stappler::db::sql::SqlHandle::Field const*)

## BRIEF

Возвращает список объектов, в которых пристутсвует ссылка на указанный объект

## CONTENT

Доступ: protected

Возвращает список объектов, в которых пристутсвует ссылка на указанный объект

Параметры:
* stappler::db::sql::SqlHandle::Scheme const& - исходная схема
* uint64_t - ид объекта
* stappler::db::sql::SqlHandle::Scheme const* - родительская схема
* stappler::db::sql::SqlHandle::Field const* - поле в родительской схеме

Возвращает:
* Vector<int64_t>

# ::stappler::db::sql::SqlHandle::selectQueryId(stappler::db::sql::SqlQuery const&)

## BRIEF

Выполняет запрос, возвращающий одиночный идентификатор

## CONTENT

Доступ: protected

Выполняет запрос, возвращающий одиночный идентификатор

Параметры:
* stappler::db::sql::SqlQuery const&

Возвращает:
* int64_t

# ::stappler::db::sql::SqlHandle::performQuery(stappler::db::sql::SqlQuery const&)

## BRIEF

Выполняет запрос, возвращает число изменённых строк

## CONTENT

Доступ: protected

Выполняет запрос, возвращает число изменённых строк

Параметры:
* stappler::db::sql::SqlQuery const&

Возвращает:
* size_t

# ::stappler::db::sql::SqlHandle::selectValueQuery(stappler::db::sql::SqlHandle::Scheme const&,stappler::db::sql::SqlQuery const&,Vector<const stappler::db::sql::SqlHandle::Field *> const&)

## BRIEF

Выполняет запрос, декодирует результат в значение

## CONTENT

Доступ: protected

Выполняет запрос, декодирует результат в значение

Параметры:
* stappler::db::sql::SqlHandle::Scheme const&
* stappler::db::sql::SqlQuery const&
* Vector<const stappler::db::sql::SqlHandle::Field *> const& - список готовых для декодирования виртуальных полей

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::sql::SqlHandle::selectValueQuery(stappler::db::sql::SqlHandle::Field const&,stappler::db::sql::SqlQuery const&,Vector<const stappler::db::sql::SqlHandle::Field *> const&)

## BRIEF

Выполняет запрос к полю, декодирует результат в значение

## CONTENT

Доступ: protected

Выполняет запрос к полю, декодирует результат в значение

Доступ: protected

Параметры:
* stappler::db::sql::SqlHandle::Field const&
* stappler::db::sql::SqlQuery const&
* Vector<const stappler::db::sql::SqlHandle::Field *> const& - список готовых для декодирования виртуальных полей

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::sql::SqlHandle::selectValueQuery(stappler::mem_pool::Value&,stappler::db::FieldView const&,stappler::db::sql::SqlQuery const&)

## BRIEF

Раскрывает объекты из запроса к полю-отображению

## CONTENT

Доступ: protected

Раскрывает объекты из запроса к полю-отображению

Параметры:
* stappler::mem_pool::Value&
* stappler::db::FieldView const&
* stappler::db::sql::SqlQuery const&


# ::stappler::db::sql::SqlHandle::getFileField(stappler::db::sql::SqlHandle::Worker&,stappler::db::sql::SqlQuery&,uint64_t,uint64_t,stappler::db::sql::SqlHandle::Field const&)

## BRIEF

Получает значение для файлового поля

## CONTENT

Доступ: protected

Получает значение для файлового поля

Параметры:
* stappler::db::sql::SqlHandle::Worker&
* stappler::db::sql::SqlQuery&
* uint64_t - ид объекта
* uint64_t - ид файла
* stappler::db::sql::SqlHandle::Field const&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::sql::SqlHandle::getFileCount(stappler::db::sql::SqlHandle::Worker&,stappler::db::sql::SqlQuery&,uint64_t,uint64_t,stappler::db::sql::SqlHandle::Field const&)

## BRIEF

Возвращает число файлов для поля

## CONTENT

Доступ: protected

Возвращает число файлов для поля

Параметры:
* stappler::db::sql::SqlHandle::Worker&
* stappler::db::sql::SqlQuery&
* uint64_t - ид объекта
* uint64_t - ид файла или 0
* stappler::db::sql::SqlHandle::Field const&

Возвращает:
* size_t

# ::stappler::db::sql::SqlHandle::getArrayField(stappler::db::sql::SqlHandle::Worker&,stappler::db::sql::SqlQuery&,uint64_t,stappler::db::sql::SqlHandle::Field const&)

## BRIEF

Возвращает значение поля-массива

## CONTENT

Доступ: protected

Возвращает значение поля-массива

Параметры:
* stappler::db::sql::SqlHandle::Worker&
* stappler::db::sql::SqlQuery&
* uint64_t - ид объекта
* stappler::db::sql::SqlHandle::Field const&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::sql::SqlHandle::getArrayCount(stappler::db::sql::SqlHandle::Worker&,stappler::db::sql::SqlQuery&,uint64_t,stappler::db::sql::SqlHandle::Field const&)

## BRIEF

Возвращает число элементов в поле-массиве

## CONTENT

Доступ: protected

Возвращает число элементов в поле-массиве

Параметры:
* stappler::db::sql::SqlHandle::Worker&
* stappler::db::sql::SqlQuery&
* uint64_t
* stappler::db::sql::SqlHandle::Field const&

Возвращает:
* size_t

# ::stappler::db::sql::SqlHandle::getObjectField(stappler::db::sql::SqlHandle::Worker&,stappler::db::sql::SqlQuery&,uint64_t,uint64_t,stappler::db::sql::SqlHandle::Field const&)

## BRIEF

Возвращает значение объектного поля

## CONTENT

Доступ: protected

Возвращает значение объектного поля

Параметры:
* stappler::db::sql::SqlHandle::Worker&
* stappler::db::sql::SqlQuery&
* uint64_t
* uint64_t
* stappler::db::sql::SqlHandle::Field const&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::sql::SqlHandle::getObjectCount(stappler::db::sql::SqlHandle::Worker&,stappler::db::sql::SqlQuery&,uint64_t,uint64_t,stappler::db::sql::SqlHandle::Field const&)

## BRIEF

Возвращает число объектов в объектном поле

## CONTENT

Доступ: protected

Возвращает число объектов в объектном поле

Параметры:
* stappler::db::sql::SqlHandle::Worker&
* stappler::db::sql::SqlQuery&
* uint64_t
* uint64_t
* stappler::db::sql::SqlHandle::Field const&

Возвращает:
* size_t

# ::stappler::db::sql::SqlHandle::getSetField(stappler::db::sql::SqlHandle::Worker&,stappler::db::sql::SqlQuery&,uint64_t,stappler::db::sql::SqlHandle::Field const&,db::Query const&)

## BRIEF

Возвращает значение поля-списка

## CONTENT

Доступ: protected

Возвращает значение поля-списка

Параметры:
* stappler::db::sql::SqlHandle::Worker&
* stappler::db::sql::SqlQuery&
* uint64_t
* stappler::db::sql::SqlHandle::Field const&
* db::Query const&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::sql::SqlHandle::getSetCount(stappler::db::sql::SqlHandle::Worker&,stappler::db::sql::SqlQuery&,uint64_t,stappler::db::sql::SqlHandle::Field const&,db::Query const&)

## BRIEF

Возвращает число объектов в поле-списке

## CONTENT

Доступ: protected

Возвращает число объектов в поле-списке

Параметры:
* stappler::db::sql::SqlHandle::Worker&
* stappler::db::sql::SqlQuery&
* uint64_t
* stappler::db::sql::SqlHandle::Field const&
* db::Query const&

Возвращает:
* size_t

# ::stappler::db::sql::SqlHandle::getViewField(stappler::db::sql::SqlHandle::Worker&,stappler::db::sql::SqlQuery&,uint64_t,stappler::db::sql::SqlHandle::Field const&,db::Query const&)

## BRIEF

Возвращает значение поля-отображения

## CONTENT

Доступ: protected

Возвращает значение поля-отображения

Параметры:
* stappler::db::sql::SqlHandle::Worker&
* stappler::db::sql::SqlQuery&
* uint64_t
* stappler::db::sql::SqlHandle::Field const&
* db::Query const&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::sql::SqlHandle::getViewCount(stappler::db::sql::SqlHandle::Worker&,stappler::db::sql::SqlQuery&,uint64_t,stappler::db::sql::SqlHandle::Field const&,db::Query const&)

## BRIEF

Возвращает число объектов в поле-отображении

## CONTENT

Доступ: protected

Возвращает число объектов в поле-отображении

Параметры:
* stappler::db::sql::SqlHandle::Worker&
* stappler::db::sql::SqlQuery&
* uint64_t
* stappler::db::sql::SqlHandle::Field const&
* db::Query const&

Возвращает:
* size_t

# ::stappler::db::sql::SqlHandle::getSimpleField(stappler::db::sql::SqlHandle::Worker&,stappler::db::sql::SqlQuery&,uint64_t,stappler::db::sql::SqlHandle::Field const&)

## BRIEF

Возвращает значение простого поля

## CONTENT

Доступ: protected

Возвращает значение простого поля

Параметры:
* stappler::db::sql::SqlHandle::Worker&
* stappler::db::sql::SqlQuery&
* uint64_t
* stappler::db::sql::SqlHandle::Field const&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::sql::SqlHandle::getSimpleCount(stappler::db::sql::SqlHandle::Worker&,stappler::db::sql::SqlQuery&,uint64_t,stappler::db::sql::SqlHandle::Field const&)

## BRIEF

Возвращает число объектов в простом поле

## CONTENT

Доступ: protected

Возвращает число объектов в простом поле

Параметры:
* stappler::db::sql::SqlHandle::Worker&
* stappler::db::sql::SqlQuery&
* uint64_t
* stappler::db::sql::SqlHandle::Field const&

Возвращает:
* size_t

# ::stappler::db::sql::SqlHandle::insertIntoSet(stappler::db::sql::SqlQuery&,stappler::db::sql::SqlHandle::Scheme const&,int64_t,db::FieldObject const&,stappler::db::sql::SqlHandle::Field const&,stappler::mem_pool::Value const&)

## BRIEF

Записывает в запрос добавление объекта в список

## CONTENT

Доступ: protected

Записывает в запрос добавление объекта в список

Параметры:
* stappler::db::sql::SqlQuery&
* stappler::db::sql::SqlHandle::Scheme const&
* int64_t
* db::FieldObject const&
* stappler::db::sql::SqlHandle::Field const&
* stappler::mem_pool::Value const&

Возвращает:
* bool

# ::stappler::db::sql::SqlHandle::insertIntoArray(stappler::db::sql::SqlQuery&,stappler::db::sql::SqlHandle::Scheme const&,int64_t,stappler::db::sql::SqlHandle::Field const&,stappler::mem_pool::Value&)

## BRIEF

Записывает в запрос добавление значения в массив

## CONTENT

Доступ: protected

Записывает в запрос добавление значения в массив

Параметры:
* stappler::db::sql::SqlQuery&
* stappler::db::sql::SqlHandle::Scheme const&
* int64_t
* stappler::db::sql::SqlHandle::Field const&
* stappler::mem_pool::Value&

Возвращает:
* bool

# ::stappler::db::sql::SqlHandle::insertIntoRefSet(stappler::db::sql::SqlQuery&,stappler::db::sql::SqlHandle::Scheme const&,int64_t,stappler::db::sql::SqlHandle::Field const&,Vector<int64_t> const&)

## BRIEF

Записывает в запрос добавление объекта в ссылочный список

## CONTENT

Доступ: protected

Записывает в запрос добавление объекта в ссылочный список

Параметры:
* stappler::db::sql::SqlQuery&
* stappler::db::sql::SqlHandle::Scheme const&
* int64_t
* stappler::db::sql::SqlHandle::Field const&
* Vector<int64_t> const&

Возвращает:
* bool

# ::stappler::db::sql::SqlHandle::cleanupRefSet(stappler::db::sql::SqlQuery&,stappler::db::sql::SqlHandle::Scheme const&,uint64_t,stappler::db::sql::SqlHandle::Field const&,Vector<int64_t> const&)

## BRIEF

Записывает в запрос очистку ссылочного списка

## CONTENT

Доступ: protected

Записывает в запрос очистку ссылочного списка

Параметры:
* stappler::db::sql::SqlQuery&
* stappler::db::sql::SqlHandle::Scheme const&
* uint64_t
* stappler::db::sql::SqlHandle::Field const&
* Vector<int64_t> const&

Возвращает:
* bool

# ::stappler::db::sql::SqlHandle::performPostUpdate(db::Transaction const&,stappler::db::sql::SqlQuery&,stappler::db::sql::SqlHandle::Scheme const&,stappler::mem_pool::Value&,int64_t,stappler::mem_pool::Value const&,bool)

## BRIEF

Выполняет действия, требущие внимания после успешного обновления объекта

## CONTENT

Доступ: protected

Выполняет действия, требущие внимания после успешного обновления объекта

Параметры:
* db::Transaction const&
* stappler::db::sql::SqlQuery&
* stappler::db::sql::SqlHandle::Scheme const&
* stappler::mem_pool::Value&
* int64_t
* stappler::mem_pool::Value const&
* bool


# ::stappler::db::sql::SqlHandle::_bcasts

## BRIEF

Ожидающие отправки уведомления

## CONTENT

Доступ: protected

Ожидающие отправки уведомления

Тип: Vector<stappler::Pair<stappler::Time, Bytes>>

# ::stappler::db::sql::SqlHandle::SqlHandle(stappler::db::sql::Driver const*)

## BRIEF

Инициализирует запрос

## CONTENT

Доступ: public

Инициализирует запрос

Параметры:
* stappler::db::sql::Driver const*

# ::stappler::db::sql::SqlHandle::_driver

## BRIEF

Драйвер для запроса

## CONTENT

Доступ: protected

Драйвер для запроса

Тип: stappler::db::sql::Driver const*