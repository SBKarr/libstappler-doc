Title: MaterialDataScroll.h


# XENOLITH_RENDERER_MATERIAL2D_COMPONENTS_SCROLL_MATERIALDATASCROLL_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::material2d::DataScroll

## BRIEF

## CONTENT

Базовые классы:
* ScrollView


# ::stappler::xenolith::material2d::DataScroll::Request

## BRIEF

## CONTENT

Доступ: public

Значения:
* Reset
* Update
* Front
* Back


# ::stappler::xenolith::material2d::DataScroll::ItemMap

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::material2d::DataScroll::DataMap

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::material2d::DataScroll::HandlerCallback

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::material2d::DataScroll::ItemCallback

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::material2d::DataScroll::LoaderCallback

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::material2d::DataScroll::~DataScroll()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::material2d::DataScroll::init(stappler::xenolith::material2d::DataSource*,stappler::xenolith::gui2d::ScrollViewBase::Layout)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::material2d::DataSource*
* stappler::xenolith::gui2d::ScrollViewBase::Layout

Возвращает:
* bool

# ::stappler::xenolith::material2d::DataScroll::onContentSizeDirty()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::material2d::DataScroll::reset()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::material2d::DataScroll::save() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::mem_std::Value

# ::stappler::xenolith::material2d::DataScroll::load(stappler::mem_std::Value const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::mem_std::Value const&


# ::stappler::xenolith::material2d::DataScroll::getItems() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* ItemMap&

# ::stappler::xenolith::material2d::DataScroll::setSource(stappler::xenolith::material2d::DataSource*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::material2d::DataSource*


# ::stappler::xenolith::material2d::DataScroll::getSource() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::material2d::DataSource*

# ::stappler::xenolith::material2d::DataScroll::setLookupLevel(uint32_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint32_t


# ::stappler::xenolith::material2d::DataScroll::getLookupLevel() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint32_t

# ::stappler::xenolith::material2d::DataScroll::setItemsForSubcats(bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* bool


# ::stappler::xenolith::material2d::DataScroll::isItemsForSubcat() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::material2d::DataScroll::setCategoryBounds(bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* bool


# ::stappler::xenolith::material2d::DataScroll::hasCategoryBounds() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::material2d::DataScroll::setLoaderSize(float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float


# ::stappler::xenolith::material2d::DataScroll::getLoaderSize() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* float

# ::stappler::xenolith::material2d::DataScroll::setMinLoadTime(stappler::TimeInterval)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::TimeInterval


# ::stappler::xenolith::material2d::DataScroll::getMinLoadTime() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::TimeInterval

# ::stappler::xenolith::material2d::DataScroll::setMaxSize(size_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* size_t


# ::stappler::xenolith::material2d::DataScroll::getMaxSize() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* size_t

# ::stappler::xenolith::material2d::DataScroll::setOriginId(DataSource::Id)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* DataSource::Id


# ::stappler::xenolith::material2d::DataScroll::getOriginId() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* DataSource::Id

# ::stappler::xenolith::material2d::DataScroll::setHandlerCallback(stappler::xenolith::material2d::DataScroll::HandlerCallback&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::material2d::DataScroll::HandlerCallback&&


# ::stappler::xenolith::material2d::DataScroll::setItemCallback(stappler::xenolith::material2d::DataScroll::ItemCallback&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::material2d::DataScroll::ItemCallback&&


# ::stappler::xenolith::material2d::DataScroll::setLoaderCallback(stappler::xenolith::material2d::DataScroll::LoaderCallback&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::material2d::DataScroll::LoaderCallback&&


# ::stappler::xenolith::material2d::DataScroll::onSourceDirty()

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::material2d::DataScroll::getMaxId() const

## BRIEF

## CONTENT

Доступ: protected

Возвращает:
* size_t

# ::stappler::xenolith::material2d::DataScroll::getSourceCategory(int64_t)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* int64_t

Возвращает:
* Pair<stappler::xenolith::material2d::DataSource *, bool>

# ::stappler::xenolith::material2d::DataScroll::requestSlice(DataSource::Id,size_t,stappler::xenolith::material2d::DataScroll::Request)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* DataSource::Id
* size_t
* stappler::xenolith::material2d::DataScroll::Request

Возвращает:
* bool

# ::stappler::xenolith::material2d::DataScroll::updateSlice()

## BRIEF

## CONTENT

Доступ: protected

Возвращает:
* bool

# ::stappler::xenolith::material2d::DataScroll::resetSlice()

