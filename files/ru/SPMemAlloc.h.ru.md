Title: SPMemAlloc.h


# STAPPLER_CORE_MEMORY_SPMEMALLOC_H_

## BRIEF

Заголовок интерфейса аллокации памяти для контейнеров на основе пулов памяти

## CONTENT

Заголовок интерфейса аллокации памяти для контейнеров на основе пулов памяти


# ::stappler::memory::AllocBase

## BRIEF

Базовый класс, содержащий стандартные операторы аллокации

## CONTENT

Базовый класс, содержащий стандартные операторы аллокации


# ::stappler::memory::AllocBase::operator new(size_t)

## BRIEF

Оператор аллокации памяти

## CONTENT

Оператор аллокации памяти

Параметры:
* size_t

Возвращает:
* void*

# ::stappler::memory::AllocBase::operator new(size_t,std::nothrow_t const&)

## BRIEF

Оператор аллокации памяти

## CONTENT

Оператор аллокации памяти

Параметры:
* size_t
* std::nothrow_t const&

Возвращает:
* void*

# ::stappler::memory::AllocBase::operator new(size_t,void*)

## BRIEF

Оператор размещающего распределения

## CONTENT

Оператор размещающего распределения

Параметры:
* size_t
* void*

Возвращает:
* void*

# ::stappler::memory::AllocBase::operator delete(void*)

## BRIEF

Стандартный оператор деаллокации

## CONTENT

Стандартный оператор деаллокации

Параметры:
* void*


# ::stappler::memory::AllocPool

## BRIEF

## CONTENT


# ::stappler::memory::AllocPool::operator new(size_t)

## BRIEF

Оператор аллокации памяти, распределяет из пула по умолчанию

## CONTENT

Оператор аллокации памяти, распределяет из пула по умолчанию

Параметры:
* size_t

Возвращает:
* void*

# ::stappler::memory::AllocPool::operator new(size_t,stappler::mempool::base::pool_t*)

## BRIEF

Оператор аллокации памяти, распределяет указанного пула

## CONTENT

Оператор аллокации памяти, распределяет указанного пула

Параметры:
* size_t
* stappler::mempool::base::pool_t*

Возвращает:
* void*

# ::stappler::memory::AllocPool::operator new(size_t,void*)

## BRIEF

Оператор размещающего распределения, работает по стандарту

## CONTENT

Оператор размещающего распределения, работает по стандарту

Параметры:
* size_t
* void*

Возвращает:
* void*

# ::stappler::memory::AllocPool::operator delete(void*)

## BRIEF

Оператор деаллокации, не делает ничего

## CONTENT

Оператор деаллокации, не делает ничего

Параметры:
* void*


# ::stappler::memory::AllocPool::getCurrentPool()

## BRIEF

Получает текущий рабочий пул из контекста

## CONTENT

Получает текущий рабочий пул из контекста

Возвращает:
* stappler::mempool::base::pool_t*

# ::stappler::memory::AllocPool::isCustomPool(stappler::mempool::base::pool_t*)

## BRIEF

Проверяет, является ли реализация пула встроенной или библиотечной

## CONTENT

Проверяет, является ли реализация пула встроенной или библиотечной

Параметры:
* stappler::mempool::base::pool_t*

Возвращает:
* bool - true если реализация пула встроенная


# ::stappler::memory::AllocPool::cleanupObjectFromPool<typename>(void*)

## BRIEF

Вызывает деструктор объекта

## CONTENT

Вызывает деструктор объекта

Параметры шаблона:
* typename T - тип объекта

Параметры:
* void* - указатель на память объекта

Возвращает:
* stappler::mempool::base::status_t - 0 - успешная операция

# ::stappler::memory::AllocPool::registerCleanupDestructor<typename>(T*,stappler::mempool::base::pool_t*)

## BRIEF

Регистрирует деструктор объекта для вызова при уничтожении пула памяти

## CONTENT

Регистрирует деструктор объекта для вызова при уничтожении пула памяти. По умолчанию, без вызова этой функции, деструктор не будет вызываться.

Параметры шаблона:
* typename T

Параметры:
* T*
* stappler::mempool::base::pool_t*


