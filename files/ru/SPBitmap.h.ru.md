Title: SPBitmap.h

# ::stappler::bitmap::ResampleFilter

## BRIEF

Перечисление доступных функций фильтрации при уменьшении/увеличении изображения

## CONTENT

Перечисление доступных функций фильтрации при уменьшении/увеличении изображения

Значения:
* Box
* Tent
* Bell
* BSpline - функция на основе B-сплайна
* Mitchell
* Lanczos3 - фильтр Ланцоша с ядром третьего порядка
* Blackman
* Lanczos4 - фильтр Ланцоша с ядром четвёртого порядка
* Lanczos6 - фильтр Ланцоша с ядром шестого порядка
* Lanczos12 - фильтр Ланцоша с ядром двенадцатого порядка
* Kaiser
* Gaussian - функция гауссианы
* Catmullrom
* QuadInterp - функция квадратичной интерполяции
* QuadApprox - функция квадратичной аппроксимации
* QuadMix - смешанная квадратичная функция
* Default - значение по умолчанию: Lanczos4


# ::stappler::bitmap::BitmapTemplate<typename>

## BRIEF

Шаблон битовой карты для манипуляций с данными изображения

## CONTENT

Шаблон битовой карты для манипуляций с данными изображения. Поддерживает загрузку на основе известных форматов изображений, сохранение в них, уменьшение или увеличение изображения с помощью фильтрации. Поддержка форматов основана на дополнительных библиотеках: libpng, libjpeg, libwebp, giflib.

Шаблон не предназначен для высокопроизводительных задач, поскольку не позволяет избегать копирования при загрузке данных из файла или передаче между двумя разными системами (например, при загрузке в буфер GPU). Для таких случаев используйте функции из bitmap напрямую.

Для пространства имён с явно выбранным интерфейсом памяти можно использовать по простому псевдониму Bitmap вместо ::bitmap::BitmapTemplate<Interface>.

Параметры шаблона:
* typename Interface - используемый интерфейс памяти

Базовые классы:
* Interface::AllocBaseType - базовый класс для аллокации с помощью интерфейса памяти


# ::stappler::bitmap::BitmapTemplate<typename>::BitmapTemplate()

## BRIEF

Конструктор по умолчанию, создаёт пустую битовую карту

## CONTENT

Доступ: public

Конструктор по умолчанию, создаёт пустую битовую карту


# ::stappler::bitmap::BitmapTemplate<typename>::BitmapTemplate(stappler::BytesView,stappler::bitmap::StrideFn const&)

## BRIEF

Конструктор новой битовой карты из закодированного изображения

## CONTENT

Конструктор новой битовой карты из данных закодированного изображения. Размер изображения и формат пикселей будет определён автоматически после декодирования. Изображение декодируется с использованием определённых в системе форматов. При ошибке декодирования объект будет пуст.

Доступ: public

Параметры:
* stappler::BytesView - данные для декодирования
* stappler::bitmap::StrideFn const& - функция для определения смещения ряда на основе ширины изображения. Может быть опущена.


# ::stappler::bitmap::BitmapTemplate<typename>::BitmapTemplate(uint8_t const*,size_t,stappler::bitmap::StrideFn const&)

## BRIEF

Конструктор новой битовой карты из закодированного изображения

## CONTENT

Конструктор новой битовой карты из данных закодированного изображения. Размер изображения и формат пикселей будет определён автоматически после декодирования. Изображение декодируется с использованием определённых в системе форматов. При ошибке декодирования объект будет пуст.

Доступ: public

Параметры:
* uint8_t const* - указатель на закодированные данные в буфере памяти
* size_t - размер буфера данных
* stappler::bitmap::StrideFn const& - функция для определения смещения ряда на основе ширины изображения. Может быть опущена.


# ::stappler::bitmap::BitmapTemplate<typename>::BitmapTemplate(uint8_t const*,uint32_t,uint32_t,stappler::bitmap::PixelFormat,stappler::bitmap::AlphaFormat,uint32_t)

