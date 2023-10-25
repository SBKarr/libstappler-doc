Title: SPSql.h


# STAPPLER_SQL_SQLQUERY_H_

## BRIEF

Заголовок построителя SQL-запросов

## CONTENT

Заголовок построителя SQL-запросов


# ::stappler::sql::Profile

## BRIEF

Профиль подмножества языка SQL

## CONTENT

Профиль подмножества языка SQL

Значения:
* Postgres - PostgreSQL
* Sqlite - SQLite


# ::stappler::sql::Comparation

## BRIEF

Способ сравнения значений

## CONTENT

Способ сравнения значений

Значения:
* Invalid - не определено
* LessThen - меньше
* LessOrEqual - меньше или равно
* Equal - равно
* NotEqual - не равно
* GreatherOrEqual - больше или равно
* GreatherThen - больше
* BetweenValues между значениями
* BetweenEquals - между или равно значениям
* NotBetweenValues - не между значениями
* NotBetweenEquals - не между и не равно значениям
* Includes - включается в контейнер
* Between - между значениями
* In - включается в контейнер или перечисление
* NotIn - не включается в контейнер или перечисление
* IsNull - соотвествует NULL
* IsNotNull - не соотвествует NULL
* Prefix - соответсвует префиксу
* Suffix - соотвествует суффиксу
* WordPart - соответствует части слова


# ::stappler::sql::Ordering

## BRIEF

Способ упорядочивания

## CONTENT

Способ упорядочивания

Значения:
* Ascending - по возрастанию
* Descending - по убыванию


# ::stappler::sql::Nulls

## BRIEF

Способ упорядочивания NULL

## CONTENT

Значения:
* None - исключить
* First - добавить первыми
* Last - добавить последними


# ::stappler::sql::Operator

## BRIEF

Логический оператор

## CONTENT

Логический оператор

Значения:
* And - И
* Or - ИЛИ


# ::stappler::sql::encodeComparation(stappler::sql::Comparation)

## BRIEF

Кодирует оператор сравнения в виде текста

## CONTENT

Кодирует оператор сравнения в виде текста

Параметры:
* stappler::sql::Comparation

Возвращает:
* Pair<stappler::StringView, bool> - текстовое преставление и true если оператор принимает два аргумента, а не один

# ::stappler::sql::decodeComparation(stappler::StringView)

## BRIEF

Декодирует оператор сравнения из текста

## CONTENT

Декодирует оператор сравнения из текста

Параметры:
* stappler::StringView

Возвращает:
* Pair<stappler::sql::Comparation, bool> - значение оператора и true если оператор принимает два аргумента, а не один

# ::stappler::sql::PatternComparator<typename>

## BRIEF

Вспомогательная структура для сравнения элементов

## CONTENT

Вспомогательная структура для сравнения элементов

Параметры шаблона:
* typename T - тип элемента


# ::stappler::sql::PatternComparator<typename>::Type

## BRIEF

Тип элемента

## CONTENT

Тип элемента

# ::stappler::sql::PatternComparator<typename>::cmp

## BRIEF

Значени еоператора сравнения

## CONTENT

Значени еоператора сравнения

Тип: stappler::sql::Comparation


# ::stappler::sql::PatternComparator<typename>::value

## BRIEF

Значение для сравнения

## CONTENT

Значение для сравнения

Тип: Type*


# ::stappler::sql::SimpleBinder<typename>

## BRIEF

Простой оператор связывания входящих значений с SQL-запросом

## CONTENT

Простой оператор связывания входящих значений с SQL-запросом. Испольуется в качестве примера.

Параметры шаблона:
* typename Interface

Базовые классы:
* Interface::AllocBaseType


# ::stappler::sql::SimpleBinder<typename>::writeBind(std::ostream&,data::ValueTemplate<Interface> const&)

## BRIEF

Связывает аргумент в виде нетипизированного контейнера с запросом

## CONTENT

Связывает аргумент в виде нетипизированного контейнера с запросом

Параметры:
* std::ostream& - поток для вывода результата
* data::ValueTemplate<Interface> const& - аргумент


# ::stappler::sql::SimpleBinder<typename>::writeBind(std::ostream&,const typename Interface::StringType&)

## BRIEF

Связывает аргумент в виде символьной строки с запросом

## CONTENT

Связывает аргумент в виде символьной строки с запросом

Параметры:
* std::ostream& - поток для вывода результата
* const typename Interface::StringType& - аргумент


# ::stappler::sql::SimpleBinder<typename>::writeBind(std::ostream&,const typename Interface::BytesType&)

## BRIEF

Связывает аргумент в виде байтовой строки с запросом

## CONTENT

Связывает аргумент в виде байтовой строки с запросом

Параметры:
* std::ostream& - поток для вывода результата
* const typename Interface::BytesType& - аргумент


# ::stappler::sql::SimpleBinder<typename>::writeBind(std::ostream&,PatternComparator<data::ValueTemplate<Interface>> const&)

## BRIEF

Связывает аргумент-сравнитель с запросом

## CONTENT

Связывает аргумент-сравнитель с запросом

Параметры:
* std::ostream& - поток для вывода результата
* PatternComparator<data::ValueTemplate<Interface>> const& - аргумент


# ::stappler::sql::Query<typename,typename>

## BRIEF

Базовый тип построения запроса

## CONTENT

Базовый тип построения запроса. Тип используется для исключения ошибок при ручном написании запросов, а также передачи внешних аргументов в функции их связывания и проверки на стороне библиотеки БД, для исключения иньекций.

Тип построен для написания базовых запросов, правильность которых проверяется на этапе компиляции. Каждая функция для записи запроса возвращает манипулятор для следующего блока. Функции манипулятора допускают создание только валидных запросов, в противном случае компилятор сообщит об ошибке. Не предполагается сохранение манипуляторов, только использование в цепочке вызовов.

Пример построения запросов:

```cpp
query.select()
	.fields("field", Field("field").as("alias")).field(Field("database", "field").as("alias"))
	.from("table").from("table")
	.where("alias", sql::Comparation::Equal, "value")
	.where(sql::Operator::And, "field", sql::Comparation::Equal, Value(1234))
	.where(sql::Operator::Or, "field", sql::Comparation::NotEqual, Value(false))
	.where(sql::Operator::Or, "time", sql::Comparation::BetweenValues, Value(1234), Value(123400))
	.order(sql::Ordering::Descending, "field")
	.limit(12, 16)
	.finalize();

insertQuery.insert("table")
	.field("field1").field("field2")
	.values().value("test1").value("test2")
	.values().value("test3").value("test4")
	.finalize();

updateQuery.update("table", "alias")
	.set("field1", "value1").set("field1", "value2")
	.where("field3", sql::Comparation::NotEqual, Value(false))
	.returning().all()
	.finalize();

deleteQuery.remove("table", "alias")
	.where("field3", sql::Comparation::NotEqual, Value(false))
	.returning().all()
	.finalize();
```

Параметры шаблона:
* typename Binder - структура для связывания внешних аргументов с запросом
* typename Interface - используемый интерфейс памяти

Базовые классы:
* Interface::AllocBaseType


# ::stappler::sql::Query<typename,typename>::Stream

## BRIEF

Тип строкового потокадля записи текстовой части запроса

## CONTENT

Доступ: public

Тип строкового потокадля записи текстовой части запроса


# ::stappler::sql::Query<typename,typename>::String

## BRIEF

Тип строки

## CONTENT

Доступ: public

Тип строки


# ::stappler::sql::Query<typename,typename>::Distinct

## BRIEF

Значение DISTINCT (если поддерживается)

## CONTENT

Доступ: public

Значение DISTINCT (если поддерживается)

Значения:
* Distinct
* None


# ::stappler::sql::Query<typename,typename>::State

## BRIEF

Значение инициализации запроса

## CONTENT

Доступ: public

Значение инициализации запроса

Значения:
* None - значение не инициализировано
* Init - значение инициализировано явно
* Some - значение инициализировано неявно


# ::stappler::sql::Query<typename,typename>::FinalizationState

## BRIEF

Способ финализации элемента запроса

## CONTENT

Доступ: public

Способ финализации элемента запроса

Значения:
* None - не требуется
* Parentesis - скобки
* Quote - одиночные кавычки
* DoubleQuote - двойные кавычки
* Finalized - уже финализировано


# ::stappler::sql::Query<typename,typename>::RawString

## BRIEF

Тип для записи необрабатываемой строки в запрос

## CONTENT

Доступ: public

Тип для записи необрабатываемой строки в запрос


# ::stappler::sql::Query<typename,typename>::RawString::data

## BRIEF

Содержимое необрабатываемой строки

## CONTENT

