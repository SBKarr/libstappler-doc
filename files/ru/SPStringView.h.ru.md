Title: SPStringView.h


# STAPPLER_CORE_STRING_SPSTRINGVIEW_H_

## BRIEF

Заголовок типа строкового отображения

## CONTENT

Заголовок типа строкового отображения.

Строковое отображение (StringView), помимо стандартных функций, имеет так же функции для последовательного чтения и разбора строк. Функции фида `skip*` позволяют пропускать символы на основе маски, смещая строку вперёд. Функции вида `read*` позволяют прочитать символы на основе маски в отдельное отображение. Функции вида `trim*` позволяют обрезать символы с начала и конца строки на основе маски.

Для большей инфомрации по маскам см. `SPCharGroup.h`

Также, заголовок определяет возможность использовать функции обратного вызова (вида `Callback<void(StringView)>`) для вывода строк вместо потока. В определённых случаях такое использование вывода в поток значительно эффективнее. Многие функции `SPString.h` позволяют передавать в качестве потока произвольный аргумент для использования этой функции

# ::stappler::StringViewBase<typename>

## BRIEF

Базовый тип строкового отображения

## CONTENT

Базовый тип строкового отображения. Фукнции чтения этого типа работают с хранимым типом символов без учёта кодировки. Для работы с UTF-8, в частности, чтобы иметь возможность использовать маски с символами юникода (32-битными) для 8-битных строк, используйте StringViewUtf8

Параметры шаблона:
* typename _CharType - тип символа

Базовые классы:
* BytesReader<_CharType> - наследует функции базового байтового отображения


# ::stappler::StringViewBase<typename>::Self

## BRIEF

Тип себя

## CONTENT

Доступ: public

Тип себя

# ::stappler::StringViewBase<typename>::MatchCharType

## BRIEF

Тип символов для маски сопоставления

## CONTENT

Доступ: public

Тип символов для маски сопоставления


# ::stappler::StringViewBase<typename>::CharType

## BRIEF

Базовый тип символов

## CONTENT

Доступ: public

Базовый тип символов


# ::stappler::StringViewBase<typename>::value_type

## BRIEF

Тип символов для использования в стандартных алгоритмах

## CONTENT

Доступ: public

Тип символов для использования в стандартных алгоритмах


# ::stappler::StringViewBase<typename>::TraitsType

## BRIEF

Тип для доступа к стандартным символьным алгоритмам

## CONTENT

Доступ: public

Тип для доступа к стандартным символьным алгоритмам


# ::stappler::StringViewBase<typename>::PoolString

## BRIEF

Тип соотвествующей строки на основе пулов памяти

## CONTENT

Доступ: public

Тип соотвествующей строки на основе пулов памяти


# ::stappler::StringViewBase<typename>::StdString

## BRIEF

Тип соотвествующей стандартной строки

## CONTENT

Доступ: public

Тип соотвествующей стандартной строки


# ::stappler::StringViewBase<typename>::MatchChars<CharType...>

## BRIEF

Тип соотвествующего набора символов для маски

## CONTENT

Доступ: public

Тип соотвествующего набора символов для маски

Параметры шаблона:
* CharType Args


# ::stappler::StringViewBase<typename>::MatchRange<char,char>

## BRIEF

Тип соотвествующего диапазона символов для маски

## CONTENT

Доступ: public

Тип соотвествующего диапазона символов для маски

Параметры шаблона:
* char First
* char Last


# ::stappler::StringViewBase<typename>::MatchCharGroup<stappler::CharGroupId>

## BRIEF

Тип соотвествующей предустановленной группы символов для маски

## CONTENT

Доступ: public

Тип соотвествующей предустановленной группы символов для маски

Параметры шаблона:
* stappler::CharGroupId Group


# ::stappler::StringViewBase<typename>::Numbers

## BRIEF

Псевдоним для группы символов

## CONTENT

Доступ: public

Псевдоним для группы символов


# ::stappler::StringViewBase<typename>::Latin

## BRIEF

Псевдоним для группы символов

## CONTENT

Доступ: public

Псевдоним для группы символов


# ::stappler::StringViewBase<typename>::WhiteSpace

## BRIEF

Псевдоним для группы символов

## CONTENT

Доступ: public

Псевдоним для группы символов


# ::stappler::StringViewBase<typename>::LatinLowercase

## BRIEF

Псевдоним для группы символов

## CONTENT

Доступ: public

Псевдоним для группы символов


# ::stappler::StringViewBase<typename>::LatinUppercase

## BRIEF

Псевдоним для группы символов

## CONTENT

Доступ: public

Псевдоним для группы символов


# ::stappler::StringViewBase<typename>::Alphanumeric

## BRIEF

Псевдоним для группы символов

## CONTENT

Доступ: public

Псевдоним для группы символов


# ::stappler::StringViewBase<typename>::Hexadecimial

## BRIEF

Псевдоним для группы символов

## CONTENT

Доступ: public

Псевдоним для группы символов


# ::stappler::StringViewBase<typename>::Base64

## BRIEF

Псевдоним для группы символов

## CONTENT

Доступ: public

Псевдоним для группы символов


# ::stappler::StringViewBase<typename>::merge<typename,typename>(Args &&...)

## BRIEF

Функция для соединения нескольких отображений в строку

## CONTENT

Доступ: public

Функция для соединения нескольких отображений в строку. Значительно эффективнее `toString`, но для слияния принимает только строки и отображения, соответсвующие текущему типу символов.

Параметры шаблона:
* typename Interface - интерфейс памяти для новой строки
* typename Args

Параметры:
* Args &&...

Возвращает:
* typename Interface::template BasicStringType<stappler::StringViewBase::CharType>

# ::stappler::StringViewBase<typename>::merge<typename,_CharType,typename>(Args &&...)

## BRIEF

Функция для соединения нескольких отображений в строку с использованием символа-разделителя

## CONTENT

Доступ: public

Функция для соединения нескольких отображений в строку с использованием символа-разделителя. Значительно эффективнее `toString`, но для слияния принимает только строки и отображения, соответсвующие текущему типу символов.

Параметры шаблона:
* typename Interface - интерфейс памяти для новой строки
* _CharType c - символ-разделитель
* typename Args

Параметры:
* Args &&...

Возвращает:
* typename Interface::template BasicStringType<stappler::StringViewBase::CharType>

# ::stappler::StringViewBase<typename>::StringViewBase()

## BRIEF

Конструктор по умолчанию

## CONTENT

Доступ: public

Конструктор по умолчанию, создаёт пустое отображение

# ::stappler::StringViewBase<typename>::StringViewBase(stappler::StringViewBase::CharType const*,size_t)

## BRIEF

Конструктор из блока памяти

## CONTENT

Доступ: public

Конструктор из блока памяти

Параметры:
* stappler::StringViewBase::CharType const* - указатель на начало блока
* size_t - длина блока в символах


# ::stappler::StringViewBase<typename>::StringViewBase(stappler::StringViewBase::CharType const*,size_t,size_t)

## BRIEF

Конструктор из блока памяти

## CONTENT

Доступ: public

Конструктор из блока памяти

Параметры:
* stappler::StringViewBase::CharType const* - указатель на начало блока
* size_t - отступ от начала блока
* size_t - длина блока для отображения после отступа


# ::stappler::StringViewBase<typename>::StringViewBase(stappler::StringViewBase::Self const&,size_t,size_t)

## BRIEF

Конструктор из другого отображения

## CONTENT

Доступ: public

Конструктор из другого отображения. Выход за пределы отображения в параметрах ведёт к неопределённому поведению.

Параметры:
* stappler::StringViewBase::Self const& - исходное отображение
* size_t - отступ внутри отображения в символах
* size_t - длина для отображения после отступа


# ::stappler::StringViewBase<typename>::StringViewBase(stappler::StringViewBase::Self const&,size_t)

## BRIEF

Конструктор из другого отображения

## CONTENT

Доступ: public

Конструктор из другого отображения. Выход за пределы отображения в параметрах ведёт к неопределённому поведению.

Параметры:
* stappler::StringViewBase::Self const&
* size_t - длина для отображения в символах


# ::stappler::StringViewBase<typename>::StringViewBase(stappler::StringViewBase::PoolString const&)

## BRIEF

Конструктор из строки

## CONTENT

Доступ: public

Конструктор из строки. Отображение верно. пока строка существует и неизменна.

Параметры:
* stappler::StringViewBase::PoolString const&


# ::stappler::StringViewBase<typename>::StringViewBase(stappler::StringViewBase::StdString const&)

## BRIEF

Конструктор из строки

## CONTENT

Доступ: public

Конструктор из строки. Отображение верно. пока строка существует и неизменна.

Параметры:
* stappler::StringViewBase::StdString const&


# ::stappler::StringViewBase<typename>::operator=(stappler::StringViewBase::PoolString const&)

## BRIEF

Копирование из строки

## CONTENT

Доступ: public

Копирование из строки. Отображение верно. пока строка существует и неизменна.

Параметры:
* stappler::StringViewBase::PoolString const&

Возвращает:
* Self&

# ::stappler::StringViewBase<typename>::operator=(stappler::StringViewBase::StdString const&)

## BRIEF

Копирование из строки

## CONTENT

Доступ: public

Копирование из строки. Отображение верно. пока строка существует и неизменна.

Параметры:
* stappler::StringViewBase::StdString const&

Возвращает:
* Self&

# ::stappler::StringViewBase<typename>::operator=(stappler::StringViewBase::Self const&)

## BRIEF

Оператор копирования

## CONTENT

Доступ: public

Оператор копирования

Параметры:
* stappler::StringViewBase::Self const&

Возвращает:
* Self&

# ::stappler::StringViewBase<typename>::set(stappler::StringViewBase::PoolString const&)

## BRIEF

Устанавливает отображение для строки

## CONTENT

Доступ: public

Устанавливает отображение для строки. Отображение верно. пока строка существует и неизменна.

Параметры:
* stappler::StringViewBase::PoolString const&

Возвращает:
* Self&

# ::stappler::StringViewBase<typename>::set(stappler::StringViewBase::StdString const&)

## BRIEF

Устанавливает отображение для строки

## CONTENT

Доступ: public

Устанавливает отображение для строки. Отображение верно. пока строка существует и неизменна.

Параметры:
* stappler::StringViewBase::StdString const&

Возвращает:
* Self&

# ::stappler::StringViewBase<typename>::set(stappler::StringViewBase::Self const&)

## BRIEF

Копирует отображение

## CONTENT

Доступ: public

Копирует отображение

Параметры:
* stappler::StringViewBase::Self const&

Возвращает:
* Self&

# ::stappler::StringViewBase<typename>::set(stappler::StringViewBase::CharType const*,size_t)

## BRIEF

Устанавливает блок памяти для отображения

## CONTENT

Доступ: public

Устанавливает блок памяти для отображения.

Параметры:
* stappler::StringViewBase::CharType const* - указатель на начало блока памяти
* size_t - длина блока памяти в символах

Возвращает:
* Self&

# ::stappler::StringViewBase<typename>::is(stappler::StringViewBase::CharType const&) const

