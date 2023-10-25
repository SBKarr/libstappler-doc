Title: XLFontFormatter.h


# XENOLITH_FONT_XLFONTFORMATTER_H_

## BRIEF

## CONTENT


# ::HyphenDict

## BRIEF

## CONTENT


# ::stappler::xenolith::font::LineSpec

## BRIEF

## CONTENT


# ::stappler::xenolith::font::LineSpec::start

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::xenolith::font::LineSpec::count

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::xenolith::font::LineSpec::pos

## BRIEF

## CONTENT

Тип: uint16_t


# ::stappler::xenolith::font::LineSpec::height

## BRIEF

## CONTENT

Тип: uint16_t


# ::stappler::xenolith::font::RangeSpec

## BRIEF

## CONTENT


# ::stappler::xenolith::font::RangeSpec::colorDirty

## BRIEF

## CONTENT

Тип: bool


# ::stappler::xenolith::font::RangeSpec::opacityDirty

## BRIEF

## CONTENT

Тип: bool


# ::stappler::xenolith::font::RangeSpec::decoration

## BRIEF

## CONTENT

Тип: stappler::xenolith::font::TextDecoration


# ::stappler::xenolith::font::RangeSpec::align

## BRIEF

## CONTENT

Тип: stappler::xenolith::font::VerticalAlign


# ::stappler::xenolith::font::RangeSpec::start

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::xenolith::font::RangeSpec::count

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::xenolith::font::RangeSpec::color

## BRIEF

## CONTENT

Тип: stappler::xenolith::Color4B


# ::stappler::xenolith::font::RangeSpec::height

## BRIEF

## CONTENT

Тип: uint16_t


# ::stappler::xenolith::font::RangeSpec::metrics

## BRIEF

## CONTENT

Тип: stappler::xenolith::font::Metrics


# ::stappler::xenolith::font::RangeSpec::layout

## BRIEF

## CONTENT

Тип: Rc<stappler::xenolith::font::FontLayout>


# ::stappler::xenolith::font::FormatSpec

## BRIEF

## CONTENT

Базовые классы:
* Ref


# ::stappler::xenolith::font::FormatSpec::RangeLineIterator

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::font::FormatSpec::RangeLineIterator::range

## BRIEF

## CONTENT

Тип: Vector<RangeSpec>::const_iterator


# ::stappler::xenolith::font::FormatSpec::RangeLineIterator::line

## BRIEF

## CONTENT

Тип: Vector<LineSpec>::const_iterator


# ::stappler::xenolith::font::FormatSpec::RangeLineIterator::start() const

## BRIEF

## CONTENT

Возвращает:
* uint32_t

# ::stappler::xenolith::font::FormatSpec::RangeLineIterator::count() const

## BRIEF

## CONTENT

Возвращает:
* uint32_t

# ::stappler::xenolith::font::FormatSpec::RangeLineIterator::end() const

## BRIEF

## CONTENT

Возвращает:
* uint32_t

# ::stappler::xenolith::font::FormatSpec::RangeLineIterator::operator++()

## BRIEF

## CONTENT

Возвращает:
* stappler::xenolith::font::FormatSpec::RangeLineIterator&

# ::stappler::xenolith::font::FormatSpec::RangeLineIterator::operator==(stappler::xenolith::font::FormatSpec::RangeLineIterator const&) const

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::font::FormatSpec::RangeLineIterator const&

Возвращает:
* bool

# ::stappler::xenolith::font::FormatSpec::RangeLineIterator::operator!=(stappler::xenolith::font::FormatSpec::RangeLineIterator const&) const

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::font::FormatSpec::RangeLineIterator const&

Возвращает:
* bool

# ::stappler::xenolith::font::FormatSpec::ranges

## BRIEF

## CONTENT

Доступ: public

Тип: Vector<stappler::xenolith::font::RangeSpec>


# ::stappler::xenolith::font::FormatSpec::chars

## BRIEF

## CONTENT

Доступ: public

Тип: Vector<stappler::xenolith::font::CharSpec>


# ::stappler::xenolith::font::FormatSpec::lines

## BRIEF

## CONTENT

Доступ: public

Тип: Vector<stappler::xenolith::font::LineSpec>


# ::stappler::xenolith::font::FormatSpec::width

## BRIEF

## CONTENT

Доступ: public

Тип: uint16_t


# ::stappler::xenolith::font::FormatSpec::height

## BRIEF

