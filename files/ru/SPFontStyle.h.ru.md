Title: SPFontStyle.h


# CORE_GEOM_SPFONTSTYLE_H_

## BRIEF

Заголовок, описыающий параметры стиля шрифта

## CONTENT

Заголовок, описыающий параметры стиля шрифта

# ::stappler::geom::EnumSize

## BRIEF

Стандартный размер перечислимого типа стиля

## CONTENT

Стандартный размер перечислимого типа стиля: 8 бит.

# ::stappler::geom::Metric

## BRIEF

Структура метрики размера

## CONTENT

Структура метрики размера. Используется в качестве описания размеров для шрифтов и парамтеров отступов на веб-страницах.

# ::stappler::geom::Metric::Units

## BRIEF

Размерность метрики

## CONTENT

Размерность метрики

Значения:
* Percent - проценты (считаются 0.0 - 1.0)
* Px - экранные пиксели
* Em - отношение к родительскому элементу (1.0 - 100%)
* Rem - отношение к основному элементу документа
* Auto - определяется автоматически
* Dpi - плотность пикселей
* Dppx - пиксели в учётом плотности
* Contain - вписан в родительский элементы
* Cover - описан вокруг родительского эдемента
* Vw - отношение к ширине экрана
* Vh - отношение к высоте экрана
* VMin
* VMax


# ::stappler::geom::Metric::isAuto() const

## BRIEF

Проверяет, используется ли автоматический размер

## CONTENT

Проверяет, используется ли автоматический размер

Возвращает:
* bool

# ::stappler::geom::Metric::isFixed() const

## BRIEF

Проверяет, используется ли фиксирвоанный размер

## CONTENT

Проверяет, используется ли фиксирвоанный размер

Возвращает:
* bool

# ::stappler::geom::Metric::value

## BRIEF

Значение размера

## CONTENT

Значение размера

Тип: float


# ::stappler::geom::Metric::metric

## BRIEF

Размерность метрики

## CONTENT

Размерность метрики

Тип: stappler::geom::Metric::Units


# ::stappler::geom::Metric::Metric(float,stappler::geom::Metric::Units)

## BRIEF

Создаёт метрику

## CONTENT

Создаёт метрику

Параметры:
* float - значение
* stappler::geom::Metric::Units - размерность


# ::stappler::geom::Metric::Metric()

## BRIEF

Создаёт метрику с автоматическим размером

## CONTENT

Создаёт метрику с автоматическим размером

# ::stappler::geom::Metric::readStyleValue(stappler::StringView,bool,bool)

## BRIEF

Читает метрику из значения CSS

## CONTENT

Читает метрику из значения CSS

Параметры:
* stappler::StringView - строка для чтения
* bool - true - читает экранные метрики, false - общие
* bool - true - допускать пустые значеня

Возвращает:
* bool - true если метрика успешно прочитана

# ::stappler::geom::FontVariableAxis

## BRIEF

Доступные параметры для изменяемых шрифтов

## CONTENT

Доступные параметры для изменяемых шрифтов

Значения:
* None
* Weight - толщина
* Width - ширина
* Italic - курсив
* Slant - наклон
* OpticalSize - оптическая коррекция размера
* Grade - адаптивная ширина
* Stretch - натяжение


# ::stappler::geom::operator|(stappler::geom::FontVariableAxis const&,stappler::geom::FontVariableAxis const&)

## BRIEF

Логический оператор флага (создан автоматически)

## CONTENT

Логический оператор флага (создан автоматически)

Параметры:
* stappler::geom::FontVariableAxis const&
* stappler::geom::FontVariableAxis const&

Возвращает:
* stappler::geom::FontVariableAxis

# ::stappler::geom::operator&(stappler::geom::FontVariableAxis const&,stappler::geom::FontVariableAxis const&)

## BRIEF

Логический оператор флага (создан автоматически)

## CONTENT

Логический оператор флага (создан автоматически)

Параметры:
* stappler::geom::FontVariableAxis const&
* stappler::geom::FontVariableAxis const&

Возвращает:
* stappler::geom::FontVariableAxis

# ::stappler::geom::operator^(stappler::geom::FontVariableAxis const&,stappler::geom::FontVariableAxis const&)

## BRIEF

Логический оператор флага (создан автоматически)

## CONTENT

Логический оператор флага (создан автоматически)

Параметры:
* stappler::geom::FontVariableAxis const&
* stappler::geom::FontVariableAxis const&

Возвращает:
* stappler::geom::FontVariableAxis

# ::stappler::geom::operator|=(stappler::geom::FontVariableAxis&,stappler::geom::FontVariableAxis const&)

## BRIEF

Логический оператор флага (создан автоматически)

## CONTENT

Логический оператор флага (создан автоматически)

Параметры:
* stappler::geom::FontVariableAxis&
* stappler::geom::FontVariableAxis const&

Возвращает:
* stappler::geom::FontVariableAxis&

# ::stappler::geom::operator&=(stappler::geom::FontVariableAxis&,stappler::geom::FontVariableAxis const&)

## BRIEF

Логический оператор флага (создан автоматически)

## CONTENT

Логический оператор флага (создан автоматически)

Параметры:
* stappler::geom::FontVariableAxis&
* stappler::geom::FontVariableAxis const&

Возвращает:
* stappler::geom::FontVariableAxis&

