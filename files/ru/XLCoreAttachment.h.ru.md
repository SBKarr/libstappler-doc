Title: XLCoreAttachment.h


# XENOLITH_CORE_XLCOREATTACHMENT_H_

## BRIEF

Заголовок типов вложений для очереди рендеринга

## CONTENT

Заголовок типов вложений для очереди рендеринга


# ::stappler::xenolith::core::DependencyEvent

## BRIEF

Тип зависимости от свершившегося события

## CONTENT

Тип зависимости от свершившегося события. Используется для сигнала о событиии и ожидания этого события в построении очереди рендеринга.

Событие может завершиться успешно, и ожидающая очередь продолжит работу, либо неуспешно, и ожидающая очередь завершит кадр с ошибкой.

Для успешного завершения события каждая добавленная очередь должна сигнализировть о событии.

Базовые классы:
* Ref


# ::stappler::xenolith::core::DependencyEvent::QueueSet

## BRIEF

Тип набора очередей

## CONTENT

Доступ: public

Тип набора очередей


# ::stappler::xenolith::core::DependencyEvent::GetNextId()

## BRIEF

Возвращает следующий доступный идентификатор

## CONTENT

Доступ: public

Возвращает следующий доступный идентификатор

Возвращает:
* uint32_t

# ::stappler::xenolith::core::DependencyEvent::~DependencyEvent()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор


# ::stappler::xenolith::core::DependencyEvent::DependencyEvent(stappler::xenolith::core::DependencyEvent::QueueSet&&)

## BRIEF

Конструктор

## CONTENT

Доступ: public

Конструктор

Параметры:
* stappler::xenolith::core::DependencyEvent::QueueSet&& - набор очередей, в которых можно использовать зависимость


# ::stappler::xenolith::core::DependencyEvent::DependencyEvent(InitializerList<Rc<stappler::xenolith::core::Queue>>&&)

## BRIEF

Конструктор

## CONTENT

Доступ: public

Конструктор

Параметры:
* InitializerList<Rc<stappler::xenolith::core::Queue>>&& - набор очередей, в которых можно использовать зависимость


# ::stappler::xenolith::core::DependencyEvent::getId() const

## BRIEF

Возаращает идентификатор зависимости

## CONTENT

Доступ: public

Возаращает идентификатор зависимости

Возвращает:
* uint32_t

# ::stappler::xenolith::core::DependencyEvent::signal(stappler::xenolith::core::Queue*,bool)

## BRIEF

Сигнализирует о свершении ожидаемого события

## CONTENT

Доступ: public

Сигнализирует о свершении ожидаемого события

Параметры:
* stappler::xenolith::core::Queue* - сигналящая очередь
* bool - true если событие завершилось успешно.

Возвращает:
* bool - true если зависимость исполнена в результате сигнала

# ::stappler::xenolith::core::DependencyEvent::isSignaled() const

## BRIEF

Проверяет, исполнено ли событие

## CONTENT

Доступ: public

Проверяет, исполнено ли событие

Возвращает:
* bool

# ::stappler::xenolith::core::DependencyEvent::isSuccessful() const

## BRIEF

Проверяет, успешно ли завершено соыбтие

## CONTENT

Доступ: public

Проверяет, успешно ли завершено соыбтие

Возвращает:
* bool

# ::stappler::xenolith::core::DependencyEvent::addQueue(Rc<stappler::xenolith::core::Queue>&&)

## BRIEF

Добавляет очередь для сигнала

## CONTENT

Доступ: public

Добавляет очередь для сигнала

Параметры:
* Rc<stappler::xenolith::core::Queue>&&


# ::stappler::xenolith::core::DependencyEvent::_id

## BRIEF

Идентификатор

## CONTENT

Доступ: protected

Идентификатор

Тип: uint32_t


# ::stappler::xenolith::core::DependencyEvent::_tag

## BRIEF

Тег

## CONTENT

Доступ: protected

Тег

Тип: stappler::StringView


# ::stappler::xenolith::core::DependencyEvent::_clock

## BRIEF

Время инициализации зависимости

## CONTENT

Доступ: protected

Время инициализации зависимости

Тип: uint64_t


# ::stappler::xenolith::core::DependencyEvent::_queues

## BRIEF

Очереди для сигнала

## CONTENT

Доступ: protected

Очереди для сигнала

Тип: QueueSet


