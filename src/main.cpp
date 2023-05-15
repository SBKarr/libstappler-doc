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

#include "SPCommon.h"
#include "SPFilesystem.h"
#include "SPData.h"
#include "Serialize.h"

#include <cppast/code_generator.hpp> // code_generator, generate_code()
#include <cppast/visitor.hpp>        // visit()
#include <cppast/libclang_parser.hpp>
#include <cppast/cpp_alias_template.hpp>
#include <cppast/cpp_class.hpp>
#include <cppast/cpp_class_template.hpp>
#include <cppast/cpp_concept.hpp>
#include <cppast/cpp_entity_kind.hpp>
#include <cppast/cpp_enum.hpp>
#include <cppast/cpp_file.hpp>
#include <cppast/cpp_friend.hpp>
#include <cppast/cpp_function.hpp>
#include <cppast/cpp_function_template.hpp>
#include <cppast/cpp_language_linkage.hpp>
#include <cppast/cpp_member_function.hpp>
#include <cppast/cpp_member_variable.hpp>
#include <cppast/cpp_namespace.hpp>
#include <cppast/cpp_preprocessor.hpp>
#include <cppast/cpp_static_assert.hpp>
#include <cppast/cpp_template_parameter.hpp>
#include <cppast/cpp_token.hpp>
#include <cppast/cpp_type_alias.hpp>
#include <cppast/cpp_variable.hpp>
#include <cppast/cpp_variable_template.hpp>
#include <cppast/cpp_decltype_type.hpp>
#include <cppast/cpp_array_type.hpp>
#include <cppast/cpp_function_type.hpp>
#include <cppast/cpp_decltype_type.hpp>

// don't show in code generation
bool is_excluded_synopsis(const cppast::cpp_entity &e, cppast::cpp_access_specifier_kind access) {
	// exclude privates and those marked for exclusion
	return access == cppast::cpp_private || cppast::has_attribute(e, "documentation::exclude");
}

// don't show in documentation
bool is_excluded_documentation(const cppast::cpp_entity &e, const cppast::cpp_access_specifier_kind access) {
	// exclude uninteresting entities
	return e.kind() == cppast::cpp_entity_kind::access_specifier_t || e.kind() == cppast::cpp_entity_kind::using_declaration_t || e.kind() == cppast::cpp_entity_kind::using_directive_t
			|| e.kind() == cppast::cpp_entity_kind::static_assert_t || e.kind() == cppast::cpp_entity_kind::include_directive_t
			// and all excluded in synopsis
			|| is_excluded_synopsis(e, access);
}

// generates synopsis of an entity
std::string generate_synopsis(const cppast::cpp_entity &e) {
	// the generator for the synopsis
	class synopsis_generator final : public cppast::code_generator {
	public:
		// get the resulting string
		std::string result() {
			return std::move(str_);
		}

	private:
		// whether or not the entity is the main entity that is being documented
		bool is_main_entity(const cppast::cpp_entity &e) {
			if (cppast::is_templated(e) || cppast::is_friended(e))
				// need to ask the real entity
				return is_main_entity(e.parent().value());
			else
				return &e == &this->main_entity();
		}

		// get some nicer formatting
		cppast::formatting do_get_formatting() const override
		{
			return cppast::formatting_flags::brace_nl | cppast::formatting_flags::comma_ws | cppast::formatting_flags::operator_ws;
		}

		// calculate generation options
		generation_options do_get_options(const cppast::cpp_entity &e, cppast::cpp_access_specifier_kind access) override
		{
			if (is_excluded_synopsis(e, access))
				return cppast::code_generator::exclude;
			else if (!is_main_entity(e))
				// only generation declaration for the non-documented entity
				return cppast::code_generator::declaration;
			else
				// default options
				return {};
		}

		// update indendation level
		void do_indent() override
		{
			++indent_;
		}
		void do_unindent() override
		{
			if (indent_)
				--indent_;
		}

		// write specified tokens
		// need to change indentation for each newline
		void do_write_token_seq(cppast::string_view tokens) override
		{
			if (was_newline_) {
				str_ += std::string(indent_ * 2u, ' ');
				was_newline_ = false;
			}

			str_ += tokens.c_str();
		}

		// write + remember newline
		void do_write_newline() override
		{
			str_ += "\n";
			was_newline_ = true;
		}

		std::string str_;
		unsigned indent_ = 0;
		bool was_newline_ = false;
	} generator;
	cppast::generate_code(generator, e);
	return generator.result();
}

