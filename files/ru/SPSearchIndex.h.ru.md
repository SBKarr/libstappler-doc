Title: SPSearchIndex.h


# STAPPLER_SEARCH_SPSEARCHINDEX_H_

## BRIEF

Заголовок структоры поискового индекса

## CONTENT

Заголовок структоры поискового индекса


# ::stappler::search::SearchIndex

## BRIEF

Структура поискового текстового индекса

## CONTENT

Структура поискового текстового индекса. Использует пулы памяти.

Индекс создан, в первую очередь, для работы префиксного поиска с автодополнением и коррекцией ошибок. Например, для работы поиска по приложению.

Базовые классы:
* Ref


# ::stappler::search::SearchIndex::DefaultSep

## BRIEF

Вспомогательный шаблон символа-разделителя

## CONTENT

Доступ: public

Вспомогательный шаблон символа-разделителя


# ::stappler::search::SearchIndex::TokenType

## BRIEF

Тип поискового токена

## CONTENT

Доступ: public

Тип поискового токена

Значения:
* SearchNode - элемент поискового индекса
* SearchRequest - элемент поискового запроса


# ::stappler::search::SearchIndex::TokenCallback

## BRIEF

Функция для информирования индекса о новом токене в строке

## CONTENT

Доступ: public

Функция для информирования индекса о новом токене в строке


# ::stappler::search::SearchIndex::TokenizerCallback

## BRIEF

Функция разбора поисковой строки на токены

## CONTENT

Доступ: public

Функция разбора поисковой строки на токены


# ::stappler::search::SearchIndex::HeuristicCallback

## BRIEF

Функция эвристики для вычисления наилучшего результата поиска

## CONTENT

Доступ: public

Функция эвристики для вычисления наилучшего результата поиска


# ::stappler::search::SearchIndex::FilterCallback

## BRIEF

Функция фильтрации поисковых элемментов

## CONTENT

Доступ: public

Функция фильтрации поисковых элемментов


# ::stappler::search::SearchIndex::Slice

## BRIEF

Тип сегмента в поисковом элементе

## CONTENT

Доступ: public

Тип сегмента в поисковом элементе


# ::stappler::search::SearchIndex::Slice::start

## BRIEF

Индекс начала сегмента в канонической строке

## CONTENT

Индекс начала сегмента в канонической строке

Тип: uint16_t


# ::stappler::search::SearchIndex::Slice::size

## BRIEF

Число символов в сегменте канонической строке

## CONTENT

Число символов в сегменте канонической строке

Тип: uint16_t


# ::stappler::search::SearchIndex::Node

## BRIEF

Хранимый поисковой элемент

## CONTENT

Доступ: public

Хранимый поисковой элемент


# ::stappler::search::SearchIndex::Node::id

## BRIEF

Индекс элемента

## CONTENT

Индекс элемента

Тип: int64_t


# ::stappler::search::SearchIndex::Node::tag

## BRIEF

Информационный тег элемента

## CONTENT

Информационный тег элемента

Тип: int64_t


# ::stappler::search::SearchIndex::Node::canonical

## BRIEF

Каноническая строка элемента

## CONTENT

Каноническая строка элемента

Тип: stappler::mem_pool::String


# ::stappler::search::SearchIndex::Node::alignment

## BRIEF

Вектор расстояния Левенштейна между запросом и канонической строкой

## CONTENT

Вектор расстояния Левенштейна между запросом и канонической строкой

Тип: stappler::search::Distance


# ::stappler::search::SearchIndex::Token

## BRIEF

Найденный токен в исходной строке

## CONTENT

Доступ: public

Найденный токен в исходной строке


# ::stappler::search::SearchIndex::Token::index

## BRIEF

Индекс элемента

## CONTENT

Индекс элемента

Тип: uint32_t


# ::stappler::search::SearchIndex::Token::slice

## BRIEF

Сегмент внутри элемента

## CONTENT

Сегмент внутри элемента

Тип: stappler::search::SearchIndex::Slice


# ::stappler::search::SearchIndex::ResultToken

## BRIEF

Токен результата поиска

## CONTENT

Доступ: public

Токен результата поиска


# ::stappler::search::SearchIndex::ResultToken::word

## BRIEF

Индекс найденного элемента

## CONTENT

Индекс найденного элемента

Тип: uint32_t


# ::stappler::search::SearchIndex::ResultToken::match

## BRIEF

Длина сегмента соотвествия в канонической строке

## CONTENT

Длина сегмента соотвествия в канонической строке

Тип: uint16_t


# ::stappler::search::SearchIndex::ResultToken::slice

## BRIEF

Найденный сегмент

## CONTENT

Найденный сегмент

Тип: stappler::search::SearchIndex::Slice


