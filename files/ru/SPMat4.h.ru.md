Title: SPMat4.h


# CORE_GEOM_SPMAT4_H_

## BRIEF

Заголовок четырёхмерной матрицы трансформации

## CONTENT

Заголовок четырёхмерной матрицы трансформации


# ::stappler::geom::Mat4

## BRIEF

Четырёхмерная матрица трансформации

## CONTENT

Четырёхмерная матрица трансформации

В рамках SDK для операций 3D используется праворукая система (положительное направление вращения против часовой стрелки) с осью Z, направленной вверх.


# ::stappler::geom::Mat4::createLookAt(stappler::geom::Vec3 const&,stappler::geom::Vec3 const&,stappler::geom::Vec3 const&,stappler::geom::Mat4*)

## BRIEF

Создаёт матрицу с направлением камеры на точку

## CONTENT

Доступ: public

Создаёт матрицу с направлением камеры на точку

Параметры:
* stappler::geom::Vec3 const& - позиция камеры
* stappler::geom::Vec3 const& - позиция цели
* stappler::geom::Vec3 const& - вертикальное направление оси
* stappler::geom::Mat4* - целевая матрица


# ::stappler::geom::Mat4::createLookAt(float,float,float,float,float,float,float,float,float,stappler::geom::Mat4*)

## BRIEF

Создаёт матрицу с направлением камеры на точку

## CONTENT

Доступ: public

Создаёт матрицу с направлением камеры на точку

Параметры:
* float - координата X камеры
* float - координата Y камеры
* float - координата Z камеры
* float - координата X центра цели
* float - координата Y центра цели
* float - координата Z центра цели
* float - координата X оси направления вверх
* float - координата Y оси направления вверх
* float - координата Z оси направления вверх
* stappler::geom::Mat4* - целевая матрица


# ::stappler::geom::Mat4::createPerspective(float,float,float,float,stappler::geom::Mat4*)

## BRIEF

Создаёт матрицу трансформации перспективной проекции

## CONTENT

Доступ: public

Создаёт матрицу трансформации перспективной проекции

Параметры:
* float - значение поля зрения
* float - соотношение сторон
* float - ближний план
* float - дальний план
* stappler::geom::Mat4* - целевая матрица


# ::stappler::geom::Mat4::createOrthographic(float,float,float,float,stappler::geom::Mat4*)

## BRIEF

Создаёт матрицу трансформации ортографической проекции

## CONTENT

Доступ: public

Создаёт матрицу трансформации ортографической проекции

Параметры:
* float - ширина камеры
* float - высота камеры
* float - ближний план
* float - дальний план
* stappler::geom::Mat4* - целевая матрица


# ::stappler::geom::Mat4::createOrthographicOffCenter(float,float,float,float,float,float,stappler::geom::Mat4*)

## BRIEF

Создаёт матрицу трансформации ортографической проекции на основе смещений

## CONTENT

Доступ: public

Создаёт матрицу трансформации ортографической проекции на основе смещений

Параметры:
* float - левое смещение
* float - правое смещение
* float - нижнее смещение
* float - верхнее смещение
* float - ближний план
* float - дальний план
* stappler::geom::Mat4*


# ::stappler::geom::Mat4::createBillboard(stappler::geom::Vec3 const&,stappler::geom::Vec3 const&,stappler::geom::Vec3 const&,stappler::geom::Mat4*)

## BRIEF

Создаёт матрицу камеру сферической трансформации с поворотом вокруг объекта

## CONTENT

Доступ: public

Создаёт матрицу камеру сферической трансформации с поворотом вокруг объекта

Параметры:
* stappler::geom::Vec3 const& - позиция объекта
* stappler::geom::Vec3 const& - позиция камеры
* stappler::geom::Vec3 const& - направление наверх
* stappler::geom::Mat4* - целевая матрица


# ::stappler::geom::Mat4::createBillboard(stappler::geom::Vec3 const&,stappler::geom::Vec3 const&,stappler::geom::Vec3 const&,stappler::geom::Vec3 const&,stappler::geom::Mat4*)

## BRIEF

Создаёт матрицу камеру сферической трансформации с поворотом вокруг объекта

## CONTENT

Доступ: public

