Title: XLAsset.h


# XENOLITH_RESOURCES_ASSETS_XLASSET_H_

## BRIEF

Заголовок внешнего ресурса

## CONTENT

Заголовок внешнего ресурса. Внешний ресурс приложение получает извне по сети, может автоматически обновлять его, хранить несколько версий ресурса.


# ::stappler::xenolith::storage::AssetVersionData

## BRIEF

Данные конкретной версии ресурса

## CONTENT

Данные конкретной версии ресурса


# ::stappler::xenolith::storage::AssetVersionData::complete

## BRIEF

Флаг завершённости загрузки

## CONTENT

Флаг завершённости загрузки

Тип: bool


# ::stappler::xenolith::storage::AssetVersionData::download

## BRIEF

Флаг длящейся загрузки

## CONTENT

Флаг длящейся загрузки

Тип: bool


# ::stappler::xenolith::storage::AssetVersionData::locked

## BRIEF

Флаг блокировки на запись ресурса

## CONTENT

Флаг блокировки на запись ресурса

Тип: uint32_t


# ::stappler::xenolith::storage::AssetVersionData::id

## BRIEF

Идентификатор версии

## CONTENT

Идентификатор версии

Тип: int64_t


# ::stappler::xenolith::storage::AssetVersionData::ctime

## BRIEF

Время создания версии

## CONTENT

Время создания версии

Тип: stappler::Time


# ::stappler::xenolith::storage::AssetVersionData::mtime

## BRIEF

Время обновления версии

## CONTENT

Время обновления версии

Тип: stappler::Time


# ::stappler::xenolith::storage::AssetVersionData::size

## BRIEF

Размер ресурса

## CONTENT

Размер ресурса

Тип: size_t


# ::stappler::xenolith::storage::AssetVersionData::progress

## BRIEF

Прогресс загрузки

## CONTENT

Прогресс загрузки

Тип: float


# ::stappler::xenolith::storage::AssetVersionData::path

## BRIEF

Путь к файлу ресурса

## CONTENT

Путь к файлу ресурса

Тип: stappler::mem_std::String


# ::stappler::xenolith::storage::AssetVersionData::contentType

## BRIEF

Тип ресурса

## CONTENT

Тип ресурса

Тип: stappler::mem_std::String


# ::stappler::xenolith::storage::AssetVersionData::etag

## BRIEF

Тег ресурса

## CONTENT

Тег ресурса

Тип: stappler::mem_std::String


# ::stappler::xenolith::storage::AssetLock

## BRIEF

Структура блокировки версии ресурса

## CONTENT

Структура блокировки версии ресурса. Версия ресурса заблокирована, пока такой объект существует.

Базовые классы:
* Ref


# ::stappler::xenolith::storage::AssetLock::~AssetLock()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор


# ::stappler::xenolith::storage::AssetLock::getId() const

## BRIEF

Получает идентификатор версии

## CONTENT

Доступ: public

Получает идентификатор версии

Возвращает:
* int64_t

# ::stappler::xenolith::storage::AssetLock::getCTime() const

## BRIEF

Получает время создания версии

## CONTENT

Доступ: public

Получает время создания версии

Возвращает:
* stappler::Time

# ::stappler::xenolith::storage::AssetLock::getMTime() const

## BRIEF

Получает время обновления версии

## CONTENT

Доступ: public

Получает время обновления версии

Возвращает:
* stappler::Time

# ::stappler::xenolith::storage::AssetLock::getSize() const

## BRIEF

Полчает размер ресурса текущей версии

## CONTENT

Доступ: public

Полчает размер ресурса текущей версии

Возвращает:
* size_t

# ::stappler::xenolith::storage::AssetLock::getPath() const

## BRIEF

Возвращает путь к ресурсу в файловой системе

## CONTENT

Доступ: public

Возвращает путь к ресурсу в файловой системе

Возвращает:
* stappler::StringView

# ::stappler::xenolith::storage::AssetLock::getContentType() const

## BRIEF

Возвращает тип содержимого ресурса

