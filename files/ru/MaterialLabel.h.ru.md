Title: MaterialLabel.h


# XENOLITH_RENDERER_MATERIAL2D_BASE_MATERIALLABEL_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::material2d::TypescaleRole

## BRIEF

## CONTENT

Значения:
* DisplayLarge
* DisplayMedium
* DisplaySmall
* HeadlineLarge
* HeadlineMedium
* HeadlineSmall
* TitleLarge
* TitleMedium
* TitleSmall
* LabelLarge
* LabelMedium
* LabelSmall
* BodyLarge
* BodyMedium
* BodySmall
* Unknown


# ::stappler::xenolith::material2d::TypescaleLabel

## BRIEF

## CONTENT

Базовые классы:
* Label


# ::stappler::xenolith::material2d::TypescaleLabel::getTypescaleRoleStyle(stappler::xenolith::material2d::TypescaleRole,float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::material2d::TypescaleRole
* float

Возвращает:
* stappler::xenolith::font::LabelBase::DescriptionStyle

# ::stappler::xenolith::material2d::TypescaleLabel::~TypescaleLabel()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::material2d::TypescaleLabel::init(stappler::xenolith::material2d::TypescaleRole)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::material2d::TypescaleRole

Возвращает:
* bool

# ::stappler::xenolith::material2d::TypescaleLabel::init(stappler::xenolith::material2d::TypescaleRole,stappler::StringView)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::material2d::TypescaleRole
* stappler::StringView

Возвращает:
* bool

# ::stappler::xenolith::material2d::TypescaleLabel::init(stappler::xenolith::material2d::TypescaleRole,stappler::StringView,float,stappler::xenolith::basic2d::Label::TextAlign)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::material2d::TypescaleRole
* stappler::StringView
* float
* stappler::xenolith::basic2d::Label::TextAlign

Возвращает:
* bool

# ::stappler::xenolith::material2d::TypescaleLabel::getRole() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::material2d::TypescaleRole

# ::stappler::xenolith::material2d::TypescaleLabel::setRole(stappler::xenolith::material2d::TypescaleRole)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::material2d::TypescaleRole


# ::stappler::xenolith::material2d::TypescaleLabel::setBlendColor(stappler::xenolith::material2d::ColorRole,float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::material2d::ColorRole
* float


# ::stappler::xenolith::material2d::TypescaleLabel::setBlendColor(const stappler::geom::Color4F&,float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* const stappler::geom::Color4F&
* float


# ::stappler::xenolith::material2d::TypescaleLabel::getBlendColorRule() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::material2d::ColorRole

# ::stappler::xenolith::material2d::TypescaleLabel::getBlendColor() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* const stappler::geom::Color4F&

# ::stappler::xenolith::material2d::TypescaleLabel::getBlendColorValue() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* float

# ::stappler::xenolith::material2d::TypescaleLabel::setPreserveOpacity(bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* bool


# ::stappler::xenolith::material2d::TypescaleLabel::isPreserveOpacity() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::material2d::TypescaleLabel::visitDraw(stappler::xenolith::FrameInfo&,stappler::xenolith::NodeFlags)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::FrameInfo&
* stappler::xenolith::NodeFlags

Возвращает:
* bool

# ::stappler::xenolith::material2d::TypescaleLabel::specializeStyle(stappler::xenolith::font::LabelBase::DescriptionStyle&,float) const

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::font::LabelBase::DescriptionStyle&
* float


# ::stappler::xenolith::material2d::TypescaleLabel::_preserveOpacity

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::material2d::TypescaleLabel::_blendValue

## BRIEF

## CONTENT

Доступ: protected

Тип: float


# ::stappler::xenolith::material2d::TypescaleLabel::_blendColor

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::geom::Color4F


# ::stappler::xenolith::material2d::TypescaleLabel::_blendColorRule

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::material2d::ColorRole


# ::stappler::xenolith::material2d::TypescaleLabel::_role

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::material2d::TypescaleRole


# ::stappler::xenolith::material2d::TypescaleLabel::_themeType

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::material2d::ThemeType
