Title: SPTime.h


# STAPPLER_CORE_UTILS_SPTIME_H_

## BRIEF

Заголовок типов времени

## CONTENT

Заголовок типов времени


# SP_COMPILE_TIME

## BRIEF

Макрос подставляет текущее время компиляции

## CONTENT

Макрос подставляет текущее время компиляции


# ::stappler::sp_time_exp_t

## BRIEF

Структура для описания календарной даты

## CONTENT

Структура для описания календарной даты


# ::stappler::sp_time_exp_t::tm_gmt_e

## BRIEF

Тип соотношения времени с UTC

## CONTENT

Тип соотношения времени с UTC

Значения:
* gmt_unset - не определено
* gmt_local - время в локальном часовом поясе
* gmt_set - время в UTC


# ::stappler::sp_time_exp_t::tm_usec

## BRIEF

Микросекунды с последней секунды

## CONTENT

Микросекунды с последней секунды

Тип: int32_t


# ::stappler::sp_time_exp_t::tm_sec

## BRIEF

Секунды с последней минуты

## CONTENT

Секунды [0-61] с последней минуты

Тип: int32_t


# ::stappler::sp_time_exp_t::tm_min

## BRIEF

Минуты [0-59] с последнего часа

## CONTENT

Минуты [0-59] с последнего часа

Тип: int32_t


# ::stappler::sp_time_exp_t::tm_hour

## BRIEF

Часы [0-23] с последнего дня

## CONTENT

Часы [0-23] с последнего дня

Тип: int32_t


# ::stappler::sp_time_exp_t::tm_mday

## BRIEF

День месяца [1-31]

## CONTENT

День месяца [1-31]

Тип: int32_t


# ::stappler::sp_time_exp_t::tm_mon

## BRIEF

Месяц в году [0-11]

## CONTENT

Месяц в году [0-11]

Тип: int32_t


# ::stappler::sp_time_exp_t::tm_year

## BRIEF

Год с 1900

## CONTENT

Год с 1900 (может быть отрицательным)

Тип: int32_t


# ::stappler::sp_time_exp_t::tm_wday

## BRIEF

День недели, [0-6], начиная с воскресенья

## CONTENT

День недели, [0-6], начиная с воскресенья

Тип: int32_t


# ::stappler::sp_time_exp_t::tm_yday

## BRIEF

День в году [0-365]

## CONTENT

День в году [0-365]

Тип: int32_t


# ::stappler::sp_time_exp_t::tm_isdst

## BRIEF

1 если используется дневное время в текущем часовом поясе

## CONTENT

1 если используется дневное время в текущем часовом поясе

Тип: int32_t


# ::stappler::sp_time_exp_t::tm_gmtoff

## BRIEF

Смещение пояса по отношению к UTC в секундах

## CONTENT

Смещение пояса по отношению к UTC в секундах

Тип: int32_t


# ::stappler::sp_time_exp_t::tm_gmt_type

## BRIEF

Тип отношения времени к UTC

## CONTENT

Тип отношения времени к UTC


Тип: stappler::sp_time_exp_t::tm_gmt_e


# ::stappler::sp_time_exp_t::sp_time_exp_t()

## BRIEF

Конструирует пустую структуру

## CONTENT

Конструирует пустую структуру

# ::stappler::sp_time_exp_t::sp_time_exp_t(int64_t,int32_t,bool)

## BRIEF

Декодирует время в микросекундах

## CONTENT

Декодирует время в микросекундах

Параметры:
* int64_t - время в микросекундах
* int32_t - смещение от UTC, для систем, в которых оно не определено стандартными функциями
* bool - true если используется локальное время, false если UTC


# ::stappler::sp_time_exp_t::sp_time_exp_t(int64_t,int32_t)

## BRIEF

Декодирует время в микросекундах

## CONTENT

Декодирует время в микросекундах с явным указанием смещения. Время считается от UTC, смещение добавляется явно

Параметры:
* int64_t - время в микросекундах
* int32_t - смещение от UTC


