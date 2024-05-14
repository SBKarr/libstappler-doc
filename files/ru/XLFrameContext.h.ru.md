Title: XLFrameContext.h


# XENOLITH_SCENE_DIRECTOR_XLFRAMECONTEXT_H_

## BRIEF

Заголовок контекста текущего кадра

## CONTENT

Заголовок контекста текущего кадра


# ::stappler::xenolith::FrameContext

## BRIEF

Тип контекста кадра

## CONTENT

Тип контекста кадра. Контекст связывает данные сцены и входящие вложения очереди рендеринга.

Базовые классы:
* ResourceOwner


# ::stappler::xenolith::FrameContext::~FrameContext()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор


# ::stappler::xenolith::FrameContext::init()

## BRIEF

Создаёт контекст

## CONTENT

Доступ: public

Создаёт контекст

Возвращает:
* bool

# ::stappler::xenolith::FrameContext::onEnter(stappler::xenolith::Scene*)

## BRIEF

Обрабатывает добавление на сцену

## CONTENT

Доступ: public

Обрабатывает добавление на сцену

Параметры:
* stappler::xenolith::Scene*


# ::stappler::xenolith::FrameContext::onExit()

## BRIEF

Обрабатывает удаление со сцены

## CONTENT

Доступ: public

Обрабатывает удаление со сцены


# ::stappler::xenolith::FrameContext::makeHandle(stappler::xenolith::FrameInfo&)

## BRIEF

Создаёт интерфейс кадра для сцены

## CONTENT

Доступ: public

Создаёт интерфейс кадра для сцены

Параметры:
* stappler::xenolith::FrameInfo&

Возвращает:
* Rc<stappler::xenolith::FrameContextHandle>

# ::stappler::xenolith::FrameContext::submitHandle(stappler::xenolith::FrameInfo&,stappler::xenolith::FrameContextHandle*)

## BRIEF

Отправляет данные, собранные интерфейсом, в очередь рендеринга

## CONTENT

Доступ: public

Отправляет данные, собранные интерфейсом, в очередь рендеринга

Параметры:
* stappler::xenolith::FrameInfo&
* stappler::xenolith::FrameContextHandle*


# ::stappler::xenolith::FrameContext::getMaterial(stappler::xenolith::MaterialInfo const&) const

## BRIEF

Возвращает загруженный материал

## CONTENT

Доступ: public

Возвращает загруженный материал

Параметры:
* stappler::xenolith::MaterialInfo const&

Возвращает:
* uint64_t

# ::stappler::xenolith::FrameContext::acquireMaterial(stappler::xenolith::MaterialInfo const&,Vector<core::MaterialImage>&&,stappler::mem_std::Ref*,bool)

## BRIEF

Запрашивает новый материал

## CONTENT

Доступ: public

Запрашивает новый материал

Параметры:
* stappler::xenolith::MaterialInfo const&
* Vector<core::MaterialImage>&&
* stappler::mem_std::Ref*
* bool

Возвращает:
* uint64_t

# ::stappler::xenolith::FrameContext::revokeImages(SpanView<uint64_t>)

## BRIEF

Отзывает более не использующиеся идентификаторы текстур

## CONTENT

Доступ: public

Отзывает более не использующиеся идентификаторы текстур

Параметры:
* SpanView<uint64_t>


# ::stappler::xenolith::FrameContext::PipelineLayoutData

## BRIEF

Данные о связи пайплайнов и укладки дескрипторов

## CONTENT

Доступ: protected

Данные о связи пайплайнов и укладки дескрипторов


# ::stappler::xenolith::FrameContext::PipelineLayoutData::layout

## BRIEF

Данные укладки

## CONTENT

Данные укладки

Тип: core::PipelineLayoutData const*


# ::stappler::xenolith::FrameContext::PipelineLayoutData::pipelines

## BRIEF

Связанные пайплайны

## CONTENT

Связанные пайплайны

Тип: HashMap<size_t, Vector<const core::GraphicPipelineData *>>


