Title: SPColor.h


# LIBSTAPPLER_MODULE_GEOM_SPCOLOR_H_

## BRIEF

## CONTENT


# ::stappler::geom::ColorMask

## BRIEF

## CONTENT

Значения:
* None
* R
* G
* B
* A
* Color
* All


# ::stappler::geom::operator|(stappler::geom::ColorMask const&,stappler::geom::ColorMask const&)

## BRIEF

## CONTENT

Параметры:
* stappler::geom::ColorMask const&
* stappler::geom::ColorMask const&

Возвращает:
* stappler::geom::ColorMask

# ::stappler::geom::operator&(stappler::geom::ColorMask const&,stappler::geom::ColorMask const&)

## BRIEF

## CONTENT

Параметры:
* stappler::geom::ColorMask const&
* stappler::geom::ColorMask const&

Возвращает:
* stappler::geom::ColorMask

# ::stappler::geom::operator^(stappler::geom::ColorMask const&,stappler::geom::ColorMask const&)

## BRIEF

## CONTENT

Параметры:
* stappler::geom::ColorMask const&
* stappler::geom::ColorMask const&

Возвращает:
* stappler::geom::ColorMask

# ::stappler::geom::operator|=(stappler::geom::ColorMask&,stappler::geom::ColorMask const&)

## BRIEF

## CONTENT

Параметры:
* stappler::geom::ColorMask&
* stappler::geom::ColorMask const&

Возвращает:
* stappler::geom::ColorMask&

# ::stappler::geom::operator&=(stappler::geom::ColorMask&,stappler::geom::ColorMask const&)

## BRIEF

## CONTENT

Параметры:
* stappler::geom::ColorMask&
* stappler::geom::ColorMask const&

Возвращает:
* stappler::geom::ColorMask&

# ::stappler::geom::operator^=(stappler::geom::ColorMask&,stappler::geom::ColorMask const&)

## BRIEF

## CONTENT

Параметры:
* stappler::geom::ColorMask&
* stappler::geom::ColorMask const&

Возвращает:
* stappler::geom::ColorMask&

# ::stappler::geom::operator==(stappler::geom::ColorMask const&,std::underlying_type<ColorMask>::type const&)

## BRIEF

## CONTENT

Параметры:
* stappler::geom::ColorMask const&
* std::underlying_type<ColorMask>::type const&

Возвращает:
* bool

# ::stappler::geom::operator==(std::underlying_type<ColorMask>::type const&,stappler::geom::ColorMask const&)

## BRIEF

## CONTENT

Параметры:
* std::underlying_type<ColorMask>::type const&
* stappler::geom::ColorMask const&

Возвращает:
* bool

# ::stappler::geom::operator!=(stappler::geom::ColorMask const&,std::underlying_type<ColorMask>::type const&)

## BRIEF

## CONTENT

Параметры:
* stappler::geom::ColorMask const&
* std::underlying_type<ColorMask>::type const&

Возвращает:
* bool

# ::stappler::geom::operator!=(std::underlying_type<ColorMask>::type const&,stappler::geom::ColorMask const&)

## BRIEF

## CONTENT

Параметры:
* std::underlying_type<ColorMask>::type const&
* stappler::geom::ColorMask const&

Возвращает:
* bool

# ::stappler::geom::operator~(stappler::geom::ColorMask const&)

## BRIEF

## CONTENT

Параметры:
* stappler::geom::ColorMask const&

Возвращает:
* stappler::geom::ColorMask

# ::stappler::geom::readColor(stappler::StringView const&,stappler::geom::Color4B&)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView const&
* stappler::geom::Color4B&

Возвращает:
* bool

# ::stappler::geom::readColor(stappler::StringView const&,stappler::geom::Color3B&)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView const&
* stappler::geom::Color3B&

Возвращает:
* bool

# ::stappler::geom::Color3B

## BRIEF

## CONTENT


