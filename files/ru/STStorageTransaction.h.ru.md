Title: STStorageTransaction.h


# STAPPLER_DB_STSTORAGETRANSACTION_H_

## BRIEF

Заголовок транзакционных операций

## CONTENT

Заголовок транзакционных операций


# ::stappler::db::AccessRoleId

## BRIEF

Идентификаторы ролей доступа

## CONTENT

Идентификаторы ролей доступа. Определено 11 пользвательских ролей доступа, и 5 специальных с заранее определёнными эффектами. Тем не менее, для предопределённых ролей (кроме системы) можно менять поведение.

Значения:
* Nobody - неизвестный пользователь
* Authorized - известный пользователь
* UserDefined1
* UserDefined2
* UserDefined3
* UserDefined4
* UserDefined5
* UserDefined6
* UserDefined7
* UserDefined8
* UserDefined9
* UserDefined10
* UserDefined11
* Admin - администратор системы
* System - действия самой системы. Имеет не переопределяемые абсолютные полномочия
* Default - действия по умолчанию, выполняемые для всех, кроме системы
* Max


# ::stappler::db::Transaction

## BRIEF

Структура транзакции

## CONTENT

Структура транзакции. Транзакция выполняет операции в БД, реализует контроль доступа для операций и возврата результата.

Базовые классы:
* AllocBase


# ::stappler::db::Transaction::Op

## BRIEF

Операция БД

## CONTENT

Доступ: public

Операция БД

Значения:
* None
* Id - получение идентификатора объекта
* Select
* Count
* Remove
* Create
* Save - чтение-обновление-запись
* Patch - атомарная запись
* FieldGet
* FieldSet
* FieldAppend
* FieldClear
* FieldCount
* Delta - дельта-запрос
* DeltaView - дельта-запрос к полю отображения
* RemoveFromView
* AddToView
* Max


# ::stappler::db::Transaction::Data

## BRIEF

Данные транзакции

## CONTENT

Доступ: public

Данные транзакции

Базовые классы:
* AllocPool


# ::stappler::db::Transaction::Data::adapter

## BRIEF

Адаптер БД

## CONTENT

Адаптер БД

Тип: stappler::db::Adapter


# ::stappler::db::Transaction::Data::pool

## BRIEF

Пул памяти

## CONTENT

Пул памяти

Тип: stappler::mempool::base::pool_t*


# ::stappler::db::Transaction::Data::data

## BRIEF

Дополнительные данные

## CONTENT

Дополнительные данные

Тип: Map<stappler::mem_pool::String, stappler::mem_pool::Value>


# ::stappler::db::Transaction::Data::status

## BRIEF

Статус транзакции

## CONTENT

Статус транзакции

Тип: int


# ::stappler::db::Transaction::Data::objects

## BRIEF

Данные известных объектов

## CONTENT

Данные известных объектов

Тип: Map<int64_t, stappler::mem_pool::Value>


# ::stappler::db::Transaction::Data::role

## BRIEF

Текущая роль исполнителя транзакции

## CONTENT

Текущая роль исполнителя транзакции

Тип: stappler::db::AccessRoleId


# ::stappler::db::Transaction::Data::Data(stappler::db::Adapter const&,memory::pool_t*)

## BRIEF

Конструирует данные

## CONTENT

Конструирует данные

Параметры:
* stappler::db::Adapter const& - используемый адаптер БД
* memory::pool_t* - пул памяти


# ::stappler::db::Transaction::Stack

## BRIEF

Тип стека активных транзакций

## CONTENT

Доступ: public

Тип стека активных транзакций

Базовые классы:
* AllocPool


# ::stappler::db::Transaction::Stack::stack

## BRIEF

Стек активных транзакций

## CONTENT

Стек активных транзакций

Тип: Vector<stappler::db::Transaction::Data *>


# ::stappler::db::Transaction::getTransactionOp(stappler::db::Action)

## BRIEF

Возвращает операцию транзакции для операции над полем

