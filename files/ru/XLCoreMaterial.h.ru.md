Title: XLCoreMaterial.h


# XENOLITH_CORE_XLCOREMATERIAL_H_

## BRIEF

Заголовок общей системы материалов

## CONTENT

Заголовок общей системы материалов

# ::stappler::xenolith::core::MaterialId

## BRIEF

Тип идентификатора материала

## CONTENT

Тип идентификатора материала


# ::stappler::xenolith::core::MaterialInputData

## BRIEF

Данные для загрузки материалов

## CONTENT

Данные для загрузки материалов

Базовые классы:
* AttachmentInputData


# ::stappler::xenolith::core::MaterialInputData::attachment

## BRIEF

Вложение для хранения материалов

## CONTENT

Вложение для хранения материалов

Тип: stappler::xenolith::core::MaterialAttachment const*


# ::stappler::xenolith::core::MaterialInputData::materialsToAddOrUpdate

## BRIEF

Материалы для добавления или обновления

## CONTENT

Материалы для добавления или обновления

Тип: Vector<Rc<stappler::xenolith::core::Material>>


# ::stappler::xenolith::core::MaterialInputData::materialsToRemove

## BRIEF

Материалы для удаления

## CONTENT

Материалы для удаления

Тип: Vector<stappler::xenolith::core::MaterialId>


# ::stappler::xenolith::core::MaterialInputData::dynamicMaterialsToUpdate

## BRIEF

Обновленные материалы динамических изображений

## CONTENT

Обновленные материалы динамических изображений

Тип: Vector<stappler::xenolith::core::MaterialId>


# ::stappler::xenolith::core::MaterialInputData::callback

## BRIEF

Функция для вызова при завершении обновления

## CONTENT

Функция для вызова при завершении обновления

Тип: Function<void ()>


# ::stappler::xenolith::core::MaterialImage

## BRIEF

Тип изображения для материала

## CONTENT

Тип изображения для материала

# ::stappler::xenolith::core::MaterialImage::image

## BRIEF

Данные изображения

## CONTENT

Данные изображения

Тип: stappler::xenolith::core::ImageData const*


# ::stappler::xenolith::core::MaterialImage::dynamic

## BRIEF

Динамическое изображение

## CONTENT

Динамическое изображение

Тип: Rc<stappler::xenolith::core::DynamicImageInstance>


# ::stappler::xenolith::core::MaterialImage::info

## BRIEF

Параметры отображения

## CONTENT

Параметры отображения

Тип: stappler::xenolith::core::ImageViewInfo


# ::stappler::xenolith::core::MaterialImage::view

## BRIEF

Отображение

## CONTENT

Отображение

Тип: Rc<stappler::xenolith::core::ImageView>


# ::stappler::xenolith::core::MaterialImage::sampler

## BRIEF

Индекс семплера

## CONTENT

Индекс семплера

Тип: uint16_t


# ::stappler::xenolith::core::MaterialImage::set

## BRIEF

Индекс набора, в котором находится материал

## CONTENT

Индекс набора, в котором находится материал

Тип: uint32_t


# ::stappler::xenolith::core::MaterialImage::descriptor

## BRIEF

Индекс дескриптора изображения

## CONTENT

Индекс дескриптора изображения

Тип: uint32_t


# ::stappler::xenolith::core::MaterialImage::canAlias(stappler::xenolith::core::MaterialImage const&) const

## BRIEF

Проверяет, может ли изображения использовать дескрипторы совместно с другим

## CONTENT

Проверяет, может ли изображения использовать дескрипторы совместно с другим. Оптимизация числа дескрипторов

Параметры:
* stappler::xenolith::core::MaterialImage const&

Возвращает:
* bool

# ::stappler::xenolith::core::MaterialSet

## BRIEF

Набор материалов

## CONTENT

Набор материалов. Набор неизменен весь срок своей жизни кроме момента настройки. При обновлении создаётся новый набор.

Базовые классы:
* Ref


# ::stappler::xenolith::core::MaterialSet::ImageSlot

## BRIEF

Тип слота изображения

## CONTENT

Доступ: public

Тип слота изображения


# ::stappler::xenolith::core::MaterialSet::EncodeCallback

## BRIEF

Функция для кодирования данных материала

## CONTENT

Доступ: public

Функция для кодирования данных материала


