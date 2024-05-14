Title: SPWebWebsocket.h


# EXTRA_WEBSERVER_WEBSERVER_WEBSOCKET_SPWEBWEBSOCKET_H_

## BRIEF

Заголовок базового интерфейса вебсокетов

## CONTENT

Заголовок базового интерфейса вебсокетов


# ::stappler::web::WebsocketFrameType

## BRIEF

Тип кадра данных

## CONTENT

Тип кадра данных

Значения:
* None
* Text
* Binary
* Continue
* Close
* Ping
* Pong


# ::stappler::web::WebsocketStatusCode

## BRIEF

Код статуса вебсокета

## CONTENT

Код статуса вебсокета

Значения:
* None
* Auto
* Ok
* Away
* ProtocolError
* NotAcceptable
* ExpectStatus
* AbnormalClose
* NotConsistent
* PolicyViolated
* TooLarge
* NotNegotiated
* UnexceptedCondition
* SSLError


# ::stappler::web::WebsocketFrameReader

## BRIEF

Структура для чтения кара вебсокета

## CONTENT

Структура для чтения кара вебсокета

Базовые классы:
* AllocBase


# ::stappler::web::WebsocketFrameReader::Status

## BRIEF

Статус чтения кадра

## CONTENT

Статус чтения кадра

Значения:
* Head
* Size16
* Size64
* Mask
* Body
* Control


# ::stappler::web::WebsocketFrameReader::Error

## BRIEF

Ошибка чтения кадра

## CONTENT

Ошибка чтения кадра

Значения:
* None
* NotInitialized
* ExtraIsNotEmpty
* NotMasked
* UnknownOpcode
* InvalidSegment
* InvalidSize
* InvalidAction


# ::stappler::web::WebsocketFrameReader::Frame

## BRIEF

Структура кадра

## CONTENT

Структура кадра

# ::stappler::web::WebsocketFrameReader::Frame::fin

## BRIEF

Завершено ли чтение

## CONTENT

Завершено ли чтение

Тип: bool


# ::stappler::web::WebsocketFrameReader::Frame::type

## BRIEF

Тип кадра

## CONTENT

Тип кадра

Тип: stappler::web::WebsocketFrameType


# ::stappler::web::WebsocketFrameReader::Frame::buffer

## BRIEF

Буфер для чтения

## CONTENT

Буфер для чтения

Тип: stappler::mem_pool::Bytes


# ::stappler::web::WebsocketFrameReader::Frame::block

## BRIEF

Размер блока

## CONTENT

Размер блока

Тип: size_t


# ::stappler::web::WebsocketFrameReader::Frame::offset

## BRIEF

Смещение при чтении

## CONTENT

Смещение при чтении

Тип: size_t


# ::stappler::web::WebsocketFrameReader::getTypeFromOpcode(uint8_t)

## BRIEF

Возвращает тип кадра из кода

## CONTENT

Возвращает тип кадра из кода

Параметры:
* uint8_t

Возвращает:
* stappler::web::WebsocketFrameType

# ::stappler::web::WebsocketFrameReader::isControlFrameType(stappler::web::WebsocketFrameType)

## BRIEF

Является ли тип кадра системным

## CONTENT

Является ли тип кадра системным

Параметры:
* stappler::web::WebsocketFrameType

Возвращает:
* bool

# ::stappler::web::WebsocketFrameReader::unmask(uint32_t,size_t,uint8_t*,size_t)

## BRIEF

Снимает маску данных кадра

## CONTENT

Снимает маску данных кадра

Параметры:
* uint32_t
* size_t
* uint8_t*
* size_t


# ::stappler::web::WebsocketFrameReader::getBufferRequiredBytes<typename>(B const&,size_t)

## BRIEF

Возвращает требуемый размер буфера для чтения

## CONTENT

Возвращает требуемый размер буфера для чтения

Параметры шаблона:
* typename B

Параметры:
* B const&
* size_t

Возвращает:
* size_t

