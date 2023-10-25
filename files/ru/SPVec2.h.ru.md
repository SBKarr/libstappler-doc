Title: SPVec2.h


# STAPPLER_GEOM_SPVEC2_H_

## BRIEF

Заголовок, определяющий структуру двумерного вектора

## CONTENT

Заголовок, определяющий структуру двумерного вектора

# ::stappler::geom::Vec2

## BRIEF

Структура двумерного вектора

## CONTENT

Структура двумерного вектора. Чаще всего используется как представление точки в двумерном пространстве

# ::stappler::geom::Vec2::clamp(stappler::geom::Vec2 const&,stappler::geom::Vec2 const&,stappler::geom::Vec2 const&,stappler::geom::Vec2*)

## BRIEF

Покомпонентно отсекает значения вектора

## CONTENT

Доступ: public

Покомпонентно отсекает значения вектора, сохраняет результат по указателю.

Параметры:
* stappler::geom::Vec2 const& - исходный вектор
* stappler::geom::Vec2 const& - вектор минимумов
* stappler::geom::Vec2 const& - вектор максимумов
* stappler::geom::Vec2* - указатель для сохранения результата.


# ::stappler::geom::Vec2::angle(stappler::geom::Vec2 const&,stappler::geom::Vec2 const&)

## BRIEF

Вычисляет угол между векторами

## CONTENT

Доступ: public

Вычисляет угол между векторами, использует atan2

Параметры:
* stappler::geom::Vec2 const&
* stappler::geom::Vec2 const&

Возвращает:
* float - угол между векторами

# ::stappler::geom::Vec2::dot(stappler::geom::Vec2 const&,stappler::geom::Vec2 const&)

## BRIEF

Вычисляет скалярное произведение векторов

## CONTENT

Доступ: public

Вычисляет скалярное произведение векторов

Параметры:
* stappler::geom::Vec2 const&
* stappler::geom::Vec2 const&

Возвращает:
* float - скалярное произведение векторов

# ::stappler::geom::Vec2::forAngle(float const)

## BRIEF

Создаёт единичный вектор из угла в радианах

## CONTENT

Доступ: public

Создаёт единичный вектор из угла в радианах

Параметры:
* float const - угол в радианах

Возвращает:
* stappler::geom::Vec2

# ::stappler::geom::Vec2::isLineIntersect(stappler::geom::Vec2 const&,stappler::geom::Vec2 const&,stappler::geom::Vec2 const&,stappler::geom::Vec2 const&,float*,float*)

## BRIEF

Вычисляет пересечение двух прямых

## CONTENT

Доступ: public

Вычисляет пересечение двух прямых, заданных отрезками

Параметры:
* stappler::geom::Vec2 const& - начало первого отрезка
* stappler::geom::Vec2 const& - конец первого отрезка
* stappler::geom::Vec2 const& - начало второго отрезка
* stappler::geom::Vec2 const& - конец второго отрезка
* float* - выходной параметр - барицентрическая координата пересечения по первому отрезку
* float* - выходной параметр - барицентрическая координата пересечения по второму отрезку

Возвращает:
* bool - true если прямые пересекаются

# ::stappler::geom::Vec2::isLineOverlap(stappler::geom::Vec2 const&,stappler::geom::Vec2 const&,stappler::geom::Vec2 const&,stappler::geom::Vec2 const&)

## BRIEF

Проверяет, наложены ли прямые друг на друга

## CONTENT

Доступ: public

Проверяет, наложены ли прямые друг на друга. Прямые задаются отрезками

Параметры:
* stappler::geom::Vec2 const& - начало первого отрезка
* stappler::geom::Vec2 const& - конец первого отрезка
* stappler::geom::Vec2 const& - начало второго отрезка
* stappler::geom::Vec2 const& - конец второго отрезка

Возвращает:
* bool - true если прямые наложены друг на друга

# ::stappler::geom::Vec2::isLineParallel(stappler::geom::Vec2 const&,stappler::geom::Vec2 const&,stappler::geom::Vec2 const&,stappler::geom::Vec2 const&)

## BRIEF

Проверяет, параллельны ли прямые

## CONTENT

Доступ: public

Проверяет, параллельны ли прямые

Параметры:
* stappler::geom::Vec2 const& - начало первого отрезка
* stappler::geom::Vec2 const& - конец первого отрезка
* stappler::geom::Vec2 const& - начало второго отрезка
* stappler::geom::Vec2 const& - конец второго отрезка

