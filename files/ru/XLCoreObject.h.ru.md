Title: XLCoreObject.h


# XENOLITH_CORE_XLCOREOBJECT_H_

## BRIEF

Заголовок базовых объектов графического движка

## CONTENT

Заголовок базовых объектов графического движка

# XL_USE_64_BIT_PTR_DEFINES

## BRIEF

Флаг использования 64-битных указателей на объекты

## CONTENT

Флаг использования 64-битных указателей на объекты

# ::stappler::xenolith::core::ObjectData

## BRIEF

Тип внутренних данных объекта

## CONTENT

Тип внутренних данных объекта

# ::stappler::xenolith::core::ObjectData::ClearCallback

## BRIEF

Тип функции удаления объекта

## CONTENT

Тип функции удаления объекта

# ::stappler::xenolith::core::ObjectData::type

## BRIEF

Тип объекта

## CONTENT

Тип объекта

Тип: stappler::xenolith::core::ObjectType

# ::stappler::xenolith::core::ObjectData::device

## BRIEF

Виртуальное устройство, хранящее объект

## CONTENT

Виртуальное устройство, хранящее объект

Тип: stappler::xenolith::core::Device*

# ::stappler::xenolith::core::ObjectData::callback

## BRIEF

Функция удаления объекта

## CONTENT

Тип: ClearCallback

Функция удаления объекта

# ::stappler::xenolith::core::ObjectData::handle

## BRIEF

Внутренний указатель устройства на объект

## CONTENT

Внутренний указатель устройства на объект

Тип: stappler::xenolith::core::ObjectHandle

# ::stappler::xenolith::core::ObjectData::ptr

## BRIEF

Внешний указатель на объект

## CONTENT

Внешний указатель на объект

Тип: void*

# ::stappler::xenolith::core::ObjectHandle

## BRIEF

Базовый объект графического движка

## CONTENT

Базовый объект графического движка

# ::stappler::xenolith::core::Object

## BRIEF

Тип объекта движка

## CONTENT

Тип объекта движка

Базовые классы:
* NamedRef


# ::stappler::xenolith::core::Object::ObjectHandle

## BRIEF

Укаратель на объект устройства

## CONTENT

Доступ: public

Укаратель на объект устройства

# ::stappler::xenolith::core::Object::ClearCallback

## BRIEF

Функция удаления объекта

## CONTENT

Доступ: public

Функция удаления объекта

# ::stappler::xenolith::core::Object::~Object()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор

# ::stappler::xenolith::core::Object::init(stappler::xenolith::core::Device&,stappler::xenolith::core::Object::ClearCallback,stappler::xenolith::core::ObjectType,stappler::xenolith::core::Object::ObjectHandle,void*)

## BRIEF

Создаёт новый хранимый объект

## CONTENT

Доступ: public

Создаёт новый хранимый объект

Параметры:
* stappler::xenolith::core::Device& - устройство, к которому относится объект
* stappler::xenolith::core::Object::ClearCallback - функция уничтожения объекта
* stappler::xenolith::core::ObjectType - тип объекта
* stappler::xenolith::core::Object::ObjectHandle - указатель на объект
* void*

Возвращает:
* bool

# ::stappler::xenolith::core::Object::invalidate()

## BRIEF

Отключает объект

## CONTENT

Доступ: public

Отключает объект

# ::stappler::xenolith::core::Object::setName(stappler::StringView)

## BRIEF

Устанавливает имя объекта

## CONTENT

Доступ: public

Устанавливает имя объекта

Параметры:
* stappler::StringView


# ::stappler::xenolith::core::Object::getName() const

## BRIEF

Возвращает имя объекта

## CONTENT

Доступ: public

Возвращает имя объекта

Возвращает:
* stappler::StringView

# ::stappler::xenolith::core::Object::getObjectData() const

## BRIEF

Возвращает данные объекта

## CONTENT

Доступ: public

Возвращает данные объекта

Возвращает:
* stappler::xenolith::core::ObjectData const&


# ::stappler::xenolith::core::Object::_object

## BRIEF

Данные объекта

## CONTENT

Доступ: protected

Данные объекта

Тип: stappler::xenolith::core::ObjectData

# ::stappler::xenolith::core::Object::_name

## BRIEF

Имя объекта

## CONTENT

Доступ: protected

Имя объекта

Тип: stappler::mem_std::String


# ::stappler::xenolith::core::GraphicPipeline

## BRIEF

Графический пайплайн

## CONTENT

Графический пайплайн

Базовые классы:
* Object


# ::stappler::xenolith::core::GraphicPipeline::PipelineInfo

## BRIEF

Тип параметров пайплайна

## CONTENT

Доступ: public

Тип параметров пайплайна

# ::stappler::xenolith::core::GraphicPipeline::PipelineData

## BRIEF

Тип данных пайплайна

## CONTENT

Доступ: public

Тип данных пайплайна


# ::stappler::xenolith::core::GraphicPipeline::SubpassData

## BRIEF

Тип данныых подпрохода

## CONTENT

Доступ: public

Тип данныых подпрохода


# ::stappler::xenolith::core::GraphicPipeline::Queue

## BRIEF

Тип очереди исполнения

