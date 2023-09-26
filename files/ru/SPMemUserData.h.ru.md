Title: SPMemUserData.h


# STAPPLER_CORE_MEMORY_SPMEMUSERDATA_H_

## BRIEF

Заголовок для работы с пользовательскими объектами, привязанными к пулам памяти

## CONTENT

Заголовок для работы с пользовательскими объектами, привязанными к пулам памяти


# ::stappler::memory::pool::store(stappler::mempool::base::pool_t*,void*,stappler::StringView const&,memory::function<void ()>&&)

## BRIEF

Записывает указатель на пользовательский объект по ключу в пуле памяти

## CONTENT

Записывает указатель на пользовательский объект по ключу в пуле памяти

Параметры:
* stappler::mempool::base::pool_t* - пул памяти
* void* - указатель на пользовательский объект
* stappler::StringView const& - имя объекта
* memory::function<void ()>&& - функция уничтожения объекта при уничтожении пула памяти. Должна быть выделена из того же пула


# ::stappler::memory::pool::get<typename>(stappler::mempool::base::pool_t*,stappler::StringView const&)

## BRIEF

Получает пользовательский объект из пула

## CONTENT

Получает пользовательский объект из пула. Функция не проверяет типизацию динамически.

Параметры шаблона:
* typename T - тип объекта

Параметры:
* stappler::mempool::base::pool_t* - пул памяти
* stappler::StringView const& - имя объекта

Возвращает:
* T* - указатель на объект или nullptr

# ::stappler::memory::pool::store(void*,stappler::StringView const&,memory::function<void ()>&&)

## BRIEF

Записывает указатель на пользовательский объект по ключу в текущий пул памяти

## CONTENT

Записывает указатель на пользовательский объект по ключу в текущий пул памяти

Параметры:
* void* - указатель на пользовательский объект
* stappler::StringView const& - имя объекта
* memory::function<void ()>&& - функция уничтожения объекта при уничтожении пула памяти. Должна быть выделена из того же пула


# ::stappler::memory::pool::get<typename>(stappler::StringView const&)

## BRIEF

Получает пользовательский объект из текущего пула

## CONTENT

Получает пользовательский объект из текущего пула. Функция не проверяет типизацию динамически.

Параметры шаблона:
* typename T - тип объекта

Параметры:
* stappler::StringView const& - имя объекта

Возвращает:
* T* - указатель на объект или nullptr