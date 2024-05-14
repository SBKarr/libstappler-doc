Title: SPColor.h


# CORE_GEOM_SPCOLOR_H_

## BRIEF

Заголовок, определяющий примитивные типы для работы с цветом

## CONTENT

Заголовок, определяющий примитивные типы для работы с цветом

# LAYOUT_COLOR_SPEC_BASE

## BRIEF

Макрос, определяющий базовый набор цветов для именованной группы

## CONTENT

Макрос, определяющий базовый набор цветов для именованной группы

Параметры:
* Name - имя группы

# LAYOUT_COLOR_SPEC_ACCENT

## BRIEF

Макрос, определяющий акцентный набор цветов для именованной группы

## CONTENT

Макрос, определяющий акцентный набор цветов для именованной группы

Параметры:
* Name - имя группы

# LAYOUT_COLOR_SPEC

## BRIEF

Макрос, определяющий акцентный набор цветов для именованной группы

## CONTENT

Макрос, определяющий базовый и акцентный набор цветов для именованной группы

Параметры:
* Name - имя группы

# ::stappler::geom::ColorMask

## BRIEF

Маска цветового компонента

## CONTENT

Маска цветового компонента, используемая для исключения определённых компонентов из модификаций.

Значения:
* None - не определена
* R - красный компонент
* G - зелёный компонент
* B - синий компонент
* A - альфа-канал (прозрачность)
* Color - все цветовые компоненты (красный, зелёный, синий)
* All - все компоненты


# ::stappler::geom::operator|(stappler::geom::ColorMask const&,stappler::geom::ColorMask const&)

## BRIEF

Оператор логического ИЛИ для маски

## CONTENT

Оператор логического ИЛИ для маски

Параметры:
* stappler::geom::ColorMask const&
* stappler::geom::ColorMask const&

Возвращает:
* stappler::geom::ColorMask

# ::stappler::geom::operator&(stappler::geom::ColorMask const&,stappler::geom::ColorMask const&)

## BRIEF

Оператор логического И для маски

## CONTENT

Оператор логического И для маски

Параметры:
* stappler::geom::ColorMask const&
* stappler::geom::ColorMask const&

Возвращает:
* stappler::geom::ColorMask

# ::stappler::geom::operator^(stappler::geom::ColorMask const&,stappler::geom::ColorMask const&)

## BRIEF

Оператор логического исключающего ИЛИ для маски

## CONTENT

Оператор логического исключающего ИЛИ для маски

Параметры:
* stappler::geom::ColorMask const&
* stappler::geom::ColorMask const&

Возвращает:
* stappler::geom::ColorMask

# ::stappler::geom::operator|=(stappler::geom::ColorMask&,stappler::geom::ColorMask const&)

## BRIEF

Оператор логического ИЛИ для маски

## CONTENT

Оператор логического ИЛИ для маски

Параметры:
* stappler::geom::ColorMask&
* stappler::geom::ColorMask const&

Возвращает:
* stappler::geom::ColorMask&

# ::stappler::geom::operator&=(stappler::geom::ColorMask&,stappler::geom::ColorMask const&)

## BRIEF

Оператор логического И для маски

## CONTENT

Оператор логического И для маски

Параметры:
* stappler::geom::ColorMask&
* stappler::geom::ColorMask const&

Возвращает:
* stappler::geom::ColorMask&

# ::stappler::geom::operator^=(stappler::geom::ColorMask&,stappler::geom::ColorMask const&)

## BRIEF

Оператор логического исключающего ИЛИ для маски

## CONTENT

Оператор логического исключающего ИЛИ для маски

Параметры:
* stappler::geom::ColorMask&
* stappler::geom::ColorMask const&

Возвращает:
* stappler::geom::ColorMask&

# ::stappler::geom::operator==(stappler::geom::ColorMask const&,std::underlying_type<ColorMask>::type const&)

## BRIEF

Сравнивает маску с целочисленным значением

## CONTENT

Сравнивает маску с целочисленным значением

Параметры:
* stappler::geom::ColorMask const&
* std::underlying_type<ColorMask>::type const&

Возвращает:
* bool - true если маска и значение совпадают

# ::stappler::geom::operator==(std::underlying_type<ColorMask>::type const&,stappler::geom::ColorMask const&)

## BRIEF

Сравнивает маску с целочисленным значением

## CONTENT

Сравнивает маску с целочисленным значением

Параметры:
* std::underlying_type<ColorMask>::type const&
* stappler::geom::ColorMask const&

Возвращает:
* bool - true если маска и значение совпадают

# ::stappler::geom::operator!=(stappler::geom::ColorMask const&,std::underlying_type<ColorMask>::type const&)

## BRIEF

Сравнивает маску с целочисленным значением

## CONTENT

Сравнивает маску с целочисленным значением

Параметры:
* stappler::geom::ColorMask const&
* std::underlying_type<ColorMask>::type const&

Возвращает:
* bool - true если маска и значение НЕ совпадают

# ::stappler::geom::operator!=(std::underlying_type<ColorMask>::type const&,stappler::geom::ColorMask const&)

## BRIEF

Сравнивает маску с целочисленным значением

## CONTENT

Сравнивает маску с целочисленным значением

Параметры:
* std::underlying_type<ColorMask>::type const&
* stappler::geom::ColorMask const&

Возвращает:
* bool - true если маска и значение НЕ совпадают

# ::stappler::geom::operator~(stappler::geom::ColorMask const&)

## BRIEF

Возвращает логическое отрицание маски

## CONTENT

Возвращает логическое отрицание маски

Параметры:
* stappler::geom::ColorMask const&

Возвращает:
* stappler::geom::ColorMask - логическое отрицание маски

# ::stappler::geom::readColor(stappler::StringView const&,stappler::geom::Color4B&)

## BRIEF

Читает четырёхкомпонентый цвет из строки

## CONTENT

Читает четырёхкомпонентый цвет из строки

Параметры:
* stappler::StringView const& - строка, содержащая описание цвета
* stappler::geom::Color4B& - значение цвета, в которое будет записан результат

Возвращает:
* bool - true если строка успешно интерпретирована как цвет

Форматы для чтения:
* rgba(<0-255>, <0-255>, <0-255>, <0.0-1.0>) - компоненты цвета задаются байтовым значением
* rgba(<0-100>%, <0-100>%, <0-100>%, <0.0-1.0>) - компоненты цвета задаются в процентах
* hsla(<0-359>, <0-100>%, <0-100>%, <0.0-1.0>) - задание в цветовой модели HSL (Hue-Saturation-Lightness) с альфа-каналом
* rgb(<0-255>, <0-255>, <0-255>) - компоненты цвета задаются байтовым значением
* rgb(<0-100>%, <0-100>%, <0-100>%) - компоненты цвета задаются в процентах
* hsl(<0-359>, <0-100>%, <0-100>%) - задание в цветовой модели HSL (Hue-Saturation-Lightness) с альфа-каналом
* #<00-FF><00-FF><00-FF><00-FF> - традиционное HTML-кодирование с альфа-каналом
* #<00-FF><00-FF><00-FF> - традиционное HTML-кодирование
* #<0-F><0-F><0-F><0-F> - традиционное HTML-кодирование с альфа-каналом, значения 0-F интерпретируется как 00-FF
* #<0-F><0-F><0-F> - традиционное HTML-кодирование, значения 0-F интерпретируется как 00-FF
* white, silver, gray, grey, black, maroon, red, orange, yellow, olive, lime, green, aqua, blue, navy, teal, fuchsia, purple
* Одно из имён из Material Design v.1

