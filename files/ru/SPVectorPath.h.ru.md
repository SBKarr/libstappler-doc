Title: SPVectorPath.h


# CORE_VG_SPVECTORPATH_H_

## BRIEF

Заголовок структуры векторного пути для вектоных изображений

## CONTENT

Заголовок структуры векторного пути для вектоных изображений


# ::stappler::vg::Interface

## BRIEF

Используемый для векторной графики интерфейс памяти

## CONTENT

Используемый для векторной графики интерфейс памяти - стандартный интерфейс памяти

# ::stappler::vg::PathXRef

## BRIEF

Струкутра именованой ссылки на векторый путь

## CONTENT

Струкутра именованой ссылки на векторый путь


# ::stappler::vg::PathXRef::id

## BRIEF

Идентификатор пути

## CONTENT

Идентификатор пути

Тип: Interface::StringType


# ::stappler::vg::PathXRef::cacheId

## BRIEF

Идентифкатор для кеширования объекта

## CONTENT

Тип: Interface::StringType

Идентифкатор для кеширования объекта. Кеширование требут уникального имени пути для всей системы. Кеширование позволяет повторно использовать результаты тесселяции как в рамках одной сессии, так и между сессиями приложения, если данные кеша сохраняются в файл. Кеширование учитывает размер изображения, трансформацию и степень точности при сохранении кеш, но изображения с разными парметрами цвета кешируются совместно.

# ::stappler::vg::PathXRef::mat

## BRIEF

Дополниетльная матрица трансформации для ссылки

## CONTENT

Дополниетльная матрица трансформации для ссылки

Тип: stappler::geom::Mat4


# ::stappler::vg::VectorPath

## BRIEF

Структура векторного пути

## CONTENT

Структура векторного пути. Структура основана на правилах SVG для тега path.

Путь состоит из набора команд, которые образуют один или несколько контуров. Контуры могут быть замкнуты или нет. При заливке контуры всегда считаются замкнутыми.

Запись пути производится через команды. Новая команда добавляется в конец списка, продолжая имеющийся контур или начиная новый.

Также, путь хранит дополниетльную информацию о цвете, способе отрисовки и матрицу трансформации.

Базовые классы:
* RefBase<Interface>


# ::stappler::vg::VectorPath::DrawStyle

## BRIEF

Тип способа рисования

## CONTENT

Доступ: public

Тип способа рисования


# ::stappler::vg::VectorPath::Winding

## BRIEF

Тип способа заливки

## CONTENT

Доступ: public

Тип способа заливки


# ::stappler::vg::VectorPath::LineCup

## BRIEF

Тип завершающего маркера для обводки

## CONTENT

Доступ: public

Тип завершающего маркера для обводки


# ::stappler::vg::VectorPath::LineJoin

## BRIEF

Тип для соединения линий обводки

## CONTENT

Доступ: public

Тип для соединения линий обводки

# ::stappler::vg::VectorPath::VectorPath()

## BRIEF

Конструтор пустого векторного пути

## CONTENT

Доступ: public

Конструтор пустого векторного пути


# ::stappler::vg::VectorPath::VectorPath(size_t)

## BRIEF

Конструктор векторного пути с преаллокацией данных для некоторого числа команд

## CONTENT

Доступ: public

Конструктор векторного пути с преаллокацией данных для некоторого числа команд

Параметры:
* size_t - ожидаемое число команд


# ::stappler::vg::VectorPath::VectorPath(stappler::vg::VectorPath const&)

## BRIEF

Конструктор копирования

## CONTENT

Доступ: public

Конструктор копирования

Параметры:
* stappler::vg::VectorPath const&


# ::stappler::vg::VectorPath::operator=(stappler::vg::VectorPath const&)

## BRIEF

Оператор копирования

## CONTENT

Доступ: public

Оператор копирования

Параметры:
* stappler::vg::VectorPath const&

Возвращает:
* stappler::vg::VectorPath&

# ::stappler::vg::VectorPath::VectorPath(stappler::vg::VectorPath&&)

## BRIEF

Конструктор перемещения

## CONTENT

Доступ: public

