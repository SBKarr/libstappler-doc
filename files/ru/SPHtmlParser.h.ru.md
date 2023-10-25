Title: SPHtmlParser.h


# STAPPLER_CORE_UTILS_SPHTMLPARSER_H_

## BRIEF

Заголовок HTML-парсера

## CONTENT

Заголовок HTML-парсера


# ::stappler::html::parse<typename,typename,typename>(ReaderType&,StringReader const&,bool,bool)

## BRIEF

Запускает парсер HTML/XML

## CONTENT

Запускает парсер HTML/XML

Параметры шаблона:
* typename ReaderType - класс, получающий результат разбора HTML/XML
* typename StringReader - тип, используемый для работы со строками (`StringView` `WideStringView` или `StringViewUtf8`)
* typename TagType - тип, содержащий данные тега для разбора. Может быть выведен автоматически как `ReaderType::Tag`

Параметры:
* ReaderType& - объект класса, выполняющего разбор
* StringReader const& - строка, содержащая код HTML/XML
* bool - true - читать только начальное дерево тегов, останавливать разбор по его завершению, false - читать до конца строки
* bool - true - приводить теги к нижнему регистру автоматически

Основа для чтения результата разбора может выглядеть так:

```cpp
struct Reader {
	using Parser = html::Parser<Reader>;
	using Tag = Parser::Tag;
	using StringReader = Parser::StringReader;

	inline void onBeginTag(Parser &p, Tag &tag) {
		log::text("onBeginTag", tag.name);
	}

	inline void onEndTag(Parser &p, Tag &tag, bool isClosable) {
		log::text("onEndTag", tag.name);
	}

	inline void onTagAttribute(Parser &p, Tag &tag, StringReader &name, StringReader &value) {
		log::vtext("onTagAttribute", tag.name, ": ", name, " = ", value);
	}

	inline void onPushTag(Parser &p, Tag &tag) {
		log::text("onPushTag", tag.name);
	}

	inline void onPopTag(Parser &p, Tag &tag) {
		log::text("onPopTag", tag.name);
	}

	inline void onInlineTag(Parser &p, Tag &tag) {
		log::text("onInlineTag", tag.name);
	}

	inline void onTagContent(Parser &p, Tag &tag, StringReader &s) {
		log::vtext("onTagContent", tag.name, ": ", s);
	}
};
```


# ::stappler::html::ParserTraits<typename>

## BRIEF

Вспомогательный класс, анализирующий доступные функции для передачи результата разбора

## CONTENT

Вспомогательный класс, анализирующий доступные функции для передачи результата разбора

Параметры шаблона:
* typename T - класс, получающий результат разбора HTML/XML


# ::stappler::html::ParserTraits<typename>::success

## BRIEF

Значение успеха теста

## CONTENT

Значение успеха теста для SFINAE

# ::stappler::html::ParserTraits<typename>::failure

## BRIEF

Значение провала теста

## CONTENT

Значение провала теста для SFINAE

# ::stappler::html::ParserTraits<typename>::CallTest_onBeginTag<typename>(typeof (& C::onBeginTag))

## BRIEF

Проверяет, доступен ли метод `onBeginTag`

## CONTENT

Доступ: private

Проверяет, доступен ли метод `onBeginTag`

Параметры шаблона:
* typename C - класс, получающий результат разбора HTML/XML

Параметры:
* typeof (& C::onBeginTag) - указатель на метод `onBeginTag` в целевом классе

Возвращает:
* success - сигнальное значение успешного теста

# ::stappler::html::ParserTraits<typename>::CallTest_onBeginTag<typename>()

## BRIEF

Проверяет, доступен ли метод `onBeginTag`

## CONTENT

Доступ: private

Проверяет, доступен ли метод `onBeginTag`

Параметры шаблона:
* typename C - класс, получающий результат разбора HTML/XML

Возвращает:
* failure - сигнальное значение провала теста

