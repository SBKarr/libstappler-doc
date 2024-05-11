Title: XLAsset.h


# XENOLITH_RESOURCES_ASSETS_XLASSET_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::storage::AssetVersionData

## BRIEF

## CONTENT


# ::stappler::xenolith::storage::AssetVersionData::complete

## BRIEF

## CONTENT

Тип: bool


# ::stappler::xenolith::storage::AssetVersionData::download

## BRIEF

## CONTENT

Тип: bool


# ::stappler::xenolith::storage::AssetVersionData::locked

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::xenolith::storage::AssetVersionData::id

## BRIEF

## CONTENT

Тип: int64_t


# ::stappler::xenolith::storage::AssetVersionData::ctime

## BRIEF

## CONTENT

Тип: stappler::Time


# ::stappler::xenolith::storage::AssetVersionData::mtime

## BRIEF

## CONTENT

Тип: stappler::Time


# ::stappler::xenolith::storage::AssetVersionData::size

## BRIEF

## CONTENT

Тип: size_t


# ::stappler::xenolith::storage::AssetVersionData::progress

## BRIEF

## CONTENT

Тип: float


# ::stappler::xenolith::storage::AssetVersionData::path

## BRIEF

## CONTENT

Тип: stappler::mem_std::String


# ::stappler::xenolith::storage::AssetVersionData::contentType

## BRIEF

## CONTENT

Тип: stappler::mem_std::String


# ::stappler::xenolith::storage::AssetVersionData::etag

## BRIEF

## CONTENT

Тип: stappler::mem_std::String


# ::stappler::xenolith::storage::AssetLock

## BRIEF

## CONTENT

Базовые классы:
* Ref


# ::stappler::xenolith::storage::AssetLock::~AssetLock()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::storage::AssetLock::getId() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* int64_t

# ::stappler::xenolith::storage::AssetLock::getCTime() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::Time

# ::stappler::xenolith::storage::AssetLock::getMTime() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::Time

# ::stappler::xenolith::storage::AssetLock::getSize() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* size_t

# ::stappler::xenolith::storage::AssetLock::getPath() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::StringView

# ::stappler::xenolith::storage::AssetLock::getContentType() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::StringView

# ::stappler::xenolith::storage::AssetLock::getEtag() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::StringView

# ::stappler::xenolith::storage::AssetLock::getCachePath() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::StringView

# ::stappler::xenolith::storage::AssetLock::getAsset() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Rc<stappler::xenolith::storage::Asset> const&

# ::stappler::xenolith::storage::AssetLock::getOwner() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::mem_std::Ref*

# ::stappler::xenolith::storage::AssetLock::AssetLock(Rc<stappler::xenolith::storage::Asset>&&,stappler::xenolith::storage::AssetVersionData const&,Function<void (const stappler::xenolith::storage::AssetVersionData &)>&&,stappler::mem_std::Ref*)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* Rc<stappler::xenolith::storage::Asset>&&
* stappler::xenolith::storage::AssetVersionData const&
* Function<void (const stappler::xenolith::storage::AssetVersionData &)>&&
* stappler::mem_std::Ref*


# ::stappler::xenolith::storage::AssetLock::_lockedVersion

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::storage::AssetVersionData


# ::stappler::xenolith::storage::AssetLock::_releaseFunction

## BRIEF

## CONTENT

Доступ: protected

Тип: Function<void (const stappler::xenolith::storage::AssetVersionData &)>


# ::stappler::xenolith::storage::AssetLock::_asset

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::xenolith::storage::Asset>


# ::stappler::xenolith::storage::AssetLock::_owner

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::mem_std::Ref>


# ::stappler::xenolith::storage::Asset

## BRIEF

## CONTENT

Базовые классы:
* Subscription


# ::stappler::xenolith::storage::Asset::VersionData

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::storage::Asset::Update

## BRIEF

## CONTENT

Доступ: public

Значения:
* CacheDataUpdated
* DownloadStarted
* DownloadProgress
* DownloadCompleted
* DownloadSuccessful
* DownloadFailed


# ::stappler::xenolith::storage::Asset::Asset(stappler::xenolith::storage::AssetLibrary*,db::Value const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::storage::AssetLibrary*
* db::Value const&


# ::stappler::xenolith::storage::Asset::~Asset()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::storage::Asset::lockVersion(int64_t,stappler::mem_std::Ref*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* int64_t
* stappler::mem_std::Ref*

Возвращает:
* Rc<stappler::xenolith::storage::AssetLock>

