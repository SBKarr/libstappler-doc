Title: SPMemPriorityQueue.h


# STAPPLER_CORE_MEMORY_SPMEMPRIORITYQUEUE_H_

## BRIEF

Заголовок структуры очереди с приоритетами

## CONTENT

Заголовок структуры очереди с приоритетами. Эта очередь используется в качестве распределителя заданий для потоков.


# SP_PRIORITY_QUEUE_RANGE_DEBUG

## BRIEF

Макрос для включения отладочных функций очереди

## CONTENT

Макрос для включения отладочных функций очереди


# ::stappler::memory::PriorityQueue_lock_noOp(void*)

## BRIEF

Функция блокирования очереди, ничего не делающие

## CONTENT

Функция блокирования очереди, ничего не делающие

Параметры:
* void*


# ::stappler::memory::PriorityQueue_lock_std_mutex(void*)

## BRIEF

Функция блокирования очереди поверх std::mutex

## CONTENT

Функция блокирования очереди поверх std::mutex. Блокирует мутекс.

Параметры:
* void* - непрозрачный указатель на объект std::mutex


# ::stappler::memory::PriorityQueue_unlock_std_mutex(void*)

## BRIEF

Функция деблокирования очереди поверх std::mutex

## CONTENT

Функция блокирования очереди поверх std::mutex. Деблокирует мутекс.

Параметры:
* void* - непрозрачный указатель на объект std::mutex


# ::stappler::memory::PriorityQueue<typename>

## BRIEF

Структура очереди с приоритетом

## CONTENT

Структура очереди с приоритетом

Параметры шаблона:
* typename Value - тип значения очереди


# ::stappler::memory::PriorityQueue<typename>::PreallocatedNodes

## BRIEF

Число предаллоцированных элементов

## CONTENT

Доступ: public

Число предаллоцированных элементов, создаваемых при создании очереди

Тип: size_t const


# ::stappler::memory::PriorityQueue<typename>::StorageNodes

## BRIEF

Число элементов в блоке аллокации

## CONTENT

Доступ: public

Число элементов в блоке аллокации

Тип: size_t const


# ::stappler::memory::PriorityQueue<typename>::LockFnPtr

## BRIEF

Тип указателя на функцию блокирования и деблокирования мутексов

## CONTENT

Доступ: public

Тип указателя на функцию блокирования и деблокирования мутексов


# ::stappler::memory::PriorityQueue<typename>::PriorityType

## BRIEF

Тип приоритета

## CONTENT

Доступ: public

Тип приоритета


# ::stappler::memory::PriorityQueue<typename>::AlignedStorage

## BRIEF

Хранилище с выравниванием для элементов

## CONTENT

Доступ: public

Хранилище с выравниванием для элементов


# ::stappler::memory::PriorityQueue<typename>::AlignedStorage::buffer

## BRIEF

Буфер для хранения элемента

## CONTENT

Буфер для хранения элемента

Тип: uint8_t[sizeof(_Tp)]


# ::stappler::memory::PriorityQueue<typename>::Node

## BRIEF

Тип хранимого элемента

## CONTENT

Доступ: public

Тип хранимого элемента


# ::stappler::memory::PriorityQueue<typename>::Node::storage

## BRIEF

Хранилище элемента

## CONTENT

Хранилище элемента

Тип: stappler::memory::PriorityQueue::AlignedStorage


# ::stappler::memory::PriorityQueue<typename>::Node::next

## BRIEF

Следующий элемент в связном списке

## CONTENT

Следующий элемент в связном списке

Тип: stappler::memory::PriorityQueue::Node*


# ::stappler::memory::PriorityQueue<typename>::Node::block

## BRIEF

Блок, из которого выделен элемент

## CONTENT

Блок, из которого выделен элемент

Тип: stappler::memory::PriorityQueue::StorageBlock*


# ::stappler::memory::PriorityQueue<typename>::Node::priority

## BRIEF

Приоритет знчения

## CONTENT

Приоритет знчения. Чем меньше, тем быстрее элемент будет возвращён из очереди.

Тип: stappler::memory::PriorityQueue::PriorityType


# ::stappler::memory::PriorityQueue<typename>::StorageBlock

## BRIEF

