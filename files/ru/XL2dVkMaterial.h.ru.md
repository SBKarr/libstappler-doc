Title: XL2dVkMaterial.h


# XENOLITH_RENDERER_BASIC2D_BACKEND_VK_XL2DVKMATERIAL_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::basic2d::vk::MaterialAttachment

## BRIEF

## CONTENT

Базовые классы:
* core::MaterialAttachment


# ::stappler::xenolith::basic2d::vk::MaterialAttachment::~MaterialAttachment()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::basic2d::vk::MaterialAttachment::init(stappler::xenolith::core::Attachment::AttachmentBuilder&,stappler::xenolith::vk::BufferInfo const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::Attachment::AttachmentBuilder&
* stappler::xenolith::vk::BufferInfo const&

Возвращает:
* bool

# ::stappler::xenolith::basic2d::vk::MaterialAttachment::makeFrameHandle(stappler::xenolith::core::Attachment::FrameQueue const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::Attachment::FrameQueue const&

Возвращает:
* Rc<stappler::xenolith::core::Attachment::AttachmentHandle>

# ::stappler::xenolith::basic2d::vk::MaterialAttachmentHandle

## BRIEF

## CONTENT

Базовые классы:
* BufferAttachmentHandle


# ::stappler::xenolith::basic2d::vk::MaterialAttachmentHandle::~MaterialAttachmentHandle()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::basic2d::vk::MaterialAttachmentHandle::init(Rc<stappler::xenolith::core::AttachmentHandle::Attachment> const&,stappler::xenolith::core::AttachmentHandle::FrameQueue const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Rc<stappler::xenolith::core::AttachmentHandle::Attachment> const&
* stappler::xenolith::core::AttachmentHandle::FrameQueue const&

Возвращает:
* bool

# ::stappler::xenolith::basic2d::vk::MaterialAttachmentHandle::isDescriptorDirty(stappler::xenolith::core::AttachmentHandle::PassHandle const&,stappler::xenolith::vk::PipelineDescriptor const&,uint32_t,bool) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::AttachmentHandle::PassHandle const&
* stappler::xenolith::vk::PipelineDescriptor const&
* uint32_t
* bool

Возвращает:
* bool

# ::stappler::xenolith::basic2d::vk::MaterialAttachmentHandle::writeDescriptor(core::QueuePassHandle const&,stappler::xenolith::vk::DescriptorBufferInfo&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* core::QueuePassHandle const&
* stappler::xenolith::vk::DescriptorBufferInfo&

Возвращает:
* bool

# ::stappler::xenolith::basic2d::vk::MaterialAttachmentHandle::getMaterialAttachment() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::basic2d::vk::MaterialAttachment const*

# ::stappler::xenolith::basic2d::vk::MaterialAttachmentHandle::getSet() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Rc<core::MaterialSet> const

# ::stappler::xenolith::basic2d::vk::MaterialAttachmentHandle::_mutex

## BRIEF

## CONTENT

Доступ: protected

Тип: std::mutex


# ::stappler::xenolith::basic2d::vk::MaterialAttachmentHandle::_materials

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<core::MaterialSet>
