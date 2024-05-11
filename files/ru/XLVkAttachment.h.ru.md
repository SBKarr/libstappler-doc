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


# ::stappler::xenolith::vk::BufferAttachment::makeFrameHandle(stappler::xenolith::core::Attachment::FrameQueue const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::Attachment::FrameQueue const&

Возвращает:
* Rc<stappler::xenolith::core::Attachment::AttachmentHandle>

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


# ::stappler::xenolith::vk::BufferAttachmentHandle::BufferView

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::vk::BufferAttachmentHandle::BufferView::buffer

## BRIEF

## CONTENT

Тип: Rc<stappler::xenolith::vk::Buffer>


# ::stappler::xenolith::vk::BufferAttachmentHandle::BufferView::offset

## BRIEF

## CONTENT

Тип: VkDeviceSize


# ::stappler::xenolith::vk::BufferAttachmentHandle::BufferView::size

## BRIEF

## CONTENT

Тип: VkDeviceSize


# ::stappler::xenolith::vk::BufferAttachmentHandle::BufferView::dirty

## BRIEF

## CONTENT

Тип: bool


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

# ::stappler::xenolith::vk::BufferAttachmentHandle::isDescriptorDirty(stappler::xenolith::core::AttachmentHandle::PassHandle const&,stappler::xenolith::vk::PipelineDescriptor const&,uint32_t,bool) const

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

# ::stappler::xenolith::vk::BufferAttachmentHandle::clearBufferViews()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::vk::BufferAttachmentHandle::addBufferView(stappler::xenolith::vk::Buffer*,VkDeviceSize,VkDeviceSize,bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::vk::Buffer*
* VkDeviceSize
* VkDeviceSize
* bool


# ::stappler::xenolith::vk::BufferAttachmentHandle::addBufferView(Rc<stappler::xenolith::vk::Buffer>&&,VkDeviceSize,VkDeviceSize,bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Rc<stappler::xenolith::vk::Buffer>&&
* VkDeviceSize
* VkDeviceSize
* bool


# ::stappler::xenolith::vk::BufferAttachmentHandle::getBuffers() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* SpanView<stappler::xenolith::vk::BufferAttachmentHandle::BufferView>

# ::stappler::xenolith::vk::BufferAttachmentHandle::_buffers

## BRIEF

## CONTENT

Доступ: protected

Тип: Vector<stappler::xenolith::vk::BufferAttachmentHandle::BufferView>


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