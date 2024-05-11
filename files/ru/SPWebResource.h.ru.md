Title: SPWebResource.h


# EXTRA_WEBSERVER_WEBSERVER_RESOURCE_SPWEBRESOURCE_H_

## BRIEF

Заголовок автоматических ресурсов для доступа к БД

## CONTENT

Заголовок автоматических ресурсов для доступа к БД. Эти ресурсы в совокупности реализуют автоматический API для работы с БД с помощью REST запросов.

# ::stappler::web::ResolveOptions

## BRIEF

Флаги требуемых для раскрытия полей

## CONTENT

Флаги требуемых для раскрытия полей


# ::stappler::web::Resource

## BRIEF

Основной класс ресурса

## CONTENT

Основной класс ресурса. Конкретные ресурсы наследуются от этого класса. Ресурс реализует внешние функции доступа для REST API, и каскадный список запросов для реализации их в БД.

Базовые классы:
* AllocBase


# ::stappler::web::Resource::Transaction

## BRIEF

Транзакция БД

## CONTENT

Доступ: public

Транзакция БД

# ::stappler::web::Resource::Scheme

## BRIEF

Схема данных

## CONTENT

Доступ: public

Схема данных

# ::stappler::web::Resource::Worker

## BRIEF

Рабочий объект БД

## CONTENT

Доступ: public

Рабочий объект БД


# ::stappler::web::Resource::Field

## BRIEF

Поле БД

## CONTENT

Доступ: public

Поле БД


# ::stappler::web::Resource::Object

## BRIEF

Объект БД

## CONTENT

Доступ: public

Объект БД


# ::stappler::web::Resource::User

## BRIEF

Пользователь БД

## CONTENT

Доступ: public

Пользователь БД

# ::stappler::web::Resource::File

## BRIEF

Файл БД

## CONTENT

Доступ: public

Файл БД

# ::stappler::web::Resource::Query

## BRIEF

Запрос к БД

## CONTENT

Доступ: public

Запрос к БД


# ::stappler::web::Resource::QueryList

## BRIEF

Каскадный список запросов к БД

## CONTENT

Доступ: public

Каскадный список запросов к БД


# ::stappler::web::Resource::QueryFieldResolver

## BRIEF

Обработчик полей запроса БД

## CONTENT

Доступ: public

Обработчик полей запроса БД


# ::stappler::web::Resource::resolve(stappler::web::Resource::Transaction const&,stappler::web::Resource::Scheme const&,stappler::StringView const&)

## BRIEF

Создаёт ресурс для доступа к БД

## CONTENT

Доступ: public

Создаёт ресурс для доступа к БД.

Параметры:
* stappler::web::Resource::Transaction const&
* stappler::web::Resource::Scheme const&
* stappler::StringView const& - путь к ресурсу

Возвращает:
* stappler::web::Resource*

# ::stappler::web::Resource::resolve(stappler::web::Resource::Transaction const&,stappler::web::Resource::Scheme const&,stappler::StringView const&,stappler::mem_pool::Value&)

## BRIEF

Создаёт ресурс для доступа к БД

## CONTENT

Доступ: public

Создаёт ресурс для доступа к БД.

Параметры:
* stappler::web::Resource::Transaction const&
* stappler::web::Resource::Scheme const&
* stappler::StringView const& - путь к ресурсу
* stappler::mem_pool::Value& - дополнительные данные запроса

Возвращает:
* stappler::web::Resource*

# ::stappler::web::Resource::resolve(stappler::web::Resource::Transaction const&,stappler::web::Resource::Scheme const&,Vector<stappler::StringView>&)

## BRIEF

Создаёт ресурс для доступа к БД

## CONTENT

Доступ: public

Создаёт ресурс для доступа к БД.

Параметры:
* stappler::web::Resource::Transaction const&
* stappler::web::Resource::Scheme const&
* Vector<stappler::StringView>& - вектор элементов запроса, должен быть инвертирован (первые элементы в запросе должны быть последними)

Возвращает:
* stappler::web::Resource*

# ::stappler::web::Resource::~Resource()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор


# ::stappler::web::Resource::Resource(stappler::web::ResourceType,stappler::web::Resource::Transaction const&,stappler::web::Resource::QueryList&&)

## BRIEF

Конструктор

## CONTENT

Доступ: public

Конструктор

Параметры:
* stappler::web::ResourceType - тип ресурса
* stappler::web::Resource::Transaction const&
* stappler::web::Resource::QueryList&& - каскадный список запросов


# ::stappler::web::Resource::getType() const

## BRIEF

Возвращает тип ресурса

## CONTENT

Доступ: public

Возвращает тип ресурса

Возвращает:
* stappler::web::ResourceType

# ::stappler::web::Resource::getScheme() const

## BRIEF

Возвращает исходную схему данных

## CONTENT

Доступ: public

Возвращает исходную схему данных

Возвращает:
* Scheme&

# ::stappler::web::Resource::getStatus() const

## BRIEF

Возвращает предполагаемый статус результата запроса

## CONTENT

Доступ: public

Возвращает предполагаемый статус результата запроса

Возвращает:
* stappler::web::Status

# ::stappler::web::Resource::isDeltaApplicable() const

## BRIEF

Проверяет, возможны ли дельта-запросы к ресурсу

## CONTENT

Доступ: public

Проверяет, возможны ли дельта-запросы к ресурсу

Возвращает:
* bool

# ::stappler::web::Resource::hasDelta() const

## BRIEF

Проверяет, есть ли дельта-запрос в ресурсе

## CONTENT

Доступ: public

Проверяет, есть ли дельта-запрос в ресурсе

Возвращает:
* bool

