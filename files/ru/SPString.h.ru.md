Title: SPString.h


# LIBSTAPPLER_COMMON_STRING_SPSTRING_H_

## BRIEF

## CONTENT


# ::stappler::string::getUtf16Length(char32_t)

## BRIEF

## CONTENT

Параметры:
* char32_t

Возвращает:
* size_t

# ::stappler::string::getUtf16Length(stappler::StringView const&)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView const&

Возвращает:
* size_t

# ::stappler::string::getUtf16HtmlLength(stappler::StringView const&)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView const&

Возвращает:
* size_t

# ::stappler::string::getUtf8Length(stappler::WideStringView const&)

## BRIEF

## CONTENT

Параметры:
* stappler::WideStringView const&

Возвращает:
* size_t

# ::stappler::string::read(char const*)

## BRIEF

## CONTENT

Параметры:
* char const*

Возвращает:
* Pair<char16_t, uint8_t>

# ::stappler::string::charToKoi8r(char16_t)

## BRIEF

## CONTENT

Параметры:
* char16_t

Возвращает:
* char

# ::stappler::string::InterfaceForString<typenamememory::StandartInterface::StringType>::InterfaceForString<typenamememory::StandartInterface::StringType>

## BRIEF

## CONTENT


# ::stappler::string::InterfaceForString<typenamememory::StandartInterface::StringType>::Type

## BRIEF

## CONTENT


# ::stappler::string::InterfaceForString<typenamememory::StandartInterface::WideStringType>::InterfaceForString<typenamememory::StandartInterface::WideStringType>

## BRIEF

## CONTENT


# ::stappler::string::InterfaceForString<typenamememory::StandartInterface::WideStringType>::Type

## BRIEF

## CONTENT


# ::stappler::string::InterfaceForString<typenamememory::PoolInterface::StringType>::InterfaceForString<typenamememory::PoolInterface::StringType>

## BRIEF

## CONTENT


# ::stappler::string::InterfaceForString<typenamememory::PoolInterface::StringType>::Type

## BRIEF

## CONTENT


# ::stappler::string::InterfaceForString<typenamememory::PoolInterface::WideStringType>::InterfaceForString<typenamememory::PoolInterface::WideStringType>

## BRIEF

## CONTENT


# ::stappler::string::InterfaceForString<typenamememory::PoolInterface::WideStringType>::Type

## BRIEF

## CONTENT


# ::stappler::string::InterfaceForString<consttypenamememory::StandartInterface::StringType>::InterfaceForString<consttypenamememory::StandartInterface::StringType>

## BRIEF

## CONTENT


# ::stappler::string::InterfaceForString<consttypenamememory::StandartInterface::StringType>::Type

## BRIEF

## CONTENT


# ::stappler::string::InterfaceForString<consttypenamememory::StandartInterface::WideStringType>::InterfaceForString<consttypenamememory::StandartInterface::WideStringType>

## BRIEF

## CONTENT


# ::stappler::string::InterfaceForString<consttypenamememory::StandartInterface::WideStringType>::Type

## BRIEF

## CONTENT


# ::stappler::string::InterfaceForString<consttypenamememory::PoolInterface::StringType>::InterfaceForString<consttypenamememory::PoolInterface::StringType>

## BRIEF

## CONTENT


# ::stappler::string::InterfaceForString<consttypenamememory::PoolInterface::StringType>::Type

## BRIEF

## CONTENT


# ::stappler::string::InterfaceForString<consttypenamememory::PoolInterface::WideStringType>::InterfaceForString<consttypenamememory::PoolInterface::WideStringType>

## BRIEF

## CONTENT


# ::stappler::string::InterfaceForString<consttypenamememory::PoolInterface::WideStringType>::Type

## BRIEF

## CONTENT


# ::stappler::string::utf8Decode(stappler::string::char_const_ptr_ref_t)

## BRIEF

## CONTENT

Параметры:
* stappler::string::char_const_ptr_ref_t

Возвращает:
* char16_t

# ::stappler::string::utf8HtmlDecode(stappler::string::char_const_ptr_ref_t)

## BRIEF

## CONTENT

Параметры:
* stappler::string::char_const_ptr_ref_t

Возвращает:
* char16_t

# ::stappler::string::isValidUtf8(stappler::StringView)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView

Возвращает:
* bool

# ::stappler::string::utf8Encode<typename>(StringType&,char16_t)

## BRIEF

## CONTENT

Параметры шаблона:
* typename StringType

Параметры:
* StringType&
* char16_t

Возвращает:
* uint8_t

# ::stappler::string::utf8Encode<typename>(StringType&,char32_t)

## BRIEF

## CONTENT

Параметры шаблона:
* typename StringType

Параметры:
* StringType&
* char32_t

Возвращает:
* uint8_t

