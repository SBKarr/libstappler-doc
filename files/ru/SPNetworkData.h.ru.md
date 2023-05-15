Title: SPNetworkData.h


# MODULES_NETWORK_SPNETWORKHANDLEDATA_H_

## BRIEF

## CONTENT


# ::stappler::network::DefaultCertPath

## BRIEF

## CONTENT

Тип: auto const


# ::stappler::network::Method

## BRIEF

## CONTENT

Значения:
* Unknown
* Get
* Post
* Put
* Delete
* Head
* Smtp


# ::stappler::network::AuthMethod

## BRIEF

## CONTENT

Значения:
* Basic
* Digest
* PKey


# ::stappler::network::getActiveHandles()

## BRIEF

## CONTENT

Возвращает:
* uint32_t

# ::stappler::network::AuthData<typename>

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface


# ::stappler::network::AuthData<typename>::String

## BRIEF

## CONTENT


# ::stappler::network::AuthData<typename>::data

## BRIEF

## CONTENT

Тип: std::variant<Pair<String, String>, String>


# ::stappler::network::AuthData<typename>::proxyAddress

## BRIEF

## CONTENT

Тип: String


# ::stappler::network::AuthData<typename>::proxyAuth

## BRIEF

## CONTENT

Тип: String


# ::stappler::network::AuthData<typename>::authMethod

## BRIEF

## CONTENT

Тип: stappler::network::AuthMethod


# ::stappler::network::SendData<typename>

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface


# ::stappler::network::SendData<typename>::Function<typename>

## BRIEF

## CONTENT

Параметры шаблона:
* typename T


# ::stappler::network::SendData<typename>::Vector<typename>

## BRIEF

## CONTENT

Параметры шаблона:
* typename T


# ::stappler::network::SendData<typename>::Map<typename,typename>

## BRIEF

## CONTENT

Параметры шаблона:
* typename K
* typename V


# ::stappler::network::SendData<typename>::String

## BRIEF

## CONTENT


# ::stappler::network::SendData<typename>::Bytes

## BRIEF

## CONTENT


# ::stappler::network::SendData<typename>::IOCallback

## BRIEF

## CONTENT


# ::stappler::network::SendData<typename>::DataSource

## BRIEF

## CONTENT


# ::stappler::network::SendData<typename>::headers

## BRIEF

## CONTENT

Тип: Map<stappler::network::SendData::String, stappler::network::SendData::String>


# ::stappler::network::SendData<typename>::url

## BRIEF

## CONTENT

Тип: String


# ::stappler::network::SendData<typename>::recipients

## BRIEF

## CONTENT

Тип: Vector<stappler::network::SendData::String>


# ::stappler::network::SendData<typename>::from

## BRIEF

## CONTENT

Тип: String


# ::stappler::network::SendData<typename>::userAgent

## BRIEF

## CONTENT

Тип: String


# ::stappler::network::SendData<typename>::data

## BRIEF

## CONTENT

Тип: DataSource


# ::stappler::network::SendData<typename>::size

## BRIEF

## CONTENT

Тип: size_t


# ::stappler::network::SendData<typename>::offset

## BRIEF

## CONTENT

Тип: size_t


# ::stappler::network::SendData<typename>::method

## BRIEF

## CONTENT

Тип: stappler::network::Method


# ::stappler::network::ProcessData<typename>

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface


# ::stappler::network::ProcessData<typename>::Function<typename>

## BRIEF

## CONTENT

Параметры шаблона:
* typename T


# ::stappler::network::ProcessData<typename>::String

## BRIEF

## CONTENT


# ::stappler::network::ProcessData<typename>::StringStream

## BRIEF

## CONTENT


# ::stappler::network::ProcessData<typename>::ProgressCallback

## BRIEF

## CONTENT


# ::stappler::network::ProcessData<typename>::debugData

## BRIEF

## CONTENT

Тип: StringStream


# ::stappler::network::ProcessData<typename>::cookieFile

## BRIEF

## CONTENT

Тип: String


# ::stappler::network::ProcessData<typename>::error

## BRIEF

## CONTENT

Тип: String


# ::stappler::network::ProcessData<typename>::uploadProgress

## BRIEF

## CONTENT

Тип: ProgressCallback


# ::stappler::network::ProcessData<typename>::downloadProgress

## BRIEF

## CONTENT

Тип: ProgressCallback


# ::stappler::network::ProcessData<typename>::sharedHandle

## BRIEF

## CONTENT

Тип: void*


# ::stappler::network::ProcessData<typename>::uploadProgressValue

## BRIEF

