Title: SPBitmapFormat.h


# STAPPLER_BITMAP_SPBITMAPFORMAT_H_

## BRIEF

Заголовок интерфейса прямого доступа к формату битовых карт

## CONTENT

Заголовок интерфейса прямого доступа к формату битовых карт. Определяет низкоуровневый интерфейс чтения-записи в битовых карт в различные форматы изображений.


# ::stappler::bitmap::FileFormat

## BRIEF

Список поддерживаемых встроенных форматов изображений

## CONTENT

Список поддерживаемых встроенных форматов изображений

Значения:
* Png - формат PNG
* Jpeg - формат JPEG
* WebpLossless - формат WEBP с кодированием без потери качества
* WebpLossy - формат WEBP с кодированием с потерей качества
* Svg - векторный формат SVG (только определение размера изображения)
* Gif - формат GIF (не поддерживает запись)
* Tiff - формат TIFF (только определение размера изображения)
* Custom - определённый пользователем формат (идентифицируется по имени)


# ::stappler::bitmap::AlphaFormat

## BRIEF

Форматы хранения альфа-канала (прозрачности)

## CONTENT

Форматы хранения альфа-канала (прозрачности)

Значения:
* Premultiplied - предумноженный на цвет изображения формат
* Unpremultiplied - не предумноженный на цвет изображения формат
* Opaque - непрозрачное изображение


# ::stappler::bitmap::PixelFormat

## BRIEF

Форматы пикселей битовой карты

## CONTENT

Форматы пикселей битовой карты

Значения:
* Auto - автоопределение (используется при загрузке файлов)
* A8 - формат с единственным каналом прозрачности
* I8 - формат с единственным каналом интенсивности цвета
* IA88 - двухканальный формат с прозрачностью и интерсивностью цвета
* RGB888 - трёхканальный цветовой формат
* RGBA8888 - четырёхканальный формат с цветом и прозрачностью 


# ::stappler::bitmap::ImageInfo

## BRIEF

Структура информации о хранимом в битовой карте изображении

## CONTENT

Структура информации о хранимом в битовой карте изображении, используется при чтении и записи файлов.


# ::stappler::bitmap::ImageInfo::color

## BRIEF

Формат пикселя в битовой карте

## CONTENT

Тип: stappler::bitmap::PixelFormat

Формат пикселя в битовой карте

# ::stappler::bitmap::ImageInfo::alpha

## BRIEF

Формат прозрачности в битовой карте

## CONTENT

Тип: stappler::bitmap::AlphaFormat

Формат прозрачности в битовой карте


# ::stappler::bitmap::ImageInfo::width

## BRIEF

Ширина изображения в пикселях

## CONTENT

Тип: uint32_t

Ширина изображения в пикселях

# ::stappler::bitmap::ImageInfo::height

## BRIEF

Высота изображения в пикселях

## CONTENT

Тип: uint32_t

Высота изображения в пикселях

# ::stappler::bitmap::ImageInfo::stride

## BRIEF

Длина ряда пикселей в байтах

## CONTENT

Длина ряда пикселей в байтах

Тип: uint32_t


# ::stappler::bitmap::ImageInfo::format

## BRIEF

Соотвествующий изображению формат файла

## CONTENT

Тип: stappler::bitmap::BitmapFormat const*

Соотвествующий изображению формат файла

# ::stappler::bitmap::StrideFn

## BRIEF

Функция для динамического определения длины ряда

## CONTENT

Функция для динамического определения длины ряда. Передаётся в функции загрузки из файла, чтобы определять длину ряда на основе размера изображения

# ::stappler::bitmap::getImageSize(stappler::StringView,uint32_t&,uint32_t&)

## BRIEF

Определяет размер изображения в файле

## CONTENT

Определяет размер изображения в файле через путь к файлу

Параметры:
* stappler::StringView - путь к файлу изображения
* uint32_t& - (вывод) ширина изображения в пикселях
* uint32_t& - (вывод) длина изображения в пикселях

