Title: XLCoreResource.h


# XENOLITH_CORE_XLCORERESOURCE_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::core::Resource

## BRIEF

## CONTENT

Базовые классы:
* NamedRef


# ::stappler::xenolith::core::Resource::loadImageFileData(uint8_t*,uint64_t,stappler::StringView,stappler::xenolith::core::ImageFormat,ImageData::DataCallback const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint8_t*
* uint64_t
* stappler::StringView
* stappler::xenolith::core::ImageFormat
* ImageData::DataCallback const&


# ::stappler::xenolith::core::Resource::Resource()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::Resource::~Resource()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::Resource::init(stappler::xenolith::core::Resource::Builder&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::Resource::Builder&&

Возвращает:
* bool

# ::stappler::xenolith::core::Resource::clear()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::Resource::isCompiled() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::core::Resource::setCompiled(bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* bool


# ::stappler::xenolith::core::Resource::getOwner() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::core::Queue const*

# ::stappler::xenolith::core::Resource::setOwner(stappler::xenolith::core::Queue const*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::Queue const*


# ::stappler::xenolith::core::Resource::getName() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::StringView

# ::stappler::xenolith::core::Resource::getPool() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* memory::pool_t*

# ::stappler::xenolith::core::Resource::getBuffers() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* HashTable<stappler::xenolith::core::BufferData *> const&

# ::stappler::xenolith::core::Resource::getImages() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* HashTable<stappler::xenolith::core::ImageData *> const&

# ::stappler::xenolith::core::Resource::getBuffer(stappler::StringView) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView

Возвращает:
* stappler::xenolith::core::BufferData const*

# ::stappler::xenolith::core::Resource::getImage(stappler::StringView) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView

Возвращает:
* stappler::xenolith::core::ImageData const*

# ::stappler::xenolith::core::Resource::_data

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::core::Resource::ResourceData*


# ::stappler::xenolith::core::Builder

## BRIEF

## CONTENT


# ::stappler::xenolith::core::Builder::Builder(stappler::StringView)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView


# ::stappler::xenolith::core::Builder::~Builder()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::Builder::addBufferByRef(stappler::StringView,stappler::xenolith::core::BufferInfo&&,stappler::BytesView,Rc<stappler::xenolith::core::DataAtlas>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView
* stappler::xenolith::core::BufferInfo&&
* stappler::BytesView
* Rc<stappler::xenolith::core::DataAtlas>&&

Возвращает:
* stappler::xenolith::core::BufferData const*

# ::stappler::xenolith::core::Builder::addBuffer(stappler::StringView,stappler::xenolith::core::BufferInfo&&,stappler::FilePath,Rc<stappler::xenolith::core::DataAtlas>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView
* stappler::xenolith::core::BufferInfo&&
* stappler::FilePath
* Rc<stappler::xenolith::core::DataAtlas>&&

Возвращает:
* stappler::xenolith::core::BufferData const*

# ::stappler::xenolith::core::Builder::addBuffer(stappler::StringView,stappler::xenolith::core::BufferInfo&&,stappler::BytesView,Rc<stappler::xenolith::core::DataAtlas>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView
* stappler::xenolith::core::BufferInfo&&
* stappler::BytesView
* Rc<stappler::xenolith::core::DataAtlas>&&

Возвращает:
* stappler::xenolith::core::BufferData const*

# ::stappler::xenolith::core::Builder::addBuffer(stappler::StringView,stappler::xenolith::core::BufferInfo&&,memory::function<void (uint8_t *, uint64_t, const BufferData::DataCallback &)> const&,Rc<stappler::xenolith::core::DataAtlas>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView
* stappler::xenolith::core::BufferInfo&&
* memory::function<void (uint8_t *, uint64_t, const BufferData::DataCallback &)> const&
* Rc<stappler::xenolith::core::DataAtlas>&&

Возвращает:
* stappler::xenolith::core::BufferData const*

# ::stappler::xenolith::core::Builder::addImageByRef(stappler::StringView,stappler::xenolith::core::ImageInfo&&,stappler::BytesView)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView
* stappler::xenolith::core::ImageInfo&&
* stappler::BytesView

Возвращает:
* stappler::xenolith::core::ImageData const*

# ::stappler::xenolith::core::Builder::addImage(stappler::StringView,stappler::xenolith::core::ImageInfo&&,stappler::FilePath)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView
* stappler::xenolith::core::ImageInfo&&
* stappler::FilePath

Возвращает:
* stappler::xenolith::core::ImageData const*

# ::stappler::xenolith::core::Builder::addImage(stappler::StringView,stappler::xenolith::core::ImageInfo&&,stappler::BytesView)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView
* stappler::xenolith::core::ImageInfo&&
* stappler::BytesView

Возвращает:
* stappler::xenolith::core::ImageData const*

# ::stappler::xenolith::core::Builder::addImage(stappler::StringView,stappler::xenolith::core::ImageInfo&&,memory::function<void (uint8_t *, uint64_t, const ImageData::DataCallback &)> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView
* stappler::xenolith::core::ImageInfo&&
* memory::function<void (uint8_t *, uint64_t, const ImageData::DataCallback &)> const&

Возвращает:
* stappler::xenolith::core::ImageData const*

# ::stappler::xenolith::core::Builder::_data

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::core::Resource::ResourceData*
