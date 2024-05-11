Title: SPDataValue.h


# STAPPLER_DATA_SPDATAVALUE_H_

## BRIEF

Заголовок определяет класс нетипизированного значения

## CONTENT

Заголовок определяет класс нетипизированного значения

# ::stappler::memory::mem_sso_test<data::ValueTemplate<Interface>>::mem_sso_test<data::ValueTemplate<Interface>>

## BRIEF

Предустановка для проверки доступности оптимизации малых объектов, если этот тип хранится в контейнере

## CONTENT

Предустановка для проверки доступности оптимизации малых объектов, если этот тип хранится в контейнере

Параметры шаблона:
* typename Interface - интерфейс памяти


# ::stappler::memory::mem_sso_test<data::ValueTemplate<Interface>>::value

## BRIEF

Значение доступности оптимизации малых объектов

## CONTENT

Значение доступности оптимизации малых объектов - оптимизация всегда доступна

Тип: bool const


# ::stappler::data::ValueTemplate<typename>

## BRIEF

Базовый класс нетипизированного значения

## CONTENT

Базовый класс нетипизированного значения. Используется для работы с форматами данных JSON и CBOR.

Класс спроектирован таким образом, чтобы не порождать ошибок и неопределённого поведения. Большая часть функций всегда работает определённым образом, даже если операция не соотвествует хранимому типу значения.

Параметры шаблона:
* typename Interface - интерфейс памяти

Базовые классы:
* Interface::AllocBaseType


# ::stappler::data::ValueTemplate<typename>::Self

## BRIEF

Тип себя

## CONTENT

Доступ: public

Тип себя

# ::stappler::data::ValueTemplate<typename>::InterfaceType

## BRIEF

Тип интерфейса памяти

## CONTENT

Доступ: public

Тип интерфейса памяти

# ::stappler::data::ValueTemplate<typename>::StringType

## BRIEF

Тип символьной строки

## CONTENT

Доступ: public

Тип символьной строки

# ::stappler::data::ValueTemplate<typename>::BytesType

## BRIEF

Тип байтовой строки

## CONTENT

Доступ: public

Тип байтовой строки

# ::stappler::data::ValueTemplate<typename>::ArrayType

## BRIEF

Тип массива значений

## CONTENT

Доступ: public

Тип массива значений

# ::stappler::data::ValueTemplate<typename>::DictionaryType

## BRIEF

Тип словаря значений

## CONTENT

Доступ: public

Тип словаря значений

# ::stappler::data::ValueTemplate<typename>::Null

## BRIEF

Статическое значение Null

## CONTENT

Доступ: public

Статическое значение Null. Это статическое значение имеет особое свойство - запись в него невозможна. Попытка записи в него приведёт к вызову assert.

Тип: Self


# ::stappler::data::ValueTemplate<typename>::StringNull

## BRIEF

Статическое значение пустой символьной строки

## CONTENT

Доступ: public

Статическое значение пустой символьной строки

Тип: StringType


# ::stappler::data::ValueTemplate<typename>::BytesNull

## BRIEF

Статическое значение пустой байтовой строки

## CONTENT

Доступ: public

Статическое значение пустой байтовой строки

Тип: BytesType


# ::stappler::data::ValueTemplate<typename>::ArrayNull

## BRIEF

Статическое значение пустого массива

## CONTENT

Доступ: public

Статическое значение пустого массива

Тип: ArrayType


# ::stappler::data::ValueTemplate<typename>::DictionaryNull

## BRIEF

Статическое значение пустого словаря

## CONTENT

Доступ: public

Статическое значение пустого словаря

Тип: DictionaryType


# ::stappler::data::ValueTemplate<typename>::Type

## BRIEF

Тип хранимого значения

## CONTENT

Доступ: public

Тип хранимого значения

Значения:
* EMPTY - пустое значение
* INTEGER - целое число
* DOUBLE - число с плавающей точкой
* BOOLEAN - булево значение
* CHARSTRING - символьная строка
* BYTESTRING - байтовая строка
* ARRAY - массив
* DICTIONARY - словарь
* NONE - специальный тип отсутсвующего значения


# ::stappler::data::ValueTemplate<typename>::ValueTemplate()

## BRIEF

Инициализирует пустое значение

## CONTENT

Доступ: public

Инициализирует пустое значение

# ::stappler::data::ValueTemplate<typename>::ValueTemplate(stappler::data::ValueTemplate::Type)

## BRIEF

Инициализирует пустое значение значение определённого типа

## CONTENT

Доступ: public

Инициализирует пустое значение значение определённого типа

Параметры:
* stappler::data::ValueTemplate::Type


# ::stappler::data::ValueTemplate<typename>::~ValueTemplate()

## BRIEF

Деинициализирует значение

## CONTENT

Доступ: public

Деинициализирует значение

# ::stappler::data::ValueTemplate<typename>::ValueTemplate(stappler::data::ValueTemplate::Self const&)

## BRIEF

Конструктор копирования

## CONTENT

Доступ: public

Конструктор копирования

Параметры:
* stappler::data::ValueTemplate::Self const&


# ::stappler::data::ValueTemplate<typename>::ValueTemplate(stappler::data::ValueTemplate::Self&&)

## BRIEF

Конструктор перемещения

## CONTENT

Доступ: public

Конструктор перемещения. Изымает значение из другого значения.

Параметры:
* stappler::data::ValueTemplate::Self&&


# ::stappler::data::ValueTemplate<typename>::ValueTemplate<typename>(ValueTemplate<OtherInterface> const&)

## BRIEF

Конструктор конвертации интерфейса памяти

## CONTENT

Доступ: public

Конструктор конвертации интерфейса памяти

Параметры шаблона:
* typename OtherInterface

Параметры:
* ValueTemplate<OtherInterface> const&


# ::stappler::data::ValueTemplate<typename>::ValueTemplate(InitializerList<stappler::data::ValueTemplate::Self>)

## BRIEF

Инициализация массива из инициализирующего вектора

## CONTENT

Доступ: public

Инициализация массива из инициализирующего вектора

Параметры:
* InitializerList<stappler::data::ValueTemplate::Self>


# ::stappler::data::ValueTemplate<typename>::ValueTemplate(InitializerList<Pair<stappler::data::ValueTemplate::StringType, stappler::data::ValueTemplate::Self>>)

## BRIEF

Инициализация словаря из инициализирующего вектора

## CONTENT

Доступ: public

Инициализация словаря из инициализирующего вектора

Параметры:
* InitializerList<Pair<stappler::data::ValueTemplate::StringType, stappler::data::ValueTemplate::Self>>


# ::stappler::data::ValueTemplate<typename>::ValueTemplate(stappler::nullptr_t)

## BRIEF

Инициализация пустого значения

## CONTENT

Доступ: public

Инициализация пустого значения

Параметры:
* stappler::nullptr_t


# ::stappler::data::ValueTemplate<typename>::ValueTemplate(bool)

## BRIEF

Инициализация из булева значения

## CONTENT

Доступ: public

Инициализация из булева значения

Параметры:
* bool


# ::stappler::data::ValueTemplate<typename>::ValueTemplate(int32_t)

## BRIEF

Инициализация из целого числа

## CONTENT

Доступ: public

Инициализация из целого числа

Параметры:
* int32_t


# ::stappler::data::ValueTemplate<typename>::ValueTemplate(int64_t)

## BRIEF

Инициализация из целого числа

## CONTENT

Доступ: public

Инициализация из целого числа

Параметры:
* int64_t


# ::stappler::data::ValueTemplate<typename>::ValueTemplate(uint32_t)

## BRIEF

Инициализация из целого числа

## CONTENT

Доступ: public

Инициализация из целого числа

Параметры:
* uint32_t


# ::stappler::data::ValueTemplate<typename>::ValueTemplate(uint64_t)

## BRIEF

Инициализация из целого числа

## CONTENT

Доступ: public

Инициализация из целого числа

Параметры:
* uint64_t


# ::stappler::data::ValueTemplate<typename>::ValueTemplate(stappler::Time)

## BRIEF

Инициализация из значения времени (целого числа)

## CONTENT

Доступ: public

Инициализация из значения времени (целого числа)

Параметры:
* stappler::Time


# ::stappler::data::ValueTemplate<typename>::ValueTemplate(stappler::TimeInterval)

## BRIEF

Инициализация из значения времени (целого числа)

## CONTENT

Доступ: public

Инициализация из значения времени (целого числа)

Параметры:
* stappler::TimeInterval


# ::stappler::data::ValueTemplate<typename>::ValueTemplate(float)

## BRIEF

Инициализация из значени с плавающей точкой

## CONTENT

Доступ: public

Инициализация из значени с плавающей точкой

Параметры:
* float


# ::stappler::data::ValueTemplate<typename>::ValueTemplate(double)

## BRIEF

Инициализация из значени с плавающей точкой

## CONTENT

Доступ: public

Инициализация из значени с плавающей точкой

Параметры:
* double


# ::stappler::data::ValueTemplate<typename>::ValueTemplate(char const*)

## BRIEF

Инициализация из С-строки

## CONTENT

Доступ: public

Инициализация из С-строки

Параметры:
* char const*


# ::stappler::data::ValueTemplate<typename>::ValueTemplate(stappler::StringView const&)

## BRIEF

Инициализация из строкового отображения

## CONTENT

Доступ: public

Инициализация из строкового отображения

Параметры:
* stappler::StringView const&


# ::stappler::data::ValueTemplate<typename>::ValueTemplate(stappler::data::ValueTemplate::StringType const&)

## BRIEF

Инициализация из строкового контейнера

## CONTENT

Доступ: public

Инициализация из строкового контейнера

