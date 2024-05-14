Title: SPNetworkData.h


# STAPPLER_NETWORK_SPNETWORKHANDLEDATA_H_

## BRIEF

Заголовок описания схем данных, необходимых для сетевого соединения

## CONTENT

Заголовок описания схем данных, необходимых для сетевого соединения


# ::stappler::network::DefaultCertPath

## BRIEF

Путь по умолчанию к SSL/TLS сертификатам, установленным в системе пользователя.

## CONTENT

Путь по умолчанию к SSL/TLS сертификатам, установленным в системе пользователя.

Тип: auto const


# ::stappler::network::Method

## BRIEF

Доступные методы сетевого соединения

## CONTENT

Доступные методы сетевого соединения

Значения:
* Unknown
* Get
* Post
* Put
* Delete
* Head
* Smtp - отправка почтовых сообщений


# ::stappler::network::AuthMethod

## BRIEF

Доступные методы сетевой аутентификации

## CONTENT

Доступные методы сетевой аутентификации

Значения:
* Basic
* Digest
* PKey - дополнительный метод авторизации по личному ключу


# ::stappler::network::getActiveHandles()

## BRIEF

Возвращает число активных сетевых соединений

## CONTENT

Возвращает число активных сетевых соединений

Возвращает:
* uint32_t

# ::stappler::network::AuthData<typename>

## BRIEF

Данные для авторизации пользователя

## CONTENT

Данные для авторизации пользователя

Параметры шаблона:
* typename Interface - используемый интерфейс памяти


# ::stappler::network::AuthData<typename>::String

## BRIEF

Тип строки

## CONTENT

Тип строки


# ::stappler::network::AuthData<typename>::data

## BRIEF

Варианты данных для авторизации

## CONTENT

Варианты данных для авторизации. Имя пользователя и пароль, или строка подписи ключом.

Тип: std::variant<Pair<String, String>, String>


# ::stappler::network::AuthData<typename>::proxyAddress

## BRIEF

Адрес прокси для соединения

## CONTENT

Адрес прокси для соединения

Тип: String


# ::stappler::network::AuthData<typename>::proxyAuth

## BRIEF

Строка для авторизации на прокси

## CONTENT

Строка для авторизации на прокси

Тип: String


# ::stappler::network::AuthData<typename>::authMethod

## BRIEF

Метод авторизации

## CONTENT

Метод авторизации

Тип: stappler::network::AuthMethod


# ::stappler::network::SendData<typename>

## BRIEF

Данные для отправки по сети

## CONTENT

Данные для отправки по сети

Параметры шаблона:
* typename Interface - интерфейс памяти


# ::stappler::network::SendData<typename>::Function<typename>

## BRIEF

Тип фунционального контейнера

## CONTENT

Тип фунционального контейнера

Параметры шаблона:
* typename T


# ::stappler::network::SendData<typename>::Vector<typename>

## BRIEF

Тип вектора

## CONTENT

Тип вектора

Параметры шаблона:
* typename T


# ::stappler::network::SendData<typename>::Map<typename,typename>

## BRIEF

Тип хранилища ключ-значение

## CONTENT

Тип хранилища ключ-значение

Параметры шаблона:
* typename K
* typename V


# ::stappler::network::SendData<typename>::String

## BRIEF

Тип символьной строки

## CONTENT

Тип символьной строки


# ::stappler::network::SendData<typename>::Bytes

## BRIEF

Тип байтовой строки

## CONTENT

Тип байтовой строки


# ::stappler::network::SendData<typename>::IOCallback

## BRIEF

Тип обратного вызова ввода-вывода данных

## CONTENT

Тип обратного вызова ввода-вывода данных


# ::stappler::network::SendData<typename>::DataSource

## BRIEF

Объединение, определяющее установленный источник данных ввода

## CONTENT

Объединение, определяющее установленный источник данных ввода:
* Файл
* Данные в памяти
* Фнкция обратного вызова

