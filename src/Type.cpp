#include "Type.hpp"

namespace rastr {
namespace ast {

const std::string type_to_string(const Type type) {
    switch (type) {
    case Type::DoubleLiteralExpressionRNode:
        return "DoubleLiteralExpressionRNode";
    case Type::IntegerLiteralExpressionRNode:
        return "IntegerLiteralExpressionRNode";
    case Type::ComplexLiteralExpressionRNode:
        return "ComplexLiteralExpressionRNode";
    case Type::LogicalLiteralExpressionRNode:
        return "LogicalLiteralExpressionRNode";
    case Type::RawLiteralExpressionRNode:
        return "RawLiteralExpressionRNode";
    case Type::CharacterLiteralExpressionRNode:
        return "CharacterLiteralExpressionRNode";
    case Type::DelimiterRNode:
        return "DelimiterRNode";
    case Type::DelimitedRNode:
        return "DelimitedRNode";
    case Type::SymbolExpressionRNode:
        return "SymbolExpressionRNode";
    case Type::KeywordRNode:
        return "KeywordRNode";
    case Type::SeparatorRNode:
        return "SeparatorRNode";
    case Type::ForLoopExpressionRNode:
        return "ForLoopExpressionRNode";
    case Type::WhileLoopExpressionRNode:
        return "WhileLoopExpressionRNode";
    case Type::RepeatLoopExpressionRNode:
        return "RepeatLoopExpressionRNode";
    case Type::ParameterSequenceRNode:
        return "ParameterSequenceRNode";
    case Type::ArgumentSequenceRNode:
        return "ArgumentSequenceRNode";
    case Type::FunctionDefinitionExpressionRNode:
        return "FunctionDefinitionExpressionRNode";
    case Type::FunctionCallExpressionRNode:
        return "FunctionCallExpressionRNode";
    case Type::IfConditionalExpressionRNode:
        return "IfConditionalExpressionRNode";
    case Type::IfElseConditionalExpressionRNode:
        return "IfElseConditionalExpressionRNode";
    case Type::UndefinedNode:
        return "UndefinedNode";
    }
    return "UndefinedNode";
}

Type string_to_type(const std::string& type) {
    if (type == "DoubleLiteralExpressionRNode") {
        return Type::DoubleLiteralExpressionRNode;
    } else if (type == "IntegerLiteralExpressionRNode") {
        return Type::IntegerLiteralExpressionRNode;
    } else if (type == "ComplexLiteralExpressionRNode") {
        return Type::ComplexLiteralExpressionRNode;
    } else if (type == "LogicalLiteralExpressionRNode") {
        return Type::LogicalLiteralExpressionRNode;
    } else if (type == "RawLiteralExpressionRNode") {
        return Type::RawLiteralExpressionRNode;
    } else if (type == "CharacterLiteralExpressionRNode") {
        return Type::CharacterLiteralExpressionRNode;
    } else if (type == "DelimiterRNode") {
        return Type::DelimiterRNode;
    } else if (type == "DelimitedRNode") {
        return Type::DelimitedRNode;
    } else if (type == "SymbolExpressionRNode") {
        return Type::SymbolExpressionRNode;
    } else if (type == "KeywordRNode") {
        return Type::KeywordRNode;
    } else if (type == "SeparatorRNode") {
        return Type::SeparatorRNode;
    } else if (type == "ForLoopExpressionRNode") {
        return Type::ForLoopExpressionRNode;
    } else if (type == "WhileLoopExpressionRNode") {
        return Type::WhileLoopExpressionRNode;
    } else if (type == "RepeatLoopExpressionRNode") {
        return Type::RepeatLoopExpressionRNode;
    } else if (type == "ParameterSequenceRNode") {
        return Type::ParameterSequenceRNode;
    } else if (type == "ArgumentSequenceRNode") {
        return Type::ArgumentSequenceRNode;
    } else if (type == "FunctionDefinitionExpressionRNode") {
        return Type::FunctionDefinitionExpressionRNode;
    } else if (type == "FunctionCallExpressionRNode") {
        return Type::FunctionCallExpressionRNode;
    } else if (type == "IfConditionalExpressionRNode") {
        return Type::IfConditionalExpressionRNode;
    } else if (type == "IfElseConditionalExpressionRNode") {
        return Type::IfElseConditionalExpressionRNode;
    } else {
        return Type::UndefinedNode;
    }
}

} // namespace ast
} // namespace rastr