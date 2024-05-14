Title: XLEvent.h


# XENOLITH_APPLICATION_XLEVENT_H_

## BRIEF

Заголовок типа события

## CONTENT

Заголовок типа события


# ::stappler::xenolith::Event

## BRIEF

Тип события

## CONTENT

Тип события. Событие служит для передачи глобального сообщения внутри приложения. Слушатели должны подписываться на событие по заголовку, отправители используют заголовок для отправки.


# ::stappler::xenolith::Event::Type

## BRIEF

Тип значения события

## CONTENT

Доступ: protected

Тип значения события

Значения:
* Int
* Float
* Bool
* Object
* String
* Data
* None


# ::stappler::xenolith::Event::getObject() const

## BRIEF

Получает объект-источник события

## CONTENT

Доступ: public

Получает объект-источник события

Возвращает:
* stappler::mem_std::Ref*

# ::stappler::xenolith::Event::getHeader() const

## BRIEF

Получает заголовок события

## CONTENT

Доступ: public

Получает заголовок события

Возвращает:
* stappler::xenolith::EventHeader const&

# ::stappler::xenolith::Event::getCategory() const

## BRIEF

Получает категорию события

## CONTENT

Доступ: public

Получает категорию события

Возвращает:
* EventHeader::Category

# ::stappler::xenolith::Event::getEventID() const

## BRIEF

Получает идентификатор события

## CONTENT

Доступ: public

Получает идентификатор события

Возвращает:
* EventHeader::EventID

# ::stappler::xenolith::Event::is(stappler::xenolith::EventHeader const&) const

## BRIEF

Проверяет событие на соотвествие заголовку

## CONTENT

Доступ: public

Проверяет событие на соотвествие заголовку

Параметры:
* stappler::xenolith::EventHeader const&

Возвращает:
* bool

# ::stappler::xenolith::Event::operator==(stappler::xenolith::EventHeader const&) const

## BRIEF

Проверяет событие на соотвествие заголовку

## CONTENT

Доступ: public

Проверяет событие на соотвествие заголовку

Параметры:
* stappler::xenolith::EventHeader const&

Возвращает:
* bool

# ::stappler::xenolith::Event::getTarget<class>() const

## BRIEF

Возвращает целевой объект события

## CONTENT

Доступ: public

Возвращает целевой объект события

Параметры шаблона:
* class T

Возвращает:
* T*

# ::stappler::xenolith::Event::valueIsVoid() const

## BRIEF

Проверяет, есть ли значение в событии

## CONTENT

Доступ: public

Проверяет, есть ли значение в событии

Возвращает:
* bool

# ::stappler::xenolith::Event::valueIsBool() const

## BRIEF

Проверяет тип значения

## CONTENT

Доступ: public

Проверяет тип значения

Возвращает:
* bool

# ::stappler::xenolith::Event::valueIsInt() const

## BRIEF

Проверяет тип значения

## CONTENT

Доступ: public

Проверяет тип значения

Возвращает:
* bool

# ::stappler::xenolith::Event::valueIsFloat() const

## BRIEF

Проверяет тип значения

## CONTENT

Доступ: public

Проверяет тип значения

Возвращает:
* bool

# ::stappler::xenolith::Event::valueIsObject() const

## BRIEF

Проверяет тип значения

## CONTENT

Доступ: public

Проверяет тип значения

Возвращает:
* bool

# ::stappler::xenolith::Event::valueIsString() const

## BRIEF

Проверяет тип значения

## CONTENT

Доступ: public

Проверяет тип значения

Возвращает:
* bool

# ::stappler::xenolith::Event::valueIsData() const

## BRIEF

Проверяет тип значения

## CONTENT

Доступ: public

Проверяет тип значения

Возвращает:
* bool

# ::stappler::xenolith::Event::getIntValue() const

## BRIEF

Получает значение события

## CONTENT

Доступ: public

Получает значение события

Возвращает:
* int64_t

# ::stappler::xenolith::Event::getFloatValue() const

## BRIEF

Получает значение события

## CONTENT

Доступ: public

Получает значение события

