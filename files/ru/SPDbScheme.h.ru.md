Title: STStorageScheme.h


# STAPPLER_DB_SPDBSCHEME_H_

## BRIEF

Заголовок схемы данных

## CONTENT

Заголовок схемы данных


# ::stappler::db::Scheme

## BRIEF

Структура схемы данных

## CONTENT

Структура схемы данных

Базовые классы:
* AllocBase


# ::stappler::db::Scheme::Options

## BRIEF

Функциональные возможности схемы данных

## CONTENT

Доступ: public

Функциональные возможности схемы данных

Значения:
* None
* WithDelta - поддерживает дельта-запросы
* Detouched - не использует распределение идентификаторов в рамках всей системы, использует независимые идентификаторы. По умолчанию, в системе используется сквозной счётчик идентификаторов для всех схем данных.
* Compressed - запрашивет сжатие на уровне схемы (если поддерживается)


# ::stappler::db::Scheme::ViewScheme

## BRIEF

Схема применения поля-отображения или автоматического поля

## CONTENT

Доступ: public

Схема применения поля-отображения или автоматического поля

Базовые классы:
* AllocBase


# ::stappler::db::Scheme::ViewScheme::scheme

## BRIEF

Исходная схема

## CONTENT

Исходная схема

Тип: stappler::db::Scheme const*


# ::stappler::db::Scheme::ViewScheme::viewField

## BRIEF

Поле оотображения в исходной схеме

## CONTENT

Поле оотображения в исходной схеме

Тип: stappler::db::Field const*


# ::stappler::db::Scheme::ViewScheme::fields

## BRIEF

Требуемые для работы отображения поля текущей схемы

## CONTENT

Требуемые для работы отображения поля текущей схемы

Тип: Set<const stappler::db::Field *>


# ::stappler::db::Scheme::ViewScheme::autoLink

## BRIEF

Поле, определённое для связи автоматически

## CONTENT

Поле, определённое для связи автоматически

Тип: stappler::db::Field const*


# ::stappler::db::Scheme::ViewScheme::autoField

## BRIEF

Определение автоматического поля

## CONTENT

Определение автоматического поля

Тип: stappler::db::AutoFieldScheme const*


# ::stappler::db::Scheme::ViewScheme::ViewScheme(stappler::db::Scheme const*,stappler::db::Field const*,stappler::db::FieldView const&)

## BRIEF

Конструирует схему связи для отображения

## CONTENT

Конструирует схему связи для отображения

Параметры:
* stappler::db::Scheme const*
* stappler::db::Field const*
* stappler::db::FieldView const&


# ::stappler::db::Scheme::ViewScheme::ViewScheme(stappler::db::Scheme const*,stappler::db::Field const*,stappler::db::AutoFieldScheme const&)

## BRIEF

Конструирует схему связи для автоматического поля

## CONTENT

Конструирует схему связи для автоматического поля

Параметры:
* stappler::db::Scheme const*
* stappler::db::Field const*
* stappler::db::AutoFieldScheme const&


# ::stappler::db::Scheme::ParentScheme

## BRIEF

Связь с родительской схемой

## CONTENT

Доступ: public

Связь с родительской схемой

Базовые классы:
* AllocPool


# ::stappler::db::Scheme::ParentScheme::scheme

## BRIEF

Исходная схема

## CONTENT

Исходная схема

Тип: stappler::db::Scheme const*


# ::stappler::db::Scheme::ParentScheme::pointerField

## BRIEF

Поле, указывающее на исходную схему

## CONTENT

Поле, указывающее на исходную схему

Тип: stappler::db::Field const*


# ::stappler::db::Scheme::ParentScheme::backReference

## BRIEF

Поле в исходной схеме, связанное с целевой схемой

## CONTENT

Поле в исходной схеме, связанное с целевой схемой

Тип: stappler::db::Field const*


# ::stappler::db::Scheme::ParentScheme::ParentScheme(stappler::db::Scheme const*,stappler::db::Field const*)

## BRIEF

Конструирует связь с родительской схемой

## CONTENT

Конструирует связь с родительской схемой

Параметры:
* stappler::db::Scheme const*
* stappler::db::Field const*


# ::stappler::db::Scheme::UniqueConstraint

## BRIEF

Тип ограничения уникальности

## CONTENT

Доступ: public

Тип ограничения уникальности


# ::stappler::db::Scheme::UniqueConstraint::name

## BRIEF

Имя ограничения

## CONTENT

Имя ограничения

Тип: stappler::StringView


# ::stappler::db::Scheme::UniqueConstraint::fields

## BRIEF

Поля, которые в совокупности должны быть уникальными

## CONTENT

Поля, которые в совокупности должны быть уникальными

Тип: Vector<const stappler::db::Field *>


# ::stappler::db::Scheme::UniqueConstraint::UniqueConstraint(stappler::StringView,Vector<const stappler::db::Field *>&&)

## BRIEF

Конструирует ограничение уникальности

## CONTENT

Конструирует ограничение уникальности

Параметры:
* stappler::StringView
* Vector<const stappler::db::Field *>&&


# ::stappler::db::Scheme::TransformAction

## BRIEF

Тип действия для трансформации входных данных

## CONTENT

Доступ: public

Тип действия для трансформации входных данных

Значения:
* Create
* Update
* Compare
* ProtectedCreate
* ProtectedUpdate
* Touch


# ::stappler::db::Scheme::FieldVec

## BRIEF

Тип списка полей

## CONTENT

Доступ: public

Тип списка полей


# ::stappler::db::Scheme::AccessTable

## BRIEF

Тип таблицы для контроля доступа

## CONTENT

Доступ: public

Тип таблицы для контроля доступа


# ::stappler::db::Scheme::EmptyFieldList()

## BRIEF

Возвращает пустой список полей для сравнения

## CONTENT

Доступ: public

Возвращает пустой список полей для сравнения. Пустой список полей при запросе отличается по действию от неуказанного списка полей.

Возвращает:
* FieldVec

# ::stappler::db::Scheme::initSchemes(Map<stappler::StringView, const stappler::db::Scheme *> const&)

## BRIEF

Инициализирует список схем данных

## CONTENT

Доступ: public

Инициализирует список схем данных, вычисляет связи между ними

Параметры:
* Map<stappler::StringView, const stappler::db::Scheme *> const&

Возвращает:
* bool - true если не найдено ошибок связности

# ::stappler::db::Scheme::Scheme(stappler::StringView const&,bool)

## BRIEF

Инициализирует схему данных с именем и флагом доступности дельта-запросов

## CONTENT

Доступ: public

Инициализирует схему данных с именем и флагом доступности дельта-запросов. Имя схемы соотвествует имени таблицы в БД. При создании схемы с возможностью дельта-запросов создаётся дополнительные таблицы и индексы, что повышает нагрузку на БД.

Параметры:
* stappler::StringView const&
* bool


