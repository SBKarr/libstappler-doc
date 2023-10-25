Title: XL2dCommandList.h


# XENOLITH_RENDERER_BASIC2D_XL2DCOMMANDLIST_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::basic2d::CommandType

## BRIEF

## CONTENT

Значения:
* CommandGroup
* VertexArray
* Deferred
* ShadowArray
* ShadowDeferred
* SdfGroup2D


# ::stappler::xenolith::basic2d::CmdGeneral

## BRIEF

## CONTENT


# ::stappler::xenolith::basic2d::CmdGeneral::zPath

## BRIEF

## CONTENT

Тип: SpanView<stappler::xenolith::ZOrder>


# ::stappler::xenolith::basic2d::CmdGeneral::material

## BRIEF

## CONTENT

Тип: core::MaterialId


# ::stappler::xenolith::basic2d::CmdGeneral::state

## BRIEF

## CONTENT

Тип: stappler::xenolith::StateId


# ::stappler::xenolith::basic2d::CmdGeneral::renderingLevel

## BRIEF

## CONTENT

Тип: stappler::xenolith::RenderingLevel


# ::stappler::xenolith::basic2d::CmdGeneral::depthValue

## BRIEF

## CONTENT

Тип: float


# ::stappler::xenolith::basic2d::CmdVertexArray

## BRIEF

## CONTENT

Базовые классы:
* CmdGeneral


# ::stappler::xenolith::basic2d::CmdVertexArray::vertexes

## BRIEF

## CONTENT

Тип: SpanView<stappler::xenolith::basic2d::TransformVertexData>


# ::stappler::xenolith::basic2d::CmdDeferred

## BRIEF

## CONTENT

Базовые классы:
* CmdGeneral


# ::stappler::xenolith::basic2d::CmdDeferred::deferred

## BRIEF

## CONTENT

Тип: Rc<stappler::xenolith::basic2d::DeferredVertexResult>


# ::stappler::xenolith::basic2d::CmdDeferred::viewTransform

## BRIEF

## CONTENT

Тип: stappler::xenolith::Mat4


# ::stappler::xenolith::basic2d::CmdDeferred::modelTransform

## BRIEF

## CONTENT

Тип: stappler::xenolith::Mat4


# ::stappler::xenolith::basic2d::CmdDeferred::normalized

## BRIEF

## CONTENT

Тип: bool


# ::stappler::xenolith::basic2d::CmdShadow

## BRIEF

## CONTENT


# ::stappler::xenolith::basic2d::CmdShadow::state

## BRIEF

## CONTENT

Тип: stappler::xenolith::StateId


# ::stappler::xenolith::basic2d::CmdShadow::value

## BRIEF

## CONTENT

Тип: float


# ::stappler::xenolith::basic2d::CmdShadowArray

## BRIEF

## CONTENT

Базовые классы:
* CmdShadow


# ::stappler::xenolith::basic2d::CmdShadowArray::vertexes

## BRIEF

## CONTENT

Тип: SpanView<stappler::xenolith::basic2d::TransformVertexData>


# ::stappler::xenolith::basic2d::CmdShadowDeferred

## BRIEF

## CONTENT

Базовые классы:
* CmdShadow


# ::stappler::xenolith::basic2d::CmdShadowDeferred::deferred

## BRIEF

## CONTENT

Тип: Rc<stappler::xenolith::basic2d::DeferredVertexResult>


# ::stappler::xenolith::basic2d::CmdShadowDeferred::viewTransform

## BRIEF

## CONTENT

Тип: stappler::xenolith::Mat4


# ::stappler::xenolith::basic2d::CmdShadowDeferred::modelTransform

## BRIEF

## CONTENT

Тип: stappler::xenolith::Mat4


# ::stappler::xenolith::basic2d::CmdShadowDeferred::normalized

## BRIEF

## CONTENT

Тип: bool


# ::stappler::xenolith::basic2d::CmdSdfGroup2D

## BRIEF

## CONTENT


# ::stappler::xenolith::basic2d::CmdSdfGroup2D::modelTransform

## BRIEF

## CONTENT

Тип: stappler::xenolith::Mat4


# ::stappler::xenolith::basic2d::CmdSdfGroup2D::state

