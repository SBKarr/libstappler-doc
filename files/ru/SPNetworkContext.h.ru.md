Title: SPNetworkContext.h


# MODULES_NETWORK_SPNETWORKCONTEXT_H_

## BRIEF

## CONTENT


# ::stappler::network::Context<typename>

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface


# ::stappler::network::Context<typename>::userdata

## BRIEF

## CONTENT

Тип: void*


# ::stappler::network::Context<typename>::curl

## BRIEF

## CONTENT

Тип: CURL*


# ::stappler::network::Context<typename>::share

## BRIEF

## CONTENT

Тип: CURLSH*


# ::stappler::network::Context<typename>::origHandle

## BRIEF

## CONTENT

Тип: Handle<Interface>*


# ::stappler::network::Context<typename>::handle

## BRIEF

## CONTENT

Тип: HandleData<Interface>*


# ::stappler::network::Context<typename>::headersData

## BRIEF

## CONTENT

Тип: typename HandleData<Interface>::template Vector<typename HandleData<Interface>::String>


# ::stappler::network::Context<typename>::headers

## BRIEF

## CONTENT

Тип: curl_slist*


# ::stappler::network::Context<typename>::mailTo

## BRIEF

## CONTENT

Тип: curl_slist*


# ::stappler::network::Context<typename>::inputFile

## BRIEF

## CONTENT

Тип: FILE*


# ::stappler::network::Context<typename>::outputFile

## BRIEF

## CONTENT

Тип: FILE*


# ::stappler::network::Context<typename>::inputPos

## BRIEF

## CONTENT

Тип: uint64_t


# ::stappler::network::Context<typename>::code

## BRIEF

## CONTENT

Тип: int


# ::stappler::network::Context<typename>::success

## BRIEF

## CONTENT

Тип: bool


# ::stappler::network::Context<typename>::error

## BRIEF

## CONTENT

Тип: std::array<char, 256>


# ::stappler::network::prepare<typename>(HandleData<Interface>&,Context<Interface>*,Callback<bool (CURL *)> const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface

Параметры:
* HandleData<Interface>&
* Context<Interface>*
* Callback<bool (CURL *)> const&

Возвращает:
* bool

# ::stappler::network::finalize<typename>(HandleData<Interface>&,Context<Interface>*,Callback<bool (CURL *)> const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface

Параметры:
* HandleData<Interface>&
* Context<Interface>*
* Callback<bool (CURL *)> const&

Возвращает:
* bool

# ::stappler::network::perform<typename>(HandleData<Interface>&,Callback<bool (CURL *)> const&,Callback<bool (CURL *)> const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface

Параметры:
* HandleData<Interface>&
* Callback<bool (CURL *)> const&
* Callback<bool (CURL *)> const&

Возвращает:
* bool