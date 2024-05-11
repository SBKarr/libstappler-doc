Title: XLCoreQueue.h


# XENOLITH_CORE_XLCOREQUEUE_H_

## BRIEF

Заголовок очереди исполнения

## CONTENT

Заголовок очереди исполнения

# ::stappler::xenolith::core::Queue

## BRIEF

Тип очереди исполнения

## CONTENT

Тип очереди исполнения. Представляет из себя набор проходов, вложений и связей между ними, собираемых для работые на графическом устройства.

Очередь исполнения реализует технику RenderGraph, но с асинхронным получением входящих данных.

Базовые классы:
* NamedRef


# ::stappler::xenolith::core::Queue::FrameRequest

## BRIEF

Тип запроса на кадр

## CONTENT

Доступ: public

Тип запроса на кадр

# ::stappler::xenolith::core::Queue::FrameQueue

## BRIEF

Кадровая очередь

## CONTENT

Доступ: public

Кадровая очередь


# ::stappler::xenolith::core::Queue::AttachmentHandle

## BRIEF

Тип интерфейса вложения

## CONTENT

Доступ: public

Тип интерфейса вложения


# ::stappler::xenolith::core::Queue::FrameHandle

## BRIEF

Тип интерфейса кадра

## CONTENT

Доступ: public

Тип интерфейса кадра


# ::stappler::xenolith::core::Queue::AttachmentData

## BRIEF

Тип данных вложения

## CONTENT

Доступ: public

Тип данных вложения

# ::stappler::xenolith::core::Queue::AttachmentBuilder

## BRIEF

Тип сборщика вложения

## CONTENT

Доступ: public

Тип сборщика вложения

# ::stappler::xenolith::core::Queue::Queue()

## BRIEF

Конструктор

## CONTENT

Доступ: public

Конструктор

# ::stappler::xenolith::core::Queue::~Queue()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор

# ::stappler::xenolith::core::Queue::init(stappler::xenolith::core::Queue::Builder&&)

## BRIEF

Создаёт очередь из сборщика

## CONTENT

Доступ: public

Создаёт очередь из сборщика

Параметры:
* stappler::xenolith::core::Queue::Builder&&

Возвращает:
* bool

# ::stappler::xenolith::core::Queue::isCompiled() const

## BRIEF

Проверяет, собрана ли очередь

## CONTENT

Доступ: public

Проверяет, собрана ли очередь

Возвращает:
* bool

# ::stappler::xenolith::core::Queue::setCompiled(stappler::xenolith::core::Device&,Function<void ()>&&)

## BRIEF

Устанавливает флаг сборки

## CONTENT

Доступ: public

Устанавливает флаг сборки

Параметры:
* stappler::xenolith::core::Device&
* Function<void ()>&& - функция для уничтожения данных компиляции


# ::stappler::xenolith::core::Queue::isCompatible(stappler::xenolith::core::ImageInfo const&) const

## BRIEF

Проверяет, совместимы ли параметры изображения с основным выходом очереди

## CONTENT

Доступ: public

Проверяет, совместимы ли параметры изображения с основным выходом очереди

Параметры:
* stappler::xenolith::core::ImageInfo const&

Возвращает:
* bool

# ::stappler::xenolith::core::Queue::getName() const

## BRIEF

Возвращает название

## CONTENT

Доступ: public

Возвращает название

Возвращает:
* stappler::StringView

# ::stappler::xenolith::core::Queue::getDefaultSyncPassState() const

## BRIEF

Возвращает состояние прохода, которое в очереди считается финальным

## CONTENT

Доступ: public

Возвращает состояние прохода, которое в очереди считается финальным. В зависимости от этого параметра очередь может дожидаться заверешния операций, или даже не дожидаться успеха отправки операций.

Возвращает:
* stappler::xenolith::core::FrameRenderPassState

# ::stappler::xenolith::core::Queue::getPrograms() const

## BRIEF

Возвращает список подпрограмм

## CONTENT

Доступ: public

Возвращает список подпрограмм

Возвращает:
* HashTable<stappler::xenolith::core::ProgramData *> const&

# ::stappler::xenolith::core::Queue::getPasses() const

## BRIEF

Возвращает список проходов

## CONTENT

Доступ: public

Возвращает список проходов

Возвращает:
* HashTable<stappler::xenolith::core::QueuePassData *> const&

# ::stappler::xenolith::core::Queue::getGraphicPipelines() const

## BRIEF

Возвращает графические пайплайны

## CONTENT

Доступ: public

Возвращает графические пайплайны

Возвращает:
* HashTable<stappler::xenolith::core::GraphicPipelineData *> const&

# ::stappler::xenolith::core::Queue::getComputePipelines() const

## BRIEF

Возвращает вычислительные пайплайны

## CONTENT

Доступ: public

Возвращает вычислительные пайплайны

Возвращает:
* HashTable<stappler::xenolith::core::ComputePipelineData *> const&

# ::stappler::xenolith::core::Queue::getAttachments() const

## BRIEF

Возвращает список вложений

## CONTENT

Доступ: public

Возвращает список вложений

Возвращает:
* HashTable<stappler::xenolith::core::Queue::AttachmentData *> const&

# ::stappler::xenolith::core::Queue::getLinkedResources() const

## BRIEF

Возвращает связанные ресурсы

## CONTENT

Доступ: public

Возвращает связанные ресурсы

Возвращает:
* HashTable<Rc<stappler::xenolith::core::Resource>> const&

# ::stappler::xenolith::core::Queue::getInternalResource() const

## BRIEF

Возвращает вложенный ресурс

## CONTENT

Доступ: public

Возвращает вложенный ресурс

Возвращает:
* Rc<stappler::xenolith::core::Resource>

# ::stappler::xenolith::core::Queue::getInputAttachments() const

## BRIEF

Возвращает входящие вложения

## CONTENT

Доступ: public

Возвращает входящие вложения

Возвращает:
* memory::vector<AttachmentData *> const&

# ::stappler::xenolith::core::Queue::getOutputAttachments() const