# ::stappler::web::WebsocketFrameReader::fin

## BRIEF

Флаг завершения чтения кадра

## CONTENT

Флаг завершения чтения кадра

Тип: bool


# ::stappler::web::WebsocketFrameReader::masked

## BRIEF

Флаг использования маски на входящих данных

## CONTENT

Флаг использования маски на входящих данных

Тип: bool


# ::stappler::web::WebsocketFrameReader::status

## BRIEF

Статус чтения

## CONTENT

Статус чтения

Тип: stappler::web::WebsocketFrameReader::Status


# ::stappler::web::WebsocketFrameReader::error

## BRIEF

Код ошибки

## CONTENT

Код ошибки

Тип: stappler::web::WebsocketFrameReader::Error


# ::stappler::web::WebsocketFrameReader::type

## BRIEF

Тип кадра

## CONTENT

Тип кадра

Тип: stappler::web::WebsocketFrameType


# ::stappler::web::WebsocketFrameReader::extra

## BRIEF

Дополнительное смещение в кадре

## CONTENT

Дополнительное смещение в кадре

Тип: uint8_t


# ::stappler::web::WebsocketFrameReader::mask

## BRIEF

Маска входящих данных

## CONTENT

Маска входящих данных

Тип: uint32_t


# ::stappler::web::WebsocketFrameReader::size

## BRIEF

Размер кадра

## CONTENT

Размер кадра

Тип: size_t


# ::stappler::web::WebsocketFrameReader::max

## BRIEF

Максимальный размер кадра

## CONTENT

Максимальный размер кадра

Тип: size_t


# ::stappler::web::WebsocketFrameReader::frame

## BRIEF

Структура кадра для чтения

## CONTENT

Структура кадра для чтения

Тип: stappler::web::WebsocketFrameReader::Frame


# ::stappler::web::WebsocketFrameReader::pool

## BRIEF

Используемый пул памяти

## CONTENT

Используемый пул памяти

Тип: stappler::mempool::base::pool_t*


# ::stappler::web::WebsocketFrameReader::root

## BRIEF

Корень вебсервера

## CONTENT

Корень вебсервера

Тип: stappler::web::Root*


# ::stappler::web::WebsocketFrameReader::buffer

## BRIEF

Буфер для чтения заголовка кадра

## CONTENT

Буфер для чтения заголовка кадра

Тип: StackBuffer<128>


# ::stappler::web::WebsocketFrameReader::WebsocketFrameReader(stappler::web::Root*,stappler::mempool::base::pool_t*)

## BRIEF

Конструктор

## CONTENT

Конструктор

Параметры:
* stappler::web::Root*
* stappler::mempool::base::pool_t*


# ::stappler::web::WebsocketFrameReader::operator bool() const

## BRIEF

Проверяет на работоспособность стркутуры

## CONTENT

Проверяет на работоспособность стркутуры

Возвращает:
* bool

# ::stappler::web::WebsocketFrameReader::getRequiredBytes() const

## BRIEF

Возвращает число необходимых для прочтения байт

## CONTENT

Возвращает число необходимых для прочтения байт

Возвращает:
* size_t

# ::stappler::web::WebsocketFrameReader::prepare(size_t&)

## BRIEF

Подготавливает буфер для чтения

## CONTENT

Подготавливает буфер для чтения

Параметры:
* size_t& - получает на вход число байт, возвращает реальный размер буфера

Возвращает:
* uint8_t* - указатель на буфер

# ::stappler::web::WebsocketFrameReader::save(uint8_t*,size_t)

## BRIEF

Сохраняет изменение в буфере

## CONTENT

Сохраняет изменение в буфере

Параметры:
* uint8_t*
* size_t

Возвращает:
* bool

# ::stappler::web::WebsocketFrameReader::isFrameReady() const

## BRIEF

Проверяет, прочитан ли кадр

## CONTENT

Проверяет, прочитан ли кадр

Возвращает:
* bool

# ::stappler::web::WebsocketFrameReader::isControlReady() const

