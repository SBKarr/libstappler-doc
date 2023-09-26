Title: SPFilesystem.h

# STAPPLER_FILESYSTEM_SPFILESYSTEM_H_

## BRIEF

Заголовок функций файловой системы

## CONTENT

Заголовок функций файловой системы


# ::stappler::filesystem::Access

## BRIEF

Тип проверки режима доступа к файлу

## CONTENT

Тип проверки режима доступа к файлу

Значения:
* Exists - проверка существования
* Read - проверка возможности записи
* Write - проверка возможности чтения
* Execute - проверка возможности исполнения


# ::stappler::filesystem::Stat

## BRIEF

Структура инфомрации о файле

## CONTENT

Структура инфомрации о файле

# ::stappler::filesystem::Stat::size

## BRIEF

Размер файла

## CONTENT

Размер файла

Тип: size_t


# ::stappler::filesystem::Stat::atime

## BRIEF

Время последнего доступа к файлу, если доступно

## CONTENT

Время последнего доступа к файлу, если доступно

Тип: stappler::Time


# ::stappler::filesystem::Stat::ctime

## BRIEF

Время создания файла

## CONTENT

Время создания файла

Тип: stappler::Time


# ::stappler::filesystem::Stat::mtime

## BRIEF

Время модицикации файла

## CONTENT

Время модицикации файла

Тип: stappler::Time


# ::stappler::filesystem::Stat::isDir

## BRIEF

Является ли файл директорией

## CONTENT

Является ли файл директорией

Тип: bool


# ::stappler::filesystem::File

## BRIEF

Структура работы с открытым файлом

## CONTENT

Структура работы с открытым файлом

# ::stappler::filesystem::File::Flags

## BRIEF

Флаги открытого файла

## CONTENT

Доступ: public

Флаги открытого файла

Значения:
* None
* DelOnClose - удалить файл при закрытии


# ::stappler::filesystem::File::traits_type

## BRIEF

Вспомогательный тип символьных операций для данных, записываемых в файл

## CONTENT

Доступ: public

Вспомогательный тип символьных операций для данных, записываемых в файл


# ::stappler::filesystem::File::streamsize

## BRIEF

Тип размера вывода в поток файла

## CONTENT

Доступ: public

Тип размера вывода в поток файла


# ::stappler::filesystem::File::int_type

## BRIEF

Тип целочисленного значения

## CONTENT

Доступ: public

Тип целочисленного значения

# ::stappler::filesystem::File::open_tmp(char const*,bool)

## BRIEF

Открывает временный файл с использованием префикса для шаблона

## CONTENT

Доступ: public

Открывает временный файл с использованием префикса для шаблона. Файл создаётся в стандартной временной директории системы

Параметры:
* char const* - префикс файла или nullptr
* bool - true если файл необходимо удалить при закрытии

Возвращает:
* stappler::filesystem::File

# ::stappler::filesystem::File::File()

## BRIEF

Создаёт неинициализированный файл

## CONTENT

Доступ: public

Создаёт неинициализированный файл

# ::stappler::filesystem::File::File(FILE*,stappler::filesystem::File::Flags)

## BRIEF

Создаёт файл из файла, открытого стандартной библиотекой

## CONTENT

Доступ: public

Создаёт файл из файла, открытого стандартной библиотекой. Владение файлом передаётся структуре, он будет закрыт при её уничтожении.

Параметры:
* FILE* - исходный файл
* stappler::filesystem::File::Flags - флаги файла


# ::stappler::filesystem::File::File(void*)

## BRIEF

Создаёт файл из платформозависимого указателя

## CONTENT

Доступ: public

Создаёт файл из платформозависимого указателя. Владение файлом передаётся структуре, он будет закрыт при её уничтожении.

Параметры:
* void* - платформозависимый указатель


# ::stappler::filesystem::File::File(void*,size_t)

## BRIEF

Создаёт файл из платформозависимого указателя

## CONTENT

Доступ: public

Создаёт файл из платформозависимого указателя. Владение файлом передаётся структуре, он будет закрыт при её уничтожении.

Параметры:
* void*
* size_t - текущий размер файла


# ::stappler::filesystem::File::~File()

