Title: SPWebVirtualFile.h


# EXTRA_WEBSERVER_WEBSERVER_UTILS_SPWEBVIRTUALFILE_H_

## BRIEF

Заголовок интерфейса виртуальных файлов

## CONTENT

Заголовок интерфейса виртуальных файлов


# ::stappler::web::VirtualFile

## BRIEF

Тип виртуального файла

## CONTENT

Тип виртуального файла. Виртуальный файл содержится внутри исполняемого файла приложения.


# ::stappler::web::VirtualFile::add(stappler::StringView const&,stappler::StringView const&)

## BRIEF

Добавляет виртуальный файл

## CONTENT

Добавляет виртуальный файл в систему

Параметры:
* stappler::StringView const& - имя файла
* stappler::StringView const& - содержимое файла

Возвращает:
* stappler::web::VirtualFile

# ::stappler::web::VirtualFile::get(stappler::StringView const&)

## BRIEF

Получает данные виртуального файла по имени

## CONTENT

Получает данные виртуального файла по имени

Параметры:
* stappler::StringView const&

Возвращает:
* stappler::StringView

# ::stappler::web::VirtualFile::getList()

## BRIEF

Получает список доступных виртуальных файлов

## CONTENT

Получает список доступных виртуальных файлов

Возвращает:
* SpanView<stappler::web::VirtualFile>

# ::stappler::web::VirtualFile::name

## BRIEF

Имя файла

## CONTENT

Имя файла

Тип: stappler::StringView


# ::stappler::web::VirtualFile::content

## BRIEF

Содержимое файла

## CONTENT

Содержимое файла

Тип: stappler::StringView