# ::stappler::xenolith::core::DependencyEvent::_success

## BRIEF

Флаг успешности

## CONTENT

Доступ: protected

Флаг успешности

Тип: bool


# ::stappler::xenolith::core::AttachmentInputData

## BRIEF

Базовый класс для входящих данных вложения

## CONTENT

Базовый класс для входящих данных вложения

Базовые классы:
* Ref


# ::stappler::xenolith::core::AttachmentInputData::~AttachmentInputData()

## BRIEF

Деструктор

## CONTENT

Деструктор

# ::stappler::xenolith::core::AttachmentInputData::waitDependencies

## BRIEF

События, которые должно ожидать вложение

## CONTENT

События, которые должно ожидать вложение

Тип: Vector<Rc<stappler::xenolith::core::DependencyEvent>>


# ::stappler::xenolith::core::Attachment

## BRIEF

Базовый тип вложения

## CONTENT

Базовый тип вложения

Базовые классы:
* NamedRef


# ::stappler::xenolith::core::Attachment::FrameQueue

## BRIEF

Тип очереди кадра

## CONTENT

Доступ: public

Тип очереди кадра


# ::stappler::xenolith::core::Attachment::RenderQueue

## BRIEF

Тип очереди рендеринга

## CONTENT

Доступ: public

Тип очереди рендеринга

# ::stappler::xenolith::core::Attachment::PassData

## BRIEF

Тип прохода очереди

## CONTENT

Доступ: public

Тип прохода очереди


# ::stappler::xenolith::core::Attachment::AttachmentData

## BRIEF

Тип данных вложения

## CONTENT

Доступ: public

Тип данных вложения


# ::stappler::xenolith::core::Attachment::AttachmentHandle

## BRIEF

Тип интерфейса вложения

## CONTENT

Доступ: public

Тип интерфейса вложения


# ::stappler::xenolith::core::Attachment::AttachmentBuilder

## BRIEF

Тип сборки вложения

## CONTENT

Доступ: public

Тип сборки вложения


# ::stappler::xenolith::core::Attachment::InputCallback

## BRIEF

Функция для получения входящих данных

## CONTENT

Доступ: public

Функция для получения входящих данных


# ::stappler::xenolith::core::Attachment::FrameHandleCallback

## BRIEF

Функция создания интерфейса кадра для вложения

## CONTENT

Доступ: public

Функция создания интерфейса кадра для вложения


# ::stappler::xenolith::core::Attachment::ValidateInputCallback

## BRIEF

Функция проверки допустимости входящих данных

## CONTENT

Доступ: public

Функция проверки допустимости входящих данных


# ::stappler::xenolith::core::Attachment::~Attachment()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор


# ::stappler::xenolith::core::Attachment::init(stappler::xenolith::core::Attachment::AttachmentBuilder&)

## BRIEF

Создаёт вложение из сборщика

## CONTENT

Доступ: public

Создаёт вложение из сборщика

Параметры:
* stappler::xenolith::core::Attachment::AttachmentBuilder&

Возвращает:
* bool

# ::stappler::xenolith::core::Attachment::clear()

## BRIEF

Очищает статические данные вложения

## CONTENT

Доступ: public

Очищает статические данные вложения

# ::stappler::xenolith::core::Attachment::getName() const

## BRIEF

Возвращает имя вложения

## CONTENT

Доступ: public

Возвращает имя вложения

Возвращает:
* stappler::StringView

# ::stappler::xenolith::core::Attachment::getId() const

## BRIEF

Возвращает иденификатор

## CONTENT

Доступ: public

Возвращает иденификатор

Возвращает:
* uint64_t

# ::stappler::xenolith::core::Attachment::getUsage() const

## BRIEF

Возвращает способ использования

## CONTENT

Доступ: public

Возвращает способ использования

Возвращает:
* stappler::xenolith::core::AttachmentUsage

# ::stappler::xenolith::core::Attachment::isTransient() const

## BRIEF

Проверяет, является ли вложение проходным

## CONTENT

Доступ: public

Проверяет, является ли вложение проходным. Проходное вложение испльзуется только внутри исполнения очереди и не имеет внешних интерфейсов.

Возвращает:
* bool

# ::stappler::xenolith::core::Attachment::setInputCallback(stappler::xenolith::core::Attachment::InputCallback&&)

## BRIEF

Устанавливает фукнцию получения входящих данных

## CONTENT

