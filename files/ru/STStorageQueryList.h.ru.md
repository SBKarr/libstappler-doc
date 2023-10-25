Title: STStorageQueryList.h


# STAPPLER_DB_STSTORAGEQUERYLIST_H_

## BRIEF

Заголовок иерархического списка запросов

## CONTENT

Заголовок иерархического списка запросов


# ::stappler::db::Action

## BRIEF

Действие для запроса к полю схемы данных

## CONTENT

Действие для запроса к полю схемы данных

Значения:
* Get
* Set
* Append
* Remove
* Count


# ::stappler::db::TransactionStatus

## BRIEF

Статус завершения транзакции

## CONTENT

Статус завершения транзакции

Значения:
* None
* Commit
* Rollback


# ::stappler::db::QueryFieldResolver

## BRIEF

Структура для раскрытия полей, возвращаемых в запросе

## CONTENT

Структура для раскрытия полей, возвращаемых в запросе.

Структура необходима для того, чтобы построить необходимые подзапросы для получения вложенных полей, и отфильтровать эти вложенные поля.

Структура формирует иерархию из таких структур для вложенных полей. Получить следующую структуру для поля можно с помощью вызова `next`.

Базовые классы:
* AllocBase


# ::stappler::db::QueryFieldResolver::Meta

## BRIEF

Тип метаданных

## CONTENT

Доступ: public

Тип метаданных

Значения:
* None
* Time - время события
* Action - тип события
* View - события отображения


# ::stappler::db::QueryFieldResolver::QueryFieldResolver()

## BRIEF

Конструктор по умолчанию

## CONTENT

Доступ: public

Конструктор по умолчанию


# ::stappler::db::QueryFieldResolver::QueryFieldResolver(stappler::db::Scheme const&,stappler::db::Query const&,Vector<stappler::mem_pool::String> const&)

## BRIEF

Конструирует схему раскрытия полей для запроса

## CONTENT

Доступ: public

Конструирует схему раскрытия полей для запроса

Параметры:
* stappler::db::Scheme const& - схема данных
* stappler::db::Query const& - запрос к схеме
* Vector<stappler::mem_pool::String> const& - дополниетльные поля для раскрытия


# ::stappler::db::QueryFieldResolver::getField(stappler::mem_pool::String const&) const

## BRIEF

Возвращает поле схемы по имени

## CONTENT

Доступ: public

Возвращает поле схемы по имени

Параметры:
* stappler::mem_pool::String const&

Возвращает:
* stappler::db::Field const*

# ::stappler::db::QueryFieldResolver::getScheme() const

## BRIEF

Возвращает схему данных

## CONTENT

Доступ: public

Возвращает схему данных

Возвращает:
* stappler::db::Scheme const*

# ::stappler::db::QueryFieldResolver::getFields() const

## BRIEF

Возвращает поля схемы данных

## CONTENT

Доступ: public

Возвращает поля схемы данных

Возвращает:
* Map<stappler::mem_pool::String, stappler::db::Field> const*

# ::stappler::db::QueryFieldResolver::getMeta() const

## BRIEF

Возвращает типы метаданных для раскрытия

## CONTENT

Доступ: public

Возвращает типы метаданных для раскрытия

Возвращает:
* stappler::db::QueryFieldResolver::Meta

# ::stappler::db::QueryFieldResolver::getResolves() const

## BRIEF

Возвращает поля для раскрытия на текущем уровне иерархии

## CONTENT

Доступ: public

Возвращает поля для раскрытия на текущем уровне иерархии

Возвращает:
* Set<const stappler::db::Field *> const&

# ::stappler::db::QueryFieldResolver::getResolvesData() const

## BRIEF

Возвращает имена полей с данными, созданных при раскрытии

## CONTENT

Доступ: public

Возвращает имена полей с данными, созданных при раскрытии

Возвращает:
* Set<stappler::StringView> const&

# ::stappler::db::QueryFieldResolver::getIncludeVec() const

## BRIEF

Возвращает список полей для включения в результат

## CONTENT

Доступ: public

Возвращает список полей для включения в результат

Возвращает:
* Query::FieldsVec const*

# ::stappler::db::QueryFieldResolver::getExcludeVec() const

## BRIEF

Возвращает список полей для исключения из результата

