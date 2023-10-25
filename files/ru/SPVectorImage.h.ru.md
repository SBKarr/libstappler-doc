Title: SPVectorImage.h


# STAPPLER_VG_SPVECTORIMAGE_H_

## BRIEF

Заголоок для работы с векторными изображениями

## CONTENT

Заголоок для работы с векторными изображениями


# ::stappler::vg::VectorPathRef

## BRIEF

Ссылка на векторный путь, хранимый в изображении

## CONTENT

Ссылка на векторный путь, хранимый в изображении. При изменении пути по ссылке изображение помечается как изменённое для повторной растеризации или триангуляции.

Векторные изображения используют стандартный интерфес памяти для работы.

Тип использует двухэтапное создание, необходимо вызвать одну из функций `init` для завершения инициализации.

Базовые классы:
* RefBase<Interface>


# ::stappler::vg::VectorPathRef::String

## BRIEF

Тип стандартной строки

## CONTENT

Доступ: public

Тип стандартной строки


# ::stappler::vg::VectorPathRef::~VectorPathRef()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор


# ::stappler::vg::VectorPathRef::init(stappler::vg::VectorImage*,stappler::vg::VectorPathRef::String const&,Rc<stappler::vg::VectorPath> const&)

## BRIEF

Инициализирует ссылку для пути, хранимого в изображении

## CONTENT

Доступ: public

Инициализирует ссылку для пути, хранимого в изображении

Параметры:
* stappler::vg::VectorImage* - векторное изображение
* stappler::vg::VectorPathRef::String const& - идентификатор пути
* Rc<stappler::vg::VectorPath> const& - указатель на путь

Возвращает:
* bool - true при успешной инициализации

# ::stappler::vg::VectorPathRef::init(stappler::vg::VectorImage*,stappler::vg::VectorPathRef::String const&,Rc<stappler::vg::VectorPath>&&)

## BRIEF

Инициализирует ссылку для пути, хранимого в изображении

## CONTENT

Доступ: public

Инициализирует ссылку для пути, хранимого в изображении

Параметры:
* stappler::vg::VectorImage* - векторное изображение
* stappler::vg::VectorPathRef::String const& - идентификатор пути
* Rc<stappler::vg::VectorPath>&& - указатель на путь

Возвращает:
* bool - true при успешной инициализации

# ::stappler::vg::VectorPathRef::count() const

## BRIEF

Возвращает число команд в пути

## CONTENT

Доступ: public

Возвращает число команд в пути

Возвращает:
* size_t

# ::stappler::vg::VectorPathRef::setPath(stappler::BytesView)

## BRIEF

Декодирует путь из блока данных

## CONTENT

Доступ: public

Декодирует путь из блока данных. См `SPVectorPath.h` для информации о кодировании

Параметры:
* stappler::BytesView

Возвращает:
* stappler::vg::VectorPathRef&

# ::stappler::vg::VectorPathRef::setPath(stappler::StringView)

## BRIEF

Декодирует путь из тектового SVG представления

## CONTENT

Доступ: public

Декодирует путь из тектового SVG представления

Параметры:
* stappler::StringView

Возвращает:
* stappler::vg::VectorPathRef&

# ::stappler::vg::VectorPathRef::moveTo(float,float)

## BRIEF

Добавляет новый контур в путь, начиная с точки

## CONTENT

Доступ: public

Добавляет новый контур в путь, начиная с точки

Параметры:
* float
* float

Возвращает:
* stappler::vg::VectorPathRef&

# ::stappler::vg::VectorPathRef::moveTo(stappler::geom::Vec2 const&)

## BRIEF

Добавляет новый контур в путь, начиная с точки

## CONTENT

Доступ: public

Добавляет новый контур в путь, начиная с точки

Параметры:
* stappler::geom::Vec2 const&

Возвращает:
* stappler::vg::VectorPathRef&

# ::stappler::vg::VectorPathRef::lineTo(float,float)

## BRIEF

Добавляет прямую линию до точки в контур

## CONTENT

Доступ: public

Добавляет прямую линию до точки в контур

Параметры:
* float
* float

Возвращает:
* stappler::vg::VectorPathRef&

# ::stappler::vg::VectorPathRef::lineTo(stappler::geom::Vec2 const&)

## BRIEF

Добавляет прямую линию до точки в контур

## CONTENT

Доступ: public

Добавляет прямую линию до точки в контур

Параметры:
* stappler::geom::Vec2 const&

Возвращает:
* stappler::vg::VectorPathRef&

# ::stappler::vg::VectorPathRef::quadTo(float,float,float,float)

## BRIEF

Добавляет квадратичную кривую Безье до точки в контур

## CONTENT

Доступ: public

Добавляет квадратичную кривую Безье до точки в контур

Параметры:
* float - cx
* float - cy
* float - x
* float - y

Возвращает:
* stappler::vg::VectorPathRef&

# ::stappler::vg::VectorPathRef::quadTo(stappler::geom::Vec2 const&,stappler::geom::Vec2 const&)

## BRIEF

Добавляет квадратичную кривую Безье до точки в контур

## CONTENT

Доступ: public

Добавляет квадратичную кривую Безье до точки в контур

Параметры:
* stappler::geom::Vec2 const& - control
* stappler::geom::Vec2 const& - target

