Title: XLCorePipelineInfo.h


# XENOLITH_CORE_XLCOREPIPELINEINFO_H_

## BRIEF

Заголовок параметров пайплайна и связанных объектов

## CONTENT

Заголовок параметров пайплайна и связанных объектов


# ::stappler::xenolith::core::EmptyTextureName

## BRIEF

Идентификатор пустой текстуры

## CONTENT

Идентификатор пустой текстуры

Тип: auto const


# ::stappler::xenolith::core::SolidTextureName

## BRIEF

Идентификатор заполненной текстуры

## CONTENT

Идентификатор заполненной текстуры

Тип: auto const


# ::stappler::xenolith::core::ColorMode

## BRIEF

Режим доступа к цвету

## CONTENT

Режим доступа к цвету


# ::stappler::xenolith::core::ColorMode::SolidColor

## BRIEF

Полный доступ к цвету

## CONTENT

Полный доступ к цвету

Тип: stappler::xenolith::core::ColorMode const


# ::stappler::xenolith::core::ColorMode::IntensityChannel

## BRIEF

Альфаканал как канал интенсивности

## CONTENT

Альфаканал как канал интенсивности

Тип: stappler::xenolith::core::ColorMode const


# ::stappler::xenolith::core::ColorMode::AlphaChannel

## BRIEF

Альфаканал как канал прозрачности

## CONTENT

Альфаканал как канал прозрачности

Тип: stappler::xenolith::core::ColorMode const


# ::stappler::xenolith::core::ColorMode::Mode

## BRIEF

Базовый режим

## CONTENT

Базовый режим

Значения:
* Solid
* Custom


# ::stappler::xenolith::core::ColorMode::mode

## BRIEF

Базовый режим

## CONTENT

Базовый режим

Тип: uint32_t


# ::stappler::xenolith::core::ColorMode::r

## BRIEF

Канал красного

## CONTENT

Канал красного

Тип: uint32_t


# ::stappler::xenolith::core::ColorMode::g

## BRIEF

Канал зелёного

## CONTENT

Канал зелёного

Тип: uint32_t


# ::stappler::xenolith::core::ColorMode::b

## BRIEF

Канал синего

## CONTENT

Канал синего

Тип: uint32_t


# ::stappler::xenolith::core::ColorMode::a

## BRIEF

Канал альфа

## CONTENT

Канал альфа

Тип: uint32_t


# ::stappler::xenolith::core::ColorMode::ColorMode()

## BRIEF

Конструктор полного цвета

## CONTENT

Конструктор полного цвета

# ::stappler::xenolith::core::ColorMode::ColorMode(stappler::xenolith::core::ComponentMapping,stappler::xenolith::core::ComponentMapping,stappler::xenolith::core::ComponentMapping,stappler::xenolith::core::ComponentMapping)

## BRIEF

Конструктор с указанием параметров

## CONTENT

Конструктор с указанием параметров

Параметры:
* stappler::xenolith::core::ComponentMapping - красный
* stappler::xenolith::core::ComponentMapping - зелёный
* stappler::xenolith::core::ComponentMapping - синий
* stappler::xenolith::core::ComponentMapping - альфа


# ::stappler::xenolith::core::ColorMode::ColorMode(stappler::xenolith::core::ComponentMapping,stappler::xenolith::core::ComponentMapping)

## BRIEF

Конструктор с указанием параметров

## CONTENT

Конструктор с указанием параметров

Параметры:
* stappler::xenolith::core::ComponentMapping - цвета
* stappler::xenolith::core::ComponentMapping - альфа


# ::stappler::xenolith::core::ColorMode::ColorMode(stappler::xenolith::core::ColorMode const&)

## BRIEF

Конструктор копирования

## CONTENT

Конструктор копирования

Параметры:
* stappler::xenolith::core::ColorMode const&


# ::stappler::xenolith::core::ColorMode::ColorMode(stappler::xenolith::core::ColorMode&&)

## BRIEF

Конструктор перемещения

## CONTENT

Конструктор перемещения

Параметры:
* stappler::xenolith::core::ColorMode&&


# ::stappler::xenolith::core::ColorMode::operator=(stappler::xenolith::core::ColorMode const&)

## BRIEF

Оператор копирования

## CONTENT

Оператор копирования

Параметры:
* stappler::xenolith::core::ColorMode const&

