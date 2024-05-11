Title: SPSearchQuery.h


# CORE_SEARCH_SPSEARCHQUERY_H_

## BRIEF

Заголовок функций текстового поискового запроса

## CONTENT

Заголовок функций текстового поискового запроса


# ::stappler::search::Normalization

## BRIEF

Способ нормализации функции вычисления совпадений

## CONTENT

Способ нормализации функции вычисления совпадений. Типы могут комбинироваться друг с другом.

Значения:
* Default
* DocLengthLog - результат делится на логарифм от длины документа в словах
* DocLength - результат делится на длину докумнта в словах
* UniqueWordsCount - результат делится на число уникальных слов в документе
* UniqueWordsCountLog - результат делится на логарифм от числа уникальных слов в документе
* Self - результат делится на себя + 1


# ::stappler::search::operator|(stappler::search::Normalization const&,stappler::search::Normalization const&)

## BRIEF

Автоматически созданная функция битового флага

## CONTENT

Автоматически созданная функция битового флага

Параметры:
* stappler::search::Normalization const&
* stappler::search::Normalization const&

Возвращает:
* stappler::search::Normalization

# ::stappler::search::operator&(stappler::search::Normalization const&,stappler::search::Normalization const&)

## BRIEF

Автоматически созданная функция битового флага

## CONTENT

Автоматически созданная функция битового флага

Параметры:
* stappler::search::Normalization const&
* stappler::search::Normalization const&

Возвращает:
* stappler::search::Normalization

# ::stappler::search::operator^(stappler::search::Normalization const&,stappler::search::Normalization const&)

## BRIEF

Автоматически созданная функция битового флага

## CONTENT

Автоматически созданная функция битового флага

Параметры:
* stappler::search::Normalization const&
* stappler::search::Normalization const&

Возвращает:
* stappler::search::Normalization

# ::stappler::search::operator|=(stappler::search::Normalization&,stappler::search::Normalization const&)

## BRIEF

Автоматически созданная функция битового флага

## CONTENT

Автоматически созданная функция битового флага

Параметры:
* stappler::search::Normalization&
* stappler::search::Normalization const&

Возвращает:
* stappler::search::Normalization&

# ::stappler::search::operator&=(stappler::search::Normalization&,stappler::search::Normalization const&)

## BRIEF

Автоматически созданная функция битового флага

## CONTENT

Автоматически созданная функция битового флага

Параметры:
* stappler::search::Normalization&
* stappler::search::Normalization const&

Возвращает:
* stappler::search::Normalization&

# ::stappler::search::operator^=(stappler::search::Normalization&,stappler::search::Normalization const&)

## BRIEF

Автоматически созданная функция битового флага

## CONTENT

Автоматически созданная функция битового флага

Параметры:
* stappler::search::Normalization&
* stappler::search::Normalization const&

Возвращает:
* stappler::search::Normalization&

# ::stappler::search::operator==(stappler::search::Normalization const&,std::underlying_type<Normalization>::type const&)

## BRIEF

Автоматически созданная функция битового флага

## CONTENT

Автоматически созданная функция битового флага

Параметры:
* stappler::search::Normalization const&
* std::underlying_type<Normalization>::type const&

Возвращает:
* bool

# ::stappler::search::operator==(std::underlying_type<Normalization>::type const&,stappler::search::Normalization const&)

## BRIEF

Автоматически созданная функция битового флага

## CONTENT

Автоматически созданная функция битового флага

Параметры:
* std::underlying_type<Normalization>::type const&
* stappler::search::Normalization const&

Возвращает:
* bool

# ::stappler::search::operator!=(stappler::search::Normalization const&,std::underlying_type<Normalization>::type const&)

## BRIEF

Автоматически созданная функция битового флага

## CONTENT

Автоматически созданная функция битового флага

Параметры:
* stappler::search::Normalization const&
* std::underlying_type<Normalization>::type const&

Возвращает:
* bool

# ::stappler::search::operator!=(std::underlying_type<Normalization>::type const&,stappler::search::Normalization const&)

## BRIEF

Автоматически созданная функция битового флага

## CONTENT

Автоматически созданная функция битового флага

Параметры:
* std::underlying_type<Normalization>::type const&
* stappler::search::Normalization const&

Возвращает:
* bool

# ::stappler::search::operator~(stappler::search::Normalization const&)

## BRIEF

Автоматически созданная функция битового флага

## CONTENT

Автоматически созданная функция битового флага

Параметры:
* stappler::search::Normalization const&

Возвращает:
* stappler::search::Normalization

# ::stappler::search::RankingValues

## BRIEF

Веса значимости для совпадений по категориям

## CONTENT

