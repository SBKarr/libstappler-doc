Title: XLCoreQueueData.h


# XENOLITH_CORE_XLCOREQUEUEDATA_H_

## BRIEF

Заголовок данных типов очереди

## CONTENT

Заголовок данных типов очереди


# ::stappler::xenolith::core::ProgramDescriptorBinding

## BRIEF

Тип дескриптора в укладке

## CONTENT

Тип дескриптора в укладке


# ::stappler::xenolith::core::ProgramDescriptorBinding::set

## BRIEF

Индекс набора

## CONTENT

Индекс набора

Тип: uint32_t


# ::stappler::xenolith::core::ProgramDescriptorBinding::descriptor

## BRIEF

Индекс дескриптора

## CONTENT

Индекс дескриптора

Тип: uint32_t


# ::stappler::xenolith::core::ProgramDescriptorBinding::type

## BRIEF

Тип дескриптора

## CONTENT

Тип дескриптора

Тип: stappler::xenolith::core::DescriptorType


# ::stappler::xenolith::core::ProgramDescriptorBinding::count

## BRIEF

Число дескрипторов в массиве

## CONTENT

Число дескрипторов в массиве

Тип: uint32_t


# ::stappler::xenolith::core::ProgramPushConstantBlock

## BRIEF

Параметры блока командных констант

## CONTENT

Параметры блока командных констант


# ::stappler::xenolith::core::ProgramPushConstantBlock::offset

## BRIEF

Смещение блока

## CONTENT

Смещение блока

Тип: uint32_t


# ::stappler::xenolith::core::ProgramPushConstantBlock::size

## BRIEF

Размер блока

## CONTENT

Размер блока

Тип: uint32_t


# ::stappler::xenolith::core::ProgramEntryPointBlock

## BRIEF

Параметры точки входа в подпрограмме

## CONTENT

Параметры точки входа в подпрограмме


# ::stappler::xenolith::core::ProgramEntryPointBlock::id

## BRIEF

Идентификатор

## CONTENT

Идентификатор

Тип: uint32_t


# ::stappler::xenolith::core::ProgramEntryPointBlock::name

## BRIEF

Имя символа

## CONTENT

Имя символа

Тип: memory::string


# ::stappler::xenolith::core::ProgramEntryPointBlock::localX

## BRIEF

Число элементов локальной группы

## CONTENT

Число элементов локальной группы

Тип: uint32_t


# ::stappler::xenolith::core::ProgramEntryPointBlock::localY

## BRIEF

Число элементов локальной группы

## CONTENT

Число элементов локальной группы

Тип: uint32_t


# ::stappler::xenolith::core::ProgramEntryPointBlock::localZ

## BRIEF

Число элементов локальной группы

## CONTENT

Число элементов локальной группы

Тип: uint32_t


# ::stappler::xenolith::core::ProgramInfo

## BRIEF

Параметры подпрограммы

## CONTENT

Параметры подпрограммы

Базовые классы:
* NamedMem


# ::stappler::xenolith::core::ProgramInfo::stage

## BRIEF

Стадия исполнения

## CONTENT

Стадия исполнения

Тип: stappler::xenolith::core::ProgramStage


# ::stappler::xenolith::core::ProgramInfo::bindings

## BRIEF

Используемые дескрипторы

## CONTENT

Используемые дескрипторы

Тип: memory::vector<ProgramDescriptorBinding>


# ::stappler::xenolith::core::ProgramInfo::constants

## BRIEF

Используемые командные константы

## CONTENT

Используемые командные константы

Тип: memory::vector<ProgramPushConstantBlock>


# ::stappler::xenolith::core::ProgramInfo::entryPoints

## BRIEF

Точки входа

## CONTENT

Точки входа

Тип: memory::vector<ProgramEntryPointBlock>


# ::stappler::xenolith::core::ProgramData

## BRIEF

Данные подпрограммы

## CONTENT

Данные подпрограммы

Базовые классы:
* ProgramInfo


# ::stappler::xenolith::core::ProgramData::DataCallback

## BRIEF

Функция доступа к данным

## CONTENT

Функция доступа к данным


# ::stappler::xenolith::core::ProgramData::data

## BRIEF

Данные подпрограммы

## CONTENT

Данные подпрограммы

Тип: SpanView<uint32_t>


# ::stappler::xenolith::core::ProgramData::callback

## BRIEF

Функция получения данных

## CONTENT

Функция получения данных

Тип: memory::function<void (const DataCallback &)>


# ::stappler::xenolith::core::ProgramData::program

## BRIEF

Собранная подпрограмма на стороне устройства

## CONTENT

Собранная подпрограмма на стороне устройства

Тип: Rc<stappler::xenolith::core::Shader>


# ::stappler::xenolith::core::ProgramData::inspect(SpanView<uint32_t>)

## BRIEF

Получает параметры подпрограммы из кода

## CONTENT

Получает параметры подпрограммы из кода

Параметры:
* SpanView<uint32_t>


# ::stappler::xenolith::core::SpecializationInfo

## BRIEF

Параметры специализации для подпрограммы

## CONTENT

Параметры специализации для подпрограммы


# ::stappler::xenolith::core::SpecializationInfo::data

## BRIEF

Подпрограмма

## CONTENT

Подпрограмма

Тип: stappler::xenolith::core::ProgramData const*


# ::stappler::xenolith::core::SpecializationInfo::constants

## BRIEF

Набор констант специализации

