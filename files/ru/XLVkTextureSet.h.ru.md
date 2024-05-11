Title: XLVkTextureSet.h


# XENOLITH_BACKEND_VK_XLVKTEXTURESET_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::vk::TextureSetLayout

## BRIEF

## CONTENT

Базовые классы:
* Ref


# ::stappler::xenolith::vk::TextureSetLayout::AttachmentLayout

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::vk::TextureSetLayout::~TextureSetLayout()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::vk::TextureSetLayout::init(stappler::xenolith::vk::Device&,uint32_t,uint32_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::vk::Device&
* uint32_t
* uint32_t

Возвращает:
* bool

# ::stappler::xenolith::vk::TextureSetLayout::invalidate(stappler::xenolith::vk::Device&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::vk::Device&


# ::stappler::xenolith::vk::TextureSetLayout::compile(stappler::xenolith::vk::Device&,Vector<VkSampler> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::vk::Device&
* Vector<VkSampler> const&

Возвращает:
* bool

# ::stappler::xenolith::vk::TextureSetLayout::getImageCount() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint32_t const&

# ::stappler::xenolith::vk::TextureSetLayout::getSamplersCount() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint32_t const&

# ::stappler::xenolith::vk::TextureSetLayout::getBuffersCount() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint32_t const&

# ::stappler::xenolith::vk::TextureSetLayout::getLayout() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* VkDescriptorSetLayout

# ::stappler::xenolith::vk::TextureSetLayout::getEmptyImageView() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Rc<stappler::xenolith::vk::ImageView> const&

# ::stappler::xenolith::vk::TextureSetLayout::getSolidImageView() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Rc<stappler::xenolith::vk::ImageView> const&

# ::stappler::xenolith::vk::TextureSetLayout::getEmptyBuffer() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Rc<stappler::xenolith::vk::Buffer> const&

# ::stappler::xenolith::vk::TextureSetLayout::acquireSet(stappler::xenolith::vk::Device&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::vk::Device&

Возвращает:
* Rc<stappler::xenolith::vk::TextureSet>

# ::stappler::xenolith::vk::TextureSetLayout::releaseSet(Rc<stappler::xenolith::vk::TextureSet>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Rc<stappler::xenolith::vk::TextureSet>&&


# ::stappler::xenolith::vk::TextureSetLayout::initDefault(stappler::xenolith::vk::Device&,stappler::xenolith::vk::Loop&,Function<void (bool)>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::vk::Device&
* stappler::xenolith::vk::Loop&
* Function<void (bool)>&&


# ::stappler::xenolith::vk::TextureSetLayout::isPartiallyBound() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::vk::TextureSetLayout::getEmptyImageObject() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Rc<stappler::xenolith::vk::Image>

# ::stappler::xenolith::vk::TextureSetLayout::getSolidImageObject() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Rc<stappler::xenolith::vk::Image>

# ::stappler::xenolith::vk::TextureSetLayout::readImage(stappler::xenolith::vk::Device&,stappler::xenolith::vk::Loop&,Rc<stappler::xenolith::vk::Image> const&,stappler::xenolith::vk::TextureSetLayout::AttachmentLayout,Function<void (const stappler::xenolith::vk::ImageInfoData &, stappler::BytesView)>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::vk::Device&
* stappler::xenolith::vk::Loop&
* Rc<stappler::xenolith::vk::Image> const&
* stappler::xenolith::vk::TextureSetLayout::AttachmentLayout
* Function<void (const stappler::xenolith::vk::ImageInfoData &, stappler::BytesView)>&&


# ::stappler::xenolith::vk::TextureSetLayout::readBuffer(stappler::xenolith::vk::Device&,stappler::xenolith::vk::Loop&,Rc<stappler::xenolith::vk::Buffer> const&,Function<void (const stappler::xenolith::vk::BufferInfo &, stappler::BytesView)>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::vk::Device&
* stappler::xenolith::vk::Loop&
* Rc<stappler::xenolith::vk::Buffer> const&
* Function<void (const stappler::xenolith::vk::BufferInfo &, stappler::BytesView)>&&


# ::stappler::xenolith::vk::TextureSetLayout::writeDefaults(stappler::xenolith::vk::CommandBuffer&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::vk::CommandBuffer&


# ::stappler::xenolith::vk::TextureSetLayout::writeImageTransfer(stappler::xenolith::vk::Device&,stappler::xenolith::vk::CommandBuffer&,uint32_t,Rc<stappler::xenolith::vk::Buffer> const&,Rc<stappler::xenolith::vk::Image> const&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::vk::Device&
* stappler::xenolith::vk::CommandBuffer&
* uint32_t
* Rc<stappler::xenolith::vk::Buffer> const&
* Rc<stappler::xenolith::vk::Image> const&


# ::stappler::xenolith::vk::TextureSetLayout::writeImageRead(stappler::xenolith::vk::Device&,stappler::xenolith::vk::CommandBuffer&,uint32_t,Rc<stappler::xenolith::vk::Image> const&,stappler::xenolith::vk::TextureSetLayout::AttachmentLayout,Rc<stappler::xenolith::vk::Buffer> const&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::vk::Device&
* stappler::xenolith::vk::CommandBuffer&
* uint32_t
* Rc<stappler::xenolith::vk::Image> const&
* stappler::xenolith::vk::TextureSetLayout::AttachmentLayout
* Rc<stappler::xenolith::vk::Buffer> const&


# ::stappler::xenolith::vk::TextureSetLayout::writeBufferRead(stappler::xenolith::vk::Device&,stappler::xenolith::vk::CommandBuffer&,uint32_t,Rc<stappler::xenolith::vk::Buffer> const&,Rc<stappler::xenolith::vk::Buffer> const&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::vk::Device&
* stappler::xenolith::vk::CommandBuffer&
* uint32_t
* Rc<stappler::xenolith::vk::Buffer> const&
* Rc<stappler::xenolith::vk::Buffer> const&


# ::stappler::xenolith::vk::TextureSetLayout::_partiallyBound

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::vk::TextureSetLayout::_imageCount

## BRIEF

## CONTENT

Доступ: protected

Тип: uint32_t


# ::stappler::xenolith::vk::TextureSetLayout::_bufferCount

## BRIEF

## CONTENT

Доступ: protected

Тип: uint32_t


# ::stappler::xenolith::vk::TextureSetLayout::_samplersCount

## BRIEF

## CONTENT

Доступ: protected

Тип: uint32_t


# ::stappler::xenolith::vk::TextureSetLayout::_layout

## BRIEF

## CONTENT

Доступ: protected

Тип: VkDescriptorSetLayout


# ::stappler::xenolith::vk::TextureSetLayout::_emptyImage

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::xenolith::vk::Image>


# ::stappler::xenolith::vk::TextureSetLayout::_emptyImageView

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::xenolith::vk::ImageView>


# ::stappler::xenolith::vk::TextureSetLayout::_solidImage

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::xenolith::vk::Image>


# ::stappler::xenolith::vk::TextureSetLayout::_solidImageView

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::xenolith::vk::ImageView>


# ::stappler::xenolith::vk::TextureSetLayout::_emptyBuffer

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::xenolith::vk::Buffer>


# ::stappler::xenolith::vk::TextureSetLayout::_mutex

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::mem_std::Mutex


# ::stappler::xenolith::vk::TextureSetLayout::_sets

## BRIEF

## CONTENT

Доступ: protected

Тип: Vector<Rc<stappler::xenolith::vk::TextureSet>>


# ::stappler::xenolith::vk::TextureSet

## BRIEF

## CONTENT

Базовые классы:
* core::TextureSet


# ::stappler::xenolith::vk::TextureSet::~TextureSet()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::vk::TextureSet::init(stappler::xenolith::vk::Device&,stappler::xenolith::vk::TextureSetLayout const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::vk::Device&
* stappler::xenolith::vk::TextureSetLayout const&

Возвращает:
* bool

# ::stappler::xenolith::vk::TextureSet::getSet() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* VkDescriptorSet

# ::stappler::xenolith::vk::TextureSet::write(core::MaterialLayout const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* core::MaterialLayout const&


# ::stappler::xenolith::vk::TextureSet::getPendingImageBarriers() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Vector<stappler::xenolith::vk::ImageMemoryBarrier> const&

# ::stappler::xenolith::vk::TextureSet::getPendingBufferBarriers() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Vector<stappler::xenolith::vk::BufferMemoryBarrier> const&

# ::stappler::xenolith::vk::TextureSet::dropPendingBarriers()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::vk::TextureSet::getDevice() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::vk::Device*

# ::stappler::xenolith::vk::TextureSet::writeImages(Vector<VkWriteDescriptorSet>&,core::MaterialLayout const&,std::forward_list<Vector<VkDescriptorImageInfo>>&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* Vector<VkWriteDescriptorSet>&
* core::MaterialLayout const&
* std::forward_list<Vector<VkDescriptorImageInfo>>&


# ::stappler::xenolith::vk::TextureSet::writeBuffers(Vector<VkWriteDescriptorSet>&,core::MaterialLayout const&,std::forward_list<Vector<VkDescriptorBufferInfo>>&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* Vector<VkWriteDescriptorSet>&
* core::MaterialLayout const&
* std::forward_list<Vector<VkDescriptorBufferInfo>>&


# ::stappler::xenolith::vk::TextureSet::_partiallyBound

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::vk::TextureSet::_layout

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::vk::TextureSetLayout const*


# ::stappler::xenolith::vk::TextureSet::_imageCount

## BRIEF

## CONTENT

Доступ: protected

Тип: uint32_t


# ::stappler::xenolith::vk::TextureSet::_bufferCount

## BRIEF

## CONTENT

Доступ: protected

Тип: uint32_t


# ::stappler::xenolith::vk::TextureSet::_set

## BRIEF

## CONTENT

Доступ: protected

Тип: VkDescriptorSet


# ::stappler::xenolith::vk::TextureSet::_pool

## BRIEF

## CONTENT

Доступ: protected

Тип: VkDescriptorPool


# ::stappler::xenolith::vk::TextureSet::_pendingImageBarriers

## BRIEF

## CONTENT

Доступ: protected

Тип: Vector<stappler::xenolith::vk::ImageMemoryBarrier>


# ::stappler::xenolith::vk::TextureSet::_pendingBufferBarriers

## BRIEF

## CONTENT

Доступ: protected

Тип: Vector<stappler::xenolith::vk::BufferMemoryBarrier>
