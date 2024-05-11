Title: XLCoreImageStorage.h


# XENOLITH_CORE_XLCOREIMAGESTORAGE_H_

## BRIEF

Заголовок типа хранилища изображения

## CONTENT

Заголовок типа хранилища изображения


# ::stappler::xenolith::core::ImageStorage

## BRIEF

Тип хранилища изображения

## CONTENT

Тип хранилища изображения. Тип хранит объект изображения на устройстве и данные, необходимые для работы с ним в движке.

Базовые классы:
* Ref


# ::stappler::xenolith::core::ImageStorage::~ImageStorage()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор


# ::stappler::xenolith::core::ImageStorage::init(Rc<stappler::xenolith::core::ImageObject>&&)

## BRIEF

Создаёт хранимое изображение

## CONTENT

Доступ: public

Создаёт хранимое изображение

Параметры:
* Rc<stappler::xenolith::core::ImageObject>&&

Возвращает:
* bool

# ::stappler::xenolith::core::ImageStorage::isStatic() const

## BRIEF

Проверяет, является ли объект статически хранимым

## CONTENT

Доступ: public

Проверяет, является ли объект статически хранимым

Возвращает:
* bool

# ::stappler::xenolith::core::ImageStorage::isCacheable() const

## BRIEF

Проверяет, можно ли кешировать объект

## CONTENT

Доступ: public

Проверяет, можно ли кешировать объект

Возвращает:
* bool

# ::stappler::xenolith::core::ImageStorage::isSwapchainImage() const

## BRIEF

Проверяет, является ли объект частью цепочки выходных изображений графической подсистемы ОС.

## CONTENT

Доступ: public

Проверяет, является ли объект частью цепочки выходных изображений графической подсистемы ОС.

Возвращает:
* bool

# ::stappler::xenolith::core::ImageStorage::cleanup()

## BRIEF

Удаляет объект и его данные

## CONTENT

Доступ: public

Удаляет объект и его данные


# ::stappler::xenolith::core::ImageStorage::rearmSemaphores(stappler::xenolith::core::Loop&)

## BRIEF

Перезаряжает семафоры доступа

## CONTENT

Доступ: public

Перезаряжает семафоры доступа. В норме - меняет местами семафоры сингала и ожидания. В случае ошибки - получает новые семафоры.

Параметры:
* stappler::xenolith::core::Loop&


# ::stappler::xenolith::core::ImageStorage::releaseSemaphore(stappler::xenolith::core::Semaphore*)

## BRIEF

Освобождает семафор

## CONTENT

Доступ: public

Освобождает семафор


Параметры:
* stappler::xenolith::core::Semaphore*


# ::stappler::xenolith::core::ImageStorage::invalidate()

## BRIEF

Помечает изображение как ошибочное

## CONTENT

Доступ: public

Помечает изображение как ошибочное


# ::stappler::xenolith::core::ImageStorage::isReady() const

## BRIEF

Проверяет, готово ли изобрадение к использованию

## CONTENT

Доступ: public

Проверяет, готово ли изобрадение к использованию

Возвращает:
* bool

# ::stappler::xenolith::core::ImageStorage::setReady(bool)

## BRIEF

Устаналвивает статус готовности

## CONTENT

Доступ: public

Устаналвивает статус готовности

Параметры:
* bool


# ::stappler::xenolith::core::ImageStorage::waitReady(Function<void (bool)>&&)

## BRIEF

Асинхронно ожидает готовности

## CONTENT

Доступ: public

Асинхронно ожидает готовности

Параметры:
* Function<void (bool)>&&


# ::stappler::xenolith::core::ImageStorage::isSemaphorePersistent() const

## BRIEF

Проверяет, хранятся ли семафоры доступа в самом объекте

## CONTENT

Доступ: public

Проверяет, хранятся ли семафоры доступа в самом объекте

Возвращает:
* bool

# ::stappler::xenolith::core::ImageStorage::getWaitSem() const

## BRIEF

Получает семафор для ожидания доступа к объекту

## CONTENT

Доступ: public

Получает семафор для ожидания доступа к объекту

Возвращает:
* Rc<stappler::xenolith::core::Semaphore> const&

# ::stappler::xenolith::core::ImageStorage::getSignalSem() const

## BRIEF

Получает семафор для сигнала о готовности объекта

## CONTENT

Доступ: public

Получает семафор для сигнала о готовности объекта

Возвращает:
* Rc<stappler::xenolith::core::Semaphore> const&

# ::stappler::xenolith::core::ImageStorage::getImageIndex() const

## BRIEF

Получает индекс изображения

## CONTENT

Доступ: public

Получает индекс изображения. Обычно - индекс в цепочке вывода или 0.

Возвращает:
* uint32_t

# ::stappler::xenolith::core::ImageStorage::getInfo() const

## BRIEF

Возвращает параметры изображения

## CONTENT

Доступ: public

Возвращает параметры изображения

Возвращает:
* stappler::xenolith::core::ImageInfoData

# ::stappler::xenolith::core::ImageStorage::getImage() const

## BRIEF

Получает объект изображения

## CONTENT

Доступ: public

Получает объект изображения

Возвращает:
* Rc<stappler::xenolith::core::ImageObject>

# ::stappler::xenolith::core::ImageStorage::addView(stappler::xenolith::core::ImageViewInfo const&,Rc<stappler::xenolith::core::ImageView>&&)

## BRIEF

Добавляет отображение для изображения

## CONTENT

Доступ: public

Добавляет отображение для изображения

