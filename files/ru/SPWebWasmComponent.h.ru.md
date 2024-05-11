Title: SPWebWasmComponent.h


# EXTRA_WEBSERVER_WEBSERVER_SERVER_SPWEBWASMCOMPONENT_H_

## BRIEF

Заголовок компонента хоста, загружаемого из WabAssembly

## CONTENT

Заголовок компонента хоста, загружаемого из WabAssembly


# ::stappler::web::WasmComponent

## BRIEF

Компонент хоста WebAssembly

## CONTENT

Компонент хоста WebAssembly

Базовые классы:
* HostComponent


# ::stappler::web::WasmComponent::WasmData

## BRIEF

Данные интерфейса WebAssembly

## CONTENT

Доступ: public

Данные интерфейса WebAssembly


# ::stappler::web::WasmComponent::WasmData::childInitCallback

## BRIEF

Функция вызова инициализации объектов вебсервера

## CONTENT

Функция вызова инициализации объектов вебсервера

Тип: uint32_t


# ::stappler::web::WasmComponent::WasmData::storageInitCallback

## BRIEF

Функция вызова инициализации хранилища в БД

## CONTENT

Функция вызова инициализации хранилища в БД

Тип: uint32_t


# ::stappler::web::WasmComponent::WasmData::heartbeatCallback

## BRIEF

Функция вызова контрольного таймера

## CONTENT

Функция вызова контрольного таймера

Тип: uint32_t


# ::stappler::web::WasmComponent::WasmData::userdata

## BRIEF

Объект WebAssembly

## CONTENT

Объект WebAssembly

Тип: uint32_t


# ::stappler::web::WasmComponent::load(stappler::web::Host const&,stappler::web::HostComponentInfo const&,wasm::Module*)

## BRIEF

Загружает компонент из модуля

## CONTENT

Доступ: public

Загружает компонент из модуля

Параметры:
* stappler::web::Host const&
* stappler::web::HostComponentInfo const&
* wasm::Module*

Возвращает:
* stappler::web::WasmComponent*

# ::stappler::web::WasmComponent::WasmComponent(stappler::web::Host const&,stappler::web::HostComponentInfo const&,wasm::ExecEnv*,stappler::web::WasmComponent::WasmData&&)

## BRIEF

Конструктор

## CONTENT

Доступ: public

Конструктор

Параметры:
* stappler::web::Host const&
* stappler::web::HostComponentInfo const&
* wasm::ExecEnv*
* stappler::web::WasmComponent::WasmData&&


# ::stappler::web::WasmComponent::handleChildInit(stappler::web::Host const&)

## BRIEF

Обрабатывает событие вебсервера

## CONTENT

Доступ: public

Обрабатывает событие вебсервера

Параметры:
* stappler::web::Host const&


# ::stappler::web::WasmComponent::handleStorageInit(stappler::web::Host const&,db::Adapter const&)

## BRIEF

Обрабатывает событие вебсервера

## CONTENT

Доступ: public

Обрабатывает событие вебсервера

Параметры:
* stappler::web::Host const&
* db::Adapter const&


# ::stappler::web::WasmComponent::initTransaction(db::Transaction&)

## BRIEF

Инициализирует транзакцию БД

## CONTENT

Доступ: public

Инициализирует транзакцию БД

Параметры:
* db::Transaction&


# ::stappler::web::WasmComponent::handleHeartbeat(stappler::web::Host const&)

## BRIEF

Обрабатывает событие вебсервера

## CONTENT

Доступ: public

Обрабатывает событие вебсервера

Параметры:
* stappler::web::Host const&


# ::stappler::web::WasmComponent::_env

## BRIEF

Окружение для исполнения кода Wasm

## CONTENT

Доступ: protected

Окружение для исполнения кода Wasm

Тип: Rc<wasm::ExecEnv>


# ::stappler::web::WasmComponent::_wasmData

## BRIEF

Данные для вызова Wasm

## CONTENT

Доступ: protected

Данные для вызова Wasm

Тип: stappler::web::WasmComponent::WasmData


# ::stappler::web::WasmComponent::_mutex

## BRIEF

Мутекс

## CONTENT

Доступ: protected

Мутекс

Тип: stappler::mem_pool::Mutex