Тип выделяемого дополнительного блока значений.

## CONTENT

Доступ: public

Тип выделяемого дополнительного блока значений.

Система выделяет и возвращает дополнительные элементы блоками. Блок может быть уничтожен, когда ни один из его элементов более не используется. Система распределяет новые элементы таким образом, чтобы способствовать скорейшему возврату дополнительных элементов.


# ::stappler::memory::PriorityQueue<typename>::StorageBlock::nodes

## BRIEF

Массив элементов в блоке

## CONTENT

Массив элементов в блоке

Тип: std::array<Node, StorageNodes>


# ::stappler::memory::PriorityQueue<typename>::StorageBlock::used

## BRIEF

Число используемых элементов

## CONTENT

Число используемых элементов

Тип: uint32_t


# ::stappler::memory::PriorityQueue<typename>::LockInterface

## BRIEF

Интерфейс мутекса для потокобезопасности

## CONTENT

Доступ: public

Интерфейс мутекса для потокобезопасности

# ::stappler::memory::PriorityQueue<typename>::LockInterface::lockPtr

## BRIEF

Уазатель на объект мутекса

## CONTENT

Уазатель на объект мутекса

Тип: void*


# ::stappler::memory::PriorityQueue<typename>::LockInterface::lockFn

## BRIEF

Уазатель на функцию блокирования

## CONTENT

Уазатель на функцию блокирования

Тип: stappler::memory::PriorityQueue::LockFnPtr


# ::stappler::memory::PriorityQueue<typename>::LockInterface::unlockFn

## BRIEF

Уазатель на функцию деблокирования

## CONTENT

Уазатель на функцию деблокирования

Тип: stappler::memory::PriorityQueue::LockFnPtr


# ::stappler::memory::PriorityQueue<typename>::LockInterface::clear()

## BRIEF

Очищает интерфейс блокирования

## CONTENT

Очищает интерфейс блокирования


# ::stappler::memory::PriorityQueue<typename>::LockInterface::lock()

## BRIEF

Блокирует мутекс

## CONTENT

Блокирует мутекс

# ::stappler::memory::PriorityQueue<typename>::LockInterface::unlock()

## BRIEF

Деблокирует мутекс

## CONTENT

Деблокирует мутекс


# ::stappler::memory::PriorityQueue<typename>::LockInterface::operator==(stappler::memory::PriorityQueue::LockInterface const&) const

## BRIEF

Сранивает интерфейс мутекса

## CONTENT

Сранивает интерфейс мутекса

Параметры:
* stappler::memory::PriorityQueue::LockInterface const&

Возвращает:
* bool

# ::stappler::memory::PriorityQueue<typename>::LockInterface::operator!=(stappler::memory::PriorityQueue::LockInterface const&) const

## BRIEF

Сранивает интерфейс мутекса

## CONTENT

Сранивает интерфейс мутекса

Параметры:
* stappler::memory::PriorityQueue::LockInterface const&

Возвращает:
* bool

# ::stappler::memory::PriorityQueue<typename>::NodeInterface

## BRIEF

Интерфейс связного списка элементов

## CONTENT

Доступ: public

Интерфейс связного списка элементов

# ::stappler::memory::PriorityQueue<typename>::NodeInterface::first

## BRIEF

Первый элемент в списке

## CONTENT

Первый элемент в списке

Тип: stappler::memory::PriorityQueue::Node*


# ::stappler::memory::PriorityQueue<typename>::NodeInterface::last

## BRIEF

Последний элемент в списке

## CONTENT

Последний элемент в списке

Тип: stappler::memory::PriorityQueue::Node*


# ::stappler::memory::PriorityQueue<typename>::NodeInterface::lock

## BRIEF

Интерфейс мутекса списка

## CONTENT

Интерфейс мутекса списка

Тип: stappler::memory::PriorityQueue::LockInterface


# ::stappler::memory::PriorityQueue<typename>::PriorityQueue()

## BRIEF

Конструктор по умолчанию, создаёт пустую очередь

## CONTENT

Доступ: public

Конструктор по умолчанию, создаёт пустую очередь


# ::stappler::memory::PriorityQueue<typename>::~PriorityQueue()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор. Удаляет все элементы.