# ::stappler::geom::Color3B::getColorByName(stappler::StringView,stappler::geom::Color3B const&)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView
* stappler::geom::Color3B const&

Возвращает:
* stappler::geom::Color3B

# ::stappler::geom::Color3B::Color3B()

## BRIEF

## CONTENT


# ::stappler::geom::Color3B::Color3B(uint8_t,uint8_t,uint8_t)

## BRIEF

## CONTENT

Параметры:
* uint8_t
* uint8_t
* uint8_t


# ::stappler::geom::Color3B::Color3B(uint32_t)

## BRIEF

## CONTENT

Параметры:
* uint32_t


# ::stappler::geom::Color3B::Color3B(stappler::geom::Color4B const&)

## BRIEF

## CONTENT

Параметры:
* stappler::geom::Color4B const&


# ::stappler::geom::Color3B::Color3B(stappler::geom::Color4F const&)

## BRIEF

## CONTENT

Параметры:
* stappler::geom::Color4F const&


# ::stappler::geom::Color3B::operator==(stappler::geom::Color3B const&) const

## BRIEF

## CONTENT

Параметры:
* stappler::geom::Color3B const&

Возвращает:
* bool

# ::stappler::geom::Color3B::operator==(stappler::geom::Color4B const&) const

## BRIEF

## CONTENT

Параметры:
* stappler::geom::Color4B const&

Возвращает:
* bool

# ::stappler::geom::Color3B::operator==(stappler::geom::Color4F const&) const

## BRIEF

## CONTENT

Параметры:
* stappler::geom::Color4F const&

Возвращает:
* bool

# ::stappler::geom::Color3B::operator!=(stappler::geom::Color3B const&) const

## BRIEF

## CONTENT

Параметры:
* stappler::geom::Color3B const&

Возвращает:
* bool

# ::stappler::geom::Color3B::operator!=(stappler::geom::Color4B const&) const

## BRIEF

## CONTENT

Параметры:
* stappler::geom::Color4B const&

Возвращает:
* bool

# ::stappler::geom::Color3B::operator!=(stappler::geom::Color4F const&) const

## BRIEF

## CONTENT

Параметры:
* stappler::geom::Color4F const&

Возвращает:
* bool

# ::stappler::geom::Color3B::equals(stappler::geom::Color3B const&)

## BRIEF

## CONTENT

Параметры:
* stappler::geom::Color3B const&

Возвращает:
* bool

# ::stappler::geom::Color3B::r

## BRIEF

## CONTENT

Тип: uint8_t


# ::stappler::geom::Color3B::g

## BRIEF

## CONTENT

Тип: uint8_t


# ::stappler::geom::Color3B::b

## BRIEF

## CONTENT

Тип: uint8_t


# ::stappler::geom::Color3B::WHITE

## BRIEF

## CONTENT

Тип: stappler::geom::Color3B const


# ::stappler::geom::Color3B::BLACK

## BRIEF

## CONTENT

Тип: stappler::geom::Color3B const


# ::stappler::geom::Color3B::progress(stappler::geom::Color3B const&,stappler::geom::Color3B const&,float)

## BRIEF

## CONTENT

Параметры:
* stappler::geom::Color3B const&
* stappler::geom::Color3B const&
* float

Возвращает:
* stappler::geom::Color3B

# ::stappler::geom::Color4B

## BRIEF

## CONTENT


# ::stappler::geom::Color4B::WHITE

## BRIEF

## CONTENT

Тип: stappler::geom::Color4B const


# ::stappler::geom::Color4B::BLACK

## BRIEF

## CONTENT

Тип: stappler::geom::Color4B const


# ::stappler::geom::Color4B::progress(stappler::geom::Color4B const&,stappler::geom::Color4B const&,float)

## BRIEF

## CONTENT

Параметры:
* stappler::geom::Color4B const&
* stappler::geom::Color4B const&
* float

Возвращает:
* stappler::geom::Color4B