## CONTENT

Доступ: public

Возвращает список полей для исключения из результата

Возвращает:
* Query::FieldsVec const*

# ::stappler::db::QueryFieldResolver::next(stappler::StringView const&) const

## BRIEF

Возвращает следующую в иерархии структуру для раскрытия полей для поля по имени

## CONTENT

Доступ: public

Возвращает следующую в иерархии структуру для раскрытия полей для поля по имени

Параметры:
* stappler::StringView const&

Возвращает:
* stappler::db::QueryFieldResolver

# ::stappler::db::QueryFieldResolver::operator bool() const

## BRIEF

Проверяет поле на работоспособность

## CONTENT

Доступ: public

Проверяет поле на работоспособность

Возвращает:
* bool

# ::stappler::db::QueryFieldResolver::Data

## BRIEF

Структура блока данных

## CONTENT

Доступ: protected

Структура блока данных для раскрытия полей


# ::stappler::db::QueryFieldResolver::Data::scheme

## BRIEF

Схема данных

## CONTENT

Схема данных

Тип: stappler::db::Scheme const*


# ::stappler::db::QueryFieldResolver::Data::fields

## BRIEF

Поля схемы данных

## CONTENT

Поля схемы данных

Тип: Map<stappler::mem_pool::String, stappler::db::Field> const*


# ::stappler::db::QueryFieldResolver::Data::include

## BRIEF

Поля для включения

## CONTENT

Поля для включения

Тип: Query::FieldsVec const*


# ::stappler::db::QueryFieldResolver::Data::exclude

## BRIEF

Поля для исключения

## CONTENT

Поля для исключения

Тип: Query::FieldsVec const*


# ::stappler::db::QueryFieldResolver::Data::resolved

## BRIEF

Поля для раскрытия

## CONTENT

Поля для раскрытия

Тип: Set<const stappler::db::Field *>


# ::stappler::db::QueryFieldResolver::Data::resolvedData

## BRIEF

Имена раскрытых полей

## CONTENT

Имена раскрытых полей

Тип: Set<stappler::StringView>


# ::stappler::db::QueryFieldResolver::Data::next

## BRIEF

Набор следующих в иерархии структур для раскрытия полей

## CONTENT

Набор следующих в иерархии структур для раскрытия полей

Тип: Map<stappler::mem_pool::String, stappler::db::QueryFieldResolver::Data>


# ::stappler::db::QueryFieldResolver::Data::meta

## BRIEF

Метаданные для раскрытия

## CONTENT

Метаданные для раскрытия

Тип: stappler::db::QueryFieldResolver::Meta


# ::stappler::db::QueryFieldResolver::QueryFieldResolver(stappler::db::QueryFieldResolver::Data*)

## BRIEF

Создаёт следующую в иерархии структуру

## CONTENT

Доступ: protected

Создаёт следующую в иерархии структуру

Параметры:
* stappler::db::QueryFieldResolver::Data*


# ::stappler::db::QueryFieldResolver::doResolve(stappler::db::QueryFieldResolver::Data*,Vector<stappler::mem_pool::String> const&,uint16_t,uint16_t)

## BRIEF

Выполняет задачу по раскрытию

## CONTENT

Доступ: protected

Выполняет задачу по раскрытию

Параметры:
* stappler::db::QueryFieldResolver::Data* - данные для раскрытия
* Vector<stappler::mem_pool::String> const& - дополнительные поля
* uint16_t - глубина иерархии
* uint16_t - максимальная глубина иерархии


# ::stappler::db::QueryFieldResolver::doResolveData(stappler::db::QueryFieldResolver::Data*,uint16_t,uint16_t)

## BRIEF

Выполняет задачу по раскрытию

## CONTENT

Доступ: protected

Выполняет задачу по раскрытию

Параметры:
* stappler::db::QueryFieldResolver::Data* - данные для раскрытия
* uint16_t - глубина иерархии
* uint16_t - максимальная глубина иерархии


# ::stappler::db::QueryFieldResolver::root

## BRIEF

Исходные даные

## CONTENT

Доступ: protected

Исходные даные

Тип: stappler::db::QueryFieldResolver::Data*


# ::stappler::db::operator|(QueryFieldResolver::Meta const&,QueryFieldResolver::Meta const&)

