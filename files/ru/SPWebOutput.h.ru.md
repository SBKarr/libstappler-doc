Title: SPWebOutput.h


# EXTRA_WEBSERVER_WEBSERVER_UTILS_SPWEBOUTPUT_H_

## BRIEF

Заголовок функций вывода в запрос

## CONTENT

Заголовок функций вывода в запрос


# ::stappler::web::output::formatJsonAsHtml(stappler::mem_pool::OutputStream&,stappler::mem_pool::Value const&,bool)

## BRIEF

Выводит JSON как HTML

## CONTENT

Выводит JSON как HTML

Параметры:
* stappler::mem_pool::OutputStream&
* stappler::mem_pool::Value const&
* bool - true для вывода управляющих кнопок


# ::stappler::web::output::writeData(stappler::web::Request&,stappler::mem_pool::Value const&,bool)

## BRIEF

Выводит данные в поток в виде JSON или CBOR

## CONTENT

Выводит данные в поток в виде JSON или CBOR

Параметры:
* stappler::web::Request&
* stappler::mem_pool::Value const&
* bool - true если разрешена форма JSON-P


# ::stappler::web::output::writeData(stappler::web::Request&,std::basic_ostream<char>&,Function<void (const stappler::mem_pool::String &)> const&,stappler::mem_pool::Value const&,bool)

## BRIEF

Выводит данные в поток в виде JSON или CBOR

## CONTENT

Выводит данные в поток в виде JSON или CBOR

Параметры:
* stappler::web::Request&
* std::basic_ostream<char>&
* Function<void (const stappler::mem_pool::String &)> const& - функция для получения типа контента
* stappler::mem_pool::Value const&
* bool - true если разрешена форма JSON-P


# ::stappler::web::output::writeResourceFileData(stappler::web::Request&,stappler::mem_pool::Value&&)

## BRIEF

Настраивает запрос для вывода файла

## CONTENT

Настраивает запрос для вывода файла

Параметры:
* stappler::web::Request&
* stappler::mem_pool::Value&& - данные из схемы файла

Возвращает:
* stappler::web::Status - статус успешности

# ::stappler::web::output::writeResourceData(stappler::web::Request&,stappler::mem_pool::Value&&,stappler::mem_pool::Value&&)

## BRIEF

Записывает результат обработки ресурса

## CONTENT

Записывает результат обработки ресурса

Параметры:
* stappler::web::Request&
* stappler::mem_pool::Value&& - результат работы
* stappler::mem_pool::Value&& - (опционально) исходный объект для заполнения

Возвращает:
* stappler::web::Status - статус успешности

# ::stappler::web::output::writeResourceFileHeader(stappler::web::Request&,stappler::mem_pool::Value const&)

## BRIEF

Настраивает заголовки запроса для вывода файла

## CONTENT

Настраивает заголовки запроса для вывода файла

Параметры:
* stappler::web::Request&
* stappler::mem_pool::Value const& - данные из схемы файла

Возвращает:
* stappler::web::Status - статус успешности

# ::stappler::web::output::writeFileHeaders(stappler::web::Request&,stappler::mem_pool::Value const&,stappler::mem_pool::String const&)

## BRIEF

Настраивает заголовки запроса для вывода файла

## CONTENT

Настраивает заголовки запроса для вывода файла

Параметры:
* stappler::web::Request&
* stappler::mem_pool::Value const& - данные из схемы файла
* stappler::mem_pool::String const& - альтернативный тип содержимого

Возвращает:
* bool

# ::stappler::web::output::makeEtag(uint32_t,stappler::Time)

## BRIEF

Устанавливает ETag

## CONTENT

Устанавливает ETag

Параметры:
* uint32_t - ид объекта
* stappler::Time - время модификации объекта

Возвращает:
* stappler::mem_pool::String

# ::stappler::web::output::checkCacheHeaders(stappler::web::Request&,stappler::Time,stappler::StringView const&)

## BRIEF

Проверяет заголовки кеша в запросе

## CONTENT

Проверяет заголовки кеша в запросе

Параметры:
* stappler::web::Request&
* stappler::Time - время последнего изменения объекта
* stappler::StringView const& - ETag

Возвращает:
* bool - true если обновение объекту не требуется

# ::stappler::web::output::checkCacheHeaders(stappler::web::Request&,stappler::Time,uint32_t)

## BRIEF

Проверяет заголовки кеша в запросе

## CONTENT

Проверяет заголовки кеша в запросе

Параметры:
* stappler::web::Request&
* stappler::Time- время последнего изменения объекта
* uint32_t - ид объекта

Возвращает:
* bool - true если обновение объекту не требуется
