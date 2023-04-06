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

static void writeTypePrefix(StringStream &output, const cppast::cpp_type& type);
static void writeTypeSuffix(StringStream &output, const cppast::cpp_type& type);

static void write_literal(StringStream& output, const cppast::cpp_literal_expression& expr) {
	using namespace cppast;

	auto type_kind = cpp_void;
	if (expr.type().kind() == cpp_type_kind::builtin_t) {
		type_kind = static_cast<const cpp_builtin_type&>(expr.type()).builtin_type_kind();
	} else if (expr.type().kind() == cpp_type_kind::pointer_t) {
		auto &pointee = static_cast<const cpp_pointer_type&>(expr.type()).pointee();
		if (pointee.kind() == cpp_type_kind::builtin_t) {
			auto &builtin_pointee = static_cast<const cpp_builtin_type&>(pointee);
			if (builtin_pointee.builtin_type_kind() == cpp_char || builtin_pointee.builtin_type_kind() == cpp_wchar
					|| builtin_pointee.builtin_type_kind() == cpp_char16
					|| builtin_pointee.builtin_type_kind() == cpp_char32)
				// pointer to char aka string
				type_kind = builtin_pointee.builtin_type_kind();
		}
	}

	switch (type_kind) {
	case cpp_void:
		output << expr.value();
		break;

	case cpp_bool:
		output << expr.value();
		break;

	case cpp_uchar:
	case cpp_ushort:
	case cpp_uint:
	case cpp_ulong:
	case cpp_ulonglong:
	case cpp_uint128:
	case cpp_schar:
	case cpp_short:
	case cpp_int:
	case cpp_long:
	case cpp_longlong:
	case cpp_int128:
		output << expr.value();
		break;

	case cpp_float:
	case cpp_double:
	case cpp_longdouble:
	case cpp_float128:
		output << expr.value();
		break;

	case cpp_char:
	case cpp_wchar:
	case cpp_char16:
	case cpp_char32:
		output << expr.value();
		break;

	case cpp_nullptr:
		output << expr.value();
		break;
	}
}

static void write_unexposed(StringStream &output, const cppast::cpp_unexposed_expression &expr) {
	for (auto &it : expr.expression()) {
		output << it.spelling;
	}
}

void writeExpression(StringStream &output, const cppast::cpp_expression& expr) {
    switch (expr.kind()) {
    case cppast::cpp_expression_kind::literal_t:
        write_literal(output, static_cast<const cppast::cpp_literal_expression&>(expr));
        break;
    case cppast::cpp_expression_kind::unexposed_t:
        write_unexposed(output, static_cast<const cppast::cpp_unexposed_expression&>(expr));
        break;
    }
}

static void write_template_arguments(StringStream &output, type_safe::optional<type_safe::array_ref<const cppast::cpp_template_argument>> arguments) {
    if (!arguments) {
        output << "<>";
    } else {
		output << "<";
		auto need_sep = false;
		for (auto &arg : arguments.value()) {
			if (need_sep)
				output << ",";
			else
				need_sep = true;

			if (auto type = arg.type())
				writeType(output, type.value(), false);
			else if (auto expr = arg.expression())
				writeExpression(output, expr.value());
			else if (auto templ = arg.template_ref())
				output << templ.value().name();
		}
		output << ">";
    }
}

static bool is_direct_complex(const cppast::cpp_type& type) noexcept {
	using namespace cppast;
	switch (type.kind()) {
	case cpp_type_kind::builtin_t:
	case cpp_type_kind::user_defined_t:
	case cpp_type_kind::auto_t:
	case cpp_type_kind::decltype_t:
	case cpp_type_kind::decltype_auto_t:
	case cpp_type_kind::cv_qualified_t:
	case cpp_type_kind::pointer_t:
	case cpp_type_kind::reference_t:
	case cpp_type_kind::template_parameter_t:
	case cpp_type_kind::template_instantiation_t:
	case cpp_type_kind::dependent_t:
	case cpp_type_kind::unexposed_t:
		return false;

	case cpp_type_kind::array_t:
	case cpp_type_kind::function_t:
	case cpp_type_kind::member_function_t:
	case cpp_type_kind::member_object_t:
		return true;
	}

	return false;
}

static void write_builtin(StringStream &output, const cppast::cpp_builtin_type& type) {
	output << cppast::to_string(type.builtin_type_kind());
}

static void write_user_defined(StringStream &output, const cppast::cpp_user_defined_type& type) {
	output << type.entity().name();
}

static void write_auto(StringStream &output, const cppast::cpp_auto_type &) {
	output << "auto";
}

static void write_decltype(StringStream &output, const cppast::cpp_decltype_type& type) {
	output << "decltype(";
	writeExpression(output, type.expression());
	output << ")";
}

static void write_decltype_auto(StringStream &output, const cppast::cpp_decltype_auto_type &) {
	output << "decltype(auto)";
}

