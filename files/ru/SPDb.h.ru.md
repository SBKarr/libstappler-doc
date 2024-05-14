Title: SPDb.h

# STAPPLER_DB_SPDB_H_

## BRIEF

Основной заголовок системы хранения данных и интерфейсов к БД

## CONTENT

Основной заголовок системы хранения данных и интерфейсов к БД.

Система хранения данных использует только интерфейс пулов памяти, поскольку может выделять множетство небольших сегментов памяти (отдельные поля, их имена) в ходе работы. Этим обусловлены особенности API.

В частности, подсистема пулов памяти не позволяет передать в другой пул данные, не имея к этому полу доступа заранее, и не может передавать пулы из непотокобезопасного аллокатора между потоками.

Представленные интерфейсы выполняют роль строительных блоков для реальной системы, не предлагая готову работоспособную реализацию, поскольку реальное использование может иметь разные цели и задачи, от хранения данных для мобильного приложения до веб-сервера, обслуживающего пользовательские запросы. Для реальной реализации используйте соотвествующий модуль SDK, сообразный назначению приложения.


# ::stappler::db::FullTextRank

## BRIEF

Псевдоним типа полнотекстового ранга

## CONTENT

Псевдоним типа полнотекстового ранга


# ::stappler::db::FullTextData

## BRIEF

Псевдоним типа данных полнотекстового запроса

## CONTENT

Псевдоним типа данных полнотекстового запроса

# ::stappler::db::FullTextVector

## BRIEF

Псевдоним типа данных полнотекстового вектора

## CONTENT

Псевдоним типа данных полнотекстового вектора


# ::stappler::db::FullTextQuery

## BRIEF

Псевдоним типа данных полнотекстового запроса

## CONTENT

Псевдоним типа данных полнотекстового запроса


# ::stappler::db::RequestData

## BRIEF

Структура, идентифицирующая источник запроса к данным

## CONTENT

Структура, идентифицирующая источник запроса к данным


# ::stappler::db::RequestData::exists

## BRIEF

Флаг устанавливается если данные заданы и запрос не является локальным

## CONTENT

Флаг устанавливается если данные заданы и запрос не является локальным

Тип: bool


# ::stappler::db::RequestData::address

## BRIEF

Адрес. от которого пришёл запрос

## CONTENT

Адрес. от которого пришёл запрос. IP-адрес или другой способ идентифицировать клиента в системе. Структура устанавливается для текущего пула памяти и позволяет опознать клиента, который запрашивает данные.

Тип: stappler::StringView


# ::stappler::db::RequestData::hostname

## BRIEF

Имя хоста, принявшего запрос

## CONTENT

Имя хоста, принявшего запрос

Тип: stappler::StringView


# ::stappler::db::RequestData::uri

## BRIEF

URL, принявший запрос

## CONTENT

URL, принявший запрос

Тип: stappler::StringView


# ::stappler::db::RequestData::operator bool()

## BRIEF

Проверяет, заполнена ли структура

## CONTENT

Проверяет, заполнена ли структура

Возвращает:
* bool

# ::stappler::db::InputConfig

## BRIEF

Конфигурация для защиты от переполнения при запросах к данным

## CONTENT

Конфигурация для защиты от переполнения при запросах к данным. Позволяет определить, какой обьем и каких данных ожидает схема данных от входящего запроса, и на этом основании фильтровать запросы.

# ::stappler::db::InputConfig::Require

## BRIEF

Требуемые данные в запросе

## CONTENT

Требуемые данные в запросе

Значения:
* None
* Data - структурированные данные схемы
* Files - входящие файлы
* Body - тело запроса
* FilesAsData - входящие файлы как структурированные данные схемы


# ::stappler::db::InputConfig::updateLimits(Map<stappler::mem_pool::String, stappler::db::Field> const&)

## BRIEF

Обновляет лимиты по данным из спииска полей схемы

## CONTENT

