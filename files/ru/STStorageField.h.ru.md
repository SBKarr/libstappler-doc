Title: STStorageField.h


# STAPPLER_DB_STSTORAGEFIELD_H_

## BRIEF

Заголово с определением полей для схемы данных

## CONTENT

Заголово с определением полей для схемы данных


# ::stappler::db::Type

## BRIEF

Базовый тип поля

## CONTENT

Базовый тип поля

Значения:
* None
* Integer - целое число
* Float - число с плавающей точкой
* Boolean - булево
* Text - текстовое
* Bytes - байтовое
* Data - нетипизированные структурированные данные
* Extra - нетипизированные структурированные данные с предустановленной схемой
* Object - связь объектом другой схемы
* Set - набор объектов другой схемы
* Array - массив
* File - внешний файл
* Image - внешний файл - изображение
* View - отображение
* FullTextView - полнотекстовое отображение
* Virtual - виртуальное поле
* Custom - пользовательское поле


# ::stappler::db::Flags

## BRIEF

Функциональные флаги поля

## CONTENT

Значения:
* None
* Required - поле обязательно для схемы
* Protected - поле недоступно для чтения пльзователем
* ReadOnly - поле недоступно для записи
* Reference - объект или набор объектов указывается по ссылке. иначе, имеют место отношение владения
* Unique - поле имеет уникальное значение для схемы
* AutoCTime - целочисленное поле автоматически заполняется временем создания
* AutoMTime - целочисленное поле автоматически заполняется временем изменения
* AutoUser - целочисленное или объектное поле автоматически заполняется идентификатором текущего пользователя
* Indexed - поле индексируется для запросов по нему
* Admin - поле доступно только администратором
* ForceInclude - поле всегда включается в результат запроса (однако, удаляется из него при выводе, если пользователь его не запрашивал, но доступно в функциях фильтрации)
* ForceExclude - поле исключается из вывода, если не запрошено явно
* Composed - набор или объект входит в композиционную группу с родителем и имеет общее время обновления для всей группы
* Compressed - поле с нетипизированными данными хранится в сжатом виде
* Enum - целочисленное поле является перечислением
* PatternIndexed - текстовое поле индексируется для поиска по префиксу и суффиксу
* TrigramIndexed - текстовое поле индексируется для поиска по части слова
* TsNormalize_DocLengthLog - способ нормализации для веса слова в полнотекстовом поиске для поля. Делит ранг слова на 1 + логарифм длины документа
* TsNormalize_DocLength - способ нормализации для веса слова в полнотекстовом поиске для поля. Делит ранг на длину документа
* TsNormalize_UniqueWordsCount - способ нормализации для веса слова в полнотекстовом поиске для поля. Делит ранг на число уникальных слов в документе
* TsNormalize_UniqueWordsCountLog - способ нормализации для веса слова в полнотекстовом поиске для поля Делит ранг на 1 + логарифм от числа уникальных слов в документе


# ::stappler::db::operator|(stappler::db::Flags const&,stappler::db::Flags const&)

## BRIEF

Автоматически созданный оператор битового флага

## CONTENT

Автоматически созданный оператор битового флага

Параметры:
* stappler::db::Flags const&
* stappler::db::Flags const&

Возвращает:
* stappler::db::Flags

# ::stappler::db::operator&(stappler::db::Flags const&,stappler::db::Flags const&)

## BRIEF

Автоматически созданный оператор битового флага

## CONTENT

Автоматически созданный оператор битового флага

Параметры:
* stappler::db::Flags const&
* stappler::db::Flags const&

Возвращает:
* stappler::db::Flags

# ::stappler::db::operator^(stappler::db::Flags const&,stappler::db::Flags const&)

## BRIEF

Автоматически созданный оператор битового флага

## CONTENT

Автоматически созданный оператор битового флага

Параметры:
* stappler::db::Flags const&
* stappler::db::Flags const&

Возвращает:
* stappler::db::Flags

# ::stappler::db::operator|=(stappler::db::Flags&,stappler::db::Flags const&)

## BRIEF

Автоматически созданный оператор битового флага

## CONTENT

Автоматически созданный оператор битового флага

Параметры:
* stappler::db::Flags&
* stappler::db::Flags const&

Возвращает:
* stappler::db::Flags&

# ::stappler::db::operator&=(stappler::db::Flags&,stappler::db::Flags const&)

## BRIEF

Автоматически созданный оператор битового флага

## CONTENT

Автоматически созданный оператор битового флага

Параметры:
* stappler::db::Flags&
* stappler::db::Flags const&

Возвращает:
* stappler::db::Flags&

# ::stappler::db::operator^=(stappler::db::Flags&,stappler::db::Flags const&)

## BRIEF

Автоматически созданный оператор битового флага

## CONTENT

Автоматически созданный оператор битового флага

Параметры:
* stappler::db::Flags&
* stappler::db::Flags const&

Возвращает:
* stappler::db::Flags&

# ::stappler::db::operator==(stappler::db::Flags const&,std::underlying_type<Flags>::type const&)

## BRIEF

Автоматически созданный оператор битового флага

## CONTENT

Автоматически созданный оператор битового флага

Параметры:
* stappler::db::Flags const&
* std::underlying_type<Flags>::type const&

Возвращает:
* bool

# ::stappler::db::operator==(std::underlying_type<Flags>::type const&,stappler::db::Flags const&)

## BRIEF

Автоматически созданный оператор битового флага

## CONTENT

Автоматически созданный оператор битового флага

Параметры:
* std::underlying_type<Flags>::type const&
* stappler::db::Flags const&

Возвращает:
* bool

# ::stappler::db::operator!=(stappler::db::Flags const&,std::underlying_type<Flags>::type const&)

## BRIEF

Автоматически созданный оператор битового флага

## CONTENT

Автоматически созданный оператор битового флага

Параметры:
* stappler::db::Flags const&
* std::underlying_type<Flags>::type const&

Возвращает:
* bool

# ::stappler::db::operator!=(std::underlying_type<Flags>::type const&,stappler::db::Flags const&)

## BRIEF

Автоматически созданный оператор битового флага

## CONTENT

Автоматически созданный оператор битового флага

Параметры:
* std::underlying_type<Flags>::type const&
* stappler::db::Flags const&

Возвращает:
* bool

# ::stappler::db::operator~(stappler::db::Flags const&)

## BRIEF

Автоматически созданный оператор битового флага

## CONTENT

Автоматически созданный оператор битового флага

Параметры:
* stappler::db::Flags const&

Возвращает:
* stappler::db::Flags

# ::stappler::db::checkIfComparationIsValid(stappler::db::Type,stappler::db::Comparation,stappler::db::Flags)

## BRIEF

Проверяет, возможен ли оператор сравнения для поля определённого типа и флагов

## CONTENT

Проверяет, возможен ли оператор сравнения для поля определённого типа и флагов

Параметры:
* stappler::db::Type
* stappler::db::Comparation
* stappler::db::Flags

Возвращает:
* bool

# ::stappler::db::Transform

## BRIEF

Способ трансформации значения поля

## CONTENT

Способ трансформации значения поля

Значения:
* None
* Text - простой текст
* Identifier - С-идентификатор
* Alias - Псевдоним (индексированный идентификатор)
* Url
* Email
* Number - номер в текстовой форме
* Hexadecimial - шестнадцатиричное число
* Base64 - текст в Base64
* Uuid
* PublicKey - публичный ключ
* Array - массив (для нетипизированных данных)
* Password - хранимый пароль


# ::stappler::db::ValidationLevel

## BRIEF

Уровень для вычисления хэша схемы данных

## CONTENT

Уровень для вычисления хэша схемы данных

Значения:
* NamesAndTypes - только имена полей и их типы
* Slots - полностью слоты полей
* Full - полностью данные схемы


# ::stappler::db::Linkage

## BRIEF

Способ связи полей

## CONTENT

Способ связи полей

Значения:
* Auto - автоматическая
* Manual - ручная
* None


# ::stappler::db::MinLength

## BRIEF

Псевдоним для определения аргумента минимальной длины

## CONTENT

Псевдоним для определения аргумента минимальной длины


# ::stappler::db::MaxLength

## BRIEF

Псевдоним для определения аргумента максимальной длины

## CONTENT

Псевдоним для определения аргумента максимальной длины


# ::stappler::db::PasswordSalt

## BRIEF

Псевдоним для определения аргумента ключа для пароля

## CONTENT

Псевдоним для определения аргумента ключа для пароля


# ::stappler::db::ForeignLink

## BRIEF

Псевдоним для определения аргумента внешней ссылки

## CONTENT

Псевдоним для определения аргумента внешней ссылки


# ::stappler::db::Documentation

## BRIEF

Псевдоним для определения аргумента документации

## CONTENT

Псевдоним для определения аргумента документации


# ::stappler::db::ImagePolicy

## BRIEF

Способ работы с изображениями, размер которых отличается от требуемого

## CONTENT

Способ работы с изображениями, размер которых отличается от требуемого

Значения:
* Resize - изменить размер
* Reject - отказать в приёме изменений


# ::stappler::db::MaxFileSize

## BRIEF

Псевдоним для определения аргумента максимального размера файла

## CONTENT

Псевдоним для определения аргумента максимального размера файла

# ::stappler::db::MaxImageSize

## BRIEF

Структура максимального размера изображения

## CONTENT

Структура максимального размера изображения


# ::stappler::db::MaxImageSize::width

## BRIEF

Ширина

## CONTENT

Ширина

Тип: size_t


# ::stappler::db::MaxImageSize::height

## BRIEF

Высота

## CONTENT

Высота

Тип: size_t


# ::stappler::db::MaxImageSize::policy

## BRIEF

Способ работы ограничения

## CONTENT

Способ работы ограничения

Тип: stappler::db::ImagePolicy


# ::stappler::db::MaxImageSize::MaxImageSize()

## BRIEF

Конструктор

## CONTENT

Конструктор


# ::stappler::db::MaxImageSize::MaxImageSize(size_t,size_t,stappler::db::ImagePolicy)

## BRIEF

Конструктор

## CONTENT

Конструктор

Параметры:
* size_t - ширина
* size_t - высота
* stappler::db::ImagePolicy


# ::stappler::db::MinImageSize

## BRIEF

Структура минимального размера изображения

## CONTENT

Структура минимального размера изображения


# ::stappler::db::MinImageSize::width

## BRIEF

Ширина

## CONTENT

Ширина

Тип: size_t


# ::stappler::db::MinImageSize::height

## BRIEF

Высота

## CONTENT

Высота

Тип: size_t


# ::stappler::db::MinImageSize::policy

## BRIEF

Способ работы ограничения

## CONTENT

Способ работы ограничения

Тип: stappler::db::ImagePolicy


# ::stappler::db::MinImageSize::MinImageSize()

