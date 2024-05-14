Title: XL2d.h


# XENOLITH_RENDERER_BASIC2D_XL2D_H_

## BRIEF

Базовый заголовок типов для двумерного рисования

## CONTENT

Базовый заголовок типов для двумерного рисования


# ::stappler::xenolith::basic2d::Vertex

## BRIEF

Тип одиночной вершины

## CONTENT

Тип одиночной вершины


# ::stappler::xenolith::basic2d::MaterialData

## BRIEF

Тип данных материала

## CONTENT

Тип данных материала


# ::stappler::xenolith::basic2d::TransformData

## BRIEF

Тип данных для трансформации вершин

## CONTENT

Тип данных для трансформации вершин


# ::stappler::xenolith::basic2d::ShadowData

## BRIEF

Тип данных затенения

## CONTENT

Тип данных затенения


# ::stappler::xenolith::basic2d::DataAtlasIndex

## BRIEF

Тип индекса для атласа

## CONTENT

Тип индекса для атласа


# ::stappler::xenolith::basic2d::DataAtlasValue

## BRIEF

Тип данных для атласа

## CONTENT

Тип данных для атласа


# ::stappler::xenolith::basic2d::AmbientLightData

## BRIEF

Данные света окружения

## CONTENT

Данные света окружения


# ::stappler::xenolith::basic2d::DirectLightData

## BRIEF

Данные направленного света

## CONTENT

Данные направленного света

# ::stappler::xenolith::basic2d::Sdf2DObjectData

## BRIEF

Данные объекта SDF

## CONTENT

Данные объекта SDF


# ::stappler::xenolith::basic2d::Circle2DIndex

## BRIEF

Данные индекса для круга SDF

## CONTENT

Данные индекса для круга SDF


# ::stappler::xenolith::basic2d::Triangle2DIndex

## BRIEF

Данные индекса для треугольника SDF

## CONTENT

Данные индекса для треугольника SDF


# ::stappler::xenolith::basic2d::Rect2DIndex

## BRIEF

Данные индекса для прямоугольника SDF

## CONTENT

Данные индекса для прямоугольника SDF

# ::stappler::xenolith::basic2d::RoundedRect2DIndex

## BRIEF

Данные индекса для прямоугольника со скруглёнными углами SDF

## CONTENT

Данные индекса для прямоугольника со скруглёнными углами SDF


# ::stappler::xenolith::basic2d::Polygon2DIndex

## BRIEF

Данные индекса для полигона SDF

## CONTENT

Данные индекса для полигона SDF

# ::stappler::xenolith::basic2d::Triangle

## BRIEF

Тип треугольника

## CONTENT

Тип треугольника


# ::stappler::xenolith::basic2d::Triangle::a

## BRIEF

Вершина треугольника

## CONTENT

Вершина треугольника

Тип: stappler::xenolith::basic2d::Vertex


# ::stappler::xenolith::basic2d::Triangle::b

## BRIEF

Вершина треугольника

## CONTENT

Вершина треугольника

Тип: stappler::xenolith::basic2d::Vertex


# ::stappler::xenolith::basic2d::Triangle::c

## BRIEF

Вершина треугольника

## CONTENT

Вершина треугольника

Тип: stappler::xenolith::basic2d::Vertex


# ::stappler::xenolith::basic2d::Quad

## BRIEF

Данные четырёхугольника

## CONTENT

Данные четырёхугольника


# ::stappler::xenolith::basic2d::Quad::tl

## BRIEF

Вершина четырёхугольника

## CONTENT

Вершина четырёхугольника

Тип: stappler::xenolith::basic2d::Vertex


# ::stappler::xenolith::basic2d::Quad::bl

## BRIEF

Вершина четырёхугольника

## CONTENT

Вершина четырёхугольника

Тип: stappler::xenolith::basic2d::Vertex


# ::stappler::xenolith::basic2d::Quad::tr

## BRIEF

Вершина четырёхугольника

## CONTENT

Вершина четырёхугольника

Тип: stappler::xenolith::basic2d::Vertex


