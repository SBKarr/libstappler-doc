Title: Подсистема памяти

# Подсистема памяти

Для использования подсистемы памяти включается `SPMemory.h`

## Выбор подсистемы памяти

SDK реализует две системы памяти. Первая основана на стандартных контейнерах. Вторая на подсистеме пулов памяти.

Функции, использующие динамическую память (например, `data::read`), могут предлагать выбор интерфейса памяти в качестве шаблона с именем `Interface`. В качестве интерфейса могут использоваться типы `PoolInterface` и `StandartInterface`.

Пространство имён могут импортировать одну из подсистем памяти для удобного использования. Для этого нужно подключить соотвествующее пространство имён:

```cpp
using namespace mem_std;
// или
using manespace mem_pool;
```

Пространства имён реализуют псевдонимы для набора типов, используемых единообразно. Базовый интерфейс контейнеров идентичен.

Для `mem_pool`:

```cpp
using String = stappler::memory::string;
using WideString = stappler::memory::u16string;
using Bytes = stappler::memory::vector<uint8_t>;

using StringStream = stappler::memory::ostringstream;
using OutputStream = std::ostream;

template <typename T>
using Vector = stappler::memory::vector<T>;

template <typename K, typename V, typename Compare = std::less<void>>
using Map = stappler::memory::map<K, V, Compare>;

template <typename T, typename Compare = std::less<void>>
using Set = stappler::memory::set<T, Compare>;

template <typename T>
using Function = stappler::memory::function<T>;
```

Для `mem_std`:

```cpp
using String = std::string;
using WideString = std::u16string;
using Bytes = std::vector<uint8_t>;

using StringStream = std::stringstream;
using OutputStream = std::ostream;

template <typename T>
using Vector = std::vector<T>;

template <typename K, typename V, typename Compare = std::less<void>>
using Map = std::map<K, V, Compare>;

template <typename T, typename Compare = std::less<void>>
using Set = std::set<T, Compare>;

template <typename T, typename V>
using HashMap = std::unordered_map<T, V, std::hash<T>, std::equal_to<T>>;

template <typename T>
using HashSet = std::unordered_set<T, std::hash<T>, std::equal_to<T>, std::allocator<T>>;

template <typename T>
using Function = std::function<T>;
```

## Пулы памяти

Подсистема основана на реализации пулов памяти в [APR](https://apr.apache.org/docs/apr/1.7/group__apr__pools.html)

Ключевые функции:

```cpp
namespace stappler::memory::pool {

pool_t *acquire(); // получает текущий активный пул

void push(pool_t *); // устанавливает текущий активный пул
void pop(); // возвращает предыдущий активный пул

pool_t *create(PoolFlags = PoolFlags::Default); // создаёт корневой пул
pool_t *create(allocator_t *, PoolFlags = PoolFlags::Default); // создаёт корневой пул с аллокатором

pool_t *create(pool_t *); // создаёт пул с корневым пулом, такой пул удаляется вместе с корневым

void destroy(pool_t *); // уничтожает пул
void clear(pool_t *); // очищает память пула

void *alloc(pool_t *, size_t &); // распределяет память из пула

}
```

Когда память пула очищается (при очистке или удалении), контейнеры на основе этих пулов памяти становятся невалидными, доступ к ним вызывает повреждение памяти. Смена текущего пула памяти на это не влияет. Контейнеры, созданные без явного указания аллокатора, используют текущий активный пул из контекста.

Для удобства работы созданы функции:

```cpp
// создаёт временный пул для операции
mem_pool::perform_temporary([&] {

});

// выполняет операцию с заданным пулом памяти
mem_pool::perform([&] {

}, pool);
```

В таком случае, все контейнеры внутри вызова будут корректно удалены после завершения вызова.

Альтернативно, можно использовать RAII структуру `mem_pool::context`, которая поддерживает пул на стеке выполнения на момент своего существования.

Пулы памяти предназначены, в первую очередь, для экономии ресурсов при локальных операциях. Хороший подход предполагает, что пул памяти используется в цикле обработке, и очищается после каждого такта. После завершения обработки удаляется. Повторное использование пулов для однотипных операций выгодно.

```cpp
auto operationPool = memory::pool::create(memory::pool::acquire());

for (auto &it : data) {
	mem_pool::perform([&] {
		// полезная нагрузка
	}, operationPool);
	memory::pool::clear(operationPool);
}

memory::pool::destroy(operationPool);
```
