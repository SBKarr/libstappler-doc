Title: XLCoreFrameCache.h


# XENOLITH_CORE_XLCOREFRAMECACHE_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::core::FrameCacheFramebuffer

## BRIEF

## CONTENT


# ::stappler::xenolith::core::FrameCacheFramebuffer::framebuffers

## BRIEF

## CONTENT

Тип: Vector<Rc<stappler::xenolith::core::Framebuffer>>


# ::stappler::xenolith::core::FrameCacheFramebuffer::extent

## BRIEF

## CONTENT

Тип: stappler::xenolith::Extent3


# ::stappler::xenolith::core::FrameCacheImageAttachment

## BRIEF

## CONTENT


# ::stappler::xenolith::core::FrameCacheImageAttachment::refCount

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::xenolith::core::FrameCacheImageAttachment::images

## BRIEF

## CONTENT

Тип: Vector<Rc<stappler::xenolith::core::ImageStorage>>


# ::stappler::xenolith::core::FrameCache

## BRIEF

## CONTENT

Базовые классы:
* Ref


# ::stappler::xenolith::core::FrameCache::~FrameCache()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::FrameCache::init(stappler::xenolith::core::Loop&,stappler::xenolith::core::Device&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::Loop&
* stappler::xenolith::core::Device&

Возвращает:
* bool

# ::stappler::xenolith::core::FrameCache::invalidate()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::FrameCache::acquireFramebuffer(stappler::xenolith::core::QueuePassData const*,SpanView<Rc<stappler::xenolith::core::ImageView>>)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::QueuePassData const*
* SpanView<Rc<stappler::xenolith::core::ImageView>>

Возвращает:
* Rc<stappler::xenolith::core::Framebuffer>

# ::stappler::xenolith::core::FrameCache::releaseFramebuffer(Rc<stappler::xenolith::core::Framebuffer>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Rc<stappler::xenolith::core::Framebuffer>&&


# ::stappler::xenolith::core::FrameCache::acquireImage(uint64_t,stappler::xenolith::core::ImageInfoData const&,SpanView<stappler::xenolith::core::ImageViewInfo>)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint64_t
* stappler::xenolith::core::ImageInfoData const&
* SpanView<stappler::xenolith::core::ImageViewInfo>

Возвращает:
* Rc<stappler::xenolith::core::ImageStorage>

# ::stappler::xenolith::core::FrameCache::releaseImage(Rc<stappler::xenolith::core::ImageStorage>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Rc<stappler::xenolith::core::ImageStorage>&&


# ::stappler::xenolith::core::FrameCache::addImageView(uint64_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint64_t


# ::stappler::xenolith::core::FrameCache::removeImageView(uint64_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint64_t


# ::stappler::xenolith::core::FrameCache::addRenderPass(uint64_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint64_t


# ::stappler::xenolith::core::FrameCache::removeRenderPass(uint64_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint64_t


# ::stappler::xenolith::core::FrameCache::addAttachment(uint64_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint64_t


# ::stappler::xenolith::core::FrameCache::removeAttachment(uint64_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint64_t


# ::stappler::xenolith::core::FrameCache::removeUnreachableFramebuffers()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::FrameCache::getFramebuffersCount() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* size_t

# ::stappler::xenolith::core::FrameCache::getImagesCount() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* size_t

# ::stappler::xenolith::core::FrameCache::getImageViewsCount() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* size_t

# ::stappler::xenolith::core::FrameCache::clear()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::FrameCache::freeze()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::FrameCache::unfreeze()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::FrameCache::isReachable(SpanView<uint64_t>) const

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* SpanView<uint64_t>

Возвращает:
* bool

# ::stappler::xenolith::core::FrameCache::isReachable(stappler::xenolith::core::ImageInfoData const&) const

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::core::ImageInfoData const&

Возвращает:
* bool

# ::stappler::xenolith::core::FrameCache::addImage(stappler::xenolith::core::ImageInfoData const&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::core::ImageInfoData const&

Возвращает:
* stappler::xenolith::core::ImageInfoData const*

# ::stappler::xenolith::core::FrameCache::removeImage(stappler::xenolith::core::ImageInfoData const&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::core::ImageInfoData const&


# ::stappler::xenolith::core::FrameCache::makeViews(Rc<stappler::xenolith::core::ImageStorage> const&,SpanView<stappler::xenolith::core::ImageViewInfo>)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* Rc<stappler::xenolith::core::ImageStorage> const&
* SpanView<stappler::xenolith::core::ImageViewInfo>


# ::stappler::xenolith::core::FrameCache::_loop

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::core::Loop*


# ::stappler::xenolith::core::FrameCache::_device

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::core::Device*


# ::stappler::xenolith::core::FrameCache::_images

## BRIEF

## CONTENT

Доступ: protected

Тип: Map<stappler::xenolith::core::ImageInfoData, stappler::xenolith::core::FrameCacheImageAttachment>


# ::stappler::xenolith::core::FrameCache::_framebuffers

## BRIEF

## CONTENT

Доступ: protected

Тип: Map<Vector<uint64_t>, stappler::xenolith::core::FrameCacheFramebuffer>


# ::stappler::xenolith::core::FrameCache::_imageViews

## BRIEF

## CONTENT

Доступ: protected

Тип: Set<uint64_t>


# ::stappler::xenolith::core::FrameCache::_renderPasses

## BRIEF

## CONTENT

Доступ: protected

Тип: Set<uint64_t>


# ::stappler::xenolith::core::FrameCache::_attachments

## BRIEF

## CONTENT

Доступ: protected

Тип: Map<uint64_t, const stappler::xenolith::core::ImageInfoData *>


# ::stappler::xenolith::core::FrameCache::_freezed

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::core::FrameCache::_autorelease

## BRIEF

## CONTENT

Доступ: protected

Тип: Vector<Rc<stappler::mem_std::Ref>>