## CONTENT

Доступ: public

Возвращает тип содержимого ресурса

Возвращает:
* stappler::StringView

# ::stappler::xenolith::storage::AssetLock::getEtag() const

## BRIEF

Возвращает тег версии

## CONTENT

Доступ: public

Возвращает тег версии

Возвращает:
* stappler::StringView

# ::stappler::xenolith::storage::AssetLock::getCachePath() const

## BRIEF

Возвращает путь для хранения кеша версии

## CONTENT

Доступ: public

Возвращает путь для хранения кеша версии

Возвращает:
* stappler::StringView

# ::stappler::xenolith::storage::AssetLock::getAsset() const

## BRIEF

Возвращает ресурс

## CONTENT

Доступ: public

Возвращает ресурс

Возвращает:
* Rc<stappler::xenolith::storage::Asset> const&

# ::stappler::xenolith::storage::AssetLock::getOwner() const

## BRIEF

Возвращает владельца блокировки

## CONTENT

Доступ: public

Возвращает владельца блокировки

Возвращает:
* stappler::mem_std::Ref*

# ::stappler::xenolith::storage::AssetLock::AssetLock(Rc<stappler::xenolith::storage::Asset>&&,stappler::xenolith::storage::AssetVersionData const&,Function<void (const stappler::xenolith::storage::AssetVersionData &)>&&,stappler::mem_std::Ref*)

## BRIEF

Создаёт блокировку

## CONTENT

Доступ: protected

Создаёт блокировку

Параметры:
* Rc<stappler::xenolith::storage::Asset>&& - ресурс
* stappler::xenolith::storage::AssetVersionData const& - данные версии
* Function<void (const stappler::xenolith::storage::AssetVersionData &)>&& - фнкция разблокировки ресурса
* stappler::mem_std::Ref* - владелец блокировки


# ::stappler::xenolith::storage::AssetLock::_lockedVersion

## BRIEF

Блокированная версия

## CONTENT

Доступ: protected

Блокированная версия

Тип: stappler::xenolith::storage::AssetVersionData


# ::stappler::xenolith::storage::AssetLock::_releaseFunction

## BRIEF

Функция снятия блокировки

## CONTENT

Доступ: protected

Функция снятия блокировки

Тип: Function<void (const stappler::xenolith::storage::AssetVersionData &)>


# ::stappler::xenolith::storage::AssetLock::_asset

## BRIEF

Ресурс

## CONTENT

Доступ: protected

Ресурс

Тип: Rc<stappler::xenolith::storage::Asset>


# ::stappler::xenolith::storage::AssetLock::_owner

## BRIEF

Владелец блокировки

## CONTENT

Доступ: protected

Владелец блокировки

Тип: Rc<stappler::mem_std::Ref>


# ::stappler::xenolith::storage::Asset

## BRIEF

Тип ресурса

## CONTENT

Тип ресурса. реализуется поверх типа подписки. Объекты могут подписываться на изменения ресурса.

Базовые классы:
* Subscription


# ::stappler::xenolith::storage::Asset::VersionData

## BRIEF

Тип данных версии ресурса

## CONTENT

Доступ: public

Тип данных версии ресурса

# ::stappler::xenolith::storage::Asset::Update

## BRIEF

Флаги обновления для подписки

## CONTENT

Доступ: public

Флаги обновления для подписки

Значения:
* CacheDataUpdated
* DownloadStarted
* DownloadProgress
* DownloadCompleted
* DownloadSuccessful
* DownloadFailed


# ::stappler::xenolith::storage::Asset::Asset(stappler::xenolith::storage::AssetLibrary*,db::Value const&)

## BRIEF

Создаёт ресурс

## CONTENT

Доступ: public

Создаёт ресурс

Параметры:
* stappler::xenolith::storage::AssetLibrary* - библиотека ресурсов
* db::Value const& - данные ресурса


# ::stappler::xenolith::storage::Asset::~Asset()

## BRIEF

Деструктор

## CONTENT

Деструктор

Доступ: public