## BRIEF

Конструктор

## CONTENT

Конструктор


# ::stappler::db::MinImageSize::MinImageSize(size_t,size_t,stappler::db::ImagePolicy)

## BRIEF

Конструктор

## CONTENT

Конструктор

Параметры:
* size_t - ширина
* size_t - высота
* stappler::db::ImagePolicy


# ::stappler::db::Thumbnail

## BRIEF

Структура для миниатюры изображения

## CONTENT

Структура для миниатюры изображения

# ::stappler::db::Thumbnail::width

## BRIEF

Ширина

## CONTENT

Ширина

Тип: size_t


# ::stappler::db::Thumbnail::height

## BRIEF

Высота

## CONTENT

Высота

Тип: size_t


# ::stappler::db::Thumbnail::name

## BRIEF

Имя миниатюры

## CONTENT

Имя миниатюры

Тип: stappler::mem_pool::String


# ::stappler::db::Thumbnail::Thumbnail(stappler::mem_pool::String&&,size_t,size_t)

## BRIEF

Конструктор

## CONTENT

Конструктор

Параметры:
* stappler::mem_pool::String&& - имя
* size_t - ширина
* size_t - высота


# ::stappler::db::RemovePolicy

## BRIEF

Политика удаления связанного поля

## CONTENT

Политика удаления связанного поля

Значения:
* Cascade - удалять вместе с исходным
* Restrict - запретить удалять исходное
* Reference - поле является ссылкой, игнорировать удаление исходного объекта
* StrongReference - поле является жесткой ссылкой, удалять вместе с исходным объектом
* Null - назначать NULL при удалении исходного объекта


# ::stappler::db::FilterFn

## BRIEF

Функция фильтрации (устаревшая)

## CONTENT

Функция фильтрации (устаревшая)


# ::stappler::db::DefaultFn

## BRIEF

Функция вывода значения по умолчанию

## CONTENT

Функция вывода значения по умолчанию на основе других полей объекта


# ::stappler::db::ReadFilterFn

## BRIEF

Функция фильтрации поля для вывода его пользователю

## CONTENT

Функция фильтрации поля для вывода его пользователю


# ::stappler::db::WriteFilterFn

## BRIEF

Функция фильтрации поля при вводе его в БД

## CONTENT

Функция фильтрации поля при вводе его в БД


# ::stappler::db::ReplaceFilterFn

## BRIEF

Функция фильтрации при замене значения в поле

## CONTENT

Функция фильтрации при замене значения в поле


# ::stappler::db::ViewLinkageFn

## BRIEF

Функцция для вывода идентификатора исходного объекта при связывании полей отображения

## CONTENT

Функцция для вывода идентификатора исходного объекта при связывании полей отображения. Используется, чтобы установить, к какому объекту должны относиться связываемые объекты.

Используется:
* Полями отображений для вывода исходного объекта из объектов в отображении
* Автоматическими полями для получения исходного объекта из объектов для генерации данных 

# ::stappler::db::ViewFn

## BRIEF

Функция проверяет, должен ли объект внешней схемы относиться к отображению

## CONTENT

Функция проверяет, должен ли объект внешней схемы относиться к отображению


# ::stappler::db::FullTextViewFn

## BRIEF

Функция для извлечения полнотекстовых данных из объекта

## CONTENT

Функция для извлечения полнотекстовых данных из объекта


# ::stappler::db::FullTextQueryFn

## BRIEF

Функция для получения полнотекстового запроса из запроса на сравнение строк

## CONTENT

Функция для получения полнотекстового запроса из запроса на сравнение строк


# ::stappler::db::VirtualReadFn

## BRIEF

Функция для чтения виртуального поля

## CONTENT

Функция для чтения виртуального поля


# ::stappler::db::VirtualWriteFn

## BRIEF

Функция для записи виртуального поля

## CONTENT

Функция для записи виртуального поля


# ::stappler::db::AutoFieldScheme

## BRIEF

Структура для схемы автоматического поля

## CONTENT

Структура для схемы автоматического поля

Базовые классы:
* AllocBase


# ::stappler::db::AutoFieldScheme::ReqVec

## BRIEF

Тип вектора требуемых полей

## CONTENT

Тип вектора требуемых полей


# ::stappler::db::AutoFieldScheme::scheme

## BRIEF

Схема данных для вывода значений поля

## CONTENT

Схема данных для вывода значений поля

Тип: stappler::db::Scheme const&


# ::stappler::db::AutoFieldScheme::requiresForAuto

## BRIEF

Поля, обновление которых вызывает обновление автоматического поля

## CONTENT

Поля, обновление которых вызывает обновление автоматического поля

Тип: ReqVec


# ::stappler::db::AutoFieldScheme::linkage

## BRIEF

Функция для связи объектов внешней схемы с автоматическим полем

## CONTENT

Функция для связи объектов внешней схемы с автоматическим полем

Тип: stappler::db::ViewLinkageFn


# ::stappler::db::AutoFieldScheme::requiresForLinking

## BRIEF

Поля, требуемые для успешной связи поля внешней схемы с автоматическим полем

## CONTENT

Поля, требуемые для успешной связи поля внешней схемы с автоматическим полем

Тип: ReqVec


# ::stappler::db::AutoFieldScheme::AutoFieldScheme(stappler::db::Scheme const&,stappler::db::AutoFieldScheme::ReqVec&&,stappler::db::ViewLinkageFn&&,stappler::db::AutoFieldScheme::ReqVec&&)

## BRIEF

Конструктор автоматического поля

## CONTENT

Конструктор автоматического поля

Параметры:
* stappler::db::Scheme const& - схема. на основе которой формируется поле
* stappler::db::AutoFieldScheme::ReqVec&& - список полей для обноления
* stappler::db::ViewLinkageFn&& - функция связи
* stappler::db::AutoFieldScheme::ReqVec&& - список полей для связи


# ::stappler::db::AutoFieldScheme::AutoFieldScheme(stappler::db::Scheme const&,stappler::db::AutoFieldScheme::ReqVec&&,stappler::db::AutoFieldScheme::ReqVec&&)

## BRIEF

Конструктор автоматического поля

## CONTENT

Конструктор автоматического поля

Параметры:
* stappler::db::Scheme const& - схема. на основе которой формируется поле
* stappler::db::AutoFieldScheme::ReqVec&& - список полей для обноления
* stappler::db::AutoFieldScheme::ReqVec&& - список полей для связи


# ::stappler::db::AutoFieldDef

## BRIEF

Структура определения автоматического поля

## CONTENT

Структура определения автоматического поля


# ::stappler::db::AutoFieldDef::schemes

## BRIEF

Схемы, из которых берёт информацию автоматическое поле

## CONTENT

Схемы, из которых берёт информацию автоматическое поле. Должна быть определена как минимум одна.

Тип: Vector<stappler::db::AutoFieldScheme>


# ::stappler::db::AutoFieldDef::defaultFn

## BRIEF

Функция для получения значения по умолчанию

## CONTENT

Функция для получения значения по умолчанию

Тип: stappler::db::DefaultFn


# ::stappler::db::AutoFieldDef::requireFields

## BRIEF

Поля, требуемые для вычисления значения

## CONTENT

Поля, требуемые для вычисления значения

Тип: Vector<stappler::mem_pool::String>


# ::stappler::db::UniqueConstraintDef

## BRIEF

Структура для определения уникального огрничения

## CONTENT

Структура для определения уникального огрничения


# ::stappler::db::UniqueConstraintDef::name

## BRIEF

Имя ограничения

## CONTENT

Имя ограничения

Тип: stappler::StringView

# ::stappler::db::UniqueConstraintDef::fields

## BRIEF

Список полей для ограничения

## CONTENT

Список полей для ограничения

Тип: Vector<stappler::StringView>


# ::stappler::db::Field

## BRIEF

Базовая структура для поля данных

## CONTENT

Базовая структура для поля данных. Поле конструируется из имени и списка аргументов. Аргументы указываются в произвольном порядке. Список допустимых аргументов определяется полями слота поля данных.

Базовые классы:
* AllocBase


# ::stappler::db::Field::Data<typename>(stappler::mem_pool::String&&,Args &&...)

## BRIEF

Создаёт поле нетипизированных данных

## CONTENT

Доступ: public

Создаёт поле нетипизированных данных

Параметры шаблона:
* typename Args

Параметры:
* stappler::mem_pool::String&&
* Args &&...

Возвращает:
* stappler::db::Field

# ::stappler::db::Field::Integer<typename>(stappler::mem_pool::String&&,Args &&...)

## BRIEF

Создаёт целочисленное поле

## CONTENT

Доступ: public

Создаёт целочисленное поле

Параметры шаблона:
* typename Args

Параметры:
* stappler::mem_pool::String&&
* Args &&...

Возвращает:
* stappler::db::Field

# ::stappler::db::Field::Float<typename>(stappler::mem_pool::String&&,Args &&...)

## BRIEF

Создаёт поле числа с плавающей точкой

## CONTENT

Доступ: public

Создаёт поле числа с плавающей точкой

Параметры шаблона:
* typename Args

Параметры:
* stappler::mem_pool::String&&
* Args &&...

Возвращает:
* stappler::db::Field

# ::stappler::db::Field::Boolean<typename>(stappler::mem_pool::String&&,Args &&...)

## BRIEF

Создаёт булево поле

## CONTENT

Доступ: public

Создаёт булево поле

Параметры шаблона:
* typename Args

Параметры:
* stappler::mem_pool::String&&
* Args &&...

Возвращает:
* stappler::db::Field

# ::stappler::db::Field::Text<typename>(stappler::mem_pool::String&&,Args &&...)

## BRIEF

Создаёт текстовое поле

## CONTENT

Доступ: public

Создаёт текстовое поле

Параметры шаблона:
* typename Args

Параметры:
* stappler::mem_pool::String&&
* Args &&...

Возвращает:
* stappler::db::Field

# ::stappler::db::Field::Bytes<typename>(stappler::mem_pool::String&&,Args &&...)

## BRIEF

Создаёт байтовое поле

## CONTENT

Доступ: public

Создаёт байтовое поле

Параметры шаблона:
* typename Args

Параметры:
* stappler::mem_pool::String&&
* Args &&...

Возвращает:
* stappler::db::Field

# ::stappler::db::Field::Password<typename>(stappler::mem_pool::String&&,Args &&...)

## BRIEF

Создаёт поле пароля

## CONTENT

Доступ: public

Создаёт поле пароля

Параметры шаблона:
* typename Args

Параметры:
* stappler::mem_pool::String&&
* Args &&...

Возвращает:
* stappler::db::Field

# ::stappler::db::Field::Extra<typename>(stappler::mem_pool::String&&,Args &&...)

## BRIEF

Создаёт нетипизированное поле со схемой сопоставления

## CONTENT

