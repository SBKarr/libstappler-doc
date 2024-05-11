Title: SPFont.h


# CORE_FONT_SPFONT_H_

## BRIEF

Заголовок базового интерфейса шрифтов

## CONTENT

Заголовок базового интерфейса шрифтов


# ::stappler::font::config::FontPreloadGroups

## BRIEF

Параметр конфигурации - предзагружать ли группы символов

## CONTENT

Параметр конфигурации - предзагружать ли группы символов. Если установлен в true, при использовании символа система будет пытаться загрузить сразу все символы из группы.

Тип: bool const


# ::stappler::font::config::UnicodePlanes

## BRIEF

Параметр конфигурации - число поддерживаемых плоскостей юникода

## CONTENT

Тип: size_t const

Параметр конфигурации - число поддерживаемых плоскостей юникода


# ::stappler::font::CharVector

## BRIEF

Структура для хранения набора символов

## CONTENT

Структура для хранения набора символов

# ::stappler::font::CharVector::addChar(char32_t)

## BRIEF

Добавляет символ в набор

## CONTENT

Добавляет символ в набор

Параметры:
* char32_t


# ::stappler::font::CharVector::addString(stappler::StringView const&)

## BRIEF

Добавляет символы из строки в набор

## CONTENT

Добавляет символы из строки в набор

Параметры:
* stappler::StringView const&


# ::stappler::font::CharVector::addString(stappler::WideStringView const&)

## BRIEF

Добавляет символы из строки в набор

## CONTENT

Добавляет символы из строки в набор

Параметры:
* stappler::WideStringView const&


# ::stappler::font::CharVector::addString(stappler::font::CharVector const&)

## BRIEF

Добавляет символы из другого набора в набор

## CONTENT

Добавляет символы из другого набора в набор

Параметры:
* stappler::font::CharVector const&


# ::stappler::font::CharVector::empty() const

## BRIEF

Проверяет набор на пустоту

## CONTENT

Проверяет набор на пустоту

Возвращает:
* bool - true если набор пуст

# ::stappler::font::CharVector::chars

## BRIEF

Хранимые символы

## CONTENT

Хранимые символы

Тип: mem_std::Vector<char32_t>


# ::stappler::font::FontLayoutId

## BRIEF

Тип идентификатора набора для укладки символов

## CONTENT

Тип идентификатора набора для укладки символов


# ::stappler::font::CharAnchor

## BRIEF

Точка привязки текстуры символа

## CONTENT

Точка привязки текстуры символа

Значения:
* BottomLeft - снизу-слева
* TopLeft - сверху-слева
* TopRight - сверху-справа
* BottomRight - снизу-справа


# ::stappler::font::Metrics

## BRIEF

Структура шрифтовых базовых метрик

## CONTENT

Структура шрифтовых базовых метрик


# ::stappler::font::Metrics::size

## BRIEF

Размер шрифта в пикселях

## CONTENT

Размер шрифта в пикселях

Тип: uint16_t


# ::stappler::font::Metrics::height

## BRIEF

Высота шрифта в пикселях

## CONTENT

Высота шрифта в пикселях

Тип: uint16_t


# ::stappler::font::Metrics::ascender

## BRIEF

Верхняя метрика позиционирования

## CONTENT

Верхняя метрика позиционирования

Тип: int16_t


# ::stappler::font::Metrics::descender

## BRIEF

Нижняя метрика позиционирования

## CONTENT

Нижняя метрика позиционирования

Тип: int16_t


# ::stappler::font::Metrics::underlinePosition

## BRIEF

Предпочитаемое положение подчёркивания

## CONTENT

Предпочитаемое положение подчёркивания

Тип: int16_t


# ::stappler::font::Metrics::underlineThickness

## BRIEF

Предпочитаемый размер подчёркивания

## CONTENT

Предпочитаемый размер подчёркивания

Тип: int16_t


# ::stappler::font::CharId

## BRIEF

Структура идентификатора привязки символа в шрифте

## CONTENT

Структура идентификатора привязки символа в шрифте. Служит в качестве идентификатора для позиции и смещения в атласе шрифта. Хранит код символа, идентификатор источника и точку привязки к символу.


# ::stappler::font::CharId::CharMask

## BRIEF

Маска данных символа в идентификаторе

## CONTENT

Маска данных символа в идентификаторе

Тип: uint32_t const


# ::stappler::font::CharId::AnchorMask

## BRIEF

Маска привязки текстуры в идентификаторе

## CONTENT

Маска привязки текстуры в идентификаторе

Тип: uint32_t const


# ::stappler::font::CharId::SourceMask

## BRIEF

Маска идентификатора исходного материала

## CONTENT

Маска идентификатора исходного материала

Тип: uint32_t const


# ::stappler::font::CharId::SourceMax

## BRIEF

Максимальный индекс исходного материала

## CONTENT

Максимальный индекс исходного материала

Тип: uint32_t const


# ::stappler::font::CharId::getCharId(uint16_t,char16_t,stappler::font::CharAnchor)

## BRIEF

