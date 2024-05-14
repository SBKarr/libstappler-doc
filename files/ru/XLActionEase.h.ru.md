Title: XLActionEase.h


# XENOLITH_SCENE_ACTIONS_XLACTIONEASE_H_

## BRIEF

Заголовок модификаторов кривой исполнения для действвий

## CONTENT

Заголовок модификаторов кривой исполнения для действвий


# ::stappler::xenolith::interpolation::Type

## BRIEF

Способ интерполяции

## CONTENT

Способ интерполяции

Значения:
* Linear
* EaseIn
* EaseOut
* EaseInOut
* Sine_EaseIn
* Sine_EaseOut
* Sine_EaseInOut
* Quad_EaseIn
* Quad_EaseOut
* Quad_EaseInOut
* Cubic_EaseIn
* Cubic_EaseOut
* Cubic_EaseInOut
* Quart_EaseIn
* Quart_EaseOut
* Quart_EaseInOut
* Quint_EaseIn
* Quint_EaseOut
* Quint_EaseInOut
* Expo_EaseIn
* Expo_EaseOut
* Expo_EaseInOut
* Circ_EaseIn
* Circ_EaseOut
* Circ_EaseInOut
* Elastic_EaseIn
* Elastic_EaseOut
* Elastic_EaseInOut
* Back_EaseIn
* Back_EaseOut
* Back_EaseInOut
* Bounce_EaseIn
* Bounce_EaseOut
* Bounce_EaseInOut
* Custom
* Max


# ::stappler::xenolith::interpolation::interpolateTo(float,stappler::xenolith::interpolation::Type,float*)

## BRIEF

Интерполирует время исполнения

## CONTENT

Интерполирует время исполнения

Параметры:
* float - значение для интерполяции
* stappler::xenolith::interpolation::Type - способ интерполяции
* float* - программа интерполяции (если тип её предполагает)

Возвращает:
* float

# ::stappler::xenolith::interpolation::linear(float)

## BRIEF

Интерполирует время исполнения

## CONTENT

Интерполирует время исполнения

Параметры:
* float

Возвращает:
* float

# ::stappler::xenolith::interpolation::easeIn(float,float)

## BRIEF

Интерполирует время исполнения

## CONTENT

Интерполирует время исполнения

Параметры:
* float
* float - параметр интерполяции

Возвращает:
* float

# ::stappler::xenolith::interpolation::easeOut(float,float)

## BRIEF

Интерполирует время исполнения

## CONTENT

Интерполирует время исполнения

Параметры:
* float
* float - параметр интерполяции

Возвращает:
* float

# ::stappler::xenolith::interpolation::easeInOut(float,float)

## BRIEF

Интерполирует время исполнения

## CONTENT

Интерполирует время исполнения

Параметры:
* float
* float - параметр интерполяции

Возвращает:
* float

# ::stappler::xenolith::interpolation::bezieratFunction(float,float,float,float,float)

## BRIEF

Интерполирует время исполнения вдоль кривой безье

## CONTENT

Интерполирует время исполнения вдоль кривой безье

Параметры:
* float
* float - x первой контрольной точки
* float - y первой контрольной точки
* float - x второй контрольной точки
* float - y второй контрольной точки

Возвращает:
* float

# ::stappler::xenolith::interpolation::quadraticIn(float)

## BRIEF

Интерполирует время исполнения

## CONTENT

Интерполирует время исполнения

Параметры:
* float

Возвращает:
* float

# ::stappler::xenolith::interpolation::quadraticOut(float)

## BRIEF

Интерполирует время исполнения

## CONTENT

Интерполирует время исполнения

Параметры:
* float

Возвращает:
* float

# ::stappler::xenolith::interpolation::quadraticInOut(float)

## BRIEF

Интерполирует время исполнения

## CONTENT

Интерполирует время исполнения

Параметры:
* float

Возвращает:
* float

# ::stappler::xenolith::interpolation::sineEaseIn(float)

## BRIEF

Интерполирует время исполнения

## CONTENT

Интерполирует время исполнения

Параметры:
* float

Возвращает:
* float

# ::stappler::xenolith::interpolation::sineEaseOut(float)

## BRIEF

Интерполирует время исполнения

## CONTENT

Интерполирует время исполнения

Параметры:
* float

Возвращает:
* float

# ::stappler::xenolith::interpolation::sineEaseInOut(float)

## BRIEF