Доступ: public

Устанавливает фукнцию получения входящих данных

Параметры:
* stappler::xenolith::core::Attachment::InputCallback&&


# ::stappler::xenolith::core::Attachment::setValidateInputCallback(stappler::xenolith::core::Attachment::ValidateInputCallback&&)

## BRIEF

Устанавливает функцию првоерки входящих данных

## CONTENT

Доступ: public

Устанавливает функцию првоерки входящих данных

Параметры:
* stappler::xenolith::core::Attachment::ValidateInputCallback&&


# ::stappler::xenolith::core::Attachment::setFrameHandleCallback(stappler::xenolith::core::Attachment::FrameHandleCallback&&)

## BRIEF

Устанавливает функцию создания интерфейса кадра

## CONTENT

Доступ: public

Устанавливает функцию создания интерфейса кадра

Параметры:
* stappler::xenolith::core::Attachment::FrameHandleCallback&&


# ::stappler::xenolith::core::Attachment::acquireInput(stappler::xenolith::core::Attachment::FrameQueue&,Rc<stappler::xenolith::core::Attachment::AttachmentHandle> const&,Function<void (bool)>&&)

## BRIEF

Запрашивает входящие данные, если они не были предоставлены

## CONTENT

Доступ: public

Запрашивает входящие данные, если они не были предоставлены

Параметры:
* stappler::xenolith::core::Attachment::FrameQueue&
* Rc<stappler::xenolith::core::Attachment::AttachmentHandle> const&
* Function<void (bool)>&& - функция, сигнализирующая о том, что данные получены


# ::stappler::xenolith::core::Attachment::validateInput(Rc<stappler::xenolith::core::AttachmentInputData> const&) const

## BRIEF

Проверяет данные на допустимость

## CONTENT

Доступ: public

Проверяет данные на допустимость

Параметры:
* Rc<stappler::xenolith::core::AttachmentInputData> const&

Возвращает:
* bool

# ::stappler::xenolith::core::Attachment::isCompatible(stappler::xenolith::core::ImageInfo const&) const

## BRIEF

Проверяет, совместимо ли изображение с вложением

## CONTENT

Доступ: public

Проверяет, совместимо ли изображение с вложением

Параметры:
* stappler::xenolith::core::ImageInfo const&

Возвращает:
* bool

# ::stappler::xenolith::core::Attachment::makeFrameHandle(stappler::xenolith::core::Attachment::FrameQueue const&)

## BRIEF

Создаёт интерфейс кадра для вложения

## CONTENT

Доступ: public

Создаёт интерфейс кадра для вложения

Параметры:
* stappler::xenolith::core::Attachment::FrameQueue const&

Возвращает:
* Rc<stappler::xenolith::core::Attachment::AttachmentHandle>

# ::stappler::xenolith::core::Attachment::getRenderPasses() const

## BRIEF

Возвращает проходы, на которых используется вложение

## CONTENT

Доступ: public

Возвращает проходы, на которых используется вложение

Возвращает:
* Vector<const stappler::xenolith::core::Attachment::PassData *>

# ::stappler::xenolith::core::Attachment::getFirstRenderPass() const

## BRIEF

Возвращает первыый проход вложения

## CONTENT

Доступ: public

Возвращает первыый проход вложения

Возвращает:
* PassData*

# ::stappler::xenolith::core::Attachment::getLastRenderPass() const

## BRIEF

Возвращает последний проход вложения

## CONTENT

Доступ: public

Возвращает последний проход вложения

Возвращает:
* PassData*

# ::stappler::xenolith::core::Attachment::getNextRenderPass(stappler::xenolith::core::Attachment::PassData const*) const

## BRIEF

Возвращает следующий проход для вложения

## CONTENT

Доступ: public

Возвращает следующий проход для вложения

Параметры:
* stappler::xenolith::core::Attachment::PassData const* - текущий проход

Возвращает:
* PassData*

# ::stappler::xenolith::core::Attachment::getPrevRenderPass(stappler::xenolith::core::Attachment::PassData const*) const

## BRIEF

Возвращает предыдущий проход для вложения

## CONTENT

Доступ: public

Возвращает предыдущий проход для вложения

Параметры:
* stappler::xenolith::core::Attachment::PassData const* - текущий проход

Возвращает:
* PassData*

# ::stappler::xenolith::core::Attachment::getData() const

## BRIEF

