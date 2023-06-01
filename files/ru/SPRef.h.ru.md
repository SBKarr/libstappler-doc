Title: SPRef.h


# STAPPLER_CORE_UTILS_SPREF_H_

## BRIEF

Макрос защиты заголовка

## CONTENT

Макрос защиты заголовка

# SP_REF_DEBUG

## BRIEF

Флаг отладки системы подсчёта ссылок.

## CONTENT

Флаг отладки системы подсчёта ссылок. В режиме отладки функции `retain` и `release` определены как виртуальные, что позволяет их перегружать. Также, включается механизм отслеживания трассировки стека при вызове `retain`, если перегрузка `isRetainTrackerEnabled` возвращает true, что позволяет выяснить, какой вызов `retain` не был компенсирован вызовом `release`.

Если флаг не включен, аналогичные средства расположены в пространстве имён `memleak` для ручного использования.

# ::stappler::AtomicCounter

## BRIEF

Атомарный счётчик для подсчёта ссылок

## CONTENT

Атомарный счётчик для подсчёта ссылок, используется по умолчанию.

# ::stappler::AtomicCounter::AtomicCounter()

## BRIEF

Конструктор по умолчанию счётчика

## CONTENT

Конструктор по умолчанию счётчика

# ::stappler::AtomicCounter::increment()

## BRIEF

Увеличивает значение счётчика на 1

## CONTENT

Увеличивает значение счётчика на 1

# ::stappler::AtomicCounter::decrement()

## BRIEF

Уменьшает значение счётчика на 1

## CONTENT

Уменьшает значение счётчика на 1

Возвращает:
* bool - true если счётчик достиг 0, false иначе

# ::stappler::AtomicCounter::get() const

## BRIEF

Возвращается текущее значение счётчика

## CONTENT

Возвращается текущее значение счётчика

Возвращает:
* uint32_t - текущее значение счётчика

# ::stappler::AtomicCounter::_count

## BRIEF

Внутренний атомарный счётчик

## CONTENT

Тип: std::atomic<uint32_t>

Внутренний атомарный счётчик

# ::stappler::RefBase<typename>

## BRIEF

Базовый класс для объекта, время жизни которого определяется подсчётом ссылок

## CONTENT

Базовый класс для объекта, время жизни которого определяется подсчётом ссылок. Другие объекты с подсчётом ссылок используют этот класс в качестве базового. Предоставляет функции инкремента и декремента счётчика, и возврата значения счётчика. Если счётчик достигает 0 - объект удаляется.

Параметры шаблона:
* typename Interface - используемый интерфейс памяти

Базовые классы:
* Interface::AllocBaseType - базовый тип интерфейса аллокации памяти


# ::stappler::RefBase<typename>::InterfaceType

## BRIEF

Тип используемого объектом интерфейса памяти

## CONTENT

Доступ: public

Тип используемого объектом интерфейса памяти

# ::stappler::RefBase<typename>::retain()

## BRIEF

Увеличивает счётчик ссылок на 1

## CONTENT

Доступ: public

Увеличивает счётчик ссылок на 1

Возвращает:
* uint64_t - новый идентификатор ссылки для отслеживания (0 если отладка ссылок отключена)

# ::stappler::RefBase<typename>::release(uint64_t)

## BRIEF

Уменьшает счётчик ссылок на 1

## CONTENT

Доступ: public

Уменьшает счётчик ссылок на 1. Удаляет объект, если счётчик ссылок достиг 0.

Параметры:
* uint64_t - идентификатор ссылки (результат `retain`), которая уничтожается


# ::stappler::RefBase<typename>::getReferenceCount() const

## BRIEF

Возвращает текущее число ссылок

## CONTENT

Доступ: public

Возвращает текущее число ссылок

Возвращает:
* uint32_t - текущее число ссылок

# ::stappler::RefBase<typename>::~RefBase()

## BRIEF

Виртуальный деструктор

## CONTENT

Доступ: public

Виртуальный деструктор необходим при наследовании от `RefBase` для корректного уничтожения объектов. Предполагается, что каждый объект, унаследованный от `RefBase` должен иметь виртуальный деструктор.

# ::stappler::RefBase<typename>::RefBase()

## BRIEF

