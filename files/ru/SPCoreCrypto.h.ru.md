Title: SPCoreCrypto.h


# STAPPLER_CORE_STRING_SPCRYPTO_H_

## BRIEF

Заголовок реализации криптографических хешей: SHA-1, SHA-2, ГОСТ Р 34.11 2012 / ГОСТ 34.11 2018 "Стрибог"

## CONTENT

Заголовок реализации криптографических хешей: SHA-1, SHA-2, ГОСТ Р 34.11 2012 / ГОСТ 34.11 2018 "Стрибог"


# ::stappler::CoderSource

## BRIEF

Вспомогательный тип источника данных для кодирования

## CONTENT

Вспомогательный тип источника данных для кодирования. Реализует интерфейс производителя общего ввода-вывода поверх данных в памяти, которыми не владеет.


# ::stappler::CoderSource::CoderSource(uint8_t const*,size_t)

## BRIEF

Конструктор из данных

## CONTENT

Конструктор из данных

Параметры:
* uint8_t const* - указатель на данные
* size_t - размер в байтах


# ::stappler::CoderSource::CoderSource(char const*,size_t)

## BRIEF

Конструктор из данных

## CONTENT

Конструктор из данных

Параметры:
* char const* - указатель на данные
* size_t - размер в байтах


# ::stappler::CoderSource::CoderSource(char const*)

## BRIEF

Конструктор из С-строки

## CONTENT

Конструктор из С-строки

Параметры:
* char const*


# ::stappler::CoderSource::CoderSource(stappler::StringView const&)

## BRIEF

Конструктор из строкового отображения

## CONTENT

Конструктор из строкового отображения

Параметры:
* stappler::StringView const&


# ::stappler::CoderSource::CoderSource(typename memory::PoolInterface::BytesType const&)

## BRIEF

Конструктор из байтовой строки

## CONTENT

Конструктор из байтовой строки

Параметры:
* typename memory::PoolInterface::BytesType const&


# ::stappler::CoderSource::CoderSource(typename memory::StandartInterface::BytesType const&)

## BRIEF

Конструктор из байтовой строки

## CONTENT

Конструктор из байтовой строки

Параметры:
* typename memory::StandartInterface::BytesType const&


# ::stappler::CoderSource::CoderSource(typename memory::PoolInterface::StringType const&)

## BRIEF

Конструктор из символьной строки

## CONTENT

Конструктор из символьной строки

Параметры:
* typename memory::PoolInterface::StringType const&


# ::stappler::CoderSource::CoderSource(typename memory::StandartInterface::StringType const&)

## BRIEF

Конструктор из символьной строки

## CONTENT

Конструктор из символьной строки

Параметры:
* typename memory::StandartInterface::StringType const&


# ::stappler::CoderSource::CoderSource<stappler::Endian>(BytesViewTemplate<Order> const&)

## BRIEF

Конструктор из байтового отображения

## CONTENT

Конструктор из байтового отображения

Параметры шаблона:
* stappler::Endian Order

Параметры:
* BytesViewTemplate<Order> const&


# ::stappler::CoderSource::CoderSource(BytesReader<uint8_t> const&)

## BRIEF

Конструктор из байтового отображения

## CONTENT

Конструктор из байтового отображения

Параметры:
* BytesReader<uint8_t> const&


# ::stappler::CoderSource::CoderSource(BytesReader<char> const&)

## BRIEF

Конструктор из байтового отображения

## CONTENT

Конструктор из байтового отображения

Параметры:
* BytesReader<char> const&


# ::stappler::CoderSource::CoderSource<size_t>(std::array<uint8_t, Size> const&)

## BRIEF

Конструктор из статического массива

## CONTENT

Конструктор из статического массива

Параметры шаблона:
* size_t Size - размер массива

Параметры:
* std::array<uint8_t, Size> const&


# ::stappler::CoderSource::CoderSource()

## BRIEF

Конструктор по умолчанию

## CONTENT

Конструктор по умолчанию, создаёт пустой объект


# ::stappler::CoderSource::_data

## BRIEF

Внутренние данные

## CONTENT

Внутренние данные

Тип: BytesViewTemplate<Endian::Network>


# ::stappler::CoderSource::_offset

## BRIEF

Текущий указатель для чтения

## CONTENT

Текущий указатель для чтения

