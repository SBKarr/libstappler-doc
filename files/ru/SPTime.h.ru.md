Title: SPTime.h


# LIBSTAPPLER_COMMON_UTILS_SPTIME_H_

## BRIEF

## CONTENT


# SP_COMPILE_TIME

## BRIEF

## CONTENT


# ::stappler::sp_time_exp_t

## BRIEF

## CONTENT


# ::stappler::sp_time_exp_t::tm_gmt_e

## BRIEF

## CONTENT

Значения:
* gmt_unset
* gmt_local
* gmt_set


# ::stappler::sp_time_exp_t::tm_usec

## BRIEF

## CONTENT

Тип: int32_t


# ::stappler::sp_time_exp_t::tm_sec

## BRIEF

## CONTENT

Тип: int32_t


# ::stappler::sp_time_exp_t::tm_min

## BRIEF

## CONTENT

Тип: int32_t


# ::stappler::sp_time_exp_t::tm_hour

## BRIEF

## CONTENT

Тип: int32_t


# ::stappler::sp_time_exp_t::tm_mday

## BRIEF

## CONTENT

Тип: int32_t


# ::stappler::sp_time_exp_t::tm_mon

## BRIEF

## CONTENT

Тип: int32_t


# ::stappler::sp_time_exp_t::tm_year

## BRIEF

## CONTENT

Тип: int32_t


# ::stappler::sp_time_exp_t::tm_wday

## BRIEF

## CONTENT

Тип: int32_t


# ::stappler::sp_time_exp_t::tm_yday

## BRIEF

## CONTENT

Тип: int32_t


# ::stappler::sp_time_exp_t::tm_isdst

## BRIEF

## CONTENT

Тип: int32_t


# ::stappler::sp_time_exp_t::tm_gmtoff

## BRIEF

## CONTENT

Тип: int32_t


# ::stappler::sp_time_exp_t::tm_gmt_type

## BRIEF

## CONTENT

Тип: stappler::sp_time_exp_t::tm_gmt_e


# ::stappler::sp_time_exp_t::sp_time_exp_t()

## BRIEF

## CONTENT


# ::stappler::sp_time_exp_t::sp_time_exp_t(int64_t,int32_t,bool)

## BRIEF

## CONTENT

Параметры:
* int64_t
* int32_t
* bool


# ::stappler::sp_time_exp_t::sp_time_exp_t(int64_t,int32_t)

## BRIEF

## CONTENT

Параметры:
* int64_t
* int32_t


# ::stappler::sp_time_exp_t::sp_time_exp_t(int64_t)

## BRIEF

## CONTENT

Параметры:
* int64_t


# ::stappler::sp_time_exp_t::sp_time_exp_t(int64_t,bool)

## BRIEF

## CONTENT

Параметры:
* int64_t
* bool


# ::stappler::sp_time_exp_t::sp_time_exp_t(stappler::Time,int32_t,bool)

## BRIEF

## CONTENT

Параметры:
* stappler::Time
* int32_t
* bool


# ::stappler::sp_time_exp_t::sp_time_exp_t(stappler::Time,int32_t)

## BRIEF

## CONTENT

Параметры:
* stappler::Time
* int32_t


# ::stappler::sp_time_exp_t::sp_time_exp_t(stappler::Time)

## BRIEF

## CONTENT

Параметры:
* stappler::Time


# ::stappler::sp_time_exp_t::sp_time_exp_t(stappler::Time,bool)

## BRIEF

## CONTENT

Параметры:
* stappler::Time
* bool


# ::stappler::sp_time_exp_t::read(stappler::StringView)

## BRIEF

## CONTENT

Параметры:
* stappler::StringView

Возвращает:
* bool

# ::stappler::sp_time_exp_t::get() const

## BRIEF

## CONTENT

Возвращает:
* stappler::Time

# ::stappler::sp_time_exp_t::gmt_get() const

## BRIEF

## CONTENT

Возвращает:
* stappler::Time

# ::stappler::sp_time_exp_t::ltz_get() const

## BRIEF

## CONTENT

Возвращает:
* stappler::Time

# ::stappler::sp_time_exp_t::geti() const

## BRIEF

## CONTENT

Возвращает:
* int64_t

# ::stappler::sp_time_exp_t::gmt_geti() const

## BRIEF

## CONTENT

Возвращает:
* int64_t

# ::stappler::sp_time_exp_t::ltz_geti() const

## BRIEF

## CONTENT

Возвращает:
* int64_t

# ::stappler::sp_time_exp_t::encodeRfc822(char*) const

## BRIEF

## CONTENT

Параметры:
* char*


# ::stappler::sp_time_exp_t::encodeCTime(char*) const

## BRIEF

## CONTENT

Параметры:
* char*


# ::stappler::sp_time_exp_t::encodeIso8601(char*,size_t) const

## BRIEF

