Title: SPBytesView.h

# STAPPLER_CORE_STRING_SPDATAREADER_H_

## BRIEF

Интерфейс байтового отображения BytesView

## CONTENT

Интерфейс байтового отображения BytesView

# ::stappler::BytesViewTemplate<stappler::Endian>

## BRIEF

Класс байтового отображения

## CONTENT

Класс байтового отображения. Используется для чтения из набора байт с учётом порядка байт.

Отображение не владеет данными, на которые ссылается, не может их изменять, и будет повреждено, если данные будут изменены.

Параметры шаблона:
* stappler::Endian Endianess - предполагаемый порядок байт в отображении

Базовые классы:
* BytesReader<uint8_t>


# ::stappler::BytesViewTemplate<stappler::Endian>::Converter<class>

## BRIEF

Тип для конвертации данных из порядка байт в отображении

## CONTENT

Доступ: public

Тип для конвертации данных из порядка байт в отображении

Параметры шаблона:
* class T - конвертируемый тип


# ::stappler::BytesViewTemplate<stappler::Endian>::Self

## BRIEF

Тип себя

## CONTENT

Доступ: public

Тип себя

# ::stappler::BytesViewTemplate<stappler::Endian>::PoolBytes

## BRIEF

Байтовый контейнер для интерфейса пулов памяти

## CONTENT

Доступ: public

Байтовый контейнер для интерфейса пулов памяти

# ::stappler::BytesViewTemplate<stappler::Endian>::StdBytes

## BRIEF

Байтовый контейнер для стандартного интерфейса

## CONTENT

Доступ: public

Байтовый контейнер для стандартного интерфейса

# ::stappler::BytesViewTemplate<stappler::Endian>::BytesViewTemplate()

## BRIEF

Конструктор по умолчанию

## CONTENT

Доступ: public

Конструктор по умолчанию. Создаёт пустое отображение

# ::stappler::BytesViewTemplate<stappler::Endian>::BytesViewTemplate(uint8_t const*,size_t)

## BRIEF

Конструктор из блока памяти

## CONTENT

Доступ: public

Конструктор из блока памяти

Параметры:
* uint8_t const* - указатель на начало блока памяти
* size_t - длина блока памяти в байтах


# ::stappler::BytesViewTemplate<stappler::Endian>::BytesViewTemplate(stappler::StringView)

## BRIEF

Конструктор из отображения строки

## CONTENT

Доступ: public

Конструктор из отображения строки

Параметры:
* stappler::StringView - исходное отображение строки


# ::stappler::BytesViewTemplate<stappler::Endian>::BytesViewTemplate(stappler::BytesViewTemplate::PoolBytes const&)

## BRIEF

Конструктор из байтового контейнера

## CONTENT

Доступ: public

Конструктор из байтового контейнера

Параметры:
* stappler::BytesViewTemplate::PoolBytes const&


# ::stappler::BytesViewTemplate<stappler::Endian>::BytesViewTemplate(stappler::BytesViewTemplate::StdBytes const&)

## BRIEF

Конструктор из байтового контейнера

## CONTENT

Доступ: public

Конструктор из байтового контейнера

Параметры:
* stappler::BytesViewTemplate::StdBytes const&


# ::stappler::BytesViewTemplate<stappler::Endian>::BytesViewTemplate<size_t>(std::array<uint8_t, Size> const&)

## BRIEF

Конструктор из статического байтового массива

## CONTENT

Доступ: public

Конструктор из статического байтового массива

Параметры шаблона:
* size_t Size - размер статического массива

Параметры:
* std::array<uint8_t, Size> const&


# ::stappler::BytesViewTemplate<stappler::Endian>::BytesViewTemplate<stappler::Endian>(BytesViewTemplate<OtherEndianess> const&)

## BRIEF

Конструктр с конвертацией порядка байт

## CONTENT

Доступ: public

Конструктр с конвертацией порядка байт

Параметры шаблона:
* stappler::Endian OtherEndianess - порядок байт другого отображения

Параметры:
* BytesViewTemplate<OtherEndianess> const&