Тип: size_t


# ::stappler::CoderSource::CoderSource(stappler::CoderSource const&)

## BRIEF

Запрет копирования

## CONTENT

Запрет копирования. Дизайн функций предполагает, что этот объект - единственный, представляющий источник данных. Копирование или перемещение может сломать эту логику.

Параметры:
* stappler::CoderSource const&


# ::stappler::CoderSource::CoderSource(stappler::CoderSource&&)

## BRIEF

Запрет перемещения

## CONTENT

Запрет перемещения. Дизайн функций предполагает, что этот объект - единственный, представляющий источник данных. Копирование или перемещение может сломать эту логику.

Параметры:
* stappler::CoderSource&&


# ::stappler::CoderSource::operator=(stappler::CoderSource const&)

## BRIEF

Запрет копирования

## CONTENT

Запрет копирования. Дизайн функций предполагает, что этот объект - единственный, представляющий источник данных. Копирование или перемещение может сломать эту логику.

Параметры:
* stappler::CoderSource const&

Возвращает:
* stappler::CoderSource&

# ::stappler::CoderSource::operator=(stappler::CoderSource&&)

## BRIEF

Запрет перемещения

## CONTENT

Запрет перемещения. Дизайн функций предполагает, что этот объект - единственный, представляющий источник данных. Копирование или перемещение может сломать эту логику.

Параметры:
* stappler::CoderSource&&

Возвращает:
* stappler::CoderSource&

# ::stappler::CoderSource::data() const

## BRIEF

Возвращет указатель на данные

## CONTENT

Возвращет указатель на данные

Возвращает:
* uint8_t const*

# ::stappler::CoderSource::size() const

## BRIEF

Возвращет размер блока данных

## CONTENT

Возвращет размер блока данных

Возвращает:
* size_t

# ::stappler::CoderSource::empty() const

## BRIEF

Проверяет на пустоту

## CONTENT

Проверяет на пустоту

Возвращает:
* bool - true если объект пуст и не имеет хранимых данных

# ::stappler::CoderSource::view() const

## BRIEF

Возвращает данные в виде отображения

## CONTENT

Возвращает данные в виде отображения

Возвращает:
* BytesViewTemplate<Endian::Network>

# ::stappler::CoderSource::operator[](size_t) const

## BRIEF

Получает доступ к отдельному байту по индексу

## CONTENT

Получает доступ к отдельному байту по индексу. Если индекс больше размера контейнера - поведение не определено.

Параметры:
* size_t

Возвращает:
* uint8_t

# ::stappler::CoderSource::read(uint8_t*,size_t)

## BRIEF

Читает из объекта в буфер с текущей позиции

## CONTENT

Параметры:
* uint8_t* - буфер
* size_t - размер буфера

Возвращает:
* size_t - реальное число записанных в буфер байт

# ::stappler::CoderSource::seek(int64_t,io::Seek)

## BRIEF

Смещает текущую позицию

## CONTENT

Смещает текущую позицию

Параметры:
* int64_t
* io::Seek

Возвращает:
* size_t

# ::stappler::CoderSource::tell() const

## BRIEF

Возвращает текущую позицию от начала

## CONTENT

Возвращает текущую позицию от начала

Возвращает:
* size_t

# ::stappler::crypto::HMAC_I_PAD

## BRIEF

Значение маски для входящего значения HMAC

## CONTENT

Значение маски для входящего значения HMAC

Тип: uint8_t const


# ::stappler::crypto::HMAC_O_PAD

## BRIEF

Значение маски для исходящего значения HMAC

## CONTENT

Значение маски для исходящего значения HMAC

Тип: uint8_t const


# ::stappler::crypto::SP_SECURE_KEY

## BRIEF

Соль для хэша по умолчанию

## CONTENT

Соль для хэша по умолчанию

Тип: auto const


# ::stappler::crypto::Sha512

## BRIEF

Структура для вычисления SHA-512

## CONTENT

Структура для вычисления SHA-512


# ::stappler::crypto::Sha512::_Ctx

## BRIEF

Контекст вычисления SHA-512

## CONTENT

Контекст вычисления SHA-512


# ::stappler::crypto::Sha512::_Ctx::length

## BRIEF

Внутреннее значение контекста

## CONTENT

Внутреннее значение контекста

