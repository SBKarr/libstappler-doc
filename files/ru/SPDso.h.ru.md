Title: SPDso.h


# CORE_CORE_UTILS_SPDSO_H_

## BRIEF

Заголовок интерфейса динамически подключаемых библиотек

## CONTENT

Заголовок интерфейса динамически подключаемых библиотек

# ::stappler::DsoFlags

## BRIEF

Флаги подключения библиотек

## CONTENT

Флаги подключения библиотек

Значения:
* None
* Self - подключает само приложение как библиотеку, имя файла игнорируется
* Lazy - "ленивый" режим связывания символов (RTLD_LAZY)
* Global - экспортирует подключённе символы глобально (RTLD_GLOBAL)


# ::stappler::operator|(stappler::DsoFlags const&,stappler::DsoFlags const&)

## BRIEF

Битовая операция флагов, создана автоматически

## CONTENT

Битовая операция флагов, создана автоматически

Параметры:
* stappler::DsoFlags const&
* stappler::DsoFlags const&

Возвращает:
* stappler::DsoFlags

# ::stappler::operator&(stappler::DsoFlags const&,stappler::DsoFlags const&)

## BRIEF

Битовая операция флагов, создана автоматически

## CONTENT

Битовая операция флагов, создана автоматически

Параметры:
* stappler::DsoFlags const&
* stappler::DsoFlags const&

Возвращает:
* stappler::DsoFlags

# ::stappler::operator^(stappler::DsoFlags const&,stappler::DsoFlags const&)

## BRIEF

Битовая операция флагов, создана автоматически

## CONTENT

Битовая операция флагов, создана автоматически

Параметры:
* stappler::DsoFlags const&
* stappler::DsoFlags const&

Возвращает:
* stappler::DsoFlags

# ::stappler::operator|=(stappler::DsoFlags&,stappler::DsoFlags const&)

## BRIEF

Битовая операция флагов, создана автоматически

## CONTENT

Битовая операция флагов, создана автоматически

Параметры:
* stappler::DsoFlags&
* stappler::DsoFlags const&

Возвращает:
* stappler::DsoFlags&

# ::stappler::operator&=(stappler::DsoFlags&,stappler::DsoFlags const&)

## BRIEF

Битовая операция флагов, создана автоматически

## CONTENT

Битовая операция флагов, создана автоматически

Параметры:
* stappler::DsoFlags&
* stappler::DsoFlags const&

Возвращает:
* stappler::DsoFlags&

# ::stappler::operator^=(stappler::DsoFlags&,stappler::DsoFlags const&)

## BRIEF

Битовая операция флагов, создана автоматически

## CONTENT

Битовая операция флагов, создана автоматически

Параметры:
* stappler::DsoFlags&
* stappler::DsoFlags const&

Возвращает:
* stappler::DsoFlags&

# ::stappler::operator==(stappler::DsoFlags const&,std::underlying_type<DsoFlags>::type const&)

## BRIEF

Битовая операция флагов, создана автоматически

## CONTENT

Битовая операция флагов, создана автоматически

Параметры:
* stappler::DsoFlags const&
* std::underlying_type<DsoFlags>::type const&

Возвращает:
* bool

# ::stappler::operator==(std::underlying_type<DsoFlags>::type const&,stappler::DsoFlags const&)

## BRIEF

Битовая операция флагов, создана автоматически

## CONTENT

Битовая операция флагов, создана автоматически

Параметры:
* std::underlying_type<DsoFlags>::type const&
* stappler::DsoFlags const&

Возвращает:
* bool

# ::stappler::operator!=(stappler::DsoFlags const&,std::underlying_type<DsoFlags>::type const&)

## BRIEF

Битовая операция флагов, создана автоматически

## CONTENT

Битовая операция флагов, создана автоматически

Параметры:
* stappler::DsoFlags const&
* std::underlying_type<DsoFlags>::type const&

Возвращает:
* bool

# ::stappler::operator!=(std::underlying_type<DsoFlags>::type const&,stappler::DsoFlags const&)

## BRIEF

Битовая операция флагов, создана автоматически

## CONTENT

Битовая операция флагов, создана автоматически

Параметры:
* std::underlying_type<DsoFlags>::type const&
* stappler::DsoFlags const&

Возвращает:
* bool

# ::stappler::operator~(stappler::DsoFlags const&)

## BRIEF

Битовая операция флагов, создана автоматически

## CONTENT

Битовая операция флагов, создана автоматически

Параметры:
* stappler::DsoFlags const&

