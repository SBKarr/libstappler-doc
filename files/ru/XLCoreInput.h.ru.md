Title: XLCoreInput.h


# XENOLITH_CORE_XLCOREINPUT_H_

## BRIEF

Заголовок параметров входящих данных от устройств ввода

## CONTENT

Заголовок параметров входящих данных от устройств ввода


# ::stappler::xenolith::core::InputFlags

## BRIEF

Флаги ввода

## CONTENT

Флаги ввода

Значения:
* None
* TouchMouseInput
* KeyboardInput
* FocusInput


# ::stappler::xenolith::core::operator|(stappler::xenolith::core::InputFlags const&,stappler::xenolith::core::InputFlags const&)

## BRIEF

Автоматически созданный оператор битовых флагов

## CONTENT

Автоматически созданный оператор битовых флагов

Параметры:
* stappler::xenolith::core::InputFlags const&
* stappler::xenolith::core::InputFlags const&

Возвращает:
* stappler::xenolith::core::InputFlags

# ::stappler::xenolith::core::operator&(stappler::xenolith::core::InputFlags const&,stappler::xenolith::core::InputFlags const&)

## BRIEF

Автоматически созданный оператор битовых флагов

## CONTENT

Автоматически созданный оператор битовых флагов

Параметры:
* stappler::xenolith::core::InputFlags const&
* stappler::xenolith::core::InputFlags const&

Возвращает:
* stappler::xenolith::core::InputFlags

# ::stappler::xenolith::core::operator^(stappler::xenolith::core::InputFlags const&,stappler::xenolith::core::InputFlags const&)

## BRIEF

Автоматически созданный оператор битовых флагов

## CONTENT

Автоматически созданный оператор битовых флагов

Параметры:
* stappler::xenolith::core::InputFlags const&
* stappler::xenolith::core::InputFlags const&

Возвращает:
* stappler::xenolith::core::InputFlags

# ::stappler::xenolith::core::operator|=(stappler::xenolith::core::InputFlags&,stappler::xenolith::core::InputFlags const&)

## BRIEF

Автоматически созданный оператор битовых флагов

## CONTENT

Автоматически созданный оператор битовых флагов

Параметры:
* stappler::xenolith::core::InputFlags&
* stappler::xenolith::core::InputFlags const&

Возвращает:
* stappler::xenolith::core::InputFlags&

# ::stappler::xenolith::core::operator&=(stappler::xenolith::core::InputFlags&,stappler::xenolith::core::InputFlags const&)

## BRIEF

Автоматически созданный оператор битовых флагов

## CONTENT

Автоматически созданный оператор битовых флагов

Параметры:
* stappler::xenolith::core::InputFlags&
* stappler::xenolith::core::InputFlags const&

Возвращает:
* stappler::xenolith::core::InputFlags&

# ::stappler::xenolith::core::operator^=(stappler::xenolith::core::InputFlags&,stappler::xenolith::core::InputFlags const&)

## BRIEF

Автоматически созданный оператор битовых флагов

## CONTENT

Автоматически созданный оператор битовых флагов

Параметры:
* stappler::xenolith::core::InputFlags&
* stappler::xenolith::core::InputFlags const&

Возвращает:
* stappler::xenolith::core::InputFlags&

# ::stappler::xenolith::core::operator==(stappler::xenolith::core::InputFlags const&,std::underlying_type<InputFlags>::type const&)

## BRIEF

Автоматически созданный оператор битовых флагов

## CONTENT

Автоматически созданный оператор битовых флагов

Параметры:
* stappler::xenolith::core::InputFlags const&
* std::underlying_type<InputFlags>::type const&

Возвращает:
* bool

# ::stappler::xenolith::core::operator==(std::underlying_type<InputFlags>::type const&,stappler::xenolith::core::InputFlags const&)

## BRIEF

Автоматически созданный оператор битовых флагов

## CONTENT

Автоматически созданный оператор битовых флагов

Параметры:
* std::underlying_type<InputFlags>::type const&
* stappler::xenolith::core::InputFlags const&

