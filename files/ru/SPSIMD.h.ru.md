Title: SPSIMD.h


# STAPPLER_GEOM_SPSIMD_H_

## BRIEF

Заголовок базовых операций, выполняемых с помощью SIMD над 32-битными числами с плавающей точкой

## CONTENT

Заголовок базовых операций, выполняемых с помощью SIMD над 32-битными числами с плавающей точкой. Этот заголовок оописывает только общие и наиболее употребимые простые функции. Для блоее сложных нужно создавать отдельные функции.


# SP_SIMD_DEBUG

## BRIEF

Флаг отладки SIMD

## CONTENT

Флаг отладки SIMD


# SP_ATTR_OPTIMIZE_FN

## BRIEF

Атрибут оптимизации для функций SIMD

## CONTENT

Атрибут оптимизации для функций  SIMD. В отличии от общей практики, SIMD отлаживаются в режиме максимальной оптимизации, как они будет представлены в финальном приложении. Отладка ведётся через ассемблер.


# SP_ATTR_OPTIMIZE_INLINE_FN

## BRIEF

Атрибут оптимизации и вложенности для функций SIMD

## CONTENT

Атрибут оптимизации и вложенности для функций SIMD. В отличии от общей практики, SIMD отлаживаются в режиме максимальной оптимизации, как они будет представлены в финальном приложении. Отладка ведётся через ассемблер.


# SP_GEOM_DEFAULT_SIMD_SSE

## BRIEF

Флаговое значение использования SSE в качестве SIMD

## CONTENT

Флаговое значение использования SSE в качестве SIMD


# SP_GEOM_DEFAULT_SIMD_NEON

## BRIEF

Флаговое значение использования NEON в качестве SIMD

## CONTENT

Флаговое значение использования NEON в качестве SIMD


# SP_GEOM_DEFAULT_SIMD_NEON64

## BRIEF

Флаговое значение использования NEON на 64-битной платформе в качестве SIMD

## CONTENT

Флаговое значение использования NEON на 64-битной платформе в качестве SIMD


# SP_GEOM_DEFAULT_SIMD

## BRIEF

Текущий используемый вариант SIMD

## CONTENT

Текущий используемый вариант SIMD


# SP_GEOM_DEFAULT_SIMD_NAMESPACE

## BRIEF

Соотвествующее текущему SIMD пространство имён

## CONTENT

Соотвествующее текущему SIMD пространство имён. За счёт использования SIMDE, возможна компиляция всех вариантов SIMD, однако, только соотвествующая текущей платформе будет наиболее эффективной. Такая компиляция используется исключительно с целью получить более чистый и понятный код, исключая массу препроцессорных условий.


# ::stappler::simd::f32x4

## BRIEF

Тип, представляющий 4 32-битных значения с плавающей точкой

## CONTENT

Тип, представляющий 4 32-битных значения с плавающей точкой


# ::stappler::simd::load(float,float,float,float)

## BRIEF

Загружает аргументы в регистр

## CONTENT

Загружает аргументы в регистр

Параметры:
* float
* float
* float
* float

Возвращает:
* f32x4

# ::stappler::simd::load(float const[4])

## BRIEF

Загружает аргументы в регистр

## CONTENT

Загружает аргументы в регистр

Параметры:
* float const[4]

Возвращает:
* f32x4

# ::stappler::simd::load(float)

## BRIEF

Загружает одно число во все 4 элемента регистра

## CONTENT

Загружает одно число во все 4 элемента регистра

Параметры:
* float

Возвращает:
* f32x4

# ::stappler::simd::store(float[4],stappler::simd::f32x4 const&)

## BRIEF

Выгружает элементы из регистра

## CONTENT

Выгружает элементы из регистра

Параметры:
* float[4]
* stappler::simd::f32x4 const&


# ::stappler::simd::mul(stappler::simd::f32x4 const&,stappler::simd::f32x4 const&)

## BRIEF

Умножает два значения

## CONTENT

Умножает два значения

Параметры:
* stappler::simd::f32x4 const&
* stappler::simd::f32x4 const&

Возвращает:
* f32x4

