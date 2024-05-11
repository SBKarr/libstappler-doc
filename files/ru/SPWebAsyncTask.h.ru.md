Title: SPWebAsyncTask.h


# EXTRA_WEBSERVER_WEBSERVER_UTILS_SPWEBASYNCTASK_H_

## BRIEF

Заголовок асинхронных задач вебсервера

## CONTENT

Заголовок асинхронных задач вебсервера

# ::stappler::web::AsyncTaskGroup

## BRIEF

Класс для группировки асинхронных задач

## CONTENT

Класс для группировки асинхронных задач. Позволяет ожидать выполнения всей группы задач целиком.

Базовые классы:
* AllocBase


# ::stappler::web::AsyncTaskGroup::getCurrent()

## BRIEF

Возвращает текущую группу из контекста выполняемой задачи

## CONTENT

Доступ: public

Возвращает текущую группу из контекста выполняемой задачи

Возвращает:
* stappler::web::AsyncTaskGroup*

# ::stappler::web::AsyncTaskGroup::AsyncTaskGroup()

## BRIEF

Конструктор

## CONTENT

Доступ: public

Конструктор

# ::stappler::web::AsyncTaskGroup::AsyncTaskGroup(stappler::web::Host const&)

## BRIEF

Создаёт новую группу задач для хоста

## CONTENT

Доступ: public

Создаёт новую группу задач для хоста

Параметры:
* stappler::web::Host const&


# ::stappler::web::AsyncTaskGroup::AsyncTaskGroup(stappler::web::Host const&,std::function<void ()>&&)

## BRIEF

Создаёт новую группу задач для хоста

## CONTENT

Доступ: public

Создаёт новую группу задач для хоста

Параметры:
* stappler::web::Host const&
* std::function<void ()>&& - функция уведомления о завершении одной из задач


# ::stappler::web::AsyncTaskGroup::onAdded(stappler::web::AsyncTask*)

## BRIEF

Вызывается, когда новыя задача добавляется в группу

## CONTENT

Доступ: public

Вызывается, когда новыя задача добавляется в группу

Параметры:
* stappler::web::AsyncTask*


# ::stappler::web::AsyncTaskGroup::onPerformed(stappler::web::AsyncTask*)

## BRIEF

Вызывается, когда задача выполнена

## CONTENT

Доступ: public

Вызывается, когда задача выполнена

Параметры:
* stappler::web::AsyncTask*


# ::stappler::web::AsyncTaskGroup::update()

## BRIEF

Обновляет группу, завершая задачи, выполненые в других потоках

## CONTENT

Доступ: public

Обновляет группу, завершая задачи, выполненые в других потоках

# ::stappler::web::AsyncTaskGroup::waitForAll()

## BRIEF

Дожидается выполнения всех задач группы

## CONTENT

Доступ: public

Дожидается выполнения всех задач группы


# ::stappler::web::AsyncTaskGroup::perform(Callback<void (stappler::web::AsyncTask &)> const&)

## BRIEF

Добавляет задачу в группу и выполняет её

## CONTENT

Доступ: public

Добавляет задачу в группу и выполняет её. Функция вызывается с вновь созданной задачей, в ней пользователь назнначает задаче полезную нагрузу. После чего задача вылняетс асинронно

Параметры:
* Callback<void (stappler::web::AsyncTask &)> const& - вынкция, получающая вновь созданную задачу

Возвращает:
* bool

# ::stappler::web::AsyncTaskGroup::getCounters() const

## BRIEF

Возвращает счётчик добавленных и выполненных задач

## CONTENT

Доступ: public

Возвращает счётчик добавленных и выполненных задач

Возвращает:
* Pair<size_t, size_t>

# ::stappler::web::AsyncTaskGroup::getHost() const

## BRIEF

Возвращает хост, к которому относятся задачи

## CONTENT

Доступ: public

Возвращает хост, к которому относятся задачи

Возвращает:
* stappler::web::Host

# ::stappler::web::AsyncTaskGroup::_lastUpdate

## BRIEF

Время последнего обновления

## CONTENT

Доступ: protected

Время последнего обновления

Тип: stappler::Time


# ::stappler::web::AsyncTaskGroup::_threadId

## BRIEF

Идентификатор основного потока задачи

## CONTENT

Доступ: protected

Идентификатор основного потока задачи

Тип: std::thread::id


# ::stappler::web::AsyncTaskGroup::_mutex

## BRIEF

Мутекс добавления задач

## CONTENT

Доступ: protected

Мутекс добавления задач

Тип: std::mutex


# ::stappler::web::AsyncTaskGroup::_condMutex

## BRIEF

Мутекс ожидания выполнения задач

## CONTENT

Доступ: protected

Мутекс ожидания выполнения задач

Тип: std::mutex


# ::stappler::web::AsyncTaskGroup::_condition

