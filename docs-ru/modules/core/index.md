Title: Модуль ядра

# Модуль ядра

Модуль ядра 'stappler_core' предоставляет [интерфейсы памяти](mempool.md), [невдажеющие контейнеры](nonowned.md), [строковые функции](strings.md) и другие функции.

## Функции подсчёта ссылок

Для подсчёта ссылок используется базовый тип `Ref` и умный указатель `Rc<T>`.

```cpp
#include "SPRef.h"

namespace stappler {

class Ref {
public:
	uint64_t retain();
	void release(uint64_t id);

	uint32_t getReferenceCount() const;

protected:
#if SP_REF_DEBUG
	// перегружается для отладки
	virtual bool isRetainTrackerEnabled() const {
		return false;
	}
#endif
};

template <typename Base>
class RcBase {
public:
	using Type = typename std::remove_cv<Base>::type;
	using Self = Rc<Base>;
	using Pointer = Type *;

	// двухэтапная инициализация с набором аргументов
	template <class... Args>
	static inline Self create(Args && ... args) {
		auto pRet = new Type();
		if (pRet->init(std::forward<Args>(args)...)) {
			return Self(pRet, true);
		} else {
			delete pRet;
			return Self(nullptr);
		}
	}

	// инициализация с конструктором
	template <class... Args>
	static inline Self alloc(Args && ... args) {
		return Self(new Type(std::forward<Args>(args)...), true);
	}
};

}
```

Для инициализации с использованием конструктора используется `Rc<Type>::alloc(arg1, arg2, ...);`.

Базовый тип Ref может работать с двухэтапной инициализацией, определяя функцию `bool init();`. Для двухэтапной инициализации `Rc<Type>::create(arg1, arg2, ...);`, аргументы передаются в функцию `init`.

## Именованные аргументы

Во многих случаях удобно реализовать функции, в которых порядок аргументов не определён, а способ работы ароумента определяется егоусловным именем. Для этого определён тип `ValueWrapper`:

```cpp
#include "SPCore.h"

namespace stappler {

// T - имя основного типа
// Flag - уникальное имя аргумента, по которому система будет отличать его от других
template <class T, class Flag>
struct ValueWrapper;

}

```

Пример использования:

```cpp

using MipLevels = ValueWrapper<uint32_t, class MipLevelFlag>;
using ArrayLayers = ValueWrapper<uint32_t, class ArrayLayersFlag>;
using Extent1 = ValueWrapper<uint32_t, class Extent1Flag>;
using BaseArrayLayer = ValueWrapper<uint32_t, class BaseArrayLayerFlag>;

struct ImageInfo {
	template<typename ... Args>
	ImageInfo(Args && ... args);

	void setup(Extent1 value);
	void setup(Extent2 value);
	void setup(Extent3 value);
	void setup(ImageFlags value);
	void setup(ForceImageFlags value);
	void setup(ImageType value);
	void setup(MipLevels value);
	void setup(ArrayLayers value);
	void setup(SampleCount value);
	void setup(ImageTiling value);
	void setup(ImageUsage value);
	void setup(ForceImageUsage value);
	void setup(ImageFormat value);
	void setup(PassType value);
	void setup(ImageHints value);
	void setup(StringView value);

	template <typename T>
	void define(T && t) {
		setup(std::forward<T>(t));
	}

	template <typename T, typename ... Args>
	void define(T && t, Args && ... args) {
		define(std::forward<T>(t));
		define(std::forward<Args>(args)...);
	}
};
```

Вызов конструктора структуры `ImageInfo` в таком случае возможен с аргументами в произвольном порядке, и для каждого будет вызвана своя функция `setup`. В отличии от структурной инициализации из C11, такой подход работает для любых функций.

## Функции времени

Представлены двумя типами: `Time` и `TimeInterval`. Их разрешающая способность ограничена 1 микросекундой (1'000'000 микросекунд в секунде).

```cpp
#include "SPTime.h"

namespace stappler {

class TimeInterval {
public:
	static TimeInterval between(const Time &, const Time &);

	constexpr static TimeInterval microseconds(uint64_t mksec);
	constexpr static TimeInterval milliseconds(uint64_t msec);
	constexpr static TimeInterval seconds(time_t sec);
	constexpr static TimeInterval floatSeconds(float sec);
};

class Time {
public:
	static Time now();

	/*
	 *     Sun, 06 Nov 1994 08:49:37 GMT  ; RFC 822, updated by RFC 1123
	 *     Sunday, 06-Nov-94 08:49:37 GMT ; RFC 850, obsoleted by RFC 1036
	 *     Sun Nov  6 08:49:37 1994       ; ANSI C's asctime() format
	 *     2011-04-28T06:34:00+09:00      ; Atom time format
	 */
	static Time fromHttp(StringView);

	static Time microseconds(uint64_t mksec);
	static Time milliseconds(uint64_t msec);
	static Time seconds(time_t sec);
	static Time floatSeconds(float sec);

	template <typename Interface>
	auto toRfc822() const -> typename Interface::StringType;
	
	template <typename Interface>
	auto toCTime() const -> typename Interface::StringType;

	// ISO 8601 с переменной точностью
	template <typename Interface>
	auto toIso8601(size_t precision = 0) const -> typename Interface::StringType;

	// strftime-like format
	template <typename Interface>
	auto toFormat(const char *fmt) const -> typename Interface::StringType;
};

TimeInterval operator"" _sec ( unsigned long long int val );
TimeInterval operator"" _msec ( unsigned long long int val );
TimeInterval operator"" _mksec ( unsigned long long int val );

}
```