# ::stappler::xenolith::storage::Asset::lockVersion(int64_t,stappler::mem_std::Ref*)

## BRIEF

Блокирует версию ресурса

## CONTENT

Доступ: public

Блокирует версию ресурса. Версия должна быть доступна для чтения.

Параметры:
* int64_t - идентификатор версии
* stappler::mem_std::Ref* - хозяин блокировки

Возвращает:
* Rc<stappler::xenolith::storage::AssetLock> - объект блокировки или nullptr

# ::stappler::xenolith::storage::Asset::lockReadableVersion(stappler::mem_std::Ref*)

## BRIEF

Блокирует первую доступную на чтение версию

## CONTENT

Доступ: public

Блокирует первую доступную на чтение версию

Параметры:
* stappler::mem_std::Ref* - хозяин блокировки

Возвращает:
* Rc<stappler::xenolith::storage::AssetLock> - объект блокировки или nullptr

# ::stappler::xenolith::storage::Asset::getId() const

## BRIEF

Возвращает идентификатор

## CONTENT

Доступ: public

Возвращает идентификатор

Возвращает:
* int64_t

# ::stappler::xenolith::storage::Asset::getUrl() const

## BRIEF

Возвращает URL доступа к ресурсу

## CONTENT

Доступ: public

Возвращает URL доступа к ресурсу

Возвращает:
* stappler::StringView

# ::stappler::xenolith::storage::Asset::getCachePath() const

## BRIEF

Возвращает путь для данных кеша ресурса

## CONTENT

Доступ: public

Возвращает путь для данных кеша ресурса

Возвращает:
* stappler::StringView

# ::stappler::xenolith::storage::Asset::getTouch() const

## BRIEF

Возвращает время последнего доступа к ресурсу

## CONTENT

Доступ: public

Возвращает время последнего доступа к ресурсу

Возвращает:
* stappler::Time

# ::stappler::xenolith::storage::Asset::getTtl() const

## BRIEF

Возвращает время жизни ресурса

## CONTENT

Доступ: public

Возвращает время жизни ресурса. По истечению времени жизни данные ресурса удаляются приложением.

Возвращает:
* stappler::TimeInterval

# ::stappler::xenolith::storage::Asset::getContentType() const

## BRIEF

Возвращает тип содержимого последней доступной версии ресурса

## CONTENT

Доступ: public

Возвращает тип содержимого последней доступной версии ресурса

Возвращает:
* stappler::StringView

# ::stappler::xenolith::storage::Asset::download()

## BRIEF

Начинает загрузку ресурса

## CONTENT

Доступ: public

Начинает загрузку ресурса. Загрузка продолжается, пока как минимум одна версия не станет доступна для чтения. Статус загрузки сохраняется между сеансами прилоежния.

Возвращает:
* bool

# ::stappler::xenolith::storage::Asset::touch(stappler::Time)

## BRIEF

Обновляет время доступа к ресурсу

## CONTENT

Доступ: public

Обновляет время доступа к ресурсу

Параметры:
* stappler::Time


# ::stappler::xenolith::storage::Asset::clear()

## BRIEF

Удаляет данные и кеши ресурса

## CONTENT

Доступ: public

Удаляет данные и кеши ресурса



# ::stappler::xenolith::storage::Asset::isDownloadAvailable() const

## BRIEF

Проверяет, возможна ли загрузка ресурса

## CONTENT

Доступ: public

Проверяет, возможна ли загрузка ресурса

Возвращает:
* bool

# ::stappler::xenolith::storage::Asset::isDownloadInProgress() const

## BRIEF

Проверяет, находится ли ресурс в процессе загрузки

## CONTENT

Доступ: public

Проверяет, находится ли ресурс в процессе загрузки

Возвращает:
* bool

# ::stappler::xenolith::storage::Asset::getProgress() const

## BRIEF

Возвращает прогресс загрузки

## CONTENT

Доступ: public

Возвращает прогресс загрузки

Возвращает:
* float