# ::stappler::BytesViewTemplate<stappler::Endian>::BytesViewTemplate<stappler::Endian>(BytesViewTemplate<OtherEndianess> const,size_t)

## BRIEF

Конструктр с конвертацией порядка байт

## CONTENT

Доступ: public

Конструктр с конвертацией порядка байт

Параметры шаблона:
* stappler::Endian OtherEndianess - порядок байт другого отображения

Параметры:
* BytesViewTemplate<OtherEndianess> const - другое отображение
* size_t - максимальная длина нового отобрадения


# ::stappler::BytesViewTemplate<stappler::Endian>::BytesViewTemplate<stappler::Endian>(BytesViewTemplate<OtherEndianess> const,size_t,size_t)

## BRIEF

Конструктр с конвертацией порядка байт

## CONTENT

Доступ: public

Конструктр с конвертацией порядка байт

Параметры шаблона:
* stappler::Endian OtherEndianess - порядок байт другого отображения

Параметры:
* BytesViewTemplate<OtherEndianess> const - другое отображение
* size_t - позиция внутри другого отображения, с которой будет начинаться новое
* size_t - максимальная длина нового отобрадения


# ::stappler::BytesViewTemplate<stappler::Endian>::operator=(stappler::BytesViewTemplate::PoolBytes const&)

## BRIEF

Назначает отображению данные байтового контейнера

## CONTENT

Доступ: public

Назначает отображению данные байтового контейнера

Параметры:
* stappler::BytesViewTemplate::PoolBytes const&

Возвращает:
* Self&

# ::stappler::BytesViewTemplate<stappler::Endian>::operator=(stappler::BytesViewTemplate::StdBytes const&)

## BRIEF

Назначает отображению данные байтового контейнера

## CONTENT

Доступ: public

Назначает отображению данные байтового контейнера

Параметры:
* stappler::BytesViewTemplate::StdBytes const&

Возвращает:
* Self&

# ::stappler::BytesViewTemplate<stappler::Endian>::operator=(stappler::BytesViewTemplate::Self const&)

## BRIEF

Оператор простого копирования

## CONTENT

Доступ: public

Оператор простого копирования

Параметры:
* stappler::BytesViewTemplate::Self const&

Возвращает:
* Self&

# ::stappler::BytesViewTemplate<stappler::Endian>::set(stappler::BytesViewTemplate::PoolBytes const&)

## BRIEF

Назначает отображению данные байтового контейнера

## CONTENT

Доступ: public

Назначает отображению данные байтового контейнера

Параметры:
* stappler::BytesViewTemplate::PoolBytes const&

Возвращает:
* Self&

# ::stappler::BytesViewTemplate<stappler::Endian>::set(stappler::BytesViewTemplate::StdBytes const&)

## BRIEF

Назначает отображению данные байтового контейнера

## CONTENT

Доступ: public

Назначает отображению данные байтового контейнера

Параметры:
* stappler::BytesViewTemplate::StdBytes const&

Возвращает:
* Self&

# ::stappler::BytesViewTemplate<stappler::Endian>::set(stappler::BytesViewTemplate::Self const&)

## BRIEF

Назначает отображению данные другого отображения

## CONTENT

Доступ: public

Назначает отображению данные другого отображения

Параметры:
* stappler::BytesViewTemplate::Self const&

Возвращает:
* Self&

# ::stappler::BytesViewTemplate<stappler::Endian>::set(uint8_t const*,size_t)

## BRIEF

Назначает отображению блок памяти по указателю

## CONTENT

Доступ: public

Назначает отображению блок памяти по указателю

Параметры:
* uint8_t const* - указатель на начало блока памяти
* size_t - размер блока памяти в байтах

Возвращает:
* Self&

# ::stappler::BytesViewTemplate<stappler::Endian>::operator++()

## BRIEF

Префиксно отбрасывает один байт из начала отображения

## CONTENT

Доступ: public

Префиксно отбрасывает один байт из начала отображения

Возвращает:
* Self&

# ::stappler::BytesViewTemplate<stappler::Endian>::operator++(int)

