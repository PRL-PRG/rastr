#include <R.h>
#include <R_ext/Error.h>
#include <Rdefines.h>

extern "C" {
SEXP r_symbol_expression_r_node_create(SEXP r_representation);
SEXP r_symbol_expression_r_node_get_representation(SEXP r_node);
}