Возвращает:
* bool

# ::stappler::xenolith::core::operator!=(stappler::xenolith::core::InputFlags const&,std::underlying_type<InputFlags>::type const&)

## BRIEF

Автоматически созданный оператор битовых флагов

## CONTENT

Автоматически созданный оператор битовых флагов

Параметры:
* stappler::xenolith::core::InputFlags const&
* std::underlying_type<InputFlags>::type const&

Возвращает:
* bool

# ::stappler::xenolith::core::operator!=(std::underlying_type<InputFlags>::type const&,stappler::xenolith::core::InputFlags const&)

## BRIEF

Автоматически созданный оператор битовых флагов

## CONTENT

Автоматически созданный оператор битовых флагов

Параметры:
* std::underlying_type<InputFlags>::type const&
* stappler::xenolith::core::InputFlags const&

Возвращает:
* bool

# ::stappler::xenolith::core::operator~(stappler::xenolith::core::InputFlags const&)

## BRIEF

Автоматически созданный оператор битовых флагов

## CONTENT

Автоматически созданный оператор битовых флагов

Параметры:
* stappler::xenolith::core::InputFlags const&

Возвращает:
* stappler::xenolith::core::InputFlags

# ::stappler::xenolith::core::InputMouseButton

## BRIEF

Использованная для ввода кнопка манипулятора

## CONTENT

Использованная для ввода кнопка манипулятора

Значения:
* None
* MouseLeft
* MouseMiddle
* MouseRight
* MouseScrollUp
* MouseScrollDown
* MouseScrollLeft
* MouseScrollRight
* Mouse8
* Mouse9
* Mouse10
* Mouse11
* Mouse12
* Mouse13
* Mouse14
* Mouse15
* Max
* Touch


# ::stappler::xenolith::core::InputModifier

## BRIEF

Флаги клавиш-модификаторов ввода

## CONTENT

Флаги клавиш-модификаторов ввода

Значения:
* None
* Shift
* CapsLock
* Ctrl
* Alt
* NumLock
* Mod3
* Mod4
* Mod5
* Button1
* Button2
* Button3
* Button4
* Button5
* LayoutAlternative
* ShiftL
* ShiftR
* CtrlL
* CtrlR
* AltL
* AltR
* Mod3L
* Mod3R
* Mod4L
* Mod4R
* ScrollLock
* Command
* Meta
* Function
* Sym
* Win
* WinL
* WinR
* Menu
* MenuL
* MenuR
* ValueFalse
* ValueTrue
* Unmanaged


# ::stappler::xenolith::core::operator|(stappler::xenolith::core::InputModifier const&,stappler::xenolith::core::InputModifier const&)

## BRIEF

Автоматически созданный оператор битовых флагов

## CONTENT

Автоматически созданный оператор битовых флагов

Параметры:
* stappler::xenolith::core::InputModifier const&
* stappler::xenolith::core::InputModifier const&

Возвращает:
* stappler::xenolith::core::InputModifier

# ::stappler::xenolith::core::operator&(stappler::xenolith::core::InputModifier const&,stappler::xenolith::core::InputModifier const&)

## BRIEF

Автоматически созданный оператор битовых флагов

## CONTENT

Автоматически созданный оператор битовых флагов

Параметры:
* stappler::xenolith::core::InputModifier const&
* stappler::xenolith::core::InputModifier const&

Возвращает:
* stappler::xenolith::core::InputModifier

# ::stappler::xenolith::core::operator^(stappler::xenolith::core::InputModifier const&,stappler::xenolith::core::InputModifier const&)

## BRIEF

Автоматически созданный оператор битовых флагов

## CONTENT

Автоматически созданный оператор битовых флагов

Параметры:
* stappler::xenolith::core::InputModifier const&
* stappler::xenolith::core::InputModifier const&

Возвращает:
* stappler::xenolith::core::InputModifier

# ::stappler::xenolith::core::operator|=(stappler::xenolith::core::InputModifier&,stappler::xenolith::core::InputModifier const&)