# ::stappler::web::Resource::setQueryDelta(stappler::Time)

## BRIEF

Устанавливает дельта-запрос

## CONTENT

Доступ: public

Устанавливает дельта-запрос

Параметры:
* stappler::Time


# ::stappler::web::Resource::getQueryDelta() const

## BRIEF

Возвращает дельта-запрос

## CONTENT

Доступ: public

Возвращает дельта-запрос

Возвращает:
* stappler::Time

# ::stappler::web::Resource::getSourceDelta() const

## BRIEF

Возвращает исходный дельта-запрос

## CONTENT

Доступ: public

Возвращает исходный дельта-запрос

Возвращает:
* stappler::Time

# ::stappler::web::Resource::setUser(stappler::web::Resource::User*)

## BRIEF

Устанавливает пользователя БД для запроса

## CONTENT

Доступ: public

Устанавливает пользователя БД для запроса

Параметры:
* stappler::web::Resource::User*


# ::stappler::web::Resource::setFilterData(stappler::mem_pool::Value const&)

## BRIEF

Устанавливает дополнительные данные фильтрации

## CONTENT

Доступ: public

Устанавливает дополнительные данные фильтрации

Параметры:
* stappler::mem_pool::Value const&


# ::stappler::web::Resource::setResolveOptions(stappler::mem_pool::Value const&)

## BRIEF

Устанавливает параметры раскрытия полей

## CONTENT

Доступ: public

Устанавливает параметры раскрытия полей

Параметры:
* stappler::mem_pool::Value const&


# ::stappler::web::Resource::setResolveDepth(size_t)

## BRIEF

Устанавливает максимальную глубину обхода ресурсов

## CONTENT

Доступ: public

Устанавливает максимальную глубину обхода ресурсов

Параметры:
* size_t


# ::stappler::web::Resource::setPageFrom(size_t)

## BRIEF

Устанавливает смещение данных в запросе

## CONTENT

Доступ: public

Устанавливает смещение данных в запросе (OFFSET)

Параметры:
* size_t


# ::stappler::web::Resource::setPageCount(size_t)

## BRIEF

Устанавливает количество объектов в ответе

## CONTENT

Доступ: public

Устанавливает количество объектов в ответе (LIMIT)

Параметры:
* size_t


# ::stappler::web::Resource::applyQuery(stappler::mem_pool::Value const&)

## BRIEF

Читает запрос из данных

## CONTENT

Доступ: public

Читает запрос из данных

Параметры:
* stappler::mem_pool::Value const&


# ::stappler::web::Resource::prepare(QueryList::Flags)

## BRIEF

Подготавливает каскадный список запросов к исполнению

## CONTENT

Доступ: public

Подготавливает каскадный список запросов к исполнению

Параметры:
* QueryList::Flags - флаги запроса


# ::stappler::web::Resource::getQueries() const

## BRIEF

Возвращает каскадный список запросов

## CONTENT

Доступ: public

Возвращает каскадный список запросов

Возвращает:
* QueryList&

# ::stappler::web::Resource::prepareUpdate()

## BRIEF

Подготавливает запрос на изменение объектов

## CONTENT

Доступ: public

Подготавливает запрос на изменение объектов. Точка переопределения.

Возвращает:
* bool - true если успешно

# ::stappler::web::Resource::prepareCreate()

## BRIEF

Подготавливает запрос на изменение объектов

## CONTENT

Доступ: public

Подготавливает запрос на изменение объектов. Точка переопределения.

Возвращает:
* bool - true если успешно

# ::stappler::web::Resource::prepareAppend()

## BRIEF

Подготавливает запрос на добавление объектов

## CONTENT

Доступ: public

Подготавливает запрос на добавление объектов. Точка переопределения.

Возвращает:
* bool - true если успешно

# ::stappler::web::Resource::removeObject()

## BRIEF

Удаляет объект ресурса

## CONTENT

Доступ: public

Удаляет объект ресурса. Точка переопределения.

Возвращает:
* bool - true если успешно

# ::stappler::web::Resource::updateObject(stappler::mem_pool::Value&,Vector<db::InputFile>&)

## BRIEF

Обновляет объекты ресурса

## CONTENT

Доступ: public

Обновляет объекты ресурса. Точка переопределения.

Параметры:
* stappler::mem_pool::Value&
* Vector<db::InputFile>&

Возвращает:
* stappler::mem_pool::Value - данные изменённых объектов


# ::stappler::web::Resource::createObject(stappler::mem_pool::Value&,Vector<db::InputFile>&)

## BRIEF

Создаёт объект в ресурсе

## CONTENT

Доступ: public

Создаёт объект в ресурсе. Точка переопределения.

Параметры:
* stappler::mem_pool::Value&
* Vector<db::InputFile>&

Возвращает:
* stappler::mem_pool::Value - данные новых объектов


# ::stappler::web::Resource::appendObject(stappler::mem_pool::Value&)

## BRIEF

Добавляет объекты в ресурс

## CONTENT

Доступ: public

Добавляет объекты в ресурс

Параметры:
* stappler::mem_pool::Value&

Возвращает:
* stappler::mem_pool::Value - данные новых объектов

# ::stappler::web::Resource::getResultObject()

## BRIEF

Получает объекты ресурса

## CONTENT

Доступ: public

Получает объекты ресурса

Возвращает:
* stappler::mem_pool::Value - данные объектов

# ::stappler::web::Resource::resolve(stappler::web::Resource::Scheme const&,stappler::mem_pool::Value&)

## BRIEF

Раскрывает необходимые объекты в результате работы ресурса

## CONTENT

Доступ: public

Раскрывает необходимые объекты в результате работы ресурса