# ::stappler::xenolith::FrameContext::ContextMaterialInfo

## BRIEF

Контекстные данные материала

## CONTENT

Доступ: protected

Контекстные данные материала


# ::stappler::xenolith::FrameContext::ContextMaterialInfo::info

## BRIEF

Информация о материале

## CONTENT

Информация о материале

Тип: stappler::xenolith::MaterialInfo


# ::stappler::xenolith::FrameContext::ContextMaterialInfo::id

## BRIEF

Идентификатор

## CONTENT

Идентификатор

Тип: core::MaterialId


# ::stappler::xenolith::FrameContext::ContextMaterialInfo::revokable

## BRIEF

Флаг возможности отзыва материала

## CONTENT

Флаг возможности отзыва материала

Тип: bool


# ::stappler::xenolith::FrameContext::readMaterials(core::MaterialAttachment*)

## BRIEF

Читает предустановленные материалы, чтобы сделать их доступными на сцене

## CONTENT

Доступ: protected

Читает предустановленные материалы, чтобы сделать их доступными на сцене

Параметры:
* core::MaterialAttachment*


# ::stappler::xenolith::FrameContext::getMaterialInfo(Rc<core::Material> const&) const

## BRIEF

Возвращает информацию о материале

## CONTENT

Доступ: protected

Возвращает информацию о материале

Параметры:
* Rc<core::Material> const&

Возвращает:
* stappler::xenolith::MaterialInfo

# ::stappler::xenolith::FrameContext::addPendingMaterial(Rc<core::Material>&&)

## BRIEF

Добавляет материал, ожидающий отправки на устройство

## CONTENT

Доступ: protected

Добавляет материал, ожидающий отправки на устройство

Параметры:
* Rc<core::Material>&&


# ::stappler::xenolith::FrameContext::addMaterial(stappler::xenolith::MaterialInfo const&,core::MaterialId,bool)

## BRIEF

Добавляет новый материал, доступный на сцене

## CONTENT

Доступ: protected

Добавляет новый материал, доступный на сцене

Параметры:
* stappler::xenolith::MaterialInfo const&
* core::MaterialId
* bool


# ::stappler::xenolith::FrameContext::listMaterials() const

## BRIEF

Показывает список доступных материалов для отладки

## CONTENT

Доступ: protected

Показывает список доступных материалов для отладки

Возвращает:
* stappler::mem_std::String

# ::stappler::xenolith::FrameContext::getImageViewForMaterial(stappler::xenolith::MaterialInfo const&,uint32_t,core::ImageData const*) const

## BRIEF

Возвращает параметры отображения текстур материала

## CONTENT

Доступ: protected

Возвращает параметры отображения текстур материала

Параметры:
* stappler::xenolith::MaterialInfo const&
* uint32_t
* core::ImageData const*

Возвращает:
* core::ImageViewInfo

# ::stappler::xenolith::FrameContext::getPipelineForMaterial(stappler::xenolith::MaterialInfo const&) const

## BRIEF

Возвращает пайплайн, используемый материалом

## CONTENT

Доступ: protected

Возвращает пайплайн, используемый материалом

Параметры:
* stappler::xenolith::MaterialInfo const&

Возвращает:
* core::GraphicPipelineData const*

# ::stappler::xenolith::FrameContext::isPipelineMatch(core::GraphicPipelineData const*,stappler::xenolith::MaterialInfo const&) const

## BRIEF

Проверяет, возможно ли использовать пайплайн с материалом

## CONTENT

Доступ: protected

Проверяет, возможно ли использовать пайплайн с материалом

Параметры:
* core::GraphicPipelineData const*
* stappler::xenolith::MaterialInfo const&

Возвращает:
* bool

# ::stappler::xenolith::FrameContext::submitMaterials(stappler::xenolith::FrameInfo const&)

## BRIEF

Отправляет ожидающие материалы на устройство

## CONTENT

Доступ: protected

Отправляет ожидающие материалы на устройство