Содержимое необрабатываемой строки

Тип: stappler::sql::Query::String


# ::stappler::sql::Query<typename,typename>::RawStringView

## BRIEF

Тип для записи необрабатываемой строки в запрос

## CONTENT

Доступ: public

Тип для записи необрабатываемой строки в запрос


# ::stappler::sql::Query<typename,typename>::RawStringView::data

## BRIEF

Содержимое необрабатываемой строки

## CONTENT

Содержимое необрабатываемой строки

Тип: stappler::StringView


# ::stappler::sql::Query<typename,typename>::Field

## BRIEF

Структура поля для запроса

## CONTENT

Доступ: public

Структура поля для запроса


# ::stappler::sql::Query<typename,typename>::Field::all()

## BRIEF

Возвращает идентификатор, соотвествующий любому полю

## CONTENT

Возвращает идентификатор, соотвествующий любому полю (обычно "*")

Возвращает:
* stappler::sql::Query::Field

# ::stappler::sql::Query<typename,typename>::Field::all(stappler::StringView const&)

## BRIEF

Возвращает именованый агрегат вокруг любого поля

## CONTENT

Возвращает именованый агрегат вокруг любого поля (как в `COUNT(*)`)

Параметры:
* stappler::StringView const& - имя аггрегата

Возвращает:
* stappler::sql::Query::Field

# ::stappler::sql::Query<typename,typename>::Field::Field(stappler::StringView const&)

## BRIEF

Создаёт идентификатор именованного поля

## CONTENT

Создаёт идентификатор именованного поля

Параметры:
* stappler::StringView const&


# ::stappler::sql::Query<typename,typename>::Field::Field(char const*)

## BRIEF

Создаёт идентификатор именованного поля

## CONTENT

Создаёт идентификатор именованного поля

Параметры:
* char const*


# ::stappler::sql::Query<typename,typename>::Field::Field(std::string const&)

## BRIEF

Создаёт идентификатор именованного поля

## CONTENT

Создаёт идентификатор именованного поля

Параметры:
* std::string const&


# ::stappler::sql::Query<typename,typename>::Field::Field(memory::string const&)

## BRIEF

Создаёт идентификатор именованного поля

## CONTENT

Создаёт идентификатор именованного поля

Параметры:
* memory::string const&


# ::stappler::sql::Query<typename,typename>::Field::Field(stappler::StringView const&,bool)

## BRIEF

Создаёт идентификатор именованного поля

## CONTENT

Создаёт идентификатор именованного поля

Параметры:
* stappler::StringView const&
* bool - true если необходимо использовать имя как простой текст (без кавычек имени)


# ::stappler::sql::Query<typename,typename>::Field::Field<typename,typename>(SourceString&&,FieldString&&)

## BRIEF

Создаёт идентификатор именованного поля с пространством имён

## CONTENT

Создаёт идентификатор именованного поля с пространством имён

Параметры шаблона:
* typename SourceString
* typename FieldString

Параметры:
* SourceString&& - идентификатор пространства имён
* FieldString&& - имя поля


# ::stappler::sql::Query<typename,typename>::Field::as(char const*)

## BRIEF

Добавляет псевдоним полю

## CONTENT

Добавляет псевдоним полю

Параметры:
* char const*

Возвращает:
* stappler::sql::Query::Field&

# ::stappler::sql::Query<typename,typename>::Field::as(std::string const&)

## BRIEF

Добавляет псевдоним полю

## CONTENT

Добавляет псевдоним полю

Параметры:
* std::string const&

Возвращает:
* stappler::sql::Query::Field&

# ::stappler::sql::Query<typename,typename>::Field::as(memory::string const&)

## BRIEF

Добавляет псевдоним полю

## CONTENT

Добавляет псевдоним полю

Параметры:
* memory::string const&

Возвращает:
* stappler::sql::Query::Field&

# ::stappler::sql::Query<typename,typename>::Field::from(char const*)

## BRIEF

Добавляет именованный источник для поля

## CONTENT

Добавляет именованный источник для поля

Параметры:
* char const*

Возвращает:
* stappler::sql::Query::Field&

# ::stappler::sql::Query<typename,typename>::Field::from(std::string const&)

## BRIEF

Добавляет именованный источник для поля

## CONTENT

Добавляет именованный источник для поля

Параметры:
* std::string const&

Возвращает:
* stappler::sql::Query::Field&

# ::stappler::sql::Query<typename,typename>::Field::from(memory::string const&)

## BRIEF

Добавляет именованный источник для поля

## CONTENT

Добавляет именованный источник для поля

Параметры:
* memory::string const&

Возвращает:
* stappler::sql::Query::Field&

# ::stappler::sql::Query<typename,typename>::Field::source

## BRIEF

Идентификатор источника или пространства имён

## CONTENT

Идентификатор источника или пространства имён

Тип: stappler::StringView


# ::stappler::sql::Query<typename,typename>::Field::name

## BRIEF

Идентификатор поля

## CONTENT

Идентификатор поля

Тип: stappler::StringView


# ::stappler::sql::Query<typename,typename>::Field::alias

## BRIEF

Псевдоним поля

## CONTENT

Псевдоним поля

Тип: stappler::StringView


# ::stappler::sql::Query<typename,typename>::Field::plain

## BRIEF

Флаг интрпретации имени как чистого текста

## CONTENT

Флаг интрпретации имени как чистого текста. Если true - не добавляются кавычи для имени.

Тип: bool


# ::stappler::sql::Query<typename,typename>::Expand<typename>

## BRIEF

Вспомогательная структура с функциями для добавления аргументов к блоку

## CONTENT

Доступ: public

Вспомогательная структура с функциями для добавления аргументов к блоку

Параметры шаблона:
* typename Clause - тип внешнего блока


# ::stappler::sql::Query<typename,typename>::Expand<typename>::fields<typename>(Clause&,stappler::sql::Query::Field const&,VArgs &&...)

## BRIEF

Добавляет поля в качестве аргументов к блоку

## CONTENT

Добавляет поля в качестве аргументов к блоку

Параметры шаблона:
* typename VArgs

Параметры:
* Clause&
* stappler::sql::Query::Field const&
* VArgs &&...


# ::stappler::sql::Query<typename,typename>::Expand<typename>::fields(Clause&,stappler::sql::Query::Field const&)

## BRIEF

Добавляет одиночное поле в качестве аргумента к блоку

## CONTENT

Добавляет одиночное поле в качестве аргумента к блоку. Используется для конца рекурсивного обхода переменного числа аргументов

Параметры:
* Clause&
* stappler::sql::Query::Field const&


# ::stappler::sql::Query<typename,typename>::Expand<typename>::from<typename>(Clause&,stappler::sql::Query::Field const&,VArgs &&...)

## BRIEF

Добавляет источники к блоку

## CONTENT

Добавляет источники к блоку

Параметры шаблона:
* typename VArgs

Параметры:
* Clause&
* stappler::sql::Query::Field const&
* VArgs &&...


# ::stappler::sql::Query<typename,typename>::Expand<typename>::from(Clause&,stappler::sql::Query::Field const&)

## BRIEF

Добавляет источник к блоку

## CONTENT

Добавляет источник к блоку. Используется для конца рекурсивного обхода переменного числа аргументов

Параметры:
* Clause&
* stappler::sql::Query::Field const&


# ::stappler::sql::Query<typename,typename>::Expand<typename>::values<typename,typename>(Clause&,Value&&,VArgs &&...)

## BRIEF

Добавляет значения к блоку в качестве аргументов

## CONTENT

Добавляет значения к блоку в качестве аргументов

Параметры шаблона:
* typename Value
* typename VArgs

Параметры:
* Clause&
* Value&&
* VArgs &&...


# ::stappler::sql::Query<typename,typename>::Expand<typename>::values<typename>(Clause&,Value&&)

## BRIEF

Добавляет значение к блоку в качестве аргумента

## CONTENT

Добавляет значение к блоку в качестве аргумента. Используется для конца рекурсивного обхода переменного числа аргументов

Параметры шаблона:
* typename Value

Параметры:
* Clause&
* Value&&


# ::stappler::sql::Query<typename,typename>::Expand<typename>::values(Clause&)

## BRIEF

Вспомогательная функция завершения рекурсии

## CONTENT

Вспомогательная функция завершения рекурсии (обработка бага GCC)

Параметры:
* Clause&


# ::stappler::sql::Query<typename,typename>::QueryHandle

## BRIEF

Манипулятор запроса для операционного SQL-блока

## CONTENT

Доступ: public

Манипулятор запроса для операционного SQL-блока. Используется в качстве базового класса для различных блоков запроса.