## BRIEF

Проверяет, прочитан ли заголовок

## CONTENT

Проверяет, прочитан ли заголовок

Возвращает:
* bool

# ::stappler::web::WebsocketFrameReader::popFrame()

## BRIEF

Убирает прочитанный кадр из буфера

## CONTENT

Убирает прочитанный кадр из буфера


# ::stappler::web::WebsocketFrameReader::clear()

## BRIEF

Очищает буфер

## CONTENT

Очищает буфер


# ::stappler::web::WebsocketFrameReader::updateState()

## BRIEF

Обновляет статус чтения

## CONTENT

Обновляет статус чтения

Возвращает:
* bool

# ::stappler::web::WebsocketFrameWriter

## BRIEF

Структура для записи кадра

## CONTENT

Структура для записи кадра

Базовые классы:
* AllocBase


# ::stappler::web::WebsocketFrameWriter::getOpcodeFromType(stappler::web::WebsocketFrameType)

## BRIEF

Получает код из типа кадра

## CONTENT

Получает код из типа кадра

Параметры:
* stappler::web::WebsocketFrameType

Возвращает:
* uint8_t

# ::stappler::web::WebsocketFrameWriter::Slice

## BRIEF

Сегмент данных

## CONTENT

Сегмент данных


# ::stappler::web::WebsocketFrameWriter::Slice::data

## BRIEF

Уазатель на данные

## CONTENT

Уазатель на данные

Тип: uint8_t*


# ::stappler::web::WebsocketFrameWriter::Slice::size

## BRIEF

Размер данных

## CONTENT

Размер данных

Тип: size_t


# ::stappler::web::WebsocketFrameWriter::Slice::next

## BRIEF

Следующий сегмент

## CONTENT

Следующий сегмент

Тип: stappler::web::WebsocketFrameWriter::Slice*


# ::stappler::web::WebsocketFrameWriter::WriteSlot

## BRIEF

Слот для записи данных

## CONTENT

Слот для записи данных

Базовые классы:
* AllocBase


# ::stappler::web::WebsocketFrameWriter::WriteSlot::pool

## BRIEF

Пул памяти

## CONTENT

Пул памяти

Тип: stappler::mempool::base::pool_t*


# ::stappler::web::WebsocketFrameWriter::WriteSlot::alloc

## BRIEF

Число распределённых байт

## CONTENT

Число распределённых байт

Тип: size_t


# ::stappler::web::WebsocketFrameWriter::WriteSlot::offset

## BRIEF

Смещение в распределённой памяти

## CONTENT

Смещение в распределённой памяти

Тип: size_t


# ::stappler::web::WebsocketFrameWriter::WriteSlot::firstData

## BRIEF

Первый сегмент данных

## CONTENT

Первый сегмент данных

Тип: stappler::web::WebsocketFrameWriter::Slice*


# ::stappler::web::WebsocketFrameWriter::WriteSlot::lastData

## BRIEF

Последний сегмент данных

## CONTENT

Последний сегмент данных

Тип: stappler::web::WebsocketFrameWriter::Slice*


# ::stappler::web::WebsocketFrameWriter::WriteSlot::next

## BRIEF

Следующий слот для записи

## CONTENT

Следующий слот для записи

Тип: stappler::web::WebsocketFrameWriter::WriteSlot*


# ::stappler::web::WebsocketFrameWriter::WriteSlot::WriteSlot(stappler::mempool::base::pool_t*)

## BRIEF

Конструктор

## CONTENT

Конструктор

Параметры:
* stappler::mempool::base::pool_t*


# ::stappler::web::WebsocketFrameWriter::WriteSlot::empty() const

## BRIEF

Проверяет на пустоту

## CONTENT

Проверяет на пустоту

Возвращает:
* bool

# ::stappler::web::WebsocketFrameWriter::WriteSlot::emplace(uint8_t const*,size_t)

## BRIEF

Записывает данные во внутренний буфер

## CONTENT

Записывает данные во внутренний буфер

