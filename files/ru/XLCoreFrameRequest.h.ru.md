Title: XLCoreFrameRequest.h


# XENOLITH_CORE_XLCOREFRAMEREQUEST_H_

## BRIEF

Заголовок запроса на кадр

## CONTENT

Заголовок запроса на кадр


# ::stappler::xenolith::core::FrameOutputBinding

## BRIEF

Объект связывания результата рендеринга с целью

## CONTENT

Объект связывания результата рендеринга с целью

Базовые классы:
* Ref


# ::stappler::xenolith::core::FrameOutputBinding::CompleteCallback

## BRIEF

Функция завершения

## CONTENT

Функция завершения

# ::stappler::xenolith::core::FrameOutputBinding::attachment

## BRIEF

Вложение, для которого связывается результат

## CONTENT

Вложение, для которого связывается результат

Тип: stappler::xenolith::core::AttachmentData const*


# ::stappler::xenolith::core::FrameOutputBinding::callback

## BRIEF

Функция завершения

## CONTENT

Функция завершения

Тип: CompleteCallback


# ::stappler::xenolith::core::FrameOutputBinding::handle

## BRIEF

Пользовательский объект

## CONTENT

Пользовательский объект

Тип: Rc<stappler::mem_std::Ref>


# ::stappler::xenolith::core::FrameOutputBinding::FrameOutputBinding(stappler::xenolith::core::AttachmentData const*,stappler::xenolith::core::FrameOutputBinding::CompleteCallback&&,Rc<stappler::mem_std::Ref>&&)

## BRIEF

Конструктор

## CONTENT

Конструктор

Параметры:
* stappler::xenolith::core::AttachmentData const*
* stappler::xenolith::core::FrameOutputBinding::CompleteCallback&&
* Rc<stappler::mem_std::Ref>&&


# ::stappler::xenolith::core::FrameOutputBinding::~FrameOutputBinding()

## BRIEF

Деструктор

## CONTENT

Деструктор


# ::stappler::xenolith::core::FrameOutputBinding::handleReady(stappler::xenolith::core::FrameAttachmentData&,bool)

## BRIEF

Отправляет результат для вложения

## CONTENT

Отправляет результат для вложения

Параметры:
* stappler::xenolith::core::FrameAttachmentData&
* bool

Возвращает:
* bool

# ::stappler::xenolith::core::FrameRequest

## BRIEF

Тип запроса на кадр

## CONTENT

Тип запроса на кадр. Содержит данные для отрисовки кадра.

Базовые классы:
* Ref


# ::stappler::xenolith::core::FrameRequest::CompleteCallback

## BRIEF

Функция завершения

## CONTENT

Доступ: public

Функция завершения



# ::stappler::xenolith::core::FrameRequest::~FrameRequest()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор


# ::stappler::xenolith::core::FrameRequest::init(Rc<stappler::xenolith::core::FrameEmitter> const&,stappler::xenolith::core::FrameContraints const&)

## BRIEF

Создаёт запрос из породителя и ограничений кадра

## CONTENT

Доступ: public

Создаёт запрос из породителя и ограничений кадра

Параметры:
* Rc<stappler::xenolith::core::FrameEmitter> const&
* stappler::xenolith::core::FrameContraints const&

Возвращает:
* bool

# ::stappler::xenolith::core::FrameRequest::init(Rc<stappler::xenolith::core::Queue> const&)

## BRIEF

Сохдаёт запрос для очереди

## CONTENT

Доступ: public

Сохдаёт запрос для очереди

Параметры:
* Rc<stappler::xenolith::core::Queue> const&

Возвращает:
* bool

# ::stappler::xenolith::core::FrameRequest::init(Rc<stappler::xenolith::core::Queue> const&,stappler::xenolith::core::FrameContraints const&)

## BRIEF

Сохдаёт запрос для очереди и ограничений

## CONTENT

Доступ: public

Сохдаёт запрос для очереди и ограничений

Параметры:
* Rc<stappler::xenolith::core::Queue> const&
* stappler::xenolith::core::FrameContraints const&

Возвращает:
* bool

# ::stappler::xenolith::core::FrameRequest::init(Rc<stappler::xenolith::core::Queue> const&,Rc<stappler::xenolith::core::FrameEmitter> const&,stappler::xenolith::core::FrameContraints const&)

## BRIEF

Сохдаёт запрос для очереди и ограничений

