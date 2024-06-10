Title: Невладеющие контейнеры

# Невладеющие контейнеры

Невладеющие контейнеры предназначены для чтения данных из некоего блока в памяти, не отвечая за его существование и без возможности его изменить.

Невладеющие контейнеры широко используются для выстраивания взаимоднйствия между разными [моделями памяти](mempool.md)

## StringView

```cpp
#include "SPStringView.h"

// базовый интерфейс
namespace stappler {

template <typename _CharType>
class StringViewBase {
public:
	Result<float> readFloat();
	Result<double> readDouble();
	Result<int64_t> readInteger(int base = 0);

	template<typename ... Args> void skipChars();
	template<typename ... Args> void skipUntil();

	template<typename ... Args> void backwardSkipChars();
	template<typename ... Args> void backwardSkipUntil();

	template<typename ... Args> Self readChars();
	template<typename ... Args> Self readUntil();

	template<typename ... Args> Self backwardReadChars();
	template<typename ... Args> Self backwardReadUntil();

	template<typename Separator, typename Callback> void split(const Callback &cb) const;

	template <typename ... Args> void trimChars();
	template <typename ... Args> void trimUntil();

	// Копирует данные с использованием пула памяти
	Self pdup(memory::pool_t * = nullptr) const;
};

class StringViewUtf8;

using StringView = StringViewBase<char>;
using WideStringView = StringViewBase<char16_t>;

}
```

Класс является тонкой обёрткой вокруг блока памяти, содержащего символы. **Внимание**: не может содержать символ `\0`, обратите внимание при прямой конвертации из блока памяти, длина может быть обрезана до первого встреченного `\0`.

Основное предназначение - чтение или пропуск символов с начала или с конца блока. В случае пропуска (`skip*`) не возвращает значения. В случае чтения (`read`) возвраает прочитанное. особый случай - двусторонняя обрезка (`trim`). Все варианты читаюих функций могут читать как символы, указаные в маске (`*Chars`), так и символы, не попадающие в маску (`*Until`).

Особая функция `split` разделяет строку по указанной маске символов, вызывая функтор для каждого сегмента.

В качестве параметра шаблона выступает определение набора символов (на основе соотвествующего базового класса, иначе ведёт к ошибке):

* `StringView::Chars<'a', 'b', 'c'>, WideStringView::Chars<u'a', u'b', u'c'>` - простое перечисление символов
* `StringView::Range<'a', 'z'>` - диапазон символов
* `StringView::Group<CharGroupId::Whitespace>` - именованная группа символов
* `StringView::Compose<Args ...>` - композиция из предыдущих.

## BytesView

```cpp
#include "SPBytesView.h"

// базовый интерфейс
namespace stappler {

template <Endian Endianess = Endian::Network>
class BytesViewTemplate {
public:
	template<uint8_t ... Args> void skipChars();
	template<uint8_t ... Args> void skipUntil();

	template<uint8_t ... Args> void backwardSkipChars();
	template<uint8_t ... Args> void backwardSkipUntil();

	template<uint8_t ... Args> Self readChars();
	template<uint8_t ... Args> Self readUntil();

	template<uint8_t ... Args> Self backwardReadChars();
	template<uint8_t ... Args> Self backwardReadUntil();

	template <uint8_t ... Args> void trimChars();
	template <uint8_t ... Args> void trimUntil();

	template<typename Separator, typename Callback> void split(const Callback &cb) const;

	uint64_t readUnsigned64();
	uint32_t readUnsigned32();
	uint32_t readUnsigned24();
	uint16_t readUnsigned16();
	uint8_t readUnsigned();

	double readFloat64();
	float readFloat32();
	float readFloat16();

	StringView readString(); // read null-terminated string
	StringView readString(size_t s); // read fixed-size string

	template<Endian OtherEndianess = Endianess>
	auto readBytes(size_t s) -> BytesViewTemplate<OtherEndianess>; // read fixed-size string

	// Копирует данные с использованием пула памяти
	Self pdup(memory::pool_t * = nullptr) const;
};

using BytesView = BytesViewTemplate<Endian::Host>;
using BytesViewNetwork = BytesViewTemplate<Endian::Network>;
using BytesViewHost = BytesViewTemplate<Endian::Host>;

}
```

Тонкая обёртка вокруг блока памяти, содержащего символы, включая `\0`. Предполагается, что для символов характерен определённый порядок байт при записи чисел.

Реализует схожие со `StringView` интерфейсы для чтения байт, но на основе только байтовых значений, а не масок символов.

Также, реализует интерфейсы для чтения побайтово записанных чисел в соотвествии с указанным в шаблоне порядком байт. Не имеет представления о знаках целых чисел, читающий сам должен конвертировать в знаковую форму, если необходимо.

Используется в первую очередь для разбора бинарных форматов.

## SpanView

```cpp
#include "SPSpanView.h"

// базовый интерфейс
namespace stappler {

template <typename _Type>
class SpanView {
public:
	const Type & front() const;
	const Type & back() const;

	const Type & at(const size_t &s) const;
	const Type & operator[] (const size_t &s) const;
	const Type & operator * () const;

	Self first(size_t count) const;
	Self last(size_t count) const;

	Self pop_front(size_t count = 1);
	Self pop_back(size_t count = 1);

	// копирует данные с использованием пула памяти
	// Копирование небезопасно, с использованием memcpy, стоит использовать только с POD-типами
	Self pdup(memory::pool_t *p = nullptr) const;

	Self sub(size_t pos = 0, size_t len = maxOf<size_t>()) const;
};

}
```

Тонкая обёртка вокруг блока памяти, хранящего плотно упакованный массив данных (например, `Vector`). Поддерживает чтение объектов с начала и с конца, произвольный доступ.

Используется для передачи массивов между интерфейсами памяти.

## Callback


```cpp
namespace stappler {

template <typename UnusedType>
class callback;

template <typename ReturnType, typename ... ArgumentTypes>
class callback <ReturnType (ArgumentTypes ...)> : public AllocPool {
public:
	using signature_type = ReturnType (ArgumentTypes ...);

	ReturnType operator () (ArgumentTypes ... args) const;
};

}
