Title: STStorageBackendInterface.h


# STAPPLER_DB_SPDBINTERFACE_H_

## BRIEF

Заголовок абстрактных интерфейсов к БД

## CONTENT

Заголовок абстрактных интерфейсов к БД. Реальные интерфейсы основаны на этих интерфейсах


# ::stappler::db::DeltaAction

## BRIEF

Возможные действия с объектом, возвращаемые дельта-запросом

## CONTENT

Возможные действия с объектом, возвращаемые дельта-запросом

Значения:
* Create
* Update
* Delete
* Append
* Erase


# ::stappler::db::BackendInterface

## BRIEF

Абстрактный интерфейс БД

## CONTENT

Абстрактный интерфейс БД

Базовые классы:
* AllocBase


# ::stappler::db::BackendInterface::StorageType

## BRIEF

Тип хранимого значения в поле

## CONTENT

Доступ: public

Тип хранимого значения в поле

Значения:
* Unknown
* Bool
* Char
* Float4
* Float8
* Int2
* Int4
* Int8
* Text
* VarChar
* Numeric
* Bytes
* TsVector


# ::stappler::db::BackendInterface::Config

## BRIEF

Конфигурация для интерфейса БД

## CONTENT

Доступ: public

Конфигурация для интерфейса БД


# ::stappler::db::BackendInterface::Config::name

## BRIEF

Имя БД

## CONTENT

Имя БД

Тип: stappler::StringView


# ::stappler::db::BackendInterface::Config::fileScheme

## BRIEF

Схема для внешних файлов

## CONTENT

Схема для внешних файлов

Тип: stappler::db::Scheme const*


# ::stappler::db::BackendInterface::~BackendInterface()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор


# ::stappler::db::BackendInterface::set(stappler::CoderSource const&,stappler::mem_pool::Value const&,stappler::TimeInterval)

## BRIEF

Устанавливает значение для ключа

## CONTENT

Доступ: public

Устанавливает значение для ключа в хранилище ключ-значение.

Параметры:
* stappler::CoderSource const& - ключ
* stappler::mem_pool::Value const& - значение
* stappler::TimeInterval - время жизни объекта

Возвращает:
* bool - true если успешно

# ::stappler::db::BackendInterface::get(stappler::CoderSource const&)

## BRIEF

Возвращает объект по ключу

## CONTENT

Доступ: public

Возвращает объект по ключу из хранилища ключ-значение.

Параметры:
* stappler::CoderSource const& - ключ

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::BackendInterface::clear(stappler::CoderSource const&)

## BRIEF

Удаляет объект по ключу

## CONTENT

Доступ: public

Удаляет объект по ключу в хранилище ключ-значение

Параметры:
* stappler::CoderSource const&

Возвращает:
* bool

# ::stappler::db::BackendInterface::performQueryListForIds(stappler::db::QueryList const&,size_t)

## BRIEF

Возвращает идентификаторы объектов для операций по иерархическому списку запросов

## CONTENT

Доступ: public

Возвращает идентификаторы объектов для операций по иерархическому списку запросов

Параметры:
* stappler::db::QueryList const&
* size_t - число используемых запросов из списка

Возвращает:
* Vector<int64_t>

# ::stappler::db::BackendInterface::performQueryList(stappler::db::QueryList const&,size_t,bool)

## BRIEF

Возвращает объекты для иерархического списка запросов

## CONTENT

Доступ: public

Возвращает объекты для иерархического списка запросов

Параметры:
* stappler::db::QueryList const&
* size_t - число используемых запросов из списка
* bool - true - блокирует возвращаемые объекты до конца транзакции или до обновления из транзакции

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::BackendInterface::init(stappler::db::BackendInterface::Config const&,Map<stappler::StringView, const stappler::db::Scheme *> const&)

## BRIEF

Инициализирует новую сессию приложения для конфигурации и схем данных

## CONTENT

Доступ: public

Инициализирует новую сессию приложения для конфигурации и схем данных

Параметры:
* stappler::db::BackendInterface::Config const&
* Map<stappler::StringView, const stappler::db::Scheme *> const&

Возвращает:
* bool - true если успешно

# ::stappler::db::BackendInterface::makeSessionsCleanup()

## BRIEF

Принудительно очищает сессии и хранилище ключ-значение

## CONTENT

Доступ: public

Принудительно очищает сессии и хранилище ключ-значение


# ::stappler::db::BackendInterface::processBroadcasts(Callback<void (stappler::BytesView)> const&,int64_t)

## BRIEF

Принудительно очищает даные сессий и хранимых объектов

## CONTENT

Доступ: public

Принудительно очищает даные сессий и хранимых объектов

Параметры:
* Callback<void (stappler::BytesView)> const&
* int64_t

Возвращает:
* int64_t

# ::stappler::db::BackendInterface::foreach(stappler::db::Worker&,stappler::db::Query const&,Callback<bool (stappler::mem_pool::Value &)> const&)

## BRIEF

Выполняет запрос, читая результат построчно

## CONTENT

Доступ: public

Выполняет запрос, читая результат построчно

Параметры:
* stappler::db::Worker&
* stappler::db::Query const&
* Callback<bool (stappler::mem_pool::Value &)> const& - функция для построчного чтения

Возвращает:
* bool

# ::stappler::db::BackendInterface::select(stappler::db::Worker&,stappler::db::Query const&)

## BRIEF

Выполняет запрос

## CONTENT

Доступ: public

Выполняет запрос, возвращает результат

Параметры:
* stappler::db::Worker&
* stappler::db::Query const&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::BackendInterface::create(stappler::db::Worker&,Vector<stappler::db::InputField> const&,Vector<stappler::db::InputRow>&,bool)

## BRIEF

Создаёт новый объект

## CONTENT

Доступ: public

Создаёт новый объект

Параметры:
* stappler::db::Worker&
* Vector<stappler::db::InputField> const&
* Vector<stappler::db::InputRow>&
* bool - true если запрошено множественное создание

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::BackendInterface::save(stappler::db::Worker&,uint64_t,stappler::mem_pool::Value const&,Vector<stappler::db::InputField> const&,stappler::db::InputRow&)

## BRIEF

Сохраняет изменения в объекте

## CONTENT

Доступ: public

Сохраняет изменения в объекте

Параметры:
* stappler::db::Worker&
* uint64_t
* stappler::mem_pool::Value const&
* Vector<stappler::db::InputField> const&
* stappler::db::InputRow&

Возвращает:
* stappler::mem_pool::Value - изменённый объект

# ::stappler::db::BackendInterface::remove(stappler::db::Worker&,uint64_t)

## BRIEF

Удаляет объект

## CONTENT

Доступ: public

Удаляет объект

Параметры:
* stappler::db::Worker&
* uint64_t

Возвращает:
* bool - true при успехе

