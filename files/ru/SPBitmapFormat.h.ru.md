Title: SPBitmapFormat.h


# MODULES_BITMAP_SPBITMAPFORMAT_H_

## BRIEF

## CONTENT


# ::stappler::bitmap::FileFormat

## BRIEF

## CONTENT

Значения:
* Png
* Jpeg
* WebpLossless
* WebpLossy
* Svg
* Gif
* Tiff
* Custom


# ::stappler::bitmap::AlphaFormat

## BRIEF

## CONTENT

Значения:
* Premultiplied
* Unpremultiplied
* Opaque


# ::stappler::bitmap::PixelFormat

## BRIEF

## CONTENT

Значения:
* Auto
* A8
* I8
* IA88
* RGB888
* RGBA8888


# ::stappler::bitmap::ImageInfo

## BRIEF

## CONTENT


# ::stappler::bitmap::ImageInfo::color

## BRIEF

## CONTENT

Тип: stappler::bitmap::PixelFormat


# ::stappler::bitmap::ImageInfo::alpha

## BRIEF

## CONTENT

Тип: stappler::bitmap::AlphaFormat


# ::stappler::bitmap::ImageInfo::width

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::bitmap::ImageInfo::height

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::bitmap::ImageInfo::stride

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::bitmap::ImageInfo::format

## BRIEF

## CONTENT

Тип: stappler::bitmap::BitmapFormat const*


# ::stappler::bitmap::StrideFn

## BRIEF

## CONTENT


# ::stappler::bitmap::getImageSize(stappler::StringView,uint32_t&,uint32_t&)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView
* uint32_t&
* uint32_t&

Возвращает:
* bool

# ::stappler::bitmap::getImageSize(io::Producer const&,uint32_t&,uint32_t&)

## BRIEF

## CONTENT

Параметры:
* io::Producer const&
* uint32_t&
* uint32_t&

Возвращает:
* bool

# ::stappler::bitmap::getImageInfo(stappler::BytesView,stappler::bitmap::ImageInfo&)

## BRIEF

## CONTENT

Параметры:
* stappler::BytesView
* stappler::bitmap::ImageInfo&

Возвращает:
* bool

# ::stappler::bitmap::isImage(stappler::StringView,bool)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView
* bool

Возвращает:
* bool

# ::stappler::bitmap::isImage(io::Producer const&,bool)

## BRIEF

## CONTENT

Параметры:
* io::Producer const&
* bool

Возвращает:
* bool

# ::stappler::bitmap::isImage(uint8_t const*,size_t,bool)

## BRIEF

## CONTENT

Параметры:
* uint8_t const*
* size_t
* bool

Возвращает:
* bool

# ::stappler::bitmap::detectFormat(stappler::StringView)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView

Возвращает:
* Pair<stappler::bitmap::FileFormat, stappler::StringView>

# ::stappler::bitmap::detectFormat(io::Producer const&)

## BRIEF

## CONTENT

Параметры:
* io::Producer const&

Возвращает:
* Pair<stappler::bitmap::FileFormat, stappler::StringView>

# ::stappler::bitmap::detectFormat(uint8_t const*,size_t)

## BRIEF

## CONTENT

Параметры:
* uint8_t const*
* size_t

Возвращает:
* Pair<stappler::bitmap::FileFormat, stappler::StringView>

# ::stappler::bitmap::getMimeType(stappler::bitmap::FileFormat)

## BRIEF

## CONTENT

Параметры:
* stappler::bitmap::FileFormat

Возвращает:
* stappler::StringView

# ::stappler::bitmap::getMimeType(stappler::StringView)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView

Возвращает:
* stappler::StringView

# ::stappler::bitmap::check(stappler::bitmap::FileFormat,uint8_t const*,size_t)

## BRIEF

## CONTENT

Параметры:
* stappler::bitmap::FileFormat
* uint8_t const*
* size_t

Возвращает:
* bool

# ::stappler::bitmap::check(stappler::StringView,uint8_t const*,size_t)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView
* uint8_t const*
* size_t