## CONTENT

Набор констант специализации

Тип: memory::vector<SpecializationConstant>


# ::stappler::xenolith::core::SpecializationInfo::SpecializationInfo()

## BRIEF

Конструктор

## CONTENT

Конструктор


# ::stappler::xenolith::core::SpecializationInfo::SpecializationInfo(stappler::xenolith::core::ProgramData const*)

## BRIEF

Конструктор

## CONTENT

Конструктор

Параметры:
* stappler::xenolith::core::ProgramData const*


# ::stappler::xenolith::core::SpecializationInfo::SpecializationInfo(stappler::xenolith::core::ProgramData const*,SpanView<stappler::xenolith::core::SpecializationConstant>)

## BRIEF

Конструктор

## CONTENT

Конструктор

Параметры:
* stappler::xenolith::core::ProgramData const*
* SpanView<stappler::xenolith::core::SpecializationConstant>


# ::stappler::xenolith::core::GraphicPipelineInfo

## BRIEF

Параметры графического пайплайна

## CONTENT

Параметры графического пайплайна

Базовые классы:
* NamedMem


# ::stappler::xenolith::core::GraphicPipelineInfo::shaders

## BRIEF

Специализации используемых подпрограмм

## CONTENT

Специализации используемых подпрограмм

Тип: memory::vector<SpecializationInfo>


# ::stappler::xenolith::core::GraphicPipelineInfo::dynamicState

## BRIEF

Флаги динамических параметров

## CONTENT

Флаги динамических параметров

Тип: stappler::xenolith::core::DynamicState


# ::stappler::xenolith::core::GraphicPipelineInfo::material

## BRIEF

Параметры материала

## CONTENT

Параметры материала

Тип: stappler::xenolith::core::PipelineMaterialInfo


# ::stappler::xenolith::core::GraphicPipelineInfo::isSolid() const

## BRIEF

Проверяет, рисует ли пайплайн только непрозрачные структуоры

## CONTENT

Проверяет, рисует ли пайплайн только непрозрачные структуоры

Возвращает:
* bool

# ::stappler::xenolith::core::GraphicPipelineData

## BRIEF

Данные графического пайплайна

## CONTENT

Данные графического пайплайна

Базовые классы:
* GraphicPipelineInfo


# ::stappler::xenolith::core::GraphicPipelineData::subpass

## BRIEF

Подпроход

## CONTENT

Подпроход

Тип: stappler::xenolith::core::SubpassData const*


# ::stappler::xenolith::core::GraphicPipelineData::layout

## BRIEF

Используемая укладка дескрипторов

## CONTENT

Используемая укладка дескрипторов

Тип: stappler::xenolith::core::PipelineLayoutData const*


# ::stappler::xenolith::core::GraphicPipelineData::pipeline

## BRIEF

Собранный пайплайн

## CONTENT

Собранный пайплайн

Тип: Rc<stappler::xenolith::core::GraphicPipeline>


# ::stappler::xenolith::core::ComputePipelineInfo

## BRIEF

Параметры вычислительного пайплайна

## CONTENT

Параметры вычислительного пайплайна

Базовые классы:
* NamedMem


# ::stappler::xenolith::core::ComputePipelineInfo::shader

## BRIEF

Используемая подпрограмма

## CONTENT

Используемая подпрограмма

Тип: stappler::xenolith::core::SpecializationInfo


# ::stappler::xenolith::core::ComputePipelineData

## BRIEF

Данные вычислительного пайплайна

## CONTENT

Данные вычислительного пайплайна

Базовые классы:
* ComputePipelineInfo


# ::stappler::xenolith::core::ComputePipelineData::subpass

## BRIEF

Подпроход

## CONTENT

Подпроход

Тип: stappler::xenolith::core::SubpassData const*


# ::stappler::xenolith::core::ComputePipelineData::layout

## BRIEF

Укладка дескрипторов

## CONTENT

Укладка дескрипторов

Тип: stappler::xenolith::core::PipelineLayoutData const*


# ::stappler::xenolith::core::ComputePipelineData::pipeline

## BRIEF

Собранный пайплайн

## CONTENT

Собранный пайплайн

Тип: Rc<stappler::xenolith::core::ComputePipeline>


# ::stappler::xenolith::core::PipelineDescriptor

## BRIEF

Тип дескриптора пайплайна

## CONTENT

Тип дескриптора пайплайна

Базовые классы:
* NamedMem


# ::stappler::xenolith::core::PipelineDescriptor::set

## BRIEF

Исходный набор дескрипторов

## CONTENT

Исходный набор дескрипторов

Тип: stappler::xenolith::core::DescriptorSetData const*


# ::stappler::xenolith::core::PipelineDescriptor::attachment

## BRIEF

Соответствующее вложение

## CONTENT

Соответствующее вложение

Тип: stappler::xenolith::core::AttachmentPassData const*


# ::stappler::xenolith::core::PipelineDescriptor::type

## BRIEF

Тип дескриптора

## CONTENT

Тип дескриптора

Тип: stappler::xenolith::core::DescriptorType


# ::stappler::xenolith::core::PipelineDescriptor::stages

## BRIEF

Флаги стадий подпрограммы

## CONTENT

Флаги стадий подпрограммы

Тип: stappler::xenolith::core::ProgramStage


# ::stappler::xenolith::core::PipelineDescriptor::layout

## BRIEF

Укладка вложения изображения

## CONTENT

Укладка вложения изображения

