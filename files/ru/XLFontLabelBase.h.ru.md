Title: XLFontLabelBase.h


# XENOLITH_FONT_XLFONTLABELBASE_H_

## BRIEF

Заголовок основы для создания графических текстовых полей

## CONTENT

Заголовок основы для создания графических текстовых полей


# ::stappler::xenolith::font::TextLayout

## BRIEF

Тип для хранения готовой укладки текста

## CONTENT

Тип для хранения готовой укладки текста

Базовые классы:
* RefBase<memory::StandartInterface>
* InterfaceObject<memory::StandartInterface>


# ::stappler::xenolith::font::TextLayout::~TextLayout()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор


# ::stappler::xenolith::font::TextLayout::TextLayout(stappler::xenolith::font::FontController*,size_t,size_t)

## BRIEF

Конструктор

## CONTENT

Доступ: public

Конструктор

Параметры:
* stappler::xenolith::font::FontController* - контроллер шрифта
* size_t - предполагаемое число симвоов
* size_t - предполагаемое число строк


# ::stappler::xenolith::font::TextLayout::reserve(size_t,size_t)

## BRIEF

Резервирует пространство для символов и строк

## CONTENT

Доступ: public

Резервирует пространство для символов и строк

Параметры:
* size_t - предполагаемое число симвоов
* size_t - предполагаемое число строк


# ::stappler::xenolith::font::TextLayout::clear()

## BRIEF

Удаляет данные

## CONTENT

Доступ: public

Удаляет данные


# ::stappler::xenolith::font::TextLayout::empty() const

## BRIEF

Проверяет на пустоту

## CONTENT

Доступ: public

Проверяет на пустоту

Возвращает:
* bool

# ::stappler::xenolith::font::TextLayout::getData()

## BRIEF

Возвращает данные укладки

## CONTENT

Доступ: public

Возвращает данные укладки

Возвращает:
* TextLayoutData<stappler::InterfaceObject<stappler::memory::StandartInterface>::Interface>*

# ::stappler::xenolith::font::TextLayout::getData() const

## BRIEF

Возвращает данные укладки

## CONTENT

Доступ: public

Возвращает данные укладки

Возвращает:
* TextLayoutData<stappler::InterfaceObject<stappler::memory::StandartInterface>::Interface> const*

# ::stappler::xenolith::font::TextLayout::getWidth() const

## BRIEF

Возвращает ширину укладки в пикселях

## CONTENT

Доступ: public

Возвращает ширину укладки в пикселях

Возвращает:
* uint16_t

# ::stappler::xenolith::font::TextLayout::getHeight() const

## BRIEF

Возвращает высоту укладки в пикселях

## CONTENT

Доступ: public

Возвращает высоту укладки в пикселях

Возвращает:
* uint16_t

# ::stappler::xenolith::font::TextLayout::getMaxAdvance() const

## BRIEF

Возвращает максимальное смещение символа с начальной позиции

## CONTENT

Доступ: public

Возвращает максимальное смещение символа с начальной позиции. Может отличаться от ширины.

Возвращает:
* uint16_t

# ::stappler::xenolith::font::TextLayout::isOverflow() const

## BRIEF

Проверяет укладку на переполнение по ширине и строкам

## CONTENT

Доступ: public

Проверяет укладку на переполнение по ширине и строкам

Возвращает:
* bool

# ::stappler::xenolith::font::TextLayout::getController() const

## BRIEF

Возвращает шрифтовый контроллер

## CONTENT

Доступ: public

Возвращает шрифтовый контроллер

Возвращает:
* stappler::xenolith::font::FontController*

# ::stappler::xenolith::font::TextLayout::getLayout(stappler::font::FontParameters const&)

## BRIEF

Получает набор шрифтов для параметров шрифта

## CONTENT

Доступ: public

Получает набор шрифтов для параметров шрифта

Параметры:
* stappler::font::FontParameters const&

Возвращает:
* Rc<stappler::font::FontFaceSet>

# ::stappler::xenolith::font::TextLayout::begin() const

## BRIEF

Начинает обход строк и диапазонов

## CONTENT

Доступ: public

Начинает обход строк и диапазонов

Возвращает:
* stappler::font::RangeLineIterator

# ::stappler::xenolith::font::TextLayout::end() const

## BRIEF

Завершает обход строк и диапазонов

## CONTENT

Доступ: public

Завершает обход строк и диапазонов

Возвращает:
* stappler::font::RangeLineIterator

# ::stappler::xenolith::font::TextLayout::str(bool) const

## BRIEF

Конвертирует укладку в единую стоку

## CONTENT

Доступ: public

Конвертирует укладку в единую стоку

Параметры:
* bool

Возвращает:
* stappler::InterfaceObject<stappler::memory::StandartInterface>::WideString

# ::stappler::xenolith::font::TextLayout::str(uint32_t,uint32_t,size_t,bool,bool) const

## BRIEF

Конвертирует сегмент укладки в строку

## CONTENT

Доступ: public

Конвертирует сегмент укладки в строку

Параметры:
* uint32_t - начало сегмента
* uint32_t - конец сегмента
* size_t - максимальное число слов в сегменте
* bool - true если для обрезанных сегментов подставлять заполнитель
* bool - true если не включать в результат сегменты, отличающиеся по выравниванию

Возвращает:
* stappler::InterfaceObject<stappler::memory::StandartInterface>::WideString

# ::stappler::xenolith::font::TextLayout::getChar(int32_t,int32_t,stappler::font::CharSelectMode) const

## BRIEF

Ищет символ в укладке по позиции

## CONTENT

Доступ: public

Ищет символ в укладке по позиции

Параметры:
* int32_t - x
* int32_t - y
* stappler::font::CharSelectMode - резим поиска

Возвращает:
* Pair<uint32_t, stappler::font::CharSelectMode>

# ::stappler::xenolith::font::TextLayout::getLine(uint32_t) const

## BRIEF

Возвращает строку по индексу

## CONTENT

Доступ: public

Возвращает строку по индексу

Параметры:
* uint32_t

Возвращает:
* stappler::font::LineLayoutData const*

# ::stappler::xenolith::font::TextLayout::getLineForChar(uint32_t) const

## BRIEF

Возвращет индекс строки для символа

## CONTENT

Доступ: public

Возвращет индекс строки для символа

Параметры:
* uint32_t - номер символа

Возвращает:
* uint32_t

# ::stappler::xenolith::font::TextLayout::selectWord(uint32_t) const

## BRIEF

Выбирает слово целиком по символу

## CONTENT

Доступ: public

Выбирает слово целиком по символу

Параметры:
* uint32_t - номер символа

Возвращает:
* Pair<uint32_t, uint32_t> - начало и конец слова

# ::stappler::xenolith::font::TextLayout::getLineRect(uint32_t,float,geom::Vec2 const&) const

## BRIEF

Возвращает прямоугольник вокруг строки

## CONTENT

Доступ: public

Возвращает прямоугольник вокруг строки

Параметры:
* uint32_t - номер строки
* float - плотность пикселей
* geom::Vec2 const& - исходная точка

Возвращает:
* geom::Rect

# ::stappler::xenolith::font::TextLayout::getLineRect(stappler::font::LineLayoutData const&,float,geom::Vec2 const&) const

## BRIEF

Возвращает прямоугольник вокруг строки

## CONTENT

Доступ: public

Возвращает прямоугольник вокруг строки

Параметры:
* stappler::font::LineLayoutData const& - данные строки
* float - плотность пикселей
* geom::Vec2 const& - исходная точка

Возвращает:
* geom::Rect

# ::stappler::xenolith::font::TextLayout::getLineForCharId(uint32_t) const

## BRIEF

Возвращает индекс строки для символа

## CONTENT

Доступ: public

Возвращает индекс строки для символа

Параметры:
* uint32_t - номер символа

