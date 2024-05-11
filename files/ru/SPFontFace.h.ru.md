Title: SPFontFace.h


# CORE_FONT_XLFONTFACE_H_

## BRIEF

Заголовок интерфейса реализации доступа к ресурсам шрифта

## CONTENT

Заголовок интерфейса реализации доступа к ресурсам шрифта


# ::FT_Library

## BRIEF

Базовая структура библиотеки FreeType

## CONTENT

Базовая структура библиотеки FreeType

# ::FT_Face

## BRIEF

Cтруктура шрифта библиотеки FreeType

## CONTENT

Cтруктура шрифта библиотеки FreeType


# ::stappler::font::FontFaceData

## BRIEF

Хранимые данные шрифта

## CONTENT

Хранимые данные шрифта

Базовые классы:
* RefBase<memory::StandartInterface>
* InterfaceObject<memory::StandartInterface>


# ::stappler::font::FontFaceData::~FontFaceData()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор


# ::stappler::font::FontFaceData::init(stappler::StringView,stappler::BytesView,bool)

## BRIEF

Инициализирует данные

## CONTENT

Доступ: public

Инициализирует данные

Параметры:
* stappler::StringView - имя блока
* stappler::BytesView - содержимое блока
* bool - true если данные необходимо скопировать в структуру

Возвращает:
* bool - true если успешно

# ::stappler::font::FontFaceData::init(stappler::StringView,stappler::InterfaceObject<stappler::memory::StandartInterface>::Bytes&&)

## BRIEF

Инициализирует данные

## CONTENT

Доступ: public

Инициализирует данные

Доступ: public

Параметры:
* stappler::StringView - имя блока
* stappler::InterfaceObject<stappler::memory::StandartInterface>::Bytes&& - данные для перемещения в структуру

Возвращает:
* bool - true если успешно

# ::stappler::font::FontFaceData::init(stappler::StringView,Function<stappler::InterfaceObject<stappler::memory::StandartInterface>::Bytes ()>&&)

## BRIEF

Инициализирует данные

## CONTENT

Доступ: public

Инициализирует данные

Параметры:
* stappler::StringView - имя блока
* Function<stappler::InterfaceObject<stappler::memory::StandartInterface>::Bytes ()>&& - функция доступа к данным

Возвращает:
* bool - true если успешно

# ::stappler::font::FontFaceData::acquireDefaultParams(FT_Face)

## BRIEF

Получает стандартные параметры шрифта

## CONTENT

Доступ: public

Получает стандартные параметры шрифта, если возможно. Использует встроенные в файл шрифта параметры.

Параметры:
* FT_Face

Возвращает:
* stappler::font::FontLayoutParameters

# ::stappler::font::FontFaceData::inspectVariableFont(stappler::font::FontLayoutParameters,FT_Library,FT_Face)

## BRIEF

Запоняет переменные параметры шрифта их граничными значениями

## CONTENT

Доступ: public

Запоняет переменные параметры шрифта их граничными значениями

Параметры:
* stappler::font::FontLayoutParameters - исходные параметры шрифта
* FT_Library
* FT_Face


# ::stappler::font::FontFaceData::getName() const

## BRIEF

Возвращает имя блока

## CONTENT

Доступ: public

Возвращает имя блока

Возвращает:
* stappler::StringView

# ::stappler::font::FontFaceData::getView() const

## BRIEF

Возвращает хранимые данные

## CONTENT

Доступ: public

Возвращает хранимые данные

Возвращает:
* stappler::BytesView

# ::stappler::font::FontFaceData::getVariations() const

## BRIEF

Возвращает переменные параметры шрифта

## CONTENT

Доступ: public

Возвращает переменные параметры шрифта

Возвращает:
* stappler::font::FontVariations const&

# ::stappler::font::FontFaceData::getSpecialization(stappler::font::FontSpecializationVector const&) const

## BRIEF

Подбирает доступные переменные параметры шрифта для соотвествия заданным

## CONTENT

Доступ: public

Подбирает доступные переменные параметры шрифта для соотвествия заданным

Параметры:
* stappler::font::FontSpecializationVector const& - исходные параметры

