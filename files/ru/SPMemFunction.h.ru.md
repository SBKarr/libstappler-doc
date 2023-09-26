Title: SPMemFunction.h


# STAPPLER_CORE_MEMORY_SPMEMFUNCTION_H_

## BRIEF

Заголовок реализации контейнера для функторов

## CONTENT

Заголовок реализации контейнера для функторов


# ::stappler::memory::check_signature<typename,typename,typename>

## BRIEF

Тип для проверки соотвествия функтора сигнатуре

## CONTENT

Тип для проверки соотвествия функтора сигнатуре

Параметры шаблона:
* typename - тип функтора
* typename - возвращаемое значение
* typename - аргументы функции

Базовые классы:
* std::false_type - провал проверки в общем случае


# ::stappler::memory::check_signature<Func,Ret(Args...),typename std::enable_if<std::is_convertible<decltype(std::declval<Func>()(std::declval<Args>()...)),Ret>::value,void>::type>::check_signature<Func,Ret(Args...),typename std::enable_if<std::is_convertible<decltype(std::declval<Func>()(std::declval<Args>()...)),Ret>::value,void>::type>

## BRIEF

Тип для проверки соотвествия функтора сигнатуре

## CONTENT

Тип для проверки соотвествия функтора сигнатуре

Параметры шаблона:
* typename Func - тип функтора
* typename Ret - возвращаемое значение
* typename Args - аргументы функции

Базовые классы:
* std::true_type - успешное прохождение проверки


# ::stappler::memory::function<ReturnType(ArgumentTypes...)>::function<ReturnType(ArgumentTypes...)>

## BRIEF

Тип функтора с определённой сигнатурой

## CONTENT

Тип функтора с определённой сигнатурой

Параметры шаблона:
* typename ReturnType - возвращаемый тип
* typename ArgumentTypes - тип аргументов

Базовые классы:
* AllocPool


# ::stappler::memory::function<ReturnType(ArgumentTypes...)>::signature_type

## BRIEF

Тип сигнатуры

## CONTENT

Доступ: public

Тип сигнатуры


# ::stappler::memory::function<ReturnType(ArgumentTypes...)>::allocator_type

## BRIEF

Тип аллокатора

## CONTENT

Доступ: public

Тип аллокатора


# ::stappler::memory::function<ReturnType(ArgumentTypes...)>::~function()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор


# ::stappler::memory::function<ReturnType(ArgumentTypes...)>::function(stappler::memory::function<type-parameter-0-0 (type-parameter-0-1...)>::allocator_type const&)

## BRIEF

Создаёт пустой контейнер функтора с аллокатором

## CONTENT

Доступ: public

Создаёт пустой контейнер функтора с аллокатором

Параметры:
* stappler::memory::function<type-parameter-0-0 (type-parameter-0-1...)>::allocator_type const&


# ::stappler::memory::function<ReturnType(ArgumentTypes...)>::function(stappler::nullptr_t,stappler::memory::function<type-parameter-0-0 (type-parameter-0-1...)>::allocator_type const&)

## BRIEF

Создаёт пустой контейнер функтора с аллокатором

## CONTENT

Доступ: public

Создаёт пустой контейнер функтора с аллокатором

Параметры:
* stappler::nullptr_t
* stappler::memory::function<type-parameter-0-0 (type-parameter-0-1...)>::allocator_type const&


# ::stappler::memory::function<ReturnType(ArgumentTypes...)>::operator=(stappler::nullptr_t)

## BRIEF

Копирует нулевое значение (уничтожает текущее)

## CONTENT

Доступ: public

Копирует нулевое значение (уничтожает текущее)

Параметры:
* stappler::nullptr_t

Возвращает:
* function<type-parameter-0-0 (type-parameter-0-1...)>&


# ::stappler::memory::function<ReturnType(ArgumentTypes...)>::function(function<type-parameter-0-0 (type-parameter-0-1...)> const&,stappler::memory::function<type-parameter-0-0 (type-parameter-0-1...)>::allocator_type const&)