Возвращает:
* stappler::vg::VectorPathRef&

# ::stappler::vg::VectorPathRef::cubicTo(float,float,float,float,float,float)

## BRIEF

Добавляет кубическую кривую Безье до точки в контур

## CONTENT

Доступ: public

Добавляет кубическую кривую Безье до точки в контур

Параметры:
* float - c1x
* float - c1y
* float - c2x
* float - c2y
* float - x
* float - y

Возвращает:
* stappler::vg::VectorPathRef&

# ::stappler::vg::VectorPathRef::cubicTo(stappler::geom::Vec2 const&,stappler::geom::Vec2 const&,stappler::geom::Vec2 const&)

## BRIEF

Добавляет кубическую кривую Безье до точки в контур

## CONTENT

Доступ: public

Добавляет кубическую кривую Безье до точки в контур

Параметры:
* stappler::geom::Vec2 const& - c1
* stappler::geom::Vec2 const& - c2
* stappler::geom::Vec2 const& - target

Возвращает:
* stappler::vg::VectorPathRef&

# ::stappler::vg::VectorPathRef::arcTo(float,float,float,bool,bool,float,float)

## BRIEF

Добавляет эллиптическую дугу до точки в контур

## CONTENT

Доступ: public

Добавляет эллиптическую дугу до точки в контур

Параметры:
* float - радиус по x
* float - радиус по y
* float - угол поворота эллипса
* bool - флаг большого сегмента дуги
* bool - флаг инверсии дуги
* float - x
* float - y

Возвращает:
* stappler::vg::VectorPathRef&

# ::stappler::vg::VectorPathRef::arcTo(stappler::geom::Vec2 const&,float,bool,bool,stappler::geom::Vec2 const&)

## BRIEF

Добавляет эллиптическую дугу до точки в контур

## CONTENT

Доступ: public

Параметры:
* stappler::geom::Vec2 const& - радиус
* float - угол поворота эллипса
* bool - флаг большого сегмента дуги
* bool - флаг инверсии дуги
* stappler::geom::Vec2 const& - конечная точка

Возвращает:
* stappler::vg::VectorPathRef&

# ::stappler::vg::VectorPathRef::closePath()

## BRIEF

Закрывает текущий открытый контур

## CONTENT

Доступ: public

Закрывает текущий открытый контур

Возвращает:
* stappler::vg::VectorPathRef&

# ::stappler::vg::VectorPathRef::addRect(stappler::geom::Rect const&)

## BRIEF

Добавляет прямоугольный контур в путь

## CONTENT

Доступ: public

Добавляет прямоугольный контур в путь

Параметры:
* stappler::geom::Rect const&

Возвращает:
* stappler::vg::VectorPathRef&

# ::stappler::vg::VectorPathRef::addRect(stappler::geom::Rect const&,float)

## BRIEF

Добавляет прямоугольный контур со скруглёнными уголами в путь

## CONTENT

Доступ: public

Добавляет прямоугольный контур со скруглёнными уголами в путь

Параметры:
* stappler::geom::Rect const&
* float - радиус скругления

Возвращает:
* stappler::vg::VectorPathRef&

# ::stappler::vg::VectorPathRef::addOval(stappler::geom::Rect const&)

## BRIEF

Добавляет контур эллипса, вписанного в прямоугольник, в путь

## CONTENT

Доступ: public

Добавляет контур эллипса, вписанного в прямоугольник, в путь

Параметры:
* stappler::geom::Rect const&

Возвращает:
* stappler::vg::VectorPathRef&

# ::stappler::vg::VectorPathRef::addCircle(float,float,float)

## BRIEF

Добавляет контур круга в путь

## CONTENT

Доступ: public

Добавляет контур круга в путь

Параметры:
* float - x
* float - y
* float - радиус

Возвращает:
* stappler::vg::VectorPathRef&

# ::stappler::vg::VectorPathRef::addArc(stappler::geom::Rect const&,float,float)

## BRIEF

Добавляет контур сектора эллипса

## CONTENT

Доступ: public

Добавляет контур сектора эллипса

Параметры:
* stappler::geom::Rect const& - ограничивающий прямоугольник для круга
* float - начальный угол в радианах
* float - угол поворота в радианах

Возвращает:
* stappler::vg::VectorPathRef&

# ::stappler::vg::VectorPathRef::setFillColor(stappler::geom::Color4B const&)

## BRIEF

Устанавливает цвет заливки

## CONTENT

Доступ: public

Устанавливает цвет заливки

Параметры:
* stappler::geom::Color4B const&

Возвращает:
* stappler::vg::VectorPathRef&

# ::stappler::vg::VectorPathRef::getFillColor() const

## BRIEF

Возвращает цвет заливки

## CONTENT

Доступ: public

Возвращает цвет заливки

Возвращает:
* stappler::geom::Color4B const&

# ::stappler::vg::VectorPathRef::setStrokeColor(stappler::geom::Color4B const&)

## BRIEF

Устанавливает цвет обводки

## CONTENT

Доступ: public

Устанавливает цвет обводки

Параметры:
* stappler::geom::Color4B const&

Возвращает:
* stappler::vg::VectorPathRef&

# ::stappler::vg::VectorPathRef::getStrokeColor() const

## BRIEF

