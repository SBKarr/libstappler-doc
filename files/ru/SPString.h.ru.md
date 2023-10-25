Title: SPString.h


# STAPPLER_CORE_STRING_SPSTRING_H_

## BRIEF

Заголовок базовых функций для работы со строками и юникодом

## CONTENT

Заголовок базовых функций для работы со строками и юникодом.

Заголовок определяет функции для конвертации между UTF-8 и UTF-16, записи символов юникода в строки, преобразования произвольных символов в строку.

Также. определяются интерфейсы кодирования и декодирования данных в шестнадцатиричный формат (base16) и Base64 в стандартном варианте и варианте Base64-URL.

SDK предполагает, что все однобайтовые строки кодированы в UTF-8, а двухбайтовые (WideString) - в UTF-16.


# ::stappler::string::getUtf16Length(char32_t)

## BRIEF

Вычисляет длину кодирования символа юникода в UTF-16

## CONTENT

Вычисляет длину кодирования символа юникода в UTF-16. При недопустимом символе (символе, предполагающим суррогатную пару) возвращает 0.

Параметры:
* char32_t - символ для кодирования

Возвращает:
* size_t - 0, 1 или 2

# ::stappler::string::getUtf16Length(stappler::StringView const&)

## BRIEF

Возвращает длину кодирования в UTF-16 для строки в UTF-8

## CONTENT

Возвращает длину кодирования в UTF-16 для строки в UTF-8

Параметры:
* stappler::StringView const&

Возвращает:
* size_t

# ::stappler::string::getUtf16HtmlLength(stappler::StringView const&)

## BRIEF

Возвращает длину кодирования в UTF-16 для строки в UTF-8, содержащей HTML-кодирование иимволов

## CONTENT

Возвращает длину кодирования в UTF-16 для строки в UTF-8, содержащей HTML-кодирование иимволов

Параметры:
* stappler::StringView const&

Возвращает:
* size_t

# ::stappler::string::getUtf8Length(char32_t)

## BRIEF

Возвращает длину кодирования символа юникода в UTF-8

## CONTENT

Возвращает длину кодирования символа юникода в UTF-8. При недопустимом символе (символе, предполагающим суррогатную пару) возвращает 0.

Параметры:
* char32_t

Возвращает:
* size_t - 0, 1, 2, 3 или 4

# ::stappler::string::getUtf8Length(char16_t)

## BRIEF

Возвращает длину кодирования символа юникода в UTF-8

## CONTENT

Возвращает длину кодирования символа юникода в UTF-8

Параметры:
* char16_t

Возвращает:
* size_t - 0, 1, 2 или 3


# ::stappler::string::getUtf8Length(stappler::WideStringView const&)

## BRIEF

Возвращает длину кодирования в UTF-16 для строки в UTF-8

## CONTENT

Возвращает длину кодирования в UTF-16 для строки в UTF-8

Параметры:
* stappler::WideStringView const&

Возвращает:
* size_t

# ::stappler::string::charToKoi8r(char16_t)

## BRIEF

Конвертирует символ в кодировку KOI8-R

## CONTENT

Конвертирует символ в кодировку KOI8-R. Историческая функция, оставлена для совместимости.

Параметры:
* char16_t

Возвращает:
* char

# ::stappler::string::InterfaceForString<typename memory::StandartInterface::StringType>::InterfaceForString<typename memory::StandartInterface::StringType>

## BRIEF

Вспомогатльная структура для вычисления используемого типом строки интерфейса памяти

## CONTENT

Вспомогатльная структура для вычисления используемого типом строки интерфейса памяти

# ::stappler::string::InterfaceForString<typename memory::StandartInterface::StringType>::Type

## BRIEF

Тип используемого интерфейса памяти

## CONTENT

Тип используемого интерфейса памяти


# ::stappler::string::InterfaceForString<typename memory::StandartInterface::WideStringType>::InterfaceForString<typename memory::StandartInterface::WideStringType>

## BRIEF

Вспомогатльная структура для вычисления используемого типом строки интерфейса памяти

## CONTENT

Вспомогатльная структура для вычисления используемого типом строки интерфейса памяти

# ::stappler::string::InterfaceForString<typename memory::StandartInterface::WideStringType>::Type

## BRIEF

Тип используемого интерфейса памяти

## CONTENT

Тип используемого интерфейса памяти


# ::stappler::string::InterfaceForString<typename memory::PoolInterface::StringType>::InterfaceForString<typename memory::PoolInterface::StringType>

## BRIEF

Вспомогатльная структура для вычисления используемого типом строки интерфейса памяти

## CONTENT

Вспомогатльная структура для вычисления используемого типом строки интерфейса памяти


# ::stappler::string::InterfaceForString<typename memory::PoolInterface::StringType>::Type

## BRIEF

Тип используемого интерфейса памяти

## CONTENT

Тип используемого интерфейса памяти


# ::stappler::string::InterfaceForString<typename memory::PoolInterface::WideStringType>::InterfaceForString<typename memory::PoolInterface::WideStringType>

## BRIEF

Вспомогатльная структура для вычисления используемого типом строки интерфейса памяти

## CONTENT

Вспомогатльная структура для вычисления используемого типом строки интерфейса памяти


# ::stappler::string::InterfaceForString<typename memory::PoolInterface::WideStringType>::Type

## BRIEF

Тип используемого интерфейса памяти

## CONTENT

Тип используемого интерфейса памяти


# ::stappler::string::InterfaceForString<const typename memory::StandartInterface::StringType>::InterfaceForString<const typename memory::StandartInterface::StringType>

## BRIEF

Вспомогатльная структура для вычисления используемого типом строки интерфейса памяти

## CONTENT

Вспомогатльная структура для вычисления используемого типом строки интерфейса памяти


# ::stappler::string::InterfaceForString<const typename memory::StandartInterface::StringType>::Type

## BRIEF

Тип используемого интерфейса памяти

## CONTENT

Тип используемого интерфейса памяти


# ::stappler::string::InterfaceForString<const typename memory::StandartInterface::WideStringType>::InterfaceForString<const typename memory::StandartInterface::WideStringType>

## BRIEF

Вспомогатльная структура для вычисления используемого типом строки интерфейса памяти

## CONTENT

Вспомогатльная структура для вычисления используемого типом строки интерфейса памяти


# ::stappler::string::InterfaceForString<const typename memory::StandartInterface::WideStringType>::Type

## BRIEF

Тип используемого интерфейса памяти

## CONTENT

Тип используемого интерфейса памяти


# ::stappler::string::InterfaceForString<const typename memory::PoolInterface::StringType>::InterfaceForString<const typename memory::PoolInterface::StringType>

## BRIEF

Вспомогатльная структура для вычисления используемого типом строки интерфейса памяти

## CONTENT

Вспомогатльная структура для вычисления используемого типом строки интерфейса памяти


# ::stappler::string::InterfaceForString<const typename memory::PoolInterface::StringType>::Type

## BRIEF

Тип используемого интерфейса памяти

