Title: MaterialSnackbarData.h


# XENOLITH_RENDERER_MATERIAL2D_BASE_MATERIALSNACKBARDATA_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::material2d::SnackbarData

## BRIEF

## CONTENT


# ::stappler::xenolith::material2d::SnackbarData::text

## BRIEF

## CONTENT

Тип: stappler::mem_std::String


# ::stappler::xenolith::material2d::SnackbarData::textColor

## BRIEF

## CONTENT

Тип: stappler::geom::Color


# ::stappler::xenolith::material2d::SnackbarData::textBlendValue

## BRIEF

## CONTENT

Тип: float


# ::stappler::xenolith::material2d::SnackbarData::buttonText

## BRIEF

## CONTENT

Тип: stappler::mem_std::String


# ::stappler::xenolith::material2d::SnackbarData::buttonIcon

## BRIEF

## CONTENT

Тип: stappler::xenolith::IconName


# ::stappler::xenolith::material2d::SnackbarData::buttonCallback

## BRIEF

## CONTENT

Тип: Function<void ()>


# ::stappler::xenolith::material2d::SnackbarData::buttonColor

## BRIEF

## CONTENT

Тип: stappler::geom::Color


# ::stappler::xenolith::material2d::SnackbarData::buttonBlendValue

## BRIEF

## CONTENT

Тип: float


# ::stappler::xenolith::material2d::SnackbarData::delayTime

## BRIEF

## CONTENT

Тип: float


# ::stappler::xenolith::material2d::SnackbarData::SnackbarData()

## BRIEF

## CONTENT


# ::stappler::xenolith::material2d::SnackbarData::SnackbarData(stappler::xenolith::material2d::SnackbarData const&)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::material2d::SnackbarData const&


# ::stappler::xenolith::material2d::SnackbarData::SnackbarData(stappler::xenolith::material2d::SnackbarData&&)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::material2d::SnackbarData&&


# ::stappler::xenolith::material2d::SnackbarData::operator=(stappler::xenolith::material2d::SnackbarData const&)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::material2d::SnackbarData const&

Возвращает:
* stappler::xenolith::material2d::SnackbarData&

# ::stappler::xenolith::material2d::SnackbarData::operator=(stappler::xenolith::material2d::SnackbarData&&)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::material2d::SnackbarData&&

Возвращает:
* stappler::xenolith::material2d::SnackbarData&

# ::stappler::xenolith::material2d::SnackbarData::SnackbarData(stappler::StringView const&)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView const&


# ::stappler::xenolith::material2d::SnackbarData::SnackbarData(stappler::StringView const&,const stappler::geom::Color&,float)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView const&
* const stappler::geom::Color&
* float


# ::stappler::xenolith::material2d::SnackbarData::withButton(stappler::StringView const&,Function<void ()>&&,const stappler::geom::Color&,float)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView const&
* Function<void ()>&&
* const stappler::geom::Color&
* float

Возвращает:
* stappler::xenolith::material2d::SnackbarData&

# ::stappler::xenolith::material2d::SnackbarData::withButton(stappler::StringView const&,stappler::xenolith::IconName,Function<void ()>&&,const stappler::geom::Color&,float)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView const&
* stappler::xenolith::IconName
* Function<void ()>&&
* const stappler::geom::Color&
* float

Возвращает:
* stappler::xenolith::material2d::SnackbarData&

# ::stappler::xenolith::material2d::SnackbarData::withButton(stappler::xenolith::IconName,Function<void ()>&&,const stappler::geom::Color&,float)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::IconName
* Function<void ()>&&
* const stappler::geom::Color&
* float

Возвращает:
* stappler::xenolith::material2d::SnackbarData&

# ::stappler::xenolith::material2d::SnackbarData::delayFor(float)

## BRIEF

## CONTENT

Параметры:
* float

Возвращает:
* stappler::xenolith::material2d::SnackbarData&