## BRIEF

Условие выполнения задач

## CONTENT

Доступ: protected

Условие выполнения задач

Тип: std::condition_variable


# ::stappler::web::AsyncTaskGroup::_queue

## BRIEF

Очередь выполненных задач

## CONTENT

Доступ: protected

Очередь выполненных задач

Тип: std::vector<AsyncTask *>


# ::stappler::web::AsyncTaskGroup::_added

## BRIEF

Счётчик добавленных задач

## CONTENT

Доступ: protected

Счётчик добавленных задач

Тип: std::atomic<size_t>


# ::stappler::web::AsyncTaskGroup::_completed

## BRIEF

Счётчик выполненных задач

## CONTENT

Доступ: protected

Счётчик выполненных задач

Тип: std::atomic<size_t>


# ::stappler::web::AsyncTaskGroup::_host

## BRIEF

Хост

## CONTENT

Доступ: protected

Хост

Тип: stappler::web::Host


# ::stappler::web::AsyncTaskGroup::_notifyFn

## BRIEF

Функция уведомления о выполнении задачи

## CONTENT

Доступ: protected

Функция уведомления о выполнении задачи

Тип: std::function<void ()>


# ::stappler::web::AsyncTask

## BRIEF

Класс асинхронной задачи

## CONTENT

Класс асинхронной задачи

Базовые классы:
* AllocBase


# ::stappler::web::AsyncTask::PriorityLowest

## BRIEF

Минимальный приоритет

## CONTENT

Доступ: public

Минимальный приоритет

Тип: uint8_t const


# ::stappler::web::AsyncTask::PriorityLow

## BRIEF

Низкий приоритет

## CONTENT

Доступ: public

Низкий приоритет

Тип: uint8_t const


# ::stappler::web::AsyncTask::PriorityNormal

## BRIEF

Стандартный приоритет

## CONTENT

Доступ: public

Стандартный приоритет

Тип: uint8_t const


# ::stappler::web::AsyncTask::PriorityHigh

## BRIEF

Высокий приоритет

## CONTENT

Доступ: public

Высокий приоритет

Тип: uint8_t const


# ::stappler::web::AsyncTask::PriorityHighest

## BRIEF

Наивысший приоритет

## CONTENT

Доступ: public

Наивысший приоритет

Тип: uint8_t const


# ::stappler::web::AsyncTask::ExecuteCallback

## BRIEF

Функция выполнения полезной нагрузки, выполняется асинхронно.

## CONTENT

Доступ: public

Функция выполнения полезной нагрузки, выполняется асинхронно.

# ::stappler::web::AsyncTask::CompleteCallback

## BRIEF

Функция завершения задачи, выполняется в основном потоке.

## CONTENT

Доступ: public

Функция завершения задачи, выполняется в основном потоке.

# ::stappler::web::AsyncTask::prepare(stappler::mempool::base::pool_t*,Callback<void (stappler::web::AsyncTask &)> const&,stappler::web::AsyncTaskGroup*)

## BRIEF

Подготавливает выполнение новой задачи

## CONTENT

Доступ: public

Подготавливает выполнение новой задачи

Использование:

```
auto newTask = AsyncTask::prepare([&] (AsyncTask &task) {
/// do configuration in AsyncTask's memory pool context
});
```

После подготовки задачу нужно отправить на выполнение хосту.

Параметры:
* stappler::mempool::base::pool_t* - исходный пул памяти
* Callback<void (stappler::web::AsyncTask &)> const& - функция получает новую задачу для заполнения поленой нагрузки
* stappler::web::AsyncTaskGroup* - группа задач

Возвращает:
* stappler::web::AsyncTask* - задача, отправленная на выполнение

# ::stappler::web::AsyncTask::prepare(Callback<void (stappler::web::AsyncTask &)> const&,stappler::web::AsyncTaskGroup*)

## BRIEF

Подготавливает выполнение новой задачи

## CONTENT

Доступ: public

Подготавливает выполнение новой задачи

Использование:

```
auto newTask = AsyncTask::prepare([&] (AsyncTask &task) {
/// do configuration in AsyncTask's memory pool context
});
```

После подготовки задачу нужно отправить на выполнение хосту.

Параметры:
* Callback<void (stappler::web::AsyncTask &)> const& - функция получает новую задачу для заполнения поленой нагрузки
* stappler::web::AsyncTaskGroup* - группа задач

Возвращает:
* stappler::web::AsyncTask* - задача, отправленная на выполнение

# ::stappler::web::AsyncTask::perform(stappler::web::Host const&,Callback<void (stappler::web::AsyncTask &)> const&,stappler::web::AsyncTaskGroup*)

## BRIEF

Подготавливает и выполняет на хосте новую задачу

## CONTENT

Доступ: public

Подготавливает и выполняет на хосте новую задачу

