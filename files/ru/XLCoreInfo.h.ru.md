Title: XLCoreInfo.h


# XENOLITH_CORE_XLCOREINFO_H_

## BRIEF

Заголовок типов параметров различных объектов

## CONTENT

Заголовок типов параметров различных объектов


# ::stappler::xenolith::core::MipLevels

## BRIEF

Число уровней размерности изображений

## CONTENT

Число уровней размерности изображений


# ::stappler::xenolith::core::ArrayLayers

## BRIEF

Число слоёв в изображении

## CONTENT

Число слоёв в изображении


# ::stappler::xenolith::core::Extent1

## BRIEF

Тип одномерного размера

## CONTENT

Тип одномерного размера


# ::stappler::xenolith::core::BaseArrayLayer

## BRIEF

Тип базового слоя изображения

## CONTENT

Тип базового слоя изображения

# ::stappler::xenolith::core::SamplerInfo

## BRIEF

Параметры семплера

## CONTENT

Параметры семплера


# ::stappler::xenolith::core::SamplerInfo::magFilter

## BRIEF

Фильтр на увеличение

## CONTENT

Фильтр на увеличение

Тип: stappler::xenolith::core::Filter


# ::stappler::xenolith::core::SamplerInfo::minFilter

## BRIEF

Фильтр на уменьшение

## CONTENT

Фильтр на уменьшение

Тип: stappler::xenolith::core::Filter


# ::stappler::xenolith::core::SamplerInfo::mipmapMode

## BRIEF

Способ выборки из других размерностей

## CONTENT

Способ выборки из других размерностей

Тип: stappler::xenolith::core::SamplerMipmapMode


# ::stappler::xenolith::core::SamplerInfo::addressModeU

## BRIEF

Схема адресации по горизонтали

## CONTENT

Схема адресации по горизонтали

Тип: stappler::xenolith::core::SamplerAddressMode


# ::stappler::xenolith::core::SamplerInfo::addressModeV

## BRIEF

Схема адресации по вертикали

## CONTENT

Схема адресации по вертикали

Тип: stappler::xenolith::core::SamplerAddressMode


# ::stappler::xenolith::core::SamplerInfo::addressModeW

## BRIEF

Схема адресации по глубине

## CONTENT

Схема адресации по глубине

Тип: stappler::xenolith::core::SamplerAddressMode


# ::stappler::xenolith::core::SamplerInfo::mipLodBias

## BRIEF

Допустимый параметр ошибки

## CONTENT

Допустимый параметр ошибки

Тип: float


# ::stappler::xenolith::core::SamplerInfo::anisotropyEnable

## BRIEF

Флаг анизотропной фильтрации

## CONTENT

Флаг анизотропной фильтрации

Тип: bool


# ::stappler::xenolith::core::SamplerInfo::maxAnisotropy

## BRIEF

Максимальное значение анизотропного фильтра

## CONTENT

Максимальное значение анизотропного фильтра

Тип: float


# ::stappler::xenolith::core::SamplerInfo::compareEnable

## BRIEF

Флаг использования сравнительной операции

## CONTENT

Флаг использования сравнительной операции

Тип: bool


# ::stappler::xenolith::core::SamplerInfo::compareOp

## BRIEF

Тип сравнительной операции

## CONTENT

Тип сравнительной операции

Тип: stappler::xenolith::core::CompareOp


# ::stappler::xenolith::core::SamplerInfo::minLod

## BRIEF

Минимальный уровень детализации

## CONTENT

Минимальный уровень детализации

Тип: float


# ::stappler::xenolith::core::SamplerInfo::maxLod

## BRIEF

Максимальный уровень детализации

## CONTENT

Максимальный уровень детализации

Тип: float


# ::stappler::xenolith::core::SamplerInfo::operator<=>(stappler::xenolith::core::SamplerInfo const&) const

## BRIEF

Сравнительный оператор

## CONTENT

Сравнительный оператор

Параметры:
* stappler::xenolith::core::SamplerInfo const&

Возвращает:
* auto

# ::stappler::xenolith::core::ForceBufferFlags

## BRIEF

Тип принудительных флагов буфера

## CONTENT

Тип принудительных флагов буфера. Заставляет игнорировать ранее установленные флаги.


# ::stappler::xenolith::core::ForceBufferUsage

## BRIEF

Тип принудительных флагов использования буфера

## CONTENT

Тип принудительных флагов использования буфера. Заставляет игнорировать ранее установленные флаги.


# ::stappler::xenolith::core::BufferPersistent

## BRIEF

Тип постоянства буфера

## CONTENT

Тип постоянства буфера


# ::stappler::xenolith::core::BufferInfo

## BRIEF

Параметры буфера

## CONTENT

Параметры буфера

Базовые классы:
* NamedMem


# ::stappler::xenolith::core::BufferInfo::flags

## BRIEF

Флаги буфера

## CONTENT

Флаги буфера

Тип: stappler::xenolith::core::BufferFlags


# ::stappler::xenolith::core::BufferInfo::usage

## BRIEF

Флаги использования

## CONTENT

Флаги использования

Тип: stappler::xenolith::core::BufferUsage


# ::stappler::xenolith::core::BufferInfo::type

## BRIEF

Тип прохода для буфера

## CONTENT

Тип прохода для буфера

Тип: stappler::xenolith::core::PassType


# ::stappler::xenolith::core::BufferInfo::size

## BRIEF

Размер буфера

## CONTENT

Размер буфера

Тип: uint64_t


# ::stappler::xenolith::core::BufferInfo::persistent

## BRIEF

Флаг постоянства

## CONTENT

Флаг постоянства

Тип: bool


# ::stappler::xenolith::core::BufferInfo::BufferInfo()

## BRIEF

Конструктор

## CONTENT

Конструктор


# ::stappler::xenolith::core::BufferInfo::BufferInfo<typename>(Args &&...)

## BRIEF

Конструктор из типизированных параметров

## CONTENT

