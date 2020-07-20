#ifndef RASTR_AST_FUNCTION_CALL_EXPRESSION_RNODE_HPP
#define RASTR_AST_FUNCTION_CALL_EXPRESSION_RNODE_HPP

#include "ExpressionSequenceRNode.hpp"
#include "KeywordRNode.hpp"
#include "ExpressionRNode.hpp"

namespace rastr {
namespace ast {

class FunctionCallExpressionRNode: public ExpressionRNode {
  public:
    explicit FunctionCallExpressionRNode(ExpressionRNodeSPtr function,
                                         ExpressionSequenceRNodeSPtr arguments)
        : ExpressionRNode(), function_(function), arguments_(arguments) {
        set_type(Type::FunctionCallExpressionRNode);
    }

    ExpressionRNodeSPtr get_function() const {
        return function_;
    }

    void set_function(ExpressionRNodeSPtr function) {
        function_ = function;
    }

    ExpressionSequenceRNodeSPtr get_arguments() const {
        return arguments_;
    }

    void set_arguments(ExpressionSequenceRNodeSPtr arguments) {
        arguments_ = arguments;
    }

    static void initialize();

    static void finalize();

    static SEXP get_class();

  private:
    ExpressionSequenceRNodeSPtr arguments_;
    ExpressionRNodeSPtr function_;

    static SEXP class_;
}; // namespace ast

using FunctionCallExpressionRNodeSPtr =
    std::shared_ptr<FunctionCallExpressionRNode>;

} // namespace ast
} // namespace rastr

#endif /* RASTR_AST_FUNCTION_CALL_EXPRESSION_RNODE_HPP */
