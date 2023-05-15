Title: SPFilesystem.h


# MODULES_FILESYSTEM_SPFILESYSTEM_H_

## BRIEF

## CONTENT


# ::stappler::filesystem::Access

## BRIEF

## CONTENT

Значения:
* Exists
* Read
* Write
* Execute


# ::stappler::filesystem::Stat

## BRIEF

## CONTENT


# ::stappler::filesystem::Stat::size

## BRIEF

## CONTENT

Тип: size_t


# ::stappler::filesystem::Stat::atime

## BRIEF

## CONTENT

Тип: stappler::Time


# ::stappler::filesystem::Stat::ctime

## BRIEF

## CONTENT

Тип: stappler::Time


# ::stappler::filesystem::Stat::mtime

## BRIEF

## CONTENT

Тип: stappler::Time


# ::stappler::filesystem::Stat::isDir

## BRIEF

## CONTENT

Тип: bool


# ::stappler::filesystem::File

## BRIEF

## CONTENT


# ::stappler::filesystem::File::Flags

## BRIEF

## CONTENT

Доступ: public

Значения:
* None
* DelOnClose


# ::stappler::filesystem::File::traits_type

## BRIEF

## CONTENT

Доступ: public


# ::stappler::filesystem::File::streamsize

## BRIEF

## CONTENT

Доступ: public


# ::stappler::filesystem::File::int_type

## BRIEF

## CONTENT

Доступ: public


# ::stappler::filesystem::File::open_tmp(char const*,bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* char const*
* bool

Возвращает:
* stappler::filesystem::File

# ::stappler::filesystem::File::File()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::filesystem::File::File(FILE*,stappler::filesystem::File::Flags)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* FILE*
* stappler::filesystem::File::Flags


# ::stappler::filesystem::File::File(void*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* void*


# ::stappler::filesystem::File::File(void*,size_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* void*
* size_t


# ::stappler::filesystem::File::~File()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::filesystem::File::File(stappler::filesystem::File&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::filesystem::File&&


# ::stappler::filesystem::File::operator=(stappler::filesystem::File&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::filesystem::File&&

Возвращает:
* stappler::filesystem::File&

# ::stappler::filesystem::File::File(stappler::filesystem::File const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::filesystem::File const&


# ::stappler::filesystem::File::operator=(stappler::filesystem::File const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::filesystem::File const&

Возвращает:
* stappler::filesystem::File&

# ::stappler::filesystem::File::read(uint8_t*,size_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint8_t*
* size_t

Возвращает:
* size_t

# ::stappler::filesystem::File::seek(int64_t,io::Seek)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* int64_t
* io::Seek

Возвращает:
* size_t

# ::stappler::filesystem::File::tell() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* size_t

# ::stappler::filesystem::File::size() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* size_t

# ::stappler::filesystem::File::xsgetc()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* int_type

# ::stappler::filesystem::File::xsputc(stappler::filesystem::File::int_type)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::filesystem::File::int_type

Возвращает:
* int_type

# ::stappler::filesystem::File::xsputn(char const*,stappler::filesystem::File::streamsize)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* char const*
* stappler::filesystem::File::streamsize

Возвращает:
* streamsize

# ::stappler::filesystem::File::xsgetn(char*,stappler::filesystem::File::streamsize)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* char*
* stappler::filesystem::File::streamsize

Возвращает:
* streamsize

# ::stappler::filesystem::File::eof() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::filesystem::File::close()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::filesystem::File::close_remove()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::filesystem::File::close_rename(stappler::StringView)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView

Возвращает:
* bool

# ::stappler::filesystem::File::is_open() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::filesystem::File::operator bool() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::filesystem::File::path() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* char const*

# ::stappler::filesystem::File::set_tmp_path(char const*)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* char const*


# ::stappler::filesystem::File::_isBundled

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::filesystem::File::_size

## BRIEF

## CONTENT

Доступ: protected

