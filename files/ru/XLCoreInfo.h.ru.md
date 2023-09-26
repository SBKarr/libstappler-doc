Title: XLCoreInfo.h


# XENOLITH_CORE_XLCOREINFO_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::core::MipLevels

## BRIEF

## CONTENT


# ::stappler::xenolith::core::ArrayLayers

## BRIEF

## CONTENT


# ::stappler::xenolith::core::Extent1

## BRIEF

## CONTENT


# ::stappler::xenolith::core::BaseArrayLayer

## BRIEF

## CONTENT


# ::stappler::xenolith::core::SamplerInfo

## BRIEF

## CONTENT


# ::stappler::xenolith::core::SamplerInfo::magFilter

## BRIEF

## CONTENT

Тип: stappler::xenolith::core::Filter


# ::stappler::xenolith::core::SamplerInfo::minFilter

## BRIEF

## CONTENT

Тип: stappler::xenolith::core::Filter


# ::stappler::xenolith::core::SamplerInfo::mipmapMode

## BRIEF

## CONTENT

Тип: stappler::xenolith::core::SamplerMipmapMode


# ::stappler::xenolith::core::SamplerInfo::addressModeU

## BRIEF

## CONTENT

Тип: stappler::xenolith::core::SamplerAddressMode


# ::stappler::xenolith::core::SamplerInfo::addressModeV

## BRIEF

## CONTENT

Тип: stappler::xenolith::core::SamplerAddressMode


# ::stappler::xenolith::core::SamplerInfo::addressModeW

## BRIEF

## CONTENT

Тип: stappler::xenolith::core::SamplerAddressMode


# ::stappler::xenolith::core::SamplerInfo::mipLodBias

## BRIEF

## CONTENT

Тип: float


# ::stappler::xenolith::core::SamplerInfo::anisotropyEnable

## BRIEF

## CONTENT

Тип: bool


# ::stappler::xenolith::core::SamplerInfo::maxAnisotropy

## BRIEF

## CONTENT

Тип: float


# ::stappler::xenolith::core::SamplerInfo::compareEnable

## BRIEF

## CONTENT

Тип: bool


# ::stappler::xenolith::core::SamplerInfo::compareOp

## BRIEF

## CONTENT

Тип: stappler::xenolith::core::CompareOp


# ::stappler::xenolith::core::SamplerInfo::minLod

## BRIEF

## CONTENT

Тип: float


# ::stappler::xenolith::core::SamplerInfo::maxLod

## BRIEF

## CONTENT

Тип: float


# ::stappler::xenolith::core::SamplerInfo::operator==(stappler::xenolith::core::SamplerInfo const&) const

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::core::SamplerInfo const&

Возвращает:
* bool

# ::stappler::xenolith::core::SamplerInfo::operator!=(stappler::xenolith::core::SamplerInfo const&) const

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::core::SamplerInfo const&

Возвращает:
* bool

# ::stappler::xenolith::core::SamplerInfo::operator<=>(stappler::xenolith::core::SamplerInfo const&) const

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::core::SamplerInfo const&

Возвращает:
* auto

# ::stappler::xenolith::core::ForceBufferFlags

## BRIEF

## CONTENT


# ::stappler::xenolith::core::ForceBufferUsage

## BRIEF

## CONTENT


# ::stappler::xenolith::core::BufferPersistent

## BRIEF

## CONTENT


# ::stappler::xenolith::core::BufferInfo

## BRIEF

## CONTENT

Базовые классы:
* NamedMem


# ::stappler::xenolith::core::BufferInfo::flags

## BRIEF

## CONTENT

Тип: stappler::xenolith::core::BufferFlags


# ::stappler::xenolith::core::BufferInfo::usage

## BRIEF

## CONTENT

Тип: stappler::xenolith::core::BufferUsage


# ::stappler::xenolith::core::BufferInfo::type

## BRIEF

## CONTENT

Тип: stappler::xenolith::core::PassType


# ::stappler::xenolith::core::BufferInfo::size

## BRIEF

## CONTENT

Тип: uint64_t


# ::stappler::xenolith::core::BufferInfo::persistent

## BRIEF