# ::stappler::sp_time_exp_t::sp_time_exp_t(int64_t)

## BRIEF

Декодирует время в микросекундах как UTC

## CONTENT

Декодирует время в микросекундах как UTC

Параметры:
* int64_t


# ::stappler::sp_time_exp_t::sp_time_exp_t(int64_t,bool)

## BRIEF

Декодирует время в микросекундах как UTC или локальное

## CONTENT

Декодирует время в микросекундах как UTC или локальное

Параметры:
* int64_t
* bool - true если используется локальное время, false если UTC


# ::stappler::sp_time_exp_t::sp_time_exp_t(stappler::Time,int32_t,bool)

## BRIEF

Декодирует время в микросекундах

## CONTENT

Декодирует время в микросекундах

Параметры:
* stappler::Time - время в микросекундах
* int32_t - смещение от UTC, для систем, в которых оно не определено стандартными функциями
* bool - true если используется локальное время, false если UTC


# ::stappler::sp_time_exp_t::sp_time_exp_t(stappler::Time,int32_t)

## BRIEF

Декодирует время в микросекундах

## CONTENT

Декодирует время в микросекундах с явным указанием смещения. Время считается от UTC, смещение добавляется явно

Параметры:
* stappler::Time - время в микросекундах
* int32_t - смещение от UTC


# ::stappler::sp_time_exp_t::sp_time_exp_t(stappler::Time)

## BRIEF

Декодирует время в микросекундах как UTC

## CONTENT

Декодирует время в микросекундах как UTC

Параметры:
* stappler::Time


# ::stappler::sp_time_exp_t::sp_time_exp_t(stappler::Time,bool)

## BRIEF

Декодирует время в микросекундах как UTC или локальное

## CONTENT

Декодирует время в микросекундах как UTC или локальное

Параметры:
* stappler::Time
* bool - true если используется локальное время, false если UTC


# ::stappler::sp_time_exp_t::read(stappler::StringView)

## BRIEF

Разбирает строку как значение времени

## CONTENT

Разбирает строку как значение времени

Поддерживаемые форматы:
* Sun, 06 Nov 1994 08:49:37 GMT  ; RFC 822/1123
* 06 Nov 1994 08:49:37 GMT
* 6 Nov 1994 08:49:37 GMT
* Sunday, 06-Nov-94 08:49:37 GMT ; RFC 850
* Sun Nov  6 08:49:37 1994       ; ANSI C's asctime()
* 2011-04-28T06:34:00+09:00      ; XML-Atom
* 2011-04-28
* 12.03.2010

Параметры:
* stappler::StringView

Возвращает:
* bool - true если строка распознана

# ::stappler::sp_time_exp_t::get() const

## BRIEF

Компилирует в целочисленное время

## CONTENT

Компилирует в целочисленное время

Возвращает:
* stappler::Time

# ::stappler::sp_time_exp_t::gmt_get() const

## BRIEF

Компилирует в целочисленное время в UTC

## CONTENT

Компилирует в целочисленное время в UTC

Возвращает:
* stappler::Time

# ::stappler::sp_time_exp_t::ltz_get() const

## BRIEF

Компилирует в целочисленное время в локальной временной зоне

## CONTENT

Компилирует в целочисленное время в локальной временной зоне

Возвращает:
* stappler::Time

# ::stappler::sp_time_exp_t::geti() const

## BRIEF

Компилирует в целочисленное время

## CONTENT

Компилирует в целочисленное время

Возвращает:
* int64_t

# ::stappler::sp_time_exp_t::gmt_geti() const

## BRIEF

Компилирует в целочисленное время в UTC

## CONTENT

Компилирует в целочисленное время в UTC

Возвращает:
* int64_t

# ::stappler::sp_time_exp_t::ltz_geti() const

## BRIEF

Компилирует в целочисленное время в локальной временной зоне

## CONTENT

Компилирует в целочисленное время в локальной временной зоне

