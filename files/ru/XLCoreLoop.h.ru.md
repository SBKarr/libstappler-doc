Title: XLCoreLoop.h


# XENOLITH_CORE_XLCORELOOP_H_

## BRIEF

Заголовок базового интерфейса графического цикла

## CONTENT

Заголовок базового интерфейса графического цикла


# ::stappler::xenolith::core::LoopInfo

## BRIEF

Параметры создания цикла

## CONTENT

Параметры создания цикла


# ::stappler::xenolith::core::LoopInfo::deviceIdx

## BRIEF

Номер используемого устройства

## CONTENT

Номер используемого устройства

Тип: uint32_t


# ::stappler::xenolith::core::LoopInfo::threadsCount

## BRIEF

Число потоков (если цикл поддерживает)

## CONTENT

Число потоков (если цикл поддерживает)

Тип: uint32_t


# ::stappler::xenolith::core::LoopInfo::onDeviceStarted

## BRIEF

Функция создания виртуального устройства

## CONTENT

Функция создания виртуального устройства

Тип: Function<void (const stappler::xenolith::core::Loop &, const stappler::xenolith::core::Device &)>


# ::stappler::xenolith::core::LoopInfo::onDeviceFinalized

## BRIEF

Функция завершения виртуального устройства

## CONTENT

Функция завершения виртуального устройства

Тип: Function<void (const stappler::xenolith::core::Loop &, const stappler::xenolith::core::Device &)>


# ::stappler::xenolith::core::LoopInfo::platformData

## BRIEF

Непрозрачный объект платформы

## CONTENT

Непрозрачный объект платформы. Зависит от используемого API.

Тип: Rc<stappler::mem_std::Ref>


# ::stappler::xenolith::core::Loop

## BRIEF

Интерфейс графического цикла

## CONTENT

Интерфейс графического цикла. Только описывает базовые функции, не реализует их.

Графический цикл представляет собой отдельный поток, обрабатывающий события графического устройства и предоставляющий интерфейс к нему.

Предполагается, что графическое устройство недоступно за пределами цикла, и весь внешний интерфейс к движку реализуется через цикл.

Базовые классы:
* thread::ThreadInterface<Interface>


# ::stappler::xenolith::core::Loop::FrameCache

## BRIEF

Тип кеша кадров

## CONTENT

Доступ: public

Тип кеша кадров


# ::stappler::xenolith::core::Loop::FrameRequest

## BRIEF

Тип запроса на кадр

## CONTENT

Доступ: public

Тип запроса на кадр


# ::stappler::xenolith::core::Loop::ImageStorage

## BRIEF

Тип хранимого изображения

## CONTENT

Доступ: public

Тип хранимого изображения

# ::stappler::xenolith::core::Loop::Queue

## BRIEF

Тип очереди рендеринга

## CONTENT

Доступ: public

Тип очереди рендеринга

# ::stappler::xenolith::core::Loop::FrameHandle

## BRIEF

Тип кадра

## CONTENT

Доступ: public

Тип кадра

# ::stappler::xenolith::core::Loop::PassData

## BRIEF

Тип прохода исполнения

## CONTENT

Доступ: public

Тип прохода исполнения

# ::stappler::xenolith::core::Loop::ImageAttachment

## BRIEF

Тип вложения изображения

## CONTENT

Доступ: public

Тип вложения изображения


# ::stappler::xenolith::core::Loop::AttachmentHandle

## BRIEF

Интерфейс к вложению для кадра

## CONTENT

Доступ: public

Интерфейс к вложению для кадра


# ::stappler::xenolith::core::Loop::DependencyEvent

## BRIEF

Тип объекта зависимости

## CONTENT

Доступ: public

Тип объекта зависимости

# ::stappler::xenolith::core::Loop::LoopInfo

## BRIEF

Тип параметров создания цикла

## CONTENT

Доступ: public

Тип параметров создания цикла


# ::stappler::xenolith::core::Loop::LoopThreadId

## BRIEF

Идентификатор потока цикла

## CONTENT

Доступ: public

Идентификатор потока цикла

Тип: uint32_t const


# ::stappler::xenolith::core::Loop::~Loop()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор


# ::stappler::xenolith::core::Loop::Loop()

## BRIEF

Конструктор

## CONTENT

Доступ: public

Конструктор


# ::stappler::xenolith::core::Loop::init(stappler::xenolith::core::Instance*,stappler::xenolith::core::Loop::LoopInfo&&)

