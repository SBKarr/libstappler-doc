Title: SPMemPoolInterface.h


# STAPPLER_CORE_MEMORY_POOL_SPMEMPOOLINTERFACE_H_

## BRIEF

Заголовок основного интерфейса пулов памяти

## CONTENT

Заголовок основного интерфейса пулов памяти

Интерфейс пулов памяти основан на аналогичном из Apache Portable Runtime и совместим с ним, если передать соотвествующий флаг.


# ::stappler::mempool::base::pool_t

## BRIEF

Непрозрачный тип пула памяти

## CONTENT

Непрозрачный тип пула памяти

# ::stappler::mempool::base::status_t

## BRIEF

Тип результата операции с пулом памяти

## CONTENT

Тип результата операции с пулом памяти. Код ошибки или SUCCESS.


# ::stappler::mempool::base::allocator_t

## BRIEF

Непрозрачный тип аллокатора памяти для пула

## CONTENT

Непрозрачный тип аллокатора памяти для пула


# ::stappler::mempool::base::cleanup_fn

## BRIEF

Тип указателя на функцию очистки ресурса при уничтожении пула

## CONTENT

Тип указателя на функцию очистки ресурса при уничтожении пула

# ::stappler::mempool::base::PoolFlags

## BRIEF

Синоним для флагов пула памяти

## CONTENT

Синоним для флагов пула памяти


# ::stappler::mempool::base::get_mapped_regions_count()

## BRIEF

Возвращает число регионов памяти, запрошенных mmap

## CONTENT

Возвращает число регионов памяти, запрошенных mmap

Возвращает:
* size_t

# ::stappler::mempool::base::sp_mmap(void*,size_t,int,int,int,off_t)

## BRIEF

Запрашивает mmap для памяти, если доступно

## CONTENT

Запрашивает mmap для памяти, если доступно. См. mmap.

Параметры:
* void* - адрес для размещения памяти или nullptr
* size_t - длина блока памяти
* int - флаги защиты памяти
* int - флаги mmap
* int - файловый дескриптор
* off_t - смещение внутри дескриптора

Возвращает:
* void* - новый заполненный регион памяти или nullptr

# ::stappler::mempool::base::sp_munmap(void*,size_t)

## BRIEF

Расформирует наложение памяти

## CONTENT

Расформирует наложение памяти

Параметры:
* void* - адрес наложения памяти
* size_t размер сегмента памяти

Возвращает:
* int - 0 если успешно расформирован


# ::stappler::mempool::base::pool::acquire()

## BRIEF

Запрашивает текущий пул контекста потока

## CONTENT

Запрашивает текущий пул контекста потока. По умолчанию у SDK есть базовый пул для всех потоков, выделенный из аллокатора по умолчанию. Этот пул не является потокобезопасным, потому при запуске нового потока его необходимо заменить его на другой.

Возвращает:
* stappler::mempool::base::pool_t*


# ::stappler::mempool::base::pool::info()

## BRIEF

Получает информацию о текущем рабочем пуле контекста

## CONTENT

Получает информацию о текущем рабочем пуле контекста

Возвращает:
* Pair<uint32_t, const void *> - тег и вспомогательный указатель, ассоциированые с текущим пулом памяти


# ::stappler::mempool::base::pool::push(stappler::mempool::base::pool_t*)

## BRIEF

Добавляет пул на стек текущего потока 

## CONTENT

Добавляет пул на стек текущего потока 

Параметры:
* stappler::mempool::base::pool_t*


# ::stappler::mempool::base::pool::push(stappler::mempool::base::pool_t*,uint32_t,void const*)

## BRIEF

Добавляет пул на стек текущего потока с дополниетльной информацией

## CONTENT

Добавляет пул на стек текущего потока с дополниетльной информацией

Параметры:
* stappler::mempool::base::pool_t*
* uint32_t - тег пула
* void const* - вспомогательный указатель


# ::stappler::mempool::base::pool::pop()

## BRIEF

Убирает последний пул со стека текущего потока

## CONTENT

Убирает последний пул со стека текущего потока. Если убирается последний пул - происходит ошибка

# ::stappler::mempool::base::pool::foreach_info(void*,bool(*)(void*,stappler::mempool::base::pool_t*,uint32_t,void const*))

## BRIEF

Разворачивает стек пулов текущего потока

## CONTENT

Разворачивает стек пулов текущего потока. Возвращает информацию в функцию. Пулы обходятся от верхнего к нижнему

