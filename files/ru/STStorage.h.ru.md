Title: STStorage.h


# MODULES_DB_STSTORAGE_H_

## BRIEF

## CONTENT


# ::stappler::db::internals::RequestData

## BRIEF

## CONTENT


# ::stappler::db::internals::RequestData::exists

## BRIEF

## CONTENT

Тип: bool


# ::stappler::db::internals::RequestData::address

## BRIEF

## CONTENT

Тип: stappler::StringView


# ::stappler::db::internals::RequestData::hostname

## BRIEF

## CONTENT

Тип: stappler::StringView


# ::stappler::db::internals::RequestData::uri

## BRIEF

## CONTENT

Тип: stappler::StringView


# ::stappler::db::internals::RequestData::operator bool()

## BRIEF

## CONTENT

Возвращает:
* bool

# ::stappler::db::internals::getAdapterFromContext()

## BRIEF

## CONTENT

Возвращает:
* stappler::db::Adapter

# ::stappler::db::internals::scheduleAyncDbTask(Callback<Function<void (const stappler::db::Transaction &)> (memory::pool_t *)> const&)

## BRIEF

## CONTENT

Параметры:
* Callback<Function<void (const stappler::db::Transaction &)> (memory::pool_t *)> const&


# ::stappler::db::internals::isAdministrative()

## BRIEF

## CONTENT

Возвращает:
* bool

# ::stappler::db::internals::getDocuemntRoot()

## BRIEF

## CONTENT

Возвращает:
* stappler::mem_pool::String

# ::stappler::db::internals::getFileScheme()

## BRIEF

## CONTENT

Возвращает:
* stappler::db::Scheme const*

# ::stappler::db::internals::getUserScheme()

## BRIEF

## CONTENT

Возвращает:
* stappler::db::Scheme const*

# ::stappler::db::internals::getFileFromContext(int64_t)

## BRIEF

## CONTENT

Параметры:
* int64_t

Возвращает:
* stappler::db::InputFile*

# ::stappler::db::internals::getRequestData()

## BRIEF

## CONTENT

Возвращает:
* stappler::db::internals::RequestData

# ::stappler::db::internals::getUserIdFromContext()

## BRIEF

## CONTENT

Возвращает:
* int64_t

# ::stappler::db::messages::isDebugEnabled()

## BRIEF

## CONTENT

Возвращает:
* bool

# ::stappler::db::messages::setDebugEnabled(bool)

## BRIEF

## CONTENT

Параметры:
* bool


# ::stappler::db::messages::_addErrorMessage(stappler::mem_pool::Value&&)

## BRIEF

## CONTENT

Параметры:
* stappler::mem_pool::Value&&


# ::stappler::db::messages::_addDebugMessage(stappler::mem_pool::Value&&)

## BRIEF

## CONTENT

Параметры:
* stappler::mem_pool::Value&&


# ::stappler::db::messages::broadcast(stappler::mem_pool::Value const&)

## BRIEF

## CONTENT

Параметры:
* stappler::mem_pool::Value const&


# ::stappler::db::messages::broadcast(stappler::mem_pool::Bytes const&)

## BRIEF

## CONTENT

Параметры:
* stappler::mem_pool::Bytes const&


# ::stappler::db::messages::_addError<typename,typename>(Source&&,Text&&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Source
* typename Text

Параметры:
* Source&&
* Text&&


# ::stappler::db::messages::_addError<typename,typename>(Source&&,Text&&,stappler::mem_pool::Value&&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Source
* typename Text

Параметры:
* Source&&
* Text&&
* stappler::mem_pool::Value&&


# ::stappler::db::messages::_addDebug<typename,typename>(Source&&,Text&&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Source
* typename Text

Параметры:
* Source&&
* Text&&


# ::stappler::db::messages::_addDebug<typename,typename>(Source&&,Text&&,stappler::mem_pool::Value&&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Source
* typename Text

Параметры:
* Source&&
* Text&&
* stappler::mem_pool::Value&&