Возвращает:
* stappler::font::FontSpecializationVector - допустимые для использования параметры

# ::stappler::font::FontFaceData::_persistent

## BRIEF

Флаг статических данных

## CONTENT

Доступ: protected

Флаг статических данных

Тип: bool


# ::stappler::font::FontFaceData::_name

## BRIEF

Имя блока

## CONTENT

Доступ: protected

Имя блока

Тип: stappler::InterfaceObject<stappler::memory::StandartInterface>::String


# ::stappler::font::FontFaceData::_view

## BRIEF

Данные блока

## CONTENT

Доступ: protected

Данные блока

Тип: stappler::BytesView


# ::stappler::font::FontFaceData::_data

## BRIEF

Хранимые внутри объекта данные

## CONTENT

Доступ: protected

Хранимые внутри объекта данные

Тип: stappler::InterfaceObject<stappler::memory::StandartInterface>::Bytes


# ::stappler::font::FontFaceData::_variations

## BRIEF

Данные перемменных параметров

## CONTENT

Доступ: protected

Данные перемменных параметров

Тип: stappler::font::FontVariations


# ::stappler::font::FontFaceData::_params

## BRIEF

Базовые параметры шрифта

## CONTENT

Доступ: protected

Базовые параметры шрифта

Тип: stappler::font::FontLayoutParameters


# ::stappler::font::FontFaceObject

## BRIEF

Класс специализации шрифта по размеру и параметрам

## CONTENT

Класс специализации шрифта по размеру и параметрам

Базовые классы:
* RefBase<memory::StandartInterface>
* InterfaceObject<memory::StandartInterface>


# ::stappler::font::FontFaceObject::~FontFaceObject()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор

# ::stappler::font::FontFaceObject::init(stappler::StringView,Rc<stappler::font::FontFaceData> const&,FT_Library,FT_Face,stappler::font::FontSpecializationVector const&,uint16_t)

## BRIEF

Инициализирует объект из данных и параметров

## CONTENT

Доступ: public

Инициализирует объект из данных и параметров

Параметры:
* stappler::StringView - имя объекта
* Rc<stappler::font::FontFaceData> const& - данные объекта
* FT_Library
* FT_Face
* stappler::font::FontSpecializationVector const& - параметры специализации шрифта
* uint16_t - внутренний идентификатор объекта

Возвращает:
* bool - true если успешно

# ::stappler::font::FontFaceObject::getName() const

## BRIEF

Возвращает имя объекта

## CONTENT

Доступ: public

Возвращает имя объекта

Возвращает:
* stappler::StringView

# ::stappler::font::FontFaceObject::getId() const

## BRIEF

Возвращает внутренний идентификатор

## CONTENT

Доступ: public

Возвращает внутренний идентификатор

Возвращает:
* uint16_t

# ::stappler::font::FontFaceObject::getFace() const

## BRIEF

Возвращает объект FreeType

## CONTENT

Доступ: public

Возвращает объект FreeType

Возвращает:
* FT_Face

# ::stappler::font::FontFaceObject::getData() const

## BRIEF

Возвращает данные объекта

## CONTENT

Доступ: public

Возвращает данные объекта

Возвращает:
* Rc<stappler::font::FontFaceData> const&

# ::stappler::font::FontFaceObject::getSpec() const

## BRIEF

Возвращает специализацию шрифта

## CONTENT

Доступ: public

Возвращает специализацию шрифта

Возвращает:
* stappler::font::FontSpecializationVector const&

# ::stappler::font::FontFaceObject::acquireTexture(char32_t,Callback<void (const stappler::font::CharTexture &)> const&)

## BRIEF

Запрашивает отрисовку текстуры символа на основе специализации

## CONTENT

Доступ: public

Запрашивает отрисовку текстуры символа на основе специализации

Параметры:
* char32_t - символ
* Callback<void (const stappler::font::CharTexture &)> const& - функтор, получающий готовую текстуру символа

Возвращает:
* bool - true если успешно

# ::stappler::font::FontFaceObject::acquireTextureUnsafe(char32_t,Callback<void (const stappler::font::CharTexture &)> const&)

