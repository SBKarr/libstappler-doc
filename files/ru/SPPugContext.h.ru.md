Title: SPPugContext.h


# EXTRA_WEBSERVER_PUG_SPPUGCONTEXT_H_

## BRIEF

Заголовок контекста исполнения шаблона

## CONTENT

Заголовок контекста исполнения шаблона


# ::stappler::pug::Context

## BRIEF

Класс контекста исполнения шаблона

## CONTENT

Класс контекста исполнения шаблона. Реализует выполнение и вывод готовых данных из шаблонизатора.

Базовые классы:
* memory::AllocPool


# ::stappler::pug::Context::StackSize

## BRIEF

Размер стека вызовов по умолчанию

## CONTENT

Доступ: public

Размер стека вызовов по умолчанию

Тип: size_t const


# ::stappler::pug::Context::Callback

## BRIEF

Функция для вызова функции из шаблона

## CONTENT

Доступ: public

Функция для вызова функции из шаблона


# ::stappler::pug::Context::IncludeCallback

## BRIEF

Функция, вызываемая при включении другого шаблона

## CONTENT

Доступ: public

Функция, вызываемая при включении другого шаблона


# ::stappler::pug::Context::Mixin

## BRIEF

Структура данных о примеси

## CONTENT

Доступ: public

Структура данных о примеси (подшаблоне)

# ::stappler::pug::Context::Mixin::chunk

## BRIEF

Сегмент данных примеси

## CONTENT

Сегмент данных примеси

Тип: Template::Chunk const*


# ::stappler::pug::Context::Mixin::args

## BRIEF

Список аргументов примеси

## CONTENT

Список аргументов примеси

Тип: Vector<Pair<stappler::StringView, stappler::pug::Expression *>>


# ::stappler::pug::Context::Mixin::required

## BRIEF

Число требуемых к заполнению аргументов

## CONTENT

Число требуемых к заполнению аргументов

Тип: size_t


# ::stappler::pug::Context::VarScope

## BRIEF

Контекст переменных шаблона

## CONTENT

Доступ: public

Контекст переменных шаблона

Базовые классы:
* memory::AllocPool


# ::stappler::pug::Context::VarScope::namedVars

## BRIEF

Доступные для чтения переменные

## CONTENT

Доступные для чтения переменные

Тип: memory::dict<String, VarStorage>


# ::stappler::pug::Context::VarScope::mixins

## BRIEF

Доступные для чтения примеси

## CONTENT

Доступные для чтения примеси

Тип: memory::dict<String, Mixin>


# ::stappler::pug::Context::VarScope::prev

## BRIEF

Контекст уровнем выше

## CONTENT

Контекст уровнем выше

Тип: stappler::pug::Context::VarScope*


# ::stappler::pug::Context::VarList

## BRIEF

Список доступных для чтения переменных

## CONTENT

Доступ: public

Список доступных для чтения переменных

Базовые классы:
* memory::AllocPool


# ::stappler::pug::Context::VarList::MinStaticVars

## BRIEF

Число статически доступных переменных для быстрого доступа

## CONTENT

Число статически доступных переменных для быстрого доступа

Тип: size_t const


# ::stappler::pug::Context::VarList::staticCount

## BRIEF

Число доступных статически переменных

## CONTENT

Число доступных статически переменных

Тип: size_t


# ::stappler::pug::Context::VarList::staticList

## BRIEF

Статический список переменных для быстрого доступа

## CONTENT

Статический список переменных для быстрого доступа

Тип: std::array<Var, MinStaticVars>


# ::stappler::pug::Context::VarList::dynamicList

## BRIEF

Динамический набор переменных

## CONTENT

Динамический набор переменных

Тип: Vector<stappler::pug::Var>


# ::stappler::pug::Context::VarList::emplace(stappler::pug::Var&&)

## BRIEF

Добавляет переменную в список

## CONTENT

Добавляет переменную в список

Параметры:
* stappler::pug::Var&&


# ::stappler::pug::Context::VarList::size() const

## BRIEF

Число переменных в списке

## CONTENT

Число переменных в списке

Возвращает:
* size_t

# ::stappler::pug::Context::VarList::data()

## BRIEF

Возвращает указатель на текущий блок данных, хранящий перменные

## CONTENT

Возвращает указатель на текущий блок данных, хранящий перменные

Возвращает:
* stappler::pug::Var*

