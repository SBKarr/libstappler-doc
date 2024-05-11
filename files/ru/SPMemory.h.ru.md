Title: SPMemory.h

# STAPPLER_CORE_SPMEMORY_H_

## BRIEF

Заголовок описания интерфейсов памяти

## CONTENT

Заголовок описания интерфейсов памяти. Описывает два интерфейса, подключаемые с помощью включения пространства имён: mem_std и mem_pool


# ::stappler::mem_pool::pool

## BRIEF

Интерфейс пула памяти

## CONTENT

Интерфейс пула памяти


# ::stappler::mem_pool::allocator

## BRIEF

Интерфейс аллокатора памяти

## CONTENT

Интерфейс аллокатора памяти


# ::stappler::mem_pool::CharGroupId

## BRIEF

Интерфейс групп символов

## CONTENT

Интерфейс групп символов


# ::stappler::mem_pool::AllocBase

## BRIEF

Базовый класс для аллокации из интерфейса памяти

## CONTENT

Базовый класс для аллокации из интерфейса памяти

# ::stappler::mem_pool::String

## BRIEF

Класс стандартной строки

## CONTENT

Класс стандартной строки


# ::stappler::mem_pool::WideString

## BRIEF

Класс широкой строки

## CONTENT

Класс широкой строки

# ::stappler::mem_pool::Bytes

## BRIEF

Класс байтовой строки

## CONTENT

Класс байтовой строки


# ::stappler::mem_pool::StringStream

## BRIEF

Класс стркового потока

## CONTENT

Класс стркового потока


# ::stappler::mem_pool::OutputStream

## BRIEF

Класс стандартного потока

## CONTENT

Класс стандартного потока


# ::stappler::mem_pool::Vector<typename>

## BRIEF

Класс динамического вектора

## CONTENT

Класс динамического вектора

Параметры шаблона:
* typename T


# ::stappler::mem_pool::Map<typename,typename,typename>

## BRIEF

Класс хранилища ключ-значение

## CONTENT

Класс хранилища ключ-значение

Параметры шаблона:
* typename K
* typename V
* typename Compare


# ::stappler::mem_pool::Set<typename,typename>

## BRIEF

Класс набор значений

## CONTENT

Класс набор значений

Параметры шаблона:
* typename T
* typename Compare


# ::stappler::mem_pool::Function<typename>

## BRIEF

Класс контейнера функций

## CONTENT

Класс контейнера функций

Параметры шаблона:
* typename T


# ::stappler::mem_pool::dict<typename,typename,typename>

## BRIEF

Класс словаря

## CONTENT

Класс словаря

Параметры шаблона:
* typename T
* typename V
* typename Compare


# ::stappler::mem_pool::Mutex

## BRIEF

Тип мутекса

## CONTENT

Тип мутекса


# ::stappler::mem_pool::emplace_ordered<typename>(Vector<T>&,T)

## BRIEF

Вспомогательная функция упорядоченной вставки в вектор

## CONTENT

Вспомогательная функция упорядоченной вставки в вектор

Параметры шаблона:
* typename T

Параметры:
* Vector<T>&
* T

Возвращает:
* bool

# ::stappler::mem_std::pool

## BRIEF

Интерфейс пула памяти

## CONTENT

Интерфейс пула памяти


# ::stappler::mem_std::allocator

## BRIEF

Интерфейс аллокатора памяти

## CONTENT

Интерфейс аллокатора памяти



# ::stappler::mem_std::AllocBase

## BRIEF

Базовый класс для аллокации из интерфейса памяти

## CONTENT

Базовый класс для аллокации из интерфейса памяти

# ::stappler::mem_std::String

## BRIEF

Класс стандартной строки

## CONTENT

Класс стандартной строки


# ::stappler::mem_std::WideString

## BRIEF

Класс широкой строки

## CONTENT

Класс широкой строки

# ::stappler::mem_std::Bytes

## BRIEF

Класс байтовой строки

## CONTENT

Класс байтовой строки


# ::stappler::mem_std::StringStream

## BRIEF

Класс стркового потока

## CONTENT

Класс стркового потока


# ::stappler::mem_std::OutputStream

## BRIEF

Класс стандартного потока

## CONTENT

Класс стандартного потока


# ::stappler::mem_std::Vector<typename>

## BRIEF

Класс динамического вектора

## CONTENT

Класс динамического вектора

Параметры шаблона:
* typename T


# ::stappler::mem_std::Map<typename,typename,typename>

## BRIEF

Класс хранилища ключ-значение

## CONTENT