# ::stappler::string::utf8Encode(std::ostream&,char16_t)

## BRIEF

## CONTENT

Параметры:
* std::ostream&
* char16_t

Возвращает:
* uint8_t

# ::stappler::string::utf8Encode(std::ostream&,char32_t)

## BRIEF

## CONTENT

Параметры:
* std::ostream&
* char32_t

Возвращает:
* uint8_t

# ::stappler::string::utf16Encode<typename>(StringType&,char32_t)

## BRIEF

## CONTENT

Параметры шаблона:
* typename StringType

Параметры:
* StringType&
* char32_t

Возвращает:
* uint8_t

# ::stappler::string::utf16Encode(std::basic_ostream<char16_t>&,char32_t)

## BRIEF

## CONTENT

Параметры:
* std::basic_ostream<char16_t>&
* char32_t

Возвращает:
* uint8_t

# ::stappler::string::trim<typename,typename>(StringType&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename StringType
* typename Interface

Параметры:
* StringType&

Возвращает:
* StringType&

# ::stappler::string::tolower<typename,typename>(StringType&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename StringType
* typename Interface

Параметры:
* StringType&

Возвращает:
* StringType&

# ::stappler::string::toupper<typename,typename>(StringType&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename StringType
* typename Interface

Параметры:
* StringType&

Возвращает:
* StringType&

# ::stappler::string::toupper<typename>(stappler::StringView const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface

Параметры:
* stappler::StringView const&

Возвращает:
* typename Interface::StringType

# ::stappler::string::toupper<typename>(stappler::WideStringView const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface

Параметры:
* stappler::WideStringView const&

Возвращает:
* typename Interface::WideStringType

# ::stappler::string::tolower<typename>(stappler::StringView const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface

Параметры:
* stappler::StringView const&

Возвращает:
* typename Interface::StringType

# ::stappler::string::tolower<typename>(stappler::WideStringView const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface

Параметры:
* stappler::WideStringView const&

Возвращает:
* typename Interface::WideStringType

# ::stappler::string::urlencode<typename>(stappler::StringView const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface

Параметры:
* stappler::StringView const&

Возвращает:
* typename Interface::StringType

# ::stappler::string::urldecode<typename>(Storage&,stappler::StringView const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Storage

Параметры:
* Storage&
* stappler::StringView const&


# ::stappler::string::urldecode<typename>(stappler::StringView const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface

Параметры:
* stappler::StringView const&

Возвращает:
* typename Interface::StringType

# ::stappler::string::toUtf16<typename>(stappler::StringView const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface

Параметры:
* stappler::StringView const&

Возвращает:
* typename Interface::WideStringType

# ::stappler::string::toUtf16<typename>(char32_t)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface

Параметры:
* char32_t

Возвращает:
* typename Interface::WideStringType

# ::stappler::string::toUtf16Html<typename>(stappler::StringView const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface

Параметры:
* stappler::StringView const&

Возвращает:
* typename Interface::WideStringType

# ::stappler::string::toUtf8<typename>(stappler::WideStringView const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface

Параметры:
* stappler::WideStringView const&

Возвращает:
* typename Interface::StringType

# ::stappler::string::toUtf8<typename>(char16_t)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface

Параметры:
* char16_t

Возвращает:
* typename Interface::StringType

# ::stappler::string::toKoi8r<typename>(stappler::WideStringView const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface

Параметры:
* stappler::WideStringView const&

Возвращает:
* typename Interface::StringType

# ::stappler::string::split<typename>(stappler::StringView const&,stappler::StringView const&,T&&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename T

Параметры:
* stappler::StringView const&
* stappler::StringView const&
* T&&


# ::stappler::string::footprint_3(char16_t)

## BRIEF

## CONTENT

Параметры:
* char16_t

Возвращает:
* uint8_t

# ::stappler::string::footprint_4(char16_t)

## BRIEF

## CONTENT

Параметры:
* char16_t

Возвращает:
* uint8_t

# ::stappler::string::footprint<typename>(stappler::StringView const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface

Параметры:
* stappler::StringView const&

Возвращает:
* typename Interface::BytesType

# ::stappler::string::footprint<typename>(stappler::WideStringView const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface

Параметры:
* stappler::WideStringView const&

Возвращает:
* typename Interface::BytesType

# ::stappler::string::StringTraits<typename>

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface

Базовые классы:
* Interface


# ::stappler::string::StringTraits<typename>::String

## BRIEF

## CONTENT


# ::stappler::string::StringTraits<typename>::WideString

## BRIEF

## CONTENT


# ::stappler::string::StringTraits<typename>::StringStream

## BRIEF

## CONTENT


# ::stappler::string::StringTraits<typename>::Vector<typename>

## BRIEF

## CONTENT

Параметры шаблона:
* typename Value


