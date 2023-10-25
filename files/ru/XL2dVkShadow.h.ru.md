Title: XL2dVkShadow.h


# XENOLITH_RENDERER_BASIC2D_BACKEND_VK_XL2DVKSHADOW_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::basic2d::vk::ShadowLightDataAttachment

## BRIEF

## CONTENT

Базовые классы:
* BufferAttachment


# ::stappler::xenolith::basic2d::vk::ShadowLightDataAttachment::~ShadowLightDataAttachment()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::basic2d::vk::ShadowLightDataAttachment::init(stappler::xenolith::core::Attachment::AttachmentBuilder&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::Attachment::AttachmentBuilder&

Возвращает:
* bool

# ::stappler::xenolith::basic2d::vk::ShadowLightDataAttachment::validateInput(Rc<core::AttachmentInputData> const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Rc<core::AttachmentInputData> const&

Возвращает:
* bool

# ::stappler::xenolith::basic2d::vk::ShadowLightDataAttachment::makeFrameHandle(stappler::xenolith::core::Attachment::FrameQueue const&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::core::Attachment::FrameQueue const&

Возвращает:
* Rc<stappler::xenolith::core::Attachment::AttachmentHandle>

# ::stappler::xenolith::basic2d::vk::ShadowVertexAttachment

## BRIEF

## CONTENT

Базовые классы:
* BufferAttachment


# ::stappler::xenolith::basic2d::vk::ShadowVertexAttachment::~ShadowVertexAttachment()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::basic2d::vk::ShadowVertexAttachment::init(stappler::xenolith::core::Attachment::AttachmentBuilder&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::Attachment::AttachmentBuilder&

Возвращает:
* bool

# ::stappler::xenolith::basic2d::vk::ShadowVertexAttachment::validateInput(Rc<core::AttachmentInputData> const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Rc<core::AttachmentInputData> const&

Возвращает:
* bool

# ::stappler::xenolith::basic2d::vk::ShadowVertexAttachment::makeFrameHandle(stappler::xenolith::core::Attachment::FrameQueue const&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::core::Attachment::FrameQueue const&

Возвращает:
* Rc<stappler::xenolith::core::Attachment::AttachmentHandle>

# ::stappler::xenolith::basic2d::vk::ShadowPrimitivesAttachment

## BRIEF

## CONTENT

Базовые классы:
* BufferAttachment


# ::stappler::xenolith::basic2d::vk::ShadowPrimitivesAttachment::~ShadowPrimitivesAttachment()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::basic2d::vk::ShadowPrimitivesAttachment::init(stappler::xenolith::core::Attachment::AttachmentBuilder&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::Attachment::AttachmentBuilder&

Возвращает:
* bool

# ::stappler::xenolith::basic2d::vk::ShadowPrimitivesAttachment::makeFrameHandle(stappler::xenolith::core::Attachment::FrameQueue const&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::core::Attachment::FrameQueue const&

Возвращает:
* Rc<stappler::xenolith::core::Attachment::AttachmentHandle>

# ::stappler::xenolith::basic2d::vk::ShadowSdfImageAttachment

## BRIEF

## CONTENT

Базовые классы:
* ImageAttachment


# ::stappler::xenolith::basic2d::vk::ShadowSdfImageAttachment::~ShadowSdfImageAttachment()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::basic2d::vk::ShadowSdfImageAttachment::init(stappler::xenolith::core::Attachment::AttachmentBuilder&,stappler::xenolith::Extent2)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::Attachment::AttachmentBuilder&
* stappler::xenolith::Extent2

Возвращает:
* bool

# ::stappler::xenolith::basic2d::vk::ShadowSdfImageAttachment::makeFrameHandle(stappler::xenolith::core::Attachment::FrameQueue const&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::core::Attachment::FrameQueue const&

Возвращает:
* Rc<stappler::xenolith::core::Attachment::AttachmentHandle>

# ::stappler::xenolith::basic2d::vk::ShadowVertexAttachmentHandle

## BRIEF

## CONTENT

Базовые классы:
* BufferAttachmentHandle