Создаёт матрицу камеру сферической трансформации с поворотом вокруг объекта. Фиксирует направление вперёд для камеры

Параметры:
* stappler::geom::Vec3 const& - позиция объекта
* stappler::geom::Vec3 const& - позиция камеры
* stappler::geom::Vec3 const& - направление наверх для камеры
* stappler::geom::Vec3 const& - направление вперёд для камеры
* stappler::geom::Mat4* - целевая матрица


# ::stappler::geom::Mat4::createScale(stappler::geom::Vec3 const&,stappler::geom::Mat4*)

## BRIEF

Создаёт матрицу трансформации увеличения/уменьшения

## CONTENT

Доступ: public

Создаёт матрицу трансформации увеличения/уменьшения

Параметры:
* stappler::geom::Vec3 const& - факторы увеличения/уменьшения по каждой оси
* stappler::geom::Mat4* - целевая матрица


# ::stappler::geom::Mat4::createScale(float,float,float,stappler::geom::Mat4*)

## BRIEF

Создаёт матрицу трансформации увеличения/уменьшения

## CONTENT

Доступ: public

Создаёт матрицу трансформации увеличения/уменьшения

Параметры:
* float - фактор увеличения/уменьшения по X
* float - фактор увеличения/уменьшения по Y
* float - фактор увеличения/уменьшения по Z
* stappler::geom::Mat4* - целевая матрица


# ::stappler::geom::Mat4::createRotation(stappler::geom::Quaternion const&,stappler::geom::Mat4*)

## BRIEF

Создаёт матрицу трансформации вращения

## CONTENT

Доступ: public

Создаёт матрицу трансформации вращения

Параметры:
* stappler::geom::Quaternion const& - кватернион вращения
* stappler::geom::Mat4* - целевая матрица


# ::stappler::geom::Mat4::createRotation(stappler::geom::Vec3 const&,float,stappler::geom::Mat4*)

## BRIEF

Создаёт матрицу трансформации вращения

## CONTENT

Создаёт матрицу трансформации вращения

Доступ: public

Параметры:
* stappler::geom::Vec3 const& - ось вращения
* float - угол поворота вокруг оси вращения
* stappler::geom::Mat4* - целевая матрица


# ::stappler::geom::Mat4::createRotationX(float,stappler::geom::Mat4*)

## BRIEF

Создаёт матрицу трансформации вращения вокруг X

## CONTENT

Доступ: public

Создаёт матрицу трансформации вращения вокруг X

Параметры:
* float - угол поворота вокруг оси вращения
* stappler::geom::Mat4* - целевая матрица


# ::stappler::geom::Mat4::createRotationY(float,stappler::geom::Mat4*)

## BRIEF

Создаёт матрицу трансформации вращения вокруг Y

## CONTENT

Доступ: public

Создаёт матрицу трансформации вращения вокруг Y

Параметры:
* float - угол поворота вокруг оси вращения
* stappler::geom::Mat4* - целевая матрица

# ::stappler::geom::Mat4::createRotationZ(float,stappler::geom::Mat4*)

## BRIEF

Создаёт матрицу трансформации вращения вокруг Z

## CONTENT

Доступ: public

Создаёт матрицу трансформации вращения вокруг Z

Параметры:
* float - угол поворота вокруг оси вращения
* stappler::geom::Mat4* - целевая матрица


# ::stappler::geom::Mat4::createTranslation(stappler::geom::Vec3 const&,stappler::geom::Mat4*)

## BRIEF

Создаёт матрицу трансформации смещения

## CONTENT

Доступ: public

Создаёт матрицу трансформации смещения

Параметры:
* stappler::geom::Vec3 const& - вектор смещения
* stappler::geom::Mat4* - целевая матрица


# ::stappler::geom::Mat4::createTranslation(float,float,float,stappler::geom::Mat4*)

## BRIEF

Создаёт матрицу трансформации смещения

## CONTENT

Доступ: public

Создаёт матрицу трансформации смещения

Параметры:
* float - смещение по X
* float - смещение по Y
* float - смещение по Z
* stappler::geom::Mat4* - целевая матрица


# ::stappler::geom::Mat4::add(stappler::geom::Mat4 const&,stappler::geom::Mat4 const&,stappler::geom::Mat4*)

## BRIEF

Вычисляет сумму матриц

