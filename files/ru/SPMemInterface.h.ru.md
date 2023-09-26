Title: SPMemInterface.h


# STAPPLER_CORE_MEMORY_SPMEMINTERFACE_H_

## BRIEF

Заголовок с описанием типов интерфейсов памяти

## CONTENT

Заголовок с описанием типов интерфейсов памяти


# ::stappler::memory::PoolInterface

## BRIEF

Интерфейс, основанный на пулах памяти

## CONTENT

Интерфейс, основанный на пулах памяти

Особенность этого интерфейса в способе освобождения памяти: память высвобождается только после освобождения пула памяти целеком, но не в процессе использования пула. Это позволяет упростить систему аллокации за счёт отказа от системы учёта размеров выделенных блоков памяти. Единственная функция такого аллокатора - увеличивать внутренний указатель пула памяти.

Обратная сторона такого упрощения - наличие неявного контекста при создании контейнеров. Чаще всего, используется пул текущего контекста. Пользователь должен заботится о том, чтобы на стеке контекста всегда был корректный пул памяти.

Базовые классы:
* memory::AllocPool


# ::stappler::memory::PoolInterface::AllocBaseType

## BRIEF

Базовый тип для объектов, аллоцируемых интерфейсом

## CONTENT

Базовый тип для объектов, аллоцируемых интерфейсом


# ::stappler::memory::PoolInterface::StringType

## BRIEF

Стандартный строковый тип

## CONTENT

Стандартный строковый тип


# ::stappler::memory::PoolInterface::WideStringType

## BRIEF

Строковый тип с широкими символами

## CONTENT

Строковый тип с широкими символами

# ::stappler::memory::PoolInterface::BytesType

## BRIEF

Тип байтовой строки

## CONTENT

Тип байтовой строки

# ::stappler::memory::PoolInterface::BasicStringType<typename>

## BRIEF

Тип строки с указанным типом символов

## CONTENT

Тип строки с указанным типом символов

Параметры шаблона:
* typename Value - тип символов


# ::stappler::memory::PoolInterface::ArrayType<typename>

## BRIEF

Тип динамического массива 

## CONTENT

Тип динамического массива 

Параметры шаблона:
* typename Value - тип значения


# ::stappler::memory::PoolInterface::DictionaryType<typename>

## BRIEF

Тип словаря ключ-значение со строковым ключом

## CONTENT

Тип словаря ключ-значение со строковым ключом

Параметры шаблона:
* typename Value - тип значения


# ::stappler::memory::PoolInterface::VectorType<typename>

## BRIEF

Тип динамического вектора

## CONTENT

Тип динамического вектора

Параметры шаблона:
* typename Value - тип значения


# ::stappler::memory::PoolInterface::MapType<typename,typename,typename>

## BRIEF

Тип карты ключ-значение

## CONTENT

Тип карты ключ-значение

Параметры шаблона:
* typename K - ключ
* typename V - значение
* typename Compare - тип функтора сравнения ключей


# ::stappler::memory::PoolInterface::SetType<typename,typename>

## BRIEF

Тип упорядоченного набора значений

## CONTENT

Тип упорядоченного набора значений

Параметры шаблона:
* typename T - тип значения
* typename Compare - тип функтора сравнения ключей


# ::stappler::memory::PoolInterface::FunctionType<typename>

## BRIEF

Тип контейнера для функторов

## CONTENT

Тип контейнера для функторов

Параметры шаблона:
* typename T - сигнатура функтора


# ::stappler::memory::PoolInterface::StringStreamType

## BRIEF

Тип стокового потока

## CONTENT

Тип стокового потока


# ::stappler::memory::PoolInterface::usesMemoryPool()

## BRIEF

Статическая проверка на использование пулов памяти

## CONTENT

Возвращает:
* bool

# ::stappler::memory::StandartInterface

## BRIEF

Стандартный интерфейс памяти

## CONTENT

Стандартный интерфейс памяти. Использует контейнеры и аллокатор стандартной библиотеки

Базовые классы:
* memory::AllocBase


# ::stappler::memory::StandartInterface::AllocBaseType

## BRIEF

Базовый тип для объектов, аллоцируемых интерфейсом

## CONTENT

Базовый тип для объектов, аллоцируемых интерфейсом


# ::stappler::memory::StandartInterface::StringType

## BRIEF

Стандартный строковый тип

## CONTENT

Стандартный строковый тип


# ::stappler::memory::StandartInterface::WideStringType

## BRIEF

Строковый тип с широкими символами

## CONTENT

Строковый тип с широкими символами

# ::stappler::memory::StandartInterface::BytesType

## BRIEF

Тип байтовой строки

## CONTENT

Тип байтовой строки