## CONTENT

Тип используемого интерфейса памяти


# ::stappler::string::InterfaceForString<const typename memory::PoolInterface::WideStringType>::InterfaceForString<const typename memory::PoolInterface::WideStringType>

## BRIEF

Вспомогатльная структура для вычисления используемого типом строки интерфейса памяти

## CONTENT

Вспомогатльная структура для вычисления используемого типом строки интерфейса памяти


# ::stappler::string::InterfaceForString<const typename memory::PoolInterface::WideStringType>::Type

## BRIEF

Тип используемого интерфейса памяти

## CONTENT

Тип используемого интерфейса памяти


# ::stappler::string::utf8Decode32(stappler::string::char_const_ptr_ref_t)

## BRIEF

Декодирует текущий символ из UTF-8, смещая переданный указатель

## CONTENT

Декодирует текущий символ из UTF-8, смещая переданный указатель

Параметры:
* stappler::string::char_const_ptr_ref_t

Возвращает:
* char32_t

# ::stappler::string::utf8HtmlDecode32(stappler::string::char_const_ptr_ref_t)

## BRIEF

Декодирует текущий символ из UTF-8, смещая переданный указатель

## CONTENT

Декодирует текущий символ из UTF-8, смещая переданный указатель. декодирует также HTML-кодирование

Параметры:
* stappler::string::char_const_ptr_ref_t

Возвращает:
* char32_t

# ::stappler::string::isValidUtf8(stappler::StringView)

## BRIEF

Проверяет, содержит ли строка правильно сформированный UTF-8

## CONTENT

Проверяет, содержит ли строка правильно сформированный UTF-8

Параметры:
* stappler::StringView

Возвращает:
* bool - true если в строке нет ошибок UTF-8


# ::stappler::string::utf8Encode<typename>(StringType&,char16_t)

## BRIEF

Кодирует исходный символ в UTF-8, записывает его в строку

## CONTENT

Кодирует исходный символ в UTF-8, записывает его в строку

Параметры шаблона:
* typename StringType - тип строки

Параметры:
* StringType&
* char16_t

Возвращает:
* uint8_t - число добавленных в строку символов

# ::stappler::string::utf8Encode<typename>(StringType&,char32_t)

## BRIEF

Кодирует исходный символ в UTF-8, записывает его в строку

## CONTENT

Кодирует исходный символ в UTF-8, записывает его в строку

Параметры шаблона:
* typename StringType - тип строки

Параметры:
* StringType&
* char32_t

Возвращает:
* uint8_t

# ::stappler::string::utf8Encode(std::ostream&,char16_t)

## BRIEF

Кодирует исходный символ в UTF-8, записывает его в поток

## CONTENT

Кодирует исходный символ в UTF-8, записывает его в поток

Параметры:
* std::ostream&
* char16_t

Возвращает:
* uint8_t

# ::stappler::string::utf8Encode(std::ostream&,char32_t)

## BRIEF

Кодирует исходный символ в UTF-8, записывает его в поток

## CONTENT

Кодирует исходный символ в UTF-8, записывает его в поток

Параметры:
* std::ostream&
* char32_t

Возвращает:
* uint8_t

# ::stappler::string::utf16Encode<typename>(StringType&,char32_t)

## BRIEF

Кодирует исходный символ в UTF-16, записывает его в строку

## CONTENT

Кодирует исходный символ в UTF-16, записывает его в строку

Параметры шаблона:
* typename StringType

Параметры:
* StringType&
* char32_t

Возвращает:
* uint8_t

# ::stappler::string::utf16Encode(std::basic_ostream<char16_t>&,char32_t)

## BRIEF

Кодирует исходный символ в UTF-16, записывает его в поток

## CONTENT

Кодирует исходный символ в UTF-16, записывает его в поток

Параметры:
* std::basic_ostream<char16_t>&
* char32_t

Возвращает:
* uint8_t

# ::stappler::string::tolower<typename,typename>(StringType&)

## BRIEF

Преобразовывает строку к нижнему регистру. Ограничено использует юникод.

## CONTENT

Преобразовывает строку к нижнему регистру. Ограничено использует юникод. Полная поддержка юникода возможна при поддержке платформы.

Параметры шаблона:
* typename StringType
* typename Interface

Параметры:
* StringType&

Возвращает:
* StringType&

# ::stappler::string::toupper<typename,typename>(StringType&)

## BRIEF

Преобразовывает строку к верхнему регистру. Ограничено использует юникод.

## CONTENT

Преобразовывает строку к верхнему регистру. Ограничено использует юникод. Полная поддержка юникода возможна при поддержке платформы.

Параметры шаблона:
* typename StringType
* typename Interface

Параметры:
* StringType&

Возвращает:
* StringType&

# ::stappler::string::toupper<typename>(stappler::StringView const&)

## BRIEF

Возвращает строку в верхнем регистре. Ограничено использует юникод.

## CONTENT

Возвращает строку в верхнем регистре. Ограничено использует юникод. Полная поддержка юникода возможна при поддержке платформы.

Параметры шаблона:
* typename Interface - интерфейс памяти для новой строки

Параметры:
* stappler::StringView const&

Возвращает:
* typename Interface::StringType

# ::stappler::string::toupper<typename>(stappler::WideStringView const&)

## BRIEF

Возвращает строку в верхнем регистре. Ограничено использует юникод.

## CONTENT

Возвращает строку в верхнем регистре. Ограничено использует юникод. Полная поддержка юникода возможна при поддержке платформы.

Параметры шаблона:
* typename Interface - интерфейс памяти для новой строки

Параметры:
* stappler::WideStringView const&

Возвращает:
* typename Interface::WideStringType

# ::stappler::string::tolower<typename>(stappler::StringView const&)

## BRIEF

Возвращает строку в нижнем регистре. Ограничено использует юникод.

## CONTENT

Возвращает строку в нижнем регистре. Ограничено использует юникод. Полная поддержка юникода возможна при поддержке платформы.

Параметры шаблона:
* typename Interface - интерфейс памяти для новой строки

Параметры:
* stappler::StringView const&

Возвращает:
* typename Interface::StringType

# ::stappler::string::tolower<typename>(stappler::WideStringView const&)

## BRIEF

Возвращает строку в нижнем регистре. Ограничено использует юникод.

## CONTENT

Возвращает строку в нижнем регистре. Ограничено использует юникод. Полная поддержка юникода возможна при поддержке платформы.

Параметры шаблона:
* typename Interface - интерфейс памяти для новой строки

Параметры:
* stappler::WideStringView const&

Возвращает:
* typename Interface::WideStringType

# ::stappler::string::urlencode<typename>(stappler::StringView const&)

## BRIEF

Кодирует строку для передачи её в URL

## CONTENT

Кодирует строку для передачи её в URL

Параметры шаблона:
* typename Interface - интерфейс памяти для новой строки

Параметры:
* stappler::StringView const&

Возвращает:
* typename Interface::StringType