Класс хранилища ключ-значение

Параметры шаблона:
* typename K
* typename V
* typename Compare


# ::stappler::mem_std::Set<typename,typename>

## BRIEF

Класс набор значений

## CONTENT

Класс набор значений

Параметры шаблона:
* typename T
* typename Compare


# ::stappler::mem_std::Function<typename>

## BRIEF

Класс контейнера функций

## CONTENT

Класс контейнера функций

Параметры шаблона:
* typename T


# ::stappler::mem_std::Mutex

## BRIEF

Тип мутекса

## CONTENT

Тип мутекса


# ::stappler::mem_std::emplace_ordered<typename>(Vector<T>&,T)

## BRIEF

Вспомогательная функция упорядоченной вставки в вектор

## CONTENT

Вспомогательная функция упорядоченной вставки в вектор

Параметры шаблона:
* typename T

Параметры:
* Vector<T>&
* T

Возвращает:
* bool

# ::stappler::mem_pool::Value

## BRIEF

Тип нетипизированного значения

## CONTENT

Тип нетипизированного значения


# ::stappler::mem_pool::Array

## BRIEF

Тип нетипизированного массива

## CONTENT

Тип нетипизированного массива


# ::stappler::mem_pool::Dictionary

## BRIEF

Тип нетипизированного словаря

## CONTENT

Тип нетипизированного словаря


# ::stappler::mem_pool::EncodeFormat

## BRIEF

Тип формата кодирования данных

## CONTENT

Тип формата кодирования данных


# ::stappler::mem_pool::emplace_ordered(Vector<stappler::mem_pool::Value>&,stappler::mem_pool::Value const&)

## BRIEF

Вспомогательная функция упорядоченной вставки в вектор

## CONTENT

Вспомогательная функция упорядоченной вставки в вектор

Параметры:
* Vector<stappler::mem_pool::Value>&
* stappler::mem_pool::Value const&

Возвращает:
* bool

# ::stappler::mem_std::Value

## BRIEF

Тип нетипизированного значения

## CONTENT

Тип нетипизированного значения


# ::stappler::mem_std::Array

## BRIEF

Тип нетипизированного массива

## CONTENT

Тип нетипизированного массива


# ::stappler::mem_std::Dictionary

## BRIEF

Тип нетипизированного словаря

## CONTENT

Тип нетипизированного словаря


# ::stappler::mem_std::EncodeFormat

## BRIEF

Тип формата кодирования данных

## CONTENT

Тип формата кодирования данных


# ::stappler::mem_std::emplace_ordered(Vector<stappler::mem_std::Value>&,stappler::mem_std::Value const&)

## BRIEF

Вспомогательная функция упорядоченной вставки в вектор

## CONTENT

Вспомогательная функция упорядоченной вставки в вектор

Параметры:
* Vector<stappler::mem_std::Value>&
* stappler::mem_std::Value const&

Возвращает:
* bool

# ::stappler::mem_pool::perform<typename>(Callback const&,memory::pool_t*)

## BRIEF

Выполняет функтор в контексте пула памяти

## CONTENT

Выполняет функтор в контексте пула памяти

Параметры шаблона:
* typename Callback - тип функтора

Параметры:
* Callback const& - объект функтора
* memory::pool_t* - пул памяти

Возвращает:
* auto - результат работы функтора

# ::stappler::mem_pool::perform<typename>(Callback const&,memory::pool_t*,uint32_t,void*)

## BRIEF

Выполняет функтор в контексте пула памяти

## CONTENT

Выполняет функтор в контексте пула памяти

Параметры шаблона:
* typename Callback - тип функтора

Параметры:
* Callback const& - объект функтора
* memory::pool_t* - пул памяти
* uint32_t - опционально, числовой тег для хранения вместе с пулом памяти
* void* - опционально, непрозрачный указатель для хранения вместе с пулом памяти

Возвращает:
* auto - результат работы функтора

# ::stappler::mem_pool::perform_temporary<typename>(Callback const&,memory::pool_t*)

## BRIEF

Выполняет функтор в контексте временного пула памяти

## CONTENT

Выполняет функтор в контексте временного пула памяти. Пул создаётся с указанным в качестве родительского, и уничтожается после вызова функтора.

Параметры шаблона:
* typename Callback - тип функтора

Параметры:
* Callback const& - объект функтора
* memory::pool_t* - исходный пул памяти

Возвращает:
* auto - результат работы функтора

# ::stappler::mem_std::perform_temporary<typename>(Callback const&,memory::pool_t*)

## BRIEF