Конструктор из типизированных параметров

Параметры шаблона:
* typename Args

Параметры:
* Args &&...


# ::stappler::xenolith::core::BufferInfo::setup(stappler::xenolith::core::BufferInfo const&)

## BRIEF

Назначает параметр

## CONTENT

Назначает параметр

Параметры:
* stappler::xenolith::core::BufferInfo const&


# ::stappler::xenolith::core::BufferInfo::setup(stappler::xenolith::core::BufferFlags)

## BRIEF

Назначает параметр

## CONTENT

Назначает параметр

Параметры:
* stappler::xenolith::core::BufferFlags


# ::stappler::xenolith::core::BufferInfo::setup(stappler::xenolith::core::ForceBufferFlags)

## BRIEF

Назначает параметр

## CONTENT

Назначает параметр

Параметры:
* stappler::xenolith::core::ForceBufferFlags


# ::stappler::xenolith::core::BufferInfo::setup(stappler::xenolith::core::BufferUsage)

## BRIEF

Назначает параметр

## CONTENT

Назначает параметр

Параметры:
* stappler::xenolith::core::BufferUsage


# ::stappler::xenolith::core::BufferInfo::setup(stappler::xenolith::core::ForceBufferUsage)

## BRIEF

Назначает параметр

## CONTENT

Назначает параметр

Параметры:
* stappler::xenolith::core::ForceBufferUsage


# ::stappler::xenolith::core::BufferInfo::setup(uint64_t)

## BRIEF

Назначает размер

## CONTENT

Назначает размер

Параметры:
* uint64_t


# ::stappler::xenolith::core::BufferInfo::setup(stappler::xenolith::core::BufferPersistent)

## BRIEF

Назначает параметр

## CONTENT

Назначает параметр

Параметры:
* stappler::xenolith::core::BufferPersistent


# ::stappler::xenolith::core::BufferInfo::setup(stappler::xenolith::core::PassType)

## BRIEF

Назначает параметр

## CONTENT

Назначает параметр

Параметры:
* stappler::xenolith::core::PassType


# ::stappler::xenolith::core::BufferInfo::define<typename>(T&&)

## BRIEF

Вспомогательная функция параметров

## CONTENT

Вспомогательная функция параметров

Параметры шаблона:
* typename T

Параметры:
* T&&


# ::stappler::xenolith::core::BufferInfo::define<typename,typename>(T&&,Args &&...)

## BRIEF

Вспомогательная функция параметров

## CONTENT

Вспомогательная функция параметров

Параметры шаблона:
* typename T
* typename Args

Параметры:
* T&&
* Args &&...


# ::stappler::xenolith::core::BufferInfo::description() const

## BRIEF

Возвращает текстовое описание параметров

## CONTENT

Возвращает текстовое описание параметров

Возвращает:
* stappler::mem_std::String

# ::stappler::xenolith::core::BufferData

## BRIEF

Тип данных буфера

## CONTENT

Тип данных буфера

Базовые классы:
* BufferInfo - параметры буфера


# ::stappler::xenolith::core::BufferData::DataCallback

## BRIEF

Функция для получения данных

## CONTENT

Функция для получения данных


# ::stappler::xenolith::core::BufferData::data

## BRIEF

Предустановленные данные

## CONTENT

Предустановленные данные

Тип: stappler::BytesView


# ::stappler::xenolith::core::BufferData::memCallback

## BRIEF

Функция возврата данных (для пулов памяти)

## CONTENT

Функция возврата данных (для пулов памяти)

Тип: memory::function<void (uint8_t *, uint64_t, const DataCallback &)>


# ::stappler::xenolith::core::BufferData::stdCallback

## BRIEF

Функция возврата данных (для стандартной библиотеки)

## CONTENT

Функция возврата данных (для стандартной библиотеки)

Тип: std::function<void (uint8_t *, uint64_t, const DataCallback &)>


# ::stappler::xenolith::core::BufferData::buffer

## BRIEF

Объект буфера

## CONTENT

Объект буфера

Тип: Rc<stappler::xenolith::core::BufferObject>


# ::stappler::xenolith::core::BufferData::atlas

## BRIEF

Связанный атлас данных

## CONTENT

Связанный атлас данных

Тип: Rc<stappler::xenolith::core::DataAtlas>


# ::stappler::xenolith::core::BufferData::resource

## BRIEF

Исходный ресурс

## CONTENT

Исходный ресурс

Тип: stappler::xenolith::core::Resource const*


# ::stappler::xenolith::core::BufferData::targetAccess

## BRIEF

Флаги целевого доступа к буферу

## CONTENT

Флаги целевого доступа к буферу

Тип: core::AccessType


# ::stappler::xenolith::core::BufferData::writeData(uint8_t*,size_t) const

## BRIEF

Записывает данные буфера в предоставленную память

## CONTENT

Записывает данные буфера в предоставленную память

Параметры:
* uint8_t*
* size_t

Возвращает:
* size_t

# ::stappler::xenolith::core::ForceImageFlags

## BRIEF

Принудительные флаги изображения

## CONTENT

Принудительные флаги изображения. Заставляет игнорировать ранее установленные флаги


# ::stappler::xenolith::core::ForceImageUsage

## BRIEF

Принудительные флаги использования изображения

## CONTENT

Принудительные флаги использования изображения. Заставляет игнорировать ранее установленные флаги


# ::stappler::xenolith::core::ImageInfoData

## BRIEF

Данные параметров изображения

## CONTENT

Данные параметров изображения

# ::stappler::xenolith::core::ImageInfoData::format

## BRIEF

Формат изображения

## CONTENT

Формат изображения

Тип: stappler::xenolith::core::ImageFormat


# ::stappler::xenolith::core::ImageInfoData::flags

## BRIEF

Флаги изображения

## CONTENT

Флаги изображения

Тип: stappler::xenolith::core::ImageFlags


# ::stappler::xenolith::core::ImageInfoData::imageType