# ::stappler::db::Scheme::Scheme(stappler::StringView const&,stappler::db::Scheme::Options)

## BRIEF

Инициализирует схему данных с именем и флагами

## CONTENT

Доступ: public

Инициализирует схему данных с именем и флагами. Имя схемы соотвествует имени таблицы в БД. При создании схемы с возможностью дельта-запросов создаётся дополнительные таблицы и индексы, что повышает нагрузку на БД.

Параметры:
* stappler::StringView const&
* stappler::db::Scheme::Options


# ::stappler::db::Scheme::Scheme(stappler::StringView const&,std::initializer_list<Field>,bool)

## BRIEF

Инициализирует схему данных с именем и списком полей

## CONTENT

Доступ: public

Инициализирует схему данных с именем и списком полей. Имя схемы соотвествует имени таблицы в БД. При создании схемы с возможностью дельта-запросов создаётся дополнительные таблицы и индексы, что повышает нагрузку на БД.

Параметры:
* stappler::StringView const&
* std::initializer_list<Field>
* bool - true если необходима возможность дельта-запросов


# ::stappler::db::Scheme::Scheme(stappler::StringView const&,std::initializer_list<Field>,stappler::db::Scheme::Options)

## BRIEF

Инициализирует схему данных с именем и списком полей

## CONTENT

Доступ: public

Инициализирует схему данных с именем и списком полей. Имя схемы соотвествует имени таблицы в БД. При создании схемы с возможностью дельта-запросов создаётся дополнительные таблицы и индексы, что повышает нагрузку на БД.

Параметры:
* stappler::StringView const&
* std::initializer_list<Field>
* stappler::db::Scheme::Options


# ::stappler::db::Scheme::Scheme(stappler::db::Scheme const&)

## BRIEF

Запрет копирования

## CONTENT

Доступ: public

Запрет копирования

Параметры:
* stappler::db::Scheme const&


# ::stappler::db::Scheme::operator=(stappler::db::Scheme const&)

## BRIEF

Запрет копирования

## CONTENT

Доступ: public

Запрет копирования

Параметры:
* stappler::db::Scheme const&

Возвращает:
* stappler::db::Scheme&

# ::stappler::db::Scheme::Scheme(stappler::db::Scheme&&)

## BRIEF

Конструктор перемещения

## CONTENT

Доступ: public

Конструктор перемещения

Параметры:
* stappler::db::Scheme&&


# ::stappler::db::Scheme::operator=(stappler::db::Scheme&&)

## BRIEF

Оператор перемещения

## CONTENT

Доступ: public

Оператор перемещения

Параметры:
* stappler::db::Scheme&&

Возвращает:
* stappler::db::Scheme&

# ::stappler::db::Scheme::hasDelta() const

## BRIEF

Проверяет, поддерживает ли схема дельта-запросы

## CONTENT

Доступ: public

Проверяет, поддерживает ли схема дельта-запросы

Возвращает:
* bool

# ::stappler::db::Scheme::isDetouched() const

## BRIEF

Проверяет, использует ли схема независимые идентификаторы

## CONTENT

Доступ: public

Проверяет, использует ли схема независимые идентификаторы

Возвращает:
* bool

# ::stappler::db::Scheme::isCompressed() const

## BRIEF

Проверяет, запращивает ли схема сжатие на уровне схемы

## CONTENT

Доступ: public

Проверяет, запращивает ли схема сжатие на уровне схемы

Возвращает:
* bool

# ::stappler::db::Scheme::define(std::initializer_list<Field>)

## BRIEF

Опеределяет поля для схемы

## CONTENT

Доступ: public

Опеределяет поля для схемы. Обычно поля определяются после того, как схема создана, для возможности связи полей с другими схемами, заранее созданными.

Параметры:
* std::initializer_list<Field>

Возвращает:
* stappler::db::Scheme const&

# ::stappler::db::Scheme::define(Vector<stappler::db::Field>&&)

## BRIEF

Опеределяет поля для схемы

## CONTENT

Доступ: public

Опеределяет поля для схемы. Обычно поля определяются после того, как схема создана, для возможности связи полей с другими схемами, заранее созданными.

Параметры:
* Vector<stappler::db::Field>&&

Возвращает:
* stappler::db::Scheme const&

# ::stappler::db::Scheme::define(stappler::db::AccessRole&&)

## BRIEF

Определяет права доступа для схемы

## CONTENT

Доступ: public

Определяет права доступа для схемы

Параметры:
* stappler::db::AccessRole&&

Возвращает:
* stappler::db::Scheme const&

# ::stappler::db::Scheme::define(stappler::db::UniqueConstraintDef&&)

## BRIEF

Определяет внешнее ограничение уникальности

## CONTENT

Доступ: public

Определяет внешнее ограничение уникальности

Параметры:
* stappler::db::UniqueConstraintDef&&

Возвращает:
* stappler::db::Scheme const&

# ::stappler::db::Scheme::define(stappler::mem_pool::Bytes&&)

## BRIEF

Определяет словарь для сжатия на уровне схемы

## CONTENT

Доступ: public

Определяет словарь для сжатия на уровне схемы

Параметры:
* stappler::mem_pool::Bytes&&

Возвращает:
* stappler::db::Scheme const&

# ::stappler::db::Scheme::define<typename,typename>(T&&,Args &&...)

## BRIEF

Функция для определения параметров схемы через набор аргументов переменной длины

## CONTENT

Доступ: public

Функция для определения параметров схемы через набор аргументов переменной длины

Параметры шаблона:
* typename T
* typename Args

Параметры:
* T&&
* Args &&...

Возвращает:
* stappler::db::Scheme const&

# ::stappler::db::Scheme::addFlags(stappler::db::Scheme::Options)

## BRIEF

Добавляет флаг схемы

## CONTENT

Доступ: public

Добавляет флаг схемы

Параметры:
* stappler::db::Scheme::Options


# ::stappler::db::Scheme::cloneFrom(stappler::db::Scheme*)

## BRIEF

Клонирует поля из другой схемы

## CONTENT

Доступ: public

Клонирует поля из другой схемы

Параметры:
* stappler::db::Scheme*


# ::stappler::db::Scheme::getName() const

## BRIEF

Возвращает имя схемы

## CONTENT

Доступ: public

Возвращает имя схемы

Возвращает:
* stappler::StringView

# ::stappler::db::Scheme::hasAliases() const

## BRIEF

Проверяет, определяет ли одно из полей псевдоним для объектов схемы

## CONTENT

Доступ: public

Проверяет, определяет ли одно из полей псевдоним для объектов схемы

Возвращает:
* bool

# ::stappler::db::Scheme::isProtected(stappler::StringView const&) const

## BRIEF

Проверяет, защищено ли поле от пользователя

## CONTENT

Доступ: public

Проверяет, защищено ли поле от пользователя

Параметры:
* stappler::StringView const&

Возвращает:
* bool

