Title: SPFontFormatter.h


# CORE_FONT_SPFONTFORMATTER_H_

## BRIEF

Заголовок простого интерфейса для размещения символов в документе

## CONTENT

Заголовок простого интерфейса для размещения символов в документе. Простой интерфейс использует минимальный набор правил, не реализуя полноценное размещение. Замены символов, требуемые для полноценного отображения юникоа, не реализованы. Укладка работает только слева-направо сверху-вниз.


# ::stappler::font::Formatter

## BRIEF

Класс для размещения символов в документе

## CONTENT

Класс для размещения символов в документе

Базовые классы:
* InterfaceObject<memory::StandartInterface>


# ::stappler::font::Formatter::LinePosition

## BRIEF

Структура для размещения строки

## CONTENT

Доступ: public

Структура для размещения строки

# ::stappler::font::Formatter::LinePosition::offset

## BRIEF

Вертикальное смещение строки

## CONTENT

Вертикальное смещение строки

Тип: uint16_t


# ::stappler::font::Formatter::LinePosition::width

## BRIEF

Ширина строки

## CONTENT

Ширина строки

Тип: uint16_t


# ::stappler::font::Formatter::LinePositionCallback

## BRIEF

Функция для реализации динамического размера строки

## CONTENT

Доступ: public

Функция для реализации динамического размера строки. Используется для реализации обтекания и схожих эффектов. Получает вертикальное смещение строки и текущую ширину, возвращает горизонтальное смещение новую ширину строки.

# ::stappler::font::Formatter::FontCallback

## BRIEF

Функция получения набора шрифтов по заданным параметрам

## CONTENT

Доступ: public

Функция получения набора шрифтов по заданным параметрам

# ::stappler::font::Formatter::ContentRequest

## BRIEF

Тип запроса на укладку шрифта

## CONTENT

Доступ: public

Тип запроса на укладку шрифта

Значения:
* Normal - стандартный решим
* Minimize - минимизировать горизонтальный размер
* Maximize - максимизировать горизонтальный размер


# ::stappler::font::Formatter::Formatter()

## BRIEF

Конструктор

## CONTENT

Доступ: public

Конструктор

# ::stappler::font::Formatter::Formatter(stappler::font::Formatter::FontCallback&&,TextLayoutData<memory::StandartInterface>*)

## BRIEF

Конструктор из функции получения шрифта и указателя на данные для записи результата

## CONTENT

Доступ: public

Конструктор из функции получения шрифта и указателя на данные для записи результата

Параметры:
* stappler::font::Formatter::FontCallback&& - функция получения шрифта
* TextLayoutData<memory::StandartInterface>* - указатель на данные для записи результата (должны существовать всё время работы объекта)


# ::stappler::font::Formatter::Formatter(stappler::font::Formatter::FontCallback&&,TextLayoutData<memory::PoolInterface>*)

## BRIEF

Конструктор из функции получения шрифта и указателя на данные для записи результата

## CONTENT

Доступ: public

Конструктор из функции получения шрифта и указателя на данные для записи результата

Параметры:
* stappler::font::Formatter::FontCallback&& - функция получения шрифта
* TextLayoutData<memory::StandartInterface>* - указатель на данные для записи результата (должны существовать всё время работы объекта)


# ::stappler::font::Formatter::setFontCallback(stappler::font::Formatter::FontCallback&&)

## BRIEF

Устанавливает функцию получения шрифта

## CONTENT

Доступ: public

Устанавливает функцию получения шрифта

Параметры:
* stappler::font::Formatter::FontCallback&&


# ::stappler::font::Formatter::reset(TextLayoutData<memory::StandartInterface>*)

## BRIEF

Заменяет указатель для записи результата, сбрасывает текущее состояние

## CONTENT

Доступ: public

Заменяет указатель для записи результата, сбрасывает текущее состояние

Параметры:
* TextLayoutData<memory::StandartInterface>*


