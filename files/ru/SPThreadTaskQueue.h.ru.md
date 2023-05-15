Title: SPThreadTaskQueue.h


# MODULES_THREADS_SPTHREADTASKQUEUE_H_

## BRIEF

## CONTENT


# ::stappler::thread::TaskQueue

## BRIEF

## CONTENT

Базовые классы:
* RefBase<memory::StandartInterface>


# ::stappler::thread::TaskQueue::Ref

## BRIEF

## CONTENT

Доступ: public


# ::stappler::thread::TaskQueue::Flags

## BRIEF

## CONTENT

Доступ: public

Значения:
* None
* LocalQueue
* Cancelable
* Waitable


# ::stappler::thread::TaskQueue::getOwner()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::thread::TaskQueue const*

# ::stappler::thread::TaskQueue::TaskQueue(stappler::StringView,std::function<void ()>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView
* std::function<void ()>&&


# ::stappler::thread::TaskQueue::~TaskQueue()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::thread::TaskQueue::finalize()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::thread::TaskQueue::performAsync(Rc<stappler::thread::Task>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Rc<stappler::thread::Task>&&


# ::stappler::thread::TaskQueue::perform(Rc<stappler::thread::Task>&&,bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Rc<stappler::thread::Task>&&
* bool


# ::stappler::thread::TaskQueue::perform(std::function<void ()>&&,stappler::thread::TaskQueue::Ref*,bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* std::function<void ()>&&
* stappler::thread::TaskQueue::Ref*
* bool


# ::stappler::thread::TaskQueue::perform(std::map<uint32_t, std::vector<Rc<Task>>>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* std::map<uint32_t, std::vector<Rc<Task>>>&&

Возвращает:
* bool

# ::stappler::thread::TaskQueue::update(uint32_t*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint32_t*


# ::stappler::thread::TaskQueue::onMainThread(Rc<stappler::thread::Task>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Rc<stappler::thread::Task>&&


# ::stappler::thread::TaskQueue::onMainThread(std::function<void ()>&&,stappler::thread::TaskQueue::Ref*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* std::function<void ()>&&
* stappler::thread::TaskQueue::Ref*


# ::stappler::thread::TaskQueue::spawnWorkers(stappler::thread::TaskQueue::Flags)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::thread::TaskQueue::Flags

Возвращает:
* bool

# ::stappler::thread::TaskQueue::spawnWorkers(stappler::thread::TaskQueue::Flags,uint32_t,uint16_t,stappler::StringView)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::thread::TaskQueue::Flags
* uint32_t
* uint16_t
* stappler::StringView

Возвращает:
* bool

# ::stappler::thread::TaskQueue::cancelWorkers()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::thread::TaskQueue::performAll(stappler::thread::TaskQueue::Flags)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::thread::TaskQueue::Flags


# ::stappler::thread::TaskQueue::waitForAll(stappler::TimeInterval)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::TimeInterval

Возвращает:
* bool

# ::stappler::thread::TaskQueue::wait(uint32_t*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint32_t*

Возвращает:
* bool

# ::stappler::thread::TaskQueue::wait(stappler::TimeInterval,uint32_t*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::TimeInterval
* uint32_t*

Возвращает:
* bool

# ::stappler::thread::TaskQueue::lock()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::thread::TaskQueue::unlock()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::thread::TaskQueue::getName() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::StringView

# ::stappler::thread::TaskQueue::getThreadIds() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* std::vector<std::thread::id>

# ::stappler::thread::TaskQueue::getOutputCounter() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* size_t

# ::stappler::thread::TaskQueue::getThreadCount() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint16_t

# ::stappler::thread::TaskQueue::popTask(uint32_t)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* uint32_t

Возвращает:
* Rc<stappler::thread::Task>

# ::stappler::thread::TaskQueue::onMainThreadWorker(Rc<stappler::thread::Task>&&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* Rc<stappler::thread::Task>&&


# ::stappler::thread::TaskQueue::_context

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::thread::TaskQueue::WorkerContext*


# ::stappler::thread::TaskQueue::_inputMutexQueue

## BRIEF

## CONTENT

Доступ: protected

Тип: std::mutex


# ::stappler::thread::TaskQueue::_inputMutexFree

## BRIEF

## CONTENT

Доступ: protected

Тип: std::mutex