# ::stappler::sql::Query<typename,typename>::QueryHandle::query

## BRIEF

Указатель на связанный запрос

## CONTENT

Указатель на связанный запрос

Тип: Query<Binder, Interface>*


# ::stappler::sql::Query<typename,typename>::QueryHandle::state

## BRIEF

Статус инициализации блока

## CONTENT

Статус инициализации блока

Тип: stappler::sql::Query::State


# ::stappler::sql::Query<typename,typename>::QueryHandle::finalize()

## BRIEF

Завершает запись блока

## CONTENT

Завершает запись блока


# ::stappler::sql::Query<typename,typename>::QueryHandle::QueryHandle(Query<Binder, Interface>*,stappler::sql::Query::State)

## BRIEF

Инициализирует манипулятор запроса

## CONTENT

Инициализирует манипулятор запроса

Параметры:
* Query<Binder, Interface>* - исходный запрос
* stappler::sql::Query::State - исходный статус инициализации


# ::stappler::sql::Query<typename,typename>::WhereClause<typename>

## BRIEF

Блок WHERE подзапроса

## CONTENT

Доступ: public

Блок WHERE подзапроса. Используется для блоков, где требуются аргументы, аналогичные WHERE.

Параметры шаблона:
* typename Clause - тип исходного блока

Базовые классы:
* QueryHandle


# ::stappler::sql::Query<typename,typename>::WhereClause<typename>::where<typename>(stappler::sql::Operator,stappler::sql::Query::Field const&,stappler::sql::Comparation,Value&&)

## BRIEF

Записывает оператор сравнения поля и значения

## CONTENT

Записывает оператор сравнения поля и значения

Параметры шаблона:
* typename Value - тип значения

Параметры:
* stappler::sql::Operator - логический оператор для объединения запросов
* stappler::sql::Query::Field const& - поле для сравнения
* stappler::sql::Comparation - оператор сравнения
* Value&& - значение для сравнения

Возвращает:
* Clause&

# ::stappler::sql::Query<typename,typename>::WhereClause<typename>::where<typename>(stappler::sql::Operator,stappler::sql::Query::Field const&,stappler::StringView const&,Value&&)

## BRIEF

Записывает оператор сравнения поля и значения

## CONTENT

Записывает оператор сравнения поля и значения, для случая, когда подмножество SQL поддерживает нестандартные операторы

Параметры шаблона:
* typename Value - тип значения

Параметры:
* stappler::sql::Operator - логический оператор для объединения запросов
* stappler::sql::Query::Field const& - поле для сравнения
* stappler::StringView const& - текстовая форма оператора (для случая, когда подмножество языка поддерживает нестандартные операторы)
* Value&& - значение для сравнения

Возвращает:
* Clause&

# ::stappler::sql::Query<typename,typename>::WhereClause<typename>::where<typename>(stappler::sql::Operator,stappler::sql::Query::Field const&,stappler::sql::Comparation,Value&&,Value&&)

## BRIEF

Записывает оператор сравнения поля и значений для двуместного оператора

## CONTENT

Записывает оператор сравнения поля и значений для двуместного оператора

Параметры шаблона:
* typename Value - тип значения

Параметры:
* stappler::sql::Operator - логический оператор для объединения запросов
* stappler::sql::Query::Field const& - поле для сравнения
* stappler::sql::Comparation - оператор сравнения
* Value&& - первое значение для сравнения
* Value&& - второе значение для сравнения

Возвращает:
* Clause&

# ::stappler::sql::Query<typename,typename>::WhereClause<typename>::where<typename>(stappler::sql::Operator,stappler::sql::Query::Field const&,stappler::StringView const&,Value&&,stappler::StringView const&,Value&&)

## BRIEF

Записывает оператор сравнения поля и значений с двуместным оператором

## CONTENT

Записывает оператор сравнения поля и значений с двуместным оператором, для случая, когда подмножество SQL поддерживает нестандартные операторы

Параметры шаблона:
* typename Value - тип значения

Параметры:
* stappler::sql::Operator - логический оператор для объединения запросов
* stappler::sql::Query::Field const& - поле для сравнения
* stappler::StringView const& - текстовая форма первой части оператора (для случая, когда подмножество языка поддерживает нестандартные операторы)
* Value&& - первое значение для сравнения
* stappler::StringView const& - текстовая форма второй части оператора
* Value&& - второе значение для сравнения

Возвращает:
* Clause&

# ::stappler::sql::Query<typename,typename>::WhereClause<typename>::parenthesis<typename>(stappler::sql::Operator,Callback const&)

## BRIEF

Упаковывает новый блок в текущий с использованием вложения

## CONTENT

Упаковывает новый блок в текущий с использованием вложения

Параметры шаблона:
* typename Callback

Параметры:
* stappler::sql::Operator - логический оператор для соединения
* Callback const& - функция для вызова внутри вложения (вызывается с манипулятором WhereBegin)

Возвращает:
* Clause&

# ::stappler::sql::Query<typename,typename>::WhereBegin

## BRIEF

Структура для начала секции WHERE запроса

## CONTENT

Доступ: public

Структура для начала секции WHERE запроса

Базовые классы:
* QueryHandle


# ::stappler::sql::Query<typename,typename>::WhereBegin::where<typename>(Args &&...)

## BRIEF

Начинает запись WHERE запроса

## CONTENT

Начинает запись WHERE запроса. Арзументы передаются в WhereClause::where, игнорируя логический оператор

Параметры шаблона:
* typename Args

Параметры:
* Args &&...

Возвращает:
* stappler::sql::Query::WhereContinue - манипулятор для продолжения записи блока

# ::stappler::sql::Query<typename,typename>::WhereBegin::where()

## BRIEF

Начинает запись WHERE запроса

## CONTENT

Начинает запись WHERE запроса, инициализруя пустой блок

Возвращает:
* stappler::sql::Query::WhereContinue - манипулятор для продолжения записи блока

# ::stappler::sql::Query<typename,typename>::WhereBegin::whereParentesis<typename>(Callback const&)

## BRIEF

Начинает запись WHERE запроса с подхапроса

## CONTENT

Начинает запись WHERE запроса с подхапроса

Параметры шаблона:
* typename Callback

Параметры:
* Callback const& - функция, вызываемая для записи подзапроса (вызывается с манипулятором WhereBegin)

Возвращает:
* stappler::sql::Query::WhereContinue - манипулятор для продолжения записи блока

# ::stappler::sql::Query<typename,typename>::WhereContinue

## BRIEF

Структуора для продолжения записи блока WHERE после инициализации

## CONTENT

Доступ: public

Структуора для продолжения записи блока WHERE после инициализации. Использует функции WhereClause.

Базовые классы:
* WhereClause<WhereContinue>


# ::stappler::sql::Query<typename,typename>::SetClause<typename>

## BRIEF

Струкутра для записи блока SET

## CONTENT

Доступ: public

Струкутра для записи блока SET (как в UPDATE ... SET)

Параметры шаблона:
* typename Clause

Базовые классы:
* QueryHandle


# ::stappler::sql::Query<typename,typename>::SetClause<typename>::set<typename>(stappler::StringView const&,Value&&)

## BRIEF

Записывает аргумент для записи в поле

## CONTENT

Записывает аргумент для записи в поле

Параметры шаблона:
* typename Value - тип значения

Параметры:
* stappler::StringView const& - имя поля
* Value&& - значение для запими

Возвращает:
* Clause&

# ::stappler::sql::Query<typename,typename>::SetClause<typename>::set<typename>(stappler::StringView const&,stappler::StringView const&,Value&&)

## BRIEF

Записывает аргумент для записи в поле

## CONTENT

Записывает аргумент для записи в поле в пространстве имён

Параметры шаблона:
* typename Value - тип значения

Параметры:
* stappler::StringView const& - пространство имён/таблица
* stappler::StringView const& - имя поля
* Value&& - значение

Возвращает:
* Clause&

# ::stappler::sql::Query<typename,typename>::SetClause<typename>::def(stappler::StringView const&)

## BRIEF

Записывает значение по умолчанию для поля

## CONTENT

Записывает значение по умолчанию для поля

Параметры:
* stappler::StringView const& - имя поля

Возвращает:
* Clause&

# ::stappler::sql::Query<typename,typename>::FieldsClause<typename>

## BRIEF

Структура списка полей для SELECT ... и подобных

## CONTENT

Доступ: public

Структура списка полей для SELECT ... и подобных

Параметры шаблона:
* typename Clause

Базовые классы:
* QueryHandle


# ::stappler::sql::Query<typename,typename>::FieldsClause<typename>::fields<typename>(stappler::sql::Query::Field const&,Args &&...)

## BRIEF