Выполняет функтор в контексте временного пула памяти

## CONTENT

Выполняет функтор в контексте временного пула памяти. Пул создаётся с указанным в качестве родительского, и уничтожается после вызова функтора.

Параметры шаблона:
* typename Callback - тип функтора

Параметры:
* Callback const& - объект функтора
* memory::pool_t* - исходный пул памяти

Возвращает:
* auto - результат работы функтора

# ::stappler::mem_pool::exists_ordered<typename>(Vector<T>&,T const&)

## BRIEF

Проверяет, что объект есть в упорядоченном вектора

## CONTENT

Проверяет, что объект есть в упорядоченном вектора

Параметры шаблона:
* typename T - тип объекта

Параметры:
* Vector<T>& - упорядоченный вектор
* T const& - объект для проверки

Возвращает:
* bool - true если объект есть в векторе

# ::stappler::mem_std::HashMap<typename,typename>

## BRIEF

Тип неупорядоченной карты (хэш-карты)

## CONTENT

Тип неупорядоченной карты (хэш-карты)

Параметры шаблона:
* typename T - тип ключа
* typename V - тип значения


# ::stappler::mem_std::HashSet<typename>

## BRIEF

Тип неупорядоченного набора значений

## CONTENT

Тип неупорядоченного набора значений

Параметры шаблона:
* typename T - тип значения


# ::stappler::mem_std::perform<typename>(Callback const&,memory::pool_t*)

## BRIEF

Выполняет функтор в контексте пула памяти

## CONTENT

Выполняет функтор в контексте пула памяти

Параметры шаблона:
* typename Callback - тип функтора

Параметры:
* Callback const& - объект функтора
* memory::pool_t* - пул памяти

Возвращает:
* auto - результат работы функтора


# ::stappler::mem_std::exists_ordered<typename>(Vector<T>&,T const&)

## BRIEF

Проверяет, что объект есть в упорядоченном вектора

## CONTENT

Проверяет, что объект есть в упорядоченном вектора

Параметры шаблона:
* typename T - тип объекта

Параметры:
* Vector<T>& - упорядоченный вектор
* T const& - объект для проверки

Возвращает:
* bool - true если объект есть в векторе


# ::stappler::VectorAdapter<typename>

## BRIEF

Адаптер для использования вектора независимо от интерфейса памяти

## CONTENT

Адаптер для использования вектора независимо от интерфейса памяти

Параметры шаблона:
* typename T - тип хранимого в векторе значения

# ::stappler::VectorAdapter<typename>::size() const

## BRIEF

Возвращает число элементов в контейнере

## CONTENT

Доступ: public

Возвращает число элементов в контейнере

Возвращает:
* size_t

# ::stappler::VectorAdapter<typename>::back() const

## BRIEF

Возвращает последний элеммент в контейнере

## CONTENT

Доступ: public

Возвращает последний элеммент в контейнере

Возвращает:
* T& - ссылка на последний элемент

# ::stappler::VectorAdapter<typename>::front() const

## BRIEF

Возвращает первый элеммент в контейнере

## CONTENT

Доступ: public

Возвращает первый элеммент в контейнере

Возвращает:
* T& - ссылка на первый элемент

# ::stappler::VectorAdapter<typename>::empty() const

## BRIEF

Проверяет контейнер на пустоту

## CONTENT

Доступ: public

Проверяет контейнер на пустоту

Возвращает:
* bool - true если контейнер пуст

# ::stappler::VectorAdapter<typename>::at(size_t) const

## BRIEF

Возвращает элемент по индексу

## CONTENT

Доступ: public

Возвращает элемент по индексу. Поведение не определено. если индекс превышает размер.

Параметры:
* size_t - индекс элемента

Возвращает:
* T& - ссылка на элемент

# ::stappler::VectorAdapter<typename>::emplace_back(T&&) const

## BRIEF

Добавляет элемент в конец контейнера

## CONTENT

Доступ: public

Добавляет элемент в конец контейнера. Использует перемещение по возможности.

Параметры:
* T&& - новых элемент

Возвращает:
* T& - ссылка на новый элемент в контейнере

# ::stappler::VectorAdapter<typename>::begin() const

## BRIEF

Возвращает указатель на начало контейнера

## CONTENT

Доступ: public

Возвращает указатель на начало контейнера. Можно использвоать как итератор.

Возвращает:
* T*

# ::stappler::VectorAdapter<typename>::end() const

## BRIEF

Возвращает указатель на конец контейнера

## CONTENT

Доступ: public

Возвращает указатель на конец контейнера

