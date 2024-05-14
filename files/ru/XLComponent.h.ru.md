Title: XLComponent.h


# XENOLITH_SCENE_NODES_XLCOMPONENT_H_

## BRIEF

Заголовок компонента узла

## CONTENT

Заголовок компонента узла


# ::stappler::xenolith::Component

## BRIEF

Тип компонента узла

## CONTENT

Тип компонента узла

Базовые классы:
* Ref


# ::stappler::xenolith::Component::GetNextComponentId()

## BRIEF

Возвращает следующий доступный идентификатор компонента

## CONTENT

Доступ: public

Возвращает следующий доступный идентификатор компонента

Возвращает:
* uint64_t

# ::stappler::xenolith::Component::Component()

## BRIEF

Конструктор

## CONTENT

Доступ: public

Конструктор


# ::stappler::xenolith::Component::~Component()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор

# ::stappler::xenolith::Component::init()

## BRIEF

Создаёт компонент

## CONTENT

Доступ: public

Создаёт компонент

Возвращает:
* bool

# ::stappler::xenolith::Component::onAdded(stappler::xenolith::Node*)

## BRIEF

Обрабатывает добавление компонента в узел

## CONTENT

Доступ: public

Обрабатывает добавление компонента в узел

Параметры:
* stappler::xenolith::Node*


# ::stappler::xenolith::Component::onRemoved()

## BRIEF

Обрабатывает удаление компонента из узла

## CONTENT

Доступ: public

Обрабатывает удаление компонента из узла


# ::stappler::xenolith::Component::onEnter(stappler::xenolith::Scene*)

## BRIEF

Обрабатывает добавление узла на сцену

## CONTENT

Доступ: public

Обрабатывает добавление узла на сцену

Параметры:
* stappler::xenolith::Scene*


# ::stappler::xenolith::Component::onExit()

## BRIEF

Обрабатывает удаление узла со сцены

## CONTENT

Доступ: public

Обрабатывает удаление узла со сцены


# ::stappler::xenolith::Component::visit(stappler::xenolith::FrameInfo&,stappler::xenolith::NodeFlags)

## BRIEF

Обрабатывает посещение узла для отрисовки

## CONTENT

Доступ: public

Обрабатывает посещение узла для отрисовки

Параметры:
* stappler::xenolith::FrameInfo&
* stappler::xenolith::NodeFlags


# ::stappler::xenolith::Component::update(stappler::xenolith::UpdateTime const&)

## BRIEF

Обрабатывает обновление по таймеру

## CONTENT

Доступ: public

Обрабатывает обновление по таймеру

Параметры:
* stappler::xenolith::UpdateTime const&


# ::stappler::xenolith::Component::onContentSizeDirty()

## BRIEF

Обрабатывает изменнеие размера узла

## CONTENT

Доступ: public

Обрабатывает изменнеие размера узла


# ::stappler::xenolith::Component::onTransformDirty(const stappler::geom::Mat4&)

## BRIEF

Обрабатывает изменнеие трансформации узла

## CONTENT

Доступ: public

Обрабатывает изменнеие трансформации узла

Параметры:
* const stappler::geom::Mat4&


# ::stappler::xenolith::Component::onReorderChildDirty()

## BRIEF

Обрабатывает изменнеие порядка вложенных узлов

## CONTENT

Доступ: public

Обрабатывает изменнеие порядка вложенных узлов


# ::stappler::xenolith::Component::isRunning() const

## BRIEF

Проверяет, запущен ли компонент на сцене

## CONTENT

Доступ: public

Проверяет, запущен ли компонент на сцене

Возвращает:
* bool

# ::stappler::xenolith::Component::isEnabled() const

## BRIEF

Проверяет, включен ли компонент

## CONTENT

Доступ: public

Проверяет, включен ли компонент

Возвращает:
* bool

# ::stappler::xenolith::Component::setEnabled(bool)

## BRIEF

Включает и выключает компонент

## CONTENT

Доступ: public

Включает и выключает компонент

Параметры:
* bool


# ::stappler::xenolith::Component::scheduleUpdate()

## BRIEF

Подключает обновления компонента

## CONTENT

Доступ: public

Подключает обновления компонента


# ::stappler::xenolith::Component::unscheduleUpdate()

## BRIEF

Отключает обновление компонента

## CONTENT

Доступ: public

Отключает обновление компонента


# ::stappler::xenolith::Component::getOwner() const

## BRIEF

Возвращает владельца компонента

## CONTENT

Доступ: public

Возвращает владельца компонента

Возвращает:
* stappler::xenolith::Node*

# ::stappler::xenolith::Component::setFrameTag(uint64_t)

## BRIEF

Устанавливает тег компонента

## CONTENT

Доступ: public

Устанавливает тег компонента

Параметры:
* uint64_t


# ::stappler::xenolith::Component::getFrameTag() const

## BRIEF

Возвращает тег компонента

## CONTENT

Доступ: public

Возвращает тег компонента

Возвращает:
* uint64_t

# ::stappler::xenolith::Component::_owner

## BRIEF

Владелец компонента

## CONTENT

Доступ: protected

Владелец компонента

Тип: stappler::xenolith::Node*


# ::stappler::xenolith::Component::_enabled

## BRIEF

Флаг включения компонента

## CONTENT

Доступ: protected

Флаг включения компонента

Тип: bool


# ::stappler::xenolith::Component::_running

## BRIEF

Флаг запуска компонента

## CONTENT

Доступ: protected

Флаг запуска компонента

Тип: bool


# ::stappler::xenolith::Component::_scheduled

## BRIEF

Флаг подключения обновлений

## CONTENT

Доступ: protected

Флаг подключения обновлений

Тип: bool


# ::stappler::xenolith::Component::_frameTag

## BRIEF

Тег компонента

## CONTENT

Доступ: protected

Тег компонента

Тип: uint64_t


# ::stappler::xenolith::Component::isScheduled() const

## BRIEF

Проверяет, подключены ли обновления

## CONTENT

Доступ: public

Проверяет, подключены ли обновления

Возвращает:
* bool