Возвращает цвет обводки

## CONTENT

Доступ: public

Возвращает цвет обводки

Возвращает:
* stappler::geom::Color4B const&

# ::stappler::vg::VectorPathRef::setFillOpacity(uint8_t)

## BRIEF

Устанавливает прозрачность заливки

## CONTENT

Доступ: public

Устанавливает прозрачность заливки (a-компонент цвета)

Параметры:
* uint8_t

Возвращает:
* stappler::vg::VectorPathRef&

# ::stappler::vg::VectorPathRef::getFillOpacity() const

## BRIEF

Возвращает прозрачность заливки

## CONTENT

Доступ: public

Возвращает прозрачность заливки (a-компонент цвета)

Возвращает:
* uint8_t

# ::stappler::vg::VectorPathRef::setStrokeOpacity(uint8_t)

## BRIEF

Устанавливает прозрачность обводки

## CONTENT

Доступ: public

Устанавливает прозрачность обводки (a-компонент цвета)

Параметры:
* uint8_t

Возвращает:
* stappler::vg::VectorPathRef&

# ::stappler::vg::VectorPathRef::getStrokeOpacity() const

## BRIEF

Возвращает прозрачность обводки

## CONTENT

Доступ: public

Возвращает прозрачность обводки (a-компонент цвета)

Возвращает:
* uint8_t

# ::stappler::vg::VectorPathRef::setStrokeWidth(float)

## BRIEF

Устанавливает ширину обводки

## CONTENT

Доступ: public

Устанавливает ширину обводки

Параметры:
* float

Возвращает:
* stappler::vg::VectorPathRef&

# ::stappler::vg::VectorPathRef::getStrokeWidth() const

## BRIEF

Возвращает ширину обводки

## CONTENT

Доступ: public

Возвращает ширину обводки

Возвращает:
* float

# ::stappler::vg::VectorPathRef::setWindingRule(vg::Winding)

## BRIEF

Устанавливает правило заливки

## CONTENT

Доступ: public

Устанавливает правило заливки

Параметры:
* vg::Winding

Возвращает:
* stappler::vg::VectorPathRef&

# ::stappler::vg::VectorPathRef::getWindingRule() const

## BRIEF

Возвращает правило заливки

## CONTENT

Доступ: public

Возвращает правило заливки

Возвращает:
* vg::Winding

# ::stappler::vg::VectorPathRef::setStyle(vg::DrawStyle)

## BRIEF

Устанавливает способ ристования (заливка/обводка)

## CONTENT

Доступ: public

Устанавливает способ ристования (заливка/обводка)

Параметры:
* vg::DrawStyle

Возвращает:
* stappler::vg::VectorPathRef&

# ::stappler::vg::VectorPathRef::getStyle() const

## BRIEF

Возвращает способ рисования

## CONTENT

Доступ: public

Возвращает способ рисования

Возвращает:
* vg::DrawStyle

# ::stappler::vg::VectorPathRef::setTransform(stappler::geom::Mat4 const&)

## BRIEF

Устанавливает матрицу трансформации

## CONTENT

Доступ: public

Устанавливает матрицу трансформации

Параметры:
* stappler::geom::Mat4 const&

Возвращает:
* stappler::vg::VectorPathRef&

# ::stappler::vg::VectorPathRef::applyTransform(stappler::geom::Mat4 const&)

## BRIEF

Добавляет (умножает) матрицу трансформации к текущей

## CONTENT

Доступ: public

Добавляет (умножает) матрицу трансформации к текущей

Параметры:
* stappler::geom::Mat4 const&

Возвращает:
* stappler::vg::VectorPathRef&

# ::stappler::vg::VectorPathRef::getTransform() const

## BRIEF

Возвращает матрицу трансформацию

## CONTENT

Доступ: public

Возвращает матрицу трансформацию

Возвращает:
* stappler::geom::Mat4 const&

# ::stappler::vg::VectorPathRef::setAntialiased(bool)

## BRIEF

Устанавливает флаг антиалиасинга для пути

## CONTENT

Доступ: public

Устанавливает флаг антиалиасинга для пути

Параметры:
* bool

Возвращает:
* stappler::vg::VectorPathRef&

# ::stappler::vg::VectorPathRef::isAntialiased() const

## BRIEF

Возвращает флаг антиалиасинга для пути

## CONTENT

Доступ: public

Возвращает флаг антиалиасинга для пути

Возвращает:
* bool

# ::stappler::vg::VectorPathRef::clear()

## BRIEF

Удаляет все контуры из пути

## CONTENT

Доступ: public

Удаляет все контуры из пути

Возвращает:
* stappler::vg::VectorPathRef&

# ::stappler::vg::VectorPathRef::getId() const

## BRIEF

Возвращает идентификатор пути

## CONTENT

Доступ: public

Возвращает идентификатор пути

Возвращает:
* stappler::StringView

# ::stappler::vg::VectorPathRef::empty() const

## BRIEF

Проверяет путь на пустоту

## CONTENT

Доступ: public

Проверяет путь на пустоту

Возвращает:
* bool

# ::stappler::vg::VectorPathRef::valid() const

## BRIEF

Проверяет путь на работоспособность

## CONTENT

Доступ: public

Проверяет путь на работоспособность

Возвращает:
* bool

