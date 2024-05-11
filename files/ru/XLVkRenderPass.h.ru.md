Title: XLVkRenderPass.h


# XENOLITH_BACKEND_VK_XLVKRENDERPASSIMPL_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::vk::DescriptorData

## BRIEF

## CONTENT


# ::stappler::xenolith::vk::DescriptorData::object

## BRIEF

## CONTENT

Тип: core::ObjectHandle


# ::stappler::xenolith::vk::DescriptorData::data

## BRIEF

## CONTENT

Тип: Rc<stappler::mem_std::Ref>


# ::stappler::xenolith::vk::DescriptorBinding

## BRIEF

## CONTENT


# ::stappler::xenolith::vk::DescriptorBinding::type

## BRIEF

## CONTENT

Тип: VkDescriptorType


# ::stappler::xenolith::vk::DescriptorBinding::data

## BRIEF

## CONTENT

Тип: Vector<stappler::xenolith::vk::DescriptorData>


# ::stappler::xenolith::vk::DescriptorBinding::~DescriptorBinding()

## BRIEF

## CONTENT


# ::stappler::xenolith::vk::DescriptorBinding::DescriptorBinding(VkDescriptorType,uint32_t)

## BRIEF

## CONTENT

Параметры:
* VkDescriptorType
* uint32_t


# ::stappler::xenolith::vk::DescriptorBinding::write(uint32_t,stappler::xenolith::vk::DescriptorBufferInfo&&)

## BRIEF

## CONTENT

Параметры:
* uint32_t
* stappler::xenolith::vk::DescriptorBufferInfo&&

Возвращает:
* Rc<stappler::mem_std::Ref>

# ::stappler::xenolith::vk::DescriptorBinding::write(uint32_t,stappler::xenolith::vk::DescriptorImageInfo&&)

## BRIEF

## CONTENT

Параметры:
* uint32_t
* stappler::xenolith::vk::DescriptorImageInfo&&

Возвращает:
* Rc<stappler::mem_std::Ref>

# ::stappler::xenolith::vk::DescriptorBinding::write(uint32_t,stappler::xenolith::vk::DescriptorBufferViewInfo&&)

## BRIEF

## CONTENT

Параметры:
* uint32_t
* stappler::xenolith::vk::DescriptorBufferViewInfo&&

Возвращает:
* Rc<stappler::mem_std::Ref>

# ::stappler::xenolith::vk::DescriptorSet

## BRIEF

## CONTENT

Базовые классы:
* Ref


# ::stappler::xenolith::vk::DescriptorSet::set

## BRIEF

## CONTENT

Тип: VkDescriptorSet


# ::stappler::xenolith::vk::DescriptorSet::bindings

## BRIEF

## CONTENT

Тип: Vector<stappler::xenolith::vk::DescriptorBinding>


# ::stappler::xenolith::vk::Framebuffer

## BRIEF

## CONTENT

Базовые классы:
* core::Framebuffer


# ::stappler::xenolith::vk::Framebuffer::~Framebuffer()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::vk::Framebuffer::init(stappler::xenolith::vk::Device&,stappler::xenolith::vk::RenderPass*,SpanView<Rc<core::ImageView>>)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::vk::Device&
* stappler::xenolith::vk::RenderPass*
* SpanView<Rc<core::ImageView>>

Возвращает:
* bool

# ::stappler::xenolith::vk::Framebuffer::getFramebuffer() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* VkFramebuffer

# ::stappler::xenolith::vk::Framebuffer::_framebuffer

## BRIEF

## CONTENT

Доступ: protected

Тип: VkFramebuffer


# ::stappler::xenolith::vk::RenderPass

## BRIEF

## CONTENT

Базовые классы:
* core::RenderPass


# ::stappler::xenolith::vk::RenderPass::LayoutData

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::vk::RenderPass::LayoutData::layout

## BRIEF

## CONTENT

Тип: VkPipelineLayout


# ::stappler::xenolith::vk::RenderPass::LayoutData::descriptorPool

## BRIEF

## CONTENT

Тип: VkDescriptorPool


# ::stappler::xenolith::vk::RenderPass::LayoutData::layouts

## BRIEF

## CONTENT

Тип: Vector<VkDescriptorSetLayout>


# ::stappler::xenolith::vk::RenderPass::LayoutData::sets

## BRIEF

## CONTENT

Тип: Vector<Rc<stappler::xenolith::vk::DescriptorSet>>


# ::stappler::xenolith::vk::RenderPass::Data

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::vk::RenderPass::Data::renderPass

## BRIEF

## CONTENT

Тип: VkRenderPass


# ::stappler::xenolith::vk::RenderPass::Data::renderPassAlternative

## BRIEF

## CONTENT

Тип: VkRenderPass


# ::stappler::xenolith::vk::RenderPass::Data::layouts

## BRIEF

## CONTENT

Тип: Vector<stappler::xenolith::vk::RenderPass::LayoutData>


# ::stappler::xenolith::vk::RenderPass::Data::cleanup(stappler::xenolith::vk::Device&)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::vk::Device&