# ::stappler::geom::operator^=(stappler::geom::FontVariableAxis&,stappler::geom::FontVariableAxis const&)

## BRIEF

Логический оператор флага (создан автоматически)

## CONTENT

Логический оператор флага (создан автоматически)

Параметры:
* stappler::geom::FontVariableAxis&
* stappler::geom::FontVariableAxis const&

Возвращает:
* stappler::geom::FontVariableAxis&

# ::stappler::geom::operator==(stappler::geom::FontVariableAxis const&,std::underlying_type<FontVariableAxis>::type const&)

## BRIEF

Логический оператор флага (создан автоматически)

## CONTENT

Логический оператор флага (создан автоматически)

Параметры:
* stappler::geom::FontVariableAxis const&
* std::underlying_type<FontVariableAxis>::type const&

Возвращает:
* bool

# ::stappler::geom::operator==(std::underlying_type<FontVariableAxis>::type const&,stappler::geom::FontVariableAxis const&)

## BRIEF

Логический оператор флага (создан автоматически)

## CONTENT

Логический оператор флага (создан автоматически)

Параметры:
* std::underlying_type<FontVariableAxis>::type const&
* stappler::geom::FontVariableAxis const&

Возвращает:
* bool

# ::stappler::geom::operator!=(stappler::geom::FontVariableAxis const&,std::underlying_type<FontVariableAxis>::type const&)

## BRIEF

Логический оператор флага (создан автоматически)

## CONTENT

Логический оператор флага (создан автоматически)

Параметры:
* stappler::geom::FontVariableAxis const&
* std::underlying_type<FontVariableAxis>::type const&

Возвращает:
* bool

# ::stappler::geom::operator!=(std::underlying_type<FontVariableAxis>::type const&,stappler::geom::FontVariableAxis const&)

## BRIEF

Логический оператор флага (создан автоматически)

## CONTENT

Логический оператор флага (создан автоматически)

Параметры:
* std::underlying_type<FontVariableAxis>::type const&
* stappler::geom::FontVariableAxis const&

Возвращает:
* bool

# ::stappler::geom::operator~(stappler::geom::FontVariableAxis const&)

## BRIEF

Логический оператор флага (создан автоматически)

## CONTENT

Логический оператор флага (создан автоматически)

Параметры:
* stappler::geom::FontVariableAxis const&

Возвращает:
* stappler::geom::FontVariableAxis

# ::stappler::geom::Autofit

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


# ::stappler::geom::TextTransform

## BRIEF

Трансформация текста

## CONTENT

Трансформация текста

Значения:
* None
* Uppercase - верхний регистр
* Lowercase - нижний негистр


# ::stappler::geom::TextDecoration

## BRIEF

Декорации текста

## CONTENT

Декорации текста

Значения:
* None
* LineThrough
* Overline
* Underline


# ::stappler::geom::TextAlign

## BRIEF

Выравнивание текста

## CONTENT

Выравнивание текста

Значения:
* Left
* Center
* Right
* Justify


# ::stappler::geom::WhiteSpace

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


# ::stappler::geom::Hyphens

## BRIEF

Режим расстановки переносов

## CONTENT

Режим расстановки переносов

Значения:
* None
* Manual - ручной
* Auto - автоматический


# ::stappler::geom::VerticalAlign

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


# ::stappler::geom::FontStyle

## BRIEF

Стиль шрифта

## CONTENT

Стиль шрифта. Описывается как целочисленное значение наклона (64 единицы - 1 градус) либо специальные значения Italic и Oblique.

Базовые классы:
* ValueWrapper<int16_t,class FontStyleFlag>


# ::stappler::geom::FontStyle::Normal

## BRIEF

Обычный стиль шрифта

## CONTENT

Обычный стиль шрифта

Тип: stappler::geom::FontStyle const


# ::stappler::geom::FontStyle::Italic

## BRIEF

Наклонный стиль шрифта

## CONTENT

Наклонный стиль шрифта

Тип: stappler::geom::FontStyle const


# ::stappler::geom::FontStyle::Oblique

## BRIEF

Скошенный стиль шрифта

## CONTENT

Скошенный стиль шрифта

Тип: stappler::geom::FontStyle const


# ::stappler::geom::FontStyle::FromDegrees(float)

## BRIEF

Создаёт стиль шрифта из градуса наклона

## CONTENT

Создаёт стиль шрифта из градуса наклона

Параметры:
* float

Возвращает:
* stappler::geom::FontStyle

# ::stappler::geom::FontWeight

## BRIEF

Толщина шрифта

## CONTENT

Толщина шрифта. Описывается в линиях: 400 - нормальная.

Базовые классы:
* ValueWrapper<uint16_t,class FontWeightFlag>


# ::stappler::geom::FontWeight::Thin

## BRIEF

Сверхтонкий шрифт

## CONTENT

Сверхтонкий шрифт

Тип: stappler::geom::FontWeight const


# ::stappler::geom::FontWeight::ExtraLight

## BRIEF

Сверхлёгкий шрифт

## CONTENT

Сверхлёгкий шрифт

Тип: stappler::geom::FontWeight const


# ::stappler::geom::FontWeight::Light

## BRIEF

Облегчённый шрифт

## CONTENT

Облегчённый шрифт

Тип: stappler::geom::FontWeight const


# ::stappler::geom::FontWeight::Normal

## BRIEF

Обычный шрифт

## CONTENT

Обычный шрифт