## CONTENT

Доступ: public

Тип очереди исполнения


# ::stappler::xenolith::core::GraphicPipeline::~GraphicPipeline()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор


# ::stappler::xenolith::core::ComputePipeline

## BRIEF

Вычислительный пайплайн

## CONTENT

Вычислительный пайплайн

Базовые классы:
* Object


# ::stappler::xenolith::core::ComputePipeline::PipelineInfo

## BRIEF

Параметры пайплайна

## CONTENT

Доступ: public

Параметры пайплайна

# ::stappler::xenolith::core::ComputePipeline::PipelineData

## BRIEF

Данные пайплайна

## CONTENT

Доступ: public

Данные пайплайна


# ::stappler::xenolith::core::ComputePipeline::SubpassData

## BRIEF

Данные подпрохода

## CONTENT

Доступ: public

Данные подпрохода


# ::stappler::xenolith::core::ComputePipeline::Queue

## BRIEF

Очередь исполнения

## CONTENT

Доступ: public

Очередь исполнения

# ::stappler::xenolith::core::ComputePipeline::~ComputePipeline()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор

# ::stappler::xenolith::core::Shader

## BRIEF

Тип подпрограммы

## CONTENT

Тип подпрограммы

Базовые классы:
* Object


# ::stappler::xenolith::core::Shader::ProgramData

## BRIEF

Данные подпрограммы

## CONTENT

Доступ: public

Данные подпрограммы


# ::stappler::xenolith::core::Shader::DescriptorType

## BRIEF

Тип дескриптора

## CONTENT

Доступ: public

Тип дескриптора


# ::stappler::xenolith::core::Shader::inspectShader(SpanView<uint32_t>)

## BRIEF

Читает код подпрограммы, выводит информацию о дескрипторах

## CONTENT

Доступ: public

Читает код подпрограммы, выводит информацию о дескрипторах

Параметры:
* SpanView<uint32_t>

Возвращает:
* stappler::mem_std::String

# ::stappler::xenolith::core::Shader::~Shader()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор


# ::stappler::xenolith::core::Shader::getStage() const

## BRIEF

Возвращает стадию исполнения подпрограммы

## CONTENT

Доступ: public

Возвращает стадию исполнения подпрограммы

Возвращает:
* stappler::xenolith::core::ProgramStage

# ::stappler::xenolith::core::Shader::inspect(SpanView<uint32_t>)

## BRIEF

Читает код подпрограммы, выводит информацию о дескрипторах

## CONTENT

Доступ: public

Читает код подпрограммы, выводит информацию о дескрипторах

Параметры:
* SpanView<uint32_t>

Возвращает:
* stappler::mem_std::String

# ::stappler::xenolith::core::Shader::_stage

## BRIEF

Стадия исполнения подпрограммы

## CONTENT

Доступ: protected

Стадия исполнения подпрограммы

Тип: stappler::xenolith::core::ProgramStage


# ::stappler::xenolith::core::RenderPass

## BRIEF

Тип прохода рендеринга

## CONTENT

Тип прохода рендеринга

Базовые классы:
* Object


# ::stappler::xenolith::core::RenderPass::QueuePassData

## BRIEF

Данные прохода очереди исполнения

## CONTENT

Доступ: public

Данные прохода очереди исполнения


# ::stappler::xenolith::core::RenderPass::Attachment

## BRIEF

Тип вложения

## CONTENT

Доступ: public

Тип вложения


# ::stappler::xenolith::core::RenderPass::PipelineDescriptor

## BRIEF

Тип описания дескриптора

## CONTENT

Доступ: public

Тип описания дескриптора


# ::stappler::xenolith::core::RenderPass::DescriptorType

## BRIEF

Тип дескриптора

## CONTENT

Доступ: public

Тип дескриптора

# ::stappler::xenolith::core::RenderPass::~RenderPass()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор

# ::stappler::xenolith::core::RenderPass::init(stappler::xenolith::core::Device&,stappler::xenolith::core::Object::ClearCallback,stappler::xenolith::core::ObjectType,stappler::xenolith::core::Object::ObjectHandle,void*)

## BRIEF

Создаёт объект

## CONTENT

Доступ: public

Создаёт объект

Параметры:
* stappler::xenolith::core::Device&
* stappler::xenolith::core::Object::ClearCallback
* stappler::xenolith::core::ObjectType
* stappler::xenolith::core::Object::ObjectHandle
* void*

Возвращает:
* bool

# ::stappler::xenolith::core::RenderPass::getIndex() const

## BRIEF

Возвращает индекс прохода

## CONTENT

Доступ: public

Возвращает индекс прохода

Возвращает:
* uint64_t

# ::stappler::xenolith::core::RenderPass::getType() const

## BRIEF

Возвращает тип прохода

## CONTENT

Доступ: public

Возвращает тип прохода

Возвращает:
* stappler::xenolith::core::PassType

# ::stappler::xenolith::core::RenderPass::_index

## BRIEF

Индекс прохода

## CONTENT

Доступ: protected

Индекс прохода

Тип: uint64_t


# ::stappler::xenolith::core::RenderPass::_type

## BRIEF

Тип прохода

## CONTENT

