Title: XLFontLabelBase.h


# XENOLITH_FONT_XLFONTLABELBASE_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::font::TextLayout

## BRIEF

## CONTENT

Базовые классы:
* RefBase<memory::StandartInterface>
* InterfaceObject<memory::StandartInterface>


# ::stappler::xenolith::font::TextLayout::~TextLayout()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::font::TextLayout::TextLayout(stappler::xenolith::font::FontController*,size_t,size_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::font::FontController*
* size_t
* size_t


# ::stappler::xenolith::font::TextLayout::reserve(size_t,size_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* size_t
* size_t


# ::stappler::xenolith::font::TextLayout::clear()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::font::TextLayout::empty() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::font::TextLayout::getData()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* TextLayoutData<stappler::InterfaceObject<stappler::memory::StandartInterface>::Interface>*

# ::stappler::xenolith::font::TextLayout::getData() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* TextLayoutData<stappler::InterfaceObject<stappler::memory::StandartInterface>::Interface> const*

# ::stappler::xenolith::font::TextLayout::getWidth() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint16_t

# ::stappler::xenolith::font::TextLayout::getHeight() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint16_t

# ::stappler::xenolith::font::TextLayout::getMaxAdvance() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint16_t

# ::stappler::xenolith::font::TextLayout::isOverflow() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::font::TextLayout::getController() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::font::FontController*

# ::stappler::xenolith::font::TextLayout::getLayout(stappler::font::FontParameters const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::font::FontParameters const&

Возвращает:
* Rc<stappler::font::FontFaceSet>

# ::stappler::xenolith::font::TextLayout::begin() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::font::RangeLineIterator

# ::stappler::xenolith::font::TextLayout::end() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::font::RangeLineIterator

# ::stappler::xenolith::font::TextLayout::str(bool) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* bool

Возвращает:
* stappler::InterfaceObject<stappler::memory::StandartInterface>::WideString

# ::stappler::xenolith::font::TextLayout::str(uint32_t,uint32_t,size_t,bool,bool) const

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
* stappler::InterfaceObject<stappler::memory::StandartInterface>::WideString

# ::stappler::xenolith::font::TextLayout::getChar(int32_t,int32_t,stappler::font::CharSelectMode) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* int32_t
* int32_t
* stappler::font::CharSelectMode

Возвращает:
* Pair<uint32_t, stappler::font::CharSelectMode>

# ::stappler::xenolith::font::TextLayout::getLine(uint32_t) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint32_t

Возвращает:
* stappler::font::LineLayoutData const*

# ::stappler::xenolith::font::TextLayout::getLineForChar(uint32_t) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint32_t

Возвращает:
* uint32_t

# ::stappler::xenolith::font::TextLayout::selectWord(uint32_t) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint32_t

Возвращает:
* Pair<uint32_t, uint32_t>

# ::stappler::xenolith::font::TextLayout::getLineRect(uint32_t,float,geom::Vec2 const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint32_t
* float
* geom::Vec2 const&

Возвращает:
* geom::Rect

# ::stappler::xenolith::font::TextLayout::getLineRect(stappler::font::LineLayoutData const&,float,geom::Vec2 const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::font::LineLayoutData const&
* float
* geom::Vec2 const&

Возвращает:
* geom::Rect

# ::stappler::xenolith::font::TextLayout::getLineForCharId(uint32_t) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint32_t

Возвращает:
* uint16_t

# ::stappler::xenolith::font::TextLayout::getLabelRects(uint32_t,uint32_t,float,geom::Vec2 const&,geom::Padding const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint32_t
* uint32_t
* float
* geom::Vec2 const&
* geom::Padding const&

Возвращает:
* Vector<geom::Rect>

# ::stappler::xenolith::font::TextLayout::getLabelRects(Vector<geom::Rect>&,uint32_t,uint32_t,float,geom::Vec2 const&,geom::Padding const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Vector<geom::Rect>&
* uint32_t
* uint32_t
* float
* geom::Vec2 const&
* geom::Padding const&


# ::stappler::xenolith::font::TextLayout::_data

## BRIEF

## CONTENT

Доступ: protected

Тип: TextLayoutData<memory::StandartInterface>


# ::stappler::xenolith::font::TextLayout::_handle

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::xenolith::font::FontController>


