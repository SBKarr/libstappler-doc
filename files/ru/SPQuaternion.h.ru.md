Title: SPQuaternion.h


# STAPPLER_GEOM_SPQUATERNION_H_

## BRIEF

Заголовок структуры кватерниона

## CONTENT

Заголовок структуры кватерниона


# ::stappler::geom::Quaternion

## BRIEF

Структура кватерниона

## CONTENT

Структура кватерниона


# ::stappler::geom::Quaternion::multiply(stappler::geom::Quaternion const&,stappler::geom::Quaternion const&,stappler::geom::Quaternion*)

## BRIEF

Вычисляет произведение кватернионов

## CONTENT

Доступ: public

Вычисляет произведение кватернионов. Записывает результат по указателю.

Параметры:
* stappler::geom::Quaternion const&
* stappler::geom::Quaternion const&
* stappler::geom::Quaternion*


# ::stappler::geom::Quaternion::lerp(stappler::geom::Quaternion const&,stappler::geom::Quaternion const&,float,stappler::geom::Quaternion*)

## BRIEF

Линейно интерполирует кватернион

## CONTENT

Доступ: public

Линейно интерполирует кватернион. Записывает результат по указателю.

Функция работает линейно в гиперкомплесной плоскости кватерниона, что не даёт постоянного шага для изменения угла в зависимости от фактора интерполации.

Параметры:
* stappler::geom::Quaternion const&
* stappler::geom::Quaternion const&
* float - фактор интерполяции
* stappler::geom::Quaternion*


# ::stappler::geom::Quaternion::slerp(stappler::geom::Quaternion const&,stappler::geom::Quaternion const&,float,stappler::geom::Quaternion*)

## BRIEF

Линейно-сферически интерпорирует квартернион

## CONTENT

Линейно-сферически интерпорирует квартернион. Записывает результат по указателю.

Функция формирует дугу из линейных функций между единичнми векторами, которые представляют соотвествующий кватерниону поворот. Для корректной работы нужны нормализованные кватернионы.

Функция приближает шаг функции поворота к постоянному, но не достигает его. Кроме того, в контрольных точках дуги функция не является гладкой, что может давать видимые рывки при плавном повороте больших объектов.

Доступ: public

Параметры:
* stappler::geom::Quaternion const&
* stappler::geom::Quaternion const&
* float - фактор интерполяции
* stappler::geom::Quaternion*


# ::stappler::geom::Quaternion::squad(stappler::geom::Quaternion const&,stappler::geom::Quaternion const&,stappler::geom::Quaternion const&,stappler::geom::Quaternion const&,float,stappler::geom::Quaternion*)

## BRIEF

Интерполирует кватернион с помощью сферических сплайнов

## CONTENT

Доступ: public

Интерполирует кватернион с помощью сферических сплайнов. Записывает результат по указателю. Предполагается, что кватернионы нормализованы.

Это - наиболее гладкая и точкая форма интерполяции из доступных, однако, наиболее ресурсоёмкая.

Параметры:
* stappler::geom::Quaternion const& - начальный кватернион
* stappler::geom::Quaternion const& - конечный кватернион
* stappler::geom::Quaternion const& - первая контрольная точка
* stappler::geom::Quaternion const& - вторая контрольная точка
* float - фактор интерполяции
* stappler::geom::Quaternion* - указатель для записи результата


# ::stappler::geom::Quaternion::x

## BRIEF

Значение X векторной части кватерниона

## CONTENT

Доступ: public

Значение X векторной части кватерниона

Тип: float


# ::stappler::geom::Quaternion::y

## BRIEF

Значение Y векторной части кватерниона

## CONTENT

Доступ: public

Значение Y векторной части кватерниона

Тип: float


# ::stappler::geom::Quaternion::z

## BRIEF

Значение Z векторной части кватерниона

## CONTENT

Доступ: public

Значение Z векторной части кватерниона


Тип: float


# ::stappler::geom::Quaternion::w

## BRIEF

Скалярное значение кватерниона

## CONTENT

Доступ: public

Скалярное значение кватерниона

Тип: float


# ::stappler::geom::Quaternion::Quaternion()

## BRIEF

Конструктор по умолчанию

## CONTENT

Доступ: public

Конструктор по умолчанию


# ::stappler::geom::Quaternion::Quaternion(float,float,float,float)

## BRIEF

Конструктор со значениями

## CONTENT

Доступ: public

Конструктор со значениями

Параметры:
* float - x
* float - y
* float - z
* float - w


# ::stappler::geom::Quaternion::Quaternion(stappler::geom::Mat4 const&)

## BRIEF

Конструктор из поворота матрицы

## CONTENT

Доступ: public

Конструктор из поворота матрицы. Извлекает значение поворота и присваивает новому кватерниону

Параметры:
* stappler::geom::Mat4 const&


# ::stappler::geom::Quaternion::Quaternion(stappler::geom::Vec3 const&)

## BRIEF

Конструктор из эйлеровых углов

## CONTENT

Доступ: public

Конструктор из эйлеровых углов

Параметры:
* stappler::geom::Vec3 const&


# ::stappler::geom::Quaternion::Quaternion(stappler::geom::Vec3 const&,float)