## BRIEF

Уничтожает структуру

## CONTENT

Доступ: public

Уничтожает структуру. Закрывает файл.

# ::stappler::filesystem::File::File(stappler::filesystem::File&&)

## BRIEF

Перемещает файл в другую структуру

## CONTENT

Доступ: public

Перемещает файл в другую структуру

Параметры:
* stappler::filesystem::File&&


# ::stappler::filesystem::File::operator=(stappler::filesystem::File&&)

## BRIEF

Перемещает файл в другую структуру

## CONTENT

Доступ: public

Перемещает файл в другую структуру

Параметры:
* stappler::filesystem::File&&

Возвращает:
* stappler::filesystem::File&

# ::stappler::filesystem::File::File(stappler::filesystem::File const&)

## BRIEF

Запрет копирования файла

## CONTENT

Доступ: public

Запрет копирования файла

Параметры:
* stappler::filesystem::File const&


# ::stappler::filesystem::File::operator=(stappler::filesystem::File const&)

## BRIEF

Запрет копирования файла

## CONTENT

Доступ: public

Запрет копирования файла

Параметры:
* stappler::filesystem::File const&

Возвращает:
* stappler::filesystem::File&

# ::stappler::filesystem::File::read(uint8_t*,size_t)

## BRIEF

Читает данные из файла в буфер

## CONTENT

Читает данные из файла в буфер

Доступ: public

Параметры:
* uint8_t* - буфер для чтения. Должен быть не менее запрошенного размера.
* size_t - число байт для чтения

Возвращает:
* size_t - число реально прочитанных байт

# ::stappler::filesystem::File::seek(int64_t,io::Seek)

## BRIEF

Перемещает внутренний указатель файла

## CONTENT

Доступ: public

Перемещает внутренний указатель файла

Параметры:
* int64_t - новый параметр указателя
* io::Seek - откуда считать положение указателя

Возвращает:
* size_t - текущее значение указателя в байтах от начала файла

# ::stappler::filesystem::File::tell() const

## BRIEF

Возвращает текущее положеие внутреннего указателя

## CONTENT

Доступ: public

Возвращает текущее положеие внутреннего указателя

Возвращает:
* size_t - текущее значение указателя в байтах от начала файла

# ::stappler::filesystem::File::size() const

## BRIEF

Возвращает текущий размер файла

## CONTENT

Доступ: public

Возвращает текущий размер файла

Возвращает:
* size_t - текущий размер файла

# ::stappler::filesystem::File::xsgetc()

## BRIEF

Читает один символ из файла

## CONTENT

Доступ: public

Читает один символ из файла

Возвращает:
* int_type - численное значение символа

# ::stappler::filesystem::File::xsputc(stappler::filesystem::File::int_type)

## BRIEF

Записывает символ в файл

## CONTENT

Доступ: public

Записывает символ в файл

Параметры:
* stappler::filesystem::File::int_type - численное значение символа

Возвращает:
* int_type

# ::stappler::filesystem::File::xsputn(char const*,stappler::filesystem::File::streamsize)

## BRIEF

Записывает несколько символов в файл

## CONTENT

Доступ: public

Записывает несколько символов в файл

Параметры:
* char const* - символы для записи
* stappler::filesystem::File::streamsize - число символов

Возвращает:
* streamsize - реальное число записанных символов

# ::stappler::filesystem::File::xsgetn(char*,stappler::filesystem::File::streamsize)

## BRIEF

Читает символы из файла в буфер

## CONTENT

Доступ: public

Читает символы из файла в буфер

Параметры:
* char* - буфер для чтения. Должен быть размером не менее запрошенного числа символов
* stappler::filesystem::File::streamsize - число символов для чтения

Возвращает:
* streamsize - реальное число прочитанных символов

# ::stappler::filesystem::File::eof() const

## BRIEF

Проверяет, достин=гнут ли конец файла при чтении

## CONTENT

Доступ: public

Проверяет, достин=гнут ли конец файла при чтении

Возвращает:
* bool - true если конец файла достигнут

# ::stappler::filesystem::File::close()

## BRIEF

Закрывает файл

## CONTENT

Доступ: public

Закрывает файл. После закрытия все операции не будут делать ничего.