# ::stappler::html::ParserTraits<typename>::onBeginTag

## BRIEF

Результат теста на существование метода `onBeginTag`

## CONTENT

Доступ: public

Тип: bool const

Результат теста на существование метода `onBeginTag`. true если метод определён в целевом классе.

# ::stappler::html::ParserTraits<typename>::CallTest_onEndTag<typename>(typeof (& C::onEndTag))

## BRIEF

Проверяет, доступен ли метод `onEndTag`

## CONTENT

Доступ: private

Проверяет, доступен ли метод `onEndTag`

Параметры шаблона:
* typename C - класс, получающий результат разбора HTML/XML

Параметры:
* typeof (& C::onEndTag) - указатель на метод `onEndTag` в целевом классе

Возвращает:
* success - сигнальное значение успешного теста

# ::stappler::html::ParserTraits<typename>::CallTest_onEndTag<typename>()

## BRIEF

Проверяет, доступен ли метод `onEndTag`

## CONTENT

Доступ: private

Проверяет, доступен ли метод `onEndTag`

Параметры шаблона:
* typename C - класс, получающий результат разбора HTML/XML

Возвращает:
* failure - сигнальное значение провала теста

# ::stappler::html::ParserTraits<typename>::onEndTag

## BRIEF

Результат теста на существование метода `onEndTag`

## CONTENT

Доступ: public

Тип: bool const

Результат теста на существование метода `onEndTag`. true если метод определён в целевом классе.

# ::stappler::html::ParserTraits<typename>::CallTest_onTagAttribute<typename>(typeof (& C::onTagAttribute))

## BRIEF

Проверяет, доступен ли метод `onTagAttribute`

## CONTENT

Доступ: private

Проверяет, доступен ли метод `onTagAttribute`

Параметры шаблона:
* typename C - класс, получающий результат разбора HTML/XML

Параметры:
* typeof (& C::onTagAttribute) - указатель на метод `onTagAttribute` в целевом классе

Возвращает:
* success - сигнальное значение успешного теста

# ::stappler::html::ParserTraits<typename>::CallTest_onTagAttribute<typename>()

## BRIEF

Проверяет, доступен ли метод `onTagAttribute`

## CONTENT

Доступ: private

Проверяет, доступен ли метод `onTagAttribute`

Параметры шаблона:
* typename C - класс, получающий результат разбора HTML/XML

Возвращает:
* failure - сигнальное значение провала теста

# ::stappler::html::ParserTraits<typename>::onTagAttribute

## BRIEF

Результат теста на существование метода `onTagAttribute`

## CONTENT

Доступ: public

Тип: bool const

Результат теста на существование метода `onTagAttribute`. true если метод определён в целевом классе.

# ::stappler::html::ParserTraits<typename>::CallTest_onPushTag<typename>(typeof (& C::onPushTag))

## BRIEF

Проверяет, доступен ли метод `onPushTag`

## CONTENT

Доступ: private

Проверяет, доступен ли метод `onPushTag`

Параметры шаблона:
* typename C - класс, получающий результат разбора HTML/XML

Параметры:
* typeof (& C::onPushTag) - указатель на метод `onPushTag` в целевом классе

Возвращает:
* success - сигнальное значение успешного теста

# ::stappler::html::ParserTraits<typename>::CallTest_onPushTag<typename>()

## BRIEF

Проверяет, доступен ли метод `onPushTag`

## CONTENT

Доступ: private

Проверяет, доступен ли метод `onPushTag`

Параметры шаблона:
* typename C - класс, получающий результат разбора HTML/XML

Возвращает:
* failure - сигнальное значение провала теста

# ::stappler::html::ParserTraits<typename>::onPushTag

## BRIEF

Результат теста на существование метода `onPushTag`

## CONTENT

Доступ: public

Тип: bool const

Результат теста на существование метода `onPushTag`. true если метод определён в целевом классе.

