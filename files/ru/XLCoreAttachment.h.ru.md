Title: XLCoreAttachment.h


# XENOLITH_CORE_XLCOREATTACHMENT_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::core::DependencyEvent

## BRIEF

## CONTENT

Базовые классы:
* Ref


# ::stappler::xenolith::core::DependencyEvent::QueueSet

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::DependencyEvent::GetNextId()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint32_t

# ::stappler::xenolith::core::DependencyEvent::~DependencyEvent()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::DependencyEvent::DependencyEvent(stappler::xenolith::core::DependencyEvent::QueueSet&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::DependencyEvent::QueueSet&&


# ::stappler::xenolith::core::DependencyEvent::DependencyEvent(InitializerList<Rc<stappler::xenolith::core::Queue>>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* InitializerList<Rc<stappler::xenolith::core::Queue>>&&


# ::stappler::xenolith::core::DependencyEvent::getId() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint32_t

# ::stappler::xenolith::core::DependencyEvent::signal(stappler::xenolith::core::Queue*,bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::Queue*
* bool

Возвращает:
* bool

# ::stappler::xenolith::core::DependencyEvent::isSignaled() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::core::DependencyEvent::isSuccessful() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::core::DependencyEvent::addQueue(Rc<stappler::xenolith::core::Queue>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Rc<stappler::xenolith::core::Queue>&&


# ::stappler::xenolith::core::DependencyEvent::_id

## BRIEF

## CONTENT

Доступ: protected

Тип: uint32_t


# ::stappler::xenolith::core::DependencyEvent::_tag

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::StringView


# ::stappler::xenolith::core::DependencyEvent::_clock

## BRIEF

## CONTENT

Доступ: protected

Тип: uint64_t


# ::stappler::xenolith::core::DependencyEvent::_queues

## BRIEF

## CONTENT

Доступ: protected

Тип: QueueSet


# ::stappler::xenolith::core::DependencyEvent::_success

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::core::AttachmentInputData

## BRIEF

## CONTENT

Базовые классы:
* Ref


# ::stappler::xenolith::core::AttachmentInputData::~AttachmentInputData()

## BRIEF

## CONTENT


# ::stappler::xenolith::core::AttachmentInputData::waitDependencies

## BRIEF

## CONTENT

Тип: Vector<Rc<stappler::xenolith::core::DependencyEvent>>


# ::stappler::xenolith::core::Attachment

## BRIEF

## CONTENT

Базовые классы:
* NamedRef


