Title: XLCoreFrameQueue.h


# XENOLITH_CORE_XLCOREFRAMEQUEUE_H_

## BRIEF

Заголовок очереди исполнения кадра

## CONTENT

Заголовок очереди исполнения кадра


# ::stappler::xenolith::core::FrameSyncAttachment

## BRIEF

Структура синхрониации вложения для кадра

## CONTENT

Структура синхрониации вложения для кадра


# ::stappler::xenolith::core::FrameSyncAttachment::attachment

## BRIEF

Вложение

## CONTENT

Вложение

Тип: stappler::xenolith::core::AttachmentHandle const*


# ::stappler::xenolith::core::FrameSyncAttachment::semaphore

## BRIEF

Семафор для ожидания

## CONTENT

Семафор для ожидания

Тип: Rc<stappler::xenolith::core::Semaphore>


# ::stappler::xenolith::core::FrameSyncAttachment::image

## BRIEF

Изображение

## CONTENT

Изображение

Тип: stappler::xenolith::core::ImageStorage*


# ::stappler::xenolith::core::FrameSyncAttachment::stages

## BRIEF

Стадии для ожидания

## CONTENT

Стадии для ожидания

Тип: stappler::xenolith::core::PipelineStage


# ::stappler::xenolith::core::FramePassData

## BRIEF

Структура данных прохода для кадра

## CONTENT

Структура данных прохода для кадра

# ::stappler::xenolith::core::FramePassData::state

## BRIEF

Статус конечного автомата прохода

## CONTENT

Тип: stappler::xenolith::core::FrameRenderPassState

Статус конечного автомата прохода


# ::stappler::xenolith::core::FramePassData::handle

## BRIEF

Интерфейс очереди для кадра

## CONTENT

Интерфейс очереди для кадра

Тип: Rc<stappler::xenolith::core::QueuePassHandle>


# ::stappler::xenolith::core::FramePassData::data

## BRIEF

Данные прохода

## CONTENT

Данные прохода

Тип: stappler::xenolith::core::QueuePassData const*


# ::stappler::xenolith::core::FramePassData::attachments

## BRIEF

Вложения

## CONTENT

Вложения

Тип: Vector<Pair<const stappler::xenolith::core::AttachmentPassData *, stappler::xenolith::core::FrameAttachmentData *>>


# ::stappler::xenolith::core::FramePassData::attachmentMap

## BRIEF

Сопоставление вложений и их данных

## CONTENT

Сопоставление вложений и их данных

Тип: HashMap<const stappler::xenolith::core::AttachmentData *, stappler::xenolith::core::FrameAttachmentData *>


# ::stappler::xenolith::core::FramePassData::waiters

## BRIEF

Проходы, ожидающие статус данного прохода

## CONTENT

Проходы, ожидающие статус данного прохода

Тип: HashMap<stappler::xenolith::core::FrameRenderPassState, Vector<stappler::xenolith::core::FramePassData *>>


# ::stappler::xenolith::core::FramePassData::waitSync

## BRIEF

Примитивы синхронизации вложеий

## CONTENT

Примитивы синхронизации вложеий

Тип: Vector<stappler::xenolith::core::FrameSyncAttachment>


# ::stappler::xenolith::core::FramePassData::framebuffer

## BRIEF

Фреймбуфер прохода

## CONTENT

Фреймбуфер прохода, если есть

Тип: Rc<stappler::xenolith::core::Framebuffer>


# ::stappler::xenolith::core::FramePassData::waitForResult

## BRIEF

Флаг ожидания результата перед авершением

## CONTENT

Флаг ожидания результата перед авершением

Тип: bool


# ::stappler::xenolith::core::FramePassData::submitTime

## BRIEF

Время отправки на исполнение

## CONTENT

Время отправки на исполнение

Тип: uint64_t


# ::stappler::xenolith::core::FrameAttachmentData

## BRIEF

Структура данных вложения для кадра

## CONTENT

Структура данных вложения для кадра


# ::stappler::xenolith::core::FrameAttachmentData::state

## BRIEF

Состояние конечного автомата вложения

## CONTENT

Состояние конечного автомата вложения

Тип: stappler::xenolith::core::FrameAttachmentState


# ::stappler::xenolith::core::FrameAttachmentData::handle

## BRIEF

