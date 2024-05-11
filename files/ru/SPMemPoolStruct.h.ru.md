Title: SPMemPoolStruct.h


# STAPPLER_CORE_MEMORY_POOL_SPMEMPOOLSTRUCT_H_

## BRIEF

Заголовок внутренней структуры пулов памяти

## CONTENT

Заголовок внутренней структуры пулов памяти. Не должен использоваться в основном коде.

# ::stappler::mempool::custom::MemAddr

## BRIEF

Структура адреса блока памяти

## CONTENT

Структура адреса блока памяти


# ::stappler::mempool::custom::MemAddr::size

## BRIEF

Размер блока памяти

## CONTENT

Размер блока памяти

Тип: uint32_t


# ::stappler::mempool::custom::MemAddr::next

## BRIEF

Указательн а следующий блок памяти

## CONTENT

Указательн а следующий блок памяти

Тип: stappler::mempool::custom::MemAddr*


# ::stappler::mempool::custom::MemAddr::address

## BRIEF

Адрес блока памяти

## CONTENT

Адрес блока памяти

Тип: void*


# ::stappler::mempool::custom::AllocManager

## BRIEF

Структура управления распределением памяти из пула

## CONTENT

Структура управления распределением памяти из пула


# ::stappler::mempool::custom::AllocManager::AllocFn

## BRIEF

Функция аллокации памяти

## CONTENT

Функция аллокации памяти


# ::stappler::mempool::custom::AllocManager::pool

## BRIEF

Ассоциированный пул памяти

## CONTENT

Ассоциированный пул памяти

Тип: void*


# ::stappler::mempool::custom::AllocManager::buffered

## BRIEF

Связанный список возвращённых сегментов памяти

## CONTENT

Связанный список возвращённых сегментов памяти

Тип: stappler::mempool::custom::MemAddr*


# ::stappler::mempool::custom::AllocManager::free_buffered

## BRIEF

Буферизованные структуры для хранения блков памяти

## CONTENT

Буферизованные структуры для хранения блков памяти

Тип: stappler::mempool::custom::MemAddr*


# ::stappler::mempool::custom::AllocManager::tag

## BRIEF

Информационный тег

## CONTENT

Информационный тег

Тип: uint32_t


# ::stappler::mempool::custom::AllocManager::ptr

## BRIEF

Вспомогательный указатель

## CONTENT

Вспомогательный указатель

Тип: void const*


# ::stappler::mempool::custom::AllocManager::alloc_buffer

## BRIEF

Всего распределено байт

## CONTENT

Всего распределено байт

Тип: size_t


# ::stappler::mempool::custom::AllocManager::allocated

## BRIEF

Всего распределено байт

## CONTENT

Всего распределено байт

Тип: size_t


# ::stappler::mempool::custom::AllocManager::returned

## BRIEF

Выделено через возвратную оптимизацию

## CONTENT

Выделено через возвратную оптимизацию

Тип: size_t


# ::stappler::mempool::custom::AllocManager::opts

## BRIEF

Флаги распределения памяти (устаревшее)

## CONTENT

Флаги распределения памяти (устаревшее)

Тип: size_t


# ::stappler::mempool::custom::AllocManager::reset(void*)

## BRIEF

Сбрасывает параметры управления распределением памяти

## CONTENT

Сбрасывает параметры управления распределением памяти

Параметры:
* void* - указатель на пул памяти


# ::stappler::mempool::custom::AllocManager::alloc(size_t&,stappler::mempool::custom::AllocManager::AllocFn)

## BRIEF

Выделяет память из пула

## CONTENT

Параметры:
* size_t& - (вход) число байт для распределения, (выход) реальный размер блока памяти
* stappler::mempool::custom::AllocManager::AllocFn - функция аллокации

Возвращает:
* void* - распределённая память

# ::stappler::mempool::custom::AllocManager::free(void*,size_t,stappler::mempool::custom::AllocManager::AllocFn)

## BRIEF

Освобожждает память, регистрирует её для возвратной оптимизации

## CONTENT

Освобожждает память, регистрирует её для возвратной оптимизации

Параметры:
* void* - адрес памяти
* size_t - размер блока
* stappler::mempool::custom::AllocManager::AllocFn - функция аллокации


# ::stappler::mempool::custom::AllocManager::increment_alloc(size_t)

## BRIEF

Увеличивает счётчик распределения памяти

