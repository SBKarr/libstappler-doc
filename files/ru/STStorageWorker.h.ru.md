Title: STStorageWorker.h


# STAPPLER_DB_STSTORAGEWORKER_H_

## BRIEF

Заголовок структуры для обработки запросов к БД перед передачей в транзакцию

## CONTENT

Заголовок структуры для обработки запросов к БД перед передачей в транзакцию


# ::stappler::db::UpdateFlags

## BRIEF

Дополнительные флаги запроса

## CONTENT

Дополнительные флаги запроса

Значения:
* None
* Protected - запрос выполняется в защищённом режиме
* NoReturn - запрещает возвращать данные
* GetAll - получает все доступные поля в запросе
* GetForUpdate - получает данные для последующего обновления
* Cached - кеширует возвращаемые объекты в транзакции


# ::stappler::db::operator|(stappler::db::UpdateFlags const&,stappler::db::UpdateFlags const&)

## BRIEF

Автоматически созданный оператор битового флага

## CONTENT

Автоматически созданный оператор битового флага

Параметры:
* stappler::db::UpdateFlags const&
* stappler::db::UpdateFlags const&

Возвращает:
* stappler::db::UpdateFlags

# ::stappler::db::operator&(stappler::db::UpdateFlags const&,stappler::db::UpdateFlags const&)

## BRIEF

Автоматически созданный оператор битового флага

## CONTENT

Автоматически созданный оператор битового флага

Параметры:
* stappler::db::UpdateFlags const&
* stappler::db::UpdateFlags const&

Возвращает:
* stappler::db::UpdateFlags

# ::stappler::db::operator^(stappler::db::UpdateFlags const&,stappler::db::UpdateFlags const&)

## BRIEF

Автоматически созданный оператор битового флага

## CONTENT

Автоматически созданный оператор битового флага

Параметры:
* stappler::db::UpdateFlags const&
* stappler::db::UpdateFlags const&

Возвращает:
* stappler::db::UpdateFlags

# ::stappler::db::operator|=(stappler::db::UpdateFlags&,stappler::db::UpdateFlags const&)

## BRIEF

Автоматически созданный оператор битового флага

## CONTENT

Автоматически созданный оператор битового флага

Параметры:
* stappler::db::UpdateFlags&
* stappler::db::UpdateFlags const&

Возвращает:
* stappler::db::UpdateFlags&

# ::stappler::db::operator&=(stappler::db::UpdateFlags&,stappler::db::UpdateFlags const&)

## BRIEF

Автоматически созданный оператор битового флага

## CONTENT

Автоматически созданный оператор битового флага

Параметры:
* stappler::db::UpdateFlags&
* stappler::db::UpdateFlags const&

Возвращает:
* stappler::db::UpdateFlags&

# ::stappler::db::operator^=(stappler::db::UpdateFlags&,stappler::db::UpdateFlags const&)

## BRIEF

Автоматически созданный оператор битового флага

## CONTENT

Автоматически созданный оператор битового флага

Параметры:
* stappler::db::UpdateFlags&
* stappler::db::UpdateFlags const&

Возвращает:
* stappler::db::UpdateFlags&

# ::stappler::db::operator==(stappler::db::UpdateFlags const&,std::underlying_type<UpdateFlags>::type const&)

## BRIEF

Автоматически созданный оператор битового флага

## CONTENT

Автоматически созданный оператор битового флага

Параметры:
* stappler::db::UpdateFlags const&
* std::underlying_type<UpdateFlags>::type const&

Возвращает:
* bool

# ::stappler::db::operator==(std::underlying_type<UpdateFlags>::type const&,stappler::db::UpdateFlags const&)

## BRIEF

Автоматически созданный оператор битового флага

## CONTENT

Автоматически созданный оператор битового флага

Параметры:
* std::underlying_type<UpdateFlags>::type const&
* stappler::db::UpdateFlags const&

Возвращает:
* bool

# ::stappler::db::operator!=(stappler::db::UpdateFlags const&,std::underlying_type<UpdateFlags>::type const&)

## BRIEF

Автоматически созданный оператор битового флага

## CONTENT

Автоматически созданный оператор битового флага

Параметры:
* stappler::db::UpdateFlags const&
* std::underlying_type<UpdateFlags>::type const&

Возвращает:
* bool

# ::stappler::db::operator!=(std::underlying_type<UpdateFlags>::type const&,stappler::db::UpdateFlags const&)

## BRIEF

Автоматически созданный оператор битового флага

## CONTENT

Автоматически созданный оператор битового флага

Параметры:
* std::underlying_type<UpdateFlags>::type const&
* stappler::db::UpdateFlags const&

Возвращает:
* bool

# ::stappler::db::operator~(stappler::db::UpdateFlags const&)

## BRIEF

Автоматически созданный оператор битового флага

## CONTENT

Автоматически созданный оператор битового флага

Параметры:
* stappler::db::UpdateFlags const&

Возвращает:
* stappler::db::UpdateFlags

# ::stappler::db::Conflict

## BRIEF

Структура для разрещения конфликтов

## CONTENT

Структура для разрещения конфликтов


# ::stappler::db::Conflict::Flags

## BRIEF

Флаг действия

## CONTENT

Флаг действия

Значения:
* None
* DoNothing
* WithoutCondition


# ::stappler::db::Conflict::update(stappler::StringView)

## BRIEF

Создаёт структуру для разрешения конфликта поля через обновление данных

## CONTENT

Создаёт структуру для разрешения конфликта поля через обновление данных

Параметры:
* stappler::StringView

Возвращает:
* stappler::db::Conflict

# ::stappler::db::Conflict::field

## BRIEF

Поле конфликта

## CONTENT

Поле конфликта

Тип: stappler::mem_pool::String


# ::stappler::db::Conflict::condition

## BRIEF

Условие для возможности разрешения конфликта

## CONTENT

Условие для возможности разрешения конфликта

Тип: Query::Select


# ::stappler::db::Conflict::mask

## BRIEF

Маска полей, исключаемых из конфликта

## CONTENT

Маска полей, исключаемых из конфликта

Тип: Vector<stappler::mem_pool::String>


# ::stappler::db::Conflict::flags

## BRIEF

Флаг действия при конфликте

## CONTENT

Флаг действия при конфликте

Тип: stappler::db::Conflict::Flags


# ::stappler::db::Conflict::Conflict(Conflict::Flags)

## BRIEF

Конструирует структуру конфликта из флага

## CONTENT

Конструирует структуру конфликта из флага

Параметры:
* Conflict::Flags


# ::stappler::db::Conflict::Conflict(stappler::StringView,Query::Select&&,stappler::db::Conflict::Flags)

## BRIEF

Конструирует структуру конфликта для обновления при конфликте

## CONTENT

Конструирует структуру конфликта для обновления при конфликте

Параметры:
* stappler::StringView
* Query::Select&&
* stappler::db::Conflict::Flags


# ::stappler::db::Conflict::Conflict(stappler::StringView,Query::Select&&,Vector<stappler::mem_pool::String>&&)

## BRIEF

Конструирует структуру конфликта для обновления при конфликте

## CONTENT

Конструирует структуру конфликта для обновления при конфликте

Параметры:
* stappler::StringView
* Query::Select&&
* Vector<stappler::mem_pool::String>&&


# ::stappler::db::Conflict::setFlags(stappler::db::Conflict::Flags)

## BRIEF

Устанавливает флаг

## CONTENT

Устанавливает флаг

Параметры:
* stappler::db::Conflict::Flags

