Title: XLVkMeshCompiler.h


# XENOLITH_BACKEND_VK_XLVKMESHCOMPILER_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::vk::MeshCompiler

## BRIEF

## CONTENT

Базовые классы:
* core::Queue


# ::stappler::xenolith::vk::MeshCompiler::MeshAttachment

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::vk::MeshCompiler::MeshInputData

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::vk::MeshCompiler::MeshIndex

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::vk::MeshCompiler::~MeshCompiler()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::vk::MeshCompiler::init()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::vk::MeshCompiler::inProgress(stappler::xenolith::vk::MeshCompiler::MeshAttachment const*) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::vk::MeshCompiler::MeshAttachment const*

Возвращает:
* bool

# ::stappler::xenolith::vk::MeshCompiler::setInProgress(stappler::xenolith::vk::MeshCompiler::MeshAttachment const*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::vk::MeshCompiler::MeshAttachment const*


# ::stappler::xenolith::vk::MeshCompiler::dropInProgress(stappler::xenolith::vk::MeshCompiler::MeshAttachment const*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::vk::MeshCompiler::MeshAttachment const*


# ::stappler::xenolith::vk::MeshCompiler::hasRequest(stappler::xenolith::vk::MeshCompiler::MeshAttachment const*) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::vk::MeshCompiler::MeshAttachment const*

Возвращает:
* bool

# ::stappler::xenolith::vk::MeshCompiler::appendRequest(stappler::xenolith::vk::MeshCompiler::MeshAttachment const*,Rc<stappler::xenolith::vk::MeshCompiler::MeshInputData>&&,Vector<Rc<core::DependencyEvent>>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::vk::MeshCompiler::MeshAttachment const*
* Rc<stappler::xenolith::vk::MeshCompiler::MeshInputData>&&
* Vector<Rc<core::DependencyEvent>>&&


# ::stappler::xenolith::vk::MeshCompiler::clearRequests()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::vk::MeshCompiler::makeRequest(Rc<stappler::xenolith::vk::MeshCompiler::MeshInputData>&&,Vector<Rc<core::DependencyEvent>>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Rc<stappler::xenolith::vk::MeshCompiler::MeshInputData>&&
* Vector<Rc<core::DependencyEvent>>&&

Возвращает:
* Rc<stappler::xenolith::core::Queue::FrameRequest>

# ::stappler::xenolith::vk::MeshCompiler::runMeshCompilationFrame(core::Loop&,Rc<stappler::xenolith::vk::MeshCompiler::MeshInputData>&&,Vector<Rc<core::DependencyEvent>>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* core::Loop&
* Rc<stappler::xenolith::vk::MeshCompiler::MeshInputData>&&
* Vector<Rc<core::DependencyEvent>>&&


# ::stappler::xenolith::vk::MeshCompiler::MeshRequest

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::vk::MeshCompiler::MeshRequest::toAdd

## BRIEF

## CONTENT

Тип: Set<Rc<stappler::xenolith::vk::MeshCompiler::MeshIndex>>


# ::stappler::xenolith::vk::MeshCompiler::MeshRequest::toRemove

## BRIEF

## CONTENT

Тип: Set<Rc<stappler::xenolith::vk::MeshCompiler::MeshIndex>>


# ::stappler::xenolith::vk::MeshCompiler::MeshRequest::deps

## BRIEF

## CONTENT

Тип: Vector<Rc<core::DependencyEvent>>


# ::stappler::xenolith::vk::MeshCompiler::_attachment

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::core::Queue::AttachmentData const*


# ::stappler::xenolith::vk::MeshCompiler::_inProgress

## BRIEF

## CONTENT

Доступ: protected

Тип: Set<const stappler::xenolith::vk::MeshCompiler::MeshAttachment *>


# ::stappler::xenolith::vk::MeshCompiler::_requests

## BRIEF

## CONTENT

Доступ: protected

Тип: Map<const stappler::xenolith::vk::MeshCompiler::MeshAttachment *, stappler::xenolith::vk::MeshCompiler::MeshRequest>