# ::stappler::xenolith::storage::Asset::getReadableVersionId() const

## BRIEF

Возвращает идентификатор версии, доступной для чтения

## CONTENT

Доступ: public

Возвращает идентификатор версии, доступной для чтения

Возвращает:
* int64_t - 0 или идентификатор версии

# ::stappler::xenolith::storage::Asset::isStorageDirty() const

## BRIEF

Проверяет, обновлены ли хранимые данные ресурса

## CONTENT

Доступ: public

Проверяет, обновлены ли хранимые данные ресурса

Возвращает:
* bool

# ::stappler::xenolith::storage::Asset::setStorageDirty(bool)

## BRIEF

Устанавливает флаг обновления данных

## CONTENT

Доступ: public

Устанавливает флаг обновления данных. Данные будут сохранены в библиотеке при первой возможности.

Параметры:
* bool


# ::stappler::xenolith::storage::Asset::setData(stappler::mem_std::Value const&)

## BRIEF

Устанавливает связанные данные ресурса

## CONTENT

Доступ: public

Устанавливает связанные данные ресурса

Параметры:
* stappler::mem_std::Value const&


# ::stappler::xenolith::storage::Asset::setData(stappler::mem_std::Value&&)

## BRIEF

Устанавливает связанные данные ресурса

## CONTENT

Доступ: public

Устанавливает связанные данные ресурса

Параметры:
* stappler::mem_std::Value&&


# ::stappler::xenolith::storage::Asset::getData() const

## BRIEF

Получает связанные данные ресурса

## CONTENT

Доступ: public

Получает связанные данные ресурса

Возвращает:
* stappler::mem_std::Value const&

# ::stappler::xenolith::storage::Asset::encode() const

## BRIEF

ККодирует данные ресурса для сохранения

## CONTENT

Доступ: public

ККодирует данные ресурса для сохранения

Возвращает:
* stappler::mem_std::Value

# ::stappler::xenolith::storage::Asset::getReadableVersion() const

## BRIEF

Возвращает версию, доступную для чтения

## CONTENT

Доступ: protected

Возвращает версию, доступную для чтения

Возвращает:
* VersionData*

# ::stappler::xenolith::storage::Asset::parseVersions(db::Value const&)

## BRIEF

Разбирает данные версий

## CONTENT

Доступ: protected

Разбирает данные версий

Параметры:
* db::Value const&


# ::stappler::xenolith::storage::Asset::startNewDownload(stappler::Time,stappler::StringView)

## BRIEF

Начинает новую загрузку

## CONTENT

Доступ: protected

Начинает новую загрузку

Параметры:
* stappler::Time
* stappler::StringView

Возвращает:
* bool

# ::stappler::xenolith::storage::Asset::resumeDownload(stappler::xenolith::storage::Asset::VersionData&)

## BRIEF

Возобновляет загрузку

## CONTENT

Доступ: protected

Возобновляет загрузку

Параметры:
* stappler::xenolith::storage::Asset::VersionData&

Возвращает:
* bool

# ::stappler::xenolith::storage::Asset::setDownloadProgress(int64_t,float)

## BRIEF

Устанавливает прогресс загрузки

## CONTENT

Доступ: protected

Устанавливает прогресс загрузки

Параметры:
* int64_t
* float


# ::stappler::xenolith::storage::Asset::setDownloadComplete(stappler::xenolith::storage::Asset::VersionData&,bool)

## BRIEF

Устанавливает статус завершения загрузки

## CONTENT

Доступ: protected

Устанавливает статус завершения загрузки

Параметры:
* stappler::xenolith::storage::Asset::VersionData&
* bool


# ::stappler::xenolith::storage::Asset::setFileValidated(bool)

## BRIEF

Устанавливает статус проверки файла версии ресурса

## CONTENT

Доступ: protected

Устанавливает статус проверки файла версии ресурса

Параметры:
* bool


# ::stappler::xenolith::storage::Asset::replaceVersion(stappler::xenolith::storage::Asset::VersionData&)

## BRIEF

Заменчает активную версию ресурса