Возвращает:
* stappler::xenolith::core::ColorMode&

# ::stappler::xenolith::core::ColorMode::operator=(stappler::xenolith::core::ColorMode&&)

## BRIEF

Оператор перемещения

## CONTENT

Оператор перемещения

Параметры:
* stappler::xenolith::core::ColorMode&&

Возвращает:
* stappler::xenolith::core::ColorMode&

# ::stappler::xenolith::core::ColorMode::operator==(stappler::xenolith::core::ColorMode const&) const

## BRIEF

Оператор сравнения

## CONTENT

Оператор сравнения

Параметры:
* stappler::xenolith::core::ColorMode const&

Возвращает:
* bool

# ::stappler::xenolith::core::ColorMode::operator!=(stappler::xenolith::core::ColorMode const&) const

## BRIEF

Оператор сравнения

## CONTENT

Оператор сравнения

Параметры:
* stappler::xenolith::core::ColorMode const&

Возвращает:
* bool

# ::stappler::xenolith::core::ColorMode::getMode() const

## BRIEF

Возвращает базовый режим

## CONTENT

Возвращает базовый режим

Возвращает:
* stappler::xenolith::core::ColorMode::Mode

# ::stappler::xenolith::core::ColorMode::getR() const

## BRIEF

Красный канал

## CONTENT

Красный канал

Возвращает:
* stappler::xenolith::core::ComponentMapping

# ::stappler::xenolith::core::ColorMode::getG() const

## BRIEF

Зелёный канал

## CONTENT

Зелёный канал

Возвращает:
* stappler::xenolith::core::ComponentMapping

# ::stappler::xenolith::core::ColorMode::getB() const

## BRIEF

Синий канал

## CONTENT

Синий канал

Возвращает:
* stappler::xenolith::core::ComponentMapping

# ::stappler::xenolith::core::ColorMode::getA() const

## BRIEF

Альфа канал

## CONTENT

Альфа канал

Возвращает:
* stappler::xenolith::core::ComponentMapping

# ::stappler::xenolith::core::ColorMode::toInt() const

## BRIEF

Конвертирует режим в целое число

## CONTENT

Конвертирует режим в целое число

Возвращает:
* uint32_t

# ::stappler::xenolith::core::ColorMode::operator uint32_t() const

## BRIEF

Конвертирует режим в целое число

## CONTENT

Конвертирует режим в целое число

Возвращает:
* uint32_t

# ::stappler::xenolith::core::BlendInfo

## BRIEF

Параметры смешивания цветов

## CONTENT

Параметры смешивания цветов


# ::stappler::xenolith::core::BlendInfo::enabled

## BRIEF

Флаг активности

## CONTENT

Флаг активности

Тип: uint32_t


# ::stappler::xenolith::core::BlendInfo::srcColor

## BRIEF

Параметр исходного цвета

## CONTENT

Параметр исходного цвета

Тип: uint32_t


# ::stappler::xenolith::core::BlendInfo::dstColor

## BRIEF

Параметр цвета назначения

## CONTENT

Параметр цвета назначения

Тип: uint32_t


# ::stappler::xenolith::core::BlendInfo::opColor

## BRIEF

Операция смешивания цвета

## CONTENT

Операция смешивания цвета

Тип: uint32_t


# ::stappler::xenolith::core::BlendInfo::srcAlpha

## BRIEF

Параметр исходного альфаканала

## CONTENT

Параметр исходного альфаканала

Тип: uint32_t


# ::stappler::xenolith::core::BlendInfo::dstAlpha

## BRIEF

Параметр альфаканала назначения

## CONTENT

Параметр альфаканала назначения

Тип: uint32_t


# ::stappler::xenolith::core::BlendInfo::opAlpha

## BRIEF

Оператор альфаканала

## CONTENT

Оператор альфаканала

Тип: uint32_t


# ::stappler::xenolith::core::BlendInfo::writeMask

## BRIEF

Маска записи цвета

## CONTENT

Маска записи цвета

Тип: uint32_t


# ::stappler::xenolith::core::BlendInfo::BlendInfo()

## BRIEF

Конструктор

## CONTENT

Конструктор


# ::stappler::xenolith::core::BlendInfo::BlendInfo(stappler::xenolith::core::BlendFactor,stappler::xenolith::core::BlendFactor,stappler::xenolith::core::BlendOp,stappler::xenolith::core::ColorComponentFlags)