## BRIEF

Автоматически созданный оператор битового флага

## CONTENT

Автоматически созданный оператор битового флага

Параметры:
* QueryFieldResolver::Meta const&
* QueryFieldResolver::Meta const&

Возвращает:
* QueryFieldResolver::Meta

# ::stappler::db::operator&(QueryFieldResolver::Meta const&,QueryFieldResolver::Meta const&)

## BRIEF

Автоматически созданный оператор битового флага

## CONTENT

Автоматически созданный оператор битового флага

Параметры:
* QueryFieldResolver::Meta const&
* QueryFieldResolver::Meta const&

Возвращает:
* QueryFieldResolver::Meta

# ::stappler::db::operator^(QueryFieldResolver::Meta const&,QueryFieldResolver::Meta const&)

## BRIEF

Автоматически созданный оператор битового флага

## CONTENT

Автоматически созданный оператор битового флага

Параметры:
* QueryFieldResolver::Meta const&
* QueryFieldResolver::Meta const&

Возвращает:
* QueryFieldResolver::Meta

# ::stappler::db::operator|=(QueryFieldResolver::Meta&,QueryFieldResolver::Meta const&)

## BRIEF

Автоматически созданный оператор битового флага

## CONTENT

Автоматически созданный оператор битового флага

Параметры:
* QueryFieldResolver::Meta&
* QueryFieldResolver::Meta const&

Возвращает:
* QueryFieldResolver::Meta&

# ::stappler::db::operator&=(QueryFieldResolver::Meta&,QueryFieldResolver::Meta const&)

## BRIEF

Автоматически созданный оператор битового флага

## CONTENT

Автоматически созданный оператор битового флага

Параметры:
* QueryFieldResolver::Meta&
* QueryFieldResolver::Meta const&

Возвращает:
* QueryFieldResolver::Meta&

# ::stappler::db::operator^=(QueryFieldResolver::Meta&,QueryFieldResolver::Meta const&)

## BRIEF

Автоматически созданный оператор битового флага

## CONTENT

Автоматически созданный оператор битового флага

Параметры:
* QueryFieldResolver::Meta&
* QueryFieldResolver::Meta const&

Возвращает:
* QueryFieldResolver::Meta&

# ::stappler::db::operator==(QueryFieldResolver::Meta const&,std::underlying_type<QueryFieldResolver::Meta>::type const&)

## BRIEF

Автоматически созданный оператор битового флага

## CONTENT

Автоматически созданный оператор битового флага

Параметры:
* QueryFieldResolver::Meta const&
* std::underlying_type<QueryFieldResolver::Meta>::type const&

Возвращает:
* bool

# ::stappler::db::operator==(std::underlying_type<QueryFieldResolver::Meta>::type const&,QueryFieldResolver::Meta const&)

## BRIEF

Автоматически созданный оператор битового флага

## CONTENT

Автоматически созданный оператор битового флага

Параметры:
* std::underlying_type<QueryFieldResolver::Meta>::type const&
* QueryFieldResolver::Meta const&

Возвращает:
* bool

# ::stappler::db::operator!=(QueryFieldResolver::Meta const&,std::underlying_type<QueryFieldResolver::Meta>::type const&)

## BRIEF

Автоматически созданный оператор битового флага

## CONTENT

Автоматически созданный оператор битового флага

Параметры:
* QueryFieldResolver::Meta const&
* std::underlying_type<QueryFieldResolver::Meta>::type const&

Возвращает:
* bool

# ::stappler::db::operator!=(std::underlying_type<QueryFieldResolver::Meta>::type const&,QueryFieldResolver::Meta const&)

## BRIEF

Автоматически созданный оператор битового флага

## CONTENT

Автоматически созданный оператор битового флага

Параметры:
* std::underlying_type<QueryFieldResolver::Meta>::type const&
* QueryFieldResolver::Meta const&

Возвращает:
* bool

# ::stappler::db::operator~(QueryFieldResolver::Meta const&)

## BRIEF

Автоматически созданный оператор битового флага

## CONTENT

Автоматически созданный оператор битового флага

Параметры:
* QueryFieldResolver::Meta const&

Возвращает:
* QueryFieldResolver::Meta