## CONTENT

Доступ: protected

Заменчает активную версию ресурса

Параметры:
* stappler::xenolith::storage::Asset::VersionData&


# ::stappler::xenolith::storage::Asset::addVersion(stappler::xenolith::storage::AssetDownloadData*)

## BRIEF

Добавляет новую версию ресурса

## CONTENT

Доступ: protected

Добавляет новую версию ресурса

Параметры:
* stappler::xenolith::storage::AssetDownloadData*


# ::stappler::xenolith::storage::Asset::dropVersion(stappler::xenolith::storage::Asset::VersionData const&)

## BRIEF

Удаляет версию ресурса

## CONTENT

Доступ: protected

Удаляет версию ресурса

Параметры:
* stappler::xenolith::storage::Asset::VersionData const&


# ::stappler::xenolith::storage::Asset::releaseLock(stappler::xenolith::storage::Asset::VersionData const&)

## BRIEF

Убирает блокировку версии

## CONTENT

Доступ: protected

Убирает блокировку версии

Параметры:
* stappler::xenolith::storage::Asset::VersionData const&


# ::stappler::xenolith::storage::Asset::_path

## BRIEF

Базовый путь к ресурсу

## CONTENT

Доступ: protected

Базовый путь к ресурсу

Тип: stappler::mem_std::String


# ::stappler::xenolith::storage::Asset::_cache

## BRIEF

Путь к кешу ресурса

## CONTENT

Доступ: protected

Путь к кешу ресурса

Тип: stappler::mem_std::String


# ::stappler::xenolith::storage::Asset::_url

## BRIEF

URL доступа к ресурсу

## CONTENT

Доступ: protected

URL доступа к ресурсу

Тип: stappler::mem_std::String


# ::stappler::xenolith::storage::Asset::_ttl

## BRIEF

Время жизни ресурса

## CONTENT

Доступ: protected

Время жизни ресурса

Тип: stappler::TimeInterval


# ::stappler::xenolith::storage::Asset::_touch

## BRIEF

Время доступа к ресурсу

## CONTENT

Доступ: protected

Время доступа к ресурсу

Тип: stappler::Time


# ::stappler::xenolith::storage::Asset::_mtime

## BRIEF

Время обновления ресурса

## CONTENT

Доступ: protected

Время обновления ресурса

Тип: stappler::Time


# ::stappler::xenolith::storage::Asset::_id

## BRIEF

Идентификатор ресурса

## CONTENT

Доступ: protected

Идентификатор ресурса

Тип: int64_t


# ::stappler::xenolith::storage::Asset::_downloadId

## BRIEF

Идентификатор активной загрузки

## CONTENT

Доступ: protected

Идентификатор активной загрузки

Тип: int64_t


# ::stappler::xenolith::storage::Asset::_versions

## BRIEF

Версии ресурса

## CONTENT

Доступ: protected

Версии ресурса

Тип: Vector<stappler::xenolith::storage::Asset::VersionData>


# ::stappler::xenolith::storage::Asset::_data

## BRIEF

Связанные данные

## CONTENT

Доступ: protected

Связанные данные

Тип: stappler::mem_std::Value


# ::stappler::xenolith::storage::Asset::_library

## BRIEF

Указатель на библиотеку, из которой взят ресурс

## CONTENT

Доступ: protected

Указатель на библиотеку, из которой взят ресурс

Тип: stappler::xenolith::storage::AssetLibrary*


# ::stappler::xenolith::storage::Asset::_download

## BRIEF

Флаг загрузки

## CONTENT

Доступ: protected

Флаг загрузки

Тип: bool


# ::stappler::xenolith::storage::Asset::_dirty

## BRIEF

Флаг обновлённости данных

## CONTENT

Доступ: protected

Флаг обновлённости данных

Тип: bool


# ::stappler::xenolith::storage::Asset::_mutex

## BRIEF

Мутекс ресурса

## CONTENT

Доступ: protected

Мутекс ресурса

Тип: stappler::mem_std::Mutex
