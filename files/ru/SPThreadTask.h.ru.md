Title: SPThreadTask.h


# MODULES_THREADS_SPTHREADTASK_H_

## BRIEF

## CONTENT


# ::stappler::thread::Task

## BRIEF

## CONTENT

Базовые классы:
* RefBase<memory::StandartInterface>


# ::stappler::thread::Task::Ref

## BRIEF

## CONTENT

Доступ: public


# ::stappler::thread::Task::PrepareCallback

## BRIEF

## CONTENT

Доступ: public


# ::stappler::thread::Task::ExecuteCallback

## BRIEF

## CONTENT

Доступ: public


# ::stappler::thread::Task::CompleteCallback

## BRIEF

## CONTENT

Доступ: public


# ::stappler::thread::Task::PriorityType

## BRIEF

## CONTENT

Доступ: public


# ::stappler::thread::Task::Task()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::thread::Task::~Task()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::thread::Task::init(stappler::thread::Task::CompleteCallback const&,stappler::thread::Task::Ref*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::thread::Task::CompleteCallback const&
* stappler::thread::Task::Ref*

Возвращает:
* bool

# ::stappler::thread::Task::init(stappler::thread::Task::CompleteCallback&&,stappler::thread::Task::Ref*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::thread::Task::CompleteCallback&&
* stappler::thread::Task::Ref*

Возвращает:
* bool

# ::stappler::thread::Task::init(stappler::thread::Task::ExecuteCallback const&,stappler::thread::Task::CompleteCallback const&,stappler::thread::Task::Ref*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::thread::Task::ExecuteCallback const&
* stappler::thread::Task::CompleteCallback const&
* stappler::thread::Task::Ref*

Возвращает:
* bool

# ::stappler::thread::Task::init(stappler::thread::Task::ExecuteCallback&&,stappler::thread::Task::CompleteCallback&&,stappler::thread::Task::Ref*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::thread::Task::ExecuteCallback&&
* stappler::thread::Task::CompleteCallback&&
* stappler::thread::Task::Ref*

Возвращает:
* bool

# ::stappler::thread::Task::init(stappler::thread::Task::PrepareCallback const&,stappler::thread::Task::ExecuteCallback const&,stappler::thread::Task::CompleteCallback const&,stappler::thread::Task::Ref*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::thread::Task::PrepareCallback const&
* stappler::thread::Task::ExecuteCallback const&
* stappler::thread::Task::CompleteCallback const&
* stappler::thread::Task::Ref*

Возвращает:
* bool

# ::stappler::thread::Task::init(stappler::thread::Task::PrepareCallback&&,stappler::thread::Task::ExecuteCallback&&,stappler::thread::Task::CompleteCallback&&,stappler::thread::Task::Ref*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::thread::Task::PrepareCallback&&
* stappler::thread::Task::ExecuteCallback&&
* stappler::thread::Task::CompleteCallback&&
* stappler::thread::Task::Ref*

Возвращает:
* bool

# ::stappler::thread::Task::addPrepareCallback(stappler::thread::Task::PrepareCallback const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::thread::Task::PrepareCallback const&


# ::stappler::thread::Task::addPrepareCallback(stappler::thread::Task::PrepareCallback&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::thread::Task::PrepareCallback&&


# ::stappler::thread::Task::addExecuteCallback(stappler::thread::Task::ExecuteCallback const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::thread::Task::ExecuteCallback const&


# ::stappler::thread::Task::addExecuteCallback(stappler::thread::Task::ExecuteCallback&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::thread::Task::ExecuteCallback&&


# ::stappler::thread::Task::addCompleteCallback(stappler::thread::Task::CompleteCallback const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::thread::Task::CompleteCallback const&


# ::stappler::thread::Task::addCompleteCallback(stappler::thread::Task::CompleteCallback&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::thread::Task::CompleteCallback&&


# ::stappler::thread::Task::setTag(int)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* int


# ::stappler::thread::Task::getTag() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* int

# ::stappler::thread::Task::setPriority(PriorityType::Type)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* PriorityType::Type


# ::stappler::thread::Task::getPriority() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* PriorityType

# ::stappler::thread::Task::setTarget(stappler::thread::Task::Ref*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::thread::Task::Ref*


# ::stappler::thread::Task::getTarget() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Ref*

# ::stappler::thread::Task::setSuccessful(bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* bool


# ::stappler::thread::Task::isSuccessful() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::thread::Task::getPrepareTasks() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* std::vector<PrepareCallback> const&

# ::stappler::thread::Task::getExecuteTasks() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* std::vector<ExecuteCallback> const&

# ::stappler::thread::Task::getCompleteTasks() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* std::vector<CompleteCallback> const&

# ::stappler::thread::Task::prepare() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::thread::Task::execute()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::thread::Task::onComplete()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::thread::Task::_isSuccessful

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::thread::Task::_tag

## BRIEF

## CONTENT

Доступ: protected

Тип: int


# ::stappler::thread::Task::_priority

## BRIEF

## CONTENT

Доступ: protected

Тип: PriorityType


# ::stappler::thread::Task::_target

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::thread::Task::Ref>


# ::stappler::thread::Task::_prepare

## BRIEF

## CONTENT

Доступ: protected

Тип: std::vector<PrepareCallback>


# ::stappler::thread::Task::_execute

## BRIEF

## CONTENT

Доступ: protected

Тип: std::vector<ExecuteCallback>


# ::stappler::thread::Task::_complete

## BRIEF

## CONTENT

Доступ: protected

Тип: std::vector<CompleteCallback>