## BRIEF

Проверяет, является ли переданный символ первым символом в отображении

## CONTENT

Доступ: public

Проверяет, является ли переданный символ первым символом в отображении

Параметры:
* stappler::StringViewBase::CharType const&

Возвращает:
* bool

# ::stappler::StringViewBase<typename>::is(stappler::StringViewBase::CharType const*) const

## BRIEF

Проверяет, начинается ли отображение со строки

## CONTENT

Доступ: public

Проверяет, начинается ли отображение со строки

Параметры:
* stappler::StringViewBase::CharType const*

Возвращает:
* bool

# ::stappler::StringViewBase<typename>::is(stappler::StringViewBase::Self const&) const

## BRIEF

Проверяет, начинается ли отображение со строки из другого отображения

## CONTENT

Доступ: public

Проверяет, начинается ли отображение со строки из другого отображения

Параметры:
* stappler::StringViewBase::Self const&

Возвращает:
* bool

# ::stappler::StringViewBase<typename>::is<_CharType>() const

## BRIEF

Проверяет, является ли переданный в шаблоне символ первым символом в отображении

## CONTENT

Доступ: public

Проверяет, является ли переданный в шаблоне символ первым символом в отображении

Параметры шаблона:
* _CharType C - символ для проверки

Возвращает:
* bool

# ::stappler::StringViewBase<typename>::is<stappler::CharGroupId>() const

## BRIEF

Проверяет, относится ли первый символ к группе из шаблона

## CONTENT

Доступ: public

Проверяет, относится ли первый символ к группе из шаблона

Параметры шаблона:
* stappler::CharGroupId G - группа для проверки

Возвращает:
* bool

# ::stappler::StringViewBase<typename>::is<typename>() const

## BRIEF

Проверяет, относится ли первый символ к переданной в шаблоне маске символов

## CONTENT

Доступ: public

Проверяет, относится ли первый символ к переданной в шаблоне маске символов

Параметры шаблона:
* typename M - тип маски символов для проверки

Возвращает:
* bool

# ::stappler::StringViewBase<typename>::sub(size_t,size_t) const

## BRIEF

Возвращает сегмент отображения

## CONTENT

Доступ: public

Возвращает сегмент отображения. При выходе за границы поведение не определено.

Параметры:
* size_t - позиция начала сегмента
* size_t - длина сегмента

Возвращает:
* Self

# ::stappler::StringViewBase<typename>::pdup(memory::pool_t*) const

## BRIEF

Дублирует память, на которую указывает отображение, из пула памяти

## CONTENT

Доступ: public

Дублирует память, на которую указывает отображение, из пула памяти. Возвращает новое отображение, использующее новую память.

Параметры:
* memory::pool_t* - пул памяти или nullptr для использования текущего контекста

Возвращает:
* Self

# ::stappler::StringViewBase<typename>::str<typename>() const

## BRIEF

Конвертирует отображение в строку

## CONTENT

Доступ: public

Конвертирует отображение в строку

Параметры шаблона:
* typename Interface - интерфейс памяти для новой строки

Возвращает:
* typename Interface::template BasicStringType<stappler::StringViewBase::CharType>

# ::stappler::StringViewBase<typename>::operator++()

## BRIEF

Смещает отображение вперёд на один символ

## CONTENT

Доступ: public

Смещает отображение вперёд на один символ (то есть, отбрасывает один символ с начала)

Возвращает:
* Self&

# ::stappler::StringViewBase<typename>::operator++(int)

## BRIEF

Смещает отображение вперёд на один символ

## CONTENT

Доступ: public

Смещает отображение вперёд на один символ (то есть, отбрасывает один символ с начала)

Параметры:
* int

Возвращает:
* Self&

# ::stappler::StringViewBase<typename>::operator+=(size_t)

## BRIEF

Смещает отображение на несколько символов

## CONTENT

Доступ: public

Смещает отображение на несколько символов (то есть, отбрасывает символы с начала)

Параметры:
* size_t - число символов для смещения

Возвращает:
* Self&

# ::stappler::StringViewBase<typename>::begin() const

## BRIEF

Возвращает псевдоитератор для начала

## CONTENT

Доступ: public

Возвращает псевдоитератор для начала. Отображение является итератором для самого себя при использовании в алгоритмах обхода.

Возвращает:
* Self

# ::stappler::StringViewBase<typename>::end() const

## BRIEF

Возвращает псевдоитератор для конца

## CONTENT

Доступ: public

Возвращает псевдоитератор для конца. Отображение является итератором для самого себя при использовании в алгоритмах обхода

Доступ: public

Возвращает:
* Self

# ::stappler::StringViewBase<typename>::operator-(stappler::StringViewBase::Self const&) const

## BRIEF

Возвращает разницу между текущим отображением и его вариантом со смещением

## CONTENT

Доступ: public

Возвращает разницу между текущим отображением и его вариантом со смещением. Если передан не смещённый вариант этого же отображения - поведение не определено.

Возращает такое отображение, что расположено от начала текущего сегмента до начала переданного сегмента.

Параметры:
* stappler::StringViewBase::Self const&

Возвращает:
* Self

# ::stappler::StringViewBase<typename>::operator-=(stappler::StringViewBase::Self const&) const

## BRIEF

Отрезает сегмент от отображения

## CONTENT

Доступ: public

Отрезает сегмент от отображения. Если передан не смещённый вариант этого же отображения - поведение не определено.

Текущее отобрадение становится разницей между собой и переданным сегментом.

Параметры:
* stappler::StringViewBase::Self const&

Возвращает:
* Self&

# ::stappler::StringViewBase<typename>::hash() const

## BRIEF

Вычисляет 64-битный хэш отображения

## CONTENT

Доступ: public

Вычисляет 64-битный хэш отображения

Возвращает:
* uint64_t

# ::stappler::StringViewBase<typename>::hash32() const

## BRIEF

Вычисляет 32-битный хэш отображения

## CONTENT

Доступ: public

Вычисляет 32-битный хэш отображения

Возвращает:
* uint32_t

# ::stappler::StringViewBase<typename>::readFloat()

## BRIEF

Читает float из текущего отображения

## CONTENT

Доступ: public

Читает float из текущего отображения. При успешном чтении смещает отображение вперёд, убирая прочитанные символы от начала.

Возвращает:
* Result<float>

# ::stappler::StringViewBase<typename>::readDouble()

## BRIEF

Читает double из текущего отображения

## CONTENT

Читает double из текущего отображения. При успешном чтении смещает отображение вперёд, убирая прочитанные символы от начала.

Доступ: public

Возвращает:
* Result<double>

# ::stappler::StringViewBase<typename>::readInteger(int)

## BRIEF

Читает int64_t из текущего отображения

## CONTENT

Доступ: public

Читает int64_t из текущего отображения. При успешном чтении смещает отображение вперёд, убирая прочитанные символы от начала.

Параметры:
* int - размерность для чтения. 10 - десятиричная система.

Возвращает:
* Result<int64_t>

# ::stappler::StringViewBase<typename>::skipChars<typename>()

## BRIEF

Читает отображение от начала, пропуская символы. соотвествующие маске

## CONTENT

Доступ: public

Читает отображение от начала, пропуская символы. соотвествующие маске. Останавливает смещение на первом символе, не соответствующем маске.

Параметры шаблона:
* typename Args - набор масок символов


# ::stappler::StringViewBase<typename>::skipUntil<typename>()

## BRIEF

Читает отображение от начала, пропуская символы. не соотвествующие маске.

## CONTENT

Доступ: public

Читает отображение от начала, пропуская символы. не соотвествующие маске. Останавливает смещение на первом символе, соответствующем маске.

Параметры шаблона:
* typename Args - набор масок символов


# ::stappler::StringViewBase<typename>::backwardSkipChars<typename>()

## BRIEF

Читает отображение с конца, пропуская символы. соотвествующие маске.

## CONTENT

Доступ: public

Читает отображение с конца, пропуская символы. соотвествующие маске. Останавливает смещение на первом символе, не соответствующем маске.

Параметры шаблона:
* typename Args - набор масок символов


# ::stappler::StringViewBase<typename>::backwardSkipUntil<typename>()

## BRIEF

Читает отображение с конца, пропуская символы. не соотвествующие маске.

## CONTENT

Доступ: public

Читает отображение с конца, пропуская символы. соотвествующие маске. Останавливает смещение на первом символе, соответствующем маске.

Параметры шаблона:
* typename Args - набор масок символов


# ::stappler::StringViewBase<typename>::skipString(stappler::StringViewBase::Self const&)

## BRIEF

Пропускает строку, если она расположена в начале отображения

## CONTENT

Доступ: public

Пропускает строку, если она расположена в начале отображения

Параметры:
* stappler::StringViewBase::Self const&

Возвращает:
* bool - true если отображение было смещено

# ::stappler::StringViewBase<typename>::skipUntilString(stappler::StringViewBase::Self const&,bool)

## BRIEF

Читает отображение до тех пор, пока не найдёт строку

## CONTENT

Доступ: public

Читает отображение до тех пор, пока не найдёт строку, или не прочитает до конца.

Параметры:
* stappler::StringViewBase::Self const& - строка для поиска
* bool - true если необходимо остановиться перед строкой, false - после строки

Возвращает:
* bool - true если строка найдена

# ::stappler::StringViewBase<typename>::readChars<typename>()

## BRIEF

Читает отображение от начала, пока символы соотвеествуют маске

## CONTENT

Доступ: public

Читает отображение от начала, пока символы соотвеествуют маске. Останавливается на первом символе, не соотвествующем маске. Смещает текущее отображение. Возвращает прочитанный сегмент.

Параметры шаблона:
* typename Args - набор масок символов

Возвращает:
* Self

# ::stappler::StringViewBase<typename>::readUntil<typename>()

## BRIEF

Читает отображение от начала, пока символы не соотвеествуют маске

## CONTENT

Доступ: public

Читает отображение от начала, пока символы не соотвеествуют маске. Останавливается на первом символе, соотвествующем маске. Смещает текущее отображение. Возвращает прочитанный сегмент.

Параметры шаблона:
* typename Args - набор масок символов

Возвращает:
* Self

# ::stappler::StringViewBase<typename>::backwardReadChars<typename>()

## BRIEF

Читает отображение с конца, пока символы соотвеествуют маске

## CONTENT

Доступ: public

Читает отображение с конца, пока символы соотвеествуют маске. Останавливается на первом символе, не соотвествующем маске. Уменьшает размер текущего отображения. Возвращает прочитанный сегмент.

Параметры шаблона:
* typename Args - набор масок символов

Возвращает:
* Self

# ::stappler::StringViewBase<typename>::backwardReadUntil<typename>()

## BRIEF

Читает отображение с конца, пока символы не соотвеествуют маске

## CONTENT

Доступ: public

Читает отображение с конца, пока символы не соотвеествуют маске. Останавливается на первом символе, соотвествующем маске. Уменьшает размер текущего отображения. Возвращает прочитанный сегмент.

Параметры шаблона:
* typename Args - набор масок символов

Возвращает:
* Self

