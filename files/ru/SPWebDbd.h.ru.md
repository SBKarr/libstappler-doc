Title: SPWebDbd.h


# EXTRA_WEBSERVER_WEBSERVER_DBD_SPWEBDBD_H_

## BRIEF

Заголовок интерфейса упраления соединениями к БД

## CONTENT

Заголовок интерфейса упраления соединениями к БД


# ::stappler::web::DbdModule

## BRIEF

Модуль управления соединениями к БД

## CONTENT

Модуль управления соединениями к БД

Базовые классы:
* AllocBase


# ::stappler::web::DbdModule::Config

## BRIEF

Конфигурация модуля

## CONTENT

Доступ: public

Конфигурация модуля

# ::stappler::web::DbdModule::Config::nmin

## BRIEF

Минимальное число пддерживаемых открытых соединений

## CONTENT

Минимальное число пддерживаемых открытых соединений. Меньше этого числа сервер не будет пытаться закрыть соединения.

Тип: uint32_t

# ::stappler::web::DbdModule::Config::nkeep

## BRIEF

Число поддерживаемых соединений

## CONTENT

Число поддерживаемых соединений

Тип: uint32_t


# ::stappler::web::DbdModule::Config::nmax

## BRIEF

Максимальное число поддерживаемых соединений

## CONTENT

Максимальное число поддерживаемых соединений

Тип: uint32_t


# ::stappler::web::DbdModule::Config::exptime

## BRIEF

Время жизни соединения

## CONTENT

Время жизни соединения

Тип: stappler::TimeInterval


# ::stappler::web::DbdModule::Config::persistent

## BRIEF

Не закрывать соединения по возмоности

## CONTENT

Не закрывать соединения по возмоности

Тип: bool


# ::stappler::web::DbdModule::create(stappler::mempool::base::pool_t*,stappler::web::Root*,Map<stappler::StringView, stappler::StringView>&&)

## BRIEF

Создаёт новый модуль

## CONTENT

Доступ: public

Создаёт новый модуль

Параметры:
* stappler::mempool::base::pool_t* - исходный пул памяти
* stappler::web::Root* - корневой объект сервера
* Map<stappler::StringView, stappler::StringView>&& - параметры соединения

Возвращает:
* stappler::web::DbdModule*

# ::stappler::web::DbdModule::destroy(stappler::web::DbdModule*)

## BRIEF

Уничтожает модуль соединений с БД

## CONTENT

Доступ: public

Уничтожает модуль соединений с БД

Параметры:
* stappler::web::DbdModule*


# ::stappler::web::DbdModule::openConnection(stappler::mempool::base::pool_t*)

## BRIEF

Открывает новое соединение к БД

## CONTENT

Доступ: public

Открывает новое соединение к БД

Параметры:
* stappler::mempool::base::pool_t* - пул памяти соединения

Возвращает:
* db::sql::Driver::Handle

# ::stappler::web::DbdModule::closeConnection(db::sql::Driver::Handle)

## BRIEF

Закрывает соединение с БД

## CONTENT

Доступ: public

Закрывает соединение с БД

Параметры:
* db::sql::Driver::Handle


# ::stappler::web::DbdModule::close()

## BRIEF

Закрывает все соединения модуля

## CONTENT

Доступ: public

Закрывает все соединения модуля


# ::stappler::web::DbdModule::getPool() const

## BRIEF

Возвращает пул модуля

## CONTENT

Доступ: public

Возвращает пул модуля

Возвращает:
* stappler::mempool::base::pool_t*

# ::stappler::web::DbdModule::isDestroyed() const

## BRIEF

Проверяет, закрыты ли все соединения

## CONTENT

Доступ: public

Проверяет, закрыты ли все соединения

Возвращает:
* bool

# ::stappler::web::DbdModule::getDriver() const

## BRIEF

Возвращает драйвер БД

## CONTENT

Доступ: public

Возвращает драйвер БД

Возвращает:
* db::sql::Driver*

# ::stappler::web::DbdModule::DbdModule(stappler::mempool::base::pool_t*,db::sql::Driver*,stappler::web::DbdModule::Config,Map<stappler::StringView, stappler::StringView>&&)

## BRIEF

Конструктор

## CONTENT

Доступ: protected

Конструктор

Параметры:
* stappler::mempool::base::pool_t*
* db::sql::Driver*
* stappler::web::DbdModule::Config
* Map<stappler::StringView, stappler::StringView>&&


# ::stappler::web::DbdModule::_pool

## BRIEF

Пул памяти

## CONTENT

Доступ: protected

Пул памяти

Тип: stappler::mempool::base::pool_t*


# ::stappler::web::DbdModule::_reslist

## BRIEF

Список соединений

## CONTENT

Доступ: protected

Список соединений

Тип: stappler::web::DbConnList*


# ::stappler::web::DbdModule::_destroyed

## BRIEF

Флаг закрытия модуля

## CONTENT

Доступ: protected

Флаг закрытия модуля

Тип: bool