Параметры:
* stappler::data::ValueTemplate::StringType const&


# ::stappler::data::ValueTemplate<typename>::ValueTemplate(stappler::data::ValueTemplate::StringType&&)

## BRIEF

Инициализация из строкового контейнера с перемещением

## CONTENT

Доступ: public

Инициализация из строкового контейнера с перемещением

Параметры:
* stappler::data::ValueTemplate::StringType&&


# ::stappler::data::ValueTemplate<typename>::ValueTemplate(stappler::data::ValueTemplate::BytesType const&)

## BRIEF

Инициализация из байтового контейнера

## CONTENT

Доступ: public

Инициализация из байтового контейнера

Параметры:
* stappler::data::ValueTemplate::BytesType const&


# ::stappler::data::ValueTemplate<typename>::ValueTemplate(stappler::data::ValueTemplate::BytesType&&)

## BRIEF

Инициализация из байтового контейнера с перемещением

## CONTENT

Доступ: public

Инициализация из байтового контейнера с перемещением

Параметры:
* stappler::data::ValueTemplate::BytesType&&


# ::stappler::data::ValueTemplate<typename>::ValueTemplate(BytesViewTemplate<Endian::Big> const&)

## BRIEF

Инициализация из байтового отображения

## CONTENT

Доступ: public

Инициализация из байтового отображения

Параметры:
* BytesViewTemplate<Endian::Big> const&


# ::stappler::data::ValueTemplate<typename>::ValueTemplate(BytesViewTemplate<Endian::Little> const&)

## BRIEF

Инициализация из байтового отображения

## CONTENT

Доступ: public

Инициализация из байтового отображения

Параметры:
* BytesViewTemplate<Endian::Little> const&


# ::stappler::data::ValueTemplate<typename>::ValueTemplate(stappler::data::ValueTemplate::ArrayType const&)

## BRIEF

Инициализация из типа массива

## CONTENT

Доступ: public

Инициализация из типа массива

Параметры:
* stappler::data::ValueTemplate::ArrayType const&


# ::stappler::data::ValueTemplate<typename>::ValueTemplate(stappler::data::ValueTemplate::ArrayType&&)

## BRIEF

Инициализация из типа массива с перемещением

## CONTENT

Доступ: public

Инициализация из типа массива с перемещением

Параметры:
* stappler::data::ValueTemplate::ArrayType&&


# ::stappler::data::ValueTemplate<typename>::ValueTemplate(stappler::data::ValueTemplate::DictionaryType const&)

## BRIEF

Инициализация из типа словаря

## CONTENT

Доступ: public

Инициализация из типа словаря

Параметры:
* stappler::data::ValueTemplate::DictionaryType const&


# ::stappler::data::ValueTemplate<typename>::ValueTemplate(stappler::data::ValueTemplate::DictionaryType&&)

## BRIEF

Инициализация из типа словаря с перемещением

## CONTENT

Доступ: public

Инициализация из типа словаря с перемещением

Параметры:
* stappler::data::ValueTemplate::DictionaryType&&


# ::stappler::data::ValueTemplate<typename>::operator=(stappler::data::ValueTemplate::Self const&)

## BRIEF

Оператор копирования

## CONTENT

Доступ: public

Оператор копирования

Параметры:
* stappler::data::ValueTemplate::Self const&

Возвращает:
* Self&

# ::stappler::data::ValueTemplate<typename>::operator=(stappler::data::ValueTemplate::Self&&)

## BRIEF

Оператор перемещения

## CONTENT

Доступ: public

Оператор перемещения. Изымает значение из другого значения.

Параметры:
* stappler::data::ValueTemplate::Self&&

Возвращает:
* Self&

# ::stappler::data::ValueTemplate<typename>::operator=<typename>(ValueTemplate<OtherInterface> const&)

## BRIEF

Оператор конвертации интерфейса памяти

## CONTENT

Доступ: public

Оператор конвертации интерфейса памяти

Параметры шаблона:
* typename OtherInterface

Параметры:
* ValueTemplate<OtherInterface> const&

Возвращает:
* Self&

# ::stappler::data::ValueTemplate<typename>::operator=(stappler::nullptr_t)

## BRIEF

Присваивает пустое значение

## CONTENT

Доступ: public

Присваивает пустое значение

Параметры:
* stappler::nullptr_t

Возвращает:
* Self&

# ::stappler::data::ValueTemplate<typename>::operator=(bool)

## BRIEF

Присваивает булево значение

## CONTENT

Доступ: public

Присваивает булево значение

Параметры:
* bool

Возвращает:
* Self&

# ::stappler::data::ValueTemplate<typename>::operator=(int32_t)

## BRIEF

Присваивает целочисленное значение

## CONTENT

Доступ: public

Присваивает целочисленное значение

Параметры:
* int32_t

Возвращает:
* Self&

# ::stappler::data::ValueTemplate<typename>::operator=(int64_t)

## BRIEF

Присваивает целочисленное значение

## CONTENT

Доступ: public

Присваивает целочисленное значение

Параметры:
* int64_t

Возвращает:
* Self&

# ::stappler::data::ValueTemplate<typename>::operator=(size_t)

## BRIEF

Присваивает целочисленное значение

## CONTENT

Доступ: public

Присваивает целочисленное значение

Параметры:
* size_t

Возвращает:
* Self&

# ::stappler::data::ValueTemplate<typename>::operator=(float)

## BRIEF

Присваивает значение с плавающей точкой

## CONTENT

Доступ: public

Присваивает значение с плавающей точкой

Параметры:
* float

Возвращает:
* Self&

# ::stappler::data::ValueTemplate<typename>::operator=(double)

## BRIEF

Присваивает значение с плавающей точкой

## CONTENT

Доступ: public

Присваивает значение с плавающей точкой

Параметры:
* double

Возвращает:
* Self&

# ::stappler::data::ValueTemplate<typename>::operator=(char const*)

## BRIEF

Присваивает значение С-строки

## CONTENT

Доступ: public

Присваивает значение С-строки

Параметры:
* char const*

Возвращает:
* Self&

# ::stappler::data::ValueTemplate<typename>::operator=(stappler::StringView const&)

## BRIEF

Присваивает значение строкового отображения

## CONTENT

Доступ: public

Присваивает значение строкового отображения

Параметры:
* stappler::StringView const&

Возвращает:
* Self&

# ::stappler::data::ValueTemplate<typename>::operator=(stappler::data::ValueTemplate::StringType const&)

## BRIEF

Присваивает значение строкового контейнера

## CONTENT

Доступ: public

Присваивает значение строкового контейнера

Параметры:
* stappler::data::ValueTemplate::StringType const&

Возвращает:
* Self&

# ::stappler::data::ValueTemplate<typename>::operator=(stappler::data::ValueTemplate::StringType&&)

## BRIEF

Перемещает значение строкового контейнера

## CONTENT

Доступ: public

Перемещает значение строкового контейнера

Параметры:
* stappler::data::ValueTemplate::StringType&&

Возвращает:
* Self&

# ::stappler::data::ValueTemplate<typename>::operator=(stappler::BytesView const&)

## BRIEF

Присваивает значение байтового отображения

## CONTENT

Доступ: public

Присваивает значение байтового отображения

Параметры:
* stappler::BytesView const&

Возвращает:
* Self&

# ::stappler::data::ValueTemplate<typename>::operator=(stappler::data::ValueTemplate::BytesType const&)

## BRIEF

Присваивает значение байтового контейнера

## CONTENT

Доступ: public

Присваивает значение байтового контейнера
Параметры:
* stappler::data::ValueTemplate::BytesType const&

Возвращает:
* Self&

# ::stappler::data::ValueTemplate<typename>::operator=(stappler::data::ValueTemplate::BytesType&&)

## BRIEF

Перемещает значение байтового контейнера

## CONTENT

Доступ: public

Перемещает значение байтового контейнера

Параметры:
* stappler::data::ValueTemplate::BytesType&&

Возвращает:
* Self&

# ::stappler::data::ValueTemplate<typename>::operator=(stappler::data::ValueTemplate::ArrayType const&)

## BRIEF

Присваивает значение массива

## CONTENT

Доступ: public

Присваивает значение массива

Параметры:
* stappler::data::ValueTemplate::ArrayType const&

Возвращает:
* Self&

# ::stappler::data::ValueTemplate<typename>::operator=(stappler::data::ValueTemplate::ArrayType&&)

## BRIEF

Перемещает значение массива

## CONTENT

Доступ: public

Перемещает значение массива

Параметры:
* stappler::data::ValueTemplate::ArrayType&&

Возвращает:
* Self&

# ::stappler::data::ValueTemplate<typename>::operator=(stappler::data::ValueTemplate::DictionaryType const&)

## BRIEF

Присваивает значение словаря

## CONTENT

Доступ: public

Присваивает значение словаря

Параметры:
* stappler::data::ValueTemplate::DictionaryType const&

Возвращает:
* Self&

# ::stappler::data::ValueTemplate<typename>::operator=(stappler::data::ValueTemplate::DictionaryType&&)

## BRIEF

Перемещает значение словаря

## CONTENT

Доступ: public

Перемещает значение словаря

Параметры:
* stappler::data::ValueTemplate::DictionaryType&&

Возвращает:
* Self&

# ::stappler::data::ValueTemplate<typename>::operator==(stappler::data::ValueTemplate::Self const&) const

## BRIEF

Сравнивает два значения

## CONTENT

Доступ: public

Сравнивает два значения. Используется глубокое рекурсивное сравнение

Параметры:
* stappler::data::ValueTemplate::Self const&

Возвращает:
* bool

# ::stappler::data::ValueTemplate<typename>::operator==(bool) const

## BRIEF

Сравнивает значение с булевым