# ::stappler::StringViewBase<typename>::readUntilString(stappler::StringViewBase::Self const&)

## BRIEF

Читает отображение с начала, пока не будет найдена строка

## CONTENT

Доступ: public

Читает отображение с начала, пока не будет найдена строка. Возвращает прочитанный сегмент. Останавливается перед найденной строкой или в конце отображения.

Параметры:
* stappler::StringViewBase::Self const&

Возвращает:
* Self

# ::stappler::StringViewBase<typename>::split<typename,typename>(Callback const&) const

## BRIEF

Разделяет отображение по маске-разделителю

## CONTENT

Доступ: public

Разделяет отображение по маске-разделителю. Символы из маски игнорируются при возврате.

Параметры шаблона:
* typename Separator - маска разделителя
* typename Callback - функция вызывается для разделённого сегмента, передаваемого в виде `Self`.

Параметры:
* Callback const&


# ::stappler::StringViewBase<typename>::trimChars<typename>()

## BRIEF

Отрезает символы по маске с начала и конца отображения

## CONTENT

Доступ: public

Отрезает символы по маске с начала и конца отображения

Параметры шаблона:
* typename Args - набор масок символов


# ::stappler::StringViewBase<typename>::trimUntil<typename>()

## BRIEF

Отрезает символы, не входящие в маску, с начала и конца отображения

## CONTENT

Доступ: public

Отрезает символы, не входящие в маску, с начала и конца отображения

Параметры шаблона:
* typename Args


# ::stappler::StringViewBase<typename>::__size<typename>(T const&)

## BRIEF

Вспомогательная функция определения длины строки при слиянии

## CONTENT

Доступ: protected

Вспомогательная функция определения длины строки при слиянии

Параметры шаблона:
* typename T

Параметры:
* T const&

Возвращает:
* size_t

# ::stappler::StringViewBase<typename>::__size(stappler::StringViewBase::CharType const*)

## BRIEF

Вспомогательная функция определения длины строки при слиянии

## CONTENT

Доступ: protected

Вспомогательная функция определения длины строки при слиянии

Параметры:
* stappler::StringViewBase::CharType const*

Возвращает:
* size_t

# ::stappler::StringViewBase<typename>::_size<typename,typename>(T&&)

## BRIEF

Вспомогательная функция определения длины строки при слиянии

## CONTENT

Доступ: protected

Вспомогательная функция определения длины строки при слиянии

Параметры шаблона:
* typename T
* typename Args

Параметры:
* T&&

Возвращает:
* size_t

# ::stappler::StringViewBase<typename>::_size<typename,typename>(T&&,Args &&...)

## BRIEF

Вспомогательная функция определения длины строки при слиянии

## CONTENT

Доступ: protected

Вспомогательная функция определения длины строки при слиянии

Параметры шаблона:
* typename T
* typename Args

Параметры:
* T&&
* Args &&...

Возвращает:
* size_t

# ::stappler::StringViewBase<typename>::__merge<typename,typename>(Buf&,T&&)

## BRIEF

Вспомогательная функция слияния строк

## CONTENT

Доступ: protected

Вспомогательная функция слияния строк

Параметры шаблона:
* typename Buf
* typename T

Параметры:
* Buf&
* T&&


# ::stappler::StringViewBase<typename>::__merge<typename>(Buf&,stappler::StringViewBase::CharType const*)

## BRIEF

Вспомогательная функция слияния строк

## CONTENT

Доступ: protected

Вспомогательная функция слияния строк

Параметры шаблона:
* typename Buf

Параметры:
* Buf&
* stappler::StringViewBase::CharType const*


# ::stappler::StringViewBase<typename>::_merge<typename,typename,typename>(Buf&,T&&,Args &&...)

## BRIEF

Вспомогательная функция слияния строк

## CONTENT

Доступ: protected

Вспомогательная функция слияния строк

Параметры шаблона:
* typename Buf
* typename T
* typename Args

Параметры:
* Buf&
* T&&
* Args &&...


# ::stappler::StringViewBase<typename>::_merge<typename,typename>(Buf&,T&&)

## BRIEF

Вспомогательная функция слияния строк

## CONTENT

Доступ: protected

Вспомогательная функция слияния строк

Параметры шаблона:
* typename Buf
* typename T

Параметры:
* Buf&
* T&&


# ::stappler::StringViewBase<typename>::__mergeWithSep<typename,_CharType,bool,typename>(Buf&,T&&)

## BRIEF

Вспомогательная функция слияния строк

## CONTENT

Доступ: protected

Вспомогательная функция слияния строк

Параметры шаблона:
* typename Buf
* _CharType C
* bool Front
* typename T

Параметры:
* Buf&
* T&&


# ::stappler::StringViewBase<typename>::_mergeWithSep<typename,_CharType,bool,typename,typename>(Buf&,T&&,Args &&...)

## BRIEF

Вспомогательная функция слияния строк

## CONTENT

Доступ: protected

Вспомогательная функция слияния строк

Параметры шаблона:
* typename Buf
* _CharType C
* bool Front
* typename T
* typename Args

Параметры:
* Buf&
* T&&
* Args &&...


# ::stappler::StringViewBase<typename>::_mergeWithSep<typename,_CharType,bool,typename>(Buf&,T&&)

## BRIEF

Вспомогательная функция слияния строк

## CONTENT

Доступ: protected

Вспомогательная функция слияния строк

Параметры шаблона:
* typename Buf
* _CharType C
* bool Front
* typename T

Параметры:
* Buf&
* T&&


# ::stappler::StringViewBase<typename>::match<typename>(stappler::StringViewBase::CharType)

## BRIEF

Вспомогательная функция проверки символа на вхождение в маску

## CONTENT

Доступ: protected

Вспомогательная функция проверки символа на вхождение в маску

Параметры шаблона:
* typename Args

Параметры:
* stappler::StringViewBase::CharType

Возвращает:
* bool

# ::stappler::StringViewUtf8

## BRIEF

Невладеющий строковый контейнер для строк в UTF-8

## CONTENT

Невладеющий строковый контейнер для строк в UTF-8. Функции чтения из этого контейнера аналогичны StringView, но работают не с отдельными символами (char), а с кодированными блоками UTF-8 и символами юникода.

Базовые классы:
* BytesReader<char>


# ::stappler::StringViewUtf8::Self

## BRIEF

Тип себя

## CONTENT

Доступ: public

Тип себя


# ::stappler::StringViewUtf8::MatchCharType

## BRIEF

Тип символа для маски

## CONTENT

Доступ: public

Тип символа для маски - char32_t


# ::stappler::StringViewUtf8::CharType

## BRIEF

Тип хранимого символа

## CONTENT

Доступ: public

Тип хранимого символа


# ::stappler::StringViewUtf8::value_type

## BRIEF

Тип значения контейнера для стандартных алгоритмов

## CONTENT

Доступ: public

Тип значения контейнера для стандартных алгоритмов


# ::stappler::StringViewUtf8::TraitsType

## BRIEF

Тип для доступа к стандартным строковым алгоритмам

## CONTENT

Доступ: public

Тип для доступа к стандартным строковым алгоритмам


# ::stappler::StringViewUtf8::PoolString

## BRIEF

Тип строки из пула памяти

## CONTENT

Доступ: public

Тип строки из пула памяти


# ::stappler::StringViewUtf8::StdString

## BRIEF

Тип стандартной строки

## CONTENT

Доступ: public

Тип стандартной строки


# ::stappler::StringViewUtf8::MatchChars<MatchCharType...>

## BRIEF

Тип набора символов для маски юникода

## CONTENT

Доступ: public

Тип набора символов для маски юникода

Параметры шаблона:
* MatchCharType Args


# ::stappler::StringViewUtf8::MatchRange<char,char>

## BRIEF

Тип диапазона символов для маски юникода

## CONTENT

Доступ: public

Тип диапазона символов для маски юникода

Параметры шаблона:
* char First
* char Last


# ::stappler::StringViewUtf8::MatchCharGroup<stappler::CharGroupId>

## BRIEF

Тип именованной группы символов для маски юникода

## CONTENT

Доступ: public

Тип именованной группы символов для маски юникода

Параметры шаблона:
* stappler::CharGroupId Group


# ::stappler::StringViewUtf8::MatchCompose<typename>

## BRIEF

Тип композиции примитивов символов для маски юникода

## CONTENT

Доступ: public

Тип композиции примитивов символов для маски юникода

Параметры шаблона:
* typename Args


# ::stappler::StringViewUtf8::Chars<MatchCharType...>

## BRIEF

Тип набора символов для маски юникода

## CONTENT

Доступ: public

Тип набора символов для маски юникода

Параметры шаблона:
* MatchCharType Args


# ::stappler::StringViewUtf8::Range<char,char>

## BRIEF

Тип диапазона символов для маски юникода

## CONTENT

Доступ: public

Тип диапазона символов для маски юникода

Параметры шаблона:
* char First
* char Last


# ::stappler::StringViewUtf8::CharGroup<stappler::CharGroupId>

## BRIEF

Тип именованной группы символов для маски юникода

## CONTENT

Доступ: public

Тип именованной группы символов для маски юникода

Параметры шаблона:
* stappler::CharGroupId Group


# ::stappler::StringViewUtf8::Compose<typename>

## BRIEF

Тип композиции примитивов символов для маски юникода

## CONTENT

Доступ: public

Тип композиции примитивов символов для маски юникода

Параметры шаблона:
* typename Args


# ::stappler::StringViewUtf8::Numbers

## BRIEF

Псевдоним для именованной группы символов

## CONTENT

Доступ: public

Псевдоним для именованной группы символов


# ::stappler::StringViewUtf8::Latin

## BRIEF

Псевдоним для именованной группы символов

## CONTENT

Доступ: public

Псевдоним для именованной группы символов


# ::stappler::StringViewUtf8::WhiteSpace

## BRIEF

Псевдоним для именованной группы символов

## CONTENT

Доступ: public

Псевдоним для именованной группы символов


# ::stappler::StringViewUtf8::LatinLowercase

## BRIEF

Псевдоним для именованной группы символов

## CONTENT

Доступ: public

Псевдоним для именованной группы символов


# ::stappler::StringViewUtf8::LatinUppercase

## BRIEF

Псевдоним для именованной группы символов

## CONTENT

Доступ: public

Псевдоним для именованной группы символов


# ::stappler::StringViewUtf8::Alphanumeric

## BRIEF

Псевдоним для именованной группы символов

## CONTENT

Доступ: public

Псевдоним для именованной группы символов


# ::stappler::StringViewUtf8::Hexadecimial

## BRIEF

Псевдоним для именованной группы символов

## CONTENT

Доступ: public

Псевдоним для именованной группы символов


# ::stappler::StringViewUtf8::Base64

## BRIEF

Псевдоним для именованной группы символов

## CONTENT

Доступ: public

Псевдоним для именованной группы символов


# ::stappler::StringViewUtf8::StringViewUtf8()

## BRIEF

Конструктор по умолчанию

## CONTENT

Доступ: public

Конструктор по умолчанию. Создаёт пустое отображение


# ::stappler::StringViewUtf8::StringViewUtf8(char const*,size_t)