Тип: size_t


# ::stappler::filesystem::File::_flags

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::filesystem::File::Flags


# ::stappler::filesystem::File::_buf

## BRIEF

## CONTENT

Доступ: protected

Тип: char[256]


# ::stappler::filesystem::File::

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::filesystem::File::_nativeFile

## BRIEF

## CONTENT

Тип: FILE*


# ::stappler::filesystem::File::_platformFile

## BRIEF

## CONTENT

Тип: void*


# ::stappler::filesystem::exists(stappler::StringView)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView

Возвращает:
* bool

# ::stappler::filesystem::stat(stappler::StringView,stappler::filesystem::Stat&)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView
* stappler::filesystem::Stat&

Возвращает:
* bool

# ::stappler::filesystem::mkdir(stappler::StringView)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView

Возвращает:
* bool

# ::stappler::filesystem::mkdir_recursive(stappler::StringView,bool)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView
* bool

Возвращает:
* bool

# ::stappler::filesystem::touch(stappler::StringView)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView

Возвращает:
* bool

# ::stappler::filesystem::move(stappler::StringView,stappler::StringView)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView
* stappler::StringView

Возвращает:
* bool

# ::stappler::filesystem::copy(stappler::StringView,stappler::StringView,bool)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView
* stappler::StringView
* bool

Возвращает:
* bool

# ::stappler::filesystem::remove(stappler::StringView,bool,bool)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView
* bool
* bool

Возвращает:
* bool

# ::stappler::filesystem::ftw(stappler::StringView,Callback<void (stappler::StringView, bool)> const&,int,bool)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView
* Callback<void (stappler::StringView, bool)> const&
* int
* bool


# ::stappler::filesystem::ftw_b(stappler::StringView,Callback<bool (stappler::StringView, bool)> const&,int,bool)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView
* Callback<bool (stappler::StringView, bool)> const&
* int
* bool

Возвращает:
* bool

# ::stappler::filesystem::writablePath<typename>(stappler::StringView,bool)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface

Параметры:
* stappler::StringView
* bool

Возвращает:
* typename Interface::StringType

# ::stappler::filesystem::writablePathReadOnly<typename>(stappler::StringView,bool)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface

Параметры:
* stappler::StringView
* bool

Возвращает:
* typename Interface::StringType

# ::stappler::filesystem::documentsPath<typename>(stappler::StringView,bool)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface

Параметры:
* stappler::StringView
* bool

Возвращает:
* typename Interface::StringType

# ::stappler::filesystem::documentsPathReadOnly<typename>(stappler::StringView,bool)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface

Параметры:
* stappler::StringView
* bool

Возвращает:
* typename Interface::StringType

# ::stappler::filesystem::currentDir<typename>(stappler::StringView,bool)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface

Параметры:
* stappler::StringView
* bool

Возвращает:
* typename Interface::StringType

# ::stappler::filesystem::cachesPath<typename>(stappler::StringView,bool)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface

Параметры:
* stappler::StringView
* bool

Возвращает:
* typename Interface::StringType

# ::stappler::filesystem::cachesPathReadOnly<typename>(stappler::StringView,bool)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface

Параметры:
* stappler::StringView
* bool

Возвращает:
* typename Interface::StringType

# ::stappler::filesystem::write(stappler::StringView,uint8_t const*,size_t)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView
* uint8_t const*
* size_t

Возвращает:
* bool

# ::stappler::filesystem::write<typename>(stappler::StringView,BytesView const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename BytesView

Параметры:
* stappler::StringView
* BytesView const&

Возвращает:
* bool

# ::stappler::filesystem::openForReading(stappler::StringView)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView

Возвращает:
* stappler::filesystem::File

# ::stappler::filesystem::readTextFile<typename>(stappler::StringView)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface

Параметры:
* stappler::StringView

Возвращает:
* typename Interface::StringType