## BRIEF

Возвращает исходящие вложения

## CONTENT

Доступ: public

Возвращает исходящие вложения

Возвращает:
* memory::vector<AttachmentData *> const&

# ::stappler::xenolith::core::Queue::getInputAttachment<typename>() const

## BRIEF

Возвращает входящее вложение по имени типа

## CONTENT

Доступ: public

Возвращает входящее вложение по имени типа

Параметры шаблона:
* typename T

Возвращает:
* T const*

# ::stappler::xenolith::core::Queue::getOutputAttachment<typename>() const

## BRIEF

Возвращает исходящее вложение по имени типа

## CONTENT

Доступ: public

Возвращает исходящее вложение по имени типа

Параметры шаблона:
* typename T

Возвращает:
* T const*

# ::stappler::xenolith::core::Queue::getInputAttachment(std::type_index) const

## BRIEF

Возвращает входящее вложение по имени типа

## CONTENT

Доступ: public

Возвращает входящее вложение по имени типа

Параметры:
* std::type_index

Возвращает:
* stappler::xenolith::core::Attachment const*

# ::stappler::xenolith::core::Queue::getOutputAttachment(std::type_index) const

## BRIEF

Возвращает исходящее вложение по имени типа

## CONTENT

Доступ: public

Возвращает исходящее вложение по имени типа

Параметры:
* std::type_index

Возвращает:
* stappler::xenolith::core::Attachment const*

# ::stappler::xenolith::core::Queue::getPass(stappler::StringView) const

## BRIEF

Возвращает проход по имени

## CONTENT

Доступ: public

Возвращает проход по имени

Параметры:
* stappler::StringView

Возвращает:
* stappler::xenolith::core::QueuePassData const*

# ::stappler::xenolith::core::Queue::getProgram(stappler::StringView) const

## BRIEF

Возвращает подпрограмму по имени

## CONTENT

Доступ: public

Возвращает подпрограмму по имени

Параметры:
* stappler::StringView

Возвращает:
* stappler::xenolith::core::ProgramData const*

# ::stappler::xenolith::core::Queue::getGraphicPipeline(stappler::StringView) const

## BRIEF

Возвращает графический пайплайн по имени

## CONTENT

Доступ: public

Возвращает графический пайплайн по имени

Параметры:
* stappler::StringView

Возвращает:
* stappler::xenolith::core::GraphicPipelineData const*

# ::stappler::xenolith::core::Queue::getComputePipeline(stappler::StringView) const

## BRIEF

Возвращает вычислительный пайплайн по имени

## CONTENT

Доступ: public

Возвращает вычислительный пайплайн по имени

Параметры:
* stappler::StringView

Возвращает:
* stappler::xenolith::core::ComputePipelineData const*

# ::stappler::xenolith::core::Queue::getAttachment(stappler::StringView) const

## BRIEF

Возвращает вложение по имени

## CONTENT

Доступ: public

Возвращает вложение по имени

Параметры:
* stappler::StringView

Возвращает:
* AttachmentData*

# ::stappler::xenolith::core::Queue::getOutput() const

## BRIEF

Возвращает исходящие вложения

## CONTENT

Доступ: public

Возвращает исходящие вложения

Возвращает:
* Vector<stappler::xenolith::core::Queue::AttachmentData *>

# ::stappler::xenolith::core::Queue::getOutput(stappler::xenolith::core::AttachmentType) const

## BRIEF

Возвращает исходящие вложения определённого типа

## CONTENT

Доступ: public

Возвращает исходящие вложения определённого типа

Параметры:
* stappler::xenolith::core::AttachmentType

Возвращает:
* Vector<stappler::xenolith::core::Queue::AttachmentData *>

# ::stappler::xenolith::core::Queue::getPresentImageOutput() const

## BRIEF

Возвращает вложение, которое можно использовать для вывода на экран

## CONTENT

Доступ: public

Возвращает вложение, которое можно использовать для вывода на экран

Возвращает:
* AttachmentData*

# ::stappler::xenolith::core::Queue::getTransferImageOutput() const

## BRIEF

Возвращает вложение, которое можно использовать для вывода на экран через трансфер

## CONTENT

Доступ: public

Возвращает вложение, которое можно использовать для вывода на экран через трансфер

Возвращает:
* AttachmentData*

# ::stappler::xenolith::core::Queue::incrementOrder()

## BRIEF

Увеличивает порядковый номер кадра очереди

## CONTENT

Доступ: public

Увеличивает порядковый номер кадра очереди

Возвращает:
* uint64_t - номер для кадра

# ::stappler::xenolith::core::Queue::prepare(stappler::xenolith::core::Device&)

## BRIEF

Подготавливает очередь для использования на устройстве

## CONTENT

Доступ: public

Подготавливает очередь для использования на устройстве

Параметры:
* stappler::xenolith::core::Device&

Возвращает:
* bool

# ::stappler::xenolith::core::Queue::beginFrame(stappler::xenolith::core::Queue::FrameRequest&)

## BRIEF

Начинает кадр с очередью

## CONTENT

Доступ: public

Начинает кадр с очередью

Параметры:
* stappler::xenolith::core::Queue::FrameRequest&


# ::stappler::xenolith::core::Queue::endFrame(stappler::xenolith::core::Queue::FrameRequest&)

## BRIEF

Заканчивает кадр с очередью

## CONTENT

Доступ: public

Заканчивает кадр с очередью

Параметры:
* stappler::xenolith::core::Queue::FrameRequest&


# ::stappler::xenolith::core::Queue::_data

## BRIEF

Данные очереди

## CONTENT

Доступ: protected

Данные очереди

Тип: stappler::xenolith::core::QueueData*


# ::stappler::xenolith::core::AttachmentBuilder

## BRIEF

Сборщик данных вложения

## CONTENT

Сборщик данных вложения


# ::stappler::xenolith::core::AttachmentBuilder::setType(stappler::xenolith::core::AttachmentType)

## BRIEF

Устанавливает тип вложения

## CONTENT