# ::stappler::html::ParserTraits<typename>::CallTest_onPopTag<typename>(typeof (& C::onPopTag))

## BRIEF

Проверяет, доступен ли метод `onPopTag`

## CONTENT

Доступ: private

Проверяет, доступен ли метод `onPopTag`

Параметры шаблона:
* typename C - класс, получающий результат разбора HTML/XML

Параметры:
* typeof (& C::onPopTag) - указатель на метод `onPopTag` в целевом классе

Возвращает:
* success - сигнальное значение успешного теста

# ::stappler::html::ParserTraits<typename>::CallTest_onPopTag<typename>()

## BRIEF

Проверяет, доступен ли метод `onPopTag`

## CONTENT

Доступ: private

Проверяет, доступен ли метод `onPopTag`

Параметры шаблона:
* typename C - класс, получающий результат разбора HTML/XML

Возвращает:
* failure - сигнальное значение провала теста

# ::stappler::html::ParserTraits<typename>::onPopTag

## BRIEF

Результат теста на существование метода `onPopTag`

## CONTENT

Доступ: public

Тип: bool const

Результат теста на существование метода `onPopTag`. true если метод определён в целевом классе.

# ::stappler::html::ParserTraits<typename>::CallTest_onInlineTag<typename>(typeof (& C::onInlineTag))

## BRIEF

Проверяет, доступен ли метод `onInlineTag`

## CONTENT

Доступ: private

Проверяет, доступен ли метод `onInlineTag`

Параметры шаблона:
* typename C - класс, получающий результат разбора HTML/XML

Параметры:
* typeof (& C::onInlineTag) - указатель на метод `onInlineTag` в целевом классе

Возвращает:
* success - сигнальное значение успешного теста

# ::stappler::html::ParserTraits<typename>::CallTest_onInlineTag<typename>()

## BRIEF

Проверяет, доступен ли метод `onInlineTag`

## CONTENT

Доступ: private

Проверяет, доступен ли метод `onInlineTag`

Параметры шаблона:
* typename C - класс, получающий результат разбора HTML/XML

Возвращает:
* failure - сигнальное значение провала теста

# ::stappler::html::ParserTraits<typename>::onInlineTag

## BRIEF

Результат теста на существование метода `onInlineTag`

## CONTENT

Доступ: public

Тип: bool const

Результат теста на существование метода `onInlineTag`. true если метод определён в целевом классе.

# ::stappler::html::ParserTraits<typename>::CallTest_onTagContent<typename>(typeof (& C::onTagContent))

## BRIEF

Проверяет, доступен ли метод `onTagContent`

## CONTENT

Доступ: private

Проверяет, доступен ли метод `onTagContent`

Параметры шаблона:
* typename C - класс, получающий результат разбора HTML/XML

Параметры:
* typeof (& C::onTagContent) - указатель на метод `onTagContent` в целевом классе

Возвращает:
* success - сигнальное значение успешного теста

# ::stappler::html::ParserTraits<typename>::CallTest_onTagContent<typename>()

## BRIEF

Проверяет, доступен ли метод `onTagContent`

## CONTENT

Доступ: private

Проверяет, доступен ли метод `onTagContent`

Параметры шаблона:
* typename C - класс, получающий результат разбора HTML/XML

Возвращает:
* failure - сигнальное значение провала теста

# ::stappler::html::ParserTraits<typename>::onTagContent

## BRIEF

Результат теста на существование метода `onTagContent`

## CONTENT

Доступ: public

Тип: bool const

Результат теста на существование метода `onTagContent`. true если метод определён в целевом классе.

# ::stappler::html::ParserTraits<typename>::CallTest_onReadTagName<typename>(typeof (& C::onReadTagName))

## BRIEF

Проверяет, доступен ли метод `onReadTagName`

## CONTENT

Доступ: private

Проверяет, доступен ли метод `onReadTagName`

Параметры шаблона:
* typename C - класс, получающий результат разбора HTML/XML

