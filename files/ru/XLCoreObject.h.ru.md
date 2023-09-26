Title: XLCoreObject.h


# XENOLITH_CORE_XLCOREOBJECT_H_

## BRIEF

## CONTENT


# XL_USE_64_BIT_PTR_DEFINES

## BRIEF

## CONTENT


# ::stappler::xenolith::core::ObjectHandle

## BRIEF

## CONTENT


# ::stappler::xenolith::core::ObjectInterface

## BRIEF

## CONTENT


# ::stappler::xenolith::core::ObjectInterface::ObjectHandle

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::ObjectInterface::ClearCallback

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::ObjectInterface::~ObjectInterface()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::ObjectInterface::init(stappler::xenolith::core::Device&,stappler::xenolith::core::ObjectInterface::ClearCallback,stappler::xenolith::core::ObjectType,stappler::xenolith::core::ObjectInterface::ObjectHandle)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::Device&
* stappler::xenolith::core::ObjectInterface::ClearCallback
* stappler::xenolith::core::ObjectType
* stappler::xenolith::core::ObjectInterface::ObjectHandle

Возвращает:
* bool

# ::stappler::xenolith::core::ObjectInterface::invalidate()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::ObjectInterface::getType() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::core::ObjectType

# ::stappler::xenolith::core::ObjectInterface::getObject() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* ObjectHandle

# ::stappler::xenolith::core::ObjectInterface::_type

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::core::ObjectType


# ::stappler::xenolith::core::ObjectInterface::_device

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::core::Device*


# ::stappler::xenolith::core::ObjectInterface::_callback

## BRIEF

## CONTENT

Доступ: protected

Тип: ClearCallback


# ::stappler::xenolith::core::ObjectInterface::_handle

## BRIEF

## CONTENT

Доступ: protected

Тип: ObjectHandle


# ::stappler::xenolith::core::NamedObject

## BRIEF

## CONTENT

Базовые классы:
* NamedRef
* ObjectInterface


# ::stappler::xenolith::core::NamedObject::~NamedObject()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::Object

## BRIEF

## CONTENT

Базовые классы:
* Ref
* ObjectInterface


# ::stappler::xenolith::core::Object::~Object()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::GraphicPipeline

## BRIEF

## CONTENT

Базовые классы:
* NamedObject


# ::stappler::xenolith::core::GraphicPipeline::PipelineInfo

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::GraphicPipeline::PipelineData

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::GraphicPipeline::SubpassData

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::GraphicPipeline::RenderQueue

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::GraphicPipeline::~GraphicPipeline()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::GraphicPipeline::getName() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::StringView

# ::stappler::xenolith::core::GraphicPipeline::_name

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::mem_std::String


# ::stappler::xenolith::core::ComputePipeline

## BRIEF

## CONTENT

Базовые классы:
* NamedObject


# ::stappler::xenolith::core::ComputePipeline::PipelineInfo

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::ComputePipeline::PipelineData

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::ComputePipeline::SubpassData

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::ComputePipeline::RenderQueue

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::ComputePipeline::~ComputePipeline()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::ComputePipeline::getName() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::StringView

# ::stappler::xenolith::core::ComputePipeline::_name

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::mem_std::String


# ::stappler::xenolith::core::Shader

## BRIEF

## CONTENT

Базовые классы:
* NamedObject


# ::stappler::xenolith::core::Shader::ProgramData

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::Shader::DescriptorType

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::Shader::inspectShader(SpanView<uint32_t>)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* SpanView<uint32_t>

Возвращает:
* stappler::mem_std::String

# ::stappler::xenolith::core::Shader::~Shader()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::Shader::getName() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::StringView

# ::stappler::xenolith::core::Shader::getStage() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::core::ProgramStage

# ::stappler::xenolith::core::Shader::inspect(SpanView<uint32_t>)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* SpanView<uint32_t>

Возвращает:
* stappler::mem_std::String

# ::stappler::xenolith::core::Shader::_name

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::mem_std::String


# ::stappler::xenolith::core::Shader::_stage

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::core::ProgramStage


