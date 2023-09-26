Title: XLTexture.h


# XENOLITH_APPLICATION_XLTEXTURE_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::Texture

## BRIEF

## CONTENT

Базовые классы:
* ResourceObject


# ::stappler::xenolith::Texture::~Texture()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::Texture::init(core::ImageData const*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* core::ImageData const*

Возвращает:
* bool

# ::stappler::xenolith::Texture::init(core::ImageData const*,Rc<core::Resource> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* core::ImageData const*
* Rc<core::Resource> const&

Возвращает:
* bool

# ::stappler::xenolith::Texture::init(core::ImageData const*,Rc<stappler::xenolith::TemporaryResource> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* core::ImageData const*
* Rc<stappler::xenolith::TemporaryResource> const&

Возвращает:
* bool

# ::stappler::xenolith::Texture::init(Rc<core::DynamicImage> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Rc<core::DynamicImage> const&

Возвращает:
* bool

# ::stappler::xenolith::Texture::getName() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::StringView

# ::stappler::xenolith::Texture::getIndex() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint64_t

# ::stappler::xenolith::Texture::hasAlpha() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::Texture::getExtent() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::Extent3

# ::stappler::xenolith::Texture::isLoaded() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::Texture::getMaterialImage() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* core::MaterialImage

# ::stappler::xenolith::Texture::getImageData() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* core::ImageData const*

# ::stappler::xenolith::Texture::_data

## BRIEF

## CONTENT

Доступ: protected

Тип: core::ImageData const*


# ::stappler::xenolith::Texture::_dynamic

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<core::DynamicImage>