## BRIEF

Постфиксно отбрасывает один байт из начала отображения

## CONTENT

Доступ: public

Постфиксно отбрасывает один байт из начала отображения

Параметры:
* int

Возвращает:
* Self&

# ::stappler::BytesViewTemplate<stappler::Endian>::operator+=(size_t)

## BRIEF

Отбрасывает байты из начала отображения

## CONTENT

Доступ: public

Отбрасывает байты из начала отображения (смешает его вперёд на несколько байт, одновременно уменьшая размер).

Параметры:
* size_t - число байт, чтобы отбросить

Возвращает:
* Self&

# ::stappler::BytesViewTemplate<stappler::Endian>::operator==(stappler::BytesViewTemplate::Self const&) const

## BRIEF

Сравнивает два отображения (включая данные)

## CONTENT

Доступ: public

Сравнивает два отображения (включая данные)

Параметры:
* stappler::BytesViewTemplate::Self const&

Возвращает:
* bool - true если данные, на которые ссылаются отображения, совпадают (memcmp)

# ::stappler::BytesViewTemplate<stappler::Endian>::operator!=(stappler::BytesViewTemplate::Self const&) const

## BRIEF

Сравнивает два отображения (включая данные)

## CONTENT

Доступ: public

Сравнивает два отображения (включая данные)

Параметры:
* stappler::BytesViewTemplate::Self const&

Возвращает:
* bool - true если данные, на которые ссылаются отображения, не совпадают (memcmp)

# ::stappler::BytesViewTemplate<stappler::Endian>::pdup(memory::pool_t*) const

## BRIEF

Дублирует данные отображения, используя пул памяти

## CONTENT

Доступ: public

Дублирует данные отображения, используя пул памяти.

Параметры:
* memory::pool_t* - используемый пул памяти. Если nullptr - используется текущий пул контекста

Возвращает:
* Self

# ::stappler::BytesViewTemplate<stappler::Endian>::bytes<typename>() const

## BRIEF

Конструирует новый байтовый контейнер из отображения

## CONTENT

Доступ: public

Конструирует новый байтовый контейнер из отображения

Параметры шаблона:
* typename Interface - используемый интерфейс пула памяти

Возвращает:
* typename Interface::BytesType - новый байтовый контейнер

# ::stappler::BytesViewTemplate<stappler::Endian>::sub(size_t,size_t) const

## BRIEF

Возвращает сегмент отображения

## CONTENT

Доступ: public

Возвращает сегмент отображения

Параметры:
* size_t - начало нового сегмента
* size_t - длина нового сегмента

Возвращает:
* Self - новое отображение

# ::stappler::BytesViewTemplate<stappler::Endian>::convert<typename>(uint8_t const*)

## BRIEF

Конвертирует тип из порядка байт отображения в порядок байт исполняемого кода

## CONTENT

Доступ: private

Конвертирует тип из порядка байт отображения в порядок байт исполняемого кода

Параметры шаблона:
* typename T - конвертируемый тип

Параметры:
* uint8_t const* - блок памяти, из которого читать данные для ипа

Возвращает:
* T - тип в порядке байт исполняемого кода

# ::stappler::BytesViewTemplate<stappler::Endian>::readUnsigned64()

## BRIEF

Читает 64-битное целое из начала отображения

## CONTENT

Доступ: public

Читает 64-битное целое из начала отображения, конвертирует его в порядок байт исполняемого кода. Смещает отображение на 8 байт.

Возвращает:
* uint64_t

# ::stappler::BytesViewTemplate<stappler::Endian>::readUnsigned32()

## BRIEF

Читает 32-битное целое из начала отображения

## CONTENT

Доступ: public

Читает 32-битное целое из начала отображения, конвертирует его в порядок байт исполняемого кода. Смещает отображение на 4 байта.

Возвращает:
* uint32_t

# ::stappler::BytesViewTemplate<stappler::Endian>::readUnsigned24()

## BRIEF

Читает 24-битное целое из начала отображения

## CONTENT

Доступ: public

