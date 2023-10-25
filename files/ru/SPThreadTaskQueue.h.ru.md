Title: SPThreadTaskQueue.h


# STAPPLER_THREADS_SPTHREADTASKQUEUE_H_

## BRIEF

Заголовок очереди для исполнения задач в потоках-исполнителях

## CONTENT

Заголовок очереди для исполнения задач в потоках-исполнителях


# ::stappler::thread::TaskQueue

## BRIEF

Очередь с приоритетами для исполнения задач в других потоках

## CONTENT

Очередь с приоритетами для исполнения задач в других потоках. Используется в качестве пула потоков, для которых распределяются задачи в порядке убывания приоритетов. Некоторые функции очереди опциональны и включаются флагами. Как правило. чем меньше набор функций, тем быстрее работает очередь.

Базовые классы:
* RefBase<memory::StandartInterface>


# ::stappler::thread::TaskQueue::Ref

## BRIEF

Тип хранимой ссылки для очереди

## CONTENT

Доступ: public

Тип хранимой ссылки для очереди


# ::stappler::thread::TaskQueue::TaskMap

## BRIEF

Структура для наначения потокам индивидуальных задач

## CONTENT

Доступ: public

Структура для наначения потокам индивидуальных задач


# ::stappler::thread::TaskQueue::Flags

## BRIEF

Функциональные флаги очереди

## CONTENT

Доступ: public

Значения:
* None
* LocalQueue - создаёт локальную очередь для каждого потока, позволяя назначать им индивидуальные выделенные задания
* Cancelable - возможность явно завершить очередь, не дожидаясь завершения всех потоков
* Waitable - возможность ожидать завершения всех потоков


# ::stappler::thread::TaskQueue::getOwner()

## BRIEF

Возвращает владеющую очередь потока

## CONTENT

Доступ: public

Возвращает владеющую очередь потока. Верно только для потоков, создаваемых очередью

Возвращает:
* stappler::thread::TaskQueue const*

# ::stappler::thread::TaskQueue::TaskQueue(stappler::StringView,std::function<void ()>&&)

## BRIEF

Создаёт именованную очередь

## CONTENT

Доступ: public

Создаёт именованную очередь

Параметры:
* stappler::StringView - название очереди
* std::function<void ()>&& - функция, вызываемая для пробуждения основного потока очереди, если необходима обработка (например, завершённых заданий)


# ::stappler::thread::TaskQueue::~TaskQueue()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор

# ::stappler::thread::TaskQueue::finalize()

## BRIEF

Передаёт потокам очереди, что она завершила свою работу

## CONTENT

Доступ: public

Передаёт потокам очереди, что она завершила свою работу


# ::stappler::thread::TaskQueue::performAsync(Rc<stappler::thread::Task>&&)

## BRIEF

Выполняет задание асинхронно в выделенном потоке

## CONTENT

Доступ: public

Выполняет задание асинхронно в выделенном потоке. Не использует свои потоки, распределяет новый, который будет завершён после выполнения задачи.

Параметры:
* Rc<stappler::thread::Task>&&


# ::stappler::thread::TaskQueue::perform(Rc<stappler::thread::Task>&&,bool)

## BRIEF

Выполняет задачу в очереди

## CONTENT

Доступ: public

Выполняет задачу в очереди. Если потоки не запущены - задача будет дожидаться запуска потоков. Вызывается из любого потока.

Параметры:
* Rc<stappler::thread::Task>&&
* bool - true - добавить задачу перед задачами с аналогичным приоритетом, false - после таких


# ::stappler::thread::TaskQueue::perform(std::function<void ()>&&,stappler::thread::TaskQueue::Ref*,bool)

## BRIEF

Выполняет функцию в очереди

## CONTENT

Доступ: public

Создаёт задачу для переданной функции и выполняет её в качестве исполняемой функции задачи в другом потоке. Если потоки не запущены - задача будет дожидаться запуска потоков. Вызывается из любого потока.

Параметры:
* std::function<void ()>&&
* stappler::thread::TaskQueue::Ref* - ссылка, которая будет привязана к задаче
* bool - true - добавить задачу перед задачами с нулевым приоритетом, false - после таких


# ::stappler::thread::TaskQueue::perform(stappler::thread::TaskQueue::TaskMap&&)

## BRIEF

Назначает индивидуальные задачи потокам

## CONTENT

Доступ: public

Назначает индивидуальные задачи потокам. Индекс в таблице соотвествует порядковому номеру потока. Должен быть влючен флаг LocalQueue при создании потоков очереди.

Параметры:
* stappler::thread::TaskQueue::TaskMap&&

Возвращает:
* bool - true - успешное исполнение

# ::stappler::thread::TaskQueue::update(uint32_t*)