Доступ: public

Создаёт нетипизированное поле со схемой сопоставления

Параметры шаблона:
* typename Args

Параметры:
* stappler::mem_pool::String&&
* Args &&...

Возвращает:
* stappler::db::Field

# ::stappler::db::Field::Extra<typename>(stappler::mem_pool::String&&,stappler::InitializerList<Field>&&,Args &&...)

## BRIEF

Создаёт нетипизированное поле со схемой сопоставления

## CONTENT

Доступ: public

Создаёт нетипизированное поле со схемой сопоставления

Параметры шаблона:
* typename Args

Параметры:
* stappler::mem_pool::String&&
* stappler::InitializerList<Field>&& - поля для сопоставления
* Args &&...

Возвращает:
* stappler::db::Field

# ::stappler::db::Field::File<typename>(stappler::mem_pool::String&&,Args &&...)

## BRIEF

Создаёт поле внешнего файла

## CONTENT

Доступ: public

Создаёт поле внешнего файла

Параметры шаблона:
* typename Args

Параметры:
* stappler::mem_pool::String&&
* Args &&...

Возвращает:
* stappler::db::Field

# ::stappler::db::Field::Image<typename>(stappler::mem_pool::String&&,Args &&...)

## BRIEF

Создаёт поле внешнего изображения

## CONTENT

Доступ: public

Создаёт поле внешнего изображения

Параметры шаблона:
* typename Args

Параметры:
* stappler::mem_pool::String&&
* Args &&...

Возвращает:
* stappler::db::Field

# ::stappler::db::Field::Object<typename>(stappler::mem_pool::String&&,Args &&...)

## BRIEF

Создаёт объектное поле

## CONTENT

Доступ: public

Создаёт объектное поле

Параметры шаблона:
* typename Args

Параметры:
* stappler::mem_pool::String&&
* Args &&...

Возвращает:
* stappler::db::Field

# ::stappler::db::Field::Set<typename>(stappler::mem_pool::String&&,Args &&...)

## BRIEF

Создаёт поле набора из объектов

## CONTENT

Доступ: public

Создаёт объектное поле

Параметры шаблона:
* typename Args

Параметры:
* stappler::mem_pool::String&&
* Args &&...

Возвращает:
* stappler::db::Field

# ::stappler::db::Field::Array<typename>(stappler::mem_pool::String&&,Args &&...)

## BRIEF

Создаёт поле-массив

## CONTENT

Доступ: public

Создаёт поле-массив

Параметры шаблона:
* typename Args

Параметры:
* stappler::mem_pool::String&&
* Args &&...

Возвращает:
* stappler::db::Field

# ::stappler::db::Field::View<typename>(stappler::mem_pool::String&&,Args &&...)

## BRIEF

Создаёт поле-отображение

## CONTENT

Доступ: public

Создаёт поле-отображение

Параметры шаблона:
* typename Args

Параметры:
* stappler::mem_pool::String&&
* Args &&...

Возвращает:
* stappler::db::Field

# ::stappler::db::Field::FullTextView<typename>(stappler::mem_pool::String&&,Args &&...)

## BRIEF

Создаёт поле для полнотекстового поиска

## CONTENT

Доступ: public

Создаёт поле для полнотекстового поиска

Параметры шаблона:
* typename Args

Параметры:
* stappler::mem_pool::String&&
* Args &&...

Возвращает:
* stappler::db::Field

# ::stappler::db::Field::Virtual<typename>(stappler::mem_pool::String&&,Args &&...)

## BRIEF

Создаёт виртуальное поле

## CONTENT

Доступ: public

Создаёт виртуальное поле. Виртуальное поле не хранится в БД, но позволяет вызывать функции для чтения и записи

Параметры шаблона:
* typename Args

Параметры:
* stappler::mem_pool::String&&
* Args &&...

Возвращает:
* stappler::db::Field

# ::stappler::db::Field::Custom<typename>(stappler::db::FieldCustom*)

## BRIEF

Создаёт пользовательское поле

## CONTENT

Доступ: public

Создаёт пользовательское поле

Параметры шаблона:
* typename Args

Параметры:
* stappler::db::FieldCustom* - слот пользовательского поля

Возвращает:
* stappler::db::Field

# ::stappler::db::Field::Slot

## BRIEF

Слот для поля

## CONTENT

Доступ: public

Слот для поля. Слот определяет конкретные параметры поля. Слоты полей различных типов наследуются от базового слота поля.

Базовые классы:
* AllocBase


# ::stappler::db::Field::Slot::~Slot()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор


# ::stappler::db::Field::Slot::setOptions<typename,typename>(F&,T&&)

## BRIEF

Устанавливает аргумент поля

## CONTENT

Доступ: public

Устанавливает аргумент поля

Параметры шаблона:
* typename F
* typename T

Параметры:
* F& - тип слота поля
* T&& - аргумент для определения поля


# ::stappler::db::Field::Slot::setOptions<typename,typename,typename>(F&,T&&,Args &&...)

## BRIEF

Устанавливает аргументы поля

## CONTENT

Доступ: public

Устанавливает аргументы поля

Параметры шаблона:
* typename F
* typename T
* typename Args

Параметры:
* F& - тип слота поля
* T&& - аргумент для определения поля
* Args &&... - другие аргументы


# ::stappler::db::Field::Slot::init<typename>(F&)

## BRIEF

Вызывает инициализацию слота

## CONTENT

Доступ: public

Вызывает инициализацию слота

Параметры шаблона:
* typename F

Параметры:
* F&


# ::stappler::db::Field::Slot::init<typename,typename>(F&,Args &&...)

## BRIEF

Вызывает инициализацию слота со списком аргументов в произвольном порядкке

## CONTENT

Доступ: public

Вызывает инициализацию слота со списком аргументов в произвольном порядкке

Параметры шаблона:
* typename F
* typename Args

Параметры:
* F&
* Args &&...


# ::stappler::db::Field::Slot::Slot(stappler::mem_pool::String&&,stappler::db::Type)

## BRIEF

Создаёт слот из имени и типа

## CONTENT

Доступ: public

Создаёт слот из имени и типа

Параметры:
* stappler::mem_pool::String&&
* stappler::db::Type


# ::stappler::db::Field::Slot::getName() const

## BRIEF

Возвращает имя поля

## CONTENT

Доступ: public

Возвращает имя поля

Возвращает:
* stappler::StringView

# ::stappler::db::Field::Slot::hasFlag(stappler::db::Flags) const

## BRIEF

Проверяет флаг поля

## CONTENT

Доступ: public

Проверяет флаг поля

Параметры:
* stappler::db::Flags

Возвращает:
* bool

# ::stappler::db::Field::Slot::getType() const

## BRIEF

Возвращает тип поля

## CONTENT

Доступ: public

Возвращает тип поля

Возвращает:
* stappler::db::Type

# ::stappler::db::Field::Slot::isProtected() const

## BRIEF

Проверяет флаг защищённого поля

## CONTENT

Доступ: public

Проверяет флаг защищённого поля

Возвращает:
* bool

# ::stappler::db::Field::Slot::getTransform() const

## BRIEF

Возврашает правило преобразвания

## CONTENT

Доступ: public

Возврашает правило преобразвания

Возвращает:
* stappler::db::Transform

# ::stappler::db::Field::Slot::isSimpleLayout() const

## BRIEF

Проверяет поле на простую укладку

## CONTENT

Доступ: public

Проверяет поле на простую укладку. Поля простой укладки не требуют предварительного запроса для изменения.

Возвращает:
* bool

# ::stappler::db::Field::Slot::isDataLayout() const

## BRIEF

Проверяет на нетипизированное поле

## CONTENT

Доступ: public

Проверяет на нетипизированное поле

Возвращает:
* bool

# ::stappler::db::Field::Slot::isIndexed() const

## BRIEF

Проверяет, индексируется ли поле

## CONTENT

Доступ: public

Проверяет, индексируется ли поле

Возвращает:
* bool

# ::stappler::db::Field::Slot::isFile() const

## BRIEF

Проверяет, является ли поле файлом

## CONTENT

Доступ: public

Проверяет, является ли поле файлом

Возвращает:
* bool

# ::stappler::db::Field::Slot::hasDefault() const

## BRIEF

Проверяет, есть ли значение по умолчанию

## CONTENT

Доступ: public

Проверяет, есть ли значение по умолчанию

Возвращает:
* bool

# ::stappler::db::Field::Slot::getDefault(stappler::mem_pool::Value const&) const

## BRIEF

Возврашает значение по умолчанию

## CONTENT

Доступ: public

Возврашает значение по умолчанию

Параметры:
* stappler::mem_pool::Value const&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Field::Slot::transformValue(stappler::db::Scheme const&,stappler::mem_pool::Value const&,stappler::mem_pool::Value&,bool) const

## BRIEF

Трансформирует значение для записи в поле

## CONTENT

Доступ: public

Трансформирует значение для записи в поле

Параметры:
* stappler::db::Scheme const& = схема данных
* stappler::mem_pool::Value const& - объект данных
* stappler::mem_pool::Value& - значение в поле
* bool - true для создания нового объекта

Возвращает:
* bool - true при успешной трансформации

# ::stappler::db::Field::Slot::hash(stappler::mem_pool::StringStream&,stappler::db::ValidationLevel) const

## BRIEF

Собирает данные для хэша схемы данных

## CONTENT

Доступ: public

Собирает данные для хэша схемы данных

Параметры:
* stappler::mem_pool::StringStream&
* stappler::db::ValidationLevel


# ::stappler::db::Field::Slot::def

## BRIEF

Значение по умолчанию

## CONTENT

Доступ: public

Значение по умолчанию, используется, если функция не определена

Тип: stappler::mem_pool::Value


# ::stappler::db::Field::Slot::name

## BRIEF

Имя поля

## CONTENT

Доступ: public

Имя поля

Тип: stappler::mem_pool::String


# ::stappler::db::Field::Slot::documentation

## BRIEF

Текстовая документация к полю

## CONTENT

Доступ: public

Текстовая документация к полю

Тип: stappler::mem_pool::String


# ::stappler::db::Field::Slot::flags

## BRIEF

Флаги поля

## CONTENT

Доступ: public

Флаги поля

Тип: stappler::db::Flags


# ::stappler::db::Field::Slot::type

## BRIEF

Тип поля

## CONTENT

Доступ: public

Тип поля

Тип: stappler::db::Type


# ::stappler::db::Field::Slot::transform

## BRIEF

Значение трансформации

## CONTENT

Доступ: public

Значение трансформации

Тип: stappler::db::Transform


# ::stappler::db::Field::Slot::defaultFn

## BRIEF

Функция для вывода значения по умолчанию

## CONTENT

Доступ: public

Функция для вывода значения по умолчанию

Тип: stappler::db::DefaultFn