## CONTENT

Параметры:
* char*
* size_t


# ::stappler::TimeStorage

## BRIEF

## CONTENT


# ::stappler::TimeStorage::toMicroseconds() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint64_t

# ::stappler::TimeStorage::toMilliseconds() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint64_t

# ::stappler::TimeStorage::toSeconds() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint64_t

# ::stappler::TimeStorage::toFloatSeconds() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* float

# ::stappler::TimeStorage::toMicros() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint64_t

# ::stappler::TimeStorage::toMillis() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint64_t

# ::stappler::TimeStorage::mksec() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint64_t

# ::stappler::TimeStorage::msec() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint64_t

# ::stappler::TimeStorage::sec() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint64_t

# ::stappler::TimeStorage::fsec() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* float

# ::stappler::TimeStorage::asLocal() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* tm

# ::stappler::TimeStorage::asGmt() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* tm

# ::stappler::TimeStorage::setMicros(uint64_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint64_t


# ::stappler::TimeStorage::setMillis(uint64_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint64_t


# ::stappler::TimeStorage::setMicroseconds(uint64_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint64_t


# ::stappler::TimeStorage::setMilliseconds(uint64_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint64_t


# ::stappler::TimeStorage::setSeconds(time_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* time_t


# ::stappler::TimeStorage::clear()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::TimeStorage::operator bool() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::TimeStorage::TimeStorage()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::TimeStorage::TimeStorage(stappler::TimeStorage const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::TimeStorage const&


# ::stappler::TimeStorage::TimeStorage(stappler::TimeStorage&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::TimeStorage&&


# ::stappler::TimeStorage::operator=(stappler::TimeStorage const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::TimeStorage const&

Возвращает:
* stappler::TimeStorage&

# ::stappler::TimeStorage::operator=(stappler::TimeStorage&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::TimeStorage&&

Возвращает:
* stappler::TimeStorage&

# ::stappler::TimeStorage::TimeStorage(uint64_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint64_t


# ::stappler::TimeStorage::_value

## BRIEF

## CONTENT

Доступ: protected

Тип: uint64_t


# ::stappler::TimeInterval

## BRIEF

## CONTENT

Базовые классы:
* TimeStorage


# ::stappler::TimeInterval::between(stappler::Time const&,stappler::Time const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::Time const&
* stappler::Time const&

Возвращает:
* stappler::TimeInterval

# ::stappler::TimeInterval::microseconds(uint64_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint64_t

Возвращает:
* stappler::TimeInterval

# ::stappler::TimeInterval::milliseconds(uint64_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint64_t

Возвращает:
* stappler::TimeInterval

# ::stappler::TimeInterval::seconds(time_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* time_t

Возвращает:
* stappler::TimeInterval

# ::stappler::TimeInterval::floatSeconds(float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float

Возвращает:
* stappler::TimeInterval

# ::stappler::TimeInterval::operator+(stappler::Time const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::Time const&

Возвращает:
* stappler::Time const

# ::stappler::TimeInterval::operator+(stappler::TimeInterval const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::TimeInterval const&

Возвращает:
* stappler::TimeInterval const

# ::stappler::TimeInterval::operator+=(stappler::TimeInterval const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::TimeInterval const&

Возвращает:
* stappler::TimeInterval&

# ::stappler::TimeInterval::operator-(stappler::TimeInterval const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::TimeInterval const&

Возвращает:
* stappler::TimeInterval const

# ::stappler::TimeInterval::operator-=(stappler::TimeInterval const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::TimeInterval const&

Возвращает:
* stappler::TimeInterval&

# ::stappler::TimeInterval::operator*(float) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float

Возвращает:
* stappler::TimeInterval const

# ::stappler::TimeInterval::operator*=(float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float

Возвращает:
* stappler::TimeInterval&

# ::stappler::TimeInterval::operator/(float) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float

Возвращает:
* stappler::TimeInterval const

# ::stappler::TimeInterval::operator/=(float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float

Возвращает:
* stappler::TimeInterval&

# ::stappler::TimeInterval::operator<(stappler::TimeInterval const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::TimeInterval const&

Возвращает:
* bool

# ::stappler::TimeInterval::operator>(stappler::TimeInterval const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::TimeInterval const&

Возвращает:
* bool

# ::stappler::TimeInterval::operator<=(stappler::TimeInterval const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::TimeInterval const&

Возвращает:
* bool

# ::stappler::TimeInterval::operator>=(stappler::TimeInterval const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::TimeInterval const&

Возвращает:
* bool

# ::stappler::TimeInterval::operator==(stappler::TimeInterval const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::TimeInterval const&

Возвращает:
* bool

# ::stappler::TimeInterval::operator!=(stappler::TimeInterval const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::TimeInterval const&

Возвращает:
* bool

# ::stappler::TimeInterval::TimeInterval(stappler::nullptr_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::nullptr_t