Возвращает:
* int64_t

# ::stappler::sp_time_exp_t::encodeRfc822(char*) const

## BRIEF

Кодирует время в RFC 822/1123 в UTC

## CONTENT

Кодирует время в RFC 822/1123 в UTC. Требует буфер размером 30 байт.

Параметры:
* char*


# ::stappler::sp_time_exp_t::encodeCTime(char*) const

## BRIEF

Кодирует время в ANSI C формат в UTC

## CONTENT

Кодирует время в ANSI C формат в UTC

Параметры:
* char* - буфер длины не менее 25 байт


# ::stappler::sp_time_exp_t::encodeIso8601(char*,size_t) const

## BRIEF

Кодирует время в ISO-8601 в UTC

## CONTENT

Кодирует время в ISO-8601 в UTC с заданной точностью в микросекундах

Параметры:
* char* - буфер длины 24 байта + точность
* size_t - точность в микросекундах [0-6]


# ::stappler::TimeStorage

## BRIEF

Базовое хранилище для целочисленного времени

## CONTENT

Базовое хранилище для целочисленного времени. Целочисленное время хранится как микросекунды с UNIX Epoch (00:00:00 UTC 1 января 1970). Время отсчитывается от UTC, однако, предусмотрены функции для текодирования времени как локального.


# ::stappler::TimeStorage::toMicroseconds() const

## BRIEF

Возвращает время в микросекундах.

## CONTENT

Доступ: public

Возвращает время в микросекундах.

Возвращает:
* uint64_t

# ::stappler::TimeStorage::toMilliseconds() const

## BRIEF

Возвращает время в миллисекундах.

## CONTENT

Доступ: public

Возвращает время в миллисекундах.

Возвращает:
* uint64_t

# ::stappler::TimeStorage::toSeconds() const

## BRIEF

Возвращает время в секундах

## CONTENT

Доступ: public

Возвращает время в секундах

Возвращает:
* uint64_t

# ::stappler::TimeStorage::toFloatSeconds() const

## BRIEF

Возвращает время в дробных секундах

## CONTENT

Доступ: public

Возвращает время в дробных секундах

Возвращает:
* float

# ::stappler::TimeStorage::toMicros() const

## BRIEF

Возвращает время в микросекундах.

## CONTENT

Доступ: public

Возвращает время в микросекундах.

Возвращает:
* uint64_t

# ::stappler::TimeStorage::toMillis() const

## BRIEF

Возвращает время в миллисекундах.

## CONTENT

Доступ: public

Возвращает время в миллисекундах.

Возвращает:
* uint64_t

# ::stappler::TimeStorage::mksec() const

## BRIEF

Возвращает время в микросекундах.

## CONTENT

Доступ: public

Возвращает время в микросекундах.

Доступ: public

Возвращает:
* uint64_t

# ::stappler::TimeStorage::msec() const

## BRIEF

Возвращает время в миллисекундах.

## CONTENT

Доступ: public

Возвращает время в миллисекундах.

Возвращает:
* uint64_t

# ::stappler::TimeStorage::sec() const

## BRIEF

Возвращает время в секундах

## CONTENT

Доступ: public

Возвращает время в секундах

Возвращает:
* uint64_t

# ::stappler::TimeStorage::fsec() const

## BRIEF

Возвращает время в дробных секундах

## CONTENT

Доступ: public

Возвращает время в дробных секундах

Возвращает:
* float

# ::stappler::TimeStorage::asLocal() const

## BRIEF

Декодирует время как локальное

## CONTENT

Доступ: public

Декодирует время как локальное

Возвращает:
* tm

# ::stappler::TimeStorage::asGmt() const

## BRIEF

Декодирует время как UTC

## CONTENT

Доступ: public

Декодирует время как UTC

Возвращает:
* tm

# ::stappler::TimeStorage::setMicros(uint64_t)

## BRIEF

Устанавливает время в микросекундах

## CONTENT

Доступ: public

Устанавливает время в микросекундах