Тип: stappler::geom::FontWeight const


# ::stappler::geom::FontWeight::Regular

## BRIEF

Обычный шрифт

## CONTENT

Обычный шрифт

Тип: stappler::geom::FontWeight const


# ::stappler::geom::FontWeight::Medium

## BRIEF

Средний шрифт

## CONTENT

Средний шрифт

Тип: stappler::geom::FontWeight const


# ::stappler::geom::FontWeight::SemiBold

## BRIEF

Полужирный шрифт

## CONTENT

Полужирный шрифт

Тип: stappler::geom::FontWeight const


# ::stappler::geom::FontWeight::Bold

## BRIEF

Жирный шрифт

## CONTENT

Жирный шрифт

Тип: stappler::geom::FontWeight const


# ::stappler::geom::FontWeight::ExtraBold

## BRIEF

Суперширный шрифт

## CONTENT

Суперширный шрифт

Тип: stappler::geom::FontWeight const


# ::stappler::geom::FontWeight::Heavy

## BRIEF

Тяжёлый шрифт

## CONTENT

Тяжёлый шрифт

Тип: stappler::geom::FontWeight const


# ::stappler::geom::FontWeight::Black

## BRIEF

Сверхтяжёлый шрифт

## CONTENT

Сверхтяжёлый шрифт

Тип: stappler::geom::FontWeight const


# ::stappler::geom::FontStretch

## BRIEF

Натяжение шрифта

## CONTENT

Натяжение шрифта. Описывается в долях (1% на 2 целых единицы)

Базовые классы:
* ValueWrapper<uint16_t,class FontStretchFlag>


# ::stappler::geom::FontStretch::UltraCondensed

## BRIEF

Ультрасжатый шрифт

## CONTENT

Ультрасжатый шрифт

Тип: stappler::geom::FontStretch const


# ::stappler::geom::FontStretch::ExtraCondensed

## BRIEF

Сверхсжатый шрифт

## CONTENT

Сверхсжатый шрифт

Тип: stappler::geom::FontStretch const


# ::stappler::geom::FontStretch::Condensed

## BRIEF

Сжатый шрифт

## CONTENT

Сжатый шрифт

Тип: stappler::geom::FontStretch const


# ::stappler::geom::FontStretch::SemiCondensed

## BRIEF

Полусжатый шрифт

## CONTENT

Полусжатый шрифт

Тип: stappler::geom::FontStretch const


# ::stappler::geom::FontStretch::Normal

## BRIEF

Обычный шрифт

## CONTENT

Обычный шрифт

Тип: stappler::geom::FontStretch const


# ::stappler::geom::FontStretch::SemiExpanded

## BRIEF

Полуразрежённый шрифт

## CONTENT

Полуразрежённый шрифт

Тип: stappler::geom::FontStretch const


# ::stappler::geom::FontStretch::Expanded

## BRIEF

Разрежённый шрифт

## CONTENT

Разрежённый шрифт

Тип: stappler::geom::FontStretch const


# ::stappler::geom::FontStretch::ExtraExpanded

## BRIEF

Сверхразрежённый шрифт

## CONTENT

Сверхразрежённый шрифт

Тип: stappler::geom::FontStretch const


# ::stappler::geom::FontStretch::UltraExpanded

## BRIEF

Ультраразрежённый шрифт

## CONTENT

Ультраразрежённый шрифт

Тип: stappler::geom::FontStretch const


# ::stappler::geom::FontGrade

## BRIEF

Адаптивный вес шрифта

## CONTENT

Адаптивный вес шрифта. Возмоэность изменять вес шрифта, не изменяя размер символа. Выражен в линиях разницы с текущим весом (0 - нормальный, -150 - облегчённый, 150 - утяжелённый)

Базовые классы:
* ValueWrapper<int16_t,class FontGradeFlag>


# ::stappler::geom::FontGrade::Thin

## BRIEF

Сверхоблегчённый адаптивный вес

## CONTENT

Сверхоблегчённый адаптивный вес

Тип: stappler::geom::FontGrade const


# ::stappler::geom::FontGrade::Reduced

## BRIEF

Слегка облегчённый адаптивный вес

## CONTENT

Слегка облегчённый адаптивный вес

Тип: stappler::geom::FontGrade const


# ::stappler::geom::FontGrade::Normal

## BRIEF

Нормальный адаптивный вес

## CONTENT

Нормальный адаптивный вес

Тип: stappler::geom::FontGrade const


# ::stappler::geom::FontGrade::Heavy

## BRIEF

Утяжелённый адаптивный вес

## CONTENT

Утяжелённый адаптивный вес

Тип: stappler::geom::FontGrade const


# ::stappler::geom::FontVariant

## BRIEF

Вариант начертания шрифта

## CONTENT

Вариант начертания шрифта

Значения:
* Normal
* SmallCaps


# ::stappler::geom::ListStyleType

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


# ::stappler::geom::FontSize

## BRIEF

Размер шрифта

## CONTENT

Размер шрифта. Выражен в пикселях. Хранится в значении 1/16 пикселя на единицу для адаптивного прогресса.

# ::stappler::geom::FontSize::XXSmall

## BRIEF

Ультрамалый размер

## CONTENT

Ультрамалый размер

Тип: stappler::geom::FontSize const


# ::stappler::geom::FontSize::XSmall

## BRIEF

Сверхмалый размер

## CONTENT

Сверхмалый размер