## CONTENT

Тип: bool


# ::stappler::xenolith::core::BufferInfo::BufferInfo()

## BRIEF

## CONTENT


# ::stappler::xenolith::core::BufferInfo::BufferInfo<typename>(Args &&...)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Args

Параметры:
* Args &&...


# ::stappler::xenolith::core::BufferInfo::setup(stappler::xenolith::core::BufferInfo const&)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::core::BufferInfo const&


# ::stappler::xenolith::core::BufferInfo::setup(stappler::xenolith::core::BufferFlags)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::core::BufferFlags


# ::stappler::xenolith::core::BufferInfo::setup(stappler::xenolith::core::ForceBufferFlags)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::core::ForceBufferFlags


# ::stappler::xenolith::core::BufferInfo::setup(stappler::xenolith::core::BufferUsage)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::core::BufferUsage


# ::stappler::xenolith::core::BufferInfo::setup(stappler::xenolith::core::ForceBufferUsage)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::core::ForceBufferUsage


# ::stappler::xenolith::core::BufferInfo::setup(uint64_t)

## BRIEF

## CONTENT

Параметры:
* uint64_t


# ::stappler::xenolith::core::BufferInfo::setup(stappler::xenolith::core::BufferPersistent)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::core::BufferPersistent


# ::stappler::xenolith::core::BufferInfo::setup(stappler::xenolith::core::PassType)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::core::PassType


# ::stappler::xenolith::core::BufferInfo::define<typename>(T&&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename T

Параметры:
* T&&


# ::stappler::xenolith::core::BufferInfo::define<typename,typename>(T&&,Args &&...)

## BRIEF

## CONTENT

Параметры шаблона:
* typename T
* typename Args

Параметры:
* T&&
* Args &&...


# ::stappler::xenolith::core::BufferInfo::description() const

## BRIEF

## CONTENT

Возвращает:
* stappler::mem_std::String

# ::stappler::xenolith::core::BufferData

## BRIEF

## CONTENT

Базовые классы:
* BufferInfo


# ::stappler::xenolith::core::BufferData::DataCallback

## BRIEF

## CONTENT


# ::stappler::xenolith::core::BufferData::data

## BRIEF

## CONTENT

Тип: stappler::BytesView


# ::stappler::xenolith::core::BufferData::callback

## BRIEF

## CONTENT

Тип: memory::function<void (uint8_t *, uint64_t, const DataCallback &)>


# ::stappler::xenolith::core::BufferData::buffer

## BRIEF

## CONTENT

Тип: Rc<stappler::xenolith::core::BufferObject>


# ::stappler::xenolith::core::BufferData::atlas

## BRIEF

## CONTENT

Тип: Rc<stappler::xenolith::core::DataAtlas>


# ::stappler::xenolith::core::BufferData::resource

## BRIEF

## CONTENT

Тип: stappler::xenolith::core::Resource const*


# ::stappler::xenolith::core::ForceImageFlags

## BRIEF

## CONTENT


# ::stappler::xenolith::core::ForceImageUsage

## BRIEF

## CONTENT


# ::stappler::xenolith::core::ImageInfoData

## BRIEF

## CONTENT


# ::stappler::xenolith::core::ImageInfoData::format

## BRIEF

## CONTENT

Тип: stappler::xenolith::core::ImageFormat


# ::stappler::xenolith::core::ImageInfoData::flags

## BRIEF

## CONTENT

Тип: stappler::xenolith::core::ImageFlags


# ::stappler::xenolith::core::ImageInfoData::imageType

## BRIEF

## CONTENT

Тип: stappler::xenolith::core::ImageType


# ::stappler::xenolith::core::ImageInfoData::extent

## BRIEF

## CONTENT

Тип: stappler::xenolith::Extent3


# ::stappler::xenolith::core::ImageInfoData::mipLevels

## BRIEF

## CONTENT

Тип: stappler::xenolith::core::MipLevels


# ::stappler::xenolith::core::ImageInfoData::arrayLayers

## BRIEF

## CONTENT

Тип: stappler::xenolith::core::ArrayLayers


# ::stappler::xenolith::core::ImageInfoData::samples

