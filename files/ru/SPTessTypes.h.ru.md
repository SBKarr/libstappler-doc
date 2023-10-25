Title: SPTessTypes.h


# STAPPLER_TESS_SPTESSTYPES_H_

## BRIEF

Вспомогательные типы для тесселятора

## CONTENT

Вспомогательные типы для тесселятора


# ::stappler::geom::QueueHandle

## BRIEF

Тип индекса для очереди вершин

## CONTENT

Тип индекса для очереди вершин


# ::stappler::geom::VertexSetPrealloc

## BRIEF

Число преаллоцированных вершин

## CONTENT

Число преаллоцированных вершин

Тип: uint32_t const


# ::stappler::geom::EdgeSetPrealloc

## BRIEF

Число преаллоцированных граней

## CONTENT

Число преаллоцированных граней

Тип: uint32_t const


# ::stappler::geom::VertexAllocBatch

## BRIEF

Число вершин в пакете для аллокации

## CONTENT

Число вершин в пакете для аллокации

Тип: uint32_t const


# ::stappler::geom::EdgeAllocBatch

## BRIEF

Число граней в пакете для аллокации

## CONTENT

Число граней в пакете для аллокации

Тип: uint32_t const


# ::stappler::geom::TessVerboseInfo

## BRIEF

Текущий уровень вывода для алгоритмов тесселятора

## CONTENT

Текущий уровень вывода для алгоритмов тесселятора

Тип: int


# ::stappler::geom::VertexType

## BRIEF

Классификация типа вершины для тесселятора

## CONTENT

Классификация типа вершины для тесселятора. См. Computational Geometry, Mark de Berg (1997)

Значения:
* Start
* End
* Split
* Merge
* RegularTop
* RegularBottom


# ::stappler::geom::Helper

## BRIEF

Вспомогательный тип для классификации вершины

## CONTENT

Вспомогательный тип для классификации вершины. В алгоритме де Берга тесселяция проводится только для одного контура, а тесселятор выполняет проверку для нескольких контуров параллельно. Вспомогательный тип приближает ситуацию, описанную в алгоритме де Берга.

Вспомогательный тип определяет тип вершины между двумя полугранями, присоединёнными к ней.

# ::stappler::geom::Helper::e1

## BRIEF

Первая полугрань угла вершины

## CONTENT

Первая полугрань угла вершины

Тип: stappler::geom::HalfEdge*


# ::stappler::geom::Helper::e2

## BRIEF

Вторая полугрань угла вершины

## CONTENT

Вторая полугрань угла вершины

Тип: stappler::geom::HalfEdge*


# ::stappler::geom::Helper::type

## BRIEF

Вычисленный тип вершины между полугранями

## CONTENT

Вычисленный тип вершины между полугранями

Тип: stappler::geom::VertexType


# ::stappler::geom::EdgeDictNode

## BRIEF

Тип записи в словаре граней

## CONTENT

Тип записи в словаре граней. Словарь граней используется для поиска граней выше или ниже точки для текущего положения сканирующей линии.


# ::stappler::geom::EdgeDictNode::org

## BRIEF

Исходная точка грани

## CONTENT

Исходная точка грани

Тип: stappler::geom::Vec2


# ::stappler::geom::EdgeDictNode::norm

## BRIEF

Нормализованное направление грани

## CONTENT

Нормализованное направление грани

Тип: stappler::geom::Vec2


# ::stappler::geom::EdgeDictNode::value

## BRIEF

Комбинированный тип для текущего положения точки вдоль сканирующей линии и точки завершения грани

## CONTENT

Комбинированный тип для текущего положения точки вдоль сканирующей линии и точки завершения грани. Значения совмещены в одном типе для алгоритма на основе SIMD.

Тип: stappler::geom::Vec4


# ::stappler::geom::EdgeDictNode::edge

## BRIEF

Указатель на грань

## CONTENT

Указатель на грань

Тип: stappler::geom::Edge*


# ::stappler::geom::EdgeDictNode::windingAbove

## BRIEF

Значение поворотного индекса над гранью

## CONTENT

Значение поворотного индекса над гранью

Тип: int16_t


# ::stappler::geom::EdgeDictNode::horizontal

## BRIEF

Доминирующее направление грани

## CONTENT

Доминирующее направление грани, true если горизонтально

Тип: bool


# ::stappler::geom::EdgeDictNode::helper

## BRIEF

Значение типа вершины для грани

## CONTENT

Значение типа вершины для грани

Тип: stappler::geom::Helper


# ::stappler::geom::EdgeDictNode::current() const

## BRIEF

Возвращает текущее положение на грани вдоль сканирующей линии

## CONTENT

Возвращает текущее положение на грани вдоль сканирующей линии

Возвращает:
* stappler::geom::Vec2

# ::stappler::geom::EdgeDictNode::dst() const

## BRIEF

Возвращает конечную точку грани

## CONTENT

Возвращает конечную точку грани

Возвращает:
* stappler::geom::Vec2

# ::stappler::geom::EdgeDictNode::dstX() const

## BRIEF

Возвращает конечное значение X

## CONTENT

Возвращает конечное значение X

Возвращает:
* float

# ::stappler::geom::EdgeDictNode::dstY() const

## BRIEF

Возвращает конечное значение Y

## CONTENT

Возвращает конечное значение Y

Возвращает:
* float

# ::stappler::geom::EdgeDictNode::operator<(stappler::geom::EdgeDictNode const&) const

## BRIEF

Проверяет, находится ли текущая грань ниже переданной

## CONTENT

Проверяет, находится ли текущая грань ниже переданной

Параметры:
* stappler::geom::EdgeDictNode const&

Возвращает:
* bool

# ::stappler::geom::EdgeDictNode::operator<(stappler::geom::Edge const&) const

## BRIEF

Проверяет, находится ли текущая грань ниже переданной

## CONTENT

Проверяет, находится ли текущая грань ниже переданной

Параметры:
* stappler::geom::Edge const&

Возвращает:
* bool

# ::stappler::geom::EdgeDictNode::operator<(stappler::geom::Vec2 const&) const

## BRIEF

Проверяет, находится ли текущая грань ниже переданной точки

## CONTENT

Проверяет, находится ли текущая грань ниже переданной точки

Параметры:
* stappler::geom::Vec2 const&