Доступ: protected

Тип прохода

Тип: stappler::xenolith::core::PassType


# ::stappler::xenolith::core::Framebuffer

## BRIEF

Тип фреймбуфера

## CONTENT

Тип фреймбуфера

Базовые классы:
* Object


# ::stappler::xenolith::core::Framebuffer::getViewHash(SpanView<Rc<stappler::xenolith::core::ImageView>>)

## BRIEF

Возвращает хеш для набора отображений

## CONTENT

Доступ: public

Возвращает хеш для набора отображений

Параметры:
* SpanView<Rc<stappler::xenolith::core::ImageView>>

Возвращает:
* uint64_t

# ::stappler::xenolith::core::Framebuffer::getViewHash(SpanView<uint64_t>)

## BRIEF

Возвращает хеш для набора отображений

## CONTENT

Доступ: public

Возвращает хеш для набора отображений

Параметры:
* SpanView<uint64_t>

Возвращает:
* uint64_t

# ::stappler::xenolith::core::Framebuffer::~Framebuffer()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор

# ::stappler::xenolith::core::Framebuffer::getExtent() const

## BRIEF

Возвращает размер фреймбуфера

## CONTENT

Доступ: public

Возвращает размер фреймбуфера

Возвращает:
* const stappler::geom::Extent2&

# ::stappler::xenolith::core::Framebuffer::getLayerCount() const

## BRIEF

Возвращает число слоёв

## CONTENT

Доступ: public

Возвращает число слоёв

Возвращает:
* uint32_t

# ::stappler::xenolith::core::Framebuffer::getFramebufferExtent() const

## BRIEF

Возвращает полные параметры размера

## CONTENT

Доступ: public

Возвращает полные параметры размера

Возвращает:
* stappler::geom::Extent3

# ::stappler::xenolith::core::Framebuffer::getViewIds() const

## BRIEF

Возвращает идентификационный список фреймбуфера

## CONTENT

Доступ: public

Возвращает идентификационный список фреймбуфера. Используется при кешировании.

Возвращает:
* Vector<uint64_t> const&

# ::stappler::xenolith::core::Framebuffer::getRenderPass() const

## BRIEF

Возвращает проход, для которого создан фреймбуфер

## CONTENT

Доступ: public

Возвращает проход, для которого создан фреймбуфер

Возвращает:
* Rc<stappler::xenolith::core::RenderPass> const&

# ::stappler::xenolith::core::Framebuffer::getHash() const

## BRIEF

Возвращает хэш фреймбуфера

## CONTENT

Доступ: public

Возвращает хэш фреймбуфера

Возвращает:
* uint64_t

# ::stappler::xenolith::core::Framebuffer::_extent

## BRIEF

Размер

## CONTENT

Доступ: protected

Размер

Тип: stappler::geom::Extent2


# ::stappler::xenolith::core::Framebuffer::_layerCount

## BRIEF

Число слоёв

## CONTENT

Доступ: protected

Число слоёв

Тип: uint32_t


# ::stappler::xenolith::core::Framebuffer::_viewIds

## BRIEF

Идентификаторы отображений

## CONTENT

Доступ: protected

Идентификаторы отображений

Тип: Vector<uint64_t>


# ::stappler::xenolith::core::Framebuffer::_renderPass

## BRIEF

Проход рендеринга

## CONTENT

Доступ: protected

Проход рендеринга

Тип: Rc<stappler::xenolith::core::RenderPass>


# ::stappler::xenolith::core::Framebuffer::_imageViews

## BRIEF

Используемые отображения

## CONTENT

Доступ: protected

Используемые отображения

Тип: Vector<Rc<stappler::xenolith::core::ImageView>>


# ::stappler::xenolith::core::DataAtlas

## BRIEF

Тип атласа

## CONTENT

Тип атласа

Базовые классы:
* Ref


# ::stappler::xenolith::core::DataAtlas::Type

## BRIEF

Тип значений атласа

## CONTENT

Доступ: public

Тип значений атласа

Значения:
* ImageAtlas
* MeshAtlas
* Custom


# ::stappler::xenolith::core::DataAtlas::~DataAtlas()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор


# ::stappler::xenolith::core::DataAtlas::init(stappler::xenolith::core::DataAtlas::Type,uint32_t,uint32_t,stappler::geom::Extent2)

## BRIEF

Создаёт атлас

## CONTENT

Доступ: public

Создаёт атлас

Параметры:
* stappler::xenolith::core::DataAtlas::Type - тип значения
* uint32_t - число элементов
* uint32_t - размер элементов
* stappler::geom::Extent2 - размер изображения, если есть

Возвращает:
* bool

# ::stappler::xenolith::core::DataAtlas::compile()

## BRIEF

Собирает данные атласа для передачи их на устройство

## CONTENT

Доступ: public

Собирает данные атласа для передачи их на устройство


# ::stappler::xenolith::core::DataAtlas::getObjectByName(uint32_t) const

## BRIEF

Возвращает объект по хешу

## CONTENT

Доступ: public

Возвращает объект по хешу

Параметры:
* uint32_t

Возвращает:
* uint8_t const*

# ::stappler::xenolith::core::DataAtlas::getObjectByName(stappler::StringView) const