Тип: stappler::xenolith::core::AttachmentLayout


# ::stappler::xenolith::core::PipelineDescriptor::count

## BRIEF

Число элементов

## CONTENT

Число элементов

Тип: uint32_t


# ::stappler::xenolith::core::PipelineDescriptor::index

## BRIEF

Индекс дескриптора

## CONTENT

Индекс дескриптора

Тип: uint32_t


# ::stappler::xenolith::core::PipelineDescriptor::updateAfterBind

## BRIEF

Флаг доступности обновления после связывания

## CONTENT

Флаг доступности обновления после связывания

Тип: bool


# ::stappler::xenolith::core::PipelineDescriptor::countIsPredefined

## BRIEF

Флаг предопределённого размера

## CONTENT

Флаг предопределённого размера. В противном случае определяется из данных подпрограммы.

Тип: bool


# ::stappler::xenolith::core::PipelineDescriptor::boundGeneration

## BRIEF

Поколение привязки

## CONTENT

Поколение привязки

Тип: uint64_t


# ::stappler::xenolith::core::SubpassDependency

## BRIEF

Структура зависимости подпроходов

## CONTENT

Структура зависимости подпроходов. См. VkSubpassDependency


# ::stappler::xenolith::core::SubpassDependency::External

## BRIEF

Константа внешней зависимости

## CONTENT

Константа внешней зависимости

Тип: uint32_t const


# ::stappler::xenolith::core::SubpassDependency::srcSubpass

## BRIEF

Исходный подпроход

## CONTENT

Исходный подпроход

Тип: uint32_t


# ::stappler::xenolith::core::SubpassDependency::srcStage

## BRIEF

Исходная стадия зависимости

## CONTENT

Исходная стадия зависимости

Тип: stappler::xenolith::core::PipelineStage


# ::stappler::xenolith::core::SubpassDependency::srcAccess

## BRIEF

Исходные флаги доступа

## CONTENT

Исходные флаги доступа

Тип: stappler::xenolith::core::AccessType


# ::stappler::xenolith::core::SubpassDependency::dstSubpass

## BRIEF

Целевой подпроход

## CONTENT

Целевой подпроход

Тип: uint32_t


# ::stappler::xenolith::core::SubpassDependency::dstStage

## BRIEF

Стадии целевого подпрохода

## CONTENT

Стадии целевого подпрохода

Тип: stappler::xenolith::core::PipelineStage


# ::stappler::xenolith::core::SubpassDependency::dstAccess

## BRIEF

Целевые флаги доступа

## CONTENT

Целевые флаги доступа

Тип: stappler::xenolith::core::AccessType


# ::stappler::xenolith::core::SubpassDependency::byRegion

## BRIEF

Зависимость ограничена регионом

## CONTENT

Зависимость ограничена регионом

Тип: bool


# ::stappler::xenolith::core::SubpassDependency::value() const

## BRIEF

Кодирует зависимость в число

## CONTENT

Кодирует зависимость в число

Возвращает:
* uint64_t

# ::stappler::xenolith::core::operator<(stappler::xenolith::core::SubpassDependency const&,stappler::xenolith::core::SubpassDependency const&)

## BRIEF

Оператор сравнения

## CONTENT

Оператор сравнения

Параметры:
* stappler::xenolith::core::SubpassDependency const&
* stappler::xenolith::core::SubpassDependency const&

Возвращает:
* bool

# ::stappler::xenolith::core::operator==(stappler::xenolith::core::SubpassDependency const&,stappler::xenolith::core::SubpassDependency const&)

## BRIEF

Оператор сравнения

## CONTENT

Оператор сравнения

Параметры:
* stappler::xenolith::core::SubpassDependency const&
* stappler::xenolith::core::SubpassDependency const&

Возвращает:
* bool

# ::stappler::xenolith::core::operator!=(stappler::xenolith::core::SubpassDependency const&,stappler::xenolith::core::SubpassDependency const&)

## BRIEF

Оператор сравнения

## CONTENT

Оператор сравнения

Параметры:
* stappler::xenolith::core::SubpassDependency const&
* stappler::xenolith::core::SubpassDependency const&

Возвращает:
* bool

# ::stappler::xenolith::core::AttachmentDependencyInfo

## BRIEF

Параметры зависимости вложения

## CONTENT

Параметры зависимости вложения


# ::stappler::xenolith::core::AttachmentDependencyInfo::initialUsageStage

## BRIEF

Начальная стадия использования вложения

## CONTENT

Начальная стадия использования вложения

Тип: stappler::xenolith::core::PipelineStage


# ::stappler::xenolith::core::AttachmentDependencyInfo::initialAccessMask

## BRIEF

Начальные флаги доступа

## CONTENT

Начальные флаги доступа

Тип: stappler::xenolith::core::AccessType


# ::stappler::xenolith::core::AttachmentDependencyInfo::finalUsageStage

## BRIEF

Последняя стадия использования вложения

## CONTENT

Последняя стадия использования вложения

Тип: stappler::xenolith::core::PipelineStage


# ::stappler::xenolith::core::AttachmentDependencyInfo::finalAccessMask

## BRIEF

Завершающие флаги доступа

## CONTENT

Завершающие флаги доступа

Тип: stappler::xenolith::core::AccessType


# ::stappler::xenolith::core::AttachmentDependencyInfo::requiredRenderPassState

## BRIEF

Состояние прохода, после которого вложение может быть использовано следующим проходом