# ::stappler::filesystem::readIntoBuffer(uint8_t*,stappler::StringView,size_t,size_t)

## BRIEF

## CONTENT

Параметры:
* uint8_t*
* stappler::StringView
* size_t
* size_t

Возвращает:
* bool

# ::stappler::filesystem::readWithConsumer(io::Consumer const&,uint8_t*,size_t,stappler::StringView,size_t,size_t)

## BRIEF

## CONTENT

Параметры:
* io::Consumer const&
* uint8_t*
* size_t
* stappler::StringView
* size_t
* size_t

Возвращает:
* bool

# ::stappler::filesystem::readWithConsumer<size_t>(io::Consumer const&,stappler::StringView,size_t,size_t)

## BRIEF

## CONTENT

Параметры шаблона:
* size_t Buffer

Параметры:
* io::Consumer const&
* stappler::StringView
* size_t
* size_t

Возвращает:
* bool

# ::stappler::filesystem::readIntoMemory<typename>(stappler::StringView,size_t,size_t)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface

Параметры:
* stappler::StringView
* size_t
* size_t

Возвращает:
* typename Interface::BytesType

# ::stappler::filesystem::platform::_getApplicationPath<typename>()

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface

Возвращает:
* typename Interface::StringType

# ::stappler::filesystem::platform::_getWritablePath<typename>(bool)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface

Параметры:
* bool

Возвращает:
* typename Interface::StringType

# ::stappler::filesystem::platform::_getDocumentsPath<typename>(bool)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface

Параметры:
* bool

Возвращает:
* typename Interface::StringType

# ::stappler::filesystem::platform::_getCachesPath<typename>(bool)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface

Параметры:
* bool

Возвращает:
* typename Interface::StringType

# ::stappler::filesystem::platform::_exists(stappler::StringView,bool)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView
* bool

Возвращает:
* bool

# ::stappler::filesystem::platform::_stat(stappler::StringView,stappler::filesystem::Stat&,bool)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView
* stappler::filesystem::Stat&
* bool

Возвращает:
* bool

# ::stappler::filesystem::platform::_openForReading(stappler::StringView)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView

Возвращает:
* stappler::filesystem::File

# ::stappler::filesystem::platform::_read(void*,uint8_t*,size_t)

## BRIEF

## CONTENT

Параметры:
* void*
* uint8_t*
* size_t

Возвращает:
* size_t

# ::stappler::filesystem::platform::_seek(void*,int64_t,io::Seek)

## BRIEF

## CONTENT

Параметры:
* void*
* int64_t
* io::Seek

Возвращает:
* size_t

# ::stappler::filesystem::platform::_tell(void*)

## BRIEF

## CONTENT

Параметры:
* void*

Возвращает:
* size_t

# ::stappler::filesystem::platform::_eof(void*)

## BRIEF

## CONTENT

Параметры:
* void*

Возвращает:
* bool

# ::stappler::filesystem::platform::_close(void*)

## BRIEF

## CONTENT

Параметры:
* void*


# ::stappler::filesystem::platform::_ftw(stappler::StringView,Callback<void (stappler::StringView, bool)> const&,int,bool,bool)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView
* Callback<void (stappler::StringView, bool)> const&
* int
* bool
* bool


# ::stappler::filesystem::platform::_ftw_b(stappler::StringView,Callback<bool (stappler::StringView, bool)> const&,int,bool,bool)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView
* Callback<bool (stappler::StringView, bool)> const&
* int
* bool
* bool

Возвращает:
* bool

# ::stappler::filesystem::native::nativeToPosix<typename>(stappler::StringView)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface

Параметры:
* stappler::StringView

Возвращает:
* typename Interface::StringType

# ::stappler::filesystem::native::posixToNative<typename>(stappler::StringView)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface

Параметры:
* stappler::StringView

Возвращает:
* typename Interface::StringType

# ::stappler::filesystem::native::getcwd_fn<typename>()

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface

Возвращает:
* typename Interface::StringType

# ::stappler::filesystem::native::remove_fn(stappler::StringView)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView

Возвращает:
* bool

# ::stappler::filesystem::native::mkdir_fn(stappler::StringView)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView

Возвращает:
* bool

# ::stappler::filesystem::native::access_fn(stappler::StringView,stappler::filesystem::Access)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView
* stappler::filesystem::Access

Возвращает:
* bool

# ::stappler::filesystem::native::stat_fn(stappler::StringView,stappler::filesystem::Stat&)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView
* stappler::filesystem::Stat&

Возвращает:
* bool

# ::stappler::filesystem::native::touch_fn(stappler::StringView)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView

Возвращает:
* bool

# ::stappler::filesystem::native::ftw_fn(stappler::StringView,Callback<void (stappler::StringView, bool)> const&,int,bool)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView
* Callback<void (stappler::StringView, bool)> const&
* int
* bool


# ::stappler::filesystem::native::ftw_b_fn(stappler::StringView,Callback<bool (stappler::StringView, bool)> const&,int,bool)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView
* Callback<bool (stappler::StringView, bool)> const&
* int
* bool

Возвращает:
* bool

# ::stappler::filesystem::native::rename_fn(stappler::StringView,stappler::StringView)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView
* stappler::StringView

Возвращает:
* bool

# ::stappler::filesystem::native::fopen_fn(stappler::StringView,stappler::StringView)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView
* stappler::StringView

Возвращает:
* FILE*

# ::stappler::filesystem::writablePath<typename>(stappler::StringView,bool)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface

Параметры:
* stappler::StringView
* bool

Возвращает:
* typename Interface::StringType

# ::stappler::filesystem::writablePathReadOnly<typename>(stappler::StringView,bool)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface

Параметры:
* stappler::StringView
* bool

Возвращает:
* typename Interface::StringType

# ::stappler::filesystem::cachesPath<typename>(stappler::StringView,bool)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface

Параметры:
* stappler::StringView
* bool

Возвращает:
* typename Interface::StringType

# ::stappler::filesystem::cachesPathReadOnly<typename>(stappler::StringView,bool)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface

Параметры:
* stappler::StringView
* bool

Возвращает:
* typename Interface::StringType

# ::stappler::filesystem::documentsPath<typename>(stappler::StringView,bool)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface

Параметры:
* stappler::StringView
* bool

Возвращает:
* typename Interface::StringType

# ::stappler::filesystem::documentsPathReadOnly<typename>(stappler::StringView,bool)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface

Параметры:
* stappler::StringView
* bool

Возвращает:
* typename Interface::StringType

# ::stappler::filesystem::currentDir<typename>(stappler::StringView,bool)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface

Параметры:
* stappler::StringView
* bool

Возвращает:
* typename Interface::StringType

# ::stappler::filesystem::readTextFile<typename>(stappler::StringView)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface

Параметры:
* stappler::StringView

Возвращает:
* typename Interface::StringType

# ::stappler::io::ProducerTraits<filesystem::File>::ProducerTraits<filesystem::File>

## BRIEF

## CONTENT


# ::stappler::io::ProducerTraits<filesystem::File>::type

## BRIEF

## CONTENT


# ::stappler::io::ProducerTraits<filesystem::File>::ReadFn(void*,uint8_t*,size_t)

## BRIEF

## CONTENT

Параметры:
* void*
* uint8_t*
* size_t

Возвращает:
* size_t

# ::stappler::io::ProducerTraits<filesystem::File>::SeekFn(void*,int64_t,stappler::io::Seek)

## BRIEF

## CONTENT

Параметры:
* void*
* int64_t
* stappler::io::Seek

Возвращает:
* size_t

# ::stappler::io::ProducerTraits<filesystem::File>::TellFn(void*)

## BRIEF

## CONTENT

Параметры:
* void*

Возвращает:
* size_t