## BRIEF

Возвращает объект по имени

## CONTENT

Доступ: public

Возвращает объект по имени

Параметры:
* stappler::StringView

Возвращает:
* uint8_t const*

# ::stappler::xenolith::core::DataAtlas::getObjectByOrder(uint32_t) const

## BRIEF

Возвращает объект по порядковому номеру

## CONTENT

Доступ: public

Возвращает объект по порядковому номеру

Параметры:
* uint32_t

Возвращает:
* uint8_t const*

# ::stappler::xenolith::core::DataAtlas::addObject(uint32_t,void*)

## BRIEF

Добавляет объект

## CONTENT

Доступ: public

Добавляет объект

Параметры:
* uint32_t
* void*


# ::stappler::xenolith::core::DataAtlas::addObject(stappler::StringView,void*)

## BRIEF

Добавляет объект

## CONTENT

Доступ: public

Добавляет объект

Параметры:
* stappler::StringView
* void*


# ::stappler::xenolith::core::DataAtlas::getType() const

## BRIEF

Возвращает тип значения

## CONTENT

Доступ: public

Возвращает тип значения

Возвращает:
* stappler::xenolith::core::DataAtlas::Type

# ::stappler::xenolith::core::DataAtlas::getObjectSize() const

## BRIEF

Возвращает размер объекта

## CONTENT

Доступ: public

Возвращает размер объекта

Возвращает:
* uint32_t

# ::stappler::xenolith::core::DataAtlas::getImageExtent() const

## BRIEF

Возвращает размер изобрадения

## CONTENT

Доступ: public

Возвращает размер изобрадения

Возвращает:
* stappler::geom::Extent2

# ::stappler::xenolith::core::DataAtlas::getObjectsCount() const

## BRIEF

Возвращает число объектов

## CONTENT

Доступ: public

Возвращает число объектов

Возвращает:
* uint32_t

# ::stappler::xenolith::core::DataAtlas::getData() const

## BRIEF

Возвращает блок данных для передачи устройству

## CONTENT

Доступ: public

Возвращает блок данных для передачи устройству

Возвращает:
* stappler::BytesView

# ::stappler::xenolith::core::DataAtlas::getIndexData() const

## BRIEF

Возвращает блок индексов для передачи устройству

## CONTENT

Доступ: public

Возвращает блок индексов для передачи устройству

Возвращает:
* stappler::BytesView

# ::stappler::xenolith::core::DataAtlas::setIndexBuffer(Rc<stappler::xenolith::core::BufferObject>&&)

## BRIEF

Назначает буфер индексов

## CONTENT

Доступ: public

Назначает буфер индексов

Параметры:
* Rc<stappler::xenolith::core::BufferObject>&&


# ::stappler::xenolith::core::DataAtlas::getIndexBuffer() const

## BRIEF

Возвращает буфер индексов

## CONTENT

Доступ: public

Возвращает буфер индексов

Возвращает:
* Rc<stappler::xenolith::core::BufferObject> const&

# ::stappler::xenolith::core::DataAtlas::setDataBuffer(Rc<stappler::xenolith::core::BufferObject>&&)

## BRIEF

Назначает буфер данных

## CONTENT

Доступ: public

Назначает буфер данных

Параметры:
* Rc<stappler::xenolith::core::BufferObject>&&


# ::stappler::xenolith::core::DataAtlas::getDataBuffer() const

## BRIEF

Возвращает буфер данных

## CONTENT

Доступ: public

Возвращает буфер данных

Возвращает:
* Rc<stappler::xenolith::core::BufferObject> const&

# ::stappler::xenolith::core::DataAtlas::makeHashIndex()

## BRIEF

Создаёт индекс хешей

## CONTENT

Доступ: protected

Создаёт индекс хешей


# ::stappler::xenolith::core::DataAtlas::_type

## BRIEF

Тип значения

## CONTENT

Доступ: protected

Тип значения

Тип: stappler::xenolith::core::DataAtlas::Type


# ::stappler::xenolith::core::DataAtlas::_objectSize

## BRIEF

Размер объекта

## CONTENT

Доступ: protected

Размер объекта

Тип: uint32_t


# ::stappler::xenolith::core::DataAtlas::_imageExtent

## BRIEF

Размер изображения

## CONTENT

Доступ: protected

Размер изображения

Тип: stappler::geom::Extent2


# ::stappler::xenolith::core::DataAtlas::_intNames

## BRIEF

Целочисленные имена

## CONTENT

Доступ: protected

Целочисленные имена

Тип: HashMap<uint32_t, uint32_t>


# ::stappler::xenolith::core::DataAtlas::_stringNames

## BRIEF

Строковые имена

## CONTENT

Доступ: protected

Строковые имена

Тип: HashMap<stappler::mem_std::String, uint32_t>


# ::stappler::xenolith::core::DataAtlas::_data

## BRIEF

Данные объектов

## CONTENT

Доступ: protected

Данные объектов

Тип: stappler::mem_std::Bytes


# ::stappler::xenolith::core::DataAtlas::_dataIndex

## BRIEF

Данные индексов

## CONTENT

Доступ: protected

Данные индексов

