Title: SPSubscription.h


# STAPPLER_CORE_UTILS_SPSUBSCRIPTION_H_

## BRIEF

Заголовок механизма подписок на события обновления

## CONTENT

Заголовок механизма подписок на события обновления


# ::stappler::SubscriptionId

## BRIEF

Тип уникального идентификатора подписчика

## CONTENT

Тип уникального идентификатора подписчика


# ::stappler::SubscriptionFlags

## BRIEF

Тип флагов, передаваемых от подписки подписчикам

## CONTENT

Тип флагов, передаваемых от подписки подписчикам. Битовые операции наследуются из базового типа.

Базовые классы:
* ValueWrapper<uint64_t,class SubscriptionFlagsClassFlag>


# ::stappler::SubscriptionFlags::Super

## BRIEF

Базовый класс для флагов подписки

## CONTENT

Базовый класс для флагов подписки


# ::stappler::SubscriptionFlags::SubscriptionFlags(stappler::ValueWrapper<unsigned long, stappler::SubscriptionFlagsClassFlag>::Type const&)

## BRIEF

Инициализирует флаги из целого числа

## CONTENT

Инициализирует флаги из целого числа

Параметры:
* stappler::ValueWrapper<unsigned long, stappler::SubscriptionFlagsClassFlag>::Type const&


# ::stappler::SubscriptionFlags::SubscriptionFlags(stappler::ValueWrapper<unsigned long, stappler::SubscriptionFlagsClassFlag>::Type&&)

## BRIEF

Инициализирует флаги из целого числа

## CONTENT

Инициализирует флаги из целого числа

Параметры:
* stappler::ValueWrapper<unsigned long, stappler::SubscriptionFlagsClassFlag>::Type&&


# ::stappler::SubscriptionFlags::SubscriptionFlags(stappler::SubscriptionFlags const&)

## BRIEF

Конструктор копирования

## CONTENT

Конструктор копирования

Параметры:
* stappler::SubscriptionFlags const&


# ::stappler::SubscriptionFlags::operator=(stappler::SubscriptionFlags const&)

## BRIEF

Оператор копирования

## CONTENT

Оператор копирования

Параметры:
* stappler::SubscriptionFlags const&

Возвращает:
* stappler::SubscriptionFlags&

# ::stappler::SubscriptionFlags::SubscriptionFlags(stappler::SubscriptionFlags&&)

## BRIEF

Конструктор перемещения

## CONTENT

Конструктор перемещения

Параметры:
* stappler::SubscriptionFlags&&


# ::stappler::SubscriptionFlags::operator=(stappler::SubscriptionFlags&&)

## BRIEF

Оператор перемещения

## CONTENT

Оператор перемещения

Параметры:
* stappler::SubscriptionFlags&&

Возвращает:
* stappler::SubscriptionFlags&

# ::stappler::SubscriptionFlags::SubscriptionFlags(stappler::SubscriptionFlags::Super const&)

## BRIEF

Конструктор копирования из базового типа

## CONTENT

Конструктор копирования из базового типа

Параметры:
* stappler::SubscriptionFlags::Super const&


# ::stappler::SubscriptionFlags::operator=(stappler::SubscriptionFlags::Super const&)

## BRIEF

Оператор копирования из базового типа

## CONTENT

Оператор копирования из базового типа

Параметры:
* stappler::SubscriptionFlags::Super const&

Возвращает:
* stappler::SubscriptionFlags&

# ::stappler::SubscriptionFlags::SubscriptionFlags(stappler::SubscriptionFlags::Super&&)

## BRIEF

Конструктор перемещения из базового типа

## CONTENT

Конструктор перемещения из базового типа

Параметры:
* stappler::SubscriptionFlags::Super&&


# ::stappler::SubscriptionFlags::operator=(stappler::SubscriptionFlags::Super&&)

## BRIEF

Оператор перемещения из базового типа

## CONTENT

Оператор перемещения из базового типа

Параметры:
* stappler::SubscriptionFlags::Super&&

Возвращает:
* stappler::SubscriptionFlags&

# ::stappler::SubscriptionFlags::hasFlag<typename>(T) const