Возвращает:
* bool

# ::stappler::geom::EdgeDictNode::operator<=(stappler::geom::EdgeDictNode const&) const

## BRIEF

Проверяет, находится ли текущая грань ниже переданной или совпадает с ней в текущей точке

## CONTENT

Проверяет, находится ли текущая грань ниже переданной или совпадает с ней в текущей точке

Параметры:
* stappler::geom::EdgeDictNode const&

Возвращает:
* bool

# ::stappler::geom::EdgeDictNode::operator==(stappler::geom::EdgeDictNode const&) const

## BRIEF

Проверяет, совпадает ли переданная грань с текущей в текущей точке сканирующей линии

## CONTENT

Проверяет, совпадает ли переданная грань с текущей в текущей точке сканирующей линии

Параметры:
* stappler::geom::EdgeDictNode const&

Возвращает:
* bool

# ::stappler::geom::Vertex

## BRIEF

Тип вершины

## CONTENT

Тип вершины


# ::stappler::geom::Vertex::_edge

## BRIEF

Исходная грань вершины для обхода вокруг неё

## CONTENT

Исходная грань вершины для обхода вокруг неё

Тип: stappler::geom::HalfEdge*


# ::stappler::geom::Vertex::_origin

## BRIEF

Позиция вершины

## CONTENT

Позиция вершины

Тип: stappler::geom::Vec2


# ::stappler::geom::Vertex::_uniqueIdx

## BRIEF

Уникальный индекс вершины в тесселяторе

## CONTENT

Уникальный индекс вершины в тесселяторе

Тип: uint32_t


# ::stappler::geom::Vertex::_queueHandle

## BRIEF

Индекс вершины в очереди обработки

## CONTENT

Индекс вершины в очереди обработки

Тип: stappler::geom::QueueHandle


# ::stappler::geom::Vertex::_exportIdx

## BRIEF

Индекс вершины для экспорта

## CONTENT

Индекс вершины для экспорта

Тип: uint32_t


# ::stappler::geom::Vertex::insertBefore(stappler::geom::HalfEdge*)

## BRIEF

Добавляет грань, присоединённую к вершине

## CONTENT

Добавляет грань, присоединённую к вершине

Параметры:
* stappler::geom::HalfEdge*


# ::stappler::geom::Vertex::removeFromList(stappler::geom::Vertex*)

## BRIEF

Заменяет текущую вершину на другую

## CONTENT

Заменяет текущую вершину на другую

Параметры:
* stappler::geom::Vertex*


# ::stappler::geom::Vertex::foreach(Callback<void (const stappler::geom::HalfEdge &)> const&) const

## BRIEF

Обходит все грани при вершине

## CONTENT

Обходит все грани при вершине

Параметры:
* Callback<void (const stappler::geom::HalfEdge &)> const&


# ::stappler::geom::Vertex::relocate(stappler::geom::Vec2 const&)

## BRIEF

Смещает вершину на новую позицию

## CONTENT

Смещает вершину на новую позицию

Параметры:
* stappler::geom::Vec2 const&


# ::stappler::geom::FaceEdge

## BRIEF

Грань в контуре

## CONTENT

Грань в контуре

Базовые классы:
* memory::AllocPool


# ::stappler::geom::FaceEdge::_next

## BRIEF

Следующая грань в контуре

## CONTENT

Следующая грань в контуре

Тип: stappler::geom::FaceEdge*


# ::stappler::geom::FaceEdge::_vertex

## BRIEF

Вершина грани

## CONTENT

Вершина грани

Тип: stappler::geom::Vertex*


# ::stappler::geom::FaceEdge::_origin

## BRIEF

Исходная точка грани

## CONTENT

Исходная точка грани

Тип: stappler::geom::Vec2


# ::stappler::geom::FaceEdge::_displaced

## BRIEF

Смещённая позиция грани

## CONTENT

Смещённая позиция грани

Тип: stappler::geom::Vec2


# ::stappler::geom::FaceEdge::_value

## BRIEF

Значение для алгоритма антиалиасинга

## CONTENT

Значение для алгоритма антиалиасинга (1.0 - исходная вершина)

Тип: float


# ::stappler::geom::FaceEdge::_direction

## BRIEF

Угол грани к оси oX

## CONTENT

Угол грани к оси oX

Тип: float


# ::stappler::geom::FaceEdge::_splitVertex

## BRIEF

Вершина помечена для разделения при самопересечении

## CONTENT

Вершина помечена для разделения при самопересечении

Тип: bool


# ::stappler::geom::FaceEdge::_degenerate

## BRIEF

Грань вырождена

## CONTENT

Грань вырождена

Тип: bool


# ::stappler::geom::FaceEdge::foreach(Callback<void (const stappler::geom::FaceEdge &)> const&) const

## BRIEF

Обходит все грани вдоль контура

## CONTENT

Обходит все грани вдоль контура

Параметры:
* Callback<void (const stappler::geom::FaceEdge &)> const&


# ::stappler::geom::HalfEdge

## BRIEF

Тип полуграни

## CONTENT

Тип полуграни. Каждая грань формируется из двух разнонаправленных симметричных полуграней


# ::stappler::geom::HalfEdge::_originNext

## BRIEF

Следующая полугрань вокруг вершины

## CONTENT

Следующая полугрань вокруг вершины

Тип: stappler::geom::HalfEdge*


# ::stappler::geom::HalfEdge::_leftNext

## BRIEF

Следующая полугрань вдоль левого направления обхода контура (против часовой)

## CONTENT

Следующая полугрань вдоль левого направления обхода контура (против часовой)

Тип: stappler::geom::HalfEdge*


# ::stappler::geom::HalfEdge::origin

## BRIEF

Исходная точка полуграни

## CONTENT

Исходная точка полуграни

Тип: stappler::geom::Vec2


# ::stappler::geom::HalfEdge::vertex

## BRIEF

Индекс исходной вершины

## CONTENT

Индекс исходной вершины

Тип: uint32_t


# ::stappler::geom::HalfEdge::_realWinding

## BRIEF

Вычисленный поворотный индекс над гранью

## CONTENT

Вычисленный поворотный индекс над гранью

Тип: int16_t


# ::stappler::geom::HalfEdge::isRight

## BRIEF