# ::stappler::xenolith::core::RenderPass

## BRIEF

## CONTENT

Базовые классы:
* NamedObject


# ::stappler::xenolith::core::RenderPass::QueuePassData

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::RenderPass::Attachment

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::RenderPass::PipelineDescriptor

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::RenderPass::DescriptorType

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::RenderPass::~RenderPass()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::RenderPass::init(stappler::xenolith::core::Device&,stappler::xenolith::core::ObjectInterface::ClearCallback,stappler::xenolith::core::ObjectType,stappler::xenolith::core::ObjectInterface::ObjectHandle)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::Device&
* stappler::xenolith::core::ObjectInterface::ClearCallback
* stappler::xenolith::core::ObjectType
* stappler::xenolith::core::ObjectInterface::ObjectHandle

Возвращает:
* bool

# ::stappler::xenolith::core::RenderPass::getName() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::StringView

# ::stappler::xenolith::core::RenderPass::getIndex() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint64_t

# ::stappler::xenolith::core::RenderPass::getType() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::core::PassType

# ::stappler::xenolith::core::RenderPass::_name

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::mem_std::String


# ::stappler::xenolith::core::RenderPass::_index

## BRIEF

## CONTENT

Доступ: protected

Тип: uint64_t


# ::stappler::xenolith::core::RenderPass::_type

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::core::PassType


# ::stappler::xenolith::core::Framebuffer

## BRIEF

## CONTENT

Базовые классы:
* Object


# ::stappler::xenolith::core::Framebuffer::getViewHash(SpanView<Rc<stappler::xenolith::core::ImageView>>)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* SpanView<Rc<stappler::xenolith::core::ImageView>>

Возвращает:
* uint64_t

# ::stappler::xenolith::core::Framebuffer::getViewHash(SpanView<uint64_t>)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* SpanView<uint64_t>

Возвращает:
* uint64_t

# ::stappler::xenolith::core::Framebuffer::~Framebuffer()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::Framebuffer::getExtent() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::Extent2 const&

# ::stappler::xenolith::core::Framebuffer::getLayerCount() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint32_t

# ::stappler::xenolith::core::Framebuffer::getFramebufferExtent() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::Extent3

# ::stappler::xenolith::core::Framebuffer::getViewIds() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Vector<uint64_t> const&

# ::stappler::xenolith::core::Framebuffer::getRenderPass() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Rc<stappler::xenolith::core::RenderPass> const&

# ::stappler::xenolith::core::Framebuffer::getHash() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint64_t

# ::stappler::xenolith::core::Framebuffer::_extent

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::Extent2


# ::stappler::xenolith::core::Framebuffer::_layerCount

## BRIEF

## CONTENT

Доступ: protected

Тип: uint32_t


# ::stappler::xenolith::core::Framebuffer::_viewIds

## BRIEF

## CONTENT

Доступ: protected

Тип: Vector<uint64_t>


# ::stappler::xenolith::core::Framebuffer::_renderPass

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::xenolith::core::RenderPass>


# ::stappler::xenolith::core::Framebuffer::_imageViews

## BRIEF

## CONTENT

Доступ: protected

Тип: Vector<Rc<stappler::xenolith::core::ImageView>>


# ::stappler::xenolith::core::DataAtlas

## BRIEF

## CONTENT

Базовые классы:
* Ref


# ::stappler::xenolith::core::DataAtlas::Type

## BRIEF

## CONTENT

Доступ: public

Значения:
* ImageAtlas
* MeshAtlas
* Custom


# ::stappler::xenolith::core::DataAtlas::~DataAtlas()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::DataAtlas::init(stappler::xenolith::core::DataAtlas::Type,uint32_t,uint32_t,stappler::xenolith::Extent2)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::DataAtlas::Type
* uint32_t
* uint32_t
* stappler::xenolith::Extent2

Возвращает:
* bool

# ::stappler::xenolith::core::DataAtlas::compile()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::DataAtlas::getObjectByName(uint32_t) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint32_t

