Title: XLGestureRecognizer.h


# XENOLITH_SCENE_INPUT_XLGESTURERECOGNIZER_H_

## BRIEF

Заголовок распознавателей жестов

## CONTENT

Заголовок распознавателей жестов


# ::stappler::xenolith::TapDistanceAllowed

## BRIEF

Максимальное расстояние для поддержания нажатия

## CONTENT

Максимальное расстояние для поддержания нажатия

Тип: float const


# ::stappler::xenolith::TapDistanceAllowedMulti

## BRIEF

Максимальное расстояние для поддержания множественного нажатия

## CONTENT

Максимальное расстояние для поддержания множественного нажатия

Тип: float const


# ::stappler::xenolith::TapIntervalAllowed

## BRIEF

Допустимый интервал между множественными нажатиями

## CONTENT

Допустимый интервал между множественными нажатиями

Тип: stappler::TimeInterval const


# ::stappler::xenolith::GestureEvent

## BRIEF

Тип события распознавателя жестов

## CONTENT

Тип события распознавателя жестов

Значения:
* Began - начало события
* Activated - активация
* Moved - перемещение
* OnLongPress - долгое нажатие
* Repeat - повтор события
* Ended - конец события
* Cancelled - отмена события с ошибкой


# ::stappler::xenolith::GestureData

## BRIEF

Данные жеста

## CONTENT

Данные жеста


# ::stappler::xenolith::GestureData::event

## BRIEF

Событие

## CONTENT

Событие

Тип: stappler::xenolith::GestureEvent


# ::stappler::xenolith::GestureData::input

## BRIEF

Базовое событие ввода

## CONTENT

Базовое событие ввода

Тип: stappler::xenolith::InputEvent const*


# ::stappler::xenolith::GestureData::location() const

## BRIEF

Возвращает глобальную позицию события

## CONTENT

Возвращает глобальную позицию события

Возвращает:
* stappler::geom::Vec2

# ::stappler::xenolith::GestureData::getId() const

## BRIEF

Возвращает идентификатор события

## CONTENT

Возвращает идентификатор события

Возвращает:
* uint32_t

# ::stappler::xenolith::GestureScroll

## BRIEF

Данные жеста прокрутки

## CONTENT

Данные жеста прокрутки

Базовые классы:
* GestureData


# ::stappler::xenolith::GestureScroll::pos

## BRIEF

Исходная позиция

## CONTENT

Исходная позиция

Тип: stappler::geom::Vec2


# ::stappler::xenolith::GestureScroll::amount

## BRIEF

Размер прокрутки

## CONTENT

Размер прокрутки

Тип: stappler::geom::Vec2


# ::stappler::xenolith::GestureScroll::location() const

## BRIEF

Возвращает базовую позицию

## CONTENT

Возвращает базовую позицию

Возвращает:
* const stappler::geom::Vec2&

# ::stappler::xenolith::GestureScroll::cleanup()

## BRIEF

Очищает данные жеста

## CONTENT

Очищает данные жеста


# ::stappler::xenolith::GestureTap

## BRIEF

Жесто одиночного нажатия

## CONTENT

Жесто одиночного нажатия

Базовые классы:
* GestureData


# ::stappler::xenolith::GestureTap::pos

## BRIEF

Позиция

## CONTENT

Позиция

Тип: stappler::geom::Vec2


# ::stappler::xenolith::GestureTap::id

## BRIEF

Идентификатор

## CONTENT

Идентификатор

Тип: uint32_t


# ::stappler::xenolith::GestureTap::count

## BRIEF

Число нажатий

## CONTENT

Число нажатий

Тип: uint32_t


# ::stappler::xenolith::GestureTap::time

## BRIEF

Время нажатия

## CONTENT

Время нажатия

Тип: stappler::Time


# ::stappler::xenolith::GestureTap::cleanup()

## BRIEF

Очищает данные

## CONTENT

Очищает данные


# ::stappler::xenolith::GesturePress

## BRIEF

Данные длительного нажатия

## CONTENT

Данные длительного нажатия

Базовые классы:
* GestureData


# ::stappler::xenolith::GesturePress::pos

## BRIEF

Позиция

## CONTENT

Позиция

Тип: stappler::geom::Vec2


# ::stappler::xenolith::GesturePress::id

## BRIEF

Идентификатор

## CONTENT

Идентификатор

Тип: uint32_t


# ::stappler::xenolith::GesturePress::limit

## BRIEF

Предел длительности

## CONTENT

Предел длительности

Тип: stappler::TimeInterval


# ::stappler::xenolith::GesturePress::time

## BRIEF

Длительность нажатия

## CONTENT

Длительность нажатия

Тип: stappler::TimeInterval


# ::stappler::xenolith::GesturePress::tickCount

## BRIEF

Число тактов нажатия

## CONTENT

Число тактов нажатия

Тип: uint32_t


# ::stappler::xenolith::GesturePress::cleanup()

## BRIEF

Очищает данные

## CONTENT

Очищает данные


# ::stappler::xenolith::GestureSwipe

## BRIEF

Жест скоростного перемещения

## CONTENT

Жест скоростного перемещения

Базовые классы:
* GestureData


# ::stappler::xenolith::GestureSwipe::firstTouch

## BRIEF

Позиция первого нажатия

## CONTENT

Позиция первого нажатия

Тип: stappler::geom::Vec2


# ::stappler::xenolith::GestureSwipe::secondTouch

## BRIEF

Позиция второго нажатия

## CONTENT

Позиция второго нажатия

Тип: stappler::geom::Vec2


# ::stappler::xenolith::GestureSwipe::midpoint

## BRIEF

Средняя точка