# ::stappler::string::StringTraits<typename>::Set<typename>

## BRIEF

## CONTENT

Параметры шаблона:
* typename Value


# ::stappler::string::StringTraits<typename>::split<typename>(stappler::string::StringTraits::String const&,stappler::string::StringTraits::String const&,T&&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename T

Параметры:
* stappler::string::StringTraits::String const&
* stappler::string::StringTraits::String const&
* T&&


# ::stappler::string::StringTraits<typename>::trim(stappler::string::StringTraits::WideString&)

## BRIEF

## CONTENT

Параметры:
* stappler::string::StringTraits::WideString&

Возвращает:
* WideString&

# ::stappler::string::StringTraits<typename>::trim(stappler::string::StringTraits::String&)

## BRIEF

## CONTENT

Параметры:
* stappler::string::StringTraits::String&

Возвращает:
* String&

# ::stappler::string::StringTraits<typename>::urlencode(stappler::StringView const&)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView const&

Возвращает:
* String

# ::stappler::string::StringTraits<typename>::urldecode(stappler::StringView const&)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView const&

Возвращает:
* String

# ::stappler::string::StringTraits<typename>::toUtf16(char32_t)

## BRIEF

## CONTENT

Параметры:
* char32_t

Возвращает:
* WideString

# ::stappler::string::StringTraits<typename>::toUtf16(stappler::StringView const&)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView const&

Возвращает:
* WideString

# ::stappler::string::StringTraits<typename>::toUtf16Html(stappler::StringView const&)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView const&

Возвращает:
* WideString

# ::stappler::string::StringTraits<typename>::toUtf8(stappler::WideStringView const&)

## BRIEF

## CONTENT

Параметры:
* stappler::WideStringView const&

Возвращает:
* String

# ::stappler::string::StringTraits<typename>::toUtf8(char16_t)

## BRIEF

## CONTENT

Параметры:
* char16_t

Возвращает:
* String

# ::stappler::string::StringTraits<typename>::toKoi8r(stappler::WideStringView const&)

## BRIEF

## CONTENT

Параметры:
* stappler::WideStringView const&

Возвращает:
* String

# ::stappler::string::StringTraits<typename>::tolower(stappler::string::StringTraits::WideString&)

## BRIEF

## CONTENT

Параметры:
* stappler::string::StringTraits::WideString&

Возвращает:
* WideString&

# ::stappler::string::StringTraits<typename>::toupper(stappler::string::StringTraits::WideString&)

## BRIEF

## CONTENT

Параметры:
* stappler::string::StringTraits::WideString&

Возвращает:
* WideString&

# ::stappler::string::StringTraits<typename>::tolower(stappler::string::StringTraits::String&)

## BRIEF

## CONTENT

Параметры:
* stappler::string::StringTraits::String&

Возвращает:
* String&

# ::stappler::string::StringTraits<typename>::toupper(stappler::string::StringTraits::String&)

## BRIEF

## CONTENT

Параметры:
* stappler::string::StringTraits::String&

Возвращает:
* String&

# ::stappler::string::StringTraits<typename>::tolower(stappler::WideStringView const&)

## BRIEF

## CONTENT

Параметры:
* stappler::WideStringView const&

Возвращает:
* WideString

# ::stappler::string::StringTraits<typename>::toupper(stappler::WideStringView const&)

## BRIEF

## CONTENT

Параметры:
* stappler::WideStringView const&

Возвращает:
* WideString

# ::stappler::string::StringTraits<typename>::tolower(stappler::StringView const&)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView const&

Возвращает:
* String

# ::stappler::string::StringTraits<typename>::toupper(stappler::StringView const&)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView const&

Возвращает:
* String

# ::stappler::string::StringTraits<typename>::isUrlencodeChar(char)

## BRIEF

## CONTENT

Параметры:
* char

Возвращает:
* bool

# ::stappler::string::ToStringTraits<memory::StandartInterface>::ToStringTraits<memory::StandartInterface>

## BRIEF

## CONTENT


# ::stappler::string::ToStringTraits<memory::StandartInterface>::String

## BRIEF

## CONTENT


# ::stappler::string::ToStringTraits<memory::StandartInterface>::WideString

## BRIEF

## CONTENT


# ::stappler::string::ToStringTraits<memory::StandartInterface>::StringStream

## BRIEF

## CONTENT


# ::stappler::string::ToStringTraits<memory::StandartInterface>::toStringStream<typename>(stappler::string::ToStringTraits<stappler::memory::StandartInterface>::StringStream&,T)

## BRIEF

## CONTENT

Параметры шаблона:
* typename T

Параметры:
* stappler::string::ToStringTraits<stappler::memory::StandartInterface>::StringStream&
* T