Тип: stappler::geom::FontSize const


# ::stappler::geom::FontSize::Small

## BRIEF

Малый шрифт

## CONTENT

Малый размер

Тип: stappler::geom::FontSize const


# ::stappler::geom::FontSize::Medium

## BRIEF

Стандартный размер

## CONTENT

Стандартный размер

Тип: stappler::geom::FontSize const


# ::stappler::geom::FontSize::Large

## BRIEF

Большой размер

## CONTENT

Большой размер

Тип: stappler::geom::FontSize const


# ::stappler::geom::FontSize::XLarge

## BRIEF

Сверхбольшой размер

## CONTENT

Сверхбольшой размер

Тип: stappler::geom::FontSize const


# ::stappler::geom::FontSize::XXLarge

## BRIEF

Ультрабольшой размер

## CONTENT

Ультрабольшой размер

Тип: stappler::geom::FontSize const


# ::stappler::geom::FontSize::progress(stappler::geom::FontSize,stappler::geom::FontSize,float)

## BRIEF

Функция линейной интерполяции размера

## CONTENT

Функция линейной интерполяции размера

Параметры:
* stappler::geom::FontSize
* stappler::geom::FontSize
* float

Возвращает:
* stappler::geom::FontSize

# ::stappler::geom::FontSize::make(float)

## BRIEF

Создаёт размер из числа с плавающей точкой

## CONTENT

Создаёт размер из числа с плавающей точкой

Параметры:
* float

Возвращает:
* stappler::geom::FontSize

# ::stappler::geom::FontSize::FontSize()

## BRIEF

Создаёт размер по умолчанию

## CONTENT

Создаёт размер по умолчанию


# ::stappler::geom::FontSize::FontSize(stappler::geom::FontSize const&)

## BRIEF

Конструктор копирования

## CONTENT

Конструктор копирования

Параметры:
* stappler::geom::FontSize const&


# ::stappler::geom::FontSize::FontSize(uint16_t)

## BRIEF

Конструктор из пиксельного размера

## CONTENT

Конструктор из пиксельного размера

Параметры:
* uint16_t


# ::stappler::geom::FontSize::scale(float) const

## BRIEF

Возвращает размер, умноженный на фактор

## CONTENT

Возвращает размер, умноженный на фактор

Параметры:
* float

Возвращает:
* stappler::geom::FontSize

# ::stappler::geom::FontSize::operator*(float) const

## BRIEF

Возвращает размер, умноженный на фактор

## CONTENT

Возвращает размер, умноженный на фактор

Параметры:
* float

Возвращает:
* stappler::geom::FontSize

# ::stappler::geom::FontSize::operator/(float) const

## BRIEF

Возвращает размер, делённый на фактор

## CONTENT

Возвращает размер, делённый на фактор

Параметры:
* float

Возвращает:
* stappler::geom::FontSize

# ::stappler::geom::FontSize::get() const

## BRIEF

Возвращает размер в пикселях

## CONTENT

Возвращает размер в пикселях

Возвращает:
* uint16_t

# ::stappler::geom::FontSize::val() const

## BRIEF

Возвращает размер в пикселях с учётом долей

## CONTENT

Возвращает размер в пикселях с учётом долей

Возвращает:
* float

# ::stappler::geom::FontSize::operator-=(stappler::geom::FontSize)

## BRIEF

Уменьшает размер на значение

## CONTENT

Уменьшает размер на значение

Параметры:
* stappler::geom::FontSize

Возвращает:
* stappler::geom::FontSize&

# ::stappler::geom::FontSize::operator==(stappler::geom::FontSize const&) const

## BRIEF

Сравнивает размеры

## CONTENT

Сравнивает размеры

Параметры:
* stappler::geom::FontSize const&

Возвращает:
* bool

# ::stappler::geom::FontSize::operator!=(stappler::geom::FontSize const&) const

## BRIEF

Сравнивает размеры

## CONTENT

Сравнивает размеры

Параметры:
* stappler::geom::FontSize const&

Возвращает:
* bool

# ::stappler::geom::FontSize::value

## BRIEF

Хранимое значение

## CONTENT

Хранимое значение - 1/16 пикселя на единицу

Тип: uint16_t


# ::stappler::geom::TextParameters

## BRIEF

Общая структура параметров стиля текста

## CONTENT

Общая структура параметров стиля текста


# ::stappler::geom::TextParameters::textTransform

## BRIEF

Режим преобразования текста

## CONTENT

Режим преобразования текста

Тип: stappler::geom::TextTransform


# ::stappler::geom::TextParameters::textDecoration

## BRIEF

Декорирование текста

## CONTENT

Декорирование текста

Тип: stappler::geom::TextDecoration


# ::stappler::geom::TextParameters::whiteSpace

## BRIEF

Режим пробелов

## CONTENT

Режим пробелов

Тип: stappler::geom::WhiteSpace


# ::stappler::geom::TextParameters::hyphens

## BRIEF

Режим переносов

## CONTENT

Режим переносов

Тип: stappler::geom::Hyphens


# ::stappler::geom::TextParameters::verticalAlign

## BRIEF

Вертикальное выравнивание

## CONTENT

Вертикальное выравнивание

Тип: stappler::geom::VerticalAlign


# ::stappler::geom::TextParameters::color

## BRIEF

Цвет текста

## CONTENT

Цвет текста

Тип: stappler::geom::Color3B


