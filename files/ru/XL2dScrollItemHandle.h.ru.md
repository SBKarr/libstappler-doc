Title: XL2dScrollItemHandle.h


# XENOLITH_RENDERER_BASIC2D_XL2DSCROLLITEMHANDLE_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::basic2d::ScrollItemHandle

## BRIEF

## CONTENT

Базовые классы:
* Component


# ::stappler::xenolith::basic2d::ScrollItemHandle::Item

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::basic2d::ScrollItemHandle::Callback

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::basic2d::ScrollItemHandle::~ScrollItemHandle()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::basic2d::ScrollItemHandle::onNodeInserted(stappler::xenolith::basic2d::ScrollController*,stappler::xenolith::basic2d::ScrollItemHandle::Item&,size_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::basic2d::ScrollController*
* stappler::xenolith::basic2d::ScrollItemHandle::Item&
* size_t


# ::stappler::xenolith::basic2d::ScrollItemHandle::onNodeUpdated(stappler::xenolith::basic2d::ScrollController*,stappler::xenolith::basic2d::ScrollItemHandle::Item&,size_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::basic2d::ScrollController*
* stappler::xenolith::basic2d::ScrollItemHandle::Item&
* size_t


# ::stappler::xenolith::basic2d::ScrollItemHandle::onNodeRemoved(stappler::xenolith::basic2d::ScrollController*,stappler::xenolith::basic2d::ScrollItemHandle::Item&,size_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::basic2d::ScrollController*
* stappler::xenolith::basic2d::ScrollItemHandle::Item&
* size_t


# ::stappler::xenolith::basic2d::ScrollItemHandle::setInsertCallback(stappler::xenolith::basic2d::ScrollItemHandle::Callback&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::basic2d::ScrollItemHandle::Callback&&


# ::stappler::xenolith::basic2d::ScrollItemHandle::setUpdateCallback(stappler::xenolith::basic2d::ScrollItemHandle::Callback&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::basic2d::ScrollItemHandle::Callback&&


# ::stappler::xenolith::basic2d::ScrollItemHandle::setRemoveCallback(stappler::xenolith::basic2d::ScrollItemHandle::Callback&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::basic2d::ScrollItemHandle::Callback&&


# ::stappler::xenolith::basic2d::ScrollItemHandle::resize(float,bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float
* bool


# ::stappler::xenolith::basic2d::ScrollItemHandle::forceResize(float,bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float
* bool


# ::stappler::xenolith::basic2d::ScrollItemHandle::setLocked(bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* bool


# ::stappler::xenolith::basic2d::ScrollItemHandle::isLocked() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::basic2d::ScrollItemHandle::isConnected() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::basic2d::ScrollItemHandle::_controller

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::basic2d::ScrollController*


# ::stappler::xenolith::basic2d::ScrollItemHandle::_itemIndex

## BRIEF

## CONTENT

Доступ: protected

Тип: size_t


# ::stappler::xenolith::basic2d::ScrollItemHandle::_insertCallback

## BRIEF

## CONTENT

Доступ: protected

Тип: Callback


# ::stappler::xenolith::basic2d::ScrollItemHandle::_updateCallback

## BRIEF

## CONTENT

Доступ: protected

Тип: Callback


# ::stappler::xenolith::basic2d::ScrollItemHandle::_removeCallback

## BRIEF

## CONTENT

Доступ: protected

Тип: Callback


# ::stappler::xenolith::basic2d::ScrollItemHandle::_isLocked

## BRIEF

## CONTENT

Доступ: protected

Тип: bool