Возвращает:
* bool - true если размер успешно определён

# ::stappler::bitmap::getImageSize(io::Producer const&,uint32_t&,uint32_t&)

## BRIEF

Определяет размер изображения

## CONTENT

Определяет размер изображения на основе общего интерфейса ввода-вывода

Параметры:
* io::Producer const& - объект-породитель данных изображения
* uint32_t& - (вывод) ширина изображения в пикселях
* uint32_t& - (вывод) длина изображения в пикселях

Возвращает:
* bool - true если размер успешно определён

# ::stappler::bitmap::getImageInfo(stappler::BytesView,stappler::bitmap::ImageInfo&)

## BRIEF

Определяет параметры изображения в блоке памяти

## CONTENT

Определяет параметры изображения в блоке памяти

Параметры:
* stappler::BytesView - блок данных закодированного изображения в памяти
* stappler::bitmap::ImageInfo& - (вывод) данные изображения

Возвращает:
* bool - true если данные были успешно определены

# ::stappler::bitmap::isImage(stappler::StringView,bool)

## BRIEF

Определяет, является ли файл изображением

## CONTENT

Определяет, является ли файл изображением. Дополнительный параметр позволяет ограничить распознавание форматами, доступными для чтения.

Параметры:
* stappler::StringView - путь к файлу
* bool - true: определять только доступные для чтения форматы

Возвращает:
* bool - true если файл является кодированным изображением. Если запрошены только читаемые форматы, true, если формат также читаемый, false в противном случае

# ::stappler::bitmap::isImage(io::Producer const&,bool)

## BRIEF

Определяет, является ли объект изображением

## CONTENT

Определяет, является ли объект изображением. Дополнительный параметр позволяет ограничить распознавание форматами, доступными для чтения.

Параметры:
* io::Producer const& - объект-породитель данных изображения
* bool - true: определять только доступные для чтения форматы

Возвращает:
* bool - true если объект является кодированным изображением. Если запрошены только читаемые форматы, true, если формат также читаемый, false в противном случае

# ::stappler::bitmap::isImage(uint8_t const*,size_t,bool)

## BRIEF

Определяет, является ли объект в памяти изображением

## CONTENT

Определяет, является ли объект в памяти изображением. Дополнительный параметр позволяет ограничить распознавание форматами, доступными для чтения.

Параметры:
* uint8_t const* - указатель на память с хранимыми данными изображения
* size_t - размер блокапамяти изображения
* bool - true: определять только доступные для чтения форматы

Возвращает:
* bool - true если объект является кодированным изображением. Если запрошены только читаемые форматы, true, если формат также читаемый, false в противном случае

# ::stappler::bitmap::detectFormat(stappler::StringView)

## BRIEF

Определяет формат изображения файла

## CONTENT

Определяет формат изображения файла

Параметры:
* stappler::StringView - путь к файлу

Возвращает:
* Pair<stappler::bitmap::FileFormat, stappler::StringView> - формат изображения в файле и его каноническое имя

# ::stappler::bitmap::detectFormat(io::Producer const&)

## BRIEF

Определяет формат изображения объекта

## CONTENT

Определяет формат изображения объекта

Параметры:
* io::Producer const& - объект-породитель для данных изображения

Возвращает:
* Pair<stappler::bitmap::FileFormat, stappler::StringView> - формат изображения в файле и его каноническое имя

# ::stappler::bitmap::detectFormat(uint8_t const*,size_t)

## BRIEF

Определяет формат изображения в памяти

## CONTENT

Параметры:
* uint8_t const* - указатель на данные изображения
* size_t - размер блока данных

Возвращает:
* Pair<stappler::bitmap::FileFormat, stappler::StringView> - формат изображения в файле и его каноническое имя

# ::stappler::bitmap::getMimeType(stappler::bitmap::FileFormat)

## BRIEF

Возвращает соотвествующий стандартному формату MIME-тип

## CONTENT

Возвращает соотвествующий стандартному формату MIME-тип