## BRIEF

Обновляет статус текущих задач в главном потоке

## CONTENT

Доступ: public

Обновляет статус текущих задач в главном потоке. Должно вызываться только в главном потоке очереди. Завершает задачи, переданные в главный поток после исполнения.

Параметры:
* uint32_t* - если передан не нудевой указатель - записывает число выполненных задач за вызов.


# ::stappler::thread::TaskQueue::onMainThread(Rc<stappler::thread::Task>&&)

## BRIEF

Выполняет задачу в основном потоке очереди

## CONTENT

Доступ: public

Выполняет задачу в основном потоке очереди. Вызывается из любого потока. Задача игнорирует функции исполнения и подготовки, и сразу вызывает функции завершения в основном потоке.

Параметры:
* Rc<stappler::thread::Task>&&


# ::stappler::thread::TaskQueue::onMainThread(std::function<void ()>&&,stappler::thread::TaskQueue::Ref*)

## BRIEF

Выполняет функцию в основном потоке

## CONTENT

Доступ: public

Выполняет функцию в основном потоке. Вызывается из любого потока.

Параметры:
* std::function<void ()>&&
* stappler::thread::TaskQueue::Ref* - связанная с функцией ссылка


# ::stappler::thread::TaskQueue::spawnWorkers(stappler::thread::TaskQueue::Flags)

## BRIEF

Запускает рабочие потоки очереди с заданными флагами

## CONTENT

Доступ: public

Запускает рабочие потоки очереди с заданными флагами. Запускает `std::thread::hardware_concurrency()` потоков. Использует имя текущей очереди и идентификатор главного потока при запуске.

Параметры:
* stappler::thread::TaskQueue::Flags

Возвращает:
* bool - true в случае успеха

# ::stappler::thread::TaskQueue::spawnWorkers(stappler::thread::TaskQueue::Flags,uint32_t,uint16_t,stappler::StringView)

## BRIEF

Запускает рабочие потоки очереди с заданными флагами

## CONTENT

Доступ: public

Запускает рабочие потоки очереди с заданными флагами

Параметры:
* stappler::thread::TaskQueue::Flags - функциональные флаги очереди
* uint32_t - идентификатор группы потоков
* uint16_t - число создаваемых потоков
* stappler::StringView - имя группы потоков. Испольуется имя очереди, если не задано

Возвращает:
* bool - true в случае успеха

# ::stappler::thread::TaskQueue::cancelWorkers()

## BRIEF

Передаёт исполняющим потокам сигнал для их завершения

## CONTENT

Доступ: public

Передаёт исполняющим потокам сигнал для их завершения. Не дожидается самого завершения.

Возвращает:
* bool - true если потоки были запущены и сигнал передан

# ::stappler::thread::TaskQueue::performAll(stappler::thread::TaskQueue::Flags)

## BRIEF

Выполняет все назначенные заранее задачи

## CONTENT

Доступ: public

Выполняет все назначенные заранее задачи. Если потоки не были запущены - запускает их с заданными флагами и флагом Cancelable с параметрами по умолчанию. Если флаг Cancelable не указан, завершается. Иначе, дожидается выполнения всех задач и завершает потоки.

Параметры:
* stappler::thread::TaskQueue::Flags


# ::stappler::thread::TaskQueue::waitForAll(stappler::TimeInterval)

## BRIEF

Дожидается выполнения всех задач, блокируя основной поток.

## CONTENT

Доступ: public

Дожидается выполнения всех задач, блокируя основной поток. В том числе, тех, что добавляются в очередь во время исполнения текущих задач. Требует флага `Cancelable`.

Параметры:
* stappler::TimeInterval

Возвращает:
* bool - true если все задачи в очереди завершены и рабочие потоки простаивают.

# ::stappler::thread::TaskQueue::wait(uint32_t*)

## BRIEF

Блокирует основной поток, дожидаясь исполнения любой задачи

## CONTENT

Доступ: public

Блокирует основной поток, дожидаясь исполнения любой задачи. Требует флага `Waitable`. Если задачи не были назначены, может ждать бесконечно. Прервать ожидание можно вызовом `onMainThread`.

Параметры:
* uint32_t* - если передан не нулевой указатель, возвращает число исполненных задач

Возвращает:
* bool - true при успешном исполнении

# ::stappler::thread::TaskQueue::wait(stappler::TimeInterval,uint32_t*)

## BRIEF

Блокирует основной поток, дожидаясь исполнения любой задачи или истечения временного интервала

## CONTENT

Доступ: public

Блокирует основной поток, дожидаясь исполнения любой задачи или истечения временного интервала. Требует флага `Waitable`. Узнать о завершении по таймеру можно, если в число выполненных задач будет записано 0. Прервать ожидание можно вызовом `onMainThread`.

