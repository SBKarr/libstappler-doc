Title: XLAssetLibrary.h


# XENOLITH_RESOURCES_ASSETS_XLASSETLIBRARY_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::storage::AssetComponentContainer

## BRIEF

## CONTENT

Базовые классы:
* ComponentContainer


# ::stappler::xenolith::storage::AssetComponentContainer::~AssetComponentContainer()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::storage::AssetComponentContainer::init(stappler::StringView,stappler::xenolith::storage::AssetLibrary*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView
* stappler::xenolith::storage::AssetLibrary*

Возвращает:
* bool

# ::stappler::xenolith::storage::AssetComponentContainer::handleStorageInit(storage::ComponentLoader&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* storage::ComponentLoader&


# ::stappler::xenolith::storage::AssetComponentContainer::handleStorageDisposed(db::Transaction const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* db::Transaction const&


# ::stappler::xenolith::storage::AssetComponentContainer::getLibrary() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::storage::AssetLibrary*

# ::stappler::xenolith::storage::AssetComponentContainer::getComponent() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::storage::AssetComponent*

# ::stappler::xenolith::storage::AssetComponentContainer::_library

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::storage::AssetLibrary*


# ::stappler::xenolith::storage::AssetComponentContainer::_component

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::storage::AssetComponent*


# ::stappler::xenolith::storage::AssetLibrary

## BRIEF

## CONTENT

Базовые классы:
* ApplicationExtension


# ::stappler::xenolith::storage::AssetLibrary::onLoaded

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::xenolith::EventHeader


# ::stappler::xenolith::storage::AssetLibrary::AssetCallback

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::storage::AssetLibrary::AssetVecCallback

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::storage::AssetLibrary::TaskCallback

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::storage::AssetLibrary::AssetRequest

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::storage::AssetLibrary::AssetRequest::url

## BRIEF

## CONTENT

Тип: stappler::mem_std::String


# ::stappler::xenolith::storage::AssetLibrary::AssetRequest::callback

## BRIEF

## CONTENT

Тип: stappler::xenolith::storage::AssetLibrary::AssetCallback


# ::stappler::xenolith::storage::AssetLibrary::AssetRequest::ttl

## BRIEF

## CONTENT

Тип: stappler::TimeInterval


# ::stappler::xenolith::storage::AssetLibrary::AssetRequest::ref

## BRIEF

## CONTENT

Тип: Rc<stappler::mem_std::Ref>


# ::stappler::xenolith::storage::AssetLibrary::AssetRequest::AssetRequest(stappler::StringView,stappler::xenolith::storage::AssetLibrary::AssetCallback&&,stappler::TimeInterval,Rc<stappler::mem_std::Ref>&&)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView
* stappler::xenolith::storage::AssetLibrary::AssetCallback&&
* stappler::TimeInterval
* Rc<stappler::mem_std::Ref>&&


# ::stappler::xenolith::storage::AssetLibrary::AssetMultiRequest

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::storage::AssetLibrary::AssetMultiRequest::vec

## BRIEF

## CONTENT

Тип: Vector<stappler::xenolith::storage::AssetLibrary::AssetRequest>


# ::stappler::xenolith::storage::AssetLibrary::AssetMultiRequest::callback

## BRIEF

## CONTENT

Тип: stappler::xenolith::storage::AssetLibrary::AssetVecCallback


# ::stappler::xenolith::storage::AssetLibrary::AssetMultiRequest::ref

## BRIEF

## CONTENT

Тип: Rc<stappler::mem_std::Ref>


# ::stappler::xenolith::storage::AssetLibrary::AssetMultiRequest::AssetMultiRequest(Vector<stappler::xenolith::storage::AssetLibrary::AssetRequest>&&,stappler::xenolith::storage::AssetLibrary::AssetVecCallback&&,Rc<stappler::mem_std::Ref>&&)

## BRIEF

## CONTENT

Параметры:
* Vector<stappler::xenolith::storage::AssetLibrary::AssetRequest>&&
* stappler::xenolith::storage::AssetLibrary::AssetVecCallback&&
* Rc<stappler::mem_std::Ref>&&


# ::stappler::xenolith::storage::AssetLibrary::getAssetPath(int64_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* int64_t

Возвращает:
* stappler::mem_std::String

# ::stappler::xenolith::storage::AssetLibrary::getAssetUrl(stappler::StringView)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView

Возвращает:
* stappler::mem_std::String

# ::stappler::xenolith::storage::AssetLibrary::~AssetLibrary()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::storage::AssetLibrary::init(stappler::xenolith::Application*,network::Controller*,stappler::mem_std::Value const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Application*
* network::Controller*
* stappler::mem_std::Value const&

Возвращает:
* bool

# ::stappler::xenolith::storage::AssetLibrary::initialize(stappler::xenolith::Application*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Application*


# ::stappler::xenolith::storage::AssetLibrary::invalidate(stappler::xenolith::Application*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Application*


# ::stappler::xenolith::storage::AssetLibrary::update(stappler::xenolith::Application*,stappler::xenolith::UpdateTime const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Application*
* stappler::xenolith::UpdateTime const&


