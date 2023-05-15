Title: SPBytesView.h


# LIBSTAPPLER_COMMON_STRING_SPDATAREADER_H_

## BRIEF

## CONTENT


# ::stappler::BytesViewTemplate<stappler::Endian>

## BRIEF

## CONTENT

Параметры шаблона:
* stappler::Endian Endianess

Базовые классы:
* BytesReader<uint8_t>


# ::stappler::BytesViewTemplate<stappler::Endian>::Converter<class>

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class T


# ::stappler::BytesViewTemplate<stappler::Endian>::Self

## BRIEF

## CONTENT

Доступ: public


# ::stappler::BytesViewTemplate<stappler::Endian>::PoolBytes

## BRIEF

## CONTENT

Доступ: public


# ::stappler::BytesViewTemplate<stappler::Endian>::StdBytes

## BRIEF

## CONTENT

Доступ: public


# ::stappler::BytesViewTemplate<stappler::Endian>::BytesViewTemplate()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::BytesViewTemplate<stappler::Endian>::BytesViewTemplate(uint8_t const*,size_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint8_t const*
* size_t


# ::stappler::BytesViewTemplate<stappler::Endian>::BytesViewTemplate(stappler::StringView)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView


# ::stappler::BytesViewTemplate<stappler::Endian>::BytesViewTemplate(stappler::BytesViewTemplate::PoolBytes const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::BytesViewTemplate::PoolBytes const&


# ::stappler::BytesViewTemplate<stappler::Endian>::BytesViewTemplate(stappler::BytesViewTemplate::StdBytes const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::BytesViewTemplate::StdBytes const&


# ::stappler::BytesViewTemplate<stappler::Endian>::BytesViewTemplate<size_t>(std::array<uint8_t, Size> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* size_t Size

Параметры:
* std::array<uint8_t, Size> const&


# ::stappler::BytesViewTemplate<stappler::Endian>::BytesViewTemplate<stappler::Endian>(BytesViewTemplate<OtherEndianess> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* stappler::Endian OtherEndianess

Параметры:
* BytesViewTemplate<OtherEndianess> const&


# ::stappler::BytesViewTemplate<stappler::Endian>::BytesViewTemplate<stappler::Endian>(BytesViewTemplate<OtherEndianess> const,size_t)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* stappler::Endian OtherEndianess

Параметры:
* BytesViewTemplate<OtherEndianess> const
* size_t


# ::stappler::BytesViewTemplate<stappler::Endian>::BytesViewTemplate<stappler::Endian>(BytesViewTemplate<OtherEndianess> const,size_t,size_t)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* stappler::Endian OtherEndianess

Параметры:
* BytesViewTemplate<OtherEndianess> const
* size_t
* size_t


# ::stappler::BytesViewTemplate<stappler::Endian>::operator=(stappler::BytesViewTemplate::PoolBytes const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::BytesViewTemplate::PoolBytes const&

Возвращает:
* Self&

# ::stappler::BytesViewTemplate<stappler::Endian>::operator=(stappler::BytesViewTemplate::StdBytes const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::BytesViewTemplate::StdBytes const&

Возвращает:
* Self&

# ::stappler::BytesViewTemplate<stappler::Endian>::operator=(stappler::BytesViewTemplate::Self const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::BytesViewTemplate::Self const&

Возвращает:
* Self&

# ::stappler::BytesViewTemplate<stappler::Endian>::set(stappler::BytesViewTemplate::PoolBytes const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::BytesViewTemplate::PoolBytes const&

Возвращает:
* Self&

# ::stappler::BytesViewTemplate<stappler::Endian>::set(stappler::BytesViewTemplate::StdBytes const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::BytesViewTemplate::StdBytes const&

Возвращает:
* Self&

# ::stappler::BytesViewTemplate<stappler::Endian>::set(stappler::BytesViewTemplate::Self const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::BytesViewTemplate::Self const&

Возвращает:
* Self&

# ::stappler::BytesViewTemplate<stappler::Endian>::set(uint8_t const*,size_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint8_t const*
* size_t

Возвращает:
* Self&

# ::stappler::BytesViewTemplate<stappler::Endian>::operator++()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Self&

# ::stappler::BytesViewTemplate<stappler::Endian>::operator++(int)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* int