Интерполирует время исполнения

## CONTENT

Интерполирует время исполнения

Параметры:
* float

Возвращает:
* float

# ::stappler::xenolith::interpolation::quadEaseIn(float)

## BRIEF

Интерполирует время исполнения

## CONTENT

Интерполирует время исполнения

Параметры:
* float

Возвращает:
* float

# ::stappler::xenolith::interpolation::quadEaseOut(float)

## BRIEF

Интерполирует время исполнения

## CONTENT

Интерполирует время исполнения

Параметры:
* float

Возвращает:
* float

# ::stappler::xenolith::interpolation::quadEaseInOut(float)

## BRIEF

Интерполирует время исполнения

## CONTENT

Интерполирует время исполнения

Параметры:
* float

Возвращает:
* float

# ::stappler::xenolith::interpolation::cubicEaseIn(float)

## BRIEF

Интерполирует время исполнения

## CONTENT

Интерполирует время исполнения

Параметры:
* float

Возвращает:
* float

# ::stappler::xenolith::interpolation::cubicEaseOut(float)

## BRIEF

Интерполирует время исполнения

## CONTENT

Интерполирует время исполнения

Параметры:
* float

Возвращает:
* float

# ::stappler::xenolith::interpolation::cubicEaseInOut(float)

## BRIEF

Интерполирует время исполнения

## CONTENT

Интерполирует время исполнения

Параметры:
* float

Возвращает:
* float

# ::stappler::xenolith::interpolation::quartEaseIn(float)

## BRIEF

Интерполирует время исполнения

## CONTENT

Интерполирует время исполнения

Параметры:
* float

Возвращает:
* float

# ::stappler::xenolith::interpolation::quartEaseOut(float)

## BRIEF

Интерполирует время исполнения

## CONTENT

Интерполирует время исполнения

Параметры:
* float

Возвращает:
* float

# ::stappler::xenolith::interpolation::quartEaseInOut(float)

## BRIEF

Интерполирует время исполнения

## CONTENT

Интерполирует время исполнения

Параметры:
* float

Возвращает:
* float

# ::stappler::xenolith::interpolation::quintEaseIn(float)

## BRIEF

Интерполирует время исполнения

## CONTENT

Интерполирует время исполнения

Параметры:
* float

Возвращает:
* float

# ::stappler::xenolith::interpolation::quintEaseOut(float)

## BRIEF

Интерполирует время исполнения

## CONTENT

Интерполирует время исполнения

Параметры:
* float

Возвращает:
* float

# ::stappler::xenolith::interpolation::quintEaseInOut(float)

## BRIEF

Интерполирует время исполнения

## CONTENT

Интерполирует время исполнения

Параметры:
* float

Возвращает:
* float

# ::stappler::xenolith::interpolation::expoEaseIn(float)

## BRIEF

Интерполирует время исполнения

## CONTENT

Интерполирует время исполнения

Параметры:
* float

Возвращает:
* float

# ::stappler::xenolith::interpolation::expoEaseOut(float)

## BRIEF

Интерполирует время исполнения

## CONTENT

Интерполирует время исполнения

Параметры:
* float

Возвращает:
* float

# ::stappler::xenolith::interpolation::expoEaseInOut(float)

## BRIEF

Интерполирует время исполнения

## CONTENT

Интерполирует время исполнения

Параметры:
* float

Возвращает:
* float

# ::stappler::xenolith::interpolation::circEaseIn(float)

## BRIEF

Интерполирует время исполнения

## CONTENT

Интерполирует время исполнения

Параметры:
* float

Возвращает:
* float

# ::stappler::xenolith::interpolation::circEaseOut(float)

## BRIEF

Интерполирует время исполнения

## CONTENT

Интерполирует время исполнения

Параметры:
* float

Возвращает:
* float

# ::stappler::xenolith::interpolation::circEaseInOut(float)

## BRIEF

Интерполирует время исполнения

## CONTENT

Интерполирует время исполнения

Параметры:
* float

Возвращает:
* float

# ::stappler::xenolith::interpolation::elasticEaseIn(float,float)

## BRIEF

Интерполирует время исполнения

## CONTENT

Интерполирует время исполнения

Параметры:
* float
* float - параметр интерполяции

Возвращает:
* float

# ::stappler::xenolith::interpolation::elasticEaseOut(float,float)

## BRIEF

Интерполирует время исполнения

## CONTENT

Интерполирует время исполнения