# ::stappler::font::Formatter::reset(TextLayoutData<memory::PoolInterface>*)

## BRIEF

Заменяет указатель для записи результата, сбрасывает текущее состояние

## CONTENT

Доступ: public

Заменяет указатель для записи результата, сбрасывает текущее состояние

Параметры:
* TextLayoutData<memory::PoolInterface>*


# ::stappler::font::Formatter::reset()

## BRIEF

Сбрасывает текущее состояние

## CONTENT

Доступ: public

Сбрасывает текущее состояние

# ::stappler::font::Formatter::finalize()

## BRIEF

Завершает запись укладки

## CONTENT

Доступ: public

Завершает запись укладки

# ::stappler::font::Formatter::setLinePositionCallback(stappler::font::Formatter::LinePositionCallback const&)

## BRIEF

Устанавливает функцию позиционирования строк

## CONTENT

Доступ: public

Устанавливает функцию позиционирования строк

Параметры:
* stappler::font::Formatter::LinePositionCallback const&


# ::stappler::font::Formatter::setWidth(uint16_t)

## BRIEF

Устанавливает максимальную ширину строки

## CONTENT

Доступ: public

Устанавливает максимальную ширину строки. При достижении этого предела символы будут перенесены на следующую строку.

Параметры:
* uint16_t


# ::stappler::font::Formatter::setTextAlignment(stappler::font::TextAlign)

## BRIEF

Устанавливает выравнивание текста

## CONTENT

Доступ: public

Устанавливает выравнивание текста

Параметры:
* stappler::font::TextAlign


# ::stappler::font::Formatter::setLineHeightAbsolute(uint16_t)

## BRIEF

Устанавливает высоту строки в абсолютных пиксельных значениях

## CONTENT

Доступ: public

Устанавливает высоту строки в абсолютных пиксельных значениях

Параметры:
* uint16_t


# ::stappler::font::Formatter::setLineHeightRelative(float)

## BRIEF

Устанавливает высоту строки как относительную

## CONTENT

Доступ: public

Устанавливает высоту строки как относительную по отношению к высоте текущего шрифта

Параметры:
* float


# ::stappler::font::Formatter::setMaxWidth(uint16_t)

## BRIEF

Устанавливат максимальную ширину блока

## CONTENT

Доступ: public

Устанавливат максимальную ширину блока. Символы за пределами ширины будут обрезаны. Отключает автоматический перенос строк.

Параметры:
* uint16_t


# ::stappler::font::Formatter::setMaxLines(size_t)

## BRIEF

Устанавливает максимальное число строк

## CONTENT

Доступ: public

Устанавливает максимальное число строк. Символы не размещаются свыше этого предела.

Параметры:
* size_t


# ::stappler::font::Formatter::setOpticalAlignment(bool)

## BRIEF

Включает и выключает оптическое выравнивание

## CONTENT

Доступ: public

Включает и выключает оптическое выравнивание. Оптическое выравнивание касается знаков препинания и числовых маркеров ("свисающая" пунктуация). В этом режиме укладка символов допускает вынос символов за границы ширины и перед началом блока.

Параметры:
* bool


# ::stappler::font::Formatter::setEmplaceAllChars(bool)

## BRIEF

Заставляет укладчик добавлять в результат все прочитанные символы, даже если они не требуются для отрисовки.

## CONTENT

Доступ: public

Заставляет укладчик добавлять в результат все прочитанные символы, даже если они не требуются для отрисовки.

Параметры:
* bool


# ::stappler::font::Formatter::setFillerChar(char16_t)

## BRIEF

Устанавливает символ, замещающий скрытые символы

## CONTENT

Доступ: public

Устанавливает символ, замещающий скрытые символы. Используется при превышении максимальной ширины и числа строк.

Параметры:
* char16_t


# ::stappler::font::Formatter::setHyphens(stappler::font::HyphenMap*)

## BRIEF

Устанавливает словарь для вычисления переносов в словах

## CONTENT