Возвращает:
* uint8_t const*

# ::stappler::xenolith::core::DataAtlas::getObjectByName(stappler::StringView) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView

Возвращает:
* uint8_t const*

# ::stappler::xenolith::core::DataAtlas::getObjectByOrder(uint32_t) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint32_t

Возвращает:
* uint8_t const*

# ::stappler::xenolith::core::DataAtlas::addObject(uint32_t,void*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint32_t
* void*


# ::stappler::xenolith::core::DataAtlas::addObject(stappler::StringView,void*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView
* void*


# ::stappler::xenolith::core::DataAtlas::getType() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::core::DataAtlas::Type

# ::stappler::xenolith::core::DataAtlas::getObjectSize() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint32_t

# ::stappler::xenolith::core::DataAtlas::getImageExtent() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::Extent2

# ::stappler::xenolith::core::DataAtlas::getObjectsCount() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint32_t

# ::stappler::xenolith::core::DataAtlas::getData() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::BytesView

# ::stappler::xenolith::core::DataAtlas::getIndexData() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::BytesView

# ::stappler::xenolith::core::DataAtlas::setIndexBuffer(Rc<stappler::xenolith::core::BufferObject>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Rc<stappler::xenolith::core::BufferObject>&&


# ::stappler::xenolith::core::DataAtlas::getIndexBuffer() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Rc<stappler::xenolith::core::BufferObject> const&

# ::stappler::xenolith::core::DataAtlas::setDataBuffer(Rc<stappler::xenolith::core::BufferObject>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Rc<stappler::xenolith::core::BufferObject>&&


# ::stappler::xenolith::core::DataAtlas::getDataBuffer() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Rc<stappler::xenolith::core::BufferObject> const&

# ::stappler::xenolith::core::DataAtlas::makeHashIndex()

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::core::DataAtlas::_type

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::core::DataAtlas::Type


# ::stappler::xenolith::core::DataAtlas::_objectSize

## BRIEF

## CONTENT

Доступ: protected

Тип: uint32_t


# ::stappler::xenolith::core::DataAtlas::_imageExtent

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::Extent2


# ::stappler::xenolith::core::DataAtlas::_intNames

## BRIEF

## CONTENT

Доступ: protected

Тип: std::unordered_map<uint32_t, uint32_t>


# ::stappler::xenolith::core::DataAtlas::_stringNames

## BRIEF

## CONTENT

Доступ: protected

Тип: std::unordered_map<String, uint32_t>


# ::stappler::xenolith::core::DataAtlas::_data

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::mem_std::Bytes


# ::stappler::xenolith::core::DataAtlas::_dataIndex

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::mem_std::Bytes


# ::stappler::xenolith::core::DataAtlas::_indexBuffer

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::xenolith::core::BufferObject>


# ::stappler::xenolith::core::DataAtlas::_dataBuffer

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::xenolith::core::BufferObject>


# ::stappler::xenolith::core::ImageObject

## BRIEF

## CONTENT

Базовые классы:
* Object


# ::stappler::xenolith::core::ImageObject::~ImageObject()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::ImageObject::init(stappler::xenolith::core::Device&,stappler::xenolith::core::ObjectInterface::ClearCallback,stappler::xenolith::core::ObjectType,stappler::xenolith::core::ObjectInterface::ObjectHandle)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::Device&
* stappler::xenolith::core::ObjectInterface::ClearCallback
* stappler::xenolith::core::ObjectType
* stappler::xenolith::core::ObjectInterface::ObjectHandle

Возвращает:
* bool

# ::stappler::xenolith::core::ImageObject::init(stappler::xenolith::core::Device&,stappler::xenolith::core::ObjectInterface::ClearCallback,stappler::xenolith::core::ObjectType,stappler::xenolith::core::ObjectInterface::ObjectHandle,uint64_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::Device&
* stappler::xenolith::core::ObjectInterface::ClearCallback
* stappler::xenolith::core::ObjectType
* stappler::xenolith::core::ObjectInterface::ObjectHandle
* uint64_t

Возвращает:
* bool