Является ли грань направленно вправо

## CONTENT

Является ли грань направленно вправо (-1 - влево, 1 - вправо), значение обусловлено удобством алгоритмизации

Тип: int16_t


# ::stappler::geom::HalfEdge::edgeOffset

## BRIEF

Смещение грани в массиве полуграней

## CONTENT

Смещение грани в массиве полуграней (0 или 1)

Тип: int16_t


# ::stappler::geom::HalfEdge::_winding

## BRIEF

Изменение поворотного индекса при пересечении грани

## CONTENT

Изменение поворотного индекса при пересечении грани (-1, 0 или 1)

Тип: int16_t


# ::stappler::geom::HalfEdge::_mark

## BRIEF

Индекс для маркировки при обходе граней

## CONTENT

Индекс для маркировки при обходе граней

Тип: int16_t


# ::stappler::geom::HalfEdge::splitEdgeLoops(stappler::geom::HalfEdge*,stappler::geom::HalfEdge*,stappler::geom::Vertex*)

## BRIEF

Разделяет текущий контур по текущей грани, заменяет грань в вершине новой

## CONTENT

Разделяет текущий контур по текущей грани, заменяет грань в вершине новой

Параметры:
* stappler::geom::HalfEdge*
* stappler::geom::HalfEdge*
* stappler::geom::Vertex*


# ::stappler::geom::HalfEdge::joinEdgeLoops(stappler::geom::HalfEdge*,stappler::geom::HalfEdge*)

## BRIEF

Соединяет контуры по граням от первого и второго

## CONTENT

Соединяет контуры по граням от первого и второго

Параметры:
* stappler::geom::HalfEdge*
* stappler::geom::HalfEdge*


# ::stappler::geom::HalfEdge::sym() const

## BRIEF

Возвращает симметричную обратную грань

## CONTENT

Возвращает симметричную обратную грань

Возвращает:
* stappler::geom::HalfEdge*

# ::stappler::geom::HalfEdge::getIndex() const

## BRIEF

Возвращает индекс вершины грани

## CONTENT

Возвращает индекс вершины грани

Возвращает:
* uint32_t

# ::stappler::geom::HalfEdge::setOrigin(stappler::geom::Vertex const*)

## BRIEF

Устанавливает исходную вершину для полуграни

## CONTENT

Устанавливает исходную вершину для полуграни

Параметры:
* stappler::geom::Vertex const*


# ::stappler::geom::HalfEdge::copyOrigin(stappler::geom::HalfEdge const*)

## BRIEF

Копирует исходную вершину из другой полуграни

## CONTENT

Копирует исходную вершину из другой полуграни

Параметры:
* stappler::geom::HalfEdge const*


# ::stappler::geom::HalfEdge::getOriginNext() const

## BRIEF

Возвращает следующую полугрань покруг вершины (против часовой)

## CONTENT

Возвращает следующую полугрань покруг вершины (против часовой)

Возвращает:
* stappler::geom::HalfEdge*

# ::stappler::geom::HalfEdge::getOriginPrev() const

## BRIEF

Возвращает следующую полугрань покруг вершины (по часовой)

## CONTENT

Возвращает следующую полугрань покруг вершины (по часовой)

Возвращает:
* stappler::geom::HalfEdge*

# ::stappler::geom::HalfEdge::getDestinationNext() const

## BRIEF

Возвращает следующую полугрань вокруг конечной вершины (против часовой)

## CONTENT

Возвращает следующую полугрань вокруг конечной вершины (против часовой)

Возвращает:
* stappler::geom::HalfEdge*

# ::stappler::geom::HalfEdge::getDestinationPrev() const

## BRIEF

Возвращает следующую полугрань вокруг конечной вершины (по часовой)

## CONTENT

Возвращает следующую полугрань вокруг конечной вершины (по часовой)

Возвращает:
* stappler::geom::HalfEdge*

# ::stappler::geom::HalfEdge::getLeftLoopNext() const

## BRIEF

Возвращает следующую полугрань вдоль левого направления обхода

## CONTENT

Возвращает следующую полугрань вдоль левого направления обхода

Возвращает:
* stappler::geom::HalfEdge*

# ::stappler::geom::HalfEdge::getLeftLoopPrev() const

## BRIEF

Возвращает предыдущую полугрань вдоль левого направления обхода

## CONTENT

Возвращает предыдущую полугрань вдоль левого направления обхода

Возвращает:
* stappler::geom::HalfEdge*

# ::stappler::geom::HalfEdge::getRightLoopNext() const

## BRIEF

Возвращает следующую полугрань вдоль правого направления обхода

## CONTENT

Возвращает следующую полугрань вдоль правого направления обхода

Возвращает:
* stappler::geom::HalfEdge*

# ::stappler::geom::HalfEdge::getRightLoopPrev() const

## BRIEF

Возвращает предыдущую полугрань вдоль правого направления обхода

## CONTENT

Возвращает предыдущую полугрань вдоль правого направления обхода

Возвращает:
* stappler::geom::HalfEdge*

# ::stappler::geom::HalfEdge::getOrgVec() const

## BRIEF

Возвращает координаты исходной вершины

## CONTENT

Возвращает координаты исходной вершины

Возвращает:
* stappler::geom::Vec2 const&

# ::stappler::geom::HalfEdge::getDstVec() const

## BRIEF

Возвращает координаты конечной вершины

## CONTENT

Возвращает координаты конечной вершины

Возвращает:
* stappler::geom::Vec2 const&

# ::stappler::geom::HalfEdge::getNormVec() const

## BRIEF

Возвращает разность между конечной и начальной вершинами

## CONTENT

Возвращает разность между конечной и начальной вершинами

Возвращает:
* stappler::geom::Vec2

# ::stappler::geom::HalfEdge::getLength() const

## BRIEF

Возвращает длину грани

## CONTENT

Возвращает длину грани

Возвращает:
* float

# ::stappler::geom::HalfEdge::getEdge() const

## BRIEF

Возвращает указатель на полную грань

## CONTENT

Возвращает указатель на полную грань

Возвращает:
* stappler::geom::Edge*

# ::stappler::geom::HalfEdge::goesLeft() const

## BRIEF

Проверяет, идёт ли грань налево

## CONTENT

Проверяет, идёт ли грань налево

