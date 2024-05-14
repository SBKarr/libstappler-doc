Title: XLInput.h


# XENOLITH_SCENE_INPUT_XLINPUT_H_

## BRIEF

Заголовок данных событий ввода для сцены

## CONTENT

Заголовок данных событий ввода для сцены


# ::stappler::xenolith::InputFlags

## BRIEF

Флаги ввода

## CONTENT

Флаги ввода


# ::stappler::xenolith::InputMouseButton

## BRIEF

Тип кнопки манипулятора

## CONTENT

Тип кнопки манипулятора


# ::stappler::xenolith::InputModifier

## BRIEF

Модификаторы ввода

## CONTENT

Модификаторы ввода


# ::stappler::xenolith::InputKeyCode

## BRIEF

Коды клавиш клавиатуры

## CONTENT

Коды клавиш клавиатуры


# ::stappler::xenolith::InputKeyComposeState

## BRIEF

Флаги композиции символов

## CONTENT

Флаги композиции символов


# ::stappler::xenolith::InputEventName

## BRIEF

Имя события ввода

## CONTENT

Имя события ввода


# ::stappler::xenolith::InputEventData

## BRIEF

Данные соыбтия ввода

## CONTENT

Данные соыбтия ввода


# ::stappler::xenolith::TextInputType

## BRIEF

Тип текстового ввода

## CONTENT

Тип текстового ввода


# ::stappler::xenolith::TextCursor

## BRIEF

Текстовый курсор

## CONTENT

Текстовый курсор


# ::stappler::xenolith::TextCursorPosition

## BRIEF

Позиция в текстовом курсоре

## CONTENT

Позиция в текстовом курсоре


# ::stappler::xenolith::TextCursorLength

## BRIEF

Длина текстового курсора

## CONTENT

Длина текстового курсора


# ::stappler::xenolith::InputEventState

## BRIEF

Состояние разспознавания события

## CONTENT

Состояние разспознавания события

Значения:
* Declined - не распознано, не продолжать получение
* Processed - распознано, продолжать получение
* Captured - распознано и захвачено, продолжать получение и передовать единственному получателю, отменить для других.


# ::stappler::xenolith::InputEvent

## BRIEF

Данные события ввода

## CONTENT

Данные события ввода

# ::stappler::xenolith::InputEvent::data

## BRIEF

Исходные данные события

## CONTENT

Исходные данные события

Тип: stappler::xenolith::InputEventData


# ::stappler::xenolith::InputEvent::originalLocation

## BRIEF

Начальная позиция

## CONTENT

Начальная позиция

Тип: stappler::geom::Vec2


# ::stappler::xenolith::InputEvent::currentLocation

## BRIEF

Текущая позиция

## CONTENT

Текущая позиция

Тип: stappler::geom::Vec2


# ::stappler::xenolith::InputEvent::previousLocation

## BRIEF

Предыдущая позиция

## CONTENT

Предыдущая позиция

Тип: stappler::geom::Vec2


# ::stappler::xenolith::InputEvent::originalTime

## BRIEF

Начальное время получения

## CONTENT

Начальное время получения

Тип: uint64_t


# ::stappler::xenolith::InputEvent::currentTime

## BRIEF

Время текущего события

## CONTENT

Время текущего события

Тип: uint64_t


# ::stappler::xenolith::InputEvent::previousTime

## BRIEF

Время предыдущего события

## CONTENT

Время предыдущего события

Тип: uint64_t


# ::stappler::xenolith::InputEvent::originalModifiers

## BRIEF

Начальные модификаторы события

## CONTENT

Начальные модификаторы события

Тип: stappler::xenolith::InputModifier


# ::stappler::xenolith::InputEvent::previousModifiers

## BRIEF

Предыдущие модификаторы события

## CONTENT

Предыдущие модификаторы события

Тип: stappler::xenolith::InputModifier


# ::stappler::xenolith::TextInputViewInterface

## BRIEF

Интерфейс для получения текстового ввода от системы

## CONTENT

Интерфейс для получения текстового ввода от системы


# ::stappler::xenolith::TextInputViewInterface::~TextInputViewInterface()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор


# ::stappler::xenolith::TextInputViewInterface::updateTextCursor(uint32_t,uint32_t)

## BRIEF

Обновляет текстовый курсор

## CONTENT

Доступ: public

Обновляет текстовый курсор

Параметры:
* uint32_t
* uint32_t


# ::stappler::xenolith::TextInputViewInterface::updateTextInput(stappler::WideStringView,uint32_t,uint32_t,stappler::xenolith::TextInputType)

## BRIEF

Обновляет текстовый ввод

## CONTENT

Доступ: public

Обновляет текстовый ввод

Параметры:
* stappler::WideStringView
* uint32_t
* uint32_t
* stappler::xenolith::TextInputType


# ::stappler::xenolith::TextInputViewInterface::runTextInput(stappler::WideStringView,uint32_t,uint32_t,stappler::xenolith::TextInputType)

## BRIEF

Запускает текстовый ввод

## CONTENT

Доступ: public

Запускает текстовый ввод с параметрами

Параметры:
* stappler::WideStringView - базовая строка
* uint32_t - начальный курсор
* uint32_t - длина курсора
* stappler::xenolith::TextInputType


# ::stappler::xenolith::TextInputViewInterface::cancelTextInput()

## BRIEF

Завершает текстовый ввод

## CONTENT

Доступ: public

Завершает текстовый ввод

# ::stappler::xenolith::core::TextCursor::InvalidCursor

## BRIEF

Неверный курсор

## CONTENT

Неверный курсор

Тип: stappler::xenolith::TextCursor const


# ::std::hash<::stappler::xenolith::InputEventData>::hash<::stappler::xenolith::InputEventData>

## BRIEF

Параметры хеширования для данных соыбтия

## CONTENT

Параметры хеширования для данных соыбтия


# ::std::hash<::stappler::xenolith::InputEventData>::operator()(::stappler::xenolith::InputEventData const&) const

## BRIEF

Параметры хеширования для данных соыбтия

## CONTENT

Параметры хеширования для данных соыбтия

Параметры:
* ::stappler::xenolith::InputEventData const&

Возвращает:
* std::size_t