Доступ: public

Устанавливает тип вложения

Параметры:
* stappler::xenolith::core::AttachmentType


# ::stappler::xenolith::core::AttachmentBuilder::defineAsInput(stappler::xenolith::core::AttachmentOps)

## BRIEF

Помечает вложение как входящее

## CONTENT

Доступ: public

Помечает вложение как входящее

Параметры:
* stappler::xenolith::core::AttachmentOps


# ::stappler::xenolith::core::AttachmentBuilder::defineAsOutput(stappler::xenolith::core::AttachmentOps,stappler::xenolith::core::FrameRenderPassState)

## BRIEF

Помечает вложение как исходящее

## CONTENT

Доступ: public

Помечает вложение как исходящее

Параметры:
* stappler::xenolith::core::AttachmentOps
* stappler::xenolith::core::FrameRenderPassState


# ::stappler::xenolith::core::AttachmentBuilder::defineAsOutput(stappler::xenolith::core::FrameRenderPassState)

## BRIEF

Помечает вложение как исходящее

## CONTENT

Доступ: public

Помечает вложение как исходящее

Параметры:
* stappler::xenolith::core::FrameRenderPassState


# ::stappler::xenolith::core::AttachmentBuilder::getAttachmentData() const

## BRIEF

Возвращает данные вложения

## CONTENT

Доступ: public

Возвращает данные вложения

Возвращает:
* stappler::xenolith::core::AttachmentData const*

# ::stappler::xenolith::core::AttachmentBuilder::AttachmentBuilder(stappler::xenolith::core::AttachmentData*)

## BRIEF

Создаёт сборщик

## CONTENT

Доступ: protected

Создаёт сборщик

Параметры:
* stappler::xenolith::core::AttachmentData*


# ::stappler::xenolith::core::AttachmentBuilder::_data

## BRIEF

Данные вложения

## CONTENT

Доступ: protected

Данные вложения

Тип: stappler::xenolith::core::AttachmentData*


# ::stappler::xenolith::core::AttachmentPassBuilder

## BRIEF

Сборщик прохода для вложения

## CONTENT

Сборщик прохода для вложения


# ::stappler::xenolith::core::AttachmentPassBuilder::setAttachmentOps(stappler::xenolith::core::AttachmentOps)

## BRIEF

Устанавливает операции над вложением в ходе прохода

## CONTENT

Доступ: public

Устанавливает операции над вложением в ходе прохода

Параметры:
* stappler::xenolith::core::AttachmentOps


# ::stappler::xenolith::core::AttachmentPassBuilder::setInitialLayout(stappler::xenolith::core::AttachmentLayout)

## BRIEF

Устанавливает начальную укладку изображения

## CONTENT

Доступ: public

Устанавливает начальную укладку изображения

Параметры:
* stappler::xenolith::core::AttachmentLayout


# ::stappler::xenolith::core::AttachmentPassBuilder::setFinalLayout(stappler::xenolith::core::AttachmentLayout)

## BRIEF

Устанавливает завершающую укладку изображения

## CONTENT

Доступ: public

Устанавливает завершающую укладку изображения

Параметры:
* stappler::xenolith::core::AttachmentLayout


# ::stappler::xenolith::core::AttachmentPassBuilder::setLoadOp(stappler::xenolith::core::AttachmentLoadOp)

## BRIEF

Устанавливает операцию для загрузки данных

## CONTENT

Доступ: public

Устанавливает операцию для загрузки данных

Параметры:
* stappler::xenolith::core::AttachmentLoadOp


# ::stappler::xenolith::core::AttachmentPassBuilder::setStoreOp(stappler::xenolith::core::AttachmentStoreOp)

## BRIEF

Устанавливает операцию для сохранения данных

## CONTENT

Доступ: public

Устанавливает операцию для сохранения данных

Параметры:
* stappler::xenolith::core::AttachmentStoreOp


# ::stappler::xenolith::core::AttachmentPassBuilder::setStencilLoadOp(stappler::xenolith::core::AttachmentLoadOp)

## BRIEF

Устанавливает операцию для загрузки трафарета

## CONTENT

Доступ: public

Устанавливает операцию для загрузки трафарета

Параметры:
* stappler::xenolith::core::AttachmentLoadOp


# ::stappler::xenolith::core::AttachmentPassBuilder::setStencilStoreOp(stappler::xenolith::core::AttachmentStoreOp)

## BRIEF

Устанавливает операцию для сохранения трафарета

## CONTENT

Доступ: public

Устанавливает операцию для сохранения трафарета

Параметры:
* stappler::xenolith::core::AttachmentStoreOp


# ::stappler::xenolith::core::AttachmentPassBuilder::setColorMode(stappler::xenolith::core::ColorMode const&)

## BRIEF

Устанавливает режим доступа к цвету

## CONTENT

Доступ: public

Устанавливает режим доступа к цвету

Параметры:
* stappler::xenolith::core::ColorMode const&


# ::stappler::xenolith::core::AttachmentPassBuilder::setDependency(stappler::xenolith::core::AttachmentDependencyInfo const&)

## BRIEF

Устанавливает параметры зависимости между проходами

## CONTENT

Доступ: public

Устанавливает параметры зависимости между проходами

Параметры:
* stappler::xenolith::core::AttachmentDependencyInfo const&


# ::stappler::xenolith::core::AttachmentPassBuilder::AttachmentPassBuilder(stappler::xenolith::core::AttachmentPassData*)

## BRIEF

Создаёт сборщик

## CONTENT

Доступ: protected

Создаёт сборщик

Параметры:
* stappler::xenolith::core::AttachmentPassData*


# ::stappler::xenolith::core::AttachmentPassBuilder::_data

## BRIEF

Данные прохода вложения

## CONTENT

Доступ: protected

Данные прохода вложения

Тип: stappler::xenolith::core::AttachmentPassData*


# ::stappler::xenolith::core::DescriptorSetBuilder

## BRIEF

Сборщик набора дескрипторов

## CONTENT

Сборщик набора дескрипторов

