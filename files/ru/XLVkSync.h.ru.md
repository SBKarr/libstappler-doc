Title: XLVkSync.h


# XENOLITH_BACKEND_VK_XLVKSYNC_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::vk::Semaphore

## BRIEF

## CONTENT

Базовые классы:
* core::Semaphore


# ::stappler::xenolith::vk::Semaphore::~Semaphore()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::vk::Semaphore::init(stappler::xenolith::vk::Device&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::vk::Device&

Возвращает:
* bool

# ::stappler::xenolith::vk::Semaphore::getSemaphore() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* VkSemaphore

# ::stappler::xenolith::vk::Semaphore::_sem

## BRIEF

## CONTENT

Доступ: protected

Тип: VkSemaphore


# ::stappler::xenolith::vk::Fence

## BRIEF

## CONTENT

Базовые классы:
* core::Object


# ::stappler::xenolith::vk::Fence::State

## BRIEF

## CONTENT

Доступ: public

Значения:
* Disabled
* Armed
* Signaled


# ::stappler::xenolith::vk::Fence::~Fence()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::vk::Fence::init(stappler::xenolith::vk::Device&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::vk::Device&

Возвращает:
* bool

# ::stappler::xenolith::vk::Fence::clear()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::vk::Fence::getFence() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* VkFence

# ::stappler::xenolith::vk::Fence::setFrame(Function<bool ()>&&,Function<void ()>&&,uint64_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Function<bool ()>&&
* Function<void ()>&&
* uint64_t


# ::stappler::xenolith::vk::Fence::getFrame() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint64_t

# ::stappler::xenolith::vk::Fence::setScheduleCallback(Function<bool ()>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Function<bool ()>&&


# ::stappler::xenolith::vk::Fence::setReleaseCallback(Function<bool ()>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Function<bool ()>&&


# ::stappler::xenolith::vk::Fence::getArmedTime() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint64_t

# ::stappler::xenolith::vk::Fence::isArmed() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::vk::Fence::setArmed(stappler::xenolith::vk::DeviceQueue&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::vk::DeviceQueue&


# ::stappler::xenolith::vk::Fence::setArmed()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::vk::Fence::setTag(stappler::StringView)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView


# ::stappler::xenolith::vk::Fence::getTag() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::StringView

# ::stappler::xenolith::vk::Fence::addRelease(Function<void (bool)>&&,stappler::mem_std::Ref*,stappler::StringView)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Function<void (bool)>&&
* stappler::mem_std::Ref*
* stappler::StringView


# ::stappler::xenolith::vk::Fence::schedule(stappler::xenolith::vk::Loop&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::vk::Loop&

Возвращает:
* bool

# ::stappler::xenolith::vk::Fence::check(stappler::xenolith::vk::Loop&,bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::vk::Loop&
* bool

Возвращает:
* bool

# ::stappler::xenolith::vk::Fence::autorelease(Rc<stappler::mem_std::Ref>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Rc<stappler::mem_std::Ref>&&


# ::stappler::xenolith::vk::Fence::scheduleReset(stappler::xenolith::vk::Loop&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::vk::Loop&


# ::stappler::xenolith::vk::Fence::scheduleReleaseReset(stappler::xenolith::vk::Loop&,bool)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::vk::Loop&
* bool


# ::stappler::xenolith::vk::Fence::doRelease(bool)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* bool


# ::stappler::xenolith::vk::Fence::ReleaseHandle

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::vk::Fence::ReleaseHandle::callback

## BRIEF

## CONTENT

Тип: Function<void (bool)>


# ::stappler::xenolith::vk::Fence::ReleaseHandle::ref

## BRIEF

## CONTENT

Тип: Rc<stappler::mem_std::Ref>


# ::stappler::xenolith::vk::Fence::ReleaseHandle::tag

## BRIEF

## CONTENT

Тип: stappler::StringView


# ::stappler::xenolith::vk::Fence::_frame

## BRIEF

## CONTENT

Доступ: protected

Тип: uint64_t


# ::stappler::xenolith::vk::Fence::_state

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::vk::Fence::State


# ::stappler::xenolith::vk::Fence::_fence

## BRIEF

## CONTENT

Доступ: protected

Тип: VkFence


# ::stappler::xenolith::vk::Fence::_release

## BRIEF

## CONTENT

Доступ: protected

Тип: Vector<stappler::xenolith::vk::Fence::ReleaseHandle>


# ::stappler::xenolith::vk::Fence::_mutex

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::mem_std::Mutex


# ::stappler::xenolith::vk::Fence::_queue

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::vk::DeviceQueue*


# ::stappler::xenolith::vk::Fence::_armedTime

## BRIEF

## CONTENT

Доступ: protected

Тип: uint64_t


# ::stappler::xenolith::vk::Fence::_tag

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::StringView


# ::stappler::xenolith::vk::Fence::_scheduleFn

## BRIEF

## CONTENT

Доступ: protected

Тип: Function<bool ()>


# ::stappler::xenolith::vk::Fence::_releaseFn

## BRIEF

## CONTENT

Доступ: protected

Тип: Function<void ()>


# ::stappler::xenolith::vk::Fence::_autorelease

## BRIEF

## CONTENT

Доступ: protected

Тип: Vector<Rc<stappler::mem_std::Ref>>