# ::stappler::xenolith::core::MaterialSet::~MaterialSet()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор


# ::stappler::xenolith::core::MaterialSet::init(stappler::xenolith::core::BufferInfo const&,stappler::xenolith::core::MaterialSet::EncodeCallback const&,uint32_t,uint32_t,uint32_t,stappler::xenolith::core::MaterialAttachment const*)

## BRIEF

Создаёт набор материалов

## CONTENT

Доступ: public

Создаёт набор материалов

Параметры:
* stappler::xenolith::core::BufferInfo const& - параметры буфера материалов
* stappler::xenolith::core::MaterialSet::EncodeCallback const& - функция кодирования данных
* uint32_t - размер одного материала в буфере
* uint32_t - число изобраений
* uint32_t - число буферов
* stappler::xenolith::core::MaterialAttachment const* - вложение для материалов

Возвращает:
* bool

# ::stappler::xenolith::core::MaterialSet::init(Rc<stappler::xenolith::core::MaterialSet> const&)

## BRIEF

Копирует набор

## CONTENT

Доступ: public

Копирует набор

Параметры:
* Rc<stappler::xenolith::core::MaterialSet> const&

Возвращает:
* bool

# ::stappler::xenolith::core::MaterialSet::encode(uint8_t*,stappler::xenolith::core::Material const*)

## BRIEF

Записывает данные материала в буфер

## CONTENT

Доступ: public

Записывает данные материала в буфер

Параметры:
* uint8_t*
* stappler::xenolith::core::Material const*

Возвращает:
* bool

# ::stappler::xenolith::core::MaterialSet::clear()

## BRIEF

Очищает набор

## CONTENT

Доступ: public

Очищает набор


# ::stappler::xenolith::core::MaterialSet::updateMaterials(Rc<stappler::xenolith::core::MaterialInputData> const&,Callback<Rc<stappler::xenolith::core::ImageView> (const stappler::xenolith::core::MaterialImage &)> const&)

## BRIEF

Обновляет материалы в наборе

## CONTENT

Доступ: public

Обновляет материалы в наборе

Параметры:
* Rc<stappler::xenolith::core::MaterialInputData> const&
* Callback<Rc<stappler::xenolith::core::ImageView> (const stappler::xenolith::core::MaterialImage &)> const& - функция для создания отображений изображений

Возвращает:
* Vector<Rc<stappler::xenolith::core::Material>> - обновлеённые материалы в наборе

# ::stappler::xenolith::core::MaterialSet::updateMaterials(Vector<Rc<stappler::xenolith::core::Material>> const&,SpanView<stappler::xenolith::core::MaterialId>,SpanView<stappler::xenolith::core::MaterialId>,Callback<Rc<stappler::xenolith::core::ImageView> (const stappler::xenolith::core::MaterialImage &)> const&)

## BRIEF

Обновляет материалы в наборе

## CONTENT

Доступ: public

Обновляет материалы в наборе

Параметры:
* Vector<Rc<stappler::xenolith::core::Material>> const& - новые материалы
* SpanView<stappler::xenolith::core::MaterialId> - материалы для удаления
* SpanView<stappler::xenolith::core::MaterialId> - динамические материалы
* Callback<Rc<stappler::xenolith::core::ImageView> (const stappler::xenolith::core::MaterialImage &)> const& - функция для создания отображений изображений

Возвращает:
* Vector<Rc<stappler::xenolith::core::Material>> - обновлеённые материалы в наборе

# ::stappler::xenolith::core::MaterialSet::getInfo() const

## BRIEF

Возвращает параметры буфера

## CONTENT

Доступ: public

Возвращает параметры буфера

Возвращает:
* stappler::xenolith::core::BufferInfo const&

# ::stappler::xenolith::core::MaterialSet::getObjectSize() const

## BRIEF

Вовращает размер одного материала в буфере

## CONTENT

Доступ: public

Вовращает размер одного материала в буфере

Возвращает:
* uint32_t

# ::stappler::xenolith::core::MaterialSet::getImagesInSet() const

## BRIEF

Число изображений

## CONTENT

Доступ: public

Число изображений

Возвращает:
* uint32_t

# ::stappler::xenolith::core::MaterialSet::getGeneration() const

## BRIEF

Поколение набора

## CONTENT

Доступ: public

Поколение набора