Доступ: public

Устанавливает словарь для вычисления переносов в словах

Параметры:
* stappler::font::HyphenMap*


# ::stappler::font::Formatter::setRequest(stappler::font::Formatter::ContentRequest)

## BRIEF

Устанавливает тип запроса на размещение по ширине

## CONTENT

Доступ: public

Устанавливает тип запроса на размещение по ширине

Параметры:
* stappler::font::Formatter::ContentRequest


# ::stappler::font::Formatter::begin(uint16_t,uint16_t)

## BRIEF

Начинает запись символов

## CONTENT

Доступ: public

Начинает запись символов

Параметры:
* uint16_t - начальный отступ параграфа
* uint16_t - начальный отступ по границе слова


# ::stappler::font::Formatter::read(stappler::font::FontParameters const&,stappler::font::TextParameters const&,stappler::WideStringView,uint16_t,uint16_t)

## BRIEF

Читает и размещает символы из строки

## CONTENT

Доступ: public

Читает и размещает символы из строки

Параметры:
* stappler::font::FontParameters const& - параметры размещения парарафа
* stappler::font::TextParameters const& - параметры размещения текста
* stappler::WideStringView - строка для размещения
* uint16_t - начальный отступ по границе слова
* uint16_t - конечный отступ по границе слова

Возвращает:
* bool - true если успешно

# ::stappler::font::Formatter::read(stappler::font::FontParameters const&,stappler::font::TextParameters const&,char16_t const*,size_t,uint16_t,uint16_t)

## BRIEF

Читает и размещает символы из строки

## CONTENT

Доступ: public

Читает и размещает символы из строки

Параметры:
* stappler::font::FontParameters const& - параметры размещения парарафа
* stappler::font::TextParameters const& - параметры размещения текста
* char16_t const* - строка для размещения
* size_t - число символов в строке
* uint16_t - начальный отступ по границе слова
* uint16_t - конечный отступ по границе слова

Возвращает:
* bool - true если успешно

# ::stappler::font::Formatter::read(stappler::font::FontParameters const&,stappler::font::TextParameters const&,uint16_t,uint16_t)

## BRIEF

Размещает слот под пользовательский символ

## CONTENT

Доступ: public

Размещает слот под пользовательский символ (для встраиваемых картинок)

Параметры:
* stappler::font::FontParameters const& - параметры размещения парарафа
* stappler::font::TextParameters const& - параметры размещения текста
* uint16_t - высота
* uint16_t - ширина

Возвращает:
* bool - true если успешно

# ::stappler::font::Formatter::getHeight() const

## BRIEF

Возвращает текущую высоту

## CONTENT

Доступ: public

Возвращает текущую высоту

Возвращает:
* uint16_t

# ::stappler::font::Formatter::getWidth() const

## BRIEF

Возвращает текущую ширину

## CONTENT

Доступ: public

Возвращает текущую ширину

Возвращает:
* uint16_t

# ::stappler::font::Formatter::getMaxLineX() const

## BRIEF

Возвращает максимальную длину строки

## CONTENT

Доступ: public

Возвращает максимальную длину строки

Возвращает:
* uint16_t

# ::stappler::font::Formatter::getLineHeight() const

## BRIEF

Возвращает текущую высоту строки

## CONTENT

Доступ: public

Возвращает текущую высоту строки

Возвращает:
* uint16_t

# ::stappler::font::Formatter::isSpecial(char16_t) const

## BRIEF

Проверяет, является ли символ специальным

## CONTENT

Доступ: protected

Проверяет, является ли символ специальным

Параметры:
* char16_t

Возвращает:
* bool

# ::stappler::font::Formatter::checkBullet(uint16_t,uint16_t) const

## BRIEF

Вычисляет оптическое смещение для маркера списка

## CONTENT

Доступ: protected

Вычисляет оптическое смещение для маркера списка

Параметры:
* uint16_t
* uint16_t

Возвращает:
* uint16_t