# ::stappler::db::messages::_addLocal<typename,typename>(Source&&,Text&&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Source
* typename Text

Параметры:
* Source&&
* Text&&


# ::stappler::db::messages::_addLocal<typename,typename>(Source&&,Text&&,stappler::mem_pool::Value&&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Source
* typename Text

Параметры:
* Source&&
* Text&&
* stappler::mem_pool::Value&&


# ::stappler::db::messages::error<typename>(Args &&...)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Args

Параметры:
* Args &&...


# ::stappler::db::messages::debug<typename>(Args &&...)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Args

Параметры:
* Args &&...


# ::stappler::db::messages::local<typename>(Args &&...)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Args

Параметры:
* Args &&...


# ::stappler::db::StorageRoot

## BRIEF

## CONTENT


# ::stappler::db::StorageRoot::~StorageRoot()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::db::StorageRoot::isDebugEnabled() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::db::StorageRoot::setDebugEnabled(bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* bool


# ::stappler::db::StorageRoot::addErrorMessage(stappler::mem_pool::Value&&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::mem_pool::Value&&


# ::stappler::db::StorageRoot::addDebugMessage(stappler::mem_pool::Value&&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::mem_pool::Value&&


# ::stappler::db::StorageRoot::broadcast(stappler::mem_pool::Value const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::mem_pool::Value const&


# ::stappler::db::StorageRoot::broadcast(stappler::mem_pool::Bytes const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::mem_pool::Bytes const&


# ::stappler::db::StorageRoot::acquireTransaction(stappler::db::Adapter const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::db::Adapter const&

Возвращает:
* stappler::db::Transaction

# ::stappler::db::StorageRoot::getAdapterFromContext()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::db::Adapter

# ::stappler::db::StorageRoot::scheduleAyncDbTask(Callback<Function<void (const stappler::db::Transaction &)> (stappler::mempool::base::pool_t *)> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Callback<Function<void (const stappler::db::Transaction &)> (stappler::mempool::base::pool_t *)> const&


# ::stappler::db::StorageRoot::isAdministrative() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::db::StorageRoot::getDocuemntRoot() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::mem_pool::String

# ::stappler::db::StorageRoot::getFileScheme() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::db::Scheme const*

# ::stappler::db::StorageRoot::getUserScheme() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::db::Scheme const*

# ::stappler::db::StorageRoot::getFileFromContext(int64_t) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* int64_t

Возвращает:
* stappler::db::InputFile*

# ::stappler::db::StorageRoot::getRequestData() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* internals::RequestData

# ::stappler::db::StorageRoot::getUserIdFromContext() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* int64_t

# ::stappler::db::StorageRoot::onLocalBroadcast(stappler::mem_pool::Value const&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::mem_pool::Value const&


# ::stappler::db::StorageRoot::onStorageTransaction(stappler::db::Transaction&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::db::Transaction&


# ::stappler::db::StorageRoot::_debugMutex

## BRIEF

## CONTENT

Доступ: protected

Тип: std::mutex


# ::stappler::db::StorageRoot::_debug

## BRIEF

## CONTENT

Доступ: protected

Тип: std::atomic<bool>


# ::stappler::db::InputConfig

## BRIEF

## CONTENT


# ::stappler::db::InputConfig::Require

## BRIEF

## CONTENT

Значения:
* None
* Data
* Files
* Body
* FilesAsData


# ::stappler::db::InputConfig::InputConfig()

## BRIEF

## CONTENT


# ::stappler::db::InputConfig::InputConfig(stappler::db::InputConfig const&)

## BRIEF

## CONTENT

Параметры:
* stappler::db::InputConfig const&


# ::stappler::db::InputConfig::operator=(stappler::db::InputConfig const&)

## BRIEF

## CONTENT

Параметры:
* stappler::db::InputConfig const&

Возвращает:
* stappler::db::InputConfig&

# ::stappler::db::InputConfig::InputConfig(stappler::db::InputConfig&&)

## BRIEF

## CONTENT

