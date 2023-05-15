Title: SPLog.h


# LIBSTAPPLER_COMMON_UTILS_SPLOG_H_

## BRIEF

## CONTENT


# ::stappler::log::CustomLog

## BRIEF

## CONTENT


# ::stappler::log::CustomLog::VA

## BRIEF

## CONTENT


# ::stappler::log::CustomLog::VA::text

## BRIEF

## CONTENT

Тип: stappler::StringView


# ::stappler::log::CustomLog::VA::

## BRIEF

## CONTENT


# ::stappler::log::CustomLog::VA::format

## BRIEF

## CONTENT

Тип: char const*


# ::stappler::log::CustomLog::VA::args

## BRIEF

## CONTENT

Тип: va_list


# ::stappler::log::CustomLog::VA::format

## BRIEF

## CONTENT

Тип: 


# ::stappler::log::CustomLog::VA::VA()

## BRIEF

## CONTENT


# ::stappler::log::CustomLog::Type

## BRIEF

## CONTENT

Значения:
* Text
* Format


# ::stappler::log::CustomLog::log_fn

## BRIEF

## CONTENT


# ::stappler::log::CustomLog::CustomLog(stappler::log::CustomLog::log_fn)

## BRIEF

## CONTENT

Параметры:
* stappler::log::CustomLog::log_fn


# ::stappler::log::CustomLog::~CustomLog()

## BRIEF

## CONTENT


# ::stappler::log::CustomLog::CustomLog(stappler::log::CustomLog const&)

## BRIEF

## CONTENT

Параметры:
* stappler::log::CustomLog const&


# ::stappler::log::CustomLog::operator=(stappler::log::CustomLog const&)

## BRIEF

## CONTENT

Параметры:
* stappler::log::CustomLog const&

Возвращает:
* stappler::log::CustomLog&

# ::stappler::log::CustomLog::CustomLog(stappler::log::CustomLog&&)

## BRIEF

## CONTENT

Параметры:
* stappler::log::CustomLog&&


# ::stappler::log::CustomLog::operator=(stappler::log::CustomLog&&)

## BRIEF

## CONTENT

Параметры:
* stappler::log::CustomLog&&

Возвращает:
* stappler::log::CustomLog&

# ::stappler::log::CustomLog::fn

## BRIEF

## CONTENT

Тип: log_fn


# ::stappler::log::CustomLog::manager

## BRIEF

## CONTENT

Тип: Rc<RefBase<memory::StandartInterface>>


# ::stappler::log::format(stappler::StringView const&,char const*,...)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView const&
* char const*


# ::stappler::log::text(stappler::StringView const&,stappler::StringView const&)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView const&
* stappler::StringView const&


# ::stappler::log::vtext<typename>(stappler::StringView const&,Args &&...)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Args

Параметры:
* stappler::StringView const&
* Args &&...


# 

## BRIEF

## CONTENT
