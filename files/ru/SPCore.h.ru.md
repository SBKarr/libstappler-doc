Title: SPCore.h


# LIBSTAPPLER_COMMON_CORE_SPCORE_H_

## BRIEF

## CONTENT


# SPDEFAULT

## BRIEF

## CONTENT


# __STDC_WANT_IEC_60559_TYPES_EXT__

## BRIEF

## CONTENT


# SPUNUSED

## BRIEF

## CONTENT


# SPINLINE

## BRIEF

## CONTENT


# 

## BRIEF

## CONTENT


# SP_EXTERN_C

## BRIEF

## CONTENT


# 

## BRIEF

## CONTENT


# ::_spChar

## BRIEF

## CONTENT


# ::numbers::pi

## BRIEF

## CONTENT

Тип: double const


# ::operator""_hash(char const*,size_t)

## BRIEF

## CONTENT

Параметры:
* char const*
* size_t

Возвращает:
* uint32_t

# ::operator""_tag(char const*,size_t)

## BRIEF

## CONTENT

Параметры:
* char const*
* size_t

Возвращает:
* uint32_t

# ::operator""_hash64(char const*,size_t)

## BRIEF

## CONTENT

Параметры:
* char const*
* size_t

Возвращает:
* uint64_t

# ::operator""_tag64(char const*,size_t)

## BRIEF

## CONTENT

Параметры:
* char const*
* size_t

Возвращает:
* uint64_t

# ::operator""_to_rad(long double)

## BRIEF

## CONTENT

Параметры:
* long double

Возвращает:
* long double

# ::operator""_to_rad(unsigned long long)

## BRIEF

## CONTENT

Параметры:
* unsigned long long

Возвращает:
* long double

# ::operator""_length(char const*,size_t)

## BRIEF

## CONTENT

Параметры:
* char const*
* size_t

Возвращает:
* size_t

# ::operator""_length(char16_t const*,size_t)

## BRIEF

## CONTENT

Параметры:
* char16_t const*
* size_t

Возвращает:
* size_t

# ::operator""_len(char const*,size_t)

## BRIEF

## CONTENT

Параметры:
* char const*
* size_t

Возвращает:
* size_t

# ::operator""_len(char16_t const*,size_t)

## BRIEF

## CONTENT

Параметры:
* char16_t const*
* size_t

Возвращает:
* size_t

# ::operator""_GiB(unsigned long long)

## BRIEF

## CONTENT

Параметры:
* unsigned long long

Возвращает:
* unsigned long long

# ::operator""_MiB(unsigned long long)

## BRIEF

## CONTENT

Параметры:
* unsigned long long

Возвращает:
* unsigned long long

# ::operator""_KiB(unsigned long long)

## BRIEF

## CONTENT

Параметры:
* unsigned long long

Возвращает:
* unsigned long long

# ::operator""_c16(unsigned long long)

## BRIEF

## CONTENT

Параметры:
* unsigned long long

Возвращает:
* char16_t

# ::operator""_c8(unsigned long long)

## BRIEF

## CONTENT

Параметры:
* unsigned long long

Возвращает:
* char

# ::stappler::nullptr_t

## BRIEF

## CONTENT


# ::stappler::pair<typename>(Args &&...)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Args

Параметры:
* Args &&...

Возвращает:
* decltype(std::make_pair(forward<Args>(args)...))

# ::stappler::Pair<typename,typename>

## BRIEF

## CONTENT

Параметры шаблона:
* typename T
* typename V


# ::stappler::NumericLimits<typename>

## BRIEF

## CONTENT

Параметры шаблона:
* typename T


# ::stappler::InitializerList<typename>

## BRIEF

## CONTENT

Параметры шаблона:
* typename T


# ::stappler::nan<typename>()

## BRIEF

## CONTENT

Параметры шаблона:
* typename T

Возвращает:
* T

# ::stappler::epsilon<typename>()

## BRIEF

## CONTENT

Параметры шаблона:
* typename T

Возвращает:
* T

# ::stappler::isnan<typename>(T&&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename T

Параметры:
* T&&

Возвращает:
* bool

# ::stappler::maxOf<class>()

## BRIEF

## CONTENT

Параметры шаблона:
* class T

Возвращает:
* T

# ::stappler::minOf<class>()

## BRIEF

## CONTENT

Параметры шаблона:
* class T

Возвращает:
* T

# ::stappler::HasMultiplication<typename,typename>

## BRIEF

## CONTENT

