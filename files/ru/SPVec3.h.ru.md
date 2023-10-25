Title: SPVec3.h


# STAPPLER_GEOM_SPVEC3_H_

## BRIEF

Заголовок, описывающий структуру трёхкомпонентного вектора

## CONTENT

Заголовок, описывающий структуру трёхкомпонентного вектора

# ::stappler::geom::Vec3

## BRIEF

Класс трёхкомпонентного вектора

## CONTENT

Класс трёхкомпонентного вектора: x, y, z. Чаще всего используется для представления точки в трёхмерном пространстве.

# ::stappler::geom::Vec3::ZERO

## BRIEF

Статический нулевой вектор

## CONTENT

Доступ: public

Тип: stappler::geom::Vec3 const

Статический нулевой вектор (0, 0, 0)

# ::stappler::geom::Vec3::ONE

## BRIEF

Статический вектор из единиц

## CONTENT

Доступ: public

Тип: stappler::geom::Vec3 const

Статический вектор из единиц (1, 1, 1)

# ::stappler::geom::Vec3::UNIT_X

## BRIEF

Статический единичный вектор по X

## CONTENT

Доступ: public

Тип: stappler::geom::Vec3 const

Статический единичный вектор по X (1, 0, 0)

# ::stappler::geom::Vec3::UNIT_Y

## BRIEF

Статический единичный вектор по Y

## CONTENT

Доступ: public

Тип: stappler::geom::Vec3 const

Статический единичный вектор по Y (0, 1, 0)

# ::stappler::geom::Vec3::UNIT_Z

## BRIEF

Статический единичный вектор по Z

## CONTENT

Доступ: public

Тип: stappler::geom::Vec3 const

Статический единичный вектор по Z (0, 0, 1)

# ::stappler::geom::Vec3::add(stappler::geom::Vec3 const&,stappler::geom::Vec3 const&,stappler::geom::Vec3*)

## BRIEF

Суммирует два вектора

## CONTENT

Доступ: public

Суммирует два вектора, сохраняет результат по указателю

Параметры:
* stappler::geom::Vec3 const&
* stappler::geom::Vec3 const&
* stappler::geom::Vec3* - указатель для сохранения результата


# ::stappler::geom::Vec3::subtract(stappler::geom::Vec3 const&,stappler::geom::Vec3 const&,stappler::geom::Vec3*)

## BRIEF

Вычитает два вектора

## CONTENT

Доступ: public

Вычитает два вектора, сохраняет результат по указателю

Параметры:
* stappler::geom::Vec3 const&
* stappler::geom::Vec3 const&
* stappler::geom::Vec3* - указатель для сохранения результата


# ::stappler::geom::Vec3::cross(stappler::geom::Vec3 const&,stappler::geom::Vec3 const&,stappler::geom::Vec3*)

## BRIEF

Вычисляет векторное произведение двух векторов

## CONTENT

Доступ: public

Вычисляет векторное произведение двух векторов, сохраняет результат по указателю

Параметры:
* stappler::geom::Vec3 const&
* stappler::geom::Vec3 const&
* stappler::geom::Vec3* - указатель для сохранения результата


# ::stappler::geom::Vec3::dot(stappler::geom::Vec3 const&,stappler::geom::Vec3 const&)

## BRIEF

Вычисляет скалярное произведение двух векторов

## CONTENT

Доступ: public

Вычисляет скалярное произведение двух векторов

Параметры:
* stappler::geom::Vec3 const&
* stappler::geom::Vec3 const&

Возвращает:
* float - скалярное произведение двух векторов

# ::stappler::geom::Vec3::angle(stappler::geom::Vec3 const&,stappler::geom::Vec3 const&)

## BRIEF

Вычисляет угол между двумя векторами в радианах

## CONTENT

Доступ: public

Вычисляет угол между двумя векторами в радианах

Параметры:
* stappler::geom::Vec3 const&
* stappler::geom::Vec3 const&