# ::stappler::memory::Allocator_SelectFirst<A,Args...>::Allocator_SelectFirst<A,Args...>

## BRIEF

Структура для выбора первого аргумента из списка

## CONTENT

Структура для выбора первого аргумента из списка

Параметры шаблона:
* class A
* class Args


# ::stappler::memory::Allocator_SelectFirst<A,Args...>::type

## BRIEF

Тип первого аргумента в списке

## CONTENT

Тип первого аргумента в списке


# ::stappler::memory::Allocator_protect_construct<typename>

## BRIEF

Структура, определяющая режим защиты конструктора для объекта в контейнере.

## CONTENT

Структура, определяющая режим защиты конструктора для объекта в контейнере. Если используется безопасный конструктор, перед созданием объектов пул аллокатора будет добавлен в контекст и изъят после. Это уменьшает скорость работы, но позволяет защититься от ошибок аллокации из разных пулов.

Параметры шаблона:
* typename Type - тип объекта


# ::stappler::memory::Allocator_protect_construct<typename>::value

## BRIEF

Значение режима защиты конструктора для типа

## CONTENT

Значение режима защиты конструктора для типа

Тип: bool const


# ::stappler::memory::Allocator<class>

## BRIEF

Тип аллокатора для контейнеров

## CONTENT

Тип аллокатора для контейнеров

Параметры шаблона:
* class T - тип хранимого в контейнере значения


# ::stappler::memory::Allocator<class>::pointer

## BRIEF

Тип указателя

## CONTENT

Доступ: public

Тип указателя


# ::stappler::memory::Allocator<class>::const_pointer

## BRIEF

Тип постоянного указателя

## CONTENT

Доступ: public

Тип постоянного указателя


# ::stappler::memory::Allocator<class>::void_pointer

## BRIEF

Тип базового указателя

## CONTENT

Доступ: public

Тип базового указателя

# ::stappler::memory::Allocator<class>::const_void_pointer

## BRIEF

Тип постоянного базового указателя

## CONTENT

Доступ: public

Тип постоянного базового указателя


# ::stappler::memory::Allocator<class>::reference

## BRIEF

Тип ссылки

## CONTENT

Доступ: public

Тип ссылки


# ::stappler::memory::Allocator<class>::const_reference

## BRIEF

Тип постоянной ссылки

## CONTENT

Доступ: public

Тип постоянной ссылки


# ::stappler::memory::Allocator<class>::value_type

## BRIEF

Тип хранимого значения

## CONTENT

Доступ: public

Тип хранимого значения


# ::stappler::memory::Allocator<class>::size_type

## BRIEF

Тип размера

## CONTENT

Доступ: public

Тип размера


# ::stappler::memory::Allocator<class>::difference_type

## BRIEF

Тип разности размеров

## CONTENT

Доступ: public

Тип разности размеров


# ::stappler::memory::Allocator<class>::rebind<class>

## BRIEF

Структура переключения типа аллокатора на другой тип хранимого значения

## CONTENT

Доступ: public

Структура переключения типа аллокатора на другой тип хранимого значения

Параметры шаблона:
* class U


# ::stappler::memory::Allocator<class>::rebind<class>::other

## BRIEF

Тип аллокатора для другого типа хранимого значения

## CONTENT

Тип аллокатора для другого типа хранимого значения


# ::stappler::memory::Allocator<class>::AllocFlag

## BRIEF

Флаги аллокации

## CONTENT

Доступ: public

Флаги аллокации. Поскольку система пулов имеет минимум 8-битное выравнивание, 3 бита в указателе всегда может быть исользовано для дополнительной информации в качестве флагов.

Значения:
* FirstFlag - первый флаг
* SecondFlag - второй флаг
* ThirdFlag - третий флаг
* BitMask - маска для исключения флагов из указателя


# ::stappler::memory::Allocator<class>::pool_ptr(stappler::mempool::base::pool_t*)

## BRIEF

Получает адрес пула, исключая флаги аллокации

## CONTENT

Доступ: private

Получает адрес пула, исключая флаги аллокации

Параметры:
* stappler::mempool::base::pool_t*

Возвращает:
* stappler::mempool::base::pool_t*

# ::stappler::memory::Allocator<class>::Allocator()

## BRIEF

