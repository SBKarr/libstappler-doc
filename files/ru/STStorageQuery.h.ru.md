Title: STStorageQuery.h


# STAPPLER_DB_STSTORAGEQUERY_H_

## BRIEF

Заголовок структуры запроса к БД

## CONTENT

Заголовок структуры запроса к БД


# ::stappler::db::Operator

## BRIEF

Тип логического оператора

## CONTENT

Тип логического оператора


# ::stappler::db::Comparation

## BRIEF

Тип оператора сравнения

## CONTENT

Тип оператора сравнения


# ::stappler::db::Ordering

## BRIEF

Тип оператора упорядочивания

## CONTENT

Тип оператора упорядочивания


# ::stappler::db::Resolve

## BRIEF

Флаги для раскрытия составных полей

## CONTENT

Флаги для раскрытия составных полей

Значения:
* None
* Files
* Sets
* Objects
* Arrays
* Ids - возврашает только идентификаторы для объектов составных полей
* Basics - возвращает все несоставные поля
* Defaults - возвраает помеченные для возврата по умолчанию поля
* All


# ::stappler::db::operator|(stappler::db::Resolve const&,stappler::db::Resolve const&)

## BRIEF

Автоматически созданный оператор битовых флагов

## CONTENT

Автоматически созданный оператор битовых флагов

Параметры:
* stappler::db::Resolve const&
* stappler::db::Resolve const&

Возвращает:
* stappler::db::Resolve

# ::stappler::db::operator&(stappler::db::Resolve const&,stappler::db::Resolve const&)

## BRIEF

Автоматически созданный оператор битовых флагов

## CONTENT

Автоматически созданный оператор битовых флагов

Параметры:
* stappler::db::Resolve const&
* stappler::db::Resolve const&

Возвращает:
* stappler::db::Resolve

# ::stappler::db::operator^(stappler::db::Resolve const&,stappler::db::Resolve const&)

## BRIEF

Автоматически созданный оператор битовых флагов

## CONTENT

Автоматически созданный оператор битовых флагов

Параметры:
* stappler::db::Resolve const&
* stappler::db::Resolve const&

Возвращает:
* stappler::db::Resolve

# ::stappler::db::operator|=(stappler::db::Resolve&,stappler::db::Resolve const&)

## BRIEF

Автоматически созданный оператор битовых флагов

## CONTENT

Автоматически созданный оператор битовых флагов

Параметры:
* stappler::db::Resolve&
* stappler::db::Resolve const&

Возвращает:
* stappler::db::Resolve&

# ::stappler::db::operator&=(stappler::db::Resolve&,stappler::db::Resolve const&)

## BRIEF

Автоматически созданный оператор битовых флагов

## CONTENT

Автоматически созданный оператор битовых флагов

Параметры:
* stappler::db::Resolve&
* stappler::db::Resolve const&

Возвращает:
* stappler::db::Resolve&

# ::stappler::db::operator^=(stappler::db::Resolve&,stappler::db::Resolve const&)

## BRIEF

Автоматически созданный оператор битовых флагов

## CONTENT

Автоматически созданный оператор битовых флагов

Параметры:
* stappler::db::Resolve&
* stappler::db::Resolve const&

Возвращает:
* stappler::db::Resolve&

# ::stappler::db::operator==(stappler::db::Resolve const&,std::underlying_type<Resolve>::type const&)

## BRIEF

Автоматически созданный оператор битовых флагов

## CONTENT

Автоматически созданный оператор битовых флагов

Параметры:
* stappler::db::Resolve const&
* std::underlying_type<Resolve>::type const&

Возвращает:
* bool

# ::stappler::db::operator==(std::underlying_type<Resolve>::type const&,stappler::db::Resolve const&)

## BRIEF

Автоматически созданный оператор битовых флагов

## CONTENT

Автоматически созданный оператор битовых флагов

Параметры:
* std::underlying_type<Resolve>::type const&
* stappler::db::Resolve const&

Возвращает:
* bool

# ::stappler::db::operator!=(stappler::db::Resolve const&,std::underlying_type<Resolve>::type const&)

## BRIEF

Автоматически созданный оператор битовых флагов

## CONTENT

Автоматически созданный оператор битовых флагов

Параметры:
* stappler::db::Resolve const&
* std::underlying_type<Resolve>::type const&

Возвращает:
* bool

# ::stappler::db::operator!=(std::underlying_type<Resolve>::type const&,stappler::db::Resolve const&)