Параметры:
* uint64_t


# ::stappler::TimeStorage::setMillis(uint64_t)

## BRIEF

Устанавливает время в миллисекундах

## CONTENT

Доступ: public

Устанавливает время в миллисекундах

Параметры:
* uint64_t


# ::stappler::TimeStorage::setMicroseconds(uint64_t)

## BRIEF

Устанавливает время в микросекундах

## CONTENT

Доступ: public

Устанавливает время в микросекундах

Параметры:
* uint64_t


# ::stappler::TimeStorage::setMilliseconds(uint64_t)

## BRIEF

Устанавливает время в миллисекундах

## CONTENT

Доступ: public

Устанавливает время в миллисекундах

Параметры:
* uint64_t


# ::stappler::TimeStorage::setSeconds(time_t)

## BRIEF

Устанавливает время в секундах

## CONTENT

Доступ: public

Устанавливает время в секундах

Параметры:
* time_t


# ::stappler::TimeStorage::clear()

## BRIEF

Очищает время, устанавливает в 0.

## CONTENT

Доступ: public

Очищает время, устанавливает в 0.


# ::stappler::TimeStorage::operator bool() const

## BRIEF

Проверяет время на пустоту

## CONTENT

Доступ: public

Проверяет время на пустоту

Возвращает:
* bool

# ::stappler::TimeStorage::TimeStorage()

## BRIEF

Конструктор по умолчанию

## CONTENT

Доступ: public

Конструктор по умолчанию, устанавливает нулевое время


# ::stappler::TimeStorage::TimeStorage(stappler::TimeStorage const&)

## BRIEF

Конструктор копирования

## CONTENT

Доступ: public

Конструктор копирования

Параметры:
* stappler::TimeStorage const&


# ::stappler::TimeStorage::TimeStorage(stappler::TimeStorage&&)

## BRIEF

Конструктор перемещения

## CONTENT

Доступ: public

Конструктор перемещения

Параметры:
* stappler::TimeStorage&&


# ::stappler::TimeStorage::operator=(stappler::TimeStorage const&)

## BRIEF

Оператор копирования

## CONTENT

Доступ: public

Оператор копирования

Параметры:
* stappler::TimeStorage const&

Возвращает:
* stappler::TimeStorage&

# ::stappler::TimeStorage::operator=(stappler::TimeStorage&&)

## BRIEF

Оператор перемещения

## CONTENT

Доступ: public

Оператор перемещения

Параметры:
* stappler::TimeStorage&&

Возвращает:
* stappler::TimeStorage&

# ::stappler::TimeStorage::TimeStorage(uint64_t)

## BRIEF

Конструктор из микросекунд

## CONTENT

Доступ: public

Конструктор из микросекунд

Параметры:
* uint64_t


# ::stappler::TimeStorage::_value

## BRIEF

Хранимое значение времени

## CONTENT

Доступ: protected

Хранимое значение времени

Тип: uint64_t


# ::stappler::TimeInterval

## BRIEF

Значение временного интервала

## CONTENT

Значение временного интервала

Базовые классы:
* TimeStorage


# ::stappler::TimeInterval::between(stappler::Time const&,stappler::Time const&)

## BRIEF

Возвращает интервал между двумя значениями времени

## CONTENT

Доступ: public

Возвращает интервал между двумя значениями времени

Параметры:
* stappler::Time const&
* stappler::Time const&

Возвращает:
* stappler::TimeInterval

# ::stappler::TimeInterval::microseconds(uint64_t)

## BRIEF

Возвращает интервал в микросекундах

## CONTENT

Доступ: public

Возвращает интервал в микросекундах

Параметры:
* uint64_t

Возвращает:
* stappler::TimeInterval

# ::stappler::TimeInterval::milliseconds(uint64_t)

## BRIEF

Возвращает интервал в миллисекундах

## CONTENT

Доступ: public

Возвращает интервал в миллисекундах

Параметры:
* uint64_t

Возвращает:
* stappler::TimeInterval

