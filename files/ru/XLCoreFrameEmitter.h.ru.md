Title: XLCoreFrameEmitter.h


# XENOLITH_CORE_XLCOREFRAMEEMITTER_H_

## BRIEF

Заголовок структуры породителя кадров

## CONTENT

Заголовок структуры породителя кадров


# ::stappler::xenolith::core::FrameEmitter

## BRIEF

Тип породителя кадров

## CONTENT

Тип породителя кадров. Породитель кадров необходим для контроля постоянного потока кадров и гарантирует, что только один текущий кадр проходит по каждой стадии обработки

Базовые классы:
* Ref


# ::stappler::xenolith::core::FrameEmitter::~FrameEmitter()

## BRIEF

Дескриптор

## CONTENT

Доступ: public

Дескриптор


# ::stappler::xenolith::core::FrameEmitter::init(Rc<stappler::xenolith::core::Loop> const&,uint64_t)

## BRIEF

Создаёт объект

## CONTENT

Доступ: public

Создаёт объект

Параметры:
* Rc<stappler::xenolith::core::Loop> const&
* uint64_t - кадровый интервал в микросекундах

Возвращает:
* bool

# ::stappler::xenolith::core::FrameEmitter::invalidate()

## BRIEF

Уничтожает объект

## CONTENT

Доступ: public

Уничтожает объект

# ::stappler::xenolith::core::FrameEmitter::setFrameSubmitted(stappler::xenolith::core::FrameHandle&)

## BRIEF

Помечает кадр как отправленный на исполнение устройству

## CONTENT

Доступ: public

Помечает кадр как отправленный на исполнение устройству

Параметры:
* stappler::xenolith::core::FrameHandle&


# ::stappler::xenolith::core::FrameEmitter::isFrameValid(stappler::xenolith::core::FrameHandle const&)

## BRIEF

Проверяет, что кадр не содержит ошибок

## CONTENT

Доступ: public

Проверяет, что кадр не содержит ошибок

Параметры:
* stappler::xenolith::core::FrameHandle const&

Возвращает:
* bool

# ::stappler::xenolith::core::FrameEmitter::acquireNextFrame()

## BRIEF

Начинает новый кадр

## CONTENT

Доступ: public

Начинает новый кадр


# ::stappler::xenolith::core::FrameEmitter::dropFrameTimeout()

## BRIEF

Сбрасывает задержку интервала кадра и начинает кадр немедленно

## CONTENT

Доступ: public

Сбрасывает задержку интервала кадра и начинает кадр немедленно


# ::stappler::xenolith::core::FrameEmitter::dropFrames()

## BRIEF

Отменяет все активные кадры

## CONTENT

Доступ: public

Отменяет все активные кадры

# ::stappler::xenolith::core::FrameEmitter::isValid() const

## BRIEF

Проверяет на работоспособность

## CONTENT

Доступ: public

Проверяет на работоспособность

Возвращает:
* bool

# ::stappler::xenolith::core::FrameEmitter::setFrameTime(uint64_t)

## BRIEF

Устанавливает время начала последнего кадра

## CONTENT

Доступ: public

Устанавливает время начала последнего кадра

Параметры:
* uint64_t


# ::stappler::xenolith::core::FrameEmitter::getFrameTime() const

## BRIEF

Возвращает время начала последнего кадра

## CONTENT

Доступ: public

Возвращает время начала последнего кадра

Возвращает:
* uint64_t

# ::stappler::xenolith::core::FrameEmitter::setFrameInterval(uint64_t)

## BRIEF

Изменяет кадровый интервал

## CONTENT

Доступ: public

Изменяет кадровый интервал

Параметры:
* uint64_t


# ::stappler::xenolith::core::FrameEmitter::getFrameInterval() const

## BRIEF

Возвращает кадровый интервал

## CONTENT

Доступ: public

Возвращает кадровый интервал

Возвращает:
* uint64_t

# ::stappler::xenolith::core::FrameEmitter::getLoop() const

## BRIEF

Возвращает графический цикл

## CONTENT

Доступ: public

Возвращает графический цикл

Возвращает:
* Rc<stappler::xenolith::core::Loop> const&

# ::stappler::xenolith::core::FrameEmitter::getLastFrameTime() const

## BRIEF

Возвращает время работы последнего кадра

## CONTENT

Доступ: public

Возвращает время работы последнего кадра

Возвращает:
* uint64_t

# ::stappler::xenolith::core::FrameEmitter::getAvgFrameTime() const

## BRIEF

Возвращает среднее время работы кадра

## CONTENT

Доступ: public

Возвращает среднее время работы кадра

Возвращает:
* uint64_t

# ::stappler::xenolith::core::FrameEmitter::getAvgFenceTime() const

