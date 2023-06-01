Title: SPVec3.h


# STAPPLER_GEOM_SPVEC3_H_

## BRIEF

Макрос защиты заголовка

## CONTENT

Макрос защиты заголовка

# ::stappler::geom::Vec3

## BRIEF

Класс трёхкомпонентного вектора

## CONTENT

Класс трёхкомпонентного вектора: x, y, z

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
* stappler::geom::Vec3* - указатель для сохранения результата.


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


# ::stappler::geom::Vec3::isZero() const

## BRIEF

Проверяет, нулевой ли вектор

## CONTENT

Доступ: public

Проверяет, нулевой ли вектор

Возвращает:
* bool - true если вектор нулевой

# ::stappler::geom::Vec3::isOne() const

## BRIEF

Проверяет, содержат ли все компоненты вектора единицу

## CONTENT

Доступ: public

Проверяет, содержат ли все компоненты вектора единицу

Возвращает:
* bool - true если все компоненты вектора равны единице

# ::stappler::geom::Vec3::add(stappler::geom::Vec3 const&)

## BRIEF

Добавляет вектор к текущему

## CONTENT

Доступ: public

Добавляет вектор к текущему

Параметры:
* stappler::geom::Vec3 const&


# ::stappler::geom::Vec3::add(float,float,float)

## BRIEF

Покомпонентно добавляет значения к текущему вектору

## CONTENT

Доступ: public

Покомпонентно добавляет значения к текущему вектору

Параметры:
* float - x
* float - y
* float - z


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

# ::stappler::geom::Vec3::scale(float)

## BRIEF

Умножает текущий вектор на скаляр

## CONTENT

Доступ: public

Умножает текущий вектор на скаляр

Параметры:
* float


# ::stappler::geom::Vec3::lerp(stappler::geom::Vec3 const&,float) const

## BRIEF

Возвращает результат линейной интерполяции между двумя векторами

## CONTENT

Доступ: public

Возвращает результат линейной интерполяции между двумя векторами

Параметры:
* stappler::geom::Vec3 const& - другой вектор
* float - параметр интерполяции из [0, 1]

Возвращает:
* stappler::geom::Vec3 - результат линейной интерполяции

# ::stappler::geom::Vec3::setZero()

## BRIEF

Сбрасывает текущий вектор, делая его нулевым

## CONTENT

Доступ: public

Сбрасывает текущий вектор, делая его нулевым

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

# ::stappler::geom::Vec3::getAbs() const

## BRIEF

Возвращает покомпоентное абсолютное значение для данного вектора

## CONTENT

Доступ: public

Возвращает покомпоентное абсолютное значение для данного вектора

Возвращает:
* stappler::geom::Vec3 - покомпоентное абсолютное значение для данного вектора

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

# ::stappler::geom::Vec3::smooth(stappler::geom::Vec3 const&,float,float)

## BRIEF

Плавно смещает текущий вектор вслед за целевым

## CONTENT

Доступ: public

Плавно смещает текущий вектор вслед за целевым. Исползуется функция оценки времени активности и допустимая задержка в смещении. Чем меньше задержка, тем точнее текущий вектор соотвествует целевому. Чем больше задержка, тем плавнее следование вектора за целевым.

Параметры:
* stappler::geom::Vec3 const& - целевой вектор
* float - целевое время действия
* float - время задержки


# ::stappler::geom::Vec3::operator+(stappler::geom::Vec3 const&) const

## BRIEF

Возвращает сумму текущего и другого векторов

## CONTENT

Доступ: public

Возвращает сумму текущего и другого векторов

Параметры:
* stappler::geom::Vec3 const&

Возвращает:
* stappler::geom::Vec3 const - сумма векторов

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

# ::stappler::geom::Vec3::operator-(stappler::geom::Vec3 const&) const

## BRIEF

Возвращает разность между текущим и другим вектором

## CONTENT

Доступ: public

Возвращает разность между текущим и другим вектором

