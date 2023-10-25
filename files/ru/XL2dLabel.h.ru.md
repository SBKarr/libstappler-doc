Title: XL2dLabel.h


# XENOLITH_RENDERER_BASIC2D_XL2DLABEL_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::basic2d::LabelResult

## BRIEF

## CONTENT

Базовые классы:
* Ref


# ::stappler::xenolith::basic2d::LabelResult::data

## BRIEF

## CONTENT

Тип: stappler::xenolith::basic2d::TransformVertexData


# ::stappler::xenolith::basic2d::LabelResult::colorMap

## BRIEF

## CONTENT

Тип: Vector<stappler::xenolith::ColorMask>


# ::stappler::xenolith::basic2d::LabelDeferredResult

## BRIEF

## CONTENT

Базовые классы:
* DeferredVertexResult


# ::stappler::xenolith::basic2d::LabelDeferredResult::~LabelDeferredResult()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::basic2d::LabelDeferredResult::init(std::future<Rc<LabelResult>>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* std::future<Rc<LabelResult>>&&

Возвращает:
* bool

# ::stappler::xenolith::basic2d::LabelDeferredResult::getData()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* SpanView<stappler::xenolith::basic2d::TransformVertexData>

# ::stappler::xenolith::basic2d::LabelDeferredResult::handleReady(Rc<stappler::xenolith::basic2d::LabelResult>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Rc<stappler::xenolith::basic2d::LabelResult>&&


# ::stappler::xenolith::basic2d::LabelDeferredResult::updateColor(stappler::xenolith::Color4F const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Color4F const&


# ::stappler::xenolith::basic2d::LabelDeferredResult::getResult() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Rc<stappler::xenolith::basic2d::VertexData>

# ::stappler::xenolith::basic2d::LabelDeferredResult::_mutex

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::mem_std::Mutex


# ::stappler::xenolith::basic2d::LabelDeferredResult::_result

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::xenolith::basic2d::LabelResult>


# ::stappler::xenolith::basic2d::LabelDeferredResult::_future

## BRIEF

## CONTENT

Доступ: protected

Тип: std::future<Rc<LabelResult>>*


# ::stappler::xenolith::basic2d::Label

## BRIEF

## CONTENT

Базовые классы:
* Sprite
* font::LabelBase


