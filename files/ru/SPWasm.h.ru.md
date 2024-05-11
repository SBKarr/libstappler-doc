Title: SPWasm.h


# CORE_WASM_SPWASM_H_

## BRIEF

Заголовок интерфейса WebAssembly

## CONTENT

Заголовок интерфейса WebAssembly

Для взаимодействия используется ABI WASI+WIT


# ::stappler::wasm::ListOutput

## BRIEF

Структура вывода списка объектов

## CONTENT

Структура вывода списка объектов

# ::stappler::wasm::ListOutput::ptr

## BRIEF

Указатель на первый объект в wasm

## CONTENT

Указатель на первый объект в wasm

Тип: uint32_t


# ::stappler::wasm::ListOutput::len

## BRIEF

Число объектов в списке

## CONTENT

Число объектов в списке

Тип: uint32_t


# ::stappler::wasm::ListOutput::setData<typename>(stappler::wasm::ModuleInstance*,T const*,size_t)

## BRIEF

Записывает данные в список

## CONTENT

Записывает данные в список

Параметры шаблона:
* typename T - тип объекта

Параметры:
* stappler::wasm::ModuleInstance*
* T const* - массив объектов
* size_t - количество объектов


# ::stappler::wasm::Runtime

## BRIEF

Контекст запуска wasm

## CONTENT

Контекст запуска wasm. Синглтон.

# ::stappler::wasm::Runtime::getInstance()

## BRIEF

Получает текущий контекст запуска

## CONTENT

Доступ: public

Получает текущий контекст запуска

Возвращает:
* stappler::wasm::Runtime*

# ::stappler::wasm::Runtime::~Runtime()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор

# ::stappler::wasm::Runtime::Runtime()

## BRIEF

Конструктор

## CONTENT

Доступ: protected

Конструктор

# ::stappler::wasm::Runtime::_data

## BRIEF

Данные интерпретатора

## CONTENT

Доступ: protected

Данные интерпретатора

Тип: stappler::wasm::Runtime::Data*


# ::stappler::wasm::NativeModule

## BRIEF

Структура внешнего модуля wasm

## CONTENT

Структура внешнего модуля wasm

# ::stappler::wasm::NativeModule::NativeModule(stappler::StringView,NativeSymbol*,size_t)

## BRIEF

Создаёт внешний модуль

## CONTENT

Создаёт внешний модуль

Параметры:
* stappler::StringView - название модуля
* NativeSymbol* - указатель на первую функцию в списке
* size_t - число функций в списке


# ::stappler::wasm::NativeModule::~NativeModule()

## BRIEF

Деструктор

## CONTENT

Деструктор

# ::stappler::wasm::NativeModule::name

## BRIEF

Имя модуля

## CONTENT

Имя модуля

Тип: stappler::mem_std::String


# ::stappler::wasm::NativeModule::symbols

## BRIEF

Экспортируемые символы

## CONTENT

Экспортируемые символы

Тип: NativeSymbol*


# ::stappler::wasm::NativeModule::symbolsCount

## BRIEF

Число символов

## CONTENT

Число символов

Тип: size_t


# ::stappler::wasm::Module

## BRIEF

Модуль wasm

## CONTENT

Модуль wasm

Базовые классы:
* Ref


# ::stappler::wasm::Module::~Module()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор


# ::stappler::wasm::Module::init(stappler::StringView,stappler::BytesView)

## BRIEF

Создаёт модуль из блока данных

## CONTENT

Доступ: public

Создаёт модуль из блока данных

Параметры:
* stappler::StringView - имя модуля
* stappler::BytesView

Возвращает:
* bool - true если успешно

# ::stappler::wasm::Module::init(stappler::StringView,stappler::mem_std::Bytes&&)

## BRIEF

Создаёт модуль из блока данных

## CONTENT

Доступ: public

Создаёт модуль из блока данных

Параметры:
* stappler::StringView - имя модуля
* stappler::mem_std::Bytes&&

Возвращает:
* bool - true если успешно

# ::stappler::wasm::Module::init(stappler::StringView,stappler::FilePath)

## BRIEF

Создаёт модуль из файла

## CONTENT

Доступ: public

Создаёт модуль из файла

Параметры:
* stappler::StringView - имя модуля
* stappler::FilePath

Возвращает:
* bool - true если успешно

# ::stappler::wasm::Module::getName() const

## BRIEF

Возвращает имя модуля

## CONTENT

Доступ: public

Возвращает имя модуля

