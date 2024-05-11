Title: SPFontStyle.h


# CORE_FONT_SPFONTSTYLE_H_

## BRIEF

Заголовок, описыающий параметры стиля шрифта

## CONTENT

Заголовок, описыающий параметры стиля шрифта

# ::stappler::font::EnumSize

## BRIEF

Стандартный размер перечислимого типа стиля

## CONTENT

Стандартный размер перечислимого типа стиля: 8 бит.

# ::stappler::font::FontVariableAxis

## BRIEF

Флаги изменяаемых параметров шрифта

## CONTENT

Флаги изменяаемых параметров шрифта

Значения:
* None
* Weight - толщина
* Width - ширина
* Italic - наклонное начертание (9 или 1)
* Slant - градус наклона
* OpticalSize - оптический размер
* Grade - утолщение
* Stretch - растяжение символа

# ::stappler::font::operator|(stappler::font::FontVariableAxis const&,stappler::font::FontVariableAxis const&)

## BRIEF

Логический оператор флага (создан автоматически)

## CONTENT

Логический оператор флага (создан автоматически)

Параметры:
* stappler::font::FontVariableAxis const&
* stappler::font::FontVariableAxis const&

Возвращает:
* stappler::font::FontVariableAxis

# ::stappler::font::operator&(stappler::font::FontVariableAxis const&,stappler::font::FontVariableAxis const&)

## BRIEF

Логический оператор флага (создан автоматически)

## CONTENT

Логический оператор флага (создан автоматически)

Параметры:
* stappler::font::FontVariableAxis const&
* stappler::font::FontVariableAxis const&

Возвращает:
* stappler::font::FontVariableAxis

# ::stappler::font::operator^(stappler::font::FontVariableAxis const&,stappler::font::FontVariableAxis const&)

## BRIEF

Логический оператор флага (создан автоматически)

## CONTENT

Логический оператор флага (создан автоматически)

Параметры:
* stappler::font::FontVariableAxis const&
* stappler::font::FontVariableAxis const&

Возвращает:
* stappler::font::FontVariableAxis

# ::stappler::font::operator|=(stappler::font::FontVariableAxis&,stappler::font::FontVariableAxis const&)

## BRIEF

Логический оператор флага (создан автоматически)

## CONTENT

Логический оператор флага (создан автоматически)

Параметры:
* stappler::font::FontVariableAxis&
* stappler::font::FontVariableAxis const&

Возвращает:
* stappler::font::FontVariableAxis&

# ::stappler::font::operator&=(stappler::font::FontVariableAxis&,stappler::font::FontVariableAxis const&)

## BRIEF

Логический оператор флага (создан автоматически)

## CONTENT

Логический оператор флага (создан автоматически)

Параметры:
* stappler::font::FontVariableAxis&
* stappler::font::FontVariableAxis const&

Возвращает:
* stappler::font::FontVariableAxis&

# ::stappler::font::operator^=(stappler::font::FontVariableAxis&,stappler::font::FontVariableAxis const&)

## BRIEF

Логический оператор флага (создан автоматически)

## CONTENT

Логический оператор флага (создан автоматически)

Параметры:
* stappler::font::FontVariableAxis&
* stappler::font::FontVariableAxis const&

Возвращает:
* stappler::font::FontVariableAxis&

# ::stappler::font::operator==(stappler::font::FontVariableAxis const&,std::underlying_type<FontVariableAxis>::type const&)

## BRIEF

Логический оператор флага (создан автоматически)

## CONTENT

Логический оператор флага (создан автоматически)

Параметры:
* stappler::font::FontVariableAxis const&
* std::underlying_type<FontVariableAxis>::type const&

Возвращает:
* bool

# ::stappler::font::operator==(std::underlying_type<FontVariableAxis>::type const&,stappler::font::FontVariableAxis const&)

## BRIEF

Логический оператор флага (создан автоматически)

## CONTENT

Логический оператор флага (создан автоматически)

