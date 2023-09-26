Title: SPDataTraits.h


# STAPPLER_DATA_SPDATATRAITS_H_

## BRIEF

Заголовок, определяющий черты кодировщика

## CONTENT

Заголовок, определяющий черты кодировщика


# ::stappler::data::StreamTraits<typename>

## BRIEF

Класс доступных черт потокового кодировщика

## CONTENT

Параметры шаблона:
* typename T - потоковый кодировщик


# ::stappler::data::StreamTraits<typename>::success

## BRIEF

Тип, сигналиирующий об успешной проверке

## CONTENT

Тип, сигналиирующий об успешной проверке

# ::stappler::data::StreamTraits<typename>::failure

## BRIEF

Тип, сигнализирующий о провале проверки

## CONTENT

Тип, сигнализирующий о провале проверки


# ::stappler::data::StreamTraits<typename>::CallTest_onNextValue<typename>(typeof (& C::onNextValue))

## BRIEF

Успешная предустановка проверки (сгенерировано автоматически)

## CONTENT

Доступ: private

Успешная предустановка проверки (сгенерировано автоматически)

Параметры шаблона:
* typename C

Параметры:
* typeof (& C::onNextValue)

Возвращает:
* success

# ::stappler::data::StreamTraits<typename>::CallTest_onNextValue<typename>()

## BRIEF

Неуспешная предустановка проверки (сгенерировано автоматически)

## CONTENT

Доступ: private

Неуспешная предустановка проверки (сгенерировано автоматически)

Параметры шаблона:
* typename C

Возвращает:
* failure

# ::stappler::data::StreamTraits<typename>::onNextValue

## BRIEF

Определяет, доступна ли в кодировщие функция onNextValue

## CONTENT

Доступ: public

Определяет, доступна ли в кодировщие функция onNextValue

Тип: bool const


# ::stappler::data::StreamTraits<typename>::CallTest_onKey<typename>(typeof (& C::onKey))

## BRIEF

Успешная предустановка проверки (сгенерировано автоматически)

## CONTENT

Успешная предустановка проверки (сгенерировано автоматически)

Доступ: private

Параметры шаблона:
* typename C

Параметры:
* typeof (& C::onKey)

Возвращает:
* success

# ::stappler::data::StreamTraits<typename>::CallTest_onKey<typename>()

## BRIEF

Неуспешная предустановка проверки (сгенерировано автоматически)

## CONTENT

Доступ: private

Неуспешная предустановка проверки (сгенерировано автоматически)

Параметры шаблона:
* typename C

Возвращает:
* failure

# ::stappler::data::StreamTraits<typename>::onKey

## BRIEF

Определяет, доступна ли в кодировщие функция onKey

## CONTENT

Доступ: public

Определяет, доступна ли в кодировщие функция onKey

Тип: bool const


# ::stappler::data::StreamTraits<typename>::CallTest_onBeginArray<typename>(typeof (& C::onBeginArray))

## BRIEF

Успешная предустановка проверки (сгенерировано автоматически)

## CONTENT

Доступ: private

Успешная предустановка проверки (сгенерировано автоматически)

Параметры шаблона:
* typename C

Параметры:
* typeof (& C::onBeginArray)

Возвращает:
* success

# ::stappler::data::StreamTraits<typename>::CallTest_onBeginArray<typename>()

## BRIEF

Неуспешная предустановка проверки (сгенерировано автоматически)

## CONTENT

Доступ: private

Неуспешная предустановка проверки (сгенерировано автоматически)

Параметры шаблона:
* typename C

Возвращает:
* failure

# ::stappler::data::StreamTraits<typename>::onBeginArray

## BRIEF

Определяет, доступна ли в кодировщие функция onBeginArray

## CONTENT

Доступ: public

Определяет, доступна ли в кодировщие функция onBeginArray

Тип: bool const


# ::stappler::data::StreamTraits<typename>::CallTest_onEndArray<typename>(typeof (& C::onEndArray))

## BRIEF

Успешная предустановка проверки (сгенерировано автоматически)

## CONTENT

Доступ: private

Успешная предустановка проверки (сгенерировано автоматически)

Параметры шаблона:
* typename C

Параметры:
* typeof (& C::onEndArray)

Возвращает:
* success

# ::stappler::data::StreamTraits<typename>::CallTest_onEndArray<typename>()

## BRIEF

Неуспешная предустановка проверки (сгенерировано автоматически)

## CONTENT

Доступ: private

Неуспешная предустановка проверки (сгенерировано автоматически)

Параметры шаблона:
* typename C

Возвращает:
* failure

# ::stappler::data::StreamTraits<typename>::onEndArray

## BRIEF

Определяет, доступна ли в кодировщие функция onEndArray

## CONTENT

Доступ: public

Определяет, доступна ли в кодировщие функция onEndArray

Тип: bool const


# ::stappler::data::StreamTraits<typename>::CallTest_onBeginDict<typename>(typeof (& C::onBeginDict))

