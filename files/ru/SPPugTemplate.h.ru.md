Title: SPPugTemplate.h


# EXTRA_WEBSERVER_PUG_SPPUGTEMPLATE_H_

## BRIEF

Заголовок основного интерфейса шаблона

## CONTENT

Заголовок основного интерфейса шаблона

# ::stappler::pug::Template

## BRIEF

Класс оснвоного интерфейса шаблона

## CONTENT

Класс оснвоного интерфейса шаблона. Представляет из себя прочитанный шаблон, готовый к началу исполнения. Для исполнения шаблона нужно создать контекст исполнения.

Базовые классы:
* memory::AllocPool

# ::stappler::pug::Template::OutStream

## BRIEF

Тип выходного потока

## CONTENT

Доступ: public

Тип выходного потока

# ::stappler::pug::Template::ChunkType

## BRIEF

Тип сегмента шаблона

## CONTENT

Доступ: public

Тип сегмента шаблона

Значения:
* Block - стандартный блок (объединяет несколько токенов)
* HtmlTag - тег
* HtmlInlineTag - вложенный тег
* HtmlEntity - содержимое тега
* OutputEscaped - вывод строки
* OutputUnescaped - вывод строки без экранирования
* AttributeEscaped - вывод артибута
* AttributeUnescaped - вывод артибута
* AttributeList - список атрибутов
* Code - блок кода
* ControlCase - контрольный блок кода
* ControlWhen - контрольный блок кода
* ControlDefault - контрольный блок кода
* ControlIf - контрольный блок кода
* ControlUnless - контрольный блок кода
* ControlElseIf - контрольный блок кода
* ControlElse - контрольный блок кода
* ControlEach - контрольный блок кода
* ControlEachPair - контрольный блок кода
* ControlWhile - контрольный блок кода
* Include - включение шаблона
* ControlMixin - определение примеси
* MixinCall - включение примеси
* VirtualTag - виртуальный тег


# ::stappler::pug::Template::Chunk

## BRIEF

Структура сегмента шаблона

## CONTENT

Доступ: public

Структура сегмента шаблона


# ::stappler::pug::Template::Chunk::type

## BRIEF

Тип сегмента

## CONTENT

Тип сегмента

Тип: stappler::pug::Template::ChunkType


# ::stappler::pug::Template::Chunk::value

## BRIEF

Текстовое значение сегмента

## CONTENT

Текстовое значение сегмента

Тип: stappler::pug::String


# ::stappler::pug::Template::Chunk::expr

## BRIEF

Испоняемое выражение сегмента

## CONTENT

Испоняемое выражение сегмента

Тип: stappler::pug::Expression*


# ::stappler::pug::Template::Chunk::indent

## BRIEF

Уровень вложенности

## CONTENT

Уровень вложенности

Тип: size_t


# ::stappler::pug::Template::Chunk::chunks

## BRIEF

Вложенные сегменты

## CONTENT

Вложенные сегменты

Тип: Vector<stappler::pug::Template::Chunk *>


# ::stappler::pug::Template::Options

## BRIEF

Параметры чтения шаблона

## CONTENT

Доступ: public

Параметры чтения шаблона

# ::stappler::pug::Template::Options::Flags

## BRIEF

Флаги чтения шаблона

## CONTENT

Флаги чтения шаблона

Значения:
* Pretty - генерировать человекочитаемый выводд
* StopOnError - останавливать чтение на первой ошибке
* LineFeeds - сохранять переносы строк в выводе


# ::stappler::pug::Template::Options::getDefault()

## BRIEF

Возвращает параметры чтения по умолчанию

## CONTENT

Возвращает параметры чтения по умолчанию

Возвращает:
* stappler::pug::Template::Options

# ::stappler::pug::Template::Options::getPretty()

## BRIEF

Возвращает параметры чтения для отладки

## CONTENT

Возвращает параметры чтения для отладки

Возвращает:
* stappler::pug::Template::Options

# ::stappler::pug::Template::Options::setFlags(std::initializer_list<Flags>&&)

## BRIEF

Добавляет флаги

## CONTENT

Добавляет флаги

Параметры:
* std::initializer_list<Flags>&&