# ::stappler::geom::readColor(stappler::StringView const&,stappler::geom::Color3B&)

## BRIEF

Читает трёхкомпонентый цвет из строки

## CONTENT

Читает трёхкомпонентый цвет из строки

Параметры:
* stappler::StringView const& - строка, содержащая описание цвета
* stappler::geom::Color3B& - значение цвета, в которое будет записан результат

Возвращает:
* bool - true если строка успешно интерпретирована как цвет

Форматы для чтения:
* rgb(<0-255>, <0-255>, <0-255>) - компоненты цвета задаются байтовым значением
* rgb(<0-100>%, <0-100>%, <0-100>%) - компоненты цвета задаются в процентах
* hsl(<0-359>, <0-100>%, <0-100>%) - задание в цветовой модели HSL (Hue-Saturation-Lightness) с альфа-каналом
* #<00-FF><00-FF><00-FF> - традиционное HTML-кодирование
* #<0-F><0-F><0-F> - традиционное HTML-кодирование, значения 0-F интерпретируется как 00-FF
* white, silver, gray, grey, black, maroon, red, orange, yellow, olive, lime, green, aqua, blue, navy, teal, fuchsia, purple
* Одно из имён из Material Design v.1

# ::stappler::geom::Color3B

## BRIEF

Структура трёхкомпонентного цвета, выраженного в байтах

## CONTENT

Структура трёхкомпонентного цвета (красный, зелёный, синий). Каждый цвет представляется одним байтом (0-255)

# ::stappler::geom::Color3B::getColorByName(stappler::StringView,stappler::geom::Color3B const&)

## BRIEF

Читает трёхкомпонентый цвет из строки

## CONTENT

Параметры:
* stappler::StringView - строка, содержащая значение цвета
* stappler::geom::Color3B const& - значение цвета, возвращаемое, если не удалось прочитать строку

Возвращает:
* stappler::geom::Color3B - прочитанный цвет или указанный цвет по умолчанию в случае ошибки

Форматы для чтения:
* rgb(<0-255>, <0-255>, <0-255>) - компоненты цвета задаются байтовым значением
* rgb(<0-100>%, <0-100>%, <0-100>%) - компоненты цвета задаются в процентах
* hsl(<0-359>, <0-100>%, <0-100>%) - задание в цветовой модели HSL (Hue-Saturation-Lightness) с альфа-каналом
* #<00-FF><00-FF><00-FF> - традиционное HTML-кодирование
* #<0-F><0-F><0-F> - традиционное HTML-кодирование, значения 0-F интерпретируется как 00-FF
* white, silver, gray, grey, black, maroon, red, orange, yellow, olive, lime, green, aqua, blue, navy, teal, fuchsia, purple
* Одно из имён из Material Design v.1

# ::stappler::geom::Color3B::Color3B()

## BRIEF

Конструктор по умолчанию

## CONTENT

Конструктор по умолчанию, инициализирует чёрный цвет

# ::stappler::geom::Color3B::Color3B(uint8_t,uint8_t,uint8_t)

## BRIEF

Покомпонентый конструктор

## CONTENT

Покомпонентый конструктор

Параметры:
* uint8_t - красный
* uint8_t - зелёный
* uint8_t - синий


# ::stappler::geom::Color3B::Color3B(uint32_t)

## BRIEF

Конструктор из целого числа

## CONTENT

Конструктор из целого числа. Интерпретирует число побайтово как цвет в формате xRGB (от самого значимого к наименее значимому байту)

Параметры:
* uint32_t - целое число для интерпретации


# ::stappler::geom::Color3B::Color3B(stappler::geom::Color4B const&)

## BRIEF

Конструктор из четырёхкомпонентного цвета

## CONTENT

Конструктор из четырёхкомпонентного цвета, отбрасывает значение для альфа-канала

Параметры:
* stappler::geom::Color4B const&


# ::stappler::geom::Color3B::Color3B(stappler::geom::Color4F const&)

## BRIEF

Конструктор из четырёхкомпонентного цвета

## CONTENT

Конструктор из четырёхкомпонентного цвета, отбрасывает значение для альфа-канала, конвертирует вещественное значение цвета в байтовое, округление платформозависимо.

Параметры:
* stappler::geom::Color4F const&


# ::stappler::geom::Color3B::operator==(stappler::geom::Color3B const&) const

## BRIEF

Сравнивает два цвета

## CONTENT

Сравнивает два цвета

Параметры:
* stappler::geom::Color3B const&

Возвращает:
* bool - true если цвета совпадают

# ::stappler::geom::Color3B::operator==(stappler::geom::Color4B const&) const

## BRIEF

Сравнивает два цвета

## CONTENT

Сравнивает два цвета, предполагает исходным альфа-каналом абсолютную непрозрачность

Параметры:
* stappler::geom::Color4B const&

Возвращает:
* bool - true если цвета совпадают

# ::stappler::geom::Color3B::operator==(stappler::geom::Color4F const&) const

## BRIEF

Сравнивает два цвета

## CONTENT

Сравнивает два цвета, предполагает исходным альфа-каналом абсолютную непрозрачность. Обрезает вещественные значения цвета до байтовых платформозависимо.

Параметры:
* stappler::geom::Color4F const&

Возвращает:
* bool - true если цвета совпадают

# ::stappler::geom::Color3B::operator!=(stappler::geom::Color3B const&) const

## BRIEF

Сравнивает два цвета

## CONTENT

Сравнивает два цвета

Параметры:
* stappler::geom::Color3B const&

Возвращает:
* bool - true если цвета не совпадают

# ::stappler::geom::Color3B::operator!=(stappler::geom::Color4B const&) const

## BRIEF

Сравнивает два цвета

## CONTENT

Сравнивает два цвета, предполагает исходным альфа-каналом абсолютную непрозрачность.

Параметры:
* stappler::geom::Color4B const&

Возвращает:
* bool - true если цвета не совпадают

# ::stappler::geom::Color3B::operator!=(stappler::geom::Color4F const&) const

## BRIEF

Сравнивает два цвета

## CONTENT

Сравнивает два цвета, предполагает исходным альфа-каналом абсолютную непрозрачность. Обрезает вещественные значения цвета до байтовых платформозависимо.

Параметры:
* stappler::geom::Color4F const&

Возвращает:
* bool - true если цвета не совпадают

# ::stappler::geom::Color3B::equals(stappler::geom::Color3B const&)

## BRIEF

Сравнивает два цвета

## CONTENT

Сравнивает два цвета

Параметры:
* stappler::geom::Color3B const&

Возвращает:
* bool - true если цвета совпадают

# ::stappler::geom::Color3B::r

## BRIEF

Красный компонент цвета

## CONTENT

Тип: uint8_t

Красный компонент цвета

# ::stappler::geom::Color3B::g

## BRIEF

Зелёный компонент цвета

## CONTENT

Тип: uint8_t

Зелёный компонент цвета

# ::stappler::geom::Color3B::b

## BRIEF

Синий компонент цвета

## CONTENT

Тип: uint8_t

Синий компонент цвета

# ::stappler::geom::Color3B::WHITE

## BRIEF

Статический белый цвет

## CONTENT

Тип: stappler::geom::Color3B const

Статический белый цвет

# ::stappler::geom::Color3B::BLACK