Параметры:
* float
* float - параметр интерполяции

Возвращает:
* float

# ::stappler::xenolith::interpolation::elasticEaseInOut(float,float)

## BRIEF

Интерполирует время исполнения

## CONTENT

Интерполирует время исполнения

Параметры:
* float
* float - параметр интерполяции

Возвращает:
* float

# ::stappler::xenolith::interpolation::backEaseIn(float)

## BRIEF

Интерполирует время исполнения

## CONTENT

Интерполирует время исполнения

Параметры:
* float

Возвращает:
* float

# ::stappler::xenolith::interpolation::backEaseOut(float)

## BRIEF

Интерполирует время исполнения

## CONTENT

Интерполирует время исполнения

Параметры:
* float

Возвращает:
* float

# ::stappler::xenolith::interpolation::backEaseInOut(float)

## BRIEF

Интерполирует время исполнения

## CONTENT

Интерполирует время исполнения

Параметры:
* float

Возвращает:
* float

# ::stappler::xenolith::interpolation::bounceEaseIn(float)

## BRIEF

Интерполирует время исполнения

## CONTENT

Интерполирует время исполнения

Параметры:
* float

Возвращает:
* float

# ::stappler::xenolith::interpolation::bounceEaseOut(float)

## BRIEF

Интерполирует время исполнения

## CONTENT

Интерполирует время исполнения

Параметры:
* float

Возвращает:
* float

# ::stappler::xenolith::interpolation::bounceEaseInOut(float)

## BRIEF

Интерполирует время исполнения

## CONTENT

Интерполирует время исполнения

Параметры:
* float

Возвращает:
* float

# ::stappler::xenolith::interpolation::customEase(float,float*)

## BRIEF

Интерполирует время исполнения

## CONTENT

Интерполирует время исполнения по параметрам кубического уравнения

Параметры:
* float
* float*

Возвращает:
* float

# ::stappler::xenolith::ActionEase

## BRIEF

Базовый модификатор действия

## CONTENT

Базовый модификатор действия

Базовые классы:
* ActionInterval


# ::stappler::xenolith::ActionEase::~ActionEase()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор

# ::stappler::xenolith::ActionEase::init(stappler::xenolith::ActionInterval*)

## BRIEF

Создаёт модификатор для действия

## CONTENT

Доступ: public

Создаёт модификатор для действия

Параметры:
* stappler::xenolith::ActionInterval*

Возвращает:
* bool

# ::stappler::xenolith::ActionEase::startWithTarget(stappler::xenolith::Node*)

## BRIEF

Запускает действие

## CONTENT

Доступ: public

Запускает действие

Параметры:
* stappler::xenolith::Node*


# ::stappler::xenolith::ActionEase::stop()

## BRIEF

Останавливает действие

## CONTENT

Доступ: public

Останавливает действие

# ::stappler::xenolith::ActionEase::update(float)

## BRIEF

Выполняет действие

## CONTENT

Доступ: public

Выполняет действие

Параметры:
* float


# ::stappler::xenolith::ActionEase::_inner

## BRIEF

Действие для модификации

## CONTENT

Доступ: protected

Действие для модификации

Тип: Rc<stappler::xenolith::ActionInterval>


# ::stappler::xenolith::EaseRateAction

## BRIEF

Модификатор действия

## CONTENT

Модификатор действия

Базовые классы:
* ActionEase


# ::stappler::xenolith::EaseRateAction::~EaseRateAction()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор


# ::stappler::xenolith::EaseRateAction::init(stappler::xenolith::ActionInterval*,float)

## BRIEF

Создаёт модификатор

## CONTENT

Доступ: public

Создаёт модификатор

Параметры:
* stappler::xenolith::ActionInterval*
* float

Возвращает:
* bool

# ::stappler::xenolith::EaseRateAction::setRate(float)

## BRIEF

Устанавливает параметр интерполяции

## CONTENT

Доступ: public

Устанавливает параметр интерполяции

Параметры:
* float


# ::stappler::xenolith::EaseRateAction::getRate() const

## BRIEF

Возвращает параметр интерполяции

## CONTENT

Доступ: public

Возвращает параметр интерполяции

Возвращает:
* float

# ::stappler::xenolith::EaseRateAction::_rate

## BRIEF

Параметр интерполяции

## CONTENT

Доступ: protected

Параметр интерполяции

Тип: float


# ::stappler::xenolith::EaseIn