# ::stappler::simd::div(stappler::simd::f32x4 const&,stappler::simd::f32x4 const&)

## BRIEF

Делит два значения

## CONTENT

Делит два значения

Параметры:
* stappler::simd::f32x4 const&
* stappler::simd::f32x4 const&

Возвращает:
* f32x4

# ::stappler::simd::add(stappler::simd::f32x4 const&,stappler::simd::f32x4 const&)

## BRIEF

Складывает два значения

## CONTENT

Складывает два значения

Параметры:
* stappler::simd::f32x4 const&
* stappler::simd::f32x4 const&

Возвращает:
* f32x4

# ::stappler::simd::sub(stappler::simd::f32x4 const&,stappler::simd::f32x4 const&)

## BRIEF

Вычитает два значения

## CONTENT

Вычитает два значения

Параметры:
* stappler::simd::f32x4 const&
* stappler::simd::f32x4 const&

Возвращает:
* f32x4

# ::stappler::simd::rsqrt(stappler::simd::f32x4 const&)

## BRIEF

Вычисляет обратный квадратный корень из значения

## CONTENT

Вычисляет обратный квадратный корень из значения

Параметры:
* stappler::simd::f32x4 const&

Возвращает:
* f32x4

# ::stappler::simd::load1(float)

## BRIEF

Загружает одиночное значение в регистр, оставляя другие поля пустыми

## CONTENT

Загружает одиночное значение в регистр, оставляя другие поля пустыми

Параметры:
* float

Возвращает:
* f32x4

# ::stappler::simd::store1(float*,stappler::simd::f32x4 const&)

## BRIEF

Выгружает одиночное значение из регистра

## CONTENT

Выгружает одиночное значение из регистра

Параметры:
* float*
* stappler::simd::f32x4 const&


# ::stappler::simd::mul1(stappler::simd::f32x4 const&,stappler::simd::f32x4 const&)

## BRIEF

Умножает одиночные значения

## CONTENT

Умножает одиночные значения

Параметры:
* stappler::simd::f32x4 const&
* stappler::simd::f32x4 const&

Возвращает:
* f32x4

# ::stappler::simd::add1(stappler::simd::f32x4 const&,stappler::simd::f32x4 const&)

## BRIEF

Суммирует одиночные значения

## CONTENT

Суммирует одиночные значения

Параметры:
* stappler::simd::f32x4 const&
* stappler::simd::f32x4 const&

Возвращает:
* f32x4

# ::stappler::simd::sub1(stappler::simd::f32x4 const&,stappler::simd::f32x4 const&)

## BRIEF

Вычитает одиночные значения

## CONTENT

Вычитает одиночные значения

Параметры:
* stappler::simd::f32x4 const&
* stappler::simd::f32x4 const&

Возвращает:
* f32x4

# ::stappler::simd::rsqrt1(stappler::simd::f32x4 const&)

## BRIEF

Вычисляет обратный квадратный корень из одиночного значения

## CONTENT

Вычисляет обратный квадратный корень из одиночного значения

Параметры:
* stappler::simd::f32x4 const&

Возвращает:
* f32x4

# ::stappler::simd::add(float const[4],float const[4],float[4])

## BRIEF

Суммирует наборы чисел

## CONTENT

Суммирует наборы чисел

Параметры:
* float const[4]
* float const[4]
* float[4]


# ::stappler::simd::add(float const[4],float const&,float[4])

## BRIEF

Суммирует наборы чисел

## CONTENT

Суммирует наборы чисел

Параметры:
* float const[4]
* float const&
* float[4]


# ::stappler::simd::sub(float const[4],float const[4],float[4])

## BRIEF

Вычитает наборы чисел

## CONTENT

Вычитает наборы чисел

Параметры:
* float const[4]
* float const[4]
* float[4]


# ::stappler::simd::sub(float const[4],float const&,float[4])

## BRIEF

Вычитает наборы чисел

## CONTENT

Вычитает наборы чисел

Параметры:
* float const[4]
* float const&
* float[4]


# ::stappler::simd::multiply(float const[4],float const[4],float[4])

## BRIEF

