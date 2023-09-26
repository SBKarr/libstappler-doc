Title: SPGeom.h


# CORE_GEOM_SPGEOM_H_

## BRIEF

Общие функции для геометрических примитивов

## CONTENT

Общие функции для геометрических примитивов. Описывает общие функции, используемые для совместимости геометрических примитивов с GLSL.


# ::stappler::geom::_StructFieldCount<typename>

## BRIEF

Структура для определения числа полей в геометрической структуре

## CONTENT

Структура для определения числа полей в геометрической структуре

Параметры шаблона:
* typename T - тип структуры


# ::stappler::geom::_StructFieldCount<typename>::Count

## BRIEF

Число полей в структуре

## CONTENT

Число полей в структуре

Тип: size_t const


# ::stappler::geom::_StructFieldCount<float>::_StructFieldCount<float>

## BRIEF

Специализация структуры числа полей для одиночного числа с плавающей точкой

## CONTENT

Специализация структуры числа полей для одиночного числа с плавающей точкой

# ::stappler::geom::_StructFieldCount<float>::Count

## BRIEF

Число полей в одиночном числе

## CONTENT

Число полей в одиночном числе. Очевидно, одно поле.

Тип: size_t const


# ::stappler::geom::_ApplyTrait<typename>

## BRIEF

Структура для применения функции к каждому из полей геометрической структуры

## CONTENT

Структура для применения функции к каждому из полей геометрической структуры

Параметры шаблона:
* typename T - тип геометрической структуры


# ::stappler::geom::_ApplyTrait<typename>::Bitset

## BRIEF

Соотвествующий тип результата битовой операции

## CONTENT

Соотвествующий тип результата битовой операции


# ::stappler::geom::_ApplyTrait<typename>::apply<typename>(T const&,Functor const&)

## BRIEF

Применяет функтор к каждому полю структуры

## CONTENT

Применяет функтор к каждому полю структуры

Параметры шаблона:
* typename Functor - тип функтора, должен принимать и возвращать один float

Параметры:
* T const& - геометрический объект
* Functor const& - функтор

Возвращает:
* T - новый геометрический объект

# ::stappler::geom::_ApplyTrait<typename>::apply<typename>(T const&,T const&,Functor const&)

## BRIEF

Применяет функтор к полям из двух структур

## CONTENT

Применяет функтор к полям из двух структур

Параметры шаблона:
* typename Functor - тип функтора, должен принимать два float и возвращать один float

Параметры:
* T const& - первый геометрический объект
* T const& - второй геометрический объект
* Functor const& - функтор

Возвращает:
* T - новый геометрический объект

# ::stappler::geom::_ApplyTrait<typename>::bitop<typename>(T const&,Functor const&)

## BRIEF

Применяет битовую операцию к геометрическому типу

## CONTENT

Применяет битовую операцию к геометрическому типу

Параметры шаблона:
* typename Functor - тип функтора, принимающий float и возвращающий bool

Параметры:
* T const& - геоматрический объект
* Functor const& - функтор

Возвращает:
* Bitset - результат операции

# ::stappler::geom::_ApplyTrait<typename>::bitop<typename>(T const&,T const&,Functor const&)

## BRIEF

Применяет битовую операцию к полям двух геометрических объектов

## CONTENT

Применяет битовую операцию к полям двух геометрических объектов

Параметры шаблона:
* typename Functor - тип функтора, принимающий два float и возвращающий bool

Параметры:
* T const& - первый геометрический объект
* T const& - второй геометрический объект
* Functor const& - функтор

Возвращает:
* Bitset - результат операции

# ::stappler::geom::_ApplyTrait<float>::_ApplyTrait<float>

## BRIEF

Специализация структуры применения функторов к одиночному float

## CONTENT

Специализация структуры применения функторов к одиночному float


# ::stappler::geom::_ApplyTrait<float>::Bitset

## BRIEF

Тип результата битовой операции

## CONTENT

Тип результата битовой операции


# ::stappler::geom::_ApplyTrait<float>::apply<typename>(float const&,Functor const&)

## BRIEF

Применяет функтор к числу

## CONTENT

Применяет функтор к числу

Параметры шаблона:
* typename Functor

Параметры:
* float const&
* Functor const&

Возвращает:
* float

# ::stappler::geom::_ApplyTrait<float>::apply<typename>(float const&,float const&,Functor const&)

