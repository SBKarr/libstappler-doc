Title: SPCharGroup.h


# STAPPLER_CORE_STRING_SPCHARMATCHING_H_

## BRIEF

Заголовок, обеспечиващий эффективное сравнение групп символов

## CONTENT

Заголовок, обеспечиващий эффективное сравнение групп символов. На текущий момент поддерживет только 8-битные и 16-битные символы

# SPCHARMATCHING_LOG

## BRIEF

Отладочный макрос, позволяющий при определении выводить отладочную информацию о работе алгоритмов

## CONTENT

Отладочный макрос, позволяющий при определении выводить отладочную информацию о работе алгоритмов

# ::stappler::CharGroupId

## BRIEF

Маска именованных групп символов

## CONTENT

Маска именованных групп символов

Значения:
* None
* PunctuationBasic - базовая пунктуация в ASCII
* Numbers - числа 0-9
* Latin - латинские буквы в ASCII
* Cyrillic - кириллические буквы в Unicode
* Currency - знаки валют в Unicode
* GreekBasic - базовый реческий в Unicode
* Math - математическиий блок в Unicode
* Arrows - стрелки в Unicode
* Fractionals - дробные значения в Unicode
* LatinSuppl1 - дополнения к латинице в Unicode
* PunctuationAdvanced - дополнения к пунктуации в Unicode
* GreekAdvanced - дополнения к греческому в Unicode
* WhiteSpace - пробельные символы (ASCII и Unicode), включая дополнительные разделители в Unicode
* Controls - управляющие символы в ASCII
* NonPrintable - непечатные символы в ASCII
* LatinLowercase - латинские символы нижнего регистра в ASCII
* LatinUppercase - латинские символы верхнего регистра в ASCII
* Alphanumeric - латинские символы и цифры в ASCII
* Hexadecimial - цифры и латинские символы A-F и a-f
* Base64 - символы, используемые в Base64 и Base64url
* BreakableWhiteSpace - пробельные символы, допускающие перенос строки (ASCII и Unicode)
* OpticalAlignmentSpecial - символы пунктуации, для которых необходимо дополниетльное оптическое выравнивание
* OpticalAlignmentBullet - маркеры списка, для которых необходимо дополниетльное оптическое выравнивание
* TextPunctuation расширенный набор пунктуации из ASCII

Наборы символов PunctuationBasic, Numbers, Latin, WhiteSpace, LatinLowercase, LatinUppercase, Alphanumeric, Hexadecimial, Base64 и  TextPunctuation для 8-битных символов ускорены с использованием кодовой таблицы.


# ::stappler::operator|(stappler::CharGroupId const&,stappler::CharGroupId const&)

## BRIEF

Операция логического ИЛИ для маски именованных групп символов

## CONTENT

Операция логического ИЛИ для маски именованных групп символов

Параметры:
* stappler::CharGroupId const&
* stappler::CharGroupId const&

Возвращает:
* stappler::CharGroupId

# ::stappler::operator&(stappler::CharGroupId const&,stappler::CharGroupId const&)

## BRIEF

Операция логического И для маски именованных групп символов

## CONTENT

Операция логического И для маски именованных групп символов

Параметры:
* stappler::CharGroupId const&
* stappler::CharGroupId const&

Возвращает:
* stappler::CharGroupId

# ::stappler::operator^(stappler::CharGroupId const&,stappler::CharGroupId const&)

## BRIEF

Операция логического исключающего ИЛИ для маски именованных групп символов

## CONTENT

Операция логического исключающего ИЛИ для маски именованных групп символов

Параметры:
* stappler::CharGroupId const&
* stappler::CharGroupId const&

Возвращает:
* stappler::CharGroupId

# ::stappler::operator|=(stappler::CharGroupId&,stappler::CharGroupId const&)

## BRIEF

Операция логического ИЛИ для маски именованных групп символов

## CONTENT

Операция логического ИЛИ для маски именованных групп символов

Параметры:
* stappler::CharGroupId&
* stappler::CharGroupId const&

Возвращает:
* stappler::CharGroupId&

# ::stappler::operator&=(stappler::CharGroupId&,stappler::CharGroupId const&)

## BRIEF

Операция логического И для маски именованных групп символов

## CONTENT

Операция логического И для маски именованных групп символов

Параметры:
* stappler::CharGroupId&
* stappler::CharGroupId const&

Возвращает:
* stappler::CharGroupId&

# ::stappler::operator^=(stappler::CharGroupId&,stappler::CharGroupId const&)

## BRIEF

Операция логического исключающего ИЛИ для маски именованных групп символов

## CONTENT

Операция логического исключающего ИЛИ для маски именованных групп символов

Параметры:
* stappler::CharGroupId&
* stappler::CharGroupId const&

Возвращает:
* stappler::CharGroupId&

# ::stappler::operator==(stappler::CharGroupId const&,std::underlying_type<CharGroupId>::type const&)

## BRIEF

Операция сравнения для маски именованных групп символов

## CONTENT