# ::stappler::search::SearchIndex::ResultNode

## BRIEF

Элемент результата поиска

## CONTENT

Доступ: public

Элемент результата поиска


# ::stappler::search::SearchIndex::ResultNode::score

## BRIEF

Вес результата

## CONTENT

Вес результата

Тип: float


# ::stappler::search::SearchIndex::ResultNode::node

## BRIEF

Найденный элемент

## CONTENT

Найденный элемент

Тип: stappler::search::SearchIndex::Node const*


# ::stappler::search::SearchIndex::ResultNode::matches

## BRIEF

Вектор найденных соотвествий

## CONTENT

Вектор найденных соотвествий

Тип: Vector<stappler::search::SearchIndex::ResultToken>


# ::stappler::search::SearchIndex::Result

## BRIEF

Результат поиска

## CONTENT

Доступ: public

Результат поиска


# ::stappler::search::SearchIndex::Result::ref

## BRIEF

Ссылка на индекс

## CONTENT

Ссылка на индекс

Тип: Rc<stappler::search::SearchIndex>


# ::stappler::search::SearchIndex::Result::nodes

## BRIEF

Вектор элементов результата поиска

## CONTENT

Вектор элементов результата поиска

Тип: Vector<stappler::search::SearchIndex::ResultNode>


# ::stappler::search::SearchIndex::Heuristic

## BRIEF

Структуора для эвристического анализа результата

## CONTENT

Доступ: public

Структуора для эвристического анализа результата. Результат работы структуоры - численный вес результата поиска


# ::stappler::search::SearchIndex::Heuristic::TagCallback

## BRIEF

Функция мультипликатора веса тега элемента

## CONTENT

Функция мультипликатора веса тега элемента. Результат анализа элемента всегда умножается на вес его тека, вычисленный этой функцией


# ::stappler::search::SearchIndex::Heuristic::SizeCallback

## BRIEF

Функция мультипликатора размера соотвествия 

## CONTENT

Функция мультипликатора размера соотвествия. Функция позволяет сделать более значимыми более длинные результаты либо результаты с лучшим соотношением длины элемента к найденноу сегменту. 


# ::stappler::search::SearchIndex::Heuristic::Heuristic()

## BRIEF

Конструктор по умолчанию

## CONTENT

Конструктор по умолчанию


# ::stappler::search::SearchIndex::Heuristic::Heuristic(stappler::search::SearchIndex::Heuristic::TagCallback const&,bool)

## BRIEF

Конструктор на основе веса тега

## CONTENT

Конструктор на основе веса тега

Параметры:
* stappler::search::SearchIndex::Heuristic::TagCallback const& - функция веса тега
* bool - флаг исключения точных результатов. Если флаг установлен, точные результаты не анализируются и просто добавляются в начало списка.


# ::stappler::search::SearchIndex::Heuristic::operator()(stappler::search::SearchIndex const&,SearchIndex::ResultNode const&)

## BRIEF

Вызов анализа результата

## CONTENT

Вызов анализа результата

Параметры:
* stappler::search::SearchIndex const& - поисковой индекс
* SearchIndex::ResultNode const& - элемент результата

Возвращает:
* float - вес элемента результата


# ::stappler::search::SearchIndex::Heuristic::excludeEqualMatches

## BRIEF

Флаг исключения точных результатов. Если флаг установлен, точные результаты не анализируются и просто добавляются в начало списка.

## CONTENT

Флаг исключения точных результатов. Если флаг установлен, точные результаты не анализируются и просто добавляются в начало списка.

Тип: bool


# ::stappler::search::SearchIndex::Heuristic::fullMatchScore

## BRIEF

Значение веса, назначаемое при полном соотвествии

## CONTENT

Значение веса, назначаемое при полном соотвествии

Тип: float


# ::stappler::search::SearchIndex::Heuristic::tagScore

## BRIEF

Функция для мултипликатора значения тега

## CONTENT

Функция для мултипликатора значения тега

Тип: TagCallback


# ::stappler::search::SearchIndex::Heuristic::wordScore

## BRIEF

Функция для мултипликатора соотвествия в слове

## CONTENT

Функция для мултипликатора соотвествия в слове

Тип: SizeCallback


# ::stappler::search::SearchIndex::Heuristic::positionScore

## BRIEF

Функция для мултипликатора соотвествия последовательности слов

## CONTENT

Функция для мултипликатора соотвествия последовательности слов

Тип: SizeCallback


# ::stappler::search::SearchIndex::init(stappler::search::SearchIndex::TokenizerCallback const&)

## BRIEF

Создаёт индекс на основе функции разбития фразы на токены

## CONTENT

Доступ: public

