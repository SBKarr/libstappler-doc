Title: SPNetworkHandle.h


# STAPPLER_NETWORK_SPNETWORKHANDLE_H_

## BRIEF

Заголовок интерфейса сетевого запроса

## CONTENT

Заголовок интерфейса сетевого запроса


# ::stappler::network::Handle<typename>

## BRIEF

Интерфейс сетевого запроса

## CONTENT

Интерфейс сетевого запроса. Для настройки запроса использутся функции соответсвующего HandleData, раскрываемые этим интерфейсом.

Параметры шаблона:
* typename Interface - интерфейс памяти

Базовые классы:
* HandleData<Interface>

# ::stappler::network::Handle<typename>::Method

## BRIEF

Псевдоним типа метода запроса

## CONTENT

Доступ: public

Псевдоним типа метода запроса

# ::stappler::network::Handle<typename>::DataType

## BRIEF

Тип данных запроса

## CONTENT

Доступ: public

Тип данных запроса


# ::stappler::network::Handle<typename>::String

## BRIEF

Тип символьной строки

## CONTENT

Тип символьной строки

Доступ: public


# ::stappler::network::Handle<typename>::StringStream

## BRIEF

Тип строкового потока

## CONTENT

Доступ: public

Тип строкового потока


# ::stappler::network::Handle<typename>::Bytes

## BRIEF

Тип байтовой строки

## CONTENT

Доступ: public

Тип байтовой строки


# ::stappler::network::Handle<typename>::Value

## BRIEF

Тип нетипизированного значения

## CONTENT

Доступ: public

Тип нетипизированного значения


# ::stappler::network::Handle<typename>::ProgressCallback

## BRIEF

Тип функции получения прогресса

## CONTENT

Доступ: public

Тип функции получения прогресса


# ::stappler::network::Handle<typename>::IOCallback

## BRIEF

Тип функции ввода-вывода

## CONTENT

Доступ: public

Тип функции ввода-вывода


# ::stappler::network::Handle<typename>::Handle()

## BRIEF

Конструктор по умолчанию

## CONTENT

Доступ: public

Конструктор по умолчанию. Инициализирует пустой запрос. Если используются пулы памяти, интерфейс использует текущий пул памяти из контекста.


# ::stappler::network::Handle<typename>::Handle(Handle<Interface>&&)

## BRIEF

Конструктор перемещения

## CONTENT

Доступ: public

Конструктор перемещения. Интерфейс использует текущий пул памяти из контекста.

Параметры:
* Handle<Interface>&&


# ::stappler::network::Handle<typename>::operator=(Handle<Interface>&&)

## BRIEF

Оператор перемещения

## CONTENT

Доступ: public

Оператор перемещения

Параметры:
* Handle<Interface>&&

Возвращает:
* Handle<Interface>&

# ::stappler::network::Handle<typename>::init(stappler::network::Handle::Method,stappler::StringView)

## BRIEF

Инициализирует запрос с методом и URL

## CONTENT

Доступ: public

Инициализирует запрос с методом и URL

Параметры:
* stappler::network::Handle::Method - метод запроса
* stappler::StringView - URL запроса

Возвращает:
* bool - true если подготовка успешна

# ::stappler::network::Handle<typename>::perform()

## BRIEF

Выполняет единичный сетевой запрос

## CONTENT

Доступ: public

Выполняет единичный сетевой запрос. Блокирует текущий поток до выполнения запроса.

Возвращает:
* bool - true если запрос выполнен успешно


# ::stappler::network::Handle<typename>::getData()

## BRIEF

Получает указатель на данные запроса

## CONTENT

Доступ: protected

Получает указатель на данные запроса. Не доступно для пользователя.

Возвращает:
* HandleData<Interface>*

# ::stappler::network::MultiHandle<typename>

## BRIEF

Интерфейс для множественного выполнения запросов

## CONTENT

Интерфейс для множественного выполнения запросов

Параметры шаблона:
* typename Interface - интерфейс памяти

Базовые классы:
* Interface::AllocBaseType

# ::stappler::network::MultiHandle<typename>::addHandle(Handle<Interface>*,RefBase<Interface>*)

## BRIEF

Добавляет новый запрос для выполнения

## CONTENT

Доступ: public

Добавляет новый запрос для выполнения

Параметры:
* Handle<Interface>* - указатель на запрос
* RefBase<Interface>* - пользовательский хранимый объект


# ::stappler::network::MultiHandle<typename>::perform(Callback<bool (Handle<Interface> *, RefBase<Interface> *)> const&)

## BRIEF

Выполняет запланированные запросы. Выполненные запросы обрабатываются в передаваемой функции.

## CONTENT

Доступ: public

Выполняет запланированные запросы. Выполненные запросы обрабатываются в передаваемой функции. При получении результата запроса можно заново его настроить и отправить повторно с помощью `addHandle`.

Функция продолжает выполнение, пока есть активные запросы и из управляющей функции не возвращается false.

Если управляющая функция возвращает false, все активные запросы скорейшим образом сворачиваются, и управление из функции возвращается пользователю.

Параметры:
* Callback<bool (Handle<Interface> *, RefBase<Interface> *)> const& - управляющая функция

Возвращает:
* bool - true если все запросы выполнены, false если выполнение было прервано.


# ::stappler::network::MultiHandle<typename>::pending

## BRIEF

Список запросов, ожидающих выполнения

## CONTENT

Доступ: protected

Список запросов, ожидающих выполнения

Тип: typename Interface::template VectorType<Pair<Handle<Interface> *, void *>>


# ::stappler::mem_std::NetworkHandle

## BRIEF

Синоним сетевого интерфейса для стандартного интерфейса памяти

## CONTENT

Синоним сетевого интерфейса для стандартного интерфейса памяти


# ::stappler::mem_pool::NetworkHandle

## BRIEF

Синоним сетевого интерфейса для интерфейса пулов памяти

## CONTENT

Синоним сетевого интерфейса для интерфейса пулов памяти
