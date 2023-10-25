Title: SPVec4.h


# STAPPLER_GEOM_SPVEC4_H

## BRIEF

Макрос защиты заголовка

## CONTENT

Макрос защиты заголовка

# ::stappler::geom::Vec4

## BRIEF

Класс четырёхкомпонентного вектора

## CONTENT

Класс четырёхкомпонентного вектора: x, y, z, w. Частично может служить эквивалентом vec4 в GLSL

# ::stappler::geom::Vec4::ZERO

## BRIEF

Статическое нулевое значение вектора

## CONTENT

Доступ: public

Тип: stappler::geom::Vec4 const

Статическое нулевое значение вектора (0, 0, 0, 0)

# ::stappler::geom::Vec4::ONE

## BRIEF

Статическое единичное значение вектора

## CONTENT

Доступ: public

Тип: stappler::geom::Vec4 const

Статическое единичное значение вектора (1, 1, 1, 1)

# ::stappler::geom::Vec4::UNIT_X

## BRIEF

Статический единичный вектор по X

## CONTENT

Доступ: public

Тип: stappler::geom::Vec4 const

Статический единичный вектор по X (1, 0, 0, 0)

# ::stappler::geom::Vec4::UNIT_Y

## BRIEF

Статический единичный вектор по Y

## CONTENT

Доступ: public

Тип: stappler::geom::Vec4 const

Статический единичный вектор по Y (0, 1, 0, 0)

# ::stappler::geom::Vec4::UNIT_Z

## BRIEF

Статический единичный вектор по Z

## CONTENT

Доступ: public

Тип: stappler::geom::Vec4 const

Статический единичный вектор по Z (0, 0, 1, 0)

# ::stappler::geom::Vec4::UNIT_W

## BRIEF

Статический единичный вектор по W

## CONTENT

Доступ: public

Тип: stappler::geom::Vec4 const

Статический единичный вектор по W (0, 0, 0, 1)

# ::stappler::geom::Vec4::angle(stappler::geom::Vec4 const&,stappler::geom::Vec4 const&)

## BRIEF

Вычисляет угол между двумя векторами в радианах

## CONTENT

Доступ: public

Вычисляет угол между двумя векторами в радианах

Параметры:
* stappler::geom::Vec4 const&
* stappler::geom::Vec4 const&

Возвращает:
* float - угол между векторами в радианах

# ::stappler::geom::Vec4::dot(stappler::geom::Vec4 const&,stappler::geom::Vec4 const&)

## BRIEF

Вычисляет скалярное произведение между векторами

## CONTENT

Доступ: public

Вычисляет скалярное произведение между векторами

Параметры:
* stappler::geom::Vec4 const&
* stappler::geom::Vec4 const&

Возвращает:
* float - значение скалярного произведения

# ::stappler::geom::Vec4::add(stappler::geom::Vec4 const&,stappler::geom::Vec4 const&,stappler::geom::Vec4*)

## BRIEF

Вычисляет сумму векторов

## CONTENT

Доступ: public

Вычисляет сумму векторов и записывает в результат по указателю

Параметры:
* stappler::geom::Vec4 const&
* stappler::geom::Vec4 const&
* stappler::geom::Vec4* - указатель для записи результата


# ::stappler::geom::Vec4::clamp(stappler::geom::Vec4 const&,stappler::geom::Vec4 const&,stappler::geom::Vec4 const&,stappler::geom::Vec4*)

## BRIEF

Покомпонентно усекает вектор по минимальным и максимальным значениям

## CONTENT

Доступ: public

Покомпонентно усекает вектор по минимальным и максимальным значениям, записывает результат по указателю

Параметры:
* stappler::geom::Vec4 const& - исходный вектор
* stappler::geom::Vec4 const& - вектор минимумов
* stappler::geom::Vec4 const& - вектор максимумов
* stappler::geom::Vec4* - указатель для записи результата


# ::stappler::geom::Vec4::subtract(stappler::geom::Vec4 const&,stappler::geom::Vec4 const&,stappler::geom::Vec4*)

