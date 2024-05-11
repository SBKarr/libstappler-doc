Title: SPWebTools.h


# EXTRA_WEBSERVER_WEBSERVER_TOOLS_SPWEBTOOLS_H_

## BRIEF

Заголовок инструментов управления сервером

## CONTENT

Заголовок инструментов управления сервером


# ::stappler::web::getCompileDate()

## BRIEF

Возвращает время сборки

## CONTENT

Возвращает время сборки

Возвращает:
* stappler::StringView

# ::stappler::web::getCompileUnixTime()

## BRIEF

Возвращает время сборки

## CONTENT

Возвращает время сборки

Возвращает:
* stappler::Time

# ::stappler::web::tools::AuthHandler

## BRIEF

Обработчик запросов авторизации

## CONTENT

Обработчик запросов авторизации. Служит для авторизации администраторов сервера.

Базовые классы:
* DataHandler


# ::stappler::web::tools::AuthHandler::isRequestPermitted(stappler::web::Request&)

## BRIEF

Проверка доступа

## CONTENT

Доступ: public

Проверка доступа

Параметры:
* stappler::web::Request&

Возвращает:
* bool

# ::stappler::web::tools::AuthHandler::onTranslateName(stappler::web::Request&)

## BRIEF

Обработка запроса

## CONTENT

Доступ: public

Обработка запроса

Параметры:
* stappler::web::Request&

Возвращает:
* stappler::web::Status

# ::stappler::web::tools::AuthHandler::processDataHandler(stappler::web::Request&,stappler::mem_pool::Value&,stappler::mem_pool::Value&)

## BRIEF

Обработка запроса

## CONTENT

Доступ: public

Обработка запроса

Параметры:
* stappler::web::Request&
* stappler::mem_pool::Value&
* stappler::mem_pool::Value&

Возвращает:
* bool

# ::stappler::web::tools::ShellSocket

## BRIEF

Обработчик вебсокета серверной консоли

## CONTENT

Обработчик вебсокета серверной консоли

Базовые классы:
* WebsocketManager


# ::stappler::web::tools::ShellSocket::~ShellSocket()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор

# ::stappler::web::tools::ShellSocket::ShellSocket(stappler::web::Host const&)

## BRIEF

Конструктор

## CONTENT

Доступ: public

Конструктор

Параметры:
* stappler::web::Host const&


# ::stappler::web::tools::ShellSocket::onAccept(stappler::web::Request const&,stappler::mempool::base::pool_t*)

## BRIEF

Обрабатывает открытие соединения

## CONTENT

Доступ: public

Обрабатывает открытие соединения

Параметры:
* stappler::web::Request const&
* stappler::mempool::base::pool_t*

Возвращает:
* stappler::web::WebsocketHandler*

# ::stappler::web::tools::ShellSocket::onBroadcast(stappler::mem_pool::Value const&)

## BRIEF

Обрабатывает широковещательное сообщение

## CONTENT

Доступ: public

Обрабатывает широковещательное сообщение

Параметры:
* stappler::mem_pool::Value const&

Возвращает:
* bool

# ::stappler::web::tools::ShellGui

## BRIEF

Обработчик интерфейса командной строки сервера

## CONTENT

Обработчик интерфейса командной строки сервера

Базовые классы:
* RequestHandler


# ::stappler::web::tools::ShellGui::isRequestPermitted(stappler::web::Request&)

## BRIEF

Контроль доступа

## CONTENT

Доступ: public

Контроль доступа

Параметры:
* stappler::web::Request&

Возвращает:
* bool

# ::stappler::web::tools::ShellGui::onPostReadRequest(stappler::web::Request&)

## BRIEF

Обработка запроса

## CONTENT

Доступ: public

Обработка запроса

Параметры:
* stappler::web::Request&

Возвращает:
* stappler::web::Status

# ::stappler::web::tools::ShellGui::onInsertFilter(stappler::web::Request&)

## BRIEF

Обработка запроса

## CONTENT

Доступ: public

Обработка запроса

Параметры:
* stappler::web::Request&