## CONTENT

Доступ: public

Сохдаёт запрос для очереди и ограничений

Параметры:
* Rc<stappler::xenolith::core::Queue> const&
* Rc<stappler::xenolith::core::FrameEmitter> const&
* stappler::xenolith::core::FrameContraints const&

Возвращает:
* bool

# ::stappler::xenolith::core::FrameRequest::addSignalDependency(Rc<stappler::xenolith::core::DependencyEvent>&&)

## BRIEF

Добавляет зависимость, выполняемую кадром

## CONTENT

Доступ: public

Добавляет зависимость, выполняемую кадром

Параметры:
* Rc<stappler::xenolith::core::DependencyEvent>&&


# ::stappler::xenolith::core::FrameRequest::addSignalDependencies(Vector<Rc<stappler::xenolith::core::DependencyEvent>>&&)

## BRIEF

Добавляет зависимости, выполняемые кадром

## CONTENT

Доступ: public

Добавляет зависимости, выполняемые кадром

Параметры:
* Vector<Rc<stappler::xenolith::core::DependencyEvent>>&&


# ::stappler::xenolith::core::FrameRequest::addImageSpecialization(stappler::xenolith::core::ImageAttachment const*,stappler::xenolith::core::ImageInfoData&&)

## BRIEF

Добавляет специализацию для вложения изображения

## CONTENT

Доступ: public

Добавляет специализацию для вложения изображения. Специализация изменяет параметры изображения для вложения.

Параметры:
* stappler::xenolith::core::ImageAttachment const*
* stappler::xenolith::core::ImageInfoData&&


# ::stappler::xenolith::core::FrameRequest::getImageSpecialization(stappler::xenolith::core::ImageAttachment const*) const

## BRIEF

Получает предустановенную специализацию для изображения

## CONTENT

Доступ: public

Получает предустановенную специализацию для изображения

Параметры:
* stappler::xenolith::core::ImageAttachment const*

Возвращает:
* stappler::xenolith::core::ImageInfoData const* - nullptr если не установлена

# ::stappler::xenolith::core::FrameRequest::addInput(stappler::xenolith::core::Attachment const*,Rc<stappler::xenolith::core::AttachmentInputData>&&)

## BRIEF

Добавляет предустановленные входящие данные для вложения

## CONTENT

Доступ: public

Добавляет предустановленные входящие данные для вложения

Параметры:
* stappler::xenolith::core::Attachment const*
* Rc<stappler::xenolith::core::AttachmentInputData>&&

Возвращает:
* bool

# ::stappler::xenolith::core::FrameRequest::addInput(stappler::xenolith::core::AttachmentData const*,Rc<stappler::xenolith::core::AttachmentInputData>&&)

## BRIEF

Добавляет предустановленные входящие данные для вложения

## CONTENT

Доступ: public

Добавляет предустановленные входящие данные для вложения

Параметры:
* stappler::xenolith::core::AttachmentData const*
* Rc<stappler::xenolith::core::AttachmentInputData>&&

Возвращает:
* bool

# ::stappler::xenolith::core::FrameRequest::setQueue(Rc<stappler::xenolith::core::Queue> const&)

## BRIEF

Устанавливает базовую очередь для работы

## CONTENT

Доступ: public

Устанавливает базовую очередь для работы

Параметры:
* Rc<stappler::xenolith::core::Queue> const&


# ::stappler::xenolith::core::FrameRequest::setOutput(Rc<stappler::xenolith::core::FrameOutputBinding>&&)

## BRIEF

Связывает результат вложения с внешним объектом

## CONTENT

Доступ: public

Связывает результат вложения с внешним объектом

Параметры:
* Rc<stappler::xenolith::core::FrameOutputBinding>&&


# ::stappler::xenolith::core::FrameRequest::setOutput(stappler::xenolith::core::AttachmentData const*,stappler::xenolith::core::FrameRequest::CompleteCallback&&,Rc<stappler::mem_std::Ref>&&)

## BRIEF

Связывает результат вложения с внешним объектом

## CONTENT

Доступ: public

Связывает результат вложения с внешним объектом

Параметры:
* stappler::xenolith::core::AttachmentData const*
* stappler::xenolith::core::FrameRequest::CompleteCallback&&
* Rc<stappler::mem_std::Ref>&&