# ::stappler::pug::Context::isConstExpression(stappler::pug::Expression const&)

## BRIEF

Проверяет, является ли выражение константой

## CONTENT

Доступ: public

Проверяет, является ли выражение константой

Параметры:
* stappler::pug::Expression const&

Возвращает:
* bool

# ::stappler::pug::Context::printConstExpr(stappler::pug::Expression const&,std::ostream&,bool)

## BRIEF

Записывает константу в поток

## CONTENT

Доступ: public

Записывает константу в поток

Параметры:
* stappler::pug::Expression const&
* std::ostream&
* bool

Возвращает:
* bool

# ::stappler::pug::Context::printAttrVar(stappler::StringView const&,stappler::pug::Expression const&,std::ostream&,bool)

## BRIEF

Записывает в поток переменную как атрибут и его значение

## CONTENT

Доступ: public

Записывает в поток переменную как атрибут и его значение

Параметры:
* stappler::StringView const& - имя атрибута
* stappler::pug::Expression const& - значение
* std::ostream&
* bool - true если необходимо экранировать спецсимволы

Возвращает:
* bool

# ::stappler::pug::Context::printAttrExpr(stappler::pug::Expression const&,std::ostream&)

## BRIEF

Записывает в поток выражение для значения атрибута

## CONTENT

Доступ: public

Записывает в поток выражение для значения атрибута

Параметры:
* stappler::pug::Expression const&
* std::ostream&

Возвращает:
* bool

# ::stappler::pug::Context::Context()

## BRIEF

Конструктор

## CONTENT

Доступ: public

Конструктор

# ::stappler::pug::Context::setErrorStream(std::ostream&)

## BRIEF

Устанавливает поток для вывода ошибок времени исполнения

## CONTENT

Доступ: public

Устанавливает поток для вывода ошибок времени исполнения

Параметры:
* std::ostream&


# ::stappler::pug::Context::print(stappler::pug::Expression const&,std::ostream&,bool)

## BRIEF

Записывает результат исполнения выражения в поток

## CONTENT

Доступ: public

Записывает результат исполнения выражения в поток

Параметры:
* stappler::pug::Expression const&
* std::ostream&
* bool - true если необходимо экранировать спецсимволы

Возвращает:
* bool

# ::stappler::pug::Context::printAttr(stappler::StringView const&,stappler::pug::Expression const&,std::ostream&,bool)

## BRIEF

Записывает атрибут и значение в поток

## CONTENT

Доступ: public

Записывает атрибут и значение в поток

Параметры:
* stappler::StringView const& - имя атрибута
* stappler::pug::Expression const&
* std::ostream&
* bool - true если необходимо экранировать спецсимволы

Возвращает:
* bool

# ::stappler::pug::Context::printAttrExprList(stappler::pug::Expression const&,std::ostream&)

## BRIEF

Записывает выражение как значение атрибута в поток

## CONTENT

Доступ: public

Записывает выражение как значение атрибута в поток

Параметры:
* stappler::pug::Expression const&
* std::ostream&

Возвращает:
* bool

# ::stappler::pug::Context::exec(stappler::pug::Expression const&,std::ostream&,bool)

## BRIEF

Выполняет выражение и записывает результат в поток

## CONTENT

Доступ: public

Выполняет выражение и записывает результат в поток

Параметры:
* stappler::pug::Expression const&
* std::ostream&
* bool - true если необходимо экранировать спецсимволы

Возвращает:
* stappler::pug::Var

# ::stappler::pug::Context::set(stappler::StringView const&,stappler::pug::Value const&,stappler::pug::VarClass*)

## BRIEF

Устанавливает значение для локальной переменной

## CONTENT

Доступ: public

Устанавливает значение для локальной переменной

Параметры:
* stappler::StringView const& - имя переменной
* stappler::pug::Value const& - значение переменной
* stappler::pug::VarClass* - класс переменной


# ::stappler::pug::Context::set(stappler::StringView const&,stappler::pug::Value&&,stappler::pug::VarClass*)

## BRIEF

Устанавливает значение для локальной переменной

## CONTENT

Доступ: public

Устанавливает значение для локальной переменной

Параметры:
* stappler::StringView const& - имя переменной
* stappler::pug::Value&& - значение переменной
* stappler::pug::VarClass* - класс переменной