## BRIEF

Тип изображения

## CONTENT

Тип изображения

Тип: stappler::xenolith::core::ImageType


# ::stappler::xenolith::core::ImageInfoData::extent

## BRIEF

Размерность изображения

## CONTENT

Размерность изображения

Тип: stappler::geom::Extent3


# ::stappler::xenolith::core::ImageInfoData::mipLevels

## BRIEF

Уровни размерности

## CONTENT

Уровни размерности

Тип: stappler::xenolith::core::MipLevels


# ::stappler::xenolith::core::ImageInfoData::arrayLayers

## BRIEF

Число слоёв

## CONTENT

Число слоёв

Тип: stappler::xenolith::core::ArrayLayers


# ::stappler::xenolith::core::ImageInfoData::samples

## BRIEF

Число значений в одном пикселе

## CONTENT

Число значений в одном пикселе

Тип: stappler::xenolith::core::SampleCount


# ::stappler::xenolith::core::ImageInfoData::tiling

## BRIEF

Тип хранения в памяти

## CONTENT

Тип хранения в памяти

Тип: stappler::xenolith::core::ImageTiling


# ::stappler::xenolith::core::ImageInfoData::usage

## BRIEF

Флаги использования

## CONTENT

Флаги использования

Тип: stappler::xenolith::core::ImageUsage


# ::stappler::xenolith::core::ImageInfoData::type

## BRIEF

Тип прохода для изображения

## CONTENT

Тип прохода для изображения

Тип: stappler::xenolith::core::PassType


# ::stappler::xenolith::core::ImageInfoData::hints

## BRIEF

Дополнительные флаги

## CONTENT

Дополнительные флаги

Тип: stappler::xenolith::core::ImageHints


# ::stappler::xenolith::core::ImageInfoData::getViewInfo(stappler::xenolith::core::ImageViewInfo const&) const

## BRIEF

Получает параметры для отображения изображения

## CONTENT

Получает параметры для отображения изображения

Параметры:
* stappler::xenolith::core::ImageViewInfo const& - исходные параметры

Возвращает:
* stappler::xenolith::core::ImageViewInfo - подходящие изображению параметры

# ::stappler::xenolith::core::ImageInfoData::operator<=>(stappler::xenolith::core::ImageInfoData const&) const

## BRIEF

Оператор сравнения

## CONTENT

Оператор сравнения

Параметры:
* stappler::xenolith::core::ImageInfoData const&

Возвращает:
* auto

# ::stappler::xenolith::core::ImageInfo

## BRIEF

Параметры изображения

## CONTENT

Параметры изображения

Базовые классы:
* NamedMem
* ImageInfoData


# ::stappler::xenolith::core::ImageInfo::ImageInfo()

## BRIEF

Конструктор

## CONTENT

Конструктор


# ::stappler::xenolith::core::ImageInfo::ImageInfo<typename>(Args &&...)

## BRIEF

Конструктор из типизированных значений

## CONTENT

Конструктор из типизированных значений

Параметры шаблона:
* typename Args

Параметры:
* Args &&...


# ::stappler::xenolith::core::ImageInfo::setup(stappler::xenolith::core::Extent1)

## BRIEF

Устанавливает параметр

## CONTENT

Устанавливает параметр

Параметры:
* stappler::xenolith::core::Extent1


# ::stappler::xenolith::core::ImageInfo::setup(stappler::geom::Extent2)

## BRIEF

Устанавливает параметр

## CONTENT

Устанавливает параметр

Параметры:
* stappler::geom::Extent2


# ::stappler::xenolith::core::ImageInfo::setup(stappler::geom::Extent3)

## BRIEF

Устанавливает параметр

## CONTENT

Устанавливает параметр

Параметры:
* stappler::geom::Extent3


# ::stappler::xenolith::core::ImageInfo::setup(stappler::xenolith::core::ImageFlags)

## BRIEF

Устанавливает параметр

## CONTENT

Устанавливает параметр

Параметры:
* stappler::xenolith::core::ImageFlags


# ::stappler::xenolith::core::ImageInfo::setup(stappler::xenolith::core::ForceImageFlags)

## BRIEF

Устанавливает параметр

## CONTENT

Устанавливает параметр

Параметры:
* stappler::xenolith::core::ForceImageFlags


# ::stappler::xenolith::core::ImageInfo::setup(stappler::xenolith::core::ImageType)

## BRIEF

Устанавливает параметр

## CONTENT

Устанавливает параметр

Параметры:
* stappler::xenolith::core::ImageType


# ::stappler::xenolith::core::ImageInfo::setup(stappler::xenolith::core::MipLevels)

## BRIEF

Устанавливает параметр

## CONTENT

Устанавливает параметр

Параметры:
* stappler::xenolith::core::MipLevels


# ::stappler::xenolith::core::ImageInfo::setup(stappler::xenolith::core::ArrayLayers)

## BRIEF

Устанавливает параметр

## CONTENT

Устанавливает параметр

Параметры:
* stappler::xenolith::core::ArrayLayers


# ::stappler::xenolith::core::ImageInfo::setup(stappler::xenolith::core::SampleCount)

## BRIEF

Устанавливает параметр

## CONTENT

Устанавливает параметр

Параметры:
* stappler::xenolith::core::SampleCount


# ::stappler::xenolith::core::ImageInfo::setup(stappler::xenolith::core::ImageTiling)

## BRIEF

Устанавливает параметр

## CONTENT

Устанавливает параметр

Параметры:
* stappler::xenolith::core::ImageTiling


# ::stappler::xenolith::core::ImageInfo::setup(stappler::xenolith::core::ImageUsage)

## BRIEF

Устанавливает параметр

## CONTENT

Устанавливает параметр

Параметры:
* stappler::xenolith::core::ImageUsage


# ::stappler::xenolith::core::ImageInfo::setup(stappler::xenolith::core::ForceImageUsage)

## BRIEF

Устанавливает параметр

