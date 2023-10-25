Title: XL2dVkShadowPass.h


# XENOLITH_RENDERER_BASIC2D_BACKEND_VK_XL2DVKSHADOWPASS_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::basic2d::vk::ShadowPass

## BRIEF

## CONTENT

Базовые классы:
* VertexPass


# ::stappler::xenolith::basic2d::vk::ShadowPass::ShadowPipeline

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::StringView const


# ::stappler::xenolith::basic2d::vk::ShadowPass::Flags

## BRIEF

## CONTENT

Доступ: public

Значения:
* None
* Render3D


# ::stappler::xenolith::basic2d::vk::ShadowPass::RenderQueueInfo

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::basic2d::vk::ShadowPass::RenderQueueInfo::target

## BRIEF

## CONTENT

Тип: stappler::xenolith::Application*


# ::stappler::xenolith::basic2d::vk::ShadowPass::RenderQueueInfo::extent

## BRIEF

## CONTENT

Тип: stappler::xenolith::Extent2


# ::stappler::xenolith::basic2d::vk::ShadowPass::RenderQueueInfo::flags

## BRIEF

## CONTENT

Тип: stappler::xenolith::basic2d::vk::ShadowPass::Flags


# ::stappler::xenolith::basic2d::vk::ShadowPass::RenderQueueInfo::resourceCallback

## BRIEF

## CONTENT

Тип: Function<void (core::Resource::Builder &)>


# ::stappler::xenolith::basic2d::vk::ShadowPass::PassCreateInfo

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::basic2d::vk::ShadowPass::PassCreateInfo::target

## BRIEF

## CONTENT

Тип: stappler::xenolith::Application*


# ::stappler::xenolith::basic2d::vk::ShadowPass::PassCreateInfo::extent

## BRIEF

## CONTENT

Тип: stappler::xenolith::Extent2


# ::stappler::xenolith::basic2d::vk::ShadowPass::PassCreateInfo::flags

## BRIEF

## CONTENT

Тип: stappler::xenolith::basic2d::vk::ShadowPass::Flags


# ::stappler::xenolith::basic2d::vk::ShadowPass::PassCreateInfo::shadowSdfAttachment

## BRIEF

## CONTENT

Тип: stappler::xenolith::core::QueuePass::AttachmentData const*


# ::stappler::xenolith::basic2d::vk::ShadowPass::PassCreateInfo::lightsAttachment

## BRIEF

## CONTENT

Тип: stappler::xenolith::core::QueuePass::AttachmentData const*


# ::stappler::xenolith::basic2d::vk::ShadowPass::PassCreateInfo::sdfPrimitivesAttachment

## BRIEF

## CONTENT

Тип: stappler::xenolith::core::QueuePass::AttachmentData const*


# ::stappler::xenolith::basic2d::vk::ShadowPass::makeDefaultRenderQueue(Queue::Builder&,stappler::xenolith::basic2d::vk::ShadowPass::RenderQueueInfo&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Queue::Builder&
* stappler::xenolith::basic2d::vk::ShadowPass::RenderQueueInfo&

Возвращает:
* bool

# ::stappler::xenolith::basic2d::vk::ShadowPass::~ShadowPass()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::basic2d::vk::ShadowPass::init(Queue::Builder&,stappler::xenolith::core::QueuePass::QueuePassBuilder&,stappler::xenolith::basic2d::vk::ShadowPass::PassCreateInfo const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Queue::Builder&
* stappler::xenolith::core::QueuePass::QueuePassBuilder&
* stappler::xenolith::basic2d::vk::ShadowPass::PassCreateInfo const&

Возвращает:
* bool

# ::stappler::xenolith::basic2d::vk::ShadowPass::getLightsData() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::core::QueuePass::AttachmentData const*

# ::stappler::xenolith::basic2d::vk::ShadowPass::getShadowPrimitives() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::core::QueuePass::AttachmentData const*

# ::stappler::xenolith::basic2d::vk::ShadowPass::getSdf() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::core::QueuePass::AttachmentData const*

# ::stappler::xenolith::basic2d::vk::ShadowPass::makeFrameHandle(stappler::xenolith::core::QueuePass::FrameQueue const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::QueuePass::FrameQueue const&

Возвращает:
* Rc<stappler::xenolith::core::QueuePass::QueuePassHandle>

# ::stappler::xenolith::basic2d::vk::ShadowPass::_flags

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::basic2d::vk::ShadowPass::Flags


# ::stappler::xenolith::basic2d::vk::ShadowPass::_lightsData

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::core::QueuePass::AttachmentData const*


# ::stappler::xenolith::basic2d::vk::ShadowPass::_shadowPrimitives

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::core::QueuePass::AttachmentData const*


# ::stappler::xenolith::basic2d::vk::ShadowPass::_sdf

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::core::QueuePass::AttachmentData const*


