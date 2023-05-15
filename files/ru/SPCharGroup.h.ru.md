Title: SPCharGroup.h


# LIBSTAPPLER_COMMON_STRING_SPCHARMATCHING_H_

## BRIEF

## CONTENT


# 

## BRIEF

## CONTENT


# ::stappler::CharGroupId

## BRIEF

## CONTENT

Значения:
* None
* PunctuationBasic
* Numbers
* Latin
* Cyrillic
* Currency
* GreekBasic
* Math
* Arrows
* Fractionals
* LatinSuppl1
* PunctuationAdvanced
* GreekAdvanced
* WhiteSpace
* Controls
* NonPrintable
* LatinLowercase
* LatinUppercase
* Alphanumeric
* Hexadecimial
* Base64
* BreakableWhiteSpace
* OpticalAlignmentSpecial
* OpticalAlignmentBullet
* TextPunctuation


# ::stappler::operator|(stappler::CharGroupId const&,stappler::CharGroupId const&)

## BRIEF

## CONTENT

Параметры:
* stappler::CharGroupId const&
* stappler::CharGroupId const&

Возвращает:
* stappler::CharGroupId

# ::stappler::operator&(stappler::CharGroupId const&,stappler::CharGroupId const&)

## BRIEF

## CONTENT

Параметры:
* stappler::CharGroupId const&
* stappler::CharGroupId const&

Возвращает:
* stappler::CharGroupId

# ::stappler::operator^(stappler::CharGroupId const&,stappler::CharGroupId const&)

## BRIEF

## CONTENT

Параметры:
* stappler::CharGroupId const&
* stappler::CharGroupId const&

Возвращает:
* stappler::CharGroupId

# ::stappler::operator|=(stappler::CharGroupId&,stappler::CharGroupId const&)

## BRIEF

## CONTENT

Параметры:
* stappler::CharGroupId&
* stappler::CharGroupId const&

Возвращает:
* stappler::CharGroupId&

# ::stappler::operator&=(stappler::CharGroupId&,stappler::CharGroupId const&)

## BRIEF

## CONTENT

Параметры:
* stappler::CharGroupId&
* stappler::CharGroupId const&

Возвращает:
* stappler::CharGroupId&

# ::stappler::operator^=(stappler::CharGroupId&,stappler::CharGroupId const&)

## BRIEF

## CONTENT

Параметры:
* stappler::CharGroupId&
* stappler::CharGroupId const&

Возвращает:
* stappler::CharGroupId&

# ::stappler::operator==(stappler::CharGroupId const&,std::underlying_type<CharGroupId>::type const&)

## BRIEF

## CONTENT

Параметры:
* stappler::CharGroupId const&
* std::underlying_type<CharGroupId>::type const&

Возвращает:
* bool

# ::stappler::operator==(std::underlying_type<CharGroupId>::type const&,stappler::CharGroupId const&)

## BRIEF

## CONTENT

Параметры:
* std::underlying_type<CharGroupId>::type const&
* stappler::CharGroupId const&

Возвращает:
* bool

# ::stappler::operator!=(stappler::CharGroupId const&,std::underlying_type<CharGroupId>::type const&)

## BRIEF

## CONTENT

Параметры:
* stappler::CharGroupId const&
* std::underlying_type<CharGroupId>::type const&

Возвращает:
* bool

# ::stappler::operator!=(std::underlying_type<CharGroupId>::type const&,stappler::CharGroupId const&)

## BRIEF

## CONTENT

Параметры:
* std::underlying_type<CharGroupId>::type const&
* stappler::CharGroupId const&

Возвращает:
* bool

# ::stappler::operator~(stappler::CharGroupId const&)

## BRIEF

## CONTENT

Параметры:
* stappler::CharGroupId const&

Возвращает:
* stappler::CharGroupId

# ::stappler::inCharGroup(stappler::CharGroupId,char16_t)

## BRIEF

## CONTENT

Параметры:
* stappler::CharGroupId
* char16_t

Возвращает:
* bool

# ::stappler::inCharGroupMask(stappler::CharGroupId,char16_t)

## BRIEF

## CONTENT

Параметры:
* stappler::CharGroupId
* char16_t

Возвращает:
* bool

# ::stappler::chars::isupper<typename>(CharType)

## BRIEF

## CONTENT

Параметры шаблона:
* typename CharType

Параметры:
* CharType

Возвращает:
* bool

# ::stappler::chars::islower<typename>(CharType)

