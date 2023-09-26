Title: XLVkPipeline.h


# XENOLITH_BACKEND_VK_XLVKPIPELINE_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::vk::Shader

## BRIEF

## CONTENT

Базовые классы:
* core::Shader


# ::stappler::xenolith::vk::Shader::~Shader()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::vk::Shader::init(stappler::xenolith::vk::Device&,stappler::xenolith::core::Shader::ProgramData const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::vk::Device&
* stappler::xenolith::core::Shader::ProgramData const&

Возвращает:
* bool

# ::stappler::xenolith::vk::Shader::getModule() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* VkShaderModule

# ::stappler::xenolith::vk::Shader::setup(stappler::xenolith::vk::Device&,stappler::xenolith::core::Shader::ProgramData const&,SpanView<uint32_t>)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::vk::Device&
* stappler::xenolith::core::Shader::ProgramData const&
* SpanView<uint32_t>

Возвращает:
* bool

# ::stappler::xenolith::vk::Shader::_shaderModule

## BRIEF

## CONTENT

Доступ: protected

Тип: VkShaderModule


# ::stappler::xenolith::vk::GraphicPipeline

## BRIEF

## CONTENT

Базовые классы:
* core::GraphicPipeline


# ::stappler::xenolith::vk::GraphicPipeline::comparePipelineOrdering(stappler::xenolith::core::GraphicPipeline::PipelineInfo const&,stappler::xenolith::core::GraphicPipeline::PipelineInfo const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::GraphicPipeline::PipelineInfo const&
* stappler::xenolith::core::GraphicPipeline::PipelineInfo const&

Возвращает:
* bool

# ::stappler::xenolith::vk::GraphicPipeline::~GraphicPipeline()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::vk::GraphicPipeline::init(stappler::xenolith::vk::Device&,stappler::xenolith::core::GraphicPipeline::PipelineData const&,stappler::xenolith::core::GraphicPipeline::SubpassData const&,stappler::xenolith::core::GraphicPipeline::RenderQueue const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::vk::Device&
* stappler::xenolith::core::GraphicPipeline::PipelineData const&
* stappler::xenolith::core::GraphicPipeline::SubpassData const&
* stappler::xenolith::core::GraphicPipeline::RenderQueue const&

Возвращает:
* bool

# ::stappler::xenolith::vk::GraphicPipeline::getPipeline() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* VkPipeline

# ::stappler::xenolith::vk::GraphicPipeline::_pipeline

## BRIEF

## CONTENT

Доступ: protected

Тип: VkPipeline


# ::stappler::xenolith::vk::ComputePipeline

## BRIEF

## CONTENT

Базовые классы:
* core::ComputePipeline


# ::stappler::xenolith::vk::ComputePipeline::~ComputePipeline()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::vk::ComputePipeline::init(stappler::xenolith::vk::Device&,stappler::xenolith::core::ComputePipeline::PipelineData const&,stappler::xenolith::core::ComputePipeline::SubpassData const&,stappler::xenolith::core::ComputePipeline::RenderQueue const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::vk::Device&
* stappler::xenolith::core::ComputePipeline::PipelineData const&
* stappler::xenolith::core::ComputePipeline::SubpassData const&
* stappler::xenolith::core::ComputePipeline::RenderQueue const&

Возвращает:
* bool

# ::stappler::xenolith::vk::ComputePipeline::getPipeline() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* VkPipeline

# ::stappler::xenolith::vk::ComputePipeline::getLocalX() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint32_t

# ::stappler::xenolith::vk::ComputePipeline::getLocalY() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint32_t

# ::stappler::xenolith::vk::ComputePipeline::getLocalZ() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint32_t

# ::stappler::xenolith::vk::ComputePipeline::_localX

## BRIEF

## CONTENT

Доступ: protected

Тип: uint32_t


# ::stappler::xenolith::vk::ComputePipeline::_localY

## BRIEF

## CONTENT

Доступ: protected

Тип: uint32_t


# ::stappler::xenolith::vk::ComputePipeline::_localZ

## BRIEF

## CONTENT

Доступ: protected

Тип: uint32_t


# ::stappler::xenolith::vk::ComputePipeline::_pipeline

## BRIEF

## CONTENT

Доступ: protected

Тип: VkPipeline