# ::stappler::filesystem::File::close_remove()

## BRIEF

Закрывает и удаляет файл

## CONTENT

Доступ: public

Закрывает и удаляет файл. После закрытия все операции не будут делать ничего.

# ::stappler::filesystem::File::close_rename(stappler::StringView)

## BRIEF

Закрывает и перемещает файл.

## CONTENT

Доступ: public

Закрывает и перемещает файл. Отменяет операцию удаления после закрытия.

Параметры:
* stappler::StringView - новый путь для файла

Возвращает:
* bool - true если перемещение было успешным.

# ::stappler::filesystem::File::is_open() const

## BRIEF

Проверяет, открыт ли файл

## CONTENT

Доступ: public

Проверяет, открыт ли файл

Возвращает:
* bool - true если файл открыт

# ::stappler::filesystem::File::operator bool() const

## BRIEF

Проверяет, открыт ли файл

## CONTENT

Доступ: public

Проверяет, открыт ли файл

Возвращает:
* bool - true если файл открыт

# ::stappler::filesystem::File::path() const

## BRIEF

Возвращает текущий путь к файлу

## CONTENT

Доступ: public

Возвращает текущий путь к файлу

Возвращает:
* char const*

# ::stappler::filesystem::File::set_tmp_path(char const*)

## BRIEF

Устанавливает путь к файлу

## CONTENT

Доступ: protected

Устанавливает путь к файлу

Параметры:
* char const*


# ::stappler::filesystem::File::_isBundled

## BRIEF

Флаг, является ли файл платформозависимым

## CONTENT

Доступ: protected

Флаг, является ли файл платформозависимым

Тип: bool


# ::stappler::filesystem::File::_size

## BRIEF

Текущий размер файла

## CONTENT

Доступ: protected

Текущий размер файла

Тип: size_t


# ::stappler::filesystem::File::_flags

## BRIEF

Флаги файла

## CONTENT

Доступ: protected

Флаги файла

Тип: stappler::filesystem::File::Flags


# ::stappler::filesystem::File::_buf

## BRIEF

Буфер имени файла

## CONTENT

Доступ: protected

Буфер имени файла

Тип: char[256]


# ::stappler::filesystem::File::

## BRIEF

Объединение манипулятора файла

## CONTENT

Доступ: protected

Объединение манипулятора файла

# ::stappler::filesystem::File::_nativeFile

## BRIEF

Указатель файла стандартной библиотеки

## CONTENT

Тип: FILE*

Указатель файла стандартной библиотеки

# ::stappler::filesystem::File::_platformFile

## BRIEF

Платформозависимый указатель файла

## CONTENT

Тип: void*

Платформозависимый указатель файла


# ::stappler::filesystem::exists(stappler::StringView)

## BRIEF

Проверяет, существует ли файл по данному пути

## CONTENT

Проверяет, существует ли файл по данному пути

Параметры:
* stappler::StringView

Возвращает:
* bool

# ::stappler::filesystem::stat(stappler::StringView,stappler::filesystem::Stat&)

## BRIEF

Получает параметры файла по данному пути

## CONTENT

Получает параметры файла по данному пути

Параметры:
* stappler::StringView
* stappler::filesystem::Stat& - структура параметров для записи

Возвращает:
* bool - true если структура заполнена успешно

# ::stappler::filesystem::mkdir(stappler::StringView)

## BRIEF

Создаёт директорию

## CONTENT

Создаёт директорию

Параметры:
* stappler::StringView

Возвращает:
* bool - true если операция успешна

# ::stappler::filesystem::mkdir_recursive(stappler::StringView,bool)

## BRIEF

Создаёт директории рекурсивно

## CONTENT

Создаёт директории рекурсивно (как mkdir -p)

Параметры:
* stappler::StringView - путь для новых директорий
* bool - true - ограничится попыткой создания директорий только внутри доступных приложению канонических директорий

Возвращает:
* bool - true если операция успешна

# ::stappler::filesystem::touch(stappler::StringView)

## BRIEF

Обновляет время доступа и модификации файла

## CONTENT

Обновляет время доступа и модификации файла

Параметры:
* stappler::StringView