## BRIEF

## CONTENT

Тип: stappler::xenolith::StateId


# ::stappler::xenolith::basic2d::CmdSdfGroup2D::value

## BRIEF

## CONTENT

Тип: float


# ::stappler::xenolith::basic2d::CmdSdfGroup2D::opacity

## BRIEF

## CONTENT

Тип: float


# ::stappler::xenolith::basic2d::CmdSdfGroup2D::data

## BRIEF

## CONTENT

Тип: memory::vector<SdfPrimitive2DHeader>


# ::stappler::xenolith::basic2d::CmdSdfGroup2D::addCircle2D(stappler::xenolith::Vec2,float)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::Vec2
* float


# ::stappler::xenolith::basic2d::CmdSdfGroup2D::addRect2D(stappler::xenolith::Rect)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::Rect


# ::stappler::xenolith::basic2d::CmdSdfGroup2D::addRoundedRect2D(stappler::xenolith::Rect,float)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::Rect
* float


# ::stappler::xenolith::basic2d::CmdSdfGroup2D::addRoundedRect2D(stappler::xenolith::Rect,stappler::xenolith::Vec4)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::Rect
* stappler::xenolith::Vec4


# ::stappler::xenolith::basic2d::CmdSdfGroup2D::addTriangle2D(stappler::xenolith::Vec2,stappler::xenolith::Vec2,stappler::xenolith::Vec2,stappler::xenolith::Vec2)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::Vec2
* stappler::xenolith::Vec2
* stappler::xenolith::Vec2
* stappler::xenolith::Vec2


# ::stappler::xenolith::basic2d::CmdSdfGroup2D::addPolygon2D(SpanView<stappler::xenolith::Vec2>)

## BRIEF

## CONTENT

Параметры:
* SpanView<stappler::xenolith::Vec2>


# ::stappler::xenolith::basic2d::Command

## BRIEF

## CONTENT


# ::stappler::xenolith::basic2d::Command::create(memory::pool_t*,stappler::xenolith::basic2d::CommandType,stappler::xenolith::CommandFlags)

## BRIEF

## CONTENT

Параметры:
* memory::pool_t*
* stappler::xenolith::basic2d::CommandType
* stappler::xenolith::CommandFlags

Возвращает:
* stappler::xenolith::basic2d::Command*

# ::stappler::xenolith::basic2d::Command::release()

## BRIEF

## CONTENT


# ::stappler::xenolith::basic2d::Command::next

## BRIEF

## CONTENT

Тип: stappler::xenolith::basic2d::Command*


# ::stappler::xenolith::basic2d::Command::type

## BRIEF

## CONTENT

Тип: stappler::xenolith::basic2d::CommandType


# ::stappler::xenolith::basic2d::Command::flags

## BRIEF

## CONTENT

Тип: stappler::xenolith::CommandFlags


# ::stappler::xenolith::basic2d::Command::data

## BRIEF

## CONTENT

Тип: void*


# ::stappler::xenolith::basic2d::CommandList

## BRIEF

## CONTENT

Базовые классы:
* Ref


# ::stappler::xenolith::basic2d::CommandList::~CommandList()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::basic2d::CommandList::init(Rc<stappler::xenolith::PoolRef> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Rc<stappler::xenolith::PoolRef> const&

Возвращает:
* bool

# ::stappler::xenolith::basic2d::CommandList::pushVertexArray(Rc<stappler::xenolith::basic2d::VertexData>&&,stappler::xenolith::Mat4 const&,SpanView<stappler::xenolith::ZOrder>,core::MaterialId,stappler::xenolith::StateId,stappler::xenolith::RenderingLevel,float,stappler::xenolith::CommandFlags)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Rc<stappler::xenolith::basic2d::VertexData>&&
* stappler::xenolith::Mat4 const&
* SpanView<stappler::xenolith::ZOrder>
* core::MaterialId
* stappler::xenolith::StateId
* stappler::xenolith::RenderingLevel
* float
* stappler::xenolith::CommandFlags