## CONTENT

Увеличивает счётчик распределения памяти

Параметры:
* size_t


# ::stappler::mempool::custom::AllocManager::increment_return(size_t)

## BRIEF

Увеличивает счётчик возвратной оптимизации

## CONTENT

Увеличивает счётчик возвратной оптимизации

Параметры:
* size_t


# ::stappler::mempool::custom::AllocManager::get_alloc()

## BRIEF

Возвращает количество распределённых байт

## CONTENT

Возвращает количество распределённых байт

Возвращает:
* size_t

# ::stappler::mempool::custom::AllocManager::get_return()

## BRIEF

Возвращает количество байт возвратной оптимизации

## CONTENT

Возвращает количество байт возвратной оптимизации

Возвращает:
* size_t

# ::stappler::mempool::custom::MemNode

## BRIEF

Структура блока памяти

## CONTENT

Структура блока памяти

# ::stappler::mempool::custom::MemNode::next

## BRIEF

Указатель на следующий блок в списке

## CONTENT

Указатель на следующий блок в списке

Тип: stappler::mempool::custom::MemNode*


# ::stappler::mempool::custom::MemNode::ref

## BRIEF

Указатель на указатель, хранящий ссылку на себя

## CONTENT

Указатель на указатель, хранящий ссылку на себя

Тип: stappler::mempool::custom::MemNode**


# ::stappler::mempool::custom::MemNode::index

## BRIEF

Индекс размера блока

## CONTENT

Индекс размера блока

Тип: uint32_t


# ::stappler::mempool::custom::MemNode::free_index

## BRIEF

Число свободных страниц памяти в сегменте

## CONTENT

Число свободных страниц памяти в сегменте

Тип: uint32_t


# ::stappler::mempool::custom::MemNode::first_avail

## BRIEF

Указатель на первую доступную память

## CONTENT

Указатель на первую доступную память

Тип: uint8_t*


# ::stappler::mempool::custom::MemNode::endp

## BRIEF

Указатель на конец доступной памяти

## CONTENT

Указатель на конец доступной памяти

Тип: uint8_t*


# ::stappler::mempool::custom::MemNode::insert(stappler::mempool::custom::MemNode*)

## BRIEF

Добавляет сегмент в связный список

## CONTENT

Добавляет сегмент в связный список

Параметры:
* stappler::mempool::custom::MemNode*


# ::stappler::mempool::custom::MemNode::remove()

## BRIEF

Удаляет сегмент из связного списка

## CONTENT

Удаляет сегмент из связного списка


# ::stappler::mempool::custom::MemNode::free_space() const

## BRIEF

Возвращает число свободных байт

## CONTENT

Возвращает число свободных байт

Возвращает:
* size_t

# ::stappler::mempool::custom::Cleanup

## BRIEF

Структура функции деинициализации

## CONTENT

Структура функции деинициализации


# ::stappler::mempool::custom::Cleanup::Callback

## BRIEF

Тип указателя на функцию деинициализации

## CONTENT

Тип указателя на функцию деинициализации


# ::stappler::mempool::custom::Cleanup::next

## BRIEF

Указатель на следующую функцию в списке

## CONTENT

Указатель на следующую функцию в списке

Тип: stappler::mempool::custom::Cleanup*


# ::stappler::mempool::custom::Cleanup::data

## BRIEF

Непрозрачный указатель на объект

## CONTENT

Непрозрачный указатель на объект

Тип: void const*


# ::stappler::mempool::custom::Cleanup::fn

## BRIEF

Указатель на функцию деинициализации

## CONTENT

Указатель на функцию деинициализации

Тип: Callback


# ::stappler::mempool::custom::Cleanup::run(stappler::mempool::custom::Cleanup**)

## BRIEF

Запускает функции деинициализации списком

## CONTENT

Запускает функции деинициализации списком

Параметры:
* stappler::mempool::custom::Cleanup**


# ::stappler::mempool::custom::Allocator

## BRIEF

Структура аллокатора памяти

## CONTENT

Структура аллокатора памяти


# ::stappler::mempool::custom::Allocator::AllocMutex

## BRIEF

Тип мутекса аллокатора

## CONTENT

Тип мутекса аллокатора


# ::stappler::mempool::custom::Allocator::last

## BRIEF

Максимальный индекс свободного блока памяти

## CONTENT