## BRIEF

Конструктор из параметров

## CONTENT

Конструктор из параметров

Параметры:
* stappler::xenolith::core::BlendFactor - параметр исходного цвета
* stappler::xenolith::core::BlendFactor - параметр цвета назначения
* stappler::xenolith::core::BlendOp - операция смешивания
* stappler::xenolith::core::ColorComponentFlags - маска цветов


# ::stappler::xenolith::core::BlendInfo::BlendInfo(stappler::xenolith::core::BlendFactor,stappler::xenolith::core::BlendFactor,stappler::xenolith::core::BlendOp,stappler::xenolith::core::BlendFactor,stappler::xenolith::core::BlendFactor,stappler::xenolith::core::BlendOp,stappler::xenolith::core::ColorComponentFlags)

## BRIEF

Конструктор из параметров

## CONTENT

Конструктор из параметров

Параметры:
* stappler::xenolith::core::BlendFactor - параметр исходного цвета
* stappler::xenolith::core::BlendFactor - параметр цвета назначения
* stappler::xenolith::core::BlendOp - операция смешивания цвета
* stappler::xenolith::core::BlendFactor - параметр исходного альфаканала
* stappler::xenolith::core::BlendFactor - параметр альфаканала назначения
* stappler::xenolith::core::BlendOp - операция смешивания альфаканала
* stappler::xenolith::core::ColorComponentFlags - маска цветов


# ::stappler::xenolith::core::BlendInfo::operator==(stappler::xenolith::core::BlendInfo const&) const

## BRIEF

Оператор сравнения

## CONTENT

Оператор сравнения

Параметры:
* stappler::xenolith::core::BlendInfo const&

Возвращает:
* bool

# ::stappler::xenolith::core::BlendInfo::operator!=(stappler::xenolith::core::BlendInfo const&) const

## BRIEF

Оператор сравнения

## CONTENT

Оператор сравнения

Параметры:
* stappler::xenolith::core::BlendInfo const&

Возвращает:
* bool

# ::stappler::xenolith::core::BlendInfo::isEnabled() const

## BRIEF

Проверяет, включено ли смешивание

## CONTENT

Проверяет, включено ли смешивание

Возвращает:
* bool

# ::stappler::xenolith::core::DepthInfo

## BRIEF

Параметры работы с буфером глубины

## CONTENT

Параметры работы с буфером глубины


# ::stappler::xenolith::core::DepthInfo::writeEnabled

## BRIEF

Запись включена

## CONTENT

Запись включена

Тип: uint32_t


# ::stappler::xenolith::core::DepthInfo::testEnabled

## BRIEF

Проверка включена

## CONTENT

Проверка включена

Тип: uint32_t


# ::stappler::xenolith::core::DepthInfo::compare

## BRIEF

Оператор сравнения

## CONTENT

Оператор сравнения

Тип: uint32_t


# ::stappler::xenolith::core::DepthInfo::DepthInfo()

## BRIEF

Конструктор

## CONTENT

Конструктор


# ::stappler::xenolith::core::DepthInfo::DepthInfo(bool,bool,stappler::xenolith::core::CompareOp)

## BRIEF

Конструктор

## CONTENT

Конструктор

Параметры:
* bool - включена ли запись
* bool - включена ли проверка
* stappler::xenolith::core::CompareOp - операция сранения


# ::stappler::xenolith::core::DepthInfo::operator==(stappler::xenolith::core::DepthInfo const&) const

## BRIEF

Оператор сравнения

## CONTENT

Оператор сравнения

Параметры:
* stappler::xenolith::core::DepthInfo const&

Возвращает:
* bool

# ::stappler::xenolith::core::DepthInfo::operator!=(stappler::xenolith::core::DepthInfo const&) const

## BRIEF

Оператор сравнения

## CONTENT

Оператор сравнения

Параметры:
* stappler::xenolith::core::DepthInfo const&

Возвращает:
* bool

# ::stappler::xenolith::core::DepthBounds

## BRIEF

Граничные условия глубины

## CONTENT

Граничные условия глубины


# ::stappler::xenolith::core::DepthBounds::enabled

## BRIEF

Флаг активности

## CONTENT

Флаг активности

Тип: bool


# ::stappler::xenolith::core::DepthBounds::min

## BRIEF

Минимум

## CONTENT

Минимум

Тип: float