## BRIEF

## CONTENT

Тип: stappler::xenolith::core::SampleCount


# ::stappler::xenolith::core::ImageInfoData::tiling

## BRIEF

## CONTENT

Тип: stappler::xenolith::core::ImageTiling


# ::stappler::xenolith::core::ImageInfoData::usage

## BRIEF

## CONTENT

Тип: stappler::xenolith::core::ImageUsage


# ::stappler::xenolith::core::ImageInfoData::type

## BRIEF

## CONTENT

Тип: stappler::xenolith::core::PassType


# ::stappler::xenolith::core::ImageInfoData::hints

## BRIEF

## CONTENT

Тип: stappler::xenolith::core::ImageHints


# ::stappler::xenolith::core::ImageInfoData::getViewInfo(stappler::xenolith::core::ImageViewInfo const&) const

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::core::ImageViewInfo const&

Возвращает:
* stappler::xenolith::core::ImageViewInfo

# ::stappler::xenolith::core::ImageInfoData::operator==(stappler::xenolith::core::ImageInfoData const&) const

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::core::ImageInfoData const&

Возвращает:
* bool

# ::stappler::xenolith::core::ImageInfoData::operator!=(stappler::xenolith::core::ImageInfoData const&) const

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::core::ImageInfoData const&

Возвращает:
* bool

# ::stappler::xenolith::core::ImageInfoData::operator<=>(stappler::xenolith::core::ImageInfoData const&) const

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::core::ImageInfoData const&

Возвращает:
* auto

# ::stappler::xenolith::core::ImageInfo

## BRIEF

## CONTENT

Базовые классы:
* NamedMem
* ImageInfoData


# ::stappler::xenolith::core::ImageInfo::ImageInfo()

## BRIEF

## CONTENT


# ::stappler::xenolith::core::ImageInfo::ImageInfo<typename>(Args &&...)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Args

Параметры:
* Args &&...


# ::stappler::xenolith::core::ImageInfo::setup(stappler::xenolith::core::Extent1)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::core::Extent1


# ::stappler::xenolith::core::ImageInfo::setup(stappler::xenolith::Extent2)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::Extent2


# ::stappler::xenolith::core::ImageInfo::setup(stappler::xenolith::Extent3)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::Extent3


# ::stappler::xenolith::core::ImageInfo::setup(stappler::xenolith::core::ImageFlags)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::core::ImageFlags


# ::stappler::xenolith::core::ImageInfo::setup(stappler::xenolith::core::ForceImageFlags)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::core::ForceImageFlags


# ::stappler::xenolith::core::ImageInfo::setup(stappler::xenolith::core::ImageType)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::core::ImageType


# ::stappler::xenolith::core::ImageInfo::setup(stappler::xenolith::core::MipLevels)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::core::MipLevels


# ::stappler::xenolith::core::ImageInfo::setup(stappler::xenolith::core::ArrayLayers)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::core::ArrayLayers


# ::stappler::xenolith::core::ImageInfo::setup(stappler::xenolith::core::SampleCount)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::core::SampleCount


# ::stappler::xenolith::core::ImageInfo::setup(stappler::xenolith::core::ImageTiling)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::core::ImageTiling


# ::stappler::xenolith::core::ImageInfo::setup(stappler::xenolith::core::ImageUsage)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::core::ImageUsage


# ::stappler::xenolith::core::ImageInfo::setup(stappler::xenolith::core::ForceImageUsage)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::core::ForceImageUsage


# ::stappler::xenolith::core::ImageInfo::setup(stappler::xenolith::core::ImageFormat)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::core::ImageFormat


# ::stappler::xenolith::core::ImageInfo::setup(stappler::xenolith::core::PassType)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::core::PassType


# ::stappler::xenolith::core::ImageInfo::setup(stappler::xenolith::core::ImageHints)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::core::ImageHints


# ::stappler::xenolith::core::ImageInfo::setup(stappler::StringView)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView


# ::stappler::xenolith::core::ImageInfo::define<typename>(T&&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename T

Параметры:
* T&&


# ::stappler::xenolith::core::ImageInfo::define<typename,typename>(T&&,Args &&...)

