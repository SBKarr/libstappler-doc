Title: SPColorHCT.h


# CORE_GEOM_SPCOLORHCT_H_

## BRIEF

Заголовок реализации цветовой палитры HCT

## CONTENT

Заголовок реализации цветовой палитры HCT. Реализовано на основе Flutter.

См. https://facelessuser.github.io/coloraide/colors/hct/

# ::stappler::geom::ColorHCT

## BRIEF

Класс реализации цвета в формате HCT

## CONTENT

Класс реализации цвета в формате HCT. Поскольку конвертация этого формата сложна, также хранит готовый RGB-эквивалент.

# ::stappler::geom::ColorHCT::Values

## BRIEF

Значения цвета в HCT

## CONTENT

Значения цвета в HCT


# ::stappler::geom::ColorHCT::Values::hue

## BRIEF

Цветовой тон (0-360)

## CONTENT

Цветовой тон (0-360)

Тип: float


# ::stappler::geom::ColorHCT::Values::chroma

## BRIEF

Насыщенность цвета (0-100)

## CONTENT

Насыщенность цвета (0-100)

Тип: float


# ::stappler::geom::ColorHCT::Values::tone

## BRIEF

Интенсивность цвета (0-100)

## CONTENT

Интенсивность цвета (0-100)

Тип: float


# ::stappler::geom::ColorHCT::Values::alpha

## BRIEF

Прозрачность (0.0 - 1.0)

## CONTENT

Прозрачность (0.0 - 1.0)

Тип: float


# ::stappler::geom::ColorHCT::Values::operator==(stappler::geom::ColorHCT::Values const&) const

## BRIEF

Сравнивает значения цвета

## CONTENT

Сравнивает значения цвета

Параметры:
* stappler::geom::ColorHCT::Values const&

Возвращает:
* bool

# ::stappler::geom::ColorHCT::Values::operator!=(stappler::geom::ColorHCT::Values const&) const

## BRIEF

Сравнивает значения цвета

## CONTENT

Сравнивает значения цвета

Параметры:
* stappler::geom::ColorHCT::Values const&

Возвращает:
* bool

# ::stappler::geom::ColorHCT::progress(stappler::geom::ColorHCT const&,stappler::geom::ColorHCT const&,float)

## BRIEF

Функция линейной интерполяции значений цвета

## CONTENT

Функция линейной интерполяции значений цвета

Параметры:
* stappler::geom::ColorHCT const&
* stappler::geom::ColorHCT const&
* float

Возвращает:
* stappler::geom::ColorHCT

# ::stappler::geom::ColorHCT::solveColorHCT(stappler::geom::Cam16Float,stappler::geom::Cam16Float,stappler::geom::Cam16Float,float)

## BRIEF

Конвертирует цвет из RGB в HCT

## CONTENT

Конвертирует цвет из RGB в HCT. Возвращает ближайший представимый в форме HCT цвет.

Параметры:
* stappler::geom::Cam16Float - R
* stappler::geom::Cam16Float - G
* stappler::geom::Cam16Float - B
* float - A

Возвращает:
* stappler::geom::ColorHCT

# ::stappler::geom::ColorHCT::solveColor4F(stappler::geom::Cam16Float,stappler::geom::Cam16Float,stappler::geom::Cam16Float,float)

## BRIEF

Конвертирует цвет из HCT в RGB

## CONTENT

Конвертирует цвет из HCT в RGB

Параметры:
* stappler::geom::Cam16Float - H
* stappler::geom::Cam16Float - C
* stappler::geom::Cam16Float - T
* float - A

Возвращает:
* stappler::geom::Color4F

# ::stappler::geom::ColorHCT::ColorHCT()

## BRIEF

Конструктор по умолчанию

## CONTENT

Конструктор по умолчанию


# ::stappler::geom::ColorHCT::ColorHCT(float,float,float,float)

## BRIEF

Конструктор из параметров цвета

## CONTENT

Конструктор из параметров цвета

Параметры:
* float - H
* float - C
* float - T
* float - A


# ::stappler::geom::ColorHCT::ColorHCT(stappler::geom::ColorHCT::Values const&)

## BRIEF

Конструктор копирования

## CONTENT

Конструктор копирования

Параметры:
* stappler::geom::ColorHCT::Values const&


# ::stappler::geom::ColorHCT::ColorHCT(stappler::geom::Color4F const&)

## BRIEF

Конструктор из RGB-цвета

## CONTENT

Конструктор из RGB-цвета

Параметры:
* stappler::geom::Color4F const&


# ::stappler::geom::ColorHCT::ColorHCT(stappler::geom::Color4F const&,float)

## BRIEF

Конструктор из RGB-цвета с заменой прозрачности

## CONTENT

Конструктор из RGB-цвета с заменой прозрачности

Параметры:
* stappler::geom::Color4F const&
* float


# ::stappler::geom::ColorHCT::asColor4F() const

## BRIEF

Возвращает соотвествующий RGB-цвет

## CONTENT

Возвращает соотвествующий RGB-цвет

Возвращает:
* stappler::geom::Color4F

# ::stappler::geom::ColorHCT::operator=(stappler::geom::Color4F const&)

## BRIEF

Оператор копирования из RGB-цвета

## CONTENT

Оператор копирования из RGB-цвета

Параметры:
* stappler::geom::Color4F const&

Возвращает:
* stappler::geom::ColorHCT&

# ::stappler::geom::ColorHCT::operator=(stappler::geom::ColorHCT const&)

## BRIEF

Оператор копирования

## CONTENT

Оператор копирования

Параметры:
* stappler::geom::ColorHCT const&

Возвращает:
* stappler::geom::ColorHCT&

# ::stappler::geom::ColorHCT::operator Color4F() const

## BRIEF

Оператор приведения к RGN-цвету

## CONTENT

Оператор приведения к RGN-цвету. Позволяет использовать как RGB-цвет без явной конвертации.

Возвращает:
* stappler::geom::Color4F

# ::stappler::geom::ColorHCT::operator==(stappler::geom::ColorHCT const&) const

## BRIEF

Сравнивает цвета

## CONTENT

Сравнивает цвета

Параметры:
* stappler::geom::ColorHCT const&

Возвращает:
* bool

# ::stappler::geom::ColorHCT::operator!=(stappler::geom::ColorHCT const&) const

## BRIEF

Сравнивает цвета

## CONTENT

Сравнивает цвета

Параметры:
* stappler::geom::ColorHCT const&

Возвращает:
* bool

# ::stappler::geom::ColorHCT::data

## BRIEF

Параметры HCT-цвета

## CONTENT

Параметры HCT-цвета

Тип: stappler::geom::ColorHCT::Values


# ::stappler::geom::ColorHCT::color

## BRIEF

Параметры соотвествующего RGB-цвета

## CONTENT

Параметры соотвествующего RGB-цвета

Тип: stappler::geom::Color4F


# ::stappler::geom::operator<<(std::ostream&,stappler::geom::ColorHCT const&)

## BRIEF

Выводит цвет в поток

## CONTENT

Выводит цвет в поток

Параметры:
* std::ostream&
* stappler::geom::ColorHCT const&

Возвращает:
* std::ostream&

# ::stappler::progress(geom::ColorHCT const&,geom::ColorHCT const&,float)

## BRIEF

Функция линейной интеропляции цвета

## CONTENT

Функция линейной интеропляции цвета

Параметры:
* geom::ColorHCT const&
* geom::ColorHCT const&
* float

Возвращает:
* geom::ColorHCT