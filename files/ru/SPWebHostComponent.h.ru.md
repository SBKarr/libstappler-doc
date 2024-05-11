Title: SPWebHostComponent.h


# EXTRA_WEBSERVER_WEBSERVER_SERVER_SPWEBHOSTCOMPONENT_H_

## BRIEF

Заголовок загружаемого компонента вебсервера

## CONTENT

Заголовок загружаемого компонента вебсервера


# ::stappler::web::HostComponent

## BRIEF

Загружаемый компонент вебсервера

## CONTENT

Загружаемый компонент вебсервера

Базовые классы:
* AllocBase


# ::stappler::web::HostComponent::Symbol

## BRIEF

Сигнатура символа для загрузки

## CONTENT

Доступ: public

Сигнатура символа для загрузки


# ::stappler::web::HostComponent::Scheme

## BRIEF

Схема данных в БД

## CONTENT

Доступ: public

Схема данных в БД

# ::stappler::web::HostComponent::CommandCallback

## BRIEF

Функция для вызова консольной команды

## CONTENT

Доступ: public

Функция для вызова консольной команды


# ::stappler::web::HostComponent::Loader

## BRIEF

Загрузчик компонента

## CONTENT

Доступ: public

Загрузчик компонента. Используется при статической линковке


# ::stappler::web::HostComponent::Loader::name

## BRIEF

Имя функции загрузки

## CONTENT

Имя функции загрузки

Тип: stappler::StringView


# ::stappler::web::HostComponent::Loader::loader

## BRIEF

Указатель на функцию для загрузки компонента

## CONTENT

Указатель на функцию для загрузки компонента

Тип: stappler::web::HostComponent::Symbol


# ::stappler::web::HostComponent::Loader::Loader(stappler::StringView const&,stappler::web::HostComponent::Symbol)

## BRIEF

Конструктор

## CONTENT

Конструктор

Параметры:
* stappler::StringView const& - имя функции загрузки
* stappler::web::HostComponent::Symbol - функция для загрузки компонента


# ::stappler::web::HostComponent::Command

## BRIEF

Структура консольной команды

## CONTENT

Доступ: public

Структура консольной команды


# ::stappler::web::HostComponent::Command::name

## BRIEF

Имя команды

## CONTENT

Имя команды

Тип: stappler::mem_pool::String


# ::stappler::web::HostComponent::Command::desc

## BRIEF

Описание команды

## CONTENT

Описание команды

Тип: stappler::mem_pool::String


# ::stappler::web::HostComponent::Command::help

## BRIEF

Текст помощи о команде

## CONTENT

Текст помощи о команде

Тип: stappler::mem_pool::String


# ::stappler::web::HostComponent::Command::callback

## BRIEF

Функция для работы команды

## CONTENT

Функция для работы команды

Тип: stappler::web::HostComponent::CommandCallback


# ::stappler::web::HostComponent::HostComponent(stappler::web::Host const&,stappler::web::HostComponentInfo const&)

## BRIEF

Конструктор компонента

## CONTENT

Доступ: public

Конструктор компонента

Параметры:
* stappler::web::Host const& - хост
* stappler::web::HostComponentInfo const& - информация о компоненте


# ::stappler::web::HostComponent::~HostComponent()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор


# ::stappler::web::HostComponent::handleChildInit(stappler::web::Host const&)

## BRIEF

Обрабатывает событие инициализации компонентов вебсервера

## CONTENT

Доступ: public

Обрабатывает событие инициализации компонентов вебсервера

Параметры:
* stappler::web::Host const&


# ::stappler::web::HostComponent::handleStorageInit(stappler::web::Host const&,db::Adapter const&)

## BRIEF

Обрабатыает событие инициализации БД

## CONTENT

Доступ: public

Обрабатыает событие инициализации БД

Параметры:
* stappler::web::Host const&
* db::Adapter const&


# ::stappler::web::HostComponent::initTransaction(db::Transaction&)

## BRIEF

Инициализирует транзакцию БД

## CONTENT

Доступ: public

Инициализирует транзакцию БД

Параметры:
* db::Transaction&


# ::stappler::web::HostComponent::handleHeartbeat(stappler::web::Host const&)

## BRIEF

Обрабатывает событие системного таймера

## CONTENT

Доступ: public

Обрабатывает событие системного таймера

Параметры:
* stappler::web::Host const&


# ::stappler::web::HostComponent::getConfig() const

## BRIEF

