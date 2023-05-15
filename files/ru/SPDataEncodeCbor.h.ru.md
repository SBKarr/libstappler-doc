Title: SPDataEncodeCbor.h


# MODULES_DATA_SPDATAENCODECBOR_H_

## BRIEF

## CONTENT


# ::stappler::data::cbor::Encoder<typename>

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface

Базовые классы:
* Interface::AllocBaseType


# ::stappler::data::cbor::Encoder<typename>::InterfaceType

## BRIEF

## CONTENT


# ::stappler::data::cbor::Encoder<typename>::ValueType

## BRIEF

## CONTENT


# ::stappler::data::cbor::Encoder<typename>::Type

## BRIEF

## CONTENT

Значения:
* None
* File
* Buffered
* Vector
* Stream


# ::stappler::data::cbor::Encoder<typename>::encode(const typename ValueType::ArrayType&)

## BRIEF

## CONTENT

Параметры:
* const typename ValueType::ArrayType&

Возвращает:
* typename Interface::BytesType

# ::stappler::data::cbor::Encoder<typename>::encode(const typename ValueType::DictionaryType&)

## BRIEF

## CONTENT

Параметры:
* const typename ValueType::DictionaryType&

Возвращает:
* typename Interface::BytesType

# ::stappler::data::cbor::Encoder<typename>::Encoder(stappler::StringView)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView


# ::stappler::data::cbor::Encoder<typename>::Encoder(std::ostream*)

## BRIEF

## CONTENT

Параметры:
* std::ostream*


# ::stappler::data::cbor::Encoder<typename>::Encoder(bool)

## BRIEF

## CONTENT

Параметры:
* bool


# ::stappler::data::cbor::Encoder<typename>::~Encoder()

## BRIEF

## CONTENT


# ::stappler::data::cbor::Encoder<typename>::emplace(uint8_t)

## BRIEF

## CONTENT

Параметры:
* uint8_t


# ::stappler::data::cbor::Encoder<typename>::emplace(uint8_t const*,size_t)

## BRIEF

## CONTENT

Параметры:
* uint8_t const*
* size_t


# ::stappler::data::cbor::Encoder<typename>::switchBuffer(size_t)

## BRIEF

## CONTENT

Параметры:
* size_t


# ::stappler::data::cbor::Encoder<typename>::isOpen() const

## BRIEF

## CONTENT

Возвращает:
* bool

# ::stappler::data::cbor::Encoder<typename>::data()

## BRIEF

## CONTENT

Возвращает:
* typename ValueType::BytesType

# ::stappler::data::cbor::Encoder<typename>::write(stappler::nullptr_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::nullptr_t


# ::stappler::data::cbor::Encoder<typename>::write(bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* bool


# ::stappler::data::cbor::Encoder<typename>::write(int64_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* int64_t


# ::stappler::data::cbor::Encoder<typename>::write(double)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* double


# ::stappler::data::cbor::Encoder<typename>::write(const typename ValueType::StringType&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* const typename ValueType::StringType&


# ::stappler::data::cbor::Encoder<typename>::write(const typename ValueType::BytesType&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* const typename ValueType::BytesType&


# ::stappler::data::cbor::Encoder<typename>::onBeginArray(const typename ValueType::ArrayType&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* const typename ValueType::ArrayType&


# ::stappler::data::cbor::Encoder<typename>::onBeginDict(const typename ValueType::DictionaryType&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* const typename ValueType::DictionaryType&


# ::stappler::data::cbor::Encoder<typename>::

## BRIEF

## CONTENT

Доступ: private


# ::stappler::data::cbor::Encoder<typename>::buffer

## BRIEF

## CONTENT

Тип: typename ValueType::BytesType*


# ::stappler::data::cbor::Encoder<typename>::file

## BRIEF

## CONTENT

Тип: std::ofstream*


# ::stappler::data::cbor::Encoder<typename>::stream

## BRIEF

## CONTENT

Тип: std::ostream*


# ::stappler::data::cbor::Encoder<typename>::type

## BRIEF

## CONTENT

Доступ: private

Тип: stappler::data::cbor::Encoder::Type


# ::stappler::data::cbor::writeArray<typename>(const typename ValueTemplate<Interface>::ArrayType&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface

Параметры:
* const typename ValueTemplate<Interface>::ArrayType&

Возвращает:
* typename Interface::BytesType

# ::stappler::data::cbor::writeObject<typename>(const typename ValueTemplate<Interface>::DictionaryType&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface

Параметры:
* const typename ValueTemplate<Interface>::DictionaryType&

Возвращает:
* typename Interface::BytesType

# ::stappler::data::cbor::write<typename>(ValueTemplate<Interface> const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface

Параметры:
* ValueTemplate<Interface> const&

Возвращает:
* typename Interface::BytesType

# ::stappler::data::cbor::write<typename>(std::ostream&,ValueTemplate<Interface> const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface

Параметры:
* std::ostream&
* ValueTemplate<Interface> const&

Возвращает:
* bool

# ::stappler::data::cbor::save<typename>(ValueTemplate<Interface> const&,stappler::StringView)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface

Параметры:
* ValueTemplate<Interface> const&
* stappler::StringView

Возвращает:
* bool