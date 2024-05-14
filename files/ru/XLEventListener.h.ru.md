Title: XLEventListener.h


# XENOLITH_SCENE_NODES_XLEVENTLISTENER_H_

## BRIEF

Заголовок компонента для прослушивания событий

## CONTENT

Заголовок компонента для прослушивания событий


# ::stappler::xenolith::EventListener

## BRIEF

Компонент для прослушивания событий

## CONTENT

Компонент для прослушивания событий

Базовые классы:
* Component
* EventHandler


# ::stappler::xenolith::EventListener::EventCallback

## BRIEF

Функция обработки событий

## CONTENT

Доступ: public

Функция обработки событий


# ::stappler::xenolith::EventListener::~EventListener()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор

# ::stappler::xenolith::EventListener::init()

## BRIEF

Создаёт компонент

## CONTENT

Доступ: public

Создаёт компонент

Возвращает:
* bool

# ::stappler::xenolith::EventListener::onEventRecieved(stappler::xenolith::Event const&,stappler::xenolith::EventListener::EventCallback const&)

## BRIEF

Устанавливает обработчик события

## CONTENT

Доступ: public

Устанавливает обработчик события

Параметры:
* stappler::xenolith::Event const&
* stappler::xenolith::EventListener::EventCallback const&


# ::stappler::xenolith::EventListener::onEvent(stappler::xenolith::EventHeader const&,stappler::xenolith::EventListener::EventCallback&&,bool)

## BRIEF

Устанавливает обработчик события

## CONTENT

Доступ: public

Устанавливает обработчик события

Параметры:
* stappler::xenolith::EventHeader const&
* stappler::xenolith::EventListener::EventCallback&&
* bool - true если обработчик нужно удалить после первого вызова

Возвращает:
* stappler::xenolith::EventHandlerNode*

# ::stappler::xenolith::EventListener::onEventWithObject(stappler::xenolith::EventHeader const&,stappler::mem_std::Ref*,stappler::xenolith::EventListener::EventCallback&&,bool)

## BRIEF

Устанавливает обработчик события для объекта

## CONTENT

Доступ: public

Устанавливает обработчик события для объекта

Параметры:
* stappler::xenolith::EventHeader const&
* stappler::mem_std::Ref*
* stappler::xenolith::EventListener::EventCallback&&
* bool

Возвращает:
* stappler::xenolith::EventHandlerNode*

# ::stappler::xenolith::EventListener::clear()

## BRIEF

Удаляет обработчики

## CONTENT

Доступ: public

Удаляет обработчики