Параметры:
* stappler::bitmap::FileFormat - один из предустановленных форматов

Возвращает:
* stappler::StringView - строка MIME-типа

# ::stappler::bitmap::getMimeType(stappler::StringView)

## BRIEF

Возвращает соотвествующий формату MIME-тип по каноническому имени формата

## CONTENT

Возвращает соотвествующий формату MIME-тип по каноническому имени формата

Параметры:
* stappler::StringView - каноническое имя формата

Возвращает:
* stappler::StringView - строка MIME-типа

# ::stappler::bitmap::check(stappler::bitmap::FileFormat,uint8_t const*,size_t)

## BRIEF

Проверяет, являются ли данные в памяти изображением определённого формата

## CONTENT

Проверяет, являются ли данные в памяти изображением определённого формата

Параметры:
* stappler::bitmap::FileFormat - проверяемый формат
* uint8_t const* - указатель на данные изображения
* size_t - размер блока данных изображения

Возвращает:
* bool - true если в блоке данных хранится изображение указанного формата

# ::stappler::bitmap::check(stappler::StringView,uint8_t const*,size_t)

## BRIEF

Проверяет, являются ли данные в памяти изображением определённого формата

## CONTENT

Параметры:
* stappler::StringView - каноническое имя формата изображения
* uint8_t const* - указатель на данные изображения
* size_t - размер блока данных изображения

Возвращает:
* bool - true если в блоке данных хранится изображение указанного формата

# ::stappler::bitmap::getBytesPerPixel(stappler::bitmap::PixelFormat)

## BRIEF

Возвращает число байт на пиксель для определённого формата пикселей

## CONTENT

Возвращает число байт на пиксель для определённого формата пикселей

Параметры:
* stappler::bitmap::PixelFormat - формат пикселей

Возвращает:
* uint8_t - число байт на один пиксель в данном формате

# ::stappler::bitmap::convertLine<stappler::bitmap::PixelFormat,stappler::bitmap::PixelFormat>(uint8_t const*,uint8_t*,uint32_t,uint32_t)

## BRIEF

Конвертирует ряд пикселей между двумя форматами пикселей

## CONTENT

Конвертирует ряд пикселей между двумя форматами пикселей. Соответствующим образом обрезает, дополняет или конвертирует (из или в градации серого) данные форматов. Блоки данных должны быть соотвествующего размера, иначе поведение не определено.

Параметры шаблона:
* stappler::bitmap::PixelFormat Source - исходный формат пикселей в ряду
* stappler::bitmap::PixelFormat Target - целевой формат пикселей

Параметры:
* uint8_t const* - указатель на исходный блок данных
* uint8_t* - указатель на блок памяти для записи
* uint32_t - число байт в исходном блоке пикселей
* uint32_t - число байт в целевом блоке пикселей


# ::stappler::bitmap::convertData<stappler::bitmap::PixelFormat,stappler::bitmap::PixelFormat>(stappler::BytesView,stappler::BytesView,uint32_t,uint32_t)

## BRIEF

Конвертирует битовую карту в памяти в другой формат пикселей

## CONTENT

Конвертирует битовую карту в памяти в другой формат пикселей. Соответствующим образом обрезает, дополняет или конвертирует (из или в градации серого) данные форматов. Блоки данных должны быть соотвествующего размера, иначе поведение не определено.

Параметры шаблона:
* stappler::bitmap::PixelFormat Source - исходный формат пикселей в ряду
* stappler::bitmap::PixelFormat Target - целевой формат пикселей

Параметры:
* stappler::BytesView - исходный блок данных
* stappler::BytesView - целевой блок данных
* uint32_t - исходная длина ряда или 0 для плотной упаковки
* uint32_t - целевая длина ряда или 0 для плотной упаковки

Возвращает:
* bool - true при успешной конвертации

# ::stappler::bitmap::BitmapWriter

## BRIEF

Структура для чтерия-записи битовых карт из кодированных избражений

## CONTENT