Возвращает:
* stappler::db::Conflict&

# ::stappler::db::operator|(Conflict::Flags const&,Conflict::Flags const&)

## BRIEF

Автоматически созданный оператор битового флага

## CONTENT

Автоматически созданный оператор битового флага

Параметры:
* Conflict::Flags const&
* Conflict::Flags const&

Возвращает:
* Conflict::Flags

# ::stappler::db::operator&(Conflict::Flags const&,Conflict::Flags const&)

## BRIEF

Автоматически созданный оператор битового флага

## CONTENT

Автоматически созданный оператор битового флага

Параметры:
* Conflict::Flags const&
* Conflict::Flags const&

Возвращает:
* Conflict::Flags

# ::stappler::db::operator^(Conflict::Flags const&,Conflict::Flags const&)

## BRIEF

Автоматически созданный оператор битового флага

## CONTENT

Автоматически созданный оператор битового флага

Параметры:
* Conflict::Flags const&
* Conflict::Flags const&

Возвращает:
* Conflict::Flags

# ::stappler::db::operator|=(Conflict::Flags&,Conflict::Flags const&)

## BRIEF

Автоматически созданный оператор битового флага

## CONTENT

Автоматически созданный оператор битового флага

Параметры:
* Conflict::Flags&
* Conflict::Flags const&

Возвращает:
* Conflict::Flags&

# ::stappler::db::operator&=(Conflict::Flags&,Conflict::Flags const&)

## BRIEF

Автоматически созданный оператор битового флага

## CONTENT

Автоматически созданный оператор битового флага

Параметры:
* Conflict::Flags&
* Conflict::Flags const&

Возвращает:
* Conflict::Flags&

# ::stappler::db::operator^=(Conflict::Flags&,Conflict::Flags const&)

## BRIEF

Автоматически созданный оператор битового флага

## CONTENT

Автоматически созданный оператор битового флага

Параметры:
* Conflict::Flags&
* Conflict::Flags const&

Возвращает:
* Conflict::Flags&

# ::stappler::db::operator==(Conflict::Flags const&,std::underlying_type<Conflict::Flags>::type const&)

## BRIEF

Автоматически созданный оператор битового флага

## CONTENT

Автоматически созданный оператор битового флага

Параметры:
* Conflict::Flags const&
* std::underlying_type<Conflict::Flags>::type const&

Возвращает:
* bool

# ::stappler::db::operator==(std::underlying_type<Conflict::Flags>::type const&,Conflict::Flags const&)

## BRIEF

Автоматически созданный оператор битового флага

## CONTENT

Автоматически созданный оператор битового флага

Параметры:
* std::underlying_type<Conflict::Flags>::type const&
* Conflict::Flags const&

Возвращает:
* bool

# ::stappler::db::operator!=(Conflict::Flags const&,std::underlying_type<Conflict::Flags>::type const&)

## BRIEF

Автоматически созданный оператор битового флага

## CONTENT

Автоматически созданный оператор битового флага

Параметры:
* Conflict::Flags const&
* std::underlying_type<Conflict::Flags>::type const&

Возвращает:
* bool

# ::stappler::db::operator!=(std::underlying_type<Conflict::Flags>::type const&,Conflict::Flags const&)

## BRIEF

Автоматически созданный оператор битового флага

## CONTENT

Автоматически созданный оператор битового флага

Параметры:
* std::underlying_type<Conflict::Flags>::type const&
* Conflict::Flags const&

Возвращает:
* bool

# ::stappler::db::operator~(Conflict::Flags const&)

## BRIEF

Автоматически созданный оператор битового флага

## CONTENT

Автоматически созданный оператор битового флага

Параметры:
* Conflict::Flags const&

Возвращает:
* Conflict::Flags

# ::stappler::db::Worker

## BRIEF

Стуктура для обработки запроса перед передачей в транзакцию

## CONTENT

Стуктура для обработки запроса перед передачей в транзакцию

Базовые классы:
* AllocBase


# ::stappler::db::Worker::FieldCallback

## BRIEF

Тип функции для перечисления полей схемы данных

## CONTENT

Доступ: public

Тип функции для перечисления полей схемы данных


# ::stappler::db::Worker::RequiredFields

## BRIEF

Структура требуемых к возврату полей

## CONTENT

Доступ: public

Структура требуемых к возврату полей


# ::stappler::db::Worker::RequiredFields::scheme

## BRIEF

Исходная схема данных

## CONTENT

Исходная схема данных

Тип: stappler::db::Scheme const*


# ::stappler::db::Worker::RequiredFields::includeFields

## BRIEF

Поля для включения

## CONTENT

Поля для включения

Тип: Vector<const stappler::db::Field *>


# ::stappler::db::Worker::RequiredFields::excludeFields

## BRIEF

Поля для исключения

## CONTENT

Поля для исключения

Тип: Vector<const stappler::db::Field *>


# ::stappler::db::Worker::RequiredFields::includeNone

## BRIEF

Флаг для отключения всякого возврата

## CONTENT

Флаг для отключения всякого возврата

Тип: bool


# ::stappler::db::Worker::RequiredFields::includeAll

## BRIEF

Флаг для включения всех полей в возврат

## CONTENT

Флаг для включения всех полей в возврат

Тип: bool


# ::stappler::db::Worker::RequiredFields::clear()

## BRIEF

Очищает структуру

## CONTENT

Очищает структуру


# ::stappler::db::Worker::RequiredFields::reset(stappler::db::Scheme const&)

## BRIEF

Очищает структуру и устанавливает схему

## CONTENT

Очищает структуру и устанавливает схему

Параметры:
* stappler::db::Scheme const&


# ::stappler::db::Worker::RequiredFields::include(std::initializer_list<StringView>)

## BRIEF

Включает поля для возврата

## CONTENT

Включает поля для возврата

Параметры:
* std::initializer_list<StringView>


# ::stappler::db::Worker::RequiredFields::include(Set<const stappler::db::Field *> const&)

## BRIEF

Включает поля для возврата

## CONTENT

Включает поля для возврата

Параметры:
* Set<const stappler::db::Field *> const&


# ::stappler::db::Worker::RequiredFields::include(stappler::StringView const&)

## BRIEF

Включает поля для возврата

## CONTENT

Включает поля для возврата

Параметры:
* stappler::StringView const&


# ::stappler::db::Worker::RequiredFields::include(stappler::db::Field const*)

## BRIEF

Включает поля для возврата

## CONTENT

Включает поля для возврата

Параметры:
* stappler::db::Field const*


# ::stappler::db::Worker::RequiredFields::exclude(std::initializer_list<StringView>)

## BRIEF

Исключает поля из возврата

## CONTENT

Исключает поля из возврата

Параметры:
* std::initializer_list<StringView>


# ::stappler::db::Worker::RequiredFields::exclude(Set<const stappler::db::Field *> const&)

## BRIEF

Исключает поля из возврата

## CONTENT

Исключает поля из возврата

Параметры:
* Set<const stappler::db::Field *> const&


# ::stappler::db::Worker::RequiredFields::exclude(stappler::StringView const&)

## BRIEF

Исключает поля из возврата

## CONTENT

Исключает поля из возврата

Параметры:
* stappler::StringView const&


# ::stappler::db::Worker::RequiredFields::exclude(stappler::db::Field const*)

## BRIEF

Исключает поля из возврата

## CONTENT

Исключает поля из возврата

Параметры:
* stappler::db::Field const*


# ::stappler::db::Worker::ConditionData

## BRIEF