Создаёт индекс на основе функции разбития фразы на токены

Параметры:
* stappler::search::SearchIndex::TokenizerCallback const&

Возвращает:
* bool

# ::stappler::search::SearchIndex::reserve(size_t)

## BRIEF

Резервирует память под некоторое число элементов индекса

## CONTENT

Доступ: public

Резервирует память под некоторое число элементов индекса

Параметры:
* size_t


# ::stappler::search::SearchIndex::add(stappler::StringView const&,int64_t,int64_t)

## BRIEF

Добавляет фразу в индекс

## CONTENT

Доступ: public

Добавляет фразу в индекс

Параметры:
* stappler::StringView const& - текстовая фраза
* int64_t - уникальный идентификатор объекта фразы
* int64_t - информационный тег для фразы


# ::stappler::search::SearchIndex::performSearch(stappler::StringView const&,size_t,stappler::search::SearchIndex::HeuristicCallback const&,stappler::search::SearchIndex::FilterCallback const&)

## BRIEF

Выполнет поиск по индексу

## CONTENT

Доступ: public

Выполнет поиск по индексу

Параметры:
* stappler::StringView const& - фраза для поиска
* size_t - минимальная длина соотвествия
* stappler::search::SearchIndex::HeuristicCallback const& - функция для вычисления веса соотвествия
* stappler::search::SearchIndex::FilterCallback const& - фукнция для фильтра элементов для поиска

Возвращает:
* stappler::search::SearchIndex::Result - результат поиска


# ::stappler::search::SearchIndex::resolveToken(stappler::search::SearchIndex::Node const&,stappler::search::SearchIndex::ResultToken const&) const

## BRIEF

Конвертирует токен результата в строку из канонического представления элемента

## CONTENT

Доступ: public

Конвертирует токен результата в строку из канонического представления элемента

Параметры:
* stappler::search::SearchIndex::Node const&
* stappler::search::SearchIndex::ResultToken const&

Возвращает:
* stappler::StringView

# ::stappler::search::SearchIndex::convertToken(stappler::search::SearchIndex::Node const&,stappler::search::SearchIndex::ResultToken const&) const

## BRIEF

Конвертирует токен результата в сегмент из канонического представления элемента

## CONTENT

Доступ: public

Конвертирует токен результата в сегмент из канонического представления элемента

Параметры:
* stappler::search::SearchIndex::Node const&
* stappler::search::SearchIndex::ResultToken const&

Возвращает:
* stappler::search::SearchIndex::Slice

# ::stappler::search::SearchIndex::makeStringView(stappler::search::SearchIndex::Token const&) const

## BRIEF

Создаёт строковое отображение из токена

## CONTENT

Доступ: protected

Создаёт строковое отображение из токена

Параметры:
* stappler::search::SearchIndex::Token const&

Возвращает:
* stappler::StringView

# ::stappler::search::SearchIndex::makeStringView(uint32_t,stappler::search::SearchIndex::Slice const&) const

## BRIEF

Создаёт строковое отображение из сегмента токена по индексу элемента

## CONTENT

Доступ: protected

Создаёт строковое отображение из сегмента токена по индексу элемента

Параметры:
* uint32_t
* stappler::search::SearchIndex::Slice const&

Возвращает:
* stappler::StringView

# ::stappler::search::SearchIndex::onToken(Vector<stappler::search::SearchIndex::Token>&,stappler::StringView const&,uint32_t,stappler::search::SearchIndex::Slice const&)

## BRIEF

Функция добавления нового токена

## CONTENT

Доступ: protected

Функция добавления нового токена

Параметры:
* Vector<stappler::search::SearchIndex::Token>&
* stappler::StringView const&
* uint32_t
* stappler::search::SearchIndex::Slice const&


# ::stappler::search::SearchIndex::_nodes

## BRIEF

Элементы индекса

## CONTENT

Доступ: protected

Элементы индекса

Тип: Vector<stappler::search::SearchIndex::Node>


# ::stappler::search::SearchIndex::_tokens

## BRIEF

Упорядоченные токены индекса

## CONTENT

Доступ: protected

Упорядоченные токены индекса

Тип: Vector<stappler::search::SearchIndex::Token>


# ::stappler::search::SearchIndex::_tokenizer

## BRIEF

Функция разбиения фразы на токены

## CONTENT

Доступ: protected

Функция разбиения фразы на токены

Тип: TokenizerCallback

# ::stappler::search::SearchIndex::print(Callback<void (stappler::StringView)> const&) const

## BRIEF

Выводит содержимое текстового индекса в поток для отладки

## CONTENT

Доступ: public

Выводит содержимое текстового индекса в поток для отладки

Параметры:
* Callback<void (stappler::StringView)> const&