Параметры:
* stappler::web::Resource::Scheme const&
* stappler::mem_pool::Value&


# ::stappler::web::Resource::getMaxRequestSize() const

## BRIEF

Максимально допустимый размер запроса для ресурса

## CONTENT

Доступ: public

Максимально допустимый размер запроса для ресурса

Возвращает:
* size_t

# ::stappler::web::Resource::getMaxVarSize() const

## BRIEF

Максимально допустимый размер переменной для ресурса

## CONTENT

Доступ: public

Максимально допустимый размер переменной для ресурса

Возвращает:
* size_t

# ::stappler::web::Resource::getMaxFileSize() const

## BRIEF

Максимально допустимый размер файла для ресурса

## CONTENT

Доступ: public

Максимально допустимый размер файла для ресурса

Возвращает:
* size_t

# ::stappler::web::Resource::encodeFiles(stappler::mem_pool::Value&,Vector<db::InputFile>&)

## BRIEF

Кодирует файлы в данные для обновления

## CONTENT

Доступ: protected

Кодирует файлы в данные для обновления

Параметры:
* stappler::mem_pool::Value&
* Vector<db::InputFile>&


# ::stappler::web::Resource::resolveSet(stappler::web::Resource::QueryFieldResolver const&,int64_t,stappler::web::Resource::Field const&,stappler::mem_pool::Value&)

## BRIEF

Раскрывает поле набора объектов

## CONTENT

Доступ: protected

Раскрывает поле набора объектов

Параметры:
* stappler::web::Resource::QueryFieldResolver const&
* int64_t
* stappler::web::Resource::Field const&
* stappler::mem_pool::Value&


# ::stappler::web::Resource::resolveObject(stappler::web::Resource::QueryFieldResolver const&,int64_t,stappler::web::Resource::Field const&,stappler::mem_pool::Value&)

## BRIEF

Раскрывает объектое поле

## CONTENT

Доступ: protected

Раскрывает объектое поле

Параметры:
* stappler::web::Resource::QueryFieldResolver const&
* int64_t
* stappler::web::Resource::Field const&
* stappler::mem_pool::Value&


# ::stappler::web::Resource::resolveArray(stappler::web::Resource::QueryFieldResolver const&,int64_t,stappler::web::Resource::Field const&,stappler::mem_pool::Value&)

## BRIEF

Раскрывает поле-массив

## CONTENT

Доступ: protected

Раскрывает поле-массив

Параметры:
* stappler::web::Resource::QueryFieldResolver const&
* int64_t
* stappler::web::Resource::Field const&
* stappler::mem_pool::Value&


# ::stappler::web::Resource::resolveFile(stappler::web::Resource::QueryFieldResolver const&,int64_t,stappler::web::Resource::Field const&,stappler::mem_pool::Value&)

## BRIEF

Раскрывает файловое поле

## CONTENT

Доступ: protected

Раскрывает файловое поле

Параметры:
* stappler::web::Resource::QueryFieldResolver const&
* int64_t
* stappler::web::Resource::Field const&
* stappler::mem_pool::Value&


# ::stappler::web::Resource::processResolveResult(stappler::web::Resource::QueryFieldResolver const&,Set<const stappler::web::Resource::Field *> const&,stappler::mem_pool::Value&)

## BRIEF

Раскрывает требуемые поля в объекте

## CONTENT

Доступ: protected

Раскрывает требуемые поля в объекте

Параметры:
* stappler::web::Resource::QueryFieldResolver const&
* Set<const stappler::web::Resource::Field *> const&
* stappler::mem_pool::Value&

Возвращает:
* int64_t

# ::stappler::web::Resource::resolveResult(stappler::web::Resource::QueryFieldResolver const&,stappler::mem_pool::Value&,uint16_t,uint16_t)

## BRIEF

Раскрывает требуемые поля в объекте

## CONTENT

Доступ: protected

Раскрывает требуемые поля в объекте

Параметры:
* stappler::web::Resource::QueryFieldResolver const&
* stappler::mem_pool::Value&
* uint16_t
* uint16_t


# ::stappler::web::Resource::resolveResult(stappler::web::Resource::QueryList const&,stappler::mem_pool::Value&)

## BRIEF

Раскрывает требуемые поля в объекте

## CONTENT

Доступ: protected

Раскрывает требуемые поля в объекте

Параметры:
* stappler::web::Resource::QueryList const&
* stappler::mem_pool::Value&


# ::stappler::web::Resource::getRequestScheme() const

## BRIEF

Возвращает базовую схему

## CONTENT

Доступ: protected

Возвращает базовую схему

Возвращает:
* Scheme&

# ::stappler::web::Resource::resolveOptionForString(stappler::StringView)

## BRIEF

Читает флаги раскрытия полей из строки

## CONTENT

Доступ: protected

Читает флаги раскрытия полей из строки

Параметры:
* stappler::StringView


# ::stappler::web::Resource::addExtraResolveField(stappler::StringView)

## BRIEF

Добавляет флаг раскрытия полей из строки

## CONTENT

Доступ: protected

Добавляет флаг раскрытия полей из строки

Параметры:
* stappler::StringView


# ::stappler::web::Resource::_delta

## BRIEF

Базовый дельта-запрос

## CONTENT

Доступ: protected

Базовый дельта-запрос

Тип: stappler::Time


# ::stappler::web::Resource::_type

## BRIEF

Тип ресурса

## CONTENT

Доступ: protected

Тип ресурса

Тип: stappler::web::ResourceType


# ::stappler::web::Resource::_status

## BRIEF

Статус ответа для запроса

## CONTENT

Доступ: protected

Статус ответа для запроса

Тип: stappler::web::Status


# ::stappler::web::Resource::_transaction

