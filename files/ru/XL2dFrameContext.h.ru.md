Title: XL2dFrameContext.h


# XENOLITH_RENDERER_BASIC2D_XL2DFRAMECONTEXT_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::basic2d::FrameContext2d

## BRIEF

## CONTENT

Базовые классы:
* FrameContext


# ::stappler::xenolith::basic2d::FrameContext2d::MaterialAttachmentName

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::StringView const


# ::stappler::xenolith::basic2d::FrameContext2d::VertexAttachmentName

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::StringView const


# ::stappler::xenolith::basic2d::FrameContext2d::LightDataAttachmentName

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::StringView const


# ::stappler::xenolith::basic2d::FrameContext2d::ShadowVertexAttachmentName

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::StringView const


# ::stappler::xenolith::basic2d::FrameContext2d::SdfImageAttachmentName

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::StringView const


# ::stappler::xenolith::basic2d::FrameContext2d::~FrameContext2d()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::basic2d::FrameContext2d::onEnter(xenolith::Scene*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* xenolith::Scene*


# ::stappler::xenolith::basic2d::FrameContext2d::onExit()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::basic2d::FrameContext2d::makeHandle(stappler::xenolith::FrameInfo&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::FrameInfo&

Возвращает:
* Rc<stappler::xenolith::FrameContextHandle>

# ::stappler::xenolith::basic2d::FrameContext2d::submitHandle(stappler::xenolith::FrameInfo&,stappler::xenolith::FrameContextHandle*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::FrameInfo&
* stappler::xenolith::FrameContextHandle*


# ::stappler::xenolith::basic2d::FrameContext2d::initWithQueue(core::Queue*)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* core::Queue*

Возвращает:
* bool

# ::stappler::xenolith::basic2d::FrameContext2d::_materialAttachmentData

## BRIEF

## CONTENT

Доступ: protected

Тип: core::AttachmentData const*


# ::stappler::xenolith::basic2d::FrameContext2d::_vertexAttachmentData

## BRIEF

## CONTENT

Доступ: protected

Тип: core::AttachmentData const*


# ::stappler::xenolith::basic2d::FrameContext2d::_lightAttachmentData

## BRIEF

## CONTENT

Доступ: protected

Тип: core::AttachmentData const*


# ::stappler::xenolith::basic2d::FrameContext2d::_shadowVertexAttachmentData

## BRIEF

## CONTENT

Доступ: protected

Тип: core::AttachmentData const*


# ::stappler::xenolith::basic2d::FrameContext2d::_sdfImageAttachmentData

## BRIEF

## CONTENT

Доступ: protected

Тип: core::AttachmentData const*


# ::stappler::xenolith::basic2d::FrameContext2d::_init

## BRIEF

## CONTENT

Доступ: protected

Тип: bool
