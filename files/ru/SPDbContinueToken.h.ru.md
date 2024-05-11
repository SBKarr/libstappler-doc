Title: STContinueToken.h


# STAPPLER_DB_SPDBCONTINUETOKEN_H_

## BRIEF

Заголовок структуры токена продолжения запроса

## CONTENT

Заголовок структуры токена продолжения запроса


# ::stappler::db::ContinueToken

## BRIEF

Токен продолжения запроса

## CONTENT

Токен продолжения запроса. Токен используется для постраничного вывода результатов запроса к БД с использованием техники мягкого лимита. Токен сохраняет параметр ключа сортировки, вместо хоохранения смещения внутри запроса.

Токены не сохраняются в БД, вместо этого, они просто кодируют ключевые значения из БД для выполнения запроса.

Для того, чтобы иметь возможность вычислить седующий или предыдущий токен, текущий токен должен быть инициализирован, то есть, выполнен запрос к БД по нему. После этого можно сгенерировать токен для следующей или предыдущей страницы


# ::stappler::db::ContinueToken::Flags

## BRIEF

Флаги токена

## CONTENT

Доступ: public

Флаги токена

Значения:
* None
* Initial - флаг первого токена в запросе
* Reverse - флаг запроса в обратном порядке
* Inverted - флаг инвертированных параметров токена


# ::stappler::db::ContinueToken::ContinueToken()

## BRIEF

Создаёт пустой токен

## CONTENT

Доступ: public

Создаёт пустой токен


# ::stappler::db::ContinueToken::ContinueToken(stappler::StringView const&,size_t,bool)

## BRIEF

Создаёт токен для определённого поля БД в качестве поля сортировки

## CONTENT

Доступ: public

Создаёт токен для определённого поля БД в качестве поля сортировки

Параметры:
* stappler::StringView const& - имя поля БД
* size_t - число элементов на странице
* bool - true для запроса по убыванию


# ::stappler::db::ContinueToken::ContinueToken(stappler::StringView const&)

## BRIEF

Создаёт токен для определённого поля БД в качестве поля сортировки

## CONTENT

Доступ: public

Создаёт токен для определённого поля БД в качестве поля сортировки. Размер страницы по умолчанию, запрос по возрастанию поля.

Параметры:
* stappler::StringView const&


# ::stappler::db::ContinueToken::ContinueToken(stappler::db::ContinueToken const&)

## BRIEF

Конструктор копирования

## CONTENT

Доступ: public

Конструктор копирования

Параметры:
* stappler::db::ContinueToken const&


# ::stappler::db::ContinueToken::ContinueToken(stappler::db::ContinueToken&&)

## BRIEF

Конструктор перемещения

## CONTENT

Доступ: public

Конструктор перемещения

Параметры:
* stappler::db::ContinueToken&&


# ::stappler::db::ContinueToken::operator=(stappler::db::ContinueToken const&)

## BRIEF

Оператор копирования

## CONTENT

Доступ: public

Оператор копирования

Параметры:
* stappler::db::ContinueToken const&

Возвращает:
* stappler::db::ContinueToken&

# ::stappler::db::ContinueToken::operator=(stappler::db::ContinueToken&&)

## BRIEF

Оператор перемещения

## CONTENT

Доступ: public

Оператор перемещения

Параметры:
* stappler::db::ContinueToken&&

Возвращает:
* stappler::db::ContinueToken&

# ::stappler::db::ContinueToken::operator bool() const

## BRIEF

Проверяет, заполнены ли необходимые поля токена

## CONTENT

Доступ: public

Проверяет, заполнены ли необходимые поля токена

Возвращает:
* bool

# ::stappler::db::ContinueToken::hasPrev() const

## BRIEF

Проверяет, есть ли предыдущая страница

## CONTENT

Доступ: public

Проверяет, есть ли предыдущая страница

Возвращает:
* bool

# ::stappler::db::ContinueToken::hasNext() const

## BRIEF

Проверяет, есть ли следующая страница

## CONTENT

Доступ: public

Проверяет, есть ли следующая страница

Возвращает:
* bool

# ::stappler::db::ContinueToken::isInit() const

## BRIEF

Проверяет, инициализирвоан ли токен

## CONTENT

Доступ: public

Проверяет, инициализирвоан ли токен. Токен инициализируется при запросе к БД.