## CONTENT

Средняя точка

Тип: stappler::geom::Vec2


# ::stappler::xenolith::GestureSwipe::delta

## BRIEF

Последнее изменение позиции

## CONTENT

Последнее изменение позиции

Тип: stappler::geom::Vec2


# ::stappler::xenolith::GestureSwipe::velocity

## BRIEF

Скорость движения позиции

## CONTENT

Скорость движения позиции

Тип: stappler::geom::Vec2


# ::stappler::xenolith::GestureSwipe::density

## BRIEF

Плотность пикселей

## CONTENT

Плотность пикселей

Тип: float


# ::stappler::xenolith::GestureSwipe::cleanup()

## BRIEF

Очищает данные

## CONTENT

Очищает данные


# ::stappler::xenolith::GesturePinch

## BRIEF

Щипковый жест

## CONTENT

Щипковый жест

Базовые классы:
* GestureData


# ::stappler::xenolith::GesturePinch::first

## BRIEF

Первое нажатие

## CONTENT

Первое нажатие

Тип: stappler::geom::Vec2


# ::stappler::xenolith::GesturePinch::second

## BRIEF

Второе нажатие

## CONTENT

Второе нажатие

Тип: stappler::geom::Vec2


# ::stappler::xenolith::GesturePinch::center

## BRIEF

Центральная точка

## CONTENT

Центральная точка

Тип: stappler::geom::Vec2


# ::stappler::xenolith::GesturePinch::startDistance

## BRIEF

Начальное расстояние между нажатиями

## CONTENT

Начальное расстояние между нажатиями

Тип: float


# ::stappler::xenolith::GesturePinch::prevDistance

## BRIEF

Предыдущее расстояние между нажатиями

## CONTENT

Предыдущее расстояние между нажатиями

Тип: float


# ::stappler::xenolith::GesturePinch::distance

## BRIEF

Текущее расстояние между нажатиями

## CONTENT

Текущее расстояние между нажатиями

Тип: float


# ::stappler::xenolith::GesturePinch::scale

## BRIEF

Текущее отношение расстояния к начальному

## CONTENT

Текущее отношение расстояния к начальному

Тип: float


# ::stappler::xenolith::GesturePinch::velocity

## BRIEF

Скорость изменения отношения

## CONTENT

Скорость изменения отношения

Тип: float


# ::stappler::xenolith::GesturePinch::density

## BRIEF

Плотность пикселей

## CONTENT

Плотность пикселей

Тип: float


# ::stappler::xenolith::GesturePinch::cleanup()

## BRIEF

Очищает данные

## CONTENT

Очищает данные

# ::stappler::xenolith::GestureRecognizer

## BRIEF

Базовый тип распознавателя жестов

## CONTENT

Базовый тип распознавателя жестов

Базовые классы:
* Ref


# ::stappler::xenolith::GestureRecognizer::EventMask

## BRIEF

Маска событий для получения

## CONTENT

Доступ: public

Маска событий для получения


# ::stappler::xenolith::GestureRecognizer::ButtonMask

## BRIEF

Маска кнопок манипулятора для получения

## CONTENT

Маска кнопок манипулятора для получения

Доступ: public


# ::stappler::xenolith::GestureRecognizer::~GestureRecognizer()

## BRIEF

Деструктор

## CONTENT

Деструктор

Доступ: public


# ::stappler::xenolith::GestureRecognizer::init()

## BRIEF

Создаёт распознаватель

## CONTENT

Доступ: public

Создаёт распознаватель

Возвращает:
* bool

# ::stappler::xenolith::GestureRecognizer::canHandleEvent(stappler::xenolith::InputEvent const&) const

## BRIEF

Проверяет, что распознаватель может обработать событие

## CONTENT

Доступ: public

Проверяет, что распознаватель может обработать событие

Параметры:
* stappler::xenolith::InputEvent const&

Возвращает:
* bool

# ::stappler::xenolith::GestureRecognizer::handleInputEvent(stappler::xenolith::InputEvent const&,float)

## BRIEF

Обрабатывает событие распознавателем

## CONTENT

Доступ: public

Обрабатывает событие распознавателем

Параметры:
* stappler::xenolith::InputEvent const&
* float

Возвращает:
* stappler::xenolith::InputEventState

# ::stappler::xenolith::GestureRecognizer::onEnter(stappler::xenolith::InputListener*)

## BRIEF

Обрабатывает соединение со слушателем событий

## CONTENT

Доступ: public

Обрабатывает соединение со слушателем событий

Параметры:
* stappler::xenolith::InputListener*


# ::stappler::xenolith::GestureRecognizer::onExit()

## BRIEF

Обрабатывает отсоединение от слушателя

## CONTENT

Доступ: public

Обрабатывает отсоединение от слушателя


# ::stappler::xenolith::GestureRecognizer::getEventCount() const

## BRIEF

Возвращает число захваченных событий

## CONTENT

Доступ: public

Возвращает число захваченных событий

Возвращает:
* uint32_t

# ::stappler::xenolith::GestureRecognizer::hasEvent(stappler::xenolith::InputEvent const&) const

## BRIEF

Проверяет, захвачено ли событие

## CONTENT

Доступ: public

Проверяет, захвачено ли событие

Параметры:
* stappler::xenolith::InputEvent const&

Возвращает:
* bool

# ::stappler::xenolith::GestureRecognizer::getEventMask() const

## BRIEF

Возвращает маску событий

## CONTENT

Доступ: public

Возвращает маску событий

Возвращает:
* EventMask

# ::stappler::xenolith::GestureRecognizer::update(uint64_t)

## BRIEF

Обновляет распознаватель по времени