# ::stappler::geom::Color4B::getColorByName(stappler::StringView,stappler::geom::Color4B const&)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView
* stappler::geom::Color4B const&

Возвращает:
* stappler::geom::Color4B

# ::stappler::geom::Color4B::Color4B()

## BRIEF

## CONTENT


# ::stappler::geom::Color4B::Color4B(uint8_t,uint8_t,uint8_t,uint8_t)

## BRIEF

## CONTENT

Параметры:
* uint8_t
* uint8_t
* uint8_t
* uint8_t


# ::stappler::geom::Color4B::Color4B(stappler::geom::Color3B const&,uint8_t)

## BRIEF

## CONTENT

Параметры:
* stappler::geom::Color3B const&
* uint8_t


# ::stappler::geom::Color4B::Color4B(stappler::geom::Color3B const&)

## BRIEF

## CONTENT

Параметры:
* stappler::geom::Color3B const&


# ::stappler::geom::Color4B::Color4B(stappler::geom::Color4F const&)

## BRIEF

## CONTENT

Параметры:
* stappler::geom::Color4F const&


# ::stappler::geom::Color4B::operator==(stappler::geom::Color4B const&) const

## BRIEF

## CONTENT

Параметры:
* stappler::geom::Color4B const&

Возвращает:
* bool

# ::stappler::geom::Color4B::operator==(stappler::geom::Color3B const&) const

## BRIEF

## CONTENT

Параметры:
* stappler::geom::Color3B const&

Возвращает:
* bool

# ::stappler::geom::Color4B::operator==(stappler::geom::Color4F const&) const

## BRIEF

## CONTENT

Параметры:
* stappler::geom::Color4F const&

Возвращает:
* bool

# ::stappler::geom::Color4B::operator!=(stappler::geom::Color4B const&) const

## BRIEF

## CONTENT

Параметры:
* stappler::geom::Color4B const&

Возвращает:
* bool

# ::stappler::geom::Color4B::operator!=(stappler::geom::Color3B const&) const

## BRIEF

## CONTENT

Параметры:
* stappler::geom::Color3B const&

Возвращает:
* bool

# ::stappler::geom::Color4B::operator!=(stappler::geom::Color4F const&) const

## BRIEF

## CONTENT

Параметры:
* stappler::geom::Color4F const&

Возвращает:
* bool

# ::stappler::geom::Color4B::r

## BRIEF

## CONTENT

Тип: uint8_t


# ::stappler::geom::Color4B::g

## BRIEF

## CONTENT

Тип: uint8_t


# ::stappler::geom::Color4B::b

## BRIEF

## CONTENT

Тип: uint8_t


# ::stappler::geom::Color4B::a

## BRIEF

## CONTENT

Тип: uint8_t


# ::stappler::geom::Color4B::white(uint8_t)

## BRIEF

## CONTENT

Параметры:
* uint8_t

Возвращает:
* stappler::geom::Color4B

# ::stappler::geom::Color4B::black(uint8_t)

## BRIEF

## CONTENT

Параметры:
* uint8_t

Возвращает:
* stappler::geom::Color4B

# ::stappler::geom::Color4F

## BRIEF

## CONTENT


# ::stappler::geom::Color4F::WHITE

## BRIEF

## CONTENT

Тип: stappler::geom::Color4F const


# ::stappler::geom::Color4F::BLACK

## BRIEF

## CONTENT

Тип: stappler::geom::Color4F const


# ::stappler::geom::Color4F::ZERO

## BRIEF

## CONTENT

Тип: stappler::geom::Color4F const


# ::stappler::geom::Color4F::ONE

## BRIEF

## CONTENT

Тип: stappler::geom::Color4F const


# ::stappler::geom::Color4F::progress(stappler::geom::Color4F const&,stappler::geom::Color4F const&,float)

## BRIEF

## CONTENT

Параметры:
* stappler::geom::Color4F const&
* stappler::geom::Color4F const&
* float

