Title: SPWebResourceHandler.h


# EXTRA_WEBSERVER_WEBSERVER_RESOURCE_SPWEBRESOURCEHANDLER_H_

## BRIEF

Заголовок обработчика для автоматически созданных ресурсов БД

## CONTENT

Заголовок обработчика для автоматически созданных ресурсов БД

# ::stappler::web::ResourceHandler

## BRIEF

Обработчик запросов к автоматически созданным ресурсам БД

## CONTENT

Обработчик запросов к автоматически созданным ресурсам БД

Базовые классы:
* RequestHandler


# ::stappler::web::ResourceHandler::Scheme

## BRIEF

Схема данных БД

## CONTENT

Доступ: public

Схема данных БД


# ::stappler::web::ResourceHandler::ResourceHandler(stappler::web::ResourceHandler::Scheme const&,stappler::mem_pool::Value const&)

## BRIEF

Конструктор

## CONTENT

Доступ: public

Конструктор

Параметры:
* stappler::web::ResourceHandler::Scheme const& - схема данных
* stappler::mem_pool::Value const& - дополнительные данные


# ::stappler::web::ResourceHandler::isRequestPermitted(stappler::web::Request&)

## BRIEF

Проверка доступа

## CONTENT

Доступ: public

Проверка доступа

Параметры:
* stappler::web::Request&

Возвращает:
* bool

# ::stappler::web::ResourceHandler::onTranslateName(stappler::web::Request&)

## BRIEF

Обработка события

## CONTENT

Доступ: public

Обработка события

Параметры:
* stappler::web::Request&

Возвращает:
* stappler::web::Status

# ::stappler::web::ResourceHandler::onInsertFilter(stappler::web::Request&)

## BRIEF

Обработка события

## CONTENT

Доступ: public

Обработка события

Параметры:
* stappler::web::Request&


# ::stappler::web::ResourceHandler::onHandler(stappler::web::Request&)

## BRIEF

Обработка события

## CONTENT

Доступ: public

Обработка события

Параметры:
* stappler::web::Request&

Возвращает:
* stappler::web::Status

# ::stappler::web::ResourceHandler::onFilterComplete(stappler::web::InputFilter*)

## BRIEF

Обработка события

## CONTENT

Доступ: public

Обработка события

Параметры:
* stappler::web::InputFilter*


# ::stappler::web::ResourceHandler::writeInfoToReqest(stappler::web::Request&)

## BRIEF

Записывает информацию о результате в запрос

## CONTENT

Доступ: public

Записывает информацию о результате в запрос

Параметры:
* stappler::web::Request&

Возвращает:
* stappler::web::Status

# ::stappler::web::ResourceHandler::writeToRequest(stappler::web::Request&)

## BRIEF

Записывает результат в запрос

## CONTENT

Доступ: public

Записывает результат в запрос

Параметры:
* stappler::web::Request&

Возвращает:
* stappler::web::Status

# ::stappler::web::ResourceHandler::writeDataToRequest(stappler::web::Request&,stappler::mem_pool::Value&&)

## BRIEF

Записывает данные в запрос

## CONTENT

Доступ: public

Записывает данные в запрос

Параметры:
* stappler::web::Request&
* stappler::mem_pool::Value&&

Возвращает:
* stappler::web::Status

# ::stappler::web::ResourceHandler::getHintedStatus(stappler::web::Status) const

## BRIEF

Возвращает желательный статус результата запроса

## CONTENT

Доступ: protected

Возвращает желательный статус результата запроса

Параметры:
* stappler::web::Status

Возвращает:
* stappler::web::Status

# ::stappler::web::ResourceHandler::getResource(stappler::web::Request&)

## BRIEF

Возвращает ресурс, соотвествующий запросу

## CONTENT

Доступ: protected

Возвращает ресурс, соотвествующий запросу

Параметры:
* stappler::web::Request&

Возвращает:
* stappler::web::Resource*

# ::stappler::web::ResourceHandler::_method

## BRIEF

Метод запроса

## CONTENT

Доступ: protected

Метод запроса. Метод может быть подменён в строке запроса, например `?METHOD+PUT` для POST

Тип: stappler::web::RequestMethod


# ::stappler::web::ResourceHandler::_scheme

## BRIEF

Схема данных

## CONTENT

Доступ: protected

Схема данных

Тип: db::Scheme const&


# ::stappler::web::ResourceHandler::_resource

## BRIEF

Ресурс

## CONTENT

Доступ: protected

Ресурс

Тип: stappler::web::Resource*


# ::stappler::web::ResourceHandler::_value

## BRIEF

Дополнительные данные

## CONTENT

Доступ: protected

Дополнительные данные

Тип: stappler::mem_pool::Value


# ::stappler::web::ResourceHandler::_transaction

## BRIEF

Транзакция БД

## CONTENT

Доступ: protected

Транзакция БД

Тип: db::Transaction


# ::stappler::web::ResourceMultiHandler

## BRIEF

Обработчик множественных запросов к БД

## CONTENT

Обработчик множественных запросов к БД. Позволяет отправлять одновременные запросы на получение данных из нескольких схем, но работает только на их получение.

Базовые классы:
* RequestHandler


# ::stappler::web::ResourceMultiHandler::Scheme

## BRIEF

Тип схемы данных

## CONTENT

Доступ: public

Тип схемы данных


# ::stappler::web::ResourceMultiHandler::ResourceMultiHandler(Map<stappler::StringView, const stappler::web::ResourceMultiHandler::Scheme *> const&)

## BRIEF

Конструктор

## CONTENT

Доступ: public

Конструктор

Параметры:
* Map<stappler::StringView, const stappler::web::ResourceMultiHandler::Scheme *> const& - структура схем данных


# ::stappler::web::ResourceMultiHandler::isRequestPermitted(stappler::web::Request&)

## BRIEF

Проверка доступа

## CONTENT

Доступ: public

Проверка доступа

Параметры:
* stappler::web::Request&

Возвращает:
* bool

# ::stappler::web::ResourceMultiHandler::onTranslateName(stappler::web::Request&)

## BRIEF

Обработчик события

## CONTENT

Доступ: public

Обработчик события

Параметры:
* stappler::web::Request&

Возвращает:
* stappler::web::Status

# ::stappler::web::ResourceMultiHandler::writeDataToRequest(stappler::web::Request&,stappler::mem_pool::Value&&)

## BRIEF

Записывает результат в ответ на запрос

## CONTENT

Доступ: protected

Записывает результат в ответ на запрос

Параметры:
* stappler::web::Request&
* stappler::mem_pool::Value&&

Возвращает:
* stappler::web::Status

# ::stappler::web::ResourceMultiHandler::resultData

## BRIEF

Результат работы ресурсов

## CONTENT

Доступ: protected

Результат работы ресурсов

Тип: stappler::mem_pool::Value


# ::stappler::web::ResourceMultiHandler::_schemes

## BRIEF

Структуора схем данных

## CONTENT

Доступ: protected

Структуора схем данных

Тип: Map<stappler::StringView, const stappler::web::ResourceMultiHandler::Scheme *>


# ::stappler::web::ResourceMultiHandler::_transaction

## BRIEF

Транзакция БД

## CONTENT

Доступ: protected

Транзакция БД

Тип: db::Transaction
