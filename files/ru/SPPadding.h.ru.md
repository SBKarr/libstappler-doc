Title: SPPadding.h


# STAPPLER_GEOM_SPPADDING_H_

## BRIEF

Заголовок типа контроля отступов

## CONTENT

Заголовок типа контроля отступов


# ::stappler::geom::Padding

## BRIEF

Геометрический тип контроля отступов

## CONTENT

Геометрический тип контроля отступов


# ::stappler::geom::Padding::top

## BRIEF

Отступ сверху

## CONTENT

Отступ сверху

Тип: float


# ::stappler::geom::Padding::right

## BRIEF

Отступ справа

## CONTENT

Отступ справа

Тип: float


# ::stappler::geom::Padding::bottom

## BRIEF

Отступ снизу

## CONTENT

Отступ снизу

Тип: float


# ::stappler::geom::Padding::left

## BRIEF

Отступ слева

## CONTENT

Отступ слева

Тип: float


# ::stappler::geom::Padding::horizontal() const

## BRIEF

Возвращает полный горизонтальный отступ

## CONTENT

Возвращает полный горизонтальный отступ

Возвращает:
* float

# ::stappler::geom::Padding::vertical() const

## BRIEF

Возвращает полный вертикальный отступ

## CONTENT

Возвращает полный вертикальный отступ

Возвращает:
* float

# ::stappler::geom::Padding::getBottomLeft(stappler::geom::Size2 const&) const

## BRIEF

Возвращает координаты нижней левой точки для заданного размера с учётом отступа

## CONTENT

Возвращает координаты нижней левой точки для заданного размера с учётом отступа

Параметры:
* stappler::geom::Size2 const&

Возвращает:
* stappler::geom::Vec2

# ::stappler::geom::Padding::getTopLeft(stappler::geom::Size2 const&) const

## BRIEF

Возвращает координаты верхней левой точки для заданного размера с учётом отступа

## CONTENT

Возвращает координаты верхней левой точки для заданного размера с учётом отступа

Параметры:
* stappler::geom::Size2 const&

Возвращает:
* stappler::geom::Vec2

# ::stappler::geom::Padding::getBottomRight(stappler::geom::Size2 const&) const

## BRIEF

Возвращает координаты нижней правой точки для заданного размера с учётом отступа

## CONTENT

Возвращает координаты нижней правой точки для заданного размера с учётом отступа

Параметры:
* stappler::geom::Size2 const&

Возвращает:
* stappler::geom::Vec2

# ::stappler::geom::Padding::getTopRight(stappler::geom::Size2 const&) const

## BRIEF

Возвращает координаты верхней правой точки для заданного размера с учётом отступа

## CONTENT

Возвращает координаты верхней правой точки для заданного размера с учётом отступа

Параметры:
* stappler::geom::Size2 const&

Возвращает:
* stappler::geom::Vec2

# ::stappler::geom::Padding::setTop(float)

## BRIEF

Устанавливает отступ сверху

## CONTENT

Устанавливает отступ сверху

Параметры:
* float

Возвращает:
* stappler::geom::Padding&

# ::stappler::geom::Padding::setBottom(float)

## BRIEF

Устанавливает отступ снизу

## CONTENT

Устанавливает отступ снизу

Параметры:
* float

Возвращает:
* stappler::geom::Padding&

# ::stappler::geom::Padding::setLeft(float)

## BRIEF

Устанавливает отступ слева

## CONTENT

Устанавливает отступ слева

Параметры:
* float

Возвращает:
* stappler::geom::Padding&

# ::stappler::geom::Padding::setRight(float)

## BRIEF

Устанавливает отступ справа

## CONTENT

Устанавливает отступ справа

Параметры:
* float

Возвращает:
* stappler::geom::Padding&

# ::stappler::geom::Padding::set(float,float,float,float)

## BRIEF

Устанавливает все отступы

## CONTENT

Устанавливает все отступы

Параметры:
* float - верхний
* float - правый
* float - нижний
* float - левый

Возвращает:
* stappler::geom::Padding&

# ::stappler::geom::Padding::set(float,float,float)

## BRIEF

Устанавливает все отступы

## CONTENT

Устанавливает все отступы

Параметры:
* float - верхний
* float - левый и правый
* float - нижний

Возвращает:
* stappler::geom::Padding&

# ::stappler::geom::Padding::set(float,float)

## BRIEF

Устанавливает все отступы

## CONTENT

Устанавливает все отступы

Параметры:
* float - верхний и нижний
* float - левый и правый

Возвращает:
* stappler::geom::Padding&

# ::stappler::geom::Padding::set(float)

## BRIEF

Устанавливает все отступы

## CONTENT

Устанавливает все отступы

Параметры:
* float - значение для всех отступов

Возвращает:
* stappler::geom::Padding&

# ::stappler::geom::Padding::Padding(float,float,float,float)

## BRIEF

Конструктор отступа

## CONTENT

Конструктор отступа

Параметры:
* float - верхний
* float - правый
* float - нижний
* float - левый


# ::stappler::geom::Padding::Padding(float,float,float)

## BRIEF

Конструктор отступа

## CONTENT

Конструктор отступа

Параметры:
* float - верхний
* float - левый и правый
* float - нижний


# ::stappler::geom::Padding::Padding(float,float)

## BRIEF

Конструктор отступа

## CONTENT

Конструктор отступа

Параметры:
* float - верхний и нижний
* float - левый и правый


# ::stappler::geom::Padding::Padding(float)

## BRIEF

Конструктор отступа

## CONTENT

Конструктор отступа

Параметры:
* float - значение для всех отступов


# ::stappler::geom::Padding::Padding()

## BRIEF

Деструктор

## CONTENT

Деструктор


# ::stappler::geom::Padding::Padding(stappler::geom::Padding const&)

## BRIEF

Конструктор копирования

## CONTENT

Конструктор копирования

Параметры:
* stappler::geom::Padding const&


# ::stappler::geom::Padding::operator==(stappler::geom::Padding const&) const

## BRIEF

Сравнивает два отступа

## CONTENT

Сравнивает два отступа

Параметры:
* stappler::geom::Padding const&

Возвращает:
* bool

# ::stappler::geom::Padding::operator!=(stappler::geom::Padding const&) const

## BRIEF

Сравнивает два отступа

## CONTENT

Сравнивает два отступа

Параметры:
* stappler::geom::Padding const&

Возвращает:
* bool

# ::stappler::geom::Padding::operator*=(float)

## BRIEF

Умножает все отступы на значение

## CONTENT

Умножает все отступы на значение

Параметры:
* float

Возвращает:
* stappler::geom::Padding&

# ::stappler::geom::Padding::operator/=(float)

## BRIEF

Делит все отступы на значение

## CONTENT

Делит все отступы на значение

Параметры:
* float

Возвращает:
* stappler::geom::Padding&

# ::stappler::geom::Padding::operator*(float)

## BRIEF

Умножает отступы на значение

## CONTENT

Умножает отступы на значение

Параметры:
* float

Возвращает:
* stappler::geom::Padding

# ::stappler::geom::Padding::operator/(float)

## BRIEF

Делит отступы на значение

## CONTENT

Делит отступы на значение

Параметры:
* float

Возвращает:
* stappler::geom::Padding

# ::stappler::geom::Margin

## BRIEF

Альтернативное название

## CONTENT

Альтернативное название