Возвращает:
* Self&

# ::stappler::BytesViewTemplate<stappler::Endian>::operator+=(size_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* size_t

Возвращает:
* Self&

# ::stappler::BytesViewTemplate<stappler::Endian>::operator==(stappler::BytesViewTemplate::Self const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::BytesViewTemplate::Self const&

Возвращает:
* bool

# ::stappler::BytesViewTemplate<stappler::Endian>::operator!=(stappler::BytesViewTemplate::Self const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::BytesViewTemplate::Self const&

Возвращает:
* bool

# ::stappler::BytesViewTemplate<stappler::Endian>::pdup(memory::pool_t*) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* memory::pool_t*

Возвращает:
* Self

# ::stappler::BytesViewTemplate<stappler::Endian>::bytes<typename>() const

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename Interface

Возвращает:
* typename Interface::BytesType

# ::stappler::BytesViewTemplate<stappler::Endian>::sub(size_t,size_t) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* size_t
* size_t

Возвращает:
* Self

# ::stappler::BytesViewTemplate<stappler::Endian>::convert<typename>(uint8_t const*)

## BRIEF

## CONTENT

Доступ: private

Параметры шаблона:
* typename T

Параметры:
* uint8_t const*

Возвращает:
* T

# ::stappler::BytesViewTemplate<stappler::Endian>::readUnsigned64()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint64_t

# ::stappler::BytesViewTemplate<stappler::Endian>::readUnsigned32()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint32_t

# ::stappler::BytesViewTemplate<stappler::Endian>::readUnsigned24()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint32_t

# ::stappler::BytesViewTemplate<stappler::Endian>::readUnsigned16()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint16_t

# ::stappler::BytesViewTemplate<stappler::Endian>::readUnsigned()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint8_t

# ::stappler::BytesViewTemplate<stappler::Endian>::readFloat64()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* double

# ::stappler::BytesViewTemplate<stappler::Endian>::readFloat32()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* float

# ::stappler::BytesViewTemplate<stappler::Endian>::readFloat16()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* float

# ::stappler::BytesViewTemplate<stappler::Endian>::readString()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::StringView

# ::stappler::BytesViewTemplate<stappler::Endian>::readString(size_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* size_t

Возвращает:
* stappler::StringView

# ::stappler::BytesViewTemplate<stappler::Endian>::readBytes<stappler::Endian>(size_t)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* stappler::Endian OtherEndianess

Параметры:
* size_t

Возвращает:
* BytesViewTemplate<OtherEndianess>

# ::stappler::BytesView

## BRIEF

## CONTENT


# ::stappler::BytesViewNetwork

## BRIEF

## CONTENT


# ::stappler::BytesViewHost

## BRIEF

## CONTENT


# ::stappler::BytesViewTemplate<stappler::Endian>::BytesViewTemplate()

## BRIEF

## CONTENT


# ::stappler::BytesViewTemplate<stappler::Endian>::BytesViewTemplate(uint8_t const*,size_t)

## BRIEF

## CONTENT

Параметры:
* uint8_t const*
* size_t


# ::stappler::BytesViewTemplate<stappler::Endian>::BytesViewTemplate(stappler::BytesViewTemplate::PoolBytes const&)

## BRIEF

## CONTENT

Параметры:
* stappler::BytesViewTemplate::PoolBytes const&


# ::stappler::BytesViewTemplate<stappler::Endian>::BytesViewTemplate(stappler::BytesViewTemplate::StdBytes const&)

## BRIEF

## CONTENT

Параметры:
* stappler::BytesViewTemplate::StdBytes const&


# ::stappler::BytesViewTemplate<stappler::Endian>::BytesViewTemplate(stappler::StringView)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView


# ::stappler::BytesViewTemplate<stappler::Endian>::BytesViewTemplate<size_t,stappler::Endian>(std::array<uint8_t, Size> const&)

## BRIEF

## CONTENT

Параметры шаблона:
* size_t Size
* stappler::Endian Endianess

Параметры:
* std::array<uint8_t, Size> const&


# ::stappler::BytesViewTemplate<stappler::Endian>::BytesViewTemplate<stappler::Endian,stappler::Endian>(BytesViewTemplate<OtherEndianess> const&)

## BRIEF

## CONTENT

