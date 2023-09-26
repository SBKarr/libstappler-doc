Title: XLCoreQueueData.h


# XENOLITH_CORE_XLCOREQUEUEDATA_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::core::ProgramDescriptorBinding

## BRIEF

## CONTENT


# ::stappler::xenolith::core::ProgramDescriptorBinding::set

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::xenolith::core::ProgramDescriptorBinding::descriptor

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::xenolith::core::ProgramDescriptorBinding::type

## BRIEF

## CONTENT

Тип: stappler::xenolith::core::DescriptorType


# ::stappler::xenolith::core::ProgramDescriptorBinding::count

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::xenolith::core::ProgramPushConstantBlock

## BRIEF

## CONTENT


# ::stappler::xenolith::core::ProgramPushConstantBlock::offset

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::xenolith::core::ProgramPushConstantBlock::size

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::xenolith::core::ProgramEntryPointBlock

## BRIEF

## CONTENT


# ::stappler::xenolith::core::ProgramEntryPointBlock::id

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::xenolith::core::ProgramEntryPointBlock::name

## BRIEF

## CONTENT

Тип: memory::string


# ::stappler::xenolith::core::ProgramEntryPointBlock::localX

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::xenolith::core::ProgramEntryPointBlock::localY

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::xenolith::core::ProgramEntryPointBlock::localZ

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::xenolith::core::ProgramInfo

## BRIEF

## CONTENT

Базовые классы:
* NamedMem


# ::stappler::xenolith::core::ProgramInfo::stage

## BRIEF

## CONTENT

Тип: stappler::xenolith::core::ProgramStage


# ::stappler::xenolith::core::ProgramInfo::bindings

## BRIEF

## CONTENT

Тип: memory::vector<ProgramDescriptorBinding>


# ::stappler::xenolith::core::ProgramInfo::constants

## BRIEF

## CONTENT

Тип: memory::vector<ProgramPushConstantBlock>


# ::stappler::xenolith::core::ProgramInfo::entryPoints

## BRIEF

## CONTENT

Тип: memory::vector<ProgramEntryPointBlock>


# ::stappler::xenolith::core::ProgramData

## BRIEF

## CONTENT

Базовые классы:
* ProgramInfo


# ::stappler::xenolith::core::ProgramData::DataCallback

## BRIEF

## CONTENT


# ::stappler::xenolith::core::ProgramData::data

## BRIEF

## CONTENT

Тип: SpanView<uint32_t>


# ::stappler::xenolith::core::ProgramData::callback

## BRIEF

## CONTENT

Тип: memory::function<void (const DataCallback &)>


# ::stappler::xenolith::core::ProgramData::program

## BRIEF

## CONTENT

Тип: Rc<stappler::xenolith::core::Shader>


# ::stappler::xenolith::core::ProgramData::inspect(SpanView<uint32_t>)

## BRIEF

## CONTENT

Параметры:
* SpanView<uint32_t>


# ::stappler::xenolith::core::SpecializationInfo

## BRIEF

## CONTENT


# ::stappler::xenolith::core::SpecializationInfo::data

## BRIEF

## CONTENT

Тип: stappler::xenolith::core::ProgramData const*


# ::stappler::xenolith::core::SpecializationInfo::constants

## BRIEF

## CONTENT

Тип: memory::vector<PredefinedConstant>


# ::stappler::xenolith::core::SpecializationInfo::SpecializationInfo()

## BRIEF

## CONTENT


# ::stappler::xenolith::core::SpecializationInfo::SpecializationInfo(stappler::xenolith::core::ProgramData const*)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::core::ProgramData const*


# ::stappler::xenolith::core::SpecializationInfo::SpecializationInfo(stappler::xenolith::core::ProgramData const*,SpanView<stappler::xenolith::core::PredefinedConstant>)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::core::ProgramData const*
* SpanView<stappler::xenolith::core::PredefinedConstant>


# ::stappler::xenolith::core::GraphicPipelineInfo

## BRIEF

## CONTENT

Базовые классы:
* NamedMem


# ::stappler::xenolith::core::GraphicPipelineInfo::shaders

## BRIEF

## CONTENT

Тип: memory::vector<SpecializationInfo>


# ::stappler::xenolith::core::GraphicPipelineInfo::dynamicState

