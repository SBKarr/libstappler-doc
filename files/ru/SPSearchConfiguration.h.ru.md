Title: SPSearchConfiguration.h


# STAPPLER_SEARCH_SPSEARCHCONFIGURATION_H_

## BRIEF

Заголовок с описанием конфигурации для полнотекстового поиска

## CONTENT

Заголовок с описанием конфигурации для полнотекстового поиска


# ::stappler::search::Configuration

## BRIEF

Структура конфигурации для полнотествового поиска

## CONTENT

Структура конфигурации для полнотествового поиска. Использует пул памяти.

Реализует функции для работы с полнотекстовым поискм, в частности, подготовку полнотекстовых индексов, запросов и генерации заголовков элементов на основании поиска.

Базовые классы:
* memory::AllocPool


# ::stappler::search::Configuration::Map<typename,typename>

## BRIEF

Тип хранилища ключ-значение

## CONTENT

Доступ: public

Тип хранилища ключ-значение

Параметры шаблона:
* typename K
* typename V


# ::stappler::search::Configuration::Vector<typename>

## BRIEF

Тип вектора

## CONTENT

Доступ: public

Тип вектора

Параметры шаблона:
* typename T


# ::stappler::search::Configuration::Set<typename>

## BRIEF

Тип набора уникальных значений

## CONTENT

Доступ: public

Тип набора уникальных значений

Параметры шаблона:
* typename T


# ::stappler::search::Configuration::String

## BRIEF

Тип строки

## CONTENT

Доступ: public

Тип строки


# ::stappler::search::Configuration::StringStream

## BRIEF

Тип строкового потока

## CONTENT

Доступ: public

Тип строкового потока


# ::stappler::search::Configuration::StemmerCallback

## BRIEF

Тап функции стеммера

## CONTENT

Доступ: public

Тап функции стеммера. Функция вызывается для выделения основы слова.

# ::stappler::search::Configuration::StemWordCallback

## BRIEF

Тип функции результата работы стеммера

## CONTENT

Доступ: public

Тип функции результата работы стеммера


# ::stappler::search::Configuration::PreStemCallback

## BRIEF

Тип функции фильтрации стеммера

## CONTENT

Доступ: public

Тип функции фильтрации стеммера


# ::stappler::search::Configuration::SearchVector

## BRIEF

Тип поискового вектора

## CONTENT

Доступ: public

Тип поискового вектора


# ::stappler::search::Configuration::WordMap

## BRIEF

Тип словаря

## CONTENT

Доступ: public

Тип словаря


# ::stappler::search::Configuration::HeadlineConfig

## BRIEF

Конфигурация для создания поисковых заголовков

## CONTENT

Доступ: public

Конфигурация для создания поисковых заголовков


# ::stappler::search::Configuration::HeadlineConfig::DefaultMaxWords

## BRIEF

Максимальное число слов по умолчанию

## CONTENT

Максимальное число слов по умолчанию

Тип: size_t const


# ::stappler::search::Configuration::HeadlineConfig::DefaultMinWords

## BRIEF

Минимальное число слов по умолчанию

## CONTENT

Минимальное число слов по умолчанию

Тип: size_t const


# ::stappler::search::Configuration::HeadlineConfig::DefaultShortWord

## BRIEF

Предел символов в коротком слове

## CONTENT

Предел символов в коротком слове

Тип: size_t const


# ::stappler::search::Configuration::HeadlineConfig::startToken

## BRIEF

Тег начала поискового токена

## CONTENT

Тип: stappler::StringView

Тег начала поискового токена


# ::stappler::search::Configuration::HeadlineConfig::stopToken

## BRIEF

Тег конца поискового токена

## CONTENT

Тег конца поискового токена

Тип: stappler::StringView


# ::stappler::search::Configuration::HeadlineConfig::startFragment

## BRIEF

Тег начала фрагмента текста

## CONTENT

Тег начала фрагмента текста

Тип: stappler::StringView


# ::stappler::search::Configuration::HeadlineConfig::stopFragment

## BRIEF

Тег конца фрагмента текста

## CONTENT

Тег конца фрагмента текста

Тип: stappler::StringView


# ::stappler::search::Configuration::HeadlineConfig::separator

## BRIEF

Разделитель между найденными элементами

## CONTENT

Разделитель между найденными элементами

Тип: stappler::StringView


# ::stappler::search::Configuration::HeadlineConfig::maxWords