## BRIEF

Конструктор из блока памяти

## CONTENT

Доступ: public

Конструктор из блока памяти

Параметры:
* char const* - укалатель на начало блока памяти
* size_t - размер блока памяти в символах


# ::stappler::StringViewUtf8::StringViewUtf8(char const*,size_t,size_t)

## BRIEF

Конструктор из блока памяти

## CONTENT

Доступ: public

Конструктор из блока памяти

Параметры:
* char const* - укалатель на начало блока памяти
* size_t - отступ от начала блока памяти
* size_t - размер блока памяти после отступа в символах


# ::stappler::StringViewUtf8::StringViewUtf8(stappler::StringViewUtf8 const&,size_t)

## BRIEF

Конструктор из другого отображения

## CONTENT

Доступ: public

Конструктор из другого отображения. Выход за границы исходного отображения ведёт к неопределённому поведению.

Параметры:
* stappler::StringViewUtf8 const& - другое отображение
* size_t - размер нового отображения в символах. Должен быть не больше размера исходного


# ::stappler::StringViewUtf8::StringViewUtf8(stappler::StringViewUtf8 const&,size_t,size_t)

## BRIEF

Конструктор из другого отображения

## CONTENT

Доступ: public

Конструктор из другого отображения. Выход за границы исходного отображения ведёт к неопределённому поведению.

Параметры:
* stappler::StringViewUtf8 const& - другое отображение
* size_t - отступ от начала другого отображения
* size_t - размер нового отображения после отступа в символах


# ::stappler::StringViewUtf8::StringViewUtf8(stappler::StringViewUtf8::PoolString const&)

## BRIEF

Конструктор из строки

## CONTENT

Доступ: public

Конструктор из строки. Отображение верно пока строка существует и неизменно.

Параметры:
* stappler::StringViewUtf8::PoolString const&


# ::stappler::StringViewUtf8::StringViewUtf8(stappler::StringViewUtf8::StdString const&)

## BRIEF

Конструктор из строки

## CONTENT

Доступ: public

Конструктор из строки. Отображение верно пока строка существует и неизменно.

Параметры:
* stappler::StringViewUtf8::StdString const&


# ::stappler::StringViewUtf8::StringViewUtf8(StringViewBase<char> const&)

## BRIEF

Конструктор копирования

## CONTENT

Доступ: public

Конструктор копирования

Параметры:
* StringViewBase<char> const&


# ::stappler::StringViewUtf8::operator=(stappler::StringViewUtf8::PoolString const&)

## BRIEF

Копирование из строки

## CONTENT

Доступ: public

Копирование из строки. Отображение верно пока строка существует и неизменно.

Параметры:
* stappler::StringViewUtf8::PoolString const&

Возвращает:
* Self&

# ::stappler::StringViewUtf8::operator=(stappler::StringViewUtf8::StdString const&)

## BRIEF

Копирование из строки

## CONTENT

Доступ: public

Копирование из строки. Отображение верно пока строка существует и неизменно.

Параметры:
* stappler::StringViewUtf8::StdString const&

Возвращает:
* Self&

# ::stappler::StringViewUtf8::operator=(stappler::StringViewUtf8::Self const&)

## BRIEF

Оператор копирования

## CONTENT

Доступ: public

Оператор копирования

Параметры:
* stappler::StringViewUtf8::Self const&

Возвращает:
* Self&

# ::stappler::StringViewUtf8::set(stappler::StringViewUtf8::PoolString const&)

## BRIEF

Устанавливает отображение для строки

## CONTENT

Доступ: public

Устанавливает отображение для строки. Отображение верно пока строка существует и неизменно.

Параметры:
* stappler::StringViewUtf8::PoolString const&

Возвращает:
* Self&

# ::stappler::StringViewUtf8::set(stappler::StringViewUtf8::StdString const&)

## BRIEF

Устанавливает отображение для строки

## CONTENT

Доступ: public

Устанавливает отображение для строки. Отображение верно пока строка существует и неизменно.

Параметры:
* stappler::StringViewUtf8::StdString const&

Возвращает:
* Self&

# ::stappler::StringViewUtf8::set(stappler::StringViewUtf8::Self const&)

## BRIEF

Копирует отображение

## CONTENT

Доступ: public

Копирует отображение

Параметры:
* stappler::StringViewUtf8::Self const&

Возвращает:
* Self&

# ::stappler::StringViewUtf8::set(char const*,size_t)

## BRIEF

Устанавливает блок памяти для отображения

## CONTENT

Доступ: public

Устанавливает блок памяти для отображения

Параметры:
* char const* - указатель на начало блока памяти
* size_t - размер блока памяти в символах

Возвращает:
* Self&

# ::stappler::StringViewUtf8::is(char const&) const

## BRIEF

Проверяет, является ли символ первым символом отображения

## CONTENT

Доступ: public

Проверяет, является ли символ первым символом отображения

Параметры:
* char const&

Возвращает:
* bool

# ::stappler::StringViewUtf8::is(char16_t const&) const

## BRIEF

Проверяет, является ли символ первым символом отображения с учётом кодировки

## CONTENT

Доступ: public

Проверяет, является ли символ первым символом отображения с учётом кодировки. Декодирует первый символ отображения в символ юникода и сравнивает с ним.

Параметры:
* char16_t const&

Возвращает:
* bool

# ::stappler::StringViewUtf8::is(char32_t const&) const

## BRIEF

Проверяет, является ли символ первым символом отображения с учётом кодировки

## CONTENT

Доступ: public

Проверяет, является ли символ первым символом отображения с учётом кодировки. Декодирует первый символ отображения в символ юникода и сравнивает с ним.

Параметры:
* char32_t const&

Возвращает:
* bool

# ::stappler::StringViewUtf8::is(char const*) const

## BRIEF

Проверяет, является ли С-строка префиксом отображения

## CONTENT

Доступ: public

Проверяет, является ли С-строка префиксом отображения

Параметры:
* char const*

Возвращает:
* bool

# ::stappler::StringViewUtf8::is(stappler::StringViewUtf8::Self const&) const

## BRIEF

Проверяет, является ли переданное отображение префиксом отображения

## CONTENT

Доступ: public

Проверяет, является ли переданное отображение префиксом отображения

Параметры:
* stappler::StringViewUtf8::Self const&

Возвращает:
* bool

# ::stappler::StringViewUtf8::is<char32_t>() const

## BRIEF

Проверяет, является ли символ из шаблона первым символом отображения с учётом кодировки

## CONTENT

Доступ: public

Проверяет, является ли символ из шаблона первым символом отображения с учётом кодировки. Декодирует первый символ отображения в символ юникода и сравнивает с ним.

Параметры шаблона:
* char32_t C

Возвращает:
* bool

# ::stappler::StringViewUtf8::is<stappler::CharGroupId>() const

## BRIEF

Проверяет, относится ли первый символ отображения с учётом кодировки к именованной группе символов

## CONTENT

Доступ: public

Проверяет, относится ли первый символ отображения с учётом кодировки к именованной группе символов. Декодирует первый символ отображения в символ юникода и сравнивает с ним.

Параметры шаблона:
* stappler::CharGroupId G

Возвращает:
* bool

# ::stappler::StringViewUtf8::is<typename>() const

## BRIEF

Проверяет, соотвествует ли первый символ маске символов с учётом кодировки

## CONTENT

Доступ: public

Проверяет, соотвествует ли первый символ маске символов с учётом кодировки. Декодирует первый символ отображения в символ юникода и сравнивает с ним.

Параметры шаблона:
* typename M

Возвращает:
* bool

# ::stappler::StringViewUtf8::sub(size_t,size_t) const

## BRIEF

Возвращает сегмент отображения

## CONTENT

Доступ: public

Возвращает сегмент отображения. Не учитывает кодировку, считает в хранимых 8-битных символах. При выходе за границы отображения поведение не определено.

Параметры:
* size_t - смещение внутри отображения в символах
* size_t - длина отображения в символах

Возвращает:
* Self

# ::stappler::StringViewUtf8::letter() const

## BRIEF

Возвращает сегмент, соответствующий текущему полному символу юникода

## CONTENT

Доступ: public

Возвращает сегмент, соответствующий текущему полному символу юникода (1-4 8-битных символа)

Возвращает:
* Self

# ::stappler::StringViewUtf8::str<typename>() const

## BRIEF

Создаёт новую строку из отображения

## CONTENT

Доступ: public

Создаёт новую строку из отображения

Параметры шаблона:
* typename Interface - интерфейс памяти для новой строки

Возвращает:
* typename Interface::StringType

# ::stappler::StringViewUtf8::offset(size_t)

## BRIEF

Смещает отображение на указанное число символов юникода

## CONTENT

Доступ: public

Смещает отображение на указанное число символов юникода. Символ юникода может соотвествовать от 1 до 4 8-битных символов.

Параметры:
* size_t - количество символов для смещения


# ::stappler::StringViewUtf8::operator++()

## BRIEF

Смещает отображение на один символ юникода

## CONTENT

Доступ: public

Смещает отображение на один символ юникода. Символ юникода может соотвествовать от 1 до 4 8-битных символов.

Возвращает:
* Self&

# ::stappler::StringViewUtf8::operator++(int)

## BRIEF

Смещает отображение на один символ юникода постфиксно

## CONTENT

Доступ: public

Смещает отображение на один символ юникода постфиксно. Символ юникода может соотвествовать от 1 до 4 8-битных символов.

Параметры:
* int

Возвращает:
* Self&

# ::stappler::StringViewUtf8::operator+=(size_t)

## BRIEF

Смещает отображение на указанное число символов юникода

## CONTENT

Доступ: public

Смещает отображение на указанное число символов юникода. Символ юникода может соотвествовать от 1 до 4 8-битных символов.

Параметры:
* size_t

Возвращает:
* Self&

# ::stappler::StringViewUtf8::isSpace() const

## BRIEF

Проверяет, состоит ли строка только из пробельных символов

## CONTENT

Доступ: public

Проверяет, состоит ли строка только из пробельных символов. Для оценки используется группа Whitespace для символов юникода

Возвращает:
* bool

# ::stappler::StringViewUtf8::begin() const

## BRIEF

Возвращает псевдоитератор начала

## CONTENT

Доступ: public

Возвращает псевдоитератор начала. Тип является итератором для самого себя при рабте со стандартными алгоритмами.

Возвращает:
* Self

# ::stappler::StringViewUtf8::end() const

## BRIEF

Возвращает псевдоитератор конца

## CONTENT

Доступ: public

Возвращает псевдоитератор конца. Тип является итератором для самого себя при рабте со стандартными алгоритмами.
Возвращает:
* Self

# ::stappler::StringViewUtf8::operator-(stappler::StringViewUtf8::Self const&) const

## BRIEF

Возвращает разность между отображением и его вложенным сегментом

## CONTENT

Доступ: public

Возвращает разность между отображением и его вложенным сегментом. Если переданное отображение не является вложенным сегментом для текущего - поведение не определено

Параметры:
* stappler::StringViewUtf8::Self const& - вложенный сегмент