Параметры:
* void* - данные для передачи в функцию
* bool(*)(void*,stappler::mempool::base::pool_t*,uint32_t,void const*) - функция обратного вызова с информацией о пуле. Для остановки обхода нужно вернуть false.


# ::stappler::mempool::base::allocator::create(bool)

## BRIEF

Создаёт новый аллокатор для пулов памяти

## CONTENT

Создаёт новый аллокатор для пулов памяти

Параметры:
* bool - false если необходимо создать аллокатор на базе APR, если такой режим возможен

Возвращает:
* stappler::mempool::base::allocator_t* - новый аллокатор

# ::stappler::mempool::base::allocator::create(void*)

## BRIEF

Создаёт аллокатор, привязывает к нему объект мутекса

## CONTENT

Создаёт аллокатор, привязывает к нему объект мутекса. Функция доступна только для пулов APR, пулы SDK имеют мутекс автоматически.

Параметры:
* void* - указатель на созданный мутекс типа apr_thread_mutex_t

Возвращает:
* stappler::mempool::base::allocator_t*

# ::stappler::mempool::base::allocator::createWithMmap(uint32_t)

## BRIEF

Создаёт аллокатор поверх mmap

## CONTENT

Создаёт аллокатор поверх mmap, если доступно. Пулы APR не могут использовать mmap.

Параметры:
* uint32_t - число предаллоцированных страниц памяти для mmap

Возвращает:
* stappler::mempool::base::allocator_t*

# ::stappler::mempool::base::allocator::owner_set(stappler::mempool::base::allocator_t*,stappler::mempool::base::pool_t*)

## BRIEF

Привязывает аллокатор к пулу памяти.

## CONTENT

Привязывает аллокатор к пулу памяти. Связанный аллокатор будет удалён при удалении пула памяти.

Параметры:
* stappler::mempool::base::allocator_t* - аллокатор
* stappler::mempool::base::pool_t* - пул памяти


# ::stappler::mempool::base::allocator::owner_get(stappler::mempool::base::allocator_t*)

## BRIEF

Возвращает пул памяти, владеющий аллокатором

## CONTENT

Возвращает пул памяти, владеющий аллокатором

Параметры:
* stappler::mempool::base::allocator_t*

Возвращает:
* stappler::mempool::base::pool_t*

# ::stappler::mempool::base::allocator::max_free_set(stappler::mempool::base::allocator_t*,size_t)

## BRIEF

Устанавливает число страниц памяти аллокатором, пустых и кешированных аллокатором

## CONTENT

Устанавливает число страниц памяти аллокатором, пустых и кешированных аллокатором. Страницы свыше этого предела возвращаются системе.

Параметры:
* stappler::mempool::base::allocator_t*
* size_t - число страниц или ALLOCATOR_MAX_FREE_UNLIMITED


# ::stappler::mempool::base::allocator::destroy(stappler::mempool::base::allocator_t*)

## BRIEF

Уничтожает аллокатор

## CONTENT

Уничтожает аллокатор. Уничтожается вся память, выделенная аллокатором, в том числе, текущая активная память пулов. Все пулы из этого аллокатора должны быть предварительно уничтожены.

Параметры:
* stappler::mempool::base::allocator_t*


# ::stappler::mempool::base::pool::PoolFlags

## BRIEF

Синоним для флагов создания пула памяти

## CONTENT

Синоним для флагов создания пула памяти


# ::stappler::mempool::base::pool::Info

## BRIEF

Информационный тег пула памяти

## CONTENT

Информационный тег пула памяти

Значения:
* Pool - простой пул
* Request - пул текущего запроса
* Connection - пул текущего соединения
* Server - общий пул сервера
* Template - пул шаблона
* Config - общий пул конфигурации
* Task - пул асинхронного задания
* SharedObject - пул разделяемого объекта
* Socket - пул сокета
* Broadcast - пул широковещательного сообщения


# ::stappler::mempool::base::pool::initialize()

## BRIEF

Инициализирует подсистему пулов памяти глобально

## CONTENT

Инициализирует подсистему пулов памяти глобально. Подсистема автоматически инициализируется статически до вызова main или иного символа в динамической библиотеке. Однако, это может быть необходимо, если пулы памяти используются в других статических глобальных структурах, которые могут быть инициализироваться раньше пулов памяти.

Несколько вызовов initialize не являются проблемой за счёт внутреннего атомарного счётчика. Для каждого вызова initialize должен быть балансный вызов terminate. 


# ::stappler::mempool::base::pool::terminate()

## BRIEF

Деинициализирует подсистему пулов памяти глобально

## CONTENT

Деинициализирует подсистему пулов памяти глобально

