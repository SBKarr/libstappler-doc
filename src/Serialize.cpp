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
#include "Serialize.h"

namespace stappler::doc {

static void serializeType(Value &val, const cppast::cpp_builtin_type &t) {
	val.setString(cppast::to_string(t.builtin_type_kind()), "builtin_type_kind");
}

static void serializeType(const index_t &index, Value &val, const cppast::cpp_user_defined_type &t) {
	val.setValue(serializeReference(index, t.entity()), "target");
}

static void serializeType(Value &val, const cppast::cpp_auto_type &t) {
	// do nothing
}

static void serializeType(const index_t &index, Value &val, const cppast::cpp_decltype_type &t) {
	val.setValue(serializeExpression(index, t.expression()), "expression");
}

static void serializeType(Value &val, const cppast::cpp_decltype_auto_type &t) {
	// do nothing
}

static String serializeCV(cppast::cpp_cv cv) {
	using namespace cppast;
	switch (cv) {
	case cpp_cv::cpp_cv_none: return "none"; break;
	case cpp_cv::cpp_cv_const: return "const"; break;
	case cpp_cv::cpp_cv_volatile: return "volatile"; break;
	case cpp_cv::cpp_cv_const_volatile: return "const_volatile"; break;
	}
	return String();
}

static void serializeType(const index_t &index, Value &val, const cppast::cpp_cv_qualified_type &t) {
	val.setValue(serializeType(index, t.type()), "type");
	val.setString(serializeCV(t.cv_qualifier()), "cv_qualifier");
}

static void serializeType(const index_t &index, Value &val, const cppast::cpp_pointer_type &t) {
	val.setValue(serializeType(index, t.pointee()), "pointee");
}

static void serializeType(const index_t &index, Value &val, const cppast::cpp_reference_type &t) {
	val.setValue(serializeType(index, t.referee()), "referee");
}

static void serializeType(const index_t &index, Value &val, const cppast::cpp_array_type &t) {
	val.setValue(serializeType(index, t.value_type()), "value_type");
	if (auto size = t.size()) {
		val.setValue(serializeExpression(index, size.value()), "size");
	}
}

static void serializeType(const index_t &index, Value &val, const cppast::cpp_function_type &t) {
	val.setValue(serializeType(index, t.return_type()), "return_type");
	val.setBool(t.is_variadic(), "is_variadic");
	for (auto &it : t.parameter_types()) {
		val.emplace("parameter_types").addValue(serializeType(index, it));
	}
}

static void serializeType(const index_t &index, Value &val, const cppast::cpp_member_function_type &t) {
	val.setValue(serializeType(index, t.return_type()), "return_type");
	val.setValue(serializeType(index, t.class_type()), "class_type");
	val.setBool(t.is_variadic(), "is_variadic");
	for (auto &it : t.parameter_types()) {
		val.emplace("parameter_types").addValue(serializeType(index, it));
	}
}

static void serializeType(const index_t &index, Value &val, const cppast::cpp_member_object_type &t) {
	val.setValue(serializeType(index, t.object_type()), "object_type");
	val.setValue(serializeType(index, t.class_type()), "class_type");
}

static void serializeType(const index_t &index, Value &val, const cppast::cpp_template_parameter_type &t) {
	val.setValue(serializeReference(index, t.entity()), "entity");
}

static Value serializeTemplateArgument(const index_t &index, const cppast::cpp_template_argument &arg) {
	Value ret;
	if (auto type = arg.type()) {
		ret.setValue(serializeType(index, type.value()), "type");
	}
	if (auto expr = arg.expression()) {
		ret.setValue(serializeExpression(index, expr.value()), "expression");
	}
	if (auto ref = arg.template_ref()) {
		ret.setValue(serializeReference(index, ref.value()), "template_ref");
	}
	return ret;
}

static void serializeType(const index_t &index, Value &val, const cppast::cpp_template_instantiation_type &t) {
	val.setValue(serializeReference(index, t.primary_template()), "primary_template");
	val.setBool(t.arguments_exposed(), "arguments_exposed");
	if (t.arguments_exposed()) {
		if (auto args = t.arguments()) {
			for (auto &it : args.value()) {
				val.emplace("arguments").addValue(serializeTemplateArgument(index, it));
			}
		}
	}
	val.setString(t.unexposed_arguments(), "unexposed_arguments");
}

static void serializeType(const index_t &index, Value &val, const cppast::cpp_dependent_type &t) {
	val.setString(t.name(), "name");
	val.setValue(serializeType(index, t.dependee()), "dependee");
}

static void serializeType(Value &val, const cppast::cpp_unexposed_type &t) {
	val.setString(t.name(), "name");
}

static void serializeExpression(Value &val, const cppast::cpp_literal_expression &expr) {
	val.setString(expr.value(), "value");
}

static void serializeExpression(Value &val, const cppast::cpp_unexposed_expression &expr) {
	for (auto &it : expr.expression()) {
		val.emplace("expression").addValue(serializeToken(it));
	}
}

Value serializeToken(const cppast::cpp_token &tok) {
	Value ret;
	ret.setString(tok.spelling, "spelling");
	switch (tok.kind) {
	case cppast::cpp_token_kind::identifier: ret.setString("identifier", "kind"); break;
	case cppast::cpp_token_kind::keyword: ret.setString("keyword", "kind"); break;
	case cppast::cpp_token_kind::int_literal: ret.setString("int_literal", "kind"); break;
	case cppast::cpp_token_kind::float_literal: ret.setString("float_literal", "kind"); break;
	case cppast::cpp_token_kind::char_literal: ret.setString("char_literal", "kind"); break;
	case cppast::cpp_token_kind::string_literal: ret.setString("string_literal", "kind"); break;
	case cppast::cpp_token_kind::punctuation: ret.setString("punctuation", "kind"); break;
	}
	return ret;
}

Value serializeExpression(const index_t &index, const cppast::cpp_expression &expr) {
	Value ret;
	ret.setValue(serializeType(index, expr.type()), "type");

	using namespace cppast;
	switch (expr.kind()) {
	case cpp_expression_kind::literal_t:
		serializeExpression(ret, static_cast<const cppast::cpp_literal_expression &>(expr));
		ret.setString("literal", "kind");
		break;
	case cpp_expression_kind::unexposed_t:
		serializeExpression(ret, static_cast<const cppast::cpp_unexposed_expression &>(expr));
		ret.setString("unexposed", "kind");
		break;
	}
	return ret;
}

Value serializeReference(const index_t &index, const cppast::cpp_namespace_ref &ref) {
	Value ret;
	ret.setString(ref.name(), "name");
	for (auto &it : ref.get(index.index)) {
		ret.emplace("objects").addValue(serializeEntity(index, it.get()));
	}
	return ret;
}

Value serializeReference(const index_t &index, const cppast::cpp_entity_ref &ref) {
	Value ret;
	ret.setString(ref.name(), "name");
	for (auto &it : ref.get(index.index)) {
		ret.emplace("objects").addValue(serializeEntity(index, it.get()));
	}
	return ret;
}

Value serializeReference(const index_t &index, const cppast::cpp_template_type_parameter_ref &ref) {
	Value ret;
	ret.setString(ref.name(), "name");
	for (auto &it : ref.get(index.index)) {
		ret.emplace("objects").addValue(serializeEntity(index, it.get()));
	}
	return ret;
}

Value serializeReference(const index_t &index, const cppast::cpp_template_ref &ref) {
	Value ret;
	ret.setString(ref.name(), "name");
	for (auto &it : ref.get(index.index)) {
		ret.emplace("objects").addValue(serializeEntity(index, it.get()));
	}
	return ret;
}

Value serializeReference(const index_t &index, const cppast::cpp_type_ref &ref) {
	Value ret;
	ret.setString(ref.name(), "name");
	for (auto &it : ref.get(index.index)) {
		ret.emplace("objects").addValue(serializeEntity(index, it.get()));
	}
	return ret;
}

Value serializeType(const index_t &index, const cppast::cpp_type &type) {
	Value ret;

	using namespace cppast;
	switch (type.kind()) {
	case cpp_type_kind::builtin_t:
		serializeType(ret, static_cast<const cpp_builtin_type &>(type));
		ret.setString("builtin", "kind");
		break;
	case cpp_type_kind::user_defined_t:
		serializeType(index, ret, static_cast<const cpp_user_defined_type &>(type));
		ret.setString("user_defined", "kind");
		break;

	case cpp_type_kind::auto_t:
		serializeType(ret, static_cast<const cpp_auto_type &>(type));
		ret.setString("auto", "kind");
		break;
	case cpp_type_kind::decltype_t:
		serializeType(index, ret, static_cast<const cpp_decltype_type &>(type));
		ret.setString("decltype", "kind");
		break;
	case cpp_type_kind::decltype_auto_t:
		serializeType(ret, static_cast<const cpp_decltype_auto_type &>(type));
		ret.setString("decltype_auto", "kind");
		break;

	case cpp_type_kind::cv_qualified_t:
		serializeType(index, ret, static_cast<const cpp_cv_qualified_type &>(type));
		ret.setString("cv_qualified", "kind");
		break;
	case cpp_type_kind::pointer_t:
		serializeType(index, ret, static_cast<const cpp_pointer_type &>(type));
		ret.setString("pointer", "kind");
		break;
	case cpp_type_kind::reference_t:
		serializeType(index, ret, static_cast<const cpp_reference_type &>(type));
		ret.setString("reference", "kind");
		break;

	case cpp_type_kind::array_t:
		serializeType(index, ret, static_cast<const cpp_array_type &>(type));
		ret.setString("array", "kind");
		break;
	case cpp_type_kind::function_t:
		serializeType(index, ret, static_cast<const cpp_function_type &>(type));
		ret.setString("function", "kind");
		break;
	case cpp_type_kind::member_function_t:
		serializeType(index, ret, static_cast<const cpp_member_function_type &>(type));
		ret.setString("member_function", "kind");
		break;
	case cpp_type_kind::member_object_t:
		serializeType(index, ret, static_cast<const cpp_member_object_type &>(type));
		ret.setString("member_object", "kind");
		break;

	case cpp_type_kind::template_parameter_t:
		serializeType(index, ret, static_cast<const cpp_template_parameter_type &>(type));
		ret.setString("template_parameter", "kind");
		break;
	case cpp_type_kind::template_instantiation_t:
		serializeType(index, ret, static_cast<const cpp_template_instantiation_type &>(type));
		ret.setString("template_instantiation", "kind");
		break;

	case cpp_type_kind::dependent_t:
		serializeType(index, ret, static_cast<const cpp_dependent_type &>(type));
		ret.setString("dependent", "kind");
		break;

	case cpp_type_kind::unexposed_t:
		serializeType(ret, static_cast<const cpp_unexposed_type &>(type));
		ret.setString("unexposed", "kind");
		break;
	}
	return ret;
}

Value serializeAttribute(const cppast::cpp_attribute &attr) {
	Value ret;
	ret.setString(attr.name(), "name");
	switch (attr.kind()) {
	case cppast::cpp_attribute_kind::alignas_: ret.setString("alignas_", "kind"); break;
	case cppast::cpp_attribute_kind::carries_dependency: ret.setString("carries_dependency", "kind"); break;
	case cppast::cpp_attribute_kind::deprecated: ret.setString("deprecated", "kind"); break;
	case cppast::cpp_attribute_kind::fallthrough: ret.setString("fallthrough", "kind"); break;
	case cppast::cpp_attribute_kind::maybe_unused: ret.setString("maybe_unused", "kind"); break;
	case cppast::cpp_attribute_kind::nodiscard: ret.setString("nodiscard", "kind"); break;
	case cppast::cpp_attribute_kind::noreturn: ret.setString("noreturn", "kind"); break;
	case cppast::cpp_attribute_kind::unknown: ret.setString("unknown", "kind"); break;
	}

	if (auto scope = attr.scope()) {
		ret.setString(scope.value(), "scope");
	}
	ret.setBool(attr.is_variadic(), "is_variadic");
	if (auto args = attr.arguments()) {
		for (auto &it : args.value()) {
			ret.emplace("arguments").addValue(serializeToken(it));
		}
	}
	return ret;
}

Value serializeScope(const index_t &index, const cppast::cpp_scope_name &scope) {
	Value ret;
	ret.setString(scope.name(), "name");
	if (scope.is_templated()) {
		ret.setBool(scope.is_templated(), "is_templated");
		for (auto &it : scope.template_parameters()) {
			ret.emplace("template_parameters").addValue(serializeEntity(index, it));
		}
	}

	return ret;
}

static void serializeCppFile(Value &val, const cppast::cpp_file &file) {
	for (auto &it : file.unmatched_comments()) {
		val.emplace("unmatched_comments").addValue(Value({
			pair("text", Value(it.content)),
			pair("line", Value(it.line))
		}));
	}
}

static void serializeMacroParameter(Value &val, const cppast::cpp_macro_parameter &param) {
	// do nothing
}

static void serializeMacroDefinition(const index_t &index, Value &val, const cppast::cpp_macro_definition &def) {
	val.setString(def.replacement(), "replacement");
	val.setBool(def.is_object_like(), "is_object_like");
	val.setBool(def.is_function_like(), "is_function_like");
	val.setBool(def.is_variadic(), "is_variadic");

	for (auto &it : def.parameters()) {
		val.emplace("parameters").addValue(serializeEntity(index, it));
	}
}

static void serializeIncludeDirective(Value &val, const cppast::cpp_include_directive &include) {
	switch (include.include_kind()) {
	case cppast::cpp_include_kind::local: val.setString("local", "include_kind"); break;
	case cppast::cpp_include_kind::system: val.setString("system", "include_kind"); break;
	}
	val.setString(include.full_path(), "include");
}

static void serializeLanguageLinkage(Value &val, const cppast::cpp_language_linkage &linkage) {
	val.setBool(linkage.is_block(), "is_block");
}

static void serializeNamespace(Value &val, const cppast::cpp_namespace &ns) {
	val.setBool(ns.is_anonymous(), "is_anonymous");
	val.setBool(ns.is_inline(), "is_inline");
	val.setBool(ns.is_nested(), "is_nested");
}

static void serializeNamespaceAlias(const index_t &index, Value &val, const cppast::cpp_namespace_alias &alias) {
	val.setValue(serializeReference(index, alias.target()), "target");
}

static void serializeUsingDirective(const index_t &index, Value &val, const cppast::cpp_using_directive &dir) {
	val.setValue(serializeReference(index, dir.target()), "target");
}

static void serializeUsingDeclaration(const index_t &index, Value &val, const cppast::cpp_using_declaration &decl) {
	val.setValue(serializeReference(index, decl.target()), "target");
}

static void serializeTypeAlias(const index_t &index, Value &val, const cppast::cpp_type_alias &alias) {
	val.setValue(serializeType(index, alias.underlying_type()), "underlying_type");
}

static void serializeForwardDeclarable(const index_t &index, Value &val, const cppast::cpp_forward_declarable &decl) {
	val.setBool(decl.is_declaration(), "is_declaration");
	val.setBool(decl.is_definition(), "is_definition");
	if (auto ref = decl.semantic_parent()) {
		val.setValue(serializeReference(index, ref.value()), "semantic_parent");
	}
	val.setString(decl.semantic_scope(), "semantic_scope");
}

static void serializeEnum(const index_t &index, Value &val, const cppast::cpp_enum &en) {
	serializeForwardDeclarable(index, val, en);
	val.setValue(serializeType(index, en.underlying_type()), "underlying_type");
	val.setBool(en.has_explicit_type(), "has_explicit_type");
	val.setBool(en.is_scoped(), "is_scoped");
}

static void serializeEnumValue(const index_t &index, Value &val, const cppast::cpp_enum_value &v) {
	if (auto value = v.value()) {
		val.setValue(serializeExpression(index, value.value()), "value");
	}
}

static void serializeClass(const index_t &index, Value &val, const cppast::cpp_class &cl) {
	serializeForwardDeclarable(index, val, cl);
	val.setString(cppast::to_string(cl.class_kind()), "class_kind");
	val.setBool(cl.is_final(), "is_final");
	for (auto &it : cl.bases()) {
		val.emplace("bases").addValue(serializeEntity(index, it));
	}
}

static void serializeAccessSpecifier(Value &val, const cppast::cpp_access_specifier &a) {
	val.setString(cppast::to_string(a.access_specifier()), "access_specifier");
}

static void serializeBaseClass(const index_t &index, Value &val, const cppast::cpp_base_class &base) {
	val.setString(cppast::to_string(base.access_specifier()), "access_specifier");
	val.setBool(base.is_virtual(), "is_virtual");
	val.setValue(serializeType(index, base.type()), "type");
}

static void serializeVariableBase(const index_t &index, Value &val, const cppast::cpp_variable_base &variable) {
	val.setValue(serializeType(index, variable.type()), "type");
	if (auto def = variable.default_value()) {
		val.setValue(serializeExpression(index, def.value()), "default_value");
	}
}

static Value serializeStorageClass(cppast::cpp_storage_class_specifiers storage) {
	Value val;
	if ((storage & cppast::cpp_storage_class_auto) != 0) {
		val.addString("auto");
	}
	if ((storage & cppast::cpp_storage_class_static) != 0) {
		val.addString("static");
	}
	if ((storage & cppast::cpp_storage_class_extern) != 0) {
		val.addString("extern");
	}
	if ((storage & cppast::cpp_storage_class_thread_local) != 0) {
		val.addString("thread_local");
	}
	return val;
}

static void serializeVariable(const index_t &index, Value &val, const cppast::cpp_variable &variable) {
	serializeForwardDeclarable(index, val, variable);
	serializeVariableBase(index, val, variable);

	val.setBool(variable.is_constexpr(), "is_constexpr");
	if (auto v = serializeStorageClass(variable.storage_class())) {
		val.setValue(move(v), "storage_class");
	}
}

static void serializeMemberVariable(const index_t &index, Value &val, const cppast::cpp_member_variable &variable) {
	serializeVariableBase(index, val, variable);
	val.setBool(variable.is_mutable(), "is_mutable");
}

static void serializeBitfield(const index_t &index, Value &val, const cppast::cpp_bitfield &bitfield) {
	serializeVariableBase(index, val, bitfield);
	val.setBool(bitfield.is_mutable(), "is_mutable");
	val.setInteger(bitfield.no_bits(), "no_bits");
}

static void serializeFunctionParameter(const index_t &index, Value &val, const cppast::cpp_function_parameter &param) {
	serializeVariableBase(index, val, param);
}

static void serializeFunctionBase(const index_t &index, Value &val, const cppast::cpp_function_base &base) {
	serializeForwardDeclarable(index, val, base);
	for (auto &it : base.parameters()) {
		val.emplace("parameters").addValue(serializeEntity(index, it));
	}

	using namespace cppast;
	switch (base.body_kind()) {
	case cpp_function_declaration: val.setString("declaration", "body_kind"); break;
	case cpp_function_definition: val.setString("definition", "body_kind"); break;
	case cpp_function_defaulted: val.setString("defaulted", "body_kind"); break;
	case cpp_function_deleted: val.setString("deleted", "body_kind"); break;
	}

	if (auto nexpr = base.noexcept_condition()) {
		val.setValue(serializeExpression(index, nexpr.value()), "noexcept_condition");
	}
	val.setBool(base.is_variadic(), "is_variadic");
	val.setString(base.signature(), "signature");
}

static void serializeFunction(const index_t &index, Value &val, const cppast::cpp_function &fn) {
	serializeFunctionBase(index, val, fn);
	val.setValue(serializeType(index, fn.return_type()), "return_type");
	if (auto v = serializeStorageClass(fn.storage_class())) {
		val.setValue(move(v), "storage_class");
	}
	val.setBool(fn.is_consteval(), "is_consteval");
	val.setBool(fn.is_constexpr(), "is_constexpr");
}

static String serializeRefQ(cppast::cpp_reference ref) {
	switch (ref) {
	case cppast::cpp_reference::cpp_ref_none: return "none"; break;
	case cppast::cpp_reference::cpp_ref_lvalue: return "lvalue"; break;
	case cppast::cpp_reference::cpp_ref_rvalue: return "rvalue"; break;
	}
	return String();
}

static void serializeMemberFunctionBase(const index_t &index, Value &val, const cppast::cpp_member_function_base &fn) {
	serializeFunctionBase(index, val, fn);
	val.setValue(serializeType(index, fn.return_type()), "return_type");
	val.setBool(fn.is_virtual(), "is_virtual");
	if (auto virt = fn.virtual_info()) {
		if (virt.value().is_set(cppast::cpp_virtual_flags::pure)) {
			val.setBool(true, "is_pure");
		}
		if (virt.value().is_set(cppast::cpp_virtual_flags::override)) {
			val.setBool(true, "is_override");
		}
		if (virt.value().is_set(cppast::cpp_virtual_flags::final)) {
			val.setBool(true, "is_final");
		}
	}

	val.setString(serializeCV(fn.cv_qualifier()), "cv_qualifier");
	val.setString(serializeRefQ(fn.ref_qualifier()), "ref_qualifier");
	val.setBool(fn.is_consteval(), "is_consteval");
	val.setBool(fn.is_constexpr(), "is_constexpr");
}

static void serializeMemberFunction(const index_t &index, Value &val, const cppast::cpp_member_function &fn) {
	serializeMemberFunctionBase(index, val, fn);
}

static void serializeConversionOp(const index_t &index, Value &val, const cppast::cpp_conversion_op &fn) {
	serializeMemberFunctionBase(index, val, fn);
	val.setBool(fn.is_explicit(), "is_explicit");
}

static void serializeConstructor(const index_t &index, Value &val, const cppast::cpp_constructor &fn) {
	serializeFunctionBase(index, val, fn);
	val.setBool(fn.is_explicit(), "is_explicit");
	val.setBool(fn.is_consteval(), "is_consteval");
	val.setBool(fn.is_constexpr(), "is_constexpr");
}

static void serializeDestructor(const index_t &index, Value &val, const cppast::cpp_destructor &fn) {
	serializeFunctionBase(index, val, fn);
	val.setBool(fn.is_virtual(), "is_virtual");
	if (auto virt = fn.virtual_info()) {
		if (virt.value().is_set(cppast::cpp_virtual_flags::pure)) {
			val.setBool(true, "is_pure");
		}
		if (virt.value().is_set(cppast::cpp_virtual_flags::override)) {
			val.setBool(true, "is_override");
		}
		if (virt.value().is_set(cppast::cpp_virtual_flags::final)) {
			val.setBool(true, "is_final");
		}
	}
}

static void serializeFriend(const index_t &index, Value &val, const cppast::cpp_friend &fr) {
	if (auto entity = fr.entity()) {
		val.setValue(serializeEntity(index, entity.value()), "entity");
	}
	if (auto type = fr.type()) {
		val.setValue(serializeType(index, type.value()), "type");
	}
}

static String serializeTemplateKeyword(cppast::cpp_template_keyword keyword) {
	switch (keyword) {
	case cppast::cpp_template_keyword::keyword_class: return "class"; break;
	case cppast::cpp_template_keyword::keyword_typename: return "typename"; break;
	case cppast::cpp_template_keyword::concept_contraint: return "concept_contraint"; break;
	}
	return String();
}

static void serializeTemplateTypeParameter(const index_t &index, Value &val, const cppast::cpp_template_type_parameter &tpl) {
	val.setBool(tpl.is_variadic(), "is_variadic");
	if (auto def = tpl.default_type()) {
		val.setValue(serializeType(index, def.value()), "default_type");
	}
	val.setString(serializeTemplateKeyword(tpl.keyword()), "keyword");
	if (auto c = tpl.concept_constraint()) {
		for (auto &it : c.value()) {
			val.emplace("concept_constraint").addValue(serializeToken(it));
		}
	}
}

static void serializeNonTypeTemplateParameter(const index_t &index, Value &val, const cppast::cpp_non_type_template_parameter &tpl) {
	serializeVariableBase(index, val, tpl);
	val.setBool(tpl.is_variadic(), "is_variadic");
}

static void serializeTemplateTemplateParameter(const index_t &index, Value &val, const cppast::cpp_template_template_parameter &tpl) {
	val.setBool(tpl.is_variadic(), "is_variadic");
	for (auto &it : tpl.parameters()) {
		val.emplace("parameters").addValue(serializeEntity(index, it));
	}
	val.setString(serializeTemplateKeyword(tpl.keyword()), "keyword");
	if (auto def = tpl.default_template()) {
		val.setValue(serializeReference(index, def.value()), "default_template");
	}
}

static void serializeTemplate(const index_t &index, Value &val, const cppast::cpp_template &tpl) {
	for (auto &it : tpl.parameters()) {
		val.emplace("parameters").addValue(serializeEntity(index, it));
	}
}

static void serializeAliasTemplate(const index_t &index, Value &val, const cppast::cpp_alias_template &tpl) {
	serializeTemplate(index, val, tpl);
	val.setValue(serializeEntity(index, tpl.type_alias()), "type_alias");
}

static void serializeVariableTemplate(const index_t &index, Value &val, const cppast::cpp_variable_template &tpl) {
	serializeTemplate(index, val, tpl);
	val.setValue(serializeEntity(index, tpl.variable()), "variable");
}

static void serializeFunctionTemplate(const index_t &index, Value &val, const cppast::cpp_function_template &tpl) {
	serializeTemplate(index, val, tpl);
	val.setValue(serializeEntity(index, tpl.function()), "function");
}

static void serializeTemplateSpecialization(const index_t &index, Value &val, const cppast::cpp_template_specialization &tpl) {
	serializeTemplate(index, val, tpl);

	val.setValue(serializeReference(index, tpl.primary_template()), "primary_template");
	val.setBool(tpl.arguments_exposed(), "arguments_exposed");
	if (tpl.arguments_exposed()) {
		for (auto &it : tpl.arguments()) {
			val.emplace("arguments").addValue(serializeTemplateArgument(index, it));
		}
	}

	for (auto &it : tpl.unexposed_arguments()) {
		val.emplace("unexposed_arguments").addValue(serializeToken(it));
	}

	val.setBool(tpl.is_full_specialization(), "is_full_specialization");
}

static void serializeFunctionTemplateSpecialization(const index_t &index, Value &val, const cppast::cpp_function_template_specialization &tpl) {
	serializeTemplateSpecialization(index, val, tpl);
	val.setValue(serializeEntity(index, tpl.function()), "function");
}

static void serializeClassTemplate(const index_t &index, Value &val, const cppast::cpp_class_template &tpl) {
	serializeTemplate(index, val, tpl);
	val.setValue(serializeEntity(index, tpl.class_()), "class");
}

static void serializeClassTemplateSpecialization(const index_t &index, Value &val, const cppast::cpp_class_template_specialization &tpl) {
	serializeTemplateSpecialization(index, val, tpl);
	val.setValue(serializeEntity(index, tpl.class_()), "class");
}

static void serializeConcept(const index_t &index, Value &val, const cppast::cpp_concept &c) {
	for (auto &it : c.parameters()) {
		val.emplace("unexposed_arguments").addValue(serializeToken(it));
	}
	val.setValue(serializeExpression(index, c.constraint_expression()), "constraint_expression");
}

static void serializeStaticAssert(const index_t &index, Value &val, const cppast::cpp_static_assert &asrt) {
	val.setValue(serializeExpression(index, asrt.expression()), "expression");
	val.setString(asrt.message(), "message");
}

static void serializeUnexposed(Value &val, const cppast::cpp_unexposed_entity &entity) {
	for (auto &it : entity.spelling()) {
		val.emplace("spelling").addValue(serializeToken(it));
	}
}

static void serializeCount(Value &val, const cppast::cpp_entity &entity) {
	// do nothing
}

Value serializeEntity(const index_t &index, const cppast::cpp_entity &e) {
	Value ret;
	ret.setString(e.name(), "name");
	ret.setString(cppast::to_string(e.kind()), "kind");
	ret.setInteger(uintptr_t(&e), "id");

	using namespace cppast;

	auto target = &e;
	String fullName;
	switch (e.kind()) {
	case cpp_entity_kind::variable_template_t:
		fullName = index.getFullName(static_cast<const cpp_variable_template &>(e).variable());
		target = &static_cast<const cpp_variable_template &>(e).variable();
		break;
	case cpp_entity_kind::function_template_t:
		fullName = index.getFullName(static_cast<const cpp_function_template &>(e).function());
		target = &static_cast<const cpp_function_template &>(e).function();
		break;
	case cpp_entity_kind::class_template_t:
		fullName = index.getFullName(static_cast<const cpp_class_template &>(e).class_());
		target = &static_cast<const cpp_class_template &>(e).class_();
		break;
	case cpp_entity_kind::class_template_specialization_t:
		fullName = index.getFullName(static_cast<const cpp_class_template_specialization &>(e).class_());
		target = &static_cast<const cpp_class_template_specialization &>(e).class_();
		break;
	case cpp_entity_kind::alias_template_t:
		fullName = index.getFullName(static_cast<const cpp_alias_template &>(e).type_alias());
		target = &static_cast<const cpp_alias_template &>(e).type_alias();
		break;
	default:
		fullName = index.getFullName(e);
		break;
	}

	if (!fullName.empty()) {
		ret.setString(fullName, "_fullName");
		auto it = index.names.find(fullName);
		if (it == index.names.end()) {
			index.names.emplace(fullName, target);
		}
	}

	// extra field for human readability
	ret.setString(e.name(), "_name");
	ret.setString(cppast::to_string(e.kind()), "_kind");

	if (auto scope = e.scope_name()) {
		ret.setValue(serializeScope(index, scope.value()), "scope");
	}

	if (auto comment = e.comment()) {
		ret.setString(comment.value(), "comment");
	}

	for (auto &it : e.attributes()) {
		ret.emplace("attributes").addValue(serializeAttribute(it));
	}

	switch (e.kind()) {
	case cpp_entity_kind::file_t: serializeCppFile(ret, static_cast<const cpp_file&>(e)); break;
	case cpp_entity_kind::macro_parameter_t: serializeMacroParameter(ret, static_cast<const cpp_macro_parameter&>(e)); break;
	case cpp_entity_kind::macro_definition_t: serializeMacroDefinition(index, ret, static_cast<const cpp_macro_definition&>(e)); break;
	case cpp_entity_kind::include_directive_t: serializeIncludeDirective(ret, static_cast<const cpp_include_directive&>(e)); break;

	case cpp_entity_kind::language_linkage_t: serializeLanguageLinkage(ret, static_cast<const cpp_language_linkage&>(e)); break;

	case cpp_entity_kind::namespace_t: serializeNamespace(ret, static_cast<const cpp_namespace&>(e)); break;
	case cpp_entity_kind::namespace_alias_t: serializeNamespaceAlias(index, ret, static_cast<const cpp_namespace_alias&>(e)); break;
	case cpp_entity_kind::using_directive_t: serializeUsingDirective(index, ret, static_cast<const cpp_using_directive&>(e)); break;
	case cpp_entity_kind::using_declaration_t: serializeUsingDeclaration(index, ret, static_cast<const cpp_using_declaration&>(e)); break;

	case cpp_entity_kind::type_alias_t: serializeTypeAlias(index, ret, static_cast<const cpp_type_alias&>(e)); break;

	case cpp_entity_kind::enum_t: serializeEnum(index, ret, static_cast<const cpp_enum&>(e)); break;
	case cpp_entity_kind::enum_value_t: serializeEnumValue(index, ret, static_cast<const cpp_enum_value&>(e)); break;

	case cpp_entity_kind::class_t: serializeClass(index, ret, static_cast<const cpp_class&>(e)); break;
	case cpp_entity_kind::access_specifier_t: serializeAccessSpecifier(ret, static_cast<const cpp_access_specifier&>(e)); break;
	case cpp_entity_kind::base_class_t: serializeBaseClass(index, ret, static_cast<const cpp_base_class&>(e)); break;

	case cpp_entity_kind::variable_t: serializeVariable(index, ret, static_cast<const cpp_variable&>(e)); break;
	case cpp_entity_kind::member_variable_t: serializeMemberVariable(index, ret, static_cast<const cpp_member_variable&>(e)); break;
	case cpp_entity_kind::bitfield_t: serializeBitfield(index, ret, static_cast<const cpp_bitfield&>(e)); break;

	case cpp_entity_kind::function_parameter_t: serializeFunctionParameter(index, ret, static_cast<const cpp_function_parameter&>(e)); break;
	case cpp_entity_kind::function_t: serializeFunction(index, ret, static_cast<const cpp_function&>(e)); break;
	case cpp_entity_kind::member_function_t: serializeMemberFunction(index, ret, static_cast<const cpp_member_function&>(e)); break;
	case cpp_entity_kind::conversion_op_t: serializeConversionOp(index, ret, static_cast<const cpp_conversion_op&>(e)); break;
	case cpp_entity_kind::constructor_t: serializeConstructor(index, ret, static_cast<const cpp_constructor&>(e)); break;
	case cpp_entity_kind::destructor_t: serializeDestructor(index, ret, static_cast<const cpp_destructor&>(e)); break;

	case cpp_entity_kind::friend_t: serializeFriend(index, ret, static_cast<const cpp_friend&>(e)); break;

	case cpp_entity_kind::template_type_parameter_t: serializeTemplateTypeParameter(index, ret, static_cast<const cpp_template_type_parameter&>(e)); break;
	case cpp_entity_kind::non_type_template_parameter_t: serializeNonTypeTemplateParameter(index, ret, static_cast<const cpp_non_type_template_parameter&>(e)); break;
	case cpp_entity_kind::template_template_parameter_t: serializeTemplateTemplateParameter(index, ret, static_cast<const cpp_template_template_parameter&>(e)); break;

	case cpp_entity_kind::alias_template_t: serializeAliasTemplate(index, ret, static_cast<const cpp_alias_template&>(e)); break;
	case cpp_entity_kind::variable_template_t: serializeVariableTemplate(index, ret, static_cast<const cpp_variable_template&>(e)); break;
	case cpp_entity_kind::function_template_t: serializeFunctionTemplate(index, ret, static_cast<const cpp_function_template&>(e)); break;
	case cpp_entity_kind::function_template_specialization_t: serializeFunctionTemplateSpecialization(index, ret, static_cast<const cpp_function_template_specialization&>(e)); break;
	case cpp_entity_kind::class_template_t: serializeClassTemplate(index, ret, static_cast<const cpp_class_template&>(e)); break;
	case cpp_entity_kind::class_template_specialization_t: serializeClassTemplateSpecialization(index, ret, static_cast<const cpp_class_template_specialization&>(e)); break;
	case cpp_entity_kind::concept_t: serializeConcept(index, ret, static_cast<const cpp_concept&>(e)); break;

	case cpp_entity_kind::static_assert_t: serializeStaticAssert(index, ret, static_cast<const cpp_static_assert&>(e)); break;

	case cpp_entity_kind::unexposed_t: serializeUnexposed(ret, static_cast<const cpp_unexposed_entity&>(e)); break;

	case cpp_entity_kind::count: serializeCount(ret, e); break;
	}

	return ret;
}

static String getTemplateScopeName(const cppast::cpp_template_type_parameter &param) {
	switch (param.keyword()) {
	case cppast::cpp_template_keyword::concept_contraint:
		if (auto concept_ = param.concept_constraint()) {
			StringStream str;
			for (auto &it : concept_.value()) {
				str << it.spelling;
			}
			return str.str();
		}
		break;
	case cppast::cpp_template_keyword::keyword_typename:
		return "typename";
		break;
	case cppast::cpp_template_keyword::keyword_class:
		return "class";
		break;
	}
	return String();
}

static String getTemplateScopeName(const cppast::cpp_non_type_template_parameter &param) {
	StringStream str;
	writeType(str, param.type(), param.is_variadic());
	return str.str();
}

static String getTemplateScopeName(const cppast::cpp_template_template_parameter &param) {
	StringStream str;
	str << "template<";
	bool started = false;
	for (auto &it : param.parameters()) {
		if (started) { str << ","; } else { started = true; }
		using namespace cppast;
		switch (it.kind()) {
		case cpp_entity_kind::template_type_parameter_t:
			str << getTemplateScopeName(static_cast<const cpp_template_type_parameter &>(it));
			break;
		case cpp_entity_kind::non_type_template_parameter_t:
			str << getTemplateScopeName(static_cast<const cpp_non_type_template_parameter &>(it));
			break;
		case cpp_entity_kind::template_template_parameter_t:
			str << getTemplateScopeName(static_cast<const cpp_template_template_parameter &>(it));
			break;
		default:
			break;
		}
	}
	str << ">";
	switch (param.keyword()) {
	case cppast::cpp_template_keyword::concept_contraint:
		return "Concept";
		break;
	case cppast::cpp_template_keyword::keyword_typename:
		return "typename";
		break;
	case cppast::cpp_template_keyword::keyword_class:
		return "class";
		break;
	}
	return str.str();
}

template <typename T>
static String getTemplateScope(const T &tpl) {
	StringStream str;
	str << "<";
	bool started = false;
	for (auto &it : tpl.parameters()) {
		if (started) { str << ","; } else { started = true; }
		using namespace cppast;
		switch (it.kind()) {
		case cpp_entity_kind::template_type_parameter_t:
			str << getTemplateScopeName(static_cast<const cpp_template_type_parameter &>(it));
			break;
		case cpp_entity_kind::non_type_template_parameter_t:
			str << getTemplateScopeName(static_cast<const cpp_non_type_template_parameter &>(it));
			break;
		case cpp_entity_kind::template_template_parameter_t:
			str << getTemplateScopeName(static_cast<const cpp_template_template_parameter &>(it));
			break;
		default:
			break;
		}
	}
	str << ">";
	return str.str();
}

static String getTemplateScope(const cppast::cpp_class_template_specialization &tpl) {
	StringStream str;
	str << "<";
	if (tpl.arguments_exposed()) {
		bool started = false;
		for (auto &it : tpl.arguments()) {
			if (it.type()) {
				if (started) { str << ","; } else { started = true; }
				writeType(str, it.type().value(), false);
			}
			if (it.expression()) {
				if (started) { str << ","; } else { started = true; }
				writeExpression(str, it.expression().value());
			}
			if (it.template_ref()) {
				if (started) { str << ","; } else { started = true; }
				str << it.template_ref().value().name();
			}
		}
	} else {
		for (auto &it : tpl.unexposed_arguments()) {
			str << it.spelling;
		}
	}

	str << ">";
	return str.str();
}

static String getScopeName(const cppast::cpp_entity &e, const cppast::cpp_entity *parent = nullptr) {
	using namespace cppast;
	switch (e.kind()) {
	case cpp_entity_kind::file_t:
	case cpp_entity_kind::macro_parameter_t:
	case cpp_entity_kind::include_directive_t:
	case cpp_entity_kind::language_linkage_t:
	case cpp_entity_kind::namespace_alias_t:
	case cpp_entity_kind::using_directive_t:
	case cpp_entity_kind::using_declaration_t:
	case cpp_entity_kind::access_specifier_t:
	case cpp_entity_kind::base_class_t:
	case cpp_entity_kind::function_parameter_t:
	case cpp_entity_kind::friend_t:
	case cpp_entity_kind::template_type_parameter_t:
	case cpp_entity_kind::non_type_template_parameter_t:
	case cpp_entity_kind::template_template_parameter_t:
	case cpp_entity_kind::function_template_specialization_t:
	case cpp_entity_kind::static_assert_t:
	case cpp_entity_kind::unexposed_t:
	case cpp_entity_kind::count:
		return String();

	case cpp_entity_kind::macro_definition_t:
		return String(e.name());
		break;

	case cpp_entity_kind::namespace_t:
	case cpp_entity_kind::enum_t:
	case cpp_entity_kind::enum_value_t:
	case cpp_entity_kind::concept_t:
		return e.name();
		break;

	case cpp_entity_kind::member_variable_t:
	case cpp_entity_kind::bitfield_t:
	case cpp_entity_kind::variable_t:
		if (parent && parent->kind() == cpp_entity_kind::variable_template_t) {
			return toString(e.name(),
					getTemplateScope(static_cast<const cpp_variable_template &>(*parent)));
		} else if (auto p = e.parent()) {
			if (p.value().kind() == cpp_entity_kind::variable_template_t) {
				return toString(e.name(),
						getTemplateScope(static_cast<const cpp_variable_template &>(p.value())));
			}
		}
		return e.name();
		break;

	case cpp_entity_kind::class_t:
		if (parent) {
			if (parent->kind() == cpp_entity_kind::class_template_t) {
				return toString(e.name(),
						getTemplateScope(static_cast<const cpp_class_template &>(*parent)));
			} else if (parent->kind() == cpp_entity_kind::class_template_specialization_t) {
				return toString(e.name(),
						getTemplateScope(static_cast<const cpp_class_template_specialization &>(*parent)));
			}
		} else if (auto p = e.parent()) {
			if (p.value().kind() == cpp_entity_kind::class_template_t) {
				return toString(e.name(),
						getTemplateScope(static_cast<const cpp_class_template &>(p.value())));
			} else if (p.value().kind() == cpp_entity_kind::class_template_specialization_t) {
				return toString(e.name(),
						getTemplateScope(static_cast<const cpp_class_template_specialization &>(p.value())));
			}
		}
		return e.name();
		break;

	case cpp_entity_kind::function_t:
	case cpp_entity_kind::member_function_t:
	case cpp_entity_kind::conversion_op_t:
	case cpp_entity_kind::constructor_t:
	case cpp_entity_kind::destructor_t:
		if (parent && parent->kind() == cpp_entity_kind::function_template_t) {
			return toString(e.name(),
					getTemplateScope(static_cast<const cpp_function_template &>(*parent)),
					static_cast<const cpp_function&>(e).signature());
		} else if (auto p = e.parent()) {
			if (p.value().kind() == cpp_entity_kind::function_template_t) {
				return toString(e.name(),
						getTemplateScope(static_cast<const cpp_function_template &>(p.value())),
						static_cast<const cpp_function&>(e).signature());
			}
		}
		return toString(e.name(), static_cast<const cpp_function&>(e).signature());
		break;

	case cpp_entity_kind::type_alias_t:
		if (parent && parent->kind() == cpp_entity_kind::alias_template_t) {
			return toString(e.name(),
					getTemplateScope(static_cast<const cpp_alias_template &>(*parent)));
		} else if (auto p = e.parent()) {
			if (p.value().kind() == cpp_entity_kind::alias_template_t) {
				return toString(e.name(),
						getTemplateScope(static_cast<const cpp_alias_template &>(p.value())));
			}
		}
		return e.name();
		break;

	case cpp_entity_kind::function_template_t:
		return getScopeName(static_cast<const cpp_function_template&>(e).function(), &e);
		break;
	case cpp_entity_kind::class_template_t:
		return getScopeName(static_cast<const cpp_class_template&>(e).class_(), &e);
		break;
	case cpp_entity_kind::variable_template_t:
		return getScopeName(static_cast<const cpp_variable_template&>(e).variable(), &e);
		break;
	case cpp_entity_kind::class_template_specialization_t:
		return getScopeName(static_cast<const cpp_class_template_specialization&>(e).class_(), &e);
		break;
	case cpp_entity_kind::alias_template_t:
		return getScopeName(static_cast<const cpp_alias_template&>(e).type_alias(), &e);
		break;
	}

	return String();
}

String IndexData::getFullName(const cppast::cpp_entity &e) const {
	using namespace cppast;

	Vector<const cpp_entity *> xpath;

	auto p = e.parent();
	while (p) {
		xpath.emplace_back(&p.value());
		if (auto nextParent = p.value().parent()) {
			switch (nextParent.value().kind()) {
			case cpp_entity_kind::variable_template_t:
				if (static_cast<const cpp_variable_template&>(nextParent.value()).variable().name() == p.value().name()) {
					p = nextParent.value().parent();
				}
				break;
			case cpp_entity_kind::function_template_t:
				if (static_cast<const cpp_function_template&>(nextParent.value()).function().name() == p.value().name()) {
					p = nextParent.value().parent();
				}
				break;
			case cpp_entity_kind::class_template_t:
				if (static_cast<const cpp_class_template&>(nextParent.value()).class_().name() == p.value().name()) {
					p = nextParent.value().parent();
				}
				break;
			case cpp_entity_kind::class_template_specialization_t:
				if (static_cast<const cpp_class_template_specialization&>(nextParent.value()).class_().name() == p.value().name()) {
					p = nextParent.value().parent();
				}
				break;
			case cpp_entity_kind::alias_template_t:
				if (static_cast<const cpp_alias_template&>(nextParent.value()).type_alias().name() == p.value().name()) {
					p = nextParent.value().parent();
				}
				break;
			default:
				p = nextParent;
				break;
			}
		} else {
			p = p.value().parent();
		}
	}

	std::reverse(xpath.begin(), xpath.end());

	StringStream scopedName;
	for (auto &it : xpath) {
		auto name = getScopeName(*it);
		if (!name.empty()) {
			scopedName << "::" << name;
		}
	}

	switch (e.kind()) {
	case cpp_entity_kind::file_t:
	case cpp_entity_kind::macro_parameter_t:
	case cpp_entity_kind::include_directive_t:
	case cpp_entity_kind::language_linkage_t:
	case cpp_entity_kind::namespace_alias_t:
	case cpp_entity_kind::using_directive_t:
	case cpp_entity_kind::using_declaration_t:
	case cpp_entity_kind::access_specifier_t:
	case cpp_entity_kind::base_class_t:
	case cpp_entity_kind::function_parameter_t:
	case cpp_entity_kind::friend_t:
	case cpp_entity_kind::template_type_parameter_t:
	case cpp_entity_kind::non_type_template_parameter_t:
	case cpp_entity_kind::template_template_parameter_t:
	case cpp_entity_kind::function_template_specialization_t:
	case cpp_entity_kind::alias_template_t:
	case cpp_entity_kind::static_assert_t:
	case cpp_entity_kind::unexposed_t:
	case cpp_entity_kind::count:
		return String();

	case cpp_entity_kind::macro_definition_t:
		if (static_cast<const cpp_macro_definition &>(e).is_function_like()) {
			StringStream str;
			str << e.name() << "(";
			bool started = false;
			for (auto &it : static_cast<const cpp_macro_definition &>(e).parameters()) {
				if (started) { str << ","; } else { started = true; }
				str << it.name();
			}
			if (static_cast<const cpp_macro_definition &>(e).is_variadic()) {
				if (started) { str << ","; } else { started = true; }
				str << "...";
			}
			str << ")";
		} else {
			return String(e.name());
		}
		break;

	case cpp_entity_kind::namespace_t:
	case cpp_entity_kind::enum_t:
	case cpp_entity_kind::enum_value_t:
	case cpp_entity_kind::concept_t:
		scopedName << "::" << getScopeName(e);
		break;

	case cpp_entity_kind::class_t:
		if (auto p = e.parent()) {
			if (p.value().kind() == cpp_entity_kind::class_template_t) {
				return scopedName.str(); // name is already on scope
			}
		}
		scopedName << "::" << getScopeName(e);
		break;

	case cpp_entity_kind::member_variable_t:
	case cpp_entity_kind::bitfield_t:
	case cpp_entity_kind::variable_t:
		if (auto p = e.parent()) {
			if (p.value().kind() == cpp_entity_kind::variable_template_t) {
				return scopedName.str(); // name is already on scope
			}
		}
		scopedName << "::" << getScopeName(e);
		break;

	case cpp_entity_kind::function_t:
	case cpp_entity_kind::member_function_t:
	case cpp_entity_kind::conversion_op_t:
	case cpp_entity_kind::constructor_t:
	case cpp_entity_kind::destructor_t:
		if (auto p = e.parent()) {
			if (p.value().kind() == cpp_entity_kind::function_template_t) {
				return scopedName.str(); // name is already on scope
			}
		}
		scopedName << "::" << getScopeName(e);
		break;

	case cpp_entity_kind::type_alias_t:
		if (auto p = e.parent()) {
			if (p.value().kind() == cpp_entity_kind::alias_template_t) {
				return scopedName.str(); // name is already on scope
			}
		}
		scopedName << "::" << getScopeName(e);
		break;
		break;

	case cpp_entity_kind::variable_template_t:
	case cpp_entity_kind::function_template_t:
	case cpp_entity_kind::class_template_t:
	case cpp_entity_kind::class_template_specialization_t:
		scopedName << "::" << getScopeName(e);
		break;
	}

	return scopedName.str();
}

}