Параметры шаблона:
* stappler::Endian OtherEndianess
* stappler::Endian Endianess

Параметры:
* BytesViewTemplate<OtherEndianess> const&


# ::stappler::BytesViewTemplate<stappler::Endian>::BytesViewTemplate<stappler::Endian,stappler::Endian>(BytesViewTemplate<OtherEndianess> const,size_t)

## BRIEF

## CONTENT

Параметры шаблона:
* stappler::Endian OtherEndianess
* stappler::Endian Endianess

Параметры:
* BytesViewTemplate<OtherEndianess> const
* size_t


# ::stappler::BytesViewTemplate<stappler::Endian>::BytesViewTemplate<stappler::Endian,stappler::Endian>(BytesViewTemplate<OtherEndianess> const,size_t,size_t)

## BRIEF

## CONTENT

Параметры шаблона:
* stappler::Endian OtherEndianess
* stappler::Endian Endianess

Параметры:
* BytesViewTemplate<OtherEndianess> const
* size_t
* size_t


# ::stappler::BytesViewTemplate<stappler::Endian>::operator=(stappler::BytesViewTemplate::PoolBytes const&)

## BRIEF

## CONTENT

Параметры:
* stappler::BytesViewTemplate::PoolBytes const&

Возвращает:
* Self&

# ::stappler::BytesViewTemplate<stappler::Endian>::operator=(stappler::BytesViewTemplate::StdBytes const&)

## BRIEF

## CONTENT

Параметры:
* stappler::BytesViewTemplate::StdBytes const&

Возвращает:
* Self&

# ::stappler::BytesViewTemplate<stappler::Endian>::operator=(stappler::BytesViewTemplate::Self const&)

## BRIEF

## CONTENT

Параметры:
* stappler::BytesViewTemplate::Self const&

Возвращает:
* Self&

# ::stappler::BytesViewTemplate<stappler::Endian>::set(stappler::BytesViewTemplate::PoolBytes const&)

## BRIEF

## CONTENT

Параметры:
* stappler::BytesViewTemplate::PoolBytes const&

Возвращает:
* Self&

# ::stappler::BytesViewTemplate<stappler::Endian>::set(stappler::BytesViewTemplate::StdBytes const&)

## BRIEF

## CONTENT

Параметры:
* stappler::BytesViewTemplate::StdBytes const&

Возвращает:
* Self&

# ::stappler::BytesViewTemplate<stappler::Endian>::set(stappler::BytesViewTemplate::Self const&)

## BRIEF

## CONTENT

Параметры:
* stappler::BytesViewTemplate::Self const&

Возвращает:
* Self&

# ::stappler::BytesViewTemplate<stappler::Endian>::set(uint8_t const*,size_t)

## BRIEF

## CONTENT

Параметры:
* uint8_t const*
* size_t

Возвращает:
* Self&

# ::stappler::BytesViewTemplate<stappler::Endian>::operator++()

## BRIEF

## CONTENT

Возвращает:
* Self&

# ::stappler::BytesViewTemplate<stappler::Endian>::operator++(int)

## BRIEF

## CONTENT

Параметры:
* int

Возвращает:
* Self&

# ::stappler::BytesViewTemplate<stappler::Endian>::operator+=(size_t)

## BRIEF

## CONTENT

Параметры:
* size_t

Возвращает:
* Self&

# ::stappler::BytesViewTemplate<stappler::Endian>::operator==(stappler::BytesViewTemplate::Self const&) const

## BRIEF

## CONTENT

Параметры:
* stappler::BytesViewTemplate::Self const&

Возвращает:
* bool

# ::stappler::BytesViewTemplate<stappler::Endian>::operator!=(stappler::BytesViewTemplate::Self const&) const

## BRIEF

## CONTENT

Параметры:
* stappler::BytesViewTemplate::Self const&

Возвращает:
* bool

# ::stappler::BytesViewTemplate<stappler::Endian>::pdup(memory::pool_t*) const

## BRIEF

## CONTENT

Параметры:
* memory::pool_t*

Возвращает:
* Self

# ::stappler::BytesViewTemplate<stappler::Endian>::bytes<typename,stappler::Endian>() const

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface
* stappler::Endian Endianess

Возвращает:
* typename Interface::BytesType

