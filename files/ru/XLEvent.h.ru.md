Title: XLEvent.h


# XENOLITH_APPLICATION_XLEVENT_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::Event

## BRIEF

## CONTENT


# ::stappler::xenolith::Event::Type

## BRIEF

## CONTENT

Доступ: protected

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

## CONTENT

Доступ: public

Возвращает:
* stappler::mem_std::Ref*

# ::stappler::xenolith::Event::getHeader() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::EventHeader const&

# ::stappler::xenolith::Event::getCategory() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* EventHeader::Category

# ::stappler::xenolith::Event::getEventID() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* EventHeader::EventID

# ::stappler::xenolith::Event::is(stappler::xenolith::EventHeader const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::EventHeader const&

Возвращает:
* bool

# ::stappler::xenolith::Event::operator==(stappler::xenolith::EventHeader const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::EventHeader const&

Возвращает:
* bool

# ::stappler::xenolith::Event::getTarget<class>() const

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class T

Возвращает:
* T*

# ::stappler::xenolith::Event::valueIsVoid() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::Event::valueIsBool() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::Event::valueIsInt() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::Event::valueIsFloat() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::Event::valueIsObject() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::Event::valueIsString() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::Event::valueIsData() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::Event::getIntValue() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* int64_t

# ::stappler::xenolith::Event::getFloatValue() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* double

# ::stappler::xenolith::Event::getBoolValue() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::Event::getObjValueImpl<class>(std::true_type const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class T

Параметры:
* std::true_type const&

Возвращает:
* T

# ::stappler::xenolith::Event::getObjValueImpl<class>(std::false_type const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class T

Параметры:
* std::false_type const&

Возвращает:
* T

# ::stappler::xenolith::Event::getObjectValue<class>() const

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class T

Возвращает:
* T

# ::stappler::xenolith::Event::getStringValue() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::StringView

# ::stappler::xenolith::Event::getDataValue() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::mem_std::Value const&

# ::stappler::xenolith::Event::EventValue

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::Event::EventValue::intValue

## BRIEF

## CONTENT

Тип: int64_t


# ::stappler::xenolith::Event::EventValue::floatValue

## BRIEF

## CONTENT

Тип: double


# ::stappler::xenolith::Event::EventValue::boolValue

## BRIEF

## CONTENT

Тип: bool


# ::stappler::xenolith::Event::EventValue::objValue

## BRIEF

## CONTENT

Тип: stappler::mem_std::Ref*


# ::stappler::xenolith::Event::EventValue::strValue

## BRIEF

## CONTENT

Тип: stappler::mem_std::String const*


# ::stappler::xenolith::Event::EventValue::dataValue

## BRIEF

## CONTENT

Тип: stappler::mem_std::Value const*


# ::stappler::xenolith::Event::Event(stappler::xenolith::EventHeader const&,stappler::mem_std::Ref*,stappler::xenolith::Event::EventValue,stappler::xenolith::Event::Type)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::EventHeader const&
* stappler::mem_std::Ref*
* stappler::xenolith::Event::EventValue
* stappler::xenolith::Event::Type


# ::stappler::xenolith::Event::Event(stappler::xenolith::EventHeader const&,stappler::mem_std::Ref*)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::EventHeader const&
* stappler::mem_std::Ref*


# ::stappler::xenolith::Event::send(stappler::xenolith::EventHeader const&,stappler::mem_std::Ref*,stappler::xenolith::Event::EventValue,stappler::xenolith::Event::Type)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::EventHeader const&
* stappler::mem_std::Ref*
* stappler::xenolith::Event::EventValue
* stappler::xenolith::Event::Type


# ::stappler::xenolith::Event::send(stappler::xenolith::EventHeader const&,stappler::mem_std::Ref*,int64_t)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::EventHeader const&
* stappler::mem_std::Ref*
* int64_t


# ::stappler::xenolith::Event::send(stappler::xenolith::EventHeader const&,stappler::mem_std::Ref*,double)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::EventHeader const&
* stappler::mem_std::Ref*
* double


# ::stappler::xenolith::Event::send(stappler::xenolith::EventHeader const&,stappler::mem_std::Ref*,bool)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::EventHeader const&
* stappler::mem_std::Ref*
* bool


# ::stappler::xenolith::Event::send(stappler::xenolith::EventHeader const&,stappler::mem_std::Ref*,stappler::mem_std::Ref*)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::EventHeader const&
* stappler::mem_std::Ref*
* stappler::mem_std::Ref*


# ::stappler::xenolith::Event::send(stappler::xenolith::EventHeader const&,stappler::mem_std::Ref*,char const*)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::EventHeader const&
* stappler::mem_std::Ref*
* char const*


# ::stappler::xenolith::Event::send(stappler::xenolith::EventHeader const&,stappler::mem_std::Ref*,stappler::mem_std::String const&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::EventHeader const&
* stappler::mem_std::Ref*
* stappler::mem_std::String const&


# ::stappler::xenolith::Event::send(stappler::xenolith::EventHeader const&,stappler::mem_std::Ref*,stappler::StringView const&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::EventHeader const&
* stappler::mem_std::Ref*
* stappler::StringView const&


# ::stappler::xenolith::Event::send(stappler::xenolith::EventHeader const&,stappler::mem_std::Ref*,stappler::mem_std::Value const&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::EventHeader const&
* stappler::mem_std::Ref*
* stappler::mem_std::Value const&


# ::stappler::xenolith::Event::send(stappler::xenolith::EventHeader const&,stappler::mem_std::Ref*)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::EventHeader const&
* stappler::mem_std::Ref*


# ::stappler::xenolith::Event::dispatch() const

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::Event::_header

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::EventHeader const&


# ::stappler::xenolith::Event::_type

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::Event::Type


# ::stappler::xenolith::Event::_object

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::mem_std::Ref*


# ::stappler::xenolith::Event::_value

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::Event::EventValue


# ::stappler::xenolith::Event::ZERO_STRING

## BRIEF

## CONTENT

Доступ: private

Тип: stappler::mem_std::String