Возвращает:
* bool - true если прямые параллельны

# ::stappler::geom::Vec2::isSegmentOverlap(stappler::geom::Vec2 const&,stappler::geom::Vec2 const&,stappler::geom::Vec2 const&,stappler::geom::Vec2 const&,stappler::geom::Vec2*,stappler::geom::Vec2*)

## BRIEF

Проверяет наложены ли отрезки друг на друга

## CONTENT

Доступ: public

Проверяет наложены ли отрезки друг на друга, возвращает барицентрические координаты опорных точек наложения

Параметры:
* stappler::geom::Vec2 const& - начало первого отрезка
* stappler::geom::Vec2 const& - конец первого отрезка
* stappler::geom::Vec2 const& - начало второго отрезка
* stappler::geom::Vec2 const& - конец второго отрезка
* stappler::geom::Vec2* - барицентрические координаты первой опорной точки по отрезкам
* stappler::geom::Vec2* - барицентрические координаты второй опорной точки по отрезкам

Возвращает:
* bool - true если отрезки наложены друг на друга

# ::stappler::geom::Vec2::isSegmentIntersect(stappler::geom::Vec2 const&,stappler::geom::Vec2 const&,stappler::geom::Vec2 const&,stappler::geom::Vec2 const&)

## BRIEF

Проверяет, пересекаются ли отрезки

## CONTENT

Доступ: public

Проверяет, пересекаются ли отрезки

Параметры:
* stappler::geom::Vec2 const& - начало первого отрезка
* stappler::geom::Vec2 const& - конец первого отрезка
* stappler::geom::Vec2 const& - начало второго отрезка
* stappler::geom::Vec2 const& - конец второго отрезка

Возвращает:
* bool - true если отрезки пересекаются

# ::stappler::geom::Vec2::getIntersectPoint(stappler::geom::Vec2 const&,stappler::geom::Vec2 const&,stappler::geom::Vec2 const&,stappler::geom::Vec2 const&)

## BRIEF

Возвращает точку пересечения двух прямых

## CONTENT

Доступ: public

Возвращает точку пересечения двух прямых, или нулевую точку, если прямые не пересекаются. Прямые задаются отрезками.

Параметры:
* stappler::geom::Vec2 const& - начало первого отрезка
* stappler::geom::Vec2 const& - конец первого отрезка
* stappler::geom::Vec2 const& - начало второго отрезка
* stappler::geom::Vec2 const& - конец второго отрезка

Возвращает:
* stappler::geom::Vec2

# ::stappler::geom::Vec2::getSegmentIntersectPoint<typename>(stappler::geom::Vec2 const&,stappler::geom::Vec2 const&,stappler::geom::Vec2 const&,stappler::geom::Vec2 const&,Callback const&)

## BRIEF

Проверяет отрезки на пересечение

## CONTENT

Доступ: public

Проверяет отрезки на пересечение, вызывает функтор, если пересечение найдено

Параметры шаблона:
* typename Callback - тип функтора, должен вызываться по сигнатуре `void(const Vec2 &, float S, float T)`

Параметры:
* stappler::geom::Vec2 const& - начало первого отрезка
* stappler::geom::Vec2 const& - конец первого отрезка
* stappler::geom::Vec2 const& - начало второго отрезка
* stappler::geom::Vec2 const& - конец второго отрезка
* Callback const& - функтор результата

Возвращает:
* bool - true если отрезки пересекаются

# ::stappler::geom::Vec2::isCounterClockwise(stappler::geom::Vec2 const&,stappler::geom::Vec2 const&,stappler::geom::Vec2 const&)

## BRIEF

Проверяет, расположены ли три точки в порядке против часовой стрелки

## CONTENT

Доступ: public

Проверяет, расположены ли три точки в порядке против часовой стрелки. Если точки расположены на одной прямой - результат не определён.

Параметры:
* stappler::geom::Vec2 const&
* stappler::geom::Vec2 const&
* stappler::geom::Vec2 const&

Возвращает:
* bool - true если точки расположены в порядке против часовой стрелки

# ::stappler::geom::Vec2::ZERO

## BRIEF

Статическая нулевая точка

## CONTENT

Доступ: public

Тип: stappler::geom::Vec2 const