# ::stappler::db::FullTextData

## BRIEF

Псевдоним для полнотекстовых данных

## CONTENT

Псевдоним для полнотекстовых данных


# ::stappler::db::QueryList

## BRIEF

Иерархический список запросов

## CONTENT

Иерархический список запросов. Испольеуется для получения данных, когда следующий хзапрос основывается на результатах предыдущего.

Базовые классы:
* AllocBase


# ::stappler::db::QueryList::FieldCallback

## BRIEF

Функция для перечисления полей

## CONTENT

Доступ: public

Функция для перечисления полей


# ::stappler::db::QueryList::DefaultSoftLimit

## BRIEF

Число элементов по умолчанию на странице с мягким лимитом

## CONTENT

Доступ: public

Число элементов по умолчанию на странице с мягким лимитом

Тип: int64_t const


# ::stappler::db::QueryList::MinSoftLimit

## BRIEF

Минимальное число элементов на странице с мягким лимитом

## CONTENT

Доступ: public

Минимальное число элементов на странице с мягким лимитом

Тип: int64_t const


# ::stappler::db::QueryList::MaxSoftLimit

## BRIEF

Максимальное число элементов на странице с мягким лимитом

## CONTENT

Доступ: public

Максимальное число элементов на странице с мягким лимитом

Тип: int64_t const


# ::stappler::db::QueryList::Flags

## BRIEF

Дополнительные флаги для запроса

## CONTENT

Доступ: public

Дополнительные флаги для запроса

Значения:
* None
* SimpleGet


# ::stappler::db::QueryList::Item

## BRIEF

Отдельный запрос в списке

## CONTENT

Доступ: public

Отдельный запрос в списке

# ::stappler::db::QueryList::Item::scheme

## BRIEF

Схема данных запроса

## CONTENT

Схема данных запроса

Тип: stappler::db::Scheme const*


# ::stappler::db::QueryList::Item::ref

## BRIEF

Поле, по которому запрос связан с предыдущим

## CONTENT

Поле, по которому запрос связан с предыдущим

Тип: stappler::db::Field const*


# ::stappler::db::QueryList::Item::field

## BRIEF

Поле, к которому выполняется запрос

## CONTENT

Поле, к которому выполняется запрос

Тип: stappler::db::Field const*


# ::stappler::db::QueryList::Item::all

## BRIEF

Флаг, необходимо ли в запросе возвращать все поля

## CONTENT

Флаг, необходимо ли в запросе возвращать все поля

Тип: bool


# ::stappler::db::QueryList::Item::resolved

## BRIEF

Флаг, выполнено ли раскрытие полей

## CONTENT

Флаг, выполнено ли раскрытие полей

Тип: bool


# ::stappler::db::QueryList::Item::query

## BRIEF

Запрос к данным

## CONTENT

Запрос к данным

Тип: stappler::db::Query


# ::stappler::db::QueryList::Item::fields

## BRIEF

Структура для раскрытия полей

## CONTENT

Структура для раскрытия полей

Тип: stappler::db::QueryFieldResolver


# ::stappler::db::QueryList::Item::getQueryFields() const

## BRIEF

Возвращает список полей для раскрытия

## CONTENT

Возвращает список полей для раскрытия

Возвращает:
* Set<const stappler::db::Field *> const&

# ::stappler::db::QueryList::QueryList(stappler::db::Scheme const*)

## BRIEF

Конструирует новый список с исходной схемой данных

## CONTENT

Доступ: public

Конструирует новый список с исходной схемой данных

Параметры:
* stappler::db::Scheme const*


# ::stappler::db::QueryList::selectById(stappler::db::Scheme const*,uint64_t)

## BRIEF

Добавляет запрос по ид к последнему элементу в списке

## CONTENT

Доступ: public

Добавляет запрос по ид к последнему элементу в списке

Параметры:
* stappler::db::Scheme const*
* uint64_t

Возвращает:
* bool

# ::stappler::db::QueryList::selectByName(stappler::db::Scheme const*,stappler::StringView const&)

## BRIEF

Добавляет запрос по псевдониму к последнему элементу в списке

## CONTENT

Доступ: public

Добавляет запрос по псевдониму к последнему элементу в списке

Параметры:
* stappler::db::Scheme const*
* stappler::StringView const&