# ::stappler::xenolith::basic2d::Quad::br

## BRIEF

Вершина четырёхугольника

## CONTENT

Вершина четырёхугольника

Тип: stappler::xenolith::basic2d::Vertex


# ::stappler::xenolith::basic2d::VertexSpan

## BRIEF

Данные набора вершин для материала

## CONTENT

Данные набора вершин для материала


# ::stappler::xenolith::basic2d::VertexSpan::material

## BRIEF

Идентификатор материала

## CONTENT

Идентификатор материала

Тип: core::MaterialId


# ::stappler::xenolith::basic2d::VertexSpan::indexCount

## BRIEF

Число вершин в индексном буфере

## CONTENT

Число вершин в индексном буфере

Тип: uint32_t


# ::stappler::xenolith::basic2d::VertexSpan::instanceCount

## BRIEF

Число экземпляров

## CONTENT

Число экземпляров

Тип: uint32_t


# ::stappler::xenolith::basic2d::VertexSpan::firstIndex

## BRIEF

Первая вершина в индексном буфере

## CONTENT

Первая вершина в индексном буфере

Тип: uint32_t


# ::stappler::xenolith::basic2d::VertexSpan::state

## BRIEF

Идентификатор набора параметров

## CONTENT

Идентификатор набора параметров

Тип: stappler::xenolith::StateId


# ::stappler::xenolith::basic2d::VertexSpan::gradientOffset

## BRIEF

Смещение индекса градиента

## CONTENT

Смещение индекса градиента

Тип: uint32_t


# ::stappler::xenolith::basic2d::VertexSpan::gradientCount

## BRIEF

Число вершин градиента

## CONTENT

Число вершин градиента

Тип: uint32_t


# ::stappler::xenolith::basic2d::VertexData

## BRIEF

Данные набора вершин

## CONTENT

Данные набора вершин

Базовые классы:
* Ref


# ::stappler::xenolith::basic2d::VertexData::data

## BRIEF

Данные вершин

## CONTENT

Данные вершин

Тип: Vector<stappler::xenolith::basic2d::Vertex>


# ::stappler::xenolith::basic2d::VertexData::indexes

## BRIEF

Индексы вершин

## CONTENT

Индексы вершин

Тип: Vector<uint32_t>


# ::stappler::xenolith::basic2d::TransformVertexData

## BRIEF

Данные трансформированных вершин

## CONTENT

Данные трансформированных вершин


# ::stappler::xenolith::basic2d::TransformVertexData::transform

## BRIEF

Матрица трансформации

## CONTENT

Матрица трансформации

Тип: stappler::geom::Mat4


# ::stappler::xenolith::basic2d::TransformVertexData::data

## BRIEF

Данные вершин

## CONTENT

Данные вершин

Тип: Rc<stappler::xenolith::basic2d::VertexData>


# ::stappler::xenolith::basic2d::SdfShape

## BRIEF

Перечисление форм для SDF

## CONTENT

Перечисление форм для SDF

Значения:
* Circle2D
* Rect2D
* RoundedRect2D
* Triangle2D
* Polygon2D


# ::stappler::xenolith::basic2d::SdfPrimitive2D

## BRIEF

Базовый SDF примитив

## CONTENT

Базовый SDF примитив


# ::stappler::xenolith::basic2d::SdfPrimitive2D::origin

## BRIEF

Исходная точка

## CONTENT

Исходная точка

Тип: stappler::geom::Vec2


# ::stappler::xenolith::basic2d::SdfCircle2D

## BRIEF

Примитив круга SDF

## CONTENT

Примитив круга SDF

Базовые классы:
* SdfPrimitive2D


# ::stappler::xenolith::basic2d::SdfCircle2D::radius

## BRIEF

Радиус круга

## CONTENT

Радиус круга

Тип: float


# ::stappler::xenolith::basic2d::SdfRect2D

## BRIEF

Примитив прямоугольника SDF

## CONTENT

Примитив прямоугольника SDF

Базовые классы:
* SdfPrimitive2D


# ::stappler::xenolith::basic2d::SdfRect2D::size