Параметры:
* typeof (& C::onReadTagName) - указатель на метод `onReadTagName` в целевом классе

Возвращает:
* success - сигнальное значение успешного теста

# ::stappler::html::ParserTraits<typename>::CallTest_onReadTagName<typename>()

## BRIEF

Проверяет, доступен ли метод `onReadTagName`

## CONTENT

Доступ: private

Проверяет, доступен ли метод `onReadTagName`

Параметры шаблона:
* typename C - класс, получающий результат разбора HTML/XML

Возвращает:
* failure - сигнальное значение провала теста

# ::stappler::html::ParserTraits<typename>::onReadTagName

## BRIEF

Результат теста на существование метода `onReadTagName`

## CONTENT

Доступ: public

Тип: bool const

Результат теста на существование метода `onReadTagName`. true если метод определён в целевом классе.

# ::stappler::html::ParserTraits<typename>::CallTest_onReadAttributeName<typename>(typeof (& C::onReadAttributeName))

## BRIEF

Проверяет, доступен ли метод `onReadAttributeName`

## CONTENT

Доступ: private

Проверяет, доступен ли метод `onReadAttributeName`

Параметры шаблона:
* typename C - класс, получающий результат разбора HTML/XML

Параметры:
* typeof (& C::onReadAttributeName) - указатель на метод `onReadAttributeName` в целевом классе

Возвращает:
* success - сигнальное значение успешного теста

# ::stappler::html::ParserTraits<typename>::CallTest_onReadAttributeName<typename>()

## BRIEF

Проверяет, доступен ли метод `onReadAttributeName`

## CONTENT

Доступ: private

Проверяет, доступен ли метод `onReadAttributeName`

Параметры шаблона:
* typename C - класс, получающий результат разбора HTML/XML

Возвращает:
* failure - сигнальное значение провала теста

# ::stappler::html::ParserTraits<typename>::onReadAttributeName

## BRIEF

Результат теста на существование метода `onReadAttributeName`

## CONTENT

Доступ: public

Тип: bool const

Результат теста на существование метода `onReadAttributeName`. true если метод определён в целевом классе.

# ::stappler::html::ParserTraits<typename>::CallTest_onReadAttributeValue<typename>(typeof (& C::onReadAttributeValue))

## BRIEF

Проверяет, доступен ли метод `onReadAttributeValue`

## CONTENT

Доступ: private

Проверяет, доступен ли метод `onReadAttributeValue`

Параметры шаблона:
* typename C - класс, получающий результат разбора HTML/XML

Параметры:
* typeof (& C::onReadAttributeValue) - указатель на метод `onReadAttributeValue` в целевом классе

Возвращает:
* success - сигнальное значение успешного теста

# ::stappler::html::ParserTraits<typename>::CallTest_onReadAttributeValue<typename>()

## BRIEF

Проверяет, доступен ли метод `onReadAttributeValue`

## CONTENT

Доступ: private

Проверяет, доступен ли метод `onReadAttributeValue`

Параметры шаблона:
* typename C - класс, получающий результат разбора HTML/XML

Возвращает:
* failure - сигнальное значение провала теста

# ::stappler::html::ParserTraits<typename>::onReadAttributeValue

## BRIEF

Результат теста на существование метода `onReadAttributeValue`

## CONTENT

Доступ: public

Тип: bool const

Результат теста на существование метода `onReadAttributeValue`. true если метод определён в целевом классе.

# ::stappler::html::ParserTraits<typename>::CallTest_shouldLowercaseTokens<typename>(typeof (& C::shouldLowercaseTokens))

## BRIEF

Проверяет, доступен ли метод `shouldLowercaseTokens`

## CONTENT

Доступ: private

Проверяет, доступен ли метод `shouldLowercaseTokens`

Параметры шаблона:
* typename C - класс, получающий результат разбора HTML/XML