Возвращает данные вложения

## CONTENT

Доступ: public

Возвращает данные вложения

Возвращает:
* AttachmentData*

# ::stappler::xenolith::core::Attachment::setCompiled(stappler::xenolith::core::Device&)

## BRIEF

Помечает вложение как собранное

## CONTENT

Доступ: public

Помечает вложение как собранное

Параметры:
* stappler::xenolith::core::Device&


# ::stappler::xenolith::core::Attachment::_data

## BRIEF

Данные вложения

## CONTENT

Доступ: protected

Данные вложения

Тип: AttachmentData*


# ::stappler::xenolith::core::Attachment::_inputCallback

## BRIEF

Функция получения данных

## CONTENT

Доступ: protected

Функция получения данных

Тип: InputCallback


# ::stappler::xenolith::core::Attachment::_frameHandleCallback

## BRIEF

Функция создания интерфейса

## CONTENT

Доступ: protected

Функция создания интерфейса

Тип: FrameHandleCallback


# ::stappler::xenolith::core::Attachment::_validateInputCallback

## BRIEF

Проверяет входящие данные

## CONTENT

Доступ: protected

Проверяет входящие данные

Тип: ValidateInputCallback


# ::stappler::xenolith::core::BufferAttachment

## BRIEF

Тип вложения-буфера

## CONTENT

Тип вложения-буфера. Хранит единичный буфер или их массив.

Базовые классы:
* Attachment


# ::stappler::xenolith::core::BufferAttachment::~BufferAttachment()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор

# ::stappler::xenolith::core::BufferAttachment::init(stappler::xenolith::core::Attachment::AttachmentBuilder&,stappler::xenolith::core::BufferInfo const&)

## BRIEF

Создает вложение

## CONTENT

Доступ: public

Создает вложение

Параметры:
* stappler::xenolith::core::Attachment::AttachmentBuilder&
* stappler::xenolith::core::BufferInfo const& - параметры буфера

Возвращает:
* bool

# ::stappler::xenolith::core::BufferAttachment::init(stappler::xenolith::core::Attachment::AttachmentBuilder&,stappler::xenolith::core::BufferData const*)

## BRIEF

Создает вложение

## CONTENT

Доступ: public

Создает вложение

Параметры:
* stappler::xenolith::core::Attachment::AttachmentBuilder&
* stappler::xenolith::core::BufferData const* - статический буфер во вложении

Возвращает:
* bool

# ::stappler::xenolith::core::BufferAttachment::init(stappler::xenolith::core::Attachment::AttachmentBuilder&,Vector<const stappler::xenolith::core::BufferData *>&&)

## BRIEF

Создает вложение

## CONTENT

Доступ: public

Создает вложение

Параметры:
* stappler::xenolith::core::Attachment::AttachmentBuilder&
* Vector<const stappler::xenolith::core::BufferData *>&& - массив статических буферов во вложении

Возвращает:
* bool

# ::stappler::xenolith::core::BufferAttachment::clear()

## BRIEF

Очиащает статические данные буфера

## CONTENT

Доступ: public

Очиащает статические данные буфера


# ::stappler::xenolith::core::BufferAttachment::getInfo() const

## BRIEF

Возвращает параметры буфера

## CONTENT

Доступ: public

Возвращает параметры буфера

Возвращает:
* stappler::xenolith::core::BufferInfo const&

# ::stappler::xenolith::core::BufferAttachment::isStatic() const

## BRIEF

Проверяет, предустановлен ли статический буфер

## CONTENT

Доступ: public

Проверяет, предустановлен ли статический буфер

Возвращает:
* bool

# ::stappler::xenolith::core::BufferAttachment::getStaticBuffers() const

## BRIEF

Возвращает предустановленные буферы

## CONTENT

Доступ: public

Возвращает предустановленные буферы

Возвращает:
* Vector<stappler::xenolith::core::BufferObject *>

# ::stappler::xenolith::core::BufferAttachment::_info

## BRIEF

Данные буфера

## CONTENT

Доступ: protected

Данные буфера

Тип: stappler::xenolith::core::BufferInfo


# ::stappler::xenolith::core::BufferAttachment::_staticBuffers

## BRIEF

Предустановленные буферы

## CONTENT

Доступ: protected

Предустановленные буферы

Тип: Vector<const stappler::xenolith::core::BufferData *>


# ::stappler::xenolith::core::ImageAttachment