# ::stappler::xenolith::core::ImageObject::getInfo() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::core::ImageInfoData const&

# ::stappler::xenolith::core::ImageObject::getIndex() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint64_t

# ::stappler::xenolith::core::ImageObject::getAtlas() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Rc<stappler::xenolith::core::DataAtlas> const&

# ::stappler::xenolith::core::ImageObject::getViewInfo(stappler::xenolith::core::ImageViewInfo const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::ImageViewInfo const&

Возвращает:
* stappler::xenolith::core::ImageViewInfo

# ::stappler::xenolith::core::ImageObject::_info

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::core::ImageInfoData


# ::stappler::xenolith::core::ImageObject::_atlas

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::xenolith::core::DataAtlas>


# ::stappler::xenolith::core::ImageObject::_index

## BRIEF

## CONTENT

Доступ: protected

Тип: uint64_t


# ::stappler::xenolith::core::ImageView

## BRIEF

## CONTENT

Базовые классы:
* Object


# ::stappler::xenolith::core::ImageView::~ImageView()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::ImageView::init(stappler::xenolith::core::Device&,stappler::xenolith::core::ObjectInterface::ClearCallback,stappler::xenolith::core::ObjectType,stappler::xenolith::core::ObjectInterface::ObjectHandle)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::Device&
* stappler::xenolith::core::ObjectInterface::ClearCallback
* stappler::xenolith::core::ObjectType
* stappler::xenolith::core::ObjectInterface::ObjectHandle

Возвращает:
* bool

# ::stappler::xenolith::core::ImageView::invalidate()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::ImageView::setReleaseCallback(Function<void ()>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Function<void ()>&&


# ::stappler::xenolith::core::ImageView::runReleaseCallback()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::ImageView::getImage() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Rc<stappler::xenolith::core::ImageObject> const&

# ::stappler::xenolith::core::ImageView::getInfo() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::core::ImageViewInfo const&

# ::stappler::xenolith::core::ImageView::setLocation(uint32_t,uint32_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint32_t
* uint32_t


# ::stappler::xenolith::core::ImageView::getSet() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint32_t

# ::stappler::xenolith::core::ImageView::getDescriptor() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint32_t

# ::stappler::xenolith::core::ImageView::getIndex() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint64_t

# ::stappler::xenolith::core::ImageView::getExtent() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::Extent3

# ::stappler::xenolith::core::ImageView::getLayerCount() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint32_t

# ::stappler::xenolith::core::ImageView::getFramebufferExtent() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::Extent3

# ::stappler::xenolith::core::ImageView::_info

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::core::ImageViewInfo


# ::stappler::xenolith::core::ImageView::_image

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::xenolith::core::ImageObject>


# ::stappler::xenolith::core::ImageView::_set

## BRIEF

## CONTENT

Доступ: protected

Тип: uint32_t


# ::stappler::xenolith::core::ImageView::_descriptor

## BRIEF

## CONTENT

Доступ: protected

Тип: uint32_t


# ::stappler::xenolith::core::ImageView::_index

## BRIEF

## CONTENT

Доступ: protected

Тип: uint64_t


# ::stappler::xenolith::core::ImageView::_releaseCallback

## BRIEF

## CONTENT

Доступ: protected

Тип: Function<void ()>


# ::stappler::xenolith::core::BufferObject

## BRIEF

## CONTENT

Базовые классы:
* Object


# ::stappler::xenolith::core::BufferObject::~BufferObject()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::BufferObject::getInfo() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::core::BufferInfo const&

# ::stappler::xenolith::core::BufferObject::getSize() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint64_t

# ::stappler::xenolith::core::BufferObject::setLocation(uint32_t,uint32_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint32_t
* uint32_t


# ::stappler::xenolith::core::BufferObject::getSet() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint32_t

# ::stappler::xenolith::core::BufferObject::getDescriptor() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint32_t

# ::stappler::xenolith::core::BufferObject::_info

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::core::BufferInfo


# ::stappler::xenolith::core::BufferObject::_set

## BRIEF

