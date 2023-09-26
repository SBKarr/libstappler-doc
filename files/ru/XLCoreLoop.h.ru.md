Title: XLCoreLoop.h


# XENOLITH_CORE_XLCORELOOP_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::core::LoopInfo

## BRIEF

## CONTENT


# ::stappler::xenolith::core::LoopInfo::deviceIdx

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::xenolith::core::LoopInfo::threadsCount

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::xenolith::core::LoopInfo::onDeviceStarted

## BRIEF

## CONTENT

Тип: Function<void (const stappler::xenolith::core::Loop &, const stappler::xenolith::core::Device &)>


# ::stappler::xenolith::core::LoopInfo::onDeviceFinalized

## BRIEF

## CONTENT

Тип: Function<void (const stappler::xenolith::core::Loop &, const stappler::xenolith::core::Device &)>


# ::stappler::xenolith::core::LoopInfo::platformData

## BRIEF

## CONTENT

Тип: Rc<stappler::mem_std::Ref>


# ::stappler::xenolith::core::Loop

## BRIEF

## CONTENT

Базовые классы:
* thread::ThreadInterface<Interface>


# ::stappler::xenolith::core::Loop::FrameCache

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::Loop::FrameRequest

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::Loop::ImageStorage

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::Loop::Queue

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::Loop::FrameHandle

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::Loop::PassData

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::Loop::ImageAttachment

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::Loop::AttachmentHandle

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::Loop::DependencyEvent

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::Loop::LoopInfo

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::Loop::LoopThreadId

## BRIEF

## CONTENT

Доступ: public

Тип: uint32_t const


# ::stappler::xenolith::core::Loop::~Loop()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::Loop::Loop()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::Loop::init(stappler::xenolith::core::Instance*,stappler::xenolith::core::Loop::LoopInfo&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::Instance*
* stappler::xenolith::core::Loop::LoopInfo&&

Возвращает:
* bool

# ::stappler::xenolith::core::Loop::waitRinning()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::Loop::cancel()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::Loop::isRunning() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::core::Loop::getGlInstance() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Rc<stappler::xenolith::core::Instance> const&

# ::stappler::xenolith::core::Loop::getFrameCache() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Rc<stappler::xenolith::core::Loop::FrameCache> const&

# ::stappler::xenolith::core::Loop::compileResource(Rc<stappler::xenolith::core::Resource>&&,Function<void (bool)>&&,bool) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Rc<stappler::xenolith::core::Resource>&&
* Function<void (bool)>&&
* bool


# ::stappler::xenolith::core::Loop::compileQueue(Rc<stappler::xenolith::core::Loop::Queue> const&,Function<void (bool)>&&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Rc<stappler::xenolith::core::Loop::Queue> const&
* Function<void (bool)>&&


# ::stappler::xenolith::core::Loop::compileMaterials(Rc<stappler::xenolith::core::MaterialInputData>&&,Vector<Rc<stappler::xenolith::core::Loop::DependencyEvent>> const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Rc<stappler::xenolith::core::MaterialInputData>&&
* Vector<Rc<stappler::xenolith::core::Loop::DependencyEvent>> const&


# ::stappler::xenolith::core::Loop::compileImage(Rc<stappler::xenolith::core::DynamicImage> const&,Function<void (bool)>&&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Rc<stappler::xenolith::core::DynamicImage> const&
* Function<void (bool)>&&


# ::stappler::xenolith::core::Loop::runRenderQueue(Rc<stappler::xenolith::core::Loop::FrameRequest>&&,uint64_t,Function<void (bool)>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Rc<stappler::xenolith::core::Loop::FrameRequest>&&
* uint64_t
* Function<void (bool)>&&


# ::stappler::xenolith::core::Loop::schedule(Function<bool (stappler::xenolith::core::Loop &)>&&,stappler::StringView)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Function<bool (stappler::xenolith::core::Loop &)>&&
* stappler::StringView


# ::stappler::xenolith::core::Loop::schedule(Function<bool (stappler::xenolith::core::Loop &)>&&,uint64_t,stappler::StringView)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Function<bool (stappler::xenolith::core::Loop &)>&&
* uint64_t
* stappler::StringView


