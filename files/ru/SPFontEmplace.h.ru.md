Title: SPFontEmplace.h


# CORE_FONT_SPFONTEMPLACE_H_

## BRIEF

Заголовок размещения текстур символов в ограниченном прямоугольнике

## CONTENT

Заголовок размещения текстур символов в ограниченном прямоугольнике

# ::stappler::font::EmplaceCharInterface

## BRIEF

Интерфейс укладки текстур символов

## CONTENT

Интерфейс укладки текстур символов

# ::stappler::font::EmplaceCharInterface::getX

## BRIEF

Возвращает X для объекта

## CONTENT

Возвращает X для объекта

Тип: uint16_t(*)(void*)


# ::stappler::font::EmplaceCharInterface::getY

## BRIEF

Возвращает Y для объекта

## CONTENT

Возвращает Y для объекта

Тип: uint16_t(*)(void*)


# ::stappler::font::EmplaceCharInterface::getWidth

## BRIEF

Возвращает ширину для объекта

## CONTENT

Возвращает ширину для объекта

Тип: uint16_t(*)(void*)


# ::stappler::font::EmplaceCharInterface::getHeight

## BRIEF

Возвращает высоту для объекта

## CONTENT

Возвращает высоту для объекта

Тип: uint16_t(*)(void*)


# ::stappler::font::EmplaceCharInterface::setX

## BRIEF

Устанавливает X для объекта

## CONTENT

Устанавливает X для объекта

Тип: void(*)(void*,uint16_t)


# ::stappler::font::EmplaceCharInterface::setY

## BRIEF

Устанавливает Y для объекта

## CONTENT

Устанавливает Y для объекта

Тип: void(*)(void*,uint16_t)


# ::stappler::font::EmplaceCharInterface::setTex

## BRIEF

Устанавливает индекс текстуры для объекта

## CONTENT

Устанавливает индекс текстуры для объекта

Тип: void(*)(void*,uint16_t)


# ::stappler::font::emplaceChars(stappler::font::EmplaceCharInterface const&,SpanView<void *> const&,float)

## BRIEF

Размещает текстуры шрифта в атласе

## CONTENT

Размещает текстуры шрифта в атласе. Вычисляет наименьший размер текстуры для атласа и составляет карту размещения символов внутри неё (через setX/setY). Использует эвристический адаптивный алгоритм размещения прямоугольников.

Параметры:
* stappler::font::EmplaceCharInterface const& - интерфейс для получения данных их объектов
* SpanView<void *> const& - список объектов (символов) для размещения
* float - общая площадь символов, если заранее известна. Позволяет ускорить алгоритм

Возвращает:
* stappler::font::Extent2 - итоговый размер предполагаемой текстуры