Конструктор по умолчанию

## CONTENT

Доступ: protected

Конструктор по умолчанию, инициализирует счётчик ссылок в 1. Конструктор не может быть вызван непосредственно, только из объекта, наследуемого от  `RefBase`.

# ::stappler::RefBase<typename>::_counter

## BRIEF

Объект счётчика ссылок

## CONTENT

Доступ: protected

Тип: stappler::AtomicCounter

Объект счётчика ссылок

# ::stappler::memleak::getNextRefId()

## BRIEF

Функция, возвращающая следующий идентификатор ссылки при использовании `retain`.

## CONTENT

Возвращает:
* uint64_t - новый идентификатор ссылки

# ::stappler::memleak::retainBacktrace(RefBase<memory::StandartInterface> const*)

## BRIEF

Захватывает текущее состояние стека функций для ссылки

## CONTENT

Захватывает текущее состояние стека функций для ссылки

Параметры:
* RefBase<memory::StandartInterface> const* - объект, к которому относится состояние стека

Возвращает:
* uint64_t - новый идентификатор ссылки, по которому захваченное состояние может быть удалено.

# ::stappler::memleak::releaseBacktrace(RefBase<memory::StandartInterface> const*,uint64_t)

## BRIEF

Удаляет состояние стека для ссылки

## CONTENT

Удаляет состояние стека для ссылки

Параметры:
* RefBase<memory::StandartInterface> const* - объект, к которому относится состояние стека
* uint64_t - идентификатор ссылки, состояние которой необходимо удалить


# ::stappler::memleak::foreachBacktrace(RefBase<memory::StandartInterface> const*,Callback<void (uint64_t, stappler::Time, const std::vector<std::string> &)> const&)

## BRIEF

Разворачивает сохранённые состояния стека для объекта

## CONTENT

Разворачивает сохранённые состояния стека для объекта

Параметры:
* RefBase<memory::StandartInterface> const* - объект, к которому относится состояние стека
* Callback<void (uint64_t, stappler::Time, const std::vector<std::string> &)> const& - функция обработки состояний

Параметры функции обработки состояний:
* uint64_t - идентификатор ссылки
* stappler::Time - время сохранения состояния стека функций
* const std::vector<std::string> & - массив, хранящий значение стека функций на момент появления ссылки

# ::stappler::memleak::retainBacktrace(RefBase<memory::PoolInterface> const*)

## BRIEF

Захватывает текущее состояние стека функций для ссылки

## CONTENT

Захватывает текущее состояние стека функций для ссылки

Параметры:
* RefBase<memory::PoolInterface> const* - объект, к которому относится состояние стека

Возвращает:
* uint64_t - новый идентификатор ссылки, по которому захваченное состояние может быть удалено.

# ::stappler::memleak::releaseBacktrace(RefBase<memory::PoolInterface> const*,uint64_t)

## BRIEF

Удаляет состояние стека для ссылки

## CONTENT

Удаляет состояние стека для ссылки

Параметры:
* RefBase<memory::PoolInterface> const* - объект, к которому относится состояние стека
* uint64_t - идентификатор ссылки, состояние которой необходимо удалить


# ::stappler::memleak::foreachBacktrace(RefBase<memory::PoolInterface> const*,Callback<void (uint64_t, stappler::Time, const std::vector<std::string> &)> const&)

## BRIEF

Разворачивает сохранённые состояния стека для объекта

## CONTENT

Разворачивает сохранённые состояния стека для объекта

Параметры:
* RefBase<memory::PoolInterface> const* - объект, к которому относится состояние стека
* Callback<void (uint64_t, stappler::Time, const std::vector<std::string> &)> const& - функция обработки состояний

Параметры функции обработки состояний:
* uint64_t - идентификатор ссылки
* stappler::Time - время сохранения состояния стека функций
* const std::vector<std::string> & - массив, хранящий значение стека функций на момент появления ссылки


# ::stappler::RcBase<typename>

## BRIEF

Умный указатель с подсчётом ссылок

## CONTENT

Умный указатель с подсчётом ссылок. Предназначен для использования с наследником класса `RefBase`. Также, выступает удобной прослойкой для создания таких объектов с помощью функций `alloc` и `create`.