# ::stappler::xenolith::basic2d::vk::operator|(ShadowPass::Flags const&,ShadowPass::Flags const&)

## BRIEF

## CONTENT

Параметры:
* ShadowPass::Flags const&
* ShadowPass::Flags const&

Возвращает:
* ShadowPass::Flags

# ::stappler::xenolith::basic2d::vk::operator&(ShadowPass::Flags const&,ShadowPass::Flags const&)

## BRIEF

## CONTENT

Параметры:
* ShadowPass::Flags const&
* ShadowPass::Flags const&

Возвращает:
* ShadowPass::Flags

# ::stappler::xenolith::basic2d::vk::operator^(ShadowPass::Flags const&,ShadowPass::Flags const&)

## BRIEF

## CONTENT

Параметры:
* ShadowPass::Flags const&
* ShadowPass::Flags const&

Возвращает:
* ShadowPass::Flags

# ::stappler::xenolith::basic2d::vk::operator|=(ShadowPass::Flags&,ShadowPass::Flags const&)

## BRIEF

## CONTENT

Параметры:
* ShadowPass::Flags&
* ShadowPass::Flags const&

Возвращает:
* ShadowPass::Flags&

# ::stappler::xenolith::basic2d::vk::operator&=(ShadowPass::Flags&,ShadowPass::Flags const&)

## BRIEF

## CONTENT

Параметры:
* ShadowPass::Flags&
* ShadowPass::Flags const&

Возвращает:
* ShadowPass::Flags&

# ::stappler::xenolith::basic2d::vk::operator^=(ShadowPass::Flags&,ShadowPass::Flags const&)

## BRIEF

## CONTENT

Параметры:
* ShadowPass::Flags&
* ShadowPass::Flags const&

Возвращает:
* ShadowPass::Flags&

# ::stappler::xenolith::basic2d::vk::operator==(ShadowPass::Flags const&,std::underlying_type<ShadowPass::Flags>::type const&)

## BRIEF

## CONTENT

Параметры:
* ShadowPass::Flags const&
* std::underlying_type<ShadowPass::Flags>::type const&

Возвращает:
* bool

# ::stappler::xenolith::basic2d::vk::operator==(std::underlying_type<ShadowPass::Flags>::type const&,ShadowPass::Flags const&)

## BRIEF

## CONTENT

Параметры:
* std::underlying_type<ShadowPass::Flags>::type const&
* ShadowPass::Flags const&

Возвращает:
* bool

# ::stappler::xenolith::basic2d::vk::operator!=(ShadowPass::Flags const&,std::underlying_type<ShadowPass::Flags>::type const&)

## BRIEF

## CONTENT

Параметры:
* ShadowPass::Flags const&
* std::underlying_type<ShadowPass::Flags>::type const&

Возвращает:
* bool

# ::stappler::xenolith::basic2d::vk::operator!=(std::underlying_type<ShadowPass::Flags>::type const&,ShadowPass::Flags const&)

## BRIEF

## CONTENT

Параметры:
* std::underlying_type<ShadowPass::Flags>::type const&
* ShadowPass::Flags const&

Возвращает:
* bool

# ::stappler::xenolith::basic2d::vk::operator~(ShadowPass::Flags const&)

## BRIEF

## CONTENT

Параметры:
* ShadowPass::Flags const&

Возвращает:
* ShadowPass::Flags

# ::stappler::xenolith::basic2d::vk::ShadowPassHandle

## BRIEF

## CONTENT

Базовые классы:
* VertexPassHandle


# ::stappler::xenolith::basic2d::vk::ShadowPassHandle::~ShadowPassHandle()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::basic2d::vk::ShadowPassHandle::prepare(stappler::xenolith::core::QueuePassHandle::FrameQueue&,Function<void (bool)>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::QueuePassHandle::FrameQueue&
* Function<void (bool)>&&

Возвращает:
* bool

# ::stappler::xenolith::basic2d::vk::ShadowPassHandle::prepareRenderPass(stappler::xenolith::vk::CommandBuffer&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::vk::CommandBuffer&


# ::stappler::xenolith::basic2d::vk::ShadowPassHandle::prepareMaterialCommands(core::MaterialSet*,stappler::xenolith::vk::CommandBuffer&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* core::MaterialSet*
* stappler::xenolith::vk::CommandBuffer&


# ::stappler::xenolith::basic2d::vk::ShadowPassHandle::_shadowData

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::basic2d::vk::ShadowLightDataAttachmentHandle const*


# ::stappler::xenolith::basic2d::vk::ShadowPassHandle::_shadowPrimitives

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::basic2d::vk::ShadowPrimitivesAttachmentHandle const*


# ::stappler::xenolith::basic2d::vk::ShadowPassHandle::_sdfImage

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::vk::ImageAttachmentHandle const*