Возвращает:
* bool

# ::stappler::bitmap::getBytesPerPixel(stappler::bitmap::PixelFormat)

## BRIEF

## CONTENT

Параметры:
* stappler::bitmap::PixelFormat

Возвращает:
* uint8_t

# ::stappler::bitmap::convertLine<stappler::bitmap::PixelFormat,stappler::bitmap::PixelFormat>(uint8_t const*,uint8_t*,uint32_t,uint32_t)

## BRIEF

## CONTENT

Параметры шаблона:
* stappler::bitmap::PixelFormat Source
* stappler::bitmap::PixelFormat Target

Параметры:
* uint8_t const*
* uint8_t*
* uint32_t
* uint32_t


# ::stappler::bitmap::convertData<stappler::bitmap::PixelFormat,stappler::bitmap::PixelFormat>(stappler::BytesView,stappler::BytesView,uint32_t,uint32_t)

## BRIEF

## CONTENT

Параметры шаблона:
* stappler::bitmap::PixelFormat Source
* stappler::bitmap::PixelFormat Target

Параметры:
* stappler::BytesView
* stappler::BytesView
* uint32_t
* uint32_t

Возвращает:
* bool

# ::stappler::bitmap::BitmapWriter

## BRIEF

## CONTENT

Базовые классы:
* ImageInfo


# ::stappler::bitmap::BitmapWriter::target

## BRIEF

## CONTENT

Тип: void*


# ::stappler::bitmap::BitmapWriter::getStride

## BRIEF

## CONTENT

Тип: uint32_t(*)(void*,stappler::bitmap::PixelFormat,uint32_t)


# ::stappler::bitmap::BitmapWriter::push

## BRIEF

## CONTENT

Тип: void(*)(void*,uint8_t const*,uint32_t)


# ::stappler::bitmap::BitmapWriter::resize

## BRIEF

## CONTENT

Тип: void(*)(void*,uint32_t)


# ::stappler::bitmap::BitmapWriter::getData

## BRIEF

## CONTENT

Тип: uint8_t*(*)(void*,uint32_t)


# ::stappler::bitmap::BitmapWriter::assign

## BRIEF

## CONTENT

Тип: void(*)(void*,uint8_t const*,uint32_t)


# ::stappler::bitmap::BitmapWriter::clear

## BRIEF

## CONTENT

Тип: void(*)(void*)


# ::stappler::bitmap::BitmapFormat

## BRIEF

## CONTENT


# ::stappler::bitmap::BitmapFormat::Flags

## BRIEF

## CONTENT

Доступ: public

Значения:
* None
* Recognizable
* Readable
* Writable


# ::stappler::bitmap::BitmapFormat::check_fn

## BRIEF

## CONTENT

Доступ: public


# ::stappler::bitmap::BitmapFormat::size_fn

## BRIEF

## CONTENT

Доступ: public


# ::stappler::bitmap::BitmapFormat::info_fn

## BRIEF

## CONTENT

Доступ: public


# ::stappler::bitmap::BitmapFormat::load_fn

## BRIEF

## CONTENT

Доступ: public


# ::stappler::bitmap::BitmapFormat::write_fn

## BRIEF

## CONTENT

Доступ: public


# ::stappler::bitmap::BitmapFormat::save_fn

## BRIEF

## CONTENT

Доступ: public


# ::stappler::bitmap::BitmapFormat::add(stappler::bitmap::BitmapFormat&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::bitmap::BitmapFormat&&


# ::stappler::bitmap::BitmapFormat::BitmapFormat(stappler::bitmap::FileFormat,stappler::bitmap::BitmapFormat::check_fn const&,stappler::bitmap::BitmapFormat::size_fn const&,stappler::bitmap::BitmapFormat::info_fn const&,stappler::bitmap::BitmapFormat::load_fn const&,stappler::bitmap::BitmapFormat::write_fn const&,stappler::bitmap::BitmapFormat::save_fn const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::bitmap::FileFormat
* stappler::bitmap::BitmapFormat::check_fn const&
* stappler::bitmap::BitmapFormat::size_fn const&
* stappler::bitmap::BitmapFormat::info_fn const&
* stappler::bitmap::BitmapFormat::load_fn const&
* stappler::bitmap::BitmapFormat::write_fn const&
* stappler::bitmap::BitmapFormat::save_fn const&