## BRIEF

## CONTENT

Параметры шаблона:
* typename T
* typename Args

Параметры:
* T&&
* Args &&...


# ::stappler::xenolith::core::ImageInfo::isCompatible(stappler::xenolith::core::ImageInfo const&) const

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::core::ImageInfo const&

Возвращает:
* bool

# ::stappler::xenolith::core::ImageInfo::description() const

## BRIEF

## CONTENT

Возвращает:
* stappler::mem_std::String

# ::stappler::xenolith::core::ImageData

## BRIEF

## CONTENT

Базовые классы:
* ImageInfo


# ::stappler::xenolith::core::ImageData::DataCallback

## BRIEF

## CONTENT


# ::stappler::xenolith::core::ImageData::data

## BRIEF

## CONTENT

Тип: stappler::BytesView


# ::stappler::xenolith::core::ImageData::memCallback

## BRIEF

## CONTENT

Тип: memory::function<void (uint8_t *, uint64_t, const DataCallback &)>


# ::stappler::xenolith::core::ImageData::stdCallback

## BRIEF

## CONTENT

Тип: std::function<void (uint8_t *, uint64_t, const DataCallback &)>


# ::stappler::xenolith::core::ImageData::image

## BRIEF

## CONTENT

Тип: Rc<stappler::xenolith::core::ImageObject>


# ::stappler::xenolith::core::ImageData::atlas

## BRIEF

## CONTENT

Тип: Rc<stappler::xenolith::core::DataAtlas>


# ::stappler::xenolith::core::ImageData::resource

## BRIEF

## CONTENT

Тип: stappler::xenolith::core::Resource const*


# ::stappler::xenolith::core::ComponentMappingR

## BRIEF

## CONTENT


# ::stappler::xenolith::core::ComponentMappingG

## BRIEF

## CONTENT


# ::stappler::xenolith::core::ComponentMappingB

## BRIEF

## CONTENT


# ::stappler::xenolith::core::ComponentMappingA

## BRIEF

## CONTENT


# ::stappler::xenolith::core::ImageViewInfo

## BRIEF

## CONTENT


# ::stappler::xenolith::core::ImageViewInfo::format

## BRIEF

## CONTENT

Тип: stappler::xenolith::core::ImageFormat


# ::stappler::xenolith::core::ImageViewInfo::type

## BRIEF

## CONTENT

Тип: stappler::xenolith::core::ImageViewType


# ::stappler::xenolith::core::ImageViewInfo::r

## BRIEF

## CONTENT

Тип: stappler::xenolith::core::ComponentMapping


# ::stappler::xenolith::core::ImageViewInfo::g

## BRIEF

## CONTENT

Тип: stappler::xenolith::core::ComponentMapping


# ::stappler::xenolith::core::ImageViewInfo::b

## BRIEF

## CONTENT

Тип: stappler::xenolith::core::ComponentMapping


# ::stappler::xenolith::core::ImageViewInfo::a

## BRIEF

## CONTENT

Тип: stappler::xenolith::core::ComponentMapping


# ::stappler::xenolith::core::ImageViewInfo::baseArrayLayer

## BRIEF

## CONTENT

Тип: stappler::xenolith::core::BaseArrayLayer


# ::stappler::xenolith::core::ImageViewInfo::layerCount

## BRIEF

## CONTENT

Тип: stappler::xenolith::core::ArrayLayers


# ::stappler::xenolith::core::ImageViewInfo::ImageViewInfo()

## BRIEF

## CONTENT


# ::stappler::xenolith::core::ImageViewInfo::ImageViewInfo(stappler::xenolith::core::ImageViewInfo const&)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::core::ImageViewInfo const&


# ::stappler::xenolith::core::ImageViewInfo::ImageViewInfo(stappler::xenolith::core::ImageViewInfo&&)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::core::ImageViewInfo&&


# ::stappler::xenolith::core::ImageViewInfo::operator=(stappler::xenolith::core::ImageViewInfo const&)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::core::ImageViewInfo const&

Возвращает:
* stappler::xenolith::core::ImageViewInfo&