Возвращает:
* bool

# ::stappler::db::QueryList::selectByQuery(stappler::db::Scheme const*,Query::Select&&)

## BRIEF

Добавляет запрос к последнему элементу в списке

## CONTENT

Доступ: public

Добавляет запрос к последнему элементу в списке

Параметры:
* stappler::db::Scheme const*
* Query::Select&&

Возвращает:
* bool

# ::stappler::db::QueryList::order(stappler::db::Scheme const*,stappler::StringView const&,db::Ordering)

## BRIEF

Добавляет упорядочивание к последнему элементу в списке

## CONTENT

Доступ: public

Добавляет упорядочивание к последнему элементу в списке

Параметры:
* stappler::db::Scheme const*
* stappler::StringView const& - поле для упорядочивания
* db::Ordering - порядок

Возвращает:
* bool

# ::stappler::db::QueryList::first(stappler::db::Scheme const*,stappler::StringView const&,size_t)

## BRIEF

Добавляет упорядочивание и возврат первых полей к последнему элементу в списке

## CONTENT

Доступ: public

Добавляет упорядочивание и возврат первых полей к последнему элементу в списке

Параметры:
* stappler::db::Scheme const*
* stappler::StringView const& - поле для упорядочивания
* size_t - число первых полей

Возвращает:
* bool

# ::stappler::db::QueryList::last(stappler::db::Scheme const*,stappler::StringView const&,size_t)

## BRIEF

Добавляет упорядочивание и возврат последних полей к последнему элементу в списке

## CONTENT

Доступ: public

Добавляет упорядочивание и возврат последних полей к последнему элементу в списке

Параметры:
* stappler::db::Scheme const*
* stappler::StringView const& - поле для упорядочивания
* size_t - число первых полей

Возвращает:
* bool

# ::stappler::db::QueryList::limit(stappler::db::Scheme const*,size_t)

## BRIEF

Добавляет предел к последнему элементу в списке

## CONTENT

Доступ: public

Добавляет предел к последнему элементу в списке

Параметры:
* stappler::db::Scheme const*
* size_t

Возвращает:
* bool

# ::stappler::db::QueryList::offset(stappler::db::Scheme const*,size_t)

## BRIEF

Добавляет смещение к последнему элементу в списке

## CONTENT

Доступ: public

Добавляет смещение к последнему элементу в списке

Параметры:
* stappler::db::Scheme const*
* size_t

Возвращает:
* bool

# ::stappler::db::QueryList::setFullTextQuery(stappler::db::Field const*,Vector<stappler::db::FullTextData>&&)

## BRIEF

Добавляет полнотекстовый запрос к последнему элементу в списке

## CONTENT

Доступ: public

Добавляет полнотекстовый запрос к последнему элементу в списке

Параметры:
* stappler::db::Field const*
* Vector<stappler::db::FullTextData>&&

Возвращает:
* bool

# ::stappler::db::QueryList::setAll()

## BRIEF

Устанавливает возврат всех полей для послежнего элемента в списке

## CONTENT

Доступ: public

Устанавливает возврат всех полей для послежнего элемента в списке

Возвращает:
* bool

# ::stappler::db::QueryList::setField(stappler::db::Scheme const*,stappler::db::Field const*)

## BRIEF

Добавляет новый элемент в список, связанный по указанному полю

## CONTENT

Доступ: public

Добавляет новый элемент в список, связанный по указанному полю

Параметры:
* stappler::db::Scheme const*
* stappler::db::Field const*

Возвращает:
* bool

# ::stappler::db::QueryList::setProperty(stappler::db::Field const*)

## BRIEF

Добавляет поле возврата для включения в последний запрос

## CONTENT

Доступ: public

Добавляет поле возврата для включения в последний запрос

Параметры:
* stappler::db::Field const*

Возвращает:
* bool

# ::stappler::db::QueryList::setQueryAsMtime()

## BRIEF

Изменяет последний запрос в списке так, чтобы он возвращал последнее время изменения

## CONTENT

Доступ: public

Изменяет последний запрос в списке так, чтобы он возвращал последнее время изменения на основании `Flags::AutoMTime`. Возвращает имя такого поля, если выполнено успешно.

Возвращает:
* stappler::StringView

