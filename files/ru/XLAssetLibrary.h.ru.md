Title: XLAssetLibrary.h


# XENOLITH_RESOURCES_ASSETS_XLASSETLIBRARY_H_

## BRIEF

Заголовок библиотеки внешних ресурсов

## CONTENT

Заголовок библиотеки внешних ресурсов


# ::stappler::xenolith::storage::AssetComponentContainer

## BRIEF

Контейнер для хранилища ресурсов в БД

## CONTENT

Контейнер для хранилища ресурсов в БД

Базовые классы:
* ComponentContainer


# ::stappler::xenolith::storage::AssetComponentContainer::~AssetComponentContainer()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор


# ::stappler::xenolith::storage::AssetComponentContainer::init(stappler::StringView,stappler::xenolith::storage::AssetLibrary*)

## BRIEF

Создаёт контейнер для ресурсов

## CONTENT

Доступ: public

Создаёт контейнер для ресурсов

Параметры:
* stappler::StringView
* stappler::xenolith::storage::AssetLibrary*

Возвращает:
* bool

# ::stappler::xenolith::storage::AssetComponentContainer::handleStorageInit(storage::ComponentLoader&)

## BRIEF

Обрабатывает инициализацию хранилища

## CONTENT

Доступ: public

Обрабатывает инициализацию хранилища

Параметры:
* storage::ComponentLoader&


# ::stappler::xenolith::storage::AssetComponentContainer::handleStorageDisposed(db::Transaction const&)

## BRIEF

Обрабатывает уничтожение хранилища

## CONTENT

Доступ: public

Обрабатывает уничтожение хранилища

Параметры:
* db::Transaction const&


# ::stappler::xenolith::storage::AssetComponentContainer::getLibrary() const

## BRIEF

Возвращает библиотеку ресурсов

## CONTENT

Доступ: public

Возвращает библиотеку ресурсов

Возвращает:
* stappler::xenolith::storage::AssetLibrary*

# ::stappler::xenolith::storage::AssetComponentContainer::getComponent() const

## BRIEF

Возвращает компонент хранилища БД

## CONTENT

Доступ: public

Возвращает компонент хранилища БД

Возвращает:
* stappler::xenolith::storage::AssetComponent*

# ::stappler::xenolith::storage::AssetComponentContainer::_library

## BRIEF

Библиотека ресурсов

## CONTENT

Доступ: protected

Библиотека ресурсов

Тип: stappler::xenolith::storage::AssetLibrary*


# ::stappler::xenolith::storage::AssetComponentContainer::_component

## BRIEF

Компонент хранилища

## CONTENT

Доступ: protected

Компонент хранилища

Тип: stappler::xenolith::storage::AssetComponent*


# ::stappler::xenolith::storage::AssetLibrary

## BRIEF

Библиотека внешних ресурсов

## CONTENT

Библиотека внешних ресурсов. Реализует доступ и хранение внешних ресурсов во внутренней БД.

Базовые классы:
* ApplicationExtension


# ::stappler::xenolith::storage::AssetLibrary::onLoaded

## BRIEF

Событие загрузки библиотеки

## CONTENT

Доступ: public

Событие загрузки библиотеки

Тип: stappler::xenolith::EventHeader


# ::stappler::xenolith::storage::AssetLibrary::AssetCallback

## BRIEF

Функция для получения ресурса

## CONTENT

Доступ: public

Функция для получения ресурса

# ::stappler::xenolith::storage::AssetLibrary::AssetVecCallback

## BRIEF

Функция для получения набора ресурса

## CONTENT

Доступ: public

Функция для получения набора ресурса


# ::stappler::xenolith::storage::AssetLibrary::TaskCallback

## BRIEF

Функция для выполнения задачи в контексте БД

## CONTENT

Доступ: public

Функция для выполнения задачи в контексте БД

# ::stappler::xenolith::storage::AssetLibrary::AssetRequest

## BRIEF

Запрос на получение ресурса

## CONTENT

Доступ: public

Запрос на получение ресурса


# ::stappler::xenolith::storage::AssetLibrary::AssetRequest::url

## BRIEF

URL доступа

## CONTENT

URL доступа

Тип: stappler::mem_std::String


# ::stappler::xenolith::storage::AssetLibrary::AssetRequest::callback

## BRIEF

Функция получения ресурса

## CONTENT

Функция получения ресурса

Тип: stappler::xenolith::storage::AssetLibrary::AssetCallback


# ::stappler::xenolith::storage::AssetLibrary::AssetRequest::ttl