## BRIEF

Копирует значение из другого функтора

## CONTENT

Копирует значение из другого функтора

Доступ: public

Параметры:
* function<type-parameter-0-0 (type-parameter-0-1...)> const& - исходный функтор
* stappler::memory::function<type-parameter-0-0 (type-parameter-0-1...)>::allocator_type const& - аллокатор контейнера


# ::stappler::memory::function<ReturnType(ArgumentTypes...)>::operator=(function<type-parameter-0-0 (type-parameter-0-1...)> const&)

## BRIEF

Копирует содержимое другого контейнера функтора

## CONTENT

Доступ: public

Копирует содержимое другого контейнера функтора

Параметры:
* function<type-parameter-0-0 (type-parameter-0-1...)> const&

Возвращает:
* function<type-parameter-0-0 (type-parameter-0-1...)>&

# ::stappler::memory::function<ReturnType(ArgumentTypes...)>::function(function<type-parameter-0-0 (type-parameter-0-1...)>&&,stappler::memory::function<type-parameter-0-0 (type-parameter-0-1...)>::allocator_type const&)

## BRIEF

Перемещает значение из другого функтора

## CONTENT

Доступ: public

Перемещает значение из другого функтора. Перемещение возможно если аллокатор совпадает, в противном случае значение копируется.

Параметры:
* function<type-parameter-0-0 (type-parameter-0-1...)>&& - другой контейнер
* stappler::memory::function<type-parameter-0-0 (type-parameter-0-1...)>::allocator_type const& - аллокатор


# ::stappler::memory::function<ReturnType(ArgumentTypes...)>::operator=(function<type-parameter-0-0 (type-parameter-0-1...)>&&)

## BRIEF

Перемещает значение из другого функтора

## CONTENT

Доступ: public

Перемещает значение из другого функтора. Перемещение возможно если аллокатор совпадает, в противном случае значение копируется.

Параметры:
* function<type-parameter-0-0 (type-parameter-0-1...)>&&

Возвращает:
* function<type-parameter-0-0 (type-parameter-0-1...)>&

# ::stappler::memory::function<ReturnType(ArgumentTypes...)>::operator=<typename>(FunctionT&&)

## BRIEF

Копирует или перемещает значение функтора

## CONTENT

Доступ: public

Копирует или перемещает значение функтора

Параметры шаблона:
* typename FunctionT - тип функтора

Параметры:
* FunctionT&& - значение функтора

Возвращает:
* function<type-parameter-0-0 (type-parameter-0-1...)>&

# ::stappler::memory::function<ReturnType(ArgumentTypes...)>::operator()(ArgumentTypes...) const

## BRIEF

Вызывает хранимый функтор

## CONTENT

Доступ: public

Вызывает хранимый функтор

Параметры:
* ArgumentTypes... - аргументы для вызова

Возвращает:
* ReturnType - возвращаемое значение функции

# ::stappler::memory::function<ReturnType(ArgumentTypes...)>::operator bool() const

## BRIEF

Проверяет, хранит ли контейнер значение

## CONTENT

Доступ: public

Проверяет, хранит ли контейнер значение

Возвращает:
* bool - true если контейнер хранит функтор

# ::stappler::memory::function<ReturnType(ArgumentTypes...)>::operator==(stappler::nullptr_t) const

## BRIEF

Проверяет контейнер на пустоту

## CONTENT

Доступ: public

Проверяет контейнер на пустоту

Параметры:
* stappler::nullptr_t

Возвращает:
* bool - true если контейнер не хранит функтор


# ::stappler::memory::function<ReturnType(ArgumentTypes...)>::operator!=(stappler::nullptr_t) const

## BRIEF

Проверяет контейнер на пустоту

## CONTENT

Доступ: public

Проверяет контейнер на пустоту

Параметры:
* stappler::nullptr_t