## BRIEF

Статический чёрный цвет

## CONTENT

Тип: stappler::geom::Color3B const

Статический чёрный цвет

# ::stappler::geom::Color3B::progress(stappler::geom::Color3B const&,stappler::geom::Color3B const&,float)

## BRIEF

Функция прогресса (линейной интерполяции) двух цветов

## CONTENT

Функция прогресса (линейной интерполяции) двух цветов. Определяет новый цвет как линейную интерполяцию между исходными цветами с применением параметра.

Параметры:
* stappler::geom::Color3B const&
* stappler::geom::Color3B const&
* float - параметр интерполяции

Возвращает:
* stappler::geom::Color3B - новый цвет

# ::stappler::geom::Color4B

## BRIEF

Структура четырёхкомпонентного цвета, выраженного в байтах

## CONTENT

Структура четырёхкомпонентного цвета (красный, зелёный, синий, альфа). Каждый цвет выражен в виде одного байта (0-255)

# ::stappler::geom::Color4B::WHITE

## BRIEF

Статический белый цвет

## CONTENT

Тип: stappler::geom::Color4B const

Статический белый цвет

# ::stappler::geom::Color4B::BLACK

## BRIEF

Статический чёрный цвет

## CONTENT

Тип: stappler::geom::Color4B const

Статический чёрный цвет

# ::stappler::geom::Color4B::progress(stappler::geom::Color4B const&,stappler::geom::Color4B const&,float)

## BRIEF

Функция прогресса (линейной интерполяции) двух цветов

## CONTENT

Функция прогресса (линейной интерполяции) двух цветов. Определяет новый цвет как линейную интерполяцию между исходными цветами с применением параметра.

Параметры:
* stappler::geom::Color4B const&
* stappler::geom::Color4B const&
* float - параметр интерполяции

Возвращает:
* stappler::geom::Color4B - новый цвет

# ::stappler::geom::Color4B::getColorByName(stappler::StringView,stappler::geom::Color4B const&)

## BRIEF

Читает значения цвета из строки

## CONTENT

Читает значения цвета из строки

Параметры:
* stappler::StringView - строка, содержащая значения цвета
* stappler::geom::Color4B const& - значение цвета по умолчанию

Возвращает:
* stappler::geom::Color4B - прочитанный цвет или значение по умолчанию в случае ошибки

Форматы для чтения:
* rgba(<0-255>, <0-255>, <0-255>, <0.0-1.0>) - компоненты цвета задаются байтовым значением
* rgba(<0-100>%, <0-100>%, <0-100>%, <0.0-1.0>) - компоненты цвета задаются в процентах
* hsla(<0-359>, <0-100>%, <0-100>%, <0.0-1.0>) - задание в цветовой модели HSL (Hue-Saturation-Lightness) с альфа-каналом
* rgb(<0-255>, <0-255>, <0-255>) - компоненты цвета задаются байтовым значением
* rgb(<0-100>%, <0-100>%, <0-100>%) - компоненты цвета задаются в процентах
* hsl(<0-359>, <0-100>%, <0-100>%) - задание в цветовой модели HSL (Hue-Saturation-Lightness) с альфа-каналом
* #<00-FF><00-FF><00-FF><00-FF> - традиционное HTML-кодирование с альфа-каналом
* #<00-FF><00-FF><00-FF> - традиционное HTML-кодирование
* #<0-F><0-F><0-F><0-F> - традиционное HTML-кодирование с альфа-каналом, значения 0-F интерпретируется как 00-FF
* #<0-F><0-F><0-F> - традиционное HTML-кодирование, значения 0-F интерпретируется как 00-FF
* white, silver, gray, grey, black, maroon, red, orange, yellow, olive, lime, green, aqua, blue, navy, teal, fuchsia, purple
* Одно из имён из Material Design v.1

# ::stappler::geom::Color4B::Color4B()

## BRIEF

Конструктор по умолчанию

## CONTENT

Конструктор по умолчанию, инициализирует цвет как чёрный

# ::stappler::geom::Color4B::Color4B(uint8_t,uint8_t,uint8_t,uint8_t)

## BRIEF

Покомпонентный конструктор

## CONTENT

Покомпонентный конструктор

Параметры:
* uint8_t - красный
* uint8_t - зелёный
* uint8_t - синий
* uint8_t - альфа


# ::stappler::geom::Color4B::Color4B(stappler::geom::Color3B const&,uint8_t)

## BRIEF

Покомпонентный конструктор

## CONTENT

Покомпонентный конструктор

Параметры:
* stappler::geom::Color3B const& - цветЮ дающий параметры красного, зелёного и синего
* uint8_t - альфа-канал


# ::stappler::geom::Color4B::Color4B(stappler::geom::Color3B const&)

## BRIEF

Инициализация из трёхкомпонентного цвета

## CONTENT

Инициализация из трёхкомпонентного цвета, альфа-канал задаётся в 255 (полностью непрозрачный)

Параметры:
* stappler::geom::Color3B const&


# ::stappler::geom::Color4B::Color4B(stappler::geom::Color4F const&)

## BRIEF

Инициализация из вещественного цвета

## CONTENT

Инициализация из вещественного цвета. Урезает вещественные значения до байтовых платформозависимым способом.

Параметры:
* stappler::geom::Color4F const&


# ::stappler::geom::Color4B::operator==(stappler::geom::Color4B const&) const

## BRIEF

Сравнивает два цвета

## CONTENT

Сравнивает два цвета

Параметры:
* stappler::geom::Color4B const&

Возвращает:
* bool - true если цвета совпадают

# ::stappler::geom::Color4B::operator==(stappler::geom::Color3B const&) const

## BRIEF

Сравнивает два цвета

## CONTENT

Сравнивает два цвета, предполагает исходным альфа-каналом трёхкомпонентного цвета абсолютную непрозрачность

Параметры:
* stappler::geom::Color3B const&

Возвращает:
* bool - true если цвета совпадают

# ::stappler::geom::Color4B::operator==(stappler::geom::Color4F const&) const

## BRIEF

Сравнивает два цвета

## CONTENT

Сравнивает два цвета, интерпретирует вещественные значения цвета как байтовые платформозависимым способом.

Параметры:
* stappler::geom::Color4F const&

Возвращает:
* bool - true если цвета совпадают

# ::stappler::geom::Color4B::operator!=(stappler::geom::Color4B const&) const

## BRIEF

Сравнивает два цвета

## CONTENT

Сравнивает два цвета

Параметры:
* stappler::geom::Color4B const&

Возвращает:
* bool - true если цвета не совпадают

# ::stappler::geom::Color4B::operator!=(stappler::geom::Color3B const&) const

## BRIEF

Сравнивает два цвета

## CONTENT

Сравнивает два цвета, предполагает исходным альфа-каналом трёхкомпонентного цвета абсолютную непрозрачность

Параметры:
* stappler::geom::Color3B const&

Возвращает:
* bool - true если цвета не совпадают

# ::stappler::geom::Color4B::operator!=(stappler::geom::Color4F const&) const

## BRIEF

Сравнивает два цвета

## CONTENT

Сравнивает два цвета, интерпретирует вещественные значения цвета как байтовые платформозависимым способом.

Параметры:
* stappler::geom::Color4F const&

Возвращает:
* bool - true если цвета не совпадают

# ::stappler::geom::Color4B::r

## BRIEF

Красный компонент

## CONTENT

Тип: uint8_t

