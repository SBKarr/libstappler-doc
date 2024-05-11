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


# ::stappler::xenolith::basic2d::VertexArray::Quad::setTextureRect(const stappler::geom::Rect&,float,float,bool,bool,bool)

## BRIEF

## CONTENT

Параметры:
* const stappler::geom::Rect&
* float
* float
* bool
* bool
* bool

Возвращает:
* stappler::xenolith::basic2d::VertexArray::Quad&

# ::stappler::xenolith::basic2d::VertexArray::Quad::setTexturePoints(const stappler::geom::Vec2&,const stappler::geom::Vec2&,const stappler::geom::Vec2&,const stappler::geom::Vec2&,float,float)

## BRIEF

## CONTENT

Параметры:
* const stappler::geom::Vec2&
* const stappler::geom::Vec2&
* const stappler::geom::Vec2&
* const stappler::geom::Vec2&
* float
* float

Возвращает:
* stappler::xenolith::basic2d::VertexArray::Quad&

# ::stappler::xenolith::basic2d::VertexArray::Quad::setGeometry(const stappler::geom::Vec4&,const stappler::geom::Size2&,const stappler::geom::Mat4&)

## BRIEF

## CONTENT

Параметры:
* const stappler::geom::Vec4&
* const stappler::geom::Size2&
* const stappler::geom::Mat4&

Возвращает:
* stappler::xenolith::basic2d::VertexArray::Quad&

# ::stappler::xenolith::basic2d::VertexArray::Quad::setGeometry(const stappler::geom::Vec4&,const stappler::geom::Size2&)

## BRIEF

## CONTENT

Параметры:
* const stappler::geom::Vec4&
* const stappler::geom::Size2&

Возвращает:
* stappler::xenolith::basic2d::VertexArray::Quad&

# ::stappler::xenolith::basic2d::VertexArray::Quad::setColor(const stappler::geom::Color4F&)

## BRIEF

## CONTENT

Параметры:
* const stappler::geom::Color4F&

Возвращает:
* stappler::xenolith::basic2d::VertexArray::Quad&

# ::stappler::xenolith::basic2d::VertexArray::Quad::setColor(SpanView<stappler::geom::Color4F>)

## BRIEF

## CONTENT

Параметры:
* SpanView<stappler::geom::Color4F>

Возвращает:
* stappler::xenolith::basic2d::VertexArray::Quad&

# ::stappler::xenolith::basic2d::VertexArray::Quad::setColor(std::initializer_list<Color4F>&&)

## BRIEF

## CONTENT

Параметры:
* std::initializer_list<Color4F>&&

Возвращает:
* stappler::xenolith::basic2d::VertexArray::Quad&

# ::stappler::xenolith::basic2d::VertexArray::Quad::drawChar(font::Metrics const&,char16_t,int16_t,int16_t,const stappler::geom::Color4B&,font::TextDecoration,uint16_t)

## BRIEF

## CONTENT

Параметры:
* font::Metrics const&
* char16_t
* int16_t
* int16_t
* const stappler::geom::Color4B&
* font::TextDecoration
* uint16_t

Возвращает:
* stappler::xenolith::basic2d::VertexArray::Quad&

# ::stappler::xenolith::basic2d::VertexArray::Quad::drawUnderlineRect(int16_t,int16_t,uint16_t,uint16_t,const stappler::geom::Color4B&)

## BRIEF

## CONTENT

Параметры:
* int16_t
* int16_t
* uint16_t
* uint16_t
* const stappler::geom::Color4B&

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

# ::stappler::xenolith::basic2d::VertexArray::updateColor(const stappler::geom::Color4F&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* const stappler::geom::Color4F&


# ::stappler::xenolith::basic2d::VertexArray::updateColor(const stappler::geom::Color4F&,Vector<stappler::geom::ColorMask> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* const stappler::geom::Color4F&
* Vector<stappler::geom::ColorMask> const&


# ::stappler::xenolith::basic2d::VertexArray::updateColorQuads(const stappler::geom::Color4F&,Vector<stappler::geom::ColorMask> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* const stappler::geom::Color4F&
* Vector<stappler::geom::ColorMask> const&


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