Возвращает:
* uint16_t

# ::stappler::xenolith::font::TextLayout::getLabelRects(uint32_t,uint32_t,float,geom::Vec2 const&,geom::Padding const&) const

## BRIEF

Возвращает набор прямоугольников для подсвечивания строк

## CONTENT

Доступ: public

Возвращает набор прямоугольников для подсвечивания строк

Параметры:
* uint32_t - первая стока
* uint32_t - последняя строка
* float - плотность пикселей
* geom::Vec2 const& - начальная позиция
* geom::Padding const& - расширение прямоугольников

Возвращает:
* Vector<geom::Rect>

# ::stappler::xenolith::font::TextLayout::getLabelRects(Vector<geom::Rect>&,uint32_t,uint32_t,float,geom::Vec2 const&,geom::Padding const&) const

## BRIEF

Возвращает набор прямоугольников для подсвечивания строк

## CONTENT

Доступ: public

Возвращает набор прямоугольников для подсвечивания строк

Параметры:
* Vector<geom::Rect>& - массив для записи прямоугольников
* uint32_t - первая стока
* uint32_t - последняя строка
* float - плотность пикселей
* geom::Vec2 const& - начальная позиция
* geom::Padding const& - расширение прямоугольников


# ::stappler::xenolith::font::TextLayout::_data

## BRIEF

Данные укладки

## CONTENT

Доступ: protected

Данные укладки

Тип: TextLayoutData<memory::StandartInterface>


# ::stappler::xenolith::font::TextLayout::_handle

## BRIEF

Контроллер

## CONTENT

Доступ: protected

Контроллер

Тип: Rc<stappler::xenolith::font::FontController>


# ::stappler::xenolith::font::TextLayout::_fonts

## BRIEF

Набор используемых шрифтов

## CONTENT

Доступ: protected

Набор используемых шрифтов

Тип: Set<Rc<stappler::font::FontFaceSet>>


# ::stappler::xenolith::font::LabelBase

## BRIEF

Базовый тип для создания текстовых полей

## CONTENT

Базовый тип для создания текстовых полей. Реализует стилизованное текстовое поле с возможностью использовать несколько стилей.


# ::stappler::xenolith::font::LabelBase::FontFamily

## BRIEF

Тип для хранения индекса шрифтового семейства

## CONTENT

Доступ: public

Тип для хранения индекса шрифтового семейства

# ::stappler::xenolith::font::LabelBase::Opacity

## BRIEF

Тип для прозрачности

## CONTENT

Доступ: public

Тип для прозрачности

# ::stappler::xenolith::font::LabelBase::Style

## BRIEF

Тип стиля фрагмента

## CONTENT

Доступ: public

Тип стиля фрагмента


# ::stappler::xenolith::font::LabelBase::Style::Name

## BRIEF

Имя параметра

## CONTENT

Имя параметра

Значения:
* TextTransform
* TextDecoration
* Hyphens
* VerticalAlign
* Color
* Opacity
* FontSize
* FontStyle
* FontWeight
* FontStretch
* FontFamily
* FontGrade


# ::stappler::xenolith::font::LabelBase::Style::Value

## BRIEF

Значение параметра

## CONTENT

Значение параметра

# ::stappler::xenolith::font::LabelBase::Style::Value::textTransform

## BRIEF

Способ трансформации текста

## CONTENT

Способ трансформации текста

Тип: stappler::font::TextTransform


# ::stappler::xenolith::font::LabelBase::Style::Value::textDecoration

## BRIEF

Декорации текста

## CONTENT

Декорации текста

Тип: stappler::font::TextDecoration


# ::stappler::xenolith::font::LabelBase::Style::Value::hyphens

## BRIEF

Режим переносов

## CONTENT

Режим переносов

Тип: stappler::font::Hyphens


# ::stappler::xenolith::font::LabelBase::Style::Value::verticalAlign

## BRIEF

Выравнивание по вертикали

## CONTENT

Выравнивание по вертикали

Тип: stappler::font::VerticalAlign


# ::stappler::xenolith::font::LabelBase::Style::Value::color

## BRIEF

Цвет текста

## CONTENT

Цвет текста

Тип: stappler::geom::Color3B


# ::stappler::xenolith::font::LabelBase::Style::Value::opacity

## BRIEF

Прозрачность текста

## CONTENT

Прозрачность текста

Тип: uint8_t


# ::stappler::xenolith::font::LabelBase::Style::Value::fontSize

## BRIEF

Размер шрифта

## CONTENT

Размер шрифта

Тип: stappler::font::FontSize


# ::stappler::xenolith::font::LabelBase::Style::Value::fontStyle

## BRIEF

Стиль шрифта

## CONTENT

Стиль шрифта

Тип: stappler::font::FontStyle


# ::stappler::xenolith::font::LabelBase::Style::Value::fontWeight

## BRIEF

Толщина шрифта

## CONTENT

Толщина шрифта

Тип: stappler::font::FontWeight


# ::stappler::xenolith::font::LabelBase::Style::Value::fontStretch

## BRIEF

Плотность шрифта

## CONTENT

Плотность шрифта

Тип: stappler::font::FontStretch


# ::stappler::xenolith::font::LabelBase::Style::Value::fontGrade

## BRIEF

Утолщение шрифта

## CONTENT

Утолщение шрифта

Тип: stappler::font::FontGrade


# ::stappler::xenolith::font::LabelBase::Style::Value::fontFamily

## BRIEF

Индекс семейства шрифтов

## CONTENT

Индекс семейства шрифтов

Тип: uint32_t


# ::stappler::xenolith::font::LabelBase::Style::Value::Value()

## BRIEF

Конструктор

## CONTENT

Конструктор


# ::stappler::xenolith::font::LabelBase::Style::Param

## BRIEF

Тип параметра стиля

## CONTENT

Тип параметра стиля


# ::stappler::xenolith::font::LabelBase::Style::Param::name

## BRIEF

Имя параметра

## CONTENT

Имя параметра

Тип: stappler::xenolith::font::LabelBase::Style::Name


# ::stappler::xenolith::font::LabelBase::Style::Param::value

## BRIEF

Значение параметра

## CONTENT

Значение параметра

Тип: stappler::xenolith::font::LabelBase::Style::Value


# ::stappler::xenolith::font::LabelBase::Style::Param::Param(stappler::font::TextTransform const&)

## BRIEF

Создаёт параметр

## CONTENT

Создаёт параметр

Параметры:
* stappler::font::TextTransform const&


# ::stappler::xenolith::font::LabelBase::Style::Param::Param(stappler::font::TextDecoration const&)

## BRIEF

Создаёт параметр

## CONTENT

Создаёт параметр

Параметры:
* stappler::font::TextDecoration const&


# ::stappler::xenolith::font::LabelBase::Style::Param::Param(stappler::font::Hyphens const&)

## BRIEF

Создаёт параметр

## CONTENT

Создаёт параметр

Параметры:
* stappler::font::Hyphens const&


# ::stappler::xenolith::font::LabelBase::Style::Param::Param(stappler::font::VerticalAlign const&)

## BRIEF

Создаёт параметр

## CONTENT

Создаёт параметр

Параметры:
* stappler::font::VerticalAlign const&


# ::stappler::xenolith::font::LabelBase::Style::Param::Param(const stappler::geom::Color3B&)

## BRIEF

Создаёт параметр

## CONTENT

Создаёт параметр

Параметры:
* const stappler::geom::Color3B&


# ::stappler::xenolith::font::LabelBase::Style::Param::Param(const stappler::geom::Color&)

## BRIEF

Создаёт параметр

## CONTENT

Создаёт параметр

Параметры:
* const stappler::geom::Color&


# ::stappler::xenolith::font::LabelBase::Style::Param::Param(stappler::xenolith::font::LabelBase::Opacity const&)

