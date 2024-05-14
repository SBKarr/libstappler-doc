Title: XLApplication.h


# XENOLITH_APPLICATION_XLAPPLICATION_H_

## BRIEF

Заголовок базового типа графического приложения

## CONTENT

Заголовок базового типа графического приложения

# ::stappler::xenolith::Application

## BRIEF

Тип приложения

## CONTENT

Тип приложения. Служит для срздания циклов обработки событий и отображения

Базовые классы:
* thread::TaskQueue


# ::stappler::xenolith::Application::onMessageToken

## BRIEF

Событие получения нового токена для приёма удалённых сообщений

## CONTENT

Доступ: public

Событие получения нового токена для приёма удалённых сообщений

Тип: stappler::xenolith::EventHeader


# ::stappler::xenolith::Application::onRemoteNotification

## BRIEF

Событие получение внешнего уведомления

## CONTENT

Доступ: public

Событие получение внешнего уведомления

Тип: stappler::xenolith::EventHeader


# ::stappler::xenolith::Application::CommonInfo

## BRIEF

Базовая информация о приложении

## CONTENT

Доступ: public

Базовая информация о приложении


# ::stappler::xenolith::Application::CommonInfo::bundleName

## BRIEF

Название пакета

## CONTENT

Название пакета. Предполагается в обратно-доменной форме.

Тип: stappler::mem_std::String


# ::stappler::xenolith::Application::CommonInfo::applicationName

## BRIEF

Внешнее имя приложения

## CONTENT

Внешнее имя приложения

Тип: stappler::mem_std::String


# ::stappler::xenolith::Application::CommonInfo::applicationVersion

## BRIEF

Текстовая версия приложения

## CONTENT

Текстовая версия приложения

Тип: stappler::mem_std::String


# ::stappler::xenolith::Application::CommonInfo::userAgent

## BRIEF

Имя аганта для сетевых запросов

## CONTENT

Имя аганта для сетевых запросов

Тип: stappler::mem_std::String


# ::stappler::xenolith::Application::CommonInfo::locale

## BRIEF

Локаль приложения

## CONTENT

Локаль приложения

Тип: stappler::mem_std::String


# ::stappler::xenolith::Application::CommonInfo::applicationVersionCode

## BRIEF

Код версии (см. XL_MAKE_VERSION_CODE)

## CONTENT

Код версии (см. XL_MAKE_VERSION_CODE)

Тип: uint32_t


# ::stappler::xenolith::Application::CommonInfo::nativeHandle

## BRIEF

Указатель на платформенный интерфейс

## CONTENT

Тип: void*

Указатель на платформенный интерфейс


# ::stappler::xenolith::Application::CommonInfo::dpi

## BRIEF

Значение плотности пикселей экрана

## CONTENT

Значение плотности пикселей экрана

Тип: int


# ::stappler::xenolith::Application::CallbackInfo

## BRIEF

Структура управляющих функций приложения

## CONTENT

Доступ: public

Структура управляющих функций приложения

# ::stappler::xenolith::Application::CallbackInfo::initCallback

## BRIEF

Функция инициализации приложения

## CONTENT

Функция инициализации приложения

Тип: Function<void (const stappler::xenolith::Application &)>


# ::stappler::xenolith::Application::CallbackInfo::updateCallback

## BRIEF

Функция обновления по таймеру

## CONTENT

Функция обновления по таймеру

Тип: Function<void (const stappler::xenolith::Application &, const stappler::xenolith::UpdateTime &)>


# ::stappler::xenolith::Application::CallbackInfo::finalizeCallback

## BRIEF

Функция завершения приложения

## CONTENT

Функция завершения приложения

Тип: Function<void (const stappler::xenolith::Application &)>


# ::stappler::xenolith::Application::Task

## BRIEF

Тип асинхронной задачи

## CONTENT

Доступ: public

Тип асинхронной задачи


# ::stappler::xenolith::Application::ExecuteCallback

## BRIEF

Тип функции выполнения задачи

## CONTENT

Доступ: public

Тип функции выполнения задачи


# ::stappler::xenolith::Application::CompleteCallback

## BRIEF

Тип функции завершения задачи

## CONTENT

Доступ: public

Тип функции завершения задачи


# ::stappler::xenolith::Application::getInstance()

## BRIEF

Получает действвующий экземпляр приложения

## CONTENT

Доступ: public

Получает действвующий экземпляр приложения

Возвращает:
* stappler::xenolith::Application*

# ::stappler::xenolith::Application::~Application()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор


# ::stappler::xenolith::Application::init(stappler::xenolith::Application::CommonInfo&&,Rc<core::Instance>&&)

## BRIEF

Создаёт приложение

## CONTENT

Доступ: public

Создаёт приложение

