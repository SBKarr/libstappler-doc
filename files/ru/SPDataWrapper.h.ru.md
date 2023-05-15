Title: SPDataWrapper.h


# MODULES_DATA_SPDATAWRAPPER_H_

## BRIEF

## CONTENT


# ::stappler::data::WrapperTemplate<typename>

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface

Базовые классы:
* Interface::AllocBaseType


# ::stappler::data::WrapperTemplate<typename>::Value

## BRIEF

## CONTENT

Доступ: public


# ::stappler::data::WrapperTemplate<typename>::Array

## BRIEF

## CONTENT

Доступ: public


# ::stappler::data::WrapperTemplate<typename>::Dictionary

## BRIEF

## CONTENT

Доступ: public


# ::stappler::data::WrapperTemplate<typename>::String

## BRIEF

## CONTENT

Доступ: public


# ::stappler::data::WrapperTemplate<typename>::Bytes

## BRIEF

## CONTENT

Доступ: public


# ::stappler::data::WrapperTemplate<typename>::Type

## BRIEF

## CONTENT

Доступ: public


# ::stappler::data::WrapperTemplate<typename>::Iterator<class>

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class Scheme


# ::stappler::data::WrapperTemplate<typename>::Iterator<class>::value_type

## BRIEF

## CONTENT

Доступ: public


# ::stappler::data::WrapperTemplate<typename>::Iterator<class>::reference

## BRIEF

## CONTENT

Доступ: public


# ::stappler::data::WrapperTemplate<typename>::Iterator<class>::pointer

## BRIEF

## CONTENT

Доступ: public


# ::stappler::data::WrapperTemplate<typename>::Iterator<class>::Iterator()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::data::WrapperTemplate<typename>::Iterator<class>::Iterator(Scheme*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Scheme*


# ::stappler::data::WrapperTemplate<typename>::Iterator<class>::Iterator(Scheme*,typename Dictionary::iterator)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Scheme*
* typename Dictionary::iterator


# ::stappler::data::WrapperTemplate<typename>::Iterator<class>::Iterator(const Iterator<Scheme>&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* const Iterator<Scheme>&


# ::stappler::data::WrapperTemplate<typename>::Iterator<class>::operator=(const Iterator<Scheme>&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* const Iterator<Scheme>&

Возвращает:
* Iterator<Scheme>&

# ::stappler::data::WrapperTemplate<typename>::Iterator<class>::operator*() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* reference

# ::stappler::data::WrapperTemplate<typename>::Iterator<class>::operator->() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* pointer

# ::stappler::data::WrapperTemplate<typename>::Iterator<class>::operator++()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Iterator<Scheme>&

# ::stappler::data::WrapperTemplate<typename>::Iterator<class>::operator++(int)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* int

Возвращает:
* Iterator<Scheme>

# ::stappler::data::WrapperTemplate<typename>::Iterator<class>::operator==(const Iterator<Scheme>&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* const Iterator<Scheme>&

Возвращает:
* bool

# ::stappler::data::WrapperTemplate<typename>::Iterator<class>::operator!=(const Iterator<Scheme>&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* const Iterator<Scheme>&

Возвращает:
* bool

# ::stappler::data::WrapperTemplate<typename>::Iterator<class>::increment()

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::data::WrapperTemplate<typename>::Iterator<class>::skipProtected()

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::data::WrapperTemplate<typename>::Iterator<class>::scheme

## BRIEF

## CONTENT

Доступ: protected

Тип: Scheme*


# ::stappler::data::WrapperTemplate<typename>::Iterator<class>::iter

## BRIEF

## CONTENT

Доступ: protected

Тип: typename Dictionary::iterator


# ::stappler::data::WrapperTemplate<typename>::ConstIterator<class>

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class Scheme


# ::stappler::data::WrapperTemplate<typename>::ConstIterator<class>::value_type

## BRIEF

## CONTENT

Доступ: public


# ::stappler::data::WrapperTemplate<typename>::ConstIterator<class>::reference

## BRIEF

## CONTENT

Доступ: public


# ::stappler::data::WrapperTemplate<typename>::ConstIterator<class>::pointer

## BRIEF

## CONTENT

Доступ: public


# ::stappler::data::WrapperTemplate<typename>::ConstIterator<class>::ConstIterator()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::data::WrapperTemplate<typename>::ConstIterator<class>::ConstIterator(Scheme const*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Scheme const*


# ::stappler::data::WrapperTemplate<typename>::ConstIterator<class>::ConstIterator(Scheme const*,typename Dictionary::const_iterator)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Scheme const*
* typename Dictionary::const_iterator


# ::stappler::data::WrapperTemplate<typename>::ConstIterator<class>::ConstIterator(const ConstIterator<Scheme>&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* const ConstIterator<Scheme>&


# ::stappler::data::WrapperTemplate<typename>::ConstIterator<class>::operator=(const ConstIterator<Scheme>&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* const ConstIterator<Scheme>&