## BRIEF

Создаёт параметр

## CONTENT

Создаёт параметр

Параметры:
* stappler::xenolith::font::LabelBase::Opacity const&


# ::stappler::xenolith::font::LabelBase::Style::Param::Param(stappler::font::FontSize const&)

## BRIEF

Создаёт параметр

## CONTENT

Создаёт параметр

Параметры:
* stappler::font::FontSize const&


# ::stappler::xenolith::font::LabelBase::Style::Param::Param(stappler::font::FontStyle const&)

## BRIEF

Создаёт параметр

## CONTENT

Создаёт параметр

Параметры:
* stappler::font::FontStyle const&


# ::stappler::xenolith::font::LabelBase::Style::Param::Param(stappler::font::FontWeight const&)

## BRIEF

Создаёт параметр

## CONTENT

Создаёт параметр

Параметры:
* stappler::font::FontWeight const&


# ::stappler::xenolith::font::LabelBase::Style::Param::Param(stappler::font::FontStretch const&)

## BRIEF

Создаёт параметр

## CONTENT

Создаёт параметр

Параметры:
* stappler::font::FontStretch const&


# ::stappler::xenolith::font::LabelBase::Style::Param::Param(stappler::xenolith::font::LabelBase::FontFamily const&)

## BRIEF

Создаёт параметр

## CONTENT

Создаёт параметр

Параметры:
* stappler::xenolith::font::LabelBase::FontFamily const&


# ::stappler::xenolith::font::LabelBase::Style::Param::Param(stappler::font::FontGrade const&)

## BRIEF

Создаёт параметр

## CONTENT

Создаёт параметр

Параметры:
* stappler::font::FontGrade const&


# ::stappler::xenolith::font::LabelBase::Style::Style()

## BRIEF

Конструктор

## CONTENT

Конструктор


# ::stappler::xenolith::font::LabelBase::Style::Style(stappler::xenolith::font::LabelBase::Style const&)

## BRIEF

Конструктор копирования

## CONTENT

Конструктор копирования

Параметры:
* stappler::xenolith::font::LabelBase::Style const&


# ::stappler::xenolith::font::LabelBase::Style::Style(stappler::xenolith::font::LabelBase::Style&&)

## BRIEF

Конструктор перемещения

## CONTENT

Конструктор перемещения

Параметры:
* stappler::xenolith::font::LabelBase::Style&&


# ::stappler::xenolith::font::LabelBase::Style::operator=(stappler::xenolith::font::LabelBase::Style const&)

## BRIEF

Оператор копирования

## CONTENT

Оператор копирования

Параметры:
* stappler::xenolith::font::LabelBase::Style const&

Возвращает:
* stappler::xenolith::font::LabelBase::Style&

# ::stappler::xenolith::font::LabelBase::Style::operator=(stappler::xenolith::font::LabelBase::Style&&)

## BRIEF

Оператор перемещения

## CONTENT

Оператор перемещения

Параметры:
* stappler::xenolith::font::LabelBase::Style&&

Возвращает:
* stappler::xenolith::font::LabelBase::Style&

# ::stappler::xenolith::font::LabelBase::Style::Style(std::initializer_list<Param>)

## BRIEF

Созаёт стиль из набора параметров

## CONTENT

Созаёт стиль из набора параметров

Параметры:
* std::initializer_list<Param>


# ::stappler::xenolith::font::LabelBase::Style::Style<class>(T const&)

## BRIEF

Устанавливает параметр

## CONTENT

Устанавливает параметр

Параметры шаблона:
* class T

Параметры:
* T const&


# ::stappler::xenolith::font::LabelBase::Style::set<class>(T const&)

## BRIEF

Устанавливает параметр

## CONTENT

Устанавливает параметр

Параметры шаблона:
* class T

Параметры:
* T const&

Возвращает:
* stappler::xenolith::font::LabelBase::Style&

# ::stappler::xenolith::font::LabelBase::Style::set(stappler::xenolith::font::LabelBase::Style::Param const&,bool)

## BRIEF

Устанавливает параметр

## CONTENT

Устанавливает параметр

Параметры:
* stappler::xenolith::font::LabelBase::Style::Param const&
* bool - true для перезаписи уже установленного


# ::stappler::xenolith::font::LabelBase::Style::merge(stappler::xenolith::font::LabelBase::Style const&)

## BRIEF

Объединяет стиль с текущим

## CONTENT

Объединяет стиль с текущим

Параметры:
* stappler::xenolith::font::LabelBase::Style const&


# ::stappler::xenolith::font::LabelBase::Style::clear()

## BRIEF

Удаляет все параметры

## CONTENT

Удаляет все параметры

# ::stappler::xenolith::font::LabelBase::Style::params

## BRIEF

Параметры стиля

## CONTENT

Параметры стиля

Тип: Vector<stappler::xenolith::font::LabelBase::Style::Param>


# ::stappler::xenolith::font::LabelBase::StyleSpec

## BRIEF

Тип стилизованного сегмента

## CONTENT

Доступ: public

Тип стилизованного сегмента


# ::stappler::xenolith::font::LabelBase::StyleSpec::start

## BRIEF

Начало сегмента

## CONTENT

Начало сегмента

Тип: size_t


# ::stappler::xenolith::font::LabelBase::StyleSpec::length

## BRIEF

Длина сегмента

## CONTENT

Длина сегмента

Тип: size_t


# ::stappler::xenolith::font::LabelBase::StyleSpec::style

## BRIEF

Стиль сегмента

## CONTENT

Стиль сегмента

Тип: stappler::xenolith::font::LabelBase::Style


# ::stappler::xenolith::font::LabelBase::StyleSpec::StyleSpec(size_t,size_t,stappler::xenolith::font::LabelBase::Style&&)

## BRIEF

Конструктор

## CONTENT

Конструктор

Параметры:
* size_t - начало сегмента
* size_t - конец сегмента
* stappler::xenolith::font::LabelBase::Style&& - стиль сегмента


# ::stappler::xenolith::font::LabelBase::StyleSpec::StyleSpec(size_t,size_t,stappler::xenolith::font::LabelBase::Style const&)

## BRIEF

Конструктор

## CONTENT

Конструктор

Параметры:
* size_t - начало сегмента
* size_t - конец сегмента
* stappler::xenolith::font::LabelBase::Style const& - стиль сегмента


# ::stappler::xenolith::font::LabelBase::DescriptionStyle

## BRIEF

Полное описание стиля текста

## CONTENT

Доступ: public

Полное описание стиля текста


# ::stappler::xenolith::font::LabelBase::DescriptionStyle::font

## BRIEF

Параметры шрифта

## CONTENT

Параметры шрифта

Тип: stappler::font::FontParameters


# ::stappler::xenolith::font::LabelBase::DescriptionStyle::text

## BRIEF

Параметры текста

## CONTENT

Параметры текста

Тип: stappler::font::TextParameters


# ::stappler::xenolith::font::LabelBase::DescriptionStyle::colorDirty

## BRIEF

Флаг изменения цвета

## CONTENT

Флаг изменения цвета

Тип: bool


# ::stappler::xenolith::font::LabelBase::DescriptionStyle::opacityDirty

## BRIEF

Флаг изменения прозрачности

## CONTENT

Флаг изменения прозрачности

Тип: bool


# ::stappler::xenolith::font::LabelBase::DescriptionStyle::tag

## BRIEF

Тег стиля

## CONTENT

Тег стиля

Тип: uint32_t


# ::stappler::xenolith::font::LabelBase::DescriptionStyle::DescriptionStyle()

## BRIEF

Конструктор

## CONTENT

Конструктор

# ::stappler::xenolith::font::LabelBase::DescriptionStyle::getConfigName(bool) const

## BRIEF

Возвращает имя для конфигурации шрифта

## CONTENT

Возвращает имя для конфигурации шрифта