# ::stappler::TimeInterval::operator=(stappler::nullptr_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::nullptr_t

Возвращает:
* stappler::TimeInterval&

# ::stappler::TimeInterval::TimeInterval()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::TimeInterval::TimeInterval(stappler::TimeInterval const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::TimeInterval const&


# ::stappler::TimeInterval::TimeInterval(stappler::TimeInterval&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::TimeInterval&&


# ::stappler::TimeInterval::operator=(stappler::TimeInterval const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::TimeInterval const&

Возвращает:
* stappler::TimeInterval&

# ::stappler::TimeInterval::operator=(stappler::TimeInterval&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::TimeInterval&&

Возвращает:
* stappler::TimeInterval&

# ::stappler::Time

## BRIEF

## CONTENT

Базовые классы:
* TimeStorage


# ::stappler::Time::now()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::Time

# ::stappler::Time::fromCompileTime(char const*,char const*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* char const*
* char const*

Возвращает:
* stappler::Time

# ::stappler::Time::fromHttp(stappler::StringView)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView

Возвращает:
* stappler::Time

# ::stappler::Time::microseconds(uint64_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint64_t

Возвращает:
* stappler::Time

# ::stappler::Time::milliseconds(uint64_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint64_t

Возвращает:
* stappler::Time

# ::stappler::Time::seconds(time_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* time_t

Возвращает:
* stappler::Time

# ::stappler::Time::floatSeconds(float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float

Возвращает:
* stappler::Time

# ::stappler::Time::toHttp<typename>() const

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename Interface

Возвращает:
* typename Interface::StringType

# ::stappler::Time::toAtomXml<typename>() const

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename Interface

Возвращает:
* typename Interface::StringType

# ::stappler::Time::toRfc822<typename>() const

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename Interface

Возвращает:
* typename Interface::StringType

# ::stappler::Time::toCTime<typename>() const

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename Interface

Возвращает:
* typename Interface::StringType

# ::stappler::Time::toIso8601<typename>(size_t) const

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename Interface

Параметры:
* size_t

Возвращает:
* typename Interface::StringType

# ::stappler::Time::toFormat<typename>(char const*) const

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename Interface

Параметры:
* char const*

Возвращает:
* typename Interface::StringType

# ::stappler::Time::operator+(stappler::TimeInterval const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::TimeInterval const&

Возвращает:
* stappler::Time const

# ::stappler::Time::operator+=(stappler::TimeInterval const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::TimeInterval const&

Возвращает:
* stappler::Time&

# ::stappler::Time::operator-(stappler::Time const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::Time const&

Возвращает:
* stappler::TimeInterval const

# ::stappler::Time::operator-(stappler::TimeInterval const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::TimeInterval const&

Возвращает:
* stappler::Time const

# ::stappler::Time::operator-=(stappler::TimeInterval const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::TimeInterval const&

Возвращает:
* stappler::Time&

# ::stappler::Time::operator<(stappler::Time const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::Time const&

Возвращает:
* bool

# ::stappler::Time::operator>(stappler::Time const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::Time const&

Возвращает:
* bool

# ::stappler::Time::operator<=(stappler::Time const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::Time const&

Возвращает:
* bool

# ::stappler::Time::operator>=(stappler::Time const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::Time const&

Возвращает:
* bool

# ::stappler::Time::operator==(stappler::Time const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::Time const&

Возвращает:
* bool

# ::stappler::Time::operator!=(stappler::Time const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::Time const&

Возвращает:
* bool

# ::stappler::Time::Time(stappler::nullptr_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::nullptr_t


# ::stappler::Time::operator=(stappler::nullptr_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::nullptr_t

Возвращает:
* stappler::Time&

# ::stappler::Time::Time()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::Time::Time(stappler::Time const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::Time const&


# ::stappler::Time::Time(stappler::Time&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::Time&&


# ::stappler::Time::operator=(stappler::Time const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::Time const&

Возвращает:
* stappler::Time&

# ::stappler::Time::operator=(stappler::Time&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::Time&&

Возвращает:
* stappler::Time&

# ::stappler::Time::encodeToFormat(char*,size_t,char const*) const

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* char*
* size_t
* char const*

Возвращает:
* size_t

# ::stappler::operator""_sec(unsigned long long)

## BRIEF

## CONTENT

Параметры:
* unsigned long long

Возвращает:
* stappler::TimeInterval

# ::stappler::operator""_msec(unsigned long long)

## BRIEF

## CONTENT

Параметры:
* unsigned long long

Возвращает:
* stappler::TimeInterval

# ::stappler::operator""_mksec(unsigned long long)

## BRIEF

## CONTENT

Параметры:
* unsigned long long

Возвращает:
* stappler::TimeInterval

# ::stappler::TimeInterval::operator+(stappler::Time const&) const

