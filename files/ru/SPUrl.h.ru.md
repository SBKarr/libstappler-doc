Title: SPUrl.h


# LIBSTAPPLER_COMMON_UTILS_SPURL_H_

## BRIEF

## CONTENT


# ::stappler::UrlView

## BRIEF

## CONTENT


# ::stappler::UrlView::UrlToken

## BRIEF

## CONTENT

Значения:
* Scheme
* User
* Password
* Host
* Port
* Path
* Query
* Fragment
* Blank


# ::stappler::UrlView::scheme

## BRIEF

## CONTENT

Тип: stappler::StringView


# ::stappler::UrlView::user

## BRIEF

## CONTENT

Тип: stappler::StringView


# ::stappler::UrlView::password

## BRIEF

## CONTENT

Тип: stappler::StringView


# ::stappler::UrlView::host

## BRIEF

## CONTENT

Тип: stappler::StringView


# ::stappler::UrlView::port

## BRIEF

## CONTENT

Тип: stappler::StringView


# ::stappler::UrlView::path

## BRIEF

## CONTENT

Тип: stappler::StringView


# ::stappler::UrlView::query

## BRIEF

## CONTENT

Тип: stappler::StringView


# ::stappler::UrlView::fragment

## BRIEF

## CONTENT

Тип: stappler::StringView


# ::stappler::UrlView::url

## BRIEF

## CONTENT

Тип: stappler::StringView


# ::stappler::UrlView::isValidIdnTld(stappler::StringView)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView

Возвращает:
* bool

# ::stappler::UrlView::parseUrl(stappler::StringView&,Callback<void (stappler::StringViewUtf8, UrlView::UrlToken)> const&)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView&
* Callback<void (stappler::StringViewUtf8, UrlView::UrlToken)> const&

Возвращает:
* bool

# ::stappler::UrlView::parsePath<typename>(stappler::StringView)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface

Параметры:
* stappler::StringView

Возвращает:
* typename Interface::template VectorType<stappler::StringView>

# ::stappler::UrlView::parseArgs<typename>(stappler::StringView,size_t)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface

Параметры:
* stappler::StringView
* size_t

Возвращает:
* data::ValueTemplate<Interface>

# ::stappler::UrlView::UrlView()

## BRIEF

## CONTENT


# ::stappler::UrlView::UrlView(stappler::StringView)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView


# ::stappler::UrlView::clear()

## BRIEF

## CONTENT


# ::stappler::UrlView::parse(stappler::StringView const&)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView const&

Возвращает:
* bool

# ::stappler::UrlView::parse(stappler::StringView&)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView&

Возвращает:
* bool

# ::stappler::UrlView::get<typename>() const

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface

Возвращает:
* typename Interface::StringType

# ::stappler::UrlView::isEmail() const

## BRIEF

## CONTENT

Возвращает:
* bool

# ::stappler::UrlView::isPath() const

## BRIEF

## CONTENT

Возвращает:
* bool