## CONTENT

Доступ: public

Возвращает операцию транзакции для операции над полем

Параметры:
* stappler::db::Action

Возвращает:
* stappler::db::Transaction::Op

# ::stappler::db::Transaction::acquire(stappler::db::Adapter const&)

## BRIEF

Возвращает или создаёт активную транзакцию для адаптера

## CONTENT

Доступ: public

Возвращает или создаёт активную транзакцию для адаптера

Параметры:
* stappler::db::Adapter const&

Возвращает:
* stappler::db::Transaction

# ::stappler::db::Transaction::acquire()

## BRIEF

Возвращает или создаёт активную транзакцию для текущего контента

## CONTENT

Доступ: public

Возвращает или создаёт активную транзакцию для текущего контента

Возвращает:
* stappler::db::Transaction

# ::stappler::db::Transaction::acquireIfExists()

## BRIEF

Возвращает активную транзакцию для текущего контента, если существует

## CONTENT

Доступ: public

Возвращает активную транзакцию для текущего контента, если существует

Возвращает:
* stappler::db::Transaction

# ::stappler::db::Transaction::acquireIfExists(memory::pool_t*)

## BRIEF

Возвращает активную транзакцию для контента, если существует

## CONTENT

Доступ: public

Возвращает активную транзакцию для контента, если существует

Параметры:
* memory::pool_t*

Возвращает:
* stappler::db::Transaction

# ::stappler::db::Transaction::Transaction(stappler::nullptr_t)

## BRIEF

Конструирует пустую транзакцию

## CONTENT

Доступ: public

Конструирует пустую транзакцию

Параметры:
* stappler::nullptr_t


# ::stappler::db::Transaction::setRole(stappler::db::AccessRoleId) const

## BRIEF

Устанавливает действующую пользовательскую роль

## CONTENT

Доступ: public

Устанавливает действующую пользовательскую роль

Параметры:
* stappler::db::AccessRoleId


# ::stappler::db::Transaction::getRole() const

## BRIEF

Возвращает действующую пользовательскую роль

## CONTENT

Доступ: public

Возвращает действующую пользовательскую роль

Возвращает:
* stappler::db::AccessRoleId

# ::stappler::db::Transaction::setStatus(int)

## BRIEF

Устанавливает стутс транзакции

## CONTENT

Доступ: public

Устанавливает стутс транзакции

Параметры:
* int


# ::stappler::db::Transaction::getStatus() const

## BRIEF

Возвращает статус транзакции

## CONTENT

Доступ: public

Возвращает статус транзакции

Возвращает:
* int

# ::stappler::db::Transaction::setValue(stappler::StringView const&,stappler::mem_pool::Value&&)

## BRIEF

Устанавливает значение для ключа

## CONTENT

Доступ: public

Устанавливает значение для ключа

Параметры:
* stappler::StringView const&
* stappler::mem_pool::Value&&

Возвращает:
* stappler::mem_pool::Value const&

# ::stappler::db::Transaction::getValue(stappler::StringView const&) const

## BRIEF

Получает значение для ключа

## CONTENT

Доступ: public

Получает значение для ключа

Параметры:
* stappler::StringView const&

Возвращает:
* stappler::mem_pool::Value const&

# ::stappler::db::Transaction::setObject(int64_t,stappler::mem_pool::Value&&) const

## BRIEF

Устанавливает данные для известного объекта

## CONTENT

Доступ: public

Устанавливает данные для известного объекта

Параметры:
* int64_t
* stappler::mem_pool::Value&&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Transaction::getObject(int64_t) const

## BRIEF

Получает данные известного объекта

## CONTENT

Доступ: public

Получает данные известного объекта

Параметры:
* int64_t

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Transaction::setAdapter(stappler::db::Adapter const&)

## BRIEF

Устанавливает действующий адаптер

## CONTENT

Доступ: public

Устанавливает действующий адаптер

Параметры:
* stappler::db::Adapter const&


# ::stappler::db::Transaction::getAdapter() const