Возвращает:
* bool

# ::stappler::db::ContinueToken::encode() const

## BRIEF

Кодирует токен для передачи клиенту

## CONTENT

Доступ: public

Кодирует токен для передачи клиенту

Возвращает:
* stappler::mem_pool::String

# ::stappler::db::ContinueToken::perform(stappler::db::Scheme const&,stappler::db::Transaction const&,stappler::db::Query&)

## BRIEF

Выполняет запрос к БД для токена

## CONTENT

Доступ: public

Выполняет запрос к БД для токена

Параметры:
* stappler::db::Scheme const& - схема данных
* stappler::db::Transaction const& - действующая транзакция БД
* stappler::db::Query& - дополнительные параметры запроса

Возвращает:
* stappler::mem_pool::Value - данные из БД

# ::stappler::db::ContinueToken::perform(stappler::db::Scheme const&,stappler::db::Transaction const&,stappler::db::Query&,stappler::sql::Ordering)

## BRIEF

Выполняет запрос к БД для токена

## CONTENT

Доступ: public

Выполняет запрос к БД для токена

Параметры:
* stappler::db::Scheme const& - схема данных
* stappler::db::Transaction const& - действующая транзакция БД
* stappler::db::Query& - дополнительные параметры запроса
* stappler::sql::Ordering - альтернативный порядок возврата данных

Возвращает:
* stappler::mem_pool::Value - данные из БД

# ::stappler::db::ContinueToken::performOrdered(stappler::db::Scheme const&,stappler::db::Transaction const&,stappler::db::Query&)

## BRIEF

Выполняет запрос к БД для токена

## CONTENT

Доступ: public

Выполняет запрос к БД для токена, используя порядок данных, предустановленный в параметрах запроса

Параметры:
* stappler::db::Scheme const& - схема данных
* stappler::db::Transaction const& - действующая транзакция БД
* stappler::db::Query& - дополнительные параметры запроса

Возвращает:
* stappler::mem_pool::Value - данные из БД

# ::stappler::db::ContinueToken::refresh(stappler::db::Scheme const&,stappler::db::Transaction const&,stappler::db::Query&)

## BRIEF

Обновляет параметры токена, выполняя запрос к БД

## CONTENT

Доступ: public

Обновляет параметры токена, выполняя запрос к БД

Параметры:
* stappler::db::Scheme const& - схема данных
* stappler::db::Transaction const& - действующая транзакция БД
* stappler::db::Query& - дополнительные параметры запроса


# ::stappler::db::ContinueToken::encodeNext() const

## BRIEF

Кодирует токен следующей страницы для передачи пользователю

## CONTENT

Доступ: public

Кодирует токен следующей страницы для передачи пользователю

Возвращает:
* stappler::mem_pool::String

# ::stappler::db::ContinueToken::encodePrev() const

## BRIEF

Кодирует токен предыдущей страницы для передачи пользователю

## CONTENT

Доступ: public

Кодирует токен предыдущей страницы для передачи пользователю

Возвращает:
* stappler::mem_pool::String

# ::stappler::db::ContinueToken::getStart() const

## BRIEF

Возвращает порядковый номер первого результата запроса

## CONTENT

Доступ: public

Возвращает порядковый номер первого результата запроса

Возвращает:
* size_t

# ::stappler::db::ContinueToken::getEnd() const

## BRIEF

Возвращает порядковый номер последнего результата запроса

## CONTENT

Доступ: public

Возвращает порядковый номер последнего результата запроса

Возвращает:
* size_t

# ::stappler::db::ContinueToken::getTotal() const

## BRIEF

Возвращает общее потенциальное число результатов запроса

## CONTENT

Доступ: public

Возвращает общее потенциальное число результатов запроса

Возвращает:
* size_t

# ::stappler::db::ContinueToken::getCount() const

## BRIEF

Возвращает число результатов запроса на странице

## CONTENT

Доступ: public

Возвращает число результатов запроса на странице

Возвращает:
* size_t

# ::stappler::db::ContinueToken::getFetched() const

## BRIEF

Возвращает реально полученное число результатов

## CONTENT

Доступ: public

Возвращает реально полученное число результатов

Возвращает:
* size_t

# ::stappler::db::ContinueToken::getField() const