# ::stappler::web::tools::ShellGui::onHandler(stappler::web::Request&)

## BRIEF

Обработка запроса

## CONTENT

Доступ: public

Обработка запроса

Параметры:
* stappler::web::Request&

Возвращает:
* stappler::web::Status

# ::stappler::web::tools::ShellGui::onFilterComplete(stappler::web::InputFilter*)

## BRIEF

Обработка запроса

## CONTENT

Доступ: public

Обработка запроса

Параметры:
* stappler::web::InputFilter*


# ::stappler::web::tools::ShellGui::_resource

## BRIEF

Ресурс доступа

## CONTENT

Доступ: protected

Ресурс доступа

Тип: stappler::web::Resource*


# ::stappler::web::tools::ServerGui

## BRIEF

Обработчик графического интерфейса управления сервером

## CONTENT

Обработчик графического интерфейса управления сервером

Базовые классы:
* DataHandler


# ::stappler::web::tools::ServerGui::defineBasics(pug::Context&,stappler::web::Request&,db::User*)

## BRIEF

Загружает базовые функции шаблона

## CONTENT

Доступ: public

Загружает базовые функции шаблона

Параметры:
* pug::Context&
* stappler::web::Request&
* db::User*


# ::stappler::web::tools::ServerGui::ServerGui()

## BRIEF

Конструктор

## CONTENT

Доступ: public

Конструктор

# ::stappler::web::tools::ServerGui::isRequestPermitted(stappler::web::Request&)

## BRIEF

Контроль доступа

## CONTENT

Доступ: public

Контроль доступа

Параметры:
* stappler::web::Request&

Возвращает:
* bool

# ::stappler::web::tools::ServerGui::onTranslateName(stappler::web::Request&)

## BRIEF

Обработка запроса

## CONTENT

Доступ: public

Обработка запроса

Параметры:
* stappler::web::Request&

Возвращает:
* stappler::web::Status

# ::stappler::web::tools::ServerGui::onFilterComplete(stappler::web::InputFilter*)

## BRIEF

Обработка запроса

## CONTENT

Доступ: public

Обработка запроса

Параметры:
* stappler::web::InputFilter*


# ::stappler::web::tools::ServerGui::_transaction

## BRIEF

Транзакция к БД

## CONTENT

Доступ: protected

Транзакция к БД

Тип: db::Transaction


# ::stappler::web::tools::TestHandler

## BRIEF

Обработчик автоматических тестов

## CONTENT

Обработчик автоматических тестов

Базовые классы:
* DataHandler


# ::stappler::web::tools::TestHandler::TestHandler()

## BRIEF

Конструктор

## CONTENT

Доступ: public

Конструктор


# ::stappler::web::tools::TestHandler::isRequestPermitted(stappler::web::Request&)

## BRIEF

Контроль доступа

## CONTENT

Доступ: public

Контроль доступа

Параметры:
* stappler::web::Request&

Возвращает:
* bool

# ::stappler::web::tools::TestHandler::processDataHandler(stappler::web::Request&,stappler::mem_pool::Value&,stappler::mem_pool::Value&)

## BRIEF

Обрабатывает запрос

## CONTENT

Доступ: public

Обрабатывает запрос

Параметры:
* stappler::web::Request&
* stappler::mem_pool::Value&
* stappler::mem_pool::Value&

Возвращает:
* bool

# ::stappler::web::tools::TestHandler::processEmailTest(stappler::web::Request&,stappler::mem_pool::Value&,stappler::mem_pool::Value const&)

## BRIEF

Тесты email

## CONTENT

Доступ: protected

Тесты email

Параметры:
* stappler::web::Request&
* stappler::mem_pool::Value&
* stappler::mem_pool::Value const&

Возвращает:
* bool

# ::stappler::web::tools::TestHandler::processUrlTest(stappler::web::Request&,stappler::mem_pool::Value&,stappler::mem_pool::Value const&)

## BRIEF

Тесты URL

## CONTENT

Доступ: protected

Тесты URL