## BRIEF

Вычисляет разность векторов

## CONTENT

Доступ: public

Вычисляет разность векторов, записывает результат по указателю

Параметры:
* stappler::geom::Vec4 const&
* stappler::geom::Vec4 const&
* stappler::geom::Vec4* - указатель для записи результата


# ::stappler::geom::Vec4::x

## BRIEF

Компонент X

## CONTENT

Доступ: public

Тип: float

Компонент X

# ::stappler::geom::Vec4::y

## BRIEF

Компонент Y

## CONTENT

Доступ: public

Тип: float

Компонент Y

# ::stappler::geom::Vec4::z

## BRIEF

Компонент Z

## CONTENT

Доступ: public

Тип: float

Компонент Z

# ::stappler::geom::Vec4::w

## BRIEF

Компонент W

## CONTENT

Доступ: public

Тип: float

Компонент W

# ::stappler::geom::Vec4::Vec4()

## BRIEF

Конструктор по умолчанию

## CONTENT

Доступ: public

Конструктор по умолчанию, создаёт нулевой вектор

# ::stappler::geom::Vec4::Vec4(float,float,float,float)

## BRIEF

Покомпонентный конструктор

## CONTENT

Доступ: public

Покомпонентный конструктор

Параметры:
* float - x
* float - y
* float - z
* float - w


# ::stappler::geom::Vec4::Vec4(stappler::geom::Vec2 const&,float,float)

## BRIEF

Покомпонентный конструктор

## CONTENT

Доступ: public

Покомпонентный конструктор

Параметры:
* stappler::geom::Vec2 const& - компоненты X и Y
* float - z
* float - w


# ::stappler::geom::Vec4::Vec4(stappler::geom::Vec3 const&,float)

## BRIEF

Покомпонентный конструктор

## CONTENT

Доступ: public

Покомпонентный конструктор

Параметры:
* stappler::geom::Vec3 const& - компоненты X, Y и Z
* float - W


# ::stappler::geom::Vec4::Vec4(stappler::geom::Vec2 const&,stappler::geom::Vec2 const&)

## BRIEF

Покомпонентный конструктор

## CONTENT

Доступ: public

Покомпонентный конструктор

Параметры:
* stappler::geom::Vec2 const& - компоненты X и Y
* stappler::geom::Vec2 const& - компоненты Z и W


# ::stappler::geom::Vec4::Vec4(stappler::geom::Vec4 const&,stappler::geom::Vec4 const&)

## BRIEF

Конструктор из разности значений

## CONTENT

Доступ: public

Конструктор из разности значений, новый вектор создаётся как разность векторов B - A

Параметры:
* stappler::geom::Vec4 const& - вектор A
* stappler::geom::Vec4 const& - вектор B


# ::stappler::geom::Vec4::Vec4(stappler::geom::Vec4 const&)

## BRIEF

Конструктор копирования

## CONTENT

Доступ: public

Конструктор копирования по умолчанию

Параметры:
* stappler::geom::Vec4 const&


# ::stappler::geom::Vec4::xy() const

## BRIEF

Выбор компонентов x и y

## CONTENT

Доступ: public

Выбор компонентов x и y

Возвращает:
* stappler::geom::Vec2 - двухкомпонентый вектор из x и y исходного

# ::stappler::geom::Vec4::xyz() const

## BRIEF

Выбор компонентов x, y и z

## CONTENT

Доступ: public

Выбор компонентов x, y и z

Возвращает:
* stappler::geom::Vec3 - трёхкомпонентый вектор из x, y, и z исходного

# ::stappler::geom::Vec4::add(stappler::geom::Vec4 const&)

## BRIEF

Добавляет к текущему вектору вектор из аргумента

## CONTENT

Доступ: public

Добавляет к текущему вектору вектор из аргумента

Параметры:
* stappler::geom::Vec4 const&


# ::stappler::geom::Vec4::subtract(stappler::geom::Vec4 const&)