Читает 24-битное целое из начала отображения, конвертирует его в порядок байт исполняемого кода. Смещает отображение на 3 байта.

Возвращает:
* uint32_t

# ::stappler::BytesViewTemplate<stappler::Endian>::readUnsigned16()

## BRIEF

Читает 16-битное целое из начала отображения

## CONTENT

Доступ: public

Читает 16-битное целое из начала отображения, конвертирует его в порядок байт исполняемого кода. Смещает отображение на 2 байта.

Возвращает:
* uint16_t

# ::stappler::BytesViewTemplate<stappler::Endian>::readUnsigned()

## BRIEF

Читает 8-битное целое из начала отображения

## CONTENT

Доступ: public

Читает 8-битное целое из начала отображения, конвертирует его в порядок байт исполняемого кода. Смещает отображение на 1 байт.

Возвращает:
* uint8_t

# ::stappler::BytesViewTemplate<stappler::Endian>::readFloat64()

## BRIEF

Читает 64-битное число с плавающей точкой (IEEE 754) из начала отображения

## CONTENT

Доступ: public

Читает 64-битное число с плавающей точкой (IEEE 754) из начала отображения. Смещает отображение на 8 байт.

Возвращает:
* double

# ::stappler::BytesViewTemplate<stappler::Endian>::readFloat32()

## BRIEF

Читает 32-битное число с плавающей точкой (IEEE 754) из начала отображения

## CONTENT

Доступ: public

Читает 32-битное число с плавающей точкой (IEEE 754) из начала отображения. Смещает отображение на 4 байта.

Возвращает:
* float

# ::stappler::BytesViewTemplate<stappler::Endian>::readFloat16()

## BRIEF

Читает 16-битное число с плавающей точкой (IEEE 754) из начала отображения

## CONTENT

Доступ: public

Читает 16-битное число с плавающей точкой (IEEE 754) из начала отображения. Смещает отображение на 2 байта.

Возвращает:
* float - 32-битное представление декодированного 16-битного числа

# ::stappler::BytesViewTemplate<stappler::Endian>::readString()

## BRIEF

Читает строку с \0 на конце из отображения

## CONTENT

Доступ: public

Читает строку с \0 на конце из отображения. Смещает отображение на длину строки и терминирующий нуль (т.е.первым байтом отображения станет байт сразу после \0)

Возвращает:
* stappler::StringView - новое строковое отображеие

# ::stappler::BytesViewTemplate<stappler::Endian>::readString(size_t)

## BRIEF

Читает строку фиксированного размера из отображения

## CONTENT

Доступ: public

Читает строку фиксированного размера из отображения. Смещает отображение на длину строки.

Параметры:
* size_t - длина строки

Возвращает:
* stappler::StringView - новое строковое отображеие

# ::stappler::BytesViewTemplate<stappler::Endian>::readBytes<stappler::Endian>(size_t)

## BRIEF

Читает набор байт из отображения

## CONTENT

Доступ: public

Читает набор байт из отображения. Смещает текущее отображение на длину набора байт.

Параметры шаблона:
* stappler::Endian OtherEndianess - порядок байт для нового отображения

Параметры:
* size_t - число байт для чтения

Возвращает:
* BytesViewTemplate<OtherEndianess> - новое байтовое отображение

# ::stappler::BytesView

## BRIEF

Псевдоним для отображения с порядком байт исполняемого кода

## CONTENT

Псевдоним для отображения с порядком байт исполняемого кода

# ::stappler::BytesViewNetwork

## BRIEF

Псевдоним для отображения с сетевым порядком байт (Big endian)

## CONTENT

Псевдоним для отображения с сетевым порядком байт (Big endian)

# ::stappler::BytesViewHost

## BRIEF

Псевдоним для отображения с порядком байт исполняемого кода

## CONTENT

Псевдоним для отображения с порядком байт исполняемого кода


# ::stappler::compareDataRanges<typename>(uint8_t const*,size_t,uint8_t const*,size_t,Compare const&)

## BRIEF

Лексикографически сравнивает два набора байт в памяти

## CONTENT

