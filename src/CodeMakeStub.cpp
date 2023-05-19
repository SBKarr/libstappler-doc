/**
 Copyright (c) 2023 Stappler LLC <admin@stappler.dev>

 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated documentation files (the "Software"), to deal
 in the Software without restriction, including without limitation the rights
 to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 copies of the Software, and to permit persons to whom the Software is
 furnished to do so, subject to the following conditions:

 The above copyright notice and this permission notice shall be included in
 all copies or substantial portions of the Software.

 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 THE SOFTWARE.
 **/

#include "Serialize.h"

namespace stappler::doc {

static void addSymbol(Vector<SymbolInfo> &names, StringView name, StringView access, StringStream &out) {
	names.emplace_back(SymbolInfo{name.str<Interface>(), access.str<Interface>()});

	out << "\n\n# " << name << "\n\n## BRIEF\n\n## CONTENT\n";
	if (!access.empty()) {
		out << "\nДоступ: " << access << "\n";
	}
}

static void processValue(Vector<SymbolInfo> &names, StringView context, String &access, const Value &val, StringStream &out, const Value &tpl = Value()) {
	auto kind = val.getString("kind");

	if (kind == "file" || kind == "macro parameter" || kind == "include directive" || kind == "language linkage"
			|| kind == "using directive" || kind == "using declaration") {
		return;
	} else if (kind == "namespace") {
		for (auto &child : val.getArray("childs")) {
			access = String();
			processValue(names, val.getString("_fullName"), access, child, out);
		}
	} else if (kind == "macro definition") {
		addSymbol(names, val.getString("_fullName"), access, out);
		if (val.getBool("is_function_like") && val.isArray("childs")) {
			out << "\nПараметры:\n";
			for (auto &child : val.getArray("childs")) {
				processValue(names, context, access, child, out);
			}
		}
	} else if (kind == "namespace alias") {
		auto fullName = toString(context, "::", val.getString("name"));
		addSymbol(names, fullName, access, out);
	} else if (kind == "type alias") {
		addSymbol(names, val.getString("_fullName"), access, out);
		if (tpl && tpl.isArray("parameters")) {
			out << "\nПараметры шаблона:\n";
			for (auto &child : tpl.getArray("parameters")) {
				processValue(names, val.getString("_fullName"), access, child, out);
			}
		}
	} else if (kind == "enum") {
		addSymbol(names, val.getString("_fullName"), access, out);

		out << "\nЗначения:\n";
		for (auto &child : val.getArray("childs")) {
			processValue(names, context, access, child, out);
		}
	} else if (kind == "macro parameter" || kind == "enum value") {
		out << "* " << val.getString("name") << "\n";
	} else if (kind == "class") {
		if (!val.getBool("is_definition")) {
			return;
		}

		addSymbol(names, val.getString("_fullName"), access, out);

		if (tpl && tpl.isArray("parameters")) {
			out << "\nПараметры шаблона:\n";
			for (auto &child : tpl.getArray("parameters")) {
				processValue(names, val.getString("_fullName"), access, child, out);
			}
		}
		if (val.isArray("bases")) {
			out << "\nБазовые классы:\n";
			for (auto &child : val.getArray("bases")) {
				out << "* " << child.getString("name") << "\n";
			}
		}

		String tmpAccess = access;
		access = String();
		for (auto &child : val.getArray("childs")) {
			processValue(names, val.getString("_fullName"), access, child, out);
		}
		access = tmpAccess;
	} else if (kind == "access specifier") {
		access = val.getString("access_specifier");
	} else if (kind == "base class specifier") {
	} else if (kind == "variable" || kind == "member variable" || kind == "bit field") {
		addSymbol(names, val.getString("_fullName"), access, out);

		if (val.isDictionary("type")) {
			out << "\nТип: " << val.getValue("type").getString("_typeName") << "\n";
		}
	} else if (kind == "function parameter") {
	} else if (kind == "function" || kind == "constructor" || kind == "destructor" || kind == "member function"
			|| kind == "conversion operator") {
		addSymbol(names, val.getString("_fullName"), access, out);
		if (tpl && tpl.isArray("parameters")) {
			out << "\nПараметры шаблона:\n";
			for (auto &child : tpl.getArray("parameters")) {
				processValue(names, val.getString("_fullName"), access, child, out);
			}
		}
		if (val.isArray("parameters")) {
			out << "\nПараметры:\n";
			for (auto &child : val.getArray("parameters")) {
				auto &type = child.getValue("type");
				if (type.isDictionary()) {
					out << "* " << type.getString("_typeName") << "\n";
				}
			}
		}
		if (val.isDictionary("return_type")) {
			if (val.getValue("return_type").getString("_typeName") != "void") {
				out << "\nВозвращает:\n* " << val.getValue("return_type").getString("_typeName");
			}
		}
	} else if (kind == "friend") {
	} else if (kind == "template type parameter") {
		out << "* " << val.getString("keyword") << " " << val.getString("name") << "\n";
	} else if (kind == "non type template parameter") {
		out << "* " << val.getValue("type").getString("_typeName") << " " << val.getString("name") << "\n";
	} else if (kind == "template template parameter") {
		out << "* template " << val.getString("name") << "\n";
	} else if (kind == "function template" || kind == "variable template" || kind == "alias template"
			|| kind == "function template specialization" || kind == "class template" || kind == "class template specialization") {
		for (auto &child : val.getArray("childs")) {
			processValue(names, val.getString("_fullName"), access, child, out, val);
		}
	} else if (kind == "concept") {
	} else if (kind == "static_assert") {
	} else if (kind == "unexposed entity") {

	}
}

void writeStub(StringView out, SymbolsInfo &info, const Value &val) {
	String outPath = toString(out, "/stub");
	filesystem::mkdir(outPath);

	auto name = val.getString("name");
	auto fname = filepath::lastComponent(name);

	auto filepath = toString(outPath, "/", fname, ".ru.md");
	filesystem::remove(filepath);

	auto it = info.names.find(fname);
	if (it == info.names.end()) {
		String str = fname.str<Interface>();
		it = info.names.emplace(str, Vector<SymbolInfo>()).first;
	}

	std::cout << name << "\n";

	StringStream outData;
	outData << "Title: " << fname << "\n";
	String access;
	for (auto &child : val.getArray("childs")) {
		processValue(it->second, "::", access, child, outData);
	}

	filesystem::write(filepath, outData.str());
}

void writeMap(SymbolsInfo &info, const Value &val) {
	auto name = val.getString("name");
	auto fname = filepath::lastComponent(name);

	auto it = info.names.find(fname);
	if (it == info.names.end()) {
		String str = fname.str<Interface>();
		it = info.names.emplace(str, Vector<SymbolInfo>()).first;
	}

	std::cout << name << "\n";

	StringStream outData;
	String access;
	for (auto &child : val.getArray("childs")) {
		processValue(it->second, "::", access, child, outData);
	}
}

}
