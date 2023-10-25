Title: SPTessLine.h


# STAPPLER_TESS_SPTESSLINE_H_

## BRIEF

Заголовок для обработчика линий при тесселяции

## CONTENT

Заголовок для обработчика линий при тесселяции


# ::stappler::geom::LineCup

## BRIEF

Способ завершения незакрытых линий

## CONTENT

Способ завершения незакрытых линий

Значения:
* Butt - не закрывать
* Round - скруглённое завершение
* Square - квадратное завершение


# ::stappler::geom::LineJoin

## BRIEF

Способ обработки острых граней обводки

## CONTENT

Способ обработки острых граней обводки

Значения:
* Miter - обрезать
* Round - скруглять
* Bevel - обрезать с выступом


# ::stappler::geom::DrawStyle

## BRIEF

Стиль рисования контура

## CONTENT

Значения:
* None
* Fill - заливка
* Stroke - обводка
* FillAndStroke - заливка и обводка


# ::stappler::geom::operator|(stappler::geom::DrawStyle const&,stappler::geom::DrawStyle const&)

## BRIEF

Битовая операция с флагом, создана автоматически

## CONTENT

Битовая операция с флагом, создана автоматически

Параметры:
* stappler::geom::DrawStyle const&
* stappler::geom::DrawStyle const&

Возвращает:
* stappler::geom::DrawStyle

# ::stappler::geom::operator&(stappler::geom::DrawStyle const&,stappler::geom::DrawStyle const&)

## BRIEF

Битовая операция с флагом, создана автоматически

## CONTENT

Битовая операция с флагом, создана автоматически

Параметры:
* stappler::geom::DrawStyle const&
* stappler::geom::DrawStyle const&

Возвращает:
* stappler::geom::DrawStyle

# ::stappler::geom::operator^(stappler::geom::DrawStyle const&,stappler::geom::DrawStyle const&)

## BRIEF

Битовая операция с флагом, создана автоматически

## CONTENT

Битовая операция с флагом, создана автоматически

Параметры:
* stappler::geom::DrawStyle const&
* stappler::geom::DrawStyle const&

Возвращает:
* stappler::geom::DrawStyle

# ::stappler::geom::operator|=(stappler::geom::DrawStyle&,stappler::geom::DrawStyle const&)

## BRIEF

Битовая операция с флагом, создана автоматически

## CONTENT

Битовая операция с флагом, создана автоматически

Параметры:
* stappler::geom::DrawStyle&
* stappler::geom::DrawStyle const&

Возвращает:
* stappler::geom::DrawStyle&

# ::stappler::geom::operator&=(stappler::geom::DrawStyle&,stappler::geom::DrawStyle const&)

## BRIEF

Битовая операция с флагом, создана автоматически

## CONTENT

Битовая операция с флагом, создана автоматически

Параметры:
* stappler::geom::DrawStyle&
* stappler::geom::DrawStyle const&

Возвращает:
* stappler::geom::DrawStyle&

# ::stappler::geom::operator^=(stappler::geom::DrawStyle&,stappler::geom::DrawStyle const&)

## BRIEF

Битовая операция с флагом, создана автоматически

## CONTENT

Битовая операция с флагом, создана автоматически

Параметры:
* stappler::geom::DrawStyle&
* stappler::geom::DrawStyle const&

Возвращает:
* stappler::geom::DrawStyle&

# ::stappler::geom::operator==(stappler::geom::DrawStyle const&,std::underlying_type<DrawStyle>::type const&)

## BRIEF

Сравнивает два флага. Создана автоматически.

## CONTENT

Сравнивает два флага. Создана автоматически.

Параметры:
* stappler::geom::DrawStyle const&
* std::underlying_type<DrawStyle>::type const&

Возвращает:
* bool

# ::stappler::geom::operator==(std::underlying_type<DrawStyle>::type const&,stappler::geom::DrawStyle const&)

## BRIEF

Сравнивает два флага. Создана автоматически.

## CONTENT

Сравнивает два флага. Создана автоматически.

Параметры:
* std::underlying_type<DrawStyle>::type const&
* stappler::geom::DrawStyle const&

Возвращает:
* bool

# ::stappler::geom::operator!=(stappler::geom::DrawStyle const&,std::underlying_type<DrawStyle>::type const&)

## BRIEF

Битовая операция с флагом, создана автоматически

