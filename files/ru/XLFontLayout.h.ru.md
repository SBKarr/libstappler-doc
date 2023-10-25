Title: XLFontLayout.h


# XENOLITH_FONT_XLFONTLAYOUT_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::font::FontLayout

## BRIEF

## CONTENT

Базовые классы:
* Ref


# ::stappler::xenolith::font::FontLayout::constructName(stappler::StringView,stappler::xenolith::font::FontSpecializationVector const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView
* stappler::xenolith::font::FontSpecializationVector const&

Возвращает:
* stappler::mem_std::String

# ::stappler::xenolith::font::FontLayout::~FontLayout()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::font::FontLayout::FontLayout()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::font::FontLayout::init(stappler::mem_std::String&&,stappler::StringView,stappler::xenolith::font::FontSpecializationVector&&,Rc<stappler::xenolith::font::FontFaceData>&&,stappler::xenolith::font::FontLibrary*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::mem_std::String&&
* stappler::StringView
* stappler::xenolith::font::FontSpecializationVector&&
* Rc<stappler::xenolith::font::FontFaceData>&&
* stappler::xenolith::font::FontLibrary*

Возвращает:
* bool

# ::stappler::xenolith::font::FontLayout::init(stappler::mem_std::String&&,stappler::StringView,stappler::xenolith::font::FontSpecializationVector&&,Vector<Rc<stappler::xenolith::font::FontFaceData>>&&,stappler::xenolith::font::FontLibrary*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::mem_std::String&&
* stappler::StringView
* stappler::xenolith::font::FontSpecializationVector&&
* Vector<Rc<stappler::xenolith::font::FontFaceData>>&&
* stappler::xenolith::font::FontLibrary*

Возвращает:
* bool

# ::stappler::xenolith::font::FontLayout::touch(uint64_t,bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint64_t
* bool


# ::stappler::xenolith::font::FontLayout::getAccessTime() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint64_t

# ::stappler::xenolith::font::FontLayout::isPersistent() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::font::FontLayout::getName() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::StringView

# ::stappler::xenolith::font::FontLayout::getFamily() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::StringView

# ::stappler::xenolith::font::FontLayout::getSpec() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::font::FontSpecializationVector const&

# ::stappler::xenolith::font::FontLayout::getFaceCount() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* size_t

# ::stappler::xenolith::font::FontLayout::getSource(size_t) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* size_t

Возвращает:
* Rc<stappler::xenolith::font::FontFaceData>

# ::stappler::xenolith::font::FontLayout::getLibrary() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::font::FontLibrary*

# ::stappler::xenolith::font::FontLayout::addString(stappler::xenolith::font::FontCharString const&,Vector<char16_t>&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::font::FontCharString const&
* Vector<char16_t>&

Возвращает:
* bool

# ::stappler::xenolith::font::FontLayout::getFontHeight() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint16_t

# ::stappler::xenolith::font::FontLayout::getKerningAmount(char16_t,char16_t,uint16_t) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* char16_t
* char16_t
* uint16_t

Возвращает:
* int16_t

# ::stappler::xenolith::font::FontLayout::getMetrics() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::font::Metrics

# ::stappler::xenolith::font::FontLayout::getChar(char16_t,uint16_t&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* char16_t
* uint16_t&

Возвращает:
* stappler::xenolith::font::CharLayout

# ::stappler::xenolith::font::FontLayout::addTextureChars(SpanView<stappler::xenolith::font::CharSpec>) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* SpanView<stappler::xenolith::font::CharSpec>

Возвращает:
* bool

# ::stappler::xenolith::font::FontLayout::getFaces() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Vector<Rc<stappler::xenolith::font::FontFaceObject>> const&

# ::stappler::xenolith::font::FontLayout::_accessTime

## BRIEF

## CONTENT

Доступ: protected

Тип: std::atomic<uint64_t>


# ::stappler::xenolith::font::FontLayout::_persistent

## BRIEF

## CONTENT

Доступ: protected

Тип: std::atomic<bool>


# ::stappler::xenolith::font::FontLayout::_name

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::mem_std::String


# ::stappler::xenolith::font::FontLayout::_family

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::mem_std::String


# ::stappler::xenolith::font::FontLayout::_metrics

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::font::Metrics


# ::stappler::xenolith::font::FontLayout::_spec

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::font::FontSpecializationVector


# ::stappler::xenolith::font::FontLayout::_sources

## BRIEF

## CONTENT

Доступ: protected

Тип: Vector<Rc<stappler::xenolith::font::FontFaceData>>


# ::stappler::xenolith::font::FontLayout::_faces

## BRIEF

## CONTENT

Доступ: protected

Тип: Vector<Rc<stappler::xenolith::font::FontFaceObject>>


# ::stappler::xenolith::font::FontLayout::_library

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::font::FontLibrary*


# ::stappler::xenolith::font::FontLayout::_mutex

## BRIEF

## CONTENT

Доступ: protected

Тип: std::shared_mutex