## BRIEF

Транзакция БД

## CONTENT

Доступ: protected

Транзакция БД

Тип: Transaction


# ::stappler::web::Resource::_queries

## BRIEF

Каскадный список запросов

## CONTENT

Доступ: protected

Каскадный список запросов

Тип: QueryList


# ::stappler::web::Resource::_user

## BRIEF

Пользователь БД

## CONTENT

Доступ: protected

Пользователь БД

Тип: User*


# ::stappler::web::Resource::_resolveObjects

## BRIEF

Список раскрытых объектов

## CONTENT

Доступ: protected

Список раскрытых объектов

Тип: Set<int64_t>


# ::stappler::web::Resource::_filterData

## BRIEF

Дополнительные данные фильтров

## CONTENT

Доступ: protected

Дополнительные данные фильтров

Тип: stappler::mem_pool::Value


# ::stappler::web::Resource::_isResolvesUpdated

## BRIEF

Флаг обновления раскрытия ресурсов

## CONTENT

Доступ: protected

Флаг обновления раскрытия ресурсов

Тип: bool


# ::stappler::web::Resource::_extraResolves

## BRIEF

Дополнительные параметры раскрытия полей

## CONTENT

Доступ: protected

Дополнительные параметры раскрытия полей

Тип: Vector<stappler::StringView>


# ::stappler::web::Resource::_resolve

## BRIEF

Флаги раскрытия полей

## CONTENT

Доступ: protected

Флаги раскрытия полей

Тип: stappler::web::ResolveOptions


# ::stappler::web::ResourceProperty

## BRIEF

Базовый класс ресурса-свойства

## CONTENT

Базовый класс ресурса-свойства. Представляет из себя ресурс для вложенного поля.

Базовые классы:
* Resource


# ::stappler::web::ResourceProperty::ResourceProperty(stappler::web::Resource::Transaction const&,stappler::web::Resource::QueryList&&,stappler::web::Resource::Field const*)

## BRIEF

Конструктор

## CONTENT

Доступ: public

Конструктор

Параметры:
* stappler::web::Resource::Transaction const&
* stappler::web::Resource::QueryList&&
* stappler::web::Resource::Field const*


# ::stappler::web::ResourceProperty::removeObject()

## BRIEF

Удаляет объект

## CONTENT

Доступ: public

Удаляет объект

Возвращает:
* bool

# ::stappler::web::ResourceProperty::getObjectId()

## BRIEF

Возвращает ид базового объекта

## CONTENT

Доступ: protected

Возвращает ид базового объекта

Возвращает:
* uint64_t

# ::stappler::web::ResourceProperty::getObject(bool)

## BRIEF

Возвращает объект ресурса

## CONTENT

Доступ: protected

Возвращает объект ресурса

Параметры:
* bool - true если объект получается для обновления

Возвращает:
* stappler::mem_pool::Value

# ::stappler::web::ResourceProperty::_field

## BRIEF

Поле схемы БД

## CONTENT

Доступ: protected

Поле схемы БД

Тип: stappler::web::Resource::Field const*


# ::stappler::web::ResourceFile

## BRIEF

Файловый ресурс

## CONTENT

Файловый ресурс

Базовые классы:
* ResourceProperty


# ::stappler::web::ResourceFile::ResourceFile(stappler::web::Resource::Transaction const&,stappler::web::Resource::QueryList&&,stappler::web::Resource::Field const*)

## BRIEF

Конструктор

## CONTENT

Доступ: public

Конструктор

Параметры:
* stappler::web::Resource::Transaction const&
* stappler::web::Resource::QueryList&&
* stappler::web::Resource::Field const*


# ::stappler::web::ResourceFile::prepareUpdate()

## BRIEF

Подготавливает обновление файла

## CONTENT

Доступ: public

Подготавливает обновление файла

Возвращает:
* bool

# ::stappler::web::ResourceFile::prepareCreate()

## BRIEF

Подготавливает создание файла

## CONTENT

Доступ: public

Подготавливает создание файла

Возвращает:
* bool

# ::stappler::web::ResourceFile::updateObject(stappler::mem_pool::Value&,Vector<db::InputFile>&)

## BRIEF

Обновляет файл

## CONTENT

Доступ: public

Обновляет файл

Параметры:
* stappler::mem_pool::Value&
* Vector<db::InputFile>&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::web::ResourceFile::createObject(stappler::mem_pool::Value&,Vector<db::InputFile>&)

## BRIEF

Создаёт файл

## CONTENT

Доступ: public

Создаёт файл

Параметры:
* stappler::mem_pool::Value&
* Vector<db::InputFile>&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::web::ResourceFile::getResultObject()

## BRIEF

Возвращает объект файла

## CONTENT

Доступ: public

Возвращает объект файла

Возвращает:
* stappler::mem_pool::Value

# ::stappler::web::ResourceFile::getFileForObject(stappler::mem_pool::Value&)

## BRIEF

Возвращает данные файла из объекта

## CONTENT

Доступ: protected

Возвращает данные файла из объекта

Параметры:
* stappler::mem_pool::Value&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::web::ResourceFile::getDatabaseObject()

## BRIEF

Возвращает основной объект

## CONTENT

Доступ: protected

Возвращает основной объект

Возвращает:
* stappler::mem_pool::Value

# ::stappler::web::ResourceArray

## BRIEF

Ресурс поля-массива

## CONTENT

Базовые классы:
* ResourceProperty

Ресурс поля-массива


# ::stappler::web::ResourceArray::ResourceArray(stappler::web::Resource::Transaction const&,stappler::web::Resource::QueryList&&,stappler::web::Resource::Field const*)

## BRIEF

Конструктор