Максимальный индекс свободного блока памяти

Тип: uint32_t


# ::stappler::mempool::custom::Allocator::max

## BRIEF

Максимальнное число хранимых свободных страниц памяти

## CONTENT

Максимальнное число хранимых свободных страниц памяти

Тип: uint32_t


# ::stappler::mempool::custom::Allocator::current

## BRIEF

Число выделенных страниц памяти

## CONTENT

Число выделенных страниц памяти

Тип: uint32_t


# ::stappler::mempool::custom::Allocator::owner

## BRIEF

Пул, отвечающий за этот аллокатор

## CONTENT

Пул, отвечающий за этот аллокатор

Тип: stappler::mempool::custom::Pool*


# ::stappler::mempool::custom::Allocator::mutex

## BRIEF

Мутекс аллокатора

## CONTENT

Мутекс аллокатора

Тип: AllocMutex*


# ::stappler::mempool::custom::Allocator::buf

## BRIEF

Буфер свободных сегментов памяти

## CONTENT

Буфер свободных сегментов памяти

Тип: std::array<MemNode *, MAX_INDEX>


# ::stappler::mempool::custom::Allocator::allocated

## BRIEF

Число аллоцированных байт

## CONTENT

Число аллоцированных байт

Тип: std::atomic<size_t>


# ::stappler::mempool::custom::Allocator::getAllocatorsCount()

## BRIEF

Возвращает число активных аллокаторов

## CONTENT

Возвращает число активных аллокаторов

Возвращает:
* size_t

# ::stappler::mempool::custom::Allocator::Allocator(bool)

## BRIEF

Создаёт новый аллокатор

## CONTENT

Создаёт новый аллокатор

Параметры:
* bool - сделать аллокатор потокобезопасным


# ::stappler::mempool::custom::Allocator::~Allocator()

## BRIEF

Уничтожает аллокатор

## CONTENT

Уничтожает аллокатор

# ::stappler::mempool::custom::Allocator::set_max(uint32_t)

## BRIEF

Устанавливает максимальное число свободных страниц памяти

## CONTENT

Устанавливает максимальное число свободных страниц памяти

Параметры:
* uint32_t


# ::stappler::mempool::custom::Allocator::alloc(uint32_t)

## BRIEF

Аллоцирует блок памяти по определённому индексу размера

## CONTENT

Аллоцирует блок памяти по определённому индексу размера

Параметры:
* uint32_t

Возвращает:
* stappler::mempool::custom::MemNode*

# ::stappler::mempool::custom::Allocator::free(stappler::mempool::custom::MemNode*)

## BRIEF

Освобождает блок памяти

## CONTENT

Освобождает блок памяти

Параметры:
* stappler::mempool::custom::MemNode*


# ::stappler::mempool::custom::Allocator::lock()

## BRIEF

Блокирует аллокатор для потокобезопасности

## CONTENT

Блокирует аллокатор для потокобезопасности


# ::stappler::mempool::custom::Allocator::unlock()

## BRIEF

Разблокирует аллокатор для потокобезопасности

## CONTENT

Разблокирует аллокатор для потокобезопасности


# ::stappler::mempool::custom::Allocator::mmapdes

## BRIEF

Файловый дескриптор для mmap

## CONTENT

Файловый дескриптор для mmap

Тип: int


# ::stappler::mempool::custom::Allocator::mmapPtr

## BRIEF

Указатель на сегмент mmap

## CONTENT

Указатель на сегмент mmap

Тип: void*


# ::stappler::mempool::custom::Allocator::mmapCurrent

## BRIEF

Число выделенной памяти из mmap

## CONTENT

Число выделенной памяти из mmap

Тип: uint32_t


# ::stappler::mempool::custom::Allocator::mmapMax

## BRIEF

Максимальный размер выделяемой памяти для mmap

## CONTENT

Максимальный размер выделяемой памяти для mmap

Тип: uint32_t


# ::stappler::mempool::custom::Allocator::run_mmap(uint64_t)

## BRIEF

Включает интерфейс mmap для распределения памяти

## CONTENT

Включает интерфейс mmap для распределения памяти

Параметры:
* uint64_t

Возвращает:
* bool

# ::stappler::mempool::custom::Allocator::allocationTracker

## BRIEF

Функция отслеживания аллокаций памяти для отладки

## CONTENT

Функция отслеживания аллокаций памяти для отладки