Параметры:
* std::underlying_type<FontVariableAxis>::type const&
* stappler::font::FontVariableAxis const&

Возвращает:
* bool

# ::stappler::font::operator!=(stappler::font::FontVariableAxis const&,std::underlying_type<FontVariableAxis>::type const&)

## BRIEF

Логический оператор флага (создан автоматически)

## CONTENT

Логический оператор флага (создан автоматически)

Параметры:
* stappler::font::FontVariableAxis const&
* std::underlying_type<FontVariableAxis>::type const&

Возвращает:
* bool

# ::stappler::font::operator!=(std::underlying_type<FontVariableAxis>::type const&,stappler::font::FontVariableAxis const&)

## BRIEF

Логический оператор флага (создан автоматически)

## CONTENT

Логический оператор флага (создан автоматически)

Параметры:
* std::underlying_type<FontVariableAxis>::type const&
* stappler::font::FontVariableAxis const&

Возвращает:
* bool

# ::stappler::font::operator~(stappler::font::FontVariableAxis const&)

## BRIEF

Логический оператор флага (создан автоматически)

## CONTENT

Логический оператор флага (создан автоматически)

Параметры:
* stappler::font::FontVariableAxis const&

Возвращает:
* stappler::font::FontVariableAxis

# ::stappler::font::Autofit

## BRIEF

Значение автоматического выравнивания

## CONTENT

Значение автоматического выравнивания

Значения:
* None
* Width - по ширине
* Height - по высоте
* Cover - описан вокруг
* Contain - вписан


# ::stappler::font::TextTransform

## BRIEF

Трансформация текста

## CONTENT

Трансформация текста

Значения:
* None
* Uppercase - верхний регистр
* Lowercase - нижний негистр


# ::stappler::font::TextDecoration

## BRIEF

Декорации текста

## CONTENT

Декорации текста

Значения:
* None
* LineThrough
* Overline
* Underline


# ::stappler::font::TextAlign

## BRIEF

Выравнивание текста

## CONTENT

Выравнивание текста

Значения:
* Left
* Center
* Right
* Justify


# ::stappler::font::WhiteSpace

## BRIEF

Режим пробелов

## CONTENT

Режим пробелов

Значения:
* Normal
* Nowrap - без переносов
* Pre - предформатированный текст
* PreLine - предформатирвоанный с сохранением строк
* PreWrap - предформатированный с переносом


# ::stappler::font::Hyphens

## BRIEF

Режим расстановки переносов

## CONTENT

Режим расстановки переносов

Значения:
* None
* Manual - ручной
* Auto - автоматический


# ::stappler::font::VerticalAlign

## BRIEF

Выравнивание по вертикали

## CONTENT

Выравнивание по вертикали

Значения:
* Baseline
* Middle
* Sub
* Super
* Top
* Bottom


# ::stappler::font::FontStyle

## BRIEF

Стиль шрифта

## CONTENT

Стиль шрифта. Описывается как целочисленное значение наклона (64 единицы - 1 градус) либо специальные значения Italic и Oblique.

Базовые классы:
* ValueWrapper<int16_t,class FontStyleFlag>


# ::stappler::font::FontStyle::Normal

## BRIEF

Обычный стиль шрифта

## CONTENT

Обычный стиль шрифта

Тип: stappler::font::FontStyle const


# ::stappler::font::FontStyle::Italic

## BRIEF

Наклонный стиль шрифта

## CONTENT

Наклонный стиль шрифта

Тип: stappler::font::FontStyle const


# ::stappler::font::FontStyle::Oblique

## BRIEF

Скошенный стиль шрифта

## CONTENT

Скошенный стиль шрифта

Тип: stappler::font::FontStyle const


# ::stappler::font::FontStyle::FromDegrees(float)

## BRIEF

Создаёт стиль шрифта из градуса наклона

## CONTENT

Создаёт стиль шрифта из градуса наклона

Параметры:
* float

Возвращает:
* stappler::font::FontStyle