## CONTENT

Доступ: public

Тип: uint16_t


# ::stappler::xenolith::font::FormatSpec::maxLineX

## BRIEF

## CONTENT

Доступ: public

Тип: uint16_t


# ::stappler::xenolith::font::FormatSpec::overflow

## BRIEF

## CONTENT

Доступ: public

Тип: bool


# ::stappler::xenolith::font::FormatSpec::source

## BRIEF

## CONTENT

Доступ: public

Тип: Rc<stappler::xenolith::font::FontController>


# ::stappler::xenolith::font::FormatSpec::FormatSpec(Rc<stappler::xenolith::font::FontController>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Rc<stappler::xenolith::font::FontController>&&


# ::stappler::xenolith::font::FormatSpec::FormatSpec(Rc<stappler::xenolith::font::FontController>&&,size_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Rc<stappler::xenolith::font::FontController>&&
* size_t


# ::stappler::xenolith::font::FormatSpec::FormatSpec(Rc<stappler::xenolith::font::FontController>&&,size_t,size_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Rc<stappler::xenolith::font::FontController>&&
* size_t
* size_t


# ::stappler::xenolith::font::FormatSpec::reserve(size_t,size_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* size_t
* size_t


# ::stappler::xenolith::font::FormatSpec::clear()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::font::FormatSpec::setSource(Rc<stappler::xenolith::font::FontController>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Rc<stappler::xenolith::font::FontController>&&


# ::stappler::xenolith::font::FormatSpec::SelectMode

## BRIEF

## CONTENT

Доступ: public

Значения:
* Center
* Prefix
* Suffix
* Best


# ::stappler::xenolith::font::FormatSpec::getChar(int32_t,int32_t,stappler::xenolith::font::FormatSpec::SelectMode) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* int32_t
* int32_t
* stappler::xenolith::font::FormatSpec::SelectMode

Возвращает:
* Pair<uint32_t, stappler::xenolith::font::FormatSpec::SelectMode>

# ::stappler::xenolith::font::FormatSpec::getLine(uint32_t) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint32_t

Возвращает:
* stappler::xenolith::font::LineSpec const*

# ::stappler::xenolith::font::FormatSpec::getLineNumber(uint32_t) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint32_t

Возвращает:
* uint32_t

# ::stappler::xenolith::font::FormatSpec::begin() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::font::FormatSpec::RangeLineIterator

# ::stappler::xenolith::font::FormatSpec::end() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::font::FormatSpec::RangeLineIterator

# ::stappler::xenolith::font::FormatSpec::str(bool) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* bool

Возвращает:
* stappler::mem_std::WideString

# ::stappler::xenolith::font::FormatSpec::str(uint32_t,uint32_t,size_t,bool,bool) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint32_t
* uint32_t
* size_t
* bool
* bool

Возвращает:
* stappler::mem_std::WideString

# ::stappler::xenolith::font::FormatSpec::selectWord(uint32_t) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint32_t

Возвращает:
* Pair<uint32_t, uint32_t>

# ::stappler::xenolith::font::FormatSpec::selectChar(int32_t,int32_t,stappler::xenolith::font::FormatSpec::SelectMode) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* int32_t
* int32_t
* stappler::xenolith::font::FormatSpec::SelectMode

Возвращает:
* uint32_t

# ::stappler::xenolith::font::FormatSpec::getLineRect(uint32_t,float,stappler::xenolith::Vec2 const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint32_t
* float
* stappler::xenolith::Vec2 const&

Возвращает:
* stappler::xenolith::Rect

# ::stappler::xenolith::font::FormatSpec::getLineRect(stappler::xenolith::font::LineSpec const&,float,stappler::xenolith::Vec2 const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::font::LineSpec const&
* float
* stappler::xenolith::Vec2 const&

Возвращает:
* stappler::xenolith::Rect

# ::stappler::xenolith::font::FormatSpec::getLineForCharId(uint32_t) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint32_t

Возвращает:
* uint16_t

# ::stappler::xenolith::font::FormatSpec::getLabelRects(uint32_t,uint32_t,float,stappler::xenolith::Vec2 const&,stappler::xenolith::Padding const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint32_t
* uint32_t
* float
* stappler::xenolith::Vec2 const&
* stappler::xenolith::Padding const&

Возвращает:
* Vector<stappler::xenolith::Rect>

