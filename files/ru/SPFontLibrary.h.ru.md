Title: SPFontLibrary.h


# CORE_FONT_SPFONTLIBRARY_H_

## BRIEF

Заголовок библиотеки шрифтов

## CONTENT

Заголовок библиотеки шрифтов


# ::stappler::font::FontFaceObjectHandle

## BRIEF

Контейнер для доступа к объекту специализации шрифта

## CONTENT

Контейнер для доступа к объекту специализации шрифта. Используется для многопотчной генерации текстур символов.

Базовые классы:
* RefBase<memory::StandartInterface>
* InterfaceObject<memory::StandartInterface>


# ::stappler::font::FontFaceObjectHandle::~FontFaceObjectHandle()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор

# ::stappler::font::FontFaceObjectHandle::init(Rc<stappler::font::FontLibrary> const&,Rc<stappler::font::FontFaceObject>&&,Function<void (const stappler::font::FontFaceObjectHandle *)>&&)

## BRIEF

Инициализирует контейнер

## CONTENT

Доступ: public

Инициализирует контейнер

Параметры:
* Rc<stappler::font::FontLibrary> const&
* Rc<stappler::font::FontFaceObject>&&
* Function<void (const stappler::font::FontFaceObjectHandle *)>&& - функция-деструктор

Возвращает:
* bool - true если успешно

# ::stappler::font::FontFaceObjectHandle::getFace() const

## BRIEF

Возвращает объект шрифта

## CONTENT

Доступ: public

Возвращает объект шрифта

Возвращает:
* FT_Face

# ::stappler::font::FontFaceObjectHandle::acquireTexture(char16_t,Callback<void (const stappler::font::CharTexture &)> const&)

## BRIEF

Запрашивает рендеринг текстуры символа

## CONTENT

Доступ: public

Запрашивает рендеринг текстуры символа

Параметры:
* char16_t - символ
* Callback<void (const stappler::font::CharTexture &)> const& - функтор. получающий результат

Возвращает:
* bool

# ::stappler::font::FontFaceObjectHandle::_library

## BRIEF

Шрифтовая библиотека

## CONTENT

Доступ: protected

Шрифтовая библиотека

Тип: Rc<stappler::font::FontLibrary>


# ::stappler::font::FontFaceObjectHandle::_face

## BRIEF

Специализация шрифта

## CONTENT

Доступ: protected

Специализация шрифта

Тип: Rc<stappler::font::FontFaceObject>


# ::stappler::font::FontFaceObjectHandle::_onDestroy

## BRIEF

Функция-деструктор

## CONTENT

Доступ: protected

Функция-деструктор

Тип: Function<void (const stappler::font::FontFaceObjectHandle *)>


# ::stappler::font::FontLibrary

## BRIEF

Класс шрифтовой библиотеки

## CONTENT

Класс шрифтовой библиотеки. Библиотека используется для формирования наборов шрифтов и управления ими.

Базовые классы:
* RefBase<memory::StandartInterface>
* InterfaceObject<memory::StandartInterface>


# ::stappler::font::FontLibrary::DefaultFontName

## BRIEF

Тип встроеного в приложение шрифта

## CONTENT

Доступ: public

Тип встроеного в приложение шрифта. Эти шрифты всегда предустановлены.

Значения:
* None
* RobotoFlex_VariableFont
* RobotoMono_VariableFont
* RobotoMono_Italic_VariableFont
* DejaVuSans


# ::stappler::font::FontLibrary::FontData

## BRIEF

Структура данных шрифта

## CONTENT

Доступ: public

Структура данных шрифта


# ::stappler::font::FontLibrary::FontData::persistent

## BRIEF

Флаг постоянной доступности данных

## CONTENT

Флаг постоянной доступности данных

Тип: bool


# ::stappler::font::FontLibrary::FontData::view

## BRIEF

Отображение данных

## CONTENT

Отображение данных

Тип: stappler::BytesView


# ::stappler::font::FontLibrary::FontData::bytes