# ::stappler::xenolith::storage::Asset::lockReadableVersion(stappler::mem_std::Ref*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::mem_std::Ref*

Возвращает:
* Rc<stappler::xenolith::storage::AssetLock>

# ::stappler::xenolith::storage::Asset::getId() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* int64_t

# ::stappler::xenolith::storage::Asset::getUrl() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::StringView

# ::stappler::xenolith::storage::Asset::getCachePath() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::StringView

# ::stappler::xenolith::storage::Asset::getTouch() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::Time

# ::stappler::xenolith::storage::Asset::getTtl() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::TimeInterval

# ::stappler::xenolith::storage::Asset::getContentType() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::StringView

# ::stappler::xenolith::storage::Asset::download()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::storage::Asset::touch(stappler::Time)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::Time


# ::stappler::xenolith::storage::Asset::clear()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::storage::Asset::isDownloadAvailable() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::storage::Asset::isDownloadInProgress() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::storage::Asset::getProgress() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* float

# ::stappler::xenolith::storage::Asset::getReadableVersionId() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* int64_t

# ::stappler::xenolith::storage::Asset::isStorageDirty() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::storage::Asset::setStorageDirty(bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* bool


# ::stappler::xenolith::storage::Asset::setData(stappler::mem_std::Value const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::mem_std::Value const&


# ::stappler::xenolith::storage::Asset::setData(stappler::mem_std::Value&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::mem_std::Value&&


# ::stappler::xenolith::storage::Asset::getData() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::mem_std::Value const&

# ::stappler::xenolith::storage::Asset::encode() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::mem_std::Value

# ::stappler::xenolith::storage::Asset::getReadableVersion() const

## BRIEF

## CONTENT

Доступ: protected

Возвращает:
* VersionData*

# ::stappler::xenolith::storage::Asset::parseVersions(db::Value const&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* db::Value const&


# ::stappler::xenolith::storage::Asset::startNewDownload(stappler::Time,stappler::StringView)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::Time
* stappler::StringView

Возвращает:
* bool

# ::stappler::xenolith::storage::Asset::resumeDownload(stappler::xenolith::storage::Asset::VersionData&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::storage::Asset::VersionData&

Возвращает:
* bool

# ::stappler::xenolith::storage::Asset::setDownloadProgress(int64_t,float)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* int64_t
* float


# ::stappler::xenolith::storage::Asset::setDownloadComplete(stappler::xenolith::storage::Asset::VersionData&,bool)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::storage::Asset::VersionData&
* bool


# ::stappler::xenolith::storage::Asset::setFileValidated(bool)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* bool


# ::stappler::xenolith::storage::Asset::replaceVersion(stappler::xenolith::storage::Asset::VersionData&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::storage::Asset::VersionData&


# ::stappler::xenolith::storage::Asset::addVersion(stappler::xenolith::storage::AssetDownloadData*)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::storage::AssetDownloadData*


# ::stappler::xenolith::storage::Asset::dropVersion(stappler::xenolith::storage::Asset::VersionData const&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::storage::Asset::VersionData const&


# ::stappler::xenolith::storage::Asset::releaseLock(stappler::xenolith::storage::Asset::VersionData const&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::storage::Asset::VersionData const&


# ::stappler::xenolith::storage::Asset::_path

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::mem_std::String


# ::stappler::xenolith::storage::Asset::_cache

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::mem_std::String


# ::stappler::xenolith::storage::Asset::_url

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::mem_std::String


# ::stappler::xenolith::storage::Asset::_ttl

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::TimeInterval


# ::stappler::xenolith::storage::Asset::_touch

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::Time


# ::stappler::xenolith::storage::Asset::_mtime

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::Time


# ::stappler::xenolith::storage::Asset::_id

## BRIEF

## CONTENT

Доступ: protected

Тип: int64_t


# ::stappler::xenolith::storage::Asset::_downloadId

## BRIEF

## CONTENT

Доступ: protected

Тип: int64_t


# ::stappler::xenolith::storage::Asset::_versions

## BRIEF

## CONTENT

Доступ: protected

Тип: Vector<stappler::xenolith::storage::Asset::VersionData>


# ::stappler::xenolith::storage::Asset::_data

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::mem_std::Value


# ::stappler::xenolith::storage::Asset::_library

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::storage::AssetLibrary*


# ::stappler::xenolith::storage::Asset::_download

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::storage::Asset::_dirty

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::storage::Asset::_mutex

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::mem_std::Mutex