Операция сравнения для маски именованных групп символов

Параметры:
* stappler::CharGroupId const&
* std::underlying_type<CharGroupId>::type const&

Возвращает:
* bool

# ::stappler::operator==(std::underlying_type<CharGroupId>::type const&,stappler::CharGroupId const&)

## BRIEF

Операция сравнения для маски именованных групп символов

## CONTENT

Операция сравнения для маски именованных групп символов

Параметры:
* std::underlying_type<CharGroupId>::type const&
* stappler::CharGroupId const&

Возвращает:
* bool

# ::stappler::operator!=(stappler::CharGroupId const&,std::underlying_type<CharGroupId>::type const&)

## BRIEF

Операция сравнения для маски именованных групп символов

## CONTENT

Операция сравнения для маски именованных групп символов

Параметры:
* stappler::CharGroupId const&
* std::underlying_type<CharGroupId>::type const&

Возвращает:
* bool

# ::stappler::operator!=(std::underlying_type<CharGroupId>::type const&,stappler::CharGroupId const&)

## BRIEF

Операция сравнения для маски именованных групп символов

## CONTENT

Операция сравнения для маски именованных групп символов

Параметры:
* std::underlying_type<CharGroupId>::type const&
* stappler::CharGroupId const&

Возвращает:
* bool

# ::stappler::operator~(stappler::CharGroupId const&)

## BRIEF

Операция логическго отрицания для маски именованных групп символов

## CONTENT

Операция логическго отрицания для маски именованных групп символов

Параметры:
* stappler::CharGroupId const&

Возвращает:
* stappler::CharGroupId

# ::stappler::inCharGroup(stappler::CharGroupId,char16_t)

## BRIEF

Проверяет, относится ли символ к группе символов

## CONTENT

Проверяет, относится ли символ к группе символов. Не проверяет сразу несколько групп в одной маске.

Параметры:
* stappler::CharGroupId - группа символов
* char16_t - символ для проверки

Возвращает:
* bool - true если символ входит в группу

# ::stappler::inCharGroupMask(stappler::CharGroupId,char16_t)

## BRIEF

Проверяет, относится ли символ к группе символов

## CONTENT

Проверяет, относится ли символ к группе символов. Проверяет всю маску.

Параметры:
* stappler::CharGroupId - маска группы символов
* char16_t - символ для проверки

Возвращает:
* bool - true если символ входит в группу

# ::stappler::chars::isupper<typename>(CharType)

## BRIEF

Проверяет на принадлежность группе LatinUppercase

## CONTENT

Проверяет на принадлежность группе LatinUppercase, аналог isupper стандартной библиотеки для символов различного типа

Параметры шаблона:
* typename CharType - тип символа

Параметры:
* CharType - символ для проверки

Возвращает:
* bool - true если символ относится к группе LatinUppercase

# ::stappler::chars::islower<typename>(CharType)

## BRIEF

Проверяет на принадлежность группе LatinLowercase

## CONTENT

Проверяет на принадлежность группе LatinLowercase, аналог islower стандартной библиотеки для символов различного типа

Параметры шаблона:
* typename CharType - тип символа

Параметры:
* CharType - символ для проверки

Возвращает:
* bool - true если символ относится к группе LatinLowercase


# ::stappler::chars::isdigit<typename>(CharType)

## BRIEF

Проверяет на принадлежность группе Numbers

## CONTENT

Проверяет на принадлежность группе Numbers, аналог isdigit стандартной библиотеки для символов различного типа

Параметры шаблона:
* typename CharType - тип символа

Параметры:
* CharType - символ для проверки

Возвращает:
* bool - true если символ относится к группе Numbers


# ::stappler::chars::isxdigit<typename>(CharType)

## BRIEF

Проверяет на принадлежность группе Hexadecimial

## CONTENT

Проверяет на принадлежность группе Hexadecimial, аналог isxdigit стандартной библиотеки для символов различного типа

Параметры шаблона:
* typename CharType - тип символа

Параметры:
* CharType - символ для проверки

Возвращает:
* bool - true если символ относится к группе Hexadecimial


# ::stappler::chars::isspace<typename>(CharType)

## BRIEF

Проверяет на принадлежность группе WhiteSpace

## CONTENT

Проверяет на принадлежность группе WhiteSpace, аналог isspace стандартной библиотеки для символов различного типа

Параметры шаблона:
* typename CharType - тип символа

Параметры:
* CharType - символ для проверки

Возвращает:
* bool - true если символ относится к группе WhiteSpace


# ::stappler::chars::GroupId

## BRIEF

Синоним для CharGroupId

## CONTENT

Синоним для CharGroupId

# ::stappler::chars::UniChar

## BRIEF

Псевдогруппа, определяющая символы вне ASCII в юникоде

## CONTENT

Псевдогруппа, определяющая символы вне ASCII в юникоде

# ::stappler::chars::UniChar::match(char)

## BRIEF

Проверяет символ на принадлежность группе

## CONTENT

