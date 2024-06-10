Title: Изображения

# Изображения

Модуль `stappler_bitmap` определяет интерфейс для чтения и записи изображений.

Для определения размера доступны форматы: GIF, JPEG, PNG, TIFF, WebP, SVG

Для чтения: GIF, JPEG, PNG, WebP

Для записи: JPEG, PNG, WebP

Определено два интерфейса.

## Прямой интерфейс

Предназначен для прямого чтения в предопределённый буфер.

```cpp
#include "SPBitmap.h"

static void loadImageDirect(uint8_t *glBuffer, uint64_t expectedSize, BytesView encodedImageData, const bitmap::ImageInfo &imageInfo) {
	struct WriteData {
		uint8_t *buffer;
		uint32_t offset;
		uint64_t expectedSize;
	} data;

	data.buffer = glBuffer;
	data.offset = 0;
	data.expectedSize = expectedSize;

	bitmap::BitmapWriter w;
	w.target = &data;

	w.getStride = nullptr;
	w.push = [] (void *ptr, const uint8_t *data, uint32_t size) {
		auto writeData = ((WriteData *)ptr);
		memcpy(writeData->buffer + writeData->offset, data, size);
		writeData->offset += size;
	};
	w.resize = [] (void *ptr, uint32_t size) {
		auto writeData = ((WriteData *)ptr);
		if (size > writeData->expectedSize) {
			abort();
		}
	};
	w.getData = [] (void *ptr, uint32_t location) {
		auto writeData = ((WriteData *)ptr);
		return writeData->buffer + location;
	};
	w.assign = [] (void *ptr, const uint8_t *data, uint32_t size) {
		auto writeData = ((WriteData *)ptr);
		memcpy(writeData->buffer, data, size);
		writeData->offset = size;
	};
	w.clear = [] (void *ptr) { };

	imageInfo.format->load(encodedImageData.data(), encodedImageData.size(), w);
}


bitmap::ImageInfo info;
if (bitmap::getImageInfo(encodedImageData, info)) {
	loadImageDirect(glBuffer, expectedSize, encodedImageData, info);
}
```

## Упрощённый интерфейс

```cpp
#include "SPBitmap.h"

auto bmp = Bitmap(imageData);
bmp.convert(bitmap::PixelFormat::RGB888);
bmp.save(bitmap::FileFormat::Jpeg, jpeg1);
```

## Вспомогательные функции

```cpp
// получение размера изображения (не обязательно читает файл целиком)
bool getImageSize(StringView file, uint32_t &width, uint32_t &height);
bool getImageSize(const io::Producer &file, uint32_t &width, uint32_t &height);

// Получает данные изображения для чтения (необходим полный доступ к файлу)
bool getImageInfo(BytesView, ImageInfo &);

// Проверяет, что хранящиеся данные являются изображением
bool isImage(StringView file, bool readable = true);
bool isImage(const io::Producer &file, bool readable = true);
bool isImage(const uint8_t * data, size_t dataLen, bool readable = true);

// Определяет формат файла (встроенный или собственный
Pair<FileFormat, StringView> detectFormat(StringView file);
Pair<FileFormat, StringView> detectFormat(const io::Producer &file);
Pair<FileFormat, StringView> detectFormat(const uint8_t * data, size_t dataLen);

// Получает MIME-тип
StringView getMimeType(FileFormat);
StringView getMimeType(StringView);

// Проверяет, что буфер является изображением определённого типа
bool check(FileFormat, const uint8_t * data, size_t dataLen);
bool check(StringView, const uint8_t * data, size_t dataLen);

// Конвертирует формат пикселей построчно
template<PixelFormat Source, PixelFormat Target>
void convertLine(const uint8_t *in, uint8_t *out, uint32_t ins, uint32_t outs);

// Конвертирует формат пикселей построчно
template<PixelFormat Source, PixelFormat Target>
bool convertData(BytesView dataVec, BytesView out, uint32_t inStride, uint32_t outStride);
```

## Собственные формат

Можно определять собственные читаемые форматы с помощью типа `BitmapFormat`.

Необходимо определить функции:
* `check_fn` — функция проверки данных на соответствие формату
* `size_fn` — функция получения размера изображения
* `info_fn` — функция получения подробных метаданных изображения
* `load_fn` — функция декодирования изображения в память
* `write_fn` — функция кодирования изображения в память
* `save_fn` — функция кодирования изображения в файл

После чего новый формат добавляется в систему:

```cpp
static bitmap::BitmapFormat s_custom = bitmap::BitmapFormat("Custom", "image/x-custom",
	&custom::check,
	&custom::getImageSize,
	&custom::getInfo,
	&custom::load,
	&custom::write,
	&custom::save
);

bitmap::BitmapFormat::add(bitmap::BitmapFormat(s_custom));
```

