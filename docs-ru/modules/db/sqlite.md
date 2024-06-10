Title: Базы данных: sqlite

# Базы данных: sqlite

Адаптер к SQLite встроен в систему.

Для использования необходимо передать параметр `driver` как `sqlite`.

Параметры:
* `dbname` — путь к файлу БД в формате POSIX
* `mode` — режим открытия файла: `ro/rw/rwc/memory`
* `cache` — режим кеширования: `shared` для `SQLITE_OPEN_SHAREDCACHE`, `private` для `SQLITE_OPEN_PRIVATECACHE`
* `threading` — `serialized` для `SQLITE_OPEN_FULLMUTEX`, `multithread` для `SQLITE_OPEN_NOMUTEX`
* `journal` — режим журналирования: `delete, truncate, persist, memory, wal, off`