# ::stappler::db::BackendInterface::count(stappler::db::Worker&,stappler::db::Query const&)

## BRIEF

Посчитывает число объектов по запросу

## CONTENT

Доступ: public

Посчитывает число объектов по запросу

Параметры:
* stappler::db::Worker&
* stappler::db::Query const&

Возвращает:
* size_t - число объектов

# ::stappler::db::BackendInterface::field(stappler::db::Action,stappler::db::Worker&,uint64_t,stappler::db::Field const&,stappler::mem_pool::Value&&)

## BRIEF

Выполняет операцию над составным полем объекта

## CONTENT

Доступ: public

Выполняет операцию над составным полем объекта

Параметры:
* stappler::db::Action- операция над полем
* stappler::db::Worker&
* uint64_t
* stappler::db::Field const& - поле
* stappler::mem_pool::Value&& - значение для операции

Возвращает:
* stappler::mem_pool::Value - текущее значение поля в объекте

# ::stappler::db::BackendInterface::field(stappler::db::Action,stappler::db::Worker&,stappler::mem_pool::Value const&,stappler::db::Field const&,stappler::mem_pool::Value&&)

## BRIEF

Выполняет операцию над составным полем объекта

## CONTENT

Доступ: public

Выполняет операцию над составным полем объекта

Параметры:
* stappler::db::Action - операция над полем
* stappler::db::Worker&
* stappler::mem_pool::Value const& - исходный объект
* stappler::db::Field const& - поле
* stappler::mem_pool::Value&& - значение для операции

Возвращает:
* stappler::mem_pool::Value - текущее значение поля в объекте

# ::stappler::db::BackendInterface::addToView(stappler::db::FieldView const&,stappler::db::Scheme const*,uint64_t,stappler::mem_pool::Value const&)

## BRIEF

Добавляет объект в отображение

## CONTENT

Доступ: public

Добавляет объект в отображение

Параметры:
* stappler::db::FieldView const& - поле отображения
* stappler::db::Scheme const*
* uint64_t - добавляемый объект
* stappler::mem_pool::Value const& - дополнительные данные поля

Возвращает:
* bool

# ::stappler::db::BackendInterface::removeFromView(stappler::db::FieldView const&,stappler::db::Scheme const*,uint64_t)

## BRIEF

Удаляет объект из отображения

## CONTENT

Доступ: public

Удаляет объект из отображения

Параметры:
* stappler::db::FieldView const& - поле отображения
* stappler::db::Scheme const*
* uint64_t

Возвращает:
* bool

# ::stappler::db::BackendInterface::getReferenceParents(stappler::db::Scheme const&,uint64_t,stappler::db::Scheme const*,stappler::db::Field const*)

## BRIEF

Возвращает список объектов, которые используют указанный в ссылках

## CONTENT

Доступ: public

Возвращает список объектов, которые используют указанный в ссылках

Параметры:
* stappler::db::Scheme const& - исходная схема
* uint64_t - объект для поиска
* stappler::db::Scheme const* - родительская схема
* stappler::db::Field const* - поле ссылки в родителе

Возвращает:
* Vector<int64_t>

# ::stappler::db::BackendInterface::beginTransaction()

## BRIEF

Начинает новую транзакцию

## CONTENT

Доступ: public

Начинает новую транзакцию

Возвращает:
* bool - true если успешно

# ::stappler::db::BackendInterface::endTransaction()

## BRIEF

Завершает транакцию

## CONTENT

Доступ: public

Завершает транакцию

Возвращает:
* bool - true если успешно

# ::stappler::db::BackendInterface::authorizeUser(stappler::db::Auth const&,stappler::StringView const&,stappler::StringView const&)

## BRIEF

Авторизует пользователя по имени и ключу

## CONTENT

Доступ: public

Авторизует пользователя по имени и ключу

Параметры:
* stappler::db::Auth const& - описание схемы инициализации
* stappler::StringView const& - имя пользователя
* stappler::StringView const& - пароль или ключ

Возвращает:
* stappler::db::User* - пользователь или nullptr


# ::stappler::db::BackendInterface::broadcast(stappler::mem_pool::Bytes const&)

## BRIEF

Отправляет широковещательное сообщение, если возможно

## CONTENT

Доступ: public

Отправляет широковещательное сообщение, если возможно

Параметры:
* stappler::mem_pool::Bytes const&


# ::stappler::db::BackendInterface::getDeltaValue(stappler::db::Scheme const&)

## BRIEF

Возвращает общее максимальное время изменения схемы, поддерживающей дельта-запросы

## CONTENT

Доступ: public

Возвращает общее максимальное время изменения схемы, поддерживающей дельта-запросы

Параметры:
* stappler::db::Scheme const&

Возвращает:
* int64_t

# ::stappler::db::BackendInterface::getDeltaValue(stappler::db::Scheme const&,stappler::db::FieldView const&,uint64_t)

## BRIEF

Возвращает текущее значение дельты для поля отображения в схеме

## CONTENT

Доступ: public

Возвращает текущее значение дельты для поля отображения в схеме

Параметры:
* stappler::db::Scheme const&
* stappler::db::FieldView const& - поле отображения
* uint64_t - идентификатор объекта отображения

Возвращает:
* int64_t

# ::stappler::db::BackendInterface::cancelTransaction()

## BRIEF

Отменяет и откатывает транзакцию

## CONTENT

Доступ: public

Отменяет и откатывает транзакцию


# ::stappler::db::BackendInterface::isInTransaction() const

## BRIEF

Проверяет, есть ли активная транзакция у адаптера

## CONTENT

Доступ: public

Проверяет, есть ли активная транзакция у адаптера

Возвращает:
* bool

# ::stappler::db::BackendInterface::getTransactionStatus() const

## BRIEF

Возвращает статус транзакции

## CONTENT

Доступ: public

Возвращает статус транзакции

Возвращает:
* stappler::db::TransactionStatus

# ::stappler::db::BackendInterface::getDatabaseName() const

## BRIEF

Возвращает имя действующей базы данных

## CONTENT

Доступ: public

Возвращает имя действующей базы данных

Возвращает:
* stappler::StringView

# ::stappler::db::BackendInterface::getTransactionKey() const

## BRIEF

Возвращает уникальный для адаптера ключ текущей транзакции

## CONTENT

Доступ: public

Возвращает уникальный для адаптера ключ текущей транзакции

Возвращает:
* stappler::mem_pool::String

# ::stappler::db::BackendInterface::dbName

## BRIEF

Имя БД

## CONTENT

Доступ: protected

Имя БД

Тип: stappler::StringView


# ::stappler::db::BackendInterface::transactionStatus

## BRIEF

Текущий статус транзакции

## CONTENT

Доступ: protected

Текущий статус транзакции

Тип: stappler::db::TransactionStatus


# ::stappler::db::Binder

## BRIEF

Интерфейс для связи объектов с запросом к БД