## CONTENT

Доступ: public

Вычисляет сумму матриц

Параметры:
* stappler::geom::Mat4 const&
* stappler::geom::Mat4 const&
* stappler::geom::Mat4* - целевая матрица


# ::stappler::geom::Mat4::multiply(stappler::geom::Mat4 const&,float,stappler::geom::Mat4*)

## BRIEF

Вычисляет произведение матрицы на число

## CONTENT

Доступ: public

Вычисляет произведение матрицы на число

Параметры:
* stappler::geom::Mat4 const&
* float
* stappler::geom::Mat4* - целевая матрица


# ::stappler::geom::Mat4::multiply(stappler::geom::Mat4 const&,stappler::geom::Mat4 const&,stappler::geom::Mat4*)

## BRIEF

Вычисляет произведение матриц

## CONTENT

Доступ: public

Вычисляет произведение матриц

Параметры:
* stappler::geom::Mat4 const&
* stappler::geom::Mat4 const&
* stappler::geom::Mat4* - целевая матрица


# ::stappler::geom::Mat4::subtract(stappler::geom::Mat4 const&,stappler::geom::Mat4 const&,stappler::geom::Mat4*)

## BRIEF

Вычисляет разность матриц

## CONTENT

Доступ: public

Вычисляет разность матриц

Параметры:
* stappler::geom::Mat4 const&
* stappler::geom::Mat4 const&
* stappler::geom::Mat4* - целевая матрица


# ::stappler::geom::Mat4::m

## BRIEF

Значение матрицы

## CONTENT

Доступ: public

Значение матрицы

Тип: float[16]


# ::stappler::geom::Mat4::Mat4()

## BRIEF

Конструктор единичной матрицы

## CONTENT

Доступ: public

Конструктор единичной матрицы

# ::stappler::geom::Mat4::Mat4(float,float,float,float,float,float,float,float,float,float,float,float,float,float,float,float)

## BRIEF

Конструктор матрицы из значений

## CONTENT

Доступ: public

Конструктор матрицы из значений

Параметры:
* float
* float
* float
* float
* float
* float
* float
* float
* float
* float
* float
* float
* float
* float
* float
* float


# ::stappler::geom::Mat4::Mat4(float,float,float,float,float,float)

## BRIEF

Конструктор двумерной матрицы трансформации из значений

## CONTENT

Доступ: public

Конструктор двумерной матрицы трансформации из значений

Параметры:
* float
* float
* float
* float
* float
* float


# ::stappler::geom::Mat4::Mat4(stappler::geom::Mat4 const&)

## BRIEF

Конструктор копирование матрицы

## CONTENT

Доступ: public

Конструктор копирование матрицы

Параметры:
* stappler::geom::Mat4 const&


# ::stappler::geom::Mat4::add(float)

## BRIEF

Добавляет скаляр к матрице

## CONTENT

Доступ: public

Добавляет скаляр к матрице

Параметры:
* float


# ::stappler::geom::Mat4::add(float,stappler::geom::Mat4*)

## BRIEF

Добавляет скаляр к матрице, записывает результат по указателю

## CONTENT

Доступ: public

Добавляет скаляр к матрице, записывает результат по указателю

Параметры:
* float
* stappler::geom::Mat4*


# ::stappler::geom::Mat4::add(stappler::geom::Mat4 const&)

## BRIEF

Добавляет матрицу к матрице

## CONTENT

Доступ: public

Добавляет матрицу к матрице

Параметры:
* stappler::geom::Mat4 const&


# ::stappler::geom::Mat4::decompose(stappler::geom::Vec3*,stappler::geom::Quaternion*,stappler::geom::Vec3*) const

## BRIEF

Декомпозирует матрицу на значения смещения, изменения размера и поворота

## CONTENT

Доступ: public

Декомпозирует матрицу на значения смещения, изменения размера и поворота

Параметры:
* stappler::geom::Vec3* - значение изменения размера
* stappler::geom::Quaternion* - значение поворота
* stappler::geom::Vec3* - значение смещения

Возвращает:
* bool - true при успешной декомпозиции

# ::stappler::geom::Mat4::decompose(float*,float*,float*) const

## BRIEF

Декомпозирует матрицу на значения смещения, изменения размера и поворота

