Title: XLFontController.h


# XENOLITH_FONT_XLFONTCONTROLLER_H_

## BRIEF

Заголовок контроллера ширфта

## CONTENT

Заголовок контроллера ширфта

# ::stappler::xenolith::font::FontUpdateRequest

## BRIEF

Тип запроса на обновление данных шрифта

## CONTENT

Тип запроса на обновление данных шрифта


# ::stappler::xenolith::font::FontUpdateRequest::object

## BRIEF

Объект шрифта

## CONTENT

Объект шрифта

Тип: Rc<stappler::font::FontFaceObject>


# ::stappler::xenolith::font::FontUpdateRequest::chars

## BRIEF

Используемые символы шрифта

## CONTENT

Используемые символы шрифта

Тип: Vector<char32_t>


# ::stappler::xenolith::font::FontUpdateRequest::persistent

## BRIEF

Флаг постоянного хранения данных

## CONTENT

Флаг постоянного хранения данных

Тип: bool


# ::stappler::xenolith::font::FontController

## BRIEF

Тип контроллера шрифта

## CONTENT

Тип контроллера шрифта. Контроллер служит для получения укладок по параметрам, обновления избражения с данными шрифта, работы с зависимостями для ожидания загрузки данных на устройство.

Базовые классы:
* ApplicationExtension


# ::stappler::xenolith::font::FontController::onLoaded

## BRIEF

Событие загрузки контроллера

## CONTENT

Доступ: public

Событие загрузки контроллера

Тип: stappler::xenolith::EventHeader


# ::stappler::xenolith::font::FontController::onFontSourceUpdated

## BRIEF

Событие обновления контроллера

## CONTENT

Доступ: public

Событие обновления контроллера

Тип: stappler::xenolith::EventHeader


# ::stappler::xenolith::font::FontController::FontSource

## BRIEF

Источник данных шрифта

## CONTENT

Доступ: public

Источник данных шрифта


# ::stappler::xenolith::font::FontController::FontSource::fontFilePath

## BRIEF

Путь к файлу шрифта

## CONTENT

Путь к файлу шрифта

Тип: stappler::mem_std::String


# ::stappler::xenolith::font::FontController::FontSource::fontMemoryData

## BRIEF

Данные шрифта в памяти

## CONTENT

Данные шрифта в памяти

Тип: stappler::mem_std::Bytes


# ::stappler::xenolith::font::FontController::FontSource::fontExternalData

## BRIEF

Внешние данные в памяти

## CONTENT

Внешние данные в памяти

Тип: stappler::BytesView


# ::stappler::xenolith::font::FontController::FontSource::fontCallback

## BRIEF

Функция для получения данных

## CONTENT

Функция для получения данных

Тип: Function<stappler::mem_std::Bytes ()>


# ::stappler::xenolith::font::FontController::FontSource::data

## BRIEF

Источник данных

## CONTENT

Источник данных

Тип: Rc<stappler::font::FontFaceData>


# ::stappler::xenolith::font::FontController::FontSource::params

## BRIEF

Параметры шрифта

## CONTENT

Параметры шрифта

Тип: stappler::font::FontLayoutParameters


# ::stappler::xenolith::font::FontController::FontSource::preconfiguredParams

## BRIEF

Флаг, определяющий предопределённые параметры

## CONTENT

Флаг, определяющий предопределённые параметры

Тип: bool


# ::stappler::xenolith::font::FontController::FamilyQuery

## BRIEF

Запрос на семейство шрифтов

## CONTENT

Доступ: public

Запрос на семейство шрифтов


# ::stappler::xenolith::font::FontController::FamilyQuery::family

## BRIEF

Имя семейства

## CONTENT

Имя семейства

Тип: stappler::mem_std::String


# ::stappler::xenolith::font::FontController::FamilyQuery::sources

## BRIEF

Источники данных для семейства

## CONTENT

Источники данных для семейства

Тип: Vector<const stappler::xenolith::font::FontController::FontSource *>


# ::stappler::xenolith::font::FontController::FamilyQuery::addInFront

## BRIEF

Флаг добавления в начало списка

## CONTENT

Флаг добавления в начало списка

Тип: bool


