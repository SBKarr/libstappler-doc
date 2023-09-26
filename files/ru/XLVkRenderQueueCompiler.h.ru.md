Title: XLVkRenderQueueCompiler.h


# XENOLITH_BACKEND_VK_XLVKRENDERQUEUECOMPILER_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::vk::RenderQueueInput

## BRIEF

## CONTENT

Базовые классы:
* core::AttachmentInputData


# ::stappler::xenolith::vk::RenderQueueInput::queue

## BRIEF

## CONTENT

Тип: Rc<core::Queue>


# ::stappler::xenolith::vk::RenderQueueCompiler

## BRIEF

## CONTENT

Базовые классы:
* core::Queue


# ::stappler::xenolith::vk::RenderQueueCompiler::~RenderQueueCompiler()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::vk::RenderQueueCompiler::init(stappler::xenolith::vk::Device&,stappler::xenolith::vk::TransferQueue*,stappler::xenolith::vk::MaterialCompiler*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::vk::Device&
* stappler::xenolith::vk::TransferQueue*
* stappler::xenolith::vk::MaterialCompiler*

Возвращает:
* bool

# ::stappler::xenolith::vk::RenderQueueCompiler::makeRequest(Rc<stappler::xenolith::vk::RenderQueueInput>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Rc<stappler::xenolith::vk::RenderQueueInput>&&

Возвращает:
* Rc<stappler::xenolith::core::Queue::FrameRequest>

# ::stappler::xenolith::vk::RenderQueueCompiler::getTransferQueue() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::vk::TransferQueue*

# ::stappler::xenolith::vk::RenderQueueCompiler::getMaterialCompiler() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::vk::MaterialCompiler*

# ::stappler::xenolith::vk::RenderQueueCompiler::_transfer

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::vk::TransferQueue*


# ::stappler::xenolith::vk::RenderQueueCompiler::_materialCompiler

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::vk::MaterialCompiler*


# ::stappler::xenolith::vk::RenderQueueCompiler::_attachment

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::core::Queue::AttachmentData const*
