Title: XLScheduler.h


# XENOLITH_SCENE_DIRECTOR_XLSCHEDULER_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::SchedulerFunc

## BRIEF

## CONTENT


# ::stappler::xenolith::SchedulerCallback

## BRIEF

## CONTENT


# ::stappler::xenolith::SchedulerCallback::callback

## BRIEF

## CONTENT

Тип: stappler::xenolith::SchedulerFunc


# ::stappler::xenolith::SchedulerCallback::paused

## BRIEF

## CONTENT

Тип: bool


# ::stappler::xenolith::SchedulerCallback::removed

## BRIEF

## CONTENT

Тип: bool


# ::stappler::xenolith::SchedulerCallback::SchedulerCallback()

## BRIEF

## CONTENT


# ::stappler::xenolith::SchedulerCallback::SchedulerCallback(stappler::xenolith::SchedulerFunc&&,bool)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::SchedulerFunc&&
* bool


# ::stappler::xenolith::Scheduler

## BRIEF

## CONTENT

Базовые классы:
* Ref


# ::stappler::xenolith::Scheduler::Scheduler()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::Scheduler::~Scheduler()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::Scheduler::init()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::Scheduler::unschedule(void const*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* void const*


# ::stappler::xenolith::Scheduler::unscheduleAll()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::Scheduler::scheduleUpdate<typename>(T*,int32_t,bool)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename T

Параметры:
* T*
* int32_t
* bool


# ::stappler::xenolith::Scheduler::schedulePerFrame(stappler::xenolith::SchedulerFunc&&,void*,int32_t,bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::SchedulerFunc&&
* void*
* int32_t
* bool


# ::stappler::xenolith::Scheduler::update(stappler::xenolith::UpdateTime const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::UpdateTime const&


# ::stappler::xenolith::Scheduler::isPaused(void*) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* void*

Возвращает:
* bool

# ::stappler::xenolith::Scheduler::resume(void*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* void*


# ::stappler::xenolith::Scheduler::pause(void*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* void*


# ::stappler::xenolith::Scheduler::empty() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::Scheduler::ScheduledTemporary

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::Scheduler::ScheduledTemporary::callback

## BRIEF

## CONTENT

Тип: stappler::xenolith::SchedulerFunc


# ::stappler::xenolith::Scheduler::ScheduledTemporary::target

## BRIEF

## CONTENT

Тип: void*


# ::stappler::xenolith::Scheduler::ScheduledTemporary::priority

## BRIEF

## CONTENT

Тип: int32_t


# ::stappler::xenolith::Scheduler::ScheduledTemporary::paused

## BRIEF

## CONTENT

Тип: bool


# ::stappler::xenolith::Scheduler::_locked

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::Scheduler::_currentTarget

## BRIEF

## CONTENT

Доступ: protected

Тип: void const*


# ::stappler::xenolith::Scheduler::_currentNode

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::SchedulerCallback*


# ::stappler::xenolith::Scheduler::_list

## BRIEF

## CONTENT

Доступ: protected

Тип: PriorityList<stappler::xenolith::SchedulerCallback>


# ::stappler::xenolith::Scheduler::_tmp

## BRIEF

## CONTENT

Доступ: protected

Тип: Vector<stappler::xenolith::Scheduler::ScheduledTemporary>


# ::stappler::xenolith::SchedulerListener<class>

## BRIEF

## CONTENT

Параметры шаблона:
* class T