## BRIEF

Возвращает адаптер БД

## CONTENT

Доступ: public

Возвращает адаптер БД

Возвращает:
* stappler::db::Adapter const&

# ::stappler::db::Transaction::operator bool() const

## BRIEF

Проверяет на действующую транзакцию

## CONTENT

Доступ: public

Проверяет на действующую транзакцию

Возвращает:
* bool

# ::stappler::db::Transaction::acquireObject(stappler::db::Scheme const&,uint64_t) const

## BRIEF

Возвращает объект, сохраняет его в известных

## CONTENT

Доступ: public

Возвращает объект, сохраняет его в известных. Получает его из БД изи возвращает из известных.

Параметры:
* stappler::db::Scheme const&
* uint64_t

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Transaction::perform(Callback<bool ()> const&) const

## BRIEF

Выполняет задачу в транзакции

## CONTENT

Доступ: public

Выполняет задачу в транзакции

Параметры:
* Callback<bool ()> const& - если вернуть false, завершает тразакцию аварийно

Возвращает:
* bool - успешность выполнения

# ::stappler::db::Transaction::performAsSystem(Callback<bool ()> const&) const

## BRIEF

Выполняет задачу в транзакции от имени системы

## CONTENT

Доступ: public

Выполняет задачу в транзакции от имени системы. Временно повышает полномочия до системных на момент вызова функции.

Параметры:
* Callback<bool ()> const& - если вернуть false, завершает тразакцию аварийно

Возвращает:
* bool - успешность выполнения

# ::stappler::db::Transaction::isInTransaction() const

## BRIEF

Проверяет, выполняется ли действие в транзакции

## CONTENT

Доступ: public

Проверяет, выполняется ли действие в транзакции

Возвращает:
* bool

# ::stappler::db::Transaction::getTransactionStatus() const

## BRIEF

Возвращает статус транзакции для адаптера

## CONTENT

Доступ: public

Возвращает статус транзакции для адаптера

Возвращает:
* stappler::db::TransactionStatus

# ::stappler::db::Transaction::foreach(stappler::db::Worker&,stappler::db::Query const&,Callback<bool (stappler::mem_pool::Value &)> const&) const

## BRIEF

Выполняет перечисление для запроса

## CONTENT

Доступ: public

Выполняет перечисление для запроса

Параметры:
* stappler::db::Worker&
* stappler::db::Query const&
* Callback<bool (stappler::mem_pool::Value &)> const& - функция для перечисления

Возвращает:
* bool

# ::stappler::db::Transaction::select(stappler::db::Worker&,stappler::db::Query const&) const

## BRIEF

Выполняет запрос, возвращает результат

## CONTENT

Доступ: public

Выполняет запрос, возвращает результат

Параметры:
* stappler::db::Worker&
* stappler::db::Query const&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Transaction::count(stappler::db::Worker&,stappler::db::Query const&) const

## BRIEF

Подсчитывает число объектов по запросу

## CONTENT

Доступ: public

Подсчитывает число объектов по запросу

Параметры:
* stappler::db::Worker&
* stappler::db::Query const&

Возвращает:
* size_t

# ::stappler::db::Transaction::remove(stappler::db::Worker&,uint64_t) const

## BRIEF

Удаляет объект

## CONTENT

Доступ: public

Удаляет объект

Параметры:
* stappler::db::Worker&
* uint64_t

Возвращает:
* bool

# ::stappler::db::Transaction::create(stappler::db::Worker&,stappler::mem_pool::Value&) const

## BRIEF

Создаёт объект

## CONTENT

Доступ: public

Создаёт объект

Параметры:
* stappler::db::Worker&
* stappler::mem_pool::Value&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Transaction::save(stappler::db::Worker&,uint64_t,stappler::mem_pool::Value const&,Vector<stappler::mem_pool::String> const&) const

## BRIEF

Сохраняет данные объекта

## CONTENT

Доступ: public

Сохраняет данные объекта