Красный компонент

# ::stappler::geom::Color4B::g

## BRIEF

Зелёный компонент

## CONTENT

Тип: uint8_t

Зелёный компонент

# ::stappler::geom::Color4B::b

## BRIEF

Синий компонент

## CONTENT

Тип: uint8_t

Синий компонент

# ::stappler::geom::Color4B::a

## BRIEF

Компонент альфа-канала

## CONTENT

Тип: uint8_t

Компонент альфа-канала

# ::stappler::geom::Color4B::white(uint8_t)

## BRIEF

Создаёт белый цвет определённой прозначности

## CONTENT

Создаёт белый цвет определённой прозначности

Параметры:
* uint8_t - уровень прозначности

Возвращает:
* stappler::geom::Color4B - новый цвет

# ::stappler::geom::Color4B::black(uint8_t)

## BRIEF

Создаёт чёрный цвет определённой прозрачности

## CONTENT

Создаёт чёрный цвет определённой прозрачности

Параметры:
* uint8_t - уровень прозначности

Возвращает:
* stappler::geom::Color4B - новый цвет

# ::stappler::geom::Color4F

## BRIEF

Структура четырёхкомпонентного цвета

## CONTENT

Структура четырёхкомпонентного цвета (красный, зелёный, синий, альфа), выраженного в 32-битных вещественных значениях (0.0-1.0)

# ::stappler::geom::Color4F::WHITE

## BRIEF

Статический белый цвет

## CONTENT

Тип: stappler::geom::Color4F const

Статический белый цвет

# ::stappler::geom::Color4F::BLACK

## BRIEF

Статический чёрный цвет

## CONTENT

Тип: stappler::geom::Color4F const

Статический чёрный цвет

# ::stappler::geom::Color4F::ZERO

## BRIEF

Статический нулевой цвет

## CONTENT

Тип: stappler::geom::Color4F const

Статический нулевой (чёрный прозрачный) цвет

# ::stappler::geom::Color4F::ONE

## BRIEF

Статический единичный цвет

## CONTENT

Тип: stappler::geom::Color4F const

Статический единичный (белый непрозрачный) цвет

# ::stappler::geom::Color4F::progress(stappler::geom::Color4F const&,stappler::geom::Color4F const&,float)

## BRIEF

Функция прогресса (линейной интерполяции) двух цветов

## CONTENT

Функция прогресса (линейной интерполяции) двух цветов. Определяет новый цвет как линейную интерполяцию между исходными цветами с применением параметра.

Параметры:
* stappler::geom::Color4F const&
* stappler::geom::Color4F const&
* float - параметр интерполяции

Возвращает:
* stappler::geom::Color4F - новый цвет

# ::stappler::geom::Color4F::Color4F()

## BRIEF

Конструктор по умолчанию

## CONTENT

Конструктор по умолчанию, создаёт черный прозрачный цвет

# ::stappler::geom::Color4F::Color4F(float,float,float,float)

## BRIEF

Покомпонентный конструктор

## CONTENT

Покомпонентный конструктор

Параметры:
* float - красный
* float - зелёный
* float - синий
* float - альфа


# ::stappler::geom::Color4F::Color4F(stappler::geom::Color3B const&,uint8_t)

## BRIEF

Конструктор из цвета и значения альфа-канала

## CONTENT

Конструктор из цвета и значения альфа-канала

Параметры:
* stappler::geom::Color3B const&
* uint8_t - байтовое значение альфа-канала


# ::stappler::geom::Color4F::Color4F(stappler::geom::Color3B const&)

## BRIEF

Конструктор из трёхкомпонентного цвета

## CONTENT

Конструктор из трёхкомпонентного цвета, устанавливает альфа-канал в 255

Параметры:
* stappler::geom::Color3B const&


# ::stappler::geom::Color4F::Color4F(stappler::geom::Color4B const&)

## BRIEF

Конструктор из четырёхкомпонентного цвета

## CONTENT

Конструктор из четырёхкомпонентного цвета

Параметры:
* stappler::geom::Color4B const&


# ::stappler::geom::Color4F::operator==(stappler::geom::Color4F const&) const

## BRIEF

Сравнивает два цвета

## CONTENT

Сравнивает два цвета

Параметры:
* stappler::geom::Color4F const&

Возвращает:
* bool - true если цвета равны

# ::stappler::geom::Color4F::operator==(stappler::geom::Color3B const&) const

## BRIEF

Сравнивает два цвета

## CONTENT

Сравнивает два цвета. Интерпретирует значение альфа-канала цвета как полностью непрозрачное. Урезает вещественные значения до байтовых платформозависимым способом.

Параметры:
* stappler::geom::Color3B const&

Возвращает:
* bool - true если цвета равны

# ::stappler::geom::Color4F::operator==(stappler::geom::Color4B const&) const

## BRIEF

Сравнивает два цвета

## CONTENT

Сравнивает два цвета. Урезает вещественные значения до байтовых платформозависимым способом.

Параметры:
* stappler::geom::Color4B const&

Возвращает:
* bool - true если цвета равны

# ::stappler::geom::Color4F::operator!=(stappler::geom::Color4F const&) const

## BRIEF

Сравнивает два цвета

## CONTENT

Сравнивает два цвета

Параметры:
* stappler::geom::Color4F const&

Возвращает:
* bool - true если цвета не равны

# ::stappler::geom::Color4F::operator!=(stappler::geom::Color3B const&) const

## BRIEF

Сравнивает два цвета

## CONTENT

Сравнивает два цвета. Интерпретирует значение альфа-канала цвета как полностью непрозрачное. Урезает вещественные значения до байтовых платформозависимым способом.

Параметры:
* stappler::geom::Color3B const&

Возвращает:
* bool - true если цвета не равны

# ::stappler::geom::Color4F::operator!=(stappler::geom::Color4B const&) const

## BRIEF

Сравнивает два цвета

## CONTENT

Сравнивает два цвета. Урезает вещественные значения до байтовых платформозависимым способом.

Параметры:
* stappler::geom::Color4B const&

Возвращает:
* bool - true если цвета не равны

# ::stappler::geom::Color4F::equals(stappler::geom::Color4F const&)

## BRIEF

Сравнивает два цвета

## CONTENT

Сравнивает два цвета

Параметры:
* stappler::geom::Color4F const&

Возвращает:
* bool - true если цвета равны

# ::stappler::geom::Color4F::operator Vec4() const

## BRIEF

Конвертирует цвет в четырёхкомпонентный вектор

## CONTENT

Конвертирует цвет в четырёхкомпонентный вектор покомпонентно

Возвращает:
* stappler::geom::Vec4 - четырёхкомпонентный вектор

# ::stappler::geom::Color4F::getColor() const

## BRIEF

Получает трёхкомпонентное значение цвета

## CONTENT

Получает трёхкомпонентное значение цвета

Возвращает:
* stappler::geom::Color3B - трёхкомпонентное значение цвета

# ::stappler::geom::Color4F::getOpacity() const

## BRIEF

Получает байтовое значение альфа-канала

## CONTENT

Получает байтовое значение альфа-канала

Возвращает:
* uint8_t - байтовое значение альфа-канала

# ::stappler::geom::Color4F::setMasked(stappler::geom::Color4F const&,stappler::geom::ColorMask)

## BRIEF

Копирует компоненты другого цвета, установленные в маске

## CONTENT

Копирует компоненты другого цвета, установленные в маске