## CONTENT

Тип: int64_t


# ::stappler::network::ProcessData<typename>::uploadProgressTiming

## BRIEF

## CONTENT

Тип: stappler::Time


# ::stappler::network::ProcessData<typename>::downloadProgressValue

## BRIEF

## CONTENT

Тип: int64_t


# ::stappler::network::ProcessData<typename>::downloadProgressTiming

## BRIEF

## CONTENT

Тип: stappler::Time


# ::stappler::network::ProcessData<typename>::errorCode

## BRIEF

## CONTENT

Тип: long


# ::stappler::network::ProcessData<typename>::responseCode

## BRIEF

## CONTENT

Тип: long


# ::stappler::network::ProcessData<typename>::connectTimeout

## BRIEF

## CONTENT

Тип: int


# ::stappler::network::ProcessData<typename>::lowSpeedTime

## BRIEF

## CONTENT

Тип: int


# ::stappler::network::ProcessData<typename>::lowSpeedLimit

## BRIEF

## CONTENT

Тип: int


# ::stappler::network::ProcessData<typename>::shared

## BRIEF

## CONTENT

Тип: bool


# ::stappler::network::ProcessData<typename>::verifyTsl

## BRIEF

## CONTENT

Тип: bool


# ::stappler::network::ProcessData<typename>::debug

## BRIEF

## CONTENT

Тип: bool


# ::stappler::network::ProcessData<typename>::reuse

## BRIEF

## CONTENT

Тип: bool


# ::stappler::network::ProcessData<typename>::silent

## BRIEF

## CONTENT

Тип: bool


# ::stappler::network::ProcessData<typename>::performed

## BRIEF

## CONTENT

Тип: bool


# ::stappler::network::ReceiveData<typename>

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface


# ::stappler::network::ReceiveData<typename>::Function<typename>

## BRIEF

## CONTENT

Параметры шаблона:
* typename T


# ::stappler::network::ReceiveData<typename>::Vector<typename>

## BRIEF

## CONTENT

Параметры шаблона:
* typename T


# ::stappler::network::ReceiveData<typename>::Map<typename,typename>

## BRIEF

## CONTENT

Параметры шаблона:
* typename K
* typename V


# ::stappler::network::ReceiveData<typename>::String

## BRIEF

## CONTENT


# ::stappler::network::ReceiveData<typename>::Bytes

## BRIEF

## CONTENT


# ::stappler::network::ReceiveData<typename>::IOCallback

## BRIEF

## CONTENT


# ::stappler::network::ReceiveData<typename>::HeaderCallback

## BRIEF

## CONTENT


# ::stappler::network::ReceiveData<typename>::DataSource

## BRIEF

## CONTENT


# ::stappler::network::ReceiveData<typename>::headers

## BRIEF

## CONTENT

Тип: Vector<stappler::network::ReceiveData::String>


# ::stappler::network::ReceiveData<typename>::parsed

## BRIEF

## CONTENT

Тип: Map<stappler::network::ReceiveData::String, stappler::network::ReceiveData::String>


# ::stappler::network::ReceiveData<typename>::contentType

## BRIEF

## CONTENT

Тип: String


# ::stappler::network::ReceiveData<typename>::data

## BRIEF

## CONTENT

Тип: DataSource


# ::stappler::network::ReceiveData<typename>::headerCallback

## BRIEF

## CONTENT

Тип: HeaderCallback


# ::stappler::network::ReceiveData<typename>::offset

## BRIEF

## CONTENT

Тип: uint64_t


# ::stappler::network::ReceiveData<typename>::resumeDownload

## BRIEF

## CONTENT

Тип: bool


# ::stappler::network::HandleData<typename>

## BRIEF

## CONTENT

Параметры шаблона:
* typename Interface

Базовые классы:
* Interface::AllocBaseType


# ::stappler::network::HandleData<typename>::Vector<typename>

## BRIEF

## CONTENT

Параметры шаблона:
* typename T


# ::stappler::network::HandleData<typename>::Function<typename>

## BRIEF

## CONTENT

Параметры шаблона:
* typename T


# ::stappler::network::HandleData<typename>::Map<typename,typename>

## BRIEF

## CONTENT

Параметры шаблона:
* typename K
* typename V


# ::stappler::network::HandleData<typename>::String

## BRIEF

## CONTENT


# ::stappler::network::HandleData<typename>::StringStream

## BRIEF

## CONTENT


# ::stappler::network::HandleData<typename>::Bytes

## BRIEF

## CONTENT


# ::stappler::network::HandleData<typename>::Value