## BRIEF

Проверяет, хранятся ли переданные флаги в значении

## CONTENT

Проверяет, хранятся ли переданные флаги в значении. Испольует битовое И для проверки наличия флага в значении.

Параметры шаблона:
* typename T

Параметры:
* T

Возвращает:
* bool

# ::stappler::SubscriptionFlags::initial() const

## BRIEF

Проверяет, установлен ли инициализирующий флаг

## CONTENT

Проверяет, установлен ли инициализирующий флаг (0x01). Этот флаг устаналвивается, когда объект подписывается на подписку.

Возвращает:
* bool

# ::stappler::SubscriptionTemplate<typename>

## BRIEF

Базовый шаблон типа подписки

## CONTENT

Базовый шаблон типа подписки

Цикл работы с подпиской:
* Вызов `subscribe` для нового подписчика
* Вызов `check` для получения флагов обновления для этого подписчика в цикле обновления
* Вызов `unsubscribe` для отключения подписчика

Подписка обновляется вызовом `setDirty`, добавляющим флаги к уже существующим. Флаги суммируются с помощью побитового ИЛИ до тех пор, пока не будут прочитаны подписчиком через вызов `check`. Для каждого подписчика хранилище флагов индивидуальное, чтение флагов одним подписчиом не затрагивает других. Вызов `check` сбрасывает текущие флаги подписчика.

Возможно перенаправление подписки с помощью вызова `setForwardedSubscription`. В случае перенаправления подписчики будут получать флаги перенаправляемой подписки, и `setDirty` сможет устанавливать флаги для неё. Для отключения перенаправления вызвать с аргументом `nullptr`.

Работа подписки возможна только в одном потоке.

Параметры шаблона:
* typename _Interface - используемый интерфейс памяти

Базовые классы:
* RefBase<_Interface>


# ::stappler::SubscriptionTemplate<typename>::Interface

## BRIEF

Тип интерфейса памяти

## CONTENT

Доступ: public

Тип интерфейса памяти


# ::stappler::SubscriptionTemplate<typename>::Id

## BRIEF

Тип уникального идентификатора подписчика

## CONTENT

Доступ: public

Тип уникального идентификатора подписчика

# ::stappler::SubscriptionTemplate<typename>::Flags

## BRIEF

Тип флагов подписки

## CONTENT

Доступ: public

Тип флагов подписки, передаваемых от подписки подисчику


# ::stappler::SubscriptionTemplate<typename>::FlagsMap

## BRIEF

Тип хранилища для подписчиков и флагов

## CONTENT

Доступ: public

Тип хранилища для подписчиков и флагов


# ::stappler::SubscriptionTemplate<typename>::getNextId()

## BRIEF

Возвращает следующий уникальный идентификатор

## CONTENT

Доступ: public

Возвращает следующий уникальный идентификатор, потокобезопасно.

Возвращает:
* Id

# ::stappler::SubscriptionTemplate<typename>::Initial

## BRIEF

Начальный флаг подписки

## CONTENT

Доступ: public

Начальный флаг подписки, устанавливается для нового подписчика при его подключении

Тип: Flags


# ::stappler::SubscriptionTemplate<typename>::~SubscriptionTemplate()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор, отключает подписчиков и перенаправленную подписку


# ::stappler::SubscriptionTemplate<typename>::_Flag<class>(T)

## BRIEF

Возвращает флаг для переданного индекса бита

## CONTENT

Доступ: public

Возвращает флаг для переданного индекса бита

Параметры шаблона:
* class T - целочисленный тип

Параметры:
* T - позиция бита в флаге

Возвращает:
* Flags - одиночный флаг

# ::stappler::SubscriptionTemplate<typename>::Flag()

## BRIEF

Возвращает пустой флаг

## CONTENT

Доступ: public

Возвращает пустой флаг

Возвращает:
* Flags

# ::stappler::SubscriptionTemplate<typename>::Flag<class,class>(T,Args &&...)

## BRIEF

Возвращает флаг из набора установленных битов

## CONTENT

Доступ: public

