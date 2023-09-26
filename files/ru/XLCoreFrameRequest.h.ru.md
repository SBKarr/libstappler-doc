Title: XLCoreFrameRequest.h


# XENOLITH_CORE_XLCOREFRAMEREQUEST_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::core::FrameOutputBinding

## BRIEF

## CONTENT

Базовые классы:
* Ref


# ::stappler::xenolith::core::FrameOutputBinding::CompleteCallback

## BRIEF

## CONTENT


# ::stappler::xenolith::core::FrameOutputBinding::attachment

## BRIEF

## CONTENT

Тип: stappler::xenolith::core::AttachmentData const*


# ::stappler::xenolith::core::FrameOutputBinding::callback

## BRIEF

## CONTENT

Тип: CompleteCallback


# ::stappler::xenolith::core::FrameOutputBinding::handle

## BRIEF

## CONTENT

Тип: Rc<stappler::mem_std::Ref>


# ::stappler::xenolith::core::FrameOutputBinding::FrameOutputBinding(stappler::xenolith::core::AttachmentData const*,stappler::xenolith::core::FrameOutputBinding::CompleteCallback&&,Rc<stappler::mem_std::Ref>&&)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::core::AttachmentData const*
* stappler::xenolith::core::FrameOutputBinding::CompleteCallback&&
* Rc<stappler::mem_std::Ref>&&


# ::stappler::xenolith::core::FrameOutputBinding::~FrameOutputBinding()

## BRIEF

## CONTENT


# ::stappler::xenolith::core::FrameOutputBinding::handleReady(stappler::xenolith::core::FrameAttachmentData&,bool)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::core::FrameAttachmentData&
* bool

Возвращает:
* bool

# ::stappler::xenolith::core::FrameRequest

## BRIEF

## CONTENT

Базовые классы:
* Ref


