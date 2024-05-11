Title: XLCoreDynamicImage.h


# XENOLITH_CORE_XLCOREDYNAMICIMAGE_H_

## BRIEF

Заголовок типа динамического изображения

## CONTENT

Заголовок типа динамического изображения

# ::stappler::xenolith::core::DynamicImageInstance

## BRIEF

Конкретное динамическое изображение

## CONTENT

Конкретное динамическое изображение. Содержит конкретную версию изображения

Базовые классы:
* Ref


# ::stappler::xenolith::core::DynamicImageInstance::~DynamicImageInstance()

## BRIEF

Деструктор

## CONTENT

Деструктор

# ::stappler::xenolith::core::DynamicImageInstance::data

## BRIEF

Параметры изображения

## CONTENT

Параметры изображения

Тип: stappler::xenolith::core::ImageData


# ::stappler::xenolith::core::DynamicImageInstance::userdata

## BRIEF

Пользовательские данные

## CONTENT

Пользовательские данные

Тип: Rc<stappler::mem_std::Ref>


# ::stappler::xenolith::core::DynamicImageInstance::image

## BRIEF

Исходное изображение

## CONTENT

Исходное изображение

Тип: Rc<stappler::xenolith::core::DynamicImage>


# ::stappler::xenolith::core::DynamicImageInstance::gen

## BRIEF

Поколение

## CONTENT

Поколение. Поколение монотонно версионирует изображение. Чем выше поколение - тем новее изображение.

Тип: uint32_t


# ::stappler::xenolith::core::DynamicImage

## BRIEF

Динамическое изображение в памяти устройства

## CONTENT

Динамическое изображение в памяти устройства. Динамическое изображение позволяет оперативно обновлять изображения в памяти устройства, укладках и материалах. Число таких изображений стоит сводить к минимуму, однако, обновление динамического изображения быстрее записи в память нового при редких обновлениях.

Базовые классы:
* Ref


# ::stappler::xenolith::core::DynamicImage::~DynamicImage()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор


# ::stappler::xenolith::core::DynamicImage::init(Callback<bool (stappler::xenolith::core::DynamicImage::Builder &)> const&)

## BRIEF

Создаёт изображение

## CONTENT

Доступ: public

Создаёт изображение

Параметры:
* Callback<bool (stappler::xenolith::core::DynamicImage::Builder &)> const& - функция, вызываемая для сборки параметров изображения

Возвращает:
* bool

# ::stappler::xenolith::core::DynamicImage::finalize()

## BRIEF

Завершает работу изображения

## CONTENT

Доступ: public

Завершает работу изображения

# ::stappler::xenolith::core::DynamicImage::getInstance()

## BRIEF

Возвращает последний активный вариант изображения

## CONTENT

Доступ: public

Возвращает последний активный вариант изображения. Не гарантирует, что сейчас загружен именно этот вариант.

Возвращает:
* Rc<stappler::xenolith::core::DynamicImageInstance>

# ::stappler::xenolith::core::DynamicImage::updateInstance(stappler::xenolith::core::Loop&,Rc<stappler::xenolith::core::ImageObject> const&,Rc<stappler::xenolith::core::DataAtlas>&&,Rc<stappler::mem_std::Ref>&&,Vector<Rc<stappler::xenolith::core::DependencyEvent>> const&)

## BRIEF

Обновляет изображение с новыми данными

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::core::Loop& - графический цикл
* Rc<stappler::xenolith::core::ImageObject> const& - новое изображение
* Rc<stappler::xenolith::core::DataAtlas>&& - новый атлас
* Rc<stappler::mem_std::Ref>&& - пользовательские даные
* Vector<Rc<stappler::xenolith::core::DependencyEvent>> const& - событие, которое будет сигнализировать о завершении обновления


# ::stappler::xenolith::core::DynamicImage::addTracker(stappler::xenolith::core::MaterialAttachment const*)

## BRIEF

Добавляет набор материалов, отслеживающий изображение

## CONTENT

Доступ: public

Добавляет набор материалов, отслеживающий изображение

Параметры:
* stappler::xenolith::core::MaterialAttachment const*


# ::stappler::xenolith::core::DynamicImage::removeTracker(stappler::xenolith::core::MaterialAttachment const*)

## BRIEF

Отключает набор материалов, отслеживающий изображение

## CONTENT

Доступ: public

Отключает набор материалов, отслеживающий изображение

Параметры:
* stappler::xenolith::core::MaterialAttachment const*


# ::stappler::xenolith::core::DynamicImage::getInfo() const

## BRIEF

Возвращает параметры изображения

## CONTENT

Доступ: public

Возвращает параметры изображения

Возвращает:
* stappler::xenolith::core::ImageInfo

# ::stappler::xenolith::core::DynamicImage::getExtent() const

## BRIEF

Возвращает размер изображения

## CONTENT

Доступ: public

Возвращает размер изображения

Возвращает:
* stappler::geom::Extent3

# ::stappler::xenolith::core::DynamicImage::setImage(Rc<stappler::xenolith::core::ImageObject> const&)