## BRIEF

## CONTENT

Тип: stappler::xenolith::core::DynamicState


# ::stappler::xenolith::core::GraphicPipelineInfo::material

## BRIEF

## CONTENT

Тип: stappler::xenolith::core::PipelineMaterialInfo


# ::stappler::xenolith::core::GraphicPipelineInfo::isSolid() const

## BRIEF

## CONTENT

Возвращает:
* bool

# ::stappler::xenolith::core::GraphicPipelineData

## BRIEF

## CONTENT

Базовые классы:
* GraphicPipelineInfo


# ::stappler::xenolith::core::GraphicPipelineData::subpass

## BRIEF

## CONTENT

Тип: stappler::xenolith::core::SubpassData const*


# ::stappler::xenolith::core::GraphicPipelineData::layout

## BRIEF

## CONTENT

Тип: stappler::xenolith::core::PipelineLayoutData const*


# ::stappler::xenolith::core::GraphicPipelineData::pipeline

## BRIEF

## CONTENT

Тип: Rc<stappler::xenolith::core::GraphicPipeline>


# ::stappler::xenolith::core::ComputePipelineInfo

## BRIEF

## CONTENT

Базовые классы:
* NamedMem


# ::stappler::xenolith::core::ComputePipelineInfo::shader

## BRIEF

## CONTENT

Тип: stappler::xenolith::core::SpecializationInfo


# ::stappler::xenolith::core::ComputePipelineData

## BRIEF

## CONTENT

Базовые классы:
* ComputePipelineInfo


# ::stappler::xenolith::core::ComputePipelineData::subpass

## BRIEF

## CONTENT

Тип: stappler::xenolith::core::SubpassData const*


# ::stappler::xenolith::core::ComputePipelineData::layout

## BRIEF

## CONTENT

Тип: stappler::xenolith::core::PipelineLayoutData const*


# ::stappler::xenolith::core::ComputePipelineData::pipeline

## BRIEF

## CONTENT

Тип: Rc<stappler::xenolith::core::ComputePipeline>


# ::stappler::xenolith::core::PipelineDescriptor

## BRIEF

## CONTENT

Базовые классы:
* NamedMem


# ::stappler::xenolith::core::PipelineDescriptor::set

## BRIEF

## CONTENT

Тип: stappler::xenolith::core::DescriptorSetData const*


# ::stappler::xenolith::core::PipelineDescriptor::attachment

## BRIEF

## CONTENT

Тип: stappler::xenolith::core::AttachmentPassData const*


# ::stappler::xenolith::core::PipelineDescriptor::type

## BRIEF

## CONTENT

Тип: stappler::xenolith::core::DescriptorType


# ::stappler::xenolith::core::PipelineDescriptor::stages

## BRIEF

## CONTENT

Тип: stappler::xenolith::core::ProgramStage


# ::stappler::xenolith::core::PipelineDescriptor::layout

## BRIEF

## CONTENT

Тип: stappler::xenolith::core::AttachmentLayout


# ::stappler::xenolith::core::PipelineDescriptor::count

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::xenolith::core::PipelineDescriptor::index

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::xenolith::core::PipelineDescriptor::updateAfterBind

## BRIEF

## CONTENT

Тип: bool


# ::stappler::xenolith::core::PipelineDescriptor::boundGeneration

## BRIEF

## CONTENT

Тип: uint64_t


# ::stappler::xenolith::core::SubpassDependency

## BRIEF

## CONTENT


# ::stappler::xenolith::core::SubpassDependency::External

## BRIEF

## CONTENT

Тип: uint32_t const


# ::stappler::xenolith::core::SubpassDependency::srcSubpass

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::xenolith::core::SubpassDependency::srcStage

## BRIEF

## CONTENT

Тип: stappler::xenolith::core::PipelineStage


# ::stappler::xenolith::core::SubpassDependency::srcAccess

## BRIEF

## CONTENT

Тип: stappler::xenolith::core::AccessType


# ::stappler::xenolith::core::SubpassDependency::dstSubpass

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::xenolith::core::SubpassDependency::dstStage

## BRIEF

## CONTENT

Тип: stappler::xenolith::core::PipelineStage


# ::stappler::xenolith::core::SubpassDependency::dstAccess

## BRIEF