Структура для чтерия-записи битовых карт из кодированных избражений

Базовые классы:
* ImageInfo - включает в себя данные изображения


# ::stappler::bitmap::BitmapWriter::target

## BRIEF

Указатель на целевой объект

## CONTENT

Указатель на целевой объект

Тип: void*


# ::stappler::bitmap::BitmapWriter::getStride

## BRIEF

Функция для определения длины ряда

## CONTENT

Функция для определения длины ряда (или nullptr для плотной упаковки). Определяет длину ряда в байтах на основе формата пикселей и ширины в пикселях.

Тип: uint32_t(*)(void*,stappler::bitmap::PixelFormat,uint32_t)


# ::stappler::bitmap::BitmapWriter::push

## BRIEF

Функция добавления данных в битовую карту

## CONTENT

Функция добавления данных в битовую карту. Должна записывать переданные данные в конец текущего наполнения битовой карты

Тип: void(*)(void*,uint8_t const*,uint32_t)

Параметры:
void* - целевой объект
uint8_t const* - указатель на блок данных для записи
uint32_t - длина блока данных для записи в байтах


# ::stappler::bitmap::BitmapWriter::resize

## BRIEF

Функция для изменения целевого размера битовой карты

## CONTENT

Функция для изменения целевого размера битовой карты

Тип: void(*)(void*,uint32_t)

Параметры:
void* - целевой объект
uint32_t - целевой размер битовой карты в байтах

# ::stappler::bitmap::BitmapWriter::getData

## BRIEF

Функция чтения данных из битовой карты

## CONTENT

Функция чтения данных из битовой карты

Тип: uint8_t*(*)(void*,uint32_t)

Параметры:
void* - целевой объект
uint32_t - отступ для чтения из битовой карты в байтах

Возвращает:
uint8_t* - указатель в битовой карте

# ::stappler::bitmap::BitmapWriter::assign

## BRIEF

Функция копирования данных в битовую карту

## CONTENT

Функция копирования данных в битовую карту. Функция должна полностью заменить банные начиная с начала битовой карты.

Тип: void(*)(void*,uint8_t const*,uint32_t)

Параметры:
void* - целевой объект
uint8_t const* - указатель на блок данных для записи
uint32_t - длина блока данных для записи в байтах

# ::stappler::bitmap::BitmapWriter::clear

## BRIEF

Фунция очистки битовой карты

## CONTENT

Фунция очистки битовой карты. Функция должна полностью очистить битовую карту.

Тип: void(*)(void*)


# ::stappler::bitmap::BitmapFormat

## BRIEF

Интерфейс для работы с форматом изображения

## CONTENT

Интерфейс для работы с форматом изображения. Определяет функции для распознавания, получения информации, чтения и записи в определённый формат изображения.

# ::stappler::bitmap::BitmapFormat::Flags

## BRIEF

Флаги доступности функций формата

## CONTENT

Флаги доступности функций формата

Доступ: public

Значения:
* None - не определены
* Recognizable - изображение этого формата можно распознать
* Readable - изображение можно записать в формат
* Writable - изображение можно прочитать из формата


# ::stappler::bitmap::BitmapFormat::check_fn

## BRIEF

Функция проверки формата на соотвествие

## CONTENT

Доступ: public

Функция проверки формата на соотвествие

# ::stappler::bitmap::BitmapFormat::size_fn

## BRIEF

Функция получения размера изображения в пикселях

## CONTENT

Доступ: public

Функция получения размера изображения в пикселях

# ::stappler::bitmap::BitmapFormat::info_fn

## BRIEF

Функция получения информации об изображении

## CONTENT

Доступ: public

Функция получения информации об изображении

# ::stappler::bitmap::BitmapFormat::load_fn

## BRIEF

Функция загрузки и декодирования изображения из данных в памяти

## CONTENT

Доступ: public

Функция загрузки и декодирования изображения из данных в памяти

# ::stappler::bitmap::BitmapFormat::write_fn

## BRIEF

Функция записи и кодирования изображения в память

