Title: XL2dVkVertexPass.h


# XENOLITH_RENDERER_BASIC2D_BACKEND_VK_XL2DVKVERTEXPASS_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::basic2d::vk::VertexAttachment

## BRIEF

## CONTENT

Базовые классы:
* BufferAttachment


# ::stappler::xenolith::basic2d::vk::VertexAttachment::~VertexAttachment()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::basic2d::vk::VertexAttachment::init(stappler::xenolith::core::Attachment::AttachmentBuilder&,stappler::xenolith::vk::BufferInfo const&,stappler::xenolith::core::Attachment::AttachmentData const*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::Attachment::AttachmentBuilder&
* stappler::xenolith::vk::BufferInfo const&
* stappler::xenolith::core::Attachment::AttachmentData const*

Возвращает:
* bool

# ::stappler::xenolith::basic2d::vk::VertexAttachment::getMaterials() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::core::Attachment::AttachmentData const*

# ::stappler::xenolith::basic2d::vk::VertexAttachment::makeFrameHandle(stappler::xenolith::core::Attachment::FrameQueue const&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::core::Attachment::FrameQueue const&

Возвращает:
* Rc<stappler::xenolith::core::Attachment::AttachmentHandle>

# ::stappler::xenolith::basic2d::vk::VertexAttachment::_materials

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::core::Attachment::AttachmentData const*


# ::stappler::xenolith::basic2d::vk::VertexAttachmentHandle

## BRIEF

## CONTENT

Базовые классы:
* BufferAttachmentHandle


# ::stappler::xenolith::basic2d::vk::VertexAttachmentHandle::~VertexAttachmentHandle()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::basic2d::vk::VertexAttachmentHandle::setup(stappler::xenolith::core::AttachmentHandle::FrameQueue&,Function<void (bool)>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::AttachmentHandle::FrameQueue&
* Function<void (bool)>&&

Возвращает:
* bool

# ::stappler::xenolith::basic2d::vk::VertexAttachmentHandle::submitInput(stappler::xenolith::core::AttachmentHandle::FrameQueue&,Rc<core::AttachmentInputData>&&,Function<void (bool)>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::AttachmentHandle::FrameQueue&
* Rc<core::AttachmentInputData>&&
* Function<void (bool)>&&


# ::stappler::xenolith::basic2d::vk::VertexAttachmentHandle::getVertexData() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Vector<stappler::xenolith::basic2d::VertexSpan> const&

# ::stappler::xenolith::basic2d::vk::VertexAttachmentHandle::getVertexes() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Rc<stappler::xenolith::vk::Buffer> const&

# ::stappler::xenolith::basic2d::vk::VertexAttachmentHandle::getIndexes() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Rc<stappler::xenolith::vk::Buffer> const&

# ::stappler::xenolith::basic2d::vk::VertexAttachmentHandle::popCommands() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Rc<stappler::xenolith::basic2d::FrameContextHandle2d>

# ::stappler::xenolith::basic2d::vk::VertexAttachmentHandle::empty() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::basic2d::vk::VertexAttachmentHandle::loadVertexes(stappler::xenolith::core::AttachmentHandle::FrameHandle&,Rc<stappler::xenolith::basic2d::FrameContextHandle2d> const&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::core::AttachmentHandle::FrameHandle&
* Rc<stappler::xenolith::basic2d::FrameContextHandle2d> const&

Возвращает:
* bool

# ::stappler::xenolith::basic2d::vk::VertexAttachmentHandle::isGpuTransform() const

## BRIEF

## CONTENT

Доступ: protected

Возвращает:
* bool

# ::stappler::xenolith::basic2d::vk::VertexAttachmentHandle::_indexes

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::xenolith::vk::Buffer>


# ::stappler::xenolith::basic2d::vk::VertexAttachmentHandle::_vertexes

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::xenolith::vk::Buffer>


# ::stappler::xenolith::basic2d::vk::VertexAttachmentHandle::_transforms

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::xenolith::vk::Buffer>


# ::stappler::xenolith::basic2d::vk::VertexAttachmentHandle::_spans

