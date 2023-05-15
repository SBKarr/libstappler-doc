Title: SPSubscription.h


# LIBSTAPPLER_COMMON_UTILS_SPSUBSCRIPTION_H_

## BRIEF

## CONTENT


# ::stappler::SubscriptionId

## BRIEF

## CONTENT


# ::stappler::SubscriptionFlags

## BRIEF

## CONTENT

Базовые классы:
* ValueWrapper<uint64_t,class SubscriptionFlagsClassFlag>


# ::stappler::SubscriptionFlags::Super

## BRIEF

## CONTENT


# ::stappler::SubscriptionFlags::SubscriptionFlags(stappler::ValueWrapper<unsigned long, stappler::SubscriptionFlagsClassFlag>::Type const&)

## BRIEF

## CONTENT

Параметры:
* stappler::ValueWrapper<unsigned long, stappler::SubscriptionFlagsClassFlag>::Type const&


# ::stappler::SubscriptionFlags::SubscriptionFlags(stappler::ValueWrapper<unsigned long, stappler::SubscriptionFlagsClassFlag>::Type&&)

## BRIEF

## CONTENT

Параметры:
* stappler::ValueWrapper<unsigned long, stappler::SubscriptionFlagsClassFlag>::Type&&


# ::stappler::SubscriptionFlags::SubscriptionFlags(stappler::SubscriptionFlags const&)

## BRIEF

## CONTENT

Параметры:
* stappler::SubscriptionFlags const&


# ::stappler::SubscriptionFlags::operator=(stappler::SubscriptionFlags const&)

## BRIEF

## CONTENT

Параметры:
* stappler::SubscriptionFlags const&

Возвращает:
* stappler::SubscriptionFlags&

# ::stappler::SubscriptionFlags::SubscriptionFlags(stappler::SubscriptionFlags&&)

## BRIEF

## CONTENT

Параметры:
* stappler::SubscriptionFlags&&


# ::stappler::SubscriptionFlags::operator=(stappler::SubscriptionFlags&&)

## BRIEF

## CONTENT

Параметры:
* stappler::SubscriptionFlags&&

Возвращает:
* stappler::SubscriptionFlags&

# ::stappler::SubscriptionFlags::SubscriptionFlags(stappler::SubscriptionFlags::Super const&)

## BRIEF

## CONTENT

Параметры:
* stappler::SubscriptionFlags::Super const&


# ::stappler::SubscriptionFlags::operator=(stappler::SubscriptionFlags::Super const&)

## BRIEF

## CONTENT

Параметры:
* stappler::SubscriptionFlags::Super const&

Возвращает:
* stappler::SubscriptionFlags&

# ::stappler::SubscriptionFlags::SubscriptionFlags(stappler::SubscriptionFlags::Super&&)

## BRIEF

## CONTENT

Параметры:
* stappler::SubscriptionFlags::Super&&


# ::stappler::SubscriptionFlags::operator=(stappler::SubscriptionFlags::Super&&)

## BRIEF

## CONTENT

Параметры:
* stappler::SubscriptionFlags::Super&&

Возвращает:
* stappler::SubscriptionFlags&

# ::stappler::SubscriptionFlags::hasFlag<typename>(T) const

## BRIEF

## CONTENT

Параметры шаблона:
* typename T

Параметры:
* T

Возвращает:
* bool

# ::stappler::SubscriptionFlags::initial() const

## BRIEF

## CONTENT

Возвращает:
* bool

# ::stappler::SubscriptionTemplate<typename>

## BRIEF

## CONTENT

Параметры шаблона:
* typename _Interface

Базовые классы:
* RefBase<_Interface>


# ::stappler::SubscriptionTemplate<typename>::Interface

## BRIEF

## CONTENT

Доступ: public


# ::stappler::SubscriptionTemplate<typename>::Id

## BRIEF

## CONTENT

Доступ: public


# ::stappler::SubscriptionTemplate<typename>::Flags

## BRIEF

## CONTENT

Доступ: public


# ::stappler::SubscriptionTemplate<typename>::FlagsMap

## BRIEF

## CONTENT

Доступ: public


# ::stappler::SubscriptionTemplate<typename>::getNextId()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Id

# ::stappler::SubscriptionTemplate<typename>::Initial

## BRIEF

## CONTENT

Доступ: public

Тип: Flags


# ::stappler::SubscriptionTemplate<typename>::~SubscriptionTemplate()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::SubscriptionTemplate<typename>::_Flag<class>(T)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class T

Параметры:
* T

Возвращает:
* Flags

# ::stappler::SubscriptionTemplate<typename>::Flag()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Flags

# ::stappler::SubscriptionTemplate<typename>::Flag<class,class>(T,Args &&...)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class T
* class Args

Параметры:
* T
* Args &&...

Возвращает:
* Flags

# ::stappler::SubscriptionTemplate<typename>::setDirty(stappler::SubscriptionTemplate::Flags,bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::SubscriptionTemplate::Flags
* bool


# ::stappler::SubscriptionTemplate<typename>::subscribe(stappler::SubscriptionTemplate::Id)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::SubscriptionTemplate::Id