# ::stappler::string::urldecode<typename>(Storage&,stappler::StringView const&)

## BRIEF

Декодирует строку, восстанавливая экранированные в URL символы

## CONTENT

Декодирует строку, восстанавливая экранированные в URL символы

Параметры шаблона:
* typename Storage - тип контейнера для хранения результата

Параметры:
* Storage& - контейнер для хранения результата
* stappler::StringView const&


# ::stappler::string::urldecode<typename>(stappler::StringView const&)

## BRIEF

Декодирует строку, восстанавливая экранированные в URL символы. Возвращает новую строку.

## CONTENT

Декодирует строку, восстанавливая экранированные в URL символы. Возвращает новую строку.

Параметры шаблона:
* typename Interface - интерфейс памяти для новой строки

Параметры:
* stappler::StringView const&

Возвращает:
* typename Interface::StringType

# ::stappler::string::toUtf16<typename>(stappler::StringView const&)

## BRIEF

Перекодирует строку из UTF-8 в UTF-16

## CONTENT

Перекодирует строку из UTF-8 в UTF-16

Параметры шаблона:
* typename Interface - интерфейс памяти для новой строки

Параметры:
* stappler::StringView const&

Возвращает:
* typename Interface::WideStringType

# ::stappler::string::toUtf16<typename>(char32_t)

## BRIEF

Кодирует символ юникода в строку UTF-16

## CONTENT

Кодирует символ юникода в строку UTF-16

Параметры шаблона:
* typename Interface - интерфейс памяти для новой строки

Параметры:
* char32_t

Возвращает:
* typename Interface::WideStringType

# ::stappler::string::toUtf16Html<typename>(stappler::StringView const&)

## BRIEF

Перекодирует строку из UTF-8 в UTF-16, декодируя HTML-экранирование

## CONTENT

Перекодирует строку из UTF-8 в UTF-16, декодируя HTML-экранирование

Параметры шаблона:
* typename Interface - интерфейс памяти для новой строки

Параметры:
* stappler::StringView const&

Возвращает:
* typename Interface::WideStringType

# ::stappler::string::toUtf8<typename>(stappler::WideStringView const&)

## BRIEF

Перекодирует строку из UTF-16 в UTF-8

## CONTENT

Перекодирует строку из UTF-16 в UTF-8

Параметры шаблона:
* typename Interface - интерфейс памяти для новой строки

Параметры:
* stappler::WideStringView const&

Возвращает:
* typename Interface::StringType

# ::stappler::string::toUtf8<typename>(char16_t)

## BRIEF

Кодирует символ юникода в строку UTF-8

## CONTENT

Кодирует символ юникода в строку UTF-8

Параметры шаблона:
* typename Interface - интерфейс памяти для новой строки

Параметры:
* char16_t

Возвращает:
* typename Interface::StringType

# ::stappler::string::toUtf8<typename>(char32_t)

## BRIEF

Кодирует символ юникода в строку UTF-8

## CONTENT

Кодирует символ юникода в строку UTF-8

Параметры шаблона:
* typename Interface - интерфейс памяти для новой строки

Параметры:
* char32_t

Возвращает:
* typename Interface::StringType

# ::stappler::string::toKoi8r<typename>(stappler::WideStringView const&)

## BRIEF

Перекодирует строку из UTF-16 в KOI8-R

## CONTENT

Перекодирует строку из UTF-16 в KOI8-R. Историческая функция, оставлена для совместимости.

Параметры шаблона:
* typename Interface - интерфейс памяти для новой строки

Параметры:
* stappler::WideStringView const&

Возвращает:
* typename Interface::StringType

# ::stappler::string::split<typename>(stappler::StringView const&,stappler::StringView const&,T&&)

## BRIEF

Разбивает строку по разделителю

## CONTENT

Разбивает строку по разделителю

Параметры шаблона:
* typename T - тип функции обратного вызова

Параметры:
* stappler::StringView const& - исходная строка
* stappler::StringView const& - разделитель
* T&& - функция обратного вызова. Будет вызвана с параметром StringView для каждого сегмента.


# ::stappler::string::StringTraits<typename>

## BRIEF

Вспомогательная структура для вызова строковых функций, требующих интерфейс памяти

## CONTENT

Вспомогательная структура для вызова строковых функций, требующих интерфейс памяти

Параметры шаблона:
* typename Interface - интерфейс памяти

Базовые классы:
* Interface


# ::stappler::string::StringTraits<typename>::String

## BRIEF

Тип строки

## CONTENT

Тип строки. Предполагает кодирование UTF-8.

# ::stappler::string::StringTraits<typename>::WideString

## BRIEF

Тип широкой строки

## CONTENT

Тип широкой строки. Предполагает кодирование UTF-16.

# ::stappler::string::StringTraits<typename>::StringStream

## BRIEF

Тип строкового потока

## CONTENT

Тип строкового потока

# ::stappler::string::StringTraits<typename>::Vector<typename>

## BRIEF

Тип вектора

## CONTENT

Тип вектора

Параметры шаблона:
* typename Value - тип элемента вектора


# ::stappler::string::StringTraits<typename>::Set<typename>

## BRIEF

Тип упорядоченного набора

## CONTENT

Тип упорядоченного набора

Параметры шаблона:
* typename Value - тип элемента набора


# ::stappler::string::StringTraits<typename>::split<typename>(stappler::string::StringTraits::String const&,stappler::string::StringTraits::String const&,T&&)

## BRIEF

Разбивает строку по разделителю

## CONTENT

Разбивает строку по разделителю

Параметры шаблона:
* typename T - тип функции обратного вызова

Параметры:
* stappler::string::StringTraits::String const& - исходная строка
* stappler::string::StringTraits::String const& - разделитель
* T&& - функция обратного вызова. Будет вызвана с параметром StringView для каждого сегмента.


# ::stappler::string::StringTraits<typename>::urlencode(stappler::StringView const&)

## BRIEF

Кодирует строку для передачи в URL

## CONTENT

Кодирует строку для передачи в URL

Параметры:
* stappler::StringView const&

Возвращает:
* String

# ::stappler::string::StringTraits<typename>::urldecode(stappler::StringView const&)

## BRIEF

Декодирует строку, восстанавливая экранированные в URL символы

## CONTENT

Декодирует строку, восстанавливая экранированные в URL символы

Параметры:
* stappler::StringView const&

Возвращает:
* String

# ::stappler::string::StringTraits<typename>::toUtf16(char32_t)

## BRIEF

Записывает символ юникода в строку в виде UTF-16

## CONTENT

Записывает символ юникода в строку в виде UTF-16

Параметры:
* char32_t

Возвращает:
* WideString

# ::stappler::string::StringTraits<typename>::toUtf16(stappler::StringView const&)

## BRIEF

Перекодирует строку из UTF-8 в UTF-16

## CONTENT

Перекодирует строку из UTF-8 в UTF-16

Параметры:
* stappler::StringView const&

Возвращает:
* WideString

# ::stappler::string::StringTraits<typename>::toUtf16Html(stappler::StringView const&)