Статическая нулевая точка (0, 0)

# ::stappler::geom::Vec2::ONE

## BRIEF

Статическая точка 1, 1

## CONTENT

Доступ: public

Тип: stappler::geom::Vec2 const

Статическая точка 1, 1

# ::stappler::geom::Vec2::UNIT_X

## BRIEF

Единичная точка по координате X

## CONTENT

Доступ: public

Тип: stappler::geom::Vec2 const

Единичная точка по координате X (1, 0)

# ::stappler::geom::Vec2::UNIT_Y

## BRIEF

Единичная точка по кооринате Y

## CONTENT

Доступ: public

Тип: stappler::geom::Vec2 const

Единичная точка по кооринате Y (0, 1)

# ::stappler::geom::Vec2::x

## BRIEF

Значение X

## CONTENT

Доступ: public

Тип: float

Значение X

# ::stappler::geom::Vec2::y

## BRIEF

Значение Y

## CONTENT

Доступ: public

Тип: float

Значение Y

# ::stappler::geom::Vec2::Vec2()

## BRIEF

Конструктор по умолчанию

## CONTENT

Доступ: public

Конструктор по умолчанию, создаёт нулевую точку

# ::stappler::geom::Vec2::Vec2(float,float)

## BRIEF

Покомпонентный конструктор

## CONTENT

Доступ: public

Покомпонентный конструктор

Параметры:
* float - x
* float - y


# ::stappler::geom::Vec2::Vec2(stappler::geom::Vec2 const&,stappler::geom::Vec2 const&)

## BRIEF

Конструктор из разности точек

## CONTENT

Доступ: public

Конструктор из разности точек (B - A)

Параметры:
* stappler::geom::Vec2 const& - A
* stappler::geom::Vec2 const& - B


# ::stappler::geom::Vec2::Vec2(stappler::geom::Vec2 const&)

## BRIEF

Конструктор копирования

## CONTENT

Доступ: public

Конструктор копирования по умолчанию

Параметры:
* stappler::geom::Vec2 const&


# ::stappler::geom::Vec2::Vec2(stappler::geom::Size2 const&)

## BRIEF

Конструктор из двумерого размера

## CONTENT

Доступ: public

Конструктор из двумерого размера, копирует ширину и высоту в x и y соотвественно

Параметры:
* stappler::geom::Size2 const&


# ::stappler::geom::Vec2::isValid() const

## BRIEF

Проверяет, действительна ли текущая точка

## CONTENT

Доступ: public

Проверяет, действительна ли текущая точка, то есть, обе координаты не в состоянии NaN

Возвращает:
* bool - true если обе координаты не в состоянии NaN

# ::stappler::geom::Vec2::add(stappler::geom::Vec2 const&)

## BRIEF

Добавляет другую точку к текущей

## CONTENT

Доступ: public

Добавляет другую точку к текущей

Параметры:
* stappler::geom::Vec2 const&


# ::stappler::geom::Vec2::distanceSquared(stappler::geom::Vec2 const&) const

## BRIEF

Вычисляет квадрат расстояния между точками

## CONTENT

Доступ: public

Вычисляет квадрат расстояния между точками, используется для избежания квадратного корня в алгоритмах

Параметры:
* stappler::geom::Vec2 const&

Возвращает:
* float - квадрат расстояния между точками

# ::stappler::geom::Vec2::isWithinDistance(stappler::geom::Vec2 const&,float) const

## BRIEF

Проверяет, что расстояние между точками меньше числа

## CONTENT

Доступ: public

Проверяет, что расстояние между точками меньше числа

Параметры:
* stappler::geom::Vec2 const&
* float

Возвращает:
* bool - true если расстояние между точками меньше числа

# ::stappler::geom::Vec2::dot(stappler::geom::Vec2 const&) const

## BRIEF

Вычисляет скалярное произведение векторов

## CONTENT

Доступ: public

Вычисляет скалярное произведение векторов

Параметры:
* stappler::geom::Vec2 const&

Возвращает:
* float - скалярное произведение векторов

# ::stappler::geom::Vec2::lengthSquared() const

## BRIEF

Возвращает квадрат длины вектора

## CONTENT

Доступ: public

Возвращает квадрат длины вектора, используется для исключения квадатного корня в алгоритмах

Возвращает:
* float - квадрат длины вектора

# ::stappler::geom::Vec2::negate()