## CONTENT

Доступ: public

Сравнивает значение с булевым

Параметры:
* bool

Возвращает:
* bool

# ::stappler::data::ValueTemplate<typename>::operator==(int32_t) const

## BRIEF

Сравнивает значение с целым числом

## CONTENT

Доступ: public

Сравнивает значение с целым числом

Параметры:
* int32_t

Возвращает:
* bool

# ::stappler::data::ValueTemplate<typename>::operator==(int64_t) const

## BRIEF

Сравнивает значение с целым числом

## CONTENT

Доступ: public

Сравнивает значение с целым числом

Параметры:
* int64_t

Возвращает:
* bool

# ::stappler::data::ValueTemplate<typename>::operator==(size_t) const

## BRIEF

Сравнивает значение с целым числом

## CONTENT

Доступ: public

Сравнивает значение с целым числом

Параметры:
* size_t

Возвращает:
* bool

# ::stappler::data::ValueTemplate<typename>::operator==(float) const

## BRIEF

Сравнивает значение с числом с плавающей точкой

## CONTENT

Доступ: public

Сравнивает значение с числом с плавающей точкой

Параметры:
* float

Возвращает:
* bool

# ::stappler::data::ValueTemplate<typename>::operator==(double) const

## BRIEF

Сравнивает значение с числом с плавающей точкой

## CONTENT

Доступ: public

Сравнивает значение с числом с плавающей точкой

Параметры:
* double

Возвращает:
* bool

# ::stappler::data::ValueTemplate<typename>::operator==(char const*) const

## BRIEF

Сравнивает значение с с-строкой

## CONTENT

Доступ: public

Сравнивает значение с с-строкой

Параметры:
* char const*

Возвращает:
* bool

# ::stappler::data::ValueTemplate<typename>::operator==(stappler::StringView const&) const

## BRIEF

Сравнвает значение со строковым отображением

## CONTENT

Доступ: public

Сравнвает значение со строковым отображением

Параметры:
* stappler::StringView const&

Возвращает:
* bool

# ::stappler::data::ValueTemplate<typename>::operator==(stappler::BytesView const&) const

## BRIEF

Сравнвает значение с байтовым отображением

## CONTENT

Доступ: public

Сравнвает значение с байтовым отображением

Параметры:
* stappler::data::ValueTemplate::BytesView const&

Возвращает:
* bool

# ::stappler::data::ValueTemplate<typename>::operator==(stappler::data::ValueTemplate::ArrayType const&) const

## BRIEF

Сравнвает значение с массивом

## CONTENT

Доступ: public

Сравнвает значение с массивом

Параметры:
* stappler::data::ValueTemplate::ArrayType const&

Возвращает:
* bool

# ::stappler::data::ValueTemplate<typename>::operator==(stappler::data::ValueTemplate::DictionaryType const&) const

## BRIEF

Сравнвает значение со словарём

## CONTENT

Доступ: public

Сравнвает значение со словарём

Параметры:
* stappler::data::ValueTemplate::DictionaryType const&

Возвращает:
* bool

# ::stappler::data::ValueTemplate<typename>::operator!=(stappler::data::ValueTemplate::Self const&) const

## BRIEF

Сравнивает два значения

## CONTENT

Доступ: public

Сравнивает два значения. Используется глубокое рекурсивное сравнение

Параметры:
* stappler::data::ValueTemplate::Self const&

Возвращает:
* bool

# ::stappler::data::ValueTemplate<typename>::operator!=(bool) const

## BRIEF

Сравнивает значение с булевым

## CONTENT

Доступ: public

Сравнивает значение с булевым

Параметры:
* bool

Возвращает:
* bool

# ::stappler::data::ValueTemplate<typename>::operator!=(int32_t) const

## BRIEF

Сравнивает значение с целым числом

## CONTENT

Доступ: public

Сравнивает значение с целым числом

Параметры:
* int32_t

Возвращает:
* bool

# ::stappler::data::ValueTemplate<typename>::operator!=(int64_t) const

## BRIEF

Сравнивает значение с целым числом

## CONTENT

Доступ: public

Сравнивает значение с целым числом

Параметры:
* int64_t

Возвращает:
* bool

# ::stappler::data::ValueTemplate<typename>::operator!=(size_t) const

## BRIEF

Сравнивает значение с целым числом

## CONTENT

Доступ: public

Сравнивает значение с целым числом

Параметры:
* size_t

Возвращает:
* bool

# ::stappler::data::ValueTemplate<typename>::operator!=(float) const

## BRIEF

Сравнивает значение с числом с плавающей точкой

## CONTENT

Доступ: public

Сравнивает значение с числом с плавающей точкой

Параметры:
* float

Возвращает:
* bool

# ::stappler::data::ValueTemplate<typename>::operator!=(double) const

## BRIEF

Сравнивает значение с числом с плавающей точкой

## CONTENT

Доступ: public

Сравнивает значение с числом с плавающей точкой

Параметры:
* double

Возвращает:
* bool

# ::stappler::data::ValueTemplate<typename>::operator!=(char const*) const

## BRIEF

Сравнивает значение с с-строкой

## CONTENT

Доступ: public

Сравнивает значение с с-строкой

Параметры:
* char const*

Возвращает:
* bool

# ::stappler::data::ValueTemplate<typename>::operator!=(stappler::StringView const&) const

## BRIEF

Сравнивает значение со строковым отображением

## CONTENT

Доступ: public

Сравнивает значение со строковым отображением

Параметры:
* stappler::StringView const&

Возвращает:
* bool

# ::stappler::data::ValueTemplate<typename>::operator!=(stappler::BytesView const&) const

## BRIEF

Сравнивает значение с байтовым отображением

## CONTENT

Доступ: public

Сравнивает значение с байтовым отображением

Параметры:
* stappler::data::ValueTemplate::BytesView const&

Возвращает:
* bool

# ::stappler::data::ValueTemplate<typename>::operator!=(stappler::data::ValueTemplate::ArrayType const&) const

## BRIEF

Сравнивает значение с массивом

## CONTENT

Доступ: public

Сравнивает значение с массивом

Параметры:
* stappler::data::ValueTemplate::ArrayType const&

Возвращает:
* bool

# ::stappler::data::ValueTemplate<typename>::operator!=(stappler::data::ValueTemplate::DictionaryType const&) const

## BRIEF

Сравнивает значение со словарём

## CONTENT

Доступ: public

Сравнивает значение со словарём

Параметры:
* stappler::data::ValueTemplate::DictionaryType const&

Возвращает:
* bool

# ::stappler::data::ValueTemplate<typename>::setValue<class,class>(Val&&,Key&&)

## BRIEF

Устанавливает значение для определённого ключа

## CONTENT

Доступ: public

Устанавливает значение для определённого ключа. Если ключ строковый - используется интерфейс словаря, пустое значение конвертируется в словарь. Если ключ целочисленный, используется интерфейс массива, пустое значение конвертируется в массив. В ином случае - нет эффекта.

Параметры шаблона:
* class Val - тип значения
* class Key - тип ключа

Параметры:
* Val&& - значение
* Key&& - ключ

Возвращает:
* Self&

# ::stappler::data::ValueTemplate<typename>::setValue<class>(Val&&)

## BRIEF

Устанавливает значение

## CONTENT

Доступ: public

Устанавливает значение, копирует значение внутрь текущего объекта

Параметры шаблона:
* class Val - тип значения

Параметры:
* Val&& - значение

Возвращает:
* Self&

# ::stappler::data::ValueTemplate<typename>::addValue<class>(Val&&)

## BRIEF

Добавляет значение в массив

## CONTENT

Доступ: public

Добавляет значение в массив. Пустое текущее значение конвертируется в массив. Если текущее значение не массив - нет эффекта.

Параметры шаблона:
* class Val - тип значения

Параметры:
* Val&& - значение

Возвращает:
* Self&

# ::stappler::data::ValueTemplate<typename>::getValue<class>(Key&&)

## BRIEF

Получает значение по ключу

## CONTENT

Доступ: public

Получает значение по ключу. Если ключ строковый - используется интерфейс словаря. Если ключ целочисленный, используется интерфейс массива. Если тип ключа и значения не совпадают, или тип ключа не определён - нет эффекта, возвращает статическое значение Null.

Параметры шаблона:
* class Key

Параметры:
* Key&&

Возвращает:
* Self&

# ::stappler::data::ValueTemplate<typename>::getValue<class>(Key&&) const

## BRIEF

Получает значение по ключу

## CONTENT

Доступ: public

Получает значение по ключу. Если ключ строковый - используется интерфейс словаря. Если ключ целочисленный, используется интерфейс массива. Если тип ключа и значения не совпадают, или тип ключа не определён - нет эффекта, возвращает статическое значение Null.

Параметры шаблона:
* class Key

Параметры:
* Key&&

Возвращает:
* Self&

# ::stappler::data::ValueTemplate<typename>::emplace()

## BRIEF

Добавляет новое значение в массив, возвращет ссылку на него.

## CONTENT

Доступ: public

Добавляет новое значение в массив, возвращет ссылку на него. Если значине пустое - конвертирует в массив. Если значение не массив - возвращает статический Null.

Возвращает:
* Self& - ссылка на новое значение

# ::stappler::data::ValueTemplate<typename>::emplace<class>(Key&&)

## BRIEF

Добавляет новое значение в словарь по ключу и возвращает ссылку на него

## CONTENT

Доступ: public

Добавляет новое значение в словарь по ключу и возвращает ссылку на него. Если значение пустое - конвертирует его в словарь. Если значение не словарь - возвращает статический Null.

Если значение по ключу уже существует - возвращает ссылку на него.

Параметры шаблона:
* class Key