# ::stappler::memory::PriorityQueue<typename>::PriorityQueue(const PriorityQueue<Value>&)

## BRIEF

Запрет копирования

## CONTENT

Доступ: public

Запрет копирования

Параметры:
* const PriorityQueue<Value>&


# ::stappler::memory::PriorityQueue<typename>::operator=(const PriorityQueue<Value>&)

## BRIEF

Запрет копирования

## CONTENT

Доступ: public

Запрет копирования

Параметры:
* const PriorityQueue<Value>&

Возвращает:
* PriorityQueue<Value>&

# ::stappler::memory::PriorityQueue<typename>::PriorityQueue(PriorityQueue<Value>&&)

## BRIEF

Запрет перемещения

## CONTENT

Доступ: public

Запрет перемещения

Параметры:
* PriorityQueue<Value>&&


# ::stappler::memory::PriorityQueue<typename>::operator=(PriorityQueue<Value>&&)

## BRIEF

Запрет перемещения

## CONTENT

Доступ: public

Запрет перемещения

Параметры:
* PriorityQueue<Value>&&

Возвращает:
* PriorityQueue<Value>&

# ::stappler::memory::PriorityQueue<typename>::capacity() const

## BRIEF

Возвращает еткущую вместимость очереди

## CONTENT

Доступ: public

Возвращает еткущую вместимость очереди

Возвращает:
* size_t

# ::stappler::memory::PriorityQueue<typename>::free_capacity()

## BRIEF

Возвращает текущее количество свободных элементов

## CONTENT

Доступ: public

Возвращает текущее количество свободных элементов

Возвращает:
* size_t

# ::stappler::memory::PriorityQueue<typename>::setQueueLocking(stappler::memory::PriorityQueue::LockFnPtr,stappler::memory::PriorityQueue::LockFnPtr,void*)

## BRIEF

Устанавливает функции блокирования для системы заполнения элементов очереди.

## CONTENT

Доступ: public

Устанавливает функции блокирования для системы заполнения элементов очереди. Эта система используется, когда элементы добвляются или удаляются из очереди. Блокировка не пересекается с блокировкой при аллокации элементов.

Рекомендуется устанавливать разные мутексы на систему очереди и систему аллокации для оптимальной производительности

Параметры:
* stappler::memory::PriorityQueue::LockFnPtr - функция блокирования
* stappler::memory::PriorityQueue::LockFnPtr - функция деблокирования
* void* - используемый мутекс


# ::stappler::memory::PriorityQueue<typename>::setFreeLocking(stappler::memory::PriorityQueue::LockFnPtr,stappler::memory::PriorityQueue::LockFnPtr,void*)

## BRIEF

Устанавливает функции блокирования для системы аллокации элементов

## CONTENT

Доступ: public

Устанавливает функции блокирования для системы аллокации элементов. Эта система используется для защиты распредления новых блоков элоементов и удаления более ненужных блоков. Не пересекается с системой блокирования заполнения очереди.

Рекомендуется устанавливать разные мутексы на систему очереди и систему аллокации для оптимальной производительности

Параметры:
* stappler::memory::PriorityQueue::LockFnPtr - функция блокирования
* stappler::memory::PriorityQueue::LockFnPtr - функция деблокирования
* void* - используемый мутекс


# ::stappler::memory::PriorityQueue<typename>::setLocking(stappler::memory::PriorityQueue::LockFnPtr,stappler::memory::PriorityQueue::LockFnPtr,void*)

## BRIEF

Устанавливает общие функции блокирования на очередь и аллокацию. Не рекомендуется по причинам производительности.

## CONTENT

Доступ: public

Параметры:
* stappler::memory::PriorityQueue::LockFnPtr - функция блокирования
* stappler::memory::PriorityQueue::LockFnPtr - функция деблокирования
* void* - используемый мутекс



# ::stappler::memory::PriorityQueue<typename>::setQueueLocking(std::mutex&)

## BRIEF

Устанавливает стандартный мутекс для защиты очереди

## CONTENT

Доступ: public

Устанавливает стандартный мутекс для защиты очереди

Параметры:
* std::mutex&


# ::stappler::memory::PriorityQueue<typename>::setFreeLocking(std::mutex&)

## BRIEF

