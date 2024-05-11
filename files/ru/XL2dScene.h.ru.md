Title: XL2dScene.h


# XENOLITH_RENDERER_BASIC2D_XL2DSCENE_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::basic2d::Scene2d

## BRIEF

## CONTENT

Базовые классы:
* Scene


# ::stappler::xenolith::basic2d::Scene2d::~Scene2d()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::basic2d::Scene2d::init(stappler::xenolith::Application*,core::FrameContraints const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Application*
* core::FrameContraints const&

Возвращает:
* bool

# ::stappler::xenolith::basic2d::Scene2d::init(stappler::xenolith::Application*,Callback<void (Queue::Builder &)> const&,core::FrameContraints const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Application*
* Callback<void (Queue::Builder &)> const&
* core::FrameContraints const&

Возвращает:
* bool

# ::stappler::xenolith::basic2d::Scene2d::init(Queue::Builder&&,core::FrameContraints const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Queue::Builder&&
* core::FrameContraints const&

Возвращает:
* bool

# ::stappler::xenolith::basic2d::Scene2d::update(stappler::xenolith::UpdateTime const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::UpdateTime const&


# ::stappler::xenolith::basic2d::Scene2d::onContentSizeDirty()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::basic2d::Scene2d::setFpsVisible(bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* bool


# ::stappler::xenolith::basic2d::Scene2d::isFpsVisible() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::basic2d::Scene2d::setContent(stappler::xenolith::SceneContent*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::SceneContent*


# ::stappler::xenolith::basic2d::Scene2d::initialize()

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::basic2d::Scene2d::addContentNodes(stappler::xenolith::SceneContent*)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::SceneContent*


# ::stappler::xenolith::basic2d::Scene2d::updateInputEventData(stappler::xenolith::InputEventData&,stappler::xenolith::InputEventData const&,stappler::geom::Vec2,uint32_t)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::InputEventData&
* stappler::xenolith::InputEventData const&
* stappler::geom::Vec2
* uint32_t


# ::stappler::xenolith::basic2d::Scene2d::_data1

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::InputEventData


# ::stappler::xenolith::basic2d::Scene2d::_data2

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::InputEventData


# ::stappler::xenolith::basic2d::Scene2d::_listener

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::InputListener*


# ::stappler::xenolith::basic2d::Scene2d::_fps

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::basic2d::Scene2d::FpsDisplay*


# ::stappler::xenolith::basic2d::Scene2d::_pointerReal

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::basic2d::VectorSprite*


# ::stappler::xenolith::basic2d::Scene2d::_pointerVirtual

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::basic2d::VectorSprite*


# ::stappler::xenolith::basic2d::Scene2d::_pointerCenter

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::basic2d::VectorSprite*
