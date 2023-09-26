Title: XLVkAttachment.h


# XENOLITH_BACKEND_VK_XLVKATTACHMENT_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::vk::BufferAttachment

## BRIEF

## CONTENT

Базовые классы:
* core::BufferAttachment


# ::stappler::xenolith::vk::BufferAttachment::~BufferAttachment()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::vk::ImageAttachment

## BRIEF

## CONTENT

Базовые классы:
* core::ImageAttachment


# ::stappler::xenolith::vk::ImageAttachment::~ImageAttachment()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::vk::ImageAttachment::makeFrameHandle(stappler::xenolith::core::Attachment::FrameQueue const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::Attachment::FrameQueue const&

Возвращает:
* Rc<stappler::xenolith::core::Attachment::AttachmentHandle>

# ::stappler::xenolith::vk::BufferAttachmentHandle

## BRIEF

## CONTENT

Базовые классы:
* core::AttachmentHandle


# ::stappler::xenolith::vk::BufferAttachmentHandle::~BufferAttachmentHandle()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::vk::BufferAttachmentHandle::writeDescriptor(core::QueuePassHandle const&,stappler::xenolith::vk::DescriptorBufferInfo&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* core::QueuePassHandle const&
* stappler::xenolith::vk::DescriptorBufferInfo&

Возвращает:
* bool

# ::stappler::xenolith::vk::ImageAttachmentHandle

## BRIEF

## CONTENT

Базовые классы:
* core::AttachmentHandle


# ::stappler::xenolith::vk::ImageAttachmentHandle::~ImageAttachmentHandle()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::vk::ImageAttachmentHandle::getImage() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Rc<core::ImageStorage> const&

# ::stappler::xenolith::vk::ImageAttachmentHandle::writeDescriptor(core::QueuePassHandle const&,stappler::xenolith::vk::DescriptorImageInfo&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* core::QueuePassHandle const&
* stappler::xenolith::vk::DescriptorImageInfo&

Возвращает:
* bool

# ::stappler::xenolith::vk::ImageAttachmentHandle::isDescriptorDirty(stappler::xenolith::core::AttachmentHandle::PassHandle const&,stappler::xenolith::vk::PipelineDescriptor const&,uint32_t,bool) const

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

# ::stappler::xenolith::vk::TexelAttachmentHandle

## BRIEF

## CONTENT

Базовые классы:
* core::AttachmentHandle


# ::stappler::xenolith::vk::TexelAttachmentHandle::~TexelAttachmentHandle()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::vk::TexelAttachmentHandle::writeDescriptor(core::QueuePassHandle const&,stappler::xenolith::vk::DescriptorBufferViewInfo&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* core::QueuePassHandle const&
* stappler::xenolith::vk::DescriptorBufferViewInfo&

Возвращает:
* bool