# ::stappler::xenolith::font::FontController::FamilySpec

## BRIEF

Определение семейства шрифтов

## CONTENT

Доступ: public

Определение семейства шрифтов


# ::stappler::xenolith::font::FontController::FamilySpec::data

## BRIEF

Набор данных

## CONTENT

Набор данных

Тип: Vector<Rc<stappler::font::FontFaceData>>


# ::stappler::xenolith::font::FontController::Builder

## BRIEF

Сборщик шрифтового контроллера

## CONTENT

Доступ: public

Сборщик шрифтового контроллера


# ::stappler::xenolith::font::FontController::Builder::~Builder()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор


# ::stappler::xenolith::font::FontController::Builder::Builder(stappler::StringView)

## BRIEF

Конструктор

## CONTENT

Доступ: public

Конструктор

Параметры:
* stappler::StringView


# ::stappler::xenolith::font::FontController::Builder::Builder(stappler::xenolith::font::FontController*)

## BRIEF

Конструктор для обновления контроллера

## CONTENT

Доступ: public

Конструктор для обновления контроллера

Параметры:
* stappler::xenolith::font::FontController*


# ::stappler::xenolith::font::FontController::Builder::Builder(stappler::xenolith::font::FontController::Builder&&)

## BRIEF

Конструктор перемещения

## CONTENT

Доступ: public

Конструктор перемещения

Параметры:
* stappler::xenolith::font::FontController::Builder&&


# ::stappler::xenolith::font::FontController::Builder::operator=(stappler::xenolith::font::FontController::Builder&&)

## BRIEF

Оператор перемещения

## CONTENT

Доступ: public

Оператор перемещения

Параметры:
* stappler::xenolith::font::FontController::Builder&&

Возвращает:
* stappler::xenolith::font::FontController::Builder&

# ::stappler::xenolith::font::FontController::Builder::Builder(stappler::xenolith::font::FontController::Builder const&)

## BRIEF

Конструктор копирования

## CONTENT

Доступ: public

Конструктор копирования

Параметры:
* stappler::xenolith::font::FontController::Builder const&


# ::stappler::xenolith::font::FontController::Builder::operator=(stappler::xenolith::font::FontController::Builder const&)

## BRIEF

Оператор копирования

## CONTENT

Доступ: public

Оператор копирования

Параметры:
* stappler::xenolith::font::FontController::Builder const&

Возвращает:
* stappler::xenolith::font::FontController::Builder&

# ::stappler::xenolith::font::FontController::Builder::getName() const

## BRIEF

Возвращает имя контроллера

## CONTENT

Доступ: public

Возвращает имя контроллера

Возвращает:
* stappler::StringView

# ::stappler::xenolith::font::FontController::Builder::getTarget() const

## BRIEF

Возвращает целевой контроллер для обновления

## CONTENT

Доступ: public

Возвращает целевой контроллер для обновления

Возвращает:
* stappler::xenolith::font::FontController*

# ::stappler::xenolith::font::FontController::Builder::addFontSource(stappler::StringView,stappler::BytesView)

## BRIEF

Добавляет источник данных шрифта

## CONTENT

Доступ: public

Добавляет источник данных шрифта

Параметры:
* stappler::StringView
* stappler::BytesView

Возвращает:
* stappler::xenolith::font::FontController::FontSource const*

# ::stappler::xenolith::font::FontController::Builder::addFontSource(stappler::StringView,stappler::mem_std::Bytes&&)

## BRIEF

Добавляет источник данных шрифта

## CONTENT

Доступ: public

Добавляет источник данных шрифта

Параметры:
* stappler::StringView
* stappler::mem_std::Bytes&&

Возвращает:
* stappler::xenolith::font::FontController::FontSource const*

# ::stappler::xenolith::font::FontController::Builder::addFontSource(stappler::StringView,stappler::FilePath)

## BRIEF

Добавляет источник данных шрифта

## CONTENT

Доступ: public

Добавляет источник данных шрифта

Параметры:
* stappler::StringView
* stappler::FilePath

Возвращает:
* stappler::xenolith::font::FontController::FontSource const*