# ::stappler::xenolith::font::FormatSpec::getLabelRects(Vector<stappler::xenolith::Rect>&,uint32_t,uint32_t,float,stappler::xenolith::Vec2 const&,stappler::xenolith::Padding const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Vector<stappler::xenolith::Rect>&
* uint32_t
* uint32_t
* float
* stappler::xenolith::Vec2 const&
* stappler::xenolith::Padding const&


# ::stappler::xenolith::font::HyphenMap

## BRIEF

## CONTENT

Базовые классы:
* Ref


# ::stappler::xenolith::font::HyphenMap::~HyphenMap()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::font::HyphenMap::init()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::font::HyphenMap::addHyphenDict(stappler::CharGroupId,stappler::FilePath)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::CharGroupId
* stappler::FilePath


# ::stappler::xenolith::font::HyphenMap::addHyphenDict(stappler::CharGroupId,stappler::BytesView)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::CharGroupId
* stappler::BytesView


# ::stappler::xenolith::font::HyphenMap::makeWordHyphens(char16_t const*,size_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* char16_t const*
* size_t

Возвращает:
* Vector<uint8_t>

# ::stappler::xenolith::font::HyphenMap::makeWordHyphens(stappler::WideStringView const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::WideStringView const&

Возвращает:
* Vector<uint8_t>

# ::stappler::xenolith::font::HyphenMap::purgeHyphenDicts()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::font::HyphenMap::convertWord(HyphenDict*,char16_t const*,size_t)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* HyphenDict*
* char16_t const*
* size_t

Возвращает:
* stappler::mem_std::String

# ::stappler::xenolith::font::HyphenMap::_dicts

## BRIEF

## CONTENT

Доступ: protected

Тип: Map<stappler::CharGroupId, HyphenDict *>


# ::stappler::xenolith::font::Formatter

## BRIEF

## CONTENT


# ::stappler::xenolith::font::Formatter::LinePositionCallback

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::font::Formatter::ContentRequest

## BRIEF

## CONTENT

Доступ: public

Значения:
* Normal
* Minimize
* Maximize


# ::stappler::xenolith::font::Formatter::Formatter()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::font::Formatter::Formatter(stappler::xenolith::font::FormatSpec*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::font::FormatSpec*


# ::stappler::xenolith::font::Formatter::init(stappler::xenolith::font::FormatSpec*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::font::FormatSpec*


# ::stappler::xenolith::font::Formatter::setLinePositionCallback(stappler::xenolith::font::Formatter::LinePositionCallback const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::font::Formatter::LinePositionCallback const&


# ::stappler::xenolith::font::Formatter::setWidth(uint16_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint16_t


# ::stappler::xenolith::font::Formatter::setTextAlignment(stappler::xenolith::font::TextAlign)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::font::TextAlign


# ::stappler::xenolith::font::Formatter::setLineHeightAbsolute(uint16_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint16_t


# ::stappler::xenolith::font::Formatter::setLineHeightRelative(float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float


# ::stappler::xenolith::font::Formatter::setMaxWidth(uint16_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint16_t


# ::stappler::xenolith::font::Formatter::setMaxLines(size_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* size_t


# ::stappler::xenolith::font::Formatter::setOpticalAlignment(bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* bool


# ::stappler::xenolith::font::Formatter::setEmplaceAllChars(bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* bool


# ::stappler::xenolith::font::Formatter::setFillerChar(char16_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* char16_t


# ::stappler::xenolith::font::Formatter::setHyphens(stappler::xenolith::font::HyphenMap*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::font::HyphenMap*


# ::stappler::xenolith::font::Formatter::setRequest(stappler::xenolith::font::Formatter::ContentRequest)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::font::Formatter::ContentRequest


# ::stappler::xenolith::font::Formatter::begin(uint16_t,uint16_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint16_t
* uint16_t


# ::stappler::xenolith::font::Formatter::read(stappler::xenolith::font::FontParameters const&,stappler::xenolith::font::TextParameters const&,stappler::WideStringView,uint16_t,uint16_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::font::FontParameters const&
* stappler::xenolith::font::TextParameters const&
* stappler::WideStringView
* uint16_t
* uint16_t

Возвращает:
* bool

# ::stappler::xenolith::font::Formatter::read(stappler::xenolith::font::FontParameters const&,stappler::xenolith::font::TextParameters const&,char16_t const*,size_t,uint16_t,uint16_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::font::FontParameters const&
* stappler::xenolith::font::TextParameters const&
* char16_t const*
* size_t
* uint16_t
* uint16_t

