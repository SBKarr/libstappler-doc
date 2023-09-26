Title: XLEventHeader.h


# XENOLITH_APPLICATION_XLEVENTHEADER_H_

## BRIEF

## CONTENT


# XL_DECLARE_EVENT_CLASS

## BRIEF

## CONTENT

Параметры:
* class
* event


# XL_DECLARE_EVENT

## BRIEF

## CONTENT

Параметры:
* class
* catName
* event


# ::stappler::xenolith::EventHeader

## BRIEF

## CONTENT


# ::stappler::xenolith::EventHeader::Category

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::EventHeader::EventID

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::EventHeader::getCategoryForName(stappler::StringView)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView

Возвращает:
* Category

# ::stappler::xenolith::EventHeader::EventHeader()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::EventHeader::EventHeader(stappler::StringView,stappler::StringView)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView
* stappler::StringView


# ::stappler::xenolith::EventHeader::EventHeader(stappler::xenolith::EventHeader::Category,stappler::StringView)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::EventHeader::Category
* stappler::StringView


# ::stappler::xenolith::EventHeader::~EventHeader()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::EventHeader::EventHeader(stappler::xenolith::EventHeader const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::EventHeader const&


# ::stappler::xenolith::EventHeader::EventHeader(stappler::xenolith::EventHeader&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::EventHeader&&


# ::stappler::xenolith::EventHeader::operator=(stappler::xenolith::EventHeader const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::EventHeader const&

Возвращает:
* stappler::xenolith::EventHeader&

# ::stappler::xenolith::EventHeader::operator=(stappler::xenolith::EventHeader&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::EventHeader&&

Возвращает:
* stappler::xenolith::EventHeader&

# ::stappler::xenolith::EventHeader::getCategory() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Category

# ::stappler::xenolith::EventHeader::getEventID() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* EventID

# ::stappler::xenolith::EventHeader::getName() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::StringView

# ::stappler::xenolith::EventHeader::isInCategory(stappler::xenolith::EventHeader::Category) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::EventHeader::Category

Возвращает:
* bool

# ::stappler::xenolith::EventHeader::operator int()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* int

# ::stappler::xenolith::EventHeader::operator==(stappler::xenolith::Event const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Event const&

Возвращает:
* bool

# ::stappler::xenolith::EventHeader::operator()<typename>(stappler::mem_std::Ref*,T const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename T

Параметры:
* stappler::mem_std::Ref*
* T const&


# ::stappler::xenolith::EventHeader::operator()(stappler::mem_std::Ref*) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::mem_std::Ref*


# ::stappler::xenolith::EventHeader::send(stappler::mem_std::Ref*,int64_t) const

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::mem_std::Ref*
* int64_t


# ::stappler::xenolith::EventHeader::send(stappler::mem_std::Ref*,double) const

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::mem_std::Ref*
* double


# ::stappler::xenolith::EventHeader::send(stappler::mem_std::Ref*,bool) const

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::mem_std::Ref*
* bool


# ::stappler::xenolith::EventHeader::send(stappler::mem_std::Ref*,stappler::mem_std::Ref*) const

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::mem_std::Ref*
* stappler::mem_std::Ref*


# ::stappler::xenolith::EventHeader::send(stappler::mem_std::Ref*,char const*) const

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::mem_std::Ref*
* char const*


# ::stappler::xenolith::EventHeader::send(stappler::mem_std::Ref*,stappler::mem_std::String const&) const

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::mem_std::Ref*
* stappler::mem_std::String const&


# ::stappler::xenolith::EventHeader::send(stappler::mem_std::Ref*,stappler::StringView const&) const

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::mem_std::Ref*
* stappler::StringView const&


# ::stappler::xenolith::EventHeader::send(stappler::mem_std::Ref*,stappler::mem_std::Value const&) const

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::mem_std::Ref*
* stappler::mem_std::Value const&


# ::stappler::xenolith::EventHeader::send(stappler::mem_std::Ref*) const

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::mem_std::Ref*


# ::stappler::xenolith::EventHeader::_category

## BRIEF

## CONTENT

Доступ: protected

Тип: Category


# ::stappler::xenolith::EventHeader::_id

## BRIEF

## CONTENT

Доступ: protected

Тип: EventID


# ::stappler::xenolith::EventHeader::_name

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::StringView