## CONTENT

Доступ: public

Обновляет распознаватель по времени

Параметры:
* uint64_t


# ::stappler::xenolith::GestureRecognizer::getLocation() const

## BRIEF

Возвращает текущую позицию жеста

## CONTENT

Доступ: public

Возвращает текущую позицию жеста

Возвращает:
* stappler::geom::Vec2

# ::stappler::xenolith::GestureRecognizer::cancel()

## BRIEF

Отменяет любой начатый процесс распознавания

## CONTENT

Доступ: public

Отменяет любой начатый процесс распознавания


# ::stappler::xenolith::GestureRecognizer::setMaxEvents(size_t)

## BRIEF

Устанавливает максимум событий

## CONTENT

Доступ: public

Устанавливает максимум событий

Параметры:
* size_t


# ::stappler::xenolith::GestureRecognizer::getMaxEvents() const

## BRIEF

Возвращает максимум соыбтий

## CONTENT

Доступ: public

Возвращает максимум соыбтий

Возвращает:
* size_t

# ::stappler::xenolith::GestureRecognizer::canAddEvent(stappler::xenolith::InputEvent const&) const

## BRIEF

Проверяет, можно ли добавить событие

## CONTENT

Доступ: protected

Проверяет, можно ли добавить событие

Параметры:
* stappler::xenolith::InputEvent const&

Возвращает:
* bool

# ::stappler::xenolith::GestureRecognizer::addEvent(stappler::xenolith::InputEvent const&,float)

## BRIEF

Добавляет событий

## CONTENT

Доступ: protected

Добавляет событий

Параметры:
* stappler::xenolith::InputEvent const&
* float

Возвращает:
* stappler::xenolith::InputEventState

# ::stappler::xenolith::GestureRecognizer::removeEvent(stappler::xenolith::InputEvent const&,bool,float)

## BRIEF

Удаляет событие

## CONTENT

Доступ: protected

Удаляет событие

Параметры:
* stappler::xenolith::InputEvent const&
* bool
* float

Возвращает:
* stappler::xenolith::InputEventState

# ::stappler::xenolith::GestureRecognizer::renewEvent(stappler::xenolith::InputEvent const&,float)

## BRIEF

Обновляет длящееся событие

## CONTENT

Доступ: protected

Обновляет длящееся событие

Параметры:
* stappler::xenolith::InputEvent const&
* float

Возвращает:
* stappler::xenolith::InputEventState

# ::stappler::xenolith::GestureRecognizer::getTouchById(uint32_t,uint32_t*)

## BRIEF

Возвращает нажатие по идентификатору

## CONTENT

Доступ: protected

Возвращает нажатие по идентификатору

Параметры:
* uint32_t
* uint32_t* - опциональный указатель для получения индекса соыбтия во внутреннем массиве

Возвращает:
* stappler::xenolith::InputEvent*

# ::stappler::xenolith::GestureRecognizer::_events

## BRIEF

Текущие распознанные события

## CONTENT

Доступ: protected

Текущие распознанные события

Тип: Vector<stappler::xenolith::InputEvent>


# ::stappler::xenolith::GestureRecognizer::_maxEvents

## BRIEF

Максимальное число событий

## CONTENT

Доступ: protected

Максимальное число событий

Тип: size_t


# ::stappler::xenolith::GestureRecognizer::_eventMask

## BRIEF

Маска событий

## CONTENT

Доступ: protected

Маска событий

Тип: EventMask


# ::stappler::xenolith::GestureRecognizer::_buttonMask

## BRIEF

Маска клавиш нажатия

## CONTENT

Доступ: protected

Маска клавиш нажатия

Тип: ButtonMask


# ::stappler::xenolith::GestureRecognizer::_density

## BRIEF

Плотность пикселей для распознавания

## CONTENT

Доступ: protected

Плотность пикселей для распознавания

Тип: float


# ::stappler::xenolith::GestureTouchRecognizer

## BRIEF

Простой распознаватель нажатий

## CONTENT

Простой распознаватель нажатий. Ретранслирует события нажатий в виде результата распознавания.

Базовые классы:
* GestureRecognizer


# ::stappler::xenolith::GestureTouchRecognizer::InputCallback

## BRIEF

Функция результата

## CONTENT

Доступ: public

Функция результата


# ::stappler::xenolith::GestureTouchRecognizer::~GestureTouchRecognizer()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор


# ::stappler::xenolith::GestureTouchRecognizer::init(stappler::xenolith::GestureTouchRecognizer::InputCallback&&,stappler::xenolith::GestureRecognizer::ButtonMask&&)

## BRIEF

Создаёт распознаватель

## CONTENT

Доступ: public

Создаёт распознаватель

Параметры:
* stappler::xenolith::GestureTouchRecognizer::InputCallback&&
* stappler::xenolith::GestureRecognizer::ButtonMask&&

Возвращает:
* bool

# ::stappler::xenolith::GestureTouchRecognizer::canHandleEvent(stappler::xenolith::InputEvent const&) const

## BRIEF

Проверяет, можно ли добавить событие

## CONTENT

Доступ: public

Проверяет, можно ли добавить событие

Параметры:
* stappler::xenolith::InputEvent const&

Возвращает:
* bool

# ::stappler::xenolith::GestureTouchRecognizer::removeRecognizedEvent(uint32_t)

## BRIEF

Удаляет распознанное событие

## CONTENT

Доступ: public

Удаляет распознанное событие

Параметры:
* uint32_t


# ::stappler::xenolith::GestureTouchRecognizer::addEvent(stappler::xenolith::InputEvent const&,float)

## BRIEF

Добавляет событие

## CONTENT