Возвращает:
* Self - отображение между началом текущего сегмента и началом вложенного сегмента

# ::stappler::StringViewUtf8::operator-=(stappler::StringViewUtf8::Self const&)

## BRIEF

Вычитает вложенный сегмент из текущего отображения

## CONTENT

Доступ: public

Вычитает вложенный сегмент из текущего отображения. Если переданное отображение не является вложенным сегментом для текущего - поведение не определено. Текущий сегмент становится сегментом между началом исходного отображения и началом вычитаемого сегмента.

Параметры:
* stappler::StringViewUtf8::Self const& - вложенный сегмент

Возвращает:
* Self&

# ::stappler::StringViewUtf8::operator*() const

## BRIEF

Возвращает текущий первый символ как символ юникода

## CONTENT

Доступ: public

Возвращает текущий первый символ как символ юникода

Возвращает:
* MatchCharType


# ::stappler::StringViewUtf8::code_size() const

## BRIEF

Возвращает длину строки в символах юникода

## CONTENT

Доступ: public

Возвращает длину строки в символах юникода

Возвращает:
* size_t

# ::stappler::StringViewUtf8::operator StringViewBase<char>() const

## BRIEF

Конвертирует отображение в стандартное строковое отображение

## CONTENT

Доступ: public

Конвертирует отображение в стандартное строковое отображение

Возвращает:
* StringViewBase<char>

# ::stappler::StringViewUtf8::hash() const

## BRIEF

Возвращает 64-битный хэш отображения

## CONTENT

Доступ: public

Возвращает 64-битный хэш отображения

Возвращает:
* uint64_t

# ::stappler::StringViewUtf8::hash32() const

## BRIEF

Возвращает 32-битный хэш отображения

## CONTENT

Доступ: public

Возвращает 32-битный хэш отображения

Возвращает:
* uint64_t

# ::stappler::StringViewUtf8::readFloat()

## BRIEF

Читает float из отобраения

## CONTENT

Доступ: public

Читает float из отобраения. При успешном чтении смещает отображение на прочитанные символы.

Возвращает:
* Result<float>

# ::stappler::StringViewUtf8::readDouble()

## BRIEF

Читает double из отобраения

## CONTENT

Доступ: public

Читает double из отобраения. При успешном чтении смещает отображение на прочитанные символы.

Возвращает:
* Result<double>

# ::stappler::StringViewUtf8::readInteger(int)

## BRIEF

Читает int64_t из отобраения

## CONTENT

Доступ: public

Читает int64_t из отобраения. При успешном чтении смещает отображение на прочитанные символы.

Параметры:
* int - размерность для чтения. 10 для десятиричной системы

Возвращает:
* Result<int64_t> - опциональный результат

# ::stappler::StringViewUtf8::skipChars<typename>()

## BRIEF

Читает отображение от начала, пропуская символы. соотвествующие маске

## CONTENT

Доступ: public

Читает отображение от начала, пропуская символы. соотвествующие маске. Останавливает смещение на первом символе, не соответствующем маске. Для проверки по маске конвертирует строку в символы юникода.

Параметры шаблона:
* typename Args - набор масок символов


# ::stappler::StringViewUtf8::skipUntil<typename>()

## BRIEF

Читает отображение от начала, пропуская символы. не соотвествующие маске.

## CONTENT

Доступ: public

Читает отображение от начала, пропуская символы. не соотвествующие маске. Останавливает смещение на первом символе, соответствующем маске. Для проверки по маске конвертирует строку в символы юникода.

Параметры шаблона:
* typename Args - набор масок символов


# ::stappler::StringViewUtf8::backwardSkipChars<typename>()

## BRIEF

Читает отображение с конца, пропуская символы. соотвествующие маске.

## CONTENT

Доступ: public

Читает отображение с конца, пропуская символы. соотвествующие маске. Останавливает смещение на первом символе, не соответствующем маске. Для проверки по маске конвертирует строку в символы юникода.

Параметры шаблона:
* typename Args - набор масок символов


# ::stappler::StringViewUtf8::backwardSkipUntil<typename>()

## BRIEF

Читает отображение с конца, пропуская символы. не соотвествующие маске.

## CONTENT

Доступ: public

Читает отображение с конца, пропуская символы. соотвествующие маске. Останавливает смещение на первом символе, соответствующем маске. Для проверки по маске конвертирует строку в символы юникода.

Параметры шаблона:
* typename Args - набор масок символов


# ::stappler::StringViewUtf8::skipString(stappler::StringViewUtf8::Self const&)

## BRIEF

Пропускает строку, если она расположена в начале отображения

## CONTENT

Доступ: public

Пропускает строку, если она расположена в начале отображения

Параметры:
* stappler::StringViewBase::Self const&

Возвращает:
* bool - true если отображение было смещено

# ::stappler::StringViewUtf8::skipUntilString(stappler::StringViewUtf8::Self const&,bool)

## BRIEF

Читает отображение до тех пор, пока не найдёт строку

## CONTENT

Доступ: public

Читает отображение до тех пор, пока не найдёт строку, или не прочитает до конца.

Параметры:
* stappler::StringViewBase::Self const& - строка для поиска
* bool - true если необходимо остановиться перед строкой, false - после строки

Возвращает:
* bool - true если строка найдена

# ::stappler::StringViewUtf8::readChars<typename>()

## BRIEF

Читает отображение от начала, пока символы соотвеествуют маске

## CONTENT

Доступ: public

Читает отображение от начала, пока символы соотвеествуют маске. Останавливается на первом символе, не соотвествующем маске. Смещает текущее отображение. Возвращает прочитанный сегмент. Для проверки по маске конвертирует строку в символы юникода.

Параметры шаблона:
* typename Args - набор масок символов

Возвращает:
* Self

# ::stappler::StringViewUtf8::readUntil<typename>()

## BRIEF

Читает отображение от начала, пока символы не соотвеествуют маске

## CONTENT

Доступ: public

Читает отображение от начала, пока символы не соотвеествуют маске. Останавливается на первом символе, соотвествующем маске. Смещает текущее отображение. Возвращает прочитанный сегмент. Для проверки по маске конвертирует строку в символы юникода.

Параметры шаблона:
* typename Args - набор масок символов

Возвращает:
* Self

# ::stappler::StringViewUtf8::backwardReadChars<typename>()

## BRIEF

Читает отображение с конца, пока символы соотвеествуют маске

## CONTENT

Доступ: public

Читает отображение с конца, пока символы соотвеествуют маске. Останавливается на первом символе, не соотвествующем маске. Уменьшает размер текущего отображения. Возвращает прочитанный сегмент. Для проверки по маске конвертирует строку в символы юникода.

Параметры шаблона:
* typename Args - набор масок символов

Возвращает:
* Self

# ::stappler::StringViewUtf8::backwardReadUntil<typename>()

## BRIEF

Читает отображение с конца, пока символы не соотвеествуют маске

## CONTENT

Доступ: public

Читает отображение с конца, пока символы не соотвеествуют маске. Останавливается на первом символе, соотвествующем маске. Уменьшает размер текущего отображения. Возвращает прочитанный сегмент. Для проверки по маске конвертирует строку в символы юникода.

Параметры шаблона:
* typename Args - набор масок символов

Возвращает:
* Self

# ::stappler::StringViewUtf8::readUntilString(stappler::StringViewUtf8::Self const&)

## BRIEF

Читает отображение с начала, пока не будет найдена строка

## CONTENT

Доступ: public

Читает отображение с начала, пока не будет найдена строка. Возвращает прочитанный сегмент. Останавливается перед найденной строкой или в конце отображения.

Параметры:
* stappler::StringViewBase::Self const&

Возвращает:
* Self

# ::stappler::StringViewUtf8::split<typename,typename>(Callback const&) const

## BRIEF

Разделяет отображение по маске-разделителю

## CONTENT

Доступ: public

Разделяет отображение по маске-разделителю. Символы из маски игнорируются при возврате.

Параметры шаблона:
* typename Separator - маска разделителя
* typename Callback - функция вызывается для разделённого сегмента, передаваемого в виде `Self`.

Параметры:
* Callback const&


# ::stappler::StringViewUtf8::trimChars<typename>()

## BRIEF

Отрезает символы по маске с начала и конца отображения

## CONTENT

Доступ: public

Отрезает символы по маске с начала и конца отображения

Параметры шаблона:
* typename Args - набор масок символов


# ::stappler::StringViewUtf8::trimUntil<typename>()

## BRIEF

Отрезает символы, не входящие в маску, с начала и конца отображения

## CONTENT

Доступ: public

Отрезает символы, не входящие в маску, с начала и конца отображения

Параметры шаблона:
* typename Args


# ::stappler::StringViewUtf8::rv_match_utf8<typename>(stappler::StringViewUtf8::CharType const*,size_t,uint8_t&)

## BRIEF

Вычисляет смещение в 8-битных символах с конца для маски символов юникода

## CONTENT

Доступ: protected

Вычисляет смещение в 8-битных символах с конца для маски символов юникода

Параметры шаблона:
* typename Args - набор масок символов

Параметры:
* stappler::StringViewUtf8::CharType const* - указатель на начало блока памяти
* size_t - размер блока памяти
* uint8_t& - (выход) вычисленное смещение

Возвращает:
* bool - true если смещение вычислено


# ::stappler::StringViewUtf8::match<typename>(stappler::StringViewUtf8::MatchCharType)

## BRIEF

Проверяет символ юникода на соотвествие маске

## CONTENT

Доступ: protected

Проверяет символ юникода на соотвествие маске

Параметры шаблона:
* typename Args - набор масок для проверки

Параметры:
* MatchCharType - символ для проверки

Возвращает:
* bool - true если символ соотвествует маске

# ::stappler::StringView

## BRIEF

Псевдоним для стандатного 8-битного строкового отображения

## CONTENT

Псевдоним для стандатного 8-битного строкового отображения


# ::stappler::WideStringView

## BRIEF

Псевдоним для стандатного 16-битного строкового отображения

## CONTENT

Псевдоним для стандатного 16-битного строкового отображения


# ::stappler::string::length<typename>(_CharT const*)

## BRIEF

Вычисляет длину строки в буфере стандартным алгоритмом

## CONTENT

Вычисляет длину строки в буфере стандартным алгоритмом

Параметры шаблона:
* typename _CharT - тип символа в строке

Параметры:
* _CharT const* - указатель на начало буфера, должен быть завершающий 0

Возвращает:
* size_t - длина строки

# ::stappler::string::length<typename>(_CharT const*,size_t)

## BRIEF

Вычисляет длину строки в буфере, если она меньше значения

## CONTENT

Вычисляет длину строки в буфере, если она меньше значения

Параметры шаблона:
* typename _CharT - тип символа в строке

Параметры:
* _CharT const* - указатель на начало буфера, должен быть завершающий 0
* size_t - максимальная длина строки

Возвращает:
* size_t - длина строки или максимальная длина

# ::stappler::operator<<<typename>(std::basic_ostream<C>&,StringViewBase<C> const&)

## BRIEF

Оператор вывода отображения в поток

## CONTENT

Оператор вывода отображения в поток