Конструктор по умолчанию

## CONTENT

Доступ: public

Конструктор по умолчанию, получает пул из контекста


# ::stappler::memory::Allocator<class>::Allocator(stappler::mempool::base::pool_t*)

## BRIEF

Конструктор с пулом памяти

## CONTENT

Доступ: public

Конструктор с пулом памяти

Параметры:
* stappler::mempool::base::pool_t*


# ::stappler::memory::Allocator<class>::Allocator<class>(Allocator<B> const&)

## BRIEF

Конструктор из аллокатора другого типа

## CONTENT

Доступ: public

Конструктор из аллокатора другого типа

Параметры шаблона:
* class B - другой тип

Параметры:
* Allocator<B> const&


# ::stappler::memory::Allocator<class>::Allocator<class>(Allocator<B>&&)

## BRIEF

Конструктор из аллокатора другого типа

## CONTENT

Доступ: public

Конструктор из аллокатора другого типа

Параметры шаблона:
* class B - другой тип

Параметры:
* Allocator<B>&&


# ::stappler::memory::Allocator<class>::operator=<class>(Allocator<B> const&)

## BRIEF

Оператор присваивания из аллокатора другого типа

## CONTENT

Доступ: public

Оператор присваивания из аллокатора другого типа

Параметры шаблона:
* class B - другой тип

Параметры:
* Allocator<B> const&

Возвращает:
* Allocator<T>&

# ::stappler::memory::Allocator<class>::operator=<class>(Allocator<B>&&)

## BRIEF

Оператор присваивания из аллокатора другого типа

## CONTENT

Доступ: public

Оператор присваивания из аллокатора другого типа

Параметры шаблона:
* class B - другой тип

Параметры:
* Allocator<B>&&

Возвращает:
* Allocator<T>&

# ::stappler::memory::Allocator<class>::allocate(size_t)

## BRIEF

Аллоцирует память под несколько объектов

## CONTENT

Доступ: public

Аллоцирует память под несколько объектов

Параметры:
* size_t - число объектов

Возвращает:
* T* - указатель на блок памяти под объекты

# ::stappler::memory::Allocator<class>::__allocate(size_t&)

## BRIEF

Аллоцирует память под несколько объектов

## CONTENT

Доступ: public

Аллоцирует память под несколько объектов. Использует возможность получить реальный размер распределяемого блока, чтобы сообщить контейнеру, что в выделенный блок войдёт больше объектов.

Параметры:
* size_t& - вход - число объектов для аллокации, выход - число объектов, которые можно реально разместить в выделенном блоке

Возвращает:
* T* - указатель на блок памяти под объекты

# ::stappler::memory::Allocator<class>::__allocate(size_t,size_t&)

## BRIEF

Аллоцирует память под несколько объектов

## CONTENT

Доступ: public

Аллоцирует память под несколько объектов. Использует возможность получить реальный размер распределяемого блока, чтобы сообщить контейнеру, сколько реально байт распределено.

Параметры:
* size_t - число объектов для аллокации
* size_t& - (выход) число аллоцированных байт

Возвращает:
* T* - указатель на блок памяти под объекты

# ::stappler::memory::Allocator<class>::deallocate(T*,size_t)

## BRIEF

Деаллоцирует блок памяти

## CONTENT

Доступ: public

Деаллоцирует блок памяти

Параметры:
* T* - указатель на блок памяти под объекты
* size_t - число объектов в памяти


# ::stappler::memory::Allocator<class>::__deallocate(T*,size_t,size_t)

## BRIEF

Деаллоцирует блок памяти

## CONTENT

Доступ: public

Деаллоцирует блок памяти

Параметры:
* T* - указатель на блок памяти под объекты
* size_t - число объектов в памяти
* size_t - количество байтов в блоке


# ::stappler::memory::Allocator<class>::operator==<class>(Allocator<B> const&) const

## BRIEF

Оператор сравнения аллокаторов

## CONTENT

Доступ: public

Оператор сравнения аллокаторов. Аллокаторы равны, если относятся к одному и тому же пулу памяти.

Параметры шаблона:
* class B

Параметры:
* Allocator<B> const&

Возвращает:
* bool