## CONTENT

Доступ: public

Функция записи и кодирования изображения в память

# ::stappler::bitmap::BitmapFormat::save_fn

## BRIEF

Функция записи и кодирования изображения в файл

## CONTENT

Доступ: public

Функция записи и кодирования изображения в файл

# ::stappler::bitmap::BitmapFormat::add(stappler::bitmap::BitmapFormat&&)

## BRIEF

Регистрирует новый определённый пользователем формат изображения

## CONTENT

Доступ: public

Регистрирует новый определённый пользователем формат изображения

Параметры:
* stappler::bitmap::BitmapFormat&& - новый формат изображения


# ::stappler::bitmap::BitmapFormat::BitmapFormat(stappler::bitmap::FileFormat,stappler::bitmap::BitmapFormat::check_fn const&,stappler::bitmap::BitmapFormat::size_fn const&,stappler::bitmap::BitmapFormat::info_fn const&,stappler::bitmap::BitmapFormat::load_fn const&,stappler::bitmap::BitmapFormat::write_fn const&,stappler::bitmap::BitmapFormat::save_fn const&)

## BRIEF

Конструктор нового формата изображения

## CONTENT

Доступ: public

Конструктор нового предустановленного формата изображения. Позволяет заменить предустановленный формат.

Параметры:
* stappler::bitmap::FileFormat - имя формата изображения
* stappler::bitmap::BitmapFormat::check_fn const& - функция проверки
* stappler::bitmap::BitmapFormat::size_fn const& - функция размера изображения
* stappler::bitmap::BitmapFormat::info_fn const& - функция информации об изображении
* stappler::bitmap::BitmapFormat::load_fn const& - функция загрузки изображения
* stappler::bitmap::BitmapFormat::write_fn const& - функция записи изображения в память
* stappler::bitmap::BitmapFormat::save_fn const& - функция записи изображения в файл

# ::stappler::bitmap::BitmapFormat::BitmapFormat(stappler::StringView,stappler::StringView,stappler::bitmap::BitmapFormat::check_fn const&,stappler::bitmap::BitmapFormat::size_fn const&,stappler::bitmap::BitmapFormat::info_fn const&,stappler::bitmap::BitmapFormat::load_fn const&,stappler::bitmap::BitmapFormat::write_fn const&,stappler::bitmap::BitmapFormat::save_fn const&)

## BRIEF

Конструктор нового формата изображения

## CONTENT

Конструктор нового пользовательского формата изображения.

Доступ: public

Параметры:
* stappler::StringView - каноническое имя формата
* stappler::StringView - MIME-тип формата
* stappler::bitmap::BitmapFormat::check_fn const& - функция проверки
* stappler::bitmap::BitmapFormat::size_fn const& - функция размера изображения
* stappler::bitmap::BitmapFormat::info_fn const& - функция информации об изображении
* stappler::bitmap::BitmapFormat::load_fn const& - функция загрузки изображения
* stappler::bitmap::BitmapFormat::write_fn const& - функция записи изображения в память
* stappler::bitmap::BitmapFormat::save_fn const& - функция записи изображения в файл


# ::stappler::bitmap::BitmapFormat::getName() const

## BRIEF

Возвращает каноническое имя формата

## CONTENT

Доступ: public

Возвращает каноническое имя формата

Возвращает:
* stappler::StringView

# ::stappler::bitmap::BitmapFormat::getMime() const

## BRIEF

Возвращает MIME-тип формата

## CONTENT

Доступ: public

Возвращает MIME-тип формата

Возвращает:
* stappler::StringView

# ::stappler::bitmap::BitmapFormat::isRecognizable() const

## BRIEF

Проверяет, возможно ли распознавание этого формата

## CONTENT

Доступ: public

Проверяет, возможно ли распознавание этого формата

Возвращает:
* bool

# ::stappler::bitmap::BitmapFormat::isReadable() const

## BRIEF

Проверяет, возможно ли чтение этого формата

## CONTENT