# ::stappler::xenolith::core::DescriptorSetBuilder::addDescriptor(stappler::xenolith::core::AttachmentPassData const*,stappler::xenolith::core::DescriptorType,stappler::xenolith::core::AttachmentLayout)

## BRIEF

Добавляет дескриптор в набор

## CONTENT

Доступ: public

Добавляет дескриптор в набор

Параметры:
* stappler::xenolith::core::AttachmentPassData const*
* stappler::xenolith::core::DescriptorType
* stappler::xenolith::core::AttachmentLayout

Возвращает:
* bool

# ::stappler::xenolith::core::DescriptorSetBuilder::addDescriptorArray(stappler::xenolith::core::AttachmentPassData const*,uint32_t,stappler::xenolith::core::DescriptorType,stappler::xenolith::core::AttachmentLayout)

## BRIEF

Добавляет массив дескрипторов в набор

## CONTENT

Доступ: public

Добавляет массив дескрипторов в набор

Параметры:
* stappler::xenolith::core::AttachmentPassData const*
* uint32_t
* stappler::xenolith::core::DescriptorType
* stappler::xenolith::core::AttachmentLayout

Возвращает:
* bool

# ::stappler::xenolith::core::DescriptorSetBuilder::DescriptorSetBuilder(stappler::xenolith::core::DescriptorSetData*)

## BRIEF

Создаёт сборщик

## CONTENT

Доступ: protected

Создаёт сборщик

Параметры:
* stappler::xenolith::core::DescriptorSetData*


# ::stappler::xenolith::core::DescriptorSetBuilder::_data

## BRIEF

Данные набора дескрипторов

## CONTENT

Доступ: protected

Данные набора дескрипторов

Тип: stappler::xenolith::core::DescriptorSetData*


# ::stappler::xenolith::core::PipelineLayoutBuilder

## BRIEF

Сборщик укладки дескрипторов

## CONTENT

Сборщик укладки дескрипторов


# ::stappler::xenolith::core::PipelineLayoutBuilder::addSet(Callback<void (stappler::xenolith::core::DescriptorSetBuilder &)> const&)

## BRIEF

Добавляет набор дескрипторов

## CONTENT

Доступ: public

Добавляет набор дескрипторов

Параметры:
* Callback<void (stappler::xenolith::core::DescriptorSetBuilder &)> const& - функция для заполнения набора

Возвращает:
* bool

# ::stappler::xenolith::core::PipelineLayoutBuilder::setUsesTextureSet(bool)

## BRIEF

Помеечает укладку для использования наборов текстур

## CONTENT

Доступ: public

Помеечает укладку для использования наборов текстур

Параметры:
* bool


# ::stappler::xenolith::core::PipelineLayoutBuilder::PipelineLayoutBuilder(stappler::xenolith::core::PipelineLayoutData*)

## BRIEF

Создаёт сборщик

## CONTENT

Доступ: protected

Создаёт сборщик

Параметры:
* stappler::xenolith::core::PipelineLayoutData*


# ::stappler::xenolith::core::PipelineLayoutBuilder::_data

## BRIEF

Данные укладки

## CONTENT

Доступ: protected

Данные укладки

Тип: stappler::xenolith::core::PipelineLayoutData*


# ::stappler::xenolith::core::SubpassBuilder

## BRIEF

Сборщик подпрохода

## CONTENT

Сборщик подпрохода


# ::stappler::xenolith::core::SubpassBuilder::addColor(stappler::xenolith::core::AttachmentPassData const*,stappler::xenolith::core::AttachmentDependencyInfo,stappler::xenolith::core::AttachmentLayout,stappler::xenolith::core::AttachmentOps,stappler::xenolith::core::BlendInfo)

## BRIEF

Добавляет вложение с данными цвета

## CONTENT

Доступ: public

Добавляет вложение с данными цвета

Параметры:
* stappler::xenolith::core::AttachmentPassData const*
* stappler::xenolith::core::AttachmentDependencyInfo
* stappler::xenolith::core::AttachmentLayout
* stappler::xenolith::core::AttachmentOps
* stappler::xenolith::core::BlendInfo

Возвращает:
* bool

# ::stappler::xenolith::core::SubpassBuilder::addColor(stappler::xenolith::core::AttachmentPassData const*,stappler::xenolith::core::AttachmentDependencyInfo,stappler::xenolith::core::BlendInfo)

## BRIEF

Добавляет вложение с данными цвета

## CONTENT

Доступ: public

Добавляет вложение с данными цвета

Параметры:
* stappler::xenolith::core::AttachmentPassData const*
* stappler::xenolith::core::AttachmentDependencyInfo
* stappler::xenolith::core::BlendInfo

Возвращает:
* bool

# ::stappler::xenolith::core::SubpassBuilder::addInput(stappler::xenolith::core::AttachmentPassData const*,stappler::xenolith::core::AttachmentDependencyInfo,stappler::xenolith::core::AttachmentLayout,stappler::xenolith::core::AttachmentOps)

## BRIEF

Добавляет вложение с входящими данными

## CONTENT

Доступ: public

Добавляет вложение с входящими данными

Параметры:
* stappler::xenolith::core::AttachmentPassData const*
* stappler::xenolith::core::AttachmentDependencyInfo
* stappler::xenolith::core::AttachmentLayout
* stappler::xenolith::core::AttachmentOps

Возвращает:
* bool

# ::stappler::xenolith::core::SubpassBuilder::addResolve(stappler::xenolith::core::AttachmentPassData const*,stappler::xenolith::core::AttachmentPassData const*,stappler::xenolith::core::AttachmentDependencyInfo,stappler::xenolith::core::AttachmentDependencyInfo)

## BRIEF

Возвращает вложение для сведения мультисемплинга

## CONTENT

Доступ: public

Возвращает вложение для сведения мультисемплинга

Параметры:
* stappler::xenolith::core::AttachmentPassData const*
* stappler::xenolith::core::AttachmentPassData const*
* stappler::xenolith::core::AttachmentDependencyInfo
* stappler::xenolith::core::AttachmentDependencyInfo

