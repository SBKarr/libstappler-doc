Title: SPThread.h


# MODULES_THREADS_SPTHREAD_H_

## BRIEF

## CONTENT


# ::stappler::thread::ThreadInfo

## BRIEF

## CONTENT


# ::stappler::thread::ThreadInfo::mainThreadId

## BRIEF

## CONTENT

Тип: uint32_t const


# ::stappler::thread::ThreadInfo::getThreadLocal()

## BRIEF

## CONTENT

Возвращает:
* stappler::thread::ThreadInfo*

# ::stappler::thread::ThreadInfo::setMainThread()

## BRIEF

## CONTENT


# ::stappler::thread::ThreadInfo::setThreadInfo(uint32_t,uint32_t,stappler::StringView,bool)

## BRIEF

## CONTENT

Параметры:
* uint32_t
* uint32_t
* stappler::StringView
* bool


# ::stappler::thread::ThreadInfo::setThreadInfo(stappler::StringView)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView


# ::stappler::thread::ThreadInfo::threadId

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::thread::ThreadInfo::workerId

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::thread::ThreadInfo::name

## BRIEF

## CONTENT

Тип: stappler::StringView


# ::stappler::thread::ThreadInfo::managed

## BRIEF

## CONTENT

Тип: bool


# ::stappler::thread::ThreadInfo::detouched

## BRIEF

## CONTENT

Тип: bool


# ::stappler::thread::ThreadInterface<typename>

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface

Базовые классы:
* RefBase<Interface>


# ::stappler::thread::ThreadInterface<typename>::~ThreadInterface()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::thread::ThreadInterface<typename>::getOwner()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* void const*

# ::stappler::thread::ThreadInterface<typename>::workerThread(ThreadInterface<Interface>*,void const*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* ThreadInterface<Interface>*
* void const*


# ::stappler::thread::ThreadInterface<typename>::threadInit()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::thread::ThreadInterface<typename>::threadDispose()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::thread::ThreadInterface<typename>::worker()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool