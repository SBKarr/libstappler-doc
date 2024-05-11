Title: XLNetworkRequest.h


# XENOLITH_RESOURCES_NETWORK_XLNETWORKREQUEST_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::network::Method

## BRIEF

## CONTENT


# ::stappler::xenolith::network::Handle

## BRIEF

## CONTENT

Базовые классы:
* NetworkHandle


# ::stappler::xenolith::network::Handle::Context

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::network::Handle::~Handle()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::network::Handle::init(stappler::StringView)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView

Возвращает:
* bool

# ::stappler::xenolith::network::Handle::init(stappler::StringView,stappler::FilePath)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView
* stappler::FilePath

Возвращает:
* bool

# ::stappler::xenolith::network::Handle::init(stappler::network::Handle<stappler::memory::StandartInterface>::Method,stappler::StringView)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::network::Handle<stappler::memory::StandartInterface>::Method
* stappler::StringView

Возвращает:
* bool

# ::stappler::xenolith::network::Handle::isSuccess() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::network::Handle::getMTime() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* int64_t

# ::stappler::xenolith::network::Handle::getETag() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::StringView

# ::stappler::xenolith::network::Handle::getSharegroup() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::StringView

# ::stappler::xenolith::network::Handle::setMTime(int64_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* int64_t


# ::stappler::xenolith::network::Handle::setETag(stappler::StringView)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView


# ::stappler::xenolith::network::Handle::setSharegroup(stappler::StringView)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView


# ::stappler::xenolith::network::Handle::setSignRequest(bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* bool


# ::stappler::xenolith::network::Handle::shouldSignRequest() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::network::Handle::getReqeust() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Rc<stappler::xenolith::network::Request> const&

# ::stappler::xenolith::network::Handle::prepare(stappler::xenolith::network::Handle::Context*)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::network::Handle::Context*

Возвращает:
* bool

# ::stappler::xenolith::network::Handle::finalize(stappler::xenolith::network::Handle::Context*,bool)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::network::Handle::Context*
* bool

Возвращает:
* bool

# ::stappler::xenolith::network::Handle::_success

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::network::Handle::_signRequest

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::network::Handle::_errorBuffer

## BRIEF

## CONTENT

Доступ: protected

Тип: std::array<char, 256>


# ::stappler::xenolith::network::Handle::_mtime

## BRIEF

## CONTENT

Доступ: protected

Тип: uint64_t


# ::stappler::xenolith::network::Handle::_etag

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::network::Handle<stappler::memory::StandartInterface>::String


# ::stappler::xenolith::network::Handle::_sharegroup

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::network::Handle<stappler::memory::StandartInterface>::String


# ::stappler::xenolith::network::Handle::_controller

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::network::Controller const*


# ::stappler::xenolith::network::Handle::_request

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::xenolith::network::Request>


# ::stappler::xenolith::network::Request

## BRIEF

## CONTENT

Базовые классы:
* Ref


# ::stappler::xenolith::network::Request::CompleteCallback

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::network::Request::ProgressCallback

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::network::Request::~Request()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::network::Request::init(Callback<bool (stappler::xenolith::network::Handle &)> const&,Rc<stappler::mem_std::Ref>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Callback<bool (stappler::xenolith::network::Handle &)> const&
* Rc<stappler::mem_std::Ref>&&

Возвращает:
* bool

# ::stappler::xenolith::network::Request::perform(stappler::xenolith::Application*,stappler::xenolith::network::Request::CompleteCallback&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Application*
* stappler::xenolith::network::Request::CompleteCallback&&


# ::stappler::xenolith::network::Request::perform(stappler::xenolith::network::Controller*,stappler::xenolith::network::Request::CompleteCallback&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::network::Controller*
* stappler::xenolith::network::Request::CompleteCallback&&


# ::stappler::xenolith::network::Request::setIgnoreResponseData(bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* bool


# ::stappler::xenolith::network::Request::isIgnoreResponseData() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::network::Request::isRunning() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::network::Request::getHandle() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::network::Handle const&

# ::stappler::xenolith::network::Request::getUploadProgress() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* float

# ::stappler::xenolith::network::Request::getDownloadProgress() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* float

# ::stappler::xenolith::network::Request::getUploadProgressCounters() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Pair<int64_t, int64_t>

# ::stappler::xenolith::network::Request::getDownloadProgressCounters() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Pair<int64_t, int64_t>

# ::stappler::xenolith::network::Request::setUploadProgress(stappler::xenolith::network::Request::ProgressCallback&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::network::Request::ProgressCallback&&


# ::stappler::xenolith::network::Request::setDownloadProgress(stappler::xenolith::network::Request::ProgressCallback&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::network::Request::ProgressCallback&&


# ::stappler::xenolith::network::Request::getData() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::BytesView

# ::stappler::xenolith::network::Request::handleHeader(stappler::StringView,stappler::StringView)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::StringView
* stappler::StringView


# ::stappler::xenolith::network::Request::handleReceive(char*,size_t)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* char*
* size_t

Возвращает:
* size_t

# ::stappler::xenolith::network::Request::notifyOnComplete(bool)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* bool


# ::stappler::xenolith::network::Request::notifyOnUploadProgress(int64_t,int64_t)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* int64_t
* int64_t


# ::stappler::xenolith::network::Request::notifyOnDownloadProgress(int64_t,int64_t)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* int64_t
* int64_t


# ::stappler::xenolith::network::Request::_running

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::network::Request::_ignoreResponseData

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::network::Request::_setupInput

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::network::Request::_targetHeaderCallback

## BRIEF

## CONTENT

Доступ: protected

Тип: Function<void (stappler::StringView, stappler::StringView)>


# ::stappler::xenolith::network::Request::_uploadProgress

## BRIEF

## CONTENT

Доступ: protected

Тип: Pair<int64_t, int64_t>


# ::stappler::xenolith::network::Request::_downloadProgress

## BRIEF

## CONTENT

Доступ: protected

Тип: Pair<int64_t, int64_t>


# ::stappler::xenolith::network::Request::_onDownloadProgress

## BRIEF

## CONTENT

Доступ: protected

Тип: ProgressCallback


# ::stappler::xenolith::network::Request::_onUploadProgress

## BRIEF

## CONTENT

Доступ: protected

Тип: ProgressCallback


# ::stappler::xenolith::network::Request::_onComplete

## BRIEF

## CONTENT

Доступ: protected

Тип: CompleteCallback


# ::stappler::xenolith::network::Request::_handle

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::network::Handle


# ::stappler::xenolith::network::Request::_owner

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::mem_std::Ref>


# ::stappler::xenolith::network::Request::_nbytes

## BRIEF

## CONTENT

Доступ: protected

Тип: size_t


# ::stappler::xenolith::network::Request::_data

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::mem_std::Bytes
