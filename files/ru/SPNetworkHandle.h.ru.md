Title: SPNetworkHandle.h


# MODULES_NETWORK_SPNETWORKHANDLE_H_

## BRIEF

## CONTENT


# ::stappler::network::Handle<typename>

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface

Базовые классы:
* HandleData<Interface>


# ::stappler::network::Handle<typename>::DataType

## BRIEF

## CONTENT

Доступ: public


# ::stappler::network::Handle<typename>::String

## BRIEF

## CONTENT

Доступ: public


# ::stappler::network::Handle<typename>::StringStream

## BRIEF

## CONTENT

Доступ: public


# ::stappler::network::Handle<typename>::Bytes

## BRIEF

## CONTENT

Доступ: public


# ::stappler::network::Handle<typename>::Value

## BRIEF

## CONTENT

Доступ: public


# ::stappler::network::Handle<typename>::ProgressCallback

## BRIEF

## CONTENT

Доступ: public


# ::stappler::network::Handle<typename>::IOCallback

## BRIEF

## CONTENT

Доступ: public


# ::stappler::network::Handle<typename>::Handle()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::network::Handle<typename>::Handle(Handle<Interface>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Handle<Interface>&&


# ::stappler::network::Handle<typename>::operator=(Handle<Interface>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Handle<Interface>&&

Возвращает:
* Handle<Interface>&

# ::stappler::network::Handle<typename>::init(stappler::network::Method,stappler::StringView)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::network::Method
* stappler::StringView

Возвращает:
* bool

# ::stappler::network::Handle<typename>::perform()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::network::Handle<typename>::getData()

## BRIEF

## CONTENT

Доступ: protected

Возвращает:
* HandleData<Interface>*

# ::stappler::network::MultiHandle<typename>

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface

Базовые классы:
* Interface::AllocBaseType


# ::stappler::network::MultiHandle<typename>::addHandle(Handle<Interface>*,void*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Handle<Interface>*
* void*


# ::stappler::network::MultiHandle<typename>::perform(Callback<bool (Handle<Interface> *, void *)> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Callback<bool (Handle<Interface> *, void *)> const&

Возвращает:
* bool

# ::stappler::network::MultiHandle<typename>::pending

## BRIEF

## CONTENT

Доступ: protected

Тип: typename Interface::template VectorType<Pair<Handle<Interface> *, void *>>


# ::stappler::mem_std::NetworkHandle

## BRIEF

## CONTENT


# ::stappler::mem_pool::NetworkHandle

## BRIEF

## CONTENT
