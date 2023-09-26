Title: SPFilepath.h


# STAPPLER_FILESYSTEM_SPFILEPATH_H_

## BRIEF

Заголовок работы с файловыми путями

## CONTENT

Заголовок работы с файловыми путями. Система использует файловые пути в стиле UNIX/Cygwin.


# ::stappler::FilePath

## BRIEF

Псевдоним для именованного типа пути к файлу

## CONTENT

Псевдоним для именованного типа пути к файлу. Является именованным псевдонимом StringView. Используется, когда необходимо различать StringView и путь к файлу в перегрузке функций.


# ::stappler::filepath::isAbsolute(stappler::StringView)

## BRIEF

Проверяет, явялется ли путь к файлу абсолютным

## CONTENT

Проверяет, явялется ли путь к файлу абсолютным. То есть, начинается с '/' (в том числе, для Cygwin)

Параметры:
* stappler::StringView

Возвращает:
* bool - true если путь к файлу абсолютен


# ::stappler::filepath::isCanonical(stappler::StringView)

## BRIEF

Проверяется, является ли путь шаблоном исполняемого пакета

## CONTENT

Проверяет, является ли путь шаблоном исполняемого пакета. То есть, содержит строку %ШАБЛОН% в начале.

Доступные шаблоны:
* %CACHE% - путь для временного хранения файлов, доступный для записи. Для хранения кешей
* %DOCUMENTS% - путь для постоянного хранения файлов, доступный для записи
* %WRITEABLE% - путь, всегда оступный для записи
* %CURRENT% - текущая рабочая директория, не гарантирует возможность записи
* %PLATFORM% - путь внутри пакета приложения, не гарантирует возможность записи

Параметры:
* stappler::StringView

Возвращает:
* bool - true если путь является шаблоном

# ::stappler::filepath::isBundled(stappler::StringView)

## BRIEF

Проверяет, указывает ли путь внутрь исполняемого пакета

## CONTENT

Проверяет, указывает ли путь внутрь исполняемого пакета. То есть, явялется шаблоном на основе %PLATFORM%

Параметры:
* stappler::StringView

Возвращает:
* bool - true, если путь указывает внутрь исполняемого пакета

# ::stappler::filepath::isAboveRoot(stappler::StringView)

## BRIEF

Проверяет, выходит ли путь выше своего начального корня

## CONTENT

Проверяет, выходит ли путь выше своего начального корня. Например, `tests/../../dir`

Параметры:
* stappler::StringView

Возвращает:
* bool

# ::stappler::filepath::validatePath(stappler::StringView)

## BRIEF

Проверяет наличие "..', ".", "//" в пути

## CONTENT

Проверяет наличие "..', ".", "//" в пути

Параметры:
* stappler::StringView

Возвращает:
* bool - true если путь не содержит  "..', ".", "//"

# ::stappler::filepath::reconstructPath<typename>(stappler::StringView)

## BRIEF

Перестраивает путь таким образом, чтобы в нём не было "..', ".", "//"

## CONTENT

Перестраивает путь таким образом, чтобы в нём не было "..', ".", "//"

Параметры шаблона:
* typename Interface - интерфейс памяти

Параметры:
* stappler::StringView

Возвращает:
* typename Interface::StringType - реконструированный путь к файлу


# ::stappler::filepath::absolute<typename>(stappler::StringView,bool)

## BRIEF

Конвертирует путь в абсолютный

## CONTENT

Конвертирует путь в абсолютный. Удаляет сегменты вида "..', ".", "//". Декодирует шаблоны. Реконструирует при необходимости.

Если флаг false, ищет пути внутри пакета приложения, если путь не абсолютный изначально. Если нет, ищет writablePath.

Поскольку пакет может быть перемещён внутри системы, этот путь не стоит испольовать для кэширования и сохранения.

Параметры шаблона:
* typename Interface - интерфейс памяти

Параметры:
* stappler::StringView - путь к файлу
* bool - true - искать доступные для записи пути, false - искать пути внутри пакета приложения

Возвращает:
* typename Interface::StringType - новый путь к файлу

# ::stappler::filepath::canonical<typename>(stappler::StringView)

## BRIEF

Конвертирует путь в каноничный

## CONTENT

Конвертирует путь в каноничный. То есть, конвертирует путь в шаблон (см. isCanonical), пригодный для постоянного хранения, при возможности. При невозможности, конвертирует в абсолютный путь.

Параметры шаблона:
* typename Interface - интерфейс памяти

Параметры:
* stappler::StringView

Возвращает:
* typename Interface::StringType - новый путь к файлу

# ::stappler::filepath::root(stappler::StringView)

## BRIEF

Возвращает корневой путь по отношению к переданному

## CONTENT

Возвращает корневой путь (на один уровень выше) по отношению к переданному

Параметры:
* stappler::StringView

Возвращает:
* stappler::StringView

# ::stappler::filepath::lastComponent(stappler::StringView)

## BRIEF

Возвращает последний компонент пути

## CONTENT

Возвращает последний компонент пути

Параметры:
* stappler::StringView

Возвращает:
* stappler::StringView

# ::stappler::filepath::lastComponent(stappler::StringView,size_t)

## BRIEF

Возвращает последние компоненты пути

## CONTENT

Возвращает последние компоненты пути

Параметры:
* stappler::StringView - исходный путь
* size_t - число компонентов с конца, которые нужно вернуть

Возвращает:
* stappler::StringView

# ::stappler::filepath::fullExtension(stappler::StringView)

## BRIEF

Возвращает полное расширение имени файла

## CONTENT

Возвращает полное расширение имени файла: /dir/file.tar.gz -> tar.gz

Параметры:
* stappler::StringView