# ::stappler::font::FontWeight

## BRIEF

Толщина шрифта

## CONTENT

Толщина шрифта. Описывается в линиях: 400 - нормальная.

Базовые классы:
* ValueWrapper<uint16_t,class FontWeightFlag>


# ::stappler::font::FontWeight::Thin

## BRIEF

Сверхтонкий шрифт

## CONTENT

Сверхтонкий шрифт

Тип: stappler::font::FontWeight const


# ::stappler::font::FontWeight::ExtraLight

## BRIEF

Сверхлёгкий шрифт

## CONTENT

Сверхлёгкий шрифт

Тип: stappler::font::FontWeight const


# ::stappler::font::FontWeight::Light

## BRIEF

Облегчённый шрифт

## CONTENT

Облегчённый шрифт

Тип: stappler::font::FontWeight const


# ::stappler::font::FontWeight::Normal

## BRIEF

Обычный шрифт

## CONTENT

Обычный шрифт

Тип: stappler::font::FontWeight const


# ::stappler::font::FontWeight::Regular

## BRIEF

Обычный шрифт

## CONTENT

Обычный шрифт

Тип: stappler::font::FontWeight const


# ::stappler::font::FontWeight::Medium

## BRIEF

Средний шрифт

## CONTENT

Средний шрифт

Тип: stappler::font::FontWeight const


# ::stappler::font::FontWeight::SemiBold

## BRIEF

Полужирный шрифт

## CONTENT

Полужирный шрифт

Тип: stappler::font::FontWeight const


# ::stappler::font::FontWeight::Bold

## BRIEF

Жирный шрифт

## CONTENT

Жирный шрифт

Тип: stappler::font::FontWeight const


# ::stappler::font::FontWeight::ExtraBold

## BRIEF

Суперширный шрифт

## CONTENT

Суперширный шрифт

Тип: stappler::font::FontWeight const


# ::stappler::font::FontWeight::Heavy

## BRIEF

Тяжёлый шрифт

## CONTENT

Тяжёлый шрифт

Тип: stappler::font::FontWeight const


# ::stappler::font::FontWeight::Black

## BRIEF

Сверхтяжёлый шрифт

## CONTENT

Сверхтяжёлый шрифт

Тип: stappler::font::FontWeight const


# ::stappler::font::FontStretch

## BRIEF

Натяжение шрифта

## CONTENT

Натяжение шрифта. Описывается в долях (1% на 2 целых единицы)

Базовые классы:
* ValueWrapper<uint16_t,class FontStretchFlag>


# ::stappler::font::FontStretch::UltraCondensed

## BRIEF

Ультрасжатый шрифт

## CONTENT

Ультрасжатый шрифт

Тип: stappler::font::FontStretch const


# ::stappler::font::FontStretch::ExtraCondensed

## BRIEF

Сверхсжатый шрифт

## CONTENT

Сверхсжатый шрифт

Тип: stappler::font::FontStretch const


# ::stappler::font::FontStretch::Condensed

## BRIEF

Сжатый шрифт

## CONTENT

Сжатый шрифт

Тип: stappler::font::FontStretch const


# ::stappler::font::FontStretch::SemiCondensed

## BRIEF

Полусжатый шрифт

## CONTENT

Полусжатый шрифт

Тип: stappler::font::FontStretch const


# ::stappler::font::FontStretch::Normal

## BRIEF

Обычный шрифт

## CONTENT

Обычный шрифт

Тип: stappler::font::FontStretch const


# ::stappler::font::FontStretch::SemiExpanded

## BRIEF

Полуразрежённый шрифт

## CONTENT

Полуразрежённый шрифт

Тип: stappler::font::FontStretch const


# ::stappler::font::FontStretch::Expanded

## BRIEF

Разрежённый шрифт

## CONTENT

Разрежённый шрифт

Тип: stappler::font::FontStretch const


# ::stappler::font::FontStretch::ExtraExpanded

## BRIEF

Сверхразрежённый шрифт