Возвращает:
* stappler::geom::Color4F

# ::stappler::geom::Color4F::Color4F()

## BRIEF

## CONTENT


# ::stappler::geom::Color4F::Color4F(float,float,float,float)

## BRIEF

## CONTENT

Параметры:
* float
* float
* float
* float


# ::stappler::geom::Color4F::Color4F(stappler::geom::Color3B const&,uint8_t)

## BRIEF

## CONTENT

Параметры:
* stappler::geom::Color3B const&
* uint8_t


# ::stappler::geom::Color4F::Color4F(stappler::geom::Color3B const&)

## BRIEF

## CONTENT

Параметры:
* stappler::geom::Color3B const&


# ::stappler::geom::Color4F::Color4F(stappler::geom::Color4B const&)

## BRIEF

## CONTENT

Параметры:
* stappler::geom::Color4B const&


# ::stappler::geom::Color4F::operator==(stappler::geom::Color4F const&) const

## BRIEF

## CONTENT

Параметры:
* stappler::geom::Color4F const&

Возвращает:
* bool

# ::stappler::geom::Color4F::operator==(stappler::geom::Color3B const&) const

## BRIEF

## CONTENT

Параметры:
* stappler::geom::Color3B const&

Возвращает:
* bool

# ::stappler::geom::Color4F::operator==(stappler::geom::Color4B const&) const

## BRIEF

## CONTENT

Параметры:
* stappler::geom::Color4B const&

Возвращает:
* bool

# ::stappler::geom::Color4F::operator!=(stappler::geom::Color4F const&) const

## BRIEF

## CONTENT

Параметры:
* stappler::geom::Color4F const&

Возвращает:
* bool

# ::stappler::geom::Color4F::operator!=(stappler::geom::Color3B const&) const

## BRIEF

## CONTENT

Параметры:
* stappler::geom::Color3B const&

Возвращает:
* bool

# ::stappler::geom::Color4F::operator!=(stappler::geom::Color4B const&) const

## BRIEF

## CONTENT

Параметры:
* stappler::geom::Color4B const&

Возвращает:
* bool

# ::stappler::geom::Color4F::equals(stappler::geom::Color4F const&)

## BRIEF

## CONTENT

Параметры:
* stappler::geom::Color4F const&

Возвращает:
* bool

# ::stappler::geom::Color4F::operator Vec4() const

## BRIEF

## CONTENT

Возвращает:
* stappler::geom::Vec4

# ::stappler::geom::Color4F::getColor() const

## BRIEF

## CONTENT

Возвращает:
* stappler::geom::Color3B

# ::stappler::geom::Color4F::getOpacity() const

## BRIEF

## CONTENT

Возвращает:
* uint8_t

# ::stappler::geom::Color4F::setMasked(stappler::geom::Color4F const&,stappler::geom::ColorMask)

## BRIEF

## CONTENT

Параметры:
* stappler::geom::Color4F const&
* stappler::geom::ColorMask


# ::stappler::geom::Color4F::setUnmasked(stappler::geom::Color4F const&,stappler::geom::ColorMask)

## BRIEF

## CONTENT

Параметры:
* stappler::geom::Color4F const&
* stappler::geom::ColorMask


# ::stappler::geom::Color4F::r

## BRIEF

## CONTENT

Тип: float


# ::stappler::geom::Color4F::g

## BRIEF

## CONTENT

Тип: float


# ::stappler::geom::Color4F::b

## BRIEF

## CONTENT

Тип: float


# ::stappler::geom::Color4F::a

## BRIEF

## CONTENT

Тип: float


# ::stappler::geom::Color

## BRIEF

## CONTENT