Несмотря на то, что атомарный счётчик ссылок потокобезопасен сам по себе. умный указатель не является потокобезопасным. Использование этих указателей необходимо защищать мутексом либо изолировать, чтобы избегать состояния гонки за возможность присвоить конечное значение.

Указатель может быть пустым. В таком случае, гарантируется, что его внутренний указатель на объект будет нулевым.

В режиме отладки ссылок соотвествующие идентификаторы ссылок также храняться в указателе, чтобы облегчить отладку и поиск утечки памяти.

Параметры шаблона:
* typename Base - базовый класс, для которого работает указатель.


# ::stappler::RcBase<typename>::Type

## BRIEF

Тип хранимого внутри объекта

## CONTENT

Доступ: public

Тип хранимого внутри объекта, отрезает квалификаторы постоянности и неизменности.

# ::stappler::RcBase<typename>::Self

## BRIEF

Тип себя

## CONTENT

Доступ: public

Тип себя (создан для удобства описания операций конвертации)

# ::stappler::RcBase<typename>::Pointer

## BRIEF

Тип указателя на объект

## CONTENT

Доступ: public

Тип указателя на объект

# ::stappler::RcBase<typename>::create<class>(Args &&...)

## BRIEF

Функция создания объекта внутри указателя при двухфазной инициализации

## CONTENT

Доступ: public

Функция создания объекта внутри указателя при двухфазной инициализации. Сперва создаёт объект, затем вызывает функцию `init` объекта с переданными параметрами. Если функция `init` возвращает false - удаляет новый объект и возвращает пустой указатель. Функция `init` объекта должна поддерживать соотвествующие параметры и возвращать значение, конвертируемое в bool. 

Параметры шаблона:
* class Args - совокупный тип переданных аргументов

Параметры:
* Args &&... - аргументы для передачи (`std::forward`) в функцию `init`.

Возвращает:
* Self - новый умный указатель. Пустой в случае провала `init`.

# ::stappler::RcBase<typename>::alloc()

## BRIEF

Создаёт новый объект внутри указателя с конструктором по умолчанию

## CONTENT

Доступ: public

Создаёт новый объект внутри указателя с конструктором по умолчанию

Возвращает:
* Self - новый умный указатель с новым объектом

# ::stappler::RcBase<typename>::alloc<class>(Args &&...)

## BRIEF

Создаёт новый объект внутри указателя

## CONTENT

Доступ: public

Создаёт новый объект внутри указателя, передавая в конструктор объекта аргументы функции.

Параметры шаблона:
* class Args - совокупный тип переданных аргументов

Параметры:
* Args &&... - аргументы для передачи (`std::forward`) в конструктор объекта

Возвращает:
* Self - новый умный указатель с новым объектом

# ::stappler::RcBase<typename>::RcBase()

## BRIEF

Конструктор по умолчанию

## CONTENT

Доступ: public

Конструктор по умолчанию, создаёт пустой указатель

# ::stappler::RcBase<typename>::RcBase(stappler::nullptr_t const&)

## BRIEF

Нулевой конструктор.

## CONTENT

Доступ: public

Нулевой конструктор, создаёт пустой указатель

Параметры:
* stappler::nullptr_t const& - индикатор типа нулевого указателя


# ::stappler::RcBase<typename>::RcBase(stappler::RcBase::Pointer const&)

## BRIEF

Конструктор на основе указателя на объект

## CONTENT

Конструктор на основе указателя на объект, захватывает объект, создаёт новую ссылку на него

Доступ: public

Параметры:
* stappler::RcBase::Pointer const& - указатель на объект, может быть nullptr для создания пустого указателя


# ::stappler::RcBase<typename>::RcBase(stappler::RcBase::Self const&)

## BRIEF

Конструктор копирования

## CONTENT

Доступ: public

Конструктор копирования, копирует ссылку из другого указателя, тем самым создавая новую ссылку на объект

Параметры:
* stappler::RcBase::Self const& - другой умный указатель


# ::stappler::RcBase<typename>::RcBase(stappler::RcBase::Self&&)

## BRIEF

Конструктор перемещения

## CONTENT

Доступ: public

Конструктор перемещения, забирает ссылку у другого указателя, оставляя его пустым. Не создаёт новую ссылку.

