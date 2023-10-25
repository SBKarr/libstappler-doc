Title: MaterialStyleMonitor.h


# XENOLITH_RENDERER_MATERIAL2D_BASE_MATERIALSTYLEMONITOR_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::material2d::StyleMonitor

## BRIEF

## CONTENT

Базовые классы:
* Component


# ::stappler::xenolith::material2d::StyleMonitor::StyleCallback

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::material2d::StyleMonitor::~StyleMonitor()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::material2d::StyleMonitor::init(stappler::xenolith::material2d::StyleMonitor::StyleCallback&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::material2d::StyleMonitor::StyleCallback&&

Возвращает:
* bool

# ::stappler::xenolith::material2d::StyleMonitor::setStyleCallback(stappler::xenolith::material2d::StyleMonitor::StyleCallback&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::material2d::StyleMonitor::StyleCallback&&


# ::stappler::xenolith::material2d::StyleMonitor::getStyleCallback() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* StyleCallback&

# ::stappler::xenolith::material2d::StyleMonitor::setDirty(bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* bool


# ::stappler::xenolith::material2d::StyleMonitor::visit(stappler::xenolith::FrameInfo&,stappler::xenolith::NodeFlags)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::FrameInfo&
* stappler::xenolith::NodeFlags


# ::stappler::xenolith::material2d::StyleMonitor::_styleCallback

## BRIEF

## CONTENT

Доступ: protected

Тип: StyleCallback


# ::stappler::xenolith::material2d::StyleMonitor::_dirty

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::material2d::StyleMonitor::_interiorData

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::material2d::SurfaceStyleData