Параметры:
* typeof (& C::shouldLowercaseTokens) - указатель на метод `shouldLowercaseTokens` в целевом классе

Возвращает:
* success - сигнальное значение успешного теста

# ::stappler::html::ParserTraits<typename>::CallTest_shouldLowercaseTokens<typename>()

## BRIEF

Проверяет, доступен ли метод `shouldLowercaseTokens`

## CONTENT

Доступ: private

Проверяет, доступен ли метод `shouldLowercaseTokens`

Параметры шаблона:
* typename C - класс, получающий результат разбора HTML/XML

Возвращает:
* failure - сигнальное значение провала теста

# ::stappler::html::ParserTraits<typename>::shouldLowercaseTokens

## BRIEF

Результат теста на существование метода `shouldLowercaseTokens`

## CONTENT

Доступ: public

Тип: bool const

Результат теста на существование метода `shouldLowercaseTokens`. true если метод определён в целевом классе.

# ::stappler::html::ParserTraits<typename>::CallTest_shouldParseTag<typename>(typeof (& C::shouldParseTag))

## BRIEF

Проверяет, доступен ли метод `shouldParseTag`

## CONTENT

Доступ: private

Проверяет, доступен ли метод `shouldParseTag`

Параметры шаблона:
* typename C - класс, получающий результат разбора HTML/XML

Параметры:
* typeof (& C::shouldParseTag) - указатель на метод `shouldParseTag` в целевом классе

Возвращает:
* success - сигнальное значение успешного теста

# ::stappler::html::ParserTraits<typename>::CallTest_shouldParseTag<typename>()

## BRIEF

Проверяет, доступен ли метод `shouldParseTag`

## CONTENT

Доступ: private

Проверяет, доступен ли метод `shouldParseTag`

Параметры шаблона:
* typename C - класс, получающий результат разбора HTML/XML

Возвращает:
* failure - сигнальное значение провала теста

# ::stappler::html::ParserTraits<typename>::shouldParseTag

## BRIEF

Результат теста на существование метода `shouldParseTag`

## CONTENT

Доступ: public

Тип: bool const

Результат теста на существование метода `shouldParseTag`. true если метод определён в целевом классе.

# ::stappler::html::Tag_readName<typename>(StringReader&,bool)

## BRIEF

Вспомогательная функция чтения имени тега

## CONTENT

Вспомогательная функция чтения имени тега

Параметры шаблона:
* typename StringReader - тип строкового объекта (`StringView`, `WideStringView` или `StringViewUtf8`)

Параметры:
* StringReader& - строка, из которой читается имя
* bool - true если содержание строки не может быть изменено

Возвращает:
* StringReader - прочитанное имя тега

# ::stappler::html::Tag_readAttrName<typename>(StringReader&,bool)

## BRIEF

Вспомогательная функция чтения имени атрибута тега

## CONTENT

Вспомогательная функция чтения имени атрибута тега

Параметры шаблона:
* typename StringReader - тип строкового объекта (`StringView`, `WideStringView` или `StringViewUtf8`)

Параметры:
* StringReader& - строка, из которой читается имя
* bool - true если содержание строки не может быть изменено

Возвращает:
* StringReader - прочитанное имя атрибута

# ::stappler::html::Tag_readAttrValue<typename>(StringReader&,bool)

## BRIEF

Вспомогательная функция чтения значения атрибута тега

## CONTENT

Вспомогательная функция чтения значения атрибута тега

Параметры шаблона:
* typename StringReader - тип строкового объекта (`StringView`, `WideStringView` или `StringViewUtf8`)

Параметры:
* StringReader& - строка, из которой читается имя
* bool - true если содержание строки не может быть изменено

Возвращает:
* StringReader - прочитанное значение атрибута

# ::stappler::html::Tag<typename>

## BRIEF

Вспомогательный класс для хранения данных тега

## CONTENT

Вспомогательный класс для хранения данных тега