## BRIEF

Отрицает текущий вектор

## CONTENT

Доступ: public

Отрицает текущий вектор, умножает на -1

# ::stappler::geom::Vec2::scale(stappler::geom::Vec2 const&)

## BRIEF

Покомпонентно умножает вектора

## CONTENT

Доступ: public

Покомпонентно умножает вектора

Параметры:
* stappler::geom::Vec2 const&


# ::stappler::geom::Vec2::subtract(stappler::geom::Vec2 const&)

## BRIEF

Вычитает вектор из текущего

## CONTENT

Доступ: public

Вычитает вектор из текущего

Параметры:
* stappler::geom::Vec2 const&


# ::stappler::geom::Vec2::operator+=(stappler::geom::Vec2 const&)

## BRIEF

Добавляет вектор к текущему

## CONTENT

Доступ: public

Добавляет вектор к текущему

Параметры:
* stappler::geom::Vec2 const&

Возвращает:
* stappler::geom::Vec2&

# ::stappler::geom::Vec2::operator-=(stappler::geom::Vec2 const&)

## BRIEF

Вычитает вектор из текущего

## CONTENT

Доступ: public

Вычитает вектор из текущего

Параметры:
* stappler::geom::Vec2 const&

Возвращает:
* stappler::geom::Vec2&


# ::stappler::geom::Vec2::fuzzyEquals(stappler::geom::Vec2 const&,float) const

## BRIEF

Сравнивает два вектора с некоторым допуском

## CONTENT

Доступ: public

Сравнивает два вектора с некоторым допуском

Параметры:
* stappler::geom::Vec2 const&
* float - допуск для сравнения

Возвращает:
* bool - true если вектора равны с заданной погрешностью


# ::stappler::geom::Vec2::getAngle() const

## BRIEF

Возвращает угол между вектором и осью X

## CONTENT

Доступ: public

Возвращает угол между вектором и осью X

Возвращает:
* float

# ::stappler::geom::Vec2::cross(stappler::geom::Vec2 const&) const

## BRIEF

Возвращает псевдоскалярное произведение векторов

## CONTENT

Доступ: public

Возвращает псевдоскалярное произведение векторов

Параметры:
* stappler::geom::Vec2 const&

Возвращает:
* float - псевдоскалярное произведение векторов

# ::stappler::geom::Vec2::getPerp() const

## BRIEF

Возвращает вектор, перпендикулярный текущему

## CONTENT

Возвращает вектор, перпендикулярный текущему, вращает против часовой стрелки

Доступ: public

Возвращает:
* stappler::geom::Vec2

# ::stappler::geom::Vec2::getMidpoint(stappler::geom::Vec2 const&) const

## BRIEF

Возвращает среднюю точку между двумя векторами

## CONTENT

Доступ: public

Возвращает среднюю точку между двумя векторами

Параметры:
* stappler::geom::Vec2 const&

Возвращает:
* stappler::geom::Vec2

# ::stappler::geom::Vec2::getClampPoint(stappler::geom::Vec2 const&,stappler::geom::Vec2 const&) const

## BRIEF

Возвращает точку после отсечения

## CONTENT

Доступ: public

Возвращает точку после отсечения по минимальным и максимальным значениям

Параметры:
* stappler::geom::Vec2 const& - вектор минимумов
* stappler::geom::Vec2 const& - вектор максимумов

Возвращает:
* stappler::geom::Vec2

# ::stappler::geom::Vec2::getRPerp() const

## BRIEF

Возвращает правый перпендикуляр

## CONTENT

Доступ: public

Возвращает правый перпендикуляр (перпендикуляр с поворотом по часовой стрелке)

Возвращает:
* stappler::geom::Vec2

# ::stappler::geom::Vec2::project(stappler::geom::Vec2 const&) const

## BRIEF

Возвращает проекцию другого вектора на текущий

## CONTENT

Доступ: public

Возвращает проекцию другого вектора на текущий

Параметры:
* stappler::geom::Vec2 const&

Возвращает:
* stappler::geom::Vec2

# ::stappler::geom::Vec2::rotate(stappler::geom::Vec2 const&) const

## BRIEF

Возвращает результат поворота текущего вектора вокруг другого.

## CONTENT

Доступ: public

Возвращает результат поворота текущего вектора вокруг другого. Угод нового вектора по отношению к оси X будет суммой уголов двух других векторов, а длина - суммой длин.