Параметры:
* stappler::db::InputConfig&&


# ::stappler::db::InputConfig::operator=(stappler::db::InputConfig&&)

## BRIEF

## CONTENT

Параметры:
* stappler::db::InputConfig&&

Возвращает:
* stappler::db::InputConfig&

# ::stappler::db::InputConfig::updateLimits(Map<stappler::mem_pool::String, stappler::db::Field> const&)

## BRIEF

## CONTENT

Параметры:
* Map<stappler::mem_pool::String, stappler::db::Field> const&


# ::stappler::db::InputConfig::required

## BRIEF

## CONTENT

Тип: stappler::db::InputConfig::Require


# ::stappler::db::InputConfig::maxRequestSize

## BRIEF

## CONTENT

Тип: size_t


# ::stappler::db::InputConfig::maxVarSize

## BRIEF

## CONTENT

Тип: size_t


# ::stappler::db::InputConfig::maxFileSize

## BRIEF

## CONTENT

Тип: size_t


# ::stappler::db::InputConfig::updateTime

## BRIEF

## CONTENT

Тип: stappler::TimeInterval


# ::stappler::db::InputConfig::updateFrequency

## BRIEF

## CONTENT

Тип: float


# ::stappler::db::operator|(InputConfig::Require const&,InputConfig::Require const&)

## BRIEF

## CONTENT

Параметры:
* InputConfig::Require const&
* InputConfig::Require const&

Возвращает:
* InputConfig::Require

# ::stappler::db::operator&(InputConfig::Require const&,InputConfig::Require const&)

## BRIEF

## CONTENT

Параметры:
* InputConfig::Require const&
* InputConfig::Require const&

Возвращает:
* InputConfig::Require

# ::stappler::db::operator^(InputConfig::Require const&,InputConfig::Require const&)

## BRIEF

## CONTENT

Параметры:
* InputConfig::Require const&
* InputConfig::Require const&

Возвращает:
* InputConfig::Require

# ::stappler::db::operator|=(InputConfig::Require&,InputConfig::Require const&)

## BRIEF

## CONTENT

Параметры:
* InputConfig::Require&
* InputConfig::Require const&

Возвращает:
* InputConfig::Require&

# ::stappler::db::operator&=(InputConfig::Require&,InputConfig::Require const&)

## BRIEF

## CONTENT

Параметры:
* InputConfig::Require&
* InputConfig::Require const&

Возвращает:
* InputConfig::Require&

# ::stappler::db::operator^=(InputConfig::Require&,InputConfig::Require const&)

## BRIEF

## CONTENT

Параметры:
* InputConfig::Require&
* InputConfig::Require const&

Возвращает:
* InputConfig::Require&

# ::stappler::db::operator==(InputConfig::Require const&,std::underlying_type<InputConfig::Require>::type const&)

## BRIEF

## CONTENT

Параметры:
* InputConfig::Require const&
* std::underlying_type<InputConfig::Require>::type const&

Возвращает:
* bool

# ::stappler::db::operator==(std::underlying_type<InputConfig::Require>::type const&,InputConfig::Require const&)

## BRIEF

## CONTENT

Параметры:
* std::underlying_type<InputConfig::Require>::type const&
* InputConfig::Require const&

Возвращает:
* bool

# ::stappler::db::operator!=(InputConfig::Require const&,std::underlying_type<InputConfig::Require>::type const&)

## BRIEF

## CONTENT

Параметры:
* InputConfig::Require const&
* std::underlying_type<InputConfig::Require>::type const&

Возвращает:
* bool

# ::stappler::db::operator!=(std::underlying_type<InputConfig::Require>::type const&,InputConfig::Require const&)

## BRIEF

## CONTENT

Параметры:
* std::underlying_type<InputConfig::Require>::type const&
* InputConfig::Require const&

Возвращает:
* bool

# ::stappler::db::operator~(InputConfig::Require const&)

## BRIEF

## CONTENT

Параметры:
* InputConfig::Require const&

Возвращает:
* InputConfig::Require