## CONTENT

Состояние прохода, после которого вложение может быть использовано следующим проходом

Тип: stappler::xenolith::core::FrameRenderPassState


# ::stappler::xenolith::core::AttachmentDependencyInfo::lockedRenderPassState

## BRIEF

Состояние прохода, после которого вложение должно быть подконтрольно проходу

## CONTENT

Состояние прохода, после которого вложение должно быть подконтрольно проходу. Более ранние состояния, таким образом, могут быть обработаны до получения доступа к вложению.

Тип: stappler::xenolith::core::FrameRenderPassState

# ::stappler::xenolith::core::AttachmentDependencyInfo::make(stappler::xenolith::core::PipelineStage,stappler::xenolith::core::AccessType)

## BRIEF

Создаёт зависимость

## CONTENT

Создаёт зависимость

Параметры:
* stappler::xenolith::core::PipelineStage
* stappler::xenolith::core::AccessType

Возвращает:
* stappler::xenolith::core::AttachmentDependencyInfo

# ::stappler::xenolith::core::AttachmentSubpassData

## BRIEF

Данные подпрохода для вложения

## CONTENT

Данные подпрохода для вложения

Базовые классы:
* NamedMem


# ::stappler::xenolith::core::AttachmentSubpassData::pass

## BRIEF

Данные прохода вложения

## CONTENT

Данные прохода вложения

Тип: stappler::xenolith::core::AttachmentPassData const*


# ::stappler::xenolith::core::AttachmentSubpassData::subpass

## BRIEF

Данные подпрохода

## CONTENT

Данные подпрохода

Тип: stappler::xenolith::core::SubpassData const*


# ::stappler::xenolith::core::AttachmentSubpassData::layout

## BRIEF

Укладка для изображения

## CONTENT

Укладка для изображения

Тип: stappler::xenolith::core::AttachmentLayout


# ::stappler::xenolith::core::AttachmentSubpassData::usage

## BRIEF

Флаги использования вложения в подпроходе

## CONTENT

Флаги использования вложения в подпроходе

Тип: stappler::xenolith::core::AttachmentUsage


# ::stappler::xenolith::core::AttachmentSubpassData::ops

## BRIEF

Операции в подпроходе

## CONTENT

Операции в подпроходе

Тип: stappler::xenolith::core::AttachmentOps


# ::stappler::xenolith::core::AttachmentSubpassData::dependency

## BRIEF

Зависимость подпрохода

## CONTENT

Зависимость подпрохода

Тип: stappler::xenolith::core::AttachmentDependencyInfo


# ::stappler::xenolith::core::AttachmentSubpassData::blendInfo

## BRIEF

Выделенные параметры смешивания для подпрохода

## CONTENT

Выделенные параметры смешивания для подпрохода

Тип: stappler::xenolith::core::BlendInfo


# ::stappler::xenolith::core::AttachmentPassData

## BRIEF

Данные прохода для вложения

## CONTENT

Данные прохода для вложения

Базовые классы:
* NamedMem


# ::stappler::xenolith::core::AttachmentPassData::attachment

## BRIEF

Данные вложения

## CONTENT

Данные вложения

Тип: stappler::xenolith::core::AttachmentData const*


# ::stappler::xenolith::core::AttachmentPassData::pass

## BRIEF

Проход

## CONTENT

Проход

Тип: stappler::xenolith::core::QueuePassData const*


# ::stappler::xenolith::core::AttachmentPassData::index

## BRIEF

Индекс вложения

## CONTENT

Индекс вложения

Тип: uint32_t


# ::stappler::xenolith::core::AttachmentPassData::ops

## BRIEF

Операции в проходе

## CONTENT

Операции в проходе. Операции из подпроходов добавляются автоматически.

Тип: stappler::xenolith::core::AttachmentOps


# ::stappler::xenolith::core::AttachmentPassData::initialLayout

## BRIEF

Начальная укладка изображения

## CONTENT

Начальная укладка изображения. Может быть предустановлена или вычислена автоматически: как первая укладка использования или последняя укладка из предыдущего прохода для вложения.

Тип: stappler::xenolith::core::AttachmentLayout


# ::stappler::xenolith::core::AttachmentPassData::finalLayout

## BRIEF

Конечная укладка изображения

## CONTENT

Конечная укладка изображения. Может быть предустановлена или вычислена автоматически: как последняя укладка использования или последняя укладка в очереди.

Тип: stappler::xenolith::core::AttachmentLayout


# ::stappler::xenolith::core::AttachmentPassData::loadOp

## BRIEF

Операция загрузки данных изображения

## CONTENT

Операция загрузки данных изображения

Тип: stappler::xenolith::core::AttachmentLoadOp


# ::stappler::xenolith::core::AttachmentPassData::storeOp

## BRIEF

Операция сохранения данных изображения

## CONTENT

Операция сохранения данных изображения

Тип: stappler::xenolith::core::AttachmentStoreOp


# ::stappler::xenolith::core::AttachmentPassData::stencilLoadOp

## BRIEF

Операция загрузки данных трафарета

## CONTENT

Операция загрузки данных трафарета

Тип: stappler::xenolith::core::AttachmentLoadOp


# ::stappler::xenolith::core::AttachmentPassData::stencilStoreOp

## BRIEF

Операция сохранения данных трафарета

## CONTENT

Операция сохранения данных трафарета

Тип: stappler::xenolith::core::AttachmentStoreOp