## BRIEF

Автоматически созданный оператор битовых флагов

## CONTENT

Автоматически созданный оператор битовых флагов

Параметры:
* stappler::xenolith::core::InputModifier&
* stappler::xenolith::core::InputModifier const&

Возвращает:
* stappler::xenolith::core::InputModifier&

# ::stappler::xenolith::core::operator&=(stappler::xenolith::core::InputModifier&,stappler::xenolith::core::InputModifier const&)

## BRIEF

Автоматически созданный оператор битовых флагов

## CONTENT

Автоматически созданный оператор битовых флагов

Параметры:
* stappler::xenolith::core::InputModifier&
* stappler::xenolith::core::InputModifier const&

Возвращает:
* stappler::xenolith::core::InputModifier&

# ::stappler::xenolith::core::operator^=(stappler::xenolith::core::InputModifier&,stappler::xenolith::core::InputModifier const&)

## BRIEF

Автоматически созданный оператор битовых флагов

## CONTENT

Автоматически созданный оператор битовых флагов

Параметры:
* stappler::xenolith::core::InputModifier&
* stappler::xenolith::core::InputModifier const&

Возвращает:
* stappler::xenolith::core::InputModifier&

# ::stappler::xenolith::core::operator==(stappler::xenolith::core::InputModifier const&,std::underlying_type<InputModifier>::type const&)

## BRIEF

Автоматически созданный оператор битовых флагов

## CONTENT

Автоматически созданный оператор битовых флагов

Параметры:
* stappler::xenolith::core::InputModifier const&
* std::underlying_type<InputModifier>::type const&

Возвращает:
* bool

# ::stappler::xenolith::core::operator==(std::underlying_type<InputModifier>::type const&,stappler::xenolith::core::InputModifier const&)

## BRIEF

Автоматически созданный оператор битовых флагов

## CONTENT

Автоматически созданный оператор битовых флагов

Параметры:
* std::underlying_type<InputModifier>::type const&
* stappler::xenolith::core::InputModifier const&

Возвращает:
* bool

# ::stappler::xenolith::core::operator!=(stappler::xenolith::core::InputModifier const&,std::underlying_type<InputModifier>::type const&)

## BRIEF

Автоматически созданный оператор битовых флагов

## CONTENT

Автоматически созданный оператор битовых флагов

Параметры:
* stappler::xenolith::core::InputModifier const&
* std::underlying_type<InputModifier>::type const&

Возвращает:
* bool

# ::stappler::xenolith::core::operator!=(std::underlying_type<InputModifier>::type const&,stappler::xenolith::core::InputModifier const&)

## BRIEF

Автоматически созданный оператор битовых флагов

## CONTENT

Автоматически созданный оператор битовых флагов

Параметры:
* std::underlying_type<InputModifier>::type const&
* stappler::xenolith::core::InputModifier const&

Возвращает:
* bool

# ::stappler::xenolith::core::operator~(stappler::xenolith::core::InputModifier const&)

## BRIEF

Автоматически созданный оператор битовых флагов

## CONTENT

Автоматически созданный оператор битовых флагов

Параметры:
* stappler::xenolith::core::InputModifier const&

Возвращает:
* stappler::xenolith::core::InputModifier

# ::stappler::xenolith::core::InputKeyCode

## BRIEF

Базовый код клавиш ввода

## CONTENT

Базовый код клавиш ввода

Код основан на аналогичном для GLFW.

Код создан для использования в 128-битной маске. Неопределённый символ имеет код 0.

Коды для BACKSPACE, TAB, ENTER, ESCAPE, DELETE соответствуют ASCII, поскольку платформы могут посылать эти символы без управляющего кода.

Все печатные символы в диапазоне [32-96]. APOSTROPHE смещён на позицию 43 вместо 39, чтобы цисловые коды составляли единый блок [KP_0, KP_0 + 9].