Возвращает:
* stappler::StringView

# ::stappler::wasm::Module::getModule() const

## BRIEF

Возвращает модуль интерпретатора

## CONTENT

Доступ: public

Возвращает модуль интерпретатора

Возвращает:
* wasm_module_t

# ::stappler::wasm::Module::_name

## BRIEF

Имя модуля

## CONTENT

Доступ: protected

Имя модуля

Тип: stappler::mem_std::String


# ::stappler::wasm::Module::_data

## BRIEF

Данные модуля

## CONTENT

Доступ: protected

Данные модуля

Тип: stappler::mem_std::Bytes


# ::stappler::wasm::Module::_runtime

## BRIEF

Контекст

## CONTENT

Доступ: protected

Контекст

Тип: stappler::wasm::Runtime*


# ::stappler::wasm::Module::_module

## BRIEF

Модуль интерпретатора

## CONTENT

Доступ: protected

Модуль интерпретатора

Тип: wasm_module_t


# ::stappler::wasm::ModuleInstance

## BRIEF

Класс реализации модуля

## CONTENT

Класс реализации модуля

Базовые классы:
* Ref


# ::stappler::wasm::ModuleInstance::InvalidHandle

## BRIEF

Идентификатор неверного внешнего объекта

## CONTENT

Доступ: public

Идентификатор неверного внешнего объекта

Тип: uint32_t const


# ::stappler::wasm::ModuleInstance::~ModuleInstance()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор


# ::stappler::wasm::ModuleInstance::init(stappler::wasm::Module*,uint32_t,uint32_t)

## BRIEF

Создаёт новую реализацию модуля

## CONTENT

Доступ: public

Создаёт новую реализацию модуля

Параметры:
* stappler::wasm::Module* - исходный модуль
* uint32_t - размер стека вызовов
* uint32_t - размер кучи по умолчанию (не используется для WASI)

Возвращает:
* bool - true если успешно

# ::stappler::wasm::ModuleInstance::getModule() const

## BRIEF

Возвращает модуль

## CONTENT

Доступ: public

Возвращает модуль

Возвращает:
* stappler::wasm::Module*

# ::stappler::wasm::ModuleInstance::getInstance() const

## BRIEF

Возврашщает объект интерпретатора

## CONTENT

Доступ: public

Возврашщает объект интерпретатора

Возвращает:
* wasm_module_inst_t

# ::stappler::wasm::ModuleInstance::appToNative(uint32_t) const

## BRIEF

Конвертирует указатель wasm в указатель машины

## CONTENT

Доступ: public

Конвертирует указатель wasm в указатель машины. Указатели wasm представлены 32-битным смещением во внутренней памяти.

Параметры:
* uint32_t

Возвращает:
* void* - nullptr при ошибке

# ::stappler::wasm::ModuleInstance::nativeToApp(void*) const

## BRIEF

Конвертирует внешний указатель в указатель wasm

## CONTENT

Доступ: public

Конвертирует внешний указатель в указатель wasm. Указатели wasm представлены 32-битным смещением во внутренней памяти.

Параметры:
* void*

Возвращает:
* uint32_t - 0 при ошибке

# ::stappler::wasm::ModuleInstance::allocate(uint32_t,void**)

## BRIEF

Распределяет память внутри контейнера wasm

## CONTENT

Доступ: public

Распределяет память внутри контейнера wasm

Параметры:
* uint32_t - размер памяти
* void** - указатель для возврата внешнего указателя на новую память

Возвращает:
* uint32_t - указатель в wasm

# ::stappler::wasm::ModuleInstance::reallocate(uint32_t,uint32_t,void**)

## BRIEF

Перераспределяет память внутри контейнера wasm

## CONTENT

Доступ: public

Перераспределяет память внутри контейнера wasm

Параметры:
* uint32_t - исходный указатель
* uint32_t - размер памяти
* void** - указатель для возврата внешнего указателя на новую память

Возвращает:
* uint32_t - указатель в wasm

# ::stappler::wasm::ModuleInstance::free(uint32_t)

## BRIEF

Освобождает память в контейнере wasm

## CONTENT

Доступ: public

Освобождает память в контейнере wasm

Параметры:
* uint32_t - указатель в wasm


# ::stappler::wasm::ModuleInstance::lookup(stappler::StringView)

## BRIEF

Ищет функцию в wasm по имени

## CONTENT

Доступ: public

Ищет функцию в wasm по имени

Параметры:
* stappler::StringView

Возвращает:
* Rc<stappler::wasm::ExecFunction>

# ::stappler::wasm::ModuleInstance::addHandle<typename>(T*,Function<void ()>&&)

## BRIEF

Создаёт внешний объект в контейнере wasm

## CONTENT

Доступ: public

Создаёт внешний объект в контейнере wasm. Тип объекта контролируется системой.

Параметры шаблона:
* typename T - тип объекта

Параметры:
* T* - указатель на объект
* Function<void ()>&& - функция уничтожения объекта

Возвращает:
* uint32_t - идентификатор объекта в WASM. Всегда положителен.

# ::stappler::wasm::ModuleInstance::getHandle<typename>(T*) const

## BRIEF

Получает ранее созданный объект в контейнере wasm по указателю на внешний объект

## CONTENT

Доступ: public

Получает ранее созданный объект в контейнере wasm по указателю на внешний объект. Для неверно указанного типа вернёт InvalidHandle.

Параметры шаблона:
* typename T - тип объекта

Параметры:
* T* - указатель на объект

Возвращает:
* uint32_t - идентификатор или InvalidHandle

# ::stappler::wasm::ModuleInstance::getObject<typename>(uint32_t) const

## BRIEF

Получает внешний объект по идентификатору

## CONTENT

Доступ: public

Получает внешний объект по идентификатору. Для неверно указанного типа вернёт nullptr.

Параметры шаблона:
* typename T - тип объекта

Параметры:
* uint32_t - объект wasm

Возвращает:
* T* - внешний объект или nullptr

# ::stappler::wasm::ModuleInstance::getHandle(void*) const

## BRIEF

Получает ранее созданный объект в контейнере wasm по указателю на внешний объект

## CONTENT

Доступ: public

Получает ранее созданный объект в контейнере wasm по указателю на внешний объект

Доступ: public

Параметры:
* void*

Возвращает:
* uint32_t - идентификатор или InvalidHandle

# ::stappler::wasm::ModuleInstance::removeHandle(uint32_t)

## BRIEF

Удаляет объект по идентификатору wasm

## CONTENT

Доступ: public

Удаляет объект по идентификатору wasm

Параметры:
* uint32_t


# ::stappler::wasm::ModuleInstance::removeObject(void*)

## BRIEF

Удаляет объект по указателю

## CONTENT

Доступ: public

Удаляет объект по указателю

Параметры:
* void*


# ::stappler::wasm::ModuleInstance::addHandleObject(void*,std::type_index&&,Function<void ()>&&)

## BRIEF

Добавляет внешний объект

## CONTENT

Доступ: protected

Добавляет внешний объект

Параметры:
* void*
* std::type_index&&
* Function<void ()>&&

Возвращает:
* uint32_t

# ::stappler::wasm::ModuleInstance::getHandleObject(void*,std::type_index const&) const

## BRIEF

Получает внешний объект

## CONTENT

Доступ: protected

Получает внешний объект

Параметры:
* void*
* std::type_index const&

Возвращает:
* uint32_t

# ::stappler::wasm::ModuleInstance::getObjectHandle(uint32_t,std::type_index const&) const

## BRIEF

Получает внешний объект

## CONTENT

Доступ: protected

Получает внешний объект

Параметры:
* uint32_t
* std::type_index const&

Возвращает:
* void*

# ::stappler::wasm::ModuleInstance::HandleSlot

## BRIEF

Структура для хранения внешнего объекта

## CONTENT

Доступ: protected

Структура для хранения внешнего объекта

# ::stappler::wasm::ModuleInstance::HandleSlot::object

## BRIEF

Указатель на объект

## CONTENT

Указатель на объект

Тип: void*


# ::stappler::wasm::ModuleInstance::HandleSlot::type

## BRIEF

Тип объекта

## CONTENT

Тип объекта

Тип: std::type_index


# ::stappler::wasm::ModuleInstance::HandleSlot::index

## BRIEF

Идентификатор объекта

## CONTENT

Идентификатор объекта

Тип: uint32_t


# ::stappler::wasm::ModuleInstance::HandleSlot::nextIndex

## BRIEF

Следующий свободный идентификатор

## CONTENT

Следующий свободный идентификатор

Тип: uint32_t


# ::stappler::wasm::ModuleInstance::HandleSlot::destructor

## BRIEF

Функция-деструктор

## CONTENT

Функция-деструктор

Тип: Function<void ()>


# ::stappler::wasm::ModuleInstance::_module

## BRIEF

Исходный модуль

## CONTENT