Возвращает:
* double

# ::stappler::xenolith::Event::getBoolValue() const

## BRIEF

Получает значение события

## CONTENT

Доступ: public

Получает значение события

Возвращает:
* bool

# ::stappler::xenolith::Event::getObjValueImpl<class>(std::true_type const&) const

## BRIEF

Получает значение события

## CONTENT

Доступ: public

Получает значение события

Параметры шаблона:
* class T

Параметры:
* std::true_type const&

Возвращает:
* T

# ::stappler::xenolith::Event::getObjValueImpl<class>(std::false_type const&) const

## BRIEF

Получает значение события

## CONTENT

Доступ: public

Получает значение события

Параметры шаблона:
* class T

Параметры:
* std::false_type const&

Возвращает:
* T

# ::stappler::xenolith::Event::getObjectValue<class>() const

## BRIEF

Получает значение события

## CONTENT

Доступ: public

Получает значение события

Параметры шаблона:
* class T

Возвращает:
* T

# ::stappler::xenolith::Event::getStringValue() const

## BRIEF

Получает значение события

## CONTENT

Доступ: public

Получает значение события

Возвращает:
* stappler::StringView

# ::stappler::xenolith::Event::getDataValue() const

## BRIEF

Получает значение события

## CONTENT

Доступ: public

Получает значение события

Возвращает:
* stappler::mem_std::Value const&

# ::stappler::xenolith::Event::EventValue

## BRIEF

Тип значения события

## CONTENT

Доступ: protected

Тип значения события



# ::stappler::xenolith::Event::EventValue::intValue

## BRIEF

Целочисленное значение

## CONTENT

Целочисленное значение

Тип: int64_t


# ::stappler::xenolith::Event::EventValue::floatValue

## BRIEF

Значение с плавающей точкой

## CONTENT

Значение с плавающей точкой

Тип: double


# ::stappler::xenolith::Event::EventValue::boolValue

## BRIEF

булево значение

## CONTENT

булево значение

Тип: bool


# ::stappler::xenolith::Event::EventValue::objValue

## BRIEF

Объект-значение

## CONTENT

Объект-значение

Тип: stappler::mem_std::Ref*


# ::stappler::xenolith::Event::EventValue::strValue

## BRIEF

Значение-строка

## CONTENT

Значение-строка

Тип: stappler::mem_std::String const*


# ::stappler::xenolith::Event::EventValue::dataValue

## BRIEF

Значение-данные

## CONTENT

Значение-данные

Тип: stappler::mem_std::Value const*


# ::stappler::xenolith::Event::Event(stappler::xenolith::EventHeader const&,stappler::mem_std::Ref*,stappler::xenolith::Event::EventValue,stappler::xenolith::Event::Type)

## BRIEF

Конструктор

## CONTENT

Доступ: protected

Конструктор

Параметры:
* stappler::xenolith::EventHeader const& - заголовок
* stappler::mem_std::Ref* - источник
* stappler::xenolith::Event::EventValue - значение
* stappler::xenolith::Event::Type - тип значения


# ::stappler::xenolith::Event::Event(stappler::xenolith::EventHeader const&,stappler::mem_std::Ref*)

## BRIEF

Конструктор

## CONTENT

Доступ: protected

Конструктор

Параметры:
* stappler::xenolith::EventHeader const& - заголовок
* stappler::mem_std::Ref* - источник


# ::stappler::xenolith::Event::send(stappler::xenolith::EventHeader const&,stappler::mem_std::Ref*,stappler::xenolith::Event::EventValue,stappler::xenolith::Event::Type)

## BRIEF

Отправляет событие

## CONTENT

Доступ: protected

Отправляет событие

Параметры:
* stappler::xenolith::EventHeader const&
* stappler::mem_std::Ref*
* stappler::xenolith::Event::EventValue
* stappler::xenolith::Event::Type


# ::stappler::xenolith::Event::send(stappler::xenolith::EventHeader const&,stappler::mem_std::Ref*,int64_t)

## BRIEF

Отправляет событие

## CONTENT

Доступ: protected