Параметры:
* bool - true для SmallCaps

Возвращает:
* stappler::mem_std::String

# ::stappler::xenolith::font::LabelBase::DescriptionStyle::merge(Rc<font::FontController> const&,stappler::xenolith::font::LabelBase::Style const&) const

## BRIEF

Записывает параметры из стиля в конфигурацию

## CONTENT

Записывает параметры из стиля в конфигурацию

Параметры:
* Rc<font::FontController> const&
* stappler::xenolith::font::LabelBase::Style const&

Возвращает:
* stappler::xenolith::font::LabelBase::DescriptionStyle

# ::stappler::xenolith::font::LabelBase::DescriptionStyle::operator==(stappler::xenolith::font::LabelBase::DescriptionStyle const&) const

## BRIEF

Оператор сравнения

## CONTENT

Оператор сравнения

Параметры:
* stappler::xenolith::font::LabelBase::DescriptionStyle const&

Возвращает:
* bool

# ::stappler::xenolith::font::LabelBase::DescriptionStyle::operator!=(stappler::xenolith::font::LabelBase::DescriptionStyle const&) const

## BRIEF

Оператор сравнения

## CONTENT

Оператор сравнения

Параметры:
* stappler::xenolith::font::LabelBase::DescriptionStyle const&

Возвращает:
* bool

# ::stappler::xenolith::font::LabelBase::DescriptionStyle::construct<typename>(stappler::StringView const&,stappler::font::FontSize,Args &&...)

## BRIEF

Создаёт описание стиля

## CONTENT

Создаёт описание стиля

Параметры шаблона:
* typename Args

Параметры:
* stappler::StringView const& - семейство шрифтов
* stappler::font::FontSize - размер шрифта
* Args &&... - другие параметры

Возвращает:
* stappler::xenolith::font::LabelBase::DescriptionStyle

# ::stappler::xenolith::font::LabelBase::DescriptionStyle::readParameter(stappler::xenolith::font::LabelBase::DescriptionStyle&,stappler::font::TextTransform)

## BRIEF

Читает параметр в конструкторе

## CONTENT

Читает параметр в конструкторе

Параметры:
* stappler::xenolith::font::LabelBase::DescriptionStyle&
* stappler::font::TextTransform


# ::stappler::xenolith::font::LabelBase::DescriptionStyle::readParameter(stappler::xenolith::font::LabelBase::DescriptionStyle&,stappler::font::TextDecoration)

## BRIEF

Читает параметр в конструкторе

## CONTENT

Читает параметр в конструкторе

Параметры:
* stappler::xenolith::font::LabelBase::DescriptionStyle&
* stappler::font::TextDecoration


# ::stappler::xenolith::font::LabelBase::DescriptionStyle::readParameter(stappler::xenolith::font::LabelBase::DescriptionStyle&,stappler::font::Hyphens)

## BRIEF

Читает параметр в конструкторе

## CONTENT

Читает параметр в конструкторе

Параметры:
* stappler::xenolith::font::LabelBase::DescriptionStyle&
* stappler::font::Hyphens


# ::stappler::xenolith::font::LabelBase::DescriptionStyle::readParameter(stappler::xenolith::font::LabelBase::DescriptionStyle&,stappler::font::VerticalAlign)

## BRIEF

Читает параметр в конструкторе

## CONTENT

Читает параметр в конструкторе

Параметры:
* stappler::xenolith::font::LabelBase::DescriptionStyle&
* stappler::font::VerticalAlign


# ::stappler::xenolith::font::LabelBase::DescriptionStyle::readParameter(stappler::xenolith::font::LabelBase::DescriptionStyle&,stappler::xenolith::font::LabelBase::Opacity)

## BRIEF

Читает параметр в конструкторе

## CONTENT

Читает параметр в конструкторе

Параметры:
* stappler::xenolith::font::LabelBase::DescriptionStyle&
* stappler::xenolith::font::LabelBase::Opacity


# ::stappler::xenolith::font::LabelBase::DescriptionStyle::readParameter(stappler::xenolith::font::LabelBase::DescriptionStyle&,const stappler::geom::Color3B&)

## BRIEF

Читает параметр в конструкторе

## CONTENT

Читает параметр в конструкторе

Параметры:
* stappler::xenolith::font::LabelBase::DescriptionStyle&
* const stappler::geom::Color3B&


# ::stappler::xenolith::font::LabelBase::DescriptionStyle::readParameter(stappler::xenolith::font::LabelBase::DescriptionStyle&,stappler::font::FontSize)

## BRIEF

Читает параметр в конструкторе

## CONTENT

Читает параметр в конструкторе

Параметры:
* stappler::xenolith::font::LabelBase::DescriptionStyle&
* stappler::font::FontSize


# ::stappler::xenolith::font::LabelBase::DescriptionStyle::readParameter(stappler::xenolith::font::LabelBase::DescriptionStyle&,stappler::font::FontStyle)

## BRIEF

Читает параметр в конструкторе

## CONTENT

Читает параметр в конструкторе

Параметры:
* stappler::xenolith::font::LabelBase::DescriptionStyle&
* stappler::font::FontStyle


# ::stappler::xenolith::font::LabelBase::DescriptionStyle::readParameter(stappler::xenolith::font::LabelBase::DescriptionStyle&,stappler::font::FontWeight)

## BRIEF

Читает параметр в конструкторе

## CONTENT

Читает параметр в конструкторе

Параметры:
* stappler::xenolith::font::LabelBase::DescriptionStyle&
* stappler::font::FontWeight


# ::stappler::xenolith::font::LabelBase::DescriptionStyle::readParameter(stappler::xenolith::font::LabelBase::DescriptionStyle&,stappler::font::FontStretch)

## BRIEF

Читает параметр в конструкторе

## CONTENT

Читает параметр в конструкторе

Параметры:
* stappler::xenolith::font::LabelBase::DescriptionStyle&
* stappler::font::FontStretch


# ::stappler::xenolith::font::LabelBase::DescriptionStyle::readParameter(stappler::xenolith::font::LabelBase::DescriptionStyle&,stappler::font::FontGrade)

## BRIEF

Читает параметр в конструкторе

## CONTENT

Читает параметр в конструкторе

Параметры:
* stappler::xenolith::font::LabelBase::DescriptionStyle&
* stappler::font::FontGrade


# ::stappler::xenolith::font::LabelBase::DescriptionStyle::readParameters<typename,typename>(stappler::xenolith::font::LabelBase::DescriptionStyle&,T&&,Args &&...)

## BRIEF

Читает параметр в конструкторе

## CONTENT

Читает параметр в конструкторе

Параметры шаблона:
* typename T
* typename Args

Параметры:
* stappler::xenolith::font::LabelBase::DescriptionStyle&
* T&&
* Args &&...


# ::stappler::xenolith::font::LabelBase::DescriptionStyle::readParameters<typename>(stappler::xenolith::font::LabelBase::DescriptionStyle&,T&&)

## BRIEF

Читает параметр в конструкторе

## CONTENT

Читает параметр в конструкторе

Параметры шаблона:
* typename T

Параметры:
* stappler::xenolith::font::LabelBase::DescriptionStyle&
* T&&


# ::stappler::xenolith::font::LabelBase::DescriptionStyle::readParameters(stappler::xenolith::font::LabelBase::DescriptionStyle&)

## BRIEF

Читает параметр в конструкторе

## CONTENT

Читает параметр в конструкторе

Параметры:
* stappler::xenolith::font::LabelBase::DescriptionStyle&


# ::stappler::xenolith::font::LabelBase::ExternalFormatter

## BRIEF

Структура для вычисления параметров текстового поля без создания объекта поля

## CONTENT

Доступ: public

Структура для вычисления параметров текстового поля без создания объекта поля

Базовые классы:
* Ref