Параметры:
* stappler::geom::Vec2 const&

Возвращает:
* stappler::geom::Vec2

# ::stappler::geom::Vec2::unrotate(stappler::geom::Vec2 const&) const

## BRIEF

Возвращает результат контрповорота текущего вектора вокруг другого.

## CONTENT

Возвращает результат контрповорота текущего вектора вокруг другого. Обратная операция по отношению к повороту.

Доступ: public

Параметры:
* stappler::geom::Vec2 const&

Возвращает:
* stappler::geom::Vec2

# ::stappler::geom::Vec2::getAngle(stappler::geom::Vec2 const&) const

## BRIEF

Возвращает угол между векторами

## CONTENT

Доступ: public

Возвращает угол между векторами

Параметры:
* stappler::geom::Vec2 const&

Возвращает:
* float


# ::stappler::geom::Vec2::getNormalized() const

## BRIEF

Возвращает нормализованный вектор

## CONTENT

Доступ: public

Возвращает нормализованный вектор

Возвращает:
* stappler::geom::Vec2


# ::stappler::geom::Vec2::rotateByAngle(stappler::geom::Vec2 const&,float) const

## BRIEF

Возвращает вектор, повёрнутый на определённый угол вокруг опоры

## CONTENT

Доступ: public

Возвращает вектор, повёрнутый на определённый угол вокруг опоры

Параметры:
* stappler::geom::Vec2 const& - точка опоры
* float - угол поворота

Возвращает:
* stappler::geom::Vec2

# ::stappler::geom::Vec2::clamp(stappler::geom::Vec2 const&,stappler::geom::Vec2 const&)

## BRIEF

Усекает текущий вектор

## CONTENT

Доступ: public

Усекает текущий вектор по максимуму и минимуму

Параметры:
* stappler::geom::Vec2 const& - вектор минимумов
* stappler::geom::Vec2 const& - вектор максимумов


# ::stappler::geom::Vec2::normalize()

## BRIEF

Нормализует текущий вектор

## CONTENT

Доступ: public

Нормализует текущий вектор

Возвращает:
* stappler::geom::Vec2&

# ::stappler::geom::Vec2::rotate(stappler::geom::Vec2 const&,float)

## BRIEF

Поворачивает текущий вектор на определённый угол вокруг опоры

## CONTENT

Доступ: public

Поворачивает текущий вектор на определённый угол вокруг опоры

Параметры:
* stappler::geom::Vec2 const& - точка опоры
* float - угол поворота


# ::stappler::geom::Anchor::Middle

## BRIEF

Опорная точка в двумерном пространстве: центр

## CONTENT

Тип: stappler::geom::Vec2 const

Опорная точка в двумерном пространстве: центр

# ::stappler::geom::Anchor::BottomLeft

## BRIEF

Опорная точка в двумерном пространстве: нижний левый угол

## CONTENT

Тип: stappler::geom::Vec2 const

Опорная точка в двумерном пространстве: нижний левый угол

# ::stappler::geom::Anchor::TopLeft

## BRIEF

Опорная точка в двумерном пространстве: верхний левый угол

## CONTENT

Тип: stappler::geom::Vec2 const

Опорная точка в двумерном пространстве: верхний левый угол

# ::stappler::geom::Anchor::BottomRight

## BRIEF

Опорная точка в двумерном пространстве: нижний правый угол

## CONTENT

Тип: stappler::geom::Vec2 const

Опорная точка в двумерном пространстве: нижний правый угол

# ::stappler::geom::Anchor::TopRight

## BRIEF

Опорная точка в двумерном пространстве: верхний правый угол

## CONTENT

Тип: stappler::geom::Vec2 const

Опорная точка в двумерном пространстве: верхний правый угол

# ::stappler::geom::Anchor::MiddleRight

## BRIEF

Опорная точка в двумерном пространстве: середина правой грани

## CONTENT

Тип: stappler::geom::Vec2 const

Опорная точка в двумерном пространстве: середина правой грани

# ::stappler::geom::Anchor::MiddleLeft

## BRIEF

Опорная точка в двумерном пространстве: середина левой грани

## CONTENT

Тип: stappler::geom::Vec2 const

Опорная точка в двумерном пространстве: середина левой грани

# ::stappler::geom::Anchor::MiddleTop

