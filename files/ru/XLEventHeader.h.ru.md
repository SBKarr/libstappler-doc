Title: XLEventHeader.h


# XENOLITH_APPLICATION_XLEVENTHEADER_H_

## BRIEF

Тип заголовка события

## CONTENT

Тип заголовка события. Заголовок события обычно определяется как статическая часть класса.


# XL_DECLARE_EVENT_CLASS

## BRIEF

Объявляет заголовок события для класса

## CONTENT

Объявляет заголовок события для класса

Параметры:
* class - класс
* event - имя соыбтия


# XL_DECLARE_EVENT

## BRIEF

Объявляет заголовок события для класса

## CONTENT

Объявляет заголовок события для класса

Параметры:
* class - класс
* catName - выделенное имя категории
* event - имя соыбтия


# ::stappler::xenolith::EventHeader

## BRIEF

Тип заголовка события

## CONTENT

Тип заголовка события


# ::stappler::xenolith::EventHeader::Category

## BRIEF

Тип категории

## CONTENT

Доступ: public

Тип категории


# ::stappler::xenolith::EventHeader::EventID

## BRIEF

Тип идентификатора соыбтия

## CONTENT

Доступ: public

Тип идентификатора соыбтия

# ::stappler::xenolith::EventHeader::getCategoryForName(stappler::StringView)

## BRIEF

Возвращает категорию по имени

## CONTENT

Доступ: public

Возвращает категорию по имени

Параметры:
* stappler::StringView

Возвращает:
* Category

# ::stappler::xenolith::EventHeader::EventHeader()

## BRIEF

Конструктор

## CONTENT

Доступ: public

Конструктор


# ::stappler::xenolith::EventHeader::EventHeader(stappler::StringView,stappler::StringView)

## BRIEF

Конструктор

## CONTENT

Доступ: public

Конструктор

Параметры:
* stappler::StringView
* stappler::StringView


# ::stappler::xenolith::EventHeader::EventHeader(stappler::xenolith::EventHeader::Category,stappler::StringView)

## BRIEF

Конструктор

## CONTENT

Доступ: public

Конструктор

Параметры:
* stappler::xenolith::EventHeader::Category
* stappler::StringView


# ::stappler::xenolith::EventHeader::~EventHeader()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор

# ::stappler::xenolith::EventHeader::EventHeader(stappler::xenolith::EventHeader const&)

## BRIEF

Конструктор копирования

## CONTENT

Доступ: public

Конструктор копирования

Параметры:
* stappler::xenolith::EventHeader const&


# ::stappler::xenolith::EventHeader::EventHeader(stappler::xenolith::EventHeader&&)

## BRIEF

Конструктор перемещения

## CONTENT

Доступ: public

Конструктор перемещения

Параметры:
* stappler::xenolith::EventHeader&&


# ::stappler::xenolith::EventHeader::operator=(stappler::xenolith::EventHeader const&)

## BRIEF

Оператор копирования

## CONTENT

Доступ: public

Оператор копирования

Параметры:
* stappler::xenolith::EventHeader const&

Возвращает:
* stappler::xenolith::EventHeader&

# ::stappler::xenolith::EventHeader::operator=(stappler::xenolith::EventHeader&&)

## BRIEF

Оператор перемещения

## CONTENT

Доступ: public

Оператор перемещения

Параметры:
* stappler::xenolith::EventHeader&&

Возвращает:
* stappler::xenolith::EventHeader&

# ::stappler::xenolith::EventHeader::getCategory() const

## BRIEF

Возвращает категорию события

## CONTENT

Доступ: public

Возвращает категорию события

Возвращает:
* Category

# ::stappler::xenolith::EventHeader::getEventID() const

## BRIEF

Возвращает идентификатор события

## CONTENT

Доступ: public

Возвращает идентификатор события

Возвращает:
* EventID

# ::stappler::xenolith::EventHeader::getName() const

## BRIEF

Возвращает имя события

## CONTENT

Доступ: public

Возвращает имя события

Возвращает:
* stappler::StringView

# ::stappler::xenolith::EventHeader::isInCategory(stappler::xenolith::EventHeader::Category) const

## BRIEF

Проверяет, относится ли событие к категории

## CONTENT

Доступ: public

Проверяет, относится ли событие к категории

