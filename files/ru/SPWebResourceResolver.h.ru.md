Title: SPWebResourceResolver.h


# EXTRA_WEBSERVER_WEBSERVER_RESOURCE_SPWEBRESOURCERESOLVER_H_

## BRIEF

Заголовок механизма поиска ресурсов

## CONTENT

Заголовок механизма поиска ресурсов


# ::stappler::web::ResourceResolver

## BRIEF

Механизм поиска ресурсов

## CONTENT

Механизм поиска ресурсов

Базовые классы:
* AllocBase


# ::stappler::web::ResourceResolver::ResourceResolver(db::Transaction const&,db::Scheme const&)

## BRIEF

Конструктор

## CONTENT

Доступ: public

Конструктор

Параметры:
* db::Transaction const&
* db::Scheme const&


# ::stappler::web::ResourceResolver::selectById(uint64_t)

## BRIEF

Выбирает единичный объект из схемы по идентификатору

## CONTENT

Доступ: public

Выбирает единичный объект из схемы по идентификатору

Параметры:
* uint64_t

Возвращает:
* bool

# ::stappler::web::ResourceResolver::selectByAlias(stappler::StringView const&)

## BRIEF

Выбирает единичный объект из схемы по псевдониму

## CONTENT

Доступ: public

Выбирает единичный объект из схемы по псевдониму

Параметры:
* stappler::StringView const&

Возвращает:
* bool

# ::stappler::web::ResourceResolver::selectByQuery(db::Query::Select&&)

## BRIEF

Выбирает несколько объектов по запросу

## CONTENT

Доступ: public

Выбирает несколько объектов по запросу

Параметры:
* db::Query::Select&&

Возвращает:
* bool

# ::stappler::web::ResourceResolver::searchByField(db::Field const*)

## BRIEF

Выбирает поле из объекта

## CONTENT

Доступ: public

Выбирает поле из объекта

Параметры:
* db::Field const*

Возвращает:
* bool

# ::stappler::web::ResourceResolver::order(stappler::StringView const&,db::Ordering)

## BRIEF

Упорядочивает объекты

## CONTENT

Доступ: public

Упорядочивает объекты

Параметры:
* stappler::StringView const&
* db::Ordering

Возвращает:
* bool

# ::stappler::web::ResourceResolver::first(stappler::StringView const&,size_t)

## BRIEF

Выбирает первые несколько объектов

## CONTENT

Доступ: public

Выбирает первые несколько объектов

Параметры:
* stappler::StringView const&
* size_t

Возвращает:
* bool

# ::stappler::web::ResourceResolver::last(stappler::StringView const&,size_t)

## BRIEF

Выбирает несколько последних объектов

## CONTENT

Доступ: public

Выбирает несколько последних объектов

Параметры:
* stappler::StringView const&
* size_t

Возвращает:
* bool

# ::stappler::web::ResourceResolver::limit(size_t)

## BRIEF

Ограничивает выборку

## CONTENT

Доступ: public

Ограничивает выборку

Параметры:
* size_t

Возвращает:
* bool

# ::stappler::web::ResourceResolver::offset(size_t)

## BRIEF

Смещает выборку

## CONTENT

Доступ: public

Смещает выборку

Параметры:
* size_t

Возвращает:
* bool

# ::stappler::web::ResourceResolver::getObject(db::Field const*)

## BRIEF

Получает объект по полю другого объекта

## CONTENT

Доступ: public

Получает объект по полю другого объекта

Параметры:
* db::Field const*

Возвращает:
* bool

# ::stappler::web::ResourceResolver::getSet(db::Field const*)

## BRIEF

Получает набор объектов по полю другого объекта

## CONTENT

Доступ: public

Получает набор объектов по полю другого объекта

Параметры:
* db::Field const*

Возвращает:
* bool

# ::stappler::web::ResourceResolver::getView(db::Field const*)

## BRIEF

Получает отображение из поля объекта

## CONTENT

Доступ: public

Получает отображение из поля объекта

Параметры:
* db::Field const*

Возвращает:
* bool

# ::stappler::web::ResourceResolver::getField(stappler::StringView const&,db::Field const*)

## BRIEF

Получает поле объекта

## CONTENT

Доступ: public

Получает поле объекта

Параметры:
* stappler::StringView const&
* db::Field const*

Возвращает:
* bool

# ::stappler::web::ResourceResolver::getAll()

## BRIEF

Получает все объекты схемы

## CONTENT

Доступ: public

Получает все объекты схемы

Возвращает:
* bool

# ::stappler::web::ResourceResolver::getResult()

## BRIEF

Конструирует ресурс из результата выборки

## CONTENT

Доступ: public

Конструирует ресурс из результата выборки

Возвращает:
* stappler::web::Resource*

# ::stappler::web::ResourceResolver::getScheme() const

## BRIEF

Возвращает схему данных

## CONTENT

Доступ: public

Возвращает схему данных

Возвращает:
* db::Scheme const*

# ::stappler::web::ResourceResolver::makeResource(stappler::web::ResourceType,db::QueryList&&,db::Field const*)

## BRIEF

Создаёт ресурс из запроса

## CONTENT

Доступ: protected

Создаёт ресурс из запроса

Параметры:
* stappler::web::ResourceType
* db::QueryList&&
* db::Field const*

Возвращает:
* stappler::web::Resource*

# ::stappler::web::ResourceResolver::InternalResourceType

## BRIEF

Внутренний тип ресурса

## CONTENT

Доступ: protected

Внутренний тип ресурса

Значения:
* Objects
* File
* Array
* Search


# ::stappler::web::ResourceResolver::_all

## BRIEF

Флаг получения всех объектов из схемы

## CONTENT

Доступ: protected

Флаг получения всех объектов из схемы

Тип: bool


# ::stappler::web::ResourceResolver::_storage

## BRIEF

Транзакция БД

## CONTENT

Доступ: protected

Транзакция БД

Тип: db::Transaction


# ::stappler::web::ResourceResolver::_scheme

## BRIEF

Схема данных

## CONTENT

Доступ: protected

Схема данных

Тип: db::Scheme const*


# ::stappler::web::ResourceResolver::_type

## BRIEF

Внутренний тип

## CONTENT

Доступ: protected

Внутренний тип

Тип: stappler::web::ResourceResolver::InternalResourceType


# ::stappler::web::ResourceResolver::_resource

## BRIEF

Готовый ресурс

## CONTENT

Доступ: protected

Готовый ресурс

Тип: stappler::web::Resource*


# ::stappler::web::ResourceResolver::_queries

## BRIEF

Запросы к схеме данных

## CONTENT

Доступ: protected

Запросы к схеме данных

Тип: db::QueryList