Возвращает данные конфигурации

## CONTENT

Доступ: public

Возвращает данные конфигурации

Возвращает:
* stappler::mem_pool::Value const&

# ::stappler::web::HostComponent::getName() const

## BRIEF

Возвращает имя компонента

## CONTENT

Доступ: public

Возвращает имя компонента

Возвращает:
* stappler::StringView

# ::stappler::web::HostComponent::getVersion() const

## BRIEF

Возвращает версию компонента

## CONTENT

Доступ: public

Возвращает версию компонента

Возвращает:
* stappler::StringView

# ::stappler::web::HostComponent::exportScheme(db::Scheme const&)

## BRIEF

Экспортирует схему данных на сервер

## CONTENT

Доступ: public

Экспортирует схему данных на сервер

Параметры:
* db::Scheme const&

Возвращает:
* db::Scheme const*

# ::stappler::web::HostComponent::addCommand(stappler::StringView const&,Function<stappler::mem_pool::Value (const stappler::StringView &)>&&,stappler::StringView const&,stappler::StringView const&)

## BRIEF

Добавляет консольную команду

## CONTENT

Доступ: public

Добавляет консольную команду. Функция должна вернуть данные для вывода в консоль.

Параметры:
* stappler::StringView const& - имя команды
* Function<stappler::mem_pool::Value (const stappler::StringView &)>&& - функция команды
* stappler::StringView const& - описание команды
* stappler::StringView const& - помощь по команде


# ::stappler::web::HostComponent::addOutputCommand(stappler::StringView const&,stappler::web::HostComponent::CommandCallback&&,stappler::StringView const&,stappler::StringView const&)

## BRIEF

Добавляет консольную команду

## CONTENT

Доступ: public

Добавляет консольную команду. Функция вызывает переданную функцию для вывода в консоль и возвращает true при успешном завершении. Возврат false завершает сеанс консоли.

Параметры:
* stappler::StringView const& - имя команды
* stappler::web::HostComponent::CommandCallback&& - функция команды
* stappler::StringView const& - описание команды
* stappler::StringView const& - помощь по команде


# ::stappler::web::HostComponent::getCommand(stappler::StringView const&) const

## BRIEF

Возвращает команду по имени

## CONTENT

Доступ: public

Возвращает команду по имени

Параметры:
* stappler::StringView const&

Возвращает:
* stappler::web::HostComponent::Command const*

# ::stappler::web::HostComponent::getCommands() const

## BRIEF

Возвращает консольные команды

## CONTENT

Доступ: public

Возвращает консольные команды

Возвращает:
* Map<stappler::mem_pool::String, stappler::web::HostComponent::Command> const&

# ::stappler::web::HostComponent::exportValues<typename>(Value&&)

## BRIEF

Экспортирует объект компонента в вебсервер

## CONTENT

Доступ: public

Экспортирует объект компонента в вебсервер

Параметры шаблона:
* typename Value

Параметры:
* Value&&


# ::stappler::web::HostComponent::exportValues<typename,typename>(Value&&,Args &&...)

## BRIEF

Экспортирует объекты компонента в вебсервер

## CONTENT

Доступ: public

Экспортирует объекты компонента в вебсервер

Параметры шаблона:
* typename Value
* typename Args

Параметры:
* Value&&
* Args &&...


# ::stappler::web::HostComponent::getHost() const

## BRIEF

Возвращает хост

## CONTENT

Доступ: public

Возвращает хост

Возвращает:
* stappler::web::Host

# ::stappler::web::HostComponent::_commands

## BRIEF

Консольные команды

## CONTENT

Доступ: protected

Консольные команды

Тип: Map<stappler::mem_pool::String, stappler::web::HostComponent::Command>


# ::stappler::web::HostComponent::_host

## BRIEF

Хост

## CONTENT

Доступ: protected

Хост

Тип: stappler::web::Host


# ::stappler::web::HostComponent::_name

## BRIEF

Имя компонента

## CONTENT

Доступ: protected

Имя компонента

Тип: stappler::mem_pool::String


# ::stappler::web::HostComponent::_version

## BRIEF

Версия компонента

## CONTENT

Доступ: protected

Версия компонента

Тип: stappler::mem_pool::String


# ::stappler::web::HostComponent::_config

## BRIEF

Данные конфигурации компонента

## CONTENT

Доступ: protected

Данные конфигурации компонента

Тип: stappler::mem_pool::Value