Проверяет символ на принадлежность группе

Параметры:
* char

Возвращает:
* bool - true если символ относится к группе

# ::stappler::chars::Chars<typename,CharType...>

## BRIEF

Шаблон, представляющий собой произвольный набор символов определённого типа

## CONTENT

Шаблон, представляющий собой произвольный набор символов определённого типа. Используется для быстрой проверки на принадлежность символов к группе или для перебора символов. Является примитивом для создания сложных групп символов.

Параметры шаблона:
* typename CharType - тип символа
* CharType Args - набор символов произвольной длины


# ::stappler::chars::Chars<typename,CharType...>::match(CharType)

## BRIEF

Проверяет символ на принадлежность к набору символов

## CONTENT

Проверяет символ на принадлежность к набору символов

Параметры:
* CharType - символ для проверки

Возвращает:
* bool - true если символ входит в набор символов


# ::stappler::chars::Chars<typename,CharType...>::foreach<typename>(Func const&)

## BRIEF

Обходит все символы в наборе

## CONTENT

Обходит все символы в наборе с помощью функтора

Параметры шаблона:
* typename Func - тип функтора для обхода, должен уметь вызываться с сигнатурой `void(CharType)`

Параметры:
* Func const& - объект функтора


# ::stappler::chars::Range<typename,CharType,CharType>

## BRIEF

Шаблон, представляющий последовательный диапазон символов определённого типа

## CONTENT

Шаблон, представляющий последовательный диапазон символов определённого типа. Используется для быстрой проверки на принадлежность символов к группе или для перебора символов. Является примитивом для создания сложных групп символов.

Параметры шаблона:
* typename CharType - тип символа
* CharType First - первый символ в диапазоне
* CharType Last - последний символ в диапазоне


# ::stappler::chars::Range<typename,CharType,CharType>::match(CharType)

## BRIEF

Проверяет символ на принадлежность к диапазону

## CONTENT

Проверяет символ на принадлежность к диапазону

Параметры:
* CharType - тип символа

Возвращает:
* bool - true если символ входит в набор символов


# ::stappler::chars::Range<typename,CharType,CharType>::foreach<typename>(Func const&)

## BRIEF

Обходит все символы в диапазоне

## CONTENT

Обходит все символы в диапазоне с помощью функтора

Параметры шаблона:
* typename Func - тип функтора для обхода, должен уметь вызываться с сигнатурой `void(CharType)`

Параметры:
* Func const& - объект функтора


# ::stappler::chars::Compose<typename,typename>

## BRIEF

Шаблон композиции нескольких диапазонов, наборов или других композиций символов

## CONTENT

Шаблон композиции нескольких диапазонов, наборов или других композиций символов. Объединяет другие примитивы обработки символов в единый примитив.

Параметры шаблона:
* typename CharType - тип символов
* typename Args... - другие примитивы, входящие в композицию


# ::stappler::chars::Compose<typename,typename>::match(CharType)

## BRIEF

Проверяет, входит ли символ в текущую композицию

## CONTENT

Проверяет, входит ли символ в текущую композицию. Последовательно обходит входящие в композицию примитивы, проверяя символ на принадлежность им.

Параметры:
* CharType - символ для проверки

Возвращает:
* bool - true если символ входит в композцию

# ::stappler::chars::Compose<typename,typename>::foreach<typename>(Func const&)

## BRIEF

Последовательно обходит все символы в композиции

## CONTENT

Последовательно обходит все символы в композиции с помощью функтора.

Параметры шаблона:
* typename Func - тип функтора для обхода, должен уметь вызываться с сигнатурой `void(CharType)`

Параметры:
* Func const& - объект функтора


# ::stappler::chars::CharGroup<char,GroupId::PunctuationBasic>::CharGroup<char,GroupId::PunctuationBasic>

## BRIEF

Реализация именованной группы символов

## CONTENT

Реализация именованной группы символов

Базовые классы:
* Compose<char,Range<char,'\x21','\x2F'>,Range<char,'\x3A','\x40'>,Range<char,'\x5B','\x7F'>> - композиция целевой группы


# ::stappler::chars::CharGroup<char,GroupId::PunctuationBasic>::match(char)

## BRIEF

Ускоренная функция проверки вхождения символа в группу

## CONTENT

Параметры:
* char - символ для проверки

Возвращает:
* bool - true если символ входит в группу

# ::stappler::chars::CharGroup<char,GroupId::Numbers>::CharGroup<char,GroupId::Numbers>

## BRIEF

Реализация именованной группы символов

## CONTENT

Реализация именованной группы символов

Базовые классы:
* Compose<char,Range<char,'0','9'>> - композиция целевой группы


# ::stappler::chars::CharGroup<char,GroupId::Numbers>::match(char)

## BRIEF

Ускоренная функция проверки вхождения символа в группу

## CONTENT

Ускоренная функция проверки вхождения символа в группу

Параметры:
* char - символ для проверки

Возвращает:
* bool - true если символ входит в группу

