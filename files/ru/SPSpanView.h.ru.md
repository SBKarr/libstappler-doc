Title: SPSpanView.h


# STAPPLER_CORE_STRING_SPSPANVIEW_H_

## BRIEF

Заголовок линейного типизированного отображения 

## CONTENT

Заголовок линейного типизированного отображения


# ::stappler::SpanView<typename>

## BRIEF

Структура линейного типизированного отображения

## CONTENT

Структура линейного типизированного отображения. Используется в качестве невладеющего линейного контейнера.

Параметры шаблона:
* typename _Type - тип для отображения


# ::stappler::SpanView<typename>::Type

## BRIEF

Тип для элемента контейнера

## CONTENT

Доступ: public

Тип для элемента контейнера


# ::stappler::SpanView<typename>::Self

## BRIEF

Тип себя

## CONTENT

Доступ: public

Тип себя


# ::stappler::SpanView<typename>::iterator

## BRIEF

Тип итератора

## CONTENT

Доступ: public

Тип итератора


# ::stappler::SpanView<typename>::reverse_iterator

## BRIEF

Тип обратного итератора

## CONTENT

Доступ: public

Тип обратного итератора


# ::stappler::SpanView<typename>::SpanView()

## BRIEF

Конструктор по умолчанию

## CONTENT

Доступ: public

Конструктор по умолчанию. Создаёт пустое отображение.


# ::stappler::SpanView<typename>::SpanView(stappler::SpanView::Type const*,size_t)

## BRIEF

Конструктор из линейного блока памяти

## CONTENT

Доступ: public

Конструктор из линейного блока памяти

Параметры:
* stappler::SpanView::Type const* - указатель на блок памяти
* size_t - размер блока памяти в элементах


# ::stappler::SpanView<typename>::SpanView(stappler::SpanView::Type const*,stappler::SpanView::Type const*)

## BRIEF

Конструктор из линейного блока памяти

## CONTENT

Доступ: public

Конструктор из линейного блока памяти между двумя указателями

Параметры:
* stappler::SpanView::Type const* - указатель на начало блока
* stappler::SpanView::Type const* - указатель на конец блока, не входит в итоговый контейнер


# ::stappler::SpanView<typename>::alloc(memory::pool_t*,size_t)

## BRIEF

Распределяет новый блок памяти из пула и заворачивает в невладеющий контейнер

## CONTENT

Доступ: public

Распределяет новый блок памяти из пула и заворачивает в невладеющий контейнер. Для использования памяти допускается отбрасывать const в значении зранимого элемента.

Параметры:
* memory::pool_t* - пул памяти
* size_t - число элементов в новом блоке

Возвращает:
* Self

# ::stappler::SpanView<typename>::SpanView<class>(InputIt,InputIt)

## BRIEF

Коонструктор из итераторов

## CONTENT

Доступ: public

Коонструктор из итераторов

Параметры шаблона:
* class InputIt - тип входящего итератора

Параметры:
* InputIt - итератор начала
* InputIt - итератор конца (не входит в новый контейнер)


# ::stappler::SpanView<typename>::SpanView(InitializerList<stappler::SpanView::Type>)

## BRIEF

Конструктор из статического списка инициализации

## CONTENT

Доступ: public

Конструктор из статического списка инициализации. Контейнер будет указывать на элементы в статической памяти приложения.

Параметры:
* InitializerList<stappler::SpanView::Type> - список инициализации


# ::stappler::SpanView<typename>::SpanView(std::vector<Type> const&)

## BRIEF

Конструктор из вектора

## CONTENT

Доступ: public

Конструктор из вектора. Отображает весь вектор.

Параметры:
* std::vector<Type> const&


# ::stappler::SpanView<typename>::SpanView(std::vector<Type> const&,size_t)

## BRIEF

Конструктор из вектора

## CONTENT

Доступ: public

Конструктор из вектора. Берёт первые несколько элементов вектора. Итоговое отображение гарантированно не будет выходить за пределы вектора.

Параметры:
* std::vector<Type> const& - исходный вектор
* size_t - число элементов


# ::stappler::SpanView<typename>::SpanView(std::vector<Type> const&,size_t,size_t)

## BRIEF

Конструктор из сегмента вектора

## CONTENT

Доступ: public

Конструктор из сегмента вектора. Берёт несколько элементов вектора с отступом. Итоговое отображение гарантированно не будет выходить за пределы вектора.