## BRIEF

Конструктор новой битовой карты из пиксельного буфера

## CONTENT

Конструктор новой битовой карты из пиксельного буфера (декодированного попиксельного изображения).

Доступ: public

Параметры:
* uint8_t const* - указатель на начало буфера данных пикселей. Буфер должен содержать max(width * getBytesPerPixel(format), stride) * height байт.
* uint32_t width - ширина изображения в пикселях
* uint32_t height - высота изобрадения в пикселях
* stappler::bitmap::PixelFormat format - формат пикселя
* stappler::bitmap::AlphaFormat alpha - формат альфа-канала
* uint32_t stride - смещение ряда в байтах (0 - плотная упаковка, смещение равно длине ряда). Смещение не может быть меньше width * getBytesPerPixel(format).

# ::stappler::bitmap::BitmapTemplate<typename>::BitmapTemplate(stappler::BytesView,uint32_t,uint32_t,stappler::bitmap::PixelFormat,stappler::bitmap::AlphaFormat,uint32_t)

## BRIEF

Конструктор новой битовой карты из пиксельного буфера

## CONTENT

Конструктор новой битовой карты из пиксельного буфера (декодированного попиксельного изображения).

Доступ: public

Параметры:
* stappler::BytesView - буфер данных в памяти. Буфер должен содержать max(width * getBytesPerPixel(format), stride) * height байт.
* uint32_t width - ширина изображения в пикселях
* uint32_t height - высота изобрадения в пикселях
* stappler::bitmap::PixelFormat format - формат пикселя
* stappler::bitmap::AlphaFormat alpha - формат альфа-канала
* uint32_t stride - смещение ряда в байтах (0 - плотная упаковка, смещение равно длине ряда). Смещение не может быть меньше width * getBytesPerPixel(format).


# ::stappler::bitmap::BitmapTemplate<typename>::BitmapTemplate(typename Interface::BytesType&&,uint32_t,uint32_t,stappler::bitmap::PixelFormat,stappler::bitmap::AlphaFormat,uint32_t)

## BRIEF

Конструктор новой битовой карты через перемещение пиксельного буфера

## CONTENT

Конструктор новой битовой карты через перемещение пиксельного буфера. Этот конструктор избегает копирования буфера, используя семантику перемещения для типа байтового контейнера (Bytes) соотвествующего интерфейса памяти.

Доступ: public

Параметры:
* typename Interface::BytesType&& - перемещаемый буфер. Должен содержать max(width * getBytesPerPixel(format), stride) * height байт.
* uint32_t width - ширина изображения в пикселях
* uint32_t height - высота изобрадения в пикселях
* stappler::bitmap::PixelFormat format - формат пикселя
* stappler::bitmap::AlphaFormat alpha - формат альфа-канала
* uint32_t stride - смещение ряда в байтах (0 - плотная упаковка, смещение равно длине ряда). Смещение не может быть меньше width * getBytesPerPixel(format).


# ::stappler::bitmap::BitmapTemplate<typename>::BitmapTemplate(const BitmapTemplate<Interface>&)

## BRIEF

Конструктор копирования

## CONTENT

Конструктор копирования. Копирует битовую карту и все её данные.

Доступ: public

Параметры:
* const BitmapTemplate<Interface>& - исходный объект


# ::stappler::bitmap::BitmapTemplate<typename>::operator=(const BitmapTemplate<Interface>&)

## BRIEF

Оператор копирования.

## CONTENT

Оператор копирования. Копирует битовую карту и все её данные.

Доступ: public

Параметры:
* const BitmapTemplate<Interface>& - исходный объект

Возвращает:
* BitmapTemplate<Interface>& - ссылку на себя

# ::stappler::bitmap::BitmapTemplate<typename>::BitmapTemplate(BitmapTemplate<Interface>&&)

## BRIEF

Конструктор перемещения.

## CONTENT

Конструктор перемещения. Перемещает данные другого объекта без копирования, оставляя его в неизвестном состоянии.

Доступ: public