Параметры:
* stappler::xenolith::Application::CommonInfo&& - параметры приложения
* Rc<core::Instance>&& - интерфейс доступа к графическому API

Возвращает:
* bool

# ::stappler::xenolith::Application::run(stappler::xenolith::Application::CallbackInfo const&,core::LoopInfo&&,uint32_t,stappler::TimeInterval)

## BRIEF

Запускает циклы обработки событий

## CONTENT

Доступ: public

Запускает циклы обработки событий. Вызвавший эту функцию поток считается основным потоком приложения.

Параметры:
* stappler::xenolith::Application::CallbackInfo const& - управляющие функции
* core::LoopInfo&& - параметры для графического цикла
* uint32_t - число потоков для основной очереди задач
* stappler::TimeInterval - интервал обновления (не связан с интервалом обновления кадра)


# ::stappler::xenolith::Application::end()

## BRIEF

Завершает работу приложения

## CONTENT

Доступ: public

Завершает работу приложения

# ::stappler::xenolith::Application::wakeup()

## BRIEF

Пробуждает основной поток приложения от ожидания

## CONTENT

Доступ: public

Пробуждает основной поток приложения от ожидания


# ::stappler::xenolith::Application::isOnMainThread() const

## BRIEF

Проверяет, что вызов исходит из основного потока

## CONTENT

Доступ: public

Проверяет, что вызов исходит из основного потока

Возвращает:
* bool

# ::stappler::xenolith::Application::performOnGlThread(Function<void ()>&&,stappler::thread::TaskQueue::Ref*,bool) const

## BRIEF

Выполянет функцию к графическом потоке

## CONTENT

Доступ: public

Выполянет функцию к графическом потоке

Параметры:
* Function<void ()>&&
* stappler::thread::TaskQueue::Ref*
* bool - true если допустимо выполнять сразу, если вызвано в необходимом потоке


# ::stappler::xenolith::Application::performOnMainThread(Function<void ()>&&,stappler::thread::TaskQueue::Ref*,bool)

## BRIEF

Выполянет функцию к основном потоке

## CONTENT

Доступ: public

Выполянет функцию к основном потоке

Параметры:
* Function<void ()>&&
* stappler::thread::TaskQueue::Ref*
* bool - true если допустимо выполнять сразу, если вызвано в необходимом потоке


# ::stappler::xenolith::Application::performOnMainThread(Rc<stappler::xenolith::Application::Task>&&,bool)

## BRIEF

Выполянет задачу к основном потоке

## CONTENT

Доступ: public

Выполянет задачу к основном потоке

Параметры:
* Rc<stappler::xenolith::Application::Task>&&
* bool - true если допустимо выполнять сразу, если вызвано в необходимом потоке


# ::stappler::xenolith::Application::perform(stappler::xenolith::Application::ExecuteCallback&&,stappler::xenolith::Application::CompleteCallback&&,stappler::thread::TaskQueue::Ref*)

## BRIEF

Конструирует и выполняет задачу в основной очереди приложения

## CONTENT

Доступ: public

Конструирует и выполняет задачу в основной очереди приложения

Параметры:
* stappler::xenolith::Application::ExecuteCallback&&
* stappler::xenolith::Application::CompleteCallback&&
* stappler::thread::TaskQueue::Ref*


# ::stappler::xenolith::Application::perform(Rc<stappler::xenolith::Application::Task>&&)

## BRIEF

Выполняет задачу в основной очереди

## CONTENT

Доступ: public

Выполняет задачу в основной очереди

Параметры:
* Rc<stappler::xenolith::Application::Task>&&


# ::stappler::xenolith::Application::perform(Rc<stappler::xenolith::Application::Task>&&,bool)

## BRIEF

Выполняет задачу в основной очереди

## CONTENT

Доступ: public

Выполняет задачу в основной очереди

Параметры:
* Rc<stappler::xenolith::Application::Task>&&
* bool - true если необходимо выполнить задачу раньше аналогичных по приоритету


# ::stappler::xenolith::Application::addEventListener(stappler::xenolith::EventHandlerNode const*)

## BRIEF

Добавляет слушателя события

## CONTENT

Доступ: public

Добавляет слушателя события

Параметры:
* stappler::xenolith::EventHandlerNode const*


# ::stappler::xenolith::Application::removeEventListner(stappler::xenolith::EventHandlerNode const*)

## BRIEF

Удаляет слушателя события

## CONTENT

Доступ: public

Удаляет слушателя события

Параметры:
* stappler::xenolith::EventHandlerNode const*


# ::stappler::xenolith::Application::removeAllEventListeners()

## BRIEF

Удаляет всех слушателей событий

## CONTENT

Доступ: public

Удаляет всех слушателей событий


# ::stappler::xenolith::Application::dispatchEvent(stappler::xenolith::Event const&)

