Title: XLCoreDevice.h


# XENOLITH_CORE_XLCOREDEVICE_H_

## BRIEF

Заголовок абстрактного графического устройства

## CONTENT

Заголовок абстрактного графического устройства


# ::stappler::xenolith::core::Device

## BRIEF

Абстрактное графическое устройство

## CONTENT

Абстрактное графическое устройство

Базовые классы:
* Ref


# ::stappler::xenolith::core::Device::DescriptorType

## BRIEF

Тип дескриптора

## CONTENT

Доступ: public

Тип дескриптора


# ::stappler::xenolith::core::Device::ImageStorage

## BRIEF

Тих хранимого изображения

## CONTENT

Доступ: public

Тих хранимого изображения


# ::stappler::xenolith::core::Device::Device()

## BRIEF

Конструктор

## CONTENT

Доступ: public

Конструктор


# ::stappler::xenolith::core::Device::~Device()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор


# ::stappler::xenolith::core::Device::init(stappler::xenolith::core::Instance const*)

## BRIEF

Инициализирует устройство

## CONTENT

Доступ: public

Инициализирует устройство

Параметры:
* stappler::xenolith::core::Instance const* - интерфейс графического API

Возвращает:
* bool

# ::stappler::xenolith::core::Device::end()

## BRIEF

Завершает работу устройства

## CONTENT

Доступ: public

Завершает работу устройства


# ::stappler::xenolith::core::Device::getProgram(stappler::StringView)

## BRIEF

Возвращает графическую подпрограмму по имени

## CONTENT

Возвращает графическую подпрограмму по имени

Доступ: public

Параметры:
* stappler::StringView

Возвращает:
* Rc<stappler::xenolith::core::Shader>

# ::stappler::xenolith::core::Device::addProgram(Rc<stappler::xenolith::core::Shader>)

## BRIEF

Добавляет загруженную графическую программу

## CONTENT

Доступ: public

Добавляет загруженную графическую программу

Параметры:
* Rc<stappler::xenolith::core::Shader>

Возвращает:
* Rc<stappler::xenolith::core::Shader>

# ::stappler::xenolith::core::Device::addObject(stappler::xenolith::core::Object*)

## BRIEF

Добавляет объект внутри устройства

## CONTENT

Доступ: public

Добавляет объект внутри устройства

Параметры:
* stappler::xenolith::core::Object*


# ::stappler::xenolith::core::Device::removeObject(stappler::xenolith::core::Object*)

## BRIEF

Удаляет объект внутри устройства

## CONTENT

Доступ: public

Удаляет объект внутри устройства

Параметры:
* stappler::xenolith::core::Object*


# ::stappler::xenolith::core::Device::getSamplersCount() const

## BRIEF

Возвращает колечиество активных семплеров

## CONTENT

Доступ: public

Возвращает колечиество активных семплеров

Возвращает:
* uint32_t

# ::stappler::xenolith::core::Device::isSamplersCompiled() const

## BRIEF

Проверяет, собраны ли семплеры

## CONTENT

Доступ: public

Проверяет, собраны ли семплеры

Возвращает:
* bool

# ::stappler::xenolith::core::Device::getTextureLayoutImagesCount() const

## BRIEF

Возвращает число изображений в наборе

## CONTENT

Доступ: public

Возвращает число изображений в наборе. Большее число иображений в наборе означает меньшее число переключений контекста при рисовании. В лучшем случае, все активные изображения должны вмещаться в один набор.

Возвращает:
* uint32_t

# ::stappler::xenolith::core::Device::getTextureLayoutBuffersCount() const

## BRIEF

Возвращает число ассоциированных с набором изображений буферов (для алтасов и подобного)

## CONTENT

Доступ: public

Возвращает число ассоциированных с набором изображений буферов (для алтасов и подобного)

Возвращает:
* uint32_t

# ::stappler::xenolith::core::Device::getSupportedDepthStencilFormat() const

## BRIEF

Возвращает поддерживаемые форматы буфера глубины

