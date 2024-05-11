Title: SPBuffer.h


# STAPPLER_CORE_UTILS_SPBUFFER_H_

## BRIEF

Заголовок интерфейса генерализованного буфера

## CONTENT

Заголовок интерфейса генерализованного буфера. Оперделяет шаблон для динамического и постоянного (стекового) буфера для использования в генерализованном интерфейсе ввода-вывода (SPIO.h)

# ::stappler::BufferTemplate<typename>

## BRIEF

Объект динамического буфера на основе интерфейса памяти

## CONTENT

Объект динамического буфера на основе интерфейса памяти

Параметры шаблона:
* typename Interface - используемый интерфейс памяти

Базовые классы:
* Interface::AllocBaseType


# ::stappler::BufferTemplate<typename>::byte_type

## BRIEF

Тип байта, хранимого в буфере

## CONTENT

Доступ: public

Тип байта, хранимого в буфере

# ::stappler::BufferTemplate<typename>::defsize

## BRIEF

Предустановленный начальный размер буфера

## CONTENT

Доступ: public

Предустановленный начальный размер буфера. 256 байт для совместимости с возвратной оптимизацией интерфейса пулов памяти.

Тип: size_t const


# ::stappler::BufferTemplate<typename>::BufferTemplate(size_t)

## BRIEF

Конструктор буфера

## CONTENT

Доступ: public

Конструктор буфера с предустановленным размером

Параметры:
* size_t - предустановленный размер


# ::stappler::BufferTemplate<typename>::BufferTemplate(const BufferTemplate<Interface>&)

## BRIEF

Конструктор копирования

## CONTENT

Доступ: public

Конструктор копирования. Полагается на конструктор копирования низлежащего контейнера. Позиция записи после операции не определена.

Параметры:
* const BufferTemplate<Interface>&


# ::stappler::BufferTemplate<typename>::BufferTemplate(BufferTemplate<Interface>&&)

## BRIEF

Конструктор перемещения

## CONTENT

Доступ: public

Конструктор перемещения. Полагается на конструктор перемещения низлежащего контейнера. Позиция записи после операции не определена.

Параметры:
* BufferTemplate<Interface>&&


# ::stappler::BufferTemplate<typename>::operator=(const BufferTemplate<Interface>&)

## BRIEF

Оператор копирования

## CONTENT

Доступ: public

Оператор копирования. Полагается на оператор копирования низлежащего контейнера. Позиция записи после операции не определена.

Параметры:
* const BufferTemplate<Interface>&

Возвращает:
* BufferTemplate<Interface>&

# ::stappler::BufferTemplate<typename>::operator=(BufferTemplate<Interface>&&)

## BRIEF

Оператор перемещения

## CONTENT

Доступ: public

Оператор перемещения. Полагается на оператор перемещения низлежащего контейнера. Позиция записи после операции не определена.

Параметры:
* BufferTemplate<Interface>&&

Возвращает:
* BufferTemplate<Interface>&

# ::stappler::BufferTemplate<typename>::put<typename,typename std::enable_if<sizeof(CharType) == 1>::type*>(CharType const*,size_t)

## BRIEF

Добавляет данные в буфер

## CONTENT

Доступ: public

Добавляет данные в буфер. Расширяет его при необходимости. Устанавливает позицию записи в конец буфера.

Параметры шаблона:
* typename CharType - тип добавляемых байтов
* typename std::enable_if<sizeof(CharType) == 1>::type* - проверка на то, что тип добавляемых байтов имеер размер одного байта. В противном случае, функция недоступна.

Параметры:
* CharType const* - блок данных для добавления
* size_t - размер блока данных для добавления

Возвращает:
* size_t - число добавленных байт

# ::stappler::BufferTemplate<typename>::putc(char16_t)

## BRIEF

Добавляет символ в буфер

## CONTENT

Доступ: public

Добавляет символ в  конец буфера, предварительно конвертируя его в UTF-8. Устанавливает позицию записи в конец буфера.