## BRIEF

Перекодирует строку из UTF-8 в UTF-16, декодирует HTML-экранирование

## CONTENT

Перекодирует строку из UTF-8 в UTF-16, декодирует HTML-экранирование

Параметры:
* stappler::StringView const&

Возвращает:
* WideString

# ::stappler::string::StringTraits<typename>::toUtf8(char32_t)

## BRIEF

Кодирует символ в строку UTF-8

## CONTENT

Кодирует символ в строку UTF-8

Параметры:
* char32_t

Возвращает:
* String

# ::stappler::string::StringTraits<typename>::toUtf8(char16_t)

## BRIEF

Кодирует символ в строку UTF-8

## CONTENT

Кодирует символ в строку UTF-8

Параметры:
* char16_t

Возвращает:
* String

# ::stappler::string::StringTraits<typename>::toUtf8(stappler::WideStringView const&)

## BRIEF

Перекодирует строку из UTF-16 в UTF-8

## CONTENT

Перекодирует строку из UTF-16 в UTF-8

Параметры:
* stappler::WideStringView const&

Возвращает:
* String

# ::stappler::string::StringTraits<typename>::toKoi8r(stappler::WideStringView const&)

## BRIEF

Перекодирует строку из UTF-16 в KOI8-R

## CONTENT

Перекодирует строку из UTF-16 в KOI8-R. Историческая функция, оставлена для совместимости.

Параметры:
* stappler::WideStringView const&

Возвращает:
* String

# ::stappler::string::StringTraits<typename>::tolower(stappler::string::StringTraits::WideString&)

## BRIEF

Конвертирует строку к нижнему регистру

## CONTENT

Конвертирует строку к нижнему регистру

Параметры:
* stappler::string::StringTraits::WideString&

Возвращает:
* WideString&

# ::stappler::string::StringTraits<typename>::toupper(stappler::string::StringTraits::WideString&)

## BRIEF

Конвертирует строку к верхнему регистру

## CONTENT

Конвертирует строку к верхнему регистру

Параметры:
* stappler::string::StringTraits::WideString&

Возвращает:
* WideString&

# ::stappler::string::StringTraits<typename>::tolower(stappler::string::StringTraits::String&)

## BRIEF

Конвертирует строку к нижнему регистру

## CONTENT

Конвертирует строку к нижнему регистру

Параметры:
* stappler::string::StringTraits::String&

Возвращает:
* String&

# ::stappler::string::StringTraits<typename>::toupper(stappler::string::StringTraits::String&)

## BRIEF

Конвертирует строку к верхнему регистру

## CONTENT

Конвертирует строку к верхнему регистру

Параметры:
* stappler::string::StringTraits::String&

Возвращает:
* String&

# ::stappler::string::StringTraits<typename>::tolower(stappler::WideStringView const&)

## BRIEF

Возвращает строку в нижнем регистре

## CONTENT

Возвращает строку в нижнем регистре

Параметры:
* stappler::WideStringView const&

Возвращает:
* WideString

# ::stappler::string::StringTraits<typename>::toupper(stappler::WideStringView const&)

## BRIEF

Возвращает строку в верхнем регистре

## CONTENT

Возвращает строку в верхнем регистре

Параметры:
* stappler::WideStringView const&

Возвращает:
* WideString

# ::stappler::string::StringTraits<typename>::tolower(stappler::StringView const&)

## BRIEF

Возвращает строку в нижнем регистре

## CONTENT

Возвращает строку в нижнем регистре

Параметры:
* stappler::StringView const&

Возвращает:
* String

# ::stappler::string::StringTraits<typename>::toupper(stappler::StringView const&)

## BRIEF

Возвращает строку в верхнем регистре

## CONTENT

Возвращает строку в верхнем регистре

Параметры:
* stappler::StringView const&

Возвращает:
* String

# ::stappler::string::StringTraits<typename>::isUrlencodeChar(char)

## BRIEF

Проверяет, нуждается ли символ в экранировании для URL

## CONTENT

Проверяет, нуждается ли символ в экранировании для URL

Параметры:
* char

Возвращает:
* bool

# ::stappler::string::ToStringTraits<memory::StandartInterface>::ToStringTraits<memory::StandartInterface>

## BRIEF

Вспомогательный тип для функции `toString`

## CONTENT

Вспомогательный тип для функции `toString`. Обеспечивает использование функции при передаче разнородного списка аргументов произвольной длины


# ::stappler::string::ToStringTraits<memory::StandartInterface>::String

## BRIEF

Тип стандартной строки

## CONTENT

Тип стандартной строки

# ::stappler::string::ToStringTraits<memory::StandartInterface>::WideString

## BRIEF

Тип широкой строки

## CONTENT

Тип широкой строки


# ::stappler::string::ToStringTraits<memory::StandartInterface>::StringStream

## BRIEF

Тип строкового потока

## CONTENT

Тип строкового потока


# ::stappler::string::ToStringTraits<memory::StandartInterface>::toStringStream<typename>(stappler::string::ToStringTraits<stappler::memory::StandartInterface>::StringStream&,T)

## BRIEF

Записывает произвольный тип в строковый поток

## CONTENT

Записывает произвольный тип в строковый поток

Параметры шаблона:
* typename T

Параметры:
* stappler::string::ToStringTraits<stappler::memory::StandartInterface>::StringStream&
* T


# ::stappler::string::ToStringTraits<memory::StandartInterface>::toStringStream<typename,typename>(stappler::string::ToStringTraits<stappler::memory::StandartInterface>::StringStream&,T,Args &&...)

## BRIEF

Записывает произвольный тип в строковый поток

## CONTENT

Записывает произвольный тип в строковый поток и продолжает разбор аргументов

Параметры шаблона:
* typename T
* typename Args

Параметры:
* stappler::string::ToStringTraits<stappler::memory::StandartInterface>::StringStream&
* T
* Args &&...


# ::stappler::string::ToStringTraits<memory::StandartInterface>::toString<class>(T)

## BRIEF

Конвертирует одиночное знаение в строку

## CONTENT

Конвертирует одиночное знаение в строку. Более эффективно, чем использовать строковый поток.

Параметры шаблона:
* class T

Параметры:
* T

Возвращает:
* String

# ::stappler::string::ToStringTraits<memory::StandartInterface>::toString(stappler::StringView const&)

## BRIEF

Конвертирует отображение строки в новую строку

## CONTENT

Конвертирует отображение строки в новую строку. Более эффективно, чем использовать строковый поток.

Параметры:
* stappler::StringView const&

Возвращает:
* String

# ::stappler::string::ToStringTraits<memory::StandartInterface>::toString(stappler::string::ToStringTraits<stappler::memory::StandartInterface>::String const&)

## BRIEF

Конвертирует строку в новую строку

## CONTENT

Конвертирует строку в новую строку. Более эффективно, чем использовать строковый поток.

Параметры:
* stappler::string::ToStringTraits<stappler::memory::StandartInterface>::String const&