# ::stappler::network::SendData<typename>::headers

## BRIEF

Отправляемые дополнительные заголовки протокола

## CONTENT

Отправляемые дополнительные заголовки протокола

Тип: Map<stappler::network::SendData::String, stappler::network::SendData::String>


# ::stappler::network::SendData<typename>::url

## BRIEF

URL для соединения

## CONTENT

URL для соединения

Тип: String


# ::stappler::network::SendData<typename>::recipients

## BRIEF

Получатели почтового сообщения

## CONTENT

Получатели почтового сообщения

Тип: Vector<stappler::network::SendData::String>


# ::stappler::network::SendData<typename>::from

## BRIEF

Обратный адрес отправителя почтового сообщения

## CONTENT

Обратный адрес отправителя почтового сообщения

Тип: String


# ::stappler::network::SendData<typename>::userAgent

## BRIEF

Название сетевого клиента пользователя

## CONTENT

Название сетевого клиента пользователя

Тип: String


# ::stappler::network::SendData<typename>::data

## BRIEF

Источник данных для отправки

## CONTENT

Источник данных для отправки

Тип: DataSource


# ::stappler::network::SendData<typename>::size

## BRIEF

Размер данных для отправки

## CONTENT

Размер данных для отправки

Тип: size_t


# ::stappler::network::SendData<typename>::offset

## BRIEF

Смещение внутри данных для отправки

## CONTENT

Смещение внутри данных для отправки

Тип: size_t


# ::stappler::network::SendData<typename>::method

## BRIEF

Сетевой метод соединения

## CONTENT

Сетевой метод соединения

Тип: stappler::network::Method


# ::stappler::network::ProcessData<typename>

## BRIEF

Данные для обработки процесса передачи данных

## CONTENT

Данные для обработки процесса передачи данных

Параметры шаблона:
* typename Interface - интерфейс памяти


# ::stappler::network::ProcessData<typename>::Function<typename>

## BRIEF

Тип функционального контейнера

## CONTENT

Тип функционального контейнера

Параметры шаблона:
* typename T


# ::stappler::network::ProcessData<typename>::String

## BRIEF

Тип символьной строки

## CONTENT

Тип символьной строки


# ::stappler::network::ProcessData<typename>::StringStream

## BRIEF

Тип строкового потока

## CONTENT

Тип строкового потока


# ::stappler::network::ProcessData<typename>::ProgressCallback

## BRIEF

Тип обратного вызова прогресса соединения

## CONTENT

Тип обратного вызова прогресса соединения


# ::stappler::network::ProcessData<typename>::debugData

## BRIEF

Отладочные данные соединения

## CONTENT

Отладочные данные соединения

Тип: StringStream


# ::stappler::network::ProcessData<typename>::cookieFile

## BRIEF

Файл для загрузки и хранения cookie

## CONTENT

Файл для загрузки и хранения cookie

Тип: String


# ::stappler::network::ProcessData<typename>::error

## BRIEF

Текущая строка ошибки

## CONTENT

Текущая строка ошибки

Тип: String


# ::stappler::network::ProcessData<typename>::uploadProgress

## BRIEF

Функция прогресса загрузки данных на сервер (отправки данныз)

## CONTENT

Функция прогресса загрузки данных на сервер (отправки данныз)

Тип: ProgressCallback


# ::stappler::network::ProcessData<typename>::downloadProgress

## BRIEF

Функция прогресса загрузки данных от сервера (получения данныз)

## CONTENT

Функция прогресса загрузки данных от сервера (получения данныз)

Тип: ProgressCallback


# ::stappler::network::ProcessData<typename>::sharedHandle

## BRIEF

Непрозрачный указатель на разделяемые данные

## CONTENT

Непрозрачный указатель на разделяемые данные

Тип: void*


# ::stappler::network::ProcessData<typename>::uploadProgressValue

## BRIEF

Текущий объём отправки данных

## CONTENT

Текущий объём отправки данных

Тип: int64_t