Добавляет поля к списку

## CONTENT

Добавляет поля к списку

Параметры шаблона:
* typename Args

Параметры:
* stappler::sql::Query::Field const& - первое поле
* Args &&... - список следующих аргументов-полей

Возвращает:
* Clause&

# ::stappler::sql::Query<typename,typename>::FieldsClause<typename>::field(stappler::sql::Query::Field const&)

## BRIEF

Добавляет поле к списку

## CONTENT

Добавляет поле к списку

Параметры:
* stappler::sql::Query::Field const&

Возвращает:
* Clause&

# ::stappler::sql::Query<typename,typename>::FieldsClause<typename>::aggregate(stappler::StringView const&,stappler::sql::Query::Field const&)

## BRIEF

Добавляет поле-агрегат к списку

## CONTENT

Добавляет поле-агрегат к списку

Параметры:
* stappler::StringView const& - имя агрегата вокруг поля
* stappler::sql::Query::Field const& - поле для записи

Возвращает:
* Clause&

# ::stappler::sql::Query<typename,typename>::GenericQuery

## BRIEF

Базовый тип для запроса или подзапроса

## CONTENT

Доступ: public

Базовый тип для запроса или подзапроса

Базовые классы:
* QueryHandle


# ::stappler::sql::Query<typename,typename>::GenericQuery::with<typename>(stappler::StringView const&,Callback const&)

## BRIEF

Добавляет подзапрос в виде структуры WITH

## CONTENT

Добавляет подзапрос в виде структуры WITH

Параметры шаблона:
* typename Callback

Параметры:
* stappler::StringView const& - имя подзапроса
* Callback const& - функция обратного вызова, вызывается с GenericQuery

Возвращает:
* stappler::sql::Query::GenericQuery&

# ::stappler::sql::Query<typename,typename>::GenericQuery::select(stappler::sql::Query::Distinct)

## BRIEF

Начинает новый зпрос типа SELECT

## CONTENT

Начинает новый зпрос типа SELECT

Параметры:
* stappler::sql::Query::Distinct

Возвращает:
* stappler::sql::Query::Select - манипулятор заявления SELECT


# ::stappler::sql::Query<typename,typename>::GenericQuery::select<typename>(stappler::sql::Query::Field const&,Args &&...)

## BRIEF

Начинает новый зпрос типа SELECT

## CONTENT

Начинает новый зпрос типа SELECT со списком полей

Параметры шаблона:
* typename Args

Параметры:
* stappler::sql::Query::Field const&
* Args &&...

Возвращает:
* stappler::sql::Query::Select

# ::stappler::sql::Query<typename,typename>::GenericQuery::select<typename>(stappler::sql::Query::Distinct,stappler::sql::Query::Field const&,Args &&...)

## BRIEF

Начинает новый зпрос типа SELECT

## CONTENT

Начинает новый зпрос типа SELECT со списком полей

Параметры шаблона:
* typename Args

Параметры:
* stappler::sql::Query::Distinct
* stappler::sql::Query::Field const&
* Args &&...

Возвращает:
* stappler::sql::Query::Select

# ::stappler::sql::Query<typename,typename>::GenericQuery::insert(stappler::StringView const&)

## BRIEF

Начинает новый запрос INSERT INTO

## CONTENT

Начинает новый запрос INSERT INTO

Параметры:
* stappler::StringView const& - имя таблицы для вставки

Возвращает:
* stappler::sql::Query::Insert

# ::stappler::sql::Query<typename,typename>::GenericQuery::insert(stappler::StringView const&,stappler::StringView const&)

## BRIEF

Начинает новый запрос INSERT INTO

## CONTENT

Начинает новый запрос INSERT INTO

Параметры:
* stappler::StringView const& - имя таблицы для вставки
* stappler::StringView const& - внутренний псевдоним для таблицы

Возвращает:
* stappler::sql::Query::Insert

# ::stappler::sql::Query<typename,typename>::GenericQuery::update(stappler::StringView const&)

## BRIEF

Начинает новый запрос UPDATE

## CONTENT

Начинает новый запрос UPDATE

Параметры:
* stappler::StringView const& - имя таблицы для вставки

Возвращает:
* stappler::sql::Query::Update

# ::stappler::sql::Query<typename,typename>::GenericQuery::update(stappler::StringView const&,stappler::StringView const&)

## BRIEF

Начинает новый запрос UPDATE

## CONTENT

Начинает новый запрос UPDATE

Параметры:
* stappler::StringView const& - имя таблицы для вставки
* stappler::StringView const& - внутренний псевдоним для таблицы

Возвращает:
* stappler::sql::Query::Update

# ::stappler::sql::Query<typename,typename>::GenericQuery::remove(stappler::StringView const&)

## BRIEF

Начинает новый запрос DELETE FROM

## CONTENT

Начинает новый запрос DELETE FROM

Параметры:
* stappler::StringView const& - имя таблицы

Возвращает:
* stappler::sql::Query::Delete

# ::stappler::sql::Query<typename,typename>::GenericQuery::remove(stappler::StringView const&,stappler::StringView const&)

## BRIEF

Начинает новый запрос DELETE FROM

## CONTENT

Начинает новый запрос DELETE FROM

Параметры:
* stappler::StringView const& - имя таблицы
* stappler::StringView const& - внутренний псевдоним таблицы

Возвращает:
* stappler::sql::Query::Delete

# ::stappler::sql::Query<typename,typename>::Select

## BRIEF

Структура для запроса SELECT

## CONTENT

Доступ: public

Структура для запроса SELECT

Базовые классы:
* FieldsClause<Select>


# ::stappler::sql::Query<typename,typename>::Select::all()

## BRIEF

Добавляет выбор всех полей

## CONTENT

Добавляет выбор всех полей (`SELECT *`)

Возвращает:
* stappler::sql::Query::Select&

# ::stappler::sql::Query<typename,typename>::Select::count()

## BRIEF

Добавляет выбор числа результатов

## CONTENT

Добавляет выбор числа результатов (`SELECT COUNT(*)`)

Возвращает:
* stappler::sql::Query::Select&

# ::stappler::sql::Query<typename,typename>::Select::count(stappler::sql::Query::String const&)

## BRIEF

Добавляет выбор числа результатов

## CONTENT

Добавляет выбор числа результатов (`SELECT COUNT(name)`)

Параметры:
* stappler::sql::Query::String const& - имя для агрегата числа результатов

Возвращает:
* stappler::sql::Query::Select&

# ::stappler::sql::Query<typename,typename>::Select::from()

## BRIEF

Переходит к записи блока FROM

## CONTENT

Переходит к записи блока FROM

Возвращает:
* stappler::sql::Query::SelectFrom

# ::stappler::sql::Query<typename,typename>::Select::from(stappler::sql::Query::Field const&)

## BRIEF

Переходит к записи блока FROM

## CONTENT

Переходит к записи блока FROM, сразу добавляя таблицу для выбора

Параметры:
* stappler::sql::Query::Field const& - поле, идентифицирующее таблицу для выбора

Возвращает:
* stappler::sql::Query::SelectFrom


# ::stappler::sql::Query<typename,typename>::Select::from<typename>(stappler::sql::Query::Field const&,Args &&...)

## BRIEF

Переходит к записи блока FROM

## CONTENT

Переходит к записи блока FROM, сразу добавляя список таблиц произвольной длины

Параметры шаблона:
* typename Args

Параметры:
* stappler::sql::Query::Field const& - поле, идентифицирующее таблицу для выбора
* Args &&... - список полей произвольной длины

Возвращает:
* stappler::sql::Query::SelectFrom

# ::stappler::sql::Query<typename,typename>::SelectFrom

## BRIEF

Структура для записи блока FROM

## CONTENT

Доступ: public

Структура для записи блока FROM

Базовые классы:
* QueryHandle


# ::stappler::sql::Query<typename,typename>::SelectFrom::from(stappler::sql::Query::Field const&)

## BRIEF

Добавляет таблицу для выбора

## CONTENT

Добавляет таблицу для выбора

Параметры:
* stappler::sql::Query::Field const& - поле, идентифицирующее таблицу

Возвращает:
* stappler::sql::Query::SelectFrom&

# ::stappler::sql::Query<typename,typename>::SelectFrom::from<typename>(stappler::sql::Query::Field const&,Args &&...)

## BRIEF

Добавляет таблицы для выбора

## CONTENT

Добавляет таблицы для выбора

Параметры шаблона:
* typename Args

Параметры:
* stappler::sql::Query::Field const& - поле, идентифицирующее таблицу
* Args &&... - список полей

Возвращает:
* stappler::sql::Query::SelectFrom&

