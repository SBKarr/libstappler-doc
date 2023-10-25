Title: STStorageAdapter.h


# STAPPLER_DB_STSTORAGEADAPTER_H_

## BRIEF

Заголовок стандартного адаптера для операций с БД

## CONTENT

Заголовок стандартного адаптера для операций с БД. Адаптер не должен использоваться напрямую для операций со схемами, если необходим контроль доступа.


# ::stappler::db::Adapter

## BRIEF

Общий адаптер к БД

## CONTENT

Общий адаптер к БД

Базовые классы:
* AllocBase


# ::stappler::db::Adapter::FromContext()

## BRIEF

Получает адаптер из текущего контекста

## CONTENT

Доступ: public

Получает адаптер из текущего контекста, если есть

Возвращает:
* stappler::db::Adapter

# ::stappler::db::Adapter::Adapter(stappler::db::BackendInterface*)

## BRIEF

Инициализирует адаптер с интерфейсом к БД

## CONTENT

Доступ: public

Инициализирует адаптер с интерфейсом к БД

Параметры:
* stappler::db::BackendInterface*


# ::stappler::db::Adapter::Adapter(stappler::db::Adapter const&)

## BRIEF

Конструктор копирования

## CONTENT

Доступ: public

Конструктор копирования

Параметры:
* stappler::db::Adapter const&


# ::stappler::db::Adapter::operator=(stappler::db::Adapter const&)

## BRIEF

Оператор копирования

## CONTENT

Доступ: public

Оператор копирования

Параметры:
* stappler::db::Adapter const&

Возвращает:
* stappler::db::Adapter&

# ::stappler::db::Adapter::operator bool() const

## BRIEF

Проверяет, инициализирован ли адаптер

## CONTENT

Доступ: public

Проверяет, инициализирован ли адаптер

Возвращает:
* bool

# ::stappler::db::Adapter::operator==(stappler::db::Adapter const&) const

## BRIEF

Сравнивает, относятся ли адаптеры к одному интерфейсу

## CONTENT

Доступ: public

Сравнивает, относятся ли адаптеры к одному интерфейсу

Параметры:
* stappler::db::Adapter const&

Возвращает:
* bool

# ::stappler::db::Adapter::interface() const

## BRIEF

Возвращает интерфейс БД

## CONTENT

Доступ: public

Возвращает интерфейс БД

Возвращает:
* stappler::db::BackendInterface*

# ::stappler::db::Adapter::getTransactionKey() const

## BRIEF

Возвращает уникальный для адаптера ключ текущей транзакции

## CONTENT

Доступ: public

Возвращает уникальный для адаптера ключ текущей транзакции

Возвращает:
* stappler::mem_pool::String

# ::stappler::db::Adapter::set(stappler::CoderSource const&,stappler::mem_pool::Value const&,stappler::TimeInterval) const

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

# ::stappler::db::Adapter::get(stappler::CoderSource const&) const

## BRIEF

Возвращает объект по ключу

## CONTENT

Доступ: public

Возвращает объект по ключу из хранилища ключ-значение.

Параметры:
* stappler::CoderSource const& - ключ

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Adapter::clear(stappler::CoderSource const&) const

## BRIEF

Удаляет объект по ключу

## CONTENT

Доступ: public

Удаляет объект по ключу в хранилище ключ-значение

Параметры:
* stappler::CoderSource const&

Возвращает:
* bool

# ::stappler::db::Adapter::init(BackendInterface::Config const&,Map<stappler::StringView, const stappler::db::Scheme *> const&) const

## BRIEF

Инициализирует новую сессию приложения для конфигурации и схем данных

## CONTENT

Доступ: public

Инициализирует новую сессию приложения для конфигурации и схем данных

Параметры:
* BackendInterface::Config const&
* Map<stappler::StringView, const stappler::db::Scheme *> const&

Возвращает:
* bool - true если успешно

# ::stappler::db::Adapter::makeSessionsCleanup() const

## BRIEF

Принудительно очищает даные сессий и хранимых объектов

## CONTENT

Доступ: public

Принудительно очищает даные сессий и хранимых объектов


# ::stappler::db::Adapter::authorizeUser(stappler::db::Auth const&,stappler::StringView const&,stappler::StringView const&) const

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

# ::stappler::db::Adapter::broadcast(stappler::mem_pool::Bytes const&) const

## BRIEF

Отправляет широковещательное сообщение, если возможно

## CONTENT

Доступ: public

Отправляет широковещательное сообщение, если возможно

Параметры:
* stappler::mem_pool::Bytes const&


# ::stappler::db::Adapter::broadcast(stappler::mem_pool::Value const&) const

## BRIEF

Отправляет широковещательное сообщение, если возможно

## CONTENT

Доступ: public

Отправляет широковещательное сообщение, если возможно

Параметры:
* stappler::mem_pool::Value const&


# ::stappler::db::Adapter::broadcast(stappler::StringView,stappler::mem_pool::Value&&,bool) const

## BRIEF

