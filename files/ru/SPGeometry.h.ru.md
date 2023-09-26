Title: SPGeometry.h


# STAPPLER_GEOM_SPGEOMETRY_H_

## BRIEF

Заголовок базовых геометрических типов

## CONTENT

Заголовок базовых геометрических типов. Определяет типы Size2, Size3, Extent2, Extent3, Rect, UVec2, URect

# ::stappler::geom::Size2

## BRIEF

Структура двумерного размера - ширины и высоты

## CONTENT

Структура двумерного размера - ширины и высоты. Выражена в значениях с плавающей точкой.

# ::stappler::geom::Size2::ZERO

## BRIEF

Статический нулевой размер

## CONTENT

Тип: stappler::geom::Size2 const

Статический нулевой размер

# ::stappler::geom::Size2::width

## BRIEF

Значение ширины

## CONTENT

Тип: float

Значение ширины

# ::stappler::geom::Size2::height

## BRIEF

Значение высоты

## CONTENT

Тип: float

Значение высоты

# ::stappler::geom::Size2::Size2()

## BRIEF

Конструктор по умолчанию

## CONTENT

Конструктор по умолчанию, создаёт нулевой размер

# ::stappler::geom::Size2::Size2(float,float)

## BRIEF

Покомпонентый конструктор

## CONTENT

Покомпонентый конструктор

Параметры:
* float - ширина
* float - высота


# ::stappler::geom::Size2::Size2(stappler::geom::Size2 const&)

## BRIEF

Конструктор копирования

## CONTENT

Конструктор копирования по умолчанию

Параметры:
* stappler::geom::Size2 const&


# ::stappler::geom::Size2::Size2(stappler::geom::Vec2 const&)

## BRIEF

Конструктор из точки

## CONTENT

Конструктор из точки. Конвертирует вектор, интерпретированный как точку, в линейный размер

Параметры:
* stappler::geom::Vec2 const& - вектор из ширины (X) и высоты (Y)


# ::stappler::geom::Size2::Size2<typename>(stappler::geom::Size2 const&,Functor const&)

## BRIEF

Применяет функтор к размеру

## CONTENT

Применяет функтор к размеру

Параметры шаблона:
* typename Functor - функтор. принимающий и возвращающий float

Параметры:
* stappler::geom::Size2 const&
* Functor const&


# ::stappler::geom::Size2::operator Vec2() const

## BRIEF

Конвертирует размер в вектор

## CONTENT

Конвертирует размер в вектор

Возвращает:
* stappler::geom::Vec2 вектор из ширины (X) и высоты (Y)


# ::stappler::geom::Size2::operator=(stappler::geom::Size2 const&)

## BRIEF

Назначает текущий размер равным другому

## CONTENT

Назначает текущий размер равным другому

Параметры:
* stappler::geom::Size2 const&

Возвращает:
* stappler::geom::Size2& - ссылка на себя

# ::stappler::geom::Size2::operator=(stappler::geom::Vec2 const&)

## BRIEF

Назначает размер из точки

## CONTENT

Назначает размер из точки. Конвертирует вектор, интерпретированный как точку, в линейный размер

Параметры:
* stappler::geom::Vec2 const& - вектор из ширины (X) и высоты (Y)

Возвращает:
* stappler::geom::Size2& - ссылка на себя

# ::stappler::geom::Size2::operator+(stappler::geom::Size2 const&) const

## BRIEF

Возвращает сумму из двух размеров

## CONTENT

Возвращает сумму из двух размеров

Параметры:
* stappler::geom::Size2 const&

Возвращает:
* stappler::geom::Size2 - сумма двух размеров

# ::stappler::geom::Size2::operator-(stappler::geom::Size2 const&) const

## BRIEF

Возвращает разность двух размеров

## CONTENT

Возвращает разность двух размеров

Параметры:
* stappler::geom::Size2 const&

Возвращает:
* stappler::geom::Size2 - разность двух размеров

# ::stappler::geom::Size2::operator*(float) const

## BRIEF

Возвращает результат умножения размера на число

## CONTENT

Возвращает результат умножения размера на число

Параметры:
* float

Возвращает:
* stappler::geom::Size2 - результат покомпонентного умножения размера на число

# ::stappler::geom::Size2::operator/(float) const

## BRIEF

Возвращает результат деления размера на число

