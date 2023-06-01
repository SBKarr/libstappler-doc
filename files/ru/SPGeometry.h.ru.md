Title: SPGeometry.h


# STAPPLER_GEOM_SPGEOMETRY_H_

## BRIEF

Макрос защиты заголовка

## CONTENT

Макрос защиты заголовка

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


# ::stappler::geom::Size2::operator Vec2() const

## BRIEF

Конвертирует размер в вектор

## CONTENT

Конвертирует размер в вектор

Возвращает:
* stappler::geom::Vec2 вектор из ширины (X) и высоты (Y)

# ::stappler::geom::Size2::operator==(stappler::geom::Size2 const&) const

## BRIEF

Сравнивает два размера

## CONTENT

Сравнивает два размера

Параметры:
* stappler::geom::Size2 const&

Возвращает:
* bool - true если размеры совпадают

# ::stappler::geom::Size2::operator!=(stappler::geom::Size2 const&) const

## BRIEF

Сравнивает два размера

## CONTENT

Сравнивает два размера

Параметры:
* stappler::geom::Size2 const&

Возвращает:
* bool - true если размеры не совпадают

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


# ::stappler::geom::Size2::equals(stappler::geom::Size2 const&) const

## BRIEF

Сравнивает текущий размер с другим

## CONTENT

Сравнивает текущий размер с другим

Параметры:
* stappler::geom::Size2 const&

Возвращает:
* bool - true если размеры совпадают

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


# ::stappler::geom::Size3::operator Vec3() const

## BRIEF

Конвертация в вектор

## CONTENT

Конвертация в вектор. Интерпретирует размер как точку в пространстве.

Возвращает:
* stappler::geom::Vec3 - вектор из ширины (X), высоты (Y) и глубины (Z)

# ::stappler::geom::Size3::operator==(stappler::geom::Size3 const&) const

## BRIEF

Сравнивает размеры

## CONTENT

Сравнивает размеры

Параметры:
* stappler::geom::Size3 const&

Возвращает:
* bool - true если размеры совпадают

# ::stappler::geom::Size3::operator!=(stappler::geom::Size3 const&) const

## BRIEF

Сравнивает размеры

## CONTENT

Сравнивает размеры

Параметры:
* stappler::geom::Size3 const&

Возвращает:
* bool - true если размеры не совпадают

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

# ::stappler::geom::Size3::equals(stappler::geom::Size3 const&) const

## BRIEF

Сравнивает текущий размер с другим

## CONTENT

Сравнивает текущий размер с другим

Параметры:
* stappler::geom::Size3 const&

Возвращает:
* bool - true если размеры совпадают


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

## CONTENT


# ::stappler::geom::Extent3::ZERO

## BRIEF

## CONTENT

Тип: stappler::geom::Extent3 const


# ::stappler::geom::Extent3::width

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::geom::Extent3::height

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::geom::Extent3::depth

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::geom::Extent3::Extent3()

## BRIEF

## CONTENT


# ::stappler::geom::Extent3::Extent3(uint32_t,uint32_t,uint32_t)

## BRIEF

## CONTENT

Параметры:
* uint32_t
* uint32_t
* uint32_t


# ::stappler::geom::Extent3::Extent3(stappler::geom::Extent2,uint32_t)

## BRIEF

## CONTENT

Параметры:
* stappler::geom::Extent2
* uint32_t


# ::stappler::geom::Extent3::Extent3(stappler::geom::Extent3 const&)

## BRIEF

## CONTENT

Параметры:
* stappler::geom::Extent3 const&


# ::stappler::geom::Extent3::operator=(stappler::geom::Extent3 const&)

## BRIEF

## CONTENT

Параметры:
* stappler::geom::Extent3 const&

Возвращает:
* stappler::geom::Extent3&

# ::stappler::geom::Extent3::Extent3(stappler::geom::Extent2 const&)

## BRIEF

## CONTENT

Параметры:
* stappler::geom::Extent2 const&


# ::stappler::geom::Extent3::operator=(stappler::geom::Extent2 const&)

## BRIEF

## CONTENT

Параметры:
* stappler::geom::Extent2 const&

Возвращает:
* stappler::geom::Extent3&

# ::stappler::geom::Extent3::Extent3(stappler::geom::Size3 const&)

## BRIEF

## CONTENT

Параметры:
* stappler::geom::Size3 const&


