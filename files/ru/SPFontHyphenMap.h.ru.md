Title: SPFontHyphenMap.h


# CORE_FONT_SPFONTHYPHENMAP_H_

## BRIEF

Заголовок словарей для вычисления динамических переносов слов

## CONTENT

Заголовок словарей для вычисления динамических переносов слов. См. thirdparty/hyphen/hyphen.h за документацией о работе механизма


# ::HyphenDict

## BRIEF

Непрозрачная структура словаря

## CONTENT

Непрозрачная структура словаря


# ::stappler::font::HyphenMap

## BRIEF

Класс словаря переносов

## CONTENT

Класс словаря переносов. Может использовать как один словарь установленного языка, так и несколько разных словарей, которые активируются в зависимости от группы символов, для которых запрошена обработка переносов.

Базовые классы:
* RefBase<memory::StandartInterface>
* InterfaceObject<memory::StandartInterface>


# ::stappler::font::HyphenMap::~HyphenMap()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор

# ::stappler::font::HyphenMap::init()

## BRIEF

Инициализирует пустой словарь

## CONTENT

Доступ: public

Инициализирует пустой словарь

Возвращает:
* bool

# ::stappler::font::HyphenMap::addHyphenDict(stappler::CharGroupId,stappler::FilePath)

## BRIEF

Загрузает словарь по файловому пути  и сопоставляет его с группой символов, для которой он будет использоваться.

## CONTENT

Доступ: public

Загрузает словарь по файловому пути  и сопоставляет его с группой символов, для которой он будет использоваться.

Параметры:
* stappler::CharGroupId
* stappler::FilePath


# ::stappler::font::HyphenMap::addHyphenDict(stappler::CharGroupId,stappler::BytesView)

## BRIEF

Добавляет словарь из памяти для группы символов

## CONTENT

Доступ: public

Добавляет словарь из памяти для группы символов

Параметры:
* stappler::CharGroupId
* stappler::BytesView


# ::stappler::font::HyphenMap::makeWordHyphens(char16_t const*,size_t)

## BRIEF

Выполняет поиск переносов для слова

## CONTENT

Доступ: public

Выполняет поиск переносов для слова. См. `hnj_hyphen_hyphenate2`

Параметры:
* char16_t const* - исходное слово
* size_t - длина слова

Возвращает:
* Vector<uint8_t> - результат проверки. Точки переноса отмечены чётными значениями.

# ::stappler::font::HyphenMap::makeWordHyphens(stappler::WideStringView const&)

## BRIEF

Выполняет поиск переносов для слова

## CONTENT

Доступ: public

Выполняет поиск переносов для слова. См. `hnj_hyphen_hyphenate2`

Параметры:
* stappler::WideStringView const&

Возвращает:
* Vector<uint8_t> - результат проверки. Точки переноса отмечены чётными значениями.

# ::stappler::font::HyphenMap::purgeHyphenDicts()

## BRIEF

Отключает все словари переносов

## CONTENT

Доступ: public

Отключает все словари переносов


# ::stappler::font::HyphenMap::convertWord(HyphenDict*,char16_t const*,size_t)

## BRIEF

Функция конвертирует слово к кодировке словаря

## CONTENT

Доступ: protected

Функция конвертирует слово к кодировке словаря

Параметры:
* HyphenDict*
* char16_t const*
* size_t

Возвращает:
* stappler::InterfaceObject<stappler::memory::StandartInterface>::String

# ::stappler::font::HyphenMap::_dicts

## BRIEF

Загруженные словари

## CONTENT

Доступ: protected

Загруженные словари

Тип: Map<stappler::CharGroupId, HyphenDict *>