# ::stappler::xenolith::core::AttachmentPassData::colorMode

## BRIEF

Режим доступа к цвету

## CONTENT

Режим доступа к цвету

Тип: stappler::xenolith::core::ColorMode


# ::stappler::xenolith::core::AttachmentPassData::dependency

## BRIEF

Зависимости прохода

## CONTENT

Зависимости прохода

Тип: stappler::xenolith::core::AttachmentDependencyInfo


# ::stappler::xenolith::core::AttachmentPassData::descriptors

## BRIEF

Дескрипторы вложения

## CONTENT

Дескрипторы вложения

Тип: memory::vector<PipelineDescriptor *>


# ::stappler::xenolith::core::AttachmentPassData::subpasses

## BRIEF

Подпроходы вложения

## CONTENT

Подпроходы вложения

Тип: memory::vector<AttachmentSubpassData *>


# ::stappler::xenolith::core::AttachmentData

## BRIEF

Данные вложения

## CONTENT

Данные вложения

Базовые классы:
* NamedMem


# ::stappler::xenolith::core::AttachmentData::queue

## BRIEF

Данные очереди

## CONTENT

Данные очереди

Тип: stappler::xenolith::core::QueueData const*


# ::stappler::xenolith::core::AttachmentData::id

## BRIEF

Идентификатор вложения

## CONTENT

Идентификатор вложения

Тип: uint64_t

# ::stappler::xenolith::core::AttachmentData::ops

## BRIEF

Операции над сложением

## CONTENT

Операции над сложением

Тип: stappler::xenolith::core::AttachmentOps


# ::stappler::xenolith::core::AttachmentData::type

## BRIEF

Тип вложения

## CONTENT

Тип вложения

Тип: stappler::xenolith::core::AttachmentType


# ::stappler::xenolith::core::AttachmentData::usage

## BRIEF

Флаги использования

## CONTENT

Флаги использования

Тип: stappler::xenolith::core::AttachmentUsage


# ::stappler::xenolith::core::AttachmentData::outputState

## BRIEF

Состояние прохода, на котором вложение более не используется

## CONTENT

Состояние прохода, на котором вложение более не используется

Тип: stappler::xenolith::core::FrameRenderPassState


# ::stappler::xenolith::core::AttachmentData::passes

## BRIEF

Проходы вложения

## CONTENT

Проходы вложения

Тип: memory::vector<AttachmentPassData *>


# ::stappler::xenolith::core::AttachmentData::attachment

## BRIEF

Объект вложения

## CONTENT

Объект вложения

Тип: Rc<stappler::xenolith::core::Attachment>


# ::stappler::xenolith::core::AttachmentData::transient

## BRIEF

Флаг внутреннего использования вложения

## CONTENT

Флаг внутреннего использования вложения

Тип: bool


# ::stappler::xenolith::core::DescriptorSetData

## BRIEF

Данные набора дескрипторов

## CONTENT

Данные набора дескрипторов

Базовые классы:
* NamedMem


# ::stappler::xenolith::core::DescriptorSetData::layout

## BRIEF

Укладка дескрипторов

## CONTENT

Укладка дескрипторов

Тип: stappler::xenolith::core::PipelineLayoutData const*


# ::stappler::xenolith::core::DescriptorSetData::index

## BRIEF

Индекс набора

## CONTENT

Индекс набора

Тип: uint32_t


# ::stappler::xenolith::core::DescriptorSetData::descriptors

## BRIEF

Дескрипторы

## CONTENT

Дескрипторы

Тип: memory::vector<PipelineDescriptor *>


# ::stappler::xenolith::core::PipelineLayoutData

## BRIEF

Укладка дескрипторов

## CONTENT

Укладка дескрипторов

Базовые классы:
* NamedMem


# ::stappler::xenolith::core::PipelineLayoutData::pass

## BRIEF

Проход

## CONTENT

Проход

Тип: stappler::xenolith::core::QueuePassData const*


# ::stappler::xenolith::core::PipelineLayoutData::index

## BRIEF

Индексы

## CONTENT

Индексы

Тип: uint32_t


# ::stappler::xenolith::core::PipelineLayoutData::usesTextureSet

## BRIEF

Флаг использования наборов текстур

## CONTENT

Флаг использования наборов текстур

Тип: bool


# ::stappler::xenolith::core::PipelineLayoutData::sets

## BRIEF

Наборы дескрипторов

## CONTENT

Наборы дескрипторов

Тип: memory::vector<DescriptorSetData *>


# ::stappler::xenolith::core::PipelineLayoutData::graphicPipelines

## BRIEF

Графические пайплайны, использующие укладку

## CONTENT

Графические пайплайны, использующие укладку

Тип: memory::vector<const GraphicPipelineData *>


# ::stappler::xenolith::core::PipelineLayoutData::computePipelines

## BRIEF

Вычислительные пайплайны, использующие укладку

## CONTENT

Вычислительные пайплайны, использующие укладку

Тип: memory::vector<const ComputePipelineData *>


# ::stappler::xenolith::core::SubpassData

## BRIEF

Данные подпрохода

## CONTENT

Данные подпрохода

Базовые классы:
* NamedMem


# ::stappler::xenolith::core::SubpassData::SubpassData()

## BRIEF

Конструктор

## CONTENT

Конструктор

# ::stappler::xenolith::core::SubpassData::SubpassData(stappler::xenolith::core::SubpassData const&)

## BRIEF