# ::stappler::thread::TaskQueue::_inputQueue

## BRIEF

## CONTENT

Доступ: protected

Тип: memory::PriorityQueue<Rc<Task>>


# ::stappler::thread::TaskQueue::_outputMutex

## BRIEF

## CONTENT

Доступ: protected

Тип: std::mutex


# ::stappler::thread::TaskQueue::_outputQueue

## BRIEF

## CONTENT

Доступ: protected

Тип: std::vector<Rc<Task>>


# ::stappler::thread::TaskQueue::_outputCallbacks

## BRIEF

## CONTENT

Доступ: protected

Тип: std::vector<Pair<std::function<void ()>, Rc<Ref>>>


# ::stappler::thread::TaskQueue::_outputCounter

## BRIEF

## CONTENT

Доступ: protected

Тип: std::atomic<size_t>


# ::stappler::thread::TaskQueue::_tasksCounter

## BRIEF

## CONTENT

Доступ: protected

Тип: std::atomic<size_t>


# ::stappler::thread::TaskQueue::_name

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::StringView


# ::stappler::thread::TaskQueue::_wakeup

## BRIEF

## CONTENT

Доступ: protected

Тип: std::function<void ()>


# ::stappler::thread::operator|(TaskQueue::Flags const&,TaskQueue::Flags const&)

## BRIEF

## CONTENT

Параметры:
* TaskQueue::Flags const&
* TaskQueue::Flags const&

Возвращает:
* TaskQueue::Flags

# ::stappler::thread::operator&(TaskQueue::Flags const&,TaskQueue::Flags const&)

## BRIEF

## CONTENT

Параметры:
* TaskQueue::Flags const&
* TaskQueue::Flags const&

Возвращает:
* TaskQueue::Flags

# ::stappler::thread::operator^(TaskQueue::Flags const&,TaskQueue::Flags const&)

## BRIEF

## CONTENT

Параметры:
* TaskQueue::Flags const&
* TaskQueue::Flags const&

Возвращает:
* TaskQueue::Flags

# ::stappler::thread::operator|=(TaskQueue::Flags&,TaskQueue::Flags const&)

## BRIEF

## CONTENT

Параметры:
* TaskQueue::Flags&
* TaskQueue::Flags const&

Возвращает:
* TaskQueue::Flags&

# ::stappler::thread::operator&=(TaskQueue::Flags&,TaskQueue::Flags const&)

## BRIEF

## CONTENT

Параметры:
* TaskQueue::Flags&
* TaskQueue::Flags const&

Возвращает:
* TaskQueue::Flags&

# ::stappler::thread::operator^=(TaskQueue::Flags&,TaskQueue::Flags const&)

## BRIEF

## CONTENT

Параметры:
* TaskQueue::Flags&
* TaskQueue::Flags const&

Возвращает:
* TaskQueue::Flags&

# ::stappler::thread::operator==(TaskQueue::Flags const&,std::underlying_type<TaskQueue::Flags>::type const&)

## BRIEF

## CONTENT

Параметры:
* TaskQueue::Flags const&
* std::underlying_type<TaskQueue::Flags>::type const&

Возвращает:
* bool

# ::stappler::thread::operator==(std::underlying_type<TaskQueue::Flags>::type const&,TaskQueue::Flags const&)

## BRIEF

## CONTENT

Параметры:
* std::underlying_type<TaskQueue::Flags>::type const&
* TaskQueue::Flags const&

Возвращает:
* bool

# ::stappler::thread::operator!=(TaskQueue::Flags const&,std::underlying_type<TaskQueue::Flags>::type const&)

## BRIEF

## CONTENT

Параметры:
* TaskQueue::Flags const&
* std::underlying_type<TaskQueue::Flags>::type const&

Возвращает:
* bool

# ::stappler::thread::operator!=(std::underlying_type<TaskQueue::Flags>::type const&,TaskQueue::Flags const&)

## BRIEF

## CONTENT

Параметры:
* std::underlying_type<TaskQueue::Flags>::type const&
* TaskQueue::Flags const&

Возвращает:
* bool

# ::stappler::thread::operator~(TaskQueue::Flags const&)

## BRIEF

## CONTENT

Параметры:
* TaskQueue::Flags const&

Возвращает:
* TaskQueue::Flags