Возвращает:
* uint64_t

# ::stappler::xenolith::core::MaterialSet::getMaterials() const

## BRIEF

Возвращает активные материалы

## CONTENT

Доступ: public

Возвращает активные материалы

Возвращает:
* HashMap<stappler::xenolith::core::MaterialId, Rc<stappler::xenolith::core::Material>> const&

# ::stappler::xenolith::core::MaterialSet::setBuffer(Rc<stappler::xenolith::core::BufferObject>&&,HashMap<stappler::xenolith::core::MaterialId, uint32_t>&&)

## BRIEF

Устанавливает буфер материалов

## CONTENT

Доступ: public

Устанавливает буфер материалов

Параметры:
* Rc<stappler::xenolith::core::BufferObject>&&
* HashMap<stappler::xenolith::core::MaterialId, uint32_t>&&


# ::stappler::xenolith::core::MaterialSet::getBuffer() const

## BRIEF

Возвращает буфер материалов

## CONTENT

Доступ: public

Возвращает буфер материалов

Возвращает:
* Rc<stappler::xenolith::core::BufferObject>

# ::stappler::xenolith::core::MaterialSet::getOrdering() const

## BRIEF

Возвращает порядок упаковки материалов

## CONTENT

Доступ: public

Возвращает порядок упаковки материалов

Возвращает:
* HashMap<stappler::xenolith::core::MaterialId, uint32_t> const&

# ::stappler::xenolith::core::MaterialSet::getLayouts()

## BRIEF

Возвращает данные укладки материалов

## CONTENT

Доступ: public

Возвращает данные укладки материалов

Возвращает:
* Vector<stappler::xenolith::core::MaterialLayout>&

# ::stappler::xenolith::core::MaterialSet::getLayout(uint32_t) const

## BRIEF

Возвращает укладку по индексу

## CONTENT

Доступ: public

Возвращает укладку по индексу

Параметры:
* uint32_t

Возвращает:
* stappler::xenolith::core::MaterialLayout const*

# ::stappler::xenolith::core::MaterialSet::getMaterialById(stappler::xenolith::core::MaterialId) const

## BRIEF

Возвращает материал по идентификатору

## CONTENT

Доступ: public

Возвращает материал по идентификатору

Параметры:
* stappler::xenolith::core::MaterialId

Возвращает:
* stappler::xenolith::core::Material const*

# ::stappler::xenolith::core::MaterialSet::getMaterialOrder(stappler::xenolith::core::MaterialId) const

## BRIEF

Возвращает порядковый номер материала

## CONTENT

Доступ: public

Возвращает порядковый номер материала

Параметры:
* stappler::xenolith::core::MaterialId

Возвращает:
* uint32_t

# ::stappler::xenolith::core::MaterialSet::removeMaterial(stappler::xenolith::core::Material*)

## BRIEF

Удаляет материал из набора

## CONTENT

Доступ: protected

Удаляет материал из набора

Параметры:
* stappler::xenolith::core::Material*


# ::stappler::xenolith::core::MaterialSet::emplaceMaterialImages(stappler::xenolith::core::Material*,stappler::xenolith::core::Material*,Callback<Rc<stappler::xenolith::core::ImageView> (const stappler::xenolith::core::MaterialImage &)> const&)

## BRIEF

Заполняет изображения материала

## CONTENT

Доступ: protected

Заполняет изображения материала

Параметры:
* stappler::xenolith::core::Material*
* stappler::xenolith::core::Material*
* Callback<Rc<stappler::xenolith::core::ImageView> (const stappler::xenolith::core::MaterialImage &)> const&


# ::stappler::xenolith::core::MaterialSet::_info

## BRIEF

Параметры буфера

## CONTENT

Доступ: protected

Параметры буфера

Тип: stappler::xenolith::core::BufferInfo


# ::stappler::xenolith::core::MaterialSet::_encodeCallback

## BRIEF

Функция кодирования материала

## CONTENT

Доступ: protected

Функция кодирования материала

Тип: EncodeCallback


# ::stappler::xenolith::core::MaterialSet::_objectSize

## BRIEF

Размер одного материала в буфере

## CONTENT

Доступ: protected

Размер одного материала в буфере

Тип: uint32_t


# ::stappler::xenolith::core::MaterialSet::_imagesInSet

## BRIEF