Параметры:
* std::vector<Type> const& - исходный вектор
* size_t - отступ в элементах
* size_t - размер в элементах


# ::stappler::SpanView<typename>::SpanView(memory::vector<Type> const&)

## BRIEF

Конструктор из вектора

## CONTENT

Доступ: public

Конструктор из вектора. Отображает весь вектор.

Параметры:
* memory::vector<Type> const&


# ::stappler::SpanView<typename>::SpanView(memory::vector<Type> const&,size_t)

## BRIEF

Конструктор из вектора. Отображает весь вектор.

## CONTENT

Доступ: public

Конструктор из вектора. Берёт первые несколько элементов вектора. Итоговое отображение гарантированно не будет выходить за пределы вектора.

Параметры:
* memory::vector<Type> const& - исходный вектор
* size_t - размер в элементах


# ::stappler::SpanView<typename>::SpanView(memory::vector<Type> const&,size_t,size_t)

## BRIEF

Конструктор из сегмента вектора

## CONTENT

Доступ: public

Конструктор из сегмента вектора. Берёт несколько элементов вектора с отступом. Итоговое отображение гарантированно не будет выходить за пределы вектора.

Параметры:
* memory::vector<Type> const& - исходный вектор
* size_t - отступ в элементах
* size_t - размер в элементах


# ::stappler::SpanView<typename>::SpanView<size_t>(stappler::SpanView::Type const(&)[Size])

## BRIEF

Конструктор из C-массива

## CONTENT

Доступ: public

Конструктор из C-массива

Параметры шаблона:
* size_t Size - размер массива, вычисляется автоматически

Параметры:
* stappler::SpanView::Type const(&)[Size] - исходный массив


# ::stappler::SpanView<typename>::SpanView<size_t>(std::array<Type, Size> const&)

## BRIEF

Конструктор из массива

## CONTENT

Доступ: public

Конструктор из массива

Параметры шаблона:
* size_t Size - размер массива

Параметры:
* std::array<Type, Size> const& - исходный массив


# ::stappler::SpanView<typename>::SpanView(stappler::SpanView::Self const&)

## BRIEF

Конструктор копирования

## CONTENT

Доступ: public

Конструктор копирования, копирует данные отображения

Параметры:
* stappler::SpanView::Self const&


# ::stappler::SpanView<typename>::SpanView(stappler::SpanView::Self const&,size_t)

## BRIEF

Конструктор из другого отображения

## CONTENT

Доступ: public

Конструктор из другого отображения. Берёт первые несколько элементов отображения. Гарантированно не выходит за пределы исходного отображения.

Параметры:
* stappler::SpanView::Self const& - исходное отображение
* size_t - число элементов


# ::stappler::SpanView<typename>::SpanView(stappler::SpanView::Self const&,size_t,size_t)

## BRIEF

Конструктор из сегмента другого отображения

## CONTENT

Доступ: public

Конструктор из сегмента другого отображения. Сегмент определяется смещением внутри отображения и числом элементов. Гарантированно не выходит за пределы исходного отображения.

Параметры:
* stappler::SpanView::Self const& - исходное отображение
* size_t - смещение в элементах
* size_t - число элементов


# ::stappler::SpanView<typename>::operator=(memory::vector<Type> const&)

## BRIEF

Оператор копирования из вектора

## CONTENT

Доступ: public

Оператор копирования из вектора

Параметры:
* memory::vector<Type> const&

Возвращает:
* Self&

# ::stappler::SpanView<typename>::operator=(std::vector<Type> const&)

## BRIEF

Оператор копирования из вектора

## CONTENT

Доступ: public

Оператор копирования из вектора

Параметры:
* std::vector<Type> const&

Возвращает:
* Self&

# ::stappler::SpanView<typename>::operator=<size_t>(std::array<Type, Size> const&)

## BRIEF

Оператор копирования из массива

## CONTENT

Доступ: public

Оператор копирования из массива

Параметры шаблона:
* size_t Size

Параметры:
* std::array<Type, Size> const&

Возвращает:
* Self&

# ::stappler::SpanView<typename>::operator=(stappler::SpanView::Self const&)

## BRIEF

Оператор копирования

## CONTENT

Доступ: public

Оператор копирования

Параметры:
* stappler::SpanView::Self const&

Возвращает:
* Self&

# ::stappler::SpanView<typename>::set(stappler::SpanView::Type const*,size_t)

## BRIEF

Назначает блок памяти отображению