Возвращает:
* bool

# ::stappler::xenolith::core::SubpassBuilder::setDepthStencil(stappler::xenolith::core::AttachmentPassData const*,stappler::xenolith::core::AttachmentDependencyInfo,stappler::xenolith::core::AttachmentLayout,stappler::xenolith::core::AttachmentOps)

## BRIEF

Добавляет вложение глубины и трафарета

## CONTENT

Доступ: public

Добавляет вложение глубины и трафарета

Параметры:
* stappler::xenolith::core::AttachmentPassData const*
* stappler::xenolith::core::AttachmentDependencyInfo
* stappler::xenolith::core::AttachmentLayout
* stappler::xenolith::core::AttachmentOps

Возвращает:
* bool

# ::stappler::xenolith::core::SubpassBuilder::addGraphicPipeline<typename>(stappler::StringView,stappler::xenolith::core::PipelineLayoutData const*,Args &&...)

## BRIEF

Добавляет графический пайплайн

## CONTENT

Доступ: public

Добавляет графический пайплайн

Параметры шаблона:
* typename Args

Параметры:
* stappler::StringView
* stappler::xenolith::core::PipelineLayoutData const*
* Args &&...

Возвращает:
* stappler::xenolith::core::GraphicPipelineData const*

# ::stappler::xenolith::core::SubpassBuilder::addComputePipeline(stappler::StringView,stappler::xenolith::core::PipelineLayoutData const*,stappler::xenolith::core::SpecializationInfo&&)

## BRIEF

Добавляет вычислительный пайплайн

## CONTENT

Доступ: public

Добавляет вычислительный пайплайн

Параметры:
* stappler::StringView
* stappler::xenolith::core::PipelineLayoutData const*
* stappler::xenolith::core::SpecializationInfo&&

Возвращает:
* stappler::xenolith::core::ComputePipelineData const*

# ::stappler::xenolith::core::SubpassBuilder::setPrepareCallback(memory::function<void (const SubpassData &, FrameQueue &)>&&)

## BRIEF

Устанавивает функцию подготовки подпрохода

## CONTENT

Доступ: public

Устанавивает функцию подготовки подпрохода

Параметры:
* memory::function<void (const SubpassData &, FrameQueue &)>&&


# ::stappler::xenolith::core::SubpassBuilder::setCommandsCallback(memory::function<void (const SubpassData &, FrameQueue &, CommandBuffer &)>&&)

## BRIEF

Устанавивает функцию записи команд

## CONTENT

Доступ: public

Устанавивает функцию записи команд

Параметры:
* memory::function<void (const SubpassData &, FrameQueue &, CommandBuffer &)>&&


# ::stappler::xenolith::core::SubpassBuilder::emplacePipeline(stappler::StringView,stappler::xenolith::core::PipelineLayoutData const*)

## BRIEF

Добавляет пайплайн

## CONTENT

Доступ: protected

Добавляет пайплайн

Параметры:
* stappler::StringView
* stappler::xenolith::core::PipelineLayoutData const*

Возвращает:
* stappler::xenolith::core::GraphicPipelineData*

# ::stappler::xenolith::core::SubpassBuilder::finalizePipeline(stappler::xenolith::core::GraphicPipelineData*)

## BRIEF

Утверждает данные пайплайна

## CONTENT

Доступ: protected

Утверждает данные пайплайна

Параметры:
* stappler::xenolith::core::GraphicPipelineData*


# ::stappler::xenolith::core::SubpassBuilder::erasePipeline(stappler::xenolith::core::GraphicPipelineData*)

## BRIEF

Удаляет пайплайн

## CONTENT

Доступ: protected

Удаляет пайплайн

Параметры:
* stappler::xenolith::core::GraphicPipelineData*


# ::stappler::xenolith::core::SubpassBuilder::setPipelineOption(stappler::xenolith::core::GraphicPipelineData&,stappler::xenolith::core::DynamicState)

## BRIEF

Устанавливает параметр паёплайна

## CONTENT

Доступ: protected

Устанавливает параметр паёплайна

Параметры:
* stappler::xenolith::core::GraphicPipelineData&
* stappler::xenolith::core::DynamicState

Возвращает:
* bool

# ::stappler::xenolith::core::SubpassBuilder::setPipelineOption(stappler::xenolith::core::GraphicPipelineData&,Vector<stappler::xenolith::core::SpecializationInfo> const&)

## BRIEF

Устанавливает параметр паёплайна

## CONTENT

Доступ: protected

Устанавливает параметр паёплайна

Параметры:
* stappler::xenolith::core::GraphicPipelineData&
* Vector<stappler::xenolith::core::SpecializationInfo> const&

Возвращает:
* bool

# ::stappler::xenolith::core::SubpassBuilder::setPipelineOption(stappler::xenolith::core::GraphicPipelineData&,stappler::xenolith::core::PipelineMaterialInfo const&)

## BRIEF

Устанавливает параметр паёплайна

## CONTENT

Доступ: protected

Устанавливает параметр паёплайна

Параметры:
* stappler::xenolith::core::GraphicPipelineData&
* stappler::xenolith::core::PipelineMaterialInfo const&

Возвращает:
* bool

# ::stappler::xenolith::core::SubpassBuilder::setPipelineOptions<typename>(stappler::xenolith::core::GraphicPipelineData&,T&&)

## BRIEF

Устанавливает параметр паёплайна

## CONTENT

Доступ: protected

Устанавливает параметр паёплайна

Параметры шаблона:
* typename T

Параметры:
* stappler::xenolith::core::GraphicPipelineData&
* T&&

Возвращает:
* bool

# ::stappler::xenolith::core::SubpassBuilder::setPipelineOptions<typename,typename>(stappler::xenolith::core::GraphicPipelineData&,T&&,Args &&...)

## BRIEF

Устанавливает параметр паёплайна

## CONTENT

Доступ: protected

Устанавливает параметр паёплайна

Параметры шаблона:
* typename T
* typename Args