# ::stappler::chars::CharGroup<char,GroupId::Latin>::CharGroup<char,GroupId::Latin>

## BRIEF

Реализация именованной группы символов

## CONTENT

Реализация именованной группы символов

Базовые классы:
* Compose<char,Range<char,'A','Z'>,Range<char,'a','z'>> - композиция целевой группы


# ::stappler::chars::CharGroup<char,GroupId::Latin>::match(char)

## BRIEF

Ускоренная функция проверки вхождения символа в группу

## CONTENT

Ускоренная функция проверки вхождения символа в группу

Параметры:
* char - символ для проверки

Возвращает:
* bool - true если символ входит в группу


# ::stappler::chars::CharGroup<char,GroupId::WhiteSpace>::CharGroup<char,GroupId::WhiteSpace>

## BRIEF

Реализация именованной группы символов

## CONTENT

Реализация именованной группы символов

Базовые классы:
* Compose<char,Range<char,'\x09','\x0D'>,Chars<char,'\x20'>> - композиция целевой группы


# ::stappler::chars::CharGroup<char,GroupId::WhiteSpace>::match(char)

## BRIEF

Ускоренная функция проверки вхождения символа в группу

## CONTENT

Ускоренная функция проверки вхождения символа в группу

Параметры:
* char - символ для проверки

Возвращает:
* bool - true если символ входит в группу

# ::stappler::chars::CharGroup<char,GroupId::Controls>::CharGroup<char,GroupId::Controls>

## BRIEF

Реализация именованной группы символов

## CONTENT

Реализация именованной группы символов

Базовые классы:
* Compose<char,Range<char,'\x01','\x20'>> - композиция целевой группы


# ::stappler::chars::CharGroup<char,GroupId::NonPrintable>::CharGroup<char,GroupId::NonPrintable>

## BRIEF

Реализация именованной группы символов

## CONTENT

Реализация именованной группы символов

Базовые классы:
* Compose<char,Range<char,'\x01','\x20'>,Chars<char,'\x20'>> - композиция целевой группы


# ::stappler::chars::CharGroup<char,GroupId::LatinLowercase>::CharGroup<char,GroupId::LatinLowercase>

## BRIEF

Реализация именованной группы символов

## CONTENT

Реализация именованной группы символов

Базовые классы:
* Compose<char,Range<char,'a','z'>> - композиция целевой группы


# ::stappler::chars::CharGroup<char,GroupId::LatinLowercase>::match(char)

## BRIEF

Ускоренная функция проверки вхождения символа в группу

## CONTENT

Ускоренная функция проверки вхождения символа в группу

Параметры:
* char - символ для проверки

Возвращает:
* bool - true если символ входит в группу


# ::stappler::chars::CharGroup<char,GroupId::LatinUppercase>::CharGroup<char,GroupId::LatinUppercase>

## BRIEF

Реализация именованной группы символов

## CONTENT

Реализация именованной группы символов

Базовые классы:
* Compose<char,Range<char,'A','Z'>>


# ::stappler::chars::CharGroup<char,GroupId::LatinUppercase>::match(char)

## BRIEF

Ускоренная функция проверки вхождения символа в группу

## CONTENT

Ускоренная функция проверки вхождения символа в группу

Параметры:
* char - символ для проверки

Возвращает:
* bool - true если символ входит в группу


# ::stappler::chars::CharGroup<char,GroupId::Alphanumeric>::CharGroup<char,GroupId::Alphanumeric>

## BRIEF

Реализация именованной группы символов

## CONTENT

Реализация именованной группы символов

Базовые классы:
* Compose<char,Range<char,'0','9'>,Range<char,'A','Z'>,Range<char,'a','z'>>


# ::stappler::chars::CharGroup<char,GroupId::Alphanumeric>::match(char)

## BRIEF

Ускоренная функция проверки вхождения символа в группу

## CONTENT

Ускоренная функция проверки вхождения символа в группу

Параметры:
* char - символ для проверки

Возвращает:
* bool - true если символ входит в группу


# ::stappler::chars::CharGroup<char,GroupId::Hexadecimial>::CharGroup<char,GroupId::Hexadecimial>

## BRIEF

Реализация именованной группы символов

## CONTENT

Реализация именованной группы символов

Базовые классы:
* Compose<char,Range<char,'0','9'>,Range<char,'A','F'>,Range<char,'a','f'>>


# ::stappler::chars::CharGroup<char,GroupId::Hexadecimial>::match(char)

## BRIEF

Ускоренная функция проверки вхождения символа в группу

## CONTENT

Ускоренная функция проверки вхождения символа в группу

Параметры:
* char - символ для проверки

Возвращает:
* bool - true если символ входит в группу


# ::stappler::chars::CharGroup<char,GroupId::Base64>::CharGroup<char,GroupId::Base64>

## BRIEF

Реализация именованной группы символов

## CONTENT

Реализация именованной группы символов