Возвращает:
* float - угол между двумя векторами в радианах

# ::stappler::geom::Vec3::clamp(stappler::geom::Vec3 const&,stappler::geom::Vec3 const&,stappler::geom::Vec3 const&,stappler::geom::Vec3*)

## BRIEF

Покомпонентно отсекает значения вектора

## CONTENT

Доступ: public

Покомпонентно отсекает значения вектора, сохраняет результат по указателю.

Параметры:
* stappler::geom::Vec3 const& - исходный вектор
* stappler::geom::Vec3 const& - вектор минимума
* stappler::geom::Vec3 const& - вектор максимума
* stappler::geom::Vec3* - указатель для сохранения результата


# ::stappler::geom::Vec3::x

## BRIEF

Компонент X

## CONTENT

Доступ: public

Тип: float

Компонент X

# ::stappler::geom::Vec3::y

## BRIEF

Компонент Y

## CONTENT

Доступ: public

Тип: float

Компонент Y

# ::stappler::geom::Vec3::z

## BRIEF

Компонент Z

## CONTENT

Доступ: public

Тип: float

Компонент Z

# ::stappler::geom::Vec3::Vec3()

## BRIEF

Конструктор по умолчанию

## CONTENT

Доступ: public

Конструктор по умолчанию, создаёт нулевой вектор

# ::stappler::geom::Vec3::Vec3(float,float,float)

## BRIEF

Покомпонентный конструктор

## CONTENT

Доступ: public

Покомпонентный конструктор

Параметры:
* float - x
* float - y
* float - z


# ::stappler::geom::Vec3::Vec3(stappler::geom::Vec2 const&,float)

## BRIEF

Покомпонентный конструктор

## CONTENT

Доступ: public

Покомпонентный конструктор

Параметры:
* stappler::geom::Vec2 const& - компоненты X и Y
* float - z


# ::stappler::geom::Vec3::Vec3(stappler::geom::Vec3 const&,stappler::geom::Vec3 const&)

## BRIEF

Конструктор из разности значений

## CONTENT

Доступ: public

Конструктор из разности значений, новый вектор создаётся как разность векторов B - A

Параметры:
* stappler::geom::Vec3 const& - вектор A
* stappler::geom::Vec3 const& - вектор B


# ::stappler::geom::Vec3::Vec3(stappler::geom::Vec3 const&)

## BRIEF

Конструктор копирования

## CONTENT

Доступ: public

Конструктор копирования по умолчанию

Параметры:
* stappler::geom::Vec3 const&


# ::stappler::geom::Vec3::add(stappler::geom::Vec3 const&)

## BRIEF

Добавляет вектор к текущему

## CONTENT

Доступ: public

Добавляет вектор к текущему

Параметры:
* stappler::geom::Vec3 const&


# ::stappler::geom::Vec3::subtract(stappler::geom::Vec3 const&)

## BRIEF

Вычитает вектор из текущего

## CONTENT

Доступ: public

Вычитает вектор из текущего

Параметры:
* stappler::geom::Vec3 const&


# ::stappler::geom::Vec3::length() const

## BRIEF

Вычисляет длину вектора

## CONTENT

Доступ: public

Вычисляет длину вектора, использует квадраный корень

Возвращает:
* float - длина вектора

# ::stappler::geom::Vec3::lengthSquared() const

## BRIEF

Вычисляет квадрат длины вектора

## CONTENT

Доступ: public

Вычисляет квадрат длины вектора, используется для избегания функции квадратного корня в вычислениях

Возвращает:
* float - квадрат длины вектора

# ::stappler::geom::Vec3::negate()

## BRIEF

Отрицает текущий вектор

## CONTENT

Доступ: public

Отрицает текущий вектор, умножая его на -1


# ::stappler::geom::Vec3::fuzzyEquals(stappler::geom::Vec3 const&,float) const

## BRIEF