Возвращает:
* String

# ::stappler::string::ToStringTraits<memory::StandartInterface>::toString(char const*)

## BRIEF

Конвертирует С-строку в новую строку

## CONTENT

Конвертирует С-строку в новую строку. Более эффективно, чем использовать строковый поток.

Параметры:
* char const*

Возвращает:
* String

# ::stappler::string::ToStringTraits<memory::StandartInterface>::toString<typename,typename>(T,Args &&...)

## BRIEF

Вызывает стандартную конвертацию для набора аргументов произвольной длины

## CONTENT

Вызывает стандартную конвертацию для набора аргументов произвольной длины

Параметры шаблона:
* typename T
* typename Args

Параметры:
* T
* Args &&...

Возвращает:
* String

# ::stappler::string::ToStringTraits<memory::PoolInterface>::ToStringTraits<memory::PoolInterface>

## BRIEF

Вспомогательный тип для функции `toString`

## CONTENT

Вспомогательный тип для функции `toString`. Обеспечивает использование функции при передаче разнородного списка аргументов произвольной длины


# ::stappler::string::ToStringTraits<memory::PoolInterface>::String

## BRIEF

Тип стандартной строки

## CONTENT

Тип стандартной строки


# ::stappler::string::ToStringTraits<memory::PoolInterface>::WideString

## BRIEF

Тип широкой строки

## CONTENT

Тип широкой строки


# ::stappler::string::ToStringTraits<memory::PoolInterface>::StringStream

## BRIEF

Тип строкового потока

## CONTENT

Тип строкового потока

# ::stappler::string::ToStringTraits<memory::PoolInterface>::toStringStream<typename>(stappler::string::ToStringTraits<stappler::memory::PoolInterface>::StringStream&,T)

## BRIEF

Записывает произвольный тип в строковый поток

## CONTENT

Записывает произвольный тип в строковый поток

Параметры шаблона:
* typename T

Параметры:
* stappler::string::ToStringTraits<stappler::memory::PoolInterface>::StringStream&
* T


# ::stappler::string::ToStringTraits<memory::PoolInterface>::toStringStream<typename,typename>(stappler::string::ToStringTraits<stappler::memory::PoolInterface>::StringStream&,T,Args &&...)

## BRIEF

Записывает произвольный тип в строковый поток

## CONTENT

Записывает произвольный тип в строковый поток. Продолжает разбор аргументов.

Параметры шаблона:
* typename T
* typename Args

Параметры:
* stappler::string::ToStringTraits<stappler::memory::PoolInterface>::StringStream&
* T
* Args &&...


# ::stappler::string::ToStringTraits<memory::PoolInterface>::toString<class>(T)

## BRIEF

Конвертирует одиночный аргумент произвольного типа в строку

## CONTENT

Конвертирует одиночный аргумент произвольного типа в строку

Параметры шаблона:
* class T

Параметры:
* T

Возвращает:
* String

# ::stappler::string::ToStringTraits<memory::PoolInterface>::toString(stappler::StringView const&)

## BRIEF

Конвертирует отображение строки в строку

## CONTENT

Конвертирует отображение строки в строку

Параметры:
* stappler::StringView const&

Возвращает:
* String

# ::stappler::string::ToStringTraits<memory::PoolInterface>::toString(stappler::string::ToStringTraits<stappler::memory::PoolInterface>::String const&)

## BRIEF

Конвертирует старую строку в новую строку

## CONTENT

Конвертирует старую строку в новую строку

Параметры:
* stappler::string::ToStringTraits<stappler::memory::PoolInterface>::String const&

Возвращает:
* String

# ::stappler::string::ToStringTraits<memory::PoolInterface>::toString(char const*)

## BRIEF

Конвертирует С-строку в новую строку

## CONTENT

Конвертирует С-строку в новую строку

Параметры:
* char const*

Возвращает:
* String

# ::stappler::string::ToStringTraits<memory::PoolInterface>::toString<typename,typename>(T,Args &&...)

## BRIEF

Вызывает стандартную конвертацию для набора аргументов произвольной длины

## CONTENT

Вызывает стандартную конвертацию для набора аргументов произвольной длины

Параметры шаблона:
* typename T
* typename Args

Параметры:
* T
* Args &&...

Возвращает:
* String

# ::stappler::string::Sha256

## BRIEF

Псевдоним для типа вычисления Sha256

## CONTENT

Псевдоним для типа вычисления Sha256. Нужен для совместимости.

# ::stappler::string::Sha512

## BRIEF

Псевдоним для типа вычисления Sha512

## CONTENT

Псевдоним для типа вычисления Sha512. Нужен для совместимости.


# ::stappler::string::hash32(stappler::StringView const&)

## BRIEF

Вычисляет 32-битный контрольный хэш строки

## CONTENT

Вычисляет 32-битный контрольный хэш строки

Параметры:
* stappler::StringView const&

Возвращает:
* uint32_t

# ::stappler::string::hash64(stappler::StringView const&)

## BRIEF

Вычисляет 64-битный контрольный хэш строки

## CONTENT

Вычисляет 64-битный контрольный хэш строки

Параметры:
* stappler::StringView const&

Возвращает:
* uint64_t

# ::stappler::string::stdlibHashUnsigned<typename>(StringType const&)

## BRIEF

Вычисляет стандартный беззнаковый контрольный хэш строки

## CONTENT

Вычисляет стандартный беззнаковый контрольный хэш строки

Параметры шаблона:
* typename StringType

Параметры:
* StringType const&

Возвращает:
* uint64_t

# ::stappler::string::stdlibHashSigned<typename>(StringType const&)

## BRIEF

Вычисляет стандартный знаковый контрольный хэш строки

## CONTENT

Вычисляет стандартный знаковый контрольный хэш строки

Параметры шаблона:
* typename StringType

Параметры:
* StringType const&

Возвращает:
* int64_t

# ::stappler::base16::charToHex(char const&,bool)

## BRIEF

Возвращает представление символа в 16-ричной системе

## CONTENT

Возвращает представление символа в 16-ричной системе

Параметры:
* char const&
* bool - true если необходим верхний регистр, false - нижний

Возвращает:
* char const* - статическая двухбайтовая строка для представления символа (00-FF)

# ::stappler::base16::hexToChar(char const&)

## BRIEF

Конвертирует 16-ричный символ в его численное значение

## CONTENT

Конвертирует 16-ричный символ в его численное значение

Параметры:
* char const& - исходный символ ('0' - 'F'), регистр игнорируется

Возвращает:
* uint8_t - результат: 0-16

# ::stappler::base16::hexToChar(char const&,char const&)

## BRIEF

Конвертирует 16-ричные символы в его численное значение

## CONTENT

Конвертирует 16-ричные символы в его численное значение

Параметры:
* char const& - старший символ ('0' - 'F'), регистр игнорируется
* char const& - младший символ ('0' - 'F'), регистр игнорируется

Возвращает:
* uint8_t - результат: 0-255