# ::stappler::string::ToStringTraits<memory::StandartInterface>::toStringStream<typename,typename>(stappler::string::ToStringTraits<stappler::memory::StandartInterface>::StringStream&,T,Args &&...)

## BRIEF

## CONTENT

Параметры шаблона:
* typename T
* typename Args

Параметры:
* stappler::string::ToStringTraits<stappler::memory::StandartInterface>::StringStream&
* T
* Args &&...


# ::stappler::string::ToStringTraits<memory::StandartInterface>::toString<class>(T)

## BRIEF

## CONTENT

Параметры шаблона:
* class T

Параметры:
* T

Возвращает:
* String

# ::stappler::string::ToStringTraits<memory::StandartInterface>::toString(stappler::string::ToStringTraits<stappler::memory::StandartInterface>::String const&)

## BRIEF

## CONTENT

Параметры:
* stappler::string::ToStringTraits<stappler::memory::StandartInterface>::String const&

Возвращает:
* String

# ::stappler::string::ToStringTraits<memory::StandartInterface>::toString(char const*)

## BRIEF

## CONTENT

Параметры:
* char const*

Возвращает:
* String

# ::stappler::string::ToStringTraits<memory::StandartInterface>::toString<typename,typename>(T,Args &&...)

## BRIEF

## CONTENT

Параметры шаблона:
* typename T
* typename Args

Параметры:
* T
* Args &&...

Возвращает:
* String

# ::stappler::string::ToStringTraits<memory::PoolInterface>::ToStringTraits<memory::PoolInterface>

## BRIEF

## CONTENT


# ::stappler::string::ToStringTraits<memory::PoolInterface>::String

## BRIEF

## CONTENT


# ::stappler::string::ToStringTraits<memory::PoolInterface>::WideString

## BRIEF

## CONTENT


# ::stappler::string::ToStringTraits<memory::PoolInterface>::StringStream

## BRIEF

## CONTENT


# ::stappler::string::ToStringTraits<memory::PoolInterface>::toStringStream<typename>(stappler::string::ToStringTraits<stappler::memory::PoolInterface>::StringStream&,T)

## BRIEF

## CONTENT

Параметры шаблона:
* typename T

Параметры:
* stappler::string::ToStringTraits<stappler::memory::PoolInterface>::StringStream&
* T


# ::stappler::string::ToStringTraits<memory::PoolInterface>::toStringStream<typename,typename>(stappler::string::ToStringTraits<stappler::memory::PoolInterface>::StringStream&,T,Args &&...)

## BRIEF

## CONTENT

Параметры шаблона:
* typename T
* typename Args

Параметры:
* stappler::string::ToStringTraits<stappler::memory::PoolInterface>::StringStream&
* T
* Args &&...


# ::stappler::string::ToStringTraits<memory::PoolInterface>::toString<class>(T)

## BRIEF

## CONTENT

Параметры шаблона:
* class T

Параметры:
* T

Возвращает:
* String

# ::stappler::string::ToStringTraits<memory::PoolInterface>::toString(stappler::string::ToStringTraits<stappler::memory::PoolInterface>::String const&)

## BRIEF

## CONTENT

Параметры:
* stappler::string::ToStringTraits<stappler::memory::PoolInterface>::String const&

Возвращает:
* String

# ::stappler::string::ToStringTraits<memory::PoolInterface>::toString(char const*)

## BRIEF

## CONTENT

Параметры:
* char const*

Возвращает:
* String

# ::stappler::string::ToStringTraits<memory::PoolInterface>::toString<typename,typename>(T,Args &&...)

## BRIEF

## CONTENT

Параметры шаблона:
* typename T
* typename Args

Параметры:
* T
* Args &&...

Возвращает:
* String

# ::stappler::string::Sha256

## BRIEF

## CONTENT


# ::stappler::string::Sha512

## BRIEF

## CONTENT


# ::stappler::string::hash32(stappler::StringView const&)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView const&

Возвращает:
* uint32_t

# ::stappler::string::hash64(stappler::StringView const&)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView const&

Возвращает:
* uint64_t

# ::stappler::string::stdlibHashUnsigned<typename>(StringType const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename StringType

Параметры:
* StringType const&

Возвращает:
* uint64_t

# ::stappler::string::stdlibHashSigned<typename>(StringType const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename StringType

Параметры:
* StringType const&

Возвращает:
* int64_t

# ::stappler::base16::charToHex(char const&,bool)

## BRIEF

## CONTENT

Параметры:
* char const&
* bool

Возвращает:
* char const*

# ::stappler::base16::hexToChar(char const&)

## BRIEF

## CONTENT

Параметры:
* char const&

Возвращает:
* uint8_t

# ::stappler::base16::hexToChar(char const&,char const&)

## BRIEF

## CONTENT

Параметры:
* char const&
* char const&

Возвращает:
* uint8_t

