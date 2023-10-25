Title: MaterialDataScrollHandlerSlice.h


# XENOLITH_RENDERER_MATERIAL2D_COMPONENTS_SCROLL_MATERIALDATASCROLLHANDLERSLICE_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::material2d::DataScrollHandlerSlice

## BRIEF

## CONTENT

Базовые классы:
* DataScroll::Handler


# ::stappler::xenolith::material2d::DataScrollHandlerSlice::DataCallback

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::material2d::DataScrollHandlerSlice::~DataScrollHandlerSlice()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::material2d::DataScrollHandlerSlice::init(stappler::xenolith::material2d::DataScroll*,stappler::xenolith::material2d::DataScrollHandlerSlice::DataCallback&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::material2d::DataScroll*
* stappler::xenolith::material2d::DataScrollHandlerSlice::DataCallback&&

Возвращает:
* bool

# ::stappler::xenolith::material2d::DataScrollHandlerSlice::setDataCallback(stappler::xenolith::material2d::DataScrollHandlerSlice::DataCallback&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::material2d::DataScrollHandlerSlice::DataCallback&&


# ::stappler::xenolith::material2d::DataScrollHandlerSlice::run(stappler::xenolith::material2d::DataScroll::Handler::Request,stappler::xenolith::material2d::DataScroll::Handler::DataMap&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::material2d::DataScroll::Handler::Request
* stappler::xenolith::material2d::DataScroll::Handler::DataMap&&

Возвращает:
* DataScroll::ItemMap

# ::stappler::xenolith::material2d::DataScrollHandlerSlice::getOrigin(stappler::xenolith::material2d::DataScroll::Handler::Request) const

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::material2d::DataScroll::Handler::Request

Возвращает:
* stappler::xenolith::Vec2

# ::stappler::xenolith::material2d::DataScrollHandlerSlice::onItem(stappler::mem_std::Value&&,stappler::xenolith::Vec2 const&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::mem_std::Value&&
* stappler::xenolith::Vec2 const&

Возвращает:
* Rc<DataScroll::Item>

# ::stappler::xenolith::material2d::DataScrollHandlerSlice::_originFront

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::Vec2


# ::stappler::xenolith::material2d::DataScrollHandlerSlice::_originBack

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::Vec2


# ::stappler::xenolith::material2d::DataScrollHandlerSlice::_dataCallback

## BRIEF

## CONTENT

Доступ: protected

Тип: DataCallback