Возвращает:
* bool - true если операция успешна

# ::stappler::filesystem::move(stappler::StringView,stappler::StringView)

## BRIEF

Перемещает файл

## CONTENT

Перемещает файл. Сперва пытается переместить файл, затем пробует копирование с последующим удалением.

Параметры:
* stappler::StringView - исходный путь к файлу
* stappler::StringView - новый путь к файлу

Возвращает:
* bool - true если операция успешна

# ::stappler::filesystem::copy(stappler::StringView,stappler::StringView,bool)

## BRIEF

Копирует файл или директорию

## CONTENT

Копирует файл или директорию. Директории копируются рекурсивно.

Параметры:
* stappler::StringView - исходный путь
* stappler::StringView - новый путь
* bool - true - не пытаться продолжать операцию при ошибке в копировании одного из файлов

Возвращает:
* bool - true если операция успешна

# ::stappler::filesystem::remove(stappler::StringView,bool,bool)

## BRIEF

Удаляет файл или директорию

## CONTENT

Удаляет файл или директорию.

Если не запрошено рекурсивное удаление, удаляет одиночный файл или пустую директорию.

Если запрошено рекурсивное удаление, удаляет файлы в директории рекурсивным обходом. Не удаляет директории.

Если запрошено рекурсивное удаление и удаление директорий, удаляет всё.

Параметры:
* stappler::StringView - путь
* bool - true - удалять рекурсивно
* bool - true - удалять директории при рекурсивном удалении

Возвращает:
* bool - true если операция успешна

# ::stappler::filesystem::ftw(stappler::StringView,Callback<void (stappler::StringView, bool)> const&,int,bool)

## BRIEF

Обходит дерево директорий

## CONTENT

Обходит дерево директорий

Параметры:
* stappler::StringView - путь к исходной директории
* Callback<void (stappler::StringView, bool)> const& - функция обратного выхова
* int - максимальная глубина обхода (-1 - без ограничений)
* bool - true - обходить путь к директории до путей файлов, в ней содержащихся. Иначе, путь к директории будет обходиться после файлов в ней.

Параметры обратного вызова:
* stappler::StringView - полный путь к файлу или директории внутри дерева
* bool - true если путь указывает на файл


# ::stappler::filesystem::ftw_b(stappler::StringView,Callback<bool (stappler::StringView, bool)> const&,int,bool)

## BRIEF

Обходит дерево директорий с возможностью остановки

## CONTENT

Обходит дерево директорий с возможностью остановки. Для остановки нужно вернуть false из обратного вызова.

Параметры:
* stappler::StringView - путь к исходной директории
* Callback<bool (stappler::StringView, bool)> const& - функция обратного выхова
* int - максимальная глубина обхода (-1 - без ограничений)
* bool - true - обходить путь к директории до путей файлов, в ней содержащихся. Иначе, путь к директории будет обходиться после файлов в ней.

Возвращает:
* bool - true если обход не был прерван

Параметры обратного вызова:
* stappler::StringView - полный путь к файлу или директории внутри дерева
* bool - true если путь указывает на файл

# ::stappler::filesystem::writablePath<typename>(stappler::StringView,bool)

## BRIEF

Возвращает доступный для записи приложением путь

## CONTENT

Возвращает доступный для записи приложением путь.

Данный путь может использоваться для данных. которые не должны удаляться между сеансами приожения, но не имеют смысла к безопасному хранению или хранению после удаления приложения.

Параметры шаблона:
* typename Interface - интерфейс памяти

Параметры:
* stappler::StringView - путь внутри директории для записи
* bool - если false, возвращать абсолютные пути как есть, не добавлять к базовому

Возвращает:
* typename Interface::StringType

# ::stappler::filesystem::writablePathReadOnly<typename>(stappler::StringView,bool)

## BRIEF

Возвращает доступный для записи приложением путь без попытки инициализировать файловую систему на запись.

## CONTENT

Возвращает доступный для записи приложением путь без попытки инициализировать файловую систему на запись. Таким образом, если каноническая директория для приложения не была создана - она не будет создана.

Данный путь может использоваться для данных. которые не должны удаляться между сеансами приожения, но не имеют смысла к безопасному хранению или хранению после удаления приложения.