# ::stappler::xenolith::basic2d::vk::ShadowVertexAttachmentHandle::~ShadowVertexAttachmentHandle()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::basic2d::vk::ShadowVertexAttachmentHandle::submitInput(stappler::xenolith::core::AttachmentHandle::FrameQueue&,Rc<core::AttachmentInputData>&&,Function<void (bool)>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::AttachmentHandle::FrameQueue&
* Rc<core::AttachmentInputData>&&
* Function<void (bool)>&&


# ::stappler::xenolith::basic2d::vk::ShadowVertexAttachmentHandle::isDescriptorDirty(stappler::xenolith::core::AttachmentHandle::PassHandle const&,stappler::xenolith::vk::PipelineDescriptor const&,uint32_t,bool) const

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

# ::stappler::xenolith::basic2d::vk::ShadowVertexAttachmentHandle::writeDescriptor(core::QueuePassHandle const&,stappler::xenolith::vk::DescriptorBufferInfo&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* core::QueuePassHandle const&
* stappler::xenolith::vk::DescriptorBufferInfo&

Возвращает:
* bool

# ::stappler::xenolith::basic2d::vk::ShadowVertexAttachmentHandle::empty() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::basic2d::vk::ShadowVertexAttachmentHandle::getTrianglesCount() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint32_t

# ::stappler::xenolith::basic2d::vk::ShadowVertexAttachmentHandle::getCirclesCount() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint32_t

# ::stappler::xenolith::basic2d::vk::ShadowVertexAttachmentHandle::getRectsCount() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint32_t

# ::stappler::xenolith::basic2d::vk::ShadowVertexAttachmentHandle::getRoundedRectsCount() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint32_t

# ::stappler::xenolith::basic2d::vk::ShadowVertexAttachmentHandle::getPolygonsCount() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint32_t

# ::stappler::xenolith::basic2d::vk::ShadowVertexAttachmentHandle::getMaxValue() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* float

# ::stappler::xenolith::basic2d::vk::ShadowVertexAttachmentHandle::getVertexes() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Rc<stappler::xenolith::vk::DeviceBuffer> const&

# ::stappler::xenolith::basic2d::vk::ShadowVertexAttachmentHandle::loadVertexes(stappler::xenolith::core::AttachmentHandle::FrameHandle&,Rc<stappler::xenolith::basic2d::FrameContextHandle2d> const&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::core::AttachmentHandle::FrameHandle&
* Rc<stappler::xenolith::basic2d::FrameContextHandle2d> const&

Возвращает:
* bool

# ::stappler::xenolith::basic2d::vk::ShadowVertexAttachmentHandle::_indexes

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::xenolith::vk::DeviceBuffer>


# ::stappler::xenolith::basic2d::vk::ShadowVertexAttachmentHandle::_vertexes

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::xenolith::vk::DeviceBuffer>


# ::stappler::xenolith::basic2d::vk::ShadowVertexAttachmentHandle::_transforms

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::xenolith::vk::DeviceBuffer>


# ::stappler::xenolith::basic2d::vk::ShadowVertexAttachmentHandle::_circles

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::xenolith::vk::DeviceBuffer>


# ::stappler::xenolith::basic2d::vk::ShadowVertexAttachmentHandle::_rects

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::xenolith::vk::DeviceBuffer>


# ::stappler::xenolith::basic2d::vk::ShadowVertexAttachmentHandle::_roundedRects

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::xenolith::vk::DeviceBuffer>


# ::stappler::xenolith::basic2d::vk::ShadowVertexAttachmentHandle::_polygons

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::xenolith::vk::DeviceBuffer>


# ::stappler::xenolith::basic2d::vk::ShadowVertexAttachmentHandle::_trianglesCount

## BRIEF

## CONTENT

Доступ: protected

Тип: uint32_t


# ::stappler::xenolith::basic2d::vk::ShadowVertexAttachmentHandle::_circlesCount

## BRIEF

## CONTENT

Доступ: protected

Тип: uint32_t


# ::stappler::xenolith::basic2d::vk::ShadowVertexAttachmentHandle::_rectsCount

## BRIEF

## CONTENT

Доступ: protected

Тип: uint32_t


# ::stappler::xenolith::basic2d::vk::ShadowVertexAttachmentHandle::_roundedRectsCount

## BRIEF

## CONTENT

Доступ: protected

Тип: uint32_t


# ::stappler::xenolith::basic2d::vk::ShadowVertexAttachmentHandle::_polygonsCount

