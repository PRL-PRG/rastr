#include "ast.hpp"
#include <string>

namespace rastr {
namespace parser {

using rastr::ast::FileRNodeSPtr;
using rastr::ast::ProgramRNodeSPtr;

ProgramRNodeSPtr parse_stdin(bool debug_lexer, bool debug_parser);

ProgramRNodeSPtr
parse_string(const char* string, bool debug_lexer, bool debug_parser);

FileRNodeSPtr
parse_file(const std::string& filepath, bool debug_lexer, bool debug_parser);

} // namespace parser
} // namespace rastr