Параметры:
* stappler::RcBase::Self&& - другой умный указатель


# ::stappler::RcBase<typename>::operator=(stappler::nullptr_t const&)

## BRIEF

Оператор зануления указателя

## CONTENT

Доступ: public

Оператор зануления указателя, удаляет текущую ссылку, если она была.

Параметры:
* stappler::nullptr_t const& - индикатор типа нулевого указателя

Возвращает:
* RcBase<Base>& - ссылка на себя

# ::stappler::RcBase<typename>::operator=<typename,typename std::enable_if<std::is_convertible<B *, Base *>({})>::type*>(RcBase<B> const&)

## BRIEF

Оператор извлечения указателя другого типа

## CONTENT

Доступ: public

Оператор извлечения указателя другого типа, создаёт новую ссылку. конвертируя указатель в свой тип. Выдаёт ошибку компиляции, если такое преобразование невозможно. Если в указателе уже была другая ссылка - она будет удалена.

Параметры шаблона:
* typename B - другой тип, на который указывает другой указатель
* typename std::enable_if<std::is_convertible<B *, Base *>({})>::type* - проверка возможности преобразования между своим и чужим типами

Параметры:
* RcBase<B> const& - другой умный указатель

Возвращает:
* RcBase<Base>& - ссылка на себя

# ::stappler::RcBase<typename>::operator=(stappler::RcBase::Pointer const&)

## BRIEF

Оператор присваивания на основе указателя.

## CONTENT

Доступ: public

Оператор присваивания на основе указателя. Удаляет текущую ссылку, если она была, и создаёт новую для объекта по указателю. Может обнулять текущий объект, если передать nullptr.

Параметры:
* stappler::RcBase::Pointer const& - простой указатель на объект, может быть nullptr

Возвращает:
* RcBase<Base>&

# ::stappler::RcBase<typename>::operator=(stappler::RcBase::Self const&)

## BRIEF

Оператор копирования

## CONTENT

Доступ: public

Оператор копирования, копирует ссылку из другого умного указателя, тем самым создавая новую ссылку. Если в указателе уже была ссылка, она удаляется.

Параметры:
* stappler::RcBase::Self const& - другой умный указатель

Возвращает:
* RcBase<Base>& - ссылка на себя

# ::stappler::RcBase<typename>::operator=(stappler::RcBase::Self&&)

## BRIEF

Оператор перемещения

## CONTENT

Доступ: public

Оператор перемещения. Перемещает ссылку из другого указателя, оставляя его пустым. Новой ссылки не создаётся. Если в указателе уже была ссылка, она удаляется.

Параметры:
* stappler::RcBase::Self&& - другой умный указатель

Возвращает:
* RcBase<Base>& - ссылка на себя

# ::stappler::RcBase<typename>::~RcBase()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор, удаляет хранимую ссылку, если она была.

# ::stappler::RcBase<typename>::set(stappler::RcBase::Pointer const&)

## BRIEF

Устанавливает новый внутренний объект

## CONTENT

Доступ: public

Устанавливает новый внутренний объект, создаёт на него новую ссылку. Удаляет предыдущую хранимую ссылку, если она была. Может обнулять текущий объект, если передать nullptr.

Параметры:
* stappler::RcBase::Pointer const& - простой указатель на новый объект, может быть nullptr.


# ::stappler::RcBase<typename>::get() const

## BRIEF

Получает внутренний объект в виде простого указателя

## CONTENT

Доступ: public

Получает внутренний объект в виде простого указателя. Если отладочный флаг вклюен, в случае отсутсвия хранимой ссылки программа будет завершена. Предполагается, что эта функция всегда должна завершаться успешно.

Возвращает:
* Base* - простой указатель на объект внутри умного указателя

# ::stappler::RcBase<typename>::operator Base*() const

## BRIEF

Автоматическая конвертация умного указателя в простой

## CONTENT

Доступ: public

Автоматическая конвертация умного указателя в простой

Возвращает:
* Base* - простой указатель на объект внутри умного указателя

# ::stappler::RcBase<typename>::operator bool() const

## BRIEF

Проверка на наличие хранимой ссылки на объект

## CONTENT