## BRIEF

Возвращает среднее время ожидания по ограничителям устройства

## CONTENT

Доступ: public

Возвращает среднее время ожидания по ограничителям устройства. Примерно соотвествует времени работы кадра на устройстве

Возвращает:
* uint64_t

# ::stappler::xenolith::core::FrameEmitter::isReadyForSubmit() const

## BRIEF

Проверяет, что система готова к запуску кадра

## CONTENT

Доступ: public

Проверяет, что система готова к запуску кадра

Возвращает:
* bool

# ::stappler::xenolith::core::FrameEmitter::setEnableBarrier(bool)

## BRIEF

Включает барьер, запрещающий наличие более одного рабочего кадра

## CONTENT

Доступ: public

Включает барьер, запрещающий наличие более одного рабочего кадра

Параметры:
* bool


# ::stappler::xenolith::core::FrameEmitter::makeRequest(stappler::xenolith::core::FrameContraints const&)

## BRIEF

Создаёт запрос на кадр

## CONTENT

Доступ: public

Создаёт запрос на кадр

Параметры:
* stappler::xenolith::core::FrameContraints const&

Возвращает:
* Rc<stappler::xenolith::core::FrameRequest>

# ::stappler::xenolith::core::FrameEmitter::submitNextFrame(Rc<stappler::xenolith::core::FrameRequest>&&)

## BRIEF

Отправляет следующий кадр в обработку

## CONTENT

Доступ: public

Отправляет следующий кадр в обработку

Параметры:
* Rc<stappler::xenolith::core::FrameRequest>&&

Возвращает:
* Rc<stappler::xenolith::core::FrameHandle>

# ::stappler::xenolith::core::FrameEmitter::onFrameEmitted(stappler::xenolith::core::FrameHandle&)

## BRIEF

Обслуживает создание нового кадра

## CONTENT

Доступ: protected

Обслуживает создание нового кадра

Параметры:
* stappler::xenolith::core::FrameHandle&


# ::stappler::xenolith::core::FrameEmitter::onFrameSubmitted(stappler::xenolith::core::FrameHandle&)

## BRIEF

Обслуживает отправку нового кадра

## CONTENT

Доступ: protected

Обслуживает отправку нового кадра

Параметры:
* stappler::xenolith::core::FrameHandle&


# ::stappler::xenolith::core::FrameEmitter::onFrameComplete(stappler::xenolith::core::FrameHandle&)

## BRIEF

Обслуживает завершение кадра

## CONTENT

Доступ: protected

Обслуживает завершение кадра

Параметры:
* stappler::xenolith::core::FrameHandle&


# ::stappler::xenolith::core::FrameEmitter::onFrameTimeout(uint64_t)

## BRIEF

Получает задержку между кадрами

## CONTENT

Доступ: protected

Получает задержку между кадрами

Параметры:
* uint64_t


# ::stappler::xenolith::core::FrameEmitter::onFrameRequest(bool)

## BRIEF

Обслуживает получение нового запроса

## CONTENT

Доступ: protected

Обслуживает получение нового запроса

Параметры:
* bool - true если включена кадровая задержка


# ::stappler::xenolith::core::FrameEmitter::makeFrame(Rc<stappler::xenolith::core::FrameRequest>&&,bool)

## BRIEF

Создаёт объект кадра

## CONTENT

Доступ: protected

Создаёт объект кадра

Параметры:
* Rc<stappler::xenolith::core::FrameRequest>&&
* bool

Возвращает:
* Rc<stappler::xenolith::core::FrameHandle>

# ::stappler::xenolith::core::FrameEmitter::canStartFrame() const

## BRIEF

Проверяет, что кадр можно запустить

## CONTENT

Доступ: protected

Проверяет, что кадр можно запустить

Возвращает:
* bool

# ::stappler::xenolith::core::FrameEmitter::scheduleNextFrame(Rc<stappler::xenolith::core::FrameRequest>&&)

## BRIEF

Ставит на ожидание запрос на новый кадр

## CONTENT

Доступ: protected

Ставит на ожидание запрос на новый кадр

Параметры:
* Rc<stappler::xenolith::core::FrameRequest>&&


# ::stappler::xenolith::core::FrameEmitter::scheduleFrameTimeout()

## BRIEF

Ставит на ожидание запрос на новый кадр

## CONTENT

Доступ: protected

Ставит на ожидание запрос на новый кадр


# ::stappler::xenolith::core::FrameEmitter::_submitted

## BRIEF

Время отправки последнего кадра

## CONTENT

Доступ: protected

Время отправки последнего кадра

Тип: uint64_t


# ::stappler::xenolith::core::FrameEmitter::_order

## BRIEF

