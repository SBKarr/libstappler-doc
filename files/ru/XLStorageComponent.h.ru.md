Title: XLStorageComponent.h


# XENOLITH_RESOURCES_STORAGE_XLSTORAGECOMPONENT_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::storage::Component

## BRIEF

## CONTENT

Базовые классы:
* db::AllocBase


# ::stappler::xenolith::storage::Component::~Component()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::storage::Component::Component(stappler::xenolith::storage::ComponentLoader&,stappler::StringView)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::storage::ComponentLoader&
* stappler::StringView


# ::stappler::xenolith::storage::Component::handleChildInit(stappler::xenolith::storage::Server const&,db::Transaction const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::storage::Server const&
* db::Transaction const&


# ::stappler::xenolith::storage::Component::handleChildRelease(stappler::xenolith::storage::Server const&,db::Transaction const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::storage::Server const&
* db::Transaction const&


# ::stappler::xenolith::storage::Component::handleStorageTransaction(db::Transaction&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* db::Transaction&


# ::stappler::xenolith::storage::Component::handleHeartbeat(stappler::xenolith::storage::Server const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::storage::Server const&


# ::stappler::xenolith::storage::Component::getName() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::StringView

# ::stappler::xenolith::storage::Component::_name

## BRIEF

## CONTENT

Доступ: protected

Тип: db::String


# ::stappler::xenolith::storage::ComponentLoader

## BRIEF

## CONTENT


# ::stappler::xenolith::storage::ComponentLoader::~ComponentLoader()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::storage::ComponentLoader::getPool() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* db::pool_t*

# ::stappler::xenolith::storage::ComponentLoader::getServer() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::storage::Server const&

# ::stappler::xenolith::storage::ComponentLoader::getTransaction() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* db::Transaction const&

# ::stappler::xenolith::storage::ComponentLoader::exportComponent(stappler::xenolith::storage::Component*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::storage::Component*


# ::stappler::xenolith::storage::ComponentLoader::exportScheme(db::Scheme const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* db::Scheme const&

Возвращает:
* db::Scheme const*

# ::stappler::xenolith::storage::ComponentLoader::define<typename>(db::Scheme&,Args &&...)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename Args

Параметры:
* db::Scheme&
* Args &&...


# ::stappler::xenolith::storage::ComponentContainer

## BRIEF

## CONTENT

Базовые классы:
* Ref


# ::stappler::xenolith::storage::ComponentContainer::TaskCallback

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::storage::ComponentContainer::~ComponentContainer()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::storage::ComponentContainer::init(stappler::StringView)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView

Возвращает:
* bool

# ::stappler::xenolith::storage::ComponentContainer::handleStorageInit(stappler::xenolith::storage::ComponentLoader&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::storage::ComponentLoader&


# ::stappler::xenolith::storage::ComponentContainer::handleStorageDisposed(db::Transaction const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* db::Transaction const&


# ::stappler::xenolith::storage::ComponentContainer::handleComponentsLoaded(stappler::xenolith::storage::Server const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::storage::Server const&


# ::stappler::xenolith::storage::ComponentContainer::handleComponentsUnloaded(stappler::xenolith::storage::Server const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::storage::Server const&


# ::stappler::xenolith::storage::ComponentContainer::getName() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::StringView

# ::stappler::xenolith::storage::ComponentContainer::setServer(stappler::xenolith::storage::Server const*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::storage::Server const*


# ::stappler::xenolith::storage::ComponentContainer::getServer() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::storage::Server const*

# ::stappler::xenolith::storage::ComponentContainer::isLoaded() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::storage::ComponentContainer::perform(stappler::xenolith::storage::ComponentContainer::TaskCallback&&,stappler::mem_std::Ref*) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::storage::ComponentContainer::TaskCallback&&
* stappler::mem_std::Ref*

Возвращает:
* bool

# ::stappler::xenolith::storage::ComponentContainer::_loaded

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::storage::ComponentContainer::_name

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::mem_std::String


# ::stappler::xenolith::storage::ComponentContainer::_server

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::storage::Server const*


# ::stappler::xenolith::storage::ComponentContainer::_pendingTasks

## BRIEF

## CONTENT

Доступ: protected

Тип: Vector<Pair<stappler::xenolith::storage::ComponentContainer::TaskCallback, Rc<stappler::mem_std::Ref>>>