Обновляет лимиты по данным из спииска полей схемы

Параметры:
* Map<stappler::mem_pool::String, stappler::db::Field> const&


# ::stappler::db::InputConfig::required

## BRIEF

Требуемые ресурсы от запроса

## CONTENT

Требуемые ресурсы от запроса

Тип: stappler::db::InputConfig::Require


# ::stappler::db::InputConfig::maxRequestSize

## BRIEF

Максимально доспутимая длина запроса

## CONTENT

Максимально доспутимая длина запроса

Тип: size_t


# ::stappler::db::InputConfig::maxVarSize

## BRIEF

Максимальная длина переменной в структурированных данных

## CONTENT

Максимальная длина переменной в структурированных данных

Тип: size_t


# ::stappler::db::InputConfig::maxFileSize

## BRIEF

Максимальный размер файла в запросе

## CONTENT

Максимальный размер файла в запросе

Тип: size_t


# ::stappler::db::InputConfig::updateTime

## BRIEF

Частота обновления прогресса по времени

## CONTENT

Частота обновления прогресса по времени

Тип: stappler::TimeInterval


# ::stappler::db::InputConfig::updateFrequency

## BRIEF

Частота обновления по доле от размера запроса

## CONTENT

Частота обновления по доле от размера запроса

Тип: float


# ::stappler::db::operator|(InputConfig::Require const&,InputConfig::Require const&)

## BRIEF

Автоматически созданный оператор битового флага

## CONTENT

Автоматически созданный оператор битового флага

Параметры:
* InputConfig::Require const&
* InputConfig::Require const&

Возвращает:
* InputConfig::Require

# ::stappler::db::operator&(InputConfig::Require const&,InputConfig::Require const&)

## BRIEF

Автоматически созданный оператор битового флага

## CONTENT

Автоматически созданный оператор битового флага

Параметры:
* InputConfig::Require const&
* InputConfig::Require const&

Возвращает:
* InputConfig::Require

# ::stappler::db::operator^(InputConfig::Require const&,InputConfig::Require const&)

## BRIEF

Автоматически созданный оператор битового флага

## CONTENT

Автоматически созданный оператор битового флага

Параметры:
* InputConfig::Require const&
* InputConfig::Require const&

Возвращает:
* InputConfig::Require

# ::stappler::db::operator|=(InputConfig::Require&,InputConfig::Require const&)

## BRIEF

Автоматически созданный оператор битового флага

## CONTENT

Автоматически созданный оператор битового флага

Параметры:
* InputConfig::Require&
* InputConfig::Require const&

Возвращает:
* InputConfig::Require&

# ::stappler::db::operator&=(InputConfig::Require&,InputConfig::Require const&)

## BRIEF

Автоматически созданный оператор битового флага

## CONTENT

Автоматически созданный оператор битового флага

Параметры:
* InputConfig::Require&
* InputConfig::Require const&

Возвращает:
* InputConfig::Require&

# ::stappler::db::operator^=(InputConfig::Require&,InputConfig::Require const&)

## BRIEF

Автоматически созданный оператор битового флага

## CONTENT

Автоматически созданный оператор битового флага

Параметры:
* InputConfig::Require&
* InputConfig::Require const&

Возвращает:
* InputConfig::Require&

# ::stappler::db::operator==(InputConfig::Require const&,std::underlying_type<InputConfig::Require>::type const&)

## BRIEF

Автоматически созданный оператор битового флага

## CONTENT

Автоматически созданный оператор битового флага

Параметры:
* InputConfig::Require const&
* std::underlying_type<InputConfig::Require>::type const&

Возвращает:
* bool

# ::stappler::db::operator==(std::underlying_type<InputConfig::Require>::type const&,InputConfig::Require const&)

## BRIEF

Автоматически созданный оператор битового флага

## CONTENT

Автоматически созданный оператор битового флага

Параметры:
* std::underlying_type<InputConfig::Require>::type const&
* InputConfig::Require const&

