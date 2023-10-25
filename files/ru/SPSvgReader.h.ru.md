Title: SPSvgReader.h


# STAPPLER_VG_SPSVGREADER_H_

## BRIEF

Заголовок интерфейса для чтения формата SVG

## CONTENT

Заголовок интерфейса для чтения формата SVG


# ::stappler::vg::Metric

## BRIEF

Псевдоним типа метрики для элементов с размером

## CONTENT

Псевдоним типа метрики для элементов с размером


# ::stappler::vg::SvgTag

## BRIEF

Тип тега объекта для чтения SVG

## CONTENT

Тип тега объекта для чтения SVG. Тег используется для хранения данных объекта для отрисовки.

Базовые классы:
* html::Tag<StringView>


# ::stappler::vg::SvgTag::SvgTag(stappler::StringView&)

## BRIEF

Конструктор тега по имени

## CONTENT

Конструктор тега по имени

Параметры:
* stappler::StringView&


# ::stappler::vg::SvgTag::Shape

## BRIEF

Перечисление формы объекта в теге

## CONTENT

Перечисление формы объекта в теге

Значения:
* None
* Rect - прямоугольник
* Circle - круг
* Ellipse - эллипс
* Line - линия
* Polyline - полилиния
* Polygon - полигон
* Use - ссылка на другой объект


# ::stappler::vg::SvgTag::shape

## BRIEF

Форма объекта в теге

## CONTENT

Форма объекта в теге

Тип: enum Shape


# ::stappler::vg::SvgTag::mat

## BRIEF

Матрица трансформации для объекта

## CONTENT

Матрица трансформации для объекта

Тип: stappler::geom::Mat4


# ::stappler::vg::SvgTag::id

## BRIEF

Идентификатор тега

## CONTENT

Идентификатор тега (атрибут `id`)

Тип: stappler::StringView


# ::stappler::vg::SvgTag::ref

## BRIEF

Текст ссылки на объект

## CONTENT

Текст ссылки на объект

Тип: stappler::StringView


# ::stappler::vg::SvgTag::rpath

## BRIEF

Данные векторного пути для объекта

## CONTENT

Данные векторного пути для объекта

Тип: stappler::vg::VectorPath


# ::stappler::vg::SvgTag::getPath()

## BRIEF

Возвращает ссылку на путь

## CONTENT

Возвращает ссылку на путь

Возвращает:
* stappler::vg::VectorPath&

# ::stappler::vg::SvgReader

## BRIEF

Объект для разбора формата SVG

## CONTENT

Объект для разбора формата SVG. Использует XML-парсер для разбора. Ограниченно реализует формат, читает только формы и основные параметры закраски.


# ::stappler::vg::SvgReader::Parser

## BRIEF

Тип парсера

## CONTENT

Тип парсера


# ::stappler::vg::SvgReader::Tag

## BRIEF

Тип тега SVG

## CONTENT

Тип тега SVG


# ::stappler::vg::SvgReader::StringReader

## BRIEF

Тип, ссылающийся на себя для парсера XML

## CONTENT

Тип, ссылающийся на себя для парсера XML


# ::stappler::vg::SvgReader::SvgReader()

## BRIEF

Конструктор по умолчанию

## CONTENT

Конструктор по умолчанию


# ::stappler::vg::SvgReader::onBeginTag(stappler::vg::SvgReader::Parser&,stappler::vg::SvgReader::Tag&)

## BRIEF

Функция начала разбора тега

## CONTENT

Функция начала разбора тега

Параметры:
* stappler::vg::SvgReader::Parser&
* stappler::vg::SvgReader::Tag&


# ::stappler::vg::SvgReader::onEndTag(stappler::vg::SvgReader::Parser&,stappler::vg::SvgReader::Tag&,bool)

## BRIEF

Функция конца разбора тега

## CONTENT

Функция конца разбора тега

Параметры:
* stappler::vg::SvgReader::Parser&
* stappler::vg::SvgReader::Tag&
* bool