Сравнивает вектора с нектороым допуском

## CONTENT

Доступ: public

Параметры:
* stappler::geom::Vec3 const& - другой вектор
* float - допуск для сравнения

Возвращает:
* bool - true если векторы совпадают с заданным допуском

# ::stappler::geom::Vec3::clamp(stappler::geom::Vec3 const&,stappler::geom::Vec3 const&)

## BRIEF

Покомпонентно отсекает текущий вектор по минимальным и максимальным значениям

## CONTENT

Доступ: public

Покомпонентно отсекает текущий вектор по минимальным и максимальным значениям

Параметры:
* stappler::geom::Vec3 const& - вектор минимальных значений
* stappler::geom::Vec3 const& - вектор максимальных занчений


# ::stappler::geom::Vec3::normalize()

## BRIEF

Нормализует текущий вектор

## CONTENT

Доступ: public

Нормализует текущий вектор

Возвращает:
* stappler::geom::Vec3& - ссылка на себя

# ::stappler::geom::Vec3::cross(stappler::geom::Vec3 const&)

## BRIEF

Вычисляет векторное произведение с другим вектором и устанавливает результат в качестве текущего вектора

## CONTENT

Доступ: public

Вычисляет векторное произведение с другим вектором и устанавливает результат в качестве текущего вектора

Параметры:
* stappler::geom::Vec3 const&


# ::stappler::geom::Vec3::dot(stappler::geom::Vec3 const&) const

## BRIEF

Вычисляет скалярное произведение между текущим и другим вектором

## CONTENT

Доступ: public

Вычисляет скалярное произведение между текущим и другим вектором

Параметры:
* stappler::geom::Vec3 const&

Возвращает:
* float - скалярное произведение между текущим и другим вектором

# ::stappler::geom::Vec3::distance(stappler::geom::Vec3 const&) const

## BRIEF

Вычисляет расстояние между двумя векторами

## CONTENT

Доступ: public

Вычисляет расстояние между двумя векторами, использует квадратный корень

Параметры:
* stappler::geom::Vec3 const&

Возвращает:
* float - расстояние между векторами

# ::stappler::geom::Vec3::distanceSquared(stappler::geom::Vec3 const&) const

## BRIEF

Вычисляет квадрат расстояния между векторами

## CONTENT

Доступ: public

Вычисляет квадрат расстояния между векторами. Служит для избегания вычисления квадратного корня

Параметры:
* stappler::geom::Vec3 const&

Возвращает:
* float - квадрат расстояния между векторами

# ::stappler::geom::Vec3::xy() const

## BRIEF

Выбирает компоненты X и Y из вектора

## CONTENT

Доступ: public

Выбирает компоненты X и Y из вектора

Возвращает:
* stappler::geom::Vec2 - вектор из компоенентов X и Н

# ::stappler::geom::Vec3::getNormalized() const

## BRIEF

Возвращает нормализованный вектор для текущего

## CONTENT

Доступ: public

Возвращает нормализованный вектор для текущего

Возвращает:
* stappler::geom::Vec3 - нормализованный вектор


# ::stappler::geom::Vec3::operator+=(stappler::geom::Vec3 const&)

## BRIEF

Добавляет другой вектор к текущему

## CONTENT

Доступ: public

Добавляет другой вектор к текущему

Параметры:
* stappler::geom::Vec3 const&

Возвращает:
* stappler::geom::Vec3& - ссылка на себя

# ::stappler::geom::Vec3::operator-=(stappler::geom::Vec3 const&)

## BRIEF

Вычитает другой вектор из текущего

## CONTENT

Доступ: public

Вычитает другой вектор из текущего

Параметры:
* stappler::geom::Vec3 const&

Возвращает:
* stappler::geom::Vec3& - ссылка на себя

# ::stappler::geom::Vec3::normalize()

## BRIEF

Нормализует текущий вектор

## CONTENT

Нормализует текущий вектор