## CONTENT

Битовая операция с флагом, создана автоматически

Параметры:
* stappler::geom::DrawStyle const&
* std::underlying_type<DrawStyle>::type const&

Возвращает:
* bool

# ::stappler::geom::operator!=(std::underlying_type<DrawStyle>::type const&,stappler::geom::DrawStyle const&)

## BRIEF

Битовая операция с флагом, создана автоматически

## CONTENT

Битовая операция с флагом, создана автоматически

Параметры:
* std::underlying_type<DrawStyle>::type const&
* stappler::geom::DrawStyle const&

Возвращает:
* bool

# ::stappler::geom::operator~(stappler::geom::DrawStyle const&)

## BRIEF

Битовая операция с флагом, создана автоматически

## CONTENT

Битовая операция с флагом, создана автоматически

Параметры:
* stappler::geom::DrawStyle const&

Возвращает:
* stappler::geom::DrawStyle

# ::stappler::geom::LineDrawer

## BRIEF

Структура для обработки контура

## CONTENT

Структура для обработки контура. Позволяет загрузить в тесселятор контур для его рисования в качестве обводки или для заливки. Обрабатывает дуги и кривые Безье.

# ::stappler::geom::LineDrawer::LineDrawer(float,Rc<stappler::geom::Tesselator>&&,Rc<stappler::geom::Tesselator>&&,float,stappler::geom::LineJoin,stappler::geom::LineCup)

## BRIEF

Создаёт структуру для обработки контура

## CONTENT

Создаёт структуру для обработки контура.

Относительная ошибка - параметр точности обработки линий. Обозначет максимально допустимое смещение точки линии на экране по отношению к её точному математическому положению. Для отрисовки векторынх объектов оптимальное значение - 0.75 от экранного пиксеря.

Кривые Безье и дуги разбиваются на прямые линии, относительная ошибка контролирует их приближённость к точной математической позиции.

Параметры:
* float - относительная ошибка для обработки
* Rc<stappler::geom::Tesselator>&& - тесселятор для заливки
* Rc<stappler::geom::Tesselator>&& - тесселятор для обводки
* float - ширина обводки
* stappler::geom::LineJoin - способ обработки острых углов обводки
* stappler::geom::LineCup - способ обработки концов линий


# ::stappler::geom::LineDrawer::drawBegin(float,float)

## BRIEF

Начинает рисование контура линии

## CONTENT

Начинает рисование контура линии

Параметры:
* float - x
* float - y


# ::stappler::geom::LineDrawer::drawLine(float,float)

## BRIEF

Рисует прямую линию до точки

## CONTENT

Рисует прямую линию до точки

Параметры:
* float - x
* float - y


# ::stappler::geom::LineDrawer::drawQuadBezier(float,float,float,float)

## BRIEF

Рисует квадратичную кривую Безье до точки

## CONTENT

Рисует квадратичную кривую Безье до точки

Параметры:
* float - x контролькой точки
* float - y контролькой точки
* float - целевой x
* float - целевой y


# ::stappler::geom::LineDrawer::drawCubicBezier(float,float,float,float,float,float)

## BRIEF

Рисует кубическую кривую Безье до точки

## CONTENT

Рисует кубическую кривую Безье до точки

Параметры:
* float - x первой контролькой точки
* float - y первой контролькой точки
* float - x второй контролькой точки
* float - y второй контролькой точки
* float - целевой x
* float - целевой y


# ::stappler::geom::LineDrawer::drawArc(float,float,float,bool,bool,float,float)

## BRIEF

Рисует дугу до точки

## CONTENT

Рисует дугу до точки. Использует параметризацию, анаголичную SVG.

Параметры:
* float - радиус по x
* float - радиус по y
* float - градус поворота эллипса
* bool - флаг использования большой дуги
* bool - флаг перевёрнутой дуги
* float - целевой x
* float - целевой y


# ::stappler::geom::LineDrawer::drawClose(bool)

## BRIEF

Закрывает текущий контур

## CONTENT

Закрывает текущий контур

Параметры:
* bool - true если контур успешно добавлен в тесселятор


# ::stappler::geom::LineDrawer::push(float,float)

## BRIEF

Добавляет одиночную точку

## CONTENT

Добавляет одиночную точку

Параметры:
* float - целевой x
* float - целевой y


