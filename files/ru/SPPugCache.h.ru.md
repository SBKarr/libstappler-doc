Title: SPPugCache.h


# EXTRA_WEBSERVER_PUG_SPPUGCACHE_H_

## BRIEF

Заголовок кеша шаблонизатора

## CONTENT

Заголовок кеша шаблонизатора


# ::stappler::pug::FileRef

## BRIEF

Тип активного файла, из которого считывается шаблон

## CONTENT

Тип активного файла, из которого считывается шаблон

Базовые классы:
* RefBase<memory::PoolInterface>


# ::stappler::pug::FileRef::read(memory::pool_t*,stappler::FilePath,Template::Options,Callback<void (const stappler::StringView &)> const&,int,int)

## BRIEF

Читает файл с диска по заданному пути

## CONTENT

Доступ: public

Читает файл с диска по заданному пути

Параметры:
* memory::pool_t* - используемый пул памяти
* stappler::FilePath - путь к файлу
* Template::Options - флаги шаблона
* Callback<void (const stappler::StringView &)> const& - функция сообщения об ошибке
* int - индекс файла наблюдения (или -1 если не поддерживается)
* int - индекс открытого файла (или -1 если не поддерживается)

Возвращает:
* Rc<stappler::pug::FileRef>

# ::stappler::pug::FileRef::read(memory::pool_t*,stappler::pug::String&&,bool,Template::Options,Callback<void (const stappler::StringView &)> const&)

## BRIEF

Читает файл из строки

## CONTENT

Доступ: public

Читает файл из строки

Параметры:
* memory::pool_t* - используемый пул памяти
* stappler::pug::String&& - данные шаблона
* bool - true если файл это шаблон, false если текстовый файл
* Template::Options - флаги шаблона
* Callback<void (const stappler::StringView &)> const& - функция сообщения об ошибке

Возвращает:
* Rc<stappler::pug::FileRef>

# ::stappler::pug::FileRef::getContent() const

## BRIEF

Возвращает содержимое файла в виде текста

## CONTENT

Доступ: public

Возвращает содержимое файла в виде текста

Возвращает:
* stappler::pug::String const&

# ::stappler::pug::FileRef::getTemplate() const

## BRIEF

Возвращает прочитанный шаблон

## CONTENT

Доступ: public

Возвращает прочитанный шаблон

Возвращает:
* stappler::pug::Template const*

# ::stappler::pug::FileRef::getWatch() const

## BRIEF

Возвращает файл наблюдения

## CONTENT

Доступ: public

Возвращает файл наблюдения

Возвращает:
* int

# ::stappler::pug::FileRef::getMtime() const

## BRIEF

Возвращает время последнего изменения файла

## CONTENT

Доступ: public

Возвращает время последнего изменения файла

Возвращает:
* stappler::Time

# ::stappler::pug::FileRef::isValid() const

## BRIEF

Проверяет, что файл существует и годен для использования

## CONTENT

Доступ: public

Проверяет, что файл существует и годен для использования

Возвращает:
* bool

# ::stappler::pug::FileRef::getOpts() const

## BRIEF

Возвращает флаги шаблона

## CONTENT

Доступ: public

Возвращает флаги шаблона

Возвращает:
* Template::Options const&

# ::stappler::pug::FileRef::regenerate(int,stappler::StringView)

## BRIEF

Обновляет режим наблюдения для файла

## CONTENT

Доступ: public

Обновляет режим наблюдения для файла

Параметры:
* int - новый файл наблюдения
* stappler::StringView - путь для наблюдения

Возвращает:
* int - новый идентификатор наблюдения

# ::stappler::pug::FileRef::FileRef(memory::pool_t*,stappler::FilePath const&,Template::Options,Callback<void (const stappler::StringView &)> const&,int,int)

## BRIEF

Создаёт новый файл шаблона

## CONTENT

Доступ: public

Создаёт новый файл шаблона

Параметры:
* memory::pool_t* - пул памяти
* stappler::FilePath const& - путь к файлу
* Template::Options - флаги шаблона
* Callback<void (const stappler::StringView &)> const& - функция сообщения об ошибке
* int - файл наблюдения
* int - индекс открытого файла


# ::stappler::pug::FileRef::FileRef(memory::pool_t*,stappler::pug::String&&,bool,Template::Options,Callback<void (const stappler::StringView &)> const&)

## BRIEF

Создаёт новый файл шаблона

## CONTENT

Доступ: public

Создаёт новый файл шаблона

Параметры:
* memory::pool_t* - пул памяти
* stappler::pug::String&& - содержимое файла
* bool - true если файл это шаблон
* Template::Options - флаги шаблона
* Callback<void (const stappler::StringView &)> const& - функция сообщения об ошибке