Возвращает:
* stappler::geom::Vec3& - ссылка на себя

# ::stappler::geom::operator<<(std::basic_ostream<char>&,stappler::geom::Vec3 const&)

## BRIEF

Выводит вектор в текстовый поток

## CONTENT

Выводит вектор в текстовый поток

Параметры:
* std::basic_ostream<char>&
* stappler::geom::Vec3 const&

Возвращает:
* std::basic_ostream<char>&

# ::stappler::geom::Vec3::Dimansions

## BRIEF

Число измерений для поэлементных алгоритмов

## CONTENT

Доступ: public

Число измерений для поэлементных алгоритмов

Тип: size_t const

# ::stappler::geom::Vec3::scale(stappler::geom::Vec3 const&,stappler::geom::Vec3 const&,stappler::geom::Vec3*)

## BRIEF

Вычисляет результат поэлементного умножения векторов и записывает результат по указателю

## CONTENT

Доступ: public

Вычисляет результат поэлементного умножения векторов и записывает результат по указателю

Параметры:
* stappler::geom::Vec3 const&
* stappler::geom::Vec3 const&
* stappler::geom::Vec3*

# ::stappler::geom::Vec3::unscale(stappler::geom::Vec3 const&,stappler::geom::Vec3 const&,stappler::geom::Vec3*)

## BRIEF

Вычисляет результат поэлементного деления векторов и записывает результат по указателю

## CONTENT

Доступ: public

Вычисляет результат поэлементного деления векторов и записывает результат по указателю

Параметры:
* stappler::geom::Vec3 const&
* stappler::geom::Vec3 const&
* stappler::geom::Vec3*

# ::stappler::geom::Vec3::bitop<typename>(stappler::geom::Vec3 const&,Functor const&)

## BRIEF

Применяет битовую операцию к вектору

## CONTENT

Доступ: public

Применяет битовую операцию к вектору

Параметры шаблона:
* typename Functor

Параметры:
* stappler::geom::Vec3 const&
* Functor const&

Возвращает:
* std::bitset<3>

# ::stappler::geom::Vec3::bitop<typename>(stappler::geom::Vec3 const&,stappler::geom::Vec3 const&,Functor const&)

## BRIEF

Применяет битовую операцию к двум векторам

## CONTENT

Доступ: public

Применяет битовую операцию к двум векторам

Параметры шаблона:
* typename Functor

Параметры:
* stappler::geom::Vec3 const&
* stappler::geom::Vec3 const&
* Functor const&

Возвращает:
* std::bitset<3>

# ::stappler::geom::Vec3::fill(float)

## BRIEF

Заполняет все элементы вектора числом

## CONTENT

Доступ: public

Заполняет все элементы вектора числом

Параметры:
* float

Возвращает:
* stappler::geom::Vec3

# ::stappler::geom::Vec3::Vec3<typename>(stappler::geom::Vec3 const&,Functor const&)

## BRIEF

Конструктор из применения поэлементной операции вектору

## CONTENT

Доступ: public

Конструктор из применения поэлементной операции вектору

Параметры шаблона:
* typename Functor

Параметры:
* stappler::geom::Vec3 const&
* Functor const&

# ::stappler::geom::Vec3::Vec3<typename>(stappler::geom::Vec3 const&,stappler::geom::Vec3 const&,Functor const&)

## BRIEF

Конструктор из применения поэлементной операции к двум векторам

## CONTENT

Доступ: public

Конструктор из применения поэлементной операции к двум векторам

Параметры шаблона:
* typename Functor

Параметры:
* stappler::geom::Vec3 const&
* stappler::geom::Vec3 const&
* Functor const&

# ::stappler::geom::Vec3::Vec3(stappler::geom::Size3 const&)

## BRIEF

Конструктор из трёхмерного размера

## CONTENT

Доступ: public

Конструктор из трёхмерного размера

Параметры:
* stappler::geom::Size3 const&