# ::stappler::xenolith::font::LabelBase::ExternalFormatter::~ExternalFormatter()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор


# ::stappler::xenolith::font::LabelBase::ExternalFormatter::init(font::FontController*,float,float)

## BRIEF

Конструктор

## CONTENT

Доступ: public

Конструктор

Параметры:
* font::FontController* - контроллер шрифта
* float - ширина поля
* float - плотность пикселей

Возвращает:
* bool

# ::stappler::xenolith::font::LabelBase::ExternalFormatter::setLineHeightAbsolute(float)

## BRIEF

Устанавливает высоту строки в абсолютном значении

## CONTENT

Доступ: public

Устанавливает высоту строки в абсолютном значении

Параметры:
* float


# ::stappler::xenolith::font::LabelBase::ExternalFormatter::setLineHeightRelative(float)

## BRIEF

Устанавливает высоту строки по отношению к размеру шрифта

## CONTENT

Доступ: public

Устанавливает высоту строки по отношению к размеру шрифта

Параметры:
* float


# ::stappler::xenolith::font::LabelBase::ExternalFormatter::reserve(size_t,size_t)

## BRIEF

Запасает место под символя и строки

## CONTENT

Доступ: public

Запасает место под символя и строки

Параметры:
* size_t - число символов
* size_t - число строк


# ::stappler::xenolith::font::LabelBase::ExternalFormatter::addString(stappler::xenolith::font::LabelBase::DescriptionStyle const&,stappler::StringView const&,bool)

## BRIEF

Добавляет строку для форматирования

## CONTENT

Доступ: public

Добавляет строку для форматирования

Параметры:
* stappler::xenolith::font::LabelBase::DescriptionStyle const& - стиль строки
* stappler::StringView const& - строка
* bool - true для зависимой от локали строки


# ::stappler::xenolith::font::LabelBase::ExternalFormatter::addString(stappler::xenolith::font::LabelBase::DescriptionStyle const&,stappler::WideStringView const&,bool)

## BRIEF

Добавляет строку для форматирования

## CONTENT

Доступ: public

Добавляет строку для форматирования

Параметры:
* stappler::xenolith::font::LabelBase::DescriptionStyle const& - стиль строки
* stappler::WideStringView const& - строка
* bool - true для зависимой от локали строки


# ::stappler::xenolith::font::LabelBase::ExternalFormatter::finalize()

## BRIEF

Завершает формирование поля

## CONTENT

Доступ: public

Завершает формирование поля

Возвращает:
* stappler::geom::Size2

# ::stappler::xenolith::font::LabelBase::ExternalFormatter::begin

## BRIEF

Флаг начала

## CONTENT

Доступ: protected

Флаг начала

Тип: bool


# ::stappler::xenolith::font::LabelBase::ExternalFormatter::_spec

## BRIEF

Данные укладки

## CONTENT

Доступ: protected

Данные укладки

Тип: Rc<font::TextLayout>


# ::stappler::xenolith::font::LabelBase::ExternalFormatter::_formatter

## BRIEF

Инструмент форматирования текста

## CONTENT

Доступ: protected

Инструмент форматирования текста

Тип: font::Formatter


# ::stappler::xenolith::font::LabelBase::ExternalFormatter::_density

## BRIEF

Плотность пикселя

## CONTENT

Доступ: protected

Плотность пикселя

Тип: float


# ::stappler::xenolith::font::LabelBase::StyleVec

## BRIEF

Тип вектора стилей

## CONTENT

Доступ: public

Тип вектора стилей

# ::stappler::xenolith::font::LabelBase::getLocalizedString(stappler::StringView const&)

## BRIEF

Возвращает локализованную версию строки

## CONTENT

Доступ: public

Возвращает локализованную версию строки

Параметры:
* stappler::StringView const&

Возвращает:
* stappler::mem_std::WideString

# ::stappler::xenolith::font::LabelBase::getLocalizedString(stappler::WideStringView const&)

## BRIEF

Возвращает локализованную версию строки

## CONTENT

Доступ: public

Возвращает локализованную версию строки

Параметры:
* stappler::WideStringView const&

Возвращает:
* stappler::mem_std::WideString

# ::stappler::xenolith::font::LabelBase::getLabelSize(font::FontController*,stappler::xenolith::font::LabelBase::DescriptionStyle const&,stappler::StringView const&,float,bool)

## BRIEF

Вычисляет размер поля для строки

## CONTENT

Доступ: public

Вычисляет размер поля для строки

Параметры:
* font::FontController* - контроллер шрифта
* stappler::xenolith::font::LabelBase::DescriptionStyle const& - стиль строки
* stappler::StringView const& - строка
* float - ширина строки
* bool - true для локализованной строки

Возвращает:
* stappler::geom::Size2

# ::stappler::xenolith::font::LabelBase::getLabelSize(font::FontController*,stappler::xenolith::font::LabelBase::DescriptionStyle const&,stappler::WideStringView const&,float,bool)

## BRIEF

Вычисляет размер поля для строки

## CONTENT

Доступ: public

Вычисляет размер поля для строки

Параметры:
* font::FontController* - контроллер шрифта
* stappler::xenolith::font::LabelBase::DescriptionStyle const& - стиль строки
* stappler::WideStringView const& - строка
* float - ширина строки
* bool - true для локализованной строки

Возвращает:
* stappler::geom::Size2

# ::stappler::xenolith::font::LabelBase::getStringWidth(font::FontController*,stappler::xenolith::font::LabelBase::DescriptionStyle const&,stappler::StringView const&,bool)

## BRIEF

Возвращает ширину для строки

## CONTENT

Доступ: public

Возвращает ширину для строки

Параметры:
* font::FontController* - контроллер шрифта
* stappler::xenolith::font::LabelBase::DescriptionStyle const& - стиль строки
* stappler::StringView const& - строка
* bool - true для локализованной строки

Возвращает:
* float

# ::stappler::xenolith::font::LabelBase::getStringWidth(font::FontController*,stappler::xenolith::font::LabelBase::DescriptionStyle const&,stappler::WideStringView const&,bool)

## BRIEF

Возвращает ширину для строки

## CONTENT

Доступ: public

Возвращает ширину для строки

Параметры:
* font::FontController* - контроллер шрифта
* stappler::xenolith::font::LabelBase::DescriptionStyle const& - стиль строки
* stappler::WideStringView const& - строка
* bool - true для локализованной строки

Возвращает:
* float

# ::stappler::xenolith::font::LabelBase::~LabelBase()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор


# ::stappler::xenolith::font::LabelBase::isLabelDirty() const

## BRIEF

Проверяет, изменено ли поле с последнего обновления

## CONTENT

Доступ: public

Проверяет, изменено ли поле с последнего обновления

Возвращает:
* bool

# ::stappler::xenolith::font::LabelBase::compileStyle() const

## BRIEF

Компилирует стили поля

## CONTENT

Доступ: public

Компилирует стили поля. Разбивает и совмещает стили так, чтобы получилась линейная одноуровневая последовательность.

Возвращает:
* StyleVec

# ::stappler::xenolith::font::LabelBase::setString<char...>(metastring::metastring<Chars...>&&)

## BRIEF

Устанавливает строку

## CONTENT

Доступ: public

Устанавливает строку

Параметры шаблона:
* char Chars

Параметры:
* metastring::metastring<Chars...>&& - метастрока


# ::stappler::xenolith::font::LabelBase::setString(stappler::StringView const&)

## BRIEF

Устанавливает строку

## CONTENT

Доступ: public

Устанавливает строку

Параметры:
* stappler::StringView const&


# ::stappler::xenolith::font::LabelBase::setString(stappler::WideStringView const&)

## BRIEF

Устанавливает строку

## CONTENT

Доступ: public

Устанавливает строку

Параметры:
* stappler::WideStringView const&


