Title: STFieldPoint.h


# STAPPLER_DB_EXTENSIONS_STFIELDPOINT_H_

## BRIEF

Заголовок расширения основных типов БД, определяет тип точки в пространстве

## CONTENT

Заголовок расширения основных типов БД, определяет тип точки в пространстве


# ::stappler::db::FieldPoint

## BRIEF

Поле типа точки в пространстве

## CONTENT

Поле типа точки в пространстве

Базовые классы:
* db::FieldCustom


# ::stappler::db::FieldPoint::FieldPoint<typename>(stappler::mem_pool::String&&,Args &&...)

## BRIEF

Конструктор поля

## CONTENT

Конструктор поля. Перенаправляет аргументы в стандартный конструктор поля.

Параметры шаблона:
* typename Args

Параметры:
* stappler::mem_pool::String&&
* Args &&...


# ::stappler::db::FieldPoint::transformValue(db::Scheme const&,stappler::mem_pool::Value const&,stappler::mem_pool::Value&,bool) const

## BRIEF

Преобразовывает значение, переданное на запись в БД

## CONTENT

Преобразовывает значение, переданное на запись в БД. Контролирует, что в значении действительно содержится целочисленный массив.

Параметры:
* db::Scheme const& - схема данных для записи
* stappler::mem_pool::Value const& - объект для записи
* stappler::mem_pool::Value& - значение для записи
* bool

Возвращает:
* bool - true если запись допустима

# ::stappler::db::FieldPoint::readFromStorage(db::ResultCursor const&,size_t) const

## BRIEF

Функция для чтения значния из курсора БД

## CONTENT

Функция для чтения значния из курсора БД

Параметры:
* db::ResultCursor const& - курсор для чтения
* size_t - индекс, по которому в результате храниться значение данного типа

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::FieldPoint::writeToStorage(db::QueryInterface&,stappler::mem_pool::StringStream&,stappler::mem_pool::Value const&) const

## BRIEF

Функция для записи значения в БД

## CONTENT

Функция для записи значения в БД. Записывает значение с помощью интерфейса запроса.

Параметры:
* db::QueryInterface& - интерфейс запроса
* stappler::mem_pool::StringStream& - текстовый поток запроса
* stappler::mem_pool::Value const& - значение для записи

Возвращает:
* bool - true при успешной записи

# ::stappler::db::FieldPoint::getTypeName() const

## BRIEF

Возвращает имя типа для БД

## CONTENT

Возвращает имя типа для БД

Возвращает:
* stappler::StringView

# ::stappler::db::FieldPoint::isSimpleLayout() const

## BRIEF

Возвращает флаг простой укладки

## CONTENT

Возвращает флаг простой укладки. Если флаг установлен - для работой с полем не нужны подзапросы

Возвращает:
* bool

# ::stappler::db::FieldPoint::getIndexName() const

## BRIEF

Возвращает стандартное название индекса для поля

## CONTENT

Возвращает стандартное название индекса для поля

Возвращает:
* stappler::mem_pool::String

# ::stappler::db::FieldPoint::getIndexField() const

## BRIEF

Возвращает текст определения индекса для БД

## CONTENT

Возвращает текст определения индекса для БД

Возвращает:
* stappler::mem_pool::String

# ::stappler::db::FieldPoint::isComparationAllowed(stappler::sql::Comparation) const

## BRIEF

Проверяет, доступна ли форма сравнения для поля

## CONTENT

Проверяет, доступна ли форма сравнения для поля

Параметры:
* stappler::sql::Comparation

Возвращает:
* bool

# ::stappler::db::FieldPoint::writeQuery(db::Scheme const&,stappler::sql::Query<db::Binder, Interface>::WhereContinue&,stappler::sql::Operator,stappler::StringView const&,stappler::sql::Comparation,stappler::mem_pool::Value const&,stappler::mem_pool::Value const&) const

## BRIEF

Записывает сравнение поля в запрос

## CONTENT

Записывает сравнение поля в запрос

Параметры:
* db::Scheme const& - рабочая схема данных запроса
* stappler::sql::Query<db::Binder, Interface>::WhereContinue& - манипулятор для записи запроса
* stappler::sql::Operator - требуетмый логический оператор для запроса
* stappler::StringView const& - имя поля для сравнения
* stappler::sql::Comparation - оператор сравнения
* stappler::mem_pool::Value const& - первое значение для сравнения
* stappler::mem_pool::Value const& - второе значение для сравнения
