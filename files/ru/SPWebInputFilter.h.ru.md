Title: SPWebInputFilter.h


# EXTRA_WEBSERVER_WEBSERVER_FILTER_SPWEBINPUTFILTER_H_

## BRIEF

Заголовок фильтра входящих данных

## CONTENT

Заголовок фильтра входящих данных


# ::stappler::web::InputParser

## BRIEF

Парсер входящих данных

## CONTENT

Парсер входящих данных. Базовый класс для конкретных парсеров.

Базовые классы:
* AllocBase


# ::stappler::web::InputParser::InputParser(db::InputConfig const&,size_t)

## BRIEF

Конструктор

## CONTENT

Доступ: public

Конструктор

Параметры:
* db::InputConfig const&
* size_t


# ::stappler::web::InputParser::~InputParser()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор


# ::stappler::web::InputParser::run(stappler::BytesView)

## BRIEF

Запускает обработку для данных

## CONTENT

Доступ: public

Запускает обработку для данных

Параметры:
* stappler::BytesView


# ::stappler::web::InputParser::finalize()

## BRIEF

Заканчивает обработку

## CONTENT

Доступ: public

Заканчивает обработку


# ::stappler::web::InputParser::cleanup()

## BRIEF

Очищает данные

## CONTENT

Доступ: public

Очищает данные


# ::stappler::web::InputParser::getData()

## BRIEF

Возвращает распознанные данные

## CONTENT

Доступ: public

Возвращает распознанные данные

Возвращает:
* stappler::mem_pool::Value&

# ::stappler::web::InputParser::getFiles()

## BRIEF

Возвращает распознанные файлы

## CONTENT

Доступ: public

Возвращает распознанные файлы

Возвращает:
* Vector<db::InputFile>&

# ::stappler::web::InputParser::getConfig() const

## BRIEF

Возвращает конфигурацию входящего потока

## CONTENT

Доступ: public

Возвращает конфигурацию входящего потока

Возвращает:
* db::InputConfig const&

# ::stappler::web::InputParser::config

## BRIEF

Конфигурация

## CONTENT

Доступ: protected

Конфигурация

Тип: db::InputConfig


# ::stappler::web::InputParser::length

## BRIEF

Длина потока

## CONTENT

Доступ: protected

Длина потока

Тип: size_t


# ::stappler::web::InputParser::root

## BRIEF

Корень для чтения данных

## CONTENT

Доступ: protected

Корень для чтения данных

Тип: stappler::mem_pool::Value


# ::stappler::web::InputParser::files

## BRIEF

Распознанные файлы

## CONTENT

Доступ: protected

Распознанные файлы

Тип: Vector<db::InputFile>


# ::stappler::web::InputFilter

## BRIEF

Универсальный фильтр входящих данных

## CONTENT

Универсальный фильтр входящих данных

Базовые классы:
* AllocBase


# ::stappler::web::InputFilter::FilterFunc

## BRIEF

Функция фильтрации

## CONTENT

Доступ: public

Функция фильтрации


# ::stappler::web::InputFilter::Accept

## BRIEF

Тип данных для приёма

## CONTENT

Доступ: public

Тип данных для приёма


# ::stappler::web::InputFilter::Exception

## BRIEF

Тип ошибки

## CONTENT

Доступ: public

Тип ошибки

Значения:
* None
* TooLarge
* Unrecognized


# ::stappler::web::InputFilter::insert(stappler::web::Request const&)

## BRIEF

Добавляет фильтр к запросу

## CONTENT

Доступ: public

Добавляет фильтр к запросу

Параметры:
* stappler::web::Request const&

Возвращает:
* stappler::web::InputFilter::Exception

# ::stappler::web::InputFilter::getFileFromContext(int64_t)

## BRIEF

Возвращает файл по его индексу

## CONTENT

Доступ: public

Возвращает файл по его индексу

Параметры:
* int64_t

Возвращает:
* db::InputFile*

# ::stappler::web::InputFilter::InputFilter(stappler::web::Request const&,stappler::web::InputFilter::Accept)

## BRIEF

Конструктор