# ::stappler::xenolith::storage::AssetLibrary::acquireAsset(stappler::StringView,stappler::xenolith::storage::AssetLibrary::AssetCallback&&,stappler::TimeInterval,Rc<stappler::mem_std::Ref>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView
* stappler::xenolith::storage::AssetLibrary::AssetCallback&&
* stappler::TimeInterval
* Rc<stappler::mem_std::Ref>&&

Возвращает:
* bool

# ::stappler::xenolith::storage::AssetLibrary::acquireAssets(SpanView<stappler::xenolith::storage::AssetLibrary::AssetRequest>,stappler::xenolith::storage::AssetLibrary::AssetVecCallback&&,Rc<stappler::mem_std::Ref>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* SpanView<stappler::xenolith::storage::AssetLibrary::AssetRequest>
* stappler::xenolith::storage::AssetLibrary::AssetVecCallback&&
* Rc<stappler::mem_std::Ref>&&

Возвращает:
* bool

# ::stappler::xenolith::storage::AssetLibrary::getLiveAsset(stappler::StringView) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView

Возвращает:
* stappler::xenolith::storage::Asset*

# ::stappler::xenolith::storage::AssetLibrary::getLiveAsset(int64_t) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* int64_t

Возвращает:
* stappler::xenolith::storage::Asset*

# ::stappler::xenolith::storage::AssetLibrary::perform(stappler::xenolith::storage::AssetLibrary::TaskCallback&&,stappler::mem_std::Ref*) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::storage::AssetLibrary::TaskCallback&&
* stappler::mem_std::Ref*

Возвращает:
* bool

# ::stappler::xenolith::storage::AssetLibrary::getApplication() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::Application*

# ::stappler::xenolith::storage::AssetLibrary::getController() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* network::Controller*

# ::stappler::xenolith::storage::AssetLibrary::addVersion(db::Transaction const&,int64_t,Asset::VersionData const&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* db::Transaction const&
* int64_t
* Asset::VersionData const&

Возвращает:
* int64_t

# ::stappler::xenolith::storage::AssetLibrary::eraseVersion(int64_t)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* int64_t


# ::stappler::xenolith::storage::AssetLibrary::setAssetDownload(int64_t,bool)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* int64_t
* bool


# ::stappler::xenolith::storage::AssetLibrary::setVersionComplete(int64_t,bool)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* int64_t
* bool


# ::stappler::xenolith::storage::AssetLibrary::removeAsset(stappler::xenolith::storage::Asset*)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::storage::Asset*


# ::stappler::xenolith::storage::AssetLibrary::downloadAsset(stappler::xenolith::storage::Asset*)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::storage::Asset*

Возвращает:
* network::Handle*

# ::stappler::xenolith::storage::AssetLibrary::cleanup()

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::storage::AssetLibrary::handleLibraryLoaded(Vector<Rc<stappler::xenolith::storage::Asset>>&&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* Vector<Rc<stappler::xenolith::storage::Asset>>&&


# ::stappler::xenolith::storage::AssetLibrary::handleAssetLoaded(Rc<stappler::xenolith::storage::Asset>&&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* Rc<stappler::xenolith::storage::Asset>&&


# ::stappler::xenolith::storage::AssetLibrary::_container

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::xenolith::storage::AssetComponentContainer>


# ::stappler::xenolith::storage::AssetLibrary::_loaded

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::storage::AssetLibrary::_callbacks

## BRIEF

## CONTENT

Доступ: protected

Тип: Map<stappler::mem_std::String, Vector<Pair<stappler::xenolith::storage::AssetLibrary::AssetCallback, Rc<stappler::mem_std::Ref>>>>


# ::stappler::xenolith::storage::AssetLibrary::_liveAssets

## BRIEF

## CONTENT

Доступ: protected

Тип: Vector<Rc<stappler::xenolith::storage::Asset>>


# ::stappler::xenolith::storage::AssetLibrary::_assetsByUrl

## BRIEF

## CONTENT

Доступ: protected

Тип: Map<stappler::StringView, stappler::xenolith::storage::Asset *>


# ::stappler::xenolith::storage::AssetLibrary::_assetsById

## BRIEF

## CONTENT

Доступ: protected

Тип: Map<uint64_t, stappler::xenolith::storage::Asset *>


# ::stappler::xenolith::storage::AssetLibrary::_application

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::Application*


# ::stappler::xenolith::storage::AssetLibrary::_controller

## BRIEF

## CONTENT

Доступ: protected

Тип: network::Controller*


# ::stappler::xenolith::storage::AssetLibrary::_server

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::xenolith::storage::Server>


# ::stappler::xenolith::storage::AssetLibrary::_tmpRequests

## BRIEF

## CONTENT

Доступ: protected

Тип: Vector<stappler::xenolith::storage::AssetLibrary::AssetRequest>


# ::stappler::xenolith::storage::AssetLibrary::_tmpMultiRequest

## BRIEF

## CONTENT

Доступ: protected

Тип: Vector<stappler::xenolith::storage::AssetLibrary::AssetMultiRequest>