Конструктор перемещения

Параметры:
* stappler::vg::VectorPath&&


# ::stappler::vg::VectorPath::operator=(stappler::vg::VectorPath&&)

## BRIEF

Оператор перемещения

## CONTENT

Доступ: public

Оператор перемещения

Параметры:
* stappler::vg::VectorPath&&

Возвращает:
* stappler::vg::VectorPath&

# ::stappler::vg::VectorPath::init()

## BRIEF

Инициализирует пустой путь

## CONTENT

Доступ: public

Инициализирует пустой путь

Возвращает:
* bool - true при успешной инициализации

# ::stappler::vg::VectorPath::init(stappler::StringView)

## BRIEF

Инициализирует путь из строки тега path в SVG

## CONTENT

Доступ: public

Инициализирует путь из строки тега path в SVG

Параметры:
* stappler::StringView const&

Возвращает:
* bool - true при успешной инициализации

# ::stappler::vg::VectorPath::init(stappler::FilePath&&)

## BRIEF

Инициализирует путь из файла SVG, содержащего одиночный путь

## CONTENT

Доступ: public

Инициализирует путь из файла SVG, содержащего одиночный путь

Параметры:
* stappler::FilePath&&

Возвращает:
* bool - true при успешной инициализации

# ::stappler::vg::VectorPath::init(stappler::BytesView)

## BRIEF

Инициализирует путь из данных, ранее сохранённых с помощью `encode`

## CONTENT

Доступ: public

Инициализирует путь из данных, ранее сохранённых с помощью `encode`. Формат не хранит параметры пути, только команды.

Параметры:
* stappler::BytesView

Возвращает:
* bool - true при успешной инициализации

# ::stappler::vg::VectorPath::init(PathData<memory::StandartInterface> const&)

## BRIEF

Создаёт путь из предопределённых данных пути

## CONTENT

Доступ: public

Создаёт путь из предопределённых данных пути

Параметры:
* PathData<memory::StandartInterface> const&

Возвращает:
* bool

# ::stappler::vg::VectorPath::init(PathData<memory::PoolInterface> const&)

## BRIEF

Создаёт путь из предопределённых данных пути

## CONTENT

Доступ: public

Создаёт путь из предопределённых данных пути

Параметры:
* PathData<memory::PoolInterface> const&

Возвращает:
* bool

# ::stappler::vg::VectorPath::openForWriting(Callback<void (stappler::vg::PathWriter &)> const&)

## BRIEF

Открывает путь на запись, передаёт в функтор интерфейс записи

## CONTENT

Доступ: public

Открывает путь на запись, передаёт в функтор интерфейс записи

Параметры:
* Callback<void (stappler::vg::PathWriter &)> const&

Возвращает:
* stappler::vg::VectorPath&

# ::stappler::vg::VectorPath::setParams(stappler::vg::PathParams const&)

## BRIEF

Устанавливает графические параметры пути

## CONTENT

Доступ: public

Устанавливает графические параметры пути

Параметры:
* stappler::vg::PathParams const&

Возвращает:
* stappler::vg::VectorPath&

# ::stappler::vg::VectorPath::addPath(stappler::vg::VectorPath const&)

## BRIEF

Добавляет команды из другого пути к текущему в виде новых контуров

## CONTENT

Доступ: public

Добавляет команды из другого пути к текущему в виде новых контуров

Параметры:
* stappler::vg::VectorPath const&

Возвращает:
* stappler::vg::VectorPath&

# ::stappler::vg::VectorPath::addPath(stappler::BytesView)

## BRIEF

Добавляет команды из другого пути к текущему в виде новых контуров

## CONTENT

Доступ: public

Добавляет команды из другого пути к текущему в виде новых контуров. Путь читается из внутреннего формата кодирования функции `encode`.

Параметры:
* stappler::BytesView

Возвращает:
* stappler::vg::VectorPath&

# ::stappler::vg::VectorPath::addPath(stappler::StringView)

## BRIEF

Добавляет команды из другого пути к текущему в виде новых контуров

## CONTENT

Доступ: public