Доступ: public

Проверка на наличие хранимой ссылки на объект

Возвращает:
* bool - true если указатель хранит активную ссылку

# ::stappler::RcBase<typename>::operator RcBase<B><typename,typename std::enable_if<std::is_convertible<Base *, B *>({})>::type*>()

## BRIEF

Оператор конвертации в умный указатель другого типа

## CONTENT

Доступ: public

Оператор конвертации в умный указатель другого типа. Создаёт новый умный указатель другого типа и новую ссылку внутри него. Если типы невозможно конвертировать - вызывает ошибку компиляции.

Параметры шаблона:
* typename B - базовый тип нового указателя
* typename std::enable_if<std::is_convertible<Base *, B *>({})>::type* - проверка на возможность конвертации текущего базового типа в новый

Возвращает:
* RcBase<B> - новый умный указатель нового типа с новой ссылкой

# ::stappler::RcBase<typename>::swap(stappler::RcBase::Self&)

## BRIEF

Обменивает ссылки между двумя умными указателями

## CONTENT

Доступ: public

Обменивает ссылки между двумя умными указателями. Новых ссылок не создаётся.

Параметры:
* stappler::RcBase::Self& - другой умный указатель


# ::stappler::RcBase<typename>::operator->() const

## BRIEF

Оператор непрямого вызова метода

## CONTENT

Доступ: public

Оператор непрямого вызова метода позволяет использовать умный указатель для вызовов методов объекта аналогично обычному указателю через оператор `->`.

Возвращает:
* Base* - простой указатель на объект внутри умного указателя

# ::stappler::RcBase<typename>::cast<typename>() const

## BRIEF

Создаёт новый указатель нового типа, пытаясь динамически привести к нему исходный тип.

## CONTENT

Доступ: public

Создаёт новый указатель нового типа, пытаясь динамически привести к нему исходный тип. Использует `dynamic_cast` для приведения текущего объекта к новому типу. Если успешно, возвращает новый указатель с новой ссылкой. Если нет - возвращает пустой указатель.

Параметры шаблона:
* typename Target - целевой тип конвертации

Возвращает:
* RcBase<Target> - новый умный указатель, может быть пустым, если конвертация провалилась.

# ::stappler::RcBase<typename>::operator==(stappler::RcBase::Self const&) const

## BRIEF

Арифметический оператор сравнения указателей

## CONTENT

Доступ: public

Арифметический оператор сравнения указателей

Параметры:
* stappler::RcBase::Self const& - другой указатель

Возвращает:
* bool - true если адреса указателей равны

# ::stappler::RcBase<typename>::operator==(Base const*&) const

## BRIEF

Арифметический оператор сравнения указателей

## CONTENT

Доступ: public

Арифметический оператор сравнения указателей

Параметры:
* Base const*& - другой указатель

Возвращает:
* bool - true если адреса указателей равны

# ::stappler::RcBase<typename>::operator==(typename std::remove_const<Base>::type*) const

## BRIEF

Арифметический оператор сравнения указателей

## CONTENT

Доступ: public

Арифметический оператор сравнения указателей

Параметры:
* typename std::remove_const<Base>::type* - другой указатель

Возвращает:
* bool - true если адреса указателей равны

# ::stappler::RcBase<typename>::operator==(std::nullptr_t const) const

## BRIEF

Арифметический оператор сравнения указателей

## CONTENT

Доступ: public

Арифметический оператор сравнения указателей

Параметры:
* std::nullptr_t const - нулевой указатель

Возвращает:
* bool - true если текущий указатель - нулевой

# ::stappler::RcBase<typename>::operator!=(stappler::RcBase::Self const&) const

## BRIEF

Арифметический оператор сравнения указателей

## CONTENT

Доступ: public

Арифметический оператор сравнения указателей

Параметры:
* stappler::RcBase::Self const& - другой указатель

Возвращает:
* bool - true если адреса указателей НЕ равны

# ::stappler::RcBase<typename>::operator!=(Base const*&) const

## BRIEF

Арифметический оператор сравнения указателей

## CONTENT

Доступ: public

Арифметический оператор сравнения указателей

Параметры:
* Base const*& - другой указатель

Возвращает:
* bool - true если адреса указателей НЕ равны