Тип: AllocManager::AllocFn


# ::stappler::mempool::custom::Pool

## BRIEF

Структура пула памяти

## CONTENT

Структура пула памяти


# ::stappler::mempool::custom::Pool::parent

## BRIEF

Родительский пул памяти

## CONTENT

Родительский пул памяти

Тип: stappler::mempool::custom::Pool*


# ::stappler::mempool::custom::Pool::child

## BRIEF

Первый дочерний пул в списке

## CONTENT

Первый дочерний пул в списке

Тип: stappler::mempool::custom::Pool*


# ::stappler::mempool::custom::Pool::sibling

## BRIEF

Следующий дочерний пул родителя в списке

## CONTENT

Следующий дочерний пул родителя в списке. Формирует связный список.

Тип: stappler::mempool::custom::Pool*


# ::stappler::mempool::custom::Pool::ref

## BRIEF

Указатель на указатель себя в списке пулов родителя

## CONTENT

Указатель на указатель себя в списке пулов родителя

Тип: stappler::mempool::custom::Pool**


# ::stappler::mempool::custom::Pool::cleanups

## BRIEF

Связный список функций деинициализации

## CONTENT

Связный список функций деинициализации

Тип: stappler::mempool::custom::Cleanup*


# ::stappler::mempool::custom::Pool::free_cleanups

## BRIEF

Связный список распределённый структур функций инициализации

## CONTENT

Связный список распределённый структур функций инициализации

Тип: stappler::mempool::custom::Cleanup*


# ::stappler::mempool::custom::Pool::allocator

## BRIEF

Связанный с пулом аллокатор

## CONTENT

Связанный с пулом аллокатор

Тип: stappler::mempool::custom::Allocator*


# ::stappler::mempool::custom::Pool::active

## BRIEF

Текущий активный сегмент памяти

## CONTENT

Текущий активный сегмент памяти

Тип: stappler::mempool::custom::MemNode*


# ::stappler::mempool::custom::Pool::self

## BRIEF

Сегмент памяти, содержащий данные пула

## CONTENT

Сегмент памяти, содержащий данные пула

Тип: stappler::mempool::custom::MemNode*


# ::stappler::mempool::custom::Pool::self_first_avail

## BRIEF

Указатель на доступную память из собственного базового сегмента памяти

## CONTENT

Указатель на доступную память из собственного базового сегмента памяти

Тип: uint8_t*


# ::stappler::mempool::custom::Pool::pre_cleanups

## BRIEF

Связный список ранних функций деинициализации

## CONTENT

Связный список ранних функций деинициализации

Тип: stappler::mempool::custom::Cleanup*


# ::stappler::mempool::custom::Pool::user_data

## BRIEF

Таблица пользовательских объектов

## CONTENT

Таблица пользовательских объектов

Тип: stappler::mempool::custom::HashTable*


# ::stappler::mempool::custom::Pool::allocmngr

## BRIEF

Объект, управляющий аллокацией

## CONTENT

Объект, управляющий аллокацией

Тип: stappler::mempool::custom::AllocManager


# ::stappler::mempool::custom::Pool::threadSafe

## BRIEF

Флаг потокобезопасности пула для выделения памяти

## CONTENT

Флаг потокобезопасности пула для выделения памяти

Тип: bool


# ::stappler::mempool::custom::Pool::create(stappler::mempool::custom::Allocator*,stappler::mempool::custom::PoolFlags)

## BRIEF

Создаёт пул с помощью аллокатора

## CONTENT

Создаёт пул с помощью аллокатора

Параметры:
* stappler::mempool::custom::Allocator*
* stappler::mempool::custom::PoolFlags

Возвращает:
* stappler::mempool::custom::Pool*

# ::stappler::mempool::custom::Pool::destroy(stappler::mempool::custom::Pool*)

## BRIEF

Уничтожает пул памяти

## CONTENT

Уничтожает пул памяти

Параметры:
* stappler::mempool::custom::Pool*


# ::stappler::mempool::custom::Pool::getPoolsCount()

## BRIEF

Возвращает число активных пулов памяти

## CONTENT

Возвращает число активных пулов памяти

Возвращает:
* size_t

# ::stappler::mempool::custom::Pool::Pool()

## BRIEF

Конструктор по умолчанию

## CONTENT

Конструктор по умолчанию