# ::stappler::xenolith::font::TextLayout::_fonts

## BRIEF

## CONTENT

Доступ: protected

Тип: Set<Rc<stappler::font::FontFaceSet>>


# ::stappler::xenolith::font::LabelBase

## BRIEF

## CONTENT


# ::stappler::xenolith::font::LabelBase::FontFamily

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::font::LabelBase::Opacity

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::font::LabelBase::Style

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::font::LabelBase::Style::Name

## BRIEF

## CONTENT

Значения:
* TextTransform
* TextDecoration
* Hyphens
* VerticalAlign
* Color
* Opacity
* FontSize
* FontStyle
* FontWeight
* FontStretch
* FontFamily
* FontGrade


# ::stappler::xenolith::font::LabelBase::Style::Value

## BRIEF

## CONTENT


# ::stappler::xenolith::font::LabelBase::Style::Value::textTransform

## BRIEF

## CONTENT

Тип: stappler::font::TextTransform


# ::stappler::xenolith::font::LabelBase::Style::Value::textDecoration

## BRIEF

## CONTENT

Тип: stappler::font::TextDecoration


# ::stappler::xenolith::font::LabelBase::Style::Value::hyphens

## BRIEF

## CONTENT

Тип: stappler::font::Hyphens


# ::stappler::xenolith::font::LabelBase::Style::Value::verticalAlign

## BRIEF

## CONTENT

Тип: stappler::font::VerticalAlign


# ::stappler::xenolith::font::LabelBase::Style::Value::color

## BRIEF

## CONTENT

Тип: stappler::geom::Color3B


# ::stappler::xenolith::font::LabelBase::Style::Value::opacity

## BRIEF

## CONTENT

Тип: uint8_t


# ::stappler::xenolith::font::LabelBase::Style::Value::fontSize

## BRIEF

## CONTENT

Тип: stappler::font::FontSize


# ::stappler::xenolith::font::LabelBase::Style::Value::fontStyle

## BRIEF

## CONTENT

Тип: stappler::font::FontStyle


# ::stappler::xenolith::font::LabelBase::Style::Value::fontWeight

## BRIEF

## CONTENT

Тип: stappler::font::FontWeight


# ::stappler::xenolith::font::LabelBase::Style::Value::fontStretch

## BRIEF

## CONTENT

Тип: stappler::font::FontStretch


# ::stappler::xenolith::font::LabelBase::Style::Value::fontGrade

## BRIEF

## CONTENT

Тип: stappler::font::FontGrade


# ::stappler::xenolith::font::LabelBase::Style::Value::fontFamily

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::xenolith::font::LabelBase::Style::Value::Value()

## BRIEF

## CONTENT


# ::stappler::xenolith::font::LabelBase::Style::Param

## BRIEF

## CONTENT


# ::stappler::xenolith::font::LabelBase::Style::Param::name

## BRIEF

## CONTENT

Тип: stappler::xenolith::font::LabelBase::Style::Name


# ::stappler::xenolith::font::LabelBase::Style::Param::value

## BRIEF

## CONTENT

Тип: stappler::xenolith::font::LabelBase::Style::Value


# ::stappler::xenolith::font::LabelBase::Style::Param::Param(stappler::font::TextTransform const&)

## BRIEF

## CONTENT

Параметры:
* stappler::font::TextTransform const&


# ::stappler::xenolith::font::LabelBase::Style::Param::Param(stappler::font::TextDecoration const&)

## BRIEF

## CONTENT

Параметры:
* stappler::font::TextDecoration const&


# ::stappler::xenolith::font::LabelBase::Style::Param::Param(stappler::font::Hyphens const&)

## BRIEF

## CONTENT

Параметры:
* stappler::font::Hyphens const&


# ::stappler::xenolith::font::LabelBase::Style::Param::Param(stappler::font::VerticalAlign const&)

## BRIEF

## CONTENT

Параметры:
* stappler::font::VerticalAlign const&


# ::stappler::xenolith::font::LabelBase::Style::Param::Param(const stappler::geom::Color3B&)

## BRIEF

## CONTENT

Параметры:
* const stappler::geom::Color3B&


# ::stappler::xenolith::font::LabelBase::Style::Param::Param(const stappler::geom::Color&)