## CONTENT

Интерфейс для связи объектов с запросом к БД


# ::stappler::db::Binder::DataField

## BRIEF

Структура для необработанных нетипизированных данных поля

## CONTENT

Доступ: public

Структура для необработанных нетипизированных данных поля


# ::stappler::db::Binder::DataField::field

## BRIEF

Поле для данных

## CONTENT

Поле для данных

Тип: db::Field const*


# ::stappler::db::Binder::DataField::data

## BRIEF

Данные поля

## CONTENT

Данные поля

Тип: stappler::mem_pool::Value const&


# ::stappler::db::Binder::DataField::force

## BRIEF

Флаг, если необходимо принудительно кодировать данные

## CONTENT

Флаг, если необходимо принудительно кодировать данные

Тип: bool


# ::stappler::db::Binder::DataField::compress

## BRIEF

Флаг сжатия

## CONTENT

Флаг сжатия

Тип: bool


# ::stappler::db::Binder::FullTextField

## BRIEF

Структура для полнотекстовых данных

## CONTENT

Доступ: public

Структура для полнотекстовых данных


# ::stappler::db::Binder::FullTextField::data

## BRIEF

Исходные данные

## CONTENT

Тип: stappler::mem_pool::Value const&

Исходные данные


# ::stappler::db::Binder::FullTextRank

## BRIEF

Структура для записи запроса к полнотекстовому рангу

## CONTENT

Доступ: public

Структура для записи запроса к полнотекстовому рангу


# ::stappler::db::Binder::FullTextRank::scheme

## BRIEF

Исходная схема

## CONTENT

Исходная схема

Тип: stappler::StringView


# ::stappler::db::Binder::FullTextRank::field

## BRIEF

Исходное поле

## CONTENT

Исходное поле

Тип: stappler::db::Field const*


# ::stappler::db::Binder::FullTextRank::query

## BRIEF

Полнотекстовый запрос

## CONTENT

Полнотекстовый запрос

Тип: stappler::StringView


# ::stappler::db::Binder::TypeString

## BRIEF

Типизированная строка

## CONTENT

Доступ: public

Типизированная строка


# ::stappler::db::Binder::TypeString::str

## BRIEF

Исходная строка

## CONTENT

Исходная строка

Тип: stappler::StringView


# ::stappler::db::Binder::TypeString::type

## BRIEF

Тип строки в БД

## CONTENT

Тип: stappler::StringView

Тип строки в БД


# ::stappler::db::Binder::TypeString::TypeString<typename,typename>(Str&&,Type&&)

## BRIEF

Создаёт типизированную строку

## CONTENT

Создаёт типизированную строку

Параметры шаблона:
* typename Str
* typename Type

Параметры:
* Str&& - исходная строка
* Type&& - тип строки в БД


# ::stappler::db::Binder::setInterface(stappler::db::QueryInterface*)

## BRIEF

Устанавливает интерфейс для запроса

## CONTENT

Доступ: public

Устанавливает интерфейс для запроса

Параметры:
* stappler::db::QueryInterface*


# ::stappler::db::Binder::getInterface() const

## BRIEF

Получает интерфейс БД

## CONTENT

Доступ: public

Получает интерфейс БД

Возвращает:
* stappler::db::QueryInterface*

# ::stappler::db::Binder::writeBind(stappler::mem_pool::StringStream&,int64_t)

## BRIEF

Связывает значение с запросом

## CONTENT

Доступ: public

Связывает значение с запросом

Параметры:
* stappler::mem_pool::StringStream&
* int64_t


# ::stappler::db::Binder::writeBind(stappler::mem_pool::StringStream&,uint64_t)

## BRIEF

Связывает значение с запросом

## CONTENT

Доступ: public

Связывает значение с запросом

Параметры:
* stappler::mem_pool::StringStream&
* uint64_t


# ::stappler::db::Binder::writeBind(stappler::mem_pool::StringStream&,double)

## BRIEF

Связывает значение с запросом

## CONTENT

Доступ: public

Связывает значение с запросом

Параметры:
* stappler::mem_pool::StringStream&
* double


# ::stappler::db::Binder::writeBind(stappler::mem_pool::StringStream&,stappler::Time)

## BRIEF

Связывает значение с запросом

## CONTENT

Доступ: public

Связывает значение с запросом

Параметры:
* stappler::mem_pool::StringStream&
* stappler::Time


# ::stappler::db::Binder::writeBind(stappler::mem_pool::StringStream&,stappler::TimeInterval)

## BRIEF

Связывает значение с запросом

## CONTENT

Доступ: public

Связывает значение с запросом

Параметры:
* stappler::mem_pool::StringStream&
* stappler::TimeInterval


# ::stappler::db::Binder::writeBind(stappler::mem_pool::StringStream&,stappler::mem_pool::String const&)

## BRIEF

Связывает значение с запросом

## CONTENT

Доступ: public

Связывает значение с запросом

Параметры:
* stappler::mem_pool::StringStream&
* stappler::mem_pool::String const&


# ::stappler::db::Binder::writeBind(stappler::mem_pool::StringStream&,stappler::mem_pool::String&&)

## BRIEF

Связывает значение с запросом

## CONTENT

Доступ: public

Связывает значение с запросом

Параметры:
* stappler::mem_pool::StringStream&
* stappler::mem_pool::String&&


# ::stappler::db::Binder::writeBind(stappler::mem_pool::StringStream&,stappler::StringView const&)

## BRIEF

Связывает значение с запросом

## CONTENT

Доступ: public

Связывает значение с запросом

Параметры:
* stappler::mem_pool::StringStream&
* stappler::StringView const&


# ::stappler::db::Binder::writeBind(stappler::mem_pool::StringStream&,stappler::mem_pool::Bytes const&)

## BRIEF

Связывает значение с запросом

## CONTENT

Доступ: public

Связывает значение с запросом

Параметры:
* stappler::mem_pool::StringStream&
* stappler::mem_pool::Bytes const&


# ::stappler::db::Binder::writeBind(stappler::mem_pool::StringStream&,stappler::mem_pool::Bytes&&)

## BRIEF

Связывает значение с запросом

## CONTENT

Доступ: public

Связывает значение с запросом

Параметры:
* stappler::mem_pool::StringStream&
* stappler::mem_pool::Bytes&&


# ::stappler::db::Binder::writeBind(stappler::mem_pool::StringStream&,stappler::CoderSource const&)

## BRIEF

Связывает значение с запросом

## CONTENT

Доступ: public

Связывает значение с запросом

Параметры:
* stappler::mem_pool::StringStream&
* stappler::CoderSource const&


# ::stappler::db::Binder::writeBind(stappler::mem_pool::StringStream&,stappler::mem_pool::Value const&)

## BRIEF

Связывает значение с запросом

## CONTENT

Доступ: public

