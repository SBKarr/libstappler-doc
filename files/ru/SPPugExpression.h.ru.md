Title: SPPugExpression.h


# EXTRA_WEBSERVER_PUG_SPPUGEXPRESSION_H_

## BRIEF

Заголовок структуры выражения шаблона

## CONTENT

Заголовок структуры выражения шаблона

# ::stappler::pug::Expression

## BRIEF

Структура выражения в шаблоне

## CONTENT

Структура выражения в шаблоне. Реализует структуру AST.

Базовые классы:
* memory::AllocPool

# ::stappler::pug::Expression::OutStream

## BRIEF

Тип выходного потока

## CONTENT

Тип выходного потока


# ::stappler::pug::Expression::Op

## BRIEF

Тип базовой операции

## CONTENT

Тип базовой операции

Значения:
* NoOp
* Var
* SuffixIncr
* SuffixDecr
* Sharp 
* Dot
* Scope
* Call
* Subscript
* Construct
* PrefixIncr
* PrefixDecr
* Minus
* Neg
* BitNot
* Mult
* Div
* Rem
* Sum
* Sub
* ShiftLeft
* ShiftRight
* Lt
* LtEq
* Gt
* GtEq
* Eq
* NotEq
* BitAnd
* BitXor
* BitOr
* And
* Or
* Conditional
* ConditionalSwitch
* Assignment
* SumAssignment
* DiffAssignment
* MultAssignment
* DivAssignment
* RemAssignment
* LShiftAssignment
* RShiftAssignment
* AndAssignment
* XorAssignment
* OrAssignment
* Colon
* Comma
* Sequence


# ::stappler::pug::Expression::Block

## BRIEF

Тип блокового объединения

## CONTENT

Тип блокового объединения

Значения:
* None
* Parentesis
* Composition
* Operator


# ::stappler::pug::Expression::Flags

## BRIEF

Флаги чтения операции

## CONTENT

Флаги чтения операции

Значения:
* StopOnNewLine
* StopOnRootColon
* StopOnRootComma
* StopOnRootSequence
* UseNewlineToken


# ::stappler::pug::Expression::Options

## BRIEF

Параметры чтения выражения

## CONTENT

Параметры чтения выражения

# ::stappler::pug::Expression::Options::getDefaultInline()

## BRIEF

Возвращает стандартные параметры чтения для вложенного выражения

## CONTENT

Возвращает стандартные параметры чтения для вложенного выражения

Возвращает:
* stappler::pug::Expression::Options

# ::stappler::pug::Expression::Options::getDefaultScript()

## BRIEF

Возвращает стандартные параметры чтения для скриптового блока

## CONTENT

Возвращает стандартные параметры чтения для скриптового блока

Возвращает:
* stappler::pug::Expression::Options

# ::stappler::pug::Expression::Options::getWithNewlineToken(stappler::StringView const&)

## BRIEF


Возвращает стандартные параметры чтения для вложенного выражения, завершаемого токеном

## CONTENT

Возвращает стандартные параметры чтения для вложенного выражения, завершаемого токеном

Параметры:
* stappler::StringView const&

Возвращает:
* stappler::pug::Expression::Options

# ::stappler::pug::Expression::Options::enableAllOperators()

## BRIEF

Включает все операторы для чтения

## CONTENT

Включает все операторы для чтения

Возвращает:
* stappler::pug::Expression::Options&

# ::stappler::pug::Expression::Options::disableAllOperators()

## BRIEF

Выключает все операторы для чтения

## CONTENT

Выключает все операторы для чтения

Возвращает:
* stappler::pug::Expression::Options&

# ::stappler::pug::Expression::Options::enableOperators(std::initializer_list<Op>&&)

## BRIEF

Включает операторы из списка

## CONTENT

Включает операторы из списка

Параметры:
* std::initializer_list<Op>&&

Возвращает:
* stappler::pug::Expression::Options&

# ::stappler::pug::Expression::Options::disableOperators(std::initializer_list<Op>&&)

## BRIEF

Исключает операторы из списка

## CONTENT

Исключает операторы из списка

Параметры:
* std::initializer_list<Op>&&

Возвращает:
* stappler::pug::Expression::Options&

# ::stappler::pug::Expression::Options::setFlags(std::initializer_list<Flags>&&)

## BRIEF

Устанавливает флаги чтения выражения

## CONTENT

Устанавливает флаги чтения выражения

Параметры:
* std::initializer_list<Flags>&&

Возвращает:
* stappler::pug::Expression::Options&

# ::stappler::pug::Expression::Options::clearFlags(std::initializer_list<Flags>&&)

## BRIEF

Убирает флаги чтения выражения

## CONTENT

Убирает флаги чтения выражения

Параметры:
* std::initializer_list<Flags>&&

Возвращает:
* stappler::pug::Expression::Options&

# ::stappler::pug::Expression::Options::useNewlineToken(stappler::StringView const&)

## BRIEF

Использовать ограничительный токен

## CONTENT

Использовать ограничительный токен

Параметры:
* stappler::StringView const&

Возвращает:
* stappler::pug::Expression::Options&

# ::stappler::pug::Expression::Options::hasFlag(stappler::pug::Expression::Flags) const

