Title: SPVectorPathData.h


# CORE_VG_SPVECTORPATHDATA_H_

## BRIEF

Заголовок работы с данными в векторных путях

## CONTENT

Заголовок работы с данными в векторных путях. Векторные пути работают на основе SVG.

См. https://developer.mozilla.org/en-US/docs/Web/SVG/Tutorial/Paths


# ::stappler::vg::CommandData

## BRIEF

Данные для векторной команды

## CONTENT

Данные для векторной команды


# ::stappler::vg::CommandData::

## BRIEF

Объединение

## CONTENT

Объединение

# ::stappler::vg::CommandData::x

## BRIEF

Точка x

## CONTENT

Точка x

Тип: float


# ::stappler::vg::CommandData::y

## BRIEF

Точка y

## CONTENT

Точка y

Тип: float


# ::stappler::vg::CommandData::p

## BRIEF

Тип точки в объединении

## CONTENT

Тип точки в объединении

Тип: 


# ::stappler::vg::CommandData::v

## BRIEF

Угол наклона дуги

## CONTENT

Угол наклона дуги

Тип: float


# ::stappler::vg::CommandData::a

## BRIEF

Первый флаг

## CONTENT

Первый флаг

Тип: bool


# ::stappler::vg::CommandData::b

## BRIEF

Второй флаг

## CONTENT

Второй флаг

Тип: bool


# ::stappler::vg::CommandData::f

## BRIEF

Тип дуги в объединении

## CONTENT

Тип дуги в объединении

Тип: 


# ::stappler::vg::CommandData::CommandData(float,float)

## BRIEF

Создаёт данные команды для точки

## CONTENT

Создаёт данные команды для точки

Параметры:
* float
* float


# ::stappler::vg::CommandData::CommandData(float,bool,bool)

## BRIEF

Создаёт данные команды для сегмента дуги

## CONTENT

Создаёт данные команды для сегмента дуги

Параметры:
* float
* bool
* bool


# ::stappler::vg::CommandData::CommandData()

## BRIEF

Конструктор

## CONTENT

Конструктор

# ::stappler::vg::Command

## BRIEF

Тип векторной команды

## CONTENT

Тип векторной команды (см. тег p в SVG)

Значения:
* MoveTo
* LineTo
* QuadTo
* CubicTo
* ArcTo
* ClosePath


# ::stappler::vg::PathParams

## BRIEF

Параметры рисования пути

## CONTENT

Параметры рисования пути


# ::stappler::vg::PathParams::transform

## BRIEF

Матрица преобразования

## CONTENT

Матрица преобразования

Тип: stappler::geom::Mat4


# ::stappler::vg::PathParams::fillColor

## BRIEF

Цвет заливки

## CONTENT

Цвет заливки

Тип: stappler::geom::Color4B


# ::stappler::vg::PathParams::strokeColor

## BRIEF

Цвет обводки

## CONTENT

Цвет обводки

Тип: stappler::geom::Color4B


# ::stappler::vg::PathParams::style

## BRIEF

Стиль рисования

## CONTENT

Стиль рисования

Тип: stappler::geom::DrawStyle


# ::stappler::vg::PathParams::strokeWidth

## BRIEF

Ширина обводки

## CONTENT

Ширина обводки

Тип: float


# ::stappler::vg::PathParams::winding

## BRIEF

Способ вычисления отношения внутри-снаружи

## CONTENT

Способ вычисления отношения внутри-снаружи

Тип: stappler::geom::Winding


# ::stappler::vg::PathParams::lineCup

## BRIEF

Тип окончания линий

## CONTENT

Тип окончания линий

Тип: stappler::geom::LineCup


# ::stappler::vg::PathParams::lineJoin

## BRIEF

Тип соединения линий

## CONTENT

Тип соединения линий

Тип: stappler::geom::LineJoin


# ::stappler::vg::PathParams::miterLimit

## BRIEF

Предел для рисования соединения линий

## CONTENT

Предел для рисования соединения линий

Тип: float


# ::stappler::vg::PathParams::isAntialiased

## BRIEF

Использовать ли вершинный антиалиасинг

## CONTENT

Использовать ли вершинный антиалиасинг

Тип: bool


# ::stappler::vg::PathData<typename>

## BRIEF

Данные векторного пути

## CONTENT

Данные векторного пути

Параметры шаблона:
* typename Interface

Базовые классы:
* Interface::AllocBaseType


# ::stappler::vg::PathData<typename>::Vector<typename>

## BRIEF

Тип вектора

## CONTENT

Тип вектора

