#include "r_complex_literal_expression_r_node.h"
#include "ComplexLiteralExpressionRNode.hpp"

using rastr::from_sexp;
using rastr::to_sexp;
using rastr::ast::ComplexLiteralExpressionRNode;
using rastr::ast::ComplexLiteralExpressionRNodeSPtr;

SEXP r_complex_literal_expression_r_node_create(SEXP r_representation) {
    Rcomplex representation = COMPLEX(r_representation)[0];

    ComplexLiteralExpressionRNodeSPtr node =
        std::make_shared<ComplexLiteralExpressionRNode>(representation);

    return to_sexp<ComplexLiteralExpressionRNode>(node);
}

SEXP r_complex_literal_expression_r_node_get_representation(SEXP r_node) {
    ComplexLiteralExpressionRNodeSPtr node =
        from_sexp<ComplexLiteralExpressionRNode>(r_node);

    const Rcomplex& representation = node->get_representation();

    SEXP r_representation = PROTECT(allocVector(CPLXSXP, 1));

    COMPLEX(r_representation)[0].r = representation.r;
    COMPLEX(r_representation)[0].i = representation.i;

    UNPROTECT(1);

    return r_representation;
}

SEXP r_complex_literal_expression_r_node_set_representation(
    SEXP r_node,
    SEXP r_representation) {
    ComplexLiteralExpressionRNodeSPtr node =
        from_sexp<ComplexLiteralExpressionRNode>(r_node);

    Rcomplex representation = COMPLEX(r_representation)[0];

    node->set_representation(representation);

    return r_node;
}