Title: XLCoreQueue.h


# XENOLITH_CORE_XLCOREQUEUE_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::core::Queue

## BRIEF

## CONTENT

Базовые классы:
* NamedRef


# ::stappler::xenolith::core::Queue::FrameRequest

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::Queue::FrameQueue

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::Queue::AttachmentHandle

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::Queue::FrameHandle

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::Queue::AttachmentData

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::Queue::AttachmentBuilder

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::Queue::Queue()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::Queue::~Queue()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::Queue::init(stappler::xenolith::core::Queue::Builder&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::Queue::Builder&&

Возвращает:
* bool

# ::stappler::xenolith::core::Queue::isCompiled() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::core::Queue::setCompiled(bool,Function<void ()>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* bool
* Function<void ()>&&


# ::stappler::xenolith::core::Queue::isCompatible(stappler::xenolith::core::ImageInfo const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::ImageInfo const&

Возвращает:
* bool

# ::stappler::xenolith::core::Queue::getName() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::StringView

# ::stappler::xenolith::core::Queue::getPrograms() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* HashTable<stappler::xenolith::core::ProgramData *> const&

# ::stappler::xenolith::core::Queue::getPasses() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* HashTable<stappler::xenolith::core::QueuePassData *> const&

# ::stappler::xenolith::core::Queue::getGraphicPipelines() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* HashTable<stappler::xenolith::core::GraphicPipelineData *> const&

# ::stappler::xenolith::core::Queue::getComputePipelines() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* HashTable<stappler::xenolith::core::ComputePipelineData *> const&

# ::stappler::xenolith::core::Queue::getAttachments() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* HashTable<stappler::xenolith::core::Queue::AttachmentData *> const&

# ::stappler::xenolith::core::Queue::getLinkedResources() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* HashTable<Rc<stappler::xenolith::core::Resource>> const&

# ::stappler::xenolith::core::Queue::getInternalResource() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Rc<stappler::xenolith::core::Resource>

# ::stappler::xenolith::core::Queue::getInputAttachments() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* memory::vector<AttachmentData *> const&

# ::stappler::xenolith::core::Queue::getOutputAttachments() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* memory::vector<AttachmentData *> const&

# ::stappler::xenolith::core::Queue::getInputAttachment<typename>() const

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename T

Возвращает:
* T const*

# ::stappler::xenolith::core::Queue::getOutputAttachment<typename>() const

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename T

Возвращает:
* T const*

# ::stappler::xenolith::core::Queue::getInputAttachment(std::type_index) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* std::type_index

Возвращает:
* stappler::xenolith::core::Attachment const*

# ::stappler::xenolith::core::Queue::getOutputAttachment(std::type_index) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* std::type_index

Возвращает:
* stappler::xenolith::core::Attachment const*

# ::stappler::xenolith::core::Queue::getPass(stappler::StringView) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView

Возвращает:
* stappler::xenolith::core::QueuePassData const*

# ::stappler::xenolith::core::Queue::getProgram(stappler::StringView) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView

Возвращает:
* stappler::xenolith::core::ProgramData const*

# ::stappler::xenolith::core::Queue::getGraphicPipeline(stappler::StringView) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView

Возвращает:
* stappler::xenolith::core::GraphicPipelineData const*

# ::stappler::xenolith::core::Queue::getComputePipeline(stappler::StringView) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView

Возвращает:
* stappler::xenolith::core::ComputePipelineData const*

# ::stappler::xenolith::core::Queue::getAttachment(stappler::StringView) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView

Возвращает:
* AttachmentData*

# ::stappler::xenolith::core::Queue::getOutput() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Vector<stappler::xenolith::core::Queue::AttachmentData *>

# ::stappler::xenolith::core::Queue::getOutput(stappler::xenolith::core::AttachmentType) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::AttachmentType

Возвращает:
* Vector<stappler::xenolith::core::Queue::AttachmentData *>

# ::stappler::xenolith::core::Queue::getPresentImageOutput() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* AttachmentData*

# ::stappler::xenolith::core::Queue::getTransferImageOutput() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* AttachmentData*

# ::stappler::xenolith::core::Queue::incrementOrder()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint64_t

# ::stappler::xenolith::core::Queue::prepare(stappler::xenolith::core::Device&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::Device&

Возвращает:
* bool

# ::stappler::xenolith::core::Queue::beginFrame(stappler::xenolith::core::Queue::FrameRequest&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::Queue::FrameRequest&


# ::stappler::xenolith::core::Queue::endFrame(stappler::xenolith::core::Queue::FrameRequest&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::Queue::FrameRequest&


# ::stappler::xenolith::core::Queue::_data

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::core::QueueData*


# ::stappler::xenolith::core::AttachmentBuilder

## BRIEF

## CONTENT


# ::stappler::xenolith::core::AttachmentBuilder::setType(stappler::xenolith::core::AttachmentType)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::AttachmentType


# ::stappler::xenolith::core::AttachmentBuilder::defineAsInput(stappler::xenolith::core::AttachmentOps)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::AttachmentOps


# ::stappler::xenolith::core::AttachmentBuilder::defineAsOutput(stappler::xenolith::core::AttachmentOps)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::AttachmentOps


# ::stappler::xenolith::core::AttachmentBuilder::getAttachmentData() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::core::AttachmentData const*

# ::stappler::xenolith::core::AttachmentBuilder::AttachmentBuilder(stappler::xenolith::core::AttachmentData*)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::core::AttachmentData*


# ::stappler::xenolith::core::AttachmentBuilder::_data

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::core::AttachmentData*


# ::stappler::xenolith::core::AttachmentPassBuilder

## BRIEF

## CONTENT


# ::stappler::xenolith::core::AttachmentPassBuilder::setAttachmentOps(stappler::xenolith::core::AttachmentOps)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::AttachmentOps


# ::stappler::xenolith::core::AttachmentPassBuilder::setInitialLayout(stappler::xenolith::core::AttachmentLayout)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::AttachmentLayout


# ::stappler::xenolith::core::AttachmentPassBuilder::setFinalLayout(stappler::xenolith::core::AttachmentLayout)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::AttachmentLayout


# ::stappler::xenolith::core::AttachmentPassBuilder::setLoadOp(stappler::xenolith::core::AttachmentLoadOp)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::AttachmentLoadOp


# ::stappler::xenolith::core::AttachmentPassBuilder::setStoreOp(stappler::xenolith::core::AttachmentStoreOp)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::AttachmentStoreOp


# ::stappler::xenolith::core::AttachmentPassBuilder::setStencilLoadOp(stappler::xenolith::core::AttachmentLoadOp)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::AttachmentLoadOp


# ::stappler::xenolith::core::AttachmentPassBuilder::setStencilStoreOp(stappler::xenolith::core::AttachmentStoreOp)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::AttachmentStoreOp


# ::stappler::xenolith::core::AttachmentPassBuilder::setColorMode(stappler::xenolith::core::ColorMode const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::ColorMode const&


# ::stappler::xenolith::core::AttachmentPassBuilder::setDependency(stappler::xenolith::core::AttachmentDependencyInfo const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::AttachmentDependencyInfo const&


# ::stappler::xenolith::core::AttachmentPassBuilder::AttachmentPassBuilder(stappler::xenolith::core::AttachmentPassData*)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::core::AttachmentPassData*


# ::stappler::xenolith::core::AttachmentPassBuilder::_data

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::core::AttachmentPassData*


# ::stappler::xenolith::core::DescriptorSetBuilder

## BRIEF

## CONTENT


# ::stappler::xenolith::core::DescriptorSetBuilder::addDescriptor(stappler::xenolith::core::AttachmentPassData const*,stappler::xenolith::core::DescriptorType,stappler::xenolith::core::AttachmentLayout)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::AttachmentPassData const*
* stappler::xenolith::core::DescriptorType
* stappler::xenolith::core::AttachmentLayout

Возвращает:
* bool

# ::stappler::xenolith::core::DescriptorSetBuilder::DescriptorSetBuilder(stappler::xenolith::core::DescriptorSetData*)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::core::DescriptorSetData*


# ::stappler::xenolith::core::DescriptorSetBuilder::_data

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::core::DescriptorSetData*


# ::stappler::xenolith::core::PipelineLayoutBuilder

## BRIEF

## CONTENT


# ::stappler::xenolith::core::PipelineLayoutBuilder::addSet(Callback<void (stappler::xenolith::core::DescriptorSetBuilder &)> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Callback<void (stappler::xenolith::core::DescriptorSetBuilder &)> const&

Возвращает:
* bool

# ::stappler::xenolith::core::PipelineLayoutBuilder::setUsesTextureSet(bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* bool


# ::stappler::xenolith::core::PipelineLayoutBuilder::PipelineLayoutBuilder(stappler::xenolith::core::PipelineLayoutData*)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::core::PipelineLayoutData*


# ::stappler::xenolith::core::PipelineLayoutBuilder::_data

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::core::PipelineLayoutData*


# ::stappler::xenolith::core::SubpassBuilder

## BRIEF

## CONTENT


# ::stappler::xenolith::core::SubpassBuilder::addColor(stappler::xenolith::core::AttachmentPassData const*,stappler::xenolith::core::AttachmentDependencyInfo,stappler::xenolith::core::AttachmentLayout,stappler::xenolith::core::AttachmentOps)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::AttachmentPassData const*
* stappler::xenolith::core::AttachmentDependencyInfo
* stappler::xenolith::core::AttachmentLayout
* stappler::xenolith::core::AttachmentOps

Возвращает:
* bool

# ::stappler::xenolith::core::SubpassBuilder::addInput(stappler::xenolith::core::AttachmentPassData const*,stappler::xenolith::core::AttachmentDependencyInfo,stappler::xenolith::core::AttachmentLayout,stappler::xenolith::core::AttachmentOps)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::AttachmentPassData const*
* stappler::xenolith::core::AttachmentDependencyInfo
* stappler::xenolith::core::AttachmentLayout
* stappler::xenolith::core::AttachmentOps

Возвращает:
* bool

# ::stappler::xenolith::core::SubpassBuilder::addResolve(stappler::xenolith::core::AttachmentPassData const*,stappler::xenolith::core::AttachmentPassData const*,stappler::xenolith::core::AttachmentDependencyInfo,stappler::xenolith::core::AttachmentDependencyInfo)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::AttachmentPassData const*
* stappler::xenolith::core::AttachmentPassData const*
* stappler::xenolith::core::AttachmentDependencyInfo
* stappler::xenolith::core::AttachmentDependencyInfo

Возвращает:
* bool

# ::stappler::xenolith::core::SubpassBuilder::setDepthStencil(stappler::xenolith::core::AttachmentPassData const*,stappler::xenolith::core::AttachmentDependencyInfo,stappler::xenolith::core::AttachmentLayout,stappler::xenolith::core::AttachmentOps)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::AttachmentPassData const*
* stappler::xenolith::core::AttachmentDependencyInfo
* stappler::xenolith::core::AttachmentLayout
* stappler::xenolith::core::AttachmentOps

Возвращает:
* bool

# ::stappler::xenolith::core::SubpassBuilder::addGraphicPipeline<typename>(stappler::StringView,stappler::xenolith::core::PipelineLayoutData const*,Args &&...)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename Args

Параметры:
* stappler::StringView
* stappler::xenolith::core::PipelineLayoutData const*
* Args &&...

Возвращает:
* stappler::xenolith::core::GraphicPipelineData const*

# ::stappler::xenolith::core::SubpassBuilder::addComputePipeline(stappler::StringView,stappler::xenolith::core::PipelineLayoutData const*,stappler::xenolith::core::SpecializationInfo&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView
* stappler::xenolith::core::PipelineLayoutData const*
* stappler::xenolith::core::SpecializationInfo&&

Возвращает:
* stappler::xenolith::core::ComputePipelineData const*

# ::stappler::xenolith::core::SubpassBuilder::emplacePipeline(stappler::StringView,stappler::xenolith::core::PipelineLayoutData const*)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::StringView
* stappler::xenolith::core::PipelineLayoutData const*

Возвращает:
* stappler::xenolith::core::GraphicPipelineData*

# ::stappler::xenolith::core::SubpassBuilder::finalizePipeline(stappler::xenolith::core::GraphicPipelineData*)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::core::GraphicPipelineData*


# ::stappler::xenolith::core::SubpassBuilder::erasePipeline(stappler::xenolith::core::GraphicPipelineData*)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::core::GraphicPipelineData*


# ::stappler::xenolith::core::SubpassBuilder::setPipelineOption(stappler::xenolith::core::GraphicPipelineData&,stappler::xenolith::core::DynamicState)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::core::GraphicPipelineData&
* stappler::xenolith::core::DynamicState

Возвращает:
* bool

# ::stappler::xenolith::core::SubpassBuilder::setPipelineOption(stappler::xenolith::core::GraphicPipelineData&,Vector<stappler::xenolith::core::SpecializationInfo> const&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::core::GraphicPipelineData&
* Vector<stappler::xenolith::core::SpecializationInfo> const&

Возвращает:
* bool

# ::stappler::xenolith::core::SubpassBuilder::setPipelineOption(stappler::xenolith::core::GraphicPipelineData&,stappler::xenolith::core::PipelineMaterialInfo const&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::core::GraphicPipelineData&
* stappler::xenolith::core::PipelineMaterialInfo const&

Возвращает:
* bool

# ::stappler::xenolith::core::SubpassBuilder::setPipelineOptions<typename>(stappler::xenolith::core::GraphicPipelineData&,T&&)

## BRIEF

## CONTENT

Доступ: protected

Параметры шаблона:
* typename T

Параметры:
* stappler::xenolith::core::GraphicPipelineData&
* T&&

Возвращает:
* bool

# ::stappler::xenolith::core::SubpassBuilder::setPipelineOptions<typename,typename>(stappler::xenolith::core::GraphicPipelineData&,T&&,Args &&...)

## BRIEF

## CONTENT

Доступ: protected

Параметры шаблона:
* typename T
* typename Args

Параметры:
* stappler::xenolith::core::GraphicPipelineData&
* T&&
* Args &&...

Возвращает:
* bool

# ::stappler::xenolith::core::SubpassBuilder::SubpassBuilder(stappler::xenolith::core::SubpassData*)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::core::SubpassData*


# ::stappler::xenolith::core::SubpassBuilder::_data

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::core::SubpassData*


# ::stappler::xenolith::core::QueuePassBuilder

## BRIEF

## CONTENT


# ::stappler::xenolith::core::QueuePassBuilder::addDescriptorLayout(Callback<void (stappler::xenolith::core::PipelineLayoutBuilder &)> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Callback<void (stappler::xenolith::core::PipelineLayoutBuilder &)> const&

Возвращает:
* stappler::xenolith::core::PipelineLayoutData const*

# ::stappler::xenolith::core::QueuePassBuilder::addSubpass(Callback<void (stappler::xenolith::core::SubpassBuilder &)> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Callback<void (stappler::xenolith::core::SubpassBuilder &)> const&

Возвращает:
* stappler::xenolith::core::SubpassData const*

# ::stappler::xenolith::core::QueuePassBuilder::addSubpassDependency(stappler::xenolith::core::SubpassData const*,stappler::xenolith::core::PipelineStage,stappler::xenolith::core::AccessType,stappler::xenolith::core::SubpassData const*,stappler::xenolith::core::PipelineStage,stappler::xenolith::core::AccessType,bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::SubpassData const*
* stappler::xenolith::core::PipelineStage
* stappler::xenolith::core::AccessType
* stappler::xenolith::core::SubpassData const*
* stappler::xenolith::core::PipelineStage
* stappler::xenolith::core::AccessType
* bool

Возвращает:
* bool

# ::stappler::xenolith::core::QueuePassBuilder::addAttachment(stappler::xenolith::core::AttachmentData const*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::AttachmentData const*

Возвращает:
* stappler::xenolith::core::AttachmentPassData const*

# ::stappler::xenolith::core::QueuePassBuilder::addAttachment(stappler::xenolith::core::AttachmentData const*,Callback<void (stappler::xenolith::core::AttachmentPassBuilder &)> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::AttachmentData const*
* Callback<void (stappler::xenolith::core::AttachmentPassBuilder &)> const&

Возвращает:
* stappler::xenolith::core::AttachmentPassData const*

# ::stappler::xenolith::core::QueuePassBuilder::getData() const

## BRIEF

## CONTENT

Доступ: protected

Возвращает:
* stappler::xenolith::core::QueuePassData*

# ::stappler::xenolith::core::QueuePassBuilder::QueuePassBuilder(stappler::xenolith::core::QueuePassData*)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::core::QueuePassData*


# ::stappler::xenolith::core::QueuePassBuilder::_data

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::core::QueuePassData*


# ::stappler::xenolith::core::Builder

## BRIEF

## CONTENT


# ::stappler::xenolith::core::Builder::Builder(stappler::StringView)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView


# ::stappler::xenolith::core::Builder::~Builder()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::Builder::addAttachemnt(stappler::StringView,Callback<Rc<stappler::xenolith::core::Attachment> (stappler::xenolith::core::Queue::AttachmentBuilder &)> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView
* Callback<Rc<stappler::xenolith::core::Attachment> (stappler::xenolith::core::Queue::AttachmentBuilder &)> const&

Возвращает:
* stappler::xenolith::core::Queue::AttachmentData const*

# ::stappler::xenolith::core::Builder::addPass(stappler::StringView,stappler::xenolith::core::PassType,stappler::xenolith::core::RenderOrdering,Callback<Rc<stappler::xenolith::core::QueuePass> (stappler::xenolith::core::QueuePassBuilder &)> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView
* stappler::xenolith::core::PassType
* stappler::xenolith::core::RenderOrdering
* Callback<Rc<stappler::xenolith::core::QueuePass> (stappler::xenolith::core::QueuePassBuilder &)> const&

Возвращает:
* stappler::xenolith::core::QueuePassData const*

# ::stappler::xenolith::core::Builder::addProgram(stappler::StringView,SpanView<uint32_t>,stappler::xenolith::core::ProgramInfo const*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView
* SpanView<uint32_t>
* stappler::xenolith::core::ProgramInfo const*

Возвращает:
* stappler::xenolith::core::ProgramData const*

# ::stappler::xenolith::core::Builder::addProgramByRef(stappler::StringView,SpanView<uint32_t>,stappler::xenolith::core::ProgramInfo const*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView
* SpanView<uint32_t>
* stappler::xenolith::core::ProgramInfo const*

Возвращает:
* stappler::xenolith::core::ProgramData const*

# ::stappler::xenolith::core::Builder::addProgram(stappler::StringView,memory::function<void (const ProgramData::DataCallback &)> const&,stappler::xenolith::core::ProgramInfo const*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView
* memory::function<void (const ProgramData::DataCallback &)> const&
* stappler::xenolith::core::ProgramInfo const*

Возвращает:
* stappler::xenolith::core::ProgramData const*

# ::stappler::xenolith::core::Builder::setInternalResource(Rc<stappler::xenolith::core::Resource>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Rc<stappler::xenolith::core::Resource>&&


# ::stappler::xenolith::core::Builder::addLinkedResource(Rc<stappler::xenolith::core::Resource> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Rc<stappler::xenolith::core::Resource> const&


# ::stappler::xenolith::core::Builder::setBeginCallback(Function<void (stappler::xenolith::core::Queue::FrameRequest &)>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Function<void (stappler::xenolith::core::Queue::FrameRequest &)>&&


# ::stappler::xenolith::core::Builder::setEndCallback(Function<void (stappler::xenolith::core::Queue::FrameRequest &)>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Function<void (stappler::xenolith::core::Queue::FrameRequest &)>&&


# ::stappler::xenolith::core::Builder::getPool() const

## BRIEF

## CONTENT

Доступ: protected

Возвращает:
* memory::pool_t*

# ::stappler::xenolith::core::Builder::getPassData(Rc<stappler::xenolith::core::QueuePass> const&) const

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* Rc<stappler::xenolith::core::QueuePass> const&

Возвращает:
* stappler::xenolith::core::QueuePassData const*

# ::stappler::xenolith::core::Builder::getSubpassData(Rc<stappler::xenolith::core::QueuePass> const&,uint32_t) const

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* Rc<stappler::xenolith::core::QueuePass> const&
* uint32_t

Возвращает:
* stappler::xenolith::core::SubpassData const*

# ::stappler::xenolith::core::Builder::_data

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::core::QueueData*


# ::stappler::xenolith::core::Queue::getInputAttachment<typename>() const

## BRIEF

## CONTENT

Параметры шаблона:
* typename T

Возвращает:
* T const*

# ::stappler::xenolith::core::Queue::getOutputAttachment<typename>() const

## BRIEF

## CONTENT

Параметры шаблона:
* typename T

Возвращает:
* T const*