## BRIEF

Отнимает от текущего вектора вектор из аргумента

## CONTENT

Доступ: public

Отнимает от текущего вектора вектор из аргумента

Параметры:
* stappler::geom::Vec4 const&


# ::stappler::geom::Vec4::clamp(stappler::geom::Vec4 const&,stappler::geom::Vec4 const&)

## BRIEF

Покомпонентно обрезает вектор

## CONTENT

Доступ: public

Покомпонентно обрезает вектор на основе минимума и максимума

Параметры:
* stappler::geom::Vec4 const& - вектор минимумов
* stappler::geom::Vec4 const& - вектор максимумов


# ::stappler::geom::Vec4::distance(stappler::geom::Vec4 const&) const

## BRIEF

Вычисляет расстояние между векторами

## CONTENT

Доступ: public

Вычисляет расстояние между векторами через квадратный корень

Параметры:
* stappler::geom::Vec4 const& - вектор, расстояние до которого считать

Возвращает:
* float - расстояние между векторами

# ::stappler::geom::Vec4::distanceSquared(stappler::geom::Vec4 const&) const

## BRIEF

Вычисляет квадрат расстояния между векторами

## CONTENT

Доступ: public

Вычисляет квадрат расстояния между векторами, служит для избегания вычисления квадратного корня в алгоритмах

Параметры:
* stappler::geom::Vec4 const& - вектор, расстояние до которого считать

Возвращает:
* float - квадрат расстояния между векторами

# ::stappler::geom::Vec4::dot(stappler::geom::Vec4 const&) const

## BRIEF

Вычисляет скалярное произведения векторов

## CONTENT

Доступ: public

Вычисляет скалярное произведения векторов

Параметры:
* stappler::geom::Vec4 const& - другой вектор

Возвращает:
* float - скалярное произведение векторов

# ::stappler::geom::Vec4::length() const

## BRIEF

Вычисляет длину вектора

## CONTENT

Доступ: public

Вычисляет длину вектора через квадратный корень

Возвращает:
* float - длина вектора

# ::stappler::geom::Vec4::lengthSquared() const

## BRIEF

Вычисляет квадрат длины вектора

## CONTENT

Доступ: public

Вычисляет квадрат длины вектора, служит для избегания вычисления квадратного корня в алгоритмах

Возвращает:
* float - квадрат длины вектора

# ::stappler::geom::Vec4::negate()

## BRIEF

Отрицает текущий вектор

## CONTENT

Доступ: public

Отрицает текущий вектор, умножая его на -1

# ::stappler::geom::Vec4::fuzzyEquals(stappler::geom::Vec4 const&,float) const

## BRIEF

Проверяет векторы на равенство с некоторым допуском

## CONTENT

Доступ: public

Проверяет векторы на равенство с некоторым допуском

Параметры:
* stappler::geom::Vec4 const& - другой вектор
* float - допуск для сравнения

Возвращает:
* bool - true если векторы приблизительно равны с указанным допуском

# ::stappler::geom::Vec4::normalize()

## BRIEF

Нормализует текущий вектор

## CONTENT

Доступ: public

Нормализует текущий вектор

# ::stappler::geom::Vec4::getNormalized() const

## BRIEF

Возвращает нормализованный вектор от текущего

## CONTENT

Доступ: public

Возвращает нормализованный вектор от текущего

Возвращает:
* stappler::geom::Vec4 - нормализованный вектор

# ::stappler::geom::Vec4::operator+=(stappler::geom::Vec4 const&)

## BRIEF

Добавляет вектор к текущему

## CONTENT

Доступ: public

Добавляет вектор к текущему

Параметры:
* stappler::geom::Vec4 const&

Возвращает:
* stappler::geom::Vec4& - ссылка на себя

# ::stappler::geom::Vec4::operator-=(stappler::geom::Vec4 const&)

## BRIEF

Уменьшает текущий вектор на другой

## CONTENT

Доступ: public

Параметры:
* stappler::geom::Vec4 const&

