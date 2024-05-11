Title: SPPugVariable.h


# EXTRA_WEBSERVER_PUG_SPPUGVARIABLE_H_

## BRIEF

Заголовок переменных шаблонов

## CONTENT

Заголовок переменных шаблонов. Переменные используются для видоизменения шаблона. Pug использует переменные в стиле javascript.


# ::stappler::pug::VarClass

## BRIEF

Класс переменной

## CONTENT

Класс переменной. Класс позволяет определить общие доступные методы для подвида переменных.

Базовые классы:
* memory::AllocPool


# ::stappler::pug::VarClass::Callback

## BRIEF

Функция, вызываемая при вызове методов класса

## CONTENT

Функция, вызываемая при вызове методов класса. Для методов объекта первым аргументом будет выступать сам объект.


# ::stappler::pug::VarClass::staticFunctions

## BRIEF

Статические функции класса

## CONTENT

Статические функции класса. Вызываются через имя класса.

Тип: Map<stappler::pug::String, stappler::pug::VarClass::Callback>


# ::stappler::pug::VarClass::functions

## BRIEF

Функции объекта класса

## CONTENT

Функции объекта класса. Вызываются через объект класса

Тип: Map<stappler::pug::String, stappler::pug::VarClass::Callback>


# ::stappler::pug::VarData

## BRIEF

Внутренние данные переменной

## CONTENT

Внутренние данные переменной


# ::stappler::pug::VarData::Type

## BRIEF

Тип переменной

## CONTENT

Тип переменной

Значения:
* Null - не определена
* Inline - хранит значение внутри себя
* Reference - хранит ссылку на значение


# ::stappler::pug::VarData::type

## BRIEF

Тип переменной

## CONTENT

Тип переменной

Тип: stappler::pug::VarData::Type


# ::stappler::pug::VarData::

## BRIEF

Объединение данных переменной

## CONTENT

Объединение данных переменной


# ::stappler::pug::VarData::value

## BRIEF

Хранимое внутри перемменной значение

## CONTENT

Хранимое внутри перемменной значение

Тип: stappler::pug::Value


# ::stappler::pug::VarData::isConstant

## BRIEF

Флаг константы

## CONTENT

Флаг константы

Тип: bool


# ::stappler::pug::VarData::value

## BRIEF

Указатель на внешнее значение

## CONTENT

Указатель на внешнее значение

Тип: stappler::pug::Value const*


# ::stappler::pug::VarData::pointer

## BRIEF

Структура указателя на внешние данные

## CONTENT

Структура указателя на внешние данные

Тип: 


# ::stappler::pug::VarData::~VarData()

## BRIEF

Деструктор

## CONTENT

Деструктор


# ::stappler::pug::VarData::VarData()

## BRIEF

Конструктор

## CONTENT

Конструктор


# ::stappler::pug::VarData::VarData(bool,stappler::pug::Value const*)

## BRIEF

Создаёт данные внешней ссылки

## CONTENT

Создаёт данные внешней ссылки

Параметры:
* bool
* stappler::pug::Value const*


# ::stappler::pug::VarData::VarData(stappler::pug::Value const&)

## BRIEF

Создаёт данные хранимой переменной

## CONTENT

Создаёт данные хранимой переменной

Параметры:
* stappler::pug::Value const&


# ::stappler::pug::VarData::VarData(stappler::pug::Value&&)

## BRIEF

Создаёт данные хранимой переменной

## CONTENT

Создаёт данные хранимой переменной

Параметры:
* stappler::pug::Value&&


# ::stappler::pug::VarData::VarData(stappler::pug::VarData const&)

## BRIEF

Конструктор копирования

## CONTENT

Конструктор копирования

Параметры:
* stappler::pug::VarData const&


# ::stappler::pug::VarData::VarData(stappler::pug::VarData&&)

## BRIEF

Конструктор перемещения

## CONTENT

Конструктор перемещения

Параметры:
* stappler::pug::VarData&&


# ::stappler::pug::VarData::operator=(stappler::pug::VarData const&)

## BRIEF

Оператор копирования

## CONTENT

Оператор копирования

Параметры:
* stappler::pug::VarData const&

Возвращает:
* stappler::pug::VarData&