# ::stappler::geom::TextParameters::opacity

## BRIEF

Прозрачность текста

## CONTENT

Прозрачность текста

Тип: uint8_t


# ::stappler::geom::TextParameters::operator==(stappler::geom::TextParameters const&) const

## BRIEF

Сравнивает параметры стиля текста

## CONTENT

Сравнивает параметры стиля текста

Параметры:
* stappler::geom::TextParameters const&

Возвращает:
* bool

# ::stappler::geom::TextParameters::operator!=(stappler::geom::TextParameters const&) const

## BRIEF

Сравнивает параметры стиля текста

## CONTENT

Сравнивает параметры стиля текста

Параметры:
* stappler::geom::TextParameters const&

Возвращает:
* bool

# ::stappler::geom::FontLayoutParameters

## BRIEF

Структура параметров стиля шрифта

## CONTENT

Структура параметров стиля шрифта


# ::stappler::geom::FontLayoutParameters::fontStyle

## BRIEF

Стиль шрифта

## CONTENT

Стиль шрифта

Тип: stappler::geom::FontStyle


# ::stappler::geom::FontLayoutParameters::fontWeight

## BRIEF

Вес шрифта

## CONTENT

Вес шрифта

Тип: stappler::geom::FontWeight


# ::stappler::geom::FontLayoutParameters::fontStretch

## BRIEF

Натяжение шрифта

## CONTENT

Натяжение шрифта

Тип: stappler::geom::FontStretch


# ::stappler::geom::FontLayoutParameters::fontGrade

## BRIEF

Адаптивный вес шрифта

## CONTENT

Адаптивный вес шрифта

Тип: stappler::geom::FontGrade


# ::stappler::geom::FontLayoutParameters::operator==(stappler::geom::FontLayoutParameters const&) const

## BRIEF

Сравнивает параметры стиля шрифта

## CONTENT

Сравнивает параметры стиля шрифта

Параметры:
* stappler::geom::FontLayoutParameters const&

Возвращает:
* bool

# ::stappler::geom::FontLayoutParameters::operator!=(stappler::geom::FontLayoutParameters const&) const

## BRIEF

Сравнивает параметры стиля шрифта

## CONTENT

Сравнивает параметры стиля шрифта

Параметры:
* stappler::geom::FontLayoutParameters const&

Возвращает:
* bool

# ::stappler::geom::FontSpecializationVector

## BRIEF

Структура параметров специализации изменяемого шрифта

## CONTENT

Структура параметров специализации изменяемого шрифта

Базовые классы:
* FontLayoutParameters


# ::stappler::geom::FontSpecializationVector::fontSize

## BRIEF

Размер шрифта

## CONTENT

Размер шрифта

Тип: stappler::geom::FontSize


# ::stappler::geom::FontSpecializationVector::density

## BRIEF

Желаемая плотность пикселей

## CONTENT

Желаемая плотность пикселей (контролирует оптический размер)

Тип: float


# ::stappler::geom::FontSpecializationVector::getSpecializationArgs<typename>() const

## BRIEF

Возвращает строку специализации

## CONTENT

Возвращает строку специализации, содержащую все параметры специализации

Параметры шаблона:
* typename Interface - интерфейс памяти для новой строки

Возвращает:
* typename Interface::StringType

# ::stappler::geom::FontSpecializationVector::operator==(stappler::geom::FontSpecializationVector const&) const

## BRIEF

Сравнивает параметры специализации шрифта

## CONTENT

Сравнивает параметры специализации шрифта

Параметры:
* stappler::geom::FontSpecializationVector const&

Возвращает:
* bool

# ::stappler::geom::FontSpecializationVector::operator!=(stappler::geom::FontSpecializationVector const&) const

## BRIEF

Сравнивает параметры специализации шрифта

## CONTENT

Сравнивает параметры специализации шрифта

Параметры:
* stappler::geom::FontSpecializationVector const&

Возвращает:
* bool

# ::stappler::geom::FontParameters

## BRIEF

Общие параметры шрифта

## CONTENT

Общие параметры шрифта. Основаны на параметрах специализации шрифта.

Базовые классы:
* FontSpecializationVector


# ::stappler::geom::FontParameters::create(stappler::StringView,memory::pool_t*)

## BRIEF

Создаёт параметры шрифта из строки

## CONTENT

Создаёт параметры шрифта из строки

Параметры:
* stappler::StringView - строка конфигурации
* memory::pool_t* - пул памяти для инициализации имени семейства шрифта

Возвращает:
* stappler::geom::FontParameters

# ::stappler::geom::FontParameters::getFontConfigName<typename>(stappler::StringView,stappler::geom::FontSize,stappler::geom::FontStyle,stappler::geom::FontWeight,stappler::geom::FontStretch,stappler::geom::FontGrade,stappler::geom::FontVariant,bool)

## BRIEF

Возвращает строку конфигурации шрифта

## CONTENT

Возвращает строку конфигурации шрифта

Параметры шаблона:
* typename Interface - интерфейс памяти для новой строки

Параметры:
* stappler::StringView - семейство шрифта
* stappler::geom::FontSize
* stappler::geom::FontStyle
* stappler::geom::FontWeight
* stappler::geom::FontStretch
* stappler::geom::FontGrade
* stappler::geom::FontVariant
* bool - true для SmallCaps

Возвращает:
* typename Interface::StringType