## CONTENT

Тип: stappler::xenolith::core::AccessType


# ::stappler::xenolith::core::SubpassDependency::byRegion

## BRIEF

## CONTENT

Тип: bool


# ::stappler::xenolith::core::SubpassDependency::value() const

## BRIEF

## CONTENT

Возвращает:
* uint64_t

# ::stappler::xenolith::core::operator<(stappler::xenolith::core::SubpassDependency const&,stappler::xenolith::core::SubpassDependency const&)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::core::SubpassDependency const&
* stappler::xenolith::core::SubpassDependency const&

Возвращает:
* bool

# ::stappler::xenolith::core::operator==(stappler::xenolith::core::SubpassDependency const&,stappler::xenolith::core::SubpassDependency const&)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::core::SubpassDependency const&
* stappler::xenolith::core::SubpassDependency const&

Возвращает:
* bool

# ::stappler::xenolith::core::operator!=(stappler::xenolith::core::SubpassDependency const&,stappler::xenolith::core::SubpassDependency const&)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::core::SubpassDependency const&
* stappler::xenolith::core::SubpassDependency const&

Возвращает:
* bool

# ::stappler::xenolith::core::AttachmentDependencyInfo

## BRIEF

## CONTENT


# ::stappler::xenolith::core::AttachmentDependencyInfo::initialUsageStage

## BRIEF

## CONTENT

Тип: stappler::xenolith::core::PipelineStage


# ::stappler::xenolith::core::AttachmentDependencyInfo::initialAccessMask

## BRIEF

## CONTENT

Тип: stappler::xenolith::core::AccessType


# ::stappler::xenolith::core::AttachmentDependencyInfo::finalUsageStage

## BRIEF

## CONTENT

Тип: stappler::xenolith::core::PipelineStage


# ::stappler::xenolith::core::AttachmentDependencyInfo::finalAccessMask

## BRIEF

## CONTENT

Тип: stappler::xenolith::core::AccessType


# ::stappler::xenolith::core::AttachmentDependencyInfo::requiredRenderPassState

## BRIEF

## CONTENT

Тип: stappler::xenolith::core::FrameRenderPassState


# ::stappler::xenolith::core::AttachmentDependencyInfo::lockedRenderPassState

## BRIEF

## CONTENT

Тип: stappler::xenolith::core::FrameRenderPassState


# ::stappler::xenolith::core::AttachmentSubpassData

## BRIEF

## CONTENT

Базовые классы:
* NamedMem


# ::stappler::xenolith::core::AttachmentSubpassData::pass

## BRIEF

## CONTENT

Тип: stappler::xenolith::core::AttachmentPassData const*


# ::stappler::xenolith::core::AttachmentSubpassData::subpass

## BRIEF

## CONTENT

Тип: stappler::xenolith::core::SubpassData const*


# ::stappler::xenolith::core::AttachmentSubpassData::layout

## BRIEF

## CONTENT

Тип: stappler::xenolith::core::AttachmentLayout


# ::stappler::xenolith::core::AttachmentSubpassData::usage

## BRIEF

## CONTENT

Тип: stappler::xenolith::core::AttachmentUsage


# ::stappler::xenolith::core::AttachmentSubpassData::ops

## BRIEF

## CONTENT

Тип: stappler::xenolith::core::AttachmentOps


# ::stappler::xenolith::core::AttachmentSubpassData::dependency

## BRIEF

## CONTENT

Тип: stappler::xenolith::core::AttachmentDependencyInfo


# ::stappler::xenolith::core::AttachmentPassData

## BRIEF

## CONTENT

Базовые классы:
* NamedMem


# ::stappler::xenolith::core::AttachmentPassData::attachment

## BRIEF

## CONTENT

Тип: stappler::xenolith::core::AttachmentData const*


# ::stappler::xenolith::core::AttachmentPassData::pass

## BRIEF

## CONTENT

Тип: stappler::xenolith::core::QueuePassData const*


# ::stappler::xenolith::core::AttachmentPassData::index

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::xenolith::core::AttachmentPassData::ops

## BRIEF

## CONTENT

Тип: stappler::xenolith::core::AttachmentOps


# ::stappler::xenolith::core::AttachmentPassData::initialLayout

## BRIEF

## CONTENT