# ::stappler::db::Scheme::save(stappler::db::Transaction const&,stappler::db::Object*) const

## BRIEF

Сохраняет изменения в ранее полученном объекте

## CONTENT

Доступ: public

Сохраняет изменения в ранее полученном объекте

Параметры:
* stappler::db::Transaction const&
* stappler::db::Object*

Возвращает:
* bool

# ::stappler::db::Scheme::hasFiles() const

## BRIEF

Проверяет, есть ли среди полей файлы

## CONTENT

Доступ: public

Проверяет, есть ли среди полей файлы

Возвращает:
* bool

# ::stappler::db::Scheme::hasForceExclude() const

## BRIEF

Проверяет, есть ли в схеме принудительно исключённые поля

## CONTENT

Доступ: public

Проверяет, есть ли в схеме принудительно исключённые поля

Возвращает:
* bool

# ::stappler::db::Scheme::hasAccessControl() const

## BRIEF

Проверяет, определён ли контроль доступа в схеме

## CONTENT

Доступ: public

Проверяет, определён ли контроль доступа в схеме

Возвращает:
* bool

# ::stappler::db::Scheme::hasVirtuals() const

## BRIEF

Проверяет, есть ли в схеме виртуальные поля

## CONTENT

Доступ: public

Проверяет, есть ли в схеме виртуальные поля

Возвращает:
* bool

# ::stappler::db::Scheme::getForceInclude() const

## BRIEF

Проверяет, есть ли в схеме принудительно включённые поля

## CONTENT

Доступ: public

Проверяет, есть ли в схеме принудительно включённые поля

Возвращает:
* Set<const stappler::db::Field *> const&

# ::stappler::db::Scheme::getFields() const

## BRIEF

Возвращает поля, определённые в схеме

## CONTENT

Доступ: public

Возвращает поля, определённые в схеме

Возвращает:
* Map<stappler::mem_pool::String, stappler::db::Field> const&

# ::stappler::db::Scheme::getField(stappler::StringView const&) const

## BRIEF

Возвращает поле по имени

## CONTENT

Доступ: public

Возвращает поле по имени

Параметры:
* stappler::StringView const&

Возвращает:
* stappler::db::Field const*

# ::stappler::db::Scheme::getUnique() const

## BRIEF

Возвращает ограничение уникальности

## CONTENT

Доступ: public

Возвращает ограничение уникальности

Возвращает:
* Vector<stappler::db::Scheme::UniqueConstraint> const&

# ::stappler::db::Scheme::getCompressDict() const

## BRIEF

Возвращает словарь для сжатия на уровне схемы

## CONTENT

Доступ: public

Возвращает словарь для сжатия на уровне схемы

Возвращает:
* stappler::BytesView

# ::stappler::db::Scheme::getForeignLink(stappler::db::FieldObject const*) const

## BRIEF

Возвращает внешнее поле, с которым связано исходное

## CONTENT

Доступ: public

Возвращает внешнее поле, с которым связано исходное

Параметры:
* stappler::db::FieldObject const*

Возвращает:
* stappler::db::Field const*

# ::stappler::db::Scheme::getForeignLink(stappler::db::Field const&) const

## BRIEF

Возвращает внешнее поле, с которым связано исходное

## CONTENT

Доступ: public

Возвращает внешнее поле, с которым связано исходное

Параметры:
* stappler::db::Field const&

Возвращает:
* stappler::db::Field const*

# ::stappler::db::Scheme::getForeignLink(stappler::StringView const&) const

## BRIEF

Возвращает внешнее поле, с которым связано исходное

## CONTENT

Доступ: public

Возвращает внешнее поле, с которым связано исходное

Параметры:
* stappler::StringView const&

Возвращает:
* stappler::db::Field const*

# ::stappler::db::Scheme::setConfig(stappler::db::InputConfig)

## BRIEF

Устанавливает ограничения для размера контента для схемы

## CONTENT

Доступ: public

Устанавливает ограничения для размера контента для схемы

Параметры:
* stappler::db::InputConfig


# ::stappler::db::Scheme::getConfig() const

## BRIEF

Возвращает ограничения для размера контента для схемы

## CONTENT

Доступ: public

Возвращает ограничения для размера контента для схемы. Ограничения установлены извне или вычислены автоматически.

Возвращает:
* stappler::db::InputConfig const&

# ::stappler::db::Scheme::getMaxRequestSize() const

## BRIEF

Возвращает максимальный размер запроса в байтах к схеме

## CONTENT

Доступ: public

Возвращает максимальный размер запроса в байтах к схеме

Возвращает:
* size_t

# ::stappler::db::Scheme::getMaxVarSize() const

## BRIEF

Возвращает максимальный переменной в запросе в байтах

## CONTENT

Доступ: public

Возвращает максимальный переменной в запросе в байтах

Возвращает:
* size_t

# ::stappler::db::Scheme::getMaxFileSize() const

## BRIEF

Возвращает максимальный размер файла в схеме

## CONTENT

Доступ: public

Возвращает максимальный размер файла в схеме

Возвращает:
* size_t

# ::stappler::db::Scheme::isAtomicPatch(stappler::mem_pool::Value const&) const

## BRIEF

Проверяет, является ли набор изменений к объекта применимым атомарно

## CONTENT

Доступ: public

Проверяет, является ли набор изменений к объекта применимым атомарно (без получения самого объекта)

Параметры:
* stappler::mem_pool::Value const&

Возвращает:
* bool

# ::stappler::db::Scheme::hash(stappler::db::ValidationLevel) const

## BRIEF

Возвращает хэш схемы

## CONTENT

Доступ: public

Возвращает хэш схемы

Параметры:
* stappler::db::ValidationLevel - уровень валидации схемы

Возвращает:
* uint64_t

# ::stappler::db::Scheme::getViews() const

## BRIEF

Возвращает схемы для отображений в схеме данных

## CONTENT

Доступ: public

Возвращает схемы для отображений в схеме данных

Возвращает:
* Vector<stappler::db::Scheme::ViewScheme *> const&

# ::stappler::db::Scheme::getPatchFields(stappler::mem_pool::Value const&) const

## BRIEF

Возвращает список полей, содержащихся в запросе изменения

## CONTENT

Доступ: public

Возвращает список полей, содержащихся в запросе изменения

Параметры:
* stappler::mem_pool::Value const&

Возвращает:
* Vector<const stappler::db::Field *>

# ::stappler::db::Scheme::getAccessTable() const

## BRIEF

Возвращает таблицу контроля доступа

## CONTENT

Доступ: public

Возвращает таблицу контроля доступа

Возвращает:
* AccessTable&

# ::stappler::db::Scheme::getAccessRole(stappler::db::AccessRoleId) const

## BRIEF

Возвращает структуру контроля доступа для роли

## CONTENT

Доступ: public

Возвращает структуру контроля доступа для роли