Также, реализована расширенная версия типа `tm` в виде структуры `sp_time_exp_t`.

## Функции валидации

```cpp
#include "SPValid.h"

namespace stappler::valid {

// С-подобный идентификатор
bool validateIdentifier(StringView str);

// Текст, содержащий читаемые символы и \t, \r, \n, \b, \f
bool validateText(StringView str);

// Проверяет на email
bool validateEmailWithoutNormalization(StringView str);

// Проверяет на email и корректирует опциональные части
bool validateEmail(memory::PoolInterface::StringType &str);
bool validateEmail(memory::StandartInterface::StringType &str);

// Проверяет на URL и корректирует опциональные части
bool validateUrl(memory::PoolInterface::StringType &str);
bool validateUrl(memory::StandartInterface::StringType &str);

bool validateNumber(const StringView &str);
bool validateHexadecimial(const StringView &str);
bool validateBase64(const StringView &str);

// Заполняет буфер случайными числами
void makeRandomBytes(uint8_t *, size_t);

// Заполняет буфер, созданный из интерфейса памяти, случайными числами
template <typename Interface>
auto makeRandomBytes(size_t) -> typename Interface::BytesType;

// Создаёт хранимый пароль из его текста и дополнительных данных (соли)
template <typename Interface>
auto makePassword(const StringView &str, const StringView &key = StringView()) -> typename Interface::BytesType;

// Сверяет переданный пароль с хранимым, используя известную соль 
bool validatePassord(const StringView &str, const BytesView &passwd, const StringView &key = StringView());

// Генерирует пароль, минимальная длина - 6 символов
template <typename Interface>
auto generatePassword(size_t len) -> typename Interface::StringType;

}
```

## Разбор URL

```cpp

#include "SPUrl.h"

namespace stappler {

struct UrlView {
	enum class UrlToken {
		Scheme,
		User,
		Password,
		Host,
		Port,
		Path,
		Query,
		Fragment,
		Blank,
	};

	StringView scheme;
	StringView user;
	StringView password;
	StringView host;
	StringView port;
	StringView path;
	StringView query;
	StringView fragment;

	StringView url;

	static bool isValidIdnTld(StringView);

	static bool parseUrl(StringView &s, const Callback<void(StringViewUtf8, UrlView::UrlToken)> &cb);

	template <typename Interface>
	static auto parsePath(StringView) -> typename Interface::template VectorType<StringView>;

	template <typename Interface>
	static auto parseArgs(StringView, size_t max) -> data::ValueTemplate<Interface>;

	UrlView(StringView);

	void clear();

	bool parse(const StringView &);
	bool parse(StringView &); // leaves unparsed part of the string in view

	template <typename Interface>
	auto get() const -> typename Interface::StringType;

	bool isEmail() const;
	bool isPath() const;
};

}

```

## Встроенная криптография

В модуле ядра определены функции для работы SHA-1, SHA-256, SHA-512, ГОСТ-34.11-2018.

Интерфейс следует общей логике:

```cpp
#include "SPCoreCrypto.h"

namespace stappler::crypto {

// HashTyle - один из Sha1, Sha256, Sha512, Gost3411_256, Gost3411_512

struct HashTyle {
	struct _Ctx;

	constexpr static uint32_t Length;

	using Buf = std::array<uint8_t, Length>;

	// создаёт хэш с использованием соли
	static Buf make(const CoderSource &, const StringView &salt = StringView());
	
	// создаёт HMAC с ключёом
	static Buf hmac(const CoderSource &data, const CoderSource &key);

	// вычисляет хэш с переменным числом аргументов
	template <typename ... Args>
	static Buf perform(Args && ... args);

	Sha1();
	Sha1 & init();

	Sha1 & update(const uint8_t *, size_t);
	Sha1 & update(const CoderSource &);

	// записывает результат в стековый массив
	Buf final();
	
	// записывает результат в преаллоцированный буфер
	void final(uint8_t *);
};

```
