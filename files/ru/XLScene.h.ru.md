Title: XLScene.h


# XENOLITH_SCENE_NODES_XLSCENE_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::Scene

## BRIEF

## CONTENT

Базовые классы:
* Node


# ::stappler::xenolith::Scene::Queue

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::Scene::FrameRequest

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::Scene::FrameQueue

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::Scene::FrameHandle

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::Scene::~Scene()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::Scene::init(Queue::Builder&&,core::FrameContraints const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Queue::Builder&&
* core::FrameContraints const&

Возвращает:
* bool

# ::stappler::xenolith::Scene::renderRequest(Rc<stappler::xenolith::Scene::FrameRequest> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Rc<stappler::xenolith::Scene::FrameRequest> const&


# ::stappler::xenolith::Scene::render(stappler::xenolith::FrameInfo&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::FrameInfo&


# ::stappler::xenolith::Scene::onEnter(stappler::xenolith::Scene*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Scene*


# ::stappler::xenolith::Scene::onExit()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::Scene::onContentSizeDirty()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::Scene::getQueue() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Rc<stappler::xenolith::Scene::Queue> const&

# ::stappler::xenolith::Scene::getDirector() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::Director*

# ::stappler::xenolith::Scene::setContent(stappler::xenolith::SceneContent*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::SceneContent*


# ::stappler::xenolith::Scene::getContent() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::SceneContent*

# ::stappler::xenolith::Scene::onPresented(stappler::xenolith::Director*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Director*


# ::stappler::xenolith::Scene::onFinished(stappler::xenolith::Director*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Director*


# ::stappler::xenolith::Scene::onFrameStarted(stappler::xenolith::Scene::FrameRequest&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Scene::FrameRequest&


# ::stappler::xenolith::Scene::onFrameEnded(stappler::xenolith::Scene::FrameRequest&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Scene::FrameRequest&


# ::stappler::xenolith::Scene::onFrameAttached(stappler::xenolith::Scene::FrameHandle const*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Scene::FrameHandle const*


# ::stappler::xenolith::Scene::onFrameDetached(stappler::xenolith::Scene::FrameHandle const*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Scene::FrameHandle const*


# ::stappler::xenolith::Scene::setFrameConstraints(core::FrameContraints const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* core::FrameContraints const&


# ::stappler::xenolith::Scene::getFrameConstraints() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* core::FrameContraints const&

# ::stappler::xenolith::Scene::getContentSize() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* const stappler::geom::Size2&

# ::stappler::xenolith::Scene::setClipContent(bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* bool


# ::stappler::xenolith::Scene::isClipContent() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::Scene::makeQueue(Queue::Builder&&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* Queue::Builder&&

Возвращает:
* Rc<stappler::xenolith::Scene::Queue>

# ::stappler::xenolith::Scene::updateContentNode(stappler::xenolith::SceneContent*)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::SceneContent*


# ::stappler::xenolith::Scene::_director

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::Director*


# ::stappler::xenolith::Scene::_content

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::SceneContent*


# ::stappler::xenolith::Scene::_queue

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::xenolith::Scene::Queue>


# ::stappler::xenolith::Scene::_constraints

## BRIEF

## CONTENT

Доступ: protected

Тип: core::FrameContraints
