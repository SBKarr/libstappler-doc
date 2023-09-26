Title: XLStorageServer.h


# XENOLITH_RESOURCES_STORAGE_XLSTORAGESERVER_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::storage::Server

## BRIEF

## CONTENT

Базовые классы:
* ApplicationExtension


# ::stappler::xenolith::storage::Server::DataCallback

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::storage::Server::QueryCallback

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::storage::Server::InitList<typename>

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename T


# ::stappler::xenolith::storage::Server::Scheme

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::storage::Server::~Server()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::storage::Server::init(stappler::xenolith::Application*,stappler::mem_std::Value const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Application*
* stappler::mem_std::Value const&

Возвращает:
* bool

# ::stappler::xenolith::storage::Server::initialize(stappler::xenolith::Application*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Application*


# ::stappler::xenolith::storage::Server::invalidate(stappler::xenolith::Application*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Application*


# ::stappler::xenolith::storage::Server::update(stappler::xenolith::Application*,stappler::xenolith::UpdateTime const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Application*
* stappler::xenolith::UpdateTime const&


# ::stappler::xenolith::storage::Server::getComponentContainer(stappler::StringView) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView

Возвращает:
* Rc<stappler::xenolith::storage::ComponentContainer>

# ::stappler::xenolith::storage::Server::addComponentContainer(Rc<stappler::xenolith::storage::ComponentContainer> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Rc<stappler::xenolith::storage::ComponentContainer> const&

Возвращает:
* bool

# ::stappler::xenolith::storage::Server::removeComponentContainer(Rc<stappler::xenolith::storage::ComponentContainer> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Rc<stappler::xenolith::storage::ComponentContainer> const&

Возвращает:
* bool

# ::stappler::xenolith::storage::Server::get(stappler::CoderSource,stappler::xenolith::storage::Server::DataCallback&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::CoderSource
* stappler::xenolith::storage::Server::DataCallback&&

Возвращает:
* bool

# ::stappler::xenolith::storage::Server::set(stappler::CoderSource,stappler::mem_std::Value&&,stappler::xenolith::storage::Server::DataCallback&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::CoderSource
* stappler::mem_std::Value&&
* stappler::xenolith::storage::Server::DataCallback&&

Возвращает:
* bool

# ::stappler::xenolith::storage::Server::clear(stappler::CoderSource,stappler::xenolith::storage::Server::DataCallback&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::CoderSource
* stappler::xenolith::storage::Server::DataCallback&&

Возвращает:
* bool

# ::stappler::xenolith::storage::Server::get(stappler::xenolith::storage::Server::Scheme const&,stappler::xenolith::storage::Server::DataCallback&&,uint64_t,db::UpdateFlags) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::storage::Server::Scheme const&
* stappler::xenolith::storage::Server::DataCallback&&
* uint64_t
* db::UpdateFlags

Возвращает:
* bool

# ::stappler::xenolith::storage::Server::get(stappler::xenolith::storage::Server::Scheme const&,stappler::xenolith::storage::Server::DataCallback&&,stappler::StringView,db::UpdateFlags) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::storage::Server::Scheme const&
* stappler::xenolith::storage::Server::DataCallback&&
* stappler::StringView
* db::UpdateFlags

Возвращает:
* bool

# ::stappler::xenolith::storage::Server::get(stappler::xenolith::storage::Server::Scheme const&,stappler::xenolith::storage::Server::DataCallback&&,stappler::mem_std::Value const&,db::UpdateFlags) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::storage::Server::Scheme const&
* stappler::xenolith::storage::Server::DataCallback&&
* stappler::mem_std::Value const&
* db::UpdateFlags

Возвращает:
* bool

# ::stappler::xenolith::storage::Server::get(stappler::xenolith::storage::Server::Scheme const&,stappler::xenolith::storage::Server::DataCallback&&,uint64_t,stappler::StringView,db::UpdateFlags) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::storage::Server::Scheme const&
* stappler::xenolith::storage::Server::DataCallback&&
* uint64_t
* stappler::StringView
* db::UpdateFlags

Возвращает:
* bool

# ::stappler::xenolith::storage::Server::get(stappler::xenolith::storage::Server::Scheme const&,stappler::xenolith::storage::Server::DataCallback&&,stappler::StringView,stappler::StringView,db::UpdateFlags) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::storage::Server::Scheme const&
* stappler::xenolith::storage::Server::DataCallback&&
* stappler::StringView
* stappler::StringView
* db::UpdateFlags

Возвращает:
* bool

# ::stappler::xenolith::storage::Server::get(stappler::xenolith::storage::Server::Scheme const&,stappler::xenolith::storage::Server::DataCallback&&,stappler::mem_std::Value const&,stappler::StringView,db::UpdateFlags) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::storage::Server::Scheme const&
* stappler::xenolith::storage::Server::DataCallback&&
* stappler::mem_std::Value const&
* stappler::StringView
* db::UpdateFlags

Возвращает:
* bool

# ::stappler::xenolith::storage::Server::get(stappler::xenolith::storage::Server::Scheme const&,stappler::xenolith::storage::Server::DataCallback&&,uint64_t,InitList<stappler::StringView>&&,db::UpdateFlags) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::storage::Server::Scheme const&
* stappler::xenolith::storage::Server::DataCallback&&
* uint64_t
* InitList<stappler::StringView>&&
* db::UpdateFlags

Возвращает:
* bool

# ::stappler::xenolith::storage::Server::get(stappler::xenolith::storage::Server::Scheme const&,stappler::xenolith::storage::Server::DataCallback&&,stappler::StringView,InitList<stappler::StringView>&&,db::UpdateFlags) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::storage::Server::Scheme const&
* stappler::xenolith::storage::Server::DataCallback&&
* stappler::StringView
* InitList<stappler::StringView>&&
* db::UpdateFlags

Возвращает:
* bool

# ::stappler::xenolith::storage::Server::get(stappler::xenolith::storage::Server::Scheme const&,stappler::xenolith::storage::Server::DataCallback&&,stappler::mem_std::Value const&,InitList<stappler::StringView>&&,db::UpdateFlags) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::storage::Server::Scheme const&
* stappler::xenolith::storage::Server::DataCallback&&
* stappler::mem_std::Value const&
* InitList<stappler::StringView>&&
* db::UpdateFlags

Возвращает:
* bool

# ::stappler::xenolith::storage::Server::get(stappler::xenolith::storage::Server::Scheme const&,stappler::xenolith::storage::Server::DataCallback&&,uint64_t,InitList<const char *>&&,db::UpdateFlags) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::storage::Server::Scheme const&
* stappler::xenolith::storage::Server::DataCallback&&
* uint64_t
* InitList<const char *>&&
* db::UpdateFlags

Возвращает:
* bool

# ::stappler::xenolith::storage::Server::get(stappler::xenolith::storage::Server::Scheme const&,stappler::xenolith::storage::Server::DataCallback&&,stappler::StringView,InitList<const char *>&&,db::UpdateFlags) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::storage::Server::Scheme const&
* stappler::xenolith::storage::Server::DataCallback&&
* stappler::StringView
* InitList<const char *>&&
* db::UpdateFlags

Возвращает:
* bool

# ::stappler::xenolith::storage::Server::get(stappler::xenolith::storage::Server::Scheme const&,stappler::xenolith::storage::Server::DataCallback&&,stappler::mem_std::Value const&,InitList<const char *>&&,db::UpdateFlags) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::storage::Server::Scheme const&
* stappler::xenolith::storage::Server::DataCallback&&
* stappler::mem_std::Value const&
* InitList<const char *>&&
* db::UpdateFlags

Возвращает:
* bool

# ::stappler::xenolith::storage::Server::get(stappler::xenolith::storage::Server::Scheme const&,stappler::xenolith::storage::Server::DataCallback&&,uint64_t,InitList<const db::Field *>&&,db::UpdateFlags) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::storage::Server::Scheme const&
* stappler::xenolith::storage::Server::DataCallback&&
* uint64_t
* InitList<const db::Field *>&&
* db::UpdateFlags

Возвращает:
* bool

# ::stappler::xenolith::storage::Server::get(stappler::xenolith::storage::Server::Scheme const&,stappler::xenolith::storage::Server::DataCallback&&,stappler::StringView,InitList<const db::Field *>&&,db::UpdateFlags) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::storage::Server::Scheme const&
* stappler::xenolith::storage::Server::DataCallback&&
* stappler::StringView
* InitList<const db::Field *>&&
* db::UpdateFlags

Возвращает:
* bool

# ::stappler::xenolith::storage::Server::get(stappler::xenolith::storage::Server::Scheme const&,stappler::xenolith::storage::Server::DataCallback&&,stappler::mem_std::Value const&,InitList<const db::Field *>&&,db::UpdateFlags) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::storage::Server::Scheme const&
* stappler::xenolith::storage::Server::DataCallback&&
* stappler::mem_std::Value const&
* InitList<const db::Field *>&&
* db::UpdateFlags

Возвращает:
* bool

# ::stappler::xenolith::storage::Server::select(stappler::xenolith::storage::Server::Scheme const&,stappler::xenolith::storage::Server::DataCallback&&,stappler::xenolith::storage::Server::QueryCallback&&,db::UpdateFlags) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::storage::Server::Scheme const&
* stappler::xenolith::storage::Server::DataCallback&&
* stappler::xenolith::storage::Server::QueryCallback&&
* db::UpdateFlags

Возвращает:
* bool

# ::stappler::xenolith::storage::Server::create(stappler::xenolith::storage::Server::Scheme const&,stappler::mem_std::Value&&,stappler::xenolith::storage::Server::DataCallback&&,db::UpdateFlags) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::storage::Server::Scheme const&
* stappler::mem_std::Value&&
* stappler::xenolith::storage::Server::DataCallback&&
* db::UpdateFlags

Возвращает:
* bool

# ::stappler::xenolith::storage::Server::create(stappler::xenolith::storage::Server::Scheme const&,stappler::mem_std::Value&&,stappler::xenolith::storage::Server::DataCallback&&,db::Conflict::Flags) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::storage::Server::Scheme const&
* stappler::mem_std::Value&&
* stappler::xenolith::storage::Server::DataCallback&&
* db::Conflict::Flags

Возвращает:
* bool

# ::stappler::xenolith::storage::Server::create(stappler::xenolith::storage::Server::Scheme const&,stappler::mem_std::Value&&,stappler::xenolith::storage::Server::DataCallback&&,db::UpdateFlags,db::Conflict::Flags) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::storage::Server::Scheme const&
* stappler::mem_std::Value&&
* stappler::xenolith::storage::Server::DataCallback&&
* db::UpdateFlags
* db::Conflict::Flags

Возвращает:
* bool

# ::stappler::xenolith::storage::Server::update(stappler::xenolith::storage::Server::Scheme const&,uint64_t,stappler::mem_std::Value&&,stappler::xenolith::storage::Server::DataCallback&&,db::UpdateFlags) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::storage::Server::Scheme const&
* uint64_t
* stappler::mem_std::Value&&
* stappler::xenolith::storage::Server::DataCallback&&
* db::UpdateFlags

Возвращает:
* bool

# ::stappler::xenolith::storage::Server::update(stappler::xenolith::storage::Server::Scheme const&,stappler::mem_std::Value const&,stappler::mem_std::Value&&,stappler::xenolith::storage::Server::DataCallback&&,db::UpdateFlags) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::storage::Server::Scheme const&
* stappler::mem_std::Value const&
* stappler::mem_std::Value&&
* stappler::xenolith::storage::Server::DataCallback&&
* db::UpdateFlags

Возвращает:
* bool

# ::stappler::xenolith::storage::Server::remove(stappler::xenolith::storage::Server::Scheme const&,uint64_t,Function<void (bool)>&&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::storage::Server::Scheme const&
* uint64_t
* Function<void (bool)>&&

Возвращает:
* bool

# ::stappler::xenolith::storage::Server::remove(stappler::xenolith::storage::Server::Scheme const&,stappler::mem_std::Value const&,Function<void (bool)>&&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::storage::Server::Scheme const&
* stappler::mem_std::Value const&
* Function<void (bool)>&&

Возвращает:
* bool

# ::stappler::xenolith::storage::Server::count(stappler::xenolith::storage::Server::Scheme const&,Function<void (size_t)>&&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::storage::Server::Scheme const&
* Function<void (size_t)>&&

Возвращает:
* bool

# ::stappler::xenolith::storage::Server::count(stappler::xenolith::storage::Server::Scheme const&,Function<void (size_t)>&&,stappler::xenolith::storage::Server::QueryCallback&&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::storage::Server::Scheme const&
* Function<void (size_t)>&&
* stappler::xenolith::storage::Server::QueryCallback&&

Возвращает:
* bool

# ::stappler::xenolith::storage::Server::touch(stappler::xenolith::storage::Server::Scheme const&,uint64_t) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::storage::Server::Scheme const&
* uint64_t

Возвращает:
* bool

# ::stappler::xenolith::storage::Server::touch(stappler::xenolith::storage::Server::Scheme const&,stappler::mem_std::Value const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::storage::Server::Scheme const&
* stappler::mem_std::Value const&

Возвращает:
* bool

# ::stappler::xenolith::storage::Server::perform(Function<bool (const stappler::xenolith::storage::Server &, const db::Transaction &)>&&,stappler::mem_std::Ref*) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Function<bool (const stappler::xenolith::storage::Server &, const db::Transaction &)>&&
* stappler::mem_std::Ref*

Возвращает:
* bool

# ::stappler::xenolith::storage::Server::getApplication() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::Application*

# ::stappler::xenolith::storage::Server::get(stappler::xenolith::storage::Server::Scheme const&,stappler::xenolith::storage::Server::DataCallback&&,uint64_t,Vector<const db::Field *>&&,db::UpdateFlags) const

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::storage::Server::Scheme const&
* stappler::xenolith::storage::Server::DataCallback&&
* uint64_t
* Vector<const db::Field *>&&
* db::UpdateFlags

Возвращает:
* bool

# ::stappler::xenolith::storage::Server::get(stappler::xenolith::storage::Server::Scheme const&,stappler::xenolith::storage::Server::DataCallback&&,stappler::StringView,Vector<const db::Field *>&&,db::UpdateFlags) const

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::storage::Server::Scheme const&
* stappler::xenolith::storage::Server::DataCallback&&
* stappler::StringView
* Vector<const db::Field *>&&
* db::UpdateFlags

Возвращает:
* bool

# ::stappler::xenolith::storage::Server::_data

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::storage::Server::ServerData*


# ::stappler::xenolith::storage::StorageRoot

## BRIEF

## CONTENT

Базовые классы:
* db::StorageRoot


# ::stappler::xenolith::storage::StorageRoot::onBroadcast

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::xenolith::EventHeader


# ::stappler::xenolith::storage::StorageRoot::scheduleAyncDbTask(db::Callback<db::Function<void (const db::Transaction &)> (db::pool_t *)> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* db::Callback<db::Function<void (const db::Transaction &)> (db::pool_t *)> const&


# ::stappler::xenolith::storage::StorageRoot::getDocuemntRoot() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* db::String

# ::stappler::xenolith::storage::StorageRoot::getFileScheme() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* db::Scheme const*

# ::stappler::xenolith::storage::StorageRoot::getUserScheme() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* db::Scheme const*

# ::stappler::xenolith::storage::StorageRoot::onLocalBroadcast(db::Value const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* db::Value const&


# ::stappler::xenolith::storage::StorageRoot::onStorageTransaction(db::Transaction&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* db::Transaction&