# ::stappler::font::Formatter::parseWhiteSpace(stappler::font::WhiteSpace)

## BRIEF

Реализует способ размещения пробелов

## CONTENT

Доступ: protected

Реализует способ размещения пробелов

Параметры:
* stappler::font::WhiteSpace


# ::stappler::font::Formatter::parseFontLineHeight(uint16_t)

## BRIEF

Обновляет высоту строки

## CONTENT

Доступ: protected

Обновляет высоту строки

Параметры:
* uint16_t


# ::stappler::font::Formatter::updatePosition(uint16_t&,uint16_t&)

## BRIEF

Смещает текущую позицию строки по требованию выравнивания

## CONTENT

Доступ: protected

Смещает текущую позицию строки по требованию выравнивания

Параметры:
* uint16_t&
* uint16_t&

Возвращает:
* bool

# ::stappler::font::Formatter::getAdvance(stappler::font::CharLayoutData const&) const

## BRIEF

Возвращает смещение следующего символа

## CONTENT

Доступ: protected

Возвращает смещение следующего символа

Параметры:
* stappler::font::CharLayoutData const&

Возвращает:
* uint16_t

# ::stappler::font::Formatter::getAdvance(uint16_t) const

## BRIEF

Возвращает смещение символа по его индексу в размещении

## CONTENT

Доступ: protected

Возвращает смещение символа по его индексу в размещении

Параметры:
* uint16_t

Возвращает:
* uint16_t

# ::stappler::font::Formatter::getAdvancePosition(stappler::font::CharLayoutData const&) const

## BRIEF

Возвращает позицию со смещением для символа

## CONTENT

Доступ: protected

Возвращает позицию со смещением для символа

Параметры:
* stappler::font::CharLayoutData const&

Возвращает:
* uint16_t

# ::stappler::font::Formatter::getAdvancePosition(uint16_t) const

## BRIEF

Возвращает позицию со смещением для символа по индексу

## CONTENT

Доступ: protected

Возвращает позицию со смещением для символа по индексу

Параметры:
* uint16_t

Возвращает:
* uint16_t

# ::stappler::font::Formatter::getLineAdvancePos(uint16_t)

## BRIEF

Возвращает позицию смещения символа для строки

## CONTENT

Доступ: protected

Возвращает позицию смещения символа для строки

Параметры:
* uint16_t

Возвращает:
* uint16_t

# ::stappler::font::Formatter::getOriginPosition(stappler::font::CharLayoutData const&) const

## BRIEF

Возвращает базовую позицию символа

## CONTENT

Доступ: protected

Возвращает базовую позицию символа

Параметры:
* stappler::font::CharLayoutData const&

Возвращает:
* uint16_t

# ::stappler::font::Formatter::getOriginPosition(uint16_t) const

## BRIEF

Возвращает базовую позицию символа по индексу

## CONTENT

Доступ: protected

Возвращает базовую позицию символа по индексу

Параметры:
* uint16_t

Возвращает:
* uint16_t

# ::stappler::font::Formatter::readWithRange(stappler::font::RangeLayoutData&&,stappler::font::TextParameters const&,char16_t const*,size_t,uint16_t,uint16_t)

## BRIEF

Читает диапазон символов

## CONTENT

Доступ: protected

Читает диапазон символов

Параметры:
* stappler::font::RangeLayoutData&& - данные диапазона
* stappler::font::TextParameters const& - данные для укладки текста
* char16_t const* - указатель на начало строки
* size_t - длина строки
* uint16_t - ссмещение границы начального символа
* uint16_t - ссмещение границы конечного символа

Возвращает:
* bool

# ::stappler::font::Formatter::readWithRange(stappler::font::RangeLayoutData&&,stappler::font::TextParameters const&,uint16_t,uint16_t)

## BRIEF

Размещает пользовательский символ

## CONTENT

Доступ: protected

Размещает пользовательский символ