# ::stappler::xenolith::font::FontController::Builder::addFontSource(stappler::StringView,Function<stappler::mem_std::Bytes ()>&&)

## BRIEF

Добавляет источник данных шрифта

## CONTENT

Доступ: public

Добавляет источник данных шрифта

Параметры:
* stappler::StringView
* Function<stappler::mem_std::Bytes ()>&&

Возвращает:
* stappler::xenolith::font::FontController::FontSource const*

# ::stappler::xenolith::font::FontController::Builder::addFontSource(stappler::StringView,stappler::BytesView,stappler::font::FontLayoutParameters)

## BRIEF

Добавляет источник данных шрифта

## CONTENT

Доступ: public

Добавляет источник данных шрифта с предопределёнными параметрами

Параметры:
* stappler::StringView
* stappler::BytesView
* stappler::font::FontLayoutParameters

Возвращает:
* stappler::xenolith::font::FontController::FontSource const*

# ::stappler::xenolith::font::FontController::Builder::addFontSource(stappler::StringView,stappler::mem_std::Bytes&&,stappler::font::FontLayoutParameters)

## BRIEF

Добавляет источник данных шрифта

## CONTENT

Доступ: public

Добавляет источник данных шрифта с предопределёнными параметрами

Параметры:
* stappler::StringView
* stappler::mem_std::Bytes&&
* stappler::font::FontLayoutParameters

Возвращает:
* stappler::xenolith::font::FontController::FontSource const*

# ::stappler::xenolith::font::FontController::Builder::addFontSource(stappler::StringView,stappler::FilePath,stappler::font::FontLayoutParameters)

## BRIEF

Добавляет источник данных шрифта

## CONTENT

Доступ: public

Добавляет источник данных шрифта с предопределёнными параметрами

Параметры:
* stappler::StringView
* stappler::FilePath
* stappler::font::FontLayoutParameters

Возвращает:
* stappler::xenolith::font::FontController::FontSource const*

# ::stappler::xenolith::font::FontController::Builder::addFontSource(stappler::StringView,Function<stappler::mem_std::Bytes ()>&&,stappler::font::FontLayoutParameters)

## BRIEF

Добавляет источник данных шрифта

## CONTENT

Доступ: public

Добавляет источник данных шрифта с предопределёнными параметрами

Параметры:
* stappler::StringView
* Function<stappler::mem_std::Bytes ()>&&
* stappler::font::FontLayoutParameters

Возвращает:
* stappler::xenolith::font::FontController::FontSource const*

# ::stappler::xenolith::font::FontController::Builder::getFontSource(stappler::StringView) const

## BRIEF

Возвращает источник данных шрифта по имени

## CONTENT

Доступ: public

Возвращает источник данных шрифта по имени

Параметры:
* stappler::StringView

Возвращает:
* stappler::xenolith::font::FontController::FontSource const*

# ::stappler::xenolith::font::FontController::Builder::addFontFaceQuery(stappler::StringView,stappler::xenolith::font::FontController::FontSource const*,bool)

## BRIEF

Добавляет запрос на семейство шрифтов

## CONTENT

Доступ: public

Добавляет запрос на семейство шрифтов

Параметры:
* stappler::StringView - имя семейства
* stappler::xenolith::font::FontController::FontSource const* - источник данных
* bool - флаг добавления в начало списка

Возвращает:
* stappler::xenolith::font::FontController::FamilyQuery const*

# ::stappler::xenolith::font::FontController::Builder::addFontFaceQuery(stappler::StringView,Vector<const stappler::xenolith::font::FontController::FontSource *>&&,bool)

## BRIEF

Добавляет запрос на семейство шрифтов

## CONTENT

Доступ: public

Добавляет запрос на семейство шрифтов

Параметры:
* stappler::StringView - имя семейства
* Vector<const stappler::xenolith::font::FontController::FontSource *>&&
* bool - флаг добавления в начало списка

Возвращает:
* stappler::xenolith::font::FontController::FamilyQuery const*

# ::stappler::xenolith::font::FontController::Builder::addAlias(stappler::StringView,stappler::StringView)

## BRIEF

Добавляет псевдоним для семейства шрифтов

## CONTENT

Доступ: public

Добавляет псевдоним для семейства шрифтов