Данные для условного оператора

## CONTENT

Доступ: public

Данные для условного оператора


# ::stappler::db::Worker::ConditionData::compare

## BRIEF

Оператор сравнения

## CONTENT

Оператор сравнения

Тип: stappler::db::Comparation


# ::stappler::db::Worker::ConditionData::value1

## BRIEF

Первое значение для сравнения

## CONTENT

Первое значение для сравнения

Тип: stappler::mem_pool::Value


# ::stappler::db::Worker::ConditionData::value2

## BRIEF

Второе значение для сравнения

## CONTENT

Второе значение для сравнения (для троичного оператора)

Тип: stappler::mem_pool::Value


# ::stappler::db::Worker::ConditionData::field

## BRIEF

Поле для сравнения

## CONTENT

Поле для сравнения

Тип: stappler::db::Field const*


# ::stappler::db::Worker::ConditionData::ConditionData()

## BRIEF

Конструктор по умолчанию

## CONTENT

Конструктор по умолчанию

# ::stappler::db::Worker::ConditionData::ConditionData(Query::Select const&,stappler::db::Field const*)

## BRIEF

Конструктор для поля

## CONTENT

Конструктор для поля

Параметры:
* Query::Select const&
* stappler::db::Field const*


# ::stappler::db::Worker::ConditionData::ConditionData(Query::Select&&,stappler::db::Field const*)

## BRIEF

Конструктор для поля

## CONTENT

Конструктор для поля

Параметры:
* Query::Select&&
* stappler::db::Field const*


# ::stappler::db::Worker::ConditionData::set(Query::Select&&,stappler::db::Field const*)

## BRIEF

Устанавливает запрос и поле

## CONTENT

Устанавливает запрос и поле

Параметры:
* Query::Select&&
* stappler::db::Field const*


# ::stappler::db::Worker::ConditionData::set(Query::Select const&,stappler::db::Field const*)

## BRIEF

Устанавливает запрос и поле

## CONTENT

Устанавливает запрос и поле

Параметры:
* Query::Select const&
* stappler::db::Field const*


# ::stappler::db::Worker::ConflictData

## BRIEF

Раскрытые данные для разрешения конфликта

## CONTENT

Раскрытые данные для разрешения конфликта

Доступ: public


# ::stappler::db::Worker::ConflictData::field

## BRIEF

Поле, по которому проходит конфликт

## CONTENT

Поле, по которому проходит конфликт

Тип: stappler::db::Field const*


# ::stappler::db::Worker::ConflictData::condition

## BRIEF

Условие для обновления данных при конфликте

## CONTENT

Условие для обновления данных при конфликте

Тип: stappler::db::Worker::ConditionData


# ::stappler::db::Worker::ConflictData::mask

## BRIEF

Список полей для исключения из обновления

## CONTENT

Список полей для исключения из обновления

Тип: Vector<const stappler::db::Field *>


# ::stappler::db::Worker::ConflictData::flags

## BRIEF

Флаг действия при конфликте

## CONTENT

Флаг действия при конфликте

Тип: Conflict::Flags


# ::stappler::db::Worker::ConflictData::isDoNothing() const

## BRIEF

Проверяет, предполагается ли ничего не делать при конфликте

## CONTENT

Проверяет, предполагается ли ничего не делать при конфликте

Возвращает:
* bool

# ::stappler::db::Worker::ConflictData::hasCondition() const

## BRIEF

Проверяет, есть ли условия для обновления

## CONTENT

Проверяет, есть ли условия для обновления

Возвращает:
* bool

# ::stappler::db::Worker::Worker(stappler::db::Scheme const&)

## BRIEF

Конструирует из схемы

## CONTENT

Доступ: public

Конструирует из схемы. Начинает транзакцию для текущего контекста.

Параметры:
* stappler::db::Scheme const&


# ::stappler::db::Worker::Worker(stappler::db::Scheme const&,stappler::db::Adapter const&)

## BRIEF

Конструирует из схемы и адаптера.

## CONTENT

Доступ: public

Конструирует из схемы и адаптера. Запрашивает текущую транзакцию у адаптера или начинает новую.

Доступ: public

Параметры:
* stappler::db::Scheme const&
* stappler::db::Adapter const&


# ::stappler::db::Worker::Worker(stappler::db::Scheme const&,stappler::db::Transaction const&)

## BRIEF

Конструирует из схемы и транзакции

## CONTENT

Доступ: public

Конструирует из схемы и транзакции

Параметры:
* stappler::db::Scheme const&
* stappler::db::Transaction const&


# ::stappler::db::Worker::Worker(stappler::db::Worker const&)

## BRIEF

Конструктор копирования

## CONTENT

Доступ: public

Конструктор копирования. Необходим для некоторых функций.

Параметры:
* stappler::db::Worker const&


# ::stappler::db::Worker::Worker(stappler::db::Worker&&)

## BRIEF

Запрет перемещения

## CONTENT

Доступ: public

Запрет перемещения

Параметры:
* stappler::db::Worker&&


# ::stappler::db::Worker::operator=(stappler::db::Worker&&)

## BRIEF

Запрет перемещения

## CONTENT

Доступ: public

Запрет перемещения

Параметры:
* stappler::db::Worker&&

Возвращает:
* stappler::db::Worker&

# ::stappler::db::Worker::operator=(stappler::db::Worker const&)

## BRIEF

Запрет оператора копирования

## CONTENT

Доступ: public

Запрет оператора копирования

Параметры:
* stappler::db::Worker const&

Возвращает:
* stappler::db::Worker&

# ::stappler::db::Worker::~Worker()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор


# ::stappler::db::Worker::perform<typename>(Callback const&) const

## BRIEF

Выполняет функцию в контексте транзакции

## CONTENT

Доступ: public

Выполняет функцию в контексте транзакции

Параметры шаблона:
* typename Callback

Параметры:
* Callback const&

Возвращает:
* bool

# ::stappler::db::Worker::transaction() const

## BRIEF

Возвращает транзакцию

## CONTENT

Доступ: public

Возвращает транзакцию

Возвращает:
* stappler::db::Transaction const&

# ::stappler::db::Worker::scheme() const

## BRIEF

Возвращает схему данных

## CONTENT

Доступ: public

Возвращает схему данных

Возвращает:
* stappler::db::Scheme const&

# ::stappler::db::Worker::includeNone()

## BRIEF

Запрещает запросу возвращать данные

## CONTENT

Доступ: public

Запрещает запросу возвращать данные


# ::stappler::db::Worker::include<typename>(T&&)

## BRIEF

Включает поле в возврат запроса

## CONTENT

Доступ: public

Включает поле в возврат запроса

Параметры шаблона:
* typename T

Параметры:
* T&&

Возвращает:
* stappler::db::Worker&

# ::stappler::db::Worker::exclude<typename>(T&&)

## BRIEF

Исключает поле из возврата запроса

## CONTENT

Доступ: public

Исключает поле из возврата запроса

Параметры шаблона:
* typename T

Параметры:
* T&&

Возвращает:
* stappler::db::Worker&

# ::stappler::db::Worker::clearRequiredFields()

## BRIEF

Очищает требуемые к возврату поля

## CONTENT

Очищает требуемые к возврату поля

Доступ: public


# ::stappler::db::Worker::shouldIncludeNone() const

## BRIEF

Проверяет, должен ли запрос не возвращать ничего

## CONTENT

Доступ: public

Проверяет, должен ли запрос не возвращать ничего

Возвращает:
* bool