## BRIEF

Конструктор из поворота вокруг оси

## CONTENT

Доступ: public

Конструктор из поворота вокруг оси

Параметры:
* stappler::geom::Vec3 const& - ось вращения
* float - градус поворота


# ::stappler::geom::Quaternion::Quaternion(stappler::geom::Quaternion const&)

## BRIEF

Конструктор копирования

## CONTENT

Доступ: public

Конструктор копирования

Параметры:
* stappler::geom::Quaternion const&


# ::stappler::geom::Quaternion::operator==(stappler::geom::Quaternion const&) const

## BRIEF

Сравнивает кватернионы

## CONTENT

Доступ: public

Сравнивает кватернионы

Параметры:
* stappler::geom::Quaternion const&

Возвращает:
* bool

# ::stappler::geom::Quaternion::operator!=(stappler::geom::Quaternion const&) const

## BRIEF

Сравнивает кватернионы

## CONTENT

Доступ: public

Сравнивает кватернионы

Параметры:
* stappler::geom::Quaternion const&

Возвращает:
* bool

# ::stappler::geom::Quaternion::toEulerAngles() const

## BRIEF

Конвертирует кватернион в эйлеровы углы

## CONTENT

Доступ: public

Конвертирует кватернион в эйлеровы углы

Возвращает:
* stappler::geom::Vec3

# ::stappler::geom::Quaternion::isIdentity() const

## BRIEF

Проверяет кватернион на единичность

## CONTENT

Доступ: public

Проверяет кватернион на единичность

Возвращает:
* bool - true если кватернион единичный

# ::stappler::geom::Quaternion::isZero() const

## BRIEF

Проверяет на нулевые значения кватерниона

## CONTENT

Доступ: public

Проверяет на нулевые значения кватерниона

Возвращает:
* bool - true если все значения кватерниона нулевые

# ::stappler::geom::Quaternion::conjugate()

## BRIEF

Конвертирует кватернион в сопряжённый

## CONTENT

Доступ: public

Конвертирует кватернион в сопряжённый


# ::stappler::geom::Quaternion::getConjugated() const

## BRIEF

Возвращает сопряжённый кватернион

## CONTENT

Доступ: public

Возвращает сопряжённый кватернион

Возвращает:
* stappler::geom::Quaternion

# ::stappler::geom::Quaternion::inverse()

## BRIEF

Инвертирует кватернион

## CONTENT

Доступ: public

Инвертирует кватернион

Возвращает:
* bool - true если инверсия успешна

# ::stappler::geom::Quaternion::multiply(stappler::geom::Quaternion const&)

## BRIEF

Умножает на кватернион

## CONTENT

Доступ: public

Умножает на кватернион

Параметры:
* stappler::geom::Quaternion const&


# ::stappler::geom::Quaternion::normalize()

## BRIEF

Нормализует кватернион

## CONTENT

Доступ: public

Нормализует кватернион


# ::stappler::geom::Quaternion::getInversed() const

## BRIEF

Возвращает инвертированный кватернион

## CONTENT

Доступ: public

Возвращает инвертированный кватернион

Возвращает:
* stappler::geom::Quaternion

# ::stappler::geom::Quaternion::getNormalized() const

## BRIEF

Возвращает нормализованный кватернион

## CONTENT

Доступ: public

Возвращает нормализованный кватернион

Возвращает:
* stappler::geom::Quaternion

# ::stappler::geom::Quaternion::toAxisAngle(stappler::geom::Vec3*) const

## BRIEF

Декомпозирует кватернион

## CONTENT

Доступ: public

Декомпозирует кватернион

Параметры:
* stappler::geom::Vec3* - указатель для возврата векторной части

Возвращает:
* float - скалярная часть

# ::stappler::geom::Quaternion::operator*(stappler::geom::Quaternion const&) const

## BRIEF

Вычисляет произведение кватернионов

## CONTENT

Доступ: public

Вычисляет произведение кватернионов

Параметры:
* stappler::geom::Quaternion const&

Возвращает:
* stappler::geom::Quaternion const

# ::stappler::geom::Quaternion::operator*(stappler::geom::Vec3 const&) const

## BRIEF

Вычисляет произвеление кватерниона и нормали

## CONTENT

Доступ: public

Вычисляет произвеление кватерниона и нормали

Параметры:
* stappler::geom::Vec3 const&

Возвращает:
* stappler::geom::Vec3

# ::stappler::geom::Quaternion::operator*=(stappler::geom::Quaternion const&)

## BRIEF

Умножает на кватернион

## CONTENT

Доступ: public

Умножает на кватернион

Параметры:
* stappler::geom::Quaternion const&

Возвращает:
* stappler::geom::Quaternion&

# ::stappler::geom::Quaternion::IDENTITY

## BRIEF

Статический единичный кватернион

## CONTENT

Доступ: public

Статический единичный кватернион

Тип: stappler::geom::Quaternion const


# ::stappler::geom::Quaternion::ZERO

## BRIEF

Статический нулевой кватернион

## CONTENT

Доступ: public

Статический нулевой кватернион

Тип: stappler::geom::Quaternion const