# ::stappler::vg::VectorPathRef::operator bool() const

## BRIEF

Проверяет путь на непустоту и работоспособность

## CONTENT

Доступ: public

Проверяет путь на непустоту и работоспособность

Возвращает:
* bool

# ::stappler::vg::VectorPathRef::setPath(Rc<stappler::vg::VectorPath>&&)

## BRIEF

Заменяет путь другим путём

## CONTENT

Доступ: public

Заменяет путь другим путём

Параметры:
* Rc<stappler::vg::VectorPath>&&


# ::stappler::vg::VectorPathRef::getPath() const

## BRIEF

Возвращает указатель на путь

## CONTENT

Доступ: public

Возвращает указатель на путь

Возвращает:
* stappler::vg::VectorPath*

# ::stappler::vg::VectorPathRef::markCopyOnWrite()

## BRIEF

Помечает путь как изменённый для алгоритма Copy-on-write

## CONTENT

Доступ: public

Помечает путь как изменённый для алгоритма Copy-on-write


# ::stappler::vg::VectorPathRef::setImage(stappler::vg::VectorImage*)

## BRIEF

Устанавливает владеющее путём изображение

## CONTENT

Доступ: public

Устанавливает владеющее путём изображение

Параметры:
* stappler::vg::VectorImage*


# ::stappler::vg::VectorPathRef::copy()

## BRIEF

Копирует путь на основе исходного для изменения

## CONTENT

Доступ: protected

Копирует путь на основе исходного для изменения. Реализует copy-on-write


# ::stappler::vg::VectorPathRef::_copyOnWrite

## BRIEF

Флаг режима copy-on-write

## CONTENT

Доступ: protected

Флаг режима copy-on-write

Тип: bool


# ::stappler::vg::VectorPathRef::_id

## BRIEF

Идентификатор пути

## CONTENT

Доступ: protected

Идентификатор пути

Тип: String


# ::stappler::vg::VectorPathRef::_path

## BRIEF

Указатель на путь

## CONTENT

Доступ: protected

Указатель на путь

Тип: Rc<stappler::vg::VectorPath>


# ::stappler::vg::VectorPathRef::_image

## BRIEF

Владеющее изображение

## CONTENT

Доступ: protected

Владеющее изображение

Тип: stappler::vg::VectorImage*


# ::stappler::vg::VectorImageData

## BRIEF

Структура данных векторного изображения

## CONTENT

Структура данных векторного изображения. Векторные изображения реализуют copy-on-write через отделение данных от представляюей их структуры. Это позволяет изменять изображение, когда его ранняя верия уже нередана на растеризацию/триангуляцию.

Использует стандартный интерфейс памяти

Использует двухэтапную инициализацию, необходимо вызвать один из методов `init` для работы.

Базовые классы:
* RefBase<Interface>


# ::stappler::vg::VectorImageData::String

## BRIEF

Тип стандартной строки

## CONTENT

Доступ: public

Тип стандартной строки


# ::stappler::vg::VectorImageData::~VectorImageData()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор

# ::stappler::vg::VectorImageData::init(stappler::vg::VectorImage*,stappler::geom::Size2,stappler::geom::Rect,Interface::VectorType<PathXRef>&&,Interface::MapType<String, VectorPath>&&,uint16_t)

## BRIEF

Иницилизирует изображение с имеющимися данными

## CONTENT

Доступ: public

Иницилизирует изображение с имеющимися данными

Параметры:
* stappler::vg::VectorImage* - указатель на объект отображения
* stappler::geom::Size2 - размер изображения
* stappler::geom::Rect - видимый регион изображения
* Interface::VectorType<PathXRef>&& - порядок отображения путей по идентификаторам
* Interface::MapType<String, VectorPath>&& - набор путей по идентификаторам
* uint16_t - максимальное значение используемого встроенного идентификатора

Возвращает:
* bool - true - успех инициализации

# ::stappler::vg::VectorImageData::init(stappler::vg::VectorImage*,stappler::geom::Size2,stappler::geom::Rect)

## BRIEF

Инициализирует пустое изображение

## CONTENT

Доступ: public

Инициализирует пустое изображение

Параметры:
* stappler::vg::VectorImage* - указатель на объект отображения
* stappler::geom::Size2 - размер изображения
* stappler::geom::Rect - видимый регион изображения

Возвращает:
* bool - true - успех инициализации

# ::stappler::vg::VectorImageData::init(stappler::vg::VectorImageData&)

## BRIEF

Копирует данные изображения

## CONTENT

Доступ: public

Копирует данные изображения

Параметры:
* stappler::vg::VectorImageData& - исходные данные изображения

Возвращает:
* bool - true - успех инициализации

# ::stappler::vg::VectorImageData::setImageSize(stappler::geom::Size2 const&)

## BRIEF

Устанавливает действующий размер изображения

## CONTENT

Доступ: public

Устанавливает действующий размер изображения

Параметры:
* stappler::geom::Size2 const&


# ::stappler::vg::VectorImageData::getImageSize() const

## BRIEF

Получает действующий размер изображения

## CONTENT

Доступ: public

Получает действующий размер изображения

Возвращает:
* stappler::geom::Size2

# ::stappler::vg::VectorImageData::getViewBox() const

## BRIEF