## BRIEF

Запрашивает отрисовку текстуры символа на основе специализации

## CONTENT

Доступ: public

Запрашивает отрисовку текстуры символа на основе специализации. Не использует синхронизацию потоков, пользователь должен обеспечить синхронизацию сам.

Параметры:
* char32_t - символ
* Callback<void (const stappler::font::CharTexture &)> const& - функтор, получающий готовую текстуру символа

Возвращает:
* bool - true если успешно

# ::stappler::font::FontFaceObject::addChars(Vector<char32_t> const&,bool,Vector<char32_t>*)

## BRIEF

Добавляет набор символов в объект, предрасчитывая параметры этих символов

## CONTENT

Доступ: public

Добавляет набор символов в объект, предрасчитывая параметры этих символов

Параметры:
* Vector<char32_t> const& - символы для добавления
* bool - true если необходимо добавлять символы группами, а не по одиночке
* Vector<char32_t>* - указатель на массив, в который будут записаны нераспознанные символы

Возвращает:
* bool - true если успешно

# ::stappler::font::FontFaceObject::addCharGroup(stappler::CharGroupId,Interface::VectorType<char32_t>*)

## BRIEF

Добавляет группу символов в объект, предрасчитывая параметры этих символов

## CONTENT

Доступ: public

Добавляет группу символов в объект, предрасчитывая параметры этих символов

Параметры:
* stappler::CharGroupId
* Interface::VectorType<char32_t>*

Возвращает:
* bool

# ::stappler::font::FontFaceObject::addRequiredChar(char32_t)

## BRIEF

Добавляет символ, текстура которого требуются для корректного отображения текста

## CONTENT

Доступ: public

Добавляет символ, текстура которого требуются для корректного отображения текста

Параметры:
* char32_t

Возвращает:
* bool

# ::stappler::font::FontFaceObject::getRequiredChars() const

## BRIEF

Возвращает список требуемых текстур символов

## CONTENT

Доступ: public

Возвращает список требуемых текстур символов

Возвращает:
* Interface::VectorType<char32_t>

# ::stappler::font::FontFaceObject::getChar(char16_t) const

## BRIEF

Возвращает параметры укладки символа

## CONTENT

Доступ: public

Возвращает параметры укладки символа

Параметры:
* char16_t

Возвращает:
* stappler::font::CharShape

# ::stappler::font::FontFaceObject::getKerningAmount(char16_t,char16_t) const

## BRIEF

Возвращает значение кёрнинга между символами

## CONTENT

Доступ: public

Возвращает значение кёрнинга между символами

Параметры:
* char16_t
* char16_t

Возвращает:
* int16_t

# ::stappler::font::FontFaceObject::getMetrics() const

## BRIEF

Возвращает базовые метрики шрифта

## CONTENT

Доступ: public

Возвращает базовые метрики шрифта

Возвращает:
* stappler::font::Metrics

# ::stappler::font::FontFaceObject::addChar(char16_t,bool&)

## BRIEF

Добавляет символ в объект

## CONTENT

Доступ: protected

Добавляет символ в объект

Параметры:
* char16_t
* bool&

Возвращает:
* bool

# ::stappler::font::FontFaceObject::_name

## BRIEF

Имя объекта

## CONTENT

Доступ: protected

Имя объекта

Тип: Interface::StringType


# ::stappler::font::FontFaceObject::_data

## BRIEF

Данные объекта

## CONTENT

Доступ: protected

Данные объекта

Тип: Rc<stappler::font::FontFaceData>


# ::stappler::font::FontFaceObject::_id

## BRIEF

Внутренний идентификатор объекта

## CONTENT

Доступ: protected

Внутренний идентификатор объекта

Тип: uint16_t


# ::stappler::font::FontFaceObject::_face

## BRIEF

Объект FreeType

## CONTENT

Доступ: protected

Объект FreeType

Тип: FT_Face


# ::stappler::font::FontFaceObject::_spec

## BRIEF

Специализация шрифта

## CONTENT

Доступ: protected

Специализация шрифта

Тип: stappler::font::FontSpecializationVector