Отправляет событие

Параметры:
* stappler::xenolith::EventHeader const&
* stappler::mem_std::Ref*
* int64_t


# ::stappler::xenolith::Event::send(stappler::xenolith::EventHeader const&,stappler::mem_std::Ref*,double)

## BRIEF

Отправляет событие

## CONTENT

Доступ: protected

Отправляет событие

Параметры:
* stappler::xenolith::EventHeader const&
* stappler::mem_std::Ref*
* double


# ::stappler::xenolith::Event::send(stappler::xenolith::EventHeader const&,stappler::mem_std::Ref*,bool)

## BRIEF

Отправляет событие

## CONTENT

Доступ: protected

Отправляет событие

Параметры:
* stappler::xenolith::EventHeader const&
* stappler::mem_std::Ref*
* bool


# ::stappler::xenolith::Event::send(stappler::xenolith::EventHeader const&,stappler::mem_std::Ref*,stappler::mem_std::Ref*)

## BRIEF

Отправляет событие

## CONTENT

Доступ: protected

Отправляет событие

Параметры:
* stappler::xenolith::EventHeader const&
* stappler::mem_std::Ref*
* stappler::mem_std::Ref*


# ::stappler::xenolith::Event::send(stappler::xenolith::EventHeader const&,stappler::mem_std::Ref*,char const*)

## BRIEF

Отправляет событие

## CONTENT

Доступ: protected

Отправляет событие

Параметры:
* stappler::xenolith::EventHeader const&
* stappler::mem_std::Ref*
* char const*


# ::stappler::xenolith::Event::send(stappler::xenolith::EventHeader const&,stappler::mem_std::Ref*,stappler::mem_std::String const&)

## BRIEF

Отправляет событие

## CONTENT

Доступ: protected

Отправляет событие

Параметры:
* stappler::xenolith::EventHeader const&
* stappler::mem_std::Ref*
* stappler::mem_std::String const&


# ::stappler::xenolith::Event::send(stappler::xenolith::EventHeader const&,stappler::mem_std::Ref*,stappler::StringView const&)

## BRIEF

Отправляет событие

## CONTENT

Доступ: protected

Отправляет событие

Параметры:
* stappler::xenolith::EventHeader const&
* stappler::mem_std::Ref*
* stappler::StringView const&


# ::stappler::xenolith::Event::send(stappler::xenolith::EventHeader const&,stappler::mem_std::Ref*,stappler::mem_std::Value const&)

## BRIEF

Отправляет событие

## CONTENT

Доступ: protected

Отправляет событие

Параметры:
* stappler::xenolith::EventHeader const&
* stappler::mem_std::Ref*
* stappler::mem_std::Value const&


# ::stappler::xenolith::Event::send(stappler::xenolith::EventHeader const&,stappler::mem_std::Ref*)

## BRIEF

Отправляет событие

## CONTENT

Доступ: protected

Отправляет событие

Параметры:
* stappler::xenolith::EventHeader const&
* stappler::mem_std::Ref*


# ::stappler::xenolith::Event::dispatch() const

## BRIEF

Доставляет текущее событие

## CONTENT

Доступ: protected

Доставляет текущее событие


# ::stappler::xenolith::Event::_header

## BRIEF

Заголовок события

## CONTENT

Доступ: protected

Заголовок события

Тип: stappler::xenolith::EventHeader const&


# ::stappler::xenolith::Event::_type

## BRIEF

Тип события

## CONTENT

Доступ: protected

Тип события

Тип: stappler::xenolith::Event::Type


# ::stappler::xenolith::Event::_object

## BRIEF

Объект-источник

## CONTENT

Доступ: protected

Объект-источник

Тип: stappler::mem_std::Ref*


# ::stappler::xenolith::Event::_value

## BRIEF

Значение

## CONTENT

Доступ: protected

Значение

Тип: stappler::xenolith::Event::EventValue


# ::stappler::xenolith::Event::ZERO_STRING

## BRIEF

Нулевая строка

## CONTENT

Доступ: private

Нулевая строка

Тип: stappler::mem_std::String