Конструктор копирования

## CONTENT

Конструктор копирования

Параметры:
* stappler::xenolith::core::SubpassData const&


# ::stappler::xenolith::core::SubpassData::SubpassData(stappler::xenolith::core::SubpassData&&)

## BRIEF

Конструктор перемещения

## CONTENT

Конструктор перемещения

Параметры:
* stappler::xenolith::core::SubpassData&&


# ::stappler::xenolith::core::SubpassData::operator=(stappler::xenolith::core::SubpassData const&)

## BRIEF

Оператор копирования

## CONTENT

Оператор копирования

Параметры:
* stappler::xenolith::core::SubpassData const&

Возвращает:
* stappler::xenolith::core::SubpassData&

# ::stappler::xenolith::core::SubpassData::operator=(stappler::xenolith::core::SubpassData&&)

## BRIEF

Оператор перемещения

## CONTENT

Оператор перемещения

Параметры:
* stappler::xenolith::core::SubpassData&&

Возвращает:
* stappler::xenolith::core::SubpassData&

# ::stappler::xenolith::core::SubpassData::pass

## BRIEF

Данные прохода

## CONTENT

Данные прохода

Тип: stappler::xenolith::core::QueuePassData const*


# ::stappler::xenolith::core::SubpassData::index

## BRIEF

Индекс подпрохода

## CONTENT

Индекс подпрохода

Тип: uint32_t


# ::stappler::xenolith::core::SubpassData::graphicPipelines

## BRIEF

Графические пайплайны в подпроходе

## CONTENT

Графические пайплайны в подпроходе

Тип: HashTable<stappler::xenolith::core::GraphicPipelineData *>


# ::stappler::xenolith::core::SubpassData::computePipelines

## BRIEF

Вычислительные пайплайны в подпроходе

## CONTENT

Вычислительные пайплайны в подпроходе

Тип: HashTable<stappler::xenolith::core::ComputePipelineData *>


# ::stappler::xenolith::core::SubpassData::inputImages

## BRIEF

Входящие изображения

## CONTENT

Входящие изображения

Тип: memory::vector<const AttachmentSubpassData *>


# ::stappler::xenolith::core::SubpassData::outputImages

## BRIEF

Исходящие изображения

## CONTENT

Исходящие изображения

Тип: memory::vector<const AttachmentSubpassData *>


# ::stappler::xenolith::core::SubpassData::resolveImages

## BRIEF

Вложения для сведения мультисемплинга

## CONTENT

Вложения для сведения мультисемплинга

Тип: memory::vector<const AttachmentSubpassData *>


# ::stappler::xenolith::core::SubpassData::depthStencil

## BRIEF

Вложения глубины и трафарета

## CONTENT

Вложения глубины и трафарета

Тип: stappler::xenolith::core::AttachmentSubpassData const*


# ::stappler::xenolith::core::SubpassData::preserve

## BRIEF

Вложения для хранения в подпроходе

## CONTENT

Вложения для хранения в подпроходе

Тип: memory::vector<uint32_t>


# ::stappler::xenolith::core::SubpassData::prepareCallback

## BRIEF

Функция подготовки подпрохода

## CONTENT

Функция подготовки подпрохода

Тип: memory::function<void (const SubpassData &, FrameQueue &)>


# ::stappler::xenolith::core::SubpassData::commandsCallback

## BRIEF

Функция записи команд

## CONTENT

Функция записи команд

Тип: memory::function<void (const SubpassData &, FrameQueue &, CommandBuffer &)>


# ::stappler::xenolith::core::RenderOrdering

## BRIEF

Тип для упорядочивания проходов

## CONTENT

Тип для упорядочивания проходов


# ::stappler::xenolith::core::RenderOrderingLowest

## BRIEF

Минимальный приоритет

## CONTENT

Минимальный приоритет

Тип: RenderOrdering


# ::stappler::xenolith::core::RenderOrderingHighest

## BRIEF

Максимальный приоритет

## CONTENT

Максимальный приоритет

Тип: RenderOrdering


# ::stappler::xenolith::core::QueuePassRequirements

## BRIEF

Требования для запуска прохода

## CONTENT

Требования для запуска прохода


# ::stappler::xenolith::core::QueuePassRequirements::data

## BRIEF

Проход

## CONTENT

Проход

Тип: stappler::xenolith::core::QueuePassData const*


# ::stappler::xenolith::core::QueuePassRequirements::requiredState

## BRIEF

Требуемое для работы вложения состояние прохода

## CONTENT

Требуемое для работы вложения состояние прохода

Тип: stappler::xenolith::core::FrameRenderPassState


# ::stappler::xenolith::core::QueuePassRequirements::lockedState

## BRIEF

Состояние прохода, на котором вложения должны быть готовы

## CONTENT

Состояние прохода, на котором вложения должны быть готовы

Тип: stappler::xenolith::core::FrameRenderPassState


# ::stappler::xenolith::core::QueuePassRequirements::QueuePassRequirements()

## BRIEF

Конструктор

## CONTENT

Конструктор

# ::stappler::xenolith::core::QueuePassRequirements::QueuePassRequirements(stappler::xenolith::core::QueuePassData const&,stappler::xenolith::core::FrameRenderPassState,stappler::xenolith::core::FrameRenderPassState)

## BRIEF

Конструктор

## CONTENT

Конструктор

Параметры:
* stappler::xenolith::core::QueuePassData const&
* stappler::xenolith::core::FrameRenderPassState
* stappler::xenolith::core::FrameRenderPassState


