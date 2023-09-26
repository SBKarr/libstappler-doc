Title: XLVkLoop.h


# XENOLITH_BACKEND_VK_XLVKLOOP_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::vk::Loop

## BRIEF

## CONTENT

Базовые классы:
* core::Loop


# ::stappler::xenolith::vk::Loop::~Loop()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::vk::Loop::Loop()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::vk::Loop::init(Rc<stappler::xenolith::vk::Instance>&&,stappler::xenolith::core::Loop::LoopInfo&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Rc<stappler::xenolith::vk::Instance>&&
* stappler::xenolith::core::Loop::LoopInfo&&

Возвращает:
* bool

# ::stappler::xenolith::vk::Loop::waitRinning()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::vk::Loop::threadInit()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::vk::Loop::threadDispose()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::vk::Loop::worker()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::vk::Loop::cancel()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::vk::Loop::isRunning() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::vk::Loop::compileResource(Rc<core::Resource>&&,Function<void (bool)>&&,bool) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Rc<core::Resource>&&
* Function<void (bool)>&&
* bool


# ::stappler::xenolith::vk::Loop::compileQueue(Rc<stappler::xenolith::core::Loop::Queue> const&,Function<void (bool)>&&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Rc<stappler::xenolith::core::Loop::Queue> const&
* Function<void (bool)>&&


# ::stappler::xenolith::vk::Loop::compileMaterials(Rc<core::MaterialInputData>&&,Vector<Rc<stappler::xenolith::core::Loop::DependencyEvent>> const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Rc<core::MaterialInputData>&&
* Vector<Rc<stappler::xenolith::core::Loop::DependencyEvent>> const&


# ::stappler::xenolith::vk::Loop::compileImage(Rc<core::DynamicImage> const&,Function<void (bool)>&&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Rc<core::DynamicImage> const&
* Function<void (bool)>&&


# ::stappler::xenolith::vk::Loop::runRenderQueue(Rc<stappler::xenolith::core::Loop::FrameRequest>&&,uint64_t,Function<void (bool)>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Rc<stappler::xenolith::core::Loop::FrameRequest>&&
* uint64_t
* Function<void (bool)>&&


# ::stappler::xenolith::vk::Loop::schedule(Function<bool (core::Loop &)>&&,stappler::StringView)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Function<bool (core::Loop &)>&&
* stappler::StringView


# ::stappler::xenolith::vk::Loop::schedule(Function<bool (core::Loop &)>&&,uint64_t,stappler::StringView)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Function<bool (core::Loop &)>&&
* uint64_t
* stappler::StringView


# ::stappler::xenolith::vk::Loop::performInQueue(Rc<thread::Task>&&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Rc<thread::Task>&&


# ::stappler::xenolith::vk::Loop::performInQueue(Function<void ()>&&,stappler::mem_std::Ref*) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Function<void ()>&&
* stappler::mem_std::Ref*


# ::stappler::xenolith::vk::Loop::performOnGlThread(Function<void ()>&&,stappler::mem_std::Ref*,bool) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Function<void ()>&&
* stappler::mem_std::Ref*
* bool


# ::stappler::xenolith::vk::Loop::isOnGlThread() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::vk::Loop::makeFrame(Rc<stappler::xenolith::core::Loop::FrameRequest>&&,uint64_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Rc<stappler::xenolith::core::Loop::FrameRequest>&&
* uint64_t

Возвращает:
* Rc<stappler::xenolith::core::Loop::FrameHandle>

# ::stappler::xenolith::vk::Loop::acquireFramebuffer(stappler::xenolith::core::Loop::PassData const*,SpanView<Rc<core::ImageView>>)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::Loop::PassData const*
* SpanView<Rc<core::ImageView>>

Возвращает:
* Rc<core::Framebuffer>

# ::stappler::xenolith::vk::Loop::releaseFramebuffer(Rc<core::Framebuffer>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Rc<core::Framebuffer>&&


# ::stappler::xenolith::vk::Loop::acquireImage(stappler::xenolith::core::Loop::ImageAttachment const*,stappler::xenolith::core::Loop::AttachmentHandle const*,core::ImageInfoData const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::Loop::ImageAttachment const*
* stappler::xenolith::core::Loop::AttachmentHandle const*
* core::ImageInfoData const&

Возвращает:
* Rc<stappler::xenolith::core::Loop::ImageStorage>

# ::stappler::xenolith::vk::Loop::releaseImage(Rc<stappler::xenolith::core::Loop::ImageStorage>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Rc<stappler::xenolith::core::Loop::ImageStorage>&&


# ::stappler::xenolith::vk::Loop::makeSemaphore()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Rc<core::Semaphore>

# ::stappler::xenolith::vk::Loop::getSupportedDepthStencilFormat() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Vector<core::ImageFormat> const&

# ::stappler::xenolith::vk::Loop::acquireFence(uint32_t,bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint32_t
* bool

Возвращает:
* Rc<stappler::xenolith::vk::Fence>

# ::stappler::xenolith::vk::Loop::signalDependencies(Vector<Rc<stappler::xenolith::core::Loop::DependencyEvent>> const&,stappler::xenolith::core::Loop::Queue*,bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Vector<Rc<stappler::xenolith::core::Loop::DependencyEvent>> const&
* stappler::xenolith::core::Loop::Queue*
* bool


# ::stappler::xenolith::vk::Loop::waitForDependencies(Vector<Rc<stappler::xenolith::core::Loop::DependencyEvent>> const&,Function<void (bool)>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Vector<Rc<stappler::xenolith::core::Loop::DependencyEvent>> const&
* Function<void (bool)>&&


# ::stappler::xenolith::vk::Loop::wakeup()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::vk::Loop::waitIdle()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::vk::Loop::captureImage(Function<void (const stappler::xenolith::vk::ImageInfoData &, stappler::BytesView)>&&,Rc<core::ImageObject> const&,core::AttachmentLayout)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Function<void (const stappler::xenolith::vk::ImageInfoData &, stappler::BytesView)>&&
* Rc<core::ImageObject> const&
* core::AttachmentLayout


# ::stappler::xenolith::vk::Loop::_thread

## BRIEF

## CONTENT

Доступ: protected

Тип: std::thread


# ::stappler::xenolith::vk::Loop::_threadId

## BRIEF

## CONTENT

Доступ: protected

Тип: std::thread::id


# ::stappler::xenolith::vk::Loop::_mutex

## BRIEF

## CONTENT

Доступ: protected

Тип: std::mutex


# ::stappler::xenolith::vk::Loop::_cond

## BRIEF

## CONTENT

Доступ: protected

Тип: std::condition_variable


# ::stappler::xenolith::vk::Loop::_running

## BRIEF

## CONTENT

Доступ: protected

Тип: std::atomic<bool>


# ::stappler::xenolith::vk::Loop::_internal

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::vk::Loop::Internal*


# ::stappler::xenolith::vk::Loop::_vkInstance

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::xenolith::vk::Instance>


# ::stappler::xenolith::vk::Loop::_clock

## BRIEF

## CONTENT

Доступ: protected

Тип: uint64_t
