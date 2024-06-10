Title: Базы данных: PostgreSQL

# Базы данных: PostgreSQL

Для работы необходима версия PostgreSQL от 12.0.

Для использования необходимо передать параметр `driver` как `pgsql` или `pgsql:<путь к библиотеке pgsql>`.

Поддерживаемые параметры инициализации (`PQconnectdbParams`):
* `host`
* `hostaddr`
* `port`
* `dbname`
* `user`
* `password`
* `passfile`
* `channel_binding`
* `connect_timeout`
* `client_encoding`
* `options`
* `application_name`
* `fallback_application_name`
* `keepalives`
* `keepalives_idle`
* `keepalives_interval`
* `keepalives_count`
* `tcp_user_timeout`
* `replication`
* `gssencmode`
* `sslmode`
* `requiressl`
* `sslcompression`
* `sslcert`
* `sslkey`
* `sslpassword`
* `sslrootcert`
* `sslcrl`
* `requirepeer`
* `ssl_min_protocol_version`
* `ssl_max_protocol_version`
* `krbsrvname`
* `gsslib`
* `service`
* `target_session_attrs`
