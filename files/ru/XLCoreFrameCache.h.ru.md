Title: XLCoreFrameCache.h


# XENOLITH_CORE_XLCOREFRAMECACHE_H_

## BRIEF

Заголовок кеша кадра

## CONTENT

Заголовок кеша кадра


# ::stappler::xenolith::core::FrameCacheFramebuffer

## BRIEF

Тип фреймбуфера в кеше

## CONTENT

Тип фреймбуфера в кеше


# ::stappler::xenolith::core::FrameCacheFramebuffer::framebuffers

## BRIEF

Фреймбуферы

## CONTENT

Фреймбуферы

Тип: Vector<Rc<stappler::xenolith::core::Framebuffer>>


# ::stappler::xenolith::core::FrameCacheFramebuffer::extent

## BRIEF

Размер фреймбуфера для слота кеша

## CONTENT

Размер фреймбуфера для слота кеша

Тип: stappler::geom::Extent3


# ::stappler::xenolith::core::FrameCacheImageAttachment

## BRIEF

Кеш изображений

## CONTENT

Кеш изображений


# ::stappler::xenolith::core::FrameCacheImageAttachment::refCount

## BRIEF

Число ссылок

## CONTENT

Число ссылок

Тип: uint32_t


# ::stappler::xenolith::core::FrameCacheImageAttachment::images

## BRIEF

Хранимые изображения

## CONTENT

Хранимые изображения

Тип: Vector<Rc<stappler::xenolith::core::ImageStorage>>


# ::stappler::xenolith::core::FrameCache

## BRIEF

Тип кеша кадра

## CONTENT

Тип кеша кадра. Кеш кадра хранит использованные ранее фреймбуферы, изображения и их отображения. Кешируемые фреймбуферы и изображения определяются динамически в зависимости от загруженных очередей исполнения и последнего состояния этих очередей. Если параметры исполнения очереди изменяются, её кеши будут отброшены.

Базовые классы:
* Ref


# ::stappler::xenolith::core::FrameCache::~FrameCache()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор


# ::stappler::xenolith::core::FrameCache::init(stappler::xenolith::core::Loop&,stappler::xenolith::core::Device&)

## BRIEF

Создаёт кеш

## CONTENT

Доступ: public

Создаёт кеш

Параметры:
* stappler::xenolith::core::Loop&
* stappler::xenolith::core::Device&

Возвращает:
* bool

# ::stappler::xenolith::core::FrameCache::invalidate()

## BRIEF

Удаляет кеш

## CONTENT

Доступ: public

Удаляет кеш


# ::stappler::xenolith::core::FrameCache::acquireFramebuffer(stappler::xenolith::core::QueuePassData const*,SpanView<Rc<stappler::xenolith::core::ImageView>>)

## BRIEF

Запрашивает фреймбуфер из кеша

## CONTENT

Доступ: public

Запрашивает фреймбуфер из кеша

Параметры:
* stappler::xenolith::core::QueuePassData const*
* SpanView<Rc<stappler::xenolith::core::ImageView>>

Возвращает:
* Rc<stappler::xenolith::core::Framebuffer>

# ::stappler::xenolith::core::FrameCache::releaseFramebuffer(Rc<stappler::xenolith::core::Framebuffer>&&)

## BRIEF

Возвращает фреймбуфер в кеш

## CONTENT

Доступ: public

Возвращает фреймбуфер в кеш

Параметры:
* Rc<stappler::xenolith::core::Framebuffer>&&


# ::stappler::xenolith::core::FrameCache::acquireImage(uint64_t,stappler::xenolith::core::ImageInfoData const&,SpanView<stappler::xenolith::core::ImageViewInfo>)

## BRIEF

Запрашивает изображение из кеша

## CONTENT

Доступ: public

Запрашивает изображение из кеша

Параметры:
* uint64_t
* stappler::xenolith::core::ImageInfoData const&
* SpanView<stappler::xenolith::core::ImageViewInfo>

Возвращает:
* Rc<stappler::xenolith::core::ImageStorage>

# ::stappler::xenolith::core::FrameCache::releaseImage(Rc<stappler::xenolith::core::ImageStorage>&&)

## BRIEF

Возвращает изображение в кеш

## CONTENT

Доступ: public

Возвращает изображение в кеш

Параметры:
* Rc<stappler::xenolith::core::ImageStorage>&&


# ::stappler::xenolith::core::FrameCache::addImageView(uint64_t)

## BRIEF

Добавляет отслеживаемое отображение

## CONTENT

Доступ: public

Добавляет отслеживаемое отображение

Параметры:
* uint64_t


# ::stappler::xenolith::core::FrameCache::removeImageView(uint64_t)

## BRIEF

Удаляет отслеживаемое отображение

## CONTENT

Доступ: public

Удаляет отслеживаемое отображение

Параметры:
* uint64_t


# ::stappler::xenolith::core::FrameCache::addRenderPass(uint64_t)

## BRIEF

Добавляет отслеживаемый проход

## CONTENT

Доступ: public

Добавляет отслеживаемый проход

Параметры:
* uint64_t


# ::stappler::xenolith::core::FrameCache::removeRenderPass(uint64_t)

## BRIEF

Удаляет отслеживаемый проход

## CONTENT

Доступ: public

Удаляет отслеживаемый проход

Параметры:
* uint64_t


# ::stappler::xenolith::core::FrameCache::addAttachment(uint64_t)

## BRIEF

Добавляет отслеживаемое вложение

## CONTENT

Доступ: public

Добавляет отслеживаемое вложение

Параметры:
* uint64_t


