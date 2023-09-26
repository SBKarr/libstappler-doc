Title: XLCoreInstance.h


# XENOLITH_CORE_XLCOREINSTANCE_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::core::DeviceProperties

## BRIEF

## CONTENT


# ::stappler::xenolith::core::DeviceProperties::deviceName

## BRIEF

## CONTENT

Тип: stappler::mem_std::String


# ::stappler::xenolith::core::DeviceProperties::apiVersion

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::xenolith::core::DeviceProperties::driverVersion

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::xenolith::core::DeviceProperties::supportsPresentation

## BRIEF

## CONTENT

Тип: bool


# ::stappler::xenolith::core::Instance

## BRIEF

## CONTENT

Базовые классы:
* Ref


# ::stappler::xenolith::core::Instance::TerminateCallback

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::Instance::DefaultDevice

## BRIEF

## CONTENT

Доступ: public

Тип: uint32_t const


# ::stappler::xenolith::core::Instance::Instance(stappler::xenolith::core::Instance::TerminateCallback&&,Rc<stappler::mem_std::Ref>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::Instance::TerminateCallback&&
* Rc<stappler::mem_std::Ref>&&


# ::stappler::xenolith::core::Instance::~Instance()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::core::Instance::getAvailableDevices() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Vector<stappler::xenolith::core::DeviceProperties> const&

# ::stappler::xenolith::core::Instance::makeLoop(stappler::xenolith::core::LoopInfo&&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::LoopInfo&&

Возвращает:
* Rc<stappler::xenolith::core::Loop>

# ::stappler::xenolith::core::Instance::getUserdata() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::mem_std::Ref*

# ::stappler::xenolith::core::Instance::makeView(stappler::xenolith::Application&,stappler::xenolith::core::Device const&,stappler::xenolith::ViewInfo&&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Application&
* stappler::xenolith::core::Device const&
* stappler::xenolith::ViewInfo&&

Возвращает:
* Rc<stappler::xenolith::View>

# ::stappler::xenolith::core::Instance::_terminate

## BRIEF

## CONTENT

Доступ: protected

Тип: TerminateCallback


# ::stappler::xenolith::core::Instance::_userdata

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::mem_std::Ref>


# ::stappler::xenolith::core::Instance::_availableDevices

## BRIEF

## CONTENT

Доступ: protected

Тип: Vector<stappler::xenolith::core::DeviceProperties>