## BRIEF

Размер прямоугольника

## CONTENT

Размер прямоугольника

Тип: stappler::geom::Size2


# ::stappler::xenolith::basic2d::SdfRoundedRect2D

## BRIEF

Примитив прямоугольника со скруглёнными углами SDF

## CONTENT

Примитив прямоугольника со скруглёнными углами SDF

Базовые классы:
* SdfPrimitive2D


# ::stappler::xenolith::basic2d::SdfRoundedRect2D::size

## BRIEF

Размер прямоугольника

## CONTENT

Размер прямоугольника

Тип: stappler::geom::Size2


# ::stappler::xenolith::basic2d::SdfRoundedRect2D::radius

## BRIEF

Набор радиусов скругления

## CONTENT

Набор радиусов скругления

Тип: stappler::geom::Vec4


# ::stappler::xenolith::basic2d::SdfTriangle2D

## BRIEF

Тип треугольника SDF

## CONTENT

Тип треугольника SDF

Базовые классы:
* SdfPrimitive2D


# ::stappler::xenolith::basic2d::SdfTriangle2D::a

## BRIEF

Вершина треугольника

## CONTENT

Вершина треугольника

Тип: stappler::geom::Vec2


# ::stappler::xenolith::basic2d::SdfTriangle2D::b

## BRIEF

Вершина треугольника

## CONTENT

Вершина треугольника

Тип: stappler::geom::Vec2


# ::stappler::xenolith::basic2d::SdfTriangle2D::c

## BRIEF

Вершина треугольника

## CONTENT

Вершина треугольника

Тип: stappler::geom::Vec2


# ::stappler::xenolith::basic2d::SdfPolygon2D

## BRIEF

Тип полигона SDF

## CONTENT

Тип полигона SDF


# ::stappler::xenolith::basic2d::SdfPolygon2D::points

## BRIEF

Точки полигона

## CONTENT

Точки полигона

Тип: SpanView<stappler::geom::Vec2>


# ::stappler::xenolith::basic2d::SdfPrimitive2DHeader

## BRIEF

Заголовок примитива SDF

## CONTENT

Заголовок примитива SDF


# ::stappler::xenolith::basic2d::SdfPrimitive2DHeader::type

## BRIEF

Тип примитива

## CONTENT

Тип примитива

Тип: stappler::xenolith::basic2d::SdfShape


# ::stappler::xenolith::basic2d::SdfPrimitive2DHeader::bytes

## BRIEF

Данные объекта

## CONTENT

Данные объекта

Тип: stappler::BytesView


# ::stappler::xenolith::basic2d::DeferredVertexResult

## BRIEF

Тип отложенно вычисляемого набора вершин

## CONTENT

Тип отложенно вычисляемого набора вершин. Класс потокобезопасен.

Базовые классы:
* Ref


# ::stappler::xenolith::basic2d::DeferredVertexResult::~DeferredVertexResult()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор

# ::stappler::xenolith::basic2d::DeferredVertexResult::getData()

## BRIEF

Возвращает готовые данные

## CONTENT

Доступ: public

Возвращает готовые данные. Блокируется до готовности.

Возвращает:
* SpanView<stappler::xenolith::basic2d::TransformVertexData>

# ::stappler::xenolith::basic2d::DeferredVertexResult::isReady() const

## BRIEF

Проверяет готовность данных

## CONTENT

Доступ: public

Проверяет готовность данных

Возвращает:
* bool

# ::stappler::xenolith::basic2d::DeferredVertexResult::isWaitOnReady() const

## BRIEF

Проверяет, находится ли структура в режиме ожидания

## CONTENT

Доступ: public

Проверяет, находится ли структура в режиме ожидания

Возвращает:
* bool

# ::stappler::xenolith::basic2d::DeferredVertexResult::handleReady()

## BRIEF

Обрабатывает событие готовности данных

## CONTENT

Доступ: public

Обрабатывает событие готовности данных


# ::stappler::xenolith::basic2d::DeferredVertexResult::_waitOnReady

## BRIEF

Флаг режима ожидания