Возвращает флаг из набора установленных битов. Получает на вход один или несколько индексов битов, возвращает тип флага, где биты на указанных индексах установлены.

Параметры шаблона:
* class T
* class Args

Параметры:
* T
* Args &&...

Возвращает:
* Flags

# ::stappler::SubscriptionTemplate<typename>::setDirty(stappler::SubscriptionTemplate::Flags,bool)

## BRIEF

Обновляет подписку. Устанавливает флаги, передаваемые действующим подписчикам

## CONTENT

Доступ: public

Обновляет подписку. Устанавливает флаги, передаваемые действующим подписчикам

Параметры:
* stappler::SubscriptionTemplate::Flags
* bool - true если необходимо установить флаги только для перенаправляемой подписки. Иначе устанавливает флаг и для своих подписчиков, и для перенаправляемой подписки.


# ::stappler::SubscriptionTemplate<typename>::subscribe(stappler::SubscriptionTemplate::Id)

## BRIEF

Добавляет нового подписчика

## CONTENT

Доступ: public

Добавляет нового подписчика

Параметры:
* stappler::SubscriptionTemplate::Id - уникальный идентификатор, полученный с помощью `getNextId`.

Возвращает:
* bool - true если подписчик добавлен, false если подписчик уже подписан


# ::stappler::SubscriptionTemplate<typename>::unsubscribe(stappler::SubscriptionTemplate::Id)

## BRIEF

Отписывает подписчика

## CONTENT

Доступ: public

Отписывает подписчика

Параметры:
* stappler::SubscriptionTemplate::Id - уникальный идентификатор подписчика

Возвращает:
* bool - true если подписчик отписан, false если подписчик не был подписан

# ::stappler::SubscriptionTemplate<typename>::check(stappler::SubscriptionTemplate::Id)

## BRIEF

Получает новые флаги от подписки

## CONTENT

Доступ: public

Получает новые флаги от подписки, очищает текущие флаги для подписчика

Параметры:
* stappler::SubscriptionTemplate::Id - уникальный идентификатор подписчика

Возвращает:
* Flags

# ::stappler::SubscriptionTemplate<typename>::setForwardedSubscription(SubscriptionTemplate<_Interface>*)

## BRIEF

Устанавливает перенаправляемую подписку

## CONTENT

Доступ: public

Устанавливает перенаправляемую подписку. Если передать nullptr - отменяет перенапавление. Если подписка перенаправляется, подписчики будут подписываться, в том числе, и на перенаправляемую подписку, и получать флаги обновления от перенаправляемой подписки.

Подписка может использоваться как ссылка на другую подписку, так и расширять её функции с использованием собственных дополнительных флагов.

Параметры:
* SubscriptionTemplate<_Interface>*


# ::stappler::SubscriptionTemplate<typename>::_forwarded

## BRIEF

Перенаправляемая подписка

## CONTENT

Доступ: protected

Перенаправляемая подписка

Тип: Rc<SubscriptionTemplate<_Interface>>


# ::stappler::SubscriptionTemplate<typename>::_forwardedFlags

## BRIEF

Флаги перенаправляемой подписки

## CONTENT

Доступ: protected

Флаги перенаправляемой подписки

Тип: FlagsMap*


# ::stappler::SubscriptionTemplate<typename>::_flags

## BRIEF

Флаги подписчиков

## CONTENT

Доступ: protected

Флаги подписчиков

Тип: FlagsMap


# ::stappler::Binding<class>

## BRIEF

Шаблон для автоматической связи подписчика и подписки

## CONTENT

Шаблон для автоматической связи подписчика и подписки.

Автоматически получает новый идентификатор и подписывает на переданную подписку. Автоматически отписывает при уничтожении объекта

Параметры шаблона:
* class T


# ::stappler::Binding<class>::Id

## BRIEF

Тип уникального идентификатора подписчика

## CONTENT

Доступ: public

Тип уникального идентификатора подписчика


# ::stappler::Binding<class>::Flags

## BRIEF

Тип флагов, передаваемых подписчикам

## CONTENT

Доступ: public

Тип флагов, передаваемых подписчикам


# ::stappler::Binding<class>::Binding()

## BRIEF

