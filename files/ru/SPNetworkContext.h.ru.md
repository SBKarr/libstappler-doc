Title: SPNetworkContext.h


# STAPPLER_NETWORK_SPNETWORKCONTEXT_H_

## BRIEF

Заголовок контекста сетевого соединения

## CONTENT

Заголовок контекста сетевого соединения. Этот заголовок содержит детали реализации сетевого интерфейса, которые не нужны для его использования. Включать этот файл стоит только для реализации расширения сетевого интерфейса или создания выделенного потока работы с сетью.


# ::stappler::network::Context<typename>

## BRIEF

Контекст исполнения сетевого запроса

## CONTENT

Контекст исполнения сетевого запроса. Это внутренняя структура, которую стоит использовать только при собственной реализации потока, обрабатывающего сетевые запросы.

Параметры шаблона:
* typename Interface - используемый интерфейс памяти


# ::stappler::network::Context<typename>::userdata

## BRIEF

Указатель на пользовательские данные

## CONTENT

Тип: void*

Указатель на пользовательские данные

# ::stappler::network::Context<typename>::curl

## BRIEF

Указатель на основную управляющую структуру CURL

## CONTENT

Тип: CURL*

Указатель на основную управляющую структуру CURL

# ::stappler::network::Context<typename>::share

## BRIEF

Указатель на хранилище разделяемых данных CURL

## CONTENT

Тип: CURLSH*

Указатель на хранилище разделяемых данных CURL, может быть nullptr

# ::stappler::network::Context<typename>::origHandle

## BRIEF

Указатель на управляющую структуру, создавшую этот контекст

## CONTENT

Тип: Handle<Interface>*

Указатель на управляющую структуру, создавшую этот контекст

# ::stappler::network::Context<typename>::handle

## BRIEF

Указатель на управляющую структуру, владеющую этим контекстом

## CONTENT

Тип: HandleData<Interface>*

Указатель на управляющую структуру, владеющую этим контекстом, может быть nullptr

# ::stappler::network::Context<typename>::headersData

## BRIEF

Массив текущих применимых заголовков

## CONTENT

Тип: typename HandleData<Interface>::template Vector<typename HandleData<Interface>::String>

Массив текущих применимых заголовков

# ::stappler::network::Context<typename>::headers

## BRIEF

Связный список заголовков, переданный в CURL

## CONTENT

Тип: curl_slist*

Связный список заголовков, переданный в CURL, может быть nullptr

# ::stappler::network::Context<typename>::mailTo

## BRIEF

Связный список целевых адресов почты, переданный в CURL

## CONTENT

Тип: curl_slist*

Связный список целевых адресов почты, переданный в CURL, может быть nullptr

# ::stappler::network::Context<typename>::inputFile

## BRIEF

Файл, в который запрос пишет данные, поступающие от сервера

## CONTENT

Тип: FILE*

Файл, в который запрос пишет данные, поступающие от сервера, может быть nullptr

# ::stappler::network::Context<typename>::outputFile

## BRIEF

Файл, из которого запрос читает данные для передачи на сервер

## CONTENT

Тип: FILE*

Файл, из которого запрос читает данные для передачи на сервер,  может быть nullptr

# ::stappler::network::Context<typename>::inputPos

## BRIEF

Позиция для начала записи в файл входящих данных

## CONTENT

Тип: uint64_t

Позиция для начала записи в файл входящих данных. На её основе определяется заголовок Range для поддержки продолжения загрузки

# ::stappler::network::Context<typename>::code

## BRIEF

Текущий код HTTP/SMPT ответа

## CONTENT

Тип: int

Текущий код HTTP/SMPT ответа

# ::stappler::network::Context<typename>::success

## BRIEF

Флаг успешности выполнения запроса

## CONTENT

Тип: bool

Флаг успешности выполнения запроса

# ::stappler::network::Context<typename>::error

## BRIEF

Буфер для хранения текстовых ошибок

## CONTENT

Тип: std::array<char, 256>

Буфер для хранения текстовых ошибок

# ::stappler::network::prepare<typename>(HandleData<Interface>&,Context<Interface>*,Callback<bool (CURL *)> const&)

## BRIEF

Функция, подготавливающая запрос к исполнению

## CONTENT

Функция, подготавливающая запрос к исполнению. При её вызове все необходимые для выполнения запроса данные записываются в управляющую структуру CURL.

Параметры шаблона:
* typename Interface - используемый инетрфейс памяти

Параметры:
* HandleData<Interface>& - подготавливаемая структура запроса
* Context<Interface>* - используемый контекст
* Callback<bool (CURL *)> const& - функция, вызываемая после успешной подготовки запроса

Возвращает:
* bool - true если подготовка выполнена успешно

# ::stappler::network::finalize<typename>(HandleData<Interface>&,Context<Interface>*,Callback<bool (CURL *)> const&)

## BRIEF

Функция, обрабатывающая результат выполнения запроса

## CONTENT

Функция, обрабатывающая результат выполнения запроса. Заполняет выходные данные из управляющей структуры CURL.

Параметры шаблона:
* typename Interface - используемый инетрфейс памяти

Параметры:
* HandleData<Interface>& - основная структура, завершившая запрос
* Context<Interface>* - используемый контекст
* Callback<bool (CURL *)> const& - функция, вызываемая в начале разбора результата

Возвращает:
* bool - true если результат разобран успешно

# ::stappler::network::perform<typename>(HandleData<Interface>&,Callback<bool (CURL *)> const&,Callback<bool (CURL *)> const&)

## BRIEF

Выполняет сетевой запрос как единичный

## CONTENT

Выполняет сетевой запрос как единичный (не используя средства curl_multi). Выполняет полный цикл действий: создание контекста, подготовку, зпрос и обработку результата.

Параметры шаблона:
* typename Interface - используемый инетрфейс памяти

Параметры:
* HandleData<Interface>& - структура запроса
* Callback<bool (CURL *)> const& - функция, вызываемая перед выполнением запроса, но после подготовки
* Callback<bool (CURL *)> const& - функция, вызываемая после выполнения запроса, но до разбора результата

Возвращает:
* bool - true если запрос успешно выполнен