Title: SPSvgReader.h


# MODULES_VG_SPSVGREADER_H_

## BRIEF

## CONTENT


# ::stappler::vg::Metric

## BRIEF

## CONTENT


# ::stappler::vg::Metric::Units

## BRIEF

## CONTENT

Значения:
* Percent
* Px
* Em
* Rem
* Auto
* Dpi
* Dppx
* Contain
* Cover
* Vw
* Vh
* VMin
* VMax


# ::stappler::vg::Metric::isAuto() const

## BRIEF

## CONTENT

Возвращает:
* bool

# ::stappler::vg::Metric::isFixed() const

## BRIEF

## CONTENT

Возвращает:
* bool

# ::stappler::vg::Metric::value

## BRIEF

## CONTENT

Тип: float


# ::stappler::vg::Metric::metric

## BRIEF

## CONTENT

Тип: stappler::vg::Metric::Units


# ::stappler::vg::Metric::Metric(float,stappler::vg::Metric::Units)

## BRIEF

## CONTENT

Параметры:
* float
* stappler::vg::Metric::Units


# ::stappler::vg::Metric::Metric()

## BRIEF

## CONTENT


# ::stappler::vg::Metric::readStyleValue(stappler::StringView,bool,bool)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView
* bool
* bool

Возвращает:
* bool

# ::stappler::vg::SvgTag

## BRIEF

## CONTENT

Базовые классы:
* html::Tag<StringView>


# ::stappler::vg::SvgTag::SvgTag(stappler::StringView&)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView&


# ::stappler::vg::SvgTag::Shape

## BRIEF

## CONTENT

Значения:
* None
* Rect
* Circle
* Ellipse
* Line
* Polyline
* Polygon
* Use


# ::stappler::vg::SvgTag::shape

## BRIEF

## CONTENT

Тип: enum Shape


# ::stappler::vg::SvgTag::mat

## BRIEF

## CONTENT

Тип: stappler::geom::Mat4


# ::stappler::vg::SvgTag::id

## BRIEF

## CONTENT

Тип: stappler::StringView


# ::stappler::vg::SvgTag::ref

## BRIEF

## CONTENT

Тип: stappler::StringView


# ::stappler::vg::SvgTag::rpath

## BRIEF

## CONTENT

Тип: stappler::vg::VectorPath


# ::stappler::vg::SvgTag::getPath()

## BRIEF

## CONTENT

Возвращает:
* stappler::vg::VectorPath&

# ::stappler::vg::SvgReader

## BRIEF

## CONTENT


# ::stappler::vg::SvgReader::Parser

## BRIEF

## CONTENT


# ::stappler::vg::SvgReader::Tag

## BRIEF

## CONTENT


# ::stappler::vg::SvgReader::StringReader

## BRIEF

## CONTENT


# ::stappler::vg::SvgReader::SvgReader()

## BRIEF

## CONTENT


# ::stappler::vg::SvgReader::onBeginTag(stappler::vg::SvgReader::Parser&,stappler::vg::SvgReader::Tag&)

## BRIEF

## CONTENT

Параметры:
* stappler::vg::SvgReader::Parser&
* stappler::vg::SvgReader::Tag&


# ::stappler::vg::SvgReader::onEndTag(stappler::vg::SvgReader::Parser&,stappler::vg::SvgReader::Tag&,bool)

## BRIEF

## CONTENT

Параметры:
* stappler::vg::SvgReader::Parser&
* stappler::vg::SvgReader::Tag&
* bool


# ::stappler::vg::SvgReader::onStyleParameter(stappler::vg::SvgReader::Tag&,stappler::vg::SvgReader::StringReader&,stappler::vg::SvgReader::StringReader&)

## BRIEF

## CONTENT

Параметры:
* stappler::vg::SvgReader::Tag&
* stappler::vg::SvgReader::StringReader&
* stappler::vg::SvgReader::StringReader&


# ::stappler::vg::SvgReader::onStyle(stappler::vg::SvgReader::Tag&,stappler::vg::SvgReader::StringReader&)

## BRIEF

## CONTENT

Параметры:
* stappler::vg::SvgReader::Tag&
* stappler::vg::SvgReader::StringReader&


# ::stappler::vg::SvgReader::onTagAttribute(stappler::vg::SvgReader::Parser&,stappler::vg::SvgReader::Tag&,stappler::vg::SvgReader::StringReader&,stappler::vg::SvgReader::StringReader&)

## BRIEF

## CONTENT

Параметры:
* stappler::vg::SvgReader::Parser&
* stappler::vg::SvgReader::Tag&
* stappler::vg::SvgReader::StringReader&
* stappler::vg::SvgReader::StringReader&


# ::stappler::vg::SvgReader::onPushTag(stappler::vg::SvgReader::Parser&,stappler::vg::SvgReader::Tag&)

## BRIEF

## CONTENT

Параметры:
* stappler::vg::SvgReader::Parser&
* stappler::vg::SvgReader::Tag&


# ::stappler::vg::SvgReader::onPopTag(stappler::vg::SvgReader::Parser&,stappler::vg::SvgReader::Tag&)

## BRIEF

## CONTENT

Параметры:
* stappler::vg::SvgReader::Parser&
* stappler::vg::SvgReader::Tag&


# ::stappler::vg::SvgReader::onInlineTag(stappler::vg::SvgReader::Parser&,stappler::vg::SvgReader::Tag&)

## BRIEF

## CONTENT

Параметры:
* stappler::vg::SvgReader::Parser&
* stappler::vg::SvgReader::Tag&


# ::stappler::vg::SvgReader::_defs

## BRIEF

## CONTENT

Тип: bool


# ::stappler::vg::SvgReader::_squareLength

## BRIEF

## CONTENT

Тип: float


# ::stappler::vg::SvgReader::_width

## BRIEF

## CONTENT

Тип: float


# ::stappler::vg::SvgReader::_height

## BRIEF

## CONTENT

Тип: float


# ::stappler::vg::SvgReader::_nextId

## BRIEF

## CONTENT

Тип: uint16_t


# ::stappler::vg::SvgReader::_viewBox

## BRIEF

## CONTENT

Тип: stappler::geom::Rect


# ::stappler::vg::SvgReader::_drawOrder

## BRIEF

## CONTENT

Тип: Interface::VectorType<PathXRef>


# ::stappler::vg::SvgReader::_paths

## BRIEF

## CONTENT

Тип: Interface::MapType<Interface::StringType, VectorPath>