Добавляет команды из другого пути к текущему в виде новых контуров. Путь читается из строки для SVG-тега `path`.

Параметры:
* stappler::StringView

Возвращает:
* stappler::vg::VectorPath&

# ::stappler::vg::VectorPath::count() const

## BRIEF

Возвращает число команд в пути

## CONTENT

Доступ: public

Возвращает число команд в пути

Возвращает:
* size_t

# ::stappler::vg::VectorPath::setFillColor(stappler::geom::Color4B const&)

## BRIEF

Устанавливает цвет заливки

## CONTENT

Доступ: public

Устанавливает цвет заливки

Параметры:
* stappler::geom::Color4B const&

Возвращает:
* stappler::vg::VectorPath&

# ::stappler::vg::VectorPath::setFillColor(stappler::geom::Color3B const&,bool)

## BRIEF

Устанавливает цвет заливки с возмонжостью сохранить прозрачность

## CONTENT

Доступ: public

Устанавливает цвет заливки с возмонжостью сохранить прозрачность

Параметры:
* stappler::geom::Color3B const&
* bool - true если нужно сохранить прозрачность

Возвращает:
* stappler::vg::VectorPath&

# ::stappler::vg::VectorPath::setFillColor(stappler::geom::Color const&,bool)

## BRIEF

Устанавливает цвет заливки с возмонжостью сохранить прозрачность

## CONTENT

Доступ: public

Устанавливает цвет заливки с возмонжостью сохранить прозрачность

Доступ: public

Параметры:
* stappler::geom::Color const&
* bool - true если нужно сохранить прозрачность

Возвращает:
* stappler::vg::VectorPath&

# ::stappler::vg::VectorPath::getFillColor() const

## BRIEF

Возвращает цвет заливки

## CONTENT

Доступ: public

Возвращает цвет заливки

Возвращает:
* stappler::geom::Color4B const&

# ::stappler::vg::VectorPath::setStrokeColor(stappler::geom::Color4B const&)

## BRIEF

Устанавливает цвет обводки

## CONTENT

Доступ: public

Устанавливает цвет обводки

Параметры:
* stappler::geom::Color4B const&

Возвращает:
* stappler::vg::VectorPath&

# ::stappler::vg::VectorPath::setStrokeColor(stappler::geom::Color3B const&,bool)

## BRIEF

Устанавливает цвет обводки с возмонжостью сохранить прозрачность

## CONTENT

Доступ: public

Устанавливает цвет обводки с возмонжостью сохранить прозрачность

Параметры:
* stappler::geom::Color3B const&
* bool - true если нужно сохранить прозрачность

Возвращает:
* stappler::vg::VectorPath&

# ::stappler::vg::VectorPath::setStrokeColor(stappler::geom::Color const&,bool)

## BRIEF

Устанавливает цвет обводки с возмонжостью сохранить прозрачность

## CONTENT

Доступ: public

Устанавливает цвет обводки с возмонжостью сохранить прозрачность

Параметры:
* stappler::geom::Color const&
* bool - true если нужно сохранить прозрачность

Возвращает:
* stappler::vg::VectorPath&

# ::stappler::vg::VectorPath::getStrokeColor() const

## BRIEF

Возвращает цвет обводки

## CONTENT

Доступ: public

Возвращает цвет обводки

Возвращает:
* stappler::geom::Color4B const&

# ::stappler::vg::VectorPath::setFillOpacity(uint8_t)

## BRIEF

Устанавливает прозрачность заливки

## CONTENT

Доступ: public

Устанавливает прозрачность заливки

Параметры:
* uint8_t

Возвращает:
* stappler::vg::VectorPath&

# ::stappler::vg::VectorPath::getFillOpacity() const

## BRIEF

Возвращает прозрачность заливки

## CONTENT

Доступ: public

Возвращает прозрачность заливки

Возвращает:
* uint8_t

# ::stappler::vg::VectorPath::setStrokeOpacity(uint8_t)

## BRIEF

Устанавливает прозрачность обводки

## CONTENT

Доступ: public

Устанавливает прозрачность обводки

Параметры:
* uint8_t

Возвращает:
* stappler::vg::VectorPath&