## BRIEF

Автоматически созданный оператор битовых флагов

## CONTENT

Автоматически созданный оператор битовых флагов

Параметры:
* std::underlying_type<Resolve>::type const&
* stappler::db::Resolve const&

Возвращает:
* bool

# ::stappler::db::operator~(stappler::db::Resolve const&)

## BRIEF

Автоматически созданный оператор битовых флагов

## CONTENT

Автоматически созданный оператор битовых флагов

Параметры:
* stappler::db::Resolve const&

Возвращает:
* stappler::db::Resolve

# ::stappler::db::Query

## BRIEF

Структура запроса к БД

## CONTENT

Структура запроса к БД. Описывает параметры запроса, упорядочивание, условные операторы, список полей для возврата

Базовые классы:
* AllocBase


# ::stappler::db::Query::Field

## BRIEF

Структура поля для возврата

## CONTENT

Доступ: public

Структура запроса к БД

Базовые классы:
* AllocBase


# ::stappler::db::Query::Field::name

## BRIEF

Имя поля

## CONTENT

Имя поля

Тип: stappler::mem_pool::String


# ::stappler::db::Query::Field::fields

## BRIEF

Список вложенных полей для возврата

## CONTENT

Список вложенных полей для возврата

Тип: Vector<stappler::db::Query::Field>


# ::stappler::db::Query::Field::Field(stappler::db::Query::Field&&)

## BRIEF

Конструктор перемещения

## CONTENT

Конструктор перемещения

Параметры:
* stappler::db::Query::Field&&


# ::stappler::db::Query::Field::Field(stappler::db::Query::Field const&)

## BRIEF

Конструктор копирования

## CONTENT

Конструктор копирования

Параметры:
* stappler::db::Query::Field const&


# ::stappler::db::Query::Field::operator=(stappler::db::Query::Field&&)

## BRIEF

Оператор перемещения

## CONTENT

Оператор перемещения

Параметры:
* stappler::db::Query::Field&&

Возвращает:
* stappler::db::Query::Field&

# ::stappler::db::Query::Field::operator=(stappler::db::Query::Field const&)

## BRIEF

Оператор копирования

## CONTENT

Оператор копирования

Параметры:
* stappler::db::Query::Field const&

Возвращает:
* stappler::db::Query::Field&

# ::stappler::db::Query::Field::Field<typename>(Str&&)

## BRIEF

Конструирует поле из имени

## CONTENT

Конструирует поле из имени

Параметры шаблона:
* typename Str

Параметры:
* Str&&


# ::stappler::db::Query::Field::Field<typename>(Str&&,Vector<stappler::mem_pool::String>&&)

## BRIEF

Конструирует поле из имени и списка вложенных полей

## CONTENT

Конструирует поле из имени и списка вложенных полей

Параметры шаблона:
* typename Str

Параметры:
* Str&&
* Vector<stappler::mem_pool::String>&&


# ::stappler::db::Query::Field::Field<typename>(Str&&,std::initializer_list<String>&&)

## BRIEF

Конструирует поле из имени и списка вложенных полей

## CONTENT

Конструирует поле из имени и списка вложенных полей

Параметры шаблона:
* typename Str

Параметры:
* Str&&
* std::initializer_list<String>&&


# ::stappler::db::Query::Field::Field<typename>(Str&&,Vector<stappler::db::Query::Field>&&)

## BRIEF

Конструирует поле из имени и списка вложенных полей

## CONTENT

Конструирует поле из имени и списка вложенных полей

Параметры шаблона:
* typename Str

Параметры:
* Str&&
* Vector<stappler::db::Query::Field>&&


# ::stappler::db::Query::Field::Field<typename>(Str&&,std::initializer_list<Field>&&)

## BRIEF

Конструирует поле из имени и списка вложенных полей

## CONTENT

Конструирует поле из имени и списка вложенных полей

Параметры шаблона:
* typename Str

Параметры:
* Str&&
* std::initializer_list<Field>&&


# ::stappler::db::Query::Field::setName(char const*)

## BRIEF

Устанавливает имя запрошенного поля

## CONTENT

Устанавливает имя запрошенного поля

Параметры:
* char const*


# ::stappler::db::Query::Field::setName(stappler::StringView const&)

## BRIEF

Устанавливает имя запрошенного поля

## CONTENT

Устанавливает имя запрошенного поля

Параметры:
* stappler::StringView const&