Возвращает:
* stappler::DsoFlags

# ::stappler::Dso

## BRIEF

RAII-структура для загрузки динамических библиотек

## CONTENT

RAII-структура для загрузки динамических библиотек

# ::stappler::Dso::~Dso()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор

# ::stappler::Dso::Dso()

## BRIEF

Конструктор по умолчанию

## CONTENT

Доступ: public

Конструктор по умолчанию, не загружает ничего


# ::stappler::Dso::Dso(stappler::StringView)

## BRIEF

Загружает библиотеку по пути в файловой системе

## CONTENT

Доступ: public

Загружает библиотеку по пути в файловой системе

Параметры:
* stappler::StringView


# ::stappler::Dso::Dso(stappler::StringView,stappler::DsoFlags)

## BRIEF

Загружает библиотеку по пути в файловой системе

## CONTENT

Доступ: public

Загружает библиотеку по пути в файловой системе. Использует флаги. Если задан флаг Self - путь игнорируется.

Параметры:
* stappler::StringView
* stappler::DsoFlags


# ::stappler::Dso::Dso(stappler::Dso const&)

## BRIEF

Конструктор копирования

## CONTENT

Доступ: public

Конструктор копирования

Параметры:
* stappler::Dso const&


# ::stappler::Dso::operator=(stappler::Dso const&)

## BRIEF

Оператор копирования

## CONTENT

Доступ: public

Оператор копирования

Параметры:
* stappler::Dso const&

Возвращает:
* stappler::Dso&

# ::stappler::Dso::Dso(stappler::Dso&&)

## BRIEF

Конструктор перемещения

## CONTENT

Доступ: public

Конструктор перемещения

Параметры:
* stappler::Dso&&


# ::stappler::Dso::operator=(stappler::Dso&&)

## BRIEF

Оператор перемещения

## CONTENT

Доступ: public

Оператор перемещения

Параметры:
* stappler::Dso&&

Возвращает:
* stappler::Dso&

# ::stappler::Dso::sym<typename>(stappler::StringView)

## BRIEF

Загружает символ из библиотеки

## CONTENT

Доступ: public

Загружает символ из библиотеки

Параметры шаблона:
* typename T - предполагаемый тип символа

Параметры:
* stappler::StringView - имя символа

Возвращает:
* T - запрошенный символ или nullptr

# ::stappler::Dso::operator bool() const

## BRIEF

Проверяет, загружена ли библиотека

## CONTENT

Доступ: public

Проверяет, загружена ли библиотека

Возвращает:
* bool - true если библиотека загружена

# ::stappler::Dso::getFlags() const

## BRIEF

Возвращает флаги загрузки библиотеки

## CONTENT

Доступ: public

Возвращает флаги загрузки библиотеки

Возвращает:
* stappler::DsoFlags

# ::stappler::Dso::getError() const

## BRIEF

Возвращает текст ошибки загрузки библиотеки

## CONTENT

Доступ: public

Возвращает текст ошибки загрузки библиотеки

Возвращает:
* stappler::StringView

# ::stappler::Dso::close()

## BRIEF

Закрывает загруженную библиотеку

## CONTENT

Доступ: public

Закрывает загруженную библиотеку

# ::stappler::Dso::isSelf() const

## BRIEF

Проверяет, является ли открытая библиотека самим приложением

## CONTENT

Доступ: public

Проверяет, является ли открытая библиотека самим приложением

Возвращает:
* bool

# ::stappler::Dso::isLazy() const

## BRIEF

Проверяет, установлен ли флаг ленивого связывания

## CONTENT

Доступ: public

Проверяет, установлен ли флаг ленивого связывания

Возвращает:
* bool

# ::stappler::Dso::loadSym(stappler::StringView)

## BRIEF

Вспомогательная функция загрузки символа

## CONTENT

Доступ: protected

Вспомогательная функция загрузки символа

Параметры:
* stappler::StringView

Возвращает:
* void*

# ::stappler::Dso::_flags

## BRIEF

Флаги загрузки

## CONTENT

Доступ: protected

Флаги загрузки

Тип: stappler::DsoFlags


# ::stappler::Dso::_handle

## BRIEF

Непрозрачный указатель на открытую библиотеку

## CONTENT

Доступ: protected

Непрозрачный указатель на открытую библиотеку

Тип: void*


# ::stappler::Dso::_error

## BRIEF

Буфер ошибки

## CONTENT

Доступ: protected

Буфер ошибки

Тип: char const*