Базовые классы:
* Compose<char,Range<char,'0','9'>,Range<char,'A','Z'>,Range<char,'a','z'>,Chars<char,'=','/','+','_','-'>>


# ::stappler::chars::CharGroup<char,GroupId::Base64>::match(char)

## BRIEF

Ускоренная функция проверки вхождения символа в группу

## CONTENT

Ускоренная функция проверки вхождения символа в группу

Параметры:
* char - символ для проверки

Возвращает:
* bool - true если символ входит в группу


# ::stappler::chars::CharGroup<char,GroupId::TextPunctuation>::CharGroup<char,GroupId::TextPunctuation>

## BRIEF

Реализация именованной группы символов

## CONTENT

Реализация именованной группы символов

Базовые классы:
* Compose<char,Chars<char,'=','/','(',')','.',',','-','\'','"',':',';','?','!','@','#','$','%','^','*','\\','_','+','[',']'>>


# ::stappler::chars::CharGroup<char,GroupId::TextPunctuation>::match(char)

## BRIEF

Ускоренная функция проверки вхождения символа в группу

## CONTENT

Ускоренная функция проверки вхождения символа в группу

Параметры:
* char - символ для проверки

Возвращает:
* bool - true если символ входит в группу


# ::stappler::chars::CharGroup<char16_t,GroupId::PunctuationBasic>::CharGroup<char16_t,GroupId::PunctuationBasic>

## BRIEF

Реализация именованной группы символов

## CONTENT

Реализация именованной группы символов

Базовые классы:
* Compose<char16_t,Range<char16_t,u'\u0021',u'\u002F'>,Range<char16_t,u'\u003A',u'\u0040'>,Range<char16_t,u'\u005B',u'\u0060'>,Range<char16_t,u'\u007B',u'\u007E'>,Range<char16_t,u'\u00A1',u'\u00BF'>,Chars<char16_t,u'\u00AD',u'\u2013',u'\u2014',u'\u2019',u'\u201c',u'\u201d',u'\u2116'>>


# ::stappler::chars::CharGroup<char16_t,GroupId::Numbers>::CharGroup<char16_t,GroupId::Numbers>

## BRIEF

Реализация именованной группы символов

## CONTENT

Реализация именованной группы символов

Базовые классы:
* Compose<char16_t,Range<char16_t,u'0',u'9'>>


# ::stappler::chars::CharGroup<char16_t,GroupId::Latin>::CharGroup<char16_t,GroupId::Latin>

## BRIEF

Реализация именованной группы символов

## CONTENT

Реализация именованной группы символов

Базовые классы:
* Compose<char16_t,Range<char16_t,u'A',u'Z'>,Range<char16_t,u'a',u'z'>>


# ::stappler::chars::CharGroup<char16_t,GroupId::Cyrillic>::CharGroup<char16_t,GroupId::Cyrillic>

## BRIEF

Реализация именованной группы символов

## CONTENT

Реализация именованной группы символов

Базовые классы:
* Compose<char16_t,Range<char16_t,u'А',u'Я'>,Range<char16_t,u'а',u'я'>,Chars<char16_t,u'Ё',u'ё'>>


# ::stappler::chars::CharGroup<char16_t,GroupId::Currency>::CharGroup<char16_t,GroupId::Currency>

## BRIEF

Реализация именованной группы символов

## CONTENT

Реализация именованной группы символов

Базовые классы:
* Compose<char16_t,Range<char16_t,u'\u20A0',u'\u20BE'>>


# ::stappler::chars::CharGroup<char16_t,GroupId::GreekBasic>::CharGroup<char16_t,GroupId::GreekBasic>

## BRIEF

Реализация именованной группы символов

## CONTENT

Реализация именованной группы символов

Базовые классы:
* Compose<char16_t,Range<char16_t,u'\u0391',u'\u03AB'>,Range<char16_t,u'\u03B1',u'\u03CB'>>


# ::stappler::chars::CharGroup<char16_t,GroupId::Math>::CharGroup<char16_t,GroupId::Math>

## BRIEF

Реализация именованной группы символов

## CONTENT

Реализация именованной группы символов

Базовые классы:
* Compose<char16_t,Range<char16_t,u'\u2200',u'\u22FF'>>


# ::stappler::chars::CharGroup<char16_t,GroupId::Arrows>::CharGroup<char16_t,GroupId::Arrows>

## BRIEF

Реализация именованной группы символов

## CONTENT

Реализация именованной группы символов

Базовые классы:
* Compose<char16_t,Range<char16_t,u'\u2190',u'\u21FF'>>


# ::stappler::chars::CharGroup<char16_t,GroupId::Fractionals>::CharGroup<char16_t,GroupId::Fractionals>

## BRIEF

Реализация именованной группы символов

## CONTENT

Реализация именованной группы символов

Базовые классы:
* Compose<char16_t,Range<char16_t,u'\u2150',u'\u215F'>>


# ::stappler::chars::CharGroup<char16_t,GroupId::LatinSuppl1>::CharGroup<char16_t,GroupId::LatinSuppl1>