# ::stappler::mempool::base::pool::create(stappler::mempool::base::pool::PoolFlags)

## BRIEF

Создаёт новый пул памяти с возможностями из флагов.

## CONTENT

Создаёт новый пул памяти с возможностями из флагов. Если система APR доступна и флаг Custom не указан - создаёт пул APR. Пулы APR не поддерживают режим ThreadPool. Пул будет нести в себе собственный аллокатор и не будет иметь пула верхнего уровня.

Параметры:
* stappler::mempool::base::pool::PoolFlags

Возвращает:
* stappler::mempool::base::pool_t*


# ::stappler::mempool::base::pool::create(stappler::mempool::base::allocator_t*,stappler::mempool::base::pool::PoolFlags)

## BRIEF

Создаёт пул на основе заранее созданого аллокатора

## CONTENT

Создаёт пул на основе заранее созданого аллокатора. Новый пул создаётся той же системой, что и аллокатор.

Параметры:
* stappler::mempool::base::allocator_t*
* stappler::mempool::base::pool::PoolFlags

Возвращает:
* stappler::mempool::base::pool_t*

# ::stappler::mempool::base::pool::create(stappler::mempool::base::pool_t*)

## BRIEF

Создаёт дочерний пул

## CONTENT

Создаёт дочерний пул. Если исходный пул nullptr - основным пулом выступает базовый пул приложения.

Параметры:
* stappler::mempool::base::pool_t*

Возвращает:
* stappler::mempool::base::pool_t*

# ::stappler::mempool::base::pool::createTagged(char const*,stappler::mempool::base::pool::PoolFlags)

## BRIEF

Создаёт новый пул памяти с возможностями из флагов.

## CONTENT

Создаёт новый пул памяти с возможностями из флагов. Если система APR доступна и флаг Custom не указан - создаёт пул APR. Пулы APR не поддерживают режим ThreadPool. Пул будет нести в себе собственный аллокатор и не будет иметь пула верхнего уровня.

Параметры:
* char const* - тег, ассоциированный с пулом памяти
* stappler::mempool::base::pool::PoolFlags

Возвращает:
* stappler::mempool::base::pool_t*


# ::stappler::mempool::base::pool::createTagged(stappler::mempool::base::pool_t*,char const*)

## BRIEF

Создаёт дочерний пул

## CONTENT

Создаёт дочерний пул. Если исходный пул nullptr - основным пулом выступает базовый пул приложения.

Параметры:
* stappler::mempool::base::pool_t*
* char const* - тег, ассоциированный с пулом памяти

Возвращает:
* stappler::mempool::base::pool_t*

# ::stappler::mempool::base::pool::destroy(stappler::mempool::base::pool_t*)

## BRIEF

Уничтожает пул памяти

## CONTENT

Уничтожает пул памяти. Все страницы памяти возвращаются аллокатору. Вызываются функции освобождения ресурсов.

Параметры:
* stappler::mempool::base::pool_t*


# ::stappler::mempool::base::pool::clear(stappler::mempool::base::pool_t*)

## BRIEF

Очищает пул памяти

## CONTENT

Очищает пул памяти. Все страницы памяти, кроме начальной, возвращаются аллокатору. Вызываются функции освобождения ресурсов.

Параметры:
* stappler::mempool::base::pool_t*


# ::stappler::mempool::base::pool::alloc(stappler::mempool::base::pool_t*,size_t&)

## BRIEF

Распределяет память из пула

## CONTENT

Распределяет память из пула

Параметры:
* stappler::mempool::base::pool_t*
* size_t& - (вход) требуемый размер в байтах, (выход) реальный размер блока в байтах

Возвращает:
* void* - распределённая память

# ::stappler::mempool::base::pool::palloc(stappler::mempool::base::pool_t*,size_t)

## BRIEF

Распределяет память из пула

## CONTENT

Распределяет память из пула

Параметры:
* stappler::mempool::base::pool_t*
* size_t - требуемый размер в байтах

Возвращает:
* void* - распределённая память

# ::stappler::mempool::base::pool::calloc(stappler::mempool::base::pool_t*,size_t,size_t)

## BRIEF

Распределяет память под несколько последовательных элемментов

## CONTENT

Распределяет память под несколько последовательных элемментов

Параметры:
* stappler::mempool::base::pool_t*
* size_t - число элементов
* size_t - размер каждого элемента

Возвращает:
* void* - распределённая память

# ::stappler::mempool::base::pool::free(stappler::mempool::base::pool_t*,void*,size_t)

## BRIEF

Возвращает респределённую ранее память пулу

## CONTENT