## CONTENT

Устанавливает параметр

Параметры:
* stappler::xenolith::core::ForceImageUsage


# ::stappler::xenolith::core::ImageInfo::setup(stappler::xenolith::core::ImageFormat)

## BRIEF

Устанавливает параметр

## CONTENT

Устанавливает параметр

Параметры:
* stappler::xenolith::core::ImageFormat


# ::stappler::xenolith::core::ImageInfo::setup(stappler::xenolith::core::PassType)

## BRIEF

Устанавливает параметр

## CONTENT

Устанавливает параметр

Параметры:
* stappler::xenolith::core::PassType


# ::stappler::xenolith::core::ImageInfo::setup(stappler::xenolith::core::ImageHints)

## BRIEF

Устанавливает параметр

## CONTENT

Устанавливает параметр

Параметры:
* stappler::xenolith::core::ImageHints


# ::stappler::xenolith::core::ImageInfo::setup(stappler::StringView)

## BRIEF

Устанавливает параметр

## CONTENT

Устанавливает параметр

Параметры:
* stappler::StringView


# ::stappler::xenolith::core::ImageInfo::define<typename>(T&&)

## BRIEF

Вспомогательная функция чтения параметров

## CONTENT

Вспомогательная функция чтения параметров

Параметры шаблона:
* typename T

Параметры:
* T&&


# ::stappler::xenolith::core::ImageInfo::define<typename,typename>(T&&,Args &&...)

## BRIEF

Вспомогательная функция чтения параметров

## CONTENT

Вспомогательная функция чтения параметров

Параметры шаблона:
* typename T
* typename Args

Параметры:
* T&&
* Args &&...


# ::stappler::xenolith::core::ImageInfo::isCompatible(stappler::xenolith::core::ImageInfo const&) const

## BRIEF

Проверяет, совместимы ли параметры с заданными

## CONTENT

Проверяет, совместимы ли параметры с заданными

Параметры:
* stappler::xenolith::core::ImageInfo const&

Возвращает:
* bool

# ::stappler::xenolith::core::ImageInfo::description() const

## BRIEF

Возвращает текстовое описание параметров

## CONTENT

Возвращает текстовое описание параметров

Возвращает:
* stappler::mem_std::String

# ::stappler::xenolith::core::ImageData

## BRIEF

Данные изображения

## CONTENT

Данные изображения

Базовые классы:
* ImageInfo


# ::stappler::xenolith::core::ImageData::DataCallback

## BRIEF

Функция получения данных

## CONTENT

Функция получения данных


# ::stappler::xenolith::core::ImageData::data

## BRIEF

Предустановленные данные

## CONTENT

Предустановленные данные

Тип: stappler::BytesView


# ::stappler::xenolith::core::ImageData::memCallback

## BRIEF

Функция предоставления данных

## CONTENT

Функция предоставления данных

Тип: memory::function<void (uint8_t *, uint64_t, const DataCallback &)>


# ::stappler::xenolith::core::ImageData::stdCallback

## BRIEF

Функция предоставления данных

## CONTENT

Функция предоставления данных

Тип: std::function<void (uint8_t *, uint64_t, const DataCallback &)>


# ::stappler::xenolith::core::ImageData::image

## BRIEF

Готовое изображение

## CONTENT

Готовое изображение

Тип: Rc<stappler::xenolith::core::ImageObject>


# ::stappler::xenolith::core::ImageData::atlas

## BRIEF

Связанный атлас значений

## CONTENT

Связанный атлас значений

Тип: Rc<stappler::xenolith::core::DataAtlas>


# ::stappler::xenolith::core::ImageData::resource

## BRIEF

Исходный ресурс

## CONTENT

Исходный ресурс

Тип: stappler::xenolith::core::Resource const*


# ::stappler::xenolith::core::ImageData::targetAccess

## BRIEF

Вычесленные целевые флаги доступа

## CONTENT

Вычесленные целевые флаги доступа

Тип: core::AccessType


# ::stappler::xenolith::core::ImageData::targetLayout

## BRIEF

Целевая укладка изображения в памяти устройства

## CONTENT

Целевая укладка изображения в памяти устройства

Тип: core::AttachmentLayout


# ::stappler::xenolith::core::ImageData::writeData(uint8_t*,size_t) const

## BRIEF

Записывает данные изображения в буфер в памяти

## CONTENT

Записывает данные изображения в буфер в памяти

Параметры:
* uint8_t*
* size_t

Возвращает:
* size_t

# ::stappler::xenolith::core::ComponentMappingR

## BRIEF

Тип цвета для канала R

## CONTENT

Тип цвета для канала R


# ::stappler::xenolith::core::ComponentMappingG

## BRIEF

Тип цвета для канала G

## CONTENT

Тип цвета для канала G


# ::stappler::xenolith::core::ComponentMappingB

## BRIEF

Тип цвета для канала B

## CONTENT

Тип цвета для канала B


# ::stappler::xenolith::core::ComponentMappingA

## BRIEF

Тип цвета для канала A

## CONTENT

Тип цвета для канала A


# ::stappler::xenolith::core::ImageViewInfo

## BRIEF

Параметры отображения изображения

## CONTENT

Параметры отображения изображения


# ::stappler::xenolith::core::ImageViewInfo::format

## BRIEF

Формат изображения

## CONTENT

Формат изображения

Тип: stappler::xenolith::core::ImageFormat


# ::stappler::xenolith::core::ImageViewInfo::type

## BRIEF

Тип отображения

## CONTENT

Тип отображения

Тип: stappler::xenolith::core::ImageViewType


# ::stappler::xenolith::core::ImageViewInfo::r

## BRIEF

Источник цвета для R

## CONTENT

Источник цвета для R

Тип: stappler::xenolith::core::ComponentMapping


# ::stappler::xenolith::core::ImageViewInfo::g

## BRIEF

Источник цвета для G

## CONTENT

Источник цвета для G