Параметры:
* char16_t - добавляемый символ (UTF-16/UCS-2)

Возвращает:
* size_t - число записанных байт

# ::stappler::BufferTemplate<typename>::putc(char)

## BRIEF

Добавляет символ в буфер

## CONTENT

Доступ: public

Добавляет символ в конец буфера. Устанавливает позицию записи в конец буфера.

Параметры:
* char - однобайтный символ

Возвращает:
* size_t - число записанных байт

# ::stappler::BufferTemplate<typename>::get<typename>() const

## BRIEF

Получает данные из буфера

## CONTENT

Доступ: public

Получает данные из буфера

Параметры шаблона:
* typename Reader - тип возвращаемого отображения (варианты StringView или BytesView)

Возвращает:
* Reader - отображение данных в буфере. Повреждаются при изменении буфера.

# ::stappler::BufferTemplate<typename>::pop<typename>(size_t)

## BRIEF

Забирает данные с конца буфера

## CONTENT

Доступ: public

Забирает данные с конца буфера

Параметры шаблона:
* typename Reader - тип возвращаемого отображения (варианты StringView или BytesView)

Параметры:
* size_t - число байт, забираемых с буфера

Возвращает:
* Reader - отображение данных, изъятых из буфера. Повреждаются при изменении буфера.

# ::stappler::BufferTemplate<typename>::read<typename>(size_t)

## BRIEF

Читает данные из буфера по текущей позиции записи

## CONTENT

Доступ: public