Параметры шаблона:
* typename T
* typename V


# ::stappler::HasMultiplication<typename,typename>::test<class,class>(A*,B*)

## BRIEF

## CONTENT

Параметры шаблона:
* class A
* class B

Параметры:
* A*
* B*

Возвращает:
* decltype(std::declval<A>()*std::declval<B>())

# ::stappler::HasMultiplication<typename,typename>::test<typename,typename>()

## BRIEF

## CONTENT

Параметры шаблона:
* typename 
* typename 

Возвращает:
* std::false_type

# ::stappler::HasMultiplication<typename,typename>::type

## BRIEF

## CONTENT


# ::stappler::progress<class>(T const&,T const&,float)

## BRIEF

## CONTENT

Параметры шаблона:
* class T

Параметры:
* T const&
* T const&
* float

Возвращает:
* T

# ::stappler::_ValueReinterpretator<class,class>

## BRIEF

## CONTENT

Параметры шаблона:
* class T
* class V


# ::stappler::_ValueReinterpretator<class,class>::reinterpret(V)

## BRIEF

## CONTENT

Параметры:
* V

Возвращает:
* T

# ::stappler::_ValueReinterpretator<T,T>::_ValueReinterpretator<T,T>

## BRIEF

## CONTENT

Параметры шаблона:
* class T


# ::stappler::_ValueReinterpretator<T,T>::reinterpret(T)

## BRIEF

## CONTENT

Параметры:
* T

Возвращает:
* T

# ::stappler::reinterpretValue<class,class,typename std::enable_if<sizeof(T) == sizeof(V)>::type*>(V)

## BRIEF

## CONTENT

Параметры шаблона:
* class T
* class V
* typename std::enable_if<sizeof(T) == sizeof(V)>::type* 

Параметры:
* V

Возвращает:
* T

# ::stappler::toInt<typename>(E const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename E

Параметры:
* E const&

Возвращает:
* typename std::underlying_type<E>::type

# ::stappler::StringToNumber<typename>(char const*,char**,int)

## BRIEF

## CONTENT

Параметры шаблона:
* typename T

Параметры:
* char const*
* char**
* int

Возвращает:
* T

# ::stappler::StringToNumber(char const*,char**,int)

## BRIEF

## CONTENT

Параметры:
* char const*
* char**
* int

Возвращает:
* unsigned int

# ::stappler::StringToNumber(char const*,char**,int)

## BRIEF

## CONTENT

Параметры:
* char const*
* char**
* int

Возвращает:
* unsigned long

# ::stappler::StringToNumber(char const*,char**,int)

## BRIEF

## CONTENT

Параметры:
* char const*
* char**
* int

Возвращает:
* unsigned long long

# ::stappler::StringToNumber(char const*,char**,int)

## BRIEF

## CONTENT

Параметры:
* char const*
* char**
* int

Возвращает:
* int

# ::stappler::StringToNumber(char const*,char**,int)

## BRIEF

## CONTENT

Параметры:
* char const*
* char**
* int

Возвращает:
* long

# ::stappler::StringToNumber(char const*,char**,int)

## BRIEF

## CONTENT

Параметры:
* char const*
* char**
* int

Возвращает:
* long long

# ::stappler::StringToNumber(char const*,char**,int)

## BRIEF

## CONTENT

Параметры:
* char const*
* char**
* int

Возвращает:
* float

# ::stappler::StringToNumber(char const*,char**,int)

## BRIEF

## CONTENT

Параметры:
* char const*
* char**
* int

Возвращает:
* double

# ::stappler::ValueWrapper<class,class>

## BRIEF

## CONTENT

Параметры шаблона:
* class T
* class Flag


# ::stappler::ValueWrapper<class,class>::Type

## BRIEF

## CONTENT


# ::stappler::ValueWrapper<class,class>::max()

## BRIEF

## CONTENT

Возвращает:
* ValueWrapper<T, Flag>

# ::stappler::ValueWrapper<class,class>::min()

## BRIEF

## CONTENT

Возвращает:
* ValueWrapper<T, Flag>

# ::stappler::ValueWrapper<class,class>::epsilon()

## BRIEF

## CONTENT

Возвращает:
* ValueWrapper<T, Flag>

# ::stappler::ValueWrapper<class,class>::zero()

## BRIEF

## CONTENT

Возвращает:
* ValueWrapper<T, Flag>

# ::stappler::ValueWrapper<class,class>::ValueWrapper()

