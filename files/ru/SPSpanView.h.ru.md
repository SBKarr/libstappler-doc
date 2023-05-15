Title: SPSpanView.h


# LIBSTAPPLER_COMMON_STRING_SPSPANVIEW_H_

## BRIEF

## CONTENT


# ::stappler::SpanView<typename>

## BRIEF

## CONTENT

Параметры шаблона:
* typename _Type


# ::stappler::SpanView<typename>::Type

## BRIEF

## CONTENT

Доступ: public


# ::stappler::SpanView<typename>::Self

## BRIEF

## CONTENT

Доступ: public


# ::stappler::SpanView<typename>::iterator

## BRIEF

## CONTENT

Доступ: public


# ::stappler::SpanView<typename>::reverse_iterator

## BRIEF

## CONTENT

Доступ: public


# ::stappler::SpanView<typename>::SpanView()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::SpanView<typename>::SpanView(stappler::SpanView::Type const*,size_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::SpanView::Type const*
* size_t


# ::stappler::SpanView<typename>::SpanView(stappler::SpanView::Type const*,stappler::SpanView::Type const*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::SpanView::Type const*
* stappler::SpanView::Type const*


# ::stappler::SpanView<typename>::alloc(memory::pool_t*,size_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* memory::pool_t*
* size_t

Возвращает:
* Self

# ::stappler::SpanView<typename>::SpanView<class>(InputIt,InputIt)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class InputIt

Параметры:
* InputIt
* InputIt


# ::stappler::SpanView<typename>::SpanView(InitializerList<stappler::SpanView::Type>)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* InitializerList<stappler::SpanView::Type>


# ::stappler::SpanView<typename>::SpanView(std::vector<Type> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* std::vector<Type> const&


# ::stappler::SpanView<typename>::SpanView(std::vector<Type> const&,size_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* std::vector<Type> const&
* size_t


# ::stappler::SpanView<typename>::SpanView(std::vector<Type> const&,size_t,size_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* std::vector<Type> const&
* size_t
* size_t


# ::stappler::SpanView<typename>::SpanView(memory::vector<Type> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* memory::vector<Type> const&


# ::stappler::SpanView<typename>::SpanView(memory::vector<Type> const&,size_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* memory::vector<Type> const&
* size_t


# ::stappler::SpanView<typename>::SpanView(memory::vector<Type> const&,size_t,size_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* memory::vector<Type> const&
* size_t
* size_t


# ::stappler::SpanView<typename>::SpanView<size_t>(stappler::SpanView::Type const(&)[Size])

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* size_t Size

Параметры:
* stappler::SpanView::Type const(&)[Size]


# ::stappler::SpanView<typename>::SpanView<size_t>(std::array<Type, Size> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* size_t Size

Параметры:
* std::array<Type, Size> const&


# ::stappler::SpanView<typename>::SpanView(stappler::SpanView::Self const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::SpanView::Self const&


# ::stappler::SpanView<typename>::SpanView(stappler::SpanView::Self const&,size_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::SpanView::Self const&
* size_t


# ::stappler::SpanView<typename>::SpanView(stappler::SpanView::Self const&,size_t,size_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::SpanView::Self const&
* size_t
* size_t


# ::stappler::SpanView<typename>::operator=(memory::vector<Type> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* memory::vector<Type> const&

Возвращает:
* Self&

# ::stappler::SpanView<typename>::operator=(std::vector<Type> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* std::vector<Type> const&

Возвращает:
* Self&

# ::stappler::SpanView<typename>::operator=<size_t>(std::array<Type, Size> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* size_t Size

Параметры:
* std::array<Type, Size> const&

Возвращает:
* Self&

# ::stappler::SpanView<typename>::operator=(stappler::SpanView::Self const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::SpanView::Self const&

Возвращает:
* Self&

# ::stappler::SpanView<typename>::set(stappler::SpanView::Type const*,size_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::SpanView::Type const*
* size_t

Возвращает:
* Self&

# ::stappler::SpanView<typename>::offset(size_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* size_t


# ::stappler::SpanView<typename>::data() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Type*

# ::stappler::SpanView<typename>::size() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* size_t

# ::stappler::SpanView<typename>::begin() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* iterator

# ::stappler::SpanView<typename>::end() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* iterator

# ::stappler::SpanView<typename>::rbegin() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* reverse_iterator

# ::stappler::SpanView<typename>::rend() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* reverse_iterator

# ::stappler::SpanView<typename>::operator>(size_t const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* size_t const&

Возвращает:
* bool