Параметры:
* stappler::db::AccessRoleId

Возвращает:
* stappler::db::AccessRole const*

# ::stappler::db::Scheme::setAccessRole(stappler::db::AccessRoleId,stappler::db::AccessRole&&)

## BRIEF

Устанавливает структуру контроля доступа для роли

## CONTENT

Доступ: public

Устанавливает структуру контроля доступа для роли

Параметры:
* stappler::db::AccessRoleId
* stappler::db::AccessRole&&


# ::stappler::db::Scheme::transform(stappler::mem_pool::Value&,stappler::db::Scheme::TransformAction) const

## BRIEF

Трансформирует данные для сохранения в БД

## CONTENT

Доступ: public

Трансформирует данные для сохранения в БД

Параметры:
* stappler::mem_pool::Value&
* stappler::db::Scheme::TransformAction

Возвращает:
* stappler::mem_pool::Value&

# ::stappler::db::Scheme::get<typename,typename>(Storage&&,_Value&&,stappler::db::UpdateFlags) const

## BRIEF

Подготавливает запрос для получения объекта

## CONTENT

Доступ: public

Подготавливает запрос для получения объекта. Передаётся в `Worker`.

Параметры шаблона:
* typename Storage
* typename _Value

Параметры:
* Storage&&
* _Value&&
* stappler::db::UpdateFlags

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Scheme::get<typename,typename>(Storage&&,_Value&&,stappler::StringView,stappler::db::UpdateFlags) const

## BRIEF

Подготавливает запрос для получения объекта

## CONTENT

Доступ: public

Подготавливает запрос для получения объекта. Передаётся в `Worker`.

Параметры шаблона:
* typename Storage
* typename _Value

Параметры:
* Storage&&
* _Value&&
* stappler::StringView
* stappler::db::UpdateFlags

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Scheme::get<typename,typename>(Storage&&,_Value&&,std::initializer_list<StringView>&&,stappler::db::UpdateFlags) const

## BRIEF

Подготавливает запрос для получения объекта

## CONTENT

Доступ: public

Подготавливает запрос для получения объекта. Передаётся в `Worker`.

Параметры шаблона:
* typename Storage
* typename _Value

Параметры:
* Storage&&
* _Value&&
* std::initializer_list<StringView>&&
* stappler::db::UpdateFlags

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Scheme::get<typename,typename>(Storage&&,_Value&&,std::initializer_list<const char *>&&,stappler::db::UpdateFlags) const

## BRIEF

Подготавливает запрос для получения объекта

## CONTENT

Доступ: public

Подготавливает запрос для получения объекта. Передаётся в `Worker`.

Параметры шаблона:
* typename Storage
* typename _Value

Параметры:
* Storage&&
* _Value&&
* std::initializer_list<const char *>&&
* stappler::db::UpdateFlags

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Scheme::get<typename,typename>(Storage&&,_Value&&,std::initializer_list<const Field *>&&,stappler::db::UpdateFlags) const

## BRIEF

Подготавливает запрос для получения объекта

## CONTENT

Доступ: public

Подготавливает запрос для получения объекта. Передаётся в `Worker`.

Параметры шаблона:
* typename Storage
* typename _Value

Параметры:
* Storage&&
* _Value&&
* std::initializer_list<const Field *>&&
* stappler::db::UpdateFlags

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Scheme::get<typename,typename>(Storage&&,_Value&&,SpanView<const stappler::db::Field *>,stappler::db::UpdateFlags) const

## BRIEF

Подготавливает запрос для получения объекта

## CONTENT

Доступ: public

Подготавливает запрос для получения объекта. Передаётся в `Worker`.

Параметры шаблона:
* typename Storage
* typename _Value

Параметры:
* Storage&&
* _Value&&
* SpanView<const stappler::db::Field *>
* stappler::db::UpdateFlags

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Scheme::foreach<typename>(T&&,stappler::db::Query const&,Callback<bool (stappler::mem_pool::Value &)> const&,stappler::db::UpdateFlags) const

## BRIEF

Подготавливает запрос для получения объектов

## CONTENT

Доступ: public

Подготавливает запрос для получения объектов. Передаётся в `Worker`.

Параметры шаблона:
* typename T

Параметры:
* T&&
* stappler::db::Query const&
* Callback<bool (stappler::mem_pool::Value &)> const&
* stappler::db::UpdateFlags

Возвращает:
* bool

# ::stappler::db::Scheme::select<typename,typename>(T&&,Args &&...) const

## BRIEF

Подготавливает запрос для получения объектов

## CONTENT

Доступ: public

Подготавливает запрос для получения объектов. Передаётся в `Worker`.

Параметры шаблона:
* typename T
* typename Args

Параметры:
* T&&
* Args &&...

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Scheme::create<typename,typename>(T&&,Args &&...) const

## BRIEF

Подготавливает запрос для создания объекта

## CONTENT

Доступ: public

Подготавливает запрос для создания объекта. Передаётся в `Worker`.

Параметры шаблона:
* typename T
* typename Args

Параметры:
* T&&
* Args &&...

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Scheme::update<typename,typename>(T&&,Args &&...) const

## BRIEF

Подготавливает запрос для обновления объекта

## CONTENT

Доступ: public

Подготавливает запрос для обновления объекта. Передаётся в `Worker`.

Параметры шаблона:
* typename T
* typename Args

Параметры:
* T&&
* Args &&...

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Scheme::remove<typename,typename>(T&&,Args &&...) const

## BRIEF

Подготавливает запрос для удаления объекта

## CONTENT

Доступ: public

Подготавливает запрос для удаления объекта. Передаётся в `Worker`.

Параметры шаблона:
* typename T
* typename Args

Параметры:
* T&&
* Args &&...

Возвращает:
* bool

# ::stappler::db::Scheme::count<typename,typename>(T&&,Args &&...) const

## BRIEF

Подготавливает запрос для подсчёта числа объектов

## CONTENT

Доступ: public

Подготавливает запрос для подсчёта числа объектов. Передаётся в `Worker`.

Параметры шаблона:
* typename T
* typename Args

Параметры:
* T&&
* Args &&...

Возвращает:
* size_t

# ::stappler::db::Scheme::touch<typename,typename>(T&&,Args &&...) const

## BRIEF

Подготавливает запрос для обновления времени жизни объекта

## CONTENT

Доступ: public

Подготавливает запрос для обновления времени жизни объекта. Передаётся в `Worker`.

Параметры шаблона:
* typename T
* typename Args

Параметры:
* T&&
* Args &&...


# ::stappler::db::Scheme::getProperty<typename,typename,typename>(_Storage&&,_Value&&,_Field&&,std::initializer_list<StringView>) const

## BRIEF

Подготавливает запрос для получения поля объекта

## CONTENT

Доступ: public

Подготавливает запрос для получения поля объекта. Передаётся в `Worker`.

Параметры шаблона:
* typename _Storage
* typename _Value
* typename _Field