# ::stappler::sql::Query<typename,typename>::SelectFrom::innerJoinOn<typename>(stappler::StringView const&,Callback const&)

## BRIEF

Добавляет INNER JOIN для предыдущего записанного заявления

## CONTENT

Добавляет INNER JOIN для предыдущего записанного заявления

Параметры шаблона:
* typename Callback

Параметры:
* stappler::StringView const& - имя таблицы для INNER JOIN
* Callback const& - функция обратного вызова для записи фильтра, вызывается с WhereBegin

Возвращает:
* stappler::sql::Query::SelectFrom&

# ::stappler::sql::Query<typename,typename>::SelectFrom::leftJoinOn<typename>(stappler::StringView const&,Callback const&)

## BRIEF

Добавляет LEFT JOIN для предыдущего записанного заявления

## CONTENT

Добавляет LEFT JOIN для предыдущего записанного заявления

Параметры шаблона:
* typename Callback

Параметры:
* stappler::StringView const& - имя таблицы для LEFT JOIN
* Callback const& - функция обратного вызова для записи фильтра, вызывается с WhereBegin

Возвращает:
* stappler::sql::Query::SelectFrom&

# ::stappler::sql::Query<typename,typename>::SelectFrom::rightJoinOn<typename>(stappler::StringView const&,Callback const&)

## BRIEF

Добавляет RIGHT JOIN для предыдущего записанного заявления

## CONTENT

Добавляет RIGHT JOIN для предыдущего записанного заявления

Параметры шаблона:
* typename Callback

Параметры:
* stappler::StringView const& - имя таблицы для RIGHT JOIN
* Callback const& - функция обратного вызова для записи фильтра, вызывается с WhereBegin

Возвращает:
* stappler::sql::Query::SelectFrom&

# ::stappler::sql::Query<typename,typename>::SelectFrom::fullJoinOn<typename>(stappler::StringView const&,Callback const&)

## BRIEF

Добавляет FULL JOIN для предыдущего записанного заявления

## CONTENT

Добавляет FULL JOIN для предыдущего записанного заявления

Параметры шаблона:
* typename Callback

Параметры:
* stappler::StringView const& - имя таблицы для FULL JOIN
* Callback const& - функция обратного вызова для записи фильтра, вызывается с WhereBegin

Возвращает:
* stappler::sql::Query::SelectFrom&

# ::stappler::sql::Query<typename,typename>::SelectFrom::where<typename>(Args &&...)

## BRIEF

Переходит к записи блока WHERE

## CONTENT

Переходит к записи блока WHERE, сразу получая начальные аргументы (см. WhereClause)

Параметры шаблона:
* typename Args

Параметры:
* Args &&...

Возвращает:
* stappler::sql::Query::SelectWhere

# ::stappler::sql::Query<typename,typename>::SelectFrom::where()

## BRIEF

Переходит к записи блока WHERE

## CONTENT

Переходит к записи блока WHERE

Возвращает:
* stappler::sql::Query::SelectWhere

# ::stappler::sql::Query<typename,typename>::SelectFrom::group(stappler::sql::Query::Field const&)

## BRIEF

Переходит к записи блока GROUP BY

## CONTENT

Переходит к записи блока GROUP BY

Параметры:
* stappler::sql::Query::Field const& - поле для группировки

Возвращает:
* stappler::sql::Query::SelectGroup

# ::stappler::sql::Query<typename,typename>::SelectFrom::order(stappler::sql::Ordering,stappler::sql::Query::Field const&,stappler::sql::Nulls)

## BRIEF

Переходит к записи ORDER BY

## CONTENT

Переходит к записи ORDER BY

Параметры:
* stappler::sql::Ordering - способ упорядочивания
* stappler::sql::Query::Field const& - поле для упорядочивания
* stappler::sql::Nulls - способ уполядочивания значений NULL

Возвращает:
* stappler::sql::Query::SelectOrder

# ::stappler::sql::Query<typename,typename>::SelectFrom::forUpdate()

## BRIEF

Записывает флаг FOR UPDATE

## CONTENT

Записывает флаг FOR UPDATE, завершает запись запроса


# ::stappler::sql::Query<typename,typename>::SelectGroup

## BRIEF

Структура для записи GROUP BY

## CONTENT

Доступ: public

Структура для записи GROUP BY

Базовые классы:
* QueryHandle


# ::stappler::sql::Query<typename,typename>::SelectGroup::fields<typename>(stappler::sql::Query::Field const&,Args &&...)

## BRIEF

Записывает список полей для группировки

## CONTENT

Записывает список полей для группировки

Параметры шаблона:
* typename Args

Параметры:
* stappler::sql::Query::Field const&
* Args &&...

Возвращает:
* stappler::sql::Query::SelectGroup&

# ::stappler::sql::Query<typename,typename>::SelectGroup::field(stappler::sql::Query::Field const&)

## BRIEF

Записывает одиночное поле для группировки

## CONTENT

Записывает одиночное поле для группировки

Параметры:
* stappler::sql::Query::Field const&

Возвращает:
* stappler::sql::Query::SelectGroup&

# ::stappler::sql::Query<typename,typename>::SelectGroup::order(stappler::sql::Ordering,stappler::sql::Query::Field const&,stappler::sql::Nulls)

## BRIEF

Переходит к записи ORDER BY

## CONTENT

Переходит к записи ORDER BY

Параметры:
* stappler::sql::Ordering - способ упорядочивания
* stappler::sql::Query::Field const& - поле для упорядочивания
* stappler::sql::Nulls - способ уполядочивания значений NULL

Возвращает:
* stappler::sql::Query::SelectOrder

# ::stappler::sql::Query<typename,typename>::SelectWhere

## BRIEF

Структура для записи блока WHERE

## CONTENT

Доступ: public

Структура для записи блока WHERE, наследует функции WhereClause

Базовые классы:
* WhereClause<SelectWhere>


# ::stappler::sql::Query<typename,typename>::SelectWhere::group(stappler::sql::Query::Field const&)

## BRIEF

Переходит к записи GROUP BY

## CONTENT

Переходит к записи GROUP BY

Параметры:
* stappler::sql::Query::Field const& - начальное поле для группировки

Возвращает:
* stappler::sql::Query::SelectGroup

# ::stappler::sql::Query<typename,typename>::SelectWhere::order(stappler::sql::Ordering,stappler::sql::Query::Field const&,stappler::sql::Nulls)

## BRIEF

Переходит к записи ORDER BY

## CONTENT

Переходит к записи ORDER BY

Параметры:
* stappler::sql::Ordering - способ упорядочивания
* stappler::sql::Query::Field const& - поле для упорядочивания
* stappler::sql::Nulls - способ уполядочивания значений NULL

Возвращает:
* stappler::sql::Query::SelectOrder

# ::stappler::sql::Query<typename,typename>::SelectWhere::forUpdate()

## BRIEF

Записывает флаг FOR UPDATE

## CONTENT

Записывает флаг FOR UPDATE, завершает запись запроса


# ::stappler::sql::Query<typename,typename>::SelectOrder

## BRIEF

Структура для записи блока ORDER BY

## CONTENT

Доступ: public

Структура для записи блока ORDER BY

Базовые классы:
* QueryHandle


# ::stappler::sql::Query<typename,typename>::SelectOrder::limit(size_t,size_t)

## BRIEF

Записывает блок LIMIT ... OFFSET

## CONTENT

Записывает блок LIMIT ... OFFSET

Параметры:
* size_t - значение для LIMIT
* size_t - значение для OFFSET

Возвращает:
* stappler::sql::Query::SelectPost

# ::stappler::sql::Query<typename,typename>::SelectOrder::limit(size_t)

## BRIEF

Записывает блок LIMIT

## CONTENT

Записывает блок LIMIT

Параметры:
* size_t - значение для LIMIT

Возвращает:
* stappler::sql::Query::SelectPost

# ::stappler::sql::Query<typename,typename>::SelectOrder::offset(size_t)

## BRIEF

Записывает блок OFFSET

## CONTENT

Записывает блок OFFSET

Параметры:
* size_t - значение для OFFSET

Возвращает:
* stappler::sql::Query::SelectPost

# ::stappler::sql::Query<typename,typename>::SelectOrder::forUpdate()

## BRIEF

Записывает флаг FOR UPDATE

## CONTENT

Записывает флаг FOR UPDATE, завершает запись запроса


# ::stappler::sql::Query<typename,typename>::SelectPost

## BRIEF

Финальная структура для запроса SELECT

## CONTENT

Доступ: public

Финальная структура для запроса SELECT

Базовые классы:
* QueryHandle


# ::stappler::sql::Query<typename,typename>::SelectPost::forUpdate()

## BRIEF