# ::stappler::TimeInterval::seconds(time_t)

## BRIEF

Возвращает интервал в секундах

## CONTENT

Доступ: public

Возвращает интервал в секундах

Параметры:
* time_t

Возвращает:
* stappler::TimeInterval

# ::stappler::TimeInterval::floatSeconds(float)

## BRIEF

Возвращает интервал в дробных секундах

## CONTENT

Доступ: public

Возвращает интервал в дробных секундах

Параметры:
* float

Возвращает:
* stappler::TimeInterval

# ::stappler::TimeInterval::operator+(stappler::Time const&) const

## BRIEF

Добавляет интервал ко времени

## CONTENT

Доступ: public

Добавляет интервал ко времени

Параметры:
* stappler::Time const&

Возвращает:
* stappler::Time const - результирующее время

# ::stappler::TimeInterval::operator+(stappler::TimeInterval const&) const

## BRIEF

Суммирует два интервала

## CONTENT

Доступ: public

Суммирует два интервала

Параметры:
* stappler::TimeInterval const&

Возвращает:
* stappler::TimeInterval const

# ::stappler::TimeInterval::operator+=(stappler::TimeInterval const&)

## BRIEF

Добавляет интервал к текущему

## CONTENT

Доступ: public

Добавляет интервал к текущему

Параметры:
* stappler::TimeInterval const&

Возвращает:
* stappler::TimeInterval&

# ::stappler::TimeInterval::operator-(stappler::TimeInterval const&) const

## BRIEF

Вычисляет разность между двумя интервалами

## CONTENT

Доступ: public

Вычисляет разность между двумя интервалами

Параметры:
* stappler::TimeInterval const&

Возвращает:
* stappler::TimeInterval const

# ::stappler::TimeInterval::operator-=(stappler::TimeInterval const&)

## BRIEF

Вычитает интервал из текущего

## CONTENT

Доступ: public

Вычитает интервал из текущего

Параметры:
* stappler::TimeInterval const&

Возвращает:
* stappler::TimeInterval&

# ::stappler::TimeInterval::operator*(float) const

## BRIEF

Умножает интервал на значение

## CONTENT

Доступ: public

Умножает интервал на значение

Параметры:
* float

Возвращает:
* stappler::TimeInterval const

# ::stappler::TimeInterval::operator*=(float)

## BRIEF

Умножает текущий интервал на значение

## CONTENT

Доступ: public

Умножает текущий интервал на значение

Параметры:
* float

Возвращает:
* stappler::TimeInterval&

# ::stappler::TimeInterval::operator/(float) const

## BRIEF

Делит интервал на значение

## CONTENT

Доступ: public

Делит интервал на значение

Параметры:
* float

Возвращает:
* stappler::TimeInterval const

# ::stappler::TimeInterval::operator/=(float)

## BRIEF

Делит текущий интервал на значение

## CONTENT

Доступ: public

Делит текущий интервал на значение

Параметры:
* float

Возвращает:
* stappler::TimeInterval&

# ::stappler::TimeInterval::operator<(stappler::TimeInterval const&) const

## BRIEF

Сравнивает два интервала

## CONTENT

Доступ: public

Сравнивает два интервала

Параметры:
* stappler::TimeInterval const&

Возвращает:
* bool

# ::stappler::TimeInterval::operator>(stappler::TimeInterval const&) const

## BRIEF

Сравнивает два интервала

## CONTENT

Доступ: public

Сравнивает два интервала

Параметры:
* stappler::TimeInterval const&

Возвращает:
* bool

# ::stappler::TimeInterval::operator<=(stappler::TimeInterval const&) const

## BRIEF

Сравнивает два интервала

## CONTENT

Доступ: public

Сравнивает два интервала

Параметры:
* stappler::TimeInterval const&

Возвращает:
* bool

# ::stappler::TimeInterval::operator>=(stappler::TimeInterval const&) const

## BRIEF

Сравнивает два интервала

## CONTENT