# ::stappler::memory::StandartInterface::BasicStringType<typename>

## BRIEF

Тип строки с указанным типом символов

## CONTENT

Тип строки с указанным типом символов

Параметры шаблона:
* typename Value - тип символов


# ::stappler::memory::StandartInterface::ArrayType<typename>

## BRIEF

Тип динамического массива 

## CONTENT

Тип динамического массива 

Параметры шаблона:
* typename Value - тип значения


# ::stappler::memory::StandartInterface::DictionaryType<typename>

## BRIEF

Тип словаря ключ-значение со строковым ключом

## CONTENT

Тип словаря ключ-значение со строковым ключом

Параметры шаблона:
* typename Value - тип значения


# ::stappler::memory::StandartInterface::VectorType<typename>

## BRIEF

Тип динамического вектора

## CONTENT

Тип динамического вектора

Параметры шаблона:
* typename Value - тип значения


# ::stappler::memory::StandartInterface::MapType<typename,typename,typename>

## BRIEF

Тип карты ключ-значение

## CONTENT

Тип карты ключ-значение

Параметры шаблона:
* typename K - ключ
* typename V - значение
* typename Compare - тип функтора сравнения ключей


# ::stappler::memory::StandartInterface::SetType<typename,typename>

## BRIEF

Тип упорядоченного набора значений

## CONTENT

Тип упорядоченного набора значений

Параметры шаблона:
* typename T - тип значения
* typename Compare - тип функтора сравнения ключей


# ::stappler::memory::StandartInterface::FunctionType<typename>

## BRIEF

Тип контейнера для функторов

## CONTENT

Тип контейнера для функторов

Параметры шаблона:
* typename T - сигнатура функтора


# ::stappler::memory::StandartInterface::StringStreamType

## BRIEF

Тип стокового потока

## CONTENT

Тип стокового потока


# ::stappler::memory::StandartInterface::usesMemoryPool()

## BRIEF

Статическая проверка на использование пулов памяти

## CONTENT

Возвращает:
* bool


# ::stappler::traits::SelectStringStream<std::string>::SelectStringStream<std::string>

## BRIEF

Интерфейс выбора стокового потока на основании типа строки

## CONTENT

Интерфейс выбора стокового потока на основании типа строки


# ::stappler::traits::SelectStringStream<std::string>::Type

## BRIEF

Тип строкового потока

## CONTENT

Тип строкового потока


# ::stappler::traits::SelectStringStream<std::u16string>::SelectStringStream<std::u16string>

## BRIEF

Интерфейс выбора стокового потока на основании типа строки

## CONTENT

Интерфейс выбора стокового потока на основании типа строки


# ::stappler::traits::SelectStringStream<std::u16string>::Type

## BRIEF

Тип строкового потока

## CONTENT

Тип строкового потока


# ::stappler::traits::SelectStringStream<memory::string>::SelectStringStream<memory::string>

## BRIEF

Интерфейс выбора стокового потока на основании типа строки

## CONTENT

Интерфейс выбора стокового потока на основании типа строки


# ::stappler::traits::SelectStringStream<memory::string>::Type

## BRIEF

Тип строкового потока

## CONTENT

Тип строкового потока


# ::stappler::traits::SelectStringStream<memory::basic_string<char16_t>>::SelectStringStream<memory::basic_string<char16_t>>

## BRIEF

Интерфейс выбора стокового потока на основании типа строки

## CONTENT

Интерфейс выбора стокового потока на основании типа строки


# ::stappler::traits::SelectStringStream<memory::basic_string<char16_t>>::Type

## BRIEF

Тип строкового потока

## CONTENT

Тип строкового потока


# ::stappler::Callback<typename>

## BRIEF

Тип нефладеющего контейнера функторов

## CONTENT

Тип нефладеющего контейнера функторов

Параметры шаблона:
* typename T - сигнатура функтора


# ::stappler::StringToNumber<typename>(memory::StandartInterface::StringType const&)

## BRIEF

Интерфейс для получения числа из строки

## CONTENT

Интерфейс для получения числа из строки

Параметры шаблона:
* typename T

Параметры:
* memory::StandartInterface::StringType const&

Возвращает:
* T

# ::stappler::StringToNumber<typename>(memory::PoolInterface::StringType const&)

## BRIEF

Интерфейс для получения числа из строки

## CONTENT

Интерфейс для получения числа из строки

Параметры шаблона:
* typename T

Параметры:
* memory::PoolInterface::StringType const&

Возвращает:
* T

# ::stappler::StringToNumber<typename>(char const*)

## BRIEF

Интерфейс для получения числа из строки

## CONTENT

Интерфейс для получения числа из строки

Параметры шаблона:
* typename T

Параметры:
* char const*

Возвращает:
* T