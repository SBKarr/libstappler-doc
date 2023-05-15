Title: SPTess.h


# MODULES_TESS_SPTESS_H_

## BRIEF

## CONTENT


# ::stappler::geom::VerboseFlag

## BRIEF

## CONTENT

Значения:
* None
* General
* Full


# ::stappler::geom::Winding

## BRIEF

## CONTENT

Значения:
* EvenOdd
* NonZero
* Positive
* Negative
* AbsGeqTwo


# ::stappler::geom::TessResult

## BRIEF

## CONTENT


# ::stappler::geom::TessResult::nvertexes

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::geom::TessResult::nfaces

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::geom::TessResult::target

## BRIEF

## CONTENT

Тип: void*


# ::stappler::geom::TessResult::pushVertex

## BRIEF

## CONTENT

Тип: void(*)(void*,uint32_t,stappler::geom::Vec2 const&,float)


# ::stappler::geom::TessResult::pushTriangle

## BRIEF

## CONTENT

Тип: void(*)(void*,uint32_t[3])


# ::stappler::geom::Tesselator

## BRIEF

## CONTENT

Базовые классы:
* RefBase<memory::StandartInterface>


# ::stappler::geom::Tesselator::Cursor

## BRIEF

## CONTENT

Доступ: public


# ::stappler::geom::Tesselator::Cursor::edge

## BRIEF

## CONTENT

Тип: stappler::geom::HalfEdge*


# ::stappler::geom::Tesselator::Cursor::root

## BRIEF

## CONTENT

Тип: stappler::geom::HalfEdge*


# ::stappler::geom::Tesselator::Cursor::count

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::geom::Tesselator::Cursor::isClockwise

## BRIEF

## CONTENT

Тип: bool


# ::stappler::geom::Tesselator::Cursor::closed

## BRIEF

## CONTENT

Тип: bool


# ::stappler::geom::Tesselator::Cursor::origin

## BRIEF

## CONTENT

Тип: stappler::geom::Vec2


# ::stappler::geom::Tesselator::~Tesselator()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::geom::Tesselator::init(memory::pool_t*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* memory::pool_t*

Возвращает:
* bool

# ::stappler::geom::Tesselator::setAntialiasValue(float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float


# ::stappler::geom::Tesselator::getAntialiasValue() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* float

# ::stappler::geom::Tesselator::RelocateRule

## BRIEF

## CONTENT

Доступ: public

Значения:
* Never
* Auto
* Always
* Monotonize


# ::stappler::geom::Tesselator::setRelocateRule(stappler::geom::Tesselator::RelocateRule)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::geom::Tesselator::RelocateRule


# ::stappler::geom::Tesselator::getRelocateRule() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::geom::Tesselator::RelocateRule

# ::stappler::geom::Tesselator::setWindingRule(stappler::geom::Winding)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::geom::Winding


# ::stappler::geom::Tesselator::getWindingRule() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::geom::Winding

# ::stappler::geom::Tesselator::preallocate(uint32_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint32_t


# ::stappler::geom::Tesselator::beginContour(bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* bool

Возвращает:
* stappler::geom::Tesselator::Cursor

# ::stappler::geom::Tesselator::pushVertex(stappler::geom::Tesselator::Cursor&,stappler::geom::Vec2 const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::geom::Tesselator::Cursor&
* stappler::geom::Vec2 const&

Возвращает:
* bool

# ::stappler::geom::Tesselator::pushStrokeVertex(stappler::geom::Tesselator::Cursor&,stappler::geom::Vec2 const&,stappler::geom::Vec2 const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::geom::Tesselator::Cursor&
* stappler::geom::Vec2 const&
* stappler::geom::Vec2 const&

Возвращает:
* bool

# ::stappler::geom::Tesselator::pushStrokeTop(stappler::geom::Tesselator::Cursor&,stappler::geom::Vec2 const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::geom::Tesselator::Cursor&
* stappler::geom::Vec2 const&

Возвращает:
* bool

# ::stappler::geom::Tesselator::pushStrokeBottom(stappler::geom::Tesselator::Cursor&,stappler::geom::Vec2 const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::geom::Tesselator::Cursor&
* stappler::geom::Vec2 const&

Возвращает:
* bool

# ::stappler::geom::Tesselator::closeContour(stappler::geom::Tesselator::Cursor&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::geom::Tesselator::Cursor&

Возвращает:
* bool

# ::stappler::geom::Tesselator::closeStrokeContour(stappler::geom::Tesselator::Cursor&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::geom::Tesselator::Cursor&

Возвращает:
* bool

# ::stappler::geom::Tesselator::prepare(stappler::geom::TessResult&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::geom::TessResult&

Возвращает:
* bool

# ::stappler::geom::Tesselator::write(stappler::geom::TessResult&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::geom::TessResult&

Возвращает:
* bool

# ::stappler::geom::Tesselator::_data

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::geom::Tesselator::Data*