# ::stappler::pug::FileRef::~FileRef()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор


# ::stappler::pug::FileRef::_watch

## BRIEF

Файл наблюдения

## CONTENT

Доступ: protected

Файл наблюдения

Тип: int


# ::stappler::pug::FileRef::_pool

## BRIEF

Пул памяти

## CONTENT

Доступ: protected

Пул памяти

Тип: memory::pool_t*


# ::stappler::pug::FileRef::_mtime

## BRIEF

Время последнего изменения файла

## CONTENT

Доступ: protected

Время последнего изменения файла

Тип: stappler::Time


# ::stappler::pug::FileRef::_content

## BRIEF

Содержимое файла

## CONTENT

Доступ: protected

Содержимое файла

Тип: stappler::pug::String


# ::stappler::pug::FileRef::_template

## BRIEF

Загруженный шаблон

## CONTENT

Доступ: protected

Загруженный шаблон

Тип: stappler::pug::Template*


# ::stappler::pug::FileRef::_opts

## BRIEF

Флаги шаблона

## CONTENT

Доступ: protected

Флаги шаблона

Тип: Template::Options


# ::stappler::pug::FileRef::_valid

## BRIEF

Флаг работоспособности файла

## CONTENT

Доступ: protected

Флаг работоспособности файла

Тип: bool


# ::stappler::pug::Cache

## BRIEF

Класс кеша файлов шаблонов

## CONTENT

Класс кеша файлов шаблонов. Кеш отслеживает и обновляет активные файлы шаблонов и вспомогательные текстовые файлы.

Базовые классы:
* memory::AllocPool


# ::stappler::pug::Cache::RunCallback

## BRIEF

Функция для запуска шаблона

## CONTENT

Доступ: public

Функция для запуска шаблона


# ::stappler::pug::Cache::Options

## BRIEF

Тип флагов шаблона

## CONTENT

Доступ: public

Тип флагов шаблона

# ::stappler::pug::Cache::Cache(Template::Options,Function<void (const stappler::StringView &)> const&)

## BRIEF

Инициализирует кеш

## CONTENT

Доступ: public

Инициализирует кеш

Параметры:
* Template::Options - общие используемые флаги
* Function<void (const stappler::StringView &)> const& - функция сообщения об ошибке


# ::stappler::pug::Cache::~Cache()

## BRIEF

Деструктор

## CONTENT

Доступ: public

Деструктор

# ::stappler::pug::Cache::runTemplate(stappler::StringView const&,stappler::pug::Cache::RunCallback const&,std::ostream&)

## BRIEF

Запускает шаблон по имени

## CONTENT

Доступ: public

Запускает шаблон по имени

Параметры:
* stappler::StringView const& - имя шаблона
* stappler::pug::Cache::RunCallback const& - функция запуска шаблона
* std::ostream& - поток для записи результата

Возвращает:
* bool - true если успешно

# ::stappler::pug::Cache::runTemplate(stappler::StringView const&,stappler::pug::Cache::RunCallback const&,std::ostream&,Template::Options)

## BRIEF

Запускает шаблон по имени

## CONTENT

Доступ: public

Запускает шаблон по имени

Параметры:
* stappler::StringView const& - имя шаблона
* stappler::pug::Cache::RunCallback const& - функция запуска шаблона
* std::ostream& - поток для записи результата
* Template::Options - флаги для запуска шаблона

Возвращает:
* bool - true если успешно

# ::stappler::pug::Cache::addFile(stappler::StringView)

## BRIEF

Добавляет файл шаблона в кеш шаблонов

## CONTENT

Доступ: public

Добавляет файл шаблона в кеш шаблонов

Параметры:
* stappler::StringView

Возвращает:
* bool - true если успешно

# ::stappler::pug::Cache::addContent(stappler::StringView,stappler::pug::String&&)

## BRIEF

Добавляет текстовый файл в кеш шаблона

## CONTENT

Доступ: public

Добавляет текстовый файл в кеш шаблона

Параметры:
* stappler::StringView - имя файла
* stappler::pug::String&& - содержимое файла

Возвращает:
* bool - true если успешно

# ::stappler::pug::Cache::addTemplate(stappler::StringView,stappler::pug::String&&)

## BRIEF

Добавляет файл шаблона в кеш шаблонов

## CONTENT

Доступ: public

Добавляет файл шаблона в кеш шаблонов

Параметры:
* stappler::StringView - имя файла
* stappler::pug::String&& - содержимое файла

Возвращает:
* bool - true если успешно

# ::stappler::pug::Cache::addTemplate(stappler::StringView,stappler::pug::String&&,Template::Options)

## BRIEF

Добавляет файл шаблона в кеш шаблонов

## CONTENT

Доступ: public