Связывает значение с запросом

Параметры:
* stappler::mem_pool::StringStream&
* stappler::mem_pool::Value const&


# ::stappler::db::Binder::writeBind(stappler::mem_pool::StringStream&,stappler::db::Binder::DataField const&)

## BRIEF

Связывает значение с запросом

## CONTENT

Доступ: public

Связывает значение с запросом

Параметры:
* stappler::mem_pool::StringStream&
* stappler::db::Binder::DataField const&


# ::stappler::db::Binder::writeBind(stappler::mem_pool::StringStream&,stappler::db::Binder::TypeString const&)

## BRIEF

Связывает значение с запросом

## CONTENT

Доступ: public

Связывает значение с запросом

Параметры:
* stappler::mem_pool::StringStream&
* stappler::db::Binder::TypeString const&


# ::stappler::db::Binder::writeBind(stappler::mem_pool::StringStream&,stappler::db::Binder::FullTextField const&)

## BRIEF

Связывает значение с запросом

## CONTENT

Доступ: public

Связывает значение с запросом

Параметры:
* stappler::mem_pool::StringStream&
* stappler::db::Binder::FullTextField const&


# ::stappler::db::Binder::writeBind(stappler::mem_pool::StringStream&,stappler::db::Binder::FullTextRank const&)

## BRIEF

Связывает значение с запросом

## CONTENT

Доступ: public

Связывает значение с запросом

Параметры:
* stappler::mem_pool::StringStream&
* stappler::db::Binder::FullTextRank const&


# ::stappler::db::Binder::writeBind(stappler::mem_pool::StringStream&,stappler::sql::PatternComparator<const Value &> const&)

## BRIEF

Связывает значение с запросом

## CONTENT

Доступ: public

Связывает значение с запросом

Параметры:
* stappler::mem_pool::StringStream&
* stappler::sql::PatternComparator<const Value &> const&


# ::stappler::db::Binder::writeBind(stappler::mem_pool::StringStream&,stappler::sql::PatternComparator<const StringView &> const&)

## BRIEF

Связывает значение с запросом

## CONTENT

Доступ: public

Связывает значение с запросом

Параметры:
* stappler::mem_pool::StringStream&
* stappler::sql::PatternComparator<const StringView &> const&


# ::stappler::db::Binder::writeBind(stappler::mem_pool::StringStream&,Vector<int64_t> const&)

## BRIEF

Связывает значение с запросом

## CONTENT

Доступ: public

Связывает значение с запросом

Параметры:
* stappler::mem_pool::StringStream&
* Vector<int64_t> const&


# ::stappler::db::Binder::writeBind(stappler::mem_pool::StringStream&,Vector<double> const&)

## BRIEF

Связывает значение с запросом

## CONTENT

Доступ: public

Связывает значение с запросом

Параметры:
* stappler::mem_pool::StringStream&
* Vector<double> const&


# ::stappler::db::Binder::writeBind(stappler::mem_pool::StringStream&,Vector<stappler::StringView> const&)

## BRIEF

Связывает значение с запросом

## CONTENT

Доступ: public

Связывает значение с запросом

Параметры:
* stappler::mem_pool::StringStream&
* Vector<stappler::StringView> const&


# ::stappler::db::Binder::clear()

## BRIEF

Очищает привязанные данные

## CONTENT

Доступ: public

Очищает привязанные данные


# ::stappler::db::Binder::_iface

## BRIEF

Интерфейс к БД

## CONTENT

Доступ: protected

Интерфейс к БД

Тип: stappler::db::QueryInterface*


# ::stappler::db::QueryInterface

## BRIEF

Интерфейс запроса к БД

## CONTENT

Интерфейс запроса к БД


# ::stappler::db::QueryInterface::~QueryInterface()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор


# ::stappler::db::QueryInterface::bindInt(stappler::db::Binder&,stappler::mem_pool::StringStream&,int64_t)

## BRIEF

Связывает значение с запросом

## CONTENT

Доступ: public

Связывает значение с запросом

Параметры:
* stappler::db::Binder&
* stappler::mem_pool::StringStream&
* int64_t


# ::stappler::db::QueryInterface::bindUInt(stappler::db::Binder&,stappler::mem_pool::StringStream&,uint64_t)

## BRIEF

Связывает значение с запросом

## CONTENT

Доступ: public

Связывает значение с запросом

Параметры:
* stappler::db::Binder&
* stappler::mem_pool::StringStream&
* uint64_t


# ::stappler::db::QueryInterface::bindDouble(stappler::db::Binder&,stappler::mem_pool::StringStream&,double)

## BRIEF

Связывает значение с запросом

## CONTENT

Доступ: public

Связывает значение с запросом

Параметры:
* stappler::db::Binder&
* stappler::mem_pool::StringStream&
* double


# ::stappler::db::QueryInterface::bindString(stappler::db::Binder&,stappler::mem_pool::StringStream&,stappler::mem_pool::String const&)

## BRIEF

Связывает значение с запросом

## CONTENT

Доступ: public

Связывает значение с запросом

Параметры:
* stappler::db::Binder&
* stappler::mem_pool::StringStream&
* stappler::mem_pool::String const&


# ::stappler::db::QueryInterface::bindMoveString(stappler::db::Binder&,stappler::mem_pool::StringStream&,stappler::mem_pool::String&&)

## BRIEF

Связывает значение с запросом

## CONTENT

Доступ: public

Связывает значение с запросом

Параметры:
* stappler::db::Binder&
* stappler::mem_pool::StringStream&
* stappler::mem_pool::String&&


# ::stappler::db::QueryInterface::bindStringView(stappler::db::Binder&,stappler::mem_pool::StringStream&,stappler::StringView const&)

## BRIEF

Связывает значение с запросом

## CONTENT

Доступ: public

Связывает значение с запросом

Параметры:
* stappler::db::Binder&
* stappler::mem_pool::StringStream&
* stappler::StringView const&


# ::stappler::db::QueryInterface::bindBytes(stappler::db::Binder&,stappler::mem_pool::StringStream&,stappler::mem_pool::Bytes const&)

## BRIEF

Связывает значение с запросом

## CONTENT

Доступ: public

Связывает значение с запросом

Параметры:
* stappler::db::Binder&
* stappler::mem_pool::StringStream&
* stappler::mem_pool::Bytes const&


# ::stappler::db::QueryInterface::bindMoveBytes(stappler::db::Binder&,stappler::mem_pool::StringStream&,stappler::mem_pool::Bytes&&)

## BRIEF

Связывает значение с запросом

## CONTENT

Доступ: public

Связывает значение с запросом

Параметры:
* stappler::db::Binder&
* stappler::mem_pool::StringStream&
* stappler::mem_pool::Bytes&&


# ::stappler::db::QueryInterface::bindCoderSource(stappler::db::Binder&,stappler::mem_pool::StringStream&,stappler::CoderSource const&)