# ::stappler::xenolith::SchedulerListener<class>::Callback

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::SchedulerListener<class>::SchedulerListener(stappler::xenolith::Scheduler*,stappler::xenolith::SchedulerListener::Callback const&,T*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Scheduler*
* stappler::xenolith::SchedulerListener::Callback const&
* T*


# ::stappler::xenolith::SchedulerListener<class>::~SchedulerListener()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::SchedulerListener<class>::SchedulerListener(SchedulerListener<T> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* SchedulerListener<T> const&


# ::stappler::xenolith::SchedulerListener<class>::operator=(SchedulerListener<T> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* SchedulerListener<T> const&

Возвращает:
* SchedulerListener<T>&

# ::stappler::xenolith::SchedulerListener<class>::SchedulerListener(SchedulerListener<T>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* SchedulerListener<T>&&


# ::stappler::xenolith::SchedulerListener<class>::operator=(SchedulerListener<T>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* SchedulerListener<T>&&

Возвращает:
* SchedulerListener<T>&

# ::stappler::xenolith::SchedulerListener<class>::operator=(T*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* T*

Возвращает:
* SchedulerListener<T>&

# ::stappler::xenolith::SchedulerListener<class>::operator T*()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* T*

# ::stappler::xenolith::SchedulerListener<class>::operator T*() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* T*

# ::stappler::xenolith::SchedulerListener<class>::operator bool() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::SchedulerListener<class>::operator->()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* T*

# ::stappler::xenolith::SchedulerListener<class>::operator->() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* T const*

# ::stappler::xenolith::SchedulerListener<class>::set(T*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* T*


# ::stappler::xenolith::SchedulerListener<class>::get() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* T*

# ::stappler::xenolith::SchedulerListener<class>::setScheduler(stappler::xenolith::Scheduler*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Scheduler*


# ::stappler::xenolith::SchedulerListener<class>::getScheduler() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::Scheduler*

# ::stappler::xenolith::SchedulerListener<class>::setCallback(stappler::xenolith::SchedulerListener::Callback const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::SchedulerListener::Callback const&


# ::stappler::xenolith::SchedulerListener<class>::getCallback() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Callback&

# ::stappler::xenolith::SchedulerListener<class>::setDirty()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::SchedulerListener<class>::update(stappler::xenolith::UpdateTime const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::UpdateTime const&


# ::stappler::xenolith::SchedulerListener<class>::check()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::SchedulerListener<class>::updateScheduler()

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::SchedulerListener<class>::schedule()

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::SchedulerListener<class>::unschedule()

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::SchedulerListener<class>::_scheduler

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::Scheduler*


# ::stappler::xenolith::SchedulerListener<class>::_binding

## BRIEF

## CONTENT

Доступ: protected

Тип: Binding<T>


# ::stappler::xenolith::SchedulerListener<class>::_callback

## BRIEF

## CONTENT

Доступ: protected

Тип: Callback


# ::stappler::xenolith::SchedulerListener<class>::_dirty

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::SchedulerListener<class>::_scheduled

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::SchedulerUpdate<typename,typename>

## BRIEF

## CONTENT

Параметры шаблона:
* typename T
* typename Enable


# ::stappler::xenolith::SchedulerUpdate<typename,typename>::scheduleUpdate(stappler::xenolith::Scheduler*,T*,int32_t,bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Scheduler*
* T*
* int32_t
* bool


# ::stappler::xenolith::SchedulerUpdate<T,typename std::enable_if<std::is_base_of<Ref,T>::value>::type>::SchedulerUpdate<T,typename std::enable_if<std::is_base_of<Ref,T>::value>::type>

## BRIEF

## CONTENT

Параметры шаблона:
* class T


# ::stappler::xenolith::SchedulerUpdate<T,typename std::enable_if<std::is_base_of<Ref,T>::value>::type>::scheduleUpdate(stappler::xenolith::Scheduler*,T*,int32_t,bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Scheduler*
* T*
* int32_t
* bool


# ::stappler::xenolith::Scheduler::scheduleUpdate<typename>(T*,int32_t,bool)

## BRIEF

## CONTENT

Параметры шаблона:
* typename T

Параметры:
* T*
* int32_t
* bool


# ::stappler::xenolith::SchedulerListener<class>::SchedulerListener(stappler::xenolith::Scheduler*,stappler::xenolith::SchedulerListener::Callback const&,T*)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::Scheduler*
* stappler::xenolith::SchedulerListener::Callback const&
* T*


# ::stappler::xenolith::SchedulerListener<class>::~SchedulerListener()

## BRIEF

## CONTENT


# ::stappler::xenolith::SchedulerListener<class>::SchedulerListener(SchedulerListener<T> const&)

## BRIEF

## CONTENT

Параметры:
* SchedulerListener<T> const&


# ::stappler::xenolith::SchedulerListener<class>::operator=(SchedulerListener<T> const&)

## BRIEF

## CONTENT

Параметры:
* SchedulerListener<T> const&

Возвращает:
* SchedulerListener<T>&

# ::stappler::xenolith::SchedulerListener<class>::SchedulerListener(SchedulerListener<T>&&)

## BRIEF

## CONTENT

Параметры:
* SchedulerListener<T>&&


# ::stappler::xenolith::SchedulerListener<class>::operator=(SchedulerListener<T>&&)

## BRIEF

## CONTENT

Параметры:
* SchedulerListener<T>&&

Возвращает:
* SchedulerListener<T>&

# ::stappler::xenolith::SchedulerListener<class>::set(T*)

## BRIEF

## CONTENT

Параметры:
* T*


# ::stappler::xenolith::SchedulerListener<class>::operator=(T*)

## BRIEF

## CONTENT

Параметры:
* T*

Возвращает:
* SchedulerListener<T>&

# ::stappler::xenolith::SchedulerListener<class>::get() const

## BRIEF

## CONTENT

Возвращает:
* T*

# ::stappler::xenolith::SchedulerListener<class>::setScheduler(stappler::xenolith::Scheduler*)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::Scheduler*


# ::stappler::xenolith::SchedulerListener<class>::getScheduler() const

## BRIEF

## CONTENT

Возвращает:
* stappler::xenolith::Scheduler*

# ::stappler::xenolith::SchedulerListener<class>::setCallback(stappler::xenolith::SchedulerListener::Callback const&)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::SchedulerListener::Callback const&


# ::stappler::xenolith::SchedulerListener<class>::getCallback() const

## BRIEF

## CONTENT

Возвращает:
* Function<void (Subscription::Flags)> const&

# ::stappler::xenolith::SchedulerListener<class>::setDirty()

## BRIEF

## CONTENT


# ::stappler::xenolith::SchedulerListener<class>::update(stappler::xenolith::UpdateTime const&)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::UpdateTime const&


# ::stappler::xenolith::SchedulerListener<class>::check()

## BRIEF

## CONTENT


# ::stappler::xenolith::SchedulerListener<class>::updateScheduler()

## BRIEF

## CONTENT


# ::stappler::xenolith::SchedulerListener<class>::schedule()

## BRIEF

## CONTENT


# ::stappler::xenolith::SchedulerListener<class>::unschedule()

## BRIEF

## CONTENT