Тип: uint64_t


# ::stappler::crypto::Sha512::_Ctx::state

## BRIEF

Внутреннее значение контекста

## CONTENT

Внутреннее значение контекста

Тип: uint64_t[8]


# ::stappler::crypto::Sha512::_Ctx::curlen

## BRIEF

Внутреннее значение контекста

## CONTENT

Внутреннее значение контекста

Тип: uint32_t


# ::stappler::crypto::Sha512::_Ctx::buf

## BRIEF

Внутреннее значение контекста

## CONTENT

Внутреннее значение контекста

Тип: uint8_t[128]


# ::stappler::crypto::Sha512::Length

## BRIEF

Длина результата вычисления

## CONTENT

Длина результата вычисления

Тип: uint32_t const


# ::stappler::crypto::Sha512::Buf

## BRIEF

Буфер для записи результата

## CONTENT

Буфер для записи результата


# ::stappler::crypto::Sha512::make(stappler::CoderSource const&,stappler::StringView const&)

## BRIEF

Вычисляет хэш с использованием криптографической соли

## CONTENT

Вычисляет хэш с использованием криптографической соли

Параметры:
* stappler::CoderSource const& - данные для хэша
* stappler::StringView const& - соль

Возвращает:
* Buf

# ::stappler::crypto::Sha512::hmac(stappler::CoderSource const&,stappler::CoderSource const&)

## BRIEF

Вычисляет HMAC с использованием хэша

## CONTENT

Вычисляет HMAC с использованием хэша

Параметры:
* stappler::CoderSource const& - данные для хэша
* stappler::CoderSource const& - ключ

Возвращает:
* Buf

# ::stappler::crypto::Sha512::perform<typename>(Args &&...)

## BRIEF

Вычисляет хэш от одного и более значений

## CONTENT

Вычисляет хэш от одного и более значений

Параметры шаблона:
* typename Args

Параметры:
* Args &&... - аргументы для вычисления хэша

Возвращает:
* Buf

# ::stappler::crypto::Sha512::Sha512()

## BRIEF

Инициализирует контекст вычисления

## CONTENT

Инициализирует контекст вычисления


# ::stappler::crypto::Sha512::init()

## BRIEF

Реинициализирует контекст вычисления

## CONTENT

Реинициализирует контекст вычисления

Возвращает:
* stappler::crypto::Sha512&

# ::stappler::crypto::Sha512::update(uint8_t const*,size_t)

## BRIEF

Добавляет данные, вычисляет хэш

## CONTENT

Добавляет данные, вычисляет хэш

Параметры:
* uint8_t const* - указатель на данные
* size_t - длина блока данных в байтах

Возвращает:
* stappler::crypto::Sha512&

# ::stappler::crypto::Sha512::update(stappler::CoderSource const&)

## BRIEF

Добавляет данные, вычисляет хэш

## CONTENT

Добавляет данные, вычисляет хэш

Параметры:
* stappler::CoderSource const&

Возвращает:
* stappler::crypto::Sha512&

# ::stappler::crypto::Sha512::_update<typename,typename>(T&&,Args &&...)

## BRIEF

Добавляет один или более аргумент с данными

## CONTENT

Параметры шаблона:
* typename T
* typename Args

Параметры:
* T&& - текущий аргумент
* Args &&... - остальные аргументы


# ::stappler::crypto::Sha512::_update<typename>(T&&)

## BRIEF

Добавляет данные, вычисляет хэш

## CONTENT

Добавляет данные, вычисляет хэш

Параметры шаблона:
* typename T

Параметры:
* T&& - текущий аргумент


# ::stappler::crypto::Sha512::final()

## BRIEF

Финализирует контекст, возвращает результат

## CONTENT

Финализирует контекст, возвращает результат

Возвращает:
* Buf

# ::stappler::crypto::Sha512::final(uint8_t*)

## BRIEF

Финализирует контекст, завписывает результат в предоставленный буфер

## CONTENT

Финализирует контекст, завписывает результат в предоставленный буфер. Буфер должен вмещать достаточно данных, иначе поведение не определено.

Параметры:
* uint8_t* - указатель на буфер


# ::stappler::crypto::Sha512::ctx

## BRIEF

Текущий контекст хэша

## CONTENT

Текущий контекст хэша

Тип: stappler::crypto::Sha512::_Ctx