# ::stappler::xenolith::basic2d::vk::ComputeShadowPass

## BRIEF

## CONTENT

Базовые классы:
* QueuePass


# ::stappler::xenolith::basic2d::vk::ComputeShadowPass::SdfTrianglesComp

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::StringView const


# ::stappler::xenolith::basic2d::vk::ComputeShadowPass::SdfCirclesComp

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::StringView const


# ::stappler::xenolith::basic2d::vk::ComputeShadowPass::SdfRectsComp

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::StringView const


# ::stappler::xenolith::basic2d::vk::ComputeShadowPass::SdfRoundedRectsComp

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::StringView const


# ::stappler::xenolith::basic2d::vk::ComputeShadowPass::SdfPolygonsComp

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::StringView const


# ::stappler::xenolith::basic2d::vk::ComputeShadowPass::SdfImageComp

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::StringView const


# ::stappler::xenolith::basic2d::vk::ComputeShadowPass::~ComputeShadowPass()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::basic2d::vk::ComputeShadowPass::init(Queue::Builder&,stappler::xenolith::core::QueuePass::QueuePassBuilder&,stappler::xenolith::Extent2)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Queue::Builder&
* stappler::xenolith::core::QueuePass::QueuePassBuilder&
* stappler::xenolith::Extent2

Возвращает:
* bool

# ::stappler::xenolith::basic2d::vk::ComputeShadowPass::getLights() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::core::QueuePass::AttachmentData const*

# ::stappler::xenolith::basic2d::vk::ComputeShadowPass::getVertexes() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::core::QueuePass::AttachmentData const*

# ::stappler::xenolith::basic2d::vk::ComputeShadowPass::getPrimitives() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::core::QueuePass::AttachmentData const*

# ::stappler::xenolith::basic2d::vk::ComputeShadowPass::getSdf() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::core::QueuePass::AttachmentData const*

# ::stappler::xenolith::basic2d::vk::ComputeShadowPass::makeFrameHandle(stappler::xenolith::core::QueuePass::FrameQueue const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::QueuePass::FrameQueue const&

Возвращает:
* Rc<stappler::xenolith::core::QueuePass::QueuePassHandle>

# ::stappler::xenolith::basic2d::vk::ComputeShadowPass::_lights

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::core::QueuePass::AttachmentData const*


# ::stappler::xenolith::basic2d::vk::ComputeShadowPass::_vertexes

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::core::QueuePass::AttachmentData const*


# ::stappler::xenolith::basic2d::vk::ComputeShadowPass::_primitives

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::core::QueuePass::AttachmentData const*


# ::stappler::xenolith::basic2d::vk::ComputeShadowPass::_sdf

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::core::QueuePass::AttachmentData const*


# ::stappler::xenolith::basic2d::vk::ComputeShadowPassHandle

## BRIEF

## CONTENT

Базовые классы:
* QueuePassHandle


# ::stappler::xenolith::basic2d::vk::ComputeShadowPassHandle::~ComputeShadowPassHandle()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::basic2d::vk::ComputeShadowPassHandle::prepare(stappler::xenolith::core::QueuePassHandle::FrameQueue&,Function<void (bool)>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::QueuePassHandle::FrameQueue&
* Function<void (bool)>&&

Возвращает:
* bool

# ::stappler::xenolith::basic2d::vk::ComputeShadowPassHandle::writeShadowCommands(stappler::xenolith::vk::RenderPass*,stappler::xenolith::vk::CommandBuffer&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::vk::RenderPass*
* stappler::xenolith::vk::CommandBuffer&


# ::stappler::xenolith::basic2d::vk::ComputeShadowPassHandle::doPrepareCommands(stappler::xenolith::core::QueuePassHandle::FrameHandle&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::core::QueuePassHandle::FrameHandle&

Возвращает:
* Vector<const stappler::xenolith::vk::CommandBuffer *>

# ::stappler::xenolith::basic2d::vk::ComputeShadowPassHandle::_lightsBuffer

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::basic2d::vk::ShadowLightDataAttachmentHandle const*


# ::stappler::xenolith::basic2d::vk::ComputeShadowPassHandle::_vertexBuffer

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::basic2d::vk::ShadowVertexAttachmentHandle const*


# ::stappler::xenolith::basic2d::vk::ComputeShadowPassHandle::_primitivesBuffer

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::basic2d::vk::ShadowPrimitivesAttachmentHandle const*


# ::stappler::xenolith::basic2d::vk::ComputeShadowPassHandle::_sdfImage

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::basic2d::vk::ShadowSdfImageAttachmentHandle const*


# ::stappler::xenolith::basic2d::vk::ComputeShadowPassHandle::_gridCellSize

## BRIEF

## CONTENT

Доступ: protected

Тип: uint32_t