# ::stappler::xenolith::font::LabelBase::setLocalizedString(size_t)

## BRIEF

Устанавливает локализованную строку по индексу

## CONTENT

Доступ: public

Устанавливает локализованную строку по индексу

Параметры:
* size_t


# ::stappler::xenolith::font::LabelBase::getString() const

## BRIEF

Возвращает строку поля

## CONTENT

Доступ: public

Возвращает строку поля

Возвращает:
* stappler::WideStringView

# ::stappler::xenolith::font::LabelBase::getString8() const

## BRIEF

Возвращает строку поля в виде UTF-8

## CONTENT

Доступ: public

Возвращает строку поля в виде UTF-8

Возвращает:
* stappler::StringView

# ::stappler::xenolith::font::LabelBase::erase16(size_t,size_t)

## BRIEF

Удаляет сегмент из строки в контексте UTF-16

## CONTENT

Доступ: public

Удаляет сегмент из строки в контексте UTF-16

Параметры:
* size_t - начало сегмента
* size_t - длина сегента


# ::stappler::xenolith::font::LabelBase::erase8(size_t,size_t)

## BRIEF

Удаляет сегмент из строки в контексте UTF-8

## CONTENT

Доступ: public

Удаляет сегмент из строки в контексте UTF-8

Параметры:
* size_t - начало сегмента
* size_t - длина сегента


# ::stappler::xenolith::font::LabelBase::append(stappler::StringView const&)

## BRIEF

Добавляет строку

## CONTENT

Доступ: public

Добавляет строку

Параметры:
* stappler::StringView const&


# ::stappler::xenolith::font::LabelBase::append(stappler::WideStringView const&)

## BRIEF

Добавляет строку

## CONTENT

Доступ: public

Добавляет строку

Параметры:
* stappler::WideStringView const&


# ::stappler::xenolith::font::LabelBase::prepend(stappler::StringView const&)

## BRIEF

Добавляет строку в начало

## CONTENT

Доступ: public

Добавляет строку в начало

Параметры:
* stappler::StringView const&


# ::stappler::xenolith::font::LabelBase::prepend(stappler::WideStringView const&)

## BRIEF

Добавляет строку в начало

## CONTENT

Доступ: public

Добавляет строку в начало

Параметры:
* stappler::WideStringView const&


# ::stappler::xenolith::font::LabelBase::setTextRangeStyle(size_t,size_t,stappler::xenolith::font::LabelBase::Style&&)

## BRIEF

Устанавливает стиль для сегмента

## CONTENT

Доступ: public

Устанавливает стиль для сегмента. Сегмент определяется по UTF-16

Параметры:
* size_t - начало сегмента
* size_t - длина сегента
* stappler::xenolith::font::LabelBase::Style&&


# ::stappler::xenolith::font::LabelBase::appendTextWithStyle(stappler::StringView const&,stappler::xenolith::font::LabelBase::Style&&)

## BRIEF

Добавляет стилизованную строку

## CONTENT

Доступ: public

Добавляет стилизованную строку

Параметры:
* stappler::StringView const&
* stappler::xenolith::font::LabelBase::Style&&


# ::stappler::xenolith::font::LabelBase::appendTextWithStyle(stappler::WideStringView const&,stappler::xenolith::font::LabelBase::Style&&)

## BRIEF

Добавляет стилизованную строку

## CONTENT

Доступ: public

Добавляет стилизованную строку

Параметры:
* stappler::WideStringView const&
* stappler::xenolith::font::LabelBase::Style&&


# ::stappler::xenolith::font::LabelBase::prependTextWithStyle(stappler::StringView const&,stappler::xenolith::font::LabelBase::Style&&)

## BRIEF

Добавляет стилизованную строку в начало

## CONTENT

Доступ: public

Добавляет стилизованную строку в начало

Параметры:
* stappler::StringView const&
* stappler::xenolith::font::LabelBase::Style&&


# ::stappler::xenolith::font::LabelBase::prependTextWithStyle(stappler::WideStringView const&,stappler::xenolith::font::LabelBase::Style&&)

## BRIEF

Добавляет стилизованную строку в начало

## CONTENT

Доступ: public

Добавляет стилизованную строку в начало

Параметры:
* stappler::WideStringView const&
* stappler::xenolith::font::LabelBase::Style&&


# ::stappler::xenolith::font::LabelBase::clearStyles()

## BRIEF

Удаляет все стили

## CONTENT

Доступ: public

Удаляет все стили


# ::stappler::xenolith::font::LabelBase::getStyles() const

## BRIEF

Возвращает стили

## CONTENT

Доступ: public

Возвращает стили

Возвращает:
* StyleVec&

# ::stappler::xenolith::font::LabelBase::getCompiledStyles() const

## BRIEF

Возвращает собранные стили

## CONTENT

Доступ: public

Возвращает собранные стили

Возвращает:
* StyleVec&

# ::stappler::xenolith::font::LabelBase::setStyles(stappler::xenolith::font::LabelBase::StyleVec&&)

## BRIEF

Устанавливает стили сегментов

## CONTENT

Доступ: public

Устанавливает стили сегментов

Параметры:
* stappler::xenolith::font::LabelBase::StyleVec&&


# ::stappler::xenolith::font::LabelBase::setStyles(stappler::xenolith::font::LabelBase::StyleVec const&)

## BRIEF

Устанавливает стили сегментов

## CONTENT

Доступ: public

Устанавливает стили сегментов

Параметры:
* stappler::xenolith::font::LabelBase::StyleVec const&


# ::stappler::xenolith::font::LabelBase::updateFormatSpec(stappler::xenolith::font::TextLayout*,stappler::xenolith::font::LabelBase::StyleVec const&,float,uint8_t)

## BRIEF

Записывает отформатированную укладку

## CONTENT

Доступ: public

Записывает отформатированную укладку

Параметры:
* stappler::xenolith::font::TextLayout* - укладка
* stappler::xenolith::font::LabelBase::StyleVec const& - собранные стили
* float - плотность пикселей
* uint8_t - значение допустимой подстроки размера шрифта

Возвращает:
* bool

# ::stappler::xenolith::font::LabelBase::empty() const

## BRIEF

Проверяет поле на пустоту

## CONTENT

Доступ: public

Проверяет поле на пустоту

Возвращает:
* bool

# ::stappler::xenolith::font::LabelBase::setAlignment(stappler::font::TextAlign)

## BRIEF

Устанавливает выравнивание шрифта

## CONTENT

Доступ: public

Устанавливает выравнивание шрифта

Параметры:
* stappler::font::TextAlign


# ::stappler::xenolith::font::LabelBase::getAlignment() const

## BRIEF

Возвращает выравнивание шрифта

## CONTENT

Доступ: public

Возвращает выравнивание шрифта

Возвращает:
* stappler::font::TextAlign

# ::stappler::xenolith::font::LabelBase::setWidth(float)

## BRIEF

Устанавливает ширину шрифта

## CONTENT

Доступ: public

Устанавливает ширину шрифта. Ширина орпделяет, где текст будет переноситься на следующую строку

Параметры:
* float


# ::stappler::xenolith::font::LabelBase::getWidth() const

## BRIEF

Возвращает ширину

## CONTENT

Доступ: public

Возвращает ширину

Возвращает:
* float

# ::stappler::xenolith::font::LabelBase::setTextIndent(float)

## BRIEF

Устанавливает отступ первой строки

## CONTENT

Доступ: public

Устанавливает отступ первой строки

Параметры:
* float


# ::stappler::xenolith::font::LabelBase::getTextIndent() const

## BRIEF

Возвращает отступ первой строки

## CONTENT

Доступ: public

Возвращает отступ первой строки

Возвращает:
* float

# ::stappler::xenolith::font::LabelBase::setTextTransform(stappler::font::TextTransform const&)

## BRIEF