Имена кодов основаны на QWERTY, но соответсвуют физическим позициям на клавиатуре, а не символу. То есть, InputKeyCode::S соотвествует клавише AC02, символу 'S' в QWERTY и 'O' в Dworak. Имена клавиш в коде имеют соотвествующую метку клавиши для XKB.

Значения:
* Unknown
* KP_DECIMAL
* KP_DIVIDE
* KP_MULTIPLY
* KP_SUBTRACT
* KP_ADD
* KP_ENTER
* KP_EQUAL
* BACKSPACE
* TAB
* ENTER
* RIGHT
* LEFT
* DOWN
* UP
* PAGE_UP
* PAGE_DOWN
* HOME
* END
* LEFT_SHIFT
* LEFT_CONTROL
* LEFT_ALT
* LEFT_SUPER
* RIGHT_SHIFT
* RIGHT_CONTROL
* RIGHT_ALT
* RIGHT_SUPER
* ESCAPE
* INSERT
* CAPS_LOCK
* SCROLL_LOCK
* NUM_LOCK
* SPACE
* KP_0
* KP_1
* KP_2
* KP_3
* KP_4
* KP_5
* KP_6
* KP_7
* KP_8
* KP_9
* APOSTROPHE
* COMMA
* MINUS
* PERIOD
* SLASH
* _0
* _1
* _2
* _3
* _4
* _5
* _6
* _7
* _8
* _9
* SEMICOLON
* EQUAL
* WORLD_1
* WORLD_2
* A
* B
* C
* D
* E
* F
* G
* H
* I
* J
* K
* L
* M
* N
* O
* P
* Q
* R
* S
* T
* U
* V
* W
* X
* Y
* Z
* LEFT_BRACKET
* BACKSLASH
* RIGHT_BRACKET
* GRAVE_ACCENT
* F1
* F2
* F3
* F4
* F5
* F6
* F7
* F8
* F9
* F10
* F11
* F12
* F13
* F14
* F15
* F16
* F17
* F18
* F19
* F20
* F21
* F22
* F23
* F24
* F25
* MENU
* PRINT_SCREEN
* PAUSE
* DELETE
* Max


# ::stappler::xenolith::core::InputKeyComposeState

## BRIEF

Статус композиции символа при композиционном вводе

## CONTENT

Значения:
* Nothing - ввод без композиции
* Composed - завершающий символ композиции
* Composing - промежуточный символ композиции
* Disabled - композиция не удалась
* Forced - передан явно полный символ композиции


# ::stappler::xenolith::core::InputEventName

## BRIEF

Имя события ввода

## CONTENT

Имя события ввода

Значения:
* None
* Begin
* Move
* End
* Cancel
* MouseMove
* Scroll
* Background
* PointerEnter
* FocusGain
* KeyPressed
* KeyRepeated
* KeyReleased
* KeyCanceled
* Max


# ::stappler::xenolith::core::InputEventData

## BRIEF

Базовые данные события ввода

## CONTENT

Базовые данные события ввода


# ::stappler::xenolith::core::InputEventData::BoolEvent(stappler::xenolith::core::InputEventName,bool)

## BRIEF

Создаёт событие, связанное с булевым значением

## CONTENT

Создаёт событие, связанное с булевым значением

Параметры:
* stappler::xenolith::core::InputEventName
* bool

Возвращает:
* stappler::xenolith::core::InputEventData

# ::stappler::xenolith::core::InputEventData::BoolEvent(stappler::xenolith::core::InputEventName,bool,const stappler::geom::Vec2&)

## BRIEF

Создаёт событие, связанное с булевым значением и координатами

## CONTENT

Создаёт событие, связанное с булевым значением и координатами

Параметры:
* stappler::xenolith::core::InputEventName
* bool
* const stappler::geom::Vec2&

Возвращает:
* stappler::xenolith::core::InputEventData

# ::stappler::xenolith::core::InputEventData::BoolEvent(stappler::xenolith::core::InputEventName,bool,stappler::xenolith::core::InputModifier,const stappler::geom::Vec2&)

## BRIEF

Создаёт событие, связанное с булевым значением и координатами

## CONTENT

Создаёт событие, связанное с булевым значением и координатами

Параметры:
* stappler::xenolith::core::InputEventName
* bool
* stappler::xenolith::core::InputModifier
* const stappler::geom::Vec2&

Возвращает:
* stappler::xenolith::core::InputEventData

# ::stappler::xenolith::core::InputEventData::id

## BRIEF

Идентификатор источника события или цепочки событий

## CONTENT

Идентификатор источника события или цепочки событий. Роль зависит от платформы.

Тип: uint32_t


# ::stappler::xenolith::core::InputEventData::event

## BRIEF

Имя события

## CONTENT

Имя события

Тип: stappler::xenolith::core::InputEventName


# ::stappler::xenolith::core::InputEventData::button

## BRIEF

Кнопка манипулятора

## CONTENT

Кнопка манипулятора

Тип: stappler::xenolith::core::InputMouseButton


# ::stappler::xenolith::core::InputEventData::modifiers

## BRIEF

Модификаторы

## CONTENT

Модификаторы

Тип: stappler::xenolith::core::InputModifier


# ::stappler::xenolith::core::InputEventData::x

## BRIEF

Координата

## CONTENT

Координата

Тип: float


# ::stappler::xenolith::core::InputEventData::y

## BRIEF

Координата

## CONTENT

Координата

Тип: float


# ::stappler::xenolith::core::InputEventData::

## BRIEF

Объединение дополнительной информации

## CONTENT

Объединение дополнительной информации


# ::stappler::xenolith::core::InputEventData::valueX

## BRIEF

Дополнительная координата

## CONTENT

Дополнительная координата

Тип: float


# ::stappler::xenolith::core::InputEventData::valueY

## BRIEF

Дополнительная координата

## CONTENT

Дополнительная координата

Тип: float


# ::stappler::xenolith::core::InputEventData::density

## BRIEF

Плотность пикселей для ввода

## CONTENT

Плотность пикселей для ввода

Тип: float


# ::stappler::xenolith::core::InputEventData::point

## BRIEF

Тип ввода для точки

## CONTENT

Тип ввода для точки

Тип: 


# ::stappler::xenolith::core::InputEventData::keycode

## BRIEF

Код символа клавиатуры

## CONTENT

Код символа клавиатуры

Тип: stappler::xenolith::core::InputKeyCode


# ::stappler::xenolith::core::InputEventData::compose

## BRIEF

Статус композиции

## CONTENT

Статус композиции

Тип: stappler::xenolith::core::InputKeyComposeState


# ::stappler::xenolith::core::InputEventData::keysym

## BRIEF

Платформозависимый уникальный код символа

## CONTENT

Платформозависимый уникальный код символа

Тип: uint32_t


# ::stappler::xenolith::core::InputEventData::keychar

## BRIEF

Соответсвующий символ юникода

## CONTENT

Соответсвующий символ юникода

Тип: char32_t


# ::stappler::xenolith::core::InputEventData::key

## BRIEF

Структура для ввода символов

## CONTENT

Структура для ввода символов

Тип: 


# ::stappler::xenolith::core::InputEventData::operator==(uint32_t const&) const

## BRIEF

Оператор сравнения

## CONTENT

Оператор сравнения

Параметры:
* uint32_t const&

Возвращает:
* bool

# ::stappler::xenolith::core::InputEventData::operator!=(uint32_t const&) const

## BRIEF

Оператор сравнения

## CONTENT

Оператор сравнения

Параметры:
* uint32_t const&

Возвращает:
* bool

# ::stappler::xenolith::core::InputEventData::getValue() const

## BRIEF

Получает булево значение события

## CONTENT

Получает булево значение события

Возвращает:
* bool

# ::stappler::xenolith::core::InputEventData::hasLocation() const

## BRIEF

Проверяет, имеет ли событие данные позиции

## CONTENT

Проверяет, имеет ли событие данные позиции

Возвращает:
* bool