## CONTENT

Доступ: public

Назначает блок памяти отображению

Параметры:
* stappler::SpanView::Type const* - указатель на начало блока памяти
* size_t - число элементов в блоке

Возвращает:
* Self&

# ::stappler::SpanView<typename>::offset(size_t)

## BRIEF

Смещает отображение

## CONTENT

Доступ: public

Смещает отображение на несколько первых элементов от начала

Параметры:
* size_t - число элементов


# ::stappler::SpanView<typename>::data() const

## BRIEF

Возвращает указатель на отображаемый блок данных

## CONTENT

Доступ: public

Возвращает указатель на отображаемый блок данных

Возвращает:
* Type*

# ::stappler::SpanView<typename>::size() const

## BRIEF

Возвращает число эелментов в контейнере

## CONTENT

Доступ: public

Возвращает число эелментов в контейнере

Возвращает:
* size_t

# ::stappler::SpanView<typename>::begin() const

## BRIEF

Возвращает начальный итератор

## CONTENT

Доступ: public

Возвращает начальный итератор

Возвращает:
* iterator

# ::stappler::SpanView<typename>::end() const

## BRIEF

Возвращает конечный итератор

## CONTENT

Доступ: public

Возвращает конечный итератор

Возвращает:
* iterator

# ::stappler::SpanView<typename>::rbegin() const

## BRIEF

Возвращает начальный обратный итератор

## CONTENT

Доступ: public

Возвращает начальный обратный итератор

Возвращает:
* reverse_iterator

# ::stappler::SpanView<typename>::rend() const

## BRIEF

Возвращает конечный обратный итератор

## CONTENT

Доступ: public

Возвращает конечный обратный итератор

Возвращает:
* reverse_iterator

# ::stappler::SpanView<typename>::operator>(size_t const&) const

## BRIEF

Сравнивает длину контейнера с числом

## CONTENT

Доступ: public

Сравнивает длину контейнера с числом

Параметры:
* size_t const&

Возвращает:
* bool - true если размер контейнера больше числа

# ::stappler::SpanView<typename>::operator>=(size_t const&) const

## BRIEF

Сравнивает длину контейнера с числом

## CONTENT

Доступ: public

Сравнивает длину контейнера с числом

Параметры:
* size_t const&

Возвращает:
* bool - true если размер контейнера больше или равен числу

# ::stappler::SpanView<typename>::operator<(size_t const&) const

## BRIEF

Сравнивает длину контейнера с числом

## CONTENT

Доступ: public

Сравнивает длину контейнера с числом

Параметры:
* size_t const&

Возвращает:
* bool - true если размер контейнера меньше числа

# ::stappler::SpanView<typename>::operator<=(size_t const&) const

## BRIEF

Сравнивает длину контейнера с числом

## CONTENT

Доступ: public

Сравнивает длину контейнера с числом

Параметры:
* size_t const&

Возвращает:
* bool - true если размер контейнера меньше или равен числу

# ::stappler::SpanView<typename>::operator++()

## BRIEF

Смещает контейнер на один элемент вперёд

## CONTENT

Доступ: public

Смещает контейнер на один элемент вперёд, то есть, отбрасывает первый элемент

Возвращает:
* Self&

# ::stappler::SpanView<typename>::operator++(int)

## BRIEF

Смещает контейнер на один элемент вперёд

## CONTENT

Доступ: public

Смещает контейнер на один элемент вперёд, то есть, отбрасывает первый элемент

Параметры:
* int

Возвращает:
* Self

# ::stappler::SpanView<typename>::operator+=(size_t)

## BRIEF

Смещает контейнер вперёд на несколько элементов

## CONTENT

Доступ: public

Смещает контейнер вперёд на несколько элементов, то есть, отбрасывает первые несколько элементов

Параметры:
* size_t

Возвращает:
* Self&

# ::stappler::SpanView<typename>::operator==(stappler::SpanView::Self const&) const

## BRIEF

Сравнивает два контейнера

## CONTENT

Доступ: public

Сравнивает два контейнера

Параметры:
* stappler::SpanView::Self const&

Возвращает:
* bool - true если данные контейнеров совпадают

# ::stappler::SpanView<typename>::operator!=(stappler::SpanView::Self const&) const

## BRIEF

Сравнивает два контейнера

## CONTENT

Доступ: public

Сравнивает два контейнера

Параметры:
* stappler::SpanView::Self const&

Возвращает:
* bool - true если данные контейнеров не совпадают