## CONTENT

Возвращает результат деления размера на число

Параметры:
* float

Возвращает:
* stappler::geom::Size2 - результат покомпонентного деления размера на число

# ::stappler::geom::Size2::setSize(float,float)

## BRIEF

Покомпонентно устанавливает текущие значения

## CONTENT

Покомпонентно устанавливает текущие значения

Параметры:
* float - ширина
* float - высота


# ::stappler::geom::Size2::fuzzyEquals(stappler::geom::Size2 const&,float) const

## BRIEF

Сравнивает размеры с погрешностью

## CONTENT

Сравнивает размеры с погрешностью

Параметры:
* stappler::geom::Size2 const& - другой размер
* float - погрешность

Возвращает:
* bool - true если разность размером не больше погрешности

# ::stappler::geom::Size3

## BRIEF

Структура трёхкомпонентного размера - ширины, высоты и глубины

## CONTENT

Структура трёхкомпонентного размера - ширины, высоты и глубины, выражена в числах с плавающей точкой

# ::stappler::geom::Size3::ZERO

## BRIEF

Статический нулевой размер

## CONTENT

Тип: stappler::geom::Size3 const

Статический нулевой размер

# ::stappler::geom::Size3::width

## BRIEF

Значение ширины

## CONTENT

Тип: float

Значение ширины

# ::stappler::geom::Size3::height

## BRIEF

Значение высоты

## CONTENT

Тип: float

Значение высоты

# ::stappler::geom::Size3::depth

## BRIEF

Значение глубины

## CONTENT

Тип: float

Значение глубины


# ::stappler::geom::Size3::Size3()

## BRIEF

Конструктор по умолчанию

## CONTENT

Конструктор по умолчанию, создаёт нулевой размер

# ::stappler::geom::Size3::Size3(float,float,float)

## BRIEF

Покомпонентный конструктор

## CONTENT

Покомпонентный конструктор

Параметры:
* float - ширина
* float - высота
* float - глубина


# ::stappler::geom::Size3::Size3(stappler::geom::Size3 const&)

## BRIEF

Конструктор копирования

## CONTENT

Конструктор копирования по умолчанию

Параметры:
* stappler::geom::Size3 const&


# ::stappler::geom::Size3::Size3(stappler::geom::Vec3 const&)

## BRIEF

Конструктор из точки

## CONTENT

Конструктор из точки. Интерпретирует вектор как точку и использует её как линейный размер

Параметры:
* stappler::geom::Vec3 const& - вектор из ширины (X), высоты (Y) и глубины (Z)


# ::stappler::geom::Size3::Size3<typename>(stappler::geom::Size3 const&,Functor const&)

## BRIEF

Применяет функтор к размеру

## CONTENT

Применяет функтор к размеру

Параметры шаблона:
* typename Functor - функтор, принимающий и возвращающий float

Параметры:
* stappler::geom::Size3 const& - исходный размер
* Functor const& - функтор


# ::stappler::geom::Size3::operator Vec3() const

## BRIEF

Конвертация в вектор

## CONTENT

Конвертация в вектор. Интерпретирует размер как точку в пространстве.

Возвращает:
* stappler::geom::Vec3 - вектор из ширины (X), высоты (Y) и глубины (Z)


# ::stappler::geom::Size3::operator=(stappler::geom::Size3 const&)

## BRIEF

Назначает текущий размер соотвествующим другому

## CONTENT

Назначает текущий размер соотвествующим другому

Параметры:
* stappler::geom::Size3 const&

Возвращает:
* stappler::geom::Size3& - ссылка на себя

# ::stappler::geom::Size3::operator=(stappler::geom::Vec3 const&)

## BRIEF

Назначает текущий размер соотвествующим точке

## CONTENT

Назначает текущий размер соотвествующим точке. Интерпретирует вектор как точку и использует её как линейный размер

Параметры:
* stappler::geom::Vec3 const& - вектор из ширины (X), высоты (Y) и глубины (Z)

Возвращает:
* stappler::geom::Size3& - ссылка на себя

# ::stappler::geom::Size3::operator+(stappler::geom::Size3 const&) const

## BRIEF

Возвращает сумму другого размера с текущим

## CONTENT

Возвращает сумму другого размера с текущим

Параметры:
* stappler::geom::Size3 const&

