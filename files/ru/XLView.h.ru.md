Title: XLView.h


# XENOLITH_SCENE_DIRECTOR_XLVIEW_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::ViewInfo

## BRIEF

## CONTENT


# ::stappler::xenolith::ViewInfo::name

## BRIEF

## CONTENT

Тип: stappler::mem_std::String


# ::stappler::xenolith::ViewInfo::bundleId

## BRIEF

## CONTENT

Тип: stappler::mem_std::String


# ::stappler::xenolith::ViewInfo::rect

## BRIEF

## CONTENT

Тип: stappler::xenolith::URect


# ::stappler::xenolith::ViewInfo::decoration

## BRIEF

## CONTENT

Тип: stappler::xenolith::Padding


# ::stappler::xenolith::ViewInfo::frameInterval

## BRIEF

## CONTENT

Тип: uint64_t


# ::stappler::xenolith::ViewInfo::density

## BRIEF

## CONTENT

Тип: float


# ::stappler::xenolith::ViewInfo::selectConfig

## BRIEF

## CONTENT

Тип: Function<core::SwapchainConfig (stappler::xenolith::View &, const core::SurfaceInfo &)>


# ::stappler::xenolith::ViewInfo::onCreated

## BRIEF

## CONTENT

Тип: Function<void (stappler::xenolith::View &, const core::FrameContraints &)>


# ::stappler::xenolith::ViewInfo::onClosed

## BRIEF

## CONTENT

Тип: Function<void (stappler::xenolith::View &)>


# ::stappler::xenolith::View

## BRIEF

## CONTENT

Базовые классы:
* thread::ThreadInterface<Interface>
* TextInputViewInterface
* platform::ViewInterface


# ::stappler::xenolith::View::FrameAverageCount

## BRIEF

## CONTENT

Доступ: public

Тип: size_t const


# ::stappler::xenolith::View::AttachmentLayout

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::View::ImageStorage

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::View::FrameEmitter

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::View::FrameRequest

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::View::RenderQueue

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::View::onFrameRate

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::xenolith::EventHeader


# ::stappler::xenolith::View::onBackground

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::xenolith::EventHeader


# ::stappler::xenolith::View::onFocus

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::xenolith::EventHeader


# ::stappler::xenolith::View::View()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::View::~View()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::View::init(stappler::xenolith::Application&,stappler::xenolith::ViewInfo&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Application&
* stappler::xenolith::ViewInfo&&

Возвращает:
* bool

# ::stappler::xenolith::View::run()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::View::runWithQueue(Rc<core::Queue> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Rc<core::Queue> const&


# ::stappler::xenolith::View::end()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::View::update(bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* bool


# ::stappler::xenolith::View::close()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::View::performOnThread(Function<void ()>&&,stappler::mem_std::Ref*,bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Function<void ()>&&
* stappler::mem_std::Ref*
* bool


# ::stappler::xenolith::View::present(Rc<stappler::xenolith::View::ImageStorage>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Rc<stappler::xenolith::View::ImageStorage>&&

Возвращает:
* bool

# ::stappler::xenolith::View::presentImmediate(Rc<stappler::xenolith::View::ImageStorage>&&,Function<void (bool)>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Rc<stappler::xenolith::View::ImageStorage>&&
* Function<void (bool)>&&

Возвращает:
* bool

# ::stappler::xenolith::View::invalidateTarget(Rc<stappler::xenolith::View::ImageStorage>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Rc<stappler::xenolith::View::ImageStorage>&&


# ::stappler::xenolith::View::getSwapchainHandle() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Rc<stappler::mem_std::Ref>

# ::stappler::xenolith::View::captureImage(stappler::StringView,Rc<core::ImageObject> const&,stappler::xenolith::View::AttachmentLayout) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView
* Rc<core::ImageObject> const&
* stappler::xenolith::View::AttachmentLayout


# ::stappler::xenolith::View::captureImage(Function<void (const core::ImageInfoData &, stappler::BytesView)>&&,Rc<core::ImageObject> const&,stappler::xenolith::View::AttachmentLayout) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Function<void (const core::ImageInfoData &, stappler::BytesView)>&&
* Rc<core::ImageObject> const&
* stappler::xenolith::View::AttachmentLayout


# ::stappler::xenolith::View::getDirector() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Rc<stappler::xenolith::Director> const&

# ::stappler::xenolith::View::getMainLoop() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Rc<stappler::xenolith::Application> const&

# ::stappler::xenolith::View::getGlLoop() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Rc<core::Loop> const&

# ::stappler::xenolith::View::handleInputEvent(stappler::xenolith::InputEventData const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::InputEventData const&