# ::stappler::pug::VarData::operator=(stappler::pug::VarData&&)

## BRIEF

Оператор перемещения

## CONTENT

Оператор перемещения

Параметры:
* stappler::pug::VarData&&

Возвращает:
* stappler::pug::VarData&

# ::stappler::pug::VarData::clear()

## BRIEF

Очищает переменную

## CONTENT

Очищает переменную


# ::stappler::pug::VarData::readValue() const

## BRIEF

Получает значение переменной

## CONTENT

Получает значение переменной

Возвращает:
* stappler::pug::Value const&

# ::stappler::pug::VarData::getMutable() const

## BRIEF

Получает изменяемое значение переменной

## CONTENT

Получает изменяемое значение переменной

Возвращает:
* stappler::pug::Value* - значение или nullptr

# ::stappler::pug::VarData::assign(stappler::pug::VarData const&)

## BRIEF

Назначает новое значение, копируя его

## CONTENT

Назначает новое значение, копируя его

Параметры:
* stappler::pug::VarData const&


# ::stappler::pug::VarStorage

## BRIEF

Хранилище переменной

## CONTENT

Хранилище переменной


# ::stappler::pug::VarStorage::Callback

## BRIEF

Функция для вызова функций

## CONTENT

Функция для вызова функций


# ::stappler::pug::VarStorage::Type

## BRIEF

Тип хранилища

## CONTENT

Тип хранилища

Значения:
* Undefined
* ValueReference
* ObjectReference
* ClassPointer
* StandaloneFunction
* ClassFunction
* ValueFunction
* MemberFunction


# ::stappler::pug::VarStorage::value

## BRIEF

Значение переменной

## CONTENT

Значение переменной

Тип: stappler::pug::VarData


# ::stappler::pug::VarStorage::classPointer

## BRIEF

Указатель на класс

## CONTENT

Указатель на класс

Тип: stappler::pug::VarClass*


# ::stappler::pug::VarStorage::functionPointer

## BRIEF

Указатель на функцию

## CONTENT

Указатель на функцию

Тип: Callback*


# ::stappler::pug::VarStorage::type

## BRIEF

Тип хранилища

## CONTENT

Тип хранилища

Тип: stappler::pug::VarStorage::Type


# ::stappler::pug::VarStorage::set(stappler::pug::Value const&,stappler::pug::VarClass*)

## BRIEF

Записывает в хранилище значение переменной

## CONTENT

Записывает в хранилище значение переменной

Параметры:
* stappler::pug::Value const& - значение
* stappler::pug::VarClass* - класс переменной


# ::stappler::pug::VarStorage::set(stappler::pug::Value&&,stappler::pug::VarClass*)

## BRIEF

Записывает в хранилище значение переменной

## CONTENT

Записывает в хранилище значение переменной

Параметры:
* stappler::pug::Value&& - значение
* stappler::pug::VarClass* - класс переменной


# ::stappler::pug::VarStorage::set(bool,stappler::pug::Value const*,stappler::pug::VarClass*)

## BRIEF

Записывает в хранилище ссылку на переменную

## CONTENT

Записывает в хранилище ссылку на переменную

Параметры:
* bool - true если константа
* stappler::pug::Value const* - указатель на значение
* stappler::pug::VarClass* - класс переменной


# ::stappler::pug::VarStorage::set(stappler::pug::VarStorage::Callback*)

## BRIEF

Записывает указатель на функцию

## CONTENT

Записывает указатель на функцию

Параметры:
* stappler::pug::VarStorage::Callback*


# ::stappler::pug::VarStorage::set(stappler::pug::VarClass*)

## BRIEF

Записывает класс как переменную

## CONTENT

Записывает класс как переменную

Параметры:
* stappler::pug::VarClass*


# ::stappler::pug::VarStorage::assign(stappler::pug::Var const&)

## BRIEF

Записывает данные другой переменной

## CONTENT

Записывает данные другой переменной

Параметры:
* stappler::pug::Var const&

Возвращает:
* bool

# ::stappler::pug::VarStorage::clear()

## BRIEF

Очищает хранилище переменной

## CONTENT

Очищает хранилище переменной

# ::stappler::pug::VarStorage::readValue() const

## BRIEF