# ::stappler::db::Field::Slot::readFilterFn

## BRIEF

Функция для трансформации при чтении

## CONTENT

Доступ: public

Функция для трансформации при чтении

Тип: stappler::db::ReadFilterFn


# ::stappler::db::Field::Slot::writeFilterFn

## BRIEF

Функция для трансформации при записи

## CONTENT

Доступ: public

Функция для трансформации при записи

Тип: stappler::db::WriteFilterFn


# ::stappler::db::Field::Slot::replaceFilterFn

## BRIEF

Функция для трансформации при замене значения поля

## CONTENT

Доступ: public

Функция для трансформации при замене значения поля. Если не определена - используется функция трансформации при записи

Тип: stappler::db::ReplaceFilterFn


# ::stappler::db::Field::Slot::autoField

## BRIEF

Определение автоматического поля

## CONTENT

Доступ: public

Определение автоматического поля

Тип: stappler::db::AutoFieldDef


# ::stappler::db::Field::Slot::owner

## BRIEF

Схема данных, в которой определено поле

## CONTENT

Доступ: public

Схема данных, в которой определено поле

Тип: stappler::db::Scheme const*


# ::stappler::db::Field::Slot::root

## BRIEF

Ссылка на исходное поле, в котором определено текущее

## CONTENT

Доступ: public

Ссылка на исходное поле, в котором определено текущее

Тип: Field::Slot const*


# ::stappler::db::Field::getName() const

## BRIEF

Возвращает имя поле

## CONTENT

Доступ: public

Возвращает имя поле

Возвращает:
* stappler::StringView

# ::stappler::db::Field::getType() const

## BRIEF

Возвращает тип поля

## CONTENT

Доступ: public

Возвращает тип поля

Возвращает:
* stappler::db::Type

# ::stappler::db::Field::getFlags() const

## BRIEF

Возвращает флаги

## CONTENT

Доступ: public

Возвращает флаги

Возвращает:
* stappler::db::Flags

# ::stappler::db::Field::getTransform() const

## BRIEF

Возвращает правило трансформации

## CONTENT

Доступ: public

Возвращает правило трансформации

Возвращает:
* stappler::db::Transform

# ::stappler::db::Field::getDefault(stappler::mem_pool::Value const&) const

## BRIEF

Возвращает значение по умолчанию

## CONTENT

Доступ: public

Возвращает значение по умолчанию

Параметры:
* stappler::mem_pool::Value const&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Field::hasFlag(stappler::db::Flags) const

## BRIEF

Проверяет флаг поля

## CONTENT

Доступ: public

Проверяет флаг поля

Параметры:
* stappler::db::Flags

Возвращает:
* bool

# ::stappler::db::Field::hasDefault() const

## BRIEF

Проверяет, есть ли значение по умолчанию

## CONTENT

Доступ: public

Проверяет, есть ли значение по умолчанию

Возвращает:
* bool

# ::stappler::db::Field::isProtected() const

## BRIEF

Проверяет, есть ли флаг защищённого поля

## CONTENT

Доступ: public

Проверяет, есть ли флаг защищённого поля

Возвращает:
* bool

# ::stappler::db::Field::isSimpleLayout() const

## BRIEF

Проверяет, использует ли поле простую укладку

## CONTENT

Доступ: public

Проверяет, использует ли поле простую укладку. Поля с простой укладкой можно обновлять без предварительного их чтения.

Возвращает:
* bool

# ::stappler::db::Field::isDataLayout() const

## BRIEF

Проверяет, использует ли поле нетипизированные данные

## CONTENT

Доступ: public

Проверяет, использует ли поле нетипизированные данные

Возвращает:
* bool

# ::stappler::db::Field::isIndexed() const

## BRIEF

Првоеряет, индексируется ли поле

## CONTENT

Доступ: public

Првоеряет, индексируется ли поле

Возвращает:
* bool

# ::stappler::db::Field::isFile() const

## BRIEF

Проверяет, является ли поле внешним файлом

## CONTENT

Доступ: public

Проверяет, является ли поле внешним файлом

Возвращает:
* bool

# ::stappler::db::Field::isReference() const

## BRIEF

Проверяет, хранится ли в поле ссылка на другое поле

## CONTENT

Доступ: public

Проверяет, хранится ли в поле ссылка на другое поле

Возвращает:
* bool

# ::stappler::db::Field::getForeignScheme() const

## BRIEF

Возврашает внешнюю схему для объекта, который хранится в поле

## CONTENT

Доступ: public

Возврашает внешнюю схему для объекта, который хранится в поле

Возвращает:
* stappler::db::Scheme const*

# ::stappler::db::Field::hash(stappler::mem_pool::StringStream&,stappler::db::ValidationLevel) const

## BRIEF

Добавляет данные поля в поток для вычисления хэша схемы данных

## CONTENT

Доступ: public

Добавляет данные поля в поток для вычисления хэша схемы данных

Параметры:
* stappler::mem_pool::StringStream&
* stappler::db::ValidationLevel


# ::stappler::db::Field::transform(stappler::db::Scheme const&,int64_t,stappler::mem_pool::Value&,bool) const

## BRIEF

Выполняет трансформацию поля для его записи в БД

## CONTENT

Доступ: public

Выполняет трансформацию поля для его записи в БД. Использует только идентификатор объекта вместо самого объекта

Параметры:
* stappler::db::Scheme const&
* int64_t
* stappler::mem_pool::Value&
* bool - true если объект создаётся. а не обновляется

Возвращает:
* bool - true если трансформация успешна

# ::stappler::db::Field::transform(stappler::db::Scheme const&,stappler::mem_pool::Value const&,stappler::mem_pool::Value&,bool) const

## BRIEF

Выполняет трансформацию поля для его записи в БД

## CONTENT

Доступ: public

Выполняет трансформацию поля для его записи в БД

Параметры:
* stappler::db::Scheme const&
* stappler::mem_pool::Value const&
* stappler::mem_pool::Value&
* bool - true если объект создаётся. а не обновляется

Возвращает:
* bool - true если трансформация успешна

# ::stappler::db::Field::operator bool() const

## BRIEF

Проверяет, что для поля установлен слот

## CONTENT

Доступ: public

Проверяет, что для поля установлен слот

Возвращает:
* bool

# ::stappler::db::Field::getSlot<typename>() const

## BRIEF

Возвращает слот, может преобразовать его к конкретному типу слота

## CONTENT

Доступ: public

Возвращает слот, может преобразовать его к конкретному типу слота

Параметры шаблона:
* typename SlotType

Возвращает:
* SlotType const*

# ::stappler::db::Field::getTypeDesc() const

## BRIEF

Возвращает описание поля

## CONTENT

Доступ: public

Возвращает описание поля

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::Field::Field(stappler::db::Field::Slot const*)

## BRIEF

Создаёт поле из слота

## CONTENT

Доступ: public

Создаёт поле из слота

Параметры:
* stappler::db::Field::Slot const*


# ::stappler::db::Field::Field(stappler::db::Field const&)

## BRIEF

Конструктор копирования

## CONTENT

Доступ: public

Конструктор копирования. Поле хранит только указатель на слот, потому может свободно копироваться. Слот неизменен после инициализации, потому может использоваться в нескольких полях одной схемы.

Параметры:
* stappler::db::Field const&


# ::stappler::db::Field::operator=(stappler::db::Field const&)

## BRIEF

Оператор копирования

## CONTENT

Доступ: public

Оператор копирования. Поле хранит только указатель на слот, потому может свободно копироваться. Слот неизменен после инициализации, потому может использоваться в нескольких полях одной схемы.

Параметры:
* stappler::db::Field const&

Возвращает:
* stappler::db::Field&

# ::stappler::db::Field::Field(stappler::db::Field&&)

## BRIEF

Конструктор перемещения

## CONTENT

Доступ: public

Конструктор перемещения. Поле хранит только указатель на слот, потому может свободно копироваться. Слот неизменен после инициализации, потому может использоваться в нескольких полях одной схемы.

Параметры:
* stappler::db::Field&&


# ::stappler::db::Field::operator=(stappler::db::Field&&)

## BRIEF

Оператор перемещения

## CONTENT

Доступ: public

Оператор перемещения. Поле хранит только указатель на слот, потому может свободно копироваться. Слот неизменен после инициализации, потому может использоваться в нескольких полях одной схемы.

Параметры:
* stappler::db::Field&&

Возвращает:
* stappler::db::Field&

# ::stappler::db::Field::slot

## BRIEF

Слот для поля

## CONTENT

Доступ: protected

Слот для поля

Тип: stappler::db::Field::Slot const*


# ::stappler::db::FieldText

## BRIEF

Слот текстового поля

## CONTENT

Слот текстового поля

Базовые классы:
* Field::Slot


# ::stappler::db::FieldText::~FieldText()

## BRIEF

Деструктор

## CONTENT

Деструктор

# ::stappler::db::FieldText::FieldText<typename>(stappler::mem_pool::String&&,stappler::db::Type,Args &&...)

## BRIEF

Создаёт слот текстового поля

## CONTENT

Создаёт слот текстового поля

Параметры шаблона:
* typename Args

Параметры:
* stappler::mem_pool::String&&
* stappler::db::Type
* Args &&... -набор аргументов


# ::stappler::db::FieldText::transformValue(stappler::db::Scheme const&,stappler::mem_pool::Value const&,stappler::mem_pool::Value&,bool) const

## BRIEF

Трансформирует поле для записи

## CONTENT

Трансформирует поле для записи

Параметры:
* stappler::db::Scheme const&
* stappler::mem_pool::Value const&
* stappler::mem_pool::Value&
* bool

Возвращает:
* bool

# ::stappler::db::FieldText::hash(stappler::mem_pool::StringStream&,stappler::db::ValidationLevel) const

## BRIEF

Добавляет данные поля к строке для хэша

## CONTENT

Добавляет данные поля к строке для хэша

Параметры:
* stappler::mem_pool::StringStream&
* stappler::db::ValidationLevel


# ::stappler::db::FieldText::minLength

## BRIEF

Минимальная длина

## CONTENT

Минимальная длина

Тип: size_t


# ::stappler::db::FieldText::maxLength

## BRIEF

Максимальная длина

## CONTENT

Максимальная длина

Тип: size_t


# ::stappler::db::FieldPassword

## BRIEF

Слот для поля пароля

## CONTENT

Слот для поля пароля

Базовые классы:
* Field::Slot


# ::stappler::db::FieldPassword::~FieldPassword()

## BRIEF

Деструктор

## CONTENT

Деструктор


# ::stappler::db::FieldPassword::FieldPassword<typename>(stappler::mem_pool::String&&,Args &&...)

## BRIEF

Создаёт слот для поля пароля

## CONTENT

Создаёт слот для поля пароля

Параметры шаблона:
* typename Args

