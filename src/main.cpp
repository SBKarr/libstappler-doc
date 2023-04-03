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

#include <cppast/code_generator.hpp> // code_generator, generate_code()
#include <cppast/visitor.hpp>        // visit()
#include <cppast/libclang_parser.hpp>

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

using namespace mem_std;

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

static void parseFile(const cppast::cpp_file &file) {
    std::string prefix;
    // visit each entity in the file
    cppast::visit(file, [&](const cppast::cpp_entity& e, cppast::visitor_info info) {
        if (info.event == cppast::visitor_info::container_entity_exit) // exiting an old container
            prefix.pop_back();
        else if (info.event == cppast::visitor_info::container_entity_enter)
        // entering a new container
        {
            std::cout << prefix << "'" << e.name() << "' - " << cppast::to_string(e.kind()) << '\n';
            prefix += "\t";
        }
        else // if (info.event == cppast::visitor_info::leaf_entity) // a non-container entity
            std::cout << prefix << "'" << e.name() << "' - " << cppast::to_string(e.kind()) << '\n';
    });
}

struct ParserStruct {
	cppast::libclang_compilation_database database;
	cppast::simple_file_parser<cppast::libclang_parser> parser;
	String libraryRoot;

	Set<String> parsedFiles;

	void processIncludes(const cppast::libclang_compile_config &config, const cppast::cpp_file &file) {
		if (filepath::lastExtension(file.name()) == "cpp" || filepath::lastExtension(file.name()) == "cc") {
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
							parsedFiles.emplace(fullPath);
						}
					}
				}
			}
		}
	}

	ParserStruct(StringView outroot, const cppast::cpp_entity_index& index, StringView libraryRoot)
	: database(outroot.str<Interface>())
	, parser((type_safe::ref(index)))
	, libraryRoot(libraryRoot.str<Interface>()) {
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

	if (args.getBool("help")) {
		std::cout << HELP_STRING;
		return 0;
	}

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

		ParserStruct parser(outdir, {}, compilationRoot);

		return 0;
	} else {
		return 0;
	}
}

}