Доступ: protected

Добавляет событие

Параметры:
* stappler::xenolith::InputEvent const&
* float

Возвращает:
* stappler::xenolith::InputEventState

# ::stappler::xenolith::GestureTouchRecognizer::removeEvent(stappler::xenolith::InputEvent const&,bool,float)

## BRIEF

Вдаляет событие

## CONTENT

Доступ: protected

Вдаляет событие

Параметры:
* stappler::xenolith::InputEvent const&
* bool
* float

Возвращает:
* stappler::xenolith::InputEventState

# ::stappler::xenolith::GestureTouchRecognizer::renewEvent(stappler::xenolith::InputEvent const&,float)

## BRIEF

Обновляет событие

## CONTENT

Доступ: protected

Обновляет событие

Параметры:
* stappler::xenolith::InputEvent const&
* float

Возвращает:
* stappler::xenolith::InputEventState

# ::stappler::xenolith::GestureTouchRecognizer::_event

## BRIEF

Данные жеста

## CONTENT

Доступ: protected

Данные жеста

Тип: stappler::xenolith::GestureData


# ::stappler::xenolith::GestureTouchRecognizer::_callback

## BRIEF

Функция результата

## CONTENT

Доступ: protected

Функция результата

Тип: InputCallback


# ::stappler::xenolith::GestureTapRecognizer

## BRIEF

Рспознаватель одиночного нажатия

## CONTENT

Рспознаватель одиночного нажатия

Базовые классы:
* GestureRecognizer


# ::stappler::xenolith::GestureTapRecognizer::InputCallback

## BRIEF

Функция результата

## CONTENT

Доступ: public

Функция результата


# ::stappler::xenolith::GestureTapRecognizer::ButtonMask

## BRIEF

Маска нажатий

## CONTENT

Доступ: public

Маска нажатий

# ::stappler::xenolith::GestureTapRecognizer::~GestureTapRecognizer()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор


# ::stappler::xenolith::GestureTapRecognizer::init(stappler::xenolith::GestureTapRecognizer::InputCallback&&,stappler::xenolith::GestureTapRecognizer::ButtonMask&&,uint32_t)

## BRIEF

Создаёт распознаватель

## CONTENT

Доступ: public

Создаёт распознаватель

Параметры:
* stappler::xenolith::GestureTapRecognizer::InputCallback&&
* stappler::xenolith::GestureTapRecognizer::ButtonMask&&
* uint32_t - максимальное число распознаваемых последовательных нажатий

Возвращает:
* bool

# ::stappler::xenolith::GestureTapRecognizer::update(uint64_t)

## BRIEF

Обновляет время распознавания

## CONTENT

Доступ: public

Обновляет время распознавания

Параметры:
* uint64_t


# ::stappler::xenolith::GestureTapRecognizer::cancel()

## BRIEF

Отменяет распознавание

## CONTENT

Доступ: public

Отменяет распознавание



# ::stappler::xenolith::GestureTapRecognizer::addEvent(stappler::xenolith::InputEvent const&,float)

## BRIEF

Добавляет событие

## CONTENT

Доступ: protected

Добавляет событие

Параметры:
* stappler::xenolith::InputEvent const&
* float

Возвращает:
* stappler::xenolith::InputEventState

# ::stappler::xenolith::GestureTapRecognizer::removeEvent(stappler::xenolith::InputEvent const&,bool,float)

## BRIEF

Удаляет событие

## CONTENT

Доступ: protected

Удаляет событие

Параметры:
* stappler::xenolith::InputEvent const&
* bool
* float

Возвращает:
* stappler::xenolith::InputEventState

# ::stappler::xenolith::GestureTapRecognizer::renewEvent(stappler::xenolith::InputEvent const&,float)

## BRIEF

Обновляет событие

## CONTENT

Доступ: protected

Обновляет событие

Параметры:
* stappler::xenolith::InputEvent const&
* float

Возвращает:
* stappler::xenolith::InputEventState

# ::stappler::xenolith::GestureTapRecognizer::registerTap()

## BRIEF

Регистрирует нажатие

## CONTENT

Доступ: protected

Регистрирует нажатие


# ::stappler::xenolith::GestureTapRecognizer::_gesture

## BRIEF

Данные жеста

## CONTENT

Доступ: protected

Данные жеста

Тип: stappler::xenolith::GestureTap


# ::stappler::xenolith::GestureTapRecognizer::_callback

## BRIEF

Функция результата

## CONTENT

Доступ: protected

Функция результата

Тип: InputCallback


# ::stappler::xenolith::GestureTapRecognizer::_maxTapCount

## BRIEF

Максимальное число нажатий

## CONTENT

Доступ: protected

Максимальное число нажатий

Тип: uint32_t


# ::stappler::xenolith::GestureTapRecognizer::_tmpEvent

## BRIEF

Временные данные события

## CONTENT

Доступ: protected

Временные данные события

Тип: stappler::xenolith::InputEvent


# ::stappler::xenolith::GesturePressRecognizer

## BRIEF

Распознаватель длительного нажатия

## CONTENT

Распознаватель длительного нажатия

Базовые классы:
* GestureRecognizer


# ::stappler::xenolith::GesturePressRecognizer::InputCallback

## BRIEF

Функция результата

## CONTENT

Доступ: public

Функция результата


# ::stappler::xenolith::GesturePressRecognizer::~GesturePressRecognizer()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор

# ::stappler::xenolith::GesturePressRecognizer::init(stappler::xenolith::GesturePressRecognizer::InputCallback&&,stappler::TimeInterval,bool,stappler::xenolith::GestureRecognizer::ButtonMask&&)