# ::stappler::xenolith::core::FrameRequest::setOutput(stappler::xenolith::core::Attachment const*,stappler::xenolith::core::FrameRequest::CompleteCallback&&,Rc<stappler::mem_std::Ref>&&)

## BRIEF

Связывает результат вложения с внешним объектом

## CONTENT

Доступ: public

Связывает результат вложения с внешним объектом

Параметры:
* stappler::xenolith::core::Attachment const*
* stappler::xenolith::core::FrameRequest::CompleteCallback&&
* Rc<stappler::mem_std::Ref>&&


# ::stappler::xenolith::core::FrameRequest::setRenderTarget(stappler::xenolith::core::AttachmentData const*,Rc<stappler::xenolith::core::ImageStorage>&&)

## BRIEF

Устанавливает цель для рендеринга

## CONTENT

Доступ: public

Устанавливает цель для рендеринга

Параметры:
* stappler::xenolith::core::AttachmentData const*
* Rc<stappler::xenolith::core::ImageStorage>&&


# ::stappler::xenolith::core::FrameRequest::onOutputReady(stappler::xenolith::core::Loop&,stappler::xenolith::core::FrameAttachmentData&)

## BRIEF

Обрабатывает получение результата вложения

## CONTENT

Доступ: public

Обрабатывает получение результата вложения

Параметры:
* stappler::xenolith::core::Loop&
* stappler::xenolith::core::FrameAttachmentData&

Возвращает:
* bool

# ::stappler::xenolith::core::FrameRequest::onOutputInvalidated(stappler::xenolith::core::Loop&,stappler::xenolith::core::FrameAttachmentData&)

## BRIEF

Обрабатывает аварийное завершение вложения

## CONTENT

Доступ: public

Обрабатывает аварийное завершение вложения

Параметры:
* stappler::xenolith::core::Loop&
* stappler::xenolith::core::FrameAttachmentData&


# ::stappler::xenolith::core::FrameRequest::finalize(stappler::xenolith::core::Loop&,HashMap<const stappler::xenolith::core::AttachmentData *, stappler::xenolith::core::FrameAttachmentData *>&,bool)

## BRIEF

Завершает работу кадра для запроса

## CONTENT

Доступ: public

Завершает работу кадра для запроса

Параметры:
* stappler::xenolith::core::Loop&
* HashMap<const stappler::xenolith::core::AttachmentData *, stappler::xenolith::core::FrameAttachmentData *>&
* bool


# ::stappler::xenolith::core::FrameRequest::signalDependencies(stappler::xenolith::core::Loop&,stappler::xenolith::core::Queue*,bool)

## BRIEF

Сообщает о готовности зависимостей в запросе

## CONTENT

Доступ: public

Сообщает о готовности зависимостей в запросе

Параметры:
* stappler::xenolith::core::Loop&
* stappler::xenolith::core::Queue*
* bool


# ::stappler::xenolith::core::FrameRequest::getInputData(stappler::xenolith::core::AttachmentData const*)

## BRIEF

Получает предустановленные данные для вложения

## CONTENT

Доступ: public

Получает предустановленные данные для вложения

Параметры:
* stappler::xenolith::core::AttachmentData const*

Возвращает:
* Rc<stappler::xenolith::core::AttachmentInputData>

# ::stappler::xenolith::core::FrameRequest::getPool() const

## BRIEF

Возвращает пул памяти

## CONTENT

Доступ: public

Возвращает пул памяти

Возвращает:
* Rc<stappler::xenolith::PoolRef> const&

# ::stappler::xenolith::core::FrameRequest::getRenderTarget(stappler::xenolith::core::AttachmentData const*)

## BRIEF

Возвращает цель рендеринга

## CONTENT

Доступ: public

Возвращает цель рендеринга

Параметры:
* stappler::xenolith::core::AttachmentData const*

Возвращает:
* Rc<stappler::xenolith::core::ImageStorage>

# ::stappler::xenolith::core::FrameRequest::getEmitter() const

## BRIEF

Возвращает породитель кадра

## CONTENT

Доступ: public

Возвращает породитель кадра

Возвращает:
* Rc<stappler::xenolith::core::FrameEmitter> const&

# ::stappler::xenolith::core::FrameRequest::getQueue() const

## BRIEF

Возвращает базовую очередь

## CONTENT

Доступ: public

Возвращает базовую очередь

Возвращает:
* Rc<stappler::xenolith::core::Queue> const&