## BRIEF

Доставляет событие к слушателям

## CONTENT

Доступ: public

Доставляет событие к слушателям

Параметры:
* stappler::xenolith::Event const&


# ::stappler::xenolith::Application::getClock() const

## BRIEF

Получает текущее значение часов приложения

## CONTENT

Доступ: public

Получает текущее значение часов приложения

Возвращает:
* uint64_t

# ::stappler::xenolith::Application::getResourceCache() const

## BRIEF

Возвращает кеш ресурсов приложения

## CONTENT

Доступ: public

Возвращает кеш ресурсов приложения

Возвращает:
* Rc<stappler::xenolith::ResourceCache> const&

# ::stappler::xenolith::Application::getGlLoop() const

## BRIEF

Возвращает графический цикл

## CONTENT

Доступ: public

Возвращает графический цикл

Возвращает:
* Rc<core::Loop> const&

# ::stappler::xenolith::Application::getQueue()

## BRIEF

Возвращает основную очередь выполнения задач

## CONTENT

Доступ: public

Возвращает основную очередь выполнения задач

Возвращает:
* thread::TaskQueue*

# ::stappler::xenolith::Application::addExtension<typename>(Rc<T>&&)

## BRIEF

Добавляет объект-расширение приложения

## CONTENT

Доступ: public

Добавляет объект-расширение приложения

Параметры шаблона:
* typename T

Параметры:
* Rc<T>&&

Возвращает:
* bool

# ::stappler::xenolith::Application::getExtension<typename>()

## BRIEF

Получает расширение по его типу

## CONTENT

Доступ: public

Получает расширение по его типу

Параметры шаблона:
* typename T

Возвращает:
* T*

# ::stappler::xenolith::Application::getMessageToken() const

## BRIEF

Получает токен для работы с внешними уведомлениями

## CONTENT

Доступ: public

Получает токен для работы с внешними уведомлениями. Работа зависит от используемой службы уведомлений

Возвращает:
* stappler::StringView

# ::stappler::xenolith::Application::getInfo() const

## BRIEF

Возвращает информацию о приложении

## CONTENT

Доступ: public

Возвращает информацию о приложении

Возвращает:
* stappler::xenolith::Application::CommonInfo const&

# ::stappler::xenolith::Application::openUrl(stappler::StringView) const

## BRIEF

Открывает внешний адрес во внешнем интерфейсе

## CONTENT

Доступ: public

Открывает внешний адрес во внешнем интерфейсе

Параметры:
* stappler::StringView


# ::stappler::xenolith::Application::update(stappler::xenolith::Application::CallbackInfo const&,stappler::xenolith::UpdateTime const&)

## BRIEF

Вызывает обновление прилоежния

## CONTENT

Доступ: protected

Вызывает обновление прилоежния

Параметры:
* stappler::xenolith::Application::CallbackInfo const&
* stappler::xenolith::UpdateTime const& - текущее время


# ::stappler::xenolith::Application::handleDeviceStarted(core::Loop const&,core::Device const&)

## BRIEF

Обрабатывает запуск графического устройства

## CONTENT

Доступ: protected

Обрабатывает запуск графического устройства

Параметры:
* core::Loop const&
* core::Device const&


# ::stappler::xenolith::Application::handleDeviceFinalized(core::Loop const&,core::Device const&)

## BRIEF

Обрабатывает остановку графического устройства

## CONTENT

Доступ: protected

Обрабатывает остановку графического устройства

Параметры:
* core::Loop const&
* core::Device const&


# ::stappler::xenolith::Application::handleMessageToken(stappler::mem_std::String&&)

## BRIEF

Обрабатывает получение токена внешних уведомлений

## CONTENT

Доступ: protected

Обрабатывает получение токена внешних уведомлений

Параметры:
* stappler::mem_std::String&&


# ::stappler::xenolith::Application::handleRemoteNotification(stappler::mem_std::Value&&)

## BRIEF

Обрабатывает получение внешнего уведоления

## CONTENT

Доступ: protected

Обрабатывает получение внешнего уведоления

Параметры:
* stappler::mem_std::Value&&


# ::stappler::xenolith::Application::nativeInit()

## BRIEF

Инициализирует приложение на платформе

## CONTENT

Доступ: protected

Инициализирует приложение на платформе

# ::stappler::xenolith::Application::nativeDispose()

## BRIEF

Деинициалиирует приложение на платформе

## CONTENT

Доступ: protected

Деинициалиирует приложение на платформе


# ::stappler::xenolith::Application::_time

## BRIEF

Время последнего обновления

## CONTENT

Доступ: protected

Время последнего обновления

Тип: stappler::xenolith::UpdateTime


# ::stappler::xenolith::Application::_threadId

## BRIEF

Идентификатор потока