## BRIEF

Создаёт распознаватель

## CONTENT

Доступ: public

Создаёт распознаватель

Параметры:
* stappler::xenolith::GesturePressRecognizer::InputCallback&&
* stappler::TimeInterval - время длительного нажатия
* bool - true для отправки числа интервалов длительного нажатия по времени
* stappler::xenolith::GestureRecognizer::ButtonMask&&

Возвращает:
* bool

# ::stappler::xenolith::GesturePressRecognizer::update(uint64_t)

## BRIEF

Обновляет время жеста

## CONTENT

Доступ: public

Обновляет время жеста

Параметры:
* uint64_t


# ::stappler::xenolith::GesturePressRecognizer::cancel()

## BRIEF

Отменяет распознавание

## CONTENT

Доступ: public

Отменяет распознавание


# ::stappler::xenolith::GesturePressRecognizer::addEvent(stappler::xenolith::InputEvent const&,float)

## BRIEF

Добавляет событие

## CONTENT

Доступ: protected

Добавляет событие

Параметры:
* stappler::xenolith::InputEvent const&
* float

Возвращает:
* stappler::xenolith::InputEventState

# ::stappler::xenolith::GesturePressRecognizer::removeEvent(stappler::xenolith::InputEvent const&,bool,float)

## BRIEF

Удаляет событие

## CONTENT

Доступ: protected

Удаляет событие

Параметры:
* stappler::xenolith::InputEvent const&
* bool
* float

Возвращает:
* stappler::xenolith::InputEventState

# ::stappler::xenolith::GesturePressRecognizer::renewEvent(stappler::xenolith::InputEvent const&,float)

## BRIEF

Обновляет событие

## CONTENT

Доступ: protected

Обновляет событие

Параметры:
* stappler::xenolith::InputEvent const&
* float

Возвращает:
* stappler::xenolith::InputEventState

# ::stappler::xenolith::GesturePressRecognizer::_lastTime

## BRIEF

Время последнего события

## CONTENT

Доступ: protected

Время последнего события

Тип: stappler::Time


# ::stappler::xenolith::GesturePressRecognizer::_notified

## BRIEF

Флаг уведомления

## CONTENT

Доступ: protected

Флаг уведомления

Тип: bool


# ::stappler::xenolith::GesturePressRecognizer::_gesture

## BRIEF

Данные жеста

## CONTENT

Доступ: protected

Данные жеста

Тип: stappler::xenolith::GesturePress


# ::stappler::xenolith::GesturePressRecognizer::_callback

## BRIEF

Функция результата

## CONTENT

Доступ: protected

Функция результата

Тип: InputCallback


# ::stappler::xenolith::GesturePressRecognizer::_interval

## BRIEF

Интервал нажатия

## CONTENT

Доступ: protected

Интервал нажатия

Тип: stappler::TimeInterval


# ::stappler::xenolith::GesturePressRecognizer::_continuous

## BRIEF

Флаг постоянной отправки данных

## CONTENT

Доступ: protected

Флаг постоянной отправки данных

Тип: bool


# ::stappler::xenolith::GestureSwipeRecognizer

## BRIEF

Жест скоростного движения

## CONTENT

Жест скоростного движения

Базовые классы:
* GestureRecognizer


# ::stappler::xenolith::GestureSwipeRecognizer::InputCallback

## BRIEF

Функция получения результата

## CONTENT

Доступ: public

Функция получения результата


# ::stappler::xenolith::GestureSwipeRecognizer::~GestureSwipeRecognizer()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор


# ::stappler::xenolith::GestureSwipeRecognizer::init(stappler::xenolith::GestureSwipeRecognizer::InputCallback&&,float,bool,stappler::xenolith::GestureRecognizer::ButtonMask&&)

## BRIEF

Создаёт распознаватель

## CONTENT

Доступ: public

Создаёт распознаватель

Параметры:
* stappler::xenolith::GestureSwipeRecognizer::InputCallback&&
* float - порог смещения для начала распознавания жеста
* bool - true если необходимо включать порог в смещение жеста
* stappler::xenolith::GestureRecognizer::ButtonMask&&

Возвращает:
* bool

# ::stappler::xenolith::GestureSwipeRecognizer::cancel()

## BRIEF

Отменяет распознавание

## CONTENT

Доступ: public

Отменяет распознавание


# ::stappler::xenolith::GestureSwipeRecognizer::addEvent(stappler::xenolith::InputEvent const&,float)

## BRIEF

Добавляет событие

## CONTENT

Доступ: protected

Добавляет событие

Параметры:
* stappler::xenolith::InputEvent const&
* float

Возвращает:
* stappler::xenolith::InputEventState

# ::stappler::xenolith::GestureSwipeRecognizer::removeEvent(stappler::xenolith::InputEvent const&,bool,float)

## BRIEF

Удаляет событие

## CONTENT

Доступ: protected

Удаляет событие

Параметры:
* stappler::xenolith::InputEvent const&
* bool
* float

Возвращает:
* stappler::xenolith::InputEventState

# ::stappler::xenolith::GestureSwipeRecognizer::renewEvent(stappler::xenolith::InputEvent const&,float)

## BRIEF

Обновляет событие

## CONTENT

Доступ: protected

Обновляет событие

Параметры:
* stappler::xenolith::InputEvent const&
* float

Возвращает:
* stappler::xenolith::InputEventState

# ::stappler::xenolith::GestureSwipeRecognizer::_lastTime

## BRIEF

Время последнего события

## CONTENT

Доступ: protected

Время последнего события

Тип: stappler::Time


# ::stappler::xenolith::GestureSwipeRecognizer::_velocityX