## BRIEF

Тип изображения во вложении

## CONTENT

Тип изображения во вложении

Базовые классы:
* Attachment


# ::stappler::xenolith::core::ImageAttachment::~ImageAttachment()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор


# ::stappler::xenolith::core::ImageAttachment::AttachmentInfo

## BRIEF

Дополнительные параметры синхронизации изображения

## CONTENT

Доступ: public

Дополнительные параметры синхронизации изображения


# ::stappler::xenolith::core::ImageAttachment::AttachmentInfo::initialLayout

## BRIEF

Начальный тип укладки

## CONTENT

Начальный тип укладки

Тип: stappler::xenolith::core::AttachmentLayout


# ::stappler::xenolith::core::ImageAttachment::AttachmentInfo::finalLayout

## BRIEF

Конечный тип укладки

## CONTENT

Конечный тип укладки

Тип: stappler::xenolith::core::AttachmentLayout


# ::stappler::xenolith::core::ImageAttachment::AttachmentInfo::clearOnLoad

## BRIEF

Флаг очистки при загрузке

## CONTENT

Флаг очистки при загрузке

Тип: bool


# ::stappler::xenolith::core::ImageAttachment::AttachmentInfo::clearColor

## BRIEF

Цвет для очистки

## CONTENT

Цвет для очистки

Тип: stappler::geom::Color4F


# ::stappler::xenolith::core::ImageAttachment::AttachmentInfo::colorMode

## BRIEF

Режим доступа к цветовой информации

## CONTENT

Режим доступа к цветовой информации

Тип: stappler::xenolith::core::ColorMode


# ::stappler::xenolith::core::ImageAttachment::init(stappler::xenolith::core::Attachment::AttachmentBuilder&,stappler::xenolith::core::ImageInfo const&,stappler::xenolith::core::ImageAttachment::AttachmentInfo&&)

## BRIEF

Создаёт вложение

## CONTENT

Доступ: public

Создаёт вложение

Параметры:
* stappler::xenolith::core::Attachment::AttachmentBuilder&
* stappler::xenolith::core::ImageInfo const& - параметры изображения
* stappler::xenolith::core::ImageAttachment::AttachmentInfo&& - параметры синхронизации

Возвращает:
* bool

# ::stappler::xenolith::core::ImageAttachment::init(stappler::xenolith::core::Attachment::AttachmentBuilder&,stappler::xenolith::core::ImageData const*,stappler::xenolith::core::ImageAttachment::AttachmentInfo&&)

## BRIEF

Создаёт вложение

## CONTENT

Доступ: public

Создаёт вложение

Параметры:
* stappler::xenolith::core::Attachment::AttachmentBuilder&
* stappler::xenolith::core::ImageData const* - предустановленное изображение
* stappler::xenolith::core::ImageAttachment::AttachmentInfo&& - параметры синхронизации

Возвращает:
* bool

# ::stappler::xenolith::core::ImageAttachment::getImageInfo() const

## BRIEF

Возвращает параметры изображения

## CONTENT

Доступ: public

Возвращает параметры изображения

Возвращает:
* stappler::xenolith::core::ImageInfo const&

# ::stappler::xenolith::core::ImageAttachment::shouldClearOnLoad() const

## BRIEF

Нужно ли очищать изображение при загрузке в кадр

## CONTENT

Доступ: public

Нужно ли очищать изображение при загрузке в кадр

Возвращает:
* bool

# ::stappler::xenolith::core::ImageAttachment::getClearColor() const

## BRIEF

Возвращает цвет очистки

## CONTENT

Доступ: public

Возвращает цвет очистки

Возвращает:
* stappler::geom::Color4F

# ::stappler::xenolith::core::ImageAttachment::getColorMode() const

## BRIEF

Возвращает режим доступа к цвету

## CONTENT

Доступ: public

Возвращает режим доступа к цвету

Возвращает:
* stappler::xenolith::core::ColorMode

# ::stappler::xenolith::core::ImageAttachment::getInitialLayout() const

## BRIEF

Возвращает начальную укладку

## CONTENT

Доступ: public

Возвращает начальную укладку

Возвращает:
* stappler::xenolith::core::AttachmentLayout

# ::stappler::xenolith::core::ImageAttachment::getFinalLayout() const

## BRIEF

Возвращает конечную укладку

## CONTENT

Доступ: public