# ::stappler::BytesViewTemplate<stappler::Endian>::convert<typename,stappler::Endian>(uint8_t const*)

## BRIEF

## CONTENT

Параметры шаблона:
* typename T
* stappler::Endian Endianess

Параметры:
* uint8_t const*

Возвращает:
* T

# ::stappler::BytesViewTemplate<stappler::Endian>::readUnsigned64()

## BRIEF

## CONTENT

Возвращает:
* uint64_t

# ::stappler::BytesViewTemplate<stappler::Endian>::readUnsigned32()

## BRIEF

## CONTENT

Возвращает:
* uint32_t

# ::stappler::BytesViewTemplate<stappler::Endian>::readUnsigned24()

## BRIEF

## CONTENT

Возвращает:
* uint32_t

# ::stappler::BytesViewTemplate<stappler::Endian>::readUnsigned16()

## BRIEF

## CONTENT

Возвращает:
* uint16_t

# ::stappler::BytesViewTemplate<stappler::Endian>::readUnsigned()

## BRIEF

## CONTENT

Возвращает:
* uint8_t

# ::stappler::BytesViewTemplate<stappler::Endian>::readFloat64()

## BRIEF

## CONTENT

Возвращает:
* double

# ::stappler::BytesViewTemplate<stappler::Endian>::readFloat32()

## BRIEF

## CONTENT

Возвращает:
* float

# ::stappler::BytesViewTemplate<stappler::Endian>::readFloat16()

## BRIEF

## CONTENT

Возвращает:
* float

# ::stappler::BytesViewTemplate<stappler::Endian>::readString()

## BRIEF

## CONTENT

Возвращает:
* stappler::StringView

# ::stappler::BytesViewTemplate<stappler::Endian>::readString(size_t)

## BRIEF

## CONTENT

Параметры:
* size_t

Возвращает:
* stappler::StringView

# ::stappler::BytesViewTemplate<stappler::Endian>::readBytes<stappler::Endian,stappler::Endian>(size_t)

## BRIEF

## CONTENT

Параметры шаблона:
* stappler::Endian Target
* stappler::Endian Endianess

Параметры:
* size_t

Возвращает:
* BytesViewTemplate<Target>

# ::stappler::compareDataRanges<typename>(uint8_t const*,size_t,uint8_t const*,size_t,Compare const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Compare

Параметры:
* uint8_t const*
* size_t
* uint8_t const*
* size_t
* Compare const&

Возвращает:
* int

# ::stappler::operator==<stappler::Endian>(memory::PoolInterface::BytesType const&,BytesViewTemplate<Endianess> const&)

## BRIEF

## CONTENT

Параметры шаблона:
* stappler::Endian Endianess

Параметры:
* memory::PoolInterface::BytesType const&
* BytesViewTemplate<Endianess> const&

Возвращает:
* bool

# ::stappler::operator==<stappler::Endian>(memory::StandartInterface::BytesType const&,BytesViewTemplate<Endianess> const&)

## BRIEF

## CONTENT

Параметры шаблона:
* stappler::Endian Endianess

Параметры:
* memory::StandartInterface::BytesType const&
* BytesViewTemplate<Endianess> const&

Возвращает:
* bool

# ::stappler::operator==<stappler::Endian>(BytesViewTemplate<Endianess> const&,memory::PoolInterface::BytesType const&)

## BRIEF

## CONTENT

Параметры шаблона:
* stappler::Endian Endianess

Параметры:
* BytesViewTemplate<Endianess> const&
* memory::PoolInterface::BytesType const&

Возвращает:
* bool

# ::stappler::operator==<stappler::Endian>(BytesViewTemplate<Endianess> const&,memory::StandartInterface::BytesType const&)

## BRIEF

## CONTENT

Параметры шаблона:
* stappler::Endian Endianess

Параметры:
* BytesViewTemplate<Endianess> const&
* memory::StandartInterface::BytesType const&

Возвращает:
* bool

# ::stappler::operator!=<stappler::Endian>(memory::PoolInterface::BytesType const&,BytesViewTemplate<Endianess> const&)

## BRIEF

## CONTENT

Параметры шаблона:
* stappler::Endian Endianess

Параметры:
* memory::PoolInterface::BytesType const&
* BytesViewTemplate<Endianess> const&

Возвращает:
* bool