Параметры:
* stappler::xenolith::core::GraphicPipelineData&
* T&&
* Args &&...

Возвращает:
* bool

# ::stappler::xenolith::core::SubpassBuilder::SubpassBuilder(stappler::xenolith::core::SubpassData*)

## BRIEF

Создаёт сборщик

## CONTENT

Доступ: protected

Создаёт сборщик

Параметры:
* stappler::xenolith::core::SubpassData*


# ::stappler::xenolith::core::SubpassBuilder::_data

## BRIEF

Данные подпрохода

## CONTENT

Доступ: protected

Данные подпрохода

Тип: stappler::xenolith::core::SubpassData*


# ::stappler::xenolith::core::QueuePassBuilder

## BRIEF

Сборщик прохода рендеринга

## CONTENT

Сборщик прохода рендеринга

# ::stappler::xenolith::core::QueuePassBuilder::addDescriptorLayout(Callback<void (stappler::xenolith::core::PipelineLayoutBuilder &)> const&)

## BRIEF

Добавляет укладку дескрипторов

## CONTENT

Доступ: public

Добавляет укладку дескрипторов

Параметры:
* Callback<void (stappler::xenolith::core::PipelineLayoutBuilder &)> const&

Возвращает:
* stappler::xenolith::core::PipelineLayoutData const*

# ::stappler::xenolith::core::QueuePassBuilder::addSubpass(Callback<void (stappler::xenolith::core::SubpassBuilder &)> const&)

## BRIEF

Добавляет подпроход

## CONTENT

Доступ: public

Добавляет подпроход

Параметры:
* Callback<void (stappler::xenolith::core::SubpassBuilder &)> const&

Возвращает:
* stappler::xenolith::core::SubpassData const*

# ::stappler::xenolith::core::QueuePassBuilder::addSubpassDependency(stappler::xenolith::core::SubpassData const*,stappler::xenolith::core::PipelineStage,stappler::xenolith::core::AccessType,stappler::xenolith::core::SubpassData const*,stappler::xenolith::core::PipelineStage,stappler::xenolith::core::AccessType,bool)

## BRIEF

Добавляет зависимость между подпроходами

## CONTENT

Доступ: public

Добавляет зависимость между подпроходами

Параметры:
* stappler::xenolith::core::SubpassData const*
* stappler::xenolith::core::PipelineStage
* stappler::xenolith::core::AccessType
* stappler::xenolith::core::SubpassData const*
* stappler::xenolith::core::PipelineStage
* stappler::xenolith::core::AccessType
* bool

Возвращает:
* bool

# ::stappler::xenolith::core::QueuePassBuilder::addAttachment(stappler::xenolith::core::AttachmentData const*)

## BRIEF

Добавляет вложение

## CONTENT

Доступ: public

Добавляет вложение

Параметры:
* stappler::xenolith::core::AttachmentData const*

Возвращает:
* stappler::xenolith::core::AttachmentPassData const*

# ::stappler::xenolith::core::QueuePassBuilder::addAttachment(stappler::xenolith::core::AttachmentData const*,stappler::xenolith::core::AttachmentDependencyInfo const&)

## BRIEF

Добавляет вложение

## CONTENT

Доступ: public

Добавляет вложение

Параметры:
* stappler::xenolith::core::AttachmentData const*
* stappler::xenolith::core::AttachmentDependencyInfo const&

Возвращает:
* stappler::xenolith::core::AttachmentPassData const*

# ::stappler::xenolith::core::QueuePassBuilder::addAttachment(stappler::xenolith::core::AttachmentData const*,Callback<void (stappler::xenolith::core::AttachmentPassBuilder &)> const&)

## BRIEF

Добавляет вложение

## CONTENT

Доступ: public

Добавляет вложение

Параметры:
* stappler::xenolith::core::AttachmentData const*
* Callback<void (stappler::xenolith::core::AttachmentPassBuilder &)> const&

Возвращает:
* stappler::xenolith::core::AttachmentPassData const*

# ::stappler::xenolith::core::QueuePassBuilder::getName() const

## BRIEF

Возвращает имя прохода

## CONTENT

Доступ: public

Возвращает имя прохода

Возвращает:
* stappler::StringView

# ::stappler::xenolith::core::QueuePassBuilder::addSubmittedCallback(memory::function<void (const QueuePassData &, FrameQueue &, bool)>&&)

## BRIEF

Добавляет функцию отправки прохода на исполнение

## CONTENT

Доступ: public

Добавляет функцию отправки прохода на исполнение

Параметры:
* memory::function<void (const QueuePassData &, FrameQueue &, bool)>&&


# ::stappler::xenolith::core::QueuePassBuilder::addCompleteCallback(memory::function<void (const QueuePassData &, FrameQueue &, bool)>&&)

## BRIEF

Добавляет функцию завершения прохода

## CONTENT

Доступ: public

Добавляет функцию завершения прохода

Параметры:
* memory::function<void (const QueuePassData &, FrameQueue &, bool)>&&


# ::stappler::xenolith::core::QueuePassBuilder::getData() const

## BRIEF

Данные прохода

## CONTENT

Доступ: protected

Данные прохода

Возвращает:
* stappler::xenolith::core::QueuePassData*

# ::stappler::xenolith::core::QueuePassBuilder::QueuePassBuilder(stappler::xenolith::core::QueuePassData*)

## BRIEF

Создаёт сборщик

## CONTENT

Доступ: protected

Создаёт сборщик

Параметры:
* stappler::xenolith::core::QueuePassData*


# ::stappler::xenolith::core::QueuePassBuilder::_data

## BRIEF

Данные прохода

## CONTENT

Доступ: protected

Данные прохода

Тип: stappler::xenolith::core::QueuePassData*


# ::stappler::xenolith::core::Builder

## BRIEF

Сборщик очереди

## CONTENT

Сборщик очереди


# ::stappler::xenolith::core::Builder::Builder(stappler::StringView)

## BRIEF

Создаёт сборщик очереди

## CONTENT

Доступ: public