# ::stappler::geom::Color::Red_50

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Red_100

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Red_200

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Red_300

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Red_400

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Red_500

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Red_600

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Red_700

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Red_800

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Red_900

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Red_A100

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Red_A200

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Red_A400

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Red_A700

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Pink_50

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Pink_100

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Pink_200

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Pink_300

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Pink_400

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Pink_500

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Pink_600

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Pink_700

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Pink_800

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Pink_900

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Pink_A100

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Pink_A200

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Pink_A400

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Pink_A700

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Purple_50

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Purple_100

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Purple_200

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Purple_300

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Purple_400

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Purple_500

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Purple_600

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Purple_700

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Purple_800

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Purple_900

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Purple_A100

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Purple_A200

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Purple_A400

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Purple_A700

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::DeepPurple_50

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::DeepPurple_100

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::DeepPurple_200

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::DeepPurple_300

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::DeepPurple_400

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::DeepPurple_500

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::DeepPurple_600

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::DeepPurple_700

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::DeepPurple_800

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::DeepPurple_900

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::DeepPurple_A100

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::DeepPurple_A200

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::DeepPurple_A400

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::DeepPurple_A700

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Indigo_50

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Indigo_100

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Indigo_200

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Indigo_300

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Indigo_400

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Indigo_500

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Indigo_600

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Indigo_700

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Indigo_800

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Indigo_900

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Indigo_A100

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Indigo_A200

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Indigo_A400

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Indigo_A700

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Blue_50

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Blue_100

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Blue_200

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Blue_300

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Blue_400

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Blue_500

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Blue_600

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Blue_700

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Blue_800

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Blue_900

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Blue_A100

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Blue_A200

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Blue_A400

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Blue_A700

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::LightBlue_50

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::LightBlue_100

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::LightBlue_200

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::LightBlue_300

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::LightBlue_400

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::LightBlue_500

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::LightBlue_600

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::LightBlue_700

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::LightBlue_800

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::LightBlue_900

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::LightBlue_A100

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::LightBlue_A200

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::LightBlue_A400

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::LightBlue_A700

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Cyan_50

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Cyan_100

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Cyan_200

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Cyan_300

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Cyan_400

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Cyan_500

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Cyan_600

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Cyan_700

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Cyan_800

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Cyan_900

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Cyan_A100

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Cyan_A200

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Cyan_A400

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Cyan_A700

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Teal_50

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Teal_100

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Teal_200

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Teal_300

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Teal_400

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Teal_500

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Teal_600

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Teal_700

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Teal_800

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Teal_900

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Teal_A100

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Teal_A200

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Teal_A400

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Teal_A700

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Green_50

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Green_100

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Green_200

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Green_300

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Green_400

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Green_500

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Green_600

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Green_700

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Green_800

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Green_900

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Green_A100

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Green_A200

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Green_A400

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Green_A700

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::LightGreen_50

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::LightGreen_100

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::LightGreen_200

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::LightGreen_300

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::LightGreen_400

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::LightGreen_500

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::LightGreen_600

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::LightGreen_700

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::LightGreen_800

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::LightGreen_900

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::LightGreen_A100

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::LightGreen_A200

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::LightGreen_A400

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::LightGreen_A700

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Lime_50

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Lime_100

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Lime_200

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Lime_300

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Lime_400

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Lime_500

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Lime_600

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Lime_700

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Lime_800

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Lime_900

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Lime_A100

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Lime_A200

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Lime_A400

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Lime_A700

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Yellow_50

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Yellow_100

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Yellow_200

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Yellow_300

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Yellow_400

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Yellow_500

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Yellow_600

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Yellow_700

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Yellow_800

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Yellow_900

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Yellow_A100

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Yellow_A200

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Yellow_A400

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Yellow_A700

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Amber_50

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Amber_100

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Amber_200

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Amber_300

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Amber_400

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Amber_500

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Amber_600

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Amber_700

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Amber_800

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Amber_900

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Amber_A100

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Amber_A200

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Amber_A400

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Amber_A700

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Orange_50

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Orange_100

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Orange_200

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Orange_300

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Orange_400

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Orange_500

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Orange_600

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Orange_700

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Orange_800

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Orange_900

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Orange_A100

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Orange_A200

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Orange_A400

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Orange_A700

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::DeepOrange_50

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::DeepOrange_100

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::DeepOrange_200

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::DeepOrange_300

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::DeepOrange_400

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::DeepOrange_500

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::DeepOrange_600

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::DeepOrange_700

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::DeepOrange_800

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::DeepOrange_900

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::DeepOrange_A100

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::DeepOrange_A200

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::DeepOrange_A400

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::DeepOrange_A700

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Brown_50

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Brown_100

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Brown_200

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Brown_300

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Brown_400

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Brown_500

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Brown_600

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Brown_700

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Brown_800

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Brown_900

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Grey_50

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Grey_100

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Grey_200

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Grey_300

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Grey_400

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Grey_500

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Grey_600

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Grey_700

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Grey_800

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Grey_900

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::BlueGrey_50

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::BlueGrey_100

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::BlueGrey_200

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::BlueGrey_300

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::BlueGrey_400

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::BlueGrey_500

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::BlueGrey_600

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::BlueGrey_700

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::BlueGrey_800

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::BlueGrey_900

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::White

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Black

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::geom::Color