Параметры:
* stappler::mem_pool::String&&
* Args &&...


# ::stappler::db::FieldPassword::transformValue(stappler::db::Scheme const&,stappler::mem_pool::Value const&,stappler::mem_pool::Value&,bool) const

## BRIEF

Трансформирует значение для записи

## CONTENT

Трансформирует значение для записи

Параметры:
* stappler::db::Scheme const&
* stappler::mem_pool::Value const&
* stappler::mem_pool::Value&
* bool

Возвращает:
* bool

# ::stappler::db::FieldPassword::hash(stappler::mem_pool::StringStream&,stappler::db::ValidationLevel) const

## BRIEF

Добавляет данные поля к строке для хэша

## CONTENT

Добавляет данные поля к строке для хэша

Параметры:
* stappler::mem_pool::StringStream&
* stappler::db::ValidationLevel


# ::stappler::db::FieldPassword::minLength

## BRIEF

Минимальная длина

## CONTENT

Минимальная длина

Тип: size_t


# ::stappler::db::FieldPassword::maxLength

## BRIEF

Максимальная длина

## CONTENT

Максимальная длина

Тип: size_t


# ::stappler::db::FieldPassword::salt

## BRIEF

Ключ для кодирования пароля

## CONTENT

Ключ для кодирования пароля

Тип: stappler::mem_pool::String


# ::stappler::db::FieldExtra

## BRIEF

Слот для поля с нетипизированными данными со схемой сопоставления

## CONTENT

Слот для поля с нетипизированными данными со схемой сопоставления

Базовые классы:
* Field::Slot


# ::stappler::db::FieldExtra::~FieldExtra()

## BRIEF

Деструктор

## CONTENT

Деструктор


# ::stappler::db::FieldExtra::FieldExtra<typename>(stappler::mem_pool::String&&,Args &&...)

## BRIEF

Конструирует слот

## CONTENT

Конструирует слот

Параметры шаблона:
* typename Args

Параметры:
* stappler::mem_pool::String&&
* Args &&...


# ::stappler::db::FieldExtra::hasDefault() const

## BRIEF

Проверяет, есть ли значение по умолчанию

## CONTENT

Проверяет, есть ли значение по умолчанию

Возвращает:
* bool

# ::stappler::db::FieldExtra::getDefault(stappler::mem_pool::Value const&) const

## BRIEF

Возвращает значение по умолчанию

## CONTENT

Возвращает значение по умолчанию

Параметры:
* stappler::mem_pool::Value const&

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::FieldExtra::transformValue(stappler::db::Scheme const&,stappler::mem_pool::Value const&,stappler::mem_pool::Value&,bool) const

## BRIEF

Трансформирует значение для записи

## CONTENT

Трансформирует значение для записи

Параметры:
* stappler::db::Scheme const&
* stappler::mem_pool::Value const&
* stappler::mem_pool::Value&
* bool

Возвращает:
* bool

# ::stappler::db::FieldExtra::hash(stappler::mem_pool::StringStream&,stappler::db::ValidationLevel) const

## BRIEF

Добавляет данные поля к строке для хэша

## CONTENT

Добавляет данные поля к строке для хэша

Параметры:
* stappler::mem_pool::StringStream&
* stappler::db::ValidationLevel


# ::stappler::db::FieldExtra::fields

## BRIEF

Список полей для сопоставления

## CONTENT

Список полей для сопоставления. Поле может содержать только указанные поля данных. Если поле помечено, как массив, сопоставляется массив поэлементно.

Тип: Map<stappler::mem_pool::String, stappler::db::Field>


# ::stappler::db::FieldFile

## BRIEF

Слот поля внешнего файла

## CONTENT

Слот поля внешнего файла

Базовые классы:
* Field::Slot


# ::stappler::db::FieldFile::~FieldFile()

## BRIEF

Деструктор

## CONTENT

Деструктор

# ::stappler::db::FieldFile::FieldFile<typename>(stappler::mem_pool::String&&,Args &&...)

## BRIEF

Конструирует слот

## CONTENT

Конструирует слот

Параметры шаблона:
* typename Args

Параметры:
* stappler::mem_pool::String&&
* Args &&...


# ::stappler::db::FieldFile::hash(stappler::mem_pool::StringStream&,stappler::db::ValidationLevel) const

## BRIEF

Добавляет данные поля в строку для хэша

## CONTENT

Добавляет данные поля в строку для хэша

Параметры:
* stappler::mem_pool::StringStream&
* stappler::db::ValidationLevel


# ::stappler::db::FieldFile::maxSize

## BRIEF

Максимальный размер файла

## CONTENT

Максимальный размер файла

Тип: size_t


# ::stappler::db::FieldFile::allowedTypes

## BRIEF

Допустимые MIME-типы файла

## CONTENT

Допустимые MIME-типы файла

Тип: Vector<stappler::mem_pool::String>


# ::stappler::db::FieldImage

## BRIEF

Слот внешнего изображения

## CONTENT

Слот внешнего изображения

Базовые классы:
* Field::Slot


# ::stappler::db::FieldImage::~FieldImage()

## BRIEF

Деструктор

## CONTENT

Деструктор


# ::stappler::db::FieldImage::FieldImage<typename>(stappler::mem_pool::String&&,Args &&...)

## BRIEF

Конструирует слот

## CONTENT

Конструирует слот

Параметры шаблона:
* typename Args

Параметры:
* stappler::mem_pool::String&&
* Args &&...


# ::stappler::db::FieldImage::hash(stappler::mem_pool::StringStream&,stappler::db::ValidationLevel) const

## BRIEF

Добавляет данные поля в строку для хэша

## CONTENT

Добавляет данные поля в строку для хэша

Параметры:
* stappler::mem_pool::StringStream&
* stappler::db::ValidationLevel


# ::stappler::db::FieldImage::maxSize

## BRIEF

Максимальный размер файоа

## CONTENT

Максимальный размер файоа

Тип: size_t


# ::stappler::db::FieldImage::allowedTypes

## BRIEF

Допустимые MIME-типы файла

## CONTENT

Допустимые MIME-типы файла

Тип: Vector<stappler::mem_pool::String>


# ::stappler::db::FieldImage::maxImageSize

## BRIEF

Максимальный размер изображения

## CONTENT

Максимальный размер изображения

Тип: stappler::db::MaxImageSize


# ::stappler::db::FieldImage::minImageSize

## BRIEF

Минимальный размер изображения

## CONTENT

Минимальный размер изображения

Тип: stappler::db::MinImageSize


# ::stappler::db::FieldImage::thumbnails

## BRIEF

Список автогенерируемых миниатюр

## CONTENT

Список автогенерируемых миниатюр

Тип: Vector<stappler::db::Thumbnail>


# ::stappler::db::FieldImage::primary

## BRIEF

Внутренний флаг, является ли поле изображения основным

## CONTENT

Внутренний флаг, является ли поле изображения основным. Поля миниатюр транслируются во внешнюю схему, флаг используется, чтобы отделять основные поля от дополнительных, созданных для миниатюр.

Тип: bool


# ::stappler::db::FieldObject

## BRIEF

Слот поля объекта

## CONTENT

Слот поля объекта. Такое поле связывает объект с объектом другой схемы. Форма связи определяется флагом ссылки и режимом действий при удалении.

Базовые классы:
* Field::Slot


# ::stappler::db::FieldObject::~FieldObject()

## BRIEF

Деструктор

## CONTENT

Деструктор


# ::stappler::db::FieldObject::FieldObject<typename>(stappler::mem_pool::String&&,stappler::db::Type,Args &&...)

## BRIEF

Конструирует слот

## CONTENT

Конструирует слот

Параметры шаблона:
* typename Args

Параметры:
* stappler::mem_pool::String&&
* stappler::db::Type
* Args &&...


# ::stappler::db::FieldObject::transformValue(stappler::db::Scheme const&,stappler::mem_pool::Value const&,stappler::mem_pool::Value&,bool) const

## BRIEF

Трансформирует значение для записи в БД

## CONTENT

Трансформирует значение для записи в БД

Параметры:
* stappler::db::Scheme const&
* stappler::mem_pool::Value const&
* stappler::mem_pool::Value&
* bool

Возвращает:
* bool

# ::stappler::db::FieldObject::hash(stappler::mem_pool::StringStream&,stappler::db::ValidationLevel) const

## BRIEF

Записывает данные поля в строку для хэша

## CONTENT

Записывает данные поля в строку для хэша

Параметры:
* stappler::mem_pool::StringStream&
* stappler::db::ValidationLevel


# ::stappler::db::FieldObject::scheme

## BRIEF

Внешняя схема для объекта

## CONTENT

Внешняя схема для объекта

Тип: stappler::db::Scheme const*


# ::stappler::db::FieldObject::onRemove

## BRIEF

Режим действий при удалении связанного объекта

## CONTENT

Режим действий при удалении связанного объекта

Тип: stappler::db::RemovePolicy


# ::stappler::db::FieldObject::linkage

## BRIEF

Способ связи с полем внешней схемы

## CONTENT

Способ связи с полем внешней схемы

Тип: stappler::db::Linkage


# ::stappler::db::FieldObject::link

## BRIEF

Имя поля внешней схемы для ручной связи

## CONTENT

Имя поля внешней схемы для ручной связи

Тип: stappler::mem_pool::String


# ::stappler::db::FieldArray

## BRIEF

Слот поля-массива

## CONTENT

Слот поля-массива

Базовые классы:
* Field::Slot


# ::stappler::db::FieldArray::~FieldArray()

## BRIEF

Деструктор

## CONTENT

Деструктор


# ::stappler::db::FieldArray::FieldArray<typename>(stappler::mem_pool::String&&,Args &&...)

## BRIEF

Конструирует слот

## CONTENT

Конструирует слот

Параметры шаблона:
* typename Args

Параметры:
* stappler::mem_pool::String&&
* Args &&...


# ::stappler::db::FieldArray::transformValue(stappler::db::Scheme const&,stappler::mem_pool::Value const&,stappler::mem_pool::Value&,bool) const

## BRIEF

Трансформирует значение для записи в БД

## CONTENT

Трансформирует значение для записи в БД

Параметры:
* stappler::db::Scheme const&
* stappler::mem_pool::Value const&
* stappler::mem_pool::Value&
* bool

Возвращает:
* bool

# ::stappler::db::FieldArray::hash(stappler::mem_pool::StringStream&,stappler::db::ValidationLevel) const

## BRIEF

Записывает данные поля в строку для хеша

## CONTENT

Записывает данные поля в строку для хеша

Параметры:
* stappler::mem_pool::StringStream&
* stappler::db::ValidationLevel


# ::stappler::db::FieldArray::tfield

## BRIEF

Поле, служащее для сопоставления элемента массива

## CONTENT