# ::stappler::xenolith::core::FrameRequest::CompleteCallback

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::FrameRequest::~FrameRequest()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::FrameRequest::init(Rc<stappler::xenolith::core::FrameEmitter> const&,stappler::xenolith::core::FrameContraints const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Rc<stappler::xenolith::core::FrameEmitter> const&
* stappler::xenolith::core::FrameContraints const&

Возвращает:
* bool

# ::stappler::xenolith::core::FrameRequest::init(Rc<stappler::xenolith::core::Queue> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Rc<stappler::xenolith::core::Queue> const&

Возвращает:
* bool

# ::stappler::xenolith::core::FrameRequest::init(Rc<stappler::xenolith::core::Queue> const&,stappler::xenolith::core::FrameContraints const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Rc<stappler::xenolith::core::Queue> const&
* stappler::xenolith::core::FrameContraints const&

Возвращает:
* bool

# ::stappler::xenolith::core::FrameRequest::init(Rc<stappler::xenolith::core::Queue> const&,Rc<stappler::xenolith::core::FrameEmitter> const&,stappler::xenolith::core::FrameContraints const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Rc<stappler::xenolith::core::Queue> const&
* Rc<stappler::xenolith::core::FrameEmitter> const&
* stappler::xenolith::core::FrameContraints const&

Возвращает:
* bool

# ::stappler::xenolith::core::FrameRequest::addSignalDependency(Rc<stappler::xenolith::core::DependencyEvent>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Rc<stappler::xenolith::core::DependencyEvent>&&


# ::stappler::xenolith::core::FrameRequest::addSignalDependencies(Vector<Rc<stappler::xenolith::core::DependencyEvent>>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Vector<Rc<stappler::xenolith::core::DependencyEvent>>&&


# ::stappler::xenolith::core::FrameRequest::addImageSpecialization(stappler::xenolith::core::ImageAttachment const*,stappler::xenolith::core::ImageInfoData&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::ImageAttachment const*
* stappler::xenolith::core::ImageInfoData&&


# ::stappler::xenolith::core::FrameRequest::getImageSpecialization(stappler::xenolith::core::ImageAttachment const*) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::ImageAttachment const*

Возвращает:
* stappler::xenolith::core::ImageInfoData const*

# ::stappler::xenolith::core::FrameRequest::addInput(stappler::xenolith::core::Attachment const*,Rc<stappler::xenolith::core::AttachmentInputData>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::Attachment const*
* Rc<stappler::xenolith::core::AttachmentInputData>&&

Возвращает:
* bool

# ::stappler::xenolith::core::FrameRequest::addInput(stappler::xenolith::core::AttachmentData const*,Rc<stappler::xenolith::core::AttachmentInputData>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::AttachmentData const*
* Rc<stappler::xenolith::core::AttachmentInputData>&&

Возвращает:
* bool

# ::stappler::xenolith::core::FrameRequest::setQueue(Rc<stappler::xenolith::core::Queue> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Rc<stappler::xenolith::core::Queue> const&


# ::stappler::xenolith::core::FrameRequest::setOutput(Rc<stappler::xenolith::core::FrameOutputBinding>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Rc<stappler::xenolith::core::FrameOutputBinding>&&


# ::stappler::xenolith::core::FrameRequest::setOutput(stappler::xenolith::core::AttachmentData const*,stappler::xenolith::core::FrameRequest::CompleteCallback&&,Rc<stappler::mem_std::Ref>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::AttachmentData const*
* stappler::xenolith::core::FrameRequest::CompleteCallback&&
* Rc<stappler::mem_std::Ref>&&


# ::stappler::xenolith::core::FrameRequest::setOutput(stappler::xenolith::core::Attachment const*,stappler::xenolith::core::FrameRequest::CompleteCallback&&,Rc<stappler::mem_std::Ref>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::Attachment const*
* stappler::xenolith::core::FrameRequest::CompleteCallback&&
* Rc<stappler::mem_std::Ref>&&


# ::stappler::xenolith::core::FrameRequest::setRenderTarget(stappler::xenolith::core::AttachmentData const*,Rc<stappler::xenolith::core::ImageStorage>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::AttachmentData const*
* Rc<stappler::xenolith::core::ImageStorage>&&


# ::stappler::xenolith::core::FrameRequest::onOutputReady(stappler::xenolith::core::Loop&,stappler::xenolith::core::FrameAttachmentData&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::Loop&
* stappler::xenolith::core::FrameAttachmentData&

Возвращает:
* bool

# ::stappler::xenolith::core::FrameRequest::onOutputInvalidated(stappler::xenolith::core::Loop&,stappler::xenolith::core::FrameAttachmentData&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::Loop&
* stappler::xenolith::core::FrameAttachmentData&


# ::stappler::xenolith::core::FrameRequest::finalize(stappler::xenolith::core::Loop&,HashMap<const stappler::xenolith::core::AttachmentData *, stappler::xenolith::core::FrameAttachmentData *>&,bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::Loop&
* HashMap<const stappler::xenolith::core::AttachmentData *, stappler::xenolith::core::FrameAttachmentData *>&
* bool


# ::stappler::xenolith::core::FrameRequest::signalDependencies(stappler::xenolith::core::Loop&,stappler::xenolith::core::Queue*,bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::Loop&
* stappler::xenolith::core::Queue*
* bool


# ::stappler::xenolith::core::FrameRequest::getInputData(stappler::xenolith::core::AttachmentData const*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::AttachmentData const*

Возвращает:
* Rc<stappler::xenolith::core::AttachmentInputData>

# ::stappler::xenolith::core::FrameRequest::getPool() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Rc<stappler::xenolith::PoolRef> const&

# ::stappler::xenolith::core::FrameRequest::getRenderTarget(stappler::xenolith::core::AttachmentData const*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::AttachmentData const*

Возвращает:
* Rc<stappler::xenolith::core::ImageStorage>

# ::stappler::xenolith::core::FrameRequest::getEmitter() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Rc<stappler::xenolith::core::FrameEmitter> const&

# ::stappler::xenolith::core::FrameRequest::getQueue() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Rc<stappler::xenolith::core::Queue> const&

# ::stappler::xenolith::core::FrameRequest::getQueueList() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Set<Rc<stappler::xenolith::core::Queue>>

# ::stappler::xenolith::core::FrameRequest::getFrameConstraints() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::core::FrameContraints const&

# ::stappler::xenolith::core::FrameRequest::setReadyForSubmit(bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* bool


# ::stappler::xenolith::core::FrameRequest::isReadyForSubmit() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::core::FrameRequest::isPersistentMapping() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::core::FrameRequest::setSceneId(uint64_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint64_t


# ::stappler::xenolith::core::FrameRequest::getSceneId() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint64_t

# ::stappler::xenolith::core::FrameRequest::getSignalDependencies() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Vector<Rc<stappler::xenolith::core::DependencyEvent>> const&

# ::stappler::xenolith::core::FrameRequest::FrameRequest()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::FrameRequest::waitForInput(stappler::xenolith::core::FrameQueue&,Rc<stappler::xenolith::core::AttachmentHandle> const&,Function<void (bool)>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::FrameQueue&
* Rc<stappler::xenolith::core::AttachmentHandle> const&
* Function<void (bool)>&&


# ::stappler::xenolith::core::FrameRequest::getOutputBinding(stappler::xenolith::core::AttachmentData const*) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::AttachmentData const*

Возвращает:
* stappler::xenolith::core::FrameOutputBinding const*

# ::stappler::xenolith::core::FrameRequest::FrameRequest(stappler::xenolith::core::FrameRequest const&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::core::FrameRequest const&


# ::stappler::xenolith::core::FrameRequest::operator=(stappler::xenolith::core::FrameRequest const&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::core::FrameRequest const&

Возвращает:
* stappler::xenolith::core::FrameRequest&

# ::stappler::xenolith::core::FrameRequest::_pool

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::xenolith::PoolRef>


# ::stappler::xenolith::core::FrameRequest::_emitter

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::xenolith::core::FrameEmitter>


# ::stappler::xenolith::core::FrameRequest::_queue

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::xenolith::core::Queue>


# ::stappler::xenolith::core::FrameRequest::_constraints

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::core::FrameContraints


# ::stappler::xenolith::core::FrameRequest::_input

## BRIEF

## CONTENT

Доступ: protected

Тип: Map<const stappler::xenolith::core::AttachmentData *, Rc<stappler::xenolith::core::AttachmentInputData>>


# ::stappler::xenolith::core::FrameRequest::_readyForSubmit

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::core::FrameRequest::_persistentMappings

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::core::FrameRequest::_sceneId

## BRIEF

## CONTENT

Доступ: protected

Тип: uint64_t


# ::stappler::xenolith::core::FrameRequest::_imageSpecialization

## BRIEF

## CONTENT

Доступ: protected

Тип: Map<const stappler::xenolith::core::ImageAttachment *, stappler::xenolith::core::ImageInfoData>


# ::stappler::xenolith::core::FrameRequest::_output

## BRIEF

## CONTENT

Доступ: protected

Тип: Map<const stappler::xenolith::core::AttachmentData *, Rc<stappler::xenolith::core::FrameOutputBinding>>


# ::stappler::xenolith::core::FrameRequest::_renderTargets

## BRIEF

## CONTENT

Доступ: protected

Тип: Map<const stappler::xenolith::core::AttachmentData *, Rc<stappler::xenolith::core::ImageStorage>>


# ::stappler::xenolith::core::FrameRequest::_signalDependencies

## BRIEF

## CONTENT

Доступ: protected

Тип: Vector<Rc<stappler::xenolith::core::DependencyEvent>>


# ::stappler::xenolith::core::FrameRequest::WaitInputData

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::core::FrameRequest::WaitInputData::queue

## BRIEF

## CONTENT

Тип: Rc<stappler::xenolith::core::FrameQueue>


# ::stappler::xenolith::core::FrameRequest::WaitInputData::handle

## BRIEF

## CONTENT

Тип: stappler::xenolith::core::AttachmentHandle*


# ::stappler::xenolith::core::FrameRequest::WaitInputData::callback

## BRIEF

## CONTENT

Тип: Function<void (bool)>


# ::stappler::xenolith::core::FrameRequest::_waitForInputs

## BRIEF

## CONTENT

Доступ: protected

Тип: Map<const stappler::xenolith::core::AttachmentData *, stappler::xenolith::core::FrameRequest::WaitInputData>
