Title: XL2dSprite.h


# XENOLITH_RENDERER_BASIC2D_XL2DSPRITE_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::basic2d::Sprite

## BRIEF

## CONTENT

Базовые классы:
* DynamicStateNode


# ::stappler::xenolith::basic2d::Sprite::Autofit

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::basic2d::Sprite::SamplerIndexDefaultFilterNearest

## BRIEF

## CONTENT

Доступ: public

Тип: uint16_t const


# ::stappler::xenolith::basic2d::Sprite::SamplerIndexDefaultFilterLinear

## BRIEF

## CONTENT

Доступ: public

Тип: uint16_t const


# ::stappler::xenolith::basic2d::Sprite::Sprite()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::basic2d::Sprite::~Sprite()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::basic2d::Sprite::init()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::basic2d::Sprite::init(stappler::StringView)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView

Возвращает:
* bool

# ::stappler::xenolith::basic2d::Sprite::init(Rc<stappler::xenolith::Texture>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Rc<stappler::xenolith::Texture>&&

Возвращает:
* bool

# ::stappler::xenolith::basic2d::Sprite::setTexture(stappler::StringView)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView


# ::stappler::xenolith::basic2d::Sprite::setTexture(Rc<stappler::xenolith::Texture>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Rc<stappler::xenolith::Texture>&&


# ::stappler::xenolith::basic2d::Sprite::getTexture() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Rc<stappler::xenolith::Texture> const&

# ::stappler::xenolith::basic2d::Sprite::setTextureRect(stappler::xenolith::Rect const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Rect const&


# ::stappler::xenolith::basic2d::Sprite::getTextureRect() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::Rect const&

# ::stappler::xenolith::basic2d::Sprite::visitDraw(stappler::xenolith::FrameInfo&,stappler::xenolith::NodeFlags)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::FrameInfo&
* stappler::xenolith::NodeFlags

Возвращает:
* bool

# ::stappler::xenolith::basic2d::Sprite::draw(stappler::xenolith::FrameInfo&,stappler::xenolith::NodeFlags)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::FrameInfo&
* stappler::xenolith::NodeFlags


# ::stappler::xenolith::basic2d::Sprite::onEnter(xenolith::Scene*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* xenolith::Scene*


# ::stappler::xenolith::basic2d::Sprite::onExit()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::basic2d::Sprite::onContentSizeDirty()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::basic2d::Sprite::onTextureLoaded()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::basic2d::Sprite::setColorMode(core::ColorMode const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* core::ColorMode const&


# ::stappler::xenolith::basic2d::Sprite::getColorMode() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* core::ColorMode const&

# ::stappler::xenolith::basic2d::Sprite::setBlendInfo(core::BlendInfo const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* core::BlendInfo const&


# ::stappler::xenolith::basic2d::Sprite::getBlendInfo() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* core::BlendInfo const&

# ::stappler::xenolith::basic2d::Sprite::setLineWidth(float)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* float


# ::stappler::xenolith::basic2d::Sprite::getLineWidth() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* float

# ::stappler::xenolith::basic2d::Sprite::setRenderingLevel(stappler::xenolith::RenderingLevel)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::RenderingLevel


# ::stappler::xenolith::basic2d::Sprite::getRenderingLevel() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::RenderingLevel

# ::stappler::xenolith::basic2d::Sprite::setNormalized(bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* bool


# ::stappler::xenolith::basic2d::Sprite::isNormalized() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::basic2d::Sprite::setAutofit(stappler::xenolith::basic2d::Sprite::Autofit)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::basic2d::Sprite::Autofit


# ::stappler::xenolith::basic2d::Sprite::getAutofit() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Autofit

# ::stappler::xenolith::basic2d::Sprite::setAutofitPosition(stappler::xenolith::Vec2 const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::Vec2 const&


# ::stappler::xenolith::basic2d::Sprite::getAutofitPosition() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::Vec2 const&

# ::stappler::xenolith::basic2d::Sprite::setSamplerIndex(uint16_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint16_t


# ::stappler::xenolith::basic2d::Sprite::getSamplerIndex() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint16_t

# ::stappler::xenolith::basic2d::Sprite::setCommandFlags(stappler::xenolith::CommandFlags)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::CommandFlags


# ::stappler::xenolith::basic2d::Sprite::addCommandFlags(stappler::xenolith::CommandFlags)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::CommandFlags


# ::stappler::xenolith::basic2d::Sprite::removeCommandFlags(stappler::xenolith::CommandFlags)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::CommandFlags


# ::stappler::xenolith::basic2d::Sprite::getCommandFlags() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::CommandFlags

# ::stappler::xenolith::basic2d::Sprite::setTextureLoadedCallback(Function<void ()>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Function<void ()>&&


# ::stappler::xenolith::basic2d::Sprite::pushShadowCommands(stappler::xenolith::FrameInfo&,stappler::xenolith::NodeFlags,stappler::xenolith::Mat4 const&,SpanView<stappler::xenolith::basic2d::TransformVertexData>)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::FrameInfo&
* stappler::xenolith::NodeFlags
* stappler::xenolith::Mat4 const&
* SpanView<stappler::xenolith::basic2d::TransformVertexData>