Возвращает:
* stappler::geom::Vec4& - ссылка на себя


# ::stappler::geom::operator*(stappler::geom::Vec4 const&,stappler::geom::Vec4 const&)

## BRIEF

Вычисляет произведение двух векторов

## CONTENT

Вычисляет произведение двух векторов

Параметры:
* stappler::geom::Vec4 const&
* stappler::geom::Vec4 const&

Возвращает:
* stappler::geom::Vec4 - результат произведения двух векторов

# ::stappler::geom::operator/(stappler::geom::Vec4 const&,stappler::geom::Vec4 const&)

## BRIEF

Вычисляет отношение двух векторов

## CONTENT

Вычисляет отношение двух векторов

Параметры:
* stappler::geom::Vec4 const& - вектор A
* stappler::geom::Vec4 const& - вектор B

Возвращает:
* stappler::geom::Vec4 - результат деления A на B

# ::stappler::geom::operator<<(std::basic_ostream<char>&,stappler::geom::Vec4 const&)

## BRIEF

Вывод вектора в текстовый поток

## CONTENT

Вывод вектора в текстовый поток

Параметры:
* std::basic_ostream<char>&
* stappler::geom::Vec4 const&

Возвращает:
* std::basic_ostream<char>&


# ::stappler::geom::Vec4::Dimansions

## BRIEF

Число измерений для поэлементных алгоритмов

## CONTENT

Доступ: public

Число измерений для поэлементных алгоритмов

Тип: size_t const

# ::stappler::geom::Vec4::scale(stappler::geom::Vec4 const&,stappler::geom::Vec4 const&,stappler::geom::Vec4*)

## BRIEF

Вычисляет результат поэлементного умножения векторов и записывает результат по указателю

## CONTENT

Доступ: public

Вычисляет результат поэлементного умножения векторов и записывает результат по указателю

Параметры:
* stappler::geom::Vec4 const&
* stappler::geom::Vec4 const&
* stappler::geom::Vec4*

# ::stappler::geom::Vec4::unscale(stappler::geom::Vec4 const&,stappler::geom::Vec4 const&,stappler::geom::Vec4*)

## BRIEF

Вычисляет результат поэлементного деления векторов и записывает результат по указателю

## CONTENT

Доступ: public

Вычисляет результат поэлементного деления векторов и записывает результат по указателю

Параметры:
* stappler::geom::Vec4 const&
* stappler::geom::Vec4 const&
* stappler::geom::Vec4*

# ::stappler::geom::Vec4::bitop<typename>(stappler::geom::Vec4 const&,Functor const&)

## BRIEF

Применяет битовую операцию к вектору

## CONTENT

Доступ: public

Применяет битовую операцию к вектору

Параметры шаблона:
* typename Functor

Параметры:
* stappler::geom::Vec4 const&
* Functor const&

Возвращает:
* std::bitset<3>

# ::stappler::geom::Vec4::bitop<typename>(stappler::geom::Vec4 const&,stappler::geom::Vec4 const&,Functor const&)

## BRIEF

Применяет битовую операцию к двум векторам

## CONTENT

Доступ: public

Применяет битовую операцию к двум векторам

Параметры шаблона:
* typename Functor

Параметры:
* stappler::geom::Vec4 const&
* stappler::geom::Vec4 const&
* Functor const&

Возвращает:
* std::bitset<3>

# ::stappler::geom::Vec4::fill(float)

## BRIEF

Заполняет все элементы вектора числом

## CONTENT

Доступ: public

Заполняет все элементы вектора числом

Параметры:
* float

Возвращает:
* stappler::geom::Vec4

# ::stappler::geom::Vec4::Vec4<typename>(stappler::geom::Vec4 const&,Functor const&)

## BRIEF

Конструктор из применения поэлементной операции вектору

## CONTENT

Доступ: public

Конструктор из применения поэлементной операции вектору

Параметры шаблона:
* typename Functor

Параметры:
* stappler::geom::Vec4 const&
* Functor const&