# ::stappler::network::ProcessData<typename>::uploadProgressTiming

## BRIEF

Текущая длительность отправки данных

## CONTENT

Текущая длительность отправки данных

Тип: stappler::Time


# ::stappler::network::ProcessData<typename>::downloadProgressValue

## BRIEF

Текущий объём получения данных

## CONTENT

Текущий объём получения данных

Тип: int64_t


# ::stappler::network::ProcessData<typename>::downloadProgressTiming

## BRIEF

Текущая длительность получения данных

## CONTENT

Текущая длительность получения данных

Тип: stappler::Time


# ::stappler::network::ProcessData<typename>::errorCode

## BRIEF

Код ошибки бэкэнда

## CONTENT

Код ошибки бэкэнда

Тип: long


# ::stappler::network::ProcessData<typename>::responseCode

## BRIEF

Код ответа сервера

## CONTENT

Код ответа сервера

Тип: long


# ::stappler::network::ProcessData<typename>::connectTimeout

## BRIEF

Допустимая задержка соединения

## CONTENT

Допустимая задержка соединения

Тип: int


# ::stappler::network::ProcessData<typename>::lowSpeedTime

## BRIEF

Предел низкой скорости соединения по времени

## CONTENT

Предел низкой скорости соединения по времени

Тип: int


# ::stappler::network::ProcessData<typename>::lowSpeedLimit

## BRIEF

Предел низкой скорости соединения по объёму

## CONTENT

Предел низкой скорости соединения по объёму

Тип: int


# ::stappler::network::ProcessData<typename>::shared

## BRIEF

Флаг разделяемых данных соединения

## CONTENT

Флаг разделяемых данных соединения

Тип: bool


# ::stappler::network::ProcessData<typename>::verifyTsl

## BRIEF

Требование устанавливать подлинность сертификата соединения

## CONTENT

Требование устанавливать подлинность сертификата соединения

Тип: bool


# ::stappler::network::ProcessData<typename>::debug

## BRIEF

Флаг сохранения отладочной информации

## CONTENT

Флаг сохранения отладочной информации

Тип: bool


# ::stappler::network::ProcessData<typename>::reuse

## BRIEF

Флаг допустимости повторного использования соединения

## CONTENT

Флаг допустимости повторного использования соединения

Тип: bool


# ::stappler::network::ProcessData<typename>::silent

## BRIEF

Флаг подавления вывода дополниетльной информации и ошибок

## CONTENT

Флаг подавления вывода дополниетльной информации и ошибок

Тип: bool


# ::stappler::network::ProcessData<typename>::performed

## BRIEF

Флаг того, что соединение уже выполнено

## CONTENT

Флаг того, что соединение уже выполнено

Тип: bool


# ::stappler::network::ReceiveData<typename>

## BRIEF

Данные для получения ответа от сервера

## CONTENT

Данные для получения ответа от сервера

Параметры шаблона:
* typename Interface - интерфейс памяти


# ::stappler::network::ReceiveData<typename>::Function<typename>

## BRIEF

Тип функционального контейнера

## CONTENT

Тип функционального контейнера

Параметры шаблона:
* typename T


# ::stappler::network::ReceiveData<typename>::Vector<typename>

## BRIEF

Тип вектора

## CONTENT

Тип вектора

Параметры шаблона:
* typename T


# ::stappler::network::ReceiveData<typename>::Map<typename,typename>

## BRIEF

Тип хранилища ключ-значение

## CONTENT

Тип хранилища ключ-значение

Параметры шаблона:
* typename K
* typename V


# ::stappler::network::ReceiveData<typename>::String

## BRIEF

Тип символьной строки

## CONTENT

Тип символьной строки


# ::stappler::network::ReceiveData<typename>::Bytes

## BRIEF

Тип байтовой строки

## CONTENT

Тип байтовой строки


# ::stappler::network::ReceiveData<typename>::IOCallback

## BRIEF

Тип обратного вызова операций ввода-вывода