# ::stappler::base16::encodeSize(size_t)

## BRIEF

## CONTENT

Параметры:
* size_t

Возвращает:
* size_t

# ::stappler::base16::decodeSize(size_t)

## BRIEF

## CONTENT

Параметры:
* size_t

Возвращает:
* size_t

# ::stappler::base16::encode<typename>(stappler::CoderSource const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface

Параметры:
* stappler::CoderSource const&

Возвращает:
* typename Interface::StringType

# ::stappler::base16::encode(std::basic_ostream<char>&,stappler::CoderSource const&)

## BRIEF

## CONTENT

Параметры:
* std::basic_ostream<char>&
* stappler::CoderSource const&


# ::stappler::base16::encode(char*,size_t,stappler::CoderSource const&)

## BRIEF

## CONTENT

Параметры:
* char*
* size_t
* stappler::CoderSource const&

Возвращает:
* size_t

# ::stappler::base16::decode<typename>(stappler::CoderSource const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface

Параметры:
* stappler::CoderSource const&

Возвращает:
* typename Interface::BytesType

# ::stappler::base16::decode(std::basic_ostream<char>&,stappler::CoderSource const&)

## BRIEF

## CONTENT

Параметры:
* std::basic_ostream<char>&
* stappler::CoderSource const&


# ::stappler::base16::decode(uint8_t*,size_t,stappler::CoderSource const&)

## BRIEF

## CONTENT

Параметры:
* uint8_t*
* size_t
* stappler::CoderSource const&

Возвращает:
* size_t

# ::stappler::base64::encodeSize(size_t)

## BRIEF

## CONTENT

Параметры:
* size_t

Возвращает:
* size_t

# ::stappler::base64::decodeSize(size_t)

## BRIEF

## CONTENT

Параметры:
* size_t

Возвращает:
* size_t

# ::stappler::base64::encode<typename>(stappler::CoderSource const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface

Параметры:
* stappler::CoderSource const&

Возвращает:
* typename Interface::StringType

# ::stappler::base64::encode(std::basic_ostream<char>&,stappler::CoderSource const&)

## BRIEF

## CONTENT

Параметры:
* std::basic_ostream<char>&
* stappler::CoderSource const&


# ::stappler::base64::encode(Callback<void (char)> const&,stappler::CoderSource const&)

## BRIEF

## CONTENT

Параметры:
* Callback<void (char)> const&
* stappler::CoderSource const&


# ::stappler::base64::decode<typename>(stappler::CoderSource const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface

Параметры:
* stappler::CoderSource const&

Возвращает:
* typename Interface::BytesType

# ::stappler::base64::decode(std::basic_ostream<char>&,stappler::CoderSource const&)

## BRIEF

## CONTENT

Параметры:
* std::basic_ostream<char>&
* stappler::CoderSource const&


# ::stappler::base64::decode(Callback<void (uint8_t)> const&,stappler::CoderSource const&)

## BRIEF

## CONTENT

Параметры:
* Callback<void (uint8_t)> const&
* stappler::CoderSource const&


# ::stappler::base64url::encodeSize(size_t)

## BRIEF

## CONTENT

Параметры:
* size_t

Возвращает:
* size_t

# ::stappler::base64url::decodeSize(size_t)

## BRIEF

## CONTENT

Параметры:
* size_t

Возвращает:
* size_t

# ::stappler::base64url::encode<typename>(stappler::CoderSource const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface

Параметры:
* stappler::CoderSource const&

Возвращает:
* typename Interface::StringType

# ::stappler::base64url::encode(std::basic_ostream<char>&,stappler::CoderSource const&)

## BRIEF

## CONTENT

Параметры:
* std::basic_ostream<char>&
* stappler::CoderSource const&


# ::stappler::base64url::encode(Callback<void (char)> const&,stappler::CoderSource const&)

## BRIEF

## CONTENT

Параметры:
* Callback<void (char)> const&
* stappler::CoderSource const&


# ::stappler::base64url::decode<typename>(stappler::CoderSource const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface

Параметры:
* stappler::CoderSource const&

Возвращает:
* typename Interface::BytesType

# ::stappler::base64url::decode(std::basic_ostream<char>&,stappler::CoderSource const&)

## BRIEF

## CONTENT

Параметры:
* std::basic_ostream<char>&
* stappler::CoderSource const&


# ::stappler::base64url::decode(Callback<void (uint8_t)> const&,stappler::CoderSource const&)

## BRIEF

## CONTENT

Параметры:
* Callback<void (uint8_t)> const&
* stappler::CoderSource const&


# ::stappler::toStringStreamConcat<typename,typename>(StreamType&,Container const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Container
* typename StreamType

Параметры:
* StreamType&
* Container const&


# ::stappler::toStringStreamConcat<typename,typename,typename>(StreamType&,Container const&,Sep const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Container
* typename Sep
* typename StreamType