Параметры:
* stappler::web::Host const&
* Callback<void (stappler::web::AsyncTask &)> const& - функция получает новую задачу для заполнения поленой нагрузки
* stappler::web::AsyncTaskGroup* - группа задач

Возвращает:
* bool - true если выпонение задачи начато

# ::stappler::web::AsyncTask::perform(Callback<void (stappler::web::AsyncTask &)> const&,stappler::web::AsyncTaskGroup*)

## BRIEF

Подготавливает и выполняет на хосте новую задачу

## CONTENT

Доступ: public

Подготавливает и выполняет на хосте новую задачу. Хост берётся из текущего контекста.

Параметры:
* Callback<void (stappler::web::AsyncTask &)> const& - функция получает новую задачу для заполнения поленой нагрузки
* stappler::web::AsyncTaskGroup* - группа задач

Возвращает:
* bool - true если выпонение задачи начато

# ::stappler::web::AsyncTask::destroy(stappler::web::AsyncTask*)

## BRIEF

Уничтожает задачу

## CONTENT

Доступ: public

Уничтожает задачу. Задача не должна выполняться в момент уничтожения.

Параметры:
* stappler::web::AsyncTask*


# ::stappler::web::AsyncTask::run(stappler::web::AsyncTask*)

## BRIEF

Выполняет задачу синхронно

## CONTENT

Доступ: public

Выполняет задачу синхронно. Вызывает функцию выполнения и после - функцию завершения в текущем потоке.

Параметры:
* stappler::web::AsyncTask*


# ::stappler::web::AsyncTask::getCurrent()

## BRIEF

Возвращает текущую исполняемую задачу из контекста потока

## CONTENT

Доступ: public

Возвращает текущую исполняемую задачу из контекста потока

Возвращает:
* stappler::web::AsyncTask*

# ::stappler::web::AsyncTask::addExecuteFn(stappler::web::AsyncTask::ExecuteCallback const&)

## BRIEF

Добавляет функцию исполнения к задаче

## CONTENT

Доступ: public

Добавляет функцию исполнения к задаче. Функции исполняются в порядке добавления. Набор функций исполняется асинхронно в другом потоке.

Параметры:
* stappler::web::AsyncTask::ExecuteCallback const&


# ::stappler::web::AsyncTask::addExecuteFn(stappler::web::AsyncTask::ExecuteCallback&&)

## BRIEF

Добавляет функцию исполнения к задаче

## CONTENT

Доступ: public

Добавляет функцию исполнения к задаче. Функции исполняются в порядке добавления. Набор функций исполняется асинхронно в другом потоке.

Параметры:
* stappler::web::AsyncTask::ExecuteCallback&&


# ::stappler::web::AsyncTask::addCompleteFn(stappler::web::AsyncTask::CompleteCallback const&)

## BRIEF

Добавялет функцию завершения задачи

## CONTENT

Доступ: public

Добавялет функцию завершения задачи. Функции исполняются в основном потоке в порядке добавления.

Параметры:
* stappler::web::AsyncTask::CompleteCallback const&


# ::stappler::web::AsyncTask::addCompleteFn(stappler::web::AsyncTask::CompleteCallback&&)

## BRIEF

Добавялет функцию завершения задачи

## CONTENT

Доступ: public

Добавялет функцию завершения задачи. Функции исполняются в основном потоке в порядке добавления.

Параметры:
* stappler::web::AsyncTask::CompleteCallback&&


# ::stappler::web::AsyncTask::setPriority(uint8_t)

## BRIEF

Устанавливает приоритет задачи

## CONTENT

Доступ: public

Устанавливает приоритет задачи

Параметры:
* uint8_t


# ::stappler::web::AsyncTask::getPriority() const

## BRIEF

Возвращает приоритет задачи

## CONTENT

Доступ: public

Возвращает приоритет задачи

Возвращает:
* uint8_t

# ::stappler::web::AsyncTask::setSuccessful(bool)

## BRIEF

Устанавливает успешность задачи

## CONTENT

Доступ: public

Устанавливает успешность задачи. Нормальный способ определения успешности - выполнение всех исполняемых функций с результатом true.

Параметры:
* bool


# ::stappler::web::AsyncTask::isSuccessful() const

## BRIEF

Проверяет, выполнена ли задача успешно.

## CONTENT

Доступ: public

Проверяет, выполнена ли задача успешно.

Возвращает:
* bool

# ::stappler::web::AsyncTask::setHost(stappler::web::Host const&)

## BRIEF

Устанавливает хост для задачи

## CONTENT

Доступ: public

Устанавливает хост для задачи

Параметры:
* stappler::web::Host const&


# ::stappler::web::AsyncTask::getHost() const

## BRIEF

Возвращает хост

## CONTENT

Доступ: public

Возвращает хост

Возвращает:
* stappler::web::Host const&