Параметры:
* stappler::db::Worker&
* uint64_t
* stappler::mem_pool::Value const&
* Vector<stappler::mem_pool::String> const&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Transaction::patch(stappler::db::Worker&,uint64_t,stappler::mem_pool::Value&) const

## BRIEF

Обновляет данные объекта атомарно

## CONTENT

Доступ: public

Обновляет данные объекта атомарно

Параметры:
* stappler::db::Worker&
* uint64_t
* stappler::mem_pool::Value&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Transaction::field(stappler::db::Action,stappler::db::Worker&,uint64_t,stappler::db::Field const&,stappler::mem_pool::Value&&) const

## BRIEF

Выполняет операцию над полем объекта

## CONTENT

Доступ: public

Выполняет операцию над полем объекта

Параметры:
* stappler::db::Action
* stappler::db::Worker&
* uint64_t
* stappler::db::Field const&
* stappler::mem_pool::Value&&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Transaction::field(stappler::db::Action,stappler::db::Worker&,stappler::mem_pool::Value const&,stappler::db::Field const&,stappler::mem_pool::Value&&) const

## BRIEF

Выполняет операцию над полем объекта

## CONTENT

Доступ: public

Выполняет операцию над полем объекта

Параметры:
* stappler::db::Action
* stappler::db::Worker&
* stappler::mem_pool::Value const&
* stappler::db::Field const&
* stappler::mem_pool::Value&&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Transaction::removeFromView(stappler::db::Scheme const&,stappler::db::FieldView const&,uint64_t,stappler::mem_pool::Value const&) const

## BRIEF

Удаляет объект из отображения

## CONTENT

Доступ: public

Удаляет объект из отображения

Параметры:
* stappler::db::Scheme const&
* stappler::db::FieldView const&
* uint64_t
* stappler::mem_pool::Value const&

Возвращает:
* bool

# ::stappler::db::Transaction::addToView(stappler::db::Scheme const&,stappler::db::FieldView const&,uint64_t,stappler::mem_pool::Value const&,stappler::mem_pool::Value const&) const

## BRIEF

Добавляет объект в отображения

## CONTENT

Доступ: public

Добавляет объект в отображения

Параметры:
* stappler::db::Scheme const&
* stappler::db::FieldView const&
* uint64_t
* stappler::mem_pool::Value const&
* stappler::mem_pool::Value const&

Возвращает:
* bool

# ::stappler::db::Transaction::getDeltaValue(stappler::db::Scheme const&)

## BRIEF

Возвращает значение дельты для схемы

## CONTENT

Доступ: public

Возвращает значение дельты для схемы

Параметры:
* stappler::db::Scheme const&

Возвращает:
* int64_t

# ::stappler::db::Transaction::getDeltaValue(stappler::db::Scheme const&,stappler::db::FieldView const&,uint64_t)

## BRIEF

Возвращает значение дельты для поля отображения

## CONTENT

Доступ: public

Возвращает значение дельты для поля отображения

Параметры:
* stappler::db::Scheme const&
* stappler::db::FieldView const&
* uint64_t

Возвращает:
* int64_t

# ::stappler::db::Transaction::performQueryListForIds(stappler::db::QueryList const&,size_t) const

## BRIEF

Выполняет иерархический список запросов для получения идентификаторов

## CONTENT

Доступ: public

Выполняет иерархический список запросов для получения идентификаторов

Параметры:
* stappler::db::QueryList const&
* size_t

Возвращает:
* Vector<int64_t>

# ::stappler::db::Transaction::performQueryList(stappler::db::QueryList const&,size_t,bool) const

## BRIEF

Выполняет иерархический список запросов

## CONTENT

Доступ: public

Выполняет иерархический список запросов

Параметры:
* stappler::db::QueryList const&
* size_t
* bool

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Transaction::performQueryListField(stappler::db::QueryList const&,stappler::db::Field const&) const

## BRIEF

Выполняет иерархический список запросов для поля

## CONTENT

Доступ: public

Выполняет иерархический список запросов для поля

Параметры:
* stappler::db::QueryList const&
* stappler::db::Field const&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Transaction::scheduleAutoField(stappler::db::Scheme const&,stappler::db::Field const&,uint64_t) const

## BRIEF

Планирует асинхронное обновление автоматического поля

## CONTENT

Доступ: public

Планирует асинхронное обновление автоматического поля

Параметры:
* stappler::db::Scheme const&
* stappler::db::Field const&
* uint64_t


# ::stappler::db::Transaction::retain() const

## BRIEF

Захватывает и сохраняет транзакцию на стеке

## CONTENT

Доступ: public

Захватывает и сохраняет транзакцию на стеке для использования нескольких транзакций одновременно

# ::stappler::db::Transaction::release() const

## BRIEF

Убирает транзакцию со стека и освобождает

## CONTENT

Доступ: public

Убирает транзакцию со стека и освобождает


# ::stappler::db::Transaction::TransactionGuard

## BRIEF

Защитный класс для поддержания транзакции на стеке во время её исполнения

## CONTENT

Доступ: protected

Защитный класс для поддержания транзакции на стеке во время её исполнения


# ::stappler::db::Transaction::TransactionGuard::TransactionGuard(stappler::db::Transaction const&)

## BRIEF

Конструирует защиту для транзакции

## CONTENT

Конструирует защиту для транзакции

Параметры:
* stappler::db::Transaction const&


# ::stappler::db::Transaction::TransactionGuard::~TransactionGuard()

## BRIEF

Удаляет защиту для транзакции

## CONTENT

Удаляет защиту для транзакции


# ::stappler::db::Transaction::TransactionGuard::_t

## BRIEF

Транзакция

## CONTENT

Транзакция

Тип: stappler::db::Transaction const*


# ::stappler::db::Transaction::beginTransaction() const

## BRIEF

Начинает транзакцию

## CONTENT

Доступ: protected

Начинает транзакцию

Возвращает:
* bool

# ::stappler::db::Transaction::endTransaction() const

## BRIEF

Завершает транзакцию успешно

## CONTENT

Доступ: protected

Завершает транзакцию успешно

Возвращает:
* bool

# ::stappler::db::Transaction::cancelTransaction() const

## BRIEF

Завершает транзакцию с ошибкой

## CONTENT

Доступ: protected

Завершает транзакцию с ошибкой


# ::stappler::db::Transaction::clearObjectStorage() const

## BRIEF

Удаляет сохранённые объекты

## CONTENT

Доступ: protected

Удаляет сохранённые объекты


# ::stappler::db::Transaction::processReturnObject(stappler::db::Scheme const&,stappler::mem_pool::Value&) const

## BRIEF

Фильтрует возвращаемый объект на основании контроля доступа

## CONTENT

Доступ: protected

Фильтрует возвращаемый объект на основании контроля доступа

Параметры:
* stappler::db::Scheme const&
* stappler::mem_pool::Value&

Возвращает:
* bool

# ::stappler::db::Transaction::processReturnField(stappler::db::Scheme const&,stappler::mem_pool::Value const&,stappler::db::Field const&,stappler::mem_pool::Value&) const

## BRIEF

Фильтрует возвращаемое поле на основании контроля доступа

## CONTENT

Доступ: protected

Фильтрует возвращаемое поле на основании контроля доступа

Параметры:
* stappler::db::Scheme const&
* stappler::mem_pool::Value const&
* stappler::db::Field const&
* stappler::mem_pool::Value&

Возвращает:
* bool

# ::stappler::db::Transaction::isOpAllowed(stappler::db::Scheme const&,stappler::db::Transaction::Op,stappler::db::Field const*) const

## BRIEF

Проверяет, доступна ли операция для схемы и поля на основании контроля доступа

## CONTENT

Доступ: protected

Проверяет, доступна ли операция для схемы и поля на основании контроля доступа