# ::stappler::geom::Color::Level

## BRIEF

## CONTENT

Доступ: public

Значения:
* Unknown
* b50
* b100
* b200
* b300
* b400
* b500
* b600
* b700
* b800
* b900
* a100
* a200
* a400
* a700


# ::stappler::geom::Color::Tone

## BRIEF

## CONTENT

Доступ: public

Значения:
* Unknown
* Red
* Pink
* Purple
* DeepPurple
* Indigo
* Blue
* LightBlue
* Cyan
* Teal
* Green
* LightGreen
* Lime
* Yellow
* Amber
* Orange
* DeepOrange
* Brown
* Grey
* BlueGrey
* BlackWhite


# ::stappler::geom::Color::asColor3B() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::geom::Color3B

# ::stappler::geom::Color::asColor4B() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::geom::Color4B

# ::stappler::geom::Color::asColor4F() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::geom::Color4F

# ::stappler::geom::Color::operator Color3B() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::geom::Color3B

# ::stappler::geom::Color::operator Color4B() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::geom::Color4B

# ::stappler::geom::Color::operator Color4F() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::geom::Color4F

# ::stappler::geom::Color::operator==(stappler::geom::Color const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::geom::Color const&

Возвращает:
* bool

# ::stappler::geom::Color::operator!=(stappler::geom::Color const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::geom::Color const&

Возвращает:
* bool

# ::stappler::geom::Color::r() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint8_t

# ::stappler::geom::Color::g() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint8_t

# ::stappler::geom::Color::b() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint8_t

# ::stappler::geom::Color::value() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint32_t

# ::stappler::geom::Color::index() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint32_t

# ::stappler::geom::Color::text() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::geom::Color

# ::stappler::geom::Color::level() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::geom::Color::Level

# ::stappler::geom::Color::tone() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::geom::Color::Tone

# ::stappler::geom::Color::previous() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::geom::Color

# ::stappler::geom::Color::next() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::geom::Color

# ::stappler::geom::Color::lighter(uint8_t) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint8_t

Возвращает:
* stappler::geom::Color

# ::stappler::geom::Color::darker(uint8_t) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint8_t

Возвращает:
* stappler::geom::Color

# ::stappler::geom::Color::medium() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::geom::Color

# ::stappler::geom::Color::specific(uint8_t) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint8_t

Возвращает:
* stappler::geom::Color

# ::stappler::geom::Color::specific(stappler::geom::Color::Level) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::geom::Color::Level

Возвращает:
* stappler::geom::Color

# ::stappler::geom::Color::Color(stappler::geom::Color::Tone,stappler::geom::Color::Level)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::geom::Color::Tone
* stappler::geom::Color::Level


# ::stappler::geom::Color::Color(uint32_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint32_t