Параметры:
* stappler::StringView
* stappler::StringView

Возвращает:
* bool

# ::stappler::xenolith::font::FontController::Builder::getFontFamily(stappler::StringView) const

## BRIEF

Возвращает семейство шрифтов

## CONTENT

Доступ: public

Возвращает семейство шрифтов

Параметры:
* stappler::StringView

Возвращает:
* Vector<const stappler::xenolith::font::FontController::FamilyQuery *>

# ::stappler::xenolith::font::FontController::Builder::getDataQueries()

## BRIEF

Возвращает запросы данных

## CONTENT

Доступ: public

Возвращает запросы данных

Возвращает:
* Map<stappler::mem_std::String, stappler::xenolith::font::FontController::FontSource>&

# ::stappler::xenolith::font::FontController::Builder::getFamilyQueries()

## BRIEF

Возвращает семейства шрифтов

## CONTENT

Доступ: public

Возвращает семейства шрифтов

Возвращает:
* Map<stappler::mem_std::String, stappler::xenolith::font::FontController::FamilyQuery>&

# ::stappler::xenolith::font::FontController::Builder::getAliases()

## BRIEF

Возвращает псевдонимы

## CONTENT

Доступ: public

Возвращает псевдонимы

Возвращает:
* Map<stappler::mem_std::String, stappler::mem_std::String>&

# ::stappler::xenolith::font::FontController::Builder::getData() const

## BRIEF

Возвращает внутренние данные

## CONTENT

Доступ: public

Возвращает внутренние данные

Возвращает:
* stappler::xenolith::font::FontController::Builder::Data*

# ::stappler::xenolith::font::FontController::Builder::addSources(stappler::xenolith::font::FontController::FamilyQuery*,Vector<const stappler::xenolith::font::FontController::FontSource *>&&,bool)

## BRIEF

Добавляет источники к семейству

## CONTENT

Доступ: protected

Добавляет источники к семейству

Параметры:
* stappler::xenolith::font::FontController::FamilyQuery*
* Vector<const stappler::xenolith::font::FontController::FontSource *>&&
* bool - флаг добавления к началу


# ::stappler::xenolith::font::FontController::Builder::_data

## BRIEF

Данные сборщика

## CONTENT

Доступ: protected

Данные сборщика

Тип: stappler::xenolith::font::FontController::Builder::Data*


# ::stappler::xenolith::font::FontController::~FontController()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор

# ::stappler::xenolith::font::FontController::init(Rc<stappler::xenolith::font::FontExtension> const&)

## BRIEF

Создаёт шрифтовый контроллер

## CONTENT

Доступ: public

Создаёт шрифтовый контроллер

Параметры:
* Rc<stappler::xenolith::font::FontExtension> const&

Возвращает:
* bool

# ::stappler::xenolith::font::FontController::extend(Callback<bool (FontController::Builder &)> const&)

## BRIEF

Создаёт сборщик для изменения контроллера

## CONTENT

Доступ: public

Создаёт сборщик для изменения контроллера

Параметры:
* Callback<bool (FontController::Builder &)> const&


# ::stappler::xenolith::font::FontController::initialize(stappler::xenolith::Application*)

## BRIEF

Инициализирует контроллер

## CONTENT

Доступ: public

Инициализирует контроллер

Параметры:
* stappler::xenolith::Application*


# ::stappler::xenolith::font::FontController::invalidate(stappler::xenolith::Application*)

## BRIEF

Деинициализирует контроллер

## CONTENT

Доступ: public

Деинициализирует контроллер

Параметры:
* stappler::xenolith::Application*


# ::stappler::xenolith::font::FontController::isLoaded() const

## BRIEF

Проверяет, хагружен ли контроллер

## CONTENT

Доступ: public

Проверяет, хагружен ли контроллер

Возвращает:
* bool

# ::stappler::xenolith::font::FontController::getImage() const

## BRIEF

Возвращает динамическое изображение с данными шрифта

## CONTENT

Доступ: public

Возвращает динамическое изображение с данными шрифта

Возвращает:
* Rc<core::DynamicImage> const&

# ::stappler::xenolith::font::FontController::getTexture() const

