Title: SPThreadTask.h


# STAPPLER_THREADS_SPTHREADTASK_H_

## BRIEF

Заголовок класса задачи для выполнения в потоке

## CONTENT

Заголовок класса задачи для выполнения в потоке


# ::stappler::thread::Task

## BRIEF

Класс задачи для выполнения в потоке

## CONTENT

Класс задачи для выполнения в потоке. Задачи используют стандартный инетрфейс памяти, поскольку передача данных между потоками в режиме пулов памяти более сложна.

Задача определяет несколько видов функций:
* Функции подготовки, выполняемые в исходном потоке поле добавления задачи в очередь
* Функции исполнения, выполняемые в рабочем потоке
* Функции завершения, выполняемые снова в исходном потоке

Задача не обязана иметь все эти функции, необходима только как минимум одна функция завершения или исполнения. Задачи без функции завершения не передают результат в исходный поток. Задачи без функции исполнения передаётся на завершение на следующем такте работы очереди (могут быть добавлены из другого потока для передачи управления в исходный).

Задача следует правилу двухэтапной инициализации, требуется вызов одного из вариантов `init` после конструктора. Для упрощения можно создавать задачу, сразу заворачивая её в ссылку: `Rc<thread::Task>::create()`

Базовые классы:
* RefBase<memory::StandartInterface>


# ::stappler::thread::Task::Ref

## BRIEF

Тип для связывания ссылки с задачей

## CONTENT

Доступ: public

Тип для связывания ссылки с задачей. Объект по ссылке не моет быть удалён, пока задача не выполнена.

# ::stappler::thread::Task::PrepareCallback

## BRIEF

Тип функции подготовки

## CONTENT

Доступ: public

Тип функции подготовки. Функция принимает исходное задание и возвращает статус успеха подготовки. Если вернуть false, задача не будет добавлена в очередь, будет вызвана функция завершения с неуспешным статусом

# ::stappler::thread::Task::ExecuteCallback

## BRIEF

Тип функции исполнения

## CONTENT

Доступ: public

Тип функции исполнения. Функция принимает исходное задание и возвращает статус успеха. Статус успеха затем будет передан в функцию завершения.

# ::stappler::thread::Task::CompleteCallback

## BRIEF

Тип функции завершения

## CONTENT

Доступ: public

Тип функции завершения. Функция принимает исходное задание и статус успеха. Если задача не выполнена успешно, она либо не была добавлена в очередь, либо завершилась неуспешно в другом потоке, либо была снята с очереди при её завершении.


# ::stappler::thread::Task::PriorityType

## BRIEF

Тип приоритета для задач

## CONTENT

Доступ: public

Тип приоритета для задач

# ::stappler::thread::Task::Task()

## BRIEF

Конструктор по умолчанию, создаёт пустую задачу

## CONTENT

Доступ: public

Конструктор по умолчанию, создаёт пустую задачу

# ::stappler::thread::Task::~Task()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор


# ::stappler::thread::Task::init(stappler::thread::Task::CompleteCallback const&,stappler::thread::Task::Ref*)

## BRIEF

Инициализирует задачу с функцией завершения

## CONTENT

Доступ: public

Инициализирует задачу с функцией завершения

Параметры:
* stappler::thread::Task::CompleteCallback const&
* stappler::thread::Task::Ref*

Возвращает:
* bool

# ::stappler::thread::Task::init(stappler::thread::Task::CompleteCallback&&,stappler::thread::Task::Ref*)

## BRIEF

Инициализирует задачу с функцией завершения

## CONTENT

Доступ: public

Инициализирует задачу с функцией завершения

Параметры:
* stappler::thread::Task::CompleteCallback&&
* stappler::thread::Task::Ref*

Возвращает:
* bool

# ::stappler::thread::Task::init(stappler::thread::Task::ExecuteCallback const&,stappler::thread::Task::CompleteCallback const&,stappler::thread::Task::Ref*)

## BRIEF

Инициализирует задачу с функциями исполнения и завершения

## CONTENT

Доступ: public

Инициализирует задачу с функциями исполнения и завершения

Параметры:
* stappler::thread::Task::ExecuteCallback const&
* stappler::thread::Task::CompleteCallback const&
* stappler::thread::Task::Ref*