# ::stappler::base16::encodeSize(size_t)

## BRIEF

Вычисляет размер кодирования строки в 16-ричный формат

## CONTENT

Вычисляет размер кодирования строки в 16-ричный формат

Параметры:
* size_t - размер исходных данных в байтах

Возвращает:
* size_t - размер в 16-ричном формате

# ::stappler::base16::decodeSize(size_t)

## BRIEF

Вычисляет размер декодирования строки из 16-ричного формата

## CONTENT

Вычисляет размер декодирования строки из 16-ричного формата

Параметры:
* size_t - длина закодированной строки

Возвращает:
* size_t - размер результата

# ::stappler::base16::encode<typename>(stappler::CoderSource const&)

## BRIEF

Кодирует строку в 16-ричный формат

## CONTENT

Кодирует строку в 16-ричный формат

Параметры шаблона:
* typename Interface - интерфейс памяти для новой строки

Параметры:
* stappler::CoderSource const& - исходные данные

Возвращает:
* typename Interface::StringType - новая строка

# ::stappler::base16::encode(std::basic_ostream<char>&,stappler::CoderSource const&)

## BRIEF

Кодирует строку в 16-ричный формат и записывает в поток

## CONTENT

Кодирует строку в 16-ричный формат и записывает в поток

Параметры:
* std::basic_ostream<char>&
* stappler::CoderSource const&


# ::stappler::base16::encode(Callback<void (char)> const&,stappler::CoderSource const&)

## BRIEF

Кодирует строку в 16-ричный формат, посимвольно вызывает функцию для кодирования

## CONTENT

Кодирует строку в 16-ричный формат, посимвольно вызывает функцию для кодирования

Параметры:
* Callback<void (char)> const& - функция вызывается для вставки нового символа
* stappler::CoderSource const&


# ::stappler::base16::encode(char*,size_t,stappler::CoderSource const&)

## BRIEF

Кодирует строку в 16-ричный формат, записывает в буфер

## CONTENT

Кодирует строку в 16-ричный формат, записывает в буфер. Для успешной записи буфер должен быть не менее `encodeSize`. Не записывает в буфер больше указанной длины.

Параметры:
* char* - указатель на начало буфера
* size_t - длина буфера
* stappler::CoderSource const&

Возвращает:
* size_t - число записанных символов

# ::stappler::base16::decode<typename>(stappler::CoderSource const&)

## BRIEF

Декодирует 16-ричную строку

## CONTENT

Декодирует 16-ричную строку

Параметры шаблона:
* typename Interface - интерфейс памяти для новой байтовой строки

Параметры:
* stappler::CoderSource const&

Возвращает:
* typename Interface::BytesType

# ::stappler::base16::decode(std::basic_ostream<char>&,stappler::CoderSource const&)

## BRIEF

Декодирует 16-ричную строку, записывает результат в поток

## CONTENT

Декодирует 16-ричную строку, записывает результат в поток

Параметры:
* std::basic_ostream<char>&
* stappler::CoderSource const&


# ::stappler::base16::decode(Callback<void (uint8_t)> const&,stappler::CoderSource const&)

## BRIEF

Декодирует 16-ричную строку, посимвольно вызывает функцию

## CONTENT

Декодирует 16-ричную строку, посимвольно вызывает функцию

Параметры:
* Callback<void (uint8_t)> const& - функция вызывается для записи седующего символа
* stappler::CoderSource const&


# ::stappler::base16::decode(uint8_t*,size_t,stappler::CoderSource const&)

## BRIEF

Декодирует 16-ричную строку, записывает результат в буфер

## CONTENT

Декодирует 16-ричную строку, записывает результат в буфер. Для успешной записи буфер должен быть не менее `decodeSize`. Не записывает в буфер больше указанной длины.

Параметры:
* uint8_t* - указатель на начало буфера
* size_t - длина буфера
* stappler::CoderSource const&

Возвращает:
* size_t - число записанных символов

# ::stappler::base64::encodeSize(size_t)

## BRIEF

Вычисляет размер строки для кодирования в Base64

## CONTENT

Вычисляет размер строки для кодирования в Base64

Параметры:
* size_t - размер исходных данных в байтах

Возвращает:
* size_t - размер строки, закодированной в Base64

# ::stappler::base64::decodeSize(size_t)

## BRIEF

Вычисляет размер исходных данных при декодировании из Base64

## CONTENT

Вычисляет размер исходных данных при декодировании из Base64

Параметры:
* size_t - размер строки в Base64

Возвращает:
* size_t - размер исходных данных


# ::stappler::base64::encode<typename>(stappler::CoderSource const&)

## BRIEF

Кодирует данные в Base64

## CONTENT

Кодирует данные в Base64

Параметры шаблона:
* typename Interface - интерфейс памяти для новой строки

Параметры:
* stappler::CoderSource const&

Возвращает:
* typename Interface::StringType

# ::stappler::base64::encode(std::basic_ostream<char>&,stappler::CoderSource const&)

## BRIEF

Кодирует данные в Base64, записывает результат в поток

## CONTENT

Кодирует данные в Base64, записывает результат в поток

Параметры:
* std::basic_ostream<char>&
* stappler::CoderSource const&


# ::stappler::base64::encode(Callback<void (char)> const&,stappler::CoderSource const&)

## BRIEF

Кодирует данные в Base64, побайтово вызывает функцию записи

## CONTENT

Кодирует данные в Base64, побайтово вызывает функцию записи

Параметры:
* Callback<void (char)> const& - функция вызывается для записи следующего символа
* stappler::CoderSource const&


# ::stappler::base64::encode(char*,size_t,stappler::CoderSource const&)

## BRIEF

Кодирует данные в Base64, записывает результат в буфер

## CONTENT

Кодирует данные в Base64, записывает результат в буфер. Для успешной записи буфер должен быть не менее `encodeSize`. Не записывает в буфер больше указанной длины.

Параметры:
* char* - указатель на начало буфера
* size_t - длина буфера
* stappler::CoderSource const&

Возвращает:
* size_t - число реально записанных байт

# ::stappler::base64::decode<typename>(stappler::CoderSource const&)

## BRIEF

Декодирует данные из Base64

## CONTENT

Декодирует данные из Base64. Успешно декодирует варианты Base64 и Base64-URL.

Параметры шаблона:
* typename Interface - интерфейс памяти для новой байтовой строки

Параметры:
* stappler::CoderSource const&

Возвращает:
* typename Interface::BytesType

# ::stappler::base64::decode(std::basic_ostream<char>&,stappler::CoderSource const&)

## BRIEF

Декодирует данные из Base64, записывает результат в поток

## CONTENT

Декодирует данные из Base64, записывает результат в поток. Успешно декодирует варианты Base64 и Base64-URL.

Параметры:
* std::basic_ostream<char>&
* stappler::CoderSource const&


# ::stappler::base64::decode(Callback<void (uint8_t)> const&,stappler::CoderSource const&)

## BRIEF

Декодирует данные из Base64, вызывает функцию записи побайтово