Получает видимый регион изображения

## CONTENT

Доступ: public

Получает видимый регион изображения

Возвращает:
* stappler::geom::Rect

# ::stappler::vg::VectorImageData::getPaths() const

## BRIEF

Получает пути в изображении

## CONTENT

Доступ: public

Получает пути в изображении

Возвращает:
* Interface::MapType<String, Rc<VectorPath>> const&

# ::stappler::vg::VectorImageData::copyPath(stappler::StringView)

## BRIEF

Копирует путь из изображения по его идентификатору

## CONTENT

Доступ: public

Копирует путь из изображения по его идентификатору

Параметры:
* stappler::StringView

Возвращает:
* Rc<stappler::vg::VectorPath>

# ::stappler::vg::VectorImageData::getNextId()

## BRIEF

Получает свободный автоматический идентификатор для пути

## CONTENT

Доступ: public

Получает свободный автоматический идентификатор для пути

Возвращает:
* uint16_t

# ::stappler::vg::VectorImageData::addPath(stappler::StringView,stappler::StringView,stappler::vg::VectorPath&&,stappler::geom::Mat4)

## BRIEF

Добавляет путь в изображение

## CONTENT

Доступ: public

Добавляет путь в изображение. Если путь с таким идентификатором уже существует - заменяет его. Добавляет путь в порядок отрисовки последниим.

Параметры:
* stappler::StringView - идентификатор пути. Может быть пуст, тогда путь получит автоматический идентификатор
* stappler::StringView - идентификатор для кеширования. Такие идентификаторы должны быть уникальными в рамках всей системы. Пустой, если кеширование не требуется
* stappler::vg::VectorPath&& - обьект пути
* stappler::geom::Mat4 - матрица трансформации для пути

Возвращает:
* Rc<stappler::vg::VectorPath>

# ::stappler::vg::VectorImageData::removePath(stappler::StringView)

## BRIEF

Удаляет путь по идентификатору

## CONTENT

Доступ: public

Удаляет путь по идентификатору

Параметры:
* stappler::StringView


# ::stappler::vg::VectorImageData::clear()

## BRIEF

Очищает изображеие, удаляет все пути

## CONTENT

Доступ: public

Очищает изображеие, удаляет все пути


# ::stappler::vg::VectorImageData::getDrawOrder() const

## BRIEF

Возвращает порядок отрисовки путей

## CONTENT

Доступ: public

Возвращает порядок отрисовки путей

Возвращает:
* Interface::VectorType<PathXRef> const&

# ::stappler::vg::VectorImageData::setDrawOrder(Interface::VectorType<PathXRef>&&)

## BRIEF

Устанавливает порядок отрисовки путей

## CONTENT

Доступ: public

Устанавливает порядок отрисовки путей. Если порядок пуст - пути рисуются в порядке идентификаторов. Если порядок не пуст. отсутсвующие в нём пути не рисуются.

Параметры:
* Interface::VectorType<PathXRef>&&


# ::stappler::vg::VectorImageData::resetDrawOrder()

## BRIEF

Устанавливает порядок отрисовки путей в порядок по умолчанию

## CONTENT

Доступ: public

Устанавливает порядок отрисовки путей в порядок по умолчанию, заполняет вектор порядка.


# ::stappler::vg::VectorImageData::setViewBoxTransform(stappler::geom::Mat4 const&)

## BRIEF

Устанавливает матрицу трансформации для проецирования изображения в видимый регион

## CONTENT

Доступ: public

Устанавливает матрицу трансформации для проецирования изображения в видимый регион. По умолчанию эта матрица задаётся для трансформации всего изображения в заданный регион во время его создания.

Параметры:
* stappler::geom::Mat4 const&


# ::stappler::vg::VectorImageData::getViewBoxTransform() const

## BRIEF

Возвращает матрицу трансформации для проецирования изображения в видимый регион

## CONTENT

Доступ: public

Возвращает матрицу трансформации для проецирования изображения в видимый регион

Возвращает:
* stappler::geom::Mat4 const&

# ::stappler::vg::VectorImageData::setBatchDrawing(bool)

## BRIEF

Устанавливает флаг режима пакетной отрисовки

## CONTENT

Доступ: public

Устанавливает флаг режима пакетной отрисовки. Пакетная отрисовка эффективна, когда пути в изображении не пересекаются. Иначе, она нарушает порядок и принцип наложения путей. Не существует быстрого и эффективного способа проверить пути на пересечение, потому флаг задаётся явно.

Параметры:
* bool


# ::stappler::vg::VectorImageData::isBatchDrawing() const

## BRIEF

Возвращает флаг пакетной отрисовки

## CONTENT

Доступ: public

Возвращает флаг пакетной отрисовки

Возвращает:
* bool

# ::stappler::vg::VectorImageData::draw<typename>(Callback const&) const

## BRIEF

Обходит пути в изображении для их рисования

## CONTENT

Доступ: public

Обходит пути в изображении для их рисования (растеризации или триангуляции)

Параметры шаблона:
* typename Callback

Параметры:
* Callback const&

Функция принимает параметры:
* VectorPath const& - путь для отрисовки
* StringView - идентификатор пути для кеширования
* Mat4 const& - матрица трансформации для пути


# ::stappler::vg::VectorImageData::_allowBatchDrawing