Параметры:
* stappler::geom::Color4F const& - другой цвет
* stappler::geom::ColorMask - маска цветовых компонентов


# ::stappler::geom::Color4F::setUnmasked(stappler::geom::Color4F const&,stappler::geom::ColorMask)

## BRIEF

Копирует компоненты другого цвета, не установленные в маске

## CONTENT

Копирует компоненты другого цвета, не установленные в маске

Параметры:
* stappler::geom::Color4F const& - другой цвет
* stappler::geom::ColorMask - маска цветовых компонентов


# ::stappler::geom::Color4F::r

## BRIEF

Красный компонент

## CONTENT

Тип: float

Красный компонент

# ::stappler::geom::Color4F::g

## BRIEF

Зелёный компонент

## CONTENT

Тип: float

Зелёный компонент

# ::stappler::geom::Color4F::b

## BRIEF

Синий компонент

## CONTENT

Тип: float

Синий компонент

# ::stappler::geom::Color4F::a

## BRIEF

Компонент альфа-канала

## CONTENT

Тип: float

Компонент альфа-канала

# ::stappler::geom::Color

## BRIEF

Унифицированный класс цвета

## CONTENT

Унифицированный класс цвета, основанный на цветовых компонентах Material Design v.1. Используется для упрощения прототипирования дизайна и выбора ключевых цветов. Цветовая модель MD первой версии содержит достаточно широкий объём цветов и простые правила их использования и модификации. В реальных графических приложениях стоит использовать более сложную модель третьей версии, реализованную в модуле для графических приложений.

# ::stappler::geom::Color::Red_50

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1

# ::stappler::geom::Color::Red_100

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1

# ::stappler::geom::Color::Red_200

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Red_300

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Red_400

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Red_500

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Red_600

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Red_700

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Red_800

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Red_900

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Red_A100

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Red_A200

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Red_A400

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Red_A700

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Pink_50

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Pink_100

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Pink_200

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Pink_300

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Pink_400

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Pink_500

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Pink_600

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Pink_700

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Pink_800

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Pink_900

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Pink_A100

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Pink_A200

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Pink_A400

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Pink_A700

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Purple_50

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Purple_100

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Purple_200

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Purple_300

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Purple_400

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Purple_500

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Purple_600

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Purple_700

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Purple_800

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Purple_900

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Purple_A100

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Purple_A200

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Purple_A400

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Purple_A700

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::DeepPurple_50

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::DeepPurple_100

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::DeepPurple_200

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::DeepPurple_300

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::DeepPurple_400

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::DeepPurple_500

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::DeepPurple_600

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::DeepPurple_700

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::DeepPurple_800

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::DeepPurple_900

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::DeepPurple_A100

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::DeepPurple_A200

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::DeepPurple_A400

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::DeepPurple_A700

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Indigo_50

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Indigo_100

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Indigo_200

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Indigo_300

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Indigo_400

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Indigo_500

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Indigo_600

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Indigo_700

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Indigo_800

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Indigo_900

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Indigo_A100

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Indigo_A200

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Indigo_A400

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Indigo_A700

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Blue_50

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Blue_100

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Blue_200

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Blue_300

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Blue_400

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Blue_500

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Blue_600

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Blue_700

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Blue_800

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Blue_900

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Blue_A100

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Blue_A200

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Blue_A400

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Blue_A700

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::LightBlue_50

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::LightBlue_100

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::LightBlue_200

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::LightBlue_300

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::LightBlue_400

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::LightBlue_500

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::LightBlue_600

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::LightBlue_700

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::LightBlue_800

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::LightBlue_900

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::LightBlue_A100

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::LightBlue_A200

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::LightBlue_A400

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::LightBlue_A700

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Cyan_50

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Cyan_100

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Cyan_200

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Cyan_300

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Cyan_400

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Cyan_500

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Cyan_600

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Cyan_700

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Cyan_800

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Cyan_900

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Cyan_A100

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Cyan_A200

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Cyan_A400

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Cyan_A700

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Teal_50

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Teal_100

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Teal_200

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Teal_300

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Teal_400

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Teal_500

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Teal_600

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Teal_700

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Teal_800

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Teal_900

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Teal_A100

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Teal_A200

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Teal_A400

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Teal_A700

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Green_50

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Green_100

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Green_200

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Green_300

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Green_400

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Green_500

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Green_600

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Green_700

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Green_800

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Green_900

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Green_A100

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Green_A200

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Green_A400

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Green_A700

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::LightGreen_50

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::LightGreen_100

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::LightGreen_200

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::LightGreen_300

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::LightGreen_400

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::LightGreen_500

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::LightGreen_600

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::LightGreen_700

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::LightGreen_800

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::LightGreen_900

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::LightGreen_A100

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::LightGreen_A200

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::LightGreen_A400

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::LightGreen_A700

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Lime_50

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Lime_100

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Lime_200

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Lime_300

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Lime_400

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Lime_500

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Lime_600

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Lime_700

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Lime_800

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Lime_900

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Lime_A100

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Lime_A200

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Lime_A400

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Lime_A700

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Yellow_50

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Yellow_100

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Yellow_200

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Yellow_300

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Yellow_400

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Yellow_500

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Yellow_600

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Yellow_700

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Yellow_800

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Yellow_900

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Yellow_A100

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Yellow_A200

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Yellow_A400

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Yellow_A700

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Amber_50

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Amber_100

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Amber_200

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Amber_300

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Amber_400

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Amber_500

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Amber_600

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Amber_700

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Amber_800

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Amber_900

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Amber_A100

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Amber_A200

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Amber_A400

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Amber_A700

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Orange_50

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Orange_100

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Orange_200

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Orange_300

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Orange_400

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Orange_500

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Orange_600

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Orange_700

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Orange_800

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Orange_900

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Orange_A100

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Orange_A200

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Orange_A400

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Orange_A700

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::DeepOrange_50

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::DeepOrange_100

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::DeepOrange_200

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::DeepOrange_300

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::DeepOrange_400

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::DeepOrange_500

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::DeepOrange_600

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::DeepOrange_700

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::DeepOrange_800

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::DeepOrange_900

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::DeepOrange_A100

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::DeepOrange_A200

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::DeepOrange_A400

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::DeepOrange_A700

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Brown_50

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Brown_100

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Brown_200

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Brown_300

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Brown_400

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Brown_500

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Brown_600

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Brown_700

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Brown_800

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Brown_900

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Grey_50

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Grey_100

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Grey_200

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Grey_300

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Grey_400

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Grey_500

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Grey_600

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Grey_700

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Grey_800

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::Grey_900

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::BlueGrey_50

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::BlueGrey_100

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::BlueGrey_200

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::BlueGrey_300

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::BlueGrey_400

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::BlueGrey_500

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::BlueGrey_600

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::BlueGrey_700

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::BlueGrey_800

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::BlueGrey_900

## BRIEF

Статическое значение цвета из Material Design v.1

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статическое значение цвета из Material Design v.1


# ::stappler::geom::Color::White

## BRIEF

Статический белый цвет

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статический белый цвет

# ::stappler::geom::Color::Black

## BRIEF

Статический чёрный цвет

## CONTENT

Доступ: public

Тип: stappler::geom::Color

Статический чёрный цвет

# ::stappler::geom::Color::Level

## BRIEF

Уровень яркости цвета по Material Design v.1

## CONTENT

Доступ: public

Уровень яркости цвета по Material Design v.1