## BRIEF

## CONTENT

Параметры:
* const stappler::geom::Color&


# ::stappler::xenolith::font::LabelBase::Style::Param::Param(stappler::xenolith::font::LabelBase::Opacity const&)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::font::LabelBase::Opacity const&


# ::stappler::xenolith::font::LabelBase::Style::Param::Param(stappler::font::FontSize const&)

## BRIEF

## CONTENT

Параметры:
* stappler::font::FontSize const&


# ::stappler::xenolith::font::LabelBase::Style::Param::Param(stappler::font::FontStyle const&)

## BRIEF

## CONTENT

Параметры:
* stappler::font::FontStyle const&


# ::stappler::xenolith::font::LabelBase::Style::Param::Param(stappler::font::FontWeight const&)

## BRIEF

## CONTENT

Параметры:
* stappler::font::FontWeight const&


# ::stappler::xenolith::font::LabelBase::Style::Param::Param(stappler::font::FontStretch const&)

## BRIEF

## CONTENT

Параметры:
* stappler::font::FontStretch const&


# ::stappler::xenolith::font::LabelBase::Style::Param::Param(stappler::xenolith::font::LabelBase::FontFamily const&)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::font::LabelBase::FontFamily const&


# ::stappler::xenolith::font::LabelBase::Style::Param::Param(stappler::font::FontGrade const&)

## BRIEF

## CONTENT

Параметры:
* stappler::font::FontGrade const&


# ::stappler::xenolith::font::LabelBase::Style::Style()

## BRIEF

## CONTENT


# ::stappler::xenolith::font::LabelBase::Style::Style(stappler::xenolith::font::LabelBase::Style const&)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::font::LabelBase::Style const&


# ::stappler::xenolith::font::LabelBase::Style::Style(stappler::xenolith::font::LabelBase::Style&&)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::font::LabelBase::Style&&


# ::stappler::xenolith::font::LabelBase::Style::operator=(stappler::xenolith::font::LabelBase::Style const&)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::font::LabelBase::Style const&

Возвращает:
* stappler::xenolith::font::LabelBase::Style&

# ::stappler::xenolith::font::LabelBase::Style::operator=(stappler::xenolith::font::LabelBase::Style&&)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::font::LabelBase::Style&&

Возвращает:
* stappler::xenolith::font::LabelBase::Style&

# ::stappler::xenolith::font::LabelBase::Style::Style(std::initializer_list<Param>)

## BRIEF

## CONTENT

Параметры:
* std::initializer_list<Param>


# ::stappler::xenolith::font::LabelBase::Style::Style<class>(T const&)

## BRIEF

## CONTENT

Параметры шаблона:
* class T

Параметры:
* T const&


# ::stappler::xenolith::font::LabelBase::Style::set<class>(T const&)

## BRIEF

## CONTENT

Параметры шаблона:
* class T

Параметры:
* T const&

Возвращает:
* stappler::xenolith::font::LabelBase::Style&

# ::stappler::xenolith::font::LabelBase::Style::set(stappler::xenolith::font::LabelBase::Style::Param const&,bool)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::font::LabelBase::Style::Param const&
* bool


# ::stappler::xenolith::font::LabelBase::Style::merge(stappler::xenolith::font::LabelBase::Style const&)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::font::LabelBase::Style const&


# ::stappler::xenolith::font::LabelBase::Style::clear()

## BRIEF

## CONTENT


# ::stappler::xenolith::font::LabelBase::Style::params

## BRIEF

## CONTENT

Тип: Vector<stappler::xenolith::font::LabelBase::Style::Param>


# ::stappler::xenolith::font::LabelBase::StyleSpec

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::font::LabelBase::StyleSpec::start

## BRIEF

## CONTENT

Тип: size_t


# ::stappler::xenolith::font::LabelBase::StyleSpec::length

## BRIEF

## CONTENT

Тип: size_t


# ::stappler::xenolith::font::LabelBase::StyleSpec::style

## BRIEF

## CONTENT

Тип: stappler::xenolith::font::LabelBase::Style


# ::stappler::xenolith::font::LabelBase::StyleSpec::StyleSpec(size_t,size_t,stappler::xenolith::font::LabelBase::Style&&)