## BRIEF

Связывает значение с запросом

## CONTENT

Доступ: public

Связывает значение с запросом

Параметры:
* stappler::db::Binder&
* stappler::mem_pool::StringStream&
* stappler::CoderSource const&


# ::stappler::db::QueryInterface::bindValue(stappler::db::Binder&,stappler::mem_pool::StringStream&,stappler::mem_pool::Value const&)

## BRIEF

Связывает значение с запросом

## CONTENT

Доступ: public

Связывает значение с запросом

Параметры:
* stappler::db::Binder&
* stappler::mem_pool::StringStream&
* stappler::mem_pool::Value const&


# ::stappler::db::QueryInterface::bindDataField(stappler::db::Binder&,stappler::mem_pool::StringStream&,Binder::DataField const&)

## BRIEF

Связывает значение с запросом

## CONTENT

Доступ: public

Связывает значение с запросом

Параметры:
* stappler::db::Binder&
* stappler::mem_pool::StringStream&
* Binder::DataField const&


# ::stappler::db::QueryInterface::bindTypeString(stappler::db::Binder&,stappler::mem_pool::StringStream&,Binder::TypeString const&)

## BRIEF

Связывает значение с запросом

## CONTENT

Доступ: public

Связывает значение с запросом

Параметры:
* stappler::db::Binder&
* stappler::mem_pool::StringStream&
* Binder::TypeString const&


# ::stappler::db::QueryInterface::bindFullText(stappler::db::Binder&,stappler::mem_pool::StringStream&,Binder::FullTextField const&)

## BRIEF

Связывает значение с запросом

## CONTENT

Доступ: public

Связывает значение с запросом

Параметры:
* stappler::db::Binder&
* stappler::mem_pool::StringStream&
* Binder::FullTextField const&


# ::stappler::db::QueryInterface::bindFullTextRank(stappler::db::Binder&,stappler::mem_pool::StringStream&,Binder::FullTextRank const&)

## BRIEF

Связывает значение с запросом

## CONTENT

Доступ: public

Связывает значение с запросом

Параметры:
* stappler::db::Binder&
* stappler::mem_pool::StringStream&
* Binder::FullTextRank const&


# ::stappler::db::QueryInterface::bindIntVector(stappler::db::Binder&,stappler::mem_pool::StringStream&,Vector<int64_t> const&)

## BRIEF

Связывает значение с запросом

## CONTENT

Доступ: public

Связывает значение с запросом

Параметры:
* stappler::db::Binder&
* stappler::mem_pool::StringStream&
* Vector<int64_t> const&


# ::stappler::db::QueryInterface::bindDoubleVector(stappler::db::Binder&,stappler::mem_pool::StringStream&,Vector<double> const&)

## BRIEF

Связывает значение с запросом

## CONTENT

Доступ: public

Связывает значение с запросом

Параметры:
* stappler::db::Binder&
* stappler::mem_pool::StringStream&
* Vector<double> const&


# ::stappler::db::QueryInterface::bindStringVector(stappler::db::Binder&,stappler::mem_pool::StringStream&,Vector<stappler::StringView> const&)

## BRIEF

Связывает значение с запросом

## CONTENT

Доступ: public

Связывает значение с запросом

Параметры:
* stappler::db::Binder&
* stappler::mem_pool::StringStream&
* Vector<stappler::StringView> const&


# ::stappler::db::QueryInterface::clear()

## BRIEF

Очищает запрос

## CONTENT

Доступ: public

Очищает запрос


# ::stappler::db::ResultCursor

## BRIEF

Курсор для чтения данных из БД

## CONTENT

Курсор для чтения данных из БД


# ::stappler::db::ResultCursor::~ResultCursor()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор


# ::stappler::db::ResultCursor::isBinaryFormat(size_t) const

## BRIEF

Проверяет, что поле использует бинарный формат

## CONTENT

Доступ: public

Проверяет, что поле использует бинарный формат

Параметры:
* size_t - индекс поля

Возвращает:
* bool

# ::stappler::db::ResultCursor::isNull(size_t) const

## BRIEF

Проверяет, что в поле в текущей строке записан NULL

## CONTENT

Доступ: public

Проверяет, что в поле в текущей строке записан NULL

Параметры:
* size_t - индекс поля

Возвращает:
* bool

# ::stappler::db::ResultCursor::toString(size_t) const

## BRIEF

Возвращает значение поля в текущей строке как текстовую строку

## CONTENT

Доступ: public

Возвращает значение поля в текущей строке как текстовую строку

Параметры:
* size_t - индекс поля

Возвращает:
* stappler::StringView

# ::stappler::db::ResultCursor::toBytes(size_t) const

## BRIEF

Возвращает значение поля в текущей строке как байтовую строку

## CONTENT

Доступ: public

Возвращает значение поля в текущей строке как байтовую строку

Параметры:
* size_t - индекс поля

Возвращает:
* stappler::BytesView

# ::stappler::db::ResultCursor::toInteger(size_t) const

## BRIEF

Возвращает значение поля в текущей строке как целое число

## CONTENT

Доступ: public

Возвращает значение поля в текущей строке как целое число

Параметры:
* size_t - индекс поля

Возвращает:
* int64_t

# ::stappler::db::ResultCursor::toDouble(size_t) const

## BRIEF

Возвращает значение поля в текущей строке как число с плавающей точкой

## CONTENT

Доступ: public

Возвращает значение поля в текущей строке как число с плавающей точкой

Параметры:
* size_t - индекс поля

Возвращает:
* double

# ::stappler::db::ResultCursor::toBool(size_t) const

## BRIEF

Возвращает значение поля в текущей строке как булево

## CONTENT

Доступ: public

Возвращает значение поля в текущей строке как булево

Параметры:
* size_t - индекс поля

Возвращает:
* bool

# ::stappler::db::ResultCursor::toTypedData(size_t) const

## BRIEF

Возвращает значение поля в текущей строке как данные со слабой типизацией

## CONTENT

Доступ: public

Возвращает значение поля в текущей строке как данные со слабой типизацией. Декодирует на основе типа поля.

Параметры:
* size_t - индекс поля

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::ResultCursor::toId() const

## BRIEF

Конвертирует текущую строку в единичный идентификатор, если возможно

## CONTENT

Доступ: public

Конвертирует текущую строку в единичный идентификатор, если возможно

Возвращает:
* int64_t

# ::stappler::db::ResultCursor::getFieldName(size_t) const

## BRIEF

Возвращает имя поля

## CONTENT

Доступ: public

Возвращает имя поля

Параметры:
* size_t - индекс поля

Возвращает:
* stappler::StringView

# ::stappler::db::ResultCursor::isSuccess() const

## BRIEF

Проверяет запрос на успешность

## CONTENT

Доступ: public

Проверяет запрос на успешность