Интерфейс вложения для кадра

## CONTENT

Интерфейс вложения для кадра

Тип: Rc<stappler::xenolith::core::AttachmentHandle>


# ::stappler::xenolith::core::FrameAttachmentData::info

## BRIEF

Параметры изображения вложения

## CONTENT

Параметры изображения вложения

Тип: stappler::xenolith::core::ImageInfoData


# ::stappler::xenolith::core::FrameAttachmentData::passes

## BRIEF

Проходы, использующие вложение

## CONTENT

Проходы, использующие вложение

Тип: Vector<stappler::xenolith::core::FramePassData *>


# ::stappler::xenolith::core::FrameAttachmentData::final

## BRIEF

Последнее состояние прохода, на котором используется вложение

## CONTENT

Последнее состояние прохода, на котором используется вложение

Тип: stappler::xenolith::core::FrameRenderPassState


# ::stappler::xenolith::core::FrameAttachmentData::image

## BRIEF

Объект изображения

## CONTENT

Объект изображения

Тип: Rc<stappler::xenolith::core::ImageStorage>


# ::stappler::xenolith::core::FrameAttachmentData::waitForResult

## BRIEF

Флаг ожидания результата перед завершением

## CONTENT

Флаг ожидания результата перед завершением

Тип: bool


# ::stappler::xenolith::core::FrameSyncImage

## BRIEF

Структура данных для синхронизации изображений

## CONTENT

Структура данных для синхронизации изображений


# ::stappler::xenolith::core::FrameSyncImage::attachment

## BRIEF

Вложение

## CONTENT

Вложение

Тип: stappler::xenolith::core::AttachmentHandle const*


# ::stappler::xenolith::core::FrameSyncImage::image

## BRIEF

Объект изображения

## CONTENT

Объект изображения

Тип: stappler::xenolith::core::ImageStorage*


# ::stappler::xenolith::core::FrameSyncImage::newLayout

## BRIEF

Новая форма укладки

## CONTENT

Новая форма укладки

Тип: stappler::xenolith::core::AttachmentLayout


# ::stappler::xenolith::core::FrameSync

## BRIEF

Структура для синххронизации данных внутри кадра

## CONTENT

Структура для синххронизации данных внутри кадра

Базовые классы:
* Ref


# ::stappler::xenolith::core::FrameSync::waitAttachments

## BRIEF

Вложения, ожидаемые перед выполнением прохода

## CONTENT

Вложения, ожидаемые перед выполнением прохода

Тип: Vector<stappler::xenolith::core::FrameSyncAttachment>


# ::stappler::xenolith::core::FrameSync::signalAttachments

## BRIEF

Вложения, для которых нужен сигнал о выполненни прохода

## CONTENT

Вложения, для которых нужен сигнал о выполненни прохода

Тип: Vector<stappler::xenolith::core::FrameSyncAttachment>


# ::stappler::xenolith::core::FrameSync::images

## BRIEF

Изображения, изменяющие форму укладки

## CONTENT

Изображения, изменяющие форму укладки

Тип: Vector<stappler::xenolith::core::FrameSyncImage>


# ::stappler::xenolith::core::FrameQueue

## BRIEF

Тип очереди кадра

## CONTENT

Тип очереди кадра. Очередь кадра отражает состояние исполнения очереди рендеринга в текущем кадре. Содержит конечные автоматы для проходов и вложений, и создаёт примитивы синхронизации.

Базовые классы:
* Ref


# ::stappler::xenolith::core::FrameQueue::~FrameQueue()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор

# ::stappler::xenolith::core::FrameQueue::init(Rc<stappler::xenolith::PoolRef> const&,Rc<stappler::xenolith::core::Queue> const&,stappler::xenolith::core::FrameHandle&)

## BRIEF

Создаёт очередь

## CONTENT

Доступ: public

Создаёт очередь

Параметры:
* Rc<stappler::xenolith::PoolRef> const& - пул памяти
* Rc<stappler::xenolith::core::Queue> const& - очередь
* stappler::xenolith::core::FrameHandle& - кадр

Возвращает:
* bool

# ::stappler::xenolith::core::FrameQueue::setup()

## BRIEF

Настраивает очередь для кадра

## CONTENT

Доступ: public

Настраивает очередь для кадра

Возвращает:
* bool