Возвращает:
* stappler::pug::Template::Options&

# ::stappler::pug::Template::Options::clearFlags(std::initializer_list<Flags>&&)

## BRIEF

Выключает флаги

## CONTENT

Выключает флаги

Параметры:
* std::initializer_list<Flags>&&

Возвращает:
* stappler::pug::Template::Options&

# ::stappler::pug::Template::Options::hasFlag(stappler::pug::Template::Options::Flags) const

## BRIEF

Проверяет на наличие флага

## CONTENT

Проверяет на наличие флага

Параметры:
* stappler::pug::Template::Options::Flags

Возвращает:
* bool

# ::stappler::pug::Template::Options::flags

## BRIEF

Флаги параметров

## CONTENT

Флаги параметров

Тип: std::bitset<toInt(Flags::LineFeeds) + 1>

# ::stappler::pug::Template::read(stappler::StringView const&,stappler::pug::Template::Options const&,Callback<void (stappler::StringView)> const&)

## BRIEF

Читает шаблон из строки

## CONTENT

Доступ: public

Читает шаблон из строки

Параметры:
* stappler::StringView const& - данные шаблона
* stappler::pug::Template::Options const& - параметры чтения
* Callback<void (stappler::StringView)> const& - функция сообщения об ощибке

Возвращает:
* stappler::pug::Template* - прочитанный шаблон или nullptr

# ::stappler::pug::Template::read(memory::pool_t*,stappler::StringView const&,stappler::pug::Template::Options const&,Callback<void (stappler::StringView)> const&)

## BRIEF

Читает шаблон из строки

## CONTENT

Доступ: public

Читает шаблон из строки

Параметры:
* memory::pool_t* - пул памяти для использования
* stappler::StringView const& - данные шаблона
* stappler::pug::Template::Options const& - параметры чтения
* Callback<void (stappler::StringView)> const& - функция сообщения об ощибке

Возвращает:
* stappler::pug::Template* - прочитанный шаблон или nullptr

# ::stappler::pug::Template::getOptions() const

## BRIEF

Возвращает истользованные для чтения параметры

## CONTENT

Доступ: public

Возвращает истользованные для чтения параметры

Возвращает:
* stappler::pug::Template::Options

# ::stappler::pug::Template::run(stappler::pug::Context&,stappler::pug::Template::OutStream const&) const

## BRIEF

Запускает шаблон в контексте и выводит результат в поток

## CONTENT

Доступ: public

Запускает шаблон в контексте и выводит результат в поток

Параметры:
* stappler::pug::Context&
* stappler::pug::Template::OutStream const&

Возвращает:
* bool -  true если успешно

# ::stappler::pug::Template::run(stappler::pug::Context&,stappler::pug::Template::OutStream const&,stappler::pug::Template::Options const&) const

## BRIEF

Запускает шаблон в контексте и выводит результат в поток

## CONTENT

Доступ: public

Запускает шаблон в контексте и выводит результат в поток

Параметры:
* stappler::pug::Context&
* stappler::pug::Template::OutStream const&
* stappler::pug::Template::Options const& - дополнительные параметры для выполнения

Возвращает:
* bool -  true если успешно

# ::stappler::pug::Template::run(stappler::pug::Context&,stappler::pug::Template::OutStream const&,stappler::pug::Template::RunContext&) const

## BRIEF

Запускает шаблон в контексте и выводит результат в поток

## CONTENT

Доступ: public

Запускает шаблон в контексте и выводит результат в поток

Параметры:
* stappler::pug::Context&
* stappler::pug::Template::OutStream const&
* stappler::pug::Template::RunContext&

Возвращает:
* bool

# ::stappler::pug::Template::describe(stappler::pug::Template::OutStream const&,bool) const

## BRIEF

Выводит отладочную инфомрацию о шаблоне

## CONTENT

Доступ: public

Выводит отладочную инфомрацию о шаблоне

Параметры:
* stappler::pug::Template::OutStream const&
* bool - true - выводить информацию о токенах


# ::stappler::pug::Template::RunContext

## BRIEF

Вспомогательный контест запуска

## CONTENT

Доступ: protected

Вспомогательный контест запуска