# ::stappler::db::Query::Field::setName(stappler::mem_pool::String const&)

## BRIEF

Устанавливает имя запрошенного поля

## CONTENT

Устанавливает имя запрошенного поля

Параметры:
* stappler::mem_pool::String const&


# ::stappler::db::Query::Field::setName(stappler::mem_pool::String&&)

## BRIEF

Устанавливает имя запрошенного поля

## CONTENT

Устанавливает имя запрошенного поля

Параметры:
* stappler::mem_pool::String&&


# ::stappler::db::Query::Field::setName(stappler::db::Query::Field const&)

## BRIEF

Устанавливает имя запрошенного поля

## CONTENT

Устанавливает имя запрошенного поля

Параметры:
* stappler::db::Query::Field const&


# ::stappler::db::Query::Field::setName(stappler::db::Query::Field&&)

## BRIEF

Устанавливает имя запрошенного поля

## CONTENT

Устанавливает имя запрошенного поля

Параметры:
* stappler::db::Query::Field&&


# ::stappler::db::Query::FieldsVec

## BRIEF

Тип списка полей для возврата

## CONTENT

Тип списка полей для возврата

Доступ: public


# ::stappler::db::Query::Select

## BRIEF

Структура условного запроса

## CONTENT

Доступ: public

Структура условного запроса

Базовые классы:
* AllocBase


# ::stappler::db::Query::Select::compare

## BRIEF

Оператор сравнения

## CONTENT

Оператор сравнения

Тип: stappler::db::Comparation


# ::stappler::db::Query::Select::value1

## BRIEF

Первое значение для сравнения

## CONTENT

Первое значение для сравнения

Тип: stappler::mem_pool::Value


# ::stappler::db::Query::Select::value2

## BRIEF

Второе значение для сравнения, если оператор троичный

## CONTENT

Второе значение для сравнения, если оператор троичный

Тип: stappler::mem_pool::Value


# ::stappler::db::Query::Select::field

## BRIEF

Имя поля для сравнения

## CONTENT

Имя поля для сравнения

Тип: stappler::mem_pool::String


# ::stappler::db::Query::Select::searchData

## BRIEF

Полнотекстовый запрос

## CONTENT

Полнотекстовый запрос

Тип: Vector<stappler::search::SearchData>


# ::stappler::db::Query::Select::Select()

## BRIEF

Конструктор по умолчанию

## CONTENT

Конструктор по умолчанию


# ::stappler::db::Query::Select::Select(stappler::StringView const&,stappler::db::Comparation,stappler::mem_pool::Value&&,stappler::mem_pool::Value&&)

## BRIEF

Конструирует новое сравнение

## CONTENT

Конструирует новое сравнение

Параметры:
* stappler::StringView const&
* stappler::db::Comparation
* stappler::mem_pool::Value&&
* stappler::mem_pool::Value&&


# ::stappler::db::Query::Select::Select(stappler::StringView const&,stappler::db::Comparation,int64_t,int64_t)

## BRIEF

Конструирует новое сравнение

## CONTENT

Конструирует новое сравнение

Параметры:
* stappler::StringView const&
* stappler::db::Comparation
* int64_t
* int64_t


# ::stappler::db::Query::Select::Select(stappler::StringView const&,stappler::db::Comparation,stappler::mem_pool::String const&)

## BRIEF

Конструирует новое сравнение

## CONTENT

Конструирует новое сравнение

Параметры:
* stappler::StringView const&
* stappler::db::Comparation
* stappler::mem_pool::String const&


# ::stappler::db::Query::Select::Select(stappler::StringView const&,stappler::db::Comparation,stappler::StringView const&)

## BRIEF

Конструирует новое сравнение

## CONTENT

Конструирует новое сравнение

Параметры:
* stappler::StringView const&
* stappler::db::Comparation
* stappler::StringView const&


# ::stappler::db::Query::Select::Select(stappler::StringView const&,stappler::db::Comparation,Vector<stappler::search::SearchData>&&)

## BRIEF

Конструирует новое полнотекстовое сравнение

## CONTENT

Конструирует новое полнотекстовое сравнение

Параметры:
* stappler::StringView const&
* stappler::db::Comparation
* Vector<stappler::search::SearchData>&&


# ::stappler::db::Query::SoftLimit

## BRIEF

Структура для применения мягкого лимита

## CONTENT

Доступ: public

Структура для применения мягкого лимита


# ::stappler::db::Query::SoftLimit::field