Параметры:
* StreamType&
* Container const&
* Sep const&


# ::stappler::toStringConcat<typename,typename>(Container const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Container
* typename StringType

Параметры:
* Container const&

Возвращает:
* StringType

# ::stappler::toStringConcat<typename,typename,typename>(Container const&,Sep const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Container
* typename Sep
* typename StringType

Параметры:
* Container const&
* Sep const&

Возвращает:
* StringType

# ::stappler::string::trim<typename,typename>(StringType&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename StringType
* typename Interface

Параметры:
* StringType&

Возвращает:
* StringType&

# ::stappler::string::tolower<typename,typename>(StringType&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename StringType
* typename Interface

Параметры:
* StringType&

Возвращает:
* StringType&

# ::stappler::string::toupper<typename,typename>(StringType&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename StringType
* typename Interface

Параметры:
* StringType&

Возвращает:
* StringType&

# ::stappler::string::toupper<typename>(stappler::StringView const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface

Параметры:
* stappler::StringView const&

Возвращает:
* typename Interface::StringType

# ::stappler::string::toupper<typename>(stappler::WideStringView const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface

Параметры:
* stappler::WideStringView const&

Возвращает:
* typename Interface::WideStringType

# ::stappler::string::tolower<typename>(stappler::StringView const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface

Параметры:
* stappler::StringView const&

Возвращает:
* typename Interface::StringType

# ::stappler::string::tolower<typename>(stappler::WideStringView const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface

Параметры:
* stappler::WideStringView const&

Возвращает:
* typename Interface::WideStringType

# ::stappler::string::urlencode<typename>(stappler::StringView const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface

Параметры:
* stappler::StringView const&

Возвращает:
* typename Interface::StringType

# ::stappler::string::urldecode<typename>(stappler::StringView const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface

Параметры:
* stappler::StringView const&

Возвращает:
* typename Interface::StringType

# ::stappler::string::toUtf16<typename>(stappler::StringView const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface

Параметры:
* stappler::StringView const&

Возвращает:
* typename Interface::WideStringType

# ::stappler::string::toUtf16<typename>(char32_t)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface

Параметры:
* char32_t

Возвращает:
* typename Interface::WideStringType

# ::stappler::string::toUtf16Html<typename>(stappler::StringView const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface

Параметры:
* stappler::StringView const&

Возвращает:
* typename Interface::WideStringType

# ::stappler::string::toUtf8<typename>(stappler::WideStringView const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface

Параметры:
* stappler::WideStringView const&

Возвращает:
* typename Interface::StringType

# ::stappler::string::toUtf8<typename>(char16_t)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface

Параметры:
* char16_t

Возвращает:
* typename Interface::StringType

# ::stappler::string::toKoi8r<typename>(stappler::WideStringView const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface

Параметры:
* stappler::WideStringView const&

Возвращает:
* typename Interface::StringType

# ::stappler::string::split<typename>(stappler::StringView const&,stappler::StringView const&,T&&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename T

Параметры:
* stappler::StringView const&
* stappler::StringView const&
* T&&


# ::stappler::string::_footprint_size(stappler::StringView const&)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView const&

Возвращает:
* size_t

# ::stappler::string::_footprint_size(stappler::WideStringView const&)

## BRIEF

## CONTENT

Параметры:
* stappler::WideStringView const&

Возвращает:
* size_t

# ::stappler::string::_make_footprint(stappler::StringView const&,uint8_t*)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView const&
* uint8_t*


# ::stappler::string::_make_footprint(stappler::WideStringView const&,uint8_t*)

## BRIEF

## CONTENT

Параметры:
* stappler::WideStringView const&
* uint8_t*


# ::stappler::string::footprint<typename>(stappler::StringView const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface

Параметры:
* stappler::StringView const&

Возвращает:
* typename Interface::BytesType

# ::stappler::string::footprint<typename>(stappler::WideStringView const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface

Параметры:
* stappler::WideStringView const&

Возвращает:
* typename Interface::BytesType

# ::stappler::string::StringTraits<typename>::split<typename,typename>(stappler::string::StringTraits::String const&,stappler::string::StringTraits::String const&,T&&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename T
* typename Interface

Параметры:
* stappler::string::StringTraits::String const&
* stappler::string::StringTraits::String const&
* T&&


# ::stappler::string::StringTraits<typename>::trim(stappler::string::StringTraits::String&)

## BRIEF

## CONTENT

Параметры:
* stappler::string::StringTraits::String&

Возвращает:
* String&

# ::stappler::string::StringTraits<typename>::trim(stappler::string::StringTraits::WideString&)

## BRIEF

## CONTENT

Параметры:
* stappler::string::StringTraits::WideString&

