Title: SPMovingAverage.h


# STAPPLER_CORE_UTILS_SPMOVINGAVERAGE_H_

## BRIEF

Заголовок структуры плавающего среднего

## CONTENT

Заголовок структуры плавающего среднего


# ::stappler::math::MovingAverage<uint64_t,typename>

## BRIEF

Структура для работы плавающего среднего

## CONTENT

Структура для работы плавающего среднего

Параметры шаблона:
* size_t Count - размер буфера значений
* typename T - тип значения для вычисления


# ::stappler::math::MovingAverage<uint64_t,typename>::dropValues()

## BRIEF

Очищает буфер значений

## CONTENT

Доступ: public

Очищает буфер значений


# ::stappler::math::MovingAverage<uint64_t,typename>::addValue(T)

## BRIEF

Добавляет значение в буфер

## CONTENT

Доступ: public

Добавляет значение в буфер. Буфер работает как кольцо, наибелее старые значения перезаписываются новыми по мере наполнения.

Параметры:
* T - значение для добавления


# ::stappler::math::MovingAverage<uint64_t,typename>::getAverage() const

## BRIEF

Вычисляет текущее среднее

## CONTENT

Доступ: public

Вычисляет текущее среднее

Возвращает:
* T - текущее плавающее среднее

# ::stappler::math::MovingAverage<uint64_t,typename>::step(T)

## BRIEF

Добавляет новое значение и вычисляет среднее с ним

## CONTENT

Доступ: public

Параметры:
* T - значение, добавляемое в буфер

Возвращает:
* T - новое значение среднего

# ::stappler::math::MovingAverage<uint64_t,typename>::range()

## BRIEF

Возвращает разброс значений в буфере

## CONTENT

Доступ: public

Возвращает разброс значений в буфере

Возвращает:
* T - разница между минимальным и максимальным значениями в буфере


# ::stappler::math::MovingAverage<uint64_t,typename>::size() const

## BRIEF

Возвращает размер буфера

## CONTENT

Доступ: public

Возвращает размер буфера

Возвращает:
* size_t

# ::stappler::math::MovingAverage<uint64_t,typename>::reset(T const&)

## BRIEF

Замещает значения в буфере указанным

## CONTENT

Доступ: public

Замещает значения в буфере указанным

Параметры:
* T const&


# ::stappler::math::MovingAverage<uint64_t,typename>::MovingAverage()

## BRIEF

Конструктор по умолчанию, создаёт пустую структуру

## CONTENT

Доступ: public

Конструктор по умолчанию, создаёт пустую структуру


# ::stappler::math::MovingAverage<uint64_t,typename>::_current

## BRIEF

Текущий индекс значения

## CONTENT

Доступ: protected

Текущий индекс значения. Положение в буфере вычисляется как `_current % Count`

Тип: size_t


# ::stappler::math::MovingAverage<uint64_t,typename>::_values

## BRIEF

Буфер значений

## CONTENT

Доступ: protected

Буфер значений

Тип: std::array<T, Count>