Устанавливает стандартный мутекс для защиты аллокации

## CONTENT

Доступ: public

Устанавливает стандартный мутекс для защиты аллокации

Параметры:
* std::mutex&


# ::stappler::memory::PriorityQueue<typename>::setLocking(std::mutex&)

## BRIEF

Устанавливает стандартный мутекс для защиты очереди и аллокации

## CONTENT

Доступ: public

Устанавливает стандартный мутекс для защиты очереди и аллокации

Параметры:
* std::mutex&


# ::stappler::memory::PriorityQueue<typename>::clear()

## BRIEF

Очищает очередь

## CONTENT

Доступ: public

Очищает очередь

# ::stappler::memory::PriorityQueue<typename>::empty()

## BRIEF

Проверяет очередь на пустоту

## CONTENT

Доступ: public

Проверяет очередь на пустоту

Возвращает:
* bool - true если очередь пуста на момент вызова.


# ::stappler::memory::PriorityQueue<typename>::empty<class>(std::unique_lock<T>&)

## BRIEF

Проверяет очередь на пустоту с внешней блокировкой

## CONTENT

Доступ: public

Проверяет очередь на пустоту с внешней блокировкой

Параметры шаблона:
* class T - тип мутекса

Параметры:
* std::unique_lock<T>& - ссылка на заблокированный мутекс очереди

Возвращает:
* bool - true если очередь пуста на момент вызова.


# ::stappler::memory::PriorityQueue<typename>::push<typename>(stappler::memory::PriorityQueue::PriorityType,bool,Args &&...)

## BRIEF

Добавляет элемент в очередь

## CONTENT

Доступ: public

Добавляет элемент в очередь

Параметры шаблона:
* typename Args

Параметры:
* stappler::memory::PriorityQueue::PriorityType - приоритет элоемента. Чем ниже, тем раньше элмент выйдет из очереди
* bool - если true - элемент ставится в начало интервала с приоритетом, если false - в конец
* Args &&... - параметры для конструирования значения


# ::stappler::memory::PriorityQueue<typename>::pop_prefix(callback<void (stappler::memory::PriorityQueue::PriorityType, Value &&)> const&)

## BRIEF

Убирает элемент из очереди и вызывает функтор с его значением

## CONTENT

Доступ: public

Убирает элемент из очереди и вызывает функтор с его значением. Перемещает значение элемента во временное хранилище, убирает элемент из очереди, затем вызывает функтор с перемещённым значением.

Оптимизировано для быстрого оператора перемещения и длительной функции обработки.

Параметры:
* callback<void (stappler::memory::PriorityQueue::PriorityType, Value &&)> const& - функтор для вызова

Возвращает:
* bool - true если элемент успешно взят из очереди  функтор был вызван

# ::stappler::memory::PriorityQueue<typename>::pop_direct(callback<void (stappler::memory::PriorityQueue::PriorityType, Value &&)> const&)

## BRIEF

Вызывает функтор со значением первого элемента в очереди, затем убирает его из очереди

## CONTENT

Доступ: public

Вызывает функтор со значением первого элемента в очереди, затем убирает его из очереди. Используется в случае отсуствия быстрого оператора перемещения. Блокирует память элемента вне очереди до завершения вызова функтора.

Параметры:
* callback<void (stappler::memory::PriorityQueue::PriorityType, Value &&)> const& - функтор для вызова

Возвращает:
* bool - true если элемент успешно взят из очереди  функтор был вызван


# ::stappler::memory::PriorityQueue<typename>::foreach(callback<void (stappler::memory::PriorityQueue::PriorityType, const Value &)> const&)

## BRIEF

Вызывает функтор для всех элементов в очереди

## CONTENT

Доступ: public

Вызывает функтор для всех элементов в очереди. Полностью блокирует очередь на время выполнения.

Параметры:
* callback<void (stappler::memory::PriorityQueue::PriorityType, const Value &)> const&


# ::stappler::memory::PriorityQueue<typename>::initNodes(stappler::memory::PriorityQueue::Node*,stappler::memory::PriorityQueue::Node*,stappler::memory::PriorityQueue::StorageBlock*)

## BRIEF

Инициализирует группу пустых элементов из блока, создавая из них связный список