Возвращает:
* bool

# ::stappler::geom::HalfEdge::goesRight() const

## BRIEF

Проверяет, идёт ли грань направо

## CONTENT

Проверяет, идёт ли грань направо

Возвращает:
* bool

# ::stappler::geom::HalfEdge::foreachOnFace(Callback<void (stappler::geom::HalfEdge &)> const&)

## BRIEF

Обходит грани вдоль контура

## CONTENT

Обходит грани вдоль контура

Параметры:
* Callback<void (stappler::geom::HalfEdge &)> const&


# ::stappler::geom::HalfEdge::foreachOnVertex(Callback<void (stappler::geom::HalfEdge &)> const&)

## BRIEF

Обходит грани вокруг вершины

## CONTENT

Обходит грани вокруг вершины

Параметры:
* Callback<void (stappler::geom::HalfEdge &)> const&


# ::stappler::geom::HalfEdge::foreachOnFace(Callback<void (const stappler::geom::HalfEdge &)> const&) const

## BRIEF

Обходит грани вдоль контура

## CONTENT

Обходит грани вдоль контура

Параметры:
* Callback<void (const stappler::geom::HalfEdge &)> const&


# ::stappler::geom::HalfEdge::foreachOnVertex(Callback<void (const stappler::geom::HalfEdge &)> const&) const

## BRIEF

Обходит грани вокруг вершины

## CONTENT

Обходит грани вокруг вершины

Параметры:
* Callback<void (const stappler::geom::HalfEdge &)> const&


# ::stappler::geom::HalfEdge::getDirection() const

## BRIEF

Возвращает псевдоугол грани с осью oX

## CONTENT

Возвращает псевдоугол грани с осью oX

Возвращает:
* float

# ::stappler::geom::Edge

## BRIEF

Структура полной грани

## CONTENT

Структура полной грани


# ::stappler::geom::Edge::left

## BRIEF

Левая полугрань

## CONTENT

Левая полугрань

Тип: stappler::geom::HalfEdge


# ::stappler::geom::Edge::right

## BRIEF

Правая полугрань

## CONTENT

Правая полугрань

Тип: stappler::geom::HalfEdge


# ::stappler::geom::Edge::node

## BRIEF

Запись в словаре граней

## CONTENT

Запись в словаре граней

Тип: stappler::geom::EdgeDictNode const*


# ::stappler::geom::Edge::direction

## BRIEF

Псевдоугол грани с осью oX

## CONTENT

Псевдоугол грани с осью oX

Тип: float


# ::stappler::geom::Edge::inverted

## BRIEF

Флаг инвертированной оси

## CONTENT

Флаг инвертированной оси (правая грань идёт налево)

Тип: bool


# ::stappler::geom::Edge::invalidated

## BRIEF

Флаг недопустимой или вырожденной грани

## CONTENT

Флаг недопустимой или вырожденной грани

Тип: bool


# ::stappler::geom::Edge::Edge()

## BRIEF

Конструктор по умолчанию

## CONTENT

Конструктор по умолчанию


# ::stappler::geom::Edge::getLeftVec() const

## BRIEF

Возвращает координаты левой вершины

## CONTENT

Возвращает координаты левой вершины

Возвращает:
* stappler::geom::Vec2 const&

# ::stappler::geom::Edge::getRightVec() const

## BRIEF

Возвращает координаты правой вершины

## CONTENT

Возвращает координаты правой вершины

Возвращает:
* stappler::geom::Vec2 const&

# ::stappler::geom::Edge::getOrgVec() const

## BRIEF

Возвращает координаты исходной вершины

## CONTENT

Возвращает координаты исходной вершины

Возвращает:
* stappler::geom::Vec2 const&

# ::stappler::geom::Edge::getDstVec() const

## BRIEF

Возвращает координаты конечной вершины

## CONTENT

Возвращает координаты конечной вершины

Возвращает:
* stappler::geom::Vec2 const&

# ::stappler::geom::Edge::getLeftOrg() const

## BRIEF

Возвращает индекс левой вершины

## CONTENT

Возвращает индекс левой вершины

Возвращает:
* uint32_t

# ::stappler::geom::Edge::getRightOrg() const

## BRIEF

Возвращает индекс правой вершины

## CONTENT

Возвращает индекс правой вершины

Возвращает:
* uint32_t

# ::stappler::geom::Edge::updateInfo()

## BRIEF

Обновляет информацию о грани

## CONTENT

Обновляет информацию о грани

# ::stappler::geom::Edge::getLeftWinding() const

## BRIEF

Возвращает смещение поворотного индекса при движении справа налево

## CONTENT

Возвращает смещение поворотного индекса при движении справа налево

Возвращает:
* int16_t

# ::stappler::geom::Edge::getRightWinding() const

## BRIEF

Возвращает смещение поворотного индекса при движении слева направо

## CONTENT

Возвращает смещение поворотного индекса при движении слева направо

Возвращает:
* int16_t

# ::stappler::geom::Edge::getPostitive()

## BRIEF

Возвращает полугрань с положительным (направо) направлением

## CONTENT

Возвращает полугрань с положительным (направо) направлением

Возвращает:
* stappler::geom::HalfEdge*

# ::stappler::geom::Edge::getNegative()

## BRIEF

Возвращает полугрань с отрицательным (налево) направлением

## CONTENT

Возвращает полугрань с отрицательным (налево) направлением

Возвращает:
* stappler::geom::HalfEdge*

# ::stappler::geom::ObjectAllocator

## BRIEF

Аллокатор для объектов тесселятора

## CONTENT

Аллокатор для объектов тесселятора. Аллокатор испоьзуется для пакетного распределения и поторного использования объектов.

Базовые классы:
* memory::AllocPool


# ::stappler::geom::ObjectAllocator::_pool

## BRIEF

Используемый пул памяти

## CONTENT

Используемый пул памяти

Тип: memory::pool_t*


# ::stappler::geom::ObjectAllocator::_freeVertexes

## BRIEF

Свободные вершины

## CONTENT

Свободные вершины

Тип: stappler::geom::Vertex*


# ::stappler::geom::ObjectAllocator::_freeEdges

## BRIEF

Свободные грани

## CONTENT

Свободные грани

Тип: stappler::geom::Edge*