## BRIEF

Создаёт цикл

## CONTENT

Доступ: public

Создаёт цикл

Параметры:
* stappler::xenolith::core::Instance*
* stappler::xenolith::core::Loop::LoopInfo&&

Возвращает:
* bool

# ::stappler::xenolith::core::Loop::waitRinning()

## BRIEF

Синхронно ожидает запуск цикла

## CONTENT

Доступ: public

Синхронно ожидает запуск цикла. По умолчанию цикл запускается в отдельном потоке, давая приложению время на инициализацию других компонентов, пока запускается графическая подсистема. Эту функцию стоит вызывать только перед тем, как цикл начинает активно использоваться.


# ::stappler::xenolith::core::Loop::cancel()

## BRIEF

Завершает работу цикла

## CONTENT

Доступ: public

Завершает работу цикла


# ::stappler::xenolith::core::Loop::isRunning() const

## BRIEF

Проверяет, что цикл полностью запущен

## CONTENT

Доступ: public

Проверяет, что цикл полностью запущен

Возвращает:
* bool

# ::stappler::xenolith::core::Loop::getGlInstance() const

## BRIEF

Возвращает интерфейс графического API

## CONTENT

Доступ: public

Возвращает интерфейс графического API

Возвращает:
* Rc<stappler::xenolith::core::Instance> const&

# ::stappler::xenolith::core::Loop::getFrameCache() const

## BRIEF

Возвращает кадровый кеш

## CONTENT

Доступ: public

Возвращает кадровый кеш

Возвращает:
* Rc<stappler::xenolith::core::Loop::FrameCache> const&

# ::stappler::xenolith::core::Loop::compileResource(Rc<stappler::xenolith::core::Resource>&&,Function<void (bool)>&&,bool) const

## BRIEF

Собирает ресурс и загружает его в память графического устройства

## CONTENT

Доступ: public

Собирает ресурс и загружает его в память графического устройства

Параметры:
* Rc<stappler::xenolith::core::Resource>&&
* Function<void (bool)>&& - функция завершения загрузки. Вызывается в потоке цикла.
* bool - true для режима предзагрузки. В режиме предзагрузки цикл использует вызывающий поток, а не собственный рабочий поток для загрузки данных (то есть, блокирует текущий поток для загрузки данных)


# ::stappler::xenolith::core::Loop::compileQueue(Rc<stappler::xenolith::core::Loop::Queue> const&,Function<void (bool)>&&) const

## BRIEF

Собирает очередь рендеринга для использования на устройстве

## CONTENT

Доступ: public

Собирает очередь рендеринга для использования на устройстве. Загружает подпрограммы, проходы и ресурсы очереди на устройство.

Параметры:
* Rc<stappler::xenolith::core::Loop::Queue> const&
* Function<void (bool)>&& - функция завершения. Вызывается в потоке цикла.


# ::stappler::xenolith::core::Loop::compileMaterials(Rc<stappler::xenolith::core::MaterialInputData>&&,Vector<Rc<stappler::xenolith::core::Loop::DependencyEvent>> const&) const

## BRIEF

Собирает и загружает материалы на устройство

## CONTENT

Доступ: public

Собирает и загружает материалы на устройство

Параметры:
* Rc<stappler::xenolith::core::MaterialInputData>&&
* Vector<Rc<stappler::xenolith::core::Loop::DependencyEvent>> const& - список зависимостей, удовлетворяемых загрузкой материалов


# ::stappler::xenolith::core::Loop::compileImage(Rc<stappler::xenolith::core::DynamicImage> const&,Function<void (bool)>&&) const

## BRIEF

Создирает и загружает динамическое изображение

## CONTENT

Доступ: public

Создирает и загружает динамическое изображение

Параметры:
* Rc<stappler::xenolith::core::DynamicImage> const&
* Function<void (bool)>&& - функция завершения. Вызывается в потоке цикла.


# ::stappler::xenolith::core::Loop::runRenderQueue(Rc<stappler::xenolith::core::Loop::FrameRequest>&&,uint64_t,Function<void (bool)>&&)

## BRIEF

Запускает новый кадр с запросом

## CONTENT

Доступ: public

Запускает новый кадр с запросом

Параметры:
* Rc<stappler::xenolith::core::Loop::FrameRequest>&& - запрос на кадр
* uint64_t - поколение кадра
* Function<void (bool)>&& - функция завершения. Вызывается в потоке цикла.