## CONTENT

Доступ: public

Декомпозирует матрицу на значения смещения, изменения размера и поворота. Все значения представляются в виде последовательных блоков чисел с плавающей точкой: по три для смещения и изменения размера, 4 для поворота

Параметры:
* float* - значение изменения размера
* float* - значение поворота
* float* - значение смещения

Возвращает:
* bool - true при успешной декомпозиции

# ::stappler::geom::Mat4::determinant() const

## BRIEF

Вычисляет определитель матрицы

## CONTENT

Доступ: public

Вычисляет определитель матрицы

Возвращает:
* float

# ::stappler::geom::Mat4::getScale(stappler::geom::Vec3*) const

## BRIEF

Декомпозирует изменение размера из матрицы

## CONTENT

Доступ: public

Декомпозирует изменение размера из матрицы

Параметры:
* stappler::geom::Vec3*


# ::stappler::geom::Mat4::getRotation(stappler::geom::Quaternion*) const

## BRIEF

Декомпозирует поворот из матрицы

## CONTENT

Доступ: public

Декомпозирует поворот из матрицы

Параметры:
* stappler::geom::Quaternion*

Возвращает:
* bool

# ::stappler::geom::Mat4::getTranslation(stappler::geom::Vec3*) const

## BRIEF

Декомпозирует смещение из матрицы

## CONTENT

Доступ: public

Декомпозирует смещение из матрицы

Параметры:
* stappler::geom::Vec3*


# ::stappler::geom::Mat4::getScale(float*) const

## BRIEF

Декомпозирует изменение размера из матрицы

## CONTENT

Доступ: public

Декомпозирует изменение размера из матрицы

Параметры:
* float* - буфер для записи должен содержать минимум три числа


# ::stappler::geom::Mat4::getRotation(float*) const

## BRIEF

Декомпозирует поворот из матрицы

## CONTENT

Доступ: public

Декомпозирует поворот из матрицы

Параметры:
* float* - буфер для записи должен содержать минимум четыре числа

Возвращает:
* bool - true если декомпозиция успешна

# ::stappler::geom::Mat4::getTranslation(float*) const

## BRIEF

Декомпозирует смещение из матрицы

## CONTENT

Доступ: public

Декомпозирует смещение из матрицы

Параметры:
* float* - буфер для записи должен содержать минимум три числа


# ::stappler::geom::Mat4::getUpVector(stappler::geom::Vec3*) const

## BRIEF

Декомпозирует вектор направления вверх

## CONTENT

Доступ: public

Декомпозирует вектор направления вверх

Параметры:
* stappler::geom::Vec3*


# ::stappler::geom::Mat4::getDownVector(stappler::geom::Vec3*) const

## BRIEF

Декомпозирует вектор направления вниз

## CONTENT

Доступ: public

Декомпозирует вектор направления вниз

Параметры:
* stappler::geom::Vec3*


# ::stappler::geom::Mat4::getLeftVector(stappler::geom::Vec3*) const

## BRIEF

Декомпозирует вектор направления влево

## CONTENT

Доступ: public

Декомпозирует вектор направления влево

Параметры:
* stappler::geom::Vec3*


# ::stappler::geom::Mat4::getRightVector(stappler::geom::Vec3*) const

## BRIEF

Декомпозирует вектор направления вправо

## CONTENT

Доступ: public

Декомпозирует вектор направления вправо

Параметры:
* stappler::geom::Vec3*


# ::stappler::geom::Mat4::getForwardVector(stappler::geom::Vec3*) const

## BRIEF

Декомпозирует вектор направления вперёд

## CONTENT

Доступ: public

Декомпозирует вектор направления вперёд

Параметры:
* stappler::geom::Vec3*


# ::stappler::geom::Mat4::getBackVector(stappler::geom::Vec3*) const

## BRIEF

Декомпозирует вектор направления назад

## CONTENT

Доступ: public

Декомпозирует вектор направления назад

Параметры:
* stappler::geom::Vec3*


# ::stappler::geom::Mat4::inverse()

## BRIEF

Инвертирует матрицу

## CONTENT

Доступ: public

Инвертирует матрицу

Возвращает:
* bool - true если успешно

# ::stappler::geom::Mat4::negate()

## BRIEF