# ::stappler::geom::ObjectAllocator::_freeFaces

## BRIEF

Свободные контуры

## CONTENT

Свободные контуры

Тип: stappler::geom::FaceEdge*


# ::stappler::geom::ObjectAllocator::_vertexes

## BRIEF

Активные вершины

## CONTENT

Активные вершины

Тип: memory::vector<Vertex *>


# ::stappler::geom::ObjectAllocator::_exportVertexes

## BRIEF

Помеченные для экспорта вершины

## CONTENT

Помеченные для экспорта вершины

Тип: memory::vector<Vertex *>


# ::stappler::geom::ObjectAllocator::_edgesOfInterests

## BRIEF

Грани, потенциально показывающие уникальные контуры

## CONTENT

Грани, потенциально показывающие уникальные контуры

Тип: memory::vector<HalfEdge *>


# ::stappler::geom::ObjectAllocator::_faceEdges

## BRIEF

Используемые грани

## CONTENT

Используемые грани

Тип: memory::vector<HalfEdge *>


# ::stappler::geom::ObjectAllocator::_boundaries

## BRIEF

Используемые грани контуров

## CONTENT

Используемые грани контуров

Тип: memory::vector<FaceEdge *>


# ::stappler::geom::ObjectAllocator::_vertexOffset

## BRIEF

Смещение при записи вершин

## CONTENT

Смещение при записи вершин

Тип: uint32_t


# ::stappler::geom::ObjectAllocator::ObjectAllocator(memory::pool_t*)

## BRIEF

Конструктор аллокатора с пулом памяти

## CONTENT

Конструктор аллокатора с пулом памяти

Параметры:
* memory::pool_t*


# ::stappler::geom::ObjectAllocator::allocEdge()

## BRIEF

Распределяет новую грань

## CONTENT

Распределяет новую грань

Возвращает:
* stappler::geom::Edge*

# ::stappler::geom::ObjectAllocator::allocVertex()

## BRIEF

Распределяет новую вершину

## CONTENT

Распределяет новую вершину

Возвращает:
* stappler::geom::Vertex*

# ::stappler::geom::ObjectAllocator::allocFaceEdge()

## BRIEF

Распределяет грань контура

## CONTENT

Распределяет грань контура

Возвращает:
* stappler::geom::FaceEdge*

# ::stappler::geom::ObjectAllocator::releaseEdge(stappler::geom::Edge*)

## BRIEF

Возвращает неиспользуемую грань

## CONTENT

Возвращает неиспользуемую грань

Параметры:
* stappler::geom::Edge*


# ::stappler::geom::ObjectAllocator::releaseVertex(uint32_t,uint32_t)

## BRIEF

Возвращает неиспользуемую вершину по индексу

## CONTENT

Возвращает неиспользуемую вершину по индексу

Параметры:
* uint32_t
* uint32_t - индекс вершины для замены


# ::stappler::geom::ObjectAllocator::releaseVertex(stappler::geom::Vertex*)

## BRIEF

Возвращает неиспользуемую вершину

## CONTENT

Возвращает неиспользуемую вершину

Параметры:
* stappler::geom::Vertex*


# ::stappler::geom::ObjectAllocator::trimVertexes()

## BRIEF

Возвращает неиспользованные вершины

## CONTENT

Возвращает неиспользованные вершины


# ::stappler::geom::ObjectAllocator::preallocateVertexes(uint32_t)

## BRIEF

Предраспределяет вершины

## CONTENT

Предраспределяет вершины

Параметры:
* uint32_t


# ::stappler::geom::ObjectAllocator::preallocateEdges(uint32_t)

## BRIEF

Предраспределяет грани

## CONTENT

Предраспределяет грани

Параметры:
* uint32_t


# ::stappler::geom::ObjectAllocator::preallocateFaceEdges(uint32_t)

## BRIEF

Предраспределяет грани контуров

## CONTENT

Предраспределяет грани контуров

Параметры:
* uint32_t


# ::stappler::geom::ObjectAllocator::removeEdgeFromVec(memory::vector<HalfEdge *>&,stappler::geom::HalfEdge*)

## BRIEF

Удаляет грань из списка

## CONTENT

Удаляет грань из списка

Параметры:
* memory::vector<HalfEdge *>&
* stappler::geom::HalfEdge*


# ::stappler::geom::VertexPriorityQueue

## BRIEF

Приоритетная очередь вершин

## CONTENT

Приоритетная очередь вершин. Вершины обходятся алгоритмом в порядке приоритета


# ::stappler::geom::VertexPriorityQueue::Handle

## BRIEF

Тип индекса в очереди

## CONTENT

Тип индекса в очереди


# ::stappler::geom::VertexPriorityQueue::Key

## BRIEF

Тип вершины

## CONTENT

Тип вершины


# ::stappler::geom::VertexPriorityQueue::InvalidHandle

## BRIEF

Недопустимый индекс

## CONTENT

Недопустимый индекс

Тип: Handle


# ::stappler::geom::VertexPriorityQueue::Node

## BRIEF

Элемент-указатель очереди

## CONTENT

Элемент-указатель очереди

# ::stappler::geom::VertexPriorityQueue::Node::handle

## BRIEF

Индекс значения элемента

## CONTENT

Индекс значения элемента

Тип: stappler::geom::VertexPriorityQueue::Handle


# ::stappler::geom::VertexPriorityQueue::Elem

## BRIEF

Элемент-хранилище очереди

## CONTENT

Элемент-хранилище очереди


# ::stappler::geom::VertexPriorityQueue::Elem::key

## BRIEF

Ключ значения

## CONTENT

Ключ значения

Тип: stappler::geom::VertexPriorityQueue::Key


# ::stappler::geom::VertexPriorityQueue::Elem::node

## BRIEF

Значение

## CONTENT

Значение

Тип: stappler::geom::VertexPriorityQueue::Handle


# ::stappler::geom::VertexPriorityQueue::Heap

## BRIEF

Дополнительный блок для вершин, добавленных, после инициализации очереди

## CONTENT

Дополнительный блок для вершин, добавленных, после инициализации очереди


# ::stappler::geom::VertexPriorityQueue::Heap::nodes

## BRIEF

Список указателей

## CONTENT

Список указателей

Тип: stappler::geom::VertexPriorityQueue::Node*