Параметры шаблона:
* typename Value


# ::stappler::vg::PathData<typename>::points

## BRIEF

Данные команд

## CONTENT

Данные команд

Тип: Vector<stappler::vg::CommandData>


# ::stappler::vg::PathData<typename>::commands

## BRIEF

Список команд

## CONTENT

Список команд. Команда использует от 0 до 3 блоков данных

Тип: Vector<stappler::vg::Command>


# ::stappler::vg::PathData<typename>::params

## BRIEF

Параметры рисования пути

## CONTENT

Параметры рисования пути

Тип: stappler::vg::PathParams


# ::stappler::vg::PathData<typename>::PathData()

## BRIEF

Конструктор

## CONTENT

Конструктор


# ::stappler::vg::PathData<typename>::PathData(const PathData<Interface>&)

## BRIEF

Конструктор копирования

## CONTENT

Конструктор копирования

Параметры:
* const PathData<Interface>&


# ::stappler::vg::PathData<typename>::operator=(const PathData<Interface>&)

## BRIEF

Оператор копирования

## CONTENT

Оператор копирования

Параметры:
* const PathData<Interface>&

Возвращает:
* PathData<Interface>&

# ::stappler::vg::PathData<typename>::PathData(PathData<Interface>&&)

## BRIEF

Конструктор перемещения

## CONTENT

Конструктор перемещения

Параметры:
* PathData<Interface>&&


# ::stappler::vg::PathData<typename>::operator=(PathData<Interface>&&)

## BRIEF

Оператор перемещения

## CONTENT

Оператор перемещения

Параметры:
* PathData<Interface>&&

Возвращает:
* PathData<Interface>&

# ::stappler::vg::PathData<typename>::clear()

## BRIEF

Очищает данные пути

## CONTENT

Очищает данные пути


# ::stappler::vg::PathData<typename>::getWriter()

## BRIEF

Создаёт интерфейс записи в путь

## CONTENT

Создаёт интерфейс записи в путь

Возвращает:
* stappler::vg::PathWriter

# ::stappler::vg::PathData<typename>::encode<typename>() const

## BRIEF

Кодирует путь в бинарный формат

## CONTENT

Кодирует путь в бинарный формат

Параметры шаблона:
* typename OutInterface

Возвращает:
* typename OutInterface::BytesType

# ::stappler::vg::PathData<typename>::toString<typename>(bool) const

## BRIEF

Кодирует путь в SVG-строку

## CONTENT

Кодирует путь в SVG-строку

Параметры шаблона:
* typename OutInterface

Параметры:
* bool

Возвращает:
* typename OutInterface::StringType

# ::stappler::vg::PathWriter

## BRIEF

Интерфейс записи пути

## CONTENT

Интерфейс записи пути. Не зависит от интерфейса памяти.


# ::stappler::vg::PathWriter::points

## BRIEF

Адаптер для данных

## CONTENT

Адаптер для данных

Тип: VectorAdapter<stappler::vg::CommandData>


# ::stappler::vg::PathWriter::commands

## BRIEF

Адаптер для команд

## CONTENT

Адаптер для команд

Тип: VectorAdapter<stappler::vg::Command>


# ::stappler::vg::PathWriter::PathWriter(PathData<mem_std::Interface>&)

## BRIEF

Создаёт интерфейс записи для данных

## CONTENT

Создаёт интерфейс записи для данных

Параметры:
* PathData<mem_std::Interface>&


# ::stappler::vg::PathWriter::PathWriter(PathData<mem_pool::Interface>&)

## BRIEF

Создаёт интерфейс записи для данных

## CONTENT

Создаёт интерфейс записи для данных

Параметры:
* PathData<mem_pool::Interface>&


# ::stappler::vg::PathWriter::PathWriter()

## BRIEF

Конструктор по умолчанию

## CONTENT

Конструктор по умолчанию

# ::stappler::vg::PathWriter::PathWriter(stappler::vg::PathWriter const&)

## BRIEF

Конструктор копирования

## CONTENT

Конструктор копирования

Параметры:
* stappler::vg::PathWriter const&


# ::stappler::vg::PathWriter::operator=(stappler::vg::PathWriter const&)

## BRIEF

Оператор копирования

## CONTENT

Оператор копирования

Параметры:
* stappler::vg::PathWriter const&

Возвращает:
* stappler::vg::PathWriter&

# ::stappler::vg::PathWriter::PathWriter(stappler::vg::PathWriter&&)

## BRIEF

Конструктор перемещения

## CONTENT

Конструктор перемещения