## BRIEF

## CONTENT

Параметры шаблона:
* typename CharType

Параметры:
* CharType

Возвращает:
* bool

# ::stappler::chars::isdigit<typename>(CharType)

## BRIEF

## CONTENT

Параметры шаблона:
* typename CharType

Параметры:
* CharType

Возвращает:
* bool

# ::stappler::chars::isxdigit<typename>(CharType)

## BRIEF

## CONTENT

Параметры шаблона:
* typename CharType

Параметры:
* CharType

Возвращает:
* bool

# ::stappler::chars::isspace<typename>(CharType)

## BRIEF

## CONTENT

Параметры шаблона:
* typename CharType

Параметры:
* CharType

Возвращает:
* bool

# ::stappler::chars::GroupId

## BRIEF

## CONTENT


# ::stappler::chars::UniChar

## BRIEF

## CONTENT


# ::stappler::chars::UniChar::match(char)

## BRIEF

## CONTENT

Параметры:
* char

Возвращает:
* bool

# ::stappler::chars::Chars<typename,CharType...>

## BRIEF

## CONTENT

Параметры шаблона:
* typename CharType
* CharType Args


# ::stappler::chars::Chars<typename,CharType...>::match(CharType)

## BRIEF

## CONTENT

Параметры:
* CharType

Возвращает:
* bool

# ::stappler::chars::Chars<typename,CharType...>::foreach<typename>(Func const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Func

Параметры:
* Func const&


# ::stappler::chars::Range<typename,CharType,CharType>

## BRIEF

## CONTENT

Параметры шаблона:
* typename CharType
* CharType First
* CharType Last


# ::stappler::chars::Range<typename,CharType,CharType>::match(CharType)

## BRIEF

## CONTENT

Параметры:
* CharType

Возвращает:
* bool

# ::stappler::chars::Range<typename,CharType,CharType>::foreach<typename>(Func const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Func

Параметры:
* Func const&


# ::stappler::chars::Compose<typename,typename>

## BRIEF

## CONTENT

Параметры шаблона:
* typename CharType
* typename Args


# ::stappler::chars::Compose<typename,typename>::match(CharType)

## BRIEF

## CONTENT

Параметры:
* CharType

Возвращает:
* bool

# ::stappler::chars::Compose<typename,typename>::foreach<typename>(Func const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Func

Параметры:
* Func const&


# ::stappler::chars::CharGroup<char,GroupId::PunctuationBasic>::CharGroup<char,GroupId::PunctuationBasic>

## BRIEF

## CONTENT

Базовые классы:
* Compose<char,Range<char,'\x21','\x2F'>,Range<char,'\x3A','\x40'>,Range<char,'\x5B','\x7F'>>


# ::stappler::chars::CharGroup<char,GroupId::PunctuationBasic>::match(char)

## BRIEF

## CONTENT

Параметры:
* char

Возвращает:
* bool

# ::stappler::chars::CharGroup<char,GroupId::Numbers>::CharGroup<char,GroupId::Numbers>

## BRIEF

## CONTENT

Базовые классы:
* Compose<char,Range<char,'0','9'>>


# ::stappler::chars::CharGroup<char,GroupId::Numbers>::match(char)

## BRIEF

## CONTENT

Параметры:
* char

Возвращает:
* bool

# ::stappler::chars::CharGroup<char,GroupId::Latin>::CharGroup<char,GroupId::Latin>

## BRIEF

## CONTENT

Базовые классы:
* Compose<char,Range<char,'A','Z'>,Range<char,'a','z'>>


# ::stappler::chars::CharGroup<char,GroupId::Latin>::match(char)

## BRIEF

## CONTENT

Параметры:
* char

Возвращает:
* bool

# ::stappler::chars::CharGroup<char,GroupId::WhiteSpace>::CharGroup<char,GroupId::WhiteSpace>

## BRIEF

## CONTENT

Базовые классы:
* Compose<char,Range<char,'\x09','\x0D'>,Chars<char,'\x20'>>


# ::stappler::chars::CharGroup<char,GroupId::WhiteSpace>::match(char)

## BRIEF

## CONTENT

Параметры:
* char

Возвращает:
* bool

# ::stappler::chars::CharGroup<char,GroupId::Controls>::CharGroup<char,GroupId::Controls>

## BRIEF

## CONTENT

Базовые классы:
* Compose<char,Range<char,'\x01','\x20'>>


