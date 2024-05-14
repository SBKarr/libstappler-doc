Title: XLFrameInfo.h


# XENOLITH_SCENE_DIRECTOR_XLFRAMEINFO_H_

## BRIEF

Заголовок информации о текуем кадре

## CONTENT

Заголовок информации о текуем кадре


# ::stappler::xenolith::FrameInfo

## BRIEF

Тип информации о текущем кадре

## CONTENT

Тип информации о текущем кадре. Используется для обхода сцены и сбора информации для отрисовки.

# ::stappler::xenolith::FrameInfo::pool

## BRIEF

Временный пул памяти для кадра. Будет удалён при окончании сбора информации

## CONTENT

Временный пул памяти для кадра. Будет удалён при окончании сбора информации

Тип: Rc<stappler::xenolith::PoolRef>


# ::stappler::xenolith::FrameInfo::request

## BRIEF

Запрос на кадр

## CONTENT

Запрос на кадр

Тип: Rc<core::FrameRequest>


# ::stappler::xenolith::FrameInfo::director

## BRIEF

Режиссёр

## CONTENT

Режиссёр

Тип: Rc<stappler::xenolith::Director>


# ::stappler::xenolith::FrameInfo::scene

## BRIEF

Базовая сцена

## CONTENT

Базовая сцена

Тип: Rc<stappler::xenolith::Scene>


# ::stappler::xenolith::FrameInfo::input

## BRIEF

Хранилище для слушателей ввода

## CONTENT

Хранилище для слушателей ввода

Тип: Rc<stappler::xenolith::InputListenerStorage>


# ::stappler::xenolith::FrameInfo::zPath

## BRIEF

Текущийй путь упорядочивания по Z

## CONTENT

Текущийй путь упорядочивания по Z

Тип: memory::vector<ZOrder>


# ::stappler::xenolith::FrameInfo::viewProjectionStack

## BRIEF

Стек матриц проекции

## CONTENT

Стек матриц проекции. Матрица добавляется при изменении способа проецирования узлов.

Тип: memory::vector<Mat4>


# ::stappler::xenolith::FrameInfo::modelTransformStack

## BRIEF

Стек матриц трансформации

## CONTENT

Стек матриц трансформации. Матрица добавляется при изменении трансформации.

Тип: memory::vector<Mat4>


# ::stappler::xenolith::FrameInfo::depthStack

## BRIEF

Стек глубины

## CONTENT

Стек глубины

Тип: memory::vector<float>


# ::stappler::xenolith::FrameInfo::contextStack

## BRIEF

Стек контекстов

## CONTENT

Стек контекстов. Система может наполнять несколько контекстов из одной сцены.

Тип: memory::vector<Rc<FrameContextHandle>>


# ::stappler::xenolith::FrameInfo::componentsStack

## BRIEF

Стек компонентов по тегам

## CONTENT

Стек компонентов по тегам

Тип: memory::map<uint64_t, memory::vector<Rc<Component>>>


# ::stappler::xenolith::FrameInfo::resolvedInputs

## BRIEF

Заполненные входящие вложения очереди рендеринга

## CONTENT

Заполненные входящие вложения очереди рендеринга

Тип: memory::set<const core::AttachmentData *>


# ::stappler::xenolith::FrameInfo::focusValue

## BRIEF

Текуший максимум фокуса ввода

## CONTENT

Текуший максимум фокуса ввода

Тип: uint32_t


# ::stappler::xenolith::FrameInfo::currentContext

## BRIEF

Текущий активный интерфейс контекста

## CONTENT

Текущий активный интерфейс контекста

Тип: stappler::xenolith::FrameContextHandle*


# ::stappler::xenolith::FrameInfo::pushComponent(Rc<stappler::xenolith::Component> const&)

## BRIEF

Добавляет компонент на стек

## CONTENT

Добавляет компонент на стек

Параметры:
* Rc<stappler::xenolith::Component> const&

Возвращает:
* memory::vector<Rc<Component>>*

# ::stappler::xenolith::FrameInfo::popComponent(memory::vector<Rc<Component>>*)

## BRIEF

Убирает компонент со стека

## CONTENT

Убирает компонент со стека

Параметры:
* memory::vector<Rc<Component>>*


# ::stappler::xenolith::FrameInfo::getComponent<typename>(uint64_t) const

## BRIEF

Возвращает компонент на стеке по тегу

## CONTENT

Возвращает компонент на стеке по тегу

Параметры шаблона:
* typename T

Параметры:
* uint64_t

Возвращает:
* Rc<T>

# ::stappler::xenolith::FrameInfo::pushContext(stappler::xenolith::FrameContext*)

## BRIEF

Добавляет контекст на стек

## CONTENT

Добавляет контекст на стек

Параметры:
* stappler::xenolith::FrameContext*


# ::stappler::xenolith::FrameInfo::popContext()

## BRIEF

Убирает контекст со стека

## CONTENT

Убирает контекст со стека