# ::stappler::SpanView<typename>::operator>=(size_t const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* size_t const&

Возвращает:
* bool

# ::stappler::SpanView<typename>::operator<(size_t const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* size_t const&

Возвращает:
* bool

# ::stappler::SpanView<typename>::operator<=(size_t const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* size_t const&

Возвращает:
* bool

# ::stappler::SpanView<typename>::operator++()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Self&

# ::stappler::SpanView<typename>::operator++(int)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* int

Возвращает:
* Self

# ::stappler::SpanView<typename>::operator+=(size_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* size_t

Возвращает:
* Self&

# ::stappler::SpanView<typename>::operator==(stappler::SpanView::Self const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::SpanView::Self const&

Возвращает:
* bool

# ::stappler::SpanView<typename>::operator!=(stappler::SpanView::Self const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::SpanView::Self const&

Возвращает:
* bool

# ::stappler::SpanView<typename>::front() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Type&

# ::stappler::SpanView<typename>::back() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Type&

# ::stappler::SpanView<typename>::at(size_t const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* size_t const&

Возвращает:
* Type&

# ::stappler::SpanView<typename>::operator[](size_t const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* size_t const&

Возвращает:
* Type&

# ::stappler::SpanView<typename>::operator*() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Type&

# ::stappler::SpanView<typename>::clear()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::SpanView<typename>::empty() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::SpanView<typename>::first(size_t) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* size_t

Возвращает:
* Self

# ::stappler::SpanView<typename>::last(size_t) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* size_t

Возвращает:
* Self

# ::stappler::SpanView<typename>::pop_front(size_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* size_t

Возвращает:
* Self

# ::stappler::SpanView<typename>::pop_back(size_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* size_t

Возвращает:
* Self

# ::stappler::SpanView<typename>::vec<typename>() const

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename Interface

Возвращает:
* typename Interface::template VectorType<stappler::SpanView::Type>

# ::stappler::SpanView<typename>::bytes() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::BytesView

# ::stappler::SpanView<typename>::pdup(memory::pool_t*) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* memory::pool_t*

Возвращает:
* Self

# ::stappler::SpanView<typename>::hash() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* size_t

# ::stappler::SpanView<typename>::sub(size_t,size_t) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* size_t
* size_t

Возвращает:
* Self

# ::stappler::SpanView<typename>::ptr

## BRIEF

## CONTENT

Доступ: protected

Тип: Type*


# ::stappler::SpanView<typename>::len

## BRIEF

## CONTENT

Доступ: protected

Тип: size_t


# ::stappler::operator<<typename>(SpanView<_Tp> const&,SpanView<_Tp> const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename _Tp

Параметры:
* SpanView<_Tp> const&
* SpanView<_Tp> const&

Возвращает:
* bool

# ::stappler::operator><typename>(SpanView<_Tp> const&,SpanView<_Tp> const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename _Tp

Параметры:
* SpanView<_Tp> const&
* SpanView<_Tp> const&

Возвращает:
* bool

# ::stappler::operator<=<typename>(SpanView<_Tp> const&,SpanView<_Tp> const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename _Tp

Параметры:
* SpanView<_Tp> const&
* SpanView<_Tp> const&

Возвращает:
* bool

# ::stappler::operator>=<typename>(SpanView<_Tp> const&,SpanView<_Tp> const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename _Tp

Параметры:
* SpanView<_Tp> const&
* SpanView<_Tp> const&

Возвращает:
* bool

# ::stappler::makeSpanView<typename>(std::vector<Type> const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Type

Параметры:
* std::vector<Type> const&

Возвращает:
* SpanView<Type>

# ::stappler::makeSpanView<typename>(memory::vector<Type> const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Type

Параметры:
* memory::vector<Type> const&

Возвращает:
* SpanView<Type>

# ::stappler::makeSpanView<typename,size_t>(std::array<Type, Size> const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Type
* size_t Size

Параметры:
* std::array<Type, Size> const&

Возвращает:
* SpanView<Type>

# ::stappler::makeSpanView<typename>(Type const*,size_t)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Type

Параметры:
* Type const*
* size_t

Возвращает:
* SpanView<Type>

# ::std::hash<stappler::SpanView<Value>>::hash<stappler::SpanView<Value>>

## BRIEF

## CONTENT

Параметры шаблона:
* typename Value


# ::std::hash<stappler::SpanView<Value>>::operator()(stappler::SpanView<Value> const&)

## BRIEF

## CONTENT

Параметры:
* stappler::SpanView<Value> const&

Возвращает:
* std::size_t