## BRIEF

Модификатор действия

## CONTENT

Модификатор действия

Базовые классы:
* EaseRateAction


# ::stappler::xenolith::EaseIn::~EaseIn()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор


# ::stappler::xenolith::EaseIn::update(float)

## BRIEF

Выполняет действие

## CONTENT

Доступ: public

Выполняет действие

Параметры:
* float


# ::stappler::xenolith::EaseOut

## BRIEF

Модификатор действия

## CONTENT

Модификатор действия

Базовые классы:
* EaseRateAction


# ::stappler::xenolith::EaseOut::~EaseOut()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор


# ::stappler::xenolith::EaseOut::update(float)

## BRIEF

Выполняет действие

## CONTENT

Доступ: public

Выполняет действие

Параметры:
* float


# ::stappler::xenolith::EaseInOut

## BRIEF

Модификатор действия

## CONTENT

Модификатор действия

Базовые классы:
* EaseRateAction


# ::stappler::xenolith::EaseInOut::~EaseInOut()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор


# ::stappler::xenolith::EaseInOut::update(float)

## BRIEF

Выполняет действие

## CONTENT

Доступ: public

Выполняет действие

Параметры:
* float


# ::stappler::xenolith::EaseExponentialIn

## BRIEF

Модификатор действия

## CONTENT

Модификатор действия

Базовые классы:
* ActionEase


# ::stappler::xenolith::EaseExponentialIn::~EaseExponentialIn()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор


# ::stappler::xenolith::EaseExponentialIn::update(float)

## BRIEF

Выполняет действие

## CONTENT

Доступ: public

Выполняет действие

Параметры:
* float


# ::stappler::xenolith::EaseExponentialOut

## BRIEF

Модификатор действия

## CONTENT

Модификатор действия

Базовые классы:
* ActionEase


# ::stappler::xenolith::EaseExponentialOut::~EaseExponentialOut()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор


# ::stappler::xenolith::EaseExponentialOut::update(float)

## BRIEF

Выполняет действие

## CONTENT

Доступ: public

Выполняет действие

Параметры:
* float


# ::stappler::xenolith::EaseExponentialInOut

## BRIEF

Модификатор действия

## CONTENT

Модификатор действия

Базовые классы:
* ActionEase


# ::stappler::xenolith::EaseExponentialInOut::~EaseExponentialInOut()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор


# ::stappler::xenolith::EaseExponentialInOut::update(float)

## BRIEF

Выполняет действие

## CONTENT

Доступ: public

Выполняет действие

Параметры:
* float


# ::stappler::xenolith::EaseSineIn

## BRIEF

Модификатор действия

## CONTENT

Модификатор действия

Базовые классы:
* ActionEase


# ::stappler::xenolith::EaseSineIn::~EaseSineIn()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор


# ::stappler::xenolith::EaseSineIn::update(float)

## BRIEF

Выполняет действие

## CONTENT

Доступ: public

Выполняет действие

Параметры:
* float


# ::stappler::xenolith::EaseSineOut

## BRIEF

Модификатор действия

## CONTENT

Модификатор действия

Базовые классы:
* ActionEase


# ::stappler::xenolith::EaseSineOut::~EaseSineOut()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор


# ::stappler::xenolith::EaseSineOut::update(float)

## BRIEF

Выполняет действие

## CONTENT

Доступ: public

Выполняет действие

Параметры:
* float


# ::stappler::xenolith::EaseSineInOut

## BRIEF

Модификатор действия

## CONTENT

Модификатор действия

Базовые классы:
* ActionEase


# ::stappler::xenolith::EaseSineInOut::~EaseSineInOut()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор


# ::stappler::xenolith::EaseSineInOut::update(float)

## BRIEF

Выполняет действие

## CONTENT

Доступ: public

Выполняет действие

Параметры:
* float


# ::stappler::xenolith::EaseElastic

## BRIEF

Модификатор действия

## CONTENT

Модификатор действия

Базовые классы:
* ActionEase


# ::stappler::xenolith::EaseElastic::~EaseElastic()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор


# ::stappler::xenolith::EaseElastic::init(stappler::xenolith::ActionInterval*,float)

## BRIEF

Создаёт модификатор действия

## CONTENT

Доступ: public

Создаёт модификатор действия

Параметры:
* stappler::xenolith::ActionInterval*
* float

Возвращает:
* bool