Лексикографически сравнивает два набора байт в памяти

Параметры шаблона:
* typename Compare - функция сравнения

Параметры:
* uint8_t const* - первый набор байт
* size_t - размер первого набора байт
* uint8_t const* - второй набор байт
* size_t - размер второго набора байт
* Compare const& - функция сравнения

Возвращает:
* int - результат лексикографического сравнения

# ::stappler::operator==<stappler::Endian>(memory::PoolInterface::BytesType const&,BytesViewTemplate<Endianess> const&)

## BRIEF

Побайтово сравнивает отображение и контейнер

## CONTENT

Побайтово сравнивает отображение и контейнер

Параметры шаблона:
* stappler::Endian Endianess

Параметры:
* memory::PoolInterface::BytesType const&
* BytesViewTemplate<Endianess> const&

Возвращает:
* bool - true если содержимое совпадает

# ::stappler::operator==<stappler::Endian>(memory::StandartInterface::BytesType const&,BytesViewTemplate<Endianess> const&)

## BRIEF

Побайтово сравнивает отображение и контейнер

## CONTENT

Побайтово сравнивает отображение и контейнер

Параметры шаблона:
* stappler::Endian Endianess

Параметры:
* memory::StandartInterface::BytesType const&
* BytesViewTemplate<Endianess> const&

Возвращает:
* bool - true если содержимое совпадает

# ::stappler::operator==<stappler::Endian>(BytesViewTemplate<Endianess> const&,memory::PoolInterface::BytesType const&)

## BRIEF

Побайтово сравнивает отображение и контейнер

## CONTENT

Побайтово сравнивает отображение и контейнер

Параметры шаблона:
* stappler::Endian Endianess

Параметры:
* BytesViewTemplate<Endianess> const&
* memory::PoolInterface::BytesType const&

Возвращает:
* bool - true если содержимое совпадает

# ::stappler::operator==<stappler::Endian>(BytesViewTemplate<Endianess> const&,memory::StandartInterface::BytesType const&)

## BRIEF

Побайтово сравнивает отображение и контейнер

## CONTENT

Побайтово сравнивает отображение и контейнер

Параметры шаблона:
* stappler::Endian Endianess

Параметры:
* BytesViewTemplate<Endianess> const&
* memory::StandartInterface::BytesType const&

Возвращает:
* bool - true если содержимое совпадает

# ::stappler::operator!=<stappler::Endian>(memory::PoolInterface::BytesType const&,BytesViewTemplate<Endianess> const&)

## BRIEF

Побайтово сравнивает отображение и контейнер

## CONTENT

Побайтово сравнивает отображение и контейнер

Параметры шаблона:
* stappler::Endian Endianess

Параметры:
* memory::PoolInterface::BytesType const&
* BytesViewTemplate<Endianess> const&

Возвращает:
* bool - true если содержимое не совпадает

# ::stappler::operator!=<stappler::Endian>(memory::StandartInterface::BytesType const&,BytesViewTemplate<Endianess> const&)

## BRIEF

Побайтово сравнивает отображение и контейнер

## CONTENT

Побайтово сравнивает отображение и контейнер

Параметры шаблона:
* stappler::Endian Endianess

Параметры:
* memory::StandartInterface::BytesType const&
* BytesViewTemplate<Endianess> const&

Возвращает:
* bool - true если содержимое не совпадает

# ::stappler::operator!=<stappler::Endian>(BytesViewTemplate<Endianess> const&,memory::PoolInterface::BytesType const&)

## BRIEF

Побайтово сравнивает отображение и контейнер

## CONTENT

Побайтово сравнивает отображение и контейнер

Параметры шаблона:
* stappler::Endian Endianess

Параметры:
* BytesViewTemplate<Endianess> const&
* memory::PoolInterface::BytesType const&

Возвращает:
* bool - true если содержимое не совпадает

# ::stappler::operator!=<stappler::Endian>(BytesViewTemplate<Endianess> const&,memory::StandartInterface::BytesType const&)

## BRIEF

Побайтово сравнивает отображение и контейнер

## CONTENT