Возвращает:
* bool

# ::stappler::thread::Task::init(stappler::thread::Task::ExecuteCallback&&,stappler::thread::Task::CompleteCallback&&,stappler::thread::Task::Ref*)

## BRIEF

Инициализирует задачу с функциями исполнения и завершения

## CONTENT

Доступ: public

Инициализирует задачу с функциями исполнения и завершения

Параметры:
* stappler::thread::Task::ExecuteCallback&&
* stappler::thread::Task::CompleteCallback&&
* stappler::thread::Task::Ref*

Возвращает:
* bool

# ::stappler::thread::Task::init(stappler::thread::Task::PrepareCallback const&,stappler::thread::Task::ExecuteCallback const&,stappler::thread::Task::CompleteCallback const&,stappler::thread::Task::Ref*)

## BRIEF

Инициализирует задачу с функциями подготовки, исполнения и завершения

## CONTENT

Доступ: public

Инициализирует задачу с функциями подготовки, исполнения и завершения

Параметры:
* stappler::thread::Task::PrepareCallback const&
* stappler::thread::Task::ExecuteCallback const&
* stappler::thread::Task::CompleteCallback const&
* stappler::thread::Task::Ref*

Возвращает:
* bool

# ::stappler::thread::Task::init(stappler::thread::Task::PrepareCallback&&,stappler::thread::Task::ExecuteCallback&&,stappler::thread::Task::CompleteCallback&&,stappler::thread::Task::Ref*)

## BRIEF

Инициализирует задачу с функциями подготовки, исполнения и завершения

## CONTENT

Доступ: public

Инициализирует задачу с функциями подготовки, исполнения и завершения

Параметры:
* stappler::thread::Task::PrepareCallback&&
* stappler::thread::Task::ExecuteCallback&&
* stappler::thread::Task::CompleteCallback&&
* stappler::thread::Task::Ref*

Возвращает:
* bool

# ::stappler::thread::Task::addPrepareCallback(stappler::thread::Task::PrepareCallback const&)

## BRIEF

Добавляет функцию подготовки к задаче

## CONTENT

Доступ: public

Добавляет функцию подготовки к задаче

Параметры:
* stappler::thread::Task::PrepareCallback const&


# ::stappler::thread::Task::addPrepareCallback(stappler::thread::Task::PrepareCallback&&)

## BRIEF

Добавляет функцию подготовки к задаче

## CONTENT

Доступ: public

Добавляет функцию подготовки к задаче

Параметры:
* stappler::thread::Task::PrepareCallback&&


# ::stappler::thread::Task::addExecuteCallback(stappler::thread::Task::ExecuteCallback const&)

## BRIEF

Добавляет функцию исполнения к задаче

## CONTENT

Доступ: public

Добавляет функцию исполнения к задаче

Параметры:
* stappler::thread::Task::ExecuteCallback const&


# ::stappler::thread::Task::addExecuteCallback(stappler::thread::Task::ExecuteCallback&&)

## BRIEF

Добавляет функцию исполнения к задаче

## CONTENT

Доступ: public

Добавляет функцию исполнения к задаче

Параметры:
* stappler::thread::Task::ExecuteCallback&&


# ::stappler::thread::Task::addCompleteCallback(stappler::thread::Task::CompleteCallback const&)

## BRIEF

Добавляет функцию завершения к задаче

## CONTENT

Доступ: public

Добавляет функцию завершения к задаче

Параметры:
* stappler::thread::Task::CompleteCallback const&


# ::stappler::thread::Task::addCompleteCallback(stappler::thread::Task::CompleteCallback&&)

## BRIEF

Добавляет функцию завершения к задаче

## CONTENT

Доступ: public

Добавляет функцию завершения к задаче

Параметры:
* stappler::thread::Task::CompleteCallback&&


# ::stappler::thread::Task::setTag(int)

## BRIEF

Устанавливает тег для задачи

## CONTENT

Доступ: public

Устанавливает тег для задачи. Это простое сигнальное значение для использования пользователем.

Параметры:
* int


# ::stappler::thread::Task::getTag() const

## BRIEF

Получает тег задачи

## CONTENT

Доступ: public

Получает тег задачи

Возвращает:
* int