# ::stappler::crypto::Sha256

## BRIEF

Структура для вычисления SHA-256

## CONTENT

Структура для вычисления SHA-256


# ::stappler::crypto::Sha256::_Ctx

## BRIEF

Контекст вычисления SHA-256

## CONTENT

Контекст вычисления SHA-256


# ::stappler::crypto::Sha256::_Ctx::length

## BRIEF

Внутреннее значение контекста

## CONTENT

Внутреннее значение контекста

Тип: uint64_t


# ::stappler::crypto::Sha256::_Ctx::state

## BRIEF

Внутреннее значение контекста

## CONTENT

Внутреннее значение контекста

Тип: uint64_t[8]


# ::stappler::crypto::Sha256::_Ctx::curlen

## BRIEF

Внутреннее значение контекста

## CONTENT

Внутреннее значение контекста

Тип: uint32_t


# ::stappler::crypto::Sha256::_Ctx::buf

## BRIEF

Внутреннее значение контекста

## CONTENT

Внутреннее значение контекста

Тип: uint8_t[64]


# ::stappler::crypto::Sha256::Length

## BRIEF

Длина результата вычисления

## CONTENT

Длина результата вычисления

Тип: uint32_t const


# ::stappler::crypto::Sha256::Buf

## BRIEF

Буфер для записи результата

## CONTENT

Буфер для записи результата


# ::stappler::crypto::Sha256::make(stappler::CoderSource const&,stappler::StringView const&)

## BRIEF

Вычисляет хэш с использованием криптографической соли

## CONTENT

Вычисляет хэш с использованием криптографической соли

Параметры:
* stappler::CoderSource const& - данные для хэша
* stappler::StringView const& - соль

Возвращает:
* Buf

# ::stappler::crypto::Sha256::hmac(stappler::CoderSource const&,stappler::CoderSource const&)

## BRIEF

Вычисляет HMAC с использованием хэша

## CONTENT

Вычисляет HMAC с использованием хэша

Параметры:
* stappler::CoderSource const& - данные для хэша
* stappler::CoderSource const& - ключ

Возвращает:
* Buf

# ::stappler::crypto::Sha256::perform<typename>(Args &&...)

## BRIEF

Вычисляет хэш от одного и более значений

## CONTENT

Вычисляет хэш от одного и более значений

Параметры шаблона:
* typename Args

Параметры:
* Args &&... - аргументы для вычисления хэша

Возвращает:
* Buf

# ::stappler::crypto::Sha256::Sha256()

## BRIEF

Инициализирует контекст вычисления

## CONTENT

Инициализирует контекст вычисления


# ::stappler::crypto::Sha256::init()

## BRIEF

Реинициализирует контекст вычисления

## CONTENT

Реинициализирует контекст вычисления

Возвращает:
* stappler::crypto::Sha256&

# ::stappler::crypto::Sha256::update(uint8_t const*,size_t)

## BRIEF

Добавляет данные, вычисляет хэш

## CONTENT

Добавляет данные, вычисляет хэш

Параметры:
* uint8_t const* - указатель на данные
* size_t - длина блока данных в байтах

Возвращает:
* stappler::crypto::Sha256&

# ::stappler::crypto::Sha256::update(stappler::CoderSource const&)

## BRIEF

Добавляет данные, вычисляет хэш

## CONTENT

Добавляет данные, вычисляет хэш

Параметры:
* stappler::CoderSource const&

Возвращает:
* stappler::crypto::Sha256&

# ::stappler::crypto::Sha256::_update<typename,typename>(T&&,Args &&...)

## BRIEF

Добавляет один или более аргумент с данными

## CONTENT

Параметры шаблона:
* typename T
* typename Args

Параметры:
* T&& - текущий аргумент
* Args &&... - остальные аргументы


# ::stappler::crypto::Sha256::_update<typename>(T&&)

## BRIEF

Добавляет данные, вычисляет хэш

## CONTENT

Добавляет данные, вычисляет хэш

Параметры шаблона:
* typename T

Параметры:
* T&& - текущий аргумент


# ::stappler::crypto::Sha256::final()

## BRIEF

Финализирует контекст, возвращает результат

## CONTENT

Финализирует контекст, возвращает результат

Возвращает:
* Buf

# ::stappler::crypto::Sha256::final(uint8_t*)