## BRIEF

## CONTENT

Доступ: protected

Возвращает:
* bool

# ::stappler::xenolith::material2d::DataScroll::downloadFrontSlice(size_t)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* size_t

Возвращает:
* bool

# ::stappler::xenolith::material2d::DataScroll::downloadBackSlice(size_t)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* size_t

Возвращает:
* bool

# ::stappler::xenolith::material2d::DataScroll::onSliceData(stappler::xenolith::material2d::DataScroll::DataMap&,stappler::Time,stappler::xenolith::material2d::DataScroll::Request)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::material2d::DataScroll::DataMap&
* stappler::Time
* stappler::xenolith::material2d::DataScroll::Request


# ::stappler::xenolith::material2d::DataScroll::onSliceItems(stappler::xenolith::material2d::DataScroll::ItemMap&&,stappler::Time,stappler::xenolith::material2d::DataScroll::Request)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::material2d::DataScroll::ItemMap&&
* stappler::Time
* stappler::xenolith::material2d::DataScroll::Request


# ::stappler::xenolith::material2d::DataScroll::updateItems()

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::material2d::DataScroll::onHandler()

## BRIEF

## CONTENT

Доступ: protected

Возвращает:
* Rc<stappler::xenolith::material2d::DataScroll::Handler>

# ::stappler::xenolith::material2d::DataScroll::onItemRequest(ScrollController::Item const&,DataSource::Id)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* ScrollController::Item const&
* DataSource::Id

Возвращает:
* Rc<stappler::xenolith::material2d::Surface>

# ::stappler::xenolith::material2d::DataScroll::onLoaderRequest(stappler::xenolith::material2d::DataScroll::Request)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::material2d::DataScroll::Request

Возвращает:
* Rc<stappler::xenolith::material2d::DataScroll::Loader>

# ::stappler::xenolith::material2d::DataScroll::onOverscroll(float)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* float


# ::stappler::xenolith::material2d::DataScroll::updateIndicatorPosition()

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::material2d::DataScroll::_categoryLookupLevel

## BRIEF

## CONTENT

Доступ: protected

Тип: uint32_t


# ::stappler::xenolith::material2d::DataScroll::_itemsForSubcats

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::material2d::DataScroll::_categoryDirty

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::material2d::DataScroll::_useCategoryBounds

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::material2d::DataScroll::_sourceListener

## BRIEF

## CONTENT

Доступ: protected

Тип: DataListener<stappler::xenolith::material2d::DataSource>*


# ::stappler::xenolith::material2d::DataScroll::_dataRef

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::mem_std::Ref>


# ::stappler::xenolith::material2d::DataScroll::_handlerCallback

## BRIEF

## CONTENT

Доступ: protected

Тип: HandlerCallback


# ::stappler::xenolith::material2d::DataScroll::_itemCallback

## BRIEF

## CONTENT

Доступ: protected

Тип: ItemCallback


# ::stappler::xenolith::material2d::DataScroll::_loaderCallback

## BRIEF

## CONTENT

Доступ: protected

Тип: LoaderCallback


# ::stappler::xenolith::material2d::DataScroll::_currentSliceStart

## BRIEF

## CONTENT

Доступ: protected

Тип: DataSource::Id


# ::stappler::xenolith::material2d::DataScroll::_currentSliceLen

## BRIEF

## CONTENT

Доступ: protected

Тип: size_t


# ::stappler::xenolith::material2d::DataScroll::_sliceOrigin

## BRIEF

## CONTENT

Доступ: protected

Тип: DataSource::Id


# ::stappler::xenolith::material2d::DataScroll::_sliceMax

## BRIEF

## CONTENT

Доступ: protected

Тип: size_t


# ::stappler::xenolith::material2d::DataScroll::_sliceSize

## BRIEF

## CONTENT

Доступ: protected

Тип: size_t


# ::stappler::xenolith::material2d::DataScroll::_slicesCount

## BRIEF

## CONTENT

Доступ: protected

Тип: size_t


# ::stappler::xenolith::material2d::DataScroll::_itemsCount

## BRIEF

## CONTENT

Доступ: protected

Тип: size_t


# ::stappler::xenolith::material2d::DataScroll::_items

## BRIEF

## CONTENT

Доступ: protected

Тип: ItemMap


# ::stappler::xenolith::material2d::DataScroll::_invalidateAfter

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::Time


# ::stappler::xenolith::material2d::DataScroll::_savedSize

## BRIEF

## CONTENT

Доступ: protected

Тип: float