## BRIEF

Поле для мягкого лимита

## CONTENT

Поле для мягкого лимита

Тип: stappler::mem_pool::String


# ::stappler::db::Query::SoftLimit::limit

## BRIEF

Число элементов на странице

## CONTENT

Число элементов на странице

Тип: size_t


# ::stappler::db::Query::SoftLimit::offset

## BRIEF

Значение для смещения запроса с мягким лимитом

## CONTENT

Значение для смещения запроса с мягким лимитом

Тип: stappler::mem_pool::Value


# ::stappler::db::Query::all()

## BRIEF

Возвращет запрос, запрашивающий всё содержимое схемы данных

## CONTENT

Возвращет запрос, запрашивающий всё содержимое схемы данных

Доступ: public

Возвращает:
* stappler::db::Query

# ::stappler::db::Query::field(int64_t,stappler::StringView const&)

## BRIEF

Возвращет запрос, адресованный к полю обекта

## CONTENT

Доступ: public

Параметры:
* int64_t - ид объекта
* stappler::StringView const& - имя поля

Возвращает:
* stappler::db::Query

# ::stappler::db::Query::field(int64_t,stappler::StringView const&,stappler::db::Query const&)

## BRIEF

Возвращет запрос, адресованный к полю обекта

## CONTENT

Доступ: public

Возвращет запрос, адресованный к полю обекта

Параметры:
* int64_t - ид объекта
* stappler::StringView const& - имя поля
* stappler::db::Query const& - базовый запрос

Возвращает:
* stappler::db::Query

# ::stappler::db::Query::decodeResolve(stappler::StringView const&)

## BRIEF

Декодирует флаги возврата полей из строки

## CONTENT

Доступ: public

Декодирует флаги возврата полей из строки

Параметры:
* stappler::StringView const&

Возвращает:
* stappler::db::Resolve

# ::stappler::db::Query::encodeResolve(stappler::db::Resolve)

## BRIEF

Кодирует флаги возврата полей в строку

## CONTENT

Доступ: public

Кодирует флаги возврата полей в строку

Параметры:
* stappler::db::Resolve

Возвращает:
* stappler::mem_pool::String

# ::stappler::db::Query::select(stappler::StringView const&)

## BRIEF

Добавляет запрос объекта по псевдониму

## CONTENT

Доступ: public

Добавляет запрос объекта по псевдониму

Параметры:
* stappler::StringView const&

Возвращает:
* stappler::db::Query&

# ::stappler::db::Query::select(int64_t)

## BRIEF

Добавляет запрос объекта по ид

## CONTENT

Доступ: public

Добавляет запрос объекта по ид

Параметры:
* int64_t

Возвращает:
* stappler::db::Query&

# ::stappler::db::Query::select(stappler::mem_pool::Value const&)

## BRIEF

Добавляет запрос объекта по нетипизированному значению (ид или псевдониму)

## CONTENT

Доступ: public

Добавляет запрос объекта по нетипизированному значению (ид или псевдониму)

Параметры:
* stappler::mem_pool::Value const&

Возвращает:
* stappler::db::Query&

# ::stappler::db::Query::select(Vector<int64_t>&&)

## BRIEF

Добавляет запрос списка объектов по ид

## CONTENT

Доступ: public

Добавляет запрос списка объектов по ид

Параметры:
* Vector<int64_t>&&

Возвращает:
* stappler::db::Query&

# ::stappler::db::Query::select(SpanView<int64_t>)

## BRIEF

Добавляет запрос списка объектов по ид

## CONTENT

Доступ: public

Добавляет запрос списка объектов по ид

Параметры:
* SpanView<int64_t>

Возвращает:
* stappler::db::Query&

# ::stappler::db::Query::select(std::initializer_list<int64_t>&&)

## BRIEF

Добавляет запрос списка объектов по ид

## CONTENT

Доступ: public

Добавляет запрос списка объектов по ид

Параметры:
* std::initializer_list<int64_t>&&

Возвращает:
* stappler::db::Query&

# ::stappler::db::Query::select(stappler::StringView const&,stappler::db::Comparation,stappler::mem_pool::Value const&,stappler::mem_pool::Value const&)

## BRIEF

Добавляет запрос с оператором сравнения

## CONTENT

Доступ: public

Добавляет запрос с оператором сравнения

Параметры:
* stappler::StringView const&
* stappler::db::Comparation
* stappler::mem_pool::Value const&
* stappler::mem_pool::Value const&