# ::stappler::geom::Vec3::Vec3(stappler::geom::Extent3 const&)

## BRIEF

Конструктор из трёхмерного размера

## CONTENT

Доступ: public

Конструктор из трёхмерного размера

Параметры:
* stappler::geom::Extent3 const&

# ::stappler::geom::Vec3::isValid() const

## BRIEF

Проверяет, что вектор не содержит NaN

## CONTENT

Доступ: public

Проверяет, что вектор не содержит NaN

Возвращает:
* bool

# ::stappler::geom::Vec3::add(float const&)

## BRIEF

Поэлементно добавляет число к вектору

## CONTENT

Доступ: public

Поэлементно добавляет число к вектору

Параметры:
* float const&

# ::stappler::geom::Vec3::subtract(float const&)

## BRIEF

Поэлментно вычитает число из вектора

## CONTENT

Доступ: public

Поэлментно вычитает число из вектора

Параметры:
* float const&

# ::stappler::geom::Vec3::scale(float const&)

## BRIEF

Поэлементно умножает вектор на число

## CONTENT

Доступ: public

Поэлементно умножает вектор на число

Параметры:
* float const&

# ::stappler::geom::Vec3::scale(stappler::geom::Vec3 const&)

## BRIEF

Поэлементно умножает векторы

## CONTENT

Доступ: public

Поэлементно умножает векторы

Параметры:
* stappler::geom::Vec3 const&

# ::stappler::geom::Vec3::unscale(float const&)

## BRIEF

Поэлементно делит вектор на число

## CONTENT

Доступ: public

Поэлементно делит вектор на число

Параметры:
* float const&

# ::stappler::geom::Vec3::unscale(stappler::geom::Vec3 const&)

## BRIEF

Поэлементно делит вектор на другой

## CONTENT

Доступ: public

Поэлементно делит вектор на другой

Параметры:
* stappler::geom::Vec3 const&


# ::stappler::geom::Vec3::isWithinDistance(stappler::geom::Vec3 const&,float) const

## BRIEF

Проверяет, что расстояние между векторами не больше значения

## CONTENT

Доступ: public

Проверяет, что расстояние между векторами не больше значения. Избегает использования sqrt

Параметры:
* stappler::geom::Vec3 const&
* float

Возвращает:
* bool

# ::stappler::geom::Vec3::operator+=(float const&)

## BRIEF

Поэлементно добавляет число к вектору

## CONTENT

Доступ: public

Поэлементно добавляет число к вектору

Параметры:
* float const&

Возвращает:
* stappler::geom::Vec3&

# ::stappler::geom::Vec3::operator-=(float const&)

## BRIEF

Поэлементно вычитает число из вектора

## CONTENT

Доступ: public

Поэлементно вычитает число из вектора

Параметры:
* float const&

Возвращает:
* stappler::geom::Vec3&

# ::stappler::geom::Vec3::operator*=(float const&)

## BRIEF

Поэлементно умножает вектор на число

## CONTENT

Доступ: public

Поэлементно умножает вектор на число

Параметры:
* float const&

Возвращает:
* stappler::geom::Vec3&

# ::stappler::geom::Vec3::operator*=(stappler::geom::Vec3 const&)

## BRIEF

Поэлементно умножает вектор на другой

## CONTENT

Доступ: public

Поэлементно умножает вектор на другой

Параметры:
* stappler::geom::Vec3 const&

Возвращает:
* stappler::geom::Vec3&

# ::stappler::geom::Vec3::operator/=(float const&)

## BRIEF

Поэлементно делит вектор на число

## CONTENT

Доступ: public

Поэлементно делит вектор на число

Параметры:
* float const&

Возвращает:
* stappler::geom::Vec3&

# ::stappler::geom::Vec3::operator/=(stappler::geom::Vec3 const&)

## BRIEF

Поэлементно делит вектор на другой

## CONTENT