Тип: stappler::xenolith::core::AttachmentLayout


# ::stappler::xenolith::core::AttachmentPassData::finalLayout

## BRIEF

## CONTENT

Тип: stappler::xenolith::core::AttachmentLayout


# ::stappler::xenolith::core::AttachmentPassData::loadOp

## BRIEF

## CONTENT

Тип: stappler::xenolith::core::AttachmentLoadOp


# ::stappler::xenolith::core::AttachmentPassData::storeOp

## BRIEF

## CONTENT

Тип: stappler::xenolith::core::AttachmentStoreOp


# ::stappler::xenolith::core::AttachmentPassData::stencilLoadOp

## BRIEF

## CONTENT

Тип: stappler::xenolith::core::AttachmentLoadOp


# ::stappler::xenolith::core::AttachmentPassData::stencilStoreOp

## BRIEF

## CONTENT

Тип: stappler::xenolith::core::AttachmentStoreOp


# ::stappler::xenolith::core::AttachmentPassData::colorMode

## BRIEF

## CONTENT

Тип: stappler::xenolith::core::ColorMode


# ::stappler::xenolith::core::AttachmentPassData::dependency

## BRIEF

## CONTENT

Тип: stappler::xenolith::core::AttachmentDependencyInfo


# ::stappler::xenolith::core::AttachmentPassData::descriptors

## BRIEF

## CONTENT

Тип: memory::vector<PipelineDescriptor *>


# ::stappler::xenolith::core::AttachmentPassData::subpasses

## BRIEF

## CONTENT

Тип: memory::vector<AttachmentSubpassData *>


# ::stappler::xenolith::core::AttachmentData

## BRIEF

## CONTENT

Базовые классы:
* NamedMem


# ::stappler::xenolith::core::AttachmentData::queue

## BRIEF

## CONTENT

Тип: stappler::xenolith::core::QueueData const*


# ::stappler::xenolith::core::AttachmentData::id

## BRIEF

## CONTENT

Тип: uint64_t


# ::stappler::xenolith::core::AttachmentData::ops

## BRIEF

## CONTENT

Тип: stappler::xenolith::core::AttachmentOps


# ::stappler::xenolith::core::AttachmentData::type

## BRIEF

## CONTENT

Тип: stappler::xenolith::core::AttachmentType


# ::stappler::xenolith::core::AttachmentData::usage

## BRIEF

## CONTENT

Тип: stappler::xenolith::core::AttachmentUsage


# ::stappler::xenolith::core::AttachmentData::passes

## BRIEF

## CONTENT

Тип: memory::vector<AttachmentPassData *>


# ::stappler::xenolith::core::AttachmentData::attachment

## BRIEF

## CONTENT

Тип: Rc<stappler::xenolith::core::Attachment>


# ::stappler::xenolith::core::AttachmentData::transient

## BRIEF

## CONTENT

Тип: bool


# ::stappler::xenolith::core::DescriptorSetData

## BRIEF

## CONTENT

Базовые классы:
* NamedMem


# ::stappler::xenolith::core::DescriptorSetData::layout

## BRIEF

## CONTENT

Тип: stappler::xenolith::core::PipelineLayoutData const*


# ::stappler::xenolith::core::DescriptorSetData::index

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::xenolith::core::DescriptorSetData::descriptors

## BRIEF

## CONTENT

Тип: memory::vector<PipelineDescriptor *>


# ::stappler::xenolith::core::PipelineLayoutData

## BRIEF

## CONTENT

Базовые классы:
* NamedMem


# ::stappler::xenolith::core::PipelineLayoutData::pass

## BRIEF

## CONTENT

Тип: stappler::xenolith::core::QueuePassData const*


# ::stappler::xenolith::core::PipelineLayoutData::index

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::xenolith::core::PipelineLayoutData::usesTextureSet

## BRIEF

## CONTENT

Тип: bool


# ::stappler::xenolith::core::PipelineLayoutData::sets

## BRIEF

## CONTENT

Тип: memory::vector<DescriptorSetData *>


# ::stappler::xenolith::core::PipelineLayoutData::graphicPipelines

## BRIEF

## CONTENT

Тип: memory::vector<const GraphicPipelineData *>


# ::stappler::xenolith::core::PipelineLayoutData::computePipelines