Тип: stappler::xenolith::core::ComponentMapping


# ::stappler::xenolith::core::ImageViewInfo::b

## BRIEF

Источник цвета для B

## CONTENT

Источник цвета для B

Тип: stappler::xenolith::core::ComponentMapping


# ::stappler::xenolith::core::ImageViewInfo::a

## BRIEF

Источник цвета для A

## CONTENT

Источник цвета для A

Тип: stappler::xenolith::core::ComponentMapping


# ::stappler::xenolith::core::ImageViewInfo::baseArrayLayer

## BRIEF

Начальный слой для чтения

## CONTENT

Начальный слой для чтения

Тип: stappler::xenolith::core::BaseArrayLayer


# ::stappler::xenolith::core::ImageViewInfo::layerCount

## BRIEF

Число слоёв для чтения

## CONTENT

Число слоёв для чтения

Тип: stappler::xenolith::core::ArrayLayers


# ::stappler::xenolith::core::ImageViewInfo::ImageViewInfo()

## BRIEF

Конструктор

## CONTENT

Конструктор


# ::stappler::xenolith::core::ImageViewInfo::ImageViewInfo(stappler::xenolith::core::ImageViewInfo const&)

## BRIEF

Конструктор копирования

## CONTENT

Конструктор копирования

Параметры:
* stappler::xenolith::core::ImageViewInfo const&


# ::stappler::xenolith::core::ImageViewInfo::ImageViewInfo(stappler::xenolith::core::ImageViewInfo&&)

## BRIEF

Конструктор перемещения

## CONTENT

Конструктор перемещения

Параметры:
* stappler::xenolith::core::ImageViewInfo&&


# ::stappler::xenolith::core::ImageViewInfo::operator=(stappler::xenolith::core::ImageViewInfo const&)

## BRIEF

Оператор копирования

## CONTENT

Оператор копирования

Параметры:
* stappler::xenolith::core::ImageViewInfo const&

Возвращает:
* stappler::xenolith::core::ImageViewInfo&

# ::stappler::xenolith::core::ImageViewInfo::operator=(stappler::xenolith::core::ImageViewInfo&&)

## BRIEF

Оператор перемещения

## CONTENT

Оператор перемещения

Параметры:
* stappler::xenolith::core::ImageViewInfo&&

Возвращает:
* stappler::xenolith::core::ImageViewInfo&

# ::stappler::xenolith::core::ImageViewInfo::ImageViewInfo<typename>(Args &&...)

## BRIEF

Конструктор из типизированных параметров

## CONTENT

Конструктор из типизированных параметров

Параметры шаблона:
* typename Args

Параметры:
* Args &&...


# ::stappler::xenolith::core::ImageViewInfo::setup(stappler::xenolith::core::ImageViewInfo const&)

## BRIEF

Устанавливает параметр

## CONTENT

Устанавливает параметр

Параметры:
* stappler::xenolith::core::ImageViewInfo const&


# ::stappler::xenolith::core::ImageViewInfo::setup(stappler::xenolith::core::ImageInfoData const&)

## BRIEF

Устанавливает параметр

## CONTENT

Устанавливает параметр

Параметры:
* stappler::xenolith::core::ImageInfoData const&


# ::stappler::xenolith::core::ImageViewInfo::setup(stappler::xenolith::core::ImageViewType)

## BRIEF

Устанавливает параметр

## CONTENT

Устанавливает параметр

Параметры:
* stappler::xenolith::core::ImageViewType


# ::stappler::xenolith::core::ImageViewInfo::setup(stappler::xenolith::core::ImageFormat)

## BRIEF

Устанавливает параметр

## CONTENT

Устанавливает параметр

Параметры:
* stappler::xenolith::core::ImageFormat


# ::stappler::xenolith::core::ImageViewInfo::setup(stappler::xenolith::core::ArrayLayers)

## BRIEF

Устанавливает параметр

## CONTENT

Устанавливает параметр

Параметры:
* stappler::xenolith::core::ArrayLayers


# ::stappler::xenolith::core::ImageViewInfo::setup(stappler::xenolith::core::BaseArrayLayer)

## BRIEF

Устанавливает параметр

## CONTENT

Устанавливает параметр

Параметры:
* stappler::xenolith::core::BaseArrayLayer


# ::stappler::xenolith::core::ImageViewInfo::setup(stappler::xenolith::core::ComponentMappingR)

## BRIEF

Устанавливает параметр

## CONTENT

Устанавливает параметр

Параметры:
* stappler::xenolith::core::ComponentMappingR


# ::stappler::xenolith::core::ImageViewInfo::setup(stappler::xenolith::core::ComponentMappingG)

## BRIEF

Устанавливает параметр

## CONTENT

Устанавливает параметр

Параметры:
* stappler::xenolith::core::ComponentMappingG


# ::stappler::xenolith::core::ImageViewInfo::setup(stappler::xenolith::core::ComponentMappingB)

## BRIEF

Устанавливает параметр

## CONTENT

Устанавливает параметр

Параметры:
* stappler::xenolith::core::ComponentMappingB


# ::stappler::xenolith::core::ImageViewInfo::setup(stappler::xenolith::core::ComponentMappingA)

## BRIEF

Устанавливает параметр

## CONTENT

Устанавливает параметр

Параметры:
* stappler::xenolith::core::ComponentMappingA


# ::stappler::xenolith::core::ImageViewInfo::setup(stappler::xenolith::core::ColorMode,bool)

## BRIEF

Устанавливает параметр

## CONTENT

Устанавливает параметр

Параметры:
* stappler::xenolith::core::ColorMode
* bool


# ::stappler::xenolith::core::ImageViewInfo::setup(stappler::xenolith::core::ImageType,stappler::xenolith::core::ArrayLayers)

## BRIEF

Устанавливает тип отображения с учётом числоа слоёв и типа изображения

## CONTENT

Устанавливает тип отображения с учётом числоа слоёв и типа изображения