# ::stappler::xenolith::core::DepthBounds::max

## BRIEF

Максимум

## CONTENT

Максимум

Тип: float


# ::stappler::xenolith::core::DepthBounds::operator==(stappler::xenolith::core::DepthBounds const&) const

## BRIEF

Оператор сравнения

## CONTENT

Оператор сравнения

Параметры:
* stappler::xenolith::core::DepthBounds const&

Возвращает:
* bool

# ::stappler::xenolith::core::DepthBounds::operator!=(stappler::xenolith::core::DepthBounds const&) const

## BRIEF

Оператор сравнения

## CONTENT

Оператор сравнения

Параметры:
* stappler::xenolith::core::DepthBounds const&

Возвращает:
* bool

# ::stappler::xenolith::core::StencilInfo

## BRIEF

Параметры трафарета

## CONTENT

Параметры трафарета


# ::stappler::xenolith::core::StencilInfo::fail

## BRIEF

Операция ошибки

## CONTENT

Операция ошибки

Тип: stappler::xenolith::core::StencilOp


# ::stappler::xenolith::core::StencilInfo::pass

## BRIEF

Операция успеха

## CONTENT

Операция успеха

Тип: stappler::xenolith::core::StencilOp


# ::stappler::xenolith::core::StencilInfo::depthFail

## BRIEF

Операция ошибки по глубине

## CONTENT

Операция ошибки по глубине

Тип: stappler::xenolith::core::StencilOp


# ::stappler::xenolith::core::StencilInfo::compare

## BRIEF

Операция сравнения

## CONTENT

Операция сравнения

Тип: stappler::xenolith::core::CompareOp


# ::stappler::xenolith::core::StencilInfo::compareMask

## BRIEF

Маска сравнения

## CONTENT

Маска сравнения

Тип: uint32_t


# ::stappler::xenolith::core::StencilInfo::writeMask

## BRIEF

Маска записи

## CONTENT

Маска записи

Тип: uint32_t


# ::stappler::xenolith::core::StencilInfo::reference

## BRIEF

Базовое значение

## CONTENT

Базовое значение

Тип: uint32_t


# ::stappler::xenolith::core::LineWidth

## BRIEF

Тип ширины линии

## CONTENT

Тип ширины линии. Если отрицательный - размер точки


# ::stappler::xenolith::core::PipelineMaterialInfo

## BRIEF

Информация о материале для пайплайна

## CONTENT

Информация о материале для пайплайна


# ::stappler::xenolith::core::PipelineMaterialInfo::PipelineMaterialInfo()

## BRIEF

Конструктор

## CONTENT

Доступ: public

Конструктор


# ::stappler::xenolith::core::PipelineMaterialInfo::PipelineMaterialInfo(stappler::xenolith::core::PipelineMaterialInfo const&)

## BRIEF

Конструктор копирования

## CONTENT

Доступ: public

Конструктор копирования

Параметры:
* stappler::xenolith::core::PipelineMaterialInfo const&


# ::stappler::xenolith::core::PipelineMaterialInfo::operator=(stappler::xenolith::core::PipelineMaterialInfo const&)

## BRIEF

Оператор копирования

## CONTENT

Доступ: public

Оператор копирования

Параметры:
* stappler::xenolith::core::PipelineMaterialInfo const&

Возвращает:
* stappler::xenolith::core::PipelineMaterialInfo&

# ::stappler::xenolith::core::PipelineMaterialInfo::PipelineMaterialInfo<typename,typename,typename>(T&&,Args &&...)

## BRIEF

Конструктор из типизированных параметров

## CONTENT

Доступ: public

Конструктор из типизированных параметров

Параметры шаблона:
* typename T
* typename Args
* typename 

Параметры:
* T&&
* Args &&...


# ::stappler::xenolith::core::PipelineMaterialInfo::setBlendInfo(stappler::xenolith::core::BlendInfo const&)

## BRIEF

Устанавливает параметры смешивания цветов

## CONTENT

Доступ: public

Устанавливает параметры смешивания цветов

Параметры:
* stappler::xenolith::core::BlendInfo const&


# ::stappler::xenolith::core::PipelineMaterialInfo::setDepthInfo(stappler::xenolith::core::DepthInfo const&)

## BRIEF

Устанавливает параметры работы с глубиной

## CONTENT

Доступ: public

Устанавливает параметры работы с глубиной

