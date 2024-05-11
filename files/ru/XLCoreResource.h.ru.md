Title: XLCoreResource.h


# XENOLITH_CORE_XLCORERESOURCE_H_

## BRIEF

Заголовок типа ресурса

## CONTENT

Заголовок типа ресурса


# ::stappler::xenolith::core::Resource

## BRIEF

Тип ресурса

## CONTENT

Тип ресурса. Используется для загрузки изображений и буферов на устройства.

Минимизирует число используемых ресурсов на стороне устройства.

Базовые классы:
* NamedRef


# ::stappler::xenolith::core::Resource::loadImageMemoryData(uint8_t*,uint64_t,stappler::BytesView,stappler::xenolith::core::ImageFormat,ImageData::DataCallback const&)

## BRIEF

Загружает изображение в предоставленный буфер устройства

## CONTENT

Доступ: public

Загружает изображение в предоставленный буфер устройства. Минимизирует число операций копирования.

Параметры:
* uint8_t* - целевой буфер
* uint64_t - размер целевого буфера
* stappler::BytesView - данные в памяти
* stappler::xenolith::core::ImageFormat
* ImageData::DataCallback const&


# ::stappler::xenolith::core::Resource::loadImageFileData(uint8_t*,uint64_t,stappler::StringView,stappler::xenolith::core::ImageFormat,ImageData::DataCallback const&)

## BRIEF

Загружает изображение в предоставленный буфер устройства

## CONTENT

Доступ: public

Загружает изображение в предоставленный буфер устройства. Минимизирует число операций копирования.

Параметры:
* uint8_t* - целевой буфер
* uint64_t - размер целевого буфера
* stappler::StringView - путь к файлу
* stappler::xenolith::core::ImageFormat
* ImageData::DataCallback const&


# ::stappler::xenolith::core::Resource::Resource()

## BRIEF

Конструктор

## CONTENT

Доступ: public

Конструктор


# ::stappler::xenolith::core::Resource::~Resource()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор


# ::stappler::xenolith::core::Resource::init(stappler::xenolith::core::Resource::Builder&&)

## BRIEF

Создаёт ресурс из сборщика

## CONTENT

Доступ: public

Создаёт ресурс из сборщика

Параметры:
* stappler::xenolith::core::Resource::Builder&&

Возвращает:
* bool

# ::stappler::xenolith::core::Resource::clear()

## BRIEF

Очищает ресурс

## CONTENT

Доступ: public

Очищает ресурс


# ::stappler::xenolith::core::Resource::isCompiled() const

## BRIEF

Проверяет, собран ли ресурс на стороне устройства

## CONTENT

Доступ: public

Проверяет, собран ли ресурс на стороне устройства

Возвращает:
* bool

# ::stappler::xenolith::core::Resource::setCompiled(bool)

## BRIEF

Устанавливает флаг компиляции

## CONTENT

Доступ: public

Устанавливает флаг компиляции

Параметры:
* bool


# ::stappler::xenolith::core::Resource::getOwner() const

## BRIEF

Получает очередь, владеющую ресурсом

## CONTENT

Доступ: public

Получает очередь, владеющую ресурсом

Возвращает:
* stappler::xenolith::core::Queue const*

# ::stappler::xenolith::core::Resource::setOwner(stappler::xenolith::core::Queue const*)

## BRIEF

Устанавливает очередь, владеющую ресурсом

## CONTENT

Доступ: public

Устанавливает очередь, владеющую ресурсом

Параметры:
* stappler::xenolith::core::Queue const*


# ::stappler::xenolith::core::Resource::getName() const

## BRIEF

Возвращает название ресурса

## CONTENT

Доступ: public

Возвращает название ресурса

Возвращает:
* stappler::StringView

# ::stappler::xenolith::core::Resource::getPool() const

## BRIEF

Возвращает пул памяти для данных ресурса

## CONTENT

Доступ: public

Возвращает пул памяти для данных ресурса

