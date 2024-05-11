Title: XLApplication.h


# XENOLITH_APPLICATION_XLAPPLICATION_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::Application

## BRIEF

## CONTENT

Базовые классы:
* thread::TaskQueue


# ::stappler::xenolith::Application::onMessageToken

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::xenolith::EventHeader


# ::stappler::xenolith::Application::onRemoteNotification

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::xenolith::EventHeader


# ::stappler::xenolith::Application::CommonInfo

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::Application::CommonInfo::bundleName

## BRIEF

## CONTENT

Тип: stappler::mem_std::String


# ::stappler::xenolith::Application::CommonInfo::applicationName

## BRIEF

## CONTENT

Тип: stappler::mem_std::String


# ::stappler::xenolith::Application::CommonInfo::applicationVersion

## BRIEF

## CONTENT

Тип: stappler::mem_std::String


# ::stappler::xenolith::Application::CommonInfo::userAgent

## BRIEF

## CONTENT

Тип: stappler::mem_std::String


# ::stappler::xenolith::Application::CommonInfo::locale

## BRIEF

## CONTENT

Тип: stappler::mem_std::String


# ::stappler::xenolith::Application::CommonInfo::applicationVersionCode

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::xenolith::Application::CommonInfo::nativeHandle

## BRIEF

## CONTENT

Тип: void*


# ::stappler::xenolith::Application::CommonInfo::dpi

## BRIEF

## CONTENT

Тип: int


# ::stappler::xenolith::Application::CallbackInfo

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::Application::CallbackInfo::initCallback

## BRIEF

## CONTENT

Тип: Function<void (const stappler::xenolith::Application &)>


# ::stappler::xenolith::Application::CallbackInfo::updateCallback

## BRIEF

## CONTENT

Тип: Function<void (const stappler::xenolith::Application &, const stappler::xenolith::UpdateTime &)>


# ::stappler::xenolith::Application::CallbackInfo::finalizeCallback

## BRIEF

## CONTENT

Тип: Function<void (const stappler::xenolith::Application &)>


# ::stappler::xenolith::Application::Task

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::Application::ExecuteCallback

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::Application::CompleteCallback

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::Application::getInstance()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::Application*

# ::stappler::xenolith::Application::~Application()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::Application::init(stappler::xenolith::Application::CommonInfo&&,Rc<core::Instance>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Application::CommonInfo&&
* Rc<core::Instance>&&

Возвращает:
* bool

# ::stappler::xenolith::Application::run(stappler::xenolith::Application::CallbackInfo const&,core::LoopInfo&&,uint32_t,stappler::TimeInterval)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Application::CallbackInfo const&
* core::LoopInfo&&
* uint32_t
* stappler::TimeInterval


# ::stappler::xenolith::Application::end()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::Application::wakeup()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::Application::isOnMainThread() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::Application::performOnGlThread(Function<void ()>&&,stappler::thread::TaskQueue::Ref*,bool) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Function<void ()>&&
* stappler::thread::TaskQueue::Ref*
* bool


# ::stappler::xenolith::Application::performOnMainThread(Function<void ()>&&,stappler::thread::TaskQueue::Ref*,bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Function<void ()>&&
* stappler::thread::TaskQueue::Ref*
* bool


# ::stappler::xenolith::Application::performOnMainThread(Rc<stappler::xenolith::Application::Task>&&,bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Rc<stappler::xenolith::Application::Task>&&
* bool


# ::stappler::xenolith::Application::perform(stappler::xenolith::Application::ExecuteCallback&&,stappler::xenolith::Application::CompleteCallback&&,stappler::thread::TaskQueue::Ref*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Application::ExecuteCallback&&
* stappler::xenolith::Application::CompleteCallback&&
* stappler::thread::TaskQueue::Ref*


# ::stappler::xenolith::Application::perform(Rc<stappler::xenolith::Application::Task>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Rc<stappler::xenolith::Application::Task>&&


# ::stappler::xenolith::Application::perform(Rc<stappler::xenolith::Application::Task>&&,bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Rc<stappler::xenolith::Application::Task>&&
* bool


# ::stappler::xenolith::Application::addEventListener(stappler::xenolith::EventHandlerNode const*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::EventHandlerNode const*


# ::stappler::xenolith::Application::removeEventListner(stappler::xenolith::EventHandlerNode const*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::EventHandlerNode const*


# ::stappler::xenolith::Application::removeAllEventListeners()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::Application::dispatchEvent(stappler::xenolith::Event const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Event const&


# ::stappler::xenolith::Application::getClock() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint64_t