## CONTENT

Декодирует данные из Base64, вызывает функцию записи побайтово. Успешно декодирует варианты Base64 и Base64-URL.

Параметры:
* Callback<void (uint8_t)> const& - функция вызывается для записи следующего байта результата
* stappler::CoderSource const&


# ::stappler::base64::decode(uint8_t*,size_t,stappler::CoderSource const&)

## BRIEF

Декодирует данные из Base64, записывает результат в буфер

## CONTENT

Декодирует данные из Base64, записывает результат в буфер. Успешно декодирует варианты Base64 и Base64-URL. Для успешной записи буфер должен быть не менее `decodeSize`. Не записывает в буфер больше указанной длины.

Параметры:
* uint8_t* - указатель на начало буфера
* size_t - длина буфера
* stappler::CoderSource const&

Возвращает:
* size_t - число реально записанных байт


# ::stappler::base64url::encodeSize(size_t)

## BRIEF

Вычисляет размер строки для кодирования в Base64

## CONTENT

Вычисляет размер строки для кодирования в Base64

Параметры:
* size_t - размер исходных данных в байтах

Возвращает:
* size_t - размер строки, закодированной в Base64

# ::stappler::base64url::decodeSize(size_t)

## BRIEF

Вычисляет размер исходных данных при декодировании из Base64

## CONTENT

Вычисляет размер исходных данных при декодировании из Base64

Параметры:
* size_t - размер строки в Base64

Возвращает:
* size_t - размер исходных данных


# ::stappler::base64url::encode<typename>(stappler::CoderSource const&)

## BRIEF

Кодирует данные в Base64

## CONTENT

Кодирует данные в Base64

Параметры шаблона:
* typename Interface - интерфейс памяти для новой строки

Параметры:
* stappler::CoderSource const&

Возвращает:
* typename Interface::StringType

# ::stappler::base64url::encode(std::basic_ostream<char>&,stappler::CoderSource const&)

## BRIEF

Кодирует данные в Base64, записывает результат в поток

## CONTENT

Кодирует данные в Base64, записывает результат в поток

Параметры:
* std::basic_ostream<char>&
* stappler::CoderSource const&


# ::stappler::base64url::encode(Callback<void (char)> const&,stappler::CoderSource const&)

## BRIEF

Кодирует данные в Base64, побайтово вызывает функцию записи

## CONTENT

Кодирует данные в Base64, побайтово вызывает функцию записи

Параметры:
* Callback<void (char)> const& - функция вызывается для записи следующего символа
* stappler::CoderSource const&


# ::stappler::base64url::encode(char*,size_t,stappler::CoderSource const&)

## BRIEF

Кодирует данные в Base64, записывает результат в буфер

## CONTENT

Кодирует данные в Base64, записывает результат в буфер. Для успешной записи буфер должен быть не менее `encodeSize`. Не записывает в буфер больше указанной длины.

Параметры:
* char* - указатель на начало буфера
* size_t - длина буфера
* stappler::CoderSource const&

Возвращает:
* size_t - число реально записанных байт

# ::stappler::base64url::decode<typename>(stappler::CoderSource const&)

## BRIEF

Декодирует данные из Base64

## CONTENT

Декодирует данные из Base64. Успешно декодирует варианты Base64 и Base64-URL.

Параметры шаблона:
* typename Interface - интерфейс памяти для новой байтовой строки

Параметры:
* stappler::CoderSource const&

Возвращает:
* typename Interface::BytesType

# ::stappler::base64url::decode(std::basic_ostream<char>&,stappler::CoderSource const&)

## BRIEF

Декодирует данные из Base64, записывает результат в поток

## CONTENT

Декодирует данные из Base64, записывает результат в поток. Успешно декодирует варианты Base64 и Base64-URL.

Параметры:
* std::basic_ostream<char>&
* stappler::CoderSource const&


# ::stappler::base64url::decode(Callback<void (uint8_t)> const&,stappler::CoderSource const&)

## BRIEF

Декодирует данные из Base64, вызывает функцию записи побайтово

## CONTENT

Декодирует данные из Base64, вызывает функцию записи побайтово. Успешно декодирует варианты Base64 и Base64-URL.

Параметры:
* Callback<void (uint8_t)> const& - функция вызывается для записи следующего байта результата
* stappler::CoderSource const&


# ::stappler::base64url::decode(uint8_t*,size_t,stappler::CoderSource const&)

## BRIEF

Декодирует данные из Base64, записывает результат в буфер

## CONTENT

Декодирует данные из Base64, записывает результат в буфер. Успешно декодирует варианты Base64 и Base64-URL. Для успешной записи буфер должен быть не менее `decodeSize`. Не записывает в буфер больше указанной длины.

Параметры:
* uint8_t* - указатель на начало буфера
* size_t - длина буфера
* stappler::CoderSource const&

Возвращает:
* size_t - число реально записанных байт


# ::stappler::toStringStreamConcat<typename,typename>(StreamType&,Container const&)

## BRIEF

Соединяет строки из простого контейнера с записью в поток

## CONTENT

Соединяет строки из простого контейнера с записью в поток

Параметры шаблона:
* typename Container - тип контейнера (вектор, набор или другой простой контейнер)
* typename StreamType - тип потока для вывода

Параметры:
* StreamType&
* Container const&


# ::stappler::toStringStreamConcat<typename,typename,typename>(StreamType&,Container const&,Sep const&)

## BRIEF

Соединяет строки из простого контейнера, вставляя разделитель, с записью в поток

## CONTENT

Соединяет строки из простого контейнера, вставляя разделитель, с записью в поток

Параметры шаблона:
* typename Container - тип контейнера (вектор, набор или другой простой контейнер)
* typename Sep - тип разделителя
* typename StreamType - тип потока для вывода

Параметры:
* StreamType&
* Container const&
* Sep const&


# ::stappler::toStringConcat<typename,typename>(Container const&)

## BRIEF

Соединяет строки из простого контейнера, возвращает новую строку

## CONTENT

Соединяет строки из простого контейнера, возвращает новую строку

Параметры шаблона:
* typename Container - тип контейнера (вектор, набор или другой простой контейнер)
* typename StringType - тип новой строки

Параметры:
* Container const&

Возвращает:
* StringType

# ::stappler::toStringConcat<typename,typename,typename>(Container const&,Sep const&)

## BRIEF

Соединяет строки из простого контейнера, вставляя разделитель, возвращает новую строку

## CONTENT

Соединяет строки из простого контейнера, вставляя разделитель, возвращает новую строку

Параметры шаблона:
* typename Container - тип контейнера (вектор, набор или другой простой контейнер)
* typename Sep - тип разделителя
* typename StringType - тип новой строки

Параметры:
* Container const&
* Sep const&

Возвращает:
* StringType

# ::stappler::base64::__encode_pool(stappler::CoderSource const&)

## BRIEF

Кодирует данные в Base64 c использованием интерфейса пулов памяти

## CONTENT

