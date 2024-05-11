Title: XLCoreFrameHandle.h


# XENOLITH_CORE_XLCOREFRAMEHANDLE_H_

## BRIEF

Заголовок интерфейса активного кадра

## CONTENT

Заголовок интерфейса активного кадра


# ::stappler::xenolith::core::FrameHandle

## BRIEF

Тип интерфейса кадра

## CONTENT

Тип интерфейса кадра

Базовые классы:
* Ref


# ::stappler::xenolith::core::FrameHandle::FrameRequest

## BRIEF

Тип запроса на кадр

## CONTENT

Доступ: public

Тип запроса на кадр


# ::stappler::xenolith::core::FrameHandle::GetActiveFramesCount()

## BRIEF

Возвращает чисо активных в текущй момент кадров

## CONTENT

Доступ: public

Возвращает чисо активных в текущй момент кадров

Возвращает:
* uint32_t

# ::stappler::xenolith::core::FrameHandle::DescribeActiveFrames()

## BRIEF

Выводит отладочную информацию об активных кадрах

## CONTENT

Доступ: public

Выводит отладочную информацию об активных кадрах


# ::stappler::xenolith::core::FrameHandle::~FrameHandle()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор


# ::stappler::xenolith::core::FrameHandle::init(stappler::xenolith::core::Loop&,stappler::xenolith::core::Device&,Rc<stappler::xenolith::core::FrameHandle::FrameRequest>&&,uint64_t)

## BRIEF

Создаёт интерфейс кадра

## CONTENT

Доступ: public

Создаёт интерфейс кадра

Параметры:
* stappler::xenolith::core::Loop&
* stappler::xenolith::core::Device&
* Rc<stappler::xenolith::core::FrameHandle::FrameRequest>&&
* uint64_t - поколение кадра

Возвращает:
* bool

# ::stappler::xenolith::core::FrameHandle::update(bool)

## BRIEF

Вызывает функции, ожидающие обновления

## CONTENT

Доступ: public

Вызывает функции, ожидающие обновления

Параметры:
* bool


# ::stappler::xenolith::core::FrameHandle::getTimeStart() const

## BRIEF

Возвращает время начала кадра

## CONTENT

Доступ: public

Возвращает время начала кадра

Возвращает:
* uint64_t

# ::stappler::xenolith::core::FrameHandle::getTimeEnd() const

## BRIEF

Возвращает время заверения кадра

## CONTENT

Доступ: public

Возвращает время заверения кадра

Возвращает:
* uint64_t

# ::stappler::xenolith::core::FrameHandle::getOrder() const

## BRIEF

Возвращает порядковый номер кадра

## CONTENT

Доступ: public

Возвращает порядковый номер кадра

Возвращает:
* uint64_t

# ::stappler::xenolith::core::FrameHandle::getGen() const

## BRIEF

Возвращает поколение кадра

## CONTENT

Доступ: public

Возвращает поколение кадра

Возвращает:
* uint64_t

# ::stappler::xenolith::core::FrameHandle::getSubmissionTime() const

## BRIEF

Возвращает время отпраки кадра на исполнение

## CONTENT

Доступ: public

Возвращает время отпраки кадра на исполнение

Возвращает:
* uint64_t

# ::stappler::xenolith::core::FrameHandle::getLoop() const

## BRIEF

Возвращает графический цикл кадра

## CONTENT

Доступ: public

Возвращает графический цикл кадра

Возвращает:
* stappler::xenolith::core::Loop*

# ::stappler::xenolith::core::FrameHandle::getDevice() const

## BRIEF

Возвращает устройство, на котором запущен кадр

## CONTENT

Доступ: public

Возвращает устройство, на котором запущен кадр

Возвращает:
* stappler::xenolith::core::Device*

# ::stappler::xenolith::core::FrameHandle::getEmitter() const

## BRIEF

Возвращает эмиттер кадра

## CONTENT

Доступ: public

Возвращает эмиттер кадра

Возвращает:
* Rc<stappler::xenolith::core::FrameEmitter> const&

# ::stappler::xenolith::core::FrameHandle::getQueue() const

## BRIEF

Возвращает базовую очередь рендеринга

## CONTENT

Доступ: public

Возвращает базовую очередь рендеринга

Возвращает:
* Rc<stappler::xenolith::core::Queue> const&

# ::stappler::xenolith::core::FrameHandle::getFrameConstraints() const

## BRIEF

Возвращает ограничительные параметры кадра

## CONTENT

