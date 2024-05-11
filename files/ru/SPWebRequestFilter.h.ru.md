Title: SPWebRequestFilter.h


# EXTRA_WEBSERVER_WEBSERVER_FILTER_SPWEBREQUESTFILTER_H_

## BRIEF

Заголовок базового фильтра запросов

## CONTENT

Заголовок базового фильтра запросов


# ::stappler::web::RequestFilter

## BRIEF

Базовый фильтр запроса

## CONTENT

Базовый фильтр запроса. Читает стандартный HTTP запрос

Базовые классы:
* AllocBase


# ::stappler::web::RequestFilter::RequestState

## BRIEF

Статус фильтра

## CONTENT

Доступ: public

Статус фильтра

Значения:
* None
* FirstLine
* Headers
* Body
* Protocol
* Code
* Status
* HeaderName
* HeaderValue


# ::stappler::web::RequestFilter::readRequestLine(stappler::StringView&,stappler::web::RequestInfo&)

## BRIEF

Читает первую строку запроса

## CONTENT

Доступ: public

Читает первую строку запроса

Параметры:
* stappler::StringView& - запрос
* stappler::web::RequestInfo& - данные для заполнения

Возвращает:
* bool - true если данные успешно прочитаны


# ::stappler::web::RequestFilter::readRequestHeader(stappler::StringView&,stappler::StringView&,stappler::StringView&)

## BRIEF

Читает заголовок запроса

## CONTENT

Доступ: public

Читает заголовок запроса

Параметры:
* stappler::StringView& - данные запроса
* stappler::StringView& - имя заголовка
* stappler::StringView& - данные аголовка

Возвращает:
* bool - true если данные успешно прочитаны