Параметры:
* uint8_t const*
* size_t


# ::stappler::web::WebsocketFrameWriter::WriteSlot::pop(size_t)

## BRIEF

Убирает записанные данные из буфера

## CONTENT

Убирает записанные данные из буфера

Параметры:
* size_t


# ::stappler::web::WebsocketFrameWriter::WriteSlot::getNextBytes() const

## BRIEF

Возвращает буфер для записи

## CONTENT

Возвращает буфер для записи

Возвращает:
* uint8_t*

# ::stappler::web::WebsocketFrameWriter::WriteSlot::getNextLength() const

## BRIEF

Возвращает размер блока для записи

## CONTENT

Возвращает размер блока для записи

Возвращает:
* size_t

# ::stappler::web::WebsocketFrameWriter::pool

## BRIEF

Пул памяти

## CONTENT

Пул памяти

Тип: stappler::mempool::base::pool_t*


# ::stappler::web::WebsocketFrameWriter::firstSlot

## BRIEF

Первый слот для записи

## CONTENT

Первый слот для записи

Тип: stappler::web::WebsocketFrameWriter::WriteSlot*


# ::stappler::web::WebsocketFrameWriter::lastSlot

## BRIEF

Последний слот для записи

## CONTENT

Последний слот для записи

Тип: stappler::web::WebsocketFrameWriter::WriteSlot*


# ::stappler::web::WebsocketFrameWriter::WebsocketFrameWriter(stappler::mempool::base::pool_t*)

## BRIEF

Конструктор

## CONTENT

Конструктор

Параметры:
* stappler::mempool::base::pool_t*


# ::stappler::web::WebsocketFrameWriter::empty() const

## BRIEF

Проверяет внутренний буфер на пустоту

## CONTENT

Проверяет внутренний буфер на пустоту

Возвращает:
* bool

# ::stappler::web::WebsocketFrameWriter::nextReadSlot() const

## BRIEF

Возвращает следующий слот для чтения

## CONTENT

Возвращает следующий слот для чтения

Возвращает:
* stappler::web::WebsocketFrameWriter::WriteSlot*

# ::stappler::web::WebsocketFrameWriter::popReadSlot()

## BRIEF

Убирает записанный слот

## CONTENT

Убирает записанный слот


# ::stappler::web::WebsocketFrameWriter::nextEmplaceSlot(size_t)

## BRIEF

Возвращает следующий слот для записи

## CONTENT

Возвращает следующий слот для записи во внутренний буфер

Параметры:
* size_t - число байт для записи

Возвращает:
* stappler::web::WebsocketFrameWriter::WriteSlot*

# ::stappler::web::WebsocketFrameWriter::getFrameSize(size_t,bool)

## BRIEF

Возвращает размер фрейма для указанного размера данных

## CONTENT

Возвращает размер фрейма для указанного размера данных

Параметры:
* size_t - размер данных
* bool - true если необходима маска фрейма

Возвращает:
* size_t

# ::stappler::web::WebsocketFrameWriter::makeHeader(uint8_t*,size_t,stappler::web::WebsocketFrameType,bool,uint32_t)

## BRIEF

Записывает заголовок фрейма в буфер

## CONTENT

Записывает заголовок фрейма в буфер

Параметры:
* uint8_t* - указатель на буфер
* size_t - размер данных фрейма
* stappler::web::WebsocketFrameType - тип фрейма
* bool - true если необходима маска
* uint32_t - значение маски

Возвращает:
* size_t

# ::stappler::web::WebsocketFrameWriter::makeHeader(StackBuffer<32>&,size_t,stappler::web::WebsocketFrameType,bool,uint32_t)

## BRIEF

Записывает заголовок фрейма в буфер

## CONTENT

Записывает заголовок фрейма в буфер

Параметры:
* StackBuffer<32>&
* size_t - размер данных фрейма
* stappler::web::WebsocketFrameType - тип фрейма
* bool - true если необходима маска
* uint32_t - значение маски