# ::stappler::db::QueryList::clearFlags()

## BRIEF

Убирает флаги запроса

## CONTENT

Доступ: public

Убирает флаги запроса


# ::stappler::db::QueryList::addFlag(stappler::db::QueryList::Flags)

## BRIEF

Добавляет флаг запроса

## CONTENT

Доступ: public

Добавляет флаг запроса

Параметры:
* stappler::db::QueryList::Flags


# ::stappler::db::QueryList::hasFlag(stappler::db::QueryList::Flags) const

## BRIEF

Проверяет флаг на наличие

## CONTENT

Доступ: public

Проверяет флаг на наличие

Параметры:
* stappler::db::QueryList::Flags

Возвращает:
* bool

# ::stappler::db::QueryList::isAll() const

## BRIEF

Проверяет, запрошены ли все поля последней схемы

## CONTENT

Доступ: public

Проверяет, запрошены ли все поля последней схемы

Возвращает:
* bool

# ::stappler::db::QueryList::isRefSet() const

## BRIEF

Проверяет, является ли последний запрос запросом к полю-ссылке

## CONTENT

Доступ: public

Проверяет, является ли последний запрос запросом к полю-ссылке

Возвращает:
* bool

# ::stappler::db::QueryList::isObject() const

## BRIEF

Проверяет, возвращает ли список запросов одиночный объект

## CONTENT

Доступ: public

Проверяет, возвращает ли список запросов одиночный объект

Возвращает:
* bool

# ::stappler::db::QueryList::isView() const

## BRIEF

Проверяет, запрашивает ли последний запрос поле-отображение

## CONTENT

Доступ: public

Проверяет, запрашивает ли последний запрос поле-отображение

Возвращает:
* bool

# ::stappler::db::QueryList::empty() const

## BRIEF

Проверяет список на пустоту

## CONTENT

Доступ: public

Проверяет список на пустоту

Возвращает:
* bool

# ::stappler::db::QueryList::isDeltaApplicable() const

## BRIEF

Проверяет, возможно ли добавить дельта-запрос к последнему элементу

## CONTENT

Доступ: public

Проверяет, возможно ли добавить дельта-запрос к последнему элементу

Возвращает:
* bool

# ::stappler::db::QueryList::apply(stappler::mem_pool::Value const&)

## BRIEF

Добавляет к запросу данные из описания запроса

## CONTENT

Доступ: public

Добавляет к запросу данные из описания запроса. Данные должны содержать словарь, который может содержать:
* select - запрос фильтрации
* order/last/first - запрос упорядочивания
* limit - максимальное число возвращаемых объектов
* offset - смещение
* fields/include - поля для включения
* exclude - поля для выключения
* delta - дельта-запрос
* forUpdate
* continue/begin - токен для продолжения, мягкий лимит

Параметры:
* stappler::mem_pool::Value const&

Возвращает:
* bool

# ::stappler::db::QueryList::resolve(Vector<stappler::mem_pool::String> const&)

## BRIEF

Раскрывает поля для запроса

## CONTENT

Доступ: public

Раскрывает поля для запроса

Параметры:
* Vector<stappler::mem_pool::String> const& - дополнительные раскрываемые поля


# ::stappler::db::QueryList::getResolveDepth() const

## BRIEF

Возвращает глубину раскрытия полей

## CONTENT

Доступ: public

Возвращает глубину раскрытия полей

Возвращает:
* uint16_t

# ::stappler::db::QueryList::setResolveDepth(uint16_t)

## BRIEF

Устанавливает глубину раскрытия полей

## CONTENT

Доступ: public

Устанавливает глубину раскрытия полей

Параметры:
* uint16_t


# ::stappler::db::QueryList::setDelta(stappler::Time)

## BRIEF

Добавляет дельта-запрос к последнему элементу

## CONTENT

Доступ: public

Добавляет дельта-запрос к последнему элементу

Параметры:
* stappler::Time


# ::stappler::db::QueryList::getDelta() const

## BRIEF

Возвращает дельта-запрос последнего элемента

## CONTENT

Доступ: public

Возвращает дельта-запрос последнего элемента

Возвращает:
* stappler::Time

# ::stappler::db::QueryList::size() const

## BRIEF

