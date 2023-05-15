Title: SPMemInterface.h


# LIBSTAPPLER_COMMON_MEMORY_SPMEMINTERFACE_H_

## BRIEF

## CONTENT


# ::stappler::memory::PoolInterface

## BRIEF

## CONTENT

Базовые классы:
* memory::AllocPool


# ::stappler::memory::PoolInterface::AllocBaseType

## BRIEF

## CONTENT


# ::stappler::memory::PoolInterface::StringType

## BRIEF

## CONTENT


# ::stappler::memory::PoolInterface::WideStringType

## BRIEF

## CONTENT


# ::stappler::memory::PoolInterface::BytesType

## BRIEF

## CONTENT


# ::stappler::memory::PoolInterface::BasicStringType<typename>

## BRIEF

## CONTENT

Параметры шаблона:
* typename Value


# ::stappler::memory::PoolInterface::ArrayType<typename>

## BRIEF

## CONTENT

Параметры шаблона:
* typename Value


# ::stappler::memory::PoolInterface::DictionaryType<typename>

## BRIEF

## CONTENT

Параметры шаблона:
* typename Value


# ::stappler::memory::PoolInterface::VectorType<typename>

## BRIEF

## CONTENT

Параметры шаблона:
* typename Value


# ::stappler::memory::PoolInterface::MapType<typename,typename,typename>

## BRIEF

## CONTENT

Параметры шаблона:
* typename K
* typename V
* typename Compare


# ::stappler::memory::PoolInterface::SetType<typename,typename>

## BRIEF

## CONTENT

Параметры шаблона:
* typename T
* typename Compare


# ::stappler::memory::PoolInterface::FunctionType<typename>

## BRIEF

## CONTENT

Параметры шаблона:
* typename T


# ::stappler::memory::PoolInterface::StringStreamType

## BRIEF

## CONTENT


# ::stappler::memory::PoolInterface::usesMemoryPool()

## BRIEF

## CONTENT

Возвращает:
* bool

# ::stappler::memory::StandartInterface

## BRIEF

## CONTENT

Базовые классы:
* memory::AllocBase


# ::stappler::memory::StandartInterface::AllocBaseType

## BRIEF

## CONTENT


# ::stappler::memory::StandartInterface::StringType

## BRIEF

## CONTENT


# ::stappler::memory::StandartInterface::WideStringType

## BRIEF

## CONTENT


# ::stappler::memory::StandartInterface::BytesType

## BRIEF

## CONTENT


# ::stappler::memory::StandartInterface::BasicStringType<typename>

## BRIEF

## CONTENT

Параметры шаблона:
* typename Value


# ::stappler::memory::StandartInterface::ArrayType<typename>

## BRIEF

## CONTENT

Параметры шаблона:
* typename Value


# ::stappler::memory::StandartInterface::DictionaryType<typename>

## BRIEF

## CONTENT

Параметры шаблона:
* typename Value


# ::stappler::memory::StandartInterface::VectorType<typename>

## BRIEF

## CONTENT

Параметры шаблона:
* typename Value


# ::stappler::memory::StandartInterface::MapType<typename,typename,typename>

## BRIEF

## CONTENT

Параметры шаблона:
* typename K
* typename V
* typename Compare


# ::stappler::memory::StandartInterface::SetType<typename,typename>

## BRIEF

## CONTENT

Параметры шаблона:
* typename T
* typename Compare


# ::stappler::memory::StandartInterface::FunctionType<typename>

## BRIEF

## CONTENT

Параметры шаблона:
* typename T


# ::stappler::memory::StandartInterface::StringStreamType

## BRIEF

## CONTENT


# ::stappler::memory::StandartInterface::usesMemoryPool()

## BRIEF

## CONTENT

Возвращает:
* bool

# ::stappler::traits::SelectStringStream<std::string>::SelectStringStream<std::string>

## BRIEF

## CONTENT


# ::stappler::traits::SelectStringStream<std::string>::Type

## BRIEF

## CONTENT


# ::stappler::traits::SelectStringStream<std::u16string>::SelectStringStream<std::u16string>

## BRIEF

## CONTENT


# ::stappler::traits::SelectStringStream<std::u16string>::Type

## BRIEF

## CONTENT


# ::stappler::traits::SelectStringStream<memory::string>::SelectStringStream<memory::string>

## BRIEF

## CONTENT


# ::stappler::traits::SelectStringStream<memory::string>::Type

## BRIEF

## CONTENT


# ::stappler::traits::SelectStringStream<memory::basic_string<char16_t>>::SelectStringStream<memory::basic_string<char16_t>>

## BRIEF

## CONTENT


# ::stappler::traits::SelectStringStream<memory::basic_string<char16_t>>::Type

## BRIEF

## CONTENT


# ::stappler::Callback<typename>

## BRIEF

## CONTENT

Параметры шаблона:
* typename T


# ::stappler::StringToNumber<typename>(memory::StandartInterface::StringType const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename T

Параметры:
* memory::StandartInterface::StringType const&

Возвращает:
* T

# ::stappler::StringToNumber<typename>(memory::PoolInterface::StringType const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename T

Параметры:
* memory::PoolInterface::StringType const&

Возвращает:
* T

# ::stappler::StringToNumber<typename>(char const*)

## BRIEF

## CONTENT

Параметры шаблона:
* typename T

Параметры:
* char const*

Возвращает:
* T