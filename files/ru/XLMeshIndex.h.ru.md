Title: XLMeshIndex.h


# XENOLITH_APPLICATION_XLMESHINDEX_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::MeshIndex

## BRIEF

## CONTENT

Базовые классы:
* ResourceObject


# ::stappler::xenolith::MeshIndex::~MeshIndex()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::MeshIndex::init(core::BufferData const*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* core::BufferData const*

Возвращает:
* bool

# ::stappler::xenolith::MeshIndex::init(core::BufferData const*,Rc<core::Resource> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* core::BufferData const*
* Rc<core::Resource> const&

Возвращает:
* bool

# ::stappler::xenolith::MeshIndex::init(core::BufferData const*,Rc<stappler::xenolith::TemporaryResource> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* core::BufferData const*
* Rc<stappler::xenolith::TemporaryResource> const&

Возвращает:
* bool

# ::stappler::xenolith::MeshIndex::getName() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::StringView

# ::stappler::xenolith::MeshIndex::setBuffers(core::BufferData const*,core::BufferData const*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* core::BufferData const*
* core::BufferData const*


# ::stappler::xenolith::MeshIndex::isLoaded() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::MeshIndex::getVertexData() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* core::BufferData const*

# ::stappler::xenolith::MeshIndex::getIndexData() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* core::BufferData const*

# ::stappler::xenolith::MeshIndex::_name

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::mem_std::String


# ::stappler::xenolith::MeshIndex::_vertexData

## BRIEF

## CONTENT

Доступ: protected

Тип: core::BufferData const*


# ::stappler::xenolith::MeshIndex::_indexData

## BRIEF

## CONTENT

Доступ: protected

Тип: core::BufferData const*
