Title: SPColorCam16.h


# CORE_GEOM_SPCOLORCAM16_H_

## BRIEF

Заголовок частичной реазилации цветовой схемы CAM-16

## CONTENT

Заголовок частичной реазилации цветовой схемы CAM-16. Создано на основе Flutter.

См. https://facelessuser.github.io/coloraide/colors/cam16_ucs/

# ::stappler::geom::Cam16Float

## BRIEF

Используемый тип с плавающей точкой

## CONTENT

Используемый тип с плавающей точкой (32-bit float по умолчанию)

# ::stappler::geom::ViewingConditions

## BRIEF

Параметры условий наблюдения

## CONTENT

Параметры условий наблюдения


# ::stappler::geom::ViewingConditions::DEFAULT

## BRIEF

Параметры по умолчанию

## CONTENT

Параметры по умолчанию

Тип: stappler::geom::ViewingConditions const


# ::stappler::geom::ViewingConditions::Float

## BRIEF

Используемый тип с плавающей точкой

## CONTENT

Используемый тип с плавающей точкой (32-bit float по умолчанию)


# ::stappler::geom::ViewingConditions::YFromLstar(stappler::geom::ViewingConditions::Float)

## BRIEF

Конвертация параметра

## CONTENT

Конвертация параметра

Параметры:
* stappler::geom::ViewingConditions::Float

Возвращает:
* Float

# ::stappler::geom::ViewingConditions::create(stappler::geom::ViewingConditions::Float const[3],stappler::geom::ViewingConditions::Float const,stappler::geom::ViewingConditions::Float const,stappler::geom::ViewingConditions::Float const,bool const)

## BRIEF

Создаёт условия наблюдения из исходных параметров

## CONTENT

Создаёт условия наблюдения из исходных параметров

Параметры:
* stappler::geom::ViewingConditions::Float const[3]
* stappler::geom::ViewingConditions::Float const
* stappler::geom::ViewingConditions::Float const
* stappler::geom::ViewingConditions::Float const
* bool const

Возвращает:
* stappler::geom::ViewingConditions

# ::stappler::geom::ViewingConditions::adapting_luminance

## BRIEF

Параметр освещённости

## CONTENT

Параметр освещённости

Тип: Float


# ::stappler::geom::ViewingConditions::background_lstar

## BRIEF

Параметр заднего плана

## CONTENT

Параметр заднего плана

Тип: Float


# ::stappler::geom::ViewingConditions::surround

## BRIEF

Параметр окружения

## CONTENT

Параметр окружения

Тип: Float


# ::stappler::geom::ViewingConditions::discounting_illuminant

## BRIEF

Флаг светимости

## CONTENT

Флаг светимости

Тип: bool


# ::stappler::geom::ViewingConditions::background_y_to_white_point_y

## BRIEF

Параметр смещения точки белого

## CONTENT

Параметр смещения точки белого

Тип: Float


# ::stappler::geom::ViewingConditions::aw

## BRIEF

Параметр

## CONTENT

Параметр

Тип: Float


# ::stappler::geom::ViewingConditions::nbb

## BRIEF

Параметр

## CONTENT

Параметр

Тип: Float


# ::stappler::geom::ViewingConditions::ncb

## BRIEF

Параметр

## CONTENT

Параметр

Тип: Float


# ::stappler::geom::ViewingConditions::c

## BRIEF

Параметр

## CONTENT

Параметр

Тип: Float


# ::stappler::geom::ViewingConditions::n_c

## BRIEF

Параметр

## CONTENT

Параметр

Тип: Float


# ::stappler::geom::ViewingConditions::fl

## BRIEF

Параметр

## CONTENT

Параметр

Тип: Float


# ::stappler::geom::ViewingConditions::fl_root

## BRIEF

Параметр

## CONTENT

Параметр

Тип: Float


# ::stappler::geom::ViewingConditions::z

## BRIEF

Параметр

## CONTENT

Параметр

Тип: Float


# ::stappler::geom::ViewingConditions::white_point

## BRIEF

Параметры точки белого

## CONTENT

Параметры точки белого

Тип: Float[3]