## BRIEF

Возвращает текстуру для ристования шрифта

## CONTENT

Доступ: public

Возвращает текстуру для ристования шрифта

Возвращает:
* Rc<stappler::xenolith::Texture> const&

# ::stappler::xenolith::font::FontController::getLayout(stappler::font::FontParameters)

## BRIEF

Возвращает параметры укладки для параметров шрифта

## CONTENT

Доступ: public

Возвращает параметры укладки для параметров шрифта

Параметры:
* stappler::font::FontParameters

Возвращает:
* Rc<stappler::font::FontFaceSet>

# ::stappler::xenolith::font::FontController::getLayoutForString(stappler::font::FontParameters const&,stappler::font::CharVector const&)

## BRIEF

Возвращает параметры укладки для параметров шрифта

## CONTENT

Доступ: public

Возвращает параметры укладки для параметров шрифта

Параметры:
* stappler::font::FontParameters const&
* stappler::font::CharVector const&

Возвращает:
* Rc<stappler::font::FontFaceSet>

# ::stappler::xenolith::font::FontController::addTextureChars(Rc<stappler::font::FontFaceSet> const&,SpanView<stappler::font::CharLayoutData>)

## BRIEF

Добавляет символы в текстуру шрифта

## CONTENT

Доступ: public

Добавляет символы в текстуру шрифта

Параметры:
* Rc<stappler::font::FontFaceSet> const&
* SpanView<stappler::font::CharLayoutData>

Возвращает:
* Rc<core::DependencyEvent>

# ::stappler::xenolith::font::FontController::getFamilyIndex(stappler::StringView) const

## BRIEF

Возвращает индекс семейства по имени

## CONTENT

Доступ: public

Возвращает индекс семейства по имени

Параметры:
* stappler::StringView

Возвращает:
* uint32_t

# ::stappler::xenolith::font::FontController::getFamilyName(uint32_t) const

## BRIEF

Возвращает имя семейства по индексу

## CONTENT

Доступ: public

Возвращает имя семейства по индексу

Параметры:
* uint32_t

Возвращает:
* stappler::StringView

# ::stappler::xenolith::font::FontController::update(stappler::xenolith::Application*,stappler::xenolith::UpdateTime const&)

## BRIEF

Обновляет данные контроллера

## CONTENT

Доступ: public

Обновляет данные контроллера

Параметры:
* stappler::xenolith::Application*
* stappler::xenolith::UpdateTime const&


# ::stappler::xenolith::font::FontController::addFont(stappler::StringView,Rc<stappler::font::FontFaceData>&&,bool)

## BRIEF

Добавляет данные шрифта

## CONTENT

Доступ: protected

Добавляет данные шрифта

Параметры:
* stappler::StringView
* Rc<stappler::font::FontFaceData>&&
* bool


# ::stappler::xenolith::font::FontController::addFont(stappler::StringView,Vector<Rc<stappler::font::FontFaceData>>&&,bool)

## BRIEF

Добавляет данные шрифта

## CONTENT

Доступ: protected

Добавляет данные шрифта

Параметры:
* stappler::StringView
* Vector<Rc<stappler::font::FontFaceData>>&&
* bool


# ::stappler::xenolith::font::FontController::addAlias(stappler::StringView,stappler::StringView)

## BRIEF

Добавляет псевдоним семейства

## CONTENT

Доступ: protected

Добавляет псевдоним семейства

Параметры:
* stappler::StringView
* stappler::StringView

Возвращает:
* bool

# ::stappler::xenolith::font::FontController::setImage(Rc<core::DynamicImage>&&)

## BRIEF

Загружает динамическое изображение

## CONTENT

Доступ: protected

Загружает динамическое изображение

Параметры:
* Rc<core::DynamicImage>&&


# ::stappler::xenolith::font::FontController::setLoaded(bool)

## BRIEF

Устанавливает флаг загрузки

## CONTENT

Доступ: protected

Устанавливает флаг загрузки

Параметры:
* bool


# ::stappler::xenolith::font::FontController::sendFontUpdatedEvent()

## BRIEF

Отправляет событие обновления

## CONTENT

Доступ: protected

Отправляет событие обновления