# ::stappler::xenolith::core::QueuePassDependency

## BRIEF

Тип зависимости между проходами

## CONTENT

Тип зависимости между проходами


# ::stappler::xenolith::core::QueuePassDependency::source

## BRIEF

Исходный проход

## CONTENT

Исходный проход

Тип: stappler::xenolith::core::QueuePassData const*


# ::stappler::xenolith::core::QueuePassDependency::target

## BRIEF

Целевой проход

## CONTENT

Целевой проход

Тип: stappler::xenolith::core::QueuePassData const*


# ::stappler::xenolith::core::QueuePassDependency::attachments

## BRIEF

Вложения, по которым работает зависимость

## CONTENT

Вложения, по которым работает зависимость

Тип: memory::vector<const AttachmentData *>


# ::stappler::xenolith::core::QueuePassDependency::stageFlags

## BRIEF

Флаги стадий, по которым работает зависимость.

## CONTENT

Флаги стадий, по которым работает зависимость.

Тип: stappler::xenolith::core::PipelineStage


# ::stappler::xenolith::core::QueuePassData

## BRIEF

Данные прохода очереди исполнения

## CONTENT

Данные прохода очереди исполнения

Базовые классы:
* NamedMem


# ::stappler::xenolith::core::QueuePassData::QueuePassData()

## BRIEF

Конструктор

## CONTENT

Конструктор


# ::stappler::xenolith::core::QueuePassData::QueuePassData(stappler::xenolith::core::QueuePassData const&)

## BRIEF

Конструктор копирования

## CONTENT

Конструктор копирования

Параметры:
* stappler::xenolith::core::QueuePassData const&


# ::stappler::xenolith::core::QueuePassData::QueuePassData(stappler::xenolith::core::QueuePassData&&)

## BRIEF

Конструктор перемещения

## CONTENT

Конструктор перемещения

Параметры:
* stappler::xenolith::core::QueuePassData&&


# ::stappler::xenolith::core::QueuePassData::operator=(stappler::xenolith::core::QueuePassData const&)

## BRIEF

Оператор копирования

## CONTENT

Оператор копирования

Параметры:
* stappler::xenolith::core::QueuePassData const&

Возвращает:
* stappler::xenolith::core::QueuePassData&

# ::stappler::xenolith::core::QueuePassData::operator=(stappler::xenolith::core::QueuePassData&&)

## BRIEF

Оператор перемещения

## CONTENT

Оператор перемещения

Параметры:
* stappler::xenolith::core::QueuePassData&&

Возвращает:
* stappler::xenolith::core::QueuePassData&

# ::stappler::xenolith::core::QueuePassData::queue

## BRIEF

Очередь

## CONTENT

Очередь

Тип: stappler::xenolith::core::QueueData const*


# ::stappler::xenolith::core::QueuePassData::attachments

## BRIEF

Вложения

## CONTENT

Вложения

Тип: memory::vector<const AttachmentPassData *>


# ::stappler::xenolith::core::QueuePassData::subpasses

## BRIEF

Подпроходы

## CONTENT

Подпроходы

Тип: memory::vector<const SubpassData *>


# ::stappler::xenolith::core::QueuePassData::pipelineLayouts

## BRIEF

Укладки дескрипторов

## CONTENT

Укладки дескрипторов

Тип: memory::vector<const PipelineLayoutData *>


# ::stappler::xenolith::core::QueuePassData::dependencies

## BRIEF

Зависимости подпроходов

## CONTENT

Зависимости подпроходов

Тип: memory::vector<SubpassDependency>


# ::stappler::xenolith::core::QueuePassData::sourceQueueDependencies

## BRIEF

Зависимости, где очередь выступает как исходная

## CONTENT

Зависимости, где очередь выступает как исходная

Тип: memory::vector<QueuePassDependency *>


# ::stappler::xenolith::core::QueuePassData::targetQueueDependencies

## BRIEF

Зависимости, где очередь выступает как целевая

## CONTENT

Зависимости, где очередь выступает как целевая

Тип: memory::vector<QueuePassDependency *>


# ::stappler::xenolith::core::QueuePassData::required

## BRIEF

Требуемые зависимости

## CONTENT

Требуемые зависимости

Тип: memory::vector<QueuePassRequirements>


# ::stappler::xenolith::core::QueuePassData::type

## BRIEF

Тип прохода

## CONTENT

Тип прохода

Тип: stappler::xenolith::core::PassType


# ::stappler::xenolith::core::QueuePassData::ordering

## BRIEF

Приоритет исполнения

## CONTENT

Приоритет исполнения

Тип: stappler::xenolith::core::RenderOrdering


# ::stappler::xenolith::core::QueuePassData::hasUpdateAfterBind

## BRIEF

Флаг доступности обновления дескрипторов после связывания

## CONTENT

Флаг доступности обновления дескрипторов после связывания

Тип: bool


# ::stappler::xenolith::core::QueuePassData::pass

## BRIEF

Объект прохода

## CONTENT

Объект прохода

Тип: Rc<stappler::xenolith::core::QueuePass>


# ::stappler::xenolith::core::QueuePassData::impl

## BRIEF

Проход на устройстве

## CONTENT

Проход на устройстве

Тип: Rc<stappler::xenolith::core::RenderPass>


# ::stappler::xenolith::core::QueuePassData::submittedCallbacks

## BRIEF

