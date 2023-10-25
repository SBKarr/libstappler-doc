Title: SPTessSimd.hpp


# CORE_TESS_SPTESSSIMD_HPP_

## BRIEF

Функции ускорения SIMD для тесселятора

## CONTENT

Функции ускорения SIMD для тесселятора


# ::stappler::geom::getNormalizedVec(float const[2],float const[2],float const[2])

## BRIEF

Вычисляет нормализованный вектор для угла

## CONTENT

Вычисляет нормализованный вектор для угла. Угол определяется через три точки.

Параметры:
* float const[2]
* float const[2]
* float const[2]

Возвращает:
* simd::f32x4

# ::stappler::geom::getBisectVec(simd::f32x4 const&)

## BRIEF

Выполняет анализ нормализованного вектора

## CONTENT

Выполняет анализ нормализованного вектора (см. `getVertexNormal`)

Параметры:
* simd::f32x4 const&

Возвращает:
* simd::f32x4

# ::stappler::geom::getVertexNormal(float const[2],float const[],float const[],float[4])

## BRIEF

Анализирует угол для вычисления биссектрисы. её длины и поворота

## CONTENT

Анализирует угол для вычисления биссектрисы. её длины и поворота. Используется для вычисления обводки и антиалиасинга.

Параметры:
* float const[2] - первая точка угла
* float const[] - исходная точка угола
* float const[] - вторая точка угла
* float[4] - указатель для результата

Результат:
* ccw - значение больше 0 для поворота против часовой стрелки
* len - длина вектора бисектрисы
* ntx - x бисектрисы
* nty - y бисектрисы
