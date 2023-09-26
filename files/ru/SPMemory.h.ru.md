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