Возвращает:
* stappler::StringView

# ::stappler::filepath::lastExtension(stappler::StringView)

## BRIEF

Возвращает последнее расширение имени файла

## CONTENT

Возвращает последнее расширение имени файла: /dir/file.tar.gz -> gz

Параметры:
* stappler::StringView

Возвращает:
* stappler::StringView

# ::stappler::filepath::name(stappler::StringView)

## BRIEF

Возвращает имя файла

## CONTENT

Возвращает имя файла: /dir/file.tar.bz -> file

Параметры:
* stappler::StringView

Возвращает:
* stappler::StringView

# ::stappler::filepath::extensionCount(stappler::StringView)

## BRIEF

Возвращает число компонентов расширения имени файла

## CONTENT

Возвращает число компонентов расширения имени файла

Параметры:
* stappler::StringView

Возвращает:
* size_t

# ::stappler::filepath::split<typename>(stappler::StringView)

## BRIEF

Разделяет путь к файлу на компоненты

## CONTENT

Разделяет путь к файлу на компоненты, возвращает их в виде вектора

Параметры шаблона:
* typename Interface - интерфейс памяти для вектора

Параметры:
* stappler::StringView

Возвращает:
* typename Interface::template VectorType<stappler::StringView>

# ::stappler::filepath::split(stappler::StringView,Callback<void (stappler::StringView)> const&)

## BRIEF

Разделяет путь к файлу на компоненты

## CONTENT

Разделяет путь к файлу на компоненты, возвращает их в функцию обратного вызова в поряде вхождения в строку

Параметры:
* stappler::StringView
* Callback<void (stappler::StringView)> const&

# ::stappler::filepath::_merge<typename>(stappler::StringView,stappler::StringView)

## BRIEF

Соединяет два компонента пути

## CONTENT

Соединяет два компонента пути. Итоговый путь есть два переданных компонента, соединённых одним разделителем ('/'), вне зависимости от наличия разделителя на конце первого компонента и в начале второго.

Вспомогательная функция, используйте filepath::merge вместо неё

Параметры шаблона:
* typename Interface - интерфейс памяти для нового пути

Параметры:
* stappler::StringView
* stappler::StringView

Возвращает:
* typename Interface::StringType - новый сконструированный путь


# ::stappler::filepath::merge<typename>(SpanView<std::string>)

## BRIEF

Соединяет компоненты пути

## CONTENT

Соединяет компоненты пути. Каждый компонент будет разделёт строго одним '/'

Параметры шаблона:
* typename Interface - интерфейс памяти

Параметры:
* SpanView<std::string> - последовательный набор компонентов путей

Возвращает:
* typename Interface::StringType - новый сконструированный путь


# ::stappler::filepath::merge<typename>(SpanView<memory::string>)

## BRIEF

Соединяет компоненты пути

## CONTENT

Соединяет компоненты пути. Каждый компонент будет разделёт строго одним '/'

Параметры шаблона:
* typename Interface - интерфейс памяти

Параметры:
* SpanView<memory::string> - последовательный набор компонентов путей

Возвращает:
* typename Interface::StringType - новый сконструированный путь


# ::stappler::filepath::merge<typename>(SpanView<stappler::StringView>)

## BRIEF

Соединяет компоненты пути

## CONTENT

Соединяет компоненты пути. Каждый компонент будет разделёт строго одним '/'

Параметры шаблона:
* typename Interface - интерфейс памяти

Параметры:
* SpanView<stappler::StringView> - последовательный набор компонентов путей

Возвращает:
* typename Interface::StringType - новый сконструированный путь


# ::stappler::filepath::merge<typename>(stappler::memory::StandartInterface::StringType&&)

## BRIEF

Вспомогательная функция соединения пути

## CONTENT

Вспомогательная функция соединения пути

Параметры шаблона:
* typename Interface

Параметры:
* stappler::memory::StandartInterface::StringType&&

Возвращает:
* typename Interface::StringType


# ::stappler::filepath::merge<typename>(stappler::memory::PoolInterface::StringType&&)

## BRIEF

Вспомогательная функция соединения пути

## CONTENT

Вспомогательная функция соединения пути

Параметры шаблона:
* typename Interface

Параметры:
* stappler::memory::PoolInterface::StringType&&

Возвращает:
* typename Interface::StringType


# ::stappler::filepath::merge<typename,class>(stappler::StringView,stappler::StringView,Args &&...)

## BRIEF

Соединяет компоненты пути

## CONTENT

Соединяет компоненты пути. Ставит строго один '/' между компонентами

Параметры шаблона:
* typename Interface - интерфейс памяти
* class Args - дополнительные компоненты пути

Параметры:
* stappler::StringView
* stappler::StringView
* Args &&...

Возвращает:
* typename Interface::StringType - новый сконструированный путь

# ::stappler::filepath::extensionForContentType(stappler::StringView)

## BRIEF

Возвращает стандартное расширение файла для MIME-типа

## CONTENT

Возвращает стандартное расширение файла для MIME-типа

Параметры:
* stappler::StringView

Возвращает:
* stappler::StringView

# ::stappler::filepath::replace<typename>(stappler::StringView,stappler::StringView,stappler::StringView)

## BRIEF

Заменяет корневую часть пути файла

## CONTENT

Заменяет корневую часть пути файла

replace(/my/dir/first/file, /my/dir/first, /your/dir/second): [/my/dir/first -> /your/dir/second] /file

Параметры шаблона:
* typename Interface - интерфейс памяти

Параметры:
* stappler::StringView - исходный путь к файлу
* stappler::StringView - корневая часть для замены
* stappler::StringView - новая корневая часть

Возвращает:
* typename Interface::StringType