Возвращает:
* stappler::geom::Size3 - сумма размеров

# ::stappler::geom::Size3::operator-(stappler::geom::Size3 const&) const

## BRIEF

Возвращает разность текущего размера с другим

## CONTENT

Возвращает разность текущего размера с другим

Параметры:
* stappler::geom::Size3 const&

Возвращает:
* stappler::geom::Size3 - разность размеров

# ::stappler::geom::Size3::operator*(float) const

## BRIEF

Возвращает размер, покомпонентно умноженный на число

## CONTENT

Возвращает размер, покомпонентно умноженный на число

Параметры:
* float

Возвращает:
* stappler::geom::Size3 - размер, покомпонентно умноженный на число

# ::stappler::geom::Size3::operator/(float) const

## BRIEF

Возвращает размер, покомпонентно делённый на число

## CONTENT

Возвращает размер, покомпонентно делённый на число

Параметры:
* float

Возвращает:
* stappler::geom::Size3 - размер, покомпонентно делённый на число


# ::stappler::geom::Size3::fuzzyEquals(stappler::geom::Size3 const&,float) const

## BRIEF

Сравнивает размеры с погрешностью

## CONTENT

Сравнивает размеры с погрешностью

Параметры:
* stappler::geom::Size3 const& - другой размер
* float - погрешность

Возвращает:
* bool - true если разность между объектами не превышает погрешность


# ::stappler::geom::Extent2

## BRIEF

Структура целочисленного двумерного размера - ширины и высоты

## CONTENT

Структура целочисленного двумерного размера - ширины и высоты

# ::stappler::geom::Extent2::ZERO

## BRIEF

Статический нулевой размер

## CONTENT

Тип: stappler::geom::Extent2 const

Статический нулевой размер

# ::stappler::geom::Extent2::width

## BRIEF

Значение ширины

## CONTENT

Тип: uint32_t

Значение ширины

# ::stappler::geom::Extent2::height

## BRIEF

Значение высоты

## CONTENT

Тип: uint32_t

Значение высоты

# ::stappler::geom::Extent2::Extent2()

## BRIEF

Конструктор по умолчанию

## CONTENT

Конструктор по умолчанию, создаёт нулевой размер

# ::stappler::geom::Extent2::Extent2(uint32_t,uint32_t)

## BRIEF

Покомпонентный конструктор

## CONTENT

Покомпонентный конструктор

Параметры:
* uint32_t - ширина
* uint32_t - высота


# ::stappler::geom::Extent2::Extent2(stappler::geom::Extent2 const&)

## BRIEF

Конструктор копирования

## CONTENT

Конструктор копирования по умолчанию

Параметры:
* stappler::geom::Extent2 const&


# ::stappler::geom::Extent2::operator=(stappler::geom::Extent2 const&)

## BRIEF

Оператор копирования

## CONTENT

Оператор копирования по умолчанию

Параметры:
* stappler::geom::Extent2 const&

Возвращает:
* stappler::geom::Extent2& - ссылка на себя

# ::stappler::geom::Extent2::Extent2(stappler::geom::Size2 const&)

## BRIEF

Конструктор из нецелочисленного размера

## CONTENT

Конструктор из нецелочисленного размера. Обрезает нецелочисленные значения платформозависимым способом. Для достижения стабильности используйте ручное округление и покомпонентный конструктор.

Параметры:
* stappler::geom::Size2 const&


# ::stappler::geom::Extent2::Extent2(stappler::geom::Vec2 const&)

## BRIEF

Конструктор из точки

## CONTENT

Конструктор из точки. Интерпретирует точку как нецелочисленный размер. Обрезает нецелочисленные значения платформозависимым способом. Для достижения стабильности используйте ручное округление и покомпонентный конструктор.

Параметры:
* stappler::geom::Vec2 const& - вектор из ширины (X) и высоты (Y)


# ::stappler::geom::Extent2::operator=(stappler::geom::Size2 const&)

## BRIEF

Оператор копирования из нецелочисленного размера. Обрезает нецелочисленные значения платформозависимым способом. Для достижения стабильности используйте ручное округление и покомпонентный конструктор.

## CONTENT

Параметры:
* stappler::geom::Size2 const&

Возвращает:
* stappler::geom::Extent2& - ссылка на себя

# ::stappler::geom::Extent2::operator=(stappler::geom::Vec2 const&)