# ::stappler::xenolith::EaseElastic::getPeriod() const

## BRIEF

Возвращает параметр интерполяции

## CONTENT

Доступ: public

Возвращает параметр интерполяции

Возвращает:
* float

# ::stappler::xenolith::EaseElastic::setPeriod(float)

## BRIEF

Устанавливает параметр интерполяции

## CONTENT

Доступ: public

Устанавливает параметр интерполяции

Параметры:
* float


# ::stappler::xenolith::EaseElastic::_period

## BRIEF

Параметр интерполяции

## CONTENT

Доступ: protected

Параметр интерполяции

Тип: float


# ::stappler::xenolith::EaseElasticIn

## BRIEF

Модификатор действия

## CONTENT

Модификатор действия

Базовые классы:
* EaseElastic


# ::stappler::xenolith::EaseElasticIn::~EaseElasticIn()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор


# ::stappler::xenolith::EaseElasticIn::update(float)

## BRIEF

Выполняет действие

## CONTENT

Доступ: public

Выполняет действие

Параметры:
* float


# ::stappler::xenolith::EaseElasticOut

## BRIEF

Модификатор действия

## CONTENT

Модификатор действия

Базовые классы:
* EaseElastic


# ::stappler::xenolith::EaseElasticOut::~EaseElasticOut()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор


# ::stappler::xenolith::EaseElasticOut::update(float)

## BRIEF

Выполняет действие

## CONTENT

Доступ: public

Выполняет действие

Параметры:
* float


# ::stappler::xenolith::EaseElasticInOut

## BRIEF

Модификатор действия

## CONTENT

Модификатор действия

Базовые классы:
* EaseElastic


# ::stappler::xenolith::EaseElasticInOut::~EaseElasticInOut()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор


# ::stappler::xenolith::EaseElasticInOut::update(float)

## BRIEF

Выполняет действие

## CONTENT

Доступ: public

Выполняет действие

Параметры:
* float


# ::stappler::xenolith::EaseBounceIn

## BRIEF

Модификатор действия

## CONTENT

Модификатор действия

Базовые классы:
* ActionEase


# ::stappler::xenolith::EaseBounceIn::~EaseBounceIn()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор


# ::stappler::xenolith::EaseBounceIn::update(float)

## BRIEF

Выполняет действие

## CONTENT

Доступ: public

Выполняет действие

Параметры:
* float


# ::stappler::xenolith::EaseBounceOut

## BRIEF

Модификатор действия

## CONTENT

Модификатор действия

Базовые классы:
* ActionEase


# ::stappler::xenolith::EaseBounceOut::~EaseBounceOut()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор


# ::stappler::xenolith::EaseBounceOut::update(float)

## BRIEF

Выполняет действие

## CONTENT

Доступ: public

Выполняет действие

Параметры:
* float


# ::stappler::xenolith::EaseBounceInOut

## BRIEF

Модификатор действия

## CONTENT

Модификатор действия

Базовые классы:
* ActionEase


# ::stappler::xenolith::EaseBounceInOut::~EaseBounceInOut()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор


# ::stappler::xenolith::EaseBounceInOut::update(float)

## BRIEF

Выполняет действие

## CONTENT

Доступ: public

Выполняет действие

Параметры:
* float


# ::stappler::xenolith::EaseBackIn

## BRIEF

Модификатор действия

## CONTENT

Модификатор действия

Базовые классы:
* ActionEase


# ::stappler::xenolith::EaseBackIn::~EaseBackIn()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор


# ::stappler::xenolith::EaseBackIn::update(float)

## BRIEF

Выполняет действие

## CONTENT

Доступ: public

Выполняет действие

Параметры:
* float


# ::stappler::xenolith::EaseBackOut

## BRIEF

Модификатор действия

## CONTENT

Модификатор действия

Базовые классы:
* ActionEase


# ::stappler::xenolith::EaseBackOut::~EaseBackOut()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор


# ::stappler::xenolith::EaseBackOut::update(float)

## BRIEF

Выполняет действие

## CONTENT

Доступ: public

Выполняет действие

Параметры:
* float


# ::stappler::xenolith::EaseBackInOut

## BRIEF

Модификатор действия

## CONTENT

Модификатор действия

Базовые классы:
* ActionEase


# ::stappler::xenolith::EaseBackInOut::~EaseBackInOut()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор


# ::stappler::xenolith::EaseBackInOut::update(float)