# ::stappler::geom::VertexPriorityQueue::Heap::handles

## BRIEF

Список значений

## CONTENT

Список значений

Тип: stappler::geom::VertexPriorityQueue::Elem*


# ::stappler::geom::VertexPriorityQueue::Heap::size

## BRIEF

Число распределённых элементов

## CONTENT

Число распределённых элементов

Тип: uint32_t


# ::stappler::geom::VertexPriorityQueue::Heap::max

## BRIEF

Максимальный индекс элемента

## CONTENT

Максимальный индекс элемента

Тип: uint32_t


# ::stappler::geom::VertexPriorityQueue::Heap::freeList

## BRIEF

Список неиспольуемых элементов

## CONTENT

Список неиспольуемых элементов

Тип: stappler::geom::VertexPriorityQueue::Handle


# ::stappler::geom::VertexPriorityQueue::Heap::initialized

## BRIEF

Флаг инициализации

## CONTENT

Флаг инициализации

Тип: bool


# ::stappler::geom::VertexPriorityQueue::Heap::pool

## BRIEF

Пул памяти для распределения новых элементов

## CONTENT

Пул памяти для распределения новых элементов

Тип: memory::pool_t*


# ::stappler::geom::VertexPriorityQueue::Heap::Heap(memory::pool_t*,uint32_t)

## BRIEF

Инициализирует хранилище с размером и пулом памяти

## CONTENT

Инициализирует хранилище с размером и пулом памяти

Параметры:
* memory::pool_t*
* uint32_t


# ::stappler::geom::VertexPriorityQueue::Heap::~Heap()

## BRIEF

Деструктор

## CONTENT

Деструктор


# ::stappler::geom::VertexPriorityQueue::Heap::init()

## BRIEF

Инициализирует хранилище

## CONTENT

Инициализирует хранилище


# ::stappler::geom::VertexPriorityQueue::Heap::empty() const

## BRIEF

Проверяет хранилище на пустоту

## CONTENT

Проверяет хранилище на пустоту

Возвращает:
* bool

# ::stappler::geom::VertexPriorityQueue::Heap::getMin() const

## BRIEF

Возвращает наименьший ключ

## CONTENT

Возвращает наименьший ключ

Возвращает:
* stappler::geom::VertexPriorityQueue::Key

# ::stappler::geom::VertexPriorityQueue::Heap::insert(stappler::geom::VertexPriorityQueue::Key)

## BRIEF

Добавляет новое значение в хранилище

## CONTENT

Добавляет новое значение в хранилище

Параметры:
* stappler::geom::VertexPriorityQueue::Key

Возвращает:
* stappler::geom::VertexPriorityQueue::Handle

# ::stappler::geom::VertexPriorityQueue::Heap::extractMin()

## BRIEF

Возвращает и изымает наименьшее значение из хранилища

## CONTENT

Возвращает и изымает наименьшее значение из хранилища

Возвращает:
* stappler::geom::VertexPriorityQueue::Key

# ::stappler::geom::VertexPriorityQueue::Heap::remove(stappler::geom::VertexPriorityQueue::Handle)

## BRIEF

Убирает значение из хранилища по ключу

## CONTENT

Убирает значение из хранилища по ключу

Параметры:
* stappler::geom::VertexPriorityQueue::Handle


# ::stappler::geom::VertexPriorityQueue::Heap::floatDown(int)

## BRIEF

Смещает значения в списке вниз

## CONTENT

Смещает значения в списке вниз

Параметры:
* int


# ::stappler::geom::VertexPriorityQueue::Heap::floatUp(int)

## BRIEF

Смещает значения в списке вверх

## CONTENT

Смещает значения в списке вверх

Параметры:
* int


# ::stappler::geom::VertexPriorityQueue::heap

## BRIEF

Дополнительное хранилище

## CONTENT

Дополнительное хранилище

Тип: stappler::geom::VertexPriorityQueue::Heap


# ::stappler::geom::VertexPriorityQueue::keys

## BRIEF

Список предопределённых ключей

## CONTENT

Список предопределённых ключей

Тип: Key*


# ::stappler::geom::VertexPriorityQueue::order

## BRIEF

Упорядоченный список ключей

## CONTENT

Упорядоченный список ключей

Тип: Key**


# ::stappler::geom::VertexPriorityQueue::size

## BRIEF

Число элементов в очереди

## CONTENT

Число элементов в очереди

Тип: uint32_t


# ::stappler::geom::VertexPriorityQueue::max

## BRIEF

Максимальный индекс в очереди

## CONTENT

Максимальный индекс в очереди

Тип: uint32_t


# ::stappler::geom::VertexPriorityQueue::initialized

## BRIEF

Флаг инициализации

## CONTENT

Флаг инициализации

Тип: bool


# ::stappler::geom::VertexPriorityQueue::pool

## BRIEF

Пул памяти для использования

## CONTENT

Пул памяти для использования

Тип: memory::pool_t*


# ::stappler::geom::VertexPriorityQueue::freeList

## BRIEF

Неиспользуемые значения

## CONTENT

Неиспользуемые значения

Тип: Handle


# ::stappler::geom::VertexPriorityQueue::VertexPriorityQueue(memory::pool_t*,memory::vector<Vertex *> const&)

## BRIEF

Создаёт очередь с помощью пула памяти из списка вершин

## CONTENT

Создаёт очередь с помощью пула памяти из списка вершин

Параметры:
* memory::pool_t*
* memory::vector<Vertex *> const&


# ::stappler::geom::VertexPriorityQueue::~VertexPriorityQueue()

## BRIEF

Деструктор

## CONTENT

Деструктор

# ::stappler::geom::VertexPriorityQueue::init()

## BRIEF

Инициализирует очередь после добавления вершин

## CONTENT

Инициализирует очередь после добавления вершин

Возвращает:
* bool

# ::stappler::geom::VertexPriorityQueue::empty() const

## BRIEF

Проверяет очередь на пустоту

## CONTENT

Проверяет очередь на пустоту

Возвращает:
* bool

# ::stappler::geom::VertexPriorityQueue::insert(stappler::geom::VertexPriorityQueue::Key)

## BRIEF

Добавляет новое значение в очередь

## CONTENT

Добавляет новое значение в очередь