Возвращает:
* bool - true если контейнер хранит функтор

# ::stappler::memory::function<ReturnType(ArgumentTypes...)>::get_allocator() const

## BRIEF

Возвращает аллокатор

## CONTENT

Доступ: public

Возвращает аллокатор

Возвращает:
* allocator_type&

# ::stappler::memory::function<ReturnType(ArgumentTypes...)>::OptBufferSize

## BRIEF

Размер вспомогательного буфера для хранения функтора без динамического распределения

## CONTENT

Доступ: private

Размер вспомогательного буфера для хранения функтора без динамического распределения

Тип: auto const


# ::stappler::memory::function<ReturnType(ArgumentTypes...)>::invoke_pointer

## BRIEF

Указатель на вызываемую функцию

## CONTENT

Доступ: private

Указатель на вызываемую функцию


# ::stappler::memory::function<ReturnType(ArgumentTypes...)>::destroy_pointer

## BRIEF

Указатель на функцию уничтожения функтора

## CONTENT

Доступ: private

Указатель на функцию уничтожения функтора


# ::stappler::memory::function<ReturnType(ArgumentTypes...)>::copy_pointer

## BRIEF

Указатель на функцию копирования функтора

## CONTENT

Доступ: private

Указатель на функцию уничтожения функтора


# ::stappler::memory::function<ReturnType(ArgumentTypes...)>::move_pointer

## BRIEF

Указатель на функцию перемещения функтора

## CONTENT

Доступ: private

Указатель на функцию перемещения функтора


# ::stappler::memory::function<ReturnType(ArgumentTypes...)>::functor_traits

## BRIEF

Адаптер для контрольных функций функтора

## CONTENT

Доступ: private

Адаптер для контрольных функций функтора


# ::stappler::memory::function<ReturnType(ArgumentTypes...)>::functor_traits::invoke

## BRIEF

Функция вызова

## CONTENT

Функция вызова

Тип: stappler::memory::function<type-parameter-0-0 (type-parameter-0-1...)>::invoke_pointer


# ::stappler::memory::function<ReturnType(ArgumentTypes...)>::functor_traits::destroy

## BRIEF

Функция уничтожения

## CONTENT

Функция вызова

Тип: stappler::memory::function<type-parameter-0-0 (type-parameter-0-1...)>::destroy_pointer


# ::stappler::memory::function<ReturnType(ArgumentTypes...)>::functor_traits::copy

## BRIEF

Функция копирования

## CONTENT

Функция копирования

Тип: stappler::memory::function<type-parameter-0-0 (type-parameter-0-1...)>::copy_pointer


# ::stappler::memory::function<ReturnType(ArgumentTypes...)>::functor_traits::move

## BRIEF

Функция перемещения

## CONTENT

Функция перемещения

Тип: stappler::memory::function<type-parameter-0-0 (type-parameter-0-1...)>::move_pointer


# ::stappler::memory::function<ReturnType(ArgumentTypes...)>::traits_callback

## BRIEF

Указатель на функцию получения адаптера функтора

## CONTENT

Доступ: private

Указатель на функцию получения адаптера функтора


# ::stappler::memory::function<ReturnType(ArgumentTypes...)>::makeFunctionTraits<typename>()

## BRIEF

Получает адаптер функтора

## CONTENT

Доступ: private

Получает адаптер функтора

Параметры шаблона:
* typename FunctionT - тип функтора

Возвращает:
* stappler::memory::function<type-parameter-0-0 (type-parameter-0-1...)>::functor_traits* - указатель адаптер функтора

# ::stappler::memory::function<ReturnType(ArgumentTypes...)>::makeFreeFunction<typename>(FunctionT&&,stappler::memory::function<type-parameter-0-0 (type-parameter-0-1...)>::allocator_type&,uint8_t*)

## BRIEF

Создаёт адаптер для функции

## CONTENT

Доступ: private

Создаёт адаптер для функции