Возвращает конечную укладку

Возвращает:
* stappler::xenolith::core::AttachmentLayout

# ::stappler::xenolith::core::ImageAttachment::isStatic() const

## BRIEF

Проверяет, предустановлено ли изображение

## CONTENT

Доступ: public

Проверяет, предустановлено ли изображение

Возвращает:
* bool

# ::stappler::xenolith::core::ImageAttachment::getStaticImage() const

## BRIEF

Возвращает предустновленное изображение

## CONTENT

Доступ: public

Возвращает предустновленное изображение

Возвращает:
* stappler::xenolith::core::ImageObject*

# ::stappler::xenolith::core::ImageAttachment::getStaticImageStorage() const

## BRIEF

Возвращает интерфейс хранилища предустановленного изображения

## CONTENT

Доступ: public

Возвращает интерфейс хранилища предустановленного изображения

Возвращает:
* stappler::xenolith::core::ImageStorage*

# ::stappler::xenolith::core::ImageAttachment::addImageUsage(stappler::xenolith::core::ImageUsage)

## BRIEF

Добавляет флаг использования изображения

## CONTENT

Доступ: public

Добавляет флаг использования изображения

Параметры:
* stappler::xenolith::core::ImageUsage


# ::stappler::xenolith::core::ImageAttachment::isCompatible(stappler::xenolith::core::ImageInfo const&) const

## BRIEF

Проверяет изображение на совместимость

## CONTENT

Доступ: public

Проверяет изображение на совместимость

Параметры:
* stappler::xenolith::core::ImageInfo const&

Возвращает:
* bool

# ::stappler::xenolith::core::ImageAttachment::getImageViewInfo(stappler::xenolith::core::ImageInfoData const&,stappler::xenolith::core::AttachmentPassData const&) const

## BRIEF

Возвращает параметры отображения дли изображения во вложении

## CONTENT

Доступ: public

Возвращает параметры отображения дли изображения во вложении

Параметры:
* stappler::xenolith::core::ImageInfoData const&
* stappler::xenolith::core::AttachmentPassData const& - проход, для которого возвращать данные

Возвращает:
* stappler::xenolith::core::ImageViewInfo

# ::stappler::xenolith::core::ImageAttachment::getImageViews(stappler::xenolith::core::ImageInfoData const&) const

## BRIEF

Возвращает все используемые в очереди параметры отображения дли изображения во вложении

## CONTENT

Доступ: public

Возвращает все используемые в очереди параметры отображения дли изображения во вложении

Параметры:
* stappler::xenolith::core::ImageInfoData const&

Возвращает:
* Vector<stappler::xenolith::core::ImageViewInfo>

# ::stappler::xenolith::core::ImageAttachment::setCompiled(stappler::xenolith::core::Device&)

## BRIEF

Помечает вложение как собранное для использования

## CONTENT

Доступ: public

Помечает вложение как собранное для использования

Параметры:
* stappler::xenolith::core::Device&


# ::stappler::xenolith::core::ImageAttachment::_imageInfo

## BRIEF

Параметры изображения

## CONTENT

Доступ: protected

Параметры изображения

Тип: stappler::xenolith::core::ImageInfo


# ::stappler::xenolith::core::ImageAttachment::_attachmentInfo

## BRIEF

Параметры синхронизации

## CONTENT

Доступ: protected

Параметры синхронизации

Тип: stappler::xenolith::core::ImageAttachment::AttachmentInfo


# ::stappler::xenolith::core::ImageAttachment::_staticImage

## BRIEF

Предустановленное изображение

## CONTENT

Доступ: protected

Предустановленное изображение

Тип: stappler::xenolith::core::ImageData const*


# ::stappler::xenolith::core::ImageAttachment::_staticImageStorage

## BRIEF

Хранилище предустановленного изображения

## CONTENT

Доступ: protected

Хранилище предустановленного изображения

Тип: Rc<stappler::xenolith::core::ImageStorage>


# ::stappler::xenolith::core::GenericAttachment

## BRIEF

Вложение пользовательского типа

## CONTENT

Вложение пользовательского типа

Базовые классы:
* Attachment


# ::stappler::xenolith::core::GenericAttachment::~GenericAttachment()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор

# ::stappler::xenolith::core::GenericAttachment::init(stappler::xenolith::core::Attachment::AttachmentBuilder&)

## BRIEF

Создаёт вложение

