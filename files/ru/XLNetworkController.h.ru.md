Title: XLNetworkController.h


# XENOLITH_RESOURCES_NETWORK_XLNETWORKCONTROLLER_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::network::Controller

## BRIEF

## CONTENT

Базовые классы:
* ApplicationExtension


# ::stappler::xenolith::network::Controller::onNetworkCapabilities

## BRIEF

## CONTENT

Доступ: public

Тип: stappler::xenolith::EventHeader


# ::stappler::xenolith::network::Controller::Controller(stappler::xenolith::Application*,stappler::StringView,stappler::mem_std::Bytes&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Application*
* stappler::StringView
* stappler::mem_std::Bytes&&


# ::stappler::xenolith::network::Controller::~Controller()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::network::Controller::initialize(stappler::xenolith::Application*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Application*


# ::stappler::xenolith::network::Controller::invalidate(stappler::xenolith::Application*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Application*


# ::stappler::xenolith::network::Controller::update(stappler::xenolith::Application*,stappler::xenolith::UpdateTime const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Application*
* stappler::xenolith::UpdateTime const&


# ::stappler::xenolith::network::Controller::getApplication() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::Application*

# ::stappler::xenolith::network::Controller::getName() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::StringView

# ::stappler::xenolith::network::Controller::run(Rc<stappler::xenolith::network::Request>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Rc<stappler::xenolith::network::Request>&&


# ::stappler::xenolith::network::Controller::setSignKey(stappler::mem_std::Bytes&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::mem_std::Bytes&&


# ::stappler::xenolith::network::Controller::isNetworkOnline() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::network::Controller::getNetworkCapabilities() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::network::NetworkCapabilities

# ::stappler::xenolith::network::Controller::_data

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::network::Controller::Data*
