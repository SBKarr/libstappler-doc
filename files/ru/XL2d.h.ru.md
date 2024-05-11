Title: XL2d.h


# XENOLITH_RENDERER_BASIC2D_XL2D_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::basic2d::Vertex

## BRIEF

## CONTENT


# ::stappler::xenolith::basic2d::MaterialData

## BRIEF

## CONTENT


# ::stappler::xenolith::basic2d::TransformData

## BRIEF

## CONTENT


# ::stappler::xenolith::basic2d::ShadowData

## BRIEF

## CONTENT


# ::stappler::xenolith::basic2d::DataAtlasIndex

## BRIEF

## CONTENT


# ::stappler::xenolith::basic2d::DataAtlasValue

## BRIEF

## CONTENT


# ::stappler::xenolith::basic2d::AmbientLightData

## BRIEF

## CONTENT


# ::stappler::xenolith::basic2d::DirectLightData

## BRIEF

## CONTENT


# ::stappler::xenolith::basic2d::Sdf2DObjectData

## BRIEF

## CONTENT


# ::stappler::xenolith::basic2d::Circle2DIndex

## BRIEF

## CONTENT


# ::stappler::xenolith::basic2d::Triangle2DIndex

## BRIEF

## CONTENT


# ::stappler::xenolith::basic2d::Rect2DIndex

## BRIEF

## CONTENT


# ::stappler::xenolith::basic2d::RoundedRect2DIndex

## BRIEF

## CONTENT


# ::stappler::xenolith::basic2d::Polygon2DIndex

## BRIEF

## CONTENT


# ::stappler::xenolith::basic2d::Triangle

## BRIEF

## CONTENT


# ::stappler::xenolith::basic2d::Triangle::a

## BRIEF

## CONTENT

Тип: stappler::xenolith::basic2d::Vertex


# ::stappler::xenolith::basic2d::Triangle::b

## BRIEF

## CONTENT

Тип: stappler::xenolith::basic2d::Vertex


# ::stappler::xenolith::basic2d::Triangle::c

## BRIEF

## CONTENT

Тип: stappler::xenolith::basic2d::Vertex


# ::stappler::xenolith::basic2d::Quad

## BRIEF

## CONTENT


# ::stappler::xenolith::basic2d::Quad::tl

## BRIEF

## CONTENT

Тип: stappler::xenolith::basic2d::Vertex


# ::stappler::xenolith::basic2d::Quad::bl

## BRIEF

## CONTENT

Тип: stappler::xenolith::basic2d::Vertex


# ::stappler::xenolith::basic2d::Quad::tr

## BRIEF

## CONTENT

Тип: stappler::xenolith::basic2d::Vertex


# ::stappler::xenolith::basic2d::Quad::br

## BRIEF

## CONTENT

Тип: stappler::xenolith::basic2d::Vertex


# ::stappler::xenolith::basic2d::VertexSpan

## BRIEF

## CONTENT


# ::stappler::xenolith::basic2d::VertexSpan::material

## BRIEF

## CONTENT

Тип: core::MaterialId


# ::stappler::xenolith::basic2d::VertexSpan::indexCount

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::xenolith::basic2d::VertexSpan::instanceCount

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::xenolith::basic2d::VertexSpan::firstIndex

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::xenolith::basic2d::VertexSpan::state

## BRIEF

## CONTENT

Тип: stappler::xenolith::StateId


# ::stappler::xenolith::basic2d::VertexSpan::gradientOffset

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::xenolith::basic2d::VertexSpan::gradientCount

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::xenolith::basic2d::VertexData

## BRIEF

## CONTENT

Базовые классы:
* Ref


# ::stappler::xenolith::basic2d::VertexData::data

## BRIEF

## CONTENT

Тип: Vector<stappler::xenolith::basic2d::Vertex>


# ::stappler::xenolith::basic2d::VertexData::indexes

## BRIEF

## CONTENT

Тип: Vector<uint32_t>


# ::stappler::xenolith::basic2d::TransformVertexData

## BRIEF

## CONTENT


# ::stappler::xenolith::basic2d::TransformVertexData::transform

## BRIEF

## CONTENT

Тип: stappler::geom::Mat4


# ::stappler::xenolith::basic2d::TransformVertexData::data

## BRIEF

## CONTENT

Тип: Rc<stappler::xenolith::basic2d::VertexData>


# ::stappler::xenolith::basic2d::SdfShape

## BRIEF

## CONTENT

Значения:
* Circle2D
* Rect2D
* RoundedRect2D
* Triangle2D
* Polygon2D


# ::stappler::xenolith::basic2d::SdfPrimitive2D

## BRIEF

## CONTENT


# ::stappler::xenolith::basic2d::SdfPrimitive2D::origin

## BRIEF

## CONTENT

Тип: stappler::geom::Vec2


# ::stappler::xenolith::basic2d::SdfCircle2D

## BRIEF

## CONTENT

Базовые классы:
* SdfPrimitive2D


# ::stappler::xenolith::basic2d::SdfCircle2D::radius

## BRIEF

## CONTENT

Тип: float


# ::stappler::xenolith::basic2d::SdfRect2D

## BRIEF

## CONTENT

