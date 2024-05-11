Title: XLCorePlatform.h


# XENOLITH_CORE_XLCOREPLATFORM_H_

## BRIEF

Заголовок основных функций платформ

## CONTENT

Заголовок основных функций платформ

# ::stappler::xenolith::platform::name()

## BRIEF

Возвращает название платформы

## CONTENT

Возвращает название платформы

Возвращает:
* char const*

# ::stappler::xenolith::platform::version()

## BRIEF

Возвращает версию платформы

## CONTENT

Возвращает версию платформы

Возвращает:
* uint32_t

# ::stappler::xenolith::platform::clock(core::ClockType)

## BRIEF

Возвращает отметку времени указанного типа

## CONTENT

Возвращает отметку времени указанного типа

Параметры:
* core::ClockType

Возвращает:
* uint64_t

# ::stappler::xenolith::platform::sleep(uint64_t)

## BRIEF

Приостанавливает текущий поток на заданное число микросекунд

## CONTENT

Приостанавливает текущий поток на заданное число микросекунд

Параметры:
* uint64_t