Параметры:
* BitmapTemplate<Interface>&& - исходный объект


# ::stappler::bitmap::BitmapTemplate<typename>::operator=(BitmapTemplate<Interface>&&)

## BRIEF

Оператор перемещения.

## CONTENT

Оператор перемещения. Перемещает данные другого объекта без копирования, оставляя его в неизвестном состоянии.

Доступ: public

Параметры:
* BitmapTemplate<Interface>&& - исходный объект

Возвращает:
* BitmapTemplate<Interface>& - ссылку на себя


# ::stappler::bitmap::BitmapTemplate<typename>::width() const

## BRIEF

Возвращает ширину изображения в пикселях.

## CONTENT

Возвращает ширину изображения в пикселях.

Доступ: public

Возвращает:
* uint32_t - ширина изображения в пикселях

# ::stappler::bitmap::BitmapTemplate<typename>::height() const

## BRIEF

Возвращает высоту изображения в пикселях.

## CONTENT

Возвращает высоту изображения в пикселях.

Доступ: public

Возвращает:
* uint32_t - высота изображения в пикселях

# ::stappler::bitmap::BitmapTemplate<typename>::stride() const

## BRIEF

Возвращает длину ряда в байтах.

## CONTENT

Возвращает длину ряда в байтах. Для плотно упакованных объектов длина ряда вычисляется как width * getBytesPerPixel(format).

Доступ: public

Возвращает:
* uint32_t - длина ряда в байтах. Возможно значение 0 для плотно упакованных объектов.

# ::stappler::bitmap::BitmapTemplate<typename>::hasStrideOffset() const

## BRIEF

Отличается ли длина ряда от длины плотной упаковки

## CONTENT

Отличается ли длина ряда от длины плотной упаковки

Доступ: public

Возвращает:
* bool - отличается ли длина ряда от длины плотной упаковки


# ::stappler::bitmap::BitmapTemplate<typename>::alpha() const

## BRIEF

Возвращает формат альфа-канала

## CONTENT

Возвращает формат альфа-канала (прозрачности)

Доступ: public

Возвращает:
* stappler::bitmap::AlphaFormat - формат альфа-канала


# ::stappler::bitmap::BitmapTemplate<typename>::format() const

## BRIEF

Возвращает формат пикселей

## CONTENT

Возвращает формат пикселей

Доступ: public

Возвращает:
* stappler::bitmap::PixelFormat - формат пикселей

# ::stappler::bitmap::BitmapTemplate<typename>::data() const

## BRIEF

Возвращает отображение для данных пикселей

## CONTENT

Возвращает отображение для данных пикселей. Размер отображения в байтах равен stride * height.

Доступ: public

Возвращает:
* stappler::BytesView - отображение данных

# ::stappler::bitmap::BitmapTemplate<typename>::dataPtr()

## BRIEF

Возвращает указатель на внутренний буфер с пикселями

## CONTENT

Возвращает указатель на внутренний буфер с пикселями. Размер буфера равен stride * height.

Доступ: public

Возвращает:
* uint8_t* - указатель на данные


# ::stappler::bitmap::BitmapTemplate<typename>::dataPtr() const

## BRIEF

Возвращает указатель на внутренний буфер с пикселями

## CONTENT

Возвращает указатель на внутренний буфер с пикселями. Размер буфера равен stride * height.

Доступ: public

Возвращает:
* uint8_t const* - указатель на данные

# ::stappler::bitmap::BitmapTemplate<typename>::updateStride(stappler::bitmap::StrideFn const&)

## BRIEF

Изменяет длину ряда в битовой карте.

## CONTENT

Изменяет длину ряда в битовой карте на основе функции её вычисления. В процессе выполнения функция будет вызвана как минимум один раз для определения нового смещения. Старые отображения и указатели на пиксельный буфер сломаются.

Доступ: public

Параметры:
* stappler::bitmap::StrideFn const& - функция для вычисления длины ряда. Должна быть определена.

Возвращает:
* bool - успешность операции. В случае провала битовая карта не меняется.