Тип: stappler::mem_std::Bytes


# ::stappler::xenolith::core::DataAtlas::_indexBuffer

## BRIEF

Буфер индексов

## CONTENT

Доступ: protected

Буфер индексов

Тип: Rc<stappler::xenolith::core::BufferObject>


# ::stappler::xenolith::core::DataAtlas::_dataBuffer

## BRIEF

Буфер данных

## CONTENT

Доступ: protected

Буфер данных

Тип: Rc<stappler::xenolith::core::BufferObject>


# ::stappler::xenolith::core::ImageObject

## BRIEF

Изображение в памяти устройства

## CONTENT

Изображение в памяти устройства

Базовые классы:
* Object


# ::stappler::xenolith::core::ImageObject::~ImageObject()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор


# ::stappler::xenolith::core::ImageObject::init(stappler::xenolith::core::Device&,stappler::xenolith::core::Object::ClearCallback,stappler::xenolith::core::ObjectType,stappler::xenolith::core::Object::ObjectHandle,void*)

## BRIEF

Создаёт объект

## CONTENT

Доступ: public

Создаёт объект

Параметры:
* stappler::xenolith::core::Device&
* stappler::xenolith::core::Object::ClearCallback
* stappler::xenolith::core::ObjectType
* stappler::xenolith::core::Object::ObjectHandle
* void*

Возвращает:
* bool

# ::stappler::xenolith::core::ImageObject::init(stappler::xenolith::core::Device&,stappler::xenolith::core::Object::ClearCallback,stappler::xenolith::core::ObjectType,stappler::xenolith::core::Object::ObjectHandle,void*,uint64_t)

## BRIEF

Создаёт объект

## CONTENT

Доступ: public

Создаёт объект

Параметры:
* stappler::xenolith::core::Device&
* stappler::xenolith::core::Object::ClearCallback
* stappler::xenolith::core::ObjectType
* stappler::xenolith::core::Object::ObjectHandle
* void*
* uint64_t

Возвращает:
* bool

# ::stappler::xenolith::core::ImageObject::getInfo() const

## BRIEF

Возвращает параметры изображения

## CONTENT

Доступ: public

Возвращает параметры изображения

Возвращает:
* stappler::xenolith::core::ImageInfoData const&

# ::stappler::xenolith::core::ImageObject::getIndex() const

## BRIEF

Возвращает униклаьный индекс изображения

## CONTENT

Доступ: public

Возвращает униклаьный индекс изображения. Индекс уникален для приложения.

Возвращает:
* uint64_t

# ::stappler::xenolith::core::ImageObject::getAtlas() const

## BRIEF

Возвращает атлас для изображения

## CONTENT

Доступ: public

Возвращает атлас для изображения

Возвращает:
* Rc<stappler::xenolith::core::DataAtlas> const&

# ::stappler::xenolith::core::ImageObject::getViewInfo(stappler::xenolith::core::ImageViewInfo const&) const

## BRIEF

Возвращает подходящие параметры отображения

## CONTENT

Доступ: public

Возвращает подходящие параметры отображения

Параметры:
* stappler::xenolith::core::ImageViewInfo const&

Возвращает:
* stappler::xenolith::core::ImageViewInfo

# ::stappler::xenolith::core::ImageObject::_info

## BRIEF

Параметры изображения

## CONTENT

Доступ: protected

Параметры изображения

Тип: stappler::xenolith::core::ImageInfoData


# ::stappler::xenolith::core::ImageObject::_atlas

## BRIEF

Атлас

## CONTENT

Доступ: protected

Атлас

Тип: Rc<stappler::xenolith::core::DataAtlas>


# ::stappler::xenolith::core::ImageObject::_index

## BRIEF

Индекс изображения

## CONTENT

Доступ: protected

Индекс изображения

Тип: uint64_t


# ::stappler::xenolith::core::ImageView

## BRIEF

Отображение изображения

## CONTENT

Отображение изображения

Базовые классы:
* Object


# ::stappler::xenolith::core::ImageView::~ImageView()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор


# ::stappler::xenolith::core::ImageView::init(stappler::xenolith::core::Device&,stappler::xenolith::core::Object::ClearCallback,stappler::xenolith::core::ObjectType,stappler::xenolith::core::Object::ObjectHandle,void*)

## BRIEF

Создаёт объект

## CONTENT

Доступ: public

Создаёт объект

Параметры:
* stappler::xenolith::core::Device&
* stappler::xenolith::core::Object::ClearCallback
* stappler::xenolith::core::ObjectType
* stappler::xenolith::core::Object::ObjectHandle
* void*

Возвращает:
* bool

# ::stappler::xenolith::core::ImageView::setReleaseCallback(Function<void ()>&&)

## BRIEF

Устанавливает дополнительную функцию для вызова при удалении

## CONTENT

Доступ: public

Устанавливает дополнительную функцию для вызова при удалении

Параметры:
* Function<void ()>&&


# ::stappler::xenolith::core::ImageView::runReleaseCallback()

## BRIEF

Запускает функцию удаления

## CONTENT

Доступ: public

Запускает функцию удаления


# ::stappler::xenolith::core::ImageView::getImage() const

## BRIEF

