Title: SPQuaternion.h


# LIBSTAPPLER_MODULE_GEOM_SPQUATERNION_H_

## BRIEF

## CONTENT


# ::stappler::geom::Quaternion

## BRIEF

## CONTENT


# ::stappler::geom::Quaternion::multiply(stappler::geom::Quaternion const&,stappler::geom::Quaternion const&,stappler::geom::Quaternion*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::geom::Quaternion const&
* stappler::geom::Quaternion const&
* stappler::geom::Quaternion*


# ::stappler::geom::Quaternion::lerp(stappler::geom::Quaternion const&,stappler::geom::Quaternion const&,float,stappler::geom::Quaternion*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::geom::Quaternion const&
* stappler::geom::Quaternion const&
* float
* stappler::geom::Quaternion*


# ::stappler::geom::Quaternion::slerp(stappler::geom::Quaternion const&,stappler::geom::Quaternion const&,float,stappler::geom::Quaternion*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::geom::Quaternion const&
* stappler::geom::Quaternion const&
* float
* stappler::geom::Quaternion*


# ::stappler::geom::Quaternion::squad(stappler::geom::Quaternion const&,stappler::geom::Quaternion const&,stappler::geom::Quaternion const&,stappler::geom::Quaternion const&,float,stappler::geom::Quaternion*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::geom::Quaternion const&
* stappler::geom::Quaternion const&
* stappler::geom::Quaternion const&
* stappler::geom::Quaternion const&
* float
* stappler::geom::Quaternion*


# ::stappler::geom::Quaternion::x

## BRIEF

## CONTENT

Доступ: public

Тип: float


# ::stappler::geom::Quaternion::y

## BRIEF

## CONTENT

Доступ: public

Тип: float


# ::stappler::geom::Quaternion::z

## BRIEF

## CONTENT

Доступ: public

Тип: float


# ::stappler::geom::Quaternion::w

## BRIEF

## CONTENT

Доступ: public

Тип: float


# ::stappler::geom::Quaternion::Quaternion()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::geom::Quaternion::Quaternion(float,float,float,float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float
* float
* float
* float


# ::stappler::geom::Quaternion::Quaternion(stappler::geom::Mat4 const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::geom::Mat4 const&


# ::stappler::geom::Quaternion::Quaternion(stappler::geom::Vec3 const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::geom::Vec3 const&


# ::stappler::geom::Quaternion::Quaternion(stappler::geom::Vec3 const&,float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::geom::Vec3 const&
* float


# ::stappler::geom::Quaternion::Quaternion(stappler::geom::Quaternion const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::geom::Quaternion const&


# ::stappler::geom::Quaternion::operator==(stappler::geom::Quaternion const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::geom::Quaternion const&

Возвращает:
* bool

# ::stappler::geom::Quaternion::operator!=(stappler::geom::Quaternion const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::geom::Quaternion const&

Возвращает:
* bool

# ::stappler::geom::Quaternion::toEulerAngles() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::geom::Vec3

# ::stappler::geom::Quaternion::isIdentity() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::geom::Quaternion::isZero() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::geom::Quaternion::conjugate()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::geom::Quaternion::getConjugated() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::geom::Quaternion

# ::stappler::geom::Quaternion::inverse()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::geom::Quaternion::multiply(stappler::geom::Quaternion const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::geom::Quaternion const&


# ::stappler::geom::Quaternion::normalize()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::geom::Quaternion::getInversed() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::geom::Quaternion

# ::stappler::geom::Quaternion::getNormalized() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::geom::Quaternion

# ::stappler::geom::Quaternion::toAxisAngle(stappler::geom::Vec3*) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::geom::Vec3*

Возвращает:
* float

# ::stappler::geom::Quaternion::operator*(stappler::geom::Quaternion const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::geom::Quaternion const&

Возвращает:
* stappler::geom::Quaternion const

# ::stappler::geom::Quaternion::operator*(stappler::geom::Vec3 const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::geom::Vec3 const&

Возвращает:
* stappler::geom::Vec3

# ::stappler::geom::Quaternion::operator*=(stappler::geom::Quaternion const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::geom::Quaternion const&

Возвращает:
* stappler::geom::Quaternion&

# ::stappler::geom::Quaternion::IDENTITY

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Quaternion const


# ::stappler::geom::Quaternion::ZERO

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Quaternion const


# ::stappler::geom::IDENTITY

## BRIEF

## CONTENT

Тип: stappler::geom::Quaternion const


# ::stappler::geom::ZERO

## BRIEF

## CONTENT

Тип: stappler::geom::Quaternion const
