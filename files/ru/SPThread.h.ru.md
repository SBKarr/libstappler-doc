Title: SPThread.h


# STAPPLER_THREADS_SPTHREAD_H_

## BRIEF

Общий заголовок для использования потоков

## CONTENT

Общий заголовок для использования потоков


# ::stappler::thread::ThreadInfo

## BRIEF

Локальная для потока структура информации о потоке

## CONTENT

Локальная для потока структура информации о потоке


# ::stappler::thread::ThreadInfo::mainThreadId

## BRIEF

Идентификатор главного потока по умолчанию

## CONTENT

Идентификатор главного потока по умолчанию

Тип: uint32_t const


# ::stappler::thread::ThreadInfo::getThreadLocal()

## BRIEF

Получает информацию о текущем потоке

## CONTENT

Получает информацию о текущем потоке

Возвращает:
* stappler::thread::ThreadInfo*

# ::stappler::thread::ThreadInfo::setMainThread()

## BRIEF

Устанавливает текущий поток как главный

## CONTENT

Устанавливает текущий поток как главный. Используется в системах, где главный поток необходимо создать явно


# ::stappler::thread::ThreadInfo::setThreadInfo(uint32_t,uint32_t,stappler::StringView,bool)

## BRIEF

Устанавливает информацию о текущем потоке

## CONTENT

Параметры:
* uint32_t - идентификатор группы потоков
* uint32_t - порядковый номер потока в группе
* stappler::StringView - название потока или группы потоков
* bool - true - поток создан внутри SDK


# ::stappler::thread::ThreadInfo::setThreadInfo(stappler::StringView)

## BRIEF

Устанавливает имя текущего потока

## CONTENT

Устанавливает имя текущего потока

Параметры:
* stappler::StringView


# ::stappler::thread::ThreadInfo::threadId

## BRIEF

Идентификатор текущего потока или группы потоков

## CONTENT

Идентификатор текущего потока или группы потоков

Тип: uint32_t


# ::stappler::thread::ThreadInfo::workerId

## BRIEF

Порядковый номер потока внутри группы

## CONTENT

Порядковый номер потока внутри группы

Тип: uint32_t


# ::stappler::thread::ThreadInfo::name

## BRIEF

Имя потока

## CONTENT

Имя потока

Тип: stappler::StringView


# ::stappler::thread::ThreadInfo::managed

## BRIEF

Флаг, управляет ли SDK временем жизни потока

## CONTENT

Флаг, управляет ли SDK временем жизни потока

Тип: bool


# ::stappler::thread::ThreadInfo::detouched

## BRIEF

Флаг отсоединённого потока

## CONTENT

Флаг отсоединённого потока

Тип: bool


# ::stappler::thread::ThreadInterface<typename>

## BRIEF

Интерфейс для запуска потоков внутри SDK

## CONTENT

Интерфейс для запуска потоков внутри SDK. Методы этого типа перегружаются для работы в новом потоке.

Рабочий цикл потока:
* `threadInit()`
* вызов `worker` пока не будет получено false
* `threadDispose()`

Параметры шаблона:
* typename Interface

Базовые классы:
* RefBase<Interface>


# ::stappler::thread::ThreadInterface<typename>::~ThreadInterface()

## BRIEF

Виртуальный деструктор для возможности перегрузки

## CONTENT

Доступ: public

Виртуальный деструктор для возможности перегрузки


# ::stappler::thread::ThreadInterface<typename>::getOwner()

## BRIEF

Возвращает непрозрачный указатель хозяина текущего потока

## CONTENT

Доступ: public

Возвращает непрозрачный указатель хозяина текущего потока

Возвращает:
* void const*

# ::stappler::thread::ThreadInterface<typename>::workerThread(ThreadInterface<Interface>*,void const*)

## BRIEF

Рабочая функция для нового потока SDK

## CONTENT

Доступ: public

Рабочая функция для нового потока SDK

Параметры:
* ThreadInterface<Interface>* - интерфейс для нового потока
* void const* - хозяин нового потока


# ::stappler::thread::ThreadInterface<typename>::threadInit()

## BRIEF

Функция для перегрузки, вызываемя при запуске потока

## CONTENT

Доступ: public

Функция для перегрузки, вызываемя при запуске потока


# ::stappler::thread::ThreadInterface<typename>::threadDispose()

## BRIEF

Функция для перегрузки, вызываемя при завершнии потока

## CONTENT

Доступ: public

Функция для перегрузки, вызываемя при завершнии потока


# ::stappler::thread::ThreadInterface<typename>::worker()

## BRIEF

Функция для перегрузки с основным циклом потока

## CONTENT

Доступ: public

Функция для перегрузки с основным циклом потока. Поток будет выхывать эту функцию, пока она не вернёт false.

Возвращает:
* bool