# ::stappler::web::AsyncTask::setScheduled(stappler::Time)

## BRIEF

Устанавливает время задержки перед исполнением задачи

## CONTENT

Доступ: public

Устанавливает время задержки перед исполнением задачи

Параметры:
* stappler::Time


# ::stappler::web::AsyncTask::getScheduled() const

## BRIEF

Возвращает время задержки

## CONTENT

Доступ: public

Возвращает время задержки

Возвращает:
* stappler::Time

# ::stappler::web::AsyncTask::getGroup() const

## BRIEF

Возвращает группу задачи

## CONTENT

Доступ: public

Возвращает группу задачи

Возвращает:
* stappler::web::AsyncTaskGroup*

# ::stappler::web::AsyncTask::performWithStorage(Callback<void (const db::Transaction &)> const&) const

## BRIEF

Запускает транзакцию БД и выполяет функцию

## CONTENT

Доступ: public

Запускает транзакцию БД и выполяет функцию. После выполнения функции транзакция завершается. Если есть активная транзакция в текущем контексте - использует её.

Параметры:
* Callback<void (const db::Transaction &)> const&


# ::stappler::web::AsyncTask::execute()

## BRIEF

Запускает все испоняемые функции

## CONTENT

Доступ: public

Запускает все испоняемые функции. Выполняет все функции, даже если они возвращают false.

Возвращает:
* bool - true если все задачи завершились успешно

# ::stappler::web::AsyncTask::onComplete()

## BRIEF

Выполняет все завершающие функции

## CONTENT

Выполняет все завершающие функции

Доступ: public


# ::stappler::web::AsyncTask::pool() const

## BRIEF

Возвращает рабочий пул задачи

## CONTENT

Доступ: public

Возвращает рабочий пул задачи

Возвращает:
* stappler::mempool::base::pool_t*

# ::stappler::web::AsyncTask::AsyncTask(stappler::mempool::base::pool_t*,stappler::web::AsyncTaskGroup*)

## BRIEF

Конструктор

## CONTENT

Доступ: protected

Конструктор

Параметры:
* stappler::mempool::base::pool_t*
* stappler::web::AsyncTaskGroup*


# ::stappler::web::AsyncTask::_pool

## BRIEF

Рабочий пул задачи

## CONTENT

Доступ: protected

Рабочий пул задачи

Тип: stappler::mempool::base::pool_t*


# ::stappler::web::AsyncTask::_priority

## BRIEF

Приоритет задачи

## CONTENT

Доступ: protected

Приоритет задачи

Тип: uint8_t


# ::stappler::web::AsyncTask::_scheduled

## BRIEF

Время ожидания задачи

## CONTENT

Доступ: protected

Время ожидания задачи

Тип: stappler::Time


# ::stappler::web::AsyncTask::_isSuccessful

## BRIEF

Успешность задачи

## CONTENT

Доступ: protected

Успешность задачи

Тип: bool


# ::stappler::web::AsyncTask::_host

## BRIEF

Хост

## CONTENT

Доступ: protected

Хост

Тип: stappler::web::Host


# ::stappler::web::AsyncTask::_execute

## BRIEF

Функции исполнения

## CONTENT

Доступ: protected

Функции исполнения

Тип: Vector<stappler::web::AsyncTask::ExecuteCallback>


# ::stappler::web::AsyncTask::_complete

## BRIEF

Функции завершения

## CONTENT

Доступ: protected

Функции завершения

Тип: Vector<stappler::web::AsyncTask::CompleteCallback>


# ::stappler::web::AsyncTask::_group

## BRIEF

Группа задачи

## CONTENT

Доступ: protected

Группа задачи

Тип: stappler::web::AsyncTaskGroup*


# ::stappler::web::SharedMode

## BRIEF

Режим работы разделяемого объекта

## CONTENT

Режим работы разделяемого объекта

Значения:
* Pool - через дополнительный пул памяти
* Allocator - через собственный аллокатор


# ::stappler::web::Shared<typename>

## BRIEF

Тип разделяемого объекта

## CONTENT

Тип разделяемого объекта. Разделяемый объект используется для передачи некоего обекта между потоками в системе пулов памяти. Пулы памяти зависят от контекста и потока, потому прямая передача объекта требует его полного копирования, что нежелательно для больших объемов.

Разделяемый объект может быть создан на основе выделенного пула памяти. Для этого аллокатор этого пула памяти должен быть многопоточным, а в качестве исходного пула должен выступать пул, гарантированно существующий всё время существования разделяемого объекта.

Разделяемый объект может быть создан с собственным аллоактором. Это снимает все ограничения режима выделенного пула, но расходует больше памяти.

Параметры шаблона:
* typename T

Базовые классы:
* RefBase<memory::PoolInterface>


# ::stappler::web::Shared<typename>::create<typename>(Args &&...)