# ::stappler::mempool::custom::Pool::Pool(stappler::mempool::custom::Allocator*,stappler::mempool::custom::MemNode*,bool)

## BRIEF

Конструктор с использованием аллокатора и сегмента памяти

## CONTENT

Конструктор с использованием аллокатора и сегмента памяти

Параметры:
* stappler::mempool::custom::Allocator*
* stappler::mempool::custom::MemNode*
* bool - true если необходимо сделать пул потокобезопасным для аллокации


# ::stappler::mempool::custom::Pool::Pool(stappler::mempool::custom::Pool*,stappler::mempool::custom::Allocator*,stappler::mempool::custom::MemNode*,bool)

## BRIEF

Конструктор с использованием родительского пула, аллокатора и сегмента памяти

## CONTENT

Конструктор с использованием родительского пула, аллокатора и сегмента памяти

Параметры:
* stappler::mempool::custom::Pool*
* stappler::mempool::custom::Allocator*
* stappler::mempool::custom::MemNode*
* bool - true если необходимо сделать пул потокобезопасным для аллокации


# ::stappler::mempool::custom::Pool::~Pool()

## BRIEF

Деструктор

## CONTENT

Деструктор


# ::stappler::mempool::custom::Pool::alloc(size_t&)

## BRIEF

Выделяет память из пула

## CONTENT

Выделяет память из пула

Параметры:
* size_t&

Возвращает:
* void*

# ::stappler::mempool::custom::Pool::free(void*,size_t)

## BRIEF

Освобождает ранее выделенную память

## CONTENT

Освобождает ранее выделенную память. Необязательный вызов.

Параметры:
* void*
* size_t


# ::stappler::mempool::custom::Pool::palloc(size_t)

## BRIEF

Распределяет память

## CONTENT

Распределяет память

Параметры:
* size_t

Возвращает:
* void*

# ::stappler::mempool::custom::Pool::calloc(size_t,size_t)

## BRIEF

Распределяет память для нескольких объектов

## CONTENT

Распределяет память для нескольких объектов

Параметры:
* size_t
* size_t

Возвращает:
* void*

# ::stappler::mempool::custom::Pool::pmemdup(void const*,size_t)

## BRIEF

Дублирует блок памяти с использованием пула памяти 

## CONTENT

Дублирует блок памяти с использованием пула памяти 

Параметры:
* void const*
* size_t

Возвращает:
* void*

# ::stappler::mempool::custom::Pool::pstrdup(char const*)

## BRIEF

Дублирует строку с использованием пула памяти 

## CONTENT

Дублирует строку с использованием пула памяти 

Параметры:
* char const*

Возвращает:
* char*

# ::stappler::mempool::custom::Pool::clear()

## BRIEF

Очищает пул памяти

## CONTENT

Очищает пул памяти, вызывает функции деинициализации

# ::stappler::mempool::custom::Pool::make_child()

## BRIEF

Порождает новый дочерний пул

## CONTENT

Порождает новый дочерний пул

Возвращает:
* stappler::mempool::custom::Pool*

# ::stappler::mempool::custom::Pool::make_child(stappler::mempool::custom::Allocator*)

## BRIEF

Порождает новый дочерний пул с помощью аллокатора

## CONTENT

Порождает новый дочерний пул с помощью аллокатора

Параметры:
* stappler::mempool::custom::Allocator*

Возвращает:
* stappler::mempool::custom::Pool*

# ::stappler::mempool::custom::Pool::cleanup_register(void const*,Cleanup::Callback)

## BRIEF

Регистрирует функцию деинициализации

## CONTENT

Регистрирует функцию деинициализации

Параметры:
* void const*
* Cleanup::Callback


# ::stappler::mempool::custom::Pool::pre_cleanup_register(void const*,Cleanup::Callback)

## BRIEF

Регистрирует предварительную функцию деинициализации

## CONTENT

Регистрирует предварительную функцию деинициализации

Параметры:
* void const*
* Cleanup::Callback


# ::stappler::mempool::custom::Pool::cleanup_kill(void*,Cleanup::Callback)

## BRIEF

Запускает функцию деинициализации и удаляет её из списка

## CONTENT

Запускает функцию деинициализации и удаляет её из списка

Параметры:
* void*
* Cleanup::Callback


# ::stappler::mempool::custom::Pool::cleanup_run(void*,Cleanup::Callback)

## BRIEF