Возвращает:
* stappler::db::Query&

# ::stappler::db::Query::select(stappler::StringView const&,stappler::mem_pool::Value const&)

## BRIEF

Добавляет запрос с проверкой поля на равенство значению

## CONTENT

Доступ: public

Добавляет запрос с проверкой поля на равенство значению

Параметры:
* stappler::StringView const&
* stappler::mem_pool::Value const&

Возвращает:
* stappler::db::Query&

# ::stappler::db::Query::select(stappler::StringView const&,stappler::db::Comparation,int64_t)

## BRIEF

Добавляет запрос с оператором сравнения

## CONTENT

Доступ: public

Добавляет запрос с оператором сравнения

Параметры:
* stappler::StringView const&
* stappler::db::Comparation
* int64_t

Возвращает:
* stappler::db::Query&

# ::stappler::db::Query::select(stappler::StringView const&,stappler::db::Comparation,int64_t,int64_t)

## BRIEF

Добавляет запрос с оператором сравнения

## CONTENT

Доступ: public

Добавляет запрос с оператором сравнения

Параметры:
* stappler::StringView const&
* stappler::db::Comparation
* int64_t
* int64_t

Возвращает:
* stappler::db::Query&

# ::stappler::db::Query::select(stappler::StringView const&,stappler::mem_pool::String const&)

## BRIEF

Добавляет запрос с проверкой поля на равенство значению

## CONTENT

Доступ: public

Добавляет запрос с проверкой поля на равенство значению

Параметры:
* stappler::StringView const&
* stappler::mem_pool::String const&

Возвращает:
* stappler::db::Query&

# ::stappler::db::Query::select(stappler::StringView const&,stappler::mem_pool::String&&)

## BRIEF

Добавляет запрос с проверкой поля на равенство значению

## CONTENT

Доступ: public

Добавляет запрос с проверкой поля на равенство значению

Параметры:
* stappler::StringView const&
* stappler::mem_pool::String&&

Возвращает:
* stappler::db::Query&

# ::stappler::db::Query::select(stappler::StringView const&,stappler::mem_pool::Bytes const&)

## BRIEF

Добавляет запрос с проверкой поля на равенство значению

## CONTENT

Доступ: public

Добавляет запрос с проверкой поля на равенство значению

Параметры:
* stappler::StringView const&
* stappler::mem_pool::Bytes const&

Возвращает:
* stappler::db::Query&

# ::stappler::db::Query::select(stappler::StringView const&,stappler::mem_pool::Bytes&&)

## BRIEF

Добавляет запрос с проверкой поля на равенство значению

## CONTENT

Доступ: public

Добавляет запрос с проверкой поля на равенство значению

Параметры:
* stappler::StringView const&
* stappler::mem_pool::Bytes&&

Возвращает:
* stappler::db::Query&

# ::stappler::db::Query::select(stappler::StringView const&,Vector<stappler::search::SearchData>&&)

## BRIEF

Добавляет полнотекстовый запрос

## CONTENT

Доступ: public

Добавляет полнотекстовый запрос

Параметры:
* stappler::StringView const&
* Vector<stappler::search::SearchData>&&

Возвращает:
* stappler::db::Query&

# ::stappler::db::Query::select(stappler::db::Query::Select&&)

## BRIEF

Добавляет запрос сравнения

## CONTENT

Доступ: public

Добавляет запрос сравнения

Параметры:
* stappler::db::Query::Select&&

Возвращает:
* stappler::db::Query&

# ::stappler::db::Query::order(stappler::StringView const&,stappler::db::Ordering,size_t,size_t)

## BRIEF

Добавляет правило упорядочивания

## CONTENT

Доступ: public

Добавляет правило упорядочивания

Параметры:
* stappler::StringView const& - поле для упорядочивания
* stappler::db::Ordering
* size_t - максимальное число возвращаемых объектов
* size_t - смещение при возврате объектов

Возвращает:
* stappler::db::Query&

# ::stappler::db::Query::softLimit(stappler::StringView const&,stappler::db::Ordering,size_t,stappler::mem_pool::Value&&)

## BRIEF

Добавляет мягкий лимит

## CONTENT

Доступ: public

Добавляет мягкий лимит

Параметры:
* stappler::StringView const& - поле для упорядочивания
* stappler::db::Ordering
* size_t - число объектов на странице
* stappler::mem_pool::Value&& - исходное значение

Возвращает:
* stappler::db::Query&