# ::stappler::xenolith::core::InputEventData::isPointEvent() const

## BRIEF

Проверяет, имеет ли событие дполнительные данные в виде точки

## CONTENT

Проверяет, имеет ли событие дполнительные данные в виде точки

Возвращает:
* bool

# ::stappler::xenolith::core::InputEventData::isKeyEvent() const

## BRIEF

Проверяет, имеет ли событие дполнительные данные в виде кода символа

## CONTENT

Проверяет, имеет ли событие дполнительные данные в виде кода символа
Возвращает:
* bool

# ::stappler::xenolith::core::InputEventData::operator==(stappler::xenolith::core::InputEventData const&) const

## BRIEF

Оператор сравнения

## CONTENT

Оператор сравнения

Параметры:
* stappler::xenolith::core::InputEventData const&

Возвращает:
* bool

# ::stappler::xenolith::core::InputEventData::operator!=(stappler::xenolith::core::InputEventData const&) const

## BRIEF

Оператор сравнения

## CONTENT

Оператор сравнения

Параметры:
* stappler::xenolith::core::InputEventData const&

Возвращает:
* bool

# ::stappler::xenolith::core::InputEventData::operator<(stappler::xenolith::core::InputEventData const&) const

## BRIEF

Оператор сравнения

## CONTENT

Оператор сравнения

Параметры:
* stappler::xenolith::core::InputEventData const&

Возвращает:
* bool

# ::stappler::xenolith::core::TextInputType

## BRIEF

Тип соотвествия для ввода текста

## CONTENT

Тип соотвествия для ввода текста. Подсказка для экранной клавиатуры.

Значения:
* Empty
* Date_Date
* Date_DateTime
* Date_Time
* Date
* Number_Numbers
* Number_Decimial
* Number_Signed
* Number
* Phone
* Text_Text
* Text_Search
* Text_Punctuation
* Text_Email
* Text_Url
* Text
* Default
* ClassMask
* PasswordBit
* MultiLineBit
* AutoCorrectionBit
* ReturnKeyMask
* ReturnKeyDefault
* ReturnKeyGo
* ReturnKeyGoogle
* ReturnKeyJoin
* ReturnKeyNext
* ReturnKeyRoute
* ReturnKeySearch
* ReturnKeySend
* ReturnKeyYahoo
* ReturnKeyDone
* ReturnKeyEmergencyCall


# ::stappler::xenolith::core::operator|(stappler::xenolith::core::TextInputType const&,stappler::xenolith::core::TextInputType const&)

## BRIEF

Автоматически созданный оператор битового флага

## CONTENT

Автоматически созданный оператор битового флага

Параметры:
* stappler::xenolith::core::TextInputType const&
* stappler::xenolith::core::TextInputType const&

Возвращает:
* stappler::xenolith::core::TextInputType

# ::stappler::xenolith::core::operator&(stappler::xenolith::core::TextInputType const&,stappler::xenolith::core::TextInputType const&)

## BRIEF

Автоматически созданный оператор битового флага

## CONTENT

Автоматически созданный оператор битового флага

Параметры:
* stappler::xenolith::core::TextInputType const&
* stappler::xenolith::core::TextInputType const&

Возвращает:
* stappler::xenolith::core::TextInputType

# ::stappler::xenolith::core::operator^(stappler::xenolith::core::TextInputType const&,stappler::xenolith::core::TextInputType const&)

## BRIEF

Автоматически созданный оператор битового флага

## CONTENT

Автоматически созданный оператор битового флага

Параметры:
* stappler::xenolith::core::TextInputType const&
* stappler::xenolith::core::TextInputType const&

Возвращает:
* stappler::xenolith::core::TextInputType

# ::stappler::xenolith::core::operator|=(stappler::xenolith::core::TextInputType&,stappler::xenolith::core::TextInputType const&)

## BRIEF

Автоматически созданный оператор битового флага

## CONTENT

Автоматически созданный оператор битового флага

Параметры:
* stappler::xenolith::core::TextInputType&
* stappler::xenolith::core::TextInputType const&