Параметры:
* stappler::web::Request&
* stappler::mem_pool::Value&
* stappler::mem_pool::Value const&

Возвращает:
* bool

# ::stappler::web::tools::TestHandler::processUserTest(stappler::web::Request&,stappler::mem_pool::Value&,stappler::mem_pool::Value const&)

## BRIEF

Тесты пользователей

## CONTENT

Доступ: protected

Тесты пользователей

Параметры:
* stappler::web::Request&
* stappler::mem_pool::Value&
* stappler::mem_pool::Value const&

Возвращает:
* bool

# ::stappler::web::tools::TestHandler::processImageTest(stappler::web::Request&,stappler::mem_pool::Value&,stappler::mem_pool::Value const&,db::InputFile&)

## BRIEF

Тесты изображений

## CONTENT

Доступ: protected

Тесты изображений

Параметры:
* stappler::web::Request&
* stappler::mem_pool::Value&
* stappler::mem_pool::Value const&
* db::InputFile&

Возвращает:
* bool

# ::stappler::web::tools::ErrorsGui

## BRIEF

Обработчик интерфейса сообщений об ошибках

## CONTENT

Обработчик интерфейса сообщений об ошибках

Базовые классы:
* RequestHandler


# ::stappler::web::tools::ErrorsGui::isRequestPermitted(stappler::web::Request&)

## BRIEF

Контроль доступа

## CONTENT

Доступ: public

Контроль доступа

Параметры:
* stappler::web::Request&

Возвращает:
* bool

# ::stappler::web::tools::ErrorsGui::onTranslateName(stappler::web::Request&)

## BRIEF

Обработка запроса

## CONTENT

Доступ: public

Обработка запроса

Параметры:
* stappler::web::Request&

Возвращает:
* stappler::web::Status

# ::stappler::web::tools::HandlersGui

## BRIEF

Обработчик интерфейса информации об обработчиках

## CONTENT

Обработчик интерфейса информации об обработчиках

Базовые классы:
* RequestHandler


# ::stappler::web::tools::HandlersGui::isRequestPermitted(stappler::web::Request&)

## BRIEF

Контроль доступа

## CONTENT

Доступ: public

Контроль доступа

Параметры:
* stappler::web::Request&

Возвращает:
* bool

# ::stappler::web::tools::HandlersGui::onTranslateName(stappler::web::Request&)

## BRIEF

Обработка запроса

## CONTENT

Доступ: public

Обработка запроса

Параметры:
* stappler::web::Request&

Возвращает:
* stappler::web::Status

# ::stappler::web::tools::ReportsGui

## BRIEF

Обработчик интерфейса отчётов об обновлениях

## CONTENT

Обработчик интерфейса отчётов об обновлениях

Базовые классы:
* RequestHandler


# ::stappler::web::tools::ReportsGui::isRequestPermitted(stappler::web::Request&)

## BRIEF

Контроль доступа

## CONTENT

Доступ: public

Контроль доступа

Параметры:
* stappler::web::Request&

Возвращает:
* bool

# ::stappler::web::tools::ReportsGui::onTranslateName(stappler::web::Request&)

## BRIEF

Обработка запроса

## CONTENT

Доступ: public

Обработка запроса

Параметры:
* stappler::web::Request&

Возвращает:
* stappler::web::Status

# ::stappler::web::tools::VirtualGui

## BRIEF

Обработчик доступа к виртуальным файлам

## CONTENT

Обработчик доступа к виртуальным файлам

Базовые классы:
* RequestHandler


# ::stappler::web::tools::VirtualGui::isRequestPermitted(stappler::web::Request&)

## BRIEF

Контроль доступа

## CONTENT

Доступ: public

Контроль доступа

Параметры:
* stappler::web::Request&

Возвращает:
* bool

# ::stappler::web::tools::VirtualGui::onTranslateName(stappler::web::Request&)

## BRIEF

Обработка запроса

## CONTENT

Доступ: public

Обработка запроса

Параметры:
* stappler::web::Request&

Возвращает:
* stappler::web::Status