## BRIEF

## CONTENT

Доступ: protected

Тип: uint32_t


# ::stappler::xenolith::basic2d::vk::ShadowVertexAttachmentHandle::_maxValue

## BRIEF

## CONTENT

Доступ: protected

Тип: float


# ::stappler::xenolith::basic2d::vk::ShadowLightDataAttachmentHandle

## BRIEF

## CONTENT

Базовые классы:
* BufferAttachmentHandle


# ::stappler::xenolith::basic2d::vk::ShadowLightDataAttachmentHandle::~ShadowLightDataAttachmentHandle()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::basic2d::vk::ShadowLightDataAttachmentHandle::submitInput(stappler::xenolith::core::AttachmentHandle::FrameQueue&,Rc<core::AttachmentInputData>&&,Function<void (bool)>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::AttachmentHandle::FrameQueue&
* Rc<core::AttachmentInputData>&&
* Function<void (bool)>&&


# ::stappler::xenolith::basic2d::vk::ShadowLightDataAttachmentHandle::isDescriptorDirty(stappler::xenolith::core::AttachmentHandle::PassHandle const&,stappler::xenolith::vk::PipelineDescriptor const&,uint32_t,bool) const

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

# ::stappler::xenolith::basic2d::vk::ShadowLightDataAttachmentHandle::writeDescriptor(core::QueuePassHandle const&,stappler::xenolith::vk::DescriptorBufferInfo&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* core::QueuePassHandle const&
* stappler::xenolith::vk::DescriptorBufferInfo&

Возвращает:
* bool

# ::stappler::xenolith::basic2d::vk::ShadowLightDataAttachmentHandle::allocateBuffer(stappler::xenolith::vk::DeviceFrameHandle*,stappler::xenolith::basic2d::vk::ShadowVertexAttachmentHandle const*,uint32_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::vk::DeviceFrameHandle*
* stappler::xenolith::basic2d::vk::ShadowVertexAttachmentHandle const*
* uint32_t


# ::stappler::xenolith::basic2d::vk::ShadowLightDataAttachmentHandle::getBoxOffset(float) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float

Возвращает:
* float

# ::stappler::xenolith::basic2d::vk::ShadowLightDataAttachmentHandle::getLightsCount() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint32_t

# ::stappler::xenolith::basic2d::vk::ShadowLightDataAttachmentHandle::getObjectsCount() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint32_t

# ::stappler::xenolith::basic2d::vk::ShadowLightDataAttachmentHandle::getShadowData() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::basic2d::ShadowData const&

# ::stappler::xenolith::basic2d::vk::ShadowLightDataAttachmentHandle::getBuffer() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Rc<stappler::xenolith::vk::DeviceBuffer> const&

# ::stappler::xenolith::basic2d::vk::ShadowLightDataAttachmentHandle::_data

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::xenolith::vk::DeviceBuffer>


# ::stappler::xenolith::basic2d::vk::ShadowLightDataAttachmentHandle::_input

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::xenolith::basic2d::FrameContextHandle2d>


# ::stappler::xenolith::basic2d::vk::ShadowLightDataAttachmentHandle::_shadowData

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::basic2d::ShadowData


# ::stappler::xenolith::basic2d::vk::ShadowPrimitivesAttachmentHandle

## BRIEF

## CONTENT

Базовые классы:
* BufferAttachmentHandle


# ::stappler::xenolith::basic2d::vk::ShadowPrimitivesAttachmentHandle::~ShadowPrimitivesAttachmentHandle()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::basic2d::vk::ShadowPrimitivesAttachmentHandle::allocateBuffer(stappler::xenolith::vk::DeviceFrameHandle*,uint32_t,stappler::xenolith::basic2d::ShadowData const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::vk::DeviceFrameHandle*
* uint32_t
* stappler::xenolith::basic2d::ShadowData const&


# ::stappler::xenolith::basic2d::vk::ShadowPrimitivesAttachmentHandle::isDescriptorDirty(stappler::xenolith::core::AttachmentHandle::PassHandle const&,stappler::xenolith::vk::PipelineDescriptor const&,uint32_t,bool) const

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