## BRIEF

## CONTENT


# ::stappler::ValueWrapper<class,class>::ValueWrapper(T const&)

## BRIEF

## CONTENT

Параметры:
* T const&


# ::stappler::ValueWrapper<class,class>::ValueWrapper(T&&)

## BRIEF

## CONTENT

Параметры:
* T&&


# ::stappler::ValueWrapper<class,class>::ValueWrapper(ValueWrapper<T, Flag> const&)

## BRIEF

## CONTENT

Параметры:
* ValueWrapper<T, Flag> const&


# ::stappler::ValueWrapper<class,class>::operator=(ValueWrapper<T, Flag> const&)

## BRIEF

## CONTENT

Параметры:
* ValueWrapper<T, Flag> const&

Возвращает:
* ValueWrapper<T, Flag>&

# ::stappler::ValueWrapper<class,class>::ValueWrapper(ValueWrapper<T, Flag>&&)

## BRIEF

## CONTENT

Параметры:
* ValueWrapper<T, Flag>&&


# ::stappler::ValueWrapper<class,class>::operator=(ValueWrapper<T, Flag>&&)

## BRIEF

## CONTENT

Параметры:
* ValueWrapper<T, Flag>&&

Возвращает:
* ValueWrapper<T, Flag>&

# ::stappler::ValueWrapper<class,class>::set(T const&)

## BRIEF

## CONTENT

Параметры:
* T const&


# ::stappler::ValueWrapper<class,class>::set(T&&)

## BRIEF

## CONTENT

Параметры:
* T&&


# ::stappler::ValueWrapper<class,class>::get()

## BRIEF

## CONTENT

Возвращает:
* T&

# ::stappler::ValueWrapper<class,class>::get() const

## BRIEF

## CONTENT

Возвращает:
* T const&

# ::stappler::ValueWrapper<class,class>::empty() const

## BRIEF

## CONTENT

Возвращает:
* bool

# ::stappler::ValueWrapper<class,class>::operator==(ValueWrapper<T, Flag> const&) const

## BRIEF

## CONTENT

Параметры:
* ValueWrapper<T, Flag> const&

Возвращает:
* bool

# ::stappler::ValueWrapper<class,class>::operator!=(ValueWrapper<T, Flag> const&) const

## BRIEF

## CONTENT

Параметры:
* ValueWrapper<T, Flag> const&

Возвращает:
* bool

# ::stappler::ValueWrapper<class,class>::operator>(ValueWrapper<T, Flag> const&) const

## BRIEF

## CONTENT

Параметры:
* ValueWrapper<T, Flag> const&

Возвращает:
* bool

# ::stappler::ValueWrapper<class,class>::operator<(ValueWrapper<T, Flag> const&) const

## BRIEF

## CONTENT

Параметры:
* ValueWrapper<T, Flag> const&

Возвращает:
* bool

# ::stappler::ValueWrapper<class,class>::operator>=(ValueWrapper<T, Flag> const&) const

## BRIEF

## CONTENT

Параметры:
* ValueWrapper<T, Flag> const&

Возвращает:
* bool

# ::stappler::ValueWrapper<class,class>::operator<=(ValueWrapper<T, Flag> const&) const

## BRIEF

## CONTENT

Параметры:
* ValueWrapper<T, Flag> const&

Возвращает:
* bool

# ::stappler::ValueWrapper<class,class>::operator|=(ValueWrapper<T, Flag> const&)

## BRIEF

## CONTENT

Параметры:
* ValueWrapper<T, Flag> const&


# ::stappler::ValueWrapper<class,class>::operator&=(ValueWrapper<T, Flag> const&)

## BRIEF

## CONTENT

Параметры:
* ValueWrapper<T, Flag> const&


# ::stappler::ValueWrapper<class,class>::operator^=(ValueWrapper<T, Flag> const&)

## BRIEF

## CONTENT

Параметры:
* ValueWrapper<T, Flag> const&


# ::stappler::ValueWrapper<class,class>::operator+=(ValueWrapper<T, Flag> const&)

## BRIEF

## CONTENT

Параметры:
* ValueWrapper<T, Flag> const&


# ::stappler::ValueWrapper<class,class>::operator-=(ValueWrapper<T, Flag> const&)

## BRIEF

## CONTENT

Параметры:
* ValueWrapper<T, Flag> const&


# ::stappler::ValueWrapper<class,class>::operator*=(ValueWrapper<T, Flag> const&)

## BRIEF