Параметры:
* stappler::xenolith::FrameInfo const&


# ::stappler::xenolith::FrameContext::_scene

## BRIEF

Сцена

## CONTENT

Доступ: protected

Сцена

Тип: stappler::xenolith::Scene*


# ::stappler::xenolith::FrameContext::_queue

## BRIEF

Очередь рендеринга

## CONTENT

Доступ: protected

Очередь рендеринга

Тип: Rc<core::Queue>


# ::stappler::xenolith::FrameContext::_materialAttachment

## BRIEF

Источник материалов

## CONTENT

Доступ: protected

Источник материалов

Тип: core::MaterialAttachment const*


# ::stappler::xenolith::FrameContext::_layouts

## BRIEF

Данные укладки дескрипторов

## CONTENT

Доступ: protected

Данные укладки дескрипторов

Тип: Vector<stappler::xenolith::FrameContext::PipelineLayoutData>


# ::stappler::xenolith::FrameContext::_materials

## BRIEF

Доступные материалы

## CONTENT

Доступ: protected

Доступные материалы

Тип: HashMap<uint64_t, Vector<stappler::xenolith::FrameContext::ContextMaterialInfo>>


# ::stappler::xenolith::FrameContext::_pendingMaterialsToAdd

## BRIEF

Ожидающие добавления материалы

## CONTENT

Доступ: protected

Ожидающие добавления материалы

Тип: Vector<Rc<core::Material>>


# ::stappler::xenolith::FrameContext::_pendingMaterialsToRemove

## BRIEF

Ожидающие отзыва материалы

## CONTENT

Доступ: protected

Ожидающие отзыва материалы

Тип: Vector<uint32_t>


# ::stappler::xenolith::FrameContext::_materialDependency

## BRIEF

Зависимость для отслеживания загрузки материалов

## CONTENT

Доступ: protected

Зависимость для отслеживания загрузки материалов

Тип: Rc<core::DependencyEvent>


# ::stappler::xenolith::FrameContext::_revokedIds

## BRIEF

Отозванные идентификаторы текстур

## CONTENT

Доступ: protected

Отозванные идентификаторы текстур

Тип: Vector<core::MaterialId>


# ::stappler::xenolith::FrameContextHandle

## BRIEF

Интерфейс кадра для контеста

## CONTENT

Интерфейс кадра для контеста. Используется для накопления данных для отправки в очередь отрисовки при обходе сцены.

Базовые классы:
* core::AttachmentInputData


# ::stappler::xenolith::FrameContextHandle::director

## BRIEF

Режиссёр

## CONTENT

Режиссёр

Тип: Rc<stappler::xenolith::Director>


# ::stappler::xenolith::FrameContextHandle::context

## BRIEF

Контекст

## CONTENT

Контекст

Тип: stappler::xenolith::FrameContext*


# ::stappler::xenolith::FrameContextHandle::stateStack

## BRIEF

Стек состояний

## CONTENT

Стек состояний

Тип: memory::vector<StateId>


# ::stappler::xenolith::FrameContextHandle::states

## BRIEF

Доступные состояния

## CONTENT

Доступные состояния

Тип: memory::vector<DrawStateValues>


# ::stappler::xenolith::FrameContextHandle::addState(stappler::xenolith::DrawStateValues)

## BRIEF

Добавляет состояние

## CONTENT

Добавляет состояние

Параметры:
* stappler::xenolith::DrawStateValues

Возвращает:
* stappler::xenolith::StateId

# ::stappler::xenolith::FrameContextHandle::getState(stappler::xenolith::StateId) const

## BRIEF

Возвращает доступное состояние

## CONTENT

Возвращает доступное состояние

Параметры:
* stappler::xenolith::StateId

Возвращает:
* stappler::xenolith::DrawStateValues const*

# ::stappler::xenolith::FrameContextHandle::getCurrentState() const

## BRIEF

Возвращает текущее состояние

## CONTENT

Возвращает текущее состояние

Возвращает:
* stappler::xenolith::StateId