# ::stappler::bitmap::BitmapTemplate<typename>::convert(stappler::bitmap::PixelFormat,stappler::bitmap::StrideFn const&)

## BRIEF

Конвертирует битовую карту в иной формат пикселей.

## CONTENT

Конвертирует битовую карту в иной формат пикселей. Пытается сохранить как можно больше данных по каналам. В частности, RGB -> I переведёт изображение в оттенки серого. I -> RGB распространит значение из канала интенсивности во все цветовые каналы. При конвертации RGB -> A изображение будет пустым. При конвертации A -> I и I -> A изображение будет сохранено, но изменится назначение единственного канала. Таким образом, если необходимо перевести RGB в A без потерь, необходмо две конвертации: RGB -> I и I -> A.

При добавлении альфа-канала, он будет заполнен (0xFF). При добавлении цветового канала, он будет пуст (0x00).

Доступ: public

Параметры:
* stappler::bitmap::PixelFormat - новый формат пикселей
* stappler::bitmap::StrideFn const& - функция вычисления длины ряда, может быть опущена

Возвращает:
* bool - успешность операции


# ::stappler::bitmap::BitmapTemplate<typename>::truncate(stappler::bitmap::PixelFormat,stappler::bitmap::StrideFn const&)

## BRIEF

Конвертрирует в другой формат пикселей через быстрое обрезание каналов.

## CONTENT

Конвертрирует в другой формат пикселей через быстрое обрезание (или добавление) каналов. Аналогично простой конвертации, но не пытается сохранять данные в каналах.

Доступ: public

Параметры:
* stappler::bitmap::PixelFormat - новый формат пикселей
* stappler::bitmap::StrideFn const& - функция вычисления длины ряда, может быть опущена

Возвращает:
* bool - успешность операции

# ::stappler::bitmap::BitmapTemplate<typename>::convertWithTarget(uint8_t*,stappler::bitmap::PixelFormat,stappler::bitmap::StrideFn const&) const

## BRIEF

Конвертирует исходную битовую карту в новый формат, записывая новые данные в предоставленный буфер.

## CONTENT

Конвертирует исходную битовую карту в новый формат, записывая новые данные в предоставленный буфер. Правила конвертации аналогичны convert. При конвертации A -> I и I -> A не делает ничего, завершается успешно.

Доступ: public

Параметры:
* uint8_t* - указатель на начало нового буфера в памяти
* stappler::bitmap::PixelFormat - новый формат пикселей
* stappler::bitmap::StrideFn const& - функция вычисления длины ряда, может быть опущена

Возвращает:
* bool - успех операции

# ::stappler::bitmap::BitmapTemplate<typename>::loadData(uint8_t const*,size_t,stappler::bitmap::StrideFn const&)

## BRIEF

Загружает данные из закодированного буфера

## CONTENT

Загружает данные из закодированного буфера. Для декодирования используются известные форматы.

Доступ: public

Параметры:
* uint8_t const* - указатель на буфер
* size_t - размер буфера
* stappler::bitmap::StrideFn const& - функция вычисления длины ряда, может быть опущена

Возвращает:
* bool - успешность операции

# ::stappler::bitmap::BitmapTemplate<typename>::loadData(stappler::BytesView,stappler::bitmap::StrideFn const&)

## BRIEF

Загружает данные из закодированного буфера

## CONTENT

Загружает данные из закодированного буфера. Для декодирования используются известные форматы.

Доступ: public

Параметры:
* stappler::BytesView - буфер в памяти
* stappler::bitmap::StrideFn const& - функция вычисления длины ряда, может быть опущена

Возвращает:
* bool - успешность операции

# ::stappler::bitmap::BitmapTemplate<typename>::loadBitmap(uint8_t const*,uint32_t,uint32_t,stappler::bitmap::PixelFormat,stappler::bitmap::AlphaFormat,uint32_t)

## BRIEF

Загружает битовую карту из декодированного буфера.

## CONTENT

Загружает битовую карту из декодированного буфера.

Доступ: public

