Title: XLFontFace.h


# XENOLITH_FONT_XLFONTFACE_H_

## BRIEF

## CONTENT


# ::FT_Library

## BRIEF

## CONTENT


# ::FT_Face

## BRIEF

## CONTENT


# ::stappler::xenolith::font::FontCharString

## BRIEF

## CONTENT


# ::stappler::xenolith::font::FontCharString::addChar(char16_t)

## BRIEF

## CONTENT

Параметры:
* char16_t


# ::stappler::xenolith::font::FontCharString::addString(stappler::mem_std::String const&)

## BRIEF

## CONTENT

Параметры:
* stappler::mem_std::String const&


# ::stappler::xenolith::font::FontCharString::addString(stappler::mem_std::WideString const&)

## BRIEF

## CONTENT

Параметры:
* stappler::mem_std::WideString const&


# ::stappler::xenolith::font::FontCharString::addString(char16_t const*,size_t)

## BRIEF

## CONTENT

Параметры:
* char16_t const*
* size_t


# ::stappler::xenolith::font::FontCharString::addString(stappler::xenolith::font::FontCharString const&)

## BRIEF

## CONTENT

Параметры:
* stappler::xenolith::font::FontCharString const&


# ::stappler::xenolith::font::FontCharString::empty() const

## BRIEF

## CONTENT

Возвращает:
* bool

# ::stappler::xenolith::font::FontCharString::chars

## BRIEF

## CONTENT

Тип: Vector<char16_t>


# ::stappler::xenolith::font::FontAtlasValue

## BRIEF

## CONTENT


# ::stappler::xenolith::font::FontAtlasValue::pos

## BRIEF

## CONTENT

Тип: stappler::xenolith::Vec2


# ::stappler::xenolith::font::FontAtlasValue::tex

## BRIEF

## CONTENT

Тип: stappler::xenolith::Vec2


# ::stappler::xenolith::font::FontCharStorage<typename>

## BRIEF

## CONTENT

Параметры шаблона:
* typename Value


# ::stappler::xenolith::font::FontCharStorage<typename>::CellType

## BRIEF

## CONTENT


# ::stappler::xenolith::font::FontCharStorage<typename>::FontCharStorage()

## BRIEF

## CONTENT


# ::stappler::xenolith::font::FontCharStorage<typename>::~FontCharStorage()

## BRIEF

## CONTENT


# ::stappler::xenolith::font::FontCharStorage<typename>::emplace(char16_t,Value&&)

## BRIEF

## CONTENT

Параметры:
* char16_t
* Value&&


# ::stappler::xenolith::font::FontCharStorage<typename>::get(char16_t) const

## BRIEF

## CONTENT

Параметры:
* char16_t

Возвращает:
* Value const*

# ::stappler::xenolith::font::FontCharStorage<typename>::foreach<typename>(Callback const&)

## BRIEF

## CONTENT

Параметры шаблона:
* typename Callback

Параметры:
* Callback const&


# ::stappler::xenolith::font::FontCharStorage<typename>::cells

## BRIEF

## CONTENT

Тип: std::array<CellType *, 256>


# ::stappler::xenolith::font::FontFaceData

## BRIEF

## CONTENT

Базовые классы:
* Ref


# ::stappler::xenolith::font::FontFaceData::~FontFaceData()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::font::FontFaceData::init(stappler::StringView,stappler::BytesView,bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView
* stappler::BytesView
* bool

Возвращает:
* bool

# ::stappler::xenolith::font::FontFaceData::init(stappler::StringView,stappler::mem_std::Bytes&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView
* stappler::mem_std::Bytes&&

Возвращает:
* bool

# ::stappler::xenolith::font::FontFaceData::init(stappler::StringView,Function<stappler::mem_std::Bytes ()>&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView
* Function<stappler::mem_std::Bytes ()>&&

Возвращает:
* bool

# ::stappler::xenolith::font::FontFaceData::inspectVariableFont(stappler::xenolith::font::FontLayoutParameters,FT_Face)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::font::FontLayoutParameters
* FT_Face