Параметры:
* stappler::TimeInterval - интервал времени для ожидания
* uint32_t* - если передан не нулевой указатель, возвращает число исполненных задач

Возвращает:
* bool - true при успешном исполнении

# ::stappler::thread::TaskQueue::lock()

## BRIEF

Блокирует потокозависимые функции исполнения

## CONTENT

Доступ: public

Блокирует потокозависимые функции исполнения. В частности, функции получения задач другими потоками и функции возврата исполненных задач. Не делает ничего, если потоки не были созданы. Функции должны быть затем разблокированы с помощью `unlock`. Можно использовать вместе с `std::unique_lock`.

# ::stappler::thread::TaskQueue::unlock()

## BRIEF

Разблокирует потокозависимые функции исполнения

## CONTENT

Доступ: public

Разблокирует потокозависимые функции исполнения. Не делает ничего, если потоки не были созданы.

# ::stappler::thread::TaskQueue::getName() const

## BRIEF

Возвращает имя очереди

## CONTENT

Доступ: public

Возвращает имя очереди

Возвращает:
* stappler::StringView

# ::stappler::thread::TaskQueue::getThreadIds() const

## BRIEF

Возвращает список стандартных идентификаторов рабочих потоков

## CONTENT

Доступ: public

Возвращает список стандартных идентификаторов рабочих потоков

Возвращает:
* std::vector<std::thread::id>

# ::stappler::thread::TaskQueue::getOutputCounter() const

## BRIEF

Возвращает число заданий, ожидающих действия от основного потока

## CONTENT

Доступ: public

Возвращает число заданий, ожидающих действия от основного потока (например, `update`)

Возвращает:
* size_t

# ::stappler::thread::TaskQueue::getThreadCount() const

## BRIEF

Возвращает число запущенных потоков

## CONTENT

Доступ: public

Возвращает число запущенных потоков

Возвращает:
* uint16_t

# ::stappler::thread::TaskQueue::popTask(uint32_t)

## BRIEF

Забирает следующее задание для рабочего потока с идентификатором

## CONTENT

Доступ: protected

Забирает следующее задание для рабочего потока с идентификатором

Параметры:
* uint32_t

Возвращает:
* Rc<stappler::thread::Task>

# ::stappler::thread::TaskQueue::onMainThreadWorker(Rc<stappler::thread::Task>&&)

## BRIEF

Выполняет задачу из рабочего потока в основном

## CONTENT

Доступ: protected

Выполняет задачу из рабочего потока в основном

Параметры:
* Rc<stappler::thread::Task>&&


# ::stappler::thread::TaskQueue::_context

## BRIEF

Контекст для работы с потоками. Если потоки не созданы - nullptr.

## CONTENT

Доступ: protected

Контекст для работы с потоками. Если потоки не созданы - nullptr.

Тип: stappler::thread::TaskQueue::WorkerContext*


# ::stappler::thread::TaskQueue::_inputMutexQueue

## BRIEF

Мутекс для использования в очереди с приоритетами

## CONTENT

Доступ: protected

Мутекс для использования в очереди с приоритетами

Тип: std::mutex


# ::stappler::thread::TaskQueue::_inputMutexFree

## BRIEF

Мутекс для использования в очереди с приоритетами для защиты распределения памяти

## CONTENT

Доступ: protected

Мутекс для использования в очереди с приоритетами для защиты распределения памяти

Тип: std::mutex


# ::stappler::thread::TaskQueue::_inputQueue

## BRIEF

Очередь задач с приоритетами

## CONTENT

Доступ: protected

Очередь задач с приоритетами

Тип: memory::PriorityQueue<Rc<Task>>


# ::stappler::thread::TaskQueue::_outputMutex

## BRIEF

Мутекс для защиты списка завершённых задач

## CONTENT

Доступ: protected

Мутекс для защиты списка завершённых задач

Тип: std::mutex


# ::stappler::thread::TaskQueue::_outputQueue

## BRIEF

Список завершённых задач

## CONTENT

Доступ: protected

Список завершённых задач

Тип: std::vector<Rc<Task>>


# ::stappler::thread::TaskQueue::_outputCallbacks

## BRIEF

Список функций, ожидающих выполнения в основном потоке

## CONTENT

Доступ: protected

Список функций, ожидающих выполнения в основном потоке

Тип: std::vector<Pair<std::function<void ()>, Rc<Ref>>>


# ::stappler::thread::TaskQueue::_outputCounter

## BRIEF

Счётчик ожидающих в основном потоке задач

## CONTENT

Доступ: protected

Счётчик ожидающих в основном потоке задач. Доступ не требует блокирования.

Тип: std::atomic<size_t>