## BRIEF

Применяет функтор к двум числам

## CONTENT

Применяет функтор к двум числам

Параметры шаблона:
* typename Functor

Параметры:
* float const&
* float const&
* Functor const&

Возвращает:
* float

# ::stappler::geom::_ApplyTrait<float>::bitop<typename>(float const&,Functor const&)

## BRIEF

Применяет логическую операцию к числу

## CONTENT

Применяет логическую операцию к числу

Параметры шаблона:
* typename Functor

Параметры:
* float const&
* Functor const&

Возвращает:
* Bitset

# ::stappler::geom::_ApplyTrait<float>::bitop<typename>(float const&,float const&,Functor const&)

## BRIEF

Применяет логическую операцию к двум числам

## CONTENT

Применяет логическую операцию к двум числам

Параметры шаблона:
* typename Functor

Параметры:
* float const&
* float const&
* Functor const&

Возвращает:
* Bitset

# ::stappler::geom::fill<typename>(float)

## BRIEF

Заполняет структуру значением

## CONTENT

Заполняет структуру значением

Параметры шаблона:
* typename T - геометрический тип

Параметры:
* float - число для заполнения

Возвращает:
* T - результат заполнения

# ::stappler::geom::fill(float)

## BRIEF

Специализация заполнения для одиночного float

## CONTENT

Специализация заполнения для одиночного float

Параметры:
* float

Возвращает:
* float

# ::stappler::geom::apply<typename,typename>(T const&,Functor const&)

## BRIEF

Приеняет функтор к геоматрической структуре

## CONTENT

Приеняет функтор к геоматрической структуре

Параметры шаблона:
* typename T - тип геометрической структуоры
* typename Functor - тип функтора, принимающего и возвращающего float

Параметры:
* T const& - геометрический объект
* Functor const& - функтор

Возвращает:
* T - новый геометрический объект

# ::stappler::geom::apply<typename,typename>(T const&,T const&,Functor const&)

## BRIEF

Приеняет функтор к двум геоматрическим структурам

## CONTENT

Приеняет функтор к двум геоматрическим структурам

Параметры шаблона:
* typename T - тип геометрической структуоры
* typename Functor - тип функтора, принимающего два float и возвращающего float

Параметры:
* T const& - первый геометрический объект
* T const& - второй геометрический объект
* Functor const& - функтор

Возвращает:
* T - новый геометрический объект

# ::stappler::geom::bitop<typename,typename>(T const&,Functor const&)

## BRIEF

Применяет логическую операцию к геометрическому объекту

## CONTENT

Применяет логическую операцию к геометрическому объекту

Параметры шаблона:
* typename T - тип геометрического объекта
* typename Functor - тип функтора, принимающего float и возвращающего bool

Параметры:
* T const& - геометрический объект
* Functor const& - функтор

Возвращает:
* std::bitset<_StructFieldCount<T>::Count> - результат операции

# ::stappler::geom::bitop<typename,typename>(T const&,T const&,Functor const&)

## BRIEF

Применяет логическую операцию к двум геометрическим объектам

## CONTENT

Применяет логическую операцию к двум геометрическим объектам

Параметры шаблона:
* typename T - тип геометрического объекта
* typename Functor - тип функтора, принимающего два float и возвращающего bool

Параметры:
* T const& - первый геометрический объект
* T const& - второй геометрический объект
* Functor const& - функтор

Возвращает:
* std::bitset<_StructFieldCount<T>::Count> - результат операции

# ::stappler::geom::_abs<typename>(T const&)

## BRIEF

Вычисляет абсолютное значение

## CONTENT

Вычисляет абсолютное значение

Параметры шаблона:
* typename T

Параметры:
* T const&

Возвращает:
* T

# ::stappler::geom::_ceil<typename>(T const&)

## BRIEF

Вычисляет верхний порог округления

## CONTENT

Вычисляет верхний порог округления

Параметры шаблона:
* typename T

Параметры:
* T const&

Возвращает:
* T

# ::stappler::geom::_floor<typename>(T const&)

## BRIEF

Вычисляет нижний порог округления

## CONTENT

Вычисляет нижний порог округления

Параметры шаблона:
* typename T

Параметры:
* T const&

Возвращает:
* T

# ::stappler::geom::_trunc<typename>(T const&)