Параметры:
* stappler::db::Scheme const&
* stappler::db::Transaction::Op
* stappler::db::Field const*

Возвращает:
* bool

# ::stappler::db::Transaction::Transaction(stappler::db::Transaction::Data*)

## BRIEF

Конструирует транзакцию с данными

## CONTENT

Доступ: protected

Конструирует транзакцию с данными

Параметры:
* stappler::db::Transaction::Data*


# ::stappler::db::Transaction::_data

## BRIEF

Данные транзакции

## CONTENT

Доступ: protected

Данные транзакции

Тип: stappler::db::Transaction::Data*


# ::stappler::db::AccessRole

## BRIEF

Структура контроля доступа

## CONTENT

Структура контроля доступа. Хранит функции для реализации контроля доступа. Если функции не определены - пользуется общим правилом. Общее правило - разрешать все действия, для которых флаг допустимости всех соотвествующих операций установлен.

Базовые классы:
* AllocBase


# ::stappler::db::AccessRole::OnSelect

## BRIEF

Функция для допуска запроса получения данных к выполнению

## CONTENT

Функция для допуска запроса получения данных к выполнению


# ::stappler::db::AccessRole::OnCount

## BRIEF

Функция для допуска запроса подсчёта данных к выполнению

## CONTENT

Функция для допуска запроса подсчёта данных к выполнению


# ::stappler::db::AccessRole::OnCreate

## BRIEF

Функция для допуска запроса создания объекта к выполнению

## CONTENT

Функция для допуска запроса создания объекта к выполнению


# ::stappler::db::AccessRole::OnPatch

## BRIEF

Функция для допуска запроса атомарного обновления объекта к выполнению

## CONTENT

Функция для допуска запроса атомарного обновления объекта к выполнению. Если не определна, но определена функция допуска обновлению - всегда выполняется чтение-модификация-запись.

# ::stappler::db::AccessRole::OnSave

## BRIEF

Функция для допуска запроса обновления объекта к выполнению

## CONTENT

Функция для допуска запроса обновления объекта к выполнению


# ::stappler::db::AccessRole::OnRemove

## BRIEF

Функция для допуска запроса удаления объекта к выполнению

## CONTENT

Функция для допуска запроса удаления объекта к выполнению


# ::stappler::db::AccessRole::OnField

## BRIEF

Функция для допуска запроса к полю объекта к выполнению

## CONTENT

Функция для допуска запроса к полю объекта к выполнению


# ::stappler::db::AccessRole::OnReturn

## BRIEF

Функция для фильтрации объектов при выводе

## CONTENT

Функция для фильтрации объектов при выводе


# ::stappler::db::AccessRole::OnReturnField

## BRIEF

Функция для фильтрации данных поля при выводе

## CONTENT

Функция для фильтрации данных поля при выводе


# ::stappler::db::AccessRole::Empty<typename>(Args &&...)

## BRIEF

Конструирует структуру доступа, для которой запрещены все операции

## CONTENT

Конструирует структуру доступа, для которой запрещены все операции

Параметры шаблона:
* typename Args

Параметры:
* Args &&...

Возвращает:
* stappler::db::AccessRole

# ::stappler::db::AccessRole::Default<typename>(Args &&...)

## BRIEF

Конструирует структуру доступа, для которой разрешены операции чтения

## CONTENT

Конструирует структуру доступа, для которой разрешены операции чтения

Параметры шаблона:
* typename Args

Параметры:
* Args &&...

Возвращает:
* stappler::db::AccessRole

# ::stappler::db::AccessRole::Admin<typename>(Args &&...)

## BRIEF

Конструирует структуру доступа, для которой разрешены все операции

## CONTENT

Конструирует структуру доступа, для которой разрешены все операции

Параметры шаблона:
* typename Args

Параметры:
* Args &&...

Возвращает:
* stappler::db::AccessRole

# ::stappler::db::AccessRole::define<typename,typename>(T&&,Args &&...)

## BRIEF

