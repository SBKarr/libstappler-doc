Title: XLCoreQueuePass.h


# XENOLITH_CORE_XLCOREQUEUEPASS_H_

## BRIEF

Заголовок прохода очереди исполнения

## CONTENT

Заголовок прохода очереди исполнения


# ::stappler::xenolith::core::QueuePass

## BRIEF

Проход очереди исполнения

## CONTENT

Проход очереди исполнения

Базовые классы:
* NamedRef


# ::stappler::xenolith::core::QueuePass::Queue

## BRIEF

Тип очереди

## CONTENT

Доступ: public

Тип очереди

# ::stappler::xenolith::core::QueuePass::FrameQueue

## BRIEF

Тип очереди кадра

## CONTENT

Доступ: public

Тип очереди кадра


# ::stappler::xenolith::core::QueuePass::RenderOrdering

## BRIEF

Тип порядка исполнения

## CONTENT

Доступ: public

Тип порядка исполнения

# ::stappler::xenolith::core::QueuePass::QueuePassBuilder

## BRIEF

Тип сборщика прохода

## CONTENT

Доступ: public

Тип сборщика прохода


# ::stappler::xenolith::core::QueuePass::QueuePassHandle

## BRIEF

Тип интерфейса прохода для кадра

## CONTENT

Доступ: public

Тип интерфейса прохода для кадра


# ::stappler::xenolith::core::QueuePass::PassType

## BRIEF

Тип прохода исполнения

## CONTENT

Доступ: public

Тип прохода исполнения


# ::stappler::xenolith::core::QueuePass::AttachmentData

## BRIEF

Тип данных вложения

## CONTENT

Доступ: public

Тип данных вложения


# ::stappler::xenolith::core::QueuePass::FrameHandleCallback

## BRIEF

Функция ссоздания интерфейса кадра

## CONTENT

Доступ: public

Функция ссоздания интерфейса кадра

# ::stappler::xenolith::core::QueuePass::~QueuePass()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор

# ::stappler::xenolith::core::QueuePass::init(stappler::xenolith::core::QueuePass::QueuePassBuilder&)

## BRIEF

Создаёт объект прохода с помощью сборщика

## CONTENT

Доступ: public

Создаёт объект прохода с помощью сборщика

Параметры:
* stappler::xenolith::core::QueuePass::QueuePassBuilder&

Возвращает:
* bool

# ::stappler::xenolith::core::QueuePass::invalidate()

## BRIEF

Отключает проход

## CONTENT

Доступ: public

Отключает проход

# ::stappler::xenolith::core::QueuePass::getName() const

## BRIEF

Возвращает название прохода

## CONTENT

Доступ: public

Возвращает название прохода

Возвращает:
* stappler::StringView

# ::stappler::xenolith::core::QueuePass::getOrdering() const

## BRIEF

Возвращает приоритет прохода

## CONTENT

Доступ: public

Возвращает приоритет прохода

Возвращает:
* RenderOrdering

# ::stappler::xenolith::core::QueuePass::getSubpassCount() const

## BRIEF

Возвращает число подпроходов

## CONTENT

Доступ: public

Возвращает число подпроходов

Возвращает:
* size_t

# ::stappler::xenolith::core::QueuePass::getType() const

## BRIEF

Возвращает тип прохода

## CONTENT

Доступ: public

Возвращает тип прохода

Возвращает:
* PassType

# ::stappler::xenolith::core::QueuePass::makeFrameHandle(stappler::xenolith::core::QueuePass::FrameQueue const&)

## BRIEF

Создаёт интерфейс кадра прохода

## CONTENT

Доступ: public

Создаёт интерфейс кадра прохода

Параметры:
* stappler::xenolith::core::QueuePass::FrameQueue const&

Возвращает:
* Rc<stappler::xenolith::core::QueuePass::QueuePassHandle>

# ::stappler::xenolith::core::QueuePass::setFrameHandleCallback(stappler::xenolith::core::QueuePass::FrameHandleCallback&&)

## BRIEF

Устанавливает функцию создания интерфейса кадра

## CONTENT

Доступ: public

Устанавливает функцию создания интерфейса кадра

Параметры:
* stappler::xenolith::core::QueuePass::FrameHandleCallback&&


# ::stappler::xenolith::core::QueuePass::getOwner() const

## BRIEF