Отправляет широковещательное сообщение, если возможно

## CONTENT

Доступ: public

Отправляет широковещательное сообщение, если возможно

Параметры:
* stappler::StringView - исходный url для сообщения
* stappler::mem_pool::Value&&
* bool - true если только подписанные на url могут получить сообщение


# ::stappler::db::Adapter::performWithTransaction(Callback<bool (const db::Transaction &)> const&) const

## BRIEF

Выполняет функцию в транзакции

## CONTENT

Доступ: public

Выполняет функцию в транзакции. Начинает транзакцию и завершает её, либо выполняет в уже существующей.

Параметры:
* Callback<bool (const db::Transaction &)> const&

Возвращает:
* bool - true если выполнено успешно и пользователь вернул true из функций

# ::stappler::db::Adapter::getReferenceParents(stappler::db::Scheme const&,uint64_t,stappler::db::Scheme const*,stappler::db::Field const*) const

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

# ::stappler::db::Adapter::getDatabaseName() const

## BRIEF

Возвращает имя активной БД

## CONTENT

Доступ: public

Возвращает имя активной БД

Возвращает:
* stappler::StringView

# ::stappler::db::Adapter::getDeltaValue(stappler::db::Scheme const&)

## BRIEF

Возвращает общее максимальное время изменения схемы, поддерживающей дельта-запросы

## CONTENT

Доступ: protected

Возвращает общее максимальное время изменения схемы, поддерживающей дельта-запросы

Параметры:
* stappler::db::Scheme const&

Возвращает:
* int64_t

# ::stappler::db::Adapter::getDeltaValue(stappler::db::Scheme const&,stappler::db::FieldView const&,uint64_t)

## BRIEF

Возвращает текущее значение дельты для поля отображения в схеме

## CONTENT

Доступ: protected

Возвращает текущее значение дельты для поля отображения в схеме

Параметры:
* stappler::db::Scheme const&
* stappler::db::FieldView const& - поле отображения
* uint64_t - идентификатор объекта отображения

Возвращает:
* int64_t

# ::stappler::db::Adapter::performQueryListForIds(stappler::db::QueryList const&,size_t) const

## BRIEF

Возвращает идентификаторы объектов для операций по иерархическому списку запросов

## CONTENT

Доступ: protected

Возвращает идентификаторы объектов для операций по иерархическому списку запросов

Параметры:
* stappler::db::QueryList const&
* size_t - число используемых запросов из списка

Возвращает:
* Vector<int64_t>

# ::stappler::db::Adapter::performQueryList(stappler::db::QueryList const&,size_t,bool) const

## BRIEF

Возвращает объекты для иерархического списка запросов

## CONTENT

Доступ: protected

Возвращает объекты для иерархического списка запросов

Параметры:
* stappler::db::QueryList const&
* size_t - число используемых запросов из списка
* bool - true - блокирует возвращаемые объекты до конца транзакции или до обновления из транзакции

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Adapter::foreach(stappler::db::Worker&,stappler::db::Query const&,Callback<bool (stappler::mem_pool::Value &)> const&) const

## BRIEF

Выполняет запрос, читая результат построчно

## CONTENT

Доступ: protected

Выполняет запрос, читая результат построчно

Параметры:
* stappler::db::Worker&
* stappler::db::Query const&
* Callback<bool (stappler::mem_pool::Value &)> const& - функция для построчного чтения

Возвращает:
* bool

# ::stappler::db::Adapter::select(stappler::db::Worker&,stappler::db::Query const&) const

## BRIEF

Выполняет запрос

## CONTENT

Доступ: protected

Выполняет запрос, возвращает результат

Параметры:
* stappler::db::Worker&
* stappler::db::Query const&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Adapter::create(stappler::db::Worker&,stappler::mem_pool::Value&) const

## BRIEF

Создаёт новый объект

## CONTENT

Доступ: protected

Создаёт новый объект

Параметры:
* stappler::db::Worker&
* stappler::mem_pool::Value&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Adapter::save(stappler::db::Worker&,uint64_t,stappler::mem_pool::Value const&,Vector<stappler::mem_pool::String> const&) const

## BRIEF

Сохраняет изменения в объекте

## CONTENT

Доступ: protected

Сохраняет изменения в объекте

Параметры:
* stappler::db::Worker&
* uint64_t
* stappler::mem_pool::Value const& - значение для сохранения
* Vector<stappler::mem_pool::String> const& - изменённые поля

Возвращает:
* stappler::mem_pool::Value - изменённый объект

# ::stappler::db::Adapter::patch(stappler::db::Worker&,uint64_t,stappler::mem_pool::Value const&) const

## BRIEF

Записывает изменения в объект

## CONTENT

Доступ: protected

Записывает изменения в объект

Параметры:
* stappler::db::Worker&
* uint64_t
* stappler::mem_pool::Value const& - изменения в объекте

Возвращает:
* stappler::mem_pool::Value - новые значения в объекте

# ::stappler::db::Adapter::remove(stappler::db::Worker&,uint64_t) const