## CONTENT

Доступ: public

Конструктор

Параметры:
* stappler::web::Resource::Transaction const&
* stappler::web::Resource::QueryList&&
* stappler::web::Resource::Field const*


# ::stappler::web::ResourceArray::prepareUpdate()

## BRIEF

Подготавливает обновление

## CONTENT

Доступ: public

Подготавливает обновление

Возвращает:
* bool

# ::stappler::web::ResourceArray::prepareCreate()

## BRIEF

Подготавливает создание

## CONTENT

Доступ: public

Подготавливает создание

Возвращает:
* bool

# ::stappler::web::ResourceArray::updateObject(stappler::mem_pool::Value&,Vector<db::InputFile>&)

## BRIEF

Обновляет поле

## CONTENT

Доступ: public

Обновляет поле

Параметры:
* stappler::mem_pool::Value&
* Vector<db::InputFile>&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::web::ResourceArray::createObject(stappler::mem_pool::Value&,Vector<db::InputFile>&)

## BRIEF

Создаёт поле

## CONTENT

Доступ: public

Создаёт поле

Параметры:
* stappler::mem_pool::Value&
* Vector<db::InputFile>&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::web::ResourceArray::getResultObject()

## BRIEF

Возвращает данные поля

## CONTENT

Доступ: public

Возвращает данные поля

Возвращает:
* stappler::mem_pool::Value

# ::stappler::web::ResourceArray::getDatabaseObject()

## BRIEF

Возвращает базовый объект

## CONTENT

Доступ: protected

Возвращает базовый объект

Возвращает:
* stappler::mem_pool::Value

# ::stappler::web::ResourceArray::getArrayForObject(stappler::mem_pool::Value&)

## BRIEF

Возвращает массив из объекта

## CONTENT

Доступ: protected

Возвращает массив из объекта

Параметры:
* stappler::mem_pool::Value&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::web::ResourceObject

## BRIEF

Ресурс единичного объекта

## CONTENT

Ресурс единичного объекта

Базовые классы:
* Resource


# ::stappler::web::ResourceObject::ResourceObject(stappler::web::Resource::Transaction const&,stappler::web::Resource::QueryList&&)

## BRIEF

Конструктор

## CONTENT

Доступ: public

Конструктор

Параметры:
* stappler::web::Resource::Transaction const&
* stappler::web::Resource::QueryList&&


# ::stappler::web::ResourceObject::prepareUpdate()

## BRIEF

Подготавливает обновление

## CONTENT

Доступ: public

Подготавливает обновление

Возвращает:
* bool

# ::stappler::web::ResourceObject::prepareCreate()

## BRIEF

Подготавлиает создание объекта

## CONTENT

Доступ: public

Подготавлиает создание объекта

Возвращает:
* bool

# ::stappler::web::ResourceObject::prepareAppend()

## BRIEF

Подготавливает добавление объекта

## CONTENT

Доступ: public

Подготавливает добавление объекта

Возвращает:
* bool

# ::stappler::web::ResourceObject::removeObject()

## BRIEF

Удаление объекта

## CONTENT

Доступ: public

Удаление объекта

Возвращает:
* bool

# ::stappler::web::ResourceObject::updateObject(stappler::mem_pool::Value&,Vector<db::InputFile>&)

## BRIEF

Обновляет объект

## CONTENT

Доступ: public

Обновляет объект

Параметры:
* stappler::mem_pool::Value&
* Vector<db::InputFile>&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::web::ResourceObject::getResultObject()

## BRIEF

Возвращает объект

## CONTENT

Доступ: public

Возвращает объект

Возвращает:
* stappler::mem_pool::Value

# ::stappler::web::ResourceObject::getObjectMtime()

## BRIEF

Возвращает время обновления объекта

## CONTENT

Доступ: public

Возвращает время обновления объекта

Возвращает:
* int64_t

# ::stappler::web::ResourceObject::performUpdate(Vector<int64_t> const&,stappler::mem_pool::Value&,Vector<db::InputFile>&)

## BRIEF

Подготавливает обновление

## CONTENT

Доступ: protected

Подготавливает обновление

Параметры:
* Vector<int64_t> const&
* stappler::mem_pool::Value&
* Vector<db::InputFile>&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::web::ResourceObject::processResultList(stappler::web::Resource::QueryList const&,stappler::mem_pool::Value&)

## BRIEF

Раскрывает поля результата

## CONTENT

Доступ: protected

Раскрывает поля результата

Параметры:
* stappler::web::Resource::QueryList const&
* stappler::mem_pool::Value&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::web::ResourceObject::processResultObject(stappler::web::Resource::QueryList const&,stappler::mem_pool::Value&)

## BRIEF

Раскрывает поля результата

## CONTENT

Доступ: protected

Раскрывает поля результата

Параметры:
* stappler::web::Resource::QueryList const&
* stappler::mem_pool::Value&

Возвращает:
* bool

# ::stappler::web::ResourceObject::getDatabaseObject()

## BRIEF

Возвращает базовый объект

## CONTENT

Доступ: protected

Возвращает базовый объект

Возвращает:
* stappler::mem_pool::Value

# ::stappler::web::ResourceObject::getDatabaseId(stappler::web::Resource::QueryList const&,size_t)

## BRIEF

Возвращает ид объекта

## CONTENT

Доступ: protected

Возвращает ид объекта

Параметры:
* stappler::web::Resource::QueryList const&
* size_t

Возвращает:
* Vector<int64_t>

# ::stappler::web::ResourceReslist

## BRIEF

Ресурс списка объектов

## CONTENT

Ресурс списка объектов

Базовые классы:
* ResourceObject