Возвращает число элементов в списке

## CONTENT

Доступ: public

Возвращает число элементов в списке

Возвращает:
* size_t

# ::stappler::db::QueryList::getPrimaryScheme() const

## BRIEF

Возвращает основную схему запросов в списке

## CONTENT

Доступ: public

Возвращает основную схему запросов в списке (схему первого запроса)

Возвращает:
* stappler::db::Scheme const*

# ::stappler::db::QueryList::getSourceScheme() const

## BRIEF

Возвращает схему источника для последнего запроса

## CONTENT

Доступ: public

Возвращает схему источника для последнего запроса (то есть, схему предпоследнего запроса)

Возвращает:
* stappler::db::Scheme const*

# ::stappler::db::QueryList::getScheme() const

## BRIEF

Возвращает схему последнего запроса

## CONTENT

Доступ: public

Возвращает схему последнего запроса

Возвращает:
* stappler::db::Scheme const*

# ::stappler::db::QueryList::getField() const

## BRIEF

Возвращает поле, если последний запрос адресован полю

## CONTENT

Доступ: public

Возвращает поле, если последний запрос адресован полю

Возвращает:
* stappler::db::Field const*

# ::stappler::db::QueryList::getTopQuery() const

## BRIEF

Возвращает структуру последнего запроса

## CONTENT

Доступ: public

Возвращает структуру последнего запроса

Возвращает:
* stappler::db::Query const&

# ::stappler::db::QueryList::getItems() const

## BRIEF

Возвращает список запросов

## CONTENT

Доступ: public

Возвращает список запросов

Возвращает:
* Vector<stappler::db::QueryList::Item> const&

# ::stappler::db::QueryList::getIncludeFields() const

## BRIEF

Возвращает поля для включения в последнем запросе

## CONTENT

Доступ: public

Возвращает поля для включения в последнем запросе

Возвращает:
* Query::FieldsVec const&

# ::stappler::db::QueryList::getExcludeFields() const

## BRIEF

Возвращает поля для исключения из последнего запроса

## CONTENT

Доступ: public

Возвращает поля для исключения из последнего запроса

Возвращает:
* Query::FieldsVec const&

# ::stappler::db::QueryList::getFields() const

## BRIEF

Возвращает структуру для раскрытия полей последнего запроса

## CONTENT

Доступ: public

Возвращает структуру для раскрытия полей последнего запроса

Возвращает:
* stappler::db::QueryFieldResolver

# ::stappler::db::QueryList::getExtraData() const

## BRIEF

Возвращает дополнительные данные запроса

## CONTENT

Доступ: public

Возвращает дополнительные данные запроса

Возвращает:
* stappler::mem_pool::Value const&

# ::stappler::db::QueryList::getContinueToken() const

## BRIEF

Возвращает токен продолжения, если установлен

## CONTENT

Доступ: public

Возвращает токен продолжения, если установлен

Возвращает:
* stappler::db::ContinueToken&

# ::stappler::db::QueryList::decodeSelect(stappler::db::Scheme const&,stappler::db::Query&,stappler::mem_pool::Value const&)

## BRIEF

Декодирует запрос из дополнительных данных

## CONTENT

Доступ: protected

Декодирует запрос из дополнительных данных

Параметры:
* stappler::db::Scheme const&
* stappler::db::Query&
* stappler::mem_pool::Value const&


# ::stappler::db::QueryList::decodeOrder(stappler::db::Scheme const&,stappler::db::Query&,stappler::mem_pool::String const&,stappler::mem_pool::Value const&)

## BRIEF

Декодирует упорядочивание из дополнительных данных

## CONTENT

Доступ: protected

Декодирует упорядочивание из дополнительных данных

Параметры:
* stappler::db::Scheme const&
* stappler::db::Query&
* stappler::mem_pool::String const&
* stappler::mem_pool::Value const&


# ::stappler::db::QueryList::_flags

## BRIEF

Флаги запросов

## CONTENT

Доступ: protected


Флаги запросов

Тип: stappler::db::QueryList::Flags


# ::stappler::db::QueryList::queries

## BRIEF

Список запросов

## CONTENT

Доступ: protected

Список запросов

Тип: Vector<stappler::db::QueryList::Item>


# ::stappler::db::QueryList::extraData