Значения:
* Unknown - неизвестен (цвет не из Material Design v.1)
* b50 - уровень 50
* b100 - уровень 100
* b200 - уровень 200
* b300 - уровень 300
* b400 - уровень 400
* b500 - уровень 500
* b600 - уровень 600
* b700 - уровень 700
* b800 - уровень 800
* b900 - уровень 900
* a100 - акцентный уровень 100
* a200 - акцентный уровень 200
* a400 - акцентный уровень 400
* a700 - акцентный уровень 700


# ::stappler::geom::Color::Tone

## BRIEF

Тональность цвета по Material Design v.1

## CONTENT

Доступ: public

Тональность цвета по Material Design v.1

Значения:
* Unknown - неизвестна (цвет не из Material Design v.1)
* Red - Красный
* Pink - Розовый
* Purple - Фиолетовый
* DeepPurple - Темно-фиолетовый
* Indigo - Индиго
* Blue - Синий
* LightBlue - Светло-синий
* Cyan - Голубой
* Teal - Бирюзовый
* Green - Зелёный
* LightGreen - Светло-зелёный
* Lime - Липовый
* Yellow - Жёлтый
* Amber - Янтарный
* Orange - Оранжевый
* DeepOrange - Тёмно-оранжевый
* Brown - Коричневый
* Grey - Серый
* BlueGrey - Сине-серый
* BlackWhite - Чёрный и белый цвета


# ::stappler::geom::Color::asColor3B() const

## BRIEF

Интерпретирует цвет как трёхкомпонентный байтовый

## CONTENT

Доступ: public

Интерпретирует цвет как трёхкомпонентный байтовый

Возвращает:
* stappler::geom::Color3B

# ::stappler::geom::Color::asColor4B() const

## BRIEF

Интерпретирует цвет как четырёхкомпонентный байтовый

## CONTENT

Доступ: public

Интерпретирует цвет как четырёхкомпонентный байтовый

Возвращает:
* stappler::geom::Color4B

# ::stappler::geom::Color::asColor4F() const

## BRIEF

Интерпретирует цвет как четырёхкомпонентный на основе действительных чисел

## CONTENT

Доступ: public

Интерпретирует цвет как четырёхкомпонентный на основе действительных чисел

Возвращает:
* stappler::geom::Color4F

# ::stappler::geom::Color::operator Color3B() const

## BRIEF

Интерпретирует цвет как трёхкомпонентный байтовый

## CONTENT

Доступ: public

Интерпретирует цвет как трёхкомпонентный байтовый

Возвращает:
* stappler::geom::Color3B

# ::stappler::geom::Color::operator Color4B() const

## BRIEF

Интерпретирует цвет как четырёхкомпонентный байтовый

## CONTENT

Доступ: public

Интерпретирует цвет как четырёхкомпонентный байтовый

Возвращает:
* stappler::geom::Color4B

# ::stappler::geom::Color::operator Color4F() const

## BRIEF

Интерпретирует цвет как четырёхкомпонентный на основе действительных чисел

## CONTENT

Доступ: public

Интерпретирует цвет как четырёхкомпонентный на основе действительных чисел

Возвращает:
* stappler::geom::Color4F

# ::stappler::geom::Color::operator==(stappler::geom::Color const&) const

## BRIEF

Сравнивает два цвета

## CONTENT

Доступ: public

Сравнивает два цвета

Параметры:
* stappler::geom::Color const&

Возвращает:
* bool - true если цвета совпадают

# ::stappler::geom::Color::operator!=(stappler::geom::Color const&) const

## BRIEF

Сравнивает два цвета

## CONTENT

Доступ: public

Сравнивает два цвета

Параметры:
* stappler::geom::Color const&

Возвращает:
* bool - true если цвета не совпадают

# ::stappler::geom::Color::r() const

## BRIEF

Возвращает байтовую интерпретацию красного компонента

## CONTENT

Доступ: public

Возвращает байтовую интерпретацию красного компонента

Возвращает:
* uint8_t

# ::stappler::geom::Color::g() const

## BRIEF

Возвращает байтовую интерпретацию зелёного компонента

## CONTENT

Доступ: public

Возвращает байтовую интерпретацию зелёного компонента

Возвращает:
* uint8_t

# ::stappler::geom::Color::b() const

## BRIEF

Возвращает байтовую интерпретацию синего компонента

## CONTENT

Доступ: public

Возвращает байтовую интерпретацию синего компонента

Возвращает:
* uint8_t

# ::stappler::geom::Color::value() const

## BRIEF

Возвращает целочисленную интерпретацию цвета в формате xRGB

## CONTENT

Доступ: public

Возвращает целочисленную интерпретацию цвета в формате xRGB

Возвращает:
* uint32_t

# ::stappler::geom::Color::index() const

## BRIEF

Возвращает цветовой индекс в таблице цветов, если определён

## CONTENT

Доступ: public

Возвращает цветовой индекс в таблице цветов, если определён

Возвращает:
* uint32_t цветовой индекс или 0;

# ::stappler::geom::Color::text() const

## BRIEF

Возвращает цвет текстовых символов, харатерный для этого цвета

## CONTENT

Доступ: public

Возвращает цвет текстовых символов (чёрный или белый), харатерный для этого цвета

Возвращает:
* stappler::geom::Color

# ::stappler::geom::Color::level() const

## BRIEF

Возвращает текущий цветовой уровень согласно Material Design v.1

## CONTENT

Доступ: public

Возвращает текущий цветовой уровень согласно Material Design v.1

Возвращает:
* stappler::geom::Color::Level

# ::stappler::geom::Color::tone() const

## BRIEF

Возвращает текущий цветовой тон согласно Material Design v.1

## CONTENT

Доступ: public

Возвращает текущий цветовой тон согласно Material Design v.1

Возвращает:
* stappler::geom::Color::Tone

# ::stappler::geom::Color::previous() const

## BRIEF

Возвращает более светлый на одну условную единицу цвет

## CONTENT

Доступ: public

Возвращает более светлый на одну условную единицу цвет. Использует таблицу цветов или алгоритмически пытается вычислить более светлый уровень.

Возвращает:
* stappler::geom::Color

# ::stappler::geom::Color::next() const

## BRIEF

Возвращает более тёмный на одну условную единицу цвет

## CONTENT

Доступ: public

Возвращает более тёмный на одну условную единицу цвет. Использует таблицу цветов или алгоритмически пытается вычислить более тёмный уровень.

Возвращает:
* stappler::geom::Color

# ::stappler::geom::Color::lighter(uint8_t) const

## BRIEF

Возвращает более светлый цвет

## CONTENT

Доступ: public

Возвращает более светлый цвет. Использует таблицу цветов или алгоритмически пытается вычислить более светлый уровень.

Параметры:
* uint8_t - число уровней цвета, характеризующих осветление

Возвращает:
* stappler::geom::Color

# ::stappler::geom::Color::darker(uint8_t) const

## BRIEF

Возвращает более тёмный цвет

## CONTENT

Доступ: public

Возвращает более тёмный цвет. Использует таблицу цветов или алгоритмически пытается вычислить более тёмный уровень.

Параметры:
* uint8_t - число уровней цвета, характеризующих потемнение

Возвращает:
* stappler::geom::Color

# ::stappler::geom::Color::medium() const

## BRIEF

Возвращает средний цвет той же тональности

## CONTENT

Доступ: public

