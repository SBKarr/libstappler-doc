Title: SPTess.h


# STAPPLER_TESS_SPTESS_H_

## BRIEF

Заголовок интерфейса тесселятора

## CONTENT

Заголовок интерфейса тесселятора


# ::stappler::geom::VerboseFlag

## BRIEF

Перечисление типов контроля вывода

## CONTENT

Перечисление типов контроля вывода

Значения:
* None - отключен
* General - базовая инфомрация
* Full - полная информация


# ::stappler::geom::Winding

## BRIEF

Перечисление способа определения поворотного индекса

## CONTENT

Перечисление способа определения поворотного индекса

Значения:
* EvenOdd - алгоритм even-odd
* NonZero - алгоритм nonzero
* Positive - учитывать только формы с положительным индексом
* Negative - учитывать только формы с отрицательным индексом
* AbsGeqTwo - учитывать только формы с модулем индекса больше 2


# ::stappler::geom::TessResult

## BRIEF

Структура для записи результата тесселяции

## CONTENT

Структура для записи результата тесселяции


# ::stappler::geom::TessResult::nvertexes

## BRIEF

Число вершин в результате

## CONTENT

Число вершин в результате

Тип: uint32_t


# ::stappler::geom::TessResult::nfaces

## BRIEF

Число форм (треугольников) в результате

## CONTENT

Число форм (треугольников) в результате

Тип: uint32_t


# ::stappler::geom::TessResult::target

## BRIEF

Непрозрачный указатель цели для передачи в функции записи

## CONTENT

Непрозрачный указатель цели для передачи в функции записи

Тип: void*


# ::stappler::geom::TessResult::pushVertex

## BRIEF

Функция записи верхины

## CONTENT

Функция записи верхины

Тип: void(*)(void*,uint32_t,stappler::geom::Vec2 const&,float)

Параметры:
* void* - непрозрачный указатель на цель
* uint32_t - индекс вершины
* stappler::geom::Vec2 const& - координаты вершины
* float - ранг (степень закраски) вершины, от 0.0 до 1.0


# ::stappler::geom::TessResult::pushTriangle

## BRIEF

Функция записи треугольника

## CONTENT

Функция записи треугольника

Тип: void(*)(void*,uint32_t[3])

* void* - непрозрачный указатель на цель
* uint32_t[3] - индексы вершин треугольника

# ::stappler::geom::Tesselator

## BRIEF

Тип тесселятора

## CONTENT

Тип тесселятора. Использует интерфейс пулов памяти для внутренних данных.