Поле, служащее для сопоставления элемента массива. Это поле определяет тип хранимых элементов и их трансформацию. Только простые поля допустимы.

Тип: stappler::db::Field


# ::stappler::db::FieldView

## BRIEF

Слот поля отображения

## CONTENT

Слот поля отображения. Отображение - автоматическое поле, в которое помещаются объекты другой схемы при их удовлетворении определённым условиям.

Базовые классы:
* Field::Slot


# ::stappler::db::FieldView::DeltaOptions

## BRIEF

Опции дельта-запросов

## CONTENT

Опции дельта-запросов

Значения:
* Delta


# ::stappler::db::FieldView::~FieldView()

## BRIEF

Деструктор

## CONTENT

Деструктор


# ::stappler::db::FieldView::FieldView<typename>(stappler::mem_pool::String&&,Args &&...)

## BRIEF

Конструирует слот

## CONTENT

Конструирует слот

Параметры шаблона:
* typename Args

Параметры:
* stappler::mem_pool::String&&
* Args &&...


# ::stappler::db::FieldView::transformValue(stappler::db::Scheme const&,stappler::mem_pool::Value const&,stappler::mem_pool::Value&,bool) const

## BRIEF

Трансформирует значение для записи в БД

## CONTENT

Трансформирует значение для записи в БД

Параметры:
* stappler::db::Scheme const&
* stappler::mem_pool::Value const&
* stappler::mem_pool::Value&
* bool

Возвращает:
* bool

# ::stappler::db::FieldView::scheme

## BRIEF

Внешняя схема для обектов в отображении

## CONTENT

Внешняя схема для обектов в отображении

Тип: stappler::db::Scheme const*


# ::stappler::db::FieldView::requireFields

## BRIEF

Поля внешней схемы, требуемые для принятия решения о включении в отображение

## CONTENT

Поля внешней схемы, требуемые для принятия решения о включении в отображение

Тип: Vector<stappler::mem_pool::String>


# ::stappler::db::FieldView::linkage

## BRIEF

Функция связи внешнего объекта с объектом, в котором нахходится поле-отображение

## CONTENT

Функция связи внешнего объекта с объектом, в котором нахходится поле-отображение

Тип: stappler::db::ViewLinkageFn


# ::stappler::db::FieldView::viewFn

## BRIEF

Функция фильтрации для вхождения отображения

## CONTENT

Функция фильтрации для вхождения отображения

Тип: stappler::db::ViewFn


# ::stappler::db::FieldView::delta

## BRIEF

Флаг доступности дельта-запросов

## CONTENT

Флаг доступности дельта-запросов

Тип: bool


# ::stappler::db::FieldFullTextView

## BRIEF

Слот полнотекстового отображения

## CONTENT

Слот полнотекстового отображения. Наполняется автоматически на основании функции вывода данных из других полей объекта. Позволяет выполнять полнотекстовые запросы, если БД это поддерживает.

Базовые классы:
* Field::Slot


# ::stappler::db::FieldFullTextView::~FieldFullTextView()

## BRIEF

Деструктор

## CONTENT

Деструктор


# ::stappler::db::FieldFullTextView::FieldFullTextView<typename>(stappler::mem_pool::String&&,Args &&...)

## BRIEF

Конструирует слот

## CONTENT

Конструирует слот

Параметры шаблона:
* typename Args

Параметры:
* stappler::mem_pool::String&&
* Args &&...


# ::stappler::db::FieldFullTextView::transformValue(stappler::db::Scheme const&,stappler::mem_pool::Value const&,stappler::mem_pool::Value&,bool) const

## BRIEF

Трансформирует значение для записи в БД

## CONTENT

Трансформирует значение для записи в БД

Параметры:
* stappler::db::Scheme const&
* stappler::mem_pool::Value const&
* stappler::mem_pool::Value&
* bool

Возвращает:
* bool

# ::stappler::db::FieldFullTextView::parseQuery(stappler::mem_pool::Value const&) const

## BRIEF

Разбирает значение для поиска в полнотекстовый запрос

## CONTENT

Разбирает значение для поиска в полнотекстовый запрос

Параметры:
* stappler::mem_pool::Value const&

Возвращает:
* Vector<stappler::db::FullTextData>

# ::stappler::db::FieldFullTextView::requireFields

## BRIEF

Требуемые для наполнения полнотекстового индекса поля

## CONTENT

Требуемые для наполнения полнотекстового индекса поля

Тип: Vector<stappler::mem_pool::String>


# ::stappler::db::FieldFullTextView::viewFn

## BRIEF

Функция для формирования полнотекстового индекса объекта

## CONTENT

Функция для формирования полнотекстового индекса объекта

Тип: stappler::db::FullTextViewFn


# ::stappler::db::FieldFullTextView::queryFn

## BRIEF

Функция для формирования запроса к полнотекстовому индексу

## CONTENT

Тип: stappler::db::FullTextQueryFn

Функция для формирования запроса к полнотекстовому индексу


# ::stappler::db::FieldCustom

## BRIEF

Слот пользовательского поля

## CONTENT

Функция для формирования запроса к полнотекстовому индексу

Базовые классы:
* Field::Slot


# ::stappler::db::FieldCustom::~FieldCustom()

## BRIEF

Деструктор

## CONTENT

Деструктор


# ::stappler::db::FieldCustom::FieldCustom<typename>(stappler::mem_pool::String&&,Args &&...)

## BRIEF

Конструирует слот

## CONTENT

Конструирует слот

Параметры шаблона:
* typename Args

Параметры:
* stappler::mem_pool::String&&
* Args &&...


# ::stappler::db::FieldCustom::readFromStorage(stappler::db::ResultCursor const&,size_t) const

## BRIEF

Функция для чтения поля из БД

## CONTENT

Функция для чтения поля из БД

Параметры:
* stappler::db::ResultCursor const&
* size_t

Возвращает:
* stappler::mem_pool::Value

# ::stappler::db::FieldCustom::writeToStorage(stappler::db::QueryInterface&,stappler::mem_pool::StringStream&,stappler::mem_pool::Value const&) const

## BRIEF

Функция для записи поля в БД

## CONTENT

Функция для записи поля в БД

Параметры:
* stappler::db::QueryInterface&
* stappler::mem_pool::StringStream&
* stappler::mem_pool::Value const&

Возвращает:
* bool

# ::stappler::db::FieldCustom::getTypeName() const

## BRIEF

Возвращает имя типа поля в БД

## CONTENT

Возвращает имя типа поля в БД

Возвращает:
* stappler::StringView

# ::stappler::db::FieldCustom::getIndexName() const

## BRIEF

Имя индекса для поля в БД

## CONTENT

Имя индекса для поля в БД

Возвращает:
* stappler::mem_pool::String

# ::stappler::db::FieldCustom::getIndexField() const

## BRIEF

Текстовое определение индекса

## CONTENT

Имя индекса для поля в БД

Возвращает:
* stappler::mem_pool::String

# ::stappler::db::FieldCustom::isComparationAllowed(stappler::db::Comparation) const

## BRIEF

Функция проверки доступности вариантов сравнения

## CONTENT

Функция проверки доступности вариантов сравнения

Параметры:
* stappler::db::Comparation

Возвращает:
* bool

# ::stappler::db::FieldCustom::writeQuery(stappler::db::Scheme const&,stappler::sql::Query<db::Binder, Interface>::WhereContinue&,stappler::sql::Operator,stappler::StringView const&,stappler::sql::Comparation,stappler::mem_pool::Value const&,stappler::mem_pool::Value const&) const

## BRIEF

Функция записи операции сравнения поля в запрос

## CONTENT

Функция записи операции сравнения поля в запрос

Параметры:
* stappler::db::Scheme const&
* stappler::sql::Query<db::Binder, Interface>::WhereContinue&
* stappler::sql::Operator
* stappler::StringView const&
* stappler::sql::Comparation
* stappler::mem_pool::Value const&
* stappler::mem_pool::Value const&


# ::stappler::db::FieldVirtual

## BRIEF

Слот виртуального поля

## CONTENT

Слот виртуального поля

Базовые классы:
* Field::Slot


# ::stappler::db::FieldVirtual::~FieldVirtual()

## BRIEF

Деструктор

## CONTENT

Деструктор


# ::stappler::db::FieldVirtual::FieldVirtual<typename>(stappler::mem_pool::String&&,Args &&...)

## BRIEF

Конструирует слот

## CONTENT

Конструирует слот

Параметры шаблона:
* typename Args

Параметры:
* stappler::mem_pool::String&&
* Args &&...


# ::stappler::db::FieldVirtual::hash(stappler::mem_pool::StringStream&,stappler::db::ValidationLevel) const

## BRIEF

Записывает данные поля в строку для хэширования

## CONTENT

Записывает данные поля в строку для хэширования

Параметры:
* stappler::mem_pool::StringStream&
* stappler::db::ValidationLevel


# ::stappler::db::FieldVirtual::transformValue(stappler::db::Scheme const&,stappler::mem_pool::Value const&,stappler::mem_pool::Value&,bool) const

## BRIEF

Трансформирует поле как для записи в БД

## CONTENT

Трансформирует поле как для записи в БД

Параметры:
* stappler::db::Scheme const&
* stappler::mem_pool::Value const&
* stappler::mem_pool::Value&
* bool

Возвращает:
* bool

# ::stappler::db::FieldVirtual::requireFields

## BRIEF

Поля исходного объекта, требуемые для вывода значения виртуального поля

## CONTENT

Поля исходного объекта, требуемые для вывода значения виртуального поля

Тип: Vector<stappler::mem_pool::String>


# ::stappler::db::FieldVirtual::readFn

## BRIEF

Функция чтения виртуального поля

## CONTENT

Функция чтения виртуального поля

Тип: stappler::db::VirtualReadFn


# ::stappler::db::FieldVirtual::writeFn

## BRIEF

Функция записи виртуального поля

## CONTENT

Функция записи виртуального поля

Тип: stappler::db::VirtualWriteFn



# ::stappler::db::FieldOption<F,Flags>::FieldOption<F,Flags>

## BRIEF

Вспомогательная структура для назначения аргумента

## CONTENT

Вспомогательная структура для назначения аргумента

Параметры шаблона:
* typename F


# ::stappler::db::FieldOption<F,Flags>::assign(F&,stappler::db::Flags)

## BRIEF

Добавляет флаги к полю

## CONTENT

Добавляет флаги к полю

Параметры:
* F&
* stappler::db::Flags


# ::stappler::db::FieldOption<F,FilterFn>::FieldOption<F,FilterFn>

## BRIEF

Вспомогательная структура для назначения аргумента

## CONTENT

Вспомогательная структура для назначения аргумента

Параметры шаблона:
* typename F


# ::stappler::db::FieldOption<F,FilterFn>::assign(F&,stappler::db::FilterFn const&)

