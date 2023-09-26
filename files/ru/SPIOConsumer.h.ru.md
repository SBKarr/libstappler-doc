Title: SPIOConsumer.h


# STAPPLER_CORE_IO_SPIOCONSUMER_H_

## BRIEF

Заголовок структуры потребителя данных единого интерфейса ввода-вывода

## CONTENT

Заголовок структуры потребителя данных единого интерфейса ввода-вывода


# ::stappler::io::ConsumerTraitsStream

## BRIEF

Адаптер для потока к качестве потребителя данных

## CONTENT

Адаптер для потока к качестве потребителя данных


# ::stappler::io::ConsumerTraitsStream::stream_type

## BRIEF

Тип выходного потока

## CONTENT

Тип выходного потока


# ::stappler::io::ConsumerTraitsStream::WriteFn(void*,uint8_t const*,size_t)

## BRIEF

Функция записи в поток

## CONTENT

Функция записи в поток

Параметры:
* void* - непрозрачный указатель на поток
* uint8_t const* - записываемый буфер
* size_t - длина буфера в байтах

Возвращает:
* size_t - реальное число записанных байт

# ::stappler::io::ConsumerTraitsStream::FlushFn(void*)

## BRIEF

Сбрасывает внутренний буфер потока

## CONTENT

Сбрасывает внутренний буфер потока

Параметры:
* void* - непрозрачный указатель на поток


# ::stappler::io::WriteFunction<typename>(T&,uint8_t const*,size_t)

## BRIEF

Переопределяемая функция записи для потребителя данных

## CONTENT

Переопределяемая функция записи для потребителя данных

Параметры шаблона:
* typename T - тип потребителя данных

Параметры:
* T& - потребитель данных
* uint8_t const* - записываемый буфер
* size_t - длина буфера в байтах

Возвращает:
* size_t - реальное число записанных байт

# ::stappler::io::FlushFunction<typename>(T&)

## BRIEF

Переопределяемая функция сброса внутреннего буфера потребителя данных

## CONTENT

Переопределяемая функция сброса внутреннего буфера потребителя данных

Параметры шаблона:
* typename T - тип потребителя данных

Параметры:
* T& - потребитель данных


# ::stappler::io::ConsumerTraitsOverload<class>

## BRIEF

Адаптер для работы потребителя данных через перегружаемые функции

## CONTENT

Адаптер для работы потребителя данных через перегружаемые функции

Параметры шаблона:
* class T - тип потребителя данных


# ::stappler::io::ConsumerTraitsOverload<class>::WriteFn(void*,uint8_t const*,size_t)

## BRIEF

Функция записи

## CONTENT

Функция записи

Параметры:
* void* - непрозрачный указатель на потребитель данных
* uint8_t const* - записываемый буфер
* size_t - длина буфера в байтах

Возвращает:
* size_t - реальное число записанных байт


# ::stappler::io::ConsumerTraitsOverload<class>::FlushFn(void*)

## BRIEF

Сбрасывает внутренний буфер потребителя данных

## CONTENT

Сбрасывает внутренний буфер потребителя данных

Параметры:
* void* - непрозрачный указатель на потребиетля данных


# ::stappler::io::ConsumerTraitsReolution<typename>

## BRIEF

Вспомогательный класс для определения адаптера

## CONTENT

Вспомогательный класс для определения адаптера

Параметры шаблона:
* typename T - тип потребителя данных


# ::stappler::io::ConsumerTraitsReolution<typename>::type

## BRIEF

Выведенный тип адаптера

## CONTENT

Выведенный тип адаптера


# ::stappler::io::ConsumerTraits<typename>

## BRIEF

Общий адаптер потребителя данных

## CONTENT

Общий адаптер потребителя данных

Параметры шаблона:
* typename T - тип потребителя данных


# ::stappler::io::ConsumerTraits<typename>::traits_type

## BRIEF

Тип адаптера

## CONTENT

Тип адаптера

# ::stappler::io::ConsumerTraits<typename>::WriteFn(void*,uint8_t const*,size_t)

## BRIEF

Функция записи

## CONTENT

Функция записи

Параметры:
* void* - непрозрачный указатель на потребитель данных
* uint8_t const* - записываемый буфер
* size_t - длина буфера в байтах

Возвращает:
* size_t - реальное число записанных байт


# ::stappler::io::ConsumerTraits<typename>::FlushFn(void*)

## BRIEF

Сбрасывает внутренний буфер потребителя данных

## CONTENT

Сбрасывает внутренний буфер потребителя данных

Параметры:
* void* - непрозрачный указатель на потребиетля данных


# ::stappler::io::Consumer

## BRIEF

Обёртка потребителя данных

## CONTENT

Обёртка потребителя данных


# ::stappler::io::Consumer::Consumer<typename,typename>(T&)

## BRIEF

Создаёт обёртку потребителя вокруг типа

## CONTENT

Создаёт обёртку потребителя вокруг типа. Потребитель должен существовать всё время жизни обёртки

Параметры шаблона:
* typename T - тип потребителя
* typename Traits - обёртка потребителя

Параметры:
* T& - объект потребителя


# ::stappler::io::Consumer::write(uint8_t const*,size_t) const

## BRIEF

Записывает данные потребителю

## CONTENT

Записывает данные потребителю

Параметры:
* uint8_t const* - буфер с данными
* size_t - длина буфера

Возвращает:
* size_t - число записанных байт

# ::stappler::io::Consumer::write(stappler::io::Buffer const&) const

## BRIEF

Записывает содержимое буфера потребителю

## CONTENT

Записывает содержимое буфера потребителю

Параметры:
* stappler::io::Buffer const& - записываемый буфер

Возвращает:
* size_t - число записанных байт

# ::stappler::io::Consumer::flush() const

## BRIEF

Освобождает внутренние буферы потребителя

## CONTENT

Освобождает внутренние буферы потребителя


# ::stappler::io::Consumer::ptr

## BRIEF

Непрозрачный указатель на потребителя

## CONTENT

Непрозрачный указатель на потребителя

Тип: void*


# ::stappler::io::Consumer::write_ptr

## BRIEF

Функция записи

## CONTENT

Функция записи

Тип: stappler::io::write_fn


# ::stappler::io::Consumer::flush_ptr

## BRIEF

Функция освобождения буфера

## CONTENT

Функция освобождения буфера

Тип: stappler::io::flush_fn