## BRIEF

Оператор копирования из точки

## CONTENT

Оператор копирования из точки. Интерпретирует точку как нецелочисленный размер. Обрезает нецелочисленные значения платформозависимым способом. Для достижения стабильности используйте ручное округление и покомпонентный конструктор.

Параметры:
* stappler::geom::Vec2 const& - вектор из ширины (X) и высоты (Y)

Возвращает:
* stappler::geom::Extent2& - ссылка на себя

# ::stappler::geom::Extent2::operator==(stappler::geom::Extent2 const&) const

## BRIEF

Сравнивает два размера

## CONTENT

Сравнивает два размера

Параметры:
* stappler::geom::Extent2 const&

Возвращает:
* bool - true если размеры совпадают

# ::stappler::geom::Extent2::operator!=(stappler::geom::Extent2 const&) const

## BRIEF

Сравнивает два размера

## CONTENT

Сравнивает два размера

Параметры:
* stappler::geom::Extent2 const&

Возвращает:
* bool - true если размеры не совпадают

# ::stappler::geom::Extent2::operator<=>(stappler::geom::Extent2 const&) const

## BRIEF

Сравнивает два размера

## CONTENT

Сравнивает два размера, автоматически порождает код, необходимый для лексикографического сравнения размеров

Параметры:
* stappler::geom::Extent2 const&

Возвращает:
* auto

# ::stappler::geom::Extent2::operator Size2() const

## BRIEF

Конвертирует размер в нецелочисленный

## CONTENT

Конвертирует размер в нецелочисленный

Возвращает:
* stappler::geom::Size2 - нецелочисленный эквивалент размера


# ::stappler::geom::Extent3

## BRIEF

Структура целочисленного трёхмерного размера - ширины, высоты и глубины

## CONTENT

Структура целочисленного трёхмерного размера - ширины, высоты и глубины

# ::stappler::geom::Extent3::ZERO

## BRIEF

Статический нулевой размер

## CONTENT

Тип: stappler::geom::Extent3 const

Статический нулевой размер

# ::stappler::geom::Extent3::width

## BRIEF

Значение ширины

## CONTENT

Тип: uint32_t

Значение ширины

# ::stappler::geom::Extent3::height

## BRIEF

Значение высоты

## CONTENT

Тип: uint32_t

Значение высоты

# ::stappler::geom::Extent3::depth

## BRIEF

Значение глубины

## CONTENT

Тип: uint32_t

Значение глубины

# ::stappler::geom::Extent3::Extent3()

## BRIEF

Конструктор по умолчанию

## CONTENT

Конструктор по умолчанию, создаёт нулевой размер

# ::stappler::geom::Extent3::Extent3(uint32_t,uint32_t,uint32_t)

## BRIEF

Поэлементный конструктор

## CONTENT

Поэлементный конструктор

Параметры:
* uint32_t - ширина
* uint32_t - высота
* uint32_t - глубина


# ::stappler::geom::Extent3::Extent3(stappler::geom::Extent2,uint32_t)

## BRIEF

Поэлементный конструктор

## CONTENT

Поэлементный конструктор

Параметры:
* stappler::geom::Extent2 - двумерный разме с шириной и высотой
* uint32_t - глубина


# ::stappler::geom::Extent3::Extent3(stappler::geom::Extent3 const&)

## BRIEF

Конструктор копирования

## CONTENT

Конструктор копирования по умолчанию

Параметры:
* stappler::geom::Extent3 const&


# ::stappler::geom::Extent3::operator=(stappler::geom::Extent3 const&)

## BRIEF

Оператор копирования

## CONTENT

Оператор копирования по умолчанию

Параметры:
* stappler::geom::Extent3 const&

Возвращает:
* stappler::geom::Extent3& - ссылка на себя

# ::stappler::geom::Extent3::Extent3(stappler::geom::Extent2 const&)

## BRIEF

Конструктор из двумерного размера

## CONTENT

Конструктор из двумерного размера, глубина инициализируется в единицу (1). Поведение обусловлено конвертацией одиночного двумерного изображения в массив изображений

Параметры:
* stappler::geom::Extent2 const& - двумерный размер с шириной и высотой


# ::stappler::geom::Extent3::operator=(stappler::geom::Extent2 const&)

## BRIEF

Копирование из двумерного размера