Возвращает:
* bool

# ::stappler::db::operator!=(InputConfig::Require const&,std::underlying_type<InputConfig::Require>::type const&)

## BRIEF

Автоматически созданный оператор битового флага

## CONTENT

Автоматически созданный оператор битового флага

Параметры:
* InputConfig::Require const&
* std::underlying_type<InputConfig::Require>::type const&

Возвращает:
* bool

# ::stappler::db::operator!=(std::underlying_type<InputConfig::Require>::type const&,InputConfig::Require const&)

## BRIEF

Автоматически созданный оператор битового флага

## CONTENT

Автоматически созданный оператор битового флага

Параметры:
* std::underlying_type<InputConfig::Require>::type const&
* InputConfig::Require const&

Возвращает:
* bool

# ::stappler::db::operator~(InputConfig::Require const&)

## BRIEF

Автоматически созданный оператор битового флага

## CONTENT

Автоматически созданный оператор битового флага

Параметры:
* InputConfig::Require const&

Возвращает:
* InputConfig::Require


# ::stappler::db::InputFile

## BRIEF

Тип файла для записи в структуру БД

## CONTENT

Тип файла для записи в структуру БД. Файлы записываются в структуру БД по их имени в файловой системе. При этом, БД хранит дополнительную информацию для частичного сопоставления файла с его данными.

Базовые классы:
* AllocBase


# ::stappler::db::InputFile::path

## BRIEF

Путь к файлу

## CONTENT

Путь к файлу

Тип: stappler::mem_pool::String


# ::stappler::db::InputFile::name

## BRIEF

Имя поля файла

## CONTENT

Имя поля файла

Тип: stappler::mem_pool::String


# ::stappler::db::InputFile::type

## BRIEF

MIME-тип файла

## CONTENT

MIME-тип файла

Тип: stappler::mem_pool::String


# ::stappler::db::InputFile::encoding

## BRIEF

Способ кодировани файла при передаче

## CONTENT

Способ кодировани файла при передаче (Content-Encoding)

Тип: stappler::mem_pool::String


# ::stappler::db::InputFile::original

## BRIEF

Исходное имя файла в системе пользователя

## CONTENT

Исходное имя файла в системе пользователя

Тип: stappler::mem_pool::String


# ::stappler::db::InputFile::file

## BRIEF

Манипулятор файла

## CONTENT

Манипулятор файла

Тип: filesystem::File


# ::stappler::db::InputFile::isBinary

## BRIEF

Флаг, является ли файл бинарным или текстовым

## CONTENT

Флаг, является ли файл бинарным или текстовым

Тип: bool


# ::stappler::db::InputFile::writeSize

## BRIEF

Число байт, записанных во временный файл

## CONTENT

Число байт, записанных во временный файл

Тип: size_t


# ::stappler::db::InputFile::headerSize

## BRIEF

Число байт, записанных в заголовке файла

## CONTENT

Число байт, записанных в заголовке файла

Тип: size_t


# ::stappler::db::InputFile::id

## BRIEF

Внутренний идентификатор файла в запросе

## CONTENT

Внутренний идентификатор файла в запросе

Тип: int64_t


# ::stappler::db::InputFile::InputFile(stappler::mem_pool::String&&,stappler::mem_pool::String&&,stappler::mem_pool::String&&,stappler::mem_pool::String&&,size_t,int64_t)

## BRIEF

Конструктор файла

## CONTENT

Конструктор файла

Параметры:
* stappler::mem_pool::String&& - имя поля файла
* stappler::mem_pool::String&& - тип файла
* stappler::mem_pool::String&& - кодировка
* stappler::mem_pool::String&& - исходное имя файла
* size_t - число прочитанных байт в заголовке
* int64_t - внутренний идентификатор


# ::stappler::db::InputFile::~InputFile()

## BRIEF

Деструктор

## CONTENT

Деструктор