Функции для отправки прохода на исполнение

## CONTENT

Функции для отправки прохода на исполнение

Тип: memory::vector<memory::function<void (const QueuePassData &, FrameQueue &, bool)>>


# ::stappler::xenolith::core::QueuePassData::completeCallbacks

## BRIEF

Функции завершения

## CONTENT

Функции завершения

Тип: memory::vector<memory::function<void (const QueuePassData &, FrameQueue &, bool)>>


# ::stappler::xenolith::core::QueueData

## BRIEF

Данные очереди исполнения

## CONTENT

Данные очереди исполнения

Базовые классы:
* NamedMem


# ::stappler::xenolith::core::QueueData::pool

## BRIEF

Пул памяти для ресурсов очереди

## CONTENT

Пул памяти для ресурсов очереди

Тип: memory::pool_t*


# ::stappler::xenolith::core::QueueData::input

## BRIEF

Входящие вложения

## CONTENT

Входящие вложения

Тип: memory::vector<AttachmentData *>


# ::stappler::xenolith::core::QueueData::output

## BRIEF

Исходящие вложения

## CONTENT

Исходящие вложения

Тип: memory::vector<AttachmentData *>


# ::stappler::xenolith::core::QueueData::attachments

## BRIEF

Вложения

## CONTENT

Вложения

Тип: HashTable<stappler::xenolith::core::AttachmentData *>


# ::stappler::xenolith::core::QueueData::passes

## BRIEF

Проходы

## CONTENT

Проходы

Тип: HashTable<stappler::xenolith::core::QueuePassData *>


# ::stappler::xenolith::core::QueueData::programs

## BRIEF

Подпрограммы

## CONTENT

Подпрограммы

Тип: HashTable<stappler::xenolith::core::ProgramData *>


# ::stappler::xenolith::core::QueueData::graphicPipelines

## BRIEF

Графические пайплайны

## CONTENT

Графические пайплайны

Тип: HashTable<stappler::xenolith::core::GraphicPipelineData *>


# ::stappler::xenolith::core::QueueData::computePipelines

## BRIEF

Вычислительные пайплайны

## CONTENT

Вычислительные пайплайны

Тип: HashTable<stappler::xenolith::core::ComputePipelineData *>


# ::stappler::xenolith::core::QueueData::linked

## BRIEF

Связанные ресурсы

## CONTENT

Связанные ресурсы

Тип: HashTable<Rc<stappler::xenolith::core::Resource>>


# ::stappler::xenolith::core::QueueData::beginCallback

## BRIEF

Функция начала кадра

## CONTENT

Функция начала кадра

Тип: Function<void (stappler::xenolith::core::FrameRequest &)>


# ::stappler::xenolith::core::QueueData::endCallback

## BRIEF

Функция завершения кадра

## CONTENT

Функция завершения кадра

Тип: Function<void (stappler::xenolith::core::FrameRequest &)>


# ::stappler::xenolith::core::QueueData::releaseCallback

## BRIEF

Функция завершения работы очереди

## CONTENT

Функция завершения работы очереди

Тип: Function<void ()>


# ::stappler::xenolith::core::QueueData::resource

## BRIEF

Вложенный ресурс

## CONTENT

Вложенный ресурс

Тип: Rc<stappler::xenolith::core::Resource>


# ::stappler::xenolith::core::QueueData::compiled

## BRIEF

Флаг компиляции

## CONTENT

Флаг компиляции

Тип: bool


# ::stappler::xenolith::core::QueueData::order

## BRIEF

Текущий порядковый номер кадра

## CONTENT

Текущий порядковый номер кадра

Тип: uint64_t


# ::stappler::xenolith::core::QueueData::queue

## BRIEF

Объект очереди

## CONTENT

Объект очереди

Тип: stappler::xenolith::core::Queue*


# ::stappler::xenolith::core::QueueData::defaultSyncPassState

## BRIEF

Стандартная стадия для завершения работы прохода

## CONTENT

Стандартная стадия для завершения работы прохода

Тип: stappler::xenolith::core::FrameRenderPassState


# ::stappler::xenolith::core::QueueData::typedInput

## BRIEF

Типы входящих вложений

## CONTENT

Типы входящих вложений

Тип: memory::map<std::type_index, Attachment *>


# ::stappler::xenolith::core::QueueData::typedOutput

## BRIEF

Типы исходящих вложений

## CONTENT

Типы исходящих вложений

Тип: memory::map<std::type_index, Attachment *>


# ::stappler::xenolith::core::QueueData::passDependencies

## BRIEF

Зависимости между проходами

## CONTENT

Зависимости между проходами

Тип: memory::vector<QueuePassDependency>


# ::stappler::xenolith::core::QueueData::clear()

## BRIEF

Очищает данные

## CONTENT

Очищает данные

# ::stappler::xenolith::core::getDescriptorTypeName(stappler::xenolith::core::DescriptorType)

## BRIEF

Возвращает название типа дескриптора

## CONTENT

Возвращает название типа дескриптора

Параметры:
* stappler::xenolith::core::DescriptorType

Возвращает:
* stappler::StringView

# ::stappler::xenolith::core::getProgramStageDescription(stappler::xenolith::core::ProgramStage)

## BRIEF

Возвращает текстовое описание стадий

## CONTENT

Возвращает текстовое описание стадий

Параметры:
* stappler::xenolith::core::ProgramStage

Возвращает:
* stappler::mem_std::String