Возвращает идентификатор символа в качестве целого числа

## CONTENT

Возвращает идентификатор символа в качестве целого числа

Параметры:
* uint16_t - исходная укладка
* char16_t - символ для кодирования
* stappler::font::CharAnchor - привязка текстуры

Возвращает:
* uint32_t

# ::stappler::font::CharId::rebindCharId(uint32_t,stappler::font::CharAnchor)

## BRIEF

Заменяет привязку текстуры в идентификаторе

## CONTENT

Заменяет привязку текстуры в идентификаторе

Параметры:
* uint32_t - идентификатор
* stappler::font::CharAnchor - новая точка привязки

Возвращает:
* uint32_t - новый идентификатор

# ::stappler::font::CharId::getAnchorForChar(uint32_t)

## BRIEF

Возвращает точку привязки текстуры для идентификатора

## CONTENT

Возвращает точку привязки текстуры для идентификатора

Параметры:
* uint32_t

Возвращает:
* stappler::font::CharAnchor

# ::stappler::font::CharId::layout

## BRIEF

Идентификатор исходного материла

## CONTENT

Идентификатор исходного материла

Тип: uint32_t


# ::stappler::font::CharId::anchor

## BRIEF

Точка привязки

## CONTENT

Точка привязки

Тип: uint32_t


# ::stappler::font::CharId::value

## BRIEF

Закодированный символ

## CONTENT

Закодированный символ. Допускается только 16-битные символы. Более широкие символы кодируются через отдельный исходный материал, в котором указывается целевая плоскость юникода.

Тип: uint32_t


# ::stappler::font::CharId::CharId(uint32_t)

## BRIEF

Декодирует идентификатор из числа

## CONTENT

Декодирует идентификатор из числа

Параметры:
* uint32_t


# ::stappler::font::CharId::CharId(uint16_t,char16_t,stappler::font::CharAnchor)

## BRIEF

Создаёт идентификатор из параметров

## CONTENT

Создаёт идентификатор из параметров

Параметры:
* uint16_t - исходный материал
* char16_t - символ
* stappler::font::CharAnchor - точка привязки


# ::stappler::font::CharId::operator uint32_t() const

## BRIEF

Кодирует идентификатор в число

## CONTENT

Кодирует идентификатор в число

Возвращает:
* uint32_t

# ::stappler::font::CharShape

## BRIEF

Минимальная структура для укладки символа в строке

## CONTENT

Минимальная структура для укладки символа в строке


# ::stappler::font::CharShape::charID

## BRIEF

Исходный символ

## CONTENT

Исходный символ. Используются 16-битные символы, представимые в одной плоскости юникода. Текущая плоскость определяется в структуре укладки.

Тип: char16_t


# ::stappler::font::CharShape::xAdvance

## BRIEF

Смещение для укладки следующего символа

## CONTENT

Смещение для укладки следующего символа

Тип: uint16_t


# ::stappler::font::CharShape::operator char16_t() const

## BRIEF

Возвращает текущий символ

## CONTENT

Возвращает текущий символ

Возвращает:
* char16_t

# ::stappler::font::CharTexture

## BRIEF

Параметры положения символа в текстуре атласа

## CONTENT

Параметры положения символа в текстуре атласа

# ::stappler::font::CharTexture::charID

## BRIEF

Код символа

## CONTENT

Код символа. Испольузется полный код символа юникода.

Тип: char32_t


# ::stappler::font::CharTexture::x

## BRIEF

Положение левой стороны символа в текстуре

## CONTENT

Положение левой стороны символа в текстуре

Тип: int16_t


# ::stappler::font::CharTexture::y

## BRIEF

Положение нижней стороны символа в текстуре

## CONTENT

Положение нижней стороны символа в текстуре

Тип: int16_t


# ::stappler::font::CharTexture::width

## BRIEF

Ширина текстуры символа

## CONTENT

Ширина текстуры символа

Тип: uint16_t


# ::stappler::font::CharTexture::height

## BRIEF

Высота текстуры символа

## CONTENT

Высота текстуры символа

Тип: uint16_t


# ::stappler::font::CharTexture::bitmapWidth

## BRIEF

Исходная ширина битовой карты символа

## CONTENT

Исходная ширина битовой карты символа

Тип: uint16_t


# ::stappler::font::CharTexture::bitmapRows

## BRIEF

Число рядов в битовой карте символа

## CONTENT

Число рядов в битовой карте символа

Тип: uint16_t


# ::stappler::font::CharTexture::pitch

## BRIEF

Смещение ряда в битовой карте символа

## CONTENT

Смещение ряда в битовой карте символа

Тип: int16_t


# ::stappler::font::CharTexture::fontID

## BRIEF

Идентификатор исходного шрифта

## CONTENT

Идентификатор исходного шрифта

Тип: uint16_t


# ::stappler::font::CharTexture::bitmap

## BRIEF

Указательна буфер битовой карты

## CONTENT

Указательна буфер битовой карты

Тип: uint8_t*


# ::stappler::font::FontAtlasValue

## BRIEF

Хранимое значение в атласе битовой карты