# ::stappler::operator!=<stappler::Endian>(memory::StandartInterface::BytesType const&,BytesViewTemplate<Endianess> const&)

## BRIEF

## CONTENT

Параметры шаблона:
* stappler::Endian Endianess

Параметры:
* memory::StandartInterface::BytesType const&
* BytesViewTemplate<Endianess> const&

Возвращает:
* bool

# ::stappler::operator!=<stappler::Endian>(BytesViewTemplate<Endianess> const&,memory::PoolInterface::BytesType const&)

## BRIEF

## CONTENT

Параметры шаблона:
* stappler::Endian Endianess

Параметры:
* BytesViewTemplate<Endianess> const&
* memory::PoolInterface::BytesType const&

Возвращает:
* bool

# ::stappler::operator!=<stappler::Endian>(BytesViewTemplate<Endianess> const&,memory::StandartInterface::BytesType const&)

## BRIEF

## CONTENT

Параметры шаблона:
* stappler::Endian Endianess

Параметры:
* BytesViewTemplate<Endianess> const&
* memory::StandartInterface::BytesType const&

Возвращает:
* bool

# ::stappler::operator<<stappler::Endian>(BytesViewTemplate<Endianess> const&,BytesViewTemplate<Endianess> const&)

## BRIEF

## CONTENT

Параметры шаблона:
* stappler::Endian Endianess

Параметры:
* BytesViewTemplate<Endianess> const&
* BytesViewTemplate<Endianess> const&

Возвращает:
* bool

# ::stappler::operator<<stappler::Endian>(memory::PoolInterface::BytesType const&,BytesViewTemplate<Endianess> const&)

## BRIEF

## CONTENT

Параметры шаблона:
* stappler::Endian Endianess

Параметры:
* memory::PoolInterface::BytesType const&
* BytesViewTemplate<Endianess> const&

Возвращает:
* bool

# ::stappler::operator<<stappler::Endian>(memory::StandartInterface::BytesType const&,BytesViewTemplate<Endianess> const&)

## BRIEF

## CONTENT

Параметры шаблона:
* stappler::Endian Endianess

Параметры:
* memory::StandartInterface::BytesType const&
* BytesViewTemplate<Endianess> const&

Возвращает:
* bool

# ::stappler::operator<<stappler::Endian>(BytesViewTemplate<Endianess> const&,memory::PoolInterface::BytesType const&)

## BRIEF

## CONTENT

Параметры шаблона:
* stappler::Endian Endianess

Параметры:
* BytesViewTemplate<Endianess> const&
* memory::PoolInterface::BytesType const&

Возвращает:
* bool

# ::stappler::operator<<stappler::Endian>(BytesViewTemplate<Endianess> const&,memory::StandartInterface::BytesType const&)

## BRIEF

## CONTENT

Параметры шаблона:
* stappler::Endian Endianess

Параметры:
* BytesViewTemplate<Endianess> const&
* memory::StandartInterface::BytesType const&

Возвращает:
* bool

# ::stappler::operator<=<stappler::Endian>(BytesViewTemplate<Endianess> const&,BytesViewTemplate<Endianess> const&)

## BRIEF

## CONTENT

Параметры шаблона:
* stappler::Endian Endianess

Параметры:
* BytesViewTemplate<Endianess> const&
* BytesViewTemplate<Endianess> const&

Возвращает:
* bool

# ::stappler::operator<=<stappler::Endian>(memory::PoolInterface::BytesType const&,BytesViewTemplate<Endianess> const&)

## BRIEF

## CONTENT

Параметры шаблона:
* stappler::Endian Endianess

Параметры:
* memory::PoolInterface::BytesType const&
* BytesViewTemplate<Endianess> const&

Возвращает:
* bool

# ::stappler::operator<=<stappler::Endian>(memory::StandartInterface::BytesType const&,BytesViewTemplate<Endianess> const&)

## BRIEF

## CONTENT

Параметры шаблона:
* stappler::Endian Endianess

Параметры:
* memory::StandartInterface::BytesType const&
* BytesViewTemplate<Endianess> const&

Возвращает:
* bool

# ::stappler::operator<=<stappler::Endian>(BytesViewTemplate<Endianess> const&,memory::PoolInterface::BytesType const&)

## BRIEF

## CONTENT