## CONTENT

Сверхразрежённый шрифт

Тип: stappler::font::FontStretch const


# ::stappler::font::FontStretch::UltraExpanded

## BRIEF

Ультраразрежённый шрифт

## CONTENT

Ультраразрежённый шрифт

Тип: stappler::font::FontStretch const


# ::stappler::font::FontGrade

## BRIEF

Адаптивный вес шрифта

## CONTENT

Адаптивный вес шрифта. Возмоэность изменять вес шрифта, не изменяя размер символа. Выражен в линиях разницы с текущим весом (0 - нормальный, -150 - облегчённый, 150 - утяжелённый)

Базовые классы:
* ValueWrapper<int16_t,class FontGradeFlag>


# ::stappler::font::FontGrade::Thin

## BRIEF

Сверхоблегчённый адаптивный вес

## CONTENT

Сверхоблегчённый адаптивный вес

Тип: stappler::font::FontGrade const


# ::stappler::font::FontGrade::Reduced

## BRIEF

Слегка облегчённый адаптивный вес

## CONTENT

Слегка облегчённый адаптивный вес

Тип: stappler::font::FontGrade const


# ::stappler::font::FontGrade::Normal

## BRIEF

Нормальный адаптивный вес

## CONTENT

Нормальный адаптивный вес

Тип: stappler::font::FontGrade const


# ::stappler::font::FontGrade::Heavy

## BRIEF

Утяжелённый адаптивный вес

## CONTENT

Утяжелённый адаптивный вес

Тип: stappler::font::FontGrade const


# ::stappler::font::FontVariant

## BRIEF

Вариант начертания шрифта

## CONTENT

Вариант начертания шрифта

Значения:
* Normal
* SmallCaps


# ::stappler::font::ListStyleType

## BRIEF

Стиль маркеров списка

## CONTENT

Стиль маркеров списка

Значения:
* None
* Circle
* Disc
* Square
* XMdash
* Decimal
* DecimalLeadingZero
* LowerAlpha
* LowerGreek
* LowerRoman
* UpperAlpha
* UpperRoman


# ::stappler::font::FontSize

## BRIEF

Размер шрифта

## CONTENT

Размер шрифта. Выражен в пикселях. Хранится в значении 1/16 пикселя на единицу для адаптивного прогресса.

# ::stappler::font::FontSize::XXSmall

## BRIEF

Ультрамалый размер

## CONTENT

Ультрамалый размер

Тип: stappler::font::FontSize const


# ::stappler::font::FontSize::XSmall

## BRIEF

Сверхмалый размер

## CONTENT

Сверхмалый размер

Тип: stappler::font::FontSize const


# ::stappler::font::FontSize::Small

## BRIEF

Малый шрифт

## CONTENT

Малый размер

Тип: stappler::font::FontSize const


# ::stappler::font::FontSize::Medium

## BRIEF

Стандартный размер

## CONTENT

Стандартный размер

Тип: stappler::font::FontSize const


# ::stappler::font::FontSize::Large

## BRIEF

Большой размер

## CONTENT

Большой размер

Тип: stappler::font::FontSize const


# ::stappler::font::FontSize::XLarge

## BRIEF

Сверхбольшой размер

## CONTENT

Сверхбольшой размер

Тип: stappler::font::FontSize const


# ::stappler::font::FontSize::XXLarge

## BRIEF

Ультрабольшой размер

## CONTENT

Ультрабольшой размер

Тип: stappler::font::FontSize const


# ::stappler::font::FontSize::progress(stappler::font::FontSize,stappler::font::FontSize,float)

## BRIEF

Функция линейной интерполяции размера

## CONTENT

Функция линейной интерполяции размера

Параметры:
* stappler::font::FontSize
* stappler::font::FontSize
* float

Возвращает:
* stappler::font::FontSize

# ::stappler::font::FontSize::make(float)

## BRIEF

Создаёт размер из числа с плавающей точкой

## CONTENT

Создаёт размер из числа с плавающей точкой