# ::stappler::font::FontFaceObject::_metrics

## BRIEF

Базовые метрики шрифта

## CONTENT

Доступ: protected

Базовые метрики шрифта

Тип: stappler::font::Metrics


# ::stappler::font::FontFaceObject::_required

## BRIEF

Список требуемых текстур символов

## CONTENT

Доступ: protected

Список требуемых текстур символов

Тип: Interface::VectorType<char32_t>


# ::stappler::font::FontFaceObject::_chars

## BRIEF

Данные символов

## CONTENT

Доступ: protected

Данные символов

Тип: FontCharStorage<stappler::font::CharShape>


# ::stappler::font::FontFaceObject::_kerning

## BRIEF

Данные кёрнинга

## CONTENT

Доступ: protected

Данные кёрнинга

Тип: mem_std::HashMap<uint32_t, int16_t>


# ::stappler::font::FontFaceObject::_faceMutex

## BRIEF

Мутекс защиты данных шрифта

## CONTENT

Доступ: protected

Мутекс защиты данных шрифта

Тип: mem_std::Mutex


# ::stappler::font::FontFaceObject::_charsMutex

## BRIEF

Мутекс защиты данных символов

## CONTENT

Доступ: protected

Мутекс защиты данных символов

Тип: std::shared_mutex


# ::stappler::font::FontFaceObject::_requiredMutex

## BRIEF

Мутекс защиты списка требуемых символов

## CONTENT

Доступ: protected

Мутекс защиты списка требуемых символов

Тип: mem_std::Mutex


# ::stappler::font::FontFaceSet

## BRIEF

Объект каскадного набора объектов шрифтов

## CONTENT

Объект каскадного набора объектов шрифтов. Служит в качестве пакета шрифтов. Если символ не найдет в шрифте с приоритетом выше - он ишется в шрифте с приоритетом ниже.

Базовые классы:
* RefBase<memory::StandartInterface>
* InterfaceObject<memory::StandartInterface>


# ::stappler::font::FontFaceSet::constructName(stappler::StringView,stappler::font::FontSpecializationVector const&)

## BRIEF

Создаёт имя для набора шрифтов

## CONTENT

Доступ: public

Создаёт имя для набора шрифтов

Параметры:
* stappler::StringView - имя семейства
* stappler::font::FontSpecializationVector const& - базовая специализация

Возвращает:
* stappler::InterfaceObject<stappler::memory::StandartInterface>::String

# ::stappler::font::FontFaceSet::~FontFaceSet()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор

# ::stappler::font::FontFaceSet::FontFaceSet()

## BRIEF

Конструктор

## CONTENT

Доступ: public

Конструктор

# ::stappler::font::FontFaceSet::init(stappler::InterfaceObject<stappler::memory::StandartInterface>::String&&,stappler::StringView,stappler::font::FontSpecializationVector&&,Rc<stappler::font::FontFaceData>&&,stappler::font::FontLibrary*)

## BRIEF

Инициализирует набор из единичного шрифта

## CONTENT

Доступ: public

Инициализирует набор из единичного шрифта

Параметры:
* stappler::InterfaceObject<stappler::memory::StandartInterface>::String&& - имя набора
* stappler::StringView - имя семейства шрифтов
* stappler::font::FontSpecializationVector&& - базовая специализация
* Rc<stappler::font::FontFaceData>&& - данные единичного шрифта
* stappler::font::FontLibrary* - библиотека шрифтов

Возвращает:
* bool - true если успешно

# ::stappler::font::FontFaceSet::init(stappler::InterfaceObject<stappler::memory::StandartInterface>::String&&,stappler::StringView,stappler::font::FontSpecializationVector&&,Vector<Rc<stappler::font::FontFaceData>>&&,stappler::font::FontLibrary*)

## BRIEF

Инициализирует набор из массива шрифтов

## CONTENT

Доступ: public

Инициализирует набор из массива шрифтов