Доступ: public

Проверяет, возможно ли чтение этого формата

Возвращает:
* bool

# ::stappler::bitmap::BitmapFormat::isWritable() const

## BRIEF

Проверяет, возможна ли запись этого формата

## CONTENT

Доступ: public

Проверяет, возможна ли запись этого формата

Возвращает:
* bool

# ::stappler::bitmap::BitmapFormat::getFlags() const

## BRIEF

Возвращает флаги доступности функция для формата

## CONTENT

Доступ: public

Возвращает флаги доступности функция для формата

Возвращает:
* stappler::bitmap::BitmapFormat::Flags

# ::stappler::bitmap::BitmapFormat::getFormat() const

## BRIEF

Возвращает идентификатор предустановленного формата

## CONTENT

Доступ: public

Возвращает идентификатор предустановленного формата

Возвращает:
* stappler::bitmap::FileFormat

# ::stappler::bitmap::BitmapFormat::is(uint8_t const*,size_t) const

## BRIEF

Проверяет, являются ли блок данных изображением этого формата

## CONTENT

Доступ: public

Проверяет, являются ли блок данных изображением этого формата

Параметры:
* uint8_t const* - указатель на блок данных
* size_t - размер блока данных

Возвращает:
* bool - true если данные являются изображением этого формата

# ::stappler::bitmap::BitmapFormat::getSize(io::Producer const&,StackBuffer<512>&,uint32_t&,uint32_t&) const

## BRIEF

Получает размер изображения

## CONTENT

Доступ: public

Получает размер изображения

Параметры:
* io::Producer const& - объект-породитель изображения
* StackBuffer<512>& - временный буфер в памяти для работы
* uint32_t& - (вывод) ширина изображения в пикселях
* uint32_t& - (вывод) высота изображения в пикселях

Возвращает:
* bool - true если размер успешно прочитан

# ::stappler::bitmap::BitmapFormat::getInfo(uint8_t const*,size_t,stappler::bitmap::ImageInfo&) const

## BRIEF

Получает информацию об изображении

## CONTENT

Доступ: public

Получает информацию об изображении

Параметры:
* uint8_t const* - указатель на данные изображения в памяти
* size_t - размер блока данных
* stappler::bitmap::ImageInfo& - (вывод) информация об изображении

Возвращает:
* bool - true если информация успешно получена

# ::stappler::bitmap::BitmapFormat::load(uint8_t const*,size_t,stappler::bitmap::BitmapWriter&) const

## BRIEF

Загружает изображение из блока памяти

## CONTENT

Доступ: public

Загружает изображение из блока памяти

Параметры:
* uint8_t const* - указатель на данные изображения в памяти
* size_t - размер блока данных
* stappler::bitmap::BitmapWriter& - (ввод/вывод) структура для записи новой битовой карты

Возвращает:
* bool - true если изображение успешно загружено

# ::stappler::bitmap::BitmapFormat::write(uint8_t const*,stappler::bitmap::BitmapWriter&,bool) const

## BRIEF

Записывает изображение в память

## CONTENT

Доступ: public

Записывает изображение в память

Параметры:
* uint8_t const* - указатель на данные битовой карты
* stappler::bitmap::BitmapWriter& - (ввод/вывод) структура для чтения битовой карты, содержащая информацию об изображении
* bool - true если изображение необходимо кодировать снизу-вверх. В противном случае, кодируется сверху-вниз.

Возвращает:
* bool - true если изображение успешно записано

# ::stappler::bitmap::BitmapFormat::save(stappler::StringView,uint8_t const*,stappler::bitmap::BitmapWriter&,bool) const

## BRIEF

Записывает изображение в файл

## CONTENT

Доступ: public

Записывает изображение в файл

Параметры:
* stappler::StringView - путь к новому файлу
* uint8_t const* - указатель на данные битовой карты
* stappler::bitmap::BitmapWriter& - (ввод/вывод) структура для чтения битовой карты, содержащая информацию об изображении
* bool - true если изображение необходимо кодировать снизу-вверх. В противном случае, кодируется сверху-вниз.