# ::stappler::xenolith::Application::getResourceCache() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Rc<stappler::xenolith::ResourceCache> const&

# ::stappler::xenolith::Application::getGlLoop() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Rc<core::Loop> const&

# ::stappler::xenolith::Application::getQueue()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* thread::TaskQueue*

# ::stappler::xenolith::Application::addExtension<typename>(Rc<T>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename T

Параметры:
* Rc<T>&&

Возвращает:
* bool

# ::stappler::xenolith::Application::getExtension<typename>()

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename T

Возвращает:
* T*

# ::stappler::xenolith::Application::getMessageToken() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::StringView

# ::stappler::xenolith::Application::getInfo() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::Application::CommonInfo const&

# ::stappler::xenolith::Application::openUrl(stappler::StringView) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView


# ::stappler::xenolith::Application::update(stappler::xenolith::Application::CallbackInfo const&,stappler::xenolith::UpdateTime const&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::Application::CallbackInfo const&
* stappler::xenolith::UpdateTime const&


# ::stappler::xenolith::Application::handleDeviceStarted(core::Loop const&,core::Device const&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* core::Loop const&
* core::Device const&


# ::stappler::xenolith::Application::handleDeviceFinalized(core::Loop const&,core::Device const&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* core::Loop const&
* core::Device const&


# ::stappler::xenolith::Application::handleMessageToken(stappler::mem_std::String&&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::mem_std::String&&


# ::stappler::xenolith::Application::handleRemoteNotification(stappler::mem_std::Value&&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::mem_std::Value&&


# ::stappler::xenolith::Application::nativeInit()

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::Application::nativeDispose()

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::Application::_time

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::UpdateTime


# ::stappler::xenolith::Application::_threadId

## BRIEF

## CONTENT

Доступ: protected

Тип: std::thread::id


# ::stappler::xenolith::Application::_updatePool

## BRIEF

## CONTENT

Доступ: protected

Тип: memory::pool_t*


# ::stappler::xenolith::Application::_started

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::Application::_immediateUpdate

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::Application::_shouldQuit

## BRIEF

## CONTENT

Доступ: protected

Тип: std::atomic_flag


# ::stappler::xenolith::Application::_eventListeners

## BRIEF

## CONTENT

Доступ: protected

Тип: HashMap<EventHeader::EventID, HashSet<const stappler::xenolith::EventHandlerNode *>>


# ::stappler::xenolith::Application::_resourceCache

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::xenolith::ResourceCache>


# ::stappler::xenolith::Application::_glLoop

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<core::Loop>


# ::stappler::xenolith::Application::_instance

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<core::Instance>


# ::stappler::xenolith::Application::_device

## BRIEF

## CONTENT

Доступ: protected

Тип: core::Device const*


# ::stappler::xenolith::Application::_extensions

## BRIEF

## CONTENT

Доступ: protected

Тип: HashMap<std::type_index, Rc<stappler::xenolith::ApplicationExtension>>


# ::stappler::xenolith::Application::_messageToken

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::mem_std::String


# ::stappler::xenolith::Application::_info

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::Application::CommonInfo


# ::stappler::xenolith::Application::WaitCallbackInfo

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::Application::WaitCallbackInfo::func

## BRIEF

## CONTENT

Тип: Function<void ()>


# ::stappler::xenolith::Application::WaitCallbackInfo::target

## BRIEF

## CONTENT

Тип: Rc<stappler::thread::TaskQueue::Ref>


# ::stappler::xenolith::Application::WaitCallbackInfo::immediate

## BRIEF

## CONTENT

Тип: bool


# ::stappler::xenolith::Application::_glWaitCallback

## BRIEF

## CONTENT

Доступ: protected

Тип: Vector<stappler::xenolith::Application::WaitCallbackInfo>


# ::stappler::xenolith::Application::addView(stappler::xenolith::ViewInfo&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::ViewInfo&&

Возвращает:
* bool

# ::stappler::xenolith::Application::_tmpViews

## BRIEF

## CONTENT

Доступ: protected

Тип: Vector<stappler::xenolith::ViewInfo>


# ::stappler::xenolith::Application::_activeViews

## BRIEF

## CONTENT

Доступ: protected

Тип: Set<Rc<xenolith::View>>


# ::stappler::xenolith::Application::addExtension<typename>(Rc<T>&&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename T

Параметры:
* Rc<T>&&

Возвращает:
* bool

# ::stappler::xenolith::Application::getExtension<typename>()

## BRIEF

## CONTENT

Параметры шаблона:
* typename T

Возвращает:
* T*