# ::stappler::xenolith::core::ImageViewInfo::operator=(stappler::xenolith::core::ImageViewInfo&&)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::core::ImageViewInfo&&

Возвращает:
* stappler::xenolith::core::ImageViewInfo&

# ::stappler::xenolith::core::ImageViewInfo::ImageViewInfo<typename>(Args &&...)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Args

Параметры:
* Args &&...


# ::stappler::xenolith::core::ImageViewInfo::setup(stappler::xenolith::core::ImageViewInfo const&)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::core::ImageViewInfo const&


# ::stappler::xenolith::core::ImageViewInfo::setup(stappler::xenolith::core::ImageInfoData const&)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::core::ImageInfoData const&


# ::stappler::xenolith::core::ImageViewInfo::setup(stappler::xenolith::core::ImageViewType)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::core::ImageViewType


# ::stappler::xenolith::core::ImageViewInfo::setup(stappler::xenolith::core::ImageFormat)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::core::ImageFormat


# ::stappler::xenolith::core::ImageViewInfo::setup(stappler::xenolith::core::ArrayLayers)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::core::ArrayLayers


# ::stappler::xenolith::core::ImageViewInfo::setup(stappler::xenolith::core::BaseArrayLayer)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::core::BaseArrayLayer


# ::stappler::xenolith::core::ImageViewInfo::setup(stappler::xenolith::core::ComponentMappingR)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::core::ComponentMappingR


# ::stappler::xenolith::core::ImageViewInfo::setup(stappler::xenolith::core::ComponentMappingG)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::core::ComponentMappingG


# ::stappler::xenolith::core::ImageViewInfo::setup(stappler::xenolith::core::ComponentMappingB)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::core::ComponentMappingB


# ::stappler::xenolith::core::ImageViewInfo::setup(stappler::xenolith::core::ComponentMappingA)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::core::ComponentMappingA


# ::stappler::xenolith::core::ImageViewInfo::setup(stappler::xenolith::core::ColorMode,bool)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::core::ColorMode
* bool


# ::stappler::xenolith::core::ImageViewInfo::setup(stappler::xenolith::core::ImageType,stappler::xenolith::core::ArrayLayers)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::core::ImageType
* stappler::xenolith::core::ArrayLayers


# ::stappler::xenolith::core::ImageViewInfo::getColorMode() const

## BRIEF

## CONTENT

Возвращает:
* stappler::xenolith::core::ColorMode

# ::stappler::xenolith::core::ImageViewInfo::define<typename>(T&&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename T

Параметры:
* T&&


# ::stappler::xenolith::core::ImageViewInfo::define<typename,typename>(T&&,Args &&...)

## BRIEF

## CONTENT

Параметры шаблона:
* typename T
* typename Args

Параметры:
* T&&
* Args &&...


# ::stappler::xenolith::core::ImageViewInfo::isCompatible(stappler::xenolith::core::ImageInfo const&) const

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::core::ImageInfo const&

Возвращает:
* bool

# ::stappler::xenolith::core::ImageViewInfo::description() const

## BRIEF

## CONTENT

Возвращает:
* stappler::mem_std::String

# ::stappler::xenolith::core::ImageViewInfo::operator==(stappler::xenolith::core::ImageViewInfo const&) const

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::core::ImageViewInfo const&

Возвращает:
* bool

# ::stappler::xenolith::core::ImageViewInfo::operator!=(stappler::xenolith::core::ImageViewInfo const&) const

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::core::ImageViewInfo const&

Возвращает:
* bool

# ::stappler::xenolith::core::ImageViewInfo::operator<=>(stappler::xenolith::core::ImageViewInfo const&) const

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::core::ImageViewInfo const&

Возвращает:
* auto

# ::stappler::xenolith::core::FrameContraints

## BRIEF

## CONTENT


# ::stappler::xenolith::core::FrameContraints::extent

## BRIEF

## CONTENT

Тип: stappler::xenolith::Extent3


# ::stappler::xenolith::core::FrameContraints::contentPadding

## BRIEF

## CONTENT

Тип: stappler::xenolith::Padding


# ::stappler::xenolith::core::FrameContraints::transform