Читает данные из буфера по текущей позиции записи (см. seek(

Параметры шаблона:
* typename Reader

Параметры:
* size_t

Возвращает:
* Reader

# ::stappler::BufferTemplate<typename>::clear()

## BRIEF

Очищает буфер

## CONTENT

Доступ: public

Очищает буфер. Не удаляет данные, только перемещает указатель на актуальные данные

# ::stappler::BufferTemplate<typename>::seek(size_t)

## BRIEF

Перемещает позицию записи

## CONTENT

Доступ: public

Перемещает позицию записи на указанный отступ от начала буфера. Увеличивает буфер при необходимости. Все новые операции будут считать новую позицию коцом буфера.

Параметры:
* size_t - отступ от начала буфера в байтах

Возвращает:
* bool - true если отступ успешен

# ::stappler::BufferTemplate<typename>::capacity() const

## BRIEF

Возвращает текущую максимальную вместимость буфера

## CONTENT

Доступ: public

Возвращает текущую максимальную вместимость буфера

Возвращает:
* size_t - максимальная вместимость буфера в байтах

# ::stappler::BufferTemplate<typename>::size() const

## BRIEF

Возвращает текущий размер данных в буфере

## CONTENT

Доступ: public

Возвращает текущий размер данных в буфере

Возвращает:
* size_t - размер данных в буфере в байтах

# ::stappler::BufferTemplate<typename>::input() const

## BRIEF

Возвращает текущий объём подтверждённо записанных данных

## CONTENT

Доступ: public

Возвращает текущий объём подтверждённо записанных данных (см. prepare/save)

Возвращает:
* size_t - текущий объём подтверждённо записанных данных в байтах

# ::stappler::BufferTemplate<typename>::empty() const

## BRIEF

Проверяет, пуст ли буфер

## CONTENT

Доступ: public

Проверяет, пуст ли буфер

Возвращает:
* bool - true если буфер пуст

# ::stappler::BufferTemplate<typename>::str() const

## BRIEF

Записывает данные буфера в строку

## CONTENT

Доступ: public

Записывает данные буфера в строку. Итоговая строка может содержать \0 в середине, если так записаны данные буфера.

Возвращает:
* typename Interface::StringType - итоговая строка

# ::stappler::BufferTemplate<typename>::data()

## BRIEF

Получает прямой указатель на начало буфера

## CONTENT

Доступ: public

Получает прямой указатель на начало буфера

Возвращает:
* uint8_t* - прямой указатель на начало буфера

# ::stappler::BufferTemplate<typename>::prepare(size_t&)

## BRIEF

Подготавлиает буфер для записи данных

## CONTENT

Доступ: public

Подготавлиает буфер для записи данных не более указанного объёма. Увеличивает размер при необходимости. Очищает текущие данные.

Параметры:
* size_t& - (вход) максимальный размер для записи в байтах / (выход) реально доступное число байт для записи

Возвращает:
* uint8_t* - адрес в памяти буфера для записи

# ::stappler::BufferTemplate<typename>::save(uint8_t*,size_t)

## BRIEF

Сохраняет изменения в буфере после подготовки

## CONTENT

Доступ: public

Сохраняет изменения в буфере после подготовки

Параметры:
* uint8_t* - указатель на записываемый сегмент (тот же, что получен из prepare)
* size_t - реальное число записанных байт


# ::stappler::BufferTemplate<typename>::overflow()

## BRIEF

Увеличивает буфер вдвое

## CONTENT

Доступ: protected

Увеличивает буфер вдвое

# ::stappler::BufferTemplate<typename>::overflow(size_t)

## BRIEF

Увеличивает буфер до достижения размера

## CONTENT

Доступ: protected

Увеличивает буфер до достижения размера

Параметры:
* size_t - целевой размер в байтах


# ::stappler::BufferTemplate<typename>::_buffer

## BRIEF

Низлежащий буфер на основе интерфейса памяти

## CONTENT

Доступ: protected

Низлежащий буфер на основе интерфейса памяти

Тип: typename Interface::BytesType


# ::stappler::BufferTemplate<typename>::_ptr

## BRIEF

Текущее начало актуальных данных буфера

## CONTENT

Доступ: protected

Текущее начало актуальных данных буфера

Тип: uint8_t*


# ::stappler::BufferTemplate<typename>::_end

## BRIEF

Текущий конец актуальных данных буфера

## CONTENT

Доступ: protected

Текущий конец актуальных данных буфера

Тип: uint8_t*


# ::stappler::BufferTemplate<typename>::_input

## BRIEF

Текущий размер подтверждённо записанных данных

## CONTENT

Доступ: protected

Текущий размер подтверждённо записанных данных (см prepare/save)

Тип: size_t


# ::stappler::StackBuffer<size_t>

## BRIEF

Структура статического/стекового буфера

## CONTENT

Структура статического/стекового буфера. Обычно используется для распределения памяти со стека для использования в генерализованном вводе-выводе.

Параметры шаблона:
* size_t Size - статический размер буфера


# ::stappler::StackBuffer<size_t>::StackBuffer()

## BRIEF

Конструктор по умолчанию

## CONTENT

Доступ: public

Конструктор по умолчанию

# ::stappler::StackBuffer<size_t>::StackBuffer(const StackBuffer<Size>&)

## BRIEF

Конструктор копирования

## CONTENT

Доступ: public

Конструктор копирования, копирует данные буфера

Параметры:
* const StackBuffer<Size>&


# ::stappler::StackBuffer<size_t>::StackBuffer(StackBuffer<Size>&&)

## BRIEF

Конструктор перемещения

## CONTENT

Доступ: public

Конструктор перемещения. В действительности, не отличается от копирования

Параметры:
* StackBuffer<Size>&&


# ::stappler::StackBuffer<size_t>::operator=(const StackBuffer<Size>&)

## BRIEF

Оператор копирования

## CONTENT

Доступ: public

Оператор копирования

Параметры:
* const StackBuffer<Size>&

Возвращает:
* StackBuffer<Size>&

# ::stappler::StackBuffer<size_t>::operator=(StackBuffer<Size>&&)

## BRIEF

Оператор перемещения

## CONTENT

Доступ: public

Оператор перемещения. В действительности, не отличается от копирования

Параметры:
* StackBuffer<Size>&&

Возвращает:
* StackBuffer<Size>&

# ::stappler::StackBuffer<size_t>::operator[](size_t)

## BRIEF

Читает байт по отступу

## CONTENT

Доступ: public

Читает байт по отступу

Параметры:
* size_t

Возвращает:
* uint8_t&

# ::stappler::StackBuffer<size_t>::operator[](size_t) const

## BRIEF

Читает байт по отступу

## CONTENT

Доступ: public

Читает байт по отступу

Параметры:
* size_t

Возвращает:
* uint8_t const&

# ::stappler::StackBuffer<size_t>::at(size_t)

## BRIEF

Читает байт по отступу

## CONTENT

Доступ: public

Читает байт по отступу

Параметры:
* size_t

Возвращает:
* uint8_t&

# ::stappler::StackBuffer<size_t>::at(size_t) const

## BRIEF

Читает байт по отступу

## CONTENT

Доступ: public

Читает байт по отступу

Параметры:
* size_t

Возвращает:
* uint8_t const&

# ::stappler::StackBuffer<size_t>::size() const

## BRIEF

Возвращает текущий актуальный размер буфера

## CONTENT

Доступ: public

Возвращает текущий актуальный размер буфера

Возвращает:
* size_t -  текущий актуальный размер буфера в байтах

# ::stappler::StackBuffer<size_t>::capacity() const

## BRIEF

Возвращает текущую вместимость буфера

## CONTENT

Доступ: public

Возвращает текущую вместимость буфера (статический размер)

Возвращает:
* size_t - текущая вместимость буфера в байтах

# ::stappler::StackBuffer<size_t>::remains() const

## BRIEF

Возвращает оставшийся свободный размер в буфере

## CONTENT

Доступ: public

Возвращает оставшийся свободный размер в буфере

Возвращает:
* size_t -  оставшийся свободный размер в буфере

# ::stappler::StackBuffer<size_t>::empty() const

## BRIEF

Проверяет, пуст ли буфер

## CONTENT

Доступ: public

Проверяет, пуст ли буфер

Возвращает:
* bool - true если буфер пуст

# ::stappler::StackBuffer<size_t>::full() const

## BRIEF

Проверяет, заполнен ли буфер полностью.

## CONTENT

Доступ: public

Проверяет, заполнен ли буфер полностью.

Возвращает:
* bool - true если буфер заполнен полностью

# ::stappler::StackBuffer<size_t>::soft_clear()

## BRIEF

Быстро очищает буфер

## CONTENT

Доступ: public

Быстро очищает буфер. Только перемещает текущий указатель.

# ::stappler::StackBuffer<size_t>::clear()

## BRIEF

Очищает буфер

## CONTENT

Доступ: public

Очищает буфер, уничтожает хранимые данные

# ::stappler::StackBuffer<size_t>::data()

## BRIEF

Возвращает указатель на начало данных буфера

## CONTENT

Доступ: public

Возвращает указатель на начало данных буфера

Возвращает:
* uint8_t* - указатель на начало данных буфера

# ::stappler::StackBuffer<size_t>::data() const

## BRIEF

Возвращает указатель на начало данных буфера

## CONTENT

Доступ: public

Возвращает указатель на начало данных буфера

Возвращает:
* uint8_t const* - указатель на начало данных буфера

# ::stappler::StackBuffer<size_t>::put(uint8_t const*,size_t)

## BRIEF

Записыает данные в конец буфера

## CONTENT

Доступ: public

Записыает данные в конец буфера, пока это возможно

Параметры:
* uint8_t const* - указатель на записываемые байты
* size_t - число записываемых байт

Возвращает:
* size_t - число реально записанных байт

# ::stappler::StackBuffer<size_t>::putc(uint8_t)

## BRIEF

Записывает один байт в буфер

## CONTENT

Доступ: public

Записывает один байт в буфер

Параметры:
* uint8_t

Возвращает:
* size_t - число реально записанных байт

# ::stappler::StackBuffer<size_t>::get<typename>() const

## BRIEF

Получает текущее отображение данных в буфере

## CONTENT

Доступ: public

Получает текущее отображение данных в буфере

Параметры шаблона:
* typename Reader - тип отображения, варианты StringView или BytesView

Возвращает:
* Reader - отображение данных в буфере. Повреждается при изменении буфера.

# ::stappler::StackBuffer<size_t>::prepare(size_t&)

## BRIEF

Подготавливает буфер для записи

## CONTENT

Доступ: public

Подготавлиает буфер для записи данных не более указанного объёма. Очищает текущие данные.

Параметры:
* size_t& - (вход) максимальный размер для записи в байтах / (выход) реально доступное число байт для записи

Возвращает:
* uint8_t* - адрес в памяти буфера для записи

# ::stappler::StackBuffer<size_t>::prepare_preserve(size_t&)

## BRIEF

Подготавливает буфер для дозаписи в конец

## CONTENT

Доступ: public

Подготавлиает буфер для дозаписи данных не более указанного объёма в конец буфера. Очищает текущие данные.

Параметры:
* size_t& - (вход) максимальный размер для записи в байтах / (выход) реально доступное число байт для записи

Возвращает:
* uint8_t* - адрес в памяти буфера для записи

# ::stappler::StackBuffer<size_t>::save(uint8_t*,size_t)

## BRIEF

Сохраняет изменения в буфере после подготовки

## CONTENT

Доступ: public

Сохраняет изменения в буфере после подготовки

Параметры:
* uint8_t* - указатель на записываемый сегмент (тот же, что получен из prepare)
* size_t - реальное число записанных байт


# ::stappler::StackBuffer<size_t>::_size

## BRIEF

Текущий размер записанных в буфер данных

## CONTENT

Доступ: protected

Текущий размер записанных в буфер данных в байтах

Тип: size_t


# ::stappler::StackBuffer<size_t>::_buf

## BRIEF

Статический контейнер для байт

## CONTENT

Доступ: protected

Статический контейнер для байт

Тип: std::array<uint8_t, Size>


# ::stappler::io::BufferTraits<stappler::BufferTemplate<Interface>>::BufferTraits<stappler::BufferTemplate<Interface>>

## BRIEF

Определение соотвествия между функциями генерализованного ввода-вывода и динамическим буфером

## CONTENT

Определение соотвествия между функциями генерализованного ввода-вывода и динамическим буфером

Параметры шаблона:
* typename Interface - используемый интерфейс памяти


# ::stappler::io::BufferTraits<stappler::BufferTemplate<Interface>>::type

## BRIEF

Низлежащий тип буфера

## CONTENT

Низлежащий тип буфера

# ::stappler::io::BufferTraits<stappler::BufferTemplate<Interface>>::PrepareFn(void*,size_t&)

## BRIEF

Функция подготовки буфера к записи

## CONTENT

Функция подготовки буфера к записи

Параметры:
* void*
* size_t&

Возвращает:
* uint8_t*

# ::stappler::io::BufferTraits<stappler::BufferTemplate<Interface>>::SaveFn(void*,uint8_t*,size_t,size_t)

## BRIEF

Функция сохранений изменения в буфере

## CONTENT

Функция сохранений изменения в буфере

Параметры:
* void*
* uint8_t*
* size_t
* size_t


# ::stappler::io::BufferTraits<stappler::BufferTemplate<Interface>>::SizeFn(void*)

## BRIEF

Функция определения размера

## CONTENT

Функция определения размера

Параметры:
* void*

Возвращает:
* size_t

# ::stappler::io::BufferTraits<stappler::BufferTemplate<Interface>>::CapacityFn(void*)

## BRIEF

Функция определения вместимости

## CONTENT

Функция определения вместимости

Параметры:
* void*

Возвращает:
* size_t

# ::stappler::io::BufferTraits<stappler::BufferTemplate<Interface>>::DataFn(void*)

## BRIEF

Функция доступа к данным буфера

## CONTENT

Функция доступа к данным буфера

Параметры:
* void*

Возвращает:
* uint8_t*

# ::stappler::io::BufferTraits<stappler::BufferTemplate<Interface>>::ClearFn(void*)

## BRIEF

Функция очистики буфера

## CONTENT

Функция очистики буфера

Параметры:
* void*


# ::stappler::io::BufferTraits<StackBuffer<Size>>::BufferTraits<StackBuffer<Size>>

## BRIEF

Определение соотвествия между функциями генерализованного ввода-вывода и статическим буфером

## CONTENT

Определение соотвествия между функциями генерализованного ввода-вывода и статическим буфером

Параметры шаблона:
* size_t Size


# ::stappler::io::BufferTraits<StackBuffer<Size>>::type

## BRIEF

Тип низлежащего буфера

## CONTENT

Тип низлежащего буфера

# ::stappler::io::BufferTraits<StackBuffer<Size>>::PrepareFn(void*,size_t&)

## BRIEF

Функция подготовки записи

## CONTENT

Функция подготовки записи

Параметры:
* void*
* size_t&

Возвращает:
* uint8_t*

# ::stappler::io::BufferTraits<StackBuffer<Size>>::SaveFn(void*,uint8_t*,size_t,size_t)

## BRIEF

Функция сохранения изменений в буфере

## CONTENT

Функция сохранения изменений в буфере

Параметры:
* void*
* uint8_t*
* size_t
* size_t


# ::stappler::io::BufferTraits<StackBuffer<Size>>::SizeFn(void*)

## BRIEF

Функция определения размера

## CONTENT

Функция определения размера

Параметры:
* void*

Возвращает:
* size_t

# ::stappler::io::BufferTraits<StackBuffer<Size>>::CapacityFn(void*)

## BRIEF

Функция опредения вместимости

## CONTENT

Функция опредения вместимости

Параметры:
* void*

Возвращает:
* size_t

# ::stappler::io::BufferTraits<StackBuffer<Size>>::DataFn(void*)

## BRIEF

Функция доступа к данным буфера

## CONTENT

Функция доступа к данным буфера

Параметры:
* void*

Возвращает:
* uint8_t*

# ::stappler::io::BufferTraits<StackBuffer<Size>>::ClearFn(void*)

## BRIEF

Функция очистки буфера

## CONTENT

Функция очистки буфера

Параметры:
* void*

# ::stappler::BufferTemplate<typename>::putStrings<typename,std::enable_if_t<string::detail::IsFastToStringAvailable<Args...>::value>*...>(Args &&...)

## BRIEF

Добавляет строковые значения в буфер

## CONTENT

Доступ: public

Добавляет строковые значения в буфер. Тип значения вычисляется автоматически. Если тип недоступен для быстрой конвертации  - последует ошибка компиляции.

Параметры шаблона:
* typename Args
* std::enable_if_t<string::detail::IsFastToStringAvailable<Args...>::value>* 

Параметры:
* Args &&...

Возвращает:
* stappler::StringView - отображение для записанных строк

# ::stappler::BufferTemplate<typename>::resetWithStrings<typename,std::enable_if_t<string::detail::IsFastToStringAvailable<Args...>::value>*...>(Args &&...)

## BRIEF

Очищает буфер и наполняет его контентом из строковых значений

## CONTENT

Доступ: public

Очищает буфер и наполняет его контентом из строковых значений. Тип значения вычисляется автоматически. Если тип недоступен для быстрой конвертации  - последует ошибка компиляции.

Параметры шаблона:
* typename Args
* std::enable_if_t<string::detail::IsFastToStringAvailable<Args...>::value>* 

Параметры:
* Args &&...

Возвращает:
* stappler::StringView - отображение для записанных строк