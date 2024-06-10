Title: Построение сцены

# Построение сцены

Концепция режиссёра (`Director`) и сцены (`Scene`) - основная для создания графического приложения. Определено в модуле `xenolith_scene`.

Режиссёр создаётся при создании окна автоматически, а сцену для него необходимо создать явно при загрузке окна:

```cpp
.onCreated = [this] (xenolith::View &view, const core::FrameContraints &constraints) {
	auto scene = createSceneForView(static_cast<View &>(view), constraints);
	view.getDirector()->runScene(move(scene));
},
```

Сцена однозначно связана с очередью отрисовки, отвечающей за создание графического контента для неё. Проектирование очереди для сцены - сложная задача, потому рассмотрим работу с использованием стандартного двумерного рендерера `xenolith_renderer_basic2d` и `xenolith_renderer_material2d`. Это класс сцены `basic2d::Scene2d`.

## Узел сцены

Система узлов основана на концепции, аналогичной проекту cocox2d-x. Большая часть концепций общие, однако, Xenolith использует двойной обход узлов и более активно использует событийную модель.

Базовый класс `Node` (`XLNode.h`).

Основные параметры узла:
* `LocalZOrder` - локальный порядок отрисовки
* `Position` - положение внутри родительского узла
* `ContentSize` - размер в координатах родительского узла
* `AnchorPoint` - точка привязки в барицентрических координатах (относительных координатах)
* `Scale` - модификатор размера
* `Skew` - наклон узла
* `Rotation` - поворот узла
* `Transform` - матрица трансформации из родительского узла в текущий (хранит другие параметры)
* `Visible` - флаг видимости узла (и всех вложенных)
* `Color` - цвет
* `Opacity` - прозрачность

Реальные объекты перегружают функции `Node`:
* `onEnter` - вызывается при добавлении на сцену
* `onExit` - вызывается при удалении со сцены
* `onContentSizeDirty` - вызывается для обновления содержимого при обновлении размера
* `onTransformDirty` - вызывается при изменении трансформации от родителя к себе
* `onGlobalTransformDirty` - вызывается при изменении всей цепочки трансформации
* `onReorderChildDirty` - вызывается при изменении порядка вложенных нодов (в том числе, при их добавлении и удалении)
* `visitGeometry` - вызывается при первом проходе рендеринга, на этом этапе можно изменять геометрию родителя на основе вложенных нодов
* `visitDraw` - вызывается при втором обходе сцены, для добавления команд отрисовки

Тип `DynamicStateNode` реализует переключение состояний графического пайплайна для вложенных узлов. На текущий момент это касается только обрезки.

Сцена всегда является начальным узлом графа узлов. Тип `SceneContent` представляет узел, практически всегда вложенный напрямую в сцену, и реализующий интерфейс сбора команд для отрисовки, которые будут оправлены в определённых проход очереди (см. `basic2d::SceneContent2d`).

Примерами реализации узлов могут служить все узлы, реализованные в модулях `xenolith_renderer_basic2d` и `xenolith_renderer_material2d`.

## Компоненты

Компонент (`xenolith::Component`) - способ расширить функции узла. Компонент реализуется на основе базового класса и добавляется в узел. Функции для перегрузки аналогичны `Node`:
* `onEnter` - вызывается при добавлении на сцену
* `onExit` - вызывается при удалении со сцены
* `onContentSizeDirty` - вызывается для обновления содержимого при обновлении размера
* `onTransformDirty` - вызывается при изменении трансформации от родителя к себе
* `onReorderChildDirty` - вызывается при изменении порядка вложенных нодов (в том числе, при их добавлении и удалении)
* `visit` - вызывается при обходе сцены, для добавления команд отрисовки

## Ввод данных

Для отслеживания ввода используется тип `InputListener`. Пример использования:

```cpp
bool Button::init(const SurfaceStyle &style) {
	// ...

	_inputListener = addInputListener(Rc<InputListener>::create());
	_inputListener->addMouseOverRecognizer([this] (const GestureData &data) {
		// ...
		return true;
	});

	_inputListener->addPressRecognizer([this] (const GesturePress &press) {
		// ...
		return true;
	}, LongPressInterval);

	_inputListener->addTapRecognizer([this] (const GestureTap &tap) {
		// ...
		return true;
	});

	// ...
}
```