## BRIEF

## CONTENT

Тип: memory::vector<const ComputePipelineData *>


# ::stappler::xenolith::core::SubpassData

## BRIEF

## CONTENT

Базовые классы:
* NamedMem


# ::stappler::xenolith::core::SubpassData::SubpassData()

## BRIEF

## CONTENT


# ::stappler::xenolith::core::SubpassData::SubpassData(stappler::xenolith::core::SubpassData const&)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::core::SubpassData const&


# ::stappler::xenolith::core::SubpassData::SubpassData(stappler::xenolith::core::SubpassData&&)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::core::SubpassData&&


# ::stappler::xenolith::core::SubpassData::operator=(stappler::xenolith::core::SubpassData const&)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::core::SubpassData const&

Возвращает:
* stappler::xenolith::core::SubpassData&

# ::stappler::xenolith::core::SubpassData::operator=(stappler::xenolith::core::SubpassData&&)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::core::SubpassData&&

Возвращает:
* stappler::xenolith::core::SubpassData&

# ::stappler::xenolith::core::SubpassData::pass

## BRIEF

## CONTENT

Тип: stappler::xenolith::core::QueuePassData const*


# ::stappler::xenolith::core::SubpassData::index

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::xenolith::core::SubpassData::graphicPipelines

## BRIEF

## CONTENT

Тип: HashTable<stappler::xenolith::core::GraphicPipelineData *>


# ::stappler::xenolith::core::SubpassData::computePipelines

## BRIEF

## CONTENT

Тип: HashTable<stappler::xenolith::core::ComputePipelineData *>


# ::stappler::xenolith::core::SubpassData::inputImages

## BRIEF

## CONTENT

Тип: memory::vector<const AttachmentSubpassData *>


# ::stappler::xenolith::core::SubpassData::outputImages

## BRIEF

## CONTENT

Тип: memory::vector<const AttachmentSubpassData *>


# ::stappler::xenolith::core::SubpassData::resolveImages

## BRIEF

## CONTENT

Тип: memory::vector<const AttachmentSubpassData *>


# ::stappler::xenolith::core::SubpassData::depthStencil

## BRIEF

## CONTENT

Тип: stappler::xenolith::core::AttachmentSubpassData const*


# ::stappler::xenolith::core::SubpassData::preserve

## BRIEF

## CONTENT

Тип: memory::vector<uint32_t>


# ::stappler::xenolith::core::RenderOrdering

## BRIEF

## CONTENT


# ::stappler::xenolith::core::RenderOrderingLowest

## BRIEF

## CONTENT

Тип: RenderOrdering


# ::stappler::xenolith::core::RenderOrderingHighest

## BRIEF

## CONTENT

Тип: RenderOrdering


# ::stappler::xenolith::core::QueuePassData

## BRIEF

## CONTENT

Базовые классы:
* NamedMem


# ::stappler::xenolith::core::QueuePassData::QueuePassData()

## BRIEF

## CONTENT


# ::stappler::xenolith::core::QueuePassData::QueuePassData(stappler::xenolith::core::QueuePassData const&)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::core::QueuePassData const&


# ::stappler::xenolith::core::QueuePassData::QueuePassData(stappler::xenolith::core::QueuePassData&&)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::core::QueuePassData&&


# ::stappler::xenolith::core::QueuePassData::operator=(stappler::xenolith::core::QueuePassData const&)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::core::QueuePassData const&

Возвращает:
* stappler::xenolith::core::QueuePassData&

# ::stappler::xenolith::core::QueuePassData::operator=(stappler::xenolith::core::QueuePassData&&)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::core::QueuePassData&&

Возвращает:
* stappler::xenolith::core::QueuePassData&

# ::stappler::xenolith::core::QueuePassData::queue

## BRIEF

## CONTENT

Тип: stappler::xenolith::core::QueueData const*


# ::stappler::xenolith::core::QueuePassData::attachments

## BRIEF

## CONTENT

Тип: memory::vector<const AttachmentPassData *>


# ::stappler::xenolith::core::QueuePassData::subpasses

## BRIEF

## CONTENT

Тип: memory::vector<const SubpassData *>


# ::stappler::xenolith::core::QueuePassData::pipelineLayouts

## BRIEF

