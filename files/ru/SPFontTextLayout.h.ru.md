Title: SPFontTextLayout.h


# CORE_FONT_SPFONTLAYOUTDATA_H_

## BRIEF

Заголовок структур для хранения укладки текста

## CONTENT

Заголовок структур для хранения укладки текста


# ::stappler::font::CharSelectMode

## BRIEF

Режим выбора символа

## CONTENT

Режим выбора символа. Представляет из себя предполагаемую точку привязки искомого символа.

Значения:
* Center - привязка к центру
* Prefix - привязка перед символом
* Suffix - привязка после символа
* Best - ближайшая точка привязки из указанных выше


# ::stappler::font::CharLayoutData

## BRIEF

Данные укладки конкретного символа

## CONTENT

Данные укладки конкретного символа


# ::stappler::font::CharLayoutData::charID

## BRIEF

Символ

## CONTENT

Символ. Используются 16-битные символы из одной плоскости юникода. Плоскость определяется на уровне специализации шрифта.

Тип: char16_t


# ::stappler::font::CharLayoutData::pos

## BRIEF

Позиция в строке

## CONTENT

Позиция в строке

Тип: int16_t


# ::stappler::font::CharLayoutData::advance

## BRIEF

Смещение после символа

## CONTENT

Смещение после символа

Тип: uint16_t


# ::stappler::font::CharLayoutData::face

## BRIEF

Идентификатор специализации шрифта

## CONTENT

Идентификатор специализации шрифта

Тип: uint16_t


# ::stappler::font::LineLayoutData

## BRIEF

Структура укладки строки текста

## CONTENT

Структура укладки строки текста

# ::stappler::font::LineLayoutData::start

## BRIEF

Индекс первого символа строки

## CONTENT

Индекс первого символа строки

Тип: uint32_t


# ::stappler::font::LineLayoutData::count

## BRIEF

Число символов в строке

## CONTENT

Число символов в строке

Тип: uint32_t


# ::stappler::font::LineLayoutData::pos

## BRIEF

Позиция строки в тексте

## CONTENT

Позиция строки в тексте

Тип: uint16_t


# ::stappler::font::LineLayoutData::height

## BRIEF

Высота строки

## CONTENT

Высота строки

Тип: uint16_t


# ::stappler::font::RangeLayoutData

## BRIEF

Структура данных стилизованного диапазона символов

## CONTENT

Структура данных стилизованного диапазона символов

# ::stappler::font::RangeLayoutData::colorDirty

## BRIEF

Флаг изменённого цвета

## CONTENT

Флаг изменённого цвета

Тип: bool


# ::stappler::font::RangeLayoutData::opacityDirty

## BRIEF

Флаг изменённой прозрачности

## CONTENT

Флаг изменённой прозрачности

Тип: bool


# ::stappler::font::RangeLayoutData::decoration

## BRIEF

Тип текстовых декораций

## CONTENT

Тип текстовых декораций

Тип: stappler::font::TextDecoration


# ::stappler::font::RangeLayoutData::align

## BRIEF

Тип вертикального выравнивания

## CONTENT

Тип вертикального выравнивания

Тип: stappler::font::VerticalAlign


# ::stappler::font::RangeLayoutData::start

## BRIEF

Начало блока

## CONTENT

Начало блока

Тип: uint32_t


# ::stappler::font::RangeLayoutData::count

## BRIEF

Число символов в блоке

## CONTENT

Число символов в блоке

Тип: uint32_t


# ::stappler::font::RangeLayoutData::color

## BRIEF

Цвет текста

## CONTENT

Цвет текста

Тип: geom::Color4B


# ::stappler::font::RangeLayoutData::height

## BRIEF

Высота строки

## CONTENT

Высота строки

Тип: uint16_t


# ::stappler::font::RangeLayoutData::metrics

## BRIEF

Метрики шрифта

## CONTENT

Метрики шрифта

Тип: stappler::font::Metrics


# ::stappler::font::RangeLayoutData::layout

## BRIEF

Указатель на шрифтовый набор

## CONTENT

Указатель на шрифтовый набор

Тип: stappler::font::FontFaceSet*


# ::stappler::font::RangeLineIterator

## BRIEF

Итератор для обхода текста по уникальным парам строка-стиль

## CONTENT

Итератор для обхода текста по уникальным парам строка-стиль


