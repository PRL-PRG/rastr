#include "r_character_literal_expression_r_node.h"
#include "CharacterLiteralExpressionRNode.hpp"
#include "r_cast.hpp"

using rastr::ast::CharacterLiteralExpressionRNode;
using rastr::ast::CharacterLiteralExpressionRNodeSPtr;

SEXP r_character_literal_expression_r_node_create(SEXP r_representation) {
    const char* representation = CHAR(asChar(r_representation));

    CharacterLiteralExpressionRNodeSPtr node =
        std::make_shared<CharacterLiteralExpressionRNode>(representation);

    return to_sexp<CharacterLiteralExpressionRNode>(node);
}

SEXP r_character_literal_expression_r_node_get_representation(SEXP r_node) {
    CharacterLiteralExpressionRNodeSPtr node =
        from_sexp<CharacterLiteralExpressionRNode>(r_node);

    const std::string& representation = node->get_representation();

    return mkString(representation.c_str());
}

SEXP r_character_literal_expression_r_node_set_representation(
    SEXP r_node,
    SEXP r_representation) {
    CharacterLiteralExpressionRNodeSPtr node =
        from_sexp<CharacterLiteralExpressionRNode>(r_node);

    const char* representation = CHAR(asChar(r_representation));

    node->set_representation(representation);

    return r_node;
}