## BRIEF

Желаемое время жизни ресурса

## CONTENT

Желаемое время жизни ресурса

Тип: stappler::TimeInterval


# ::stappler::xenolith::storage::AssetLibrary::AssetRequest::ref

## BRIEF

Владелец запроса

## CONTENT

Владелец запроса

Тип: Rc<stappler::mem_std::Ref>

# ::stappler::xenolith::storage::AssetLibrary::AssetRequest::AssetRequest(stappler::StringView,stappler::xenolith::storage::AssetLibrary::AssetCallback&&,stappler::TimeInterval,Rc<stappler::mem_std::Ref>&&)

## BRIEF

Создаёт запрос ресурса

## CONTENT

Создаёт запрос ресурса

Параметры:
* stappler::StringView
* stappler::xenolith::storage::AssetLibrary::AssetCallback&&
* stappler::TimeInterval
* Rc<stappler::mem_std::Ref>&&


# ::stappler::xenolith::storage::AssetLibrary::AssetMultiRequest

## BRIEF

Множественный запрос на ресурсы

## CONTENT

Доступ: public

Множественный запрос на ресурсы. Служит для получения сразу всех необходиых ресурсов в одной функции.


# ::stappler::xenolith::storage::AssetLibrary::AssetMultiRequest::vec

## BRIEF

Набор запросов

## CONTENT

Набор запросов

Тип: Vector<stappler::xenolith::storage::AssetLibrary::AssetRequest>


# ::stappler::xenolith::storage::AssetLibrary::AssetMultiRequest::callback

## BRIEF

Функция для получения всех необходимых ресурсов

## CONTENT

Функция для получения всех необходимых ресурсов

Тип: stappler::xenolith::storage::AssetLibrary::AssetVecCallback


# ::stappler::xenolith::storage::AssetLibrary::AssetMultiRequest::ref

## BRIEF

Общий владелец запроса

## CONTENT

Общий владелец запроса

Тип: Rc<stappler::mem_std::Ref>


# ::stappler::xenolith::storage::AssetLibrary::AssetMultiRequest::AssetMultiRequest(Vector<stappler::xenolith::storage::AssetLibrary::AssetRequest>&&,stappler::xenolith::storage::AssetLibrary::AssetVecCallback&&,Rc<stappler::mem_std::Ref>&&)

## BRIEF

Создаёт запрос

## CONTENT

Создаёт запрос

Параметры:
* Vector<stappler::xenolith::storage::AssetLibrary::AssetRequest>&&
* stappler::xenolith::storage::AssetLibrary::AssetVecCallback&&
* Rc<stappler::mem_std::Ref>&&


# ::stappler::xenolith::storage::AssetLibrary::getAssetPath(int64_t)

## BRIEF

Возвращает путь для хранения данных ресурса по идентификатору

## CONTENT

Доступ: public

Возвращает путь для хранения данных ресурса по идентификатору

Параметры:
* int64_t

Возвращает:
* stappler::mem_std::String

# ::stappler::xenolith::storage::AssetLibrary::getAssetUrl(stappler::StringView)

## BRIEF

Конвертирует внешний URL в URL, воспринимаемый библиотекой

## CONTENT

Доступ: public

Конвертирует внешний URL в URL, воспринимаемый библиотекой

Параметры:
* stappler::StringView

Возвращает:
* stappler::mem_std::String

# ::stappler::xenolith::storage::AssetLibrary::~AssetLibrary()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор

# ::stappler::xenolith::storage::AssetLibrary::init(stappler::xenolith::Application*,network::Controller*,stappler::mem_std::Value const&)

## BRIEF

Создаёт библиотеку ресурсов

## CONTENT

Доступ: public

Создаёт библиотеку ресурсов

Параметры:
* stappler::xenolith::Application* - приложение
* network::Controller* - интерфейс к сетевым запросам
* stappler::mem_std::Value const& - даные для соединения с БД

Возвращает:
* bool

# ::stappler::xenolith::storage::AssetLibrary::initialize(stappler::xenolith::Application*)

## BRIEF

Инициалиирует библиотеку

## CONTENT

Доступ: public

Инициалиирует библиотеку

Параметры:
* stappler::xenolith::Application*


# ::stappler::xenolith::storage::AssetLibrary::invalidate(stappler::xenolith::Application*)

## BRIEF

Деинициализирует библиотеку

## CONTENT

Доступ: public

Деинициализирует библиотеку

Параметры:
* stappler::xenolith::Application*