Возвращает:
* ConstIterator<Scheme>&

# ::stappler::data::WrapperTemplate<typename>::ConstIterator<class>::operator*() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* reference

# ::stappler::data::WrapperTemplate<typename>::ConstIterator<class>::operator->() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* pointer

# ::stappler::data::WrapperTemplate<typename>::ConstIterator<class>::operator++()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* ConstIterator<Scheme>&

# ::stappler::data::WrapperTemplate<typename>::ConstIterator<class>::operator++(int)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* int

Возвращает:
* ConstIterator<Scheme>

# ::stappler::data::WrapperTemplate<typename>::ConstIterator<class>::operator==(const ConstIterator<Scheme>&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* const ConstIterator<Scheme>&

Возвращает:
* bool

# ::stappler::data::WrapperTemplate<typename>::ConstIterator<class>::operator!=(const ConstIterator<Scheme>&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* const ConstIterator<Scheme>&

Возвращает:
* bool

# ::stappler::data::WrapperTemplate<typename>::ConstIterator<class>::increment()

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::data::WrapperTemplate<typename>::ConstIterator<class>::skipProtected()

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::data::WrapperTemplate<typename>::ConstIterator<class>::scheme

## BRIEF

## CONTENT

Доступ: protected

Тип: Scheme const*


# ::stappler::data::WrapperTemplate<typename>::ConstIterator<class>::iter

## BRIEF

## CONTENT

Доступ: protected

Тип: typename Dictionary::const_iterator


# ::stappler::data::WrapperTemplate<typename>::begin<typename>(Scheme*)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename Scheme

Параметры:
* Scheme*

Возвращает:
* auto

# ::stappler::data::WrapperTemplate<typename>::end<typename>(Scheme*)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename Scheme

Параметры:
* Scheme*

Возвращает:
* auto

# ::stappler::data::WrapperTemplate<typename>::begin<typename>(Scheme const*)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename Scheme

Параметры:
* Scheme const*

Возвращает:
* auto

# ::stappler::data::WrapperTemplate<typename>::end<typename>(Scheme const*)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename Scheme

Параметры:
* Scheme const*

Возвращает:
* auto

# ::stappler::data::WrapperTemplate<typename>::WrapperTemplate(stappler::data::WrapperTemplate::Value&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::data::WrapperTemplate::Value&&


# ::stappler::data::WrapperTemplate<typename>::WrapperTemplate()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::data::WrapperTemplate<typename>::getData()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Value&

# ::stappler::data::WrapperTemplate<typename>::getData() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Value&

# ::stappler::data::WrapperTemplate<typename>::isModified() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::data::WrapperTemplate<typename>::setModified(bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* bool


# ::stappler::data::WrapperTemplate<typename>::setProtected(bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* bool


# ::stappler::data::WrapperTemplate<typename>::isProtected() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::data::WrapperTemplate<typename>::emplace<class>(Key&&)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class Key

Параметры:
* Key&&

Возвращает:
* Value&

# ::stappler::data::WrapperTemplate<typename>::hasValue<class>(Key&&) const

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class Key

Параметры:
* Key&&

Возвращает:
* bool

# ::stappler::data::WrapperTemplate<typename>::setValue<class,class>(Val&&,Key&&)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class Val
* class Key

Параметры:
* Val&&
* Key&&

Возвращает:
* Value&

# ::stappler::data::WrapperTemplate<typename>::getValue<class>(Key&&) const

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class Key

Параметры:
* Key&&

Возвращает:
* Value&

# ::stappler::data::WrapperTemplate<typename>::setNull<class>(Key&&)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class Key

Параметры:
* Key&&


# ::stappler::data::WrapperTemplate<typename>::setBool<class>(bool,Key&&)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class Key

Параметры:
* bool
* Key&&


# ::stappler::data::WrapperTemplate<typename>::setInteger<class>(int64_t,Key&&)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class Key

Параметры:
* int64_t
* Key&&


# ::stappler::data::WrapperTemplate<typename>::setDouble<class>(double,Key&&)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class Key

Параметры:
* double
* Key&&


# ::stappler::data::WrapperTemplate<typename>::setString<class>(stappler::data::WrapperTemplate::String const&,Key&&)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class Key

Параметры:
* stappler::data::WrapperTemplate::String const&
* Key&&


# ::stappler::data::WrapperTemplate<typename>::setString<class>(stappler::data::WrapperTemplate::String&&,Key&&)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class Key

Параметры:
* stappler::data::WrapperTemplate::String&&
* Key&&


# ::stappler::data::WrapperTemplate<typename>::setString<class>(stappler::StringView,Key&&)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class Key

Параметры:
* stappler::StringView
* Key&&


# ::stappler::data::WrapperTemplate<typename>::setBytes<class>(stappler::data::WrapperTemplate::Bytes const&,Key&&)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class Key

Параметры:
* stappler::data::WrapperTemplate::Bytes const&
* Key&&