Возвращает:
* WideString&

# ::stappler::string::StringTraits<typename>::urlencode(stappler::StringView const&)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView const&

Возвращает:
* String

# ::stappler::string::urldecode<typename>(Storage&,stappler::StringView const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Storage

Параметры:
* Storage&
* stappler::StringView const&


# ::stappler::string::StringTraits<typename>::urldecode(stappler::StringView const&)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView const&

Возвращает:
* String

# ::stappler::string::StringTraits<typename>::toUtf16(char32_t)

## BRIEF

## CONTENT

Параметры:
* char32_t

Возвращает:
* WideString

# ::stappler::string::StringTraits<typename>::toUtf16(stappler::StringView const&)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView const&

Возвращает:
* WideString

# ::stappler::string::StringTraits<typename>::toUtf16Html(stappler::StringView const&)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView const&

Возвращает:
* WideString

# ::stappler::string::StringTraits<typename>::toUtf8(stappler::WideStringView const&)

## BRIEF

## CONTENT

Параметры:
* stappler::WideStringView const&

Возвращает:
* String

# ::stappler::string::StringTraits<typename>::toUtf8(char16_t)

## BRIEF

## CONTENT

Параметры:
* char16_t

Возвращает:
* String

# ::stappler::string::StringTraits<typename>::toKoi8r(stappler::WideStringView const&)

## BRIEF

## CONTENT

Параметры:
* stappler::WideStringView const&

Возвращает:
* String

# ::stappler::string::StringTraits<typename>::tolower(stappler::string::StringTraits::WideString&)

## BRIEF

## CONTENT

Параметры:
* stappler::string::StringTraits::WideString&

Возвращает:
* WideString&

# ::stappler::string::StringTraits<typename>::toupper(stappler::string::StringTraits::WideString&)

## BRIEF

## CONTENT

Параметры:
* stappler::string::StringTraits::WideString&

Возвращает:
* WideString&

# ::stappler::string::StringTraits<typename>::tolower(stappler::string::StringTraits::String&)

## BRIEF

## CONTENT

Параметры:
* stappler::string::StringTraits::String&

Возвращает:
* String&

# ::stappler::string::StringTraits<typename>::toupper(stappler::string::StringTraits::String&)

## BRIEF

## CONTENT

Параметры:
* stappler::string::StringTraits::String&

Возвращает:
* String&

# ::stappler::string::StringTraits<typename>::tolower(stappler::WideStringView const&)

## BRIEF

## CONTENT

Параметры:
* stappler::WideStringView const&

Возвращает:
* WideString

# ::stappler::string::StringTraits<typename>::toupper(stappler::WideStringView const&)

## BRIEF

## CONTENT

Параметры:
* stappler::WideStringView const&

Возвращает:
* WideString

# ::stappler::string::StringTraits<typename>::tolower(stappler::StringView const&)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView const&

Возвращает:
* String

# ::stappler::string::StringTraits<typename>::toupper(stappler::StringView const&)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView const&

Возвращает:
* String

# ::stappler::string::StringTraits<typename>::isUrlencodeChar(char)

## BRIEF

## CONTENT

Параметры:
* char

Возвращает:
* bool

# ::stappler::string::utf8Encode<typename>(StringType&,char16_t)

## BRIEF

## CONTENT

Параметры шаблона:
* typename StringType

Параметры:
* StringType&
* char16_t

Возвращает:
* uint8_t

# ::stappler::string::utf8Encode(std::ostream&,char16_t)

## BRIEF

## CONTENT

Параметры:
* std::ostream&
* char16_t

Возвращает:
* uint8_t

# ::stappler::string::utf8Encode<typename>(StringType&,char32_t)

## BRIEF

## CONTENT

Параметры шаблона:
* typename StringType

Параметры:
* StringType&
* char32_t

Возвращает:
* uint8_t

# ::stappler::string::utf8Encode(std::ostream&,char32_t)

## BRIEF

## CONTENT

Параметры:
* std::ostream&
* char32_t

Возвращает:
* uint8_t

# ::stappler::string::utf16Encode<typename>(StringType&,char32_t)

## BRIEF

## CONTENT

Параметры шаблона:
* typename StringType

Параметры:
* StringType&
* char32_t

Возвращает:
* uint8_t

# ::stappler::string::utf16Encode(std::basic_ostream<char16_t>&,char32_t)

## BRIEF

## CONTENT

Параметры:
* std::basic_ostream<char16_t>&
* char32_t

Возвращает:
* uint8_t

# ::stappler::base64::__encode_pool(stappler::CoderSource const&)

## BRIEF

## CONTENT

Параметры:
* stappler::CoderSource const&

Возвращает:
* typename memory::PoolInterface::StringType

# ::stappler::base64::__encode_std(stappler::CoderSource const&)

## BRIEF