## BRIEF

Нормализованная скорость по X

## CONTENT

Доступ: protected

Нормализованная скорость по X

Тип: math::MovingAverage<4>


# ::stappler::xenolith::GestureSwipeRecognizer::_velocityY

## BRIEF

Нормализованная скорость по Y

## CONTENT

Доступ: protected

Нормализованная скорость по Y

Тип: math::MovingAverage<4>


# ::stappler::xenolith::GestureSwipeRecognizer::_swipeBegin

## BRIEF

Флаг начала распознавания

## CONTENT

Доступ: protected

Флаг начала распознавания

Тип: bool


# ::stappler::xenolith::GestureSwipeRecognizer::_currentTouch

## BRIEF

Идентификатор последнего нажатия

## CONTENT

Доступ: protected

Идентификатор последнего нажатия

Тип: uint32_t


# ::stappler::xenolith::GestureSwipeRecognizer::_gesture

## BRIEF

Данные жеста

## CONTENT

Доступ: protected

Данные жеста

Тип: stappler::xenolith::GestureSwipe


# ::stappler::xenolith::GestureSwipeRecognizer::_callback

## BRIEF

Функция получения результата

## CONTENT

Доступ: protected

Функция получения результата

Тип: InputCallback


# ::stappler::xenolith::GestureSwipeRecognizer::_threshold

## BRIEF

Порог начала распознавания

## CONTENT

Доступ: protected

Порог начала распознавания

Тип: float


# ::stappler::xenolith::GestureSwipeRecognizer::_includeThreshold

## BRIEF

Флаг включения порога в жест

## CONTENT

Доступ: protected

Флаг включения порога в жест

Тип: bool


# ::stappler::xenolith::GesturePinchRecognizer

## BRIEF

Распознаватель шипкового жеста

## CONTENT

Распознаватель шипкового жеста

Базовые классы:
* GestureRecognizer


# ::stappler::xenolith::GesturePinchRecognizer::InputCallback

## BRIEF

Функция получения результата

## CONTENT

Доступ: public

Функция получения результата

# ::stappler::xenolith::GesturePinchRecognizer::~GesturePinchRecognizer()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор

# ::stappler::xenolith::GesturePinchRecognizer::init(stappler::xenolith::GesturePinchRecognizer::InputCallback&&,stappler::xenolith::GestureRecognizer::ButtonMask&&)

## BRIEF

Создаёт распознаватель

## CONTENT

Доступ: public

Создаёт распознаватель

Параметры:
* stappler::xenolith::GesturePinchRecognizer::InputCallback&&
* stappler::xenolith::GestureRecognizer::ButtonMask&&

Возвращает:
* bool

# ::stappler::xenolith::GesturePinchRecognizer::cancel()

## BRIEF

Отменяет распознавание

## CONTENT

Доступ: public

Отменяет распознавание


# ::stappler::xenolith::GesturePinchRecognizer::addEvent(stappler::xenolith::InputEvent const&,float)

## BRIEF

Добавляет событие

## CONTENT

Доступ: protected

Добавляет событие

Параметры:
* stappler::xenolith::InputEvent const&
* float

Возвращает:
* stappler::xenolith::InputEventState

# ::stappler::xenolith::GesturePinchRecognizer::removeEvent(stappler::xenolith::InputEvent const&,bool,float)

## BRIEF

Удаляет событие

## CONTENT

Доступ: protected

Удаляет событие

Параметры:
* stappler::xenolith::InputEvent const&
* bool
* float

Возвращает:
* stappler::xenolith::InputEventState

# ::stappler::xenolith::GesturePinchRecognizer::renewEvent(stappler::xenolith::InputEvent const&,float)

## BRIEF

Обновляет событие

## CONTENT

Доступ: protected

Обновляет событие

Параметры:
* stappler::xenolith::InputEvent const&
* float

Возвращает:
* stappler::xenolith::InputEventState

# ::stappler::xenolith::GesturePinchRecognizer::_lastTime

## BRIEF

Время последнего события

## CONTENT

Доступ: protected

Время последнего события

Тип: stappler::Time


# ::stappler::xenolith::GesturePinchRecognizer::_velocity

## BRIEF

Нормализованная скорость

## CONTENT

Доступ: protected

Нормализованная скорость

Тип: math::MovingAverage<3>


# ::stappler::xenolith::GesturePinchRecognizer::_gesture

## BRIEF

Данные жестов

## CONTENT

Доступ: protected

Данные жестов

Тип: stappler::xenolith::GesturePinch


# ::stappler::xenolith::GesturePinchRecognizer::_callback

## BRIEF

Функция получения результата

## CONTENT

Доступ: protected

Функция получения результата

Тип: InputCallback


# ::stappler::xenolith::GestureScrollRecognizer

## BRIEF

Распознавание события прокрутки

## CONTENT

Распознавание события прокрутки

Базовые классы:
* GestureRecognizer


# ::stappler::xenolith::GestureScrollRecognizer::InputCallback

## BRIEF

Функция для получения результата

## CONTENT

Доступ: public

Функция для получения результата


# ::stappler::xenolith::GestureScrollRecognizer::~GestureScrollRecognizer()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор


# ::stappler::xenolith::GestureScrollRecognizer::init(stappler::xenolith::GestureScrollRecognizer::InputCallback&&)

## BRIEF

Создаёт распознаватель

## CONTENT

Доступ: public

Создаёт распознаватель

Параметры:
* stappler::xenolith::GestureScrollRecognizer::InputCallback&&

Возвращает:
* bool

# ::stappler::xenolith::GestureScrollRecognizer::handleInputEvent(stappler::xenolith::InputEvent const&,float)