Параметры:
* Key&&

Возвращает:
* Self& - ссылка на новое значение

# ::stappler::data::ValueTemplate<typename>::hasValue<class>(Key&&) const

## BRIEF

Проверяет, существует ли значение для ключа.

## CONTENT

Доступ: public

Проверяет, существует ли значение для ключа. Если ключ строковый - используется интерфейс словаря. Если ключ целочисленный, используется интерфейс массива. Если тип ключа и значения не совпадают, или тип ключа не определён - возвращает false.

Параметры шаблона:
* class Key

Параметры:
* Key&&

Возвращает:
* bool

# ::stappler::data::ValueTemplate<typename>::setNull<class>(Key&&)

## BRIEF

Устанавливает пустое значение для ключа.

## CONTENT

Доступ: public

Устанавливает пустое значение для ключа.

Если ключ строковый - используется интерфейс словаря, пустое значение конвертируется в словарь. Если значение целочисленное, используется интерфейс массива, пустое значение конвертируется в массив. Если ключ и тип не совпадают - нет эффекта
 
Параметры шаблона:
* class Key

Параметры:
* Key&&


# ::stappler::data::ValueTemplate<typename>::setBool<class>(bool,Key&&)

## BRIEF

Устанавливает булево значение для ключа.

## CONTENT

Доступ: public

Устанавливает булево значение для ключа.

Если ключ строковый - используется интерфейс словаря, пустое значение конвертируется в словарь. Если значение целочисленное, используется интерфейс массива, пустое значение конвертируется в массив. Если ключ и тип не совпадают - нет эффекта

Параметры шаблона:
* class Key

Параметры:
* bool
* Key&&


# ::stappler::data::ValueTemplate<typename>::setInteger<class>(int64_t,Key&&)

## BRIEF

Устанавливает целочисленное значение для ключа.

## CONTENT

Доступ: public

Устанавливает целочисленное значение для ключа.

Если ключ строковый - используется интерфейс словаря, пустое значение конвертируется в словарь. Если значение целочисленное, используется интерфейс массива, пустое значение конвертируется в массив. Если ключ и тип не совпадают - нет эффекта

Параметры шаблона:
* class Key

Параметры:
* int64_t
* Key&&


# ::stappler::data::ValueTemplate<typename>::setDouble<class>(double,Key&&)

## BRIEF

Устанавливает значение с плавающей точкой для ключа

## CONTENT

Доступ: public

Устанавливает значение с плавающей точкой для ключа

Если ключ строковый - используется интерфейс словаря, пустое значение конвертируется в словарь. Если значение целочисленное, используется интерфейс массива, пустое значение конвертируется в массив. Если ключ и тип не совпадают - нет эффекта

Параметры шаблона:
* class Key

Параметры:
* double
* Key&&


# ::stappler::data::ValueTemplate<typename>::setString<class>(stappler::data::ValueTemplate::StringType const&,Key&&)

## BRIEF

Устанавливает строковое значение для ключа

## CONTENT

Доступ: public

Устанавливает строковое значение для ключа

Если ключ строковый - используется интерфейс словаря, пустое значение конвертируется в словарь. Если значение целочисленное, используется интерфейс массива, пустое значение конвертируется в массив. Если ключ и тип не совпадают - нет эффекта

Параметры шаблона:
* class Key

Параметры:
* stappler::data::ValueTemplate::StringType const&
* Key&&


# ::stappler::data::ValueTemplate<typename>::setString<class>(stappler::data::ValueTemplate::StringType&&,Key&&)

## BRIEF

Перемещает строковое значение для ключа

## CONTENT

Доступ: public

Перемещает строковое значение для ключа

Если ключ строковый - используется интерфейс словаря, пустое значение конвертируется в словарь. Если значение целочисленное, используется интерфейс массива, пустое значение конвертируется в массив. Если ключ и тип не совпадают - нет эффекта

Параметры шаблона:
* class Key

Параметры:
* stappler::data::ValueTemplate::StringType&&
* Key&&


# ::stappler::data::ValueTemplate<typename>::setString<class>(char const*,Key&&)

## BRIEF

Устанавливает строковое значение для ключа

## CONTENT

Доступ: public

Устанавливает строковое значение для ключа

Если ключ строковый - используется интерфейс словаря, пустое значение конвертируется в словарь. Если значение целочисленное, используется интерфейс массива, пустое значение конвертируется в массив. Если ключ и тип не совпадают - нет эффекта

Параметры шаблона:
* class Key

Параметры:
* char const*
* Key&&


# ::stappler::data::ValueTemplate<typename>::setString<class>(stappler::StringView const&,Key&&)

## BRIEF

Устанавливает строковое значение для ключа

## CONTENT

Доступ: public

Устанавливает строковое значение для ключа

Если ключ строковый - используется интерфейс словаря, пустое значение конвертируется в словарь. Если значение целочисленное, используется интерфейс массива, пустое значение конвертируется в массив. Если ключ и тип не совпадают - нет эффекта

Параметры шаблона:
* class Key

Параметры:
* stappler::StringView const&
* Key&&


# ::stappler::data::ValueTemplate<typename>::setBytes<class>(stappler::data::ValueTemplate::BytesType const&,Key&&)

## BRIEF

Устанавливает байтовое значение для ключа

## CONTENT

Доступ: public

Устанавливает байтовое значение для ключа

Если ключ строковый - используется интерфейс словаря, пустое значение конвертируется в словарь. Если значение целочисленное, используется интерфейс массива, пустое значение конвертируется в массив. Если ключ и тип не совпадают - нет эффекта

Параметры шаблона:
* class Key

Параметры:
* stappler::data::ValueTemplate::BytesType const&
* Key&&


# ::stappler::data::ValueTemplate<typename>::setBytes<class>(stappler::data::ValueTemplate::BytesType&&,Key&&)

## BRIEF

Перемещает байтовое значение для ключа

## CONTENT

Доступ: public

Перемещает байтовое значение для ключа

Если ключ строковый - используется интерфейс словаря, пустое значение конвертируется в словарь. Если значение целочисленное, используется интерфейс массива, пустое значение конвертируется в массив. Если ключ и тип не совпадают - нет эффекта

Параметры шаблона:
* class Key

Параметры:
* stappler::data::ValueTemplate::BytesType&&
* Key&&


# ::stappler::data::ValueTemplate<typename>::setBytes<class>(BytesViewTemplate<Endian::Big> const&,Key&&)

## BRIEF

Устанавливает байтовое значение для ключа

## CONTENT

Доступ: public

Устанавливает байтовое значение для ключа

Если ключ строковый - используется интерфейс словаря, пустое значение конвертируется в словарь. Если значение целочисленное, используется интерфейс массива, пустое значение конвертируется в массив. Если ключ и тип не совпадают - нет эффекта

Параметры шаблона:
* class Key

Параметры:
* BytesViewTemplate<Endian::Big> const&
* Key&&


# ::stappler::data::ValueTemplate<typename>::setBytes<class>(BytesViewTemplate<Endian::Little> const&,Key&&)

## BRIEF

Устанавливает байтовое значение для ключа

## CONTENT

Доступ: public

Устанавливает байтовое значение для ключа

Если ключ строковый - используется интерфейс словаря, пустое значение конвертируется в словарь. Если значение целочисленное, используется интерфейс массива, пустое значение конвертируется в массив. Если ключ и тип не совпадают - нет эффекта

Параметры шаблона:
* class Key

Параметры:
* BytesViewTemplate<Endian::Little> const&
* Key&&


# ::stappler::data::ValueTemplate<typename>::setArray<class>(stappler::data::ValueTemplate::ArrayType const&,Key&&)

## BRIEF

Устанавлиает значение массива для ключа

## CONTENT

Доступ: public

Устанавлиает значение массива для ключа

Если ключ строковый - используется интерфейс словаря, пустое значение конвертируется в словарь. Если значение целочисленное, используется интерфейс массива, пустое значение конвертируется в массив. Если ключ и тип не совпадают - нет эффекта

Параметры шаблона:
* class Key

Параметры:
* stappler::data::ValueTemplate::ArrayType const&
* Key&&


# ::stappler::data::ValueTemplate<typename>::setArray<class>(stappler::data::ValueTemplate::ArrayType&&,Key&&)

## BRIEF

Перемещает значение массива для ключа

## CONTENT

Доступ: public

Перемещает значение массива для ключа

Если ключ строковый - используется интерфейс словаря, пустое значение конвертируется в словарь. Если значение целочисленное, используется интерфейс массива, пустое значение конвертируется в массив. Если ключ и тип не совпадают - нет эффекта

Параметры шаблона:
* class Key

Параметры:
* stappler::data::ValueTemplate::ArrayType&&
* Key&&


# ::stappler::data::ValueTemplate<typename>::setDict<class>(stappler::data::ValueTemplate::DictionaryType const&,Key&&)

## BRIEF

Устанавлиает значение словаря для ключа

## CONTENT

Доступ: public

Устанавлиает значение словаря для ключа

Если ключ строковый - используется интерфейс словаря, пустое значение конвертируется в словарь. Если значение целочисленное, используется интерфейс массива, пустое значение конвертируется в массив. Если ключ и тип не совпадают - нет эффекта

Параметры шаблона:
* class Key

Параметры:
* stappler::data::ValueTemplate::DictionaryType const&
* Key&&


# ::stappler::data::ValueTemplate<typename>::setDict<class>(stappler::data::ValueTemplate::DictionaryType&&,Key&&)

## BRIEF

Перемещает значение словаря для ключа

## CONTENT

Доступ: public

Перемещает значение словаря для ключа