## BRIEF

Финализирует контекст, завписывает результат в предоставленный буфер

## CONTENT

Финализирует контекст, завписывает результат в предоставленный буфер. Буфер должен вмещать достаточно данных, иначе поведение не определено.

Параметры:
* uint8_t* - указатель на буфер


# ::stappler::crypto::Sha256::ctx

## BRIEF

Текущий контекст хэша

## CONTENT

Текущий контекст хэша

Тип: stappler::crypto::Sha256::_Ctx



# ::stappler::io::ProducerTraits<CoderSource>::ProducerTraits<CoderSource>

## BRIEF

Реализация общего интерфейса ввода-вывода в роли производителя для CoderSource

## CONTENT

Реализация общего интерфейса ввода-вывода в роли производителя для CoderSource


# ::stappler::io::ProducerTraits<CoderSource>::type

## BRIEF

Базовый тип

## CONTENT

Базовый тип


# ::stappler::io::ProducerTraits<CoderSource>::ReadFn(void*,uint8_t*,size_t)

## BRIEF

Функция чтения

## CONTENT

Функция чтения

Параметры:
* void*
* uint8_t*
* size_t

Возвращает:
* size_t

# ::stappler::io::ProducerTraits<CoderSource>::SeekFn(void*,int64_t,stappler::io::Seek)

## BRIEF

Функция перемещения

## CONTENT

Функция перемещения

Параметры:
* void*
* int64_t
* stappler::io::Seek

Возвращает:
* size_t

# ::stappler::io::ProducerTraits<CoderSource>::TellFn(void*)

## BRIEF

Функция возврата позиции

## CONTENT

Функция возврата позиции

Параметры:
* void*

Возвращает:
* size_t

# ::stappler::crypto::HMAC_I_PAD

## BRIEF

## CONTENT

Тип: uint8_t const


# ::stappler::crypto::HMAC_O_PAD

## BRIEF

## CONTENT

Тип: uint8_t const


# ::stappler::crypto::SP_SECURE_KEY

## BRIEF

## CONTENT

Тип: auto const


# ::stappler::crypto::Sha1

## BRIEF

Класс для вычисления хэша SHA-1

## CONTENT

Класс для вычисления хэша SHA-1. Этот хэш считается устаревшим и небезопасным, но используется внутри многих протоколов.


# ::stappler::crypto::Sha1::_Ctx

## BRIEF

Структура контекста вычисления

## CONTENT

Структура контекста вычисления

# ::stappler::crypto::Sha1::_Ctx::digest

## BRIEF

Параметр хэша

## CONTENT

Параметр хэша

Тип: uint32_t[5]


# ::stappler::crypto::Sha1::_Ctx::count_lo

## BRIEF

Параметр хэша

## CONTENT

Параметр хэша

Тип: uint32_t


# ::stappler::crypto::Sha1::_Ctx::count_hi

## BRIEF

Параметр хэша

## CONTENT

Параметр хэша

Тип: uint32_t


# ::stappler::crypto::Sha1::_Ctx::data

## BRIEF

Текущие данные хэша

## CONTENT

Текущие данные хэша

Тип: uint32_t[16]


# ::stappler::crypto::Sha1::_Ctx::local

## BRIEF

Параметр хэша

## CONTENT

Параметр хэша

Тип: int32_t


# ::stappler::crypto::Sha1::Length

## BRIEF

Длина результата хэша

## CONTENT

Длина результата хэша

Тип: uint32_t const


# ::stappler::crypto::Sha1::Buf

## BRIEF

Буфер результата хэша

## CONTENT

Буфер результата хэша


# ::stappler::crypto::Sha1::make(stappler::CoderSource const&,stappler::StringView const&)

## BRIEF

Вычисляет хэш с применением соли за один вызов

## CONTENT

Вычисляет хэш с применением соли за один вызов

Параметры:
* stappler::CoderSource const& - данные для хэширования
* stappler::StringView const& - соль для хэширования

Возвращает:
* Buf

# ::stappler::crypto::Sha1::hmac(stappler::CoderSource const&,stappler::CoderSource const&)

## BRIEF

Вычисляет HMAC для SHA-1

## CONTENT

Вычисляет HMAC для SHA-1