Возвращает:
* bool

# ::stappler::db::ResultCursor::isEmpty() const

## BRIEF

Проверяет курсор на пустоту

## CONTENT

Доступ: public

Проверяет курсор на пустоту

Возвращает:
* bool

# ::stappler::db::ResultCursor::isEnded() const

## BRIEF

Проверяет курсор на завершённость

## CONTENT

Доступ: public

Проверяет курсор на завершённость

Возвращает:
* bool

# ::stappler::db::ResultCursor::getFieldsCount() const

## BRIEF

Возвращает число полей в строке

## CONTENT

Доступ: public

Возвращает число полей в строке

Возвращает:
* size_t

# ::stappler::db::ResultCursor::getAffectedRows() const

## BRIEF

Возвращает число изменённых командой строк

## CONTENT

Доступ: public

Возвращает число изменённых командой строк

Возвращает:
* size_t

# ::stappler::db::ResultCursor::getRowsHint() const

## BRIEF

Возвращает число строк в курсоре

## CONTENT

Доступ: public

Возвращает число строк в курсоре

Возвращает:
* size_t

# ::stappler::db::ResultCursor::getInfo() const

## BRIEF

Возвращет отладочные данные запроса

## CONTENT

Доступ: public

Возвращет отладочные данные запроса

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::ResultCursor::next()

## BRIEF

Переходит к следующей строке

## CONTENT

Доступ: public

Переходит к следующей строке

Возвращает:
* bool

# ::stappler::db::ResultCursor::reset()

## BRIEF

Перезагружает курсор с начала

## CONTENT

Доступ: public

Перезагружает курсор с начала

# ::stappler::db::ResultCursor::clear()

## BRIEF

Очищает курсор

## CONTENT

Доступ: public

Очищает курсор


# ::stappler::db::ResultRow

## BRIEF

Структуора строки результата

## CONTENT

Структуора строки результата


# ::stappler::db::ResultRow::ResultRow(db::ResultCursor const*,size_t)

## BRIEF

Создаёт строку из курсора и смещения внутри него

## CONTENT

Создаёт строку из курсора и смещения внутри него. Курсор может не поддерживать произвольный доступ, в таком случае доступно только смещение 0.

Параметры:
* db::ResultCursor const*
* size_t


# ::stappler::db::ResultRow::ResultRow(stappler::db::ResultRow const&)

## BRIEF

Конструктор копирования

## CONTENT

Конструктор копирования

Параметры:
* stappler::db::ResultRow const&


# ::stappler::db::ResultRow::operator=(stappler::db::ResultRow const&)

## BRIEF

Оператор копирования

## CONTENT

Оператор копирования

Параметры:
* stappler::db::ResultRow const&

Возвращает:
* stappler::db::ResultRow&

# ::stappler::db::ResultRow::size() const

## BRIEF

Возвращает число полей в строке

## CONTENT

Возвращает число полей в строке

Возвращает:
* size_t

# ::stappler::db::ResultRow::toData(db::Scheme const&,Map<stappler::mem_pool::String, db::Field> const&,Vector<const stappler::db::Field *> const&)

## BRIEF

Конвертирует строку в данные

## CONTENT

Конвертирует строку в данные

Параметры:
* db::Scheme const& - исходная схема
* Map<stappler::mem_pool::String, db::Field> const& - список полей для чтения
* Vector<const stappler::db::Field *> const& - список виртуальных полей для вычисления

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::ResultRow::front() const

## BRIEF

Возвращает строковое представление первого поля

## CONTENT

Возвращает строковое представление первого поля

Возвращает:
* stappler::StringView

# ::stappler::db::ResultRow::back() const

## BRIEF

Возвращает строковое представление последнего поля

## CONTENT

Возвращает строковое представление последнего поля

Возвращает:
* stappler::StringView

# ::stappler::db::ResultRow::isNull(size_t) const

## BRIEF

Проверяет поле на NULL

## CONTENT

Проверяет поле на NULL

Параметры:
* size_t - индекс поля

Возвращает:
* bool

# ::stappler::db::ResultRow::at(size_t) const

## BRIEF

Возвращает строковое представление поля

## CONTENT

Возвращает строковое представление поля

Параметры:
* size_t - индекс поля

Возвращает:
* stappler::StringView

# ::stappler::db::ResultRow::toString(size_t) const

## BRIEF

Возвращает строковое представление поля

## CONTENT

Возвращает строковое представление поля

Параметры:
* size_t - индекс поля

Возвращает:
* stappler::StringView

# ::stappler::db::ResultRow::toBytes(size_t) const

## BRIEF

Возвращает байтовое представление поля

## CONTENT

Возвращает байтовое представление поля

Параметры:
* size_t - индекс поля

Возвращает:
* stappler::BytesView

# ::stappler::db::ResultRow::toInteger(size_t) const

## BRIEF

Возвращает целочисленное представление поля

## CONTENT

Возвращает целочисленное представление поля

Параметры:
* size_t - индекс поля

Возвращает:
* int64_t

# ::stappler::db::ResultRow::toDouble(size_t) const

## BRIEF

Возвращает представление поля в виде числа с плавающей точкой

## CONTENT

Возвращает представление поля в виде числа с плавающей точкой

Параметры:
* size_t - индекс поля

Возвращает:
* double

# ::stappler::db::ResultRow::toBool(size_t) const

## BRIEF

Возвращает булево значение поля

## CONTENT

Возвращает булево значение поля

Параметры:
* size_t - индекс поля

Возвращает:
* bool

# ::stappler::db::ResultRow::toTypedData(size_t) const

## BRIEF

Возвращает значение поле на основании его типа в БД

## CONTENT

Возвращает значение поле на основании его типа в БД

Параметры:
* size_t - индекс поля

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::ResultRow::toData(size_t,db::Field const&)

## BRIEF

Возвращает значение поле

## CONTENT

Возвращает значение поле

Параметры:
* size_t - индекс поля
* db::Field const& - поле в схеме данных

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::ResultRow::result

## BRIEF

Курсор результата

## CONTENT

Курсор результата

Тип: db::ResultCursor const*


# ::stappler::db::ResultRow::row

## BRIEF

Номер строки

## CONTENT

Номер строки

Тип: size_t


# ::stappler::db::Result

## BRIEF

Структура результата запроса

## CONTENT

Структура результата запроса. Адаптер для чтения курсора.


# ::stappler::db::Result::Iter

## BRIEF

Итератор по результату

## CONTENT

Доступ: public

Итератор по результату. Курсор результата должен поддерживать произвольный доступ


# ::stappler::db::Result::Iter::Iter()

## BRIEF

Создаёт пустой итератор

## CONTENT

Создаёт пустой итератор


# ::stappler::db::Result::Iter::Iter(stappler::db::Result*,size_t)

## BRIEF

Создаёт итератор для результата и номера строки