## BRIEF

## CONTENT

Параметры:
* size_t
* size_t
* stappler::xenolith::font::LabelBase::Style&&


# ::stappler::xenolith::font::LabelBase::StyleSpec::StyleSpec(size_t,size_t,stappler::xenolith::font::LabelBase::Style const&)

## BRIEF

## CONTENT

Параметры:
* size_t
* size_t
* stappler::xenolith::font::LabelBase::Style const&


# ::stappler::xenolith::font::LabelBase::DescriptionStyle

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::font::LabelBase::DescriptionStyle::font

## BRIEF

## CONTENT

Тип: stappler::font::FontParameters


# ::stappler::xenolith::font::LabelBase::DescriptionStyle::text

## BRIEF

## CONTENT

Тип: stappler::font::TextParameters


# ::stappler::xenolith::font::LabelBase::DescriptionStyle::colorDirty

## BRIEF

## CONTENT

Тип: bool


# ::stappler::xenolith::font::LabelBase::DescriptionStyle::opacityDirty

## BRIEF

## CONTENT

Тип: bool


# ::stappler::xenolith::font::LabelBase::DescriptionStyle::tag

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::xenolith::font::LabelBase::DescriptionStyle::DescriptionStyle()

## BRIEF

## CONTENT


# ::stappler::xenolith::font::LabelBase::DescriptionStyle::getConfigName(bool) const

## BRIEF

## CONTENT

Параметры:
* bool

Возвращает:
* stappler::mem_std::String

# ::stappler::xenolith::font::LabelBase::DescriptionStyle::merge(Rc<font::FontController> const&,stappler::xenolith::font::LabelBase::Style const&) const

## BRIEF

## CONTENT

Параметры:
* Rc<font::FontController> const&
* stappler::xenolith::font::LabelBase::Style const&

Возвращает:
* stappler::xenolith::font::LabelBase::DescriptionStyle

# ::stappler::xenolith::font::LabelBase::DescriptionStyle::operator==(stappler::xenolith::font::LabelBase::DescriptionStyle const&) const

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::font::LabelBase::DescriptionStyle const&

Возвращает:
* bool

# ::stappler::xenolith::font::LabelBase::DescriptionStyle::operator!=(stappler::xenolith::font::LabelBase::DescriptionStyle const&) const

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::font::LabelBase::DescriptionStyle const&

Возвращает:
* bool

# ::stappler::xenolith::font::LabelBase::DescriptionStyle::construct<typename>(stappler::StringView const&,stappler::font::FontSize,Args &&...)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Args

Параметры:
* stappler::StringView const&
* stappler::font::FontSize
* Args &&...

Возвращает:
* stappler::xenolith::font::LabelBase::DescriptionStyle

# ::stappler::xenolith::font::LabelBase::DescriptionStyle::readParameter(stappler::xenolith::font::LabelBase::DescriptionStyle&,stappler::font::TextTransform)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::font::LabelBase::DescriptionStyle&
* stappler::font::TextTransform


# ::stappler::xenolith::font::LabelBase::DescriptionStyle::readParameter(stappler::xenolith::font::LabelBase::DescriptionStyle&,stappler::font::TextDecoration)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::font::LabelBase::DescriptionStyle&
* stappler::font::TextDecoration


# ::stappler::xenolith::font::LabelBase::DescriptionStyle::readParameter(stappler::xenolith::font::LabelBase::DescriptionStyle&,stappler::font::Hyphens)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::font::LabelBase::DescriptionStyle&
* stappler::font::Hyphens


# ::stappler::xenolith::font::LabelBase::DescriptionStyle::readParameter(stappler::xenolith::font::LabelBase::DescriptionStyle&,stappler::font::VerticalAlign)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::font::LabelBase::DescriptionStyle&
* stappler::font::VerticalAlign


# ::stappler::xenolith::font::LabelBase::DescriptionStyle::readParameter(stappler::xenolith::font::LabelBase::DescriptionStyle&,stappler::xenolith::font::LabelBase::Opacity)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::font::LabelBase::DescriptionStyle&
* stappler::xenolith::font::LabelBase::Opacity