# ::stappler::thread::TaskQueue::_tasksCounter

## BRIEF

Счётчик числа задач на исполнении

## CONTENT

Доступ: protected

Счётчик числа задач на исполнении

Тип: std::atomic<size_t>


# ::stappler::thread::TaskQueue::_name

## BRIEF

Имя очереди

## CONTENT

Доступ: protected

Имя очереди

Тип: stappler::StringView


# ::stappler::thread::TaskQueue::_wakeup

## BRIEF

Функция для пробуждения основного потока

## CONTENT

Доступ: protected

Функция для пробуждения основного потока

Тип: std::function<void ()>


# ::stappler::thread::operator|(TaskQueue::Flags const&,TaskQueue::Flags const&)

## BRIEF

Автоматически созданнй оператор битовых флагов

## CONTENT

Автоматически созданнй оператор битовых флагов

Параметры:
* TaskQueue::Flags const&
* TaskQueue::Flags const&

Возвращает:
* TaskQueue::Flags

# ::stappler::thread::operator&(TaskQueue::Flags const&,TaskQueue::Flags const&)

## BRIEF

Автоматически созданнй оператор битовых флагов

## CONTENT

Автоматически созданнй оператор битовых флагов

Параметры:
* TaskQueue::Flags const&
* TaskQueue::Flags const&

Возвращает:
* TaskQueue::Flags

# ::stappler::thread::operator^(TaskQueue::Flags const&,TaskQueue::Flags const&)

## BRIEF

Автоматически созданнй оператор битовых флагов

## CONTENT

Автоматически созданнй оператор битовых флагов

Параметры:
* TaskQueue::Flags const&
* TaskQueue::Flags const&

Возвращает:
* TaskQueue::Flags

# ::stappler::thread::operator|=(TaskQueue::Flags&,TaskQueue::Flags const&)

## BRIEF

Автоматически созданнй оператор битовых флагов

## CONTENT

Автоматически созданнй оператор битовых флагов

Параметры:
* TaskQueue::Flags&
* TaskQueue::Flags const&

Возвращает:
* TaskQueue::Flags&

# ::stappler::thread::operator&=(TaskQueue::Flags&,TaskQueue::Flags const&)

## BRIEF

Автоматически созданнй оператор битовых флагов

## CONTENT

Автоматически созданнй оператор битовых флагов

Параметры:
* TaskQueue::Flags&
* TaskQueue::Flags const&

Возвращает:
* TaskQueue::Flags&

# ::stappler::thread::operator^=(TaskQueue::Flags&,TaskQueue::Flags const&)

## BRIEF

Автоматически созданнй оператор битовых флагов

## CONTENT

Автоматически созданнй оператор битовых флагов

Параметры:
* TaskQueue::Flags&
* TaskQueue::Flags const&

Возвращает:
* TaskQueue::Flags&

# ::stappler::thread::operator==(TaskQueue::Flags const&,std::underlying_type<TaskQueue::Flags>::type const&)

## BRIEF

Автоматически созданнй оператор битовых флагов

## CONTENT

Автоматически созданнй оператор битовых флагов

Параметры:
* TaskQueue::Flags const&
* std::underlying_type<TaskQueue::Flags>::type const&

Возвращает:
* bool

# ::stappler::thread::operator==(std::underlying_type<TaskQueue::Flags>::type const&,TaskQueue::Flags const&)

## BRIEF

Автоматически созданнй оператор битовых флагов

## CONTENT

Автоматически созданнй оператор битовых флагов

Параметры:
* std::underlying_type<TaskQueue::Flags>::type const&
* TaskQueue::Flags const&

Возвращает:
* bool

# ::stappler::thread::operator!=(TaskQueue::Flags const&,std::underlying_type<TaskQueue::Flags>::type const&)

## BRIEF

Автоматически созданнй оператор битовых флагов

## CONTENT

Автоматически созданнй оператор битовых флагов

Параметры:
* TaskQueue::Flags const&
* std::underlying_type<TaskQueue::Flags>::type const&

Возвращает:
* bool

# ::stappler::thread::operator!=(std::underlying_type<TaskQueue::Flags>::type const&,TaskQueue::Flags const&)

## BRIEF

Автоматически созданнй оператор битовых флагов

## CONTENT

Автоматически созданнй оператор битовых флагов

Параметры:
* std::underlying_type<TaskQueue::Flags>::type const&
* TaskQueue::Flags const&

Возвращает:
* bool

# ::stappler::thread::operator~(TaskQueue::Flags const&)

## BRIEF

Автоматически созданнй оператор битовых флагов

## CONTENT

Автоматически созданнй оператор битовых флагов

Параметры:
* TaskQueue::Flags const&

Возвращает:
* TaskQueue::Flags
