Title: XLDirector.h


# XENOLITH_SCENE_DIRECTOR_XLDIRECTOR_H_

## BRIEF

Заголовок типа режиссёра

## CONTENT

Заголовок типа режиссёра


# ::stappler::xenolith::Director

## BRIEF

Тип режиссёра

## CONTENT

Тип режиссёра. Режиссёр связывает окно со сценой.

Базовые классы:
* Ref


# ::stappler::xenolith::Director::FrameRequest

## BRIEF

Тип запроса на кадр

## CONTENT

Доступ: public

Тип запроса на кадр

# ::stappler::xenolith::Director::~Director()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор

# ::stappler::xenolith::Director::Director()

## BRIEF

Конструктор

## CONTENT

Доступ: public

Конструктор


# ::stappler::xenolith::Director::init(stappler::xenolith::Application*,core::FrameContraints const&,stappler::xenolith::View*)

## BRIEF

Создаёт режиссёра

## CONTENT

Доступ: public

Создаёт режиссёра

Параметры:
* stappler::xenolith::Application*
* core::FrameContraints const&
* stappler::xenolith::View*

Возвращает:
* bool

# ::stappler::xenolith::Director::runScene(Rc<stappler::xenolith::Scene>&&)

## BRIEF

Запускает сцену

## CONTENT

Доступ: public

Запускает сцену

Параметры:
* Rc<stappler::xenolith::Scene>&&


# ::stappler::xenolith::Director::acquireFrame(Rc<stappler::xenolith::Director::FrameRequest> const&)

## BRIEF

Запрашивает рисование кадра

## CONTENT

Доступ: public

Запрашивает рисование кадра

Параметры:
* Rc<stappler::xenolith::Director::FrameRequest> const&

Возвращает:
* bool

# ::stappler::xenolith::Director::update(uint64_t)

## BRIEF

Обновляет сцену, запускает действия и обновления по расписанию

## CONTENT

Доступ: public

Обновляет сцену, запускает действия и обновления по расписанию

Параметры:
* uint64_t


# ::stappler::xenolith::Director::end()

## BRIEF

Завершает работу режиссёра

## CONTENT

Доступ: public

Завершает работу режиссёра


# ::stappler::xenolith::Director::getApplication() const

## BRIEF

Возвращает приложение

## CONTENT

Доступ: public

Возвращает приложение

Возвращает:
* stappler::xenolith::Application*

# ::stappler::xenolith::Director::getGlLoop() const

## BRIEF

Возвращает графический цикл

## CONTENT

Доступ: public

Возвращает графический цикл

Возвращает:
* core::Loop*

# ::stappler::xenolith::Director::getView() const

## BRIEF

Возвращает виртуальное окно

## CONTENT

Доступ: public

Возвращает виртуальное окно

Возвращает:
* stappler::xenolith::View*

# ::stappler::xenolith::Director::getScheduler() const

## BRIEF

Возвращает объект расписания

## CONTENT

Доступ: public

Возвращает объект расписания

Возвращает:
* stappler::xenolith::Scheduler*

# ::stappler::xenolith::Director::getActionManager() const

## BRIEF

Возвращает объект управления действиями

## CONTENT

Доступ: public

Возвращает объект управления действиями

Возвращает:
* stappler::xenolith::ActionManager*

# ::stappler::xenolith::Director::getInputDispatcher() const

## BRIEF

Возвращает диспетчер ввода

## CONTENT

Доступ: public

Возвращает диспетчер ввода

Возвращает:
* stappler::xenolith::InputDispatcher*

# ::stappler::xenolith::Director::getTextInputManager() const

## BRIEF

Возвращает диспетчер текстового ввода

## CONTENT

Доступ: public

Возвращает диспетчер текстового ввода

Возвращает:
* stappler::xenolith::TextInputManager*

# ::stappler::xenolith::Director::getScene() const

## BRIEF

Возвращает текущую сцену

## CONTENT

Доступ: public

Возвращает текущую сцену

Возвращает:
* Rc<stappler::xenolith::Scene> const&

# ::stappler::xenolith::Director::getResourceCache() const

## BRIEF

Возвращает кеш ресурсов

## CONTENT

Доступ: public

Возвращает кеш ресурсов

Возвращает:
* Rc<stappler::xenolith::ResourceCache> const&

# ::stappler::xenolith::Director::getGeneralProjection() const

## BRIEF

Возвращает базовую матрицу проекции

## CONTENT

Доступ: public

Возвращает базовую матрицу проекции

Возвращает:
* const stappler::geom::Mat4&

# ::stappler::xenolith::Director::getFrameConstraints() const

## BRIEF

Возвращает текущие ограничения кадра

## CONTENT

Доступ: public

Возвращает текущие ограничения кадра

Возвращает:
* core::FrameContraints const&

# ::stappler::xenolith::Director::pushDrawStat(stappler::xenolith::DrawStat const&)

## BRIEF

Добавляет статистику рисования предыдущего кадра

## CONTENT

Доступ: public

Добавляет статистику рисования предыдущего кадра

Параметры:
* stappler::xenolith::DrawStat const&


# ::stappler::xenolith::Director::getDrawStat() const

## BRIEF

Возвращает статистику рисования последнего кадра

## CONTENT

Доступ: public

Возвращает статистику рисования последнего кадра

Возвращает:
* stappler::xenolith::DrawStat const&

# ::stappler::xenolith::Director::getFps() const

## BRIEF

Возвращает последнее значение кадров в секунду

## CONTENT

Доступ: public

Возвращает последнее значение кадров в секунду