## BRIEF

Максимальное число слов во фрагменте

## CONTENT

Максимальное число слов во фрагменте

Тип: size_t


# ::stappler::search::Configuration::HeadlineConfig::minWords

## BRIEF

Минимальное число слов во фрагменте

## CONTENT

Минимальное число слов во фрагменте

Тип: size_t


# ::stappler::search::Configuration::HeadlineConfig::shortWord

## BRIEF

Предел короткого слова для игнорирования в числе слов

## CONTENT

Предел короткого слова для игнорирования в числе слов

Тип: size_t

# ::stappler::search::Configuration::HeadlineConfig::fragmentCallback

## BRIEF

Функция, вызываемая для найденного фрагмента

## CONTENT

Функция, вызываемая для найденного фрагмента

Тип: Function<void (stappler::StringView, stappler::StringView)>


# ::stappler::search::Configuration::Configuration()

## BRIEF

Конструктор конфигурации по умолчанию

## CONTENT

Доступ: public

Конструктор конфигурации по умолчанию


# ::stappler::search::Configuration::Configuration(stappler::search::Language)

## BRIEF

Конструктор конфигурации с языком

## CONTENT

Доступ: public

Конструктор конфигурации с языком

Параметры:
* stappler::search::Language - один из предустановленных языков


# ::stappler::search::Configuration::setLanguage(stappler::search::Language)

## BRIEF

Устанавливает целевой язык конфигурации

## CONTENT

Доступ: public

Устанавливает целевой язык конфигурации

Параметры:
* stappler::search::Language


# ::stappler::search::Configuration::getLanguage() const

## BRIEF

Возвращает целевой язык конфигурации

## CONTENT

Доступ: public

Возвращает целевой язык конфигурации

Возвращает:
* stappler::search::Language

# ::stappler::search::Configuration::setStemmer(stappler::search::ParserToken,stappler::search::Configuration::StemmerCallback&&)

## BRIEF

Устанавливает функция стеммера для типа токена

## CONTENT

Доступ: public

Устанавливает функция стеммера для типа токена. Эта функция вызывается для преобразования только конкретного вида токенов.

Параметры:
* stappler::search::ParserToken
* stappler::search::Configuration::StemmerCallback&&


# ::stappler::search::Configuration::getStemmer(stappler::search::ParserToken) const

## BRIEF

Возвращает специализированную функцию стеммера для токена

## CONTENT

Доступ: public

Возвращает специализированную функцию стеммера для токена, если она установлена

Параметры:
* stappler::search::ParserToken

Возвращает:
* StemmerCallback

# ::stappler::search::Configuration::setCustomStopwords(stappler::StringView const*)

## BRIEF

Устанавливает дополнительный список слов-исключений

## CONTENT

Доступ: public

Устанавливает дополнительный список слов-исключений

Параметры:
* stappler::StringView const* - казатель на начало списка. Список должен заканчиваться пустым StringView.


# ::stappler::search::Configuration::getCustomStopwords() const

## BRIEF

Возвращает указательн а список дополнительных слов-исключений

## CONTENT

Доступ: public

Возвращает указательн а список дополнительных слов-исключений

Возвращает:
* stappler::StringView const*

# ::stappler::search::Configuration::setPreStem(stappler::search::Configuration::PreStemCallback&&)

## BRIEF

Устанавливает функцию фильтрации для стеммера

## CONTENT

Доступ: public

Устанавливает функцию фильтрации для стеммера. Эта функция позволяет исключить токен из стемминга, либо разделить его на несколько взаимно перекрывающихся токенов (например, на отдельно компоненты домена в URL и цельную строку домена).

Параметры:
* stappler::search::Configuration::PreStemCallback&&


# ::stappler::search::Configuration::getPreStem() const

## BRIEF

Возвращает функцию фильтрации стеммера

## CONTENT

Доступ: public

Возвращает функцию фильтрации стеммера

Возвращает:
* PreStemCallback&

# ::stappler::search::Configuration::stemPhrase(stappler::StringView const&,stappler::search::Configuration::StemWordCallback const&) const

## BRIEF

Запускает стеммер для фразы

## CONTENT

Доступ: public

Запускает стеммер для фразы

Параметры:
* stappler::StringView const& - текст фразы
* stappler::search::Configuration::StemWordCallback const& - функция, получающая результат стемминга