# ::stappler::SpanView<typename>::front() const

## BRIEF

Возвращает первый элемент контейнера

## CONTENT

Доступ: public

Возвращает первый элемент контейнера. Поведение не определено для пустого контейнера.

Возвращает:
* Type&

# ::stappler::SpanView<typename>::back() const

## BRIEF

Возвращает последний элемент контейнера

## CONTENT

Доступ: public

Возвращает последний элемент контейнера. Поведение не определено для пустого контейнера.

Возвращает:
* Type&

# ::stappler::SpanView<typename>::at(size_t const&) const

## BRIEF

Возвращает элемент на определённой позиции

## CONTENT

Доступ: public

Возвращает элемент на определённой позиции. Поведение не определено, если позиция нахоидтся вне контейнера.

Параметры:
* size_t const& - индекс элемента

Возвращает:
* Type&

# ::stappler::SpanView<typename>::operator[](size_t const&) const

## BRIEF

Возвращает элемент на определённой позиции

## CONTENT

Доступ: public

Возвращает элемент на определённой позиции. Поведение не определено, если позиция нахоидтся вне контейнера.

Параметры:
* size_t const& - индекс элемента

Возвращает:
* Type&

# ::stappler::SpanView<typename>::operator*() const

## BRIEF

Возвращает первый элемент контейнера через разыменование блока памяти

## CONTENT

Доступ: public

Возвращает первый элемент контейнера через разыменование блока памяти

Возвращает:
* Type&

# ::stappler::SpanView<typename>::clear()

## BRIEF

Очищает контейнер

## CONTENT

Доступ: public

Очищает контейнер, оставляет его пустым

# ::stappler::SpanView<typename>::empty() const

## BRIEF

Проверяет контейнер на пустоту

## CONTENT

Доступ: public

Проверяет контейнер на пустоту

Возвращает:
* bool - true если контейнер пуст

# ::stappler::SpanView<typename>::first(size_t) const

## BRIEF

Возвращает отображение для нескольких первых элементов

## CONTENT

Доступ: public

Возвращает отображение для нескольких первых элементов. Гарантировано не выходит за пределы текущего отображения.

Параметры:
* size_t - число элементов

Возвращает:
* Self

# ::stappler::SpanView<typename>::last(size_t) const

## BRIEF

Возвращает отображение для нескольких последних элементов

## CONTENT

Доступ: public

Возвращает отображение для нескольких последних элементов. Гарантировано не выходит за пределы текущего отображения.

Параметры:
* size_t - число элементов с конца

Возвращает:
* Self

# ::stappler::SpanView<typename>::pop_front(size_t)

## BRIEF

Возвращает отображение для нескольких первых элементов, убирая их из исходного отображения.

## CONTENT

Доступ: public

Возвращает отображение для нескольких первых элементов, убирая их из исходного отображения. Гарантировано не выходит за пределы текущего отображения.

Параметры:
* size_t - число элементов от начала

Возвращает:
* Self

# ::stappler::SpanView<typename>::pop_back(size_t)

## BRIEF

Возвращает отображение для нескольких последних элементов, убирая их из исходного отображения.

## CONTENT

Доступ: public

Возвращает отображение для нескольких последних элементов, убирая их из исходного отображения. Гарантировано не выходит за пределы текущего отображения.

Параметры:
* size_t - число элементов с конца

Возвращает:
* Self

# ::stappler::SpanView<typename>::vec<typename>() const

## BRIEF

Конструирует новый вектор из текущего отображения

## CONTENT

Доступ: public

Конструирует новый вектор из текущего отображения

Параметры шаблона:
* typename Interface - интерфейс памяти

Возвращает:
* typename Interface::template VectorType<stappler::SpanView::Type> - новый вектор типа, определяемого интерфейсом памяти


# ::stappler::SpanView<typename>::bytes() const

## BRIEF

Возвращает байтовое отображение для текущего типизированного отображения

## CONTENT

Доступ: public

Возвращает байтовое отображение для текущего типизированного отображения

Возвращает:
* stappler::BytesView

# ::stappler::SpanView<typename>::pdup(memory::pool_t*) const

## BRIEF

Дублирует отображение в новой памяти из пула памяти

## CONTENT

Доступ: public

Дублирует отображение в новой памяти из пула памяти

Параметры:
* memory::pool_t* - пул памяти или nullptr для использования текущего контекста

Возвращает:
* Self