Параметры шаблона:
* typename Interface - интерфейс памяти

Параметры:
* stappler::StringView - путь внутри директории для записи
* bool - если false, возвращать абсолютные пути как есть, не добавлять к базовому

Возвращает:
* typename Interface::StringType

# ::stappler::filesystem::documentsPath<typename>(stappler::StringView,bool)

## BRIEF

Возвращает доступный для записи путь, пригодный для долгосрочного хранения документов

## CONTENT

Возвращает доступный для записи путь, пригодный для долгосрочного хранения документов.

Данный путь может использоваться для данных. которые не должны удаляться между сеансами приожения, должны храниться безопасно и могут сохраняться после удаления приложения.

Параметры шаблона:
* typename Interface - интерфейс памяти

Параметры:
* stappler::StringView - путь внутри директории для записи
* bool - если false, возвращать абсолютные пути как есть, не добавлять к базовому

Возвращает:
* typename Interface::StringType

# ::stappler::filesystem::documentsPathReadOnly<typename>(stappler::StringView,bool)

## BRIEF

Возвращает доступный для записи путь, пригодный для долгосрочного хранения документов, без попытки инициализировать файловую систему на запись.

## CONTENT

Возвращает доступный для записи путь, пригодный для долгосрочного хранения документов, без попытки инициализировать файловую систему на запись. Таким образом, если каноническая директория для приложения не была создана - она не будет создана.

Данный путь может использоваться для данных. которые не должны удаляться между сеансами приожения, должны храниться безопасно и могут сохраняться после удаления приложения.

Параметры шаблона:
* typename Interface - интерфейс памяти

Параметры:
* stappler::StringView - путь внутри директории для записи
* bool - если false, возвращать абсолютные пути как есть, не добавлять к базовому

Возвращает:
* typename Interface::StringType

# ::stappler::filesystem::currentDir<typename>(stappler::StringView,bool)

## BRIEF

Возвращает путь относительно текущей рабочей директории

## CONTENT

Возвращает путь относительно текущей рабочей директории

Параметры шаблона:
* typename Interface - интерфейс памяти

Параметры:
* stappler::StringView - путь внутри директории для записи
* bool - если false, возвращать абсолютные пути как есть, не добавлять к базовому

Возвращает:
* typename Interface::StringType

# ::stappler::filesystem::cachesPath<typename>(stappler::StringView,bool)

## BRIEF

Возвращает путь для хранения кешированных данных

## CONTENT

Возвращает путь для хранения кешированных данных.

Файлы по этому пути могут быть произвольно удалены между сеансами приложения.

Параметры шаблона:
* typename Interface - интерфейс памяти

Параметры:
* stappler::StringView - путь внутри директории для записи
* bool - если false, возвращать абсолютные пути как есть, не добавлять к базовому

Возвращает:
* typename Interface::StringType

# ::stappler::filesystem::cachesPathReadOnly<typename>(stappler::StringView,bool)

## BRIEF

Возвращает путь для хранения кешированных данных, без попытки инициализировать файловую систему на запись

## CONTENT

Возвращает путь для хранения кешированных данных, без попытки инициализировать файловую систему на запись. Таким образом, если каноническая директория для приложения не была создана - она не будет создана.

Файлы по этому пути могут быть произвольно удалены между сеансами приложения.

Параметры шаблона:
* typename Interface - интерфейс памяти

Параметры:
* stappler::StringView - путь внутри директории для записи
* bool - если false, возвращать абсолютные пути как есть, не добавлять к базовому

Возвращает:
* typename Interface::StringType

# ::stappler::filesystem::write(stappler::StringView,uint8_t const*,size_t)

## BRIEF

Записывает файл по пути

## CONTENT

Записывает файл по пути

Параметры:
* stappler::StringView - путь к файлу
* uint8_t const* - буфер данных для записи
* size_t - размер буфера

Возвращает:
* bool - true если операция успешна

# ::stappler::filesystem::write<typename>(stappler::StringView,BytesView const&)

## BRIEF

Записывает файл по пути

## CONTENT

Записывает файл по пути