Возвращает базовое изображение

## CONTENT

Доступ: public

Возвращает базовое изображение

Возвращает:
* Rc<stappler::xenolith::core::ImageObject> const&

# ::stappler::xenolith::core::ImageView::getInfo() const

## BRIEF

Возвращает параметры отображения

## CONTENT

Доступ: public

Возвращает параметры отображения

Возвращает:
* stappler::xenolith::core::ImageViewInfo const&

# ::stappler::xenolith::core::ImageView::setLocation(uint32_t,uint32_t)

## BRIEF

Устанавливает положение отображения в наборе текстур

## CONTENT

Доступ: public

Устанавливает положение отображения в наборе текстур

Параметры:
* uint32_t - индекс набора
* uint32_t - индекс дескриптора


# ::stappler::xenolith::core::ImageView::getSet() const

## BRIEF

Возвращает индекс набора текстур

## CONTENT

Доступ: public

Возвращает индекс набора текстур

Возвращает:
* uint32_t

# ::stappler::xenolith::core::ImageView::getDescriptor() const

## BRIEF

Возвращает индекс дескриптора в наборе текстур

## CONTENT

Доступ: public

Возвращает индекс дескриптора в наборе текстур

Возвращает:
* uint32_t

# ::stappler::xenolith::core::ImageView::getIndex() const

## BRIEF

Возвращает уникальный индекс отображения

## CONTENT

Доступ: public

Возвращает уникальный индекс отображения. Индекс уникален для приложения.

Возвращает:
* uint64_t

# ::stappler::xenolith::core::ImageView::getExtent() const

## BRIEF

Возвращает размер изображения

## CONTENT

Доступ: public

Возвращает размер изображения

Возвращает:
* stappler::geom::Extent3

# ::stappler::xenolith::core::ImageView::getLayerCount() const

## BRIEF

Возвращает число слоёв

## CONTENT

Доступ: public

Возвращает число слоёв

Возвращает:
* uint32_t

# ::stappler::xenolith::core::ImageView::getFramebufferExtent() const

## BRIEF

Возвращает размер для фреймбуфера

## CONTENT

Доступ: public

Возвращает размер для фреймбуфера

Возвращает:
* stappler::geom::Extent3

# ::stappler::xenolith::core::ImageView::_info

## BRIEF

Параметры отображения

## CONTENT

Доступ: protected

Параметры отображения

Тип: stappler::xenolith::core::ImageViewInfo


# ::stappler::xenolith::core::ImageView::_image

## BRIEF

Изображение

## CONTENT

Доступ: protected

Изображение

Тип: Rc<stappler::xenolith::core::ImageObject>


# ::stappler::xenolith::core::ImageView::_set

## BRIEF

Индекс набора текстур

## CONTENT

Доступ: protected

Индекс набора текстур

Тип: uint32_t


# ::stappler::xenolith::core::ImageView::_descriptor

## BRIEF

Индекс дескриптора в наборе

## CONTENT

Доступ: protected

Индекс дескриптора в наборе

Тип: uint32_t


# ::stappler::xenolith::core::ImageView::_index

## BRIEF

Уникальный индекс

## CONTENT

Доступ: protected

Уникальный индекс

Тип: uint64_t


# ::stappler::xenolith::core::ImageView::_releaseCallback

## BRIEF

Функция освобождения ресурсов

## CONTENT

Доступ: protected

Функция освобождения ресурсов

Тип: Function<void ()>


# ::stappler::xenolith::core::BufferObject

## BRIEF

Тип буфера в памяти устройства

## CONTENT

Тип буфера в памяти устройства

Базовые классы:
* Object


# ::stappler::xenolith::core::BufferObject::~BufferObject()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор


# ::stappler::xenolith::core::BufferObject::getInfo() const

## BRIEF

Возвращает параметры буфера

## CONTENT

Доступ: public

Возвращает параметры буфера

Возвращает:
* stappler::xenolith::core::BufferInfo const&

# ::stappler::xenolith::core::BufferObject::getSize() const

## BRIEF

Возвращает размер буфера

## CONTENT

Доступ: public

Возвращает размер буфера

Возвращает:
* uint64_t

# ::stappler::xenolith::core::BufferObject::setLocation(uint32_t,uint32_t)

## BRIEF

Устанавливает положение в наборе текстур

## CONTENT

Доступ: public

Параметры:
* uint32_t - индекс в наборе текстур
* uint32_t - индекс дескриптора


# ::stappler::xenolith::core::BufferObject::getSet() const

## BRIEF

Возвращает индекс набора текстур

## CONTENT

Доступ: public

Возвращает индекс набора текстур

Возвращает:
* uint32_t

# ::stappler::xenolith::core::BufferObject::getDescriptor() const

## BRIEF

Возвращает индекс дескриптора в наборе текстур

## CONTENT

Доступ: public

Возвращает индекс дескриптора в наборе текстур

Возвращает:
* uint32_t

# ::stappler::xenolith::core::BufferObject::_info

## BRIEF

Параметры буфера

## CONTENT

Доступ: protected

Параметры буфера

Тип: stappler::xenolith::core::BufferInfo


# ::stappler::xenolith::core::BufferObject::_set

