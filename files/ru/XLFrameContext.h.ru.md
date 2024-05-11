Title: XLFrameContext.h


# XENOLITH_SCENE_DIRECTOR_XLFRAMECONTEXT_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::FrameContext

## BRIEF

## CONTENT

Базовые классы:
* ResourceOwner


# ::stappler::xenolith::FrameContext::~FrameContext()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::FrameContext::init()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::FrameContext::onEnter(stappler::xenolith::Scene*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Scene*


# ::stappler::xenolith::FrameContext::onExit()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::FrameContext::makeHandle(stappler::xenolith::FrameInfo&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::FrameInfo&

Возвращает:
* Rc<stappler::xenolith::FrameContextHandle>

# ::stappler::xenolith::FrameContext::submitHandle(stappler::xenolith::FrameInfo&,stappler::xenolith::FrameContextHandle*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::FrameInfo&
* stappler::xenolith::FrameContextHandle*


# ::stappler::xenolith::FrameContext::getMaterial(stappler::xenolith::MaterialInfo const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::MaterialInfo const&

Возвращает:
* uint64_t

# ::stappler::xenolith::FrameContext::acquireMaterial(stappler::xenolith::MaterialInfo const&,Vector<core::MaterialImage>&&,stappler::mem_std::Ref*,bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::MaterialInfo const&
* Vector<core::MaterialImage>&&
* stappler::mem_std::Ref*
* bool

Возвращает:
* uint64_t

# ::stappler::xenolith::FrameContext::revokeImages(SpanView<uint64_t>)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* SpanView<uint64_t>


# ::stappler::xenolith::FrameContext::PipelineLayoutData

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::FrameContext::PipelineLayoutData::layout

## BRIEF

## CONTENT

Тип: core::PipelineLayoutData const*


# ::stappler::xenolith::FrameContext::PipelineLayoutData::pipelines

## BRIEF

## CONTENT

Тип: HashMap<size_t, Vector<const core::GraphicPipelineData *>>


# ::stappler::xenolith::FrameContext::ContextMaterialInfo

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::FrameContext::ContextMaterialInfo::info

## BRIEF

## CONTENT

Тип: stappler::xenolith::MaterialInfo


# ::stappler::xenolith::FrameContext::ContextMaterialInfo::id

## BRIEF

## CONTENT

Тип: core::MaterialId


# ::stappler::xenolith::FrameContext::ContextMaterialInfo::revokable

## BRIEF

## CONTENT

Тип: bool


# ::stappler::xenolith::FrameContext::readMaterials(core::MaterialAttachment*)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* core::MaterialAttachment*


# ::stappler::xenolith::FrameContext::getMaterialInfo(Rc<core::Material> const&) const

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* Rc<core::Material> const&

Возвращает:
* stappler::xenolith::MaterialInfo

# ::stappler::xenolith::FrameContext::addPendingMaterial(Rc<core::Material>&&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* Rc<core::Material>&&


# ::stappler::xenolith::FrameContext::addMaterial(stappler::xenolith::MaterialInfo const&,core::MaterialId,bool)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::MaterialInfo const&
* core::MaterialId
* bool


# ::stappler::xenolith::FrameContext::listMaterials() const

## BRIEF

## CONTENT

Доступ: protected

Возвращает:
* stappler::mem_std::String

# ::stappler::xenolith::FrameContext::getImageViewForMaterial(stappler::xenolith::MaterialInfo const&,uint32_t,core::ImageData const*) const

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::MaterialInfo const&
* uint32_t
* core::ImageData const*

Возвращает:
* core::ImageViewInfo

# ::stappler::xenolith::FrameContext::getPipelineForMaterial(stappler::xenolith::MaterialInfo const&) const

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::MaterialInfo const&

Возвращает:
* core::GraphicPipelineData const*

# ::stappler::xenolith::FrameContext::isPipelineMatch(core::GraphicPipelineData const*,stappler::xenolith::MaterialInfo const&) const

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* core::GraphicPipelineData const*
* stappler::xenolith::MaterialInfo const&

Возвращает:
* bool

# ::stappler::xenolith::FrameContext::submitMaterials(stappler::xenolith::FrameInfo const&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::FrameInfo const&


# ::stappler::xenolith::FrameContext::_scene

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::Scene*


# ::stappler::xenolith::FrameContext::_queue

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<core::Queue>


# ::stappler::xenolith::FrameContext::_materialAttachment

## BRIEF

## CONTENT

Доступ: protected

Тип: core::MaterialAttachment const*


# ::stappler::xenolith::FrameContext::_layouts

## BRIEF

## CONTENT

Доступ: protected

Тип: Vector<stappler::xenolith::FrameContext::PipelineLayoutData>


# ::stappler::xenolith::FrameContext::_materials

## BRIEF

## CONTENT

Доступ: protected

Тип: HashMap<uint64_t, Vector<stappler::xenolith::FrameContext::ContextMaterialInfo>>


# ::stappler::xenolith::FrameContext::_pendingMaterialsToAdd

## BRIEF

## CONTENT

Доступ: protected

Тип: Vector<Rc<core::Material>>


# ::stappler::xenolith::FrameContext::_pendingMaterialsToRemove

## BRIEF

## CONTENT

Доступ: protected

Тип: Vector<uint32_t>


# ::stappler::xenolith::FrameContext::_materialDependency

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<core::DependencyEvent>


# ::stappler::xenolith::FrameContext::_revokedIds

## BRIEF

## CONTENT

Доступ: protected

Тип: Vector<core::MaterialId>


# ::stappler::xenolith::FrameContextHandle

## BRIEF

## CONTENT

Базовые классы:
* core::AttachmentInputData


# ::stappler::xenolith::FrameContextHandle::director

## BRIEF

## CONTENT

Тип: Rc<stappler::xenolith::Director>


# ::stappler::xenolith::FrameContextHandle::context

## BRIEF

## CONTENT

Тип: stappler::xenolith::FrameContext*


# ::stappler::xenolith::FrameContextHandle::stateStack

## BRIEF

## CONTENT

Тип: memory::vector<StateId>


# ::stappler::xenolith::FrameContextHandle::states

## BRIEF

## CONTENT

Тип: memory::vector<DrawStateValues>


# ::stappler::xenolith::FrameContextHandle::addState(stappler::xenolith::DrawStateValues)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::DrawStateValues

Возвращает:
* stappler::xenolith::StateId

# ::stappler::xenolith::FrameContextHandle::getState(stappler::xenolith::StateId) const

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::StateId

Возвращает:
* stappler::xenolith::DrawStateValues const*

# ::stappler::xenolith::FrameContextHandle::getCurrentState() const

## BRIEF

## CONTENT

Возвращает:
* stappler::xenolith::StateId