Параметры:
* stappler::vg::PathWriter&&


# ::stappler::vg::PathWriter::operator=(stappler::vg::PathWriter&&)

## BRIEF

Оператор перемещения

## CONTENT

Оператор перемещения

Параметры:
* stappler::vg::PathWriter&&

Возвращает:
* stappler::vg::PathWriter&

# ::stappler::vg::PathWriter::operator bool() const

## BRIEF

Проверяет, что интерфейс подклчён к данным

## CONTENT

Проверяет, что интерфейс подклчён к данным

Возвращает:
* bool

# ::stappler::vg::PathWriter::empty() const

## BRIEF

Проверяет путь на пустоту

## CONTENT

Проверяет путь на пустоту

Возвращает:
* bool

# ::stappler::vg::PathWriter::reserve(size_t)

## BRIEF

Резервирует некоторое число команд в пути

## CONTENT

Резервирует некоторое число команд в пути

Параметры:
* size_t


# ::stappler::vg::PathWriter::readFromPathString(stappler::StringView)

## BRIEF

Читает путь из SVG-строки и добавляет к текущему

## CONTENT

Читает путь из SVG-строки и добавляет к текущему

Параметры:
* stappler::StringView

Возвращает:
* bool

# ::stappler::vg::PathWriter::readFromFile(stappler::StringView)

## BRIEF

Читает путь из SVG-файла и добавляет к текущему

## CONTENT

Читает путь из SVG-файла и добавляет к текущему

Параметры:
* stappler::StringView

Возвращает:
* bool

# ::stappler::vg::PathWriter::readFromBytes(stappler::BytesView)

## BRIEF

Читает ранее сохранённый путь и добавляет к текущему

## CONTENT

Читает ранее сохранённый путь и добавляет к текущему

Параметры:
* stappler::BytesView

Возвращает:
* bool

# ::stappler::vg::PathWriter::moveTo(float,float)

## BRIEF

Добавляет команду в путь

## CONTENT

Добавляет команду в путь

Параметры:
* float
* float

Возвращает:
* stappler::vg::PathWriter&

# ::stappler::vg::PathWriter::moveTo(stappler::geom::Vec2 const&)

## BRIEF

Добавляет команду в путь

## CONTENT

Добавляет команду в путь

Параметры:
* stappler::geom::Vec2 const&

Возвращает:
* stappler::vg::PathWriter&

# ::stappler::vg::PathWriter::lineTo(float,float)

## BRIEF

Добавляет команду в путь

## CONTENT

Добавляет команду в путь

Параметры:
* float
* float

Возвращает:
* stappler::vg::PathWriter&

# ::stappler::vg::PathWriter::lineTo(stappler::geom::Vec2 const&)

## BRIEF

Добавляет команду в путь

## CONTENT

Добавляет команду в путь

Параметры:
* stappler::geom::Vec2 const&

Возвращает:
* stappler::vg::PathWriter&

# ::stappler::vg::PathWriter::quadTo(float,float,float,float)

## BRIEF

Добавляет команду в путь

## CONTENT

Добавляет команду в путь

Параметры:
* float
* float
* float
* float

Возвращает:
* stappler::vg::PathWriter&

# ::stappler::vg::PathWriter::quadTo(stappler::geom::Vec2 const&,stappler::geom::Vec2 const&)

## BRIEF

Добавляет команду в путь

## CONTENT

Добавляет команду в путь

Параметры:
* stappler::geom::Vec2 const&
* stappler::geom::Vec2 const&

Возвращает:
* stappler::vg::PathWriter&

# ::stappler::vg::PathWriter::cubicTo(float,float,float,float,float,float)

## BRIEF

Добавляет команду в путь

## CONTENT

Добавляет команду в путь

Параметры:
* float
* float
* float
* float
* float
* float

Возвращает:
* stappler::vg::PathWriter&

# ::stappler::vg::PathWriter::cubicTo(stappler::geom::Vec2 const&,stappler::geom::Vec2 const&,stappler::geom::Vec2 const&)

## BRIEF

Добавляет команду в путь

## CONTENT

Добавляет команду в путь

Параметры:
* stappler::geom::Vec2 const&
* stappler::geom::Vec2 const&
* stappler::geom::Vec2 const&

Возвращает:
* stappler::vg::PathWriter&

# ::stappler::vg::PathWriter::arcTo(float,float,float,bool,bool,float,float)

## BRIEF

Добавляет команду в путь

## CONTENT

Добавляет команду в путь

Параметры:
* float
* float
* float
* bool
* bool
* float
* float