# ::stappler::db::Query::first(stappler::StringView const&,size_t,size_t)

## BRIEF

Добавляет возврат первых объектов

## CONTENT

Доступ: public

Добавляет возврат первых объектов

Параметры:
* stappler::StringView const& - поле для упорядочивания
* size_t - максимальное число возвращаемых объектов
* size_t - смещение при возврате объектов

Возвращает:
* stappler::db::Query&

# ::stappler::db::Query::last(stappler::StringView const&,size_t,size_t)

## BRIEF

Добавляет возврат последних объектов

## CONTENT

Доступ: public

Добавляет возврат последних объектов

Параметры:
* stappler::StringView const& - поле для упорядочивания
* size_t - максимальное число возвращаемых объектов
* size_t - смещение при возврате объектов

Возвращает:
* stappler::db::Query&

# ::stappler::db::Query::limit(size_t,size_t)

## BRIEF

Возврашает предел возврата

## CONTENT

Доступ: public

Возврашает предел возврата

Параметры:
* size_t - максимальное число возвращаемых объектов
* size_t - смещение при возврате объектов

Возвращает:
* stappler::db::Query&

# ::stappler::db::Query::limit(size_t)

## BRIEF

Возврашает предел возврата

## CONTENT

Доступ: public

Возврашает предел возврата

Параметры:
* size_t - максимальное число возвращаемых объектов

Возвращает:
* stappler::db::Query&

# ::stappler::db::Query::offset(size_t)

## BRIEF

Добавляет смещение объектов при возврате

## CONTENT

Доступ: public

Добавляет смещение объектов при возврате

Параметры:
* size_t - смещение при возврате объектов

Возвращает:
* stappler::db::Query&

# ::stappler::db::Query::delta(uint64_t)

## BRIEF

Добавляет значение дельты для дельта-запроса

## CONTENT

Доступ: public

Добавляет значение дельты для дельта-запроса

Параметры:
* uint64_t

Возвращает:
* stappler::db::Query&

# ::stappler::db::Query::delta(stappler::StringView const&)

## BRIEF

Добавляет значение дельты для дельта-запроса

## CONTENT

Доступ: public

Добавляет значение дельты для дельта-запроса. Кодируется байтовое представление целого числа в base64.

Параметры:
* stappler::StringView const&

Возвращает:
* stappler::db::Query&

# ::stappler::db::Query::include<typename>(stappler::db::Query::Field&&,Args &&...)

## BRIEF

Добавляет поля для возврата

## CONTENT

Доступ: public

Добавляет поля для возврата

Параметры шаблона:
* typename Args

Параметры:
* stappler::db::Query::Field&&
* Args &&...

Возвращает:
* stappler::db::Query&

# ::stappler::db::Query::include(stappler::db::Query::Field&&)

## BRIEF

Добавляет поле для возврата

## CONTENT

Доступ: public

Добавляет поле для возврата

Параметры:
* stappler::db::Query::Field&&

Возвращает:
* stappler::db::Query&

# ::stappler::db::Query::exclude(stappler::db::Query::Field&&)

## BRIEF

Исключает поле из возврата

## CONTENT

Доступ: public

Исключает поле из возврата

Параметры:
* stappler::db::Query::Field&&

Возвращает:
* stappler::db::Query&

# ::stappler::db::Query::depth(uint16_t)

## BRIEF

Устанавливает максимальную глубину для раскрытия полей

## CONTENT

Доступ: public

Устанавливает максимальную глубину для раскрытия полей

Параметры:
* uint16_t

Возвращает:
* stappler::db::Query&

# ::stappler::db::Query::forUpdate()

## BRIEF

Помечает результирующие объекты для последующего обновления

## CONTENT

Доступ: public

Помечает результирующие объекты для последующего обновления

Возвращает:
* stappler::db::Query&

# ::stappler::db::Query::clearFields()

## BRIEF

Очищает список включённых и исключённых полей

## CONTENT

Доступ: public

Очищает список включённых и исключённых полей

Возвращает:
* stappler::db::Query&

# ::stappler::db::Query::empty() const

## BRIEF

Проверяет запрос на пустоту условий

## CONTENT

Доступ: public

Проверяет запрос на пустоту условий

Возвращает:
* bool

# ::stappler::db::Query::getQueryField() const

## BRIEF

Возврашает поле запрошенного объекта

## CONTENT

Доступ: public

Возврашает поле запрошенного объекта