## BRIEF

Реализация именованной группы символов

## CONTENT

Реализация именованной группы символов

Базовые классы:
* Compose<char16_t,Range<char16_t,u'\u00C0',u'\u00FF'>>


# ::stappler::chars::CharGroup<char16_t,GroupId::PunctuationAdvanced>::CharGroup<char16_t,GroupId::PunctuationAdvanced>

## BRIEF

Реализация именованной группы символов

## CONTENT

Реализация именованной группы символов

Базовые классы:
* Compose<char16_t,Range<char16_t,u'\u0021',u'\u002F'>,Range<char16_t,u'\u003A',u'\u0040'>,Range<char16_t,u'\u005B',u'\u0060'>,Range<char16_t,u'\u007B',u'\u007F'>,Range<char16_t,u'\u00A1',u'\u00BF'>,Range<char16_t,u'\u2010',u'\u201F'>,Range<char16_t,u'\u2024',u'\u2027'>,Range<char16_t,u'\u2030',u'\u203D'>,Chars<char16_t,u'\u2013',u'\u2014',u'\u2019',u'\u201c',u'\u201d',u'\u2116'>>


# ::stappler::chars::CharGroup<char16_t,GroupId::GreekAdvanced>::CharGroup<char16_t,GroupId::GreekAdvanced>

## BRIEF

Реализация именованной группы символов

## CONTENT

Реализация именованной группы символов

Базовые классы:
* Compose<char16_t,Range<char16_t,u'\u0391',u'\u03AB'>,Range<char16_t,u'\u03B1',u'\u03CB'>,Range<char16_t,u'\u0370',u'\u0377'>,Range<char16_t,u'\u037A',u'\u037F'>,Range<char16_t,u'\u0384',u'\u038A'>,Range<char16_t,u'\u038E',u'\u0390'>,Range<char16_t,u'\u03AC',u'\u03B0'>,Range<char16_t,u'\u03CC',u'\u03FF'>,Chars<char16_t,u'\u038C'>>


# ::stappler::chars::CharGroup<char16_t,GroupId::WhiteSpace>::CharGroup<char16_t,GroupId::WhiteSpace>

## BRIEF

Реализация именованной группы символов

## CONTENT

Реализация именованной группы символов

Базовые классы:
* Compose<char16_t,Range<char16_t,u'\u0009',u'\u000D'>,Range<char16_t,u'\u2000',u'\u200D'>,Chars<char16_t,u'\u0020',u'\u0085',u'\u00A0',u'\u1680',u'\u2028',u'\u2029',u'\u202F',u'\u205F',u'\u2060',u'\u3000',u'\uFEFF',u'\uFFFF'>>


# ::stappler::chars::CharGroup<char16_t,GroupId::Controls>::CharGroup<char16_t,GroupId::Controls>

## BRIEF

Реализация именованной группы символов

## CONTENT

Реализация именованной группы символов

Базовые классы:
* Compose<char16_t,Range<char16_t,u'\u0001',u'\u0020'>>


# ::stappler::chars::CharGroup<char16_t,GroupId::NonPrintable>::CharGroup<char16_t,GroupId::NonPrintable>

## BRIEF

Реализация именованной группы символов

## CONTENT

Реализация именованной группы символов

Базовые классы:
* Compose<char16_t,Range<char16_t,u'\u0001',u'\u0020'>,Range<char16_t,u'\u2000',u'\u200D'>,Chars<char16_t,u'\u0020',u'\u0085',u'\u00A0',u'\u1680',u'\u2028',u'\u2029',u'\u202F',u'\u205F',u'\u2060',u'\u3000',u'\uFEFF',u'\uFFFF'>>


# ::stappler::chars::CharGroup<char16_t,GroupId::LatinLowercase>::CharGroup<char16_t,GroupId::LatinLowercase>

## BRIEF

Реализация именованной группы символов

## CONTENT

Реализация именованной группы символов

Базовые классы:
* Compose<char16_t,Range<char16_t,u'a',u'z'>>


# ::stappler::chars::CharGroup<char16_t,GroupId::LatinUppercase>::CharGroup<char16_t,GroupId::LatinUppercase>

## BRIEF

Реализация именованной группы символов

## CONTENT

Реализация именованной группы символов

Базовые классы:
* Compose<char16_t,Range<char16_t,u'A',u'Z'>>


# ::stappler::chars::CharGroup<char16_t,GroupId::Alphanumeric>::CharGroup<char16_t,GroupId::Alphanumeric>

## BRIEF

Реализация именованной группы символов

## CONTENT

Реализация именованной группы символов

Базовые классы:
* Compose<char16_t,Range<char16_t,u'0',u'9'>,Range<char16_t,u'A',u'Z'>,Range<char16_t,u'a',u'z'>>


# ::stappler::chars::CharGroup<char16_t,GroupId::Hexadecimial>::CharGroup<char16_t,GroupId::Hexadecimial>

## BRIEF

Реализация именованной группы символов

## CONTENT