# ::stappler::xenolith::basic2d::vk::ShadowPrimitivesAttachmentHandle::writeDescriptor(core::QueuePassHandle const&,stappler::xenolith::vk::DescriptorBufferInfo&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* core::QueuePassHandle const&
* stappler::xenolith::vk::DescriptorBufferInfo&

Возвращает:
* bool

# ::stappler::xenolith::basic2d::vk::ShadowPrimitivesAttachmentHandle::getTriangles() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Rc<stappler::xenolith::vk::DeviceBuffer> const&

# ::stappler::xenolith::basic2d::vk::ShadowPrimitivesAttachmentHandle::getCircles() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Rc<stappler::xenolith::vk::DeviceBuffer> const&

# ::stappler::xenolith::basic2d::vk::ShadowPrimitivesAttachmentHandle::getRects() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Rc<stappler::xenolith::vk::DeviceBuffer> const&

# ::stappler::xenolith::basic2d::vk::ShadowPrimitivesAttachmentHandle::getRoundedRects() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Rc<stappler::xenolith::vk::DeviceBuffer> const&

# ::stappler::xenolith::basic2d::vk::ShadowPrimitivesAttachmentHandle::getPolygons() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Rc<stappler::xenolith::vk::DeviceBuffer> const&

# ::stappler::xenolith::basic2d::vk::ShadowPrimitivesAttachmentHandle::getGridSize() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Rc<stappler::xenolith::vk::DeviceBuffer> const&

# ::stappler::xenolith::basic2d::vk::ShadowPrimitivesAttachmentHandle::getGridIndex() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Rc<stappler::xenolith::vk::DeviceBuffer> const&

# ::stappler::xenolith::basic2d::vk::ShadowPrimitivesAttachmentHandle::_triangles

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::xenolith::vk::DeviceBuffer>


# ::stappler::xenolith::basic2d::vk::ShadowPrimitivesAttachmentHandle::_circles

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::xenolith::vk::DeviceBuffer>


# ::stappler::xenolith::basic2d::vk::ShadowPrimitivesAttachmentHandle::_rects

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::xenolith::vk::DeviceBuffer>


# ::stappler::xenolith::basic2d::vk::ShadowPrimitivesAttachmentHandle::_roundedRects

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::xenolith::vk::DeviceBuffer>


# ::stappler::xenolith::basic2d::vk::ShadowPrimitivesAttachmentHandle::_polygons

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::xenolith::vk::DeviceBuffer>


# ::stappler::xenolith::basic2d::vk::ShadowPrimitivesAttachmentHandle::_gridSize

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::xenolith::vk::DeviceBuffer>


# ::stappler::xenolith::basic2d::vk::ShadowPrimitivesAttachmentHandle::_gridIndex

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::xenolith::vk::DeviceBuffer>


# ::stappler::xenolith::basic2d::vk::ShadowSdfImageAttachmentHandle

## BRIEF

## CONTENT

Базовые классы:
* ImageAttachmentHandle


# ::stappler::xenolith::basic2d::vk::ShadowSdfImageAttachmentHandle::~ShadowSdfImageAttachmentHandle()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::basic2d::vk::ShadowSdfImageAttachmentHandle::submitInput(stappler::xenolith::core::AttachmentHandle::FrameQueue&,Rc<core::AttachmentInputData>&&,Function<void (bool)>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::AttachmentHandle::FrameQueue&
* Rc<core::AttachmentInputData>&&
* Function<void (bool)>&&


# ::stappler::xenolith::basic2d::vk::ShadowSdfImageAttachmentHandle::getImageInfo() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::vk::ImageInfo

# ::stappler::xenolith::basic2d::vk::ShadowSdfImageAttachmentHandle::getShadowDensity() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* float

# ::stappler::xenolith::basic2d::vk::ShadowSdfImageAttachmentHandle::getSceneDensity() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* float

# ::stappler::xenolith::basic2d::vk::ShadowSdfImageAttachmentHandle::_sceneDensity

## BRIEF

## CONTENT

Доступ: protected

Тип: float


# ::stappler::xenolith::basic2d::vk::ShadowSdfImageAttachmentHandle::_shadowDensity

## BRIEF

## CONTENT

Доступ: protected

Тип: float


# ::stappler::xenolith::basic2d::vk::ShadowSdfImageAttachmentHandle::_currentImageInfo

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::vk::ImageInfo