## BRIEF

Создаёт разделяемый объект используя корневой пул памяти

## CONTENT

Доступ: public

Создаёт разделяемый объект используя корневой пул памяти. Базовый объект создаётся в контексте нового пула памяти. Аргументы передаются в конструктор базового объекта. Первым аргументом передаётся новый пул памяти.

Параметры шаблона:
* typename Args

Параметры:
* Args &&...

Возвращает:
* Shared<T>*

# ::stappler::web::Shared<typename>::create<typename>(stappler::mempool::base::pool_t*,Args &&...)

## BRIEF

Создаёт разделяемый объект используя выделенный пул памяти

## CONTENT

Доступ: public

Создаёт разделяемый объект используя выделенный пул памяти. Базовый объект создаётся в контексте нового пула памяти. Аргументы передаются в конструктор базового объекта. Первым аргументом передаётся новый пул памяти.

Параметры шаблона:
* typename Args

Параметры:
* stappler::mempool::base::pool_t*
* Args &&...

Возвращает:
* Shared<T>*

# ::stappler::web::Shared<typename>::create<typename>(stappler::web::SharedMode,Args &&...)

## BRIEF

Создаёт разделяемый объект в заданном режиме

## CONTENT

Доступ: public

Создаёт разделяемый объект в заданном режиме. Базовый объект создаётся в контексте нового пула памяти. Аргументы передаются в конструктор базового объекта. Первым аргументом передаётся новый пул памяти.

Параметры шаблона:
* typename Args

Параметры:
* stappler::web::SharedMode
* Args &&...

Возвращает:
* Shared<T>*

# ::stappler::web::Shared<typename>::~Shared()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор

# ::stappler::web::Shared<typename>::perform<typename>(Callback&&)

## BRIEF

Выполняет функцию в контексте пула объекта

## CONTENT

Доступ: public

Выполняет функцию в контексте пула объекта

Параметры шаблона:
* typename Callback

Параметры:
* Callback&&


# ::stappler::web::Shared<typename>::get() const

## BRIEF

Возвращает основной объект

## CONTENT

Доступ: public

Возвращает основной объект

Возвращает:
* T*

# ::stappler::web::Shared<typename>::operator T*() const

## BRIEF

Возвращает основной объект

## CONTENT

Доступ: public

Возвращает основной объект

Возвращает:
* T*

# ::stappler::web::Shared<typename>::operator->() const

## BRIEF

Возвращает основной объект

## CONTENT

Доступ: public

Возвращает основной объект

Возвращает:
* T*

# ::stappler::web::Shared<typename>::operator bool() const

## BRIEF

Проверяет, существует ли вложенный объект

## CONTENT

Доступ: public

Проверяет, существует ли вложенный объект

Возвращает:
* bool

# ::stappler::web::Shared<typename>::getPool() const

## BRIEF

Возвращает пул памяти объекта

## CONTENT

Доступ: public

Возвращает пул памяти объекта

Возвращает:
* stappler::mempool::base::pool_t*

# ::stappler::web::Shared<typename>::getAllocator() const

## BRIEF

Возвращает собственный аллокатор объекта, если определён

## CONTENT

Доступ: public

Возвращает собственный аллокатор объекта, если определён

Возвращает:
* stappler::mempool::base::allocator_t*

# ::stappler::web::Shared<typename>::Shared(stappler::web::SharedMode,stappler::mempool::base::allocator_t*,stappler::mempool::base::pool_t*,T*)

## BRIEF

Конструктор

## CONTENT

Доступ: protected

Конструктор

Параметры:
* stappler::web::SharedMode - режим работы
* stappler::mempool::base::allocator_t* - собственный аллокатор
* stappler::mempool::base::pool_t* - собственный пул памяти
* T* - вложенный объект


# ::stappler::web::Shared<typename>::_allocator

## BRIEF

Собственный аллокатор

## CONTENT

Доступ: protected

Собственный аллокатор

Тип: stappler::mempool::base::allocator_t*


# ::stappler::web::Shared<typename>::_pool

## BRIEF

Собственный пул памяти

## CONTENT

Доступ: protected

Собственный пул памяти

Тип: stappler::mempool::base::pool_t*


# ::stappler::web::Shared<typename>::_shared

## BRIEF

Вложенный объект

## CONTENT

Доступ: protected

Вложенный объект

Тип: T*


# ::stappler::web::Shared<typename>::_mode

## BRIEF

Режим работы

## CONTENT

Доступ: protected

Режим работы

Тип: stappler::web::SharedMode


# ::stappler::web::SharedRc<typename>

## BRIEF

Класс разделяемого объекта с подсчётом ссылок

## CONTENT

Класс разделяемого объекта с подсчётом ссылок. Реализует удаление разделяемого объекта по удалению всех ссылок. Следует семантике Rc<T>, работает в стиле умного указателя.

