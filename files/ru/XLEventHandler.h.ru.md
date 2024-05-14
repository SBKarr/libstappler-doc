Title: XLEventHandler.h


# XENOLITH_APPLICATION_XLEVENTHANDLER_H_

## BRIEF

Заголовок обработчика события

## CONTENT

Заголовок обработчика события


# ::stappler::xenolith::EventHandler

## BRIEF

Тип обработчика соыбтия

## CONTENT

Тип обработчика соыбтия


# ::stappler::xenolith::EventHandler::Callback

## BRIEF

Функция обработки события

## CONTENT

Доступ: public

Функция обработки события

# ::stappler::xenolith::EventHandler::EventHandler()

## BRIEF

Конструктор

## CONTENT

Доступ: public

Конструктор


# ::stappler::xenolith::EventHandler::~EventHandler()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор


# ::stappler::xenolith::EventHandler::addHandlerNode(stappler::xenolith::EventHandlerNode*)

## BRIEF

Добавляет узел обработки

## CONTENT

Доступ: public

Добавляет узел обработки

Параметры:
* stappler::xenolith::EventHandlerNode*


# ::stappler::xenolith::EventHandler::removeHandlerNode(stappler::xenolith::EventHandlerNode*)

## BRIEF

Удаляет узел обработки

## CONTENT

Доступ: public

Удаляет узел обработки

Параметры:
* stappler::xenolith::EventHandlerNode*


# ::stappler::xenolith::EventHandler::setEventHandler(stappler::xenolith::EventHeader const&,stappler::xenolith::EventHandler::Callback&&,bool)

## BRIEF

Устанавливает обработчик

## CONTENT

Доступ: public

Устанавливает обработчик

Параметры:
* stappler::xenolith::EventHeader const&
* stappler::xenolith::EventHandler::Callback&&
* bool

Возвращает:
* stappler::xenolith::EventHandlerNode*

# ::stappler::xenolith::EventHandler::setEventHandlerForObject(stappler::xenolith::EventHeader const&,stappler::mem_std::Ref*,stappler::xenolith::EventHandler::Callback&&,bool)

## BRIEF

Устанавливает обработчик для объекта-источника

## CONTENT

Доступ: public

Устанавливает обработчик для объекта-источника

Параметры:
* stappler::xenolith::EventHeader const&
* stappler::mem_std::Ref*
* stappler::xenolith::EventHandler::Callback&&
* bool

Возвращает:
* stappler::xenolith::EventHandlerNode*

# ::stappler::xenolith::EventHandler::getInterface() const

## BRIEF

Возвращает внешний интерфейс обработчика

## CONTENT

Доступ: public

Возвращает внешний интерфейс обработчика

Возвращает:
* stappler::mem_std::Ref*

# ::stappler::xenolith::EventHandler::clearEvents()

## BRIEF

Удаляет обработчики событий

## CONTENT

Доступ: public

Удаляет обработчики событий


# ::stappler::xenolith::EventHandler::_handlers

## BRIEF

Узлы обработки

## CONTENT

Доступ: private

Узлы обработки

Тип: Set<Rc<stappler::xenolith::EventHandlerNode>>


# ::stappler::xenolith::EventHandlerNode

## BRIEF

Тип узла обработки события

## CONTENT

Тип узла обработки события. Узел отвечает за обработку отдельного соыбтия.

Базовые классы:
* Ref


# ::stappler::xenolith::EventHandlerNode::Callback

## BRIEF

Функция обработки события

## CONTENT

Доступ: public

Функция обработки события


# ::stappler::xenolith::EventHandlerNode::onEvent(stappler::xenolith::EventHeader const&,stappler::mem_std::Ref*,stappler::xenolith::EventHandlerNode::Callback&&,stappler::xenolith::EventHandler*,bool)

## BRIEF

Обрабатывает событие

## CONTENT

Доступ: public

Обрабатывает событие

Параметры:
* stappler::xenolith::EventHeader const&
* stappler::mem_std::Ref*
* stappler::xenolith::EventHandlerNode::Callback&&
* stappler::xenolith::EventHandler*
* bool

Возвращает:
* Rc<stappler::xenolith::EventHandlerNode>

# ::stappler::xenolith::EventHandlerNode::EventHandlerNode(stappler::xenolith::EventHeader const&,stappler::mem_std::Ref*,stappler::xenolith::EventHandlerNode::Callback&&,stappler::xenolith::EventHandler*,bool)

## BRIEF

Создаёт узел

## CONTENT

Доступ: public

Создаёт узел

Параметры:
* stappler::xenolith::EventHeader const&
* stappler::mem_std::Ref*
* stappler::xenolith::EventHandlerNode::Callback&&
* stappler::xenolith::EventHandler*
* bool


# ::stappler::xenolith::EventHandlerNode::~EventHandlerNode()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор

# ::stappler::xenolith::EventHandlerNode::setSupport(stappler::xenolith::EventHandler*)

## BRIEF

Устанавливает обарботчик

## CONTENT

Доступ: public

Устанавливает обарботчик

Параметры:
* stappler::xenolith::EventHandler*


# ::stappler::xenolith::EventHandlerNode::shouldRecieveEventWithObject(EventHeader::EventID,stappler::mem_std::Ref*) const

## BRIEF

Проверяет, должен ли узел обработать событие

## CONTENT

Доступ: public

Проверяет, должен ли узел обработать событие

Параметры:
* EventHeader::EventID
* stappler::mem_std::Ref*

Возвращает:
* bool

# ::stappler::xenolith::EventHandlerNode::getEventID() const

## BRIEF

Возвращает идентификатор обрабатываемого соыбтия

## CONTENT

Доступ: public

Возвращает идентификатор обрабатываемого соыбтия

Возвращает:
* EventHeader::EventID

# ::stappler::xenolith::EventHandlerNode::onEventRecieved(stappler::xenolith::Event const&) const

## BRIEF

Обрабатывает событие

## CONTENT

Доступ: public

Обрабатывает событие

Параметры:
* stappler::xenolith::Event const&


# ::stappler::xenolith::EventHandlerNode::_destroyAfterEvent

## BRIEF

Флаг удаления узла после обработки

## CONTENT

Доступ: private

Флаг удаления узла после обработки

Тип: bool


# ::stappler::xenolith::EventHandlerNode::_eventID

## BRIEF

Идентификатор соыбтия

## CONTENT

Доступ: private

Идентификатор соыбтия

Тип: EventHeader::EventID


# ::stappler::xenolith::EventHandlerNode::_callback

## BRIEF

Функция обработки

## CONTENT

Доступ: private

Функция обработки

Тип: Callback


# ::stappler::xenolith::EventHandlerNode::_obj

## BRIEF

Объект-источник

## CONTENT

Доступ: private

Объект-источник

Тип: stappler::mem_std::Ref*


# ::stappler::xenolith::EventHandlerNode::_support

## BRIEF

Обработчик события

## CONTENT

Доступ: private

Обработчик события

Тип: std::atomic<EventHandler *>