## BRIEF

## CONTENT

Тип: stappler::xenolith::core::SurfaceTransformFlags


# ::stappler::xenolith::core::FrameContraints::density

## BRIEF

## CONTENT

Тип: float


# ::stappler::xenolith::core::FrameContraints::getScreenSize() const

## BRIEF

## CONTENT

Возвращает:
* stappler::xenolith::Size2

# ::stappler::xenolith::core::FrameContraints::getRotatedPadding() const

## BRIEF

## CONTENT

Возвращает:
* stappler::xenolith::Padding

# ::stappler::xenolith::core::FrameContraints::operator==(stappler::xenolith::core::FrameContraints const&) const

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::core::FrameContraints const&

Возвращает:
* bool

# ::stappler::xenolith::core::SwapchainConfig

## BRIEF

## CONTENT


# ::stappler::xenolith::core::SwapchainConfig::presentMode

## BRIEF

## CONTENT

Тип: stappler::xenolith::core::PresentMode


# ::stappler::xenolith::core::SwapchainConfig::presentModeFast

## BRIEF

## CONTENT

Тип: stappler::xenolith::core::PresentMode


# ::stappler::xenolith::core::SwapchainConfig::imageFormat

## BRIEF

## CONTENT

Тип: stappler::xenolith::core::ImageFormat


# ::stappler::xenolith::core::SwapchainConfig::colorSpace

## BRIEF

## CONTENT

Тип: stappler::xenolith::core::ColorSpace


# ::stappler::xenolith::core::SwapchainConfig::alpha

## BRIEF

## CONTENT

Тип: stappler::xenolith::core::CompositeAlphaFlags


# ::stappler::xenolith::core::SwapchainConfig::transform

## BRIEF

## CONTENT

Тип: stappler::xenolith::core::SurfaceTransformFlags


# ::stappler::xenolith::core::SwapchainConfig::imageCount

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::xenolith::core::SwapchainConfig::extent

## BRIEF

## CONTENT

Тип: stappler::xenolith::Extent2


# ::stappler::xenolith::core::SwapchainConfig::clipped

## BRIEF

## CONTENT

Тип: bool


# ::stappler::xenolith::core::SwapchainConfig::transfer

## BRIEF

## CONTENT

Тип: bool


# ::stappler::xenolith::core::SwapchainConfig::description() const

## BRIEF

## CONTENT

Возвращает:
* stappler::mem_std::String

# ::stappler::xenolith::core::SurfaceInfo

## BRIEF

## CONTENT


# ::stappler::xenolith::core::SurfaceInfo::minImageCount

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::xenolith::core::SurfaceInfo::maxImageCount

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::xenolith::core::SurfaceInfo::currentExtent

## BRIEF

## CONTENT

Тип: stappler::xenolith::Extent2


# ::stappler::xenolith::core::SurfaceInfo::minImageExtent

## BRIEF

## CONTENT

Тип: stappler::xenolith::Extent2


# ::stappler::xenolith::core::SurfaceInfo::maxImageExtent

## BRIEF

## CONTENT

Тип: stappler::xenolith::Extent2


# ::stappler::xenolith::core::SurfaceInfo::maxImageArrayLayers

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::xenolith::core::SurfaceInfo::supportedCompositeAlpha

## BRIEF

## CONTENT

Тип: stappler::xenolith::core::CompositeAlphaFlags


# ::stappler::xenolith::core::SurfaceInfo::supportedTransforms

## BRIEF

## CONTENT

Тип: stappler::xenolith::core::SurfaceTransformFlags


# ::stappler::xenolith::core::SurfaceInfo::currentTransform

## BRIEF

## CONTENT

Тип: stappler::xenolith::core::SurfaceTransformFlags


# ::stappler::xenolith::core::SurfaceInfo::supportedUsageFlags

## BRIEF

## CONTENT

Тип: stappler::xenolith::core::ImageUsage


# ::stappler::xenolith::core::SurfaceInfo::formats

## BRIEF

## CONTENT

Тип: Vector<Pair<stappler::xenolith::core::ImageFormat, stappler::xenolith::core::ColorSpace>>