Параметры:
* _Storage&&
* _Value&&
* _Field&&
* std::initializer_list<StringView>

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Scheme::getProperty<typename,typename,typename>(_Storage&&,_Value&&,_Field&&,Set<const stappler::db::Field *> const&) const

## BRIEF

Подготавливает запрос для получения поля объекта

## CONTENT

Доступ: public

Подготавливает запрос для получения поля объекта. Передаётся в `Worker`.

Параметры шаблона:
* typename _Storage
* typename _Value
* typename _Field

Параметры:
* _Storage&&
* _Value&&
* _Field&&
* Set<const stappler::db::Field *> const&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Scheme::setProperty<typename,typename>(T&&,Args &&...) const

## BRIEF

Подготавливает запрос для установки поля объекта

## CONTENT

Доступ: public

Подготавливает запрос для установки поля объекта. Передаётся в `Worker`.

Параметры шаблона:
* typename T
* typename Args

Параметры:
* T&&
* Args &&...

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Scheme::appendProperty<typename,typename>(T&&,Args &&...) const

## BRIEF

Подготавливает запрос для добавления значения к полю объекта

## CONTENT

Доступ: public

Подготавливает запрос для добавления значения к полю объекта. Передаётся в `Worker`.

Параметры шаблона:
* typename T
* typename Args

Параметры:
* T&&
* Args &&...

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Scheme::clearProperty<typename,typename>(T&&,Args &&...) const

## BRIEF

Подготавливает запрос для удаления значения из поля объекта

## CONTENT

Доступ: public

Подготавливает запрос для удаления значения из поля объекта. Передаётся в `Worker`.

Параметры шаблона:
* typename T
* typename Args

Параметры:
* T&&
* Args &&...

Возвращает:
* bool

# ::stappler::db::Scheme::countProperty<typename,typename>(T&&,Args &&...) const

## BRIEF

Подготавливает запрос для подсчёта числа значений в поле объекта

## CONTENT

Доступ: public

Подготавливает запрос для подсчёта числа значений в поле объекта. Передаётся в `Worker`.

Параметры шаблона:
* typename T
* typename Args

Параметры:
* T&&
* Args &&...

Возвращает:
* size_t

# ::stappler::db::Scheme::foreachWithWorker(stappler::db::Worker&,stappler::db::Query const&,Callback<bool (stappler::mem_pool::Value &)> const&) const

## BRIEF

Выполняет запрос перечисления объектов, подготовленый в `Worker`.

## CONTENT

Доступ: protected

Выполняет запрос перечисления объектов, подготовленый в `Worker`.

Параметры:
* stappler::db::Worker&
* stappler::db::Query const&
* Callback<bool (stappler::mem_pool::Value &)> const& - функция перечисления

Возвращает:
* bool - true при успешном выполнении

# ::stappler::db::Scheme::selectWithWorker(stappler::db::Worker&,stappler::db::Query const&) const

## BRIEF

Выполняет запрос получения объектов, подготовленый в `Worker`.

## CONTENT

Доступ: protected

Выполняет запрос получения объектов, подготовленый в `Worker`.

Параметры:
* stappler::db::Worker&
* stappler::db::Query const&

Возвращает:
* stappler::mem_pool::Value - полученные объекты

# ::stappler::db::Scheme::createWithWorker(stappler::db::Worker&,stappler::mem_pool::Value const&,bool) const

## BRIEF

Выполняет запрос создания объекта, подготовленый в `Worker`.

## CONTENT

Доступ: protected

Выполняет запрос создания объекта, подготовленый в `Worker`.

Параметры:
* stappler::db::Worker&
* stappler::mem_pool::Value const& - данные для создания
* bool - true если работает в безопасном окружении

Возвращает:
* stappler::mem_pool::Value - данные нового объекта

# ::stappler::db::Scheme::updateWithWorker(stappler::db::Worker&,uint64_t,stappler::mem_pool::Value const&,bool) const

## BRIEF

Выполняет запрос обновления объекта, подготовленый в `Worker`.

## CONTENT

Доступ: protected

Выполняет запрос обновления объекта, подготовленый в `Worker`. Обновление может быть атомарным, либо требует предварительного получения обновляемого объекта

Параметры:
* stappler::db::Worker&
* uint64_t - ид обновляемого объекта
* stappler::mem_pool::Value const& - данные для обновления
* bool - true если работает в безопасном окружении

Возвращает:
* stappler::mem_pool::Value - обновлённые данные


# ::stappler::db::Scheme::updateWithWorker(stappler::db::Worker&,stappler::mem_pool::Value const&,stappler::mem_pool::Value const&,bool) const

## BRIEF

Выполняет запрос обновления объекта, подготовленый в `Worker`.

## CONTENT

Доступ: protected

Выполняет запрос обновления объекта, подготовленый в `Worker`. Обновление может быть атомарным, либо требует предварительного получения обновляемого объекта

Параметры:
* stappler::db::Worker&
* stappler::mem_pool::Value const& - исходный объект
* stappler::mem_pool::Value const& - данные для обновления
* bool - true если работает в безопасном окружении

Возвращает:
* stappler::mem_pool::Value - обновлённые данные

# ::stappler::db::Scheme::removeWithWorker(stappler::db::Worker&,uint64_t) const

## BRIEF

Выполняет запрос удаления объекта, подготовленый в `Worker`.

## CONTENT

Доступ: protected

Выполняет запрос удаления объекта, подготовленый в `Worker`

Параметры:
* stappler::db::Worker&
* uint64_t - ид объекта для удаления

Возвращает:
* bool - true если успешно

# ::stappler::db::Scheme::countWithWorker(stappler::db::Worker&,stappler::db::Query const&) const

## BRIEF

Выполняет запрос подсчёта объектов, подготовленый в `Worker`.

## CONTENT

Доступ: protected

Выполняет запрос подсчёта объектов, подготовленый в `Worker`

Параметры:
* stappler::db::Worker&
* stappler::db::Query const&

Возвращает:
* size_t - результат подсчёта

# ::stappler::db::Scheme::touchWithWorker(stappler::db::Worker&,uint64_t) const

## BRIEF

Выполняет запрос обновления объекта, подготовленый в `Worker`.

## CONTENT

Доступ: protected

Выполняет запрос обновления объекта, подготовленый в `Worker`

Доступ: protected

Параметры:
* stappler::db::Worker&
* uint64_t - ид объекта


# ::stappler::db::Scheme::touchWithWorker(stappler::db::Worker&,stappler::mem_pool::Value const&) const

## BRIEF

Выполняет запрос обновления объекта, подготовленый в `Worker`.

## CONTENT

Доступ: protected

Выполняет запрос обновления объекта, подготовленый в `Worker`

Параметры:
* stappler::db::Worker&
* stappler::mem_pool::Value const& - исходный объект