# ::stappler::xenolith::basic2d::Label::FormatSpec

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::basic2d::Label::LineSpec

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::basic2d::Label::TextAlign

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::basic2d::Label::ColorMapVec

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::basic2d::Label::writeQuads(stappler::xenolith::basic2d::VertexArray&,stappler::xenolith::basic2d::Label::FormatSpec*,Vector<stappler::xenolith::ColorMask>&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::basic2d::VertexArray&
* stappler::xenolith::basic2d::Label::FormatSpec*
* Vector<stappler::xenolith::ColorMask>&


# ::stappler::xenolith::basic2d::Label::writeResult(stappler::xenolith::basic2d::Label::FormatSpec*,stappler::xenolith::Color4F const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::basic2d::Label::FormatSpec*
* stappler::xenolith::Color4F const&

Возвращает:
* Rc<stappler::xenolith::basic2d::LabelResult>

# ::stappler::xenolith::basic2d::Label::~Label()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::basic2d::Label::init()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::basic2d::Label::init(stappler::StringView)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView

Возвращает:
* bool

# ::stappler::xenolith::basic2d::Label::init(stappler::StringView,float,stappler::xenolith::basic2d::Label::TextAlign)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView
* float
* stappler::xenolith::basic2d::Label::TextAlign

Возвращает:
* bool

# ::stappler::xenolith::basic2d::Label::init(font::FontController*,stappler::xenolith::font::LabelBase::DescriptionStyle const&,stappler::StringView,float,stappler::xenolith::basic2d::Label::TextAlign)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* font::FontController*
* stappler::xenolith::font::LabelBase::DescriptionStyle const&
* stappler::StringView
* float
* stappler::xenolith::basic2d::Label::TextAlign

Возвращает:
* bool

# ::stappler::xenolith::basic2d::Label::init(stappler::xenolith::font::LabelBase::DescriptionStyle const&,stappler::StringView,float,stappler::xenolith::basic2d::Label::TextAlign)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::font::LabelBase::DescriptionStyle const&
* stappler::StringView
* float
* stappler::xenolith::basic2d::Label::TextAlign

Возвращает:
* bool

# ::stappler::xenolith::basic2d::Label::tryUpdateLabel()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::basic2d::Label::setStyle(stappler::xenolith::font::LabelBase::DescriptionStyle const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::font::LabelBase::DescriptionStyle const&


# ::stappler::xenolith::basic2d::Label::getStyle() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::font::LabelBase::DescriptionStyle const&

# ::stappler::xenolith::basic2d::Label::onTransformDirty(stappler::xenolith::Mat4 const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Mat4 const&


# ::stappler::xenolith::basic2d::Label::onGlobalTransformDirty(stappler::xenolith::Mat4 const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Mat4 const&


# ::stappler::xenolith::basic2d::Label::setAdjustValue(uint8_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint8_t


# ::stappler::xenolith::basic2d::Label::getAdjustValue() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint8_t

# ::stappler::xenolith::basic2d::Label::isOverflow() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::basic2d::Label::getCharsCount() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* size_t

# ::stappler::xenolith::basic2d::Label::getLinesCount() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* size_t

# ::stappler::xenolith::basic2d::Label::getLine(uint32_t) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint32_t

Возвращает:
* LineSpec

# ::stappler::xenolith::basic2d::Label::getFontHeight() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint16_t

# ::stappler::xenolith::basic2d::Label::getCursorPosition(uint32_t,bool) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint32_t
* bool

Возвращает:
* stappler::xenolith::Vec2

# ::stappler::xenolith::basic2d::Label::getCursorOrigin() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::Vec2

# ::stappler::xenolith::basic2d::Label::getCharIndex(stappler::xenolith::Vec2 const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Vec2 const&

Возвращает:
* Pair<uint32_t, bool>

# ::stappler::xenolith::basic2d::Label::getMaxLineX() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* float

# ::stappler::xenolith::basic2d::Label::setDeferred(bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* bool


# ::stappler::xenolith::basic2d::Label::isDeferred() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::basic2d::Label::runDeferred(thread::TaskQueue&,stappler::xenolith::basic2d::Label::FormatSpec*,stappler::xenolith::Color4F const&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* thread::TaskQueue&
* stappler::xenolith::basic2d::Label::FormatSpec*
* stappler::xenolith::Color4F const&

Возвращает:
* Rc<stappler::xenolith::basic2d::LabelDeferredResult>

# ::stappler::xenolith::basic2d::Label::updateLabel()

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::basic2d::Label::onFontSourceUpdated()

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::basic2d::Label::onFontSourceLoaded()

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::basic2d::Label::onLayoutUpdated()

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::basic2d::Label::updateColor()

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::basic2d::Label::updateVertexes()

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::basic2d::Label::updateVertexesColor()

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::basic2d::Label::updateQuadsForeground(font::FontController*,stappler::xenolith::basic2d::Label::FormatSpec*,Vector<stappler::xenolith::ColorMask>&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* font::FontController*
* stappler::xenolith::basic2d::Label::FormatSpec*
* Vector<stappler::xenolith::ColorMask>&


# ::stappler::xenolith::basic2d::Label::checkVertexDirty() const

## BRIEF

## CONTENT

Доступ: protected

Возвращает:
* bool

# ::stappler::xenolith::basic2d::Label::processParentFlags(stappler::xenolith::FrameInfo&,stappler::xenolith::NodeFlags)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::FrameInfo&
* stappler::xenolith::NodeFlags

Возвращает:
* stappler::xenolith::NodeFlags

# ::stappler::xenolith::basic2d::Label::pushCommands(stappler::xenolith::FrameInfo&,stappler::xenolith::NodeFlags)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::FrameInfo&
* stappler::xenolith::NodeFlags


# ::stappler::xenolith::basic2d::Label::updateLabelScale(stappler::xenolith::Mat4 const&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::Mat4 const&


# ::stappler::xenolith::basic2d::Label::_listener

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::EventListener*


# ::stappler::xenolith::basic2d::Label::_quadRequestTime

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::Time


# ::stappler::xenolith::basic2d::Label::_source

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<font::FontController>


# ::stappler::xenolith::basic2d::Label::_format

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::xenolith::basic2d::Label::FormatSpec>


# ::stappler::xenolith::basic2d::Label::_colorMap

## BRIEF

## CONTENT

Доступ: protected

Тип: Vector<stappler::xenolith::ColorMask>


# ::stappler::xenolith::basic2d::Label::_deferred

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::basic2d::Label::_adjustValue

## BRIEF

## CONTENT

Доступ: protected

Тип: uint8_t


# ::stappler::xenolith::basic2d::Label::_updateCount

## BRIEF

## CONTENT

Доступ: protected

Тип: size_t


# ::stappler::xenolith::basic2d::Label::_deferredResult

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::xenolith::basic2d::LabelDeferredResult>