## BRIEF

Назначает функцию для фильтрации

## CONTENT

Назначает функцию для фильтрации

Параметры:
* F&
* stappler::db::FilterFn const&


# ::stappler::db::FieldOption<F,WriteFilterFn>::FieldOption<F,WriteFilterFn>

## BRIEF

Вспомогательная структура для назначения аргумента

## CONTENT

Вспомогательная структура для назначения аргумента

Параметры шаблона:
* typename F


# ::stappler::db::FieldOption<F,WriteFilterFn>::assign(F&,stappler::db::WriteFilterFn const&)

## BRIEF

Назначает функцию для фильтрации

## CONTENT

Назначает функцию для фильтрации

Параметры:
* F&
* stappler::db::WriteFilterFn const&


# ::stappler::db::FieldOption<F,ReadFilterFn>::FieldOption<F,ReadFilterFn>

## BRIEF

Вспомогательная структура для назначения аргумента

## CONTENT

Вспомогательная структура для назначения аргумента

Параметры шаблона:
* typename F


# ::stappler::db::FieldOption<F,ReadFilterFn>::assign(F&,stappler::db::ReadFilterFn const&)

## BRIEF

Назначает функцию для фильтрации

## CONTENT

Назначает функцию для фильтрации

Параметры:
* F&
* stappler::db::ReadFilterFn const&


# ::stappler::db::FieldOption<F,ReplaceFilterFn>::FieldOption<F,ReplaceFilterFn>

## BRIEF

Вспомогательная структура для назначения аргумента

## CONTENT

Вспомогательная структура для назначения аргумента

Параметры шаблона:
* typename F


# ::stappler::db::FieldOption<F,ReplaceFilterFn>::assign(F&,stappler::db::ReplaceFilterFn const&)

## BRIEF

Назначает функцию для фильтрации

## CONTENT

Назначает функцию для фильтрации

Параметры:
* F&
* stappler::db::ReplaceFilterFn const&


# ::stappler::db::FieldOption<F,DefaultFn>::FieldOption<F,DefaultFn>

## BRIEF

Вспомогательная структура для назначения аргумента

## CONTENT

Вспомогательная структура для назначения аргумента

Параметры шаблона:
* typename F


# ::stappler::db::FieldOption<F,DefaultFn>::assign(F&,stappler::db::DefaultFn const&)

## BRIEF

Назначает функцию для значения по умолчанию

## CONTENT

Назначает функцию для значения по умолчанию

Параметры:
* F&
* stappler::db::DefaultFn const&


# ::stappler::db::FieldOption<F,Function<Value()>>::FieldOption<F,Function<Value()>>

## BRIEF

Вспомогательная структура для назначения аргумента

## CONTENT

Вспомогательная структура для назначения аргумента

Параметры шаблона:
* typename F


# ::stappler::db::FieldOption<F,Function<Value()>>::assign(F&,Function<stappler::mem_pool::Value ()> const&)

## BRIEF

Назначает функцию для значения по умолчанию

## CONTENT

Назначает функцию для значения по умолчанию

Параметры:
* F&
* Function<stappler::mem_pool::Value ()> const&


# ::stappler::db::FieldOption<F,Transform>::FieldOption<F,Transform>

## BRIEF

Вспомогательная структура для назначения аргумента

## CONTENT

Вспомогательная структура для назначения аргумента

Параметры шаблона:
* typename F


# ::stappler::db::FieldOption<F,Transform>::assign(F&,stappler::db::Transform)

## BRIEF

Назначает правило трансформации

## CONTENT

Назначает правило трансформации

Параметры:
* F&
* stappler::db::Transform


# ::stappler::db::FieldOption<F,Documentation>::FieldOption<F,Documentation>

## BRIEF

Вспомогательная структура для назначения аргумента

## CONTENT

Вспомогательная структура для назначения аргумента

Параметры шаблона:
* typename F


# ::stappler::db::FieldOption<F,Documentation>::assign(F&,stappler::db::Documentation&&)

## BRIEF

Назначает текстовую внешнюю документацию для поля

## CONTENT

Назначает текстовую внешнюю документацию для поля

Параметры:
* F&
* stappler::db::Documentation&&


# ::stappler::db::FieldOption<F,MinLength>::FieldOption<F,MinLength>

## BRIEF

Вспомогательная структура для назначения аргумента

## CONTENT

Вспомогательная структура для назначения аргумента

Параметры шаблона:
* typename F


# ::stappler::db::FieldOption<F,MinLength>::assign(F&,stappler::db::MinLength)

## BRIEF

Назначает минимальную длину строки

## CONTENT

Назначает минимальную длину строки

Параметры:
* F&
* stappler::db::MinLength


# ::stappler::db::FieldOption<F,MaxLength>::FieldOption<F,MaxLength>

## BRIEF

Вспомогательная структура для назначения аргумента

## CONTENT

Вспомогательная структура для назначения аргумента

Параметры шаблона:
* typename F


# ::stappler::db::FieldOption<F,MaxLength>::assign(F&,stappler::db::MaxLength)

## BRIEF

Назначает максимальную длину строки

## CONTENT

Назначает максимальную длину строки

Параметры:
* F&
* stappler::db::MaxLength


# ::stappler::db::FieldOption<F,Value>::FieldOption<F,Value>

## BRIEF

Вспомогательная структура для назначения аргумента

## CONTENT

Вспомогательная структура для назначения аргумента

Параметры шаблона:
* typename F


# ::stappler::db::FieldOption<F,Value>::assign(F&,stappler::mem_pool::Value&&)

## BRIEF

Назначает значение по умоланию

## CONTENT

Назначает значение по умоланию

Параметры:
* F&
* stappler::mem_pool::Value&&


# ::stappler::db::FieldOption<F,PasswordSalt>::FieldOption<F,PasswordSalt>

## BRIEF

Вспомогательная структура для назначения аргумента

## CONTENT

Вспомогательная структура для назначения аргумента

Параметры шаблона:
* typename F


# ::stappler::db::FieldOption<F,PasswordSalt>::assign(F&,stappler::db::PasswordSalt&&)

## BRIEF

Назначает код для сохранения паролей

## CONTENT

Назначает ручную внешнюю ссылку для полей объектов и наборов

Параметры:
* F&
* stappler::db::PasswordSalt&&


# ::stappler::db::FieldOption<F,ForeignLink>::FieldOption<F,ForeignLink>

## BRIEF

Вспомогательная структура для назначения аргумента

## CONTENT

Вспомогательная структура для назначения аргумента

Параметры шаблона:
* typename F


# ::stappler::db::FieldOption<F,ForeignLink>::assign(F&,stappler::db::ForeignLink&&)

## BRIEF

Назначает ручную внешнюю ссылку для полей объектов и наборов

## CONTENT

Назначает ручную внешнюю ссылку для полей объектов и наборов

Параметры:
* F&
* stappler::db::ForeignLink&&


# ::stappler::db::FieldOption<F,Vector<Field>>::FieldOption<F,Vector<Field>>

## BRIEF
Вспомогательная структура для назначения аргумента

## CONTENT

Вспомогательная структура для назначения аргумента

Параметры шаблона:
* typename F


# ::stappler::db::FieldOption<F,Vector<Field>>::assign(F&,Vector<stappler::db::Field>&&)

## BRIEF

Назначает набор полей для сопоставления типу `Extra`

## CONTENT

Назначает набор полей для сопоставления типу `Extra`

Параметры:
* F&
* Vector<stappler::db::Field>&&


# ::stappler::db::FieldOption<F,AutoFieldDef>::FieldOption<F,AutoFieldDef>

## BRIEF

Вспомогательная структура для назначения аргумента

## CONTENT

Вспомогательная структура для назначения аргумента

Параметры шаблона:
* typename F


# ::stappler::db::FieldOption<F,AutoFieldDef>::assign(F&,stappler::db::AutoFieldDef&&)

## BRIEF

Делает поле автоматическим на основе определения

## CONTENT

Делает поле автоматическим на основе определения

Параметры:
* F&
* stappler::db::AutoFieldDef&&


# ::stappler::db::FieldOption<F,std::initializer_list<Field>>::FieldOption<F,std::initializer_list<Field>>

## BRIEF

Вспомогательная структура для назначения аргумента

## CONTENT

Вспомогательная структура для назначения аргумента

Параметры шаблона:
* typename F


# ::stappler::db::FieldOption<F,std::initializer_list<Field>>::assign(F&,std::initializer_list<Field>&&)

## BRIEF

Назначает набор полей для сопоставления типу `Extra`

## CONTENT

Назначает набор полей для сопоставления типу `Extra`

Параметры:
* F&
* std::initializer_list<Field>&&


# ::stappler::db::FieldOption<F,MaxFileSize>::FieldOption<F,MaxFileSize>

## BRIEF

Вспомогательная структура для назначения аргумента

## CONTENT

Вспомогательная структура для назначения аргумента

Параметры шаблона:
* typename F


# ::stappler::db::FieldOption<F,MaxFileSize>::assign(F&,stappler::db::MaxFileSize)

## BRIEF

Назначает максимальный размер файла

## CONTENT

Назначает максимальный размер файла

Параметры:
* F&
* stappler::db::MaxFileSize


# ::stappler::db::FieldOption<F,Vector<String>>::FieldOption<F,Vector<String>>

## BRIEF

Вспомогательная структура для назначения аргумента

## CONTENT

Вспомогательная структура для назначения аргумента

Параметры шаблона:
* typename F


# ::stappler::db::FieldOption<F,Vector<String>>::assign(F&,Vector<stappler::mem_pool::String>&&)

## BRIEF

Назначает список допустимых типов файла

## CONTENT

Назначает список допустимых типов файла

Параметры:
* F&
* Vector<stappler::mem_pool::String>&&


# ::stappler::db::FieldOption<F,MaxImageSize>::FieldOption<F,MaxImageSize>

## BRIEF

Вспомогательная структура для назначения аргумента

## CONTENT

Вспомогательная структура для назначения аргумента

Параметры шаблона:
* typename F


# ::stappler::db::FieldOption<F,MaxImageSize>::assign(F&,stappler::db::MaxImageSize&&)

## BRIEF

Назначает максимальный размер изображению

## CONTENT

Назначает максимальный размер изображению

Параметры:
* F&
* stappler::db::MaxImageSize&&


# ::stappler::db::FieldOption<F,MinImageSize>::FieldOption<F,MinImageSize>

## BRIEF

Вспомогательная структура для назначения аргумента

## CONTENT

Вспомогательная структура для назначения аргумента

Параметры шаблона:
* typename F


# ::stappler::db::FieldOption<F,MinImageSize>::assign(F&,stappler::db::MinImageSize&&)

## BRIEF

Назначает минимальный размер изображению

## CONTENT

Назначает минимальный размер изображению