# ::stappler::font::RangeLineIterator::range

## BRIEF

Текущий стилевой диапазон

## CONTENT

Текущий стилевой диапазон

Тип: stappler::font::RangeLayoutData const*


# ::stappler::font::RangeLineIterator::line

## BRIEF

Текущая строка

## CONTENT

Текущая строка

Тип: stappler::font::LineLayoutData const*


# ::stappler::font::RangeLineIterator::start() const

## BRIEF

Начало текущего блока

## CONTENT

Начало текущего блока

Возвращает:
* uint32_t

# ::stappler::font::RangeLineIterator::count() const

## BRIEF

Число символов в текущем блоке

## CONTENT

Число символов в текущем блоке

Возвращает:
* uint32_t

# ::stappler::font::RangeLineIterator::end() const

## BRIEF

Конечный символ блока

## CONTENT

Конечный символ блока

Возвращает:
* uint32_t

# ::stappler::font::RangeLineIterator::operator++()

## BRIEF

Переходит к следующему блоку

## CONTENT

Переходит к следующему блоку

Возвращает:
* stappler::font::RangeLineIterator&

# ::stappler::font::RangeLineIterator::operator==(stappler::font::RangeLineIterator const&) const

## BRIEF

Оператор сравнения

## CONTENT

Оператор сравнения

Параметры:
* stappler::font::RangeLineIterator const&

Возвращает:
* bool

# ::stappler::font::RangeLineIterator::operator!=(stappler::font::RangeLineIterator const&) const

## BRIEF

Оператор сравнения

## CONTENT

Оператор сравнения

Параметры:
* stappler::font::RangeLineIterator const&

Возвращает:
* bool

# ::stappler::font::TextLayoutData<typename>

## BRIEF

Структура укладки текста в целом

## CONTENT

Параметры шаблона:
* typename Interface - используемый интерфейс памяти

Базовые классы:
* Interface::AllocBaseType


# ::stappler::font::TextLayoutData<typename>::Vector<typename>

## BRIEF

Испольуземый тип вектора

## CONTENT

Испольуземый тип вектора

Параметры шаблона:
* typename Value


# ::stappler::font::TextLayoutData<typename>::ranges

## BRIEF

Стилевые диапазоны

## CONTENT

Стилевые диапазоны

Тип: Vector<stappler::font::RangeLayoutData>


# ::stappler::font::TextLayoutData<typename>::chars

## BRIEF

Символы

## CONTENT

Символы

Тип: Vector<stappler::font::CharLayoutData>


# ::stappler::font::TextLayoutData<typename>::lines

## BRIEF

Строки

## CONTENT

Строки

Тип: Vector<stappler::font::LineLayoutData>


# ::stappler::font::TextLayoutData<typename>::width

## BRIEF

Ширина блока

## CONTENT

Ширина блока

Тип: uint16_t


# ::stappler::font::TextLayoutData<typename>::height

## BRIEF

Высота блока

## CONTENT

Высота блока

Тип: uint16_t


# ::stappler::font::TextLayoutData<typename>::maxAdvance

## BRIEF

Максимальная длина строки

## CONTENT

Максимальная длина строки

Тип: uint16_t


# ::stappler::font::TextLayoutData<typename>::overflow

## BRIEF

Флаг переполнения блока

## CONTENT

Флаг переполнения блока

Тип: bool


# ::stappler::font::TextLayoutData<typename>::reserve(size_t,size_t)

## BRIEF

Резервирует пространство для символов и строк

## CONTENT

Резервирует пространство для символов и строк

Параметры:
* size_t - предполагаемое число символов
* size_t - предполагаемое число строк


# ::stappler::font::TextLayoutData<typename>::begin() const

## BRIEF

Возвращает итератор начала

## CONTENT

Возвращает итератор начала

Возвращает:
* stappler::font::RangeLineIterator

# ::stappler::font::TextLayoutData<typename>::end() const

## BRIEF

Возвращает итератор конца

## CONTENT

Возвращает итератор конца

Возвращает:
* stappler::font::RangeLineIterator

# ::stappler::font::TextLayoutData<typename>::clear()

## BRIEF

Очищает структуру

## CONTENT

Очищает структуру

# ::stappler::font::TextLayoutData<typename>::str(Callback<void (char16_t)> const&,bool) const

## BRIEF

