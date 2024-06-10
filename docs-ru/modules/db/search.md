Title: Полнотекстовый поиск

# Полнотекстовый поиск

Полнотекстовый поиск определяется, как поле `Field::FullTextView`.

Пример определения:

```cpp
search::Configuration _search;

Field::FullTextView("tsv", db::FullTextViewFn([this] (const db::Scheme &scheme, const db::Value &obj) -> db::FullTextVector {
	size_t count = 0;
	db::FullTextVector vec;

	count = _search.makeSearchVector(vec, obj.getString("key"), db::FullTextRank::A, count);
	for (auto &it : obj.getArray("text")) {
		count = _search.makeSearchVector(vec, it.getString(), db::FullTextRank::B, count);
	}

	return vec;
}),  db::FullTextQueryFn([this] (const db::Value &data) -> db::FullTextQuery {
	return _search.parseQuery(data.getString());
}), _search, Vector<String>({"key", "text"})),
```

Для работы полнотекстового поиска необходима функция `FullTextViewFn`. Она возвращает заполненный вектор поиска на основе исходного объекта, в котором будут включены определённые поля из списка.

Опциональная функция `FullTextQueryFn` определяет способ конвертации запроса к полю в полнотекстовый запрос.

Для запроса используется `Query`.

```cpp
_scheme.select(_transaction, Query().select(tsv, "test fulltext \"query\""));
```

Стандартный способ разбора запроса соотвествует [websearch_to_tsquery](https://www.postgresql.org/docs/current/textsearch-controls.html)