Возвращает средний цвет той же тональности. Использует уровень 500 из таблицы, либо пытается вычислить алгоритмически

Возвращает:
* stappler::geom::Color

# ::stappler::geom::Color::specific(uint8_t) const

## BRIEF

Возвращает цвет конкретного уровня

## CONTENT

Доступ: public

Возвращает цвет конкретного уровня из таблицы цветов, либо пытается вычислить аналогичный алгоритмически

Параметры:
* uint8_t - требуемый уровень цвета от 0 до 10

Возвращает:
* stappler::geom::Color

# ::stappler::geom::Color::specific(stappler::geom::Color::Level) const

## BRIEF

Возвращает цвет конкретного уровня

## CONTENT

Доступ: public

Возвращает цвет конкретного уровня, либо пытается вычислить аналогичный алгоритмически

Параметры:
* stappler::geom::Color::Level - требуемый уровень цвета

Возвращает:
* stappler::geom::Color

# ::stappler::geom::Color::Color(stappler::geom::Color::Tone,stappler::geom::Color::Level)

## BRIEF

Конструктор цвета по его положению в таблице

## CONTENT

Доступ: public

Конструктор цвета по его положению в таблице

Параметры:
* stappler::geom::Color::Tone - требуемая тональность
* stappler::geom::Color::Level - требуемый уровень цвета


# ::stappler::geom::Color::Color(uint32_t)

## BRIEF

Конструктор цвета из его целочисленного представления

## CONTENT

Доступ: public

Конструктор цвета из его целочисленного представления

Параметры:
* uint32_t - представление цвета в формате xRGB


# ::stappler::geom::Color::Color(uint32_t,int16_t)

## BRIEF

Конструктор на основе целочисленного представления и индекса цвета

## CONTENT

Доступ: public

Конструктор на основе целочисленного представления и индекса цвета

Параметры:
* uint32_t - представление цвета в формате xRGB
* int16_t - индекс цвета, харатеризующий его положение в таблице


# ::stappler::geom::Color::Color(stappler::geom::Color3B const&)

## BRIEF

Конструктор на основе трёхкомпонентного цвета

## CONTENT

Доступ: public

Конструктор на основе трёхкомпонентного цвета. Если для цвета есть индекс - находит его.

Параметры:
* stappler::geom::Color3B const&


# ::stappler::geom::Color::Color(stappler::geom::Color4B const&)

## BRIEF

Конструктор на основе четырёхкомпонентного цвета

## CONTENT

Доступ: public

Конструктор на основе четырёхкомпонентного цвета. Альфа-канал отбрасывается. Если для цвета есть индекс - находит его.

Параметры:
* stappler::geom::Color4B const&


# ::stappler::geom::Color::Color()

## BRIEF

Конструктор по умолчанию

## CONTENT

Доступ: public

Конструктор по умолчанию, инициализирует чёрный цвет

# ::stappler::geom::Color::Color(stappler::geom::Color const&)

## BRIEF

Конструктор копирования

## CONTENT

Доступ: public

Конструктор копирования по умолчанию

Параметры:
* stappler::geom::Color const&


# ::stappler::geom::Color::Color(stappler::geom::Color&&)

## BRIEF

Конструктор перемещения

## CONTENT

Доступ: public

Конструктор перемещения по умолчанию, аналогичен копированию

Параметры:
* stappler::geom::Color&&


# ::stappler::geom::Color::operator=(stappler::geom::Color const&)

## BRIEF

Оператор копирования

## CONTENT

Доступ: public

Оператор копирования по умолчанию

Параметры:
* stappler::geom::Color const&

Возвращает:
* stappler::geom::Color& - ссылка на себя

# ::stappler::geom::Color::operator=(stappler::geom::Color&&)

## BRIEF

Оператор перемещения

## CONTENT

Доступ: public

Оператор перемещения по умолчанию

Параметры:
* stappler::geom::Color&&

Возвращает:
* stappler::geom::Color& - ссылка на себя

# ::stappler::geom::Color::name<typename>() const

## BRIEF

Возвращает имя цвета

## CONTENT

Доступ: public

Возвращает имя цвета. Табличное имя или имя в формате rgb(r,g,b)

Параметры шаблона:
* typename Interface - интерфейс памяти, используемый для возврата имени

Возвращает:
* typename Interface::StringType - имя цвета

# ::stappler::geom::Color::getColorByName(stappler::StringView const&,stappler::geom::Color const&)

## BRIEF

Возвращает цвет по его текстовому представлению

## CONTENT

Доступ: public

Возвращает цвет по его текстовому представлению

Параметры:
* stappler::StringView const& - строка, содержащая представление цвета
* stappler::geom::Color const& - цвет по умолчанию

Возвращает:
* stappler::geom::Color - цвет из тексового представления или значение по умолчанию в случе неудачи

Форматы для чтения:
* rgb(<0-255>, <0-255>, <0-255>) - компоненты цвета задаются байтовым значением
* rgb(<0-100>%, <0-100>%, <0-100>%) - компоненты цвета задаются в процентах
* hsl(<0-359>, <0-100>%, <0-100>%) - задание в цветовой модели HSL (Hue-Saturation-Lightness) с альфа-каналом
* #<00-FF><00-FF><00-FF> - традиционное HTML-кодирование
* #<0-F><0-F><0-F> - традиционное HTML-кодирование, значения 0-F интерпретируется как 00-FF
* white, silver, gray, grey, black, maroon, red, orange, yellow, olive, lime, green, aqua, blue, navy, teal, fuchsia, purple
* Одно из имён из Material Design v.1

# ::stappler::geom::Color::progress(stappler::geom::Color const&,stappler::geom::Color const&,float)

## BRIEF

Функция прогресса (линейной интерполяции) двух цветов

## CONTENT

Функция прогресса (линейной интерполяции) двух цветов. Определяет новый цвет как линейную интерполяцию между исходными цветами с применением параметра.

Доступ: public

Параметры:
* stappler::geom::Color const&
* stappler::geom::Color const&
* float - параметр интерполяции (0.0 - 1.0)

Возвращает:
* stappler::geom::Color - новый цвет

# ::stappler::geom::Color::getById(uint16_t)

## BRIEF

Возвращает цвет по его индексу в таблице цветов

## CONTENT

Доступ: private

Возвращает цвет по его индексу в таблице цветов

Параметры:
* uint16_t - индекс цвета в таблице

Возвращает:
* stappler::geom::Color

# ::stappler::geom::Color::getColorIndex(uint32_t)

## BRIEF

Возвращает индекс цвета по его целочисленному представлению

## CONTENT

Доступ: private

Возвращает индекс цвета по его целочисленному представлению, или 0, если цвет не табличный

Параметры:
* uint32_t - целочисленное представление цвета в формате xRGB

Возвращает:
* uint16_t - индекс в таблице цветов

# ::stappler::geom::Color::_value

## BRIEF

Целочисленное представление цвета

## CONTENT

Доступ: private

Тип: uint32_t

Целочисленное представление цвета в формате xRGB

# ::stappler::geom::Color::_index

## BRIEF

Индекс цвета в таблице цветов

## CONTENT

Доступ: private

Тип: uint16_t

Индекс цвета в таблице цветов или 0


# ::stappler::geom::operator<<(std::ostream&,stappler::geom::Color const&)

## BRIEF

Выводит цвет в текстовый поток

## CONTENT

Выводит цвет в текстовый поток

Параметры:
* std::ostream&
* stappler::geom::Color const&