## BRIEF

Флаг допуска для пакетного рисования

## CONTENT

Доступ: protected

Флаг допуска для пакетного рисования

Тип: bool


# ::stappler::vg::VectorImageData::_imageSize

## BRIEF

Размер изображения

## CONTENT

Доступ: protected

Размер изображения

Тип: stappler::geom::Size2


# ::stappler::vg::VectorImageData::_viewBox

## BRIEF

Видимый регион изображения

## CONTENT

Доступ: protected

Видимый регион изображения

Тип: stappler::geom::Rect


# ::stappler::vg::VectorImageData::_viewBoxTransform

## BRIEF

Матрица преобразования для отображения видимого региона

## CONTENT

Доступ: protected

Матрица преобразования для отображения видимого региона

Тип: stappler::geom::Mat4


# ::stappler::vg::VectorImageData::_order

## BRIEF

Порядок отрисовки

## CONTENT

Доступ: protected

Порядок отрисовки. Помимо порядка отрисовки, массив хранит дополнительную матрицу трансформации и идентификатор для кеширования.

Тип: Interface::VectorType<PathXRef>


# ::stappler::vg::VectorImageData::_paths

## BRIEF

Пути в изображении

## CONTENT

Доступ: protected

Пути в изображении

Тип: Interface::MapType<String, Rc<VectorPath>>


# ::stappler::vg::VectorImageData::_nextId

## BRIEF

Следующий свободный автоматический идентификатор

## CONTENT

Доступ: protected

Следующий свободный автоматический идентификатор

Тип: uint16_t


# ::stappler::vg::VectorImageData::_image

## BRIEF

Указатель на базовый объект изображения

## CONTENT

Доступ: protected

Указатель на базовый объект изображения

Тип: stappler::vg::VectorImage*


# ::stappler::vg::VectorImage

## BRIEF

Основной объект векторного изображения

## CONTENT

Основной объект векторного изображения. Служит фасадом для объекта данных изображения, и позволяет изъять эти данные для обработки. В таком случае, если в изображение вносятся изменения, старые данные будут скопированы.

Использует стандартный интерфейс памяти

Использует двухэтапную инициализацию, для работы необходимо вызвать один из методов `init`.

Базовые классы:
* RefBase<Interface>


# ::stappler::vg::VectorImage::String

## BRIEF

Тип стандартной строки

## CONTENT

Доступ: public

Тип стандартной строки


# ::stappler::vg::VectorImage::isSvg(stappler::StringView)

## BRIEF

Проверяет, содержится ли в строки SVG-изображение

## CONTENT

Доступ: public

Проверяет, содержится ли в строки SVG-изображение

Параметры:
* stappler::StringView

Возвращает:
* bool

# ::stappler::vg::VectorImage::isSvg(stappler::BytesView)

## BRIEF

Проверяет, содержится ли в данных изображение

## CONTENT

Доступ: public

Проверяет, содержится ли в данных изображение

Параметры:
* stappler::BytesView

Возвращает:
* bool

# ::stappler::vg::VectorImage::isSvg(stappler::FilePath)

## BRIEF

Проверяет, содержится ли в файле изображение

## CONTENT

Доступ: public

Проверяет, содержится ли в файле изображение

Параметры:
* stappler::FilePath

Возвращает:
* bool

# ::stappler::vg::VectorImage::~VectorImage()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор


# ::stappler::vg::VectorImage::init(stappler::geom::Size2,stappler::StringView)

## BRIEF

Создаёт изображение из отдельного закодированного пути

## CONTENT

Доступ: public

Создаёт изображение из отдельного закодированного пути

Параметры:
* stappler::geom::Size2 - размер изображения
* stappler::StringView - строка с данными пути в формате SVG-тега path.

Возвращает:
* bool - true - успешная инициализация

# ::stappler::vg::VectorImage::init(stappler::geom::Size2,stappler::vg::VectorPath&&)

## BRIEF

Создаёт изображение, копируя в него путь

## CONTENT

Доступ: public

Создаёт изображение, копируя в него путь

Параметры:
* stappler::geom::Size2 - размер изображения
* stappler::vg::VectorPath&& - исходный путь

Возвращает:
* bool - true - успешная инициализация

# ::stappler::vg::VectorImage::init(stappler::geom::Size2)

## BRIEF

Создаёт пустое изображение

## CONTENT

Доступ: public

Создаёт пустое изображение

Параметры:
* stappler::geom::Size2 - размер изображения

Возвращает:
* bool - true - успешная инициализация

# ::stappler::vg::VectorImage::init(stappler::StringView)

## BRIEF

Создаёт изображение из SVG

## CONTENT

Доступ: public

Создаёт изображение из SVG

Параметры:
* stappler::StringView - строка с данными SVG

Возвращает:
* bool - true - успешная инициализация

# ::stappler::vg::VectorImage::init(stappler::BytesView)

## BRIEF

Создаёт изображение из SVG

## CONTENT

Доступ: public

Создаёт изображение из SVG

Параметры:
* stappler::BytesView - строка с данными SVG

Возвращает:
* bool - true - успешная инициализация

# ::stappler::vg::VectorImage::init(stappler::FilePath)

## BRIEF

Создаёт изображение из SVG

## CONTENT