Возвращает:
* stappler::xenolith::core::TextInputType&

# ::stappler::xenolith::core::operator&=(stappler::xenolith::core::TextInputType&,stappler::xenolith::core::TextInputType const&)

## BRIEF

Автоматически созданный оператор битового флага

## CONTENT

Автоматически созданный оператор битового флага

Параметры:
* stappler::xenolith::core::TextInputType&
* stappler::xenolith::core::TextInputType const&

Возвращает:
* stappler::xenolith::core::TextInputType&

# ::stappler::xenolith::core::operator^=(stappler::xenolith::core::TextInputType&,stappler::xenolith::core::TextInputType const&)

## BRIEF

Автоматически созданный оператор битового флага

## CONTENT

Автоматически созданный оператор битового флага

Параметры:
* stappler::xenolith::core::TextInputType&
* stappler::xenolith::core::TextInputType const&

Возвращает:
* stappler::xenolith::core::TextInputType&

# ::stappler::xenolith::core::operator==(stappler::xenolith::core::TextInputType const&,std::underlying_type<TextInputType>::type const&)

## BRIEF

Автоматически созданный оператор битового флага

## CONTENT

Автоматически созданный оператор битового флага

Параметры:
* stappler::xenolith::core::TextInputType const&
* std::underlying_type<TextInputType>::type const&

Возвращает:
* bool

# ::stappler::xenolith::core::operator==(std::underlying_type<TextInputType>::type const&,stappler::xenolith::core::TextInputType const&)

## BRIEF

Автоматически созданный оператор битового флага

## CONTENT

Автоматически созданный оператор битового флага

Параметры:
* std::underlying_type<TextInputType>::type const&
* stappler::xenolith::core::TextInputType const&

Возвращает:
* bool

# ::stappler::xenolith::core::operator!=(stappler::xenolith::core::TextInputType const&,std::underlying_type<TextInputType>::type const&)

## BRIEF

Автоматически созданный оператор битового флага

## CONTENT

Автоматически созданный оператор битового флага

Параметры:
* stappler::xenolith::core::TextInputType const&
* std::underlying_type<TextInputType>::type const&

Возвращает:
* bool

# ::stappler::xenolith::core::operator!=(std::underlying_type<TextInputType>::type const&,stappler::xenolith::core::TextInputType const&)

## BRIEF

Автоматически созданный оператор битового флага

## CONTENT

Автоматически созданный оператор битового флага

Параметры:
* std::underlying_type<TextInputType>::type const&
* stappler::xenolith::core::TextInputType const&

Возвращает:
* bool

# ::stappler::xenolith::core::operator~(stappler::xenolith::core::TextInputType const&)

## BRIEF

Автоматически созданный оператор битового флага

## CONTENT

Автоматически созданный оператор битового флага

Параметры:
* stappler::xenolith::core::TextInputType const&

Возвращает:
* stappler::xenolith::core::TextInputType

# ::stappler::xenolith::core::TextCursorPosition

## BRIEF

Тип позиции курсора в тексте

## CONTENT

Тип позиции курсора в тексте


# ::stappler::xenolith::core::TextCursorLength

## BRIEF

Тип длины курсора в тексте

## CONTENT

Тип длины курсора в тексте


# ::stappler::xenolith::core::TextCursor

## BRIEF

Текстовый курсор

## CONTENT

Текстовый курсор


# ::stappler::xenolith::core::TextCursor::InvalidCursor

## BRIEF

Значение ошибочного курсора

## CONTENT

Значение ошибочного курсора

Тип: stappler::xenolith::core::TextCursor const


# ::stappler::xenolith::core::TextCursor::start

## BRIEF

Начальная позиция

## CONTENT

Начальная позиция

Тип: uint32_t


# ::stappler::xenolith::core::TextCursor::length

## BRIEF

Длина курсора

## CONTENT

Длина курсора

Тип: uint32_t


# ::stappler::xenolith::core::TextCursor::TextCursor()