# ::stappler::web::ResourceReslist::ResourceReslist(stappler::web::Resource::Transaction const&,stappler::web::Resource::QueryList&&)

## BRIEF

Конструктор

## CONTENT

Доступ: public

Конструктор

Параметры:
* stappler::web::Resource::Transaction const&
* stappler::web::Resource::QueryList&&


# ::stappler::web::ResourceReslist::prepareCreate()

## BRIEF

Подготавливает создание

## CONTENT

Доступ: public

Подготавливает создание

Возвращает:
* bool

# ::stappler::web::ResourceReslist::createObject(stappler::mem_pool::Value&,Vector<db::InputFile>&)

## BRIEF

Создаёт объект

## CONTENT

Доступ: public

Создаёт объект

Параметры:
* stappler::mem_pool::Value&
* Vector<db::InputFile>&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::web::ResourceReslist::performCreateObject(stappler::mem_pool::Value&,Vector<db::InputFile>&,stappler::mem_pool::Value const&)

## BRIEF

Создаёт объект

## CONTENT

Доступ: public

Создаёт объект

Доступ: protected

Параметры:
* stappler::mem_pool::Value&
* Vector<db::InputFile>&
* stappler::mem_pool::Value const&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::web::ResourceSet

## BRIEF

Ресурс постоянного набора объектов

## CONTENT

Ресурс постоянного набора объектов

Базовые классы:
* ResourceReslist


# ::stappler::web::ResourceSet::ResourceSet(stappler::web::Resource::Transaction const&,stappler::web::Resource::QueryList&&)

## BRIEF

Конструктор

## CONTENT

Доступ: public

Конструктор

Параметры:
* stappler::web::Resource::Transaction const&
* stappler::web::Resource::QueryList&&


# ::stappler::web::ResourceSet::prepareAppend()

## BRIEF

Подготавливает дополнение

## CONTENT

Доступ: public

Подготавливает дополнение

Возвращает:
* bool

# ::stappler::web::ResourceSet::createObject(stappler::mem_pool::Value&,Vector<db::InputFile>&)

## BRIEF

Создаёт объект

## CONTENT

Доступ: public

Создаёт объект

Параметры:
* stappler::mem_pool::Value&
* Vector<db::InputFile>&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::web::ResourceSet::appendObject(stappler::mem_pool::Value&)

## BRIEF

Добавляет объект в набор

## CONTENT

Доступ: public

Добавляет объект в набор

Параметры:
* stappler::mem_pool::Value&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::web::ResourceRefSet

## BRIEF

Ресурс ссылочного списка объектов

## CONTENT

Ресурс ссылочного списка объектов

Базовые классы:
* ResourceSet


# ::stappler::web::ResourceRefSet::ResourceRefSet(stappler::web::Resource::Transaction const&,stappler::web::Resource::QueryList&&)

## BRIEF

Конструктор

## CONTENT

Доступ: public

Конструктор

Параметры:
* stappler::web::Resource::Transaction const&
* stappler::web::Resource::QueryList&&


# ::stappler::web::ResourceRefSet::prepareUpdate()

## BRIEF

Подготавливает обновление объекта

## CONTENT

Доступ: public

Подготавливает обновление объекта

Возвращает:
* bool

# ::stappler::web::ResourceRefSet::prepareCreate()

## BRIEF

Подготавливает создание объекта

## CONTENT

Доступ: public

Подготавливает создание объекта

Возвращает:
* bool

# ::stappler::web::ResourceRefSet::prepareAppend()

## BRIEF

Подготавливает добавление объекта

## CONTENT

Доступ: public

Подготавливает добавление объекта

Возвращает:
* bool

# ::stappler::web::ResourceRefSet::removeObject()

## BRIEF

Удаляет объект

## CONTENT

Доступ: public

Удаляет объект

Возвращает:
* bool

# ::stappler::web::ResourceRefSet::updateObject(stappler::mem_pool::Value&,Vector<db::InputFile>&)

## BRIEF

Обновляет объект

## CONTENT

Доступ: public

Обновляет объект

Параметры:
* stappler::mem_pool::Value&
* Vector<db::InputFile>&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::web::ResourceRefSet::createObject(stappler::mem_pool::Value&,Vector<db::InputFile>&)

## BRIEF

Создаёт объект

## CONTENT

Доступ: public

Создаёт объект

Параметры:
* stappler::mem_pool::Value&
* Vector<db::InputFile>&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::web::ResourceRefSet::appendObject(stappler::mem_pool::Value&)

## BRIEF

Добавляет объект

## CONTENT

Доступ: public

Добавляет объект

Параметры:
* stappler::mem_pool::Value&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::web::ResourceRefSet::getObjectId()

## BRIEF

Возвращает базовый идентификатор объекта

## CONTENT

Доступ: protected

Возвращает базовый идентификатор объекта

Возвращает:
* int64_t

# ::stappler::web::ResourceRefSet::getObjectValue()

## BRIEF

Возвращает базовый объект

## CONTENT

Доступ: protected

Возвращает базовый объект

Возвращает:
* stappler::mem_pool::Value

# ::stappler::web::ResourceRefSet::prepareAppendList(int64_t,stappler::mem_pool::Value const&,bool)

## BRIEF

Подготавливает список объектов для добавления

## CONTENT

Доступ: protected

Подготавливает список объектов для добавления

Параметры:
* int64_t
* stappler::mem_pool::Value const&
* bool

Возвращает:
* Vector<int64_t>

# ::stappler::web::ResourceRefSet::doCleanup(int64_t,Vector<int64_t> const&)

## BRIEF

Очищает данные при ошибке

## CONTENT

Доступ: protected

Очищает данные при ошибке

Параметры:
* int64_t
* Vector<int64_t> const&