Умножает наборы чисел

## CONTENT

Умножает наборы чисел

Параметры:
* float const[4]
* float const[4]
* float[4]


# ::stappler::simd::multiply(float const[4],float const&,float[4])

## BRIEF

Умножает наборы чисел

## CONTENT

Умножает наборы чисел

Параметры:
* float const[4]
* float const&
* float[4]


# ::stappler::simd::divide(float const[4],float const[4],float[4])

## BRIEF

Делит наборы чисел

## CONTENT

Делит наборы чисел

Параметры:
* float const[4]
* float const[4]
* float[4]


# ::stappler::simd::divide(float const[4],float const&,float[4])

## BRIEF

Делит наборы чисел

## CONTENT

Делит наборы чисел

Параметры:
* float const[4]
* float const&
* float[4]


# ::stappler::simd::addMat4Scalar(float const[16],float,float[16])

## BRIEF

Добавляет скалярное значение ко всем значениям матрицы

## CONTENT

Добавляет скалярное значение ко всем значениям матрицы

Параметры:
* float const[16]
* float
* float[16]


# ::stappler::simd::addMat4(float const[16],float const[16],float[16])

## BRIEF

Суммирует матрицы

## CONTENT

Суммирует матрицы

Параметры:
* float const[16]
* float const[16]
* float[16]


# ::stappler::simd::subtractMat4(float const[16],float const[16],float[16])

## BRIEF

Вычитает матрицы

## CONTENT

Вычитает матрицы

Параметры:
* float const[16]
* float const[16]
* float[16]


# ::stappler::simd::multiplyMat4Scalar(float const[16],float,float[16])

## BRIEF

Умножает все значения матрицы на скаляр

## CONTENT

Умножает все значения матрицы на скаляр

Параметры:
* float const[16]
* float
* float[16]


# ::stappler::simd::multiplyMat4(float const[16],float const[16],float[16])

## BRIEF

Умножает две матрицы

## CONTENT

Умножает две матрицы

Параметры:
* float const[16]
* float const[16]
* float[16]


# ::stappler::simd::negateMat4(float const[16],float[16])

## BRIEF

Вычисляет обратную матрицу

## CONTENT

Вычисляет обратную матрицу

Параметры:
* float const[16]
* float[16]


# ::stappler::simd::transposeMat4(float const[16],float[16])

## BRIEF

Транспонирует матрицу

## CONTENT

Транспонирует матрицу

Параметры:
* float const[16]
* float[16]


# ::stappler::simd::transformVec4Components(float const[16],float,float,float,float,float[4])

## BRIEF

Трансформирует вектор с использованием матрицы

## CONTENT

Трансформирует вектор с использованием матрицы

Параметры:
* float const[16]
* float
* float
* float
* float
* float[4]


# ::stappler::simd::transformVec4(float const[16],float const[4],float[4])

## BRIEF

Трансформирует вектор с использованием матрицы

## CONTENT

Трансформирует вектор с использованием матрицы

Параметры:
* float const[16]
* float const[4]
* float[4]


# ::stappler::simd::crossVec3(float const[3],float const[3],float[3])

## BRIEF

Вычисляет векторное произведение

## CONTENT

Вычисляет векторное произведение

Параметры:
* float const[3]
* float const[3]
* float[3]


# ::stappler::simd::isVec2BboxIntersects(stappler::simd::f32x4 const&,stappler::simd::f32x4 const&,stappler::simd::f32x4&)

## BRIEF

Проверяет отрезки на наличие общего пространства, где возможно пересечение

## CONTENT

Проверяет отрезки на наличие общего пространства, где возможно пересечение. Функция может быстро отсекать случаи, когда пересечение невозможно, и даёт дополниетльные данные для продолжения вычислений.

См `::stappler::geom::EdgeDict::checkForIntersects` для примера использования

Параметры:
* stappler::simd::f32x4 const& - (ax, ay, bx, by)
* stappler::simd::f32x4 const& - (cx, cy, dx, dy)
* stappler::simd::f32x4& - возвращает общее пространство

Возвращает:
* bool - true если пересечение возможно