# ::stappler::db::Worker::shouldIncludeAll() const

## BRIEF

Проверяет, должен ли запрос возвращать все доступные поля

## CONTENT

Доступ: public

Проверяет, должен ли запрос возвращать все доступные поля

Возвращает:
* bool

# ::stappler::db::Worker::asSystem()

## BRIEF

Помечает запрос для исполнения от имени системы

## CONTENT

Доступ: public

Помечает запрос для исполнения от имени системы

Возвращает:
* stappler::db::Worker&

# ::stappler::db::Worker::isSystem() const

## BRIEF

Проверяет, исполняется ли запрос от имени системы

## CONTENT

Доступ: public

Проверяет, исполняется ли запрос от имени системы

Возвращает:
* bool

# ::stappler::db::Worker::getRequiredFields() const

## BRIEF

Возвращает требуемые поля

## CONTENT

Доступ: public

Возвращает требуемые поля

Возвращает:
* stappler::db::Worker::RequiredFields const&

# ::stappler::db::Worker::getConflicts() const

## BRIEF

Возвращает правила разрешения конфликтов

## CONTENT

Доступ: public

Возвращает правила разрешения конфликтов

Возвращает:
* Map<const stappler::db::Field *, stappler::db::Worker::ConflictData> const&

# ::stappler::db::Worker::getConditions() const

## BRIEF

Возвращает данные условий для запроса

## CONTENT

Доступ: public

Возвращает данные условий для запроса

Возвращает:
* Vector<stappler::db::Worker::ConditionData> const&

# ::stappler::db::Worker::get(uint64_t,stappler::db::UpdateFlags)

## BRIEF

Выполняет запрос для получения объекта по идентификатору

## CONTENT

Доступ: public

Выполняет запрос для получения объекта по идентификатору

Параметры:
* uint64_t
* stappler::db::UpdateFlags

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Worker::get(stappler::StringView const&,stappler::db::UpdateFlags)

## BRIEF

Выполняет запрос для получения объекта по псевдониму

## CONTENT

Доступ: public

Выполняет запрос для получения объекта по псевдониму

Параметры:
* stappler::StringView const&
* stappler::db::UpdateFlags

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Worker::get(stappler::mem_pool::Value const&,stappler::db::UpdateFlags)

## BRIEF

Выполняет запрос для получения объекта по идентификатору или псевдониму

## CONTENT

Доступ: public

Выполняет запрос для получения объекта по идентификатору или псевдониму

Параметры:
* stappler::mem_pool::Value const&
* stappler::db::UpdateFlags

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Worker::get(uint64_t,stappler::StringView,stappler::db::UpdateFlags)

## BRIEF

Выполняет запрос для получения объекта по идентификатору

## CONTENT

Доступ: public

Выполняет запрос для получения объекта по идентификатору

Параметры:
* uint64_t
* stappler::StringView - поле для возврата
* stappler::db::UpdateFlags

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Worker::get(stappler::StringView const&,stappler::StringView,stappler::db::UpdateFlags)

## BRIEF

Выполняет запрос для получения объекта по псевдониму

## CONTENT

Доступ: public

Выполняет запрос для получения объекта по псевдониму

Параметры:
* stappler::StringView const&
* stappler::StringView - поле для возврата
* stappler::db::UpdateFlags

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Worker::get(stappler::mem_pool::Value const&,stappler::StringView,stappler::db::UpdateFlags)

## BRIEF

Выполняет запрос для получения объекта по идентификатору или псевдониму

## CONTENT

Доступ: public

Выполняет запрос для получения объекта по идентификатору или псевдониму

Параметры:
* stappler::mem_pool::Value const&
* stappler::StringView - поле для возврата
* stappler::db::UpdateFlags

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Worker::get(uint64_t,std::initializer_list<StringView>&&,stappler::db::UpdateFlags)

## BRIEF

Выполняет запрос для получения объекта по идентификатору

## CONTENT

Доступ: public

Выполняет запрос для получения объекта по идентификатору

Параметры:
* uint64_t
* std::initializer_list<StringView>&& - поля для возврата
* stappler::db::UpdateFlags

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Worker::get(stappler::StringView const&,std::initializer_list<StringView>&&,stappler::db::UpdateFlags)

## BRIEF

Выполняет запрос для получения объекта по псевдониму

## CONTENT

Доступ: public

Выполняет запрос для получения объекта по псевдониму

Параметры:
* stappler::StringView const&
* std::initializer_list<StringView>&& - поля для возврата
* stappler::db::UpdateFlags

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Worker::get(stappler::mem_pool::Value const&,std::initializer_list<StringView>&&,stappler::db::UpdateFlags)

## BRIEF

Выполняет запрос для получения объекта по идентификатору или псевдониму

## CONTENT

Доступ: public

Выполняет запрос для получения объекта по идентификатору или псевдониму

Параметры:
* stappler::mem_pool::Value const&
* std::initializer_list<StringView>&& - поля для возврата
* stappler::db::UpdateFlags

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Worker::get(uint64_t,std::initializer_list<const char *>&&,stappler::db::UpdateFlags)

## BRIEF

Выполняет запрос для получения объекта по идентификатору

## CONTENT

Доступ: public

Выполняет запрос для получения объекта по идентификатору

Параметры:
* uint64_t
* std::initializer_list<const char *>&& - поля для возврата
* stappler::db::UpdateFlags

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Worker::get(stappler::StringView const&,std::initializer_list<const char *>&&,stappler::db::UpdateFlags)

## BRIEF

Выполняет запрос для получения объекта по псевдониму

## CONTENT

Доступ: public

Выполняет запрос для получения объекта по псевдониму

Параметры:
* stappler::StringView const&
* std::initializer_list<const char *>&& - поля для возврата
* stappler::db::UpdateFlags

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Worker::get(stappler::mem_pool::Value const&,std::initializer_list<const char *>&&,stappler::db::UpdateFlags)

## BRIEF

Выполняет запрос для получения объекта по идентификатору или псевдониму

## CONTENT

Доступ: public

Выполняет запрос для получения объекта по идентификатору или псевдониму

Параметры:
* stappler::mem_pool::Value const&
* std::initializer_list<const char *>&& - поля для возврата
* stappler::db::UpdateFlags

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Worker::get(uint64_t,std::initializer_list<const Field *>&&,stappler::db::UpdateFlags)

## BRIEF

Выполняет запрос для получения объекта по идентификатору

## CONTENT

Доступ: public

Выполняет запрос для получения объекта по идентификатору

Параметры:
* uint64_t
* std::initializer_list<const Field *>&& - поля для возврата
* stappler::db::UpdateFlags

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Worker::get(stappler::StringView const&,std::initializer_list<const Field *>&&,stappler::db::UpdateFlags)

## BRIEF

Выполняет запрос для получения объекта по псевдониму

## CONTENT

Доступ: public

Выполняет запрос для получения объекта по псевдониму

Параметры:
* stappler::StringView const&
* std::initializer_list<const Field *>&& - поля для возврата
* stappler::db::UpdateFlags

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Worker::get(stappler::mem_pool::Value const&,std::initializer_list<const Field *>&&,stappler::db::UpdateFlags)

## BRIEF

Выполняет запрос для получения объекта по идентификатору или псевдониму

## CONTENT

Доступ: public

Выполняет запрос для получения объекта по идентификатору или псевдониму

Параметры:
* stappler::mem_pool::Value const&
* std::initializer_list<const Field *>&& - поля для возврата
* stappler::db::UpdateFlags

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Worker::get(uint64_t,SpanView<const stappler::db::Field *>,stappler::db::UpdateFlags)

