Title: XLCoreMesh.h


# XENOLITH_CORE_XLCOREMESH_H_

## BRIEF

Заголовок типов пространственных сеток

## CONTENT

Заголовок типов пространственных сеток. Прототип.


# ::stappler::xenolith::core::MeshInputData

## BRIEF

Данные для загрузки

## CONTENT

Данные для загрузки

Базовые классы:
* AttachmentInputData


# ::stappler::xenolith::core::MeshInputData::attachment

## BRIEF

Целевое вложение

## CONTENT

Целевое вложение

Тип: stappler::xenolith::core::MeshAttachment const*


# ::stappler::xenolith::core::MeshInputData::meshesToAdd

## BRIEF

Данные для добавления

## CONTENT

Данные для добавления

Тип: Vector<Rc<stappler::xenolith::core::MeshIndex>>


# ::stappler::xenolith::core::MeshInputData::meshesToRemove

## BRIEF

Данные для удаления

## CONTENT

Данные для удаления

Тип: Vector<Rc<stappler::xenolith::core::MeshIndex>>


# ::stappler::xenolith::core::MeshSet

## BRIEF

Набор пространственных сеток

## CONTENT

Набор пространственных сеток

Базовые классы:
* Ref


# ::stappler::xenolith::core::MeshSet::Index

## BRIEF

Тип индекса сеток

## CONTENT

Доступ: public

Тип индекса сеток


# ::stappler::xenolith::core::MeshSet::Index::indexOffset

## BRIEF

Смещение в данных индексов

## CONTENT

Смещение в данных индексов

Тип: uint64_t


# ::stappler::xenolith::core::MeshSet::Index::vertexOffset

## BRIEF

Смещение в данных вершин

## CONTENT

Смещение в данных вершин

Тип: uint64_t


# ::stappler::xenolith::core::MeshSet::Index::index

## BRIEF

Порядковый индекс

## CONTENT

Порядковый индекс

Тип: Rc<stappler::xenolith::core::MeshIndex>


# ::stappler::xenolith::core::MeshSet::~MeshSet()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор


# ::stappler::xenolith::core::MeshSet::init(Vector<stappler::xenolith::core::MeshSet::Index>&&,stappler::xenolith::core::BufferObject*,stappler::xenolith::core::BufferObject*)

## BRIEF

Создаёт набор

## CONTENT

Доступ: public

Создаёт набор

Параметры:
* Vector<stappler::xenolith::core::MeshSet::Index>&&
* stappler::xenolith::core::BufferObject* - буфер индексов
* stappler::xenolith::core::BufferObject* - буфер вершин

Возвращает:
* bool

# ::stappler::xenolith::core::MeshSet::getIndexes() const

## BRIEF

Возвращает индексы сеток

## CONTENT

Доступ: public

Возвращает индексы сеток

Возвращает:
* Vector<stappler::xenolith::core::MeshSet::Index> const&

# ::stappler::xenolith::core::MeshSet::getVertexBuffer() const

## BRIEF

Возвращает буфер вершин

## CONTENT

Доступ: public

Возвращает буфер вершин

Возвращает:
* Rc<stappler::xenolith::core::BufferObject> const&

# ::stappler::xenolith::core::MeshSet::getIndexBuffer() const

## BRIEF

Возвращает буфер индексов

## CONTENT

Доступ: public

Возвращает буфер индексов

Возвращает:
* Rc<stappler::xenolith::core::BufferObject> const&

# ::stappler::xenolith::core::MeshSet::clear()

## BRIEF

Очищает набор

## CONTENT

Доступ: public

Очищает набор


# ::stappler::xenolith::core::MeshSet::_indexes

## BRIEF

Индексы

## CONTENT

Доступ: protected

Индексы

Тип: Vector<stappler::xenolith::core::MeshSet::Index>


# ::stappler::xenolith::core::MeshSet::_vertexBuffer

## BRIEF

Буфер вершин

## CONTENT

Доступ: protected

Буфер вершин

Тип: Rc<stappler::xenolith::core::BufferObject>


# ::stappler::xenolith::core::MeshSet::_indexBuffer

## BRIEF

Буфер индексов

## CONTENT

Доступ: protected

Буфер индексов

Тип: Rc<stappler::xenolith::core::BufferObject>


# ::stappler::xenolith::core::MeshIndex

## BRIEF

Индекс хранимой сетки

## CONTENT

Индекс хранимой сетки

Базовые классы:
* Resource


# ::stappler::xenolith::core::MeshIndex::DataCallback

## BRIEF

Функция получения данных

## CONTENT

Доступ: public

Функция получения данных


# ::stappler::xenolith::core::MeshIndex::BufferCallback

## BRIEF

Функция записи данных в буфер

## CONTENT

Доступ: public

Функция записи данных в буфер


# ::stappler::xenolith::core::MeshIndex::MeshBufferInfo

## BRIEF

Параметры буфера

## CONTENT

Доступ: public

Параметры буфера