# ::stappler::xenolith::font::FontFaceData::getName() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::StringView

# ::stappler::xenolith::font::FontFaceData::getView() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::BytesView

# ::stappler::xenolith::font::FontFaceData::getVariableAxis() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::font::FontVariableAxis

# ::stappler::xenolith::font::FontFaceData::getWeightMin() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::font::FontWeight

# ::stappler::xenolith::font::FontFaceData::getWeightMax() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::font::FontWeight

# ::stappler::xenolith::font::FontFaceData::getStretchMin() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::font::FontStretch

# ::stappler::xenolith::font::FontFaceData::getStretchMax() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::font::FontStretch

# ::stappler::xenolith::font::FontFaceData::getSlantMin() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::font::FontStyle

# ::stappler::xenolith::font::FontFaceData::getSlantMax() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::font::FontStyle

# ::stappler::xenolith::font::FontFaceData::getGradeMin() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::font::FontGrade

# ::stappler::xenolith::font::FontFaceData::getGradeMax() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::font::FontGrade

# ::stappler::xenolith::font::FontFaceData::getOpticalSizeMin() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint32_t

# ::stappler::xenolith::font::FontFaceData::getOpticalSizeMax() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint32_t

# ::stappler::xenolith::font::FontFaceData::getItalicMin() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint32_t

# ::stappler::xenolith::font::FontFaceData::getItalicMax() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint32_t

# ::stappler::xenolith::font::FontFaceData::getSpecialization(stappler::xenolith::font::FontSpecializationVector const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::font::FontSpecializationVector const&

Возвращает:
* stappler::xenolith::font::FontSpecializationVector

# ::stappler::xenolith::font::FontFaceData::_persistent

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::font::FontFaceData::_name

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::mem_std::String


# ::stappler::xenolith::font::FontFaceData::_view

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::BytesView


# ::stappler::xenolith::font::FontFaceData::_data

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::mem_std::Bytes


# ::stappler::xenolith::font::FontFaceData::_variableAxis

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::font::FontVariableAxis


# ::stappler::xenolith::font::FontFaceData::_weightMin

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::font::FontWeight


# ::stappler::xenolith::font::FontFaceData::_weightMax

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::font::FontWeight


# ::stappler::xenolith::font::FontFaceData::_stretchMin

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::font::FontStretch


# ::stappler::xenolith::font::FontFaceData::_stretchMax

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::font::FontStretch


# ::stappler::xenolith::font::FontFaceData::_slantMin

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::font::FontStyle


# ::stappler::xenolith::font::FontFaceData::_slantMax

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::font::FontStyle


# ::stappler::xenolith::font::FontFaceData::_opticalSizeMin

## BRIEF

## CONTENT

Доступ: protected

Тип: uint32_t


# ::stappler::xenolith::font::FontFaceData::_opticalSizeMax

## BRIEF

## CONTENT

Доступ: protected

Тип: uint32_t


# ::stappler::xenolith::font::FontFaceData::_italicMin

## BRIEF

## CONTENT

Доступ: protected

Тип: uint32_t


# ::stappler::xenolith::font::FontFaceData::_italicMax

## BRIEF

## CONTENT

Доступ: protected

Тип: uint32_t


# ::stappler::xenolith::font::FontFaceData::_gradeMin

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::font::FontGrade


# ::stappler::xenolith::font::FontFaceData::_gradeMax

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::font::FontGrade


# ::stappler::xenolith::font::FontFaceData::_params

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::font::FontLayoutParameters


# ::stappler::xenolith::font::FontFaceObject

## BRIEF

## CONTENT

Базовые классы:
* Ref


# ::stappler::xenolith::font::FontFaceObject::~FontFaceObject()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::font::FontFaceObject::init(stappler::StringView,Rc<stappler::xenolith::font::FontFaceData> const&,FT_Face,stappler::xenolith::font::FontSpecializationVector const&,uint16_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView
* Rc<stappler::xenolith::font::FontFaceData> const&
* FT_Face
* stappler::xenolith::font::FontSpecializationVector const&
* uint16_t