# ::stappler::xenolith::core::Loop::schedule(Function<bool (stappler::xenolith::core::Loop &)>&&,stappler::StringView)

## BRIEF

Циклически выполняет функцию в графическом цикле до отмены

## CONTENT

Доступ: public

Циклически выполняет функцию в графическом цикле до отмены

Параметры:
* Function<bool (stappler::xenolith::core::Loop &)>&& - функция должна вернуть true для отмены вызова
* stappler::StringView - тег функции


# ::stappler::xenolith::core::Loop::schedule(Function<bool (stappler::xenolith::core::Loop &)>&&,uint64_t,stappler::StringView)

## BRIEF

Циклически выполняет функцию в графическом цикле до отмены с заданной периодичностью

## CONTENT

Доступ: public

Циклически выполняет функцию в графическом цикле до отмены с заданной периодичностью

Параметры:
* Function<bool (stappler::xenolith::core::Loop &)>&&- функция должна вернуть true для отмены вызова
* uint64_t - периодичность вызовов
* stappler::StringView - тег функции


# ::stappler::xenolith::core::Loop::performInQueue(Rc<thread::Task>&&) const

## BRIEF

Выполняет задачу в графическом потоке

## CONTENT

Доступ: public

Выполняет задачу в графическом потоке

Параметры:
* Rc<thread::Task>&&


# ::stappler::xenolith::core::Loop::performInQueue(Function<void ()>&&,stappler::mem_std::Ref*) const

## BRIEF

Выполняет функцию в графическом потоке

## CONTENT

Доступ: public

Выполняет функцию в графическом потоке

Параметры:
* Function<void ()>&&
* stappler::mem_std::Ref*


# ::stappler::xenolith::core::Loop::performOnGlThread(Function<void ()>&&,stappler::mem_std::Ref*,bool) const

## BRIEF

Выполняет функцию в графическом потоке

## CONTENT

Доступ: public

Выполняет функцию в графическом потоке

Параметры:
* Function<void ()>&&
* stappler::mem_std::Ref*
* bool - true если имеет смысл вызывать функцию на месте, при вызове из графического потока


# ::stappler::xenolith::core::Loop::isOnGlThread() const

## BRIEF

Проверяет, что вызов находится в графическом потоке

## CONTENT

Доступ: public

Проверяет, что вызов находится в графическом потоке

Возвращает:
* bool

# ::stappler::xenolith::core::Loop::makeFrame(Rc<stappler::xenolith::core::Loop::FrameRequest>&&,uint64_t)

## BRIEF

Создаёт новый кадр из запроса

## CONTENT

Доступ: public

Создаёт новый кадр из запроса

Параметры:
* Rc<stappler::xenolith::core::Loop::FrameRequest>&&
* uint64_t - поколение кадра

Возвращает:
* Rc<stappler::xenolith::core::Loop::FrameHandle>

# ::stappler::xenolith::core::Loop::acquireFramebuffer(stappler::xenolith::core::Loop::PassData const*,SpanView<Rc<stappler::xenolith::core::ImageView>>)

## BRIEF

Запрашивает фреймбуфер

## CONTENT

Доступ: public

Запрашивает фреймбуфер

Параметры:
* stappler::xenolith::core::Loop::PassData const*
* SpanView<Rc<stappler::xenolith::core::ImageView>>

Возвращает:
* Rc<stappler::xenolith::core::Framebuffer>

# ::stappler::xenolith::core::Loop::releaseFramebuffer(Rc<stappler::xenolith::core::Framebuffer>&&)

## BRIEF

Возвращает фреймбуфер

## CONTENT

Доступ: public

Возвращает фреймбуфер

Параметры:
* Rc<stappler::xenolith::core::Framebuffer>&&


# ::stappler::xenolith::core::Loop::acquireImage(stappler::xenolith::core::Loop::ImageAttachment const*,stappler::xenolith::core::Loop::AttachmentHandle const*,stappler::xenolith::core::ImageInfoData const&)

## BRIEF

Запрашивает изображение

## CONTENT

Доступ: public

Запрашивает изображение

Параметры:
* stappler::xenolith::core::Loop::ImageAttachment const*
* stappler::xenolith::core::Loop::AttachmentHandle const*
* stappler::xenolith::core::ImageInfoData const&

Возвращает:
* Rc<stappler::xenolith::core::Loop::ImageStorage>

