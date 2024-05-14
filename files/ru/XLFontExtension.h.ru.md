Title: XLFontExtension.h


# XENOLITH_FONT_XLFONTLIBRARY_H_

## BRIEF

Заголовок шрифтового расширения приложения

## CONTENT

Заголовок шрифтового расширения приложения


# ::stappler::xenolith::font::RenderFontInput

## BRIEF

Тип входящих данных для загрузки шрифта на устройство

## CONTENT

Тип входящих данных для загрузки шрифта на устройство

Базовые классы:
* core::AttachmentInputData


# ::stappler::xenolith::font::RenderFontInput::queue

## BRIEF

Используемая очередь для асинхронной отрисовки

## CONTENT

Используемая очередь для асинхронной отрисовки

Тип: Rc<thread::TaskQueue>


# ::stappler::xenolith::font::RenderFontInput::image

## BRIEF

Динамическое изображение для хранения текстур

## CONTENT

Динамическое изображение для хранения текстур

Тип: Rc<core::DynamicImage>


# ::stappler::xenolith::font::RenderFontInput::ext

## BRIEF

Шрифтовое расширение

## CONTENT

Шрифтовое расширение

Тип: Rc<stappler::xenolith::font::FontExtension>


# ::stappler::xenolith::font::RenderFontInput::requests

## BRIEF

Запросы на добавление шрифтов

## CONTENT

Запросы на добавление шрифтов

Тип: Vector<stappler::xenolith::font::FontUpdateRequest>


# ::stappler::xenolith::font::RenderFontInput::output

## BRIEF

Функция получения результата на стороне приложения

## CONTENT

Функция получения результата на стороне приложения. Опциональна.

Тип: Function<void (const core::ImageInfoData &, stappler::BytesView)>


# ::stappler::xenolith::font::FontExtension

## BRIEF

Шрифтовое расширение приложения

## CONTENT

Шрифтовое расширение приложения

Базовые классы:
* ApplicationExtension


# ::stappler::xenolith::font::FontExtension::DefaultFontName

## BRIEF

Имя для шрифта приложения по умолчанию

## CONTENT

Доступ: public

Имя для шрифта приложения по умолчанию


# ::stappler::xenolith::font::FontExtension::~FontExtension()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор

# ::stappler::xenolith::font::FontExtension::init(Rc<stappler::xenolith::Application>&&,Rc<core::Queue>&&)

## BRIEF

Создает расширение

## CONTENT

Доступ: public

Создает расширение

Параметры:
* Rc<stappler::xenolith::Application>&& - приложение
* Rc<core::Queue>&& - шрифтовая очередь рендеринга

Возвращает:
* bool

# ::stappler::xenolith::font::FontExtension::getMainLoop() const

## BRIEF

Возвращает интерфейс основного цикла приложения

## CONTENT

Доступ: public

Возвращает интерфейс основного цикла приложения

Возвращает:
* stappler::xenolith::Application*

# ::stappler::xenolith::font::FontExtension::getGlLoop() const

## BRIEF

Возвращает интерфейс графического цикла приложения

## CONTENT

Доступ: public

Возвращает интерфейс графического цикла приложения

Возвращает:
* core::Loop const*

# ::stappler::xenolith::font::FontExtension::getQueue() const

## BRIEF

Возвращает очередь рендеринга шрифтов

## CONTENT

Доступ: public

Возвращает очередь рендеринга шрифтов

Возвращает:
* Rc<core::Queue> const&

# ::stappler::xenolith::font::FontExtension::getLibrary() const

## BRIEF

Возвращает шрифтовую библиотеку

## CONTENT

Доступ: public

Возвращает шрифтовую библиотеку

Возвращает:
* stappler::font::FontLibrary*

# ::stappler::xenolith::font::FontExtension::initialize(stappler::xenolith::Application*)

## BRIEF

Инициализирует расширение

## CONTENT

Доступ: public

Инициализирует расширение

Параметры:
* stappler::xenolith::Application*


# ::stappler::xenolith::font::FontExtension::invalidate(stappler::xenolith::Application*)

## BRIEF

Деинициализирует расширение

## CONTENT

Доступ: public

Деинициализирует расширение

Параметры:
* stappler::xenolith::Application*