Параметры:
* uint8_t const* - указатель на начало буфера. Буфер должен содержать max(width * getBytesPerPixel(format), stride) * height байт.
* uint32_t width - ширина изображения в пикселях
* uint32_t height - высота изобрадения в пикселях
* stappler::bitmap::PixelFormat format - формат пикселя
* stappler::bitmap::AlphaFormat alpha - формат альфа-канала
* uint32_t stride - смещение ряда в байтах (0 - плотная упаковка, смещение равно длине ряда). Смещение не может быть меньше width * getBytesPerPixel(format).


# ::stappler::bitmap::BitmapTemplate<typename>::loadBitmap(stappler::BytesView,uint32_t,uint32_t,stappler::bitmap::PixelFormat,stappler::bitmap::AlphaFormat,uint32_t)

## BRIEF

Загружает битовую карту из декодированного буфера.

## CONTENT

Загружает битовую карту из декодированного буфера.

Доступ: public

Параметры:
* stappler::BytesView - буфер данных. Буфер должен содержать max(width * getBytesPerPixel(format), stride) * height байт.
* uint32_t width - ширина изображения в пикселях
* uint32_t height - высота изобрадения в пикселях
* stappler::bitmap::PixelFormat format - формат пикселя
* stappler::bitmap::AlphaFormat alpha - формат альфа-канала
* uint32_t stride - смещение ряда в байтах (0 - плотная упаковка, смещение равно длине ряда). Смещение не может быть меньше width * getBytesPerPixel(format).


# ::stappler::bitmap::BitmapTemplate<typename>::loadBitmap(typename Interface::BytesType&&,uint32_t,uint32_t,stappler::bitmap::PixelFormat,stappler::bitmap::AlphaFormat,uint32_t)

## BRIEF

Перемещает битовую карту из декодированного буфера.

## CONTENT

Перемещает битовую карту из декодированного буфера.

Доступ: public

Параметры:
* typename Interface::BytesType&& - буфер, из которого будут перемещены данные. Буфер должен содержать max(width * getBytesPerPixel(format), stride) * height байт.
* uint32_t width - ширина изображения в пикселях
* uint32_t height - высота изобрадения в пикселях
* stappler::bitmap::PixelFormat format - формат пикселя
* stappler::bitmap::AlphaFormat alpha - формат альфа-канала
* uint32_t stride - смещение ряда в байтах (0 - плотная упаковка, смещение равно длине ряда). Смещение не может быть меньше width * getBytesPerPixel(format).


# ::stappler::bitmap::BitmapTemplate<typename>::alloc(uint32_t,uint32_t,stappler::bitmap::PixelFormat,stappler::bitmap::AlphaFormat,uint32_t)

## BRIEF

Выделяет из памяти новый буфер данных для хранения битовой карты определённого формата.

## CONTENT

Выделяет из памяти новый буфер данных для хранения битовой карты определённого формата.

Доступ: public

Параметры:
* uint32_t width - ширина изображения в пикселях
* uint32_t height - высота изобрадения в пикселях
* stappler::bitmap::PixelFormat format - формат пикселя
* stappler::bitmap::AlphaFormat alpha - формат альфа-канала
* uint32_t stride - смещение ряда в байтах (0 - плотная упаковка, смещение равно длине ряда). Смещение не может быть меньше width * getBytesPerPixel(format).


# ::stappler::bitmap::BitmapTemplate<typename>::operator bool() const

## BRIEF

Проверяет битовую карту на пустоту и работоспособность

## CONTENT

Проверяет битовую карту на пустоту и работоспособность

Доступ: public

Возвращает:
* bool - работоспособна и не пуста ли битовая карта

# ::stappler::bitmap::BitmapTemplate<typename>::clear()

## BRIEF

Очищает битовую карту, удаляет внутренний буфер.

## CONTENT

Очищает битовую карту, удаляет внутренний буфер.

Доступ: public


# ::stappler::bitmap::BitmapTemplate<typename>::empty() const

## BRIEF

