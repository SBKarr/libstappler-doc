Title: XLComponent.h


# XENOLITH_SCENE_NODES_XLCOMPONENT_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::Component

## BRIEF

## CONTENT

Базовые классы:
* Ref


# ::stappler::xenolith::Component::GetNextComponentId()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint64_t

# ::stappler::xenolith::Component::Component()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::Component::~Component()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::Component::init()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::Component::onAdded(stappler::xenolith::Node*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Node*


# ::stappler::xenolith::Component::onRemoved()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::Component::onEnter(stappler::xenolith::Scene*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Scene*


# ::stappler::xenolith::Component::onExit()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::Component::visit(stappler::xenolith::FrameInfo&,stappler::xenolith::NodeFlags)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::FrameInfo&
* stappler::xenolith::NodeFlags


# ::stappler::xenolith::Component::onContentSizeDirty()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::Component::onTransformDirty(stappler::xenolith::Mat4 const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Mat4 const&


# ::stappler::xenolith::Component::onReorderChildDirty()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::Component::isRunning() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::Component::isEnabled() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::Component::setEnabled(bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* bool


# ::stappler::xenolith::Component::getOwner() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::Node*

# ::stappler::xenolith::Component::setFrameTag(uint64_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint64_t


# ::stappler::xenolith::Component::getFrameTag() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint64_t

# ::stappler::xenolith::Component::_owner

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::Node*


# ::stappler::xenolith::Component::_enabled

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::Component::_running

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::Component::_frameTag

## BRIEF

## CONTENT

Доступ: protected

Тип: uint64_t
