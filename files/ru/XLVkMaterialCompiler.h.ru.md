Title: XLVkMaterialCompiler.h


# XENOLITH_BACKEND_VK_XLMATERIALCOMPILER_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::vk::MaterialCompiler

## BRIEF

## CONTENT

Базовые классы:
* core::Queue


# ::stappler::xenolith::vk::MaterialCompiler::MaterialAttachment

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::vk::MaterialCompiler::MaterialInputData

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::vk::MaterialCompiler::MaterialId

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::vk::MaterialCompiler::Material

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::vk::MaterialCompiler::~MaterialCompiler()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::vk::MaterialCompiler::init()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::vk::MaterialCompiler::inProgress(stappler::xenolith::vk::MaterialCompiler::MaterialAttachment const*) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::vk::MaterialCompiler::MaterialAttachment const*

Возвращает:
* bool

# ::stappler::xenolith::vk::MaterialCompiler::setInProgress(stappler::xenolith::vk::MaterialCompiler::MaterialAttachment const*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::vk::MaterialCompiler::MaterialAttachment const*


# ::stappler::xenolith::vk::MaterialCompiler::dropInProgress(stappler::xenolith::vk::MaterialCompiler::MaterialAttachment const*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::vk::MaterialCompiler::MaterialAttachment const*


# ::stappler::xenolith::vk::MaterialCompiler::hasRequest(stappler::xenolith::vk::MaterialCompiler::MaterialAttachment const*) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::vk::MaterialCompiler::MaterialAttachment const*

Возвращает:
* bool

# ::stappler::xenolith::vk::MaterialCompiler::appendRequest(stappler::xenolith::vk::MaterialCompiler::MaterialAttachment const*,Rc<stappler::xenolith::vk::MaterialCompiler::MaterialInputData>&&,Vector<Rc<core::DependencyEvent>>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::vk::MaterialCompiler::MaterialAttachment const*
* Rc<stappler::xenolith::vk::MaterialCompiler::MaterialInputData>&&
* Vector<Rc<core::DependencyEvent>>&&


# ::stappler::xenolith::vk::MaterialCompiler::clearRequests()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::vk::MaterialCompiler::makeRequest(Rc<stappler::xenolith::vk::MaterialCompiler::MaterialInputData>&&,Vector<Rc<core::DependencyEvent>>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Rc<stappler::xenolith::vk::MaterialCompiler::MaterialInputData>&&
* Vector<Rc<core::DependencyEvent>>&&

Возвращает:
* Rc<stappler::xenolith::core::Queue::FrameRequest>

# ::stappler::xenolith::vk::MaterialCompiler::runMaterialCompilationFrame(core::Loop&,Rc<stappler::xenolith::vk::MaterialCompiler::MaterialInputData>&&,Vector<Rc<core::DependencyEvent>>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* core::Loop&
* Rc<stappler::xenolith::vk::MaterialCompiler::MaterialInputData>&&
* Vector<Rc<core::DependencyEvent>>&&


# ::stappler::xenolith::vk::MaterialCompiler::MaterialRequest

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::vk::MaterialCompiler::MaterialRequest::materials

## BRIEF

## CONTENT

Тип: Map<stappler::xenolith::vk::MaterialCompiler::MaterialId, Rc<stappler::xenolith::vk::MaterialCompiler::Material>>


# ::stappler::xenolith::vk::MaterialCompiler::MaterialRequest::dynamic

## BRIEF

## CONTENT

Тип: Set<stappler::xenolith::vk::MaterialCompiler::MaterialId>


# ::stappler::xenolith::vk::MaterialCompiler::MaterialRequest::remove

## BRIEF

## CONTENT

Тип: Set<stappler::xenolith::vk::MaterialCompiler::MaterialId>


# ::stappler::xenolith::vk::MaterialCompiler::MaterialRequest::deps

## BRIEF

## CONTENT

Тип: Vector<Rc<core::DependencyEvent>>


# ::stappler::xenolith::vk::MaterialCompiler::MaterialRequest::callback

## BRIEF

## CONTENT

Тип: Function<void ()>


# ::stappler::xenolith::vk::MaterialCompiler::_attachment

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::core::Queue::AttachmentData const*


# ::stappler::xenolith::vk::MaterialCompiler::_inProgress

## BRIEF

## CONTENT

Доступ: protected

Тип: Set<const stappler::xenolith::vk::MaterialCompiler::MaterialAttachment *>


# ::stappler::xenolith::vk::MaterialCompiler::_requests

## BRIEF

## CONTENT

Доступ: protected

Тип: Map<const stappler::xenolith::vk::MaterialCompiler::MaterialAttachment *, stappler::xenolith::vk::MaterialCompiler::MaterialRequest>