Создаёт сборщик очереди

Параметры:
* stappler::StringView


# ::stappler::xenolith::core::Builder::~Builder()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор

# ::stappler::xenolith::core::Builder::setDefaultSyncPassState(stappler::xenolith::core::FrameRenderPassState)

## BRIEF

Устанавливает состояние для конечной синхронизации по умолчанию

## CONTENT

Доступ: public

Устанавливает состояние для конечной синхронизации по умолчанию

Параметры:
* stappler::xenolith::core::FrameRenderPassState


# ::stappler::xenolith::core::Builder::addAttachemnt(stappler::StringView,Callback<Rc<stappler::xenolith::core::Attachment> (stappler::xenolith::core::Queue::AttachmentBuilder &)> const&)

## BRIEF

Добавляет вложение

## CONTENT

Доступ: public

Добавляет вложение

Параметры:
* stappler::StringView
* Callback<Rc<stappler::xenolith::core::Attachment> (stappler::xenolith::core::Queue::AttachmentBuilder &)> const&

Возвращает:
* stappler::xenolith::core::Queue::AttachmentData const*

# ::stappler::xenolith::core::Builder::addPass(stappler::StringView,stappler::xenolith::core::PassType,stappler::xenolith::core::RenderOrdering,Callback<Rc<stappler::xenolith::core::QueuePass> (stappler::xenolith::core::QueuePassBuilder &)> const&)

## BRIEF

Добавляет проход

## CONTENT

Доступ: public

Добавляет проход

Параметры:
* stappler::StringView
* stappler::xenolith::core::PassType
* stappler::xenolith::core::RenderOrdering
* Callback<Rc<stappler::xenolith::core::QueuePass> (stappler::xenolith::core::QueuePassBuilder &)> const&

Возвращает:
* stappler::xenolith::core::QueuePassData const*

# ::stappler::xenolith::core::Builder::addProgram(stappler::StringView,SpanView<uint32_t>,stappler::xenolith::core::ProgramInfo const*)

## BRIEF

Добавляет подпрограмму

## CONTENT

Доступ: public

Добавляет подпрограмму

Параметры:
* stappler::StringView
* SpanView<uint32_t>
* stappler::xenolith::core::ProgramInfo const*

Возвращает:
* stappler::xenolith::core::ProgramData const*

# ::stappler::xenolith::core::Builder::addProgramByRef(stappler::StringView,SpanView<uint32_t>,stappler::xenolith::core::ProgramInfo const*)

## BRIEF

Добавляет подпрограмму, не копирует данные

## CONTENT

Доступ: public

Добавляет подпрограмму, не копирует данные

Параметры:
* stappler::StringView
* SpanView<uint32_t>
* stappler::xenolith::core::ProgramInfo const*

Возвращает:
* stappler::xenolith::core::ProgramData const*

# ::stappler::xenolith::core::Builder::addProgram(stappler::StringView,memory::function<void (const ProgramData::DataCallback &)> const&,stappler::xenolith::core::ProgramInfo const*)

## BRIEF

Добавляет подпрограмму

## CONTENT

Доступ: public

Добавляет подпрограмму

Параметры:
* stappler::StringView
* memory::function<void (const ProgramData::DataCallback &)> const&
* stappler::xenolith::core::ProgramInfo const*

Возвращает:
* stappler::xenolith::core::ProgramData const*

# ::stappler::xenolith::core::Builder::addLinkedResource(Rc<stappler::xenolith::core::Resource> const&)

## BRIEF

Добавляет связанный ресурс

## CONTENT

Доступ: public

Добавляет связанный ресурс

Параметры:
* Rc<stappler::xenolith::core::Resource> const&


# ::stappler::xenolith::core::Builder::setBeginCallback(Function<void (stappler::xenolith::core::Queue::FrameRequest &)>&&)

## BRIEF

Устанавливает функцию начала кадра

## CONTENT

Доступ: public

Устанавливает функцию начала кадра

Параметры:
* Function<void (stappler::xenolith::core::Queue::FrameRequest &)>&&


# ::stappler::xenolith::core::Builder::setEndCallback(Function<void (stappler::xenolith::core::Queue::FrameRequest &)>&&)

## BRIEF

Устанавливает функцию завершения кадра

## CONTENT

Доступ: public

Устанавливает функцию завершения кадра

Параметры:
* Function<void (stappler::xenolith::core::Queue::FrameRequest &)>&&


# ::stappler::xenolith::core::Builder::addBufferByRef(stappler::StringView,stappler::xenolith::core::BufferInfo&&,stappler::BytesView,Rc<stappler::xenolith::core::DataAtlas>&&,stappler::xenolith::core::AccessType)

## BRIEF

Добавляет буфер во встроенный ресурс

## CONTENT

Доступ: public

Добавляет буфер во встроенный ресурс

Параметры:
* stappler::StringView
* stappler::xenolith::core::BufferInfo&&
* stappler::BytesView
* Rc<stappler::xenolith::core::DataAtlas>&&
* stappler::xenolith::core::AccessType

Возвращает:
* stappler::xenolith::core::BufferData const*

# ::stappler::xenolith::core::Builder::addBuffer(stappler::StringView,stappler::xenolith::core::BufferInfo&&,stappler::FilePath,Rc<stappler::xenolith::core::DataAtlas>&&,stappler::xenolith::core::AccessType)

## BRIEF

Добавляет буфер во встроенный ресурс

## CONTENT

Доступ: public

Добавляет буфер во встроенный ресурс

Параметры:
* stappler::StringView
* stappler::xenolith::core::BufferInfo&&
* stappler::FilePath
* Rc<stappler::xenolith::core::DataAtlas>&&
* stappler::xenolith::core::AccessType

Возвращает:
* stappler::xenolith::core::BufferData const*

# ::stappler::xenolith::core::Builder::addBuffer(stappler::StringView,stappler::xenolith::core::BufferInfo&&,stappler::BytesView,Rc<stappler::xenolith::core::DataAtlas>&&,stappler::xenolith::core::AccessType)