Проверяет, пуста ли битовая карта

## CONTENT

Проверяет, пуста ли битовая карта

Доступ: public

Возвращает:
* bool - пуста ли битовая карта

# ::stappler::bitmap::BitmapTemplate<typename>::size() const

## BRIEF

Возвращает размер внутреннего буфера битовой карты в байтах

## CONTENT

Возвращает размер внутреннего буфера битовой карты в байтах

Доступ: public

Возвращает:
* size_t - размер внутреннего буфера битовой карты в байтах

# ::stappler::bitmap::BitmapTemplate<typename>::getOriginalFormat() const

## BRIEF

Возвращает известный формат, из которого исходно была загружена битовая карта

## CONTENT

Возвращает известный формат, из которого исходно была загружена битовая карта. Не определено для битовых карт, созданных не из закодирвоанных данных.

Доступ: public

Возвращает:
* stappler::bitmap::FileFormat - исходный формат

# ::stappler::bitmap::BitmapTemplate<typename>::getOriginalFormatName() const

## BRIEF

Возвращает имя формата данных, из которого исходно была загружена битовая карта

## CONTENT

Возвращает имя формата данных, из которого исходно была загружена битовая карта. Определено только если формат не являлся встроенным и битовая карта была загружена из него.

Доступ: public

Возвращает:
* stappler::StringView - название формата данных

# ::stappler::bitmap::BitmapTemplate<typename>::save(stappler::StringView,bool)

## BRIEF

Сохраняет изображение в файл.

## CONTENT

Сохраняет изображение в файл. Формат оперделяется по расширению имени файла. Если не удалось определить - испольуется PNG. Если файл уже существует - возвращает false, ничего не меняет.

Доступ: public

Параметры:
* stappler::StringView - путь к новому файлу
* bool - инвертировать ли ряды в карте по высоте.

Возвращает:
* bool - успешность сохранения.

# ::stappler::bitmap::BitmapTemplate<typename>::save(stappler::bitmap::FileFormat,stappler::StringView,bool)

## BRIEF

Сохраняет изображение в файл.

## CONTENT

Сохраняет изображение в файл. Если файл уже существует - возвращает false, ничего не меняет.

Доступ: public

Параметры:
* stappler::bitmap::FileFormat - формат файла
* stappler::StringView - путь к новому файлу
* bool - инвертировать ли ряды в карте по высоте.

Возвращает:
* bool - успешность сохранения.

# ::stappler::bitmap::BitmapTemplate<typename>::save(stappler::StringView,stappler::StringView,bool)

## BRIEF

Сохраняет изображение в файл.

## CONTENT

Сохраняет изображение в файл. Если файл уже существует - возвращает false, ничего не меняет. Использует имя формата для сохранения в не предустановленный формат.

Доступ: public

Параметры:
* stappler::StringView - имя формата файла
* stappler::StringView - путь к новому файлу
* bool - инвертировать ли ряды в карте по высоте

Возвращает:
* bool - успешность сохранения.

# ::stappler::bitmap::BitmapTemplate<typename>::write(stappler::bitmap::FileFormat,bool)

## BRIEF

Кодирует битовую карту в определённый формат

## CONTENT

Кодирует битовую карту в определённый формат

Доступ: public

Параметры:
* stappler::bitmap::FileFormat - формат кодировки
* bool - инвертировать ли ряды в карте по высоте

Возвращает:
* typename Interface::BytesType - буфер данных закодированного изображения. Пустой в случае неудачи.

# ::stappler::bitmap::BitmapTemplate<typename>::write(stappler::StringView,bool)

## BRIEF

Кодирует битовую карту в определённый формат

## CONTENT

Кодирует битовую карту в определённый формат. Использует именованные не предустановленные форматы.

Доступ: public

Параметры:
* stappler::StringView - имя формата
* bool - инвертировать ли ряды в карте по высоте

Возвращает:
* typename Interface::BytesType - буфер данных закодированного изображения. Пустой в случае неудачи.