Параметры шаблона:
* typename _Base


# ::stappler::web::SharedRc<typename>::Base

## BRIEF

Базовый тип объекта

## CONTENT

Доступ: public

Базовый тип объекта

# ::stappler::web::SharedRc<typename>::Type

## BRIEF

Хранимый тип объекта

## CONTENT

Доступ: public

Хранимый тип объекта (`Shared<T>`)

# ::stappler::web::SharedRc<typename>::Self

## BRIEF

Свой тип

## CONTENT

Доступ: public

Свой тип

# ::stappler::web::SharedRc<typename>::Pointer

## BRIEF

Тип хранимого указателя

## CONTENT

Доступ: public

Тип хранимого указателя

# ::stappler::web::SharedRc<typename>::create<class>(Args &&...)

## BRIEF

Создаёт новый объект

## CONTENT

Доступ: public

Создаёт новый объект. Использует корневой пул памяти. Аргументы передаются в функцию init вложенного объекта.

Параметры шаблона:
* class Args

Параметры:
* Args &&...

Возвращает:
* Self

# ::stappler::web::SharedRc<typename>::create<class>(stappler::mempool::base::pool_t*,Args &&...)

## BRIEF

Создаёт новый объект

## CONTENT

Доступ: public

Создаёт новый объект. Использует заданный пул памяти. Аргументы передаются в функцию init вложенного объекта.

Параметры шаблона:
* class Args

Параметры:
* stappler::mempool::base::pool_t*
* Args &&...

Возвращает:
* Self

# ::stappler::web::SharedRc<typename>::create<class>(stappler::web::SharedMode,Args &&...)

## BRIEF

Создаёт новый объект

## CONTENT

Доступ: public

Создаёт новый объект. Использует заданный режим работы. Аргументы передаются в функцию init вложенного объекта.

Параметры шаблона:
* class Args

Параметры:
* stappler::web::SharedMode
* Args &&...

Возвращает:
* Self

# ::stappler::web::SharedRc<typename>::alloc()

## BRIEF

Создаёт новый объект

## CONTENT

Доступ: public

Создаёт новый объект. Использует корневой пул памяти.

Возвращает:
* Self

# ::stappler::web::SharedRc<typename>::alloc<class>(Args &&...)

## BRIEF

Создаёт новый объект

## CONTENT

Доступ: public

Создаёт новый объект. Использует корневой пул памяти. Аргументы передаются в конструктор вложенного объекта.

Параметры шаблона:
* class Args

Параметры:
* Args &&...

Возвращает:
* Self

# ::stappler::web::SharedRc<typename>::SharedRc()

## BRIEF

Конструктор по умолчанию, без объекта

## CONTENT

Доступ: public

Конструктор по умолчанию, без объекта

# ::stappler::web::SharedRc<typename>::SharedRc(stappler::nullptr_t const&)

## BRIEF

Создаёт с нулевым объектом

## CONTENT

Доступ: public

Создаёт с нулевым объектом

Параметры:
* stappler::nullptr_t const&


# ::stappler::web::SharedRc<typename>::SharedRc(stappler::web::SharedRc::Pointer const&)

## BRIEF

Создаёт с указанным объектом

## CONTENT

Доступ: public

Создаёт с указанным объектом

Параметры:
* stappler::web::SharedRc::Pointer const&


# ::stappler::web::SharedRc<typename>::SharedRc(stappler::web::SharedRc::Self const&)

## BRIEF

Конструктор копирования

## CONTENT

Доступ: public

Конструктор копирования

Параметры:
* stappler::web::SharedRc::Self const&


# ::stappler::web::SharedRc<typename>::SharedRc(stappler::web::SharedRc::Self&&)

## BRIEF

Конструктор перемещения

## CONTENT

Доступ: public

Конструктор перемещения

Параметры:
* stappler::web::SharedRc::Self&&


# ::stappler::web::SharedRc<typename>::operator=(stappler::nullptr_t const&)

## BRIEF

Назначает нулевой объект, уменьшает счётчик ссылок предыдущего

## CONTENT

Доступ: public

Назначает нулевой объект, уменьшает счётчик ссылок предыдущего

Параметры:
* stappler::nullptr_t const&

Возвращает:
* SharedRc<_Base>&

# ::stappler::web::SharedRc<typename>::operator=(stappler::web::SharedRc::Pointer const&)

## BRIEF

Назначает новый объект, уменьшает счётчик ссылок предыдущего

## CONTENT

Доступ: public

Назначает новый объект, уменьшает счётчик ссылок предыдущего

Параметры:
* stappler::web::SharedRc::Pointer const&

Возвращает:
* SharedRc<_Base>&

# ::stappler::web::SharedRc<typename>::operator=(stappler::web::SharedRc::Self const&)