Возвращает:
* std::ostream&

# ::stappler::geom::operator<<(std::ostream&,stappler::geom::Color3B const&)

## BRIEF

Выводит цвет в текстовый поток

## CONTENT

Выводит цвет в текстовый поток

Параметры:
* std::ostream&
* stappler::geom::Color3B const&

Возвращает:
* std::ostream&

# ::stappler::geom::operator<<(std::ostream&,stappler::geom::Color4B const&)

## BRIEF

Выводит цвет в текстовый поток

## CONTENT

Выводит цвет в текстовый поток

Параметры:
* std::ostream&
* stappler::geom::Color4B const&

Возвращает:
* std::ostream&

# ::stappler::geom::operator<<(std::ostream&,stappler::geom::Color4F const&)

## BRIEF

Выводит цвет в текстовый поток

## CONTENT

Выводит цвет в текстовый поток

Параметры:
* std::ostream&
* stappler::geom::Color4F const&

Возвращает:
* std::ostream&

# ::stappler::geom::Color4F::progress(stappler::geom::Color4F const&,stappler::geom::Color4F const&,float)

## BRIEF

Функция прогресса (линейной интерполяции) двух цветов

## CONTENT

Функция прогресса (линейной интерполяции) двух цветов. Определяет новый цвет как линейную интерполяцию между исходными цветами с применением параметра. Эта специализация шаблона позволяет применять общую функцию `stappler::progress`

Параметры:
* stappler::geom::Color4F const&
* stappler::geom::Color4F const&
* float - параметр интерполяции (0.0 - 1.0)

Возвращает:
* stappler::geom::Color4F

# ::stappler::geom::operator*(stappler::geom::Color4F const&,stappler::geom::Color4F const&)

## BRIEF

Оператор умножения цветов

## CONTENT

Оптимизированная функция покомпонентного умножения цветов

Параметры:
* stappler::geom::Color4F const&
* stappler::geom::Color4F const&

Возвращает:
* stappler::geom::Color4F

# ::stappler::geom::operator/(stappler::geom::Color4F const&,stappler::geom::Color4F const&)

## BRIEF

Оператор деления цветов

## CONTENT

Оптимизированная функция покомпонентного деления цветов

Параметры:
* stappler::geom::Color4F const&
* stappler::geom::Color4F const&

Возвращает:
* stappler::geom::Color4F

# ::stappler::geom::operator*(stappler::geom::Color4F const&,float)

## BRIEF

Оператор умножения цвета на число

## CONTENT

Оптимизированная функция умножения всех компонентов цвета на число

Параметры:
* stappler::geom::Color4F const&
* float

Возвращает:
* stappler::geom::Color4F

# ::stappler::geom::operator*(float,stappler::geom::Color4F const&)

## BRIEF

Оператор умножения цвета на число

## CONTENT

Оптимизированная функция умножения всех компонентов цвета на число

Параметры:
* float
* stappler::geom::Color4F const&

Возвращает:
* stappler::geom::Color4F

# ::stappler::geom::operator+(stappler::geom::Color4F const&,stappler::geom::Color4F const&)

## BRIEF

Оператор суммы цветов

## CONTENT

Оптимизированная функция суммы цветов

Параметры:
* stappler::geom::Color4F const&
* stappler::geom::Color4F const&

Возвращает:
* stappler::geom::Color4F

# ::stappler::geom::operator-(stappler::geom::Color4F const&,stappler::geom::Color4F const&)

## BRIEF

Оператор разности цветов

## CONTENT

Оптимизированная функция разности цветов

Параметры:
* stappler::geom::Color4F const&
* stappler::geom::Color4F const&

Возвращает:
* stappler::geom::Color4F

# ::stappler::geom::operator*(stappler::geom::Color4F const&,stappler::geom::Color4B const&)

## BRIEF

Оператор умножения цветов

## CONTENT

Оператор умножения цветов

Параметры:
* stappler::geom::Color4F const&
* stappler::geom::Color4B const&

Возвращает:
* stappler::geom::Color4F

# ::stappler::geom::operator*(stappler::geom::Color4B const&,stappler::geom::Color4F const&)

## BRIEF

Оператор умножения цветов

## CONTENT

Оператор умножения цветов

Параметры:
* stappler::geom::Color4B const&
* stappler::geom::Color4F const&

Возвращает:
* stappler::geom::Color4F

# ::stappler::geom::operator/(stappler::geom::Color4F const&,stappler::geom::Color4B const&)

## BRIEF

Оператор деления цветов

## CONTENT

Оператор деления цветов

Параметры:
* stappler::geom::Color4F const&
* stappler::geom::Color4B const&

Возвращает:
* stappler::geom::Color4F

# ::stappler::geom::operator/(stappler::geom::Color4B const&,stappler::geom::Color4F const&)

## BRIEF

Оператор деления цветов

## CONTENT

Оператор деления цветов

Параметры:
* stappler::geom::Color4B const&
* stappler::geom::Color4F const&

Возвращает:
* stappler::geom::Color4F



# ::stappler::progress(geom::Color const&,geom::Color const&,float)

## BRIEF

Функция прогресса (линейной интерполяции) двух цветов

## CONTENT

Функция прогресса (линейной интерполяции) двух цветов. Определяет новый цвет как линейную интерполяцию между исходными цветами с применением параметра. Эта специализация шаблона позволяет применять общую функцию `stappler::progress`

Параметры:
* geom::Color const&
* geom::Color const&
* float - параметр интерполции (0.0 - 1.0)

Возвращает:
* geom::Color

# ::stappler::progress(geom::Color3B const&,geom::Color3B const&,float)

## BRIEF

Функция прогресса (линейной интерполяции) двух цветов

## CONTENT

Функция прогресса (линейной интерполяции) двух цветов. Определяет новый цвет как линейную интерполяцию между исходными цветами с применением параметра. Эта специализация шаблона позволяет применять общую функцию `stappler::progress`

Параметры:
* geom::Color const&
* geom::Color const&
* float - параметр интерполции (0.0 - 1.0)

Возвращает:
* geom::Color3B

# ::stappler::progress(geom::Color4B const&,geom::Color4B const&,float)

## BRIEF

Функция прогресса (линейной интерполяции) двух цветов

## CONTENT

Функция прогресса (линейной интерполяции) двух цветов. Определяет новый цвет как линейную интерполяцию между исходными цветами с применением параметра. Эта специализация шаблона позволяет применять общую функцию `stappler::progress`

Параметры:
* geom::Color const&
* geom::Color const&
* float - параметр интерполции (0.0 - 1.0)

Возвращает:
* geom::Color4B

# ::stappler::progress(geom::Color4F const&,geom::Color4F const&,float)

## BRIEF

Функция прогресса (линейной интерполяции) двух цветов

## CONTENT

Функция прогресса (линейной интерполяции) двух цветов. Определяет новый цвет как линейную интерполяцию между исходными цветами с применением параметра. Эта специализация шаблона позволяет применять общую функцию `stappler::progress`

Параметры:
* geom::Color const&
* geom::Color const&
* float - параметр интерполции (0.0 - 1.0)

Возвращает:
* geom::Color4F

# ::stappler::geom::Color3B::name<typename>() const

## BRIEF

Возвращает известное имя для цвета

## CONTENT

Возвращает известное имя для цвета

Параметры шаблона:
* typename Interface

Возвращает:
* typename Interface::StringType