# ::stappler::vg::VectorPath::getStrokeOpacity() const

## BRIEF

Возвращает прозрачность обводки

## CONTENT

Доступ: public

Возвращает прозрачность обводки

Возвращает:
* uint8_t

# ::stappler::vg::VectorPath::setStrokeWidth(float)

## BRIEF

Устанавливает ширину обводки

## CONTENT

Доступ: public

Устанавливает ширину обводки

Параметры:
* float

Возвращает:
* stappler::vg::VectorPath&

# ::stappler::vg::VectorPath::getStrokeWidth() const

## BRIEF

Возвращает ширину обводки

## CONTENT

Доступ: public

Устанавливает ширину обводки

Возвращает:
* float

# ::stappler::vg::VectorPath::setWindingRule(stappler::vg::VectorPath::Winding)

## BRIEF

Устанавливает правило заливки

## CONTENT

Доступ: public

Устанавливает правило заливки

Параметры:
* stappler::vg::VectorPath::Winding

Возвращает:
* stappler::vg::VectorPath&

# ::stappler::vg::VectorPath::getWindingRule() const

## BRIEF

Возвращает правило заливки

## CONTENT

Доступ: public

Возвращает правило заливки

Возвращает:
* Winding

# ::stappler::vg::VectorPath::setLineCup(stappler::vg::VectorPath::LineCup)

## BRIEF

Устанавливает маркеры завершения обводки

## CONTENT

Доступ: public

Устанавливает маркеры завершения обводки

Параметры:
* stappler::vg::VectorPath::LineCup

Возвращает:
* stappler::vg::VectorPath&

# ::stappler::vg::VectorPath::getLineCup() const

## BRIEF

Возвращает маркеры завершения обводки

## CONTENT

Доступ: public

Возвращает маркеры завершения обводки

Возвращает:
* LineCup

# ::stappler::vg::VectorPath::setLineJoin(stappler::vg::VectorPath::LineJoin)

## BRIEF

Устанавливает маркеры соединения линий обводки

## CONTENT

Доступ: public

Устанавливает маркеры соединения линий обводки

Параметры:
* stappler::vg::VectorPath::LineJoin

Возвращает:
* stappler::vg::VectorPath&

# ::stappler::vg::VectorPath::getLineJoin() const

## BRIEF

Возвращает маркеры соединения линий обводки

## CONTENT

Доступ: public

Возвращает маркеры соединения линий обводки

Возвращает:
* LineJoin

# ::stappler::vg::VectorPath::setMiterLimit(float)

## BRIEF

Устанавливает предел угла для обводки

## CONTENT

Доступ: public

Устанавливает предел угла для обводки

Параметры:
* float

Возвращает:
* stappler::vg::VectorPath&

# ::stappler::vg::VectorPath::getMiterLimit() const

## BRIEF

Возвращает предел угла для обводки

## CONTENT

Доступ: public

Возвращает предел угла для обводки

Возвращает:
* float

# ::stappler::vg::VectorPath::setStyle(stappler::vg::VectorPath::DrawStyle)

## BRIEF

Устанавливает способ отрисовки

## CONTENT

Доступ: public

Устанавливает способ отрисовки

Параметры:
* stappler::vg::VectorPath::DrawStyle

Возвращает:
* stappler::vg::VectorPath&

# ::stappler::vg::VectorPath::getStyle() const

## BRIEF

Возвращает способ отрисовки

## CONTENT

Доступ: public

Возвращает способ отрисовки

Возвращает:
* DrawStyle

# ::stappler::vg::VectorPath::setAntialiased(bool)

## BRIEF

Устанавливает флаг вершинного антиалиасинга

## CONTENT

Доступ: public

Устанавливает флаг вершинного антиалиасинга

Параметры:
* bool

Возвращает:
* stappler::vg::VectorPath&

# ::stappler::vg::VectorPath::isAntialiased() const

## BRIEF

Возвращает флаг вершинного антиалиасинга

## CONTENT

Доступ: public

Возвращает флаг вершинного антиалиасинга

Возвращает:
* bool