## BRIEF

## CONTENT

Параметры:
* stappler::Time const&

Возвращает:
* stappler::Time const

# ::stappler::TimeInterval::operator+(stappler::TimeInterval const&) const

## BRIEF

## CONTENT

Параметры:
* stappler::TimeInterval const&

Возвращает:
* stappler::TimeInterval const

# ::stappler::TimeInterval::operator+=(stappler::TimeInterval const&)

## BRIEF

## CONTENT

Параметры:
* stappler::TimeInterval const&

Возвращает:
* stappler::TimeInterval&

# ::stappler::TimeInterval::operator-(stappler::TimeInterval const&) const

## BRIEF

## CONTENT

Параметры:
* stappler::TimeInterval const&

Возвращает:
* stappler::TimeInterval const

# ::stappler::TimeInterval::operator-=(stappler::TimeInterval const&)

## BRIEF

## CONTENT

Параметры:
* stappler::TimeInterval const&

Возвращает:
* stappler::TimeInterval&

# ::stappler::TimeInterval::operator*(float) const

## BRIEF

## CONTENT

Параметры:
* float

Возвращает:
* stappler::TimeInterval const

# ::stappler::TimeInterval::operator*=(float)

## BRIEF

## CONTENT

Параметры:
* float

Возвращает:
* stappler::TimeInterval&

# ::stappler::TimeInterval::operator/(float) const

## BRIEF

## CONTENT

Параметры:
* float

Возвращает:
* stappler::TimeInterval const

# ::stappler::TimeInterval::operator/=(float)

## BRIEF

## CONTENT

Параметры:
* float

Возвращает:
* stappler::TimeInterval&

# ::stappler::TimeInterval::operator<(stappler::TimeInterval const&) const

## BRIEF

## CONTENT

Параметры:
* stappler::TimeInterval const&

Возвращает:
* bool

# ::stappler::TimeInterval::operator>(stappler::TimeInterval const&) const

## BRIEF

## CONTENT

Параметры:
* stappler::TimeInterval const&

Возвращает:
* bool

# ::stappler::TimeInterval::operator<=(stappler::TimeInterval const&) const

## BRIEF

## CONTENT

Параметры:
* stappler::TimeInterval const&

Возвращает:
* bool

# ::stappler::TimeInterval::operator>=(stappler::TimeInterval const&) const

## BRIEF

## CONTENT

Параметры:
* stappler::TimeInterval const&

Возвращает:
* bool

# ::stappler::TimeInterval::operator==(stappler::TimeInterval const&) const

## BRIEF

## CONTENT

Параметры:
* stappler::TimeInterval const&

Возвращает:
* bool

# ::stappler::TimeInterval::operator!=(stappler::TimeInterval const&) const

## BRIEF

## CONTENT

Параметры:
* stappler::TimeInterval const&

Возвращает:
* bool

# ::stappler::Time::operator+(stappler::TimeInterval const&) const

## BRIEF

## CONTENT

Параметры:
* stappler::TimeInterval const&

Возвращает:
* stappler::Time const

# ::stappler::Time::operator+=(stappler::TimeInterval const&)

## BRIEF

## CONTENT

Параметры:
* stappler::TimeInterval const&

Возвращает:
* stappler::Time&

# ::stappler::Time::operator-(stappler::Time const&) const

## BRIEF

## CONTENT

Параметры:
* stappler::Time const&

Возвращает:
* stappler::TimeInterval const

# ::stappler::Time::operator-(stappler::TimeInterval const&) const

## BRIEF

## CONTENT

Параметры:
* stappler::TimeInterval const&

Возвращает:
* stappler::Time const

# ::stappler::Time::operator-=(stappler::TimeInterval const&)

## BRIEF

## CONTENT

Параметры:
* stappler::TimeInterval const&

Возвращает:
* stappler::Time&

# ::stappler::Time::operator<(stappler::Time const&) const

## BRIEF

## CONTENT

Параметры:
* stappler::Time const&

Возвращает:
* bool

# ::stappler::Time::operator>(stappler::Time const&) const

## BRIEF

## CONTENT

Параметры:
* stappler::Time const&

Возвращает:
* bool

# ::stappler::Time::operator<=(stappler::Time const&) const

## BRIEF

## CONTENT

Параметры:
* stappler::Time const&

Возвращает:
* bool

# ::stappler::Time::operator>=(stappler::Time const&) const

## BRIEF

## CONTENT

Параметры:
* stappler::Time const&

Возвращает:
* bool

# ::stappler::Time::operator==(stappler::Time const&) const

## BRIEF

## CONTENT

Параметры:
* stappler::Time const&

Возвращает:
* bool

# ::stappler::Time::operator!=(stappler::Time const&) const

## BRIEF

## CONTENT

Параметры:
* stappler::Time const&

Возвращает:
* bool