# ::stappler::memory::Allocator<class>::operator!=<class>(Allocator<B> const&) const

## BRIEF

Оператор сравнения аллокаторов

## CONTENT

Доступ: public

Оператор сравнения аллокаторов. Аллокаторы равны, если относятся к одному и тому же пулу памяти.

Параметры шаблона:
* class B

Параметры:
* Allocator<B> const&

Возвращает:
* bool

# ::stappler::memory::Allocator<class>::address(stappler::memory::Allocator::reference) const

## BRIEF

Возвращает адрес указателя для ссылки на объект

## CONTENT

Доступ: public

Возвращает адрес указателя для ссылки на объект

Параметры:
* stappler::memory::Allocator::reference

Возвращает:
* pointer

# ::stappler::memory::Allocator<class>::address(stappler::memory::Allocator::const_reference) const

## BRIEF

Возвращает адрес указателя для ссылки на объект

## CONTENT

Доступ: public

Возвращает адрес указателя для ссылки на объект

Параметры:
* stappler::memory::Allocator::const_reference

Возвращает:
* const_pointer

# ::stappler::memory::Allocator<class>::max_size() const

## BRIEF

Возвращает максимальный размер для аллокации в байтах

## CONTENT

Доступ: public

Возвращает максимальный размер для аллокации в байтах

Возвращает:
* size_type

# ::stappler::memory::Allocator<class>::construct<typename>(stappler::memory::Allocator::pointer,Args &&...)

## BRIEF

Конструирует новый объект по указателю

## CONTENT

Доступ: public

Конструирует новый объект по указателю

Параметры шаблона:
* typename Args

Параметры:
* stappler::memory::Allocator::pointer - указатель на распределённую память для объекта
* Args &&... - аргументы конструктора


# ::stappler::memory::Allocator<class>::destroy(stappler::memory::Allocator::pointer)

## BRIEF

Уничтожает объект по указателю

## CONTENT

Доступ: public

Уничтожает объект по указателю

Параметры:
* stappler::memory::Allocator::pointer


# ::stappler::memory::Allocator<class>::destroy(stappler::memory::Allocator::pointer,size_t)

## BRIEF

Уничтожает несколько объектов по указателю

## CONTENT

Доступ: public

Уничтожает несколько объектов по указателю

Параметры:
* stappler::memory::Allocator::pointer - указательна блок объектов
* size_t - число объектов в блоке


# ::stappler::memory::Allocator<class>::operator pool_t*() const

## BRIEF

Конвертация аллокатора в пул памяти

## CONTENT

Доступ: public

Конвертация аллокатора в пул памяти

Возвращает:
* stappler::mempool::base::pool_t*

# ::stappler::memory::Allocator<class>::getPool() const

## BRIEF

Получает рабочий пул памяти аллокатора

## CONTENT

Доступ: public

Получает рабочий пул памяти аллокатора

Возвращает:
* stappler::mempool::base::pool_t*

# ::stappler::memory::Allocator<class>::copy(T*,T const*,size_t)

## BRIEF

Копирует объекты в другой блок памяти

## CONTENT

Доступ: public

Копирует объекты в другой блок памяти. Вызывает конструктор копирования.

Параметры:
* T* - целевой блок памяти
* T const* - исходный блок памяти
* size_t - число объектов


# ::stappler::memory::Allocator<class>::copy_rewrite(T*,size_t,T const*,size_t)

## BRIEF

Копирует объекты в другой блок памяти, перезаписывая уже существующие

## CONTENT

Доступ: public

Копирует объекты в другой блок памяти, перезаписывая уже существующие. Вызывает деструкторы и конструкторы копирования. 

Параметры:
* T* - целевой блок памяти
* size_t - число существующих объектов в целевом блоке
* T const* - исходный блок памяти
* size_t - число объектов в исходном блоке


# ::stappler::memory::Allocator<class>::move(T*,T*,size_t)

## BRIEF

Перемещает объекты между блоками памяти

## CONTENT

Доступ: public

Перемещает объекты между блоками памяти. Вызывает конструктор перемещения

Параметры:
* T* - целевой блок памяти
* T* - исходный блок памяти
* size_t - число объектов


# ::stappler::memory::Allocator<class>::move_rewrite(T*,size_t,T*,size_t)