# ::stappler::xenolith::basic2d::CommandList::pushVertexArray(SpanView<stappler::xenolith::basic2d::TransformVertexData>,SpanView<stappler::xenolith::ZOrder>,core::MaterialId,stappler::xenolith::StateId,stappler::xenolith::RenderingLevel,float,stappler::xenolith::CommandFlags)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* SpanView<stappler::xenolith::basic2d::TransformVertexData>
* SpanView<stappler::xenolith::ZOrder>
* core::MaterialId
* stappler::xenolith::StateId
* stappler::xenolith::RenderingLevel
* float
* stappler::xenolith::CommandFlags


# ::stappler::xenolith::basic2d::CommandList::pushDeferredVertexResult(Rc<stappler::xenolith::basic2d::DeferredVertexResult> const&,stappler::xenolith::Mat4 const&,stappler::xenolith::Mat4 const&,bool,SpanView<stappler::xenolith::ZOrder>,core::MaterialId,stappler::xenolith::StateId,stappler::xenolith::RenderingLevel,float,stappler::xenolith::CommandFlags)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Rc<stappler::xenolith::basic2d::DeferredVertexResult> const&
* stappler::xenolith::Mat4 const&
* stappler::xenolith::Mat4 const&
* bool
* SpanView<stappler::xenolith::ZOrder>
* core::MaterialId
* stappler::xenolith::StateId
* stappler::xenolith::RenderingLevel
* float
* stappler::xenolith::CommandFlags


# ::stappler::xenolith::basic2d::CommandList::pushShadowArray(Rc<stappler::xenolith::basic2d::VertexData>&&,stappler::xenolith::Mat4 const&,stappler::xenolith::StateId,float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Rc<stappler::xenolith::basic2d::VertexData>&&
* stappler::xenolith::Mat4 const&
* stappler::xenolith::StateId
* float


# ::stappler::xenolith::basic2d::CommandList::pushShadowArray(SpanView<stappler::xenolith::basic2d::TransformVertexData>,stappler::xenolith::StateId,float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* SpanView<stappler::xenolith::basic2d::TransformVertexData>
* stappler::xenolith::StateId
* float


# ::stappler::xenolith::basic2d::CommandList::pushDeferredShadow(Rc<stappler::xenolith::basic2d::DeferredVertexResult> const&,stappler::xenolith::Mat4 const&,stappler::xenolith::Mat4 const&,stappler::xenolith::StateId,bool,float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Rc<stappler::xenolith::basic2d::DeferredVertexResult> const&
* stappler::xenolith::Mat4 const&
* stappler::xenolith::Mat4 const&
* stappler::xenolith::StateId
* bool
* float


# ::stappler::xenolith::basic2d::CommandList::pushSdfGroup(stappler::xenolith::Mat4 const&,stappler::xenolith::StateId,float,Callback<void (stappler::xenolith::basic2d::CmdSdfGroup2D &)> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Mat4 const&
* stappler::xenolith::StateId
* float
* Callback<void (stappler::xenolith::basic2d::CmdSdfGroup2D &)> const&


# ::stappler::xenolith::basic2d::CommandList::getFirst() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::basic2d::Command const*

# ::stappler::xenolith::basic2d::CommandList::getLast() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::basic2d::Command const*

# ::stappler::xenolith::basic2d::CommandList::empty() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::basic2d::CommandList::addCommand(stappler::xenolith::basic2d::Command*)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::basic2d::Command*


# ::stappler::xenolith::basic2d::CommandList::_pool

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::xenolith::PoolRef>


# ::stappler::xenolith::basic2d::CommandList::_first

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::basic2d::Command*


# ::stappler::xenolith::basic2d::CommandList::_last

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::basic2d::Command*


# ::stappler::xenolith::basic2d::FrameContextHandle2d

## BRIEF

## CONTENT

Базовые классы:
* FrameContextHandle


# ::stappler::xenolith::basic2d::FrameContextHandle2d::lights

## BRIEF

## CONTENT

Тип: stappler::xenolith::basic2d::ShadowLightInput


# ::stappler::xenolith::basic2d::FrameContextHandle2d::commands

## BRIEF

## CONTENT

Тип: Rc<stappler::xenolith::basic2d::CommandList>


# ::stappler::xenolith::basic2d::FrameContextHandle2d::shadows

## BRIEF

## CONTENT

Тип: Rc<stappler::xenolith::basic2d::CommandList>
