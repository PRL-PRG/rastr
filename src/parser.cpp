#include "ast.hpp"
#include "parser.hpp"
#include "RLexer.hpp"
#include "RParser.hxx"

#include <fstream>
#include <sstream>

namespace rastr {
namespace parser {

using rastr::ast::RFileNode;
using rastr::ast::RFileNodeSPtr;
using rastr::ast::RProgramNode;
using rastr::ast::RProgramNodeSPtr;

void check_filepath(const std::string& filepath) {
    std::ifstream fin(filepath);
    if (!fin.good()) {
        std::cerr << "Error: path '" << filepath << "' does not exist!";
        exit(1);
    }
}

RProgramNodeSPtr parse_(std::istream& input_stream,
                        const std::string& input_stream_name,
                        bool debug_lexer,
                        bool debug_parser) {
    RProgramNodeSPtr program;
    RLexer lexer(input_stream);
    RParser parser(lexer, program);
    parser.parse();
    return program;
}

RProgramNodeSPtr parse_stdin(bool debug_lexer, bool debug_parser) {
    std::string input_stream_name("<stdin>");
    return parse_(std::cin, input_stream_name, debug_lexer, debug_parser);
}

RProgramNodeSPtr
parse_string(const char* string, bool debug_lexer, bool debug_parser) {
    std::istringstream input_stream(string);
    std::string input_stream_name("<string>");
    return parse_(input_stream, input_stream_name, debug_lexer, debug_parser);
}

RFileNodeSPtr
parse_file(const std::string& filepath, bool debug_lexer, bool debug_parser) {
    /*  TODO: remove this check */
    check_filepath(filepath);
    std::ifstream input_stream(filepath);
    std::string input_stream_name(filepath);
    auto program =
        parse_(input_stream, input_stream_name, debug_lexer, debug_parser);
    return std::make_shared<RFileNode>(filepath, program);
}

} // namespace parser
} // namespace rastr