Записывает флаг FOR UPDATE

## CONTENT

Записывает флаг FOR UPDATE, завершает запись запроса


# ::stappler::sql::Query<typename,typename>::Insert

## BRIEF

Структура для записи блока INSERT INTO

## CONTENT

Доступ: public

Структура для записи блока INSERT INTO. Для записи полей используются функции FieldsClause

Базовые классы:
* FieldsClause<Insert>


# ::stappler::sql::Query<typename,typename>::Insert::values<typename>(Args &&...)

## BRIEF

Переходит к записи значений для вставки

## CONTENT

Переходит к записи значений для вставки

Параметры шаблона:
* typename Args

Параметры:
* Args &&... - список значений для вставки в текущем пакете

Возвращает:
* stappler::sql::Query::InsertValues - манипулятор для вставки значений

# ::stappler::sql::Query<typename,typename>::InsertValues

## BRIEF

Структура для вставки значений в блок INSERT INTO

## CONTENT

Доступ: public

Структура для вставки значений в блок INSERT INTO

Базовые классы:
* QueryHandle


# ::stappler::sql::Query<typename,typename>::InsertValues::value<typename>(Value&&)

## BRIEF

Добавляет значение для вставки

## CONTENT

Добавляет значение для вставки

Параметры шаблона:
* typename Value

Параметры:
* Value&& - новое значение

Возвращает:
* stappler::sql::Query::InsertValues&

# ::stappler::sql::Query<typename,typename>::InsertValues::def()

## BRIEF

Добавляет значение по умолчанию для вставки

## CONTENT

Добавляет значение по умолчанию для вставки

Возвращает:
* stappler::sql::Query::InsertValues&

# ::stappler::sql::Query<typename,typename>::InsertValues::values<typename>(Args &&...)

## BRIEF

Добавляет значения для вставки

## CONTENT

Добавляет значения для вставки в виде аргументов переменной длины

Параметры шаблона:
* typename Args

Параметры:
* Args &&...

Возвращает:
* stappler::sql::Query::InsertValues&

# ::stappler::sql::Query<typename,typename>::InsertValues::onConflict(stappler::StringView const&)

## BRIEF

Переходит к записи блока ON CONFLICT, если такой доступен

## CONTENT

Переходит к записи блока ON CONFLICT, если такой доступен. Завершает запись значений.

Параметры:
* stappler::StringView const& - поле, по которому проверяется конфликт

Возвращает:
* stappler::sql::Query::InsertConflict

# ::stappler::sql::Query<typename,typename>::InsertValues::onConflictDoNothing()

## BRIEF

Записывает отмену действия при конфликте

## CONTENT

Записывает отмену действия при конфликте. Завершает запись значений.

Возвращает:
* stappler::sql::Query::InsertPostConflict

# ::stappler::sql::Query<typename,typename>::InsertValues::returning()

## BRIEF

Запистывает блок RETURNING или аналогичные, если возможно

## CONTENT

Запистывает блок RETURNING или аналогичные, если возможно. Завершает запись значений.

Возвращает:
* stappler::sql::Query::Returning

# ::stappler::sql::Query<typename,typename>::InsertValues::next()

## BRIEF

Переходит к записи следующего набора значений

## CONTENT

Переходит к записи следующего набора значений

Возвращает:
* stappler::sql::Query::InsertValues

# ::stappler::sql::Query<typename,typename>::InsertConflict

## BRIEF

Струкутра для записи механизма разрешения конфликтов при вставке

## CONTENT

Доступ: public

Струкутра для записи механизма разрешения конфликтов при вставке

Базовые классы:
* QueryHandle


# ::stappler::sql::Query<typename,typename>::InsertConflict::doNothing()

## BRIEF

Отменяет действие при конфликте

## CONTENT

Отменяет действие при конфликте

Возвращает:
* stappler::sql::Query::InsertPostConflict

# ::stappler::sql::Query<typename,typename>::InsertConflict::doUpdate()

## BRIEF

Указывает альтернативные значения для замены в строке при конфликте

## CONTENT

Указывает альтернативные значения для замены в строке при конфликте

Возвращает:
* stappler::sql::Query::InsertUpdateValues - манипулятор для указания новых значений


# ::stappler::sql::Query<typename,typename>::InsertUpdateValues

## BRIEF

Структура для указания новых значений при изменении строки на основании конфликта

## CONTENT

Доступ: public

Структура для указания новых значений при изменении строки на основании конфликта. Использует функции SetClause для работы

Базовые классы:
* SetClause<InsertUpdateValues>


# ::stappler::sql::Query<typename,typename>::InsertUpdateValues::excluded(stappler::StringView)

## BRIEF

Назначает для поля значение из конфликтной строки вставки

## CONTENT

Назначает для поля значение из конфликтной строки вставки

Параметры:
* stappler::StringView - имя пола

Возвращает:
* stappler::sql::Query::InsertUpdateValues&

# ::stappler::sql::Query<typename,typename>::InsertUpdateValues::excluded(stappler::StringView,stappler::StringView)

## BRIEF

Назначает для поля значение из конфликтной строки вставки

## CONTENT

Назначает для поля значение из конфликтной строки вставки для другого поля

Параметры:
* stappler::StringView - поле в существующей строке для обновления
* stappler::StringView - поле в строке вставки, которое необходимо использовать

Возвращает:
* stappler::sql::Query::InsertUpdateValues&

# ::stappler::sql::Query<typename,typename>::InsertUpdateValues::where<typename>(Args &&...)

## BRIEF

Добавляет условие для обновления полей при конфликте

## CONTENT

Добавляет условие для обновления полей при конфликте. Параметры передаются в WhereClause, игнорируя условный оператор в начале.

Параметры шаблона:
* typename Args

Параметры:
* Args &&...

Возвращает:
* stappler::sql::Query::InsertWhereValues - манипулятор для записи условия

# ::stappler::sql::Query<typename,typename>::InsertUpdateValues::where()

## BRIEF

Добавляет условие для обновления полей при конфликте

## CONTENT

Добавляет условие для обновления полей при конфликте

Возвращает:
* stappler::sql::Query::InsertWhereValues - манипулятор для записи условия

# ::stappler::sql::Query<typename,typename>::InsertUpdateValues::returning()

## BRIEF

Переходит к записи блока RETURNING или аналогичных

## CONTENT

Переходит к записи блока RETURNING или аналогичных

Возвращает:
* stappler::sql::Query::Returning

# ::stappler::sql::Query<typename,typename>::InsertWhereValues

## BRIEF

Струкутра для записи условий при обновлении полей на основании конфликта

## CONTENT

Доступ: public

Струкутра для записи условий при обновлении полей на основании конфликта. Основано на функциях WhereClause

Базовые классы:
* WhereClause<InsertWhereValues>


# ::stappler::sql::Query<typename,typename>::InsertWhereValues::returning()

## BRIEF

Переходит к записи блока RETURNING или аналогичных

## CONTENT

Переходит к записи блока RETURNING или аналогичных

Возвращает:
* stappler::sql::Query::Returning

# ::stappler::sql::Query<typename,typename>::InsertPostConflict

## BRIEF

Манипулятор для отражения состояния после записи всех блоков для запроса INSERT INTO

## CONTENT

Доступ: public

Манипулятор для отражения состояния после записи всех блоков для запроса INSERT INTO

Базовые классы:
* QueryHandle


# ::stappler::sql::Query<typename,typename>::InsertPostConflict::returning()

## BRIEF

Переходит к записи блока RETURNING или аналогичных

## CONTENT

Переходит к записи блока RETURNING или аналогичных

Возвращает:
* stappler::sql::Query::Returning

# ::stappler::sql::Query<typename,typename>::Update

## BRIEF

Струкутра для записи запроса UPDATE

## CONTENT

Доступ: public

Струкутра для записи запроса UPDATE. Инициализируется сразу с указанной таблицей для обновления. Для добавления данных использует интерфейс SetClause.

Базовые классы:
* SetClause<Update>


# ::stappler::sql::Query<typename,typename>::Update::where<typename>(Args &&...)

## BRIEF

Добавляет условие для обновления полей

## CONTENT

Добавляет условие для обновления полей. Аргументы передаются в WhereClause, исключая первый аргумент: логический оператор.

Параметры шаблона:
* typename Args

Параметры:
* Args &&...

Возвращает:
* stappler::sql::Query::UpdateWhere

# ::stappler::sql::Query<typename,typename>::Update::where()

## BRIEF

Добавляет условие для обновления полей

## CONTENT

Добавляет условие для обновления полей

Возвращает:
* stappler::sql::Query::UpdateWhere

# ::stappler::sql::Query<typename,typename>::Update::returning()