## CONTENT

Тип обратного вызова операций ввода-вывода


# ::stappler::network::ReceiveData<typename>::HeaderCallback

## BRIEF

Тип обратного вызова для чтения заголовков

## CONTENT

Тип обратного вызова для чтения заголовков


# ::stappler::network::ReceiveData<typename>::DataSource

## BRIEF

Объединение, показывающее цель для записи данных

## CONTENT

Объединение, показывающее цель для записи данных:
* Имя файла
* Функция обратного вызова


# ::stappler::network::ReceiveData<typename>::headers

## BRIEF

Полученные заголовки

## CONTENT

Полученные заголовки

Тип: Vector<stappler::network::ReceiveData::String>


# ::stappler::network::ReceiveData<typename>::parsed

## BRIEF

Разобранные заголовки

## CONTENT

Разобранные заголовки

Тип: Map<stappler::network::ReceiveData::String, stappler::network::ReceiveData::String>


# ::stappler::network::ReceiveData<typename>::contentType

## BRIEF

Тип содержимого, если получен

## CONTENT

Тип содержимого, если получен

Тип: String


# ::stappler::network::ReceiveData<typename>::data

## BRIEF

Данные для чтения

## CONTENT

Данные для чтения

Тип: DataSource


# ::stappler::network::ReceiveData<typename>::headerCallback

## BRIEF

Функция чтения заголовков

## CONTENT

Функция чтения заголовков

Тип: HeaderCallback


# ::stappler::network::ReceiveData<typename>::offset

## BRIEF

Смещение для записи данных

## CONTENT

Смещение для записи данных

Тип: uint64_t


# ::stappler::network::ReceiveData<typename>::resumeDownload

## BRIEF

Флаг возобновления загрузки

## CONTENT

Флаг возобновления загрузки

Тип: bool


# ::stappler::network::HandleData<typename>

## BRIEF

Обобщение данных сетевого запроса

## CONTENT

Обобщение данных сетевого запроса

Параметры шаблона:
* typename Interface - интерфейс памяти

Базовые классы:
* Interface::AllocBaseType


# ::stappler::network::HandleData<typename>::Vector<typename>

## BRIEF

Тип вектора

## CONTENT

Тип вектора

Параметры шаблона:
* typename T


# ::stappler::network::HandleData<typename>::Function<typename>

## BRIEF

Тип функционального контейнера

## CONTENT

Тип функционального контейнера

Параметры шаблона:
* typename T


# ::stappler::network::HandleData<typename>::Map<typename,typename>

## BRIEF

Тип хранилища ключ-значение

## CONTENT

Тип хранилища ключ-значение

Параметры шаблона:
* typename K
* typename V


# ::stappler::network::HandleData<typename>::String

## BRIEF

Тип символьной строки

## CONTENT

Тип символьной строки


# ::stappler::network::HandleData<typename>::StringStream

## BRIEF

Тип стркового потока

## CONTENT

Тип стркового потока


# ::stappler::network::HandleData<typename>::Bytes

## BRIEF

Тип байтовой строки

## CONTENT

Тип байтовой строки


# ::stappler::network::HandleData<typename>::Value

## BRIEF

Тип нетипизированного значения

## CONTENT

Тип нетипизированного значения


# ::stappler::network::HandleData<typename>::HeaderMap

## BRIEF

Тип хранения заголовков

## CONTENT

Тип хранения заголовков


# ::stappler::network::HandleData<typename>::ProgressCallback

## BRIEF

Тип прогресса получения или отправки данных

## CONTENT

Тип прогресса получения или отправки данных


# ::stappler::network::HandleData<typename>::IOCallback

## BRIEF

Тип обратного вызова ввода-вывдоа

## CONTENT

Тип обратного вызова ввода-вывдоа


# ::stappler::network::HandleData<typename>::HeaderCallback

## BRIEF

Тип чтения заголовков

## CONTENT

Тип чтения заголовков