Параметры:
* stappler::xenolith::core::DepthInfo const&


# ::stappler::xenolith::core::PipelineMaterialInfo::setDepthBounds(stappler::xenolith::core::DepthBounds const&)

## BRIEF

Устанавливает границы глубины

## CONTENT

Доступ: public

Устанавливает границы глубины

Параметры:
* stappler::xenolith::core::DepthBounds const&


# ::stappler::xenolith::core::PipelineMaterialInfo::enableStencil(stappler::xenolith::core::StencilInfo const&)

## BRIEF

Включает трафарет с параметрами

## CONTENT

Доступ: public

Включает трафарет с параметрами

Параметры:
* stappler::xenolith::core::StencilInfo const&


# ::stappler::xenolith::core::PipelineMaterialInfo::enableStencil(stappler::xenolith::core::StencilInfo const&,stappler::xenolith::core::StencilInfo const&)

## BRIEF

Включает трафарет с параметрами

## CONTENT

Доступ: public

Включает трафарет с параметрами

Параметры:
* stappler::xenolith::core::StencilInfo const& - трафарет для передней стороны объекта
* stappler::xenolith::core::StencilInfo const& - трафарет для задней стороны объекта


# ::stappler::xenolith::core::PipelineMaterialInfo::disableStancil()

## BRIEF

Выключает трафарет

## CONTENT

Доступ: public

Выключает трафарет


# ::stappler::xenolith::core::PipelineMaterialInfo::setLineWidth(float)

## BRIEF

Устанавливает ширину линий

## CONTENT

Доступ: public

Устанавливает ширину линий

Параметры:
* float


# ::stappler::xenolith::core::PipelineMaterialInfo::getBlendInfo() const

## BRIEF

Возвращает параметры смешивания цветов

## CONTENT

Доступ: public

Возвращает параметры смешивания цветов

Возвращает:
* stappler::xenolith::core::BlendInfo const&

# ::stappler::xenolith::core::PipelineMaterialInfo::getDepthInfo() const

## BRIEF

Возвращает параметры работы с буфером глубины

## CONTENT

Доступ: public

Возвращает параметры работы с буфером глубины

Возвращает:
* stappler::xenolith::core::DepthInfo const&

# ::stappler::xenolith::core::PipelineMaterialInfo::getDepthBounds() const

## BRIEF

Возвращает границы глубины

## CONTENT

Доступ: public

Возвращает границы глубины

Возвращает:
* stappler::xenolith::core::DepthBounds const&

# ::stappler::xenolith::core::PipelineMaterialInfo::isStancilEnabled() const

## BRIEF

Проверяет, включен ли трафарет

## CONTENT

Доступ: public

Проверяет, включен ли трафарет

Возвращает:
* bool

# ::stappler::xenolith::core::PipelineMaterialInfo::getStencilInfoFront() const

## BRIEF

Возвращает трафарет для передней стороны

## CONTENT

Доступ: public

Возвращает трафарет для передней стороны

Возвращает:
* stappler::xenolith::core::StencilInfo const&

# ::stappler::xenolith::core::PipelineMaterialInfo::getStencilInfoBack() const

## BRIEF

Возвращает трафарет для задней стороны

## CONTENT

Доступ: public

Возвращает трафарет для задней стороны

Возвращает:
* stappler::xenolith::core::StencilInfo const&

# ::stappler::xenolith::core::PipelineMaterialInfo::getLineWidth() const

## BRIEF

Возвращает ширину линий

## CONTENT

Доступ: public

Возвращает ширину линий

Возвращает:
* float

# ::stappler::xenolith::core::PipelineMaterialInfo::operator==(stappler::xenolith::core::PipelineMaterialInfo const&) const

## BRIEF

Оператор сравнения

## CONTENT

Доступ: public

Оператор сравнения

Параметры:
* stappler::xenolith::core::PipelineMaterialInfo const&

Возвращает:
* bool

# ::stappler::xenolith::core::PipelineMaterialInfo::operator!=(stappler::xenolith::core::PipelineMaterialInfo const&) const

## BRIEF

Оператор сравнения

## CONTENT

Доступ: public

Оператор сравнения

Параметры:
* stappler::xenolith::core::PipelineMaterialInfo const&

Возвращает:
* bool

# ::stappler::xenolith::core::PipelineMaterialInfo::hash() const

## BRIEF

Возвращает значение хеша