Параметры шаблона:
* stappler::Endian Endianess

Параметры:
* BytesViewTemplate<Endianess> const&
* memory::PoolInterface::BytesType const&

Возвращает:
* bool

# ::stappler::operator<=<stappler::Endian>(BytesViewTemplate<Endianess> const&,memory::StandartInterface::BytesType const&)

## BRIEF

## CONTENT

Параметры шаблона:
* stappler::Endian Endianess

Параметры:
* BytesViewTemplate<Endianess> const&
* memory::StandartInterface::BytesType const&

Возвращает:
* bool

# ::stappler::operator><stappler::Endian>(BytesViewTemplate<Endianess> const&,BytesViewTemplate<Endianess> const&)

## BRIEF

## CONTENT

Параметры шаблона:
* stappler::Endian Endianess

Параметры:
* BytesViewTemplate<Endianess> const&
* BytesViewTemplate<Endianess> const&

Возвращает:
* bool

# ::stappler::operator><stappler::Endian>(memory::PoolInterface::BytesType const&,BytesViewTemplate<Endianess> const&)

## BRIEF

## CONTENT

Параметры шаблона:
* stappler::Endian Endianess

Параметры:
* memory::PoolInterface::BytesType const&
* BytesViewTemplate<Endianess> const&

Возвращает:
* bool

# ::stappler::operator><stappler::Endian>(memory::StandartInterface::BytesType const&,BytesViewTemplate<Endianess> const&)

## BRIEF

## CONTENT

Параметры шаблона:
* stappler::Endian Endianess

Параметры:
* memory::StandartInterface::BytesType const&
* BytesViewTemplate<Endianess> const&

Возвращает:
* bool

# ::stappler::operator><stappler::Endian>(BytesViewTemplate<Endianess> const&,memory::PoolInterface::BytesType const&)

## BRIEF

## CONTENT

Параметры шаблона:
* stappler::Endian Endianess

Параметры:
* BytesViewTemplate<Endianess> const&
* memory::PoolInterface::BytesType const&

Возвращает:
* bool

# ::stappler::operator><stappler::Endian>(BytesViewTemplate<Endianess> const&,memory::StandartInterface::BytesType const&)

## BRIEF

## CONTENT

Параметры шаблона:
* stappler::Endian Endianess

Параметры:
* BytesViewTemplate<Endianess> const&
* memory::StandartInterface::BytesType const&

Возвращает:
* bool

# ::stappler::operator>=<stappler::Endian>(BytesViewTemplate<Endianess> const&,BytesViewTemplate<Endianess> const&)

## BRIEF

## CONTENT

Параметры шаблона:
* stappler::Endian Endianess

Параметры:
* BytesViewTemplate<Endianess> const&
* BytesViewTemplate<Endianess> const&

Возвращает:
* bool

# ::stappler::operator>=<stappler::Endian>(memory::PoolInterface::BytesType const&,BytesViewTemplate<Endianess> const&)

## BRIEF

## CONTENT

Параметры шаблона:
* stappler::Endian Endianess

Параметры:
* memory::PoolInterface::BytesType const&
* BytesViewTemplate<Endianess> const&

Возвращает:
* bool

# ::stappler::operator>=<stappler::Endian>(memory::StandartInterface::BytesType const&,BytesViewTemplate<Endianess> const&)

## BRIEF

## CONTENT

Параметры шаблона:
* stappler::Endian Endianess

Параметры:
* memory::StandartInterface::BytesType const&
* BytesViewTemplate<Endianess> const&

Возвращает:
* bool

# ::stappler::operator>=<stappler::Endian>(BytesViewTemplate<Endianess> const&,memory::PoolInterface::BytesType const&)

## BRIEF

## CONTENT

Параметры шаблона:
* stappler::Endian Endianess

Параметры:
* BytesViewTemplate<Endianess> const&
* memory::PoolInterface::BytesType const&

Возвращает:
* bool

# ::stappler::operator>=<stappler::Endian>(BytesViewTemplate<Endianess> const&,memory::StandartInterface::BytesType const&)

## BRIEF

## CONTENT

Параметры шаблона:
* stappler::Endian Endianess

Параметры:
* BytesViewTemplate<Endianess> const&
* memory::StandartInterface::BytesType const&

Возвращает:
* bool