Title: Работа со строками

# Работа со строками

## Поддержка Unicode

Базовые функции конвертации:

```cpp
// Базовый заголовок
#include "SPUnicode.h"

namespace stappler::unicode {

// читает символ юникода из строки UTF-8 и возвращает число прочитанных байт
char32_t utf8Decode32(const char *ptr, uint8_t &offset);

// читает символ юникода из строки UTF-8, декодируя HTML-последовательности и возвращает число прочитанных байт
char32_t utf8HtmlDecode32(const char *ptr, uint8_t &offset);

// Возвращает длину кодирования символа Unicode в UTF-8 в байтах
uint8_t utf8EncodeLength(char32_t c);

// Кодирует символ Unicode в UTF-8 с использованием функтора. Вызывает функтор для каждого кодированного символа типа char.
template <typename PutCharFn>
uint8_t utf8EncodeCb(const PutCharFn &cb, char32_t c);

// Кодирует символ Unicode в UTF-8 в предустановленный буфер
uint8_t utf8EncodeBuf(char *ptr, char32_t ch);

// Кодирует символ Unicode в UTF-8 в строковый контейнер
uint8_t utf8Encode(std::string &str, char32_t ch);
uint8_t utf8Encode(memory::string &str, char32_t ch);

// Кодирует символ Unicode в UTF-8 в поток
uint8_t utf8Encode(std::ostream &str, char32_t ch);

// Читает символ юникода из строки UTF-16 и возвращает число прочитанных двухбайтовых символов
char32_t utf16Decode32(const char16_t *ptr, uint8_t &offset);

// Возвращает длину кодирования символа Unicode в UTF-16 в двухбайтовых символах
uint8_t utf16EncodeLength(char32_t c);

// Кодирует символ Unicode в UTF-16 с использованием функтора. Вызывает функтор для каждого кодированного символа типа char16_t.
template <typename PutCharFn>
uint8_t utf16EncodeCb(const PutCharFn &cb, char32_t c);

// Кодирует символ Unicode в UTF-16 в предустановленный буфер
uint8_t utf16EncodeBuf(char16_t *ptr, char32_t ch);

// Кодирует символ Unicode в UTF-16 в строковый контейнер
uint8_t utf16Encode(std::u16string &str, char32_t ch);
uint8_t utf16Encode(memory::u16string &str, char32_t ch);

// Кодирует символ Unicode в UTF-16 в поток
uint8_t utf16Encode(std::basic_ostream<char16_t> &out, char32_t ch);

}
```

Функции конвертации для строковых контейнеров (`SPString.h`), для работы необходимо указывать интерфейс памяти для новой строки:
* `string::toUtf8` — конвертирует из UTF-16 в UTF-8
* `string::toUtf16` — конвертирует из UTF-8 в UTF-16
* `string::toupper` — переводит строку в верхний регистр с учётом юникода
* `string::tolower` — переводит строку в нижний регистр с учётом юникода
* `string::totitle` — переводит строку в титульный регистр с учётом юникода

Функции сравнения (`SPStringView.h`):
* `string::compare_u` — сравнивает две строки по лексикографическим правилам символов юникода
* `string::caseCompare_u` — сравнивает две строки без учёта регистра


Также, тип [StringViewUtf8](nonowned.md) реализует чтение строки не по одиночным символам, а по кодовым точкам юникода

## Другие функции

Функции без поддержки Unicode (более быстрые, но только в C локали) (`SPString.h`):
* `string::apply_tolower_c` — применяет функцию std::tolower без учёта юникода к каждому символу строки
* `string::apply_toupper_c` — применяет функцию std::toupper без учёта юникода к каждому символу строки
* `string::compare_c` — сравнивает две строки лексикографически
* `string::caseCompare_c` — сравнивает две строки без учёта регистра в локали С

Прочие функции (`SPString.h`):
* `string::urlencode` - кодирует недопустимые в URL символы с помощью %XX
* `string::urldecode` - декодирует %XX
* `_itoa(int64_t number, char* buffer, size_t bufSize);` - кодирует целое число в буфер. Запись идёт в конец буфера (`StringView(buf + bufSize - ret, ret)`).
* `_itoa_len(int64_t number);` - вычисляет длину кодирования целого числа в строку
* `_dtoa(double number, char* buffer, size_t bufSize);` - кодирует число с плавающей точкой в буфер. Запись идёт в начало буфера (`StringView(buf, ret);`)
* `_dtoa_len(double number);` - вычисляет длину кодирования числа с плавающей точкой в строку

## Base16/Base64

Функции для кодирования и декодирования base16, base64 и base64url (вариант с альтернативными спецсимволами) реализованы единообразно (`SPString.h`):

* `[base16|base64|base64url]::encodeSize(size_t)` - вычисляет размер закодированного блока
* `[base16|base64|base64url]::decodeSize(size_t)` - вычисляет размер декодированного блока
* `[base16|base64|base64url]::encode(const CoderSource &source)` - кодирует в строковый контейнер (нужно указать интерфейс памяти)
* `[base16|base64|base64url]::encode(std::basic_ostream<char> &stream, const CoderSource &source)` - кодирует в поток
* `[base16|base64|base64url]::encode(const Callback<void(char)> &cb, const CoderSource &source)` - кодирует в функцию
* `[base16|base64|base64url]::encode(char *, size_t bsize, const CoderSource &source)` - кодирует в предопределённый буфер
* `[base16|base64|base64url]::decode(const CoderSource &source)` - декодирует в контейнер данных (нужно указать интерфейс)
* `[base16|base64|base64url]::decode(std::basic_ostream<char> &stream, const CoderSource &source)` - декодирует в поток
* `[base16|base64|base64url]::decode(const Callback<void(uint8_t)> &cb, const CoderSource &source)` - декодирует в функцию
* `[base16|base64|base64url]::decode(uint8_t *, size_t bsize, const CoderSource &source)` - декодирует в предустановленный буфер

## toString

`[mem_pool|mem_std]::toString` - универсальная функция конкатенации строк. Она принимает произвольное число аргументов, которые могут быть любым типом, способным к выводу в строковый поток.

Эта функция специализируется для подсистем памяти, чтобы при импорте подсистем памяти (`using namespace mem_std;`) не было необходимости указывать интерфейс памяти.

Функция оптимизирована для случая, когда выводятся только строки и числа. В таком случае, под строку распределяется сразу буфер известного размера, после чего аргументы копируются в него напрямую. Это значительно эффективнее любых других методов конкатенации.

## Функциональные потоки

Функторы вида `Function<void(StringView)>` или `Callback<void(StringView)>` могут использоваться как потоки для вывода:

```cpp
Function<void(StringView)> fnStream = [] (StringView str) {
	std::cout << str << "\n";
};

fnStream << "Hello world\n" << 12345 << ' ' << 12.345;
```

Такие потоки поддерживают строки, символы, целые числа и числа с плавающей точкой. Вывод в такие потоки значительно быстрее стандартных потоков.