Возвращает очередь кадра, имеющую контроль над проходом

## CONTENT

Доступ: public

Возвращает очередь кадра, имеющую контроль над проходом

Возвращает:
* Rc<stappler::xenolith::core::QueuePass::FrameQueue> const&

# ::stappler::xenolith::core::QueuePass::acquireForFrame(stappler::xenolith::core::QueuePass::FrameQueue&,Function<void (bool)>&&)

## BRIEF

Асинхронно получает контроль над проходом для очереди

## CONTENT

Доступ: public

Асинхронно получает контроль над проходом для очереди

Параметры:
* stappler::xenolith::core::QueuePass::FrameQueue&
* Function<void (bool)>&& - функция для вызова при получении контроля

Возвращает:
* bool

# ::stappler::xenolith::core::QueuePass::releaseForFrame(stappler::xenolith::core::QueuePass::FrameQueue&)

## BRIEF

Возвращает контроль над проходом из кадра

## CONTENT

Доступ: public

Возвращает контроль над проходом из кадра

Параметры:
* stappler::xenolith::core::QueuePass::FrameQueue&

Возвращает:
* bool

# ::stappler::xenolith::core::QueuePass::getData() const

## BRIEF

Возвращает данные прохода

## CONTENT

Доступ: public

Возвращает данные прохода

Возвращает:
* stappler::xenolith::core::QueuePassData const*

# ::stappler::xenolith::core::QueuePass::prepare(stappler::xenolith::core::Device&)

## BRIEF

Подготавливает проход для устройства

## CONTENT

Доступ: protected

Подготавливает проход для устройства

Параметры:
* stappler::xenolith::core::Device&


# ::stappler::xenolith::core::QueuePass::FrameQueueWaiter

## BRIEF

Структура ожидания перехвата контроля

## CONTENT

Доступ: protected

Структура ожидания перехвата контроля


# ::stappler::xenolith::core::QueuePass::FrameQueueWaiter::queue

## BRIEF

Кадр, запрашивающий контроль

## CONTENT

Кадр, запрашивающий контроль

Тип: Rc<stappler::xenolith::core::QueuePass::FrameQueue>


# ::stappler::xenolith::core::QueuePass::FrameQueueWaiter::acquired

## BRIEF

Функция получения контроля

## CONTENT

Функция получения контроля

Тип: Function<void (bool)>


# ::stappler::xenolith::core::QueuePass::_owner

## BRIEF

Очередь кадра, контролирующая проход

## CONTENT

Доступ: protected

Очередь кадра, контролирующая проход

Тип: Rc<stappler::xenolith::core::QueuePass::FrameQueue>


# ::stappler::xenolith::core::QueuePass::_next

## BRIEF

Структура перехвата контроля

## CONTENT

Доступ: protected

Структура перехвата контроля

Тип: stappler::xenolith::core::QueuePass::FrameQueueWaiter


# ::stappler::xenolith::core::QueuePass::_frameSizeCallback

## BRIEF

Функция получения размера кадра для фреймбуфера

## CONTENT

Доступ: protected

Функция получения размера кадра для фреймбуфера

Тип: Function<stappler::geom::Extent2 (const stappler::xenolith::core::QueuePass::FrameQueue &)>


# ::stappler::xenolith::core::QueuePass::_frameHandleCallback

## BRIEF

Функция создания интерфейса кадра

## CONTENT

Доступ: protected

Функция создания интерфейса кадра

Тип: FrameHandleCallback


# ::stappler::xenolith::core::QueuePass::_data

## BRIEF

Данные прохода

## CONTENT

Доступ: protected

Данные прохода

Тип: stappler::xenolith::core::QueuePassData const*


# ::stappler::xenolith::core::QueuePassHandle

## BRIEF

Интерфейс кадра для прохода

## CONTENT

Интерфейс кадра для прохода

Базовые классы:
* NamedRef


# ::stappler::xenolith::core::QueuePassHandle::QueuePass

## BRIEF

Тип прохода исполнения

## CONTENT

Доступ: public

Тип прохода исполнения


# ::stappler::xenolith::core::QueuePassHandle::FrameHandle

## BRIEF

Тип кадра

## CONTENT

Доступ: public

Тип кадра


# ::stappler::xenolith::core::QueuePassHandle::FrameQueue

## BRIEF

Тип очереди кадра