# ::stappler::RcBase<typename>::operator!=(typename std::remove_const<Base>::type*) const

## BRIEF

Арифметический оператор сравнения указателей

## CONTENT

Доступ: public

Арифметический оператор сравнения указателей

Параметры:
* typename std::remove_const<Base>::type* - другой указатель

Возвращает:
* bool - true если адреса указателей НЕ равны

# ::stappler::RcBase<typename>::operator!=(std::nullptr_t const) const

## BRIEF

Арифметический оператор сравнения указателей

## CONTENT

Арифметический оператор сравнения указателей

Доступ: public

Параметры:
* std::nullptr_t const - нулевой указатель

Возвращает:
* bool - true если текущий указатель не нулевой

# ::stappler::RcBase<typename>::operator>(stappler::RcBase::Self const&) const

## BRIEF

Арифметический оператор сравнения указателей

## CONTENT

Доступ: public

Арифметический оператор сравнения указателей

Параметры:
* stappler::RcBase::Self const& - другой указатель

Возвращает:
* bool - true если текущий указатель больше другого

# ::stappler::RcBase<typename>::operator>(Base const*) const

## BRIEF

Арифметический оператор сравнения указателей

## CONTENT

Арифметический оператор сравнения указателей

Доступ: public

Параметры:
* Base const* - другой указатель

Возвращает:
* bool - true если текущий указатель больше другого

# ::stappler::RcBase<typename>::operator>(typename std::remove_const<Base>::type*) const

## BRIEF

Арифметический оператор сравнения указателей

## CONTENT

Арифметический оператор сравнения указателей

Доступ: public

Параметры:
* typename std::remove_const<Base>::type* - другой указатель

Возвращает:
* bool - true если текущий указатель больше другого

# ::stappler::RcBase<typename>::operator>(std::nullptr_t const) const

## BRIEF

Арифметический оператор сравнения указателей

## CONTENT

Доступ: public

Арифметический оператор сравнения указателей

Параметры:
* std::nullptr_t const - нулевой указатель

Возвращает:
* bool - true если текущий указатель больше нуля

# ::stappler::RcBase<typename>::operator<(stappler::RcBase::Self const&) const

## BRIEF

Арифметический оператор сравнения указателей

## CONTENT

Доступ: public

Арифметический оператор сравнения указателей

Параметры:
* stappler::RcBase::Self const& - другой указатель

Возвращает:
* bool - true если текущий указатель меньше другого

# ::stappler::RcBase<typename>::operator<(Base const*) const

## BRIEF

Арифметический оператор сравнения указателей

## CONTENT

Арифметический оператор сравнения указателей

Доступ: public

Параметры:
* Base const* - другой указатель

Возвращает:
* bool - true если текущий указатель меньше другого

# ::stappler::RcBase<typename>::operator<(typename std::remove_const<Base>::type*) const

## BRIEF

Арифметический оператор сравнения указателей

## CONTENT

Доступ: public

Арифметический оператор сравнения указателей

Параметры:
* typename std::remove_const<Base>::type* - другой указатель

Возвращает:
* bool - true если текущий указатель меньше другого

# ::stappler::RcBase<typename>::operator<(std::nullptr_t const) const

## BRIEF

Арифметический оператор сравнения указателей

## CONTENT

Доступ: public

Арифметический оператор сравнения указателей

Параметры:
* std::nullptr_t const - нулевой указатель

Возвращает:
* bool - true если текущий указатель меньше нуля

# ::stappler::RcBase<typename>::operator>=(stappler::RcBase::Self const&) const

## BRIEF

Арифметический оператор сравнения указателей

## CONTENT

Доступ: public

Арифметический оператор сравнения указателей

Параметры:
* stappler::RcBase::Self const& - другой указатель

Возвращает:
* bool - true если текущий указатель больше либо равен другому

# ::stappler::RcBase<typename>::operator>=(Base const*) const

## BRIEF

Арифметический оператор сравнения указателей

## CONTENT

Доступ: public

Арифметический оператор сравнения указателей

Параметры:
* Base const* - другой указатель

Возвращает:
* bool - true если текущий указатель больше либо равен другому

