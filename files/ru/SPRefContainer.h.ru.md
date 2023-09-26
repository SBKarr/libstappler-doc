Title: SPRefContainer.h


# STAPPLER_CORE_UTILS_SPREFCONTAINER_H_

## BRIEF

Заголовок контейнера для ссылок

## CONTENT

Заголовок контейнера для ссылок


# ::stappler::RefContainer<typename>

## BRIEF

Контейнер для ссылок

## CONTENT

Контейнер для ссылок. Реализует ограниченную оптимизацию малых объектов для списка ссылок.

Параметры шаблона:
* typename Item - тип хранимого значения


# ::stappler::RefContainer<typename>::Interface

## BRIEF

Тип интерфейса памяти

## CONTENT

Тип интерфейса памяти


# ::stappler::RefContainer<typename>::Vector<typename>

## BRIEF

Тип вектора

## CONTENT

Тип вектора

Параметры шаблона:
* typename T


# ::stappler::RefContainer<typename>::ReserveItems

## BRIEF

Число элементов для резервирования

## CONTENT

Число элементов для резервирования

Тип: size_t const


# ::stappler::RefContainer<typename>::ContainerSize

## BRIEF

Размер внутреннего хранилища в байтах

## CONTENT

Размер внутреннего хранилища в байтах

Тип: size_t const


# ::stappler::RefContainer<typename>::_container

## BRIEF

Внутреннее хранилище. Хранит несколько элементов или вектор элементов.

## CONTENT

Внутреннее хранилище. Хранит несколько элементов или вектор элементов.

Тип: std::array<uint8_t, ContainerSize>


# ::stappler::RefContainer<typename>::_nitems

## BRIEF

Число хранимых элементов

## CONTENT

Число хранимых элементов

Тип: size_t


# ::stappler::RefContainer<typename>::~RefContainer()

## BRIEF

Деструктор

## CONTENT

Деструктор


# ::stappler::RefContainer<typename>::RefContainer()

## BRIEF

Конструктор по умолчанию

## CONTENT

Конструктор по умолчанию


# ::stappler::RefContainer<typename>::getItemByTag(uint32_t) const

## BRIEF

Получает элемент по тегу

## CONTENT

Получает элемент по тегу

Параметры:
* uint32_t

Возвращает:
* Item* - элемент или nullptr

# ::stappler::RefContainer<typename>::addItem(Item*)

## BRIEF

Добавляет элемент в контейнер

## CONTENT

Добавляет элемент в контейнер

Параметры:
* Item*

Возвращает:
* Item*

# ::stappler::RefContainer<typename>::removeItem(Item*)

## BRIEF

Удаляет элемент из контейнера

## CONTENT

Удаляет элемент из контейнера

Параметры:
* Item*


# ::stappler::RefContainer<typename>::invalidateItemByTag(uint32_t)

## BRIEF

Инвалидирует элемент по тегу

## CONTENT

Инвалидирует элемент по тегу. Инвалидированные элементы будут удалены при очистке. Может использоваться во время итерации по контейнеру.

Параметры:
* uint32_t

Возвращает:
* bool

# ::stappler::RefContainer<typename>::invalidateAllItemsByTag(uint32_t)

## BRIEF

Инвалидирует все элементы по тегу

## CONTENT

Инвалидирует все элементы по тегу. Инвалидированные элементы будут удалены при очистке. Может использоваться во время итерации по контейнеру.

Параметры:
* uint32_t


# ::stappler::RefContainer<typename>::removeItemByTag(uint32_t)

## BRIEF

Удаляет элемент по тегу

## CONTENT

Удаляет элемент по тегу

Параметры:
* uint32_t

Возвращает:
* bool - true если элемент был удалён

# ::stappler::RefContainer<typename>::removeAllItemsByTag(uint32_t)

## BRIEF

Удаляет все элементы по тегу

## CONTENT

Удаляет все элементы по тегу

Параметры:
* uint32_t


# ::stappler::RefContainer<typename>::cleanup()

## BRIEF

Очищает контейнер от инвалидированных элементов

## CONTENT

Очищает контейнер от инвалидированных элементов

Возвращает:
* bool - true если после операции контейнер пуст

# ::stappler::RefContainer<typename>::foreach<typename>(Callback const&) const

## BRIEF

Обходит все элементы в контейнере

## CONTENT

Обходит все элементы в контейнере

Параметры шаблона:
* typename Callback

Параметры:
* Callback const&


# ::stappler::RefContainer<typename>::clear()

## BRIEF

Очищает контейнер

## CONTENT

Очищает контейнер


# ::stappler::RefContainer<typename>::empty() const

## BRIEF

Проверяет контейнер на пустоту

## CONTENT

Проверяет контейнер на пустоту

Возвращает:
* bool - true если контейнер пуст

# ::stappler::RefContainer<typename>::size() const

## BRIEF

Возвращает число элементов в контейнере

## CONTENT

Возвращает число элементов в контейнере

Возвращает:
* size_t