## CONTENT

Доступ: public

Тип очереди кадра

# ::stappler::xenolith::core::QueuePassHandle::FrameSync

## BRIEF

Тип данных синхронизации кадра

## CONTENT

Доступ: public

Тип данных синхронизации кадра

# ::stappler::xenolith::core::QueuePassHandle::RenderOrdering

## BRIEF

Тип приоритета рендеринга

## CONTENT

Доступ: public

Тип приоритета рендеринга


# ::stappler::xenolith::core::QueuePassHandle::~QueuePassHandle()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор

# ::stappler::xenolith::core::QueuePassHandle::init(stappler::xenolith::core::QueuePassHandle::QueuePass&,stappler::xenolith::core::QueuePassHandle::FrameQueue const&)

## BRIEF

Создаёт интерфейс кадра для прохода

## CONTENT

Доступ: public

Создаёт интерфейс кадра для прохода

Параметры:
* stappler::xenolith::core::QueuePassHandle::QueuePass&
* stappler::xenolith::core::QueuePassHandle::FrameQueue const&

Возвращает:
* bool

# ::stappler::xenolith::core::QueuePassHandle::setQueueData(stappler::xenolith::core::FramePassData&)

## BRIEF

Устанавливает данные прохода в кадре

## CONTENT

Доступ: public

Устанавливает данные прохода в кадре

Параметры:
* stappler::xenolith::core::FramePassData&


# ::stappler::xenolith::core::QueuePassHandle::getQueueData() const

## BRIEF

Возвращает данные прохода в кадре

## CONTENT

Доступ: public

Возвращает данные прохода в кадре

Возвращает:
* stappler::xenolith::core::FramePassData const*

# ::stappler::xenolith::core::QueuePassHandle::getName() const

## BRIEF

Возвращает название прохода

## CONTENT

Доступ: public

Возвращает название прохода

Возвращает:
* stappler::StringView

# ::stappler::xenolith::core::QueuePassHandle::getData() const

## BRIEF

Возвращает данные прохода

## CONTENT

Доступ: public

Возвращает данные прохода

Возвращает:
* stappler::xenolith::core::QueuePassData const*

# ::stappler::xenolith::core::QueuePassHandle::getQueuePass() const

## BRIEF

Возвращает объект прохода

## CONTENT

Доступ: public

Возвращает объект прохода

Возвращает:
* Rc<stappler::xenolith::core::QueuePassHandle::QueuePass> const&

# ::stappler::xenolith::core::QueuePassHandle::getFramebuffer() const

## BRIEF

Возвращает связанный фреймбуфер

## CONTENT

Доступ: public

Возвращает связанный фреймбуфер, если есть

Возвращает:
* Rc<stappler::xenolith::core::Framebuffer> const&

# ::stappler::xenolith::core::QueuePassHandle::isAvailable(stappler::xenolith::core::QueuePassHandle::FrameQueue const&) const

## BRIEF

Проверяет, что выполнение прохода доступно для кадра

## CONTENT

Доступ: public

Проверяет, что выполнение прохода доступно для кадра

Параметры:
* stappler::xenolith::core::QueuePassHandle::FrameQueue const&

Возвращает:
* bool

# ::stappler::xenolith::core::QueuePassHandle::isAsync() const

## BRIEF

Проверяет, выполняется ли проход асинхронно

## CONTENT

Доступ: public

Проверяет, выполняется ли проход асинхронно

Возвращает:
* bool

# ::stappler::xenolith::core::QueuePassHandle::isSubmitted() const

## BRIEF

Проверяет, отправлен ли проход на исполнение

## CONTENT

Доступ: public

Проверяет, отправлен ли проход на исполнение

Возвращает:
* bool

# ::stappler::xenolith::core::QueuePassHandle::isCompleted() const

## BRIEF

Проверяет, выполнен ли проход

## CONTENT

Доступ: public

Проверяет, выполнен ли проход

Возвращает:
* bool

# ::stappler::xenolith::core::QueuePassHandle::isFramebufferRequired() const

## BRIEF

Проверяет, требует ли проод фреймбуфер

## CONTENT

Доступ: public

Проверяет, требует ли проод фреймбуфер

Возвращает:
* bool

# ::stappler::xenolith::core::QueuePassHandle::prepare(stappler::xenolith::core::QueuePassHandle::FrameQueue&,Function<void (bool)>&&)