# ::stappler::geom::Extent3::Extent3(stappler::geom::Vec3 const&)

## BRIEF

## CONTENT

Параметры:
* stappler::geom::Vec3 const&


# ::stappler::geom::Extent3::operator=(stappler::geom::Size3 const&)

## BRIEF

## CONTENT

Параметры:
* stappler::geom::Size3 const&

Возвращает:
* stappler::geom::Extent3&

# ::stappler::geom::Extent3::operator=(stappler::geom::Vec3 const&)

## BRIEF

## CONTENT

Параметры:
* stappler::geom::Vec3 const&

Возвращает:
* stappler::geom::Extent3&

# ::stappler::geom::Extent3::operator==(stappler::geom::Extent3 const&) const

## BRIEF

## CONTENT

Параметры:
* stappler::geom::Extent3 const&

Возвращает:
* bool

# ::stappler::geom::Extent3::operator!=(stappler::geom::Extent3 const&) const

## BRIEF

## CONTENT

Параметры:
* stappler::geom::Extent3 const&

Возвращает:
* bool

# ::stappler::geom::Extent3::operator<=>(stappler::geom::Extent3 const&) const

## BRIEF

## CONTENT

Параметры:
* stappler::geom::Extent3 const&

Возвращает:
* auto

# ::stappler::geom::Extent3::operator Size3() const

## BRIEF

## CONTENT

Возвращает:
* stappler::geom::Size3

# ::stappler::geom::ZERO

## BRIEF

## CONTENT

Тип: stappler::geom::Extent3 const


# ::stappler::geom::Rect

## BRIEF

## CONTENT


# ::stappler::geom::Rect::ZERO

## BRIEF

## CONTENT

Тип: stappler::geom::Rect const


# ::stappler::geom::Rect::origin

## BRIEF

## CONTENT

Тип: stappler::geom::Vec2


# ::stappler::geom::Rect::size

## BRIEF

## CONTENT

Тип: stappler::geom::Size2


# ::stappler::geom::Rect::Rect()

## BRIEF

## CONTENT


# ::stappler::geom::Rect::Rect(float,float,float,float)

## BRIEF

## CONTENT

Параметры:
* float
* float
* float
* float


# ::stappler::geom::Rect::Rect(stappler::geom::Vec2 const&,stappler::geom::Size2 const&)

## BRIEF

## CONTENT

Параметры:
* stappler::geom::Vec2 const&
* stappler::geom::Size2 const&


# ::stappler::geom::Rect::Rect(stappler::geom::Rect const&)

## BRIEF

## CONTENT

Параметры:
* stappler::geom::Rect const&


# ::stappler::geom::Rect::operator=(stappler::geom::Rect const&)

## BRIEF

## CONTENT

Параметры:
* stappler::geom::Rect const&

Возвращает:
* stappler::geom::Rect&

# ::stappler::geom::Rect::getMaxX() const

## BRIEF

## CONTENT

Возвращает:
* float

# ::stappler::geom::Rect::getMidX() const

## BRIEF

## CONTENT

Возвращает:
* float

# ::stappler::geom::Rect::getMinX() const

## BRIEF

## CONTENT

Возвращает:
* float

# ::stappler::geom::Rect::getMaxY() const

## BRIEF

## CONTENT

Возвращает:
* float

# ::stappler::geom::Rect::getMidY() const

## BRIEF

## CONTENT

Возвращает:
* float

# ::stappler::geom::Rect::getMinY() const

## BRIEF

## CONTENT

Возвращает:
* float

# ::stappler::geom::Rect::equals(stappler::geom::Rect const&) const

## BRIEF

## CONTENT

Параметры:
* stappler::geom::Rect const&

Возвращает:
* bool

# ::stappler::geom::Rect::containsPoint(stappler::geom::Vec2 const&) const

## BRIEF

## CONTENT

Параметры:
* stappler::geom::Vec2 const&

Возвращает:
* bool

# ::stappler::geom::Rect::intersectsRect(stappler::geom::Rect const&) const

## BRIEF

## CONTENT

Параметры:
* stappler::geom::Rect const&

Возвращает:
* bool

# ::stappler::geom::Rect::intersectsCircle(stappler::geom::Vec2 const&,float) const

## BRIEF

## CONTENT

Параметры:
* stappler::geom::Vec2 const&
* float

Возвращает:
* bool