## CONTENT

Доступ: public

Конструктор

Параметры:
* stappler::web::Request const& - запрос
* stappler::web::InputFilter::Accept - тип принимаемых данных


# ::stappler::web::InputFilter::step(stappler::BytesView)

## BRIEF

Обрабатывает сегмент запроса

## CONTENT

Доступ: public

Обрабатывает сегмент запроса

Параметры:
* stappler::StringView


# ::stappler::web::InputFilter::finalize()

## BRIEF

Завершает обработку

## CONTENT

Доступ: public

Завершает обработку

# ::stappler::web::InputFilter::getContentType() const

## BRIEF

Возвращает тип содержимого

## CONTENT

Доступ: public

Возвращает тип содержимого

Возвращает:
* stappler::StringView

# ::stappler::web::InputFilter::getContentLength() const

## BRIEF

Возвращает длину содержимого

## CONTENT

Доступ: public

Возвращает длину содержимого

Возвращает:
* size_t

# ::stappler::web::InputFilter::getBytesRead() const

## BRIEF

Возвращает число прочитанных байт

## CONTENT

Доступ: public

Возвращает число прочитанных байт

Возвращает:
* size_t

# ::stappler::web::InputFilter::getBytesReadSinceUpdate() const

## BRIEF

Возвращает число прочитанных байт с последнего события

## CONTENT

Доступ: public

Возвращает число прочитанных байт с последнего события

Возвращает:
* size_t

# ::stappler::web::InputFilter::getStartTime() const

## BRIEF

Возвращает время начала чтения

## CONTENT

Доступ: public

Возвращает время начала чтения

Возвращает:
* stappler::Time

# ::stappler::web::InputFilter::getElapsedTime() const

## BRIEF

Возвращает время, прошедшее с запуска фильтра

## CONTENT

Доступ: public

Возвращает время, прошедшее с запуска фильтра

Возвращает:
* stappler::TimeInterval

# ::stappler::web::InputFilter::getElapsedTimeSinceUpdate() const

## BRIEF

Возвращает время, прошедшее с последнего обновления

## CONTENT

Доступ: public

Возвращает время, прошедшее с последнего обновления

Возвращает:
* stappler::TimeInterval

# ::stappler::web::InputFilter::getFileBufferSize() const

## BRIEF

Возвращает размер буфера для файлов в памяти

## CONTENT

Доступ: public

Возвращает размер буфера для файлов в памяти

Возвращает:
* size_t

# ::stappler::web::InputFilter::setFileBufferSize(size_t)

## BRIEF

Устанавливает размер буфера для файлов

## CONTENT

Доступ: public

Устанавливает размер буфера для файлов

Параметры:
* size_t


# ::stappler::web::InputFilter::isFileUploadAllowed() const

## BRIEF

Разрешена ли загрузка файлов

## CONTENT

Доступ: public

Разрешена ли загрузка файлов

Возвращает:
* bool

# ::stappler::web::InputFilter::isDataParsingAllowed() const

## BRIEF

Разрешен ли разбор данных

## CONTENT

Доступ: public

Разрешен ли разбор данных

Возвращает:
* bool

# ::stappler::web::InputFilter::isBodySavingAllowed() const

## BRIEF

Разрешено ли сохранение тела запроса

## CONTENT

Доступ: public

Разрешено ли сохранение тела запроса

Возвращает:
* bool

# ::stappler::web::InputFilter::isCompleted() const

## BRIEF

Завершён ли разбор

## CONTENT

Доступ: public

Завершён ли разбор

Возвращает:
* bool

# ::stappler::web::InputFilter::getBody() const

## BRIEF

Возвращает тело запроса

## CONTENT

Доступ: public

Возвращает тело запроса

Возвращает:
* stappler::mem_pool::StringStream const&

# ::stappler::web::InputFilter::getData()

## BRIEF

Возвращает распознанные данные запроса

## CONTENT

Доступ: public

Возвращает распознанные данные запроса

Возвращает:
* stappler::mem_pool::Value&

# ::stappler::web::InputFilter::getFiles()

## BRIEF

