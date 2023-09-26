Title: XLViewCommandLine.h


# XENOLITH_PLATFORM_XLVIEWCOMMANDLINE_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::ViewCommandLineData

## BRIEF

## CONTENT


# ::stappler::xenolith::ViewCommandLineData::bundleName

## BRIEF

## CONTENT

Тип: stappler::mem_std::String


# ::stappler::xenolith::ViewCommandLineData::applicationName

## BRIEF

## CONTENT

Тип: stappler::mem_std::String


# ::stappler::xenolith::ViewCommandLineData::applicationVersion

## BRIEF

## CONTENT

Тип: stappler::mem_std::String


# ::stappler::xenolith::ViewCommandLineData::userLanguage

## BRIEF

## CONTENT

Тип: stappler::mem_std::String


# ::stappler::xenolith::ViewCommandLineData::userAgent

## BRIEF

## CONTENT

Тип: stappler::mem_std::String


# ::stappler::xenolith::ViewCommandLineData::launchUrl

## BRIEF

## CONTENT

Тип: stappler::mem_std::String


# ::stappler::xenolith::ViewCommandLineData::screenSize

## BRIEF

## CONTENT

Тип: stappler::xenolith::Extent2


# ::stappler::xenolith::ViewCommandLineData::viewDecoration

## BRIEF

## CONTENT

Тип: stappler::xenolith::Padding


# ::stappler::xenolith::ViewCommandLineData::density

## BRIEF

## CONTENT

Тип: float


# ::stappler::xenolith::ViewCommandLineData::isPhone

## BRIEF

## CONTENT

Тип: bool


# ::stappler::xenolith::ViewCommandLineData::isFixed

## BRIEF

## CONTENT

Тип: bool


# ::stappler::xenolith::ViewCommandLineData::renderdoc

## BRIEF

## CONTENT

Тип: bool


# ::stappler::xenolith::ViewCommandLineData::validation

## BRIEF

## CONTENT

Тип: bool


# ::stappler::xenolith::ViewCommandLineData::verbose

## BRIEF

## CONTENT

Тип: bool


# ::stappler::xenolith::ViewCommandLineData::help

## BRIEF

## CONTENT

Тип: bool


# ::stappler::xenolith::ViewCommandLineData::encode() const

## BRIEF

## CONTENT

Возвращает:
* stappler::mem_std::Value

# ::stappler::xenolith::parseViewCommandLineSwitch(stappler::xenolith::ViewCommandLineData&,char,char const*)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::ViewCommandLineData&
* char
* char const*

Возвращает:
* int

# ::stappler::xenolith::parseViewCommandLineString(stappler::xenolith::ViewCommandLineData&,stappler::StringView const&,int,char const*[])

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::ViewCommandLineData&
* stappler::StringView const&
* int
* char const*[]

Возвращает:
* int