# ::stappler::SpanView<typename>::hash() const

## BRIEF

Возвращает хэш текущего контейнера

## CONTENT

Доступ: public

Возвращает хэш текущего контейнера

Возвращает:
* size_t

# ::stappler::SpanView<typename>::sub(size_t,size_t) const

## BRIEF

Возвращает сегмент отображения

## CONTENT

Доступ: public

Возвращает сегмент отображения. Гарантированно не выходит за границы текущего отображения.

Параметры:
* size_t - начальная позиция сегмента в элементах
* size_t - длина сегмента в элементах

Возвращает:
* Self

# ::stappler::SpanView<typename>::ptr

## BRIEF

Указатель на блок памяти отображения

## CONTENT

Доступ: protected

Указатель на блок памяти отображения

Тип: Type*


# ::stappler::SpanView<typename>::len

## BRIEF

Длина отображения в элементах

## CONTENT

Доступ: protected

Длина отображения в элементах

Тип: size_t


# ::stappler::operator<<typename>(SpanView<_Tp> const&,SpanView<_Tp> const&)

## BRIEF

Сравнивает два контейнера лексикографически

## CONTENT

Сравнивает два контейнера лексикографически

Параметры шаблона:
* typename _Tp

Параметры:
* SpanView<_Tp> const&
* SpanView<_Tp> const&

Возвращает:
* bool

# ::stappler::operator><typename>(SpanView<_Tp> const&,SpanView<_Tp> const&)

## BRIEF

Сравнивает два контейнера лексикографически

## CONTENT

Сравнивает два контейнера лексикографически

Параметры шаблона:
* typename _Tp

Параметры:
* SpanView<_Tp> const&
* SpanView<_Tp> const&

Возвращает:
* bool

# ::stappler::operator<=<typename>(SpanView<_Tp> const&,SpanView<_Tp> const&)

## BRIEF

Сравнивает два контейнера лексикографически

## CONTENT

Сравнивает два контейнера лексикографически

Параметры шаблона:
* typename _Tp

Параметры:
* SpanView<_Tp> const&
* SpanView<_Tp> const&

Возвращает:
* bool

# ::stappler::operator>=<typename>(SpanView<_Tp> const&,SpanView<_Tp> const&)

## BRIEF

Сравнивает два контейнера лексикографически

## CONTENT

Сравнивает два контейнера лексикографически

Параметры шаблона:
* typename _Tp

Параметры:
* SpanView<_Tp> const&
* SpanView<_Tp> const&

Возвращает:
* bool

# ::stappler::makeSpanView<typename>(std::vector<Type> const&)

## BRIEF

Создаёт новое отображение для вектора

## CONTENT

Создаёт новое отображение для вектора

Параметры шаблона:
* typename Type

Параметры:
* std::vector<Type> const&

Возвращает:
* SpanView<Type>

# ::stappler::makeSpanView<typename>(memory::vector<Type> const&)

## BRIEF

Создаёт новое отображение для вектора

## CONTENT

Создаёт новое отображение для вектора

Параметры шаблона:
* typename Type

Параметры:
* memory::vector<Type> const&

Возвращает:
* SpanView<Type>

# ::stappler::makeSpanView<typename,size_t>(std::array<Type, Size> const&)

## BRIEF

Создаёт новое отображение для массива

## CONTENT

Создаёт новое отображение для массива

Параметры шаблона:
* typename Type
* size_t Size

Параметры:
* std::array<Type, Size> const&

Возвращает:
* SpanView<Type>

# ::stappler::makeSpanView<typename>(Type const*,size_t)

## BRIEF

Создаёт новое отображение для блока памяти

## CONTENT

Создаёт новое отображение для блока памяти

Параметры шаблона:
* typename Type

Параметры:
* Type const*
* size_t

Возвращает:
* SpanView<Type>

# ::std::hash<stappler::SpanView<Value>>::hash<stappler::SpanView<Value>>

## BRIEF

Вспомогательный тип для испоьзования в стандартных хэш-контейнерах

## CONTENT

Вспомогательный тип для испоьзования в стандартных хэш-контейнерах

Параметры шаблона:
* typename Value


# ::std::hash<stappler::SpanView<Value>>::operator()(stappler::SpanView<Value> const&)

## BRIEF

Возаращет хэш контейнера

## CONTENT

Возаращет хэш контейнера
Параметры:
* stappler::SpanView<Value> const&

Возвращает:
* std::size_t