Число изображений

## CONTENT

Доступ: protected

Число изображений

Тип: uint32_t


# ::stappler::xenolith::core::MaterialSet::_buffersInSet

## BRIEF

Число буферов

## CONTENT

Доступ: protected

Число буферов

Тип: uint32_t


# ::stappler::xenolith::core::MaterialSet::_generation

## BRIEF

Поколение набора

## CONTENT

Доступ: protected

Поколение набора

Тип: uint32_t


# ::stappler::xenolith::core::MaterialSet::_materials

## BRIEF

Материалы

## CONTENT

Доступ: protected

Материалы

Тип: HashMap<stappler::xenolith::core::MaterialId, Rc<stappler::xenolith::core::Material>>


# ::stappler::xenolith::core::MaterialSet::_ordering

## BRIEF

Порядок упаковки материалов

## CONTENT

Доступ: protected

Порядок упаковки материалов

Тип: HashMap<stappler::xenolith::core::MaterialId, uint32_t>


# ::stappler::xenolith::core::MaterialSet::_layouts

## BRIEF

Укладки материалов

## CONTENT

Доступ: protected

Укладки материалов

Тип: Vector<stappler::xenolith::core::MaterialLayout>


# ::stappler::xenolith::core::MaterialSet::_buffer

## BRIEF

Буфер материалов

## CONTENT

Доступ: protected

Буфер материалов

Тип: Rc<stappler::xenolith::core::BufferObject>


# ::stappler::xenolith::core::MaterialSet::_owner

## BRIEF

Исходное вложение

## CONTENT

Доступ: protected

Исходное вложение

Тип: stappler::xenolith::core::MaterialAttachment const*


# ::stappler::xenolith::core::Material

## BRIEF

Объект материала

## CONTENT

Объект материала. Объект неизменен во время работы.

Базовые классы:
* Ref


# ::stappler::xenolith::core::Material::MaterialIdInitial

## BRIEF

Начальный идентификатор

## CONTENT

Доступ: public

Начальный идентификатор

Тип: auto const


# ::stappler::xenolith::core::Material::PipelineData

## BRIEF

Данные используемого пайплайна

## CONTENT

Доступ: public

Данные используемого пайплайна


# ::stappler::xenolith::core::Material::~Material()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор


# ::stappler::xenolith::core::Material::init(stappler::xenolith::core::MaterialId,stappler::xenolith::core::Material::PipelineData const*,Vector<stappler::xenolith::core::MaterialImage>&&,Rc<stappler::mem_std::Ref>&&)

## BRIEF

Создаёт материал

## CONTENT

Доступ: public

Создаёт материал

Параметры:
* stappler::xenolith::core::MaterialId - идентификатор
* stappler::xenolith::core::Material::PipelineData const*
* Vector<stappler::xenolith::core::MaterialImage>&&
* Rc<stappler::mem_std::Ref>&&

Возвращает:
* bool

# ::stappler::xenolith::core::Material::init(stappler::xenolith::core::MaterialId,stappler::xenolith::core::Material::PipelineData const*,Rc<stappler::xenolith::core::DynamicImageInstance> const&,Rc<stappler::mem_std::Ref>&&)

## BRIEF

Создаёт материал

## CONTENT

Доступ: public

Создаёт материал

Параметры:
* stappler::xenolith::core::MaterialId - идентификатор
* stappler::xenolith::core::Material::PipelineData const*
* Rc<stappler::xenolith::core::DynamicImageInstance> const&
* Rc<stappler::mem_std::Ref>&&

Возвращает:
* bool

# ::stappler::xenolith::core::Material::init(stappler::xenolith::core::MaterialId,stappler::xenolith::core::Material::PipelineData const*,stappler::xenolith::core::ImageData const*,Rc<stappler::mem_std::Ref>&&,bool)

## BRIEF

Создаёт материал

## CONTENT

Доступ: public

Создаёт материал

Параметры:
* stappler::xenolith::core::MaterialId - идентификатор
* stappler::xenolith::core::Material::PipelineData const*
* stappler::xenolith::core::ImageData const*
* Rc<stappler::mem_std::Ref>&&
* bool

Возвращает:
* bool