# ::stappler::db::Scheme::fieldWithWorker(stappler::db::Action,stappler::db::Worker&,uint64_t,stappler::db::Field const&,stappler::mem_pool::Value&&) const

## BRIEF

Выполняет запрос к полю объекта, подготовленый в `Worker`.

## CONTENT

Доступ: protected

Выполняет запрос к полю объекта, подготовленый в `Worker`.

Параметры:
* stappler::db::Action - действие для поля
* stappler::db::Worker&
* uint64_t - ид объекта
* stappler::db::Field const&
* stappler::mem_pool::Value&& - значение для действия

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Scheme::fieldWithWorker(stappler::db::Action,stappler::db::Worker&,stappler::mem_pool::Value const&,stappler::db::Field const&,stappler::mem_pool::Value&&) const

## BRIEF

Выполняет запрос к полю объекта, подготовленый в `Worker`.

## CONTENT

Доступ: protected

Выполняет запрос к полю объекта, подготовленый в `Worker`.

Параметры:
* stappler::db::Action - действие для поля
* stappler::db::Worker&
* stappler::mem_pool::Value const& - исходный объект
* stappler::db::Field const&
* stappler::mem_pool::Value&& - значение для действия

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Scheme::setFileWithWorker(stappler::db::Worker&,uint64_t,stappler::db::Field const&,stappler::db::InputFile&) const

## BRIEF

Записывает внешний файл в файловое поле

## CONTENT

Доступ: protected

Записывает внешний файл в файловое поле

Параметры:
* stappler::db::Worker&
* uint64_t
* stappler::db::Field const&
* stappler::db::InputFile&

Возвращает:
* stappler::mem_pool::Value - данные файла из БД


# ::stappler::db::Scheme::initScheme()

## BRIEF

Функция инициализации схемы после установки полей и других данных

## CONTENT

Функция инициализации схемы после установки полей и других данных

Доступ: protected

# ::stappler::db::Scheme::addView(stappler::db::Scheme const*,stappler::db::Field const*)

## BRIEF

Вычисляет схему работы отображения для поля 

## CONTENT

Доступ: protected

Вычисляет схему работы отображения для поля 

Параметры:
* stappler::db::Scheme const*
* stappler::db::Field const*


# ::stappler::db::Scheme::addAutoField(stappler::db::Scheme const*,stappler::db::Field const*,stappler::db::AutoFieldScheme const&)

## BRIEF

Вычисляет схему работы для автоматического поля 

## CONTENT

Доступ: protected

Вычисляет схему работы для автоматического поля 

Параметры:
* stappler::db::Scheme const*
* stappler::db::Field const*
* stappler::db::AutoFieldScheme const&


# ::stappler::db::Scheme::addParent(stappler::db::Scheme const*,stappler::db::Field const*)

## BRIEF

Добавляет родительскую схему по полю

## CONTENT

Доступ: protected

Добавляет родительскую схему по полю

Параметры:
* stappler::db::Scheme const*
* stappler::db::Field const*


# ::stappler::db::Scheme::createFilePatch(stappler::db::Transaction const&,stappler::mem_pool::Value const&,stappler::mem_pool::Value&) const

## BRIEF

Создаёт данные для обновления объекта файла в БД

## CONTENT

Доступ: protected

Создаёт данные для обновления объекта файла в БД

Параметры:
* stappler::db::Transaction const&
* stappler::mem_pool::Value const& - исходный объект
* stappler::mem_pool::Value& - набор изменения

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Scheme::purgeFilePatch(stappler::db::Transaction const&,stappler::mem_pool::Value const&) const

## BRIEF

Создаёт данные для обновления объекта файла при неуспешной операции

## CONTENT

Доступ: protected

Создаёт данные для обновления объекта файла при неуспешной операции

Параметры:
* stappler::db::Transaction const&
* stappler::mem_pool::Value const&


# ::stappler::db::Scheme::mergeValues(stappler::db::Field const&,stappler::mem_pool::Value const&,stappler::mem_pool::Value&,stappler::mem_pool::Value&) const

## BRIEF

Выполняет совмещение данных для поля типа `Extra` на основании имеющихся в поле данных

## CONTENT

Доступ: protected

Выполняет совмещение данных для поля типа `Extra` на основании имеющихся в поле данных. Для этого поля возможны частичные обновления по его схеме.

Параметры:
* stappler::db::Field const&
* stappler::mem_pool::Value const&
* stappler::mem_pool::Value&
* stappler::mem_pool::Value&


# ::stappler::db::Scheme::prepareUpdate(stappler::mem_pool::Value const&,bool) const

## BRIEF

Подготавливает операцию обновления

## CONTENT

Доступ: protected

Подготавливает операцию обновления

Параметры:
* stappler::mem_pool::Value const&
* bool - true для безопасного контекста

Возвращает:
* stappler::Pair<bool, Value>

# ::stappler::db::Scheme::updateObject(stappler::db::Worker&,stappler::mem_pool::Value&,stappler::mem_pool::Value&) const

## BRIEF

Выполняет обновление полученного из БД объекта

## CONTENT

Доступ: protected

Выполняет обновление полученного из БД объекта

Параметры:
* stappler::db::Worker&
* stappler::mem_pool::Value& - исходный объект
* stappler::mem_pool::Value& - данные для изменения

Возвращает:
* stappler::mem_pool::Value - новые данные объекта

# ::stappler::db::Scheme::doPatch(stappler::db::Worker&,stappler::db::Transaction const&,uint64_t,stappler::mem_pool::Value&) const

## BRIEF

Выполняет атомарное обновление объекта

## CONTENT

Доступ: protected

Выполняет атомарное обновление объекта

Параметры:
* stappler::db::Worker&
* stappler::db::Transaction const&
* uint64_t - ид объекта
* stappler::mem_pool::Value& - данные для изменения

Возвращает:
* stappler::mem_pool::Value - новые данные объекта

# ::stappler::db::Scheme::patchOrUpdate(stappler::db::Worker&,uint64_t,stappler::mem_pool::Value&) const

## BRIEF

Выполняет обновление объекта, вычисляет возможность атомарного обновления

## CONTENT

Доступ: protected

Выполняет обновление объекта, вычисляет возможность атомарного обновления

Параметры:
* stappler::db::Worker&
* uint64_t - ид объекта
* stappler::mem_pool::Value&- данные для изменения

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Scheme::patchOrUpdate(stappler::db::Worker&,stappler::mem_pool::Value&,stappler::mem_pool::Value&) const

## BRIEF

Выполняет обновление объекта, вычисляет возможность атомарного обновления

## CONTENT

Доступ: protected

Выполняет обновление объекта, вычисляет возможность атомарного обновления

Параметры:
* stappler::db::Worker&
* stappler::mem_pool::Value const& - исходный объект
* stappler::mem_pool::Value& - данные для изменения

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Scheme::touchParents(stappler::db::Transaction const&,stappler::mem_pool::Value const&) const