Доступ: public

Поэлементно делит вектор на другой

Параметры:
* stappler::geom::Vec3 const&

Возвращает:
* stappler::geom::Vec3&

# ::stappler::geom::operator+(stappler::geom::Vec3 const&,stappler::geom::Vec3 const&)

## BRIEF

Поэлементно суммирует векторы

## CONTENT

Поэлементно суммирует векторы

Параметры:
* stappler::geom::Vec3 const&
* stappler::geom::Vec3 const&

Возвращает:
* stappler::geom::Vec3 const

# ::stappler::geom::operator+(stappler::geom::Vec3 const&,float const&)

## BRIEF

Поэлементно суммирует вектор с числом

## CONTENT

Поэлементно суммирует вектор с числом

Параметры:
* stappler::geom::Vec3 const&
* float const&

Возвращает:
* stappler::geom::Vec3 const

# ::stappler::geom::operator+(float const&,stappler::geom::Vec3 const&)

## BRIEF

Поэлементно суммирует вектор с числом

## CONTENT

Поэлементно суммирует вектор с числом

Параметры:
* float const&
* stappler::geom::Vec3 const&

Возвращает:
* stappler::geom::Vec3 const

# ::stappler::geom::operator-(stappler::geom::Vec3 const&,stappler::geom::Vec3 const&)

## BRIEF

Поэлементно вычитает один вектор из другого

## CONTENT

Поэлементно вычитает один вектор из другого

Параметры:
* stappler::geom::Vec3 const&
* stappler::geom::Vec3 const&

Возвращает:
* stappler::geom::Vec3 const

# ::stappler::geom::operator-(stappler::geom::Vec3 const&,float const&)

## BRIEF

Поэлементно вычитает число из вектора

## CONTENT

Поэлементно вычитает число из вектора

Параметры:
* stappler::geom::Vec3 const&
* float const&

Возвращает:
* stappler::geom::Vec3 const

# ::stappler::geom::operator*(stappler::geom::Vec3 const&,stappler::geom::Vec3 const&)

## BRIEF

Поэлементно умножает векторы

## CONTENT

Поэлементно умножает векторы

Параметры:
* stappler::geom::Vec3 const&
* stappler::geom::Vec3 const&

Возвращает:
* stappler::geom::Vec3 const

# ::stappler::geom::operator*(stappler::geom::Vec3 const&,float const&)

## BRIEF

Поэлементно умножает вектор на число

## CONTENT

Поэлементно умножает вектор на число

Параметры:
* stappler::geom::Vec3 const&
* float const&

Возвращает:
* stappler::geom::Vec3 const

# ::stappler::geom::operator*(float const&,stappler::geom::Vec3 const&)

## BRIEF

Поэлементно умножает вектор на число

## CONTENT

Поэлементно умножает вектор на число

Параметры:
* float const&
* stappler::geom::Vec3 const&

Возвращает:
* stappler::geom::Vec3 const

# ::stappler::geom::operator/(stappler::geom::Vec3 const&,stappler::geom::Vec3 const&)

## BRIEF

Поэлементно делит векторы

## CONTENT

Поэлементно делит векторы

Параметры:
* stappler::geom::Vec3 const&
* stappler::geom::Vec3 const&

Возвращает:
* stappler::geom::Vec3 const

# ::stappler::geom::operator/(stappler::geom::Vec3 const&,float const&)

## BRIEF

Поэлементно делит вектор на число

## CONTENT

Поэлементно делит вектор на число

Параметры:
* stappler::geom::Vec3 const&
* float const&

Возвращает:
* stappler::geom::Vec3 const

# ::stappler::geom::operator-(stappler::geom::Vec3 const&)

## BRIEF

Возвращает поэлементное отрицание вектора

## CONTENT

Возвращает поэлементное отрицание вектора

Параметры:
* stappler::geom::Vec3 const&

Возвращает:
* stappler::geom::Vec3