Конструктор по умолчанию, создаёт новый идентификатор

## CONTENT

Доступ: public

Конструктор по умолчанию, создаёт новый идентификатор


# ::stappler::Binding<class>::Binding(T*)

## BRIEF

Конструктор с подпиской, создаёт новый идентификатор

## CONTENT

Доступ: public

Конструктор с подпиской, создаёт новый идентификатор. Подписывается на подписку автоматически.

Параметры:
* T* - подписка


# ::stappler::Binding<class>::~Binding()

## BRIEF

Деструктор, отписывается от подписки

## CONTENT

Доступ: public

Деструктор, отписывается от подписки


# ::stappler::Binding<class>::Binding(Binding<T> const&)

## BRIEF

Конструктор копирования

## CONTENT

Доступ: public

Конструктор копирования, подписывает нового подписчика на ту же подписку

Параметры:
* Binding<T> const&


# ::stappler::Binding<class>::operator=(Binding<T> const&)

## BRIEF

Оператор копирования

## CONTENT

Доступ: public

Оператор копирования, отписывает от текущей подписки, подписывает на подписку из копии

Параметры:
* Binding<T> const&

Возвращает:
* Binding<T>&

# ::stappler::Binding<class>::Binding(Binding<T>&&)

## BRIEF

Конструктор перемещения

## CONTENT

Доступ: public

Конструктор перемещения, заменяет подписчика

Параметры:
* Binding<T>&&


# ::stappler::Binding<class>::operator=(Binding<T>&&)

## BRIEF

Оператор перемещения

## CONTENT

Доступ: public

Оператор перемещения, заменяет подписчика

Параметры:
* Binding<T>&&

Возвращает:
* Binding<T>&

# ::stappler::Binding<class>::operator T*()

## BRIEF

Возвращает указатель на подписку

## CONTENT

Доступ: public

Возвращает указатель на подписку

Возвращает:
* T*

# ::stappler::Binding<class>::operator T*() const

## BRIEF

Возвращает указатель на подписку

## CONTENT

Доступ: public

Возвращает указатель на подписку

Возвращает:
* T*

# ::stappler::Binding<class>::operator bool() const

## BRIEF

Проверяет, есть ли связанная подписка

## CONTENT

Доступ: public

Проверяет, есть ли связанная подписка

Возвращает:
* bool - true если подписка есть

# ::stappler::Binding<class>::operator->()

## BRIEF

Возвращает указатель на подписку через разыменование

## CONTENT

Доступ: public

Возвращает указатель на подписку через разыменование

Возвращает:
* T*

# ::stappler::Binding<class>::operator->() const

## BRIEF

Возвращает указатель на подписку через разыменование

## CONTENT

Доступ: public

Возвращает указатель на подписку через разыменование

Возвращает:
* T const*

# ::stappler::Binding<class>::check()

## BRIEF

Обновляет подписку, получает флаги

## CONTENT

Доступ: public

Обновляет подписку, получает флаги

Возвращает:
* Flags

# ::stappler::Binding<class>::set(T*)

## BRIEF

Устанавливает новую подписку

## CONTENT

Доступ: public

Устанавливает новую подписку, отписывает от текущей и подписывает на новую

Параметры:
* T*


# ::stappler::Binding<class>::get() const

## BRIEF

Получает указатель на подписку

## CONTENT

Доступ: public

Получает указатель на подписку

Возвращает:
* T*

# ::stappler::Binding<class>::_id

## BRIEF

Идентификатор подписчика

## CONTENT

Доступ: protected

Идентификатор подписчика

Тип: Id


# ::stappler::Binding<class>::_subscription

## BRIEF

Текущая подписка

## CONTENT

Доступ: protected

Текущая подписка

Тип: Rc<T>


# ::stappler::mem_std::Subscription

## BRIEF

Псевдоним подписки для стандартного интерфейса памяти

## CONTENT

Псевдоним подписки для стандартного интерфейса памяти


# ::stappler::mem_pool::Subscription

## BRIEF

Псевдоним подписки для интерфейса пулов памяти

## CONTENT

Псевдоним подписки для интерфейса пулов памяти