## BRIEF

Проверяет на наличие флага

## CONTENT

Проверяет на наличие флага

Параметры:
* stappler::pug::Expression::Flags

Возвращает:
* bool

# ::stappler::pug::Expression::Options::hasOperator(stappler::pug::Expression::Op) const

## BRIEF

Проверяет на доступность оператора

## CONTENT

Проверяет на доступность оператора

Параметры:
* stappler::pug::Expression::Op

Возвращает:
* bool

# ::stappler::pug::Expression::Options::flags

## BRIEF

Активные флаги

## CONTENT

Активные флаги

Тип: std::bitset<toInt(UseNewlineToken) + 1>


# ::stappler::pug::Expression::Options::operators

## BRIEF

Активные операторы

## CONTENT

Активные операторы

Тип: std::bitset<toInt(Op::Sequence) + 1>


# ::stappler::pug::Expression::Options::newlineToken

## BRIEF

Ограничительный токен

## CONTENT

Ограничительный токен

Тип: stappler::StringView


# ::stappler::pug::Expression::parse(stappler::StringView&,stappler::pug::Expression::Options const&)

## BRIEF

Разбирает выражение из строки

## CONTENT

Разбирает выражение из строки

Параметры:
* stappler::StringView&
* stappler::pug::Expression::Options const&

Возвращает:
* stappler::pug::Expression*

# ::stappler::pug::Expression::Expression()

## BRIEF

Конструктор

## CONTENT

Конструктор

# ::stappler::pug::Expression::Expression(stappler::pug::Expression::Op)

## BRIEF

Конструктор на основе операции

## CONTENT

Конструктор на основе операции

Параметры:
* stappler::pug::Expression::Op


# ::stappler::pug::Expression::Expression(stappler::pug::Expression::Op,stappler::pug::Expression*,stappler::pug::Expression*)

## BRIEF

Конструктор на основе операции над двумя выражениями

## CONTENT

Конструктор на основе операции над двумя выражениями

Параметры:
* stappler::pug::Expression::Op
* stappler::pug::Expression*
* stappler::pug::Expression*


# ::stappler::pug::Expression::Expression(stappler::pug::Expression::Op,stappler::pug::Expression*,stappler::pug::Expression*,stappler::StringView const&)

## BRIEF

Конструктор на основе операции над двумя выражениями и переменной

## CONTENT

Конструктор на основе операции над двумя выражениями и переменной

Параметры:
* stappler::pug::Expression::Op
* stappler::pug::Expression*
* stappler::pug::Expression*
* stappler::StringView const&


# ::stappler::pug::Expression::Expression(stappler::pug::Expression::Op,stappler::pug::Expression*,stappler::pug::Expression*,stappler::pug::Value&&)

## BRIEF

Конструктор на основе операции над двумя выражениями и значением

## CONTENT

Конструктор на основе операции над двумя выражениями и значением

Параметры:
* stappler::pug::Expression::Op
* stappler::pug::Expression*
* stappler::pug::Expression*
* stappler::pug::Value&&


# ::stappler::pug::Expression::~Expression()

## BRIEF

Деструктор

## CONTENT

Деструктор

# ::stappler::pug::Expression::set(stappler::pug::Value&&)

## BRIEF

Устанавливает значение для узла дерева

## CONTENT

Устанавливает значение для узла дерева

Параметры:
* stappler::pug::Value&&


# ::stappler::pug::Expression::set(stappler::StringView const&)

## BRIEF

Устанавливает переменную для узла дерева

## CONTENT

Устанавливает переменную для узла дерева

Параметры:
* stappler::StringView const&


# ::stappler::pug::Expression::empty() const

## BRIEF

Проверяет выражение на пустоту

## CONTENT

Проверяет выражение на пустоту

Возвращает:
* bool

# ::stappler::pug::Expression::isConst() const

## BRIEF

Проверяет выражение на константность

## CONTENT

Проверяет выражение на константность

Возвращает:
* bool

# ::stappler::pug::Expression::describe(stappler::pug::Expression::OutStream const&,size_t)

## BRIEF

Выводит структуру выражения в поток

## CONTENT

Выводит структуру выражения в поток

Параметры:
* stappler::pug::Expression::OutStream const&
* size_t - текущий уровень вложенности


# ::stappler::pug::Expression::op

## BRIEF

Операция узла

## CONTENT

Операция узла

Тип: stappler::pug::Expression::Op


# ::stappler::pug::Expression::left

## BRIEF

Левый операнд

## CONTENT

Тип: stappler::pug::Expression*

Левый операнд

# ::stappler::pug::Expression::right

## BRIEF

Правый операнд

## CONTENT

Правый операнд

Тип: stappler::pug::Expression*


# ::stappler::pug::Expression::block

## BRIEF

Тип блока вокруг выражения

## CONTENT

Тип блока вокруг выражения

Тип: stappler::pug::Expression::Block


# ::stappler::pug::Expression::isToken

## BRIEF

Представляет ли выражение единичный токен

## CONTENT

Представляет ли выражение единичный токен

Тип: bool


# ::stappler::pug::Expression::value

## BRIEF

Значение узла выражения

## CONTENT

Значение узла выражения

Тип: stappler::pug::Value