Возвращает:
* bool

# ::stappler::xenolith::vk::RenderPass::~RenderPass()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::vk::RenderPass::init(stappler::xenolith::vk::Device&,stappler::xenolith::core::RenderPass::QueuePassData&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::vk::Device&
* stappler::xenolith::core::RenderPass::QueuePassData&

Возвращает:
* bool

# ::stappler::xenolith::vk::RenderPass::getRenderPass(bool) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* bool

Возвращает:
* VkRenderPass

# ::stappler::xenolith::vk::RenderPass::getPipelineLayout(uint32_t) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint32_t

Возвращает:
* VkPipelineLayout

# ::stappler::xenolith::vk::RenderPass::getDescriptorSets(uint32_t) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint32_t

Возвращает:
* Vector<Rc<stappler::xenolith::vk::DescriptorSet>> const&

# ::stappler::xenolith::vk::RenderPass::getClearValues() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Vector<VkClearValue> const&

# ::stappler::xenolith::vk::RenderPass::writeDescriptors(stappler::xenolith::vk::QueuePassHandle const&,uint32_t,bool) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::vk::QueuePassHandle const&
* uint32_t
* bool

Возвращает:
* bool

# ::stappler::xenolith::vk::RenderPass::perform(stappler::xenolith::vk::QueuePassHandle const&,stappler::xenolith::vk::CommandBuffer&,Callback<void ()> const&,bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::vk::QueuePassHandle const&
* stappler::xenolith::vk::CommandBuffer&
* Callback<void ()> const&
* bool


# ::stappler::xenolith::vk::RenderPass::initGraphicsPass(stappler::xenolith::vk::Device&,stappler::xenolith::core::RenderPass::QueuePassData&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::vk::Device&
* stappler::xenolith::core::RenderPass::QueuePassData&

Возвращает:
* bool

# ::stappler::xenolith::vk::RenderPass::initComputePass(stappler::xenolith::vk::Device&,stappler::xenolith::core::RenderPass::QueuePassData&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::vk::Device&
* stappler::xenolith::core::RenderPass::QueuePassData&

Возвращает:
* bool

# ::stappler::xenolith::vk::RenderPass::initTransferPass(stappler::xenolith::vk::Device&,stappler::xenolith::core::RenderPass::QueuePassData&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::vk::Device&
* stappler::xenolith::core::RenderPass::QueuePassData&

Возвращает:
* bool

# ::stappler::xenolith::vk::RenderPass::initGenericPass(stappler::xenolith::vk::Device&,stappler::xenolith::core::RenderPass::QueuePassData&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::vk::Device&
* stappler::xenolith::core::RenderPass::QueuePassData&

Возвращает:
* bool

# ::stappler::xenolith::vk::RenderPass::initDescriptors(stappler::xenolith::vk::Device&,stappler::xenolith::core::RenderPass::QueuePassData const&,stappler::xenolith::vk::RenderPass::Data&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::vk::Device&
* stappler::xenolith::core::RenderPass::QueuePassData const&
* stappler::xenolith::vk::RenderPass::Data&

Возвращает:
* bool

# ::stappler::xenolith::vk::RenderPass::initDescriptors(stappler::xenolith::vk::Device&,core::PipelineLayoutData const&,stappler::xenolith::vk::RenderPass::Data&,stappler::xenolith::vk::RenderPass::LayoutData&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::vk::Device&
* core::PipelineLayoutData const&
* stappler::xenolith::vk::RenderPass::Data&
* stappler::xenolith::vk::RenderPass::LayoutData&

Возвращает:
* bool

# ::stappler::xenolith::vk::RenderPass::_attachmentDescriptions

## BRIEF

## CONTENT

Доступ: protected

Тип: Vector<VkAttachmentDescription>


# ::stappler::xenolith::vk::RenderPass::_attachmentDescriptionsAlternative

## BRIEF

## CONTENT

Доступ: protected

Тип: Vector<VkAttachmentDescription>


# ::stappler::xenolith::vk::RenderPass::_attachmentReferences

## BRIEF

## CONTENT

Доступ: protected

Тип: Vector<VkAttachmentReference>


# ::stappler::xenolith::vk::RenderPass::_preservedAttachments

## BRIEF

## CONTENT

Доступ: protected

Тип: Vector<uint32_t>


# ::stappler::xenolith::vk::RenderPass::_subpassDependencies

## BRIEF

## CONTENT

Доступ: protected

Тип: Vector<VkSubpassDependency>


# ::stappler::xenolith::vk::RenderPass::_subpasses

## BRIEF

## CONTENT

Доступ: protected

Тип: Vector<VkSubpassDescription>


# ::stappler::xenolith::vk::RenderPass::_variableAttachments

## BRIEF

## CONTENT

Доступ: protected

Тип: Set<const core::AttachmentPassData *>


# ::stappler::xenolith::vk::RenderPass::_data

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::vk::RenderPass::Data*


# ::stappler::xenolith::vk::RenderPass::_clearValues

## BRIEF

## CONTENT

Доступ: protected

Тип: Vector<VkClearValue>