Параметры:
* stappler::CoderSource const& - данные для подписи
* stappler::CoderSource const& - ключ подписи

Возвращает:
* Buf

# ::stappler::crypto::Sha1::perform<typename>(Args &&...)

## BRIEF

Вычисляет хэш от аргументов

## CONTENT

Вычисляет хэш от аргументов. В качеств еаргументов должны быть текстовые и байтовые строки.

Параметры шаблона:
* typename Args

Параметры:
* Args &&...

Возвращает:
* Buf

# ::stappler::crypto::Sha1::Sha1()

## BRIEF

Инициализирует контекст хэша

## CONTENT

Инициализирует контекст хэша


# ::stappler::crypto::Sha1::init()

## BRIEF

Реинициализирует контекст хэша

## CONTENT

Реинициализирует контекст хэша

Возвращает:
* stappler::crypto::Sha1&

# ::stappler::crypto::Sha1::update(uint8_t const*,size_t)

## BRIEF

Добавляет данные к хэшу

## CONTENT

Добавляет данные к хэшу

Параметры:
* uint8_t const* - указатель на буфер
* size_t - длина в байтах

Возвращает:
* stappler::crypto::Sha1&

# ::stappler::crypto::Sha1::update(stappler::CoderSource const&)

## BRIEF

Добавляет данные к хэшу

## CONTENT

Добавляет данные к хэшу

Параметры:
* stappler::CoderSource const& - данные

Возвращает:
* stappler::crypto::Sha1&

# ::stappler::crypto::Sha1::_update<typename,typename>(T&&,Args &&...)

## BRIEF

Служебная функция добавления данных к хэшу

## CONTENT

Служебная функция добавления данных к хэшу

Параметры шаблона:
* typename T
* typename Args

Параметры:
* T&&
* Args &&...


# ::stappler::crypto::Sha1::_update<typename>(T&&)

## BRIEF

Служебная функция добавления данных к хэшу

## CONTENT

Служебная функция добавления данных к хэшу

Параметры шаблона:
* typename T

Параметры:
* T&&


# ::stappler::crypto::Sha1::final()

## BRIEF

Завершает вычисление хэша

## CONTENT

Завершает вычисление хэша

Возвращает:
* Buf

# ::stappler::crypto::Sha1::final(uint8_t*)

## BRIEF

Завершает вычисление хэша и записывает в буфер

## CONTENT

Завершает вычисление хэша и записывает в буфер, буфер должен быть достаточного размера

Параметры:
* uint8_t*


# ::stappler::crypto::Sha1::ctx

## BRIEF

Контекст вычисления хэша

## CONTENT

Контекст вычисления хэша

Тип: stappler::crypto::Sha1::_Ctx


# ::stappler::crypto::uint512_u

## BRIEF

512-битное целое в виде блока

## CONTENT

512-битное целое в виде блока

# ::stappler::crypto::uint512_u::QWORD

## BRIEF

Представление в виде 64-битных чисел

## CONTENT

Представление в виде 64-битных чисел

Тип: unsigned long long[8]


# ::stappler::crypto::uint512_u::B

## BRIEF

Представление в виде массива байт

## CONTENT

Представление в виде массива байт

Тип: unsigned char[64]


# ::stappler::crypto::Gost3411_Ctx

## BRIEF

Рабочий контекст ГОСТ 34.11

## CONTENT

Рабочий контекст ГОСТ 34.11


# ::stappler::crypto::Gost3411_Ctx::buffer

## BRIEF

Базовый буфер хэша

## CONTENT

Базовый буфер хэша

Тип: stappler::crypto::uint512_u


# ::stappler::crypto::Gost3411_Ctx::h

## BRIEF

Значение h

## CONTENT

Значение h

Тип: stappler::crypto::uint512_u


# ::stappler::crypto::Gost3411_Ctx::N

## BRIEF

Значение N

## CONTENT

Значение N

Тип: stappler::crypto::uint512_u


# ::stappler::crypto::Gost3411_Ctx::Sigma

## BRIEF

Значение Sigma

## CONTENT

Значение Sigma

Тип: stappler::crypto::uint512_u


# ::stappler::crypto::Gost3411_Ctx::bufsize

## BRIEF

Заполненность буфера

## CONTENT

Заполненность буфера

Тип: size_t


# ::stappler::crypto::Gost3411_Ctx::digest_size

