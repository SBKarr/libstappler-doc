Title: XLTemporaryResource.h


# XENOLITH_APPLICATION_XLTEMPORARYRESOURCE_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::TemporaryResource

## BRIEF

## CONTENT

Базовые классы:
* Ref


# ::stappler::xenolith::TemporaryResource::onLoaded

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::xenolith::EventHeader


# ::stappler::xenolith::TemporaryResource::~TemporaryResource()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::TemporaryResource::init(Rc<core::Resource>&&,stappler::TimeInterval,stappler::xenolith::TemporaryResourceFlags)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Rc<core::Resource>&&
* stappler::TimeInterval
* stappler::xenolith::TemporaryResourceFlags

Возвращает:
* bool

# ::stappler::xenolith::TemporaryResource::invalidate()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::TemporaryResource::acquireTexture(stappler::StringView)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView

Возвращает:
* Rc<stappler::xenolith::Texture>

# ::stappler::xenolith::TemporaryResource::acquireMeshIndex(stappler::StringView)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView

Возвращает:
* Rc<stappler::xenolith::MeshIndex>

# ::stappler::xenolith::TemporaryResource::setLoaded(bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* bool


# ::stappler::xenolith::TemporaryResource::setRequested(bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* bool


# ::stappler::xenolith::TemporaryResource::setTimeout(stappler::TimeInterval)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::TimeInterval


# ::stappler::xenolith::TemporaryResource::load(stappler::mem_std::Ref*,Function<void (bool)>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::mem_std::Ref*
* Function<void (bool)>&&

Возвращает:
* bool

# ::stappler::xenolith::TemporaryResource::onEnter(stappler::xenolith::ResourceOwner*,stappler::xenolith::ResourceObject*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::ResourceOwner*
* stappler::xenolith::ResourceObject*


# ::stappler::xenolith::TemporaryResource::onExit(stappler::xenolith::ResourceOwner*,stappler::xenolith::ResourceObject*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::ResourceOwner*
* stappler::xenolith::ResourceObject*


# ::stappler::xenolith::TemporaryResource::clear()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::TemporaryResource::getName() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::StringView

# ::stappler::xenolith::TemporaryResource::isRequested() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::TemporaryResource::isLoaded() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::TemporaryResource::getAccessTime() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::Time

# ::stappler::xenolith::TemporaryResource::getTimeout() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::TimeInterval

# ::stappler::xenolith::TemporaryResource::getUsersCount() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* size_t

# ::stappler::xenolith::TemporaryResource::getResource() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Rc<core::Resource> const&

# ::stappler::xenolith::TemporaryResource::isDeprecated(stappler::xenolith::UpdateTime const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::UpdateTime const&

Возвращает:
* bool

# ::stappler::xenolith::TemporaryResource::_requested

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::TemporaryResource::_loaded

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::TemporaryResource::_removeOnClear

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::TemporaryResource::_users

## BRIEF

## CONTENT

Доступ: protected

Тип: size_t


# ::stappler::xenolith::TemporaryResource::_atime

## BRIEF

## CONTENT

Доступ: protected

Тип: uint64_t


# ::stappler::xenolith::TemporaryResource::_timeout

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::TimeInterval


# ::stappler::xenolith::TemporaryResource::_name

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::mem_std::String


# ::stappler::xenolith::TemporaryResource::_resource

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<core::Resource>


# ::stappler::xenolith::TemporaryResource::_textures

## BRIEF

## CONTENT

Доступ: protected

Тип: Map<const core::ImageData *, Rc<stappler::xenolith::Texture>>


# ::stappler::xenolith::TemporaryResource::_meshIndexes

## BRIEF

## CONTENT

Доступ: protected

Тип: Map<const core::BufferData *, Rc<stappler::xenolith::MeshIndex>>


# ::stappler::xenolith::TemporaryResource::_owners

## BRIEF

## CONTENT

Доступ: protected

Тип: Set<Rc<stappler::xenolith::ResourceOwner>>


# ::stappler::xenolith::TemporaryResource::_callbacks

## BRIEF

## CONTENT

Доступ: protected

Тип: Vector<Pair<Rc<stappler::mem_std::Ref>, Function<void (bool)>>>
