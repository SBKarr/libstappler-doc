Title: SPDataCbor.h


# STAPPLER_DATA_SPDATACBOR_H_

## BRIEF

Заголовок с определением типов данных для формата CBOR

## CONTENT

Заголовок с определением типов данных для формата CBOR

# ::stappler::data::cbor::MajorType

## BRIEF

Список основных типов кодирования CBOR

## CONTENT

Список основных типов кодирования CBOR

Значения:
* Unsigned
* Negative
* ByteString
* CharString
* Array
* Map
* Tag
* Simple


# ::stappler::data::cbor::SimpleValue

## BRIEF

Список предустановленных значений в кодирвоании CBOR

## CONTENT

Список предустановленных значений вв кодирвоании CBOR

Значения:
* False
* True
* Null
* Undefined


# ::stappler::data::cbor::Flags

## BRIEF

Список флаговых значений CBOR

## CONTENT

Список флаговых значений CBOR

Значения:
* Null
* Interrupt
* MajorTypeShift
* MajorTypeMask
* MajorTypeMaskEncoded
* AdditionalInfoMask
* MaxAdditionalNumber
* AdditionalNumber8Bit
* AdditionalNumber16Bit
* AdditionalNumber32Bit
* AdditionalNumber64Bit
* Simple8Bit
* AdditionalFloat16Bit
* AdditionalFloat32Bit
* AdditionalFloat64Bit
* Unassigned1
* Unassigned2
* Unassigned3
* UndefinedLength


# ::stappler::data::cbor::MajorTypeEncoded

## BRIEF

Список закодированных основных типов CBOR

## CONTENT

Список закодированных основных типов CBOR. Необходим, чтобы сравнивать типы без их демаскирования.

Значения:
* Unsigned
* Negative
* ByteString
* CharString
* Array
* Map
* Tag
* Simple


# ::stappler::data::cbor::Tag

## BRIEF

Список определённых в стандарте тегов CBOR

## CONTENT

Список определённых в стандарте тегов CBOR

Значения:
* DateTime
* EpochTime
* PositiveBignum
* NegativeBignum
* DecimalFraction
* BigFloat
* ExpectedBase64Url
* ExpectedBase64
* ExpectedBase16
* EmbeddedCbor
* StringReference
* SerializedPerl
* SerializedObject
* SharedValue
* ValueReference
* RationalNumber
* HintHintUri
* HintBase64Url
* HintBase64
* HintRegularExpression
* HintMimeMessage
* BinaryUuid
* LanguageTaggedString
* Identifier
* StringMark
* BinaryMimeMessage
* DecimalFractionFixed
* BigFloatFixed
* HintIndirection
* CborMagick


# ::stappler::data::cbor::operator<<(stappler::data::cbor::MajorType,stappler::data::cbor::Flags)

## BRIEF

Оператор для совмещения флагов и основного типа

## CONTENT

Оператор для совмещения флагов и основного типа для получения кодированного значения

Параметры:
* stappler::data::cbor::MajorType
* stappler::data::cbor::Flags

Возвращает:
* stappler::data::cbor::MajorTypeEncoded

# ::stappler::data::cbor::operator==(uint8_t,stappler::data::cbor::MajorTypeEncoded)

## BRIEF

Оператор сравнения кодированного значения с кодированным основным типом

## CONTENT

Оператор сравнения кодированного значения с кодированным основным типом

Параметры:
* uint8_t
* stappler::data::cbor::MajorTypeEncoded

Возвращает:
* bool - true если значение кодирует указанный тип

# ::stappler::data::cbor::operator==(uint8_t,stappler::data::cbor::MajorType)

## BRIEF

Оператор сравнения кодированного значения с основным типом

## CONTENT

Оператор сравнения кодированного значения с основным типом

Параметры:
* uint8_t
* stappler::data::cbor::MajorType

Возвращает:
* bool - true если значение кодирует указанный тип

# ::stappler::data::cbor::operator==(uint8_t,stappler::data::cbor::Flags)

## BRIEF

Оператор сравнения кодированного значения с флагами значения

## CONTENT

Оператор сравнения кодированного значения с флагами значения

Параметры:
* uint8_t
* stappler::data::cbor::Flags

Возвращает:
* bool - true если флаги совпадают с флагами в кодированном значении

# ::stappler::data::cbor::type(uint8_t)

## BRIEF

Возвращает тип кодированного значения

## CONTENT

Возвращает тип кодированного значения

Параметры:
* uint8_t

