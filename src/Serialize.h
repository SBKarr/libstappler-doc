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

#ifndef SRC_SERIALIZE_H_
#define SRC_SERIALIZE_H_

#include "SPCommon.h"
#include "SPData.h"

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

namespace stappler::doc {

using namespace mem_std;

struct IndexData {
	Vector<String> context;
	cppast::cpp_entity_index index;

	mutable Map<String, const cppast::cpp_entity *> names;

	String getFullName(const cppast::cpp_entity &) const;
};

using index_t = IndexData;

Value serializeToken(const cppast::cpp_token &);
Value serializeExpression(const index_t &index, const cppast::cpp_expression &);

Value serializeReference(const index_t &index, const cppast::cpp_namespace_ref &ref);
Value serializeReference(const index_t &index, const cppast::cpp_entity_ref &ref);
Value serializeReference(const index_t &index, const cppast::cpp_template_type_parameter_ref &ref);
Value serializeReference(const index_t &index, const cppast::cpp_template_ref &ref);
Value serializeReference(const index_t &index, const cppast::cpp_type_ref &ref);

Value serializeType(const index_t &index, const cppast::cpp_type &);

Value serializeAttribute(const cppast::cpp_attribute &attr);

Value serializeScope(const index_t &index, const cppast::cpp_scope_name &scope);

Value serializeEntity(const index_t &index, const cppast::cpp_entity &);

void writeExpression(StringStream &output, const cppast::cpp_expression& expr);
void writeType(StringStream& output, const cppast::cpp_type &type, bool is_variadic = false);

struct SymbolInfo {
	String name;
	String access;
};

struct SymbolsInfo {
	Map<String, Vector<SymbolInfo>> names;
};

void writeStub(StringView out, SymbolsInfo &, const Value &);
void writeMap(SymbolsInfo &, const Value &);

}

#endif /* SRC_SERIALIZE_H_ */