Отрицает матрицу

## CONTENT

Доступ: public

Отрицает матрицу

# ::stappler::geom::Mat4::transpose()

## BRIEF

Транспонирует матрицу

## CONTENT

Доступ: public

Транспонирует матрицу


# ::stappler::geom::Mat4::getInversed() const

## BRIEF

Возвращает инвертированную матрицу

## CONTENT

Доступ: public

Возвращает инвертированную матрицу

Возвращает:
* stappler::geom::Mat4

# ::stappler::geom::Mat4::getNegated() const

## BRIEF

Возвращает отрицательную матрицу

## CONTENT

Доступ: public

Возвращает отрицательную матрицу

Возвращает:
* stappler::geom::Mat4

# ::stappler::geom::Mat4::getTransposed() const

## BRIEF

Возвращает транспонирвоанную матрицу

## CONTENT

Доступ: public

Возвращает транспонирвоанную матрицу

Возвращает:
* stappler::geom::Mat4

# ::stappler::geom::Mat4::isIdentity() const

## BRIEF

Проверяет матрицу на единичность

## CONTENT

Доступ: public

Проверяет матрицу на единичность

Возвращает:
* bool - true - матрица единичная

# ::stappler::geom::Mat4::multiply(float)

## BRIEF

Умножает матрицу на скаляр

## CONTENT

Доступ: public

Умножает матрицу на скаляр

Параметры:
* float


# ::stappler::geom::Mat4::multiply(float,stappler::geom::Mat4*) const

## BRIEF

Умножает матрицу на скаляр, записывает результат по указателю

## CONTENT

Доступ: public

Умножает матрицу на скаляр, записывает результат по указателю

Параметры:
* float
* stappler::geom::Mat4*


# ::stappler::geom::Mat4::multiply(stappler::geom::Mat4 const&)

## BRIEF

Умножает матрицу на матрицу

## CONTENT

Доступ: public

Умножает матрицу на матрицу

Параметры:
* stappler::geom::Mat4 const&


# ::stappler::geom::Mat4::rotate(stappler::geom::Quaternion const&)

## BRIEF

Поворачивает матрицу по кватерниону

## CONTENT

Доступ: public

Поворачивает матрицу по кватерниону

Параметры:
* stappler::geom::Quaternion const&


# ::stappler::geom::Mat4::rotate(stappler::geom::Quaternion const&,stappler::geom::Mat4*) const

## BRIEF

Поворачивает матрицу по кватерниону, записывает результат по указателю

## CONTENT

Доступ: public

Поворачивает матрицу по кватерниону, записывает результат по указателю

Параметры:
* stappler::geom::Quaternion const&
* stappler::geom::Mat4*


# ::stappler::geom::Mat4::rotate(stappler::geom::Vec3 const&,float)

## BRIEF

Поворачивает матрицу на угол вокруг оси вращения

## CONTENT

Доступ: public

Поворачивает матрицу на угол вокруг оси вращения

Параметры:
* stappler::geom::Vec3 const&
* float


# ::stappler::geom::Mat4::rotate(stappler::geom::Vec3 const&,float,stappler::geom::Mat4*) const

## BRIEF

Поворачивает матрицу на угол вокруг оси вращения, записывает результат по указателю

## CONTENT

Доступ: public

Поворачивает матрицу на угол вокруг оси вращения, записывает результат по указателю

Параметры:
* stappler::geom::Vec3 const&
* float
* stappler::geom::Mat4*


# ::stappler::geom::Mat4::rotateX(float)

## BRIEF

Поворачивает матрицу вокруг оси X

## CONTENT

Доступ: public

Поворачивает матрицу вокруг оси X

Параметры:
* float


# ::stappler::geom::Mat4::rotateX(float,stappler::geom::Mat4*) const

## BRIEF

Поворачивает матрицу вокруг оси X, записывает результат по указателю

## CONTENT

Доступ: public

Поворачивает матрицу вокруг оси X, записывает результат по указателю

Параметры:
* float
* stappler::geom::Mat4*


# ::stappler::geom::Mat4::rotateY(float)

## BRIEF

Поворачивает матрицу вокруг оси Y

## CONTENT

Доступ: public

Поворачивает матрицу вокруг оси Y

Параметры:
* float