## CONTENT

Доступ: protected

Идентификатор потока

Тип: std::thread::id


# ::stappler::xenolith::Application::_updatePool

## BRIEF

Пул памяти для обновлений

## CONTENT

Доступ: protected

Пул памяти для обновлений

Тип: memory::pool_t*


# ::stappler::xenolith::Application::_started

## BRIEF

Флаг запуска

## CONTENT

Доступ: protected

Флаг запуска

Тип: bool


# ::stappler::xenolith::Application::_immediateUpdate

## BRIEF

Флаг для немедленного вызова обновления после действия

## CONTENT

Доступ: protected

Флаг для немедленного вызова обновления после действия

Тип: bool


# ::stappler::xenolith::Application::_shouldQuit

## BRIEF

Флаг выхода из приложения

## CONTENT

Доступ: protected

Флаг выхода из приложения

Тип: std::atomic_flag


# ::stappler::xenolith::Application::_eventListeners

## BRIEF

Слушатели для событий

## CONTENT

Доступ: protected

Слушатели для событий

Тип: HashMap<EventHeader::EventID, HashSet<const stappler::xenolith::EventHandlerNode *>>


# ::stappler::xenolith::Application::_resourceCache

## BRIEF

Кеш ресурсов

## CONTENT

Доступ: protected

Кеш ресурсов

Тип: Rc<stappler::xenolith::ResourceCache>


# ::stappler::xenolith::Application::_glLoop

## BRIEF

Графический цикл

## CONTENT

Доступ: protected

Графический цикл

Тип: Rc<core::Loop>


# ::stappler::xenolith::Application::_instance

## BRIEF

Интерфейс к графическому API

## CONTENT

Доступ: protected

Интерфейс к графическому API

Тип: Rc<core::Instance>


# ::stappler::xenolith::Application::_device

## BRIEF

Графическое устройство

## CONTENT

Доступ: protected

Графическое устройство

Тип: core::Device const*


# ::stappler::xenolith::Application::_extensions

## BRIEF

Расширения приложения

## CONTENT

Доступ: protected

Расширения приложения

Тип: HashMap<std::type_index, Rc<stappler::xenolith::ApplicationExtension>>


# ::stappler::xenolith::Application::_messageToken

## BRIEF

Токен для работы с внешними уведомлениями

## CONTENT

Доступ: protected

Токен для работы с внешними уведомлениями

Тип: stappler::mem_std::String


# ::stappler::xenolith::Application::_info

## BRIEF

Информация о приложении

## CONTENT

Доступ: protected

Информация о приложении

Тип: stappler::xenolith::Application::CommonInfo


# ::stappler::xenolith::Application::WaitCallbackInfo

## BRIEF

Структура для функций, ожидающих запуска в потоке

## CONTENT

Доступ: protected

Структура для функций, ожидающих запуска в потоке


# ::stappler::xenolith::Application::WaitCallbackInfo::func

## BRIEF

Хранимая функция

## CONTENT

Хранимая функция

Тип: Function<void ()>


# ::stappler::xenolith::Application::WaitCallbackInfo::target

## BRIEF

Цель для вызова функции

## CONTENT

Цель для вызова функции

Тип: Rc<stappler::thread::TaskQueue::Ref>


# ::stappler::xenolith::Application::WaitCallbackInfo::immediate

## BRIEF

Флаг немедленного вызова

## CONTENT

Флаг немедленного вызова

Тип: bool


# ::stappler::xenolith::Application::_glWaitCallback

## BRIEF

Функции, ожидающие запуска графического цикла

## CONTENT

Доступ: protected

Функции, ожидающие запуска графического цикла

Тип: Vector<stappler::xenolith::Application::WaitCallbackInfo>


# ::stappler::xenolith::Application::addView(stappler::xenolith::ViewInfo&&)

## BRIEF

Добавляет новое виртуальное окно приложения

## CONTENT

Доступ: public

Добавляет новое виртуальное окно приложения

Параметры:
* stappler::xenolith::ViewInfo&&

Возвращает:
* bool

# ::stappler::xenolith::Application::_tmpViews

## BRIEF

Ожидающие запуска окна приложения

## CONTENT

Доступ: protected

Ожидающие запуска окна приложения

Тип: Vector<stappler::xenolith::ViewInfo>


# ::stappler::xenolith::Application::_activeViews

## BRIEF

Активные окна приложения

## CONTENT

Доступ: protected

Активные окна приложения

Тип: Set<Rc<xenolith::View>>


# ::stappler::xenolith::Application::addExtension<typename>(Rc<T>&&)

## BRIEF

Добавляет расширение прилоежния

## CONTENT

Добавляет расширение прилоежния

Параметры шаблона:
* typename T

Параметры:
* Rc<T>&&

Возвращает:
* bool