## BRIEF

Устанавливает базовое изображение

## CONTENT

Доступ: public

Устанавливает базовое изображение

Параметры:
* Rc<stappler::xenolith::core::ImageObject> const&


# ::stappler::xenolith::core::DynamicImage::acquireData(Callback<void (stappler::BytesView)> const&)

## BRIEF

Запрашивает данные для загрузки изображения на устройство

## CONTENT

Доступ: public

Запрашивает данные для загрузки изображения на устройство

Параметры:
* Callback<void (stappler::BytesView)> const&


# ::stappler::xenolith::core::DynamicImage::_mutex

## BRIEF

Мутекс

## CONTENT

Доступ: protected

Мутекс

Тип: stappler::mem_std::Mutex


# ::stappler::xenolith::core::DynamicImage::_keyData

## BRIEF

Название изображения

## CONTENT

Доступ: protected

Название изображения

Тип: stappler::mem_std::String


# ::stappler::xenolith::core::DynamicImage::_imageData

## BRIEF

Исходные данные изображения

## CONTENT

Доступ: protected

Исходные данные изображения

Тип: stappler::mem_std::Bytes


# ::stappler::xenolith::core::DynamicImage::_data

## BRIEF

Параметры изображения

## CONTENT

Доступ: protected

Параметры изображения

Тип: stappler::xenolith::core::ImageData


# ::stappler::xenolith::core::DynamicImage::_instance

## BRIEF

Текущее изображение

## CONTENT

Доступ: protected

Текущее изображение

Тип: Rc<stappler::xenolith::core::DynamicImageInstance>


# ::stappler::xenolith::core::DynamicImage::_materialTrackers

## BRIEF

Материалы

## CONTENT

Доступ: protected

Материалы

Тип: Set<const stappler::xenolith::core::MaterialAttachment *>


# ::stappler::xenolith::core::Builder

## BRIEF

Сборщик изображения

## CONTENT

Сборщик изображения


# ::stappler::xenolith::core::Builder::setImageByRef(stappler::StringView,stappler::xenolith::core::ImageInfo&&,stappler::BytesView,Rc<stappler::xenolith::core::DataAtlas>&&)

## BRIEF

Устанавливает данные исходного изображения

## CONTENT

Доступ: public

Устанавливает данные исходного изображения. Данные не храняться в объекте.

Параметры:
* stappler::StringView
* stappler::xenolith::core::ImageInfo&&
* stappler::BytesView
* Rc<stappler::xenolith::core::DataAtlas>&&

Возвращает:
* stappler::xenolith::core::ImageData const*

# ::stappler::xenolith::core::Builder::setImage(stappler::StringView,stappler::xenolith::core::ImageInfo&&,stappler::FilePath,Rc<stappler::xenolith::core::DataAtlas>&&)

## BRIEF

Устанавливает данные исходного изображения

## CONTENT

Доступ: public

Устанавливает данные исходного изображения из файла

Параметры:
* stappler::StringView
* stappler::xenolith::core::ImageInfo&&
* stappler::FilePath
* Rc<stappler::xenolith::core::DataAtlas>&&

Возвращает:
* stappler::xenolith::core::ImageData const*

# ::stappler::xenolith::core::Builder::setImage(stappler::StringView,stappler::xenolith::core::ImageInfo&&,stappler::BytesView,Rc<stappler::xenolith::core::DataAtlas>&&)

## BRIEF

Устанавливает данные исходного изображения

## CONTENT

Доступ: public

Устанавливает данные исходного изображения. Данные хранятся.

Параметры:
* stappler::StringView
* stappler::xenolith::core::ImageInfo&&
* stappler::BytesView
* Rc<stappler::xenolith::core::DataAtlas>&&

Возвращает:
* stappler::xenolith::core::ImageData const*

# ::stappler::xenolith::core::Builder::setImage(stappler::StringView,stappler::xenolith::core::ImageInfo&&,Function<void (uint8_t *, uint64_t, const ImageData::DataCallback &)>&&,Rc<stappler::xenolith::core::DataAtlas>&&)

## BRIEF

Устанавливает данные исходного изображения

## CONTENT

Доступ: public

Устанавливает данные исходного изображения. Данные загружаются из функции.

Параметры:
* stappler::StringView
* stappler::xenolith::core::ImageInfo&&
* Function<void (uint8_t *, uint64_t, const ImageData::DataCallback &)>&&
* Rc<stappler::xenolith::core::DataAtlas>&&

Возвращает:
* stappler::xenolith::core::ImageData const*

# ::stappler::xenolith::core::Builder::Builder(stappler::xenolith::core::DynamicImage*)

## BRIEF

Создаёт сборщик

## CONTENT

Доступ: protected

Создаёт сборщик

Параметры:
* stappler::xenolith::core::DynamicImage*


# ::stappler::xenolith::core::Builder::_data

## BRIEF

Исходное динамическое изображение

## CONTENT

Доступ: protected

Исходное динамическое изображение

Тип: stappler::xenolith::core::DynamicImage*