Реализация именованной группы символов

Базовые классы:
* Compose<char16_t,Range<char16_t,u'0',u'9'>,Range<char16_t,u'A',u'F'>,Range<char16_t,u'a',u'f'>>


# ::stappler::chars::CharGroup<char16_t,GroupId::Base64>::CharGroup<char16_t,GroupId::Base64>

## BRIEF

Реализация именованной группы символов

## CONTENT

Реализация именованной группы символов

Базовые классы:
* Compose<char16_t,Range<char16_t,u'0',u'9'>,Range<char16_t,u'A',u'Z'>,Range<char16_t,u'a',u'z'>,Chars<char16_t,u'=',u'/',u'+',u'-',u'_'>>


# ::stappler::chars::CharGroup<char16_t,GroupId::BreakableWhiteSpace>::CharGroup<char16_t,GroupId::BreakableWhiteSpace>

## BRIEF

Реализация именованной группы символов

## CONTENT

Реализация именованной группы символов

Базовые классы:
* Compose<char16_t,Range<char16_t,u'\u0009',u'\u000D'>,Range<char16_t,u'\u2000',u'\u200D'>,Chars<char16_t,u'\u0020',u'\u0085',u'\u1680',u'\u2028',u'\u2029',u'\u205F',u'\u2060',u'\u3000',u'\uFEFF'>>


# ::stappler::chars::CharGroup<char16_t,GroupId::OpticalAlignmentSpecial>::CharGroup<char16_t,GroupId::OpticalAlignmentSpecial>

## BRIEF

Реализация именованной группы символов

## CONTENT

Реализация именованной группы символов

Базовые классы:
* Compose<char16_t,Chars<char16_t,u'(',u'[',u'{',u'"',u'\'',u'\\',u'<',u'«',u'„',u'.',u',',u'\u00AD',u'-'>>


# ::stappler::chars::CharGroup<char16_t,GroupId::OpticalAlignmentBullet>::CharGroup<char16_t,GroupId::OpticalAlignmentBullet>

## BRIEF

Реализация именованной группы символов

## CONTENT

Реализация именованной группы символов

Базовые классы:
* Compose<char16_t,Range<char16_t,u'0',u'9'>,Chars<char16_t,u'—',u'–',u'―',u'•',u'‣',u'⁃',u'-',u'*',u'◦',u'■',u'.',u',',u')'>>


# ::stappler::chars::CharGroup<char16_t,GroupId::TextPunctuation>::CharGroup<char16_t,GroupId::TextPunctuation>

## BRIEF

Реализация именованной группы символов

## CONTENT

Реализация именованной группы символов

Базовые классы:
* Compose<char16_t,Chars<char16_t,u'=',u'/',u'(',u')',u'.',u',',u'-',u'\'',u'"',u':',u';',u'?',u'!',u'@',u'#',u'$',u'%',u'^',u'*',u'\\',u'_',u'+',u'[',u']',u'«',u'»'>>


# ::stappler::chars::MatchTraits

## BRIEF

Вспомогательный класс для обработки композиций символов

## CONTENT

Вспомогательный класс для обработки композиций символов

# ::stappler::chars::MatchTraits::matchChar<typename,CharType...>(CharType)

## BRIEF

Проверяет, входит ли символ в набор символов

## CONTENT

Доступ: public

Проверяет, входит ли символ в набор символов

Параметры шаблона:
* typename CharType - тип символов
* CharType Args... - набор символов

Параметры:
* CharType - символ для проверки

Возвращает:
* bool - true если символ входит в набор

# ::stappler::chars::MatchTraits::matchPair<typename,CharType,CharType>(CharType)

## BRIEF

Проверяет, входит ли символ в диапазон

## CONTENT

Доступ: public

Проверяет, входит ли символ в диапазон

Параметры шаблона:
* typename CharType - тип символа
* CharType First - первый символ диапазона
* CharType Last - последний символ диапазона

Параметры:
* CharType - символ для проверки

Возвращает:
* bool - true если символ входит в диапазон


# ::stappler::chars::MatchTraits::matchCompose<typename,typename>(CharType)

## BRIEF

Проверяет, входит ли символ в композицию

## CONTENT

Доступ: public

Проверяет, входит ли символ в композицию

Параметры шаблона:
* typename CharType - тип символа
* typename Args... - входящие в композицию примитивы

Параметры:
* CharType - символ для проверки

Возвращает:
* bool - true если символ входит в композицию


# ::stappler::chars::MatchTraits::foreachChar<typename,typename,CharType...>(Func const&)

## BRIEF

Перебирает все символы в наборе

## CONTENT

Доступ: public

Перебирает все символы в наборе с помощью функтора

Параметры шаблона:
* typename CharType - тип символа
* typename Func - тип функтора, должен быть вызываем по сигнатуре `void(CharType)`
* CharType Args... - набор символов

Параметры:
* Func const& - функтор для перебора


# ::stappler::chars::MatchTraits::foreachPair<typename,typename,CharType,CharType>(Func const&)