# ::stappler::geom::Mat4::rotateY(float,stappler::geom::Mat4*) const

## BRIEF

Поворачивает матрицу вокруг оси Y, записывает результат по указателю

## CONTENT

Доступ: public

Поворачивает матрицу вокруг оси Y, записывает результат по указателю

Параметры:
* float
* stappler::geom::Mat4*


# ::stappler::geom::Mat4::rotateZ(float)

## BRIEF

Поворачивает матрицу вокруг оси Z

## CONTENT

Доступ: public

Поворачивает матрицу вокруг оси Z

Параметры:
* float


# ::stappler::geom::Mat4::rotateZ(float,stappler::geom::Mat4*) const

## BRIEF

Поворачивает матрицу вокруг оси Z, записывает результат по указателю

## CONTENT

Доступ: public

Поворачивает матрицу вокруг оси Z, записывает результат по указателю

Параметры:
* float
* stappler::geom::Mat4*


# ::stappler::geom::Mat4::scale(float)

## BRIEF

Увеличивает матрицу на число по всем осям

## CONTENT

Доступ: public

Увеличивает матрицу на число по всем осям

Параметры:
* float


# ::stappler::geom::Mat4::scale(float,stappler::geom::Mat4*) const

## BRIEF

Увеличивает матрицу на число по всем осям, записывает результат по указателю

## CONTENT

Доступ: public

Увеличивает матрицу на число по всем осям, записывает результат по указателю

Параметры:
* float
* stappler::geom::Mat4*


# ::stappler::geom::Mat4::scale(float,float,float)

## BRIEF

Увеличивает матрицу

## CONTENT

Доступ: public

Увеличивает матрицу

Параметры:
* float - значение по X
* float - значение по Y
* float - значение по Z


# ::stappler::geom::Mat4::scale(float,float,float,stappler::geom::Mat4*) const

## BRIEF

Увеличивает матрицу, записывает результат по указателю

## CONTENT

Доступ: public

Увеличивает матрицу, записывает результат по указателю

Параметры:
* float - значение по X
* float - значение по Y
* float - значение по Z
* stappler::geom::Mat4*


# ::stappler::geom::Mat4::scale(stappler::geom::Vec3 const&)

## BRIEF

Увеличивает матрицу

## CONTENT

Доступ: public

Увеличивает матрицу

Параметры:
* stappler::geom::Vec3 const& - значения


# ::stappler::geom::Mat4::scale(stappler::geom::Vec3 const&,stappler::geom::Mat4*) const

## BRIEF

Увеличивает матрицу, записывает результат по указателю

## CONTENT

Доступ: public

Увеличивает матрицу, записывает результат по указателю

Параметры:
* stappler::geom::Vec3 const& - значения
* stappler::geom::Mat4*


# ::stappler::geom::Mat4::subtract(stappler::geom::Mat4 const&)

## BRIEF

Вычитает матрицу из текущей

## CONTENT

Доступ: public

Вычитает матрицу из текущей

Параметры:
* stappler::geom::Mat4 const&


# ::stappler::geom::Mat4::transformPoint(stappler::geom::Vec2 const&) const

## BRIEF

Трансформирует двумерную точку на основе матрицы

## CONTENT

Доступ: public

Трансформирует двумерную точку на основе матрицы

Параметры:
* stappler::geom::Vec2 const&

Возвращает:
* stappler::geom::Vec2

# ::stappler::geom::Mat4::transformPoint(stappler::geom::Vec2*) const

## BRIEF

Трансформирует двумерную точку на основе матрицы

## CONTENT

Доступ: public

Трансформирует двумерную точку на основе матрицы

Параметры:
* stappler::geom::Vec2*


# ::stappler::geom::Mat4::transformVector(stappler::geom::Vec4*) const

## BRIEF

Трансформирует вектор на основе матрицы

## CONTENT

Доступ: public

Трансформирует вектор на основе матрицы

Параметры:
* stappler::geom::Vec4*


# ::stappler::geom::Mat4::transformVector(float,float,float,float,stappler::geom::Vec4*) const

## BRIEF

Трансформирует вектор из значений

## CONTENT

Доступ: public

Трансформирует вектор из значений

Параметры:
* float - X
* float - Y
* float - Z
* float - W
* stappler::geom::Vec4* - указатель для записи результата


