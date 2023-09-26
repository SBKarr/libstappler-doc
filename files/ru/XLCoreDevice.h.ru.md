Title: XLCoreDevice.h


# XENOLITH_CORE_XLCOREDEVICE_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::core::Device

## BRIEF

## CONTENT

Базовые классы:
* Ref


# ::stappler::xenolith::core::Device::DescriptorType

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::Device::ImageStorage

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::Device::Device()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::Device::~Device()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::Device::init(stappler::xenolith::core::Instance const*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::Instance const*

Возвращает:
* bool

# ::stappler::xenolith::core::Device::end()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::Device::getProgram(stappler::StringView)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView

Возвращает:
* Rc<stappler::xenolith::core::Shader>

# ::stappler::xenolith::core::Device::addProgram(Rc<stappler::xenolith::core::Shader>)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Rc<stappler::xenolith::core::Shader>

Возвращает:
* Rc<stappler::xenolith::core::Shader>

# ::stappler::xenolith::core::Device::addObject(stappler::xenolith::core::ObjectInterface*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::ObjectInterface*


# ::stappler::xenolith::core::Device::removeObject(stappler::xenolith::core::ObjectInterface*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::ObjectInterface*


# ::stappler::xenolith::core::Device::getSamplersCount() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint32_t

# ::stappler::xenolith::core::Device::isSamplersCompiled() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::core::Device::getTextureLayoutImagesCount() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint32_t

# ::stappler::xenolith::core::Device::getTextureLayoutBuffersCount() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint32_t

# ::stappler::xenolith::core::Device::getSupportedDepthStencilFormat() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Vector<stappler::xenolith::core::ImageFormat> const&

# ::stappler::xenolith::core::Device::getSupportedColorFormat() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Vector<stappler::xenolith::core::ImageFormat> const&

# ::stappler::xenolith::core::Device::onLoopStarted(stappler::xenolith::core::Loop&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::Loop&


# ::stappler::xenolith::core::Device::onLoopEnded(stappler::xenolith::core::Loop&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::Loop&


# ::stappler::xenolith::core::Device::supportsUpdateAfterBind(stappler::xenolith::core::Device::DescriptorType) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::Device::DescriptorType

Возвращает:
* bool

# ::stappler::xenolith::core::Device::getEmptyImageObject() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Rc<stappler::xenolith::core::ImageObject>

# ::stappler::xenolith::core::Device::getSolidImageObject() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Rc<stappler::xenolith::core::ImageObject>

# ::stappler::xenolith::core::Device::makeFramebuffer(stappler::xenolith::core::QueuePassData const*,SpanView<Rc<stappler::xenolith::core::ImageView>>)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::QueuePassData const*
* SpanView<Rc<stappler::xenolith::core::ImageView>>

Возвращает:
* Rc<stappler::xenolith::core::Framebuffer>

# ::stappler::xenolith::core::Device::makeImage(stappler::xenolith::core::ImageInfoData const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::ImageInfoData const&

Возвращает:
* Rc<stappler::xenolith::core::Device::ImageStorage>

# ::stappler::xenolith::core::Device::makeSemaphore()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Rc<stappler::xenolith::core::Semaphore>

# ::stappler::xenolith::core::Device::makeImageView(Rc<stappler::xenolith::core::ImageObject> const&,stappler::xenolith::core::ImageViewInfo const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Rc<stappler::xenolith::core::ImageObject> const&
* stappler::xenolith::core::ImageViewInfo const&

Возвращает:
* Rc<stappler::xenolith::core::ImageView>

# ::stappler::xenolith::core::Device::getPresentatonMask() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint32_t

# ::stappler::xenolith::core::Device::waitIdle() const

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::Device::clearShaders()

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::core::Device::invalidateObjects()

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::core::Device::_started

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::core::Device::_glInstance

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::core::Instance const*


# ::stappler::xenolith::core::Device::_shaderMutex

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::mem_std::Mutex


# ::stappler::xenolith::core::Device::_objectMutex

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::mem_std::Mutex


# ::stappler::xenolith::core::Device::_shaders

## BRIEF

## CONTENT

Доступ: protected

Тип: Map<stappler::mem_std::String, Rc<stappler::xenolith::core::Shader>>


# ::stappler::xenolith::core::Device::_objects

## BRIEF

## CONTENT

Доступ: protected

Тип: std::unordered_set<ObjectInterface *>


# ::stappler::xenolith::core::Device::_samplersInfo

## BRIEF

## CONTENT

Доступ: protected

Тип: Vector<stappler::xenolith::core::SamplerInfo>


# ::stappler::xenolith::core::Device::_depthFormats

## BRIEF

## CONTENT

Доступ: protected

Тип: Vector<stappler::xenolith::core::ImageFormat>


# ::stappler::xenolith::core::Device::_colorFormats

## BRIEF

## CONTENT

Доступ: protected

Тип: Vector<stappler::xenolith::core::ImageFormat>


# ::stappler::xenolith::core::Device::_samplersCount

## BRIEF

## CONTENT

Доступ: protected

Тип: uint32_t


# ::stappler::xenolith::core::Device::_samplersCompiled

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::core::Device::_textureLayoutImagesCount

## BRIEF

## CONTENT

Доступ: protected

Тип: uint32_t


# ::stappler::xenolith::core::Device::_textureLayoutBuffersCount

## BRIEF

## CONTENT

Доступ: protected

Тип: uint32_t


# ::stappler::xenolith::core::Device::_loopThreadId

## BRIEF

## CONTENT

Доступ: protected

Тип: std::thread::id


# ::stappler::xenolith::core::Device::_presentMask

## BRIEF

## CONTENT

Доступ: protected

Тип: uint32_t