## CONTENT

Копирование из двумерного размера, глубина инициализируется в единицу (1). Поведение обусловлено конвертацией одиночного двумерного изображения в массив изображений.

Параметры:
* stappler::geom::Extent2 const& - двумерный размер с шириной и высотой

Возвращает:
* stappler::geom::Extent3& - ссылка на себя

# ::stappler::geom::Extent3::Extent3(stappler::geom::Size3 const&)

## BRIEF

Конструктор из нецелочисленного размера

## CONTENT

Конструктор из нецелочисленного размера. Обрезает нецелочисленные значения платформозависимым способом. Для достижения стабильности используйте ручное округление и покомпонентный конструктор.

Параметры:
* stappler::geom::Size3 const& - нецелочисленный размер


# ::stappler::geom::Extent3::Extent3(stappler::geom::Vec3 const&)

## BRIEF

Конструктор из нецелочисленной точки

## CONTENT

Конструктор из нецелочисленного точки. Обрезает нецелочисленные значения платформозависимым способом. Для достижения стабильности используйте ручное округление и покомпонентный конструктор.

Параметры:
* stappler::geom::Vec3 const& - вектор, интерпретируемый как точка в трёхмерном пространстве


# ::stappler::geom::Extent3::operator=(stappler::geom::Size3 const&)

## BRIEF

Копирование из нецелочисленного размера

## CONTENT

Копирование из нецелочисленного размера. Обрезает нецелочисленные значения платформозависимым способом. Для достижения стабильности используйте ручное округление и покомпонентный конструктор.

Параметры:
* stappler::geom::Size3 const& - нецелочисленный размер

Возвращает:
* stappler::geom::Extent3& - ссылка на себя

# ::stappler::geom::Extent3::operator=(stappler::geom::Vec3 const&)

## BRIEF

Копирование из нецелочисленной точки

## CONTENT

Копирование из нецелочисленной точки. Обрезает нецелочисленные значения платформозависимым способом. Для достижения стабильности используйте ручное округление и покомпонентный конструктор.

Параметры:
* stappler::geom::Vec3 const& - вектор, интерпретируемый как точка в трёхмерном пространстве

Возвращает:
* stappler::geom::Extent3& - ссылка на себя

# ::stappler::geom::Extent3::operator==(stappler::geom::Extent3 const&) const

## BRIEF

Сравнивает два размера

## CONTENT

Сравнивает два размера

Параметры:
* stappler::geom::Extent3 const&

Возвращает:
* bool - true если размеры совпадают

# ::stappler::geom::Extent3::operator!=(stappler::geom::Extent3 const&) const

## BRIEF

Сравнивает два размера

## CONTENT

Сравнивает два размера

Параметры:
* stappler::geom::Extent3 const&

Возвращает:
* bool - true если размеры не совпадают

# ::stappler::geom::Extent3::operator<=>(stappler::geom::Extent3 const&) const

## BRIEF

Сравнивает два размера

## CONTENT

Сравнивает два размера, автоматически порождает код, необходимый для лексикографического сравнения размеров

Параметры:
* stappler::geom::Extent3 const&

Возвращает:
* auto

# ::stappler::geom::Extent3::operator Size3() const

## BRIEF

Конвертирует целочисленный размер в нецелочисленный

## CONTENT

Конвертирует целочисленный размер в нецелочисленный

Возвращает:
* stappler::geom::Size3 - соотвествующий нецелочисленный размер


# ::stappler::geom::Rect

## BRIEF

Структура прямоугольника

## CONTENT

Структура прямоугольника, определённого через исходную точку и положительный размер. Использование отрицательного размера ведёт к ошибкам.

# ::stappler::geom::Rect::ZERO

## BRIEF

Статический нулевой прямоугольник

## CONTENT

Тип: stappler::geom::Rect const

Статический нулевой прямоугольник, все компоненты равны нулю

# ::stappler::geom::Rect::origin

## BRIEF

Исходная точка прямоугольника

## CONTENT

Тип: stappler::geom::Vec2

Исходная точка прямоугольника

# ::stappler::geom::Rect::size

## BRIEF

Размер прямоугольника

## CONTENT

Тип: stappler::geom::Size2

Размер прямоугольника

# ::stappler::geom::Rect::Rect()

## BRIEF

Конструктор по умолчанию

## CONTENT