# ::stappler::xenolith::core::FrameQueue::update()

## BRIEF

Обновляет ожидающие обновления структуры, выполняет отложенные функции

## CONTENT

Обновляет ожидающие обновления структуры, выполняет отложенные функции

Доступ: public


# ::stappler::xenolith::core::FrameQueue::invalidate()

## BRIEF

Отменяет выполнение очереди

## CONTENT

Доступ: public

Отменяет выполнение очереди


# ::stappler::xenolith::core::FrameQueue::isFinalized() const

## BRIEF

Проверяет, все ли объекты очереди завершили выполнение

## CONTENT

Доступ: public

Проверяет, все ли объекты очереди завершили выполнение

Возвращает:
* bool

# ::stappler::xenolith::core::FrameQueue::getFrame() const

## BRIEF

Возвращает основной кадр

## CONTENT

Доступ: public

Возвращает основной кадр

Возвращает:
* Rc<stappler::xenolith::core::FrameHandle> const&

# ::stappler::xenolith::core::FrameQueue::getPool() const

## BRIEF

Возвращает пул памяти

## CONTENT

Доступ: public

Возвращает пул памяти

Возвращает:
* Rc<stappler::xenolith::PoolRef> const&

# ::stappler::xenolith::core::FrameQueue::getQueue() const

## BRIEF

Возвращает очередь рендеринга

## CONTENT

Доступ: public

Возвращает очередь рендеринга

Возвращает:
* Rc<stappler::xenolith::core::Queue> const&

# ::stappler::xenolith::core::FrameQueue::getLoop() const

## BRIEF

Возвращает графический цикл

## CONTENT

Доступ: public

Возвращает графический цикл

Возвращает:
* stappler::xenolith::core::Loop*

# ::stappler::xenolith::core::FrameQueue::getRenderPasses() const

## BRIEF

Возвращает проходы очереди

## CONTENT

Доступ: public

Возвращает проходы очереди

Возвращает:
* HashMap<const stappler::xenolith::core::QueuePassData *, stappler::xenolith::core::FramePassData> const&

# ::stappler::xenolith::core::FrameQueue::getAttachments() const

## BRIEF

Возвращает вложения очереди

## CONTENT

Доступ: public

Возвращает вложения очереди

Возвращает:
* HashMap<const stappler::xenolith::core::AttachmentData *, stappler::xenolith::core::FrameAttachmentData> const&

# ::stappler::xenolith::core::FrameQueue::getSubmissionTime() const

## BRIEF

Возвращает время отправки на исполнение

## CONTENT

Доступ: public

Возвращает время отправки на исполнение

Возвращает:
* uint64_t

# ::stappler::xenolith::core::FrameQueue::getAttachment(stappler::xenolith::core::AttachmentData const*) const

## BRIEF

Возвращает внутренние данные вложения в очереди

## CONTENT

Доступ: public

Возвращает внутренние данные вложения в очереди

Параметры:
* stappler::xenolith::core::AttachmentData const*

Возвращает:
* stappler::xenolith::core::FrameAttachmentData const*

# ::stappler::xenolith::core::FrameQueue::getRenderPass(stappler::xenolith::core::QueuePassData const*) const

## BRIEF

Возвращает внутренние данные прохода в очереди

## CONTENT

Доступ: public

Возвращает внутренние данные прохода в очереди

Параметры:
* stappler::xenolith::core::QueuePassData const*

Возвращает:
* stappler::xenolith::core::FramePassData const*

# ::stappler::xenolith::core::FrameQueue::isResourcePending(stappler::xenolith::core::FrameAttachmentData const&)

## BRIEF

Проверяет, находится ли вложение в состоянии ожидания

## CONTENT

Доступ: protected

Проверяет, находится ли вложение в состоянии ожидания

Параметры:
* stappler::xenolith::core::FrameAttachmentData const&

Возвращает:
* bool

# ::stappler::xenolith::core::FrameQueue::waitForResource(stappler::xenolith::core::FrameAttachmentData const&,Function<void (bool)>&&)

## BRIEF

Асинхронно ожидает готовности вложения

## CONTENT

Доступ: protected

Асинхронно ожидает готовности вложения

Параметры:
* stappler::xenolith::core::FrameAttachmentData const&
* Function<void (bool)>&& - функция для вызова по готовности