Параметры:
* stappler::geom::VertexPriorityQueue::Key

Возвращает:
* Handle

# ::stappler::geom::VertexPriorityQueue::remove(stappler::geom::VertexPriorityQueue::Handle)

## BRIEF

Удаляет значение по ключу

## CONTENT

Удаляет значение по ключу

Параметры:
* stappler::geom::VertexPriorityQueue::Handle


# ::stappler::geom::VertexPriorityQueue::extractMin()

## BRIEF

Получает и изымает минимальное значение из очереди

## CONTENT

Получает и изымает минимальное значение из очереди

Возвращает:
* Key

# ::stappler::geom::VertexPriorityQueue::getMin() const

## BRIEF

Получает минимальное значение из очереди

## CONTENT

Получает минимальное значение из очереди

Возвращает:
* Key

# ::stappler::geom::IntersectionEvent

## BRIEF

Тип пересечения граней

## CONTENT

Тип пересечения граней

Значения:
* Regular - стандартное
* EventIsIntersection - пересечение находится на самой грани
* EdgeConnection1 - присоединение исходной грани к следующей
* EdgeConnection2 - присоединение следующей грани к исходной


# ::stappler::geom::EdgeDict

## BRIEF

Словарь граней

## CONTENT

Словарь граней


# ::stappler::geom::EdgeDict::event

## BRIEF

Текущее положение сканирующей линии

## CONTENT

Текущее положение сканирующей линии

Тип: stappler::geom::Vec2


# ::stappler::geom::EdgeDict::nodes

## BRIEF

Список элементов в словаре

## CONTENT

Список элементов в словаре

Тип: memory::set<EdgeDictNode>


# ::stappler::geom::EdgeDict::pool

## BRIEF

Пул памяти для значений

## CONTENT

Пул памяти для значений

Тип: memory::pool_t*


# ::stappler::geom::EdgeDict::EdgeDict(memory::pool_t*,uint32_t)

## BRIEF

Создаёт новый словарь граней

## CONTENT

Создаёт новый словарь граней

Параметры:
* memory::pool_t*
* uint32_t


# ::stappler::geom::EdgeDict::push(stappler::geom::Edge*,int16_t)

## BRIEF

Добавляет грань в словарь

## CONTENT

Добавляет грань в словарь

Параметры:
* stappler::geom::Edge*
* int16_t - значение поворотного индекса над гранью

Возвращает:
* stappler::geom::EdgeDictNode const*

# ::stappler::geom::EdgeDict::pop(stappler::geom::EdgeDictNode const*)

## BRIEF

Убирает грань из словаря

## CONTENT

Убирает грань из словаря

Параметры:
* stappler::geom::EdgeDictNode const*


# ::stappler::geom::EdgeDict::update(stappler::geom::Vertex*,float)

## BRIEF

Переходит к следующему положению сканирующей линии

## CONTENT

Переходит к следующему положению сканирующей линии

Параметры:
* stappler::geom::Vertex*
* float - чувствительность для удаления граней, попадающих в конечную точку


# ::stappler::geom::EdgeDict::checkForIntersects(stappler::geom::Vertex*,stappler::geom::Vec2&,stappler::geom::IntersectionEvent&,float) const

## BRIEF

Проверяет вершину на пересечение с гранями в словаре

## CONTENT

Проверяет вершину на пересечение с гранями в словаре

Параметры:
* stappler::geom::Vertex*
* stappler::geom::Vec2& - возвращает точку пересечения
* stappler::geom::IntersectionEvent& - возвращает тип пересечения
* float - чувствительность для определения пересечений

Возвращает:
* stappler::geom::EdgeDictNode const* - грань с пересечением, если найдено. или nullptr

# ::stappler::geom::EdgeDict::checkForIntersects(stappler::geom::HalfEdge*,stappler::geom::Vec2&,stappler::geom::IntersectionEvent&,float) const

## BRIEF

Проверяет грань на пересечение с гранями в словаре

## CONTENT

Проверяет грань на пересечение с гранями в словаре

Параметры:
* stappler::geom::HalfEdge*
* stappler::geom::Vec2& - возвращает точку пересечения
* stappler::geom::IntersectionEvent& - возвращает тип пересечения
* float - чувствительность для определения пересечений

Возвращает:
* stappler::geom::EdgeDictNode const* - грань с пересечением, если найдено. или nullptr

# ::stappler::geom::EdgeDict::getEdgeBelow(stappler::geom::Edge const*) const

## BRIEF

Возвращает грань ниже переданной грани

## CONTENT

Возвращает грань ниже переданной грани

Параметры:
* stappler::geom::Edge const*

Возвращает:
* stappler::geom::EdgeDictNode const*

# ::stappler::geom::EdgeDict::getEdgeBelow(stappler::geom::Vec2 const&,uint32_t) const

## BRIEF

Возвращает грань ниже переданной точки

## CONTENT

Возвращает грань ниже переданной точки

Параметры:
* stappler::geom::Vec2 const&
* uint32_t - индекс вершины для проверки

Возвращает:
* stappler::geom::EdgeDictNode const*

# ::stappler::geom::VertLeq(stappler::geom::Vec2 const&,stappler::geom::Vec2 const&)

## BRIEF

Проверяет, лежит ли точка левее или совпадает с текущей

## CONTENT

Проверяет, лежит ли точка левее или совпадает с текущей

Параметры:
* stappler::geom::Vec2 const&
* stappler::geom::Vec2 const&

Возвращает:
* bool

# ::stappler::geom::VertLeq(stappler::geom::Vertex const*,stappler::geom::Vertex const*)

## BRIEF

Проверяет, лежит ли вершина левее или совпадает с текущей

## CONTENT

Проверяет, лежит ли вершина левее или совпадает с текущей

Параметры:
* stappler::geom::Vertex const*
* stappler::geom::Vertex const*

Возвращает:
* bool

# ::stappler::geom::VertEq(stappler::geom::Vec2 const&,stappler::geom::Vec2 const&,float)

## BRIEF

Проверяет точки на совпадение с заданной чувствительностью

## CONTENT

Проверяет точки на совпадение с заданной чувствительностью

Параметры:
* stappler::geom::Vec2 const&
* stappler::geom::Vec2 const&
* float

Возвращает:
* bool - true если точки совпадают