Кодирует данные в Base64 c использованием интерфейса пулов памяти

Параметры:
* stappler::CoderSource const&

Возвращает:
* typename memory::PoolInterface::StringType

# ::stappler::base64::__encode_std(stappler::CoderSource const&)

## BRIEF

Кодирует данные в Base64 c использованием стандартного интерфейса памяти

## CONTENT

Кодирует данные в Base64 c использованием стандартного интерфейса памяти

Параметры:
* stappler::CoderSource const&

Возвращает:
* typename memory::StandartInterface::StringType

# ::stappler::base64::__decode_pool(stappler::CoderSource const&)

## BRIEF

Декодирует данные из Base64 c использованием интерфейса пулов памяти

## CONTENT

Декодирует данные из Base64 c использованием интерфейса пулов памяти

Параметры:
* stappler::CoderSource const&

Возвращает:
* typename memory::PoolInterface::BytesType

# ::stappler::base64::__decode_std(stappler::CoderSource const&)

## BRIEF

Декодирует данные из Base64 c использованием стандартного интерфейса памяти

## CONTENT

Декодирует данные из Base64 c использованием стандартного интерфейса памяти

Параметры:
* stappler::CoderSource const&

Возвращает:
* typename memory::StandartInterface::BytesType

# ::stappler::base64url::__encode_pool(stappler::CoderSource const&)

## BRIEF

Кодирует данные в Base64 c использованием интерфейса пулов памяти

## CONTENT

Кодирует данные в Base64 c использованием интерфейса пулов памяти

Параметры:
* stappler::CoderSource const&

Возвращает:
* typename memory::PoolInterface::StringType

# ::stappler::base64url::__encode_std(stappler::CoderSource const&)

## BRIEF

Кодирует данные в Base64 c использованием стандартного интерфейса памяти

## CONTENT

Кодирует данные в Base64 c использованием стандартного интерфейса памяти

Параметры:
* stappler::CoderSource const&

Возвращает:
* typename memory::StandartInterface::StringType


# ::stappler::mem_pool::String

## BRIEF

Псевдоним типа строки для интерфейса пулов памяти

## CONTENT

Псевдоним типа строки для интерфейса пулов памяти


# ::stappler::mem_pool::WideString

## BRIEF

Псевдоним типа широкой строки для интерфейса пулов памяти

## CONTENT

Псевдоним типа широкой строки для интерфейса пулов памяти


# ::stappler::mem_pool::StringStream

## BRIEF

Псевдоним типа строкового потока для интерфейса пулов памяти

## CONTENT

Псевдоним типа строкового потока для интерфейса пулов памяти


# ::stappler::mem_pool::Interface

## BRIEF

Псевдоним интерфейса

## CONTENT

Псевдоним интерфейса


# ::stappler::mem_pool::to_string::toString<typename>(T const&)

## BRIEF

Реализация функции преобразования в строку для интерфейса пулов памяти

## CONTENT

Реализация функции преобразования в строку для интерфейса пулов памяти

Параметры шаблона:
* typename T

Параметры:
* T const&

Возвращает:
* mem_pool::String

# ::stappler::mem_pool::to_string::toStringStream<typename>(mem_pool::StringStream&,T)

## BRIEF

Реализация функции преобразования в строку для интерфейса пулов памяти

## CONTENT

Реализация функции преобразования в строку для интерфейса пулов памяти

Параметры шаблона:
* typename T

Параметры:
* mem_pool::StringStream&
* T


# ::stappler::mem_pool::to_string::toStringStream<typename,typename>(mem_pool::StringStream&,T,Args &&...)

## BRIEF

Реализация функции преобразования в строку для интерфейса пулов памяти

## CONTENT

Реализация функции преобразования в строку для интерфейса пулов памяти

Параметры шаблона:
* typename T
* typename Args

Параметры:
* mem_pool::StringStream&
* T
* Args &&...


# ::stappler::mem_pool::to_string::toString<typename,typename>(T,Args &&...)

## BRIEF

Реализация функции преобразования в строку для интерфейса пулов памяти

## CONTENT

Реализация функции преобразования в строку для интерфейса пулов памяти

Параметры шаблона:
* typename T
* typename Args

Параметры:
* T
* Args &&...

Возвращает:
* mem_pool::String

# ::stappler::mem_std::String

## BRIEF

Псевдоним типа строки для стандартного интерфейса памяти

## CONTENT

Псевдоним типа строки для стандартного интерфейса памяти


# ::stappler::mem_std::WideString

## BRIEF

Псевдоним типа широкой строки для стандартного интерфейса памяти

## CONTENT

Псевдоним типа широкой строки для стандартного интерфейса памяти


# ::stappler::mem_std::StringStream

## BRIEF

Псевдоним строкового потока для стандартного интерфейса памяти

## CONTENT

Псевдоним строкового потока для стандартного интерфейса памяти


# ::stappler::mem_std::Interface

## BRIEF

Тип интерфейса памяти

## CONTENT

Тип интерфейса памяти


# ::stappler::mem_std::to_string::toString<typename>(T const&)

## BRIEF

Реализация функции преобразования в строку для стандартного интерфейса памяти

## CONTENT

Реализация функции преобразования в строку для стандартного интерфейса памяти

Параметры шаблона:
* typename T

Параметры:
* T const&

Возвращает:
* mem_std::String

# ::stappler::mem_std::to_string::toStringStream<typename>(mem_std::StringStream&,T)

## BRIEF

Реализация функции преобразования в строку для стандартного интерфейса памяти

## CONTENT

Реализация функции преобразования в строку для стандартного интерфейса памяти

Параметры шаблона:
* typename T

Параметры:
* mem_std::StringStream&
* T


# ::stappler::mem_std::to_string::toStringStream<typename,typename>(mem_std::StringStream&,T,Args &&...)

## BRIEF

Реализация функции преобразования в строку для стандартного интерфейса памяти

## CONTENT

Реализация функции преобразования в строку для стандартного интерфейса памяти

Параметры шаблона:
* typename T
* typename Args

Параметры:
* mem_std::StringStream&
* T
* Args &&...


# ::stappler::mem_std::to_string::toString<typename,typename>(T,Args &&...)

## BRIEF

Реализация функции преобразования в строку для стандартного интерфейса памяти

## CONTENT

Реализация функции преобразования в строку для стандартного интерфейса памяти

Параметры шаблона:
* typename T
* typename Args

Параметры:
* T
* Args &&...

Возвращает:
* mem_std::String

# ::stappler::base64::decode(stappler::CoderSource const&)

## BRIEF

Декодирует данные из Base64

## CONTENT

Декодирует данные из Base64

Параметры:
* stappler::CoderSource const&

Возвращает:
* typename memory::PoolInterface::BytesType

# ::stappler::base64::decode(stappler::CoderSource const&)

## BRIEF

Декодирует данные из Base64

## CONTENT

Декодирует данные из Base64

Параметры:
* stappler::CoderSource const&

Возвращает:
* typename memory::StandartInterface::BytesType