Параметры шаблона:
* typename FunctionT - тип функтора

Параметры:
* FunctionT&& - обьект функтора
* stappler::memory::function<type-parameter-0-0 (type-parameter-0-1...)>::allocator_type& - аллокатор
* uint8_t* - буфер контейнера

Возвращает:
* traits_callback - указатель на функцию возврата адаптера

# ::stappler::memory::function<ReturnType(ArgumentTypes...)>::clear()

## BRIEF

Удаляет хранимый функтор

## CONTENT

Доступ: private

Удаляет хранимый функтор

# ::stappler::memory::function<ReturnType(ArgumentTypes...)>::mAllocator

## BRIEF

Используемый аллокатор

## CONTENT

Доступ: private

Используемый аллокатор

Тип: allocator_type


# ::stappler::memory::function<ReturnType(ArgumentTypes...)>::mCallback

## BRIEF

Указатель на функцию возврата адаптера

## CONTENT

Доступ: private

Указатель на функцию возврата адаптера

Тип: traits_callback


# ::stappler::memory::function<ReturnType(ArgumentTypes...)>::mBuffer

## BRIEF

Буфер ддля малых функций

## CONTENT

Доступ: private

Буфер ддля малых функций

Тип: uint8_t[16]


# ::stappler::memory::callback<ReturnType(ArgumentTypes...)>::callback<ReturnType(ArgumentTypes...)>

## BRIEF

Невладеющий контейнер для функторов

## CONTENT

Невладеющий контейнер для функторов. Этот контейнер хранит только указатель на функтор для его вызова, не обеспечивая его существования.

Параметры шаблона:
* typename ReturnType
* typename ArgumentTypes

Базовые классы:
* AllocPool


# ::stappler::memory::callback<ReturnType(ArgumentTypes...)>::signature_type

## BRIEF

Тип сигнатуры функтора

## CONTENT

Доступ: public

Тип сигнатуры функтора


# ::stappler::memory::callback<ReturnType(ArgumentTypes...)>::~callback()

## BRIEF

Конструктор пустого контейнера

## CONTENT

Доступ: public

Конструктор пустого контейнера


# ::stappler::memory::callback<ReturnType(ArgumentTypes...)>::callback(stappler::nullptr_t)

## BRIEF

Конструктор пустого контейнера

## CONTENT

Доступ: public

Конструктор пустого контейнера

Параметры:
* stappler::nullptr_t


# ::stappler::memory::callback<ReturnType(ArgumentTypes...)>::operator=(stappler::nullptr_t)

## BRIEF

Очищает контейнер

## CONTENT

Доступ: public

Очищает контейнер

Параметры:
* stappler::nullptr_t

Возвращает:
* callback<type-parameter-0-0 (type-parameter-0-1...)>&

# ::stappler::memory::callback<ReturnType(ArgumentTypes...)>::callback<typename>(FunctionT const&)

## BRIEF

Создаёт контейнер вокруг функтора

## CONTENT

Доступ: public

Создаёт контейнер вокруг функтора

Параметры шаблона:
* typename FunctionT

Параметры:
* FunctionT const&


# ::stappler::memory::callback<ReturnType(ArgumentTypes...)>::operator=<typename>(FunctionT const&)

## BRIEF

Назначает функтор для контейнера

## CONTENT

Доступ: public

Назначает функтор для контейнера

Параметры шаблона:
* typename FunctionT - тип функтора

Параметры:
* FunctionT const& - объект функтора

Возвращает:
* callback<type-parameter-0-0 (type-parameter-0-1...)>&

# ::stappler::memory::callback<ReturnType(ArgumentTypes...)>::callback<typename,typename>(FunctionType(ClassType::*))

## BRIEF

Создаёт контейнер вокруг функции-члена

## CONTENT

Доступ: public

Создаёт контейнер вокруг функции-члена

Параметры шаблона:
* typename FunctionType - тип функции-члена
* typename ClassType - тип базового класса функции