## CONTENT

Хранимое значение в атласе битовой карты

# ::stappler::font::FontAtlasValue::pos

## BRIEF

Позиция смещения в текстуре для идентификатора

## CONTENT

Позиция смещения в текстуре для идентификатора

Тип: geom::Vec2


# ::stappler::font::FontAtlasValue::tex

## BRIEF

Размер сегмента текстуры для идентификатора

## CONTENT

Размер сегмента текстуры для идентификатора

Тип: geom::Vec2


# ::stappler::font::FontCharStorage<typename>

## BRIEF

Структура для хранения данных символов

## CONTENT

Структура для хранения данных символов. Представляет из себя статический блок-карту с динамически распределяемыми ячейками по 256 символов.

Использует 16-битные символы. Для использования более широких нужно создавать отдельные такие структуры для плоскостей юникода.

Параметры шаблона:
* typename Value - тип хранимого значения


# ::stappler::font::FontCharStorage<typename>::CellType

## BRIEF

Тип динамической ячейки

## CONTENT

Тип динамической ячейки


# ::stappler::font::FontCharStorage<typename>::FontCharStorage()

## BRIEF

Конструктор

## CONTENT

Конструктор

# ::stappler::font::FontCharStorage<typename>::~FontCharStorage()

## BRIEF

Деструктор

## CONTENT

Деструктор

# ::stappler::font::FontCharStorage<typename>::emplace(char16_t,Value&&)

## BRIEF

Добавляет значение для символа

## CONTENT

Добавляет значение для символа

Параметры:
* char16_t - символ
* Value&& - новое значение


# ::stappler::font::FontCharStorage<typename>::get(char16_t) const

## BRIEF

Получает значение для символа

## CONTENT

Получает значение для символа

Параметры:
* char16_t - исходный символ

Возвращает:
* Value const* - указатель на значение или nullptr

# ::stappler::font::FontCharStorage<typename>::foreach<typename>(Callback const&)

## BRIEF

Вызывает функтор для всех хранимых значений

## CONTENT

Вызывает функтор для всех хранимых значений

Параметры шаблона:
* typename Callback

Параметры:
* Callback const&


# ::stappler::font::FontCharStorage<typename>::cells

## BRIEF

Статическая структура хранимых ячеек

## CONTENT

Статическая структура хранимых ячеек

Тип: std::array<CellType *, 256>


# ::stappler::font::operator<(stappler::font::CharShape const&,stappler::font::CharShape const&)

## BRIEF

Оператор упорядоченного сравнения структур укладки

## CONTENT

Оператор упорядоченного сравнения структур укладки

Параметры:
* stappler::font::CharShape const&
* stappler::font::CharShape const&

Возвращает:
* bool

# ::stappler::font::operator>(stappler::font::CharShape const&,stappler::font::CharShape const&)

## BRIEF

Оператор упорядоченного сравнения структур укладки

## CONTENT

Оператор упорядоченного сравнения структур укладки

Параметры:
* stappler::font::CharShape const&
* stappler::font::CharShape const&

Возвращает:
* bool

# ::stappler::font::operator<=(stappler::font::CharShape const&,stappler::font::CharShape const&)

## BRIEF

Оператор упорядоченного сравнения структур укладки

## CONTENT

Оператор упорядоченного сравнения структур укладки

Параметры:
* stappler::font::CharShape const&
* stappler::font::CharShape const&

Возвращает:
* bool

# ::stappler::font::operator>=(stappler::font::CharShape const&,stappler::font::CharShape const&)

## BRIEF

Оператор упорядоченного сравнения структур укладки

## CONTENT

Оператор упорядоченного сравнения структур укладки

Параметры:
* stappler::font::CharShape const&
* stappler::font::CharShape const&

Возвращает:
* bool

# ::stappler::font::operator<(stappler::font::CharShape const&,char16_t const&)

## BRIEF

Оператор упорядоченного сравнения структур укладки

## CONTENT

Оператор упорядоченного сравнения структур укладки

Параметры:
* stappler::font::CharShape const&
* char16_t const&

Возвращает:
* bool

# ::stappler::font::operator>(stappler::font::CharShape const&,char16_t const&)

## BRIEF

Оператор упорядоченного сравнения структур укладки

## CONTENT

Оператор упорядоченного сравнения структур укладки

Параметры:
* stappler::font::CharShape const&
* char16_t const&

Возвращает:
* bool

# ::stappler::font::operator<=(stappler::font::CharShape const&,char16_t const&)

## BRIEF

Оператор упорядоченного сравнения структур укладки

## CONTENT

Оператор упорядоченного сравнения структур укладки

Параметры:
* stappler::font::CharShape const&
* char16_t const&

Возвращает:
* bool

# ::stappler::font::operator>=(stappler::font::CharShape const&,char16_t const&)

## BRIEF

Оператор упорядоченного сравнения структур укладки

## CONTENT

Оператор упорядоченного сравнения структур укладки

Параметры:
* stappler::font::CharShape const&
* char16_t const&

Возвращает:
* bool