Доступ: public

Создаёт изображение из SVG

Параметры:
* stappler::FilePath - путь к файлу с данными SVG

Возвращает:
* bool - true - успешная инициализация

# ::stappler::vg::VectorImage::setImageSize(stappler::geom::Size2 const&)

## BRIEF

Устанавливает размер изображения

## CONTENT

Доступ: public

Устанавливает размер изображения

Параметры:
* stappler::geom::Size2 const&


# ::stappler::vg::VectorImage::getImageSize() const

## BRIEF

Возвращает размер изображения

## CONTENT

Доступ: public

Возвращает размер изображения

Возвращает:
* stappler::geom::Size2

# ::stappler::vg::VectorImage::getViewBox() const

## BRIEF

Возвращает видимый регион изображения

## CONTENT

Доступ: public

Возвращает видимый регион изображения

Возвращает:
* stappler::geom::Rect

# ::stappler::vg::VectorImage::addPath(stappler::vg::VectorPath const&,stappler::StringView,stappler::StringView,stappler::geom::Mat4)

## BRIEF

Копирует путь в изображение

## CONTENT

Доступ: public

Копирует путь в изображение

Параметры:
* stappler::vg::VectorPath const& - исходный путь
* stappler::StringView - идентификатор. Может быть пустым, тогда будет создан автоматически
* stappler::StringView - идентификатор кеша. Должен быть пустым либо уникальным для этого пути в рамках всей системы
* stappler::geom::Mat4 - матрица трансформации для пути

Возвращает:
* Rc<stappler::vg::VectorPathRef> - объект ссылки на путь внутри изображения для манипуляции с ним

# ::stappler::vg::VectorImage::addPath(stappler::vg::VectorPath&&,stappler::StringView,stappler::StringView,stappler::geom::Mat4)

## BRIEF

Перемещает путь в изображение

## CONTENT

Доступ: public

Перемещает путь в изображение

Параметры:
* stappler::vg::VectorPath&& - исходный путь
* stappler::StringView - идентификатор. Может быть пустым, тогда будет создан автоматически
* stappler::StringView - идентификатор кеша. Должен быть пустым либо уникальным для этого пути в рамках всей системы
* stappler::geom::Mat4 - матрица трансформации для пути

Возвращает:
* Rc<stappler::vg::VectorPathRef> - объект ссылки на путь внутри изображения для манипуляции с ним

# ::stappler::vg::VectorImage::addPath(stappler::StringView,stappler::StringView,stappler::geom::Mat4)

## BRIEF

Добавляет новый пустой путь в изображение

## CONTENT

Доступ: public

Добавляет новый пустой путь в изображение

Параметры:
* stappler::StringView - идентификатор. Может быть пустым, тогда будет создан автоматически
* stappler::StringView - идентификатор кеша. Должен быть пустым либо уникальным для этого пути в рамках всей системы
* stappler::geom::Mat4 - матрица трансформации для пути

Возвращает:
* Rc<stappler::vg::VectorPathRef> - объект ссылки на путь внутри изображения для манипуляции с ним

# ::stappler::vg::VectorImage::getPath(stappler::StringView) const

## BRIEF

Получает путь по идентификатору

## CONTENT

Доступ: public

Получает путь по идентификатору

Параметры:
* stappler::StringView

Возвращает:
* Rc<stappler::vg::VectorPathRef> - объект ссылки на путь внутри изображения для манипуляции с ним

# ::stappler::vg::VectorImage::getPaths() const

## BRIEF

Возвращает все пути в изображении

## CONTENT

Доступ: public

Возвращает все пути в изображении. Пути хранятся в виде ссылок для возможности обратной связи при манипуляции с ними

Возвращает:
* Interface::MapType<String, Rc<VectorPathRef>> const&

# ::stappler::vg::VectorImage::removePath(Rc<stappler::vg::VectorPathRef> const&)

## BRIEF

Ударяет путь из изображения по его ссылке

## CONTENT

Доступ: public

Ударяет путь из изображения по его ссылке

Параметры:
* Rc<stappler::vg::VectorPathRef> const&


# ::stappler::vg::VectorImage::removePath(stappler::StringView)

## BRIEF

Удаляет путь по идентификатору

## CONTENT

Доступ: public

Удаляет путь по идентификатору

Параметры:
* stappler::StringView


# ::stappler::vg::VectorImage::clear()

## BRIEF

Очищает изображение, удаляет все пути

## CONTENT

Доступ: public

Очищает изображение, удаляет все пути. Использование ранее полученных манипуляторов ведёт к неопределённому поведению.

# ::stappler::vg::VectorImage::getDrawOrder() const

## BRIEF

Возвращает порядок отрисовки

## CONTENT

Доступ: public

Возвращает порядок отрисовки

Возвращает:
* Interface::VectorType<PathXRef> const&

# ::stappler::vg::VectorImage::setDrawOrder(Interface::VectorType<PathXRef> const&)

## BRIEF

Устанавливает порядок отрисовки

## CONTENT

Доступ: public

Устанавливает порядок отрисовки. Помимо идентификаторов, порядок также содержит идентификаторы кеширования и дополнительные матрицы трансформации. Один и тот же путь может быть отрисован несколько раз с разными матрицами трансформации.