Запускает функцию деинициализации

## CONTENT

Запускает функцию деинициализации

Параметры:
* void*
* Cleanup::Callback


# ::stappler::mempool::custom::Pool::userdata_set(void const*,char const*,Cleanup::Callback)

## BRIEF

Добавляет пользовательский объект

## CONTENT

Добавляет пользовательский объект

Параметры:
* void const*
* char const*
* Cleanup::Callback

Возвращает:
* stappler::mempool::custom::Status

# ::stappler::mempool::custom::Pool::userdata_setn(void const*,char const*,Cleanup::Callback)

## BRIEF

Добавляет пользовательский объект

## CONTENT

Добавляет пользовательский объект

Параметры:
* void const*
* char const*
* Cleanup::Callback

Возвращает:
* stappler::mempool::custom::Status

# ::stappler::mempool::custom::Pool::userdata_get(void**,char const*)

## BRIEF

Получает пользовательский объект

## CONTENT

Получает пользовательский объект

Параметры:
* void**
* char const*

Возвращает:
* stappler::mempool::custom::Status

# ::stappler::mempool::custom::Pool::userdata_get(void**,char const*,size_t)

## BRIEF

Получает пользовательский объект

## CONTENT

Получает пользовательский объект

Параметры:
* void**
* char const*
* size_t

Возвращает:
* stappler::mempool::custom::Status

# ::stappler::mempool::custom::Pool::lock()

## BRIEF

Блокирует пул для потокобезопасности

## CONTENT

Блокирует пул для потокобезопасности


# ::stappler::mempool::custom::Pool::unlock()

## BRIEF

Деблокирует пул для потокобезопасности

## CONTENT

Деблокирует пул для потокобезопасности


# ::stappler::mempool::custom::HashFunc

## BRIEF

Хеш-функция для пользовательских объектов

## CONTENT

Хеш-функция для пользовательских объектов


# ::stappler::mempool::custom::HashEntry

## BRIEF

Элемент хеш-таблицы пользовательских значений

## CONTENT

Элемент хеш-таблицы пользовательских значений


# ::stappler::mempool::custom::HashEntry::next

## BRIEF

Следующий элемент в связном списке

## CONTENT

Следующий элемент в связном списке

Тип: stappler::mempool::custom::HashEntry*


# ::stappler::mempool::custom::HashEntry::hash

## BRIEF

Значение хэша элемента

## CONTENT

Значение хэша элемента

Тип: uint32_t


# ::stappler::mempool::custom::HashEntry::key

## BRIEF

Непрозрачный указатель на ключ

## CONTENT

Непрозрачный указатель на ключ

Тип: void const*


# ::stappler::mempool::custom::HashEntry::klen

## BRIEF

Длина ключа

## CONTENT

Длина ключа

Тип: size_t


# ::stappler::mempool::custom::HashEntry::val

## BRIEF

Непрозрачный указатель на значение

## CONTENT

Непрозрачный указатель на значение

Тип: void const*


# ::stappler::mempool::custom::HashIndex

## BRIEF

Итератор для обхода значений хэш-таблицы

## CONTENT

Итератор для обхода значений хэш-таблицы


# ::stappler::mempool::custom::HashIndex::ht

## BRIEF

Указатель на таблицу

## CONTENT

Указатель на таблицу

Тип: stappler::mempool::custom::HashTable*


# ::stappler::mempool::custom::HashIndex::_self

## BRIEF

Указатель на текущий элемент итерации

## CONTENT

Указатель на текущий элемент итерации

Тип: stappler::mempool::custom::HashEntry*


# ::stappler::mempool::custom::HashIndex::_next

## BRIEF

Указатель на следующий элемент итерации

## CONTENT

Указатель на следующий элемент итерации

Тип: stappler::mempool::custom::HashEntry*


# ::stappler::mempool::custom::HashIndex::index

## BRIEF

Текущий индекс в таблице

## CONTENT

Текущий индекс в таблице

Тип: uint32_t


# ::stappler::mempool::custom::HashIndex::next()

## BRIEF

Возвращает итератор, указывающий на следующее значение

## CONTENT

Возвращает итератор, указывающий на следующее значение

Возвращает:
* stappler::mempool::custom::HashIndex*

# ::stappler::mempool::custom::HashIndex::self(void const**,size_t*,void**)

## BRIEF

Читает ключ и значение текущего элемента