Читает текущее значение переменной

## CONTENT

Читает текущее значение переменной

Возвращает:
* stappler::pug::Value const&

# ::stappler::pug::VarStorage::getMutable() const

## BRIEF

Читает изменяемое значение переменной

## CONTENT

Читает изменяемое значение переменной

Возвращает:
* stappler::pug::Value* - указатель на изменяемое значение или nullptr

# ::stappler::pug::VarStorage::getCallable() const

## BRIEF

Возвращает вызываемую функцию

## CONTENT

Возвращает вызываемую функцию

Возвращает:
* Callback*

# ::stappler::pug::VarWritable

## BRIEF

Структура временного именованного хранилища

## CONTENT

Структура временного именованного хранилища для изменяемой переменной


# ::stappler::pug::VarWritable::value

## BRIEF

Указатель на значение

## CONTENT

Указатель на значение

Тип: stappler::pug::Value*


# ::stappler::pug::VarWritable::key

## BRIEF

Имя переменной

## CONTENT

Имя переменной

Тип: stappler::StringView


# ::stappler::pug::Var

## BRIEF

Общий тип переменной

## CONTENT

Общий тип переменной


# ::stappler::pug::Var::Callback

## BRIEF

Функция для вызова функций

## CONTENT

Функция для вызова функций

# ::stappler::pug::Var::Type

## BRIEF

Тип переенной

## CONTENT

Тип переенной

Значения:
* Undefined
* Static
* Temporary
* Variable
* Writable
* SoftUndefined


# ::stappler::pug::Var::StoragePointer

## BRIEF

Тип указателя на хранилище переменной

## CONTENT

Тип указателя на хранилище переменной

# ::stappler::pug::Var::StoragePointer::storage

## BRIEF

Указатель на хранилище переменной

## CONTENT

Указатель на хранилище переменной

Тип: stappler::pug::VarStorage*


# ::stappler::pug::Var::type

## BRIEF

Тип переменной

## CONTENT

Тип переменной

Тип: stappler::pug::Var::Type


# ::stappler::pug::Var::

## BRIEF

Объединение хранилища переменной

## CONTENT

Объединение хранилища переменной


# ::stappler::pug::Var::staticStorage

## BRIEF

Статическое хранилище

## CONTENT

Статическое хранилище

Тип: stappler::pug::VarData


# ::stappler::pug::Var::variableStorage

## BRIEF

Динамическое хранилище в виде указателя

## CONTENT

Динамическое хранилище в виде указателя

Тип: stappler::pug::VarStorage*


# ::stappler::pug::Var::temporaryStorage

## BRIEF

Временное хранилище

## CONTENT

Временное хранилище

Тип: stappler::pug::VarStorage


# ::stappler::pug::Var::writableStorage

## BRIEF

Временное записываемое хранилище

## CONTENT

Временное записываемое хранилище

Тип: stappler::pug::VarWritable


# ::stappler::pug::Var::~Var()

## BRIEF

Деструктор

## CONTENT

Деструктор

# ::stappler::pug::Var::Var()

## BRIEF

Конструктор

## CONTENT

Конструктор

# ::stappler::pug::Var::Var(stappler::nullptr_t)

## BRIEF

Конструктор переменной null

## CONTENT

Конструктор переменной null

Параметры:
* stappler::nullptr_t


# ::stappler::pug::Var::Var(stappler::pug::Var const&)

## BRIEF

Конструктор копирования

## CONTENT

Конструктор копирования

Параметры:
* stappler::pug::Var const&


# ::stappler::pug::Var::Var(stappler::pug::Var&&)

## BRIEF

Конструктор перемещения

## CONTENT

Конструктор перемещения

Параметры:
* stappler::pug::Var&&


# ::stappler::pug::Var::Var(stappler::pug::Value&&)

## BRIEF

Конструктор временной переменной со значением

## CONTENT

Конструктор временной переменной со значением

Параметры:
* stappler::pug::Value&&


# ::stappler::pug::Var::Var(stappler::pug::Value const&)

## BRIEF

Конструктор временной переменной со значением

## CONTENT

Конструктор временной переменной со значением

Параметры:
* stappler::pug::Value const&


# ::stappler::pug::Var::Var(bool,stappler::pug::Value const*)

