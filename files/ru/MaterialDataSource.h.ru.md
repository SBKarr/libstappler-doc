Title: MaterialDataSource.h


# XENOLITH_RENDERER_MATERIAL2D_BASE_MATERIALDATASOURCE_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::material2d::DataSource

## BRIEF

## CONTENT

Базовые классы:
* Subscription


# ::stappler::xenolith::material2d::DataSource::ChildsCount

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::material2d::DataSource::Self

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::SubscriptionTemplate<stappler::memory::StandartInterface>::Id


# ::stappler::xenolith::material2d::DataSource::Id

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::material2d::DataSource::BatchCallback

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::material2d::DataSource::BatchSourceCallback

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::material2d::DataSource::DataCallback

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::material2d::DataSource::DataSourceCallback

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::material2d::DataSource::RemoveSourceCallback

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::material2d::DataSource::~DataSource()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::material2d::DataSource::init<class,class>(T const&,Args &&...)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* class T
* class Args

Параметры:
* T const&
* Args &&...

Возвращает:
* bool

# ::stappler::xenolith::material2d::DataSource::init()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::material2d::DataSource::getCategory(size_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* size_t

Возвращает:
* stappler::xenolith::material2d::DataSource*

# ::stappler::xenolith::material2d::DataSource::getCount(uint32_t,bool) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint32_t
* bool

Возвращает:
* size_t

# ::stappler::xenolith::material2d::DataSource::getSubcatCount() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* size_t

# ::stappler::xenolith::material2d::DataSource::getItemsCount() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* size_t

# ::stappler::xenolith::material2d::DataSource::getGlobalCount() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* size_t

# ::stappler::xenolith::material2d::DataSource::setCategoryBounds(stappler::xenolith::material2d::DataSource::Id&,size_t&,uint32_t,bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::material2d::DataSource::Id&
* size_t&
* uint32_t
* bool


# ::stappler::xenolith::material2d::DataSource::getItemData(stappler::xenolith::material2d::DataSource::DataCallback const&,stappler::xenolith::material2d::DataSource::Id)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::material2d::DataSource::DataCallback const&
* stappler::xenolith::material2d::DataSource::Id

Возвращает:
* bool

# ::stappler::xenolith::material2d::DataSource::getItemData(stappler::xenolith::material2d::DataSource::DataCallback const&,stappler::xenolith::material2d::DataSource::Id,uint32_t,bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::material2d::DataSource::DataCallback const&
* stappler::xenolith::material2d::DataSource::Id
* uint32_t
* bool

Возвращает:
* bool

# ::stappler::xenolith::material2d::DataSource::getSliceData(stappler::xenolith::material2d::DataSource::BatchCallback const&,stappler::xenolith::material2d::DataSource::Id,size_t,uint32_t,bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::material2d::DataSource::BatchCallback const&
* stappler::xenolith::material2d::DataSource::Id
* size_t
* uint32_t
* bool

Возвращает:
* size_t

# ::stappler::xenolith::material2d::DataSource::removeItem(stappler::xenolith::material2d::DataSource::Id,stappler::mem_std::Value const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::material2d::DataSource::Id
* stappler::mem_std::Value const&

Возвращает:
* bool

# ::stappler::xenolith::material2d::DataSource::removeItem(stappler::xenolith::material2d::DataSource::Id,stappler::mem_std::Value const&,uint32_t,bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::material2d::DataSource::Id
* stappler::mem_std::Value const&
* uint32_t
* bool

Возвращает:
* bool

# ::stappler::xenolith::material2d::DataSource::getItemCategory(stappler::xenolith::material2d::DataSource::Id,uint32_t,bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::material2d::DataSource::Id
* uint32_t
* bool

Возвращает:
* std::pair<DataSource *, bool>

# ::stappler::xenolith::material2d::DataSource::getId() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Id

# ::stappler::xenolith::material2d::DataSource::setSubCategories(Vector<Rc<stappler::xenolith::material2d::DataSource>> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Vector<Rc<stappler::xenolith::material2d::DataSource>> const&