# ::stappler::bitmap::BitmapTemplate<typename>::resample(uint32_t,uint32_t,uint32_t) const

## BRIEF

Увеличивает или уменьшает изображение

## CONTENT

Увеличивает или уменьшает изображение с использованием фильтра по умолчнию.

Доступ: public

Параметры:
* uint32_t width - новая ширина
* uint32_t height - новая высота
* uint32_t stride - новая длина ряда (или 0 для плотной упаковки)

Возвращает:
* BitmapTemplate<Interface> - новая битовая карта с изменённым изображением

# ::stappler::bitmap::BitmapTemplate<typename>::resample(stappler::bitmap::ResampleFilter,uint32_t,uint32_t,uint32_t) const

## BRIEF

Увеличивает или уменьшает изображение

## CONTENT

Увеличивает или уменьшает изображение с использованием определённого фильтра

Доступ: public

Параметры:
* stappler::bitmap::ResampleFilter - используемый фильтр
* uint32_t width - новая ширина
* uint32_t height - новая высота
* uint32_t stride - новая длина ряда (или 0 для плотной упаковки)

Возвращает:
* BitmapTemplate<Interface> - новая битовая карта с изменённым изображением

# ::stappler::bitmap::BitmapTemplate<typename>::setInfo(uint32_t,uint32_t,stappler::bitmap::PixelFormat,stappler::bitmap::AlphaFormat,uint32_t)

## BRIEF

Перезаписывает информацию о состоянии битовой карты

## CONTENT

Перезаписывает информацию о состоянии битовой карты

Доступ: protected

Параметры:
* uint32_t width
* uint32_t height
* stappler::bitmap::PixelFormat format
* stappler::bitmap::AlphaFormat alpha
* uint32_t stride


# ::stappler::bitmap::BitmapTemplate<typename>::_color

## BRIEF

Формат пикселей

## CONTENT

Формат пикселей

Доступ: protected

Тип: stappler::bitmap::PixelFormat


# ::stappler::bitmap::BitmapTemplate<typename>::_alpha

## BRIEF

Формат альфа-канала

## CONTENT

Формат альфа-канала

Доступ: protected

Тип: stappler::bitmap::AlphaFormat


# ::stappler::bitmap::BitmapTemplate<typename>::_width

## BRIEF

Ширина изображения в пикселях

## CONTENT

Ширина изображения в пикселях

Доступ: protected

Тип: uint32_t


# ::stappler::bitmap::BitmapTemplate<typename>::_height

## BRIEF

Высота изображения в пикселях

## CONTENT

Высота изображения в пикселях

Доступ: protected

Тип: uint32_t


# ::stappler::bitmap::BitmapTemplate<typename>::_stride

## BRIEF

Длина ряда буфера в байтах

## CONTENT

Длина ряда буфера в байтах

Доступ: protected

Тип: uint32_t


# ::stappler::bitmap::BitmapTemplate<typename>::_data

## BRIEF

Внутренний пиксельный буфер

## CONTENT

Внутренний пиксельный буфер

Доступ: protected

Тип: typename Interface::BytesType


# ::stappler::bitmap::BitmapTemplate<typename>::_originalFormat

## BRIEF

Исходный формат изображения

## CONTENT

Исходный формат изображения

Доступ: protected

Тип: stappler::bitmap::FileFormat


# ::stappler::bitmap::BitmapTemplate<typename>::_originalFormatName

## BRIEF

Имя исходного формата изображения

## CONTENT

Имя исходного формата изображения

Доступ: protected

Тип: stappler::StringView


# ::stappler::mem_std::Bitmap

## BRIEF

Псевдоним для соотвествующей специализации битовой карты для стандартного интерфейса памяти

## CONTENT

Псевдоним для соотвествующей специализации битовой карты для стандартного интерфейса памяти

# ::stappler::mem_pool::Bitmap

## BRIEF

Псевдоним для соотвествующей специализации битовой карты для интерфейса памяти из пула

## CONTENT

Псевдоним для соотвествующей специализации битовой карты для интерфейса памяти из пула