Параметры:
* stappler::InterfaceObject<stappler::memory::StandartInterface>::String&& - имя набора
* stappler::StringView - имя семейства шрифтов
* stappler::font::FontSpecializationVector&& - базовая специализация
* Vector<Rc<stappler::font::FontFaceData>>&& - данные шрифтового набора
* stappler::font::FontLibrary* - библиотека шрифтов

Возвращает:
* bool - true если успешно

# ::stappler::font::FontFaceSet::touch(uint64_t,bool)

## BRIEF

Обновляет время последнего доступа к набору

## CONTENT

Доступ: public

Обновляет время последнего доступа к набору. Используется для удаления неиспользуемых наборов.

Параметры:
* uint64_t - время доступа
* bool - true если необходимо пометить набор как постоянно существующий


# ::stappler::font::FontFaceSet::getAccessTime() const

## BRIEF

Возвращает время последнего доступа к набору

## CONTENT

Доступ: public

Возвращает время последнего доступа к набору. Используется для удаления неиспользуемых наборов.

Возвращает:
* uint64_t

# ::stappler::font::FontFaceSet::isPersistent() const

## BRIEF

Проверяет, помечен ли набор как постоянный

## CONTENT

Доступ: public

Проверяет, помечен ли набор как постоянный

Возвращает:
* bool

# ::stappler::font::FontFaceSet::getName() const

## BRIEF

Возвращает имя набора

## CONTENT

Доступ: public

Возвращает имя набора

Возвращает:
* stappler::StringView

# ::stappler::font::FontFaceSet::getFamily() const

## BRIEF

Возвращает имя семейства шрифтов

## CONTENT

Доступ: public

Возвращает имя семейства шрифтов

Возвращает:
* stappler::StringView

# ::stappler::font::FontFaceSet::getSpec() const

## BRIEF

Возвращает базовую специализацию шрифтов

## CONTENT

Доступ: public

Возвращает базовую специализацию шрифтов

Возвращает:
* stappler::font::FontSpecializationVector const&

# ::stappler::font::FontFaceSet::getFaceCount() const

## BRIEF

Возвращает количество шрифтов в наборе

## CONTENT

Доступ: public

Возвращает количество шрифтов в наборе

Возвращает:
* size_t

# ::stappler::font::FontFaceSet::getSource(size_t) const

## BRIEF

Возвращает данные по индексу в массиве

## CONTENT

Доступ: public

Возвращает данные по индексу в массиве

Параметры:
* size_t

Возвращает:
* Rc<stappler::font::FontFaceData>

# ::stappler::font::FontFaceSet::getLibrary() const

## BRIEF

Возвращает библиотеку, к которой относится набор

## CONTENT

Доступ: public

Возвращает библиотеку, к которой относится набор

Возвращает:
* stappler::font::FontLibrary*

# ::stappler::font::FontFaceSet::addString(stappler::font::CharVector const&)

## BRIEF

Добавляет данные символов из набора символов к шрифтам

## CONTENT

Доступ: public

Добавляет данные символов из набора символов к шрифтам. Если символ не найден в одном шрифте - добавляется в следующий.

Параметры:
* stappler::font::CharVector const&

Возвращает:
* bool - true если успешно

# ::stappler::font::FontFaceSet::addString(stappler::font::CharVector const&,Vector<char32_t>&)

## BRIEF

Добавляет данные символов из набора символов к шрифтам

## CONTENT

Доступ: public

Добавляет данные символов из набора символов к шрифтам. Если символ не найден в одном шрифте - добавляется в следующий.

Параметры:
* stappler::font::CharVector const&
* Vector<char32_t>& - (вывод) нераспознанные символы

Возвращает:
* bool - true если успешно

# ::stappler::font::FontFaceSet::getFontHeight() const

## BRIEF

Возвращает базовую высоту для шрифтового набора

## CONTENT

Доступ: public

Возвращает базовую высоту для шрифтового набора. Высота конкретного шрифта может отличаться.

Возвращает:
* uint16_t

# ::stappler::font::FontFaceSet::getKerningAmount(char16_t,char16_t,uint16_t) const

## BRIEF

Возвращает размер кёрнинга между символами

## CONTENT

Доступ: public

Возвращает размер кёрнинга между символами. Кёрнинг между разными шрифтами недоступен.