## CONTENT

Читает ключ и значение текущего элемента

Параметры:
* void const**
* size_t*
* void**


# ::stappler::mempool::custom::HashTable

## BRIEF

Структура внутренней хэш-таблицы пула памяти

## CONTENT

Структура внутренней хэш-таблицы пула памяти



# ::stappler::mempool::custom::HashTable::merge_fn

## BRIEF

Функция объединения элемента по ключу

## CONTENT

Функция объединения элемента по ключу


# ::stappler::mempool::custom::HashTable::foreach_fn

## BRIEF

Функция перечисления всех элементов таблицы

## CONTENT

Функция перечисления всех элементов таблицы


# ::stappler::mempool::custom::HashTable::pool

## BRIEF

Пул памяти таблицы

## CONTENT

Пул памяти таблицы

Тип: stappler::mempool::custom::Pool*


# ::stappler::mempool::custom::HashTable::array

## BRIEF

Массив записей в таблице

## CONTENT

Массив записей в таблице

Тип: stappler::mempool::custom::HashEntry**


# ::stappler::mempool::custom::HashTable::iterator

## BRIEF

Вложенная структура итератора для экономии памяти при обходе

## CONTENT

Вложенная структура итератора для экономии памяти при обходе

Тип: stappler::mempool::custom::HashIndex


# ::stappler::mempool::custom::HashTable::count

## BRIEF

Число элементов в таблице

## CONTENT

Число элементов в таблице

Тип: uint32_t


# ::stappler::mempool::custom::HashTable::max

## BRIEF

Максимальная текущая вместимость таблицы

## CONTENT

Максимальная текущая вместимость таблицы

Тип: uint32_t


# ::stappler::mempool::custom::HashTable::seed

## BRIEF

Инициализирующее значение хэшей в таблице

## CONTENT

Инициализирующее значение хэшей в таблице

Тип: uint32_t


# ::stappler::mempool::custom::HashTable::hash_func

## BRIEF

Указатель на функцию хэширования

## CONTENT

Указатель на функцию хэширования

Тип: stappler::mempool::custom::HashFunc


# ::stappler::mempool::custom::HashTable::free

## BRIEF

Связный список свободных ячеек элементов

## CONTENT

Связный список свободных ячеек элементов

Тип: stappler::mempool::custom::HashEntry*


# ::stappler::mempool::custom::HashTable::init(stappler::mempool::custom::HashTable*,stappler::mempool::custom::Pool*)

## BRIEF

Инициализирует новую хэш-таблицу

## CONTENT

Инициализирует новую хэш-таблицу

Параметры:
* stappler::mempool::custom::HashTable*
* stappler::mempool::custom::Pool*


# ::stappler::mempool::custom::HashTable::make(stappler::mempool::custom::Pool*)

## BRIEF

Создаёт новую хэш-таблицу из пула памяти

## CONTENT

Создаёт новую хэш-таблицу из пула памяти

Параметры:
* stappler::mempool::custom::Pool*

Возвращает:
* stappler::mempool::custom::HashTable*

# ::stappler::mempool::custom::HashTable::make(stappler::mempool::custom::Pool*,stappler::mempool::custom::HashFunc)

## BRIEF

Создаёт новую хэш-таблицу из пула памяти

## CONTENT

Создаёт новую хэш-таблицу из пула памяти

Параметры:
* stappler::mempool::custom::Pool*
* stappler::mempool::custom::HashFunc

Возвращает:
* stappler::mempool::custom::HashTable*

# ::stappler::mempool::custom::HashTable::first(stappler::mempool::custom::Pool*)

## BRIEF

Возвращает итератор, указывающий на первый элемент в таблице

## CONTENT

Возвращает итератор, указывающий на первый элемент в таблице

Параметры:
* stappler::mempool::custom::Pool*

Возвращает:
* stappler::mempool::custom::HashIndex*

# ::stappler::mempool::custom::HashTable::copy(stappler::mempool::custom::Pool*) const

## BRIEF

Копирует хэш-таблицу

## CONTENT

Копирует хэш-таблицу

Параметры:
* stappler::mempool::custom::Pool*

Возвращает:
* stappler::mempool::custom::HashTable*

# ::stappler::mempool::custom::HashTable::get(void const*,size_t)

## BRIEF

Получает значение из таблицы по ключу

## CONTENT

Получает значение из таблицы по ключу