Доступ: public

Сравнивает два интервала

Параметры:
* stappler::TimeInterval const&

Возвращает:
* bool

# ::stappler::TimeInterval::operator==(stappler::TimeInterval const&) const

## BRIEF

Сравнивает два интервала

## CONTENT

Доступ: public

Сравнивает два интервала

Параметры:
* stappler::TimeInterval const&

Возвращает:
* bool

# ::stappler::TimeInterval::operator!=(stappler::TimeInterval const&) const

## BRIEF

Сравнивает два интервала

## CONTENT

Доступ: public

Сравнивает два интервала

Параметры:
* stappler::TimeInterval const&

Возвращает:
* bool

# ::stappler::TimeInterval::TimeInterval(stappler::nullptr_t)

## BRIEF

Конструирует нулевой интервал

## CONTENT

Доступ: public

Конструирует нулевой интервал

Параметры:
* stappler::nullptr_t


# ::stappler::TimeInterval::operator=(stappler::nullptr_t)

## BRIEF

Устанавливает нулевой интервал

## CONTENT

Доступ: public

Устанавливает нулевой интервал

Параметры:
* stappler::nullptr_t

Возвращает:
* stappler::TimeInterval&

# ::stappler::TimeInterval::TimeInterval()

## BRIEF

Конструирует нулевой интервал

## CONTENT

Доступ: public

Конструирует нулевой интервал


# ::stappler::TimeInterval::TimeInterval(stappler::TimeInterval const&)

## BRIEF

Конструктор копирования

## CONTENT

Доступ: public

Конструктор копирования

Параметры:
* stappler::TimeInterval const&


# ::stappler::TimeInterval::TimeInterval(stappler::TimeInterval&&)

## BRIEF

Конструктор перемещения

## CONTENT

Доступ: public

Конструктор перемещения

Параметры:
* stappler::TimeInterval&&


# ::stappler::TimeInterval::operator=(stappler::TimeInterval const&)

## BRIEF

Оператор копирования

## CONTENT

Доступ: public

Оператор копирования

Параметры:
* stappler::TimeInterval const&

Возвращает:
* stappler::TimeInterval&

# ::stappler::TimeInterval::operator=(stappler::TimeInterval&&)

## BRIEF

Оператор перемещения

## CONTENT

Доступ: public

Оператор перемещения

Параметры:
* stappler::TimeInterval&&

Возвращает:
* stappler::TimeInterval&

# ::stappler::Time

## BRIEF

Базовый класс для хранения целочисленного времени

## CONTENT

Базовый класс для хранения целочисленного времени. Время хранится в микросекундах от UNIX Epoch

Базовые классы:
* TimeStorage


# ::stappler::Time::now()

## BRIEF

Возвращает текущее время в UTC

## CONTENT

Доступ: public

Возвращает текущее время в UTC

Возвращает:
* stappler::Time

# ::stappler::Time::fromCompileTime(char const*,char const*)

## BRIEF

Создаёт время из времени компиляции

## CONTENT

Доступ: public

Создаёт время из времени компиляции

Параметры:
* char const*
* char const*

Возвращает:
* stappler::Time

# ::stappler::Time::fromHttp(stappler::StringView)

## BRIEF

Читает время из одного из доступных форматов

## CONTENT

Доступ: public

Читает время из одного из доступных форматов (см. sp_time_exp_t::read)

Параметры:
* stappler::StringView

Возвращает:
* stappler::Time

# ::stappler::Time::microseconds(uint64_t)

## BRIEF

Конструирует время из микросекунд

## CONTENT

Доступ: public

Конструирует время из микросекунд

Параметры:
* uint64_t

Возвращает:
* stappler::Time

# ::stappler::Time::milliseconds(uint64_t)

## BRIEF

Конструирует время из миллисекунд

## CONTENT

Доступ: public

Конструирует время из миллисекунд

Параметры:
* uint64_t

Возвращает:
* stappler::Time

# ::stappler::Time::seconds(time_t)

