Title: XLResourceCache.h


# XENOLITH_APPLICATION_XLRESOURCECACHE_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::TemporaryResourceFlags

## BRIEF

## CONTENT

Значения:
* None
* Loaded
* RemoveOnClear
* CompileWhenAdded


# ::stappler::xenolith::operator|(stappler::xenolith::TemporaryResourceFlags const&,stappler::xenolith::TemporaryResourceFlags const&)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::TemporaryResourceFlags const&
* stappler::xenolith::TemporaryResourceFlags const&

Возвращает:
* stappler::xenolith::TemporaryResourceFlags

# ::stappler::xenolith::operator&(stappler::xenolith::TemporaryResourceFlags const&,stappler::xenolith::TemporaryResourceFlags const&)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::TemporaryResourceFlags const&
* stappler::xenolith::TemporaryResourceFlags const&

Возвращает:
* stappler::xenolith::TemporaryResourceFlags

# ::stappler::xenolith::operator^(stappler::xenolith::TemporaryResourceFlags const&,stappler::xenolith::TemporaryResourceFlags const&)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::TemporaryResourceFlags const&
* stappler::xenolith::TemporaryResourceFlags const&

Возвращает:
* stappler::xenolith::TemporaryResourceFlags

# ::stappler::xenolith::operator|=(stappler::xenolith::TemporaryResourceFlags&,stappler::xenolith::TemporaryResourceFlags const&)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::TemporaryResourceFlags&
* stappler::xenolith::TemporaryResourceFlags const&

Возвращает:
* stappler::xenolith::TemporaryResourceFlags&

# ::stappler::xenolith::operator&=(stappler::xenolith::TemporaryResourceFlags&,stappler::xenolith::TemporaryResourceFlags const&)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::TemporaryResourceFlags&
* stappler::xenolith::TemporaryResourceFlags const&

Возвращает:
* stappler::xenolith::TemporaryResourceFlags&

# ::stappler::xenolith::operator^=(stappler::xenolith::TemporaryResourceFlags&,stappler::xenolith::TemporaryResourceFlags const&)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::TemporaryResourceFlags&
* stappler::xenolith::TemporaryResourceFlags const&

Возвращает:
* stappler::xenolith::TemporaryResourceFlags&

# ::stappler::xenolith::operator==(stappler::xenolith::TemporaryResourceFlags const&,std::underlying_type<TemporaryResourceFlags>::type const&)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::TemporaryResourceFlags const&
* std::underlying_type<TemporaryResourceFlags>::type const&

Возвращает:
* bool

# ::stappler::xenolith::operator==(std::underlying_type<TemporaryResourceFlags>::type const&,stappler::xenolith::TemporaryResourceFlags const&)

## BRIEF

## CONTENT

Параметры:
* std::underlying_type<TemporaryResourceFlags>::type const&
* stappler::xenolith::TemporaryResourceFlags const&

Возвращает:
* bool

# ::stappler::xenolith::operator!=(stappler::xenolith::TemporaryResourceFlags const&,std::underlying_type<TemporaryResourceFlags>::type const&)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::TemporaryResourceFlags const&
* std::underlying_type<TemporaryResourceFlags>::type const&

Возвращает:
* bool

# ::stappler::xenolith::operator!=(std::underlying_type<TemporaryResourceFlags>::type const&,stappler::xenolith::TemporaryResourceFlags const&)

## BRIEF

## CONTENT

Параметры:
* std::underlying_type<TemporaryResourceFlags>::type const&
* stappler::xenolith::TemporaryResourceFlags const&

Возвращает:
* bool

# ::stappler::xenolith::operator~(stappler::xenolith::TemporaryResourceFlags const&)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::TemporaryResourceFlags const&

Возвращает:
* stappler::xenolith::TemporaryResourceFlags

# ::stappler::xenolith::ResourceCache

## BRIEF

## CONTENT

Базовые классы:
* Ref


# ::stappler::xenolith::ResourceCache::~ResourceCache()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::ResourceCache::init(stappler::xenolith::Application*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Application*

Возвращает:
* bool

# ::stappler::xenolith::ResourceCache::initialize(core::Loop const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* core::Loop const&


# ::stappler::xenolith::ResourceCache::invalidate()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::ResourceCache::update(stappler::xenolith::UpdateTime const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::UpdateTime const&


# ::stappler::xenolith::ResourceCache::addImage(stappler::StringView,Rc<core::ImageObject> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView
* Rc<core::ImageObject> const&


