Title: XL2dVertexArray.h


# XENOLITH_RENDERER_BASIC2D_XL2DVERTEXARRAY_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::basic2d::VertexArray

## BRIEF

## CONTENT

Базовые классы:
* Ref


# ::stappler::xenolith::basic2d::VertexArray::Quad

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::basic2d::VertexArray::Quad::vertexes

## BRIEF

## CONTENT

Тип: SpanView<stappler::xenolith::basic2d::Vertex>


# ::stappler::xenolith::basic2d::VertexArray::Quad::indexes

## BRIEF

## CONTENT

Тип: SpanView<uint32_t>


# ::stappler::xenolith::basic2d::VertexArray::Quad::firstVertex

## BRIEF

## CONTENT

Тип: size_t


# ::stappler::xenolith::basic2d::VertexArray::Quad::firstIndex

## BRIEF

## CONTENT

Тип: size_t


# ::stappler::xenolith::basic2d::VertexArray::Quad::setTextureRect(stappler::xenolith::Rect const&,float,float,bool,bool,bool)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::Rect const&
* float
* float
* bool
* bool
* bool

Возвращает:
* stappler::xenolith::basic2d::VertexArray::Quad&

# ::stappler::xenolith::basic2d::VertexArray::Quad::setTexturePoints(stappler::xenolith::Vec2 const&,stappler::xenolith::Vec2 const&,stappler::xenolith::Vec2 const&,stappler::xenolith::Vec2 const&,float,float)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::Vec2 const&
* stappler::xenolith::Vec2 const&
* stappler::xenolith::Vec2 const&
* stappler::xenolith::Vec2 const&
* float
* float

Возвращает:
* stappler::xenolith::basic2d::VertexArray::Quad&

# ::stappler::xenolith::basic2d::VertexArray::Quad::setGeometry(stappler::xenolith::Vec4 const&,stappler::xenolith::Size2 const&,stappler::xenolith::Mat4 const&)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::Vec4 const&
* stappler::xenolith::Size2 const&
* stappler::xenolith::Mat4 const&

Возвращает:
* stappler::xenolith::basic2d::VertexArray::Quad&

# ::stappler::xenolith::basic2d::VertexArray::Quad::setGeometry(stappler::xenolith::Vec4 const&,stappler::xenolith::Size2 const&)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::Vec4 const&
* stappler::xenolith::Size2 const&

Возвращает:
* stappler::xenolith::basic2d::VertexArray::Quad&

# ::stappler::xenolith::basic2d::VertexArray::Quad::setColor(stappler::xenolith::Color4F const&)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::Color4F const&

Возвращает:
* stappler::xenolith::basic2d::VertexArray::Quad&

# ::stappler::xenolith::basic2d::VertexArray::Quad::setColor(SpanView<stappler::xenolith::Color4F>)

## BRIEF

## CONTENT

Параметры:
* SpanView<stappler::xenolith::Color4F>

Возвращает:
* stappler::xenolith::basic2d::VertexArray::Quad&

# ::stappler::xenolith::basic2d::VertexArray::Quad::setColor(std::initializer_list<Color4F>&&)

## BRIEF

## CONTENT

Параметры:
* std::initializer_list<Color4F>&&

Возвращает:
* stappler::xenolith::basic2d::VertexArray::Quad&

# ::stappler::xenolith::basic2d::VertexArray::Quad::drawChar(font::Metrics const&,font::CharLayout const&,int16_t,int16_t,stappler::xenolith::Color4B const&,font::TextDecoration,uint16_t)

## BRIEF

## CONTENT

Параметры:
* font::Metrics const&
* font::CharLayout const&
* int16_t
* int16_t
* stappler::xenolith::Color4B const&
* font::TextDecoration
* uint16_t

Возвращает:
* stappler::xenolith::basic2d::VertexArray::Quad&

# ::stappler::xenolith::basic2d::VertexArray::Quad::drawUnderlineRect(int16_t,int16_t,uint16_t,uint16_t,stappler::xenolith::Color4B const&)

## BRIEF

## CONTENT

Параметры:
* int16_t
* int16_t
* uint16_t
* uint16_t
* stappler::xenolith::Color4B const&

Возвращает:
* stappler::xenolith::basic2d::VertexArray::Quad&

# ::stappler::xenolith::basic2d::VertexArray::~VertexArray()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::basic2d::VertexArray::init(uint32_t,uint32_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint32_t
* uint32_t

Возвращает:
* bool

# ::stappler::xenolith::basic2d::VertexArray::init(Rc<stappler::xenolith::basic2d::VertexData> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Rc<stappler::xenolith::basic2d::VertexData> const&

Возвращает:
* bool

# ::stappler::xenolith::basic2d::VertexArray::reserve(uint32_t,uint32_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint32_t
* uint32_t


# ::stappler::xenolith::basic2d::VertexArray::pop()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Rc<stappler::xenolith::basic2d::VertexData>

# ::stappler::xenolith::basic2d::VertexArray::dup()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Rc<stappler::xenolith::basic2d::VertexData>

# ::stappler::xenolith::basic2d::VertexArray::empty() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::basic2d::VertexArray::clear()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::basic2d::VertexArray::addQuad()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::basic2d::VertexArray::Quad

# ::stappler::xenolith::basic2d::VertexArray::getQuad(size_t,size_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* size_t
* size_t

Возвращает:
* stappler::xenolith::basic2d::VertexArray::Quad

# ::stappler::xenolith::basic2d::VertexArray::updateColor(stappler::xenolith::Color4F const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Color4F const&


# ::stappler::xenolith::basic2d::VertexArray::updateColor(stappler::xenolith::Color4F const&,Vector<stappler::xenolith::ColorMask> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Color4F const&
* Vector<stappler::xenolith::ColorMask> const&


# ::stappler::xenolith::basic2d::VertexArray::updateColorQuads(stappler::xenolith::Color4F const&,Vector<stappler::xenolith::ColorMask> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Color4F const&
* Vector<stappler::xenolith::ColorMask> const&


# ::stappler::xenolith::basic2d::VertexArray::getVertexCount() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* size_t

# ::stappler::xenolith::basic2d::VertexArray::getIndexCount() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* size_t

# ::stappler::xenolith::basic2d::VertexArray::copy()

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::basic2d::VertexArray::_copyOnWrite

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::basic2d::VertexArray::_data

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::xenolith::basic2d::VertexData>