## BRIEF

Опорная точка в двумерном пространстве: середина верхней грани

## CONTENT

Тип: stappler::geom::Vec2 const

Опорная точка в двумерном пространстве: середина верхней грани

# ::stappler::geom::Anchor::MiddleBottom

## BRIEF

Опорная точка в двумерном пространстве: середина нижней грани

## CONTENT

Тип: stappler::geom::Vec2 const

Опорная точка в двумерном пространстве: середина нижней грани

# ::stappler::geom::operator*(stappler::geom::Vec2 const&,stappler::geom::Vec2 const&)

## BRIEF

Возвращает результат покомпонентного умножения векторов

## CONTENT

Возвращает результат покомпонентного умножения векторов

Параметры:
* stappler::geom::Vec2 const&
* stappler::geom::Vec2 const&

Возвращает:
* stappler::geom::Vec2 const

# ::stappler::geom::operator/(stappler::geom::Vec2 const&,stappler::geom::Vec2 const&)

## BRIEF

Возвращает результат покомпонентного деления векторов

## CONTENT

Возвращает результат покомпонентного деления векторов

Параметры:
* stappler::geom::Vec2 const&
* stappler::geom::Vec2 const&

Возвращает:
* stappler::geom::Vec2 const

# ::stappler::geom::operator<<(std::basic_ostream<char>&,stappler::geom::Vec2 const&)

## BRIEF

Выводит вектор в текстовый поток

## CONTENT

Выводит вектор в текстовый поток

Параметры:
* std::basic_ostream<char>&
* stappler::geom::Vec2 const&

Возвращает:
* std::basic_ostream<char>&


# ::stappler::geom::Vec2::Dimansions

## BRIEF

Размерность вектора для параллельных алгоритмов

## CONTENT

Доступ: public

Размерность вектора для параллельных алгоритмов

Тип: size_t const

# ::stappler::geom::Vec2::add(stappler::geom::Vec2 const&,stappler::geom::Vec2 const&,stappler::geom::Vec2*)

## BRIEF

Суммирует векторы, записывает результат по указателю

## CONTENT

Доступ: public

Суммирует векторы, записывает результат по указателю

Параметры:
* stappler::geom::Vec2 const&
* stappler::geom::Vec2 const&
* stappler::geom::Vec2*

# ::stappler::geom::Vec2::subtract(stappler::geom::Vec2 const&,stappler::geom::Vec2 const&,stappler::geom::Vec2*)

## BRIEF

Вычисляет разность векторов, записывает результат по указателю

## CONTENT

Доступ: public

Вычисляет разность векторов, записывает результат по указателю

Параметры:
* stappler::geom::Vec2 const&
* stappler::geom::Vec2 const&
* stappler::geom::Vec2*

# ::stappler::geom::Vec2::scale(stappler::geom::Vec2 const&,stappler::geom::Vec2 const&,stappler::geom::Vec2*)

## BRIEF

Вычисляет поэлементное произведение векторов, записывает результат по указателю

## CONTENT

Доступ: public

Вычисляет поэлементное произведение векторов, записывает результат по указателю

Параметры:
* stappler::geom::Vec2 const&
* stappler::geom::Vec2 const&
* stappler::geom::Vec2*

# ::stappler::geom::Vec2::unscale(stappler::geom::Vec2 const&,stappler::geom::Vec2 const&,stappler::geom::Vec2*)

## BRIEF

Поэлементно делит векторы, записывает результат по указателю

## CONTENT

Поэлементно делит векторы, записывает результат по указателю

Доступ: public

Параметры:
* stappler::geom::Vec2 const&
* stappler::geom::Vec2 const&
* stappler::geom::Vec2*

# ::stappler::geom::Vec2::cross(stappler::geom::Vec2 const&,stappler::geom::Vec2 const&)

## BRIEF

Вычисляет псевдоскалярное произведение векторов

## CONTENT

Доступ: public

Вычисляет псевдоскалярное произведение векторов

Параметры:
* stappler::geom::Vec2 const&
* stappler::geom::Vec2 const&

Возвращает:
* float

# ::stappler::geom::Vec2::bitop<typename>(stappler::geom::Vec2 const&,Functor const&)

## BRIEF

Выполняет поэлементную битовую операцию над вектором

## CONTENT

Доступ: public