Конвертирует произвольные 2D-полигоны в набор треугольников, замощающих поверхность (то есть, без пересечений. Также, может обрабатывать границы для рисования обводок и антиалиасинга на основе вершин.

Базовые классы:
* RefBase<memory::StandartInterface>


# ::stappler::geom::Tesselator::Cursor

## BRIEF

Курсор для записи полигона для тесселяции

## CONTENT

Доступ: public

Курсор для записи полигона для тесселяции


# ::stappler::geom::Tesselator::Cursor::edge

## BRIEF

Текущая грань для записи

## CONTENT

Текущая грань для записи

Тип: stappler::geom::HalfEdge*


# ::stappler::geom::Tesselator::Cursor::root

## BRIEF

Исходная грань формы

## CONTENT

Исходная грань формы

Тип: stappler::geom::HalfEdge*


# ::stappler::geom::Tesselator::Cursor::count

## BRIEF

Число граней в форме

## CONTENT

Число граней в форме

Тип: uint32_t


# ::stappler::geom::Tesselator::Cursor::isClockwise

## BRIEF

Считать форму записываемой по часовой стрелке

## CONTENT

Тип: bool

Считать форму записываемой по часовой стрелке. false - против часовой.


# ::stappler::geom::Tesselator::Cursor::closed

## BRIEF

Закрыта ли форма

## CONTENT

Закрыта ли форма. True если закрыта (полигон), false если не закрыта (полилиния)

Тип: bool


# ::stappler::geom::Tesselator::Cursor::origin

## BRIEF

Исходная точка формы

## CONTENT

Исходная точка формы

Тип: stappler::geom::Vec2


# ::stappler::geom::Tesselator::~Tesselator()

## BRIEF

Деструктор, уничтожает внутренние объекты

## CONTENT

Доступ: public

Деструктор, уничтожает внутренние объекты


# ::stappler::geom::Tesselator::init(memory::pool_t*)

## BRIEF

Инициализирует тесселятор для работы с пулом памяти

## CONTENT

Доступ: public

Инициализирует тесселятор для работы с пулом памяти. Создаёт новый внутренний пул памяти из переданного.

Параметры:
* memory::pool_t*

Возвращает:
* bool - true при успешной инициализации


# ::stappler::geom::Tesselator::setAntialiasValue(float)

## BRIEF

Устанавливает значение для вершинного антиалиасинга

## CONTENT

Доступ: public

Устанавливает значение для вершинного антиалиасинга

Тесселятор может создавать тонкие границы вокруг поверхности, чтобы устранить эффект ступнчатости. Ширина границы должна быть в пределах половины экранного пикселя. Граница формируется с помощью дополнительных смещённых вершин с весом ниже 1.0. Вес означает предполагаемую прозрачность этой вершины для рисования.

Добавленные вершины не будут пересекать основные треугольники, не создают графических артефактов. Для этого исходные вершины могут быть смещены (см. `RelocateRule`).

Если значние больше 0.0 - антиалиасинг включен. Если 0.0 - выключен.

Параметры:
* float - значение антиалиасинга (0.0 - 1.0)


# ::stappler::geom::Tesselator::getAntialiasValue() const

## BRIEF

Возвращает текущее значение антиалиасинга

## CONTENT

Доступ: public

Возвращает текущее значение антиалиасинга

Возвращает:
* float

# ::stappler::geom::Tesselator::RelocateRule

## BRIEF

Правило смещения вершин для антиалиасинга

## CONTENT

Доступ: public

Правило смещения вершин для антиалиасинга. Смещение вершин используется для устранения графических артефактов и поддержания визуальной толщины объекта. Если смещение отключено, объект будет выглядеть толще, и на самопересечениях возможны артефакты.

Значения:
* Never - не смещает вершины, возможны артефакты, объект будет выглядеть толще
* Auto - смещает вершины только при самопересечениях и совмещениях (на вершинах с более чем двумя гранями), устраняет артефакты, но не увеличенную толщину. Режим по умолчанию.
* Always - смещает все вершины, устраняет артефакты и излишнюю толщину, однако, может вести к ошибкам тесселяции при большой плотности вершин
* Monotonize - смещает все вершины в два прохода. Устраняет излишнюю толщину, артефакты и не создаёт ошибок тесселяции, однако, снижает производительность примерно в два раза.


# ::stappler::geom::Tesselator::setRelocateRule(stappler::geom::Tesselator::RelocateRule)

## BRIEF

Устанавливает правило смещения вершин

## CONTENT

Доступ: public

Устанавливает правило смещения вершин

Параметры:
* stappler::geom::Tesselator::RelocateRule


# ::stappler::geom::Tesselator::getRelocateRule() const

## BRIEF

Возаращет правило смещения вершин

## CONTENT

Доступ: public

Возаращет правило смещения вершин

Возвращает:
* stappler::geom::Tesselator::RelocateRule

# ::stappler::geom::Tesselator::setWindingRule(stappler::geom::Winding)

## BRIEF

Устанавливает правило вычисления поворотнго индекса для вычисления объектов внутри граней

## CONTENT

Доступ: public

Устанавливает правило вычисления поворотнго индекса для вычисления объектов внутри граней

Параметры:
* stappler::geom::Winding


# ::stappler::geom::Tesselator::getWindingRule() const

## BRIEF

Возвращает правило вычисления поворотнго индекса

## CONTENT

Доступ: public

Возвращает правило вычисления поворотнго индекса

Возвращает:
* stappler::geom::Winding

# ::stappler::geom::Tesselator::preallocate(uint32_t)

## BRIEF

Предраспределяет внутренний буфер для указанного числа вершин

## CONTENT

Доступ: public

Предраспределяет внутренний буфер для указанного числа вершин. Может ускорить работу.

Параметры:
* uint32_t


# ::stappler::geom::Tesselator::beginContour(bool)

## BRIEF

Начинает запись контура, открывает курсор записи

## CONTENT

Доступ: public

Начинает запись контура, открывает курсор записи. Одноврменно можно открывать несколько курсоров.

Параметры:
* bool - true для записи по часовой стрелке, false - против часовой стрелки. false по умолчаню

Возвращает:
* stappler::geom::Tesselator::Cursor

# ::stappler::geom::Tesselator::pushVertex(stappler::geom::Tesselator::Cursor&,stappler::geom::Vec2 const&)

## BRIEF

Добавляет вершину в контур

## CONTENT

Доступ: public

Добавляет вершину в контур

Параметры:
* stappler::geom::Tesselator::Cursor&
* stappler::geom::Vec2 const& - координаты вершины

Возвращает:
* bool - true если вершина добавлена

# ::stappler::geom::Tesselator::pushStrokeVertex(stappler::geom::Tesselator::Cursor&,stappler::geom::Vec2 const&,stappler::geom::Vec2 const&)

## BRIEF

Добавляет вершину обводки

## CONTENT

Доступ: public

Добавляет вершину обводки. Обводка строится вокруг линии через добавление двух вершин сверху и снизу от исходной. Вершины создаются через сумму и разность со смещением.

Параметры:
* stappler::geom::Tesselator::Cursor&
* stappler::geom::Vec2 const& - исходная вершина
* stappler::geom::Vec2 const& - смещение для создания обводки

Возвращает:
* bool - true если вершина добавлена

# ::stappler::geom::Tesselator::pushStrokeTop(stappler::geom::Tesselator::Cursor&,stappler::geom::Vec2 const&)

## BRIEF

Добавляет вершину в верхнюю линию обводки

## CONTENT

Доступ: public

Добавляет вершину в верхнюю линию обводки. Используется для создания сглаженных углов обводки.

Параметры:
* stappler::geom::Tesselator::Cursor&
* stappler::geom::Vec2 const& - добавляемая верщина

Возвращает:
* bool - true если вершина добавлена

# ::stappler::geom::Tesselator::pushStrokeBottom(stappler::geom::Tesselator::Cursor&,stappler::geom::Vec2 const&)

## BRIEF

Добавляет вершину в нижнюю линию обводки

## CONTENT

Доступ: public

Добавляет вершину в нижнюю линию обводки. Используется для создания сглаженных углов обводки.

Параметры:
* stappler::geom::Tesselator::Cursor&
* stappler::geom::Vec2 const& - добавляемая верщина

Возвращает:
* bool - true если вершина добавлена

# ::stappler::geom::Tesselator::closeContour(stappler::geom::Tesselator::Cursor&)

## BRIEF

Завершает запись контура

## CONTENT

Доступ: public

Завершает запись контура

Параметры:
* stappler::geom::Tesselator::Cursor&

Возвращает:
* bool - true если запись успешна

# ::stappler::geom::Tesselator::closeStrokeContour(stappler::geom::Tesselator::Cursor&)

## BRIEF

Завершает запись обводки

## CONTENT

Доступ: public

Завершает запись обводки

Параметры:
* stappler::geom::Tesselator::Cursor&

Возвращает:
* bool - true если запись успешна

# ::stappler::geom::Tesselator::prepare(stappler::geom::TessResult&)

## BRIEF

Выполняет первую фазу тесселяции для результата

## CONTENT

Доступ: public

Выполняет первую фазу тесселяции для результата. Вычисляет число вершин и треугольников в тесселяции, и их потенциальное размещение в буфере.

Использование двухфазного выполнения позволяет совместить несколько результатов тесселяции в одном буфере. Для этого необходимо сперва выполнить `prepare` для всех тесселяций, вычислить размер необходимого буфера, затем вызвать `write` для всех тесселяций с учётом смещений внутри буферов.

Параметры:
* stappler::geom::TessResult&

Возвращает:
* bool - true если тесселяция успешна

# ::stappler::geom::Tesselator::write(stappler::geom::TessResult&)

## BRIEF

Выполняет запись тесселяции в результат

## CONTENT

Доступ: public

Выполняет запись тесселяции в результат. Вызывает функцию записи для ранее расчитанной тесселяции. Записывает вершины и индексы треугольников.

Параметры:
* stappler::geom::TessResult&

Возвращает:
* bool - true если запись успешна

# ::stappler::geom::Tesselator::_data

## BRIEF

Внутренние данные тесселяции

## CONTENT

Доступ: protected

Внутренние данные тесселяции

Тип: stappler::geom::Tesselator::Data*
