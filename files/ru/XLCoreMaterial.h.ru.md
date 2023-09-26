Title: XLCoreMaterial.h


# XENOLITH_CORE_XLCOREMATERIAL_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::core::MaterialId

## BRIEF

## CONTENT


# ::stappler::xenolith::core::MaterialInputData

## BRIEF

## CONTENT

Базовые классы:
* AttachmentInputData


# ::stappler::xenolith::core::MaterialInputData::attachment

## BRIEF

## CONTENT

Тип: stappler::xenolith::core::MaterialAttachment const*


# ::stappler::xenolith::core::MaterialInputData::materialsToAddOrUpdate

## BRIEF

## CONTENT

Тип: Vector<Rc<stappler::xenolith::core::Material>>


# ::stappler::xenolith::core::MaterialInputData::materialsToRemove

## BRIEF

## CONTENT

Тип: Vector<stappler::xenolith::core::MaterialId>


# ::stappler::xenolith::core::MaterialInputData::dynamicMaterialsToUpdate

## BRIEF

## CONTENT

Тип: Vector<stappler::xenolith::core::MaterialId>


# ::stappler::xenolith::core::MaterialInputData::callback

## BRIEF

## CONTENT

Тип: Function<void ()>


# ::stappler::xenolith::core::MaterialImage

## BRIEF

## CONTENT


# ::stappler::xenolith::core::MaterialImage::image

## BRIEF

## CONTENT

Тип: stappler::xenolith::core::ImageData const*


# ::stappler::xenolith::core::MaterialImage::dynamic

## BRIEF

## CONTENT

Тип: Rc<stappler::xenolith::core::DynamicImageInstance>


# ::stappler::xenolith::core::MaterialImage::info

## BRIEF

## CONTENT

Тип: stappler::xenolith::core::ImageViewInfo


# ::stappler::xenolith::core::MaterialImage::view

## BRIEF

## CONTENT

Тип: Rc<stappler::xenolith::core::ImageView>


# ::stappler::xenolith::core::MaterialImage::sampler

## BRIEF

## CONTENT

Тип: uint16_t


# ::stappler::xenolith::core::MaterialImage::set

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::xenolith::core::MaterialImage::descriptor

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::xenolith::core::MaterialImage::canAlias(stappler::xenolith::core::MaterialImage const&) const

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::core::MaterialImage const&

Возвращает:
* bool

# ::stappler::xenolith::core::MaterialSet

## BRIEF

## CONTENT

Базовые классы:
* Ref