# ::stappler::geom::FontParameters::fontVariant

## BRIEF

Вариант начертания шрифта

## CONTENT

Вариант начертания шрифта

Тип: stappler::geom::FontVariant


# ::stappler::geom::FontParameters::listStyleType

## BRIEF

Соотвествующий стиль маркеров списка

## CONTENT

Соотвествующий стиль маркеров списка

Тип: stappler::geom::ListStyleType


# ::stappler::geom::FontParameters::fontFamily

## BRIEF

Имя семества шрифта

## CONTENT

Имя семества шрифта. Использовать с осторожностью - невладеющий контейнер. Исходная строка должна существовать всё время жизни параметров.

Тип: stappler::StringView


# ::stappler::geom::FontParameters::persistent

## BRIEF

Флаг фиксированности параметров

## CONTENT

Флаг фиксированности параметров. Если установлен, шрифты с этим набором параметров будут считаться постоянно используемыми и не будут выгружаться из памяти.

Тип: bool


# ::stappler::geom::FontParameters::getConfigName<typename>(bool) const

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

# ::stappler::geom::FontParameters::getSmallCaps() const

## BRIEF

Возвращает параемтры сопряжённого шрифта при использовании SmallCaps

## CONTENT

Возвращает:
* stappler::geom::FontParameters

# ::stappler::geom::FontParameters::operator==(stappler::geom::FontParameters const&) const

## BRIEF

Оператор сравнения параметров шрифта

## CONTENT

Оператор сравнения параметров шрифта

Параметры:
* stappler::geom::FontParameters const&

Возвращает:
* bool

# ::stappler::geom::FontParameters::operator!=(stappler::geom::FontParameters const&) const

## BRIEF

Оператор сравнения параметров шрифта

## CONTENT

Оператор сравнения параметров шрифта

Параметры:
* stappler::geom::FontParameters const&

Возвращает:
* bool


# ::stappler::geom::FontLayoutId

## BRIEF

Псевдоним для идентификатора реализации стиля шрифта

## CONTENT

Псевдоним для идентификатора реализации стиля шрифта


# ::stappler::geom::SpriteAnchor

## BRIEF

Якорь для текстуры символа

## CONTENT

Якорь для текстуры символа

Значения:
* BottomLeft
* TopLeft
* TopRight
* BottomRight


# ::stappler::geom::FontMetrics

## BRIEF

Структура метрик шрифта

## CONTENT

Структура метрик шрифта. Метрики описываются в 1/16 пикселя

# ::stappler::geom::FontMetrics::size

## BRIEF

Размер шрифта

## CONTENT

Размер шрифта

Тип: uint16_t


# ::stappler::geom::FontMetrics::height

## BRIEF

Высота шрифта

## CONTENT

Высота шрифта

Тип: uint16_t


# ::stappler::geom::FontMetrics::ascender

## BRIEF

Верхняя граница

## CONTENT

Верхняя граница

Тип: int16_t


# ::stappler::geom::FontMetrics::descender

## BRIEF

Нижняя граница

## CONTENT

Нижняя граница

Тип: int16_t


# ::stappler::geom::FontMetrics::underlinePosition

## BRIEF

Смещение подчёркивания

## CONTENT

Смещение подчёркивания

Тип: int16_t


# ::stappler::geom::FontMetrics::underlineThickness

## BRIEF

Толщина подчёркивания

## CONTENT

Толщина подчёркивания

Тип: int16_t


# ::stappler::geom::CharLayout

## BRIEF

Параметры укладки символа в тексте. Передаётся при формировании текста их шрифтового атласа и укладки форматирования

## CONTENT


# ::stappler::geom::CharLayout::CharMask

## BRIEF

Маска символа в идентификаторе объекта

## CONTENT

Маска символа в идентификаторе объекта

Тип: uint32_t const


# ::stappler::geom::CharLayout::AnchorMask

## BRIEF

Маска якоря в идентификаторе объекта

## CONTENT

Маска якоря в идентификаторе объекта

Тип: uint32_t const


# ::stappler::geom::CharLayout::SourceMask

## BRIEF

Маска группы укладки в идентификаторе объекта

## CONTENT

Маска группы укладки в идентификаторе объекта

Тип: uint32_t const


# ::stappler::geom::CharLayout::SourceMax

## BRIEF

Максимальное значение идентификатора группы укладки

## CONTENT

Максимальное значение идентификатора группы укладки

Тип: uint32_t const


# ::stappler::geom::CharLayout::getObjectId(uint16_t,char16_t,stappler::geom::SpriteAnchor)

## BRIEF

Возвращает идентификатор объекта

## CONTENT

Возвращает идентификатор объекта. Идентификатор объекта - уникальный ключ даля точки привязки текстуры символа, составляемый из идентификатора группы укладки (конкретной реализации шрифта), якоря и кода символа.

Параметры:
* uint16_t - группа укладки
* char16_t - символ
* stappler::geom::SpriteAnchor - якорь

Возвращает:
* uint32_t

# ::stappler::geom::CharLayout::getObjectId(uint32_t,stappler::geom::SpriteAnchor)

## BRIEF

Возвращает идентификатор объекта с другим якорем

## CONTENT

Возвращает идентификатор объекта с другим якорем. Группа укладки и код символа сохраняются

Параметры:
* uint32_t - идентификатор объекта
* stappler::geom::SpriteAnchor - новый якорь

