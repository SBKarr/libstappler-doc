Title: XLFontDeferredRequest.h


# XENOLITH_FONT_XLFONTDEFERREDREQUEST_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::font::DeferredRequest

## BRIEF

## CONTENT

Базовые классы:
* Ref


# ::stappler::xenolith::font::DeferredRequest::runFontRenderer(thread::TaskQueue&,Rc<stappler::xenolith::font::FontLibrary> const&,Vector<stappler::xenolith::font::FontUpdateRequest> const&,Function<void (uint32_t, const stappler::xenolith::font::CharTexture &)>&&,Function<void ()>&&)

## BRIEF

## CONTENT

Параметры:
* thread::TaskQueue&
* Rc<stappler::xenolith::font::FontLibrary> const&
* Vector<stappler::xenolith::font::FontUpdateRequest> const&
* Function<void (uint32_t, const stappler::xenolith::font::CharTexture &)>&&
* Function<void ()>&&


# ::stappler::xenolith::font::DeferredRequest::~DeferredRequest()

## BRIEF

## CONTENT


# ::stappler::xenolith::font::DeferredRequest::DeferredRequest(Rc<stappler::xenolith::font::FontLibrary> const&,Vector<stappler::xenolith::font::FontUpdateRequest> const&)

## BRIEF

## CONTENT

Параметры:
* Rc<stappler::xenolith::font::FontLibrary> const&
* Vector<stappler::xenolith::font::FontUpdateRequest> const&


# ::stappler::xenolith::font::DeferredRequest::runThread()

## BRIEF

## CONTENT


# ::stappler::xenolith::font::DeferredRequest::current

## BRIEF

## CONTENT

Тип: std::atomic<uint32_t>


# ::stappler::xenolith::font::DeferredRequest::complete

## BRIEF

## CONTENT

Тип: std::atomic<uint32_t>


# ::stappler::xenolith::font::DeferredRequest::nrequests

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::xenolith::font::DeferredRequest::faces

## BRIEF

## CONTENT

Тип: Vector<Rc<font::FontFaceObject>>


# ::stappler::xenolith::font::DeferredRequest::fontRequests

## BRIEF

## CONTENT

Тип: Vector<Pair<uint32_t, char16_t>>


# ::stappler::xenolith::font::DeferredRequest::library

## BRIEF

## CONTENT

Тип: Rc<font::FontLibrary>


# ::stappler::xenolith::font::DeferredRequest::onTexture

## BRIEF

## CONTENT

Тип: Function<void (uint32_t, const font::CharTexture &)>


# ::stappler::xenolith::font::DeferredRequest::onComplete

## BRIEF

## CONTENT

Тип: Function<void ()>