# ::stappler::xenolith::material2d::DataSource::setSubCategories(Vector<Rc<stappler::xenolith::material2d::DataSource>>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Vector<Rc<stappler::xenolith::material2d::DataSource>>&&


# ::stappler::xenolith::material2d::DataSource::getSubCategories() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Vector<Rc<stappler::xenolith::material2d::DataSource>> const&

# ::stappler::xenolith::material2d::DataSource::setChildsCount(size_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* size_t


# ::stappler::xenolith::material2d::DataSource::getChildsCount() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* size_t

# ::stappler::xenolith::material2d::DataSource::setData(stappler::mem_std::Value const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::mem_std::Value const&


# ::stappler::xenolith::material2d::DataSource::setData(stappler::mem_std::Value&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::mem_std::Value&&


# ::stappler::xenolith::material2d::DataSource::getData() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::mem_std::Value const&

# ::stappler::xenolith::material2d::DataSource::clear()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::material2d::DataSource::addSubcategry(stappler::xenolith::material2d::DataSource*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::material2d::DataSource*


# ::stappler::xenolith::material2d::DataSource::setDirty()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::material2d::DataSource::onSlice(std::vector<Slice>&,size_t&,size_t&,uint32_t,bool)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* std::vector<Slice>&
* size_t&
* size_t&
* uint32_t
* bool


# ::stappler::xenolith::material2d::DataSource::initValue()

## BRIEF

## CONTENT

Доступ: protected

Возвращает:
* bool

# ::stappler::xenolith::material2d::DataSource::initValue(stappler::xenolith::material2d::DataSource::DataSourceCallback const&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::material2d::DataSource::DataSourceCallback const&

Возвращает:
* bool

# ::stappler::xenolith::material2d::DataSource::initValue(stappler::xenolith::material2d::DataSource::BatchSourceCallback const&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::material2d::DataSource::BatchSourceCallback const&

Возвращает:
* bool

# ::stappler::xenolith::material2d::DataSource::initValue(stappler::xenolith::material2d::DataSource::Id const&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::material2d::DataSource::Id const&

Возвращает:
* bool

# ::stappler::xenolith::material2d::DataSource::initValue(stappler::xenolith::material2d::DataSource::ChildsCount const&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::material2d::DataSource::ChildsCount const&

Возвращает:
* bool

# ::stappler::xenolith::material2d::DataSource::initValue(stappler::mem_std::Value const&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::mem_std::Value const&

Возвращает:
* bool

# ::stappler::xenolith::material2d::DataSource::initValue(stappler::mem_std::Value&&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::mem_std::Value&&

Возвращает:
* bool

# ::stappler::xenolith::material2d::DataSource::onSliceRequest(stappler::xenolith::material2d::DataSource::BatchCallback const&,Id::Type,size_t)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::material2d::DataSource::BatchCallback const&
* Id::Type
* size_t


# ::stappler::xenolith::material2d::DataSource::_subCats

## BRIEF

## CONTENT

Доступ: protected

Тип: Vector<Rc<stappler::xenolith::material2d::DataSource>>


# ::stappler::xenolith::material2d::DataSource::_categoryId

## BRIEF

## CONTENT

Доступ: protected

Тип: Id


# ::stappler::xenolith::material2d::DataSource::_count

## BRIEF

## CONTENT

Доступ: protected

Тип: size_t


# ::stappler::xenolith::material2d::DataSource::_orphanCount

## BRIEF

## CONTENT

Доступ: protected

Тип: size_t


# ::stappler::xenolith::material2d::DataSource::_data

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::mem_std::Value


# ::stappler::xenolith::material2d::DataSource::_sourceCallback

## BRIEF

## CONTENT

Доступ: protected

Тип: DataSourceCallback


# ::stappler::xenolith::material2d::DataSource::_batchCallback

## BRIEF

## CONTENT

Доступ: protected

Тип: BatchSourceCallback


# ::stappler::xenolith::material2d::DataSource::_removeCallback

## BRIEF

## CONTENT

Доступ: protected

Тип: RemoveSourceCallback