Возвращает:
* uint32_t

# ::stappler::geom::CharLayout::getAnchorForObject(uint32_t)

## BRIEF

Возвращает якорь для объекта

## CONTENT

Возвращает якорь для объекта

Параметры:
* uint32_t

Возвращает:
* stappler::geom::SpriteAnchor

# ::stappler::geom::CharLayout::charID

## BRIEF

Код символа

## CONTENT

Код символа. Используется код символа внутри плоскости Юникода (то есть, 0 - 0xFFFF). Разные плоскости имеют разные группы укладки, и не пересекаются. Большинство приложений используют только BMP - плоскость 0.

Тип: char16_t


# ::stappler::geom::CharLayout::xAdvance

## BRIEF

Смещение символа по основной оси

## CONTENT

Смещение символа по основной оси

Тип: uint16_t


# ::stappler::geom::CharLayout::operator char16_t() const

## BRIEF

Конвертирует параметры укладки символа в код символа

## CONTENT

Конвертирует параметры укладки символа в код символа

Возвращает:
* char16_t

# ::stappler::geom::CharSpec

## BRIEF

Структура параметров специализации символа

## CONTENT

Структура параметров специализации символа. Используется при форматировании текста.

# ::stappler::geom::CharSpec::charID

## BRIEF

Код символа

## CONTENT

Код символа. Используется код символа внутри плоскости Юникода (то есть, 0 - 0xFFFF). Разные плоскости имеют разные группы укладки, и не пересекаются. Большинство приложений используют только BMP - плоскость 0.

Тип: char16_t


# ::stappler::geom::CharSpec::pos

## BRIEF

Текущая позиция символа по оси прогрессии

## CONTENT

Текущая позиция символа по оси прогрессии

Тип: int16_t


# ::stappler::geom::CharSpec::advance

## BRIEF

Смещение для символа по оси прогрессии

## CONTENT

Смещение для символа по оси прогрессии, с помощью которого определяется точка сразу после символа.

Тип: uint16_t


# ::stappler::geom::CharSpec::face

## BRIEF

Идентификатор шрифта

## CONTENT

Идентификатор шрифта

Тип: uint16_t


# ::stappler::geom::CharTexture

## BRIEF

Параметры текстуры символа

## CONTENT

Параметры текстуры символа


# ::stappler::geom::CharTexture::fontID

## BRIEF

Идентификатор шрифта

## CONTENT

Идентификатор шрифта

Тип: uint16_t


# ::stappler::geom::CharTexture::charID

## BRIEF

Код символа

## CONTENT

Код символа. Используется код символа внутри плоскости Юникода (то есть, 0 - 0xFFFF). Разные плоскости имеют разные группы укладки, и не пересекаются. Большинство приложений используют только BMP - плоскость 0.

Тип: char16_t


# ::stappler::geom::CharTexture::x

## BRIEF

Координата x

## CONTENT

Координата x

Тип: int16_t


# ::stappler::geom::CharTexture::y

## BRIEF

Координата y

## CONTENT

Координата y

Тип: int16_t


# ::stappler::geom::CharTexture::width

## BRIEF

Ширина текстуры

## CONTENT

Ширина текстуры

Тип: uint16_t


# ::stappler::geom::CharTexture::height

## BRIEF

Высота текстуры

## CONTENT

Высота текстуры

Тип: uint16_t


# ::stappler::geom::CharTexture::bitmapWidth

## BRIEF

Ширина битовой карты

## CONTENT

Ширина битовой карты

Тип: uint32_t


# ::stappler::geom::CharTexture::bitmapRows

## BRIEF

Число рядов в битовой карте

## CONTENT

Число рядов в битовой карте

Тип: uint32_t


# ::stappler::geom::CharTexture::pitch

## BRIEF

Смещение в байтах для ряда в битовой карте

## CONTENT

Смещение в байтах для ряда в битовой карте

Тип: int


# ::stappler::geom::CharTexture::bitmap

## BRIEF

Укаратель на битовую карту символа

## CONTENT

Укаратель на битовую карту символа

Тип: uint8_t*


# ::stappler::geom::FontAtlasValue

## BRIEF

Параметры объекта в шрифтовом атласа

## CONTENT

Параметры объекта в шрифтовом атласа

# ::stappler::geom::FontAtlasValue::pos

## BRIEF

Позиция объекта в текстуре

## CONTENT

Позиция объекта в текстуре

Тип: stappler::geom::Vec2


# ::stappler::geom::FontAtlasValue::tex

## BRIEF

Размерность объекта в текстуре

## CONTENT

Размерность объекта в текстуре

Тип: stappler::geom::Vec2


# ::stappler::geom::EmplaceCharInterface

## BRIEF

Интерфейс укладки текстур символов

## CONTENT

Интерфейс укладки текстур символов

# ::stappler::geom::EmplaceCharInterface::getX

## BRIEF

Возвращает X для объекта

## CONTENT

Возвращает X для объекта

Тип: uint16_t(*)(void*)


# ::stappler::geom::EmplaceCharInterface::getY

## BRIEF

Возвращает Y для объекта

## CONTENT

Возвращает Y для объекта

Тип: uint16_t(*)(void*)


# ::stappler::geom::EmplaceCharInterface::getWidth

## BRIEF

Возвращает ширину для объекта

## CONTENT

Возвращает ширину для объекта

Тип: uint16_t(*)(void*)