# ::stappler::bitmap::BitmapFormat::BitmapFormat(stappler::StringView,stappler::StringView,stappler::bitmap::BitmapFormat::check_fn const&,stappler::bitmap::BitmapFormat::size_fn const&,stappler::bitmap::BitmapFormat::info_fn const&,stappler::bitmap::BitmapFormat::load_fn const&,stappler::bitmap::BitmapFormat::write_fn const&,stappler::bitmap::BitmapFormat::save_fn const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView
* stappler::StringView
* stappler::bitmap::BitmapFormat::check_fn const&
* stappler::bitmap::BitmapFormat::size_fn const&
* stappler::bitmap::BitmapFormat::info_fn const&
* stappler::bitmap::BitmapFormat::load_fn const&
* stappler::bitmap::BitmapFormat::write_fn const&
* stappler::bitmap::BitmapFormat::save_fn const&


# ::stappler::bitmap::BitmapFormat::getName() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::StringView

# ::stappler::bitmap::BitmapFormat::getMime() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::StringView

# ::stappler::bitmap::BitmapFormat::isRecognizable() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::bitmap::BitmapFormat::isReadable() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::bitmap::BitmapFormat::isWritable() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::bitmap::BitmapFormat::getFlags() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::bitmap::BitmapFormat::Flags

# ::stappler::bitmap::BitmapFormat::getFormat() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::bitmap::FileFormat

# ::stappler::bitmap::BitmapFormat::is(uint8_t const*,size_t) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint8_t const*
* size_t

Возвращает:
* bool

# ::stappler::bitmap::BitmapFormat::getSize(io::Producer const&,StackBuffer<512>&,uint32_t&,uint32_t&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* io::Producer const&
* StackBuffer<512>&
* uint32_t&
* uint32_t&

Возвращает:
* bool

# ::stappler::bitmap::BitmapFormat::getInfo(uint8_t const*,size_t,stappler::bitmap::ImageInfo&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint8_t const*
* size_t
* stappler::bitmap::ImageInfo&

Возвращает:
* bool

# ::stappler::bitmap::BitmapFormat::load(uint8_t const*,size_t,stappler::bitmap::BitmapWriter&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint8_t const*
* size_t
* stappler::bitmap::BitmapWriter&

Возвращает:
* bool

# ::stappler::bitmap::BitmapFormat::write(uint8_t const*,stappler::bitmap::BitmapWriter&,bool) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint8_t const*
* stappler::bitmap::BitmapWriter&
* bool

Возвращает:
* bool

# ::stappler::bitmap::BitmapFormat::save(stappler::StringView,uint8_t const*,stappler::bitmap::BitmapWriter&,bool) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView
* uint8_t const*
* stappler::bitmap::BitmapWriter&
* bool

Возвращает:
* bool

# ::stappler::bitmap::BitmapFormat::getCheckFn() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* check_fn

# ::stappler::bitmap::BitmapFormat::getSizeFn() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* size_fn

# ::stappler::bitmap::BitmapFormat::getInfoFn() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* info_fn

# ::stappler::bitmap::BitmapFormat::getLoadFn() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* load_fn

# ::stappler::bitmap::BitmapFormat::getWriteFn() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* write_fn

# ::stappler::bitmap::BitmapFormat::getSaveFn() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* save_fn

# ::stappler::bitmap::BitmapFormat::check_ptr

## BRIEF

## CONTENT

Доступ: protected

Тип: check_fn


# ::stappler::bitmap::BitmapFormat::size_ptr

## BRIEF

## CONTENT

Доступ: protected

Тип: size_fn


# ::stappler::bitmap::BitmapFormat::info_ptr

## BRIEF

## CONTENT

Доступ: protected

Тип: info_fn