Параметры:
* char16_t
* char16_t
* uint16_t - идентификатор шрифта, из которого происходят символы

Возвращает:
* int16_t

# ::stappler::font::FontFaceSet::getMetrics() const

## BRIEF

Возвращет базовые метрики набора

## CONTENT

Доступ: public

Возвращет базовые метрики набора. Метрики конкретного шифта могут отличаться.

Возвращает:
* stappler::font::Metrics

# ::stappler::font::FontFaceSet::getChar(char16_t,uint16_t&) const

## BRIEF

Получает данные символа

## CONTENT

Доступ: public

Получает данные символа

Параметры:
* char16_t
* uint16_t& - (вывод) идентификатор шрифта, из которого получен символ

Возвращает:
* stappler::font::CharShape

# ::stappler::font::FontFaceSet::getTexturesCount() const

## BRIEF

Возвращает число требуемых текстур

## CONTENT

Доступ: public

Возвращает число требуемых текстур

Возвращает:
* size_t

# ::stappler::font::FontFaceSet::addTextureChars(SpanView<stappler::font::CharLayoutData>) const

## BRIEF

Добавляет требуемые текстуры для отрисовки набора

## CONTENT

Доступ: public

Добавляет требуемые текстуры для отрисовки набора

Параметры:
* SpanView<stappler::font::CharLayoutData>

Возвращает:
* bool

# ::stappler::font::FontFaceSet::getFaces() const

## BRIEF

Возвращет список активных шрифтов в наборе

## CONTENT

Доступ: public

Возвращет список активных шрифтов в наборе. Набор может не загружать шрифты, если все символы были найдены в более ранних в списке шрифтах.

Возвращает:
* Vector<Rc<stappler::font::FontFaceObject>> const&

# ::stappler::font::FontFaceSet::_accessTime

## BRIEF

Время доступа к набору

## CONTENT

Доступ: protected

Время доступа к набору

Тип: std::atomic<uint64_t>


# ::stappler::font::FontFaceSet::_persistent

## BRIEF

Флаг постоянства набора

## CONTENT

Доступ: protected

Флаг постоянства набора

Тип: std::atomic<bool>


# ::stappler::font::FontFaceSet::_name

## BRIEF

Имя набора

## CONTENT

Доступ: protected

Имя набора

Тип: stappler::InterfaceObject<stappler::memory::StandartInterface>::String


# ::stappler::font::FontFaceSet::_family

## BRIEF

Имя семейства шрифтов

## CONTENT

Доступ: protected

Имя семейства шрифтов

Тип: stappler::InterfaceObject<stappler::memory::StandartInterface>::String


# ::stappler::font::FontFaceSet::_metrics

## BRIEF

Базовые метрики набора

## CONTENT

Доступ: protected

Базовые метрики набора

Тип: stappler::font::Metrics


# ::stappler::font::FontFaceSet::_spec

## BRIEF

Базовая специализация набора

## CONTENT

Доступ: protected

Базовая специализация набора

Тип: stappler::font::FontSpecializationVector


# ::stappler::font::FontFaceSet::_sources

## BRIEF

Источники данных шрифтов

## CONTENT

Доступ: protected

Источники данных шрифтов

Тип: Vector<Rc<stappler::font::FontFaceData>>


# ::stappler::font::FontFaceSet::_faces

## BRIEF

Загруженные шрифты

## CONTENT

Доступ: protected

Загруженные шрифты

Тип: Vector<Rc<stappler::font::FontFaceObject>>


# ::stappler::font::FontFaceSet::_library

## BRIEF

Шрифтовая библиотека

## CONTENT

Доступ: protected

Шрифтовая библиотека

Тип: stappler::font::FontLibrary*


# ::stappler::font::FontFaceSet::_texturesCount

## BRIEF

Число требуемых текстур

## CONTENT

Доступ: protected

Число требуемых текстур

Тип: size_t


# ::stappler::font::FontFaceSet::_mutex

## BRIEF

Мутекс защиты данных набора

## CONTENT

Доступ: protected

Мутекс защиты данных набора

Тип: std::shared_mutex