# ::stappler::xenolith::core::Loop::performInQueue(Rc<thread::Task>&&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Rc<thread::Task>&&


# ::stappler::xenolith::core::Loop::performInQueue(Function<void ()>&&,stappler::mem_std::Ref*) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Function<void ()>&&
* stappler::mem_std::Ref*


# ::stappler::xenolith::core::Loop::performOnGlThread(Function<void ()>&&,stappler::mem_std::Ref*,bool) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Function<void ()>&&
* stappler::mem_std::Ref*
* bool


# ::stappler::xenolith::core::Loop::isOnGlThread() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::core::Loop::makeFrame(Rc<stappler::xenolith::core::Loop::FrameRequest>&&,uint64_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Rc<stappler::xenolith::core::Loop::FrameRequest>&&
* uint64_t

Возвращает:
* Rc<stappler::xenolith::core::Loop::FrameHandle>

# ::stappler::xenolith::core::Loop::acquireFramebuffer(stappler::xenolith::core::Loop::PassData const*,SpanView<Rc<stappler::xenolith::core::ImageView>>)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::Loop::PassData const*
* SpanView<Rc<stappler::xenolith::core::ImageView>>

Возвращает:
* Rc<stappler::xenolith::core::Framebuffer>

# ::stappler::xenolith::core::Loop::releaseFramebuffer(Rc<stappler::xenolith::core::Framebuffer>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Rc<stappler::xenolith::core::Framebuffer>&&


# ::stappler::xenolith::core::Loop::acquireImage(stappler::xenolith::core::Loop::ImageAttachment const*,stappler::xenolith::core::Loop::AttachmentHandle const*,stappler::xenolith::core::ImageInfoData const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::Loop::ImageAttachment const*
* stappler::xenolith::core::Loop::AttachmentHandle const*
* stappler::xenolith::core::ImageInfoData const&

Возвращает:
* Rc<stappler::xenolith::core::Loop::ImageStorage>

# ::stappler::xenolith::core::Loop::releaseImage(Rc<stappler::xenolith::core::Loop::ImageStorage>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Rc<stappler::xenolith::core::Loop::ImageStorage>&&


# ::stappler::xenolith::core::Loop::makeSemaphore()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Rc<stappler::xenolith::core::Semaphore>

# ::stappler::xenolith::core::Loop::getSupportedDepthStencilFormat() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Vector<stappler::xenolith::core::ImageFormat> const&

# ::stappler::xenolith::core::Loop::signalDependencies(Vector<Rc<stappler::xenolith::core::Loop::DependencyEvent>> const&,stappler::xenolith::core::Loop::Queue*,bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Vector<Rc<stappler::xenolith::core::Loop::DependencyEvent>> const&
* stappler::xenolith::core::Loop::Queue*
* bool


# ::stappler::xenolith::core::Loop::waitForDependencies(Vector<Rc<stappler::xenolith::core::Loop::DependencyEvent>> const&,Function<void (bool)>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Vector<Rc<stappler::xenolith::core::Loop::DependencyEvent>> const&
* Function<void (bool)>&&


# ::stappler::xenolith::core::Loop::wakeup()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::Loop::waitIdle()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::Loop::captureImage(Function<void (const stappler::xenolith::core::ImageInfoData &, stappler::BytesView)>&&,Rc<stappler::xenolith::core::ImageObject> const&,stappler::xenolith::core::AttachmentLayout)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Function<void (const stappler::xenolith::core::ImageInfoData &, stappler::BytesView)>&&
* Rc<stappler::xenolith::core::ImageObject> const&
* stappler::xenolith::core::AttachmentLayout


# ::stappler::xenolith::core::Loop::_shouldExit

## BRIEF

## CONTENT

Доступ: protected

Тип: std::atomic_flag


# ::stappler::xenolith::core::Loop::_glInstance

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::xenolith::core::Instance>


# ::stappler::xenolith::core::Loop::_frameCache

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::xenolith::core::Loop::FrameCache>


# ::stappler::xenolith::core::Loop::_info

## BRIEF

## CONTENT

Доступ: protected

Тип: LoopInfo