Доступ: public

Возвращает ограничительные параметры кадра

Возвращает:
* stappler::xenolith::core::FrameContraints const&

# ::stappler::xenolith::core::FrameHandle::getPool() const

## BRIEF

Возвращает пул памяти для кадра

## CONTENT

Доступ: public

Возвращает пул памяти для кадра

Возвращает:
* Rc<stappler::xenolith::PoolRef> const&

# ::stappler::xenolith::core::FrameHandle::getRequest() const

## BRIEF

Возвращает запрос ка кадр

## CONTENT

Доступ: public

Возвращает запрос ка кадр

Возвращает:
* Rc<stappler::xenolith::core::FrameHandle::FrameRequest> const&

# ::stappler::xenolith::core::FrameHandle::getImageSpecialization(stappler::xenolith::core::ImageAttachment const*) const

## BRIEF

Возвращает специализацию для изображения

## CONTENT

Доступ: public

Возвращает специализацию для изображения

Параметры:
* stappler::xenolith::core::ImageAttachment const*

Возвращает:
* stappler::xenolith::core::ImageInfoData const* - nullptr если не установлена

# ::stappler::xenolith::core::FrameHandle::getOutputBinding(stappler::xenolith::core::Attachment const*) const

## BRIEF

Возвращает объект для получения результата кадра

## CONTENT

Доступ: public

Возвращает объект для получения результата кадра

Параметры:
* stappler::xenolith::core::Attachment const*

Возвращает:
* stappler::xenolith::core::FrameOutputBinding const*

# ::stappler::xenolith::core::FrameHandle::getOutputBinding(stappler::xenolith::core::AttachmentData const*) const

## BRIEF

Возвращает объект для получения результата кадра

## CONTENT

Доступ: public

Возвращает объект для получения результата кадра

Параметры:
* stappler::xenolith::core::AttachmentData const*

Возвращает:
* stappler::xenolith::core::FrameOutputBinding const*

# ::stappler::xenolith::core::FrameHandle::getRenderTarget(stappler::xenolith::core::Attachment const*) const

## BRIEF

Возвращает целевое изображение для результата рендеринга

## CONTENT

Доступ: public

Возвращает целевое изображение для результата рендеринга

Параметры:
* stappler::xenolith::core::Attachment const*

Возвращает:
* Rc<stappler::xenolith::core::ImageStorage>

# ::stappler::xenolith::core::FrameHandle::getRenderTarget(stappler::xenolith::core::AttachmentData const*) const

## BRIEF

Возвращает целевое изображение для результата рендеринга

## CONTENT

Доступ: public

Возвращает целевое изображение для результата рендеринга

Параметры:
* stappler::xenolith::core::AttachmentData const*

Возвращает:
* Rc<stappler::xenolith::core::ImageStorage>

# ::stappler::xenolith::core::FrameHandle::getSignalDependencies() const

## BRIEF

Возвращает зависимости, выполняемые в результате этого кадра

## CONTENT

Доступ: public

Возвращает зависимости, выполняемые в результате этого кадра

Возвращает:
* Vector<Rc<stappler::xenolith::core::DependencyEvent>> const&

# ::stappler::xenolith::core::FrameHandle::getFrameQueues() const

## BRIEF

Возвращает набор очередей для кадра

## CONTENT

Доступ: public

Возвращает набор очередей для кадра

Возвращает:
* Vector<Rc<stappler::xenolith::core::FrameQueue>> const&

# ::stappler::xenolith::core::FrameHandle::getFrameQueue(stappler::xenolith::core::Queue*) const

## BRIEF

Возвращает очередь кадра для очереди рендеринга

## CONTENT

Доступ: public

Возвращает очередь кадра для очереди рендеринга

Параметры:
* stappler::xenolith::core::Queue*

Возвращает:
* stappler::xenolith::core::FrameQueue*

# ::stappler::xenolith::core::FrameHandle::schedule(Function<bool (stappler::xenolith::core::FrameHandle &)>&&,stappler::StringView)

## BRIEF

Выполняет асинхронную задачу в контексте кадра

## CONTENT

Доступ: public

Выполняет асинхронную задачу в контексте кадра

Параметры:
* Function<bool (stappler::xenolith::core::FrameHandle &)>&&
* stappler::StringView


# ::stappler::xenolith::core::FrameHandle::performInQueue(Function<void (stappler::xenolith::core::FrameHandle &)>&&,stappler::mem_std::Ref*,stappler::StringView)