Возвращает:
* stappler::data::cbor::MajorType

# ::stappler::data::cbor::data(uint8_t)

## BRIEF

Демаскирует блок данных из кодированного значения

## CONTENT

Демаскирует блок данных из кодированного значения

Параметры:
* uint8_t - кодированное значение

Возвращает:
* uint8_t - демаскированное значение

# ::stappler::data::cbor::flags(uint8_t)

## BRIEF

Возвращает флаги из кодированного значения

## CONTENT

Возвращает флаги из кодированного значения

Параметры:
* uint8_t

Возвращает:
* stappler::data::cbor::Flags

# ::stappler::data::cbor::_writeId<class>(Writer&)

## BRIEF

Записывает идентификатор кодированного в CBOR значения

## CONTENT

Записывает идентификатор кодированного в CBOR значения. SDK всегда записывает префикс CBOR при кодировании.

Параметры шаблона:
* class Writer - тип кодировщика

Параметры:
* Writer& - объект кодировщика


# ::stappler::data::cbor::_writeNumeric<class,class>(Writer&,T,stappler::data::cbor::MajorTypeEncoded,stappler::data::cbor::Flags)

## BRIEF

Записывает численное значение с помощью кодировщика

## CONTENT

Записывает численное значение с помощью кодировщика

Параметры шаблона:
* class Writer - тип кодировщика
* class T - класс целочисленного значения

Параметры:
* Writer& - объект кодировщика
* T - записываемое значение
* stappler::data::cbor::MajorTypeEncoded - тип значения
* stappler::data::cbor::Flags - информационные флаги


# ::stappler::data::cbor::_writeInt<class>(Writer&,uint64_t,stappler::data::cbor::MajorTypeEncoded)

## BRIEF

Записывает целое число с помощью кодировщика

## CONTENT

Записывает целое число с помощью кодировщика. Следует правилам CBOR в отношении минималистичного кодирования чисел.

Параметры шаблона:
* class Writer - тип кодировщика

Параметры:
* Writer& - объект кодировщика
* uint64_t - целое число
* stappler::data::cbor::MajorTypeEncoded - тип значения


# ::stappler::data::cbor::_writeFloatNaN<class>(Writer&)

## BRIEF

Записывает значение NaN с помощью кодировщика

## CONTENT

Записывает значение NaN с помощью кодировщика. Следуя принципам CBOR, записывает NaN для 16-битного float.

Параметры шаблона:
* class Writer - тип кодировщика

Параметры:
* Writer& - объект кодировщика


# ::stappler::data::cbor::_writeFloatPositiveInf<class>(Writer&)

## BRIEF

Записывает значение +Inf с помощью кодировщика

## CONTENT

Записывает значение +Inf с помощью кодировщика. Следуя принципам CBOR, записывает +Inf для 16-битного float.

Параметры шаблона:
* class Writer - тип кодировщика

Параметры:
* Writer& - объект кодировщика


# ::stappler::data::cbor::_writeFloatNegativeInf<class>(Writer&)

## BRIEF

Записывает значение -Inf с помощью кодировщика

## CONTENT

Записывает значение -Inf с помощью кодировщика. Следуя принципам CBOR, записывает +Inf для 16-битного float.

Параметры шаблона:
* class Writer - тип кодировщика

Параметры:
* Writer& - объект кодировщика


# ::stappler::data::cbor::_writeFloat16<class>(Writer&,uint16_t)

## BRIEF

Записывает 16-битное число с плавающей точкой (IEEE 754)

## CONTENT

Записывает 16-битное число с плавающей точкой (IEEE 754)

Параметры шаблона:
* class Writer - тип кодировщика

Параметры:
* Writer& - объект кодировщика
* uint16_t - кодированное в uint16_t число с плавающей точкой


# ::stappler::data::cbor::_writeFloat32<class>(Writer&,float)

## BRIEF

Записывает 32-битное число с плавающей точкой (IEEE 754)

## CONTENT

Записывает 32-битное число с плавающей точкой (IEEE 754)

Параметры шаблона:
* class Writer - тип кодировщика

Параметры:
* Writer& - объект кодировщика
* float - записываемое число


# ::stappler::data::cbor::_writeFloat64<class>(Writer&,double)

## BRIEF

Записывает 64-битное число с плавающей точкой (IEEE 754)

## CONTENT

Записывает 64-битное число с плавающей точкой (IEEE 754)

Параметры шаблона:
* class Writer - тип кодировщика