# ::stappler::network::HandleData<typename>::send

## BRIEF

Данные для отпраки на сервер

## CONTENT

Данные для отпраки на сервер

Тип: SendData<Interface>


# ::stappler::network::HandleData<typename>::process

## BRIEF

Данные для обработки процесса соединения

## CONTENT

Данные для обработки процесса соединения

Тип: ProcessData<Interface>


# ::stappler::network::HandleData<typename>::receive

## BRIEF

Данные для получения данных

## CONTENT

Данные для получения данных

Тип: ReceiveData<Interface>


# ::stappler::network::HandleData<typename>::auth

## BRIEF

Данные для авторизации

## CONTENT

Данные для авторизации

Тип: AuthData<Interface>


# ::stappler::network::HandleData<typename>::~HandleData()

## BRIEF

Деструктор

## CONTENT

Деструктор


# ::stappler::network::HandleData<typename>::reset(stappler::network::Method,stappler::StringView)

## BRIEF

Переустаналвивает метод соединения и URL

## CONTENT

Переустаналвивает метод соединения и URL

Параметры:
* stappler::network::Method
* stappler::StringView - новый URL

Возвращает:
* bool - true если успешно

# ::stappler::network::HandleData<typename>::getResponseCode() const

## BRIEF

Возвращает код ответа сервера

## CONTENT

Возвращает код ответа сервера

Возвращает:
* long

# ::stappler::network::HandleData<typename>::getErrorCode() const

## BRIEF

Возвращает код ошибки бэкэнда

## CONTENT

Возвращает код ошибки бэкэнда

Возвращает:
* long

# ::stappler::network::HandleData<typename>::getError() const

## BRIEF

Возвращает текстовую форму ошибки

## CONTENT

Возвращает текстовую форму ошибки

Возвращает:
* stappler::StringView

# ::stappler::network::HandleData<typename>::setCookieFile(stappler::StringView)

## BRIEF

Устанавливает имя файла для чтения и записи cookies

## CONTENT

Устанавливает имя файла для чтения и записи cookies

Параметры:
* stappler::StringView


# ::stappler::network::HandleData<typename>::setUserAgent(stappler::StringView)

## BRIEF

Устанавливает строку, идентифицирующую пользовательский клиент

## CONTENT

Устанавливает строку, идентифицирующую пользовательский клиент

Параметры:
* stappler::StringView


# ::stappler::network::HandleData<typename>::setUrl(stappler::StringView)

## BRIEF

Устанавливает URL для соединения

## CONTENT

Устанавливает URL для соединения

Параметры:
* stappler::StringView


# ::stappler::network::HandleData<typename>::clearHeaders()

## BRIEF

Очищает дополнительные заголовки запроса

## CONTENT

Очищает дополнительные заголовки запроса


# ::stappler::network::HandleData<typename>::addHeader(stappler::StringView,stappler::StringView)

## BRIEF

Добавляет дополнительный заголовок

## CONTENT

Добавляет дополнительный заголовок

Параметры:
* stappler::StringView - имя заголовка
* stappler::StringView - тело заголовка


# ::stappler::network::HandleData<typename>::getRequestHeaders() const

## BRIEF

Получает заголовки запроса

## CONTENT

Получает заголовки запроса

Возвращает:
* HeaderMap&

# ::stappler::network::HandleData<typename>::setMailFrom(stappler::StringView)

## BRIEF

Устанавливает обратный адрес для отправки почты

## CONTENT

Устанавливает обратный адрес для отправки почты

Параметры:
* stappler::StringView


# ::stappler::network::HandleData<typename>::clearMailTo()

## BRIEF

Очищает список получателей почты

## CONTENT

Очищает список получателей почты


# ::stappler::network::HandleData<typename>::addMailTo(stappler::StringView)

## BRIEF

Добавляет адресата для почты

## CONTENT

Добавляет адресата для почты

Параметры:
* stappler::StringView