## BRIEF

Хранимые данные

## CONTENT

Хранимые данные

Тип: stappler::InterfaceObject<stappler::memory::StandartInterface>::Bytes


# ::stappler::font::FontLibrary::FontData::callback

## BRIEF

Фугкция доступа к данным

## CONTENT

Фугкция доступа к данным

Тип: Function<stappler::InterfaceObject<stappler::memory::StandartInterface>::Bytes ()>


# ::stappler::font::FontLibrary::FontData::FontData(stappler::BytesView,bool)

## BRIEF

Создаёт структуру данных

## CONTENT

Создаёт структуру данных

Параметры:
* stappler::BytesView
* bool - true если данные постоянны и не нуждаются в копировании


# ::stappler::font::FontLibrary::FontData::FontData(stappler::InterfaceObject<stappler::memory::StandartInterface>::Bytes&&)

## BRIEF

Создаёт структуру данных

## CONTENT

Создаёт структуру данных

Параметры:
* stappler::InterfaceObject<stappler::memory::StandartInterface>::Bytes&& - данные для перемещения


# ::stappler::font::FontLibrary::FontData::FontData(Function<stappler::InterfaceObject<stappler::memory::StandartInterface>::Bytes ()>&&)

## BRIEF

Создаёт структуру данных

## CONTENT

Создаёт структуру данных

Параметры:
* Function<stappler::InterfaceObject<stappler::memory::StandartInterface>::Bytes ()>&&  -функция доступа к данным


# ::stappler::font::FontLibrary::getFont(stappler::font::FontLibrary::DefaultFontName)

## BRIEF

Получает данные встроенного шрифта

## CONTENT

Доступ: public

Получает данные встроенного шрифта

Параметры:
* stappler::font::FontLibrary::DefaultFontName

Возвращает:
* stappler::BytesView

# ::stappler::font::FontLibrary::getFontName(stappler::font::FontLibrary::DefaultFontName)

## BRIEF

Получает имя встроенного ширфта

## CONTENT

Доступ: public

Получает имя встроенного ширфта

Параметры:
* stappler::font::FontLibrary::DefaultFontName

Возвращает:
* stappler::StringView

# ::stappler::font::FontLibrary::FontLibrary()

## BRIEF

Конструктор

## CONTENT

Доступ: public

Конструктор


# ::stappler::font::FontLibrary::~FontLibrary()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор

# ::stappler::font::FontLibrary::openFontData(stappler::StringView,stappler::font::FontLayoutParameters,bool,Callback<stappler::font::FontLibrary::FontData ()> const&)

## BRIEF

Создаёт или открывает данные шрифта

## CONTENT

Доступ: public

Создаёт или открывает данные шрифта. Возвращает уже загруженные данные либо использует функцию для получения новых.

Параметры:
* stappler::StringView - имя блока данных
* stappler::font::FontLayoutParameters - стандартные параметры
* bool - использовать стандартные параметры. Если false - загружает параметры из файла шрифта
* Callback<stappler::font::FontLibrary::FontData ()> const& - функция для получения данных шрифта

Возвращает:
* Rc<stappler::font::FontFaceData>

# ::stappler::font::FontLibrary::openFontFace(stappler::StringView,stappler::font::FontSpecializationVector const&,Callback<stappler::font::FontLibrary::FontData ()> const&)

## BRIEF

Создаёт или открывает специализацию шрифта

## CONTENT

Доступ: public

Создаёт или открывает специализацию шрифта. Если специализация уже создана - возвращает её. Иначе пытается открыть данные шрифта и создать специализацию с их помощью.

Параметры:
* stappler::StringView - имя шрифта
* stappler::font::FontSpecializationVector const& - параметры специализации
* Callback<stappler::font::FontLibrary::FontData ()> const& - функция для получения данных шрифта.

Возвращает:
* Rc<stappler::font::FontFaceObject>

# ::stappler::font::FontLibrary::openFontFace(Rc<stappler::font::FontFaceData> const&,stappler::font::FontSpecializationVector const&)