# ::stappler::xenolith::core::MaterialSet::ImageSlot

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::MaterialSet::EncodeCallback

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::MaterialSet::~MaterialSet()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::MaterialSet::init(stappler::xenolith::core::BufferInfo const&,stappler::xenolith::core::MaterialSet::EncodeCallback const&,uint32_t,uint32_t,uint32_t,stappler::xenolith::core::MaterialAttachment const*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::BufferInfo const&
* stappler::xenolith::core::MaterialSet::EncodeCallback const&
* uint32_t
* uint32_t
* uint32_t
* stappler::xenolith::core::MaterialAttachment const*

Возвращает:
* bool

# ::stappler::xenolith::core::MaterialSet::init(Rc<stappler::xenolith::core::MaterialSet> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Rc<stappler::xenolith::core::MaterialSet> const&

Возвращает:
* bool

# ::stappler::xenolith::core::MaterialSet::encode(uint8_t*,stappler::xenolith::core::Material const*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint8_t*
* stappler::xenolith::core::Material const*

Возвращает:
* bool

# ::stappler::xenolith::core::MaterialSet::clear()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::MaterialSet::updateMaterials(Rc<stappler::xenolith::core::MaterialInputData> const&,Callback<Rc<stappler::xenolith::core::ImageView> (const stappler::xenolith::core::MaterialImage &)> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Rc<stappler::xenolith::core::MaterialInputData> const&
* Callback<Rc<stappler::xenolith::core::ImageView> (const stappler::xenolith::core::MaterialImage &)> const&

Возвращает:
* Vector<Rc<stappler::xenolith::core::Material>>

# ::stappler::xenolith::core::MaterialSet::updateMaterials(Vector<Rc<stappler::xenolith::core::Material>> const&,SpanView<stappler::xenolith::core::MaterialId>,SpanView<stappler::xenolith::core::MaterialId>,Callback<Rc<stappler::xenolith::core::ImageView> (const stappler::xenolith::core::MaterialImage &)> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Vector<Rc<stappler::xenolith::core::Material>> const&
* SpanView<stappler::xenolith::core::MaterialId>
* SpanView<stappler::xenolith::core::MaterialId>
* Callback<Rc<stappler::xenolith::core::ImageView> (const stappler::xenolith::core::MaterialImage &)> const&

Возвращает:
* Vector<Rc<stappler::xenolith::core::Material>>

# ::stappler::xenolith::core::MaterialSet::getInfo() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::core::BufferInfo const&

# ::stappler::xenolith::core::MaterialSet::getObjectSize() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint32_t

# ::stappler::xenolith::core::MaterialSet::getImagesInSet() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint32_t

# ::stappler::xenolith::core::MaterialSet::getGeneration() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint64_t

# ::stappler::xenolith::core::MaterialSet::getMaterials() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* HashMap<stappler::xenolith::core::MaterialId, Rc<stappler::xenolith::core::Material>> const&

# ::stappler::xenolith::core::MaterialSet::setBuffer(Rc<stappler::xenolith::core::BufferObject>&&,HashMap<stappler::xenolith::core::MaterialId, uint32_t>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Rc<stappler::xenolith::core::BufferObject>&&
* HashMap<stappler::xenolith::core::MaterialId, uint32_t>&&


# ::stappler::xenolith::core::MaterialSet::getBuffer() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Rc<stappler::xenolith::core::BufferObject>

# ::stappler::xenolith::core::MaterialSet::getOrdering() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* HashMap<stappler::xenolith::core::MaterialId, uint32_t> const&

# ::stappler::xenolith::core::MaterialSet::getLayouts()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Vector<stappler::xenolith::core::MaterialLayout>&

# ::stappler::xenolith::core::MaterialSet::getLayout(uint32_t) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint32_t

Возвращает:
* stappler::xenolith::core::MaterialLayout const*

# ::stappler::xenolith::core::MaterialSet::getMaterialById(stappler::xenolith::core::MaterialId) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::MaterialId

Возвращает:
* stappler::xenolith::core::Material const*

# ::stappler::xenolith::core::MaterialSet::getMaterialOrder(stappler::xenolith::core::MaterialId) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::MaterialId

Возвращает:
* uint32_t

# ::stappler::xenolith::core::MaterialSet::removeMaterial(stappler::xenolith::core::Material*)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::core::Material*


# ::stappler::xenolith::core::MaterialSet::emplaceMaterialImages(stappler::xenolith::core::Material*,stappler::xenolith::core::Material*,Callback<Rc<stappler::xenolith::core::ImageView> (const stappler::xenolith::core::MaterialImage &)> const&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::core::Material*
* stappler::xenolith::core::Material*
* Callback<Rc<stappler::xenolith::core::ImageView> (const stappler::xenolith::core::MaterialImage &)> const&


# ::stappler::xenolith::core::MaterialSet::_info

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::core::BufferInfo


# ::stappler::xenolith::core::MaterialSet::_encodeCallback

## BRIEF

## CONTENT

Доступ: protected

Тип: EncodeCallback


# ::stappler::xenolith::core::MaterialSet::_objectSize

## BRIEF

## CONTENT

Доступ: protected

Тип: uint32_t


# ::stappler::xenolith::core::MaterialSet::_imagesInSet

## BRIEF

## CONTENT

Доступ: protected

Тип: uint32_t


# ::stappler::xenolith::core::MaterialSet::_buffersInSet

## BRIEF

## CONTENT

Доступ: protected

Тип: uint32_t


# ::stappler::xenolith::core::MaterialSet::_generation

## BRIEF

## CONTENT

Доступ: protected

Тип: uint32_t


# ::stappler::xenolith::core::MaterialSet::_materials

## BRIEF

## CONTENT

Доступ: protected

Тип: HashMap<stappler::xenolith::core::MaterialId, Rc<stappler::xenolith::core::Material>>


# ::stappler::xenolith::core::MaterialSet::_ordering

## BRIEF

## CONTENT

Доступ: protected

Тип: HashMap<stappler::xenolith::core::MaterialId, uint32_t>


# ::stappler::xenolith::core::MaterialSet::_layouts

## BRIEF

## CONTENT

Доступ: protected

Тип: Vector<stappler::xenolith::core::MaterialLayout>


# ::stappler::xenolith::core::MaterialSet::_buffer

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::xenolith::core::BufferObject>


# ::stappler::xenolith::core::MaterialSet::_owner

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::core::MaterialAttachment const*


# ::stappler::xenolith::core::Material

## BRIEF

## CONTENT

Базовые классы:
* Ref


# ::stappler::xenolith::core::Material::MaterialIdInitial

## BRIEF

## CONTENT

Доступ: public

Тип: auto const


# ::stappler::xenolith::core::Material::PipelineData

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::Material::~Material()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::Material::init(stappler::xenolith::core::MaterialId,stappler::xenolith::core::Material::PipelineData const*,Vector<stappler::xenolith::core::MaterialImage>&&,stappler::mem_std::Bytes&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::MaterialId
* stappler::xenolith::core::Material::PipelineData const*
* Vector<stappler::xenolith::core::MaterialImage>&&
* stappler::mem_std::Bytes&&

Возвращает:
* bool

# ::stappler::xenolith::core::Material::init(stappler::xenolith::core::MaterialId,stappler::xenolith::core::Material::PipelineData const*,Rc<stappler::xenolith::core::DynamicImageInstance> const&,stappler::mem_std::Bytes&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::MaterialId
* stappler::xenolith::core::Material::PipelineData const*
* Rc<stappler::xenolith::core::DynamicImageInstance> const&
* stappler::mem_std::Bytes&&

Возвращает:
* bool

# ::stappler::xenolith::core::Material::init(stappler::xenolith::core::MaterialId,stappler::xenolith::core::Material::PipelineData const*,stappler::xenolith::core::ImageData const*,stappler::mem_std::Bytes&&,bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::MaterialId
* stappler::xenolith::core::Material::PipelineData const*
* stappler::xenolith::core::ImageData const*
* stappler::mem_std::Bytes&&
* bool

Возвращает:
* bool

# ::stappler::xenolith::core::Material::init(stappler::xenolith::core::MaterialId,stappler::xenolith::core::Material::PipelineData const*,stappler::xenolith::core::ImageData const*,stappler::xenolith::core::ColorMode,stappler::mem_std::Bytes&&,bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::MaterialId
* stappler::xenolith::core::Material::PipelineData const*
* stappler::xenolith::core::ImageData const*
* stappler::xenolith::core::ColorMode
* stappler::mem_std::Bytes&&
* bool

Возвращает:
* bool

# ::stappler::xenolith::core::Material::init(stappler::xenolith::core::Material const*,Rc<stappler::xenolith::core::ImageObject>&&,Rc<stappler::xenolith::core::DataAtlas>&&,stappler::mem_std::Bytes&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::Material const*
* Rc<stappler::xenolith::core::ImageObject>&&
* Rc<stappler::xenolith::core::DataAtlas>&&
* stappler::mem_std::Bytes&&

Возвращает:
* bool

# ::stappler::xenolith::core::Material::init(stappler::xenolith::core::Material const*,Vector<stappler::xenolith::core::MaterialImage>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::Material const*
* Vector<stappler::xenolith::core::MaterialImage>&&

Возвращает:
* bool

# ::stappler::xenolith::core::Material::getId() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::core::MaterialId

# ::stappler::xenolith::core::Material::getPipeline() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* PipelineData*

# ::stappler::xenolith::core::Material::getImages() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Vector<stappler::xenolith::core::MaterialImage> const&

# ::stappler::xenolith::core::Material::getData() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::BytesView

# ::stappler::xenolith::core::Material::getLayoutIndex() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint32_t

# ::stappler::xenolith::core::Material::setLayoutIndex(uint32_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint32_t


# ::stappler::xenolith::core::Material::getAtlas() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Rc<stappler::xenolith::core::DataAtlas> const&

# ::stappler::xenolith::core::Material::getOwnedData() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::core::ImageData const*

# ::stappler::xenolith::core::Material::_dirty

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::core::Material::_id

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::core::MaterialId


# ::stappler::xenolith::core::Material::_layoutIndex

## BRIEF

## CONTENT

Доступ: protected

Тип: uint32_t


# ::stappler::xenolith::core::Material::_pipeline

## BRIEF

## CONTENT

Доступ: protected

Тип: PipelineData*


# ::stappler::xenolith::core::Material::_images

## BRIEF

## CONTENT

Доступ: protected

Тип: Vector<stappler::xenolith::core::MaterialImage>


# ::stappler::xenolith::core::Material::_atlas

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::xenolith::core::DataAtlas>


# ::stappler::xenolith::core::Material::_data

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::mem_std::Bytes


# ::stappler::xenolith::core::Material::_ownedData

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::core::ImageData const*


# ::stappler::xenolith::core::MaterialAttachment

## BRIEF

## CONTENT

Базовые классы:
* BufferAttachment


# ::stappler::xenolith::core::MaterialAttachment::~MaterialAttachment()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::MaterialAttachment::init(stappler::xenolith::core::Attachment::AttachmentBuilder&,stappler::xenolith::core::BufferInfo const&,MaterialSet::EncodeCallback&&,uint32_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::Attachment::AttachmentBuilder&
* stappler::xenolith::core::BufferInfo const&
* MaterialSet::EncodeCallback&&
* uint32_t

Возвращает:
* bool

# ::stappler::xenolith::core::MaterialAttachment::addPredefinedMaterials(Vector<Rc<stappler::xenolith::core::Material>>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Vector<Rc<stappler::xenolith::core::Material>>&&


# ::stappler::xenolith::core::MaterialAttachment::getMaterials() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Rc<stappler::xenolith::core::MaterialSet> const&

# ::stappler::xenolith::core::MaterialAttachment::setMaterials(Rc<stappler::xenolith::core::MaterialSet> const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Rc<stappler::xenolith::core::MaterialSet> const&


# ::stappler::xenolith::core::MaterialAttachment::getPredefinedMaterials() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Vector<Rc<stappler::xenolith::core::Material>> const&

# ::stappler::xenolith::core::MaterialAttachment::allocateSet(stappler::xenolith::core::Device const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::Device const&

Возвращает:
* Rc<stappler::xenolith::core::MaterialSet>

# ::stappler::xenolith::core::MaterialAttachment::cloneSet(Rc<stappler::xenolith::core::MaterialSet> const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Rc<stappler::xenolith::core::MaterialSet> const&

Возвращает:
* Rc<stappler::xenolith::core::MaterialSet>

# ::stappler::xenolith::core::MaterialAttachment::sortDescriptors(stappler::xenolith::core::Attachment::RenderQueue&,stappler::xenolith::core::Device&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::Attachment::RenderQueue&
* stappler::xenolith::core::Device&


# ::stappler::xenolith::core::MaterialAttachment::addDynamicTracker(stappler::xenolith::core::MaterialId,Rc<stappler::xenolith::core::DynamicImage> const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::MaterialId
* Rc<stappler::xenolith::core::DynamicImage> const&


# ::stappler::xenolith::core::MaterialAttachment::removeDynamicTracker(stappler::xenolith::core::MaterialId,Rc<stappler::xenolith::core::DynamicImage> const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::MaterialId
* Rc<stappler::xenolith::core::DynamicImage> const&


# ::stappler::xenolith::core::MaterialAttachment::updateDynamicImage(stappler::xenolith::core::Loop&,stappler::xenolith::core::DynamicImage const*,Vector<Rc<stappler::xenolith::core::DependencyEvent>> const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::Loop&
* stappler::xenolith::core::DynamicImage const*
* Vector<Rc<stappler::xenolith::core::DependencyEvent>> const&


# ::stappler::xenolith::core::MaterialAttachment::getNextMaterialId() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::core::MaterialId

# ::stappler::xenolith::core::MaterialAttachment::setCompiler(stappler::xenolith::core::Queue*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::Queue*


# ::stappler::xenolith::core::MaterialAttachment::getCompiler() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::core::Queue*

# ::stappler::xenolith::core::MaterialAttachment::DynamicImageTracker

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::core::MaterialAttachment::DynamicImageTracker::refCount

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::xenolith::core::MaterialAttachment::DynamicImageTracker::materials

## BRIEF

## CONTENT

Тип: Map<stappler::xenolith::core::MaterialId, uint32_t>


# ::stappler::xenolith::core::MaterialAttachment::_compiler

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::core::Queue*


# ::stappler::xenolith::core::MaterialAttachment::_attachmentMaterialId

## BRIEF

## CONTENT

Доступ: protected

Тип: std::atomic<MaterialId>


# ::stappler::xenolith::core::MaterialAttachment::_materialObjectSize

## BRIEF

## CONTENT

Доступ: protected

Тип: uint32_t


# ::stappler::xenolith::core::MaterialAttachment::_encodeCallback

## BRIEF

## CONTENT

Доступ: protected

Тип: MaterialSet::EncodeCallback


# ::stappler::xenolith::core::MaterialAttachment::_data

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::xenolith::core::MaterialSet>


# ::stappler::xenolith::core::MaterialAttachment::_predefinedMaterials

## BRIEF

## CONTENT

Доступ: protected

Тип: Vector<Rc<stappler::xenolith::core::Material>>


# ::stappler::xenolith::core::MaterialAttachment::_dynamicMutex

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::mem_std::Mutex


# ::stappler::xenolith::core::MaterialAttachment::_dynamicTrackers

## BRIEF

## CONTENT

Доступ: protected

Тип: Map<Rc<stappler::xenolith::core::DynamicImage>, stappler::xenolith::core::MaterialAttachment::DynamicImageTracker>