## BRIEF

Помечает родительские объекты как обновлённые

## CONTENT

Доступ: protected

Помечает родительские объекты как обновлённые (для флага `Composed` поля объекта или для отображений)

Параметры:
* stappler::db::Transaction const&
* stappler::mem_pool::Value const&


# ::stappler::db::Scheme::extractParents(Map<int64_t, const stappler::db::Scheme *>&,stappler::db::Transaction const&,stappler::mem_pool::Value const&,bool) const

## BRIEF

Заполняет структуру родительских объектов. нуждающихся в обновлении

## CONTENT

Доступ: protected

Заполняет структуру родительских объектов. нуждающихся в обновлении

Параметры:
* Map<int64_t, const stappler::db::Scheme *>&
* stappler::db::Transaction const&
* stappler::mem_pool::Value const&
* bool


# ::stappler::db::Scheme::removeField(stappler::db::Transaction const&,stappler::mem_pool::Value&,stappler::db::Field const&,stappler::mem_pool::Value const&)

## BRIEF

Удаляет объект другой схемы, связанный с полем

## CONTENT

Доступ: protected

Удаляет объект другой схемы, связанный с полем

Параметры:
* stappler::db::Transaction const&
* stappler::mem_pool::Value& - исходный объект
* stappler::db::Field const& - поле для удаления
* stappler::mem_pool::Value const& - данные поля

Возвращает:
* stappler::mem_pool::Value - false или null при неудаче, true или данные для `finalizeField` при успехе

# ::stappler::db::Scheme::finalizeField(stappler::db::Transaction const&,stappler::db::Field const&,stappler::mem_pool::Value const&)

## BRIEF

Завершает удаление объекта поля

## CONTENT

Доступ: protected

Завершает удаление объекта поля

Параметры:
* stappler::db::Transaction const&
* stappler::db::Field const& - поле
* stappler::mem_pool::Value const& - данные из `removeField`


# ::stappler::db::Scheme::createFile(stappler::db::Transaction const&,stappler::db::Field const&,stappler::db::InputFile&) const

## BRIEF

Создаёт в БД объект внешнего файла или изображения

## CONTENT

Доступ: protected

Создаёт в БД объект внешнего файла или изображения

Параметры:
* stappler::db::Transaction const&
* stappler::db::Field const&
* stappler::db::InputFile&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Scheme::createFile(stappler::db::Transaction const&,stappler::db::Field const&,stappler::BytesView const&,stappler::StringView const&,int64_t) const

## BRIEF

Создаёт в БД объект внешнего файла или изображения

## CONTENT

Доступ: protected

Создаёт в БД объект внешнего файла или изображения

Параметры:
* stappler::db::Transaction const&
* stappler::db::Field const&
* stappler::BytesView const& - данные файла
* stappler::StringView const& - тип файла
* int64_t - время изменения файла

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Scheme::makeObjectForPatch(stappler::db::Transaction const&,uint64_t,stappler::mem_pool::Value const&,stappler::mem_pool::Value const&) const

## BRIEF

Получает из БД объект для обновления

## CONTENT

Доступ: protected

Получает из БД объект для обновления

Параметры:
* stappler::db::Transaction const&
* uint64_t - ид объекта
* stappler::mem_pool::Value const& - известные данные объекта
* stappler::mem_pool::Value const& - данные для обновления

Возвращает:
* stappler::mem_pool::Value - полученный из БД объект

# ::stappler::db::Scheme::updateLimits()

## BRIEF

Вычисляет предельные значения для получения данных

## CONTENT

Доступ: protected

Вычисляет предельные значения для получения данных


# ::stappler::db::Scheme::validateHint(uint64_t,stappler::mem_pool::Value const&)

## BRIEF

Проверяет, правильно ли сформированы данные для создания или обновления объекта

## CONTENT

Доступ: protected

Проверяет, правильно ли сформированы данные для создания или обновления объекта

Параметры:
* uint64_t
* stappler::mem_pool::Value const&

Возвращает:
* bool

# ::stappler::db::Scheme::validateHint(stappler::mem_pool::String const&,stappler::mem_pool::Value const&)

## BRIEF

Проверяет, правильно ли сформированы данные для создания или обновления объекта

## CONTENT

Доступ: protected

Проверяет, правильно ли сформированы данные для создания или обновления объекта

Параметры:
* stappler::mem_pool::String const&
* stappler::mem_pool::Value const&

Возвращает:
* bool

# ::stappler::db::Scheme::validateHint(stappler::mem_pool::Value const&)

## BRIEF

Проверяет, правильно ли сформированы данные для создания или обновления объекта

## CONTENT

Доступ: protected

Проверяет, правильно ли сформированы данные для создания или обновления объекта

Параметры:
* stappler::mem_pool::Value const&

Возвращает:
* bool

# ::stappler::db::Scheme::getLinkageForView(stappler::mem_pool::Value const&,stappler::db::Scheme::ViewScheme const&) const

## BRIEF

Возвращает идентификаторы объектов, связанных с отображением

## CONTENT

Доступ: protected

Возвращает идентификаторы объектов, связанных с отображением

Параметры:
* stappler::mem_pool::Value const&
* stappler::db::Scheme::ViewScheme const&

Возвращает:
* Vector<uint64_t>

# ::stappler::db::Scheme::updateView(stappler::db::Transaction const&,stappler::mem_pool::Value const&,stappler::db::Scheme::ViewScheme const*,Vector<uint64_t> const&) const

## BRIEF

Обновляет отображение

## CONTENT

Доступ: protected

Обновляет отображение. На самом деле, добавляет асинхронный вызов для обновления.

Параметры:
* stappler::db::Transaction const&
* stappler::mem_pool::Value const& - исходный объект
* stappler::db::Scheme::ViewScheme const*
* Vector<uint64_t> const& - список связанных объектов


# ::stappler::db::Scheme::fields

## BRIEF

Список полей схемы данных

## CONTENT

Доступ: protected

Список полей схемы данных

Тип: Map<stappler::mem_pool::String, stappler::db::Field>


# ::stappler::db::Scheme::name

## BRIEF

Имя схемы данных

## CONTENT

Доступ: protected

Имя схемы данных

Тип: stappler::mem_pool::String


# ::stappler::db::Scheme::flags

## BRIEF

Флаги схемы данных

## CONTENT

Доступ: protected

Флаги схемы данных

Тип: stappler::db::Scheme::Options


# ::stappler::db::Scheme::config

## BRIEF

Конфигурация для приёма запросов к схеме

## CONTENT

Доступ: protected

Конфигурация для приёма запросов к схеме

Тип: stappler::db::InputConfig


# ::stappler::db::Scheme::views

## BRIEF

Схемы отображения

## CONTENT

Доступ: protected

Схемы отображения

Тип: Vector<stappler::db::Scheme::ViewScheme *>


# ::stappler::db::Scheme::parents