static void write_cv_qualified_prefix(StringStream &output, const cppast::cpp_cv_qualified_type& type) {
	writeTypePrefix(output, type.type());

	if (is_direct_complex(type.type()))
		output << "(";

	if (is_const(type.cv_qualifier())) {
		output << " const";
	}
	if (is_volatile(type.cv_qualifier())) {
		output << " volatile";
	}
}

static void write_cv_qualified_suffix(StringStream &output, const cppast::cpp_cv_qualified_type& type) {
	if (is_direct_complex(type.type()))
		output << ")";
	writeTypeSuffix(output, type.type());
}

static bool pointer_requires_paren(const cppast::cpp_pointer_type& type) {
	auto kind = type.pointee().kind();
	return kind == cppast::cpp_type_kind::function_t || kind == cppast::cpp_type_kind::array_t;
}

static void write_pointer_prefix(StringStream &output, const cppast::cpp_pointer_type& type) {
	writeTypePrefix(output, type.pointee());

	if (pointer_requires_paren(type))
		output << "(";

	output << "*";
}

static void write_pointer_suffix(StringStream &output, const cppast::cpp_pointer_type& type) {
	if (pointer_requires_paren(type))
		output << ")";
	writeTypeSuffix(output, type.pointee());
}

static void write_reference_prefix(StringStream &output, const cppast::cpp_reference_type& type) {
	writeTypePrefix(output, type.referee());

	if (is_direct_complex(type.referee()))
		output << "(";

	if (type.reference_kind() == cppast::cpp_ref_lvalue)
		output << "&";
	else if (type.reference_kind() == cppast::cpp_ref_rvalue)
		output << "&&";
}

static void write_reference_suffix(StringStream &output, const cppast::cpp_reference_type& type) {
	if (is_direct_complex(type.referee()))
		output << ")";
	writeTypeSuffix(output, type.referee());
}

static void write_array_prefix(StringStream &output, const cppast::cpp_array_type& type) {
	writeTypePrefix(output, type.value_type());
}

static void write_array_suffix(StringStream &output, const cppast::cpp_array_type& type) {
	output << "[";
	if (type.size()) {
		writeExpression(output, type.size().value());
	}
	output << "]";
	writeTypeSuffix(output, type.value_type());
}

static void write_function_prefix(StringStream &output, const cppast::cpp_function_type& type) {
	writeTypePrefix(output, type.return_type());
}

template <typename T>
static void write_parameters(StringStream &output, const T& type) {
	output << "(";

	auto need_sep = false;
	for (auto& param : type.parameter_types()) {
		if (need_sep)
			output << ",";
		else
			need_sep = true;
		writeTypePrefix(output, param);
		writeTypeSuffix(output, param);
	}
	if (type.is_variadic()) {
		if (need_sep)
			output << ",";
		output << "...";
	}

	output << ")";
}

static void write_function_suffix(StringStream &output, const cppast::cpp_function_type& type) {
	write_parameters(output, type);

	writeTypeSuffix(output, type.return_type());
}

static const cppast::cpp_type& strip_class_type(const cppast::cpp_type& type, cppast::cpp_cv* cv, cppast::cpp_reference* ref) {
	using namespace cppast;
	if (type.kind() == cpp_type_kind::cv_qualified_t) {
		auto& cv_qual = static_cast<const cpp_cv_qualified_type&>(type);
		if (cv)
			*cv = cv_qual.cv_qualifier();
		return strip_class_type(cv_qual.type(), cv, ref);
	} else if (type.kind() == cpp_type_kind::reference_t) {
		auto& ref_type = static_cast<const cpp_reference_type&>(type);
		if (ref)
			*ref = ref_type.reference_kind();
		return strip_class_type(ref_type.referee(), cv, ref);
	} else {
		return type;
	}
}

static void write_member_function_prefix(StringStream &output, const cppast::cpp_member_function_type& type) {
	writeTypePrefix(output, type.return_type());

	output << "(";
	writeTypePrefix(output, strip_class_type(type.class_type(), nullptr, nullptr));
	output << "::";
}

static void write_member_function_suffix(StringStream &output, const cppast::cpp_member_function_type& type) {
	using namespace cppast;
	output << ")";
	write_parameters(output, type);

	auto cv  = cpp_cv_none;
	auto ref = cpp_ref_none;
	strip_class_type(type.class_type(), &cv, &ref);

	if (cv == cpp_cv_const_volatile)
		output << "const volatile";
	else if (is_const(cv))
		output << "const";
	else if (is_volatile(cv))
		output << "volatile";

	if (ref == cpp_ref_lvalue)
		output << "&";
	else if (ref == cpp_ref_rvalue)
		output << "&&";

	writeTypeSuffix(output, type.return_type());
}