## BRIEF

Перебирает все символы в диапазоне

## CONTENT

Доступ: public

Перебирает все символы в диапазоне

Параметры шаблона:
* typename CharType - тип символа
* typename Func - тип функтора, должен быть вызываем по сигнатуре `void(CharType)`
* CharType First - первый символ диапазона
* CharType Last - первый символ диапазона

Параметры:
* Func const& - функтор для перебора


# ::stappler::chars::MatchTraits::foreachCompose<typename,typename,typename>(Func const&)

## BRIEF

Перебирает все символы в композиции

## CONTENT

Доступ: public

Перебирает все символы в композиции

Параметры шаблона:
* typename CharType - тип символа
* typename Func - тип функтора, должен быть вызываем по сигнатуре `void(CharType)`
* typename Args... - примитивы в композиции

Параметры:
* Func const& - функтор для перебора


# ::stappler::chars::MatchTraits::_matchChar<typename,CharType>(CharType)

## BRIEF

Проверяет, соответствует ли символ в шаблоне переданному символу

## CONTENT

Доступ: private

Проверяет, соответствует ли символ в шаблоне переданному символу

Параметры шаблона:
* typename CharType - тип символа
* CharType T - шаблонный символ

Параметры:
* CharType - символ для проверки

Возвращает:
* bool - true если шаблонный символ и символ в аргументе совпадают

# ::stappler::chars::MatchTraits::_matchChar<typename,CharType,CharType,CharType...>(CharType)

## BRIEF

Проверяет, есть ли переданный символ среди символов в шаблоне

## CONTENT

Доступ: private

Проверяет, есть ли переданный символ среди символов в шаблоне, используется в рекурсивном раскрывании шаблона

Параметры шаблона:
* typename CharType - тип символа
* CharType T
* CharType T1
* CharType Args

Параметры:
* CharType - символ для проверки

Возвращает:
* bool - true если переданный символ есть среди символов в шаблоне

# ::stappler::chars::MatchTraits::_matchCompose<typename,typename>(CharType)

## BRIEF

Проверяет, есть ли переданный символ в композиции

## CONTENT

Доступ: private

Проверяет, есть ли переданный символ в композиции

Параметры шаблона:
* typename CharType - тип символа
* typename T - конкретный тип в композиции

Параметры:
* CharType - символ для проверки

Возвращает:
* bool - true если переданный символ есть в композиции


# ::stappler::chars::MatchTraits::_matchCompose<typename,typename,typename,typename>(CharType)

## BRIEF

Проверяет, есть ли переданный символ в композиции

## CONTENT

Доступ: private

Проверяет, есть ли переданный символ в композиции, используется в рекурсивном раскрывании шаблона

Параметры шаблона:
* typename CharType - тип символа
* typename T
* typename T1
* typename Args

Параметры:
* CharType - символ для проверки

Возвращает:
* bool - true если переданный символ есть в композиции

# ::stappler::chars::MatchTraits::_foreachChar<typename,typename,CharType>(Func const&)

## BRIEF

Вызывает функтор с текущим символом из шаблона

## CONTENT

Доступ: private

Вызывает функтор с текущим символом из шаблона

Параметры шаблона:
* typename CharType - тип символа
* typename Func - тип функтора, должен быть вызываем по сигнатуре `void(CharType)`
* CharType T - шаблонный символ

Параметры:
* Func const& - функтор для перебора


# ::stappler::chars::MatchTraits::_foreachChar<typename,typename,CharType,CharType,CharType...>(Func const&)

## BRIEF

Вызывает функтор с набором символов из шаблона

## CONTENT

Доступ: private

Вызывает функтор с набором символов из шаблона, используется в рекурсивном раскрывании шаблона

Параметры шаблона:
* typename CharType - тип символа
* typename Func - тип функтора, должен быть вызываем по сигнатуре `void(CharType)`
* CharType T
* CharType T1
* CharType Args

Параметры:
* Func const& - функтор для перебора


# ::stappler::chars::MatchTraits::_foreachCompose<typename,typename,typename>(Func const&)

## BRIEF

Вызывает функтор с набором символов из конкретного элемента композиции

## CONTENT

Доступ: private

Вызывает функтор с набором символов из конкретного элемента композиции

Параметры шаблона:
* typename CharType - тип символа
* typename Func - тип функтора, должен быть вызываем по сигнатуре `void(CharType)`
* typename T - конкретный элемент композиции

Параметры:
* Func const& - функтор для перебора


# ::stappler::chars::MatchTraits::_foreachCompose<typename,typename,typename,typename,typename>(Func const&)

## BRIEF

Вызывает функтор с набором символов из композиции

## CONTENT

Доступ: private

Вызывает функтор с набором символов из композиции

Параметры шаблона:
* typename CharType - тип символа
* typename Func - тип функтора, должен быть вызываем по сигнатуре `void(CharType)`
* typename T
* typename T1
* typename Args

Параметры:
* Func const& - функтор для перебора