Возвращает:
* stappler::StringView

# ::stappler::db::Query::getQueryId() const

## BRIEF

Возврашает ид запрошенного объекта

## CONTENT

Доступ: public

Возврашает ид запрошенного объекта

Возвращает:
* int64_t

# ::stappler::db::Query::getSingleSelectId() const

## BRIEF

Возврашает единственный ид в запросе, если он единственный

## CONTENT

Доступ: public

Возврашает единственный ид в запросе, если он единственный

Возвращает:
* int64_t

# ::stappler::db::Query::getSelectIds() const

## BRIEF

Возврашает ид запрошенных объектов

## CONTENT

Доступ: public

Возврашает ид запрошенных объектов

Возвращает:
* Vector<int64_t> const&

# ::stappler::db::Query::getSelectAlias() const

## BRIEF

Возврашает запрошенный псевдоним

## CONTENT

Доступ: public

Возврашает запрошенный псевдоним

Возвращает:
* stappler::StringView

# ::stappler::db::Query::getSelectList() const

## BRIEF

Возвращает список условий

## CONTENT

Доступ: public

Возвращает список условий

Возвращает:
* Vector<stappler::db::Query::Select> const&

# ::stappler::db::Query::getOrderField() const

## BRIEF

Возврашает поле упорядочивания

## CONTENT

Доступ: public

Возврашает поле упорядочивания

Возвращает:
* stappler::mem_pool::String const&

# ::stappler::db::Query::getOrdering() const

## BRIEF

Возврашает порядок возврата

## CONTENT

Доступ: public

Возврашает порядок возврата

Возвращает:
* stappler::db::Ordering

# ::stappler::db::Query::getLimitValue() const

## BRIEF

Возвращает максимальное число возвращаемых объектов

## CONTENT

Доступ: public

Возвращает максимальное число возвращаемых объектов

Возвращает:
* size_t

# ::stappler::db::Query::getOffsetValue() const

## BRIEF

Возвращает смещение возвращаемых объектов

## CONTENT

Доступ: public

Возвращает смещение возвращаемых объектов

Возвращает:
* size_t

# ::stappler::db::Query::getSoftLimitValue() const

## BRIEF

Возврашает значение для мягкого лимита

## CONTENT

Доступ: public

Возврашает значение для мягкого лимита

Возвращает:
* stappler::mem_pool::Value const&

# ::stappler::db::Query::hasSelectName() const

## BRIEF

Проверяет, определено ли имя для запроса одиночного объекта

## CONTENT

Доступ: public

Проверяет, определено ли имя для запроса одиночного объекта

Возвращает:
* bool

# ::stappler::db::Query::hasSelectList() const

## BRIEF

Проверяет, определены ли дополнительные условия

## CONTENT

Доступ: public

Проверяет, определены ли дополнительные условия

Возвращает:
* bool

# ::stappler::db::Query::hasSelect() const

## BRIEF

Проверяет определены ли условия возврата

## CONTENT

Доступ: public

Проверяет определены ли условия возврата

Возвращает:
* bool

# ::stappler::db::Query::hasOrder() const

## BRIEF

Проверяет, определено ли упорядочивание

## CONTENT

Доступ: public

Проверяет, определено ли упорядочивание

Возвращает:
* bool

# ::stappler::db::Query::hasLimit() const

## BRIEF

Проверяет, определено ли максимальное число объектов

## CONTENT

Доступ: public

Проверяет, определено ли максимальное число объектов

Возвращает:
* bool

# ::stappler::db::Query::hasOffset() const

## BRIEF

Проверяет, определено ли смещение объектов

## CONTENT

Доступ: public

Проверяет, определено ли смещение объектов

Возвращает:
* bool

# ::stappler::db::Query::hasDelta() const

## BRIEF

Проверяет, определен ли дельта-запрос

## CONTENT

Доступ: public

Проверяет, определен ли дельта-запрос

Возвращает:
* bool

# ::stappler::db::Query::hasFields() const

## BRIEF

Проверяет, определены ли поля для возврата

## CONTENT

Доступ: public

Проверяет, определены ли поля для возврата

Возвращает:
* bool

# ::stappler::db::Query::isForUpdate() const

## BRIEF

Проверяет, установлен ли флаг получения для обновления

## CONTENT

Доступ: public

Проверяет, установлен ли флаг получения для обновления

Возвращает:
* bool

# ::stappler::db::Query::isSoftLimit() const

## BRIEF