Доступ: protected

Исходный модуль

Тип: Rc<stappler::wasm::Module>


# ::stappler::wasm::ModuleInstance::_inst

## BRIEF

Объект интерпретатора

## CONTENT

Доступ: protected

Объект интерпретатора

Тип: wasm_module_inst_t


# ::stappler::wasm::ModuleInstance::_finalize

## BRIEF

Функция финализации, если найдена

## CONTENT

Доступ: protected

Функция финализации, если найдена

Тип: wasm_function_inst_t


# ::stappler::wasm::ModuleInstance::_realloc

## BRIEF

Функция перераспределния памяти, если найдена

## CONTENT

Доступ: protected

Функция перераспределния памяти, если найдена

Тип: wasm_function_inst_t


# ::stappler::wasm::ModuleInstance::_selfHandle

## BRIEF

Идентификатор себя как внешнего объекта wasm

## CONTENT

Доступ: protected

Идентификатор себя как внешнего объекта wasm

Тип: uint32_t


# ::stappler::wasm::ModuleInstance::_freeHandleSlot

## BRIEF

Следующий свободный идентификатор внешнего объекта wasm

## CONTENT

Доступ: protected

Следующий свободный идентификатор внешнего объекта wasm

Тип: uint32_t


# ::stappler::wasm::ModuleInstance::_handles

## BRIEF

Внешние объекты

## CONTENT

Доступ: protected

Внешние объекты

Тип: Vector<stappler::wasm::ModuleInstance::HandleSlot>


# ::stappler::wasm::ModuleInstance::_objects

## BRIEF

Идентификаторы для указателей

## CONTENT

Доступ: protected

Идентификаторы для указателей

Тип: HashMap<void *, uint32_t>


# ::stappler::wasm::ExecEnv

## BRIEF

Окружение для исполнения функций

## CONTENT

Окружение для исполнения функций. Для реализации модуля может существовать несколько таких окружений, разделяющих одно состояние модуля, но имеюющих разные исполняемые стеки.

Базовые классы:
* Ref


# ::stappler::wasm::ExecEnv::get(wasm_exec_env_t)

## BRIEF

Получает окружение из объекта интерпретатора

## CONTENT

Доступ: public

Получает окружение из объекта интерпретатора

Параметры:
* wasm_exec_env_t

Возвращает:
* stappler::wasm::ExecEnv*

# ::stappler::wasm::ExecEnv::~ExecEnv()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор

# ::stappler::wasm::ExecEnv::init(stappler::wasm::ModuleInstance*,uint32_t)

## BRIEF

Создаёт новое окружение для исполнения

## CONTENT

Доступ: public

Создаёт новое окружение для исполнения

Параметры:
* stappler::wasm::ModuleInstance* - модуль
* uint32_t - размер стека

Возвращает:
* bool - true если успешно

# ::stappler::wasm::ExecEnv::init(stappler::wasm::ModuleInstance*,wasm_exec_env_t)

## BRIEF

Запускает встроенное системное окружение реализации модуля

## CONTENT

Доступ: public

Запускает встроенное системное окружение реализации модуля

Параметры:
* stappler::wasm::ModuleInstance*
* wasm_exec_env_t - объект интерпретатора

Возвращает:
* bool - true если успешно

# ::stappler::wasm::ExecEnv::getEnv() const

## BRIEF

Возвращает объект интерпретатора

## CONTENT

Доступ: public

Возвращает объект интерпретатора

Возвращает:
* wasm_exec_env_t

# ::stappler::wasm::ExecEnv::getInstance() const

## BRIEF

Возвращает реализацию модуля

## CONTENT

Доступ: public

Возвращает реализацию модуля

Возвращает:
* stappler::wasm::ModuleInstance*

# ::stappler::wasm::ExecEnv::appToNative<typename>(uint32_t) const

## BRIEF

Конвертирует указатель wasm во внешний указатель 

## CONTENT

Доступ: public

Конвертирует указатель wasm во внешний указатель 

Параметры шаблона:
* typename T - тип указателя

Параметры:
* uint32_t

Возвращает:
* T* - nullptr при ошибке

# ::stappler::wasm::ExecEnv::nativeToApp(void*) const

## BRIEF

Конвертирует внешний указатешь в указатель wasm

## CONTENT

Доступ: public

Конвертирует внешний указатешь в указатель wasm

Параметры:
* void*

Возвращает:
* uint32_t - 0 при ошибке

# ::stappler::wasm::ExecEnv::allocate<typename>(uint32_t,T**)