Параметры:
* FunctionType(ClassType::*)


# ::stappler::memory::callback<ReturnType(ArgumentTypes...)>::operator=<typename,typename>(FunctionType(ClassType::*))

## BRIEF

Назначает контейнеру функцию-член

## CONTENT

Доступ: public

Параметры шаблона:
* typename FunctionType - тип функции-члена
* typename ClassType - тип базового класса функции

Параметры:
* FunctionType(ClassType::*)

Возвращает:
* callback<type-parameter-0-0 (type-parameter-0-1...)>&

# ::stappler::memory::callback<ReturnType(ArgumentTypes...)>::callback(callback<type-parameter-0-0 (type-parameter-0-1...)> const&)

## BRIEF

Запрет копирования

## CONTENT

Доступ: public

Запрет копирования

Параметры:
* callback<type-parameter-0-0 (type-parameter-0-1...)> const&


# ::stappler::memory::callback<ReturnType(ArgumentTypes...)>::operator=(callback<type-parameter-0-0 (type-parameter-0-1...)> const&)

## BRIEF

Запрет копирования

## CONTENT

Доступ: public

Запрет копирования

Параметры:
* callback<type-parameter-0-0 (type-parameter-0-1...)> const&

Возвращает:
* callback<type-parameter-0-0 (type-parameter-0-1...)>&

# ::stappler::memory::callback<ReturnType(ArgumentTypes...)>::callback(callback<type-parameter-0-0 (type-parameter-0-1...)>&&)

## BRIEF

Запрет перемещения

## CONTENT

Доступ: public

Запрет перемещения

Параметры:
* callback<type-parameter-0-0 (type-parameter-0-1...)>&&


# ::stappler::memory::callback<ReturnType(ArgumentTypes...)>::operator=(callback<type-parameter-0-0 (type-parameter-0-1...)>&&)

## BRIEF

Запрет перемещения

## CONTENT

Доступ: public

Запрет перемещения

Параметры:
* callback<type-parameter-0-0 (type-parameter-0-1...)>&&

Возвращает:
* callback<type-parameter-0-0 (type-parameter-0-1...)>&

# ::stappler::memory::callback<ReturnType(ArgumentTypes...)>::operator()(ArgumentTypes...) const

## BRIEF

Вызывает хранимый функтор

## CONTENT

Доступ: public

Вызывает хранимый функтор

Параметры:
* ArgumentTypes... - аргументы для вызова

Возвращает:
* ReturnType - результат вызова

# ::stappler::memory::callback<ReturnType(ArgumentTypes...)>::operator bool() const

## BRIEF

Проверяет, есть ли в контейнере функтор

## CONTENT

Доступ: public

Возвращает:
* bool - true если функтор назначен

# ::stappler::memory::callback<ReturnType(ArgumentTypes...)>::FunctionPointer

## BRIEF

Тип указателя на вызываемую функцию

## CONTENT

Доступ: private

Тип указателя на вызываемую функцию

# ::stappler::memory::callback<ReturnType(ArgumentTypes...)>::makeMemberFunction<typename,typename,typename>(FunctionType(ClassType::*))

## BRIEF

Конвертирует функцию-член в функтор

## CONTENT

Доступ: private

Конвертирует функцию-член в функтор

Параметры шаблона:
* typename FunctionType
* typename ClassType
* typename RestArgumentTypes

Параметры:
* FunctionType(ClassType::*)

Возвращает:
* FunctionPointer

# ::stappler::memory::callback<ReturnType(ArgumentTypes...)>::mFunctor

## BRIEF

Непрозрачный указатель на функтор

## CONTENT

Доступ: private

Непрозрачный указатель на функтор

Тип: void const*


# ::stappler::memory::callback<ReturnType(ArgumentTypes...)>::mCallback

## BRIEF

Указатель на функцию для вызова функтора

## CONTENT

Доступ: private

Указатель на функцию для вызова функтора

Тип: FunctionPointer