Проверяет, установлен ли мягкий лимит

## CONTENT

Доступ: public

Проверяет, установлен ли мягкий лимит

Возвращает:
* bool

# ::stappler::db::Query::getDeltaToken() const

## BRIEF

Получает значение дельта-запроса

## CONTENT

Доступ: public

Получает значение дельта-запроса

Возвращает:
* uint64_t

# ::stappler::db::Query::getResolveDepth() const

## BRIEF

Получает глубину разрешения полей

## CONTENT

Доступ: public

Получает глубину разрешения полей

Возвращает:
* uint16_t

# ::stappler::db::Query::getIncludeFields() const

## BRIEF

Возвращает поля для включения

## CONTENT

Доступ: public

Возвращает поля для включения

Возвращает:
* FieldsVec&

# ::stappler::db::Query::getExcludeFields() const

## BRIEF

Возвращает поля для исключения

## CONTENT

Доступ: public

Возвращает поля для исключения

Возвращает:
* FieldsVec&

# ::stappler::db::Query::encode() const

## BRIEF

Кодирует запрос для сохранения

## CONTENT

Доступ: public

Кодирует запрос для сохранения

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Query::queryField

## BRIEF

Поле объекта, к которому адресован запрос

## CONTENT

Доступ: protected

Поле объекта, к которому адресован запрос

Тип: stappler::mem_pool::String


# ::stappler::db::Query::queryId

## BRIEF

Ид объекта, к которому адресован запрос

## CONTENT

Доступ: protected

Ид объекта, к которому адресован запрос

Тип: int64_t


# ::stappler::db::Query::selectIds

## BRIEF

Запрашиваемые ид объектов

## CONTENT

Доступ: protected

Запрашиваемые ид объектов

Тип: Vector<int64_t>


# ::stappler::db::Query::selectAlias

## BRIEF

Запрашиваемый псевдоним объекта

## CONTENT

Доступ: protected

Запрашиваемый псевдоним объекта

Тип: stappler::mem_pool::String


# ::stappler::db::Query::selectList

## BRIEF

Дополнительные условия

## CONTENT

Доступ: protected

Дополнительные условия

Тип: Vector<stappler::db::Query::Select>


# ::stappler::db::Query::ordering

## BRIEF

Порядок возврата

## CONTENT

Доступ: protected

Порядок возврата

Тип: stappler::db::Ordering


# ::stappler::db::Query::orderField

## BRIEF

Поле для упорядочивания

## CONTENT

Доступ: protected

Поле для упорядочивания

Тип: stappler::mem_pool::String


# ::stappler::db::Query::limitValue

## BRIEF

Максимальное число возвращаемых объектов

## CONTENT

Доступ: protected

Максимальное число возвращаемых объектов

Тип: size_t


# ::stappler::db::Query::offsetValue

## BRIEF

Смещение возвращаемых объектов

## CONTENT

Доступ: protected

Смещение возвращаемых объектов

Тип: size_t


# ::stappler::db::Query::softLimitValue

## BRIEF

Значение мягкого лимита

## CONTENT

Доступ: protected

Значение мягкого лимита

Тип: stappler::mem_pool::Value


# ::stappler::db::Query::deltaToken

## BRIEF

Дельта-запрос

## CONTENT

Доступ: protected

Дельта-запрос

Тип: uint64_t


# ::stappler::db::Query::resolveDepth

## BRIEF

Глубина раскрытия вложенных полей

## CONTENT

Доступ: protected

Глубина раскрытия вложенных полей

Тип: uint16_t


# ::stappler::db::Query::fieldsInclude

## BRIEF

Поля для включения в запрос

## CONTENT

Доступ: protected

Поля для включения в запрос

Тип: FieldsVec


# ::stappler::db::Query::fieldsExclude

## BRIEF

Поля для исключения из запроса

## CONTENT

Доступ: protected

Поля для исключения из запроса

Тип: FieldsVec


# ::stappler::db::Query::update

## BRIEF

Флаг получения для обновления

## CONTENT

Доступ: protected

Флаг получения для обновления

Тип: bool


# ::stappler::db::Query::_softLimit

## BRIEF

Флаг мягкого лимита

## CONTENT

Доступ: protected

Флаг мягкого лимита

Тип: bool


# ::stappler::db::Query::_selected

## BRIEF

Флаг выбора объектов по списку

## CONTENT

Доступ: protected

Флаг выбора объектов по списку

Тип: bool