# ::stappler::xenolith::basic2d::Sprite::pushCommands(stappler::xenolith::FrameInfo&,stappler::xenolith::NodeFlags)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::FrameInfo&
* stappler::xenolith::NodeFlags


# ::stappler::xenolith::basic2d::Sprite::getMaterialInfo() const

## BRIEF

## CONTENT

Доступ: protected

Возвращает:
* stappler::xenolith::MaterialInfo

# ::stappler::xenolith::basic2d::Sprite::getMaterialImages() const

## BRIEF

## CONTENT

Доступ: protected

Возвращает:
* Vector<core::MaterialImage>

# ::stappler::xenolith::basic2d::Sprite::isMaterialRevokable() const

## BRIEF

## CONTENT

Доступ: protected

Возвращает:
* bool

# ::stappler::xenolith::basic2d::Sprite::updateColor()

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::basic2d::Sprite::updateVertexesColor()

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::basic2d::Sprite::initVertexes()

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::basic2d::Sprite::updateVertexes()

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::basic2d::Sprite::updateBlendAndDepth()

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::basic2d::Sprite::getRealRenderingLevel() const

## BRIEF

## CONTENT

Доступ: protected

Возвращает:
* stappler::xenolith::RenderingLevel

# ::stappler::xenolith::basic2d::Sprite::getAutofitParams(stappler::xenolith::basic2d::Sprite::Autofit,stappler::xenolith::Vec2 const&,stappler::xenolith::Size2 const&,stappler::xenolith::Size2 const&,stappler::xenolith::Rect&,stappler::xenolith::Rect&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::basic2d::Sprite::Autofit
* stappler::xenolith::Vec2 const&
* stappler::xenolith::Size2 const&
* stappler::xenolith::Size2 const&
* stappler::xenolith::Rect&
* stappler::xenolith::Rect&

Возвращает:
* bool

# ::stappler::xenolith::basic2d::Sprite::checkVertexDirty() const

## BRIEF

## CONTENT

Доступ: protected

Возвращает:
* bool

# ::stappler::xenolith::basic2d::Sprite::_textureName

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::mem_std::String


# ::stappler::xenolith::basic2d::Sprite::_texture

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::xenolith::Texture>


# ::stappler::xenolith::basic2d::Sprite::_vertexes

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::basic2d::VertexArray


# ::stappler::xenolith::basic2d::Sprite::_samplerIdx

## BRIEF

## CONTENT

Доступ: protected

Тип: uint16_t


# ::stappler::xenolith::basic2d::Sprite::_materialDirty

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::basic2d::Sprite::_normalized

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::basic2d::Sprite::_vertexesDirty

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::basic2d::Sprite::_vertexColorDirty

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::basic2d::Sprite::_flippedX

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::basic2d::Sprite::_flippedY

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::basic2d::Sprite::_rotated

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::basic2d::Sprite::_isTextureLoaded

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::basic2d::Sprite::_textureRect

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::Rect


# ::stappler::xenolith::basic2d::Sprite::_autofit

## BRIEF

## CONTENT

Доступ: protected

Тип: Autofit


# ::stappler::xenolith::basic2d::Sprite::_autofitPos

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::Vec2


# ::stappler::xenolith::basic2d::Sprite::_textureOrigin

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::Vec2


# ::stappler::xenolith::basic2d::Sprite::_textureSize

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::Size2


# ::stappler::xenolith::basic2d::Sprite::_targetTextureSize

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::Extent3


# ::stappler::xenolith::basic2d::Sprite::_renderingLevel

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::RenderingLevel


# ::stappler::xenolith::basic2d::Sprite::_realRenderingLevel

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::RenderingLevel


# ::stappler::xenolith::basic2d::Sprite::_materialId

## BRIEF

## CONTENT

Доступ: protected

Тип: uint64_t


# ::stappler::xenolith::basic2d::Sprite::_commandFlags

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::CommandFlags


# ::stappler::xenolith::basic2d::Sprite::_tmpColor

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::Color4F


# ::stappler::xenolith::basic2d::Sprite::_colorMode

## BRIEF

## CONTENT

Доступ: protected

Тип: core::ColorMode


# ::stappler::xenolith::basic2d::Sprite::_blendInfo

## BRIEF

## CONTENT

Доступ: protected

Тип: core::BlendInfo


# ::stappler::xenolith::basic2d::Sprite::_materialInfo

## BRIEF

## CONTENT

Доступ: protected

Тип: core::PipelineMaterialInfo


# ::stappler::xenolith::basic2d::Sprite::_pendingDependencies

## BRIEF

## CONTENT

Доступ: protected

Тип: Vector<Rc<core::DependencyEvent>>


# ::stappler::xenolith::basic2d::Sprite::_textureLoadedCallback

## BRIEF

## CONTENT

Доступ: protected

Тип: Function<void ()>