Возвращает:
* bool

# ::stappler::xenolith::font::Formatter::read(stappler::xenolith::font::FontParameters const&,stappler::xenolith::font::TextParameters const&,uint16_t,uint16_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::font::FontParameters const&
* stappler::xenolith::font::TextParameters const&
* uint16_t
* uint16_t

Возвращает:
* bool

# ::stappler::xenolith::font::Formatter::finalize()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::font::Formatter::reset(stappler::xenolith::font::FormatSpec*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::font::FormatSpec*


# ::stappler::xenolith::font::Formatter::getHeight() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint16_t

# ::stappler::xenolith::font::Formatter::getWidth() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint16_t

# ::stappler::xenolith::font::Formatter::getMaxLineX() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint16_t

# ::stappler::xenolith::font::Formatter::getLineHeight() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint16_t

# ::stappler::xenolith::font::Formatter::getOutput() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::font::FormatSpec*

# ::stappler::xenolith::font::Formatter::isSpecial(char16_t) const

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* char16_t

Возвращает:
* bool

# ::stappler::xenolith::font::Formatter::checkBullet(uint16_t,uint16_t) const

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* uint16_t
* uint16_t

Возвращает:
* uint16_t

# ::stappler::xenolith::font::Formatter::parseWhiteSpace(stappler::xenolith::font::WhiteSpace)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::font::WhiteSpace


# ::stappler::xenolith::font::Formatter::parseFontLineHeight(uint16_t)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* uint16_t


# ::stappler::xenolith::font::Formatter::updatePosition(uint16_t&,uint16_t&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* uint16_t&
* uint16_t&

Возвращает:
* bool

# ::stappler::xenolith::font::Formatter::getAdvance(stappler::xenolith::font::CharSpec const&) const

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::font::CharSpec const&

Возвращает:
* uint16_t

# ::stappler::xenolith::font::Formatter::getAdvance(uint16_t) const

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* uint16_t

Возвращает:
* uint16_t

# ::stappler::xenolith::font::Formatter::getAdvancePosition(stappler::xenolith::font::CharSpec const&) const

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::font::CharSpec const&

Возвращает:
* uint16_t

# ::stappler::xenolith::font::Formatter::getAdvancePosition(uint16_t) const

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* uint16_t

Возвращает:
* uint16_t

# ::stappler::xenolith::font::Formatter::getLineAdvancePos(uint16_t)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* uint16_t

Возвращает:
* uint16_t

# ::stappler::xenolith::font::Formatter::getOriginPosition(stappler::xenolith::font::CharSpec const&) const

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::font::CharSpec const&

Возвращает:
* uint16_t

# ::stappler::xenolith::font::Formatter::getOriginPosition(uint16_t) const

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* uint16_t

Возвращает:
* uint16_t

# ::stappler::xenolith::font::Formatter::readWithRange(stappler::xenolith::font::RangeSpec&&,stappler::xenolith::font::TextParameters const&,char16_t const*,size_t,uint16_t,uint16_t)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::font::RangeSpec&&
* stappler::xenolith::font::TextParameters const&
* char16_t const*
* size_t
* uint16_t
* uint16_t

Возвращает:
* bool

# ::stappler::xenolith::font::Formatter::readWithRange(stappler::xenolith::font::RangeSpec&&,stappler::xenolith::font::TextParameters const&,uint16_t,uint16_t)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::font::RangeSpec&&
* stappler::xenolith::font::TextParameters const&
* uint16_t
* uint16_t

Возвращает:
* bool

# ::stappler::xenolith::font::Formatter::readChars(stappler::WideStringView&,Vector<uint8_t> const&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::WideStringView&
* Vector<uint8_t> const&

Возвращает:
* bool

# ::stappler::xenolith::font::Formatter::pushLineFiller(bool)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* bool


# ::stappler::xenolith::font::Formatter::pushChar(char16_t)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* char16_t

Возвращает:
* bool

# ::stappler::xenolith::font::Formatter::pushSpace(bool)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* bool

Возвращает:
* bool

# ::stappler::xenolith::font::Formatter::pushTab()

## BRIEF

## CONTENT

Доступ: protected

Возвращает:
* bool

# ::stappler::xenolith::font::Formatter::pushLine(uint16_t,uint16_t,bool)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* uint16_t
* uint16_t
* bool

Возвращает:
* bool