Побайтово сравнивает отображение и контейнер

Параметры шаблона:
* stappler::Endian Endianess

Параметры:
* BytesViewTemplate<Endianess> const&
* memory::StandartInterface::BytesType const&

Возвращает:
* bool - true если содержимое не совпадает

# ::stappler::operator<<stappler::Endian>(BytesViewTemplate<Endianess> const&,BytesViewTemplate<Endianess> const&)

## BRIEF

Лексикографически побайтово сравнивает отображение и контейнер

## CONTENT

Лексикографически побайтово сравнивает отображение и контейнер

Параметры шаблона:
* stappler::Endian Endianess

Параметры:
* BytesViewTemplate<Endianess> const&
* BytesViewTemplate<Endianess> const&

Возвращает:
* bool

# ::stappler::operator<<stappler::Endian>(memory::PoolInterface::BytesType const&,BytesViewTemplate<Endianess> const&)

## BRIEF

Лексикографически побайтово сравнивает отображение и контейнер

## CONTENT

Лексикографически побайтово сравнивает отображение и контейнер

Параметры шаблона:
* stappler::Endian Endianess

Параметры:
* memory::PoolInterface::BytesType const&
* BytesViewTemplate<Endianess> const&

Возвращает:
* bool

# ::stappler::operator<<stappler::Endian>(memory::StandartInterface::BytesType const&,BytesViewTemplate<Endianess> const&)

## BRIEF

Лексикографически побайтово сравнивает отображение и контейнер

## CONTENT

Лексикографически побайтово сравнивает отображение и контейнер

Параметры шаблона:
* stappler::Endian Endianess

Параметры:
* memory::StandartInterface::BytesType const&
* BytesViewTemplate<Endianess> const&

Возвращает:
* bool

# ::stappler::operator<<stappler::Endian>(BytesViewTemplate<Endianess> const&,memory::PoolInterface::BytesType const&)

## BRIEF

Лексикографически побайтово сравнивает отображение и контейнер

## CONTENT

Лексикографически побайтово сравнивает отображение и контейнер

Параметры шаблона:
* stappler::Endian Endianess

Параметры:
* BytesViewTemplate<Endianess> const&
* memory::PoolInterface::BytesType const&

Возвращает:
* bool

# ::stappler::operator<<stappler::Endian>(BytesViewTemplate<Endianess> const&,memory::StandartInterface::BytesType const&)

## BRIEF

Лексикографически побайтово сравнивает отображение и контейнер

## CONTENT

Лексикографически побайтово сравнивает отображение и контейнер

Параметры шаблона:
* stappler::Endian Endianess

Параметры:
* BytesViewTemplate<Endianess> const&
* memory::StandartInterface::BytesType const&

Возвращает:
* bool

# ::stappler::operator<=<stappler::Endian>(BytesViewTemplate<Endianess> const&,BytesViewTemplate<Endianess> const&)

## BRIEF

Лексикографически побайтово сравнивает отображение и контейнер

## CONTENT

Лексикографически побайтово сравнивает отображение и контейнер

Параметры шаблона:
* stappler::Endian Endianess

Параметры:
* BytesViewTemplate<Endianess> const&
* BytesViewTemplate<Endianess> const&

Возвращает:
* bool

# ::stappler::operator<=<stappler::Endian>(memory::PoolInterface::BytesType const&,BytesViewTemplate<Endianess> const&)

## BRIEF

Лексикографически побайтово сравнивает отображение и контейнер

## CONTENT

Лексикографически побайтово сравнивает отображение и контейнер

Параметры шаблона:
* stappler::Endian Endianess

Параметры:
* memory::PoolInterface::BytesType const&
* BytesViewTemplate<Endianess> const&

Возвращает:
* bool

# ::stappler::operator<=<stappler::Endian>(memory::StandartInterface::BytesType const&,BytesViewTemplate<Endianess> const&)

## BRIEF

Лексикографически побайтово сравнивает отображение и контейнер

## CONTENT

Лексикографически побайтово сравнивает отображение и контейнер

Параметры шаблона:
* stappler::Endian Endianess