## BRIEF

Выполняет запрос для получения объекта по идентификатору

## CONTENT

Доступ: public

Выполняет запрос для получения объекта по идентификатору

Параметры:
* uint64_t
* SpanView<const stappler::db::Field *> - поля для возврата
* stappler::db::UpdateFlags

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Worker::get(stappler::StringView const&,SpanView<const stappler::db::Field *>,stappler::db::UpdateFlags)

## BRIEF

Выполняет запрос для получения объекта по псевдониму

## CONTENT

Доступ: public

Выполняет запрос для получения объекта по псевдониму

Параметры:
* stappler::StringView const&
* SpanView<const stappler::db::Field *> - поля для возврата
* stappler::db::UpdateFlags

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Worker::get(stappler::mem_pool::Value const&,SpanView<const stappler::db::Field *>,stappler::db::UpdateFlags)

## BRIEF

Выполняет запрос для получения объекта по идентификатору или псевдониму

## CONTENT

Доступ: public

Выполняет запрос для получения объекта по идентификатору или псевдониму

Параметры:
* stappler::mem_pool::Value const&
* SpanView<const stappler::db::Field *> - поля для возврата
* stappler::db::UpdateFlags

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Worker::foreach(stappler::db::Query const&,Callback<bool (stappler::mem_pool::Value &)> const&,stappler::db::UpdateFlags)

## BRIEF

Выполняет запрос на обход объектов по запросу

## CONTENT

Доступ: public

Выполняет запрос на обход объектов по запросу

Параметры:
* stappler::db::Query const& - запрос
* Callback<bool (stappler::mem_pool::Value &)> const& - функция перечисления
* stappler::db::UpdateFlags

Возвращает:
* bool

# ::stappler::db::Worker::select(stappler::db::Query const&,stappler::db::UpdateFlags)

## BRIEF

Выполняет запрос для возврата данных

## CONTENT

Доступ: public

Выполняет запрос для возврата данных

Параметры:
* stappler::db::Query const&
* stappler::db::UpdateFlags

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Worker::create(stappler::mem_pool::Value const&,bool)

## BRIEF

Выполняет запрос на создание объекта

## CONTENT

Доступ: public

Выполняет запрос на создание объекта

Параметры:
* stappler::mem_pool::Value const&
* bool - true для защищунного окружения

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Worker::create(stappler::mem_pool::Value const&,stappler::db::UpdateFlags)

## BRIEF

Выполняет запрос на создание объекта

## CONTENT

Доступ: public

Выполняет запрос на создание объекта

Параметры:
* stappler::mem_pool::Value const&
* stappler::db::UpdateFlags

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Worker::create(stappler::mem_pool::Value const&,stappler::db::UpdateFlags,stappler::db::Conflict const&)

## BRIEF

Выполняет запрос на создание объекта

## CONTENT

Доступ: public

Выполняет запрос на создание объекта

Параметры:
* stappler::mem_pool::Value const&
* stappler::db::UpdateFlags
* stappler::db::Conflict const& - структура разрешения конфликтов

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Worker::create(stappler::mem_pool::Value const&,stappler::db::UpdateFlags,Vector<stappler::db::Conflict> const&)

## BRIEF

Выполняет запрос на создание объекта

## CONTENT

Доступ: public

Выполняет запрос на создание объекта

Параметры:
* stappler::mem_pool::Value const&
* stappler::db::UpdateFlags
* Vector<stappler::db::Conflict> const& - структуры разрешения конфликтов

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Worker::create(stappler::mem_pool::Value const&,Conflict::Flags)

## BRIEF

Выполняет запрос на создание объекта

## CONTENT

Доступ: public

Выполняет запрос на создание объекта

Параметры:
* stappler::mem_pool::Value const&
* Conflict::Flags - действие при разрешении конфликтов, позволяет указать только `DoNothing`

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Worker::create(stappler::mem_pool::Value const&,stappler::db::Conflict const&)

## BRIEF

Выполняет запрос на создание объекта

## CONTENT

Доступ: public

Выполняет запрос на создание объекта

Параметры:
* stappler::mem_pool::Value const&
* stappler::db::Conflict const& - структура разрешения конфликта

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Worker::create(stappler::mem_pool::Value const&,Vector<stappler::db::Conflict> const&)

## BRIEF

Выполняет запрос на создание объекта

## CONTENT

Доступ: public

Выполняет запрос на создание объекта

Параметры:
* stappler::mem_pool::Value const&
* Vector<stappler::db::Conflict> const& - структуры разрешения конфликта

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Worker::update(uint64_t,stappler::mem_pool::Value const&,bool)

## BRIEF

Выполняет запрос на изменение объекта

## CONTENT

Доступ: public

Выполняет запрос на изменение объекта

Параметры:
* uint64_t - ид объекта
* stappler::mem_pool::Value const&
* bool - true для безопасного окружения

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Worker::update(stappler::mem_pool::Value const&,stappler::mem_pool::Value const&,bool)

## BRIEF

Выполняет запрос на изменение объекта

## CONTENT

Доступ: public

Выполняет запрос на изменение объекта

Параметры:
* stappler::mem_pool::Value const& - исходный объект
* stappler::mem_pool::Value const& - данные для обновления
* bool - true для безопасного окружения

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Worker::update(uint64_t,stappler::mem_pool::Value const&,stappler::db::UpdateFlags)

## BRIEF

Выполняет запрос на изменение объекта

## CONTENT

Доступ: public

Выполняет запрос на изменение объекта

Параметры:
* uint64_t - ид объекта
* stappler::mem_pool::Value const& - данные для обновления
* stappler::db::UpdateFlags

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Worker::update(stappler::mem_pool::Value const&,stappler::mem_pool::Value const&,stappler::db::UpdateFlags)

## BRIEF

Выполняет запрос на изменение объекта

## CONTENT

Доступ: public

Выполняет запрос на изменение объекта

Параметры:
* stappler::mem_pool::Value const& - исходный объект
* stappler::mem_pool::Value const& - данные для обновления
* stappler::db::UpdateFlags

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Worker::update(uint64_t,stappler::mem_pool::Value const&,stappler::db::UpdateFlags,Query::Select const&)

## BRIEF

Выполняет запрос на изменение объекта

## CONTENT

Доступ: public

Выполняет запрос на изменение объекта

Параметры:
* uint64_t - ид объекта
* stappler::mem_pool::Value const&
* stappler::db::UpdateFlags - данные для обновления
* Query::Select const& - условный запрос для обновления

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Worker::update(stappler::mem_pool::Value const&,stappler::mem_pool::Value const&,stappler::db::UpdateFlags,Query::Select const&)

## BRIEF

Выполняет запрос на изменение объекта

## CONTENT

Доступ: public

Выполняет запрос на изменение объекта

Параметры:
* stappler::mem_pool::Value const& - исходный объект
* stappler::mem_pool::Value const& - данные для обновления
* stappler::db::UpdateFlags
* Query::Select const& - условный запрос для обновления

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Worker::update(uint64_t,stappler::mem_pool::Value const&,stappler::db::UpdateFlags,Vector<Query::Select> const&)

## BRIEF

Выполняет запрос на изменение объекта

## CONTENT

Доступ: public

Выполняет запрос на изменение объекта