Возвращает респределённую ранее память пулу. Необязательный вызов. Использовать только при уверенности, что в конкретном случае такая оптимизация будет эффективна.

Параметры:
* stappler::mempool::base::pool_t*
* void* - распределённая память
* size_t - размер блока памяти


# ::stappler::mempool::base::pool::cleanup_kill(stappler::mempool::base::pool_t*,void*,stappler::mempool::base::cleanup_fn)

## BRIEF

Вызывает и убирает из списка вызовов функцию очищения объекта, выделенного из пула

## CONTENT

Вызывает и убирает из списка вызовов функцию очищения объекта, выделенного из пула

Параметры:
* stappler::mempool::base::pool_t*
* void* - объект для вызова
* stappler::mempool::base::cleanup_fn - деинициализирующая функция


# ::stappler::mempool::base::pool::cleanup_register(stappler::mempool::base::pool_t*,void*,stappler::mempool::base::cleanup_fn)

## BRIEF

Регистрирует деинициализирующую функцию.

## CONTENT

Регистрирует деинициализирующую функцию. Функция будет вызвана при очистке или удалении пула памяти

Параметры:
* stappler::mempool::base::pool_t*
* void* - объект для вызова функции
* stappler::mempool::base::cleanup_fn - деинициализирующая функция


# ::stappler::mempool::base::pool::cleanup_register(stappler::mempool::base::pool_t*,memory::function<void ()>&&)

## BRIEF

Регистрирует деинициализирующую функцию.

## CONTENT

Регистрирует деинициализирующую функцию.

Параметры:
* stappler::mempool::base::pool_t*
* memory::function<void ()>&& - деинициализирующий функтор. Аллокатор должен совпадать с пулом памяти


# ::stappler::mempool::base::pool::foreach_info(void*,bool(*)(void*,stappler::mempool::base::pool_t*,uint32_t,void const*))

## BRIEF

Разворачивает стек пулов текущего потока

## CONTENT

Разворачивает стек пулов текущего потока. Возвращает информацию в функцию. Пулы обходятся от верхнего к нижнему

Параметры:
* void* - данные для передачи в функцию
* bool(*)(void*,stappler::mempool::base::pool_t*,uint32_t,void const*) - функция обратного вызова с информацией о пуле. Для остановки обхода нужно вернуть false.


# ::stappler::mempool::base::pool::userdata_set(void const*,char const*,stappler::mempool::base::cleanup_fn,stappler::mempool::base::pool_t*)

## BRIEF

Связывает пользовательский именованный объект с пулом памяти

## CONTENT

Связывает пользовательский именованный объект с пулом памяти. Объект уничтожвается функцией-деинициализатором при очистке или уничтожении пула. Объект может быть затем получен по ключу.

Параметры:
* void const* - пользовательский объект
* char const* - имя объекта
* stappler::mempool::base::cleanup_fn - функция деинициализации объекта или nullptr.
* stappler::mempool::base::pool_t*

Возвращает:
* stappler::mempool::base::status_t - флаг успеха операции

# ::stappler::mempool::base::pool::userdata_setn(void const*,char const*,stappler::mempool::base::cleanup_fn,stappler::mempool::base::pool_t*)

## BRIEF

Связывает пользовательский именованный объект с пулом памяти

## CONTENT

Связывает пользовательский именованный объект с пулом памяти. Объект уничтожвается функцией-деинициализатором при очистке или уничтожении пула. Объект может быть затем получен по ключу. Не копирует имя объекта в пул, однако, имя должно существовать всё время жизни пула.

Параметры:
* void const* - пользовательский объект
* char const* - имя объекта
* stappler::mempool::base::cleanup_fn - функция деинициализации объекта или nullptr.
* stappler::mempool::base::pool_t*

Возвращает:
* stappler::mempool::base::status_t - флаг успеха операции


# ::stappler::mempool::base::pool::userdata_get(void**,char const*,stappler::mempool::base::pool_t*)

## BRIEF

Получает пользовательский объект по имени

## CONTENT

Получает пользовательский объект по имени

Параметры:
* void** - указатель для возврата объекта. Будет заполнен объектом в случае успеха
* char const* - имя объекта
* stappler::mempool::base::pool_t*

Возвращает:
* stappler::mempool::base::status_t - флаг успеха операции

# ::stappler::mempool::base::pool::userdata_get(void**,char const*,size_t,stappler::mempool::base::pool_t*)

## BRIEF

Получает пользовательский объект по имени

## CONTENT

Получает пользовательский объект по имени