Параметры:
* stappler::xenolith::core::ImageType
* stappler::xenolith::core::ArrayLayers


# ::stappler::xenolith::core::ImageViewInfo::getColorMode() const

## BRIEF

Возвращает цветовой режим

## CONTENT

Возвращает цветовой режим

Возвращает:
* stappler::xenolith::core::ColorMode

# ::stappler::xenolith::core::ImageViewInfo::define<typename>(T&&)

## BRIEF

Вспомогательная функция чтения параметров

## CONTENT

Вспомогательная функция чтения параметров

Параметры шаблона:
* typename T

Параметры:
* T&&


# ::stappler::xenolith::core::ImageViewInfo::define<typename,typename>(T&&,Args &&...)

## BRIEF

Вспомогательная функция чтения параметров

## CONTENT

Вспомогательная функция чтения параметров

Параметры шаблона:
* typename T
* typename Args

Параметры:
* T&&
* Args &&...


# ::stappler::xenolith::core::ImageViewInfo::isCompatible(stappler::xenolith::core::ImageInfo const&) const

## BRIEF

Проверяет, совместимы ли параметры отображения с изображением

## CONTENT

Проверяет, совместимы ли параметры отображения с изображением

Параметры:
* stappler::xenolith::core::ImageInfo const&

Возвращает:
* bool

# ::stappler::xenolith::core::ImageViewInfo::description() const

## BRIEF

Возвращает текстовое описание параметров

## CONTENT

Возвращает текстовое описание параметров

Возвращает:
* stappler::mem_std::String

# ::stappler::xenolith::core::ImageViewInfo::operator<=>(stappler::xenolith::core::ImageViewInfo const&) const

## BRIEF

Оператор сравнения

## CONTENT

Оператор сравнения

Параметры:
* stappler::xenolith::core::ImageViewInfo const&

Возвращает:
* auto

# ::stappler::xenolith::core::FrameContraints

## BRIEF

Ограничительные значения кадра

## CONTENT

Ограничительные значения кадра


# ::stappler::xenolith::core::FrameContraints::extent

## BRIEF

Размер выходного изображения

## CONTENT

Размер выходного изображения

Тип: stappler::geom::Extent3


# ::stappler::xenolith::core::FrameContraints::contentPadding

## BRIEF

Системные отступы в конечном изображении

## CONTENT

Системные отступы в конечном изображении

Тип: stappler::geom::Padding


# ::stappler::xenolith::core::FrameContraints::transform

## BRIEF

Способ трансформации конечного изображения

## CONTENT

Способ трансформации конечного изображения

Тип: stappler::xenolith::core::SurfaceTransformFlags


# ::stappler::xenolith::core::FrameContraints::density

## BRIEF

Целевая плотность пикселей

## CONTENT

Целевая плотность пикселей

Тип: float


# ::stappler::xenolith::core::FrameContraints::getScreenSize() const

## BRIEF

Возвращает экранный размер в базовых точках дизайна

## CONTENT

Возвращает экранный размер в базовых точках дизайна

Возвращает:
* stappler::geom::Size2

# ::stappler::xenolith::core::FrameContraints::getRotatedPadding() const

## BRIEF

Возвращает повёрнутые на трансформацию отступы

## CONTENT

Возвращает повёрнутые на трансформацию отступы

Возвращает:
* stappler::geom::Padding

# ::stappler::xenolith::core::FrameContraints::operator==(stappler::xenolith::core::FrameContraints const&) const

## BRIEF

Сравнивает значения

## CONTENT

Сравнивает значения

Параметры:
* stappler::xenolith::core::FrameContraints const&

Возвращает:
* bool

# ::stappler::xenolith::core::FrameContraints::operator!=(stappler::xenolith::core::FrameContraints const&) const

## BRIEF

Сравнивает значения

## CONTENT

Сравнивает значения

Параметры:
* stappler::xenolith::core::FrameContraints const&

Возвращает:
* bool

# ::stappler::xenolith::core::SwapchainConfig

## BRIEF

Конфигурация выходной цепочки изображений

## CONTENT

Конфигурация выходной цепочки изображений


# ::stappler::xenolith::core::SwapchainConfig::presentMode

## BRIEF

Способ отправки кадра на презентацию

## CONTENT

Способ отправки кадра на презентацию

Тип: stappler::xenolith::core::PresentMode


# ::stappler::xenolith::core::SwapchainConfig::presentModeFast

## BRIEF

Способ отправки кадра на презентацию в быстром режиме

## CONTENT

Способ отправки кадра на презентацию в быстром режиме

Тип: stappler::xenolith::core::PresentMode


# ::stappler::xenolith::core::SwapchainConfig::imageFormat

## BRIEF

Формат презентуемого изображения

## CONTENT

Формат презентуемого изображения

Тип: stappler::xenolith::core::ImageFormat


# ::stappler::xenolith::core::SwapchainConfig::colorSpace

## BRIEF

Цветовое пространство презентуемого изображения

## CONTENT

Цветовое пространство презентуемого изображения

Тип: stappler::xenolith::core::ColorSpace


# ::stappler::xenolith::core::SwapchainConfig::alpha

## BRIEF

Способ совмещения альфаканала с системой

## CONTENT

Способ совмещения альфаканала с системой

Тип: stappler::xenolith::core::CompositeAlphaFlags


# ::stappler::xenolith::core::SwapchainConfig::transform

## BRIEF

Трансформация конечного изображения

## CONTENT

Трансформация конечного изображения

Тип: stappler::xenolith::core::SurfaceTransformFlags


# ::stappler::xenolith::core::SwapchainConfig::imageCount

## BRIEF

Число изображений в цепочке

## CONTENT

Число изображений в цепочке

Тип: uint32_t


# ::stappler::xenolith::core::SwapchainConfig::extent

## BRIEF

Размер изображений

## CONTENT

Размер изображений

Тип: stappler::geom::Extent2


# ::stappler::xenolith::core::SwapchainConfig::clipped