Параметры шаблона:
* typename BytesView - тип, хрнящий данные для записи, владеющий или не владеющий контейнер

Параметры:
* stappler::StringView - путь к файлу
* BytesView const& - данные для записи

Возвращает:
* bool - true если операция успешна

# ::stappler::filesystem::openForReading(stappler::StringView)

## BRIEF

Открывает файл по пути для чтения

## CONTENT

Открывает файл по пути для чтения. Автоматически открывает стандартные и платформозависимые файлы

Параметры:
* stappler::StringView - путь к файлу

Возвращает:
* stappler::filesystem::File - структура файла, в случае успеха будет открыт на чтение

# ::stappler::filesystem::readTextFile<typename>(stappler::StringView)

## BRIEF

Читает текстовый файл в строку

## CONTENT

Читает текстовый файл в строку

Параметры шаблона:
* typename Interface - интерфейс памяти

Параметры:
* stappler::StringView - путь к файлу

Возвращает:
* typename Interface::StringType - результат в виде строки или пустая строка

# ::stappler::filesystem::readIntoBuffer(uint8_t*,stappler::StringView,size_t,size_t)

## BRIEF

Читает файл в буфер

## CONTENT

Читает файл в буфер

Параметры:
* uint8_t* - буфер для чтения, должен быть не меньше запрошенной длины чтения
* stappler::StringView - путь к файлу
* size_t - смещение внутри файла
* size_t - число байт для чтения

Возвращает:
* bool - true если запрошенное число байт успешно прочитано

# ::stappler::filesystem::readWithConsumer(io::Consumer const&,uint8_t*,size_t,stappler::StringView,size_t,size_t)

## BRIEF

Читает файл в объект-потребитель с использованием буфера

## CONTENT

Читает файл в объект-потребитель с использованием буфера. Буфер может быть меньше запрошенной длины к чтению, в таком случае, читает по частям.

Параметры:
* io::Consumer const& - объект-потребитель
* uint8_t* - буфер для чтения
* size_t - размер буфера
* stappler::StringView - путь к файлу
* size_t - смещение внутри файла
* size_t - число байт для чтения

Возвращает:
* bool - true если запрошенное число байт успешно прочитано

# ::stappler::filesystem::readWithConsumer<size_t>(io::Consumer const&,stappler::StringView,size_t,size_t)

## BRIEF

Читает файл в объект-потребитель с использованием внутреннего буфера

## CONTENT

Читает файл в объект-потребитель с использованием внутреннего буфера

Параметры шаблона:
* size_t Buffer - размер внутреннего буфера

Параметры:
* io::Consumer const& - объект-потребитель
* stappler::StringView - путь к файлу
* size_t - смещение внутри файла
* size_t - число байт для чтения

Возвращает:
* bool - true если запрошенное число байт успешно прочитано


# ::stappler::filesystem::readIntoMemory<typename>(stappler::StringView,size_t,size_t)

## BRIEF

Читает файл в динамический объект в памяти

## CONTENT

Читает файл в динамический объект в памяти

Параметры шаблона:
* typename Interface - интерфейс памяти

Параметры:
* stappler::StringView - путь к файлу
* size_t - смещение внутри файла
* size_t - число байт для чтения

Возвращает:
* typename Interface::BytesType - байтовая строка запрошенной длины или пустая


# ::stappler::filesystem::platform::_getApplicationPath<typename>()

## BRIEF

Платформозависимая функция опредления пути к исполняемому приложению

## CONTENT

Платформозависимая функция опредления пути к исполняемому приложению

Параметры шаблона:
* typename Interface

Возвращает:
* typename Interface::StringType

# ::stappler::filesystem::platform::_getWritablePath<typename>(bool)

## BRIEF

Платформозависимая функция опредления пути для записи

## CONTENT

Платформозависимая функция опредления пути для записи

Параметры шаблона:
* typename Interface

Параметры:
* bool

Возвращает:
* typename Interface::StringType

# ::stappler::filesystem::platform::_getDocumentsPath<typename>(bool)

## BRIEF

Платформозависимая функция опредления пути для документов

## CONTENT

Платформозависимая функция опредления пути для документов

Параметры шаблона:
* typename Interface

Параметры:
* bool