## BRIEF

Обрабатывает входяее событие

## CONTENT

Доступ: public

Обрабатывает входяее событие

Параметры:
* stappler::xenolith::InputEvent const&
* float

Возвращает:
* stappler::xenolith::InputEventState

# ::stappler::xenolith::GestureScrollRecognizer::_gesture

## BRIEF

Данные жеста

## CONTENT

Доступ: protected

Данные жеста

Тип: stappler::xenolith::GestureScroll


# ::stappler::xenolith::GestureScrollRecognizer::_callback

## BRIEF

Функция получения результата

## CONTENT

Доступ: protected

Функция получения результата

Тип: InputCallback


# ::stappler::xenolith::GestureMoveRecognizer

## BRIEF

Распознаватель движения указателя мыши в окне

## CONTENT

Распознаватель движения указателя мыши в окне

Базовые классы:
* GestureRecognizer


# ::stappler::xenolith::GestureMoveRecognizer::InputCallback

## BRIEF

Функция результата

## CONTENT

Доступ: public

Функция результата


# ::stappler::xenolith::GestureMoveRecognizer::~GestureMoveRecognizer()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор


# ::stappler::xenolith::GestureMoveRecognizer::init(stappler::xenolith::GestureMoveRecognizer::InputCallback&&,bool)

## BRIEF

Создаёт распознаватель

## CONTENT

Доступ: public

Создаёт распознаватель

Параметры:
* stappler::xenolith::GestureMoveRecognizer::InputCallback&&
* bool - true если отслеживать только движение в рамках узла

Возвращает:
* bool

# ::stappler::xenolith::GestureMoveRecognizer::canHandleEvent(stappler::xenolith::InputEvent const&) const

## BRIEF

Проверяет, можно ли обработать соыбтие

## CONTENT

Доступ: public

Проверяет, можно ли обработать соыбтие

Параметры:
* stappler::xenolith::InputEvent const&

Возвращает:
* bool

# ::stappler::xenolith::GestureMoveRecognizer::handleInputEvent(stappler::xenolith::InputEvent const&,float)

## BRIEF

Обрабатывает событие ввода

## CONTENT

Доступ: public

Обрабатывает событие ввода

Параметры:
* stappler::xenolith::InputEvent const&
* float

Возвращает:
* stappler::xenolith::InputEventState

# ::stappler::xenolith::GestureMoveRecognizer::onEnter(stappler::xenolith::InputListener*)

## BRIEF

Обрабатывает подключение к слушателю событий

## CONTENT

Доступ: public

Обрабатывает подключение к слушателю событий

Параметры:
* stappler::xenolith::InputListener*


# ::stappler::xenolith::GestureMoveRecognizer::onExit()

## BRIEF

Обрабатывает отключение от слушателя событий

## CONTENT

Доступ: public

Обрабатывает отключение от слушателя событий


# ::stappler::xenolith::GestureMoveRecognizer::_event

## BRIEF

Данные события

## CONTENT

Доступ: protected

Данные события

Тип: stappler::xenolith::GestureData


# ::stappler::xenolith::GestureMoveRecognizer::_callback

## BRIEF

Функция получения результата

## CONTENT

Доступ: protected

Функция получения результата

Тип: InputCallback


# ::stappler::xenolith::GestureMoveRecognizer::_listener

## BRIEF

Слушатель событий узла

## CONTENT

Доступ: protected

Слушатель событий узла

Тип: stappler::xenolith::InputListener*


# ::stappler::xenolith::GestureMoveRecognizer::_onlyWithinNode

## BRIEF

Флаг обработки только внутри узла

## CONTENT

Доступ: protected

Флаг обработки только внутри узла

Тип: bool


# ::stappler::xenolith::GestureKeyRecognizer

## BRIEF

Распознаватель ввода с клавиатуры

## CONTENT

Распознаватель ввода с клавиатуры

Базовые классы:
* GestureRecognizer


# ::stappler::xenolith::GestureKeyRecognizer::InputCallback

## BRIEF

Функция получения результата

## CONTENT

Доступ: public

Функция получения результата

# ::stappler::xenolith::GestureKeyRecognizer::KeyMask

## BRIEF

Маска клавиш

## CONTENT

Доступ: public

Маска клавиш


# ::stappler::xenolith::GestureKeyRecognizer::~GestureKeyRecognizer()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор

# ::stappler::xenolith::GestureKeyRecognizer::init(stappler::xenolith::GestureKeyRecognizer::InputCallback&&,stappler::xenolith::GestureKeyRecognizer::KeyMask&&)

## BRIEF

Создаёт распознаватель

## CONTENT

Доступ: public

Создаёт распознаватель

Параметры:
* stappler::xenolith::GestureKeyRecognizer::InputCallback&&
* stappler::xenolith::GestureKeyRecognizer::KeyMask&&

Возвращает:
* bool

# ::stappler::xenolith::GestureKeyRecognizer::canHandleEvent(stappler::xenolith::InputEvent const&) const

## BRIEF

Проверяет, можно и обработать событие

## CONTENT

Доступ: public

Проверяет, можно и обработать событие

Параметры:
* stappler::xenolith::InputEvent const&

Возвращает:
* bool

# ::stappler::xenolith::GestureKeyRecognizer::isKeyPressed(stappler::xenolith::InputKeyCode) const

## BRIEF

Проверяет, зажата ли клавиша

## CONTENT

Доступ: public

Проверяет, зажата ли клавиша

Параметры:
* stappler::xenolith::InputKeyCode

Возвращает:
* bool

# ::stappler::xenolith::GestureKeyRecognizer::addEvent(stappler::xenolith::InputEvent const&,float)