Конструктор по умолчанию, создаёт нулевой прямоугольник

# ::stappler::geom::Rect::Rect(float,float,float,float)

## BRIEF

Покомпонентный конструктор

## CONTENT

Покомпонентный конструктор

Параметры:
* float - x
* float - y
* float - ширина
* float - высота


# ::stappler::geom::Rect::Rect(stappler::geom::Vec2 const&,stappler::geom::Size2 const&)

## BRIEF

Покомпонентный конструктор

## CONTENT

Покомпонентный конструктор

Параметры:
* stappler::geom::Vec2 const& - исходная точка прямоугольника
* stappler::geom::Size2 const& - размер прямоугольника


# ::stappler::geom::Rect::Rect(stappler::geom::Rect const&)

## BRIEF

Конструктор копирования

## CONTENT

Конструктор копирования по умолчанию

Параметры:
* stappler::geom::Rect const&


# ::stappler::geom::Rect::Rect<typename>(stappler::geom::Rect const&,Functor const&)

## BRIEF

Применяет функтор к прямоугольнику

## CONTENT

Применяет функтор к прямоугольнику

Параметры шаблона:
* typename Functor - функтор, принимающий и возвращающий float

Параметры:
* stappler::geom::Rect const& - исходный прямоугольник
* Functor const& - функтор


# ::stappler::geom::Rect::operator=(stappler::geom::Rect const&)

## BRIEF

Оператор копирования

## CONTENT

Оператор копирования по умолчанию

Параметры:
* stappler::geom::Rect const&

Возвращает:
* stappler::geom::Rect& - ссылка на себя

# ::stappler::geom::Rect::getMaxX() const

## BRIEF

Возвращает максимальную координату X прямоугольника

## CONTENT

Возвращает максимальную координату X прямоугольника

Возвращает:
* float - максимальное значение по оси X для прямоугольника

# ::stappler::geom::Rect::getMidX() const

## BRIEF

Возвращает координату X середины прямоугольника

## CONTENT

Возвращает координату X середины прямоугольника

Возвращает:
* float - значение X середины прямоугольника

# ::stappler::geom::Rect::getMinX() const

## BRIEF

Возвращает минимальную координату X прямоугольника

## CONTENT

Возвращает минимальную координату X прямоугольника

Возвращает:
* float - минимальное значение по оси X для прямоугольника

# ::stappler::geom::Rect::getMaxY() const

## BRIEF

Возвращает максимальную координату Y прямоугольника

## CONTENT

Возвращает максимальную координату Y прямоугольника

Возвращает:
* float - максимальное значение по оси Y для прямоугольника

# ::stappler::geom::Rect::getMidY() const

## BRIEF

Возвращает координату Y середины прямоугольника

## CONTENT

Возвращает координату Y середины прямоугольника

Возвращает:
* float - значение Y середины прямоугольника

# ::stappler::geom::Rect::getMinY() const

## BRIEF

Возвращает минимальную координату Y прямоугольника

## CONTENT

Возвращает минимальную координату Y прямоугольника

Возвращает:
* float - минимальное значение по оси Y для прямоугольника


# ::stappler::geom::Rect::equals(stappler::geom::Rect const&) const

## BRIEF

Сравнивает два прямоугольника

## CONTENT

Сравнивает два прямоугольника

Параметры:
* stappler::geom::Rect const&

Возвращает:
* bool - true если прямоугольники равны

# ::stappler::geom::Rect::containsPoint(stappler::geom::Vec2 const&) const

## BRIEF

Проверяет, содержит ли прямоугольник заданную точку

## CONTENT

Проверяет, содержит ли прямоугольник заданную точку

Параметры:
* stappler::geom::Vec2 const& - двумерная точка

Возвращает:
* bool - true если точка лежит внутри или на границе прямоугольника

# ::stappler::geom::Rect::intersectsRect(stappler::geom::Rect const&) const

## BRIEF

Проверяет, пересекаются ли прямоугольники

## CONTENT

Проверяет, пересекаются ли прямоугольники

Параметры:
* stappler::geom::Rect const&

Возвращает:
* bool - true если прямоугольники пересекаются

# ::stappler::geom::Rect::intersectsCircle(stappler::geom::Vec2 const&,float) const

## BRIEF

Проверяет, пересекаются ли прямоугольник и круг