Добавляет файл шаблона в кеш шаблонов

Параметры:
* stappler::StringView - имя файла
* stappler::pug::String&& - содержимое файла
* Template::Options - флаги шаблона

Возвращает:
* bool - true если успешно

# ::stappler::pug::Cache::get(stappler::StringView const&) const

## BRIEF

Возвращает файл в кеше по имени

## CONTENT

Доступ: public

Возвращает файл в кеше по имени

Параметры:
* stappler::StringView const& - имя файла

Возвращает:
* Rc<stappler::pug::FileRef>

# ::stappler::pug::Cache::update(int,bool)

## BRIEF

Обновляет файлы в кеше шаблонов

## CONTENT

Доступ: public

Обновляет файлы в кеше шаблонов с помощью файла наблюдения

Параметры:
* int - файл наблюдения
* bool - true если файл наблюдения неободимо перезаписать


# ::stappler::pug::Cache::update(memory::pool_t*)

## BRIEF

Обновляет файлы в кеше шаблонов

## CONTENT

Доступ: public

Обновляет файлы в кеше шаблонов на основе времени последнего изменения

Параметры:
* memory::pool_t* - используемый в обновлении пул памяти


# ::stappler::pug::Cache::getNotify() const

## BRIEF

Возвращает текущий файл наблюдения

## CONTENT

Доступ: public

Возвращает текущий файл наблюдения

Возвращает:
* int

# ::stappler::pug::Cache::isNotifyAvailable()

## BRIEF

Проверяет, доступен ли режим работы с файлом наблюдения

## CONTENT

Доступ: public

Проверяет, доступен ли режим работы с файлом наблюдения

Возвращает:
* bool

# ::stappler::pug::Cache::acquireTemplate(stappler::StringView,bool,Template::Options const&)

## BRIEF

Читает файл шаблона

## CONTENT

Доступ: protected

Читает файл шаблона

Параметры:
* stappler::StringView
* bool
* Template::Options const&

Возвращает:
* Rc<stappler::pug::FileRef>

# ::stappler::pug::Cache::openTemplate(stappler::StringView,int,Template::Options const&)

## BRIEF

Открывает файл шаблона

## CONTENT

Доступ: protected

Открывает файл шаблона

Параметры:
* stappler::StringView
* int
* Template::Options const&

Возвращает:
* Rc<stappler::pug::FileRef>

# ::stappler::pug::Cache::runTemplate(Rc<stappler::pug::FileRef>,stappler::StringView,stappler::pug::Cache::RunCallback const&,std::ostream&,Template::Options)

## BRIEF

Запускает шаблон

## CONTENT

Доступ: protected

Запускает шаблон

Параметры:
* Rc<stappler::pug::FileRef>
* stappler::StringView
* stappler::pug::Cache::RunCallback const&
* std::ostream&
* Template::Options

Возвращает:
* bool

# ::stappler::pug::Cache::onError(stappler::StringView const&)

## BRIEF

Функция сообщения об ошибке добавления и сборки шаблона

## CONTENT

Доступ: protected

Функция сообщения об ошибке добавления и сборки шаблона

Параметры:
* stappler::StringView const&


# ::stappler::pug::Cache::_inotify

## BRIEF

Файл наблюдения

## CONTENT

Доступ: protected

Файл наблюдения

Тип: int


# ::stappler::pug::Cache::_inotifyAvailable

## BRIEF

Доступен ли файл наблюдения

## CONTENT

Доступ: protected

Доступен ли файл наблюдения

Тип: bool


# ::stappler::pug::Cache::_pool

## BRIEF

Базовый пул памяти

## CONTENT

Доступ: protected

Базовый пул памяти

Тип: memory::pool_t*


# ::stappler::pug::Cache::_mutex

## BRIEF

Мутекс

## CONTENT

Доступ: protected

Мутекс

Тип: stappler::pug::Mutex


# ::stappler::pug::Cache::_templates

## BRIEF

Набор шаблнов в кеше

## CONTENT

Доступ: protected

Набор шаблнов в кеше

Тип: Map<stappler::StringView, Rc<stappler::pug::FileRef>>


# ::stappler::pug::Cache::_watches

## BRIEF

Набор файлов под наблюдением

## CONTENT

Доступ: protected

Набор файлов под наблюдением

Тип: Map<int, stappler::StringView>


# ::stappler::pug::Cache::_opts

## BRIEF

Флаги шаблона по умолчанию

## CONTENT

Доступ: protected

Флаги шаблона по умолчанию

Тип: Template::Options


# ::stappler::pug::Cache::_errorCallback

## BRIEF

Функция сообщения об ошибках

## CONTENT

Доступ: protected

Функция сообщения об ошибках

Тип: Function<void (const stappler::StringView &)>
