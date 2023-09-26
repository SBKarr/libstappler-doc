Title: XLCorePipelineInfo.h


# XENOLITH_CORE_XLCOREPIPELINEINFO_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::core::EmptyTextureName

## BRIEF

## CONTENT

Тип: auto const


# ::stappler::xenolith::core::SolidTextureName

## BRIEF

## CONTENT

Тип: auto const


# ::stappler::xenolith::core::ColorMode

## BRIEF

## CONTENT


# ::stappler::xenolith::core::ColorMode::SolidColor

## BRIEF

## CONTENT

Тип: stappler::xenolith::core::ColorMode const


# ::stappler::xenolith::core::ColorMode::IntensityChannel

## BRIEF

## CONTENT

Тип: stappler::xenolith::core::ColorMode const


# ::stappler::xenolith::core::ColorMode::AlphaChannel

## BRIEF

## CONTENT

Тип: stappler::xenolith::core::ColorMode const


# ::stappler::xenolith::core::ColorMode::Mode

## BRIEF

## CONTENT

Значения:
* Solid
* Custom


# ::stappler::xenolith::core::ColorMode::mode

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::xenolith::core::ColorMode::r

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::xenolith::core::ColorMode::g

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::xenolith::core::ColorMode::b

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::xenolith::core::ColorMode::a

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::xenolith::core::ColorMode::ColorMode()

## BRIEF

## CONTENT


# ::stappler::xenolith::core::ColorMode::ColorMode(stappler::xenolith::core::ComponentMapping,stappler::xenolith::core::ComponentMapping,stappler::xenolith::core::ComponentMapping,stappler::xenolith::core::ComponentMapping)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::core::ComponentMapping
* stappler::xenolith::core::ComponentMapping
* stappler::xenolith::core::ComponentMapping
* stappler::xenolith::core::ComponentMapping


# ::stappler::xenolith::core::ColorMode::ColorMode(stappler::xenolith::core::ComponentMapping,stappler::xenolith::core::ComponentMapping)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::core::ComponentMapping
* stappler::xenolith::core::ComponentMapping


# ::stappler::xenolith::core::ColorMode::ColorMode(stappler::xenolith::core::ColorMode const&)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::core::ColorMode const&


# ::stappler::xenolith::core::ColorMode::ColorMode(stappler::xenolith::core::ColorMode&&)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::core::ColorMode&&


# ::stappler::xenolith::core::ColorMode::operator=(stappler::xenolith::core::ColorMode const&)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::core::ColorMode const&

Возвращает:
* stappler::xenolith::core::ColorMode&

# ::stappler::xenolith::core::ColorMode::operator=(stappler::xenolith::core::ColorMode&&)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::core::ColorMode&&

Возвращает:
* stappler::xenolith::core::ColorMode&

# ::stappler::xenolith::core::ColorMode::operator==(stappler::xenolith::core::ColorMode const&) const

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::core::ColorMode const&

Возвращает:
* bool

# ::stappler::xenolith::core::ColorMode::operator!=(stappler::xenolith::core::ColorMode const&) const

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::core::ColorMode const&

Возвращает:
* bool

# ::stappler::xenolith::core::ColorMode::getMode() const

## BRIEF

## CONTENT

Возвращает:
* stappler::xenolith::core::ColorMode::Mode

# ::stappler::xenolith::core::ColorMode::getR() const

## BRIEF

## CONTENT

Возвращает:
* stappler::xenolith::core::ComponentMapping

# ::stappler::xenolith::core::ColorMode::getG() const

## BRIEF

## CONTENT

Возвращает:
* stappler::xenolith::core::ComponentMapping

# ::stappler::xenolith::core::ColorMode::getB() const

## BRIEF

## CONTENT

Возвращает:
* stappler::xenolith::core::ComponentMapping

# ::stappler::xenolith::core::ColorMode::getA() const

## BRIEF

## CONTENT

Возвращает:
* stappler::xenolith::core::ComponentMapping

# ::stappler::xenolith::core::ColorMode::toInt() const

## BRIEF

## CONTENT

Возвращает:
* uint32_t

# ::stappler::xenolith::core::ColorMode::operator uint32_t() const

## BRIEF

## CONTENT

Возвращает:
* uint32_t

# ::stappler::xenolith::core::BlendInfo

## BRIEF

## CONTENT


# ::stappler::xenolith::core::BlendInfo::enabled

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::xenolith::core::BlendInfo::srcColor

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::xenolith::core::BlendInfo::dstColor

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::xenolith::core::BlendInfo::opColor

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::xenolith::core::BlendInfo::srcAlpha

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::xenolith::core::BlendInfo::dstAlpha

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::xenolith::core::BlendInfo::opAlpha

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::xenolith::core::BlendInfo::writeMask

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::xenolith::core::BlendInfo::BlendInfo()

## BRIEF

## CONTENT