## CONTENT

Доступ: public

Создаёт вложение

Параметры:
* stappler::xenolith::core::Attachment::AttachmentBuilder&

Возвращает:
* bool

# ::stappler::xenolith::core::AttachmentHandle

## BRIEF

Тип кадрового интерфейса для вложения

## CONTENT

Тип кадрового интерфейса для вложения. Хранит данные, относящиеся к состоянию вложения во время обработки кадра.

Базовые классы:
* Ref


# ::stappler::xenolith::core::AttachmentHandle::PassHandle

## BRIEF

Интерфейс прохода для кадра

## CONTENT

Доступ: public

Интерфейс прохода для кадра


# ::stappler::xenolith::core::AttachmentHandle::FrameQueue

## BRIEF

Тип очереди кадра

## CONTENT

Доступ: public

Тип очереди кадра


# ::stappler::xenolith::core::AttachmentHandle::FrameHandle

## BRIEF

Тип интерфейса кадра

## CONTENT

Доступ: public

Тип интерфейса кадра


# ::stappler::xenolith::core::AttachmentHandle::Attachment

## BRIEF

Тип вложения

## CONTENT

Доступ: public

Тип вложения


# ::stappler::xenolith::core::AttachmentHandle::InputCallback

## BRIEF

Тип функции получения входящих данных

## CONTENT

Доступ: public

Тип функции получения входящих данных


# ::stappler::xenolith::core::AttachmentHandle::~AttachmentHandle()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор


# ::stappler::xenolith::core::AttachmentHandle::init(Rc<stappler::xenolith::core::AttachmentHandle::Attachment> const&,stappler::xenolith::core::AttachmentHandle::FrameQueue const&)

## BRIEF

Создаёт интерфейс

## CONTENT

Доступ: public

Создаёт интерфейс

Параметры:
* Rc<stappler::xenolith::core::AttachmentHandle::Attachment> const&
* stappler::xenolith::core::AttachmentHandle::FrameQueue const&

Возвращает:
* bool

# ::stappler::xenolith::core::AttachmentHandle::init(stappler::xenolith::core::AttachmentHandle::Attachment&,stappler::xenolith::core::AttachmentHandle::FrameQueue const&)

## BRIEF

Создаёт интерфейс

## CONTENT

Доступ: public

Создаёт интерфейс

Параметры:
* stappler::xenolith::core::AttachmentHandle::Attachment&
* stappler::xenolith::core::AttachmentHandle::FrameQueue const&

Возвращает:
* bool

# ::stappler::xenolith::core::AttachmentHandle::setQueueData(stappler::xenolith::core::FrameAttachmentData&)

## BRIEF

Устаналвивает данные очереди кадра для вложения

## CONTENT

Доступ: public

Устаналвивает данные очереди кадра для вложения

Параметры:
* stappler::xenolith::core::FrameAttachmentData&


# ::stappler::xenolith::core::AttachmentHandle::getQueueData() const

## BRIEF

Возвращает данные очереди кадра для вложения

## CONTENT

Доступ: public

Возвращает данные очереди кадра для вложения

Возвращает:
* stappler::xenolith::core::FrameAttachmentData*

# ::stappler::xenolith::core::AttachmentHandle::setInputCallback(stappler::xenolith::core::AttachmentHandle::InputCallback&&)

## BRIEF

Устанавливает функцию получения данных

## CONTENT

Доступ: public

Устанавливает функцию получения данных

Параметры:
* stappler::xenolith::core::AttachmentHandle::InputCallback&&


# ::stappler::xenolith::core::AttachmentHandle::isAvailable(stappler::xenolith::core::AttachmentHandle::FrameQueue const&) const

## BRIEF

Проверяет, что вложение доступно для кадра

## CONTENT

Доступ: public

Проверяет, что вложение доступно для кадра

Параметры:
* stappler::xenolith::core::AttachmentHandle::FrameQueue const&

Возвращает:
* bool

# ::stappler::xenolith::core::AttachmentHandle::setup(stappler::xenolith::core::AttachmentHandle::FrameQueue&,Function<void (bool)>&&)

## BRIEF

Настраивает вложение для кадра

## CONTENT

Доступ: public

Настраивает вложение для кадра

Параметры:
* stappler::xenolith::core::AttachmentHandle::FrameQueue&
* Function<void (bool)>&& - функция, вызываемая при завершении настройки