## BRIEF

Запрошенный размер хэша

## CONTENT

Запрошенный размер хэша

Тип: unsigned int


# ::stappler::crypto::Gost3411_512

## BRIEF

Контекст ГОСТ 34.11 512-бит

## CONTENT

Контекст ГОСТ 34.11 512-бит

# ::stappler::crypto::Gost3411_512::_Ctx

## BRIEF

Тип рабочего контекста

## CONTENT

Тип рабочего контекста


# ::stappler::crypto::Gost3411_512::Length

## BRIEF

Длина результата функции

## CONTENT

Длина результата функции

Тип: uint32_t const


# ::stappler::crypto::Gost3411_512::Buf

## BRIEF

Тип результата функции

## CONTENT

Тип результата функции

# ::stappler::crypto::Gost3411_512::perform<typename>(Args &&...)

## BRIEF

Сокращение для разового вызова хэша

## CONTENT

Сокращение для разового вызова хэша. Инициализирует хэш, последовательно обрабатывает все аргументы, возвращает результат.

Параметры шаблона:
* typename Args - набор аргументов произвольной длины

Параметры:
* Args &&... - набор аргументов произвольной длины

Возвращает:
* Buf - результат хэща

# ::stappler::crypto::Gost3411_512::make(stappler::CoderSource const&,stappler::StringView const&)

## BRIEF

Хэширует данные с использованием криптографической соли

## CONTENT

Хэширует данные с использованием криптографической соли

Параметры:
* stappler::CoderSource const& - исходные данные
* stappler::StringView const& - криптографическая соль

Возвращает:
* Buf

# ::stappler::crypto::Gost3411_512::hmac(stappler::CoderSource const&,stappler::CoderSource const&)

## BRIEF

Вычисляет HMAC на основе хэша

## CONTENT

Вычисляет HMAC на основе хэша

Параметры:
* stappler::CoderSource const& - данные для подписи
* stappler::CoderSource const& - ключ подписи

Возвращает:
* Buf

# ::stappler::crypto::Gost3411_512::Gost3411_512()

## BRIEF

Инициализирует пустой контекст

## CONTENT

Инициализирует пустой контекст

# ::stappler::crypto::Gost3411_512::init()

## BRIEF

Реинициализирует контекст

## CONTENT

Реинициализирует контекст

Возвращает:
* stappler::crypto::Gost3411_512&

# ::stappler::crypto::Gost3411_512::update(uint8_t const*,size_t)

## BRIEF

Добавляет данные в контекст, вычисляет хэш

## CONTENT

Добавляет данные в контекст, вычисляет хэш

Параметры:
* uint8_t const*
* size_t

Возвращает:
* stappler::crypto::Gost3411_512&

# ::stappler::crypto::Gost3411_512::update(stappler::CoderSource const&)

## BRIEF

Добавляет данные в контекст, вычисляет хэш

## CONTENT

Добавляет данные в контекст, вычисляет хэш

Параметры:
* stappler::CoderSource const&

Возвращает:
* stappler::crypto::Gost3411_512&

# ::stappler::crypto::Gost3411_512::_update<typename,typename>(T&&,Args &&...)

## BRIEF

Добавляет данные в контекст, вычисляет хэш

## CONTENT

Добавляет данные в контекст, вычисляет хэш

Параметры шаблона:
* typename T
* typename Args

Параметры:
* T&&
* Args &&...


# ::stappler::crypto::Gost3411_512::_update<typename>(T&&)

## BRIEF

Добавляет данные в контекст, вычисляет хэш

## CONTENT

Добавляет данные в контекст, вычисляет хэш

Параметры шаблона:
* typename T

Параметры:
* T&&


# ::stappler::crypto::Gost3411_512::final()

## BRIEF

Завершает вычисление хэша, возвращает результат

## CONTENT

Завершает вычисление хэша, возвращает результат

Возвращает:
* Buf

# ::stappler::crypto::Gost3411_512::final(uint8_t*)

## BRIEF

Завершает вычисление хэша, записывает результат в буфер

## CONTENT

Завершает вычисление хэша, записывает результат в буфер. Буфер должен быть достаточным по размеру.

Параметры:
* uint8_t*


# ::stappler::crypto::Gost3411_512::ctx

## BRIEF

Текущий контекст хэша