# ::stappler::db::InputFile::isOpen() const

## BRIEF

Проверяет, открыт ли файл

## CONTENT

Проверяет, открыт ли файл

Возвращает:
* bool

# ::stappler::db::InputFile::write(char const*,size_t)

## BRIEF

Записывает данные во временный файл

## CONTENT

Записывает данные во временный файл

Параметры:
* char const* - указатель на буфер
* size_t - размер буфера в байтах

Возвращает:
* size_t - число записанных байт

# ::stappler::db::InputFile::close()

## BRIEF

Закрывает и удаляет временный файл

## CONTENT

Закрывает и удаляет временный файл

# ::stappler::db::InputFile::save(stappler::StringView const&) const

## BRIEF

Закрывает временный файл и перемещает его по переданному имени

## CONTENT

Закрывает временный файл и перемещает его по переданному имени

Параметры:
* stappler::StringView const&

Возвращает:
* bool - true если перемещение успешно

# ::stappler::db::InputFile::readBytes()

## BRIEF

Читает файл в виде байтовой строки

## CONTENT

Читает файл в виде байтовой строки

Возвращает:
* stappler::mem_pool::Bytes

# ::stappler::db::InputFile::readText()

## BRIEF

Читает файл в виде текстовой строки

## CONTENT

Читает файл в виде текстовой строки

Возвращает:
* stappler::mem_pool::String

# ::stappler::db::InputFile::negativeId() const

## BRIEF

Возвращает отрицательный идентификатор

## CONTENT

Возвращает отрицательный идентификатор. Отрицательный идентификатор используется, чтобы идентифицировать файлы среди идентификаторов БД (положительных)

Возвращает:
* int64_t

# ::stappler::db::InputFile::InputFile(stappler::db::InputFile const&)

## BRIEF

Запрет копирования

## CONTENT

Запрет копирования

Параметры:
* stappler::db::InputFile const&


# ::stappler::db::InputFile::InputFile(stappler::db::InputFile&&)

## BRIEF

Запрет перемещения

## CONTENT

Запрет перемещения

Параметры:
* stappler::db::InputFile&&


# ::stappler::db::InputFile::operator=(stappler::db::InputFile const&)

## BRIEF

Запрет копирования

## CONTENT

Запрет копирования

Параметры:
* stappler::db::InputFile const&

Возвращает:
* stappler::db::InputFile&

# ::stappler::db::InputFile::operator=(stappler::db::InputFile&&)

## BRIEF

Запрет перемещения

## CONTENT

Запрет перемещения

Параметры:
* stappler::db::InputFile&&

Возвращает:
* stappler::db::InputFile&

# ::stappler::db::InputValue

## BRIEF

Тип входящего значения для поля в БД

## CONTENT

Тип входящего значения для поля в БД


# ::stappler::db::InputValue::Type

## BRIEF

Перечисление конкретного типа

## CONTENT

Перечисление конкретного типа

Значения:
* None
* Value - нетипизированные данные
* File - файл
* TSV - полнотекстовый вектор

# ::stappler::db::InputValue::type

## BRIEF

Конкретный тип значения

## CONTENT

Конкретный тип значения

Тип: stappler::db::InputValue::Type

# ::stappler::db::InputValue::

## BRIEF

Объединение конкретной формы значения

## CONTENT

Объединение конкретной формы значения


# ::stappler::db::InputValue::value

## BRIEF

Нетипизированные данные

## CONTENT

Нетипизированные данные

Тип: stappler::mem_pool::Value

# ::stappler::db::InputValue::file

## BRIEF

Файл

## CONTENT

Файл

Тип: stappler::db::InputFile*

# ::stappler::db::InputValue::tsv

## BRIEF

Полнотекстовый вектор

## CONTENT

Полнотекстовый вектор

Тип: stappler::db::FullTextVector

# ::stappler::db::InputValue::hasValue() const

## BRIEF