Параметры:
* Interface::VectorType<PathXRef> const&


# ::stappler::vg::VectorImage::setDrawOrder(Interface::VectorType<PathXRef>&&)

## BRIEF

Устанавливает порядок отрисовки

## CONTENT

Доступ: public

Устанавливает порядок отрисовки. Помимо идентификаторов, порядок также содержит идентификаторы кеширования и дополнительные матрицы трансформации. Один и тот же путь может быть отрисован несколько раз с разными матрицами трансформации.

Параметры:
* Interface::VectorType<PathXRef>&&


# ::stappler::vg::VectorImage::resetDrawOrder()

## BRIEF

Устанавливает порядок отрисовки по умолчанию

## CONTENT

Доступ: public

Устанавливает порядок отрисовки по умолчанию. Порядок по умолчанию - в порядке имён идентификаторов.


# ::stappler::vg::VectorImage::setViewBoxTransform(stappler::geom::Mat4 const&)

## BRIEF

Явно устанавливает матрицу трансформации для проецирования изображения в видимый регион

## CONTENT

Доступ: public

Явно устанавливает матрицу трансформации для проецирования изображения в видимый регион. Матрица по умолчанию задаётся при чтении изображения автоматически.

Параметры:
* stappler::geom::Mat4 const&


# ::stappler::vg::VectorImage::getViewBoxTransform() const

## BRIEF

Возвращает матрицу трансформации для проецирования изобажения в видимый регион

## CONTENT

Доступ: public

Возвращает матрицу трансформации для проецирования изобажения в видимый регион

Возвращает:
* stappler::geom::Mat4 const&

# ::stappler::vg::VectorImage::setBatchDrawing(bool)

## BRIEF

Устанавливает флаг пакетной отрисовки

## CONTENT

Доступ: public

Устанавливает флаг пакетной отрисовки. Пакетная отрисовка эффективна, когда пути в изображении не пересекаются. В противном случае, теряется порядок отрисовки и особенности наложения. Нет эффективного способа оценить наличие пересечений, потому флаг необходимо устанавливать явно.

Параметры:
* bool


# ::stappler::vg::VectorImage::isBatchDrawing() const

## BRIEF

Возвращает флаг пакетной отрисовки

## CONTENT

Доступ: public

Возвращает флаг пакетной отрисовки

Возвращает:
* bool

# ::stappler::vg::VectorImage::popData()

## BRIEF

Возвращает текущие данные изображения

## CONTENT

Доступ: public

Возвращает текущие данные изображения, помечает его для copy-on-write

Возвращает:
* Rc<stappler::vg::VectorImageData>

# ::stappler::vg::VectorImage::isDirty() const

## BRIEF

Проверяет флаг изменённости изображения

## CONTENT

Доступ: public

Проверяет флаг изменённости изображения. По этому флагу внешняя система может узнать, было ли изображение изменено с момента последней отрисовки

Возвращает:
* bool

# ::stappler::vg::VectorImage::setDirty()

## BRIEF

Устанавливает флаг изменённости изображения

## CONTENT

Доступ: public

Устанавливает флаг изменённости изображения


# ::stappler::vg::VectorImage::clearDirty()

## BRIEF

Очищает флаг изменённости изображения

## CONTENT

Доступ: public

Очищает флаг изменённости изображения


# ::stappler::vg::VectorImage::copy()

## BRIEF

Выполняет внутреннее копирование данных

## CONTENT

Доступ: protected

Выполняет внутреннее копирование данных


# ::stappler::vg::VectorImage::markCopyOnWrite()

## BRIEF

Помечает изображение для потенциального копирования

## CONTENT

Доступ: protected

Помечает изображение для потенциального копирования


# ::stappler::vg::VectorImage::copyPath(stappler::StringView)

## BRIEF

Копирует путь по его идентификатору

## CONTENT

Доступ: protected

Копирует путь по его идентификатору

Параметры:
* stappler::StringView

Возвращает:
* Rc<stappler::vg::VectorPath>

# ::stappler::vg::VectorImage::_dirty

## BRIEF

Флаг изменённости изображения

## CONTENT

Доступ: protected

Флаг изменённости изображения

Тип: bool


# ::stappler::vg::VectorImage::_copyOnWrite

## BRIEF

Флаг необходимости копирования при изменении

## CONTENT

Доступ: protected

Флаг необходимости копирования при изменении

Тип: bool


# ::stappler::vg::VectorImage::_data

## BRIEF

Текущие данные изображения

## CONTENT

Доступ: protected

Текущие данные изображения

Тип: Rc<stappler::vg::VectorImageData>


# ::stappler::vg::VectorImage::_paths

## BRIEF

Пути в изображении

## CONTENT

Доступ: protected

Пути в изображении

Тип: Interface::MapType<String, Rc<VectorPathRef>>


# ::stappler::vg::VectorImageData::draw<typename>(Callback const&) const

## BRIEF

Обходит пути в изображении для их рисования

## CONTENT

Доступ: public

Обходит пути в изображении для их рисования (растеризации или триангуляции)

Параметры шаблона:
* typename Callback

Параметры:
* Callback const&

Функция принимает параметры:
* VectorPath const& - путь для отрисовки
* StringView - идентификатор пути для кеширования
* Mat4 const& - матрица трансформации для пути