## BRIEF

Подготавливает проход для исполнения

## CONTENT

Доступ: public

Подготавливает проход для исполнения. Функция для переопределения.

Параметры:
* stappler::xenolith::core::QueuePassHandle::FrameQueue&
* Function<void (bool)>&&

Возвращает:
* bool

# ::stappler::xenolith::core::QueuePassHandle::submit(stappler::xenolith::core::QueuePassHandle::FrameQueue&,Rc<stappler::xenolith::core::QueuePassHandle::FrameSync>&&,Function<void (bool)>&&,Function<void (bool)>&&)

## BRIEF

Отправляет проход на исполнение

## CONTENT

Доступ: public

Отправляет проход на исполнение. Функция для переопределения.

Параметры:
* stappler::xenolith::core::QueuePassHandle::FrameQueue&
* Rc<stappler::xenolith::core::QueuePassHandle::FrameSync>&&
* Function<void (bool)>&&
* Function<void (bool)>&&


# ::stappler::xenolith::core::QueuePassHandle::finalize(stappler::xenolith::core::QueuePassHandle::FrameQueue&,bool)

## BRIEF

Завершает работу прохода

## CONTENT

Доступ: public

Завершает работу прохода. Функция для переопределения.

Параметры:
* stappler::xenolith::core::QueuePassHandle::FrameQueue&
* bool


# ::stappler::xenolith::core::QueuePassHandle::getAttachmentHandle(stappler::xenolith::core::AttachmentData const*) const

## BRIEF

Возвращает интерфейс вложения для кадра

## CONTENT

Доступ: public

Возвращает интерфейс вложения для кадра

Параметры:
* stappler::xenolith::core::AttachmentData const*

Возвращает:
* stappler::xenolith::core::AttachmentHandle*

# ::stappler::xenolith::core::QueuePassHandle::autorelease(stappler::mem_std::Ref*) const

## BRIEF

Связывает время жизни объекта с проходом

## CONTENT

Доступ: public

Связывает время жизни объекта с проходом

Параметры:
* stappler::mem_std::Ref*


# ::stappler::xenolith::core::QueuePassHandle::getAttachemntData(stappler::xenolith::core::AttachmentData const*) const

## BRIEF

Возвращает данные прохода вложения

## CONTENT

Доступ: public

Возвращает данные прохода вложения

Параметры:
* stappler::xenolith::core::AttachmentData const*

Возвращает:
* stappler::xenolith::core::AttachmentPassData const*

# ::stappler::xenolith::core::QueuePassHandle::prepareSubpasses(stappler::xenolith::core::QueuePassHandle::FrameQueue&)

## BRIEF

Подготавливает подпроходы к исполнению

## CONTENT

Доступ: protected

Подготавливает подпроходы к исполнению

Параметры:
* stappler::xenolith::core::QueuePassHandle::FrameQueue&


# ::stappler::xenolith::core::QueuePassHandle::_isAsync

## BRIEF

Флаг асинхпронного исполнения

## CONTENT

Доступ: protected

Флаг асинхпронного исполнения

Тип: bool


# ::stappler::xenolith::core::QueuePassHandle::_queuePass

## BRIEF

Объект прохода

## CONTENT

Доступ: protected

Объект прохода

Тип: Rc<stappler::xenolith::core::QueuePassHandle::QueuePass>


# ::stappler::xenolith::core::QueuePassHandle::_data

## BRIEF

Данные проходы

## CONTENT

Доступ: protected

Данные проходы

Тип: stappler::xenolith::core::QueuePassData const*


# ::stappler::xenolith::core::QueuePassHandle::_queueData

## BRIEF

Данные кадра для прохода

## CONTENT

Доступ: protected

Данные кадра для прохода

Тип: stappler::xenolith::core::FramePassData*


# ::stappler::xenolith::core::QueuePassHandle::_autoreleaseMutex

## BRIEF

Мутекс времени жизни

## CONTENT

Доступ: protected

Мутекс времени жизни

Тип: stappler::mem_std::Mutex


# ::stappler::xenolith::core::QueuePassHandle::_autorelease

## BRIEF

Объекты времени жизни

## CONTENT

Доступ: protected

Объекты времени жизни

Тип: Vector<Rc<stappler::mem_std::Ref>>