# ::stappler::xenolith::core::Attachment::FrameQueue

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::Attachment::RenderQueue

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::Attachment::PassData

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::Attachment::AttachmentData

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::Attachment::AttachmentHandle

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::Attachment::AttachmentBuilder

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::Attachment::InputCallback

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::Attachment::~Attachment()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::Attachment::init(stappler::xenolith::core::Attachment::AttachmentBuilder&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::Attachment::AttachmentBuilder&

Возвращает:
* bool

# ::stappler::xenolith::core::Attachment::clear()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::Attachment::getName() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::StringView

# ::stappler::xenolith::core::Attachment::getId() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint64_t

# ::stappler::xenolith::core::Attachment::getUsage() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::core::AttachmentUsage

# ::stappler::xenolith::core::Attachment::isTransient() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::core::Attachment::setInputCallback(stappler::xenolith::core::Attachment::InputCallback&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::Attachment::InputCallback&&


# ::stappler::xenolith::core::Attachment::acquireInput(stappler::xenolith::core::Attachment::FrameQueue&,Rc<stappler::xenolith::core::Attachment::AttachmentHandle> const&,Function<void (bool)>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::Attachment::FrameQueue&
* Rc<stappler::xenolith::core::Attachment::AttachmentHandle> const&
* Function<void (bool)>&&


# ::stappler::xenolith::core::Attachment::validateInput(Rc<stappler::xenolith::core::AttachmentInputData> const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Rc<stappler::xenolith::core::AttachmentInputData> const&

Возвращает:
* bool

# ::stappler::xenolith::core::Attachment::isCompatible(stappler::xenolith::core::ImageInfo const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::ImageInfo const&

Возвращает:
* bool

# ::stappler::xenolith::core::Attachment::sortDescriptors(stappler::xenolith::core::Queue&,stappler::xenolith::core::Device&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::Queue&
* stappler::xenolith::core::Device&


# ::stappler::xenolith::core::Attachment::makeFrameHandle(stappler::xenolith::core::Attachment::FrameQueue const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::Attachment::FrameQueue const&

Возвращает:
* Rc<stappler::xenolith::core::Attachment::AttachmentHandle>

# ::stappler::xenolith::core::Attachment::getRenderPasses() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Vector<const stappler::xenolith::core::Attachment::PassData *>

# ::stappler::xenolith::core::Attachment::getFirstRenderPass() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* PassData*

# ::stappler::xenolith::core::Attachment::getLastRenderPass() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* PassData*

# ::stappler::xenolith::core::Attachment::getNextRenderPass(stappler::xenolith::core::Attachment::PassData const*) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::Attachment::PassData const*

Возвращает:
* PassData*

# ::stappler::xenolith::core::Attachment::getPrevRenderPass(stappler::xenolith::core::Attachment::PassData const*) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::Attachment::PassData const*

Возвращает:
* PassData*

# ::stappler::xenolith::core::Attachment::getData() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* AttachmentData*

# ::stappler::xenolith::core::Attachment::_data

## BRIEF

## CONTENT

Доступ: protected

Тип: AttachmentData*


# ::stappler::xenolith::core::Attachment::_inputCallback

## BRIEF

## CONTENT

Доступ: protected

Тип: InputCallback


# ::stappler::xenolith::core::BufferAttachment

## BRIEF

## CONTENT

Базовые классы:
* Attachment


# ::stappler::xenolith::core::BufferAttachment::~BufferAttachment()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::BufferAttachment::init(stappler::xenolith::core::Attachment::AttachmentBuilder&,stappler::xenolith::core::BufferInfo const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::Attachment::AttachmentBuilder&
* stappler::xenolith::core::BufferInfo const&

Возвращает:
* bool

# ::stappler::xenolith::core::BufferAttachment::clear()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::BufferAttachment::getInfo() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::core::BufferInfo const&

# ::stappler::xenolith::core::BufferAttachment::_info

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::core::BufferInfo


# ::stappler::xenolith::core::ImageAttachment

## BRIEF

## CONTENT

Базовые классы:
* Attachment


# ::stappler::xenolith::core::ImageAttachment::~ImageAttachment()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::ImageAttachment::AttachmentInfo

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::ImageAttachment::AttachmentInfo::initialLayout

## BRIEF

## CONTENT

Тип: stappler::xenolith::core::AttachmentLayout


# ::stappler::xenolith::core::ImageAttachment::AttachmentInfo::finalLayout

## BRIEF

## CONTENT

Тип: stappler::xenolith::core::AttachmentLayout


# ::stappler::xenolith::core::ImageAttachment::AttachmentInfo::clearOnLoad

## BRIEF

## CONTENT

Тип: bool


# ::stappler::xenolith::core::ImageAttachment::AttachmentInfo::clearColor

## BRIEF

## CONTENT

Тип: stappler::xenolith::Color4F


# ::stappler::xenolith::core::ImageAttachment::AttachmentInfo::colorMode

## BRIEF

## CONTENT

Тип: stappler::xenolith::core::ColorMode


# ::stappler::xenolith::core::ImageAttachment::init(stappler::xenolith::core::Attachment::AttachmentBuilder&,stappler::xenolith::core::ImageInfo const&,stappler::xenolith::core::ImageAttachment::AttachmentInfo&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::Attachment::AttachmentBuilder&
* stappler::xenolith::core::ImageInfo const&
* stappler::xenolith::core::ImageAttachment::AttachmentInfo&&

Возвращает:
* bool

# ::stappler::xenolith::core::ImageAttachment::getImageInfo() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::core::ImageInfo const&

# ::stappler::xenolith::core::ImageAttachment::shouldClearOnLoad() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::core::ImageAttachment::getClearColor() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::Color4F

# ::stappler::xenolith::core::ImageAttachment::getColorMode() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::core::ColorMode

# ::stappler::xenolith::core::ImageAttachment::getInitialLayout() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::core::AttachmentLayout

# ::stappler::xenolith::core::ImageAttachment::getFinalLayout() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::core::AttachmentLayout

# ::stappler::xenolith::core::ImageAttachment::addImageUsage(stappler::xenolith::core::ImageUsage)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::ImageUsage


# ::stappler::xenolith::core::ImageAttachment::isCompatible(stappler::xenolith::core::ImageInfo const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::ImageInfo const&

Возвращает:
* bool

# ::stappler::xenolith::core::ImageAttachment::getImageViewInfo(stappler::xenolith::core::ImageInfoData const&,stappler::xenolith::core::AttachmentPassData const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::ImageInfoData const&
* stappler::xenolith::core::AttachmentPassData const&

Возвращает:
* stappler::xenolith::core::ImageViewInfo

# ::stappler::xenolith::core::ImageAttachment::getImageViews(stappler::xenolith::core::ImageInfoData const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::ImageInfoData const&

Возвращает:
* Vector<stappler::xenolith::core::ImageViewInfo>

# ::stappler::xenolith::core::ImageAttachment::_imageInfo

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::core::ImageInfo


# ::stappler::xenolith::core::ImageAttachment::_attachmentInfo

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::core::ImageAttachment::AttachmentInfo


# ::stappler::xenolith::core::GenericAttachment

## BRIEF

## CONTENT

Базовые классы:
* Attachment


# ::stappler::xenolith::core::GenericAttachment::~GenericAttachment()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::GenericAttachment::init(stappler::xenolith::core::Attachment::AttachmentBuilder&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::Attachment::AttachmentBuilder&

Возвращает:
* bool

# ::stappler::xenolith::core::GenericAttachment::makeFrameHandle(stappler::xenolith::core::Attachment::FrameQueue const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::Attachment::FrameQueue const&

Возвращает:
* Rc<stappler::xenolith::core::Attachment::AttachmentHandle>

# ::stappler::xenolith::core::AttachmentHandle

## BRIEF

## CONTENT

Базовые классы:
* Ref


# ::stappler::xenolith::core::AttachmentHandle::PassHandle

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::AttachmentHandle::FrameQueue

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::AttachmentHandle::FrameHandle

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::AttachmentHandle::Attachment

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::AttachmentHandle::~AttachmentHandle()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::AttachmentHandle::init(Rc<stappler::xenolith::core::AttachmentHandle::Attachment> const&,stappler::xenolith::core::AttachmentHandle::FrameQueue const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Rc<stappler::xenolith::core::AttachmentHandle::Attachment> const&
* stappler::xenolith::core::AttachmentHandle::FrameQueue const&

Возвращает:
* bool

# ::stappler::xenolith::core::AttachmentHandle::setQueueData(stappler::xenolith::core::FrameAttachmentData&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::FrameAttachmentData&


# ::stappler::xenolith::core::AttachmentHandle::getQueueData() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::core::FrameAttachmentData*

# ::stappler::xenolith::core::AttachmentHandle::isAvailable(stappler::xenolith::core::AttachmentHandle::FrameQueue const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::AttachmentHandle::FrameQueue const&

Возвращает:
* bool

# ::stappler::xenolith::core::AttachmentHandle::setup(stappler::xenolith::core::AttachmentHandle::FrameQueue&,Function<void (bool)>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::AttachmentHandle::FrameQueue&
* Function<void (bool)>&&

Возвращает:
* bool

# ::stappler::xenolith::core::AttachmentHandle::finalize(stappler::xenolith::core::AttachmentHandle::FrameQueue&,bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::AttachmentHandle::FrameQueue&
* bool


# ::stappler::xenolith::core::AttachmentHandle::isInput() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::core::AttachmentHandle::isOutput() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::core::AttachmentHandle::getAttachment() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Rc<stappler::xenolith::core::AttachmentHandle::Attachment> const&

# ::stappler::xenolith::core::AttachmentHandle::getName() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::StringView

# ::stappler::xenolith::core::AttachmentHandle::submitInput(stappler::xenolith::core::AttachmentHandle::FrameQueue&,Rc<stappler::xenolith::core::AttachmentInputData>&&,Function<void (bool)>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::AttachmentHandle::FrameQueue&
* Rc<stappler::xenolith::core::AttachmentInputData>&&
* Function<void (bool)>&&


# ::stappler::xenolith::core::AttachmentHandle::getDescriptorArraySize(stappler::xenolith::core::AttachmentHandle::PassHandle const&,stappler::xenolith::core::PipelineDescriptor const&,bool) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::AttachmentHandle::PassHandle const&
* stappler::xenolith::core::PipelineDescriptor const&
* bool

Возвращает:
* uint32_t

# ::stappler::xenolith::core::AttachmentHandle::isDescriptorDirty(stappler::xenolith::core::AttachmentHandle::PassHandle const&,stappler::xenolith::core::PipelineDescriptor const&,uint32_t,bool) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::AttachmentHandle::PassHandle const&
* stappler::xenolith::core::PipelineDescriptor const&
* uint32_t
* bool

Возвращает:
* bool

# ::stappler::xenolith::core::AttachmentHandle::_attachment

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::xenolith::core::AttachmentHandle::Attachment>


# ::stappler::xenolith::core::AttachmentHandle::_queueData

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::core::FrameAttachmentData*