## CONTENT

Доступ: protected

Флаг режима ожидания

Тип: bool


# ::stappler::xenolith::basic2d::DeferredVertexResult::_isReady

## BRIEF

Флаг готовности

## CONTENT

Доступ: protected

Флаг готовности

Тип: std::atomic<bool>


# ::stappler::xenolith::basic2d::ShadowLightInput

## BRIEF

Данные для системы освещения

## CONTENT

Данные для системы освещения


# ::stappler::xenolith::basic2d::ShadowLightInput::globalColor

## BRIEF

Цвет глобального освещения

## CONTENT

Цвет глобального освещения

Тип: stappler::geom::Color4F


# ::stappler::xenolith::basic2d::ShadowLightInput::ambientLightCount

## BRIEF

Число источников света окружения

## CONTENT

Число источников света окружения

Тип: uint32_t


# ::stappler::xenolith::basic2d::ShadowLightInput::directLightCount

## BRIEF

Число направленных источников света

## CONTENT

Число направленных источников света

Тип: uint32_t


# ::stappler::xenolith::basic2d::ShadowLightInput::sceneDensity

## BRIEF

Плотность пикселей на сцене

## CONTENT

Плотность пикселей на сцене

Тип: float


# ::stappler::xenolith::basic2d::ShadowLightInput::shadowDensity

## BRIEF

Коэффициет снижения плотности пикселенй для карты теней

## CONTENT

Коэффициет снижения плотности пикселенй для карты теней

Тип: float


# ::stappler::xenolith::basic2d::ShadowLightInput::luminosity

## BRIEF

Максимальный индекс освещённости

## CONTENT

Максимальный индекс освещённости. Влияет на цвет самой яркой точки сцены. Может вычисляться автоматически.

Тип: float


# ::stappler::xenolith::basic2d::ShadowLightInput::padding0

## BRIEF

Заполнитель

## CONTENT

Заполнитель

Тип: float


# ::stappler::xenolith::basic2d::ShadowLightInput::ambientLights

## BRIEF

Данные источников света окружения

## CONTENT

Данные источников света окружения

Тип: stappler::xenolith::basic2d::AmbientLightData[16]


# ::stappler::xenolith::basic2d::ShadowLightInput::directLights

## BRIEF

Данные направленных источников цвета

## CONTENT

Данные направленных источников цвета

Тип: stappler::xenolith::basic2d::DirectLightData[16]


# ::stappler::xenolith::basic2d::ShadowLightInput::addAmbientLight(const stappler::geom::Vec4&,const stappler::geom::Color4F&,bool)

## BRIEF

Добавляет свет окружения

## CONTENT

Добавляет свет окружения

Параметры:
* const stappler::geom::Vec4& - направление света и коэффициент рассивания
* const stappler::geom::Color4F& - цвет света
* bool - флаг смягчения

Возвращает:
* bool

# ::stappler::xenolith::basic2d::ShadowLightInput::addDirectLight(const stappler::geom::Vec4&,const stappler::geom::Color4F&,const stappler::geom::Vec4&)

## BRIEF

Добавляет направленный свет

## CONTENT

Добавляет направленный свет

Параметры:
* const stappler::geom::Vec4&  направление света и коэффициент рассивания
* const stappler::geom::Color4F&- цвет света
* const stappler::geom::Vec4& - позиция и радиус источника света

Возвращает:
* bool

# ::stappler::xenolith::basic2d::ShadowLightInput::getShadowExtent(stappler::geom::Size2) const

## BRIEF

Возвращает размер карты теней для сцены

## CONTENT

Параметры:
* stappler::geom::Size2

Возвращает размер карты теней для сцены

Возвращает:
* stappler::geom::Extent2

# ::stappler::xenolith::basic2d::ShadowLightInput::getShadowSize(stappler::geom::Size2) const

## BRIEF

Возвращает размер карты теней для сцены

## CONTENT

Параметры:
* stappler::geom::Size2

Возвращает размер карты теней для сцены

Параметры:
* stappler::geom::Size2

Возвращает:
* stappler::geom::Size2