Возвращает:
* typename Interface::StringType

# ::stappler::filesystem::platform::_getCachesPath<typename>(bool)

## BRIEF

Платформозависимая функция опредления пути для кешей

## CONTENT

Платформозависимая функция опредления пути для кешей

Параметры шаблона:
* typename Interface

Параметры:
* bool

Возвращает:
* typename Interface::StringType

# ::stappler::filesystem::platform::_exists(stappler::StringView,bool)

## BRIEF

Платформозависимая функция проверки существования файла

## CONTENT

Платформозависимая функция проверки существования файла

Параметры:
* stappler::StringView
* bool

Возвращает:
* bool

# ::stappler::filesystem::platform::_stat(stappler::StringView,stappler::filesystem::Stat&,bool)

## BRIEF

Платформозависимая функция получения информации о файле

## CONTENT

Платформозависимая функция получения информации о файле

Параметры:
* stappler::StringView
* stappler::filesystem::Stat&
* bool

Возвращает:
* bool

# ::stappler::filesystem::platform::_openForReading(stappler::StringView)

## BRIEF

Функция открытия платформозависимого файла

## CONTENT

Функция открытия платформозависимого файла

Параметры:
* stappler::StringView

Возвращает:
* stappler::filesystem::File

# ::stappler::filesystem::platform::_read(void*,uint8_t*,size_t)

## BRIEF

Функция чтения из платформозависимого файла

## CONTENT

Функция чтения из платформозависимого файла

Параметры:
* void*
* uint8_t*
* size_t

Возвращает:
* size_t

# ::stappler::filesystem::platform::_seek(void*,int64_t,io::Seek)

## BRIEF

Функция перемещения в платформозависимом файле

## CONTENT

Функция перемещения в платформозависимом файле

Параметры:
* void*
* int64_t
* io::Seek

Возвращает:
* size_t

# ::stappler::filesystem::platform::_tell(void*)

## BRIEF

Функция получения позиции в платформозависимом файле

## CONTENT

Функция получения позиции в платформозависимом файле

Параметры:
* void*

Возвращает:
* size_t

# ::stappler::filesystem::platform::_eof(void*)

## BRIEF

Функция проверки конца платформозависимого файла

## CONTENT

Функция проверки конца платформозависимого файла

Параметры:
* void*

Возвращает:
* bool

# ::stappler::filesystem::platform::_close(void*)

## BRIEF

Функция закрытия платформозависимого файла

## CONTENT

Функция закрытия платформозависимого файла

Параметры:
* void*


# ::stappler::filesystem::platform::_ftw(stappler::StringView,Callback<void (stappler::StringView, bool)> const&,int,bool,bool)

## BRIEF

Функция обхода директорий внутри пакета приложения

## CONTENT

Функция обхода директорий внутри пакета приложения (см. filesystem::ftw)

Параметры:
* stappler::StringView
* Callback<void (stappler::StringView, bool)> const&
* int
* bool
* bool


# ::stappler::filesystem::platform::_ftw_b(stappler::StringView,Callback<bool (stappler::StringView, bool)> const&,int,bool,bool)

## BRIEF

Функция обхода директорий внутри пакета приложения

## CONTENT

Функция обхода директорий внутри пакета приложения (см. filesystem::ftw_b)

Параметры:
* stappler::StringView
* Callback<bool (stappler::StringView, bool)> const&
* int
* bool
* bool

Возвращает:
* bool

# ::stappler::filesystem::native::nativeToPosix<typename>(stappler::StringView)

## BRIEF

Конвертация пути из платформозависимого в POSIX.

## CONTENT

Конвертация пути из платформозависимого в POSIX. Функции SDK используют пути POSIX.

Параметры шаблона:
* typename Interface

Параметры:
* stappler::StringView

Возвращает:
* typename Interface::StringType

# ::stappler::filesystem::native::posixToNative<typename>(stappler::StringView)

## BRIEF

Функция конвертации POSIX-пути в платформозависимый

## CONTENT

Функция конвертации POSIX-пути в платформозависимый. Функции SDK используют пути POSIX.

Параметры шаблона:
* typename Interface

Параметры:
* stappler::StringView

