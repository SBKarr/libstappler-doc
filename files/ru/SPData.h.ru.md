Title: SPData.h


# STAPPLER_DATA_SPDATA_H_

## BRIEF

Общий заголовок для модуля данных

## CONTENT

Общий заголовок для модуля данных. Определяет функции для чтения данных из аргументов командной строки и подключает все заголовки модуля данных.

# ::stappler::data::parseCommandLineOptions<typename,typename>(Output&,int,char const*[],Callback<void (Output &, stappler::StringView)> const&,Callback<int (Output &, char, const char *)> const&,Callback<int (Output &, const stappler::StringView &, int, const char **)> const&)

## BRIEF

Разбирает параметры командной строки

## CONTENT

Разбирает параметры командной строки.

Параметры шаблона:
* typename Interface - используемый интерфейс памяти
* typename Output - тип, используемый в качестве результата разбора параметров

Параметры:
* Output& - (вывод) объект, содаржащий данные командной строки
* int - число аргументов командной строки
* char const*[] - аргументы командной строки. Предполагается кодирование UTF-8.
* Callback<void (Output &, stappler::StringView)> const& - функция, вызываемая для разбора стандартного текстового аргумента
* Callback<int (Output &, char, const char *)> const& - функция, вызываемая для разбора простых односимвольных переключателей (-c). Может читать больше одного символа из переданной строки (последнего аргумента). Должна вернуть число прочитанных символов.
* Callback<int (Output &, const stappler::StringView &, int, const char **)> const& - функция, вызываемая для разбора текстовых переключателей (--text). Получает целое слово без префикса --. Может читать больше одного слова из последнего аргумента. Должна вернуть число прочитанных слов.

Возвращает:
* bool - true если аргументы успешно разобраны

# ::stappler::data::parseCommandLineOptions<typename,typename>(Output&,int,char16_t const*[],Callback<void (Output &, stappler::StringView)> const&,Callback<int (Output &, char, const char *)> const&,Callback<int (Output &, const stappler::StringView &, int, const char **)> const&)

## BRIEF

Разбирает параметры командной строки

## CONTENT

Разбирает параметры командной строки. Автоматически декодирует UTF-16 в UTF-8

Параметры шаблона:
* typename Interface - используемый интерфейс памяти
* typename Output - тип, используемый в качестве результата разбора параметров

Параметры:
* Output& - (вывод) объект, содаржащий данные командной строки
* int - число аргументов командной строки
* char16_t const*[] - аргументы командной строки. Предполагается кодирование UTF-16.
* Callback<void (Output &, stappler::StringView)> const& - функция, вызываемая для разбора стандартного текстового аргумента
* Callback<int (Output &, char, const char *)> const& - функция, вызываемая для разбора простых односимвольных переключателей (-c). Может читать больше одного символа из переданной строки (последнего аргумента). Должна вернуть число прочитанных символов.
* Callback<int (Output &, const stappler::StringView &, int, const char **)> const& - функция, вызываемая для разбора текстовых переключателей (--text). Получает целое слово без префикса --. Может читать больше одного слова из последнего аргумента. Должна вернуть число прочитанных слов.

Возвращает:
* bool - true если аргументы успешно разобраны

# ::stappler::data::parseCommandLineOptions<typename,typename>(int,char const*[],Callback<int (Output &, char, const char *)> const&,Callback<int (Output &, const stappler::StringView &, int, const char **)> const&)

## BRIEF

Разбирает параметры командной строки

## CONTENT

Разбирает параметры командной строки. Кодирует простые аргументы в простой вектор отдельно от типа для разбора параметров

Параметры шаблона:
* typename Interface - используемый интерфейс памяти
* typename Output - тип, используемый в качестве результата разбора параметров

Параметры:
* int - число аргументов командной строки
* char const*[] - аргументы командной строки. Предполагается кодирование UTF-8.
* Callback<int (Output &, char, const char *)> const& - функция, вызываемая для разбора простых односимвольных переключателей (-c). Может читать больше одного символа из переданной строки (последнего аргумента). Должна вернуть число прочитанных символов.
* Callback<int (Output &, const stappler::StringView &, int, const char **)> const& - функция, вызываемая для разбора текстовых переключателей (--text). Получает целое слово без префикса --. Может читать больше одного слова из последнего аргумента. Должна вернуть число прочитанных слов.

Возвращает:
* Pair<Output, typename Interface::template VectorType<typename Interface::StringType>> - пара значений - тип для декодирования реззультата и простой вектор со списком тривиальных аргументов

# ::stappler::data::parseCommandLineOptions<typename,typename>(int,char16_t const*[],Callback<int (Output &, char, const char *)> const&,Callback<int (Output &, const stappler::StringView &, int, const char **)> const&)

## BRIEF

Разбирает параметры командной строки

## CONTENT

Разбирает параметры командной строки. Кодирует простые аргументы в простой вектор отдельно от типа для разбора параметров. Автоматически декодирует UTF-16 в UTF-8

Параметры шаблона:
* typename Interface - используемый интерфейс памяти
* typename Output - тип, используемый в качестве результата разбора параметров


Параметры:
* int - число аргументов командной строки
* char16_t const*[] - аргументы командной строки. Предполагается кодирование UTF-16.
* Callback<int (Output &, char, const char *)> const& - функция, вызываемая для разбора простых односимвольных переключателей (-c). Может читать больше одного символа из переданной строки (последнего аргумента). Должна вернуть число прочитанных символов.
* Callback<int (Output &, const stappler::StringView &, int, const char **)> const& - функция, вызываемая для разбора текстовых переключателей (--text). Получает целое слово без префикса --. Может читать больше одного слова из последнего аргумента. Должна вернуть число прочитанных слов.

Возвращает:
* Pair<Output, typename Interface::template VectorType<typename Interface::StringType>> - пара значений - тип для декодирования реззультата и простой вектор со списком тривиальных аргументов

# ::stappler::data::readUrlencoded<typename>(stappler::StringView,size_t)

## BRIEF

Читает параметры, кодированные для передачи в URL.

## CONTENT

Читает параметры, кодированные для передачи в URL. Распознаёт простые пары ключ-значение (key=value), ассоциативные массивы (key[subkey]=value), массивы (array[]=value).

Параметры шаблона:
* typename Interface - используемый интерфейс памяти

Параметры:
* stappler::StringView - исходная строка с кодированными данными
* size_t - максимальная длина переменной в строке

Возвращает:
* data::ValueTemplate<Interface> - распознанные данные