# ::stappler::xenolith::core::Material::init(stappler::xenolith::core::MaterialId,stappler::xenolith::core::Material::PipelineData const*,stappler::xenolith::core::ImageData const*,stappler::xenolith::core::ColorMode,Rc<stappler::mem_std::Ref>&&,bool)

## BRIEF

Создаёт материал

## CONTENT

Доступ: public

Создаёт материал

Параметры:
* stappler::xenolith::core::MaterialId - идентификатор
* stappler::xenolith::core::Material::PipelineData const*
* stappler::xenolith::core::ImageData const*
* stappler::xenolith::core::ColorMode
* Rc<stappler::mem_std::Ref>&&
* bool

Возвращает:
* bool

# ::stappler::xenolith::core::Material::init(stappler::xenolith::core::Material const*,Rc<stappler::xenolith::core::ImageObject>&&,Rc<stappler::xenolith::core::DataAtlas>&&,Rc<stappler::mem_std::Ref>&&)

## BRIEF

Создаёт материал, копируя другой материал

## CONTENT

Доступ: public

Создаёт материал, копируя другой материал

Параметры:
* stappler::xenolith::core::Material const*
* Rc<stappler::xenolith::core::ImageObject>&&
* Rc<stappler::xenolith::core::DataAtlas>&&
* Rc<stappler::mem_std::Ref>&&

Возвращает:
* bool

# ::stappler::xenolith::core::Material::init(stappler::xenolith::core::Material const*,Vector<stappler::xenolith::core::MaterialImage>&&)

## BRIEF

Создаёт материал, копируя другой материал

## CONTENT

Доступ: public

Создаёт материал, копируя другой материал

Параметры:
* stappler::xenolith::core::Material const*
* Vector<stappler::xenolith::core::MaterialImage>&&

Возвращает:
* bool

# ::stappler::xenolith::core::Material::getId() const

## BRIEF

Возвращает идентиикатор

## CONTENT

Доступ: public

Возвращает идентиикатор

Возвращает:
* stappler::xenolith::core::MaterialId

# ::stappler::xenolith::core::Material::getPipeline() const

## BRIEF

Возвращает используемый пайплайн

## CONTENT

Доступ: public

Возвращает используемый пайплайн

Возвращает:
* PipelineData*

# ::stappler::xenolith::core::Material::getImages() const

## BRIEF

Возвращает изображения

## CONTENT

Доступ: public

Возвращает изображения

Возвращает:
* Vector<stappler::xenolith::core::MaterialImage> const&

# ::stappler::xenolith::core::Material::getLayoutIndex() const

## BRIEF

Возвращает индекс укладки

## CONTENT

Доступ: public

Возвращает индекс укладки

Возвращает:
* uint32_t

# ::stappler::xenolith::core::Material::setLayoutIndex(uint32_t)

## BRIEF

Устанавливает индекс укладки

## CONTENT

Доступ: public

Устанавливает индекс укладки

Параметры:
* uint32_t


# ::stappler::xenolith::core::Material::getAtlas() const

## BRIEF

Возвращает связанный атлас

## CONTENT

Доступ: public

Возвращает связанный атлас

Возвращает:
* Rc<stappler::xenolith::core::DataAtlas> const&

# ::stappler::xenolith::core::Material::getOwnedData() const

## BRIEF

Возвращает вложенные в материал данные

## CONTENT

Доступ: public

Возвращает вложенные в материал данные

Возвращает:
* stappler::xenolith::core::ImageData const*

# ::stappler::xenolith::core::Material::_dirty

## BRIEF

Флаг изменений

## CONTENT

Доступ: protected

Флаг изменений

Тип: bool


# ::stappler::xenolith::core::Material::_id

## BRIEF

Идентификатор

## CONTENT

Доступ: protected

Идентификатор

Тип: stappler::xenolith::core::MaterialId


# ::stappler::xenolith::core::Material::_layoutIndex

## BRIEF

Индекс укладки

## CONTENT

Доступ: protected

Индекс укладки

Тип: uint32_t


# ::stappler::xenolith::core::Material::_pipeline

## BRIEF

Пайплайн

## CONTENT

Доступ: protected

Пайплайн

Тип: PipelineData*


# ::stappler::xenolith::core::Material::_images

## BRIEF

Изображения

## CONTENT

Доступ: protected

Изображения

Тип: Vector<stappler::xenolith::core::MaterialImage>


# ::stappler::xenolith::core::Material::_atlas