Определяет параметры контроля доступа в качестве набора аргументов произвольной длины

## CONTENT

Определяет параметры контроля доступа в качестве набора аргументов произвольной длины

Параметры шаблона:
* typename T
* typename Args

Параметры:
* T&&
* Args &&...

Возвращает:
* stappler::db::AccessRole&

# ::stappler::db::AccessRole::define()

## BRIEF

Оконечная функция обхода аргументов

## CONTENT

Оконечная функция обхода аргументов

Возвращает:
* stappler::db::AccessRole&

# ::stappler::db::AccessRole::define(stappler::db::AccessRoleId)

## BRIEF

Устанавливает идентификатор пользователя, для которого предназначена структура

## CONTENT

Устанавливает идентификатор пользователя, для которого предназначена структура

Параметры:
* stappler::db::AccessRoleId

Возвращает:
* stappler::db::AccessRole&

# ::stappler::db::AccessRole::define(Transaction::Op)

## BRIEF

Опрределяет допустимую операцию

## CONTENT

Опрределяет допустимую операцию

Параметры:
* Transaction::Op

Возвращает:
* stappler::db::AccessRole&

# ::stappler::db::AccessRole::define(stappler::db::AccessRole::OnSelect&&)

## BRIEF

Опрределяет функцию для проверки доступности операции.

## CONTENT

Опрределяет функцию для проверки доступности операции. Автоматически разрешает требуемые для вызова функции операции.

Параметры:
* stappler::db::AccessRole::OnSelect&&

Возвращает:
* stappler::db::AccessRole&

# ::stappler::db::AccessRole::define(stappler::db::AccessRole::OnCount&&)

## BRIEF

Опрределяет функцию для проверки доступности операции.

## CONTENT

Опрределяет функцию для проверки доступности операции. Автоматически разрешает требуемые для вызова функции операции.

Параметры:
* stappler::db::AccessRole::OnCount&&

Возвращает:
* stappler::db::AccessRole&

# ::stappler::db::AccessRole::define(stappler::db::AccessRole::OnCreate&&)

## BRIEF

Опрределяет функцию для проверки доступности операции.

## CONTENT

Опрределяет функцию для проверки доступности операции. Автоматически разрешает требуемые для вызова функции операции.

Параметры:
* stappler::db::AccessRole::OnCreate&&

Возвращает:
* stappler::db::AccessRole&

# ::stappler::db::AccessRole::define(stappler::db::AccessRole::OnPatch&&)

## BRIEF

Опрределяет функцию для проверки доступности операции.

## CONTENT

Опрределяет функцию для проверки доступности операции. Автоматически разрешает требуемые для вызова функции операции.

Параметры:
* stappler::db::AccessRole::OnPatch&&

Возвращает:
* stappler::db::AccessRole&

# ::stappler::db::AccessRole::define(stappler::db::AccessRole::OnSave&&)

## BRIEF

Опрределяет функцию для проверки доступности операции.

## CONTENT

Опрределяет функцию для проверки доступности операции. Автоматически разрешает требуемые для вызова функции операции.

Параметры:
* stappler::db::AccessRole::OnSave&&

Возвращает:
* stappler::db::AccessRole&

# ::stappler::db::AccessRole::define(stappler::db::AccessRole::OnRemove&&)

## BRIEF

Опрределяет функцию для проверки доступности операции.

## CONTENT

Опрределяет функцию для проверки доступности операции. Автоматически разрешает требуемые для вызова функции операции.

Параметры:
* stappler::db::AccessRole::OnRemove&&

Возвращает:
* stappler::db::AccessRole&

# ::stappler::db::AccessRole::define(stappler::db::AccessRole::OnField&&)

## BRIEF

Опрределяет функцию для проверки доступности операции.

## CONTENT

Опрределяет функцию для проверки доступности операции. Не включает все разрешения для операций над полями автоматически. Необходимо включать операции вручную.

Параметры:
* stappler::db::AccessRole::OnField&&

Возвращает:
* stappler::db::AccessRole&