Возвращает:
* bool

# ::stappler::xenolith::core::AttachmentHandle::finalize(stappler::xenolith::core::AttachmentHandle::FrameQueue&,bool)

## BRIEF

Завершает использование вложения для кадра

## CONTENT

Доступ: public

Завершает использование вложения для кадра

Параметры:
* stappler::xenolith::core::AttachmentHandle::FrameQueue&
* bool


# ::stappler::xenolith::core::AttachmentHandle::isInput() const

## BRIEF

Является ли вложение входящим для кадра

## CONTENT

Доступ: public

Является ли вложение входящим для кадра

Возвращает:
* bool

# ::stappler::xenolith::core::AttachmentHandle::isOutput() const

## BRIEF

Является ли вложение исходящим для кадра

## CONTENT

Доступ: public

Является ли вложение исходящим для кадра

Возвращает:
* bool

# ::stappler::xenolith::core::AttachmentHandle::getAttachment() const

## BRIEF

Возвращает вложение

## CONTENT

Доступ: public

Возвращает вложение

Возвращает:
* Rc<stappler::xenolith::core::AttachmentHandle::Attachment> const&

# ::stappler::xenolith::core::AttachmentHandle::getName() const

## BRIEF

Возвращает название вложения

## CONTENT

Доступ: public

Возвращает название вложения

Возвращает:
* stappler::StringView

# ::stappler::xenolith::core::AttachmentHandle::submitInput(stappler::xenolith::core::AttachmentHandle::FrameQueue&,Rc<stappler::xenolith::core::AttachmentInputData>&&,Function<void (bool)>&&)

## BRIEF

Загружает входящие данные во вложение

## CONTENT

Доступ: public

Загружает входящие данные во вложение

Параметры:
* stappler::xenolith::core::AttachmentHandle::FrameQueue&
* Rc<stappler::xenolith::core::AttachmentInputData>&&
* Function<void (bool)>&&


# ::stappler::xenolith::core::AttachmentHandle::getDescriptorArraySize(stappler::xenolith::core::AttachmentHandle::PassHandle const&,stappler::xenolith::core::PipelineDescriptor const&,bool) const

## BRIEF

Устанавливает размер массива дескрипторов

## CONTENT

Доступ: public

Устанавливает размер массива дескрипторов для вложения

Параметры:
* stappler::xenolith::core::AttachmentHandle::PassHandle const&
* stappler::xenolith::core::PipelineDescriptor const&
* bool

Возвращает:
* uint32_t

# ::stappler::xenolith::core::AttachmentHandle::isDescriptorDirty(stappler::xenolith::core::AttachmentHandle::PassHandle const&,stappler::xenolith::core::PipelineDescriptor const&,uint32_t,bool) const

## BRIEF

Проверяет, изменились ли дескрипторы между кадрами

## CONTENT

Доступ: public

Проверяет, изменились ли дескрипторы между кадрами

Параметры:
* stappler::xenolith::core::AttachmentHandle::PassHandle const&
* stappler::xenolith::core::PipelineDescriptor const&
* uint32_t - индекс дескриптора в массиве
* bool - true если дескриптор отдельный от общей укладки

Возвращает:
* bool

# ::stappler::xenolith::core::AttachmentHandle::getInput() const

## BRIEF

Возвращает принятые внешние данные

## CONTENT

Доступ: public

Возвращает принятые внешние данные

Возвращает:
* stappler::xenolith::core::AttachmentInputData*

# ::stappler::xenolith::core::AttachmentHandle::_inputCallback

## BRIEF

Функция получения внешних данных

## CONTENT

Доступ: protected

Функция получения внешних данных

Тип: InputCallback


# ::stappler::xenolith::core::AttachmentHandle::_input

## BRIEF

Внешние данные

## CONTENT

Доступ: protected

Внешние данные

Тип: Rc<stappler::xenolith::core::AttachmentInputData>


# ::stappler::xenolith::core::AttachmentHandle::_attachment

## BRIEF

Вложение

## CONTENT

Доступ: protected

Вложение

Тип: Rc<stappler::xenolith::core::AttachmentHandle::Attachment>


# ::stappler::xenolith::core::AttachmentHandle::_queueData

## BRIEF

Данные вложения для кадра

## CONTENT

Доступ: protected

Данные вложения для кадра

Тип: stappler::xenolith::core::FrameAttachmentData*