## CONTENT

Доступ: protected

Тип: uint32_t


# ::stappler::xenolith::core::BufferObject::_descriptor

## BRIEF

## CONTENT

Доступ: protected

Тип: uint32_t


# ::stappler::xenolith::core::Sampler

## BRIEF

## CONTENT

Базовые классы:
* Object


# ::stappler::xenolith::core::Sampler::~Sampler()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::Sampler::getInfo() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::core::SamplerInfo const&

# ::stappler::xenolith::core::Sampler::setIndex(uint32_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint32_t


# ::stappler::xenolith::core::Sampler::getIndex() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint32_t

# ::stappler::xenolith::core::Sampler::_index

## BRIEF

## CONTENT

Доступ: protected

Тип: uint32_t


# ::stappler::xenolith::core::Sampler::_info

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::core::SamplerInfo


# ::stappler::xenolith::core::MaterialImageSlot

## BRIEF

## CONTENT


# ::stappler::xenolith::core::MaterialImageSlot::image

## BRIEF

## CONTENT

Тип: Rc<stappler::xenolith::core::ImageView>


# ::stappler::xenolith::core::MaterialImageSlot::refCount

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::xenolith::core::MaterialBufferSlot

## BRIEF

## CONTENT


# ::stappler::xenolith::core::MaterialBufferSlot::buffer

## BRIEF

## CONTENT

Тип: Rc<stappler::xenolith::core::BufferObject>


# ::stappler::xenolith::core::MaterialBufferSlot::refCount

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::xenolith::core::MaterialLayout

## BRIEF

## CONTENT


# ::stappler::xenolith::core::MaterialLayout::imageSlots

## BRIEF

## CONTENT

Тип: Vector<stappler::xenolith::core::MaterialImageSlot>


# ::stappler::xenolith::core::MaterialLayout::usedImageSlots

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::xenolith::core::MaterialLayout::bufferSlots

## BRIEF

## CONTENT

Тип: Vector<stappler::xenolith::core::MaterialBufferSlot>


# ::stappler::xenolith::core::MaterialLayout::usedBufferSlots

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::xenolith::core::MaterialLayout::set

## BRIEF

## CONTENT

Тип: Rc<stappler::xenolith::core::TextureSet>


# ::stappler::xenolith::core::TextureSet

## BRIEF

## CONTENT

Базовые классы:
* Object


# ::stappler::xenolith::core::TextureSet::~TextureSet()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::TextureSet::write(stappler::xenolith::core::MaterialLayout const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::MaterialLayout const&


# ::stappler::xenolith::core::TextureSet::_count

## BRIEF

## CONTENT

Доступ: protected

Тип: uint32_t


# ::stappler::xenolith::core::TextureSet::_layoutIndexes

## BRIEF

## CONTENT

Доступ: protected

Тип: Vector<uint64_t>


# ::stappler::xenolith::core::TextureSet::_layoutBuffers

## BRIEF

## CONTENT

Доступ: protected

Тип: Vector<stappler::xenolith::core::BufferObject *>


# ::stappler::xenolith::core::Semaphore

## BRIEF

## CONTENT

Базовые классы:
* Object


# ::stappler::xenolith::core::Semaphore::~Semaphore()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::Semaphore::setSignaled(bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* bool


# ::stappler::xenolith::core::Semaphore::isSignaled() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::core::Semaphore::setWaited(bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* bool


# ::stappler::xenolith::core::Semaphore::isWaited() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::core::Semaphore::setInUse(bool,uint64_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* bool
* uint64_t


# ::stappler::xenolith::core::Semaphore::isInUse() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::core::Semaphore::getTimeline() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint64_t

# ::stappler::xenolith::core::Semaphore::reset()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::core::Semaphore::_timeline

## BRIEF

## CONTENT

Доступ: protected

Тип: uint64_t


# ::stappler::xenolith::core::Semaphore::_signaled

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::core::Semaphore::_waited

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::core::Semaphore::_inUse

## BRIEF

## CONTENT

Доступ: protected

Тип: bool