## BRIEF

Возвращает поле для сортировки

## CONTENT

Доступ: public

Возвращает поле для сортировки

Возвращает:
* stappler::StringView

# ::stappler::db::ContinueToken::getNumResults() const

## BRIEF

Возвращает число результатов для последнего запроса по токену

## CONTENT

Доступ: public

Возвращает число результатов для последнего запроса по токену

Возвращает:
* size_t

# ::stappler::db::ContinueToken::hasFlag(stappler::db::ContinueToken::Flags) const

## BRIEF

Проверяет, установлен ли флаг токена

## CONTENT

Доступ: public

Проверяет, установлен ли флаг токена

Параметры:
* stappler::db::ContinueToken::Flags

Возвращает:
* bool

# ::stappler::db::ContinueToken::setFlag(stappler::db::ContinueToken::Flags)

## BRIEF

Устанавливает флаг токена

## CONTENT

Доступ: public

Устанавливает флаг токена

Параметры:
* stappler::db::ContinueToken::Flags


# ::stappler::db::ContinueToken::unsetFlag(stappler::db::ContinueToken::Flags)

## BRIEF

Убирает флаг токена

## CONTENT

Доступ: public

Убирает флаг токена

Параметры:
* stappler::db::ContinueToken::Flags


# ::stappler::db::ContinueToken::getFirstVec() const

## BRIEF

Возвращает первое контрольное значение токена

## CONTENT

Доступ: public

Возвращает первое контрольное значение токена

Возвращает:
* stappler::mem_pool::Value const&

# ::stappler::db::ContinueToken::getLastVec() const

## BRIEF

Возвращает последнее контрольное значение токена

## CONTENT

Доступ: public

Возвращает последнее контрольное значение токена

Возвращает:
* stappler::mem_pool::Value const&

# ::stappler::db::ContinueToken::hasPrevImpl() const

## BRIEF

Реализация проверки на существование предыдущей страницы

## CONTENT

Доступ: protected

Реализация проверки на существование предыдущей страницы

Возвращает:
* bool

# ::stappler::db::ContinueToken::hasNextImpl() const

## BRIEF

Реализация проверки на существование следующей страницы

## CONTENT

Доступ: protected

Реализация проверки на существование следующей страницы

Возвращает:
* bool

# ::stappler::db::ContinueToken::encodeNextImpl() const

## BRIEF

Реализация кодирования следующей страницы

## CONTENT

Доступ: protected

Реализация кодирования следующей страницы

Возвращает:
* stappler::mem_pool::String

# ::stappler::db::ContinueToken::encodePrevImpl() const

## BRIEF

Реализация кодирования предыдущей страницы

## CONTENT

Доступ: protected

Реализация кодирования предыдущей страницы

Возвращает:
* stappler::mem_pool::String

# ::stappler::db::ContinueToken::_init

## BRIEF

Флаг инициализации токена

## CONTENT

Доступ: protected

Флаг инициализации токена

Тип: bool


# ::stappler::db::ContinueToken::_numResults

## BRIEF

Число полученных результатов из БД

## CONTENT

Доступ: protected

Число полученных результатов из БД

Тип: size_t


# ::stappler::db::ContinueToken::field

## BRIEF

Поле для сортировки

## CONTENT

Доступ: protected

Поле для сортировки

Тип: stappler::mem_pool::String


# ::stappler::db::ContinueToken::initVec

## BRIEF

Ключевое значение начального элемента запроса

## CONTENT

Доступ: protected

Ключевое значение начального элемента запроса

Тип: stappler::mem_pool::Value


# ::stappler::db::ContinueToken::firstVec

## BRIEF

Ключевое значение первого элемента запроса

## CONTENT

Доступ: protected

Ключевое значение первого элемента запроса

Тип: stappler::mem_pool::Value


# ::stappler::db::ContinueToken::lastVec

## BRIEF

Ключевое значение последнего элемента запроса

## CONTENT

Доступ: protected

Ключевое значение последнего элемента запроса

Тип: stappler::mem_pool::Value


# ::stappler::db::ContinueToken::count

## BRIEF

Число результатов на страницу

## CONTENT

Доступ: protected

Число результатов на страницу

Тип: size_t


# ::stappler::db::ContinueToken::fetched

## BRIEF

Число полученных результатов для цепочки запросов