Возвращает:
* bool - true если изображение успешно записано

# ::stappler::bitmap::BitmapFormat::getCheckFn() const

## BRIEF

Возвращает функцию проверки

## CONTENT

Доступ: public

Возвращает функцию проверки

Возвращает:
* check_fn

# ::stappler::bitmap::BitmapFormat::getSizeFn() const

## BRIEF

Возвращает функцию определения размера

## CONTENT

Доступ: public

Возвращает функцию определения размера

Возвращает:
* size_fn

# ::stappler::bitmap::BitmapFormat::getInfoFn() const

## BRIEF

Возвращает функцию получения информации об изображении

## CONTENT

Доступ: public

Возвращает функцию получения информации об изображении

Возвращает:
* info_fn

# ::stappler::bitmap::BitmapFormat::getLoadFn() const

## BRIEF

Возвращает функцию загрузки битовой карты

## CONTENT

Доступ: public

Возвращает функцию загрузки битовой карты

Возвращает:
* load_fn

# ::stappler::bitmap::BitmapFormat::getWriteFn() const

## BRIEF

Возвращает функцию записи битовой карты

## CONTENT

Доступ: public

Возвращает функцию записи битовой карты

Возвращает:
* write_fn

# ::stappler::bitmap::BitmapFormat::getSaveFn() const

## BRIEF

Возвращает функцию сохранения битовой карты в файл

## CONTENT

Доступ: public

Возвращает функцию сохранения битовой карты в файл

Возвращает:
* save_fn

# ::stappler::bitmap::BitmapFormat::check_ptr

## BRIEF

Функция проверки

## CONTENT

Доступ: protected

Функция проверки

Тип: check_fn


# ::stappler::bitmap::BitmapFormat::size_ptr

## BRIEF

Функция определения размера

## CONTENT

Доступ: protected

Функция определения размера

Тип: size_fn


# ::stappler::bitmap::BitmapFormat::info_ptr

## BRIEF

Функция получения информации об изображении

## CONTENT

Доступ: protected

Функция получения информации об изображении

Тип: info_fn


# ::stappler::bitmap::BitmapFormat::load_ptr

## BRIEF

Функция загрузки битовой карты

## CONTENT

Доступ: protected

Функция загрузки битовой карты

Тип: load_fn


# ::stappler::bitmap::BitmapFormat::write_ptr

## BRIEF

Функция записи битовой карты

## CONTENT

Доступ: protected

Функция записи битовой карты

Тип: write_fn


# ::stappler::bitmap::BitmapFormat::save_ptr

## BRIEF

Функция сохранения битовой карты в файл

## CONTENT

Доступ: protected

Функция сохранения битовой карты в файл

Тип: save_fn


# ::stappler::bitmap::BitmapFormat::_flags

## BRIEF

Флаги доступности функций формата

## CONTENT

Доступ: protected

Флаги доступности функций формата

Тип: stappler::bitmap::BitmapFormat::Flags


# ::stappler::bitmap::BitmapFormat::_format

## BRIEF

Имя предустановленного формата

## CONTENT

Доступ: protected

Имя предустановленного формата

Тип: stappler::bitmap::FileFormat


# ::stappler::bitmap::BitmapFormat::_name

## BRIEF

Каноническое текстовое имя формата

## CONTENT

Доступ: protected

Каноническое текстовое имя формата

Тип: stappler::StringView


# ::stappler::bitmap::BitmapFormat::_mime

## BRIEF

MIME-тип формата

## CONTENT

Доступ: protected

MIME-тип формата

Тип: stappler::StringView


# ::stappler::bitmap::operator|(BitmapFormat::Flags const&,BitmapFormat::Flags const&)

## BRIEF

Функция побитового ИЛИ (создана автоматически)

## CONTENT

Функция побитового ИЛИ (создана автоматически)

Параметры:
* BitmapFormat::Flags const&
* BitmapFormat::Flags const&

