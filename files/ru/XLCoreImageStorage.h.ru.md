Title: XLCoreImageStorage.h


# XENOLITH_CORE_XLCOREIMAGESTORAGE_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::core::ImageStorage

## BRIEF

## CONTENT

Базовые классы:
* Ref


# ::stappler::xenolith::core::ImageStorage::~ImageStorage()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::ImageStorage::init(Rc<stappler::xenolith::core::ImageObject>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Rc<stappler::xenolith::core::ImageObject>&&

Возвращает:
* bool

# ::stappler::xenolith::core::ImageStorage::isCacheable() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::core::ImageStorage::isSwapchainImage() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::core::ImageStorage::cleanup()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::ImageStorage::rearmSemaphores(stappler::xenolith::core::Loop&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::Loop&


# ::stappler::xenolith::core::ImageStorage::releaseSemaphore(stappler::xenolith::core::Semaphore*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::Semaphore*


# ::stappler::xenolith::core::ImageStorage::invalidate()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::ImageStorage::isReady() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::core::ImageStorage::setReady(bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* bool


# ::stappler::xenolith::core::ImageStorage::waitReady(Function<void (bool)>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Function<void (bool)>&&


# ::stappler::xenolith::core::ImageStorage::isSemaphorePersistent() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::core::ImageStorage::getWaitSem() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Rc<stappler::xenolith::core::Semaphore> const&

# ::stappler::xenolith::core::ImageStorage::getSignalSem() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Rc<stappler::xenolith::core::Semaphore> const&

# ::stappler::xenolith::core::ImageStorage::getImageIndex() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint32_t

# ::stappler::xenolith::core::ImageStorage::getInfo() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::core::ImageInfoData

# ::stappler::xenolith::core::ImageStorage::getImage() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Rc<stappler::xenolith::core::ImageObject>

# ::stappler::xenolith::core::ImageStorage::addView(stappler::xenolith::core::ImageViewInfo const&,Rc<stappler::xenolith::core::ImageView>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::ImageViewInfo const&
* Rc<stappler::xenolith::core::ImageView>&&


# ::stappler::xenolith::core::ImageStorage::getView(stappler::xenolith::core::ImageViewInfo const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::ImageViewInfo const&

Возвращает:
* Rc<stappler::xenolith::core::ImageView>

# ::stappler::xenolith::core::ImageStorage::makeView(stappler::xenolith::core::ImageViewInfo const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::ImageViewInfo const&

Возвращает:
* Rc<stappler::xenolith::core::ImageView>

# ::stappler::xenolith::core::ImageStorage::setLayout(stappler::xenolith::core::AttachmentLayout)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::AttachmentLayout


# ::stappler::xenolith::core::ImageStorage::getLayout() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::core::AttachmentLayout

# ::stappler::xenolith::core::ImageStorage::getViews() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Map<stappler::xenolith::core::ImageViewInfo, Rc<stappler::xenolith::core::ImageView>> const&

# ::stappler::xenolith::core::ImageStorage::setAcquisitionTime(uint64_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint64_t


# ::stappler::xenolith::core::ImageStorage::getAcquisitionTime() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint64_t

# ::stappler::xenolith::core::ImageStorage::setFrameIndex(uint64_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint64_t


# ::stappler::xenolith::core::ImageStorage::getFrameIndex() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint64_t

# ::stappler::xenolith::core::ImageStorage::notifyReady()

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::core::ImageStorage::_acquisitionTime

## BRIEF

## CONTENT

Доступ: protected

Тип: uint64_t


# ::stappler::xenolith::core::ImageStorage::_frameIndex

## BRIEF

## CONTENT

Доступ: protected

Тип: uint64_t


# ::stappler::xenolith::core::ImageStorage::_image

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::xenolith::core::ImageObject>


# ::stappler::xenolith::core::ImageStorage::_waitSem

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::xenolith::core::Semaphore>


# ::stappler::xenolith::core::ImageStorage::_signalSem

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::xenolith::core::Semaphore>


# ::stappler::xenolith::core::ImageStorage::_views

## BRIEF

## CONTENT

Доступ: protected

Тип: Map<stappler::xenolith::core::ImageViewInfo, Rc<stappler::xenolith::core::ImageView>>


# ::stappler::xenolith::core::ImageStorage::_ready

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::core::ImageStorage::_invalid

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::core::ImageStorage::_isSwapchainImage

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::core::ImageStorage::_layout

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::core::AttachmentLayout


# ::stappler::xenolith::core::ImageStorage::_waitReady

## BRIEF

## CONTENT

Доступ: protected

Тип: Vector<Function<void (bool)>>