## CONTENT

Доступ: protected

Число полученных результатов для цепочки запросов

Тип: size_t


# ::stappler::db::ContinueToken::total

## BRIEF

Общее число результатов

## CONTENT

Доступ: protected

Общее число результатов

Тип: size_t


# ::stappler::db::ContinueToken::flags

## BRIEF

Флаги токена

## CONTENT

Доступ: protected

Флаги токена

Тип: stappler::db::ContinueToken::Flags


# ::stappler::db::operator|(ContinueToken::Flags const&,ContinueToken::Flags const&)

## BRIEF

Автоматически созданный оператор флага

## CONTENT

Автоматически созданный оператор флага

Параметры:
* ContinueToken::Flags const&
* ContinueToken::Flags const&

Возвращает:
* ContinueToken::Flags

# ::stappler::db::operator&(ContinueToken::Flags const&,ContinueToken::Flags const&)

## BRIEF

Автоматически созданный оператор флага

## CONTENT

Автоматически созданный оператор флага

Параметры:
* ContinueToken::Flags const&
* ContinueToken::Flags const&

Возвращает:
* ContinueToken::Flags

# ::stappler::db::operator^(ContinueToken::Flags const&,ContinueToken::Flags const&)

## BRIEF

Автоматически созданный оператор флага

## CONTENT

Автоматически созданный оператор флага

Параметры:
* ContinueToken::Flags const&
* ContinueToken::Flags const&

Возвращает:
* ContinueToken::Flags

# ::stappler::db::operator|=(ContinueToken::Flags&,ContinueToken::Flags const&)

## BRIEF

Автоматически созданный оператор флага

## CONTENT

Автоматически созданный оператор флага

Параметры:
* ContinueToken::Flags&
* ContinueToken::Flags const&

Возвращает:
* ContinueToken::Flags&

# ::stappler::db::operator&=(ContinueToken::Flags&,ContinueToken::Flags const&)

## BRIEF

Автоматически созданный оператор флага

## CONTENT

Автоматически созданный оператор флага

Параметры:
* ContinueToken::Flags&
* ContinueToken::Flags const&

Возвращает:
* ContinueToken::Flags&

# ::stappler::db::operator^=(ContinueToken::Flags&,ContinueToken::Flags const&)

## BRIEF

Автоматически созданный оператор флага

## CONTENT

Автоматически созданный оператор флага

Параметры:
* ContinueToken::Flags&
* ContinueToken::Flags const&

Возвращает:
* ContinueToken::Flags&

# ::stappler::db::operator==(ContinueToken::Flags const&,std::underlying_type<ContinueToken::Flags>::type const&)

## BRIEF

Автоматически созданный оператор флага

## CONTENT

Автоматически созданный оператор флага

Параметры:
* ContinueToken::Flags const&
* std::underlying_type<ContinueToken::Flags>::type const&

Возвращает:
* bool

# ::stappler::db::operator==(std::underlying_type<ContinueToken::Flags>::type const&,ContinueToken::Flags const&)

## BRIEF

Автоматически созданный оператор флага

## CONTENT

Автоматически созданный оператор флага

Параметры:
* std::underlying_type<ContinueToken::Flags>::type const&
* ContinueToken::Flags const&

Возвращает:
* bool

# ::stappler::db::operator!=(ContinueToken::Flags const&,std::underlying_type<ContinueToken::Flags>::type const&)

## BRIEF

Автоматически созданный оператор флага

## CONTENT

Автоматически созданный оператор флага

Параметры:
* ContinueToken::Flags const&
* std::underlying_type<ContinueToken::Flags>::type const&

Возвращает:
* bool

# ::stappler::db::operator!=(std::underlying_type<ContinueToken::Flags>::type const&,ContinueToken::Flags const&)

## BRIEF

Автоматически созданный оператор флага

## CONTENT

Автоматически созданный оператор флага

Параметры:
* std::underlying_type<ContinueToken::Flags>::type const&
* ContinueToken::Flags const&

Возвращает:
* bool

# ::stappler::db::operator~(ContinueToken::Flags const&)

## BRIEF

Автоматически созданный оператор флага

## CONTENT

Автоматически созданный оператор флага

Параметры:
* ContinueToken::Flags const&

Возвращает:
* ContinueToken::Flags