# ::stappler::xenolith::font::LabelBase::DescriptionStyle::readParameter(stappler::xenolith::font::LabelBase::DescriptionStyle&,const stappler::geom::Color3B&)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::font::LabelBase::DescriptionStyle&
* const stappler::geom::Color3B&


# ::stappler::xenolith::font::LabelBase::DescriptionStyle::readParameter(stappler::xenolith::font::LabelBase::DescriptionStyle&,stappler::font::FontSize)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::font::LabelBase::DescriptionStyle&
* stappler::font::FontSize


# ::stappler::xenolith::font::LabelBase::DescriptionStyle::readParameter(stappler::xenolith::font::LabelBase::DescriptionStyle&,stappler::font::FontStyle)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::font::LabelBase::DescriptionStyle&
* stappler::font::FontStyle


# ::stappler::xenolith::font::LabelBase::DescriptionStyle::readParameter(stappler::xenolith::font::LabelBase::DescriptionStyle&,stappler::font::FontWeight)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::font::LabelBase::DescriptionStyle&
* stappler::font::FontWeight


# ::stappler::xenolith::font::LabelBase::DescriptionStyle::readParameter(stappler::xenolith::font::LabelBase::DescriptionStyle&,stappler::font::FontStretch)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::font::LabelBase::DescriptionStyle&
* stappler::font::FontStretch


# ::stappler::xenolith::font::LabelBase::DescriptionStyle::readParameter(stappler::xenolith::font::LabelBase::DescriptionStyle&,stappler::font::FontGrade)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::font::LabelBase::DescriptionStyle&
* stappler::font::FontGrade


# ::stappler::xenolith::font::LabelBase::DescriptionStyle::readParameters<typename,typename>(stappler::xenolith::font::LabelBase::DescriptionStyle&,T&&,Args &&...)

## BRIEF

## CONTENT

Параметры шаблона:
* typename T
* typename Args

Параметры:
* stappler::xenolith::font::LabelBase::DescriptionStyle&
* T&&
* Args &&...


# ::stappler::xenolith::font::LabelBase::DescriptionStyle::readParameters<typename>(stappler::xenolith::font::LabelBase::DescriptionStyle&,T&&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename T

Параметры:
* stappler::xenolith::font::LabelBase::DescriptionStyle&
* T&&


# ::stappler::xenolith::font::LabelBase::DescriptionStyle::readParameters(stappler::xenolith::font::LabelBase::DescriptionStyle&)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::font::LabelBase::DescriptionStyle&


# ::stappler::xenolith::font::LabelBase::ExternalFormatter

## BRIEF

## CONTENT

Доступ: public

Базовые классы:
* Ref


# ::stappler::xenolith::font::LabelBase::ExternalFormatter::~ExternalFormatter()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::font::LabelBase::ExternalFormatter::init(font::FontController*,float,float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* font::FontController*
* float
* float

Возвращает:
* bool

# ::stappler::xenolith::font::LabelBase::ExternalFormatter::setLineHeightAbsolute(float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float


# ::stappler::xenolith::font::LabelBase::ExternalFormatter::setLineHeightRelative(float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float


# ::stappler::xenolith::font::LabelBase::ExternalFormatter::reserve(size_t,size_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* size_t
* size_t


# ::stappler::xenolith::font::LabelBase::ExternalFormatter::addString(stappler::xenolith::font::LabelBase::DescriptionStyle const&,stappler::StringView const&,bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::font::LabelBase::DescriptionStyle const&
* stappler::StringView const&
* bool


# ::stappler::xenolith::font::LabelBase::ExternalFormatter::addString(stappler::xenolith::font::LabelBase::DescriptionStyle const&,stappler::WideStringView const&,bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::font::LabelBase::DescriptionStyle const&
* stappler::WideStringView const&
* bool


# ::stappler::xenolith::font::LabelBase::ExternalFormatter::finalize()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::geom::Size2

# ::stappler::xenolith::font::LabelBase::ExternalFormatter::begin

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::font::LabelBase::ExternalFormatter::_spec

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<font::TextLayout>


# ::stappler::xenolith::font::LabelBase::ExternalFormatter::_formatter

## BRIEF

## CONTENT

Доступ: protected

Тип: font::Formatter


# ::stappler::xenolith::font::LabelBase::ExternalFormatter::_density

## BRIEF

## CONTENT

Доступ: protected