# ::stappler::xenolith::View::handleInputEvents(Vector<stappler::xenolith::InputEventData>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Vector<stappler::xenolith::InputEventData>&&


# ::stappler::xenolith::View::getSwapchainImageInfo() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* core::ImageInfo

# ::stappler::xenolith::View::getSwapchainImageInfo(core::SwapchainConfig const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* core::SwapchainConfig const&

Возвращает:
* core::ImageInfo

# ::stappler::xenolith::View::getSwapchainImageViewInfo(core::ImageInfo const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* core::ImageInfo const&

Возвращает:
* core::ImageViewInfo

# ::stappler::xenolith::View::getLastFrameInterval() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint64_t

# ::stappler::xenolith::View::getAvgFrameInterval() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint64_t

# ::stappler::xenolith::View::getLastFrameTime() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint64_t

# ::stappler::xenolith::View::getAvgFrameTime() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint64_t

# ::stappler::xenolith::View::getAvgFenceTime() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint64_t

# ::stappler::xenolith::View::getFrameContraints() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* core::FrameContraints const&

# ::stappler::xenolith::View::getExtent() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::Extent2

# ::stappler::xenolith::View::hasFocus() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::View::isInBackground() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::View::isPointerWithinWindow() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::View::getFrameInterval() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint64_t

# ::stappler::xenolith::View::setFrameInterval(uint64_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint64_t


# ::stappler::xenolith::View::setReadyForNextFrame()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::View::retainBackButton()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::View::releaseBackButton()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::View::getBackButtonCounter() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint64_t

# ::stappler::xenolith::View::setDecorationTone(float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float


# ::stappler::xenolith::View::setDecorationVisible(bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* bool


# ::stappler::xenolith::View::retainView()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint64_t

# ::stappler::xenolith::View::releaseView(uint64_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint64_t


# ::stappler::xenolith::View::setContentPadding(stappler::xenolith::Padding const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Padding const&


# ::stappler::xenolith::View::wakeup()

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::View::_constraints

## BRIEF

## CONTENT

Доступ: protected

Тип: core::FrameContraints


# ::stappler::xenolith::View::_inBackground

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::View::_hasFocus

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::View::_pointerInWindow

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::View::_threadStarted

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::View::_navigationEmpty

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::View::_init

## BRIEF

## CONTENT

Доступ: protected

Тип: std::atomic<bool>


# ::stappler::xenolith::View::_running

## BRIEF

## CONTENT

Доступ: protected

Тип: std::atomic<bool>


# ::stappler::xenolith::View::_director

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::xenolith::Director>


# ::stappler::xenolith::View::_mainLoop

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::xenolith::Application>


# ::stappler::xenolith::View::_glLoop

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<core::Loop>


# ::stappler::xenolith::View::_frameEmitter

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<core::FrameEmitter>


# ::stappler::xenolith::View::_info

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::ViewInfo


# ::stappler::xenolith::View::_gen

## BRIEF

## CONTENT

Доступ: protected

Тип: uint64_t


# ::stappler::xenolith::View::_config

## BRIEF

## CONTENT

Доступ: protected

Тип: core::SwapchainConfig


# ::stappler::xenolith::View::_thread

## BRIEF

## CONTENT

Доступ: protected

Тип: std::thread


# ::stappler::xenolith::View::_threadId

## BRIEF

## CONTENT

Доступ: protected

Тип: std::thread::id


# ::stappler::xenolith::View::_shouldQuit

## BRIEF

## CONTENT

Доступ: protected

Тип: std::atomic_flag


# ::stappler::xenolith::View::_mutex

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::mem_std::Mutex


# ::stappler::xenolith::View::_callbacks

## BRIEF

## CONTENT

Доступ: protected

Тип: Vector<Pair<Function<void ()>, Rc<stappler::mem_std::Ref>>>


# ::stappler::xenolith::View::_frameIntervalMutex

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::mem_std::Mutex


# ::stappler::xenolith::View::_lastFrameStart

## BRIEF

## CONTENT

Доступ: protected

Тип: uint64_t


# ::stappler::xenolith::View::_lastFrameInterval

## BRIEF

## CONTENT

Доступ: protected

Тип: std::atomic<uint64_t>


# ::stappler::xenolith::View::_avgFrameInterval

## BRIEF

## CONTENT

Доступ: protected

Тип: math::MovingAverage<FrameAverageCount, uint64_t>


# ::stappler::xenolith::View::_avgFrameIntervalValue

## BRIEF

## CONTENT

Доступ: protected

Тип: std::atomic<uint64_t>


# ::stappler::xenolith::View::_backButtonCounter

## BRIEF

## CONTENT

Доступ: protected

Тип: uint64_t