## BRIEF

Отсекает дробную часть

## CONTENT

Отсекает дробную часть

Параметры шаблона:
* typename T

Параметры:
* T const&

Возвращает:
* T

# ::stappler::geom::_fract<typename>(T const&)

## BRIEF

Отсекает целую часть

## CONTENT

Отсекает целую часть

Параметры шаблона:
* typename T

Параметры:
* T const&

Возвращает:
* T

# ::stappler::geom::_round<typename>(T const&)

## BRIEF

Округляет число

## CONTENT

Округляет число

Параметры шаблона:
* typename T

Параметры:
* T const&

Возвращает:
* T

# ::stappler::geom::_sign<typename>(T const&)

## BRIEF

Возвращает знак значения

## CONTENT

Возвращает знак значения

Параметры шаблона:
* typename T

Параметры:
* T const&

Возвращает:
* T

# ::stappler::geom::_inversesqrt<typename>(T const&)

## BRIEF

Вычисляет обратный квадратный корень

## CONTENT

Вычисляет обратный квадратный корень

Параметры шаблона:
* typename T

Параметры:
* T const&

Возвращает:
* T

# ::stappler::geom::_max<typename>(T const&,T const&)

## BRIEF

Вычисляет максимум

## CONTENT

Вычисляет максимум

Параметры шаблона:
* typename T

Параметры:
* T const&
* T const&

Возвращает:
* T

# ::stappler::geom::_min<typename>(T const&,T const&)

## BRIEF

Вычисляет минимум

## CONTENT

Вычисляет минимум

Параметры шаблона:
* typename T

Параметры:
* T const&
* T const&

Возвращает:
* T

# ::stappler::geom::_mod<typename>(T const&,T const&)

## BRIEF

Вычисляет остаток от целочисленного деления

## CONTENT

Вычисляет остаток от целочисленного деления

Параметры шаблона:
* typename T

Параметры:
* T const&
* T const&

Возвращает:
* T

# ::stappler::geom::_step<typename>(T const&,T const&)

## BRIEF

Вычисляет step(edge, v)

## CONTENT

Вычисляет step(edge, v) (см GLSL)

Параметры шаблона:
* typename T

Параметры:
* T const&
* T const&

Возвращает:
* T

# ::stappler::geom::_equal<typename>(T const&,T const&)

## BRIEF

Сравнивает значения

## CONTENT

Сравнивает значения

Параметры шаблона:
* typename T

Параметры:
* T const&
* T const&

Возвращает:
* auto

# ::stappler::geom::_greaterThan<typename>(T const&,T const&)

## BRIEF

Сравнивает значения

## CONTENT

Сравнивает значения

Параметры шаблона:
* typename T

Параметры:
* T const&
* T const&

Возвращает:
* auto

# ::stappler::geom::_greaterThanEqual<typename>(T const&,T const&)

## BRIEF

Сравнивает значения

## CONTENT

Сравнивает значения

Параметры шаблона:
* typename T

Параметры:
* T const&
* T const&

Возвращает:
* auto

# ::stappler::geom::_lessThan<typename>(T const&,T const&)

## BRIEF

Сравнивает значения

## CONTENT

Сравнивает значения

Параметры шаблона:
* typename T

Параметры:
* T const&
* T const&

Возвращает:
* auto

# ::stappler::geom::_lessThanEqual<typename>(T const&,T const&)

## BRIEF

Сравнивает значения

## CONTENT

Сравнивает значения

Параметры шаблона:
* typename T

Параметры:
* T const&
* T const&

Возвращает:
* auto

# ::stappler::geom::_notEqual<typename>(T const&,T const&)

## BRIEF

Сравнивает значения

## CONTENT

Сравнивает значения

Параметры шаблона:
* typename T

Параметры:
* T const&
* T const&

Возвращает:
* auto

# ::stappler::geom::_isinf<typename>(T const&)

## BRIEF

Проверяет значение на бесконечность

## CONTENT

Проверяет значение на бесконечность

Параметры шаблона:
* typename T

Параметры:
* T const&

Возвращает:
* auto

# ::stappler::geom::_isnan<typename>(T const&)

## BRIEF

Проверяет значение на NaN

## CONTENT

Проверяет значение на NaN

Параметры шаблона:
* typename T

Параметры:
* T const&

Возвращает:
* auto