# ::stappler::xenolith::font::Formatter::pushLine(bool)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* bool

Возвращает:
* bool

# ::stappler::xenolith::font::Formatter::pushLineBreak()

## BRIEF

## CONTENT

Доступ: protected

Возвращает:
* bool

# ::stappler::xenolith::font::Formatter::pushLineBreakChar()

## BRIEF

## CONTENT

Доступ: protected

Возвращает:
* bool

# ::stappler::xenolith::font::Formatter::updateLineHeight(uint16_t,uint16_t)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* uint16_t
* uint16_t


# ::stappler::xenolith::font::Formatter::_output

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::font::FormatSpec*


# ::stappler::xenolith::font::Formatter::_hyphens

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::font::HyphenMap*


# ::stappler::xenolith::font::Formatter::_charPosition

## BRIEF

## CONTENT

Доступ: protected

Тип: size_t


# ::stappler::xenolith::font::Formatter::_primaryFontLayout

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::xenolith::font::FontLayout>


# ::stappler::xenolith::font::Formatter::_textStyle

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::font::TextParameters


# ::stappler::xenolith::font::Formatter::preserveLineBreaks

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::font::Formatter::collapseSpaces

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::font::Formatter::wordWrap

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::font::Formatter::opticalAlignment

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::font::Formatter::emplaceAllChars

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::font::Formatter::faceId

## BRIEF

## CONTENT

Доступ: protected

Тип: uint16_t


# ::stappler::xenolith::font::Formatter::b

## BRIEF

## CONTENT

Доступ: protected

Тип: char16_t


# ::stappler::xenolith::font::Formatter::c

## BRIEF

## CONTENT

Доступ: protected

Тип: char16_t


# ::stappler::xenolith::font::Formatter::defaultWidth

## BRIEF

## CONTENT

Доступ: protected

Тип: uint16_t


# ::stappler::xenolith::font::Formatter::width

## BRIEF

## CONTENT

Доступ: protected

Тип: uint16_t


# ::stappler::xenolith::font::Formatter::lineOffset

## BRIEF

## CONTENT

Доступ: protected

Тип: uint16_t


# ::stappler::xenolith::font::Formatter::lineX

## BRIEF

## CONTENT

Доступ: protected

Тип: int16_t


# ::stappler::xenolith::font::Formatter::lineY

## BRIEF

## CONTENT

Доступ: protected

Тип: uint16_t


# ::stappler::xenolith::font::Formatter::maxLineX

## BRIEF

## CONTENT

Доступ: protected

Тип: uint16_t


# ::stappler::xenolith::font::Formatter::charNum

## BRIEF

## CONTENT

Доступ: protected

Тип: uint16_t


# ::stappler::xenolith::font::Formatter::lineHeight

## BRIEF

## CONTENT

Доступ: protected

Тип: uint16_t


# ::stappler::xenolith::font::Formatter::currentLineHeight

## BRIEF

## CONTENT

Доступ: protected

Тип: uint16_t


# ::stappler::xenolith::font::Formatter::rangeLineHeight

## BRIEF

## CONTENT

Доступ: protected

Тип: uint16_t


# ::stappler::xenolith::font::Formatter::lineHeightMod

## BRIEF

## CONTENT

Доступ: protected

Тип: float


# ::stappler::xenolith::font::Formatter::lineHeightIsAbsolute

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::font::Formatter::firstInLine

## BRIEF

## CONTENT

Доступ: protected

Тип: uint16_t


# ::stappler::xenolith::font::Formatter::wordWrapPos

## BRIEF

## CONTENT

Доступ: protected

Тип: uint16_t


# ::stappler::xenolith::font::Formatter::bufferedSpace

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::font::Formatter::maxWidth

## BRIEF

## CONTENT

Доступ: protected

Тип: uint16_t


# ::stappler::xenolith::font::Formatter::maxLines

## BRIEF

## CONTENT

Доступ: protected

Тип: size_t


# ::stappler::xenolith::font::Formatter::_fillerChar

## BRIEF

## CONTENT

Доступ: protected

Тип: char16_t


# ::stappler::xenolith::font::Formatter::alignment

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::font::TextAlign


# ::stappler::xenolith::font::Formatter::linePositionFunc

## BRIEF

## CONTENT

Доступ: protected

Тип: LinePositionCallback


# ::stappler::xenolith::font::Formatter::request

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::font::Formatter::ContentRequest
