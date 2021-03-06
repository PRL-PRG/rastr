#include "UnaryOperationExpressionRNode.hpp"

namespace rastr {
namespace ast {

SEXP UnaryOperationExpressionRNode::class_ = NULL;

void UnaryOperationExpressionRNode::initialize() {
    class_ = rastr::create_class({"rastr_ast_node_r_expression_operation_unary",
                                  "rastr_ast_node_r_expression_operation",
                                  "rastr_ast_node_r_expression",
                                  "rastr_ast_node_r",
                                  "rastr_ast_node",
                                  "rastr_ast_operator_i"});
    R_PreserveObject(class_);
}

void UnaryOperationExpressionRNode::finalize() {
    R_ReleaseObject(class_);
    class_ = NULL;
}

SEXP UnaryOperationExpressionRNode::get_class() {
    return class_;
}

} // namespace ast
} // namespace rastr