# ::stappler::pug::Context::set(stappler::StringView const&,bool,stappler::pug::Value const*,stappler::pug::VarClass*)

## BRIEF

Устанавливает значение для локальной переменной через указатель

## CONTENT

Доступ: public

Устанавливает значение для локальной переменной через указатель

Параметры:
* stappler::StringView const& - имя переменной
* bool - true если переменная - константа
* stappler::pug::Value const*  - указатель на значение переменной
* stappler::pug::VarClass* - класс переменной


# ::stappler::pug::Context::set(stappler::StringView const&,stappler::pug::Context::Callback&&)

## BRIEF

Устанавливает значение для функции

## CONTENT

Доступ: public

Устанавливает значение для функции

Параметры:
* stappler::StringView const& - имя функции
* stappler::pug::Context::Callback&& - функтор для вызова функции


# ::stappler::pug::Context::setMixin(stappler::StringView const&,Template::Chunk const*)

## BRIEF

Регистрирует примесь в контексте

## CONTENT

Доступ: public

Регистрирует примесь в контексте

Параметры:
* stappler::StringView const& - имя примеси
* Template::Chunk const* - сегмент данных примеси

Возвращает:
* bool

# ::stappler::pug::Context::getMixin(stappler::StringView const&) const

## BRIEF

Получает примесь по имени

## CONTENT

Доступ: public

Получает примесь по имени

Параметры:
* stappler::StringView const&

Возвращает:
* stappler::pug::Context::Mixin const*

# ::stappler::pug::Context::getVar(stappler::StringView const&) const

## BRIEF

Возвращает переменную по имени

## CONTENT

Доступ: public

Возвращает переменную по имени

Параметры:
* stappler::StringView const&

Возвращает:
* stappler::pug::VarStorage const*

# ::stappler::pug::Context::set(stappler::StringView const&,stappler::pug::VarClass&&)

## BRIEF

Добавляет именованный класс переменных

## CONTENT

Доступ: public

Добавляет именованный класс переменных

Параметры:
* stappler::StringView const&
* stappler::pug::VarClass&&

Возвращает:
* stappler::pug::VarClass*

# ::stappler::pug::Context::runInclude(stappler::StringView const&,std::ostream&,stappler::pug::Template const*)

## BRIEF

Запускает вложенный шаблон

## CONTENT

Доступ: public

Запускает вложенный шаблон

Параметры:
* stappler::StringView const& - имя шаблона
* std::ostream& - поток для вывода
* stappler::pug::Template const* - запускаемый шаблон

Возвращает:
* bool

# ::stappler::pug::Context::setIncludeCallback(stappler::pug::Context::IncludeCallback&&)

## BRIEF

Устанавливает функцию загрузки вложенных шаблонов

## CONTENT

Доступ: public

Устанавливает функцию загрузки вложенных шаблонов

Параметры:
* stappler::pug::Context::IncludeCallback&&


# ::stappler::pug::Context::pushVarScope(stappler::pug::Context::VarScope&)

## BRIEF

Добавляет новый контекст переменных на стек

## CONTENT

Доступ: public

Добавляет новый контекст переменных на стек

Параметры:
* stappler::pug::Context::VarScope&


# ::stappler::pug::Context::popVarScope()

## BRIEF

Убирает со стека текущий контекст переменных

## CONTENT

Доступ: public

Убирает со стека текущий контекст переменных

# ::stappler::pug::Context::loadDefaults()

## BRIEF

Загружает стандартные переменные и функции

## CONTENT

Доступ: public

Загружает стандартные переменные и функции

# ::stappler::pug::Context::_includeCallback

## BRIEF

Функция загрузки вложенных шаблонов

## CONTENT

Доступ: protected

Функция загрузки вложенных шаблонов

Тип: IncludeCallback


# ::stappler::pug::Context::currentScope

## BRIEF

Текущий контекст переменных

## CONTENT

Доступ: protected

Текущий контекст переменных

Тип: stappler::pug::Context::VarScope*


# ::stappler::pug::Context::globalScope

## BRIEF

Глобальный контекст переменных

## CONTENT

Доступ: protected

Глобальный контекст переменных

Тип: stappler::pug::Context::VarScope


# ::stappler::pug::Context::classes

## BRIEF

Зарегистрированные классы переменных

## CONTENT

Доступ: protected

Зарегистрированные классы переменных

Тип: Map<stappler::pug::String, stappler::pug::VarClass>