## BRIEF

Создаёт или открывает специализацию шрифта

## CONTENT

Доступ: public

Создаёт или открывает специализацию шрифта

Параметры:
* Rc<stappler::font::FontFaceData> const& - данные шрифта
* stappler::font::FontSpecializationVector const& - параметры специализации

Возвращает:
* Rc<stappler::font::FontFaceObject>

# ::stappler::font::FontLibrary::invalidate()

## BRIEF

Закрывает все открытые объекты

## CONTENT

Доступ: public

Закрывает все открытые объекты

# ::stappler::font::FontLibrary::update()

## BRIEF

Выполняет плановое обновление, закрывает неиспользуемые объекты.

## CONTENT

Доступ: public

Выполняет плановое обновление, закрывает неиспользуемые объекты.

# ::stappler::font::FontLibrary::getNextId()

## BRIEF

Возвращает следующий доступный идентификатор шрифта

## CONTENT

Доступ: public

Возвращает следующий доступный идентификатор шрифта

Возвращает:
* uint16_t

# ::stappler::font::FontLibrary::releaseId(uint16_t)

## BRIEF

Помечает, что идентификатор больше не используется

## CONTENT

Доступ: public

Помечает, что идентификатор больше не используется

Параметры:
* uint16_t


# ::stappler::font::FontLibrary::makeThreadHandle(Rc<stappler::font::FontFaceObject> const&)

## BRIEF

Создаёт контейнер специализации шрифта для другого потока

## CONTENT

Доступ: public

Создаёт контейнер специализации шрифта для другого потока

Параметры:
* Rc<stappler::font::FontFaceObject> const&

Возвращает:
* Rc<stappler::font::FontFaceObjectHandle>

# ::stappler::font::FontLibrary::newFontFace(stappler::BytesView)

## BRIEF

Открывает шрифт в FreeType

## CONTENT

Доступ: protected

Открывает шрифт в FreeType

Параметры:
* stappler::BytesView

Возвращает:
* FT_Face

# ::stappler::font::FontLibrary::doneFontFace(FT_Face)

## BRIEF

Закрывает шрифт в FreeType

## CONTENT

Доступ: protected

Закрывает шрифт в FreeType

Параметры:
* FT_Face


# ::stappler::font::FontLibrary::_mutex

## BRIEF

Мутекс защиты объектов

## CONTENT

Доступ: protected

Мутекс защиты объектов

Тип: mem_std::Mutex


# ::stappler::font::FontLibrary::_sharedMutex

## BRIEF

Мутекс разделяемого доступа к объектам

## CONTENT

Доступ: protected

Мутекс разделяемого доступа к объектам

Тип: std::shared_mutex


# ::stappler::font::FontLibrary::_faces

## BRIEF

Список открытых специализаций шрифтов

## CONTENT

Доступ: protected

Список открытых специализаций шрифтов

Тип: Map<stappler::StringView, Rc<stappler::font::FontFaceObject>>


# ::stappler::font::FontLibrary::_data

## BRIEF

Список открытых данных шрифтов

## CONTENT

Доступ: protected

Список открытых данных шрифтов

Тип: Map<stappler::StringView, Rc<stappler::font::FontFaceData>>


# ::stappler::font::FontLibrary::_threads

## BRIEF

Список активных потоковых контейнеров для шрифтов

## CONTENT

Доступ: protected

Список активных потоковых контейнеров для шрифтов

Тип: Map<stappler::font::FontFaceObject *, Map<std::thread::id, Rc<stappler::font::FontFaceObjectHandle>>>


# ::stappler::font::FontLibrary::_library

## BRIEF

Библиотека FreeType

## CONTENT

Доступ: protected

Библиотека FreeType

Тип: FT_Library


# ::stappler::font::FontLibrary::_fontIds

## BRIEF

Битовая маска активных идентификаторов

## CONTENT

Доступ: protected

Битовая маска активных идентификаторов

Тип: std::bitset<1024 * 16>