# ::stappler::geom::Rect::unionWithRect(stappler::geom::Rect const&) const

## BRIEF

## CONTENT

Параметры:
* stappler::geom::Rect const&

Возвращает:
* stappler::geom::Rect

# ::stappler::geom::Rect::merge(stappler::geom::Rect const&)

## BRIEF

## CONTENT

Параметры:
* stappler::geom::Rect const&


# ::stappler::geom::ZERO

## BRIEF

## CONTENT

Тип: stappler::geom::Rect const


# ::stappler::geom::UVec2

## BRIEF

## CONTENT


# ::stappler::geom::UVec2::x

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::geom::UVec2::y

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::geom::UVec2::operator==(stappler::geom::UVec2 const&) const

## BRIEF

## CONTENT

Параметры:
* stappler::geom::UVec2 const&

Возвращает:
* bool

# ::stappler::geom::UVec2::operator!=(stappler::geom::UVec2 const&) const

## BRIEF

## CONTENT

Параметры:
* stappler::geom::UVec2 const&

Возвращает:
* bool

# ::stappler::geom::URect

## BRIEF

## CONTENT


# ::stappler::geom::URect::x

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::geom::URect::y

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::geom::URect::width

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::geom::URect::height

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::geom::URect::origin() const

## BRIEF

## CONTENT

Возвращает:
* stappler::geom::UVec2

# ::stappler::geom::URect::operator==(stappler::geom::URect const&) const

## BRIEF

## CONTENT

Параметры:
* stappler::geom::URect const&

Возвращает:
* bool

# ::stappler::geom::URect::operator!=(stappler::geom::URect const&) const

## BRIEF

## CONTENT

Параметры:
* stappler::geom::URect const&

Возвращает:
* bool

# ::stappler::geom::URect::getMaxX() const

## BRIEF

## CONTENT

Возвращает:
* float

# ::stappler::geom::URect::getMidX() const

## BRIEF

## CONTENT

Возвращает:
* float

# ::stappler::geom::URect::getMinX() const

## BRIEF

## CONTENT

Возвращает:
* float

# ::stappler::geom::URect::getMaxY() const

## BRIEF

## CONTENT

Возвращает:
* float

# ::stappler::geom::URect::getMidY() const

## BRIEF

## CONTENT

Возвращает:
* float

# ::stappler::geom::URect::getMinY() const

## BRIEF

## CONTENT

Возвращает:
* float

# ::stappler::geom::URect::containsPoint(stappler::geom::UVec2 const&) const

## BRIEF

## CONTENT

Параметры:
* stappler::geom::UVec2 const&

Возвращает:
* bool

# ::stappler::geom::URect::intersectsRect(stappler::geom::URect const&) const

## BRIEF

## CONTENT

Параметры:
* stappler::geom::URect const&

Возвращает:
* bool

# ::stappler::geom::TransformRect(stappler::geom::Rect const&,stappler::geom::Mat4 const&)

## BRIEF

## CONTENT

Параметры:
* stappler::geom::Rect const&
* stappler::geom::Mat4 const&

Возвращает:
* stappler::geom::Rect

# ::stappler::geom::operator<<(std::ostream&,stappler::geom::Rect const&)

## BRIEF

## CONTENT

Параметры:
* std::ostream&
* stappler::geom::Rect const&

Возвращает:
* std::ostream&

# ::stappler::geom::operator<<(std::ostream&,stappler::geom::Size2 const&)

## BRIEF

## CONTENT

Параметры:
* std::ostream&
* stappler::geom::Size2 const&

Возвращает:
* std::ostream&

# ::stappler::geom::operator<<(std::ostream&,stappler::geom::Size3 const&)

## BRIEF

## CONTENT

Параметры:
* std::ostream&
* stappler::geom::Size3 const&

Возвращает:
* std::ostream&

# ::stappler::geom::operator<<(std::ostream&,stappler::geom::Extent2 const&)

## BRIEF

## CONTENT

Параметры:
* std::ostream&
* stappler::geom::Extent2 const&

Возвращает:
* std::ostream&

# ::stappler::geom::operator<<(std::ostream&,stappler::geom::Extent3 const&)

## BRIEF

## CONTENT

Параметры:
* std::ostream&
* stappler::geom::Extent3 const&

Возвращает:
* std::ostream&

# ::stappler::geom::Size

## BRIEF

## CONTENT