# ::stappler::geom::Mat4::transformVector(float,float,float,float,float*) const

## BRIEF

Трансформирует вектор из значений

## CONTENT

Доступ: public

Трансформирует вектор из значений

Параметры:
* float - X
* float - Y
* float - Z
* float - W
* float* - указатель для записи результата, минимум 4 числа


# ::stappler::geom::Mat4::transformVector(stappler::geom::Vec4 const&,stappler::geom::Vec4*) const

## BRIEF

Трансформирует вектор, записывает результат по указателю

## CONTENT

Доступ: public

Трансформирует вектор, записывает результат по указателю

Параметры:
* stappler::geom::Vec4 const&
* stappler::geom::Vec4*


# ::stappler::geom::Mat4::transformVector(stappler::geom::Vec4 const&,stappler::geom::Vec3*) const

## BRIEF

Трансформирует вектор, записывает результат по указателю

## CONTENT

Доступ: public

Трансформирует вектор, записывает результат по указателю. Использует только 3 значения результата

Параметры:
* stappler::geom::Vec4 const&
* stappler::geom::Vec3*


# ::stappler::geom::Mat4::translate(float,float,float)

## BRIEF

Смещает матрицу на значения

## CONTENT

Доступ: public

Смещает матрицу на значения

Параметры:
* float - X
* float - Y
* float - Z


# ::stappler::geom::Mat4::translate(float,float,float,stappler::geom::Mat4*) const

## BRIEF

Смещает матрицу на значения, записывает результат по указателю

## CONTENT

Доступ: public

Смещает матрицу на значения, записывает результат по указателю

Параметры:
* float - X
* float - Y
* float - Z
* stappler::geom::Mat4*


# ::stappler::geom::Mat4::translate(stappler::geom::Vec3 const&)

## BRIEF

Смещает матрицу

## CONTENT

Доступ: public

Смещает матрицу

Параметры:
* stappler::geom::Vec3 const&


# ::stappler::geom::Mat4::translate(stappler::geom::Vec3 const&,stappler::geom::Mat4*) const

## BRIEF

Смещает матрицу, записывает результат по указателю

## CONTENT

Доступ: public

Смещает матрицу, записывает результат по указателю

Параметры:
* stappler::geom::Vec3 const&
* stappler::geom::Mat4*


# ::stappler::geom::Mat4::operator+(stappler::geom::Mat4 const&) const

## BRIEF

Вычисляет сумму матриц

## CONTENT

Доступ: public

Вычисляет сумму матриц

Параметры:
* stappler::geom::Mat4 const&

Возвращает:
* stappler::geom::Mat4 const

# ::stappler::geom::Mat4::operator+=(stappler::geom::Mat4 const&)

## BRIEF

Добавляет матрицу к текущей

## CONTENT

Доступ: public

Добавляет матрицу к текущей

Параметры:
* stappler::geom::Mat4 const&

Возвращает:
* stappler::geom::Mat4&

# ::stappler::geom::Mat4::operator-(stappler::geom::Mat4 const&) const

## BRIEF

Вычисляет разность матриц

## CONTENT

Доступ: public

Вычисляет разность матриц

Параметры:
* stappler::geom::Mat4 const&

Возвращает:
* stappler::geom::Mat4 const

# ::stappler::geom::Mat4::operator-=(stappler::geom::Mat4 const&)

## BRIEF

Вычитает матрицу из текущей

## CONTENT

Доступ: public

Вычитает матрицу из текущей

Параметры:
* stappler::geom::Mat4 const&

Возвращает:
* stappler::geom::Mat4&

# ::stappler::geom::Mat4::operator-() const

## BRIEF

Возвращает отрицание матрицы

## CONTENT

Доступ: public

Возвращает отрицание матрицы

Возвращает:
* stappler::geom::Mat4 const

# ::stappler::geom::Mat4::operator*(stappler::geom::Mat4 const&) const

## BRIEF

Вычисляет произведение матриц

## CONTENT

Доступ: public

Вычисляет произведение матриц

Параметры:
* stappler::geom::Mat4 const&

Возвращает:
* stappler::geom::Mat4 const

# ::stappler::geom::Mat4::operator*=(stappler::geom::Mat4 const&)