# ::stappler::xenolith::core::BlendInfo::BlendInfo(stappler::xenolith::core::BlendFactor,stappler::xenolith::core::BlendFactor,stappler::xenolith::core::BlendOp,stappler::xenolith::core::ColorComponentFlags)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::core::BlendFactor
* stappler::xenolith::core::BlendFactor
* stappler::xenolith::core::BlendOp
* stappler::xenolith::core::ColorComponentFlags


# ::stappler::xenolith::core::BlendInfo::BlendInfo(stappler::xenolith::core::BlendFactor,stappler::xenolith::core::BlendFactor,stappler::xenolith::core::BlendOp,stappler::xenolith::core::BlendFactor,stappler::xenolith::core::BlendFactor,stappler::xenolith::core::BlendOp,stappler::xenolith::core::ColorComponentFlags)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::core::BlendFactor
* stappler::xenolith::core::BlendFactor
* stappler::xenolith::core::BlendOp
* stappler::xenolith::core::BlendFactor
* stappler::xenolith::core::BlendFactor
* stappler::xenolith::core::BlendOp
* stappler::xenolith::core::ColorComponentFlags


# ::stappler::xenolith::core::BlendInfo::operator==(stappler::xenolith::core::BlendInfo const&) const

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::core::BlendInfo const&

Возвращает:
* bool

# ::stappler::xenolith::core::BlendInfo::operator!=(stappler::xenolith::core::BlendInfo const&) const

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::core::BlendInfo const&

Возвращает:
* bool

# ::stappler::xenolith::core::BlendInfo::isEnabled() const

## BRIEF

## CONTENT

Возвращает:
* bool

# ::stappler::xenolith::core::DepthInfo

## BRIEF

## CONTENT


# ::stappler::xenolith::core::DepthInfo::writeEnabled

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::xenolith::core::DepthInfo::testEnabled

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::xenolith::core::DepthInfo::compare

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::xenolith::core::DepthInfo::DepthInfo()

## BRIEF

## CONTENT


# ::stappler::xenolith::core::DepthInfo::DepthInfo(bool,bool,stappler::xenolith::core::CompareOp)

## BRIEF

## CONTENT

Параметры:
* bool
* bool
* stappler::xenolith::core::CompareOp


# ::stappler::xenolith::core::DepthInfo::operator==(stappler::xenolith::core::DepthInfo const&) const

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::core::DepthInfo const&

Возвращает:
* bool

# ::stappler::xenolith::core::DepthInfo::operator!=(stappler::xenolith::core::DepthInfo const&) const

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::core::DepthInfo const&

Возвращает:
* bool

# ::stappler::xenolith::core::DepthBounds

## BRIEF

## CONTENT


# ::stappler::xenolith::core::DepthBounds::enabled

## BRIEF

## CONTENT

Тип: bool


# ::stappler::xenolith::core::DepthBounds::min

## BRIEF

## CONTENT

Тип: float


# ::stappler::xenolith::core::DepthBounds::max

## BRIEF

## CONTENT

Тип: float


# ::stappler::xenolith::core::DepthBounds::operator==(stappler::xenolith::core::DepthBounds const&) const

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::core::DepthBounds const&

Возвращает:
* bool

# ::stappler::xenolith::core::DepthBounds::operator!=(stappler::xenolith::core::DepthBounds const&) const

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::core::DepthBounds const&

Возвращает:
* bool

# ::stappler::xenolith::core::StencilInfo

## BRIEF

## CONTENT


# ::stappler::xenolith::core::StencilInfo::fail

## BRIEF

## CONTENT

Тип: stappler::xenolith::core::StencilOp


# ::stappler::xenolith::core::StencilInfo::pass

## BRIEF

## CONTENT

Тип: stappler::xenolith::core::StencilOp


# ::stappler::xenolith::core::StencilInfo::depthFail

## BRIEF

## CONTENT

Тип: stappler::xenolith::core::StencilOp


# ::stappler::xenolith::core::StencilInfo::compare

## BRIEF

## CONTENT

Тип: stappler::xenolith::core::CompareOp


# ::stappler::xenolith::core::StencilInfo::compareMask

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::xenolith::core::StencilInfo::writeMask

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::xenolith::core::StencilInfo::reference

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::xenolith::core::LineWidth

## BRIEF

## CONTENT


# ::stappler::xenolith::core::PipelineMaterialInfo

## BRIEF

## CONTENT


# ::stappler::xenolith::core::PipelineMaterialInfo::PipelineMaterialInfo()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::PipelineMaterialInfo::PipelineMaterialInfo(stappler::xenolith::core::PipelineMaterialInfo const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::PipelineMaterialInfo const&


# ::stappler::xenolith::core::PipelineMaterialInfo::operator=(stappler::xenolith::core::PipelineMaterialInfo const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::PipelineMaterialInfo const&