namespace stappler::doc {

constexpr auto HELP_STRING =
	"Stappler Documentation tool\n"\
	"  Usage: libstappler-doc $TREE_ROOT $ACTION\n";

static int parseOptionSwitch(Value &ret, char c, const char *str) {
	if (c == 'v') {
		ret.setBool(true, "verbose");
	} else if (c == 'h') {
		ret.setBool(true, "help");
	}
	return 1;
}

static int parseOptionString(Value &ret, StringView str, int argc, const char * argv[]) {
	if (str == "verbose") {
		ret.setBool(true, "verbose");
	} else if (str == "help") {
		ret.setBool(true, "help");
	} else if (str.starts_with("root=")) {
		ret.setString(str.sub("root="_len), "root");
	}
	return 1;
}

struct ParserStruct {
	cppast::libclang_compilation_database database;
	cppast::simple_file_parser<cppast::libclang_parser> parser;
	IndexData index;
	String libraryRoot;
	String outdir;

	Set<String> parsedFiles;

	Value serializeFile(const cppast::cpp_file &file) {
		Value ret;
		Vector<Value *> target;

		// visit each entity in the file
		cppast::visit(file, [&](const cppast::cpp_entity &e, cppast::visitor_info info) {
			if (info.event == cppast::visitor_info::container_entity_exit) // exiting an old container
				target.pop_back();
			else if (info.event == cppast::visitor_info::container_entity_enter) {
				auto val = serializeEntity(index, e);
				if (target.empty()) {
					ret = val;
					target.emplace_back(&ret.emplace("childs"));
				} else {
					auto &v = target.back()->addValue(move(val));
					target.emplace_back(&v.emplace("childs"));
				}
			} else {
				auto val = serializeEntity(index, e);
				if (target.empty()) {
					ret = val;
				} else {
					target.back()->addValue(move(val));
				}
			}
		});

		return ret;
	}

	void parseFile(const cppast::cpp_file &file) {
	    // visit each entity

		std::string prefix;
		// visit each entity in the file
		cppast::visit(file, [&](const cppast::cpp_entity &e, cppast::visitor_info info) {
			if (info.event == cppast::visitor_info::container_entity_exit) // exiting an old container
				prefix.pop_back();
			else if (info.event == cppast::visitor_info::container_entity_enter)
			// entering a new container
					{
				std::cout << prefix << "'" << e.name() << "' - " << cppast::to_string(e.kind()) << '\n';
				prefix += "\t";
			} else
				// if (info.event == cppast::visitor_info::leaf_entity) // a non-container entity
				std::cout << prefix << "'" << e.name() << "' - " << cppast::to_string(e.kind()) << '\n';
		});

	    /*cppast::visit(
	        file,
	        [](const cppast::cpp_entity& e, cppast::cpp_access_specifier_kind access) {
	            if (is_excluded_documentation(e, access))
	                // exclude this and all children
	                return cppast::visit_filter::exclude_and_children;
	            else if (cppast::is_templated(e) || cppast::is_friended(e))
	                // continue on with children for a dummy entity
	                return cppast::visit_filter::exclude;
	            else
	                return cppast::visit_filter::include;
	        },
	        [](const cppast::cpp_entity& e, const cppast::visitor_info& info) {
	            if (info.is_old_entity())
	                // already done
	                return;

	            // print name
	            std::cout << "## " << cppast::to_string(e.kind()) << " '" << e.name() << "'\n";
	            std::cout << '\n';

	            // print synopsis
	            std::cout << "```\n";
	            std::cout << generate_synopsis(e);
	            std::cout << "```\n\n";

	            // print documentation comment
	            if (e.comment())
	                std::cout << e.comment().value() << '\n';

	            // print separator
	            std::cout << "\n---\n\n";
	        });
	    std::cout << "\n\n";*/
	}

	bool shouldParseHeader(StringView fullpath) {
		auto ext = filepath::lastExtension(fullpath);
		if (ext == "h" || ext == "hpp") {
			auto subpath = StringView(fullpath).sub(libraryRoot.size());
			// todo: this should be toolkit profile
			if (subpath.starts_with("/common") || subpath.starts_with("/modules")) {
				return true;
			}
		}
		return false;
	}