## BRIEF

Удаляет объект

## CONTENT

Доступ: protected

Удаляет объект

Параметры:
* stappler::db::Worker&
* uint64_t

Возвращает:
* bool - true при успехе

# ::stappler::db::Adapter::count(stappler::db::Worker&,stappler::db::Query const&) const

## BRIEF

Посчитывает число объектов по запросу

## CONTENT

Доступ: protected

Посчитывает число объектов по запросу

Параметры:
* stappler::db::Worker&
* stappler::db::Query const&

Возвращает:
* size_t - число объектов

# ::stappler::db::Adapter::scheduleAutoField(stappler::db::Scheme const&,stappler::db::Field const&,uint64_t)

## BRIEF

Запускает отложенную функцию обновления автоматического поля

## CONTENT

Доступ: protected

Запускает отложенную функцию обновления автоматического поля

Параметры:
* stappler::db::Scheme const& - схема
* stappler::db::Field const& - автоматическое поле
* uint64_t - ид объекта


# ::stappler::db::Adapter::field(stappler::db::Action,stappler::db::Worker&,uint64_t,stappler::db::Field const&,stappler::mem_pool::Value&&) const

## BRIEF

Выполняет операцию над составным полем объекта

## CONTENT

Доступ: protected

Выполняет операцию над составным полем объекта

Параметры:
* stappler::db::Action- операция над полем
* stappler::db::Worker&
* uint64_t
* stappler::db::Field const& - поле
* stappler::mem_pool::Value&& - значение для операции

Возвращает:
* stappler::mem_pool::Value - текущее значение поля в объекте

# ::stappler::db::Adapter::field(stappler::db::Action,stappler::db::Worker&,stappler::mem_pool::Value const&,stappler::db::Field const&,stappler::mem_pool::Value&&) const

## BRIEF

Выполняет операцию над составным полем объекта

## CONTENT

Доступ: protected

Выполняет операцию над составным полем объекта

Параметры:
* stappler::db::Action - операция над полем
* stappler::db::Worker&
* stappler::mem_pool::Value const& - исходный объект
* stappler::db::Field const& - поле
* stappler::mem_pool::Value&& - значение для операции

Возвращает:
* stappler::mem_pool::Value - текущее значение поля в объекте

# ::stappler::db::Adapter::addToView(stappler::db::FieldView const&,stappler::db::Scheme const*,uint64_t,stappler::mem_pool::Value const&) const

## BRIEF

Добавляет объект в отображение

## CONTENT

Доступ: protected

Добавляет объект в отображение

Параметры:
* stappler::db::FieldView const& - поле отображения
* stappler::db::Scheme const*
* uint64_t - добавляемый объект
* stappler::mem_pool::Value const& - дополнительные данные поля

Возвращает:
* bool

# ::stappler::db::Adapter::removeFromView(stappler::db::FieldView const&,stappler::db::Scheme const*,uint64_t) const

## BRIEF

Удаляет объект из отображения

## CONTENT

Доступ: protected

Удаляет объект из отображения

Параметры:
* stappler::db::FieldView const& - поле отображения
* stappler::db::Scheme const*
* uint64_t - удаляемый объект

Возвращает:
* bool

# ::stappler::db::Adapter::beginTransaction() const

## BRIEF

Начинает новую транзакцию

## CONTENT

Доступ: protected

Начинает новую транзакцию

Возвращает:
* bool - true если успешно

# ::stappler::db::Adapter::endTransaction() const

## BRIEF

Завершает транакцию

## CONTENT

Доступ: protected

Завершает транакцию

Возвращает:
* bool - true если успешно

# ::stappler::db::Adapter::cancelTransaction() const

## BRIEF

Отменяет и откатывает транзакцию

## CONTENT

Доступ: protected

Отменяет и откатывает транзакцию


# ::stappler::db::Adapter::isInTransaction() const

## BRIEF

Проверяет, есть ли активная транзакция у адаптера

## CONTENT

Доступ: protected

Проверяет, есть ли активная транзакция у адаптера

Возвращает:
* bool

# ::stappler::db::Adapter::getTransactionStatus() const

## BRIEF

Возвращает статус транзакции

## CONTENT

Доступ: protected

Возвращает статус транзакции

Возвращает:
* stappler::db::TransactionStatus

# ::stappler::db::Adapter::runAutoFields(stappler::db::Transaction const&,Vector<uint64_t> const&,stappler::db::Scheme const&,stappler::db::Field const&)

## BRIEF

Запускает отложенное обновление автоматических полей

## CONTENT

Доступ: protected

Запускает отложенное обновление автоматических полей

Параметры:
* stappler::db::Transaction const&
* Vector<uint64_t> const& - список объектов для обновления
* stappler::db::Scheme const&
* stappler::db::Field const& - автоматическое поле для обновления


# ::stappler::db::Adapter::_interface

## BRIEF

Текущий интерфейс к БД

## CONTENT

Доступ: protected

Текущий интерфейс к БД

Тип: stappler::db::BackendInterface*