Параметры:
* F&
* stappler::db::MinImageSize&&


# ::stappler::db::FieldOption<F,Vector<Thumbnail>>::FieldOption<F,Vector<Thumbnail>>

## BRIEF

Вспомогательная структура для назначения аргумента

## CONTENT

Вспомогательная структура для назначения аргумента

Параметры шаблона:
* typename F


# ::stappler::db::FieldOption<F,Vector<Thumbnail>>::assign(F&,Vector<stappler::db::Thumbnail>&&)

## BRIEF

Назначает список миниатюр изображению

## CONTENT

Назначает список миниатюр изображению

Параметры:
* F&
* Vector<stappler::db::Thumbnail>&&


# ::stappler::db::FieldOption<F,RemovePolicy>::FieldOption<F,RemovePolicy>

## BRIEF

Вспомогательная структура для назначения аргумента

## CONTENT

Вспомогательная структура для назначения аргумента

Параметры шаблона:
* typename F


# ::stappler::db::FieldOption<F,RemovePolicy>::assign(F&,stappler::db::RemovePolicy)

## BRIEF

Назначает режим действий при удалении связанного поля

## CONTENT

Назначает режим действий при удалении связанного поля

Параметры:
* F&
* stappler::db::RemovePolicy


# ::stappler::db::FieldOption<F,Linkage>::FieldOption<F,Linkage>

## BRIEF

Вспомогательная структура для назначения аргумента

## CONTENT

Вспомогательная структура для назначения аргумента

Параметры шаблона:
* typename F


# ::stappler::db::FieldOption<F,Linkage>::assign(F&,stappler::db::Linkage)

## BRIEF

Назначает способ связи объектов для полей наборов и объектов

## CONTENT

Назначает способ связи объектов для полей наборов и объектов

Параметры:
* F&
* stappler::db::Linkage


# ::stappler::db::FieldOption<F,const Scheme*>::FieldOption<F,const Scheme*>

## BRIEF

Вспомогательная структура для назначения аргумента

## CONTENT

Вспомогательная структура для назначения аргумента

Параметры шаблона:
* typename F


# ::stappler::db::FieldOption<F,const Scheme*>::assign(F&,stappler::db::Scheme const*)

## BRIEF

Назначает внешнюю схему для полей объектов, наборов и отображений

## CONTENT

Назначает внешнюю схему для полей объектов, наборов и отображений

Параметры:
* F&
* stappler::db::Scheme const*


# ::stappler::db::FieldOption<F,Scheme>::FieldOption<F,Scheme>

## BRIEF

Вспомогательная структура для назначения аргумента

## CONTENT

Вспомогательная структура для назначения аргумента

Параметры шаблона:
* typename F


# ::stappler::db::FieldOption<F,Scheme>::assign(F&,stappler::db::Scheme const&)

## BRIEF

Назначает внешнюю схему для полей объектов, наборов и отображений

## CONTENT

Назначает внешнюю схему для полей объектов, наборов и отображений

Параметры:
* F&
* stappler::db::Scheme const&


# ::stappler::db::FieldOption<F,const Scheme>::FieldOption<F,const Scheme>

## BRIEF

Вспомогательная структура для назначения аргумента

## CONTENT

Вспомогательная структура для назначения аргумента

Параметры шаблона:
* typename F


# ::stappler::db::FieldOption<F,const Scheme>::assign(F&,stappler::db::Scheme const&)

## BRIEF

Назначает внешнюю схему для полей объектов, наборов и отображений

## CONTENT

Назначает внешнюю схему для полей объектов, наборов и отображений

Параметры:
* F&
* stappler::db::Scheme const&


# ::stappler::db::FieldOption<F,Field>::FieldOption<F,Field>

## BRIEF

Вспомогательная структура для назначения аргумента

## CONTENT

Вспомогательная структура для назначения аргумента

Параметры шаблона:
* typename F


# ::stappler::db::FieldOption<F,Field>::assign(F&,stappler::db::Field&&)

## BRIEF

Назначает контрольное поле для поля массива

## CONTENT

Назначает контрольное поле для поля массива

Параметры:
* F&
* stappler::db::Field&&


# ::stappler::db::FieldOption<FieldArray,Type>::FieldOption<FieldArray,Type>

## BRIEF

Вспомогательная структура для назначения аргумента

## CONTENT

Вспомогательная структура для назначения аргумента


# ::stappler::db::FieldOption<FieldArray,Type>::assign(stappler::db::FieldArray&,stappler::db::Type)

## BRIEF

Назначает тип значения для поля массива

## CONTENT

Назначает тип значения для поля массива

Параметры:
* stappler::db::FieldArray&
* stappler::db::Type


# ::stappler::db::FieldOption<FieldView,Vector<String>>::FieldOption<FieldView,Vector<String>>

## BRIEF

Вспомогательная структура для назначения аргумента

## CONTENT

Вспомогательная структура для назначения аргумента


# ::stappler::db::FieldOption<FieldView,Vector<String>>::assign(stappler::db::FieldView&,Vector<stappler::mem_pool::String>&&)

## BRIEF

Назначает список требуемых полей для отображения

## CONTENT

Назначает список требуемых полей для отображения

Параметры:
* stappler::db::FieldView&
* Vector<stappler::mem_pool::String>&&


# ::stappler::db::FieldOption<FieldFullTextView,Vector<String>>::FieldOption<FieldFullTextView,Vector<String>>

## BRIEF

Вспомогательная структура для назначения аргумента

## CONTENT

Вспомогательная структура для назначения аргумента


# ::stappler::db::FieldOption<FieldFullTextView,Vector<String>>::assign(stappler::db::FieldFullTextView&,Vector<stappler::mem_pool::String>&&)

## BRIEF

Назначает список требуемых полей для полнотекстового отображения

## CONTENT

Назначает список требуемых полей для полнотекстового отображения

Параметры:
* stappler::db::FieldFullTextView&
* Vector<stappler::mem_pool::String>&&


# ::stappler::db::FieldOption<F,ViewLinkageFn>::FieldOption<F,ViewLinkageFn>

## BRIEF

Вспомогательная структура для назначения аргумента

## CONTENT

Вспомогательная структура для назначения аргумента

Параметры шаблона:
* typename F


# ::stappler::db::FieldOption<F,ViewLinkageFn>::assign(F&,stappler::db::ViewLinkageFn&&)

## BRIEF

Назначает функцию связи для отображения

## CONTENT

Назначает функцию связи для отображения

Параметры:
* F&
* stappler::db::ViewLinkageFn&&


# ::stappler::db::FieldOption<F,ViewFn>::FieldOption<F,ViewFn>

## BRIEF

Вспомогательная структура для назначения аргумента

## CONTENT

Вспомогательная структура для назначения аргумента

Параметры шаблона:
* typename F


# ::stappler::db::FieldOption<F,ViewFn>::assign(F&,stappler::db::ViewFn&&)

## BRIEF

Назначает функцию фильтрации отображения

## CONTENT

Назначает функцию фильтрации отображения

Параметры:
* F&
* stappler::db::ViewFn&&


# ::stappler::db::FieldOption<F,FullTextViewFn>::FieldOption<F,FullTextViewFn>

## BRIEF

Вспомогательная структура для назначения аргумента

## CONTENT

Вспомогательная структура для назначения аргумента

Параметры шаблона:
* typename F


# ::stappler::db::FieldOption<F,FullTextViewFn>::assign(F&,stappler::db::FullTextViewFn&&)

## BRIEF

Назначает функцию вывода полнотекстового индекса

## CONTENT

Назначает функцию вывода полнотекстового индекса

Параметры:
* F&
* stappler::db::FullTextViewFn&&


# ::stappler::db::FieldOption<F,FullTextQueryFn>::FieldOption<F,FullTextQueryFn>

## BRIEF

Вспомогательная структура для назначения аргумента

## CONTENT

Вспомогательная структура для назначения аргумента

Параметры шаблона:
* typename F


# ::stappler::db::FieldOption<F,FullTextQueryFn>::assign(F&,stappler::db::FullTextQueryFn&&)

## BRIEF

Назначает функцию вычисления полнотекстового запроса

## CONTENT

Назначает функцию вычисления полнотекстового запроса

Параметры:
* F&
* stappler::db::FullTextQueryFn&&


# ::stappler::db::FieldOption<F,FieldView::DeltaOptions>::FieldOption<F,FieldView::DeltaOptions>

## BRIEF

Вспомогательная структура для назначения аргумента

## CONTENT

Вспомогательная структура для назначения аргумента

Параметры шаблона:
* typename F


# ::stappler::db::FieldOption<F,FieldView::DeltaOptions>::assign(F&,FieldView::DeltaOptions)

## BRIEF

Назначает режим дельта-запросов для отображения

## CONTENT

Назначает режим дельта-запросов для отображения

Параметры:
* F&
* FieldView::DeltaOptions


# ::stappler::db::FieldOption<FieldVirtual,Vector<String>>::FieldOption<FieldVirtual,Vector<String>>

## BRIEF

Вспомогательная структура для назначения аргумента

## CONTENT

Вспомогательная структура для назначения аргумента


# ::stappler::db::FieldOption<FieldVirtual,Vector<String>>::assign(stappler::db::FieldVirtual&,Vector<stappler::mem_pool::String>&&)

## BRIEF

Назначает список требуемых полей виртуальному полю

## CONTENT

Назначает список требуемых полей виртуальному полю

Параметры:
* stappler::db::FieldVirtual&
* Vector<stappler::mem_pool::String>&&


# ::stappler::db::FieldOption<FieldVirtual,VirtualReadFn>::FieldOption<FieldVirtual,VirtualReadFn>

## BRIEF

Вспомогательная структура для назначения аргумента

## CONTENT

Вспомогательная структура для назначения аргумента


# ::stappler::db::FieldOption<FieldVirtual,VirtualReadFn>::assign(stappler::db::FieldVirtual&,stappler::db::VirtualReadFn&&)

## BRIEF

Назначает функцию чтения виртуальному полю

## CONTENT

Назначает функцию чтения виртуальному полю

Параметры:
* stappler::db::FieldVirtual&
* stappler::db::VirtualReadFn&&


# ::stappler::db::FieldOption<FieldVirtual,VirtualWriteFn>::FieldOption<FieldVirtual,VirtualWriteFn>

## BRIEF

Вспомогательная структура для назначения аргумента

## CONTENT

Вспомогательная структура для назначения аргумента


# ::stappler::db::FieldOption<FieldVirtual,VirtualWriteFn>::assign(stappler::db::FieldVirtual&,stappler::db::VirtualWriteFn&&)

## BRIEF

Назначает функцию записи виртуальному полю

## CONTENT

Назначает функцию записи виртуальному полю

Параметры:
* stappler::db::FieldVirtual&
* stappler::db::VirtualWriteFn&&