## CONTENT

Создаёт итератор для результата и номера строки

Параметры:
* stappler::db::Result*
* size_t - номер строки


# ::stappler::db::Result::Iter::operator=(stappler::db::Result::Iter const&)

## BRIEF

Оператор копирования

## CONTENT

Оператор копирования

Параметры:
* stappler::db::Result::Iter const&

Возвращает:
* stappler::db::Result::Iter&

# ::stappler::db::Result::Iter::operator==(stappler::db::Result::Iter const&) const

## BRIEF

Оператор сравнения

## CONTENT

Оператор сравнения

Параметры:
* stappler::db::Result::Iter const&

Возвращает:
* bool

# ::stappler::db::Result::Iter::operator!=(stappler::db::Result::Iter const&) const

## BRIEF

Оператор сравнения

## CONTENT

Оператор сравнения

Параметры:
* stappler::db::Result::Iter const&

Возвращает:
* bool

# ::stappler::db::Result::Iter::operator<(stappler::db::Result::Iter const&) const

## BRIEF

Оператор сравнения

## CONTENT

Оператор сравнения

Параметры:
* stappler::db::Result::Iter const&

Возвращает:
* bool

# ::stappler::db::Result::Iter::operator>(stappler::db::Result::Iter const&) const

## BRIEF

Оператор сравнения

## CONTENT

Оператор сравнения

Параметры:
* stappler::db::Result::Iter const&

Возвращает:
* bool

# ::stappler::db::Result::Iter::operator<=(stappler::db::Result::Iter const&) const

## BRIEF

Оператор сравнения

## CONTENT

Оператор сравнения

Параметры:
* stappler::db::Result::Iter const&

Возвращает:
* bool

# ::stappler::db::Result::Iter::operator>=(stappler::db::Result::Iter const&) const

## BRIEF

Оператор сравнения

## CONTENT

Оператор сравнения

Параметры:
* stappler::db::Result::Iter const&

Возвращает:
* bool

# ::stappler::db::Result::Iter::operator++()

## BRIEF

Переходит к следующей строке

## CONTENT

Переходит к следующей строке

Возвращает:
* stappler::db::Result::Iter&

# ::stappler::db::Result::Iter::operator*() const

## BRIEF

Разыменовывает указатель, возвращает структуру строки

## CONTENT

Разыменовывает указатель, возвращает структуру строки

Возвращает:
* stappler::db::ResultRow

# ::stappler::db::Result::Iter::result

## BRIEF

Указатель на результат

## CONTENT

Тип: stappler::db::Result*

Указатель на результат


# ::stappler::db::Result::Iter::row

## BRIEF

Номер строки

## CONTENT

Номер строки

Тип: size_t


# ::stappler::db::Result::Result()

## BRIEF

Создаёт пустой результат

## CONTENT

Создаёт пустой результат

Доступ: public


# ::stappler::db::Result::Result(db::ResultCursor*)

## BRIEF

Создаёт результат из курсора

## CONTENT

Доступ: public

Создаёт результат из курсора

Параметры:
* db::ResultCursor*


# ::stappler::db::Result::~Result()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор


# ::stappler::db::Result::Result(stappler::db::Result const&)

## BRIEF

Запрет копирования

## CONTENT

Доступ: public

Запрет копирования

Параметры:
* stappler::db::Result const&


# ::stappler::db::Result::operator=(stappler::db::Result const&)

## BRIEF

Запрет копирования

## CONTENT

Доступ: public

Запрет копирования

Параметры:
* stappler::db::Result const&

Возвращает:
* stappler::db::Result&

# ::stappler::db::Result::Result(stappler::db::Result&&)

## BRIEF

Конструктор перемещения

## CONTENT

Доступ: public

Конструктор перемещения

Параметры:
* stappler::db::Result&&


# ::stappler::db::Result::operator=(stappler::db::Result&&)

## BRIEF

Оператор перемещения

## CONTENT

Доступ: public

Оператор перемещения

Параметры:
* stappler::db::Result&&

Возвращает:
* stappler::db::Result&

# ::stappler::db::Result::operator bool() const

## BRIEF

Проверяет запрос на успешность

## CONTENT

Доступ: public

Проверяет запрос на успешность

Возвращает:
* bool

# ::stappler::db::Result::success() const

## BRIEF

Проверяет запрос на успешность

## CONTENT

Доступ: public

Проверяет запрос на успешность

Возвращает:
* bool

# ::stappler::db::Result::info() const

## BRIEF

Возвращает отладочные данные запроса

## CONTENT

Доступ: public

Возвращает отладочные данные запроса

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Result::empty() const

## BRIEF

Проверяет результат на пустоту

## CONTENT

Доступ: public

Проверяет результат на пустоту

Возвращает:
* bool

# ::stappler::db::Result::nrows() const

## BRIEF

Возвращает число строк

## CONTENT

Доступ: public

Возвращает число строк

Возвращает:
* size_t

# ::stappler::db::Result::nfields() const

## BRIEF

Возвращает число полей в запросе

## CONTENT

Доступ: public

Возвращает число полей в запросе

Возвращает:
* size_t

# ::stappler::db::Result::getRowsHint() const

## BRIEF

Возвращает число строк

## CONTENT

Доступ: public

Возвращает число строк

Возвращает:
* size_t

# ::stappler::db::Result::getAffectedRows() const

## BRIEF

Возвращает число изменённых полей

## CONTENT

Доступ: public

Возвращает число изменённых полей

Возвращает:
* size_t

# ::stappler::db::Result::readId()

## BRIEF

Читает одиночный идентификатор из результата

## CONTENT

Доступ: public

Читает одиночный идентификатор из результата

Возвращает:
* int64_t

# ::stappler::db::Result::clear()

## BRIEF

Очищает результат

## CONTENT

Доступ: public

Очищает результат


# ::stappler::db::Result::begin()

## BRIEF

Возвращает итератор начала

## CONTENT

Доступ: public

Возвращает итератор начала. Курсор должен поддерживать произвольный доступ.

Возвращает:
* stappler::db::Result::Iter

# ::stappler::db::Result::end()

## BRIEF

Возвращает итератор конца

## CONTENT

Доступ: public

Возвращает итератор конца. Курсор должен поддерживать произвольный доступ.

Возвращает:
* stappler::db::Result::Iter

# ::stappler::db::Result::current() const

## BRIEF

Возвращает текущую строку в результате для курсора

## CONTENT

Доступ: public

Возвращает текущую строку в результате для курсора

Возвращает:
* stappler::db::ResultRow

# ::stappler::db::Result::next()

## BRIEF

Переключает итератор к следующей строке

## CONTENT

Доступ: public

Переключает итератор к следующей строке

Возвращает:
* bool

# ::stappler::db::Result::name(size_t) const

## BRIEF

Возвращает имя поля

## CONTENT