Параметры:
* void** - указатель для возврата объекта. Будет заполнен объектом в случае успеха
* char const* - имя объекта
* size_t - длина имени объекта
* stappler::mempool::base::pool_t*

Возвращает:
* stappler::mempool::base::status_t - флаг успеха операции


# ::stappler::mempool::base::pool::get_allocator(stappler::mempool::base::pool_t*)

## BRIEF

Получает аллокатор для пула памяти

## CONTENT

Получает аллокатор для пула памяти

Параметры:
* stappler::mempool::base::pool_t*

Возвращает:
* stappler::mempool::base::allocator_t*

# ::stappler::mempool::base::pool::pmemdup(stappler::mempool::base::pool_t*,void const*,size_t)

## BRIEF

Дублирует память с использованием пула

## CONTENT

Дублирует память с использованием пула

Параметры:
* stappler::mempool::base::pool_t*
* void const* - указатель на начало облести памяти
* size_t - развер области памяти

Возвращает:
* void* - выделенный из пула блок памяти

# ::stappler::mempool::base::pool::pstrdup(stappler::mempool::base::pool_t*,char const*)

## BRIEF

Дублирует строку с использованием пула

## CONTENT

Дублирует строку с использованием пула

Параметры:
* stappler::mempool::base::pool_t*
* char const*  - строка для дублирования

Возвращает:
* char* - дублированная строка


# ::stappler::mempool::base::pool::isThreadSafeForAllocations(stappler::mempool::base::pool_t*)

## BRIEF

Проверяет пул на потокобезопасность при аллокациях

## CONTENT

Проверяет пул на потокобезопасность при аллокациях

Параметры:
* stappler::mempool::base::pool_t*

Возвращает:
* bool - true если безопасно распределять память из пула в нескольких потоках одновременно

# ::stappler::mempool::base::pool::isThreadSafeAsParent(stappler::mempool::base::pool_t*)

## BRIEF

Проверяет пул на потокобезопасность при создании дочерних пулов

## CONTENT

Проверяет пул на потокобезопасность при создании дочерних пулов

Параметры:
* stappler::mempool::base::pool_t*

Возвращает:
* bool - true если безопасно создавать новые пулы из переданного в других потоках

# ::stappler::mempool::base::pool::get_tag(stappler::mempool::base::pool_t*)

## BRIEF

Возвращает тег пула

## CONTENT

Возвращает тег пула

Параметры:
* stappler::mempool::base::pool_t*

Возвращает:
* char const*

# ::stappler::mempool::base::pool::get_allocated_bytes(stappler::mempool::base::pool_t*)

## BRIEF

Возвращает число распределённых из пула байт (только при отладке)

## CONTENT

Возвращает число распределённых из пула байт (только при отладке)

Параметры:
* stappler::mempool::base::pool_t*

Возвращает:
* size_t

# ::stappler::mempool::base::pool::get_return_bytes(stappler::mempool::base::pool_t*)

## BRIEF

Возвращает число байт, оптимизированных за счёт возвратной оптимизации (только при отладке)

## CONTENT

Возвращает число байт, оптимизированных за счёт возвратной оптимизации (только при отладке)

Параметры:
* stappler::mempool::base::pool_t*

Возвращает:
* size_t

# ::stappler::mempool::base::pool::get_active_count()

## BRIEF

Возвращает число активных пулов памяти

## CONTENT

Возвращает число активных пулов памяти

Возвращает:
* size_t

# ::stappler::mempool::base::pool::debug_begin(stappler::mempool::base::pool_t*)

## BRIEF

Активирует отладку для дочерних пулов исходного (только при отладке)

## CONTENT

Активирует отладку для дочерних пулов исходного (только при отладке). Собирает информацию о числе распределённых байт, адресах станиц памяти и стеке вызовов на момент создания пула.

Параметры:
* stappler::mempool::base::pool_t*

Возвращает:
* bool

# ::stappler::mempool::base::pool::debug_end()

## BRIEF

Отключает отладку для дочерних пулов исходного (только при отладке)

## CONTENT

Отключает отладку для дочерних пулов исходного (только при отладке), возвращает собранную информацию

Возвращает:
* std::map<pool_t *, const char **, std::less<void>>

# ::stappler::mempool::base::pool::debug_foreach(void*,void(*)(void*,stappler::mempool::base::pool_t*))

## BRIEF

Отображает собранную отладочную информацию, перечисляет затронутые пулы памяти

## CONTENT

Отображает собранную отладочную информацию, перечисляет затронутые пулы памяти

Параметры:
* void*
* void(*)(void*,stappler::mempool::base::pool_t*)