Параметры функции:
* StringView - исходной слово
* StringView - коренной элемент слова
* ParserToken - тип токена, определённый для слова


# ::stappler::search::Configuration::stemHtml(stappler::StringView const&,stappler::search::Configuration::StemWordCallback const&) const

## BRIEF

Запускает стеммер для html

## CONTENT

Доступ: public

Запускает стеммер для html. Функция разбивает HTML на фразы, удаляя теги. Затем, запускает разбор для этих фраз.

Параметры:
* stappler::StringView const& - исходный текст
* stappler::search::Configuration::StemWordCallback const& - функция получения результатов

Параметры функции:
* StringView - исходной слово
* StringView - коренной элемент слова
* ParserToken - тип токена, определённый для слова


# ::stappler::search::Configuration::stemWord(stappler::StringView const&,stappler::search::ParserToken,stappler::search::Configuration::StemWordCallback const&) const

## BRIEF

Запускает стеммер для одиночного слова

## CONTENT

Доступ: public

Запускает стеммер для одиночного слова

Параметры:
* stappler::StringView const& - слово
* stappler::search::ParserToken - соотвествующий тип токена
* stappler::search::Configuration::StemWordCallback const& - функция результата

Возвращает:
* bool - true если разбор успешен

Параметры функции результата:
* StringView - исходной слово
* StringView - коренной элемент слова
* ParserToken - тип токена, определённый для слова

# ::stappler::search::Configuration::makeHeadline(stappler::search::Configuration::HeadlineConfig const&,stappler::StringView const&,Vector<stappler::search::Configuration::String> const&) const

## BRIEF

Создаёт поисковые заголовки для поискового запроса

## CONTENT

Доступ: public

Создаёт поисковые заголовки для поискового запроса

Параметры:
* stappler::search::Configuration::HeadlineConfig const& - конфигурация заголовков
* stappler::StringView const& - исходный текст
* Vector<stappler::search::Configuration::String> const& - вектор запрошенных слов

Возвращает:
* String - строка сгенерированных заголовков

# ::stappler::search::Configuration::makeHtmlHeadlines(stappler::search::Configuration::HeadlineConfig const&,stappler::StringView const&,Vector<stappler::search::Configuration::String> const&,size_t) const

## BRIEF

Создаёт поисковые заголовки для поискового запроса из HTML

## CONTENT

Доступ: public

Создаёт поисковые заголовки для поискового запроса из HTML

Параметры:
* stappler::search::Configuration::HeadlineConfig const& - конфигурация заголовков
* stappler::StringView const& - исходный текст
* Vector<stappler::search::Configuration::String> const& - вектор запрошенных слов
* size_t - максимальное число фрагментов для создания

Возвращает:
* String - строка сгенерированных заголовков

# ::stappler::search::Configuration::makeHeadlines(stappler::search::Configuration::HeadlineConfig const&,Callback<void (const Function<bool (const stappler::StringView &, const stappler::StringView &)>)> const&,Vector<stappler::search::Configuration::String> const&,size_t) const

## BRIEF

Обобщённая функция создания заголовков

## CONTENT

Доступ: public

Обобщённая функция создания заголовков

Параметры:
* stappler::search::Configuration::HeadlineConfig const& - конфигурация заголовков
* Callback<void (const Function<bool (const stappler::StringView &, const stappler::StringView &)>)> const& - функция, возвращающая фрагменты текста из исходного материала
* Vector<stappler::search::Configuration::String> const& - вектор запрошенных слов
* size_t - максимальное число фрагментов для создания

Возвращает:
* String - строка сгенерированных заголовков

# ::stappler::search::Configuration::stemQuery(Vector<stappler::search::SearchData> const&) const

## BRIEF

Вычленяет корни из поисковых данных

## CONTENT

Доступ: public

Вычленяет корни из поисковых данных. Создаёт исходный материал для порождения заголовков поиска.

Параметры:
* Vector<stappler::search::SearchData> const&

Возвращает:
* Vector<stappler::search::Configuration::String>

# ::stappler::search::Configuration::makeSearchVector(stappler::search::Configuration::SearchVector&,stappler::StringView,SearchData::Rank,size_t,Callback<void (stappler::StringView, stappler::StringView, stappler::search::ParserToken)> const&) const

## BRIEF

Создаёт вектор поискового индекса из фразы

## CONTENT

Доступ: public

Создаёт вектор поискового индекса из фразы. Вектор поискового индекса сопоставляет корень слова с вектором его вхождений в текст.