# ::stappler::xenolith::core::FrameQueue::isResourcePending(stappler::xenolith::core::FramePassData const&)

## BRIEF

Проверяет, находится ли проход в состоянии ожидания

## CONTENT

Доступ: protected

Проверяет, находится ли проход в состоянии ожидания

Параметры:
* stappler::xenolith::core::FramePassData const&

Возвращает:
* bool

# ::stappler::xenolith::core::FrameQueue::waitForResource(stappler::xenolith::core::FramePassData const&,Function<void ()>&&)

## BRIEF

Асинхронно ожидает готовности прохода

## CONTENT

Доступ: protected

Асинхронно ожидает готовности прохода

Параметры:
* stappler::xenolith::core::FramePassData const&
* Function<void ()>&& - функция для вызова по готовности


# ::stappler::xenolith::core::FrameQueue::onAttachmentSetupComplete(stappler::xenolith::core::FrameAttachmentData&)

## BRIEF

Обрабатывает завершение настройки вложения

## CONTENT

Доступ: protected

Обрабатывает завершение настройки вложения

Параметры:
* stappler::xenolith::core::FrameAttachmentData&


# ::stappler::xenolith::core::FrameQueue::onAttachmentInput(stappler::xenolith::core::FrameAttachmentData&)

## BRIEF

Обрабатывает поступление входящихх данных вложения

## CONTENT

Доступ: protected

Обрабатывает поступление входящихх данных вложения

Параметры:
* stappler::xenolith::core::FrameAttachmentData&


# ::stappler::xenolith::core::FrameQueue::onAttachmentAcquire(stappler::xenolith::core::FrameAttachmentData&)

## BRIEF

Обрабатывает получение доступа к вложению

## CONTENT

Доступ: protected

Обрабатывает получение доступа к вложению

Параметры:
* stappler::xenolith::core::FrameAttachmentData&


# ::stappler::xenolith::core::FrameQueue::onAttachmentRelease(stappler::xenolith::core::FrameAttachmentData&)

## BRIEF

Обрабатывает потерю доступа к вложению

## CONTENT

Доступ: protected

Обрабатывает потерю доступа к вложению

Параметры:
* stappler::xenolith::core::FrameAttachmentData&


# ::stappler::xenolith::core::FrameQueue::isRenderPassReady(stappler::xenolith::core::FramePassData const&) const

## BRIEF

Проверяет, готов ли проход к исполнению

## CONTENT

Доступ: protected

Проверяет, готов ли проход к исполнению

Параметры:
* stappler::xenolith::core::FramePassData const&

Возвращает:
* bool

# ::stappler::xenolith::core::FrameQueue::isRenderPassReadyForState(stappler::xenolith::core::FramePassData const&,stappler::xenolith::core::FrameRenderPassState) const

## BRIEF

Проверяет, готов ли проход к переходу в определённый статус

## CONTENT

Доступ: protected

Проверяет, готов ли проход к переходу в определённый статус

Параметры:
* stappler::xenolith::core::FramePassData const&
* stappler::xenolith::core::FrameRenderPassState

Возвращает:
* bool

# ::stappler::xenolith::core::FrameQueue::updateRenderPassState(stappler::xenolith::core::FramePassData&,stappler::xenolith::core::FrameRenderPassState)

## BRIEF

Обновляет статус прохода

## CONTENT

Доступ: protected

Обновляет статус прохода

Параметры:
* stappler::xenolith::core::FramePassData&
* stappler::xenolith::core::FrameRenderPassState


# ::stappler::xenolith::core::FrameQueue::onRenderPassReady(stappler::xenolith::core::FramePassData&)

## BRIEF

Обрабатывает готовность прохода

## CONTENT

Доступ: protected

Обрабатывает готовность прохода

Параметры:
* stappler::xenolith::core::FramePassData&


# ::stappler::xenolith::core::FrameQueue::onRenderPassOwned(stappler::xenolith::core::FramePassData&)

## BRIEF

Обрабатывает захват доступа к проходу

## CONTENT

Доступ: protected

Обрабатывает захват доступа к проходу

Параметры:
* stappler::xenolith::core::FramePassData&


# ::stappler::xenolith::core::FrameQueue::onRenderPassResourcesAcquired(stappler::xenolith::core::FramePassData&)

## BRIEF