# ::stappler::network::HandleData<typename>::setAuthority(stappler::StringView,stappler::StringView,stappler::network::AuthMethod)

## BRIEF

Устанавливает данные для авторизации пользователя стандартыми методами (не Pkey)

## CONTENT

Устанавливает данные для авторизации пользователя стандартыми методами (не Pkey)

Параметры:
* stappler::StringView - имя пользователя
* stappler::StringView - пароль
* stappler::network::AuthMethod - метод авторизации


# ::stappler::network::HandleData<typename>::setPrivateKeyAuth(stappler::BytesView)

## BRIEF

Устанавливает авторизацию по личному ключу

## CONTENT

Устанавливает авторизацию по личному ключу

Параметры:
* stappler::BytesView - данные личного ключа

Возвращает:
* bool - true если авторизация подготовлена успешно

# ::stappler::network::HandleData<typename>::setPrivateKeyAuth(crypto::PrivateKey const&)

## BRIEF

Устанавливает авторизацию по личному ключу

## CONTENT

Устанавливает авторизацию по личному ключу

Параметры:
* crypto::PrivateKey const& - личный ключ

Возвращает:
* bool - true если авторизация подготовлена успешно


# ::stappler::network::HandleData<typename>::setProxy(stappler::StringView,stappler::StringView)

## BRIEF

Устанавливает данные прокси-соединения

## CONTENT

Устанавливает данные прокси-соединения

Параметры:
* stappler::StringView - адрес прокси-сервера
* stappler::StringView - данные авторизации на прокси-сервере


# ::stappler::network::HandleData<typename>::setReceiveFile(stappler::StringView,bool)

## BRIEF

Устанавливает путь к файлу для получения данных

## CONTENT

Устанавливает путь к файлу для получения данных

Параметры:
* stappler::StringView - путь к файлу
* bool - true если необходимо возобновить загрузку


# ::stappler::network::HandleData<typename>::setReceiveCallback(stappler::network::HandleData::IOCallback&&)

## BRIEF

Устанавливает обратный вызов для получения данных от сервера

## CONTENT

Устанавливает обратный вызов для получения данных от сервера

Параметры:
* stappler::network::HandleData::IOCallback&&


# ::stappler::network::HandleData<typename>::setResumeDownload(bool)

## BRIEF

Устанавливает флаг возобновления загрузки

## CONTENT

Устанавливает флаг возобновления загрузки, если не используется получение в файл

Параметры:
* bool


# ::stappler::network::HandleData<typename>::setResumeOffset(uint64_t)

## BRIEF

Устанавливает смещение для возобновления загрузки, если не используется получение в файл

## CONTENT

Устанавливает смещение для возобновления загрузки, если не используется получение в файл

Параметры:
* uint64_t


# ::stappler::network::HandleData<typename>::getReceiveDataSource() const

## BRIEF

Получает данные для получения данных от сервера

## CONTENT

Получает данные для получения данных от сервера

Возвращает:
* const typename ReceiveData<Interface>::DataSource&

# ::stappler::network::HandleData<typename>::setSendSize(size_t)

## BRIEF

Устанавливает длину содержимого для отправки

## CONTENT

Устанавливает длину содержимого для отправки при использовании функции обратного вызова

Параметры:
* size_t


# ::stappler::network::HandleData<typename>::setSendFile(stappler::StringView,stappler::StringView)

## BRIEF

Устанавливает файл для отправки

## CONTENT

Устанавливает файл для отправки

Параметры:
* stappler::StringView - путь к файлу
* stappler::StringView - тип содержимого (заголовок Content-Type)


# ::stappler::network::HandleData<typename>::setSendCallback(stappler::network::HandleData::IOCallback&&,size_t,stappler::StringView)

## BRIEF

Устанавливает функцию обратного вызова для отправки данных

## CONTENT

Устанавливает функцию обратного вызова для отправки данных

Параметры:
* stappler::network::HandleData::IOCallback&& - функция обратного вызова, ддолжна записывать данные в предлагаемый буфер
* size_t - размер данных для отправки
* stappler::StringView - тип данных для отправки (заголовок Content-Type)