# ::stappler::web::tools::VirtualGui::onHandler(stappler::web::Request&)

## BRIEF

Обработка запроса

## CONTENT

Доступ: public

Обработка запроса

Параметры:
* stappler::web::Request&

Возвращает:
* stappler::web::Status

# ::stappler::web::tools::VirtualGui::onInsertFilter(stappler::web::Request&)

## BRIEF

Обработка запроса

## CONTENT

Доступ: public

Обработка запроса

Параметры:
* stappler::web::Request&


# ::stappler::web::tools::VirtualGui::onFilterComplete(stappler::web::InputFilter*)

## BRIEF

Обработка запроса

## CONTENT

Доступ: public

Обработка запроса

Параметры:
* stappler::web::InputFilter*


# ::stappler::web::tools::VirtualGui::readMeta(stappler::StringView) const

## BRIEF

Читает метаданные файла

## CONTENT

Доступ: protected

Читает метаданные файла

Параметры:
* stappler::StringView

Возвращает:
* stappler::mem_pool::Value

# ::stappler::web::tools::VirtualGui::writeData(stappler::mem_pool::Value&) const

## BRIEF

Записывает данные в ответ

## CONTENT

Доступ: protected

Записывает данные в ответ

Параметры:
* stappler::mem_pool::Value&


# ::stappler::web::tools::VirtualGui::createArticle(stappler::mem_pool::Value const&)

## BRIEF

Создаёт новую статью в документации

## CONTENT

Доступ: protected

Создаёт новую статью в документации

Параметры:
* stappler::mem_pool::Value const&

Возвращает:
* bool

# ::stappler::web::tools::VirtualGui::createCategory(stappler::mem_pool::Value const&)

## BRIEF

Создаёт новую категорию в документации

## CONTENT

Доступ: protected

Создаёт новую категорию в документации

Параметры:
* stappler::mem_pool::Value const&

Возвращает:
* bool

# ::stappler::web::tools::VirtualGui::makeMdContents(stappler::web::Request&,pug::Context&,stappler::StringView) const

## BRIEF

Рендерит статью в формате Markdown

## CONTENT

Доступ: protected

Рендерит статью в формате Markdown

Параметры:
* stappler::web::Request&
* pug::Context&
* stappler::StringView


# ::stappler::web::tools::VirtualGui::makeDirInfo(stappler::StringView,bool) const

## BRIEF

Рендерит информацию о директории документации

## CONTENT

Доступ: protected

Рендерит информацию о директории документации

Параметры:
* stappler::StringView
* bool

Возвращает:
* stappler::mem_pool::Value

# ::stappler::web::tools::VirtualGui::_virtual

## BRIEF

Является ли файл виртуальным

## CONTENT

Доступ: protected

Является ли файл виртуальным

Тип: bool


# ::stappler::web::tools::VirtualGui::_editable

## BRIEF

Можно ли редактировать файл

## CONTENT

Доступ: protected

Можно ли редактировать файл

Тип: bool


# ::stappler::web::tools::VirtualFilesystem

## BRIEF

Обработчик доступа к виртуальным файлам

## CONTENT

Обработчик доступа к виртуальным файлам

Базовые классы:
* RequestHandler


# ::stappler::web::tools::VirtualFilesystem::isRequestPermitted(stappler::web::Request&)

## BRIEF

Контроль доступа

## CONTENT

Доступ: public

Контроль доступа

Параметры:
* stappler::web::Request&

Возвращает:
* bool

# ::stappler::web::tools::VirtualFilesystem::onTranslateName(stappler::web::Request&)

## BRIEF

Обработчик запроса

## CONTENT

Доступ: public

Обработчик запроса

Параметры:
* stappler::web::Request&

Возвращает:
* stappler::web::Status

# ::stappler::web::tools::registerTools(stappler::StringView,stappler::web::Host&)

## BRIEF

Регистрирует интерфейс сервера для хоста

## CONTENT

Регистрирует интерфейс сервера для хоста

Параметры:
* stappler::StringView
* stappler::web::Host&
