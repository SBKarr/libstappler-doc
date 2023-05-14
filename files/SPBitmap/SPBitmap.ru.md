Title: SPBitmap.h: Обработка изображений

# ::stappler::bitmap::ResampleFilter

## BRIEF

Перечисление доступных функций фильтрации при уменьшении/увеличении изображения

## CONTENT

Перечисление доступных функций фильтрации при уменьшении/увеличении изображения

* Box 
* Tent
* Bell
* BSpline - функция на основе B-сплайна
* Mitchell
* Lanczos3 - фильтр Ланцоша с ядром третьего порядка
* Blackman
* Lanczos4 - фильтр Ланцоша с ядром четвёртого порядка
* Lanczos6 - фильтр Ланцоша с ядром шестого порядка
* Lanczos12 - фильтр Ланцоша с ядром двенадцатого порядка
* Kaiser
* Gaussian - функция гауссианы
* Catmullrom
* QuadInterp - функция квадратичной интерполяции
* QuadApprox - функция квадратичной аппроксимации
* QuadMix - смешанная квадратичная функция

# ::stappler::bitmap::BitmapTemplate<typename>

## BRIEF

Шаблон битовой карты для манипуляций с данными изображения

## CONTENT

Шаблон битовой карты для манипуляций с данными изображения

Аргументы шаблона:
* typename Interface - используемый [интерфейс](basics/memory) к памяти

# ::stappler::bitmap::BitmapTemplate<typename>::BitmapTemplate()

## BRIEF

Конструктор по умолчанию, создаёт пустую битовую карту

## CONTENT

Конструктор по умолчанию, создаёт пустую битовую карту


# ::stappler::bitmap::BitmapTemplate<typename>::BitmapTemplate(BitmapTemplate<Interface>&&)

## BRIEF

Конструктор перемещения. Перемещает данные из исходного объекта, оставляя его в неизвестном состоянии

## CONTENT

Конструктор перемещения. Перемещает данные из исходного объекта, оставляя его в неизвестном состоянии

Аргументы:
* BitmapTemplate<Interface>&& - перемещаемый объект


# ::stappler::bitmap::BitmapTemplate<typename>::BitmapTemplate(const BitmapTemplate<Interface>&)

## BRIEF

Конструктор копирования. Копирует данные из исходного объекта.

## CONTENT

Конструктор копирования. Копирует данные из исходного объекта.

Аргументы:
* const BitmapTemplate<Interface>& - копируемый объект


# ::stappler::bitmap::BitmapTemplate<typename>::BitmapTemplate(stappler::BytesView,stappler::bitmap::StrideFn const&)

## BRIEF

Конструктор новой битовой карты из *закодированного* изображения.

## CONTENT

Конструктор новой битовой карты из *закодированного* изображения. Изображение декодируется с использованием определённых в системе [форматов](::stappler::bitmap::BitmapFormat). При ошибке декодирования объект будет пуст.

Аргументы:
* BytesView - данные для создания объекта
* StrideFn - функция для определения смещения ряда на основе ширины изображения. Может быть опущена.