# ::stappler::xenolith::font::FontExtension::update(stappler::xenolith::Application*,stappler::xenolith::UpdateTime const&)

## BRIEF

Обновляет библиотеку шрифтов

## CONTENT

Доступ: public

Обновляет библиотеку шрифтов

Параметры:
* stappler::xenolith::Application*
* stappler::xenolith::UpdateTime const&


# ::stappler::xenolith::font::FontExtension::makeDefaultControllerBuilder(stappler::StringView)

## BRIEF

Создаёт сборщик для контроллера шрифтов по умолчанию

## CONTENT

Доступ: public

Создаёт сборщик для контроллера шрифтов по умолчанию. Выполняется при загрузке приложения.

Параметры:
* stappler::StringView

Возвращает:
* FontController::Builder

# ::stappler::xenolith::font::FontExtension::acquireController(FontController::Builder&&)

## BRIEF

Создаёт или обновляет контроллер с помощью сборщика

## CONTENT

Доступ: public

Создаёт или обновляет контроллер с помощью сборщика

Параметры:
* FontController::Builder&&

Возвращает:
* Rc<stappler::xenolith::font::FontController>

# ::stappler::xenolith::font::FontExtension::updateImage(Rc<core::DynamicImage> const&,Vector<stappler::xenolith::font::FontUpdateRequest>&&,Rc<core::DependencyEvent>&&)

## BRIEF

Запускает обновление динамического изображения с помощью очереди рендеринга

## CONTENT

Доступ: public

Запускает обновление динамического изображения с помощью очереди рендеринга

Параметры:
* Rc<core::DynamicImage> const&
* Vector<stappler::xenolith::font::FontUpdateRequest>&&
* Rc<core::DependencyEvent>&&


# ::stappler::xenolith::font::FontExtension::onActivated()

## BRIEF

Обрабатывает активацию расширения

## CONTENT

Доступ: protected

Обрабатывает активацию расширения

# ::stappler::xenolith::font::FontExtension::ImageQuery

## BRIEF

Тип запроса на отрисовку изображения

## CONTENT

Доступ: protected

Тип запроса на отрисовку изображения


# ::stappler::xenolith::font::FontExtension::ImageQuery::image

## BRIEF

Изображение

## CONTENT

Изображение

Тип: Rc<core::DynamicImage>


# ::stappler::xenolith::font::FontExtension::ImageQuery::chars

## BRIEF

Символы для изображения

## CONTENT

Символы для изображения

Тип: Vector<stappler::xenolith::font::FontUpdateRequest>


# ::stappler::xenolith::font::FontExtension::ImageQuery::dependency

## BRIEF

Выполняемая при рендеринге зависимость

## CONTENT

Выполняемая при рендеринге зависимость

Тип: Rc<core::DependencyEvent>


# ::stappler::xenolith::font::FontExtension::_active

## BRIEF

Флаг активации

## CONTENT

Доступ: protected

Флаг активации

Тип: bool


# ::stappler::xenolith::font::FontExtension::_library

## BRIEF

Шрифтовая библиотека

## CONTENT

Доступ: protected

Шрифтовая библиотека

Тип: Rc<stappler::font::FontLibrary>


# ::stappler::xenolith::font::FontExtension::_mainLoop

## BRIEF

Интерфейс основного цикла

## CONTENT

Доступ: protected

Интерфейс основного цикла

Тип: Rc<stappler::xenolith::Application>


# ::stappler::xenolith::font::FontExtension::_glLoop

## BRIEF

Интерфейс графического цикла

## CONTENT

Доступ: protected

Интерфейс графического цикла

Тип: Rc<core::Loop>


# ::stappler::xenolith::font::FontExtension::_queue

## BRIEF

Очередь рендеринга шрифтов

## CONTENT

Доступ: protected

Очередь рендеринга шрифтов

Тип: Rc<core::Queue>


# ::stappler::xenolith::font::FontExtension::_pendingImageQueries

## BRIEF

Ожидающие отправки запросы на рендеринг изображения

## CONTENT

Доступ: protected

Ожидающие отправки запросы на рендеринг изображения

Тип: Vector<stappler::xenolith::font::FontExtension::ImageQuery>