## BRIEF

## CONTENT

Доступ: protected

Тип: Vector<stappler::xenolith::basic2d::VertexSpan>


# ::stappler::xenolith::basic2d::vk::VertexAttachmentHandle::_materialSet

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<core::MaterialSet>


# ::stappler::xenolith::basic2d::vk::VertexAttachmentHandle::_materials

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::basic2d::vk::MaterialAttachmentHandle const*


# ::stappler::xenolith::basic2d::vk::VertexAttachmentHandle::_commands

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::xenolith::basic2d::FrameContextHandle2d>


# ::stappler::xenolith::basic2d::vk::VertexAttachmentHandle::_drawStat

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::DrawStat


# ::stappler::xenolith::basic2d::vk::VertexPass

## BRIEF

## CONTENT

Базовые классы:
* QueuePass


# ::stappler::xenolith::basic2d::vk::VertexPass::AttachmentHandle

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::basic2d::vk::VertexPass::selectDepthFormat(SpanView<core::ImageFormat>)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* SpanView<core::ImageFormat>

Возвращает:
* core::ImageFormat

# ::stappler::xenolith::basic2d::vk::VertexPass::~VertexPass()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::basic2d::vk::VertexPass::getVertexes() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::core::QueuePass::AttachmentData const*

# ::stappler::xenolith::basic2d::vk::VertexPass::getMaterials() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::core::QueuePass::AttachmentData const*

# ::stappler::xenolith::basic2d::vk::VertexPass::makeFrameHandle(stappler::xenolith::core::QueuePass::FrameQueue const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::QueuePass::FrameQueue const&

Возвращает:
* Rc<stappler::xenolith::core::QueuePass::QueuePassHandle>

# ::stappler::xenolith::basic2d::vk::VertexPass::_output

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::core::QueuePass::AttachmentData const*


# ::stappler::xenolith::basic2d::vk::VertexPass::_shadow

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::core::QueuePass::AttachmentData const*


# ::stappler::xenolith::basic2d::vk::VertexPass::_depth2d

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::core::QueuePass::AttachmentData const*


# ::stappler::xenolith::basic2d::vk::VertexPass::_vertexes

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::core::QueuePass::AttachmentData const*


# ::stappler::xenolith::basic2d::vk::VertexPass::_materials

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::core::QueuePass::AttachmentData const*


# ::stappler::xenolith::basic2d::vk::VertexPassHandle

## BRIEF

## CONTENT

Базовые классы:
* QueuePassHandle


# ::stappler::xenolith::basic2d::vk::VertexPassHandle::~VertexPassHandle()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::basic2d::vk::VertexPassHandle::prepare(stappler::xenolith::core::QueuePassHandle::FrameQueue&,Function<void (bool)>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::QueuePassHandle::FrameQueue&
* Function<void (bool)>&&

Возвращает:
* bool

# ::stappler::xenolith::basic2d::vk::VertexPassHandle::doPrepareCommands(stappler::xenolith::core::QueuePassHandle::FrameHandle&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::core::QueuePassHandle::FrameHandle&

Возвращает:
* Vector<const stappler::xenolith::vk::CommandBuffer *>

# ::stappler::xenolith::basic2d::vk::VertexPassHandle::prepareRenderPass(stappler::xenolith::vk::CommandBuffer&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::vk::CommandBuffer&


# ::stappler::xenolith::basic2d::vk::VertexPassHandle::prepareMaterialCommands(core::MaterialSet*,stappler::xenolith::vk::CommandBuffer&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* core::MaterialSet*
* stappler::xenolith::vk::CommandBuffer&


# ::stappler::xenolith::basic2d::vk::VertexPassHandle::finalizeRenderPass(stappler::xenolith::vk::CommandBuffer&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::vk::CommandBuffer&


# ::stappler::xenolith::basic2d::vk::VertexPassHandle::_vertexBuffer

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::basic2d::vk::VertexAttachmentHandle const*


# ::stappler::xenolith::basic2d::vk::VertexPassHandle::_materialBuffer

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::basic2d::vk::MaterialAttachmentHandle const*