## CONTENT

Доступ: protected

Инициализирует группу пустых элементов из блока, создавая из них связный список

Параметры:
* stappler::memory::PriorityQueue::Node* - первый элемент
* stappler::memory::PriorityQueue::Node* - последний элемент
* stappler::memory::PriorityQueue::StorageBlock* - блок элементов (может быть null для преаллоцированных элементов очереди)


# ::stappler::memory::PriorityQueue<typename>::popNode()

## BRIEF

Забирает первый элемент из очереди

## CONTENT

Доступ: protected

Забирает первый элемент из очереди

Жизненный цикл элемента:

(в производящем потоке)
* Распределение из памяти (блокирует)
* Заполнение и конструирование значения
* Добавление в очередь (блокирует)

(в потребляющем потоке)
* Изъятие из очереди (блокирует)
* Работа с элементом на стороне приложения
* Удаление (блокирует)

Возвращает:
* stappler::memory::PriorityQueue::Node*

# ::stappler::memory::PriorityQueue<typename>::pushNode(stappler::memory::PriorityQueue::Node*,bool)

## BRIEF

Добавляет элемент в очередь согласно его приоритету

## CONTENT

Доступ: protected

Добавляет элемент в очередь согласно его приоритету

Жизненный цикл элемента:

(в производящем потоке)
* Распределение из памяти (блокирует)
* Заполнение и конструирование значения
* Добавление в очередь (блокирует)

(в потребляющем потоке)
* Изъятие из очереди (блокирует)
* Работа с элементом на стороне приложения
* Удаление (блокирует)

Параметры:
* stappler::memory::PriorityQueue::Node*
* bool - true если элемент добавляется в начало своего приоритета, false если в конец


# ::stappler::memory::PriorityQueue<typename>::allocateNode()

## BRIEF

Распределяет новый элемент

## CONTENT

Доступ: protected

Распределяет новый элемент. Выделяет его из свободных элементов или выледяет новый блок элементов.

Возвращает:
* stappler::memory::PriorityQueue::Node*

# ::stappler::memory::PriorityQueue<typename>::freeNode(stappler::memory::PriorityQueue::Node*)

## BRIEF

Освобождает элемент

## CONTENT

Доступ: protected

Освобождает элемент. Добавляет его в список свободных или удаляет распределённый блок, если все его элементы свободны.

Параметры:
* stappler::memory::PriorityQueue::Node*


# ::stappler::memory::PriorityQueue<typename>::allocateBlock(std::unique_lock<LockInterface>&)

## BRIEF

Распределяет новый блок элементов

## CONTENT

Доступ: protected

Распределяет новый блок элементов

Параметры:
* std::unique_lock<LockInterface>& - блокировка системы аллокации

Возвращает:
* stappler::memory::PriorityQueue::StorageBlock*

# ::stappler::memory::PriorityQueue<typename>::deallocateBlock(std::unique_lock<LockInterface>&,stappler::memory::PriorityQueue::StorageBlock*)

## BRIEF

Удаляет блок элементов

## CONTENT

Доступ: protected

Удаляет блок элементов

Параметры:
* std::unique_lock<LockInterface>& - блокировка системы аллокации
* stappler::memory::PriorityQueue::StorageBlock*


# ::stappler::memory::PriorityQueue<typename>::_preallocated

## BRIEF

Массив предаллоцирвоанных элементов

## CONTENT

Доступ: protected

Массив предаллоцирвоанных элементов

Тип: std::array<Node, PreallocatedNodes>


# ::stappler::memory::PriorityQueue<typename>::_queue

## BRIEF

Интерфейс очереди активных элементов

## CONTENT

Доступ: protected

Интерфейс очереди активных элементов

Тип: stappler::memory::PriorityQueue::NodeInterface


# ::stappler::memory::PriorityQueue<typename>::_free

## BRIEF

Интерфейс списка свободных элементов

## CONTENT

Доступ: protected

Интерфейс списка свободных элементов

Тип: stappler::memory::PriorityQueue::NodeInterface


# ::stappler::memory::PriorityQueue<typename>::_capacity

## BRIEF

Текущая вместимость очереди

## CONTENT

Доступ: protected

Текущая вместимость очереди

Тип: size_t