Если ключ строковый - используется интерфейс словаря, пустое значение конвертируется в словарь. Если значение целочисленное, используется интерфейс массива, пустое значение конвертируется в массив. Если ключ и тип не совпадают - нет эффекта

Параметры шаблона:
* class Key

Параметры:
* stappler::data::ValueTemplate::DictionaryType&&
* Key&&


# ::stappler::data::ValueTemplate<typename>::setNull()

## BRIEF

Устанавливает пустое значение

## CONTENT

Доступ: public

Устанавливает пустое значение


# ::stappler::data::ValueTemplate<typename>::setBool(bool)

## BRIEF

Устанавливает булево значение

## CONTENT

Доступ: public

Устанавливает булево значение

Параметры:
* bool


# ::stappler::data::ValueTemplate<typename>::setInteger(int32_t)

## BRIEF

Устанавливает целочисленное значение

## CONTENT

Доступ: public

Устанавливает целочисленное значение

Параметры:
* int32_t


# ::stappler::data::ValueTemplate<typename>::setInteger(int64_t)

## BRIEF

Устанавливает целочисленное значение

## CONTENT

Доступ: public

Устанавливает целочисленное значение

Параметры:
* int64_t


# ::stappler::data::ValueTemplate<typename>::setInteger(size_t)

## BRIEF

Устанавливает целочисленное значение

## CONTENT

Доступ: public

Устанавливает целочисленное значение

Параметры:
* size_t


# ::stappler::data::ValueTemplate<typename>::setDouble(float)

## BRIEF

Устанавливает значение с плавающей точкой

## CONTENT

Доступ: public

Устанавливает значение с плавающей точкой

Параметры:
* float


# ::stappler::data::ValueTemplate<typename>::setDouble(double)

## BRIEF

Устанавливает значение с плавающей точкой

## CONTENT

Доступ: public

Устанавливает значение с плавающей точкой

Параметры:
* double


# ::stappler::data::ValueTemplate<typename>::setString(char const*)

## BRIEF

Устанавливает строковое значение

## CONTENT

Доступ: public

Устанавливает строковое значение

Параметры:
* char const*


# ::stappler::data::ValueTemplate<typename>::setString(stappler::StringView const&)

## BRIEF

Устанавливает строковое значение

## CONTENT

Доступ: public

Устанавливает строковое значение

Параметры:
* stappler::StringView const&


# ::stappler::data::ValueTemplate<typename>::setString(stappler::data::ValueTemplate::StringType const&)

## BRIEF

Устанавливает строковое значение

## CONTENT

Доступ: public

Устанавливает строковое значение

Параметры:
* stappler::data::ValueTemplate::StringType const&


# ::stappler::data::ValueTemplate<typename>::setString(stappler::data::ValueTemplate::StringType&&)

## BRIEF

Перемещает строковое значение

## CONTENT

Доступ: public

Перемещает строковое значение

Параметры:
* stappler::data::ValueTemplate::StringType&&


# ::stappler::data::ValueTemplate<typename>::setBytes(stappler::data::ValueTemplate::BytesType const&)

## BRIEF

Устанавливает байтовое значение

## CONTENT

Доступ: public

Устанавливает байтовое значение

Параметры:
* stappler::data::ValueTemplate::BytesType const&


# ::stappler::data::ValueTemplate<typename>::setBytes(stappler::data::ValueTemplate::BytesType&&)

## BRIEF

Перемещает байтовое значение

## CONTENT

Доступ: public

Перемещает байтовое значение

Параметры:
* stappler::data::ValueTemplate::BytesType&&


# ::stappler::data::ValueTemplate<typename>::setBytes(stappler::BytesView const&)

## BRIEF

Устанавливает байтовое значение

## CONTENT

Доступ: public

Устанавливает байтовое значение

Параметры:
* stappler::BytesView const&


# ::stappler::data::ValueTemplate<typename>::setArray(stappler::data::ValueTemplate::ArrayType const&)

## BRIEF

Устанавливает значение массива

## CONTENT

Доступ: public

Устанавливает значение массива

Параметры:
* stappler::data::ValueTemplate::ArrayType const&


# ::stappler::data::ValueTemplate<typename>::setArray(stappler::data::ValueTemplate::ArrayType&&)

## BRIEF

Перемещает значение массива

## CONTENT

Доступ: public

Перемещает значение массива

Параметры:
* stappler::data::ValueTemplate::ArrayType&&


# ::stappler::data::ValueTemplate<typename>::setDict(stappler::data::ValueTemplate::DictionaryType const&)

## BRIEF

Устанавливает значение словаря

## CONTENT

Доступ: public

Устанавливает значение словаря

Параметры:
* stappler::data::ValueTemplate::DictionaryType const&


# ::stappler::data::ValueTemplate<typename>::setDict(stappler::data::ValueTemplate::DictionaryType&&)

## BRIEF

Перемещает значение словаря

## CONTENT

Доступ: public

Перемещает значение словаря

Параметры:
* stappler::data::ValueTemplate::DictionaryType&&


# ::stappler::data::ValueTemplate<typename>::addBool(bool)

## BRIEF

Добавляет булево значение в массив

## CONTENT

Доступ: public

Добавляет булево значение в массив

Если значение пустое - конвертирует его в массив. Если значение не массив - не делает ничего.

Параметры:
* bool


# ::stappler::data::ValueTemplate<typename>::addInteger(int64_t)

## BRIEF

Добавляет целое значение в массив

## CONTENT

Доступ: public

Добавляет целое значение в массив

Если значение пустое - конвертирует его в массив. Если значение не массив - не делает ничего.

Параметры:
* int64_t


# ::stappler::data::ValueTemplate<typename>::addDouble(double)

## BRIEF

Добавляет значение с плавающей точкой в массив

## CONTENT

Доступ: public

Добавляет значение с плавающей точкой в массив

Если значение пустое - конвертирует его в массив. Если значение не массив - не делает ничего.

Параметры:
* double


# ::stappler::data::ValueTemplate<typename>::addString(char const*)

## BRIEF

Добавляет строковое значение в массив

## CONTENT

Доступ: public

Добавляет строковое значение в массив

Если значение пустое - конвертирует его в массив. Если значение не массив - не делает ничего.

Параметры:
* char const*


# ::stappler::data::ValueTemplate<typename>::addString(stappler::StringView const&)

## BRIEF

Добавляет строковое значение в массив

## CONTENT

Доступ: public

Добавляет строковое значение в массив

Если значение пустое - конвертирует его в массив. Если значение не массив - не делает ничего.

Параметры:
* stappler::StringView const&


# ::stappler::data::ValueTemplate<typename>::addString(stappler::data::ValueTemplate::StringType const&)

## BRIEF

Добавляет строковое значение в массив

## CONTENT

Доступ: public

Добавляет строковое значение в массив

Если значение пустое - конвертирует его в массив. Если значение не массив - не делает ничего.

Параметры:
* stappler::data::ValueTemplate::StringType const&


# ::stappler::data::ValueTemplate<typename>::addString(stappler::data::ValueTemplate::StringType&&)

## BRIEF

Перемещает строковое значение в массив

## CONTENT

Доступ: public

Перемещает строковое значение в массив

Если значение пустое - конвертирует его в массив. Если значение не массив - не делает ничего.

Параметры:
* stappler::data::ValueTemplate::StringType&&


# ::stappler::data::ValueTemplate<typename>::addBytes(stappler::BytesView const&)

## BRIEF

Добавляет байтовое значение в массив

## CONTENT

Доступ: public

Добавляет байтовое значение в массив

Если значение пустое - конвертирует его в массив. Если значение не массив - не делает ничего.

Параметры:
* stappler::BytesView const&


# ::stappler::data::ValueTemplate<typename>::addBytes(stappler::data::ValueTemplate::BytesType const&)

## BRIEF

Добавляет байтовое значение в массив

## CONTENT

Доступ: public

Добавляет байтовое значение в массив

Если значение пустое - конвертирует его в массив. Если значение не массив - не делает ничего.

Параметры:
* stappler::data::ValueTemplate::BytesType const&


# ::stappler::data::ValueTemplate<typename>::addBytes(stappler::data::ValueTemplate::BytesType&&)

## BRIEF

Перемещает байтовое значение в массив

## CONTENT

Доступ: public

Перемещает байтовое значение в массив

Если значение пустое - конвертирует его в массив. Если значение не массив - не делает ничего.

Доступ: public

Параметры:
* stappler::data::ValueTemplate::BytesType&&


# ::stappler::data::ValueTemplate<typename>::addArray(stappler::data::ValueTemplate::ArrayType const&)

## BRIEF

Добавляет значение массива в массив

## CONTENT

Доступ: public

Добавляет значение массива в массив

Если значение пустое - конвертирует его в массив. Если значение не массив - не делает ничего.

Параметры:
* stappler::data::ValueTemplate::ArrayType const&


# ::stappler::data::ValueTemplate<typename>::addArray(stappler::data::ValueTemplate::ArrayType&&)

## BRIEF

Перемещает значение массива в массив

## CONTENT

Доступ: public

Перемещает значение массива в массив

Если значение пустое - конвертирует его в массив. Если значение не массив - не делает ничего.

Параметры:
* stappler::data::ValueTemplate::ArrayType&&


# ::stappler::data::ValueTemplate<typename>::addDict(stappler::data::ValueTemplate::DictionaryType const&)

## BRIEF

Добавляет значение словаря в массив

## CONTENT

Доступ: public

Добавляет значение словаря в массив

Если значение пустое - конвертирует его в массив. Если значение не массив - не делает ничего.

Параметры:
* stappler::data::ValueTemplate::DictionaryType const&


# ::stappler::data::ValueTemplate<typename>::addDict(stappler::data::ValueTemplate::DictionaryType&&)

## BRIEF