# ::stappler::geom::Color::Color(uint32_t,int16_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint32_t
* int16_t


# ::stappler::geom::Color::Color(stappler::geom::Color3B const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::geom::Color3B const&


# ::stappler::geom::Color::Color(stappler::geom::Color4B const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::geom::Color4B const&


# ::stappler::geom::Color::Color()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::geom::Color::Color(stappler::geom::Color const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::geom::Color const&


# ::stappler::geom::Color::Color(stappler::geom::Color&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::geom::Color&&


# ::stappler::geom::Color::operator=(stappler::geom::Color const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::geom::Color const&

Возвращает:
* stappler::geom::Color&

# ::stappler::geom::Color::operator=(stappler::geom::Color&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::geom::Color&&

Возвращает:
* stappler::geom::Color&

# ::stappler::geom::Color::name<typename>() const

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename Interface

Возвращает:
* typename Interface::StringType

# ::stappler::geom::Color::getColorByName(stappler::StringView const&,stappler::geom::Color const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView const&
* stappler::geom::Color const&

Возвращает:
* stappler::geom::Color

# ::stappler::geom::Color::progress(stappler::geom::Color const&,stappler::geom::Color const&,float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::geom::Color const&
* stappler::geom::Color const&
* float

Возвращает:
* stappler::geom::Color

# ::stappler::geom::Color::getById(uint16_t)

## BRIEF

## CONTENT

Доступ: private

Параметры:
* uint16_t

Возвращает:
* stappler::geom::Color

# ::stappler::geom::Color::getColorIndex(uint32_t)

## BRIEF

## CONTENT

Доступ: private

Параметры:
* uint32_t

Возвращает:
* uint16_t

# ::stappler::geom::Color::_value

## BRIEF

## CONTENT

Доступ: private

Тип: uint32_t


# ::stappler::geom::Color::_index

## BRIEF

## CONTENT

Доступ: private

Тип: uint16_t


# ::stappler::geom::operator<<(std::ostream&,stappler::geom::Color const&)

## BRIEF

## CONTENT

Параметры:
* std::ostream&
* stappler::geom::Color const&

Возвращает:
* std::ostream&

# ::stappler::geom::operator<<(std::ostream&,stappler::geom::Color3B const&)

## BRIEF

## CONTENT

Параметры:
* std::ostream&
* stappler::geom::Color3B const&

Возвращает:
* std::ostream&

# ::stappler::geom::operator<<(std::ostream&,stappler::geom::Color4B const&)

## BRIEF

## CONTENT

Параметры:
* std::ostream&
* stappler::geom::Color4B const&

Возвращает:
* std::ostream&

# ::stappler::geom::operator<<(std::ostream&,stappler::geom::Color4F const&)

## BRIEF

## CONTENT

Параметры:
* std::ostream&
* stappler::geom::Color4F const&

Возвращает:
* std::ostream&

# ::stappler::geom::Color4F::progress(stappler::geom::Color4F const&,stappler::geom::Color4F const&,float)

## BRIEF

## CONTENT

Параметры:
* stappler::geom::Color4F const&
* stappler::geom::Color4F const&
* float

Возвращает:
* stappler::geom::Color4F

# ::stappler::geom::operator*(stappler::geom::Color4F const&,stappler::geom::Color4F const&)

## BRIEF

## CONTENT

Параметры:
* stappler::geom::Color4F const&
* stappler::geom::Color4F const&

Возвращает:
* stappler::geom::Color4F

# ::stappler::geom::operator/(stappler::geom::Color4F const&,stappler::geom::Color4F const&)

## BRIEF

## CONTENT

Параметры:
* stappler::geom::Color4F const&
* stappler::geom::Color4F const&

Возвращает:
* stappler::geom::Color4F

# ::stappler::geom::operator*(stappler::geom::Color4F const&,float)

## BRIEF

## CONTENT

Параметры:
* stappler::geom::Color4F const&
* float

Возвращает:
* stappler::geom::Color4F