Параметры:
* float

Возвращает:
* stappler::font::FontSize

# ::stappler::font::FontSize::FontSize()

## BRIEF

Создаёт размер по умолчанию

## CONTENT

Создаёт размер по умолчанию


# ::stappler::font::FontSize::FontSize(stappler::font::FontSize const&)

## BRIEF

Конструктор копирования

## CONTENT

Конструктор копирования

Параметры:
* stappler::font::FontSize const&


# ::stappler::font::FontSize::FontSize(uint16_t)

## BRIEF

Конструктор из пиксельного размера

## CONTENT

Конструктор из пиксельного размера

Параметры:
* uint16_t


# ::stappler::font::FontSize::scale(float) const

## BRIEF

Возвращает размер, умноженный на фактор

## CONTENT

Возвращает размер, умноженный на фактор

Параметры:
* float

Возвращает:
* stappler::font::FontSize

# ::stappler::font::FontSize::operator*(float) const

## BRIEF

Возвращает размер, умноженный на фактор

## CONTENT

Возвращает размер, умноженный на фактор

Параметры:
* float

Возвращает:
* stappler::font::FontSize

# ::stappler::font::FontSize::operator/(float) const

## BRIEF

Возвращает размер, делённый на фактор

## CONTENT

Возвращает размер, делённый на фактор

Параметры:
* float

Возвращает:
* stappler::font::FontSize

# ::stappler::font::FontSize::get() const

## BRIEF

Возвращает размер в пикселях

## CONTENT

Возвращает размер в пикселях

Возвращает:
* uint16_t

# ::stappler::font::FontSize::val() const

## BRIEF

Возвращает размер в пикселях с учётом долей

## CONTENT

Возвращает размер в пикселях с учётом долей

Возвращает:
* float

# ::stappler::font::FontSize::operator-=(stappler::font::FontSize)

## BRIEF

Уменьшает размер на значение

## CONTENT

Уменьшает размер на значение

Параметры:
* stappler::font::FontSize

Возвращает:
* stappler::font::FontSize&

# ::stappler::font::FontSize::operator==(stappler::font::FontSize const&) const

## BRIEF

Сравнивает размеры

## CONTENT

Сравнивает размеры

Параметры:
* stappler::font::FontSize const&

Возвращает:
* bool

# ::stappler::font::FontSize::operator!=(stappler::font::FontSize const&) const

## BRIEF

Сравнивает размеры

## CONTENT

Сравнивает размеры

Параметры:
* stappler::font::FontSize const&

Возвращает:
* bool

# ::stappler::font::FontSize::value

## BRIEF

Хранимое значение

## CONTENT

Хранимое значение - 1/16 пикселя на единицу

Тип: uint16_t


# ::stappler::font::TextParameters

## BRIEF

Общая структура параметров стиля текста

## CONTENT

Общая структура параметров стиля текста


# ::stappler::font::TextParameters::textTransform

## BRIEF

Режим преобразования текста

## CONTENT

Режим преобразования текста

Тип: stappler::font::TextTransform


# ::stappler::font::TextParameters::textDecoration

## BRIEF

Декорирование текста

## CONTENT

Декорирование текста

Тип: stappler::font::TextDecoration


# ::stappler::font::TextParameters::whiteSpace

## BRIEF

Режим пробелов

## CONTENT

Режим пробелов

Тип: stappler::font::WhiteSpace


# ::stappler::font::TextParameters::hyphens

## BRIEF

Режим переносов

## CONTENT

Режим переносов

Тип: stappler::font::Hyphens


# ::stappler::font::TextParameters::verticalAlign

## BRIEF

Вертикальное выравнивание

## CONTENT

Вертикальное выравнивание

Тип: stappler::font::VerticalAlign


# ::stappler::font::TextParameters::color

## BRIEF

Цвет текста

## CONTENT

Цвет текста

Тип: stappler::font::Color3B


# ::stappler::font::TextParameters::opacity