Возвращает:
* stappler::vg::PathWriter&

# ::stappler::vg::PathWriter::arcTo(stappler::geom::Vec2 const&,float,bool,bool,stappler::geom::Vec2 const&)

## BRIEF

Добавляет команду в путь

## CONTENT

Добавляет команду в путь

Параметры:
* stappler::geom::Vec2 const&
* float
* bool
* bool
* stappler::geom::Vec2 const&

Возвращает:
* stappler::vg::PathWriter&

# ::stappler::vg::PathWriter::closePath()

## BRIEF

Добавляет команду в путь

## CONTENT

Добавляет команду в путь

Возвращает:
* stappler::vg::PathWriter&

# ::stappler::vg::PathWriter::addRect(stappler::geom::Rect const&)

## BRIEF

Добавляет прямоугольник к пути

## CONTENT

Добавляет прямоугольник к пути

Параметры:
* stappler::geom::Rect const&

Возвращает:
* stappler::vg::PathWriter&

# ::stappler::vg::PathWriter::addRect(stappler::geom::Rect const&,float,float)

## BRIEF

Добавляет прямоугольник к пути

## CONTENT

Добавляет прямоугольник к пути

Параметры:
* stappler::geom::Rect const&
* float
* float

Возвращает:
* stappler::vg::PathWriter&

# ::stappler::vg::PathWriter::addRect(float,float,float,float)

## BRIEF

Добавляет прямоугольник к пути

## CONTENT

Добавляет прямоугольник к пути

Параметры:
* float
* float
* float
* float

Возвращает:
* stappler::vg::PathWriter&

# ::stappler::vg::PathWriter::addOval(stappler::geom::Rect const&)

## BRIEF

Добавляет эллипс, вписанный в прямоугольник, к пути

## CONTENT

Добавляет эллипс, вписанный в прямоугольник, к пути

Параметры:
* stappler::geom::Rect const&

Возвращает:
* stappler::vg::PathWriter&

# ::stappler::vg::PathWriter::addCircle(float,float,float)

## BRIEF

Добавляет круг к пути

## CONTENT

Добавляет круг к пути

Параметры:
* float
* float
* float

Возвращает:
* stappler::vg::PathWriter&

# ::stappler::vg::PathWriter::addEllipse(float,float,float,float)

## BRIEF

Добавляет эллипс к пути

## CONTENT

Добавляет эллипс к пути

Параметры:
* float
* float
* float
* float

Возвращает:
* stappler::vg::PathWriter&

# ::stappler::vg::PathWriter::addArc(stappler::geom::Rect const&,float,float)

## BRIEF

Добавляет сегмент дуги к пути

## CONTENT

Добавляет сегмент дуги к пути

Параметры:
* stappler::geom::Rect const&
* float
* float

Возвращает:
* stappler::vg::PathWriter&

# ::stappler::vg::PathWriter::addRect(float,float,float,float,float,float)

## BRIEF

Добавляет скруглённый прямоугольник к пути

## CONTENT

Добавляет скруглённый прямоугольник к пути

Параметры:
* float
* float
* float
* float
* float
* float

Возвращает:
* stappler::vg::PathWriter&

# ::stappler::vg::PathWriter::addPath(PathData<memory::StandartInterface> const&)

## BRIEF

Добавляет другой путь к пути

## CONTENT

Добавляет другой путь к пути

Параметры:
* PathData<memory::StandartInterface> const&

Возвращает:
* bool

# ::stappler::vg::PathWriter::addPath(PathData<memory::PoolInterface> const&)

## BRIEF

Добавляет другой путь к пути

## CONTENT

Добавляет другой путь к пути

Параметры:
* PathData<memory::PoolInterface> const&

Возвращает:
* bool

# ::stappler::vg::PathWriter::addPath(stappler::BytesView)

## BRIEF

Читает путь из строки и добавляет у пути

## CONTENT

Читает путь из строки и добавляет у пути

Параметры:
* stappler::BytesView

Возвращает:
* bool

# ::stappler::vg::PathWriter::addPath(stappler::StringView)

## BRIEF

Читает путь из бинарных данных и добавляет у пути

## CONTENT

Читает путь из бинарных данных и добавляет у пути

Параметры:
* stappler::StringView

Возвращает:
* bool

# ::stappler::vg::PathWriter::readFromFileContent(stappler::StringView)

## BRIEF

Записывает данные из файла в путь

## CONTENT

Записывает данные из файла в путь

Параметры:
* stappler::StringView

Возвращает:
* bool