# ::stappler::geom::operator*(float,stappler::geom::Color4F const&)

## BRIEF

## CONTENT

Параметры:
* float
* stappler::geom::Color4F const&

Возвращает:
* stappler::geom::Color4F

# ::stappler::geom::operator+(stappler::geom::Color4F const&,stappler::geom::Color4F const&)

## BRIEF

## CONTENT

Параметры:
* stappler::geom::Color4F const&
* stappler::geom::Color4F const&

Возвращает:
* stappler::geom::Color4F

# ::stappler::geom::operator-(stappler::geom::Color4F const&,stappler::geom::Color4F const&)

## BRIEF

## CONTENT

Параметры:
* stappler::geom::Color4F const&
* stappler::geom::Color4F const&

Возвращает:
* stappler::geom::Color4F

# ::stappler::geom::operator*(stappler::geom::Color4F const&,stappler::geom::Color4B const&)

## BRIEF

## CONTENT

Параметры:
* stappler::geom::Color4F const&
* stappler::geom::Color4B const&

Возвращает:
* stappler::geom::Color4F

# ::stappler::geom::operator*(stappler::geom::Color4B const&,stappler::geom::Color4F const&)

## BRIEF

## CONTENT

Параметры:
* stappler::geom::Color4B const&
* stappler::geom::Color4F const&

Возвращает:
* stappler::geom::Color4F

# ::stappler::geom::operator/(stappler::geom::Color4F const&,stappler::geom::Color4B const&)

## BRIEF

## CONTENT

Параметры:
* stappler::geom::Color4F const&
* stappler::geom::Color4B const&

Возвращает:
* stappler::geom::Color4F

# ::stappler::geom::operator/(stappler::geom::Color4B const&,stappler::geom::Color4F const&)

## BRIEF

## CONTENT

Параметры:
* stappler::geom::Color4B const&
* stappler::geom::Color4F const&

Возвращает:
* stappler::geom::Color4F

# ::stappler::geom::WHITE

## BRIEF

## CONTENT

Тип: stappler::geom::Color3B const


# ::stappler::geom::BLACK

## BRIEF

## CONTENT

Тип: stappler::geom::Color3B const


# ::stappler::geom::WHITE

## BRIEF

## CONTENT

Тип: stappler::geom::Color4B const


# ::stappler::geom::BLACK

## BRIEF

## CONTENT

Тип: stappler::geom::Color4B const


# ::stappler::geom::WHITE

## BRIEF

## CONTENT

Тип: stappler::geom::Color4F const


# ::stappler::geom::BLACK

## BRIEF

## CONTENT

Тип: stappler::geom::Color4F const


# ::stappler::geom::ZERO

## BRIEF

## CONTENT

Тип: stappler::geom::Color4F const


# ::stappler::geom::ONE

## BRIEF

## CONTENT

Тип: stappler::geom::Color4F const


# 

## BRIEF

## CONTENT


# 

## BRIEF

## CONTENT


# 

## BRIEF

## CONTENT


# ::stappler::progress(geom::Color const&,geom::Color const&,float)

## BRIEF

## CONTENT

Параметры:
* geom::Color const&
* geom::Color const&
* float

Возвращает:
* geom::Color

# ::stappler::progress(geom::Color3B const&,geom::Color3B const&,float)

## BRIEF

## CONTENT

Параметры:
* geom::Color3B const&
* geom::Color3B const&
* float

Возвращает:
* geom::Color3B

# ::stappler::progress(geom::Color4B const&,geom::Color4B const&,float)

## BRIEF

## CONTENT

Параметры:
* geom::Color4B const&
* geom::Color4B const&
* float

Возвращает:
* geom::Color4B

# ::stappler::progress(geom::Color4F const&,geom::Color4F const&,float)

## BRIEF

## CONTENT

Параметры:
* geom::Color4F const&
* geom::Color4F const&
* float

Возвращает:
* geom::Color4F