# ::stappler::xenolith::core::MeshIndex::MeshBufferInfo::indexBufferSize

## BRIEF

Размер индексного буфера

## CONTENT

Размер индексного буфера

Тип: uint64_t


# ::stappler::xenolith::core::MeshIndex::MeshBufferInfo::indexBufferCallback

## BRIEF

Функция записи индексного буфера

## CONTENT

Функция записи индексного буфера

Тип: stappler::xenolith::core::MeshIndex::BufferCallback


# ::stappler::xenolith::core::MeshIndex::MeshBufferInfo::vertexBufferSize

## BRIEF

Размер вершинного буфера

## CONTENT

Размер вершинного буфера

Тип: uint64_t


# ::stappler::xenolith::core::MeshIndex::MeshBufferInfo::vertexBufferCallback

## BRIEF

Функция записи вершинного буфера

## CONTENT

Функция записи вершинного буфера

Тип: stappler::xenolith::core::MeshIndex::BufferCallback


# ::stappler::xenolith::core::MeshIndex::~MeshIndex()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор

# ::stappler::xenolith::core::MeshIndex::init(stappler::StringView,Rc<stappler::xenolith::core::DataAtlas>&&,stappler::xenolith::core::MeshIndex::MeshBufferInfo&&)

## BRIEF

Создаёт объект

## CONTENT

Доступ: public

Создаёт объект

Параметры:
* stappler::StringView
* Rc<stappler::xenolith::core::DataAtlas>&&
* stappler::xenolith::core::MeshIndex::MeshBufferInfo&&

Возвращает:
* bool

# ::stappler::xenolith::core::MeshIndex::getVertexBufferData() const

## BRIEF

Возвращает данные вершинного буфера

## CONTENT

Доступ: public

Возвращает данные вершинного буфера

Возвращает:
* stappler::xenolith::core::BufferData const*

# ::stappler::xenolith::core::MeshIndex::getIndexBufferData() const

## BRIEF

Возвращает данные индексного буфера

## CONTENT

Доступ: public

Возвращает данные индексного буфера

Возвращает:
* stappler::xenolith::core::BufferData const*

# ::stappler::xenolith::core::MeshIndex::getAtlas() const

## BRIEF

Возвращает связанный атлас

## CONTENT

Доступ: public

Возвращает связанный атлас

Возвращает:
* Rc<stappler::xenolith::core::DataAtlas> const&

# ::stappler::xenolith::core::MeshIndex::_atlas

## BRIEF

Атлас

## CONTENT

Доступ: protected

Атлас

Тип: Rc<stappler::xenolith::core::DataAtlas>


# ::stappler::xenolith::core::MeshIndex::_vertexBuffer

## BRIEF

Вершинный буфер

## CONTENT

Доступ: protected

Вершинный буфер

Тип: stappler::xenolith::core::BufferData const*


# ::stappler::xenolith::core::MeshIndex::_indexBuffer

## BRIEF

Индексный буфер

## CONTENT

Доступ: protected

Индексный буфер

Тип: stappler::xenolith::core::BufferData const*


# ::stappler::xenolith::core::MeshAttachment

## BRIEF

Вложение для использования сеток

## CONTENT

Вложение для использования сеток

Базовые классы:
* BufferAttachment


# ::stappler::xenolith::core::MeshAttachment::~MeshAttachment()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор

# ::stappler::xenolith::core::MeshAttachment::init(stappler::xenolith::core::Attachment::AttachmentBuilder&,stappler::xenolith::core::BufferInfo const&,Vector<Rc<stappler::xenolith::core::MeshIndex>>&&)

## BRIEF

Создает вложение

## CONTENT

Доступ: public

Создает вложение

Параметры:
* stappler::xenolith::core::Attachment::AttachmentBuilder&
* stappler::xenolith::core::BufferInfo const& - параметры буфера
* Vector<Rc<stappler::xenolith::core::MeshIndex>>&& - предустановленные сетки

Возвращает:
* bool

# ::stappler::xenolith::core::MeshAttachment::getMeshes() const

## BRIEF

Возвращает текущий набор сеток

## CONTENT

Доступ: public

Возвращает текущий набор сеток

Возвращает:
* Rc<stappler::xenolith::core::MeshSet> const&

# ::stappler::xenolith::core::MeshAttachment::setMeshes(Rc<stappler::xenolith::core::MeshSet> const&) const

## BRIEF

Устанавливает текущий набор

## CONTENT

Доступ: public

Устанавливает текущий набор

Параметры:
* Rc<stappler::xenolith::core::MeshSet> const&


# ::stappler::xenolith::core::MeshAttachment::_data

## BRIEF

Текущий набор

## CONTENT

Доступ: protected

Текущий набор

Тип: Rc<stappler::xenolith::core::MeshSet>


# ::stappler::xenolith::core::MeshAttachment::_initials

## BRIEF

Начальный набор сеток

## CONTENT

Доступ: protected

Начальный набор сеток

Тип: Vector<Rc<stappler::xenolith::core::MeshIndex>>
