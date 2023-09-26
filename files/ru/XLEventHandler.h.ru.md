Title: XLEventHandler.h


# XENOLITH_APPLICATION_XLEVENTHANDLER_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::EventHandler

## BRIEF

## CONTENT


# ::stappler::xenolith::EventHandler::Callback

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::EventHandler::EventHandler()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::EventHandler::~EventHandler()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::EventHandler::addHandlerNode(stappler::xenolith::EventHandlerNode*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::EventHandlerNode*


# ::stappler::xenolith::EventHandler::removeHandlerNode(stappler::xenolith::EventHandlerNode*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::EventHandlerNode*


# ::stappler::xenolith::EventHandler::setEventHandler(stappler::xenolith::EventHeader const&,stappler::xenolith::EventHandler::Callback&&,bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::EventHeader const&
* stappler::xenolith::EventHandler::Callback&&
* bool

Возвращает:
* stappler::xenolith::EventHandlerNode*

# ::stappler::xenolith::EventHandler::setEventHandlerForObject(stappler::xenolith::EventHeader const&,stappler::mem_std::Ref*,stappler::xenolith::EventHandler::Callback&&,bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::EventHeader const&
* stappler::mem_std::Ref*
* stappler::xenolith::EventHandler::Callback&&
* bool

Возвращает:
* stappler::xenolith::EventHandlerNode*

# ::stappler::xenolith::EventHandler::getInterface() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::mem_std::Ref*

# ::stappler::xenolith::EventHandler::clearEvents()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::EventHandler::_handlers

## BRIEF

## CONTENT

Доступ: private

Тип: Set<Rc<stappler::xenolith::EventHandlerNode>>


# ::stappler::xenolith::EventHandlerNode

## BRIEF

## CONTENT

Базовые классы:
* Ref


# ::stappler::xenolith::EventHandlerNode::Callback

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::EventHandlerNode::onEvent(stappler::xenolith::EventHeader const&,stappler::mem_std::Ref*,stappler::xenolith::EventHandlerNode::Callback&&,stappler::xenolith::EventHandler*,bool)

## BRIEF

## CONTENT

Доступ: public

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

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::EventHeader const&
* stappler::mem_std::Ref*
* stappler::xenolith::EventHandlerNode::Callback&&
* stappler::xenolith::EventHandler*
* bool


# ::stappler::xenolith::EventHandlerNode::~EventHandlerNode()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::EventHandlerNode::setSupport(stappler::xenolith::EventHandler*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::EventHandler*


# ::stappler::xenolith::EventHandlerNode::shouldRecieveEventWithObject(EventHeader::EventID,stappler::mem_std::Ref*) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* EventHeader::EventID
* stappler::mem_std::Ref*

Возвращает:
* bool

# ::stappler::xenolith::EventHandlerNode::getEventID() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* EventHeader::EventID

# ::stappler::xenolith::EventHandlerNode::onEventRecieved(stappler::xenolith::Event const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Event const&


# ::stappler::xenolith::EventHandlerNode::_destroyAfterEvent

## BRIEF

## CONTENT

Доступ: private

Тип: bool


# ::stappler::xenolith::EventHandlerNode::_eventID

## BRIEF

## CONTENT

Доступ: private

Тип: EventHeader::EventID


# ::stappler::xenolith::EventHandlerNode::_callback

## BRIEF

## CONTENT

Доступ: private

Тип: Callback


# ::stappler::xenolith::EventHandlerNode::_obj

## BRIEF

## CONTENT

Доступ: private

Тип: stappler::mem_std::Ref*


# ::stappler::xenolith::EventHandlerNode::_support

## BRIEF

## CONTENT

Доступ: private

Тип: std::atomic<EventHandler *>