## BRIEF

Атлас

## CONTENT

Доступ: protected

Атлас

Тип: Rc<stappler::xenolith::core::DataAtlas>


# ::stappler::xenolith::core::Material::_data

## BRIEF

Пользовательские данные

## CONTENT

Доступ: protected

Пользовательские данные

Тип: Rc<stappler::mem_std::Ref>


# ::stappler::xenolith::core::Material::_ownedData

## BRIEF

Данные, которыми владеет материал

## CONTENT

Доступ: protected

Данные, которыми владеет материал

Тип: stappler::xenolith::core::ImageData const*


# ::stappler::xenolith::core::MaterialAttachment

## BRIEF

Вложение для использования материалов

## CONTENT

Вложение для использования материалов

Базовые классы:
* BufferAttachment


# ::stappler::xenolith::core::MaterialAttachment::~MaterialAttachment()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор


# ::stappler::xenolith::core::MaterialAttachment::init(stappler::xenolith::core::Attachment::AttachmentBuilder&,stappler::xenolith::core::BufferInfo const&,MaterialSet::EncodeCallback&&,uint32_t)

## BRIEF

Создаёт вложение

## CONTENT

Доступ: public

Создаёт вложение

Параметры:
* stappler::xenolith::core::Attachment::AttachmentBuilder&
* stappler::xenolith::core::BufferInfo const& - параметры буфера
* MaterialSet::EncodeCallback&& - функция кодирования материала
* uint32_t - размер одного материала в буфере

Возвращает:
* bool

# ::stappler::xenolith::core::MaterialAttachment::addPredefinedMaterials(Vector<Rc<stappler::xenolith::core::Material>>&&)

## BRIEF

Добавляет предустановленные материалы

## CONTENT

Доступ: public

Добавляет предустановленные материалы

Параметры:
* Vector<Rc<stappler::xenolith::core::Material>>&&


# ::stappler::xenolith::core::MaterialAttachment::getMaterials() const

## BRIEF

Возвращает текущий набор материалов

## CONTENT

Доступ: public

Возвращает текущий набор материалов

Возвращает:
* Rc<stappler::xenolith::core::MaterialSet> const&

# ::stappler::xenolith::core::MaterialAttachment::setMaterials(Rc<stappler::xenolith::core::MaterialSet> const&) const

## BRIEF

Устанавливает текущий набор материалов

## CONTENT

Доступ: public

Устанавливает текущий набор материалов

Параметры:
* Rc<stappler::xenolith::core::MaterialSet> const&


# ::stappler::xenolith::core::MaterialAttachment::getPredefinedMaterials() const

## BRIEF

Возвращает предустановленные материалы

## CONTENT

Доступ: public

Возвращает предустановленные материалы

Возвращает:
* Vector<Rc<stappler::xenolith::core::Material>> const&

# ::stappler::xenolith::core::MaterialAttachment::allocateSet(stappler::xenolith::core::Device const&) const

## BRIEF

Создаёт новый набор материалов

## CONTENT

Доступ: public

Создаёт новый набор материалов

Параметры:
* stappler::xenolith::core::Device const&

Возвращает:
* Rc<stappler::xenolith::core::MaterialSet>

# ::stappler::xenolith::core::MaterialAttachment::cloneSet(Rc<stappler::xenolith::core::MaterialSet> const&) const

## BRIEF

Клонирует текущий набор материалов

## CONTENT

Доступ: public

Клонирует текущий набор материалов

Параметры:
* Rc<stappler::xenolith::core::MaterialSet> const&

Возвращает:
* Rc<stappler::xenolith::core::MaterialSet>

# ::stappler::xenolith::core::MaterialAttachment::addDynamicTracker(stappler::xenolith::core::MaterialId,Rc<stappler::xenolith::core::DynamicImage> const&) const

## BRIEF

Добавляет отслеживание динамического материала

## CONTENT

Доступ: public

Добавляет отслеживание динамического материала

Параметры:
* stappler::xenolith::core::MaterialId
* Rc<stappler::xenolith::core::DynamicImage> const&


# ::stappler::xenolith::core::MaterialAttachment::removeDynamicTracker(stappler::xenolith::core::MaterialId,Rc<stappler::xenolith::core::DynamicImage> const&) const

## BRIEF

Отключает отслеживание динамического материала