Читает структуру посимвольно

## CONTENT

Читает структуру посимвольно

Параметры:
* Callback<void (char16_t)> const& - принимает символы из структуры
* bool - true для исключения символов, уложенных не по базовой линии


# ::stappler::font::TextLayoutData<typename>::str(Callback<void (char16_t)> const&,uint32_t,uint32_t,size_t,bool,bool) const

## BRIEF

Читает структуру посимвольно

## CONTENT

Читает структуру посимвольно

Параметры:
* Callback<void (char16_t)> const& - принимает символы из структуры
* uint32_t - индекс первого символа
* uint32_t - индекс последнего символа
* size_t - максимальное число слов для получения
* bool - true чтобы присылать, в том числе, заполняющие символы
* bool - true для исключения символов, уложенных не по базовой линии


# ::stappler::font::TextLayoutData<typename>::getTextIndent(float) const

## BRIEF

Возвращает отступ первого символа

## CONTENT

Возвращает отступ первого символа

Параметры:
* float - предполагаемая плотность пикселей

Возвращает:
* float

# ::stappler::font::TextLayoutData<typename>::getChar(int32_t,int32_t,stappler::font::CharSelectMode) const

## BRIEF

Выбирает символ из укладки по позиции курсора

## CONTENT

Выбирает символ из укладки по позиции курсора

Параметры:
* int32_t - x
* int32_t - y
* stappler::font::CharSelectMode - режим выбора

Возвращает:
* Pair<uint32_t, stappler::font::CharSelectMode> - индекс символа и реальная точка привязки, по которой он выбран

# ::stappler::font::TextLayoutData<typename>::getLine(uint32_t) const

## BRIEF

Возвращает данные строки по её номеру

## CONTENT

Возвращает данные строки по её номеру

Параметры:
* uint32_t

Возвращает:
* stappler::font::LineLayoutData const*

# ::stappler::font::TextLayoutData<typename>::getLineForChar(uint32_t) const

## BRIEF

Возвращает номер строки для символа

## CONTENT

Возвращает номер строки для символа

Параметры:
* uint32_t - индекс символа

Возвращает:
* uint32_t

# ::stappler::font::TextLayoutData<typename>::getLinePosition(uint32_t,uint32_t,float) const

## BRIEF

Возвращает предполагаемую позицию строки между символами

## CONTENT

Возвращает предполагаемую позицию строки между символами

Параметры:
* uint32_t - индекс символа начала
* uint32_t - индекс символа конца
* float - предполагаемая плотность пикселей

Возвращает:
* float

# ::stappler::font::TextLayoutData<typename>::selectWord(uint32_t) const

## BRIEF

Выбирает слово по символу в нём

## CONTENT

Выбирает слово по символу в нём

Параметры:
* uint32_t - индекс символа

Возвращает:
* Pair<uint32_t, uint32_t> - индекс первого символа и число символов

# ::stappler::font::TextLayoutData<typename>::getLineRect(uint32_t,float,geom::Vec2 const&) const

## BRIEF

Возвращает прямоугольник вокруг строки

## CONTENT

Параметры:
* uint32_t - индекс строки
* float - плотность пикселей
* geom::Vec2 const& - начальная точка укладки текста

Возвращает:
* geom::Rect

# ::stappler::font::TextLayoutData<typename>::getLineRect(stappler::font::LineLayoutData const&,float,geom::Vec2 const&) const

## BRIEF

Возвращает прямоугольник вокруг строки

## CONTENT

Параметры:
* stappler::font::LineLayoutData const& - строка
* float - плотность пикселей
* geom::Vec2 const& - начальная точка укладки текста

Возвращает:
* geom::Rect

# ::stappler::font::TextLayoutData<typename>::getLabelRects(Callback<void (geom::Rect)> const&,uint32_t,uint32_t,float,geom::Vec2 const&,geom::Padding const&) const

## BRIEF

Возвращает прямоугольники вокруг строк от начального до конечного символа

## CONTENT

Возвращает прямоугольники вокруг строк от начального до конечного символа

Параметры:
* Callback<void (geom::Rect)> const& - принимает результат
* uint32_t - индекс начального символа
* uint32_t - индекс конечного символа
* float - плотность пикселей
* geom::Vec2 const& - начальная точка укладки текста
* geom::Padding const& - смещение для границ прямоугольника
