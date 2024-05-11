Title: XLCoreInstance.h


# XENOLITH_CORE_XLCOREINSTANCE_H_

## BRIEF

Заголовок базового интерфейса графического API

## CONTENT

Заголовок базового интерфейса графического API


# ::stappler::xenolith::core::DeviceProperties

## BRIEF

Базовые свойства графического устройства

## CONTENT

Базовые свойства графического устройства


# ::stappler::xenolith::core::DeviceProperties::deviceName

## BRIEF

Имя устройства

## CONTENT

Имя устройства

Тип: stappler::mem_std::String


# ::stappler::xenolith::core::DeviceProperties::apiVersion

## BRIEF

Версия API

## CONTENT

Версия API

Тип: uint32_t


# ::stappler::xenolith::core::DeviceProperties::driverVersion

## BRIEF

Версия драйвера

## CONTENT

Версия драйвера

Тип: uint32_t


# ::stappler::xenolith::core::DeviceProperties::supportsPresentation

## BRIEF

Флаг поддержки презентации на экран

## CONTENT

Флаг поддержки презентации на экран

Тип: bool


# ::stappler::xenolith::core::Instance

## BRIEF

Базовый тип графического API

## CONTENT

Базовый тип графического API

Базовые классы:
* Ref


# ::stappler::xenolith::core::Instance::TerminateCallback

## BRIEF

Функция завершения работы

## CONTENT

Доступ: public

Функция завершения работы


# ::stappler::xenolith::core::Instance::DefaultDevice

## BRIEF

Индекс устройства по умолчанию

## CONTENT

Доступ: public

Индекс устройства по умолчанию

Тип: uint32_t const


# ::stappler::xenolith::core::Instance::Instance(stappler::Dso&&,stappler::xenolith::core::Instance::TerminateCallback&&,Rc<stappler::mem_std::Ref>&&)

## BRIEF

Конструктор

## CONTENT

Доступ: public

Конструктор

Параметры:
* stappler::Dso&& - библиотека API
* stappler::xenolith::core::Instance::TerminateCallback&& - функция завершения
* Rc<stappler::mem_std::Ref>&& - пользовательские данные


# ::stappler::xenolith::core::Instance::~Instance()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор


# ::stappler::xenolith::core::Instance::getAvailableDevices() const

## BRIEF

Возвращает список доступных устройств

## CONTENT

Доступ: public

Возвращает список доступных устройств

Возвращает:
* Vector<stappler::xenolith::core::DeviceProperties> const&

# ::stappler::xenolith::core::Instance::makeLoop(stappler::xenolith::core::LoopInfo&&) const

## BRIEF

Создаёт графический цикл для API

## CONTENT

Доступ: public

Создаёт графический цикл для API

Параметры:
* stappler::xenolith::core::LoopInfo&&

Возвращает:
* Rc<stappler::xenolith::core::Loop>

# ::stappler::xenolith::core::Instance::getUserdata() const

## BRIEF

Возвращает пользовательские данные

## CONTENT

Доступ: public

Возвращает пользовательские данные

Возвращает:
* stappler::mem_std::Ref*

# ::stappler::xenolith::core::Instance::makeFontQueue(stappler::StringView) const

## BRIEF

Создаёт очередь для поддержки шрифтов

## CONTENT

Доступ: public

Создаёт очередь для поддержки шрифтов

Параметры:
* stappler::StringView - имя очереди

Возвращает:
* Rc<core::Queue>

# ::stappler::xenolith::core::Instance::makeView(stappler::xenolith::Application&,stappler::xenolith::core::Device const&,stappler::xenolith::ViewInfo&&) const

## BRIEF

Создаёт виртуальное окно ОС

## CONTENT

Доступ: public

Создаёт виртуальное окно ОС

Параметры:
* stappler::xenolith::Application&
* stappler::xenolith::core::Device const&
* stappler::xenolith::ViewInfo&&

Возвращает:
* Rc<stappler::xenolith::View>

# ::stappler::xenolith::core::Instance::_dsoModule

## BRIEF

Динамическая библиотека API

## CONTENT

Доступ: protected

Динамическая библиотека API

Тип: stappler::Dso


# ::stappler::xenolith::core::Instance::_terminate

## BRIEF

Функция завершения

## CONTENT

Доступ: protected

Функция завершения

Тип: TerminateCallback


# ::stappler::xenolith::core::Instance::_userdata

## BRIEF

Пользовательские данные

## CONTENT

Доступ: protected

Пользовательские данные

Тип: Rc<stappler::mem_std::Ref>


# ::stappler::xenolith::core::Instance::_availableDevices

## BRIEF

Доступные устройства

## CONTENT

Доступ: protected

Доступные устройства

Тип: Vector<stappler::xenolith::core::DeviceProperties>