Выполняет поэлементную битовую операцию над вектором

Параметры шаблона:
* typename Functor

Параметры:
* stappler::geom::Vec2 const&
* Functor const&

Возвращает:
* std::bitset<2>

# ::stappler::geom::Vec2::bitop<typename>(stappler::geom::Vec2 const&,stappler::geom::Vec2 const&,Functor const&)

## BRIEF

Выполняет поэлементную битовую операцию над двумя векторами

## CONTENT

Доступ: public

Выполняет поэлементную битовую операцию над двумя векторами

Параметры шаблона:
* typename Functor

Параметры:
* stappler::geom::Vec2 const&
* stappler::geom::Vec2 const&
* Functor const&

Возвращает:
* std::bitset<2>

# ::stappler::geom::Vec2::fill(float)

## BRIEF

Заполняет значением все элементы вектора

## CONTENT

Доступ: public

Заполняет значением все элементы вектора

Параметры:
* float

Возвращает:
* stappler::geom::Vec2

# ::stappler::geom::Vec2::Vec2<typename>(stappler::geom::Vec2 const&,Functor const&)

## BRIEF

Инициализирует вектор, выполняя поэлементную операцию над другим вектором

## CONTENT

Доступ: public

Инициализирует вектор, выполняя поэлементную операцию над другим вектором

Параметры шаблона:
* typename Functor

Параметры:
* stappler::geom::Vec2 const&
* Functor const&

# ::stappler::geom::Vec2::Vec2<typename>(stappler::geom::Vec2 const&,stappler::geom::Vec2 const&,Functor const&)

## BRIEF

Инициализирует вектор, выполняя поэлементную операцию над другими вектороми

## CONTENT

Доступ: public

Инициализирует вектор, выполняя поэлементную операцию над другими вектороми

Параметры шаблона:
* typename Functor

Параметры:
* stappler::geom::Vec2 const&
* stappler::geom::Vec2 const&
* Functor const&

# ::stappler::geom::Vec2::Vec2(stappler::geom::Extent2 const&)

## BRIEF

Инициализирует вектор из целочисленного размера

## CONTENT

Доступ: public

Инициализирует вектор из целочисленного размера

Параметры:
* stappler::geom::Extent2 const&

# ::stappler::geom::Vec2::add(float const&)

## BRIEF

Добавляет число ко всем элементам вектора

## CONTENT

Доступ: public

Добавляет число ко всем элементам вектора

Параметры:
* float const&

# ::stappler::geom::Vec2::subtract(float const&)

## BRIEF

Вычитает число из всех элементов вектора

## CONTENT

Доступ: public

Вычитает число из всех элементов вектора

Параметры:
* float const&

# ::stappler::geom::Vec2::scale(float const&)

## BRIEF

Умножает элементы вектора на число

## CONTENT

Доступ: public

Умножает элементы вектора на число

Параметры:
* float const&

# ::stappler::geom::Vec2::unscale(float const&)

## BRIEF

Делит элементы вектора на число

## CONTENT

Доступ: public

Делит элементы вектора на число

Параметры:
* float const&

# ::stappler::geom::Vec2::unscale(stappler::geom::Vec2 const&)

## BRIEF

Поэлементно делит вектор

## CONTENT

Доступ: public

Поэлементно делит вектор

Параметры:
* stappler::geom::Vec2 const&

# ::stappler::geom::Vec2::distance(stappler::geom::Vec2 const&) const

## BRIEF

Вычисляет расстояние до другого вектора

## CONTENT

Доступ: public

Вычисляет расстояние до другого вектора, использует sqrt.

Параметры:
* stappler::geom::Vec2 const&

Возвращает:
* float

# ::stappler::geom::Vec2::length() const

## BRIEF

Вычисляет длину вектора

## CONTENT

Доступ: public

Вычисляет длину вектора, использует sqrt

Возвращает:
* float

# ::stappler::geom::Vec2::operator+=(float const&)

## BRIEF

Добавляет число к элементам вектора

## CONTENT

Доступ: public

Добавляет число к элементам вектора

Параметры:
* float const&

Возвращает:
* stappler::geom::Vec2&

# ::stappler::geom::Vec2::operator-=(float const&)

## BRIEF

Вычитает число из элементов вектора

## CONTENT

Доступ: public

Вычитает число из элементов вектора

Параметры:
* float const&