## CONTENT

Проверяет, пересекаются ли прямоугольник и круг

Параметры:
* stappler::geom::Vec2 const& - центр круга
* float - радиус круга

Возвращает:
* bool - true если прямоугольник и круг пересекаются

# ::stappler::geom::Rect::unionWithRect(stappler::geom::Rect const&) const

## BRIEF

Возвращает прямоугольник, вмещающий оба заданных прямоугольника

## CONTENT

Возвращает прямоугольник, вмещающий оба заданных прямоугольника

Параметры:
* stappler::geom::Rect const&

Возвращает:
* stappler::geom::Rect - прямоугольник, вмещающий оба заданных прямоугольника

# ::stappler::geom::Rect::merge(stappler::geom::Rect const&)

## BRIEF

Соединяет текущий прямоугольник с другим, превращая его в общий прямоугольник

## CONTENT

Соединяет текущий прямоугольник с другим, превращая его в общий прямоугольник

Параметры:
* stappler::geom::Rect const&


# ::stappler::geom::UVec2

## BRIEF

Структура целочисленной двумерной точки

## CONTENT

Структура целочисленной двумерной точки (X, Y)

# ::stappler::geom::UVec2::x

## BRIEF

Значение X

## CONTENT

Тип: uint32_t

Значение X

# ::stappler::geom::UVec2::y

## BRIEF

Значение Y

## CONTENT

Тип: uint32_t

Значение Y


# ::stappler::geom::URect::URect()

## BRIEF

Конструктор по умолчанию

## CONTENT

Конструктор по умолчанию


# ::stappler::geom::URect::URect(stappler::geom::UVec2 const&,stappler::geom::Extent2 const&)

## BRIEF

Конструктор прямоугольника из точки и размера

## CONTENT

Конструктор прямоугольника из точки и размера

Параметры:
* stappler::geom::UVec2 const& - исходная точка
* stappler::geom::Extent2 const& - размер


# ::stappler::geom::URect::URect(uint32_t,uint32_t,uint32_t,uint32_t)

## BRIEF

Конструктор из параметров

## CONTENT

Конструктор из параметров

Параметры:
* uint32_t - x
* uint32_t - y
* uint32_t - ширина
* uint32_t - высота


# ::stappler::geom::UVec2::operator==(stappler::geom::UVec2 const&) const

## BRIEF

Сравнивает две точки

## CONTENT

Сравнивает две точки

Параметры:
* stappler::geom::UVec2 const&

Возвращает:
* bool - true если точки равны

# ::stappler::geom::UVec2::operator!=(stappler::geom::UVec2 const&) const

## BRIEF

Сравнивает две точки

## CONTENT

Сравнивает две точки

Параметры:
* stappler::geom::UVec2 const&

Возвращает:
* bool - true если точки не равны

# ::stappler::geom::URect

## BRIEF

Структура целочисленного двумерного прямоугольника

## CONTENT

Структура целочисленного двумерного прямоугольника, заданного через исходную точку и положительный размер. Использование отрицательного размера ведёт к ошибкам.

# ::stappler::geom::URect::x

## BRIEF

Исходная координата X

## CONTENT

Тип: uint32_t

Исходная координата X

# ::stappler::geom::URect::y

## BRIEF

Исходная координата Y

## CONTENT

Тип: uint32_t

Исходная координата Y

# ::stappler::geom::URect::width

## BRIEF

Значение ширины

## CONTENT

Тип: uint32_t

Значение ширины

# ::stappler::geom::URect::height

## BRIEF

Значение высоты

## CONTENT

Тип: uint32_t

Значение высоты

# ::stappler::geom::URect::origin() const

## BRIEF

Возвращает исходную точку прямоугольника

## CONTENT

Возвращает исходную точку прямоугольника

Возвращает:
* stappler::geom::UVec2 - исходная точка прямоугольника

# ::stappler::geom::URect::operator==(stappler::geom::URect const&) const

## BRIEF

Сравнивает два прямоугольника

## CONTENT

Сравнивает два прямоугольника

Параметры:
* stappler::geom::URect const&

Возвращает:
* bool - true если прямоугольники совпадают

# ::stappler::geom::URect::operator!=(stappler::geom::URect const&) const

## BRIEF

Сравнивает два прямоугольника

## CONTENT

Сравнивает два прямоугольника