# ::stappler::xenolith::storage::AssetLibrary::update(stappler::xenolith::Application*,stappler::xenolith::UpdateTime const&)

## BRIEF

Обновляет библиотеку

## CONTENT

Доступ: public

Обновляет библиотеку

Параметры:
* stappler::xenolith::Application*
* stappler::xenolith::UpdateTime const&


# ::stappler::xenolith::storage::AssetLibrary::acquireAsset(stappler::StringView,stappler::xenolith::storage::AssetLibrary::AssetCallback&&,stappler::TimeInterval,Rc<stappler::mem_std::Ref>&&)

## BRIEF

Запрашивает ресурс

## CONTENT

Доступ: public

Запрашивает ресурс

Параметры:
* stappler::StringView - URL ресурса
* stappler::xenolith::storage::AssetLibrary::AssetCallback&& - функция получения ресурса
* stappler::TimeInterval - время жизни ресурса
* Rc<stappler::mem_std::Ref>&& - хозяин запроса

Возвращает:
* bool

# ::stappler::xenolith::storage::AssetLibrary::acquireAssets(SpanView<stappler::xenolith::storage::AssetLibrary::AssetRequest>,stappler::xenolith::storage::AssetLibrary::AssetVecCallback&&,Rc<stappler::mem_std::Ref>&&)

## BRIEF

Запрашивает ресурсы

## CONTENT

Доступ: public

Запрашивает ресурсы

Параметры:
* SpanView<stappler::xenolith::storage::AssetLibrary::AssetRequest> - набор запросов
* stappler::xenolith::storage::AssetLibrary::AssetVecCallback&& - функция получения ресурсов
* Rc<stappler::mem_std::Ref>&& - хозяин запроса

Возвращает:
* bool

# ::stappler::xenolith::storage::AssetLibrary::getLiveAsset(stappler::StringView) const

## BRIEF

Возвращает загруженный ресурс по URL

## CONTENT

Доступ: public

Возвращает загруженный ресурс по URL

Параметры:
* stappler::StringView

Возвращает:
* stappler::xenolith::storage::Asset* - ресурс или nullptr

# ::stappler::xenolith::storage::AssetLibrary::getLiveAsset(int64_t) const

## BRIEF

Возвращает загруженный ресурс по идентификатору

## CONTENT

Доступ: public

Возвращает загруженный ресурс по идентификатору

Параметры:
* int64_t - идентификатор

Возвращает:
* stappler::xenolith::storage::Asset* - ресурс или nullptr

# ::stappler::xenolith::storage::AssetLibrary::perform(stappler::xenolith::storage::AssetLibrary::TaskCallback&&,stappler::mem_std::Ref*) const

## BRIEF

Выполняет задачу в контексте БД ресурсов

## CONTENT

Доступ: public

Выполняет задачу в контексте БД ресурсов

Параметры:
* stappler::xenolith::storage::AssetLibrary::TaskCallback&&
* stappler::mem_std::Ref*

Возвращает:
* bool

# ::stappler::xenolith::storage::AssetLibrary::getApplication() const

## BRIEF

Возвращает приложение

## CONTENT

Доступ: public

Возвращает приложение

Возвращает:
* stappler::xenolith::Application*

# ::stappler::xenolith::storage::AssetLibrary::getController() const

## BRIEF

Возвращает интерфейс к сетевым запросам

## CONTENT

Доступ: public

Возвращает интерфейс к сетевым запросам

Возвращает:
* network::Controller*

# ::stappler::xenolith::storage::AssetLibrary::addVersion(db::Transaction const&,int64_t,Asset::VersionData const&)

## BRIEF

Добавляет версию ресурса

## CONTENT

Доступ: protected

Добавляет версию ресурса

Параметры:
* db::Transaction const&
* int64_t
* Asset::VersionData const&

Возвращает:
* int64_t

# ::stappler::xenolith::storage::AssetLibrary::eraseVersion(int64_t)

## BRIEF

Удаляет версию ресурса

## CONTENT

Доступ: protected

Удаляет версию ресурса

Параметры:
* int64_t


# ::stappler::xenolith::storage::AssetLibrary::setAssetDownload(int64_t,bool)

## BRIEF

Устанавливает флаг загрузки в БД

## CONTENT

Доступ: protected

Устанавливает флаг загрузки в БД

Параметры:
* int64_t
* bool


# ::stappler::xenolith::storage::AssetLibrary::setVersionComplete(int64_t,bool)

## BRIEF

Устанавливает флаг завершения загрузки версии

## CONTENT

Доступ: protected

Устанавливает флаг завершения загрузки версии