Базовые классы:
* SdfPrimitive2D


# ::stappler::xenolith::basic2d::SdfRect2D::size

## BRIEF

## CONTENT

Тип: stappler::geom::Size2


# ::stappler::xenolith::basic2d::SdfRoundedRect2D

## BRIEF

## CONTENT

Базовые классы:
* SdfPrimitive2D


# ::stappler::xenolith::basic2d::SdfRoundedRect2D::size

## BRIEF

## CONTENT

Тип: stappler::geom::Size2


# ::stappler::xenolith::basic2d::SdfRoundedRect2D::radius

## BRIEF

## CONTENT

Тип: stappler::geom::Vec4


# ::stappler::xenolith::basic2d::SdfTriangle2D

## BRIEF

## CONTENT

Базовые классы:
* SdfPrimitive2D


# ::stappler::xenolith::basic2d::SdfTriangle2D::a

## BRIEF

## CONTENT

Тип: stappler::geom::Vec2


# ::stappler::xenolith::basic2d::SdfTriangle2D::b

## BRIEF

## CONTENT

Тип: stappler::geom::Vec2


# ::stappler::xenolith::basic2d::SdfTriangle2D::c

## BRIEF

## CONTENT

Тип: stappler::geom::Vec2


# ::stappler::xenolith::basic2d::SdfPolygon2D

## BRIEF

## CONTENT


# ::stappler::xenolith::basic2d::SdfPolygon2D::points

## BRIEF

## CONTENT

Тип: SpanView<stappler::geom::Vec2>


# ::stappler::xenolith::basic2d::SdfPrimitive2DHeader

## BRIEF

## CONTENT


# ::stappler::xenolith::basic2d::SdfPrimitive2DHeader::type

## BRIEF

## CONTENT

Тип: stappler::xenolith::basic2d::SdfShape


# ::stappler::xenolith::basic2d::SdfPrimitive2DHeader::bytes

## BRIEF

## CONTENT

Тип: stappler::BytesView


# ::stappler::xenolith::basic2d::DeferredVertexResult

## BRIEF

## CONTENT

Базовые классы:
* Ref


# ::stappler::xenolith::basic2d::DeferredVertexResult::~DeferredVertexResult()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::basic2d::DeferredVertexResult::getData()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* SpanView<stappler::xenolith::basic2d::TransformVertexData>

# ::stappler::xenolith::basic2d::DeferredVertexResult::isReady() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::basic2d::DeferredVertexResult::isWaitOnReady() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::basic2d::DeferredVertexResult::handleReady()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::basic2d::DeferredVertexResult::_waitOnReady

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::basic2d::DeferredVertexResult::_isReady

## BRIEF

## CONTENT

Доступ: protected

Тип: std::atomic<bool>


# ::stappler::xenolith::basic2d::ShadowLightInput

## BRIEF

## CONTENT


# ::stappler::xenolith::basic2d::ShadowLightInput::globalColor

## BRIEF

## CONTENT

Тип: stappler::geom::Color4F


# ::stappler::xenolith::basic2d::ShadowLightInput::ambientLightCount

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::xenolith::basic2d::ShadowLightInput::directLightCount

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::xenolith::basic2d::ShadowLightInput::sceneDensity

## BRIEF

## CONTENT

Тип: float


# ::stappler::xenolith::basic2d::ShadowLightInput::shadowDensity

## BRIEF

## CONTENT

Тип: float


# ::stappler::xenolith::basic2d::ShadowLightInput::luminosity

## BRIEF

## CONTENT

Тип: float


# ::stappler::xenolith::basic2d::ShadowLightInput::padding0

## BRIEF

## CONTENT

Тип: float


# ::stappler::xenolith::basic2d::ShadowLightInput::ambientLights

## BRIEF

## CONTENT

Тип: stappler::xenolith::basic2d::AmbientLightData[16]


# ::stappler::xenolith::basic2d::ShadowLightInput::directLights

## BRIEF

## CONTENT

Тип: stappler::xenolith::basic2d::DirectLightData[16]


# ::stappler::xenolith::basic2d::ShadowLightInput::addAmbientLight(const stappler::geom::Vec4&,const stappler::geom::Color4F&,bool)

## BRIEF

## CONTENT

Параметры:
* const stappler::geom::Vec4&
* const stappler::geom::Color4F&
* bool

Возвращает:
* bool

# ::stappler::xenolith::basic2d::ShadowLightInput::addDirectLight(const stappler::geom::Vec4&,const stappler::geom::Color4F&,const stappler::geom::Vec4&)

## BRIEF

## CONTENT

Параметры:
* const stappler::geom::Vec4&
* const stappler::geom::Color4F&
* const stappler::geom::Vec4&

Возвращает:
* bool

# ::stappler::xenolith::basic2d::ShadowLightInput::getShadowExtent(stappler::geom::Size2) const

## BRIEF

## CONTENT

Параметры:
* stappler::geom::Size2

Возвращает:
* stappler::geom::Extent2

# ::stappler::xenolith::basic2d::ShadowLightInput::getShadowSize(stappler::geom::Size2) const

## BRIEF

## CONTENT

Параметры:
* stappler::geom::Size2

Возвращает:
* stappler::geom::Size2