Title: SPWebMultipartParser.h


# EXTRA_WEBSERVER_WEBSERVER_FILTER_SPWEBMULTIPARTPARSER_H_

## BRIEF

Заголовок парсера для запроса типа multipart

## CONTENT

Заголовок парсера для запроса типа multipart


# ::stappler::web::MultipartParser

## BRIEF

Парсер типа multipart

## CONTENT

Парсер типа multipart

Базовые классы:
* InputParser


# ::stappler::web::MultipartParser::Reader

## BRIEF

Тип интерфейса чтения

## CONTENT

Доступ: public

Тип интерфейса чтения


# ::stappler::web::MultipartParser::MultipartParser(db::InputConfig const&,size_t,stappler::StringView const&)

## BRIEF

Конструктор

## CONTENT

Доступ: public

Конструктор

Параметры:
* db::InputConfig const& - конфигурация
* size_t - длина запроса
* stappler::StringView const& - строка-ограничитель


# ::stappler::web::MultipartParser::run(stappler::StringView)

## BRIEF

Запускает разбор запроса

## CONTENT

Доступ: public

Запускает разбор запроса

Параметры:
* stappler::StringView


# ::stappler::web::MultipartParser::finalize()

## BRIEF

Заканчивает разбор запроса

## CONTENT

Доступ: public

Заканчивает разбор запроса


# ::stappler::web::MultipartParser::State

## BRIEF

Статус разбора

## CONTENT

Доступ: protected

Статус разбора

Значения:
* Begin
* BeginBlock
* HeaderLine
* Data
* End


# ::stappler::web::MultipartParser::Data

## BRIEF

Тип чтения данных

## CONTENT

Доступ: protected

Тип чтения данных

Значения:
* Var - переменная
* File - файл
* FileAsData - файл как переменная
* Skip


# ::stappler::web::MultipartParser::Header

## BRIEF

Тип внутреннего заголовка блока

## CONTENT

Доступ: protected

Тип внутреннего заголовка блока

Значения:
* Begin
* ContentDisposition
* ContentDispositionParams
* ContentDispositionName
* ContentDispositionFileName
* ContentDispositionSize
* ContentDispositionUnknown
* ContentType
* ContentEncoding
* Unknown


# ::stappler::web::MultipartParser::Literal

## BRIEF

Тип литерала в заголовке

## CONTENT

Доступ: protected

Тип литерала в заголовке

Значения:
* None
* Plain
* Quoted


# ::stappler::web::MultipartParser::VarState

## BRIEF

Тип чтения переменной

## CONTENT

Доступ: protected

Тип чтения переменной

Значения:
* Key
* SubKey
* SubKeyEnd
* Value
* End


# ::stappler::web::MultipartParser::flushVarName(stappler::web::MultipartParser::Reader&)

## BRIEF

Записывает результат чтения переменной

## CONTENT

Доступ: protected

Записывает результат чтения переменной

Параметры:
* stappler::web::MultipartParser::Reader&

Возвращает:
* stappler::mem_pool::Value*

# ::stappler::web::MultipartParser::flushLiteral(stappler::web::MultipartParser::Reader&,bool)

## BRIEF

Записывает результат чтения литерала

## CONTENT

Доступ: protected

Записывает результат чтения литерала

Параметры:
* stappler::web::MultipartParser::Reader&
* bool


# ::stappler::web::MultipartParser::flushData(stappler::web::MultipartParser::Reader&)

## BRIEF

Записывает результат чтения данных

## CONTENT

Доступ: protected

Записывает результат чтения данных

Параметры:
* stappler::web::MultipartParser::Reader&


# ::stappler::web::MultipartParser::readBegin(stappler::web::MultipartParser::Reader&)

## BRIEF

Начинает чтение блока описания

## CONTENT

Доступ: protected

Начинает чтение блока описания

Параметры:
* stappler::web::MultipartParser::Reader&


# ::stappler::web::MultipartParser::readBlock(stappler::web::MultipartParser::Reader&)

## BRIEF

Читает вложенный блок

## CONTENT

Доступ: protected

Читает вложенный блок

Параметры:
* stappler::web::MultipartParser::Reader&


# ::stappler::web::MultipartParser::readHeaderBegin(stappler::web::MultipartParser::Reader&)

## BRIEF

Читает заголовок вложенного блока

## CONTENT

Доступ: protected

Читает заголовок вложенного блока

Параметры:
* stappler::web::MultipartParser::Reader&


# ::stappler::web::MultipartParser::readHeaderContentDisposition(stappler::web::MultipartParser::Reader&)

## BRIEF

Читает внутренний заголовок

## CONTENT

Доступ: protected

Читает внутренний заголовок

Параметры:
* stappler::web::MultipartParser::Reader&


# ::stappler::web::MultipartParser::readHeaderContentDispositionParam(stappler::web::MultipartParser::Reader&)

## BRIEF

Читает внутренний заголовок

## CONTENT

Доступ: protected

Читает внутренний заголовок

Параметры:
* stappler::web::MultipartParser::Reader&


# ::stappler::web::MultipartParser::readHeaderValue(stappler::web::MultipartParser::Reader&)