## BRIEF

Индекс набора текстур

## CONTENT

Доступ: protected

Индекс набора текстур

Тип: uint32_t


# ::stappler::xenolith::core::BufferObject::_descriptor

## BRIEF

Индекс дескриптора в наборе текстур

## CONTENT

Доступ: protected

Индекс дескриптора в наборе текстур

Тип: uint32_t


# ::stappler::xenolith::core::Sampler

## BRIEF

Тип семплера

## CONTENT

Тип семплера

Базовые классы:
* Object


# ::stappler::xenolith::core::Sampler::~Sampler()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор

# ::stappler::xenolith::core::Sampler::getInfo() const

## BRIEF

Возвращает параметры семплера

## CONTENT

Доступ: public

Возвращает параметры семплера

Возвращает:
* stappler::xenolith::core::SamplerInfo const&

# ::stappler::xenolith::core::Sampler::setIndex(uint32_t)

## BRIEF

Устанавливает индекс семплера на устройстве

## CONTENT

Доступ: public

Устанавливает индекс семплера на устройстве

Параметры:
* uint32_t


# ::stappler::xenolith::core::Sampler::getIndex() const

## BRIEF

Возвращает индекс семплера

## CONTENT

Доступ: public

Возвращает индекс семплера

Возвращает:
* uint32_t

# ::stappler::xenolith::core::Sampler::_index

## BRIEF

Индекс семплера

## CONTENT

Доступ: protected

Индекс семплера

Тип: uint32_t


# ::stappler::xenolith::core::Sampler::_info

## BRIEF

Параметры семплера

## CONTENT

Доступ: protected

Параметры семплера

Тип: stappler::xenolith::core::SamplerInfo


# ::stappler::xenolith::core::CommandBuffer

## BRIEF

Тип буфера команд

## CONTENT

Тип буфера команд

Базовые классы:
* Ref


# ::stappler::xenolith::core::CommandBuffer::~CommandBuffer()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор

# ::stappler::xenolith::core::CommandBuffer::bindImage(stappler::xenolith::core::ImageObject*)

## BRIEF

Привязывает изображение

## CONTENT

Доступ: public

Привязывает изображение

Параметры:
* stappler::xenolith::core::ImageObject*


# ::stappler::xenolith::core::CommandBuffer::bindBuffer(stappler::xenolith::core::BufferObject*)

## BRIEF

Привязывает буфер

## CONTENT

Доступ: public

Привязывает буфер

Параметры:
* stappler::xenolith::core::BufferObject*


# ::stappler::xenolith::core::CommandBuffer::bindFramebuffer(stappler::xenolith::core::Framebuffer*)

## BRIEF

Привязывает фреймбуфер

## CONTENT

Доступ: public

Привязывает фреймбуфер

Параметры:
* stappler::xenolith::core::Framebuffer*


# ::stappler::xenolith::core::CommandBuffer::_currentSubpass

## BRIEF

Текущий подпроход для записи команд

## CONTENT

Доступ: protected

Текущий подпроход для записи команд

Тип: uint32_t


# ::stappler::xenolith::core::CommandBuffer::_boundLayoutIndex

## BRIEF

Текущий индекс укладки дескрипторов

## CONTENT

Доступ: protected

Текущий индекс укладки дескрипторов

Тип: uint32_t


# ::stappler::xenolith::core::CommandBuffer::_withinRenderpass

## BRIEF

Флаг записи в проходе рендеринга

## CONTENT

Доступ: protected

Флаг записи в проходе рендеринга

Тип: bool


# ::stappler::xenolith::core::CommandBuffer::_images

## BRIEF

Привязанные изображения

## CONTENT

Доступ: protected

Привязанные изображения

Тип: Set<Rc<stappler::xenolith::core::ImageObject>>


# ::stappler::xenolith::core::CommandBuffer::_buffers

## BRIEF

Привязанные буферы

## CONTENT

Доступ: protected

Привязанные буферы

Тип: Set<Rc<stappler::xenolith::core::BufferObject>>


# ::stappler::xenolith::core::CommandBuffer::_framebuffers

## BRIEF

Привязанные фреймбуферы

## CONTENT

Доступ: protected

Привязанные фреймбуферы

Тип: Set<Rc<stappler::xenolith::core::Framebuffer>>


# ::stappler::xenolith::core::MaterialImageSlot

## BRIEF

Слот изображения в материале

## CONTENT

Слот изображения в материале


# ::stappler::xenolith::core::MaterialImageSlot::image

## BRIEF

Изображение

## CONTENT

Изображение

Тип: Rc<stappler::xenolith::core::ImageView>


# ::stappler::xenolith::core::MaterialImageSlot::refCount

## BRIEF

Число ссылок

## CONTENT

Число ссылок

Тип: uint32_t


# ::stappler::xenolith::core::MaterialBufferSlot

## BRIEF

Слот буфера в материале

## CONTENT

Слот буфера в материале


# ::stappler::xenolith::core::MaterialBufferSlot::buffer

## BRIEF

Буфер

## CONTENT

Буфер

Тип: Rc<stappler::xenolith::core::BufferObject>


# ::stappler::xenolith::core::MaterialBufferSlot::refCount