Возвращает:
* bool

# ::stappler::web::ResourceRefSet::doAppendObject(stappler::mem_pool::Value const&,bool)

## BRIEF

Выполняет добавление

## CONTENT

Доступ: protected

Выполняет добавление

Параметры:
* stappler::mem_pool::Value const&
* bool

Возвращает:
* stappler::mem_pool::Value

# ::stappler::web::ResourceRefSet::doAppendObjects(stappler::mem_pool::Value const&,bool)

## BRIEF

Выполняет добавление

## CONTENT

Доступ: protected

Выполняет добавление

Параметры:
* stappler::mem_pool::Value const&
* bool

Возвращает:
* stappler::mem_pool::Value

# ::stappler::web::ResourceRefSet::doAppendObjectsTransaction(stappler::mem_pool::Value&,stappler::mem_pool::Value const&,bool)

## BRIEF

Выполняет добавление

## CONTENT

Доступ: protected

Выполняет добавление

Параметры:
* stappler::mem_pool::Value&
* stappler::mem_pool::Value const&
* bool

Возвращает:
* bool

# ::stappler::web::ResourceRefSet::isEmptyRequest()

## BRIEF

Проверяет запрос на пустоту

## CONTENT

Доступ: protected

Проверяет запрос на пустоту

Возвращает:
* bool

# ::stappler::web::ResourceRefSet::_objectId

## BRIEF

Ид объекта

## CONTENT

Доступ: protected

Ид объекта

Тип: int64_t


# ::stappler::web::ResourceRefSet::_objectValue

## BRIEF

Базовый объект

## CONTENT

Доступ: protected

Базовый объект

Тип: stappler::mem_pool::Value


# ::stappler::web::ResourceRefSet::_sourceScheme

## BRIEF

Базовая схема объекта

## CONTENT

Доступ: protected

Базовая схема объекта

Тип: stappler::web::Resource::Scheme const*


# ::stappler::web::ResourceRefSet::_field

## BRIEF

Поле объекта

## CONTENT

Доступ: protected

Поле объекта

Тип: stappler::web::Resource::Field const*


# ::stappler::web::ResourceFieldObject

## BRIEF

Ресурс объектного поля

## CONTENT

Ресурс объектного поля

Базовые классы:
* ResourceObject


# ::stappler::web::ResourceFieldObject::ResourceFieldObject(stappler::web::Resource::Transaction const&,stappler::web::Resource::QueryList&&)

## BRIEF

Конструктор

## CONTENT

Доступ: public

Конструктор

Параметры:
* stappler::web::Resource::Transaction const&
* stappler::web::Resource::QueryList&&


# ::stappler::web::ResourceFieldObject::prepareUpdate()

## BRIEF

Подготавливает обновление

## CONTENT

Доступ: public

Подготавливает обновление

Возвращает:
* bool

# ::stappler::web::ResourceFieldObject::prepareCreate()

## BRIEF

Подготавливает создание

## CONTENT

Доступ: public

Подготавливает создание

Возвращает:
* bool

# ::stappler::web::ResourceFieldObject::prepareAppend()

## BRIEF

Подготавливает добавление

## CONTENT

Доступ: public

Подготавливает добавление


Возвращает:
* bool

# ::stappler::web::ResourceFieldObject::removeObject()

## BRIEF

Удаляет объект

## CONTENT

Доступ: public

Удаляет объект

Возвращает:
* bool

# ::stappler::web::ResourceFieldObject::updateObject(stappler::mem_pool::Value&,Vector<db::InputFile>&)

## BRIEF

Обновляет объект

## CONTENT

Доступ: public

Обновляет объект

Параметры:
* stappler::mem_pool::Value&
* Vector<db::InputFile>&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::web::ResourceFieldObject::createObject(stappler::mem_pool::Value&,Vector<db::InputFile>&)

## BRIEF

Создаёт объект

## CONTENT

Доступ: public

Создаёт объект

Параметры:
* stappler::mem_pool::Value&
* Vector<db::InputFile>&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::web::ResourceFieldObject::appendObject(stappler::mem_pool::Value&)

## BRIEF

Добавляет объект

## CONTENT

Доступ: public

Добавляет объект

Параметры:
* stappler::mem_pool::Value&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::web::ResourceFieldObject::getRootId()

## BRIEF

Возвращает ид корневого объекта

## CONTENT

Доступ: protected

Возвращает ид корневого объекта

Возвращает:
* int64_t

# ::stappler::web::ResourceFieldObject::getObjectId()

## BRIEF

Возвращает ид объекта

## CONTENT

Доступ: protected

Возвращает ид объекта

Возвращает:
* int64_t

# ::stappler::web::ResourceFieldObject::getRootObject(bool)

## BRIEF

Возвращает корневой объект

## CONTENT

Доступ: protected

Возвращает корневой объект

Параметры:
* bool

Возвращает:
* stappler::mem_pool::Value

# ::stappler::web::ResourceFieldObject::getTargetObject(bool)

## BRIEF

Возвращает целевой объект

## CONTENT

Доступ: protected

Возвращает целевой объект

Параметры:
* bool

Возвращает:
* stappler::mem_pool::Value

# ::stappler::web::ResourceFieldObject::doRemoveObject()

## BRIEF

Удаляет объект

## CONTENT

Доступ: protected

Удаляет объект

Возвращает:
* bool

# ::stappler::web::ResourceFieldObject::doUpdateObject(stappler::mem_pool::Value&,Vector<db::InputFile>&)

## BRIEF

Обновляет объект

## CONTENT

Доступ: protected

Обновляет объект