## BRIEF

Читает значение

## CONTENT

Доступ: protected

Читает значение

Параметры:
* stappler::web::MultipartParser::Reader&


# ::stappler::web::MultipartParser::readHeaderDummy(stappler::web::MultipartParser::Reader&)

## BRIEF

Пропускает значение

## CONTENT

Доступ: protected

Пропускает значение

Параметры:
* stappler::web::MultipartParser::Reader&


# ::stappler::web::MultipartParser::readPlainLiteral(stappler::web::MultipartParser::Reader&)

## BRIEF

Читает необработанный текст

## CONTENT

Доступ: protected

Читает необработанный текст

Параметры:
* stappler::web::MultipartParser::Reader&


# ::stappler::web::MultipartParser::readQuotedLiteral(stappler::web::MultipartParser::Reader&)

## BRIEF

Читает литерал

## CONTENT

Доступ: protected

Читает литерал

Параметры:
* stappler::web::MultipartParser::Reader&


# ::stappler::web::MultipartParser::readHeaderContentDispositionValue(stappler::web::MultipartParser::Reader&)

## BRIEF

Читает значение заголовка

## CONTENT

Доступ: protected

Читает значение заголовка

Параметры:
* stappler::web::MultipartParser::Reader&


# ::stappler::web::MultipartParser::readHeaderContentDispositionDummy(stappler::web::MultipartParser::Reader&)

## BRIEF

Читает значение заголовка

## CONTENT

Доступ: protected

Читает значение заголовка

Параметры:
* stappler::web::MultipartParser::Reader&


# ::stappler::web::MultipartParser::readHeader(stappler::web::MultipartParser::Reader&)

## BRIEF

Читает заголовок

## CONTENT

Доступ: protected

Читает заголовок

Параметры:
* stappler::web::MultipartParser::Reader&


# ::stappler::web::MultipartParser::readData(stappler::web::MultipartParser::Reader&)

## BRIEF

Читает данные

## CONTENT

Доступ: protected

Читает данные

Параметры:
* stappler::web::MultipartParser::Reader&


# ::stappler::web::MultipartParser::flushString(stappler::StringView&,stappler::mem_pool::Value*,stappler::web::MultipartParser::VarState)

## BRIEF

Добавляет строку в данные

## CONTENT

Доступ: protected

Добавляет строку в данные

Параметры:
* stappler::StringView&
* stappler::mem_pool::Value*
* stappler::web::MultipartParser::VarState

Возвращает:
* stappler::mem_pool::Value*

# ::stappler::web::MultipartParser::name

## BRIEF

Имя блока

## CONTENT

Доступ: protected

Имя блока

Тип: stappler::mem_pool::String


# ::stappler::web::MultipartParser::file

## BRIEF

Имя файла в блоке

## CONTENT

Доступ: protected

Имя файла в блоке

Тип: stappler::mem_pool::String


# ::stappler::web::MultipartParser::type

## BRIEF

Тип данных в блоке

## CONTENT

Доступ: protected

Тип данных в блоке

Тип: stappler::mem_pool::String


# ::stappler::web::MultipartParser::encoding

## BRIEF

Кодировка в блоке

## CONTENT

Доступ: protected

Кодировка в блоке

Тип: stappler::mem_pool::String


# ::stappler::web::MultipartParser::size

## BRIEF

Размер блока

## CONTENT

Доступ: protected

Размер блока

Тип: size_t


# ::stappler::web::MultipartParser::state

## BRIEF

Статус разбора

## CONTENT

Доступ: protected

Статус разбора

Тип: stappler::web::MultipartParser::State


# ::stappler::web::MultipartParser::header

## BRIEF

Структуора заголовка

## CONTENT

Доступ: protected

Структуора заголовка

Тип: stappler::web::MultipartParser::Header


# ::stappler::web::MultipartParser::literal

## BRIEF

Тип литерала

## CONTENT

Доступ: protected

Тип литерала

Тип: stappler::web::MultipartParser::Literal


# ::stappler::web::MultipartParser::data

## BRIEF

Данные

## CONTENT

Доступ: protected

Данные

Тип: stappler::web::MultipartParser::Data


# ::stappler::web::MultipartParser::match

## BRIEF

Число байт, совпадающих с граничной строкой

## CONTENT

Доступ: protected

Число байт, совпадающих с граничной строкой

Тип: size_t


# ::stappler::web::MultipartParser::boundary

## BRIEF

Граничный блок

## CONTENT

Доступ: protected

Граничный блок

Тип: stappler::mem_pool::String


# ::stappler::web::MultipartParser::buf

## BRIEF

Внутренний буфер

## CONTENT

Доступ: protected

Внутренний буфер

Тип: BufferTemplate<stappler::mem_pool::Interface>


# ::stappler::web::MultipartParser::streamBuf

## BRIEF

Буфер потока

## CONTENT

Доступ: protected

Буфер потока

Тип: stappler::mem_pool::StringStream


# ::stappler::web::MultipartParser::target

## BRIEF

Цель для записи текущих данных

## CONTENT

Доступ: protected

Цель для записи текущих данных

Тип: stappler::mem_pool::Value*
