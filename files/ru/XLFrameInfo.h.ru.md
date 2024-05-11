Title: XLFrameInfo.h


# XENOLITH_SCENE_DIRECTOR_XLFRAMEINFO_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::FrameInfo

## BRIEF

## CONTENT


# ::stappler::xenolith::FrameInfo::pool

## BRIEF

## CONTENT

Тип: Rc<stappler::xenolith::PoolRef>


# ::stappler::xenolith::FrameInfo::request

## BRIEF

## CONTENT

Тип: Rc<core::FrameRequest>


# ::stappler::xenolith::FrameInfo::director

## BRIEF

## CONTENT

Тип: Rc<stappler::xenolith::Director>


# ::stappler::xenolith::FrameInfo::scene

## BRIEF

## CONTENT

Тип: Rc<stappler::xenolith::Scene>


# ::stappler::xenolith::FrameInfo::input

## BRIEF

## CONTENT

Тип: Rc<stappler::xenolith::InputListenerStorage>


# ::stappler::xenolith::FrameInfo::zPath

## BRIEF

## CONTENT

Тип: memory::vector<ZOrder>


# ::stappler::xenolith::FrameInfo::viewProjectionStack

## BRIEF

## CONTENT

Тип: memory::vector<Mat4>


# ::stappler::xenolith::FrameInfo::modelTransformStack

## BRIEF

## CONTENT

Тип: memory::vector<Mat4>


# ::stappler::xenolith::FrameInfo::depthStack

## BRIEF

## CONTENT

Тип: memory::vector<float>


# ::stappler::xenolith::FrameInfo::contextStack

## BRIEF

## CONTENT

Тип: memory::vector<Rc<FrameContextHandle>>


# ::stappler::xenolith::FrameInfo::componentsStack

## BRIEF

## CONTENT

Тип: memory::map<uint64_t, memory::vector<Rc<Component>>>


# ::stappler::xenolith::FrameInfo::resolvedInputs

## BRIEF

## CONTENT

Тип: memory::set<const core::AttachmentData *>


# ::stappler::xenolith::FrameInfo::focusValue

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::xenolith::FrameInfo::currentContext

## BRIEF

## CONTENT

Тип: stappler::xenolith::FrameContextHandle*


# ::stappler::xenolith::FrameInfo::pushComponent(Rc<stappler::xenolith::Component> const&)

## BRIEF

## CONTENT

Параметры:
* Rc<stappler::xenolith::Component> const&

Возвращает:
* memory::vector<Rc<Component>>*

# ::stappler::xenolith::FrameInfo::popComponent(memory::vector<Rc<Component>>*)

## BRIEF

## CONTENT

Параметры:
* memory::vector<Rc<Component>>*


# ::stappler::xenolith::FrameInfo::getComponent<typename>(uint64_t) const

## BRIEF

## CONTENT

Параметры шаблона:
* typename T

Параметры:
* uint64_t

Возвращает:
* Rc<T>

# ::stappler::xenolith::FrameInfo::pushContext(stappler::xenolith::FrameContext*)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::FrameContext*


# ::stappler::xenolith::FrameInfo::popContext()

## BRIEF

## CONTENT