# ::stappler::chars::CharGroup<char,GroupId::NonPrintable>::CharGroup<char,GroupId::NonPrintable>

## BRIEF

## CONTENT

Базовые классы:
* Compose<char,Range<char,'\x01','\x20'>,Chars<char,'\x20'>>


# ::stappler::chars::CharGroup<char,GroupId::LatinLowercase>::CharGroup<char,GroupId::LatinLowercase>

## BRIEF

## CONTENT

Базовые классы:
* Compose<char,Range<char,'a','z'>>


# ::stappler::chars::CharGroup<char,GroupId::LatinLowercase>::match(char)

## BRIEF

## CONTENT

Параметры:
* char

Возвращает:
* bool

# ::stappler::chars::CharGroup<char,GroupId::LatinUppercase>::CharGroup<char,GroupId::LatinUppercase>

## BRIEF

## CONTENT

Базовые классы:
* Compose<char,Range<char,'A','Z'>>


# ::stappler::chars::CharGroup<char,GroupId::LatinUppercase>::match(char)

## BRIEF

## CONTENT

Параметры:
* char

Возвращает:
* bool

# ::stappler::chars::CharGroup<char,GroupId::Alphanumeric>::CharGroup<char,GroupId::Alphanumeric>

## BRIEF

## CONTENT

Базовые классы:
* Compose<char,Range<char,'0','9'>,Range<char,'A','Z'>,Range<char,'a','z'>>


# ::stappler::chars::CharGroup<char,GroupId::Alphanumeric>::match(char)

## BRIEF

## CONTENT

Параметры:
* char

Возвращает:
* bool

# ::stappler::chars::CharGroup<char,GroupId::Hexadecimial>::CharGroup<char,GroupId::Hexadecimial>

## BRIEF

## CONTENT

Базовые классы:
* Compose<char,Range<char,'0','9'>,Range<char,'A','F'>,Range<char,'a','f'>>


# ::stappler::chars::CharGroup<char,GroupId::Hexadecimial>::match(char)

## BRIEF

## CONTENT

Параметры:
* char

Возвращает:
* bool

# ::stappler::chars::CharGroup<char,GroupId::Base64>::CharGroup<char,GroupId::Base64>

## BRIEF

## CONTENT

Базовые классы:
* Compose<char,Range<char,'0','9'>,Range<char,'A','Z'>,Range<char,'a','z'>,Chars<char,'=','/','+','_','-'>>


# ::stappler::chars::CharGroup<char,GroupId::Base64>::match(char)

## BRIEF

## CONTENT

Параметры:
* char

Возвращает:
* bool

# ::stappler::chars::CharGroup<char,GroupId::TextPunctuation>::CharGroup<char,GroupId::TextPunctuation>

## BRIEF

## CONTENT

Базовые классы:
* Compose<char,Chars<char,'=','/','(',')','.',',','-','\'','"',':',';','?','!','@','#','$','%','^','*','\\','_','+','[',']'>>


# ::stappler::chars::CharGroup<char,GroupId::TextPunctuation>::match(char)

## BRIEF

## CONTENT

Параметры:
* char

Возвращает:
* bool

# ::stappler::chars::CharGroup<char16_t,GroupId::PunctuationBasic>::CharGroup<char16_t,GroupId::PunctuationBasic>

## BRIEF

## CONTENT

Базовые классы:
* Compose<char16_t,Range<char16_t,u'\u0021',u'\u002F'>,Range<char16_t,u'\u003A',u'\u0040'>,Range<char16_t,u'\u005B',u'\u0060'>,Range<char16_t,u'\u007B',u'\u007E'>,Range<char16_t,u'\u00A1',u'\u00BF'>,Chars<char16_t,u'\u00AD',u'\u2013',u'\u2014',u'\u2019',u'\u201c',u'\u201d',u'\u2116'>>


# ::stappler::chars::CharGroup<char16_t,GroupId::Numbers>::CharGroup<char16_t,GroupId::Numbers>

## BRIEF

## CONTENT

Базовые классы:
* Compose<char16_t,Range<char16_t,u'0',u'9'>>


# ::stappler::chars::CharGroup<char16_t,GroupId::Latin>::CharGroup<char16_t,GroupId::Latin>

## BRIEF

## CONTENT

Базовые классы:
* Compose<char16_t,Range<char16_t,u'A',u'Z'>,Range<char16_t,u'a',u'z'>>