Параметры:
* stappler::font::RangeLayoutData&& - данные диапазона
* stappler::font::TextParameters const& - данные для укладки текста
* uint16_t - ширина
* uint16_t - высота

Возвращает:
* bool

# ::stappler::font::Formatter::readChars(stappler::WideStringView&,Vector<uint8_t> const&)

## BRIEF

Читает и размещает символы из строки

## CONTENT

Доступ: protected

Читает и размещает символы из строки

Параметры:
* stappler::WideStringView&
* Vector<uint8_t> const& - данные для размещения переносов

Возвращает:
* bool

# ::stappler::font::Formatter::pushLineFiller(bool)

## BRIEF

Добавляет символ-заполнитель

## CONTENT

Доступ: protected

Добавляет символ-заполнитель

Параметры:
* bool


# ::stappler::font::Formatter::pushChar(char16_t)

## BRIEF

Добавляет символ

## CONTENT

Доступ: protected

Добавляет символ

Параметры:
* char16_t

Возвращает:
* bool

# ::stappler::font::Formatter::pushSpace(bool)

## BRIEF

Добавляет пробел

## CONTENT

Доступ: protected

Добавляет пробел

Параметры:
* bool - true если пробел допускает перенос строки

Возвращает:
* bool

# ::stappler::font::Formatter::pushTab()

## BRIEF

Добавляет табуляцию

## CONTENT

Доступ: protected

Добавляет табуляцию

Возвращает:
* bool

# ::stappler::font::Formatter::pushLine(uint16_t,uint16_t,bool)

## BRIEF

Добавляет новую строку

## CONTENT

Доступ: protected

Добавляет новую строку

Параметры:
* uint16_t - исходное смещение
* uint16_t - исходная ширина
* bool - принудительно выровнять по правилам выравнивания

Возвращает:
* bool

# ::stappler::font::Formatter::pushLine(bool)

## BRIEF

Добавляет новую стандартную строку

## CONTENT

Доступ: protected

Добавляет новую стандартную строку

Параметры:
* bool

Возвращает:
* bool

# ::stappler::font::Formatter::pushLineBreak()

## BRIEF

Добавляет перенос строки

## CONTENT

Доступ: protected

Добавляет перенос строки

Возвращает:
* bool

# ::stappler::font::Formatter::pushLineBreakChar()

## BRIEF

Добавляет перенос строки как символ

## CONTENT

Доступ: protected

Добавляет перенос строки как символ

Возвращает:
* bool

# ::stappler::font::Formatter::updateLineHeight(uint16_t,uint16_t)

## BRIEF

Обновляет размер строки согласно правилам и функтору

## CONTENT

Доступ: protected

Обновляет размер строки согласно правилам и функтору

Параметры:
* uint16_t
* uint16_t


# ::stappler::font::Formatter::Output

## BRIEF

Данные для записи результата

## CONTENT

Доступ: protected

Данные для записи результата

# ::stappler::font::Formatter::Output::width

## BRIEF

Ширина

## CONTENT

Ширина

Тип: uint16_t*


# ::stappler::font::Formatter::Output::height

## BRIEF

Высота

## CONTENT

Высота

Тип: uint16_t*


# ::stappler::font::Formatter::Output::maxAdvance

## BRIEF

Максимальная длина строки

## CONTENT

Максимальная длина строки

Тип: uint16_t*


# ::stappler::font::Formatter::Output::overflow

## BRIEF

Флаг переполнения

## CONTENT

Флаг переполнения

Тип: bool*


# ::stappler::font::Formatter::Output::ranges

## BRIEF

Диапазоны символов

## CONTENT

Диапазоны символов

Тип: VectorAdapter<stappler::font::RangeLayoutData>


# ::stappler::font::Formatter::Output::chars

## BRIEF

Данные символов

## CONTENT

Данные символов

Тип: VectorAdapter<stappler::font::CharLayoutData>


# ::stappler::font::Formatter::Output::lines

## BRIEF

Данные строк