Возвращает:
* stappler::xenolith::core::PipelineMaterialInfo&

# ::stappler::xenolith::core::PipelineMaterialInfo::PipelineMaterialInfo<typename,typename,typename>(T&&,Args &&...)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename T
* typename Args
* typename 

Параметры:
* T&&
* Args &&...


# ::stappler::xenolith::core::PipelineMaterialInfo::setBlendInfo(stappler::xenolith::core::BlendInfo const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::BlendInfo const&


# ::stappler::xenolith::core::PipelineMaterialInfo::setDepthInfo(stappler::xenolith::core::DepthInfo const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::DepthInfo const&


# ::stappler::xenolith::core::PipelineMaterialInfo::setDepthBounds(stappler::xenolith::core::DepthBounds const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::DepthBounds const&


# ::stappler::xenolith::core::PipelineMaterialInfo::enableStencil(stappler::xenolith::core::StencilInfo const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::StencilInfo const&


# ::stappler::xenolith::core::PipelineMaterialInfo::enableStencil(stappler::xenolith::core::StencilInfo const&,stappler::xenolith::core::StencilInfo const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::StencilInfo const&
* stappler::xenolith::core::StencilInfo const&


# ::stappler::xenolith::core::PipelineMaterialInfo::disableStancil()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::PipelineMaterialInfo::setLineWidth(float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float


# ::stappler::xenolith::core::PipelineMaterialInfo::getBlendInfo() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::core::BlendInfo const&

# ::stappler::xenolith::core::PipelineMaterialInfo::getDepthInfo() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::core::DepthInfo const&

# ::stappler::xenolith::core::PipelineMaterialInfo::getDepthBounds() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::core::DepthBounds const&

# ::stappler::xenolith::core::PipelineMaterialInfo::isStancilEnabled() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::core::PipelineMaterialInfo::getStencilInfoFront() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::core::StencilInfo const&

# ::stappler::xenolith::core::PipelineMaterialInfo::getStencilInfoBack() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::core::StencilInfo const&

# ::stappler::xenolith::core::PipelineMaterialInfo::getLineWidth() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* float

# ::stappler::xenolith::core::PipelineMaterialInfo::operator==(stappler::xenolith::core::PipelineMaterialInfo const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::PipelineMaterialInfo const&

Возвращает:
* bool

# ::stappler::xenolith::core::PipelineMaterialInfo::operator!=(stappler::xenolith::core::PipelineMaterialInfo const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::PipelineMaterialInfo const&

Возвращает:
* bool

# ::stappler::xenolith::core::PipelineMaterialInfo::hash() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* size_t

# ::stappler::xenolith::core::PipelineMaterialInfo::data() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::mem_std::String

# ::stappler::xenolith::core::PipelineMaterialInfo::description() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::mem_std::String

# ::stappler::xenolith::core::PipelineMaterialInfo::_setup(stappler::xenolith::core::BlendInfo const&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::core::BlendInfo const&


# ::stappler::xenolith::core::PipelineMaterialInfo::_setup(stappler::xenolith::core::DepthInfo const&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::core::DepthInfo const&


# ::stappler::xenolith::core::PipelineMaterialInfo::_setup(stappler::xenolith::core::DepthBounds const&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::core::DepthBounds const&


# ::stappler::xenolith::core::PipelineMaterialInfo::_setup(stappler::xenolith::core::StencilInfo const&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::core::StencilInfo const&


# ::stappler::xenolith::core::PipelineMaterialInfo::_setup(stappler::xenolith::core::LineWidth)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::core::LineWidth


# ::stappler::xenolith::core::PipelineMaterialInfo::setup<typename>(T&&)

## BRIEF

## CONTENT

Доступ: protected

Параметры шаблона:
* typename T

Параметры:
* T&&


# ::stappler::xenolith::core::PipelineMaterialInfo::setup<typename,typename>(T&&,Args &&...)

## BRIEF

## CONTENT

Доступ: protected

Параметры шаблона:
* typename T
* typename Args

Параметры:
* T&&
* Args &&...


# ::stappler::xenolith::core::PipelineMaterialInfo::setup()

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::core::PipelineMaterialInfo::blend

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::core::BlendInfo


# ::stappler::xenolith::core::PipelineMaterialInfo::depth

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::core::DepthInfo


# ::stappler::xenolith::core::PipelineMaterialInfo::bounds

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::core::DepthBounds


# ::stappler::xenolith::core::PipelineMaterialInfo::front

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::core::StencilInfo


# ::stappler::xenolith::core::PipelineMaterialInfo::back

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::core::StencilInfo


# ::stappler::xenolith::core::PipelineMaterialInfo::stencil

## BRIEF

## CONTENT

Доступ: protected

Тип: uint32_t


# ::stappler::xenolith::core::PipelineMaterialInfo::lineWidth

## BRIEF

## CONTENT

Доступ: protected

Тип: float