## CONTENT

Доступ: public

Возвращает значение хеша

Возвращает:
* size_t

# ::stappler::xenolith::core::PipelineMaterialInfo::data() const

## BRIEF

Возвращает данные в виде текста

## CONTENT

Доступ: public

Возвращает данные в виде текста

Возвращает:
* stappler::mem_std::String

# ::stappler::xenolith::core::PipelineMaterialInfo::description() const

## BRIEF

Возвращает описание параметров

## CONTENT

Доступ: public

Возвращает описание параметров

Возвращает:
* stappler::mem_std::String

# ::stappler::xenolith::core::PipelineMaterialInfo::_setup(stappler::xenolith::core::BlendInfo const&)

## BRIEF

Устанавливает параметр

## CONTENT

Доступ: protected

Устанавливает параметр

Параметры:
* stappler::xenolith::core::BlendInfo const&


# ::stappler::xenolith::core::PipelineMaterialInfo::_setup(stappler::xenolith::core::DepthInfo const&)

## BRIEF

Устанавливает параметр

## CONTENT

Доступ: protected

Устанавливает параметр

Параметры:
* stappler::xenolith::core::DepthInfo const&


# ::stappler::xenolith::core::PipelineMaterialInfo::_setup(stappler::xenolith::core::DepthBounds const&)

## BRIEF

Устанавливает параметр

## CONTENT

Доступ: protected

Устанавливает параметр

Параметры:
* stappler::xenolith::core::DepthBounds const&


# ::stappler::xenolith::core::PipelineMaterialInfo::_setup(stappler::xenolith::core::StencilInfo const&)

## BRIEF

Устанавливает параметр

## CONTENT

Доступ: protected

Устанавливает параметр

Параметры:
* stappler::xenolith::core::StencilInfo const&


# ::stappler::xenolith::core::PipelineMaterialInfo::_setup(stappler::xenolith::core::LineWidth)

## BRIEF

Устанавливает параметр

## CONTENT

Доступ: protected

Устанавливает параметр

Параметры:
* stappler::xenolith::core::LineWidth


# ::stappler::xenolith::core::PipelineMaterialInfo::setup<typename>(T&&)

## BRIEF

Устанавливает параметр

## CONTENT

Доступ: protected

Устанавливает параметр

Параметры шаблона:
* typename T

Параметры:
* T&&


# ::stappler::xenolith::core::PipelineMaterialInfo::setup<typename,typename>(T&&,Args &&...)

## BRIEF

Устанавливает параметр

## CONTENT

Доступ: protected

Устанавливает параметр

Параметры шаблона:
* typename T
* typename Args

Параметры:
* T&&
* Args &&...


# ::stappler::xenolith::core::PipelineMaterialInfo::setup()

## BRIEF

Устанавливает параметр

## CONTENT

Доступ: protected

Устанавливает параметр


# ::stappler::xenolith::core::PipelineMaterialInfo::blend

## BRIEF

Смешивание

## CONTENT

Доступ: protected

Смешивание

Тип: stappler::xenolith::core::BlendInfo


# ::stappler::xenolith::core::PipelineMaterialInfo::depth

## BRIEF

Параметры глубины

## CONTENT

Доступ: protected

Параметры глубины

Тип: stappler::xenolith::core::DepthInfo


# ::stappler::xenolith::core::PipelineMaterialInfo::bounds

## BRIEF

Границы глубины

## CONTENT

Доступ: protected

Границы глубины

Тип: stappler::xenolith::core::DepthBounds


# ::stappler::xenolith::core::PipelineMaterialInfo::front

## BRIEF

Трафарет переднего края

## CONTENT

Доступ: protected

Трафарет переднего края

Тип: stappler::xenolith::core::StencilInfo


# ::stappler::xenolith::core::PipelineMaterialInfo::back

## BRIEF

Трафарет заднего края

## CONTENT

Доступ: protected

Трафарет заднего края

Тип: stappler::xenolith::core::StencilInfo


# ::stappler::xenolith::core::PipelineMaterialInfo::stencil

## BRIEF

Флаг работы трафарета

## CONTENT

Доступ: protected

Флаг работы трафарета

Тип: uint32_t


# ::stappler::xenolith::core::PipelineMaterialInfo::lineWidth

## BRIEF

Ширина линий

## CONTENT

Доступ: protected

Ширина линий

Тип: float