# ::stappler::xenolith::ResourceCache::addResource(Rc<core::Resource> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Rc<core::Resource> const&


# ::stappler::xenolith::ResourceCache::removeResource(stappler::StringView)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView


# ::stappler::xenolith::ResourceCache::getApplication() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::Application*

# ::stappler::xenolith::ResourceCache::acquireTexture(stappler::StringView) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView

Возвращает:
* Rc<stappler::xenolith::Texture>

# ::stappler::xenolith::ResourceCache::acquireMeshIndex(stappler::StringView) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView

Возвращает:
* Rc<stappler::xenolith::MeshIndex>

# ::stappler::xenolith::ResourceCache::getEmptyImage() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* core::ImageData const*

# ::stappler::xenolith::ResourceCache::getSolidImage() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* core::ImageData const*

# ::stappler::xenolith::ResourceCache::addExternalImageByRef(stappler::StringView,core::ImageInfo&&,stappler::BytesView,stappler::TimeInterval,stappler::xenolith::TemporaryResourceFlags)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView
* core::ImageInfo&&
* stappler::BytesView
* stappler::TimeInterval
* stappler::xenolith::TemporaryResourceFlags

Возвращает:
* Rc<stappler::xenolith::Texture>

# ::stappler::xenolith::ResourceCache::addExternalImage(stappler::StringView,core::ImageInfo&&,stappler::FilePath,stappler::TimeInterval,stappler::xenolith::TemporaryResourceFlags)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView
* core::ImageInfo&&
* stappler::FilePath
* stappler::TimeInterval
* stappler::xenolith::TemporaryResourceFlags

Возвращает:
* Rc<stappler::xenolith::Texture>

# ::stappler::xenolith::ResourceCache::addExternalImage(stappler::StringView,core::ImageInfo&&,stappler::BytesView,stappler::TimeInterval,stappler::xenolith::TemporaryResourceFlags)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView
* core::ImageInfo&&
* stappler::BytesView
* stappler::TimeInterval
* stappler::xenolith::TemporaryResourceFlags

Возвращает:
* Rc<stappler::xenolith::Texture>

# ::stappler::xenolith::ResourceCache::addExternalImage(stappler::StringView,core::ImageInfo&&,memory::function<void (uint8_t *, uint64_t, const core::ImageData::DataCallback &)> const&,stappler::TimeInterval,stappler::xenolith::TemporaryResourceFlags)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView
* core::ImageInfo&&
* memory::function<void (uint8_t *, uint64_t, const core::ImageData::DataCallback &)> const&
* stappler::TimeInterval
* stappler::xenolith::TemporaryResourceFlags

Возвращает:
* Rc<stappler::xenolith::Texture>

# ::stappler::xenolith::ResourceCache::addTemporaryResource(Rc<core::Resource>&&,stappler::TimeInterval,stappler::xenolith::TemporaryResourceFlags)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Rc<core::Resource>&&
* stappler::TimeInterval
* stappler::xenolith::TemporaryResourceFlags

Возвращает:
* Rc<stappler::xenolith::TemporaryResource>

# ::stappler::xenolith::ResourceCache::getTemporaryResource(stappler::StringView) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView

Возвращает:
* Rc<stappler::xenolith::TemporaryResource>

# ::stappler::xenolith::ResourceCache::hasTemporaryResource(stappler::StringView) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView

Возвращает:
* bool

# ::stappler::xenolith::ResourceCache::removeTemporaryResource(stappler::StringView)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView


# ::stappler::xenolith::ResourceCache::compileResource(stappler::xenolith::TemporaryResource*)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::TemporaryResource*


# ::stappler::xenolith::ResourceCache::clearResource(stappler::xenolith::TemporaryResource*)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::TemporaryResource*

Возвращает:
* bool

# ::stappler::xenolith::ResourceCache::_application

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::Application*


# ::stappler::xenolith::ResourceCache::_loop

## BRIEF

## CONTENT

Доступ: protected

Тип: core::Loop const*


# ::stappler::xenolith::ResourceCache::_images

## BRIEF

## CONTENT

Доступ: protected

Тип: Map<stappler::StringView, core::ImageData>


# ::stappler::xenolith::ResourceCache::_resources

## BRIEF

## CONTENT

Доступ: protected

Тип: Map<stappler::StringView, Rc<core::Resource>>


# ::stappler::xenolith::ResourceCache::_temporaries

## BRIEF

## CONTENT

Доступ: protected

Тип: Map<stappler::StringView, Rc<stappler::xenolith::TemporaryResource>>