## CONTENT

Доступ: public

Возвращает поддерживаемые форматы буфера глубины

Возвращает:
* Vector<stappler::xenolith::core::ImageFormat> const&

# ::stappler::xenolith::core::Device::getSupportedColorFormat() const

## BRIEF

Возвращает поддерживаемые цветовые форматы

## CONTENT

Доступ: public

Возвращает поддерживаемые цветовые форматы

Возвращает:
* Vector<stappler::xenolith::core::ImageFormat> const&

# ::stappler::xenolith::core::Device::onLoopStarted(stappler::xenolith::core::Loop&)

## BRIEF

Обрабатывает событие запуска графического цикла

## CONTENT

Доступ: public

Обрабатывает событие запуска графического цикла

Параметры:
* stappler::xenolith::core::Loop&


# ::stappler::xenolith::core::Device::onLoopEnded(stappler::xenolith::core::Loop&)

## BRIEF

Обрабатывает событие остановки графического цикла

## CONTENT

Доступ: public

Обрабатывает событие остановки графического цикла

Параметры:
* stappler::xenolith::core::Loop&


# ::stappler::xenolith::core::Device::supportsUpdateAfterBind(stappler::xenolith::core::Device::DescriptorType) const

## BRIEF

Проверяет, могут ли дескрипторы определённого типа быть обновлены после привязки

## CONTENT

Доступ: public

Проверяет, могут ли дескрипторы определённого типа быть обновлены после привязки. Такая возможность существенно ускоряет работу с дескрипторами.

Параметры:
* stappler::xenolith::core::Device::DescriptorType

Возвращает:
* bool

# ::stappler::xenolith::core::Device::getEmptyImageObject() const

## BRIEF

Возвращает объект пустого изображения

## CONTENT

Доступ: public

Возвращает объект пустого изображения

Возвращает:
* Rc<stappler::xenolith::core::ImageObject>

# ::stappler::xenolith::core::Device::getSolidImageObject() const

## BRIEF

Возвращает объект заполненного цветом изображения

## CONTENT

Доступ: public

Возвращает объект заполненного цветом изображения

Возвращает:
* Rc<stappler::xenolith::core::ImageObject>

# ::stappler::xenolith::core::Device::makeFramebuffer(stappler::xenolith::core::QueuePassData const*,SpanView<Rc<stappler::xenolith::core::ImageView>>)

## BRIEF

Создаёт буфер кадра

## CONTENT

Доступ: public

Создаёт буфер кадра

Параметры:
* stappler::xenolith::core::QueuePassData const*
* SpanView<Rc<stappler::xenolith::core::ImageView>>

Возвращает:
* Rc<stappler::xenolith::core::Framebuffer>

# ::stappler::xenolith::core::Device::makeImage(stappler::xenolith::core::ImageInfoData const&)

## BRIEF

Создаёт объект изображения

## CONTENT

Доступ: public

Создаёт объект изображения

Параметры:
* stappler::xenolith::core::ImageInfoData const&

Возвращает:
* Rc<stappler::xenolith::core::Device::ImageStorage>

# ::stappler::xenolith::core::Device::makeSemaphore()

## BRIEF

Создаёт семафор

## CONTENT

Доступ: public

Создаёт семафор

Возвращает:
* Rc<stappler::xenolith::core::Semaphore>

# ::stappler::xenolith::core::Device::makeImageView(Rc<stappler::xenolith::core::ImageObject> const&,stappler::xenolith::core::ImageViewInfo const&)

## BRIEF

Создаёт отображение изображения

## CONTENT

Доступ: public

Создаёт отображение изображения

Параметры:
* Rc<stappler::xenolith::core::ImageObject> const&
* stappler::xenolith::core::ImageViewInfo const&

Возвращает:
* Rc<stappler::xenolith::core::ImageView>

# ::stappler::xenolith::core::Device::getPresentatonMask() const

## BRIEF