Параметры:
* uint64_t - ид объекта
* stappler::mem_pool::Value const& - данные для обновления
* stappler::db::UpdateFlags
* Vector<Query::Select> const& - условные запросы для обновления

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Worker::update(stappler::mem_pool::Value const&,stappler::mem_pool::Value const&,stappler::db::UpdateFlags,Vector<Query::Select> const&)

## BRIEF

Выполняет запрос на изменение объекта

## CONTENT

Доступ: public

Выполняет запрос на изменение объекта

Параметры:
* stappler::mem_pool::Value const& - исходный объект
* stappler::mem_pool::Value const& - данные для обновления
* stappler::db::UpdateFlags
* Vector<Query::Select> const& - условные запросы для обновления

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Worker::update(uint64_t,stappler::mem_pool::Value const&,Query::Select const&)

## BRIEF

Выполняет запрос на изменение объекта

## CONTENT

Доступ: public

Выполняет запрос на изменение объекта

Параметры:
* uint64_t - ид объекта
* stappler::mem_pool::Value const& - данные для обновления
* Query::Select const& - условный запрос для обновления

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Worker::update(stappler::mem_pool::Value const&,stappler::mem_pool::Value const&,Query::Select const&)

## BRIEF

Выполняет запрос на изменение объекта

## CONTENT

Доступ: public

Выполняет запрос на изменение объекта

Параметры:
* stappler::mem_pool::Value const& - исходный объект
* stappler::mem_pool::Value const& - данные для обновления
* Query::Select const& - условный запрос для обновления

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Worker::update(uint64_t,stappler::mem_pool::Value const&,Vector<Query::Select> const&)

## BRIEF

Выполняет запрос на изменение объекта

## CONTENT

Доступ: public

Выполняет запрос на изменение объекта

Параметры:
* uint64_t - ид объекта
* stappler::mem_pool::Value const& - данные для обновления
* Vector<Query::Select> const& - условные запросы для обновления

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Worker::update(stappler::mem_pool::Value const&,stappler::mem_pool::Value const&,Vector<Query::Select> const&)

## BRIEF

Выполняет запрос на изменение объекта

## CONTENT

Доступ: public

Выполняет запрос на изменение объекта

Параметры:
* stappler::mem_pool::Value const& - исходный объект
* stappler::mem_pool::Value const& - данные для обновления
* Vector<Query::Select> const& - условные запросы для обновления

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Worker::remove(uint64_t)

## BRIEF

Выполняет запрос на удаление объекта

## CONTENT

Доступ: public

Выполняет запрос на удаление объекта

Параметры:
* uint64_t - ид объекта

Возвращает:
* bool - true если успешно

# ::stappler::db::Worker::remove(stappler::mem_pool::Value const&)

## BRIEF

Выполняет запрос на удаление объекта

## CONTENT

Доступ: public

Выполняет запрос на удаление объекта

Параметры:
* stappler::mem_pool::Value const& - исходный объект

Возвращает:
* bool - true если успешно

# ::stappler::db::Worker::count()

## BRIEF

Выполняет запрос на подсчёт числа объектов во всей схеме

## CONTENT

Доступ: public

Выполняет запрос на подсчёт числа объектов во всей схеме

Возвращает:
* size_t

# ::stappler::db::Worker::count(stappler::db::Query const&)

## BRIEF

Выполняет запрос на подсчёт числа объектов по запросу

## CONTENT

Доступ: public

Выполняет запрос на подсчёт числа объектов по запросу

Параметры:
* stappler::db::Query const&

Возвращает:
* size_t

# ::stappler::db::Worker::touch(uint64_t)

## BRIEF

Выполняет обновление времени жизни объекта

## CONTENT

Доступ: public

Выполняет обновление времени жизни объекта

Параметры:
* uint64_t - ид объекта


# ::stappler::db::Worker::touch(stappler::mem_pool::Value const&)

## BRIEF

Выполняет обновление времени жизни объекта

## CONTENT

Доступ: public

Выполняет обновление времени жизни объекта

Параметры:
* stappler::mem_pool::Value const& - исходный объект


# ::stappler::db::Worker::getField(uint64_t,stappler::StringView const&,std::initializer_list<StringView>)

## BRIEF

Получает поле объекта

## CONTENT

Доступ: public

Получает поле объекта

Параметры:
* uint64_t - ид объекта
* stappler::StringView const& - поле объекта
* std::initializer_list<StringView> - поля для возврата

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Worker::getField(stappler::mem_pool::Value const&,stappler::StringView const&,std::initializer_list<StringView>)

## BRIEF

Получает поле объекта

## CONTENT

Доступ: public

Получает поле объекта

Параметры:
* stappler::mem_pool::Value const& - исходный объект
* stappler::StringView const& - поле объекта
* std::initializer_list<StringView> - поля для возврата

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Worker::getField(uint64_t,stappler::StringView const&,Set<const stappler::db::Field *> const&)

## BRIEF

Получает поле объекта

## CONTENT

Доступ: public

Получает поле объекта

Параметры:
* uint64_t - ид объекта
* stappler::StringView const& - поле объекта
* Set<const stappler::db::Field *> const& - поля для возврата

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Worker::getField(stappler::mem_pool::Value const&,stappler::StringView const&,Set<const stappler::db::Field *> const&)

## BRIEF

Получает поле объекта

## CONTENT

Доступ: public

Получает поле объекта

Параметры:
* stappler::mem_pool::Value const& - исходный объект
* stappler::StringView const& - поле объекта
* Set<const stappler::db::Field *> const& - поля для возврата

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Worker::setField(uint64_t,stappler::StringView const&,stappler::mem_pool::Value&&)

## BRIEF

Устанавливет значение поля объекта

## CONTENT

Доступ: public

Устанавливет значение поля объекта

Параметры:
* uint64_t - ид объекта
* stappler::StringView const& - поле объекта
* stappler::mem_pool::Value&& - данные объекта

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Worker::setField(stappler::mem_pool::Value const&,stappler::StringView const&,stappler::mem_pool::Value&&)

## BRIEF

Устанавливет значение поля объекта

## CONTENT

Доступ: public

Устанавливет значение поля объекта

Параметры:
* stappler::mem_pool::Value const& - исходный объект
* stappler::StringView const& - поле объекта
* stappler::mem_pool::Value&& - данные объекта

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Worker::setField(uint64_t,stappler::StringView const&,stappler::db::InputFile&)

## BRIEF

Устанавливет значение поля объекта

## CONTENT

Доступ: public

Устанавливет значение поля объекта

Параметры:
* uint64_t - ид объекта
* stappler::StringView const& - поле объекта
* stappler::db::InputFile& - файл для поля

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Worker::setField(stappler::mem_pool::Value const&,stappler::StringView const&,stappler::db::InputFile&)

## BRIEF

Устанавливет значение поля объекта

## CONTENT

Доступ: public

Устанавливет значение поля объекта

Параметры:
* stappler::mem_pool::Value const& - исходный объект
* stappler::StringView const& - поле объекта
* stappler::db::InputFile& - файл для поля

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Worker::clearField(uint64_t,stappler::StringView const&,stappler::mem_pool::Value&&)

## BRIEF

Очищает поле объекта

## CONTENT

Доступ: public

Очищает поле объекта

Параметры:
* uint64_t - ид объекта
* stappler::StringView const&  -поле объекта
* stappler::mem_pool::Value&& - дополнительные данные

Возвращает:
* bool

# ::stappler::db::Worker::clearField(stappler::mem_pool::Value const&,stappler::StringView const&,stappler::mem_pool::Value&&)

## BRIEF

Очищает поле объекта

## CONTENT

Доступ: public