# ::stappler::xenolith::core::FrameCache::removeAttachment(uint64_t)

## BRIEF

Удаляет отслеживаемое вложение

## CONTENT

Доступ: public

Удаляет отслеживаемое вложение

Параметры:
* uint64_t


# ::stappler::xenolith::core::FrameCache::removeUnreachableFramebuffers()

## BRIEF

Удаляет фреймбуферы, которые не могут использоваться в текущей конфигурации

## CONTENT

Доступ: public

Удаляет фреймбуферы, которые не могут использоваться в текущей конфигурации


# ::stappler::xenolith::core::FrameCache::getFramebuffersCount() const

## BRIEF

Возвращает число хранимых фреймбуферов

## CONTENT

Доступ: public

Возвращает число хранимых фреймбуферов

Возвращает:
* size_t

# ::stappler::xenolith::core::FrameCache::getImagesCount() const

## BRIEF

Возвращает число хранимых изображений

## CONTENT

Доступ: public

Возвращает число хранимых изображений

Возвращает:
* size_t

# ::stappler::xenolith::core::FrameCache::getImageViewsCount() const

## BRIEF

Возвращает число хранимых отображений

## CONTENT

Доступ: public

Возвращает число хранимых отображений

Возвращает:
* size_t

# ::stappler::xenolith::core::FrameCache::clear()

## BRIEF

Очищает кеш

## CONTENT

Доступ: public

Очищает кеш

# ::stappler::xenolith::core::FrameCache::freeze()

## BRIEF

Замораживает состояние кеша

## CONTENT

Доступ: public

Замораживает состояние кеша. Замороженный кеш не отслеживает изменения параметров отслеживаемых объектов


# ::stappler::xenolith::core::FrameCache::unfreeze()

## BRIEF

Размораживает кеш

## CONTENT

Доступ: public

Размораживает кеш


# ::stappler::xenolith::core::FrameCache::isReachable(SpanView<uint64_t>) const

## BRIEF

Проверяет вектор параметров на доступность для кеша

## CONTENT

Доступ: protected

Проверяет вектор параметров на доступность для кеша

Параметры:
* SpanView<uint64_t>

Возвращает:
* bool

# ::stappler::xenolith::core::FrameCache::isReachable(stappler::xenolith::core::ImageInfoData const&) const

## BRIEF

Проверяет изображение на возможность кеширования

## CONTENT

Доступ: protected

Проверяет изображение на возможность кеширования

Параметры:
* stappler::xenolith::core::ImageInfoData const&

Возвращает:
* bool

# ::stappler::xenolith::core::FrameCache::addImage(stappler::xenolith::core::ImageInfoData const&)

## BRIEF

Добавляет изображение в кеш

## CONTENT

Доступ: protected

Добавляет изображение в кеш

Параметры:
* stappler::xenolith::core::ImageInfoData const&

Возвращает:
* stappler::xenolith::core::ImageInfoData const*

# ::stappler::xenolith::core::FrameCache::removeImage(stappler::xenolith::core::ImageInfoData const&)

## BRIEF

Удаляет изображение из кеша

## CONTENT

Доступ: protected

Удаляет изображение из кеша

Параметры:
* stappler::xenolith::core::ImageInfoData const&


# ::stappler::xenolith::core::FrameCache::makeViews(Rc<stappler::xenolith::core::ImageStorage> const&,SpanView<stappler::xenolith::core::ImageViewInfo>)

## BRIEF

Создаёт отображения

## CONTENT

Доступ: protected

Создаёт отображения

Параметры:
* Rc<stappler::xenolith::core::ImageStorage> const&
* SpanView<stappler::xenolith::core::ImageViewInfo>


# ::stappler::xenolith::core::FrameCache::_loop

## BRIEF

Графический цикл

## CONTENT

Доступ: protected

Графический цикл

Тип: stappler::xenolith::core::Loop*


# ::stappler::xenolith::core::FrameCache::_device

## BRIEF

Устройство

## CONTENT

Доступ: protected

Устройство

Тип: stappler::xenolith::core::Device*


# ::stappler::xenolith::core::FrameCache::_images

## BRIEF

Изображения

## CONTENT

Доступ: protected

Изображения

Тип: Map<stappler::xenolith::core::ImageInfoData, stappler::xenolith::core::FrameCacheImageAttachment>


# ::stappler::xenolith::core::FrameCache::_framebuffers

## BRIEF

Фреймбуферы

## CONTENT

Доступ: protected

Фреймбуферы

Тип: Map<Vector<uint64_t>, stappler::xenolith::core::FrameCacheFramebuffer>


# ::stappler::xenolith::core::FrameCache::_imageViews

## BRIEF

Отображения

## CONTENT

Доступ: protected

Отображения

Тип: Set<uint64_t>


# ::stappler::xenolith::core::FrameCache::_renderPasses

## BRIEF

Проходы

## CONTENT

Доступ: protected

Проходы

Тип: Set<uint64_t>


# ::stappler::xenolith::core::FrameCache::_attachments

## BRIEF

Вложения

## CONTENT

Доступ: protected

Вложения

Тип: Map<uint64_t, const stappler::xenolith::core::ImageInfoData *>


# ::stappler::xenolith::core::FrameCache::_freezed

## BRIEF

Флаг заморожки

## CONTENT

Доступ: protected

Флаг заморожки

Тип: bool


# ::stappler::xenolith::core::FrameCache::_autorelease

## BRIEF

Список объектов для освобождения перед следующим тактом

## CONTENT

Доступ: protected

Список объектов для освобождения перед следующим тактом

Тип: Vector<Rc<stappler::mem_std::Ref>>