Возвращает маску флагов, которая означает, что для определённого исполняющего устройства возможна презентация кадра на экране

## CONTENT

Доступ: public

Возвращает маску флагов, которая означает, что для определённого исполняющего устройства возможна презентация кадра на экране

Возвращает:
* uint32_t

# ::stappler::xenolith::core::Device::waitIdle() const

## BRIEF

Ожидает полной остановки активности на устройстве

## CONTENT

Доступ: public

Ожидает полной остановки активности на устройстве


# ::stappler::xenolith::core::Device::clearShaders()

## BRIEF

Отключает все подпрограммы

## CONTENT

Доступ: protected

Отключает все подпрограммы


# ::stappler::xenolith::core::Device::invalidateObjects()

## BRIEF

Отключает все объекты

## CONTENT

Доступ: protected

Отключает все объекты


# ::stappler::xenolith::core::Device::_started

## BRIEF

Флаг запуска

## CONTENT

Доступ: protected

Флаг запуска

Тип: bool


# ::stappler::xenolith::core::Device::_glInstance

## BRIEF

Интерфейс графического API

## CONTENT

Доступ: protected

Интерфейс графического API

Тип: stappler::xenolith::core::Instance const*


# ::stappler::xenolith::core::Device::_shaderMutex

## BRIEF

Мутекс компиляции шейдеров

## CONTENT

Доступ: protected

Мутекс компиляции шейдеров

Тип: stappler::mem_std::Mutex


# ::stappler::xenolith::core::Device::_objectMutex

## BRIEF

Мутекс защиты объектов

## CONTENT

Доступ: protected

Мутекс защиты объектов

Тип: stappler::mem_std::Mutex


# ::stappler::xenolith::core::Device::_shaders

## BRIEF

Загруженные подпрограммы

## CONTENT

Доступ: protected

Загруженные подпрограммы

Тип: Map<stappler::mem_std::String, Rc<stappler::xenolith::core::Shader>>


# ::stappler::xenolith::core::Device::_objects

## BRIEF

Объекты устройства

## CONTENT

Доступ: protected

Объекты устройства

Тип: HashSet<stappler::xenolith::core::Object *>


# ::stappler::xenolith::core::Device::_samplersInfo

## BRIEF

Семплеры

## CONTENT

Доступ: protected

Семплеры

Тип: Vector<stappler::xenolith::core::SamplerInfo>


# ::stappler::xenolith::core::Device::_depthFormats

## BRIEF

Форматы глубины

## CONTENT

Доступ: protected

Форматы глубины

Тип: Vector<stappler::xenolith::core::ImageFormat>


# ::stappler::xenolith::core::Device::_colorFormats

## BRIEF

Форматы цвета

## CONTENT

Доступ: protected

Форматы цвета

Тип: Vector<stappler::xenolith::core::ImageFormat>


# ::stappler::xenolith::core::Device::_samplersCount

## BRIEF

Число семплеров

## CONTENT

Доступ: protected

Число семплеров

Тип: uint32_t


# ::stappler::xenolith::core::Device::_samplersCompiled

## BRIEF

Флаг компиляции семплеров

## CONTENT

Доступ: protected

Флаг компиляции семплеров

Тип: bool


# ::stappler::xenolith::core::Device::_textureLayoutImagesCount

## BRIEF

Число изображений в укладке

## CONTENT

Доступ: protected

Число изображений в укладке

Тип: uint32_t


# ::stappler::xenolith::core::Device::_textureLayoutBuffersCount

## BRIEF

Число буферов в укладке

## CONTENT

Доступ: protected

Число буферов в укладке

Тип: uint32_t


# ::stappler::xenolith::core::Device::_loopThreadId

## BRIEF

Ид потока графического цикла

## CONTENT

Доступ: protected

Ид потока графического цикла

Тип: std::thread::id


# ::stappler::xenolith::core::Device::_presentMask

## BRIEF

Маска флагов презентации

## CONTENT

Доступ: protected

Маска флагов презентации

Тип: uint32_t