Параметры:
* int64_t
* bool


# ::stappler::xenolith::storage::AssetLibrary::removeAsset(stappler::xenolith::storage::Asset*)

## BRIEF

Удаляет ресурс из БД

## CONTENT

Доступ: protected

Удаляет ресурс из БД

Параметры:
* stappler::xenolith::storage::Asset*


# ::stappler::xenolith::storage::AssetLibrary::downloadAsset(stappler::xenolith::storage::Asset*)

## BRIEF

Начинает загрузку ресурса

## CONTENT

Доступ: protected

Начинает загрузку ресурса

Параметры:
* stappler::xenolith::storage::Asset*

Возвращает:
* network::Handle*

# ::stappler::xenolith::storage::AssetLibrary::cleanup()

## BRIEF

Удаляет устаревшие ресурсы

## CONTENT

Доступ: protected

Удаляет устаревшие ресурсы

# ::stappler::xenolith::storage::AssetLibrary::handleLibraryLoaded(Vector<Rc<stappler::xenolith::storage::Asset>>&&)

## BRIEF

Обрабатывает загрузку библиотеки

## CONTENT

Доступ: protected

Обрабатывает загрузку библиотеки

Параметры:
* Vector<Rc<stappler::xenolith::storage::Asset>>&&


# ::stappler::xenolith::storage::AssetLibrary::handleAssetLoaded(Rc<stappler::xenolith::storage::Asset>&&)

## BRIEF

Обрабатывает загрузку ресурса

## CONTENT

Доступ: protected

Обрабатывает загрузку ресурса

Параметры:
* Rc<stappler::xenolith::storage::Asset>&&


# ::stappler::xenolith::storage::AssetLibrary::_container

## BRIEF

Контейнер БД

## CONTENT

Доступ: protected

Контейнер БД

Тип: Rc<stappler::xenolith::storage::AssetComponentContainer>


# ::stappler::xenolith::storage::AssetLibrary::_loaded

## BRIEF

Флаг загрузки библиотеки

## CONTENT

Доступ: protected

Флаг загрузки библиотеки

Тип: bool


# ::stappler::xenolith::storage::AssetLibrary::_callbacks

## BRIEF

Ожидающие завершения вызовы

## CONTENT

Доступ: protected

Ожидающие завершения вызовы

Тип: Map<stappler::mem_std::String, Vector<Pair<stappler::xenolith::storage::AssetLibrary::AssetCallback, Rc<stappler::mem_std::Ref>>>>


# ::stappler::xenolith::storage::AssetLibrary::_liveAssets

## BRIEF

Загруженные ресурсы

## CONTENT

Доступ: protected

Загруженные ресурсы

Тип: Vector<Rc<stappler::xenolith::storage::Asset>>


# ::stappler::xenolith::storage::AssetLibrary::_assetsByUrl

## BRIEF

Загруженные ресурсы по URL

## CONTENT

Доступ: protected

Загруженные ресурсы по URL

Тип: Map<stappler::StringView, stappler::xenolith::storage::Asset *>


# ::stappler::xenolith::storage::AssetLibrary::_assetsById

## BRIEF

Загруженные ресурсы по идентификатору

## CONTENT

Доступ: protected

Загруженные ресурсы по идентификатору

Тип: Map<uint64_t, stappler::xenolith::storage::Asset *>


# ::stappler::xenolith::storage::AssetLibrary::_application

## BRIEF

Приложение

## CONTENT

Доступ: protected

Приложение

Тип: stappler::xenolith::Application*


# ::stappler::xenolith::storage::AssetLibrary::_controller

## BRIEF

Интерфейс к сети

## CONTENT

Доступ: protected

Интерфейс к сети

Тип: network::Controller*


# ::stappler::xenolith::storage::AssetLibrary::_server

## BRIEF

Сервер БД

## CONTENT

Доступ: protected

Сервер БД

Тип: Rc<stappler::xenolith::storage::Server>


# ::stappler::xenolith::storage::AssetLibrary::_tmpRequests

## BRIEF

Ожидающие запуска запросы

## CONTENT

Доступ: protected

Ожидающие запуска запросы

Тип: Vector<stappler::xenolith::storage::AssetLibrary::AssetRequest>


# ::stappler::xenolith::storage::AssetLibrary::_tmpMultiRequest

## BRIEF

Ожидающие запуска запросы

## CONTENT

Доступ: protected

Ожидающие запуска запросы

Тип: Vector<stappler::xenolith::storage::AssetLibrary::AssetMultiRequest>