# ::stappler::geom::FloatEq(float,float,float)

## BRIEF

Проверяет число с плавающей точкой на совпадение с заданной чувствительностью

## CONTENT

Проверяет число с плавающей точкой на совпадение с заданной чувствительностью

Параметры:
* float
* float
* float

Возвращает:
* bool- true если значения совпадают

# ::stappler::geom::VertEq(stappler::geom::Vertex const*,stappler::geom::Vertex const*,float)

## BRIEF

Проверяет вершины на совпадение с заданной чувствительностью

## CONTENT

Проверяет вершины на совпадение с заданной чувствительностью

Параметры:
* stappler::geom::Vertex const*
* stappler::geom::Vertex const*
* float

Возвращает:
* bool- true если вершины совпадают

# ::stappler::geom::EdgeGoesRight(stappler::geom::HalfEdge const*)

## BRIEF

Проверяет, идёт ли грань направо

## CONTENT

Проверяет, идёт ли грань направо

Параметры:
* stappler::geom::HalfEdge const*

Возвращает:
* bool

# ::stappler::geom::EdgeGoesLeft(stappler::geom::HalfEdge const*)

## BRIEF

Проверяет, идёт ли грань далево

## CONTENT

Проверяет, идёт ли грань далево

Параметры:
* stappler::geom::HalfEdge const*

Возвращает:
* bool

# ::stappler::geom::AngleIsConvex(stappler::geom::HalfEdge const*,stappler::geom::HalfEdge const*)

## BRIEF

Проверяет, что угол между гранями не выпуклый

## CONTENT

Проверяет, что угол между гранями не выпуклый

Параметры:
* stappler::geom::HalfEdge const*
* stappler::geom::HalfEdge const*

Возвращает:
* bool

# ::stappler::geom::EdgeDirection(stappler::geom::Vec2 const&)

## BRIEF

Вычисляет псевдоугол направления грани

## CONTENT

Вычисляет псевдоугол направления грани. Псевдоугол позволяет избежать вычисления накладый обратных тригнорметрических функций. Вместо этого, угол монотонно накладывается на отрезок, где 1.0 соотвествует 45 градусам

Параметры:
* stappler::geom::Vec2 const&

Возвращает:
* float - псевдоугол [-2.0, 2.0f]

# ::stappler::geom::EdgeAngle(stappler::geom::Vec2 const&)

## BRIEF

Вычисляетпсевдоугол грани с осью oX

## CONTENT

Вычисляетпсевдоугол грани с осью oX. Псевдоугол позволяет избежать вычисления накладый обратных тригнорметрических функций. Вместо этого, угол монотонно накладывается на отрезок, где 1.0 соотвествует 45 градусам

Параметры:
* stappler::geom::Vec2 const&

Возвращает:
* float - псевдоугол [0.0f, 8.0f)

# ::stappler::geom::EdgeAngle(stappler::geom::Vec2 const&,stappler::geom::Vec2 const&)

## BRIEF

Возвращает минимальный псевдоугол между гранями

## CONTENT

Возвращает минимальный псевдоугол между гранями

Параметры:
* stappler::geom::Vec2 const&
* stappler::geom::Vec2 const&

Возвращает:
* float

# ::stappler::geom::EdgeAngleIsBelowTolerance(float,float)

## BRIEF

Проверяет, меньше ли угол требуемой чувствительности

## CONTENT

Проверяет, меньше ли угол требуемой чувствительности

Параметры:
* float
* float

Возвращает:
* bool

# ::stappler::geom::operator<<(std::ostream&,stappler::geom::Vertex const&)

## BRIEF

Выводит вершину в поток для отладки

## CONTENT

Выводит вершину в поток для отладки

Параметры:
* std::ostream&
* stappler::geom::Vertex const&

Возвращает:
* std::ostream&

# ::stappler::geom::operator<<(std::ostream&,stappler::geom::HalfEdge const&)

## BRIEF

Выводит полугрань в поток для отладки

## CONTENT

Выводит полугрань в поток для отладки

Параметры:
* std::ostream&
* stappler::geom::HalfEdge const&

Возвращает:
* std::ostream&

# ::stappler::geom::operator<<(std::ostream&,stappler::geom::FaceEdge const&)

## BRIEF

Выводит грань контура в поток для отладки

## CONTENT

Выводит грань контура в поток для отладки

Параметры:
* std::ostream&
* stappler::geom::FaceEdge const&

Возвращает:
* std::ostream&

# ::stappler::geom::operator<<(std::ostream&,stappler::geom::VerboseFlag)

## BRIEF

Устанавливает флаг уровня отладочной информации

## CONTENT

Устанавливает флаг уровня отладочной информации

Параметры:
* std::ostream&
* stappler::geom::VerboseFlag

Возвращает:
* std::ostream&

# ::stappler::geom::operator<<(std::ostream&,stappler::geom::EdgeDictNode const&)

## BRIEF

Выводит элемент словаря граней в поток для отладки

## CONTENT

Выводит элемент словаря граней в поток для отладки

Параметры:
* std::ostream&
* stappler::geom::EdgeDictNode const&

Возвращает:
* std::ostream&

# ::stappler::geom::operator<<(std::ostream&,stappler::geom::Edge const&)

## BRIEF

Выводит грань в поток для отладки

## CONTENT

Выводит грань в поток для отладки

Параметры:
* std::ostream&
* stappler::geom::Edge const&

Возвращает:
* std::ostream&

# ::stappler::geom::operator<<(std::ostream&,stappler::geom::IntersectionEvent const&)

## BRIEF

Выводит перечисление типа пересечения граней в поток

## CONTENT

Выводит перечисление типа пересечения граней в поток

Параметры:
* std::ostream&
* stappler::geom::IntersectionEvent const&

Возвращает:
* std::ostream&

# ::stappler::geom::isWindingInside(stappler::geom::Winding,int16_t)

## BRIEF

Проверяет, лежит ли элемент с указанным поворотным индексом внутри конттура согласно правилу

## CONTENT

Проверяет, лежит ли элемент с указанным поворотным индексом внутри конттура согласно правилу

Параметры:
* stappler::geom::Winding - правило поворотного индекса
* int16_t - вычисленный поворотный индекс

Возвращает:
* bool - true если индекс должен быть внутри контура
