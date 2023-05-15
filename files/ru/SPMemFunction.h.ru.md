Title: SPMemFunction.h


# LIBSTAPPLER_COMMON_MEMORY_SPMEMFUNCTION_H_

## BRIEF

## CONTENT


# ::stappler::memory::check_signature<typename,typename,typename>

## BRIEF

## CONTENT

Параметры шаблона:
* typename 
* typename 
* typename 

Базовые классы:
* std::false_type


# ::stappler::memory::check_signature<Func,Ret(Args...),typenamestd::enable_if<std::is_convertible<decltype(std::declval<Func>()(std::declval<Args>()...)),Ret>::value,void>::type>::check_signature<Func,Ret(Args...),typenamestd::enable_if<std::is_convertible<decltype(std::declval<Func>()(std::declval<Args>()...)),Ret>::value,void>::type>

## BRIEF

## CONTENT

Параметры шаблона:
* typename Func
* typename Ret
* typename Args

Базовые классы:
* std::true_type


# ::stappler::memory::function<ReturnType(ArgumentTypes...)>::function<ReturnType(ArgumentTypes...)>

## BRIEF

## CONTENT

Параметры шаблона:
* typename ReturnType
* typename ArgumentTypes

Базовые классы:
* AllocPool


# ::stappler::memory::function<ReturnType(ArgumentTypes...)>::signature_type

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::function<ReturnType(ArgumentTypes...)>::allocator_type

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::function<ReturnType(ArgumentTypes...)>::~function()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::function<ReturnType(ArgumentTypes...)>::function(stappler::memory::function<type-parameter-0-0 (type-parameter-0-1...)>::allocator_type const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::memory::function<type-parameter-0-0 (type-parameter-0-1...)>::allocator_type const&


# ::stappler::memory::function<ReturnType(ArgumentTypes...)>::function(stappler::nullptr_t,stappler::memory::function<type-parameter-0-0 (type-parameter-0-1...)>::allocator_type const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::nullptr_t
* stappler::memory::function<type-parameter-0-0 (type-parameter-0-1...)>::allocator_type const&


# ::stappler::memory::function<ReturnType(ArgumentTypes...)>::operator=(stappler::nullptr_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::nullptr_t

Возвращает:
* function<type-parameter-0-0 (type-parameter-0-1...)>&

# ::stappler::memory::function<ReturnType(ArgumentTypes...)>::function(function<type-parameter-0-0 (type-parameter-0-1...)> const&,stappler::memory::function<type-parameter-0-0 (type-parameter-0-1...)>::allocator_type const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* function<type-parameter-0-0 (type-parameter-0-1...)> const&
* stappler::memory::function<type-parameter-0-0 (type-parameter-0-1...)>::allocator_type const&


# ::stappler::memory::function<ReturnType(ArgumentTypes...)>::operator=(function<type-parameter-0-0 (type-parameter-0-1...)> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* function<type-parameter-0-0 (type-parameter-0-1...)> const&

Возвращает:
* function<type-parameter-0-0 (type-parameter-0-1...)>&

# ::stappler::memory::function<ReturnType(ArgumentTypes...)>::function(function<type-parameter-0-0 (type-parameter-0-1...)>&&,stappler::memory::function<type-parameter-0-0 (type-parameter-0-1...)>::allocator_type const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* function<type-parameter-0-0 (type-parameter-0-1...)>&&
* stappler::memory::function<type-parameter-0-0 (type-parameter-0-1...)>::allocator_type const&


# ::stappler::memory::function<ReturnType(ArgumentTypes...)>::operator=(function<type-parameter-0-0 (type-parameter-0-1...)>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* function<type-parameter-0-0 (type-parameter-0-1...)>&&

Возвращает:
* function<type-parameter-0-0 (type-parameter-0-1...)>&

# ::stappler::memory::function<ReturnType(ArgumentTypes...)>::operator=<typename>(FunctionT&&)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename FunctionT

Параметры:
* FunctionT&&

Возвращает:
* function<type-parameter-0-0 (type-parameter-0-1...)>&

# ::stappler::memory::function<ReturnType(ArgumentTypes...)>::operator()(ArgumentTypes...) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* ArgumentTypes...

Возвращает:
* ReturnType

# ::stappler::memory::function<ReturnType(ArgumentTypes...)>::operator bool() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::memory::function<ReturnType(ArgumentTypes...)>::operator==(stappler::nullptr_t) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::nullptr_t

Возвращает:
* bool

# ::stappler::memory::function<ReturnType(ArgumentTypes...)>::operator!=(stappler::nullptr_t) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::nullptr_t

Возвращает:
* bool

# ::stappler::memory::function<ReturnType(ArgumentTypes...)>::get_allocator() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* allocator_type&

# ::stappler::memory::function<ReturnType(ArgumentTypes...)>::OptBufferSize

## BRIEF

## CONTENT

Доступ: private

Тип: auto const


# ::stappler::memory::function<ReturnType(ArgumentTypes...)>::invoke_pointer

## BRIEF

## CONTENT

Доступ: private


# ::stappler::memory::function<ReturnType(ArgumentTypes...)>::destroy_pointer

## BRIEF

## CONTENT

Доступ: private


# ::stappler::memory::function<ReturnType(ArgumentTypes...)>::copy_pointer

## BRIEF

## CONTENT

Доступ: private


# ::stappler::memory::function<ReturnType(ArgumentTypes...)>::move_pointer

## BRIEF

## CONTENT

Доступ: private


# ::stappler::memory::function<ReturnType(ArgumentTypes...)>::functor_traits

## BRIEF

## CONTENT

Доступ: private


# ::stappler::memory::function<ReturnType(ArgumentTypes...)>::functor_traits::invoke

## BRIEF

## CONTENT

Тип: stappler::memory::function<type-parameter-0-0 (type-parameter-0-1...)>::invoke_pointer


# ::stappler::memory::function<ReturnType(ArgumentTypes...)>::functor_traits::destroy

## BRIEF

## CONTENT

Тип: stappler::memory::function<type-parameter-0-0 (type-parameter-0-1...)>::destroy_pointer


# ::stappler::memory::function<ReturnType(ArgumentTypes...)>::functor_traits::copy

## BRIEF

## CONTENT

Тип: stappler::memory::function<type-parameter-0-0 (type-parameter-0-1...)>::copy_pointer


# ::stappler::memory::function<ReturnType(ArgumentTypes...)>::functor_traits::move

## BRIEF

## CONTENT

Тип: stappler::memory::function<type-parameter-0-0 (type-parameter-0-1...)>::move_pointer


# ::stappler::memory::function<ReturnType(ArgumentTypes...)>::traits_callback

## BRIEF

## CONTENT

Доступ: private


# ::stappler::memory::function<ReturnType(ArgumentTypes...)>::makeFunctionTraits<typename>()

## BRIEF

## CONTENT

Доступ: private

Параметры шаблона:
* typename FunctionT

Возвращает:
* stappler::memory::function<type-parameter-0-0 (type-parameter-0-1...)>::functor_traits*

# ::stappler::memory::function<ReturnType(ArgumentTypes...)>::makeFreeFunction<typename>(FunctionT&&,stappler::memory::function<type-parameter-0-0 (type-parameter-0-1...)>::allocator_type&,uint8_t*)

## BRIEF

## CONTENT

Доступ: private

Параметры шаблона:
* typename FunctionT

Параметры:
* FunctionT&&
* stappler::memory::function<type-parameter-0-0 (type-parameter-0-1...)>::allocator_type&
* uint8_t*

Возвращает:
* traits_callback

# ::stappler::memory::function<ReturnType(ArgumentTypes...)>::clear()

## BRIEF

## CONTENT

Доступ: private


# ::stappler::memory::function<ReturnType(ArgumentTypes...)>::mAllocator

## BRIEF

## CONTENT

Доступ: private

Тип: allocator_type


# ::stappler::memory::function<ReturnType(ArgumentTypes...)>::mCallback

## BRIEF

## CONTENT

Доступ: private

Тип: traits_callback


# ::stappler::memory::function<ReturnType(ArgumentTypes...)>::mBuffer

## BRIEF

## CONTENT

Доступ: private

Тип: uint8_t[16]


# ::stappler::memory::callback<ReturnType(ArgumentTypes...)>::callback<ReturnType(ArgumentTypes...)>

## BRIEF

## CONTENT

Параметры шаблона:
* typename ReturnType
* typename ArgumentTypes

Базовые классы:
* AllocPool


# ::stappler::memory::callback<ReturnType(ArgumentTypes...)>::signature_type

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::callback<ReturnType(ArgumentTypes...)>::~callback()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::memory::callback<ReturnType(ArgumentTypes...)>::callback(stappler::nullptr_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::nullptr_t


# ::stappler::memory::callback<ReturnType(ArgumentTypes...)>::operator=(stappler::nullptr_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::nullptr_t

Возвращает:
* callback<type-parameter-0-0 (type-parameter-0-1...)>&

# ::stappler::memory::callback<ReturnType(ArgumentTypes...)>::callback<typename>(FunctionT const&)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename FunctionT

Параметры:
* FunctionT const&


# ::stappler::memory::callback<ReturnType(ArgumentTypes...)>::operator=<typename>(FunctionT const&)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename FunctionT

Параметры:
* FunctionT const&

Возвращает:
* callback<type-parameter-0-0 (type-parameter-0-1...)>&

# ::stappler::memory::callback<ReturnType(ArgumentTypes...)>::callback<typename,typename>(FunctionType(ClassType::*))

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename FunctionType
* typename ClassType

Параметры:
* FunctionType(ClassType::*)


# ::stappler::memory::callback<ReturnType(ArgumentTypes...)>::operator=<typename,typename>(FunctionType(ClassType::*))

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename FunctionType
* typename ClassType

Параметры:
* FunctionType(ClassType::*)

Возвращает:
* callback<type-parameter-0-0 (type-parameter-0-1...)>&

# ::stappler::memory::callback<ReturnType(ArgumentTypes...)>::callback(callback<type-parameter-0-0 (type-parameter-0-1...)> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* callback<type-parameter-0-0 (type-parameter-0-1...)> const&


# ::stappler::memory::callback<ReturnType(ArgumentTypes...)>::operator=(callback<type-parameter-0-0 (type-parameter-0-1...)> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* callback<type-parameter-0-0 (type-parameter-0-1...)> const&

Возвращает:
* callback<type-parameter-0-0 (type-parameter-0-1...)>&

# ::stappler::memory::callback<ReturnType(ArgumentTypes...)>::callback(callback<type-parameter-0-0 (type-parameter-0-1...)>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* callback<type-parameter-0-0 (type-parameter-0-1...)>&&


# ::stappler::memory::callback<ReturnType(ArgumentTypes...)>::operator=(callback<type-parameter-0-0 (type-parameter-0-1...)>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* callback<type-parameter-0-0 (type-parameter-0-1...)>&&

Возвращает:
* callback<type-parameter-0-0 (type-parameter-0-1...)>&

# ::stappler::memory::callback<ReturnType(ArgumentTypes...)>::operator()(ArgumentTypes...) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* ArgumentTypes...

Возвращает:
* ReturnType

# ::stappler::memory::callback<ReturnType(ArgumentTypes...)>::operator bool() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::memory::callback<ReturnType(ArgumentTypes...)>::FunctionPointer

## BRIEF

## CONTENT

Доступ: private


# ::stappler::memory::callback<ReturnType(ArgumentTypes...)>::makeMemberFunction<typename,typename,typename>(FunctionType(ClassType::*))

## BRIEF

## CONTENT

Доступ: private

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

## CONTENT

Доступ: private

Тип: void const*


# ::stappler::memory::callback<ReturnType(ArgumentTypes...)>::mCallback

## BRIEF

## CONTENT

Доступ: private

Тип: FunctionPointer
