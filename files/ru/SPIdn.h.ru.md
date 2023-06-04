Title: SPIdn.h


# STAPPLER_IDN_SPIDN_H_

## BRIEF

Макрос защиты заголовка

## CONTENT

Макрос защиты заголовка

# ::stappler::idn::toAscii<typename>(stappler::StringView,bool)

## BRIEF

Конвертирует доменное имя в ASCII

## CONTENT

Конвертирует интернациональное доменное имя в ASCII согласно протоколу IDNA2008. Использует функции платформы, если есть, или libuidna (алгоритм ICU v.9)

Параметры шаблона:
* typename Interface - используемый инетрфейс памяти

Параметры:
* stappler::StringView - доменное имя
* bool - true если необходимо подтвердить, что в строке доменное имя. Если валидация не проходит - возвращает пустую строку. false - не проверять имя.

Возвращает:
* typename Interface::StringType - строка, содержащая ASCII (Punicode) представление доменного мени

# ::stappler::idn::toUnicode<typename>(stappler::StringView,bool)

## BRIEF

Конвертирует доменное имя в юникод (декодирует Punicode)

## CONTENT

Конвертирует доменное имя в юникод (декодирует Punicode) согласно протоколу IDNA2008. Использует функции платформы, если есть, или libuidna (алгоритм ICU v.9)

Параметры шаблона:
* typename Interface - используемый инетрфейс памяти

Параметры:
* stappler::StringView - доменное имя
* bool - true если необходимо подтвердить, что в строке доменное имя. Если валидация не проходит - возвращает пустую строку. false - не проверять имя.

Возвращает:
* typename Interface::StringType - строка с декодированным доменным именем