## BRIEF

Прозрачность текста

## CONTENT

Прозрачность текста

Тип: uint8_t


# ::stappler::font::TextParameters::operator==(stappler::font::TextParameters const&) const

## BRIEF

Сравнивает параметры стиля текста

## CONTENT

Сравнивает параметры стиля текста

Параметры:
* stappler::font::TextParameters const&

Возвращает:
* bool

# ::stappler::font::TextParameters::operator!=(stappler::font::TextParameters const&) const

## BRIEF

Сравнивает параметры стиля текста

## CONTENT

Сравнивает параметры стиля текста

Параметры:
* stappler::font::TextParameters const&

Возвращает:
* bool

# ::stappler::font::FontLayoutParameters

## BRIEF

Структура параметров стиля шрифта

## CONTENT

Структура параметров стиля шрифта


# ::stappler::font::FontLayoutParameters::fontStyle

## BRIEF

Стиль шрифта

## CONTENT

Стиль шрифта

Тип: stappler::font::FontStyle


# ::stappler::font::FontLayoutParameters::fontWeight

## BRIEF

Вес шрифта

## CONTENT

Вес шрифта

Тип: stappler::font::FontWeight


# ::stappler::font::FontLayoutParameters::fontStretch

## BRIEF

Натяжение шрифта

## CONTENT

Натяжение шрифта

Тип: stappler::font::FontStretch


# ::stappler::font::FontLayoutParameters::fontGrade

## BRIEF

Адаптивный вес шрифта

## CONTENT

Адаптивный вес шрифта

Тип: stappler::font::FontGrade


# ::stappler::font::FontLayoutParameters::operator==(stappler::font::FontLayoutParameters const&) const

## BRIEF

Сравнивает параметры стиля шрифта

## CONTENT

Сравнивает параметры стиля шрифта

Параметры:
* stappler::font::FontLayoutParameters const&

Возвращает:
* bool

# ::stappler::font::FontLayoutParameters::operator!=(stappler::font::FontLayoutParameters const&) const

## BRIEF

Сравнивает параметры стиля шрифта

## CONTENT

Сравнивает параметры стиля шрифта

Параметры:
* stappler::font::FontLayoutParameters const&

Возвращает:
* bool

# ::stappler::font::FontSpecializationVector

## BRIEF

Структура параметров специализации изменяемого шрифта

## CONTENT

Структура параметров специализации изменяемого шрифта

Базовые классы:
* FontLayoutParameters


# ::stappler::font::FontSpecializationVector::fontSize

## BRIEF

Размер шрифта

## CONTENT

Размер шрифта

Тип: stappler::font::FontSize


# ::stappler::font::FontSpecializationVector::density

## BRIEF

Желаемая плотность пикселей

## CONTENT

Желаемая плотность пикселей (контролирует оптический размер)

Тип: float


# ::stappler::font::FontSpecializationVector::getSpecializationArgs<typename>() const

## BRIEF

Возвращает строку специализации

## CONTENT

Возвращает строку специализации, содержащую все параметры специализации

Параметры шаблона:
* typename Interface - интерфейс памяти для новой строки

Возвращает:
* typename Interface::StringType

# ::stappler::font::FontSpecializationVector::operator==(stappler::font::FontSpecializationVector const&) const

## BRIEF

Сравнивает параметры специализации шрифта

## CONTENT

Сравнивает параметры специализации шрифта

Параметры:
* stappler::font::FontSpecializationVector const&

Возвращает:
* bool

# ::stappler::font::FontSpecializationVector::operator!=(stappler::font::FontSpecializationVector const&) const

## BRIEF

Сравнивает параметры специализации шрифта

## CONTENT

Сравнивает параметры специализации шрифта

Параметры:
* stappler::font::FontSpecializationVector const&

Возвращает:
* bool

# ::stappler::font::FontParameters

## BRIEF

Общие параметры шрифта

## CONTENT

Общие параметры шрифта. Основаны на параметрах специализации шрифта.