## BRIEF

Переходит к записи блока RETURNING или аналогичных

## CONTENT

Переходит к записи блока RETURNING или аналогичных

Возвращает:
* stappler::sql::Query::Returning

# ::stappler::sql::Query<typename,typename>::UpdateWhere

## BRIEF

Структура для записи условия для обновления полей

## CONTENT

Доступ: public

Структура для записи условия для обновления полей. Использует функции WhereClause для записи условий.

Базовые классы:
* WhereClause<UpdateWhere>


# ::stappler::sql::Query<typename,typename>::UpdateWhere::returning()

## BRIEF

Переходит к записи блока RETURNING или аналогичных

## CONTENT

Переходит к записи блока RETURNING или аналогичных

Возвращает:
* stappler::sql::Query::Returning

# ::stappler::sql::Query<typename,typename>::Delete

## BRIEF

Структура для записи запроса DELETE

## CONTENT

Доступ: public

Структура для записи запроса DELETE. Создаётся сразу с указанием таблицы для удаления.

Базовые классы:
* QueryHandle


# ::stappler::sql::Query<typename,typename>::Delete::where<typename>(Args &&...)

## BRIEF

Записывает услвоие для удаления

## CONTENT

Записывает услвоие для удаления. Аргументы передаются в WhereClause, исключая первый аргумент: логический оператор.

Параметры шаблона:
* typename Args

Параметры:
* Args &&...

Возвращает:
* stappler::sql::Query::DeleteWhere

# ::stappler::sql::Query<typename,typename>::Delete::where()

## BRIEF

Записывает услвоие для удаления

## CONTENT

Записывает услвоие для удаления

Возвращает:
* stappler::sql::Query::DeleteWhere

# ::stappler::sql::Query<typename,typename>::Delete::returning()

## BRIEF

Переходит к записи блока RETURNING или аналогичных

## CONTENT

Переходит к записи блока RETURNING или аналогичных

Возвращает:
* stappler::sql::Query::Returning

# ::stappler::sql::Query<typename,typename>::DeleteWhere

## BRIEF

Структура для записи блока условий для запроса DELETE

## CONTENT

Доступ: public

Структура для записи блока условий для запроса DELETE. Основана на WhereClause.

Базовые классы:
* WhereClause<DeleteWhere>


# ::stappler::sql::Query<typename,typename>::DeleteWhere::returning()

## BRIEF

Переходит к записи блока RETURNING или аналогичных

## CONTENT

Переходит к записи блока RETURNING или аналогичных

Возвращает:
* stappler::sql::Query::Returning

# ::stappler::sql::Query<typename,typename>::Returning

## BRIEF

Структура для записи блока RETURNING и подобных

## CONTENT

Доступ: public

Структура для записи блока RETURNING и подобных. Для записи полей возврата использует функции FieldsClause.

Базовые классы:
* FieldsClause<Returning>


# ::stappler::sql::Query<typename,typename>::Returning::all()

## BRIEF

Помечает все поля для возврата

## CONTENT

Помечает все поля для возврата (`RETURNING *`)

Возвращает:
* stappler::sql::Query::Returning&

# ::stappler::sql::Query<typename,typename>::Returning::count()

## BRIEF

Возвращает число изменённых строк

## CONTENT

Возвращает число изменённых строк

Возвращает:
* stappler::sql::Query::Returning&

# ::stappler::sql::Query<typename,typename>::Returning::count(stappler::StringView const&)

## BRIEF

Возвращает число изменённых строк по полю

## CONTENT

Возвращает число изменённых строк по полю

Параметры:
* stappler::StringView const& - имя поля

Возвращает:
* stappler::sql::Query::Returning&

# ::stappler::sql::Query<typename,typename>::Query()

## BRIEF

Инициализирует новый запрос

## CONTENT

Доступ: public

Инициализирует новый запрос


# ::stappler::sql::Query<typename,typename>::setProfile(stappler::sql::Profile)

## BRIEF

Устанавливает профиль языка SQL

## CONTENT

Доступ: public

Устанавливает профиль языка SQL

Параметры:
* stappler::sql::Profile


# ::stappler::sql::Query<typename,typename>::with<typename>(stappler::StringView const&,Callback const&)

## BRIEF

Добавляет подзапрос CTE (WITH)

## CONTENT

Доступ: public

Добавляет подзапрос CTE (WITH)

Параметры шаблона:
* typename Callback

Параметры:
* stappler::StringView const& - имя подзапроса
* Callback const& - функция обратного вызова, вызывается с GenericQuery для записи подзапроса

Возвращает:
* stappler::sql::Query::GenericQuery

# ::stappler::sql::Query<typename,typename>::select(stappler::sql::Query::Distinct)

## BRIEF

Начинает запись запроса SELECT

## CONTENT

Доступ: public

Начинает запись запроса SELECT

Параметры:
* stappler::sql::Query::Distinct

Возвращает:
* stappler::sql::Query::Select

# ::stappler::sql::Query<typename,typename>::select<typename>(stappler::sql::Query::Field const&,Args &&...)

## BRIEF

Начинает запись запроса SELECT

## CONTENT

Доступ: public

Начинает запись запроса SELECT со списокм полей для возврата

Параметры шаблона:
* typename Args

Параметры:
* stappler::sql::Query::Field const&
* Args &&...

Возвращает:
* stappler::sql::Query::Select

# ::stappler::sql::Query<typename,typename>::select<typename>(stappler::sql::Query::Distinct,stappler::sql::Query::Field const&,Args &&...)

## BRIEF

Начинает запись запроса SELECT

## CONTENT

Доступ: public

Начинает запись запроса SELECT со списокм полей для возврата

Параметры шаблона:
* typename Args

Параметры:
* stappler::sql::Query::Distinct
* stappler::sql::Query::Field const&
* Args &&...

Возвращает:
* stappler::sql::Query::Select

# ::stappler::sql::Query<typename,typename>::insert(stappler::StringView const&)

## BRIEF

Начинает запись запроса INSERT INTO

## CONTENT

Доступ: public

Начинает запись запроса INSERT INTO для таблицы

Параметры:
* stappler::StringView const& - имя таблицы

Возвращает:
* stappler::sql::Query::Insert

# ::stappler::sql::Query<typename,typename>::insert(stappler::StringView const&,stappler::StringView const&)

## BRIEF

Начинает запись запроса INSERT INTO

## CONTENT

Доступ: public

Начинает запись запроса INSERT INTO для таблицы

Параметры:
* stappler::StringView const& - имя таблицы
* stappler::StringView const& - внутренний псевдоним для таблицы

Возвращает:
* stappler::sql::Query::Insert

# ::stappler::sql::Query<typename,typename>::update(stappler::StringView const&)

## BRIEF

Начинает запись запроса UPDATE

## CONTENT

Доступ: public

Начинает запись запроса UPDATE для таблицы

Параметры:
* stappler::StringView const& - имя таблицы

Возвращает:
* stappler::sql::Query::Update

# ::stappler::sql::Query<typename,typename>::update(stappler::StringView const&,stappler::StringView const&)

## BRIEF

Начинает запись запроса UPDATE

## CONTENT

Доступ: public

Начинает запись запроса UPDATE для таблицы

Параметры:
* stappler::StringView const& - имя таблицы
* stappler::StringView const& - внутренний псевдоним для таблицы

Возвращает:
* stappler::sql::Query::Update

# ::stappler::sql::Query<typename,typename>::remove(stappler::StringView const&)

## BRIEF

Начинает запись запроса DELETE

## CONTENT

Доступ: public

Начинает запись запроса DELETE для таблицы

Параметры:
* stappler::StringView const& - имя таблицы

Возвращает:
* stappler::sql::Query::Delete

# ::stappler::sql::Query<typename,typename>::remove(stappler::StringView const&,stappler::StringView const&)

## BRIEF

Начинает запись запроса DELETE

## CONTENT

Доступ: public

Начинает запись запроса DELETE для таблицы

Параметры:
* stappler::StringView const& - имя таблицы
* stappler::StringView const& - внутренний псевдоним для таблицы

Возвращает:
* stappler::sql::Query::Delete

# ::stappler::sql::Query<typename,typename>::finalize()

## BRIEF

Завершает запись запроса

## CONTENT

Доступ: public

Завершает запись запроса


# ::stappler::sql::Query<typename,typename>::writeBind<typename>(Value&&)

## BRIEF

Связывает значение с запросом

## CONTENT

Доступ: public

Связывает значение с запросом, записывая его в запрос с помощью библиотеки БД. Если значение записывается через параметр, подставляет в запрос идентификатор этого параметра.

Параметры шаблона:
* typename Value

