Title: SPRef.h


# LIBSTAPPLER_COMMON_UTILS_SPREF_H_

## BRIEF

## CONTENT


# SP_REF_DEBUG

## BRIEF

## CONTENT


# ::stappler::AtomicCounter

## BRIEF

## CONTENT


# ::stappler::AtomicCounter::AtomicCounter()

## BRIEF

## CONTENT


# ::stappler::AtomicCounter::increment()

## BRIEF

## CONTENT


# ::stappler::AtomicCounter::decrement()

## BRIEF

## CONTENT

Возвращает:
* bool

# ::stappler::AtomicCounter::get() const

## BRIEF

## CONTENT

Возвращает:
* uint32_t

# ::stappler::AtomicCounter::_count

## BRIEF

## CONTENT

Тип: std::atomic<uint32_t>


# ::stappler::RefBase<typename>

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface

Базовые классы:
* Interface::AllocBaseType


# ::stappler::RefBase<typename>::InterfaceType

## BRIEF

## CONTENT

Доступ: public


# ::stappler::RefBase<typename>::retain()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint64_t

# ::stappler::RefBase<typename>::release(uint64_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint64_t


# ::stappler::RefBase<typename>::getReferenceCount() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint32_t

# ::stappler::RefBase<typename>::~RefBase()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::RefBase<typename>::RefBase()

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::RefBase<typename>::_counter

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::AtomicCounter


# ::stappler::memleak::getNextRefId()

## BRIEF

## CONTENT

Возвращает:
* uint64_t

# ::stappler::memleak::retainBacktrace(RefBase<memory::StandartInterface> const*)

## BRIEF

## CONTENT

Параметры:
* RefBase<memory::StandartInterface> const*

Возвращает:
* uint64_t

# ::stappler::memleak::releaseBacktrace(RefBase<memory::StandartInterface> const*,uint64_t)

## BRIEF

## CONTENT

Параметры:
* RefBase<memory::StandartInterface> const*
* uint64_t


# ::stappler::memleak::foreachBacktrace(RefBase<memory::StandartInterface> const*,Callback<void (uint64_t, stappler::Time, const std::vector<std::string> &)> const&)

## BRIEF

## CONTENT

Параметры:
* RefBase<memory::StandartInterface> const*
* Callback<void (uint64_t, stappler::Time, const std::vector<std::string> &)> const&


# ::stappler::memleak::retainBacktrace(RefBase<memory::PoolInterface> const*)

## BRIEF

## CONTENT

Параметры:
* RefBase<memory::PoolInterface> const*

Возвращает:
* uint64_t

# ::stappler::memleak::releaseBacktrace(RefBase<memory::PoolInterface> const*,uint64_t)

## BRIEF

## CONTENT

Параметры:
* RefBase<memory::PoolInterface> const*
* uint64_t


# ::stappler::memleak::foreachBacktrace(RefBase<memory::PoolInterface> const*,Callback<void (uint64_t, stappler::Time, const std::vector<std::string> &)> const&)

## BRIEF

## CONTENT

Параметры:
* RefBase<memory::PoolInterface> const*
* Callback<void (uint64_t, stappler::Time, const std::vector<std::string> &)> const&


# ::stappler::_Rc_PtrCast<class>

## BRIEF

## CONTENT

Параметры шаблона:
* class Base


# ::stappler::_Rc_PtrCast<class>::cast(Base*)

## BRIEF

## CONTENT

Параметры:
* Base*

Возвращает:
* Base*

# ::stappler::RcBase<typename>

## BRIEF

## CONTENT

Параметры шаблона:
* typename Base


# ::stappler::RcBase<typename>::Type

## BRIEF

## CONTENT

Доступ: public


# ::stappler::RcBase<typename>::Self

## BRIEF

## CONTENT

Доступ: public


# ::stappler::RcBase<typename>::Pointer

## BRIEF

## CONTENT

Доступ: public


# ::stappler::RcBase<typename>::create<class>(Args &&...)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class Args

Параметры:
* Args &&...

Возвращает:
* Self

# ::stappler::RcBase<typename>::alloc()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Self

# ::stappler::RcBase<typename>::alloc<class>(Args &&...)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class Args

Параметры:
* Args &&...

Возвращает:
* Self

# ::stappler::RcBase<typename>::RcBase()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::RcBase<typename>::RcBase(stappler::nullptr_t const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::nullptr_t const&


# ::stappler::RcBase<typename>::RcBase(stappler::RcBase::Pointer const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::RcBase::Pointer const&


# ::stappler::RcBase<typename>::RcBase(stappler::RcBase::Self const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::RcBase::Self const&


# ::stappler::RcBase<typename>::RcBase(stappler::RcBase::Self&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::RcBase::Self&&


# ::stappler::RcBase<typename>::operator=(stappler::nullptr_t const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::nullptr_t const&

Возвращает:
* RcBase<Base>&

# ::stappler::RcBase<typename>::operator=<typename,typename std::enable_if<std::is_convertible<B *, Base *>({})>::type*>(RcBase<B> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename B
* typename std::enable_if<std::is_convertible<B *, Base *>({})>::type* 

Параметры:
* RcBase<B> const&

Возвращает:
* RcBase<Base>&

# ::stappler::RcBase<typename>::operator=(stappler::RcBase::Pointer const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::RcBase::Pointer const&

Возвращает:
* RcBase<Base>&

# ::stappler::RcBase<typename>::operator=(stappler::RcBase::Self const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::RcBase::Self const&