Тип: float


# ::stappler::xenolith::font::LabelBase::StyleVec

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::font::LabelBase::getLocalizedString(stappler::StringView const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView const&

Возвращает:
* stappler::mem_std::WideString

# ::stappler::xenolith::font::LabelBase::getLocalizedString(stappler::WideStringView const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::WideStringView const&

Возвращает:
* stappler::mem_std::WideString

# ::stappler::xenolith::font::LabelBase::getLabelSize(font::FontController*,stappler::xenolith::font::LabelBase::DescriptionStyle const&,stappler::StringView const&,float,bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* font::FontController*
* stappler::xenolith::font::LabelBase::DescriptionStyle const&
* stappler::StringView const&
* float
* bool

Возвращает:
* stappler::geom::Size2

# ::stappler::xenolith::font::LabelBase::getLabelSize(font::FontController*,stappler::xenolith::font::LabelBase::DescriptionStyle const&,stappler::WideStringView const&,float,bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* font::FontController*
* stappler::xenolith::font::LabelBase::DescriptionStyle const&
* stappler::WideStringView const&
* float
* bool

Возвращает:
* stappler::geom::Size2

# ::stappler::xenolith::font::LabelBase::getStringWidth(font::FontController*,stappler::xenolith::font::LabelBase::DescriptionStyle const&,stappler::StringView const&,bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* font::FontController*
* stappler::xenolith::font::LabelBase::DescriptionStyle const&
* stappler::StringView const&
* bool

Возвращает:
* float

# ::stappler::xenolith::font::LabelBase::getStringWidth(font::FontController*,stappler::xenolith::font::LabelBase::DescriptionStyle const&,stappler::WideStringView const&,bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* font::FontController*
* stappler::xenolith::font::LabelBase::DescriptionStyle const&
* stappler::WideStringView const&
* bool

Возвращает:
* float

# ::stappler::xenolith::font::LabelBase::~LabelBase()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::font::LabelBase::isLabelDirty() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::font::LabelBase::compileStyle() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* StyleVec

# ::stappler::xenolith::font::LabelBase::setString<char...>(metastring::metastring<Chars...>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* char Chars

Параметры:
* metastring::metastring<Chars...>&&


# ::stappler::xenolith::font::LabelBase::setString(stappler::StringView const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView const&


# ::stappler::xenolith::font::LabelBase::setString(stappler::WideStringView const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::WideStringView const&


# ::stappler::xenolith::font::LabelBase::setLocalizedString(size_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* size_t


# ::stappler::xenolith::font::LabelBase::getString() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::WideStringView

# ::stappler::xenolith::font::LabelBase::getString8() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::StringView

# ::stappler::xenolith::font::LabelBase::erase16(size_t,size_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* size_t
* size_t


# ::stappler::xenolith::font::LabelBase::erase8(size_t,size_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* size_t
* size_t


# ::stappler::xenolith::font::LabelBase::append(stappler::StringView const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView const&


# ::stappler::xenolith::font::LabelBase::append(stappler::WideStringView const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::WideStringView const&


# ::stappler::xenolith::font::LabelBase::prepend(stappler::StringView const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView const&


# ::stappler::xenolith::font::LabelBase::prepend(stappler::WideStringView const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::WideStringView const&


# ::stappler::xenolith::font::LabelBase::setTextRangeStyle(size_t,size_t,stappler::xenolith::font::LabelBase::Style&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* size_t
* size_t
* stappler::xenolith::font::LabelBase::Style&&


# ::stappler::xenolith::font::LabelBase::appendTextWithStyle(stappler::StringView const&,stappler::xenolith::font::LabelBase::Style&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView const&
* stappler::xenolith::font::LabelBase::Style&&


# ::stappler::xenolith::font::LabelBase::appendTextWithStyle(stappler::WideStringView const&,stappler::xenolith::font::LabelBase::Style&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::WideStringView const&
* stappler::xenolith::font::LabelBase::Style&&


# ::stappler::xenolith::font::LabelBase::prependTextWithStyle(stappler::StringView const&,stappler::xenolith::font::LabelBase::Style&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView const&
* stappler::xenolith::font::LabelBase::Style&&


# ::stappler::xenolith::font::LabelBase::prependTextWithStyle(stappler::WideStringView const&,stappler::xenolith::font::LabelBase::Style&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::WideStringView const&
* stappler::xenolith::font::LabelBase::Style&&


# ::stappler::xenolith::font::LabelBase::clearStyles()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::font::LabelBase::getStyles() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* StyleVec&

# ::stappler::xenolith::font::LabelBase::getCompiledStyles() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* StyleVec&

# ::stappler::xenolith::font::LabelBase::setStyles(stappler::xenolith::font::LabelBase::StyleVec&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::font::LabelBase::StyleVec&&


# ::stappler::xenolith::font::LabelBase::setStyles(stappler::xenolith::font::LabelBase::StyleVec const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::font::LabelBase::StyleVec const&


# ::stappler::xenolith::font::LabelBase::updateFormatSpec(stappler::xenolith::font::TextLayout*,stappler::xenolith::font::LabelBase::StyleVec const&,float,uint8_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::font::TextLayout*
* stappler::xenolith::font::LabelBase::StyleVec const&
* float
* uint8_t

Возвращает:
* bool

# ::stappler::xenolith::font::LabelBase::empty() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::font::LabelBase::setAlignment(stappler::font::TextAlign)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::font::TextAlign


# ::stappler::xenolith::font::LabelBase::getAlignment() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::font::TextAlign

# ::stappler::xenolith::font::LabelBase::setWidth(float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float


# ::stappler::xenolith::font::LabelBase::getWidth() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* float

# ::stappler::xenolith::font::LabelBase::setTextIndent(float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float


# ::stappler::xenolith::font::LabelBase::getTextIndent() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* float

# ::stappler::xenolith::font::LabelBase::setTextTransform(stappler::font::TextTransform const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::font::TextTransform const&


# ::stappler::xenolith::font::LabelBase::getTextTransform() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::font::TextTransform

# ::stappler::xenolith::font::LabelBase::setTextDecoration(stappler::font::TextDecoration const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::font::TextDecoration const&


# ::stappler::xenolith::font::LabelBase::getTextDecoration() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::font::TextDecoration

# ::stappler::xenolith::font::LabelBase::setHyphens(stappler::font::Hyphens const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::font::Hyphens const&


# ::stappler::xenolith::font::LabelBase::getHyphens() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::font::Hyphens

# ::stappler::xenolith::font::LabelBase::setVerticalAlign(stappler::font::VerticalAlign const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::font::VerticalAlign const&


# ::stappler::xenolith::font::LabelBase::getVerticalAlign() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::font::VerticalAlign

# ::stappler::xenolith::font::LabelBase::setFontSize(uint16_t const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint16_t const&


# ::stappler::xenolith::font::LabelBase::setFontSize(stappler::font::FontSize const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::font::FontSize const&


# ::stappler::xenolith::font::LabelBase::getFontSize() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::font::FontSize

# ::stappler::xenolith::font::LabelBase::setFontStyle(stappler::font::FontStyle const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::font::FontStyle const&


# ::stappler::xenolith::font::LabelBase::getFontStyle() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::font::FontStyle

# ::stappler::xenolith::font::LabelBase::setFontWeight(stappler::font::FontWeight const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::font::FontWeight const&


# ::stappler::xenolith::font::LabelBase::getFontWeight() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::font::FontWeight

# ::stappler::xenolith::font::LabelBase::setFontStretch(stappler::font::FontStretch const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::font::FontStretch const&


# ::stappler::xenolith::font::LabelBase::getFontStretch() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::font::FontStretch

# ::stappler::xenolith::font::LabelBase::setFontGrade(stappler::font::FontGrade const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::font::FontGrade const&


# ::stappler::xenolith::font::LabelBase::getFontGrade() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::font::FontGrade

# ::stappler::xenolith::font::LabelBase::setFontFamily(stappler::StringView const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView const&


# ::stappler::xenolith::font::LabelBase::getFontFamily() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::StringView

# ::stappler::xenolith::font::LabelBase::setLineHeightAbsolute(float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float


# ::stappler::xenolith::font::LabelBase::setLineHeightRelative(float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float


# ::stappler::xenolith::font::LabelBase::getLineHeight() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* float

# ::stappler::xenolith::font::LabelBase::isLineHeightAbsolute() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::font::LabelBase::setMaxWidth(float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float


# ::stappler::xenolith::font::LabelBase::getMaxWidth() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* float

# ::stappler::xenolith::font::LabelBase::setMaxLines(size_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* size_t


# ::stappler::xenolith::font::LabelBase::getMaxLines() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* size_t

# ::stappler::xenolith::font::LabelBase::setMaxChars(size_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* size_t


# ::stappler::xenolith::font::LabelBase::getMaxChars() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* size_t

# ::stappler::xenolith::font::LabelBase::setOpticalAlignment(bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* bool


# ::stappler::xenolith::font::LabelBase::isOpticallyAligned() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::font::LabelBase::setFillerChar(char16_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* char16_t


# ::stappler::xenolith::font::LabelBase::getFillerChar() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* char16_t

# ::stappler::xenolith::font::LabelBase::setLocaleEnabled(bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* bool


# ::stappler::xenolith::font::LabelBase::isLocaleEnabled() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::font::LabelBase::setPersistentLayout(bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* bool


# ::stappler::xenolith::font::LabelBase::isPersistentLayout() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::font::LabelBase::hasLocaleTags(stappler::WideStringView const&) const

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::WideStringView const&

Возвращает:
* bool

# ::stappler::xenolith::font::LabelBase::resolveLocaleTags(stappler::WideStringView const&) const

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::WideStringView const&

Возвращает:
* stappler::mem_std::WideString

# ::stappler::xenolith::font::LabelBase::specializeStyle(stappler::xenolith::font::LabelBase::DescriptionStyle&,float) const

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::font::LabelBase::DescriptionStyle&
* float


# ::stappler::xenolith::font::LabelBase::setLabelDirty()

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::font::LabelBase::_string16

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::mem_std::WideString


# ::stappler::xenolith::font::LabelBase::_string8

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::mem_std::String


# ::stappler::xenolith::font::LabelBase::_width

## BRIEF

## CONTENT

Доступ: protected

Тип: float


# ::stappler::xenolith::font::LabelBase::_textIndent

## BRIEF

## CONTENT

Доступ: protected

Тип: float


# ::stappler::xenolith::font::LabelBase::_labelDensity

## BRIEF

## CONTENT

Доступ: protected

Тип: float


# ::stappler::xenolith::font::LabelBase::_alignment

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::font::TextAlign


# ::stappler::xenolith::font::LabelBase::_localeEnabled

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::font::LabelBase::_labelDirty

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::font::LabelBase::_isLineHeightAbsolute

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::font::LabelBase::_lineHeight

## BRIEF

## CONTENT

Доступ: protected

Тип: float


# ::stappler::xenolith::font::LabelBase::_fontFamilyStorage

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::mem_std::String


# ::stappler::xenolith::font::LabelBase::_style

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::font::LabelBase::DescriptionStyle


# ::stappler::xenolith::font::LabelBase::_styles

## BRIEF

## CONTENT

Доступ: protected

Тип: StyleVec


# ::stappler::xenolith::font::LabelBase::_compiledStyles

## BRIEF

## CONTENT

Доступ: protected

Тип: StyleVec


# ::stappler::xenolith::font::LabelBase::_charsWidth

## BRIEF

## CONTENT

Доступ: protected

Тип: uint16_t


# ::stappler::xenolith::font::LabelBase::_charsHeight

## BRIEF

## CONTENT

Доступ: protected

Тип: uint16_t


# ::stappler::xenolith::font::LabelBase::_maxWidth

## BRIEF

## CONTENT

Доступ: protected

Тип: float


# ::stappler::xenolith::font::LabelBase::_maxLines

## BRIEF

## CONTENT

Доступ: protected

Тип: size_t


# ::stappler::xenolith::font::LabelBase::_maxChars

## BRIEF

## CONTENT

Доступ: protected

Тип: size_t


# ::stappler::xenolith::font::LabelBase::_opticalAlignment

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::font::LabelBase::_emplaceAllChars

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::font::LabelBase::_fillerChar

## BRIEF

## CONTENT

Доступ: protected

Тип: char16_t


# ::stappler::xenolith::font::LabelBase::_persistentLayout

## BRIEF

## CONTENT

Доступ: protected

Тип: bool