Возвращает:
* stappler::geom::Vec2&

# ::stappler::geom::Vec2::operator*=(float const&)

## BRIEF

Умножает элементы вектора на число

## CONTENT

Доступ: public

Умножает элементы вектора на число

Параметры:
* float const&

Возвращает:
* stappler::geom::Vec2&

# ::stappler::geom::Vec2::operator*=(stappler::geom::Vec2 const&)

## BRIEF

Поэлементно умножает вектор

## CONTENT

Доступ: public

Поэлементно умножает вектор

Параметры:
* stappler::geom::Vec2 const&

Возвращает:
* stappler::geom::Vec2&

# ::stappler::geom::Vec2::operator/=(float const&)

## BRIEF

Делит элементы вектора на число

## CONTENT

Доступ: public

Делит элементы вектора на число

Параметры:
* float const&

Возвращает:
* stappler::geom::Vec2&

# ::stappler::geom::Vec2::operator/=(stappler::geom::Vec2 const&)

## BRIEF

Поэлементно делит вектор

## CONTENT

Доступ: public

Поэлементно делит вектор

Параметры:
* stappler::geom::Vec2 const&

Возвращает:
* stappler::geom::Vec2&

# ::stappler::geom::operator+(stappler::geom::Vec2 const&,stappler::geom::Vec2 const&)

## BRIEF

Вычисляет сумму векторов

## CONTENT

Вычисляет сумму векторов

Параметры:
* stappler::geom::Vec2 const&
* stappler::geom::Vec2 const&

Возвращает:
* stappler::geom::Vec2 const

# ::stappler::geom::operator+(stappler::geom::Vec2 const&,float const&)

## BRIEF

Вычисляет поэлементную сумму вектора и числа

## CONTENT

Вычисляет поэлементную сумму вектора и числа

Параметры:
* stappler::geom::Vec2 const&
* float const&

Возвращает:
* stappler::geom::Vec2 const

# ::stappler::geom::operator+(float const&,stappler::geom::Vec2 const&)

## BRIEF

Вычисляет поэлементную сумму вектора и числа

## CONTENT

Вычисляет поэлементную сумму вектора и числа

Параметры:
* float const&

# ::stappler::geom::operator-(stappler::geom::Vec2 const&,stappler::geom::Vec2 const&)

## BRIEF

Вычисляет разность векторов

## CONTENT

Вычисляет разность векторов

Параметры:
* stappler::geom::Vec2 const&
* stappler::geom::Vec2 const&

Возвращает:
* stappler::geom::Vec2 const
* stappler::geom::Vec2 const&

Возвращает:
* stappler::geom::Vec2 const

# ::stappler::geom::operator-(stappler::geom::Vec2 const&,float const&)

## BRIEF

Вычисляет поэлементную разность вектора и числа

## CONTENT

Вычисляет поэлементную разность вектора и числа

Параметры:
* stappler::geom::Vec2 const&
* float const&

Возвращает:
* stappler::geom::Vec2 const

# ::stappler::geom::operator*(stappler::geom::Vec2 const&,float const&)

## BRIEF

Вычисляет поэлементное произведение вектора и числа

## CONTENT

Вычисляет поэлементное произведение вектора и числа

Параметры:
* stappler::geom::Vec2 const&
* float const&

Возвращает:
* stappler::geom::Vec2 const

# ::stappler::geom::operator*(float const&,stappler::geom::Vec2 const&)

## BRIEF

Вычисляет поэлементное произведение вектора и числа

## CONTENT

Вычисляет поэлементное произведение вектора и числа

Параметры:
* float const&
* stappler::geom::Vec2 const&

Возвращает:
* stappler::geom::Vec2 const

# ::stappler::geom::operator/(stappler::geom::Vec2 const&,float const&)

## BRIEF

Поэлементно делит вектор на число

## CONTENT

Поэлементно делит вектор на число

Параметры:
* stappler::geom::Vec2 const&
* float const&

Возвращает:
* stappler::geom::Vec2 const

# ::stappler::geom::operator-(stappler::geom::Vec2 const&)

## BRIEF

Возвращает поэлементное отрицание вектора

## CONTENT

Возвращает поэлементное отрицание вектора

Параметры:
* stappler::geom::Vec2 const&

Возвращает:
* stappler::geom::Vec2
* float const&

Возвращает:
* stappler::geom::Vec2 const