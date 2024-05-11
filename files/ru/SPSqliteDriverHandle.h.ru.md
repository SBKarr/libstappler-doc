Title: SPSqliteDriverHandle.h


# CORE_DB_SQLITE_SPSQLITEDRIVERHANDLE_H_

## BRIEF

Заголовок внутреннего интерфейса соединения БД SQLite

## CONTENT

Заголовок внутреннего интерфейса соединения БД SQLite

# ::stappler::db::sqlite::DriverHandle

## BRIEF

Структура внутреннего инетрфейса драйвера

## CONTENT

Структура внутреннего инетрфейса драйвера


# ::stappler::db::sqlite::DriverHandle::conn

## BRIEF

Соединение с БД

## CONTENT

Соединение с БД

Тип: sqlite3*


# ::stappler::db::sqlite::DriverHandle::driver

## BRIEF

Базовая структура драйвера

## CONTENT

Базовая структура драйвера

Тип: stappler::db::sqlite::Driver const*


# ::stappler::db::sqlite::DriverHandle::padding

## BRIEF

Пустая ячейка указателя

## CONTENT

Пустая ячейка указателя

Тип: void*


# ::stappler::db::sqlite::DriverHandle::pool

## BRIEF

Используемый пул памяти

## CONTENT

Используемый пул памяти

Тип: stappler::mempool::base::pool_t*


# ::stappler::db::sqlite::DriverHandle::name

## BRIEF

Имя БД

## CONTENT

Имя БД

Тип: stappler::StringView


# ::stappler::db::sqlite::DriverHandle::oidQuery

## BRIEF

Подготовленный запрос на создание нового идентификатора в БД

## CONTENT

Подготовленный запрос на создание нового идентификатора в БД

Тип: sqlite3_stmt*


# ::stappler::db::sqlite::DriverHandle::wordsQuery

## BRIEF

Подготовленный запрос на добавление слов для полнотекстового поиска

## CONTENT

Подготовленный запрос на добавление слов для полнотекстового поиска

Тип: sqlite3_stmt*


# ::stappler::db::sqlite::DriverHandle::userId

## BRIEF

Идентификатор текущего пользвателя

## CONTENT

Идентификатор текущего пользвателя

Тип: int64_t


# ::stappler::db::sqlite::DriverHandle::ctime

## BRIEF

Время соединения

## CONTENT

Время соединения

Тип: stappler::Time


# ::stappler::db::sqlite::DriverHandle::mutex

## BRIEF

Мутекс

## CONTENT

Мутекс

Тип: std::mutex


# ::stappler::db::sqlite::TextQueryData

## BRIEF

Данные текстового запроса

## CONTENT

Данные текстового запроса

Базовые классы:
* AllocBase


# ::stappler::db::sqlite::TextQueryData::query

## BRIEF

Текстовый запрос

## CONTENT

Текстовый запрос

Тип: stappler::db::FullTextQuery const*


# ::stappler::db::sqlite::TextQueryData::pos

## BRIEF

Вектор позитивных совпадений по словам

## CONTENT

Вектор позитивных совпадений по словам. Слова должны присутствовать в результате.

Тип: Vector<uint64_t>


# ::stappler::db::sqlite::TextQueryData::neg

## BRIEF

Вектор негативных совпадений по словам

## CONTENT

Вектор негативных совпадений по словам. Слова не должны присутствовать в результате.

Тип: Vector<uint64_t>


# ::stappler::db::sqlite::Driver_exec(stappler::mempool::base::pool_t*,sqlite3*,stappler::StringView)

## BRIEF

Функция выполнения одиночного запроса

## CONTENT

Функция выполнения одиночного запроса

Параметры:
* stappler::mempool::base::pool_t*
* sqlite3*
* stappler::StringView

Возвращает:
* stappler::StringView