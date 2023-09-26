Title: XLCoreMesh.h


# XENOLITH_CORE_XLCOREMESH_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::core::MeshInputData

## BRIEF

## CONTENT

Базовые классы:
* AttachmentInputData


# ::stappler::xenolith::core::MeshInputData::attachment

## BRIEF

## CONTENT

Тип: stappler::xenolith::core::MeshAttachment const*


# ::stappler::xenolith::core::MeshInputData::meshesToAdd

## BRIEF

## CONTENT

Тип: Vector<Rc<stappler::xenolith::core::MeshIndex>>


# ::stappler::xenolith::core::MeshInputData::meshesToRemove

## BRIEF

## CONTENT

Тип: Vector<Rc<stappler::xenolith::core::MeshIndex>>


# ::stappler::xenolith::core::MeshSet

## BRIEF

## CONTENT

Базовые классы:
* Ref


# ::stappler::xenolith::core::MeshSet::Index

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::MeshSet::Index::indexOffset

## BRIEF

## CONTENT

Тип: uint64_t


# ::stappler::xenolith::core::MeshSet::Index::vertexOffset

## BRIEF

## CONTENT

Тип: uint64_t


# ::stappler::xenolith::core::MeshSet::Index::index

## BRIEF

## CONTENT

Тип: Rc<stappler::xenolith::core::MeshIndex>


# ::stappler::xenolith::core::MeshSet::~MeshSet()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::MeshSet::init(Vector<stappler::xenolith::core::MeshSet::Index>&&,stappler::xenolith::core::BufferObject*,stappler::xenolith::core::BufferObject*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Vector<stappler::xenolith::core::MeshSet::Index>&&
* stappler::xenolith::core::BufferObject*
* stappler::xenolith::core::BufferObject*

Возвращает:
* bool

# ::stappler::xenolith::core::MeshSet::getIndexes() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Vector<stappler::xenolith::core::MeshSet::Index> const&

# ::stappler::xenolith::core::MeshSet::getVertexBuffer() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Rc<stappler::xenolith::core::BufferObject> const&

# ::stappler::xenolith::core::MeshSet::getIndexBuffer() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Rc<stappler::xenolith::core::BufferObject> const&

# ::stappler::xenolith::core::MeshSet::clear()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::MeshSet::_indexes

## BRIEF

## CONTENT

Доступ: protected

Тип: Vector<stappler::xenolith::core::MeshSet::Index>


# ::stappler::xenolith::core::MeshSet::_vertexBuffer

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::xenolith::core::BufferObject>


# ::stappler::xenolith::core::MeshSet::_indexBuffer

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::xenolith::core::BufferObject>


# ::stappler::xenolith::core::MeshIndex

## BRIEF

## CONTENT

Базовые классы:
* Resource


# ::stappler::xenolith::core::MeshIndex::DataCallback

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::MeshIndex::BufferCallback

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::MeshIndex::MeshBufferInfo

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::MeshIndex::MeshBufferInfo::indexBufferSize

## BRIEF

## CONTENT

Тип: uint64_t


# ::stappler::xenolith::core::MeshIndex::MeshBufferInfo::indexBufferCallback

## BRIEF

## CONTENT

Тип: stappler::xenolith::core::MeshIndex::BufferCallback


# ::stappler::xenolith::core::MeshIndex::MeshBufferInfo::vertexBufferSize

## BRIEF

## CONTENT

Тип: uint64_t


# ::stappler::xenolith::core::MeshIndex::MeshBufferInfo::vertexBufferCallback

## BRIEF

## CONTENT

Тип: stappler::xenolith::core::MeshIndex::BufferCallback


# ::stappler::xenolith::core::MeshIndex::~MeshIndex()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::MeshIndex::init(stappler::StringView,Rc<stappler::xenolith::core::DataAtlas>&&,stappler::xenolith::core::MeshIndex::MeshBufferInfo&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView
* Rc<stappler::xenolith::core::DataAtlas>&&
* stappler::xenolith::core::MeshIndex::MeshBufferInfo&&

Возвращает:
* bool

# ::stappler::xenolith::core::MeshIndex::getVertexBufferData() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::core::BufferData const*

# ::stappler::xenolith::core::MeshIndex::getIndexBufferData() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::core::BufferData const*

# ::stappler::xenolith::core::MeshIndex::getAtlas() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Rc<stappler::xenolith::core::DataAtlas> const&

# ::stappler::xenolith::core::MeshIndex::_atlas

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::xenolith::core::DataAtlas>


# ::stappler::xenolith::core::MeshIndex::_vertexBuffer

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::core::BufferData const*


# ::stappler::xenolith::core::MeshIndex::_indexBuffer

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::core::BufferData const*


# ::stappler::xenolith::core::MeshAttachment

## BRIEF

## CONTENT

Базовые классы:
* BufferAttachment


# ::stappler::xenolith::core::MeshAttachment::~MeshAttachment()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::MeshAttachment::init(stappler::xenolith::core::Attachment::AttachmentBuilder&,stappler::xenolith::core::BufferInfo const&,Vector<Rc<stappler::xenolith::core::MeshIndex>>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::Attachment::AttachmentBuilder&
* stappler::xenolith::core::BufferInfo const&
* Vector<Rc<stappler::xenolith::core::MeshIndex>>&&

Возвращает:
* bool

# ::stappler::xenolith::core::MeshAttachment::getMeshes() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Rc<stappler::xenolith::core::MeshSet> const&

# ::stappler::xenolith::core::MeshAttachment::setMeshes(Rc<stappler::xenolith::core::MeshSet> const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Rc<stappler::xenolith::core::MeshSet> const&


# ::stappler::xenolith::core::MeshAttachment::_data

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::xenolith::core::MeshSet>


# ::stappler::xenolith::core::MeshAttachment::_initials

## BRIEF

## CONTENT

Доступ: protected

Тип: Vector<Rc<stappler::xenolith::core::MeshIndex>>