# ::stappler::geom::LineDrawer::pushStroke(stappler::geom::Vec2 const&,stappler::geom::Vec2 const&,stappler::geom::Vec2 const&)

## BRIEF

Добавляет точку обводки

## CONTENT

Добавляет точку обводки. Вычисляет смещение для текущей точки на основе предыдущей и следующей точки обводки.

Параметры:
* stappler::geom::Vec2 const& - предыдущая точка обводки
* stappler::geom::Vec2 const& - текущая точка обводки
* stappler::geom::Vec2 const& - следующая точка обводки


# ::stappler::geom::LineDrawer::BufferNode

## BRIEF

Тип буферизованной точки в циклическом буфере

## CONTENT

Тип буферизованной точки в циклическом буфере


# ::stappler::geom::LineDrawer::BufferNode::next

## BRIEF

Следующая точка в цикле

## CONTENT

Следующая точка в цикле

Тип: stappler::geom::LineDrawer::BufferNode*


# ::stappler::geom::LineDrawer::BufferNode::prev

## BRIEF

Предыдущая точка в цикле

## CONTENT

Предыдущая точка в цикле

Тип: stappler::geom::LineDrawer::BufferNode*


# ::stappler::geom::LineDrawer::BufferNode::point

## BRIEF

Точка

## CONTENT

Точка

Тип: stappler::geom::Vec2


# ::stappler::geom::LineDrawer::style

## BRIEF

Стиль рисования контура

## CONTENT

Стиль рисования контура

Тип: stappler::geom::DrawStyle


# ::stappler::geom::LineDrawer::lineJoin

## BRIEF

Стиль для острых углов обводки

## CONTENT

Стиль для острых углов обводки

Тип: stappler::geom::LineJoin


# ::stappler::geom::LineDrawer::lineCup

## BRIEF

Стиль граничных точек обводки

## CONTENT

Стиль граничных точек обводки

Тип: stappler::geom::LineCup


# ::stappler::geom::LineDrawer::distanceError

## BRIEF

Значение ошибки по максимальному отклонению позиции точки

## CONTENT

Значение ошибки по максимальному отклонению позиции точки

Тип: float


# ::stappler::geom::LineDrawer::angularError

## BRIEF

Значение ошибки по углу поворота кривой

## CONTENT

Значение ошибки по углу поворота кривой. Такая форма ошибки вычисляется для обводки, для добавления дополнительных контрольных точек при большой кривизне, для устранения ступенчатости обводки.

Тип: float


# ::stappler::geom::LineDrawer::strokeWidth

## BRIEF

Ширина обводки

## CONTENT

Ширина обводки

Тип: float


# ::stappler::geom::LineDrawer::count

## BRIEF

Число добавленных точек

## CONTENT

Число добавленных точек

Тип: size_t


# ::stappler::geom::LineDrawer::origin

## BRIEF

Две начальные точки контура

## CONTENT

Две начальные точки контура (используются для завершения обводки)

Тип: stappler::geom::Vec2[2]


# ::stappler::geom::LineDrawer::buffer

## BRIEF

Циклический буфер для трёх текущих точек

## CONTENT

Циклический буфер для трёх текущих точек

Тип: stappler::geom::LineDrawer::BufferNode[3]


# ::stappler::geom::LineDrawer::target

## BRIEF

Текущая точка в буфере

## CONTENT

Текущая точка в буфере

Тип: stappler::geom::LineDrawer::BufferNode*


# ::stappler::geom::LineDrawer::fill

## BRIEF

Тесселятор заливки

## CONTENT

Тесселятор заливки

Тип: Rc<stappler::geom::Tesselator>


# ::stappler::geom::LineDrawer::fillCursor

## BRIEF

Курсор для записи заливки

## CONTENT

Курсор для записи заливки

Тип: Tesselator::Cursor


# ::stappler::geom::LineDrawer::stroke

## BRIEF

Тесселятор обводки

## CONTENT

Тесселятор обводки

Тип: Rc<stappler::geom::Tesselator>


# ::stappler::geom::LineDrawer::strokeCursor

## BRIEF

Курсор для записи обводки

## CONTENT

Курсор для записи обводки

Тип: Tesselator::Cursor


# ::stappler::geom::LineDrawer::_miterLimit

## BRIEF

Относительный предел для острых углов

## CONTENT

Относительный предел для острых углов

Тип: float