## BRIEF

Добавляет буфер во встроенный ресурс

## CONTENT

Доступ: public

Добавляет буфер во встроенный ресурс

Параметры:
* stappler::StringView
* stappler::xenolith::core::BufferInfo&&
* stappler::BytesView
* Rc<stappler::xenolith::core::DataAtlas>&&
* stappler::xenolith::core::AccessType

Возвращает:
* stappler::xenolith::core::BufferData const*

# ::stappler::xenolith::core::Builder::addBuffer(stappler::StringView,stappler::xenolith::core::BufferInfo&&,memory::function<void (uint8_t *, uint64_t, const BufferData::DataCallback &)> const&,Rc<stappler::xenolith::core::DataAtlas>&&,stappler::xenolith::core::AccessType)

## BRIEF

Добавляет буфер во встроенный ресурс

## CONTENT

Доступ: public

Добавляет буфер во встроенный ресурс

Параметры:
* stappler::StringView
* stappler::xenolith::core::BufferInfo&&
* memory::function<void (uint8_t *, uint64_t, const BufferData::DataCallback &)> const&
* Rc<stappler::xenolith::core::DataAtlas>&&
* stappler::xenolith::core::AccessType

Возвращает:
* stappler::xenolith::core::BufferData const*

# ::stappler::xenolith::core::Builder::addImageByRef(stappler::StringView,stappler::xenolith::core::ImageInfo&&,stappler::BytesView,stappler::xenolith::core::AttachmentLayout,stappler::xenolith::core::AccessType)

## BRIEF

Добавляет изображения во встроенный ресурс

## CONTENT

Доступ: public

Добавляет изображения во встроенный ресурс

Параметры:
* stappler::StringView
* stappler::xenolith::core::ImageInfo&&
* stappler::BytesView
* stappler::xenolith::core::AttachmentLayout
* stappler::xenolith::core::AccessType

Возвращает:
* stappler::xenolith::core::ImageData const*

# ::stappler::xenolith::core::Builder::addImage(stappler::StringView,stappler::xenolith::core::ImageInfo&&,stappler::FilePath,stappler::xenolith::core::AttachmentLayout,stappler::xenolith::core::AccessType)

## BRIEF

Добавляет изображения во встроенный ресурс

## CONTENT

Доступ: public

Добавляет изображения во встроенный ресурс

Параметры:
* stappler::StringView
* stappler::xenolith::core::ImageInfo&&
* stappler::FilePath
* stappler::xenolith::core::AttachmentLayout
* stappler::xenolith::core::AccessType

Возвращает:
* stappler::xenolith::core::ImageData const*

# ::stappler::xenolith::core::Builder::addImage(stappler::StringView,stappler::xenolith::core::ImageInfo&&,stappler::BytesView,stappler::xenolith::core::AttachmentLayout,stappler::xenolith::core::AccessType)

## BRIEF

Добавляет изображения во встроенный ресурс

## CONTENT

Доступ: public

Добавляет изображения во встроенный ресурс

Параметры:
* stappler::StringView
* stappler::xenolith::core::ImageInfo&&
* stappler::BytesView
* stappler::xenolith::core::AttachmentLayout
* stappler::xenolith::core::AccessType

Возвращает:
* stappler::xenolith::core::ImageData const*

# ::stappler::xenolith::core::Builder::addImage(stappler::StringView,stappler::xenolith::core::ImageInfo&&,memory::function<void (uint8_t *, uint64_t, const ImageData::DataCallback &)> const&,stappler::xenolith::core::AttachmentLayout,stappler::xenolith::core::AccessType)

## BRIEF

Добавляет изображения во встроенный ресурс

## CONTENT

Доступ: public

Добавляет изображения во встроенный ресурс

Параметры:
* stappler::StringView
* stappler::xenolith::core::ImageInfo&&
* memory::function<void (uint8_t *, uint64_t, const ImageData::DataCallback &)> const&
* stappler::xenolith::core::AttachmentLayout
* stappler::xenolith::core::AccessType

Возвращает:
* stappler::xenolith::core::ImageData const*

# ::stappler::xenolith::core::Builder::getPool() const

## BRIEF

Возвращает пул памяти для сборки

## CONTENT

Доступ: protected

Возвращает пул памяти для сборки

Возвращает:
* memory::pool_t*

# ::stappler::xenolith::core::Builder::getPassData(Rc<stappler::xenolith::core::QueuePass> const&) const

## BRIEF

Возвращает данные прохода

## CONTENT

Доступ: protected

Возвращает данные прохода

Параметры:
* Rc<stappler::xenolith::core::QueuePass> const&

Возвращает:
* stappler::xenolith::core::QueuePassData const*

# ::stappler::xenolith::core::Builder::getSubpassData(Rc<stappler::xenolith::core::QueuePass> const&,uint32_t) const

## BRIEF

Возвращает данные подпрохода

## CONTENT

Доступ: protected

Возвращает данные подпрохода

Параметры:
* Rc<stappler::xenolith::core::QueuePass> const&
* uint32_t

Возвращает:
* stappler::xenolith::core::SubpassData const*

# ::stappler::xenolith::core::Builder::_data

## BRIEF

Данные очереди

## CONTENT

Доступ: protected

Данные очереди

Тип: stappler::xenolith::core::QueueData*


# ::stappler::xenolith::core::Builder::_internalResource

## BRIEF

Встроенный ресурс

## CONTENT

Доступ: protected

Встроенный ресурс

Тип: Resource::Builder


# ::stappler::xenolith::core::Queue::getInputAttachment<typename>() const

## BRIEF

Возвращает входящее вложение по типу

## CONTENT

Возвращает входящее вложение по типу

Параметры шаблона:
* typename T

Возвращает:
* T const*

# ::stappler::xenolith::core::Queue::getOutputAttachment<typename>() const

## BRIEF

Возвращает исходящее вложение по типу

## CONTENT

Возвращает исходящее вложение по типу

Параметры шаблона:
* typename T

Возвращает:
* T const*