## BRIEF

Родительские схемы

## CONTENT

Доступ: protected

Родительские схемы

Тип: Vector<stappler::db::Scheme::ParentScheme *>


# ::stappler::db::Scheme::forceInclude

## BRIEF

Поля для принудительного включения

## CONTENT

Доступ: protected

Поля для принудительного включения

Тип: Set<const stappler::db::Field *>


# ::stappler::db::Scheme::fullTextFields

## BRIEF

Полнотекстовые поля

## CONTENT

Доступ: protected

Полнотекстовые поля

Тип: Set<const stappler::db::Field *>


# ::stappler::db::Scheme::autoFieldReq

## BRIEF

Автоматические поля

## CONTENT

Доступ: protected

Автоматические поля

Тип: Set<const stappler::db::Field *>


# ::stappler::db::Scheme::_hasFiles

## BRIEF

Флаг, есть ли файловые поля

## CONTENT

Доступ: protected

Флаг, есть ли файловые поля

Тип: bool


# ::stappler::db::Scheme::_hasForceExclude

## BRIEF

Флаг, есть ли принудительно исключённые поля

## CONTENT

Доступ: protected

Флаг, есть ли принудительно исключённые поля

Тип: bool


# ::stappler::db::Scheme::_hasAccessControl

## BRIEF

Флаг, есть ли контроль доступа

## CONTENT

Доступ: protected

Флаг, есть ли контроль доступа

Тип: bool


# ::stappler::db::Scheme::_hasVirtuals

## BRIEF

Флаг, есть ли виртуальные поля

## CONTENT

Доступ: protected

Флаг, есть ли виртуальные поля

Тип: bool


# ::stappler::db::Scheme::roles

## BRIEF

Таблица контроля доступа

## CONTENT

Доступ: protected

Таблица контроля доступа

Тип: AccessTable


# ::stappler::db::Scheme::oidField

## BRIEF

Псевдополе для идентификатора объекта

## CONTENT

Доступ: protected

Псевдополе для идентификатора объекта

Тип: stappler::db::Field


# ::stappler::db::Scheme::unique

## BRIEF

Ограничения уникальности

## CONTENT

Доступ: protected

Ограничения уникальности

Тип: Vector<stappler::db::Scheme::UniqueConstraint>


# ::stappler::db::Scheme::_compressDict

## BRIEF

Словарь для сжатия

## CONTENT

Доступ: protected

Словарь для сжатия

Тип: stappler::mem_pool::Bytes


# ::stappler::db::operator|(Scheme::Options const&,Scheme::Options const&)

## BRIEF

Автоматически созданный оператор битового флага

## CONTENT

Автоматически созданный оператор битового флага

Параметры:
* Scheme::Options const&
* Scheme::Options const&

Возвращает:
* Scheme::Options

# ::stappler::db::operator&(Scheme::Options const&,Scheme::Options const&)

## BRIEF

Автоматически созданный оператор битового флага

## CONTENT

Автоматически созданный оператор битового флага

Параметры:
* Scheme::Options const&
* Scheme::Options const&

Возвращает:
* Scheme::Options

# ::stappler::db::operator^(Scheme::Options const&,Scheme::Options const&)

## BRIEF

Автоматически созданный оператор битового флага

## CONTENT

Автоматически созданный оператор битового флага

Параметры:
* Scheme::Options const&
* Scheme::Options const&

Возвращает:
* Scheme::Options

# ::stappler::db::operator|=(Scheme::Options&,Scheme::Options const&)

## BRIEF

Автоматически созданный оператор битового флага

## CONTENT

Автоматически созданный оператор битового флага

Параметры:
* Scheme::Options&
* Scheme::Options const&

Возвращает:
* Scheme::Options&

# ::stappler::db::operator&=(Scheme::Options&,Scheme::Options const&)

## BRIEF

Автоматически созданный оператор битового флага

## CONTENT

Автоматически созданный оператор битового флага

Параметры:
* Scheme::Options&
* Scheme::Options const&

Возвращает:
* Scheme::Options&

# ::stappler::db::operator^=(Scheme::Options&,Scheme::Options const&)

## BRIEF

Автоматически созданный оператор битового флага

## CONTENT

Автоматически созданный оператор битового флага

Параметры:
* Scheme::Options&
* Scheme::Options const&

Возвращает:
* Scheme::Options&

# ::stappler::db::operator==(Scheme::Options const&,std::underlying_type<Scheme::Options>::type const&)

## BRIEF

Автоматически созданный оператор битового флага

## CONTENT

Автоматически созданный оператор битового флага

Параметры:
* Scheme::Options const&
* std::underlying_type<Scheme::Options>::type const&

Возвращает:
* bool

# ::stappler::db::operator==(std::underlying_type<Scheme::Options>::type const&,Scheme::Options const&)

## BRIEF

Автоматически созданный оператор битового флага

## CONTENT

Автоматически созданный оператор битового флага

Параметры:
* std::underlying_type<Scheme::Options>::type const&
* Scheme::Options const&

Возвращает:
* bool

# ::stappler::db::operator!=(Scheme::Options const&,std::underlying_type<Scheme::Options>::type const&)

## BRIEF

Автоматически созданный оператор битового флага

## CONTENT

Автоматически созданный оператор битового флага

Параметры:
* Scheme::Options const&
* std::underlying_type<Scheme::Options>::type const&

Возвращает:
* bool

# ::stappler::db::operator!=(std::underlying_type<Scheme::Options>::type const&,Scheme::Options const&)

## BRIEF

Автоматически созданный оператор битового флага

## CONTENT

Автоматически созданный оператор битового флага

Параметры:
* std::underlying_type<Scheme::Options>::type const&
* Scheme::Options const&

Возвращает:
* bool

# ::stappler::db::operator~(Scheme::Options const&)

## BRIEF

Автоматически созданный оператор битового флага

## CONTENT

Автоматически созданный оператор битового флага

Параметры:
* Scheme::Options const&

Возвращает:
* Scheme::Options

# ::stappler::db::Scheme::hasFullText() const

## BRIEF

Проверяет, есть ли в схеме полнотекстовые поля

## CONTENT

Доступ: public

Проверяет, есть ли в схеме полнотекстовые поля

Возвращает:
* bool

# ::stappler::db::Scheme::init()

## BRIEF

Инициализирует флаги и ссылки в схеме

## CONTENT

Доступ: public

Инициализирует флаги и ссылки в схеме

Возвращает:
* bool

# ::stappler::db::Scheme::getFullTextFields() const

## BRIEF

Возвращает список полнотекстовых полей

## CONTENT

Доступ: public

Возвращает список полнотекстовых полей

Возвращает:
* Set<const stappler::db::Field *> const&

# ::stappler::db::Scheme::_init

## BRIEF

Флаг инициализации схемы

## CONTENT

Доступ: protected

Флаг инициализации схемы

Тип: bool