## BRIEF

Флаг обрезки под область обзора

## CONTENT

Флаг обрезки под область обзора

Тип: bool


# ::stappler::xenolith::core::SwapchainConfig::transfer

## BRIEF

Флаг доступности прямой записи в цепочку

## CONTENT

Флаг доступности прямой записи в цепочку

Тип: bool


# ::stappler::xenolith::core::SwapchainConfig::description() const

## BRIEF

Возвращает текстовое описание

## CONTENT

Возвращает текстовое описание

Возвращает:
* stappler::mem_std::String

# ::stappler::xenolith::core::SwapchainConfig::operator==(stappler::xenolith::core::SwapchainConfig const&) const

## BRIEF

Сравнивает значения

## CONTENT

Сравнивает значения

Параметры:
* stappler::xenolith::core::SwapchainConfig const&

Возвращает:
* bool

# ::stappler::xenolith::core::SwapchainConfig::operator!=(stappler::xenolith::core::SwapchainConfig const&) const

## BRIEF

Сравнивает значения

## CONTENT

Сравнивает значения

Параметры:
* stappler::xenolith::core::SwapchainConfig const&

Возвращает:
* bool

# ::stappler::xenolith::core::SurfaceInfo

## BRIEF

Параметры поверхности для рисования изображений на экране

## CONTENT

Параметры поверхности для рисования изображений на экране


# ::stappler::xenolith::core::SurfaceInfo::minImageCount

## BRIEF

Минимальное число изображений

## CONTENT

Минимальное число изображений

Тип: uint32_t


# ::stappler::xenolith::core::SurfaceInfo::maxImageCount

## BRIEF

Максимальное число изображений

## CONTENT

Максимальное число изображений

Тип: uint32_t


# ::stappler::xenolith::core::SurfaceInfo::currentExtent

## BRIEF

Размер поверхности

## CONTENT

Размер поверхности

Тип: stappler::geom::Extent2


# ::stappler::xenolith::core::SurfaceInfo::minImageExtent

## BRIEF

Минимально допустимый размер поверхности

## CONTENT

Минимально допустимый размер поверхности

Тип: stappler::geom::Extent2


# ::stappler::xenolith::core::SurfaceInfo::maxImageExtent

## BRIEF

Максимально допустимый размер поверхности

## CONTENT

Максимально допустимый размер поверхности

Тип: stappler::geom::Extent2


# ::stappler::xenolith::core::SurfaceInfo::maxImageArrayLayers

## BRIEF

Максимальное число слоёв в изображениях

## CONTENT

Максимальное число слоёв в изображениях

Тип: uint32_t


# ::stappler::xenolith::core::SurfaceInfo::supportedCompositeAlpha

## BRIEF

Флаги поддерживаемых режимов смешивания

## CONTENT

Флаги поддерживаемых режимов смешивания

Тип: stappler::xenolith::core::CompositeAlphaFlags


# ::stappler::xenolith::core::SurfaceInfo::supportedTransforms

## BRIEF

Флаги поддерживаемых трансформаций

## CONTENT

Флаги поддерживаемых трансформаций

Тип: stappler::xenolith::core::SurfaceTransformFlags


# ::stappler::xenolith::core::SurfaceInfo::currentTransform

## BRIEF

Текущая трансформация

## CONTENT

Текущая трансформация

Тип: stappler::xenolith::core::SurfaceTransformFlags


# ::stappler::xenolith::core::SurfaceInfo::supportedUsageFlags

## BRIEF

Поддерживаемые флаги использования изображений

## CONTENT

Поддерживаемые флаги использования изображений

Тип: stappler::xenolith::core::ImageUsage


# ::stappler::xenolith::core::SurfaceInfo::formats

## BRIEF

Форматы для вывода на поверхность

## CONTENT

Форматы для вывода на поверхность

Тип: Vector<Pair<stappler::xenolith::core::ImageFormat, stappler::xenolith::core::ColorSpace>>


# ::stappler::xenolith::core::SurfaceInfo::presentModes

## BRIEF

Режимы презентации

## CONTENT

Режимы презентации

Тип: Vector<stappler::xenolith::core::PresentMode>


# ::stappler::xenolith::core::SurfaceInfo::surfaceDensity

## BRIEF

Плотность пикселей поверхности

## CONTENT

Плотность пикселей поверхности

Тип: float


# ::stappler::xenolith::core::SurfaceInfo::isSupported(stappler::xenolith::core::SwapchainConfig const&) const

## BRIEF

Проверяет, возможен ли вывод изображений из цепочки на поверхность

## CONTENT

Проверяет, возможен ли вывод изображений из цепочки на поверхность

Параметры:
* stappler::xenolith::core::SwapchainConfig const&

Возвращает:
* bool

# ::stappler::xenolith::core::SurfaceInfo::description() const

## BRIEF

Возвращает текстовое описание

## CONTENT

Возвращает текстовое описание

Возвращает:
* stappler::mem_std::String

# ::stappler::xenolith::core::getBufferFlagsDescription(stappler::xenolith::core::BufferFlags)

## BRIEF

Возвращает текстовое описание флагов

## CONTENT

Возвращает текстовое описание флагов

Параметры:
* stappler::xenolith::core::BufferFlags

Возвращает:
* stappler::mem_std::String

# ::stappler::xenolith::core::getBufferUsageDescription(stappler::xenolith::core::BufferUsage)

## BRIEF

Возвращает текстовое описание флагов

## CONTENT

Возвращает текстовое описание флагов

Параметры:
* stappler::xenolith::core::BufferUsage

Возвращает:
* stappler::mem_std::String

# ::stappler::xenolith::core::getImageFlagsDescription(stappler::xenolith::core::ImageFlags)

## BRIEF

Возвращает текстовое описание флагов

## CONTENT

Возвращает текстовое описание флагов

Параметры:
* stappler::xenolith::core::ImageFlags

Возвращает:
* stappler::mem_std::String