# ::stappler::db::AccessRole::define(stappler::db::AccessRole::OnReturn&&)

## BRIEF

Опрределяет функцию для фильтрации результата вызова

## CONTENT

Опрределяет функцию для фильтрации результата вызова

Параметры:
* stappler::db::AccessRole::OnReturn&&

Возвращает:
* stappler::db::AccessRole&

# ::stappler::db::AccessRole::define(stappler::db::AccessRole::OnReturnField&&)

## BRIEF

Опрределяет функцию для фильтрации результата вызова

## CONTENT

Опрределяет функцию для фильтрации результата вызова

Параметры:
* stappler::db::AccessRole::OnReturnField&&

Возвращает:
* stappler::db::AccessRole&

# ::stappler::db::AccessRole::users

## BRIEF

Идентификаторы пользователей, для которых предназначена структура

## CONTENT

Идентификаторы пользователей, для которых предназначена структура

Тип: std::bitset<stappler::toInt(AccessRoleId::Max)>


# ::stappler::db::AccessRole::operations

## BRIEF

Список разрешённых операций

## CONTENT

Список разрешённых операций

Тип: std::bitset<stappler::toInt(Transaction::Op::Max)>


# ::stappler::db::AccessRole::onSelect

## BRIEF

Функция проверки доступности операции получения объектов

## CONTENT

Функция проверки доступности операции получения объектов

Тип: Function<bool (stappler::db::Worker &, const stappler::db::Query &)>


# ::stappler::db::AccessRole::onCount

## BRIEF

Функция проверки доступности операции подсчёта объектов

## CONTENT

Функция проверки доступности операции подсчёта объектов

Тип: Function<bool (stappler::db::Worker &, const stappler::db::Query &)>


# ::stappler::db::AccessRole::onCreate

## BRIEF

Функция проверки доступности операции создания объекта

## CONTENT

Функция проверки доступности операции создания объекта

Тип: Function<bool (stappler::db::Worker &, stappler::mem_pool::Value &)>


# ::stappler::db::AccessRole::onPatch

## BRIEF

Функция проверки доступности операции атомарного обновления объекта

## CONTENT

Функция проверки доступности операции атомарного обновления объекта. Если не определна, но определена функция допуска обновлению - всегда выполняется чтение-модификация-запись.

Тип: Function<bool (stappler::db::Worker &, int64_t, stappler::mem_pool::Value &)>


# ::stappler::db::AccessRole::onSave

## BRIEF

Функция проверки доступности операции обновления объекта

## CONTENT

Функция проверки доступности операции обновления объекта

Тип: Function<bool (stappler::db::Worker &, const stappler::mem_pool::Value &, stappler::mem_pool::Value &, Vector<stappler::mem_pool::String> &)>


# ::stappler::db::AccessRole::onRemove

## BRIEF

Функция проверки доступности операции удаления объекта

## CONTENT

Функция проверки доступности операции удаления объекта

Тип: Function<bool (stappler::db::Worker &, const stappler::mem_pool::Value &)>


# ::stappler::db::AccessRole::onField

## BRIEF

Функция проверки доступности операции над полем объекта

## CONTENT

Функция проверки доступности операции над полем объекта

Тип: Function<bool (stappler::db::Action, stappler::db::Worker &, const stappler::mem_pool::Value &, const stappler::db::Field &, stappler::mem_pool::Value &)>


# ::stappler::db::AccessRole::onReturn

## BRIEF

Функция фильтрации возвращаемых объектов

## CONTENT

Функция фильтрации возвращаемых объектов

Тип: Function<bool (const stappler::db::Scheme &, stappler::mem_pool::Value &)>


# ::stappler::db::AccessRole::onReturnField

## BRIEF

Функция фильтрации возвращаемых полей

## CONTENT

Функция фильтрации возвращаемых полей

Тип: Function<bool (const stappler::db::Scheme &, const stappler::db::Field &, stappler::mem_pool::Value &)>