## CONTENT

Данные строк

Тип: VectorAdapter<stappler::font::LineLayoutData>


# ::stappler::font::Formatter::Output::Output()

## BRIEF

Конструктор

## CONTENT

Конструктор

# ::stappler::font::Formatter::Output::Output(TextLayoutData<memory::StandartInterface>*)

## BRIEF

Конструктор из указателя на данные

## CONTENT

Конструктор из указателя на данные

Параметры:
* TextLayoutData<memory::StandartInterface>*


# ::stappler::font::Formatter::Output::Output(TextLayoutData<memory::PoolInterface>*)

## BRIEF

Конструктор из указателя на данные

## CONTENT

Конструктор из указателя на данные

Параметры:
* TextLayoutData<memory::PoolInterface>*


# ::stappler::font::Formatter::Output::operator=(stappler::font::Formatter::Output&&)

## BRIEF

Оператор перемещения

## CONTENT

Оператор перемещения

Параметры:
* stappler::font::Formatter::Output&&

Возвращает:
* stappler::font::Formatter::Output&

# ::stappler::font::Formatter::_hyphens

## BRIEF

Словарь переносов

## CONTENT

Доступ: protected

Словарь переносов

Тип: Rc<stappler::font::HyphenMap>


# ::stappler::font::Formatter::_primaryFontSet

## BRIEF

Основной текущий набор шрифтов

## CONTENT

Доступ: protected

Основной текущий набор шрифтов

Тип: Rc<stappler::font::FontFaceSet>


# ::stappler::font::Formatter::_output

## BRIEF

Цель для записи результата

## CONTENT

Доступ: protected

Цель для записи результата

Тип: stappler::font::Formatter::Output


# ::stappler::font::Formatter::_charPosition

## BRIEF

Позиция текущего символа

## CONTENT

Доступ: protected

Позиция текущего символа

Тип: size_t


# ::stappler::font::Formatter::_textStyle

## BRIEF

Текущий стиль текста

## CONTENT

Доступ: protected

Текущий стиль текста

Тип: stappler::font::TextParameters


# ::stappler::font::Formatter::preserveLineBreaks

## BRIEF

Флаг сохранения переноса строк

## CONTENT

Доступ: protected

Флаг сохранения переноса строк. Если не установлен - превращает в пробелы.

Тип: bool


# ::stappler::font::Formatter::collapseSpaces

## BRIEF

Флаг схлопывания пробелов

## CONTENT

Доступ: protected

Флаг схлопывания пробелов

Тип: bool


# ::stappler::font::Formatter::wordWrap

## BRIEF

Флаг переноса слов

## CONTENT

Доступ: protected

Флаг переноса слов

Тип: bool


# ::stappler::font::Formatter::opticalAlignment

## BRIEF

Флаг оптического выравнивания

## CONTENT

Доступ: protected

Флаг оптического выравнивания

Тип: bool


# ::stappler::font::Formatter::emplaceAllChars

## BRIEF

Флаг размещения всех символов

## CONTENT

Доступ: protected

Флаг размещения всех символов

Тип: bool


# ::stappler::font::Formatter::faceId

## BRIEF

Идентификатор текущего шрифта

## CONTENT

Доступ: protected

Идентификатор текущего шрифта

Тип: uint16_t


# ::stappler::font::Formatter::b

## BRIEF

Предыдущий символ

## CONTENT

Доступ: protected

Предыдущий символ

Тип: char16_t


# ::stappler::font::Formatter::c

## BRIEF

Текущий символ

## CONTENT

Доступ: protected

Текущий символ

Тип: char16_t


# ::stappler::font::Formatter::defaultWidth

## BRIEF

Стандартная текущая ширина строки

## CONTENT

Доступ: protected

Стандартная текущая ширина строки

Тип: uint16_t


# ::stappler::font::Formatter::width

## BRIEF

Максимальная блочная ширина

## CONTENT

Доступ: protected

Максимальная блочная ширина