## BRIEF

Оператор копирования

## CONTENT

Доступ: public

Оператор копирования

Параметры:
* stappler::web::SharedRc::Self const&

Возвращает:
* SharedRc<_Base>&

# ::stappler::web::SharedRc<typename>::operator=(stappler::web::SharedRc::Self&&)

## BRIEF

Оператор перемещения

## CONTENT

Доступ: public

Оператор перемещения

Параметры:
* stappler::web::SharedRc::Self&&

Возвращает:
* SharedRc<_Base>&

# ::stappler::web::SharedRc<typename>::~SharedRc()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор, снижает счётчик ссылок хранимого объекта


# ::stappler::web::SharedRc<typename>::set(stappler::web::SharedRc::Pointer const&)

## BRIEF

Устанавливает новый объект

## CONTENT

Доступ: public

Устанавливает новый объект. Снижает счётчик ссылок предыдущего

Параметры:
* stappler::web::SharedRc::Pointer const&


# ::stappler::web::SharedRc<typename>::get() const

## BRIEF

Получает хранимый объект

## CONTENT

Доступ: public

Получает хранимый объект

Возвращает:
* Base*

# ::stappler::web::SharedRc<typename>::operator Base*() const

## BRIEF

Получает хранимый объект

## CONTENT

Доступ: public

Получает хранимый объект

Возвращает:
* Base*

# ::stappler::web::SharedRc<typename>::operator bool() const

## BRIEF

Проверяет, есть ли хранимый объект

## CONTENT

Доступ: public

Проверяет, есть ли хранимый объект

Возвращает:
* bool

# ::stappler::web::SharedRc<typename>::swap(stappler::web::SharedRc::Self&)

## BRIEF

Обменивает указатели

## CONTENT

Доступ: public

Обменивает указатели

Параметры:
* stappler::web::SharedRc::Self&


# ::stappler::web::SharedRc<typename>::operator->() const

## BRIEF

Возвращает хранимый объект

## CONTENT

Доступ: public

Возвращает хранимый объект

Возвращает:
* Base*

# ::stappler::web::SharedRc<typename>::cast<typename>() const

## BRIEF

Пытается вернуть объект с новым типом

## CONTENT

Доступ: public

Пытается вернуть объект с новым типом. Использует `dynamic_cast`.

Параметры шаблона:
* typename Target

Возвращает:
* RcBase<Target>

# ::stappler::web::SharedRc<typename>::operator==(stappler::web::SharedRc::Self const&) const

## BRIEF

Сравнивает указатели

## CONTENT

Доступ: public

Сравнивает указатели

Параметры:
* stappler::web::SharedRc::Self const&

Возвращает:
* bool

# ::stappler::web::SharedRc<typename>::operator==(stappler::web::SharedRc::Base const*&) const

## BRIEF

Сравнивает указатели

## CONTENT

Доступ: public

Сравнивает указатели

Параметры:
* stappler::web::SharedRc::Base const*&

Возвращает:
* bool

# ::stappler::web::SharedRc<typename>::operator==(std::nullptr_t const) const

## BRIEF

Сравнивает указатели

## CONTENT

Доступ: public

Сравнивает указатели

Параметры:
* std::nullptr_t const

Возвращает:
* bool

# ::stappler::web::SharedRc<typename>::operator!=(stappler::web::SharedRc::Self const&) const

## BRIEF

Сравнивает указатели

## CONTENT

Доступ: public

Сравнивает указатели

Параметры:
* stappler::web::SharedRc::Self const&

Возвращает:
* bool

# ::stappler::web::SharedRc<typename>::operator!=(stappler::web::SharedRc::Base const*&) const

## BRIEF

Сравнивает указатели

## CONTENT

Доступ: public

Сравнивает указатели

Параметры:
* stappler::web::SharedRc::Base const*&

Возвращает:
* bool

# ::stappler::web::SharedRc<typename>::operator!=(std::nullptr_t const) const

## BRIEF

Сравнивает указатели

## CONTENT

Доступ: public

Сравнивает указатели

Параметры:
* std::nullptr_t const

Возвращает:
* bool

# ::stappler::web::SharedRc<typename>::operator>(stappler::web::SharedRc::Self const&) const

## BRIEF

Сравнивает указатели

## CONTENT

Доступ: public

Сравнивает указатели

Параметры:
* stappler::web::SharedRc::Self const&

Возвращает:
* bool

# ::stappler::web::SharedRc<typename>::operator>(stappler::web::SharedRc::Base const*) const

## BRIEF

Сравнивает указатели

## CONTENT

Доступ: public

Сравнивает указатели

Параметры:
* stappler::web::SharedRc::Base const*

Возвращает:
* bool

# ::stappler::web::SharedRc<typename>::operator>(std::nullptr_t const) const

## BRIEF

Сравнивает указатели

