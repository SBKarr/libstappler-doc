Title: XLCoreDynamicImage.h


# XENOLITH_CORE_XLCOREDYNAMICIMAGE_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::core::DynamicImageInstance

## BRIEF

## CONTENT

Базовые классы:
* Ref


# ::stappler::xenolith::core::DynamicImageInstance::~DynamicImageInstance()

## BRIEF

## CONTENT


# ::stappler::xenolith::core::DynamicImageInstance::data

## BRIEF

## CONTENT

Тип: stappler::xenolith::core::ImageData


# ::stappler::xenolith::core::DynamicImageInstance::userdata

## BRIEF

## CONTENT

Тип: Rc<stappler::mem_std::Ref>


# ::stappler::xenolith::core::DynamicImageInstance::image

## BRIEF

## CONTENT

Тип: Rc<stappler::xenolith::core::DynamicImage>


# ::stappler::xenolith::core::DynamicImageInstance::gen

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::xenolith::core::DynamicImage

## BRIEF

## CONTENT

Базовые классы:
* Ref


# ::stappler::xenolith::core::DynamicImage::~DynamicImage()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::DynamicImage::init(Callback<bool (stappler::xenolith::core::DynamicImage::Builder &)> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Callback<bool (stappler::xenolith::core::DynamicImage::Builder &)> const&

Возвращает:
* bool

# ::stappler::xenolith::core::DynamicImage::finalize()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::DynamicImage::getInstance()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Rc<stappler::xenolith::core::DynamicImageInstance>

# ::stappler::xenolith::core::DynamicImage::updateInstance(stappler::xenolith::core::Loop&,Rc<stappler::xenolith::core::ImageObject> const&,Rc<stappler::xenolith::core::DataAtlas>&&,Rc<stappler::mem_std::Ref>&&,Vector<Rc<stappler::xenolith::core::DependencyEvent>> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::Loop&
* Rc<stappler::xenolith::core::ImageObject> const&
* Rc<stappler::xenolith::core::DataAtlas>&&
* Rc<stappler::mem_std::Ref>&&
* Vector<Rc<stappler::xenolith::core::DependencyEvent>> const&


# ::stappler::xenolith::core::DynamicImage::addTracker(stappler::xenolith::core::MaterialAttachment const*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::MaterialAttachment const*


# ::stappler::xenolith::core::DynamicImage::removeTracker(stappler::xenolith::core::MaterialAttachment const*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::MaterialAttachment const*


# ::stappler::xenolith::core::DynamicImage::getInfo() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::core::ImageInfo

# ::stappler::xenolith::core::DynamicImage::getExtent() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::Extent3

# ::stappler::xenolith::core::DynamicImage::setImage(Rc<stappler::xenolith::core::ImageObject> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Rc<stappler::xenolith::core::ImageObject> const&


# ::stappler::xenolith::core::DynamicImage::acquireData(Callback<void (stappler::BytesView)> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Callback<void (stappler::BytesView)> const&


# ::stappler::xenolith::core::DynamicImage::_mutex

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::mem_std::Mutex


# ::stappler::xenolith::core::DynamicImage::_keyData

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::mem_std::String


# ::stappler::xenolith::core::DynamicImage::_imageData

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::mem_std::Bytes


# ::stappler::xenolith::core::DynamicImage::_data

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::core::ImageData


# ::stappler::xenolith::core::DynamicImage::_instance

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::xenolith::core::DynamicImageInstance>


# ::stappler::xenolith::core::DynamicImage::_materialTrackers

## BRIEF

## CONTENT

Доступ: protected

Тип: Set<const stappler::xenolith::core::MaterialAttachment *>


# ::stappler::xenolith::core::Builder

## BRIEF

## CONTENT


# ::stappler::xenolith::core::Builder::setImageByRef(stappler::StringView,stappler::xenolith::core::ImageInfo&&,stappler::BytesView,Rc<stappler::xenolith::core::DataAtlas>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView
* stappler::xenolith::core::ImageInfo&&
* stappler::BytesView
* Rc<stappler::xenolith::core::DataAtlas>&&

Возвращает:
* stappler::xenolith::core::ImageData const*

# ::stappler::xenolith::core::Builder::setImage(stappler::StringView,stappler::xenolith::core::ImageInfo&&,stappler::FilePath,Rc<stappler::xenolith::core::DataAtlas>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView
* stappler::xenolith::core::ImageInfo&&
* stappler::FilePath
* Rc<stappler::xenolith::core::DataAtlas>&&

Возвращает:
* stappler::xenolith::core::ImageData const*

# ::stappler::xenolith::core::Builder::setImage(stappler::StringView,stappler::xenolith::core::ImageInfo&&,stappler::BytesView,Rc<stappler::xenolith::core::DataAtlas>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView
* stappler::xenolith::core::ImageInfo&&
* stappler::BytesView
* Rc<stappler::xenolith::core::DataAtlas>&&

Возвращает:
* stappler::xenolith::core::ImageData const*

# ::stappler::xenolith::core::Builder::setImage(stappler::StringView,stappler::xenolith::core::ImageInfo&&,Function<void (uint8_t *, uint64_t, const ImageData::DataCallback &)>&&,Rc<stappler::xenolith::core::DataAtlas>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView
* stappler::xenolith::core::ImageInfo&&
* Function<void (uint8_t *, uint64_t, const ImageData::DataCallback &)>&&
* Rc<stappler::xenolith::core::DataAtlas>&&

Возвращает:
* stappler::xenolith::core::ImageData const*

# ::stappler::xenolith::core::Builder::Builder(stappler::xenolith::core::DynamicImage*)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::core::DynamicImage*


# ::stappler::xenolith::core::Builder::_data

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::core::DynamicImage*