# ::stappler::geom::Vec4::Vec4<typename>(stappler::geom::Vec4 const&,stappler::geom::Vec4 const&,Functor const&)

## BRIEF

Конструктор из применения поэлементной операции к двум векторам

## CONTENT

Доступ: public

Конструктор из применения поэлементной операции к двум векторам

Параметры шаблона:
* typename Functor

Параметры:
* stappler::geom::Vec4 const&
* stappler::geom::Vec4 const&
* Functor const&

# ::stappler::geom::Vec4::isValid() const

## BRIEF

Проверяет, что вектор не содержит NaN

## CONTENT

Доступ: public

Проверяет, что вектор не содержит NaN

Возвращает:
* bool

# ::stappler::geom::Vec4::add(float const&)

## BRIEF

Поэлементно добавляет число к вектору

## CONTENT

Доступ: public

Поэлементно добавляет число к вектору

Параметры:
* float const&

# ::stappler::geom::Vec4::subtract(float const&)

## BRIEF

Поэлментно вычитает число из вектора

## CONTENT

Доступ: public

Поэлментно вычитает число из вектора

Параметры:
* float const&

# ::stappler::geom::Vec4::scale(float const&)

## BRIEF

Поэлементно умножает вектор на число

## CONTENT

Доступ: public

Поэлементно умножает вектор на число

Параметры:
* float const&

# ::stappler::geom::Vec4::scale(stappler::geom::Vec4 const&)

## BRIEF

Поэлементно умножает векторы

## CONTENT

Доступ: public

Поэлементно умножает векторы

Параметры:
* stappler::geom::Vec4 const&

# ::stappler::geom::Vec4::unscale(float const&)

## BRIEF

Поэлементно делит вектор на число

## CONTENT

Доступ: public

Поэлементно делит вектор на число

Параметры:
* float const&

# ::stappler::geom::Vec4::unscale(stappler::geom::Vec4 const&)

## BRIEF

Поэлементно делит вектор на другой

## CONTENT

Доступ: public

Поэлементно делит вектор на другой

Параметры:
* stappler::geom::Vec4 const&


# ::stappler::geom::Vec4::isWithinDistance(stappler::geom::Vec4 const&,float) const

## BRIEF

Проверяет, что расстояние между векторами не больше значения

## CONTENT

Доступ: public

Проверяет, что расстояние между векторами не больше значения. Избегает использования sqrt

Параметры:
* stappler::geom::Vec4 const&
* float

Возвращает:
* bool

# ::stappler::geom::Vec4::operator+=(float const&)

## BRIEF

Поэлементно добавляет число к вектору

## CONTENT

Доступ: public

Поэлементно добавляет число к вектору

Параметры:
* float const&

Возвращает:
* stappler::geom::Vec4&

# ::stappler::geom::Vec4::operator-=(float const&)

## BRIEF

Поэлементно вычитает число из вектора

## CONTENT

Доступ: public

Поэлементно вычитает число из вектора

Параметры:
* float const&

Возвращает:
* stappler::geom::Vec4&

# ::stappler::geom::Vec4::operator*=(float const&)

## BRIEF

Поэлементно умножает вектор на число

## CONTENT

Доступ: public

Поэлементно умножает вектор на число

Параметры:
* float const&

Возвращает:
* stappler::geom::Vec4&

# ::stappler::geom::Vec4::operator*=(stappler::geom::Vec4 const&)

## BRIEF

Поэлементно умножает вектор на другой

## CONTENT

Доступ: public

Поэлементно умножает вектор на другой

Параметры:
* stappler::geom::Vec4 const&

Возвращает:
* stappler::geom::Vec4&

# ::stappler::geom::Vec4::operator/=(float const&)

## BRIEF

Поэлементно делит вектор на число

## CONTENT

Доступ: public

Поэлементно делит вектор на число

Параметры:
* float const&

Возвращает:
* stappler::geom::Vec4&

# ::stappler::geom::Vec4::operator/=(stappler::geom::Vec4 const&)