Проверяет, хранится ли конкретное значение в объекте

## CONTENT

Проверяет, хранится ли конкретное значение в объекте

Возвращает:
* bool

# ::stappler::db::InputValue::InputValue()

## BRIEF

Конструктор по умолчанию

## CONTENT

Конструктор по умолчанию. Создаёт пустой объект

# ::stappler::db::InputValue::InputValue(stappler::mem_pool::Value&&)

## BRIEF

Конструктор с нетипизированными данными

## CONTENT

Конструктор с нетипизированными данными

Параметры:
* stappler::mem_pool::Value&&

# ::stappler::db::InputValue::InputValue(stappler::db::FullTextVector&&)

## BRIEF

Конструктор с полнотекстовым вектором

## CONTENT

Конструктор с полнотекстовым вектором

Параметры:
* stappler::db::FullTextVector&&

# ::stappler::db::InputValue::InputValue(stappler::db::InputValue&&)

## BRIEF

Конструктор перемещения

## CONTENT

Конструктор перемещения

Параметры:
* stappler::db::InputValue&&

# ::stappler::db::InputValue::operator=(stappler::db::InputValue&&)

## BRIEF

Оператор перемещения

## CONTENT

Оператор перемещения

Параметры:
* stappler::db::InputValue&&

Возвращает:
* stappler::db::InputValue&

# ::stappler::db::InputValue::InputValue(stappler::db::InputValue const&)

## BRIEF

Конструктор копирования

## CONTENT

Конструктор копирования

Параметры:
* stappler::db::InputValue const&

# ::stappler::db::InputValue::operator=(stappler::db::InputValue const&)

## BRIEF

Оператор копирования

## CONTENT

Оператор копирования

Параметры:
* stappler::db::InputValue const&

Возвращает:
* stappler::db::InputValue&

# ::stappler::db::InputValue::clear()

## BRIEF

Удаляет хранимое значение

## CONTENT

Удаляет хранимое значение

# ::stappler::db::InputValue::~InputValue()

## BRIEF

Деструктор

## CONTENT

Деструктор


# ::stappler::db::InputField

## BRIEF

Тип хранимого поля в БД

## CONTENT

Тип хранимого поля в БД

# ::stappler::db::InputField::field

## BRIEF

Указатель на конкретное поле

## CONTENT

Указатель на конкретное поле

Тип: stappler::db::Field const*

# ::stappler::db::InputField::operator==(stappler::db::InputField const&) const

## BRIEF

Оператор сравнения

## CONTENT

Оператор сравнения

Параметры:
* stappler::db::InputField const&

Возвращает:
* bool

# ::stappler::db::InputField::operator!=(stappler::db::InputField const&) const

## BRIEF

Оператор сравнения

## CONTENT

Оператор сравнения

Параметры:
* stappler::db::InputField const&

Возвращает:
* bool

# ::stappler::db::InputField::operator<(stappler::db::InputField const&) const

## BRIEF

Оператор сравнения

## CONTENT

Оператор сравнения

Параметры:
* stappler::db::InputField const&

Возвращает:
* bool

# ::stappler::db::InputRow

## BRIEF

Тип хранимой строки данных в БД

## CONTENT

Тип хранимой строки данных в БД


# ::stappler::db::InputRow::values

## BRIEF

Вектор набора значений для строки данных

## CONTENT

Вектор набора значений для строки данных

Тип: Vector<stappler::db::InputValue>

# ::stappler::db::InputRow::InputRow()

## BRIEF

Конструктор по умолчанию

## CONTENT

Конструктор по умолчанию

# ::stappler::db::InputConfig::isFileAsDataSupportedForType(stappler::StringView)

## BRIEF

Проверяет, может ли система прочитать тип как данные

## CONTENT

Проверяет, может ли система прочитать тип как данные (например, JSON, CBOR, multipart/form-data)

Параметры:
* stappler::StringView - MIME-тип

Возвращает:
* bool