Параметры:
* stappler::geom::Vec3 const&

Возвращает:
* stappler::geom::Vec3 const - разность между векторами

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

# ::stappler::geom::Vec3::operator-() const

## BRIEF

Возвращает отрицание текущего вектора

## CONTENT

Доступ: public

Возвращает отрицание текущего вектора

Возвращает:
* stappler::geom::Vec3 const - отрицание текущего вектора

# ::stappler::geom::Vec3::operator*(float) const

## BRIEF

Возвращает результат умножения текущего вектора на скаляр

## CONTENT

Доступ: public

Возвращает результат умножения текущего вектора на скаляр

Параметры:
* float

Возвращает:
* stappler::geom::Vec3 const - результат умножения текущего вектора на скаляр

# ::stappler::geom::Vec3::operator*=(float)

## BRIEF

Умножает текущий вектор на скаляр

## CONTENT

Доступ: public

Умножает текущий вектор на скаляр

Параметры:
* float

Возвращает:
* stappler::geom::Vec3& - ссылка на себя

# ::stappler::geom::Vec3::operator/(float) const

## BRIEF

Возвращает результат деления ткущего вектора на скаляр

## CONTENT

Доступ: public

Возвращает результат деления ткущего вектора на скаляр

Параметры:
* float

Возвращает:
* stappler::geom::Vec3 const - результат деления ткущего вектора на скаляр

# ::stappler::geom::Vec3::operator<(stappler::geom::Vec3 const&) const

## BRIEF

Вычисляет лексикографическое отношение двух векторов

## CONTENT

Доступ: public

Вычисляет лексикографическое отношение двух векторов, используется для помещения векторов в упорядоченные контейнеры

Параметры:
* stappler::geom::Vec3 const&

Возвращает:
* bool - true если текущий вектор лексикографически меньше другого

# ::stappler::geom::Vec3::operator>(stappler::geom::Vec3 const&) const

## BRIEF

Вычисляет лексикографическое отношение двух векторов

## CONTENT

Доступ: public

Вычисляет лексикографическое отношение двух векторов, используется для помещения векторов в упорядоченные контейнеры

Параметры:
* stappler::geom::Vec3 const&

Возвращает:
* bool - true если текущий вектор лексикографически больше другого

# ::stappler::geom::Vec3::operator==(stappler::geom::Vec3 const&) const

## BRIEF

Сравнивает два вектора

## CONTENT

Доступ: public

Сравнивает два вектора

Параметры:
* stappler::geom::Vec3 const&

Возвращает:
* bool - true если вектора равны

# ::stappler::geom::Vec3::operator!=(stappler::geom::Vec3 const&) const

## BRIEF

Сравнивает два вектора

## CONTENT

Доступ: public

Сравнивает два вектора

Параметры:
* stappler::geom::Vec3 const&

Возвращает:
* bool - true если вектора не равны

# ::stappler::geom::Vec3::normalize()

## BRIEF

Нормализует текущий вектор

## CONTENT

Нормализует текущий вектор

Возвращает:
* stappler::geom::Vec3& - ссылка на себя


# ::stappler::geom::operator*(float,stappler::geom::Vec3 const&)

## BRIEF

Вычисляет результат умножения вектора на число

## CONTENT

Вычисляет результат умножения вектора на число

Параметры:
* float
* stappler::geom::Vec3 const&

Возвращает:
* stappler::geom::Vec3 const - результат умножения вектора на число

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

# ::stappler::geom::lessThanEqual(stappler::geom::Vec3 const&,stappler::geom::Vec3 const&)

## BRIEF

Вычисляет покомпонентное отношение

## CONTENT

Вычисляет покомпонентное отношение между векторами

Параметры:
* stappler::geom::Vec3 const& - вектор A
* stappler::geom::Vec3 const& - вектор B

Возвращает:
* std::bitset<3> - битовая маска, в которой значение 1 означает, что соответствующий компонент вектора A меньше или равен соотвествующему компоненту вектора B