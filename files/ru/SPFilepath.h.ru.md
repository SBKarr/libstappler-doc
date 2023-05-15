Title: SPFilepath.h


# MODULES_FILESYSTEM_SPFILEPATH_H_

## BRIEF

## CONTENT


# ::stappler::FilePath

## BRIEF

## CONTENT


# ::stappler::filepath::isAbsolute(stappler::StringView)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView

Возвращает:
* bool

# ::stappler::filepath::isCanonical(stappler::StringView)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView

Возвращает:
* bool

# ::stappler::filepath::isBundled(stappler::StringView)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView

Возвращает:
* bool

# ::stappler::filepath::isAboveRoot(stappler::StringView)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView

Возвращает:
* bool

# ::stappler::filepath::validatePath(stappler::StringView)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView

Возвращает:
* bool

# ::stappler::filepath::reconstructPath<typename>(stappler::StringView)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface

Параметры:
* stappler::StringView

Возвращает:
* typename Interface::StringType

# ::stappler::filepath::absolute<typename>(stappler::StringView,bool)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface

Параметры:
* stappler::StringView
* bool

Возвращает:
* typename Interface::StringType

# ::stappler::filepath::canonical<typename>(stappler::StringView)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface

Параметры:
* stappler::StringView

Возвращает:
* typename Interface::StringType

# ::stappler::filepath::root(stappler::StringView)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView

Возвращает:
* stappler::StringView

# ::stappler::filepath::lastComponent(stappler::StringView)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView

Возвращает:
* stappler::StringView

# ::stappler::filepath::lastComponent(stappler::StringView,size_t)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView
* size_t

Возвращает:
* stappler::StringView

# ::stappler::filepath::fullExtension(stappler::StringView)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView

Возвращает:
* stappler::StringView

# ::stappler::filepath::lastExtension(stappler::StringView)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView

Возвращает:
* stappler::StringView

# ::stappler::filepath::name(stappler::StringView)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView

Возвращает:
* stappler::StringView

# ::stappler::filepath::extensionCount(stappler::StringView)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView

Возвращает:
* size_t

# ::stappler::filepath::split<typename>(stappler::StringView)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface

Параметры:
* stappler::StringView

Возвращает:
* typename Interface::template VectorType<stappler::StringView>

# ::stappler::filepath::split(stappler::StringView,Callback<void (stappler::StringView)> const&)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView
* Callback<void (stappler::StringView)> const&


# ::stappler::filepath::merge<typename>(stappler::StringView,stappler::StringView)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface

Параметры:
* stappler::StringView
* stappler::StringView

Возвращает:
* typename Interface::StringType

# ::stappler::filepath::merge(std::vector<std::string> const&)

## BRIEF

## CONTENT

Параметры:
* std::vector<std::string> const&

Возвращает:
* std::string

# ::stappler::filepath::merge(memory::vector<memory::string> const&)

## BRIEF

## CONTENT

Параметры:
* memory::vector<memory::string> const&

Возвращает:
* memory::string

# ::stappler::filepath::merge(std::vector<StringView> const&)

## BRIEF

## CONTENT

Параметры:
* std::vector<StringView> const&

Возвращает:
* std::string

# ::stappler::filepath::merge(memory::vector<StringView> const&)

## BRIEF

## CONTENT

Параметры:
* memory::vector<StringView> const&

Возвращает:
* memory::string

# ::stappler::filepath::merge<typename,class>(stappler::StringView,stappler::StringView,Args &&...)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface
* class Args

Параметры:
* stappler::StringView
* stappler::StringView
* Args &&...

Возвращает:
* typename Interface::StringType

# ::stappler::filepath::extensionForContentType(stappler::StringView)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView

Возвращает:
* stappler::StringView

# ::stappler::filepath::replace<typename>(stappler::StringView,stappler::StringView,stappler::StringView)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface

Параметры:
* stappler::StringView
* stappler::StringView
* stappler::StringView

Возвращает:
* typename Interface::StringType

# ::stappler::filepath::reconstructPath<typename>(stappler::StringView)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface

Параметры:
* stappler::StringView

Возвращает:
* typename Interface::StringType

# ::stappler::filepath::merge<typename>(stappler::StringView,stappler::StringView)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface

Параметры:
* stappler::StringView
* stappler::StringView

Возвращает:
* typename Interface::StringType

# ::stappler::filepath::split<typename>(stappler::StringView)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface

Параметры:
* stappler::StringView

Возвращает:
* typename Interface::template VectorType<stappler::StringView>

# ::stappler::filepath::split(stappler::StringView,Callback<void (stappler::StringView)> const&)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView
* Callback<void (stappler::StringView)> const&


# ::stappler::filepath::replace<typename>(stappler::StringView,stappler::StringView,stappler::StringView)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface

Параметры:
* stappler::StringView
* stappler::StringView
* stappler::StringView

Возвращает:
* typename Interface::StringType