# ::stappler::thread::Task::setPriority(PriorityType::Type)

## BRIEF

Устанавливает приоритет задачи.

## CONTENT

Доступ: public

Устанавливает приоритет задачи. Приоритет должен быть установлен до добавления задачи в очередь (то есть, до завершения всех вызовов подготовки). Задачи с более высоким приоритетом исполняются раньше.

Параметры:
* PriorityType::Type


# ::stappler::thread::Task::getPriority() const

## BRIEF

Возвращает приоритет задачи

## CONTENT

Доступ: public

Возвращает приоритет задачи

Возвращает:
* PriorityType

# ::stappler::thread::Task::addRef(stappler::thread::Task::Ref*)

## BRIEF

Добавляет хранимую ссылку для задачи

## CONTENT

Доступ: public

Добавляет хранимую ссылку для задачи

Параметры:
* stappler::thread::Task::Ref*


# ::stappler::thread::Task::setSuccessful(bool)

## BRIEF

Устанавливает статус успешности завершения задачи явно

## CONTENT

Доступ: public

Устанавливает статус успешности завершения задачи явно. Статус может быть установлен неявно возвратом из функций исполнения или подготовки.

Параметры:
* bool


# ::stappler::thread::Task::isSuccessful() const

## BRIEF

Возвращает текущий статус завершения

## CONTENT

Доступ: public

Возвращает текущий статус завершения

Возвращает:
* bool

# ::stappler::thread::Task::getPrepareTasks() const

## BRIEF

Возвращает список функций подготовки исполнения

## CONTENT

Доступ: public

Возвращает список функций подготовки исполнения

Возвращает:
* std::vector<PrepareCallback> const&

# ::stappler::thread::Task::getExecuteTasks() const

## BRIEF

Возвращает список функций исполнения

## CONTENT

Доступ: public

Возвращает список функций исполнения

Возвращает:
* std::vector<ExecuteCallback> const&

# ::stappler::thread::Task::getCompleteTasks() const

## BRIEF

Возвращает список функций завершения

## CONTENT

Доступ: public

Возвращает список функций завершения

Возвращает:
* std::vector<CompleteCallback> const&

# ::stappler::thread::Task::prepare() const

## BRIEF

Выполняет подготовку задания

## CONTENT

Доступ: public

Выполняет подготовку задания. Вызывает все функции подготовки по очереди, пока одна из них не вернёт false или все они не будут исполнены.

Возвращает:
* bool - статус успеха подготовки

# ::stappler::thread::Task::execute()

## BRIEF

Выполняет задание

## CONTENT

Доступ: public

Выполняет задание. Вызывает все функции исполнения по очереди, пока одна из них не вернёт false или все они не будут исполнены.

Возвращает:
* bool - статус успеха подготовки

# ::stappler::thread::Task::onComplete()

## BRIEF

Вызывает все функции завершения с текущим статусом успеха

## CONTENT

Доступ: public

Вызывает все функции завершения с текущим статусом успеха


# ::stappler::thread::Task::_isSuccessful

## BRIEF

Статус успеха

## CONTENT

Доступ: protected

Статус успеха

Тип: bool


# ::stappler::thread::Task::_tag

## BRIEF

Тег задачи

## CONTENT

Доступ: protected

Тег задачи

Тип: int


# ::stappler::thread::Task::_priority

## BRIEF

Приоритет задачи

## CONTENT

Доступ: protected

Приоритет задачи

Тип: PriorityType


# ::stappler::thread::Task::_refs

## BRIEF

Связанные с задачей ссылки

## CONTENT

Доступ: protected

Связанные с задачей ссылки. Объекты по ним храняться до завершения задачи

Тип: std::vector<Rc<Ref>>


# ::stappler::thread::Task::_prepare

## BRIEF

Список функций подготовки

## CONTENT

Доступ: protected

Список функций подготовки

Тип: std::vector<PrepareCallback>


# ::stappler::thread::Task::_execute

## BRIEF

Список функций исполнения

## CONTENT

Доступ: protected

Список функций исполнения

Тип: std::vector<ExecuteCallback>


# ::stappler::thread::Task::_complete

## BRIEF

Список функций завершения

## CONTENT

Доступ: protected

Список функций завершения

Тип: std::vector<CompleteCallback>