# ::stappler::xenolith::core::Loop::releaseImage(Rc<stappler::xenolith::core::Loop::ImageStorage>&&)

## BRIEF

Возвращает изображение

## CONTENT

Доступ: public

Возвращает изображение

Параметры:
* Rc<stappler::xenolith::core::Loop::ImageStorage>&&


# ::stappler::xenolith::core::Loop::makeSemaphore()

## BRIEF

Создаёт семафор на устройстве

## CONTENT

Доступ: public

Создаёт семафор на устройстве

Возвращает:
* Rc<stappler::xenolith::core::Semaphore>

# ::stappler::xenolith::core::Loop::getSupportedDepthStencilFormat() const

## BRIEF

Возвращает поддерживаемые форматы глубины и трафарета

## CONTENT

Доступ: public

Возвращает поддерживаемые форматы глубины и трафарета

Возвращает:
* Vector<stappler::xenolith::core::ImageFormat> const&

# ::stappler::xenolith::core::Loop::signalDependencies(Vector<Rc<stappler::xenolith::core::Loop::DependencyEvent>> const&,stappler::xenolith::core::Loop::Queue*,bool)

## BRIEF

Удовлетворяет зависимости

## CONTENT

Доступ: public

Удовлетворяет зависимости

Параметры:
* Vector<Rc<stappler::xenolith::core::Loop::DependencyEvent>> const&
* stappler::xenolith::core::Loop::Queue*
* bool - флаг успешности


# ::stappler::xenolith::core::Loop::waitForDependencies(Vector<Rc<stappler::xenolith::core::Loop::DependencyEvent>> const&,Function<void (bool)>&&)

## BRIEF

Ожидает зависимости асинхронно

## CONTENT

Доступ: public

Ожидает зависимости асинхронно

Параметры:
* Vector<Rc<stappler::xenolith::core::Loop::DependencyEvent>> const&
* Function<void (bool)>&& - функция завершения


# ::stappler::xenolith::core::Loop::wakeup()

## BRIEF

Пробуждает графический поток явно

## CONTENT

Доступ: public

Пробуждает графический поток явно


# ::stappler::xenolith::core::Loop::waitIdle()

## BRIEF

Ожидает простоя цикла и устройства

## CONTENT

Доступ: public

Ожидает простоя цикла и устройства


# ::stappler::xenolith::core::Loop::captureImage(Function<void (const stappler::xenolith::core::ImageInfoData &, stappler::BytesView)>&&,Rc<stappler::xenolith::core::ImageObject> const&,stappler::xenolith::core::AttachmentLayout)

## BRIEF

Читает изображение из памяти устройства

## CONTENT

Доступ: public

Читает изображение из памяти устройства. Изображение должно поддерживать трансфер с устройства.

Параметры:
* Function<void (const stappler::xenolith::core::ImageInfoData &, stappler::BytesView)>&&
* Rc<stappler::xenolith::core::ImageObject> const&
* stappler::xenolith::core::AttachmentLayout


# ::stappler::xenolith::core::Loop::captureBuffer(Function<void (const stappler::xenolith::core::BufferInfo &, stappler::BytesView)>&&,Rc<stappler::xenolith::core::BufferObject> const&)

## BRIEF

Читает буфер из памяти устройства

## CONTENT

Доступ: public

Читает буфер из памяти устройства. Изображение должно поддерживать трансфер с устройства.

Параметры:
* Function<void (const stappler::xenolith::core::BufferInfo &, stappler::BytesView)>&&
* Rc<stappler::xenolith::core::BufferObject> const&


# ::stappler::xenolith::core::Loop::_shouldExit

## BRIEF

Флаг завершения цикла

## CONTENT

Доступ: protected

Флаг завершения цикла

Тип: std::atomic_flag


# ::stappler::xenolith::core::Loop::_glInstance

## BRIEF

Графический интерфейс

## CONTENT

Доступ: protected

Графический интерфейс

Тип: Rc<stappler::xenolith::core::Instance>


# ::stappler::xenolith::core::Loop::_frameCache

## BRIEF

Кадровый кеш

## CONTENT

Доступ: protected

Кадровый кеш

Тип: Rc<stappler::xenolith::core::Loop::FrameCache>


# ::stappler::xenolith::core::Loop::_info

## BRIEF

Параметры запуска цикла

## CONTENT

Доступ: protected

Параметры запуска цикла

Тип: LoopInfo