## BRIEF

Число ссылок

## CONTENT

Число ссылок

Тип: uint32_t


# ::stappler::xenolith::core::MaterialLayout

## BRIEF

Укладка материалов в текстурном наборе

## CONTENT

Укладка материалов в текстурном наборе


# ::stappler::xenolith::core::MaterialLayout::imageSlots

## BRIEF

Слоты изображений

## CONTENT

Слоты изображений

Тип: Vector<stappler::xenolith::core::MaterialImageSlot>


# ::stappler::xenolith::core::MaterialLayout::usedImageSlots

## BRIEF

Число использованных слотов изображений

## CONTENT

Число использованных слотов изображений

Тип: uint32_t


# ::stappler::xenolith::core::MaterialLayout::bufferSlots

## BRIEF

Буферы слотов

## CONTENT

Буферы слотов

Тип: Vector<stappler::xenolith::core::MaterialBufferSlot>


# ::stappler::xenolith::core::MaterialLayout::usedBufferSlots

## BRIEF

Число используемых слотов буферов

## CONTENT

Число используемых слотов буферов

Тип: uint32_t


# ::stappler::xenolith::core::MaterialLayout::set

## BRIEF

Набор текстур

## CONTENT

Набор текстур

Тип: Rc<stappler::xenolith::core::TextureSet>


# ::stappler::xenolith::core::TextureSet

## BRIEF

Тип набора текстур

## CONTENT

Тип набора текстур

Базовые классы:
* Object


# ::stappler::xenolith::core::TextureSet::~TextureSet()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор


# ::stappler::xenolith::core::TextureSet::write(stappler::xenolith::core::MaterialLayout const&)

## BRIEF

Записывает укладку материалов в набор

## CONTENT

Доступ: public

Записывает укладку материалов в набор

Параметры:
* stappler::xenolith::core::MaterialLayout const&


# ::stappler::xenolith::core::TextureSet::_count

## BRIEF

Число изображений в наборе

## CONTENT

Доступ: protected

Число изображений в наборе

Тип: uint32_t


# ::stappler::xenolith::core::TextureSet::_layoutIndexes

## BRIEF

Набор изображений

## CONTENT

Доступ: protected

Набор изображений

Тип: Vector<uint64_t>


# ::stappler::xenolith::core::TextureSet::_layoutBuffers

## BRIEF

Набор буферов

## CONTENT

Доступ: protected

Набор буферов

Тип: Vector<stappler::xenolith::core::BufferObject *>


# ::stappler::xenolith::core::Semaphore

## BRIEF

Тип семафора на стороне устройства

## CONTENT

Тип семафора на стороне устройства

Базовые классы:
* Object


# ::stappler::xenolith::core::Semaphore::~Semaphore()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор

# ::stappler::xenolith::core::Semaphore::setSignaled(bool)

## BRIEF

Устанавливает статус сигнала семафора

## CONTENT

Доступ: public

Устанавливает статус сигнала семафора

Параметры:
* bool


# ::stappler::xenolith::core::Semaphore::isSignaled() const

## BRIEF

Проверяет статус сигнала

## CONTENT

Доступ: public

Проверяет статус сигнала

Возвращает:
* bool

# ::stappler::xenolith::core::Semaphore::setWaited(bool)

## BRIEF

Устанавливает статус ожидания

## CONTENT

Доступ: public

Устанавливает статус ожидания

Параметры:
* bool


# ::stappler::xenolith::core::Semaphore::isWaited() const

## BRIEF

Проверяет статус ожидания

## CONTENT

Доступ: public

Проверяет статус ожидания

Возвращает:
* bool

# ::stappler::xenolith::core::Semaphore::setInUse(bool,uint64_t)

## BRIEF

Устанавливает флаг использования

## CONTENT

Доступ: public

Устанавливает флаг использования

Параметры:
* bool
* uint64_t - текущее время


# ::stappler::xenolith::core::Semaphore::isInUse() const

## BRIEF

Проверяет флаг использования

## CONTENT

Доступ: public

Проверяет флаг использования

Возвращает:
* bool

# ::stappler::xenolith::core::Semaphore::getTimeline() const

## BRIEF

Возвращает время использования

## CONTENT

Доступ: public

Возвращает время использования

Возвращает:
* uint64_t

# ::stappler::xenolith::core::Semaphore::reset()

## BRIEF

Перезапускает семафор

## CONTENT

Доступ: public

Перезапускает семафор

Возвращает:
* bool

# ::stappler::xenolith::core::Semaphore::_timeline

## BRIEF

Время использования

## CONTENT

Доступ: protected

Время использования

Тип: uint64_t


# ::stappler::xenolith::core::Semaphore::_signaled

## BRIEF

Флаг сигнала

## CONTENT

Доступ: protected

Флаг сигнала

Тип: bool


# ::stappler::xenolith::core::Semaphore::_waited

## BRIEF

Флаг ожидания

## CONTENT

Доступ: protected

Флаг ожидания

Тип: bool


# ::stappler::xenolith::core::Semaphore::_inUse

## BRIEF

Флаг использования

## CONTENT

Доступ: protected

Флаг использования

Тип: bool