Перемещает значение словаря в массив

## CONTENT

Доступ: public

Перемещает значение словаря в массив

Если значение пустое - конвертирует его в массив. Если значение не массив - не делает ничего.

Параметры:
* stappler::data::ValueTemplate::DictionaryType&&


# ::stappler::data::ValueTemplate<typename>::getBool() const

## BRIEF

Возвращает булево значение

## CONTENT

Доступ: public

Возвращает булево значение. Если значение не булево - возвращает false.

Возвращает:
* bool

# ::stappler::data::ValueTemplate<typename>::getInteger(int64_t) const

## BRIEF

Возвращает целочисленное значение

## CONTENT

Доступ: public

Возвращает целочисленное значение. Если значение не целочисленное - возвращает значение по умолчанию.

Параметры:
* int64_t - значение по умолчанию

Возвращает:
* int64_t

# ::stappler::data::ValueTemplate<typename>::getDouble(double) const

## BRIEF

Возвращает значение с плавающей точкой

## CONTENT

Доступ: public

Возвращает значение с плавающей точкой. Если значение не с плавающей точкой - возвращает значение по умолчанию.

Параметры:
* double - значение по умолчанию

Возвращает:
* double

# ::stappler::data::ValueTemplate<typename>::getString()

## BRIEF

Возвращает строковое значение

## CONTENT

Доступ: public

Возвращает строковое значение. Если значение не строковое - возвращает статическую пустую строку

Возвращает:
* StringType&

# ::stappler::data::ValueTemplate<typename>::getBytes()

## BRIEF

Возвращает байтовое значение

## CONTENT

Доступ: public

Возвращает байтовое значение. Если значение не байтовое - возвращает статические пустые байты

Возвращает:
* BytesType&

# ::stappler::data::ValueTemplate<typename>::getArray()

## BRIEF

Возвращает значение массива

## CONTENT

Доступ: public

Возвращает значение массива. Если значение не массив - возвращает статический пустой массив

Возвращает:
* ArrayType&

# ::stappler::data::ValueTemplate<typename>::getDict()

## BRIEF

Возвращает значение словаря

## CONTENT

Доступ: public

Возвращает значение словаря. Если значение не словарь - возвращает статический пустой словарь

Возвращает:
* DictionaryType&

# ::stappler::data::ValueTemplate<typename>::getString() const

## BRIEF

Возвращает строковое значение

## CONTENT

Доступ: public

Возвращает строковое значение. Если значение не строковое - возвращает статическую пустую строку

Возвращает:
* StringType&

# ::stappler::data::ValueTemplate<typename>::getBytes() const

## BRIEF

Возвращает байтовое значение

## CONTENT

Доступ: public

Возвращает байтовое значение. Если значение не байтовое - возвращает статические пустые байты

Возвращает:
* BytesType&

# ::stappler::data::ValueTemplate<typename>::getArray() const

## BRIEF

Возвращает значение массива

## CONTENT

Доступ: public

Возвращает значение массива. Если значение не массив - возвращает статический пустой массив

Возвращает:
* ArrayType&

# ::stappler::data::ValueTemplate<typename>::getDict() const

## BRIEF

Возвращает значение словаря

## CONTENT

Доступ: public

Возвращает значение словаря. Если значение не словарь - возвращает статический пустой словарь

Возвращает:
* DictionaryType&

# ::stappler::data::ValueTemplate<typename>::getBool<class>(Key&&) const

## BRIEF

Возвращает булево значение по ключу

## CONTENT

Доступ: public

Возвращает булево значение по ключу

Если ключ строковый - используется интерфейс словаря. Если ключ целочисленный, используется интерфейс массива. Если тип ключа и значения не совпадают, или ключ не доступен в контейнере, возвращает false.

Параметры шаблона:
* class Key

Параметры:
* Key&&

Возвращает:
* bool

# ::stappler::data::ValueTemplate<typename>::getInteger<class>(Key&&,int64_t) const

## BRIEF

Возвращает целочисленное значение по ключу

## CONTENT

Доступ: public

Возвращает целочисленное значение по ключу

Если ключ строковый - используется интерфейс словаря. Если ключ целочисленный, используется интерфейс массива. Если тип ключа и значения не совпадают, или ключ не доступен в контейнере, возвращает значение по умолчанию.

Параметры шаблона:
* class Key

Параметры:
* Key&&
* int64_t - значение по умолчанию

Возвращает:
* int64_t

# ::stappler::data::ValueTemplate<typename>::getDouble<class>(Key&&,double) const

## BRIEF

Возвращает значение с плавающей точкой по ключу

## CONTENT

Доступ: public

Возвращает значение с плавающей точкой по ключу

Если ключ строковый - используется интерфейс словаря. Если ключ целочисленный, используется интерфейс массива. Если тип ключа и значения не совпадают, или ключ не доступен в контейнере, возвращает значение по умолчанию.

Параметры шаблона:
* class Key

Параметры:
* Key&&
* double - значение по умолчанию

Возвращает:
* double

# ::stappler::data::ValueTemplate<typename>::getString<class>(Key&&)

## BRIEF

Возвращает строку по ключу

## CONTENT

Доступ: public

Возвращает строку по ключу

Если ключ строковый - используется интерфейс словаря. Если ключ целочисленный, используется интерфейс массива. Если тип ключа и значения не совпадают, или ключ не доступен в контейнере, возвращает статическую пустую строку.

Параметры шаблона:
* class Key

Параметры:
* Key&&

Возвращает:
* StringType&

# ::stappler::data::ValueTemplate<typename>::getString<class>(Key&&) const

## BRIEF

Возвращает строку по ключу

## CONTENT

Доступ: public

Возвращает строку по ключу

Если ключ строковый - используется интерфейс словаря. Если ключ целочисленный, используется интерфейс массива. Если тип ключа и значения не совпадают, или ключ не доступен в контейнере, возвращает статическую пустую строку.

Параметры шаблона:
* class Key

Параметры:
* Key&&

Возвращает:
* StringType&

# ::stappler::data::ValueTemplate<typename>::getBytes<class>(Key&&)

## BRIEF

Возвращает байтовую строку по ключу

## CONTENT

Доступ: public

Возвращает байтовую строку по ключу

Если ключ строковый - используется интерфейс словаря. Если ключ целочисленный, используется интерфейс массива. Если тип ключа и значения не совпадают, или ключ не доступен в контейнере, возвращает статическую пустую байтовую строку.

Параметры шаблона:
* class Key

Параметры:
* Key&&

Возвращает:
* BytesType&

# ::stappler::data::ValueTemplate<typename>::getBytes<class>(Key&&) const

## BRIEF

Возвращает байтовую строку по ключу

## CONTENT

Доступ: public

Возвращает байтовую строку по ключу

Если ключ строковый - используется интерфейс словаря. Если ключ целочисленный, используется интерфейс массива. Если тип ключа и значения не совпадают, или ключ не доступен в контейнере, возвращает статическую пустую байтовую строку.

Параметры шаблона:
* class Key

Параметры:
* Key&&

Возвращает:
* BytesType&

# ::stappler::data::ValueTemplate<typename>::getArray<class>(Key&&)

## BRIEF

Возвращает массив по ключу

## CONTENT

Доступ: public

Возвращает массив по ключу

Если ключ строковый - используется интерфейс словаря. Если ключ целочисленный, используется интерфейс массива. Если тип ключа и значения не совпадают, или ключ не доступен в контейнере, возвращает статический пустой массив.

Параметры шаблона:
* class Key

Параметры:
* Key&&

Возвращает:
* ArrayType&

# ::stappler::data::ValueTemplate<typename>::getArray<class>(Key&&) const

## BRIEF

Возвращает массив по ключу

## CONTENT

Доступ: public

Возвращает массив по ключу

Если ключ строковый - используется интерфейс словаря. Если ключ целочисленный, используется интерфейс массива. Если тип ключа и значения не совпадают, или ключ не доступен в контейнере, возвращает статический пустой массив.

Параметры шаблона:
* class Key

Параметры:
* Key&&

Возвращает:
* ArrayType&

# ::stappler::data::ValueTemplate<typename>::getDict<class>(Key&&)

## BRIEF

Возвращает словарь по ключу

## CONTENT

Доступ: public

Возвращает словарь по ключу

Если ключ строковый - используется интерфейс словаря. Если ключ целочисленный, используется интерфейс массива. Если тип ключа и значения не совпадают, или ключ не доступен в контейнере, возвращает статический пустой словарь.

Параметры шаблона:
* class Key

Параметры:
* Key&&

Возвращает:
* DictionaryType&

# ::stappler::data::ValueTemplate<typename>::getDict<class>(Key&&) const

## BRIEF

Возвращает словарь по ключу

## CONTENT

Доступ: public

Возвращает словарь по ключу

Если ключ строковый - используется интерфейс словаря. Если ключ целочисленный, используется интерфейс массива. Если тип ключа и значения не совпадают, или ключ не доступен в контейнере, возвращает статический пустой словарь.

Параметры шаблона:
* class Key

Параметры:
* Key&&

Возвращает:
* DictionaryType&

# ::stappler::data::ValueTemplate<typename>::erase<class>(Key&&)

## BRIEF

Удаляер значение по ключу

## CONTENT

Доступ: public

Удаляер значение по ключу

Если ключ строковый - используется интерфейс словаря. Если ключ целочисленный, используется интерфейс массива. Если тип ключа и значения не совпадают, или ключ не доступен в контейнере, не делает ничего.

Параметры шаблона:
* class Key

Параметры:
* Key&&

Возвращает:
* bool

# ::stappler::data::ValueTemplate<typename>::newDict<class>(Key&&)

## BRIEF