Параметры:
* memory::StandartInterface::BytesType const&
* BytesViewTemplate<Endianess> const&

Возвращает:
* bool

# ::stappler::operator<=<stappler::Endian>(BytesViewTemplate<Endianess> const&,memory::PoolInterface::BytesType const&)

## BRIEF

Лексикографически побайтово сравнивает отображение и контейнер

## CONTENT

Лексикографически побайтово сравнивает отображение и контейнер

Параметры шаблона:
* stappler::Endian Endianess

Параметры:
* BytesViewTemplate<Endianess> const&
* memory::PoolInterface::BytesType const&

Возвращает:
* bool

# ::stappler::operator<=<stappler::Endian>(BytesViewTemplate<Endianess> const&,memory::StandartInterface::BytesType const&)

## BRIEF

Лексикографически побайтово сравнивает отображение и контейнер

## CONTENT

Лексикографически побайтово сравнивает отображение и контейнер

Параметры шаблона:
* stappler::Endian Endianess

Параметры:
* BytesViewTemplate<Endianess> const&
* memory::StandartInterface::BytesType const&

Возвращает:
* bool

# ::stappler::operator><stappler::Endian>(BytesViewTemplate<Endianess> const&,BytesViewTemplate<Endianess> const&)

## BRIEF

Лексикографически побайтово сравнивает отображение и контейнер

## CONTENT

Лексикографически побайтово сравнивает отображение и контейнер

Параметры шаблона:
* stappler::Endian Endianess

Параметры:
* BytesViewTemplate<Endianess> const&
* BytesViewTemplate<Endianess> const&

Возвращает:
* bool

# ::stappler::operator><stappler::Endian>(memory::PoolInterface::BytesType const&,BytesViewTemplate<Endianess> const&)

## BRIEF

Лексикографически побайтово сравнивает отображение и контейнер

## CONTENT

Лексикографически побайтово сравнивает отображение и контейнер

Параметры шаблона:
* stappler::Endian Endianess

Параметры:
* memory::PoolInterface::BytesType const&
* BytesViewTemplate<Endianess> const&

Возвращает:
* bool

# ::stappler::operator><stappler::Endian>(memory::StandartInterface::BytesType const&,BytesViewTemplate<Endianess> const&)

## BRIEF

Лексикографически побайтово сравнивает отображение и контейнер

## CONTENT

Лексикографически побайтово сравнивает отображение и контейнер

Параметры шаблона:
* stappler::Endian Endianess

Параметры:
* memory::StandartInterface::BytesType const&
* BytesViewTemplate<Endianess> const&

Возвращает:
* bool

# ::stappler::operator><stappler::Endian>(BytesViewTemplate<Endianess> const&,memory::PoolInterface::BytesType const&)

## BRIEF

Лексикографически побайтово сравнивает отображение и контейнер

## CONTENT

Лексикографически побайтово сравнивает отображение и контейнер

Параметры шаблона:
* stappler::Endian Endianess

Параметры:
* BytesViewTemplate<Endianess> const&
* memory::PoolInterface::BytesType const&

Возвращает:
* bool

# ::stappler::operator><stappler::Endian>(BytesViewTemplate<Endianess> const&,memory::StandartInterface::BytesType const&)

## BRIEF

Лексикографически побайтово сравнивает отображение и контейнер

## CONTENT

Лексикографически побайтово сравнивает отображение и контейнер

Параметры шаблона:
* stappler::Endian Endianess

Параметры:
* BytesViewTemplate<Endianess> const&
* memory::StandartInterface::BytesType const&

Возвращает:
* bool

# ::stappler::operator>=<stappler::Endian>(BytesViewTemplate<Endianess> const&,BytesViewTemplate<Endianess> const&)

## BRIEF

Лексикографически побайтово сравнивает отображение и контейнер

## CONTENT

Лексикографически побайтово сравнивает отображение и контейнер

Параметры шаблона:
* stappler::Endian Endianess

Параметры:
* BytesViewTemplate<Endianess> const&
* BytesViewTemplate<Endianess> const&

