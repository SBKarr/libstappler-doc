Title: SPMemPoolApi.h


# STAPPLER_CORE_MEMORY_SPMEMPOOLAPI_H_

## BRIEF

Заголовок общего интерфейса пулов памяти

## CONTENT

Заголовок общего интерфейса пулов памяти


# ::stappler::memory::SUCCESS

## BRIEF

Сигнальное значение успеха операции пулов памяти

## CONTENT

Сигнальное значение успеха операции пулов памяти

Тип: int const


# ::stappler::memory::pool::context<typename>

## BRIEF

RAII-тип контекста пула

## CONTENT

RAII-тип контекста пула. Пока объект этого типа существует - связанный пул памяти находится в контексте.

Параметры шаблона:
* typename _Pool


# ::stappler::memory::pool::context<typename>::pool_type

## BRIEF

Тип пула памяти

## CONTENT

Доступ: public

Тип пула памяти


# ::stappler::memory::pool::context<typename>::context(stappler::memory::pool::context::pool_type&)

## BRIEF

Создаёт контекст из пула памяти, добавляет пул к стек пулов текущего потока

## CONTENT

Доступ: public

Создаёт контекст из пула памяти, добавляет пул к стек пулов текущего потока

Параметры:
* stappler::memory::pool::context::pool_type& - пул памяти


# ::stappler::memory::pool::context<typename>::context(stappler::memory::pool::context::pool_type&,uint32_t)

## BRIEF

Создаёт контекст из пула памяти, добавляет пул к стек пулов текущего потока

## CONTENT

Доступ: public

Создаёт контекст из пула памяти, добавляет пул к стек пулов текущего потока

Параметры:
* stappler::memory::pool::context::pool_type& - пул памяти
* uint32_t - дополнительный тег для идентификации пула из контекста


# ::stappler::memory::pool::context<typename>::~context()

## BRIEF

Удаляет контекст, убирает пул из стека текущего потока

## CONTENT

Доступ: public

Удаляет контекст, убирает пул из стека текущего потока


# ::stappler::memory::pool::context<typename>::context(const context<_Pool>&)

## BRIEF

Запрет копирования

## CONTENT

Доступ: public

Запрет копирования

Параметры:
* const context<_Pool>&


# ::stappler::memory::pool::context<typename>::operator=(const context<_Pool>&)

## BRIEF

Запрет копирования

## CONTENT

Доступ: public

Запрет копирования

Параметры:
* const context<_Pool>&

Возвращает:
* context<_Pool>&

# ::stappler::memory::pool::context<typename>::context(context<_Pool>&&)

## BRIEF

Перемещает контекст в новую переменную

## CONTENT

Доступ: public

Перемещает контекст в новую переменную

Параметры:
* context<_Pool>&&


# ::stappler::memory::pool::context<typename>::operator=(context<_Pool>&&)

## BRIEF

Перемещает контекст в новую переменную

## CONTENT

Доступ: public

Перемещает контекст в новую переменную. Уберает предыдущий пул из стека, если он был назначен

Параметры:
* context<_Pool>&&

Возвращает:
* context<_Pool>&

# ::stappler::memory::pool::context<typename>::push()

## BRIEF

Добавляет пул на стек потока, если он не был добавлен

## CONTENT

Доступ: public

Добавляет пул на стек потока, если он не был добавлен


# ::stappler::memory::pool::context<typename>::push(uint32_t)

## BRIEF

Добавляет пул на стек потока, если он не был добавлен

## CONTENT

Доступ: public

Добавляет пул на стек потока, если он не был добавлен

Параметры:
* uint32_t - тег пула для идентификации в контексте


# ::stappler::memory::pool::context<typename>::pop()

## BRIEF

Убирает пул из стека потока, если он был добавлен

## CONTENT

Доступ: public

Убирает пул из стека потока, если он был добавлен


# ::stappler::memory::pool::context<typename>::swap(context<_Pool>&)

## BRIEF

Обменивает значениями два контекста

## CONTENT

Доступ: public

Обменивает значениями два контекста

Параметры:
* context<_Pool>&


# ::stappler::memory::pool::context<typename>::owns() const

## BRIEF

Проверяет, добавлен ли влаеемый пул на стек потока

## CONTENT

Доступ: public

Проверяет, добавлен ли влаеемый пул на стек потока

Возвращает:
* bool - true если пул добавлен на стек потока

# ::stappler::memory::pool::context<typename>::operator bool() const

## BRIEF

## CONTENT

Доступ: public

Проверяет, добавлен ли влаеемый пул на стек потока

Возвращает:
* bool - true если пул добавлен на стек потока

# ::stappler::memory::pool::context<typename>::pool() const

## BRIEF

Возвращает пул из контекста

## CONTENT

Доступ: public

Возвращает пул из контекста

Возвращает:
* pool_type*

# ::stappler::memory::pool::context<typename>::_pool

## BRIEF

Пул этого контекста

## CONTENT

Доступ: private

Пул этого контекста

Тип: pool_type*


# ::stappler::memory::pool::context<typename>::_owns

## BRIEF

Показывает, добавлен ли пул в стек контекста

## CONTENT

Доступ: private

Показывает, добавлен ли пул в стек контекста

Тип: bool