# ::stappler::xenolith::material2d::DataScroll::_loaderSize

## BRIEF

## CONTENT

Доступ: protected

Тип: float


# ::stappler::xenolith::material2d::DataScroll::_minLoadTime

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::TimeInterval


# ::stappler::xenolith::material2d::Loader

## BRIEF

## CONTENT

Базовые классы:
* Node


# ::stappler::xenolith::material2d::Loader::~Loader()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::material2d::Loader::init(Function<void ()> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Function<void ()> const&

Возвращает:
* bool

# ::stappler::xenolith::material2d::Loader::onContentSizeDirty()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::material2d::Loader::onEnter(stappler::xenolith::Scene*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Scene*


# ::stappler::xenolith::material2d::Loader::onExit()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::material2d::Loader::_icon

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::material2d::IconSprite*


# ::stappler::xenolith::material2d::Loader::_callback

## BRIEF

## CONTENT

Доступ: protected

Тип: Function<void ()>


# ::stappler::xenolith::material2d::Item

## BRIEF

## CONTENT

Базовые классы:
* Ref


# ::stappler::xenolith::material2d::Item::~Item()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::material2d::Item::init(stappler::mem_std::Value&&,stappler::xenolith::Vec2,stappler::xenolith::Size2)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::mem_std::Value&&
* stappler::xenolith::Vec2
* stappler::xenolith::Size2

Возвращает:
* bool

# ::stappler::xenolith::material2d::Item::getData() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::mem_std::Value const&

# ::stappler::xenolith::material2d::Item::getContentSize() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::Size2

# ::stappler::xenolith::material2d::Item::getPosition() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::Vec2

# ::stappler::xenolith::material2d::Item::setPosition(stappler::xenolith::Vec2)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Vec2


# ::stappler::xenolith::material2d::Item::setContentSize(stappler::xenolith::Size2)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Size2


# ::stappler::xenolith::material2d::Item::setId(uint64_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint64_t


# ::stappler::xenolith::material2d::Item::getId() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint64_t

# ::stappler::xenolith::material2d::Item::setControllerId(size_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* size_t


# ::stappler::xenolith::material2d::Item::getControllerId() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* size_t

# ::stappler::xenolith::material2d::Item::_id

## BRIEF

## CONTENT

Доступ: protected

Тип: uint64_t


# ::stappler::xenolith::material2d::Item::_size

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::Size2


# ::stappler::xenolith::material2d::Item::_position

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::Vec2


# ::stappler::xenolith::material2d::Item::_data

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::mem_std::Value


# ::stappler::xenolith::material2d::Item::_controllerId

## BRIEF

## CONTENT

Доступ: protected

Тип: size_t


# ::stappler::xenolith::material2d::Handler

## BRIEF

## CONTENT

Базовые классы:
* Ref


# ::stappler::xenolith::material2d::Handler::Request

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::material2d::Handler::DataMap

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::material2d::Handler::ItemMap

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::material2d::Handler::Layout

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::material2d::Handler::CompleteCallback

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::material2d::Handler::~Handler()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::material2d::Handler::init(stappler::xenolith::material2d::DataScroll*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::material2d::DataScroll*

Возвращает:
* bool

# ::stappler::xenolith::material2d::Handler::setCompleteCallback(stappler::xenolith::material2d::DataScroll::Handler::CompleteCallback&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::material2d::DataScroll::Handler::CompleteCallback&&


# ::stappler::xenolith::material2d::Handler::getCompleteCallback() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* CompleteCallback&

# ::stappler::xenolith::material2d::Handler::getContentSize() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::Size2

# ::stappler::xenolith::material2d::Handler::getScroll() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::material2d::DataScroll*

# ::stappler::xenolith::material2d::Handler::run(stappler::xenolith::material2d::DataScroll::Handler::Request,stappler::xenolith::material2d::DataScroll::Handler::DataMap&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::material2d::DataScroll::Handler::Request
* stappler::xenolith::material2d::DataScroll::Handler::DataMap&&

Возвращает:
* ItemMap

# ::stappler::xenolith::material2d::Handler::_size

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::Size2


# ::stappler::xenolith::material2d::Handler::_layout

## BRIEF

## CONTENT

Доступ: protected

Тип: Layout


# ::stappler::xenolith::material2d::Handler::_scroll

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::xenolith::material2d::DataScroll>


# ::stappler::xenolith::material2d::Handler::_callback

## BRIEF

## CONTENT

Доступ: protected

Тип: CompleteCallback