# ::stappler::chars::CharGroup<char16_t,GroupId::Cyrillic>::CharGroup<char16_t,GroupId::Cyrillic>

## BRIEF

## CONTENT

Базовые классы:
* Compose<char16_t,Range<char16_t,u'А',u'Я'>,Range<char16_t,u'а',u'я'>,Chars<char16_t,u'Ё',u'ё'>>


# ::stappler::chars::CharGroup<char16_t,GroupId::Currency>::CharGroup<char16_t,GroupId::Currency>

## BRIEF

## CONTENT

Базовые классы:
* Compose<char16_t,Range<char16_t,u'\u20A0',u'\u20BE'>>


# ::stappler::chars::CharGroup<char16_t,GroupId::GreekBasic>::CharGroup<char16_t,GroupId::GreekBasic>

## BRIEF

## CONTENT

Базовые классы:
* Compose<char16_t,Range<char16_t,u'\u0391',u'\u03AB'>,Range<char16_t,u'\u03B1',u'\u03CB'>>


# ::stappler::chars::CharGroup<char16_t,GroupId::Math>::CharGroup<char16_t,GroupId::Math>

## BRIEF

## CONTENT

Базовые классы:
* Compose<char16_t,Range<char16_t,u'\u2200',u'\u22FF'>>


# ::stappler::chars::CharGroup<char16_t,GroupId::Arrows>::CharGroup<char16_t,GroupId::Arrows>

## BRIEF

## CONTENT

Базовые классы:
* Compose<char16_t,Range<char16_t,u'\u2190',u'\u21FF'>>


# ::stappler::chars::CharGroup<char16_t,GroupId::Fractionals>::CharGroup<char16_t,GroupId::Fractionals>

## BRIEF

## CONTENT

Базовые классы:
* Compose<char16_t,Range<char16_t,u'\u2150',u'\u215F'>>


# ::stappler::chars::CharGroup<char16_t,GroupId::LatinSuppl1>::CharGroup<char16_t,GroupId::LatinSuppl1>

## BRIEF

## CONTENT

Базовые классы:
* Compose<char16_t,Range<char16_t,u'\u00C0',u'\u00FF'>>


# ::stappler::chars::CharGroup<char16_t,GroupId::PunctuationAdvanced>::CharGroup<char16_t,GroupId::PunctuationAdvanced>

## BRIEF

## CONTENT

Базовые классы:
* Compose<char16_t,Range<char16_t,u'\u0021',u'\u002F'>,Range<char16_t,u'\u003A',u'\u0040'>,Range<char16_t,u'\u005B',u'\u0060'>,Range<char16_t,u'\u007B',u'\u007F'>,Range<char16_t,u'\u00A1',u'\u00BF'>,Range<char16_t,u'\u2010',u'\u201F'>,Range<char16_t,u'\u2024',u'\u2027'>,Range<char16_t,u'\u2030',u'\u203D'>,Chars<char16_t,u'\u2013',u'\u2014',u'\u2019',u'\u201c',u'\u201d',u'\u2116'>>


# ::stappler::chars::CharGroup<char16_t,GroupId::GreekAdvanced>::CharGroup<char16_t,GroupId::GreekAdvanced>

## BRIEF

## CONTENT

Базовые классы:
* Compose<char16_t,Range<char16_t,u'\u0391',u'\u03AB'>,Range<char16_t,u'\u03B1',u'\u03CB'>,Range<char16_t,u'\u0370',u'\u0377'>,Range<char16_t,u'\u037A',u'\u037F'>,Range<char16_t,u'\u0384',u'\u038A'>,Range<char16_t,u'\u038E',u'\u0390'>,Range<char16_t,u'\u03AC',u'\u03B0'>,Range<char16_t,u'\u03CC',u'\u03FF'>,Chars<char16_t,u'\u038C'>>


# ::stappler::chars::CharGroup<char16_t,GroupId::WhiteSpace>::CharGroup<char16_t,GroupId::WhiteSpace>

## BRIEF

## CONTENT

Базовые классы:
* Compose<char16_t,Range<char16_t,u'\u0009',u'\u000D'>,Range<char16_t,u'\u2000',u'\u200D'>,Chars<char16_t,u'\u0020',u'\u0085',u'\u00A0',u'\u1680',u'\u2028',u'\u2029',u'\u202F',u'\u205F',u'\u2060',u'\u3000',u'\uFEFF',u'\uFFFF'>>