Параметры шаблона:
* typename C = тип символа в отображении

Параметры:
* std::basic_ostream<C>&
* StringViewBase<C> const&

Возвращает:
* std::basic_ostream<C>&

# ::stappler::operator<<(std::basic_ostream<char>&,stappler::StringViewUtf8 const&)

## BRIEF

Оператор вывода отображения в поток

## CONTENT

Оператор вывода отображения в поток

Параметры:
* std::basic_ostream<char>&
* stappler::StringViewUtf8 const&

Возвращает:
* std::basic_ostream<char>&

# ::stappler::operator><typename>(StringViewBase<C> const&,StringViewBase<C> const&)

## BRIEF

Лексикографически сравнивает содержимое двух контейнеров

## CONTENT

Лексикографически сравнивает содержимое двух контейнеров

Параметры шаблона:
* typename C

Параметры:
* StringViewBase<C> const&
* StringViewBase<C> const&

Возвращает:
* bool

# ::stappler::operator>=<typename>(StringViewBase<C> const&,StringViewBase<C> const&)

## BRIEF

Лексикографически сравнивает содержимое двух контейнеров

## CONTENT

Лексикографически сравнивает содержимое двух контейнеров

Параметры шаблона:
* typename C

Параметры:
* StringViewBase<C> const&
* StringViewBase<C> const&

Возвращает:
* bool

# ::stappler::operator<<typename>(StringViewBase<C> const&,StringViewBase<C> const&)

## BRIEF

Лексикографически сравнивает содержимое двух контейнеров

## CONTENT

Лексикографически сравнивает содержимое двух контейнеров

Параметры шаблона:
* typename C

Параметры:
* StringViewBase<C> const&
* StringViewBase<C> const&

Возвращает:
* bool

# ::stappler::operator<=<typename>(StringViewBase<C> const&,StringViewBase<C> const&)

## BRIEF

Лексикографически сравнивает содержимое двух контейнеров

## CONTENT

Лексикографически сравнивает содержимое двух контейнеров

Параметры шаблона:
* typename C

Параметры:
* StringViewBase<C> const&
* StringViewBase<C> const&

Возвращает:
* bool

# ::std::hash<::stappler::StringView>::hash<::stappler::StringView>

## BRIEF

Вспомогательная структура для вычисления стандартного хэша

## CONTENT

Вспомогательная структура для вычисления стандартного хэша

# ::std::hash<::stappler::StringView>::hash()

## BRIEF

Конструктор по умолчанию

## CONTENT

Конструктор по умолчанию


# ::std::hash<::stappler::StringView>::operator()(::stappler::StringView const&) const

## BRIEF

Вычисляет стандартный хэш для отображения

## CONTENT

Вычисляет стандартный хэш для отображения

Параметры:
* stappler::StringView const&

Возвращает:
* std::size_t

# ::std::hash<::stappler::StringViewUtf8>::hash<::stappler::StringViewUtf8>

## BRIEF

Вспомогательная структура для вычисления стандартного хэша

## CONTENT

Вспомогательная структура для вычисления стандартного хэша


# ::std::hash<::stappler::StringViewUtf8>::hash()

## BRIEF

Конструктор по умолчанию

## CONTENT

Конструктор по умолчанию


# ::std::hash<::stappler::StringViewUtf8>::operator()(::stappler::StringViewUtf8 const&) const

## BRIEF

Вычисляет стандартный хэш для отображения

## CONTENT

Вычисляет стандартный хэш для отображения

Параметры:
* stappler::StringViewUtf8 const&

Возвращает:
* std::size_t

# ::std::hash<::stappler::WideStringView>::hash<::stappler::WideStringView>

## BRIEF

Вспомогательная структура для вычисления стандартного хэша

## CONTENT

Вспомогательная структура для вычисления стандартного хэша


# ::std::hash<::stappler::WideStringView>::hash()

## BRIEF

Конструктор по умолчанию

## CONTENT

Конструктор по умолчанию


# ::std::hash<::stappler::WideStringView>::operator()(::stappler::WideStringView const&) const

## BRIEF

Вычисляет стандартный хэш для отображения

## CONTENT

Вычисляет стандартный хэш для отображения

Параметры:
* stappler::WideStringView const&

Возвращает:
* std::size_t

# ::stappler::platform::tolower<typename>(stappler::StringView)

## BRIEF

Конвертирует строку в нижний регистр

## CONTENT

Конвертирует строку в нижний регистр. Использует функции платформы. Использует правила юникода.

Параметры шаблона:
* typename Interface - интерфейс памяти

Параметры:
* stappler::StringView

Возвращает:
* typename Interface::StringType

# ::stappler::platform::toupper<typename>(stappler::StringView)

## BRIEF

Конвертирует строку в верхний регистр

## CONTENT

Конвертирует строку в верхний регистр. Использует функции платформы. Использует правила юникода.

Параметры шаблона:
* typename Interface - интерфейс памяти

Параметры:
* stappler::StringView

Возвращает:
* typename Interface::StringType

# ::stappler::platform::totitle<typename>(stappler::StringView)

## BRIEF

Конвертирует первые символы слов в заглавные

## CONTENT

Конвертирует первые символы слов в заглавные. Использует функции платформы. Использует правила юникода.

Параметры шаблона:
* typename Interface - интерфейс памяти

Параметры:
* stappler::StringView

Возвращает:
* typename Interface::StringType

# ::stappler::platform::tolower<typename>(stappler::WideStringView)

## BRIEF

Конвертирует строку в нижний регистр

## CONTENT

Конвертирует строку в нижний регистр. Использует функции платформы. Использует правила юникода.

Параметры шаблона:
* typename Interface - интерфейс памяти

Параметры:
* stappler::WideStringView

Возвращает:
* typename Interface::WideStringType


# ::stappler::platform::toupper<typename>(stappler::WideStringView)

## BRIEF

Конвертирует строку в верхний регистр

## CONTENT

Конвертирует строку в верхний регистр. Использует функции платформы. Использует правила юникода.

Параметры шаблона:
* typename Interface - интерфейс памяти

Параметры:
* stappler::WideStringView

Возвращает:
* typename Interface::WideStringType

# ::stappler::platform::totitle<typename>(stappler::WideStringView)

## BRIEF

Конвертирует первые символы слов в заглавные

## CONTENT

Конвертирует первые символы слов в заглавные. Использует функции платформы. Использует правила юникода.

Параметры шаблона:
* typename Interface - интерфейс памяти

Параметры:
* stappler::WideStringView

Возвращает:
* typename Interface::WideStringType

# ::stappler::platform::compare_u(stappler::StringView,stappler::StringView)

## BRIEF

Сравнивает строки в зависимости от регистра с учётом юникода

## CONTENT

Сравнивает строки в зависимости от регистра с учётом юникода

Параметры:
* stappler::StringView
* stappler::StringView

Возвращает:
* int - результат лексикографического сравнения

# ::stappler::platform::compare_u(stappler::WideStringView,stappler::WideStringView)

## BRIEF

Сравнивает строки в зависимости от регистра с учётом юникода

## CONTENT

Сравнивает строки в зависимости от регистра с учётом юникода

Параметры:
* stappler::WideStringView
* stappler::WideStringView

Возвращает:
* int - результат лексикографического сравнения

# ::stappler::platform::caseCompare_u(stappler::StringView,stappler::StringView)

## BRIEF

Сравнивает строки вне зависимости от регистра в С локали

## CONTENT

Сравнивает строки вне зависимости от регистра в С локали

Параметры:
* stappler::StringView
* stappler::StringView

Возвращает:
* int - результат лексикографического сравнения

# ::stappler::platform::caseCompare_u(stappler::WideStringView,stappler::WideStringView)

## BRIEF

Сравнивает строки вне зависимости от регистра с учётом юникода

## CONTENT

Сравнивает строки вне зависимости от регистра с учётом юникода

Параметры:
* stappler::WideStringView
* stappler::WideStringView

Возвращает:
* int - результат лексикографического сравнения

# ::stappler::operator==<typename>(StringViewBase<C> const&,StringViewBase<C> const&)

## BRIEF

Сравнивает две строки

## CONTENT

Сравнивает две строки

Параметры шаблона:
* typename C

Параметры:
* StringViewBase<C> const&
* StringViewBase<C> const&

Возвращает:
* bool

# ::stappler::operator!=<typename>(StringViewBase<C> const&,StringViewBase<C> const&)

## BRIEF

Сравнивает две строки

## CONTENT

Сравнивает две строки

Параметры шаблона:
* typename C

Параметры:
* StringViewBase<C> const&
* StringViewBase<C> const&

Возвращает:
* bool

# ::stappler::operator==<typename>(memory::StandartInterface::BasicStringType<C> const&,StringViewBase<C> const&)

## BRIEF

Сравнивает две строки

## CONTENT

Сравнивает две строки

Параметры шаблона:
* typename C

Параметры:
* memory::StandartInterface::BasicStringType<C> const&
* StringViewBase<C> const&

Возвращает:
* bool

# ::stappler::operator!=<typename>(memory::StandartInterface::BasicStringType<C> const&,StringViewBase<C> const&)

## BRIEF

Сравнивает две строки

## CONTENT

Сравнивает две строки

Параметры шаблона:
* typename C

Параметры:
* memory::StandartInterface::BasicStringType<C> const&
* StringViewBase<C> const&

Возвращает:
* bool

# ::stappler::operator><typename>(memory::StandartInterface::BasicStringType<C> const&,StringViewBase<C> const&)

## BRIEF

Сравнивает две строки

## CONTENT

Сравнивает две строки

Параметры шаблона:
* typename C

Параметры:
* memory::StandartInterface::BasicStringType<C> const&
* StringViewBase<C> const&

Возвращает:
* bool

# ::stappler::operator>=<typename>(memory::StandartInterface::BasicStringType<C> const&,StringViewBase<C> const&)

## BRIEF

Сравнивает две строки

## CONTENT

Сравнивает две строки

Параметры шаблона:
* typename C

Параметры:
* memory::StandartInterface::BasicStringType<C> const&
* StringViewBase<C> const&

Возвращает:
* bool

# ::stappler::operator<<typename>(memory::StandartInterface::BasicStringType<C> const&,StringViewBase<C> const&)

## BRIEF

Сравнивает две строки

## CONTENT

Сравнивает две строки

Параметры шаблона:
* typename C

Параметры:
* memory::StandartInterface::BasicStringType<C> const&
* StringViewBase<C> const&

Возвращает:
* bool

# ::stappler::operator<=<typename>(memory::StandartInterface::BasicStringType<C> const&,StringViewBase<C> const&)

## BRIEF

Сравнивает две строки

## CONTENT

Сравнивает две строки

Параметры шаблона:
* typename C

Параметры:
* memory::StandartInterface::BasicStringType<C> const&
* StringViewBase<C> const&

Возвращает:
* bool

# ::stappler::operator==<typename>(StringViewBase<C> const&,memory::StandartInterface::BasicStringType<C> const&)

## BRIEF

Сравнивает две строки

## CONTENT

Сравнивает две строки

Параметры шаблона:
* typename C