# ::stappler::xenolith::core::getSampleCountDescription(stappler::xenolith::core::SampleCount)

## BRIEF

Возвращает текстовое описание флагов

## CONTENT

Возвращает текстовое описание флагов

Параметры:
* stappler::xenolith::core::SampleCount

Возвращает:
* stappler::mem_std::String

# ::stappler::xenolith::core::getImageTypeName(stappler::xenolith::core::ImageType)

## BRIEF

Возвращает текстовое описание значения

## CONTENT

Возвращает текстовое описание значения

Параметры:
* stappler::xenolith::core::ImageType

Возвращает:
* stappler::StringView

# ::stappler::xenolith::core::getImageViewTypeName(stappler::xenolith::core::ImageViewType)

## BRIEF

Возвращает текстовое описание значения

## CONTENT

Возвращает текстовое описание значения

Параметры:
* stappler::xenolith::core::ImageViewType

Возвращает:
* stappler::StringView

# ::stappler::xenolith::core::getImageFormatName(stappler::xenolith::core::ImageFormat)

## BRIEF

Возвращает текстовое описание значения

## CONTENT

Возвращает текстовое описание значения

Параметры:
* stappler::xenolith::core::ImageFormat

Возвращает:
* stappler::StringView

# ::stappler::xenolith::core::getImageTilingName(stappler::xenolith::core::ImageTiling)

## BRIEF

Возвращает текстовое описание значения

## CONTENT

Возвращает текстовое описание значения

Параметры:
* stappler::xenolith::core::ImageTiling

Возвращает:
* stappler::StringView

# ::stappler::xenolith::core::getComponentMappingName(stappler::xenolith::core::ComponentMapping)

## BRIEF

Возвращает текстовое описание значения

## CONTENT

Возвращает текстовое описание значения

Параметры:
* stappler::xenolith::core::ComponentMapping

Возвращает:
* stappler::StringView

# ::stappler::xenolith::core::getPresentModeName(stappler::xenolith::core::PresentMode)

## BRIEF

Возвращает текстовое описание значения

## CONTENT

Возвращает текстовое описание значения

Параметры:
* stappler::xenolith::core::PresentMode

Возвращает:
* stappler::StringView

# ::stappler::xenolith::core::getColorSpaceName(stappler::xenolith::core::ColorSpace)

## BRIEF

Возвращает текстовое описание значения

## CONTENT

Возвращает текстовое описание значения

Параметры:
* stappler::xenolith::core::ColorSpace

Возвращает:
* stappler::StringView

# ::stappler::xenolith::core::getCompositeAlphaFlagsDescription(stappler::xenolith::core::CompositeAlphaFlags)

## BRIEF

Возвращает текстовое описание значения

## CONTENT

Возвращает текстовое описание значения

Параметры:
* stappler::xenolith::core::CompositeAlphaFlags

Возвращает:
* stappler::mem_std::String

# ::stappler::xenolith::core::getSurfaceTransformFlagsDescription(stappler::xenolith::core::SurfaceTransformFlags)

## BRIEF

Возвращает текстовое описание значения

## CONTENT

Возвращает текстовое описание значения

Параметры:
* stappler::xenolith::core::SurfaceTransformFlags

Возвращает:
* stappler::mem_std::String

# ::stappler::xenolith::core::getImageUsageDescription(stappler::xenolith::core::ImageUsage)

## BRIEF

Возвращает текстовое описание значения

## CONTENT

Возвращает текстовое описание значения

Параметры:
* stappler::xenolith::core::ImageUsage

Возвращает:
* stappler::mem_std::String

# ::stappler::xenolith::core::getFormatBlockSize(stappler::xenolith::core::ImageFormat)

## BRIEF

Возвращает текстовое описание значения

## CONTENT

Возвращает текстовое описание значения

Параметры:
* stappler::xenolith::core::ImageFormat

Возвращает:
* size_t

# ::stappler::xenolith::core::getImagePixelFormat(stappler::xenolith::core::ImageFormat)

## BRIEF

Возвращает текстовое описание значения

## CONTENT

Возвращает текстовое описание значения

Параметры:
* stappler::xenolith::core::ImageFormat

Возвращает:
* stappler::xenolith::core::PixelFormat

# ::stappler::xenolith::core::isStencilFormat(stappler::xenolith::core::ImageFormat)

## BRIEF

Проверяет, можно ли использовать формат изображения для трафарета

## CONTENT

Проверяет, можно ли использовать формат изображения для трафарета

Параметры:
* stappler::xenolith::core::ImageFormat

Возвращает:
* bool

# ::stappler::xenolith::core::isDepthFormat(stappler::xenolith::core::ImageFormat)

## BRIEF


Проверяет, можно ли использовать формат изображения для глубины

## CONTENT

Проверяет, можно ли использовать формат изображения для глубины

Параметры:
* stappler::xenolith::core::ImageFormat

Возвращает:
* bool

# ::stappler::xenolith::core::hasReadAccess(stappler::xenolith::core::AccessType)

## BRIEF

Проверяет, доступно ли какое-либо чтение с указанными флагами

## CONTENT

Проверяет, доступно ли какое-либо чтение с указанными флагами

Параметры:
* stappler::xenolith::core::AccessType

Возвращает:
* bool

# ::stappler::xenolith::core::hasWriteAccess(stappler::xenolith::core::AccessType)

## BRIEF

Проверяет, доступна ли какая-либо запись с указанными флагами

## CONTENT

Проверяет, доступна ли какая-либо запись с указанными флагами

Параметры:
* stappler::xenolith::core::AccessType

Возвращает:
* bool

# ::stappler::xenolith::core::operator<<(std::ostream&,stappler::xenolith::core::ImageInfoData const&)

## BRIEF

Оператор вывода в поток

## CONTENT

Оператор вывода в поток

Параметры:
* std::ostream&
* stappler::xenolith::core::ImageInfoData const&

Возвращает:
* std::ostream&