Параметры:
* stappler::xenolith::core::ImageViewInfo const&
* Rc<stappler::xenolith::core::ImageView>&&


# ::stappler::xenolith::core::ImageStorage::getView(stappler::xenolith::core::ImageViewInfo const&) const

## BRIEF

Получает отображение для изображения, если установлено

## CONTENT

Доступ: public

Получает отображение для изображения, если установлено для заданных параметров

Параметры:
* stappler::xenolith::core::ImageViewInfo const&

Возвращает:
* Rc<stappler::xenolith::core::ImageView>

# ::stappler::xenolith::core::ImageStorage::makeView(stappler::xenolith::core::ImageViewInfo const&)

## BRIEF

Создаёт отображение для изображения по параметрам

## CONTENT

Доступ: public

Создаёт отображение для изображения по параметрам

Параметры:
* stappler::xenolith::core::ImageViewInfo const&

Возвращает:
* Rc<stappler::xenolith::core::ImageView>

# ::stappler::xenolith::core::ImageStorage::setLayout(stappler::xenolith::core::AttachmentLayout)

## BRIEF

Устанавливает текущую известную укладку изображения в памяти

## CONTENT

Доступ: public

Устанавливает текущую известную укладку изображения в памяти

Параметры:
* stappler::xenolith::core::AttachmentLayout


# ::stappler::xenolith::core::ImageStorage::getLayout() const

## BRIEF

Возвращает текущую известную укладку изображения в памяти

## CONTENT

Доступ: public

Возвращает текущую известную укладку изображения в памяти

Возвращает:
* stappler::xenolith::core::AttachmentLayout

# ::stappler::xenolith::core::ImageStorage::getViews() const

## BRIEF

Возвращает известные отображения

## CONTENT

Доступ: public

Возвращает известные отображения

Возвращает:
* Map<stappler::xenolith::core::ImageViewInfo, Rc<stappler::xenolith::core::ImageView>> const&

# ::stappler::xenolith::core::ImageStorage::setAcquisitionTime(uint64_t)

## BRIEF

Устанавливает время последнего доступа

## CONTENT

Доступ: public

Устанавливает время последнего доступа

Параметры:
* uint64_t


# ::stappler::xenolith::core::ImageStorage::getAcquisitionTime() const

## BRIEF

Получает время последнего доступа

## CONTENT

Доступ: public

Получает время последнего доступа

Возвращает:
* uint64_t

# ::stappler::xenolith::core::ImageStorage::setFrameIndex(uint64_t)

## BRIEF

Устанавливает порядковый номер кадра, который владеет обектом

## CONTENT

Доступ: public

Устанавливает порядковый номер кадра, который владеет обектом

Параметры:
* uint64_t


# ::stappler::xenolith::core::ImageStorage::getFrameIndex() const

## BRIEF

Возвращает порядковый номер кадра, который владеет обектом

## CONTENT

Доступ: public

Возвращает порядковый номер кадра, который владеет обектом

Возвращает:
* uint64_t

# ::stappler::xenolith::core::ImageStorage::notifyReady()

## BRIEF

Уведомляет о готовности объекта

## CONTENT

Доступ: protected

Уведомляет о готовности объекта

# ::stappler::xenolith::core::ImageStorage::_acquisitionTime

## BRIEF

Последнее время доступа

## CONTENT

Доступ: protected

Последнее время доступа

Тип: uint64_t


# ::stappler::xenolith::core::ImageStorage::_frameIndex

## BRIEF

Порядковый номер кадра

## CONTENT

Доступ: protected

Порядковый номер кадра

Тип: uint64_t


# ::stappler::xenolith::core::ImageStorage::_image

## BRIEF

Изображение

## CONTENT

Доступ: protected

Изображение

Тип: Rc<stappler::xenolith::core::ImageObject>


# ::stappler::xenolith::core::ImageStorage::_waitSem

## BRIEF

Семафор ожидания

## CONTENT

Доступ: protected

Семафор ожидания

Тип: Rc<stappler::xenolith::core::Semaphore>


# ::stappler::xenolith::core::ImageStorage::_signalSem

## BRIEF

Семафор сигнала

## CONTENT

Доступ: protected

Семафор сигнала

Тип: Rc<stappler::xenolith::core::Semaphore>


# ::stappler::xenolith::core::ImageStorage::_views

## BRIEF

Отображения

## CONTENT

Доступ: protected

Отображения

Тип: Map<stappler::xenolith::core::ImageViewInfo, Rc<stappler::xenolith::core::ImageView>>


# ::stappler::xenolith::core::ImageStorage::_ready

## BRIEF

Готовность

## CONTENT

Доступ: protected

Готовность

Тип: bool


# ::stappler::xenolith::core::ImageStorage::_invalid

## BRIEF

Отметка об ошибке

## CONTENT

Доступ: protected

Отметка об ошибке

Тип: bool


# ::stappler::xenolith::core::ImageStorage::_isSwapchainImage

## BRIEF

Флаг отношения к цепочке вывода

## CONTENT

Доступ: protected

Флаг отношения к цепочке вывода

Тип: bool


# ::stappler::xenolith::core::ImageStorage::_layout

## BRIEF

Текущая укладка

## CONTENT

Доступ: protected

Текущая укладка

Тип: stappler::xenolith::core::AttachmentLayout


# ::stappler::xenolith::core::ImageStorage::_waitReady

## BRIEF

Ожидатели готовности

## CONTENT

Доступ: protected

Ожидатели готовности

Тип: Vector<Function<void (bool)>>