## BRIEF

Конструирует время из секунд

## CONTENT

Доступ: public

Конструирует время из секунд

Параметры:
* time_t

Возвращает:
* stappler::Time

# ::stappler::Time::floatSeconds(float)

## BRIEF

Конструирует время из дробных секунд

## CONTENT

Доступ: public

Конструирует время из дробных секунд

Параметры:
* float

Возвращает:
* stappler::Time

# ::stappler::Time::toHttp<typename>() const

## BRIEF

Кодирует время в строку RFC-822

## CONTENT

Доступ: public

Кодирует время в строку RFC-822

Параметры шаблона:
* typename Interface - интерфейс памяти для строки

Возвращает:
* typename Interface::StringType

# ::stappler::Time::toAtomXml<typename>() const

## BRIEF

Кодирует время в строку ISO-8601

## CONTENT

Доступ: public

Кодирует время в строку ISO-8601

Параметры шаблона:
* typename Interface - интерфейс памяти для строки

Возвращает:
* typename Interface::StringType

# ::stappler::Time::toRfc822<typename>() const

## BRIEF

Кодирует время в строку RFC-822

## CONTENT

Доступ: public

Кодирует время в строку RFC-822

Параметры шаблона:
* typename Interface - интерфейс памяти для строки

Возвращает:
* typename Interface::StringType

# ::stappler::Time::toCTime<typename>() const

## BRIEF

Кодирует время в строку ANSI C

## CONTENT

Доступ: public

Кодирует время в строку ANSI C

Параметры шаблона:
* typename Interface - интерфейс памяти для строки

Возвращает:
* typename Interface::StringType

# ::stappler::Time::toIso8601<typename>(size_t) const

## BRIEF

Кодирует время в строку ISO-8601

## CONTENT

Доступ: public

Кодирует время в строку ISO-8601

Параметры шаблона:
* typename Interface - интерфейс памяти для строки

Параметры:
* size_t - дополнительная точность для дробных секунд [0-6)

Возвращает:
* typename Interface::StringType

# ::stappler::Time::toFormat<typename>(char const*) const

## BRIEF

Кодирует в строку по формату strftime

## CONTENT

Доступ: public

Кодирует в строку по формату strftime

Параметры шаблона:
* typename Interface - интерфейс памяти для строки

Параметры:
* char const*

Возвращает:
* typename Interface::StringType

# ::stappler::Time::operator+(stappler::TimeInterval const&) const

## BRIEF

Добавляет интервал ко времени

## CONTENT

Доступ: public

Добавляет интервал ко времени

Параметры:
* stappler::TimeInterval const&

Возвращает:
* stappler::Time const

# ::stappler::Time::operator+=(stappler::TimeInterval const&)

## BRIEF

Добавляет интервал ко времени

## CONTENT

Доступ: public

Добавляет интервал ко времени

Параметры:
* stappler::TimeInterval const&

Возвращает:
* stappler::Time&

# ::stappler::Time::operator-(stappler::Time const&) const

## BRIEF

Вычисляет интервал между двумя показателями времени

## CONTENT

Доступ: public

Вычисляет интервал между двумя показателями времени

Параметры:
* stappler::Time const&

Возвращает:
* stappler::TimeInterval const

# ::stappler::Time::operator-(stappler::TimeInterval const&) const

## BRIEF

Вычитает интервал из времени

## CONTENT

Доступ: public

Вычитает интервал из времени

Параметры:
* stappler::TimeInterval const&

Возвращает:
* stappler::Time const

# ::stappler::Time::operator-=(stappler::TimeInterval const&)

## BRIEF

Вычитает интервал из времени

## CONTENT

Доступ: public

Вычитает интервал из времени

Параметры:
* stappler::TimeInterval const&

Возвращает:
* stappler::Time&

# ::stappler::Time::operator<(stappler::Time const&) const

## BRIEF

Сравнивает два показателя времени

## CONTENT

Доступ: public

Сравнивает два показателя времени