# ::stappler::network::HandleData<typename>::setSendData(stappler::StringView,stappler::StringView)

## BRIEF

Устанавливает строковые данные для отправки

## CONTENT

Устанавливает строковые данные для отправки

Параметры:
* stappler::StringView - строка для отправки
* stappler::StringView - тип данных для отправки (заголовок Content-Type)


# ::stappler::network::HandleData<typename>::setSendData(stappler::BytesView,stappler::StringView)

## BRIEF

Устанавливает байтовые данные для отправки

## CONTENT

Устанавливает байтовые данные для отправки

Параметры:
* stappler::BytesView - данные для отправки
* stappler::StringView - тип данных для отправки (заголовок Content-Type)


# ::stappler::network::HandleData<typename>::setSendData(stappler::network::HandleData::Bytes&&,stappler::StringView)

## BRIEF

Устанавливает байтовые данные для отправки

## CONTENT

Устанавливает байтовые данные для отправки

Параметры:
* stappler::network::HandleData::Bytes&& - данные для отправки
* stappler::StringView - тип данных для отправки (заголовок Content-Type)


# ::stappler::network::HandleData<typename>::setSendData(uint8_t const*,size_t,stappler::StringView)

## BRIEF

Устанавливает байтовые данные для отправки

## CONTENT

Устанавливает байтовые данные для отправки

Параметры:
* uint8_t const* - указатель на данные
* size_t - размер данных
* stappler::StringView - тип данных для отправки (заголовок Content-Type)


# ::stappler::network::HandleData<typename>::setSendData(stappler::network::HandleData::Value const&,data::EncodeFormat)

## BRIEF

Устанавливает нетипизирвоанные данные для отправки

## CONTENT

Устанавливает нетипизирвоанные данные для отправки

Параметры:
* stappler::network::HandleData::Value const& - данные для отправки
* data::EncodeFormat - формат кодирования (определяет, в том числе, Content-Type)


# ::stappler::network::HandleData<typename>::getSendDataSource() const

## BRIEF

Возвращает данные для отправки данных

## CONTENT

Возвращает данные для отправки данных

Возвращает:
* const typename SendData<Interface>::DataSource&

# ::stappler::network::HandleData<typename>::setHeaderCallback(stappler::network::HandleData::HeaderCallback&&)

## BRIEF

Устанавливает функцию для чтения принимаемых заголовков от сервера

## CONTENT

Устанавливает функцию для чтения принимаемых заголовков от сервера

Параметры:
* stappler::network::HandleData::HeaderCallback&&


# ::stappler::network::HandleData<typename>::getHeaderCallback() const

## BRIEF

Возвращает функцию для чтения заголовков

## CONTENT

Возвращает функцию для чтения заголовков

Возвращает:
* HeaderCallback&

# ::stappler::network::HandleData<typename>::getReceivedHeaderString(stappler::StringView) const

## BRIEF

Возвращает принятый заголовок в виде строки

## CONTENT

Возвращает принятый заголовок в виде строки. Имена заголовков не чувствительны к регистру.

Параметры:
* stappler::StringView - имя заголовка

Возвращает:
* stappler::StringView - тело заголовка или пустая строка


# ::stappler::network::HandleData<typename>::getReceivedHeaderInt(stappler::StringView) const

## BRIEF

Возвращает принятый заголовок в виде целого числа

## CONTENT

Возвращает принятый заголовок в виде целого числа. Имена заголовков не чувствительны к регистру.

Параметры:
* stappler::StringView - имя заголовка

Возвращает:
* int64_t - значение заголовка или 0

# ::stappler::network::HandleData<typename>::getMethod() const

## BRIEF

Возвращает метод сетевого соединения

## CONTENT

Возвращает метод сетевого соединения

Возвращает:
* stappler::network::Method

# ::stappler::network::HandleData<typename>::getUrl() const