# ::stappler::geom::ViewingConditions::rgb_d

## BRIEF

Параметры цветового смещения

## CONTENT

Параметры цветового смещения

Тип: Float[3]


# ::stappler::geom::Cam16

## BRIEF

Реализация конвертации из и в пространство CAM-16

## CONTENT

Реализация конвертации из и в пространство CAM-16


# ::stappler::geom::Cam16::Float

## BRIEF

Используемый тип с плавающей точкой

## CONTENT

Используемый тип с плавающей точкой (32-bit float по умолчанию)

# ::stappler::geom::Cam16::linearized(int const)

## BRIEF

Конвертация параметра

## CONTENT

Конвертация параметра

Параметры:
* int const

Возвращает:
* Float

# ::stappler::geom::Cam16::linearized(stappler::geom::Cam16::Float const)

## BRIEF

Конвертация параметра

## CONTENT

Конвертация параметра

Параметры:
* stappler::geom::Cam16::Float const

Возвращает:
* Float

# ::stappler::geom::Cam16::sanitizeDegrees(stappler::geom::Cam16::Float const)

## BRIEF

Приведение градусов к диапазону 0-360

## CONTENT

Приведение градусов к диапазону 0-360

Параметры:
* stappler::geom::Cam16::Float const

Возвращает:
* Float

# ::stappler::geom::Cam16::signum(stappler::geom::Cam16::Float)

## BRIEF

Возвращает знак для числа

## CONTENT

Возвращает знак для числа

Параметры:
* stappler::geom::Cam16::Float

Возвращает:
* int

# ::stappler::geom::Cam16::create(stappler::geom::Color4F const&,stappler::geom::ViewingConditions const&)

## BRIEF

Конвертирует цвет в пространство CAM-16 на основе параметров наблюдения

## CONTENT

Конвертирует цвет в пространство CAM-16 на основе параметров наблюдения

Параметры:
* stappler::geom::Color4F const&
* stappler::geom::ViewingConditions const&

Возвращает:
* stappler::geom::Cam16

# ::stappler::geom::Cam16::LstarFromY(stappler::geom::Cam16::Float)

## BRIEF

Конвертация параметра светимости

## CONTENT

Конвертация параметра светимости

Параметры:
* stappler::geom::Cam16::Float

Возвращает:
* Float

# ::stappler::geom::Cam16::LstarFromColor4F(stappler::geom::Color4F const&)

## BRIEF

Вычисление параметра светимости из цвета

## CONTENT

Вычисление параметра светимости из цвета

Параметры:
* stappler::geom::Color4F const&

Возвращает:
* Float

# ::stappler::geom::Cam16::create(stappler::geom::Color4F const&)

## BRIEF

Конвертирует цвет в пространство CAM-16 на основе параметров наблюдения по умолчанию

## CONTENT

Конвертирует цвет в пространство CAM-16 на основе параметров наблюдения по умолчанию

Параметры:
* stappler::geom::Color4F const&

Возвращает:
* stappler::geom::Cam16

# ::stappler::geom::Cam16::hue

## BRIEF

Цветовой тон

## CONTENT

Цветовой тон

Тип: Float


# ::stappler::geom::Cam16::chroma

## BRIEF

Насыщенность цвета

## CONTENT

Насыщенность цвета

Тип: Float


# ::stappler::geom::Cam16::j

## BRIEF

Параметр

## CONTENT

Параметр

Тип: Float


# ::stappler::geom::Cam16::q

## BRIEF

Параметр

## CONTENT

Параметр

Тип: Float


# ::stappler::geom::Cam16::m

## BRIEF

Параметр

## CONTENT

Параметр

Тип: Float


# ::stappler::geom::Cam16::s

## BRIEF

Параметр

## CONTENT

Параметр

Тип: Float


# ::stappler::geom::Cam16::jstar

## BRIEF

Параметр

## CONTENT

Параметр

Тип: Float


# ::stappler::geom::Cam16::astar

## BRIEF

Параметр

## CONTENT

Параметр

Тип: Float


# ::stappler::geom::Cam16::bstar

## BRIEF

Параметр

## CONTENT

Параметр

Тип: Float
