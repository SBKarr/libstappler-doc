Title: SPLog.h


# STAPPLER_CORE_UTILS_SPLOG_H_

## BRIEF

Заголовок функций логирования

## CONTENT

Заголовок функций логирования


# ::stappler::log::LogType

## BRIEF

Тип (уровень) лога для сообщения

## CONTENT

Тип (уровень) лога для сообщения

Значения:
* Verbose - подробные сообщения о работе SDK
* Debug - отладочные сообщения
* Info - информационные сообщения
* Warn - предупреждения
* Error - ошибки
* Fatal - критические ошибки
* Default - вывод по умолчанию - отладочный


# ::stappler::log::CustomLog

## BRIEF

Структура для пользовательской функции лога

## CONTENT

Структура для пользовательской функции лога


# ::stappler::log::CustomLog::VA

## BRIEF

Объединение аргументов для вывода в лог

## CONTENT

Объединение аргументов для вывода в лог


# ::stappler::log::CustomLog::VA::text

## BRIEF

Значение текстовой строки для вывода

## CONTENT

Значение текстовой строки для вывода

Тип: stappler::StringView


# ::stappler::log::CustomLog::VA::

## BRIEF

Анонимная структура форматированного вывода

## CONTENT

Анонимная структура форматированного вывода


# ::stappler::log::CustomLog::VA::format

## BRIEF

Формат вывода аргументов

## CONTENT

Формат вывода аргументов

Тип: char const*


# ::stappler::log::CustomLog::VA::args

## BRIEF

Список аргументов для форматирвоания

## CONTENT

Список аргументов для форматирвоания

Тип: va_list


# ::stappler::log::CustomLog::VA::VA()

## BRIEF

Кннструктор по умолчанию

## CONTENT

Кннструктор по умолчанию


# ::stappler::log::CustomLog::Type

## BRIEF

Тип аргументов для вывода в лог

## CONTENT

Тип аргументов для вывода в лог

Значения:
* Text - простая строка
* Format - фроматированная строка


# ::stappler::log::CustomLog::log_fn

## BRIEF

Функция для вывода лога

## CONTENT

Функция для вывода лога

Аргументы функции:
* LogType - уровень лога
* StringView const& - тег лога
* Type - тип аргументов
* VA & - аргументы для вывода

# ::stappler::log::CustomLog::CustomLog(stappler::log::CustomLog::log_fn)

## BRIEF

Создаёт и подключает новый пользовательский способ логирования

## CONTENT

Создаёт и подключает новый пользовательский способ логирования

Параметры:
* stappler::log::CustomLog::log_fn - функция для вывода


# ::stappler::log::CustomLog::~CustomLog()

## BRIEF

Удаляет и отключает пользователскую функцию вывода лога

## CONTENT

Удаляет и отключает пользователскую функцию вывода лога


# ::stappler::log::CustomLog::CustomLog(stappler::log::CustomLog const&)

## BRIEF

Запрет копирования

## CONTENT

Запрет копирования

Параметры:
* stappler::log::CustomLog const&


# ::stappler::log::CustomLog::operator=(stappler::log::CustomLog const&)

## BRIEF

Запрет копирования

## CONTENT

Запрет копирования

Параметры:
* stappler::log::CustomLog const&

Возвращает:
* stappler::log::CustomLog&

# ::stappler::log::CustomLog::CustomLog(stappler::log::CustomLog&&)

## BRIEF

Перемещение функции логирования

## CONTENT

Перемещение функции логирования

Параметры:
* stappler::log::CustomLog&&


# ::stappler::log::CustomLog::operator=(stappler::log::CustomLog&&)

## BRIEF

Перемещение функции логирования

## CONTENT

Перемещение функции логирования

Параметры:
* stappler::log::CustomLog&&

Возвращает:
* stappler::log::CustomLog&

# ::stappler::log::CustomLog::fn

## BRIEF

Функция логирования

## CONTENT

Функция логирования

Тип: log_fn


# ::stappler::log::CustomLog::manager

## BRIEF