Параметры шаблона:
* typename __StringReader - тип строкового объекта (`StringView`, `WideStringView` или `StringViewUtf8`)

# ::stappler::html::Tag<typename>::StringReader

## BRIEF

Класс строкового интерфейса для данных тега

## CONTENT

Класс строкового интерфейса для данных тега

# ::stappler::html::Tag<typename>::Tag(stappler::html::Tag::StringReader const&)

## BRIEF

Конструктор нового хранилища тега

## CONTENT

Конструктор нового хранилища тега

Параметры:
* stappler::html::Tag::StringReader const& - имя тега


# ::stappler::html::Tag<typename>::getName() const

## BRIEF

Возвращает имя тега

## CONTENT

Возвращает имя тега

Возвращает:
* StringReader& - имя тега

# ::stappler::html::Tag<typename>::setClosable(bool)

## BRIEF

Устанавливает необходимость закрывающего тега

## CONTENT

Параметры:
* bool - true если тег должен быть закрыт


# ::stappler::html::Tag<typename>::isClosable() const

## BRIEF

Проверяет, должен ли тег быть закрыт

## CONTENT

Возвращает:
* bool - true если тег должен быть закрыт

# ::stappler::html::Tag<typename>::setHasContent(bool)

## BRIEF

Устанавливает, есть ли у тега текстовое содержимое

## CONTENT

Параметры:
* bool - true если есть текстовое содержимое


# ::stappler::html::Tag<typename>::hasContent() const

## BRIEF

Проверяет, есть ли у тега тексовое содержимое

## CONTENT

Возвращает:
* bool - true если у тега есть текстовое содержимое

# ::stappler::html::Tag<typename>::name

## BRIEF

Имя тега

## CONTENT

Тип: StringReader

Имя тега

# ::stappler::html::Tag<typename>::closable

## BRIEF

Необходимость закрывать тег

## CONTENT

Тип: bool

true если тег должен быть закрыт

# ::stappler::html::Tag<typename>::content

## BRIEF

Есть ли у тега текстовое содержимое

## CONTENT

Тип: bool

true если у тега есть тексовое содержимое

# ::stappler::html::Parser<typename,typename,typename,typename>

## BRIEF

Основная структура для разбора HTML/XML

## CONTENT

Параметры шаблона:
* typename ReaderType - тип класса, читающего результат разбора
* typename __StringReader - тип строкового объекта (`StringView`, `WideStringView` или `StringViewUtf8`)
* typename TagType - тип хранилища данных для тега
* typename Traits - вспомогательный тип, выясняющий доступные функции `ReaderType`


# ::stappler::html::Parser<typename,typename,typename,typename>::StringReader

## BRIEF

Тип строковых объектов для разбора

## CONTENT

Тип строковых объектов для разбора

# ::stappler::html::Parser<typename,typename,typename,typename>::OrigCharType

## BRIEF

Тип символа во внутреннем хранилище строкового объекта

## CONTENT

Тип символа во внутреннем хранилище строкового объекта

# ::stappler::html::Parser<typename,typename,typename,typename>::CharType

## BRIEF

Тип кодовой единицы (символа), используемый строковым объектом

## CONTENT

Тип кодовой единицы (символа), используемый строковым объектом. Для `StringViewUtf8` не совпадает с типом внутреннего хранилища.

# ::stappler::html::Parser<typename,typename,typename,typename>::Tag

## BRIEF

Тип хранилища данных для тега

## CONTENT

Тип хранилища данных для тега

# ::stappler::html::Parser<typename,typename,typename,typename>::Chars<CharType...>

## BRIEF

Шаблон для обозначения группы символов

## CONTENT

Шаблон для обозначения группы символов. Используется для потокового чтения из стокового объекта.

Параметры шаблона:
* CharType Args - набор символов произвольной длины


# ::stappler::html::Parser<typename,typename,typename,typename>::Range<CharType,CharType>

## BRIEF

