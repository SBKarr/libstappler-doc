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


# ::stappler::xenolith::SchedulerUpdate<T,typenamestd::enable_if<std::is_base_of<Ref,T>::value>::type>::SchedulerUpdate<T,typenamestd::enable_if<std::is_base_of<Ref,T>::value>::type>

## BRIEF

## CONTENT

Параметры шаблона:
* class T


# ::stappler::xenolith::SchedulerUpdate<T,typenamestd::enable_if<std::is_base_of<Ref,T>::value>::type>::scheduleUpdate(stappler::xenolith::Scheduler*,T*,int32_t,bool)

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