Распознаваемые события:

```cpp
// нажатия сенсора или указателя без разбора (ручной разбор событий нажатия)
GestureRecognizer *addTouchRecognizer(InputCallback<GestureData> &&, ButtonMask && = makeButtonMask({InputMouseButton::Touch}));

// Локальные нажатия (в том числе множественные) на конкретную точку
GestureRecognizer *addTapRecognizer(InputCallback<GestureTap> &&, ButtonMask && = makeButtonMask({InputMouseButton::Touch}),
	uint32_t maxTapCount = 2);

// Длительные нажатия на конкретную точку
GestureRecognizer *addPressRecognizer(InputCallback<GesturePress> &&, TimeInterval interval = TapIntervalAllowed,
		bool continuous = false, ButtonMask && = makeButtonMask({InputMouseButton::Touch}));

// Зажатие с движением
GestureRecognizer *addSwipeRecognizer(InputCallback<GestureSwipe> &&, float threshold = TapDistanceAllowed, bool sendThreshold = false,
		ButtonMask && = makeButtonMask({InputMouseButton::Touch}));

// Щипковый двухпальцевый жест
GestureRecognizer *addPinchRecognizer(InputCallback<GesturePinch> &&, ButtonMask && = makeButtonMask({InputMouseButton::Touch}));

// Жест прокрутки или колесо мыши
GestureRecognizer *addScrollRecognizer(InputCallback<GestureScroll> &&);

// Движение указателя
GestureRecognizer *addMoveRecognizer(InputCallback<GestureData> &&, bool withinNode = true);

// Отслеживание указателя над элементом
GestureRecognizer *addMouseOverRecognizer(InputCallback<GestureData> &&, float padding = 0.0f);

// Нажатие клавиш
GestureKeyRecognizer *addKeyRecognizer(InputCallback<GestureData> &&, KeyMask && = KeyMask());
```

Входящие события имеют состояния:
* `Began` - начало события
* `Activated` - выполнение события
* `Ended` - завершение события
* `Cancelled` - аварийное завершение события

Событие типа `Tap` получает только `Activated`.

## Действия

Действия - основной способ контроля анимаций внутри узлов (`XLAction.h`).

Ряд действий выполняется мгновенно:
* `Show`
* `Hide`
* `ToggleVisibility`
* `RemoveSelf`
* `Place`
* `CallFunc`

Другие выполняются за определённый срок (определяется, обычно, первым параметром:
* `DelayTime`
* `TintTo`
* `ActionProgress`
* `MoveTo`
* `ScaleTo`
* `ResizeTo`
* `FadeTo`

Действия запускаются функцией узла `runAction`.

Для выстраивания последовательности действий используется класс `Sequence`:

```cpp
auto seq = Rc<Sequence>::create(
	Rc<MoveTo>::create(0.5f, Vec2::ZERO),
	1.0f, // создаёт DelayTime
	[] ( } // создаёт CallFunc
);
```

Для запуска нескольких действий одновременно `Spawn`:

```cpp
auto spawn = Rc<Spawn>::create(
	Rc<MoveTo>::create(0.5f, Vec2::ZERO),
	Rc<Sequence>::create(1.0f, 	[] ( })
);
```

Для повторения действия несколько раз `Repeat`. Для повторения до отмены `RepeatForewer`.

Действие `Speed` ускоряет или замедляет другое действие.

Группа действий `AnctionEase` изменяет кривую прогресса действия, не изменяя его длительность. Определён ряд встроенных функций искажения, аналогичных определению в HTML:
* Ease
* Sine
* Quad
* Cubic
* Quart
* Quint
* Expo
* Circ
* Elastic
* Back
* Bounce

Также, `EaseBezierAction` изменяет кривую исполнения вдоль заданной кривой Безье.

`ActionProgress` определяет шаблон для создания действия с помощью функций обратного вызова. По умолчанию, прогресс интерполируется от 0.0 до 1.0, но это можно изменить параметрами для удобства использования.