Устанавливает трансформацию текста

## CONTENT

Доступ: public

Устанавливает трансформацию текста

Параметры:
* stappler::font::TextTransform const&


# ::stappler::xenolith::font::LabelBase::getTextTransform() const

## BRIEF

Возвращает трансформацию текста

## CONTENT

Доступ: public

Возвращает трансформацию текста

Возвращает:
* stappler::font::TextTransform

# ::stappler::xenolith::font::LabelBase::setTextDecoration(stappler::font::TextDecoration const&)

## BRIEF

Устанавливает декорации текста

## CONTENT

Доступ: public

Устанавливает декорации текста

Параметры:
* stappler::font::TextDecoration const&


# ::stappler::xenolith::font::LabelBase::getTextDecoration() const

## BRIEF

Возвращает декорации текста

## CONTENT

Доступ: public

Возвращает декорации текста

Возвращает:
* stappler::font::TextDecoration

# ::stappler::xenolith::font::LabelBase::setHyphens(stappler::font::Hyphens const&)

## BRIEF

Устанавливает режим переноса

## CONTENT

Доступ: public

Устанавливает режим переноса

Параметры:
* stappler::font::Hyphens const&


# ::stappler::xenolith::font::LabelBase::getHyphens() const

## BRIEF

Возвращает режим переноса

## CONTENT

Доступ: public

Возвращает режим переноса

Возвращает:
* stappler::font::Hyphens

# ::stappler::xenolith::font::LabelBase::setVerticalAlign(stappler::font::VerticalAlign const&)

## BRIEF

Устанавливает вертикальное выравнивание

## CONTENT

Доступ: public

Устанавливает вертикальное выравнивание

Параметры:
* stappler::font::VerticalAlign const&


# ::stappler::xenolith::font::LabelBase::getVerticalAlign() const

## BRIEF

Возвращает вертикальное выравнивание

## CONTENT

Доступ: public

Возвращает вертикальное выравнивание

Возвращает:
* stappler::font::VerticalAlign

# ::stappler::xenolith::font::LabelBase::setFontSize(uint16_t const&)

## BRIEF

Устанавливает размер шрифта

## CONTENT

Доступ: public

Устанавливает размер шрифта

Параметры:
* uint16_t const&


# ::stappler::xenolith::font::LabelBase::setFontSize(stappler::font::FontSize const&)

## BRIEF

Устанавливает размер шрифта

## CONTENT

Доступ: public

Устанавливает размер шрифта

Параметры:
* stappler::font::FontSize const&


# ::stappler::xenolith::font::LabelBase::getFontSize() const

## BRIEF

Возвращает размер шрифта

## CONTENT

Доступ: public

Возвращает размер шрифта

Возвращает:
* stappler::font::FontSize

# ::stappler::xenolith::font::LabelBase::setFontStyle(stappler::font::FontStyle const&)

## BRIEF

Устанавливает стиль шрифта

## CONTENT

Доступ: public

Устанавливает стиль шрифта

Параметры:
* stappler::font::FontStyle const&


# ::stappler::xenolith::font::LabelBase::getFontStyle() const

## BRIEF

Возвращает стиль шрифта

## CONTENT

Доступ: public

Возвращает стиль шрифта

Возвращает:
* stappler::font::FontStyle

# ::stappler::xenolith::font::LabelBase::setFontWeight(stappler::font::FontWeight const&)

## BRIEF

Устанавливает ширину шрифта

## CONTENT

Доступ: public

Устанавливает ширину шрифта

Параметры:
* stappler::font::FontWeight const&


# ::stappler::xenolith::font::LabelBase::getFontWeight() const

## BRIEF

Возвращает ширину шрифта

## CONTENT

Доступ: public

Возвращает ширину шрифта

Возвращает:
* stappler::font::FontWeight

# ::stappler::xenolith::font::LabelBase::setFontStretch(stappler::font::FontStretch const&)

## BRIEF

Устанавливает плотность шрифта

## CONTENT

Доступ: public

Устанавливает плотность шрифта

Параметры:
* stappler::font::FontStretch const&


# ::stappler::xenolith::font::LabelBase::getFontStretch() const

## BRIEF

Возвращает плотность шрифта

## CONTENT

Доступ: public

Возвращает плотность шрифта

Возвращает:
* stappler::font::FontStretch

# ::stappler::xenolith::font::LabelBase::setFontGrade(stappler::font::FontGrade const&)

## BRIEF

Устанавливает утолщение шрифта

## CONTENT

Доступ: public

Устанавливает утолщение шрифта

Параметры:
* stappler::font::FontGrade const&


# ::stappler::xenolith::font::LabelBase::getFontGrade() const

## BRIEF

Возвращает утолщение шрифта

## CONTENT

Доступ: public

Возвращает утолщение шрифта

Возвращает:
* stappler::font::FontGrade

# ::stappler::xenolith::font::LabelBase::setFontFamily(stappler::StringView const&)

## BRIEF

Устанавливает семейство шрифта

## CONTENT

Доступ: public

Устанавливает семейство шрифта

Параметры:
* stappler::StringView const&


# ::stappler::xenolith::font::LabelBase::getFontFamily() const

## BRIEF

Возвращает семейство шрифта

## CONTENT

Доступ: public

Возвращает семейство шрифта

Возвращает:
* stappler::StringView

# ::stappler::xenolith::font::LabelBase::setLineHeightAbsolute(float)

## BRIEF

Устанавливает высоту строки в виде абсолютного значения

## CONTENT

Доступ: public

Устанавливает высоту строки в виде абсолютного значения

Параметры:
* float


# ::stappler::xenolith::font::LabelBase::setLineHeightRelative(float)

## BRIEF

Устанавливает высоту строки как отношение к размеру шрифта

## CONTENT

Доступ: public

Устанавливает высоту строки как отношение к размеру шрифта

Параметры:
* float


# ::stappler::xenolith::font::LabelBase::getLineHeight() const

## BRIEF

Возвращает высоту строки

## CONTENT

Доступ: public

Возвращает высоту строки

Возвращает:
* float

# ::stappler::xenolith::font::LabelBase::isLineHeightAbsolute() const

## BRIEF

Проверяет, установлено ли абсолютное значение высоты строки

## CONTENT

Доступ: public

Проверяет, установлено ли абсолютное значение высоты строки

Возвращает:
* bool

# ::stappler::xenolith::font::LabelBase::setMaxWidth(float)

## BRIEF

Устанавливает максимальную ширину поля

## CONTENT

Доступ: public

Устанавливает максимальную ширину поля. Поле не может выходить за пределы максимальной ширины, это считается переполнением.

Параметры:
* float


# ::stappler::xenolith::font::LabelBase::getMaxWidth() const

## BRIEF

Возвращает максимальную ширину поля

## CONTENT

Доступ: public

Возвращает максимальную ширину поля

Возвращает:
* float

# ::stappler::xenolith::font::LabelBase::setMaxLines(size_t)

## BRIEF

Устанавливает максимальное число строк

## CONTENT

Доступ: public

Устанавливает максимальное число строк

Параметры:
* size_t


# ::stappler::xenolith::font::LabelBase::getMaxLines() const

## BRIEF

Возвращает максимальное число строк

## CONTENT

Доступ: public

Возвращает максимальное число строк

Возвращает:
* size_t

# ::stappler::xenolith::font::LabelBase::setMaxChars(size_t)

## BRIEF

Устанавливает максимальное число символов

## CONTENT

Доступ: public

Устанавливает максимальное число символов

Параметры:
* size_t


# ::stappler::xenolith::font::LabelBase::getMaxChars() const

## BRIEF

Возвращает максимальное число символов

## CONTENT

Доступ: public

Возвращает максимальное число символов

Возвращает:
* size_t

# ::stappler::xenolith::font::LabelBase::setOpticalAlignment(bool)