## CONTENT

Доступ: public

Сравнивает указатели

Параметры:
* std::nullptr_t const

Возвращает:
* bool

# ::stappler::web::SharedRc<typename>::operator<(stappler::web::SharedRc::Self const&) const

## BRIEF

Сравнивает указатели

## CONTENT

Доступ: public

Сравнивает указатели

Параметры:
* stappler::web::SharedRc::Self const&

Возвращает:
* bool

# ::stappler::web::SharedRc<typename>::operator<(stappler::web::SharedRc::Base const*) const

## BRIEF

Сравнивает указатели

## CONTENT

Доступ: public

Сравнивает указатели

Параметры:
* stappler::web::SharedRc::Base const*

Возвращает:
* bool

# ::stappler::web::SharedRc<typename>::operator<(std::nullptr_t const) const

## BRIEF

Сравнивает указатели

## CONTENT

Доступ: public

Сравнивает указатели

Параметры:
* std::nullptr_t const

Возвращает:
* bool

# ::stappler::web::SharedRc<typename>::operator>=(stappler::web::SharedRc::Self const&) const

## BRIEF

Сравнивает указатели

## CONTENT

Доступ: public

Сравнивает указатели

Параметры:
* stappler::web::SharedRc::Self const&

Возвращает:
* bool

# ::stappler::web::SharedRc<typename>::operator>=(stappler::web::SharedRc::Base const*) const

## BRIEF

Сравнивает указатели

## CONTENT

Доступ: public

Сравнивает указатели

Параметры:
* stappler::web::SharedRc::Base const*

Возвращает:
* bool

# ::stappler::web::SharedRc<typename>::operator>=(std::nullptr_t const) const

## BRIEF

Сравнивает указатели

## CONTENT

Доступ: public

Сравнивает указатели

Параметры:
* std::nullptr_t const

Возвращает:
* bool

# ::stappler::web::SharedRc<typename>::operator<=(stappler::web::SharedRc::Self const&) const

## BRIEF

Сравнивает указатели

## CONTENT

Доступ: public

Сравнивает указатели

Параметры:
* stappler::web::SharedRc::Self const&

Возвращает:
* bool

# ::stappler::web::SharedRc<typename>::operator<=(stappler::web::SharedRc::Base const*) const

## BRIEF

Сравнивает указатели

## CONTENT

Доступ: public

Сравнивает указатели

Параметры:
* stappler::web::SharedRc::Base const*

Возвращает:
* bool

# ::stappler::web::SharedRc<typename>::operator<=(std::nullptr_t const) const

## BRIEF

Сравнивает указатели

## CONTENT

Доступ: public

Сравнивает указатели

Параметры:
* std::nullptr_t const

Возвращает:
* bool

# ::stappler::web::SharedRc<typename>::doRetain()

## BRIEF

Увеличивает счётчик ссылок

## CONTENT

Доступ: private

Увеличивает счётчик ссылок

# ::stappler::web::SharedRc<typename>::doRelease()

## BRIEF

Уменьшает счётчик ссылок

## CONTENT

Доступ: private

Уменьшает счётчик ссылок

# ::stappler::web::SharedRc<typename>::doSwap(stappler::web::SharedRc::Pointer)

## BRIEF

Обмениает указатели

## CONTENT

Доступ: private

Обмениает указатели

Параметры:
* stappler::web::SharedRc::Pointer

Возвращает:
* Pointer

# ::stappler::web::SharedRc<typename>::SharedRc(stappler::web::SharedRc::Pointer,bool)

## BRIEF

Небезопасный конструктор. не учитывает счётчик ссылок

## CONTENT

Доступ: private

Небезопасный конструктор. не учитывает счётчик ссылок

Параметры:
* stappler::web::SharedRc::Pointer
* bool - игнорируется


# ::stappler::web::SharedRc<typename>::_ptr

## BRIEF

Указатель

## CONTENT

Доступ: private

Указатель

Тип: Pointer

# ::stappler::web::SharedRc<typename>::alloc<class>(stappler::mempool::base::pool_t*,Args &&...)

## BRIEF

Создаёт новый объект

## CONTENT

Доступ: public

Создаёт новый объект. Использует заданный пул памяти. Аргументы передаются в конструктор нового объекта.

Параметры шаблона:
* class Args

Параметры:
* stappler::mempool::base::pool_t*
* Args &&...

Возвращает:
* Self

# ::stappler::web::SharedRc<typename>::alloc<class>(stappler::web::SharedMode,Args &&...)

## BRIEF

Создаёт новый объект

## CONTENT

Доступ: public

Создаёт новый объект в указанном режиме. Аргументы передаются в конструктор нового объекта.

Доступ: public

Параметры шаблона:
* class Args

Параметры:
* stappler::web::SharedMode
* Args &&...

Возвращает:
* Self