## BRIEF

Распределяет новый объект в памяти wasm

## CONTENT

Доступ: public

Распределяет новый объект в памяти wasm

Параметры шаблона:
* typename T - тип объекта

Параметры:
* uint32_t - размер памяти
* T** - указатель для возврата указателя

Возвращает:
* uint32_t - указатель wasm

# ::stappler::wasm::ExecEnv::free(uint32_t)

## BRIEF

Освобождает память wasm

## CONTENT

Доступ: public

Освобождает память wasm

Параметры:
* uint32_t - указатель wasm


# ::stappler::wasm::ExecEnv::callIndirect(uint32_t,uint32_t,uint32_t[])

## BRIEF

Вызывает функцию по её индексу

## CONTENT

Доступ: public

Вызывает функцию по её индексу. В качестве аргументов используются слоты по 32 бита. Для передачи 64-битных значений используется запись в два последовательных слота. Для передачи 128-битных значений - 4 слота.

Результат записывается в первые 1-4 слота в зависимости от размера

Параметры:
* uint32_t - индекс функции
* uint32_t - число слотов аргументов
* uint32_t[] - аргументы для вызова

Возвращает:
* bool - true если успешно

# ::stappler::wasm::ExecEnv::_instance

## BRIEF

Реализация модуля

## CONTENT

Доступ: protected

Реализация модуля

Тип: Rc<stappler::wasm::ModuleInstance>


# ::stappler::wasm::ExecEnv::_env

## BRIEF

Объект интерпретатора

## CONTENT

Доступ: protected

Объект интерпретатора

Тип: wasm_exec_env_t


# ::stappler::wasm::ExecEnv::_isSingleton

## BRIEF

Является ли окружение системным синглтоном

## CONTENT

Доступ: protected

Является ли окружение системным синглтоном

Тип: bool


# ::stappler::wasm::ExecFunction

## BRIEF

Тип функции в wasm

## CONTENT

Тип функции в wasm

Базовые классы:
* Ref


# ::stappler::wasm::ExecFunction::StaticArgumentsLimit

## BRIEF

Число статически распознаваемых типов аргументов

## CONTENT

Доступ: public

Число статически распознаваемых типов аргументов

Тип: uint32_t const


# ::stappler::wasm::ExecFunction::StaticResultsLimit

## BRIEF

Число статически распознаваемых типов результата

## CONTENT

Доступ: public

Число статически распознаваемых типов результата

Тип: uint32_t const


# ::stappler::wasm::ExecFunction::~ExecFunction()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор

# ::stappler::wasm::ExecFunction::init(stappler::wasm::ModuleInstance*,stappler::StringView)

## BRIEF

Загружает функцию из модуля по названию

## CONTENT

Доступ: public

Загружает функцию из модуля по названию

Параметры:
* stappler::wasm::ModuleInstance*
* stappler::StringView

Возвращает:
* bool - true при успехе

# ::stappler::wasm::ExecFunction::getName() const

## BRIEF

Возвращает полное имя найденной функции

## CONTENT

Доступ: public

Возвращает полное имя найденной функции

Возвращает:
* stappler::StringView

# ::stappler::wasm::ExecFunction::getFunc() const

## BRIEF

Возвращает функцию интерпретатора

## CONTENT

Доступ: public

Возвращает функцию интерпретатора

Возвращает:
* wasm_function_inst_t

# ::stappler::wasm::ExecFunction::getNumArgs() const

## BRIEF

Возвращает число аргументов

## CONTENT

Доступ: public

Возвращает число аргументов

Возвращает:
* uint32_t

# ::stappler::wasm::ExecFunction::getNumResults() const

## BRIEF

Возвращает число результатов

## CONTENT

Доступ: public

Возвращает число результатов

Возвращает:
* uint32_t

# ::stappler::wasm::ExecFunction::getArgs() const

## BRIEF

Возвращает типы аргументов

## CONTENT

Доступ: public

Возвращает типы аргументов. Если аргументов больше, чем статический предел - возвращает только первые аргументы.

Возвращает:
* SpanView<wasm_valkind_t>

# ::stappler::wasm::ExecFunction::getResults() const

## BRIEF

Возвращает типы результатов

## CONTENT

Доступ: public

Возвращает типы результатов. Если результатов больше, чем статический предел - возвращает только первые результаты.

Возвращает:
* SpanView<wasm_valkind_t>

# ::stappler::wasm::ExecFunction::getArgsFull() const

