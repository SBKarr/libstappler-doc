Title: Шаблонизатор Pug

# Шаблонизатор Pug

Шаблонизатор (`stappler_webserver_pug`) использует формат [Pug](https://pugjs.org/api/getting-started.html). Использует интерфейс пулов памяти.

Не поддерживается наследование шаблонов в любом виде. Все остальные функции поддерживаются с ограничением в виде отсутсвия Javascript (доступны только простейшие операции).

Для работы создаётся кеш шаблонов `pug::Cache` (вебсервер предоставляет его как часть хоста `web::Host`). После, в него добавляются шаблоны и файлы, которые могут клчаться шаблонами (см. tests/common/src/PugTest.cpp).

```cpp
	_cache = new (p) pug::Cache(pug::Template::Options::getDefault(), [&] (StringView err) {
		onError(err);
	});

	_cache->addContent(StringView("include.css"), s_cssData.str<mem_pool::Interface>());
	_cache->addTemplate(StringView("include1.pug"), s_templateData1.str<mem_pool::Interface>());
	_cache->addTemplate(StringView("include2.pug"), s_templateData2.str<mem_pool::Interface>(), opts);

	_cache->addTemplate(StringView("err1.pug"), s_err1.str<mem_pool::Interface>());
	_cache->addTemplate(StringView("err2.pug"), s_err2.str<mem_pool::Interface>());
```

При запуске шаблона нужно заполнить объект `pug::Context` текущими данными:

```cpp
	_cache->runTemplate(path, [] (pug::Context &exec, const pug::Template &) {
		pug::VarClass serenityClass;
		serenityClass.staticFunctions.emplace("prettify", [] (pug::VarStorage &, pug::Var *var, size_t argc) -> pug::Var {
			if (var && argc == 1) {
				return pug::Var(Value(data::toString(var->readValue(), true)));
			}
			return pug::Var();
		});
		serenityClass.staticFunctions.emplace("timeToHttp", [] (pug::VarStorage &, pug::Var *var, size_t argc) -> pug::Var {
			if (var && argc == 1 && var->readValue().isInteger()) {
				return pug::Var(Value(Time::microseconds(var->readValue().asInteger()).toHttp<Interface>()));
			}
			return pug::Var();
		});
		serenityClass.staticFunctions.emplace("uuidToString", [] (pug::VarStorage &, pug::Var *var, size_t argc) -> pug::Var {
			if (var && argc == 1 && var->readValue().isBytes()) {
				return pug::Var(Value(memory::uuid(var->readValue().getBytes()).str()));
			}
			return pug::Var();
		});
		ctx.set("serenity", std::move(serenityClass));
		ctx.set("window", Value{
			pair("location", Value({
				pair("href", Value(toString(getFullHostname(), info.unparserUri))),
				pair("hostname", Value(info.url.host)),
				pair("pathname", Value(info.url.path)),
				pair("protocol", Value(_config->isSecureConnection() ? "https:" : "http:")),
			}))
		});
		return true;
	}, [&] (StringView str) {
		std::cout << str;
	});
```

Опции шаблона `pug::Template::Options` определяют параметры работы шаблонизатора. Режим `Pretty` заставляет выводить человекочитаемый код.