## BRIEF

Добавляет событие

## CONTENT

Доступ: protected

Добавляет событие

Параметры:
* stappler::xenolith::InputEvent const&
* float

Возвращает:
* stappler::xenolith::InputEventState

# ::stappler::xenolith::GestureKeyRecognizer::removeEvent(stappler::xenolith::InputEvent const&,bool,float)

## BRIEF

Удаляет событие

## CONTENT

Доступ: protected

Удаляет событие

Параметры:
* stappler::xenolith::InputEvent const&
* bool
* float

Возвращает:
* stappler::xenolith::InputEventState

# ::stappler::xenolith::GestureKeyRecognizer::renewEvent(stappler::xenolith::InputEvent const&,float)

## BRIEF

Обновляет событие

## CONTENT

Доступ: protected

Обновляет событие

Параметры:
* stappler::xenolith::InputEvent const&
* float

Возвращает:
* stappler::xenolith::InputEventState

# ::stappler::xenolith::GestureKeyRecognizer::_keyMask

## BRIEF

Маска клавиш

## CONTENT

Доступ: protected

Маска клавиш

Тип: KeyMask


# ::stappler::xenolith::GestureKeyRecognizer::_pressedKeys

## BRIEF

Зажатые клавиши

## CONTENT

Доступ: protected

Зажатые клавиши

Тип: KeyMask


# ::stappler::xenolith::GestureKeyRecognizer::_callback

## BRIEF

Фнкция получения результата

## CONTENT

Доступ: protected

Фнкция получения результата

Тип: InputCallback


# ::stappler::xenolith::GestureMouseOverRecognizer

## BRIEF

Распознаватель указателя над узлом или окном

## CONTENT

Распознаватель указателя над узлом или окном

Базовые классы:
* GestureRecognizer


# ::stappler::xenolith::GestureMouseOverRecognizer::InputCallback

## BRIEF

Функция получения результата

## CONTENT

Доступ: public

Функция получения результата


# ::stappler::xenolith::GestureMouseOverRecognizer::~GestureMouseOverRecognizer()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор


# ::stappler::xenolith::GestureMouseOverRecognizer::init(stappler::xenolith::GestureMouseOverRecognizer::InputCallback&&,float)

## BRIEF

Создаёт распознаватель

## CONTENT

Доступ: public

Создаёт распознаватель

Параметры:
* stappler::xenolith::GestureMouseOverRecognizer::InputCallback&&
* float

Возвращает:
* bool

# ::stappler::xenolith::GestureMouseOverRecognizer::handleInputEvent(stappler::xenolith::InputEvent const&,float)

## BRIEF

Обраатывает событие ввода

## CONTENT

Доступ: public

Обраатывает событие ввода

Параметры:
* stappler::xenolith::InputEvent const&
* float

Возвращает:
* stappler::xenolith::InputEventState

# ::stappler::xenolith::GestureMouseOverRecognizer::onEnter(stappler::xenolith::InputListener*)

## BRIEF

Обрабатывает соединение со слушателем событий

## CONTENT

Доступ: public

Обрабатывает соединение со слушателем событий

Параметры:
* stappler::xenolith::InputListener*


# ::stappler::xenolith::GestureMouseOverRecognizer::onExit()

## BRIEF

Обрабатывает отключение от слушателя событий

## CONTENT

Доступ: public

Обрабатывает отключение от слушателя событий


# ::stappler::xenolith::GestureMouseOverRecognizer::updateState(stappler::xenolith::InputEvent const&)

## BRIEF

Обновляет состояние распознавателя

## CONTENT

Доступ: protected

Обновляет состояние распознавателя

Параметры:
* stappler::xenolith::InputEvent const&


# ::stappler::xenolith::GestureMouseOverRecognizer::_event

## BRIEF

Данные события

## CONTENT

Доступ: protected

Данные события

Тип: stappler::xenolith::GestureData


# ::stappler::xenolith::GestureMouseOverRecognizer::_viewHasPointer

## BRIEF

Флаг указателя над окном

## CONTENT

Доступ: protected

Флаг указателя над окном

Тип: bool


# ::stappler::xenolith::GestureMouseOverRecognizer::_viewHasFocus

## BRIEF

Флаг фокуса ввода

## CONTENT

Доступ: protected

Флаг фокуса ввода

Тип: bool


# ::stappler::xenolith::GestureMouseOverRecognizer::_hasMouseOver

## BRIEF

Флаг указателя над узлом

## CONTENT

Доступ: protected

Флаг указателя над узлом

Тип: bool


# ::stappler::xenolith::GestureMouseOverRecognizer::_value

## BRIEF

Текущее состояние

## CONTENT

Доступ: protected

Текущее состояние

Тип: bool


# ::stappler::xenolith::GestureMouseOverRecognizer::_padding

## BRIEF

Заступ для распознавания

## CONTENT

Доступ: protected

Заступ для распознавания

Тип: float


# ::stappler::xenolith::GestureMouseOverRecognizer::_callback

## BRIEF

Функция получения результата

## CONTENT

Доступ: protected

Функция получения результата

Тип: InputCallback


# ::stappler::xenolith::GestureMouseOverRecognizer::_listener

## BRIEF

Слушатель событий

## CONTENT

Доступ: protected

Слушатель событий

Тип: stappler::xenolith::InputListener*


# ::stappler::xenolith::operator<<(std::ostream&,stappler::xenolith::GestureEvent)

## BRIEF

Выводит название события в поток

## CONTENT

Выводит название события в поток

Параметры:
* std::ostream&
* stappler::xenolith::GestureEvent

Возвращает:
* std::ostream&