Параметры:
* void const*
* size_t

Возвращает:
* void*

# ::stappler::mempool::custom::HashTable::set(void const*,size_t,void const*)

## BRIEF

Устанавливает значение для ключа

## CONTENT

Устанавливает значение для ключа

Параметры:
* void const*
* size_t
* void const*


# ::stappler::mempool::custom::HashTable::size() const

## BRIEF

Возвращает текущее количество элементов в таблице

## CONTENT

Возвращает текущее количество элементов в таблице

Возвращает:
* size_t

# ::stappler::mempool::custom::HashTable::clear()

## BRIEF

Очищает таблицу

## CONTENT

Очищает таблицу


# ::stappler::mempool::custom::HashTable::merge(stappler::mempool::custom::Pool*,stappler::mempool::custom::HashTable const*) const

## BRIEF

Объединяет две таблицы

## CONTENT

Объединяет две таблицы

Параметры:
* stappler::mempool::custom::Pool*
* stappler::mempool::custom::HashTable const*

Возвращает:
* stappler::mempool::custom::HashTable*

# ::stappler::mempool::custom::HashTable::merge(stappler::mempool::custom::Pool*,stappler::mempool::custom::HashTable const*,stappler::mempool::custom::HashTable::merge_fn,void const*) const

## BRIEF

Объединяет две таблицы

## CONTENT

Объединяет две таблицы

Параметры:
* stappler::mempool::custom::Pool*
* stappler::mempool::custom::HashTable const*
* stappler::mempool::custom::HashTable::merge_fn
* void const*

Возвращает:
* stappler::mempool::custom::HashTable*

# ::stappler::mempool::custom::HashTable::foreach(stappler::mempool::custom::HashTable::foreach_fn,void*) const

## BRIEF

Обходит все элементы в таблице

## CONTENT

Обходит все элементы в таблице

Параметры:
* stappler::mempool::custom::HashTable::foreach_fn
* void*

Возвращает:
* bool

# ::stappler::mempool::custom::initialize()

## BRIEF

Инициализирует подсистему пулов памяти

## CONTENT

Инициализирует подсистему пулов памяти


# ::stappler::mempool::custom::terminate()

## BRIEF

Деинициализирует подсистему пулов памяти

## CONTENT

Деинициализирует подсистему пулов памяти


# ::stappler::mempool::custom::create(stappler::mempool::custom::Pool*)

## BRIEF

Создаёт новый дочерний пул памяти

## CONTENT

Создаёт новый дочерний пул памяти

Параметры:
* stappler::mempool::custom::Pool*

Возвращает:
* stappler::mempool::custom::Pool*

# ::stappler::mempool::custom::destroy(stappler::mempool::custom::Pool*)

## BRIEF

Уничтоает пул памяти

## CONTENT

Уничтоает пул памяти

Параметры:
* stappler::mempool::custom::Pool*


# ::stappler::mempool::custom::clear(stappler::mempool::custom::Pool*)

## BRIEF

Очищает пул памяти

## CONTENT

Очищает пул памяти

Параметры:
* stappler::mempool::custom::Pool*


# ::stappler::mempool::custom::SIZEOF_MEMNODE

## BRIEF

Размер структуры сегмента памяти

## CONTENT

Размер структуры сегмента памяти

Тип: size_t const


# ::stappler::mempool::custom::SIZEOF_POOL

## BRIEF

Размер структуры пула памяти

## CONTENT

Размер структуры пула памяти

Тип: size_t const

# ::stappler::mempool::custom::AllocManager::name

## BRIEF

Назначенное имя для пула памяти

## CONTENT

Назначенное имя для пула памяти, используется при отладке.

Тип: char const*

# ::stappler::mempool::custom::Pool::palloc_self(size_t)

## BRIEF

Функция оптимизированного распределения памяти

## CONTENT

Функция оптимизированного распределения памяти. Пытается выделять память в первую очередь из блока, в котором находится сам пул памяти, даже если он помечен как полный.

При реализации блок памяти может быть помечен как полный при выделении большого сегмента памяти. Это часто оставляет свободным пространтсво в исходном блоке. Это пространство всё ещё можно использовать для малых управляющих конструкций.

Если выделить из начального блока не удалось - использует станддартное поведение.

Параметры:
* size_t - требуемый размер сегмента

Возвращает:
* void* - указатель на выделенную память.