Создаёт новый словарь по ключу

## CONTENT

Доступ: public

Создаёт новый словарь по ключу

Если ключ строковый - используется интерфейс словаря, пустое значение конвертируется в словарь. Если ключ целочисленный, используется интерфейс массива, пустое значение конвертируется в массив.

Параметры шаблона:
* class Key

Параметры:
* Key&&

Возвращает:
* Self&

# ::stappler::data::ValueTemplate<typename>::newArray<class>(Key&&)

## BRIEF

Создаёт новый массив по ключу

## CONTENT

Доступ: public

Создаёт новый массив по ключу

Если ключ строковый - используется интерфейс словаря, пустое значение конвертируется в словарь. Если ключ целочисленный, используется интерфейс массива, пустое значение конвертируется в массив.

Параметры шаблона:
* class Key

Параметры:
* Key&&

Возвращает:
* Self&

# ::stappler::data::ValueTemplate<typename>::addDict()

## BRIEF

Добавялет новый словарь в массив

## CONTENT

Доступ: public

Добавялет новый словарь в массив

Если значение пустое - оно конвертируется в массив. Если значение не массив - не делает ничего, возвращает статический Null.

Возвращает:
* Self& - новое значение

# ::stappler::data::ValueTemplate<typename>::addArray()

## BRIEF

Добавялет новый массив в массив

## CONTENT

Доступ: public

Добавялет новый массив в массив

Если значение пустое - оно конвертируется в массив. Если значение не массив - не делает ничего, возвращает статический Null.

Возвращает:
* Self& - новое значение

# ::stappler::data::ValueTemplate<typename>::slice(int,int)

## BRIEF

Возвращает сегмент массива как новое значение

## CONTENT

Доступ: public

Возвращает сегмент массива как новое значение. Если значение не массив - не делает ничего, возвращает пустое значение. Значения копируются в новый массив.

Параметры:
* int - начальный индекс
* int - длина сегмента

Возвращает:
* Self

# ::stappler::data::ValueTemplate<typename>::operator bool() const

## BRIEF

Проверяет значение на пустоту

## CONTENT

Доступ: public

Проверяет значение на пустоту. Может использоваться только в логических операциях.

Возвращает:
* bool - true если значение пустое

# ::stappler::data::ValueTemplate<typename>::asInteger() const

## BRIEF

Возвращает целочисленное значение или 0

## CONTENT

Доступ: public

Возвращает целочисленное значение или 0

Возвращает:
* int64_t

# ::stappler::data::ValueTemplate<typename>::asDouble() const

## BRIEF

Возвращает значение с плавающей точкой или 0

## CONTENT

Доступ: public

Возвращает значение с плавающей точкой или 0

Возвращает:
* double

# ::stappler::data::ValueTemplate<typename>::asBool() const

## BRIEF

Возвращает булево значение или false

## CONTENT

Доступ: public

Возвращает булево значение или false

Возвращает:
* bool

# ::stappler::data::ValueTemplate<typename>::asString() const

## BRIEF

Возвращает строковое значение или пустую строку

## CONTENT

Доступ: public

Возвращает строковое значение или пустую строку

Возвращает:
* StringType

# ::stappler::data::ValueTemplate<typename>::asBytes() const

## BRIEF

Возвращает байтовое значение или пустой байтовый контейнер

## CONTENT

Доступ: public

Возвращает байтовое значение или пустой байтовый контейнер

Возвращает:
* BytesType

# ::stappler::data::ValueTemplate<typename>::asArray()

## BRIEF

Возвращает значение массива или статический пустой массив

## CONTENT

Доступ: public

Возвращает значение массива или статический пустой массив

Возвращает:
* ArrayType&

# ::stappler::data::ValueTemplate<typename>::asArray() const

## BRIEF

Возвращает значение массива или статический пустой массив

## CONTENT

Доступ: public

Возвращает значение массива или статический пустой массив

Возвращает:
* ArrayType&

# ::stappler::data::ValueTemplate<typename>::asDict()

## BRIEF

Возвращает значение словаря или статический пустой словаря

## CONTENT

Доступ: public

Возвращает значение словаря или статический пустой словаря

Возвращает:
* DictionaryType&

# ::stappler::data::ValueTemplate<typename>::asDict() const

## BRIEF

Возвращает значение словаря или статический пустой словаря

## CONTENT

Доступ: public

Возвращает значение словаря или статический пустой словаря

Возвращает:
* DictionaryType&

# ::stappler::data::ValueTemplate<typename>::size() const

## BRIEF

Возвращает размер значения

## CONTENT

Доступ: public

Возвращает размер значения. Длину символьной или байтовой строки, размер массива или словаря. В остальных случаях 0.

Возвращает:
* size_t

# ::stappler::data::ValueTemplate<typename>::empty() const

## BRIEF

Выполянет глубокую проверку на пустоту

## CONTENT

Доступ: public

Выполянет глубокую проверку на пустоту. Значение пустое в случае, если оно не содержит ничего, либо содержит пустую символьную и байтовую строку, пустой массив или пустой словарь.

Возвращает:
* bool - true если значение пустое

# ::stappler::data::ValueTemplate<typename>::clear()

## BRIEF

Очишает значение

## CONTENT

Доступ: public

Очишает значение, делает его пустым

# ::stappler::data::ValueTemplate<typename>::encode<class,class>(Stream&) const

## BRIEF

Кодирует значение с помощью потокового кодировщика

## CONTENT

Доступ: public

Кодирует значение с помощью потокового кодировщика. Кодировщик может определять набор функций для своей работы.

`onNextValue` - вызывается при переходе к следующему значению в контейнере

`onKey` - вызывается для ключа словаря

`onBeginArray` - вызывается при начале разбора массива

`onEndArray` - вызывается при конце разбора массива

`onBeginDict` - вызывается при начале разбора словаря

`onEndDict` - вызывается при конце разбора словаря

`onKeyValuePair` - вызывается для пары ключ-значение в словаре

`onValue` - вызывается для следующего значения в контейнере

`onArrayValue` - вызывается для следующего значения в массиве

Также, кодировщик должен определить функцию `write` для всех базовых типов значения: nullptr_t булева, целого числа, числа с плавающей точкой, символьной строки и байтовой строки

Параметры шаблона:
* class Stream - класс кодировщика
* class Traits - класс проверки функций кодировщика

Параметры:
* Stream& - объект кодировщика


# ::stappler::data::ValueTemplate<typename>::isNull() const

## BRIEF

Проверяет, хранит ли значение типа null

## CONTENT

Доступ: public

Проверяет, хранит ли значение типа null

Возвращает:
* bool

# ::stappler::data::ValueTemplate<typename>::isBasicType() const

## BRIEF

Проверяет, хранит ли значение базовый тип

## CONTENT

Доступ: public

Проверяет, хранит ли значение базовый тип. То есть, не массив и не словарь.

Возвращает:
* bool

# ::stappler::data::ValueTemplate<typename>::isArray() const

## BRIEF

Проверяет, хранит ли значение массив

## CONTENT

Доступ: public

Проверяет, хранит ли значение массив

Возвращает:
* bool

# ::stappler::data::ValueTemplate<typename>::isDictionary() const

## BRIEF

Проверяет, хранит ли значение словарь

## CONTENT

Доступ: public

Проверяет, хранит ли значение словарь

Возвращает:
* bool

# ::stappler::data::ValueTemplate<typename>::isBool() const

## BRIEF

Проверяет, хранит ли значение булев тип

## CONTENT

Доступ: public

Проверяет, хранит ли значение булев тип

Возвращает:
* bool

# ::stappler::data::ValueTemplate<typename>::isInteger() const

## BRIEF

Проверяет, хранит ли значение целое число

## CONTENT

Доступ: public

Проверяет, хранит ли значение целое число

Возвращает:
* bool

# ::stappler::data::ValueTemplate<typename>::isDouble() const

## BRIEF

Проверяет, хранит ли значение число с плавающей точкой

## CONTENT

Доступ: public

Проверяет, хранит ли значение число с плавающей точкой

Возвращает:
* bool

# ::stappler::data::ValueTemplate<typename>::isString() const

## BRIEF

Проверяет, хранит ли значение символьную строку

## CONTENT

Доступ: public

Проверяет, хранит ли значение символьную строку

Возвращает:
* bool

# ::stappler::data::ValueTemplate<typename>::isBytes() const

## BRIEF

Проверяет, хранит ли значение байтовую строку

## CONTENT

Доступ: public

Проверяет, хранит ли значение байтовую строку

Возвращает:
* bool

# ::stappler::data::ValueTemplate<typename>::getType() const

## BRIEF

Возвращает тип значения

## CONTENT

Доступ: public

Возвращает тип значения

Возвращает:
* stappler::data::ValueTemplate::Type

# ::stappler::data::ValueTemplate<typename>::isNull<class>(Key&&) const

## BRIEF

Проверяет, хранится ли пустое значение по ключу

## CONTENT

Доступ: public

Проверяет, хранится ли пустое значение по ключу

Если ключ строковый - используется интерфейс словаря. Если ключ целочисленный, используется интерфейс массива. Если тип ключа и значения не совпадают, или ключ не доступен в контейнере, возвращает false.

Параметры шаблона:
* class Key

Параметры:
* Key&&

Возвращает:
* bool

# ::stappler::data::ValueTemplate<typename>::isBasicType<class>(Key&&) const

## BRIEF

Проверяет, хранится ли значение базового типа по ключу

## CONTENT

Доступ: public

Проверяет, хранится ли значение базового типа по ключу

Если ключ строковый - используется интерфейс словаря. Если ключ целочисленный, используется интерфейс массива. Если тип ключа и значения не совпадают, или ключ не доступен в контейнере, возвращает false.