Возвращает:
* bool

# ::stappler::operator>=<stappler::Endian>(memory::PoolInterface::BytesType const&,BytesViewTemplate<Endianess> const&)

## BRIEF

Лексикографически побайтово сравнивает отображение и контейнер

## CONTENT

Лексикографически побайтово сравнивает отображение и контейнер

Параметры шаблона:
* stappler::Endian Endianess

Параметры:
* memory::PoolInterface::BytesType const&
* BytesViewTemplate<Endianess> const&

Возвращает:
* bool

# ::stappler::operator>=<stappler::Endian>(memory::StandartInterface::BytesType const&,BytesViewTemplate<Endianess> const&)

## BRIEF

Лексикографически побайтово сравнивает отображение и контейнер

## CONTENT

Лексикографически побайтово сравнивает отображение и контейнер

Параметры шаблона:
* stappler::Endian Endianess

Параметры:
* memory::StandartInterface::BytesType const&
* BytesViewTemplate<Endianess> const&

Возвращает:
* bool

# ::stappler::operator>=<stappler::Endian>(BytesViewTemplate<Endianess> const&,memory::PoolInterface::BytesType const&)

## BRIEF

Лексикографически побайтово сравнивает отображение и контейнер

## CONTENT

Лексикографически побайтово сравнивает отображение и контейнер

Параметры шаблона:
* stappler::Endian Endianess

Параметры:
* BytesViewTemplate<Endianess> const&
* memory::PoolInterface::BytesType const&

Возвращает:
* bool

# ::stappler::operator>=<stappler::Endian>(BytesViewTemplate<Endianess> const&,memory::StandartInterface::BytesType const&)

## BRIEF

Лексикографически побайтово сравнивает отображение и контейнер

## CONTENT

Лексикографически побайтово сравнивает отображение и контейнер

Параметры шаблона:
* stappler::Endian Endianess

Параметры:
* BytesViewTemplate<Endianess> const&
* memory::StandartInterface::BytesType const&

Возвращает:
* bool

# ::stappler::operator==<stappler::Endian,size_t>(std::array<uint8_t, Size> const&,BytesViewTemplate<Endianess> const&)

## BRIEF

Лексикографически побайтово сравнивает отображение и контейнер

## CONTENT

Лексикографически побайтово сравнивает отображение и контейнер

Параметры шаблона:
* stappler::Endian Endianess
* size_t Size

Параметры:
* std::array<uint8_t, Size> const&
* BytesViewTemplate<Endianess> const&

Возвращает:
* bool

# ::stappler::operator==<stappler::Endian,size_t>(BytesViewTemplate<Endianess> const&,std::array<uint8_t, Size> const&)

## BRIEF

Лексикографически побайтово сравнивает отображение и контейнер

## CONTENT

Лексикографически побайтово сравнивает отображение и контейнер

Параметры шаблона:
* stappler::Endian Endianess
* size_t Size

Параметры:
* BytesViewTemplate<Endianess> const&
* std::array<uint8_t, Size> const&

Возвращает:
* bool

# ::stappler::operator!=<stappler::Endian,size_t>(std::array<uint8_t, Size> const&,BytesViewTemplate<Endianess> const&)

## BRIEF

Лексикографически побайтово сравнивает отображение и контейнер

## CONTENT

Лексикографически побайтово сравнивает отображение и контейнер

Параметры шаблона:
* stappler::Endian Endianess
* size_t Size

Параметры:
* std::array<uint8_t, Size> const&
* BytesViewTemplate<Endianess> const&

Возвращает:
* bool

# ::stappler::operator!=<stappler::Endian,size_t>(BytesViewTemplate<Endianess> const&,std::array<uint8_t, Size> const&)

## BRIEF

Лексикографически побайтово сравнивает отображение и контейнер

## CONTENT

Лексикографически побайтово сравнивает отображение и контейнер

Параметры шаблона:
* stappler::Endian Endianess
* size_t Size

Параметры:
* BytesViewTemplate<Endianess> const&
* std::array<uint8_t, Size> const&

Возвращает:
* bool