# ::stappler::bitmap::BitmapFormat::load_ptr

## BRIEF

## CONTENT

Доступ: protected

Тип: load_fn


# ::stappler::bitmap::BitmapFormat::write_ptr

## BRIEF

## CONTENT

Доступ: protected

Тип: write_fn


# ::stappler::bitmap::BitmapFormat::save_ptr

## BRIEF

## CONTENT

Доступ: protected

Тип: save_fn


# ::stappler::bitmap::BitmapFormat::_flags

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::bitmap::BitmapFormat::Flags


# ::stappler::bitmap::BitmapFormat::_format

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::bitmap::FileFormat


# ::stappler::bitmap::BitmapFormat::_name

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::StringView


# ::stappler::bitmap::BitmapFormat::_mime

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::StringView


# ::stappler::bitmap::operator|(BitmapFormat::Flags const&,BitmapFormat::Flags const&)

## BRIEF

## CONTENT

Параметры:
* BitmapFormat::Flags const&
* BitmapFormat::Flags const&

Возвращает:
* BitmapFormat::Flags

# ::stappler::bitmap::operator&(BitmapFormat::Flags const&,BitmapFormat::Flags const&)

## BRIEF

## CONTENT

Параметры:
* BitmapFormat::Flags const&
* BitmapFormat::Flags const&

Возвращает:
* BitmapFormat::Flags

# ::stappler::bitmap::operator^(BitmapFormat::Flags const&,BitmapFormat::Flags const&)

## BRIEF

## CONTENT

Параметры:
* BitmapFormat::Flags const&
* BitmapFormat::Flags const&

Возвращает:
* BitmapFormat::Flags

# ::stappler::bitmap::operator|=(BitmapFormat::Flags&,BitmapFormat::Flags const&)

## BRIEF

## CONTENT

Параметры:
* BitmapFormat::Flags&
* BitmapFormat::Flags const&

Возвращает:
* BitmapFormat::Flags&

# ::stappler::bitmap::operator&=(BitmapFormat::Flags&,BitmapFormat::Flags const&)

## BRIEF

## CONTENT

Параметры:
* BitmapFormat::Flags&
* BitmapFormat::Flags const&

Возвращает:
* BitmapFormat::Flags&

# ::stappler::bitmap::operator^=(BitmapFormat::Flags&,BitmapFormat::Flags const&)

## BRIEF

## CONTENT

Параметры:
* BitmapFormat::Flags&
* BitmapFormat::Flags const&

Возвращает:
* BitmapFormat::Flags&

# ::stappler::bitmap::operator==(BitmapFormat::Flags const&,std::underlying_type<BitmapFormat::Flags>::type const&)

## BRIEF

## CONTENT

Параметры:
* BitmapFormat::Flags const&
* std::underlying_type<BitmapFormat::Flags>::type const&

Возвращает:
* bool

# ::stappler::bitmap::operator==(std::underlying_type<BitmapFormat::Flags>::type const&,BitmapFormat::Flags const&)

## BRIEF

## CONTENT

Параметры:
* std::underlying_type<BitmapFormat::Flags>::type const&
* BitmapFormat::Flags const&

Возвращает:
* bool

# ::stappler::bitmap::operator!=(BitmapFormat::Flags const&,std::underlying_type<BitmapFormat::Flags>::type const&)

## BRIEF

## CONTENT

Параметры:
* BitmapFormat::Flags const&
* std::underlying_type<BitmapFormat::Flags>::type const&

Возвращает:
* bool

# ::stappler::bitmap::operator!=(std::underlying_type<BitmapFormat::Flags>::type const&,BitmapFormat::Flags const&)

## BRIEF

## CONTENT

Параметры:
* std::underlying_type<BitmapFormat::Flags>::type const&
* BitmapFormat::Flags const&

Возвращает:
* bool

# ::stappler::bitmap::operator~(BitmapFormat::Flags const&)

## BRIEF

## CONTENT

Параметры:
* BitmapFormat::Flags const&

Возвращает:
* BitmapFormat::Flags