## CONTENT

Текущий контекст хэша

Тип: _Ctx


# ::stappler::crypto::Gost3411_256

## BRIEF

Контекст ГОСТ 34.11 256-бит

## CONTENT

Контекст ГОСТ 34.11 256-бит


# ::stappler::crypto::Gost3411_256::_Ctx

## BRIEF

Тип рабочего контекста

## CONTENT

Тип рабочего контекста


# ::stappler::crypto::Gost3411_256::Length

## BRIEF

Длина результата функции

## CONTENT

Длина результата функции

Тип: uint32_t const


# ::stappler::crypto::Gost3411_256::Buf

## BRIEF

Тип результата функции

## CONTENT

Тип результата функции

# ::stappler::crypto::Gost3411_256::perform<typename>(Args &&...)

## BRIEF

Сокращение для разового вызова хэша

## CONTENT

Сокращение для разового вызова хэша. Инициализирует хэш, последовательно обрабатывает все аргументы, возвращает результат.

Параметры шаблона:
* typename Args - набор аргументов произвольной длины

Параметры:
* Args &&... - набор аргументов произвольной длины

Возвращает:
* Buf - результат хэща

# ::stappler::crypto::Gost3411_256::make(stappler::CoderSource const&,stappler::StringView const&)

## BRIEF

Хэширует данные с использованием криптографической соли

## CONTENT

Хэширует данные с использованием криптографической соли

Параметры:
* stappler::CoderSource const& - исходные данные
* stappler::StringView const& - криптографическая соль

Возвращает:
* Buf

# ::stappler::crypto::Gost3411_256::hmac(stappler::CoderSource const&,stappler::CoderSource const&)

## BRIEF

Вычисляет HMAC на основе хэша

## CONTENT

Вычисляет HMAC на основе хэша

Параметры:
* stappler::CoderSource const& - данные для подписи
* stappler::CoderSource const& - ключ подписи

Возвращает:
* Buf

# ::stappler::crypto::Gost3411_256::Gost3411_256()

## BRIEF

Инициализирует пустой контекст

## CONTENT

Инициализирует пустой контекст

# ::stappler::crypto::Gost3411_256::init()

## BRIEF

Реинициализирует контекст

## CONTENT

Реинициализирует контекст

Возвращает:
* stappler::crypto::Gost3411_256&

# ::stappler::crypto::Gost3411_256::update(uint8_t const*,size_t)

## BRIEF

Добавляет данные в контекст, вычисляет хэш

## CONTENT

Добавляет данные в контекст, вычисляет хэш

Параметры:
* uint8_t const*
* size_t

Возвращает:
* stappler::crypto::Gost3411_256&

# ::stappler::crypto::Gost3411_256::update(stappler::CoderSource const&)

## BRIEF

Добавляет данные в контекст, вычисляет хэш

## CONTENT

Добавляет данные в контекст, вычисляет хэш

Параметры:
* stappler::CoderSource const&

Возвращает:
* stappler::crypto::Gost3411_256&

# ::stappler::crypto::Gost3411_256::_update<typename,typename>(T&&,Args &&...)

## BRIEF

Добавляет данные в контекст, вычисляет хэш

## CONTENT

Добавляет данные в контекст, вычисляет хэш

Параметры шаблона:
* typename T
* typename Args

Параметры:
* T&&
* Args &&...


# ::stappler::crypto::Gost3411_256::_update<typename>(T&&)

## BRIEF

Добавляет данные в контекст, вычисляет хэш

## CONTENT

Добавляет данные в контекст, вычисляет хэш

Параметры шаблона:
* typename T

Параметры:
* T&&


# ::stappler::crypto::Gost3411_256::final()

## BRIEF

Завершает вычисление хэша, возвращает результат

## CONTENT

Завершает вычисление хэша, возвращает результат

Возвращает:
* Buf

# ::stappler::crypto::Gost3411_256::final(uint8_t*)

## BRIEF

Завершает вычисление хэша, записывает результат в буфер

## CONTENT

Завершает вычисление хэша, записывает результат в буфер. Буфер должен быть достаточным по размеру.

Параметры:
* uint8_t*


# ::stappler::crypto::Gost3411_256::ctx

## BRIEF

Текущий контекст хэша

## CONTENT

Текущий контекст хэша

Тип: _Ctx