Параметры:
* stappler::Time const&

Возвращает:
* bool

# ::stappler::Time::operator>(stappler::Time const&) const

## BRIEF

Сравнивает два показателя времени

## CONTENT

Доступ: public

Сравнивает два показателя времени

Параметры:
* stappler::Time const&

Возвращает:
* bool

# ::stappler::Time::operator<=(stappler::Time const&) const

## BRIEF

Сравнивает два показателя времени

## CONTENT

Доступ: public

Сравнивает два показателя времени

Параметры:
* stappler::Time const&

Возвращает:
* bool

# ::stappler::Time::operator>=(stappler::Time const&) const

## BRIEF

Сравнивает два показателя времени

## CONTENT

Доступ: public

Сравнивает два показателя времени

Параметры:
* stappler::Time const&

Возвращает:
* bool

# ::stappler::Time::operator==(stappler::Time const&) const

## BRIEF

Сравнивает два показателя времени

## CONTENT

Доступ: public

Сравнивает два показателя времени

Параметры:
* stappler::Time const&

Возвращает:
* bool

# ::stappler::Time::operator!=(stappler::Time const&) const

## BRIEF

Сравнивает два показателя времени

## CONTENT

Доступ: public

Сравнивает два показателя времени

Параметры:
* stappler::Time const&

Возвращает:
* bool

# ::stappler::Time::Time(stappler::nullptr_t)

## BRIEF

Конструирует нулевое время

## CONTENT

Доступ: public

Конструирует нулевое время

Параметры:
* stappler::nullptr_t


# ::stappler::Time::operator=(stappler::nullptr_t)

## BRIEF

Устанавливает нулевое время

## CONTENT

Доступ: public

Устанавливает нулевое время

Параметры:
* stappler::nullptr_t

Возвращает:
* stappler::Time&

# ::stappler::Time::Time()

## BRIEF

Конструирует нулевое время

## CONTENT

Доступ: public

Конструирует нулевое время


# ::stappler::Time::Time(stappler::Time const&)

## BRIEF

Конструктор копирования

## CONTENT

Доступ: public

Конструктор копирования

Параметры:
* stappler::Time const&


# ::stappler::Time::Time(stappler::Time&&)

## BRIEF

Конструктор перемещения

## CONTENT

Доступ: public

Конструктор перемещения

Параметры:
* stappler::Time&&


# ::stappler::Time::operator=(stappler::Time const&)

## BRIEF

Оператор копирования

## CONTENT

Доступ: public

Оператор копирования

Параметры:
* stappler::Time const&

Возвращает:
* stappler::Time&

# ::stappler::Time::operator=(stappler::Time&&)

## BRIEF

Оператор перемещения

## CONTENT

Доступ: public

Оператор перемещения

Параметры:
* stappler::Time&&

Возвращает:
* stappler::Time&

# ::stappler::Time::encodeToFormat(char*,size_t,char const*) const

## BRIEF

Кодирует время в буфер по формату

## CONTENT

Доступ: protected

Кодирует время в буфер по формату

Параметры:
* char* - целевой буфер
* size_t - размер буфера
* char const* - строка формата

Возвращает:
* size_t - число записанных байт

# ::stappler::operator""_sec(unsigned long long)

## BRIEF

Оператор для создания интервала из целых секунд

## CONTENT

Оператор для создания интервала из целых секунд

Параметры:
* unsigned long long

Возвращает:
* stappler::TimeInterval

# ::stappler::operator""_msec(unsigned long long)

## BRIEF

Оператор для создания интервала из миллисекунд

## CONTENT

Оператор для создания интервала из миллисекунд

Параметры:
* unsigned long long

Возвращает:
* stappler::TimeInterval

# ::stappler::operator""_mksec(unsigned long long)

## BRIEF

Оператор для создания интервала из микросекунд

## CONTENT

Оператор для создания интервала из микросекунд

Параметры:
* unsigned long long

Возвращает:
* stappler::TimeInterval