Веса значимости для совпадений по категориям

# ::stappler::search::RankingValues::A

## BRIEF

Вес категории A

## CONTENT

Вес категории A

Тип: float


# ::stappler::search::RankingValues::B

## BRIEF

Вес категории B

## CONTENT

Вес категории B

Тип: float


# ::stappler::search::RankingValues::C

## BRIEF

Вес категории C

## CONTENT

Вес категории C

Тип: float


# ::stappler::search::RankingValues::D

## BRIEF

Вес категории D

## CONTENT

Вес категории D

Тип: float


# ::stappler::search::RankingValues::positionFactor

## BRIEF

Фактор значимости позиции слова в документе

## CONTENT

Фактор значимости позиции слова в документе. Значимость вычисляется как линейнай интерполяция между 1.0 и фактором значимости, так, что слово в середине документа имеет значимость `(RANK * (1.0 + positionFactor) / 2.0)`

Тип: float


# ::stappler::search::RankingValues::rank(stappler::search::SearchRank) const

## BRIEF

Возвращает вес для ранга значимости

## CONTENT

Возвращает вес для ранга значимости

Параметры:
* stappler::search::SearchRank

Возвращает:
* float

# ::stappler::search::SearchVector

## BRIEF

Полнотекстовый поисковой вектор

## CONTENT

Полнотекстовый поисковой вектор. Оптимизированная структура, представляющая документ в удобном для поиска виде.

# ::stappler::search::SearchVector::MatchVector

## BRIEF

Тип вектора позиций слова

## CONTENT

Тип вектора позиций слова


# ::stappler::search::SearchVector::documentLength

## BRIEF

Длина документа

## CONTENT

Длина документа

Тип: size_t


# ::stappler::search::SearchVector::words

## BRIEF

Карта слов в документе

## CONTENT

Карта слов в документе

Тип: Map<stappler::StringView, stappler::search::SearchVector::MatchVector>


# ::stappler::search::SearchVector::empty() const

## BRIEF

Проверка на пустоту

## CONTENT

Проверка на пустоту

Возвращает:
* bool

# ::stappler::search::SearchQuery

## BRIEF

Структура поискового запроса

## CONTENT

Структура поискового запроса


# ::stappler::search::SearchQuery::Block

## BRIEF

Тип замыкания блока

## CONTENT

Тип замыкания блока

Значения:
* None - нет
* Parentesis - скобки (для логических выражений)
* Quoted - кавычки (для текстовых выражений)


# ::stappler::search::SearchQuery::Format

## BRIEF

Формат записи запроса

## CONTENT

Формат записи запроса

Значения:
* Stappler - собственный формат
* Postgresql - формат, распознаваемый Postgresql


# ::stappler::search::SearchQuery::block

## BRIEF

Тип замыкания блока

## CONTENT

Тип замыкания блока

Тип: stappler::search::SearchQuery::Block


# ::stappler::search::SearchQuery::offset

## BRIEF

Допустимое смещение для слов операции

## CONTENT

Допустимое смещение для слов операции. Например, расстояние между словами при следовании, в словах.

Тип: size_t


# ::stappler::search::SearchQuery::op

## BRIEF

Операция в узле дерева

## CONTENT

Операция в узле дерева

Тип: stappler::search::SearchOp


# ::stappler::search::SearchQuery::value

## BRIEF

Значение токена

## CONTENT

Значение токена

Тип: stappler::mem_pool::String


# ::stappler::search::SearchQuery::source

## BRIEF

Исходный текст токена

## CONTENT

Исходный текст токена

Тип: stappler::StringView


# ::stappler::search::SearchQuery::args

## BRIEF

Листья текущего элемента дерева

## CONTENT

Листья текущего элемента дерева. Для оптимизации операции комплектуются по последовательности. Так, три последовательных слова будут записаны в качестве трёх листьев одного элемента.

Тип: Vector<stappler::search::SearchQuery>


# ::stappler::search::SearchQuery::SearchQuery()

## BRIEF

Конструктор по умолчанию

## CONTENT

Конструктор по умолчанию


# ::stappler::search::SearchQuery::SearchQuery(stappler::StringView,uint32_t,stappler::StringView)

## BRIEF

Конструктор листового элемента

## CONTENT

Конструктор листового элемента

Параметры:
* stappler::StringView - токен
* uint32 - допустимое смещение для операции
* stappler::StringView - исходный текст токена


# ::stappler::search::SearchQuery::SearchQuery(stappler::search::SearchOp,stappler::StringView)

## BRIEF

Конструктор корневого элемента или элеммента операции

## CONTENT

Конструктор корневого элемента или элеммента операции