Возвращает:
* memory::pool_t*

# ::stappler::xenolith::core::Resource::getBuffers() const

## BRIEF

Возвращает буферы в ресурсе

## CONTENT

Доступ: public

Возвращает буферы в ресурсе

Возвращает:
* HashTable<stappler::xenolith::core::BufferData *> const&

# ::stappler::xenolith::core::Resource::getImages() const

## BRIEF

Возвращает изображения в ресурсе

## CONTENT

Доступ: public

Возвращает изображения в ресурсе

Возвращает:
* HashTable<stappler::xenolith::core::ImageData *> const&

# ::stappler::xenolith::core::Resource::getBuffer(stappler::StringView) const

## BRIEF

Возвращает буфер по названию

## CONTENT

Доступ: public

Возвращает буфер по названию

Параметры:
* stappler::StringView

Возвращает:
* stappler::xenolith::core::BufferData const*

# ::stappler::xenolith::core::Resource::getImage(stappler::StringView) const

## BRIEF

Возвращает изображение по названию

## CONTENT

Доступ: public

Возвращает изображение по названию

Параметры:
* stappler::StringView

Возвращает:
* stappler::xenolith::core::ImageData const*

# ::stappler::xenolith::core::Resource::_data

## BRIEF

Данные ресурса

## CONTENT

Доступ: protected

Данные ресурса

Тип: stappler::xenolith::core::Resource::ResourceData*


# ::stappler::xenolith::core::Builder

## BRIEF

Сборщик ресурса

## CONTENT

Сборщик ресурса


# ::stappler::xenolith::core::Builder::Builder(stappler::StringView)

## BRIEF

Создаёт сборщик

## CONTENT

Доступ: public

Создаёт сборщик

Параметры:
* stappler::StringView


# ::stappler::xenolith::core::Builder::~Builder()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор
# ::stappler::xenolith::core::Builder::addBufferByRef(stappler::StringView,stappler::xenolith::core::BufferInfo&&,stappler::BytesView,Rc<stappler::xenolith::core::DataAtlas>&&,stappler::xenolith::core::AccessType)

## BRIEF

Добавляет буфер в ресурс

## CONTENT

Доступ: public

Добавляет буфер в ресурс. Не копирует память.

Параметры:
* stappler::StringView
* stappler::xenolith::core::BufferInfo&&
* stappler::BytesView
* Rc<stappler::xenolith::core::DataAtlas>&&
* stappler::xenolith::core::AccessType

Возвращает:
* stappler::xenolith::core::BufferData const*

# ::stappler::xenolith::core::Builder::addBuffer(stappler::StringView,stappler::xenolith::core::BufferInfo&&,stappler::FilePath,Rc<stappler::xenolith::core::DataAtlas>&&,stappler::xenolith::core::AccessType)

## BRIEF

Добавляет буфер в ресурс

## CONTENT

Доступ: public

Добавляет буфер в ресурс

Параметры:
* stappler::StringView
* stappler::xenolith::core::BufferInfo&&
* stappler::FilePath
* Rc<stappler::xenolith::core::DataAtlas>&&
* stappler::xenolith::core::AccessType

Возвращает:
* stappler::xenolith::core::BufferData const*

# ::stappler::xenolith::core::Builder::addBuffer(stappler::StringView,stappler::xenolith::core::BufferInfo&&,stappler::BytesView,Rc<stappler::xenolith::core::DataAtlas>&&,stappler::xenolith::core::AccessType)

## BRIEF

Добавляет буфер в ресурс

## CONTENT

Доступ: public

Добавляет буфер в ресурс

Параметры:
* stappler::StringView
* stappler::xenolith::core::BufferInfo&&
* stappler::BytesView
* Rc<stappler::xenolith::core::DataAtlas>&&
* stappler::xenolith::core::AccessType

Возвращает:
* stappler::xenolith::core::BufferData const*