Базовые классы:
* FontSpecializationVector


# ::stappler::font::FontParameters::create(stappler::StringView,memory::pool_t*)

## BRIEF

Создаёт параметры шрифта из строки

## CONTENT

Создаёт параметры шрифта из строки

Параметры:
* stappler::StringView - строка конфигурации
* memory::pool_t* - пул памяти для инициализации имени семейства шрифта

Возвращает:
* stappler::font::FontParameters

# ::stappler::font::FontParameters::getFontConfigName<typename>(stappler::StringView,stappler::font::FontSize,stappler::font::FontStyle,stappler::font::FontWeight,stappler::font::FontStretch,stappler::font::FontGrade,stappler::font::FontVariant,bool)

## BRIEF

Возвращает строку конфигурации шрифта

## CONTENT

Возвращает строку конфигурации шрифта

Параметры шаблона:
* typename Interface - интерфейс памяти для новой строки

Параметры:
* stappler::StringView - семейство шрифта
* stappler::font::FontSize
* stappler::font::FontStyle
* stappler::font::FontWeight
* stappler::font::FontStretch
* stappler::font::FontGrade
* stappler::font::FontVariant
* bool - true для SmallCaps

Возвращает:
* typename Interface::StringType

# ::stappler::font::FontParameters::fontVariant

## BRIEF

Вариант начертания шрифта

## CONTENT

Вариант начертания шрифта

Тип: stappler::font::FontVariant


# ::stappler::font::FontParameters::listStyleType

## BRIEF

Соотвествующий стиль маркеров списка

## CONTENT

Соотвествующий стиль маркеров списка

Тип: stappler::font::ListStyleType


# ::stappler::font::FontParameters::fontFamily

## BRIEF

Имя семества шрифта

## CONTENT

Имя семества шрифта. Использовать с осторожностью - невладеющий контейнер. Исходная строка должна существовать всё время жизни параметров.

Тип: stappler::StringView


# ::stappler::font::FontParameters::persistent

## BRIEF

Флаг фиксированности параметров

## CONTENT

Флаг фиксированности параметров. Если установлен, шрифты с этим набором параметров будут считаться постоянно используемыми и не будут выгружаться из памяти.

Тип: bool


# ::stappler::font::FontParameters::getConfigName<typename>(bool) const

## BRIEF

Возвращает строку конфигурации для параметров

## CONTENT

Возвращает строку конфигурации для параметров

Параметры шаблона:
* typename Interface - интерфейс памяти для новой строки

Параметры:
* bool - true для SmallCaps

Возвращает:
* typename Interface::StringType

# ::stappler::font::FontParameters::getSmallCaps() const

## BRIEF

Возвращает параемтры сопряжённого шрифта при использовании SmallCaps

## CONTENT

Возвращает параемтры сопряжённого шрифта при использовании SmallCaps

Возвращает:
* stappler::font::FontParameters

# ::stappler::font::FontParameters::operator==(stappler::font::FontParameters const&) const

## BRIEF

Оператор сравнения параметров шрифта

## CONTENT

Оператор сравнения параметров шрифта

Параметры:
* stappler::font::FontParameters const&

Возвращает:
* bool

# ::stappler::font::FontParameters::operator!=(stappler::font::FontParameters const&) const

## BRIEF

Оператор сравнения параметров шрифта

## CONTENT

Оператор сравнения параметров шрифта

Параметры:
* stappler::font::FontParameters const&

Возвращает:
* bool

# ::stappler::font::FontVariations

## BRIEF

Параметры допустимых изменений динамического шрифта

## CONTENT

Параметры допустимых изменений динамического шрифта


# ::stappler::font::FontVariations::Variations<typename>

## BRIEF

Вспомогательный тип для хранения минимального и максимального значений параметра

## CONTENT

Вспомогательный тип для хранения минимального и максимального значений параметра

Параметры шаблона:
* typename T - тип параметра


# ::stappler::font::FontVariations::Variations<typename>::min