Параметры:
* Value&&


# ::stappler::sql::Query<typename,typename>::writeBind(stappler::sql::Query::RawString const&)

## BRIEF

Связывает значение с запросом

## CONTENT

Доступ: public

Связывает значение необработанной строки с запросом. Записывает эту строку в запрос. Будьте осторожны, это может позволять SQL-инъекции.

Параметры:
* stappler::sql::Query::RawString const&


# ::stappler::sql::Query<typename,typename>::writeBind(stappler::sql::Query::RawStringView const&)

## BRIEF

Связывает значение с запросом

## CONTENT

Доступ: public

Связывает значение необработанной строки с запросом. Записывает эту строку в запрос. Будьте осторожны, это может позволять SQL-инъекции.

Параметры:
* stappler::sql::Query::RawStringView const&


# ::stappler::sql::Query<typename,typename>::writeBind(Callback<void (stappler::sql::Query::Select &)> const&)

## BRIEF

Связывает подзапрос с текущим запросом

## CONTENT

Доступ: public

Связывает подзапрос с текущим запросом

Параметры:
* Callback<void (stappler::sql::Query::Select &)> const& - функция обратного вызова для записи подзапроса


# ::stappler::sql::Query<typename,typename>::writeBind(stappler::sql::Query::Field const&)

## BRIEF

Связывает поле с запросом

## CONTENT

Доступ: public

Связывает поле с запросом. Записывает значение поля в запрос.

Параметры:
* stappler::sql::Query::Field const&


# ::stappler::sql::Query<typename,typename>::writeBind(stappler::sql::Query::Field const&,bool)

## BRIEF

Связывает поле с запросом

## CONTENT

Доступ: public

Связывает поле с запросом. Записывает значение поля в запрос.

Параметры:
* stappler::sql::Query::Field const&
* bool - false - игнорировать псевдоним поля, даже если он установлен


# ::stappler::sql::Query<typename,typename>::writeBind(stappler::StringView const&,stappler::sql::Query::Field const&)

## BRIEF

Записывает в запрос вызов функции-агрегата для поля

## CONTENT

Доступ: public

Записывает в запрос вызов функции-агрегата для поля. В случае такой записи, псевдоним поля считается псевдонимом результата функции-агрегата

Параметры:
* stappler::StringView const&
* stappler::sql::Query::Field const&


# ::stappler::sql::Query<typename,typename>::getStream()

## BRIEF

Возвращает поток для записи запроса

## CONTENT

Доступ: public

Возвращает поток для записи запроса

Возвращает:
* Stream&

# ::stappler::sql::Query<typename,typename>::getBinder()

## BRIEF

Возвращает объект, связывающий аргументы с запросом

## CONTENT

Доступ: public

Возвращает объект, связывающий аргументы с запросом

Возвращает:
* Binder&

# ::stappler::sql::Query<typename,typename>::getTarget() const

## BRIEF

Возвращает имя целевой таблицы основного запроса, если есть

## CONTENT

Доступ: public

Возвращает имя целевой таблицы основного запроса, если есть

Возвращает:
* stappler::StringView

# ::stappler::sql::Query<typename,typename>::finalization

## BRIEF

Статус финализации всего запроса

## CONTENT

Доступ: protected

Статус финализации всего запроса

Тип: stappler::sql::Query::FinalizationState


# ::stappler::sql::Query<typename,typename>::binder

## BRIEF

Объект для связи аргументов с запросом

## CONTENT

Доступ: protected

Объект для связи аргументов с запросом

Тип: Binder


# ::stappler::sql::Query<typename,typename>::stream

## BRIEF

Текстовый поток для записи запроса

## CONTENT

Доступ: protected

Текстовый поток для записи запроса

Тип: Stream


# ::stappler::sql::Query<typename,typename>::target

## BRIEF

Целевая таблица основного запроса

## CONTENT

Доступ: protected

Целевая таблица основного запроса

Тип: stappler::StringView


# ::stappler::sql::Query<typename,typename>::subquery

## BRIEF

Флаг, что в текущий момент записывается подзапрос

## CONTENT

Доступ: protected

Флаг, что в текущий момент записывается подзапрос

Тип: bool


# ::stappler::sql::Query<typename,typename>::profile

## BRIEF

Профиль языка SQL

## CONTENT

Доступ: protected

Профиль языка SQL

Тип: stappler::sql::Profile


# ::stappler::sql::BinderTraits<typename,typename,typename>

## BRIEF

Специализация функции связывания аргументов для произвольного типа

## CONTENT

Специализация функции связывания аргументов для произвольного типа

Параметры шаблона:
* typename Binder - объект, связывающий аргументы с запросом
* typename Interface - испольузенмый интерфейс памяти
* typename Value - тип значения для связи


# ::stappler::sql::BinderTraits<typename,typename,typename>::writeBind<typename>(Query<Binder, Interface>&,Binder&,V&&)

## BRIEF

Вызывает функцию связи для произвольного объекта

## CONTENT

Вызывает функцию связи для произвольного объекта

Параметры шаблона:
* typename V

Параметры:
* Query<Binder, Interface>&
* Binder&
* V&&


# ::stappler::sql::BinderTraits<Binder,Interface,typename Query<Binder,Interface>::Field>::BinderTraits<Binder,Interface,typename Query<Binder,Interface>::Field>

## BRIEF

Специализация функции связывания аргументов для идентификатора поля

## CONTENT

Специализация функции связывания аргументов для идентификатора поля

Параметры шаблона:
* typename Binder
* typename Interface


# ::stappler::sql::BinderTraits<Binder,Interface,typename Query<Binder,Interface>::Field>::writeBind(Query<Binder, Interface>&,Binder&,const typename Query<Binder, Interface>::Field&)

## BRIEF

Вызывает функцию связи для идентификатора поля

## CONTENT

Вызывает функцию связи для идентификатора поля

Параметры:
* Query<Binder, Interface>&
* Binder&
* const typename Query<Binder, Interface>::Field&


# ::stappler::sql::BinderTraits<Binder,Interface,typename Query<Binder,Interface>::RawString>::BinderTraits<Binder,Interface,typename Query<Binder,Interface>::RawString>

## BRIEF

Специализация функции связывания аргументов для необрабатываемой строки

## CONTENT

Специализация функции связывания аргументов для необрабатываемой строки

Параметры шаблона:
* typename Binder
* typename Interface


# ::stappler::sql::BinderTraits<Binder,Interface,typename Query<Binder,Interface>::RawString>::writeBind(Query<Binder, Interface>&,Binder&,const typename Query<Binder, Interface>::RawString&)

## BRIEF

Вызывает функцию связи для необрабатываемой строки

## CONTENT

Вызывает функцию связи для необрабатываемой строки

Параметры:
* Query<Binder, Interface>&
* Binder&
* const typename Query<Binder, Interface>::RawString&


# ::stappler::sql::BinderTraits<Binder,Interface,typename Query<Binder,Interface>::RawStringView>::BinderTraits<Binder,Interface,typename Query<Binder,Interface>::RawStringView>

## BRIEF

Специализация функции связывания аргументов для необрабатываемой строки

## CONTENT

Специализация функции связывания аргументов для необрабатываемой строки

Параметры шаблона:
* typename Binder
* typename Interface


# ::stappler::sql::BinderTraits<Binder,Interface,typename Query<Binder,Interface>::RawStringView>::writeBind(Query<Binder, Interface>&,Binder&,const typename Query<Binder, Interface>::RawStringView&)

## BRIEF

Вызывает функцию связи для необрабатываемой строки

## CONTENT

Вызывает функцию связи для необрабатываемой строки

Параметры:
* Query<Binder, Interface>&
* Binder&
* const typename Query<Binder, Interface>::RawStringView&


# ::stappler::sql::BinderTraits<Binder,Interface,Callback<void(typename Query<Binder,Interface>::Select&)>>::BinderTraits<Binder,Interface,Callback<void(typename Query<Binder,Interface>::Select&)>>

## BRIEF

Специализация функции связывания аргументов для подзапроса

## CONTENT

Специализация функции связывания аргументов для подзапроса

Параметры шаблона:
* typename Binder
* typename Interface


# ::stappler::sql::BinderTraits<Binder,Interface,Callback<void(typename Query<Binder,Interface>::Select&)>>::writeBind(Query<Binder, Interface>&,Binder&,Callback<void (typename Query<Binder, Interface>::Select &)> const&)

## BRIEF

Вызывает функцию связи для подзапроса

## CONTENT

Вызывает функцию связи для подзапроса

Параметры:
* Query<Binder, Interface>&
* Binder&
* Callback<void (typename Query<Binder, Interface>::Select &)> const&
