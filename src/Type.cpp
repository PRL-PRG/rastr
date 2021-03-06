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
    case Type::CharacterLiteralExpressionRNode:
        return "CharacterLiteralExpressionRNode";
    case Type::RawStringLiteralExpressionRNode:
        return "RawStringLiteralExpressionRNode";
    case Type::ConstantLiteralExpressionRNode:
        return "ConstantLiteralExpressionRNode";
    case Type::NullLiteralExpressionRNode:
        return "NullLiteralExpressionRNode";
    case Type::NextExpressionRNode:
        return "NextExpressionRNode";
    case Type::BreakExpressionRNode:
        return "BreakExpressionRNode";
    case Type::DelimiterRNode:
        return "DelimiterRNode";
    case Type::SymbolRNode:
        return "SymbolRNode";
    case Type::TerminatedExpressionRNode:
        return "TerminatedExpressionRNode";
    case Type::SymbolExpressionRNode:
        return "SymbolExpressionRNode";
    case Type::KeywordRNode:
        return "KeywordRNode";
    case Type::ForLoopExpressionRNode:
        return "ForLoopExpressionRNode";
    case Type::WhileLoopExpressionRNode:
        return "WhileLoopExpressionRNode";
    case Type::RepeatLoopExpressionRNode:
        return "RepeatLoopExpressionRNode";
    case Type::ExpressionSequenceRNode:
        return "ExpressionSequenceRNode";
    case Type::ParameterSequenceRNode:
        return "ParameterSequenceRNode";
    case Type::DefaultValueParameterRNode:
        return "DefaultValueParameterRNode";
    case Type::NonDefaultValueParameterRNode:
        return "NonDefaultValueParameterRNode";
    case Type::TerminatedParameterRNode:
        return "TerminatedParameterRNode";
    case Type::FunctionDefinitionExpressionRNode:
        return "FunctionDefinitionExpressionRNode";
    case Type::FunctionCallExpressionRNode:
        return "FunctionCallExpressionRNode";
    case Type::IfConditionalExpressionRNode:
        return "IfConditionalExpressionRNode";
    case Type::IfElseConditionalExpressionRNode:
        return "IfElseConditionalExpressionRNode";
    case Type::OperatorRNode:
        return "OperatorRNode";
    case Type::BinaryOperationExpressionRNode:
        return "BinaryOperationExpressionRNode";
    case Type::UnaryOperationExpressionRNode:
        return "UnaryOperationExpressionRNode";
    case Type::InConditionRNode:
        return "InConditionRNode";
    case Type::ExpressionConditionRNode:
        return "ExpressionConditionRNode";
    case Type::IndexingExpressionRNode:
        return "IndexingExpressionRNode";
    case Type::SubsettingExpressionRNode:
        return "SubsettingExpressionRNode";
    case Type::BlockExpressionRNode:
        return "BlockExpressionRNode";
    case Type::MissingExpressionRNode:
        return "MissingExpressionRNode";
    case Type::GroupExpressionRNode:
        return "GroupExpressionRNode";
    case Type::EndNode:
        return "EndNode";
    case Type::BeginNode:
        return "BeginNode";
    case Type::RProgramNode:
        return "RProgramNode";
    case Type::RFileNode:
        return "RFileNode";
    case Type::UndefinedNode:
        return "UndefinedNode";
    }
    return "UndefinedNode";
} // namespace ast

Type string_to_type(const std::string& type) {
    if (type == "DoubleLiteralExpressionRNode") {
        return Type::DoubleLiteralExpressionRNode;
    } else if (type == "IntegerLiteralExpressionRNode") {
        return Type::IntegerLiteralExpressionRNode;
    } else if (type == "ComplexLiteralExpressionRNode") {
        return Type::ComplexLiteralExpressionRNode;
    } else if (type == "LogicalLiteralExpressionRNode") {
        return Type::LogicalLiteralExpressionRNode;
    } else if (type == "CharacterLiteralExpressionRNode") {
        return Type::CharacterLiteralExpressionRNode;
    } else if (type == "RawStringLiteralExpressionRNode") {
        return Type::RawStringLiteralExpressionRNode;
    } else if (type == "ConstantLiteralExpressionRNode") {
        return Type::ConstantLiteralExpressionRNode;
    } else if (type == "NullLiteralExpressionRNode") {
        return Type::NullLiteralExpressionRNode;
    } else if (type == "NextExpressionRNode") {
        return Type::NextExpressionRNode;
    } else if (type == "BreakExpressionRNode") {
        return Type::BreakExpressionRNode;
    } else if (type == "DelimiterRNode") {
        return Type::DelimiterRNode;
    } else if (type == "SymbolRNode") {
        return Type::SymbolRNode;
    } else if (type == "TerminatedExpressionRNode") {
        return Type::TerminatedExpressionRNode;
    } else if (type == "SymbolExpressionRNode") {
        return Type::SymbolExpressionRNode;
    } else if (type == "KeywordRNode") {
        return Type::KeywordRNode;
    } else if (type == "ForLoopExpressionRNode") {
        return Type::ForLoopExpressionRNode;
    } else if (type == "WhileLoopExpressionRNode") {
        return Type::WhileLoopExpressionRNode;
    } else if (type == "RepeatLoopExpressionRNode") {
        return Type::RepeatLoopExpressionRNode;
    } else if (type == "ExpressionSequenceRNode") {
        return Type::ExpressionSequenceRNode;
    } else if (type == "FunctionDefinitionExpressionRNode") {
        return Type::FunctionDefinitionExpressionRNode;
    } else if (type == "FunctionCallExpressionRNode") {
        return Type::FunctionCallExpressionRNode;
    } else if (type == "IfConditionalExpressionRNode") {
        return Type::IfConditionalExpressionRNode;
    } else if (type == "IfElseConditionalExpressionRNode") {
        return Type::IfElseConditionalExpressionRNode;
    } else if (type == "OperatorRNode") {
        return Type::OperatorRNode;
    } else if (type == "BinaryOperationExpressionRNode") {
        return Type::BinaryOperationExpressionRNode;
    } else if (type == "UnaryOperationExpressionRNode") {
        return Type::UnaryOperationExpressionRNode;
    } else if (type == "IndexingExpressionRNode") {
        return Type::IndexingExpressionRNode;
    } else if (type == "SubsettingExpressionRNode") {
        return Type::SubsettingExpressionRNode;
    } else if (type == "InConditionRNode") {
        return Type::InConditionRNode;
    } else if (type == "ExpressionConditionRNode") {
        return Type::ExpressionConditionRNode;
    } else if (type == "ParameterSequenceRNode") {
        return Type::ParameterSequenceRNode;
    } else if (type == "DefaultValueParameterRNode") {
        return Type::DefaultValueParameterRNode;
    } else if (type == "NonDefaultValueParameterRNode") {
        return Type::NonDefaultValueParameterRNode;
    } else if (type == "TerminatedParameterRNode") {
        return Type::TerminatedParameterRNode;
    } else if (type == "BlockExpressionRNode") {
        return Type::BlockExpressionRNode;
    } else if (type == "MissingExpressionRNode") {
        return Type::MissingExpressionRNode;
    } else if (type == "GroupExpressionRNode") {
        return Type::GroupExpressionRNode;
    } else if (type == "EndNode") {
        return Type::EndNode;
    } else if (type == "BeginNode") {
        return Type::BeginNode;
    } else if (type == "RProgramNode") {
        return Type::RProgramNode;
    } else if (type == "RFileNode") {
        return Type::RFileNode;
    } else {
        return Type::UndefinedNode;
    }
}

} // namespace ast
} // namespace rastr