# ::stappler::xenolith::core::FrameRequest::getQueueList() const

## BRIEF

Возвращает список очередей для рендеринга

## CONTENT

Доступ: public

Возвращает список очередей для рендеринга

Возвращает:
* Set<Rc<stappler::xenolith::core::Queue>>

# ::stappler::xenolith::core::FrameRequest::getFrameConstraints() const

## BRIEF

Возвращает ограничения кадра

## CONTENT

Доступ: public

Возвращает ограничения кадра

Возвращает:
* stappler::xenolith::core::FrameContraints const&

# ::stappler::xenolith::core::FrameRequest::setReadyForSubmit(bool)

## BRIEF

Устанавливает готовность для отправки на исполнение

## CONTENT

Доступ: public

Устанавливает готовность для отправки на исполнение

Параметры:
* bool


# ::stappler::xenolith::core::FrameRequest::isReadyForSubmit() const

## BRIEF

Проверяет, готов ли запрос для отправки на исполнение

## CONTENT

Доступ: public

Проверяет, готов ли запрос для отправки на исполнение

Возвращает:
* bool

# ::stappler::xenolith::core::FrameRequest::isPersistentMapping() const

## BRIEF

Проверяет, нужно ли использовать постоянное связывание данных устройства

## CONTENT

Доступ: public

Проверяет, нужно ли использовать постоянное связывание данных устройства

Возвращает:
* bool

# ::stappler::xenolith::core::FrameRequest::setSceneId(uint64_t)

## BRIEF

Устанавливает уникальный идентификатор сцены, запросившей кадр

## CONTENT

Доступ: public

Устанавливает уникальный идентификатор сцены, запросившей кадр

Параметры:
* uint64_t


# ::stappler::xenolith::core::FrameRequest::getSceneId() const

## BRIEF

Возвращает уникальный идентификатор сцены

## CONTENT

Доступ: public

Возвращает уникальный идентификатор сцены

Возвращает:
* uint64_t

# ::stappler::xenolith::core::FrameRequest::getSignalDependencies() const

## BRIEF

Возвращает зависимости, исполняемые кадром

## CONTENT

Доступ: public

Возвращает зависимости, исполняемые кадром

Возвращает:
* Vector<Rc<stappler::xenolith::core::DependencyEvent>> const&

# ::stappler::xenolith::core::FrameRequest::FrameRequest()

## BRIEF

Конструктор

## CONTENT

Доступ: public

Конструктор


# ::stappler::xenolith::core::FrameRequest::waitForInput(stappler::xenolith::core::FrameQueue&,Rc<stappler::xenolith::core::AttachmentHandle> const&,Function<void (bool)>&&)

## BRIEF

Асинхронно ожидает входящие данные для вложения

## CONTENT

Доступ: public

Асинхронно ожидает входящие данные для вложения

Параметры:
* stappler::xenolith::core::FrameQueue&
* Rc<stappler::xenolith::core::AttachmentHandle> const&
* Function<void (bool)>&&


# ::stappler::xenolith::core::FrameRequest::getOutputBinding(stappler::xenolith::core::AttachmentData const*) const

## BRIEF

Возвращает связь результата для вложения 

## CONTENT

Доступ: public

Возвращает связь результата для вложения

Параметры:
* stappler::xenolith::core::AttachmentData const*

Возвращает:
* stappler::xenolith::core::FrameOutputBinding const*

# ::stappler::xenolith::core::FrameRequest::autorelease(stappler::mem_std::Ref*)

## BRIEF

Помечает объект для хранения во время жизни кадра

## CONTENT

Доступ: public

Помечает объект для хранения во время жизни кадра

Параметры:
* stappler::mem_std::Ref*


# ::stappler::xenolith::core::FrameRequest::FrameRequest(stappler::xenolith::core::FrameRequest const&)

## BRIEF

Конструктор

## CONTENT

Доступ: protected

Конструктор

Параметры:
* stappler::xenolith::core::FrameRequest const&


# ::stappler::xenolith::core::FrameRequest::operator=(stappler::xenolith::core::FrameRequest const&)

## BRIEF

Оператор копирования

## CONTENT

Доступ: protected

Оператор копирования

Параметры:
* stappler::xenolith::core::FrameRequest const&

Возвращает:
* stappler::xenolith::core::FrameRequest&