## BRIEF

## CONTENT


# ::stappler::network::HandleData<typename>::HeaderMap

## BRIEF

## CONTENT


# ::stappler::network::HandleData<typename>::ProgressCallback

## BRIEF

## CONTENT


# ::stappler::network::HandleData<typename>::IOCallback

## BRIEF

## CONTENT


# ::stappler::network::HandleData<typename>::HeaderCallback

## BRIEF

## CONTENT


# ::stappler::network::HandleData<typename>::send

## BRIEF

## CONTENT

Тип: SendData<Interface>


# ::stappler::network::HandleData<typename>::process

## BRIEF

## CONTENT

Тип: ProcessData<Interface>


# ::stappler::network::HandleData<typename>::receive

## BRIEF

## CONTENT

Тип: ReceiveData<Interface>


# ::stappler::network::HandleData<typename>::auth

## BRIEF

## CONTENT

Тип: AuthData<Interface>


# ::stappler::network::HandleData<typename>::~HandleData()

## BRIEF

## CONTENT


# ::stappler::network::HandleData<typename>::reset(stappler::network::Method,stappler::StringView)

## BRIEF

## CONTENT

Параметры:
* stappler::network::Method
* stappler::StringView

Возвращает:
* bool

# ::stappler::network::HandleData<typename>::getResponseCode() const

## BRIEF

## CONTENT

Возвращает:
* long

# ::stappler::network::HandleData<typename>::getErrorCode() const

## BRIEF

## CONTENT

Возвращает:
* long

# ::stappler::network::HandleData<typename>::getError() const

## BRIEF

## CONTENT

Возвращает:
* stappler::StringView

# ::stappler::network::HandleData<typename>::setCookieFile(stappler::StringView)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView


# ::stappler::network::HandleData<typename>::setUserAgent(stappler::StringView)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView


# ::stappler::network::HandleData<typename>::setUrl(stappler::StringView)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView


# ::stappler::network::HandleData<typename>::clearHeaders()

## BRIEF

## CONTENT


# ::stappler::network::HandleData<typename>::addHeader(stappler::StringView,stappler::StringView)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView
* stappler::StringView


# ::stappler::network::HandleData<typename>::getRequestHeaders() const

## BRIEF

## CONTENT

Возвращает:
* HeaderMap&

# ::stappler::network::HandleData<typename>::setMailFrom(stappler::StringView)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView


# ::stappler::network::HandleData<typename>::clearMailTo()

## BRIEF

## CONTENT


# ::stappler::network::HandleData<typename>::addMailTo(stappler::StringView)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView


# ::stappler::network::HandleData<typename>::setAuthority(stappler::StringView,stappler::StringView,stappler::network::AuthMethod)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView
* stappler::StringView
* stappler::network::AuthMethod


# ::stappler::network::HandleData<typename>::setPrivateKeyAuth(stappler::BytesView)

## BRIEF

## CONTENT

Параметры:
* stappler::BytesView

Возвращает:
* bool

# ::stappler::network::HandleData<typename>::setPrivateKeyAuth(crypto::PrivateKey const&)

## BRIEF

## CONTENT

Параметры:
* crypto::PrivateKey const&

Возвращает:
* bool

# ::stappler::network::HandleData<typename>::setProxy(stappler::StringView,stappler::StringView)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView
* stappler::StringView


# ::stappler::network::HandleData<typename>::setReceiveFile(stappler::StringView,bool)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView
* bool


# ::stappler::network::HandleData<typename>::setReceiveCallback(stappler::network::HandleData::IOCallback&&)

## BRIEF

## CONTENT

Параметры:
* stappler::network::HandleData::IOCallback&&


# ::stappler::network::HandleData<typename>::setResumeDownload(bool)

## BRIEF

## CONTENT

Параметры:
* bool


# ::stappler::network::HandleData<typename>::setResumeOffset(uint64_t)

## BRIEF

## CONTENT

Параметры:
* uint64_t


# ::stappler::network::HandleData<typename>::getReceiveDataSource() const

## BRIEF

## CONTENT

Возвращает:
* const typename ReceiveData<Interface>::DataSource&

# ::stappler::network::HandleData<typename>::setSendSize(size_t)

## BRIEF

## CONTENT

Параметры:
* size_t


# ::stappler::network::HandleData<typename>::setSendFile(stappler::StringView,stappler::StringView)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView
* stappler::StringView


# ::stappler::network::HandleData<typename>::setSendCallback(stappler::network::HandleData::IOCallback&&,size_t,stappler::StringView)

## BRIEF