## BRIEF

Дополнительные данные запроса

## CONTENT

Доступ: protected

Дополнительные данные запроса

Тип: stappler::mem_pool::Value


# ::stappler::db::QueryList::token

## BRIEF

Токен продолжения

## CONTENT

Доступ: protected

Токен продолжения

Тип: stappler::db::ContinueToken


# ::stappler::db::QueryList::failed

## BRIEF

Флаг ошибки применения дополнительных данных

## CONTENT

Доступ: protected

Флаг ошибки применения дополнительных данных

Тип: bool


# ::stappler::db::operator|(QueryList::Flags const&,QueryList::Flags const&)

## BRIEF

Автоматически созданный оператор битового флага

## CONTENT

Автоматически созданный оператор битового флага

Параметры:
* QueryList::Flags const&
* QueryList::Flags const&

Возвращает:
* QueryList::Flags

# ::stappler::db::operator&(QueryList::Flags const&,QueryList::Flags const&)

## BRIEF

Автоматически созданный оператор битового флага

## CONTENT

Автоматически созданный оператор битового флага

Параметры:
* QueryList::Flags const&
* QueryList::Flags const&

Возвращает:
* QueryList::Flags

# ::stappler::db::operator^(QueryList::Flags const&,QueryList::Flags const&)

## BRIEF

Автоматически созданный оператор битового флага

## CONTENT

Автоматически созданный оператор битового флага

Параметры:
* QueryList::Flags const&
* QueryList::Flags const&

Возвращает:
* QueryList::Flags

# ::stappler::db::operator|=(QueryList::Flags&,QueryList::Flags const&)

## BRIEF

Автоматически созданный оператор битового флага

## CONTENT

Автоматически созданный оператор битового флага

Параметры:
* QueryList::Flags&
* QueryList::Flags const&

Возвращает:
* QueryList::Flags&

# ::stappler::db::operator&=(QueryList::Flags&,QueryList::Flags const&)

## BRIEF

Автоматически созданный оператор битового флага

## CONTENT

Автоматически созданный оператор битового флага

Параметры:
* QueryList::Flags&
* QueryList::Flags const&

Возвращает:
* QueryList::Flags&

# ::stappler::db::operator^=(QueryList::Flags&,QueryList::Flags const&)

## BRIEF

Автоматически созданный оператор битового флага

## CONTENT

Автоматически созданный оператор битового флага

Параметры:
* QueryList::Flags&
* QueryList::Flags const&

Возвращает:
* QueryList::Flags&

# ::stappler::db::operator==(QueryList::Flags const&,std::underlying_type<QueryList::Flags>::type const&)

## BRIEF

Автоматически созданный оператор битового флага

## CONTENT

Автоматически созданный оператор битового флага

Параметры:
* QueryList::Flags const&
* std::underlying_type<QueryList::Flags>::type const&

Возвращает:
* bool

# ::stappler::db::operator==(std::underlying_type<QueryList::Flags>::type const&,QueryList::Flags const&)

## BRIEF

Автоматически созданный оператор битового флага

## CONTENT

Автоматически созданный оператор битового флага

Параметры:
* std::underlying_type<QueryList::Flags>::type const&
* QueryList::Flags const&

Возвращает:
* bool

# ::stappler::db::operator!=(QueryList::Flags const&,std::underlying_type<QueryList::Flags>::type const&)

## BRIEF

Автоматически созданный оператор битового флага

## CONTENT

Автоматически созданный оператор битового флага

Параметры:
* QueryList::Flags const&
* std::underlying_type<QueryList::Flags>::type const&

Возвращает:
* bool

# ::stappler::db::operator!=(std::underlying_type<QueryList::Flags>::type const&,QueryList::Flags const&)

## BRIEF

Автоматически созданный оператор битового флага

## CONTENT

Автоматически созданный оператор битового флага

Параметры:
* std::underlying_type<QueryList::Flags>::type const&
* QueryList::Flags const&

Возвращает:
* bool

# ::stappler::db::operator~(QueryList::Flags const&)

## BRIEF

Автоматически созданный оператор битового флага

## CONTENT

Автоматически созданный оператор битового флага

Параметры:
* QueryList::Flags const&

Возвращает:
* QueryList::Flags