Возвращает:
* bool

# ::stappler::SubscriptionTemplate<typename>::unsubscribe(stappler::SubscriptionTemplate::Id)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::SubscriptionTemplate::Id

Возвращает:
* bool

# ::stappler::SubscriptionTemplate<typename>::check(stappler::SubscriptionTemplate::Id)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::SubscriptionTemplate::Id

Возвращает:
* Flags

# ::stappler::SubscriptionTemplate<typename>::setForwardedSubscription(SubscriptionTemplate<_Interface>*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* SubscriptionTemplate<_Interface>*


# ::stappler::SubscriptionTemplate<typename>::_forwarded

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<SubscriptionTemplate<_Interface>>


# ::stappler::SubscriptionTemplate<typename>::_forwardedFlags

## BRIEF

## CONTENT

Доступ: protected

Тип: FlagsMap*


# ::stappler::SubscriptionTemplate<typename>::_flags

## BRIEF

## CONTENT

Доступ: protected

Тип: FlagsMap


# ::stappler::Binding<class>

## BRIEF

## CONTENT

Параметры шаблона:
* class T


# ::stappler::Binding<class>::Id

## BRIEF

## CONTENT

Доступ: public


# ::stappler::Binding<class>::Flags

## BRIEF

## CONTENT

Доступ: public


# ::stappler::Binding<class>::Binding()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::Binding<class>::Binding(T*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* T*


# ::stappler::Binding<class>::~Binding()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::Binding<class>::Binding(Binding<T> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Binding<T> const&


# ::stappler::Binding<class>::operator=(Binding<T> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Binding<T> const&

Возвращает:
* Binding<T>&

# ::stappler::Binding<class>::Binding(Binding<T>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Binding<T>&&


# ::stappler::Binding<class>::operator=(Binding<T>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Binding<T>&&

Возвращает:
* Binding<T>&

# ::stappler::Binding<class>::operator T*()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* T*

# ::stappler::Binding<class>::operator T*() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* T*

# ::stappler::Binding<class>::operator bool() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::Binding<class>::operator->()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* T*

# ::stappler::Binding<class>::operator->() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* T const*

# ::stappler::Binding<class>::check()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Flags

# ::stappler::Binding<class>::set(T*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* T*


# ::stappler::Binding<class>::get() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* T*

# ::stappler::Binding<class>::_id

## BRIEF

## CONTENT

Доступ: protected

Тип: Id


# ::stappler::Binding<class>::_subscription

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<T>


# ::stappler::SubscriptionTemplate<typename>::setDirty(stappler::SubscriptionTemplate::Flags,bool)

## BRIEF

## CONTENT

Параметры:
* stappler::SubscriptionTemplate::Flags
* bool


# ::stappler::SubscriptionTemplate<typename>::subscribe(stappler::SubscriptionTemplate::Id)

## BRIEF

## CONTENT

Параметры:
* stappler::SubscriptionTemplate::Id

Возвращает:
* bool

# ::stappler::SubscriptionTemplate<typename>::unsubscribe(stappler::SubscriptionTemplate::Id)

## BRIEF

## CONTENT

Параметры:
* stappler::SubscriptionTemplate::Id

Возвращает:
* bool

# ::stappler::SubscriptionTemplate<typename>::check(stappler::SubscriptionTemplate::Id)

## BRIEF

## CONTENT

Параметры:
* stappler::SubscriptionTemplate::Id

Возвращает:
* stappler::SubscriptionFlags

# ::stappler::SubscriptionTemplate<typename>::setForwardedSubscription(SubscriptionTemplate<_Interface>*)

## BRIEF

## CONTENT

Параметры:
* SubscriptionTemplate<_Interface>*


# ::stappler::Binding<class>::Binding()

## BRIEF

## CONTENT


# ::stappler::Binding<class>::Binding(T*)

## BRIEF

## CONTENT

Параметры:
* T*


# ::stappler::Binding<class>::~Binding()

## BRIEF

## CONTENT


# ::stappler::Binding<class>::Binding(Binding<T> const&)

## BRIEF

## CONTENT

Параметры:
* Binding<T> const&


# ::stappler::Binding<class>::operator=(Binding<T> const&)

## BRIEF

## CONTENT

Параметры:
* Binding<T> const&

Возвращает:
* Binding<T>&

# ::stappler::Binding<class>::Binding(Binding<T>&&)

## BRIEF

## CONTENT

Параметры:
* Binding<T>&&


# ::stappler::Binding<class>::operator=(Binding<T>&&)

## BRIEF

## CONTENT

Параметры:
* Binding<T>&&

Возвращает:
* Binding<T>&

# ::stappler::Binding<class>::check()

## BRIEF

## CONTENT

Возвращает:
* stappler::SubscriptionFlags

# ::stappler::Binding<class>::set(T*)

## BRIEF

## CONTENT

Параметры:
* T*


# ::stappler::Binding<class>::get() const

## BRIEF

## CONTENT

Возвращает:
* T*

# ::stappler::mem_std::Subscription

## BRIEF

## CONTENT


# ::stappler::mem_pool::Subscription

## BRIEF

## CONTENT