## BRIEF

Значение минимума

## CONTENT

Значение минимума

Тип: T


# ::stappler::font::FontVariations::Variations<typename>::max

## BRIEF

Значение максимума

## CONTENT

Значение максимума

Тип: T


# ::stappler::font::FontVariations::Variations<typename>::operator=(T const&)

## BRIEF

Назначает минимуму и максимуму одно значение

## CONTENT

Назначает минимуму и максимуму одно значение
Параметры:
* T const&

Возвращает:
* Variations<T>&

# ::stappler::font::FontVariations::Variations<typename>::clamp(T) const

## BRIEF

Обрезает исходное значение по заданным минимуму и максимуму

## CONTENT

Обрезает исходное значение по заданным минимуму и максимуму

Параметры:
* T

Возвращает:
* T

# ::stappler::font::FontVariations::axisMask

## BRIEF

Маска флагов изменяемых параметров

## CONTENT

Маска флагов изменяемых параметров. Маска содержит флаги только тех параметров, что могут быть изменены. Остальные параметры статичны.

Тип: stappler::font::FontVariableAxis


# ::stappler::font::FontVariations::weight

## BRIEF

Допустимая толщина шрифта

## CONTENT

Допустимая толщина шрифта

Тип: Variations<stappler::font::FontWeight>


# ::stappler::font::FontVariations::stretch

## BRIEF

Допустимое растяжение шрифта

## CONTENT

Допустимое растяжение шрифта

Тип: Variations<stappler::font::FontStretch>


# ::stappler::font::FontVariations::slant

## BRIEF

Допустимый наклон шрифта

## CONTENT

Допустимый наклон шрифта

Тип: Variations<stappler::font::FontStyle>


# ::stappler::font::FontVariations::opticalSize

## BRIEF

Допустимый оптический размер шрифта

## CONTENT

Допустимый оптический размер шрифта

Тип: Variations<uint32_t>


# ::stappler::font::FontVariations::italic

## BRIEF

Допустимое наклонное начертание шрифта

## CONTENT

Допустимое наклонное начертание шрифта (0-1, либо 0-0б либо 1-1)

Тип: Variations<uint32_t>


# ::stappler::font::FontVariations::grade

## BRIEF

Допустимое утолщение шрифта

## CONTENT

Допустимое утолщение шрифта

Тип: Variations<stappler::font::FontGrade>


# ::stappler::font::FontVariations::getSpecialization(stappler::font::FontSpecializationVector const&) const

## BRIEF

Возвращает максимально близкую к заданной специализацию шрифта

## CONTENT

Возвращает максимально близкую к заданной специализацию шрифта, используя ограничения переменных.

Параметры:
* stappler::font::FontSpecializationVector const&

Возвращает:
* stappler::font::FontSpecializationVector

# ::stappler::progress(font::FontSize,font::FontSize,float)

## BRIEF

Специализация линейной интерполяции для размера шрифта

## CONTENT

Специализация линейной интерполяции для размера шрифта. Размер может принимать субпиксельные значения, что имеет роль при высокой плотности пикселей. Вместо использования целых чисел, стоит использовать линейную интерполцию.

Параметры:
* font::FontSize
* font::FontSize
* float - фактор интерполяции

# ::std::hash<::stappler::font::FontSize>::hash<::stappler::font::FontSize>

## BRIEF

Стандартная функция хэширования для размера шрифта

## CONTENT

Стандартная функция хэширования для размера шрифта


# ::std::hash<::stappler::font::FontSize>::hash()

## BRIEF

Стандартная функция хэширования для размера шрифта

## CONTENT

Стандартная функция хэширования для размера шрифта

# ::std::hash<::stappler::font::FontSize>::operator()(::stappler::font::FontSize const&) const

## BRIEF

Стандартная функция хэширования для размера шрифта

## CONTENT

Стандартная функция хэширования для размера шрифта

Параметры:
* ::stappler::font::FontSize const&

Возвращает:
* std::size_t