# ::stappler::xenolith::font::FontController::setAliases(Map<stappler::mem_std::String, stappler::mem_std::String>&&)

## BRIEF

Устанавливает псевдонимы

## CONTENT

Доступ: protected

Устанавливает псевдонимы

Параметры:
* Map<stappler::mem_std::String, stappler::mem_std::String>&&


# ::stappler::xenolith::font::FontController::findSpecialization(stappler::xenolith::font::FontController::FamilySpec const&,stappler::font::FontParameters const&,Vector<Rc<stappler::font::FontFaceData>>*)

## BRIEF

Находит специализацию шрифта для параметров

## CONTENT

Доступ: protected

Находит специализацию шрифта для параметров

Параметры:
* stappler::xenolith::font::FontController::FamilySpec const&
* stappler::font::FontParameters const&
* Vector<Rc<stappler::font::FontFaceData>>*

Возвращает:
* stappler::font::FontSpecializationVector

# ::stappler::xenolith::font::FontController::removeUnusedLayouts()

## BRIEF

Удаляет неиспользуемые укладки

## CONTENT

Доступ: protected

Удаляет неиспользуемые укладки


# ::stappler::xenolith::font::FontController::_loaded

## BRIEF

Флаг загрузки

## CONTENT

Доступ: protected

Флаг загрузки

Тип: bool


# ::stappler::xenolith::font::FontController::_clock

## BRIEF

Время обновления

## CONTENT

Доступ: protected

Время обновления

Тип: std::atomic<uint64_t>


# ::stappler::xenolith::font::FontController::_unusedInterval

## BRIEF

Флаг допустимого периода неиспользования укладки

## CONTENT

Доступ: protected

Флаг допустимого периода неиспользования укладки

Тип: stappler::TimeInterval


# ::stappler::xenolith::font::FontController::_defaultFontFamily

## BRIEF

Семейство шрифтов по умолчанию

## CONTENT

Доступ: protected

Семейство шрифтов по умолчанию

Тип: stappler::mem_std::String


# ::stappler::xenolith::font::FontController::_texture

## BRIEF

Текстура

## CONTENT

Доступ: protected

Текстура

Тип: Rc<stappler::xenolith::Texture>


# ::stappler::xenolith::font::FontController::_image

## BRIEF

Изображение

## CONTENT

Доступ: protected

Изображение

Тип: Rc<core::DynamicImage>


# ::stappler::xenolith::font::FontController::_ext

## BRIEF

Расширение

## CONTENT

Доступ: protected

Расширение

Тип: Rc<stappler::xenolith::font::FontExtension>


# ::stappler::xenolith::font::FontController::_aliases

## BRIEF

Псевдонимы

## CONTENT

Доступ: protected

Псевдонимы

Тип: Map<stappler::mem_std::String, stappler::mem_std::String>


# ::stappler::xenolith::font::FontController::_familiesNames

## BRIEF

Имена загруженных семейств

## CONTENT

Доступ: protected

Имена загруженных семейств

Тип: Vector<stappler::StringView>


# ::stappler::xenolith::font::FontController::_families

## BRIEF

Загруженные семейства

## CONTENT

Доступ: protected

Загруженные семейства

Тип: Map<stappler::mem_std::String, stappler::xenolith::font::FontController::FamilySpec>


# ::stappler::xenolith::font::FontController::_layouts

## BRIEF

Набор используемых укладок

## CONTENT

Доступ: protected

Набор используемых укладок

Тип: HashMap<stappler::StringView, Rc<stappler::font::FontFaceSet>>


# ::stappler::xenolith::font::FontController::_dependency

## BRIEF

Флаг зависимости для обновления шрифтов

## CONTENT

Доступ: protected

Флаг зависимости для обновления шрифтов

Тип: Rc<core::DependencyEvent>


# ::stappler::xenolith::font::FontController::_dirty

## BRIEF

Флаг обновления

## CONTENT

Доступ: protected

Флаг обновления

Тип: bool


# ::stappler::xenolith::font::FontController::_layoutSharedMutex

## BRIEF

Мутекс укладок

## CONTENT

Доступ: protected

Мутекс укладок

Тип: std::shared_mutex