# ::stappler::vg::VectorPath::setTransform(stappler::geom::Mat4 const&)

## BRIEF

Устанавливает матрицу трансформации

## CONTENT

Доступ: public

Устанавливает матрицу трансформации

Параметры:
* stappler::geom::Mat4 const&

Возвращает:
* stappler::vg::VectorPath&

# ::stappler::vg::VectorPath::applyTransform(stappler::geom::Mat4 const&)

## BRIEF

Добавляет матрицу трансформации к текущей

## CONTENT

Доступ: public

Добавляет матрицу трансформации к текущей через умножение

Параметры:
* stappler::geom::Mat4 const&

Возвращает:
* stappler::vg::VectorPath&

# ::stappler::vg::VectorPath::getTransform() const

## BRIEF

Возвращает матрицу трансформации

## CONTENT

Доступ: public

Возвращает матрицу трансформации

Возвращает:
* stappler::geom::Mat4 const&

# ::stappler::vg::VectorPath::clear()

## BRIEF

Удаляет все команды из пути

## CONTENT

Доступ: public

Удаляет все команды из пути

Возвращает:
* stappler::vg::VectorPath&

# ::stappler::vg::VectorPath::getParams() const

## BRIEF

Возвращает параметры для пути

## CONTENT

Доступ: public

Возвращает параметры для пути

Возвращает:
* stappler::vg::VectorPath::Params

# ::stappler::vg::VectorPath::empty() const

## BRIEF

Проверяет список команд на пустоту

## CONTENT

Доступ: public

Проверяет список команд на пустоту

Возвращает:
* bool

# ::stappler::vg::VectorPath::reserve(size_t)

## BRIEF

Резервирует число команд и число слотов для данных

## CONTENT

Доступ: public

Резервирует число команд и число слотов для данных

Параметры:
* size_t - число команд

# ::stappler::vg::VectorPath::getWriter()

## BRIEF

Создаёт и возвращает интерфейс записи пути

## CONTENT

Доступ: protected

Создаёт и возвращает интерфейс записи пути для `openForWriting`

Возвращает:
* stappler::vg::PathWriter

# ::stappler::vg::VectorPath::getCommands() const

## BRIEF

Возвращает список команд

## CONTENT

Доступ: public

Возвращает список команд

Возвращает:
* Interface::VectorType<Command> const&

# ::stappler::vg::VectorPath::getPoints() const

## BRIEF

Возвращает список точек и данных для команд

## CONTENT

Доступ: public

Возвращает список точек и данных для команд

Возвращает:
* Interface::VectorType<CommandData> const&

# ::stappler::vg::VectorPath::operator bool() const

## BRIEF

Проверяет путь на непустоту

## CONTENT

Доступ: public

Проверяет путь на непустоту

Возвращает:
* bool

# ::stappler::vg::VectorPath::encode() const

## BRIEF

Кодирует путь для сохранения в бинарном виде

## CONTENT

Доступ: public

Кодирует путь для сохранения в бинарном виде. Команды кодируются вместе с данными по правилам формата CBOR для чисел. Сперва кодируется число версии, число команд и число слотов данных. После поочерёдно кодируются команды, после команды - ссотвествующие ей данные.

Возвращает:
* Interface::BytesType

# ::stappler::vg::VectorPath::toString(bool) const

## BRIEF

Кодирует путь в соотвествующую SVG-строку

## CONTENT

Доступ: public

Кодирует путь в соотвествующую SVG-строку

Параметры:
* bool - true для того, чтобы новый контур начинался с новой строки

Возвращает:
* Interface::StringType

# ::stappler::vg::VectorPath::commandsCount() const

## BRIEF

Возвращает число команд

## CONTENT

Доступ: public

Возвращает число команд

Возвращает:
* size_t

# ::stappler::vg::VectorPath::dataCount() const

## BRIEF

Возвращает слотов данных

## CONTENT

Доступ: public

Возвращает слотов данных

Возвращает:
* size_t

# ::stappler::vg::VectorPath::_data

## BRIEF

Данные пути

## CONTENT

Доступ: protected

Данные пути

Тип: PathData<stappler::vg::Interface>