Возвращает файлы в запросе

## CONTENT

Доступ: public

Возвращает файлы в запросе

Возвращает:
* Vector<db::InputFile>&

# ::stappler::web::InputFilter::getInputFile(int64_t) const

## BRIEF

Возвращает полученный файл по индексу

## CONTENT

Доступ: public

Возвращает полученный файл по индексу

Параметры:
* int64_t

Возвращает:
* db::InputFile*

# ::stappler::web::InputFilter::getConfig() const

## BRIEF

Возвращает конфигурацию фильтра

## CONTENT

Доступ: public

Возвращает конфигурацию фильтра

Возвращает:
* db::InputConfig const&

# ::stappler::web::InputFilter::getRequest() const

## BRIEF

Возвращает запрос, к которому привязан фильтр

## CONTENT

Доступ: public

Возвращает запрос, к которому привязан фильтр

Возвращает:
* stappler::web::Request

# ::stappler::web::InputFilter::init()

## BRIEF

Инициализирует фильтр

## CONTENT

Доступ: protected

Инициализирует фильтр

Возвращает:
* stappler::web::Status

# ::stappler::web::InputFilter::_accept

## BRIEF

Флаги доступных данных

## CONTENT

Доступ: protected

Флаги доступных данных

Тип: Accept


# ::stappler::web::InputFilter::_time

## BRIEF

Время последнего события

## CONTENT

Доступ: protected

Время последнего события

Тип: stappler::Time


# ::stappler::web::InputFilter::_startTime

## BRIEF

Время начала обработки

## CONTENT

Доступ: protected

Время начала обработки

Тип: stappler::Time


# ::stappler::web::InputFilter::_timer

## BRIEF

Текущий интервал обработки

## CONTENT

Доступ: protected

Текущий интервал обработки

Тип: stappler::TimeInterval


# ::stappler::web::InputFilter::_unupdated

## BRIEF

Число обработанных байт с последнего обновления

## CONTENT

Доступ: protected

Число обработанных байт с последнего обновления

Тип: size_t


# ::stappler::web::InputFilter::_read

## BRIEF

Число прочитанных байт

## CONTENT

Доступ: protected

Число прочитанных байт

Тип: size_t


# ::stappler::web::InputFilter::_contentLength

## BRIEF

Длина содержимого

## CONTENT

Доступ: protected

Длина содержимого

Тип: size_t


# ::stappler::web::InputFilter::_body

## BRIEF

Поток для сохранения тела запроса

## CONTENT

Доступ: protected

Поток для сохранения тела запроса

Тип: stappler::mem_pool::StringStream


# ::stappler::web::InputFilter::_parser

## BRIEF

Конкретный парсер запроса

## CONTENT

Доступ: protected

Конкретный парсер запроса

Тип: stappler::web::InputParser*


# ::stappler::web::InputFilter::_request

## BRIEF

Запрос

## CONTENT

Доступ: protected

Запрос

Тип: stappler::web::Request


# ::stappler::web::InputFilter::_eos

## BRIEF

Достигнут ли конец потока запроса

## CONTENT

Доступ: protected

Достигнут ли конец потока запроса

Тип: bool


# ::stappler::web::InputFilter::_isCompleted

## BRIEF

Завершен ли разбор данных

## CONTENT

Доступ: protected

Завершен ли разбор данных

Тип: bool


# ::stappler::web::InputFilter::_isStarted

## BRIEF

Начат ли разбор данных

## CONTENT

Доступ: protected

Начат ли разбор данных

Тип: bool

# ::stappler::web::InputFilter::getStatusForException(stappler::web::InputFilter::Exception)

## BRIEF

Возвращает статус запроса для ошибки чтения

## CONTENT

Доступ: public

Возвращает статус запроса для ошибки чтения

Параметры:
* stappler::web::InputFilter::Exception

Возвращает:
* stappler::web::Status

# ::stappler::web::InputFilter::getPool() const

## BRIEF

Возвращает пул памяти для фильтра

## CONTENT

Доступ: public

Возвращает пул памяти для фильтра

Возвращает:
* memory::pool_t*