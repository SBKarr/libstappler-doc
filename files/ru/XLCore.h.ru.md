Title: XLCore.h


# XENOLITH_CORE_XLCORE_H_

## BRIEF

Базовый интерфейс графического движка

## CONTENT

Базовый интерфейс графического движка


# XL_ASSERT

## BRIEF

Макрос утверждения

## CONTENT

Макрос утверждения

Параметры:
* cond - условие
* msg - сообщение об ошибке


# XLASSERT

## BRIEF

Макрос утверждения

## CONTENT

Макрос утверждения

Параметры:
* cond - условие
* msg - сообщение об ошибке


# ::stappler::xenolith::Anchor

## BRIEF

Тип якоря

## CONTENT

Тип якоря


# ::stappler::xenolith::XL_MAKE_API_VERSION(uint32_t,uint32_t,uint32_t,uint32_t)

## BRIEF

Функция сборки версии аналогично Vulkan

## CONTENT

Функция сборки версии аналогично Vulkan

Параметры:
* uint32_t - variant
* uint32_t - major
* uint32_t - minor
* uint32_t - build

Возвращает:
* uint32_t

# ::stappler::xenolith::XL_MAKE_API_VERSION(stappler::StringView)

## BRIEF

Собирает версию из строки

## CONTENT

Собирает версию из строки

Параметры:
* stappler::StringView

Возвращает:
* uint32_t

# ::stappler::xenolith::getVersionDescription(uint32_t)

## BRIEF

Конвертирует число версии в строку

## CONTENT

Конвертирует число версии в строку

Параметры:
* uint32_t

Возвращает:
* stappler::mem_std::String

# ::stappler::xenolith::PoolRef

## BRIEF

Обёртка вокруг пула памяти

## CONTENT

Обёртка вокруг пула памяти

Базовые классы:
* Ref

# ::stappler::xenolith::PoolRef::~PoolRef()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор, удаляет пул памяти

# ::stappler::xenolith::PoolRef::PoolRef(memory::pool_t*)

## BRIEF

Создаёт новый пул памяти

## CONTENT

Доступ: public

Создаёт новый пул памяти

Параметры:
* memory::pool_t* - исходный пул памяти или nullptr


# ::stappler::xenolith::PoolRef::PoolRef(stappler::xenolith::PoolRef*)

## BRIEF

Создаёт новый пул памяти

## CONTENT

Доступ: public

Создаёт новый пул памяти

Параметры:
* stappler::xenolith::PoolRef*


# ::stappler::xenolith::PoolRef::getPool() const

## BRIEF

Возвращает пул памяти

## CONTENT

Доступ: public

Возвращает пул памяти

Возвращает:
* memory::pool_t*

# ::stappler::xenolith::PoolRef::palloc(size_t)

## BRIEF

Распределяет память из пула

## CONTENT

Доступ: public

Распределяет память из пула

Параметры:
* size_t

Возвращает:
* void*

# ::stappler::xenolith::PoolRef::perform<typename>(Callable const&)

## BRIEF

Выполняет функцию в контексте пула памяти

## CONTENT

Доступ: public

Выполняет функцию в контексте пула памяти

Параметры шаблона:
* typename Callable

Параметры:
* Callable const&

Возвращает:
* auto

# ::stappler::xenolith::PoolRef::_pool

## BRIEF

Пул памяти

## CONTENT

Доступ: protected

Пул памяти

Тип: memory::pool_t*


# ::stappler::xenolith::profiling::ProfileData

## BRIEF

Структура данных для профилировки

## CONTENT

Структура данных для профилировки


# ::stappler::xenolith::profiling::ProfileData::timestamp

## BRIEF

Метка времени

## CONTENT

Метка времени

Тип: uint64_t


# ::stappler::xenolith::profiling::ProfileData::tag

## BRIEF

Тег

## CONTENT

Тег

Тип: stappler::StringView


# ::stappler::xenolith::profiling::ProfileData::variant

## BRIEF

Вариант исполнения

## CONTENT

Вариант исполнения

Тип: stappler::StringView


# ::stappler::xenolith::profiling::ProfileData::limit

## BRIEF

Допустимый предел по времени

## CONTENT

Допустимый предел по времени

Тип: uint64_t


# ::stappler::xenolith::profiling::begin(stappler::StringView,stappler::StringView,uint64_t)

## BRIEF

Начинает отсчёт профиля

## CONTENT

Начинает отсчёт профиля

Параметры:
* stappler::StringView - тег
* stappler::StringView - вариант исполнения
* uint64_t - предел по времени

Возвращает:
* stappler::xenolith::profiling::ProfileData

# ::stappler::xenolith::profiling::end(stappler::xenolith::profiling::ProfileData&)

## BRIEF

Завершает отсчёт профиля

## CONTENT

Завершает отсчёт профиля

Параметры:
* stappler::xenolith::profiling::ProfileData&


# ::stappler::xenolith::profiling::store(stappler::xenolith::profiling::ProfileData&)

## BRIEF

Сохраняет текущую отметку времени

## CONTENT

Сохраняет текущую отметку времени

Параметры:
* stappler::xenolith::profiling::ProfileData&


# XL_PROFILE_DEBUG

## BRIEF

Флаг отладки с профилем

## CONTENT

Флаг отладки с профилем


# XL_PROFILE_BEGIN

## BRIEF

Начинает отсчёт профиля

## CONTENT

Начинает отсчёт профиля

Параметры:
* name
* tag
* variant
* limit


# XL_PROFILE_END

## BRIEF

Завершает отсчёт профиля

## CONTENT

Завершает отсчёт профиля

Параметры:
* name