	void processIncludes(const cppast::libclang_compile_config &config, const cppast::cpp_file &file) {
		if (filepath::lastExtension(file.name()) == "cpp" || filepath::lastExtension(file.name()) == "cc" || filepath::lastExtension(file.name()) == "h") {
			for (auto &entity : file) {
				if (entity.kind() == cppast::cpp_include_directive::kind()) {
					auto &include = static_cast<const cppast::cpp_include_directive&>(entity);
					auto fullPath = include.full_path();
					if (parsedFiles.find(fullPath) == parsedFiles.end() && StringView(fullPath).starts_with(StringView(libraryRoot))) {
						if (filepath::lastExtension(fullPath) == "cpp" || filepath::lastExtension(fullPath) == "cc") {
							auto file = parser.parse(fullPath, config);
							if (file) {
								parsedFiles.emplace(fullPath);
								processIncludes(config, file.value());
							}
						} else if (filepath::lastExtension(fullPath) == "h" || filepath::lastExtension(fullPath) == "hpp") {
							if (shouldParseHeader(fullPath)) {
								cppast::libclang_compile_config headerConfig(config);
								headerConfig.set_language("-xc++-header");
								auto file = parser.parse(fullPath, config);
								if (file) {
									parsedFiles.emplace(fullPath);
									processIncludes(config, file.value());
									auto data = serializeFile(file.value());
									auto name = filepath::name(fullPath);
									String path = filepath::merge<Interface>(outdir, toString(name, ".json"));
									filesystem::remove(path);
									data::save(data, path, data::EncodeFormat::Pretty);
								}
							} else {
								parsedFiles.emplace(fullPath);
							}
						}
					}
				}
			}
		}
	}

	ParserStruct(StringView outroot, StringView libraryRoot)
	: database(outroot.str<Interface>())
	, parser((type_safe::ref(index.index)))
	, libraryRoot(libraryRoot.str<Interface>())
	, outdir(outroot.str<Interface>()) {
		try {
			cppast::parse_database(parser, database); // parse all files in the database
		} catch (cppast::libclang_error &ex) {
			std::cerr << "fatal libclang error: " << ex.what() << '\n';
		}

		if (parser.error()) {
			// a non-fatal parse error
			// error has been logged to stderr
			return;
		}

		for (auto &file : parser.files()) {
			parsedFiles.emplace(file.name());
		}

		for (auto &file : parser.files()) {
			cppast::libclang_compile_config config(database, file.name());
			processIncludes(config, file);
		}

		auto namesPath = filepath::merge<Interface>(outdir, "names.txt");
		filesystem::remove(namesPath);

		StringStream namesOut;
		for (auto &it : index.names) {
			namesOut << it.first << "; " << cppast::to_string(it.second->kind()) << "; " << cppast::to_string(it.second->parent().value().kind()) << "\n";
		}
		auto namesStr = namesOut.str();
		filesystem::write(namesPath, (const uint8_t *)namesStr.data(), namesStr.size());
	}
};

SP_EXTERN_C int main(int argc, const char * argv[]) {
	Value opts = data::parseCommandLineOptions<Interface>(argc, argv,
			&parseOptionSwitch, &parseOptionString);
	if (!opts) {
		std::cout << "Wrong usage: At least 2 arguments should be provided.\n\n" << HELP_STRING;
		return -1;
	}

	auto &args = opts.getValue("args");
	bool verbose = opts.getBool("verbose");

	String root;
	if (opts.hasValue("root")) {
		root = opts.getString("root");
	} else {
		root = filesystem::currentDir<Interface>();
	}

	if (root.front() != '/') {
		root = filesystem::currentDir<Interface>(root);
	}

	if (verbose) {
		std::cout << data::EncodeFormat::Pretty << opts << "\n";
		std::cout << "  Work directory: " << filesystem::currentDir<Interface>() << "\n";
		std::cout << "  Target directory: " << root << "\n";
	}

	if (opts.getBool("help")) {
		std::cout << HELP_STRING;
		return 0;
	}

	if (args.size() < 2) {
		StringStream compileDatabase;
		compileDatabase << "[";

		filesystem::ftw(root, [&] (StringView path, bool isFile) {
			if (isFile && filepath::lastExtension(path) == "json") {
				auto data = filesystem::readIntoMemory<Interface>(path);
				compileDatabase << StringView((const char *)data.data(), data.size());
			}
		});

		compileDatabase << "]";

		String db = compileDatabase.str();

		auto val = data::read<Interface>(db);
		if (val.isArray() && val.size() > 0) {
			auto outdir = filesystem::currentDir<Interface>("out");
			filesystem::mkdir(outdir);

			auto compilationRoot = val.getValue(0).getString("directory");

			auto dbFile = filepath::merge<Interface>(outdir, "compile_commands.json");

			filesystem::remove(dbFile);

			data::save(val, dbFile, data::EncodeFormat::Pretty);

			ParserStruct parser(outdir, compilationRoot);

			return 0;
		} else {
			std::cerr << "Empty compilation database\n";
		}
	} else if (args.getString(1) == "make-stub") {
		SymbolsInfo info;
		auto outdir = filesystem::currentDir<Interface>("out");
		filesystem::ftw(outdir, [&] (StringView path, bool isFile) {
			if (isFile) {
				if (filepath::lastExtension(path) == "json") {
					auto val = data::readFile<Interface>(path);
					if (val.isDictionary() && val.getString("_kind") == "file") {
						writeStub(outdir, info, val);
					}
				}
			}
		});
		return 0;
	}

	return -1;
}

}