Параметры:
* StringViewBase<C> const&
* memory::StandartInterface::BasicStringType<C> const&

Возвращает:
* bool

# ::stappler::operator!=<typename>(StringViewBase<C> const&,memory::StandartInterface::BasicStringType<C> const&)

## BRIEF

Сравнивает две строки

## CONTENT

Сравнивает две строки

Параметры шаблона:
* typename C

Параметры:
* StringViewBase<C> const&
* memory::StandartInterface::BasicStringType<C> const&

Возвращает:
* bool

# ::stappler::operator><typename>(StringViewBase<C> const&,memory::StandartInterface::BasicStringType<C> const&)

## BRIEF

Сравнивает две строки

## CONTENT

Сравнивает две строки

Параметры шаблона:
* typename C

Параметры:
* StringViewBase<C> const&
* memory::StandartInterface::BasicStringType<C> const&

Возвращает:
* bool

# ::stappler::operator>=<typename>(StringViewBase<C> const&,memory::StandartInterface::BasicStringType<C> const&)

## BRIEF

Сравнивает две строки

## CONTENT

Сравнивает две строки

Параметры шаблона:
* typename C

Параметры:
* StringViewBase<C> const&
* memory::StandartInterface::BasicStringType<C> const&

Возвращает:
* bool

# ::stappler::operator<<typename>(StringViewBase<C> const&,memory::StandartInterface::BasicStringType<C> const&)

## BRIEF

Сравнивает две строки

## CONTENT

Сравнивает две строки

Параметры шаблона:
* typename C

Параметры:
* StringViewBase<C> const&
* memory::StandartInterface::BasicStringType<C> const&

Возвращает:
* bool

# ::stappler::operator<=<typename>(StringViewBase<C> const&,memory::StandartInterface::BasicStringType<C> const&)

## BRIEF

Сравнивает две строки

## CONTENT

Сравнивает две строки

Параметры шаблона:
* typename C

Параметры:
* StringViewBase<C> const&
* memory::StandartInterface::BasicStringType<C> const&

Возвращает:
* bool

# ::stappler::operator==<typename>(memory::PoolInterface::BasicStringType<C> const&,StringViewBase<C> const&)

## BRIEF

Сравнивает две строки

## CONTENT

Сравнивает две строки

Параметры шаблона:
* typename C

Параметры:
* memory::PoolInterface::BasicStringType<C> const&
* StringViewBase<C> const&

Возвращает:
* bool

# ::stappler::operator!=<typename>(memory::PoolInterface::BasicStringType<C> const&,StringViewBase<C> const&)

## BRIEF

Сравнивает две строки

## CONTENT

Сравнивает две строки

Параметры шаблона:
* typename C

Параметры:
* memory::PoolInterface::BasicStringType<C> const&
* StringViewBase<C> const&

Возвращает:
* bool

# ::stappler::operator><typename>(memory::PoolInterface::BasicStringType<C> const&,StringViewBase<C> const&)

## BRIEF

Сравнивает две строки

## CONTENT

Сравнивает две строки

Параметры шаблона:
* typename C

Параметры:
* memory::PoolInterface::BasicStringType<C> const&
* StringViewBase<C> const&

Возвращает:
* bool

# ::stappler::operator>=<typename>(memory::PoolInterface::BasicStringType<C> const&,StringViewBase<C> const&)

## BRIEF

Сравнивает две строки

## CONTENT

Сравнивает две строки

Параметры шаблона:
* typename C

Параметры:
* memory::PoolInterface::BasicStringType<C> const&
* StringViewBase<C> const&

Возвращает:
* bool

# ::stappler::operator<<typename>(memory::PoolInterface::BasicStringType<C> const&,StringViewBase<C> const&)

## BRIEF

Сравнивает две строки

## CONTENT

Сравнивает две строки

Параметры шаблона:
* typename C

Параметры:
* memory::PoolInterface::BasicStringType<C> const&
* StringViewBase<C> const&

Возвращает:
* bool

# ::stappler::operator<=<typename>(memory::PoolInterface::BasicStringType<C> const&,StringViewBase<C> const&)

## BRIEF

Сравнивает две строки

## CONTENT

Сравнивает две строки

Параметры шаблона:
* typename C

Параметры:
* memory::PoolInterface::BasicStringType<C> const&
* StringViewBase<C> const&

Возвращает:
* bool

# ::stappler::operator==<typename>(StringViewBase<C> const&,memory::PoolInterface::BasicStringType<C> const&)

## BRIEF

Сравнивает две строки

## CONTENT

Сравнивает две строки

Параметры шаблона:
* typename C

Параметры:
* StringViewBase<C> const&
* memory::PoolInterface::BasicStringType<C> const&

Возвращает:
* bool

# ::stappler::operator!=<typename>(StringViewBase<C> const&,memory::PoolInterface::BasicStringType<C> const&)

## BRIEF

Сравнивает две строки

## CONTENT

Сравнивает две строки

Параметры шаблона:
* typename C

Параметры:
* StringViewBase<C> const&
* memory::PoolInterface::BasicStringType<C> const&

Возвращает:
* bool

# ::stappler::operator><typename>(StringViewBase<C> const&,memory::PoolInterface::BasicStringType<C> const&)

## BRIEF

Сравнивает две строки

## CONTENT

Сравнивает две строки

Параметры шаблона:
* typename C

Параметры:
* StringViewBase<C> const&
* memory::PoolInterface::BasicStringType<C> const&

Возвращает:
* bool

# ::stappler::operator>=<typename>(StringViewBase<C> const&,memory::PoolInterface::BasicStringType<C> const&)

## BRIEF

Сравнивает две строки

## CONTENT

Сравнивает две строки

Параметры шаблона:
* typename C

Параметры:
* StringViewBase<C> const&
* memory::PoolInterface::BasicStringType<C> const&

Возвращает:
* bool

# ::stappler::operator<<typename>(StringViewBase<C> const&,memory::PoolInterface::BasicStringType<C> const&)

## BRIEF

Сравнивает две строки

## CONTENT

Сравнивает две строки

Параметры шаблона:
* typename C

Параметры:
* StringViewBase<C> const&
* memory::PoolInterface::BasicStringType<C> const&

Возвращает:
* bool

# ::stappler::operator<=<typename>(StringViewBase<C> const&,memory::PoolInterface::BasicStringType<C> const&)

## BRIEF

Сравнивает две строки

## CONTENT

Сравнивает две строки

Параметры шаблона:
* typename C

Параметры:
* StringViewBase<C> const&
* memory::PoolInterface::BasicStringType<C> const&

Возвращает:
* bool

# ::stappler::operator==(stappler::StringViewUtf8 const&,stappler::StringViewUtf8 const&)

## BRIEF

Сравнивает две строки

## CONTENT

Сравнивает две строки

Параметры:
* stappler::StringViewUtf8 const&
* stappler::StringViewUtf8 const&

Возвращает:
* bool

# ::stappler::operator!=(stappler::StringViewUtf8 const&,stappler::StringViewUtf8 const&)

## BRIEF

Сравнивает две строки

## CONTENT

Сравнивает две строки

Параметры:
* stappler::StringViewUtf8 const&
* stappler::StringViewUtf8 const&

Возвращает:
* bool

# ::stappler::operator>(stappler::StringViewUtf8 const&,stappler::StringViewUtf8 const&)

## BRIEF

Сравнивает две строки

## CONTENT

Сравнивает две строки

Параметры:
* stappler::StringViewUtf8 const&
* stappler::StringViewUtf8 const&

Возвращает:
* bool

# ::stappler::operator>=(stappler::StringViewUtf8 const&,stappler::StringViewUtf8 const&)

## BRIEF

Сравнивает две строки

## CONTENT

Сравнивает две строки

Параметры:
* stappler::StringViewUtf8 const&
* stappler::StringViewUtf8 const&

Возвращает:
* bool

# ::stappler::operator<(stappler::StringViewUtf8 const&,stappler::StringViewUtf8 const&)

## BRIEF

Сравнивает две строки

## CONTENT

Сравнивает две строки

Параметры:
* stappler::StringViewUtf8 const&
* stappler::StringViewUtf8 const&

Возвращает:
* bool

# ::stappler::operator<=(stappler::StringViewUtf8 const&,stappler::StringViewUtf8 const&)

## BRIEF

Сравнивает две строки

## CONTENT

Сравнивает две строки

Параметры:
* stappler::StringViewUtf8 const&
* stappler::StringViewUtf8 const&

Возвращает:
* bool

# ::stappler::operator==(memory::StandartInterface::BasicStringType<char> const&,stappler::StringViewUtf8 const&)

## BRIEF

Сравнивает две строки

## CONTENT

Сравнивает две строки

Параметры:
* memory::StandartInterface::BasicStringType<char> const&
* stappler::StringViewUtf8 const&

Возвращает:
* bool

# ::stappler::operator!=(memory::StandartInterface::BasicStringType<char> const&,stappler::StringViewUtf8 const&)

## BRIEF

Сравнивает две строки

## CONTENT

Сравнивает две строки

Параметры:
* memory::StandartInterface::BasicStringType<char> const&
* stappler::StringViewUtf8 const&

Возвращает:
* bool

# ::stappler::operator>(memory::StandartInterface::BasicStringType<char> const&,stappler::StringViewUtf8 const&)

## BRIEF

Сравнивает две строки

## CONTENT

Сравнивает две строки

Параметры:
* memory::StandartInterface::BasicStringType<char> const&
* stappler::StringViewUtf8 const&

Возвращает:
* bool

# ::stappler::operator>=(memory::StandartInterface::BasicStringType<char> const&,stappler::StringViewUtf8 const&)

## BRIEF

Сравнивает две строки

## CONTENT

Сравнивает две строки

Параметры:
* memory::StandartInterface::BasicStringType<char> const&
* stappler::StringViewUtf8 const&

Возвращает:
* bool

# ::stappler::operator<(memory::StandartInterface::BasicStringType<char> const&,stappler::StringViewUtf8 const&)

## BRIEF

Сравнивает две строки

## CONTENT

Сравнивает две строки

Параметры:
* memory::StandartInterface::BasicStringType<char> const&
* stappler::StringViewUtf8 const&

Возвращает:
* bool

# ::stappler::operator<=(memory::StandartInterface::BasicStringType<char> const&,stappler::StringViewUtf8 const&)

## BRIEF

Сравнивает две строки

## CONTENT

Сравнивает две строки

Параметры:
* memory::StandartInterface::BasicStringType<char> const&
* stappler::StringViewUtf8 const&

Возвращает:
* bool

# ::stappler::operator==(stappler::StringViewUtf8 const&,memory::StandartInterface::BasicStringType<char> const&)

## BRIEF

Сравнивает две строки

## CONTENT

Сравнивает две строки

Параметры:
* stappler::StringViewUtf8 const&
* memory::StandartInterface::BasicStringType<char> const&

Возвращает:
* bool

# ::stappler::operator!=(stappler::StringViewUtf8 const&,memory::StandartInterface::BasicStringType<char> const&)

## BRIEF

Сравнивает две строки

## CONTENT

Сравнивает две строки