# ::stappler::xenolith::core::Builder::addBuffer(stappler::StringView,stappler::xenolith::core::BufferInfo&&,memory::function<void (uint8_t *, uint64_t, const BufferData::DataCallback &)> const&,Rc<stappler::xenolith::core::DataAtlas>&&,stappler::xenolith::core::AccessType)

## BRIEF

Добавляет буфер в ресурс

## CONTENT

Доступ: public

Добавляет буфер в ресурс

Параметры:
* stappler::StringView
* stappler::xenolith::core::BufferInfo&&
* memory::function<void (uint8_t *, uint64_t, const BufferData::DataCallback &)> const&
* Rc<stappler::xenolith::core::DataAtlas>&&
* stappler::xenolith::core::AccessType

Возвращает:
* stappler::xenolith::core::BufferData const*

# ::stappler::xenolith::core::Builder::addImageByRef(stappler::StringView,stappler::xenolith::core::ImageInfo&&,stappler::BytesView,stappler::xenolith::core::AttachmentLayout,stappler::xenolith::core::AccessType)

## BRIEF

Добавляет изображение в ресурс

## CONTENT

Доступ: public

Добавляет изображение в ресурс. Не копирует память.

Параметры:
* stappler::StringView
* stappler::xenolith::core::ImageInfo&&
* stappler::BytesView
* stappler::xenolith::core::AttachmentLayout
* stappler::xenolith::core::AccessType

Возвращает:
* stappler::xenolith::core::ImageData const*

# ::stappler::xenolith::core::Builder::addImage(stappler::StringView,stappler::xenolith::core::ImageInfo&&,stappler::FilePath,stappler::xenolith::core::AttachmentLayout,stappler::xenolith::core::AccessType)

## BRIEF

Добавляет изображение в ресурс

## CONTENT

Доступ: public

Добавляет изображение в ресурс

Параметры:
* stappler::StringView
* stappler::xenolith::core::ImageInfo&&
* stappler::FilePath
* stappler::xenolith::core::AttachmentLayout
* stappler::xenolith::core::AccessType

Возвращает:
* stappler::xenolith::core::ImageData const*

# ::stappler::xenolith::core::Builder::addImage(stappler::StringView,stappler::xenolith::core::ImageInfo&&,stappler::BytesView,stappler::xenolith::core::AttachmentLayout,stappler::xenolith::core::AccessType)

## BRIEF

Добавляет изображение в ресурс

## CONTENT

Доступ: public

Добавляет изображение в ресурс

Параметры:
* stappler::StringView
* stappler::xenolith::core::ImageInfo&&
* stappler::BytesView
* stappler::xenolith::core::AttachmentLayout
* stappler::xenolith::core::AccessType

Возвращает:
* stappler::xenolith::core::ImageData const*

# ::stappler::xenolith::core::Builder::addImage(stappler::StringView,stappler::xenolith::core::ImageInfo&&,memory::function<void (uint8_t *, uint64_t, const ImageData::DataCallback &)> const&,stappler::xenolith::core::AttachmentLayout,stappler::xenolith::core::AccessType)

## BRIEF

Добавляет изображение в ресурс

## CONTENT

Доступ: public

Добавляет изображение в ресурс

Параметры:
* stappler::StringView
* stappler::xenolith::core::ImageInfo&&
* memory::function<void (uint8_t *, uint64_t, const ImageData::DataCallback &)> const&
* stappler::xenolith::core::AttachmentLayout
* stappler::xenolith::core::AccessType

Возвращает:
* stappler::xenolith::core::ImageData const*

# ::stappler::xenolith::core::Builder::empty() const

## BRIEF

Проверяет ресурс на пустоту

## CONTENT

Доступ: public

Проверяет ресурс на пустоту

Возвращает:
* bool

# ::stappler::xenolith::core::Builder::_data

## BRIEF

Данные ресурса

## CONTENT

Доступ: protected

Данные ресурса

Тип: stappler::xenolith::core::Resource::ResourceData*
