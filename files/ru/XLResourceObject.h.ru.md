Title: XLResourceObject.h


# XENOLITH_APPLICATION_XLRESOURCEOBJECT_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::ResourceType

## BRIEF

## CONTENT

Значения:
* Texture
* MeshIndex


# ::stappler::xenolith::ResourceObject

## BRIEF

## CONTENT

Базовые классы:
* NamedRef


# ::stappler::xenolith::ResourceObject::~ResourceObject()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::ResourceObject::init(stappler::xenolith::ResourceType)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::ResourceType

Возвращает:
* bool

# ::stappler::xenolith::ResourceObject::init(stappler::xenolith::ResourceType,Rc<core::Resource> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::ResourceType
* Rc<core::Resource> const&

Возвращает:
* bool

# ::stappler::xenolith::ResourceObject::init(stappler::xenolith::ResourceType,Rc<stappler::xenolith::TemporaryResource> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::ResourceType
* Rc<stappler::xenolith::TemporaryResource> const&

Возвращает:
* bool

# ::stappler::xenolith::ResourceObject::invalidate()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::ResourceObject::getName() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::StringView

# ::stappler::xenolith::ResourceObject::isLoaded() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::ResourceObject::onEnter(stappler::xenolith::ResourceOwner*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::ResourceOwner*


# ::stappler::xenolith::ResourceObject::onExit(stappler::xenolith::ResourceOwner*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::ResourceOwner*


# ::stappler::xenolith::ResourceObject::getType() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::ResourceType

# ::stappler::xenolith::ResourceObject::getTemporary() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Rc<stappler::xenolith::TemporaryResource>

# ::stappler::xenolith::ResourceObject::_type

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::ResourceType


# ::stappler::xenolith::ResourceObject::_resource

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<core::Resource>


# ::stappler::xenolith::ResourceObject::_temporary

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::xenolith::TemporaryResource>