Обрабатывает готовность ресурсов прохода

## CONTENT

Доступ: protected

Обрабатывает готовность ресурсов прохода

Параметры:
* stappler::xenolith::core::FramePassData&


# ::stappler::xenolith::core::FrameQueue::onRenderPassPrepared(stappler::xenolith::core::FramePassData&)

## BRIEF

Обрабатывает готовность прохода к исполнению

## CONTENT

Доступ: protected

Обрабатывает готовность прохода к исполнению

Параметры:
* stappler::xenolith::core::FramePassData&


# ::stappler::xenolith::core::FrameQueue::onRenderPassSubmission(stappler::xenolith::core::FramePassData&)

## BRIEF

Обрабатывает отправку прохода на исполнение

## CONTENT

Доступ: protected

Обрабатывает отправку прохода на исполнение

Параметры:
* stappler::xenolith::core::FramePassData&


# ::stappler::xenolith::core::FrameQueue::onRenderPassSubmitted(stappler::xenolith::core::FramePassData&)

## BRIEF

Обрабатывает завершение отправки прохода к исполнению

## CONTENT

Доступ: protected

Обрабатывает завершение отправки прохода к исполнению

Параметры:
* stappler::xenolith::core::FramePassData&


# ::stappler::xenolith::core::FrameQueue::onRenderPassComplete(stappler::xenolith::core::FramePassData&)

## BRIEF

Обрабатывает завершение работы над проходом

## CONTENT

Доступ: protected

Обрабатывает завершение работы над проходом

Параметры:
* stappler::xenolith::core::FramePassData&


# ::stappler::xenolith::core::FrameQueue::makeRenderPassSync(stappler::xenolith::core::FramePassData&) const

## BRIEF

Создаёт примитиы синхронизации прохода

## CONTENT

Доступ: protected

Создаёт примитиы синхронизации прохода

Параметры:
* stappler::xenolith::core::FramePassData&

Возвращает:
* Rc<stappler::xenolith::core::FrameSync>

# ::stappler::xenolith::core::FrameQueue::getWaitStageForAttachment(stappler::xenolith::core::FramePassData&,stappler::xenolith::core::AttachmentHandle const*) const

## BRIEF

Возвращает стадию исполнения, необходимую для вложения в проходе

## CONTENT

Доступ: protected

Возвращает стадию исполнения, необходимую для вложения в проходе

Параметры:
* stappler::xenolith::core::FramePassData&
* stappler::xenolith::core::AttachmentHandle const*

Возвращает:
* stappler::xenolith::core::PipelineStage

# ::stappler::xenolith::core::FrameQueue::onComplete()

## BRIEF

Обрабатывает завершение работы

## CONTENT

Доступ: protected

Обрабатывает завершение работы


# ::stappler::xenolith::core::FrameQueue::onFinalized()

## BRIEF

Обрабатывает отключение все объектов

## CONTENT

Доступ: protected

Обрабатывает отключение все объектов


# ::stappler::xenolith::core::FrameQueue::invalidate(stappler::xenolith::core::FrameAttachmentData&)

## BRIEF

Заершает работу вложения и всего связанного

## CONTENT

Доступ: protected

Заершает работу вложения и всего связанного

Параметры:
* stappler::xenolith::core::FrameAttachmentData&


# ::stappler::xenolith::core::FrameQueue::invalidate(stappler::xenolith::core::FramePassData&)

## BRIEF

Заершает работу прохода и всего связанного

## CONTENT

Доступ: protected

Заершает работу прохода и всего связанного

Параметры:
* stappler::xenolith::core::FramePassData&


# ::stappler::xenolith::core::FrameQueue::tryReleaseFrame()

## BRIEF

Пытается отсоединить очередь от кадра при завершнии работы

## CONTENT

Доступ: protected

Пытается отсоединить очередь от кадра при завершнии работы



# ::stappler::xenolith::core::FrameQueue::finalizeAttachment(stappler::xenolith::core::FrameAttachmentData&)

## BRIEF

Завершает работу вложения

## CONTENT

Доступ: protected

Завершает работу вложения

Параметры:
* stappler::xenolith::core::FrameAttachmentData&


# ::stappler::xenolith::core::FrameQueue::_pool

## BRIEF

Пул памяти

## CONTENT

Доступ: protected