# ::stappler::vg::SvgReader::onStyleParameter(stappler::vg::SvgReader::Tag&,stappler::vg::SvgReader::StringReader&,stappler::vg::SvgReader::StringReader&)

## BRIEF

Функция чтения целевого параметра

## CONTENT

Функция чтения целевого параметра

Параметры:
* stappler::vg::SvgReader::Tag&
* stappler::vg::SvgReader::StringReader&
* stappler::vg::SvgReader::StringReader&


# ::stappler::vg::SvgReader::onStyle(stappler::vg::SvgReader::Tag&,stappler::vg::SvgReader::StringReader&)

## BRIEF

Функция чтения значения стиля из атрибута

## CONTENT

Функция чтения значения стиля из атрибута

Параметры:
* stappler::vg::SvgReader::Tag&
* stappler::vg::SvgReader::StringReader&


# ::stappler::vg::SvgReader::onTagAttribute(stappler::vg::SvgReader::Parser&,stappler::vg::SvgReader::Tag&,stappler::vg::SvgReader::StringReader&,stappler::vg::SvgReader::StringReader&)

## BRIEF

Функция чтения атрибута тега

## CONTENT

Функция чтения атрибута тега

Параметры:
* stappler::vg::SvgReader::Parser&
* stappler::vg::SvgReader::Tag&
* stappler::vg::SvgReader::StringReader&
* stappler::vg::SvgReader::StringReader&


# ::stappler::vg::SvgReader::onPushTag(stappler::vg::SvgReader::Parser&,stappler::vg::SvgReader::Tag&)

## BRIEF

Функция добавления тега

## CONTENT

Функция добавления тега

Параметры:
* stappler::vg::SvgReader::Parser&
* stappler::vg::SvgReader::Tag&


# ::stappler::vg::SvgReader::onPopTag(stappler::vg::SvgReader::Parser&,stappler::vg::SvgReader::Tag&)

## BRIEF

Функция снятия тега

## CONTENT

Функция снятия тега

Параметры:
* stappler::vg::SvgReader::Parser&
* stappler::vg::SvgReader::Tag&


# ::stappler::vg::SvgReader::onInlineTag(stappler::vg::SvgReader::Parser&,stappler::vg::SvgReader::Tag&)

## BRIEF

Функция разбора вложенного тега

## CONTENT

Функция разбора вложенного тега

Параметры:
* stappler::vg::SvgReader::Parser&
* stappler::vg::SvgReader::Tag&


# ::stappler::vg::SvgReader::_defs

## BRIEF

Флаг нахождения символа в блоке `defs`

## CONTENT

Флаг нахождения символа в блоке `defs`

Тип: bool


# ::stappler::vg::SvgReader::_squareLength

## BRIEF

Длина диагонали активной области SVG

## CONTENT

Длина диагонали активной области SVG

Тип: float


# ::stappler::vg::SvgReader::_width

## BRIEF

Ширина в базовых единицах формата

## CONTENT

Ширина в базовых единицах формата

Тип: float


# ::stappler::vg::SvgReader::_height

## BRIEF

Высота в базовых единицах формата

## CONTENT

Высота в базовых единицах формата

Тип: float


# ::stappler::vg::SvgReader::_nextId

## BRIEF

Следующий идентификатор для формы, используется для связи по тегу `use`

## CONTENT

Следующий идентификатор для формы, используется для связи по тегу `use`

Тип: uint16_t


# ::stappler::vg::SvgReader::_viewBox

## BRIEF

Данные `viewbox`

## CONTENT

Данные `viewbox`

Тип: stappler::geom::Rect


# ::stappler::vg::SvgReader::_drawOrder

## BRIEF

Указатели на отрисовываемые объекты в порядке рисования

## CONTENT

Указатели на отрисовываемые объекты в порядке рисования. Вектор может быть пустым, в аком случае рисование в порядке появления в файле.

Тип: Interface::VectorType<PathXRef>


# ::stappler::vg::SvgReader::_paths

## BRIEF

Список всех объектов по их имени

## CONTENT

Список всех объектов по их имени

Тип: Interface::MapType<Interface::StringType, VectorPath>