## CONTENT

Тип: memory::vector<const PipelineLayoutData *>


# ::stappler::xenolith::core::QueuePassData::dependencies

## BRIEF

## CONTENT

Тип: memory::vector<SubpassDependency>


# ::stappler::xenolith::core::QueuePassData::type

## BRIEF

## CONTENT

Тип: stappler::xenolith::core::PassType


# ::stappler::xenolith::core::QueuePassData::ordering

## BRIEF

## CONTENT

Тип: stappler::xenolith::core::RenderOrdering


# ::stappler::xenolith::core::QueuePassData::hasUpdateAfterBind

## BRIEF

## CONTENT

Тип: bool


# ::stappler::xenolith::core::QueuePassData::pass

## BRIEF

## CONTENT

Тип: Rc<stappler::xenolith::core::QueuePass>


# ::stappler::xenolith::core::QueuePassData::impl

## BRIEF

## CONTENT

Тип: Rc<stappler::xenolith::core::RenderPass>


# ::stappler::xenolith::core::QueueData

## BRIEF

## CONTENT

Базовые классы:
* NamedMem


# ::stappler::xenolith::core::QueueData::pool

## BRIEF

## CONTENT

Тип: memory::pool_t*


# ::stappler::xenolith::core::QueueData::input

## BRIEF

## CONTENT

Тип: memory::vector<AttachmentData *>


# ::stappler::xenolith::core::QueueData::output

## BRIEF

## CONTENT

Тип: memory::vector<AttachmentData *>


# ::stappler::xenolith::core::QueueData::attachments

## BRIEF

## CONTENT

Тип: HashTable<stappler::xenolith::core::AttachmentData *>


# ::stappler::xenolith::core::QueueData::passes

## BRIEF

## CONTENT

Тип: HashTable<stappler::xenolith::core::QueuePassData *>


# ::stappler::xenolith::core::QueueData::programs

## BRIEF

## CONTENT

Тип: HashTable<stappler::xenolith::core::ProgramData *>


# ::stappler::xenolith::core::QueueData::graphicPipelines

## BRIEF

## CONTENT

Тип: HashTable<stappler::xenolith::core::GraphicPipelineData *>


# ::stappler::xenolith::core::QueueData::computePipelines

## BRIEF

## CONTENT

Тип: HashTable<stappler::xenolith::core::ComputePipelineData *>


# ::stappler::xenolith::core::QueueData::linked

## BRIEF

## CONTENT

Тип: HashTable<Rc<stappler::xenolith::core::Resource>>


# ::stappler::xenolith::core::QueueData::beginCallback

## BRIEF

## CONTENT

Тип: Function<void (stappler::xenolith::core::FrameRequest &)>


# ::stappler::xenolith::core::QueueData::endCallback

## BRIEF

## CONTENT

Тип: Function<void (stappler::xenolith::core::FrameRequest &)>


# ::stappler::xenolith::core::QueueData::releaseCallback

## BRIEF

## CONTENT

Тип: Function<void ()>


# ::stappler::xenolith::core::QueueData::resource

## BRIEF

## CONTENT

Тип: Rc<stappler::xenolith::core::Resource>


# ::stappler::xenolith::core::QueueData::compiled

## BRIEF

## CONTENT

Тип: bool


# ::stappler::xenolith::core::QueueData::order

## BRIEF

## CONTENT

Тип: uint64_t


# ::stappler::xenolith::core::QueueData::queue

## BRIEF

## CONTENT

Тип: stappler::xenolith::core::Queue*


# ::stappler::xenolith::core::QueueData::typedInput

## BRIEF

## CONTENT

Тип: memory::map<std::type_index, Attachment *>


# ::stappler::xenolith::core::QueueData::typedOutput

## BRIEF

## CONTENT

Тип: memory::map<std::type_index, Attachment *>


# ::stappler::xenolith::core::QueueData::clear()

## BRIEF

## CONTENT


# ::stappler::xenolith::core::getDescriptorTypeName(stappler::xenolith::core::DescriptorType)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::core::DescriptorType

Возвращает:
* stappler::StringView

# ::stappler::xenolith::core::getProgramStageDescription(stappler::xenolith::core::ProgramStage)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::core::ProgramStage

Возвращает:
* stappler::mem_std::String