## CONTENT

Параметры:
* ValueWrapper<T, Flag> const&


# ::stappler::ValueWrapper<class,class>::operator/=(ValueWrapper<T, Flag> const&)

## BRIEF

## CONTENT

Параметры:
* ValueWrapper<T, Flag> const&


# ::stappler::ValueWrapper<class,class>::operator|(ValueWrapper<T, Flag> const&) const

## BRIEF

## CONTENT

Параметры:
* ValueWrapper<T, Flag> const&

Возвращает:
* ValueWrapper<T, Flag>

# ::stappler::ValueWrapper<class,class>::operator&(ValueWrapper<T, Flag> const&) const

## BRIEF

## CONTENT

Параметры:
* ValueWrapper<T, Flag> const&

Возвращает:
* ValueWrapper<T, Flag>

# ::stappler::ValueWrapper<class,class>::operator^(ValueWrapper<T, Flag> const&) const

## BRIEF

## CONTENT

Параметры:
* ValueWrapper<T, Flag> const&

Возвращает:
* ValueWrapper<T, Flag>

# ::stappler::ValueWrapper<class,class>::operator+(ValueWrapper<T, Flag> const&) const

## BRIEF

## CONTENT

Параметры:
* ValueWrapper<T, Flag> const&

Возвращает:
* ValueWrapper<T, Flag>

# ::stappler::ValueWrapper<class,class>::operator-(ValueWrapper<T, Flag> const&) const

## BRIEF

## CONTENT

Параметры:
* ValueWrapper<T, Flag> const&

Возвращает:
* ValueWrapper<T, Flag>

# ::stappler::ValueWrapper<class,class>::operator*(ValueWrapper<T, Flag> const&) const

## BRIEF

## CONTENT

Параметры:
* ValueWrapper<T, Flag> const&

Возвращает:
* ValueWrapper<T, Flag>

# ::stappler::ValueWrapper<class,class>::operator/(ValueWrapper<T, Flag> const&) const

## BRIEF

## CONTENT

Параметры:
* ValueWrapper<T, Flag> const&

Возвращает:
* ValueWrapper<T, Flag>

# ::stappler::ValueWrapper<class,class>::operator-() const

## BRIEF

## CONTENT

Возвращает:
* ValueWrapper<T, Flag>

# ::stappler::ValueWrapper<class,class>::operator++()

## BRIEF

## CONTENT

Возвращает:
* ValueWrapper<T, Flag>&

# ::stappler::ValueWrapper<class,class>::operator--()

## BRIEF

## CONTENT

Возвращает:
* ValueWrapper<T, Flag>&

# ::stappler::ValueWrapper<class,class>::operator++(int)

## BRIEF

## CONTENT

Параметры:
* int

Возвращает:
* ValueWrapper<T, Flag>

# ::stappler::ValueWrapper<class,class>::operator--(int)

## BRIEF

## CONTENT

Параметры:
* int

Возвращает:
* ValueWrapper<T, Flag>

# ::stappler::ValueWrapper<class,class>::operator*<typename>(M const&) const

## BRIEF

## CONTENT

Параметры шаблона:
* typename M

Параметры:
* M const&

Возвращает:
* std::enable_if_t<HasMultiplication<Type, M>::type::value, ValueWrapper<T, Flag>>

# ::stappler::ValueWrapper<class,class>::value

## BRIEF

## CONTENT

Тип: T


# ::stappler::Result<typename>

## BRIEF

## CONTENT

Параметры шаблона:
* typename T


# ::stappler::Result<typename>::Status

## BRIEF

## CONTENT

Значения:
* Ok
* Error


# ::stappler::Result<typename>::status

## BRIEF

## CONTENT

Тип: stappler::Result::Status


# ::stappler::Result<typename>::result

## BRIEF

## CONTENT

Тип: T


# ::stappler::Result<typename>::error()

## BRIEF

## CONTENT

Возвращает:
* Result<T>

# ::stappler::Result<typename>::Result(T&&)

## BRIEF

## CONTENT

Параметры:
* T&&


# ::stappler::Result<typename>::Result(T const&)

## BRIEF

## CONTENT

Параметры:
* T const&


# ::stappler::Result<typename>::Result()

## BRIEF

## CONTENT


# ::stappler::Result<typename>::Result(const Result<T>&)

## BRIEF

## CONTENT

Параметры:
* const Result<T>&


# ::stappler::Result<typename>::Result(Result<T>&&)

## BRIEF