# ::stappler::RcBase<typename>::operator>=(typename std::remove_const<Base>::type*) const

## BRIEF

Арифметический оператор сравнения указателей

## CONTENT

Доступ: public

Арифметический оператор сравнения указателей

Параметры:
* typename std::remove_const<Base>::type* - другой указатель

Возвращает:
* bool - true если текущий указатель больше либо равен другому

# ::stappler::RcBase<typename>::operator>=(std::nullptr_t const) const

## BRIEF

Арифметический оператор сравнения указателей

## CONTENT

Доступ: public

Арифметический оператор сравнения указателей

Параметры:
* std::nullptr_t const - нулевой указатель

Возвращает:
* bool - true если текущий указатель больше либо равен нулю

# ::stappler::RcBase<typename>::operator<=(stappler::RcBase::Self const&) const

## BRIEF

Арифметический оператор сравнения указателей

## CONTENT

Доступ: public

Арифметический оператор сравнения указателей

Параметры:
* stappler::RcBase::Self const& - другой указатель

Возвращает:
* bool - true если текущий указатель меньше либо равен другому

# ::stappler::RcBase<typename>::operator<=(Base const*) const

## BRIEF

Арифметический оператор сравнения указателей

## CONTENT

Доступ: public

Арифметический оператор сравнения указателей

Параметры:
* Base const* - другой указатель

Возвращает:
* bool - true если текущий указатель меньше либо равен другому

# ::stappler::RcBase<typename>::operator<=(typename std::remove_const<Base>::type*) const

## BRIEF

Арифметический оператор сравнения указателей

## CONTENT

Доступ: public

Арифметический оператор сравнения указателей

Параметры:
* typename std::remove_const<Base>::type* - другой указатель

Возвращает:
* bool - true если текущий указатель меньше либо равен другому

# ::stappler::RcBase<typename>::operator<=(std::nullptr_t const) const

## BRIEF

Арифметический оператор сравнения указателей

## CONTENT

Доступ: public

Арифметический оператор сравнения указателей

Параметры:
* std::nullptr_t const - нулевой указатель

Возвращает:
* bool - true если текущий указатель меньше либо равен нулю

# ::stappler::RcBase<typename>::doRetain()

## BRIEF

Создаёт новую ссылку

## CONTENT

Доступ: private

Создаёт новую ссылку для умного указателя

# ::stappler::RcBase<typename>::doRelease()

## BRIEF

Удаляет ранее созданную ссылку

## CONTENT

Доступ: private

Удаляет ранее созданную ссылку

# ::stappler::RcBase<typename>::doSwap(stappler::RcBase::Pointer)

## BRIEF

Заменяет хранимый указатель на объект на новый

## CONTENT

Доступ: private

Заменяет хранимый указатель на объект на новый, создавая новую ссылку и удаляя старую при необходимости

Параметры:
* stappler::RcBase::Pointer - новый указатель на объект

Возвращает:
* Pointer

# ::stappler::RcBase<typename>::RcBase(stappler::RcBase::Pointer,bool)

## BRIEF

Небезопасный конструктор захвата ссылки

## CONTENT

Небезопасный конструктор захвата ссылки, создаёт новый умный указатель не создавая ссылок. Не может использоваться извне указателя.

Доступ: private

Параметры:
* stappler::RcBase::Pointer - новый внутренний указатель
* bool - идентификатор использования небезопасного конструктора, значение игнорируется


# ::stappler::RcBase<typename>::_ptr

## BRIEF

Вннутренний указатель на объект

## CONTENT

Доступ: private

Тип: Pointer

Вннутренний указатель на объект

# ::stappler::Rc<typename>

## BRIEF

Сокращение для RcBase<T>

## CONTENT

Сокращение для RcBase<T>

Параметры шаблона:
* typename T - тип хранимого объекта


# ::stappler::mem_std::Ref

## BRIEF

Сокращение RefBase для использования со стандартным интерфейсом памяти.

## CONTENT

Сокращение RefBase для использования со стандартным интерфейсом памяти.

# ::stappler::mem_pool::Ref

## BRIEF

Сокращение RefBase для использования со пуловым интерфейсом памяти.

## CONTENT

Сокращение RefBase для использования со пуловым интерфейсом памяти.
