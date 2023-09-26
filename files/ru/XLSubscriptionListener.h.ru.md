Title: XLSubscriptionListener.h


# XENOLITH_SCENE_NODES_XLSUBSCRIPTIONLISTENER_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::SubscriptionListener

## BRIEF

## CONTENT

Базовые классы:
* Component


# ::stappler::xenolith::SubscriptionListener::DirtyCallback

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::SubscriptionListener::~SubscriptionListener()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::SubscriptionListener::init(stappler::xenolith::SubscriptionListener::DirtyCallback&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::SubscriptionListener::DirtyCallback&&

Возвращает:
* bool

# ::stappler::xenolith::SubscriptionListener::onEnter(stappler::xenolith::Scene*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Scene*


# ::stappler::xenolith::SubscriptionListener::onExit()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::SubscriptionListener::setCallback(stappler::xenolith::SubscriptionListener::DirtyCallback&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::SubscriptionListener::DirtyCallback&&


# ::stappler::xenolith::SubscriptionListener::getCallback() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* DirtyCallback&

# ::stappler::xenolith::SubscriptionListener::setDirty()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::SubscriptionListener::update(stappler::xenolith::UpdateTime)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::UpdateTime


# ::stappler::xenolith::SubscriptionListener::check()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::SubscriptionListener::updateScheduler()

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::SubscriptionListener::schedule()

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::SubscriptionListener::unschedule()

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::SubscriptionListener::_scheduler

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::Scheduler*


# ::stappler::xenolith::SubscriptionListener::_subscription

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::mem_std::Subscription*


# ::stappler::xenolith::SubscriptionListener::_callback

## BRIEF

## CONTENT

Доступ: protected

Тип: DirtyCallback


# ::stappler::xenolith::SubscriptionListener::_dirty

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::SubscriptionListener::_scheduled

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::DataListener<typename>

## BRIEF

## CONTENT

Параметры шаблона:
* typename T

Базовые классы:
* SubscriptionListener


# ::stappler::xenolith::DataListener<typename>::~DataListener()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::DataListener<typename>::init(stappler::xenolith::SubscriptionListener::DirtyCallback&&,T*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::SubscriptionListener::DirtyCallback&&
* T*

Возвращает:
* bool

# ::stappler::xenolith::DataListener<typename>::setSubscription(T*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* T*


# ::stappler::xenolith::DataListener<typename>::getSubscription() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* T*

# ::stappler::xenolith::DataListener<typename>::update(stappler::xenolith::UpdateTime)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::UpdateTime


# ::stappler::xenolith::DataListener<typename>::_binding

## BRIEF

## CONTENT

Доступ: protected

Тип: Binding<T>