Возвращает:
* bool

# ::stappler::xenolith::font::FontFaceObject::getName() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::StringView

# ::stappler::xenolith::font::FontFaceObject::getId() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint16_t

# ::stappler::xenolith::font::FontFaceObject::getFace() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* FT_Face

# ::stappler::xenolith::font::FontFaceObject::getData() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Rc<stappler::xenolith::font::FontFaceData> const&

# ::stappler::xenolith::font::FontFaceObject::getSpec() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::font::FontSpecializationVector const&

# ::stappler::xenolith::font::FontFaceObject::acquireTexture(char16_t,Callback<void (const stappler::xenolith::font::CharTexture &)> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* char16_t
* Callback<void (const stappler::xenolith::font::CharTexture &)> const&

Возвращает:
* bool

# ::stappler::xenolith::font::FontFaceObject::acquireTextureUnsafe(char16_t,Callback<void (const stappler::xenolith::font::CharTexture &)> const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* char16_t
* Callback<void (const stappler::xenolith::font::CharTexture &)> const&

Возвращает:
* bool

# ::stappler::xenolith::font::FontFaceObject::addChars(Vector<char16_t> const&,bool,Vector<char16_t>*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Vector<char16_t> const&
* bool
* Vector<char16_t>*

Возвращает:
* bool

# ::stappler::xenolith::font::FontFaceObject::addCharGroup(stappler::CharGroupId,Vector<char16_t>*)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::CharGroupId
* Vector<char16_t>*

Возвращает:
* bool

# ::stappler::xenolith::font::FontFaceObject::addRequiredChar(char16_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* char16_t

Возвращает:
* bool

# ::stappler::xenolith::font::FontFaceObject::getRequiredChars() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Vector<char16_t>

# ::stappler::xenolith::font::FontFaceObject::getChar(char16_t) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* char16_t

Возвращает:
* stappler::xenolith::font::CharLayout

# ::stappler::xenolith::font::FontFaceObject::getKerningAmount(char16_t,char16_t) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* char16_t
* char16_t

Возвращает:
* int16_t

# ::stappler::xenolith::font::FontFaceObject::getMetrics() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::font::Metrics

# ::stappler::xenolith::font::FontFaceObject::addChar(char16_t,bool&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* char16_t
* bool&

Возвращает:
* bool

# ::stappler::xenolith::font::FontFaceObject::_name

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::mem_std::String


# ::stappler::xenolith::font::FontFaceObject::_data

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::xenolith::font::FontFaceData>


# ::stappler::xenolith::font::FontFaceObject::_id

## BRIEF

## CONTENT

Доступ: protected

Тип: uint16_t


# ::stappler::xenolith::font::FontFaceObject::_face

## BRIEF

## CONTENT

Доступ: protected

Тип: FT_Face


# ::stappler::xenolith::font::FontFaceObject::_spec

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::font::FontSpecializationVector


# ::stappler::xenolith::font::FontFaceObject::_metrics

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::font::Metrics


# ::stappler::xenolith::font::FontFaceObject::_required

## BRIEF

## CONTENT

Доступ: protected

Тип: Vector<char16_t>


# ::stappler::xenolith::font::FontFaceObject::_chars

## BRIEF

## CONTENT

Доступ: protected

Тип: FontCharStorage<stappler::xenolith::font::CharLayout>


# ::stappler::xenolith::font::FontFaceObject::_kerning

## BRIEF

## CONTENT

Доступ: protected

Тип: HashMap<uint32_t, int16_t>


# ::stappler::xenolith::font::FontFaceObject::_faceMutex

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::mem_std::Mutex


# ::stappler::xenolith::font::FontFaceObject::_charsMutex

## BRIEF

## CONTENT

Доступ: protected

Тип: std::shared_mutex


# ::stappler::xenolith::font::FontFaceObject::_requiredMutex

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::mem_std::Mutex