## BRIEF

Перемещает объекты между блоками памяти, унитожая уже существующие

## CONTENT

Доступ: public

Перемещает объекты между блоками памяти, унитожая уже существующие. Вызывает деструкторы и конструкторы перемещения. 

Параметры:
* T* - целевой блок памяти
* size_t - число существующих объектов в целевом блоке
* T* - исходный блок памяти
* size_t - число объектов в исходном блоке


# ::stappler::memory::Allocator<class>::test(stappler::memory::Allocator::AllocFlag) const

## BRIEF

Проверяет, установлен ли флаг аллокатора

## CONTENT

Доступ: public

Проверяет, установлен ли флаг аллокатора

Параметры:
* stappler::memory::Allocator::AllocFlag

Возвращает:
* bool

# ::stappler::memory::Allocator<class>::set(stappler::memory::Allocator::AllocFlag)

## BRIEF

Устанавливает флаг аллокатора

## CONTENT

Доступ: public

Устанавливает флаг аллокатора

Параметры:
* stappler::memory::Allocator::AllocFlag


# ::stappler::memory::Allocator<class>::reset(stappler::memory::Allocator::AllocFlag)

## BRIEF

Убирает флаг аллокатора

## CONTENT

Доступ: public

Убирает флаг аллокатора

Параметры:
* stappler::memory::Allocator::AllocFlag


# ::stappler::memory::Allocator<class>::flip(stappler::memory::Allocator::AllocFlag)

## BRIEF

Переключает флаг аллокатора

## CONTENT

Доступ: public

Переключает флаг аллокатора

Параметры:
* stappler::memory::Allocator::AllocFlag


# ::stappler::memory::Allocator<class>::pool

## BRIEF

Пул памяти аллокатора

## CONTENT

Доступ: private

Пул памяти аллокатора

Тип: stappler::mempool::base::pool_t*


# ::stappler::memory::Storage<typename>

## BRIEF

Хранилище с выравниванием памяти для объектов в контейнерах

## CONTENT

Хранилище с выравниванием памяти для объектов в контейнерах

Параметры шаблона:
* typename Value - тип хранимого объекта


# ::stappler::memory::Storage<typename>::Image

## BRIEF

Блок памяти под объект

## CONTENT

Блок памяти под объект


# ::stappler::memory::Storage<typename>::Image::_value

## BRIEF

Хранимый объект

## CONTENT

Хранимый объект

Тип: Value


# ::stappler::memory::Storage<typename>::_storage

## BRIEF

Массив байт для хранения объекта

## CONTENT

Массив байт для хранения объекта

Тип: uint8_t[sizeof(_Tp)]


# ::stappler::memory::Storage<typename>::Storage()

## BRIEF

Конструктор по умолчанию

## CONTENT

Конструктор по умолчанию

# ::stappler::memory::Storage<typename>::Storage(stappler::nullptr_t)

## BRIEF

Конструктор с нулевым объектом

## CONTENT

Конструктор с нулевым объектом

Параметры:
* stappler::nullptr_t


# ::stappler::memory::Storage<typename>::addr()

## BRIEF

Возвращает адрес для хранения объекта

## CONTENT

Возвращает адрес для хранения объекта

Возвращает:
* void*

# ::stappler::memory::Storage<typename>::addr() const

## BRIEF

Возвращает адрес для хранения объекта

## CONTENT

Возвращает адрес для хранения объекта

Возвращает:
* void const*

# ::stappler::memory::Storage<typename>::ptr()

## BRIEF

Возвращает указатель на объект

## CONTENT

Возвращает указатель на объект

Возвращает:
* Value*

# ::stappler::memory::Storage<typename>::ptr() const

## BRIEF

Возвращает указатель на объект

## CONTENT

Возвращает указатель на объект

Возвращает:
* Value const*

# ::stappler::memory::Storage<typename>::ref()

## BRIEF

Возвращает ссылку на объект

## CONTENT

Возвращает ссылку на объект

Возвращает:
* Value&

# ::stappler::memory::Storage<typename>::ref() const

## BRIEF

Возвращает ссылку на объект

## CONTENT

Возвращает ссылку на объект

Возвращает:
* Value const&