## CONTENT

Доступ: public

Отключает отслеживание динамического материала

Параметры:
* stappler::xenolith::core::MaterialId
* Rc<stappler::xenolith::core::DynamicImage> const&


# ::stappler::xenolith::core::MaterialAttachment::updateDynamicImage(stappler::xenolith::core::Loop&,stappler::xenolith::core::DynamicImage const*,Vector<Rc<stappler::xenolith::core::DependencyEvent>> const&) const

## BRIEF

Обновляет динамическое изображение

## CONTENT

Доступ: public

Обновляет динамическое изображение

Параметры:
* stappler::xenolith::core::Loop&
* stappler::xenolith::core::DynamicImage const*
* Vector<Rc<stappler::xenolith::core::DependencyEvent>> const&


# ::stappler::xenolith::core::MaterialAttachment::getNextMaterialId() const

## BRIEF

Возвращает следующий доступный идентификатор материалов

## CONTENT

Доступ: public

Возвращает следующий доступный идентификатор материалов

Возвращает:
* stappler::xenolith::core::MaterialId

# ::stappler::xenolith::core::MaterialAttachment::setCompiler(stappler::xenolith::core::Queue*)

## BRIEF

Устанавливает очередь для компиляции материалов

## CONTENT

Доступ: public

Устанавливает очередь для компиляции материалов

Параметры:
* stappler::xenolith::core::Queue*


# ::stappler::xenolith::core::MaterialAttachment::getCompiler() const

## BRIEF

Возвращает очередь для компиляции материалов

## CONTENT

Доступ: public

Возвращает очередь для компиляции материалов

Возвращает:
* stappler::xenolith::core::Queue*

# ::stappler::xenolith::core::MaterialAttachment::DynamicImageTracker

## BRIEF

Структура отслеживания динамического изображения

## CONTENT

Доступ: protected

Структура отслеживания динамического изображения

# ::stappler::xenolith::core::MaterialAttachment::DynamicImageTracker::refCount

## BRIEF

Число ссылок

## CONTENT

Число ссылок

Тип: uint32_t


# ::stappler::xenolith::core::MaterialAttachment::DynamicImageTracker::materials

## BRIEF

Связанные материалы

## CONTENT

Связанные материалы

Тип: Map<stappler::xenolith::core::MaterialId, uint32_t>


# ::stappler::xenolith::core::MaterialAttachment::_compiler

## BRIEF

Очередь компиляции

## CONTENT

Доступ: protected

Очередь компиляции

Тип: stappler::xenolith::core::Queue*


# ::stappler::xenolith::core::MaterialAttachment::_attachmentMaterialId

## BRIEF

Последний доступный идентификатор материала

## CONTENT

Доступ: protected

Последний доступный идентификатор материала

Тип: std::atomic<MaterialId>


# ::stappler::xenolith::core::MaterialAttachment::_materialObjectSize

## BRIEF

Размер объекта материала

## CONTENT

Доступ: protected

Размер объекта материала

Тип: uint32_t


# ::stappler::xenolith::core::MaterialAttachment::_encodeCallback

## BRIEF

Функция кодирования материалов

## CONTENT

Доступ: protected

Функция кодирования материалов

Тип: MaterialSet::EncodeCallback


# ::stappler::xenolith::core::MaterialAttachment::_data

## BRIEF

Текущий набор материалов

## CONTENT

Доступ: protected

Текущий набор материалов

Тип: Rc<stappler::xenolith::core::MaterialSet>


# ::stappler::xenolith::core::MaterialAttachment::_predefinedMaterials

## BRIEF

Предустановленные материалы

## CONTENT

Доступ: protected

Предустановленные материалы

Тип: Vector<Rc<stappler::xenolith::core::Material>>


# ::stappler::xenolith::core::MaterialAttachment::_dynamicMutex

## BRIEF

Мутекс

## CONTENT

Доступ: protected

Мутекс

Тип: stappler::mem_std::Mutex


# ::stappler::xenolith::core::MaterialAttachment::_dynamicTrackers

## BRIEF

Отслеживатели динамических изображений

## CONTENT

Доступ: protected

Отслеживатели динамических изображений

Тип: Map<Rc<stappler::xenolith::core::DynamicImage>, stappler::xenolith::core::MaterialAttachment::DynamicImageTracker>
