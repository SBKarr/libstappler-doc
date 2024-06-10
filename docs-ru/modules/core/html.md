Title: HTML/XML парсер

# HTML/XML парсер

Заголовок `SPHtmlParser.h` определяет простой SAX-парсер для форматов XML и HTML. Для использования парсера необходимо определить тип, получающий данные, и тип структуры, хранящей данные для тега. Базовый тип `html::Tag` может служить основой для конструирования конкретной структуры.

Работа парсера основана на том, какие функции определены принимающей стороной. Для работы могут использоваться типы `StringView`, `WideStringView`, `StringViewUtf8`.

Последний аргумент функции `html::parse` контролирует, работает ли чтение в режиме чтения от корня. Если `true` - читается только один тег и все вложенные до завершения этого тега (служебные теги не влияют на процесс). Если `false` - читается весь документ.

Пример принимающей структуры:

```cpp
#include "SPHtmlParser.h"

namespace stappler {

struct HtmlTag : html::Tag<StringView> { };

struct HtmlReader {
	using Parser = html::Parser<HtmlReader, StringView, HtmlTag>;

	// Начало разбора тега
	void onBeginTag(Parser &p, HtmlTag &tag) { }

	// Завершение разбора тега
	void onEndTag(Parser &p, HtmlTag &tag, bool isClosable) { }

	// Чтение атрибута
	void onTagAttribute(Parser &p, HtmlTag &tag, StringView &name, StringView &value) { }

	// Чтение всего списка атрибутов
	void onTagAttributeList(Parser &p, HtmlTag &tag, StringView &data) { }

	// Добавление тега не стек, далее читается его содержимое
	void onPushTag(Parser &p, HtmlTag &tag) { }

	// Удаление тега со стека, завершение чтения содержимого
	void onPopTag(Parser &p, HtmlTag &tag) { }

	// Добавление однострочного тега по месту
	void onInlineTag(Parser &p, HtmlTag &tag) { }

	// Читает текстовое содержимое тега
	void onTagContent(Parser &p, HtmlTag &tag, StringView &s) { }

	// Читает служебный тег
	inline void onSchemeTag(Parser &p, StringView &name, StringView &value) { }

	// Читает комментарий
	inline void onCommentTag(Parser &p, StringView &data) { }
};

// Запуск чтения:
HtmlReader reader;
html::parse<HtmlReader, StringView, HtmlTag>(reader,
		StringView(data), false);


}
```

