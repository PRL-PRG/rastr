#ifndef RASTR_AST_DELIMITED_RNODE_HPP
#define RASTR_AST_DELIMITED_RNODE_HPP

#include "RNode.hpp"
#include "DelimiterRNode.hpp"

namespace rastr {
namespace ast {

class DelimitedRNode: public virtual RNode {
  public:
    explicit DelimitedRNode(DelimiterRNodeSPtr opening_delimiter,
                            DelimiterRNodeSPtr closing_delimiter)
        : RNode()
        , opening_delimiter_(opening_delimiter)
        , closing_delimiter_(closing_delimiter) {
    }

    DelimiterRNodeSPtr get_opening_delimiter() const {
        return opening_delimiter_;
    }

    void set_opening_delimiter(DelimiterRNodeSPtr opening_delimiter) {
        opening_delimiter_ = opening_delimiter;
    }

    DelimiterRNodeSPtr get_closing_delimiter() const {
        return closing_delimiter_;
    }

    void set_closing_delimiter(DelimiterRNodeSPtr closing_delimiter) {
        closing_delimiter_ = closing_delimiter;
    }

    static void initialize();

    static void finalize();

    static SEXP get_class();

  private:
    DelimiterRNodeSPtr opening_delimiter_;
    DelimiterRNodeSPtr closing_delimiter_;

    static SEXP class_;
};

using DelimitedRNodeSPtr = std::shared_ptr<DelimitedRNode>;

} // namespace ast
} // namespace rastr

#endif /* RASTR_AST_DELIMITED_RNODE_HPP */