Параметры:
* stappler::search::Configuration::SearchVector& - целевеой поисковой вектор. Функцию можно вызывать много раз для заполнения одного вектора
* stappler::StringView - фраза для разбора
* SearchData::Rank - градация значимости для текущей строки
* size_t - текущее положение в тексте документа для формирования индекса вхождения слова
* Callback<void (stappler::StringView, stappler::StringView, stappler::search::ParserToken)> const& функция для получения результатов стеммера (например, для создания словаря слов в текстах)

Возвращает:
* size_t - индекс слова, следующий за последним. Для использовании в одном индексе, этот результат нужно передать в следующий запрос `makeSearchVector`

# ::stappler::search::Configuration::encodeSearchVector(stappler::search::Configuration::SearchVector const&,SearchData::Rank) const

## BRIEF

Кодирует поисковой вектор в строку

## CONTENT

Доступ: public

Кодирует поисковой вектор в строку

Параметры:
* stappler::search::Configuration::SearchVector const&
* SearchData::Rank - базовая радация значимости

Возвращает:
* String

# ::stappler::search::Configuration::parseQuery(stappler::StringView) const

## BRIEF

Разбирает поисковой запрос из строки

## CONTENT

Доступ: public

Разбирает поисковой запрос из строки. Создаёт бинарное дерево запроса с соотвествующими операциями.

Параметры:
* stappler::StringView - строка запроса

Возвращает:
* stappler::search::SearchQuery - бинарное дерево запроса

# ::stappler::search::Configuration::isMatch(stappler::search::Configuration::SearchVector const&,stappler::StringView) const

## BRIEF

Проверяет, соотвествует ли поисковой вектор запросу

## CONTENT

Доступ: public

Проверяет, соотвествует ли поисковой вектор запросу

Параметры:
* stappler::search::Configuration::SearchVector const&
* stappler::StringView - запрос в виде строки

Возвращает:
* bool - true если запрос соотвествует вектору

# ::stappler::search::Configuration::isMatch(stappler::search::Configuration::SearchVector const&,stappler::search::SearchQuery const&) const

## BRIEF

Проверяет, соотвествует ли поисковой вектор запросу

## CONTENT

Доступ: public

Проверяет, соотвествует ли поисковой вектор запросу

Параметры:
* stappler::search::Configuration::SearchVector const&
* stappler::search::SearchQuery const&

Возвращает:
* bool - true если запрос соотвествует вектору


# ::stappler::search::Configuration::getEnvForToken(stappler::search::ParserToken) const

## BRIEF

Возвращает текущий статический контекст стеммера для потока и токена

## CONTENT

Доступ: protected

Возвращает текущий статический контекст стеммера для потока и токена

Параметры:
* stappler::search::ParserToken

Возвращает:
* stappler::search::StemmerEnv*

# ::stappler::search::Configuration::_language

## BRIEF

Текущий выбранный язык

## CONTENT

Доступ: protected

Текущий выбранный язык

Тип: stappler::search::Language


# ::stappler::search::Configuration::_primary

## BRIEF

Контекст стеммера для основного языка

## CONTENT

Доступ: protected

Контекст стеммера для основного языка

Тип: stappler::search::StemmerEnv*


# ::stappler::search::Configuration::_secondary

## BRIEF

Контекст стеммера для вторичного языка

## CONTENT

Доступ: protected

Контекст стеммера для вторичного языка. Контекст вторичного языка имеет смысл, если необходимо разбирать тексты, имеющие разную систему письменности (например, латиницу и кириллицу). В таком случае, для каждой системы письменности будут использоваться свои правила стеммера.

Тип: stappler::search::StemmerEnv*


# ::stappler::search::Configuration::_stemmers

## BRIEF

Выделенные стеммеры для токенов

## CONTENT

Доступ: protected

Выделенные стеммеры для токенов

Тип: Map<stappler::search::ParserToken, stappler::search::Configuration::StemmerCallback>


# ::stappler::search::Configuration::_preStem

## BRIEF

Функция фильтрации стеммера

## CONTENT

Доступ: protected

Функция фильтрации стеммера

Тип: PreStemCallback


# ::stappler::search::Configuration::_customStopwords

## BRIEF

Дополнительные слова-исключения

## CONTENT

Доступ: protected

Дополнительные слова-исключения

Тип: stappler::StringView const*