## BRIEF

Выполняет действие

## CONTENT

Доступ: public

Выполняет действие

Параметры:
* float


# ::stappler::xenolith::EaseBezierAction

## BRIEF

Модификатор действия

## CONTENT

Модификатор действия

Базовые классы:
* ActionEase


# ::stappler::xenolith::EaseBezierAction::~EaseBezierAction()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор


# ::stappler::xenolith::EaseBezierAction::init(stappler::xenolith::ActionInterval*,float,float,float,float)

## BRIEF

Создаёт модификатор действия на основе параметров Безье

## CONTENT

Доступ: public

Создаёт модификатор действия на основе параметров Безье

Параметры:
* stappler::xenolith::ActionInterval*
* float - x первого параметра
* float - y первого параметра
* float - x второго параметра
* float - y второго параметра

Возвращает:
* bool

# ::stappler::xenolith::EaseBezierAction::update(float)

## BRIEF

Выполняет действие

## CONTENT

Доступ: public

Выполняет действие

Параметры:
* float


# ::stappler::xenolith::EaseBezierAction::_p0

## BRIEF

Параметр интерполяции

## CONTENT

Доступ: protected

Параметр интерполяции

Тип: float


# ::stappler::xenolith::EaseBezierAction::_p1

## BRIEF

Параметр интерполяции

## CONTENT

Доступ: protected

Параметр интерполяции

Тип: float


# ::stappler::xenolith::EaseBezierAction::_p2

## BRIEF

Параметр интерполяции

## CONTENT

Доступ: protected

Параметр интерполяции

Тип: float


# ::stappler::xenolith::EaseBezierAction::_p3

## BRIEF

Параметр интерполяции

## CONTENT

Доступ: protected

Параметр интерполяции

Тип: float


# ::stappler::xenolith::EaseQuadraticActionIn

## BRIEF

Модификатор действия

## CONTENT

Модификатор действия

Базовые классы:
* ActionEase


# ::stappler::xenolith::EaseQuadraticActionIn::~EaseQuadraticActionIn()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор


# ::stappler::xenolith::EaseQuadraticActionIn::update(float)

## BRIEF

Выполняет действие

## CONTENT

Доступ: public

Выполняет действие

Параметры:
* float


# ::stappler::xenolith::EaseQuadraticActionOut

## BRIEF

Модификатор действия

## CONTENT

Модификатор действия

Базовые классы:
* ActionEase


# ::stappler::xenolith::EaseQuadraticActionOut::~EaseQuadraticActionOut()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор


# ::stappler::xenolith::EaseQuadraticActionOut::update(float)

## BRIEF

Выполняет действие

## CONTENT

Доступ: public

Выполняет действие

Параметры:
* float


# ::stappler::xenolith::EaseQuadraticActionInOut

## BRIEF

Модификатор действия

## CONTENT

Модификатор действия

Базовые классы:
* ActionEase


# ::stappler::xenolith::EaseQuadraticActionInOut::~EaseQuadraticActionInOut()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор


# ::stappler::xenolith::EaseQuadraticActionInOut::update(float)

## BRIEF

Выполняет действие

## CONTENT

Доступ: public

Выполняет действие

Параметры:
* float


# ::stappler::xenolith::EaseQuarticActionIn

## BRIEF

Модификатор действия

## CONTENT

Модификатор действия

Базовые классы:
* ActionEase


# ::stappler::xenolith::EaseQuarticActionIn::~EaseQuarticActionIn()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор


# ::stappler::xenolith::EaseQuarticActionIn::update(float)

## BRIEF

Выполняет действие

## CONTENT

Доступ: public

Выполняет действие

Параметры:
* float


# ::stappler::xenolith::EaseQuarticActionOut

## BRIEF

Модификатор действия

## CONTENT

Модификатор действия

Базовые классы:
* ActionEase


# ::stappler::xenolith::EaseQuarticActionOut::~EaseQuarticActionOut()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор


# ::stappler::xenolith::EaseQuarticActionOut::update(float)

## BRIEF

Выполняет действие

## CONTENT

Доступ: public

Выполняет действие

Параметры:
* float


# ::stappler::xenolith::EaseQuarticActionInOut

## BRIEF

Модификатор действия

## CONTENT

Модификатор действия

Базовые классы:
* ActionEase


# ::stappler::xenolith::EaseQuarticActionInOut::~EaseQuarticActionInOut()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор


# ::stappler::xenolith::EaseQuarticActionInOut::update(float)

## BRIEF

Выполняет действие

## CONTENT

Доступ: public

Выполняет действие

Параметры:
* float


# ::stappler::xenolith::EaseQuinticActionIn

## BRIEF

Модификатор действия

## CONTENT

Модификатор действия

Базовые классы:
* ActionEase


# ::stappler::xenolith::EaseQuinticActionIn::~EaseQuinticActionIn()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор


# ::stappler::xenolith::EaseQuinticActionIn::update(float)

## BRIEF

Выполняет действие

## CONTENT

Доступ: public

Выполняет действие

Параметры:
* float


# ::stappler::xenolith::EaseQuinticActionOut

## BRIEF

Модификатор действия

## CONTENT

Модификатор действия

Базовые классы:
* ActionEase


# ::stappler::xenolith::EaseQuinticActionOut::~EaseQuinticActionOut()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор


# ::stappler::xenolith::EaseQuinticActionOut::update(float)

## BRIEF

Выполняет действие

## CONTENT

Доступ: public

Выполняет действие

Параметры:
* float


# ::stappler::xenolith::EaseQuinticActionInOut

## BRIEF

Модификатор действия

## CONTENT

Модификатор действия

Базовые классы:
* ActionEase


# ::stappler::xenolith::EaseQuinticActionInOut::~EaseQuinticActionInOut()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор


# ::stappler::xenolith::EaseQuinticActionInOut::update(float)

## BRIEF

Выполняет действие

## CONTENT

Доступ: public

Выполняет действие

Параметры:
* float


# ::stappler::xenolith::EaseCircleActionIn

## BRIEF

Модификатор действия

## CONTENT

Модификатор действия

Базовые классы:
* ActionEase


# ::stappler::xenolith::EaseCircleActionIn::~EaseCircleActionIn()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор


# ::stappler::xenolith::EaseCircleActionIn::update(float)

## BRIEF

Выполняет действие

## CONTENT

Доступ: public

Выполняет действие

Параметры:
* float


# ::stappler::xenolith::EaseCircleActionOut

## BRIEF

Модификатор действия

## CONTENT

Модификатор действия

Базовые классы:
* ActionEase


# ::stappler::xenolith::EaseCircleActionOut::~EaseCircleActionOut()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор


# ::stappler::xenolith::EaseCircleActionOut::update(float)

## BRIEF

Выполняет действие

## CONTENT

Доступ: public

Выполняет действие

Параметры:
* float


# ::stappler::xenolith::EaseCircleActionInOut

## BRIEF

Модификатор действия

## CONTENT

Модификатор действия

Базовые классы:
* ActionEase


# ::stappler::xenolith::EaseCircleActionInOut::~EaseCircleActionInOut()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор


# ::stappler::xenolith::EaseCircleActionInOut::update(float)

## BRIEF

Выполняет действие

## CONTENT

Доступ: public

Выполняет действие

Параметры:
* float


# ::stappler::xenolith::EaseCubicActionIn

## BRIEF

Модификатор действия

## CONTENT

Модификатор действия

Базовые классы:
* ActionEase


# ::stappler::xenolith::EaseCubicActionIn::~EaseCubicActionIn()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор


# ::stappler::xenolith::EaseCubicActionIn::update(float)

## BRIEF

Выполняет действие

## CONTENT

Доступ: public

Выполняет действие

Параметры:
* float


# ::stappler::xenolith::EaseCubicActionOut

## BRIEF

Модификатор действия

## CONTENT

Модификатор действия

Базовые классы:
* ActionEase


# ::stappler::xenolith::EaseCubicActionOut::~EaseCubicActionOut()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор


# ::stappler::xenolith::EaseCubicActionOut::update(float)

## BRIEF

Выполняет действие

## CONTENT

Доступ: public

Выполняет действие

Параметры:
* float


# ::stappler::xenolith::EaseCubicActionInOut

## BRIEF

Модификатор действия

## CONTENT

Модификатор действия

Базовые классы:
* ActionEase


# ::stappler::xenolith::EaseCubicActionInOut::~EaseCubicActionInOut()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор

# ::stappler::xenolith::EaseCubicActionInOut::update(float)

## BRIEF

Выполняет действие

## CONTENT

Доступ: public

Выполняет действие

Параметры:
* float