Параметры:
* stappler::mem_pool::Value&
* Vector<db::InputFile>&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::web::ResourceFieldObject::doCreateObject(stappler::mem_pool::Value&,Vector<db::InputFile>&)

## BRIEF

Создаёт объект

## CONTENT

Доступ: protected

Создаёт объект

Параметры:
* stappler::mem_pool::Value&
* Vector<db::InputFile>&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::web::ResourceFieldObject::_objectId

## BRIEF

Ид объекта

## CONTENT

Доступ: protected

Ид объекта

Тип: int64_t


# ::stappler::web::ResourceFieldObject::_rootId

## BRIEF

Ид корневого объекта

## CONTENT

Доступ: protected

Ид корневого объекта

Тип: int64_t


# ::stappler::web::ResourceFieldObject::_sourceScheme

## BRIEF

Схема объекта

## CONTENT

Доступ: protected

Схема объекта

Тип: stappler::web::Resource::Scheme const*


# ::stappler::web::ResourceFieldObject::_field

## BRIEF

Поле объекта

## CONTENT

Доступ: protected

Поле объекта

Тип: stappler::web::Resource::Field const*


# ::stappler::web::ResourceView

## BRIEF

Ресурс отображения объектов

## CONTENT

Ресурс отображения объектов

Базовые классы:
* ResourceSet


# ::stappler::web::ResourceView::ResourceView(stappler::web::Resource::Transaction const&,stappler::web::Resource::QueryList&&)

## BRIEF

Конструктор

## CONTENT

Доступ: public

Конструктор

Параметры:
* stappler::web::Resource::Transaction const&
* stappler::web::Resource::QueryList&&


# ::stappler::web::ResourceView::prepareUpdate()

## BRIEF

Подготавливает обновление

## CONTENT

Доступ: public

Подготавливает обновление

Возвращает:
* bool

# ::stappler::web::ResourceView::prepareCreate()

## BRIEF

Подготавливает создание

## CONTENT

Доступ: public

Подготавливает создание

Возвращает:
* bool

# ::stappler::web::ResourceView::prepareAppend()

## BRIEF

Подготавливает добавление

## CONTENT

Доступ: public

Подготавливает добавление

Возвращает:
* bool

# ::stappler::web::ResourceView::removeObject()

## BRIEF

Удаляет объект

## CONTENT

Доступ: public

Удаляет объект

Возвращает:
* bool

# ::stappler::web::ResourceView::updateObject(stappler::mem_pool::Value&,Vector<db::InputFile>&)

## BRIEF

Обновляет объект

## CONTENT

Доступ: public

Обновляет объект

Параметры:
* stappler::mem_pool::Value&
* Vector<db::InputFile>&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::web::ResourceView::createObject(stappler::mem_pool::Value&,Vector<db::InputFile>&)

## BRIEF

Создаёт объект

## CONTENT

Доступ: public

Создаёт объект

Параметры:
* stappler::mem_pool::Value&
* Vector<db::InputFile>&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::web::ResourceView::getResultObject()

## BRIEF

Возвращает итоговый объект

## CONTENT

Доступ: public

Возвращает итоговый объект

Возвращает:
* stappler::mem_pool::Value

# ::stappler::web::ResourceView::_field

## BRIEF

Поле отображения

## CONTENT

Доступ: protected

Поле отображения

Тип: stappler::web::Resource::Field const*


# ::stappler::web::ResourceSearch

## BRIEF

Ресурс полнотекстового поиска

## CONTENT

Ресурс полнотекстового поиска

Базовые классы:
* ResourceObject


# ::stappler::web::ResourceSearch::ResourceSearch(stappler::web::Resource::Transaction const&,stappler::web::Resource::QueryList&&,stappler::web::Resource::Field const*)

## BRIEF

Конструктор

## CONTENT

Доступ: public

Конструктор

Параметры:
* stappler::web::Resource::Transaction const&
* stappler::web::Resource::QueryList&&
* stappler::web::Resource::Field const*


# ::stappler::web::ResourceSearch::getResultObject()

## BRIEF

Возвращает результат

## CONTENT

Доступ: public

Возвращает результат

Возвращает:
* stappler::mem_pool::Value

# ::stappler::web::ResourceSearch::makeHeadlines(stappler::mem_pool::Value&,stappler::mem_pool::Value const&,Vector<stappler::mem_pool::String> const&)

## BRIEF

Подготавливает информацию о совпадениях в тексте

## CONTENT

Доступ: protected

Подготавливает информацию о совпадениях в тексте

Параметры:
* stappler::mem_pool::Value&
* stappler::mem_pool::Value const&
* Vector<stappler::mem_pool::String> const&


# ::stappler::web::ResourceSearch::makeHeadline(stappler::StringView const&,stappler::mem_pool::Value const&,Vector<stappler::mem_pool::String> const&)

## BRIEF

Подготавливает информацию о совпадениях в тексте

## CONTENT

Доступ: protected

Подготавливает информацию о совпадениях в тексте

Параметры:
* stappler::StringView const&
* stappler::mem_pool::Value const&
* Vector<stappler::mem_pool::String> const&

Возвращает:
* stappler::mem_pool::String

# ::stappler::web::ResourceSearch::getObjectLine(stappler::mem_pool::Value const&,stappler::StringView const&)

## BRIEF

Возвращает поле поискового совпадения

## CONTENT

Доступ: protected

Возвращает поле поискового совпадения

Параметры:
* stappler::mem_pool::Value const&
* stappler::StringView const&

Возвращает:
* stappler::mem_pool::Value const*

# ::stappler::web::ResourceSearch::_field

## BRIEF

Поле для поиска

## CONTENT

Доступ: protected

Поле для поиска

Тип: stappler::web::Resource::Field const*