Возвращает:
* BitmapFormat::Flags

# ::stappler::bitmap::operator&(BitmapFormat::Flags const&,BitmapFormat::Flags const&)

## BRIEF

Функция побитового И (создана автоматически)

## CONTENT

Функция побитового И (создана автоматически)

Параметры:
* BitmapFormat::Flags const&
* BitmapFormat::Flags const&

Возвращает:
* BitmapFormat::Flags

# ::stappler::bitmap::operator^(BitmapFormat::Flags const&,BitmapFormat::Flags const&)

## BRIEF

Функция побитового исключающего ИЛИ (создана автоматически)

## CONTENT

Функция побитового исключающего ИЛИ (создана автоматически)

Параметры:
* BitmapFormat::Flags const&
* BitmapFormat::Flags const&

Возвращает:
* BitmapFormat::Flags

# ::stappler::bitmap::operator|=(BitmapFormat::Flags&,BitmapFormat::Flags const&)

## BRIEF

Функция побитового ИЛИ (создана автоматически)

## CONTENT

Функция побитового ИЛИ (создана автоматически)

Параметры:
* BitmapFormat::Flags&
* BitmapFormat::Flags const&

Возвращает:
* BitmapFormat::Flags&

# ::stappler::bitmap::operator&=(BitmapFormat::Flags&,BitmapFormat::Flags const&)

## BRIEF

Функция побитового И (создана автоматически)

## CONTENT

Функция побитового И (создана автоматически)

Параметры:
* BitmapFormat::Flags&
* BitmapFormat::Flags const&

Возвращает:
* BitmapFormat::Flags&

# ::stappler::bitmap::operator^=(BitmapFormat::Flags&,BitmapFormat::Flags const&)

## BRIEF

Функция побитового исключающего ИЛИ (создана автоматически)

## CONTENT

Функция побитового исключающего ИЛИ (создана автоматически)

Параметры:
* BitmapFormat::Flags&
* BitmapFormat::Flags const&

Возвращает:
* BitmapFormat::Flags&

# ::stappler::bitmap::operator==(BitmapFormat::Flags const&,std::underlying_type<BitmapFormat::Flags>::type const&)

## BRIEF

Функция сравнения (создана автоматически)

## CONTENT

Функция сравнения (создана автоматически)

Параметры:
* BitmapFormat::Flags const&
* std::underlying_type<BitmapFormat::Flags>::type const&

Возвращает:
* bool

# ::stappler::bitmap::operator==(std::underlying_type<BitmapFormat::Flags>::type const&,BitmapFormat::Flags const&)

## BRIEF

Функция сравнения (создана автоматически)

## CONTENT

Функция сравнения (создана автоматически)

Параметры:
* std::underlying_type<BitmapFormat::Flags>::type const&
* BitmapFormat::Flags const&

Возвращает:
* bool

# ::stappler::bitmap::operator!=(BitmapFormat::Flags const&,std::underlying_type<BitmapFormat::Flags>::type const&)

## BRIEF

Функция сравнения (создана автоматически)

## CONTENT

Функция сравнения (создана автоматически)

Параметры:
* BitmapFormat::Flags const&
* std::underlying_type<BitmapFormat::Flags>::type const&

Возвращает:
* bool

# ::stappler::bitmap::operator!=(std::underlying_type<BitmapFormat::Flags>::type const&,BitmapFormat::Flags const&)

## BRIEF

Функция сравнения (создана автоматически)

## CONTENT

Функция сравнения (создана автоматически)

Параметры:
* std::underlying_type<BitmapFormat::Flags>::type const&
* BitmapFormat::Flags const&

Возвращает:
* bool

# ::stappler::bitmap::operator~(BitmapFormat::Flags const&)

## BRIEF

Функция побитовой инверсии (создана автоматически)

## CONTENT

Функция побитовой инверсии (создана автоматически)

Параметры:
* BitmapFormat::Flags const&

Возвращает:
* BitmapFormat::Flags