# ::stappler::chars::CharGroup<char16_t,GroupId::Controls>::CharGroup<char16_t,GroupId::Controls>

## BRIEF

## CONTENT

Базовые классы:
* Compose<char16_t,Range<char16_t,u'\u0001',u'\u0020'>>


# ::stappler::chars::CharGroup<char16_t,GroupId::NonPrintable>::CharGroup<char16_t,GroupId::NonPrintable>

## BRIEF

## CONTENT

Базовые классы:
* Compose<char16_t,Range<char16_t,u'\u0001',u'\u0020'>,Range<char16_t,u'\u2000',u'\u200D'>,Chars<char16_t,u'\u0020',u'\u0085',u'\u00A0',u'\u1680',u'\u2028',u'\u2029',u'\u202F',u'\u205F',u'\u2060',u'\u3000',u'\uFEFF',u'\uFFFF'>>


# ::stappler::chars::CharGroup<char16_t,GroupId::LatinLowercase>::CharGroup<char16_t,GroupId::LatinLowercase>

## BRIEF

## CONTENT

Базовые классы:
* Compose<char16_t,Range<char16_t,u'a',u'z'>>


# ::stappler::chars::CharGroup<char16_t,GroupId::LatinUppercase>::CharGroup<char16_t,GroupId::LatinUppercase>

## BRIEF

## CONTENT

Базовые классы:
* Compose<char16_t,Range<char16_t,u'A',u'Z'>>


# ::stappler::chars::CharGroup<char16_t,GroupId::Alphanumeric>::CharGroup<char16_t,GroupId::Alphanumeric>

## BRIEF

## CONTENT

Базовые классы:
* Compose<char16_t,Range<char16_t,u'0',u'9'>,Range<char16_t,u'A',u'Z'>,Range<char16_t,u'a',u'z'>>


# ::stappler::chars::CharGroup<char16_t,GroupId::Hexadecimial>::CharGroup<char16_t,GroupId::Hexadecimial>

## BRIEF

## CONTENT

Базовые классы:
* Compose<char16_t,Range<char16_t,u'0',u'9'>,Range<char16_t,u'A',u'F'>,Range<char16_t,u'a',u'f'>>


# ::stappler::chars::CharGroup<char16_t,GroupId::Base64>::CharGroup<char16_t,GroupId::Base64>

## BRIEF

## CONTENT

Базовые классы:
* Compose<char16_t,Range<char16_t,u'0',u'9'>,Range<char16_t,u'A',u'Z'>,Range<char16_t,u'a',u'z'>,Chars<char16_t,u'=',u'/',u'+',u'-',u'_'>>


# ::stappler::chars::CharGroup<char16_t,GroupId::BreakableWhiteSpace>::CharGroup<char16_t,GroupId::BreakableWhiteSpace>

## BRIEF

## CONTENT

Базовые классы:
* Compose<char16_t,Range<char16_t,u'\u0009',u'\u000D'>,Range<char16_t,u'\u2000',u'\u200D'>,Chars<char16_t,u'\u0020',u'\u0085',u'\u1680',u'\u2028',u'\u2029',u'\u205F',u'\u2060',u'\u3000',u'\uFEFF'>>


# ::stappler::chars::CharGroup<char16_t,GroupId::OpticalAlignmentSpecial>::CharGroup<char16_t,GroupId::OpticalAlignmentSpecial>

## BRIEF

## CONTENT

Базовые классы:
* Compose<char16_t,Chars<char16_t,u'(',u'[',u'{',u'"',u'\'',u'\\',u'<',u'«',u'„',u'.',u',',u'\u00AD',u'-'>>


# ::stappler::chars::CharGroup<char16_t,GroupId::OpticalAlignmentBullet>::CharGroup<char16_t,GroupId::OpticalAlignmentBullet>

## BRIEF

## CONTENT

Базовые классы:
* Compose<char16_t,Range<char16_t,u'0',u'9'>,Chars<char16_t,u'—',u'–',u'―',u'•',u'‣',u'⁃',u'-',u'*',u'◦',u'■',u'.',u',',u')'>>


# ::stappler::chars::CharGroup<char16_t,GroupId::TextPunctuation>::CharGroup<char16_t,GroupId::TextPunctuation>

## BRIEF

## CONTENT

Базовые классы:
* Compose<char16_t,Chars<char16_t,u'=',u'/',u'(',u')',u'.',u',',u'-',u'\'',u'"',u':',u';',u'?',u'!',u'@',u'#',u'$',u'%',u'^',u'*',u'\\',u'_',u'+',u'[',u']',u'«',u'»'>>