Доступ: public

Возвращает имя поля

Параметры:
* size_t - индекс поля

Возвращает:
* stappler::StringView

# ::stappler::db::Result::decode(db::Scheme const&,Vector<const stappler::db::Field *> const&)

## BRIEF

Декодирует результат на основе схемы данных

## CONTENT

Доступ: public

Декодирует результат на основе схемы данных

Параметры:
* db::Scheme const&
* Vector<const stappler::db::Field *> const& - список запрошенных виртуальных полей

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Result::decode(db::Field const&,Vector<const stappler::db::Field *> const&)

## BRIEF

Декодирует результат на основе поля данных

## CONTENT

Доступ: public

Декодирует результат на основе поля данных

Параметры:
* db::Field const&
* Vector<const stappler::db::Field *> const& - список запрошенных виртуальных полей

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Result::decode(db::FieldView const&)

## BRIEF

Декодирует результат на основе поля-отображения

## CONTENT

Доступ: public

Декодирует результат на основе поля-отображения

Параметры:
* db::FieldView const&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Result::_cursor

## BRIEF

Текущий курсор результата

## CONTENT

Доступ: protected

Текущий курсор результата

Тип: db::ResultCursor*


# ::stappler::db::Result::_row

## BRIEF

Текущий номер строки

## CONTENT

Доступ: protected

Текущий номер строки

Тип: size_t


# ::stappler::db::Result::_success

## BRIEF

Успешность результата

## CONTENT

Доступ: protected

Успешность результата

Тип: bool


# ::stappler::db::Result::_nfields

## BRIEF

Число полей в результате

## CONTENT

Доступ: protected

Число полей в результате

Тип: size_t


# ::stappler::db::Binder::FullTextField::field

## BRIEF

Целевое полнотекстовое поле

## CONTENT

Целевое полнотекстовое поле

Тип: stappler::db::Field const*


# ::stappler::db::Binder::FullTextFrom

## BRIEF

Вспомогательный тип для указания источника запроса как полнотекстового поля

## CONTENT

Доступ: public

Вспомогательный тип для указания источника запроса как полнотекстового поля


# ::stappler::db::Binder::FullTextFrom::scheme

## BRIEF

Исходная схема поля

## CONTENT

Исходная схема поля

Тип: stappler::StringView


# ::stappler::db::Binder::FullTextFrom::field

## BRIEF

Исходное поле

## CONTENT

Исходное поле

Тип: stappler::db::Field const*

# ::stappler::db::Binder::FullTextFrom::query

## BRIEF

Текстовый идентификатор запроса

## CONTENT

Текстовый идентификатор запроса

Тип: stappler::StringView

# ::stappler::db::Binder::FullTextQueryRef

## BRIEF

Вспомогательный тип ссылки на полнотекстовый запрос

## CONTENT

Доступ: public

Вспомогательный тип ссылки на полнотекстовый запрос

# ::stappler::db::Binder::FullTextQueryRef::scheme

## BRIEF

Исходная схема поля

## CONTENT

Исходная схема поля

Тип: stappler::StringView

# ::stappler::db::Binder::FullTextQueryRef::field

## BRIEF

Исходное поле

## CONTENT

Исходное поле

Тип: stappler::db::Field const*

# ::stappler::db::Binder::FullTextQueryRef::query

## BRIEF

Текстовый идентификатор запроса

## CONTENT

Текстовый идентификатор запроса

Тип: stappler::db::FullTextQuery const&

# ::stappler::db::Binder::writeBind(stappler::mem_pool::StringStream&,stappler::db::Binder::FullTextFrom const&)

## BRIEF

Связывает значение с запросом

## CONTENT

Доступ: public

Связывает значение с запросом

Параметры:
* stappler::mem_pool::StringStream&
* stappler::db::Binder::FullTextFrom const&

# ::stappler::db::Binder::writeBind(stappler::mem_pool::StringStream&,stappler::db::Binder::FullTextQueryRef const&)

## BRIEF

Связывает значение с запросом

## CONTENT

Доступ: public

Связывает значение с запросом

Параметры:
* stappler::mem_pool::StringStream&
* stappler::db::Binder::FullTextQueryRef const&

# ::stappler::db::Binder::writeBindArray(stappler::mem_pool::StringStream&,Vector<int64_t> const&)

## BRIEF

Связывает массив с запросом

## CONTENT

Доступ: public

Связывает массив с запросом

Параметры:
* stappler::mem_pool::StringStream&
* Vector<int64_t> const&

# ::stappler::db::Binder::writeBindArray(stappler::mem_pool::StringStream&,Vector<double> const&)

## BRIEF

Связывает массив с запросом

## CONTENT

Доступ: public

Связывает массив с запросом

Параметры:
* stappler::mem_pool::StringStream&
* Vector<double> const&

# ::stappler::db::Binder::writeBindArray(stappler::mem_pool::StringStream&,Vector<stappler::StringView> const&)

## BRIEF

Связывает массив с запросом

## CONTENT

Доступ: public

Связывает массив с запросом

Параметры:
* stappler::mem_pool::StringStream&
* Vector<stappler::StringView> const&

# ::stappler::db::Binder::writeBindArray(stappler::mem_pool::StringStream&,stappler::mem_pool::Value const&)

## BRIEF

Связывает массив с запросом

## CONTENT

Доступ: public

Связывает массив с запросом

Параметры:
* stappler::mem_pool::StringStream&
* stappler::mem_pool::Value const&

# ::stappler::db::QueryInterface::bindFullTextFrom(stappler::db::Binder&,stappler::mem_pool::StringStream&,Binder::FullTextFrom const&)

## BRIEF

Связывает полнотекстовый запрос с запросом

## CONTENT

Доступ: public

Связывает полнотекстовый запрос с запросом

Параметры:
* stappler::db::Binder&
* stappler::mem_pool::StringStream&
* Binder::FullTextFrom const&

# ::stappler::db::QueryInterface::bindFullTextQuery(stappler::db::Binder&,stappler::mem_pool::StringStream&,Binder::FullTextQueryRef const&)

## BRIEF

Связывает полнотекстовый запрос с запросом

## CONTENT

Доступ: public

Связывает полнотекстовый запрос с запросом

Параметры:
* stappler::db::Binder&
* stappler::mem_pool::StringStream&
* Binder::FullTextQueryRef const&

# ::stappler::db::ResultCursor::toCustomData(size_t,stappler::db::FieldCustom const*) const

## BRIEF

Получает данные из пользовательского поля

## CONTENT

Доступ: public

Получает данные из пользовательского поля

Параметры:
* size_t
* stappler::db::FieldCustom const*

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::ResultRow::encode() const

## BRIEF

Кодирует данные строки в нетипизированное значение

## CONTENT

Кодирует данные строки в нетипизированное значение

Возвращает:
* stappler::mem_pool::Value