Пул памяти

Тип: Rc<stappler::xenolith::PoolRef>


# ::stappler::xenolith::core::FrameQueue::_queue

## BRIEF

Очередь рендеринга

## CONTENT

Доступ: protected

Очередь рендеринга

Тип: Rc<stappler::xenolith::core::Queue>


# ::stappler::xenolith::core::FrameQueue::_frame

## BRIEF

Кадр

## CONTENT

Доступ: protected

Кадр

Тип: Rc<stappler::xenolith::core::FrameHandle>


# ::stappler::xenolith::core::FrameQueue::_loop

## BRIEF

Графический цикл

## CONTENT

Доступ: protected

Графический цикл

Тип: stappler::xenolith::core::Loop*


# ::stappler::xenolith::core::FrameQueue::_order

## BRIEF

Порядковый номер исплнения очереди

## CONTENT

Доступ: protected

Порядковый номер исплнения очереди

Тип: uint64_t


# ::stappler::xenolith::core::FrameQueue::_finalized

## BRIEF

Флаг заверёшнности

## CONTENT

Доступ: protected

Флаг заверёшнности

Тип: bool


# ::stappler::xenolith::core::FrameQueue::_success

## BRIEF

Флаг успеха

## CONTENT

Доступ: protected

Флаг успеха

Тип: bool


# ::stappler::xenolith::core::FrameQueue::_renderPasses

## BRIEF

Проходы очереди

## CONTENT

Доступ: protected

Проходы очереди

Тип: HashMap<const stappler::xenolith::core::QueuePassData *, stappler::xenolith::core::FramePassData>


# ::stappler::xenolith::core::FrameQueue::_attachments

## BRIEF

Вложения очереди

## CONTENT

Доступ: protected

Вложения очереди

Тип: HashMap<const stappler::xenolith::core::AttachmentData *, stappler::xenolith::core::FrameAttachmentData>


# ::stappler::xenolith::core::FrameQueue::_renderPassesInitial

## BRIEF

Начальные проходы

## CONTENT

Доступ: protected

Начальные проходы

Тип: HashSet<stappler::xenolith::core::FramePassData *>


# ::stappler::xenolith::core::FrameQueue::_renderPassesPrepared

## BRIEF

Подготовленные проходы

## CONTENT

Доступ: protected

Подготовленные проходы

Тип: HashSet<stappler::xenolith::core::FramePassData *>


# ::stappler::xenolith::core::FrameQueue::_attachmentsInitial

## BRIEF

Начальные вложения

## CONTENT

Доступ: protected

Начальные вложения

Тип: HashSet<stappler::xenolith::core::FrameAttachmentData *>


# ::stappler::xenolith::core::FrameQueue::_autorelease

## BRIEF

Список объектов для удержания в время исполнения очереди

## CONTENT

Доступ: protected

Список объектов для удержания в время исполнения очереди

Тип: std::forward_list<Rc<Ref>>


# ::stappler::xenolith::core::FrameQueue::_renderPassSubmitted

## BRIEF

Отправленные на исполнение проходы

## CONTENT

Доступ: protected

Отправленные на исполнение проходы

Тип: uint32_t


# ::stappler::xenolith::core::FrameQueue::_renderPassCompleted

## BRIEF

Завершённые проходы

## CONTENT

Доступ: protected

Завершённые проходы

Тип: uint32_t


# ::stappler::xenolith::core::FrameQueue::_finalizedObjects

## BRIEF

Число завершённых объектов

## CONTENT

Доступ: protected

Число завершённых объектов

Тип: uint32_t


# ::stappler::xenolith::core::FrameQueue::_submissionTime

## BRIEF

Время отправки на исполнение

## CONTENT

Доступ: protected

Время отправки на исполнение

Тип: uint64_t


# ::stappler::xenolith::core::FrameQueue::_awaitPasses

## BRIEF

Проходы на ожидании

## CONTENT

Доступ: protected

Проходы на ожидании

Тип: Vector<Pair<stappler::xenolith::core::FramePassData *, stappler::xenolith::core::FrameRenderPassState>>

# ::stappler::xenolith::core::FrameQueue::_invalidated

## BRIEF

Флаг ошибочного состояния очереди

## CONTENT

Доступ: protected

Флаг ошибочного состояния очереди

Тип: bool