# ::stappler::chars::MatchTraits

## BRIEF

## CONTENT


# ::stappler::chars::MatchTraits::matchChar<typename,CharType...>(CharType)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename CharType
* CharType Args

Параметры:
* CharType

Возвращает:
* bool

# ::stappler::chars::MatchTraits::matchPair<typename,CharType,CharType>(CharType)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename CharType
* CharType First
* CharType Last

Параметры:
* CharType

Возвращает:
* bool

# ::stappler::chars::MatchTraits::matchCompose<typename,typename>(CharType)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename CharType
* typename Args

Параметры:
* CharType

Возвращает:
* bool

# ::stappler::chars::MatchTraits::foreachChar<typename,typename,CharType...>(Func const&)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename CharType
* typename Func
* CharType Args

Параметры:
* Func const&


# ::stappler::chars::MatchTraits::foreachPair<typename,typename,CharType,CharType>(Func const&)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename CharType
* typename Func
* CharType First
* CharType Last

Параметры:
* Func const&


# ::stappler::chars::MatchTraits::foreachCompose<typename,typename,typename>(Func const&)

## BRIEF

## CONTENT

Доступ: public

Параметры шаблона:
* typename CharType
* typename Func
* typename Args

Параметры:
* Func const&


# ::stappler::chars::MatchTraits::_matchChar<typename,CharType>(CharType)

## BRIEF

## CONTENT

Доступ: private

Параметры шаблона:
* typename CharType
* CharType T

Параметры:
* CharType

Возвращает:
* bool

# ::stappler::chars::MatchTraits::_matchChar<typename,CharType,CharType,CharType...>(CharType)

## BRIEF

## CONTENT

Доступ: private

Параметры шаблона:
* typename CharType
* CharType T
* CharType T1
* CharType Args

Параметры:
* CharType

Возвращает:
* bool

# ::stappler::chars::MatchTraits::_matchCompose<typename,typename>(CharType)

## BRIEF

## CONTENT

Доступ: private

Параметры шаблона:
* typename CharType
* typename T

Параметры:
* CharType

Возвращает:
* bool

# ::stappler::chars::MatchTraits::_matchCompose<typename,typename,typename,typename>(CharType)

## BRIEF

## CONTENT

Доступ: private

Параметры шаблона:
* typename CharType
* typename T
* typename T1
* typename Args

Параметры:
* CharType

Возвращает:
* bool

# ::stappler::chars::MatchTraits::_foreachChar<typename,typename,CharType>(Func const&)

## BRIEF

## CONTENT

Доступ: private

Параметры шаблона:
* typename CharType
* typename Func
* CharType T

Параметры:
* Func const&


# ::stappler::chars::MatchTraits::_foreachChar<typename,typename,CharType,CharType,CharType...>(Func const&)

## BRIEF

## CONTENT

Доступ: private

Параметры шаблона:
* typename CharType
* typename Func
* CharType T
* CharType T1
* CharType Args

Параметры:
* Func const&


# ::stappler::chars::MatchTraits::_foreachCompose<typename,typename,typename>(Func const&)

## BRIEF

## CONTENT

Доступ: private

Параметры шаблона:
* typename CharType
* typename Func
* typename T

Параметры:
* Func const&


# ::stappler::chars::MatchTraits::_foreachCompose<typename,typename,typename,typename,typename>(Func const&)

## BRIEF

## CONTENT

Доступ: private

Параметры шаблона:
* typename CharType
* typename Func
* typename T
* typename T1
* typename Args

Параметры:
* Func const&


# ::stappler::chars::Chars<typename,CharType...>::match(CharType)

## BRIEF

## CONTENT

Параметры:
* CharType

Возвращает:
* bool

# ::stappler::chars::Chars<typename,CharType...>::foreach<typename,typename,CharType...>(Func const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Func
* typename CharType
* CharType Args

Параметры:
* Func const&


# ::stappler::chars::Range<typename,CharType,CharType>::match(CharType)

## BRIEF

## CONTENT

Параметры:
* CharType

Возвращает:
* bool

# ::stappler::chars::Range<typename,CharType,CharType>::foreach<typename,typename,CharType,CharType>(Func const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Func
* typename CharType
* CharType First
* CharType Last

Параметры:
* Func const&