Шаблон для обозначения диапазона символов

## CONTENT

Шаблон для обозначения диапазона символов. Используется для потокового чтения из стокового объекта.

Параметры шаблона:
* CharType First - первый символ диапазона
* CharType Last - последний символ диапазона


# ::stappler::html::Parser<typename,typename,typename,typename>::GroupId

## BRIEF

Сокращение для идентификатора именованной группы символов

## CONTENT

Сокращение для идентификатора именованной группы символов

# ::stappler::html::Parser<typename,typename,typename,typename>::Group<GroupId>

## BRIEF

Шаблон для именованной группы символов

## CONTENT

Шаблон для именованной группы символов. Используется для потокового чтения из стокового объекта.

Параметры шаблона:
* GroupId G - имя группы символов


# ::stappler::html::Parser<typename,typename,typename,typename>::LtChar

## BRIEF

Символ открывающей угловой скобки ('<')

## CONTENT

Символ открывающей угловой скобки ('<')

# ::stappler::html::Parser<typename,typename,typename,typename>::Parser(ReaderType&)

## BRIEF

Конструктор парсера

## CONTENT

Конструктор парсера. Инициализирует новый парсер на основе объекта для чтения результата.

Параметры:
* ReaderType& - объект для чтения результата


# ::stappler::html::Parser<typename,typename,typename,typename>::cancel()

## BRIEF

Завершает работу парсера

## CONTENT

Аварийно завершает работу парсера. Может быть вызвано в процессе разбора для аварийного прекращения работы и возврата из функции разбора.


# ::stappler::html::Parser<typename,typename,typename,typename>::parse(stappler::html::Parser::StringReader const&,bool)

## BRIEF

Запускает разбор строки HTML/XML

## CONTENT

Запускает разбор строки HTML/XML. В зависимости от последнего параметра, читает строку до конца, либо читает только дерево на основе первого встреченного тега.

Параметры:
* stappler::html::Parser::StringReader const& - строка, содержащая данные HTML/XML
* bool - читать только дерево на основе первого элемента

Возвращает:
* bool - успешность разбора

# ::stappler::html::Parser<typename,typename,typename,typename>::onReadTagName(stappler::html::Parser::StringReader&)

## BRIEF

Функция чтения имени тега

## CONTENT

Функция чтения имени тега. Использует встроенную функцию либо функцию, доступную в классе чтения результата, если таковая определена.

Параметры:
* stappler::html::Parser::StringReader& - строка для чтения

Возвращает:
* StringReader - прочитанное имя тега

# ::stappler::html::Parser<typename,typename,typename,typename>::onReadAttributeName(stappler::html::Parser::StringReader&)

## BRIEF

Функция чтения имени атрибута

## CONTENT

Функция чтения имени атрибута. Использует встроенную функцию либо функцию, доступную в классе чтения результата, если таковая определена.

Параметры:
* stappler::html::Parser::StringReader& - строка для чтения

Возвращает:
* StringReader - прочитанное имя атрибута

# ::stappler::html::Parser<typename,typename,typename,typename>::onReadAttributeValue(stappler::html::Parser::StringReader&)

## BRIEF

Функция чтения значения атрибута

## CONTENT

Функция чтения значения атрибута. Использует встроенную функцию либо функцию, доступную в классе чтения результата, если таковая определена.

Параметры:
* stappler::html::Parser::StringReader& - строка для чтения

Возвращает:
* StringReader - прочитанное имя атрибута

# ::stappler::html::Parser<typename,typename,typename,typename>::onBeginTag(TagType&)

## BRIEF

Отправляет сообщение о начале чтения тега

## CONTENT

Отправляет сообщение о начале чтения тега, если такая функция определена в классе чтения результата.

Параметры:
* TagType& - новый прочитанный тег


# ::stappler::html::Parser<typename,typename,typename,typename>::onEndTag(TagType&,bool)

## BRIEF