Параметры шаблона:
* class Key

Параметры:
* Key&&

Возвращает:
* bool

# ::stappler::data::ValueTemplate<typename>::isArray<class>(Key&&) const

## BRIEF

Проверяет, хранится ли массив по ключу

## CONTENT

Доступ: public

Проверяет, хранится ли массив по ключу

Если ключ строковый - используется интерфейс словаря. Если ключ целочисленный, используется интерфейс массива. Если тип ключа и значения не совпадают, или ключ не доступен в контейнере, возвращает false.

Параметры шаблона:
* class Key

Параметры:
* Key&&

Возвращает:
* bool

# ::stappler::data::ValueTemplate<typename>::isDictionary<class>(Key&&) const

## BRIEF

Проверяет, хранится ли словарь по ключу

## CONTENT

Доступ: public

Проверяет, хранится ли словарь по ключу

Если ключ строковый - используется интерфейс словаря. Если ключ целочисленный, используется интерфейс массива. Если тип ключа и значения не совпадают, или ключ не доступен в контейнере, возвращает false.

Параметры шаблона:
* class Key

Параметры:
* Key&&

Возвращает:
* bool

# ::stappler::data::ValueTemplate<typename>::isBool<class>(Key&&) const

## BRIEF

Проверяет, хранится ли булево значение по ключу

## CONTENT

Доступ: public

Проверяет, хранится ли булево значение по ключу

Если ключ строковый - используется интерфейс словаря. Если ключ целочисленный, используется интерфейс массива. Если тип ключа и значения не совпадают, или ключ не доступен в контейнере, возвращает false.

Параметры шаблона:
* class Key

Параметры:
* Key&&

Возвращает:
* bool

# ::stappler::data::ValueTemplate<typename>::isInteger<class>(Key&&) const

## BRIEF

Проверяет, хранится ли целочисленное значение по ключу

## CONTENT

Доступ: public

Проверяет, хранится ли целочисленное значение по ключу

Если ключ строковый - используется интерфейс словаря. Если ключ целочисленный, используется интерфейс массива. Если тип ключа и значения не совпадают, или ключ не доступен в контейнере, возвращает false.

Параметры шаблона:
* class Key

Параметры:
* Key&&

Возвращает:
* bool

# ::stappler::data::ValueTemplate<typename>::isDouble<class>(Key&&) const

## BRIEF

Проверяет, хранится ли значение с плавающей точкой по ключу

## CONTENT

Доступ: public

Проверяет, хранится ли значение с плавающей точкой по ключу

Если ключ строковый - используется интерфейс словаря. Если ключ целочисленный, используется интерфейс массива. Если тип ключа и значения не совпадают, или ключ не доступен в контейнере, возвращает false.

Параметры шаблона:
* class Key

Параметры:
* Key&&

Возвращает:
* bool

# ::stappler::data::ValueTemplate<typename>::isString<class>(Key&&) const

## BRIEF

Проверяет, хранится ли строковое значение по ключу

## CONTENT

Доступ: public

Проверяет, хранится ли строковое значение по ключу

Если ключ строковый - используется интерфейс словаря. Если ключ целочисленный, используется интерфейс массива. Если тип ключа и значения не совпадают, или ключ не доступен в контейнере, возвращает false.

Параметры шаблона:
* class Key

Параметры:
* Key&&

Возвращает:
* bool

# ::stappler::data::ValueTemplate<typename>::isBytes<class>(Key&&) const

## BRIEF

Проверяет, хранится ли байтовое значение по ключу

## CONTENT

Доступ: public

Проверяет, хранится ли байтовое значение по ключу

Если ключ строковый - используется интерфейс словаря. Если ключ целочисленный, используется интерфейс массива. Если тип ключа и значения не совпадают, или ключ не доступен в контейнере, возвращает false.

Параметры шаблона:
* class Key

Параметры:
* Key&&

Возвращает:
* bool

# ::stappler::data::ValueTemplate<typename>::getType<class>(Key&&) const

## BRIEF

Возвращет тип значения по ключу

## CONTENT

Доступ: public

Возвращет тип значения по ключу

Если ключ строковый - используется интерфейс словаря. Если ключ целочисленный, используется интерфейс массива. Если тип ключа и значения не совпадают, или ключ не доступен в контейнере, возвращает EMPTY.

Параметры шаблона:
* class Key

Параметры:
* Key&&

Возвращает:
* stappler::data::ValueTemplate::Type

# ::stappler::data::ValueTemplate<typename>::convert<typename>() const

## BRIEF

Конвертирует значение в другой интерфейс памяти

## CONTENT

Доступ: public

Конвертирует значение в другой интерфейс памяти

Параметры шаблона:
* typename NewInterface - новый интерфейс памяти

Возвращает:
* ValueTemplate<NewInterface>

# ::stappler::data::ValueTemplate<typename>::reset(stappler::data::ValueTemplate::Type)

## BRIEF

Перезаписывает значение новым типом

## CONTENT

Доступ: protected

Перезаписывает значение новым типом

Параметры:
* stappler::data::ValueTemplate::Type


# ::stappler::data::ValueTemplate<typename>::convertToDict()

## BRIEF

Конвертирует значение в словарь, если возможно

## CONTENT

Доступ: protected

Конвертирует значение в словарь, если возможно

Возвращает:
* bool - успешность конвертации, либо значение уже словарь

# ::stappler::data::ValueTemplate<typename>::convertToArray(int)

## BRIEF

Конвертирует значение в массив определённой длины, если возможно

## CONTENT

Доступ: protected

Конвертирует значение в массив определённой длины, если возможно. Если длина массива больше требуемой - не делает ничего.

Параметры:
* int - требуемая длина массива

Возвращает:
* bool - успешность конвертации, либо значение уже словарь

# ::stappler::data::ValueTemplate<typename>::compare(stappler::data::ValueTemplate::ArrayType const&,stappler::data::ValueTemplate::ArrayType const&) const

## BRIEF

Выполняет глубокое рекурсивное сравнение двух массивов

## CONTENT

Доступ: protected

Выполняет глубокое рекурсивное сравнение двух массивов

Параметры:
* stappler::data::ValueTemplate::ArrayType const&
* stappler::data::ValueTemplate::ArrayType const&

Возвращает:
* bool - true если массивы совпадают

# ::stappler::data::ValueTemplate<typename>::compare(stappler::data::ValueTemplate::DictionaryType const&,stappler::data::ValueTemplate::DictionaryType const&) const

## BRIEF

Выполняет глубокое рекурсивное сравнение двух словарей

## CONTENT

Доступ: protected

Выполняет глубокое рекурсивное сравнение двух словарей

Параметры:
* stappler::data::ValueTemplate::DictionaryType const&
* stappler::data::ValueTemplate::DictionaryType const&

Возвращает:
* bool - true если словари совпадают

# ::stappler::data::ValueTemplate<typename>::_type

## BRIEF

Тип хранимого значения

## CONTENT

Доступ: protected

Тип хранимого значения

Тип: stappler::data::ValueTemplate::Type


# ::stappler::data::ValueTemplate<typename>::

## BRIEF

Объединение хранимого значения

## CONTENT

Доступ: protected

Объединение хранимого значения


# ::stappler::data::ValueTemplate<typename>::intVal

## BRIEF

Хранимое целочисленное значение

## CONTENT

Хранимое целочисленное значение

Тип: int64_t


# ::stappler::data::ValueTemplate<typename>::doubleVal

## BRIEF

Хранимое значение с плавающей точкой

## CONTENT

Хранимое значение с плавающей точкой

Тип: double


# ::stappler::data::ValueTemplate<typename>::boolVal

## BRIEF

Хранимое булево значение

## CONTENT

Хранимое булево значение

Тип: bool


# ::stappler::data::ValueTemplate<typename>::strVal

## BRIEF

Хранимое строковое значение

## CONTENT

Хранимое строковое значение

Тип: stappler::data::ValueTemplate::StringType*


# ::stappler::data::ValueTemplate<typename>::bytesVal

## BRIEF

Хранимое байтовое значение

## CONTENT

Хранимое байтовое значение

Тип: stappler::data::ValueTemplate::BytesType*


# ::stappler::data::ValueTemplate<typename>::arrayVal

## BRIEF

Хранимое значение массива

## CONTENT

Хранимое значение массива

Тип: stappler::data::ValueTemplate::ArrayType*


# ::stappler::data::ValueTemplate<typename>::dictVal

## BRIEF

Хранимое значение словаря

## CONTENT

Хранимое значение словаря

Тип: stappler::data::ValueTemplate::DictionaryType*

# ::stappler::data::ValueTemplate<Interface>::Null

## BRIEF

Статическое значение Null

## CONTENT

Статическое значение Null

Тип: typename ValueTemplate<Interface>::Self const

# ::stappler::data::ValueTemplate<Interface>::StringNull

## BRIEF

Статическая пустая символьная строка

## CONTENT

Статическая пустая символьная строка

Тип: typename ValueTemplate<Interface>::StringType const

# ::stappler::data::ValueTemplate<Interface>::BytesNull

## BRIEF

Статическая пустая байтовая строка

## CONTENT

Статическая пустая байтовая строка

Тип: typename ValueTemplate<Interface>::BytesType const

# ::stappler::data::ValueTemplate<Interface>::ArrayNull

## BRIEF

Статический пустой массив

## CONTENT

Статический пустой массив

Тип: typename ValueTemplate<Interface>::ArrayType const

# ::stappler::data::ValueTemplate<Interface>::DictionaryNull

## BRIEF

Статический пустой словарь

## CONTENT

Статический пустой словарь

Тип: typename ValueTemplate<Interface>::DictionaryType const