Параметры:
* stappler::xenolith::EventHeader::Category

Возвращает:
* bool

# ::stappler::xenolith::EventHeader::operator int()

## BRIEF

Возвращает идентификатор события

## CONTENT

Доступ: public

Возвращает идентификатор события

Возвращает:
* int

# ::stappler::xenolith::EventHeader::operator==(stappler::xenolith::Event const&) const

## BRIEF

Сопоставляет событие и заголовок

## CONTENT

Доступ: public

Сопоставляет событие и заголовок

Параметры:
* stappler::xenolith::Event const&

Возвращает:
* bool

# ::stappler::xenolith::EventHeader::operator()<typename>(stappler::mem_std::Ref*,T const&) const

## BRIEF

Отправляет собцтие

## CONTENT

Доступ: public

Отправляет собцтие

Параметры шаблона:
* typename T

Параметры:
* stappler::mem_std::Ref*
* T const&


# ::stappler::xenolith::EventHeader::operator()(stappler::mem_std::Ref*) const

## BRIEF

Отправляет собцтие

## CONTENT

Доступ: public

Отправляет собцтие

Параметры:
* stappler::mem_std::Ref*


# ::stappler::xenolith::EventHeader::send(stappler::mem_std::Ref*,int64_t) const

## BRIEF

Отправляет собцтие

## CONTENT

Доступ: public

Отправляет собцтие

Параметры:
* stappler::mem_std::Ref*
* int64_t


# ::stappler::xenolith::EventHeader::send(stappler::mem_std::Ref*,double) const

## BRIEF

Отправляет собцтие

## CONTENT

Доступ: public

Отправляет собцтие

Параметры:
* stappler::mem_std::Ref*
* double


# ::stappler::xenolith::EventHeader::send(stappler::mem_std::Ref*,bool) const

## BRIEF

Отправляет собцтие

## CONTENT

Доступ: public

Отправляет собцтие

Параметры:
* stappler::mem_std::Ref*
* bool


# ::stappler::xenolith::EventHeader::send(stappler::mem_std::Ref*,stappler::mem_std::Ref*) const

## BRIEF

Отправляет собцтие

## CONTENT

Доступ: public

Отправляет собцтие

Параметры:
* stappler::mem_std::Ref*
* stappler::mem_std::Ref*


# ::stappler::xenolith::EventHeader::send(stappler::mem_std::Ref*,char const*) const

## BRIEF

Отправляет собцтие

## CONTENT

Доступ: public

Отправляет собцтие

Параметры:
* stappler::mem_std::Ref*
* char const*


# ::stappler::xenolith::EventHeader::send(stappler::mem_std::Ref*,stappler::mem_std::String const&) const

## BRIEF

Отправляет собцтие

## CONTENT

Доступ: public

Отправляет собцтие

Параметры:
* stappler::mem_std::Ref*
* stappler::mem_std::String const&


# ::stappler::xenolith::EventHeader::send(stappler::mem_std::Ref*,stappler::StringView const&) const

## BRIEF

Отправляет собцтие

## CONTENT

Доступ: public

Отправляет собцтие

Параметры:
* stappler::mem_std::Ref*
* stappler::StringView const&


# ::stappler::xenolith::EventHeader::send(stappler::mem_std::Ref*,stappler::mem_std::Value const&) const

## BRIEF

Отправляет собцтие

## CONTENT

Доступ: public

Отправляет собцтие

Параметры:
* stappler::mem_std::Ref*
* stappler::mem_std::Value const&


# ::stappler::xenolith::EventHeader::send(stappler::mem_std::Ref*) const

## BRIEF

Отправляет собцтие

## CONTENT

Доступ: public

Отправляет собцтие

Параметры:
* stappler::mem_std::Ref*


# ::stappler::xenolith::EventHeader::_category

## BRIEF

Категория соыбтия

## CONTENT

Доступ: protected

Категория соыбтия

Тип: Category


# ::stappler::xenolith::EventHeader::_id

## BRIEF

Идентификатор соыбтия

## CONTENT

Доступ: protected

Идентификатор соыбтия

Тип: EventID


# ::stappler::xenolith::EventHeader::_name

## BRIEF

Имя события

## CONTENT

Доступ: protected

Имя события

Тип: stappler::StringView