# ::stappler::geom::EmplaceCharInterface::getHeight

## BRIEF

Возвращает высоту для объекта

## CONTENT

Возвращает высоту для объекта

Тип: uint16_t(*)(void*)


# ::stappler::geom::EmplaceCharInterface::setX

## BRIEF

Устанавливает X для объекта

## CONTENT

Устанавливает X для объекта

Тип: void(*)(void*,uint16_t)


# ::stappler::geom::EmplaceCharInterface::setY

## BRIEF

Устанавливает Y для объекта

## CONTENT

Устанавливает Y для объекта

Тип: void(*)(void*,uint16_t)


# ::stappler::geom::EmplaceCharInterface::setTex

## BRIEF

Устанавливает индекс текстуры для объекта

## CONTENT

Устанавливает индекс текстуры для объекта

Тип: void(*)(void*,uint16_t)


# ::stappler::geom::emplaceChars(stappler::geom::EmplaceCharInterface const&,SpanView<void *> const&,float)

## BRIEF

Размещает текстуры шрифта в атласе

## CONTENT

Размещает текстуры шрифта в атласе. Вычисляет наименьший размер текстуры для атласа и составляет карту размещения символов внутри неё (через setX/setY). Использует эвристический адаптивный алгоритм размещения прямоугольников.

Параметры:
* stappler::geom::EmplaceCharInterface const& - интерфейс для получения данных их объектов
* SpanView<void *> const& - список объектов (символов) для размещения
* float - общая площадь символов, если заранее известна. Позволяет ускорить алгоритм

Возвращает:
* stappler::geom::Extent2 - итоговый размер предполагаемой текстуры

# ::stappler::geom::operator<(stappler::geom::CharLayout const&,stappler::geom::CharLayout const&)

## BRIEF

Сравнивает укладки символов для упорядочивания

## CONTENT

Сравнивает укладки символов для упорядочивания

Параметры:
* stappler::geom::CharLayout const&
* stappler::geom::CharLayout const&

Возвращает:
* bool

# ::stappler::geom::operator>(stappler::geom::CharLayout const&,stappler::geom::CharLayout const&)

## BRIEF

Сравнивает укладки символов для упорядочивания

## CONTENT

Сравнивает укладки символов для упорядочивания

Параметры:
* stappler::geom::CharLayout const&
* stappler::geom::CharLayout const&

Возвращает:
* bool

# ::stappler::geom::operator<=(stappler::geom::CharLayout const&,stappler::geom::CharLayout const&)

## BRIEF

Сравнивает укладки символов для упорядочивания

## CONTENT

Сравнивает укладки символов для упорядочивания

Параметры:
* stappler::geom::CharLayout const&
* stappler::geom::CharLayout const&

Возвращает:
* bool

# ::stappler::geom::operator>=(stappler::geom::CharLayout const&,stappler::geom::CharLayout const&)

## BRIEF

Сравнивает укладки символов для упорядочивания

## CONTENT

Сравнивает укладки символов для упорядочивания

Параметры:
* stappler::geom::CharLayout const&
* stappler::geom::CharLayout const&

Возвращает:
* bool

# ::stappler::geom::operator<(stappler::geom::CharLayout const&,char16_t const&)

## BRIEF

Сравнивает укладки символов для упорядочивания

## CONTENT

Сравнивает укладки символов для упорядочивания

Параметры:
* stappler::geom::CharLayout const&
* char16_t const&

Возвращает:
* bool

# ::stappler::geom::operator>(stappler::geom::CharLayout const&,char16_t const&)

## BRIEF

Сравнивает укладки символов для упорядочивания

## CONTENT

Сравнивает укладки символов для упорядочивания

Параметры:
* stappler::geom::CharLayout const&
* char16_t const&

Возвращает:
* bool

# ::stappler::geom::operator<=(stappler::geom::CharLayout const&,char16_t const&)

## BRIEF

Сравнивает укладки символов для упорядочивания

## CONTENT

Сравнивает укладки символов для упорядочивания

Параметры:
* stappler::geom::CharLayout const&
* char16_t const&

Возвращает:
* bool

# ::stappler::geom::operator>=(stappler::geom::CharLayout const&,char16_t const&)

## BRIEF

Сравнивает укладки символов для упорядочивания

## CONTENT

Сравнивает укладки символов для упорядочивания

Параметры:
* stappler::geom::CharLayout const&
* char16_t const&

Возвращает:
* bool

# ::stappler::progress(geom::FontSize,geom::FontSize,float)

## BRIEF

Специализация функции линейной интерполации для размера символов

## CONTENT

Специализация функции линейной интерполации для размера символов

Параметры:
* geom::FontSize
* geom::FontSize
* float

Возвращает:
* geom::FontSize

# ::std::hash<stappler::geom::FontSize>::hash<stappler::geom::FontSize>

## BRIEF

Вычисление хэша для размера символов

## CONTENT

Вычисление хэша для размера символов

# ::std::hash<stappler::geom::FontSize>::hash()

## BRIEF

Вычисление хэша для размера символов

## CONTENT

Вычисление хэша для размера символов

# ::std::hash<stappler::geom::FontSize>::operator()(stappler::geom::FontSize const&) const

## BRIEF

Вычисление хэша для размера символов

## CONTENT

Вычисление хэша для размера символов

Параметры:
* stappler::geom::FontSize const&

Возвращает:
* std::size_t