## BRIEF

Успешная предустановка проверки (сгенерировано автоматически)

## CONTENT

Доступ: private

Успешная предустановка проверки (сгенерировано автоматически)

Параметры шаблона:
* typename C

Параметры:
* typeof (& C::onBeginDict)

Возвращает:
* success

# ::stappler::data::StreamTraits<typename>::CallTest_onBeginDict<typename>()

## BRIEF

Неуспешная предустановка проверки (сгенерировано автоматически)

## CONTENT

Доступ: private

Неуспешная предустановка проверки (сгенерировано автоматически)

Параметры шаблона:
* typename C

Возвращает:
* failure

# ::stappler::data::StreamTraits<typename>::onBeginDict

## BRIEF

Определяет, доступна ли в кодировщие функция onBeginDict

## CONTENT

Доступ: public

Определяет, доступна ли в кодировщие функция onBeginDict

Тип: bool const


# ::stappler::data::StreamTraits<typename>::CallTest_onEndDict<typename>(typeof (& C::onEndDict))

## BRIEF

Успешная предустановка проверки (сгенерировано автоматически)

## CONTENT

Доступ: private

Успешная предустановка проверки (сгенерировано автоматически)

Параметры шаблона:
* typename C

Параметры:
* typeof (& C::onEndDict)

Возвращает:
* success

# ::stappler::data::StreamTraits<typename>::CallTest_onEndDict<typename>()

## BRIEF

Неуспешная предустановка проверки (сгенерировано автоматически)

## CONTENT

Доступ: private

Неуспешная предустановка проверки (сгенерировано автоматически)

Параметры шаблона:
* typename C

Возвращает:
* failure

# ::stappler::data::StreamTraits<typename>::onEndDict

## BRIEF

Определяет, доступна ли в кодировщие функция onEndDict

## CONTENT

Доступ: public

Определяет, доступна ли в кодировщие функция onEndDict

Тип: bool const


# ::stappler::data::StreamTraits<typename>::CallTest_onKeyValuePair<typename>(typeof (& C::onKeyValuePair))

## BRIEF

Успешная предустановка проверки (сгенерировано автоматически)

## CONTENT

Доступ: private

Успешная предустановка проверки (сгенерировано автоматически)

Параметры шаблона:
* typename C

Параметры:
* typeof (& C::onKeyValuePair)

Возвращает:
* success

# ::stappler::data::StreamTraits<typename>::CallTest_onKeyValuePair<typename>()

## BRIEF

Неуспешная предустановка проверки (сгенерировано автоматически)

## CONTENT

Доступ: private

Неуспешная предустановка проверки (сгенерировано автоматически)

Параметры шаблона:
* typename C

Возвращает:
* failure

# ::stappler::data::StreamTraits<typename>::onKeyValuePair

## BRIEF

Определяет, доступна ли в кодировщие функция onKeyValuePair

## CONTENT

Доступ: public

Определяет, доступна ли в кодировщие функция onKeyValuePair

Тип: bool const


# ::stappler::data::StreamTraits<typename>::CallTest_onValue<typename>(typeof (& C::onValue))

## BRIEF

Успешная предустановка проверки (сгенерировано автоматически)

## CONTENT

Доступ: private

Успешная предустановка проверки (сгенерировано автоматически)

Параметры шаблона:
* typename C

Параметры:
* typeof (& C::onValue)

Возвращает:
* success

# ::stappler::data::StreamTraits<typename>::CallTest_onValue<typename>()

## BRIEF

Неуспешная предустановка проверки (сгенерировано автоматически)

## CONTENT

Доступ: private

Неуспешная предустановка проверки (сгенерировано автоматически)

Параметры шаблона:
* typename C

Возвращает:
* failure

# ::stappler::data::StreamTraits<typename>::onValue

## BRIEF

Определяет, доступна ли в кодировщие функция onValue

## CONTENT

Доступ: public

Определяет, доступна ли в кодировщие функция onValue

Тип: bool const


# ::stappler::data::StreamTraits<typename>::CallTest_onArrayValue<typename>(typeof (& C::onArrayValue))

## BRIEF

Успешная предустановка проверки (сгенерировано автоматически)

## CONTENT

Доступ: private

Успешная предустановка проверки (сгенерировано автоматически)

Параметры шаблона:
* typename C

Параметры:
* typeof (& C::onArrayValue)

Возвращает:
* success

# ::stappler::data::StreamTraits<typename>::CallTest_onArrayValue<typename>()

## BRIEF

Неуспешная предустановка проверки (сгенерировано автоматически)

## CONTENT

Доступ: private

Неуспешная предустановка проверки (сгенерировано автоматически)

Параметры шаблона:
* typename C

Возвращает:
* failure

# ::stappler::data::StreamTraits<typename>::onArrayValue

## BRIEF

Определяет, доступна ли в кодировщие функция onArrayValue

## CONTENT

Доступ: public

Определяет, доступна ли в кодировщие функция onArrayValue

Тип: bool const