## BRIEF

Выполняет асинхронную задачу в контексте кадра

## CONTENT

Доступ: public

Выполняет асинхронную задачу в контексте кадра

Параметры:
* Function<void (stappler::xenolith::core::FrameHandle &)>&&
* stappler::mem_std::Ref*
* stappler::StringView


# ::stappler::xenolith::core::FrameHandle::performInQueue(Function<bool (stappler::xenolith::core::FrameHandle &)>&&,Function<void (stappler::xenolith::core::FrameHandle &, bool)>&&,stappler::mem_std::Ref*,stappler::StringView)

## BRIEF

Выполняет асинхронную задачу в контексте кадра

## CONTENT

Доступ: public

Выполняет асинхронную задачу в контексте кадра

Параметры:
* Function<bool (stappler::xenolith::core::FrameHandle &)>&&
* Function<void (stappler::xenolith::core::FrameHandle &, bool)>&&
* stappler::mem_std::Ref*
* stappler::StringView


# ::stappler::xenolith::core::FrameHandle::performOnGlThread(Function<void (stappler::xenolith::core::FrameHandle &)>&&,stappler::mem_std::Ref*,bool,stappler::StringView)

## BRIEF

Выполняет задачу в основном потоке кадра

## CONTENT

Доступ: public

Выполняет задачу в основном потоке кадра

Параметры:
* Function<void (stappler::xenolith::core::FrameHandle &)>&&
* stappler::mem_std::Ref*
* bool
* stappler::StringView


# ::stappler::xenolith::core::FrameHandle::performRequiredTask(Function<bool (stappler::xenolith::core::FrameHandle &)>&&,stappler::mem_std::Ref*,stappler::StringView)

## BRIEF

Выполняет асинхронную задачу, требуемую для завершения кадра

## CONTENT

Доступ: public

Выполняет асинхронную задачу, требуемую для завершения кадра. Кадр не может быть завершён, пока задача не выполнена.

Параметры:
* Function<bool (stappler::xenolith::core::FrameHandle &)>&&
* stappler::mem_std::Ref*
* stappler::StringView


# ::stappler::xenolith::core::FrameHandle::performRequiredTask(Function<bool (stappler::xenolith::core::FrameHandle &)>&&,Function<void (stappler::xenolith::core::FrameHandle &, bool)>&&,stappler::mem_std::Ref*,stappler::StringView)

## BRIEF

Выполняет асинхронную задачу, требуемую для завершения кадра

## CONTENT

Доступ: public

Выполняет асинхронную задачу, требуемую для завершения кадра. Кадр не может быть завершён, пока задача не выполнена.

Параметры:
* Function<bool (stappler::xenolith::core::FrameHandle &)>&&
* Function<void (stappler::xenolith::core::FrameHandle &, bool)>&&
* stappler::mem_std::Ref*
* stappler::StringView


# ::stappler::xenolith::core::FrameHandle::isSubmitted() const

## BRIEF

Проверяет, отправлен ли кадр на исполнение

## CONTENT

Доступ: public

Проверяет, отправлен ли кадр на исполнение

Возвращает:
* bool

# ::stappler::xenolith::core::FrameHandle::isValid() const

## BRIEF

Проверяет, работоспособен ли кадр

## CONTENT

Доступ: public

Проверяет, работоспособен ли кадр

Возвращает:
* bool

# ::stappler::xenolith::core::FrameHandle::isValidFlag() const

## BRIEF

Проверяет, работоспособен ли кадр на основе флага работоспособности

## CONTENT

Доступ: public

Проверяет, работоспособен ли кадр на основе флага работоспособности. Флаг показывает, был ли отменён кадр извне.

Возвращает:
* bool

# ::stappler::xenolith::core::FrameHandle::isPersistentMapping() const

## BRIEF

Проверяет, использует ли кадр постоянно привязанные буферы устройства

## CONTENT

Доступ: public

Проверяет, использует ли кадр постоянно привязанные буферы устройства

Возвращает:
* bool

# ::stappler::xenolith::core::FrameHandle::getInputData(stappler::xenolith::core::AttachmentData const*)

## BRIEF

Возвращает предопределённые входящие данные для вложения

## CONTENT

Доступ: public

Возвращает предопределённые входящие данные для вложения

Параметры:
* stappler::xenolith::core::AttachmentData const*

Возвращает:
* Rc<stappler::xenolith::core::AttachmentInputData>

# ::stappler::xenolith::core::FrameHandle::isReadyForSubmit() const