## BRIEF

Умножает текущую матрицу

## CONTENT

Доступ: public

Умножает текущую матрицу

Параметры:
* stappler::geom::Mat4 const&

Возвращает:
* stappler::geom::Mat4&

# ::stappler::geom::Mat4::operator==(stappler::geom::Mat4 const&) const

## BRIEF

Сравнивает две матрицы

## CONTENT

Доступ: public

Сравнивает две матрицы

Параметры:
* stappler::geom::Mat4 const&

Возвращает:
* bool

# ::stappler::geom::Mat4::operator!=(stappler::geom::Mat4 const&) const

## BRIEF

Сравнивает две матрицы

## CONTENT

Доступ: public

Сравнивает две матрицы

Параметры:
* stappler::geom::Mat4 const&

Возвращает:
* bool

# ::stappler::geom::Mat4::ZERO

## BRIEF

Статическая нулевая матрица

## CONTENT

Доступ: public

Статическая нулевая матрица

Тип: stappler::geom::Mat4 const


# ::stappler::geom::Mat4::IDENTITY

## BRIEF

Статическая единичная матрица

## CONTENT

Доступ: public

Статическая единичная матрица

Тип: stappler::geom::Mat4 const


# ::stappler::geom::Mat4::INVALID

## BRIEF

Статическая недопустимая матрица

## CONTENT

Доступ: public

Статическая недопустимая матрица, состоит из NaN

Тип: stappler::geom::Mat4 const


# ::stappler::geom::Mat4::ROTATION_Z_90

## BRIEF

Матрица поворота на 90 градусов вокруг Z

## CONTENT

Доступ: public

Матрица поворота на 90 градусов вокруг Z. Используется для предповорота экрана.

Тип: stappler::geom::Mat4 const


# ::stappler::geom::Mat4::ROTATION_Z_180

## BRIEF

Матрица поворота на 180 градусов вокруг Z

## CONTENT

Доступ: public

Матрица поворота на 180 градусов вокруг Z. Используется для предповорота экрана.

Тип: stappler::geom::Mat4 const


# ::stappler::geom::Mat4::ROTATION_Z_270

## BRIEF

Матрица поворота на 270 градусов вокруг Z

## CONTENT

Доступ: public

Матрица поворота на 270 градусов вокруг Z. Используется для предповорота экрана.

Тип: stappler::geom::Mat4 const


# ::stappler::geom::operator*=(stappler::geom::Vec4&,stappler::geom::Mat4 const&)

## BRIEF

Оператор умножения вектора на матрицу

## CONTENT

Оператор умножения вектора на матрицу

Параметры:
* stappler::geom::Vec4&
* stappler::geom::Mat4 const&

Возвращает:
* stappler::geom::Vec4&

# ::stappler::geom::operator*(stappler::geom::Mat4 const&,stappler::geom::Vec4 const&)

## BRIEF

Оператор умножения вектора на матрицу

## CONTENT

Оператор умножения вектора на матрицу

Параметры:
* stappler::geom::Mat4 const&
* stappler::geom::Vec4 const&

Возвращает:
* stappler::geom::Vec4 const

# ::stappler::geom::operator*(stappler::geom::Mat4 const&,stappler::geom::Vec3 const&)

## BRIEF

Оператор умножения вектора на матрицу

## CONTENT

Оператор умножения вектора на матрицу

Параметры:
* stappler::geom::Mat4 const&
* stappler::geom::Vec3 const&

Возвращает:
* stappler::geom::Vec3 const

# ::stappler::geom::operator*(stappler::geom::Mat4 const&,stappler::geom::Vec2 const&)

## BRIEF

Оператор умножения вектора на матрицу

## CONTENT

Оператор умножения вектора на матрицу

Параметры:
* stappler::geom::Mat4 const&
* stappler::geom::Vec2 const&

Возвращает:
* stappler::geom::Vec2 const

# ::stappler::geom::operator<<(std::basic_ostream<char>&,stappler::geom::Mat4 const&)

## BRIEF

Оператор вывода матрицы в поток

## CONTENT

Оператор вывода матрицы в поток

Параметры:
* std::basic_ostream<char>&
* stappler::geom::Mat4 const&

Возвращает:
* std::basic_ostream<char>&
