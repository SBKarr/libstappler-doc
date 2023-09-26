Title: XLEventListener.h


# XENOLITH_SCENE_NODES_XLEVENTLISTENER_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::EventListener

## BRIEF

## CONTENT

Базовые классы:
* Component
* EventHandler


# ::stappler::xenolith::EventListener::EventCallback

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::EventListener::~EventListener()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::EventListener::init()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::EventListener::onEventRecieved(stappler::xenolith::Event const&,stappler::xenolith::EventListener::EventCallback const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Event const&
* stappler::xenolith::EventListener::EventCallback const&


# ::stappler::xenolith::EventListener::onEvent(stappler::xenolith::EventHeader const&,stappler::xenolith::EventListener::EventCallback&&,bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::EventHeader const&
* stappler::xenolith::EventListener::EventCallback&&
* bool

Возвращает:
* stappler::xenolith::EventHandlerNode*

# ::stappler::xenolith::EventListener::onEventWithObject(stappler::xenolith::EventHeader const&,stappler::mem_std::Ref*,stappler::xenolith::EventListener::EventCallback&&,bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::EventHeader const&
* stappler::mem_std::Ref*
* stappler::xenolith::EventListener::EventCallback&&
* bool

Возвращает:
* stappler::xenolith::EventHandlerNode*

# ::stappler::xenolith::EventListener::clear()

## BRIEF

## CONTENT

Доступ: public