## BRIEF

Устанавливает режим оптического выравнивания при форматировании

## CONTENT

Доступ: public

Устанавливает режим оптического выравнивания при форматировании. Включает опции свисающей пунктуации и выравнивания спискоа. В этом режиме поле может выходить за свои границы.

Параметры:
* bool


# ::stappler::xenolith::font::LabelBase::isOpticallyAligned() const

## BRIEF

Проверяет, используется ли оптическое выравнивание.

## CONTENT

Доступ: public

Проверяет, используется ли оптическое выравнивание.

Возвращает:
* bool

# ::stappler::xenolith::font::LabelBase::setFillerChar(char16_t)

## BRIEF

Устанавливает символ-заместитель при переполнении

## CONTENT

Доступ: public

Устанавливает символ-заместитель при переполнении

Параметры:
* char16_t


# ::stappler::xenolith::font::LabelBase::getFillerChar() const

## BRIEF

Возвращает символ-заместитель

## CONTENT

Доступ: public

Возвращает символ-заместитель

Возвращает:
* char16_t

# ::stappler::xenolith::font::LabelBase::setLocaleEnabled(bool)

## BRIEF

Включает режим распознавания локали

## CONTENT

Доступ: public

Включает режим распознавания локали

Параметры:
* bool


# ::stappler::xenolith::font::LabelBase::isLocaleEnabled() const

## BRIEF

Проверяет режим распознавания локали

## CONTENT

Доступ: public

Проверяет режим распознавания локали

Возвращает:
* bool

# ::stappler::xenolith::font::LabelBase::setPersistentLayout(bool)

## BRIEF

Помечает поле как использующее постоянную укладку

## CONTENT

Доступ: public

Помечает поле как использующее постоянную укладку. Данные для постоянной укладки кешируются на стороне графического устройства.

Параметры:
* bool


# ::stappler::xenolith::font::LabelBase::isPersistentLayout() const

## BRIEF

Проверяет флаг постоянной укладки

## CONTENT

Доступ: public

Проверяет флаг постоянной укладки

Возвращает:
* bool

# ::stappler::xenolith::font::LabelBase::hasLocaleTags(stappler::WideStringView const&) const

## BRIEF

Проверяет, есть ли теги локали в строке

## CONTENT

Доступ: protected

Проверяет, есть ли теги локали в строке

Параметры:
* stappler::WideStringView const&

Возвращает:
* bool

# ::stappler::xenolith::font::LabelBase::resolveLocaleTags(stappler::WideStringView const&) const

## BRIEF

Преобразует зависимую от локали строку

## CONTENT

Доступ: protected

Преобразует зависимую от локали строку

Параметры:
* stappler::WideStringView const&

Возвращает:
* stappler::mem_std::WideString

# ::stappler::xenolith::font::LabelBase::specializeStyle(stappler::xenolith::font::LabelBase::DescriptionStyle&,float) const

## BRIEF

Подстраивает стиль под поле

## CONTENT

Доступ: protected

Подстраивает стиль под поле

Параметры:
* stappler::xenolith::font::LabelBase::DescriptionStyle&
* float


# ::stappler::xenolith::font::LabelBase::setLabelDirty()

## BRIEF

Устанавливает флаг изменения шрифта

## CONTENT

Доступ: protected

Устанавливает флаг изменения шрифта


# ::stappler::xenolith::font::LabelBase::_string16

## BRIEF

Строка в UTF-16

## CONTENT

Доступ: protected

Строка в UTF-16

Тип: stappler::mem_std::WideString


# ::stappler::xenolith::font::LabelBase::_string8

## BRIEF

Строка в UTF-8

## CONTENT

Доступ: protected

Строка в UTF-8

Тип: stappler::mem_std::String


# ::stappler::xenolith::font::LabelBase::_width

## BRIEF

Ширина шрифта

## CONTENT

Доступ: protected

Ширина шрифта

Тип: float


# ::stappler::xenolith::font::LabelBase::_textIndent

## BRIEF

Отступ первой строки

## CONTENT

Доступ: protected

Отступ первой строки

Тип: float


# ::stappler::xenolith::font::LabelBase::_labelDensity

## BRIEF

Плотность пикселей поля

## CONTENT

Доступ: protected

Плотность пикселей поля

Тип: float


# ::stappler::xenolith::font::LabelBase::_alignment

## BRIEF

Горизонтальное выравнивание

## CONTENT

Доступ: protected

Горизонтальное выравнивание

Тип: stappler::font::TextAlign


# ::stappler::xenolith::font::LabelBase::_localeEnabled

## BRIEF

Флаг локали

## CONTENT

Доступ: protected

Флаг локали

Тип: bool


# ::stappler::xenolith::font::LabelBase::_labelDirty

## BRIEF

Флаг обновления

## CONTENT

Доступ: protected

Флаг обновления

Тип: bool


# ::stappler::xenolith::font::LabelBase::_isLineHeightAbsolute

## BRIEF

Флаг абсолютной высоты строки

## CONTENT

Доступ: protected

Флаг абсолютной высоты строки

Тип: bool


# ::stappler::xenolith::font::LabelBase::_lineHeight

## BRIEF

Высота строки

## CONTENT

Доступ: protected

Высота строки

Тип: float


# ::stappler::xenolith::font::LabelBase::_fontFamilyStorage

## BRIEF

Имя семейства шрифтов

## CONTENT

Доступ: protected

Имя семейства шрифтов

Тип: stappler::mem_std::String


# ::stappler::xenolith::font::LabelBase::_style

## BRIEF

Общий стиль поля

## CONTENT

Доступ: protected

Общий стиль поля

Тип: stappler::xenolith::font::LabelBase::DescriptionStyle


# ::stappler::xenolith::font::LabelBase::_styles

## BRIEF

Стили сегментов

## CONTENT

Доступ: protected

Стили сегментов

Тип: StyleVec


# ::stappler::xenolith::font::LabelBase::_compiledStyles

## BRIEF

Собранные стили сегментов

## CONTENT

Доступ: protected

Собранные стили сегментов

Тип: StyleVec


# ::stappler::xenolith::font::LabelBase::_charsWidth

## BRIEF

Ширина блока символов

## CONTENT

Доступ: protected

Ширина блока символов

Тип: uint16_t


# ::stappler::xenolith::font::LabelBase::_charsHeight

## BRIEF

Высота блока символов

## CONTENT

Доступ: protected

Высота блока символов

Тип: uint16_t


# ::stappler::xenolith::font::LabelBase::_maxWidth

## BRIEF

Максимальная ширина

## CONTENT

Доступ: protected

Максимальная ширина

Тип: float


# ::stappler::xenolith::font::LabelBase::_maxLines

## BRIEF

Максимальное число строк

## CONTENT

Доступ: protected

Максимальное число строк

Тип: size_t


# ::stappler::xenolith::font::LabelBase::_maxChars

## BRIEF

Максимальное число символов

## CONTENT

Доступ: protected

Максимальное число символов

Тип: size_t


# ::stappler::xenolith::font::LabelBase::_opticalAlignment

## BRIEF

Флаг оптического выравнивания

## CONTENT

Доступ: protected

Флаг оптического выравнивания

Тип: bool


# ::stappler::xenolith::font::LabelBase::_emplaceAllChars

## BRIEF

Флаг размещения всех символов

## CONTENT

Доступ: protected

Флаг размещения всех символов

Тип: bool


# ::stappler::xenolith::font::LabelBase::_fillerChar

## BRIEF

Символ-заполнитель при превышении

## CONTENT

Доступ: protected

Символ-заполнитель при превышении

Тип: char16_t


# ::stappler::xenolith::font::LabelBase::_persistentLayout

## BRIEF

Флаг постоянной укладки

## CONTENT

Доступ: protected

Флаг постоянной укладки

Тип: bool