static void write_member_object_prefix(StringStream &output, const cppast::cpp_member_object_type& type) {
	writeTypePrefix(output, type.object_type());
	output << "(";
	writeTypePrefix(output, type.class_type());
	output << "::";
}

static void write_member_object_suffix(StringStream &output, const cppast::cpp_member_object_type&) {
	output << ")";
}

static void write_template_parameter(StringStream &output, const cppast::cpp_template_parameter_type& type) {
	output << type.entity().name();
}

static void write_template_instantiation(StringStream &output, const cppast::cpp_template_instantiation_type& type) {
	output << type.primary_template().name();

	if (type.arguments_exposed()) {
		write_template_arguments(output, type.arguments());
	} else {
		output << "<" << type.unexposed_arguments() << ">";
	}
}

static void write_dependent(StringStream &output, const cppast::cpp_dependent_type& type) {
	output << "typename ";
	writeType(output, type.dependee(), false);
	output << "::" << type.name();
}

static void write_unexposed(StringStream &output, const cppast::cpp_unexposed_type& type) {
	output << type.name();
}

static void writeTypePrefix(StringStream &output, const cppast::cpp_type& type) {
    switch (type.kind())
    {
#define CPPAST_DETAIL_HANDLE(Name)                                                                 \
    case cppast::cpp_type_kind::Name##_t:                                                                  \
        write_##Name(output, static_cast<const cppast::cpp_##Name##_type&>(type));                         \
        break;

#define CPPAST_DETAIL_HANDLE_COMPLEX(Name)                                                         \
    case cppast::cpp_type_kind::Name##_t:                                                                  \
        write_##Name##_prefix(output, static_cast<const cppast::cpp_##Name##_type&>(type));                \
        break;

        CPPAST_DETAIL_HANDLE(builtin)
        CPPAST_DETAIL_HANDLE(user_defined)
        CPPAST_DETAIL_HANDLE(auto)
        CPPAST_DETAIL_HANDLE(decltype)
        CPPAST_DETAIL_HANDLE(decltype_auto)
        CPPAST_DETAIL_HANDLE_COMPLEX(cv_qualified)
        CPPAST_DETAIL_HANDLE_COMPLEX(pointer)
        CPPAST_DETAIL_HANDLE_COMPLEX(reference)
        CPPAST_DETAIL_HANDLE_COMPLEX(array)
        CPPAST_DETAIL_HANDLE_COMPLEX(function)
        CPPAST_DETAIL_HANDLE_COMPLEX(member_function)
        CPPAST_DETAIL_HANDLE_COMPLEX(member_object)
        CPPAST_DETAIL_HANDLE(template_parameter)
        CPPAST_DETAIL_HANDLE(template_instantiation)
        CPPAST_DETAIL_HANDLE(dependent)
        CPPAST_DETAIL_HANDLE(unexposed)
    }

#undef CPPAST_DETAIL_HANDLE
#undef CPPAST_DETAIL_HANDLE_COMPLEX
}

static void writeTypeSuffix(StringStream &output, const cppast::cpp_type& type) {
    switch (type.kind())
    {
#define CPPAST_DETAIL_HANDLE(Name)                                                                 \
    case cppast::cpp_type_kind::Name##_t:                                                                  \
        break;

#define CPPAST_DETAIL_HANDLE_COMPLEX(Name)                                                         \
    case cppast::cpp_type_kind::Name##_t:                                                                  \
        write_##Name##_suffix(output, static_cast<const cppast::cpp_##Name##_type&>(type));                \
        break;

        CPPAST_DETAIL_HANDLE(builtin)
        CPPAST_DETAIL_HANDLE(user_defined)
        CPPAST_DETAIL_HANDLE(auto)
        CPPAST_DETAIL_HANDLE(decltype)
        CPPAST_DETAIL_HANDLE(decltype_auto)
        CPPAST_DETAIL_HANDLE_COMPLEX(cv_qualified)
        CPPAST_DETAIL_HANDLE_COMPLEX(pointer)
        CPPAST_DETAIL_HANDLE_COMPLEX(reference)
        CPPAST_DETAIL_HANDLE_COMPLEX(array)
        CPPAST_DETAIL_HANDLE_COMPLEX(function)
        CPPAST_DETAIL_HANDLE_COMPLEX(member_function)
        CPPAST_DETAIL_HANDLE_COMPLEX(member_object)
        CPPAST_DETAIL_HANDLE(template_parameter)
        CPPAST_DETAIL_HANDLE(template_instantiation)
        CPPAST_DETAIL_HANDLE(dependent)
        CPPAST_DETAIL_HANDLE(unexposed)
    }

#undef CPPAST_DETAIL_HANDLE
#undef CPPAST_DETAIL_HANDLE_COMPLEX
}

void writeType(StringStream& output, const cppast::cpp_type &type, bool is_variadic) {
    writeTypePrefix(output, type);
    if (is_variadic) {
        output << "...";
    }
    writeTypeSuffix(output, type);
}

}
