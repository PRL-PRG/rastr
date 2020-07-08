#ifndef RASTR_AST_TYPE_HPP
#define RASTR_AST_TYPE_HPP

#include <string>

namespace rastr {
namespace ast {

enum class Type {
    DoubleLiteralRNode,
    IntegerLiteralRNode,
    ComplexLiteralRNode,
    LogicalLiteralRNode,
    RawLiteralRNode,
    CharacterLiteralRNode,
    UndefinedNode
};

const std::string type_to_string(const Type type);

Type string_to_type(const std::string& type);

} // namespace ast
} // namespace rastr

#endif /* RASTR_AST_TYPE_HPP */