# ::stappler::pug::Template::RunContext::tagStack

## BRIEF

Стек вложенных тегов

## CONTENT

Стек вложенных тегов

Тип: Vector<Template::Chunk *>


# ::stappler::pug::Template::RunContext::withinHead

## BRIEF

Флаг, находится ли текущий контекст в теге head

## CONTENT

Флаг, находится ли текущий контекст в теге head

Тип: bool


# ::stappler::pug::Template::RunContext::withinBody

## BRIEF

Флаг, находится ли текущий контекст в теге body

## CONTENT

Флаг, находится ли текущий контекст в теге body

Тип: bool


# ::stappler::pug::Template::RunContext::opts

## BRIEF

Используемые параметры исполнения

## CONTENT

Тип: stappler::pug::Template::Options

Используемые параметры исполнения

# ::stappler::pug::Template::RunContext::templateStack

## BRIEF

Стек включения шаблонов

## CONTENT

Стек включения шаблонов

Тип: Vector<const stappler::pug::Template *>

# ::stappler::pug::Template::Template(memory::pool_t*,stappler::StringView const&,stappler::pug::Template::Options const&,stappler::pug::Template::OutStream const&)

## BRIEF

Создаёт новый шаблон из данных

## CONTENT

Доступ: protected

Создаёт новый шаблон из данных

Параметры:
* memory::pool_t*
* stappler::StringView const&
* stappler::pug::Template::Options const&
* stappler::pug::Template::OutStream const&


# ::stappler::pug::Template::runChunk(stappler::pug::Template::Chunk const&,stappler::pug::Context&,stappler::pug::Template::OutStream const&,stappler::pug::Template::RunContext&) const

## BRIEF

Запускает сегмент шаблона

## CONTENT

Доступ: protected

Запускает сегмент шаблона

Параметры:
* stappler::pug::Template::Chunk const&
* stappler::pug::Context&
* stappler::pug::Template::OutStream const&
* stappler::pug::Template::RunContext&

Возвращает:
* bool

# ::stappler::pug::Template::runCase(stappler::pug::Template::Chunk const&,stappler::pug::Context&,stappler::pug::Template::OutStream const&,stappler::pug::Template::RunContext&) const

## BRIEF

Запускает условный сегмент шаблона

## CONTENT

Доступ: protected

Запускает условный сегмент шаблона

Параметры:
* stappler::pug::Template::Chunk const&
* stappler::pug::Context&
* stappler::pug::Template::OutStream const&
* stappler::pug::Template::RunContext&

Возвращает:
* bool

# ::stappler::pug::Template::pushWithPrettyFilter(stappler::StringView,size_t,stappler::pug::Template::OutStream const&) const

## BRIEF

Записывает результат с дополнительным форматированием

## CONTENT

Доступ: protected

Записывает результат с дополнительным форматированием

Параметры:
* stappler::StringView
* size_t
* stappler::pug::Template::OutStream const&


# ::stappler::pug::Template::_pool

## BRIEF

Пул памяти шаблона

## CONTENT

Доступ: protected

Пул памяти шаблона

Тип: memory::pool_t*


# ::stappler::pug::Template::_lexer

## BRIEF

Структура для чтения данных шаблона

## CONTENT

Доступ: protected

Структура для чтения данных шаблона

Тип: stappler::pug::Lexer


# ::stappler::pug::Template::_mtime

## BRIEF

Время изменения данных

## CONTENT

Доступ: protected

Время изменения данных

Тип: stappler::Time


# ::stappler::pug::Template::_root

## BRIEF

Начальный сегмент шаблона

## CONTENT

Доступ: protected

Начальный сегмент шаблона

Тип: stappler::pug::Template::Chunk


# ::stappler::pug::Template::_opts

## BRIEF

Параметры чтения шаблона

## CONTENT

Доступ: protected

Параметры чтения шаблона

Тип: stappler::pug::Template::Options


# ::stappler::pug::Template::_includes

## BRIEF

Список шаблонов, включаемых в этом шаблоне

## CONTENT

Доступ: protected

Список шаблонов, включаемых в этом шаблоне

Тип: Vector<stappler::StringView>