Параметры:
* Writer& - объект кодировщика
* double - записываемое число


# ::stappler::data::cbor::_writeArrayStart<class>(Writer&,size_t)

## BRIEF

Записывает метку начала массива с длиной массива

## CONTENT

Записывает метку начала массива с длиной массива. Следует правилам CBOR в отношении минималистичного кодирования чисел.

Параметры шаблона:
* class Writer - тип кодировщика

Параметры:
* Writer& - объект кодировщика
* size_t - длина массива


# ::stappler::data::cbor::_writeMapStart<class>(Writer&,size_t)

## BRIEF

Записывает метку начала ассоциативного массива с длиной массива

## CONTENT

Записывает метку начала ассоциативного массива с длиной массива. Следует правилам CBOR в отношении минималистичного кодирования чисел.

Параметры шаблона:
* class Writer - тип кодировщика

Параметры:
* Writer& - объект кодировщика
* size_t - длина массива


# ::stappler::data::cbor::_writeNull<class>(Writer&,stappler::nullptr_t)

## BRIEF

Записывает значение NULL

## CONTENT

Записывает значение NULL

Параметры шаблона:
* class Writer - тип кодировщика

Параметры:
* Writer& - объект кодировщика
* stappler::nullptr_t - метка типа NULL


# ::stappler::data::cbor::_writeBool<class>(Writer&,bool)

## BRIEF

Записывает булево значение

## CONTENT

Записывает булево значение

Параметры шаблона:
* class Writer - тип кодировщика

Параметры:
* Writer& - объект кодировщика
* bool - значение


# ::stappler::data::cbor::_writeInt<class>(Writer&,int64_t)

## BRIEF

Записывает целое число

## CONTENT

Записывает целое число. Следует правилам CBOR в отношении минималистичного кодирования чисел.

Параметры шаблона:
* class Writer - тип кодировщика

Параметры:
* Writer& - объект кодировщика
* int64_t - записываемое число


# ::stappler::data::cbor::_writeFloat<class>(Writer&,double)

## BRIEF

Записывает число с плавающей точкой

## CONTENT

Записывает число с плавающей точкой. Следует правилам CBOR в отношении минималистичного кодирования чисел.

Параметры шаблона:
* class Writer - тип кодировщика

Параметры:
* Writer& - объект кодировщика
* double - записываемое число


# ::stappler::data::cbor::_writeString<class>(Writer&,stappler::StringView const&)

## BRIEF

Записывает строку

## CONTENT

Записывает строку

Параметры шаблона:
* class Writer - тип кодировщика

Параметры:
* Writer& - объект кодировщика
* stappler::StringView const& - отображение записываемой строки


# ::stappler::data::cbor::_writeBytes<class>(Writer&,BytesViewTemplate<Endian::Network> const&)

## BRIEF

Записывает байтовую строку

## CONTENT

Записывает байтовую строку

Параметры шаблона:
* class Writer - тип кодировщика

Параметры:
* Writer& - объект кодировщика
* BytesViewTemplate<Endian::Network> const& - отображение байтовой строки


# ::stappler::data::cbor::_writeNumber<class>(Writer&,float)

## BRIEF

Записывает численное значение

## CONTENT

Записывает численное значение, не конкретизируя его тип (целое или с плавающей точкой)

Параметры шаблона:
* class Writer - тип кодировщика

Параметры:
* Writer& - объект кодировщика
* float - записываемое значение


# ::stappler::data::cbor::_readIntValue(BytesViewTemplate<Endian::Network>&,uint8_t)

## BRIEF

Читает натуральное значение из блока данных

## CONTENT

Читает натуральное значение из блока данных

Параметры:
* BytesViewTemplate<Endian::Network>& - блок данных
* uint8_t - кодированный тип значения

Возвращает:
* uint64_t - прочитанное число

# ::stappler::data::cbor::_readInt(BytesViewTemplate<Endian::Network>&)

## BRIEF

Читает целое число из блока данных

## CONTENT

Читает целое число из блока данных

Параметры:
* BytesViewTemplate<Endian::Network>& - блок данных

Возвращает:
* int64_t - прочитанное число

# ::stappler::data::cbor::_readNumber(BytesViewTemplate<Endian::Network>&)

## BRIEF

Читает нетипизированное число из блока данных

## CONTENT

Читает нетипизированное число из блока данных

Параметры:
* BytesViewTemplate<Endian::Network>& - блок данных

Возвращает:
* float - прочитанное число