## BRIEF

Возвращает URL соединения

## CONTENT

Возвращает URL соединения

Возвращает:
* stappler::StringView

# ::stappler::network::HandleData<typename>::getCookieFile() const

## BRIEF

Возвращает файл для чтения и записи cookies

## CONTENT

Возвращает файл для чтения и записи cookies

Возвращает:
* stappler::StringView

# ::stappler::network::HandleData<typename>::getUserAgent() const

## BRIEF

Возвращает идентификатор клиента пользователя

## CONTENT

Возвращает идентификатор клиента пользователя

Возвращает:
* stappler::StringView

# ::stappler::network::HandleData<typename>::getResponseContentType() const

## BRIEF

Возвращает тип содержимого ответа

## CONTENT

Возвращает тип содержимого ответа

Возвращает:
* stappler::StringView

# ::stappler::network::HandleData<typename>::getRecievedHeaders() const

## BRIEF

Возвращает полученные заголовки

## CONTENT

Возвращает полученные заголовки

Возвращает:
* Vector<stappler::network::HandleData::String> const&

# ::stappler::network::HandleData<typename>::setDebug(bool)

## BRIEF

Устанавливает флаг отладки

## CONTENT

Устанавливает флаг отладки

Параметры:
* bool


# ::stappler::network::HandleData<typename>::setReuse(bool)

## BRIEF

Устанавливает флаг повторного использования

## CONTENT

Устанавливает флаг повторного использования

Параметры:
* bool


# ::stappler::network::HandleData<typename>::setShared(bool)

## BRIEF

Устанавливает флаг разделяемых данных

## CONTENT

Устанавливает флаг разделяемых данных

Параметры:
* bool


# ::stappler::network::HandleData<typename>::setSilent(bool)

## BRIEF

Устанавливает флаг подавления текстовых сообщений

## CONTENT

Устанавливает флаг подавления текстовых сообщений

Параметры:
* bool


# ::stappler::network::HandleData<typename>::getDebugData() const

## BRIEF

Получает собранные отладочные данные

## CONTENT

Получает собранные отладочные данные

Возвращает:
* StringStream&

# ::stappler::network::HandleData<typename>::setDownloadProgress(stappler::network::HandleData::ProgressCallback&&)

## BRIEF

Устанавливает функцию, получающую информацию о прогрессе получения данных

## CONTENT

Устанавливает функцию, получающую информацию о прогрессе получения данных

Параметры:
* stappler::network::HandleData::ProgressCallback&&


# ::stappler::network::HandleData<typename>::setUploadProgress(stappler::network::HandleData::ProgressCallback&&)

## BRIEF

Устанавливает функцию, получающую информацию о прогрессе отправки данных

## CONTENT

Устанавливает функцию, получающую информацию о прогрессе отправки данных

Параметры:
* stappler::network::HandleData::ProgressCallback&&


# ::stappler::network::HandleData<typename>::setConnectTimeout(int)

## BRIEF

Устанавливает максимальное время ожидания соединения

## CONTENT

Устанавливает максимальное время ожидания соединения

Параметры:
* int - время в секундах


# ::stappler::network::HandleData<typename>::setLowSpeedLimit(int,size_t)

## BRIEF

Устанавливает пределя для низкой скорости соединения

## CONTENT

Устанавливает пределя для низкой скорости соединения

Параметры:
* int - предел по времени в секундах
* size_t - предел по объёму


# ::stappler::network::HandleData<typename>::setVerifyTls(bool)

## BRIEF

Устанавливает флаг требования верификации сертификата соединения

## CONTENT

Устанавливает флаг требования верификации сертификата соединения

Параметры:
* bool

# ::stappler::network::ProcessData<typename>::invalidate

## BRIEF

Флаг, показывающий, что интерфейс должен быть пересоздан после завершения использования

## CONTENT

Флаг, показывающий, что интерфейс должен быть пересоздан после завершения использования

Тип: bool