## CONTENT

Параметры:
* Result<T>&&


# ::stappler::Result<typename>::operator=(const Result<T>&)

## BRIEF

## CONTENT

Параметры:
* const Result<T>&

Возвращает:
* Result<T>&

# ::stappler::Result<typename>::operator=(Result<T>&&)

## BRIEF

## CONTENT

Параметры:
* Result<T>&&

Возвращает:
* Result<T>&

# ::stappler::Result<typename>::valid() const

## BRIEF

## CONTENT

Возвращает:
* bool

# ::stappler::Result<typename>::unwrap<typename>(Callback const&) const

## BRIEF

## CONTENT

Параметры шаблона:
* typename Callback

Параметры:
* Callback const&

Возвращает:
* bool

# ::stappler::Result<typename>::grab(T&)

## BRIEF

## CONTENT

Параметры:
* T&

Возвращает:
* bool

# ::stappler::Result<typename>::get() const

## BRIEF

## CONTENT

Возвращает:
* T const&

# ::stappler::Result<typename>::get(T const&) const

## BRIEF

## CONTENT

Параметры:
* T const&

Возвращает:
* T const&

# 

## BRIEF

## CONTENT


# 

## BRIEF

## CONTENT


# ::stappler::math::MATH_FLOAT_SMALL

## BRIEF

## CONTENT

Тип: float const


# ::stappler::math::MATH_TOLERANCE

## BRIEF

## CONTENT

Тип: float const


# ::stappler::math::clamp<class,class>(T const&,T const&,T const&,Compare)

## BRIEF

## CONTENT

Параметры шаблона:
* class T
* class Compare

Параметры:
* T const&
* T const&
* T const&
* Compare

Возвращает:
* T const&

# ::stappler::math::clamp<class>(T const&,T const&,T const&)

## BRIEF

## CONTENT

Параметры шаблона:
* class T

Параметры:
* T const&
* T const&
* T const&

Возвращает:
* T const&

# ::stappler::math::clamp_distance<class,class>(T const&,T const&,T const&,Compare,T const&)

## BRIEF

## CONTENT

Параметры шаблона:
* class T
* class Compare

Параметры:
* T const&
* T const&
* T const&
* Compare
* T const&

Возвращает:
* T

# ::stappler::math::clamp_distance<class,class>(T const&,T const&,T const&,Compare)

## BRIEF

## CONTENT

Параметры шаблона:
* class T
* class Compare

Параметры:
* T const&
* T const&
* T const&
* Compare

Возвращает:
* T

# ::stappler::math::clamp_distance<class>(T const&,T const&,T const&,T const&)

## BRIEF

## CONTENT

Параметры шаблона:
* class T

Параметры:
* T const&
* T const&
* T const&
* T const&

Возвращает:
* T

# ::stappler::math::clamp_distance<class>(T const&,T const&,T const&)

## BRIEF

## CONTENT

Параметры шаблона:
* class T

Параметры:
* T const&
* T const&
* T const&

Возвращает:
* T

# ::stappler::math::npot(uint32_t)

## BRIEF

## CONTENT

Параметры:
* uint32_t

Возвращает:
* uint32_t

# ::stappler::math::npot(uint64_t)

## BRIEF

## CONTENT

Параметры:
* uint64_t

Возвращает:
* uint64_t

# ::stappler::math::align<typename>(T,T)

## BRIEF

## CONTENT

Параметры шаблона:
* typename T

Параметры:
* T
* T

Возвращает:
* T

# ::stappler::math::to_rad<typename>(T)

## BRIEF

## CONTENT

Параметры шаблона:
* typename T

Параметры:
* T

Возвращает:
* T

# ::stappler::math::to_deg<typename>(T)

## BRIEF

## CONTENT

Параметры шаблона:
* typename T

Параметры:
* T

Возвращает:
* T

# ::std::hash<stappler::ValueWrapper<Value,Flag>>::hash<stappler::ValueWrapper<Value,Flag>>

## BRIEF

## CONTENT

Параметры шаблона:
* typename Value
* typename Flag


# ::std::hash<stappler::ValueWrapper<Value,Flag>>::hash()

## BRIEF

## CONTENT


# ::std::hash<stappler::ValueWrapper<Value,Flag>>::operator()(stappler::ValueWrapper<Value, Flag> const&) const

## BRIEF

## CONTENT

Параметры:
* stappler::ValueWrapper<Value, Flag> const&

Возвращает:
* std::size_t