Очищает поле объекта

Параметры:
* stappler::mem_pool::Value const& - исходный объект
* stappler::StringView const&  -поле объекта
* stappler::mem_pool::Value&& - дополнительные данные

Возвращает:
* bool

# ::stappler::db::Worker::appendField(uint64_t,stappler::StringView const&,stappler::mem_pool::Value&&)

## BRIEF

Добавляет значение к полю объекта

## CONTENT

Доступ: public

Добавляет значение к полю объекта

Параметры:
* uint64_t - ид объекта
* stappler::StringView const& - поле объекта
* stappler::mem_pool::Value&& - данные для добавления

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Worker::appendField(stappler::mem_pool::Value const&,stappler::StringView const&,stappler::mem_pool::Value&&)

## BRIEF

Добавляет значение к полю объекта

## CONTENT

Доступ: public

Добавляет значение к полю объекта

Параметры:
* stappler::mem_pool::Value const& - исходный объект
* stappler::StringView const& - поле объекта
* stappler::mem_pool::Value&& - данные для добавления

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Worker::countField(uint64_t,stappler::StringView const&)

## BRIEF

Подсчитывает число объектов в поле объекта

## CONTENT

Доступ: public

Подсчитывает число объектов в поле объекта

Параметры:
* uint64_t - ид объекта
* stappler::StringView const& - поле объекта

Возвращает:
* size_t

# ::stappler::db::Worker::countField(stappler::mem_pool::Value const&,stappler::StringView const&)

## BRIEF

Подсчитывает число объектов в поле объекта

## CONTENT

Доступ: public

Подсчитывает число объектов в поле объекта

Параметры:
* stappler::mem_pool::Value const& - исходный объект
* stappler::StringView const& - поле объекта

Возвращает:
* size_t


# ::stappler::db::Worker::getField(uint64_t,stappler::db::Field const&,std::initializer_list<StringView>)

## BRIEF

Получает поле объекта

## CONTENT

Доступ: public

Получает поле объекта

Параметры:
* uint64_t - ид объекта
* stappler::db::Field const& - поле объекта
* std::initializer_list<StringView> - поля для возврата

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Worker::getField(stappler::mem_pool::Value const&,stappler::db::Field const&,std::initializer_list<StringView>)

## BRIEF

Получает поле объекта

## CONTENT

Доступ: public

Получает поле объекта

Параметры:
* stappler::mem_pool::Value const& - исходный объект
* stappler::db::Field const& - поле объекта
* std::initializer_list<StringView> - поля для возврата

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Worker::getField(uint64_t,stappler::db::Field const&,Set<const stappler::db::Field *> const&)

## BRIEF

Получает поле объекта

## CONTENT

Доступ: public

Получает поле объекта

Параметры:
* uint64_t - ид объекта
* stappler::db::Field const& - поле объекта
* Set<const stappler::db::Field *> const& - поля для возврата

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Worker::getField(stappler::mem_pool::Value const&,stappler::db::Field const&,Set<const stappler::db::Field *> const&)

## BRIEF

Получает поле объекта

## CONTENT

Доступ: public

Получает поле объекта

Параметры:
* stappler::mem_pool::Value const& - исходный объект
* stappler::db::Field const& - поле объекта
* Set<const stappler::db::Field *> const& - поля для возврата

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Worker::setField(uint64_t,stappler::db::Field const&,stappler::mem_pool::Value&&)

## BRIEF

Устанавливет значение поля объекта

## CONTENT

Доступ: public

Устанавливет значение поля объекта

Параметры:
* uint64_t - ид объекта
* stappler::db::Field const& - поле объекта
* stappler::mem_pool::Value&& - данные объекта

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Worker::setField(stappler::mem_pool::Value const&,stappler::db::Field const&,stappler::mem_pool::Value&&)

## BRIEF

Устанавливет значение поля объекта

## CONTENT

Доступ: public

Устанавливет значение поля объекта

Параметры:
* stappler::mem_pool::Value const& - исходный объект
* stappler::db::Field const& - поле объекта
* stappler::mem_pool::Value&& - данные объекта

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Worker::setField(uint64_t,stappler::db::Field const&,stappler::db::InputFile&)

## BRIEF

Устанавливет значение поля объекта

## CONTENT

Доступ: public

Устанавливет значение поля объекта

Параметры:
* uint64_t - ид объекта
* stappler::db::Field const& - поле объекта
* stappler::db::InputFile& - файл для поля

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Worker::setField(stappler::mem_pool::Value const&,stappler::db::Field const&,stappler::db::InputFile&)

## BRIEF

Устанавливет значение поля объекта

## CONTENT

Доступ: public

Устанавливет значение поля объекта

Параметры:
* stappler::mem_pool::Value const& - исходный объект
* stappler::db::Field const& - поле объекта
* stappler::db::InputFile& - файл для поля

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Worker::clearField(uint64_t,stappler::db::Field const&,stappler::mem_pool::Value&&)

## BRIEF

Очищает поле объекта

## CONTENT

Доступ: public

Очищает поле объекта

Параметры:
* uint64_t - ид объекта
* stappler::db::Field const&  -поле объекта
* stappler::mem_pool::Value&& - дополнительные данные

Возвращает:
* bool

# ::stappler::db::Worker::clearField(stappler::mem_pool::Value const&,stappler::db::Field const&,stappler::mem_pool::Value&&)

## BRIEF

Очищает поле объекта

## CONTENT

Доступ: public

Очищает поле объекта

Параметры:
* stappler::mem_pool::Value const& - исходный объект
* stappler::db::Field const&  -поле объекта
* stappler::mem_pool::Value&& - дополнительные данные

Возвращает:
* bool

# ::stappler::db::Worker::appendField(uint64_t,stappler::db::Field const&,stappler::mem_pool::Value&&)

## BRIEF

Добавляет значение к полю объекта

## CONTENT

Доступ: public

Добавляет значение к полю объекта

Параметры:
* uint64_t - ид объекта
* stappler::db::Field const& - поле объекта
* stappler::mem_pool::Value&& - данные для добавления

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Worker::appendField(stappler::mem_pool::Value const&,stappler::db::Field const&,stappler::mem_pool::Value&&)

## BRIEF

Добавляет значение к полю объекта

## CONTENT

Доступ: public

Добавляет значение к полю объекта

Параметры:
* stappler::mem_pool::Value const& - исходный объект
* stappler::db::Field const& - поле объекта
* stappler::mem_pool::Value&& - данные для добавления

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Worker::countField(uint64_t,stappler::db::Field const&)

## BRIEF

Подсчитывает число объектов в поле объекта

## CONTENT

Доступ: public

Подсчитывает число объектов в поле объекта

Параметры:
* uint64_t - ид объекта
* stappler::db::Field const& - поле объекта

Возвращает:
* size_t

# ::stappler::db::Worker::countField(stappler::mem_pool::Value const&,stappler::db::Field const&)

## BRIEF

Подсчитывает число объектов в поле объекта

## CONTENT

Доступ: public

Подсчитывает число объектов в поле объекта

Параметры:
* stappler::mem_pool::Value const& - исходный объект
* stappler::db::Field const& - поле объекта

Возвращает:
* size_t

# ::stappler::db::Worker::getFieldSet(stappler::db::Field const&,std::initializer_list<StringView>) const

## BRIEF

Возвращает список полей по списку их имён

## CONTENT

Доступ: protected

Возвращает список полей по списку их имён

Параметры:
* stappler::db::Field const&
* std::initializer_list<StringView>