## BRIEF

Проверяет, готов ли кадр к отпраке

## CONTENT

Доступ: public

Проверяет, готов ли кадр к отпраке

Возвращает:
* bool

# ::stappler::xenolith::core::FrameHandle::setReadyForSubmit(bool)

## BRIEF

Устанавливает флаг готовности к отправке

## CONTENT

Доступ: public

Устанавливает флаг готовности к отправке

Параметры:
* bool


# ::stappler::xenolith::core::FrameHandle::invalidate()

## BRIEF

Отменяет кадр

## CONTENT

Доступ: public

Отменяет кадр


# ::stappler::xenolith::core::FrameHandle::setCompleteCallback(Function<void (stappler::xenolith::core::FrameHandle &)>&&)

## BRIEF

Устанавливает функцию завершения кадра

## CONTENT

Доступ: public

Устанавливает функцию завершения кадра

Параметры:
* Function<void (stappler::xenolith::core::FrameHandle &)>&&


# ::stappler::xenolith::core::FrameHandle::onQueueSubmitted(stappler::xenolith::core::FrameQueue&)

## BRIEF

Обрабатывает событие завершения отправки очереди на исполнение

## CONTENT

Доступ: public

Обрабатывает событие завершения отправки очереди на исполнение

Параметры:
* stappler::xenolith::core::FrameQueue&


# ::stappler::xenolith::core::FrameHandle::onQueueComplete(stappler::xenolith::core::FrameQueue&)

## BRIEF

Обрабатывает событие завершения работы очереди

## CONTENT

Доступ: public

Обрабатывает событие завершения работы очереди

Параметры:
* stappler::xenolith::core::FrameQueue&


# ::stappler::xenolith::core::FrameHandle::onQueueInvalidated(stappler::xenolith::core::FrameQueue&)

## BRIEF

Обрабатывает событие отмены работы очереди

## CONTENT

Доступ: public

Обрабатывает событие отмены работы очереди

Параметры:
* stappler::xenolith::core::FrameQueue&


# ::stappler::xenolith::core::FrameHandle::onOutputAttachment(stappler::xenolith::core::FrameAttachmentData&)

## BRIEF

Обрабатывает заверешние обработки вложения

## CONTENT

Доступ: public

Обрабатывает заверешние обработки вложения

Параметры:
* stappler::xenolith::core::FrameAttachmentData&


# ::stappler::xenolith::core::FrameHandle::onOutputAttachmentInvalidated(stappler::xenolith::core::FrameAttachmentData&)

## BRIEF

Обрабатывает отмену обработки вложения

## CONTENT

Доступ: public

Обрабатывает отмену обработки вложения

Параметры:
* stappler::xenolith::core::FrameAttachmentData&


# ::stappler::xenolith::core::FrameHandle::waitForDependencies(Vector<Rc<stappler::xenolith::core::DependencyEvent>> const&,Function<void (stappler::xenolith::core::FrameHandle &, bool)>&&)

## BRIEF

Асинхронно ожидает исполнения зависимостей

## CONTENT

Доступ: public

Асинхронно ожидает исполнения зависимостей

Параметры:
* Vector<Rc<stappler::xenolith::core::DependencyEvent>> const&
* Function<void (stappler::xenolith::core::FrameHandle &, bool)>&& - функция для вызова при удовлетворении зависимостей


# ::stappler::xenolith::core::FrameHandle::waitForInput(stappler::xenolith::core::FrameQueue&,Rc<stappler::xenolith::core::AttachmentHandle> const&,Function<void (bool)>&&)

## BRIEF

Асинхронно ожидает появления входящих данных для вложения

## CONTENT

Доступ: public

Асинхронно ожидает появления входящих данных для вложения

Параметры:
* stappler::xenolith::core::FrameQueue&
* Rc<stappler::xenolith::core::AttachmentHandle> const&
* Function<void (bool)>&&


# ::stappler::xenolith::core::FrameHandle::signalDependencies(bool)

## BRIEF

Устанавливает зависимсоти, связанные с кадром, как выполеннные

## CONTENT

Доступ: public

Устанавливает зависимсоти, связанные с кадром, как выполеннные

Параметры:
* bool - true если успешно


# ::stappler::xenolith::core::FrameHandle::setup()

## BRIEF

Настраивает кадр для выполнения

## CONTENT

Доступ: protected

Настраивает кадр для выполнения

Возвращает:
* bool