Номер текущего кадра

## CONTENT

Доступ: protected

Номер текущего кадра

Тип: uint64_t


# ::stappler::xenolith::core::FrameEmitter::_gen

## BRIEF

Поколение работы

## CONTENT

Доступ: protected

Поколение работы. Поколение отмечает число изменений запроса на кадр

Тип: uint64_t


# ::stappler::xenolith::core::FrameEmitter::_valid

## BRIEF

Флаг работоспособности

## CONTENT

Доступ: protected

Флаг работоспособности

Тип: bool


# ::stappler::xenolith::core::FrameEmitter::_frame

## BRIEF

Номера активных кадров

## CONTENT

Доступ: protected

Номера активных кадров

Тип: std::atomic<uint64_t>


# ::stappler::xenolith::core::FrameEmitter::_frameInterval

## BRIEF

Интервал кадра

## CONTENT

Доступ: protected

Интервал кадра

Тип: uint64_t


# ::stappler::xenolith::core::FrameEmitter::_suboptimal

## BRIEF

Время допустимости неоптимального режима отправки кадров

## CONTENT

Доступ: protected

Время допустимости неоптимального режима отправки кадров

Тип: uint64_t


# ::stappler::xenolith::core::FrameEmitter::_frameTimeoutPassed

## BRIEF

Флаг прошедшего интервала кадра

## CONTENT

Доступ: protected

Флаг прошедшего интервала кадра

Тип: bool


# ::stappler::xenolith::core::FrameEmitter::_nextFrameAcquired

## BRIEF

Запрошен ли новый кадр

## CONTENT

Доступ: protected

Запрошен ли новый кадр

Тип: bool


# ::stappler::xenolith::core::FrameEmitter::_onDemand

## BRIEF

Режим работы по требованию вместо потока по интервалу

## CONTENT

Доступ: protected

Режим работы по требованию вместо потока по интервалу

Тип: bool


# ::stappler::xenolith::core::FrameEmitter::_enableBarrier

## BRIEF

Флаг активности барьера на один кадр

## CONTENT

Доступ: protected

Флаг активности барьера на один кадр

Тип: bool


# ::stappler::xenolith::core::FrameEmitter::_nextFrameRequest

## BRIEF

Запрос на следующий кадр

## CONTENT

Доступ: protected

Запрос на следующий кадр

Тип: Rc<stappler::xenolith::core::FrameRequest>


# ::stappler::xenolith::core::FrameEmitter::_frames

## BRIEF

Текущие активные кадры

## CONTENT

Доступ: protected

Текущие активные кадры

Тип: std::deque<Rc<FrameHandle>>


# ::stappler::xenolith::core::FrameEmitter::_framesPending

## BRIEF

Ожидающие отправки кадры

## CONTENT

Доступ: protected

Ожидающие отправки кадры

Тип: std::deque<Rc<FrameHandle>>


# ::stappler::xenolith::core::FrameEmitter::_loop

## BRIEF

Графический цикл

## CONTENT

Доступ: protected

Графический цикл

Тип: Rc<stappler::xenolith::core::Loop>


# ::stappler::xenolith::core::FrameEmitter::_lastSubmit

## BRIEF

Время последней отправки

## CONTENT

Доступ: protected

Время последней отправки

Тип: uint64_t


# ::stappler::xenolith::core::FrameEmitter::_lastFrameTime

## BRIEF

Длительность посленего кадра

## CONTENT

Доступ: protected

Длительность посленего кадра

Тип: std::atomic<uint64_t>


# ::stappler::xenolith::core::FrameEmitter::_avgFrameTime

## BRIEF

Среднее время кадра

## CONTENT

Доступ: protected

Среднее время кадра

Тип: math::MovingAverage<20, uint64_t>


# ::stappler::xenolith::core::FrameEmitter::_avgFrameTimeValue

## BRIEF

Среднее время кадра

## CONTENT

Доступ: protected

Среднее время кадра

Тип: std::atomic<uint64_t>


# ::stappler::xenolith::core::FrameEmitter::_avgFenceInterval

## BRIEF

Среднее время по ожиданию устройства

## CONTENT

Доступ: protected

Среднее время по ожиданию устройства

Тип: math::MovingAverage<20, uint64_t>


# ::stappler::xenolith::core::FrameEmitter::_avgFenceIntervalValue

## BRIEF

Среднее время по ожиданию устройства

## CONTENT

Доступ: protected

Среднее время по ожиданию устройства

Тип: std::atomic<uint64_t>


# ::stappler::xenolith::core::FrameEmitter::_lastTotalFrameTime

## BRIEF

Последнее полное время кадра

## CONTENT

Доступ: protected

Последнее полное время кадра

Тип: uint64_t