## BRIEF

Конструктор

## CONTENT

Конструктор


# ::stappler::xenolith::core::TextCursor::TextCursor(uint32_t)

## BRIEF

Конструктор из позиции

## CONTENT

Конструктор из позиции

Параметры:
* uint32_t


# ::stappler::xenolith::core::TextCursor::TextCursor(uint32_t,uint32_t)

## BRIEF

Конструктор из позиции и длины

## CONTENT

Конструктор из позиции и длины

Параметры:
* uint32_t
* uint32_t


# ::stappler::xenolith::core::TextCursor::TextCursor(stappler::xenolith::core::TextCursorPosition)

## BRIEF

Конструктор из позиции

## CONTENT

Конструктор из позиции

Параметры:
* stappler::xenolith::core::TextCursorPosition


# ::stappler::xenolith::core::TextCursor::TextCursor(stappler::xenolith::core::TextCursorPosition,stappler::xenolith::core::TextCursorLength)

## BRIEF

Конструктор из позиции и длины

## CONTENT

Конструктор из позиции и длины

Параметры:
* stappler::xenolith::core::TextCursorPosition
* stappler::xenolith::core::TextCursorLength


# ::stappler::xenolith::core::TextCursor::TextCursor(stappler::xenolith::core::TextCursorPosition,stappler::xenolith::core::TextCursorPosition)

## BRIEF

Конструктор из двух позиций

## CONTENT

Конструктор из двух позиций

Параметры:
* stappler::xenolith::core::TextCursorPosition
* stappler::xenolith::core::TextCursorPosition


# ::stappler::xenolith::core::TextCursor::operator==(stappler::xenolith::core::TextCursor const&) const

## BRIEF

Оператор сравнения

## CONTENT

Оператор сравнения

Параметры:
* stappler::xenolith::core::TextCursor const&

Возвращает:
* bool

# ::stappler::xenolith::core::getInputKeyCodeName(stappler::xenolith::core::InputKeyCode)

## BRIEF

Возвращает имя клавиши

## CONTENT

Возвращает имя клавиши

Параметры:
* stappler::xenolith::core::InputKeyCode

Возвращает:
* stappler::StringView

# ::stappler::xenolith::core::getInputKeyCodeKeyName(stappler::xenolith::core::InputKeyCode)

## BRIEF

Возвращает код клавиши

## CONTENT

Возвращает код клавиши

Параметры:
* stappler::xenolith::core::InputKeyCode

Возвращает:
* stappler::StringView

# ::stappler::xenolith::core::getInputEventName(stappler::xenolith::core::InputEventName)

## BRIEF

Возвращает имя события

## CONTENT

Возвращает имя события

Параметры:
* stappler::xenolith::core::InputEventName

Возвращает:
* stappler::StringView

# ::stappler::xenolith::core::getInputButtonName(stappler::xenolith::core::InputMouseButton)

## BRIEF

Возвращает имя кнопки

## CONTENT

Возвращает имя кнопки

Параметры:
* stappler::xenolith::core::InputMouseButton

Возвращает:
* stappler::StringView

# ::stappler::xenolith::core::getInputModifiersNames(stappler::xenolith::core::InputModifier)

## BRIEF

Возвращает список модификаторов

## CONTENT

Возвращает список модификаторов

Параметры:
* stappler::xenolith::core::InputModifier

Возвращает:
* stappler::mem_std::String

# ::std::operator<<(std::ostream&,::stappler::xenolith::core::InputKeyCode)

## BRIEF

Оператор вывода в поток

## CONTENT

Оператор вывода в поток

Параметры:
* std::ostream&
* ::stappler::xenolith::core::InputKeyCode

Возвращает:
* std::ostream&

# ::std::operator<<(std::ostream&,::stappler::xenolith::core::InputEventName)

## BRIEF

Оператор вывода в поток

## CONTENT

Оператор вывода в поток

Параметры:
* std::ostream&
* ::stappler::xenolith::core::InputEventName

Возвращает:
* std::ostream&