# ::stappler::xenolith::core::FrameHandle::onRequiredTaskCompleted(stappler::StringView)

## BRIEF

Обрабатывает выполнение асинхронного задания

## CONTENT

Доступ: protected

Обрабатывает выполнение асинхронного задания

Параметры:
* stappler::StringView


# ::stappler::xenolith::core::FrameHandle::tryComplete()

## BRIEF

Пытается успешно завершить кадр

## CONTENT

Доступ: protected

Пытается успешно завершить кадр. Завершает если требуемые задания выполнены.


# ::stappler::xenolith::core::FrameHandle::onComplete()

## BRIEF

Обрабатывает завершение кадра

## CONTENT

Доступ: protected

Обрабатывает завершение кадра


# ::stappler::xenolith::core::FrameHandle::_loop

## BRIEF

Графический цикл

## CONTENT

Доступ: protected

Графический цикл

Тип: stappler::xenolith::core::Loop*


# ::stappler::xenolith::core::FrameHandle::_device

## BRIEF

Устройство исполнения

## CONTENT

Доступ: protected

Устройство исполнения

Тип: stappler::xenolith::core::Device*


# ::stappler::xenolith::core::FrameHandle::_pool

## BRIEF

Пул памяти

## CONTENT

Доступ: protected

Пул памяти

Тип: Rc<stappler::xenolith::PoolRef>


# ::stappler::xenolith::core::FrameHandle::_request

## BRIEF

Запрос на кадр

## CONTENT

Доступ: protected

Запрос на кадр

Тип: Rc<stappler::xenolith::core::FrameHandle::FrameRequest>


# ::stappler::xenolith::core::FrameHandle::_timeStart

## BRIEF

Время начала

## CONTENT

Доступ: protected

Время начала

Тип: uint64_t


# ::stappler::xenolith::core::FrameHandle::_timeEnd

## BRIEF

Время завершения

## CONTENT

Доступ: protected

Время завершения

Тип: uint64_t


# ::stappler::xenolith::core::FrameHandle::_gen

## BRIEF

Поколение кадра

## CONTENT

Доступ: protected

Поколение кадра

Тип: uint64_t


# ::stappler::xenolith::core::FrameHandle::_order

## BRIEF

Порядковый номер кадра

## CONTENT

Доступ: protected

Порядковый номер кадра

Тип: uint64_t


# ::stappler::xenolith::core::FrameHandle::_submissionTime

## BRIEF

Время отправки кадра

## CONTENT

Доступ: protected

Время отправки кадра

Тип: uint64_t


# ::stappler::xenolith::core::FrameHandle::_tasksRequired

## BRIEF

Число требуемых к исполнению асинхронных задач

## CONTENT

Доступ: protected

Число требуемых к исполнению асинхронных задач

Тип: std::atomic<uint32_t>


# ::stappler::xenolith::core::FrameHandle::_tasksCompleted

## BRIEF

Число выполненных задач

## CONTENT

Доступ: protected

Число выполненных задач

Тип: uint32_t


# ::stappler::xenolith::core::FrameHandle::_queuesSubmitted

## BRIEF

Число отправленных на исполнение очередей

## CONTENT

Доступ: protected

Число отправленных на исполнение очередей

Тип: uint32_t


# ::stappler::xenolith::core::FrameHandle::_queuesCompleted

## BRIEF

Число завершённых очередей

## CONTENT

Доступ: protected

Число завершённых очередей

Тип: uint32_t


# ::stappler::xenolith::core::FrameHandle::_submitted

## BRIEF

Флаг отправки

## CONTENT

Доступ: protected

Флаг отправки

Тип: bool


# ::stappler::xenolith::core::FrameHandle::_completed

## BRIEF

Флаг завершнеия

## CONTENT

Доступ: protected

Флаг завершнеия

Тип: bool


# ::stappler::xenolith::core::FrameHandle::_valid

## BRIEF

Флаг работоспособности

## CONTENT

Доступ: protected

Флаг работоспособности

Тип: bool


# ::stappler::xenolith::core::FrameHandle::_queues

## BRIEF

Очереди для выполнения

## CONTENT

Доступ: protected

Очереди для выполнения

Тип: Vector<Rc<stappler::xenolith::core::FrameQueue>>


# ::stappler::xenolith::core::FrameHandle::_complete

## BRIEF

Функция для уведомления о завершении

## CONTENT

Доступ: protected

Функция для уведомления о завершении

Тип: Function<void (stappler::xenolith::core::FrameHandle &)>