Параметры:
* stappler::search::SearchOp - операция
* stappler::StringView - исходный текст токена


# ::stappler::search::SearchQuery::clear()

## BRIEF

Очищает элемент запроса

## CONTENT

Очищает элемент запроса


# ::stappler::search::SearchQuery::encode(Callback<void (stappler::StringView)> const&,stappler::search::SearchQuery::Format) const

## BRIEF

Кодирует низлежащее дерево в заданный формат

## CONTENT

Кодирует низлежащее дерево в заданный формат

Параметры:
* Callback<void (stappler::StringView)> const& - функция возврата результата
* stappler::search::SearchQuery::Format - формат


# ::stappler::search::SearchQuery::describe(std::ostream&,size_t) const

## BRIEF

Выводит в поток отладочное описание структуры запроса

## CONTENT

Выводит в поток отладочное описание структуры запроса

Параметры:
* std::ostream&
* size_t


# ::stappler::search::SearchQuery::foreach(Callback<void (stappler::StringView, stappler::StringView)> const&) const

## BRIEF

Обходит низлежащее дерево, возвращая токены и исходные строки

## CONTENT

Обходит низлежащее дерево, возвращая токены и исходные строки. Используется для формирования вектора запроса при создании поисковых заголовков.

Параметры:
* Callback<void (stappler::StringView, stappler::StringView)> const&

# ::stappler::search::SearchQuery::neg

## BRIEF

Метка отрицания поддерева запроса

## CONTENT

Метка отрицания поддерева запроса

Тип: bool

# ::stappler::search::SearchQuery::empty() const

## BRIEF

Проверяет запрос на пустоту

## CONTENT

Проверяет запрос на пустоту

Возвращает:
* bool - true если запрос пуст

# ::stappler::search::SearchQuery::isMatch(stappler::search::SearchVector const&) const

## BRIEF

Проверяет, что поисковой вектор имеет положительное совпадение по запросу

## CONTENT

Проверяет, что поисковой вектор имеет положительное совпадение по запросу

Параметры:
* stappler::search::SearchVector const&

Возвращает:
* bool - true если есть совпадение

# ::stappler::search::SearchQuery::isMatch(stappler::BytesView const&) const

## BRIEF

Проверяет, что поисковой вектор имеет положительное совпадение по запросу

## CONTENT

Проверяет, что поисковой вектор имеет положительное совпадение по запросу. Поисковой вектор кодирован в бинарном формате (см. Configuration::encodeSearchVectorData)

Параметры:
* stappler::BytesView const&

Возвращает:
* bool - true если есть совпадение

# ::stappler::search::SearchQuery::rankQuery(stappler::search::SearchVector const&,stappler::search::Normalization,stappler::search::RankingValues) const

## BRIEF

Выполняет оценку качества совпадения поискового вектора с запросом

## CONTENT

Выполняет оценку качества совпадения поискового вектора с запросом. Качество зависит от числа совпадений на длину запроса, и ранга совпавших значений.

Параметры:
* stappler::search::SearchVector const& - поисковой вектор
* stappler::search::Normalization - тип нормализации значения
* stappler::search::RankingValues - веса для рангов значений

Возвращает:
* float

# ::stappler::search::SearchQuery::rankQuery(stappler::BytesView const&,stappler::search::Normalization,stappler::search::RankingValues) const

## BRIEF

Выполняет оценку качества совпадения поискового вектора с запросом

## CONTENT

Выполняет оценку качества совпадения поискового вектора с запросом. Качество зависит от числа совпадений на длину запроса, и ранга совпавших значений. Поисковой вектор кодирован в бинарном формате (см. Configuration::encodeSearchVectorData)

Параметры:
* stappler::BytesView const& - поисковой вектор
* stappler::search::Normalization - тип нормализации значения
* stappler::search::RankingValues - веса для рангов значений

Возвращает:
* float

# ::stappler::search::SearchQuery::normalize()

## BRIEF

Приводит запрос к нормализованной форме, если это возможно

## CONTENT

Приводит запрос к нормализованной форме, если это возможно. Отрицания выносятся максимально близко к единичным элементам.

# ::stappler::search::SearchQuery::decompose(Callback<void (stappler::StringView)> const&,Callback<void (stappler::StringView)> const&) const

## BRIEF

Декомпозирует запрос на токены, которые должны входить или не должны входить в запрос

## CONTENT

Декомпозирует запрос на токены, которые должны входить или не должны входить в запрос

Параметры:
* Callback<void (stappler::StringView)> const& - функция, вызываемая для значения, которое должно входить в вектор
* Callback<void (stappler::StringView)> const& - функция, вызываемая для значения, которое не должно входить в вектор