Тип: uint16_t


# ::stappler::font::Formatter::lineOffset

## BRIEF

Смещение текущей строки

## CONTENT

Доступ: protected

Смещение текущей строки

Тип: uint16_t


# ::stappler::font::Formatter::lineX

## BRIEF

Вычисленное положение начала строки по X

## CONTENT

Доступ: protected

Вычисленное положение начала строки по X

Тип: int16_t


# ::stappler::font::Formatter::lineY

## BRIEF

Вычисленное положение начала строки по Y

## CONTENT

Доступ: protected

Вычисленное положение начала строки по Y

Тип: uint16_t


# ::stappler::font::Formatter::maxLineX

## BRIEF

Максимальная строковая ширина

## CONTENT

Доступ: protected

Максимальная строковая ширина

Тип: uint16_t


# ::stappler::font::Formatter::charNum

## BRIEF

Число прочитанных символов

## CONTENT

Доступ: protected

Число прочитанных символов

Тип: uint16_t


# ::stappler::font::Formatter::lineHeight

## BRIEF

Предустановленная высота строки

## CONTENT

Доступ: protected

Предустановленная высота строки

Тип: uint16_t


# ::stappler::font::Formatter::currentLineHeight

## BRIEF

Текущая высота строки

## CONTENT

Доступ: protected

Текущая высота строки

Тип: uint16_t


# ::stappler::font::Formatter::rangeLineHeight

## BRIEF

Высота строки из текущего диапазона

## CONTENT

Доступ: protected

Высота строки из текущего диапазона

Тип: uint16_t


# ::stappler::font::Formatter::lineHeightMod

## BRIEF

Относительная высота строки

## CONTENT

Доступ: protected

Относительная высота строки

Тип: float


# ::stappler::font::Formatter::lineHeightIsAbsolute

## BRIEF

Флаг, установлена ли абсолютная высота строки

## CONTENT

Доступ: protected

Флаг, установлена ли абсолютная высота строки

Тип: bool


# ::stappler::font::Formatter::firstInLine

## BRIEF

Индекс первого символа в текущей строке

## CONTENT

Доступ: protected

Индекс первого символа в текущей строке

Тип: uint16_t


# ::stappler::font::Formatter::wordWrapPos

## BRIEF

Текущая позиция переноса слова

## CONTENT

Доступ: protected

Текущая позиция переноса слова

Тип: uint16_t


# ::stappler::font::Formatter::bufferedSpace

## BRIEF

Флаг буферизованного пробела для схлопывания пробелов

## CONTENT

Доступ: protected

Флаг буферизованного пробела для схлопывания пробелов

Тип: bool


# ::stappler::font::Formatter::maxWidth

## BRIEF

Максимальная ширина

## CONTENT

Доступ: protected

Максимальная ширина

Тип: uint16_t


# ::stappler::font::Formatter::maxLines

## BRIEF

Максимальное число строк

## CONTENT

Доступ: protected

Максимальное число строк

Тип: size_t


# ::stappler::font::Formatter::_fillerChar

## BRIEF

Символ-заполнитель

## CONTENT

Доступ: protected

Символ-заполнитель

Тип: char16_t


# ::stappler::font::Formatter::alignment

## BRIEF

Текущее выравнивание

## CONTENT

Доступ: protected

Текущее выравнивание

Тип: stappler::font::TextAlign


# ::stappler::font::Formatter::request

## BRIEF

Тип укладки

## CONTENT

Доступ: protected

Тип укладки

Тип: stappler::font::Formatter::ContentRequest


# ::stappler::font::Formatter::fontCallback

## BRIEF

Функция получения шрифта

## CONTENT

Доступ: protected

Функция получения шрифта

Тип: FontCallback


# ::stappler::font::Formatter::linePositionFunc

## BRIEF

Функция получения позиции для строки

## CONTENT

Доступ: protected

Функция получения позиции для строки

Тип: LinePositionCallback