# ::stappler::xenolith::core::FrameRequest::_pool

## BRIEF

Пул памяти

## CONTENT

Доступ: protected

Пул памяти

Тип: Rc<stappler::xenolith::PoolRef>


# ::stappler::xenolith::core::FrameRequest::_emitter

## BRIEF

Породитель кадра

## CONTENT

Доступ: protected

Породитель кадра

Тип: Rc<stappler::xenolith::core::FrameEmitter>


# ::stappler::xenolith::core::FrameRequest::_queue

## BRIEF

Основная очередь

## CONTENT

Доступ: protected

Основная очередь

Тип: Rc<stappler::xenolith::core::Queue>


# ::stappler::xenolith::core::FrameRequest::_constraints

## BRIEF

Ограничения кадра

## CONTENT

Доступ: protected

Ограничения кадра

Тип: stappler::xenolith::core::FrameContraints


# ::stappler::xenolith::core::FrameRequest::_input

## BRIEF

Входящие данные

## CONTENT

Доступ: protected

Входящие данные

Тип: Map<const stappler::xenolith::core::AttachmentData *, Rc<stappler::xenolith::core::AttachmentInputData>>


# ::stappler::xenolith::core::FrameRequest::_readyForSubmit

## BRIEF

Флаг готовности к отправке

## CONTENT

Доступ: protected

Флаг готовности к отправке

Тип: bool


# ::stappler::xenolith::core::FrameRequest::_persistentMappings

## BRIEF

Флаг постоянной связи данных

## CONTENT

Доступ: protected

Флаг постоянной связи данных

Тип: bool


# ::stappler::xenolith::core::FrameRequest::_sceneId

## BRIEF

Идентификатор сцены

## CONTENT

Доступ: protected

Идентификатор сцены

Тип: uint64_t


# ::stappler::xenolith::core::FrameRequest::_imageSpecialization

## BRIEF

Специализации изображений

## CONTENT

Доступ: protected

Специализации изображений

Тип: Map<const stappler::xenolith::core::ImageAttachment *, stappler::xenolith::core::ImageInfoData>


# ::stappler::xenolith::core::FrameRequest::_output

## BRIEF

Связь выходов

## CONTENT

Доступ: protected

Связь выходов

Тип: Map<const stappler::xenolith::core::AttachmentData *, Rc<stappler::xenolith::core::FrameOutputBinding>>


# ::stappler::xenolith::core::FrameRequest::_renderTargets

## BRIEF

Цель рандаринга

## CONTENT

Доступ: protected

Цель рандаринга

Тип: Map<const stappler::xenolith::core::AttachmentData *, Rc<stappler::xenolith::core::ImageStorage>>


# ::stappler::xenolith::core::FrameRequest::_signalDependencies

## BRIEF

Зависимсоти для выполнения

## CONTENT

Доступ: protected

Зависимсоти для выполнения

Тип: Vector<Rc<stappler::xenolith::core::DependencyEvent>>


# ::stappler::xenolith::core::FrameRequest::WaitInputData

## BRIEF

Структуора для ожидания входящих данных

## CONTENT

Доступ: protected

Структуора для ожидания входящих данных


# ::stappler::xenolith::core::FrameRequest::WaitInputData::queue

## BRIEF

Ожидающая очередь

## CONTENT

Ожидающая очередь

Тип: Rc<stappler::xenolith::core::FrameQueue>


# ::stappler::xenolith::core::FrameRequest::WaitInputData::handle

## BRIEF

Ожидающее вложение

## CONTENT

Ожидающее вложение

Тип: stappler::xenolith::core::AttachmentHandle*


# ::stappler::xenolith::core::FrameRequest::WaitInputData::callback

## BRIEF

Функция завершения ожидания

## CONTENT

Функция завершения ожидания

Тип: Function<void (bool)>


# ::stappler::xenolith::core::FrameRequest::_waitForInputs

## BRIEF

Список ожидающих вход вложений

## CONTENT

Доступ: protected

Список ожидающих вход вложений

Тип: Map<const stappler::xenolith::core::AttachmentData *, stappler::xenolith::core::FrameRequest::WaitInputData>


# ::stappler::xenolith::core::FrameRequest::_autorelease

## BRIEF

Список привязанных по времени жизни объектов

## CONTENT

Доступ: protected

Список привязанных по времени жизни объектов

Тип: std::forward_list<Rc<Ref>>