Возвращает:
* T*

# ::stappler::VectorAdapter<typename>::clear() const

## BRIEF

Удаляет все элементы из контейнера

## CONTENT

Доступ: public

Удаляет все элементы из контейнера

# ::stappler::VectorAdapter<typename>::reserve(size_t) const

## BRIEF

Резервирует место под элементы в контейнере

## CONTENT

Доступ: public

Резервирует место под элементы в контейнере

Параметры:
* size_t - число элементов, которые должен вмещать контейнер

# ::stappler::VectorAdapter<typename>::resize(size_t) const

## BRIEF

Изменяет размер контейнера, добавляя или удаляя элементы

## CONTENT

Доступ: public

Изменяет размер контейнера, добавляя или удаляя элементы

Параметры:
* size_t - новый размер контейнера

# ::stappler::VectorAdapter<typename>::operator bool() const

## BRIEF

Проверяет, доступен ли реальный контейнер через адаптер

## CONTENT

Доступ: public

Проверяет, доступен ли реальный контейнер через адаптер

Возвращает:
* bool - true если адаптер можно использовать

# ::stappler::VectorAdapter<typename>::VectorAdapter()

## BRIEF

Конструктор по-умолчанию

## CONTENT

Доступ: public

Конструктор по-умолчанию. Не имеет доступа к реальному контейнеру.

# ::stappler::VectorAdapter<typename>::VectorAdapter(memory::StandartInterface::VectorType<T>&)

## BRIEF

Создаёт адаптер для вектора из стандартной библиотеки

## CONTENT

Доступ: public

Создаёт адаптер для вектора из стандартной библиотеки

Параметры:
* memory::StandartInterface::VectorType<T>&


# ::stappler::VectorAdapter<typename>::VectorAdapter(memory::PoolInterface::VectorType<T>&)

## BRIEF

Создаёт адаптер для вектора на основе пулов памяти

## CONTENT

Доступ: public

Создаёт адаптер для вектора на основе пулов памяти

Параметры:
* memory::PoolInterface::VectorType<T>&

# ::stappler::VectorAdapter<typename>::target

## BRIEF

Непрозрачный указатель на реальный контейнер

## CONTENT

Доступ: public

Непрозрачный указатель на реальный контейнер

Тип: void*

# ::stappler::VectorAdapter<typename>::size_fn

## BRIEF

Функция размера

## CONTENT

Доступ: public

Функция размера

Тип: size_t(*)(void*)

# ::stappler::VectorAdapter<typename>::back_fn

## BRIEF

Функция получения последнего элемента

## CONTENT

Доступ: public

Функция получения последнего элемента

Тип: T&(*)(void*)

# ::stappler::VectorAdapter<typename>::front_fn

## BRIEF

Функция получения первого элемента

## CONTENT

Доступ: public

Функция получения первого элемента

Тип: T&(*)(void*)

# ::stappler::VectorAdapter<typename>::empty_fn

## BRIEF

Функция проверки на пустоту

## CONTENT

Доступ: public

Функция проверки на пустоту

Тип: bool(*)(void*)

# ::stappler::VectorAdapter<typename>::at_fn

## BRIEF

Функция получения элемента

## CONTENT

Доступ: public

Функция получения элемента

Тип: T&(*)(void*,size_t)

# ::stappler::VectorAdapter<typename>::emplace_back_fn

## BRIEF

Функция добавления элемента

## CONTENT

Доступ: public

Функция добавления элемента

Тип: T&(*)(void*,T&&)

# ::stappler::VectorAdapter<typename>::begin_fn

## BRIEF

Функция получения начала контейнера

## CONTENT

Доступ: public

Функция получения начала контейнера

Тип: T*(*)(void*)

# ::stappler::VectorAdapter<typename>::end_fn

## BRIEF

Функция получения конца контейнера

## CONTENT

Доступ: public

Функция получения конца контейнера

Тип: T*(*)(void*)

# ::stappler::VectorAdapter<typename>::clear_fn

## BRIEF

Функция очистки контейнера

## CONTENT

Доступ: public

Функция очистки контейнера

Тип: void(*)(void*)

# ::stappler::VectorAdapter<typename>::reserve_fn

## BRIEF

Функция резервирования размера

## CONTENT

Доступ: public

Функция резервирования размера

Тип: void(*)(void*,size_t)

# ::stappler::VectorAdapter<typename>::resize_fn

## BRIEF

Функция изменения размера

## CONTENT

Доступ: public

Функция изменения размера

Тип: void(*)(void*,size_t)