Управляющая структура для пользователских функций логирования

## CONTENT

Управляющая структура для пользователских функций логирования. Пользователский лог хранит на неё ссылку, препятствуя преждевременному удалению.

Тип: Rc<RefBase<memory::StandartInterface>>


# ::stappler::log::setLogFilterMask(std::bitset<6>&&)

## BRIEF

Устанавливает глобальную маску логирования

## CONTENT

Устанавливает глобальную маску логирования. Если соотвествующий бит в маске установлен - соотвествующий уровень лога не выводится.

Параметры:
* std::bitset<6>&&


# ::stappler::log::format(stappler::log::LogType,stappler::StringView const&,char const*,...)

## BRIEF

Выводит данные в лог форматированно

## CONTENT

Выводит данные в лог форматированно

Параметры:
* stappler::log::LogType - уровень лога
* stappler::StringView const& - тег лога
* char const* - строка форматирования


# ::stappler::log::text(stappler::log::LogType,stappler::StringView const&,stappler::StringView const&)

## BRIEF

Выводит в лог текстовую строку

## CONTENT

Выводит в лог текстовую строку

Параметры:
* stappler::log::LogType - уровень лога
* stappler::StringView const& - тег лога
* stappler::StringView const& - строка лога


# ::stappler::log::verbose<typename>(stappler::StringView const&,Args &&...)

## BRIEF

Выводит сообщение в лог уровня Verbose

## CONTENT

Выводит сообщение в лог уровня Verbose.

Параметры шаблона:
* typename Args - список аргументов произвольной длины

Параметры:
* stappler::StringView const& - тег лога
* Args &&... - список аргументов, составляющих строку для вывода с использованием интерфейса toString


# ::stappler::log::debug<typename>(stappler::StringView const&,Args &&...)

## BRIEF

Выводит сообщение в лог уровня Debug

## CONTENT

Выводит сообщение в лог уровня Debug.

Параметры шаблона:
* typename Args - список аргументов произвольной длины

Параметры:
* stappler::StringView const& - тег лога
* Args &&... - список аргументов, составляющих строку для вывода с использованием интерфейса toString


# ::stappler::log::info<typename>(stappler::StringView const&,Args &&...)

## BRIEF

Выводит сообщение в лог уровня Info

## CONTENT

Выводит сообщение в лог уровня Info.

Параметры шаблона:
* typename Args - список аргументов произвольной длины

Параметры:
* stappler::StringView const& - тег лога
* Args &&... - список аргументов, составляющих строку для вывода с использованием интерфейса toString


# ::stappler::log::warn<typename>(stappler::StringView const&,Args &&...)

## BRIEF

Выводит сообщение в лог уровня Warn

## CONTENT

Выводит сообщение в лог уровня Warn.

Параметры шаблона:
* typename Args - список аргументов произвольной длины

Параметры:
* stappler::StringView const& - тег лога
* Args &&... - список аргументов, составляющих строку для вывода с использованием интерфейса toString


# ::stappler::log::error<typename>(stappler::StringView const&,Args &&...)

## BRIEF

Выводит сообщение в лог уровня Error

## CONTENT

Выводит сообщение в лог уровня Error.

Параметры шаблона:
* typename Args - список аргументов произвольной длины

Параметры:
* stappler::StringView const& - тег лога
* Args &&... - список аргументов, составляющих строку для вывода с использованием интерфейса toString


# ::stappler::log::fatal<typename>(stappler::StringView const&,Args &&...)

## BRIEF

Выводит сообщение в лог уровня Fatal

## CONTENT

Выводит сообщение в лог уровня Fatal.

Параметры шаблона:
* typename Args - список аргументов произвольной длины

Параметры:
* stappler::StringView const& - тег лога
* Args &&... - список аргументов, составляющих строку для вывода с использованием интерфейса toString


# SPASSERT

## BRIEF

Макрос аннотированного утверждения

## CONTENT

Макрос аннотированного утверждения

Параметры:
* cond - утверждаемое условие
* msg - аннотация