## CONTENT

Параметры:
* stappler::network::HandleData::IOCallback&&
* size_t
* stappler::StringView


# ::stappler::network::HandleData<typename>::setSendData(stappler::StringView,stappler::StringView)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView
* stappler::StringView


# ::stappler::network::HandleData<typename>::setSendData(stappler::BytesView,stappler::StringView)

## BRIEF

## CONTENT

Параметры:
* stappler::BytesView
* stappler::StringView


# ::stappler::network::HandleData<typename>::setSendData(stappler::network::HandleData::Bytes&&,stappler::StringView)

## BRIEF

## CONTENT

Параметры:
* stappler::network::HandleData::Bytes&&
* stappler::StringView


# ::stappler::network::HandleData<typename>::setSendData(uint8_t const*,size_t,stappler::StringView)

## BRIEF

## CONTENT

Параметры:
* uint8_t const*
* size_t
* stappler::StringView


# ::stappler::network::HandleData<typename>::setSendData(stappler::network::HandleData::Value const&,data::EncodeFormat)

## BRIEF

## CONTENT

Параметры:
* stappler::network::HandleData::Value const&
* data::EncodeFormat


# ::stappler::network::HandleData<typename>::getSendDataSource() const

## BRIEF

## CONTENT

Возвращает:
* const typename SendData<Interface>::DataSource&

# ::stappler::network::HandleData<typename>::setHeaderCallback(stappler::network::HandleData::HeaderCallback&&)

## BRIEF

## CONTENT

Параметры:
* stappler::network::HandleData::HeaderCallback&&


# ::stappler::network::HandleData<typename>::getHeaderCallback() const

## BRIEF

## CONTENT

Возвращает:
* HeaderCallback&

# ::stappler::network::HandleData<typename>::getReceivedHeaderString(stappler::StringView) const

## BRIEF

## CONTENT

Параметры:
* stappler::StringView

Возвращает:
* stappler::StringView

# ::stappler::network::HandleData<typename>::getReceivedHeaderInt(stappler::StringView) const

## BRIEF

## CONTENT

Параметры:
* stappler::StringView

Возвращает:
* int64_t

# ::stappler::network::HandleData<typename>::getMethod() const

## BRIEF

## CONTENT

Возвращает:
* stappler::network::Method

# ::stappler::network::HandleData<typename>::getUrl() const

## BRIEF

## CONTENT

Возвращает:
* stappler::StringView

# ::stappler::network::HandleData<typename>::getCookieFile() const

## BRIEF

## CONTENT

Возвращает:
* stappler::StringView

# ::stappler::network::HandleData<typename>::getUserAgent() const

## BRIEF

## CONTENT

Возвращает:
* stappler::StringView

# ::stappler::network::HandleData<typename>::getResponseContentType() const

## BRIEF

## CONTENT

Возвращает:
* stappler::StringView

# ::stappler::network::HandleData<typename>::getRecievedHeaders() const

## BRIEF

## CONTENT

Возвращает:
* Vector<stappler::network::HandleData::String> const&

# ::stappler::network::HandleData<typename>::setDebug(bool)

## BRIEF

## CONTENT

Параметры:
* bool


# ::stappler::network::HandleData<typename>::setReuse(bool)

## BRIEF

## CONTENT

Параметры:
* bool


# ::stappler::network::HandleData<typename>::setShared(bool)

## BRIEF

## CONTENT

Параметры:
* bool


# ::stappler::network::HandleData<typename>::setSilent(bool)

## BRIEF

## CONTENT

Параметры:
* bool


# ::stappler::network::HandleData<typename>::getDebugData() const

## BRIEF

## CONTENT

Возвращает:
* StringStream&

# ::stappler::network::HandleData<typename>::setDownloadProgress(stappler::network::HandleData::ProgressCallback&&)

## BRIEF

## CONTENT

Параметры:
* stappler::network::HandleData::ProgressCallback&&


# ::stappler::network::HandleData<typename>::setUploadProgress(stappler::network::HandleData::ProgressCallback&&)

## BRIEF

## CONTENT

Параметры:
* stappler::network::HandleData::ProgressCallback&&


# ::stappler::network::HandleData<typename>::setConnectTimeout(int)

## BRIEF

## CONTENT

Параметры:
* int


# ::stappler::network::HandleData<typename>::setLowSpeedLimit(int,size_t)

## BRIEF

## CONTENT

Параметры:
* int
* size_t


# ::stappler::network::HandleData<typename>::setVerifyTls(bool)

## BRIEF

## CONTENT

Параметры:
* bool