## BRIEF

Поэлементно делит вектор на другой

## CONTENT

Доступ: public

Поэлементно делит вектор на другой

Параметры:
* stappler::geom::Vec4 const&

Возвращает:
* stappler::geom::Vec4&

# ::stappler::geom::operator+(stappler::geom::Vec4 const&,stappler::geom::Vec4 const&)

## BRIEF

Поэлементно суммирует векторы

## CONTENT

Поэлементно суммирует векторы

Параметры:
* stappler::geom::Vec4 const&
* stappler::geom::Vec4 const&

Возвращает:
* stappler::geom::Vec4 const

# ::stappler::geom::operator+(stappler::geom::Vec4 const&,float const&)

## BRIEF

Поэлементно суммирует вектор с числом

## CONTENT

Поэлементно суммирует вектор с числом

Параметры:
* stappler::geom::Vec4 const&
* float const&

Возвращает:
* stappler::geom::Vec4 const

# ::stappler::geom::operator+(float const&,stappler::geom::Vec4 const&)

## BRIEF

Поэлементно суммирует вектор с числом

## CONTENT

Поэлементно суммирует вектор с числом

Параметры:
* float const&
* stappler::geom::Vec4 const&

Возвращает:
* stappler::geom::Vec4 const

# ::stappler::geom::operator-(stappler::geom::Vec4 const&,stappler::geom::Vec4 const&)

## BRIEF

Поэлементно вычитает один вектор из другого

## CONTENT

Поэлементно вычитает один вектор из другого

Параметры:
* stappler::geom::Vec4 const&
* stappler::geom::Vec4 const&

Возвращает:
* stappler::geom::Vec4 const

# ::stappler::geom::operator-(stappler::geom::Vec4 const&,float const&)

## BRIEF

Поэлементно вычитает число из вектора

## CONTENT

Поэлементно вычитает число из вектора

Параметры:
* stappler::geom::Vec4 const&
* float const&

Возвращает:
* stappler::geom::Vec4 const

# ::stappler::geom::operator*(stappler::geom::Vec4 const&,stappler::geom::Vec4 const&)

## BRIEF

Поэлементно умножает векторы

## CONTENT

Поэлементно умножает векторы

Параметры:
* stappler::geom::Vec4 const&
* stappler::geom::Vec4 const&

Возвращает:
* stappler::geom::Vec4 const

# ::stappler::geom::operator*(stappler::geom::Vec4 const&,float const&)

## BRIEF

Поэлементно умножает вектор на число

## CONTENT

Поэлементно умножает вектор на число

Параметры:
* stappler::geom::Vec4 const&
* float const&

Возвращает:
* stappler::geom::Vec4 const

# ::stappler::geom::operator*(float const&,stappler::geom::Vec4 const&)

## BRIEF

Поэлементно умножает вектор на число

## CONTENT

Поэлементно умножает вектор на число

Параметры:
* float const&
* stappler::geom::Vec4 const&

Возвращает:
* stappler::geom::Vec4 const

# ::stappler::geom::operator/(stappler::geom::Vec4 const&,stappler::geom::Vec4 const&)

## BRIEF

Поэлементно делит векторы

## CONTENT

Поэлементно делит векторы

Параметры:
* stappler::geom::Vec4 const&
* stappler::geom::Vec4 const&

Возвращает:
* stappler::geom::Vec4 const

# ::stappler::geom::operator/(stappler::geom::Vec4 const&,float const&)

## BRIEF

Поэлементно делит вектор на число

## CONTENT

Поэлементно делит вектор на число

Параметры:
* stappler::geom::Vec4 const&
* float const&

Возвращает:
* stappler::geom::Vec4 const

# ::stappler::geom::operator-(stappler::geom::Vec4 const&)

## BRIEF

Возвращает поэлементное отрицание вектора

## CONTENT

Возвращает поэлементное отрицание вектора

Параметры:
* stappler::geom::Vec4 const&

Возвращает:
* stappler::geom::Vec4