# ::stappler::data::WrapperTemplate<typename>::setBytes<class>(stappler::data::WrapperTemplate::Bytes&&,Key&&)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class Key

Параметры:
* stappler::data::WrapperTemplate::Bytes&&
* Key&&


# ::stappler::data::WrapperTemplate<typename>::setBytes<class>(stappler::BytesView,Key&&)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class Key

Параметры:
* stappler::BytesView
* Key&&


# ::stappler::data::WrapperTemplate<typename>::setArray<class>(stappler::data::WrapperTemplate::Array const&,Key&&)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class Key

Параметры:
* stappler::data::WrapperTemplate::Array const&
* Key&&


# ::stappler::data::WrapperTemplate<typename>::setArray<class>(stappler::data::WrapperTemplate::Array&&,Key&&)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class Key

Параметры:
* stappler::data::WrapperTemplate::Array&&
* Key&&


# ::stappler::data::WrapperTemplate<typename>::setDict<class>(stappler::data::WrapperTemplate::Dictionary const&,Key&&)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class Key

Параметры:
* stappler::data::WrapperTemplate::Dictionary const&
* Key&&


# ::stappler::data::WrapperTemplate<typename>::setDict<class>(stappler::data::WrapperTemplate::Dictionary&&,Key&&)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class Key

Параметры:
* stappler::data::WrapperTemplate::Dictionary&&
* Key&&


# ::stappler::data::WrapperTemplate<typename>::getBool<class>(Key&&) const

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class Key

Параметры:
* Key&&

Возвращает:
* bool

# ::stappler::data::WrapperTemplate<typename>::getInteger<class>(Key&&,int64_t) const

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class Key

Параметры:
* Key&&
* int64_t

Возвращает:
* int64_t

# ::stappler::data::WrapperTemplate<typename>::getDouble<class>(Key&&,double) const

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class Key

Параметры:
* Key&&
* double

Возвращает:
* double

# ::stappler::data::WrapperTemplate<typename>::getString<class>(Key&&) const

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class Key

Параметры:
* Key&&

Возвращает:
* String&

# ::stappler::data::WrapperTemplate<typename>::getBytes<class>(Key&&) const

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class Key

Параметры:
* Key&&

Возвращает:
* Bytes&

# ::stappler::data::WrapperTemplate<typename>::getArray<class>(Key&&) const

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class Key

Параметры:
* Key&&

Возвращает:
* Array&

# ::stappler::data::WrapperTemplate<typename>::getDict<class>(Key&&) const

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class Key

Параметры:
* Key&&

Возвращает:
* Dictionary&

# ::stappler::data::WrapperTemplate<typename>::erase<class>(Key&&)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class Key

Параметры:
* Key&&

Возвращает:
* bool

# ::stappler::data::WrapperTemplate<typename>::newDict<class>(Key&&)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class Key

Параметры:
* Key&&

Возвращает:
* Value&

# ::stappler::data::WrapperTemplate<typename>::newArray<class>(Key&&)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class Key

Параметры:
* Key&&

Возвращает:
* Value&

# ::stappler::data::WrapperTemplate<typename>::isNull<class>(Key&&) const

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class Key

Параметры:
* Key&&

Возвращает:
* bool

# ::stappler::data::WrapperTemplate<typename>::isBasicType<class>(Key&&) const

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class Key

Параметры:
* Key&&

Возвращает:
* bool

# ::stappler::data::WrapperTemplate<typename>::isArray<class>(Key&&) const

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class Key

Параметры:
* Key&&

Возвращает:
* bool

# ::stappler::data::WrapperTemplate<typename>::isDictionary<class>(Key&&) const

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class Key

Параметры:
* Key&&

Возвращает:
* bool

# ::stappler::data::WrapperTemplate<typename>::isBool<class>(Key&&) const

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class Key

Параметры:
* Key&&

Возвращает:
* bool

# ::stappler::data::WrapperTemplate<typename>::isInteger<class>(Key&&) const

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class Key

Параметры:
* Key&&

Возвращает:
* bool

# ::stappler::data::WrapperTemplate<typename>::isDouble<class>(Key&&) const

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class Key

Параметры:
* Key&&

Возвращает:
* bool

# ::stappler::data::WrapperTemplate<typename>::isString<class>(Key&&) const

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class Key

Параметры:
* Key&&

Возвращает:
* bool

# ::stappler::data::WrapperTemplate<typename>::isBytes<class>(Key&&) const

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class Key

Параметры:
* Key&&

Возвращает:
* bool

# ::stappler::data::WrapperTemplate<typename>::getType<class>(Key&&) const

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class Key

Параметры:
* Key&&

Возвращает:
* Type

# ::stappler::data::WrapperTemplate<typename>::_data

## BRIEF

## CONTENT

Доступ: protected

Тип: Value


# ::stappler::data::WrapperTemplate<typename>::_protected

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::data::WrapperTemplate<typename>::_modified

## BRIEF

## CONTENT

Доступ: protected

Тип: bool