## BRIEF

Конструктор ссылки

## CONTENT

Конструктор ссылки

Параметры:
* bool - true если константа
* stappler::pug::Value const*


# ::stappler::pug::Var::Var(stappler::pug::Value*)

## BRIEF

Конструктор ссылки

## CONTENT

Конструктор ссылки

Параметры:
* stappler::pug::Value*


# ::stappler::pug::Var::Var(stappler::pug::Value*,stappler::StringView const&)

## BRIEF

Конструктор именованной переменной

## CONTENT

Конструктор именованной переменной

Параметры:
* stappler::pug::Value*
* stappler::StringView const&


# ::stappler::pug::Var::Var(stappler::pug::VarStorage*)

## BRIEF

Конструктор динамической внутренней переменной

## CONTENT

Конструктор динамической внутренней переменной

Параметры:
* stappler::pug::VarStorage*


# ::stappler::pug::Var::Var(stappler::pug::VarClass*)

## BRIEF

Конструктор класса как переменной

## CONTENT

Конструктор класса как переменной

Параметры:
* stappler::pug::VarClass*


# ::stappler::pug::Var::Var(stappler::pug::Var const&,stappler::pug::Var::Callback&,VarStorage::Type)

## BRIEF

Конструктор указателя на метод класса

## CONTENT

Конструктор указателя на метод класса

Параметры:
* stappler::pug::Var const&
* stappler::pug::Var::Callback&
* VarStorage::Type


# ::stappler::pug::Var::operator=(stappler::pug::Var const&)

## BRIEF

Оператор копирования

## CONTENT

Оператор копирования

Параметры:
* stappler::pug::Var const&

Возвращает:
* stappler::pug::Var&

# ::stappler::pug::Var::operator=(stappler::pug::Var&&)

## BRIEF

Оператор переммещения

## CONTENT

Оператор переммещения

Параметры:
* stappler::pug::Var&&

Возвращает:
* stappler::pug::Var&

# ::stappler::pug::Var::operator bool() const

## BRIEF

Проверяет переменную на пустоту

## CONTENT

Проверяет переменную на пустоту

Возвращает:
* bool

# ::stappler::pug::Var::readValue() const

## BRIEF

Читает значение переменной

## CONTENT

Читает значение переменной

Возвращает:
* stappler::pug::Value const&

# ::stappler::pug::Var::getMutable() const

## BRIEF

Читает изменяемое значение переменной

## CONTENT

Читает изменяемое значение переменной

Возвращает:
* stappler::pug::Value* - изменяемое значение или nullptr

# ::stappler::pug::Var::clear()

## BRIEF

Очищает переменную

## CONTENT

Очищает переменную

# ::stappler::pug::Var::assign(stappler::pug::Var const&)

## BRIEF

Копирует переменную

## CONTENT

Копирует переменную

Параметры:
* stappler::pug::Var const&

Возвращает:
* bool

# ::stappler::pug::Var::subscript(stappler::StringView const&,bool)

## BRIEF

Получает вложенную переменную по строковому ключу

## CONTENT

Получает вложенную переменную по строковому ключу

Параметры:
* stappler::StringView const&
* bool - true если требуется изменяемая версия

Возвращает:
* stappler::pug::Var

# ::stappler::pug::Var::subscript(int64_t,bool)

## BRIEF

Получает вложенную переменную по целочисленному ключу

## CONTENT

Получает вложенную переменную по целочисленному ключу

Параметры:
* int64_t
* bool - true если требуется изменяемая версия

Возвращает:
* stappler::pug::Var

# ::stappler::pug::Var::getCallable() const

## BRIEF

Возвращает вызываемую функцию

## CONTENT

Возвращает вызываемую функцию

Возвращает:
* Callback* - функция или nullptr

# ::stappler::pug::Var::getStorage() const

## BRIEF

Возвращает указатель на хранилище переменной

## CONTENT

Возвращает указатель на хранилище переменной

Возвращает:
* stappler::pug::VarStorage* - хранилище или nullptr

# ::stappler::pug::Var::getType() const

## BRIEF

Возвращает тип переменной

## CONTENT

Возвращает тип переменной

Возвращает:
* stappler::pug::Var::Type