Возвращает:
* typename Interface::StringType

# ::stappler::filesystem::native::getcwd_fn<typename>()

## BRIEF

Функция получения текущей рабочей директории

## CONTENT

Функция получения текущей рабочей директории

Параметры шаблона:
* typename Interface

Возвращает:
* typename Interface::StringType

# ::stappler::filesystem::native::remove_fn(stappler::StringView)

## BRIEF

Функция удаления файла

## CONTENT

Функция удаления файла

Параметры:
* stappler::StringView

Возвращает:
* bool

# ::stappler::filesystem::native::mkdir_fn(stappler::StringView)

## BRIEF

Функция создания директории

## CONTENT

Функция создания директории

Параметры:
* stappler::StringView

Возвращает:
* bool

# ::stappler::filesystem::native::access_fn(stappler::StringView,stappler::filesystem::Access)

## BRIEF

Функция проверки доступа к файлу

## CONTENT

Функция проверки доступа к файлу

Параметры:
* stappler::StringView
* stappler::filesystem::Access

Возвращает:
* bool

# ::stappler::filesystem::native::stat_fn(stappler::StringView,stappler::filesystem::Stat&)

## BRIEF

Функция получения информации о файле

## CONTENT

Функция получения информации о файле

Параметры:
* stappler::StringView
* stappler::filesystem::Stat&

Возвращает:
* bool

# ::stappler::filesystem::native::touch_fn(stappler::StringView)

## BRIEF

Функция обновления времени модицикации и доступа к файлу

## CONTENT

Функция обновления времени модицикации и доступа к файлу

Параметры:
* stappler::StringView

Возвращает:
* bool

# ::stappler::filesystem::native::ftw_fn(stappler::StringView,Callback<void (stappler::StringView, bool)> const&,int,bool)

## BRIEF

Функция обхода директории

## CONTENT

Функция обхода директории (см. filesystem::ftw)

Параметры:
* stappler::StringView
* Callback<void (stappler::StringView, bool)> const&
* int
* bool


# ::stappler::filesystem::native::ftw_b_fn(stappler::StringView,Callback<bool (stappler::StringView, bool)> const&,int,bool)

## BRIEF

Функция обхода директории

## CONTENT

Функция обхода директории (см. filesystem::ftw_b)

Параметры:
* stappler::StringView
* Callback<bool (stappler::StringView, bool)> const&
* int
* bool

Возвращает:
* bool

# ::stappler::filesystem::native::rename_fn(stappler::StringView,stappler::StringView)

## BRIEF

Функция переименования/перемещения файла

## CONTENT

Функция переименования/перемещения файла

Параметры:
* stappler::StringView
* stappler::StringView

Возвращает:
* bool

# ::stappler::filesystem::native::fopen_fn(stappler::StringView,stappler::StringView)

## BRIEF

Функция открытия файла

## CONTENT

Функция открытия файла

Параметры:
* stappler::StringView
* stappler::StringView

Возвращает:
* FILE*


# ::stappler::io::ProducerTraits<filesystem::File>::ProducerTraits<filesystem::File>

## BRIEF

Определение общих функций ввода/вывода для файла

## CONTENT

Определение общих функций ввода/вывода для файла в качестве производителя данных

# ::stappler::io::ProducerTraits<filesystem::File>::type

## BRIEF

Тип внутреннего объекта файла

## CONTENT

Тип внутреннего объекта файла


# ::stappler::io::ProducerTraits<filesystem::File>::ReadFn(void*,uint8_t*,size_t)

## BRIEF

Функция чтения

## CONTENT

Функция чтения

Параметры:
* void*
* uint8_t*
* size_t

Возвращает:
* size_t

# ::stappler::io::ProducerTraits<filesystem::File>::SeekFn(void*,int64_t,stappler::io::Seek)

## BRIEF

Функция перемещения

## CONTENT

Функция перемещения

Параметры:
* void*
* int64_t
* stappler::io::Seek

Возвращает:
* size_t

# ::stappler::io::ProducerTraits<filesystem::File>::TellFn(void*)

## BRIEF

Функция получения позиции

## CONTENT

Функция получения позиции

Параметры:
* void*

Возвращает:
* size_t