## BRIEF

Возвращает полный список аргументов для случая, когда и больше статического предела

## CONTENT

Доступ: public

Возвращает полный список аргументов для случая, когда и больше статического предела

Возвращает:
* Vector<wasm_valkind_t>

# ::stappler::wasm::ExecFunction::getResultsFull() const

## BRIEF

Возвращает полный список результатов для случая, когда и больше статического предела

## CONTENT

Доступ: public

Возвращает полный список результатов для случая, когда и больше статического предела

Возвращает:
* Vector<wasm_valkind_t>

# ::stappler::wasm::ExecFunction::call(stappler::wasm::ExecEnv*,SpanView<wasm_val_t>,VectorAdapter<wasm_val_t>*) const

## BRIEF

Вызывает функцию

## CONTENT

Доступ: public

Вызывает функцию

Параметры:
* stappler::wasm::ExecEnv* - окружение, в стеке которого вызывать
* SpanView<wasm_val_t> - список аргументов
* VectorAdapter<wasm_val_t>* - (опчионально) вектор для возврата результатов

Возвращает:
* bool - true если успешно

# ::stappler::wasm::ExecFunction::call1(stappler::wasm::ExecEnv*,SpanView<wasm_val_t>) const

## BRIEF

Вызывает функцию, возвращая один результат

## CONTENT

Доступ: public

Вызывает функцию, возвращая один результат

Параметры:
* stappler::wasm::ExecEnv*- окружение, в стеке которого вызывать
* SpanView<wasm_val_t> - список аргументов

Возвращает:
* wasm_val_t - результат

# ::stappler::wasm::ExecFunction::_name

## BRIEF

Полное имя функции

## CONTENT

Доступ: protected

Полное имя функции

Тип: stappler::mem_std::String


# ::stappler::wasm::ExecFunction::_func

## BRIEF

Функция в интерпретаторе

## CONTENT

Доступ: protected

Функция в интерпретаторе

Тип: wasm_function_inst_t


# ::stappler::wasm::ExecFunction::_inst

## BRIEF

реализация модуля, из которого взята функция

## CONTENT

Доступ: protected

реализация модуля, из которого взята функция

Тип: Rc<stappler::wasm::ModuleInstance>


# ::stappler::wasm::ExecFunction::_nArgs

## BRIEF

Число аргументов

## CONTENT

Доступ: protected

Число аргументов

Тип: uint32_t


# ::stappler::wasm::ExecFunction::_nResults

## BRIEF

Число результатов

## CONTENT

Доступ: protected

Число результатов

Тип: uint32_t


# ::stappler::wasm::ExecFunction::_resultTypesStatic

## BRIEF

Статический массив типов результатов

## CONTENT

Доступ: protected

Статический массив типов результатов

Тип: wasm_valkind_t[4]


# ::stappler::wasm::ExecFunction::_argTypesStatic

## BRIEF

Статический массив типов аргументов

## CONTENT

Доступ: protected

Статический массив типов аргументов

Тип: wasm_valkind_t[28]


# ::stappler::wasm::MakeValue(uint32_t)

## BRIEF

Функция для создания значения wasm для аргумента

## CONTENT

Функция для создания значения wasm для аргумента

Параметры:
* uint32_t

Возвращает:
* wasm_val_t

# ::stappler::wasm::MakeValue(int32_t)

## BRIEF

Функция для создания значения wasm для аргумента

## CONTENT

Функция для создания значения wasm для аргумента

Параметры:
* int32_t

Возвращает:
* wasm_val_t

# ::stappler::wasm::MakeValue(uint64_t)

## BRIEF

Функция для создания значения wasm для аргумента

## CONTENT

Функция для создания значения wasm для аргумента

Параметры:
* uint64_t

Возвращает:
* wasm_val_t

# ::stappler::wasm::MakeValue(int64_t)

## BRIEF

Функция для создания значения wasm для аргумента

## CONTENT

Функция для создания значения wasm для аргумента

Параметры:
* int64_t

Возвращает:
* wasm_val_t

# ::stappler::wasm::MakeValue(float)

## BRIEF

Функция для создания значения wasm для аргумента

## CONTENT

Функция для создания значения wasm для аргумента

Параметры:
* float

Возвращает:
* wasm_val_t

# ::stappler::wasm::MakeValue(double)

## BRIEF

Функция для создания значения wasm для аргумента

## CONTENT

Функция для создания значения wasm для аргумента

Параметры:
* double

Возвращает:
* wasm_val_t