Параметры:
* stappler::StringViewUtf8 const&
* memory::StandartInterface::BasicStringType<char> const&

Возвращает:
* bool

# ::stappler::operator>(stappler::StringViewUtf8 const&,memory::StandartInterface::BasicStringType<char> const&)

## BRIEF

Сравнивает две строки

## CONTENT

Сравнивает две строки

Параметры:
* stappler::StringViewUtf8 const&
* memory::StandartInterface::BasicStringType<char> const&

Возвращает:
* bool

# ::stappler::operator>=(stappler::StringViewUtf8 const&,memory::StandartInterface::BasicStringType<char> const&)

## BRIEF

Сравнивает две строки

## CONTENT

Сравнивает две строки

Параметры:
* stappler::StringViewUtf8 const&
* memory::StandartInterface::BasicStringType<char> const&

Возвращает:
* bool

# ::stappler::operator<(stappler::StringViewUtf8 const&,memory::StandartInterface::BasicStringType<char> const&)

## BRIEF

Сравнивает две строки

## CONTENT

Сравнивает две строки

Параметры:
* stappler::StringViewUtf8 const&
* memory::StandartInterface::BasicStringType<char> const&

Возвращает:
* bool

# ::stappler::operator<=(stappler::StringViewUtf8 const&,memory::StandartInterface::BasicStringType<char> const&)

## BRIEF

Сравнивает две строки

## CONTENT

Сравнивает две строки

Параметры:
* stappler::StringViewUtf8 const&
* memory::StandartInterface::BasicStringType<char> const&

Возвращает:
* bool

# ::stappler::operator==(memory::PoolInterface::BasicStringType<char> const&,stappler::StringViewUtf8 const&)

## BRIEF

Сравнивает две строки

## CONTENT

Сравнивает две строки

Параметры:
* memory::PoolInterface::BasicStringType<char> const&
* stappler::StringViewUtf8 const&

Возвращает:
* bool

# ::stappler::operator!=(memory::PoolInterface::BasicStringType<char> const&,stappler::StringViewUtf8 const&)

## BRIEF

Сравнивает две строки

## CONTENT

Сравнивает две строки

Параметры:
* memory::PoolInterface::BasicStringType<char> const&
* stappler::StringViewUtf8 const&

Возвращает:
* bool

# ::stappler::operator>(memory::PoolInterface::BasicStringType<char> const&,stappler::StringViewUtf8 const&)

## BRIEF

Сравнивает две строки

## CONTENT

Сравнивает две строки

Параметры:
* memory::PoolInterface::BasicStringType<char> const&
* stappler::StringViewUtf8 const&

Возвращает:
* bool

# ::stappler::operator>=(memory::PoolInterface::BasicStringType<char> const&,stappler::StringViewUtf8 const&)

## BRIEF

Сравнивает две строки

## CONTENT

Сравнивает две строки

Параметры:
* memory::PoolInterface::BasicStringType<char> const&
* stappler::StringViewUtf8 const&

Возвращает:
* bool

# ::stappler::operator<(memory::PoolInterface::BasicStringType<char> const&,stappler::StringViewUtf8 const&)

## BRIEF

Сравнивает две строки

## CONTENT

Сравнивает две строки

Параметры:
* memory::PoolInterface::BasicStringType<char> const&
* stappler::StringViewUtf8 const&

Возвращает:
* bool

# ::stappler::operator<=(memory::PoolInterface::BasicStringType<char> const&,stappler::StringViewUtf8 const&)

## BRIEF

Сравнивает две строки

## CONTENT

Сравнивает две строки

Параметры:
* memory::PoolInterface::BasicStringType<char> const&
* stappler::StringViewUtf8 const&

Возвращает:
* bool

# ::stappler::operator==(stappler::StringViewUtf8 const&,memory::PoolInterface::BasicStringType<char> const&)

## BRIEF

Сравнивает две строки

## CONTENT

Сравнивает две строки

Параметры:
* stappler::StringViewUtf8 const&
* memory::PoolInterface::BasicStringType<char> const&

Возвращает:
* bool

# ::stappler::operator!=(stappler::StringViewUtf8 const&,memory::PoolInterface::BasicStringType<char> const&)

## BRIEF

Сравнивает две строки

## CONTENT

Сравнивает две строки

Параметры:
* stappler::StringViewUtf8 const&
* memory::PoolInterface::BasicStringType<char> const&

Возвращает:
* bool

# ::stappler::operator>(stappler::StringViewUtf8 const&,memory::PoolInterface::BasicStringType<char> const&)

## BRIEF

Сравнивает две строки

## CONTENT

Сравнивает две строки

Параметры:
* stappler::StringViewUtf8 const&
* memory::PoolInterface::BasicStringType<char> const&

Возвращает:
* bool

# ::stappler::operator>=(stappler::StringViewUtf8 const&,memory::PoolInterface::BasicStringType<char> const&)

## BRIEF

Сравнивает две строки

## CONTENT

Сравнивает две строки

Параметры:
* stappler::StringViewUtf8 const&
* memory::PoolInterface::BasicStringType<char> const&

Возвращает:
* bool

# ::stappler::operator<(stappler::StringViewUtf8 const&,memory::PoolInterface::BasicStringType<char> const&)

## BRIEF

Сравнивает две строки

## CONTENT

Сравнивает две строки

Параметры:
* stappler::StringViewUtf8 const&
* memory::PoolInterface::BasicStringType<char> const&

Возвращает:
* bool

# ::stappler::operator<=(stappler::StringViewUtf8 const&,memory::PoolInterface::BasicStringType<char> const&)

## BRIEF

Сравнивает две строки

## CONTENT

Сравнивает две строки

Параметры:
* stappler::StringViewUtf8 const&
* memory::PoolInterface::BasicStringType<char> const&

Возвращает:
* bool

# ::stappler::operator==<typename>(StringViewBase<C> const&,C const*)

## BRIEF

Сравнивает две строки

## CONTENT

Сравнивает две строки

Параметры шаблона:
* typename C

Параметры:
* StringViewBase<C> const&
* C const*

Возвращает:
* bool

# ::stappler::operator!=<typename>(StringViewBase<C> const&,C const*)

## BRIEF

Сравнивает две строки

## CONTENT

Сравнивает две строки

Параметры шаблона:
* typename C

Параметры:
* StringViewBase<C> const&
* C const*

Возвращает:
* bool

# ::stappler::operator==<typename>(C const*,StringViewBase<C> const&)

## BRIEF

Сравнивает две строки

## CONTENT

Сравнивает две строки

Параметры шаблона:
* typename C

Параметры:
* C const*
* StringViewBase<C> const&

Возвращает:
* bool

# ::stappler::operator!=<typename>(C const*,StringViewBase<C> const&)

## BRIEF

Сравнивает две строки

## CONTENT

Сравнивает две строки

Параметры шаблона:
* typename C

Параметры:
* C const*
* StringViewBase<C> const&

Возвращает:
* bool

# ::stappler::operator==(stappler::StringViewUtf8 const&,char const*)

## BRIEF

Сравнивает две строки

## CONTENT

Сравнивает две строки

Параметры:
* stappler::StringViewUtf8 const&
* char const*

Возвращает:
* bool

# ::stappler::operator!=(stappler::StringViewUtf8 const&,char const*)

## BRIEF

Сравнивает две строки

## CONTENT

Сравнивает две строки

Параметры:
* stappler::StringViewUtf8 const&
* char const*

Возвращает:
* bool

# ::stappler::operator==(char const*,stappler::StringViewUtf8 const&)

## BRIEF

Сравнивает две строки

## CONTENT

Сравнивает две строки

Параметры:
* char const*
* stappler::StringViewUtf8 const&

Возвращает:
* bool

# ::stappler::operator!=(char const*,stappler::StringViewUtf8 const&)

## BRIEF

Сравнивает две строки

## CONTENT

Сравнивает две строки

Параметры:
* char const*
* stappler::StringViewUtf8 const&

Возвращает:
* bool

# ::stappler::StringViewBase<typename>::ptolower_c(memory::pool_t*) const

## BRIEF

Дублирует строку из пула, приводя её к нижнему регистру в С локали

## CONTENT

Дублирует строку из пула, приводя её к нижнему регистру в С локали

Параметры:
* memory::pool_t*

Возвращает:
* Self

# ::stappler::StringViewBase<typename>::ptoupper_c(memory::pool_t*) const

## BRIEF

Дублирует строку из пула, приводя её к верхнему регистру в С локали

## CONTENT

Дублирует строку из пула, приводя её к верхнему регистру в С локали

Параметры:
* memory::pool_t*

Возвращает:
* Self

# ::stappler::StringViewUtf8::foreach<typename>(Callback const&) const

## BRIEF

Выполняет функтор для каждого символа юникода

## CONTENT

Выполняет функтор для каждого символа юникода в строке. Символ имеет тип char32_t.

Параметры шаблона:
* typename Callback

Параметры:
* Callback const&

# ::stappler::string::compare_c<typename,typename,typename>(L const&,R const&)

## BRIEF

Сравнивает строки в С локали

## CONTENT

Сравнивает строки в С локали

Параметры шаблона:
* typename L
* typename R
* typename CharType

Параметры:
* L const&
* R const&

Возвращает:
* int - результат лексикографического сравнения

# ::stappler::string::compare_u<typename,typename,typename>(L const&,R const&)

## BRIEF

Сравнивает строки с учётом юникода

## CONTENT

Сравнивает строки с учётом юникода

Параметры шаблона:
* typename L
* typename R
* typename CharType

Параметры:
* L const&
* R const&

Возвращает:
* int - результат лексикографического сравнения

# ::stappler::string::_strncasecmp(char const*,char const*,size_t)

## BRIEF

Сравнивает 8-битные строки независимо от регистра посимвольно

## CONTENT

Сравнивает 8-битные строки независимо от регистра посимвольно

Параметры:
* char const*
* char const*
* size_t

Возвращает:
* int - результат лексикографического сравнения

# ::stappler::string::_strncasecmp(char16_t const*,char16_t const*,size_t)

## BRIEF

Сравнивает 16-битные строки независимо от регистра посимвольно

## CONTENT

Сравнивает 16-битные строки независимо от регистра посимвольно

Параметры:
* char16_t const*
* char16_t const*
* size_t

Возвращает:
* int - результат лексикографического сравнения

# ::stappler::string::caseCompare_c<typename,typename,typename>(L const&,R const&)

## BRIEF

Сравнивает две строки независимго от регистра в С локали

## CONTENT

Сравнивает две строки независимго от регистра в С локали

Параметры шаблона:
* typename L
* typename R
* typename CharType

Параметры:
* L const&
* R const&

Возвращает:
* int - результат лексикографического сравнения

# ::stappler::string::caseCompare_u<typename,typename,typename>(L const&,R const&)

## BRIEF

Сравнивает две строки независимго от регистра с учётом юникода

## CONTENT

Сравнивает две строки независимго от регистра с учётом юникода

Параметры шаблона:
* typename L
* typename R
* typename CharType

Параметры:
* L const&
* R const&

Возвращает:
* int - результат лексикографического сравнения