Параметры:
* stappler::geom::URect const&

Возвращает:
* bool - true если прямоугольники совпадают

# ::stappler::geom::URect::getMaxX() const

## BRIEF

Возвращает максимальное значение X прямоугольника

## CONTENT

Возвращает максимальное значение X прямоугольника

Возвращает:
* float - максимальное значение X

# ::stappler::geom::URect::getMidX() const

## BRIEF

Возвращает координату X середины прямоугольника

## CONTENT

Возвращает координату X середины прямоугольника

Возвращает:
* float - значение X середины прямоугольника

# ::stappler::geom::URect::getMinX() const

## BRIEF

Возвращает минимальное значение X прямоугольника

## CONTENT

Возвращает минимальное значение X прямоугольника

Возвращает:
* float - минимальное значение X

# ::stappler::geom::URect::getMaxY() const

## BRIEF

Возвращает максимальное значение Y прямоугольника

## CONTENT

Возвращает максимальное значение Y прямоугольника

Возвращает:
* float - максимальное значение Y

# ::stappler::geom::URect::getMidY() const

## BRIEF

Возвращает координату Y середины прямоугольника

## CONTENT

Возвращает координату Y середины прямоугольника

Возвращает:
* float - координата Y середины прямоугольника

# ::stappler::geom::URect::getMinY() const

## BRIEF

Возвращает минимальное значение Y прямоугольника

## CONTENT

Возвращает минимальное значение Y прямоугольника

Возвращает:
* float - минимальное значение Y

# ::stappler::geom::URect::containsPoint(stappler::geom::UVec2 const&) const

## BRIEF

Проверяет, лежит ли точка в прямоугольнике

## CONTENT

Проверяет, лежит ли точка в прямоугольнике или на его границах

Параметры:
* stappler::geom::UVec2 const&

Возвращает:
* bool - true если точка лежит в прямоугольнике

# ::stappler::geom::URect::intersectsRect(stappler::geom::URect const&) const

## BRIEF

Проверяет, пересекаются ли прямоугольники

## CONTENT

Проверяет, пересекаются ли прямоугольники

Параметры:
* stappler::geom::URect const&

Возвращает:
* bool - true если прямоугольники пересекаются

# ::stappler::geom::TransformRect(stappler::geom::Rect const&,stappler::geom::Mat4 const&)

## BRIEF

Трансформирует прямоугольник с помощью матрицы трансформации

## CONTENT

Трансформирует прямоугольник с помощью матрицы трансформации

Параметры:
* stappler::geom::Rect const& - прямоугольник
* stappler::geom::Mat4 const& - матрица трансформации

Возвращает:
* stappler::geom::Rect - трансформированный прямоугольник

# ::stappler::geom::operator<<(std::ostream&,stappler::geom::Rect const&)

## BRIEF

Выводит данные прямоугольника в текстовый поток

## CONTENT

Выводит данные прямоугольника в текстовый поток

Параметры:
* std::ostream&
* stappler::geom::Rect const&

Возвращает:
* std::ostream&

# ::stappler::geom::operator<<(std::ostream&,stappler::geom::Size2 const&)

## BRIEF

Выводит размер в текстовый поток

## CONTENT

Выводит размер в текстовый поток

Параметры:
* std::ostream&
* stappler::geom::Size2 const&

Возвращает:
* std::ostream&

# ::stappler::geom::operator<<(std::ostream&,stappler::geom::Size3 const&)

## BRIEF

Выводит размер в текстовый поток

## CONTENT

Выводит размер в текстовый поток

Параметры:
* std::ostream&
* stappler::geom::Size3 const&

Возвращает:
* std::ostream&

# ::stappler::geom::operator<<(std::ostream&,stappler::geom::Extent2 const&)

## BRIEF

Выводит целочисленный размер в текстовый поток

## CONTENT

Выводит целочисленный размер в текстовый поток

Параметры:
* std::ostream&
* stappler::geom::Extent2 const&

Возвращает:
* std::ostream&

# ::stappler::geom::operator<<(std::ostream&,stappler::geom::Extent3 const&)

## BRIEF

Выводит целочисленный размер в текстовый поток

## CONTENT

Выводит целочисленный размер в текстовый поток

Параметры:
* std::ostream&
* stappler::geom::Extent3 const&

Возвращает:
* std::ostream&
