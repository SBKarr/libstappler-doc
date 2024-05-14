Title: XLFontDeferredRequest.h


# XENOLITH_FONT_XLFONTDEFERREDREQUEST_H_

## BRIEF

Заголовок запроса на отложенный рендеринг текстур символов

## CONTENT

Заголовок запроса на отложенный рендеринг текстур символов


# ::stappler::xenolith::font::DeferredRequest

## BRIEF

Тип запроса на отложенный рендеринг

## CONTENT

Тип запроса на отложенный рендеринг

Базовые классы:
* Ref


# ::stappler::xenolith::font::DeferredRequest::runFontRenderer(thread::TaskQueue&,Rc<stappler::xenolith::font::FontExtension> const&,Vector<stappler::xenolith::font::FontUpdateRequest> const&,Function<void (uint32_t, const stappler::font::CharTexture &)>&&,Function<void ()>&&)

## BRIEF

Запускает рендеринг текстур символов в отдельном потоке

## CONTENT

Запускает рендеринг текстур символов в отдельном потоке

Параметры:
* thread::TaskQueue& - очередь для запуска
* Rc<stappler::xenolith::font::FontExtension> const& - интерфейс приложения
* Vector<stappler::xenolith::font::FontUpdateRequest> const& - запрос на отрисовку символов
* Function<void (uint32_t, const stappler::font::CharTexture &)>&& - функция, получающая готовую текстуру символа
* Function<void ()>&& - функция готовности


# ::stappler::xenolith::font::DeferredRequest::~DeferredRequest()

## BRIEF

Деструктор

## CONTENT

Деструктор


# ::stappler::xenolith::font::DeferredRequest::DeferredRequest(Rc<stappler::xenolith::font::FontExtension> const&,Vector<stappler::xenolith::font::FontUpdateRequest> const&)

## BRIEF

Конструктор

## CONTENT

Конструктор

Параметры:
* Rc<stappler::xenolith::font::FontExtension> const& - шрифтовое расширение приложения
* Vector<stappler::xenolith::font::FontUpdateRequest> const& - запрос на символы


# ::stappler::xenolith::font::DeferredRequest::runThread()

## BRIEF

Запускает отрисовку в потоке

## CONTENT

Запускает отрисовку в потоке


# ::stappler::xenolith::font::DeferredRequest::current

## BRIEF

Текущий запрос в обработке

## CONTENT

Текущий запрос в обработке

Тип: std::atomic<uint32_t>


# ::stappler::xenolith::font::DeferredRequest::complete

## BRIEF

Числов выполненных запросов

## CONTENT

Числов выполненных запросов

Тип: std::atomic<uint32_t>


# ::stappler::xenolith::font::DeferredRequest::nrequests

## BRIEF

Число запросов

## CONTENT

Число запросов

Тип: uint32_t


# ::stappler::xenolith::font::DeferredRequest::faces

## BRIEF

Объекты шрифтов для извлечения символов

## CONTENT

Объекты шрифтов для извлечения символов

Тип: Vector<Rc<font::FontFaceObject>>


# ::stappler::xenolith::font::DeferredRequest::fontRequests

## BRIEF

Наборы символов

## CONTENT

Наборы символов

Тип: Vector<Pair<uint32_t, char16_t>>


# ::stappler::xenolith::font::DeferredRequest::ext

## BRIEF

Шрифтовое расширение приложения

## CONTENT

Шрифтовое расширение приложения

Тип: Rc<font::FontExtension>


# ::stappler::xenolith::font::DeferredRequest::onTexture

## BRIEF

Функция возврата текстуры

## CONTENT

Функция возврата текстуры

Тип: Function<void (uint32_t, const font::CharTexture &)>


# ::stappler::xenolith::font::DeferredRequest::onComplete

## BRIEF

Функция завершения

## CONTENT

Функция завершения

Тип: Function<void ()>
