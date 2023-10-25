Title: SPSha.h


# STAPPLER_CORE_STRING_SPCRYPTO_H_

## BRIEF

Заголовок, описвающий стандартную реализацию SHA-2

## CONTENT

Заголовок, описвающий стандартную реализацию SHA-2


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


# ::stappler::CoderSource::CoderSource<typename>(Container const&)

## BRIEF

Конструктор из произвольного контейнера

## CONTENT

Конструктор из произвольного контейнера. Контейнер должен поддерживать стандартные вызовы `data()` и `size()`

Параметры шаблона:
* typename Container

Параметры:
* Container const&


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