Возвращает:
* float

# ::stappler::xenolith::Director::getAvgFps() const

## BRIEF

Возвращает среднее значение кадров в секунду

## CONTENT

Доступ: public

Возвращает среднее значение кадров в секунду

Возвращает:
* float

# ::stappler::xenolith::Director::getSpf() const

## BRIEF

Возвращает время выполнения последнего кадра

## CONTENT

Доступ: public

Возвращает время выполнения последнего кадра

Возвращает:
* float

# ::stappler::xenolith::Director::getLocalFrameTime() const

## BRIEF

Возвращает время обработки последнего кадра

## CONTENT

Доступ: public

Возвращает время обработки последнего кадра

Возвращает:
* float

# ::stappler::xenolith::Director::getDirectorFrameTime() const

## BRIEF

Возвращает время обработки директором последнего кадра

## CONTENT

Доступ: public

Возвращает время обработки директором последнего кадра

Возвращает:
* float

# ::stappler::xenolith::Director::autorelease(stappler::mem_std::Ref*)

## BRIEF

Добавляет объект для освобождения после обработки кадра

## CONTENT

Доступ: public

Добавляет объект для освобождения после обработки кадра

Параметры:
* stappler::mem_std::Ref*


# ::stappler::xenolith::Director::invalidate()

## BRIEF

Останавливает работу директора

## CONTENT

Доступ: protected

Останавливает работу директора


# ::stappler::xenolith::Director::updateGeneralTransform()

## BRIEF

Обновляет матрицу трансформации

## CONTENT

Доступ: protected

Обновляет матрицу трансформации


# ::stappler::xenolith::Director::hasActiveInteractions()

## BRIEF

Проверяет, есть ли активные взаимодействия, требующие постоянной обработки

## CONTENT

Доступ: protected

Проверяет, есть ли активные взаимодействия, требующие постоянной обработки

Возвращает:
* bool

# ::stappler::xenolith::Director::setFrameConstraints(core::FrameContraints const&)

## BRIEF

Устанавливает ограничения кадра

## CONTENT

Доступ: public

Устанавливает ограничения кадра

Параметры:
* core::FrameContraints const&

# ::stappler::xenolith::Director::_mainLoop

## BRIEF

Интерфейс основного цикла событий

## CONTENT

Доступ: protected

Интерфейс основного цикла событий

Тип: Rc<stappler::xenolith::Application>


# ::stappler::xenolith::Director::_view

## BRIEF

Виртуальное окно

## CONTENT

Доступ: protected

Виртуальное окно

Тип: stappler::xenolith::View*


# ::stappler::xenolith::Director::_constraints

## BRIEF

Ограничения кадра

## CONTENT

Доступ: protected

Ограничения кадра

Тип: core::FrameContraints


# ::stappler::xenolith::Director::_startTime

## BRIEF

Время начала работы директора

## CONTENT

Доступ: protected

Время начала работы директора

Тип: uint64_t


# ::stappler::xenolith::Director::_time

## BRIEF

Время последнего обновления

## CONTENT

Доступ: protected

Время последнего обновления

Тип: stappler::xenolith::UpdateTime


# ::stappler::xenolith::Director::_drawStat

## BRIEF

Статистика последнего кадра

## CONTENT

Доступ: protected

Статистика последнего кадра

Тип: stappler::xenolith::DrawStat


# ::stappler::xenolith::Director::_scene

## BRIEF

Текущая сцена

## CONTENT

Доступ: protected

Текущая сцена

Тип: Rc<stappler::xenolith::Scene>


# ::stappler::xenolith::Director::_nextScene

## BRIEF

Сцена для следующего кадра

## CONTENT

Доступ: protected

Сцена для следующего кадра

Тип: Rc<stappler::xenolith::Scene>


# ::stappler::xenolith::Director::_generalProjection

## BRIEF

Текущая проекция

## CONTENT

Доступ: protected

Текущая проекция

Тип: stappler::geom::Mat4


# ::stappler::xenolith::Director::_pool

## BRIEF

Пул памяти для кадра режиссёра

## CONTENT

Доступ: protected

Пул памяти для кадра режиссёра

Тип: Rc<stappler::xenolith::PoolRef>


# ::stappler::xenolith::Director::_scheduler

## BRIEF

Интерфейс расписания

## CONTENT

Доступ: protected

Интерфейс расписания

Тип: Rc<stappler::xenolith::Scheduler>


# ::stappler::xenolith::Director::_actionManager

## BRIEF

Интерфейс управления действиями

## CONTENT

Доступ: protected

Интерфейс управления действиями

Тип: Rc<stappler::xenolith::ActionManager>


# ::stappler::xenolith::Director::_inputDispatcher

## BRIEF

Диспетчер ввода

## CONTENT

Доступ: protected

Диспетчер ввода

Тип: Rc<stappler::xenolith::InputDispatcher>


# ::stappler::xenolith::Director::_autorelease

## BRIEF

Список объектов для освобождения после кадра

## CONTENT

Доступ: protected

Список объектов для освобождения после кадра

Тип: Vector<Rc<stappler::mem_std::Ref>>


# ::stappler::xenolith::Director::_avgFrameTime

## BRIEF

Среднее время кадра

## CONTENT

Доступ: protected

Среднее время кадра

Тип: math::MovingAverage<20, uint64_t>


# ::stappler::xenolith::Director::_avgFrameTimeValue

## BRIEF

Вычисленное значение среднего времени кадра

## CONTENT

Доступ: protected

Вычисленное значение среднего времени кадра

Тип: uint64_t