Отправляет сообщение о завершении чтения тега

## CONTENT

Отправляет сообщение о завершении чтения тега, если такая функция определена в классе чтения результата.

Параметры:
* TagType& - прочитанный тег
* bool - true если тег был закрыт внутри себя (заканчивается на '/>')

# ::stappler::html::Parser<typename,typename,typename,typename>::onTagAttribute(TagType&,stappler::html::Parser::StringReader&,stappler::html::Parser::StringReader&)

## BRIEF

Отправляет сообщение о прочитанном атрибуте тега

## CONTENT

Отправляет сообщение о прочитанном атрибуте тега, если такая функция определена в классе чтения результата.

Параметры:
* TagType& - тег для атрибута
* stappler::html::Parser::StringReader& - имя атрибута
* stappler::html::Parser::StringReader& - значение атрибута


# ::stappler::html::Parser<typename,typename,typename,typename>::onPushTag(TagType&)

## BRIEF

Отправляет сообщение о добавлении тега на стек

## CONTENT

Отправляет сообщение о добавлении тега на стек, если такая функция определена в классе чтения результата. Таким образом, разбор выполняется внутри содержимого этого тега.

Параметры:
* TagType& - тег


# ::stappler::html::Parser<typename,typename,typename,typename>::onPopTag(TagType&)

## BRIEF

Отправляет сообщение снятии тега с стека

## CONTENT

Отправляет сообщение снятии тега с стека, если такая функция определена в классе чтения результата. Таким образом, чтение содержимого тега завершается

Параметры:
* TagType& - тег


# ::stappler::html::Parser<typename,typename,typename,typename>::onInlineTag(TagType&)

## BRIEF

Отправляет сообщение о встреченном встроенном теге

## CONTENT

Отправляет сообщение о встреченном встроенном теге, если такая функция определена в классе чтения результата. Встроенный тег - тег, не имеющий вложенных тегов.

Параметры:
* TagType& - тег

# ::stappler::html::Parser<typename,typename,typename,typename>::onTagContent(TagType&,stappler::html::Parser::StringReader&)

## BRIEF

Отправляет сообщение о текстовом содержимом тега

## CONTENT

Отправляет сообщение о текстовом содержимом тега, если такая функция определена в классе чтения результата.

Параметры:
* TagType& - тег
* stappler::html::Parser::StringReader& - строка с текстовы содержимым


# ::stappler::html::Parser<typename,typename,typename,typename>::shouldParseTag(TagType&)

## BRIEF

Функция, фильтрующая теги, чтение которых необходимо

## CONTENT

Функция, фильтрующая теги, чтение которых необходимо, если она определена в классе чтения результата. Если такая функция не определена, тег всегда читается.

Параметры:
* TagType& - тег

Возвращает:
* bool - true если тег должен быть прочитан.

# ::stappler::html::Parser<typename,typename,typename,typename>::lowercase

## BRIEF

Необходимо ли приводить теги к нихнему регистру

## CONTENT

Тип: bool

true если необходимо приводить теги к нихнему регистру

# ::stappler::html::Parser<typename,typename,typename,typename>::canceled

## BRIEF

Был ли процесс чтения завершён извне

## CONTENT

Тип: bool

true если процесс чтения был заверёшн извне


# ::stappler::html::Parser<typename,typename,typename,typename>::reader

## BRIEF

Объект, читающий результат разбора

## CONTENT

Тип: ReaderType*

Объект, читающий результат разбора

# ::stappler::html::Parser<typename,typename,typename,typename>::current

## BRIEF

Текущее состояние строки для чтения

## CONTENT

Тип: StringReader

Текущее состояние строки для чтения


# ::stappler::html::Parser<typename,typename,typename,typename>::tagStack

## BRIEF

Стек тегов

## CONTENT

Тип: memory::vector<TagType>

Стек тегов. Тег добавляется на стек, когда чтение ведётся внутри его контента