Возвращает:
* Set<const stappler::db::Field *>

# ::stappler::db::Worker::addConflict(stappler::db::Conflict const&)

## BRIEF

Добавляет схему разрешения конфликта

## CONTENT

Доступ: protected

Добавляет схему разрешения конфликта

Параметры:
* stappler::db::Conflict const&

Возвращает:
* bool

# ::stappler::db::Worker::addConflict(Vector<stappler::db::Conflict> const&)

## BRIEF

Добавляет схему разрешения конфликта

## CONTENT

Доступ: protected

Добавляет схему разрешения конфликта

Параметры:
* Vector<stappler::db::Conflict> const&

Возвращает:
* bool

# ::stappler::db::Worker::addCondition(Query::Select const&)

## BRIEF

Добавляет дополнительное условие запроса

## CONTENT

Доступ: protected

Добавляет дополнительное условие запроса

Параметры:
* Query::Select const&

Возвращает:
* bool

# ::stappler::db::Worker::addCondition(Vector<Query::Select> const&)

## BRIEF

Добавляет дополнительное условие запроса

## CONTENT

Доступ: protected

Добавляет дополнительное условие запроса

Параметры:
* Vector<Query::Select> const&

Возвращает:
* bool

# ::stappler::db::Worker::reduceGetQuery(stappler::db::Query const&,bool)

## BRIEF

Возвращает единичный объект из запроса

## CONTENT

Доступ: protected

Возвращает единичный объект из запроса

Параметры:
* stappler::db::Query const&
* bool

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Worker::_conflict

## BRIEF

Список схем разрешения конфликта

## CONTENT

Доступ: protected

Список схем разрешения конфликта

Тип: Map<const stappler::db::Field *, stappler::db::Worker::ConflictData>


# ::stappler::db::Worker::_conditions

## BRIEF

Список дополнительных условий запроса

## CONTENT

Доступ: protected

Список дополнительных условий запроса

Тип: Vector<stappler::db::Worker::ConditionData>


# ::stappler::db::Worker::_required

## BRIEF

Список требуемых полей

## CONTENT

Доступ: protected

Список требуемых полей

Тип: stappler::db::Worker::RequiredFields


# ::stappler::db::Worker::_scheme

## BRIEF

Схема данных

## CONTENT

Доступ: protected

Схема данных

Тип: stappler::db::Scheme const*


# ::stappler::db::Worker::_transaction

## BRIEF

Действующая транзакция

## CONTENT

Доступ: protected

Действующая транзакция

Тип: stappler::db::Transaction


# ::stappler::db::Worker::_isSystem

## BRIEF

Флаг выполнения запроса от имени системы

## CONTENT

Доступ: protected

Флаг выполнения запроса от имени системы

Тип: bool


# ::stappler::db::FieldResolver

## BRIEF

Структура для разрешения требуемых полей

## CONTENT

Структура для разрешения требуемых полей


# ::stappler::db::FieldResolver::FieldResolver(stappler::db::Scheme const&,stappler::db::Worker const&,stappler::db::Query const&)

## BRIEF

Конструктор

## CONTENT

Конструктор

Параметры:
* stappler::db::Scheme const&
* stappler::db::Worker const&
* stappler::db::Query const&


# ::stappler::db::FieldResolver::FieldResolver(stappler::db::Scheme const&,stappler::db::Worker const&)

## BRIEF

Конструктор

## CONTENT

Конструктор

Параметры:
* stappler::db::Scheme const&
* stappler::db::Worker const&


# ::stappler::db::FieldResolver::FieldResolver(stappler::db::Scheme const&,stappler::db::Query const&)

## BRIEF

Конструктор

## CONTENT

Конструктор

Параметры:
* stappler::db::Scheme const&
* stappler::db::Query const&


# ::stappler::db::FieldResolver::FieldResolver(stappler::db::Scheme const&,stappler::db::Query const&,Set<const stappler::db::Field *> const&)

## BRIEF

Конструктор

## CONTENT

Конструктор

Параметры:
* stappler::db::Scheme const&
* stappler::db::Query const&
* Set<const stappler::db::Field *> const&


# ::stappler::db::FieldResolver::FieldResolver(stappler::db::Scheme const&)

## BRIEF

Конструктор

## CONTENT

Конструктор

Параметры:
* stappler::db::Scheme const&


# ::stappler::db::FieldResolver::FieldResolver(stappler::db::Scheme const&,Set<const stappler::db::Field *> const&)

## BRIEF

Конструктор

## CONTENT

Конструктор

Параметры:
* stappler::db::Scheme const&
* Set<const stappler::db::Field *> const&


# ::stappler::db::FieldResolver::shouldResolveFields() const

## BRIEF

Есть ли необходимость для разрешения полей

## CONTENT

Есть ли необходимость для разрешения полей

Возвращает:
* bool

# ::stappler::db::FieldResolver::hasIncludesOrExcludes() const

## BRIEF

Есть ли явно включённые или исключённые поля

## CONTENT

Есть ли явно включённые или исключённые поля

Возвращает:
* bool

# ::stappler::db::FieldResolver::shouldIncludeAll() const

## BRIEF

Нужно ли возвращать все доступные поля

## CONTENT

Нужно ли возвращать все доступные поля

Возвращает:
* bool

# ::stappler::db::FieldResolver::shouldIncludeField(stappler::db::Field const&) const

## BRIEF

Проверяет, нужно ли включать поле

## CONTENT

Проверяет, нужно ли включать поле

Параметры:
* stappler::db::Field const&

Возвращает:
* bool

# ::stappler::db::FieldResolver::shouldExcludeField(stappler::db::Field const&) const

## BRIEF

Проверяет, нужно ли исключать поле

## CONTENT

Проверяет, нужно ли исключать поле

Параметры:
* stappler::db::Field const&

Возвращает:
* bool

# ::stappler::db::FieldResolver::isFieldRequired(stappler::db::Field const&) const

## BRIEF

Проверяет, является ли поле требуемым для запроса

## CONTENT

Проверяет, является ли поле требуемым для запроса

Параметры:
* stappler::db::Field const&

Возвращает:
* bool

# ::stappler::db::FieldResolver::getVirtuals() const

## BRIEF

Возвращает требуемые виртуальные поля

## CONTENT

Возвращает требуемые виртуальные поля

Возвращает:
* Vector<const stappler::db::Field *>

# ::stappler::db::FieldResolver::readFields(Worker::FieldCallback const&,bool)

## BRIEF

Читает требуемые поля в функцию

## CONTENT

Читает требуемые поля в функцию

Параметры:
* Worker::FieldCallback const&
* bool

Возвращает:
* bool

# ::stappler::db::FieldResolver::include(stappler::StringView)

## BRIEF

Включает дополнительное поле

## CONTENT

Включает дополнительное поле

Параметры:
* stappler::StringView


# ::stappler::db::FieldResolver::scheme

## BRIEF

Схема данных

## CONTENT

Схема данных

Тип: stappler::db::Scheme const*


# ::stappler::db::FieldResolver::required

## BRIEF

Указатель на требуемые поля

## CONTENT

Указатель на требуемые поля

Тип: Worker::RequiredFields const*


# ::stappler::db::FieldResolver::query

## BRIEF

Запрос

## CONTENT

Запрос

Тип: stappler::db::Query const*


# ::stappler::db::FieldResolver::requiredFields

## BRIEF

Разрешённые требуемые поля

## CONTENT

Разрешённые требуемые поля

Тип: Vector<const stappler::db::Field *>