## CONTENT

Параметры:
* stappler::CoderSource const&

Возвращает:
* typename memory::StandartInterface::StringType

# ::stappler::base64::__decode_pool(stappler::CoderSource const&)

## BRIEF

## CONTENT

Параметры:
* stappler::CoderSource const&

Возвращает:
* typename memory::PoolInterface::BytesType

# ::stappler::base64::__decode_std(stappler::CoderSource const&)

## BRIEF

## CONTENT

Параметры:
* stappler::CoderSource const&

Возвращает:
* typename memory::StandartInterface::BytesType

# ::stappler::base64::decode(stappler::CoderSource const&)

## BRIEF

## CONTENT

Параметры:
* stappler::CoderSource const&

Возвращает:
* typename memory::PoolInterface::BytesType

# ::stappler::base64::decode(stappler::CoderSource const&)

## BRIEF

## CONTENT

Параметры:
* stappler::CoderSource const&

Возвращает:
* typename memory::StandartInterface::BytesType

# ::stappler::base64url::encodeSize(size_t)

## BRIEF

## CONTENT

Параметры:
* size_t

Возвращает:
* size_t

# ::stappler::base64url::decodeSize(size_t)

## BRIEF

## CONTENT

Параметры:
* size_t

Возвращает:
* size_t

# ::stappler::base64url::__encode_pool(stappler::CoderSource const&)

## BRIEF

## CONTENT

Параметры:
* stappler::CoderSource const&

Возвращает:
* typename memory::PoolInterface::StringType

# ::stappler::base64url::__encode_std(stappler::CoderSource const&)

## BRIEF

## CONTENT

Параметры:
* stappler::CoderSource const&

Возвращает:
* typename memory::StandartInterface::StringType

# ::stappler::base64url::decode<typename>(stappler::CoderSource const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface

Параметры:
* stappler::CoderSource const&

Возвращает:
* typename Interface::BytesType

# ::stappler::base64url::decode(std::basic_ostream<char>&,stappler::CoderSource const&)

## BRIEF

## CONTENT

Параметры:
* std::basic_ostream<char>&
* stappler::CoderSource const&


# ::stappler::base64url::decode(Callback<void (uint8_t)> const&,stappler::CoderSource const&)

## BRIEF

## CONTENT

Параметры:
* Callback<void (uint8_t)> const&
* stappler::CoderSource const&


# ::stappler::mem_pool::String

## BRIEF

## CONTENT


# ::stappler::mem_pool::WideString

## BRIEF

## CONTENT


# ::stappler::mem_pool::StringStream

## BRIEF

## CONTENT


# ::stappler::mem_pool::Interface

## BRIEF

## CONTENT


# ::stappler::mem_pool::to_string::toString<typename>(T const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename T

Параметры:
* T const&

Возвращает:
* mem_pool::String

# ::stappler::mem_pool::to_string::toStringStream<typename>(mem_pool::StringStream&,T)

## BRIEF

## CONTENT

Параметры шаблона:
* typename T

Параметры:
* mem_pool::StringStream&
* T


# ::stappler::mem_pool::to_string::toStringStream<typename,typename>(mem_pool::StringStream&,T,Args &&...)

## BRIEF

## CONTENT

Параметры шаблона:
* typename T
* typename Args

Параметры:
* mem_pool::StringStream&
* T
* Args &&...


# ::stappler::mem_pool::to_string::toString<typename,typename>(T,Args &&...)

## BRIEF

## CONTENT

Параметры шаблона:
* typename T
* typename Args

Параметры:
* T
* Args &&...

Возвращает:
* mem_pool::String

# ::stappler::mem_std::String

## BRIEF

## CONTENT


# ::stappler::mem_std::WideString

## BRIEF

## CONTENT


# ::stappler::mem_std::StringStream

## BRIEF

## CONTENT


# ::stappler::mem_std::Interface

## BRIEF

## CONTENT


# ::stappler::mem_std::to_string::toString<typename>(T const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename T

Параметры:
* T const&

Возвращает:
* mem_std::String

# ::stappler::mem_std::to_string::toStringStream<typename>(mem_std::StringStream&,T)

## BRIEF

## CONTENT

Параметры шаблона:
* typename T

Параметры:
* mem_std::StringStream&
* T


# ::stappler::mem_std::to_string::toStringStream<typename,typename>(mem_std::StringStream&,T,Args &&...)

## BRIEF

## CONTENT

Параметры шаблона:
* typename T
* typename Args

Параметры:
* mem_std::StringStream&
* T
* Args &&...


# ::stappler::mem_std::to_string::toString<typename,typename>(T,Args &&...)

## BRIEF

## CONTENT

Параметры шаблона:
* typename T
* typename Args

Параметры:
* T
* Args &&...

Возвращает:
* mem_std::String