Возвращает:
* RcBase<Base>&

# ::stappler::RcBase<typename>::operator=(stappler::RcBase::Self&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::RcBase::Self&&

Возвращает:
* RcBase<Base>&

# ::stappler::RcBase<typename>::~RcBase()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::RcBase<typename>::set(stappler::RcBase::Pointer const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::RcBase::Pointer const&


# ::stappler::RcBase<typename>::get() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Base*

# ::stappler::RcBase<typename>::operator Base*() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Base*

# ::stappler::RcBase<typename>::operator bool() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::RcBase<typename>::operator RcBase<B><typename,typename std::enable_if<std::is_convertible<Base *, B *>({})>::type*>()

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename B
* typename std::enable_if<std::is_convertible<Base *, B *>({})>::type* 

Возвращает:
* RcBase<B>

# ::stappler::RcBase<typename>::swap(stappler::RcBase::Self&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::RcBase::Self&


# ::stappler::RcBase<typename>::operator->() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Base*

# ::stappler::RcBase<typename>::cast<typename>() const

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename Target

Возвращает:
* RcBase<Target>

# ::stappler::RcBase<typename>::operator==(stappler::RcBase::Self const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::RcBase::Self const&

Возвращает:
* bool

# ::stappler::RcBase<typename>::operator==(Base const*&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Base const*&

Возвращает:
* bool

# ::stappler::RcBase<typename>::operator==(typename std::remove_const<Base>::type*) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* typename std::remove_const<Base>::type*

Возвращает:
* bool

# ::stappler::RcBase<typename>::operator==(std::nullptr_t const) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* std::nullptr_t const

Возвращает:
* bool

# ::stappler::RcBase<typename>::operator!=(stappler::RcBase::Self const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::RcBase::Self const&

Возвращает:
* bool

# ::stappler::RcBase<typename>::operator!=(Base const*&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Base const*&

Возвращает:
* bool

# ::stappler::RcBase<typename>::operator!=(typename std::remove_const<Base>::type*) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* typename std::remove_const<Base>::type*

Возвращает:
* bool

# ::stappler::RcBase<typename>::operator!=(std::nullptr_t const) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* std::nullptr_t const

Возвращает:
* bool

# ::stappler::RcBase<typename>::operator>(stappler::RcBase::Self const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::RcBase::Self const&

Возвращает:
* bool

# ::stappler::RcBase<typename>::operator>(Base const*) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Base const*

Возвращает:
* bool

# ::stappler::RcBase<typename>::operator>(typename std::remove_const<Base>::type*) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* typename std::remove_const<Base>::type*

Возвращает:
* bool

# ::stappler::RcBase<typename>::operator>(std::nullptr_t const) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* std::nullptr_t const

Возвращает:
* bool

# ::stappler::RcBase<typename>::operator<(stappler::RcBase::Self const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::RcBase::Self const&

Возвращает:
* bool

# ::stappler::RcBase<typename>::operator<(Base const*) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Base const*

Возвращает:
* bool

# ::stappler::RcBase<typename>::operator<(typename std::remove_const<Base>::type*) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* typename std::remove_const<Base>::type*

Возвращает:
* bool

# ::stappler::RcBase<typename>::operator<(std::nullptr_t const) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* std::nullptr_t const

Возвращает:
* bool

# ::stappler::RcBase<typename>::operator>=(stappler::RcBase::Self const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::RcBase::Self const&

Возвращает:
* bool

# ::stappler::RcBase<typename>::operator>=(Base const*) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Base const*

Возвращает:
* bool

# ::stappler::RcBase<typename>::operator>=(typename std::remove_const<Base>::type*) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* typename std::remove_const<Base>::type*

Возвращает:
* bool

# ::stappler::RcBase<typename>::operator>=(std::nullptr_t const) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* std::nullptr_t const

Возвращает:
* bool

# ::stappler::RcBase<typename>::operator<=(stappler::RcBase::Self const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::RcBase::Self const&

Возвращает:
* bool

# ::stappler::RcBase<typename>::operator<=(Base const*) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Base const*

Возвращает:
* bool

# ::stappler::RcBase<typename>::operator<=(typename std::remove_const<Base>::type*) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* typename std::remove_const<Base>::type*

Возвращает:
* bool

# ::stappler::RcBase<typename>::operator<=(std::nullptr_t const) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* std::nullptr_t const

Возвращает:
* bool

# ::stappler::RcBase<typename>::doRetain()

## BRIEF

## CONTENT

Доступ: private


# ::stappler::RcBase<typename>::doRelease()

## BRIEF

## CONTENT

Доступ: private


# ::stappler::RcBase<typename>::doSwap(stappler::RcBase::Pointer)

## BRIEF

## CONTENT

Доступ: private

Параметры:
* stappler::RcBase::Pointer

Возвращает:
* Pointer

# ::stappler::RcBase<typename>::RcBase(stappler::RcBase::Pointer,bool)

## BRIEF

## CONTENT

Доступ: private

Параметры:
* stappler::RcBase::Pointer
* bool


# ::stappler::RcBase<typename>::_ptr

## BRIEF

## CONTENT

Доступ: private

Тип: Pointer


# ::stappler::Rc<typename>

## BRIEF

## CONTENT

Параметры шаблона:
* typename T


# ::stappler::mem_std::Ref

## BRIEF

## CONTENT


# ::stappler::mem_pool::Ref

## BRIEF

## CONTENT