# ::stappler::chars::Compose<typename,typename>::match(CharType)

## BRIEF

## CONTENT

Параметры:
* CharType

Возвращает:
* bool

# ::stappler::chars::Compose<typename,typename>::foreach<typename,typename,typename>(Func const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Func
* typename CharType
* typename Args

Параметры:
* Func const&


# ::stappler::chars::MatchTraits::matchChar<typename,CharType...>(CharType)

## BRIEF

## CONTENT

Параметры шаблона:
* typename CharType
* CharType Args

Параметры:
* CharType

Возвращает:
* bool

# ::stappler::chars::MatchTraits::matchPair<typename,CharType,CharType>(CharType)

## BRIEF

## CONTENT

Параметры шаблона:
* typename CharType
* CharType First
* CharType Last

Параметры:
* CharType

Возвращает:
* bool

# ::stappler::chars::MatchTraits::matchCompose<typename,typename>(CharType)

## BRIEF

## CONTENT

Параметры шаблона:
* typename CharType
* typename Args

Параметры:
* CharType

Возвращает:
* bool

# ::stappler::chars::MatchTraits::foreachChar<typename,typename,CharType...>(Func const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename CharType
* typename Func
* CharType Args

Параметры:
* Func const&


# ::stappler::chars::MatchTraits::foreachPair<typename,typename,CharType,CharType>(Func const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename CharType
* typename Func
* CharType First
* CharType Last

Параметры:
* Func const&


# ::stappler::chars::MatchTraits::foreachCompose<typename,typename,typename>(Func const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename CharType
* typename Func
* typename Args

Параметры:
* Func const&


# ::stappler::chars::MatchTraits::_matchChar<typename,CharType>(CharType)

## BRIEF

## CONTENT

Параметры шаблона:
* typename CharType
* CharType C

Параметры:
* CharType

Возвращает:
* bool

# ::stappler::chars::MatchTraits::_matchChar<typename,CharType,CharType,CharType...>(CharType)

## BRIEF

## CONTENT

Параметры шаблона:
* typename CharType
* CharType T
* CharType T2
* CharType Args

Параметры:
* CharType

Возвращает:
* bool

# ::stappler::chars::MatchTraits::_matchCompose<typename,typename>(CharType)

## BRIEF

## CONTENT

Параметры шаблона:
* typename CharType
* typename C

Параметры:
* CharType

Возвращает:
* bool

# ::stappler::chars::MatchTraits::_matchCompose<typename,typename,typename,typename>(CharType)

## BRIEF

## CONTENT

Параметры шаблона:
* typename CharType
* typename T
* typename T1
* typename Args

Параметры:
* CharType

Возвращает:
* bool

# ::stappler::chars::MatchTraits::_foreachChar<typename,typename,CharType>(Func const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename CharType
* typename Func
* CharType T

Параметры:
* Func const&


# ::stappler::chars::MatchTraits::_foreachChar<typename,typename,CharType,CharType,CharType...>(Func const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename CharType
* typename Func
* CharType T
* CharType T1
* CharType Args

Параметры:
* Func const&


# ::stappler::chars::MatchTraits::_foreachCompose<typename,typename,typename>(Func const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename CharType
* typename Func
* typename T

Параметры:
* Func const&


# ::stappler::chars::MatchTraits::_foreachCompose<typename,typename,typename,typename,typename>(Func const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename CharType
* typename Func
* typename T
* typename T1
* typename Args

Параметры:
* Func const&


# ::stappler::chars::isupper<typename>(CharType)

## BRIEF

## CONTENT

Параметры шаблона:
* typename CharType

Параметры:
* CharType

Возвращает:
* bool

# ::stappler::chars::islower<typename>(CharType)

## BRIEF

## CONTENT

Параметры шаблона:
* typename CharType

Параметры:
* CharType

Возвращает:
* bool

# ::stappler::chars::isdigit<typename>(CharType)

## BRIEF

## CONTENT

Параметры шаблона:
* typename CharType

Параметры:
* CharType

Возвращает:
* bool

# ::stappler::chars::isxdigit<typename>(CharType)

## BRIEF

## CONTENT

Параметры шаблона:
* typename CharType

Параметры:
* CharType

Возвращает:
* bool

# ::stappler::chars::isspace<typename>(CharType)

## BRIEF

## CONTENT

Параметры шаблона:
* typename CharType

Параметры:
* CharType

Возвращает:
* bool