# ::stappler::xenolith::core::SurfaceInfo::presentModes

## BRIEF

## CONTENT

Тип: Vector<stappler::xenolith::core::PresentMode>


# ::stappler::xenolith::core::SurfaceInfo::surfaceDensity

## BRIEF

## CONTENT

Тип: float


# ::stappler::xenolith::core::SurfaceInfo::isSupported(stappler::xenolith::core::SwapchainConfig const&) const

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::core::SwapchainConfig const&

Возвращает:
* bool

# ::stappler::xenolith::core::SurfaceInfo::description() const

## BRIEF

## CONTENT

Возвращает:
* stappler::mem_std::String

# ::stappler::xenolith::core::getBufferFlagsDescription(stappler::xenolith::core::BufferFlags)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::core::BufferFlags

Возвращает:
* stappler::mem_std::String

# ::stappler::xenolith::core::getBufferUsageDescription(stappler::xenolith::core::BufferUsage)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::core::BufferUsage

Возвращает:
* stappler::mem_std::String

# ::stappler::xenolith::core::getImageFlagsDescription(stappler::xenolith::core::ImageFlags)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::core::ImageFlags

Возвращает:
* stappler::mem_std::String

# ::stappler::xenolith::core::getSampleCountDescription(stappler::xenolith::core::SampleCount)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::core::SampleCount

Возвращает:
* stappler::mem_std::String

# ::stappler::xenolith::core::getImageTypeName(stappler::xenolith::core::ImageType)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::core::ImageType

Возвращает:
* stappler::StringView

# ::stappler::xenolith::core::getImageViewTypeName(stappler::xenolith::core::ImageViewType)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::core::ImageViewType

Возвращает:
* stappler::StringView

# ::stappler::xenolith::core::getImageFormatName(stappler::xenolith::core::ImageFormat)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::core::ImageFormat

Возвращает:
* stappler::StringView

# ::stappler::xenolith::core::getImageTilingName(stappler::xenolith::core::ImageTiling)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::core::ImageTiling

Возвращает:
* stappler::StringView

# ::stappler::xenolith::core::getComponentMappingName(stappler::xenolith::core::ComponentMapping)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::core::ComponentMapping

Возвращает:
* stappler::StringView

# ::stappler::xenolith::core::getPresentModeName(stappler::xenolith::core::PresentMode)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::core::PresentMode

Возвращает:
* stappler::StringView

# ::stappler::xenolith::core::getColorSpaceName(stappler::xenolith::core::ColorSpace)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::core::ColorSpace

Возвращает:
* stappler::StringView

# ::stappler::xenolith::core::getCompositeAlphaFlagsDescription(stappler::xenolith::core::CompositeAlphaFlags)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::core::CompositeAlphaFlags

Возвращает:
* stappler::mem_std::String

# ::stappler::xenolith::core::getSurfaceTransformFlagsDescription(stappler::xenolith::core::SurfaceTransformFlags)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::core::SurfaceTransformFlags

Возвращает:
* stappler::mem_std::String

# ::stappler::xenolith::core::getImageUsageDescription(stappler::xenolith::core::ImageUsage)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::core::ImageUsage

Возвращает:
* stappler::mem_std::String

# ::stappler::xenolith::core::getFormatBlockSize(stappler::xenolith::core::ImageFormat)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::core::ImageFormat

Возвращает:
* size_t

# ::stappler::xenolith::core::getImagePixelFormat(stappler::xenolith::core::ImageFormat)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::core::ImageFormat

Возвращает:
* stappler::xenolith::core::PixelFormat

# ::stappler::xenolith::core::isStencilFormat(stappler::xenolith::core::ImageFormat)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::core::ImageFormat

Возвращает:
* bool

# ::stappler::xenolith::core::isDepthFormat(stappler::xenolith::core::ImageFormat)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::core::ImageFormat

Возвращает:
* bool

# ::stappler::xenolith::core::operator<<(std::ostream&,stappler::xenolith::core::ImageInfoData const&)

## BRIEF

## CONTENT

Параметры:
* std::ostream&
* stappler::xenolith::core::ImageInfoData const&

Возвращает:
* std::ostream&